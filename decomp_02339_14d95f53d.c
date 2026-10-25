// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14d95f53d FUN_14d95f53d body=127 status=ok
// SIG undefined FUN_14d95f53d(void)

/* WARNING: Instruction at (ram,0x00014d95f557) overlaps instruction at (ram,0x00014d95f556)
    */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x00014d95f5b2 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d95f53d(void)

{
  FUN_16586ac93(FUN_16586ac93);
  return;
}



// FUNCTION 14d95f662 FUN_14d95f662 body=156 status=ok
// SIG undefined FUN_14d95f662(void)

void FUN_14d95f662(void)

{
  FUN_165f814ea();
  return;
}



// FUNCTION 14d95f900 FUN_14d95f900 body=36 status=ok
// SIG undefined FUN_14d95f900(void)

/* WARNING: Removing unreachable block (ram,0x00014d95f9a3) */
/* WARNING: Removing unreachable block (ram,0x00014d95f9b4) */
/* WARNING: Removing unreachable block (ram,0x00014d95f9a9) */
/* WARNING: Removing unreachable block (ram,0x000160b6e492) */

void FUN_14d95f900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 in_RAX;
  ulonglong uVar5;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  longlong unaff_retaddr;
  
  *(undefined8 *)(&stack0xfffffffff1e3fe45 + unaff_retaddr) = param_3;
  uVar5 = *(ulonglong *)(&stack0xfffffffff1e3fe55 + unaff_retaddr);
  uVar1 = *(undefined8 *)(&stack0xfffffffff1e3fe45 + unaff_retaddr);
  *(ulonglong *)(&stack0xfffffffff1e3fe55 + unaff_retaddr) =
       *(ulonglong *)(&stack0xfffffffff1e3fe55 + unaff_retaddr) & unaff_R15;
  *(ulonglong *)(&stack0xfffffffff1e3fe55 + unaff_retaddr) =
       *(ulonglong *)(&stack0xfffffffff1e3fe55 + unaff_retaddr) ^ 0xffffffffffffffff;
  *(ulonglong *)(&stack0xfffffffff1e3fe55 + unaff_retaddr) =
       *(ulonglong *)(&stack0xfffffffff1e3fe55 + unaff_retaddr) & (uVar5 | unaff_R15);
  *(undefined8 *)(&stack0xfffffffff1e3fe4d + unaff_retaddr) =
       *(undefined8 *)(&stack0xfffffffff1e3fe4d + unaff_retaddr);
  *(undefined8 *)(&stack0xfffffffff1e3fe45 + unaff_retaddr) = unaff_R13;
  *(undefined8 *)(&stack0xfffffffff1e3fe3d + unaff_retaddr) = unaff_RBP;
  *(undefined8 *)(&stack0xfffffffff1e3fe3d + unaff_retaddr) = unaff_R14;
  *(undefined8 *)(&stack0xfffffffff1e3fe35 + unaff_retaddr) = 0x781e829;
  *(longlong *)(&stack0xfffffffff1e3fe35 + unaff_retaddr) =
       *(longlong *)(&stack0xfffffffff1e3fe35 + unaff_retaddr) + -0x781e819;
  *(ulonglong *)(&stack0xfffffffff1e3fe3d + unaff_retaddr) = unaff_R15;
  lVar3 = *(longlong *)(&stack0xfffffffff1e3fe35 + unaff_retaddr) + unaff_retaddr + -0xe1c01c3;
  uVar2 = *(ulonglong *)(&stack0xfffffffff1e3fe3d + unaff_retaddr);
  uVar5 = *(ulonglong *)(&stack0xfffffffff1e3fe4d + lVar3 + 0xe1c01c3);
  *(ulonglong *)(&stack0xfffffffff1e3fe4d + lVar3 + 0xe1c01c3) =
       ~*(ulonglong *)(&stack0xfffffffff1e3fe4d + lVar3 + 0xe1c01c3);
  *(ulonglong *)(&stack0xfffffffff1e3fe4d + lVar3 + 0xe1c01c3) =
       *(ulonglong *)(&stack0xfffffffff1e3fe4d + lVar3 + 0xe1c01c3) | uVar2;
  *(ulonglong *)(&stack0xfffffffff1e3fe4d + lVar3 + 0xe1c01c3) =
       (~uVar2 | uVar5) & *(ulonglong *)(&stack0xfffffffff1e3fe4d + lVar3 + 0xe1c01c3) ^
       0xffffffffffffffff;
  lVar3 = *(longlong *)(&stack0xfffffffff1e3fe45 + unaff_retaddr);
  *(undefined8 *)(&stack0xfffffffff1e3fe4d + unaff_retaddr) = in_RAX;
  *(ulonglong *)(&stack0xfffffffff1e3fe45 + unaff_retaddr) = uVar2;
  uVar4 = *(undefined8 *)(&stack0xfffffffff1e3fe45 + unaff_retaddr);
  *(undefined8 *)(&stack0xfffffffff1e3fe45 + unaff_retaddr) = uVar1;
  *(undefined8 *)(&stack0xfffffffff1e3fe3d + unaff_retaddr) = 0x160b6e3fc;
  uVar5 = FUN_15b919652();
  if ((uVar5 & 0x80) != 0) {
    uVar5 = CONCAT62((int6)(uVar5 >> 0x10),CONCAT11(~(byte)(uVar5 >> 8),(char)uVar5));
  }
  *(ulonglong *)(&stack0xfffffffff1e3fe3d + unaff_retaddr) = uVar5;
  *(undefined8 *)(&stack0xfffffffff1e3fe35 + unaff_retaddr) = unaff_RSI;
  uVar1 = *(undefined8 *)(lVar3 + -0x90);
  *(undefined8 *)(&stack0xfffffffff1e3fe3d + unaff_retaddr) = uVar4;
  *(undefined8 *)(&stack0xfffffffff1e3fe3d + unaff_retaddr) = uVar1;
  *(undefined8 *)(&stack0xfffffffff1e3fe35 + unaff_retaddr) = uVar1;
  *(undefined1 **)(&stack0xfffffffff1e3fe3d + unaff_retaddr) = &LAB_164b4d01b;
  FUN_16628effa();
  return;
}



// FUNCTION 14d95f9b4 FUN_14d95f9b4 body=142 status=ok
// SIG undefined FUN_14d95f9b4(void)

void FUN_14d95f9b4(void)

{
  FUN_14d9f3387();
  return;
}



// FUNCTION 14d95fa46 FUN_14d95fa46 body=33 status=ok
// SIG undefined FUN_14d95fa46(void)

void FUN_14d95fa46(void)

{
  return;
}



// FUNCTION 14d95faff thunk_FUN_14d95fb05 body=5 status=ok
// SIG undefined thunk_FUN_14d95fb05(void)

/* WARNING: Removing unreachable block (ram,0x00014d95fb96) */
/* WARNING: Removing unreachable block (ram,0x00014d95fba1) */
/* WARNING: Removing unreachable block (ram,0x00014d95fb9c) */

void thunk_FUN_14d95fb05(void)

{
  FUN_161c295c7();
  return;
}



// FUNCTION 14d95fb05 FUN_14d95fb05 body=154 status=ok
// SIG undefined FUN_14d95fb05(void)

/* WARNING: Removing unreachable block (ram,0x00014d95fb96) */
/* WARNING: Removing unreachable block (ram,0x00014d95fba1) */
/* WARNING: Removing unreachable block (ram,0x00014d95fb9c) */

void FUN_14d95fb05(void)

{
  FUN_161c295c7();
  return;
}



// FUNCTION 14d95fba1 FUN_14d95fba1 body=175 status=ok
// SIG undefined FUN_14d95fba1(void)

void FUN_14d95fba1(void)

{
  return;
}



// FUNCTION 14d95fd01 FUN_14d95fd01 body=140 status=ok
// SIG undefined FUN_14d95fd01(void)

void FUN_14d95fd01(void)

{
  FUN_1669fd404();
  return;
}



// FUNCTION 14d960113 FUN_14d960113 body=553 status=ok
// SIG undefined FUN_14d960113(void)

/* WARNING: Removing unreachable block (ram,0x00014d9601b1) */
/* WARNING: Removing unreachable block (ram,0x000161310215) */
/* WARNING: Removing unreachable block (ram,0x00014d96023e) */
/* WARNING: Removing unreachable block (ram,0x00014d960244) */
/* WARNING: Removing unreachable block (ram,0x00014d960249) */
/* WARNING: Removing unreachable block (ram,0x00014d904de8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d960113(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong unaff_RBX;
  undefined8 unaff_RDI;
  longlong lVar3;
  ulonglong unaff_R15;
  ulonglong in_stack_00000028;
  
  lVar3 = in_stack_00000028 + unaff_R15 + (in_stack_00000028 & unaff_R15) * -2;
  plVar1 = (longlong *)(lVar3 + -8);
  *(undefined8 *)(lVar3 + -0x10) = unaff_RDI;
  *plVar1 = 0;
  *plVar1 = *plVar1 - unaff_RBX;
  *plVar1 = -*plVar1;
  if (-1 < *plVar1) {
    uVar2 = FUN_160bdd560();
    return uVar2;
  }
  uVar2 = FUN_160bdd560();
  return uVar2;
}



// FUNCTION 14d96036c FUN_14d96036c body=162 status=ok
// SIG undefined FUN_14d96036c(void)

void FUN_14d96036c(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  
  FUN_164ae1398(local_res8,param_2,param_3,FUN_164ae1398);
  return;
}



// FUNCTION 14d9604a6 FUN_14d9604a6 body=378 status=ok
// SIG undefined FUN_14d9604a6(void)

/* WARNING: Removing unreachable block (ram,0x00014d960553) */

void FUN_14d9604a6(ulonglong param_1,DWORD param_2,LPVOID param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 unaff_RBP;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 in_stack_00000008;
  undefined8 local_res10;
  undefined8 local_res20;
  
  uVar2 = local_res20 ^ param_1;
  *(undefined8 *)(uVar2 - 8) = unaff_RBP;
  *(undefined8 *)(uVar2 - 0x10) = *(undefined8 *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 0x18) = unaff_R15;
  puVar1 = (ulonglong *)(uVar2 - 8);
  *puVar1 = 0x7df21439;
  *puVar1 = *puVar1 ^ 0x49b9db48;
  *(undefined8 *)(uVar2 - 0x18) = in_stack_00000008;
  *(undefined8 *)(uVar2 - 0x20) = unaff_R14;
  uVar3 = *(ulonglong *)(uVar2 - 8);
  *(ulonglong *)(uVar2 - 8) = *(ulonglong *)(uVar2 - 8) | 0xffffffffcbb4308e;
  uVar3 = ~(uVar3 & 0xffffffffcbb4308e) & *(ulonglong *)(uVar2 - 8);
  *(ulonglong *)(uVar2 - 8) = ~uVar3;
  if (uVar3 == 0) {
    *(longlong *)(uVar2 - 8) = *(longlong *)(uVar2 - 8) + -0x16249d978;
    *(ulonglong *)(uVar2 - 8) = ~*(ulonglong *)(uVar2 - 8);
    *(longlong *)(uVar2 - 8) = *(longlong *)(uVar2 - 8) + 1;
    *(undefined8 *)(uVar2 - 0x18) = *(undefined8 *)(uVar2 - 0x10);
    *(undefined4 *)(uVar2 - 0x14) = 0x71553442;
    *(uint *)(uVar2 - 0x14) = *(uint *)(uVar2 - 0x14) ^ 0x71553442;
    *(undefined4 *)(uVar2 - 0x18) = *(undefined4 *)(uVar2 - 0x18);
    if (*(int *)(uVar2 - 0x18) < 0) {
      *(undefined4 *)(uVar2 - 0x14) = 0xc764f063;
      *(int *)(uVar2 - 0x14) = *(int *)(uVar2 - 0x14) + 0x389b0f9c;
    }
                    /* WARNING: Could not recover jumptable at 0x00016249d952. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    HeapFree((HANDLE)(local_res10 ^ param_1),param_2,param_3);
    return;
  }
  FUN_16249d904();
  return;
}



// FUNCTION 14d960745 FUN_14d960745 body=161 status=ok
// SIG undefined FUN_14d960745(void)

void FUN_14d960745(ulonglong param_1)

{
  undefined8 unaff_RSI;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res20;
  
  *(undefined8 *)((local_res20 - param_1) + (param_1 ^ 0xffffffffffffffff | local_res20) * -2 + -10)
       = unaff_RSI;
  (*(code *)0x162eee83f)(local_res10,local_res8);
  return;
}



// FUNCTION 14d9607e7 FUN_14d9607e7 body=164 status=ok
// SIG undefined FUN_14d9607e7(void)

void FUN_14d9607e7(void)

{
  ulonglong in_RAX;
  ulonglong in_R9;
  longlong unaff_R12;
  
  FUN_160c75f8f(0xffffffffffffff80,FUN_160c75f8f,*(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,
                ~(~(~in_RAX | in_R9 | ~(in_R9 & ~in_RAX)) + 1 + ~(in_R9 & ~in_RAX) +
                 (~in_RAX | in_R9)));
  return;
}



// FUNCTION 14d96088c FUN_14d96088c body=470 status=ok
// SIG undefined FUN_14d96088c(void)

/* WARNING: Removing unreachable block (ram,0x0001569c1392) */
/* WARNING: Removing unreachable block (ram,0x000162289825) */
/* WARNING: Removing unreachable block (ram,0x000162289831) */
/* WARNING: Removing unreachable block (ram,0x000162289836) */
/* WARNING: Removing unreachable block (ram,0x00016228989e) */
/* WARNING: Removing unreachable block (ram,0x00015b311963) */
/* WARNING: Removing unreachable block (ram,0x0001622898a4) */
/* WARNING: Removing unreachable block (ram,0x000162289919) */
/* WARNING: Removing unreachable block (ram,0x00016228991c) */
/* WARNING: Removing unreachable block (ram,0x00016228994d) */
/* WARNING: Removing unreachable block (ram,0x000162289959) */
/* WARNING: Removing unreachable block (ram,0x000162289971) */
/* WARNING: Removing unreachable block (ram,0x000162289982) */
/* WARNING: Removing unreachable block (ram,0x000156bd44e9) */
/* WARNING: Removing unreachable block (ram,0x000157245622) */
/* WARNING: Removing unreachable block (ram,0x00015724562d) */
/* WARNING: Removing unreachable block (ram,0x0001572456d0) */
/* WARNING: Removing unreachable block (ram,0x0001572456d6) */
/* WARNING: Removing unreachable block (ram,0x00016228978e) */
/* WARNING: Removing unreachable block (ram,0x000162aba095) */
/* WARNING: Removing unreachable block (ram,0x000157245628) */
/* WARNING: Removing unreachable block (ram,0x00014d960916) */
/* WARNING: Removing unreachable block (ram,0x00014d960922) */
/* WARNING: Removing unreachable block (ram,0x00014d960960) */
/* WARNING: Removing unreachable block (ram,0x0001572454dc) */

void FUN_14d96088c(void)

{
  FUN_1569c1392();
  return;
}



// FUNCTION 14d960922 FUN_14d960922 body=9 status=ok
// SIG undefined FUN_14d960922(void)

void FUN_14d960922(void)

{
  return;
}



// FUNCTION 14d960a53 FUN_14d960a53 body=301 status=ok
// SIG undefined FUN_14d960a53(void)

/* WARNING: Removing unreachable block (ram,0x000165323f9a) */
/* WARNING: Removing unreachable block (ram,0x000165323fa5) */
/* WARNING: Removing unreachable block (ram,0x000165324047) */
/* WARNING: Removing unreachable block (ram,0x000165324053) */
/* WARNING: Removing unreachable block (ram,0x00016532405e) */
/* WARNING: Removing unreachable block (ram,0x000165324063) */
/* WARNING: Removing unreachable block (ram,0x000156bd2616) */
/* WARNING: Removing unreachable block (ram,0x000156bd269c) */
/* WARNING: Removing unreachable block (ram,0x000156bd26a0) */
/* WARNING: Removing unreachable block (ram,0x000165323fa0) */
/* WARNING: Removing unreachable block (ram,0x00014d960ae7) */
/* WARNING: Removing unreachable block (ram,0x0001614adf77) */
/* WARNING: Removing unreachable block (ram,0x00014d960b87) */
/* WARNING: Removing unreachable block (ram,0x000165323f11) */
/* WARNING: Removing unreachable block (ram,0x0001654b01fe) */
/* WARNING: Removing unreachable block (ram,0x0001654b0200) */

void FUN_14d960a53(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar2;
  
  uVar2 = ~unaff_RBP | *(ulonglong *)(unaff_RSI + -0x58);
  uVar1 = ~*(ulonglong *)(unaff_RSI + -0x58) | unaff_RBP;
  FUN_165066991(*(ulonglong *)(unaff_RSI + -0x38) ^ unaff_RBP,~((uVar1 - (uVar2 | uVar1)) + uVar2));
  (*(code *)0x15b2375c3)();
  return;
}



// FUNCTION 14d960aed FUN_14d960aed body=172 status=ok
// SIG undefined FUN_14d960aed(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d960aed(void)

{
  ulonglong unaff_R15;
  ulonglong local_res18;
  
  if (local_res18 + unaff_R15 < (local_res18 & unaff_R15) * 2) {
    return;
  }
  FUN_1650ad5cc();
  FUN_160ec212c();
  FUN_1656ea2d1(0x1a,0x8c955ae4);
  return;
}



// FUNCTION 14d960c18 FUN_14d960c18 body=149 status=ok
// SIG undefined FUN_14d960c18(void)

/* WARNING: Removing unreachable block (ram,0x00014d960c7b) */

void FUN_14d960c18(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  longlong unaff_RSI;
  undefined4 in_R10D;
  
  *(undefined4 *)(7 - ~(ulonglong)(&stack0x00000008 + (-~param_3 - unaff_RSI ^ 0xffffffffffffffff)))
       = in_R10D;
  thunk_FUN_157610f54((undefined4 *)
                      (7 - ~(ulonglong)
                            (&stack0x00000008 + (-~param_3 - unaff_RSI ^ 0xffffffffffffffff))),
                      param_2,thunk_FUN_157610f54);
  return;
}



// FUNCTION 14d960d4b FUN_14d960d4b body=324 status=ok
// SIG undefined FUN_14d960d4b(void)

void FUN_14d960d4b(longlong param_1,longlong param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_160be7cff((-~unaff_RBP - param_2) + param_1,*(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX);
  uVar1 = *(ulonglong *)(unaff_R13 + -0x60) | unaff_R15;
  (*(code *)0x1669d34cd)
            (1,uVar1,*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15,
             (~uVar1 | ~(*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15)) + uVar1 + 1);
  return;
}



// FUNCTION 14d960f39 FUN_14d960f39 body=332 status=ok
// SIG undefined FUN_14d960f39(void)

/* WARNING: Removing unreachable block (ram,0x00014d960fd9) */

void FUN_14d960f39(undefined8 param_1)

{
  longlong unaff_retaddr;
  
  if (-1 < *(longlong *)(unaff_retaddr + -8)) {
    return;
  }
  FUN_165ad0d5b(param_1);
  return;
}



// FUNCTION 14d961086 FUN_14d961086 body=302 status=ok
// SIG undefined FUN_14d961086(void)

ulonglong FUN_14d961086(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 unaff_RBP;
  undefined8 in_R10;
  longlong unaff_R13;
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
  ushort local_res18;
  uint6 uStackX_1a;
  undefined8 *local_res20;
  
  bVar11 = (local_res18 & 0x4000) != 0;
  bVar10 = (local_res18 & 0x800) != 0;
  bVar9 = (local_res18 & 0x200) != 0;
  bVar8 = 0;
  bVar7 = (local_res18 & 0x80) != 0;
  bVar6 = (local_res18 & 0x40) != 0;
  bVar5 = (local_res18 & 0x10) != 0;
  bVar4 = (local_res18 & 4) != 0;
  bVar3 = (local_res18 & 1) != 0;
  bVar15 = (uStackX_1a & 0x20) != 0;
  bVar12 = (uStackX_1a & 4) != 0;
  bVar14 = 0;
  bVar13 = 0;
  pcVar2 = (code *)swi(0x2e);
  (*pcVar2)();
  *local_res20 = in_R10;
  local_res20[-1] = in_R10;
  local_res20[-2] =
       (ulonglong)(bVar11 & 1) * 0x4000 | (ulonglong)(bVar10 & 1) * 0x800 |
       (ulonglong)((local_res18 & 0x400) != 0) * 0x400 | (ulonglong)(bVar9 & 1) * 0x200 |
       (ulonglong)(bVar8 & 1) * 0x100 | (ulonglong)(bVar7 & 1) * 0x80 |
       (ulonglong)(bVar6 & 1) * 0x40 | (ulonglong)(bVar5 & 1) * 0x10 | (ulonglong)(bVar4 & 1) * 4 |
       (ulonglong)(bVar3 & 1) | (ulonglong)(bVar15 & 1) * 0x200000 |
       (ulonglong)(bVar14 & 1) * 0x100000 | (ulonglong)(bVar13 & 1) * 0x80000 |
       (ulonglong)(bVar12 & 1) * 0x40000;
  uVar16 = local_res20[-2];
  local_res20[-2] =
       (ulonglong)((uVar16 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar16 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar16 & 0x400) != 0) * 0x400 | (ulonglong)((uVar16 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar16 & 0x100) != 0) * 0x100 | (ulonglong)((uVar16 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar16 & 0x40) != 0) * 0x40 | (ulonglong)((uVar16 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar16 & 4) != 0) * 4 | (ulonglong)((uVar16 & 1) != 0) |
       (ulonglong)((uVar16 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar16 & 0x40000) != 0) * 0x40000;
  local_res20[-3] = unaff_RBP;
  uVar16 = local_res20[-2];
  local_res20[-2] = local_res10;
  local_res20[-3] =
       (ulonglong)((uVar16 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar16 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar16 & 0x400) != 0) * 0x400 | (ulonglong)((uVar16 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar16 & 0x100) != 0) * 0x100 | (ulonglong)((uVar16 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar16 & 0x40) != 0) * 0x40 | (ulonglong)((uVar16 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar16 & 4) != 0) * 4 | (ulonglong)((uVar16 & 1) != 0) |
       (ulonglong)((uVar16 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar16 & 0x40000) != 0) * 0x40000;
  *local_res20 = 0x6dd7138;
  local_res20[-3] = 0x14d961116;
  FUN_15b92c45b();
  uVar1 = *(undefined8 *)(unaff_R13 + -0x60);
  *(undefined4 *)(local_res20 + -3) = 0xd5c0cbf;
  *(undefined4 *)((longlong)local_res20 + -0x14) = 0;
  local_res20[-3] = uVar1;
  uVar16 = *(ulonglong *)(unaff_R13 + -0x38);
  local_res20[-3] = &LAB_166409e29;
  return uVar16 ^ 8;
}



// FUNCTION 14d9611b5 FUN_14d9611b5 body=297 status=ok
// SIG undefined FUN_14d9611b5(void)

/* WARNING: Removing unreachable block (ram,0x000166a4ce23) */
/* WARNING: Removing unreachable block (ram,0x0001576369a4) */
/* WARNING: Removing unreachable block (ram,0x0001576369aa) */
/* WARNING: Removing unreachable block (ram,0x0001576369af) */
/* WARNING: Removing unreachable block (ram,0x000157878b59) */
/* WARNING: Removing unreachable block (ram,0x000157878bdc) */
/* WARNING: Removing unreachable block (ram,0x000157878be2) */
/* WARNING: Removing unreachable block (ram,0x0001665105cd) */
/* WARNING: Removing unreachable block (ram,0x0001665106d6) */
/* WARNING: Removing unreachable block (ram,0x0001665106dc) */
/* WARNING: Removing unreachable block (ram,0x000166a4cdce) */
/* WARNING: Removing unreachable block (ram,0x000166a4ce28) */
/* WARNING: Removing unreachable block (ram,0x000157636a48) */
/* WARNING: Removing unreachable block (ram,0x000157636a54) */
/* WARNING: Removing unreachable block (ram,0x000157636ad8) */
/* WARNING: Removing unreachable block (ram,0x000156d60999) */
/* WARNING: Removing unreachable block (ram,0x000157636ade) */
/* WARNING: Removing unreachable block (ram,0x000157636b6b) */
/* WARNING: Removing unreachable block (ram,0x000157636b70) */
/* WARNING: Removing unreachable block (ram,0x000157636b76) */
/* WARNING: Removing unreachable block (ram,0x000157636b7b) */
/* WARNING: Removing unreachable block (ram,0x000160c951ad) */
/* WARNING: Removing unreachable block (ram,0x00016173893e) */
/* WARNING: Removing unreachable block (ram,0x000161738944) */
/* WARNING: Removing unreachable block (ram,0x00014d9279fd) */
/* WARNING: Removing unreachable block (ram,0x00014d9612d6) */
/* WARNING: Removing unreachable block (ram,0x00014d9612e1) */
/* WARNING: Removing unreachable block (ram,0x00014d961312) */
/* WARNING: Removing unreachable block (ram,0x00014d961316) */
/* WARNING: Removing unreachable block (ram,0x00014d9612dc) */
/* WARNING: Removing unreachable block (ram,0x0001614141a8) */
/* WARNING: Removing unreachable block (ram,0x000160c95236) */
/* WARNING: Removing unreachable block (ram,0x000166b581f5) */
/* WARNING: Removing unreachable block (ram,0x000166b58251) */
/* WARNING: Removing unreachable block (ram,0x000160c951a2) */
/* WARNING: Removing unreachable block (ram,0x000160c95225) */
/* WARNING: Removing unreachable block (ram,0x000160c95230) */
/* WARNING: Removing unreachable block (ram,0x000156afa2f5) */
/* WARNING: Removing unreachable block (ram,0x000166b58257) */
/* WARNING: Removing unreachable block (ram,0x00015763691b) */
/* WARNING: Removing unreachable block (ram,0x000166b582e9) */

undefined8 FUN_14d9611b5(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  ushort *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong unaff_R12;
  ulonglong uVar22;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ulonglong in_stack_00000008;
  ulonglong *local_res18;
  
  local_res18[-1] = unaff_R14;
  local_res18[-2] = unaff_RSI;
  local_res18[-3] = unaff_R13;
  local_res18[-4] = param_1;
  uVar16 = local_res18[-4];
  lVar7 = local_res18[-3];
  local_res18[-3] = 0x14d96123d;
  FUN_1628233c8();
  local_res18[-3] = param_2 - (param_3 ^ unaff_R12);
  *(undefined4 *)(local_res18 + -4) = 0x591f16e6;
  *(int *)(local_res18 + -3) = (int)local_res18[-4];
  *(undefined4 *)((longlong)local_res18 + -0x14) = 0;
  local_res18[-3] = uVar16;
  local_res18[-4] = param_3 ^ unaff_R12;
  lVar12 = *(longlong *)(unaff_RDI + -0x30);
  local_res18[-3] = 0;
  uVar18 = local_res18[-3];
  local_res18[-3] = local_res18[-3] + lVar12;
  uVar6 = *(ulonglong *)(unaff_RDI + -0x60);
  local_res18[-3] = uVar16;
  lVar20 = local_res18[-3];
  lVar11 = (uVar16 - (uVar6 | uVar16)) + uVar6;
  if ((lVar11 >= 0) && (lVar11 < 0)) {
    local_res18[-2] = 0x166b58145;
    FUN_1565a1101();
    uVar6 = *local_res18;
    uVar22 = ~(*(ulonglong *)(lVar7 + -0x80) & in_stack_00000008) &
             (*(ulonglong *)(lVar7 + -0x80) | in_stack_00000008);
    uVar21 = *(ulonglong *)(lVar7 + -0x40) ^ in_stack_00000008;
    *local_res18 = *(ulonglong *)(lVar7 + -0x90);
    uVar19 = *local_res18 ^ in_stack_00000008;
    uVar18 = *(ulonglong *)(lVar7 + -0x60);
    *local_res18 = uVar6;
    lVar13 = uVar18 + in_stack_00000008 + (uVar18 & in_stack_00000008) * -2;
    uVar17 = *(ulonglong *)(lVar7 + -0x88) | in_stack_00000008;
    uVar18 = ~(*(ulonglong *)(lVar7 + -0x88) & in_stack_00000008);
    lVar15 = (uVar17 - (uVar18 | uVar17)) + uVar18;
    *local_res18 = *(ulonglong *)(lVar7 + -0x38);
    *(undefined4 *)(local_res18 + -1) = 0x37bfa3b;
    *(undefined4 *)((longlong)local_res18 + -4) = 0;
    puVar2 = (undefined8 *)((longlong)local_res18 + (local_res18[-1] - 0x37bfa33));
    uVar14 = *(ulonglong *)(lVar7 + -0x48) ^ in_stack_00000008;
    uVar18 = *(ulonglong *)(lVar7 + -0x78);
    bVar8 = (byte)uVar18 & 0x3f;
    uVar16 = *(ulonglong *)(lVar7 + -0x28) + in_stack_00000008 +
             (*(ulonglong *)(lVar7 + -0x28) & in_stack_00000008) * -2;
    uVar6 = *(ulonglong *)(lVar7 + -0x30);
    puVar2[-1] = 0x156b13b69;
    FUN_165fb3c12(uVar18 ^ in_stack_00000008);
    uVar10 = *puVar2;
    *(ushort *)(puVar2 + 1) = *(ushort *)(puVar2 + 1) & 0xfeff;
    plVar5 = (longlong *)puVar2[2];
    plVar5[-1] = uVar19;
    plVar5[-2] = uVar10;
    plVar5[-3] = ~(uVar17 << bVar8) & uVar17 << bVar8;
    lVar12 = plVar5[-2];
    plVar5[-2] = plVar5[-1];
    plVar5[-1] = 0;
    plVar5[-1] = plVar5[-1] + 0x14e18373c;
    plVar5[-2] = uVar22;
    plVar5[-3] = uVar22;
    plVar5[-4] = uVar21;
    plVar5[-2] = (longlong)thunk_FUN_15b642ca5;
    lVar20 = plVar5[-4];
    plVar5[-4] = (longlong)FUN_156b13c0b;
    FUN_14e183708();
    plVar3 = plVar5 + -1;
    plVar5[2] = plVar5[2] & uVar14;
    plVar5[2] = ~plVar5[2];
    plVar5[2] = plVar5[2] & (uVar16 | uVar14);
    lVar11 = *plVar3;
    *plVar3 = lVar20;
    plVar5[-2] = lVar13;
    uVar10 = plVar5[-2];
    plVar5[-2] = uVar6 ^ in_stack_00000008;
    *plVar5 = lVar15;
    *plVar3 = lVar11;
    plVar5[-2] = (longlong)FUN_156b13ca6;
    uVar9 = FUN_15b31cddc();
    *plVar5 = lVar7;
    *plVar3 = (longlong)FUN_165fb3c12;
    plVar5[-2] = lVar12;
    plVar5[-3] = uVar9;
    puVar1 = (ushort *)(plVar5 + 1);
    lVar12 = plVar5[-2];
    plVar5[-2] = uVar10;
    *puVar1 = (-0x101 - (*puVar1 | 0xfeff)) + *puVar1;
    *(undefined8 *)(plVar5[2] + -8) = 0xee5c8;
    uVar10 = FUN_1629c9909(lVar12);
    return uVar10;
  }
  local_res18[-3] = uVar16;
  puVar4 = local_res18 + -4;
  *puVar4 = uVar16;
  *(undefined1 *)puVar4 = 0x5a;
  local_res18[-3] = (lVar20 + -1) - ~uVar6;
  local_res18[-3] = local_res18[-3] - (lVar11 << ((char)*puVar4 + 0xa7U & 0x3f));
  local_res18[-3] = lVar11;
  local_res18[-4] = CONCAT71(0x1628233,(char)(CONCAT11(uVar18 < (ulonglong)-lVar12,200) >> 2));
  uVar10 = FUN_14d9279fd();
  return uVar10;
}



// FUNCTION 14d9612e1 FUN_14d9612e1 body=175 status=ok
// SIG undefined FUN_14d9612e1(void)

/* WARNING: Removing unreachable block (ram,0x00014d961312) */

void FUN_14d9612e1(void)

{
  ulonglong in_RAX;
  longlong unaff_RSI;
  longlong unaff_R12;
  
  FUN_1669b961b(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                *(ulonglong *)(unaff_R12 + -0x78) & in_RAX,
                ~((~in_RAX | *(ulonglong *)(unaff_R12 + -0x80)) &
                 (~*(ulonglong *)(unaff_R12 + -0x80) | in_RAX)),
                *(ulonglong *)(unaff_R12 + unaff_RSI) ^ in_RAX);
  return;
}



// FUNCTION 14d961390 FUN_14d961390 body=158 status=ok
// SIG undefined FUN_14d961390(void)

void FUN_14d961390(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  (*(code *)&LAB_160f7ecdc)
            (*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
             (*(ulonglong *)(unaff_R12 + -0x78) & in_RAX) * 2,
             *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX);
  return;
}



// FUNCTION 14d961434 FUN_14d961434 body=498 status=ok
// SIG undefined FUN_14d961434(void)

/* WARNING: Removing unreachable block (ram,0x00014d96155e) */
/* WARNING: Removing unreachable block (ram,0x00014d9615d3) */
/* WARNING: Removing unreachable block (ram,0x00014d9615db) */

void FUN_14d961434(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R12;
  ulonglong *unaff_R13;
  undefined8 unaff_retaddr;
  undefined8 uStackX_18;
  ulonglong local_res20;
  
  *unaff_R13 = ~param_1 & *unaff_R13 | param_1;
  *unaff_R13 = 0xffffffffffffffff - (unaff_RSI & *unaff_R13);
  uVar2 = ~param_1 | local_res20;
  if (!CARRY8(uVar2,param_1)) {
    FUN_15b592894(uStackX_18,param_2,param_3);
    return;
  }
  if (!CARRY8(uVar2,param_1)) {
    puVar1 = (ulonglong *)(param_5 + -8);
    *puVar1 = 0;
    *puVar1 = *puVar1 ^ unaff_RDI;
    *(undefined8 *)(param_5 + -0x10) = in_R11;
    *(undefined8 *)(param_5 + -0x18) = in_R11;
    *(undefined8 *)(param_5 + -0x20) = unaff_retaddr;
    *(undefined8 *)(param_5 + -0x10) = 0;
    *(longlong *)(param_5 + -0x10) = *(longlong *)(param_5 + -0x10) + *(longlong *)(param_5 + -8);
    *(undefined8 *)(param_5 + -0x18) = *(undefined8 *)(param_5 + -0x20);
    *(undefined4 *)(param_5 + -0x20) = 0x49fa7fcb;
    *(undefined4 *)(param_5 + -0x1c) = 0;
    *(undefined8 *)(param_5 + -0x10 + (*(ulonglong *)(param_5 + -0x20) ^ 0x49fa7fc3)) = 0;
    *(undefined8 *)(param_5 + -0x18) = unaff_R12;
    *(undefined1 **)(param_5 + -8) = &LAB_1651956e6 + *(longlong *)(param_5 + -8);
    FUN_14d7c10c5(param_1,uVar2 + param_1 + 1,*(undefined8 *)(param_5 + -0x10));
    return;
  }
  FUN_160c23c38();
  return;
}



// FUNCTION 14d9619c3 FUN_14d9619c3 body=108 status=ok
// SIG undefined FUN_14d9619c3(void)

void FUN_14d9619c3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ushort *puVar1;
  longlong unaff_R14;
  undefined8 uStackX_8;
  ulonglong uStackX_18;
  longlong local_res20;
  
  puVar1 = (ushort *)(&stack0xfffffffff093d034 + unaff_R14);
  *puVar1 = -*puVar1;
  *puVar1 = *puVar1 - 1;
  *puVar1 = *puVar1 | 0x100;
  *puVar1 = ~*puVar1;
  *(undefined8 *)(local_res20 + -8) = param_2;
  *(undefined8 *)(local_res20 + -0x10) = param_2;
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
  *(undefined8 *)(local_res20 + -8) = 0x15b6840;
  FUN_165c7153c(param_1,*(undefined8 *)(local_res20 + -0x10),param_3,uStackX_8);
  return;
}



// FUNCTION 14d961a45 FUN_14d961a45 body=145 status=ok
// SIG undefined FUN_14d961a45(void)

void FUN_14d961a45(undefined8 param_1,undefined8 param_2)

{
  FUN_166c8da0e(FUN_166c8da0e,param_2);
  return;
}



// FUNCTION 14d961ad6 FUN_14d961ad6 body=145 status=ok
// SIG undefined FUN_14d961ad6(void)

void FUN_14d961ad6(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  undefined8 unaff_R12;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = 0;
  *(longlong *)(local_res18 + -8) = *(longlong *)(local_res18 + -8) - param_4;
  *(longlong *)(local_res18 + -8) = -*(longlong *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -8) = 0;
  *(undefined8 *)(local_res18 + -0x18) = in_RAX;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R12;
  *(longlong *)(local_res18 + -8) = *(longlong *)(local_res18 + -8) + -0x165bb3949;
  uVar1 = *(undefined8 *)(local_res18 + -0x20);
  *(undefined8 *)(local_res18 + -0x20) = uVar1;
  *(undefined8 *)(local_res18 + -0x28) = uVar1;
  *(undefined1 **)(local_res18 + -0x20) = &LAB_14d961b68;
  FUN_165bb3908(param_1);
  return;
}



// FUNCTION 14d961c87 FUN_14d961c87 body=282 status=ok
// SIG undefined FUN_14d961c87(void)

void FUN_14d961c87(ulonglong param_1)

{
  longlong unaff_RDI;
  
  (*(code *)0x14dbe385a)
            (param_1,*(ulonglong *)(unaff_RDI + -0x68) + param_1 +
                     (*(ulonglong *)(unaff_RDI + -0x68) & param_1) * -2);
  return;
}



// FUNCTION 14d962085 FUN_14d962085 body=115 status=ok
// SIG undefined FUN_14d962085(void)

void FUN_14d962085(undefined8 param_1,undefined2 param_2)

{
  short unaff_DI;
  undefined8 in_stack_00000008;
  
  FUN_14e1a4f8d(param_1,param_2,in_stack_00000008);
  FUN_164aa9322(FUN_164aa9322,unaff_DI << 0xf);
  return;
}



// FUNCTION 14d9620fa FUN_14d9620fa body=101 status=ok
// SIG undefined FUN_14d9620fa(void)

void FUN_14d9620fa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  short unaff_DI;
  
  FUN_164aa9322(FUN_164aa9322,unaff_DI << 0xf,param_3,param_4);
  return;
}



// FUNCTION 14d962210 FUN_14d962210 body=165 status=ok
// SIG undefined FUN_14d962210(void)

void FUN_14d962210(void)

{
  return;
}



// FUNCTION 14d9622ba FUN_14d9622ba body=180 status=ok
// SIG undefined FUN_14d9622ba(void)

void FUN_14d9622ba(void)

{
  return;
}



// FUNCTION 14d96236f FUN_14d96236f body=43 status=ok
// SIG undefined FUN_14d96236f(void)

undefined8 FUN_14d96236f(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d9625dd FUN_14d9625dd body=131 status=ok
// SIG undefined FUN_14d9625dd(void)

void FUN_14d9625dd(void)

{
  FUN_15b6e42cc();
  return;
}



// FUNCTION 14d962700 FUN_14d962700 body=80 status=ok
// SIG undefined FUN_14d962700(void)

/* WARNING: Removing unreachable block (ram,0x00014d962839) */

void FUN_14d962700(ulonglong param_1)

{
  ushort *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong in_R10;
  longlong unaff_R12;
  byte unaff_R15B;
  ulonglong uStack_40;
  ulonglong auStack_18 [3];
  
  auStack_18[0] = param_1 ^ unaff_RBP;
  uVar8 = *(ulonglong *)(unaff_RSI + -0x58) ^ unaff_RBP;
  auStack_18[2] = *(undefined8 *)(unaff_RSI + -8);
  pcVar6 = FUN_1573c5156;
  auStack_18[1] = auStack_18[0];
  uVar5 = FUN_1573c5156();
  uStack_40 = *(ulonglong *)(unaff_R12 + -0x90) ^ uVar5;
  if ((longlong)
      ((uVar5 - (*(ulonglong *)(unaff_R12 + -0xa0) | uVar5)) + *(ulonglong *)(unaff_R12 + -0xa0)) <
      0) {
    FUN_15b9e3998();
    return;
  }
  bVar4 = FUN_15734c7c7();
  in_R10 = in_R10 ^ uVar8;
  uVar5 = *(ulonglong *)(unaff_RBP - 0x60);
  *(code **)(&stack0xffffffffffffffb8 + in_R10) = pcVar6;
  uVar7 = *(undefined8 *)(&stack0xffffffffffffffb8 + in_R10);
  uVar2 = *(undefined8 *)(unaff_RBP - 0x70);
  *(undefined8 *)(&stack0xffffffffffffffb8 + in_R10) = 0x15b9e3ab8;
  uVar5 = FUN_165b526e2(uVar7,pcVar6 + (uVar5 & (ulonglong)pcVar6) * -2 + uVar5,uVar2,
                        pcVar6 + (uVar5 & (ulonglong)pcVar6) * -2 + uVar5);
  lVar3 = *(longlong *)(&stack0xffffffffffffffe0 + in_R10);
  *(ulonglong *)(&stack0xffffffffffffffe0 + in_R10) =
       *(ulonglong *)(&stack0xffffffffffffffe0 + in_R10) & uVar5;
  *(undefined8 *)(&stack0xffffffffffffffc8 + in_R10) = uVar7;
  *(longlong *)(&stack0xffffffffffffffe0 + in_R10) =
       *(longlong *)(&stack0xffffffffffffffe0 + in_R10) << 1;
  uVar2 = *(undefined8 *)(&stack0xffffffffffffffc8 + in_R10);
  *(ulonglong *)(&stack0xffffffffffffffe0 + in_R10) =
       (lVar3 + uVar5) - *(longlong *)(&stack0xffffffffffffffe0 + in_R10);
  *(ulonglong *)((longlong)auStack_18 + in_R10) =
       *(ulonglong *)((longlong)auStack_18 + in_R10) ^ uVar5;
  *(undefined8 *)(&stack0xffffffffffffffd8 + in_R10) = uVar2;
  *(code **)(&stack0xffffffffffffffd0 + in_R10) = FUN_165b526e2;
  puVar1 = (ushort *)(&stack0xffffffffffffffe0 + in_R10);
  *(ulonglong *)(&stack0xffffffffffffffc8 + in_R10) =
       CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(~(bVar4 & unaff_R15B) + unaff_R15B) - ~bVar4);
  *(ushort **)(&stack0xffffffffffffffc8 + in_R10) = puVar1;
  *(longlong *)((longlong)&uStack_40 + in_R10) = (longlong)puVar1;
  *(undefined2 *)((longlong)&uStack_40 + in_R10) = 0xf505;
  FUN_164bc1195(CONCAT62((int6)((ulonglong)uVar2 >> 0x10),(*puVar1 + 0x100) - (*puVar1 & 0x100)));
  return;
}



// FUNCTION 14d962793 FUN_14d962793 body=166 status=ok
// SIG undefined FUN_14d962793(void)

/* WARNING: Removing unreachable block (ram,0x00014d962839) */

void FUN_14d962793(ulonglong param_1,ulonglong param_2)

{
  ushort *puVar1;
  undefined8 uVar2;
  byte bVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  ulonglong in_R10;
  longlong unaff_R12;
  byte unaff_R15B;
  ulonglong uStack_28;
  
  uStack_28 = *(ulonglong *)(unaff_R12 + -0x90) ^ in_RAX;
  if (-1 < (longlong)
           ((in_RAX - (*(ulonglong *)(unaff_R12 + -0xa0) | in_RAX)) +
           *(ulonglong *)(unaff_R12 + -0xa0))) {
    bVar3 = FUN_15734c7c7();
    in_R10 = in_R10 ^ param_2;
    uVar4 = *(ulonglong *)(unaff_RBP + -0x60);
    *(ulonglong *)(&stack0xffffffffffffffd0 + in_R10) = param_1;
    uVar5 = *(undefined8 *)(&stack0xffffffffffffffd0 + in_R10);
    lVar6 = uVar4 + param_1 + (uVar4 & param_1) * -2;
    uVar2 = *(undefined8 *)(unaff_RBP + -0x70);
    *(undefined8 *)(&stack0xffffffffffffffd0 + in_R10) = 0x15b9e3ab8;
    uVar4 = FUN_165b526e2(uVar5,lVar6,uVar2,lVar6);
    lVar6 = *(longlong *)(&stack0xfffffffffffffff8 + in_R10);
    *(ulonglong *)(&stack0xfffffffffffffff8 + in_R10) =
         *(ulonglong *)(&stack0xfffffffffffffff8 + in_R10) & uVar4;
    *(undefined8 *)(&stack0xffffffffffffffe0 + in_R10) = uVar5;
    *(longlong *)(&stack0xfffffffffffffff8 + in_R10) =
         *(longlong *)(&stack0xfffffffffffffff8 + in_R10) << 1;
    uVar2 = *(undefined8 *)(&stack0xffffffffffffffe0 + in_R10);
    *(ulonglong *)(&stack0xfffffffffffffff8 + in_R10) =
         (lVar6 + uVar4) - *(longlong *)(&stack0xfffffffffffffff8 + in_R10);
    *(ulonglong *)(&stack0x00000000 + in_R10) = *(ulonglong *)(&stack0x00000000 + in_R10) ^ uVar4;
    *(undefined8 *)(&stack0xfffffffffffffff0 + in_R10) = uVar2;
    *(code **)(&stack0xffffffffffffffe8 + in_R10) = FUN_165b526e2;
    puVar1 = (ushort *)(&stack0xfffffffffffffff8 + in_R10);
    *(ulonglong *)(&stack0xffffffffffffffe0 + in_R10) =
         CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(~(bVar3 & unaff_R15B) + unaff_R15B) - ~bVar3);
    *(ushort **)(&stack0xffffffffffffffe0 + in_R10) = puVar1;
    *(longlong *)((longlong)&uStack_28 + in_R10) = (longlong)puVar1;
    *(undefined2 *)((longlong)&uStack_28 + in_R10) = 0xf505;
    FUN_164bc1195(CONCAT62((int6)((ulonglong)uVar2 >> 0x10),(*puVar1 + 0x100) - (*puVar1 & 0x100)));
    return;
  }
  FUN_15b9e3998();
  return;
}



// FUNCTION 14d962839 FUN_14d962839 body=140 status=ok
// SIG undefined FUN_14d962839(void)

void FUN_14d962839(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x1659bdd4b)(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d96295b FUN_14d96295b body=325 status=ok
// SIG undefined FUN_14d96295b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00016528e356) */
/* WARNING: Removing unreachable block (ram,0x00016528e361) */
/* WARNING: Removing unreachable block (ram,0x00016528e35c) */
/* WARNING: Removing unreachable block (ram,0x000161d2aec3) */
/* WARNING: Removing unreachable block (ram,0x000161d2af41) */
/* WARNING: Removing unreachable block (ram,0x00016180fb32) */
/* WARNING: Removing unreachable block (ram,0x00014d962b2c) */
/* WARNING: Removing unreachable block (ram,0x00014d962b32) */
/* WARNING: Removing unreachable block (ram,0x000161d2af47) */

void FUN_14d96295b(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 unaff_RBP;
  longlong unaff_RSI;
  ushort *puVar3;
  longlong in_R10;
  undefined8 in_R11;
  undefined1 local_48a3 [18563];
  undefined8 uStack_20;
  
  FUN_156b63ae6();
  puVar3 = (ushort *)(0x48b4 - (~(ulonglong)local_48a3 + 2));
  *puVar3 = -*puVar3;
  *puVar3 = *puVar3 - 1;
  *puVar3 = ~*puVar3;
  FUN_15afb1e5b(puVar3,in_R11);
  *(undefined8 *)(7 - ~(ulonglong)(&stack0x00000000 + in_R10)) = unaff_RBP;
  FUN_1616d525f(FUN_1616d525f,0xc0);
  *(undefined8 *)(param_3 + -8) = 0;
  *(longlong *)(param_3 + -8) = *(longlong *)(param_3 + -8) + unaff_RSI;
  *(ushort **)(param_3 + -0x10) = puVar3;
  *(ushort **)(param_3 + -0x18) = puVar3;
  *(undefined1 **)(param_3 + -0x20) = &LAB_164b695d0;
  *(undefined8 *)(param_3 + -0x10) = *(undefined8 *)(param_3 + -8);
  *(undefined8 *)(param_3 + -8) = 0;
  *(longlong *)(param_3 + -8) = *(longlong *)(param_3 + -8) - *(longlong *)(param_3 + -0x20);
  plVar1 = (longlong *)(param_3 + -8);
  lVar2 = *plVar1;
  *plVar1 = -*plVar1;
  uStack_20 = param_4;
  if (lVar2 != 0) {
    FUN_164b695ab();
    return;
  }
  FUN_164b695ab();
  return;
}



// FUNCTION 14d962aa1 FUN_14d962aa1 body=159 status=ok
// SIG undefined FUN_14d962aa1(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00016528e356) */
/* WARNING: Removing unreachable block (ram,0x00016528e361) */
/* WARNING: Removing unreachable block (ram,0x00016528e35c) */
/* WARNING: Removing unreachable block (ram,0x000161d2aec3) */
/* WARNING: Removing unreachable block (ram,0x000161d2af41) */
/* WARNING: Removing unreachable block (ram,0x00016180fb32) */
/* WARNING: Removing unreachable block (ram,0x000161d2af47) */
/* WARNING: Removing unreachable block (ram,0x00014d962b2c) */
/* WARNING: Removing unreachable block (ram,0x00014d962b32) */

void FUN_14d962aa1(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 unaff_RBP;
  longlong unaff_RSI;
  longlong in_R10;
  ushort auStackX_8 [4];
  longlong local_res10;
  
  *(undefined8 *)(7 - ~((longlong)auStackX_8 + in_R10)) = unaff_RBP;
  local_res10 = param_3;
  FUN_1616d525f(FUN_1616d525f,0xc0);
  auStackX_8[0] = (auStackX_8[0] | 0x100) - 0x100;
  *(undefined8 *)(local_res10 + -8) = 0;
  *(longlong *)(local_res10 + -8) = *(longlong *)(local_res10 + -8) + unaff_RSI;
  *(undefined8 *)(local_res10 + -0x10) = param_1;
  *(undefined8 *)(local_res10 + -0x18) = param_1;
  *(undefined1 **)(local_res10 + -0x20) = &LAB_164b695d0;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -8) = 0;
  *(longlong *)(local_res10 + -8) =
       *(longlong *)(local_res10 + -8) - *(longlong *)(local_res10 + -0x20);
  plVar1 = (longlong *)(local_res10 + -8);
  lVar2 = *plVar1;
  *plVar1 = -*plVar1;
  if (lVar2 == 0) {
    FUN_164b695ab();
    return;
  }
  FUN_164b695ab();
  return;
}



// FUNCTION 14d962b43 FUN_14d962b43 body=43 status=ok
// SIG undefined FUN_14d962b43(void)

void FUN_14d962b43(void)

{
  undefined8 unaff_R13;
  undefined2 *unaff_R15;
  undefined2 local_res8;
  longlong in_stack_00000022;
  
  *unaff_R15 = local_res8;
  *(undefined8 *)(in_stack_00000022 + -8) = 0x3af889c;
  *(undefined8 *)(in_stack_00000022 + -0x28cf) = unaff_R13;
  *(undefined8 *)(in_stack_00000022 + -0x28d7) = unaff_R13;
  *(undefined **)(in_stack_00000022 + -0x28cf) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14d962c96 FUN_14d962c96 body=33 status=ok
// SIG undefined FUN_14d962c96(void)

longlong FUN_14d962c96(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong in_RAX;
  
  return in_RAX + (param_4 & param_1) * -2;
}



// FUNCTION 14d962dc2 FUN_14d962dc2 body=256 status=ok
// SIG undefined FUN_14d962dc2(void)

void FUN_14d962dc2(void)

{
  FUN_162c3162b();
  (*(code *)0x1577e4aac)();
  return;
}



// FUNCTION 14d962ec5 FUN_14d962ec5 body=117 status=ok
// SIG undefined FUN_14d962ec5(void)

void FUN_14d962ec5(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong in_RAX;
  ulonglong in_stack_00000030;
  
  uVar1 = *(ulonglong *)(in_RAX + 0x7627);
  *(ulonglong *)(in_RAX + 0x7627) = ~*(ulonglong *)(in_RAX + 0x7627);
  *(ulonglong *)(in_RAX + 0x7627) = *(ulonglong *)(in_RAX + 0x7627) | param_1;
  *(ulonglong *)(in_RAX + 0x7627) =
       (0xffffffffffffffff - param_1 | uVar1) & *(ulonglong *)(in_RAX + 0x7627) ^ 0xffffffffffffffff
  ;
  FUN_1661cd435();
  FUN_156cb946f(in_stack_00000030 ^ param_1,param_2,FUN_156cb946f);
  return;
}



// FUNCTION 14d962f3a FUN_14d962f3a body=159 status=ok
// SIG undefined FUN_14d962f3a(void)

void FUN_14d962f3a(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10;
  
  FUN_156cb946f(local_res10,param_2,FUN_156cb946f);
  return;
}



// FUNCTION 14d962fda FUN_14d962fda body=119 status=ok
// SIG undefined FUN_14d962fda(void)

void FUN_14d962fda(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong in_RAX;
  undefined8 unaff_retaddr;
  
  uVar1 = *(ulonglong *)(param_2 + 8);
  *(ulonglong *)(param_2 + 8) = ~*(ulonglong *)(param_2 + 8);
  lVar2 = *(longlong *)(param_2 + 8);
  *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) & in_RAX;
  *(ulonglong *)(param_2 + 8) = (lVar2 + in_RAX) - *(longlong *)(param_2 + 8);
  *(ulonglong *)(param_2 + 8) =
       ~((in_RAX ^ 0xffffffffffffffff | uVar1) & *(ulonglong *)(param_2 + 8));
  FUN_15b365a9d(param_1,unaff_retaddr);
  FUN_15634cf81();
  FUN_1623eb3b5();
  return;
}



// FUNCTION 14d963052 FUN_14d963052 body=244 status=ok
// SIG undefined FUN_14d963052(void)

void FUN_14d963052(void)

{
  FUN_15634cf81();
  FUN_1623eb3b5();
  return;
}



// FUNCTION 14d963305 FUN_14d963305 body=121 status=ok
// SIG undefined FUN_14d963305(void)

void FUN_14d963305(undefined8 param_1)

{
  FUN_161ba70b9(param_1);
  return;
}



// FUNCTION 14d963406 FUN_14d963406 body=132 status=ok
// SIG undefined FUN_14d963406(void)

void FUN_14d963406(void)

{
  return;
}



// FUNCTION 14d963557 FUN_14d963557 body=82 status=ok
// SIG undefined FUN_14d963557(void)

void FUN_14d963557(void)

{
  FUN_15b3d5987();
  return;
}



// FUNCTION 14d96362b FUN_14d96362b body=189 status=ok
// SIG undefined FUN_14d96362b(void)

/* WARNING: Removing unreachable block (ram,0x00014d9636c3) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d96362b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 uStackX_10;
  
  if ((~*(ulonglong *)(unaff_R13 + -0x98) & ~unaff_R15) == 0 &&
      *(ulonglong *)(unaff_R13 + -0x98) == 0) {
    uVar1 = FUN_15b2c31e3();
    return uVar1;
  }
  uVar1 = FUN_157396dd4(param_1,unaff_retaddr,param_3,
                        (~(uStackX_10 & unaff_R15) + unaff_R15) - ~uStackX_10);
  return uVar1;
}



// FUNCTION 14d963778 FUN_14d963778 body=387 status=ok
// SIG undefined FUN_14d963778(void)

void FUN_14d963778(void)

{
  undefined8 uVar1;
  ulonglong unaff_R15;
  ulonglong in_stack_00000008;
  ulonglong local_res18 [2];
  
  local_res18[0] = local_res18[0] ^ unaff_R15;
  local_res18[1] = local_res18[1] ^ unaff_R15;
  uVar1 = FUN_1565387ec();
  *(undefined8 *)((longlong)local_res18 + (in_stack_00000008 ^ 0x73e11455)) = uVar1;
  FUN_160c40ef7();
  FUN_1626b0bce();
  return;
}



// FUNCTION 14d963a2a FUN_14d963a2a body=303 status=ok
// SIG undefined FUN_14d963a2a(void)

/* WARNING: Removing unreachable block (ram,0x00014dfd5909) */
/* WARNING: Removing unreachable block (ram,0x00014d963aa9) */

undefined8 FUN_14d963a2a(void)

{
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (*(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
      (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2 == 0) {
    uVar1 = FUN_1628918fa(CONCAT71((int7)(*(longlong *)(unaff_R13 + -0x50) + unaff_R15 >> 8),1),0);
    return uVar1;
  }
  uVar1 = FUN_14dfd58ed();
  return uVar1;
}



// FUNCTION 14d963c06 FUN_14d963c06 body=139 status=ok
// SIG undefined FUN_14d963c06(void)

/* WARNING: Removing unreachable block (ram,0x00016516e84f) */
/* WARNING: Removing unreachable block (ram,0x00016516e855) */
/* WARNING: Removing unreachable block (ram,0x00016516e7be) */
/* WARNING: Removing unreachable block (ram,0x00016516e7c9) */
/* WARNING: Removing unreachable block (ram,0x00015b0d6fa4) */
/* WARNING: Removing unreachable block (ram,0x00016516e7c4) */
/* WARNING: Removing unreachable block (ram,0x00015b1e4056) */
/* WARNING: Removing unreachable block (ram,0x00014d963d32) */
/* WARNING: Removing unreachable block (ram,0x000165456fa3) */
/* WARNING: Removing unreachable block (ram,0x000162a0daa7) */
/* WARNING: Removing unreachable block (ram,0x000162a0dbc4) */
/* WARNING: Removing unreachable block (ram,0x000165457020) */
/* WARNING: Removing unreachable block (ram,0x00014d963dc4) */
/* WARNING: Removing unreachable block (ram,0x00014d963dcf) */
/* WARNING: Removing unreachable block (ram,0x00014d963ddc) */
/* WARNING: Removing unreachable block (ram,0x00014d963de0) */
/* WARNING: Removing unreachable block (ram,0x00014d963dca) */
/* WARNING: Removing unreachable block (ram,0x00015b3a4f3a) */
/* WARNING: Removing unreachable block (ram,0x0001571a8ef2) */

undefined8 FUN_14d963c06(ulonglong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  ushort *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong unaff_RBX;
  uint unaff_EDI;
  code *pcVar15;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_R12;
  ulonglong unaff_R13;
  longlong unaff_R15;
  ulonglong uVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
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
  longlong unaff_retaddr;
  
  uVar12 = ((unaff_retaddr - param_2) + unaff_RBX + 1) * 2;
  FUN_156557ae6();
  uVar14 = ~(uVar12 & param_1) & (ulonglong)unaff_EDI;
  uVar16 = ~((~param_1 | unaff_R13) & (0xffffffffffffffff - unaff_R13 | param_1));
  uVar12 = param_1 | 0xff1f7c3d74b6f7db;
  *(undefined8 *)(uVar12 - 8) = param_3;
  *(undefined8 *)(uVar12 - 0x10) = unaff_R12;
  *(undefined8 *)(uVar12 - 0x18) = unaff_R12;
  *(undefined8 *)(uVar12 - 0x10) = *(undefined8 *)(uVar12 - 8);
  uVar5 = *(undefined8 *)(uVar12 - 0x18);
  *(undefined1 **)(uVar12 - 8) = &LAB_1629b8842;
  pcVar15 = FUN_1629b8819;
  *(undefined8 *)(uVar12 - 0x18) = 0x1571a8e7c;
  uVar13 = FUN_1629b8819();
  *(ulonglong *)(uVar12 - 8) = param_1 ^ 0x4900ca8349d0f748;
  uVar29 = *(ulonglong *)(uVar12 - 8);
  *(undefined8 *)(uVar12 - 8) = uVar5;
  *(ulonglong *)(uVar12 - 0x10) = 0xffffffffffffffffU - unaff_R15 | uVar29;
  *(longlong *)(uVar12 - 0x18) = unaff_R15;
  uVar6 = *(ulonglong *)(uVar12 - 0x18);
  *(longlong *)(uVar12 - 0x10) = unaff_RBX;
  uVar7 = *(undefined8 *)(uVar12 - 0x10);
  *(undefined8 *)(uVar12 - 8) = param_4;
  *(undefined8 *)(uVar12 - 0x10) = param_4;
  *(undefined8 *)(uVar12 - 8) = *(undefined8 *)(unaff_R13 - 0x70);
  uVar8 = *(undefined8 *)(uVar12 - 0x10);
  *(undefined8 *)(uVar12 - 0x10) = *(undefined8 *)(unaff_R13 - 8);
  *(ulonglong *)(uVar12 - 0x18) = uVar16;
  *(ulonglong *)(uVar12 - 0x20) = uVar16;
  *(ulonglong *)(uVar12 - 0x30) = uVar14;
  uVar9 = *(undefined8 *)(uVar12 - 0x30);
  *(undefined8 *)(uVar12 - 0x28) = *(undefined8 *)(unaff_R13 - 0x98);
  puVar2 = (undefined8 *)(uVar12 - 0x20);
  *(undefined8 *)(uVar12 - 0x18) = *(undefined8 *)(uVar12 - 0x28);
  *puVar2 = in_R11;
  *(undefined4 *)(uVar12 - 0x28) = 0xa6a171b9;
  *(undefined4 *)(uVar12 - 0x24) = 0xffffffff;
  uVar29 = *(ulonglong *)(uVar12 - 0x28);
  *(undefined8 *)(uVar12 - 0x28) = in_R10;
  uVar10 = *(undefined8 *)(uVar12 - 0x28);
  uVar29 = *(ulonglong *)(unaff_R13 + (uVar29 ^ 0x595e8ed9));
  uVar11 = *puVar2;
  *puVar2 = pcVar15;
  uVar16 = ~(uVar29 & uVar6) & (uVar29 | uVar6);
  uVar5 = *puVar2;
  *puVar2 = uVar7;
  uVar29 = *(ulonglong *)(uVar12 - 0x18);
  *(ulonglong *)(uVar12 - 0x18) = *(ulonglong *)(uVar12 - 0x18) & uVar6;
  *(ulonglong *)(uVar12 - 0x18) = ~*(ulonglong *)(uVar12 - 0x18);
  *(ulonglong *)(uVar12 - 0x18) = *(ulonglong *)(uVar12 - 0x18) & (uVar29 | uVar6);
  *(undefined8 *)(uVar12 - 0x20) = uVar5;
  *(undefined8 *)(uVar12 - 0x28) = uVar9;
  *(undefined8 *)(uVar12 - 0x30) = uVar13;
  *(undefined4 *)(uVar12 - 0x30) = 0x6bb4b4d8;
  *(int *)(uVar12 - 0x30) = *(int *)(uVar12 - 0x30) + 0xe4b5631;
  *(undefined4 *)(uVar12 - 0x2c) = 0;
  uVar29 = *(ulonglong *)((uVar12 - 0x20) + (*(ulonglong *)(uVar12 - 0x30) ^ 0x7a000b19));
  uVar9 = *(undefined8 *)(uVar12 - 0x28);
  *(ulonglong *)(uVar12 - 0x10) = *(ulonglong *)(uVar12 - 0x10) & uVar6;
  *(ulonglong *)(uVar12 - 0x10) = ~*(ulonglong *)(uVar12 - 0x10);
  *(ulonglong *)(uVar12 - 0x10) = *(ulonglong *)(uVar12 - 0x10) & (uVar29 | uVar6);
  *(undefined8 *)(uVar12 - 0x20) = uVar10;
  *(undefined8 *)(uVar12 - 0x28) = uVar8;
  lVar4 = *(longlong *)(uVar12 - 8);
  *(undefined8 *)(uVar12 - 0x28) = *(undefined8 *)(uVar12 - 0x28);
  *(undefined8 *)(uVar12 - 0x30) = uVar13;
  *(ulonglong *)(uVar12 - 8) = ~*(ulonglong *)(uVar12 - 8);
  *(ulonglong *)(uVar12 - 8) = *(ulonglong *)(uVar12 - 8) | ~uVar6;
  *(ulonglong *)(uVar12 - 8) = ~*(ulonglong *)(uVar12 - 8);
  uVar8 = *(undefined8 *)(uVar12 - 0x30);
  puVar1 = (ulonglong *)(uVar12 - 8);
  *puVar1 = *puVar1 << 1 | (ulonglong)((longlong)*puVar1 < 0);
  *(ulonglong *)(uVar12 - 8) = *(ulonglong *)(uVar12 - 8) & 0xfffffffffffffffe;
  *(ulonglong *)(uVar12 - 8) = (lVar4 + uVar6) - *(longlong *)(uVar12 - 8);
  uVar5 = *(undefined8 *)(uVar12 - 0x20);
  uVar7 = *(undefined8 *)(uVar12 - 0x18);
  *(undefined8 *)(uVar12 - 0x18) = uVar8;
  *(undefined8 *)(uVar12 - 0x20) = uVar7;
  *(undefined8 *)(uVar12 - 0x28) = uVar11;
  puVar3 = (ushort *)(uVar12 - 0x10);
  *puVar3 = ~*puVar3;
  *puVar3 = *puVar3 | 0x100;
  *puVar3 = -*puVar3;
  *puVar3 = *puVar3 - 1;
  if ((short)*puVar3 < 0) {
    uVar7 = *(undefined8 *)(uVar12 - 0x18);
    uVar29 = *(ulonglong *)(uVar12 - 0x10);
    bVar26 = (uVar29 & 0x4000) != 0;
    bVar25 = (uVar29 & 0x800) != 0;
    bVar24 = (uVar29 & 0x400) != 0;
    bVar23 = (uVar29 & 0x200) != 0;
    bVar22 = (uVar29 & 0x100) != 0;
    bVar21 = (uVar29 & 0x80) != 0;
    bVar20 = (uVar29 & 0x40) != 0;
    bVar19 = (uVar29 & 0x10) != 0;
    bVar18 = (uVar29 & 4) != 0;
    bVar17 = (uVar29 & 1) != 0;
    bVar28 = (uVar29 & 0x200000) != 0;
    bVar27 = (uVar29 & 0x40000) != 0;
    lVar4 = *(longlong *)(uVar12 - 8);
    _fxrstor(lVar4);
    *(ulonglong *)(lVar4 + -8) = uVar16;
    *(ulonglong *)(lVar4 + -0x10) = uVar16;
    *(ulonglong *)(lVar4 + -0x18) =
         (ulonglong)bVar26 * 0x4000 | (ulonglong)bVar25 * 0x800 | (ulonglong)bVar24 * 0x400 |
         (ulonglong)bVar23 * 0x200 | (ulonglong)bVar22 * 0x100 | (ulonglong)bVar21 * 0x80 |
         (ulonglong)bVar20 * 0x40 | (ulonglong)bVar19 * 0x10 | (ulonglong)bVar18 * 4 |
         (ulonglong)bVar17 | (ulonglong)bVar28 * 0x200000 | (ulonglong)bVar27 * 0x40000;
    *(ulonglong *)(lVar4 + -0x20) =
         (ulonglong)bVar26 * 0x4000 | (ulonglong)bVar25 * 0x800 | (ulonglong)bVar24 * 0x400 |
         (ulonglong)bVar23 * 0x200 | (ulonglong)bVar22 * 0x100 | (ulonglong)bVar21 * 0x80 |
         (ulonglong)bVar20 * 0x40 | (ulonglong)bVar19 * 0x10 | (ulonglong)bVar18 * 4 |
         (ulonglong)bVar17 | (ulonglong)bVar28 * 0x200000 | (ulonglong)bVar27 * 0x40000;
    *(undefined8 *)(lVar4 + -0x20) = uVar9;
    uVar12 = *(ulonglong *)(lVar4 + -0x18);
    *(ulonglong *)(lVar4 + -0x18) =
         (ulonglong)((uVar12 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar12 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar12 & 0x400) != 0) * 0x400 | (ulonglong)((uVar12 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar12 & 0x100) != 0) * 0x100 | (ulonglong)((uVar12 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar12 & 0x40) != 0) * 0x40 | (ulonglong)((uVar12 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar12 & 4) != 0) * 4 | (ulonglong)((uVar12 & 1) != 0) |
         (ulonglong)((uVar12 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar12 & 0x40000) != 0) * 0x40000;
    *(undefined8 *)(lVar4 + -0x18) = uVar5;
    *(undefined8 *)(lVar4 + -8) = 0x2eadb3a;
    *(undefined8 *)(lVar4 + -0x28cf) = *(undefined8 *)(lVar4 + -0x10);
    *(undefined8 *)(lVar4 + -0x28d7) = *(undefined8 *)(lVar4 + -0x10);
    *(undefined **)(lVar4 + -0x28cf) = &DAT_156ef2e4a;
    return uVar7;
  }
  *(ulonglong *)(uVar12 - 0x20) = uVar16;
  *(ulonglong *)(uVar12 - 0x28) = uVar16;
  *(undefined **)(uVar12 - 0x20) = &DAT_16211a6ac;
  return CONCAT62((int6)((ulonglong)uVar8 >> 0x10),0x100);
}



// FUNCTION 14d963c92 FUN_14d963c92 body=942 status=ok
// SIG undefined FUN_14d963c92(void)

/* WARNING: Removing unreachable block (ram,0x00016516e84f) */
/* WARNING: Removing unreachable block (ram,0x00016516e855) */
/* WARNING: Removing unreachable block (ram,0x00016516e7be) */
/* WARNING: Removing unreachable block (ram,0x00016516e7c9) */
/* WARNING: Removing unreachable block (ram,0x00015b0d6fa4) */
/* WARNING: Removing unreachable block (ram,0x00016516e7c4) */
/* WARNING: Removing unreachable block (ram,0x00015b1e4056) */
/* WARNING: Removing unreachable block (ram,0x00014d963d32) */
/* WARNING: Removing unreachable block (ram,0x000165456fa3) */
/* WARNING: Removing unreachable block (ram,0x000162a0daa7) */
/* WARNING: Removing unreachable block (ram,0x000162a0dbc4) */
/* WARNING: Removing unreachable block (ram,0x000165457020) */
/* WARNING: Removing unreachable block (ram,0x00014d963dc4) */
/* WARNING: Removing unreachable block (ram,0x00014d963dcf) */
/* WARNING: Removing unreachable block (ram,0x00014d963ddc) */
/* WARNING: Removing unreachable block (ram,0x00014d963de0) */
/* WARNING: Removing unreachable block (ram,0x00014d963dca) */
/* WARNING: Removing unreachable block (ram,0x00015b3a4f3a) */
/* WARNING: Removing unreachable block (ram,0x0001571a8ef2) */

undefined8 FUN_14d963c92(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  ushort *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RDI;
  code *pcVar14;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_R12;
  ulonglong unaff_R13;
  longlong unaff_R15;
  ulonglong uVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  
  uVar13 = ~(param_2 & param_1) & unaff_RBP;
  uVar28 = *(ulonglong *)(unaff_RDI + -0x88);
  uVar15 = ~((~param_1 | unaff_R13) & (0xffffffffffffffff - unaff_R13 | param_1));
  uVar29 = ~*(ulonglong *)(unaff_RDI + -0x90) | param_1;
  *(undefined8 *)(uVar29 - 8) = param_3;
  *(undefined8 *)(uVar29 - 0x10) = unaff_R12;
  *(undefined8 *)(uVar29 - 0x18) = unaff_R12;
  *(undefined8 *)(uVar29 - 0x10) = *(undefined8 *)(uVar29 - 8);
  uVar5 = *(undefined8 *)(uVar29 - 0x18);
  *(undefined1 **)(uVar29 - 8) = &LAB_1629b8842;
  pcVar14 = FUN_1629b8819;
  *(undefined8 *)(uVar29 - 0x18) = 0x1571a8e7c;
  uVar12 = FUN_1629b8819();
  *(ulonglong *)(uVar29 - 8) = uVar28 ^ param_1;
  uVar28 = *(ulonglong *)(uVar29 - 8);
  *(undefined8 *)(uVar29 - 8) = uVar5;
  *(ulonglong *)(uVar29 - 0x10) = 0xffffffffffffffffU - unaff_R15 | uVar28;
  *(longlong *)(uVar29 - 0x18) = unaff_R15;
  uVar6 = *(ulonglong *)(uVar29 - 0x18);
  *(undefined8 *)(uVar29 - 0x10) = unaff_RBX;
  uVar7 = *(undefined8 *)(uVar29 - 0x10);
  *(undefined8 *)(uVar29 - 8) = param_4;
  *(undefined8 *)(uVar29 - 0x10) = param_4;
  *(undefined8 *)(uVar29 - 8) = *(undefined8 *)(unaff_R13 - 0x70);
  uVar8 = *(undefined8 *)(uVar29 - 0x10);
  *(undefined8 *)(uVar29 - 0x10) = *(undefined8 *)(unaff_R13 - 8);
  *(ulonglong *)(uVar29 - 0x18) = uVar15;
  *(ulonglong *)(uVar29 - 0x20) = uVar15;
  *(ulonglong *)(uVar29 - 0x30) = uVar13;
  uVar9 = *(undefined8 *)(uVar29 - 0x30);
  *(undefined8 *)(uVar29 - 0x28) = *(undefined8 *)(unaff_R13 - 0x98);
  puVar2 = (undefined8 *)(uVar29 - 0x20);
  *(undefined8 *)(uVar29 - 0x18) = *(undefined8 *)(uVar29 - 0x28);
  *puVar2 = in_R11;
  *(undefined4 *)(uVar29 - 0x28) = 0xa6a171b9;
  *(undefined4 *)(uVar29 - 0x24) = 0xffffffff;
  uVar28 = *(ulonglong *)(uVar29 - 0x28);
  *(undefined8 *)(uVar29 - 0x28) = in_R10;
  uVar10 = *(undefined8 *)(uVar29 - 0x28);
  uVar28 = *(ulonglong *)(unaff_R13 + (uVar28 ^ 0x595e8ed9));
  uVar11 = *puVar2;
  *puVar2 = pcVar14;
  uVar15 = ~(uVar28 & uVar6) & (uVar28 | uVar6);
  uVar5 = *puVar2;
  *puVar2 = uVar7;
  uVar28 = *(ulonglong *)(uVar29 - 0x18);
  *(ulonglong *)(uVar29 - 0x18) = *(ulonglong *)(uVar29 - 0x18) & uVar6;
  *(ulonglong *)(uVar29 - 0x18) = ~*(ulonglong *)(uVar29 - 0x18);
  *(ulonglong *)(uVar29 - 0x18) = *(ulonglong *)(uVar29 - 0x18) & (uVar28 | uVar6);
  *(undefined8 *)(uVar29 - 0x20) = uVar5;
  *(undefined8 *)(uVar29 - 0x28) = uVar9;
  *(undefined8 *)(uVar29 - 0x30) = uVar12;
  *(undefined4 *)(uVar29 - 0x30) = 0x6bb4b4d8;
  *(int *)(uVar29 - 0x30) = *(int *)(uVar29 - 0x30) + 0xe4b5631;
  *(undefined4 *)(uVar29 - 0x2c) = 0;
  uVar28 = *(ulonglong *)((uVar29 - 0x20) + (*(ulonglong *)(uVar29 - 0x30) ^ 0x7a000b19));
  uVar9 = *(undefined8 *)(uVar29 - 0x28);
  *(ulonglong *)(uVar29 - 0x10) = *(ulonglong *)(uVar29 - 0x10) & uVar6;
  *(ulonglong *)(uVar29 - 0x10) = ~*(ulonglong *)(uVar29 - 0x10);
  *(ulonglong *)(uVar29 - 0x10) = *(ulonglong *)(uVar29 - 0x10) & (uVar28 | uVar6);
  *(undefined8 *)(uVar29 - 0x20) = uVar10;
  *(undefined8 *)(uVar29 - 0x28) = uVar8;
  lVar4 = *(longlong *)(uVar29 - 8);
  *(undefined8 *)(uVar29 - 0x28) = *(undefined8 *)(uVar29 - 0x28);
  *(undefined8 *)(uVar29 - 0x30) = uVar12;
  *(ulonglong *)(uVar29 - 8) = ~*(ulonglong *)(uVar29 - 8);
  *(ulonglong *)(uVar29 - 8) = *(ulonglong *)(uVar29 - 8) | ~uVar6;
  *(ulonglong *)(uVar29 - 8) = ~*(ulonglong *)(uVar29 - 8);
  uVar8 = *(undefined8 *)(uVar29 - 0x30);
  puVar1 = (ulonglong *)(uVar29 - 8);
  *puVar1 = *puVar1 << 1 | (ulonglong)((longlong)*puVar1 < 0);
  *(ulonglong *)(uVar29 - 8) = *(ulonglong *)(uVar29 - 8) & 0xfffffffffffffffe;
  *(ulonglong *)(uVar29 - 8) = (lVar4 + uVar6) - *(longlong *)(uVar29 - 8);
  uVar5 = *(undefined8 *)(uVar29 - 0x20);
  uVar7 = *(undefined8 *)(uVar29 - 0x18);
  *(undefined8 *)(uVar29 - 0x18) = uVar8;
  *(undefined8 *)(uVar29 - 0x20) = uVar7;
  *(undefined8 *)(uVar29 - 0x28) = uVar11;
  puVar3 = (ushort *)(uVar29 - 0x10);
  *puVar3 = ~*puVar3;
  *puVar3 = *puVar3 | 0x100;
  *puVar3 = -*puVar3;
  *puVar3 = *puVar3 - 1;
  if ((short)*puVar3 < 0) {
    uVar7 = *(undefined8 *)(uVar29 - 0x18);
    uVar28 = *(ulonglong *)(uVar29 - 0x10);
    bVar25 = (uVar28 & 0x4000) != 0;
    bVar24 = (uVar28 & 0x800) != 0;
    bVar23 = (uVar28 & 0x400) != 0;
    bVar22 = (uVar28 & 0x200) != 0;
    bVar21 = (uVar28 & 0x100) != 0;
    bVar20 = (uVar28 & 0x80) != 0;
    bVar19 = (uVar28 & 0x40) != 0;
    bVar18 = (uVar28 & 0x10) != 0;
    bVar17 = (uVar28 & 4) != 0;
    bVar16 = (uVar28 & 1) != 0;
    bVar27 = (uVar28 & 0x200000) != 0;
    bVar26 = (uVar28 & 0x40000) != 0;
    lVar4 = *(longlong *)(uVar29 - 8);
    _fxrstor(lVar4);
    *(ulonglong *)(lVar4 + -8) = uVar15;
    *(ulonglong *)(lVar4 + -0x10) = uVar15;
    *(ulonglong *)(lVar4 + -0x18) =
         (ulonglong)bVar25 * 0x4000 | (ulonglong)bVar24 * 0x800 | (ulonglong)bVar23 * 0x400 |
         (ulonglong)bVar22 * 0x200 | (ulonglong)bVar21 * 0x100 | (ulonglong)bVar20 * 0x80 |
         (ulonglong)bVar19 * 0x40 | (ulonglong)bVar18 * 0x10 | (ulonglong)bVar17 * 4 |
         (ulonglong)bVar16 | (ulonglong)bVar27 * 0x200000 | (ulonglong)bVar26 * 0x40000;
    *(ulonglong *)(lVar4 + -0x20) =
         (ulonglong)bVar25 * 0x4000 | (ulonglong)bVar24 * 0x800 | (ulonglong)bVar23 * 0x400 |
         (ulonglong)bVar22 * 0x200 | (ulonglong)bVar21 * 0x100 | (ulonglong)bVar20 * 0x80 |
         (ulonglong)bVar19 * 0x40 | (ulonglong)bVar18 * 0x10 | (ulonglong)bVar17 * 4 |
         (ulonglong)bVar16 | (ulonglong)bVar27 * 0x200000 | (ulonglong)bVar26 * 0x40000;
    *(undefined8 *)(lVar4 + -0x20) = uVar9;
    uVar29 = *(ulonglong *)(lVar4 + -0x18);
    *(ulonglong *)(lVar4 + -0x18) =
         (ulonglong)((uVar29 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar29 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar29 & 0x400) != 0) * 0x400 | (ulonglong)((uVar29 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar29 & 0x100) != 0) * 0x100 | (ulonglong)((uVar29 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar29 & 0x40) != 0) * 0x40 | (ulonglong)((uVar29 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar29 & 4) != 0) * 4 | (ulonglong)((uVar29 & 1) != 0) |
         (ulonglong)((uVar29 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar29 & 0x40000) != 0) * 0x40000;
    *(undefined8 *)(lVar4 + -0x18) = uVar5;
    *(undefined8 *)(lVar4 + -8) = 0x2eadb3a;
    *(undefined8 *)(lVar4 + -0x28cf) = *(undefined8 *)(lVar4 + -0x10);
    *(undefined8 *)(lVar4 + -0x28d7) = *(undefined8 *)(lVar4 + -0x10);
    *(undefined **)(lVar4 + -0x28cf) = &DAT_156ef2e4a;
    return uVar7;
  }
  *(ulonglong *)(uVar29 - 0x20) = uVar15;
  *(ulonglong *)(uVar29 - 0x28) = uVar15;
  *(undefined **)(uVar29 - 0x20) = &DAT_16211a6ac;
  return CONCAT62((int6)((ulonglong)uVar8 >> 0x10),0x100);
}



// FUNCTION 14d963e7f FUN_14d963e7f body=147 status=ok
// SIG undefined FUN_14d963e7f(void)

/* WARNING: Removing unreachable block (ram,0x00015720c8c3) */
/* WARNING: Removing unreachable block (ram,0x00015720c8c9) */
/* WARNING: Removing unreachable block (ram,0x00014d963fa3) */
/* WARNING: Removing unreachable block (ram,0x00014d963fa9) */

undefined8 FUN_14d963e7f(ulonglong param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  code *pcVar10;
  undefined8 uVar11;
  ulonglong *puVar12;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  undefined8 uVar13;
  undefined8 in_R10;
  undefined8 uVar14;
  ulonglong in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  ulonglong unaff_retaddr;
  ulonglong uStackX_8;
  ulonglong *local_res18;
  
  local_res18[-1] = unaff_R15;
  local_res18[-2] = param_2;
  local_res18[-3] = param_2;
  local_res18[-4] = unaff_R12;
  local_res18[-2] = local_res18[-1];
  uVar11 = local_res18[-3];
  local_res18[-1] = 0;
  local_res18[-1] = local_res18[-1] - 0x14de253da;
  local_res18[-3] = unaff_R14;
  local_res18[-1] = -local_res18[-1];
  uVar13 = local_res18[-3];
  local_res18[-3] = (ulonglong)FUN_14d963f14;
  FUN_14de253af();
  uVar8 = local_res18[-2];
  *local_res18 = unaff_retaddr;
  uVar2 = *(ulonglong *)(unaff_RDI + -0xa0);
  local_res18[-1] = unaff_R13;
  local_res18[-2] = uVar13;
  local_res18[-3] = uStackX_8;
  *(undefined4 *)(local_res18 + -4) = 0x6e2aed61;
  *(undefined4 *)((longlong)local_res18 + -0x1c) = 0;
  uVar4 = local_res18[-4];
  uVar13 = local_res18[-3];
  local_res18[-3] = uVar11;
  local_res18[-4] = (ulonglong)(local_res18 + -3);
  puVar12 = (ulonglong *)((local_res18[-4] - (uVar4 ^ 0x6ac75338)) + 0x4edbe71);
  uVar11 = local_res18[-3];
  local_res18[-3] = uVar2 ^ param_1;
  uVar5 = local_res18[-3];
  uVar2 = *puVar12;
  *puVar12 = ~*puVar12;
  local_res18[-3] = uVar11;
  *puVar12 = ~*puVar12;
  *puVar12 = *puVar12 & ~param_1;
  *puVar12 = ~*puVar12;
  uVar11 = local_res18[-3];
  local_res18[-3] = in_R10;
  uVar4 = *puVar12;
  uVar3 = *puVar12;
  uVar14 = local_res18[-3];
  *puVar12 = 0;
  *puVar12 = *puVar12 + ~((~uVar4 | 0xffffffffffffffff - param_1 | uVar2) + uVar3 + 1);
  uVar6 = local_res18[-1];
  local_res18[-1] = uVar8;
  local_res18[-2] = local_res18[-2];
  uVar2 = local_res18[1];
  local_res18[1] = ~local_res18[1];
  local_res18[1] = local_res18[1] | param_1;
  local_res18[1] = ~((~param_1 | uVar2) & local_res18[1]);
  local_res18[-1] = uVar6;
  uVar2 = local_res18[2];
  local_res18[2] = local_res18[2] & param_1;
  local_res18[2] = ~local_res18[2];
  local_res18[2] = local_res18[2] & (uVar2 | param_1);
  uVar2 = local_res18[-1];
  pcVar10 = FUN_1571b67f3;
  local_res18[-1] = 0x15720c7ac;
  FUN_1571b67f3(FUN_1571b67f3,uVar11);
  *local_res18 = unaff_RBX;
  *local_res18 = ~(0xffffffffffffffff -
                  (uVar2 ^ 0xffffffffffffffff | 0xffffffffffffffffU - unaff_RBP));
  pcVar10 = pcVar10 + *local_res18;
  local_res18[2] = unaff_RSI;
  local_res18[1] = (ulonglong)LoadLibraryA_exref;
  *local_res18 = in_R11;
  local_res18[-1] = in_R11;
  local_res18[-2] = (ulonglong)FUN_15720c833;
  lVar9 = FUN_1614652a5();
  uVar8 = local_res18[-1];
  lVar7 = local_res18[2];
  *(undefined8 *)(lVar7 + -8) = uVar13;
  *(longlong *)(lVar7 + -0x10) = lVar9;
  plVar1 = (longlong *)(lVar7 + -0x18);
  *(undefined8 *)(lVar7 + -0x20) = uVar5;
  *plVar1 = lVar9;
  *(undefined2 *)plVar1 = 0x6568;
  *(code **)(lVar7 + -0x10) = pcVar10;
  *plVar1 = (longlong)pcVar10;
  *(undefined8 *)(lVar7 + -0x20) = uVar14;
  *(undefined8 *)(lVar7 + -0x10) = *(undefined8 *)(lVar7 + -8);
  lVar9 = *plVar1;
  *plVar1 = *(longlong *)(lVar7 + -0x20);
  *(undefined8 *)(lVar7 + -8) = &LAB_1565bad43;
  uVar8 = FUN_14d7c1b2b(lVar9,uVar8,*(undefined8 *)(lVar7 + -0x10));
  return uVar8;
}



// FUNCTION 14d963f14 FUN_14d963f14 body=328 status=ok
// SIG undefined FUN_14d963f14(void)

/* WARNING: Removing unreachable block (ram,0x00015720c8c3) */
/* WARNING: Removing unreachable block (ram,0x00015720c8c9) */
/* WARNING: Removing unreachable block (ram,0x00014d963fa3) */
/* WARNING: Removing unreachable block (ram,0x00014d963fa9) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d963f14(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined8 in_R10;
  undefined8 in_R11;
  ulonglong unaff_R13;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0xa0);
  pcVar5 = FUN_1571b67f3;
  FUN_1571b67f3(FUN_1571b67f3,param_2);
  pcVar5 = pcVar5 + ~(0xffffffffffffffff -
                     (unaff_R13 ^ 0xffffffffffffffff | 0xffffffffffffffffU - unaff_RBP));
  lVar4 = FUN_1614652a5();
  *(undefined8 *)(unaff_RSI + -8) = param_3;
  *(longlong *)(unaff_RSI + -0x10) = lVar4;
  plVar1 = (longlong *)(unaff_RSI + -0x18);
  *(ulonglong *)(unaff_RSI + -0x20) = uVar2 ^ param_1;
  *plVar1 = lVar4;
  *(undefined2 *)plVar1 = 0x6568;
  *(code **)(unaff_RSI + -0x10) = pcVar5;
  *plVar1 = (longlong)pcVar5;
  *(undefined8 *)(unaff_RSI + -0x20) = in_R10;
  *(undefined8 *)(unaff_RSI + -0x10) = *(undefined8 *)(unaff_RSI + -8);
  lVar4 = *plVar1;
  *plVar1 = *(longlong *)(unaff_RSI + -0x20);
  *(undefined8 *)(unaff_RSI + -8) = &LAB_1565bad43;
  uVar3 = FUN_14d7c1b2b(lVar4,in_R11,*(undefined8 *)(unaff_RSI + -0x10));
  return uVar3;
}



// FUNCTION 14d96420e FUN_14d96420e body=148 status=ok
// SIG undefined FUN_14d96420e(void)

void FUN_14d96420e(undefined8 param_1)

{
  ulonglong uVar1;
  longlong in_R11;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(in_R11 + 8);
  *(longlong *)(in_R11 + 8) = -*(longlong *)(in_R11 + 8);
  *(longlong *)(in_R11 + 8) = *(longlong *)(in_R11 + 8) + -1;
  *(ulonglong *)(in_R11 + 8) = *(ulonglong *)(in_R11 + 8) | unaff_R15;
  *(ulonglong *)(in_R11 + 8) =
       ~((~*(ulonglong *)(in_R11 + 8) | ~unaff_R15 | uVar1) + *(longlong *)(in_R11 + 8) + 1);
  FUN_166d2142c(param_1);
  FUN_14d9642a5();
  return;
}



// FUNCTION 14d9642a5 FUN_14d9642a5 body=150 status=ok
// SIG undefined FUN_14d9642a5(void)

/* WARNING: Removing unreachable block (ram,0x00014d964337) */
/* WARNING: Removing unreachable block (ram,0x00014d96433d) */
/* WARNING: Removing unreachable block (ram,0x000156b11b61) */
/* WARNING: Removing unreachable block (ram,0x00014d9643d6) */
/* WARNING: Removing unreachable block (ram,0x00014d9643dc) */
/* WARNING: Removing unreachable block (ram,0x00014d9643e1) */
/* WARNING: Removing unreachable block (ram,0x00014e139b88) */
/* WARNING: Removing unreachable block (ram,0x0001574e926e) */
/* WARNING: Removing unreachable block (ram,0x00014e139cae) */
/* WARNING: Removing unreachable block (ram,0x00014e139cb4) */

undefined8 FUN_14d9642a5(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14e139b88();
  return uVar1;
}



// FUNCTION 14d96433d FUN_14d96433d body=163 status=ok
// SIG undefined FUN_14d96433d(void)

/* WARNING: Removing unreachable block (ram,0x00014d9643e1) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d96433d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6)

{
  ulonglong in_RAX;
  longlong unaff_RDI;
  undefined8 unaff_R14;
  undefined8 local_res8;
  
  *(ulonglong *)(unaff_RDI + 8) = (~in_RAX | *(ulonglong *)(unaff_RDI + 8)) + in_RAX + 1;
  param_6 = param_6 ^ in_RAX;
  if (((uint)(ushort)in_RAX << 0x11 - ((byte)param_1 & 0x1f) % 0x11 & 0x10000) != 0) {
    FUN_156b11b61();
    return;
  }
  *(undefined8 *)(param_6 - 8) = param_1;
  *(undefined8 *)(param_6 - 0x10) = unaff_R14;
  *(undefined8 *)(param_6 - 0x18) = unaff_R14;
  *(undefined8 *)(param_6 - 0x10) = *(undefined8 *)(param_6 - 8);
  *(undefined8 *)(param_6 - 8) = 0;
  *(longlong *)(param_6 - 8) = *(longlong *)(param_6 - 8) + 0x15afd85e0;
  *(undefined8 *)(param_6 - 0x18) = local_res8;
  *(undefined8 *)(param_6 - 0x20) = local_res8;
  *(undefined1 **)(param_6 - 0x18) = &LAB_156b11c0d;
  (*(code *)0x15afd8590)(0x15afd8590,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d9643e1 FUN_14d9643e1 body=122 status=ok
// SIG undefined FUN_14d9643e1(void)

void FUN_14d9643e1(ushort param_1,undefined8 param_2,undefined8 param_3)

{
  ushort *unaff_R12;
  
  *unaff_R12 = (~param_1 | *unaff_R12) - 0x100;
  FUN_16170cd66(FUN_16170cd66,param_2,param_3);
  return;
}



// FUNCTION 14d96445e FUN_14d96445e body=118 status=ok
// SIG undefined FUN_14d96445e(void)

/* WARNING: Removing unreachable block (ram,0x00014d964622) */

undefined8 FUN_14d96445e(void)

{
  undefined8 uVar1;
  
  FUN_165ed44b9();
  uVar1 = FUN_166df939f();
  return uVar1;
}



// FUNCTION 14d9644d4 FUN_14d9644d4 body=489 status=ok
// SIG undefined FUN_14d9644d4(void)

/* WARNING: Removing unreachable block (ram,0x00014d964622) */

undefined8 FUN_14d9644d4(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_166df939f();
  return uVar1;
}



// FUNCTION 14d9646bd FUN_14d9646bd body=147 status=ok
// SIG undefined FUN_14d9646bd(void)

void FUN_14d9646bd(void)

{
  longlong unaff_R13;
  
  FUN_156e1d1e0(~*(ulonglong *)(unaff_R13 + -0x78),FUN_156e1d1e0);
  return;
}



// FUNCTION 14d964ea9 FUN_14d964ea9 body=125 status=ok
// SIG undefined FUN_14d964ea9(void)

void FUN_14d964ea9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_162c91102(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d964f26 thunk_FUN_14d964f2c body=5 status=ok
// SIG undefined thunk_FUN_14d964f2c(void)

/* WARNING: Removing unreachable block (ram,0x00014d96512b) */
/* WARNING: Removing unreachable block (ram,0x00014d965148) */
/* WARNING: Removing unreachable block (ram,0x00014d965205) */
/* WARNING: Removing unreachable block (ram,0x00014d96520f) */
/* WARNING: Removing unreachable block (ram,0x00014d9650a9) */

void thunk_FUN_14d964f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 unaff_RBX;
  ushort uVar7;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 uVar8;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
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
  ulonglong uVar22;
  undefined8 uStackX_8;
  ushort uStackX_10;
  uint6 uStackX_12;
  longlong lStackX_18;
  
  uVar7 = (uStackX_10 | 0x100) - 0x100;
  bVar17 = (uVar7 & 0x4000) != 0;
  bVar15 = (uVar7 & 0x200) != 0;
  bVar14 = (uVar7 & 0x100) != 0;
  bVar11 = (uVar7 & 0x10) != 0;
  bVar21 = (uStackX_12 & 0x20) != 0;
  bVar18 = (uStackX_12 & 4) != 0;
  bVar20 = 0;
  bVar19 = 0;
  *(undefined8 *)(lStackX_18 + -8) = unaff_RSI;
  *(undefined8 *)(lStackX_18 + -0x10) = param_4;
  *(undefined8 *)(lStackX_18 + -0x18) = param_4;
  *(undefined8 *)(lStackX_18 + -0x10) = *(undefined8 *)(lStackX_18 + -8);
  *(undefined8 *)(lStackX_18 + -0x18) = *(undefined8 *)(lStackX_18 + -0x18);
  *(undefined8 *)(lStackX_18 + -8) = 0;
  uVar8 = *(undefined8 *)(lStackX_18 + -0x18);
  puVar1 = (ulonglong *)(lStackX_18 + -8);
  bVar9 = 0xfffffffe9df242e3 < *puVar1;
  bVar16 = SCARRY8(*puVar1,0x1620dbd1c);
  *puVar1 = (ulonglong)(&LAB_1620dbd1c + *puVar1);
  bVar13 = (longlong)*puVar1 < 0;
  bVar12 = *puVar1 == 0;
  bVar10 = (POPCOUNT(*puVar1 & 0xff) & 1U) == 0;
  *(undefined8 *)(lStackX_18 + -0x18) = 0x14d964fbe;
  FUN_1620dbcdc();
  *(undefined8 *)(lStackX_18 + -0x18) = unaff_R12;
  puVar2 = (undefined8 *)(lStackX_18 + -0x20);
  *puVar2 = unaff_R12;
  *(ulonglong *)(lStackX_18 + -0x28) =
       (ulonglong)(bVar17 & 1) * 0x4000 | (ulonglong)(bVar16 & 1) * 0x800 |
       (ulonglong)((uVar7 & 0x400) != 0) * 0x400 | (ulonglong)(bVar15 & 1) * 0x200 |
       (ulonglong)(bVar14 & 1) * 0x100 | (ulonglong)(bVar13 & 1) * 0x80 |
       (ulonglong)(bVar12 & 1) * 0x40 | (ulonglong)(bVar11 & 1) * 0x10 | (ulonglong)(bVar10 & 1) * 4
       | (ulonglong)(bVar9 & 1) | (ulonglong)(bVar21 & 1) * 0x200000 |
       (ulonglong)(bVar20 & 1) * 0x100000 | (ulonglong)(bVar19 & 1) * 0x80000 |
       (ulonglong)(bVar18 & 1) * 0x40000;
  uVar22 = *(ulonglong *)(lStackX_18 + -0x28);
  *(ulonglong *)(lStackX_18 + -0x28) =
       (ulonglong)((uVar22 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar22 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar22 & 0x400) != 0) * 0x400 | (ulonglong)((uVar22 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar22 & 0x100) != 0) * 0x100 | (ulonglong)((uVar22 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar22 & 0x40) != 0) * 0x40 | (ulonglong)((uVar22 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar22 & 4) != 0) * 4 | (ulonglong)((uVar22 & 1) != 0) |
       (ulonglong)((uVar22 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar22 & 0x40000) != 0) * 0x40000;
  uVar22 = *(ulonglong *)(lStackX_18 + -0x28);
  *(undefined8 *)(lStackX_18 + -0x28) = unaff_RBX;
  *(undefined8 *)(lStackX_18 + -0x30) = uStackX_8;
  *(ulonglong *)(lStackX_18 + -0x38) =
       (ulonglong)((uVar22 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar22 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar22 & 0x400) != 0) * 0x400 | (ulonglong)((uVar22 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar22 & 0x100) != 0) * 0x100 | (ulonglong)((uVar22 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar22 & 0x40) != 0) * 0x40 | (ulonglong)((uVar22 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar22 & 4) != 0) * 4 | (ulonglong)((uVar22 & 1) != 0) |
       (ulonglong)((uVar22 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar22 & 0x40000) != 0) * 0x40000;
  uVar4 = *(undefined8 *)(lStackX_18 + -0x30);
  *(undefined8 *)(lStackX_18 + -0x18) = 0;
  uVar5 = *(undefined8 *)(lStackX_18 + -0x28);
  *puVar2 = param_1;
  *(undefined8 *)(lStackX_18 + -0x28) = param_1;
  *puVar2 = &LAB_161252ffb;
  *(undefined8 *)(lStackX_18 + -0x30) = 0x14d965014;
  uVar6 = FUN_161252fe3();
  lVar3 = *(longlong *)(lStackX_18 + -0x18);
  *(ulonglong *)(lStackX_18 + -0x18) = *(ulonglong *)(lStackX_18 + -0x18) & unaff_R15;
  *(ulonglong *)(lStackX_18 + -0x30) = lVar3 + unaff_R15;
  *(longlong *)(lStackX_18 + -0x18) = *(longlong *)(lStackX_18 + -0x18) << 1;
  lVar3 = *(longlong *)(lStackX_18 + -0x30);
  *(undefined8 *)(lStackX_18 + -0x30) = param_3;
  *(undefined8 *)(lStackX_18 + -0x38) = uVar4;
  *(ulonglong *)(lStackX_18 + -0x40) = unaff_R15;
  *(undefined8 *)(lStackX_18 + -0x30) = *(undefined8 *)(lStackX_18 + -0x30);
  *(undefined8 *)(lStackX_18 + -0x38) = uVar6;
  *(undefined4 *)(lStackX_18 + -0x38) = 0x19f0a688;
  *(int *)(lStackX_18 + -0x38) = *(int *)(lStackX_18 + -0x38) + 0x183f138a;
  *(undefined4 *)(lStackX_18 + -0x34) = 0;
  *(longlong *)(lStackX_18 + -0x28 + (*(ulonglong *)(lStackX_18 + -0x38) ^ 0x322fba02)) =
       lVar3 - *(longlong *)(lStackX_18 + -0x18);
  uVar4 = *(undefined8 *)(lStackX_18 + -0x28);
  *(undefined8 *)(lStackX_18 + -0x28) = uVar8;
  *(undefined8 *)(lStackX_18 + -0x30) = unaff_RDI;
  *(undefined8 *)(lStackX_18 + -0x38) = uVar5;
  *(undefined8 *)(lStackX_18 + -0x30) = unaff_R13;
  FUN_1667e055f(uVar4);
  return;
}



// FUNCTION 14d964f2c FUN_14d964f2c body=780 status=ok
// SIG undefined FUN_14d964f2c(void)

/* WARNING: Removing unreachable block (ram,0x00014d96512b) */
/* WARNING: Removing unreachable block (ram,0x00014d965148) */
/* WARNING: Removing unreachable block (ram,0x00014d965205) */
/* WARNING: Removing unreachable block (ram,0x00014d96520f) */
/* WARNING: Removing unreachable block (ram,0x00014d9650a9) */

void FUN_14d964f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 unaff_RBX;
  ushort uVar7;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 uVar8;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
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
  ulonglong uVar22;
  undefined8 local_res8;
  ushort local_res10;
  uint6 uStackX_12;
  longlong local_res18;
  
  uVar7 = (local_res10 | 0x100) - 0x100;
  bVar17 = (uVar7 & 0x4000) != 0;
  bVar15 = (uVar7 & 0x200) != 0;
  bVar14 = (uVar7 & 0x100) != 0;
  bVar11 = (uVar7 & 0x10) != 0;
  bVar21 = (uStackX_12 & 0x20) != 0;
  bVar18 = (uStackX_12 & 4) != 0;
  bVar20 = 0;
  bVar19 = 0;
  *(undefined8 *)(local_res18 + -8) = unaff_RSI;
  *(undefined8 *)(local_res18 + -0x10) = param_4;
  *(undefined8 *)(local_res18 + -0x18) = param_4;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = *(undefined8 *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -8) = 0;
  uVar8 = *(undefined8 *)(local_res18 + -0x18);
  puVar1 = (ulonglong *)(local_res18 + -8);
  bVar9 = 0xfffffffe9df242e3 < *puVar1;
  bVar16 = SCARRY8(*puVar1,0x1620dbd1c);
  *puVar1 = (ulonglong)(&LAB_1620dbd1c + *puVar1);
  bVar13 = (longlong)*puVar1 < 0;
  bVar12 = *puVar1 == 0;
  bVar10 = (POPCOUNT(*puVar1 & 0xff) & 1U) == 0;
  *(undefined8 *)(local_res18 + -0x18) = 0x14d964fbe;
  FUN_1620dbcdc();
  *(undefined8 *)(local_res18 + -0x18) = unaff_R12;
  puVar2 = (undefined8 *)(local_res18 + -0x20);
  *puVar2 = unaff_R12;
  *(ulonglong *)(local_res18 + -0x28) =
       (ulonglong)(bVar17 & 1) * 0x4000 | (ulonglong)(bVar16 & 1) * 0x800 |
       (ulonglong)((uVar7 & 0x400) != 0) * 0x400 | (ulonglong)(bVar15 & 1) * 0x200 |
       (ulonglong)(bVar14 & 1) * 0x100 | (ulonglong)(bVar13 & 1) * 0x80 |
       (ulonglong)(bVar12 & 1) * 0x40 | (ulonglong)(bVar11 & 1) * 0x10 | (ulonglong)(bVar10 & 1) * 4
       | (ulonglong)(bVar9 & 1) | (ulonglong)(bVar21 & 1) * 0x200000 |
       (ulonglong)(bVar20 & 1) * 0x100000 | (ulonglong)(bVar19 & 1) * 0x80000 |
       (ulonglong)(bVar18 & 1) * 0x40000;
  uVar22 = *(ulonglong *)(local_res18 + -0x28);
  *(ulonglong *)(local_res18 + -0x28) =
       (ulonglong)((uVar22 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar22 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar22 & 0x400) != 0) * 0x400 | (ulonglong)((uVar22 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar22 & 0x100) != 0) * 0x100 | (ulonglong)((uVar22 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar22 & 0x40) != 0) * 0x40 | (ulonglong)((uVar22 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar22 & 4) != 0) * 4 | (ulonglong)((uVar22 & 1) != 0) |
       (ulonglong)((uVar22 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar22 & 0x40000) != 0) * 0x40000;
  uVar22 = *(ulonglong *)(local_res18 + -0x28);
  *(undefined8 *)(local_res18 + -0x28) = unaff_RBX;
  *(undefined8 *)(local_res18 + -0x30) = local_res8;
  *(ulonglong *)(local_res18 + -0x38) =
       (ulonglong)((uVar22 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar22 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar22 & 0x400) != 0) * 0x400 | (ulonglong)((uVar22 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar22 & 0x100) != 0) * 0x100 | (ulonglong)((uVar22 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar22 & 0x40) != 0) * 0x40 | (ulonglong)((uVar22 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar22 & 4) != 0) * 4 | (ulonglong)((uVar22 & 1) != 0) |
       (ulonglong)((uVar22 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar22 & 0x40000) != 0) * 0x40000;
  uVar4 = *(undefined8 *)(local_res18 + -0x30);
  *(undefined8 *)(local_res18 + -0x18) = 0;
  uVar5 = *(undefined8 *)(local_res18 + -0x28);
  *puVar2 = param_1;
  *(undefined8 *)(local_res18 + -0x28) = param_1;
  *puVar2 = &LAB_161252ffb;
  *(undefined8 *)(local_res18 + -0x30) = 0x14d965014;
  uVar6 = FUN_161252fe3();
  lVar3 = *(longlong *)(local_res18 + -0x18);
  *(ulonglong *)(local_res18 + -0x18) = *(ulonglong *)(local_res18 + -0x18) & unaff_R15;
  *(ulonglong *)(local_res18 + -0x30) = lVar3 + unaff_R15;
  *(longlong *)(local_res18 + -0x18) = *(longlong *)(local_res18 + -0x18) << 1;
  lVar3 = *(longlong *)(local_res18 + -0x30);
  *(undefined8 *)(local_res18 + -0x30) = param_3;
  *(undefined8 *)(local_res18 + -0x38) = uVar4;
  *(ulonglong *)(local_res18 + -0x40) = unaff_R15;
  *(undefined8 *)(local_res18 + -0x30) = *(undefined8 *)(local_res18 + -0x30);
  *(undefined8 *)(local_res18 + -0x38) = uVar6;
  *(undefined4 *)(local_res18 + -0x38) = 0x19f0a688;
  *(int *)(local_res18 + -0x38) = *(int *)(local_res18 + -0x38) + 0x183f138a;
  *(undefined4 *)(local_res18 + -0x34) = 0;
  *(longlong *)(local_res18 + -0x28 + (*(ulonglong *)(local_res18 + -0x38) ^ 0x322fba02)) =
       lVar3 - *(longlong *)(local_res18 + -0x18);
  uVar4 = *(undefined8 *)(local_res18 + -0x28);
  *(undefined8 *)(local_res18 + -0x28) = uVar8;
  *(undefined8 *)(local_res18 + -0x30) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x38) = uVar5;
  *(undefined8 *)(local_res18 + -0x30) = unaff_R13;
  FUN_1667e055f(uVar4);
  return;
}



// FUNCTION 14d9658ce FUN_14d9658ce body=155 status=ok
// SIG undefined FUN_14d9658ce(void)

void FUN_14d9658ce(undefined8 param_1)

{
  FUN_166040ba3(param_1);
  return;
}



// FUNCTION 14d965a1d FUN_14d965a1d body=148 status=ok
// SIG undefined FUN_14d965a1d(void)

/* WARNING: Removing unreachable block (ram,0x00014d965ab2) */

void FUN_14d965a1d(void)

{
  undefined1 uVar1;
  char in_AL;
  uint7 in_register_00000001;
  undefined8 unaff_RBP;
  undefined8 unaff_R12;
  ushort uVar2;
  ulonglong uVar3;
  undefined1 unaff_retaddr;
  ushort local_res8;
  uint6 uStackX_a;
  longlong local_res10;
  
  uVar2 = (-0x101 - (local_res8 | 0xfeff)) + local_res8;
                    /* WARNING: Read-only address (ram,0x00014d7ac719) is written */
  LOCK();
  uVar1 = unaff_retaddr;
  if (in_AL != '\0') {
    uVar1 = uRam000000014d7ac719;
  }
  uRam000000014d7ac719 = uVar1;
  UNLOCK();
  *(undefined8 *)(local_res10 + -8) = unaff_RBP;
  *(undefined8 *)(local_res10 + -0x10) = unaff_RBP;
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x400) != 0) * 0x400 |
       (ulonglong)((uVar2 & 0x200) != 0) * 0x200 | (ulonglong)((uVar2 & 0x100) != 0) * 0x100 |
       (ulonglong)(in_AL < '\0') * 0x80 | (ulonglong)(in_AL == '\0') * 0x40 |
       (ulonglong)((uVar2 & 0x10) != 0) * 0x10 | (ulonglong)((POPCOUNT(in_AL) & 1U) == 0) * 4 |
       (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 | (ulonglong)((uStackX_a & 4) != 0) * 0x40000
  ;
  if (in_AL >= '\0') {
    thunk_FUN_1663a4b8d();
    return;
  }
  *(ulonglong *)(local_res10 + -0x20) = (ulonglong)in_register_00000001 << 8;
  *(undefined4 *)(local_res10 + -0x20) = 0x695e6439;
  *(undefined4 *)(local_res10 + -0x1c) = 0;
  uVar3 = *(ulonglong *)(local_res10 + -0x18);
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res10 + -0x18) = unaff_R12;
  *(ulonglong *)(local_res10 + -8) = (*(ulonglong *)(local_res10 + -0x20) ^ 0x65b02f6b) - 0xc32de92;
  FUN_165c7153c();
  return;
}



// FUNCTION 14d965ab2 FUN_14d965ab2 body=118 status=ok
// SIG undefined FUN_14d965ab2(void)

void FUN_14d965ab2(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStackX_10;
  
  FUN_160fdedf0(param_1,param_2,param_3,(~uStackX_10 + param_1) - (~uStackX_10 & param_1));
  return;
}



// FUNCTION 14d965b30 FUN_14d965b30 body=41 status=ok
// SIG undefined FUN_14d965b30(void)

void FUN_14d965b30(void)

{
  thunk_FUN_16178a6c5();
  return;
}



// FUNCTION 14d965b5a FUN_14d965b5a body=86 status=ok
// SIG undefined FUN_14d965b5a(void)

void FUN_14d965b5a(void)

{
  FUN_16546165d();
  return;
}



// FUNCTION 14d965bb1 FUN_14d965bb1 body=20 status=ok
// SIG undefined FUN_14d965bb1(void)

void FUN_14d965bb1(void)

{
  return;
}



// FUNCTION 14d966201 FUN_14d966201 body=137 status=ok
// SIG undefined FUN_14d966201(void)

/* WARNING: Removing unreachable block (ram,0x00014d966285) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d966201(undefined8 param_1,undefined8 param_2)

{
  undefined1 *unaff_RDI;
  byte bVar1;
  byte unaff_retaddr;
  undefined8 in_stack_00000008;
  undefined4 uStackX_10;
  
  bVar1 = 0x57 - (~unaff_retaddr + 2);
  if (bVar1 == 0) {
    FUN_162597761();
    return;
  }
  bVar1 = bVar1 & 0x1f;
  if (-1 < (int)((uStackX_10 << bVar1 | uStackX_10 >> 0x20 - bVar1 | 0x1ffffff) + 0xfe000001)) {
    FUN_15ba212d0(in_stack_00000008,param_2,*unaff_RDI);
    return;
  }
  FUN_156a58007();
  return;
}



// FUNCTION 14d96628c FUN_14d96628c body=294 status=ok
// SIG undefined FUN_14d96628c(void)

/* WARNING: Removing unreachable block (ram,0x00014d966312) */

void FUN_14d96628c(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  if (*(ulonglong *)(unaff_R12 + -0x90) + in_RAX + (*(ulonglong *)(unaff_R12 + -0x90) & in_RAX) * -2
      == 0) {
    FUN_14da40453(1);
    FUN_1567a7748();
    return;
  }
  FUN_157199e8c();
  return;
}



// FUNCTION 14d9664d2 FUN_14d9664d2 body=109 status=ok
// SIG undefined FUN_14d9664d2(void)

void FUN_14d9664d2(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong unaff_R12;
  undefined8 uStackX_10;
  undefined8 local_res20;
  
  puVar1 = (ulonglong *)(local_res20 + -8);
  *puVar1 = unaff_R12;
  *(ulonglong *)(local_res20 + -0x10) = *puVar1;
  *puVar1 = 0;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 0x14d966551;
  *(int *)(uStackX_10 + 0x6c03adc1) =
       *(int *)(uStackX_10 + 0x6c03adc1) + 0x7a + (uint)(uVar2 < 0xfffffffeb2699aaf);
  return;
}



// FUNCTION 14d966581 FUN_14d966581 body=183 status=ok
// SIG undefined FUN_14d966581(void)

/* WARNING: Removing unreachable block (ram,0x00014d96660a) */

void FUN_14d966581(undefined8 param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1654f5c01(param_1,*(undefined8 *)(unaff_R13 + -0x90),
                (~*(ulonglong *)(unaff_R13 + -0x60) + unaff_R15) -
                (~*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15));
  return;
}



// FUNCTION 14d966759 FUN_14d966759 body=284 status=ok
// SIG undefined FUN_14d966759(void)

/* WARNING: Removing unreachable block (ram,0x0001661df123) */
/* WARNING: Removing unreachable block (ram,0x0001661df12e) */
/* WARNING: Removing unreachable block (ram,0x0001661df129) */
/* WARNING: Removing unreachable block (ram,0x0001648b93bc) */
/* WARNING: Removing unreachable block (ram,0x00014d9667e4) */
/* WARNING: Removing unreachable block (ram,0x0001648b9327) */
/* WARNING: Removing unreachable block (ram,0x0001648b93b6) */
/* WARNING: Removing unreachable block (ram,0x0001661df09a) */

undefined8 FUN_14d966759(void)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
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
  undefined8 unaff_retaddr;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x98);
  if ((longlong)(*(ulonglong *)(unaff_R13 + -0xa0) & unaff_R15) < 0) {
    uVar3 = FUN_1648b928a();
    return uVar3;
  }
  uVar5 = *(ulonglong *)(unaff_R13 + -8) + unaff_R15 +
          (*(ulonglong *)(unaff_R13 + -8) & unaff_R15) * -2;
  uVar19 = *(ulonglong *)(unaff_R13 + -0x70) & unaff_R15;
  if (-1 < (longlong)uVar19) {
    puVar4 = (undefined8 *)(*(ulonglong *)(unaff_R13 + -0x70) + unaff_R15 + uVar19 * -2);
    bVar14 = (uVar5 & 0x4000) != 0;
    bVar13 = (uVar5 & 0x800) != 0;
    bVar12 = (uVar5 & 0x200) != 0;
    bVar11 = 0;
    bVar10 = (uVar5 & 0x80) != 0;
    bVar9 = (uVar5 & 0x40) != 0;
    bVar8 = (uVar5 & 0x10) != 0;
    bVar7 = (uVar5 & 4) != 0;
    bVar6 = (uVar5 & 1) != 0;
    bVar18 = (uVar5 & 0x200000) != 0;
    bVar15 = (uVar5 & 0x40000) != 0;
    bVar17 = 0;
    bVar16 = 0;
    pcVar2 = (code *)swi(0x2e);
    (*pcVar2)();
    *puVar4 = unaff_retaddr;
    puVar4[-1] = unaff_retaddr;
    puVar4[-2] = (ulonglong)(bVar14 & 1) * 0x4000 | (ulonglong)(bVar13 & 1) * 0x800 |
                 (ulonglong)((uVar5 & 0x400) != 0) * 0x400 | (ulonglong)(bVar12 & 1) * 0x200 |
                 (ulonglong)(bVar11 & 1) * 0x100 | (ulonglong)(bVar10 & 1) * 0x80 |
                 (ulonglong)(bVar9 & 1) * 0x40 | (ulonglong)(bVar8 & 1) * 0x10 |
                 (ulonglong)(bVar7 & 1) * 4 | (ulonglong)(bVar6 & 1) |
                 (ulonglong)(bVar18 & 1) * 0x200000 | (ulonglong)(bVar17 & 1) * 0x100000 |
                 (ulonglong)(bVar16 & 1) * 0x80000 | (ulonglong)(bVar15 & 1) * 0x40000;
    uVar19 = puVar4[-2];
    puVar4[-2] = (ulonglong)((uVar19 & 0x4000) != 0) * 0x4000 |
                 (ulonglong)((uVar19 & 0x800) != 0) * 0x800 |
                 (ulonglong)((uVar19 & 0x400) != 0) * 0x400 |
                 (ulonglong)((uVar19 & 0x200) != 0) * 0x200 |
                 (ulonglong)((uVar19 & 0x100) != 0) * 0x100 |
                 (ulonglong)((uVar19 & 0x80) != 0) * 0x80 | (ulonglong)((uVar19 & 0x40) != 0) * 0x40
                 | (ulonglong)((uVar19 & 0x10) != 0) * 0x10 | (ulonglong)((uVar19 & 4) != 0) * 4 |
                 (ulonglong)((uVar19 & 1) != 0) | (ulonglong)((uVar19 & 0x200000) != 0) * 0x200000 |
                 (ulonglong)((uVar19 & 0x40000) != 0) * 0x40000;
    puVar4[-3] = unaff_R14;
    uVar19 = puVar4[-2];
    puVar4[-2] = ~(uVar1 & unaff_R15) & (uVar1 | unaff_R15);
    puVar4[-3] = (ulonglong)((uVar19 & 0x4000) != 0) * 0x4000 |
                 (ulonglong)((uVar19 & 0x800) != 0) * 0x800 |
                 (ulonglong)((uVar19 & 0x400) != 0) * 0x400 |
                 (ulonglong)((uVar19 & 0x200) != 0) * 0x200 |
                 (ulonglong)((uVar19 & 0x100) != 0) * 0x100 |
                 (ulonglong)((uVar19 & 0x80) != 0) * 0x80 | (ulonglong)((uVar19 & 0x40) != 0) * 0x40
                 | (ulonglong)((uVar19 & 0x10) != 0) * 0x10 | (ulonglong)((uVar19 & 4) != 0) * 4 |
                 (ulonglong)((uVar19 & 1) != 0) | (ulonglong)((uVar19 & 0x200000) != 0) * 0x200000 |
                 (ulonglong)((uVar19 & 0x40000) != 0) * 0x40000;
    *puVar4 = 0x4cc8028;
    puVar4[-2] = unaff_RSI;
    puVar4[-3] = unaff_RSI;
    puVar4[-2] = &LAB_14e0e663a;
    uVar3 = (*(code *)&LAB_15b6bac59)();
    return uVar3;
  }
  uVar3 = FUN_14e0e6585();
  return uVar3;
}



// FUNCTION 14d966913 FUN_14d966913 body=145 status=ok
// SIG undefined FUN_14d966913(void)

void FUN_14d966913(byte param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  longlong unaff_RBP;
  longlong unaff_R12;
  undefined8 unaff_retaddr;
  
  FUN_15744fb03(unaff_retaddr,unaff_RBP - (param_2 << (param_1 & 0x3f)),
                *(ulonglong *)(unaff_R12 + -0x50) | in_RAX,param_4);
  return;
}



// FUNCTION 14d9669a7 FUN_14d9669a7 body=274 status=ok
// SIG undefined FUN_14d9669a7(void)

/* WARNING: Removing unreachable block (ram,0x00014d966ac2) */

void FUN_14d9669a7(void)

{
  FUN_15b15d0fa();
  return;
}



// FUNCTION 14d966ac2 FUN_14d966ac2 body=319 status=ok
// SIG undefined FUN_14d966ac2(void)

void FUN_14d966ac2(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  ulonglong unaff_RBP;
  ulonglong unaff_RSI;
  longlong in_R11;
  longlong unaff_R13;
  undefined6 unaff_000000ba;
  
  uVar1 = *(ulonglong *)(in_R11 + 8);
  *(ulonglong *)(in_R11 + 8) = ~*(ulonglong *)(in_R11 + 8);
  *(ulonglong *)(in_R11 + 8) = *(ulonglong *)(in_R11 + 8) | unaff_RBP;
  *(ulonglong *)(in_R11 + 8) = ~((~unaff_RBP | uVar1) & *(ulonglong *)(in_R11 + 8));
  FUN_157143220();
  FUN_15649168b(*(ulonglong *)(unaff_R13 + -0x48) + CONCAT62(unaff_000000ba,0xec1c) +
                (*(ulonglong *)(unaff_R13 + -0x48) & CONCAT62(unaff_000000ba,0xec1c)) * -2,
                FUN_15649168b,
                0xffffffffffffffff -
                (((unaff_RSI ^ 0xffffffffffffffff) & unaff_RBX | param_3) +
                 CONCAT62(unaff_000000ba,0xec1c) + 1) & param_2);
  return;
}



// FUNCTION 14d966e76 FUN_14d966e76 body=138 status=ok
// SIG undefined FUN_14d966e76(void)

void FUN_14d966e76(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong unaff_RBP;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  *(undefined8 *)(unaff_RBP + -8) = *(undefined8 *)(unaff_R13 + -0x88);
  uVar1 = *(ulonglong *)(unaff_RBP + -8);
  *(undefined8 *)(unaff_RBP + -8) = *(undefined8 *)(unaff_R13 + -0x38);
  *(undefined8 *)(unaff_RBP + -8) = param_1;
  FUN_1646e6674(0xff,FUN_1646e6674,uVar1 ^ unaff_R15,
                ~((~unaff_R15 + param_4) - (~unaff_R15 & param_4) & (~param_4 | unaff_R15)));
  return;
}



// FUNCTION 14d966f00 FUN_14d966f00 body=324 status=ok
// SIG undefined FUN_14d966f00(void)

/* WARNING: Removing unreachable block (ram,0x00014d966ffc) */
/* WARNING: Removing unreachable block (ram,0x00014d966f9e) */

void FUN_14d966f00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R13;
  undefined8 local_8;
  
  local_8 = *(undefined8 *)(unaff_R13 + -8);
  if (&DAT_00000007 < &local_8) {
    FUN_162116566(param_1,param_2,param_3);
    return;
  }
  FUN_16217dcf9();
  return;
}



// FUNCTION 14d9670dd FUN_14d9670dd body=270 status=ok
// SIG undefined FUN_14d9670dd(void)

/* WARNING: Removing unreachable block (ram,0x00014d967202) */
/* WARNING: Removing unreachable block (ram,0x00014d967208) */
/* WARNING: Removing unreachable block (ram,0x00014d967275) */
/* WARNING: Removing unreachable block (ram,0x00014d96727b) */
/* WARNING: Removing unreachable block (ram,0x00014d967282) */
/* WARNING: Removing unreachable block (ram,0x00014d96728f) */
/* WARNING: Removing unreachable block (ram,0x00014d9673dd) */
/* WARNING: Removing unreachable block (ram,0x00014d967429) */
/* WARNING: Removing unreachable block (ram,0x00014d96742f) */
/* WARNING: Removing unreachable block (ram,0x00014d967434) */
/* WARNING: Removing unreachable block (ram,0x0001648d212e) */
/* WARNING: Removing unreachable block (ram,0x000156e80129) */
/* WARNING: Removing unreachable block (ram,0x00014d967156) */
/* WARNING: Removing unreachable block (ram,0x00014d9671f7) */
/* WARNING: Removing unreachable block (ram,0x00014e1c07ab) */

undefined8
FUN_14d9670dd(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 in_RAX;
  undefined8 uVar4;
  longlong unaff_R12;
  longlong unaff_R13;
  undefined8 unaff_R14;
  undefined8 local_res18;
  
  uVar1 = *(ulonglong *)(unaff_R12 + 0x10);
  lVar2 = *(longlong *)(unaff_R12 + 0x10);
  *(ulonglong *)(unaff_R12 + 0x10) = ~*(ulonglong *)(unaff_R12 + 0x10);
  lVar3 = *(longlong *)(unaff_R12 + 0x10);
  *(ulonglong *)(unaff_R12 + 0x10) = *(ulonglong *)(unaff_R12 + 0x10) & param_1;
  *(ulonglong *)(unaff_R12 + 0x10) = (lVar3 + param_1) - *(longlong *)(unaff_R12 + 0x10);
  *(ulonglong *)(unaff_R12 + 0x10) =
       -1 - ((~(param_2 & uVar1) + lVar2) - ~param_2 & *(ulonglong *)(unaff_R12 + 0x10));
  *(undefined8 *)(param_5 + -8) = 0;
  *(longlong *)(param_5 + -8) = *(longlong *)(param_5 + -8) - unaff_R13;
  *(ulonglong *)(param_5 + -8) = ~*(ulonglong *)(param_5 + -8);
  *(longlong *)(param_5 + -8) = *(longlong *)(param_5 + -8) + 1;
  *(undefined8 *)(param_5 + -0x10) = unaff_R14;
  *(undefined8 *)(param_5 + -0x18) = unaff_R14;
  *(undefined8 *)(param_5 + -0x10) = *(undefined8 *)(param_5 + -8);
  *(undefined8 *)(param_5 + -0x18) = local_res18;
  *(undefined8 *)(param_5 + -0x20) = in_RAX;
  *(undefined4 *)(param_5 + -0x20) = 0xcfcb0755;
  *(undefined4 *)(param_5 + -0x1c) = 0xffffffff;
  *(undefined1 **)(param_5 + *(longlong *)(param_5 + -0x20) + 0x3034f8a3) = &LAB_1655e0971;
  uVar4 = (*(code *)0x1655e0947)(*(undefined8 *)(param_5 + -0x18));
  return uVar4;
}



// FUNCTION 14d967156 FUN_14d967156 body=293 status=ok
// SIG undefined FUN_14d967156(void)

/* WARNING: Removing unreachable block (ram,0x00014d967202) */
/* WARNING: Removing unreachable block (ram,0x00014d967208) */
/* WARNING: Removing unreachable block (ram,0x00014d967275) */
/* WARNING: Removing unreachable block (ram,0x00014d96727b) */
/* WARNING: Removing unreachable block (ram,0x00014d967282) */
/* WARNING: Removing unreachable block (ram,0x00014d96728f) */
/* WARNING: Removing unreachable block (ram,0x00014d9673dd) */
/* WARNING: Removing unreachable block (ram,0x00014d967429) */
/* WARNING: Removing unreachable block (ram,0x00014d96742f) */
/* WARNING: Removing unreachable block (ram,0x00014d967434) */
/* WARNING: Removing unreachable block (ram,0x0001648d212e) */
/* WARNING: Removing unreachable block (ram,0x000156e80129) */
/* WARNING: Removing unreachable block (ram,0x00014e1c07ab) */

undefined8 FUN_14d967156(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14e1c07ab();
  return uVar1;
}



// FUNCTION 14d967282 FUN_14d967282 body=135 status=ok
// SIG undefined FUN_14d967282(void)

/* WARNING: Removing unreachable block (ram,0x00014d967434) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_14d967282(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  longlong unaff_RDI;
  short *in_R11;
  undefined8 unaff_R13;
  bool bVar6;
  bool bVar7;
  ulonglong uVar8;
  ulonglong uStackX_20;
  
  uVar1 = *(undefined8 *)(unaff_RDI + -0x88);
  lVar5 = FUN_14e24e935(param_1,param_2 + param_1 + (param_2 & param_1) * -2);
  bVar4 = (byte)param_1;
  *(longlong *)(lVar5 + 8) = unaff_RDI;
  bVar3 = FUN_166acc9e5();
  *in_R11 = *in_R11 + 0x15ca;
  LOCK();
  bVar6 = bVar3 < DAT_14d7c0e4e;
  bVar7 = SBORROW1(bVar3,DAT_14d7c0e4e);
  cVar2 = bVar3 - DAT_14d7c0e4e;
  if (cVar2 != '\0') {
    bVar4 = DAT_14d7c0e4e;
    bVar3 = DAT_14d7c0e4e;
  }
  DAT_14d7c0e4e = bVar4;
  UNLOCK();
  *(undefined8 *)(param_5 + -8) = unaff_R13;
  *(undefined8 *)(param_5 + -0x10) = unaff_R13;
  *(ulonglong *)(param_5 + -0x18) =
       (ulonglong)((uStackX_20 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar7 * 0x800 |
       (ulonglong)((uStackX_20 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_20 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_20 & 0x100) != 0) * 0x100 | (ulonglong)(cVar2 < '\0') * 0x80 |
       (ulonglong)(cVar2 == '\0') * 0x40 | (ulonglong)((uStackX_20 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar2) & 1U) == 0) * 4 | (ulonglong)bVar6 |
       (ulonglong)((uStackX_20 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_20 & 0x40000) != 0) * 0x40000;
  uVar8 = *(ulonglong *)(param_5 + -0x18);
  *(undefined8 *)(param_5 + -0x18) = uVar1;
  *(undefined8 *)(param_5 + -0x20) = uVar1;
  *(undefined1 **)(param_5 + -0x18) = &LAB_1648d2131;
  if ((uVar8 & 1) != 0) {
    bVar4 = FUN_1648d212e();
    return bVar4;
  }
  return bVar3;
}



// FUNCTION 14d96730c FUN_14d96730c body=288 status=ok
// SIG undefined FUN_14d96730c(void)

/* WARNING: Removing unreachable block (ram,0x00014d967434) */

byte FUN_14d96730c(byte param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5,longlong param_6)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  longlong in_RAX;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  short *in_R11;
  undefined8 unaff_R13;
  short unaff_R15W;
  bool bVar4;
  bool bVar5;
  ulonglong uVar6;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(in_RAX + 8) = unaff_RDI;
  bVar2 = FUN_166acc9e5(param_1,param_2,in_stack_00000008);
  *in_R11 = (-0x101 - unaff_R15W) + *in_R11;
  LOCK();
  bVar4 = bVar2 < DAT_14d7c0e4e;
  bVar5 = SBORROW1(bVar2,DAT_14d7c0e4e);
  cVar1 = bVar2 - DAT_14d7c0e4e;
  bVar3 = param_1;
  if (cVar1 != '\0') {
    bVar3 = DAT_14d7c0e4e;
    bVar2 = DAT_14d7c0e4e;
  }
  DAT_14d7c0e4e = bVar3;
  UNLOCK();
  *(undefined8 *)(param_6 + -8) = unaff_R13;
  *(undefined8 *)(param_6 + -0x10) = unaff_R13;
  *(ulonglong *)(param_6 + -0x18) =
       (ulonglong)((param_5 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar5 * 0x800 |
       (ulonglong)((param_5 & 0x400) != 0) * 0x400 | (ulonglong)((param_5 & 0x200) != 0) * 0x200 |
       (ulonglong)((param_5 & 0x100) != 0) * 0x100 | (ulonglong)(cVar1 < '\0') * 0x80 |
       (ulonglong)(cVar1 == '\0') * 0x40 | (ulonglong)((param_5 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar1) & 1U) == 0) * 4 | (ulonglong)bVar4 |
       (ulonglong)((param_5 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((param_5 & 0x40000) != 0) * 0x40000;
  uVar6 = *(ulonglong *)(param_6 + -0x18);
  *(undefined8 *)(param_6 + -0x18) = unaff_RBP;
  *(undefined8 *)(param_6 + -0x20) = unaff_RBP;
  *(undefined1 **)(param_6 + -0x18) = &LAB_1648d2131;
  if ((uVar6 & 1) != 0) {
    bVar3 = FUN_1648d212e();
    return bVar3;
  }
  return bVar2;
}



// FUNCTION 14d967434 FUN_14d967434 body=47 status=ok
// SIG undefined FUN_14d967434(void)

void FUN_14d967434(void)

{
  return;
}



// FUNCTION 14d9674d8 FUN_14d9674d8 body=159 status=ok
// SIG undefined FUN_14d9674d8(void)

void FUN_14d9674d8(undefined8 param_1,longlong param_2)

{
  ulonglong unaff_RDI;
  ulonglong unaff_R15;
  
  FUN_165535428(param_1,-1 - (unaff_RDI &
                             (~(0xffffffffffffffffU - param_2 & unaff_R15) + unaff_R15) -
                             ~(0xffffffffffffffffU - param_2)));
  FUN_14d967578();
  return;
}



// FUNCTION 14d967578 FUN_14d967578 body=127 status=ok
// SIG undefined FUN_14d967578(void)

void FUN_14d967578(undefined8 param_1)

{
  FUN_156baa622(param_1,FUN_156baa622);
  return;
}



// FUNCTION 14d9675f8 FUN_14d9675f8 body=138 status=ok
// SIG undefined FUN_14d9675f8(void)

void FUN_14d9675f8(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong in_stack_00000018;
  
  FUN_160c15c6c(FUN_160c15c6c,param_2,param_3,param_4,
                0xffffffffffffffffU - in_stack_00000018 | param_1);
  FUN_14d967685();
  return;
}



// FUNCTION 14d967685 FUN_14d967685 body=129 status=ok
// SIG undefined FUN_14d967685(void)

void FUN_14d967685(void)

{
  return;
}



// FUNCTION 14d967875 FUN_14d967875 body=689 status=ok
// SIG undefined FUN_14d967875(void)

/* WARNING: Removing unreachable block (ram,0x00014d96792d) */
/* WARNING: Removing unreachable block (ram,0x00014d967982) */
/* WARNING: Removing unreachable block (ram,0x00014d96797d) */
/* WARNING: Removing unreachable block (ram,0x00014d967985) */
/* WARNING: Removing unreachable block (ram,0x00014d967a77) */
/* WARNING: Removing unreachable block (ram,0x00014d967a8c) */
/* WARNING: Removing unreachable block (ram,0x00014d967a94) */
/* WARNING: Removing unreachable block (ram,0x0001575d1f1c) */
/* WARNING: Removing unreachable block (ram,0x0001575d1fb6) */
/* WARNING: Removing unreachable block (ram,0x0001575d1fc7) */
/* WARNING: Removing unreachable block (ram,0x0001575d1fce) */
/* WARNING: Removing unreachable block (ram,0x000166522d09) */
/* WARNING: Removing unreachable block (ram,0x000166522d3e) */
/* WARNING: Removing unreachable block (ram,0x000166522d37) */
/* WARNING: Removing unreachable block (ram,0x000166522d40) */
/* WARNING: Removing unreachable block (ram,0x000166522d46) */
/* WARNING: Removing unreachable block (ram,0x000166522d4a) */
/* WARNING: Removing unreachable block (ram,0x000166522d5c) */
/* WARNING: Removing unreachable block (ram,0x000166522d75) */
/* WARNING: Removing unreachable block (ram,0x000166522d7f) */
/* WARNING: Removing unreachable block (ram,0x00015787d6c9) */
/* WARNING: Removing unreachable block (ram,0x00014d967917) */

void FUN_14d967875(void)

{
  FUN_156a6bb52();
  return;
}



// FUNCTION 14d967c64 FUN_14d967c64 body=86 status=ok
// SIG undefined FUN_14d967c64(void)

undefined8 FUN_14d967c64(void)

{
  return 0x57ff12b0;
}



// FUNCTION 14d967edd FUN_14d967edd body=125 status=ok
// SIG undefined FUN_14d967edd(void)

void FUN_14d967edd(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong *in_RAX;
  ulonglong unaff_RBX;
  ulonglong in_stack_00000008;
  undefined8 in_stack_00000010;
  
  uVar1 = *in_RAX;
  *in_RAX = ~*in_RAX;
  *in_RAX = (-0x44455c9e - (uVar1 & 0xffffffffbbbaa363)) - *in_RAX;
  *in_RAX = ~(~((~in_stack_00000008 | unaff_RBX) - 0x44455c9c) & *in_RAX);
  FUN_14e01f681(param_1,in_stack_00000010);
  return;
}



// FUNCTION 14d967f5c FUN_14d967f5c body=131 status=ok
// SIG undefined FUN_14d967f5c(void)

void FUN_14d967f5c(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong in_R10;
  
  FUN_1572486fa(0x1e88b036,param_2,*(undefined8 *)(param_2 + -0x88),
                ~((~in_R10 | param_4) & (param_4 ^ 0xffffffffffffffff | in_R10)));
  FUN_14d7a47ad();
  return;
}



// FUNCTION 14d968224 FUN_14d968224 body=164 status=ok
// SIG undefined FUN_14d968224(void)

/* WARNING: Removing unreachable block (ram,0x00014d9682b5) */

void FUN_14d968224(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RSI;
  bool in_ZF;
  
  if (in_ZF) {
    return;
  }
  if (unaff_RSI == 0x1211a8) {
    FUN_16131bb16(param_1,param_2,param_3);
    return;
  }
  FUN_14e21f946();
  return;
}



// FUNCTION 14d968378 FUN_14d968378 body=150 status=ok
// SIG undefined FUN_14d968378(void)

void FUN_14d968378(undefined8 param_1)

{
  FUN_16625232b(param_1);
  return;
}



// FUNCTION 14d9684ab FUN_14d9684ab body=370 status=ok
// SIG undefined FUN_14d9684ab(void)

/* WARNING: Removing unreachable block (ram,0x00014d968552) */
/* WARNING: Removing unreachable block (ram,0x000160e6b3c3) */
/* WARNING: Removing unreachable block (ram,0x000160e6b43e) */
/* WARNING: Removing unreachable block (ram,0x000160e6b439) */
/* WARNING: Removing unreachable block (ram,0x000160e6b440) */
/* WARNING: Removing unreachable block (ram,0x00014d9685b5) */
/* WARNING: Removing unreachable block (ram,0x00014d9685c3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d9684ab(longlong param_1)

{
  ulonglong unaff_RBX;
  
  if (*(longlong *)(param_1 + -0x90) != 0) {
    FUN_156f566bb(param_1,FUN_156f566bb,*(ulonglong *)(param_1 + -0x88) ^ unaff_RBX,
                  ~(*(ulonglong *)(param_1 + -0x58) & unaff_RBX |
                   ~(*(ulonglong *)(param_1 + -0x58) | unaff_RBX)));
    return;
  }
  FUN_1569b292f();
  return;
}



// FUNCTION 14d96861f FUN_14d96861f body=236 status=ok
// SIG undefined FUN_14d96861f(void)

void FUN_14d96861f(void)

{
  (*(code *)0x162c4330b)();
  return;
}



// FUNCTION 14d96869e FUN_14d96869e body=59 status=ok
// SIG undefined FUN_14d96869e(void)

void FUN_14d96869e(void)

{
  return;
}



// FUNCTION 14d968946 FUN_14d968946 body=238 status=ok
// SIG undefined FUN_14d968946(void)

/* WARNING: Removing unreachable block (ram,0x000164f0dfd1) */
/* WARNING: Removing unreachable block (ram,0x00014d9689de) */
/* WARNING: Removing unreachable block (ram,0x00014d9689e4) */

undefined8 FUN_14d968946(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d968c3f FUN_14d968c3f body=159 status=ok
// SIG undefined FUN_14d968c3f(void)

void FUN_14d968c3f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R12;
  
  FUN_1659563cd(FUN_1659563cd,param_2,param_3,param_4,*(undefined8 *)(unaff_R12 + -0x68));
  return;
}



// FUNCTION 14d968d79 FUN_14d968d79 body=161 status=ok
// SIG undefined FUN_14d968d79(void)

undefined8 FUN_14d968d79(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d968eb5 FUN_14d968eb5 body=155 status=ok
// SIG undefined FUN_14d968eb5(void)

/* WARNING: Instruction at (ram,0x0001567db58b) overlaps instruction at (ram,0x0001567db58a)
    */
/* WARNING: Removing unreachable block (ram,0x000156df1ac2) */
/* WARNING: Removing unreachable block (ram,0x0001567db575) */
/* WARNING: Removing unreachable block (ram,0x0001567db57b) */
/* WARNING: Removing unreachable block (ram,0x0001567db58b) */
/* WARNING: Removing unreachable block (ram,0x0001567db58a) */
/* WARNING: Removing unreachable block (ram,0x0001567db590) */
/* WARNING: Removing unreachable block (ram,0x00014d7bf3c3) */
/* WARNING: Removing unreachable block (ram,0x00014d968f37) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d968eb5(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulonglong in_stack_00000010;
  
  uVar1 = ~((param_1 ^ 0xffffffffffffffff | in_stack_00000010) &
           (~(~in_stack_00000010 & param_1) + param_1) - in_stack_00000010);
  pcVar3 = FUN_16681ca5f;
  FUN_16681ca5f();
  uVar2 = FUN_15afa75d4(uVar1,param_2,pcVar3,param_3);
  return uVar2;
}



// FUNCTION 14d969039 FUN_14d969039 body=754 status=ok
// SIG undefined FUN_14d969039(void)

/* WARNING: Removing unreachable block (ram,0x00014d9690d0) */
/* WARNING: Removing unreachable block (ram,0x00014d9690dc) */
/* WARNING: Removing unreachable block (ram,0x00014d9691e7) */
/* WARNING: Removing unreachable block (ram,0x00014d8f15c5) */
/* WARNING: Removing unreachable block (ram,0x00015645fe66) */
/* WARNING: Removing unreachable block (ram,0x00014d9691ed) */

void FUN_14d969039(void)

{
  FUN_15645fe66();
  return;
}



// FUNCTION 14d9693cf FUN_14d9693cf body=145 status=ok
// SIG undefined FUN_14d9693cf(void)

/* WARNING: Removing unreachable block (ram,0x00014d9694f1) */

undefined8 FUN_14d9693cf(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R15;
  ulonglong local_res8;
  ulonglong local_res18;
  
  uVar2 = *(ulonglong *)(unaff_R12 + -0x98);
  FUN_16574d8c6(param_1,0x9055bb0);
  uVar1 = local_res18 ^ (~local_res8 & local_res18 | local_res8);
  *(ulonglong *)(uVar1 - 8) = uVar2 ^ local_res8;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RDI;
  *(undefined8 *)(uVar1 - 0x18) = unaff_RDI;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x18) = 0;
  *(longlong *)(uVar1 - 0x18) = *(longlong *)(uVar1 - 0x18) + unaff_R15;
  *(undefined **)(uVar1 - 8) = &DAT_1573a32e3;
  uVar3 = FUN_14d7c3fd6(param_1);
  return uVar3;
}



// FUNCTION 14d969460 FUN_14d969460 body=225 status=ok
// SIG undefined FUN_14d969460(void)

/* WARNING: Removing unreachable block (ram,0x00014d9694f1) */

undefined8
FUN_14d969460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  undefined8 uVar1;
  undefined8 unaff_RDI;
  ulonglong unaff_R15;
  longlong local_res10;
  undefined8 uStackX_18;
  
  param_5 = param_5 ^ unaff_R15;
  *(undefined8 *)(param_5 - 8) = uStackX_18;
  *(undefined8 *)(param_5 - 0x10) = unaff_RDI;
  *(undefined8 *)(param_5 - 0x18) = unaff_RDI;
  *(undefined8 *)(param_5 - 0x10) = *(undefined8 *)(param_5 - 8);
  *(undefined8 *)(param_5 - 0x18) = 0;
  *(longlong *)(param_5 - 0x18) = *(longlong *)(param_5 - 0x18) + local_res10;
  *(undefined **)(param_5 - 8) = &DAT_1573a32e3;
  uVar1 = FUN_14d7c3fd6(param_1,param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 14d969508 FUN_14d969508 body=299 status=ok
// SIG undefined FUN_14d969508(void)

/* WARNING: Removing unreachable block (ram,0x00014d96958f) */

void FUN_14d969508(ulonglong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong in_R10;
  longlong lVar3;
  undefined8 unaff_R12;
  longlong unaff_R13;
  undefined8 unaff_R15;
  undefined8 local_res10;
  undefined8 in_stack_00000018;
  undefined8 uStackX_20;
  ulonglong in_stack_00000030;
  
  *(ulonglong *)(unaff_R13 + 8) = ~in_R10 | ~*(ulonglong *)(unaff_R13 + 8);
  lVar3 = in_stack_00000030 + param_1 + ~(~in_stack_00000030 | ~param_1) * -2;
  *(undefined8 *)(lVar3 + -8) = unaff_R12;
  *(undefined8 *)(lVar3 + -0x10) = in_stack_00000018;
  *(undefined8 *)(lVar3 + -0x18) = in_stack_00000018;
  *(undefined8 *)(lVar3 + -0x20) = local_res10;
  lVar1 = *(longlong *)(lVar3 + -0x20);
  *(undefined8 *)(lVar3 + -0x10) = *(undefined8 *)(lVar3 + -8);
  *(undefined8 *)(lVar3 + -8) = 0;
  *(longlong *)(lVar3 + -8) = (longlong)(&LAB_15784dbfd + *(longlong *)(lVar3 + -8));
  *(undefined8 *)(lVar3 + -0x18) = 0x1616a7739;
  uVar2 = FUN_15784dbdd();
  *(undefined8 *)(lVar3 + -0x18) = unaff_R15;
  *(undefined8 *)(lVar3 + -0x20) = *(undefined8 *)(lVar1 + -0x50);
  *(undefined8 *)(lVar3 + -0x18) = uStackX_20;
  *(undefined8 *)(lVar3 + -0x20) = uVar2;
  FUN_1663a6ed0(FUN_1663a6ed0);
  return;
}



// FUNCTION 14d969810 FUN_14d969810 body=409 status=ok
// SIG undefined FUN_14d969810(void)

/* WARNING: Removing unreachable block (ram,0x00014d96984f) */
/* WARNING: Removing unreachable block (ram,0x00014d96989a) */

void FUN_14d969810(ulonglong param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong unaff_RSI;
  
  FUN_1669dacad(param_1,((unaff_RSI | param_1) - (~(param_2 & param_1) | unaff_RSI | param_1)) +
                        ~(param_2 & param_1),param_3);
  return;
}



// FUNCTION 14d96989a FUN_14d96989a body=200 status=ok
// SIG undefined FUN_14d96989a(void)

void FUN_14d96989a(void)

{
  FUN_165d5e07a();
  FUN_15b3d5987();
  return;
}



// FUNCTION 14d969a75 FUN_14d969a75 body=115 status=ok
// SIG undefined FUN_14d969a75(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d969a75(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 unaff_RSI;
  longlong local_res8;
  undefined8 *local_res18;
  
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(param_1 + local_res8,param_2);
  *local_res18 = unaff_RSI;
  local_res18[-1] = unaff_RSI;
  *(undefined4 *)(local_res18 + -2) = 0xcdf8ebd;
  *(undefined4 *)((longlong)local_res18 + -0xc) = 0;
  FUN_1613be901();
  return;
}



// FUNCTION 14d969b88 FUN_14d969b88 body=114 status=ok
// SIG undefined FUN_14d969b88(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_14d969b88(void)

{
  longlong in_RAX;
  longlong unaff_RBX;
  ulonglong unaff_RSI;
  
  return ~(unaff_RBX + in_RAX) & unaff_RSI;
}



// FUNCTION 14d969c19 FUN_14d969c19 body=129 status=ok
// SIG undefined FUN_14d969c19(void)

void FUN_14d969c19(void)

{
  longlong unaff_R12;
  
  FUN_1663a9e9d(FUN_1663a9e9d,*(undefined8 *)(unaff_R12 + -0x90));
  return;
}



// FUNCTION 14d969d48 FUN_14d969d48 body=142 status=ok
// SIG undefined FUN_14d969d48(void)

void FUN_14d969d48(undefined8 param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 unaff_retaddr;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_RBP;
  *(undefined8 *)(local_res18 + -0x10) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x18) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RBX;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = unaff_retaddr;
  puVar1 = (ulonglong *)(local_res18 + -8);
  *puVar1 = 0x10dd35e3;
  *puVar1 = *puVar1 ^ 0x10dd35e3;
  *(longlong *)(local_res18 + -8) = (longlong)(&DAT_161c53aa6 + *(longlong *)(local_res18 + -8));
  *(undefined8 *)(local_res18 + -0x18) = param_2;
  *(undefined8 *)(local_res18 + -0x20) = 0xa6;
  (*(code *)&LAB_161c53a89)(param_1,*(undefined8 *)(local_res18 + -0x18));
  return;
}



// FUNCTION 14d969dd7 FUN_14d969dd7 body=162 status=ok
// SIG undefined FUN_14d969dd7(void)

undefined4 FUN_14d969dd7(undefined8 param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong unaff_R14;
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  uVar1 = param_3 + param_2 ^ 0x541ba204;
  *(undefined8 *)(&stack0x00000018 + uVar1) = 0;
  *(ulonglong *)(&stack0x00000018 + uVar1) = ~*(ulonglong *)(&stack0x00000018 + uVar1);
  *(longlong *)(&stack0x00000018 + uVar1) =
       (unaff_R14 + -1) - *(longlong *)(&stack0x00000018 + uVar1);
  FUN_14df7c2dc(unaff_retaddr,in_stack_00000008,in_stack_00000010);
  return 0x4f10e96b;
}



// FUNCTION 14d969e79 FUN_14d969e79 body=179 status=ok
// SIG undefined FUN_14d969e79(void)

void FUN_14d969e79(longlong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  undefined8 unaff_R14;
  undefined8 uStackX_10;
  
  uVar1 = *(undefined8 *)(unaff_RDI + -8);
  FUN_165dea18b();
  *(undefined8 *)(&stack0x00000008 + param_1) = uVar1;
  FUN_14d85d504(uStackX_10,unaff_R14);
  return;
}



// FUNCTION 14d96a0d8 FUN_14d96a0d8 body=70 status=ok
// SIG undefined FUN_14d96a0d8(void)

void FUN_14d96a0d8(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong *unaff_RBX;
  ulonglong unaff_R13;
  undefined8 unaff_retaddr;
  undefined4 local_res18;
  
  uVar1 = *unaff_RBX;
  *unaff_RBX = ~*unaff_RBX;
  *unaff_RBX = (~(uVar1 & unaff_R13) + unaff_R13) - *unaff_RBX;
  *unaff_RBX = ~*unaff_RBX;
  if ((local_res18 & 0x40) != 0) {
    FUN_14d96a101(param_1,unaff_retaddr);
    return;
  }
  return;
}



// FUNCTION 14d96a101 FUN_14d96a101 body=289 status=ok
// SIG undefined FUN_14d96a101(void)

/* WARNING: Instruction at (ram,0x00015745e603) overlaps instruction at (ram,0x00015745e602)
    */
/* WARNING: Removing unreachable block (ram,0x00014d96a15c) */
/* WARNING: Removing unreachable block (ram,0x00015745e5fc) */
/* WARNING: Removing unreachable block (ram,0x00015745e6cc) */

void FUN_14d96a101(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 local_8;
  
  local_8 = 0xffffffffe1cc8fc2;
  lVar2 = 0x1d3858c5;
  pcVar1 = FUN_166d5b967;
  FUN_166d5b967();
  if (lVar2 != 0) {
    FUN_162dfecad();
    return;
  }
  FUN_16119b3e0(pcVar1,param_2,FUN_16119b3e0,local_8);
  return;
}



// FUNCTION 14d96a2b2 FUN_14d96a2b2 body=350 status=ok
// SIG undefined FUN_14d96a2b2(void)

/* WARNING: Removing unreachable block (ram,0x00014d96a3d3) */
/* WARNING: Removing unreachable block (ram,0x00014d96a3d9) */
/* WARNING: Removing unreachable block (ram,0x00014d96a3de) */

void FUN_14d96a2b2(void)

{
  FUN_1658ac4f7();
  FUN_1654f1da2();
  return;
}



// FUNCTION 14d96a51e FUN_14d96a51e body=102 status=ok
// SIG undefined FUN_14d96a51e(void)

void FUN_14d96a51e(void)

{
  return;
}



// FUNCTION 14d96a59c FUN_14d96a59c body=420 status=ok
// SIG undefined FUN_14d96a59c(void)

/* WARNING: Removing unreachable block (ram,0x00014d96a6b3) */
/* WARNING: Removing unreachable block (ram,0x00014d96a6b9) */

void FUN_14d96a59c(longlong param_1,undefined8 param_2,char param_3)

{
  ulonglong unaff_RBX;
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 in_stack_00000008;
  
  uVar1 = (ulonglong)(byte)(param_3 + 0x72);
  uVar2 = *(ulonglong *)(0x695e - ~(param_1 - 0x69b7U)) & unaff_RBX;
  FUN_1663e2f85();
  FUN_162d7395f(in_stack_00000008,0x783b6e,uVar1,uVar2);
  return;
}



// FUNCTION 14d96a7ec FUN_14d96a7ec body=460 status=ok
// SIG undefined FUN_14d96a7ec(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d96a88e) */
/* WARNING: Removing unreachable block (ram,0x00014d96a894) */
/* WARNING: Removing unreachable block (ram,0x00014d96a89f) */
/* WARNING: Removing unreachable block (ram,0x00014d96a91b) */
/* WARNING: Removing unreachable block (ram,0x00014d96a92d) */
/* WARNING: Removing unreachable block (ram,0x00014d96a933) */
/* WARNING: Removing unreachable block (ram,0x00014dbde7b7) */
/* WARNING: Removing unreachable block (ram,0x00014dbde7e4) */
/* WARNING: Removing unreachable block (ram,0x00014dbde7dd) */
/* WARNING: Removing unreachable block (ram,0x00014dbde7e6) */
/* WARNING: Removing unreachable block (ram,0x00014dbde7ec) */
/* WARNING: Removing unreachable block (ram,0x00014dbde7ff) */
/* WARNING: Removing unreachable block (ram,0x00014dbde805) */
/* WARNING: Removing unreachable block (ram,0x00014dbde896) */
/* WARNING: Removing unreachable block (ram,0x00014d7c1691) */
/* WARNING: Removing unreachable block (ram,0x00014dbde89c) */
/* WARNING: Removing unreachable block (ram,0x0001569f25c2) */
/* WARNING: Removing unreachable block (ram,0x000157484f11) */
/* WARNING: Removing unreachable block (ram,0x000157484f16) */

void FUN_14d96a7ec(void)

{
  FUN_162d250d0();
  return;
}



// FUNCTION 14d96ac8c FUN_14d96ac8c body=163 status=ok
// SIG undefined FUN_14d96ac8c(void)

void FUN_14d96ac8c(void)

{
  ulonglong in_RAX;
  longlong unaff_RBP;
  
  *(ulonglong *)(unaff_RBP + 8) = ~*(ulonglong *)(unaff_RBP + 8);
  *(ulonglong *)(unaff_RBP + 8) = *(ulonglong *)(unaff_RBP + 8) | ~in_RAX;
  *(ulonglong *)(unaff_RBP + 8) = ~*(ulonglong *)(unaff_RBP + 8);
  return;
}



// FUNCTION 14d96b128 FUN_14d96b128 body=21 status=ok
// SIG undefined FUN_14d96b128(void)

void FUN_14d96b128(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d96b1d6 FUN_14d96b1d6 body=116 status=ok
// SIG undefined FUN_14d96b1d6(void)

void FUN_14d96b1d6(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  undefined8 in_R11;
  undefined8 unaff_R13;
  undefined8 unaff_retaddr;
  undefined2 local_res8;
  undefined6 uStackX_a;
  undefined8 local_res10;
  
  uVar3 = DAT_14d7bdeb4;
  LOCK();
  UNLOCK();
  DAT_14d7bdeb4 = in_AL;
  *(undefined8 *)(local_res10 + -8) = in_R11;
  *(undefined8 *)(local_res10 + -0x10) = in_R11;
  plVar1 = (longlong *)(local_res10 + -0x18);
  *plVar1 = CONCAT71(in_register_00000001,uVar3);
  *(undefined8 *)(local_res10 + -0x20) = unaff_R13;
  *(undefined4 *)plVar1 = 0xb9d2e9d;
  *(undefined4 *)(local_res10 + -0x14) = 0;
  lVar2 = *plVar1;
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((local_res8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res8 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res8 & 0x200) != 0) * 0x200 | (ulonglong)((local_res8 & 0x80) != 0) * 0x80
       | (ulonglong)((local_res8 & 0x40) != 0) * 0x40 | (ulonglong)((local_res8 & 0x10) != 0) * 0x10
       | (ulonglong)((local_res8 & 4) != 0) * 4 | (ulonglong)((local_res8 & 1) != 0) |
       (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 | (ulonglong)((uStackX_a & 4) != 0) * 0x40000
  ;
  *(longlong *)(local_res10 + -8) = lVar2 + -0x7525fdf;
  FUN_162997bcb(unaff_retaddr);
  return;
}



// FUNCTION 14d96b4a9 FUN_14d96b4a9 body=156 status=ok
// SIG undefined FUN_14d96b4a9(void)

/* WARNING: Removing unreachable block (ram,0x00014d96b57f) */
/* WARNING: Removing unreachable block (ram,0x00014d96b588) */
/* WARNING: Removing unreachable block (ram,0x00014d96b590) */
/* WARNING: Removing unreachable block (ram,0x00014d96b535) */
/* WARNING: Removing unreachable block (ram,0x00014d96b5f6) */
/* WARNING: Removing unreachable block (ram,0x00014d96b5f1) */
/* WARNING: Removing unreachable block (ram,0x00014d96b603) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d96b4a9(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014e0ff6d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14d96b535 FUN_14d96b535 body=283 status=ok
// SIG undefined FUN_14d96b535(void)

/* WARNING: Removing unreachable block (ram,0x00014d96b57f) */
/* WARNING: Removing unreachable block (ram,0x00014d96b588) */
/* WARNING: Removing unreachable block (ram,0x00014d96b590) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d96b535(byte param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  char unaff_retaddr;
  
  FUN_1610962d8(unaff_retaddr + -0x17,
                *(ulonglong *)(unaff_R13 + -0x38) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x38) & unaff_R15) * -2,
                *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                unaff_RSI - (param_4 << ((param_1 ^ 0x1a) - 0x19 & 0x3f)));
  return;
}



// FUNCTION 14d96b700 FUN_14d96b700 body=131 status=ok
// SIG undefined FUN_14d96b700(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d96b700(void)

{
  undefined1 auStack_5bdf [23503];
  
                    /* WARNING: Could not recover jumptable at 0x00014d96b77d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LoadLibraryA((LPCSTR)(0x5cde - (-1 - (longlong)auStack_5bdf)));
  return;
}



// FUNCTION 14d96b983 FUN_14d96b983 body=316 status=ok
// SIG undefined FUN_14d96b983(void)

/* WARNING: Instruction at (ram,0x00014d96b99f) overlaps instruction at (ram,0x00014d96b99e)
    */

void FUN_14d96b983(undefined8 param_1)

{
  char *pcVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char in_AL;
  undefined7 in_register_00000001;
  undefined1 *puVar6;
  undefined8 unaff_RBX;
  ulonglong *puVar7;
  ushort *unaff_RSI;
  undefined1 *in_R10;
  code *pcVar8;
  ulonglong in_R11;
  ulonglong uVar9;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
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
  ulonglong uVar10;
  undefined1 local_res8 [32];
  
  *(ulonglong *)(in_R10 + -8) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_OF & 1) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)(in_SF & 1) * 0x80 | (ulonglong)(in_ZF & 1) * 0x40 | (ulonglong)(in_AF & 1) * 0x10
       | (ulonglong)(in_PF & 1) * 4 | (ulonglong)(in_CF & 1) | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  *(ulonglong *)(in_R10 + -8) = *(ulonglong *)(in_R10 + -8) | 0x800;
  uVar10 = *(ulonglong *)(in_R10 + -8);
  if ((uVar10 & 0x800) == 0) {
    DAT_1082484c6000c18 = in_AL;
    *(char *)CONCAT71(in_register_00000001,in_AL) =
         *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
    puVar6 = (undefined1 *)((ulonglong)(in_R10 + 8) & 0xffffffff);
    puVar7 = (ulonglong *)in_R10;
  }
  else {
    pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + CONCAT71(in_register_00000001,in_AL));
    *pcVar1 = (*pcVar1 - (char)param_1) - ((uVar10 & 1) != 0);
    in_R10[0x108] = 0;
    puVar7 = (ulonglong *)(in_R10 + -8);
    *(undefined1 **)(in_R10 + -8) = local_res8;
    puVar6 = in_R10;
  }
  bVar2 = puVar6[0x108];
  puVar6[0x108] = puVar6[0x108] | 0x9b;
  puVar6[0x108] = ~(~(bVar2 & 0x9b) & puVar6[0x108]);
  uVar3 = *puVar7;
  uVar9 = in_R11 ^ 0xffffffffffffffff;
  *puVar7 = (ulonglong)((uVar10 & 0x4000) != 0) * 0x4000 |
            (ulonglong)((uVar10 & 0x400) != 0) * 0x400 | (ulonglong)((uVar10 & 0x200) != 0) * 0x200
            | (ulonglong)((uVar10 & 0x100) != 0) * 0x100 | (ulonglong)((longlong)uVar9 < 0) * 0x80 |
            (ulonglong)(uVar9 == 0) * 0x40 | (ulonglong)((uVar10 & 0x10) != 0) * 0x10 |
            (ulonglong)((POPCOUNT(uVar9 & 0xff) & 1U) == 0) * 4 |
            (ulonglong)((uVar10 & 0x200000) != 0) * 0x200000 |
            (ulonglong)((uVar10 & 0x40000) != 0) * 0x40000;
  *puVar7 = *puVar7 | 1;
  uVar9 = *puVar7;
  *puVar7 = CONCAT71(in_register_00000001,in_AL);
  *(undefined4 *)puVar7 = 0x3e8bdcc;
  *(undefined4 *)((longlong)puVar7 + 4) = 0;
  uVar10 = *puVar7;
  *puVar7 = (ulonglong)((uVar9 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar9 & 0x800) != 0) * 0x800
            | (ulonglong)((uVar9 & 0x400) != 0) * 0x400 | (ulonglong)((uVar9 & 0x200) != 0) * 0x200
            | (ulonglong)((uVar9 & 0x100) != 0) * 0x100 | (ulonglong)((uVar9 & 0x80) != 0) * 0x80 |
            (ulonglong)((uVar9 & 0x40) != 0) * 0x40 | (ulonglong)((uVar9 & 0x10) != 0) * 0x10 |
            (ulonglong)((uVar9 & 4) != 0) * 4 | (ulonglong)((uVar9 & 1) != 0) |
            (ulonglong)((uVar9 & 0x200000) != 0) * 0x200000 |
            (ulonglong)((uVar9 & 0x40000) != 0) * 0x40000;
  puVar7[-1] = (ulonglong)in_R10;
  puVar7[-2] = unaff_R12;
  pcVar8 = FUN_16555fc8e;
  puVar7[-3] = 0x14d96ba30;
  FUN_16555fc8e(param_1,uVar3);
  uVar3 = puVar7[-2];
  puVar7[-2] = unaff_R15;
  puVar7[-3] = (ulonglong)pcVar8;
  puVar7[-4] = unaff_RBX;
  *unaff_RSI = ~*unaff_RSI;
  *unaff_RSI = *unaff_RSI;
  *unaff_RSI = ~*unaff_RSI;
  uVar4 = puVar7[-4];
  *unaff_RSI = ~*unaff_RSI;
  uVar5 = puVar7[-2];
  puVar7[-2] = 0;
  puVar7[-2] = puVar7[-2] ^ uVar10;
  puVar7[-3] = uVar4;
  *unaff_RSI = ~(~(ushort)uVar5 | ~*unaff_RSI) | ~(ushort)uVar5;
  (*(code *)0x162334b6c)(uVar3);
  return;
}



// FUNCTION 14d96bb69 FUN_14d96bb69 body=146 status=ok
// SIG undefined FUN_14d96bb69(void)

void FUN_14d96bb69(void)

{
  uint uVar1;
  undefined8 in_RAX;
  undefined8 unaff_RSI;
  ulonglong in_R10;
  ulonglong uVar3;
  ulonglong unaff_R15;
  ulonglong uVar4;
  ulonglong local_res8;
  ulonglong local_res10 [3];
  int iVar2;
  
  uVar3 = unaff_R15 ^ in_R10;
  uVar3 = uVar3 ^ ~((~uVar3 | in_R10) & (~in_R10 | uVar3));
  uVar4 = *(ulonglong *)((longlong)local_res10 + uVar3);
  *(undefined8 *)((longlong)local_res10 + uVar3) = in_RAX;
  *(undefined4 *)((longlong)local_res10 + uVar3) = 0x2b0c3da;
  local_res8 = uVar3;
  *(undefined8 *)((longlong)local_res10 + (uVar3 - 8)) = unaff_RSI;
  *(uint *)((longlong)local_res10 + uVar3) = ~*(uint *)((longlong)local_res10 + uVar3);
  *(int *)((longlong)local_res10 + uVar3) = *(int *)((longlong)local_res10 + uVar3) + 2;
  *(int *)((longlong)local_res10 + uVar3) = -*(int *)((longlong)local_res10 + uVar3);
  uVar1 = *(uint *)((longlong)local_res10 + uVar3);
  iVar2 = *(int *)((longlong)local_res10 + uVar3);
  *(int *)((longlong)local_res10 + uVar3) = *(int *)((longlong)local_res10 + uVar3) + 0x4aea3b8a;
  *(ulonglong *)((longlong)local_res10 + (uVar3 - 0x10)) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)SBORROW4(iVar2,-0x4aea3b8a) * 0x800
       | (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar4 & 0x100) != 0) * 0x100 |
       (ulonglong)(*(int *)((longlong)local_res10 + uVar3) < 0) * 0x80 |
       (ulonglong)(*(int *)((longlong)local_res10 + uVar3) == 0) * 0x40 |
       (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(*(uint *)((longlong)local_res10 + uVar3) & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(uVar1 < 0xb515c476) | (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
  FUN_1567353c0();
  return;
}



// FUNCTION 14d96bbfc FUN_14d96bbfc body=985 status=ok
// SIG undefined FUN_14d96bbfc(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00016479fe4a) */
/* WARNING: Removing unreachable block (ram,0x00016479fe50) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x000165beb4e6) */
/* WARNING: Removing unreachable block (ram,0x000165beb4ec) */
/* WARNING: Removing unreachable block (ram,0x0001662fb434) */
/* WARNING: Removing unreachable block (ram,0x00016479fedc) */
/* WARNING: Removing unreachable block (ram,0x00016479fee2) */
/* WARNING: Removing unreachable block (ram,0x00014d96bd10) */
/* WARNING: Removing unreachable block (ram,0x00014d96bd50) */
/* WARNING: Removing unreachable block (ram,0x000162089ac2) */
/* WARNING: Removing unreachable block (ram,0x000162089b32) */
/* WARNING: Removing unreachable block (ram,0x000162089b3e) */
/* WARNING: Removing unreachable block (ram,0x00014e1be7f2) */
/* WARNING: Removing unreachable block (ram,0x00014d96bc7b) */
/* WARNING: Removing unreachable block (ram,0x00014d96bd0a) */
/* WARNING: Removing unreachable block (ram,0x00014d96bd05) */
/* WARNING: Removing unreachable block (ram,0x000162382aca) */
/* WARNING: Removing unreachable block (ram,0x000162382b55) */
/* WARNING: Removing unreachable block (ram,0x000162382b5b) */
/* WARNING: Removing unreachable block (ram,0x000165beb44a) */
/* WARNING: Removing unreachable block (ram,0x000165beb477) */
/* WARNING: Removing unreachable block (ram,0x000162382b66) */
/* WARNING: Removing unreachable block (ram,0x00014d96bda0) */
/* WARNING: Removing unreachable block (ram,0x00014d96bda6) */

undefined8 FUN_14d96bbfc(longlong param_1)

{
  char extraout_var;
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (-1 < (longlong)
           (*(ulonglong *)(unaff_R13 + -0xa0) + unaff_R15 +
           (*(ulonglong *)(unaff_R13 + -0xa0) & unaff_R15) * -2)) {
    uVar1 = FUN_14e09573c();
    return uVar1;
  }
  FUN_166d33070();
  *(char *)(param_1 + 0x2dde39fe) = *(char *)(param_1 + 0x2dde39fe) + (extraout_var >> 7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d96bf78 FUN_14d96bf78 body=122 status=ok
// SIG undefined FUN_14d96bf78(void)

void FUN_14d96bf78(undefined8 param_1)

{
  undefined1 local_res8 [32];
  
  FUN_162e7b182(param_1,local_res8);
  return;
}



// FUNCTION 14d96bff2 FUN_14d96bff2 body=164 status=ok
// SIG undefined FUN_14d96bff2(void)

/* WARNING: Removing unreachable block (ram,0x00014d96c04a) */

void FUN_14d96bff2(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_160c97433(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
  return;
}



// FUNCTION 14d96c097 FUN_14d96c097 body=31 status=ok
// SIG undefined FUN_14d96c097(void)

void FUN_14d96c097(void)

{
  return;
}



// FUNCTION 14d96c34d FUN_14d96c34d body=170 status=ok
// SIG undefined FUN_14d96c34d(void)

void FUN_14d96c34d(ulonglong param_1,ulonglong param_2,longlong param_3)

{
  ulonglong in_RAX;
  ulonglong unaff_RBP;
  
  FUN_164be168e(param_1,0x313bb3b,~((~unaff_RBP - ~(param_2 & param_1)) + param_3) & in_RAX);
  return;
}



// FUNCTION 14d96c51c FUN_14d96c51c body=51 status=ok
// SIG undefined FUN_14d96c51c(void)

void FUN_14d96c51c(void)

{
  return;
}



// FUNCTION 14d96c5b7 FUN_14d96c5b7 body=7 status=ok
// SIG undefined FUN_14d96c5b7(void)

void FUN_14d96c5b7(void)

{
  FUN_14d7c4c64();
  return;
}



// FUNCTION 14d96c673 FUN_14d96c673 body=107 status=ok
// SIG undefined FUN_14d96c673(void)

undefined8 FUN_14d96c673(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  bool in_ZF;
  
  if (in_ZF) {
    uVar1 = FUN_15703313d();
    return uVar1;
  }
  return in_RAX;
}



// FUNCTION 14d96c8cb FUN_14d96c8cb body=240 status=ok
// SIG undefined FUN_14d96c8cb(void)

void FUN_14d96c8cb(void)

{
  longlong lVar1;
  longlong unaff_RDI;
  undefined8 unaff_R13;
  
  lVar1 = *(longlong *)(unaff_RDI + -8);
  FUN_1619875fa();
  *(undefined8 *)(lVar1 + -8) = 0x3c20bd8;
  *(undefined8 *)(lVar1 + -0x28cf) = unaff_R13;
  *(undefined8 *)(lVar1 + -0x28d7) = unaff_R13;
  *(undefined **)(lVar1 + -0x28cf) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14d96cba4 FUN_14d96cba4 body=143 status=ok
// SIG undefined FUN_14d96cba4(void)

void FUN_14d96cba4(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong unaff_RBP;
  
  FUN_165d99659(param_1,param_2 ^ unaff_RBP,param_3,FUN_165d99659);
  return;
}



// FUNCTION 14d96cc34 FUN_14d96cc34 body=42 status=ok
// SIG undefined FUN_14d96cc34(void)

void FUN_14d96cc34(undefined8 param_1)

{
  FUN_15751fa1b(param_1,&DAT_14d7b4372);
  return;
}



// FUNCTION 14d96cd4c FUN_14d96cd4c body=315 status=ok
// SIG undefined FUN_14d96cd4c(void)

/* WARNING: Removing unreachable block (ram,0x000161818463) */
/* WARNING: Removing unreachable block (ram,0x0001618184e5) */
/* WARNING: Removing unreachable block (ram,0x0001618184eb) */
/* WARNING: Removing unreachable block (ram,0x000161818505) */
/* WARNING: Removing unreachable block (ram,0x0001618184fe) */
/* WARNING: Removing unreachable block (ram,0x00014d96cdf4) */

void FUN_14d96cd4c(void)

{
  undefined4 unaff_EBP;
  undefined4 unaff_0000002c;
  undefined8 local_res10;
  
  *(undefined8 *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x140) = local_res10;
  FUN_161818463();
  return;
}



// FUNCTION 14d96d088 FUN_14d96d088 body=85 status=ok
// SIG undefined FUN_14d96d088(void)

void FUN_14d96d088(void)

{
  bool in_ZF;
  
  if (!in_ZF) {
    return;
  }
  return;
}



// FUNCTION 14d96d134 FUN_14d96d134 body=459 status=ok
// SIG undefined FUN_14d96d134(void)

uint FUN_14d96d134(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ushort uVar3;
  ulonglong in_RAX;
  undefined8 uVar4;
  undefined8 unaff_RBP;
  longlong unaff_RDI;
  longlong lVar5;
  ulonglong uVar6;
  longlong unaff_R12;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  
  *(undefined8 *)(&stack0xffffffffffa19300 + param_2) = param_1;
  uVar2 = *(undefined8 *)(&stack0xffffffffffa19300 + param_2);
  uVar3 = (ushort)(byte)in_RAX;
  if ((in_RAX & 0x80) != 0) {
    uVar3 = CONCAT11(0xff,(byte)in_RAX);
  }
  *(ulonglong *)(&stack0xffffffffffa19300 + param_2) = CONCAT62((int6)(in_RAX >> 0x10),uVar3);
  *(undefined4 *)(&stack0xffffffffffa19300 + param_2) = 0x1a1727da;
  *(undefined4 *)(&stack0xffffffffffa19304 + param_2) = 0;
  uVar6 = *(ulonglong *)(&stack0xffffffffffa19300 + param_2) ^ 0x1a1727da ^
          *(ulonglong *)(unaff_RDI + -0x50);
  *(undefined8 *)(&stack0xffffffffffa19300 + param_2) =
       *(undefined8 *)(&stack0xffffffffffa19320 + param_2);
  *(undefined4 *)(&stack0xffffffffffa19304 + param_2) = 0;
  *(undefined4 *)(&stack0xffffffffffa19300 + param_2) =
       *(undefined4 *)(&stack0xffffffffffa19300 + param_2);
  *(undefined8 *)(&stack0xffffffffffa192f8 + param_2) = 0x14d96d1e0;
  FUN_15b23011d(uVar2);
  *(undefined8 *)(&stack0xffffffffffa192f8 + param_2) = param_4;
  *(undefined4 *)(&stack0xffffffffffa192f0 + param_2) = 0x6fbe1db0;
  *(undefined4 *)(&stack0xffffffffffa192f4 + param_2) = 0;
  lVar5 = *(longlong *)
           (&stack0xffffffffffa19300 +
           (*(ulonglong *)(&stack0xffffffffffa192f0 + param_2) ^ 0x6fbe1db8) + param_2);
  *(ulonglong *)(&stack0xffffffffffa19308 + param_2) =
       *(ulonglong *)(&stack0xffffffffffa19308 + param_2) & unaff_R15;
  puVar1 = (ulonglong *)(&stack0xffffffffffa19308 + param_2);
  *puVar1 = *puVar1 << 1 | (ulonglong)((longlong)*puVar1 < 0);
  *(ulonglong *)(&stack0xffffffffffa19308 + param_2) =
       *(ulonglong *)(&stack0xffffffffffa19308 + param_2) & 0xfffffffffffffffe;
  *(ulonglong *)(&stack0xffffffffffa19308 + param_2) =
       (lVar5 + unaff_R15) - *(longlong *)(&stack0xffffffffffa19308 + param_2);
  uVar2 = *(undefined8 *)(&stack0xffffffffffa19300 + param_2);
  *(undefined8 *)(&stack0xffffffffffa19300 + param_2) =
       *(undefined8 *)(&stack0xffffffffffa192f8 + param_2);
  lVar5 = *(longlong *)(&stack0xffffffffffa19310 + param_2) + unaff_R15;
  *(ulonglong *)(&stack0xffffffffffa19310 + param_2) =
       *(ulonglong *)(&stack0xffffffffffa19310 + param_2) & unaff_R15;
  *(undefined8 *)(&stack0xffffffffffa192f8 + param_2) = uVar2;
  *(longlong *)(&stack0xffffffffffa19310 + param_2) =
       *(longlong *)(&stack0xffffffffffa19310 + param_2) << 1;
  uVar2 = *(undefined8 *)(&stack0xffffffffffa192f8 + param_2);
  *(longlong *)(&stack0xffffffffffa192f8 + param_2) = param_3 + unaff_R12 * -2;
  *(undefined8 *)(&stack0xffffffffffa192f0 + param_2) = 0x14d96d284;
  uVar4 = FUN_14df7c2dc(uVar2);
  uVar2 = *(undefined8 *)(&stack0xffffffffffa192f8 + param_2);
  *(undefined8 *)(&stack0xffffffffffa192f8 + param_2) = uVar4;
  *(longlong *)(&stack0xffffffffffa192f0 + param_2) = lVar5;
  *(ulonglong *)(&stack0xffffffffffa192e8 + param_2) = uVar6;
  *(undefined8 *)(&stack0xffffffffffa192e0 + param_2) = 0x781845e1;
  *(undefined4 *)(&stack0xffffffffffa192e0 + param_2) = 0x46df6acc;
  *(undefined4 *)(&stack0xffffffffffa192e4 + param_2) = 0;
  uVar4 = *(undefined8 *)(&stack0xffffffffffa192e0 + param_2);
  *(undefined8 *)(&stack0xffffffffffa192e0 + param_2) = uVar2;
  *(undefined8 *)(&stack0xffffffffffa192e8 + param_2) = unaff_RBP;
  *(undefined8 *)(&stack0xffffffffffa192f0 + param_2) = unaff_R14;
  *(undefined1 **)(&stack0xffffffffffa192e8 + param_2) = &LAB_165793d05;
  return 0x41084f53 - (~(uint)uVar4 + 2) & 0x781845e1 ^ 0x4f10e96b;
}



// FUNCTION 14d96d3be FUN_14d96d3be body=523 status=ok
// SIG undefined FUN_14d96d3be(void)

void FUN_14d96d3be(void)

{
  ulonglong in_RAX;
  longlong lVar1;
  longlong unaff_R12;
  
  lVar1 = *(ulonglong *)(unaff_R12 + -0x30) + in_RAX +
          (*(ulonglong *)(unaff_R12 + -0x30) & in_RAX) * -2;
  FUN_1657779c1(lVar1,0x6eff4aff,0xffffffffffffffc0,lVar1);
  FUN_1661c6106(lVar1);
  return;
}



// FUNCTION 14d96d5a3 FUN_14d96d5a3 body=447 status=ok
// SIG undefined FUN_14d96d5a3(void)

void FUN_14d96d5a3(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  ushort uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  ushort *puVar10;
  undefined8 uVar11;
  undefined8 in_RAX;
  ulonglong uVar12;
  longlong unaff_RBX;
  undefined8 unaff_RBP;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 uVar13;
  ushort uVar14;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 local_res8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  puVar1 = (undefined8 *)(local_res18 + -0x18);
  *puVar1 = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x20) = in_RAX;
  *(undefined4 *)(local_res18 + -0x20) = 0xef214a6c;
  *(undefined4 *)(local_res18 + -0x1c) = 0xffffffff;
  lVar9 = *(longlong *)(local_res18 + -0x20);
  *(undefined8 *)(local_res18 + -0x20) = param_4;
  *(undefined8 *)(local_res18 + -0x28) = in_RAX;
  *(undefined4 *)(local_res18 + -0x28) = 0x2ecf5060;
  *(undefined4 *)(local_res18 + -0x24) = 0;
  uVar13 = *(undefined8 *)(local_res18 + -0x20);
  *(undefined **)(local_res18 + -0x10 + lVar9 + (*(ulonglong *)(local_res18 + -0x28) ^ 0x3e11e5fc))
       = &DAT_161b95002;
  puVar10 = (ushort *)*puVar1;
  *puVar1 = local_res8;
  uVar14 = (ushort)*puVar1;
  uVar4 = *(undefined8 *)(local_res18 + -0x10);
  *(undefined8 *)(local_res18 + -0x10) = param_2;
  *puVar1 = param_2;
  *(code **)(local_res18 + -0x10) = HeapFree_exref;
  *(undefined8 *)(local_res18 + -0x20) = 0x14d96d647;
  FUN_161b94fe6();
  uVar3 = *puVar10;
  *puVar1 = uVar4;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x28) = unaff_R15;
  uVar4 = *(undefined8 *)(local_res18 + -0x20);
  uVar11 = *puVar1;
  *puVar10 = (~uVar14 | uVar3) - 0x100;
  lVar9 = *(longlong *)(local_res18 + -0x10);
  lVar5 = *(longlong *)(local_res18 + 8);
  *(undefined8 *)(lVar5 + -8) = unaff_RBP;
  *(undefined8 *)(lVar5 + -0x10) = uVar11;
  *(undefined8 *)(lVar5 + -0x18) = uVar11;
  *(undefined8 *)(lVar5 + -0x20) = uVar13;
  *(undefined8 *)(lVar5 + -0x28) = 0x14d96d6dd;
  uVar12 = FUN_166ce7f15();
  uVar6 = *(ulonglong *)(lVar9 + -0x28);
  *(ulonglong *)(lVar5 + -0x20) = unaff_RBX + ((~param_1 | uVar12) + param_1 + 1) * -2;
  *(longlong *)(lVar5 + -0x28) = unaff_RSI;
  uVar12 = *(ulonglong *)(lVar9 + -0x68);
  bVar7 = (param_1 & 0x3f) != 0;
  bVar8 = *(longlong *)(lVar5 + -0x28) >> ((byte)param_1 & 0x3f) != 0;
  if ((bVar7 || uVar12 != 0) && (!bVar7 || bVar8)) {
    *(ulonglong *)(lVar5 + -0x20) = param_1;
    *(ulonglong *)(lVar5 + -0x28) = CONCAT71((int7)(param_1 >> 8),0x89);
    bVar2 = *(byte *)(lVar5 + -0x28);
    *(longlong *)(lVar5 + -0x28) = lVar9;
    *(ulonglong *)(lVar5 + -0x30) = uVar12 + param_1;
    *(ulonglong *)(lVar5 + -0x28) = uVar12 & param_1;
    uVar4 = *(undefined8 *)(lVar5 + -0x20);
    *(undefined4 *)(lVar5 + -0x20) = 0x3224cd0e;
    *(undefined4 *)(lVar5 + -0x1c) = 0;
    FUN_14e10543c(uVar4,*(longlong *)(lVar5 + -0x30) -
                        (*(longlong *)(lVar5 + -0x28) << (0xff - ~(bVar2 & 0x77) & 0x3f)));
    return;
  }
  if ((bVar7 || uVar12 != 0) && (!bVar7 || bVar8)) {
    *(ushort *)(lVar5 + -0x10) = *(ushort *)(lVar5 + -0x10) & 0xfeff;
    puVar1 = *(undefined8 **)(lVar5 + -8);
    puVar1[-1] = param_3;
    puVar1[-2] = *puVar1;
    *(undefined4 *)((longlong)puVar1 + -0xc) = 0x91ecdd11;
    *(int *)((longlong)puVar1 + -0xc) = *(int *)((longlong)puVar1 + -0xc) + 0x6e1322ef;
    *(undefined4 *)((longlong)puVar1 + -0xc) = *(undefined4 *)((longlong)puVar1 + -0xc);
    *(undefined4 *)(puVar1 + -2) = *(undefined4 *)(puVar1 + -2);
    if (*(int *)(puVar1 + -2) < 0) {
      *(undefined4 *)((longlong)puVar1 + -0xc) = 0xffffffff;
    }
    puVar1[-2] = uVar4;
    puVar1[-2] = 0;
    puVar1[-2] = puVar1[-2] + (uVar6 | param_1);
    FUN_1577fcfed();
    return;
  }
  FUN_1658d9183();
  return;
}



// FUNCTION 14d96d763 FUN_14d96d763 body=184 status=ok
// SIG undefined FUN_14d96d763(void)

void FUN_14d96d763(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RBP;
  undefined8 unaff_R14;
  undefined8 *local_res10;
  
  local_res10[-1] = param_3;
  local_res10[-2] = *local_res10;
  *(undefined4 *)((longlong)local_res10 + -0xc) = 0x91ecdd11;
  *(int *)((longlong)local_res10 + -0xc) = *(int *)((longlong)local_res10 + -0xc) + 0x6e1322ef;
  *(undefined4 *)((longlong)local_res10 + -0xc) = *(undefined4 *)((longlong)local_res10 + -0xc);
  *(undefined4 *)(local_res10 + -2) = *(undefined4 *)(local_res10 + -2);
  if (*(int *)(local_res10 + -2) < 0) {
    *(undefined4 *)((longlong)local_res10 + -0xc) = 0xffffffff;
  }
  local_res10[-2] = unaff_R14;
  local_res10[-2] = 0;
  local_res10[-2] = local_res10[-2] + unaff_RBP;
  FUN_1577fcfed(param_1,param_2,&DAT_16278786f);
  return;
}



// FUNCTION 14d96d8ad FUN_14d96d8ad body=56 status=ok
// SIG undefined FUN_14d96d8ad(void)

ulonglong FUN_14d96d8ad(void)

{
  undefined8 unaff_RBX;
  undefined8 in_R10;
  ulonglong unaff_retaddr;
  ushort local_res8;
  uint6 uStackX_a;
  longlong local_res10;
  
                    /* WARNING: Read-only address (ram,0x00014d7c0951) is written */
  LOCK();
  uRam000000014d7c0951 = (undefined1)unaff_retaddr;
  UNLOCK();
  *(undefined8 *)(local_res10 + -8) = unaff_RBX;
  *(undefined8 *)(local_res10 + -0x10) = unaff_RBX;
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((local_res8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res8 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res8 & 0x200) != 0) * 0x200 | (ulonglong)((local_res8 & 0x80) != 0) * 0x80
       | (ulonglong)((local_res8 & 0x40) != 0) * 0x40 | (ulonglong)((local_res8 & 0x10) != 0) * 0x10
       | (ulonglong)((local_res8 & 4) != 0) * 4 | (ulonglong)((local_res8 & 1) != 0) |
       (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 | (ulonglong)((uStackX_a & 4) != 0) * 0x40000
  ;
  *(undefined8 *)(local_res10 + -0x20) = in_R10;
  *(undefined8 *)(local_res10 + -0x28) = in_R10;
  *(undefined1 **)(local_res10 + -0x20) = &LAB_14d96d8e7;
  return unaff_retaddr & 0xffffffffffffff00;
}



// FUNCTION 14d96d932 FUN_14d96d932 body=297 status=ok
// SIG undefined FUN_14d96d932(void)

/* WARNING: Removing unreachable block (ram,0x00014d96d9c0) */
/* WARNING: Removing unreachable block (ram,0x00014d96d9c6) */

void FUN_14d96d932(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  
  uVar1 = *(ulonglong *)(param_1 + -0xa0);
  (*(code *)0x14df27bfe)
            (~((unaff_RBX - (uVar1 | unaff_RBX)) + uVar1) & (uVar1 | unaff_RBX),param_2,param_3,
             param_4,*(undefined8 *)(param_1 + -0x30));
  return;
}



// FUNCTION 14d96db35 FUN_14d96db35 body=160 status=ok
// SIG undefined FUN_14d96db35(void)

void FUN_14d96db35(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  
  FUN_1616abeb6(local_res8,param_2,FUN_1616abeb6);
  return;
}



// FUNCTION 14d96ddb6 FUN_14d96ddb6 body=439 status=ok
// SIG undefined FUN_14d96ddb6(void)

/* WARNING: Removing unreachable block (ram,0x00014d96deeb) */

byte FUN_14d96ddb6(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  byte bVar4;
  longlong in_RAX;
  ulonglong uVar5;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x48);
  uVar2 = *(ulonglong *)(unaff_R13 + -0x78);
  uVar5 = ~(((~unaff_R15 + uVar2) - (~unaff_R15 & uVar2)) + unaff_R15 + 1) & (uVar2 | unaff_R15);
  bVar4 = FUN_165ea7db1();
  bVar4 = 0x9c - (~bVar4 + 2);
  *(ulonglong *)(&stack0xfffffffff7c28d59 + in_RAX) = *(ulonglong *)(uVar5 - 0x90);
  uVar2 = *(ulonglong *)(&stack0xfffffffff7c28d59 + in_RAX);
  *(ulonglong *)(&stack0xfffffffff7c28d59 + in_RAX) = uVar5;
  lVar3 = *(longlong *)(&stack0xfffffffff7c28d59 + in_RAX);
  *(ulonglong *)(&stack0xfffffffff7c28d59 + in_RAX) = ~uVar2 | uVar1 ^ unaff_R15;
  *(undefined8 *)(&stack0xfffffffff7c28d59 + in_RAX) = *(undefined8 *)(lVar3 + -0x58);
  *(undefined1 **)(&stack0xfffffffff7c28d59 + in_RAX) = &LAB_15b2096ea;
  return bVar4 >> 7 | bVar4 * '\x02';
}



// FUNCTION 14d96deeb FUN_14d96deeb body=129 status=ok
// SIG undefined FUN_14d96deeb(void)

void FUN_14d96deeb(undefined8 param_1)

{
  FUN_165ca1eed(param_1);
  return;
}



// FUNCTION 14d96e01a FUN_14d96e01a body=310 status=ok
// SIG undefined FUN_14d96e01a(void)

/* WARNING: Removing unreachable block (ram,0x000164ef7214) */
/* WARNING: Removing unreachable block (ram,0x00014d96e0a7) */
/* WARNING: Removing unreachable block (ram,0x00014d96e0ad) */

void FUN_14d96e01a(ulonglong param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  longlong unaff_R12;
  
  uVar1 = ~(param_1 & in_RAX) & ~(0xffffffffffffffffU - unaff_RDI);
  uVar2 = param_2 + 1 + ~param_2 + *(longlong *)(unaff_R12 + -0x78);
  uVar2 = ~((~in_RAX | uVar2) & (~uVar2 | in_RAX));
  FUN_16218a919(uVar1,uVar2,param_3,0xffffffffffffff60,*(undefined8 *)(unaff_R12 + -0x68));
  (*(code *)0x1668752d5)(uVar1,uVar2 - unaff_R12,0x820f16b600d72404);
  return;
}



// FUNCTION 14d96e152 FUN_14d96e152 body=123 status=ok
// SIG undefined FUN_14d96e152(void)

void FUN_14d96e152(void)

{
  return;
}



// FUNCTION 14d96e202 thunk_FUN_14d96e208 body=5 status=ok
// SIG undefined thunk_FUN_14d96e208(void)

void thunk_FUN_14d96e208(void)

{
  return;
}



// FUNCTION 14d96e208 FUN_14d96e208 body=21 status=ok
// SIG undefined FUN_14d96e208(void)

void FUN_14d96e208(void)

{
  return;
}



// FUNCTION 14d96e280 FUN_14d96e280 body=166 status=ok
// SIG undefined FUN_14d96e280(void)

void FUN_14d96e280(undefined8 param_1)

{
  bool in_ZF;
  
  if (!in_ZF) {
    return;
  }
  FUN_15751fa1b(param_1,&DAT_14d7b6eac);
  return;
}



// FUNCTION 14d96e3de FUN_14d96e3de body=142 status=ok
// SIG undefined FUN_14d96e3de(void)

void FUN_14d96e3de(undefined8 param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)0x15b264c29)
            (param_1,*(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
                     (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2);
  return;
}



// FUNCTION 14d96e46d FUN_14d96e46d body=164 status=ok
// SIG undefined FUN_14d96e46d(void)

short FUN_14d96e46d(void)

{
  ushort uVar1;
  short in_AX;
  ushort unaff_R15W;
  undefined2 local_res20;
  
  uVar1 = (~local_res20 | ~unaff_R15W) & in_AX - 1U;
  return -0x101 - ((~(uVar1 & 0xfeff) - 0x101) - ~uVar1);
}



// FUNCTION 14d96e512 FUN_14d96e512 body=142 status=ok
// SIG undefined FUN_14d96e512(void)

void FUN_14d96e512(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  thunk_FUN_15b642ca5(in_stack_00000010,in_stack_00000008,param_3,param_4);
  return;
}



// FUNCTION 14d96e5b1 FUN_14d96e5b1 body=39 status=ok
// SIG undefined FUN_14d96e5b1(void)

void FUN_14d96e5b1(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d96e658 FUN_14d96e658 body=136 status=ok
// SIG undefined FUN_14d96e658(void)

void FUN_14d96e658(void)

{
  (*(code *)&LAB_14d80ec39)();
  return;
}



// FUNCTION 14d96e786 FUN_14d96e786 body=10 status=ok
// SIG undefined FUN_14d96e786(void)

void FUN_14d96e786(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong unaff_R15;
  
  uVar1 = ~unaff_R15;
  FUN_156e50fc1();
  (*(code *)0x1624bd246)(uVar1,param_2);
  return;
}



// FUNCTION 14d96e813 FUN_14d96e813 body=256 status=ok
// SIG undefined FUN_14d96e813(void)

void FUN_14d96e813(undefined8 param_1,undefined8 param_2)

{
  (*(code *)0x1624bd246)(param_1,param_2);
  return;
}



// FUNCTION 14d96ea64 FUN_14d96ea64 body=519 status=ok
// SIG undefined FUN_14d96ea64(void)

void FUN_14d96ea64(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  ulonglong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  bool bVar2;
  undefined8 local_res18;
  
  bVar2 = local_res18 == param_1;
  FUN_1622f9414();
  if (!bVar2) {
    FUN_162c01c51((*(ulonglong *)(unaff_RSI - 0x38) & unaff_RBP ^ 0xffffffffffffffff) &
                  (*(ulonglong *)(unaff_RSI - 0x38) | unaff_RBP));
    uVar1 = *(ulonglong *)(unaff_R13 + (unaff_RSI ^ 0x54b02b10));
    FUN_15b9b4386((uVar1 - unaff_R15) + (unaff_R15 ^ 0xffffffffffffffff | uVar1) * -2 + -2,
                  *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15,param_3);
    return;
  }
  FUN_16170c9df();
  return;
}



// FUNCTION 14d96ecdf FUN_14d96ecdf body=148 status=ok
// SIG undefined FUN_14d96ecdf(void)

void FUN_14d96ecdf(void)

{
  FUN_1627e21d4();
  return;
}



// FUNCTION 14d96ed74 FUN_14d96ed74 body=15 status=ok
// SIG undefined FUN_14d96ed74(void)

void FUN_14d96ed74(undefined8 param_1)

{
  undefined8 local_res8;
  
  FUN_14d85d504(param_1,local_res8);
  return;
}



// FUNCTION 14d96ed83 FUN_14d96ed83 body=315 status=ok
// SIG undefined FUN_14d96ed83(void)

void FUN_14d96ed83(void)

{
  longlong unaff_R12;
  
  FUN_16230007f(*(ulonglong *)(unaff_R12 + -0x70) | 0xb85a4d9b5869ffff);
  FUN_165f9f496();
  return;
}



// FUNCTION 14d96ef87 FUN_14d96ef87 body=289 status=ok
// SIG undefined FUN_14d96ef87(void)

/* WARNING: Removing unreachable block (ram,0x00014d96f005) */
/* WARNING: Removing unreachable block (ram,0x00014d96f011) */
/* WARNING: Removing unreachable block (ram,0x0001647539f8) */

void FUN_14d96ef87(void)

{
  FUN_1647539f8();
  return;
}



// FUNCTION 14d96f0ac FUN_14d96f0ac body=53 status=ok
// SIG undefined FUN_14d96f0ac(void)

void FUN_14d96f0ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  
  thunk_FUN_15b642ca5(param_1,param_2,param_3,local_res8);
  return;
}



// FUNCTION 14d96f1f0 FUN_14d96f1f0 body=151 status=ok
// SIG undefined FUN_14d96f1f0(void)

/* WARNING: Removing unreachable block (ram,0x00014d96f283) */

void FUN_14d96f1f0(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  if (-1 < (longlong)(~*(ulonglong *)(unaff_R12 + -0x58) | in_RAX)) {
    FUN_1651c2f4e();
    return;
  }
  FUN_1651c2f4e();
  return;
}



// FUNCTION 14d96f289 FUN_14d96f289 body=292 status=ok
// SIG undefined FUN_14d96f289(void)

/* WARNING: Removing unreachable block (ram,0x000160c93d17) */
/* WARNING: Removing unreachable block (ram,0x00014d96f309) */

void FUN_14d96f289(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ushort param_5,longlong param_6)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong unaff_RBP;
  ulonglong in_R11;
  ulonglong unaff_R15;
  undefined8 local_res10;
  undefined8 local_res18;
  
  uVar2 = *(ulonglong *)(unaff_RBP + 0x10);
  *(ulonglong *)(unaff_RBP + 0x10) = ~*(ulonglong *)(unaff_RBP + 0x10);
  *(ulonglong *)(unaff_RBP + 0x10) = *(ulonglong *)(unaff_RBP + 0x10) | unaff_R15;
  *(ulonglong *)(unaff_RBP + 0x10) = ~((~in_R11 | uVar2) & *(ulonglong *)(unaff_RBP + 0x10));
  if ((ushort)((-0x101 - (param_5 | 0xfeff)) + param_5) != 0) {
    FUN_160c93c7c();
    return;
  }
  *(undefined8 *)(param_6 + -8) = local_res10;
  *(undefined8 *)(param_6 + -0x10) = param_1;
  uVar3 = *(undefined8 *)(param_6 + -0x10);
  *(undefined8 *)(param_6 + -0x10) = param_2;
  *(undefined8 *)(param_6 + -0x18) = param_2;
  *(longlong *)(param_6 + -0x20) = (longlong)&LAB_156522599;
  lVar4 = *(longlong *)(param_6 + -0x20);
  *(undefined8 *)(param_6 + -0x10) = *(undefined8 *)(param_6 + -8);
  uVar5 = *(undefined8 *)(param_6 + -0x18);
  *(undefined8 *)(param_6 + -0x18) = local_res18;
  *(undefined8 *)(param_6 + -8) = 0;
  puVar1 = (ulonglong *)(param_6 + -8);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + lVar4;
  if (uVar2 < (ulonglong)-lVar4) {
    FUN_15652257d();
    return;
  }
  FUN_14d7aadb0(uVar3,uVar5);
  return;
}



// FUNCTION 14d96f3af FUN_14d96f3af body=251 status=ok
// SIG undefined FUN_14d96f3af(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00016618367a) overlaps instruction at (ram,0x000166183679)
    */
/* WARNING: Removing unreachable block (ram,0x00014d96f4a5) */
/* WARNING: Removing unreachable block (ram,0x00014d96f4ab) */
/* WARNING: Removing unreachable block (ram,0x000165e5f890) */
/* WARNING: Removing unreachable block (ram,0x000165e5f912) */
/* WARNING: Removing unreachable block (ram,0x000165e5f917) */
/* WARNING: Removing unreachable block (ram,0x000165e5f91d) */
/* WARNING: Removing unreachable block (ram,0x000156d4ce76) */
/* WARNING: Removing unreachable block (ram,0x00014d96f53b) */
/* WARNING: Removing unreachable block (ram,0x00014d96f541) */

ulonglong FUN_14d96f3af(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 in_RAX;
  ulonglong uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined2 uVar10;
  undefined1 *puVar11;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar12;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  char cVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  char cVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong unaff_retaddr;
  ulonglong local_res18;
  
  uVar27 = local_res18 ^ unaff_R15;
  *(undefined8 *)(uVar27 - 8) = in_RAX;
  *(undefined8 *)(uVar27 - 0x10) = param_1;
  *(undefined8 *)(uVar27 - 0x18) = param_1;
  pcVar9 = FUN_1619f6090;
  *(undefined8 *)(uVar27 - 0x20) = 0x14d96f439;
  FUN_1619f6090();
  *(code **)(uVar27 - 0x20) = pcVar9;
  uVar3 = *(ulonglong *)(uVar27 - 0x20);
  *(ulonglong *)(uVar27 - 0x20) =
       ~((~unaff_RSI | unaff_retaddr) & (~unaff_retaddr | (ulonglong)pcVar9));
  uVar7 = *(ulonglong *)(unaff_RDI + -0x70);
  *(undefined8 *)(uVar27 - 0x20) = *(undefined8 *)(uVar27 - 0x10);
  *(undefined4 *)(uVar27 - 0x1c) = 0;
  *(undefined4 *)(uVar27 - 0x20) = *(undefined4 *)(uVar27 - 0x20);
  if (*(int *)(uVar27 - 0x20) < 0) {
    *(undefined4 *)(uVar27 - 0x1c) = 0xffffffff;
    *(undefined8 *)(uVar27 - 0x28) = 0x16618354a;
    return 0x16618354a;
  }
  uVar12 = uVar7 & uVar3 ^ 0xffffffffffffffff;
  uVar7 = ~(uVar7 | uVar3);
  uVar12 = (~(~uVar12 & uVar7) + uVar7) - uVar12;
  *(undefined8 *)(uVar27 - 0x20) = 0x16618358e;
  uVar8 = FUN_161a63b16();
  uVar4 = *(undefined8 *)(uVar27 - 0x10);
  uVar12 = uVar12 ^ 0xffffffffffffffff;
  uVar26 = *(ulonglong *)(uVar27 - 8);
  uVar7 = (ulonglong)((uVar26 & 1) != 0);
  uVar3 = uVar27 - uVar12;
  lVar5 = -uVar7;
  *(ulonglong *)(uVar3 + lVar5 + -8) =
       (ulonglong)((uVar26 & 0x4000) != 0) * 0x4000 |
       (ulonglong)(SBORROW8(uVar27,uVar12) != SBORROW8(uVar3,uVar7)) * 0x800 |
       (ulonglong)((uVar26 & 0x400) != 0) * 0x400 | (ulonglong)((uVar26 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar26 & 0x100) != 0) * 0x100 |
       (ulonglong)((longlong)(uVar3 + lVar5) < 0) * 0x80 | (ulonglong)(uVar3 == uVar7) * 0x40 |
       (ulonglong)((uVar26 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(uVar3 + lVar5 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(uVar27 < uVar12 || uVar3 < uVar7) |
       (ulonglong)((uVar26 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar26 & 0x40000) != 0) * 0x40000;
  uVar27 = *(ulonglong *)(uVar3 + lVar5 + -8);
  *(undefined8 *)(uVar3 + lVar5 + -8) = unaff_R12;
  *(ulonglong *)(uVar3 + lVar5 + -0x10) =
       (ulonglong)((uVar27 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar27 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar27 & 0x400) != 0) * 0x400 | (ulonglong)((uVar27 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar27 & 0x100) != 0) * 0x100 | (ulonglong)((uVar27 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar27 & 0x40) != 0) * 0x40 | (ulonglong)((uVar27 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar27 & 4) != 0) * 4 | (ulonglong)((uVar27 & 1) != 0) |
       (ulonglong)((uVar27 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar27 & 0x40000) != 0) * 0x40000;
  uVar27 = *(ulonglong *)(uVar3 + lVar5 + -0x10);
  bVar23 = (uVar27 & 0x4000) != 0;
  bVar21 = (uVar27 & 0x800) != 0;
  bVar20 = (uVar27 & 0x400) != 0;
  bVar19 = (uVar27 & 0x200) != 0;
  bVar18 = (uVar27 & 0x100) != 0;
  bVar16 = (uVar27 & 0x80) != 0;
  bVar15 = (uVar27 & 0x40) != 0;
  bVar14 = (uVar27 & 0x10) != 0;
  bVar13 = (uVar27 & 4) != 0;
  bVar25 = (uVar27 & 0x200000) != 0;
  bVar24 = (uVar27 & 0x40000) != 0;
  puVar1 = (ulonglong *)(uVar3 + lVar5 + -8);
  *(undefined8 *)(uVar3 + lVar5 + -0x10) = uVar8;
  *(undefined4 *)(uVar3 + lVar5 + -0x10) = 0x364fc3b;
  *(undefined4 *)(uVar3 + lVar5 + -0xc) = 0;
  *(int *)puVar1 = (int)*(undefined8 *)(uVar3 + lVar5 + -0x10);
  *(undefined4 *)(uVar3 + lVar5 + -4) = 0;
  *puVar1 = uVar12;
  *(ulonglong *)(uVar3 + lVar5 + -0x10) =
       (ulonglong)bVar23 * 0x4000 | (ulonglong)bVar21 * 0x800 | (ulonglong)bVar20 * 0x400 |
       (ulonglong)bVar19 * 0x200 | (ulonglong)bVar18 * 0x100 | (ulonglong)bVar16 * 0x80 |
       (ulonglong)bVar15 * 0x40 | (ulonglong)bVar14 * 0x10 | (ulonglong)bVar13 * 4 |
       (ulonglong)bVar25 * 0x200000 | (ulonglong)bVar24 * 0x40000;
  puVar11 = (undefined1 *)(uVar3 + lVar5 + -0x18);
  *(undefined8 *)(uVar3 + lVar5 + -0x18) = uVar8;
  *(undefined4 *)(uVar3 + lVar5 + -0x18) = 0x7d61d45c;
  *(ulonglong *)(uVar3 + lVar5 + -0x20) =
       (ulonglong)bVar23 * 0x4000 | (ulonglong)bVar21 * 0x800 | (ulonglong)bVar20 * 0x400 |
       (ulonglong)bVar19 * 0x200 | (ulonglong)bVar18 * 0x100 | (ulonglong)bVar16 * 0x80 |
       (ulonglong)bVar15 * 0x40 | (ulonglong)bVar14 * 0x10 | (ulonglong)bVar13 * 4 |
       (ulonglong)bVar25 * 0x200000 | (ulonglong)bVar24 * 0x40000;
  uVar27 = *(ulonglong *)(uVar3 + lVar5 + -0x20);
  *(ulonglong *)(uVar3 + lVar5 + -0x20) =
       (ulonglong)((uVar27 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar27 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar27 & 0x400) != 0) * 0x400 | (ulonglong)((uVar27 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar27 & 0x100) != 0) * 0x100 | (ulonglong)((uVar27 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar27 & 0x40) != 0) * 0x40 | (ulonglong)((uVar27 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar27 & 4) != 0) * 4 | (ulonglong)((uVar27 & 1) != 0) |
       (ulonglong)((uVar27 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar27 & 0x40000) != 0) * 0x40000;
  uVar10 = 0x5384;
  uVar27 = *(ulonglong *)(uVar3 + lVar5 + -0x20);
  cVar22 = (uVar27 & 0x800) != 0;
  cVar17 = (uVar27 & 0x80) != 0;
  bVar14 = (uVar27 & 0x40) != 0;
  bVar13 = (uVar27 & 4) != 0;
  *(undefined8 *)(uVar3 + lVar5 + -0x20) = 0x16618361a;
  uVar6 = FUN_1665e5384();
  LOCK();
  uVar2 = *(uint *)(unaff_RDI + 0x3e);
  *(uint *)(unaff_RDI + 0x3e) = (uint)uVar4;
  UNLOCK();
  if (bVar14 || cVar22 != cVar17) {
    puVar11 = (undefined1 *)(uVar3 + lVar5 + -0x20);
    *(ulonglong *)(uVar3 + lVar5 + -0x20) = (ulonglong)uVar6;
  }
  else if (bVar13) {
    out(*(undefined1 *)(param_4 & 0xffffffff),uVar10);
    *(undefined8 *)(uVar3 + lVar5 + -0x20) = 0x5c;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined8 *)(puVar11 + -8) = unaff_R13;
  *(undefined8 *)(puVar11 + -0x10) = unaff_R13;
  *(undefined **)(puVar11 + -8) = &DAT_16618368b;
  return (ulonglong)uVar2 & 0xffffffffffffff08;
}



// FUNCTION 14d96f4ab thunk_FUN_14d96f4b1 body=5 status=ok
// SIG undefined thunk_FUN_14d96f4b1(void)

/* WARNING: Removing unreachable block (ram,0x00014d96f53b) */
/* WARNING: Removing unreachable block (ram,0x00014d96f541) */
/* WARNING: Removing unreachable block (ram,0x000165e5f91d) */

void thunk_FUN_14d96f4b1(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  if (-1 < *(longlong *)(unaff_R12 + -0x50)) {
    FUN_1571c90d1(param_1 ^ in_RAX,
                  ~(*(ulonglong *)(unaff_R12 + -0x78) & in_RAX) &
                  (*(ulonglong *)(unaff_R12 + -0x78) | in_RAX),param_3,FUN_1571c90d1);
    return;
  }
  FUN_156d4ce76();
  return;
}



// FUNCTION 14d96f4b1 FUN_14d96f4b1 body=286 status=ok
// SIG undefined FUN_14d96f4b1(void)

/* WARNING: Removing unreachable block (ram,0x00014d96f53b) */
/* WARNING: Removing unreachable block (ram,0x00014d96f541) */
/* WARNING: Removing unreachable block (ram,0x000165e5f91d) */

void FUN_14d96f4b1(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  if (-1 < *(longlong *)(unaff_R12 + -0x50)) {
    FUN_1571c90d1(param_1 ^ in_RAX,
                  ~(*(ulonglong *)(unaff_R12 + -0x78) & in_RAX) &
                  (*(ulonglong *)(unaff_R12 + -0x78) | in_RAX),param_3,FUN_1571c90d1);
    return;
  }
  FUN_156d4ce76();
  return;
}



// FUNCTION 14d96f5d1 FUN_14d96f5d1 body=165 status=ok
// SIG undefined FUN_14d96f5d1(void)

/* WARNING: Removing unreachable block (ram,0x0001574bab81) */
/* WARNING: Removing unreachable block (ram,0x0001574bab7b) */
/* WARNING: Removing unreachable block (ram,0x0001574bab86) */
/* WARNING: Removing unreachable block (ram,0x000165c63fe2) */
/* WARNING: Removing unreachable block (ram,0x000165c63fe8) */
/* WARNING: Removing unreachable block (ram,0x000165c6412f) */
/* WARNING: Removing unreachable block (ram,0x000165c64135) */
/* WARNING: Removing unreachable block (ram,0x000161a4a14c) */
/* WARNING: Removing unreachable block (ram,0x000156bae359) */
/* WARNING: Removing unreachable block (ram,0x000161a4a1e9) */
/* WARNING: Removing unreachable block (ram,0x000161a4a1ef) */
/* WARNING: Removing unreachable block (ram,0x000161a4a1f4) */
/* WARNING: Removing unreachable block (ram,0x00014d96f676) */
/* WARNING: Removing unreachable block (ram,0x0001574baaf1) */
/* WARNING: Removing unreachable block (ram,0x00014d96f710) */
/* WARNING: Removing unreachable block (ram,0x00014d96f716) */
/* WARNING: Removing unreachable block (ram,0x00014d96f71b) */

undefined8 FUN_14d96f5d1(ulonglong param_1,undefined8 param_2)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  undefined8 local_res8;
  
  if (-1 < (longlong)(((param_1 - 1) - ~local_res8) + (local_res8 & param_1) * -2)) {
    return in_RAX;
  }
  uVar1 = FUN_156b57e50(param_1,param_2);
  return uVar1;
}



// FUNCTION 14d96f676 FUN_14d96f676 body=307 status=ok
// SIG undefined FUN_14d96f676(void)

/* WARNING: Removing unreachable block (ram,0x0001574bab81) */
/* WARNING: Removing unreachable block (ram,0x0001574bab7b) */
/* WARNING: Removing unreachable block (ram,0x0001574bab86) */
/* WARNING: Removing unreachable block (ram,0x000165c63fe2) */
/* WARNING: Removing unreachable block (ram,0x000165c63fe8) */
/* WARNING: Removing unreachable block (ram,0x000165c6412f) */
/* WARNING: Removing unreachable block (ram,0x000165c64135) */
/* WARNING: Removing unreachable block (ram,0x000161a4a14c) */
/* WARNING: Removing unreachable block (ram,0x000156bae359) */
/* WARNING: Removing unreachable block (ram,0x000161a4a1e9) */
/* WARNING: Removing unreachable block (ram,0x000161a4a1ef) */
/* WARNING: Removing unreachable block (ram,0x000161a4a1f4) */
/* WARNING: Removing unreachable block (ram,0x00014d96f71b) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d96f676(void)

{
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (*(longlong *)(unaff_R13 + -0x30) == 0 && unaff_R15 == 0) {
    uVar1 = FUN_1574baaf1();
    return uVar1;
  }
  uVar1 = thunk_FUN_165ed1ef6(thunk_FUN_165ed1ef6,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15,
                              0xffffffffffffffe7);
  return uVar1;
}



// FUNCTION 14d96f7ab thunk_FUN_14d96f7b1 body=5 status=ok
// SIG undefined thunk_FUN_14d96f7b1(void)

/* WARNING: Removing unreachable block (ram,0x00014d96f842) */

undefined8 thunk_FUN_14d96f7b1(ulonglong param_1,longlong param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong unaff_RDI;
  ulonglong uVar7;
  undefined8 unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  puVar1 = (ulonglong *)(&stack0xfffffffffe521eff + param_2);
  *puVar1 = *(ulonglong *)(unaff_R13 + -0x60);
  uVar6 = *puVar1;
  *puVar1 = uVar6;
  uVar5 = ~(*puVar1 & unaff_R15);
  if (CARRY8(uVar5,unaff_R15)) {
    uVar7 = (uVar6 ^ 0xffffffffffffffff | ~unaff_R15) & (uVar5 + unaff_R15) - ~*puVar1;
    uVar6 = ~*(ulonglong *)(unaff_R13 + -0x88);
    uVar5 = (~unaff_R15 - (uVar6 | ~unaff_R15)) + uVar6 | *(ulonglong *)(unaff_R13 + -0x88);
    *(undefined8 *)(&stack0xfffffffffe521eff + param_2) = 0x157622382;
    uVar4 = FUN_14deaa610(param_1,FUN_14deaa610,0);
    uVar6 = *(ulonglong *)(unaff_RDI + -0x88);
    *(undefined8 *)(&stack0xfffffffffe521eff + param_2) = uVar4;
    *(ulonglong *)(&stack0xfffffffffe521ef7 + param_2) = uVar6;
    lVar2 = *(longlong *)(&stack0xfffffffffe521ef7 + param_2);
    uVar3 = *(undefined8 *)(&stack0xfffffffffe521eff + param_2);
    *(undefined8 *)(&stack0xfffffffffe521eff + param_2) = *(undefined8 *)(unaff_RDI + -0x90);
    *(ulonglong *)(&stack0xfffffffffe521ef7 + param_2) = uVar7;
    *(ulonglong *)(&stack0xfffffffffe521eef + param_2) = uVar7;
    uVar4 = *(undefined8 *)(unaff_RDI + -8);
    *(ulonglong *)(&stack0xfffffffffe521ee7 + param_2) = lVar2 + param_1 + (uVar6 & param_1) * -2;
    *(undefined8 *)(&stack0xfffffffffe521ef7 + param_2) = uVar4;
    *(ulonglong *)(&stack0xfffffffffe521eef + param_2) = uVar5;
    *(undefined8 *)(&stack0xfffffffffe521edf + param_2) = unaff_R12;
    *(ulonglong *)(&stack0xfffffffffe521ee7 + param_2) = uVar5;
    *(ulonglong *)(&stack0xfffffffffe521edf + param_2) = unaff_R15;
    *(undefined **)(&stack0xfffffffffe521ed7 + param_2) = &DAT_14dd00eba;
    return uVar3;
  }
  uVar4 = FUN_1576222fb();
  return uVar4;
}



// FUNCTION 14d96f7b1 FUN_14d96f7b1 body=142 status=ok
// SIG undefined FUN_14d96f7b1(void)

/* WARNING: Removing unreachable block (ram,0x00014d96f842) */

undefined8 FUN_14d96f7b1(ulonglong param_1,longlong param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong unaff_RDI;
  ulonglong uVar7;
  undefined8 unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  puVar1 = (ulonglong *)(&stack0xfffffffffe521eff + param_2);
  *puVar1 = *(ulonglong *)(unaff_R13 + -0x60);
  uVar6 = *puVar1;
  *puVar1 = uVar6;
  uVar5 = ~(*puVar1 & unaff_R15);
  if (CARRY8(uVar5,unaff_R15)) {
    uVar7 = (uVar6 ^ 0xffffffffffffffff | ~unaff_R15) & (uVar5 + unaff_R15) - ~*puVar1;
    uVar6 = ~*(ulonglong *)(unaff_R13 + -0x88);
    uVar5 = (~unaff_R15 - (uVar6 | ~unaff_R15)) + uVar6 | *(ulonglong *)(unaff_R13 + -0x88);
    *(undefined8 *)(&stack0xfffffffffe521eff + param_2) = 0x157622382;
    uVar4 = FUN_14deaa610(param_1,FUN_14deaa610,0);
    uVar6 = *(ulonglong *)(unaff_RDI + -0x88);
    *(undefined8 *)(&stack0xfffffffffe521eff + param_2) = uVar4;
    *(ulonglong *)(&stack0xfffffffffe521ef7 + param_2) = uVar6;
    lVar2 = *(longlong *)(&stack0xfffffffffe521ef7 + param_2);
    uVar3 = *(undefined8 *)(&stack0xfffffffffe521eff + param_2);
    *(undefined8 *)(&stack0xfffffffffe521eff + param_2) = *(undefined8 *)(unaff_RDI + -0x90);
    *(ulonglong *)(&stack0xfffffffffe521ef7 + param_2) = uVar7;
    *(ulonglong *)(&stack0xfffffffffe521eef + param_2) = uVar7;
    uVar4 = *(undefined8 *)(unaff_RDI + -8);
    *(ulonglong *)(&stack0xfffffffffe521ee7 + param_2) = lVar2 + param_1 + (uVar6 & param_1) * -2;
    *(undefined8 *)(&stack0xfffffffffe521ef7 + param_2) = uVar4;
    *(ulonglong *)(&stack0xfffffffffe521eef + param_2) = uVar5;
    *(undefined8 *)(&stack0xfffffffffe521edf + param_2) = unaff_R12;
    *(ulonglong *)(&stack0xfffffffffe521ee7 + param_2) = uVar5;
    *(ulonglong *)(&stack0xfffffffffe521edf + param_2) = unaff_R15;
    *(undefined **)(&stack0xfffffffffe521ed7 + param_2) = &DAT_14dd00eba;
    return uVar3;
  }
  uVar4 = FUN_1576222fb();
  return uVar4;
}



// FUNCTION 14d96f848 FUN_14d96f848 body=165 status=ok
// SIG undefined FUN_14d96f848(void)

/* WARNING: Removing unreachable block (ram,0x00014d96fa1b) */
/* WARNING: Removing unreachable block (ram,0x00014d96fa21) */
/* WARNING: Removing unreachable block (ram,0x00014d96fad8) */
/* WARNING: Removing unreachable block (ram,0x00014d96fadd) */
/* WARNING: Removing unreachable block (ram,0x00014d96fae3) */
/* WARNING: Removing unreachable block (ram,0x00014d96fae8) */
/* WARNING: Removing unreachable block (ram,0x00014d96fb6f) */
/* WARNING: Removing unreachable block (ram,0x00014d96fb74) */
/* WARNING: Removing unreachable block (ram,0x00014d96fb7a) */
/* WARNING: Removing unreachable block (ram,0x000164a55c7b) */
/* WARNING: Removing unreachable block (ram,0x000164a55cd3) */
/* WARNING: Removing unreachable block (ram,0x000164a55cd7) */
/* WARNING: Removing unreachable block (ram,0x000166778de1) */
/* WARNING: Removing unreachable block (ram,0x000166778de7) */
/* WARNING: Removing unreachable block (ram,0x000166778e93) */
/* WARNING: Removing unreachable block (ram,0x000166778e99) */
/* WARNING: Removing unreachable block (ram,0x00016221d09d) */
/* WARNING: Removing unreachable block (ram,0x000161cc1307) */
/* WARNING: Removing unreachable block (ram,0x00014d96f8ee) */
/* WARNING: Removing unreachable block (ram,0x00014d7c0ba9) */
/* WARNING: Removing unreachable block (ram,0x000165adf6d2) */
/* WARNING: Removing unreachable block (ram,0x000165adf6d8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d96f848(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong unaff_RDI;
  ulonglong in_R9;
  longlong lVar5;
  undefined8 unaff_R14;
  undefined8 in_stack_00000008;
  ulonglong in_stack_00000010;
  ulonglong in_stack_00000030;
  
  uVar2 = (in_stack_00000030 & in_stack_00000010) << 1;
  uVar3 = (in_stack_00000030 & in_stack_00000010) >> 0x3f;
  uVar1 = ~uVar2 | uVar3;
  if (-1 < (longlong)uVar1) {
    lVar5 = (*(longlong *)
              (&stack0x00000018 +
              (in_RAX ^ ~(~(in_R9 & 0xffffffff85b7580e) & (in_R9 | 0xffffffff85b7580e)))) +
            in_stack_00000010) - (~((~uVar3 | uVar2) & uVar1) & 0xfffffffffffffffe);
    *(undefined8 *)(lVar5 + -8) = unaff_R14;
    *(undefined8 *)(lVar5 + -0x10) = in_stack_00000008;
    *(undefined8 *)(lVar5 + -0x18) = 0x166778d5f;
    FUN_164833482();
    *(undefined8 *)(lVar5 + -0x18) = *(undefined8 *)(unaff_RDI + -0x60);
    uVar4 = FUN_161cc1307();
    return uVar4;
  }
  uVar4 = FUN_166778cc8();
  return uVar4;
}



// FUNCTION 14d96f8ee FUN_14d96f8ee body=144 status=ok
// SIG undefined FUN_14d96f8ee(void)

/* WARNING: Removing unreachable block (ram,0x00014d96fa1b) */
/* WARNING: Removing unreachable block (ram,0x00014d96fa21) */
/* WARNING: Removing unreachable block (ram,0x00014d96fad8) */
/* WARNING: Removing unreachable block (ram,0x00014d96fadd) */
/* WARNING: Removing unreachable block (ram,0x00014d96fae3) */
/* WARNING: Removing unreachable block (ram,0x00014d96fae8) */
/* WARNING: Removing unreachable block (ram,0x00014d96fb6f) */
/* WARNING: Removing unreachable block (ram,0x00014d96fb74) */
/* WARNING: Removing unreachable block (ram,0x00014d96fb7a) */
/* WARNING: Removing unreachable block (ram,0x000164a55c7b) */
/* WARNING: Removing unreachable block (ram,0x000164a55cd3) */
/* WARNING: Removing unreachable block (ram,0x000164a55cd7) */
/* WARNING: Removing unreachable block (ram,0x000165adf6d2) */
/* WARNING: Removing unreachable block (ram,0x000165adf6d8) */

undefined8
FUN_14d96f8ee(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulonglong param_6)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  ulonglong in_RAX;
  ulonglong uVar6;
  byte bVar7;
  ulonglong uVar8;
  longlong unaff_RBX;
  ulonglong uVar9;
  undefined4 *puVar10;
  longlong unaff_RDI;
  undefined4 *puVar11;
  uint in_R10D;
  longlong lVar12;
  uint local_res18;
  undefined1 uStack000000000000012c;
  undefined1 auStack_17dc [6100];
  code *pcStack_8;
  
  puVar10 = (undefined4 *)(in_RAX ^ param_1);
  uVar9 = ~(~(*(ulonglong *)(unaff_RDI + -0x88) & param_1 ^ 0xffffffffffffffff) |
           ~(~*(ulonglong *)(unaff_RDI + -0x88) & 0xffffffffffffffff - param_1 ^ 0xffffffffffffffff)
           );
  pcStack_8 = FUN_14d96f97e;
  FUN_1654c0df5();
  lVar12 = -(~(ulonglong)auStack_17dc + 2);
  pcStack_8 = (code *)0x0;
  *(uint *)(lVar12 + 0x1905) = *(uint *)(lVar12 + 0x1905) ^ 0xffffffff;
  iVar4 = *(int *)(lVar12 + 0x1905);
  *(undefined4 *)(lVar12 + 0x1905) = 0;
  *(int *)(lVar12 + 0x1905) = *(int *)(lVar12 + 0x1905) + (0x14481798 - iVar4);
  uStack000000000000012c = 0;
  local_res18 = local_res18 & 0xffffff00;
  uVar8 = uVar9;
  uVar6 = FUN_156baaf33();
  uVar9 = (ulonglong)in_R10D ^ *(ulonglong *)(uVar9 - 0x50);
  puVar11 = (undefined4 *)((~uVar9 | ~uVar6) & ~(~uVar9 & ~uVar6));
  FUN_165731dda(param_1,uVar8,param_3);
  *(undefined8 *)(&stack0x25d4b53e + CONCAT44(0xffffffff,local_res18)) = 0xffffffffffffff70;
  puVar5 = (uint *)(param_6 & 0xffffffff);
  *puVar5 = *puVar5 & (uint)puVar11;
  out(0xcb,(char)puVar5);
  pbVar1 = (byte *)(unaff_RBX + -0x5e);
  bVar2 = *pbVar1;
  bVar7 = (byte)(param_1 >> 8);
  *pbVar1 = *pbVar1 + bVar7;
  uVar3 = *(undefined4 *)((longlong)puVar5 + 0x52);
  *puVar11 = *puVar10;
  in(((short)uVar8 - (short)uVar3) - (ushort)CARRY1(bVar2,bVar7));
  return 0x65731dda;
}



// FUNCTION 14d96f97e FUN_14d96f97e body=732 status=ok
// SIG undefined FUN_14d96f97e(void)

/* WARNING: Removing unreachable block (ram,0x00014d96fa1b) */
/* WARNING: Removing unreachable block (ram,0x00014d96fa21) */
/* WARNING: Removing unreachable block (ram,0x00014d96fad8) */
/* WARNING: Removing unreachable block (ram,0x00014d96fadd) */
/* WARNING: Removing unreachable block (ram,0x00014d96fae3) */
/* WARNING: Removing unreachable block (ram,0x00014d96fae8) */
/* WARNING: Removing unreachable block (ram,0x00014d96fb6f) */
/* WARNING: Removing unreachable block (ram,0x00014d96fb74) */
/* WARNING: Removing unreachable block (ram,0x00014d96fb7a) */
/* WARNING: Removing unreachable block (ram,0x000164a55c7b) */
/* WARNING: Removing unreachable block (ram,0x000164a55cd3) */
/* WARNING: Removing unreachable block (ram,0x000164a55cd7) */
/* WARNING: Removing unreachable block (ram,0x000165adf6d2) */
/* WARNING: Removing unreachable block (ram,0x000165adf6d8) */

undefined8
FUN_14d96f97e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulonglong param_6)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  ulonglong uVar6;
  byte bVar7;
  longlong unaff_RBX;
  undefined4 *unaff_RSI;
  ulonglong uVar8;
  undefined4 *puVar9;
  uint in_R10D;
  longlong lVar10;
  undefined8 unaff_R15;
  longlong in_stack_00000008;
  undefined8 in_stack_00000010;
  uint local_res18;
  undefined1 uStack000000000000012c;
  undefined1 local_17dc [6100];
  undefined8 local_8;
  
  lVar10 = -(~(ulonglong)local_17dc + 2);
  local_8 = 0;
  *(uint *)(lVar10 + 0x1905) = *(uint *)(lVar10 + 0x1905) ^ 0xffffffff;
  iVar4 = *(int *)(lVar10 + 0x1905);
  *(undefined4 *)(lVar10 + 0x1905) = 0;
  *(int *)(lVar10 + 0x1905) = *(int *)(lVar10 + 0x1905) + (0x14481798 - iVar4);
  uStack000000000000012c = 0;
  local_res18 = local_res18 & 0xffffff00;
  uVar6 = FUN_156baaf33();
  uVar8 = (ulonglong)in_R10D ^ *(ulonglong *)(in_stack_00000008 + -0x50);
  puVar9 = (undefined4 *)((~uVar8 | ~uVar6) & ~(~uVar8 & ~uVar6));
  FUN_165731dda(param_1,in_stack_00000010,param_3);
  *(undefined8 *)(&stack0x25d4b53e + CONCAT44(0xffffffff,local_res18)) = unaff_R15;
  puVar5 = (uint *)(param_6 & 0xffffffff);
  *puVar5 = *puVar5 & (uint)puVar9;
  out(0xcb,(char)puVar5);
  pbVar1 = (byte *)(unaff_RBX + -0x5e);
  bVar2 = *pbVar1;
  bVar7 = (byte)((ulonglong)param_1 >> 8);
  *pbVar1 = *pbVar1 + bVar7;
  uVar3 = *(undefined4 *)((longlong)puVar5 + 0x52);
  *puVar9 = *unaff_RSI;
  in(((short)in_stack_00000010 - (short)uVar3) - (ushort)CARRY1(bVar2,bVar7));
  return 0x65731dda;
}



// FUNCTION 14d96fee0 FUN_14d96fee0 body=43 status=ok
// SIG undefined FUN_14d96fee0(void)

void FUN_14d96fee0(void)

{
  return;
}



// FUNCTION 14d96ff76 FUN_14d96ff76 body=280 status=ok
// SIG undefined FUN_14d96ff76(void)

void FUN_14d96ff76(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x48);
  pcVar3 = FUN_166586205;
  uVar2 = FUN_166586205(FUN_166586205,~(unaff_RSI & param_2),param_3,param_4);
  FUN_164a9b76a(pcVar3,(uVar1 & param_1) << 1 ^ uVar2);
  return;
}



// FUNCTION 14d970091 FUN_14d970091 body=167 status=ok
// SIG undefined FUN_14d970091(void)

/* WARNING: Removing unreachable block (ram,0x00014d9700bb) */

void FUN_14d970091(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined2 param_7)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
                    /* WARNING: Ignoring partial resolution of indirect */
  FUN_16553e4a0(CONCAT62((int6)((ulonglong)(param_1 - param_4) >> 0x10),param_7),0x2ff16ff,
                *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,param_1 - param_4);
  return;
}



// FUNCTION 14d970139 FUN_14d970139 body=286 status=ok
// SIG undefined FUN_14d970139(void)

/* WARNING: Removing unreachable block (ram,0x000161b3629f) */
/* WARNING: Removing unreachable block (ram,0x000161b362a5) */
/* WARNING: Removing unreachable block (ram,0x000161b3631b) */
/* WARNING: Removing unreachable block (ram,0x000161b36321) */
/* WARNING: Removing unreachable block (ram,0x000161dc8c25) */
/* WARNING: Removing unreachable block (ram,0x000161dc8c57) */
/* WARNING: Removing unreachable block (ram,0x00014d9701dd) */
/* WARNING: Removing unreachable block (ram,0x00014d9702ed) */
/* WARNING: Removing unreachable block (ram,0x00014d9702f3) */
/* WARNING: Removing unreachable block (ram,0x00015b588054) */
/* WARNING: Removing unreachable block (ram,0x00014d9701d7) */
/* WARNING: Removing unreachable block (ram,0x00014d9702f8) */

undefined8 FUN_14d970139(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_160c3aba9(FUN_160c3aba9);
  return uVar1;
}



// FUNCTION 14d9701dd FUN_14d9701dd body=441 status=ok
// SIG undefined FUN_14d9701dd(void)

/* WARNING: Removing unreachable block (ram,0x000161b3629f) */
/* WARNING: Removing unreachable block (ram,0x000161b362a5) */
/* WARNING: Removing unreachable block (ram,0x000161b3631b) */
/* WARNING: Removing unreachable block (ram,0x000161b36321) */
/* WARNING: Removing unreachable block (ram,0x000161dc8c25) */
/* WARNING: Removing unreachable block (ram,0x000161dc8c57) */
/* WARNING: Removing unreachable block (ram,0x00014d9702f8) */

undefined8 FUN_14d9701dd(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  ulonglong unaff_RBP;
  longlong unaff_RDI;
  undefined1 *puVar7;
  ulonglong in_R11;
  longlong unaff_R12;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  
  uVar5 = *(ulonglong *)(param_1 + 0x10);
  *(ulonglong *)(param_1 + 0x10) = ~*(ulonglong *)(param_1 + 0x10);
  *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) | in_R11;
  *(ulonglong *)(param_1 + 0x10) = ~((~in_R11 | uVar5) & *(ulonglong *)(param_1 + 0x10));
  lVar1 = *(longlong *)(param_1 + 0x10);
  *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) & unaff_RBP;
  *(ulonglong *)(param_1 + 0x10) = (lVar1 + unaff_RBP) - *(longlong *)(param_1 + 0x10);
  uVar5 = 0xffffffff84bae678;
  FUN_15b30c8a8();
  FUN_166d4afdf();
  FUN_14dd0e884();
  uVar3 = FUN_1650e5ca2();
  puVar7 = &stack0xffffffffffffffd8;
  lVar1 = *(longlong *)(unaff_R12 + -0x50);
  FUN_1610b4a04();
  *(ulonglong *)
   (&stack0x116cddee +
   CONCAT44(0xffffffff,~(~((uint)lVar1 & 0xea480ff7) & ((uint)lVar1 | 0xea480ff7)))) =
       (unaff_RDI - 0x98U) + uVar3 + (unaff_RDI - 0x98U & uVar3) * -2;
  uVar2 = *(undefined8 *)(lVar1 + -8);
  uVar3 = *(ulonglong *)(lVar1 + -0x98);
  uVar6 = 0xffffffffffffffff - uVar5;
  uVar4 = FUN_1569bd267();
  *(undefined8 *)((uVar6 | uVar3) + 0x10) = param_4;
  uVar5 = unaff_R15 ^ uVar5;
  *(code **)(uVar5 - 8) = FUN_15b30c8a8;
  *(undefined8 *)(uVar5 - 0x10) = in_stack_00000008;
  *(undefined8 *)(uVar5 - 0x10) = unaff_RBX;
  *(undefined8 *)(uVar5 - 0x18) = uVar2;
  *(undefined1 **)(uVar5 - 0x20) = puVar7;
  *(undefined8 *)(uVar5 - 0x10) = *(undefined8 *)(uVar5 - 8);
  *(undefined8 *)(uVar5 - 0x18) = unaff_retaddr;
  *(undefined1 **)(uVar5 - 8) = &LAB_15b5880a1;
  *(undefined **)(uVar5 - 0x18) = &DAT_15b58807d;
  return uVar4;
}



// FUNCTION 14d970398 FUN_14d970398 body=167 status=ok
// SIG undefined FUN_14d970398(void)

void FUN_14d970398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  longlong local_res8;
  
  puVar1 = (undefined8 *)(&stack0xfffffffff21d1dd0 + local_res8);
  *puVar1 = param_2;
  puVar1[-1] = in_RAX;
  *(undefined4 *)(puVar1 + -1) = 0xc1604774;
  *(int *)(puVar1 + -1) = *(int *)(puVar1 + -1) + 0x6b633170;
  *(undefined4 *)((longlong)puVar1 + -4) = 0x198ae1f8;
  *(uint *)((longlong)puVar1 + -4) = *(uint *)((longlong)puVar1 + -4) ^ 0x198ae1f8;
  lVar2 = *(longlong *)((longlong)puVar1 + (puVar1[-1] ^ 0x2cc378ec) + 8);
  uVar4 = *puVar1;
  puVar1[2] = puVar1[2] & unaff_R15;
  puVar1[2] = puVar1[2] << 1;
  *puVar1 = unaff_RDI;
  puVar1[-1] = param_4;
  *puVar1 = unaff_RBP;
  puVar1[2] = (lVar2 + unaff_R15) - puVar1[2];
  uVar5 = puVar1[1];
  puVar1[1] = unaff_R13;
  uVar3 = puVar1[3];
  puVar1[3] = puVar1[3] & unaff_R15;
  puVar1[3] = -puVar1[3];
  puVar1[3] = puVar1[3] + -1;
  puVar1[3] = puVar1[3] & (uVar3 | unaff_R15);
  *puVar1 = FUN_14d97043f;
  FUN_162d148af(uVar5,uVar4,param_3,puVar1[-1]);
  *(undefined8 *)((longlong)puVar1 + ((puVar1[2] ^ 0x391edf9d) - 0x49c59e2)) = 0x14d9704d8;
  FUN_1629ecdbf();
  FUN_14d9704de();
  return;
}



// FUNCTION 14d97043f FUN_14d97043f body=156 status=ok
// SIG undefined FUN_14d97043f(void)

void FUN_14d97043f(undefined8 param_1,undefined8 param_2)

{
  ulonglong unaff_RBX;
  ulonglong in_R11;
  ulonglong local_res8;
  
  *(undefined8 *)(&stack0xfffffffffb63a616 + (local_res8 ^ 0x391edf9d)) = 0x14d9704d8;
  FUN_1629ecdbf(param_1,param_2,
                -((0xffffffffffffffff - unaff_RBX | in_R11) &
                 (~(~in_R11 & unaff_RBX) + unaff_RBX) - in_R11));
  FUN_14d9704de();
  return;
}



// FUNCTION 14d9704de FUN_14d9704de body=110 status=ok
// SIG undefined FUN_14d9704de(void)

void FUN_14d9704de(void)

{
  longlong in_R10;
  undefined8 unaff_R12;
  
  *(undefined8 *)(in_R10 + 0x5909) = unaff_R12;
  return;
}



// FUNCTION 14d97059a FUN_14d97059a body=151 status=ok
// SIG undefined FUN_14d97059a(void)

void FUN_14d97059a(void)

{
  FUN_165936317();
  return;
}



// FUNCTION 14d97076e FUN_14d97076e body=313 status=ok
// SIG undefined FUN_14d97076e(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d97076e(undefined8 param_1)

{
  FUN_161afd209(param_1,FUN_161afd209);
  FUN_157809b0e();
  return;
}



// FUNCTION 14d970995 FUN_14d970995 body=115 status=ok
// SIG undefined FUN_14d970995(void)

void FUN_14d970995(void)

{
  undefined1 *puVar1;
  short unaff_R12W;
  ulonglong *unaff_R15;
  undefined2 uStackX_8;
  ulonglong uStackX_10;
  undefined1 auStackX_20 [8];
  
  *unaff_R15 = ~*unaff_R15;
  *unaff_R15 = *unaff_R15 | 1;
  *unaff_R15 = ~*unaff_R15;
  puVar1 = &stack0x00000018;
  if ((uStackX_10 & 1) != 0) {
    puVar1 = auStackX_20;
    unaff_R12W = unaff_R12W + 1;
  }
  *(undefined2 *)(puVar1 + -2) = uStackX_8;
  *(short *)(puVar1 + -2) = *(short *)(puVar1 + -2) - unaff_R12W;
  (*(code *)&LAB_160e11245)();
  return;
}



// FUNCTION 14d970acb FUN_14d970acb body=273 status=ok
// SIG undefined FUN_14d970acb(void)

/* WARNING: Removing unreachable block (ram,0x00014d970b68) */
/* WARNING: Removing unreachable block (ram,0x00014d970b6e) */
/* WARNING: Removing unreachable block (ram,0x00015753feda) */
/* WARNING: Removing unreachable block (ram,0x00015753fee0) */
/* WARNING: Removing unreachable block (ram,0x00015753ff68) */
/* WARNING: Removing unreachable block (ram,0x000161021688) */
/* WARNING: Removing unreachable block (ram,0x00015753ff6e) */
/* WARNING: Removing unreachable block (ram,0x00015753ffe2) */
/* WARNING: Removing unreachable block (ram,0x00015753ffe8) */
/* WARNING: Removing unreachable block (ram,0x00015753ffdd) */
/* WARNING: Removing unreachable block (ram,0x0001568fa622) */
/* WARNING: Removing unreachable block (ram,0x0001568fa641) */
/* WARNING: Removing unreachable block (ram,0x0001568fa646) */
/* WARNING: Removing unreachable block (ram,0x000162afd8aa) */
/* WARNING: Removing unreachable block (ram,0x000162afd935) */
/* WARNING: Removing unreachable block (ram,0x000162afd93a) */
/* WARNING: Removing unreachable block (ram,0x000162afd940) */
/* WARNING: Removing unreachable block (ram,0x000156421dc0) */
/* WARNING: Removing unreachable block (ram,0x000160cc7f34) */
/* WARNING: Removing unreachable block (ram,0x000156421e54) */
/* WARNING: Removing unreachable block (ram,0x000156421e5a) */
/* WARNING: Removing unreachable block (ram,0x000156421e5f) */
/* WARNING: Removing unreachable block (ram,0x000156421e7e) */

undefined8 FUN_14d970acb(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_162afd8aa();
  return uVar1;
}



// FUNCTION 14d970bdf FUN_14d970bdf body=44 status=ok
// SIG undefined FUN_14d970bdf(void)

void FUN_14d970bdf(void)

{
  FUN_16638019b();
  return;
}



// FUNCTION 14d970d68 FUN_14d970d68 body=158 status=ok
// SIG undefined FUN_14d970d68(void)

void FUN_14d970d68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_retaddr;
  
  (*(code *)0x1572956d3)(unaff_retaddr,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d971108 FUN_14d971108 body=23 status=ok
// SIG undefined FUN_14d971108(void)

void FUN_14d971108(void)

{
  FUN_16131bb16();
  return;
}



// FUNCTION 14d9714a5 FUN_14d9714a5 body=27 status=ok
// SIG undefined FUN_14d9714a5(void)

void FUN_14d9714a5(void)

{
  undefined8 unaff_RSI;
  longlong lStackX_10;
  
  syscall();
  *(undefined8 *)(lStackX_10 + -8) = unaff_RSI;
  *(undefined8 *)(lStackX_10 + -0x10) = unaff_RSI;
  *(undefined1 **)(lStackX_10 + -8) = &LAB_14d9714c2;
  return;
}



// FUNCTION 14d971654 FUN_14d971654 body=135 status=ok
// SIG undefined FUN_14d971654(void)

void FUN_14d971654(undefined8 param_1)

{
  FUN_161bed8ae(param_1,FUN_161bed8ae);
  return;
}



// FUNCTION 14d9716db FUN_14d9716db body=313 status=ok
// SIG undefined FUN_14d9716db(void)

/* WARNING: Removing unreachable block (ram,0x00014d97177e) */
/* WARNING: Removing unreachable block (ram,0x000161929eb4) */

void FUN_14d9716db(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  undefined8 unaff_R12;
  undefined4 *puVar1;
  undefined8 unaff_R14;
  undefined8 local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_R12;
  *(undefined8 *)(local_res10 + -0x10) = unaff_R12;
  puVar1 = (undefined4 *)(local_res10 + -0xc);
  *puVar1 = 0;
  *puVar1 = *puVar1;
  *(undefined4 *)(local_res10 + -0x10) = *(undefined4 *)(local_res10 + -0x10);
  if (*(int *)(local_res10 + -0x10) < 0) {
    *(undefined4 *)(local_res10 + -0xc) = 0xa13ef594;
    *(int *)(local_res10 + -0xc) = *(int *)(local_res10 + -0xc) + 0x5ec10a6b;
  }
  *(undefined8 *)(local_res10 + -0x10) = unaff_RBP;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -0x18) = unaff_R14;
  *(undefined8 *)(local_res10 + -0x20) = in_RAX;
  *(undefined4 *)(local_res10 + -0x20) = 0xf970fa0f;
  *(undefined4 *)(local_res10 + -0x1c) = 0xffffffff;
  FUN_161929eb4();
  return;
}



// FUNCTION 14d971962 FUN_14d971962 body=115 status=ok
// SIG undefined FUN_14d971962(void)

/* WARNING: Removing unreachable block (ram,0x00014d971982) */

void FUN_14d971962(ushort *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong in_RAX;
  undefined8 uVar1;
  undefined8 unaff_RBX;
  longlong lVar2;
  longlong unaff_R12;
  longlong lStackX_18;
  
  lVar2 = *(longlong *)(unaff_R12 + -0x90) + in_RAX;
  uVar1 = FUN_15b49dad9();
  *param_1 = ~(*param_1 & 0x100) + *param_1 + 1;
  *(undefined8 *)(lStackX_18 + -8) = unaff_RBX;
  *(undefined8 *)(lStackX_18 + -0x10) = *(undefined8 *)(lStackX_18 + -8);
  *(undefined8 *)(lStackX_18 + -0x18) = param_2;
  *(undefined8 *)(lStackX_18 + -0x20) = uVar1;
  *(undefined4 *)(lStackX_18 + -0x20) = 0x37503af;
  *(undefined4 *)(lStackX_18 + -0x1c) = 0;
  FUN_164b45ded(FUN_164b45ded,lVar2,param_3,param_4);
  return;
}



// FUNCTION 14d9719d7 FUN_14d9719d7 body=160 status=ok
// SIG undefined FUN_14d9719d7(void)

void FUN_14d9719d7(ushort *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  longlong local_res20;
  
  *param_1 = ~(*param_1 & 0x100) + *param_1 + 1;
  *(undefined8 *)(local_res20 + -8) = unaff_RBX;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = uStackX_8;
  *(undefined8 *)(local_res20 + -0x20) = in_RAX;
  *(undefined4 *)(local_res20 + -0x20) = 0x37503af;
  *(undefined4 *)(local_res20 + -0x1c) = 0;
  FUN_164b45ded(FUN_164b45ded,param_2,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14d971a77 FUN_14d971a77 body=209 status=ok
// SIG undefined FUN_14d971a77(void)

void FUN_14d971a77(void)

{
  return;
}



// FUNCTION 14d971b49 FUN_14d971b49 body=220 status=ok
// SIG undefined FUN_14d971b49(void)

/* WARNING: Removing unreachable block (ram,0x00014d971bd6) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d971b49(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_R12;
  ushort local_res18;
  longlong lStackX_20;
  
  if ((short)((~(local_res18 & 0xfeff) - 0x101) - ~local_res18) < 0) {
    *(undefined8 *)(lStackX_20 + -8) = unaff_R12;
    (*(code *)&LAB_165deaeb6)(param_1,param_2,param_3,param_4);
    return;
  }
  FUN_160f6578a();
  return;
}



// FUNCTION 14d971c5f FUN_14d971c5f body=16 status=ok
// SIG undefined FUN_14d971c5f(void)

void FUN_14d971c5f(void)

{
  return;
}



// FUNCTION 14d971d12 FUN_14d971d12 body=108 status=ok
// SIG undefined FUN_14d971d12(void)

void FUN_14d971d12(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_165c7153c(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d971efc FUN_14d971efc body=684 status=ok
// SIG undefined FUN_14d971efc(void)

/* WARNING: Removing unreachable block (ram,0x00014d9720db) */
/* WARNING: Removing unreachable block (ram,0x00014d9720e1) */
/* WARNING: Removing unreachable block (ram,0x00014d9720e6) */
/* WARNING: Removing unreachable block (ram,0x00014d971f9f) */
/* WARNING: Removing unreachable block (ram,0x00014d971faa) */
/* WARNING: Removing unreachable block (ram,0x00014d972034) */
/* WARNING: Removing unreachable block (ram,0x000164bab102) */
/* WARNING: Removing unreachable block (ram,0x000164bab16d) */
/* WARNING: Removing unreachable block (ram,0x00014d97203a) */
/* WARNING: Removing unreachable block (ram,0x00014d9720d6) */
/* WARNING: Removing unreachable block (ram,0x00014d971fa5) */

void FUN_14d971efc(void)

{
  FUN_14da40621();
  return;
}



// FUNCTION 14d9720e6 FUN_14d9720e6 body=168 status=ok
// SIG undefined FUN_14d9720e6(void)

void FUN_14d9720e6(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1615a03bb(0xffffffffffffffffU - *(longlong *)(unaff_R13 + -0x78) | unaff_R15,FUN_1615a03bb);
  return;
}



// FUNCTION 14d97221d FUN_14d97221d body=459 status=ok
// SIG undefined FUN_14d97221d(void)

/* WARNING: Removing unreachable block (ram,0x00014d972352) */
/* WARNING: Removing unreachable block (ram,0x00014d9722bb) */
/* WARNING: Removing unreachable block (ram,0x00014d97231c) */
/* WARNING: Removing unreachable block (ram,0x00014d97234c) */
/* WARNING: Removing unreachable block (ram,0x000164a915e8) */

undefined8 FUN_14d97221d(void)

{
  return 0x28f225e7;
}



// FUNCTION 14d9723ea FUN_14d9723ea body=167 status=ok
// SIG undefined FUN_14d9723ea(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d9723ea(void)

{
  FUN_15b6e547b();
  return;
}



// FUNCTION 14d972491 FUN_14d972491 body=165 status=ok
// SIG undefined FUN_14d972491(void)

void FUN_14d972491(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong in_RAX;
  ulonglong *in_R9;
  
  uVar1 = *in_R9;
  uVar2 = *in_R9;
  *in_R9 = ~*in_R9;
  uVar3 = *in_R9;
  *in_R9 = ~*in_R9;
  *in_R9 = (~(uVar3 & in_RAX) + in_RAX) - *in_R9;
  *in_R9 = (~(~in_RAX & uVar1) + uVar2) - in_RAX & *in_R9 ^ 0xffffffffffffffff;
  return;
}



// FUNCTION 14d972536 FUN_14d972536 body=312 status=ok
// SIG undefined FUN_14d972536(void)

/* WARNING: Removing unreachable block (ram,0x00016169bc7c) */
/* WARNING: Removing unreachable block (ram,0x00016169bc76) */
/* WARNING: Removing unreachable block (ram,0x00016169bc81) */
/* WARNING: Removing unreachable block (ram,0x00016169bd19) */
/* WARNING: Removing unreachable block (ram,0x00016169bd1f) */
/* WARNING: Removing unreachable block (ram,0x000165bc6acd) */
/* WARNING: Removing unreachable block (ram,0x000161af71d6) */
/* WARNING: Removing unreachable block (ram,0x000161af726d) */
/* WARNING: Removing unreachable block (ram,0x000161af7273) */
/* WARNING: Removing unreachable block (ram,0x000161c93270) */
/* WARNING: Removing unreachable block (ram,0x000161c932b4) */
/* WARNING: Removing unreachable block (ram,0x000161c93306) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x000161c9330c) */
/* WARNING: Removing unreachable block (ram,0x000161c9335e) */
/* WARNING: Removing unreachable block (ram,0x00016169bbe5) */
/* WARNING: Removing unreachable block (ram,0x000156e49135) */
/* WARNING: Removing unreachable block (ram,0x000156e49286) */
/* WARNING: Removing unreachable block (ram,0x000156e4928b) */
/* WARNING: Removing unreachable block (ram,0x000161c933f5) */
/* WARNING: Removing unreachable block (ram,0x000161c93400) */
/* WARNING: Removing unreachable block (ram,0x000161c933fb) */
/* WARNING: Removing unreachable block (ram,0x000162d94088) */
/* WARNING: Removing unreachable block (ram,0x000164a952b0) */
/* WARNING: Removing unreachable block (ram,0x000162d9408e) */
/* WARNING: Removing unreachable block (ram,0x000162d9413b) */
/* WARNING: Removing unreachable block (ram,0x000162d94140) */
/* WARNING: Removing unreachable block (ram,0x000162d94146) */
/* WARNING: Removing unreachable block (ram,0x000161af72cb) */
/* WARNING: Removing unreachable block (ram,0x000161af72cf) */
/* WARNING: Removing unreachable block (ram,0x000161af7340) */
/* WARNING: Removing unreachable block (ram,0x00014d9725e6) */

undefined8 FUN_14d972536(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_164a952b0();
  return uVar1;
}



// FUNCTION 14d972848 FUN_14d972848 body=314 status=ok
// SIG undefined FUN_14d972848(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d972848(void)

{
  bool in_ZF;
  longlong unaff_retaddr;
  
  if (in_ZF) {
    return;
  }
  if (unaff_retaddr == 1) {
    return;
  }
  if (unaff_retaddr == 2) {
    return;
  }
  return;
}



// FUNCTION 14d9728e6 FUN_14d9728e6 body=154 status=ok
// SIG undefined FUN_14d9728e6(void)

/* WARNING: Removing unreachable block (ram,0x00014d972970) */
/* WARNING: Removing unreachable block (ram,0x00014d97297c) */

void FUN_14d9728e6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined *puVar3;
  undefined8 in_R11;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
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
  ulonglong local_8;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0x50);
  uVar17 = *(ulonglong *)(unaff_R13 + -8) ^ unaff_R15;
  uVar1 = *(ulonglong *)(unaff_R13 + -0x70) ^ unaff_R15;
  local_8._0_2_ = (ushort)uVar17;
  local_8._2_6_ = (undefined6)(uVar17 >> 0x10);
  local_8 = CONCAT62(local_8._2_6_,~(ushort)local_8) ^ 0xffff;
  bVar12 = (local_8 & 0x4000) != 0;
  bVar10 = (local_8 & 0x200) != 0;
  bVar9 = 0;
  bVar6 = (local_8 & 0x10) != 0;
  bVar16 = (local_8 & 0x200000) != 0;
  bVar13 = (local_8 & 0x40000) != 0;
  bVar15 = 0;
  bVar14 = 0;
  *(undefined8 *)(uVar1 - 8) = param_2;
  *(undefined8 *)(uVar1 - 0x10) = unaff_R14;
  bVar4 = 0;
  bVar11 = 0;
  puVar3 = &DAT_164cdf5c3;
  bVar8 = 0;
  bVar7 = 0;
  bVar5 = 1;
  *(undefined8 *)(uVar1 - 0x18) = 0x166a0a1bb;
  FUN_164851246();
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)(bVar11 & 1) * 0x800 |
       (ulonglong)((local_8 & 0x400) != 0) * 0x400 | (ulonglong)(bVar10 & 1) * 0x200 |
       (ulonglong)(bVar9 & 1) * 0x100 | (ulonglong)(bVar8 & 1) * 0x80 |
       (ulonglong)(bVar7 & 1) * 0x40 | (ulonglong)(bVar6 & 1) * 0x10 | (ulonglong)(bVar5 & 1) * 4 |
       (ulonglong)(bVar4 & 1) | (ulonglong)(bVar16 & 1) * 0x200000 |
       (ulonglong)(bVar15 & 1) * 0x100000 | (ulonglong)(bVar14 & 1) * 0x80000 |
       (ulonglong)(bVar13 & 1) * 0x40000;
  *(undefined **)(uVar1 - 0x20) = puVar3;
  uVar17 = *(ulonglong *)(uVar1 - 0x18);
  *(ulonglong *)(uVar1 - 0x18) = ~(uVar2 & unaff_R15) & (uVar2 | unaff_R15);
  *(undefined8 *)(uVar1 - 0x20) = in_R11;
  *(ulonglong *)(uVar1 - 0x28) =
       (ulonglong)((uVar17 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar17 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar17 & 0x400) != 0) * 0x400 | (ulonglong)((uVar17 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar17 & 0x100) != 0) * 0x100 | (ulonglong)((uVar17 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar17 & 0x40) != 0) * 0x40 | (ulonglong)((uVar17 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar17 & 4) != 0) * 4 | (ulonglong)((uVar17 & 1) != 0) |
       (ulonglong)((uVar17 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar17 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uVar1 - 8) = 0x118e264;
  *(undefined8 *)(uVar1 - 0x10) = param_3;
  *(undefined8 *)(uVar1 - 0x18) = param_3;
  *(undefined8 *)(uVar1 - 0x10) = 0x156ef2e25;
  return;
}



// FUNCTION 14d972982 thunk_FUN_14d972988 body=5 status=ok
// SIG undefined thunk_FUN_14d972988(void)

/* WARNING: Removing unreachable block (ram,0x00015b9eb2db) */
/* WARNING: Removing unreachable block (ram,0x00015b9eb2e1) */
/* WARNING: Removing unreachable block (ram,0x00015b9eb2e6) */
/* WARNING: Removing unreachable block (ram,0x00015b9eb23e) */
/* WARNING: Removing unreachable block (ram,0x00014d972a21) */

void * thunk_FUN_14d972988(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  ulonglong uStackX_8;
  
  uVar1 = ~((~param_1 | uStackX_8) & (~uStackX_8 | param_1));
  pvVar2 = ProcessEnvironmentBlock;
  *(undefined8 *)(uVar1 - 8) = 0x59703ca;
  *(undefined8 *)(uVar1 - 0x10) = param_2;
  *(undefined8 *)(uVar1 - 0x18) = param_2;
  *(code **)(uVar1 - 0x10) = FUN_165c7153c;
  return pvVar2;
}



// FUNCTION 14d972988 FUN_14d972988 body=251 status=ok
// SIG undefined FUN_14d972988(void)

/* WARNING: Removing unreachable block (ram,0x00015b9eb2db) */
/* WARNING: Removing unreachable block (ram,0x00015b9eb2e1) */
/* WARNING: Removing unreachable block (ram,0x00015b9eb2e6) */
/* WARNING: Removing unreachable block (ram,0x00015b9eb23e) */
/* WARNING: Removing unreachable block (ram,0x00014d972a21) */

void * FUN_14d972988(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  ulonglong uStackX_8;
  
  uVar1 = ~((~param_1 | uStackX_8) & (~uStackX_8 | param_1));
  pvVar2 = ProcessEnvironmentBlock;
  *(undefined8 *)(uVar1 - 8) = 0x59703ca;
  *(undefined8 *)(uVar1 - 0x10) = param_2;
  *(undefined8 *)(uVar1 - 0x18) = param_2;
  *(code **)(uVar1 - 0x10) = FUN_165c7153c;
  return pvVar2;
}



// FUNCTION 14d972a21 FUN_14d972a21 body=182 status=ok
// SIG undefined FUN_14d972a21(void)

undefined8 FUN_14d972a21(undefined8 param_1)

{
  undefined8 in_R11;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 local_res8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = in_R11;
  *(undefined8 *)(local_res18 + -0x10) = param_1;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = unaff_R14;
  *(undefined4 *)(local_res18 + -0x20) = 0x6925ede3;
  *(undefined4 *)(local_res18 + -0x1c) = 0;
  *(undefined8 *)(local_res18 + -0x28) = unaff_R15;
  *(undefined8 *)(local_res18 + -0x30) = unaff_R15;
  *(undefined8 *)(local_res18 + -0x38) = unaff_R15;
  *(code **)(local_res18 + -0x28) = FUN_14d972ad9;
  *(undefined1 **)(local_res18 + -0x30) = &LAB_15b773d98;
  return local_res8;
}



// FUNCTION 14d972ad9 FUN_14d972ad9 body=16 status=ok
// SIG undefined FUN_14d972ad9(void)

void FUN_14d972ad9(void)

{
  FUN_14d7ac429();
  return;
}



// FUNCTION 14d972c0b FUN_14d972c0b body=149 status=ok
// SIG undefined FUN_14d972c0b(void)

/* WARNING: Removing unreachable block (ram,0x00014d972ca0) */

void FUN_14d972c0b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 local_res10;
  ushort local_res18;
  ulonglong local_res20;
  
  uVar1 = ~(local_res20 & in_RAX) & (local_res20 | in_RAX);
  *(undefined8 *)(uVar1 - 8) = in_R10;
  if ((-~local_res18 - (~(0xfeff - (local_res18 | 0xfeff)) + 2) & 1) != 0) {
    FUN_164f5cf4c();
    return;
  }
  *(undefined8 *)(uVar1 - 0x10) = param_4;
  *(undefined8 *)(uVar1 - 0x18) = param_4;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x18) = unaff_RBP;
  *(undefined8 *)(uVar1 - 0x20) = unaff_RDI;
  *(undefined8 *)(uVar1 - 0x28) = param_1;
  *(undefined **)(uVar1 - 0x20) = &DAT_164f5cfdd;
  *(undefined8 *)(uVar1 - 8) = 0;
  *(ulonglong *)(uVar1 - 8) = *(ulonglong *)(uVar1 - 8) ^ *(ulonglong *)(uVar1 - 0x20);
  *(undefined8 *)(uVar1 - 0x10) = local_res10;
  return;
}



// FUNCTION 14d972ca0 FUN_14d972ca0 body=149 status=ok
// SIG undefined FUN_14d972ca0(void)

void FUN_14d972ca0(void)

{
  return;
}



// FUNCTION 14d972dea thunk_FUN_14d972df0 body=5 status=ok
// SIG undefined thunk_FUN_14d972df0(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void thunk_FUN_14d972df0(undefined8 param_1,undefined8 param_2)

{
  FUN_156750054(param_1,param_2,FUN_156750054);
  (*(code *)&LAB_15b7e0c07)();
  return;
}



// FUNCTION 14d972df0 FUN_14d972df0 body=308 status=ok
// SIG undefined FUN_14d972df0(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d972df0(undefined8 param_1,undefined8 param_2)

{
  FUN_156750054(param_1,param_2,FUN_156750054);
  (*(code *)&LAB_15b7e0c07)();
  return;
}



// FUNCTION 14d972fc5 FUN_14d972fc5 body=161 status=ok
// SIG undefined FUN_14d972fc5(void)

void FUN_14d972fc5(undefined8 param_1,undefined8 param_2)

{
  FUN_1573ad7ac(param_1,param_2,FUN_1573ad7ac);
  return;
}



// FUNCTION 14d973197 FUN_14d973197 body=471 status=ok
// SIG undefined FUN_14d973197(void)

/* WARNING: Removing unreachable block (ram,0x00014d973339) */
/* WARNING: Removing unreachable block (ram,0x00014d97333f) */
/* WARNING: Removing unreachable block (ram,0x000162403512) */
/* WARNING: Removing unreachable block (ram,0x00014d9733d2) */
/* WARNING: Removing unreachable block (ram,0x00014d9733d8) */
/* WARNING: Removing unreachable block (ram,0x00014d9733e9) */
/* WARNING: Removing unreachable block (ram,0x00014d9732cc) */
/* WARNING: Removing unreachable block (ram,0x00016217d12f) */
/* WARNING: Removing unreachable block (ram,0x00014d97322b) */
/* WARNING: Removing unreachable block (ram,0x00014d9732c1) */
/* WARNING: Removing unreachable block (ram,0x00014d9732bc) */

void FUN_14d973197(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0xa0);
  uVar2 = *(ulonglong *)(unaff_RDI + -0x90) | param_1;
  FUN_162338f39();
  uVar1 = *(ulonglong *)(uVar1 + param_1 + (uVar1 & param_1) * -2 + -0x38);
  if ((longlong)((~uVar2 | uVar1) & (0xffffffffffffffff - uVar1 | uVar2) ^ 0xffffffffffffffff) < 0)
  {
    FUN_1657ef52b();
    return;
  }
  FUN_1657ef52b();
  return;
}



// FUNCTION 14d9732cc FUN_14d9732cc body=471 status=ok
// SIG undefined FUN_14d9732cc(void)

/* WARNING: Removing unreachable block (ram,0x00014d973339) */
/* WARNING: Removing unreachable block (ram,0x00014d97333f) */
/* WARNING: Removing unreachable block (ram,0x000162403512) */
/* WARNING: Removing unreachable block (ram,0x00014d9733d2) */
/* WARNING: Removing unreachable block (ram,0x00014d9733d8) */
/* WARNING: Removing unreachable block (ram,0x00014d9733e9) */

void FUN_14d9732cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  code *pcVar1;
  longlong in_RAX;
  longlong unaff_RDI;
  undefined8 local_res20;
  
  *(undefined8 *)(unaff_RDI + 0x18) = 0;
  *(longlong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x18) - in_RAX;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(local_res20,param_2,param_3);
  *param_6 = 0x711fb6;
  FUN_165c7153c();
  return;
}



// FUNCTION 14d973482 FUN_14d973482 body=173 status=ok
// SIG undefined FUN_14d973482(void)

void FUN_14d973482(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong unaff_R15;
  
  FUN_1570ae281(0x2c0062f5,0x2c0062f5,~(param_3 & unaff_R15) & param_2);
  return;
}



// FUNCTION 14d973530 FUN_14d973530 body=155 status=ok
// SIG undefined FUN_14d973530(void)

undefined8 FUN_14d973530(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d9736f6 FUN_14d9736f6 body=146 status=ok
// SIG undefined FUN_14d9736f6(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d9736f6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong unaff_RDI;
  longlong unaff_R13;
  undefined8 uStackX_8;
  ushort uStack0000000000000030;
  
  _uStack0000000000000030 = unaff_RDI - *(longlong *)(&stack0xfffffffff24cb11a + unaff_R13);
  FUN_1614e29a8(param_5,param_2,(uStack0000000000000030 | 0x100) - 0x101,uStackX_8);
  return;
}



// FUNCTION 14d973788 FUN_14d973788 body=135 status=ok
// SIG undefined FUN_14d973788(void)

/* WARNING: Removing unreachable block (ram,0x00014d9737fc) */

void FUN_14d973788(void)

{
  return;
}



// FUNCTION 14d973810 FUN_14d973810 body=240 status=ok
// SIG undefined FUN_14d973810(void)

/* WARNING: Removing unreachable block (ram,0x00014d9738bb) */

void FUN_14d973810(void)

{
  ulonglong uVar1;
  longlong in_RAX;
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  longlong in_R10;
  longlong in_R11;
  undefined8 local_res20;
  ushort in_stack_00000030;
  ulonglong in_stack_00000038;
  
  *(longlong *)(in_R10 + 0x18) = in_R11 + in_RAX + *(longlong *)(in_R10 + 0x18);
  uVar1 = ~in_stack_00000038 & unaff_RBP;
  *(undefined8 *)(uVar1 - 8) = local_res20;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x18) = unaff_RBX;
  if (((-0x101 - (in_stack_00000030 | 0xfeff)) + in_stack_00000030 & 1) != 0) {
    FUN_164996624();
    return;
  }
  FUN_164996624();
  return;
}



// FUNCTION 14d973bb4 FUN_14d973bb4 body=147 status=ok
// SIG undefined FUN_14d973bb4(void)

void FUN_14d973bb4(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 unaff_retaddr;
  
  FUN_16185d21f(param_1,param_2,param_3 + 0xa853,unaff_retaddr);
  return;
}



// FUNCTION 14d973cec FUN_14d973cec body=239 status=ok
// SIG undefined FUN_14d973cec(void)

/* WARNING: Removing unreachable block (ram,0x000165976154) */
/* WARNING: Removing unreachable block (ram,0x000161e13587) */
/* WARNING: Removing unreachable block (ram,0x00016597619b) */
/* WARNING: Removing unreachable block (ram,0x00014d973d88) */

void FUN_14d973cec(ulonglong param_1)

{
  longlong unaff_RDI;
  
  if (-~param_1 - (~*(ulonglong *)(unaff_RDI + -0x60) + 2) <
      (~param_1 | *(ulonglong *)(unaff_RDI + -0x60)) + param_1 + 1) {
    FUN_161e134e4();
    return;
  }
  if (-1 < (longlong)(*(ulonglong *)(unaff_RDI + -0x28) & param_1)) {
    (*(code *)0x14dcaadc9)
              (param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,
               0xffffffffffffffff - (*(ulonglong *)(unaff_RDI + -0x70) & param_1) &
               (*(ulonglong *)(unaff_RDI + -0x70) | param_1),0x42863fff);
    return;
  }
  FUN_16597610c();
  return;
}



// FUNCTION 14d973ea3 FUN_14d973ea3 body=33 status=ok
// SIG undefined FUN_14d973ea3(void)

void FUN_14d973ea3(void)

{
  undefined8 uStackX_10;
  
  thunk_FUN_15b642ca5(uStackX_10);
  return;
}



// FUNCTION 14d973f42 FUN_14d973f42 body=156 status=ok
// SIG undefined FUN_14d973f42(void)

void FUN_14d973f42(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_15b5b2d59(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
  return;
}



// FUNCTION 14d973fde FUN_14d973fde body=277 status=ok
// SIG undefined FUN_14d973fde(void)

void FUN_14d973fde(void)

{
  FUN_14e04e4d6();
  return;
}



// FUNCTION 14d9742ed FUN_14d9742ed body=137 status=ok
// SIG undefined FUN_14d9742ed(void)

void FUN_14d9742ed(ulonglong param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong unaff_R13;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 *local_res20;
  
  uVar1 = *(ulonglong *)(unaff_R13 + 0x10);
  *(ulonglong *)(unaff_R13 + 0x10) = ~*(ulonglong *)(unaff_R13 + 0x10);
  *(ulonglong *)(unaff_R13 + 0x10) = *(ulonglong *)(unaff_R13 + 0x10) | param_1;
  *(ulonglong *)(unaff_R13 + 0x10) =
       ~((param_1 & ~uVar1 ^ 0xffffffffffffffff) & *(ulonglong *)(unaff_R13 + 0x10));
  pcVar2 = (code *)swi(0x2e);
  (*pcVar2)(local_res10);
  local_res20[-1] = local_res8;
  *local_res20 = unaff_retaddr;
  FUN_14da2ec92();
  return;
}



// FUNCTION 14d97437a FUN_14d97437a body=135 status=ok
// SIG undefined FUN_14d97437a(void)

/* WARNING: Removing unreachable block (ram,0x00014d974402) */

void FUN_14d97437a(undefined8 param_1,undefined8 param_2,ushort *param_3)

{
  ushort uVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 in_R11;
  short unaff_R13W;
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
  ulonglong uVar18;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  ulonglong uStackX_18;
  longlong *local_res20;
  
  uVar1 = *param_3;
  *param_3 = 0;
  *param_3 = *param_3 + ((~(unaff_R13W + 0x2966U) | uVar1) - 0x100);
  bVar13 = (uStackX_18 & 0x4000) != 0;
  bVar12 = (uStackX_18 & 0x800) != 0;
  bVar11 = (uStackX_18 & 0x200) != 0;
  bVar10 = (uStackX_18 & 0x100) != 0;
  bVar9 = (uStackX_18 & 0x80) != 0;
  bVar8 = (uStackX_18 & 0x40) != 0;
  bVar7 = (uStackX_18 & 0x10) != 0;
  bVar6 = (uStackX_18 & 4) != 0;
  bVar5 = (uStackX_18 & 1) != 0;
  bVar17 = (uStackX_18 & 0x200000) != 0;
  bVar14 = (uStackX_18 & 0x40000) != 0;
  bVar16 = 0;
  bVar15 = 0;
  pcVar2 = (code *)swi(0x2e);
  uVar4 = (*pcVar2)(param_1,param_2,uStackX_8,unaff_retaddr);
  *local_res20 = unaff_RBX;
  local_res20[-1] = unaff_RBX;
  local_res20[-2] =
       (ulonglong)(bVar13 & 1) * 0x4000 | (ulonglong)(bVar12 & 1) * 0x800 |
       (ulonglong)((uStackX_18 & 0x400) != 0) * 0x400 | (ulonglong)(bVar11 & 1) * 0x200 |
       (ulonglong)(bVar10 & 1) * 0x100 | (ulonglong)(bVar9 & 1) * 0x80 |
       (ulonglong)(bVar8 & 1) * 0x40 | (ulonglong)(bVar7 & 1) * 0x10 | (ulonglong)(bVar6 & 1) * 4 |
       (ulonglong)(bVar5 & 1) | (ulonglong)(bVar17 & 1) * 0x200000 |
       (ulonglong)(bVar16 & 1) * 0x100000 | (ulonglong)(bVar15 & 1) * 0x80000 |
       (ulonglong)(bVar14 & 1) * 0x40000;
  local_res20[-3] = uVar4;
  *(undefined4 *)(local_res20 + -3) = 0x2d26b476;
  *(undefined4 *)((longlong)local_res20 + -0x14) = 0;
  uVar3 = local_res20[-3];
  uVar18 = local_res20[-2];
  local_res20[-2] =
       (ulonglong)((uVar18 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar18 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar18 & 0x400) != 0) * 0x400 | (ulonglong)((uVar18 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar18 & 0x100) != 0) * 0x100 | (ulonglong)((uVar18 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar18 & 0x40) != 0) * 0x40 | (ulonglong)((uVar18 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar18 & 4) != 0) * 4 | (ulonglong)((uVar18 & 1) != 0) |
       (ulonglong)((uVar18 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar18 & 0x40000) != 0) * 0x40000;
  local_res20[-3] = param_2;
  local_res20[-4] = in_R11;
  local_res20[-2] = unaff_RBP;
  *local_res20 = (uVar3 ^ 0x206c155b) - 0x75df9a3;
  FUN_165c7153c(param_1,local_res20[-3]);
  return;
}



// FUNCTION 14d974402 FUN_14d974402 body=28 status=ok
// SIG undefined FUN_14d974402(void)

void FUN_14d974402(void)

{
  FUN_156f1d03f();
  return;
}



// FUNCTION 14d9744bb FUN_14d9744bb body=76 status=ok
// SIG undefined FUN_14d9744bb(void)

void FUN_14d9744bb(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14d9745de FUN_14d9745de body=128 status=ok
// SIG undefined FUN_14d9745de(void)

/* WARNING: Removing unreachable block (ram,0x00014d974654) */
/* WARNING: Removing unreachable block (ram,0x00014d97465a) */
/* WARNING: Removing unreachable block (ram,0x0001663dfc94) */

void FUN_14d9745de(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R15;
  longlong lStackX_18;
  
  FUN_156f43f10(FUN_156f43f10,param_2,lStackX_18 + unaff_R15);
  FUN_14e240c28();
  return;
}



// FUNCTION 14d974660 FUN_14d974660 body=157 status=ok
// SIG undefined FUN_14d974660(void)

/* WARNING: Removing unreachable block (ram,0x00014d9746ff) */
/* WARNING: Removing unreachable block (ram,0x00014d9746ef) */

void FUN_14d974660(void)

{
  FUN_1620ff1ba();
  return;
}



// FUNCTION 14d9746ff FUN_14d9746ff body=100 status=ok
// SIG undefined FUN_14d9746ff(void)

void FUN_14d9746ff(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  FUN_166cf2bd4(FUN_166cf2bd4,param_2,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14d974ab0 FUN_14d974ab0 body=206 status=ok
// SIG undefined FUN_14d974ab0(void)

/* WARNING: Removing unreachable block (ram,0x000162f29bbe) */
/* WARNING: Removing unreachable block (ram,0x000162f29bc9) */
/* WARNING: Removing unreachable block (ram,0x0001624c8af7) */
/* WARNING: Removing unreachable block (ram,0x0001624c8afd) */
/* WARNING: Removing unreachable block (ram,0x0001624c8b9b) */
/* WARNING: Removing unreachable block (ram,0x0001624c8ba1) */
/* WARNING: Removing unreachable block (ram,0x000162745852) */
/* WARNING: Removing unreachable block (ram,0x0001627458d6) */
/* WARNING: Removing unreachable block (ram,0x0001627458e1) */
/* WARNING: Removing unreachable block (ram,0x0001627458e7) */
/* WARNING: Removing unreachable block (ram,0x00016274597c) */
/* WARNING: Removing unreachable block (ram,0x00016638f957) */
/* WARNING: Removing unreachable block (ram,0x000162745981) */
/* WARNING: Removing unreachable block (ram,0x000162745987) */
/* WARNING: Removing unreachable block (ram,0x00016274598c) */
/* WARNING: Removing unreachable block (ram,0x0001627459c7) */
/* WARNING: Removing unreachable block (ram,0x0001627459ca) */
/* WARNING: Removing unreachable block (ram,0x000162f29bc4) */
/* WARNING: Removing unreachable block (ram,0x00014d974b55) */

void FUN_14d974ab0(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x58) ^ 0xffffffffffffffff;
  uVar1 = (uVar1 + in_RAX) - (uVar1 & in_RAX);
  FUN_165f56bc8(~((~uVar1 | 0xffffffffffffffff - in_RAX | *(ulonglong *)(unaff_R12 + -0x58)) + uVar1
                 + 1),~((0xffffffffffffffff - in_RAX | *(ulonglong *)(unaff_R12 + -0x78)) &
                       (*(ulonglong *)(unaff_R12 + -0x78) ^ 0xffffffffffffffff | in_RAX)),
                ~(*(ulonglong *)(unaff_R12 + -0x80) & in_RAX) &
                (*(ulonglong *)(unaff_R12 + -0x80) | in_RAX));
  FUN_14d7c0f55();
  return;
}



// FUNCTION 14d974bee FUN_14d974bee body=91 status=ok
// SIG undefined FUN_14d974bee(void)

void FUN_14d974bee(void)

{
  return;
}



// FUNCTION 14d974ca4 FUN_14d974ca4 body=1096 status=ok
// SIG undefined FUN_14d974ca4(void)

/* WARNING: Removing unreachable block (ram,0x00014d974d3e) */
/* WARNING: Removing unreachable block (ram,0x00014d974d44) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d974ca4(undefined8 param_1)

{
  undefined1 uStack000000000000011e;
  
  uStack000000000000011e = 0;
  FUN_1656ad19a(param_1);
  return;
}



// FUNCTION 14d974f27 FUN_14d974f27 body=237 status=ok
// SIG undefined FUN_14d974f27(void)

void FUN_14d974f27(void)

{
  FUN_1618994e2();
  return;
}



// FUNCTION 14d975077 FUN_14d975077 body=100 status=ok
// SIG undefined FUN_14d975077(void)

undefined8 FUN_14d975077(void)

{
  ulonglong *puVar1;
  undefined8 in_RAX;
  longlong unaff_R14;
  ulonglong local_res18 [2];
  
  puVar1 = (ulonglong *)((longlong)local_res18 + unaff_R14);
  *puVar1 = 0x74f7d8ec;
  *puVar1 = *puVar1 ^ 0x75c9e9f6;
  return in_RAX;
}



// FUNCTION 14d9750fc FUN_14d9750fc body=142 status=ok
// SIG undefined FUN_14d9750fc(void)

/* WARNING: Removing unreachable block (ram,0x0001564b1231) */
/* WARNING: Removing unreachable block (ram,0x0001564b123c) */
/* WARNING: Removing unreachable block (ram,0x0001564b1288) */
/* WARNING: Removing unreachable block (ram,0x0001564b128c) */
/* WARNING: Removing unreachable block (ram,0x00015690921c) */
/* WARNING: Removing unreachable block (ram,0x000156909216) */
/* WARNING: Removing unreachable block (ram,0x000156909227) */
/* WARNING: Removing unreachable block (ram,0x0001569092c4) */
/* WARNING: Removing unreachable block (ram,0x00016572df98) */
/* WARNING: Removing unreachable block (ram,0x00016572df9e) */
/* WARNING: Removing unreachable block (ram,0x00016572dfa3) */
/* WARNING: Removing unreachable block (ram,0x0001569092c9) */
/* WARNING: Removing unreachable block (ram,0x0001569092da) */
/* WARNING: Removing unreachable block (ram,0x000156909360) */
/* WARNING: Removing unreachable block (ram,0x000156909365) */
/* WARNING: Removing unreachable block (ram,0x00015690936b) */
/* WARNING: Removing unreachable block (ram,0x00016572df0e) */
/* WARNING: Removing unreachable block (ram,0x000165f8e535) */
/* WARNING: Removing unreachable block (ram,0x00014d92f68d) */
/* WARNING: Removing unreachable block (ram,0x000165f8e5e2) */
/* WARNING: Removing unreachable block (ram,0x000165f8e5e8) */
/* WARNING: Removing unreachable block (ram,0x0001569092cf) */
/* WARNING: Removing unreachable block (ram,0x0001564b1237) */
/* WARNING: Removing unreachable block (ram,0x00014d97518b) */
/* WARNING: Removing unreachable block (ram,0x00014d9751a1) */
/* WARNING: Removing unreachable block (ram,0x00014d9751a4) */

undefined8 FUN_14d9750fc(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}


