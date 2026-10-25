// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14db5a404 FUN_14db5a404 body=138 status=ok
// SIG undefined FUN_14db5a404(void)

void FUN_14db5a404(void)

{
  return;
}



// FUNCTION 14db5a533 FUN_14db5a533 body=124 status=ok
// SIG undefined FUN_14db5a533(void)

void FUN_14db5a533(void)

{
  longlong unaff_RBP;
  
  *(undefined4 *)(unaff_RBP + 0x138) = 0;
  *(undefined4 *)(unaff_RBP + 0x138) = *(undefined4 *)(unaff_RBP + 0x138);
  *(undefined4 *)(unaff_RBP + 0x138) = *(undefined4 *)(unaff_RBP + 0x138);
  (*(code *)0x1629ce383)();
  return;
}



// FUNCTION 14db5a9d1 FUN_14db5a9d1 body=178 status=ok
// SIG undefined FUN_14db5a9d1(void)

void FUN_14db5a9d1(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 local_res10;
  
  FUN_156a02787(param_1,param_2,param_3,local_res10,param_4 ^ param_1);
  return;
}



// FUNCTION 14db5ac30 FUN_14db5ac30 body=113 status=ok
// SIG undefined FUN_14db5ac30(void)

void FUN_14db5ac30(void)

{
  return;
}



// FUNCTION 14db5afe7 FUN_14db5afe7 body=328 status=ok
// SIG undefined FUN_14db5afe7(void)

/* WARNING: Removing unreachable block (ram,0x00014db5b094) */

void FUN_14db5afe7(undefined8 param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong in_RAX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 local_res18;
  
  uVar2 = local_res18 ^ in_RAX;
  *(undefined8 *)(uVar2 - 8) = unaff_RDI;
  *(undefined8 *)(uVar2 - 0x10) = param_1;
  *(undefined8 *)(uVar2 - 0x18) = param_1;
  *(undefined8 *)(uVar2 - 0x20) = unaff_RSI;
  *(undefined8 *)(uVar2 - 0x28) = unaff_R14;
  uVar3 = *(undefined8 *)(uVar2 - 0x28);
  *(undefined8 *)(uVar2 - 0x10) = *(undefined8 *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 8) = 0;
  *(undefined8 *)(uVar2 - 0x18) = uVar3;
  *(undefined8 *)(uVar2 - 0x20) = unaff_RBP;
  *(ulonglong *)(uVar2 - 8) = ~*(ulonglong *)(uVar2 - 8);
  *(longlong *)(uVar2 - 8) = *(longlong *)(uVar2 - 8) + 2;
  plVar1 = (longlong *)(uVar2 - 8);
  *plVar1 = -*plVar1;
  if (*plVar1 == 0) {
    FUN_15658b3d4();
    return;
  }
  *(longlong *)(uVar2 - 8) = *(longlong *)(uVar2 - 8) + 0x15658b428;
  *(undefined8 *)(uVar2 - 0x10) = unaff_R13;
  *(undefined8 *)(uVar2 - 0x18) = unaff_R13;
  *(undefined8 *)(uVar2 - 0x10) = 0x14d7a95de;
  return;
}



// FUNCTION 14db5b131 FUN_14db5b131 body=163 status=ok
// SIG undefined FUN_14db5b131(void)

void FUN_14db5b131(void)

{
  return;
}



// FUNCTION 14db5b279 FUN_14db5b279 body=296 status=ok
// SIG undefined FUN_14db5b279(void)

/* WARNING: Removing unreachable block (ram,0x00014db5b39c) */
/* WARNING: Removing unreachable block (ram,0x00014db5b3a2) */
/* WARNING: Removing unreachable block (ram,0x00014db5b4b8) */
/* WARNING: Removing unreachable block (ram,0x00014db5b4bc) */

void FUN_14db5b279(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  ulonglong param_5,undefined8 param_6,undefined8 param_7)

{
  ulonglong in_R11;
  ulonglong unaff_R12;
  ulonglong uVar1;
  longlong in_stack_00000008;
  undefined8 local_res10;
  ulonglong uStackX_20;
  
  *(ulonglong *)(param_3 + 0x10) = ~*(ulonglong *)(param_3 + 0x10);
  *(ulonglong *)(param_3 + 0x10) = unaff_R12 & *(ulonglong *)(param_3 + 0x10) ^ 0xffffffffffffffff;
  FUN_1657a7f0c(param_1,FUN_1657a7f0c,local_res10);
  FUN_1664ed753(~(*(ulonglong *)(in_stack_00000008 + -0x78) & uStackX_20) &
                (*(ulonglong *)(in_stack_00000008 + -0x78) | uStackX_20),
                *(ulonglong *)(in_stack_00000008 + -0x28) + uStackX_20 +
                (*(ulonglong *)(in_stack_00000008 + -0x28) & uStackX_20) * -2);
  uVar1 = in_R11 ^ 0xffffffffffffffff;
  *(undefined8 *)((longlong)&param_7 + uVar1) = 0x374d93a2;
  *(ulonglong *)((longlong)&param_7 + uVar1) =
       *(ulonglong *)((longlong)&param_7 + uVar1) ^ 0x374d93a2;
  *(ulonglong *)((longlong)&param_7 + uVar1) = *(ulonglong *)((longlong)&param_7 + uVar1) ^ param_5;
  return;
}



// FUNCTION 14db5b3a2 FUN_14db5b3a2 body=737 status=ok
// SIG undefined FUN_14db5b3a2(void)

/* WARNING: Removing unreachable block (ram,0x00014db5b4b8) */

void FUN_14db5b3a2(undefined8 param_1,longlong param_2)

{
  longlong unaff_R13;
  undefined1 local_res20;
  
  FUN_1664e572c(local_res20,-param_2,FUN_1664e572c,~*(ulonglong *)(unaff_R13 + -0x60));
  (*(code *)0x161710043)();
  return;
}



// FUNCTION 14db5b4cb FUN_14db5b4cb body=159 status=ok
// SIG undefined FUN_14db5b4cb(void)

void FUN_14db5b4cb(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_1574ccc29(param_1,param_2,~param_1 | *(ulonglong *)(unaff_RDI + -0x60),
                ~*(ulonglong *)(unaff_RDI + -0x60) | param_1);
  return;
}



// FUNCTION 14db5b6a4 FUN_14db5b6a4 body=125 status=ok
// SIG undefined FUN_14db5b6a4(void)

undefined8 FUN_14db5b6a4(char param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 in_RAX;
  undefined8 in_R11;
  undefined8 unaff_R12;
  longlong local_res10;
  
  LOCK();
  cVar3 = param_1;
  if ((char)in_RAX != DAT_14d7bde75) {
    in_RAX = CONCAT71((int7)((ulonglong)in_RAX >> 8),DAT_14d7bde75);
    cVar3 = DAT_14d7bde75;
  }
  DAT_14d7bde75 = cVar3;
  UNLOCK();
  *(undefined8 *)(local_res10 + -8) = param_3;
  *(undefined8 *)(local_res10 + -0x10) = param_3;
  puVar1 = (undefined8 *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x20) = in_R11;
  *(undefined4 *)(local_res10 + -0x28) = 0xa1f6a07;
  *(undefined4 *)puVar1 = *(undefined4 *)(local_res10 + -0x28);
  *(undefined8 *)(local_res10 + -0x20) = in_RAX;
  *(undefined4 *)(local_res10 + -0x14) = 0;
  uVar2 = *(undefined8 *)(local_res10 + -0x20);
  *puVar1 = unaff_R12;
  *(undefined8 *)(local_res10 + -0x20) = unaff_R12;
  *puVar1 = &LAB_16243ed91;
  *(undefined1 **)(local_res10 + -0x28) = &LAB_16243ed8d;
  return uVar2;
}



// FUNCTION 14db5b723 FUN_14db5b723 body=395 status=ok
// SIG undefined FUN_14db5b723(void)

/* WARNING: Removing unreachable block (ram,0x00014db5b72c) */

void FUN_14db5b723(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar3 = *(ulonglong *)(unaff_R13 + -0x48) + unaff_R15;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),0x1a) ^ 0x72;
  uVar2 = (*(ulonglong *)(unaff_R13 + -0x48) & unaff_R15) << ((char)uVar4 + 0x99U & 0x3f);
  uVar1 = *(ulonglong *)(unaff_R13 + -0x78);
  if ((uVar3 < uVar2) && (uVar2 < uVar3)) {
    uVar3 = ~uVar1 | *(ulonglong *)(uVar4 - 0x60);
    uVar5 = *(ulonglong *)(uVar4 - 0x60) ^ 0xffffffffffffffff | uVar1;
    uVar2 = uVar1 ^ 0xffffffffffffffff | *(ulonglong *)(uVar4 - 0x70);
    uVar4 = ~*(ulonglong *)(uVar4 - 0x70) | uVar1;
    FUN_166779e54(uVar1,(uVar4 - (uVar2 | uVar4)) + uVar2,FUN_166779e54,
                  ~((uVar5 - (uVar3 | uVar5)) + uVar3));
    FUN_1617d7469();
    return;
  }
  FUN_15b796ae7(0xffffffffffffffff - (uVar1 & unaff_R15) & (uVar1 | unaff_R15),
                ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) + unaff_R15 + 1) &
                (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15));
  return;
}



// FUNCTION 14db5ba67 FUN_14db5ba67 body=111 status=ok
// SIG undefined FUN_14db5ba67(void)

/* WARNING: Removing unreachable block (ram,0x00014db5bac3) */
/* WARNING: Removing unreachable block (ram,0x00014db5bac9) */
/* WARNING: Removing unreachable block (ram,0x000156501346) */

undefined8 FUN_14db5ba67(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_156501346();
  return uVar1;
}



// FUNCTION 14db5bf5c FUN_14db5bf5c body=131 status=ok
// SIG undefined FUN_14db5bf5c(void)

void FUN_14db5bf5c(void)

{
  return;
}



// FUNCTION 14db5c34e FUN_14db5c34e body=175 status=ok
// SIG undefined FUN_14db5c34e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14db5c34e(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong unaff_RDI;
  
  FUN_16214d3b7(param_1,~(*(ulonglong *)(unaff_RDI + -0x68) & param_1),param_3 ^ param_1);
  _FUN_16214d3b7 = -_FUN_16214d3b7;
  return;
}



// FUNCTION 14db5c5c6 FUN_14db5c5c6 body=114 status=ok
// SIG undefined FUN_14db5c5c6(void)

void FUN_14db5c5c6(undefined8 param_1)

{
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 local_res10;
  
  (*(code *)0x162e4c199)
            (param_1,unaff_retaddr,
             (~(local_res10 | unaff_R15) | ~(local_res10 & unaff_R15)) + (local_res10 | unaff_R15));
  return;
}



// FUNCTION 14db5c64f FUN_14db5c64f body=74 status=ok
// SIG undefined FUN_14db5c64f(void)

undefined8 FUN_14db5c64f(void)

{
  undefined8 uStackX_10;
  
  return uStackX_10;
}



// FUNCTION 14db5c7b1 FUN_14db5c7b1 body=597 status=ok
// SIG undefined FUN_14db5c7b1(void)

/* WARNING: Removing unreachable block (ram,0x00014db5c973) */
/* WARNING: Removing unreachable block (ram,0x00014db5c979) */
/* WARNING: Removing unreachable block (ram,0x00014e0ae13f) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong FUN_14db5c7b1(ulonglong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong unaff_RDI;
  ulonglong uVar7;
  longlong unaff_R13;
  ulonglong uVar8;
  ulonglong unaff_R15;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  
  *(undefined1 *)(param_1 + 5 + param_3) = *(undefined1 *)(param_2 + 5 + param_3);
  *(undefined1 *)(param_1 + 6 + param_3) = *(undefined1 *)(param_2 + 6 + param_3);
  bVar1 = *(byte *)(param_2 + 7 + param_3);
  uVar7 = (ulonglong)bVar1;
  *(byte *)(param_1 + 7 + param_3) = bVar1;
  uVar2 = param_3 + 8;
  uVar8 = param_4 - uVar2;
  lVar5 = FUN_15b74be1f(param_1,param_2,
                        CONCAT62((int6)(uVar2 >> 0x10),
                                 (ushort)(in_NT & 1) * 0x4000 |
                                 (ushort)SBORROW8(param_4,uVar2) * 0x800 |
                                 (ushort)(in_IF & 1) * 0x200 | (ushort)(in_TF & 1) * 0x100 |
                                 (ushort)((longlong)uVar8 < 0) * 0x80 | (ushort)(uVar8 == 0) * 0x40
                                 | (ushort)(in_AF & 1) * 0x10 |
                                 (ushort)((POPCOUNT(uVar8 & 0xff) & 1U) == 0) * 4 |
                                 (ushort)(param_4 < uVar2)));
  uVar2 = *(ulonglong *)(unaff_RDI + -0x68);
  uVar8 = *(ulonglong *)(unaff_RDI + -0x48);
  *(ulonglong *)(&stack0xfffffffffe411cf3 + param_2) = param_1;
  lVar3 = *(longlong *)(&stack0xfffffffffe411cf3 + param_2);
  *(ulonglong *)(&stack0xfffffffffe411cf3 + param_2) = uVar8 + param_1 + (uVar8 & param_1) * -2;
  lVar6 = *(longlong *)(unaff_RDI + -0x88);
  *(longlong *)(&stack0xfffffffffe411cf3 + param_2) = unaff_RDI;
  bVar4 = lVar6 != 0;
  *(ulonglong *)(&stack0xfffffffffe411ceb + param_2) = param_4;
  *(ulonglong *)(&stack0xfffffffffe411ce3 + param_2) = uVar7;
  if (bVar4 || lVar3 != 0) {
    *(longlong *)(&stack0xfffffffffe411ceb + param_2) = lVar3;
    *(longlong *)(&stack0xfffffffffe411ce3 + param_2) = lVar3;
    *(undefined1 **)(&stack0xfffffffffe411ceb + param_2) = &LAB_1623a5637;
    return lVar5;
  }
  if (!bVar4 && lVar3 == 0) {
    lVar6 = FUN_1623a55fe(lVar3,uVar2 ^ param_1);
    return lVar6;
  }
  *(undefined8 *)(&stack0xfffffffffe411ce3 + param_2) = *(undefined8 *)(unaff_R13 + -0x80);
  *(undefined8 *)(&stack0xfffffffffe411ce3 + param_2) = *(undefined8 *)(unaff_R13 + -0x90);
  *(ulonglong *)(&stack0xfffffffffe411cdb + param_2) = *(ulonglong *)(unaff_R13 + -0x38);
  *(ulonglong *)(&stack0xfffffffffe411ce3 + param_2) =
       *(ulonglong *)(&stack0xfffffffffe411cdb + param_2);
  uVar2 = *(ulonglong *)(&stack0xfffffffffe411ce3 + param_2);
  *(undefined1 **)(&stack0xfffffffffe411ce3 + param_2) = &LAB_156df4b97;
  return uVar2 + unaff_R15 + (uVar2 & unaff_R15) * -2;
}



// FUNCTION 14db5ca63 FUN_14db5ca63 body=144 status=ok
// SIG undefined FUN_14db5ca63(void)

void FUN_14db5ca63(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  (*(code *)0x156867162)
            (*(ulonglong *)(unaff_RSI + -0x38) ^ unaff_RBP,0,*(undefined8 *)(unaff_RSI + -0x58));
  return;
}



// FUNCTION 14db5caf4 FUN_14db5caf4 body=118 status=ok
// SIG undefined FUN_14db5caf4(void)

void FUN_14db5caf4(void)

{
  longlong unaff_R12;
  
  (*(code *)0x14e1609ac)(*(undefined8 *)(unaff_R12 + -0x68));
  return;
}



// FUNCTION 14db5cb6c FUN_14db5cb6c body=152 status=ok
// SIG undefined FUN_14db5cb6c(void)

void FUN_14db5cb6c(void)

{
  FUN_160edd131();
  return;
}



// FUNCTION 14db5cc08 FUN_14db5cc08 body=136 status=ok
// SIG undefined FUN_14db5cc08(void)

void FUN_14db5cc08(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  ulonglong unaff_retaddr;
  
  FUN_160c8faec(in_RAX ^ unaff_retaddr,
                ~(~(*(ulonglong *)(unaff_R12 + -0x78) & unaff_retaddr ^ 0xffffffffffffffff) |
                 ~*(ulonglong *)(unaff_R12 + -0x78) & ~unaff_retaddr));
  return;
}



// FUNCTION 14db5cc90 thunk_FUN_14db5cc96 body=5 status=ok
// SIG undefined thunk_FUN_14db5cc96(void)

/* WARNING: Removing unreachable block (ram,0x00014db5cf9f) */
/* WARNING: Removing unreachable block (ram,0x00014db5cfaa) */
/* WARNING: Removing unreachable block (ram,0x00014db5cfa5) */

void thunk_FUN_14db5cc96(void)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong uVar7;
  undefined8 in_R10;
  ulonglong uVar8;
  undefined8 unaff_R12;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong uVar9;
  undefined8 unaff_R15;
  ulonglong *puStackX_10;
  
  uVar2 = *(undefined8 *)(unaff_RSI - 0x58);
  uVar5 = uVar2;
  FUN_1620e8b96(*(ulonglong *)(unaff_RSI - 0x38) ^ unaff_RBP);
  puStackX_10[-1] = in_R10;
  puStackX_10[-2] = unaff_R14;
  puVar1 = puStackX_10 + -3;
  *puVar1 = 0;
  *puVar1 = *puVar1;
  *(uint *)puVar1 = 0;
  *(uint *)puVar1 = (uint)*puVar1 ^ 0x594adcb6;
  puStackX_10[-4] = unaff_R15;
  uVar4 = *puVar1;
  *(uint *)puVar1 = (uint)*puVar1 | 0xa6b52349;
  *(uint *)puVar1 = ~(~((uint)uVar4 & 0xa6b52349) & (uint)*puVar1);
  uVar3 = puStackX_10[-4];
  puStackX_10[-3] = unaff_R12;
  puStackX_10[-4] = uVar2;
  uVar2 = puStackX_10[-4];
  puStackX_10[-4] = (ulonglong)FUN_1620e8b96;
  puStackX_10[-4] = 0x14db5cdbf;
  FUN_16298ac1f(uVar2);
  *(undefined4 *)((longlong)puStackX_10 + -0xc) = 0;
  *(undefined4 *)((longlong)puStackX_10 + -0xc) = *(undefined4 *)((longlong)puStackX_10 + -0xc);
  uVar9 = puStackX_10[-2] + *(longlong *)(unaff_R13 + -0x58) ^ uVar3;
  uVar4 = *(ulonglong *)(unaff_R13 + -0x90) | uVar3;
  uVar8 = ~(*(ulonglong *)(unaff_R13 + -0x90) & uVar3) & uVar4;
  puStackX_10[-2] = uVar4;
  *(undefined4 *)(puStackX_10 + -2) = 0xe96dbb4e;
  *(undefined4 *)((longlong)puStackX_10 + -0xc) = 0xd7d5a978;
  *(uint *)((longlong)puStackX_10 + -0xc) = *(uint *)((longlong)puStackX_10 + -0xc) ^ 0x282a5687;
  uVar6 = puStackX_10[-2] ^ 0x169244ee;
  puStackX_10[-2] = *(undefined8 *)(unaff_R13 + uVar6);
  puStackX_10[-2] = uVar4;
  puStackX_10[-3] = unaff_RSI;
  uVar7 = *(ulonglong *)(unaff_R13 + -0x88) ^ uVar3;
  puStackX_10[-2] = 0x14db5ce66;
  FUN_15b24ce1c();
  puStackX_10[1] = *(undefined8 *)(unaff_R13 + (*puStackX_10 ^ 0x5c1f3f4e));
  puStackX_10[1] = unaff_R13;
  puStackX_10[1] = uVar5;
  puStackX_10[-1] = 0x14db5cf0e;
  uVar5 = FUN_162860255();
  puStackX_10[-1] = *(undefined8 *)(uVar8 - 0x50);
  puStackX_10[-1] = *(undefined8 *)(uVar8 - 0x48);
  uVar4 = puStackX_10[-1];
  puStackX_10[-1] = uVar7;
  uVar2 = puStackX_10[-1];
  puStackX_10[-1] = uVar5;
  puStackX_10[-1] = uVar2;
  puStackX_10[-1] = ~(~(~(~uVar4 | ~uVar6) ^ 0xffffffffffffffff) | ~(uVar4 | uVar6));
  puStackX_10[-2] = uVar3;
  puStackX_10[-2] = uVar9;
  puStackX_10[-3] = uVar9;
  puStackX_10[-2] = (ulonglong)&DAT_160c36d4d;
  FUN_160c36d49();
  return;
}



// FUNCTION 14db5cc96 FUN_14db5cc96 body=838 status=ok
// SIG undefined FUN_14db5cc96(void)

/* WARNING: Removing unreachable block (ram,0x00014db5cf9f) */
/* WARNING: Removing unreachable block (ram,0x00014db5cfaa) */
/* WARNING: Removing unreachable block (ram,0x00014db5cfa5) */

void FUN_14db5cc96(void)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong uVar7;
  undefined8 in_R10;
  ulonglong uVar8;
  undefined8 unaff_R12;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong uVar9;
  undefined8 unaff_R15;
  ulonglong *local_res10;
  
  uVar2 = *(undefined8 *)(unaff_RSI - 0x58);
  uVar5 = uVar2;
  FUN_1620e8b96(*(ulonglong *)(unaff_RSI - 0x38) ^ unaff_RBP);
  local_res10[-1] = in_R10;
  local_res10[-2] = unaff_R14;
  puVar1 = local_res10 + -3;
  *puVar1 = 0;
  *puVar1 = *puVar1;
  *(uint *)puVar1 = 0;
  *(uint *)puVar1 = (uint)*puVar1 ^ 0x594adcb6;
  local_res10[-4] = unaff_R15;
  uVar4 = *puVar1;
  *(uint *)puVar1 = (uint)*puVar1 | 0xa6b52349;
  *(uint *)puVar1 = ~(~((uint)uVar4 & 0xa6b52349) & (uint)*puVar1);
  uVar3 = local_res10[-4];
  local_res10[-3] = unaff_R12;
  local_res10[-4] = uVar2;
  uVar2 = local_res10[-4];
  local_res10[-4] = (ulonglong)FUN_1620e8b96;
  local_res10[-4] = 0x14db5cdbf;
  FUN_16298ac1f(uVar2);
  *(undefined4 *)((longlong)local_res10 + -0xc) = 0;
  *(undefined4 *)((longlong)local_res10 + -0xc) = *(undefined4 *)((longlong)local_res10 + -0xc);
  uVar9 = local_res10[-2] + *(longlong *)(unaff_R13 + -0x58) ^ uVar3;
  uVar4 = *(ulonglong *)(unaff_R13 + -0x90) | uVar3;
  uVar8 = ~(*(ulonglong *)(unaff_R13 + -0x90) & uVar3) & uVar4;
  local_res10[-2] = uVar4;
  *(undefined4 *)(local_res10 + -2) = 0xe96dbb4e;
  *(undefined4 *)((longlong)local_res10 + -0xc) = 0xd7d5a978;
  *(uint *)((longlong)local_res10 + -0xc) = *(uint *)((longlong)local_res10 + -0xc) ^ 0x282a5687;
  uVar6 = local_res10[-2] ^ 0x169244ee;
  local_res10[-2] = *(undefined8 *)(unaff_R13 + uVar6);
  local_res10[-2] = uVar4;
  local_res10[-3] = unaff_RSI;
  uVar7 = *(ulonglong *)(unaff_R13 + -0x88) ^ uVar3;
  local_res10[-2] = 0x14db5ce66;
  FUN_15b24ce1c();
  local_res10[1] = *(undefined8 *)(unaff_R13 + (*local_res10 ^ 0x5c1f3f4e));
  local_res10[1] = unaff_R13;
  local_res10[1] = uVar5;
  local_res10[-1] = 0x14db5cf0e;
  uVar5 = FUN_162860255();
  local_res10[-1] = *(undefined8 *)(uVar8 - 0x50);
  local_res10[-1] = *(undefined8 *)(uVar8 - 0x48);
  uVar4 = local_res10[-1];
  local_res10[-1] = uVar7;
  uVar2 = local_res10[-1];
  local_res10[-1] = uVar5;
  local_res10[-1] = uVar2;
  local_res10[-1] = ~(~(~(~uVar4 | ~uVar6) ^ 0xffffffffffffffff) | ~(uVar4 | uVar6));
  local_res10[-2] = uVar3;
  local_res10[-2] = uVar9;
  local_res10[-3] = uVar9;
  local_res10[-2] = (ulonglong)&DAT_160c36d4d;
  FUN_160c36d49();
  return;
}



// FUNCTION 14db5d049 FUN_14db5d049 body=355 status=ok
// SIG undefined FUN_14db5d049(void)

/* WARNING: Removing unreachable block (ram,0x00014db5d0e9) */

void FUN_14db5d049(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 in_RAX;
  ushort uVar3;
  undefined8 unaff_RBX;
  ulonglong unaff_RSI;
  ulonglong uVar4;
  ulonglong local_res8;
  longlong local_res10;
  
  uVar3 = ~(~(~(ushort)local_res8 & 0x100) & ~(ushort)local_res8) - 0x100;
  *(undefined8 *)(local_res10 + -8) = unaff_RBX;
  *(undefined8 *)(local_res10 + -0x10) = unaff_RBX;
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((local_res8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((local_res8 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res10 + -0x20) = param_2;
  *(undefined8 *)(local_res10 + -0x28) = in_RAX;
  *(undefined4 *)(local_res10 + -0x28) = 0x3d59310e;
  *(undefined4 *)(local_res10 + -0x24) = 0;
  uVar2 = *(ulonglong *)(local_res10 + -0x28);
  uVar1 = *(undefined8 *)(local_res10 + -0x20);
  uVar4 = *(ulonglong *)(local_res10 + -0x18);
  *(ulonglong *)(local_res10 + -0x18) = unaff_RSI;
  *(ulonglong *)(local_res10 + -0x20) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)((uVar4 & 1) != 0) |
       (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res10 + -0x28) = param_3;
  *(ulonglong *)(local_res10 + -8) = 0x248b096 - (uVar2 ^ 0x3c5a5804);
  FUN_15b3d5987(param_1,uVar1,*(undefined8 *)(local_res10 + -0x28),param_4);
  return;
}



// FUNCTION 14db5d331 FUN_14db5d331 body=1584 status=ok
// SIG undefined FUN_14db5d331(void)

/* WARNING: Removing unreachable block (ram,0x000166a943d4) */
/* WARNING: Removing unreachable block (ram,0x000166a943bf) */
/* WARNING: Removing unreachable block (ram,0x000166a943cf) */
/* WARNING: Removing unreachable block (ram,0x000166a943dd) */
/* WARNING: Removing unreachable block (ram,0x00014db5d3c2) */

ulonglong FUN_14db5d331(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = ~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78);
  uVar1 = ~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15;
  uVar1 = (uVar1 - (uVar2 | uVar1)) + uVar2 ^ 0xffffffffffffffff;
  if ((uVar1 & 4) != 0) {
    uVar1 = FUN_165784834();
    return uVar1;
  }
  if (*(ulonglong *)(unaff_R13 + -0x30) + unaff_R15 <
      ((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x30)) + unaff_R15 + 1) * 2) {
    return ~(~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x38)) |
           ~(0xffffffffffffffff - *(ulonglong *)(unaff_R13 + -0x38) | unaff_R15);
  }
  uVar1 = FUN_15644d821(uVar1,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return uVar1;
}



// FUNCTION 14db5d50e FUN_14db5d50e body=147 status=ok
// SIG undefined FUN_14db5d50e(void)

/* WARNING: Removing unreachable block (ram,0x00014db5d702) */
/* WARNING: Removing unreachable block (ram,0x00014db5d708) */
/* WARNING: Removing unreachable block (ram,0x00014db5d77c) */
/* WARNING: Removing unreachable block (ram,0x00016639de99) */
/* WARNING: Removing unreachable block (ram,0x00014db5d782) */
/* WARNING: Removing unreachable block (ram,0x00015b7ee9a0) */
/* WARNING: Removing unreachable block (ram,0x00014db5d810) */
/* WARNING: Removing unreachable block (ram,0x00014db5d816) */
/* WARNING: Removing unreachable block (ram,0x00014db5d821) */
/* WARNING: Removing unreachable block (ram,0x00014db5d83d) */
/* WARNING: Removing unreachable block (ram,0x00016512f4db) */
/* WARNING: Removing unreachable block (ram,0x00014db5d64d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14db5d50e(void)

{
  undefined8 in_R11;
  ulonglong unaff_R15;
  ulonglong uStackX_18;
  
  FUN_15b9e807d();
  if (uStackX_18 + unaff_R15 + (uStackX_18 & unaff_R15) * -2 == 0) {
    _DAT_fffffffffffffff8 = &DAT_16106bef7;
    _DAT_fffffffffffffff0 = in_R11;
    thunk_FUN_15b642ca5();
    return;
  }
  FUN_16106be73();
  return;
}



// FUNCTION 14db5d5a1 FUN_14db5d5a1 body=806 status=ok
// SIG undefined FUN_14db5d5a1(void)

/* WARNING: Removing unreachable block (ram,0x00014db5d702) */
/* WARNING: Removing unreachable block (ram,0x00014db5d708) */
/* WARNING: Removing unreachable block (ram,0x00014db5d77c) */
/* WARNING: Removing unreachable block (ram,0x00016639de99) */
/* WARNING: Removing unreachable block (ram,0x00014db5d782) */
/* WARNING: Removing unreachable block (ram,0x00015b7ee9a0) */
/* WARNING: Removing unreachable block (ram,0x00014db5d810) */
/* WARNING: Removing unreachable block (ram,0x00014db5d816) */
/* WARNING: Removing unreachable block (ram,0x00014db5d821) */
/* WARNING: Removing unreachable block (ram,0x00014db5d83d) */
/* WARNING: Removing unreachable block (ram,0x00016512f4db) */
/* WARNING: Removing unreachable block (ram,0x00014db5d64d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14db5d5a1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_R11;
  ulonglong unaff_R15;
  ulonglong local_res18;
  
  if (local_res18 + unaff_R15 + (local_res18 & unaff_R15) * -2 == 0) {
    _DAT_fffffffffffffff8 = &DAT_16106bef7;
    _DAT_fffffffffffffff0 = in_R11;
    thunk_FUN_15b642ca5(param_1,param_2,param_3);
    return;
  }
  FUN_16106be73();
  return;
}



// FUNCTION 14db5d821 FUN_14db5d821 body=145 status=ok
// SIG undefined FUN_14db5d821(void)

void FUN_14db5d821(void)

{
  return;
}



// FUNCTION 14db5dc91 FUN_14db5dc91 body=42 status=ok
// SIG undefined FUN_14db5dc91(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7aa18b) overlaps instruction at (ram,0x00014d7aa18a)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7aa19b) */
/* WARNING: Removing unreachable block (ram,0x00014d7aa19d) */

void FUN_14db5dc91(uint param_1,longlong param_2,ulonglong param_3)

{
  undefined4 in_EAX;
  ulonglong unaff_RDI;
  longlong lStackX_10;
  longlong alStackX_18 [2];
  
  *(undefined8 *)((longlong)alStackX_18 + unaff_RDI + param_3 + (unaff_RDI & param_3) * -2) = 0;
  if (SCARRY8(alStackX_18[1],lStackX_10) != alStackX_18[1] + lStackX_10 < 0) {
    *(uint *)(param_2 + -0x49) = *(uint *)(param_2 + -0x49) ^ param_1;
    out(0x2e,in_EAX);
    in((short)param_2);
  }
  *(char *)(param_2 + 0x28783c4c) =
       *(char *)(param_2 + 0x28783c4c) + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14db5dcd7 FUN_14db5dcd7 body=83 status=ok
// SIG undefined FUN_14db5dcd7(void)

void FUN_14db5dcd7(void)

{
  return;
}



// FUNCTION 14db5e073 FUN_14db5e073 body=301 status=ok
// SIG undefined FUN_14db5e073(void)

void FUN_14db5e073(undefined8 param_1,undefined8 param_2)

{
  (*(code *)0x162e00350)(param_1,param_2);
  return;
}



// FUNCTION 14db5e314 FUN_14db5e314 body=129 status=ok
// SIG undefined FUN_14db5e314(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db5e314(undefined8 param_1,int param_2,uint param_3)

{
  longlong unaff_RBP;
  uint unaff_R14D;
  
  FUN_160c917a9();
  thunk_FUN_160cbbfd1(param_1,param_2 + *(int *)(unaff_RBP + 0xf0) + (param_3 ^ unaff_R14D));
  return;
}



// FUNCTION 14db5e395 FUN_14db5e395 body=153 status=ok
// SIG undefined FUN_14db5e395(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db5e395(undefined8 param_1,int param_2,uint param_3)

{
  longlong unaff_RBP;
  uint unaff_retaddr;
  
  thunk_FUN_160cbbfd1(param_1,param_2 + *(int *)(unaff_RBP + 0xf0) + (param_3 ^ unaff_retaddr),
                      param_3,ProcessEnvironmentBlock);
  return;
}



// FUNCTION 14db5e55e FUN_14db5e55e body=157 status=ok
// SIG undefined FUN_14db5e55e(void)

void FUN_14db5e55e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  undefined8 uVar1;
  undefined8 unaff_RDI;
  ulonglong uStackX_8;
  undefined8 local_res18;
  
  param_5 = param_5 ^ uStackX_8;
  *(undefined8 *)(param_5 - 8) = unaff_RDI;
  *(undefined8 *)(param_5 - 0x10) = param_4;
  *(undefined8 *)(param_5 - 0x18) = param_4;
  *(undefined8 *)(param_5 - 0x10) = *(undefined8 *)(param_5 - 8);
  uVar1 = *(undefined8 *)(param_5 - 0x18);
  *(undefined8 *)(param_5 - 0x18) = param_3;
  *(undefined4 *)(param_5 - 0x20) = 0x2ddf9d5d;
  FUN_1619a979e(local_res18,param_2,FUN_1619a979e,uVar1);
  return;
}



// FUNCTION 14db5e5fd FUN_14db5e5fd body=110 status=ok
// SIG undefined FUN_14db5e5fd(void)

char FUN_14db5e5fd(void)

{
  byte *pbVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  undefined8 local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_RDI;
  puVar2 = (ulonglong *)(local_res10 + -0x10);
  *puVar2 = 0;
  *puVar2 = *puVar2 ^ 0x1510ea9f5;
  *puVar2 = *puVar2 - 0x358c372;
  uVar3 = *puVar2;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -0x18) = in_R11;
  *(ulonglong *)(local_res10 + -8) = uVar3;
  *(undefined8 *)(local_res10 + -0x10) = 0xfffffffff7b1916c;
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x69);
  *pbVar1 = *pbVar1 << 1 | (char)*pbVar1 < '\0';
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AH;
  return in_AL + '@';
}



// FUNCTION 14db5e76b FUN_14db5e76b body=166 status=ok
// SIG undefined FUN_14db5e76b(void)

/* WARNING: Removing unreachable block (ram,0x0001617a025a) */
/* WARNING: Removing unreachable block (ram,0x00014db5e80b) */
/* WARNING: Removing unreachable block (ram,0x00014db5e811) */
/* WARNING: Removing unreachable block (ram,0x0001617a028e) */
/* WARNING: Removing unreachable block (ram,0x0001617a0291) */

void FUN_14db5e76b(void)

{
  FUN_1617a025a();
  return;
}



// FUNCTION 14db5e811 FUN_14db5e811 body=167 status=ok
// SIG undefined FUN_14db5e811(void)

void FUN_14db5e811(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000008;
  
  (*(code *)0x164997e56)(param_1,param_2,0x49248001,in_stack_00000008);
  return;
}



// FUNCTION 14db5e8b8 FUN_14db5e8b8 body=142 status=ok
// SIG undefined FUN_14db5e8b8(void)

void FUN_14db5e8b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_EAX;
  undefined8 unaff_R12;
  longlong local_res20;
  
  if (in_EAX == 0) {
    lVar1 = cpuid_basic_info(0);
  }
  else if (in_EAX == 1) {
    lVar1 = cpuid_Version_info(1);
  }
  else if (in_EAX == 2) {
    lVar1 = cpuid_cache_tlb_info(2);
  }
  else if (in_EAX == 3) {
    lVar1 = cpuid_serial_info(3);
  }
  else if (in_EAX == 4) {
    lVar1 = cpuid_Deterministic_Cache_Parameters_info(4);
  }
  else if (in_EAX == 5) {
    lVar1 = cpuid_MONITOR_MWAIT_Features_info(5);
  }
  else if (in_EAX == 6) {
    lVar1 = cpuid_Thermal_Power_Management_info(6);
  }
  else if (in_EAX == 7) {
    lVar1 = cpuid_Extended_Feature_Enumeration_info(7);
  }
  else if (in_EAX == 9) {
    lVar1 = cpuid_Direct_Cache_Access_info(9);
  }
  else if (in_EAX == 10) {
    lVar1 = cpuid_Architectural_Performance_Monitoring_info(10);
  }
  else if (in_EAX == 0xb) {
    lVar1 = cpuid_Extended_Topology_info(0xb);
  }
  else if (in_EAX == 0xd) {
    lVar1 = cpuid_Processor_Extended_States_info(0xd);
  }
  else if (in_EAX == 0xf) {
    lVar1 = cpuid_Quality_of_Service_info(0xf);
  }
  else if (in_EAX == -0x7ffffffe) {
    lVar1 = cpuid_brand_part1_info(0x80000002);
  }
  else if (in_EAX == -0x7ffffffd) {
    lVar1 = cpuid_brand_part2_info(0x80000003);
  }
  else if (in_EAX == -0x7ffffffc) {
    lVar1 = cpuid_brand_part3_info(0x80000004);
  }
  else {
    lVar1 = cpuid(in_EAX);
  }
  uVar2 = *(undefined4 *)(lVar1 + 8);
  uVar3 = *(undefined4 *)(lVar1 + 0xc);
  *(undefined8 *)(local_res20 + -0x10) = param_4;
  *(undefined8 *)(local_res20 + -8) = unaff_R12;
  FUN_16492b8ae(uVar3,uVar2,param_3,FUN_16492b8ae);
  return;
}



// FUNCTION 14db5e948 FUN_14db5e948 body=138 status=ok
// SIG undefined FUN_14db5e948(void)

/* WARNING: Removing unreachable block (ram,0x00014db5ea3c) */
/* WARNING: Removing unreachable block (ram,0x00014db5ea48) */
/* WARNING: Removing unreachable block (ram,0x00014db5ea57) */
/* WARNING: Removing unreachable block (ram,0x00014db5ea52) */
/* WARNING: Removing unreachable block (ram,0x00014db5ea64) */
/* WARNING: Removing unreachable block (ram,0x00014db5ea93) */
/* WARNING: Removing unreachable block (ram,0x00014db5e984) */
/* WARNING: Removing unreachable block (ram,0x00014db5ea98) */
/* WARNING: Removing unreachable block (ram,0x00014db5ea9b) */
/* WARNING: Removing unreachable block (ram,0x00014db5e9d4) */
/* WARNING: Removing unreachable block (ram,0x00014dd79ab5) */
/* WARNING: Removing unreachable block (ram,0x00014dd79ac0) */
/* WARNING: Removing unreachable block (ram,0x000162b9569d) */
/* WARNING: Removing unreachable block (ram,0x000162b957c4) */
/* WARNING: Removing unreachable block (ram,0x000162b957d5) */
/* WARNING: Removing unreachable block (ram,0x00014dd79ad2) */

void FUN_14db5e948(ulonglong param_1)

{
  longlong unaff_RDI;
  
  if ((~param_1 - (~*(ulonglong *)(unaff_RDI + -0x80) | ~param_1)) +
      ~*(ulonglong *)(unaff_RDI + -0x80) == 0) {
    FUN_15b9bcb0b();
    return;
  }
  FUN_14d95cbc4(param_1,*(undefined8 *)(unaff_RDI + -0x68));
  return;
}



// FUNCTION 14db5e9d4 FUN_14db5e9d4 body=271 status=ok
// SIG undefined FUN_14db5e9d4(void)

/* WARNING: Removing unreachable block (ram,0x00014db5ea3c) */
/* WARNING: Removing unreachable block (ram,0x00014db5ea48) */
/* WARNING: Removing unreachable block (ram,0x00014db5ea57) */
/* WARNING: Removing unreachable block (ram,0x00014db5ea52) */
/* WARNING: Removing unreachable block (ram,0x00014db5ea64) */
/* WARNING: Removing unreachable block (ram,0x00014db5ea93) */
/* WARNING: Removing unreachable block (ram,0x00014db5ea98) */
/* WARNING: Removing unreachable block (ram,0x00014db5ea9b) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x000162b956b0 */
/* WARNING: Removing unreachable block (ram,0x00014dd79ac0) */
/* WARNING: Removing unreachable block (ram,0x00014dd79ad2) */
/* WARNING: Removing unreachable block (ram,0x000162b9569d) */
/* WARNING: Removing unreachable block (ram,0x000162b957c4) */
/* WARNING: Removing unreachable block (ram,0x000162b957d5) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db5e9d4(void)

{
  FUN_162b9569d();
  return;
}



// FUNCTION 14db5eae5 FUN_14db5eae5 body=278 status=ok
// SIG undefined FUN_14db5eae5(void)

/* WARNING: Removing unreachable block (ram,0x00014db5ebfe) */
/* WARNING: Removing unreachable block (ram,0x00014db5ec87) */
/* WARNING: Removing unreachable block (ram,0x00014db5ec92) */
/* WARNING: Removing unreachable block (ram,0x00014db5ec98) */
/* WARNING: Removing unreachable block (ram,0x00014db5ec9d) */

undefined8 FUN_14db5eae5(void)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  uVar1 = FUN_156f75831();
  if (-1 < *(longlong *)(unaff_RDI + -0x98)) {
    uVar1 = FUN_164a531ac();
    return uVar1;
  }
  return uVar1;
}



// FUNCTION 14db5ebfe FUN_14db5ebfe body=152 status=ok
// SIG undefined FUN_14db5ebfe(void)

/* WARNING: Removing unreachable block (ram,0x00014db5ec9d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14db5ebfe(ulonglong param_1)

{
  undefined8 uVar1;
  ulonglong in_stack_00000020;
  
  if (-1 < (longlong)
           ((param_1 - (in_stack_00000020 | param_1)) + in_stack_00000020 |
           ~(in_stack_00000020 | param_1))) {
    uVar1 = FUN_1649d63de();
    return uVar1;
  }
  uVar1 = FUN_1649d63de();
  return uVar1;
}



// FUNCTION 14db5ec9d FUN_14db5ec9d body=354 status=ok
// SIG undefined FUN_14db5ec9d(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14db5ec9d(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1624f60a3();
  return uVar1;
}



// FUNCTION 14db5ee62 FUN_14db5ee62 body=69 status=ok
// SIG undefined FUN_14db5ee62(void)

/* WARNING: Removing unreachable block (ram,0x00014db5ef8d) */
/* WARNING: Removing unreachable block (ram,0x00014db5ef99) */
/* WARNING: Removing unreachable block (ram,0x00014db5ef03) */

undefined8 FUN_14db5ee62(ulonglong param_1,undefined8 param_2,short param_3,longlong param_4)

{
  byte bVar1;
  undefined8 uVar2;
  longlong unaff_RBX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  bVar1 = ((byte)param_3 & 0x1f) % 0x11;
  uVar2 = FUN_1563ce15b(0,(ushort)(CONCAT12(*(longlong *)(unaff_R13 + -0x38) != 0,param_3) >> bVar1)
                          | param_3 << 0x11 - bVar1,*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                        -1 - (param_1 & unaff_RBX - param_4));
  return uVar2;
}



// FUNCTION 14db5ef99 FUN_14db5ef99 body=98 status=ok
// SIG undefined FUN_14db5ef99(void)

undefined8 FUN_14db5ef99(undefined8 param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint unaff_EDI;
  int in_stack_00000008;
  
  uVar1 = (in_stack_00000008 + 0x21cc3213U ^ 0xfec15b1d) + 0x13ea4e2;
  uVar2 = FUN_1622fe5fa(param_1,~unaff_EDI &
                                (~(param_2 | uVar1) |
                                0xffffffff - ((uVar1 - (param_2 | uVar1)) + param_2)) +
                                (param_2 | uVar1) + 1 | unaff_EDI);
  return uVar2;
}



// FUNCTION 14db5effc FUN_14db5effc body=117 status=ok
// SIG undefined FUN_14db5effc(void)

undefined8 FUN_14db5effc(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db5f0ad FUN_14db5f0ad body=417 status=ok
// SIG undefined FUN_14db5f0ad(void)

/* WARNING: Instruction at (ram,0x0001565b1090) overlaps instruction at (ram,0x0001565b108f)
    */
/* WARNING: Removing unreachable block (ram,0x000160e806b0) */
/* WARNING: Removing unreachable block (ram,0x000160e806aa) */
/* WARNING: Removing unreachable block (ram,0x000160e806b5) */
/* WARNING: Removing unreachable block (ram,0x000160e8075e) */
/* WARNING: Removing unreachable block (ram,0x000160e80764) */
/* WARNING: Removing unreachable block (ram,0x000156b8e5ff) */
/* WARNING: Removing unreachable block (ram,0x00014de11703) */
/* WARNING: Removing unreachable block (ram,0x00015b312b0b) */
/* WARNING: Removing unreachable block (ram,0x000157678f73) */
/* WARNING: Removing unreachable block (ram,0x000157678f87) */
/* WARNING: Removing unreachable block (ram,0x000157678f82) */
/* WARNING: Removing unreachable block (ram,0x000157678fce) */
/* WARNING: Removing unreachable block (ram,0x00015b312b17) */
/* WARNING: Removing unreachable block (ram,0x00015b312c40) */
/* WARNING: Removing unreachable block (ram,0x00015b312c4b) */
/* WARNING: Removing unreachable block (ram,0x00015b312c51) */
/* WARNING: Removing unreachable block (ram,0x00015b312c56) */
/* WARNING: Removing unreachable block (ram,0x000165555cec) */
/* WARNING: Removing unreachable block (ram,0x00015b5973ad) */
/* WARNING: Removing unreachable block (ram,0x0001650e978d) */
/* WARNING: Removing unreachable block (ram,0x0001650e976d) */
/* WARNING: Removing unreachable block (ram,0x0001650e9739) */
/* WARNING: Removing unreachable block (ram,0x0001650e9754) */
/* WARNING: Removing unreachable block (ram,0x000161954731) */
/* WARNING: Removing unreachable block (ram,0x0001619547f2) */
/* WARNING: Removing unreachable block (ram,0x0001650e975d) */
/* WARNING: Removing unreachable block (ram,0x0001650e9763) */
/* WARNING: Removing unreachable block (ram,0x0001650e9772) */
/* WARNING: Removing unreachable block (ram,0x0001650e9778) */
/* WARNING: Removing unreachable block (ram,0x0001650e977d) */
/* WARNING: Removing unreachable block (ram,0x0001650e9783) */
/* WARNING: Removing unreachable block (ram,0x0001650e9792) */
/* WARNING: Removing unreachable block (ram,0x0001650e9798) */
/* WARNING: Removing unreachable block (ram,0x0001650e97a9) */
/* WARNING: Removing unreachable block (ram,0x0001650e97ba) */
/* WARNING: Removing unreachable block (ram,0x0001650e97af) */
/* WARNING: Removing unreachable block (ram,0x0001650e97a4) */
/* WARNING: Removing unreachable block (ram,0x00015b597398) */
/* WARNING: Removing unreachable block (ram,0x00015b59739d) */
/* WARNING: Removing unreachable block (ram,0x00015b5973a3) */
/* WARNING: Removing unreachable block (ram,0x00015b5973c5) */
/* WARNING: Removing unreachable block (ram,0x00015b283a11) */
/* WARNING: Removing unreachable block (ram,0x00015b5973cb) */
/* WARNING: Removing unreachable block (ram,0x00014de1163b) */
/* WARNING: Removing unreachable block (ram,0x00014de1164f) */
/* WARNING: Removing unreachable block (ram,0x00014de1165a) */
/* WARNING: Removing unreachable block (ram,0x00014de116fd) */
/* WARNING: Removing unreachable block (ram,0x00014dc70e66) */
/* WARNING: Removing unreachable block (ram,0x00014de11655) */
/* WARNING: Removing unreachable block (ram,0x00014de1164a) */
/* WARNING: Removing unreachable block (ram,0x000166c08d89) */
/* WARNING: Removing unreachable block (ram,0x00015b5973d4) */
/* WARNING: Removing unreachable block (ram,0x00015b5973da) */
/* WARNING: Removing unreachable block (ram,0x00015b5973e4) */
/* WARNING: Removing unreachable block (ram,0x00015b5973e9) */
/* WARNING: Removing unreachable block (ram,0x00015b5973ef) */
/* WARNING: Removing unreachable block (ram,0x00015b5973f4) */
/* WARNING: Removing unreachable block (ram,0x00015b597407) */
/* WARNING: Removing unreachable block (ram,0x00015b597431) */
/* WARNING: Removing unreachable block (ram,0x00015b597436) */
/* WARNING: Removing unreachable block (ram,0x000165555cc0) */
/* WARNING: Removing unreachable block (ram,0x000160b49ce6) */
/* WARNING: Removing unreachable block (ram,0x000165555cc9) */
/* WARNING: Removing unreachable block (ram,0x00015b312a9e) */
/* WARNING: Removing unreachable block (ram,0x000165555cd2) */
/* WARNING: Removing unreachable block (ram,0x000157678fdd) */
/* WARNING: Removing unreachable block (ram,0x000165555cdb) */
/* WARNING: Removing unreachable block (ram,0x000165555ce1) */
/* WARNING: Removing unreachable block (ram,0x000165555cf2) */
/* WARNING: Removing unreachable block (ram,0x000165555cf8) */
/* WARNING: Removing unreachable block (ram,0x000165555d02) */
/* WARNING: Removing unreachable block (ram,0x000165555d08) */
/* WARNING: Removing unreachable block (ram,0x000165555d13) */
/* WARNING: Removing unreachable block (ram,0x000165555d18) */
/* WARNING: Removing unreachable block (ram,0x000165555d1e) */
/* WARNING: Removing unreachable block (ram,0x00016496c47c) */
/* WARNING: Removing unreachable block (ram,0x00016496c482) */
/* WARNING: Removing unreachable block (ram,0x00016496c492) */
/* WARNING: Removing unreachable block (ram,0x00016496c4a9) */
/* WARNING: Removing unreachable block (ram,0x00016496c4af) */
/* WARNING: Removing unreachable block (ram,0x000162aea627) */
/* WARNING: Removing unreachable block (ram,0x000162aea632) */
/* WARNING: Removing unreachable block (ram,0x000162aea62d) */
/* WARNING: Removing unreachable block (ram,0x000162aea641) */
/* WARNING: Removing unreachable block (ram,0x0001614618e1) */
/* WARNING: Removing unreachable block (ram,0x000162aea647) */
/* WARNING: Removing unreachable block (ram,0x000162aea652) */
/* WARNING: Removing unreachable block (ram,0x000162aea64d) */
/* WARNING: Removing unreachable block (ram,0x000162aea666) */
/* WARNING: Removing unreachable block (ram,0x0001572b4397) */
/* WARNING: Removing unreachable block (ram,0x0001572b43dc) */
/* WARNING: Removing unreachable block (ram,0x00015761d404) */
/* WARNING: Removing unreachable block (ram,0x000162aea66c) */
/* WARNING: Removing unreachable block (ram,0x00016146192e) */
/* WARNING: Removing unreachable block (ram,0x00016146193a) */
/* WARNING: Removing unreachable block (ram,0x0001565b0ffb) */
/* WARNING: Removing unreachable block (ram,0x0001565b104e) */
/* WARNING: Removing unreachable block (ram,0x0001565b1053) */
/* WARNING: Removing unreachable block (ram,0x0001565b1077) */
/* WARNING: Removing unreachable block (ram,0x0001565b107d) */
/* WARNING: Removing unreachable block (ram,0x0001565b1090) */
/* WARNING: Removing unreachable block (ram,0x0001565b108f) */
/* WARNING: Removing unreachable block (ram,0x00016532ea98) */
/* WARNING: Removing unreachable block (ram,0x00015b312abc) */
/* WARNING: Removing unreachable block (ram,0x00015b312abf) */
/* WARNING: Removing unreachable block (ram,0x00015b312b06) */
/* WARNING: Removing unreachable block (ram,0x00014de116f8) */
/* WARNING: Removing unreachable block (ram,0x0001650e9849) */
/* WARNING: Removing unreachable block (ram,0x0001650e984f) */
/* WARNING: Removing unreachable block (ram,0x000160e803f0) */
/* WARNING: Removing unreachable block (ram,0x000160e80480) */
/* WARNING: Removing unreachable block (ram,0x00016259826f) */
/* WARNING: Removing unreachable block (ram,0x000162598352) */
/* WARNING: Removing unreachable block (ram,0x000162598356) */
/* WARNING: Removing unreachable block (ram,0x000160e80486) */
/* WARNING: Removing unreachable block (ram,0x000160e80522) */
/* WARNING: Removing unreachable block (ram,0x00016196c649) */
/* WARNING: Removing unreachable block (ram,0x000160e80528) */
/* WARNING: Removing unreachable block (ram,0x000165cf5cdf) */
/* WARNING: Removing unreachable block (ram,0x000165cf5d76) */
/* WARNING: Removing unreachable block (ram,0x000165cf5d7c) */
/* WARNING: Removing unreachable block (ram,0x000164a8b99a) */
/* WARNING: Removing unreachable block (ram,0x00016195481d) */
/* WARNING: Removing unreachable block (ram,0x000161954823) */
/* WARNING: Removing unreachable block (ram,0x00016264a3b0) */
/* WARNING: Removing unreachable block (ram,0x00016264a444) */
/* WARNING: Removing unreachable block (ram,0x00016264a44f) */
/* WARNING: Removing unreachable block (ram,0x000161e11808) */
/* WARNING: Removing unreachable block (ram,0x00015b7d3ee3) */
/* WARNING: Removing unreachable block (ram,0x0001624d3bdc) */
/* WARNING: Removing unreachable block (ram,0x0001624d3be2) */
/* WARNING: Removing unreachable block (ram,0x00014db5f13b) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db5f0ad(void)

{
  FUN_1617edcb4();
  FUN_1650e9739();
  return;
}



// FUNCTION 14db5f1bb FUN_14db5f1bb body=145 status=ok
// SIG undefined FUN_14db5f1bb(void)

void FUN_14db5f1bb(ulonglong param_1)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_166222952(param_1 ^ in_RAX,
                ~((~in_RAX | *(ulonglong *)(unaff_R12 + -0x78)) &
                 (0xffffffffffffffff - *(ulonglong *)(unaff_R12 + -0x78) | in_RAX)));
  return;
}



// FUNCTION 14db5f384 FUN_14db5f384 body=160 status=ok
// SIG undefined FUN_14db5f384(void)

/* WARNING: Removing unreachable block (ram,0x00014db5f425) */
/* WARNING: Removing unreachable block (ram,0x00014db5f48e) */

void FUN_14db5f384(undefined8 param_1)

{
  longlong unaff_RDI;
  
  (*(code *)&LAB_16475aa38)(param_1,*(undefined8 *)(unaff_RDI + -0x60),&LAB_16475aa38);
  return;
}



// FUNCTION 14db5f425 FUN_14db5f425 body=245 status=ok
// SIG undefined FUN_14db5f425(void)

void FUN_14db5f425(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStackX_18;
  
  FUN_1659a97e4(param_1,param_2,0x10,uStackX_18);
  return;
}



// FUNCTION 14db5f4a8 FUN_14db5f4a8 body=140 status=ok
// SIG undefined FUN_14db5f4a8(void)

void FUN_14db5f4a8(ulonglong param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  
  *(ulonglong *)(param_3 + -8) = param_1;
  uVar2 = *(ulonglong *)(param_3 + -8);
  uVar1 = *(ulonglong *)(unaff_RDI + -0x70);
  *(undefined8 *)(param_3 + -8) = unaff_RBX;
  *(undefined2 *)(param_3 + -8) = 0xd197;
  *(short *)(param_3 + -8) = *(short *)(param_3 + -8) + 0x4925;
  *(undefined8 *)(param_3 + -8) = unaff_RSI;
  FUN_165ca3fab(uVar2,FUN_165ca3fab,uVar1 ^ uVar2,param_4 + param_1 + (param_4 & param_1) * -2);
  return;
}



// FUNCTION 14db5f5d1 FUN_14db5f5d1 body=164 status=ok
// SIG undefined FUN_14db5f5d1(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db5f5d1(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1621f58bf((char)param_1,*(undefined8 *)(unaff_RDI + -0x28),
                *(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                -1 - ((~param_1 | *(ulonglong *)(unaff_RDI + -0x60)) &
                     (~*(ulonglong *)(unaff_RDI + -0x60) | param_1)));
  return;
}



// FUNCTION 14db5f676 FUN_14db5f676 body=126 status=ok
// SIG undefined FUN_14db5f676(void)

void FUN_14db5f676(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_RBP;
  longlong unaff_RDI;
  
  FUN_1569b0847(param_1,unaff_RDI + ~(~param_2 | ~unaff_RBP) * -2);
  FUN_14db5f6f5();
  return;
}



// FUNCTION 14db5f6f5 FUN_14db5f6f5 body=130 status=ok
// SIG undefined FUN_14db5f6f5(void)

/* WARNING: Removing unreachable block (ram,0x00014db5f737) */

void FUN_14db5f6f5(void)

{
  return;
}



// FUNCTION 14db5f877 FUN_14db5f877 body=181 status=ok
// SIG undefined FUN_14db5f877(void)

void FUN_14db5f877(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  (*(code *)&LAB_15b81f71f)
            (param_1,param_2,*(undefined8 *)(unaff_R12 + -0x80),
             *(ulonglong *)(unaff_R12 + -0x30) + in_RAX +
             (*(ulonglong *)(unaff_R12 + -0x30) & in_RAX) * -2);
  return;
}



// FUNCTION 14db5f92d FUN_14db5f92d body=149 status=ok
// SIG undefined FUN_14db5f92d(void)

void FUN_14db5f92d(ulonglong param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  uint unaff_EBP;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + unaff_RSI + param_2 + (unaff_RSI & param_2) * -2);
  FUN_164bf1d33((unaff_EBP >> 1) + 0x63a7b31b,
                (uVar1 & param_1 ^ 0xffffffffffffffff) & (uVar1 | param_1),param_3,FUN_164bf1d33);
  return;
}



// FUNCTION 14db5faef FUN_14db5faef body=160 status=ok
// SIG undefined FUN_14db5faef(void)

void FUN_14db5faef(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  ushort uVar1;
  undefined8 uVar2;
  ushort unaff_SI;
  ushort *unaff_RDI;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 local_res8;
  undefined8 uStackX_10;
  
  uVar1 = *unaff_RDI;
  *unaff_RDI = 0;
  *unaff_RDI = *unaff_RDI ^ (unaff_SI | uVar1) - 0x100;
  *(undefined8 *)(param_5 + -8) = param_2;
  *(undefined8 *)(param_5 + -0x10) = unaff_R13;
  *(undefined1 **)(param_5 + -0x10) = &LAB_1571abc4e;
  *(undefined1 **)(param_5 + -0x18) = &LAB_1571abc4e;
  *(undefined8 *)(param_5 + -0x20) = unaff_R12;
  *(undefined8 *)(param_5 + -0x10) = *(undefined8 *)(param_5 + -8);
  uVar2 = *(undefined8 *)(param_5 + -0x18);
  *(undefined8 *)(param_5 + -8) = 0x252b18b2;
  *(undefined8 *)(param_5 + -0x18) = uStackX_10;
  *(code **)(param_5 + -0x20) = FUN_14db5fb91;
  FUN_1571abbdf(local_res8,uVar2);
  *(undefined8 *)(param_5 + -0x10) = 0;
  *(longlong *)(param_5 + -0x10) = *(longlong *)(param_5 + -0x10) + -0x14d7bdb88;
  *(longlong *)(param_5 + -0x10) = -*(longlong *)(param_5 + -0x10);
  return;
}



// FUNCTION 14db5fb91 FUN_14db5fb91 body=36 status=ok
// SIG undefined FUN_14db5fb91(void)

void FUN_14db5fb91(void)

{
  return;
}



// FUNCTION 14db5fd8d FUN_14db5fd8d body=43 status=ok
// SIG undefined FUN_14db5fd8d(void)

void FUN_14db5fd8d(void)

{
  return;
}



// FUNCTION 14db5feaf FUN_14db5feaf body=109 status=ok
// SIG undefined FUN_14db5feaf(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a478b) overlaps instruction at (ram,0x00014d7a4785)
    */

void FUN_14db5feaf(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  int *piVar3;
  byte bVar4;
  undefined4 uVar6;
  longlong lVar7;
  ushort *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  int iVar8;
  longlong unaff_RDI;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  longlong lStackX_10;
  longlong local_res20;
  undefined4 uVar5;
  
  uVar6 = (undefined4)((ulonglong)param_2 >> 0x20);
  *unaff_RBX = (*unaff_RBX | 0x100) - 0x100;
  *(undefined8 *)(local_res20 + -8) = 0;
  *(longlong *)(local_res20 + -8) = *(longlong *)(local_res20 + -8) + unaff_RDI;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined **)(local_res20 + -8) = &DAT_14db5ff3c;
  uVar2 = *(undefined8 *)(local_res20 + -0x10);
  piVar3 = (int *)((ulonglong)
                   CONCAT61((int6)((ulonglong)unaff_retaddr >> 0x10),
                            (byte)((ulonglong)unaff_retaddr >> 8) | (byte)uStackX_8) << 8);
  *(char *)(unaff_RSI + 7) = *(char *)(unaff_RSI + 7) + '\x01';
  iVar8 = (int)uVar2;
  *(int *)(param_2 + -0x6f) = *(int *)(param_2 + -0x6f) + iVar8;
  do {
  } while (*piVar3 < (int)piVar3);
  lVar7 = CONCAT62((int6)((ulonglong)uStackX_8 >> 0x10),
                   CONCAT11((byte)((ulonglong)uStackX_8 >> 8) ^
                            *(byte *)(local_res20 + 2 + lStackX_10 * 8),(byte)uStackX_8));
  bVar4 = (byte)param_2 ^ *(byte *)((ulonglong)(uint)(iVar8 - (int)param_2) - 0x1e);
  uVar5 = CONCAT31((int3)((ulonglong)param_2 >> 8),bVar4);
  if ((char)bVar4 < '\0') {
    if ((char)bVar4 < '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    pbVar1 = (byte *)(lVar7 + 0x7e6cb36d + unaff_RBP * 2);
    *pbVar1 = *pbVar1 ^ 0xcb;
  }
  *(uint *)CONCAT44(uVar6,uVar5) = *(uint *)CONCAT44(uVar6,uVar5) | 0x7d;
  piVar3 = (int *)CONCAT71((int7)((ulonglong)lVar7 >> 8),0x21);
  *piVar3 = *piVar3 + -0x1e;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14db600ac FUN_14db600ac body=149 status=ok
// SIG undefined FUN_14db600ac(void)

undefined8 FUN_14db600ac(void)

{
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = FUN_157515160(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15);
  return uVar1;
}



// FUNCTION 14db60141 FUN_14db60141 body=61 status=ok
// SIG undefined FUN_14db60141(void)

undefined8 FUN_14db60141(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db60272 FUN_14db60272 body=41 status=ok
// SIG undefined FUN_14db60272(void)

void FUN_14db60272(void)

{
  return;
}



// FUNCTION 14db603aa FUN_14db603aa body=47 status=ok
// SIG undefined FUN_14db603aa(void)

void FUN_14db603aa(void)

{
  return;
}



// FUNCTION 14db60447 FUN_14db60447 body=430 status=ok
// SIG undefined FUN_14db60447(void)

/* WARNING: Removing unreachable block (ram,0x00014db60573) */
/* WARNING: Removing unreachable block (ram,0x00014db605ec) */
/* WARNING: Removing unreachable block (ram,0x000165f826c8) */
/* WARNING: Removing unreachable block (ram,0x00014db605f8) */

void FUN_14db60447(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  byte bVar2;
  ulonglong unaff_RDI;
  longlong lVar3;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  lVar3 = -((~(~param_3 & ~unaff_R15) - (unaff_RDI | ~(~param_3 & ~unaff_R15))) + unaff_RDI);
  uVar1 = *(ulonglong *)(unaff_R13 + -0x78) & unaff_R15;
  FUN_15757bf01(uVar1,FUN_15757bf01,lVar3 + -1);
  if ((*(ulonglong *)(lVar3 + -0x71) & uVar1 & 0x7fffffffffffffff) == 0) {
    FUN_14dd99614();
    return;
  }
  bVar2 = (byte)*(undefined8 *)(lVar3 + -0x69) ^ (byte)uVar1;
  FUN_1617b76dd();
  if (bVar2 == 0) {
    return;
  }
  FUN_16128c1ed();
  return;
}



// FUNCTION 14db605f8 FUN_14db605f8 body=140 status=ok
// SIG undefined FUN_14db605f8(void)

void FUN_14db605f8(void)

{
  undefined4 local_res8;
  
  FUN_162497075(~local_res8);
  return;
}



// FUNCTION 14db60686 FUN_14db60686 body=503 status=ok
// SIG undefined FUN_14db60686(void)

/* WARNING: Removing unreachable block (ram,0x00014db6078f) */
/* WARNING: Removing unreachable block (ram,0x00014db6072f) */
/* WARNING: Removing unreachable block (ram,0x000165e73e04) */
/* WARNING: Removing unreachable block (ram,0x00014db60795) */

undefined8 FUN_14db60686(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  undefined8 in_R10;
  longlong unaff_R15;
  ulonglong in_stack_00000010;
  ulonglong local_res20;
  
  uVar1 = ~(local_res20 & param_1) & (local_res20 | param_1);
  *(undefined8 *)(uVar1 - 8) = 0;
  *(undefined8 *)(uVar1 - 0x10) = in_R10;
  *(undefined8 *)(uVar1 - 0x18) = in_RAX;
  *(longlong *)(uVar1 - 8) = *(longlong *)(uVar1 - 8) - unaff_R15;
  *(ulonglong *)(uVar1 - 8) = ~*(ulonglong *)(uVar1 - 8);
  *(longlong *)(uVar1 - 8) = *(longlong *)(uVar1 - 8) + 1;
  uVar2 = FUN_14da5ae27((in_stack_00000010 & param_1 ^ 0xffffffffffffffff) &
                        (~param_1 & in_stack_00000010 | param_1),param_2,param_3);
  return uVar2;
}



// FUNCTION 14db60898 FUN_14db60898 body=94 status=ok
// SIG undefined FUN_14db60898(void)

void FUN_14db60898(void)

{
  return;
}



// FUNCTION 14db60902 FUN_14db60902 body=127 status=ok
// SIG undefined FUN_14db60902(void)

void FUN_14db60902(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000008;
  
  FUN_166dc5b7e(FUN_166dc5b7e,param_2,param_3,in_stack_00000008);
  return;
}



// FUNCTION 14db60a15 FUN_14db60a15 body=178 status=ok
// SIG undefined FUN_14db60a15(void)

/* WARNING: Removing unreachable block (ram,0x00014de9af43) */
/* WARNING: Removing unreachable block (ram,0x00014de9af4f) */
/* WARNING: Removing unreachable block (ram,0x00014de9afe4) */
/* WARNING: Removing unreachable block (ram,0x00014de9aff5) */
/* WARNING: Removing unreachable block (ram,0x00014de9b001) */
/* WARNING: Removing unreachable block (ram,0x00014de9b004) */
/* WARNING: Removing unreachable block (ram,0x00014de9afea) */
/* WARNING: Removing unreachable block (ram,0x0001612ed16a) */
/* WARNING: Removing unreachable block (ram,0x00014db60bf7) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14db60a15(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong in_RAX;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 in_R10;
  code *pcVar10;
  longlong unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 local_res8;
  ulonglong uStackX_18;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x50);
  uVar2 = *(ulonglong *)(unaff_R12 + -0x90);
  FUN_160d2bd9a();
  param_1 = uStackX_18 ^ param_1;
  *(undefined8 *)(param_1 - 8) = in_R10;
  *(undefined8 *)(param_1 - 0x10) = param_3;
  *(undefined8 *)(param_1 - 0x18) = param_3;
  uVar9 = *(undefined8 *)(param_1 - 8);
  *(undefined8 *)(param_1 - 0x20) = param_4;
  *(undefined8 *)(param_1 - 0x10) = uVar9;
  uVar9 = *(undefined8 *)(param_1 - 0x20);
  *(undefined **)(param_1 - 8) = &DAT_15b6e12b4;
  pcVar10 = FUN_15b6e1281;
  *(code **)(param_1 - 0x18) = FUN_14db60b6e;
  uVar8 = FUN_15b6e1281(local_res8);
  uVar5 = *(undefined8 *)(param_1 - 0x10);
  *(undefined8 *)(param_1 - 0x10) = uVar9;
  *(undefined8 *)(param_1 - 0x18) = *(undefined8 *)(unaff_R12 + -0x90);
  *(ulonglong *)(param_1 - 0x10) = uVar1 ^ in_RAX;
  *(ulonglong *)(param_1 - 0x18) = uVar8;
  *(undefined8 *)(param_1 - 0x18) = unaff_R14;
  uVar9 = *(undefined8 *)(param_1 - 0x10);
  *(undefined8 *)(param_1 - 0x10) = *(undefined8 *)(unaff_R12 + -0x68);
  *(undefined8 *)(param_1 - 0x18) = unaff_R13;
  *(undefined8 *)(param_1 - 0x20) = unaff_R13;
  *(undefined8 *)(param_1 - 0x18) = *(undefined8 *)(unaff_R12 + -8);
  *(undefined8 *)(param_1 - 0x20) = *(undefined8 *)(unaff_R12 + -0x98);
  *(undefined8 *)(param_1 - 0x28) = param_2;
  *(ulonglong *)(param_1 - 0x30) = param_1 - 0x28;
  puVar6 = *(ulonglong **)(param_1 - 0x30);
  puVar6[-1] = *(undefined8 *)(unaff_R12 + -0xa0);
  uVar1 = puVar6[-1];
  uVar7 = *puVar6;
  puVar6[1] = puVar6[1] ^ uVar8;
  puVar6[2] = puVar6[2] ^ uVar8;
  *puVar6 = ~(~((0xffffffffffffffff - in_RAX | uVar2) & (0xffffffffffffffff - uVar2 | in_RAX)) &
             (uVar8 | 0xfffffffe9f2d4265));
  puVar6[-1] = uVar9;
  uVar2 = puVar6[3];
  puVar6[3] = puVar6[3] & uVar8;
  puVar6[-1] = uVar5;
  puVar6[3] = puVar6[3] << 1;
  uVar3 = puVar6[3];
  puVar6[3] = 0;
  puVar6[3] = puVar6[3] + ((uVar2 + uVar8) - uVar3);
  uVar9 = puVar6[1];
  *(ushort *)(puVar6 + 2) = (ushort)puVar6[2] & 0xfeff;
  lVar4 = puVar6[3];
  *(ulonglong *)(lVar4 + -8) = uVar7;
  *(code **)(lVar4 + -0x10) = pcVar10;
  *(ulonglong *)(lVar4 + -0x10) = uVar1 ^ uVar8;
  *(ulonglong *)(lVar4 + -0x18) = uVar1 ^ uVar8;
  *(undefined8 *)(lVar4 + -0x10) = *(undefined8 *)(lVar4 + -8);
  *(undefined1 **)(lVar4 + -8) = &LAB_161807bba;
  *(undefined **)(lVar4 + -0x18) = &DAT_161807b9a;
  return uVar9;
}



// FUNCTION 14db60ac8 FUN_14db60ac8 body=165 status=ok
// SIG undefined FUN_14db60ac8(void)

/* WARNING: Removing unreachable block (ram,0x00014de9af43) */
/* WARNING: Removing unreachable block (ram,0x00014de9af4f) */
/* WARNING: Removing unreachable block (ram,0x00014de9afe4) */
/* WARNING: Removing unreachable block (ram,0x00014de9aff5) */
/* WARNING: Removing unreachable block (ram,0x00014de9b001) */
/* WARNING: Removing unreachable block (ram,0x00014de9b004) */
/* WARNING: Removing unreachable block (ram,0x00014de9afea) */
/* WARNING: Removing unreachable block (ram,0x0001612ed16a) */
/* WARNING: Removing unreachable block (ram,0x00014db60bf7) */

undefined8 FUN_14db60ac8(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong unaff_RBP;
  ulonglong unaff_RDI;
  undefined8 uVar9;
  undefined8 in_R10;
  code *pcVar10;
  longlong unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 uStackX_8;
  undefined8 local_res10;
  ulonglong local_res20;
  
  param_1 = local_res20 ^ param_1;
  *(undefined8 *)(param_1 - 8) = in_R10;
  *(undefined8 *)(param_1 - 0x10) = param_3;
  *(undefined8 *)(param_1 - 0x18) = param_3;
  uVar9 = *(undefined8 *)(param_1 - 8);
  *(undefined8 *)(param_1 - 0x20) = param_4;
  *(undefined8 *)(param_1 - 0x10) = uVar9;
  uVar9 = *(undefined8 *)(param_1 - 0x20);
  uVar5 = *(undefined8 *)(param_1 - 0x18);
  *(undefined **)(param_1 - 8) = &DAT_15b6e12b4;
  pcVar10 = FUN_15b6e1281;
  *(code **)(param_1 - 0x18) = FUN_14db60b6e;
  uVar8 = FUN_15b6e1281(local_res10,param_2,uVar5);
  uVar5 = *(undefined8 *)(param_1 - 0x10);
  *(undefined8 *)(param_1 - 0x10) = uVar9;
  *(undefined8 *)(param_1 - 0x18) = *(undefined8 *)(unaff_R12 + -0x90);
  *(undefined8 *)(param_1 - 0x10) = uStackX_8;
  *(ulonglong *)(param_1 - 0x18) = uVar8;
  *(undefined8 *)(param_1 - 0x18) = unaff_R14;
  uVar9 = *(undefined8 *)(param_1 - 0x10);
  *(undefined8 *)(param_1 - 0x10) = *(undefined8 *)(unaff_R12 + -0x68);
  *(undefined8 *)(param_1 - 0x18) = unaff_R13;
  *(undefined8 *)(param_1 - 0x20) = unaff_R13;
  *(undefined8 *)(param_1 - 0x18) = *(undefined8 *)(unaff_R12 + -8);
  *(undefined8 *)(param_1 - 0x20) = *(undefined8 *)(unaff_R12 + -0x98);
  *(undefined8 *)(param_1 - 0x28) = param_2;
  *(ulonglong *)(param_1 - 0x30) = param_1 - 0x28;
  puVar6 = *(ulonglong **)(param_1 - 0x30);
  puVar6[-1] = *(undefined8 *)(unaff_R12 + -0xa0);
  uVar1 = puVar6[-1];
  uVar7 = *puVar6;
  puVar6[1] = puVar6[1] ^ uVar8;
  puVar6[2] = puVar6[2] ^ uVar8;
  *puVar6 = ~(unaff_RBP & (~unaff_RDI | uVar8));
  puVar6[-1] = uVar9;
  uVar2 = puVar6[3];
  puVar6[3] = puVar6[3] & uVar8;
  puVar6[-1] = uVar5;
  puVar6[3] = puVar6[3] << 1;
  uVar3 = puVar6[3];
  puVar6[3] = 0;
  puVar6[3] = puVar6[3] + ((uVar2 + uVar8) - uVar3);
  uVar9 = puVar6[1];
  *(ushort *)(puVar6 + 2) = (ushort)puVar6[2] & 0xfeff;
  lVar4 = puVar6[3];
  *(ulonglong *)(lVar4 + -8) = uVar7;
  *(code **)(lVar4 + -0x10) = pcVar10;
  *(ulonglong *)(lVar4 + -0x10) = uVar1 ^ uVar8;
  *(ulonglong *)(lVar4 + -0x18) = uVar1 ^ uVar8;
  *(undefined8 *)(lVar4 + -0x10) = *(undefined8 *)(lVar4 + -8);
  *(undefined1 **)(lVar4 + -8) = &LAB_161807bba;
  *(undefined **)(lVar4 + -0x18) = &DAT_161807b9a;
  return uVar9;
}



// FUNCTION 14db60b6e FUN_14db60b6e body=187 status=ok
// SIG undefined FUN_14db60b6e(void)

/* WARNING: Removing unreachable block (ram,0x00014de9af43) */
/* WARNING: Removing unreachable block (ram,0x00014de9af4f) */
/* WARNING: Removing unreachable block (ram,0x00014de9afe4) */
/* WARNING: Removing unreachable block (ram,0x00014de9aff5) */
/* WARNING: Removing unreachable block (ram,0x00014de9b001) */
/* WARNING: Removing unreachable block (ram,0x00014de9b004) */
/* WARNING: Removing unreachable block (ram,0x00014de9afea) */
/* WARNING: Removing unreachable block (ram,0x0001612ed16a) */
/* WARNING: Removing unreachable block (ram,0x00014db60bf7) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_14db60b6e(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong lVar2;
  undefined8 in_R10;
  longlong unaff_R12;
  ulonglong uVar3;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x98);
  uVar3 = *(ulonglong *)(unaff_R12 + -0xa0) ^ in_RAX;
  lVar2 = *(ulonglong *)(unaff_R12 + -0x68) + in_RAX +
          (*(ulonglong *)(unaff_R12 + -0x68) & in_RAX) * -2;
  *(undefined8 *)(lVar2 + -8) = param_2;
  *(undefined8 *)(lVar2 + -0x10) = in_R10;
  *(ulonglong *)(lVar2 + -0x10) = uVar3;
  *(ulonglong *)(lVar2 + -0x18) = uVar3;
  *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(lVar2 + -8);
  *(undefined1 **)(lVar2 + -8) = &LAB_161807bba;
  *(undefined **)(lVar2 + -0x18) = &DAT_161807b9a;
  return uVar1 ^ in_RAX;
}



// FUNCTION 14db60dc6 FUN_14db60dc6 body=469 status=ok
// SIG undefined FUN_14db60dc6(void)

/* WARNING: Removing unreachable block (ram,0x00014db60e2f) */
/* WARNING: Removing unreachable block (ram,0x00014db60e77) */

void FUN_14db60dc6(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_RSI;
  
  FUN_15b7698b3(param_1,unaff_RSI ^ param_1,param_3,param_4);
  return;
}



// FUNCTION 14db61033 FUN_14db61033 body=150 status=ok
// SIG undefined FUN_14db61033(void)

void FUN_14db61033(void)

{
  (*(code *)0x14dcf9a07)();
  return;
}



// FUNCTION 14db61209 FUN_14db61209 body=308 status=ok
// SIG undefined FUN_14db61209(void)

void FUN_14db61209(void)

{
  FUN_156fd0cbb();
  FUN_165c866f4();
  return;
}



// FUNCTION 14db6168a FUN_14db6168a body=486 status=ok
// SIG undefined FUN_14db6168a(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014db617d1) */
/* WARNING: Removing unreachable block (ram,0x00014d7a9641) */

undefined8 FUN_14db6168a(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  longlong unaff_RDI;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  longlong local_res8;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x48);
  uVar2 = *(undefined8 *)(unaff_RDI + -8);
  FUN_1614c886f(param_1,~(*(ulonglong *)(unaff_RDI + -0x68) & param_1) &
                        (*(ulonglong *)(unaff_RDI + -0x68) | param_1));
  *(undefined8 *)(local_res8 + -8) = param_4;
  *(ulonglong *)(local_res8 + -0x10) =
       ~(((uVar1 ^ 0xffffffffffffffff) & ~param_1 | uVar1) & (~uVar1 | param_1));
  *(undefined **)(local_res8 + -0x10) = &DAT_156f43c38;
  *(undefined **)(local_res8 + -0x18) = &DAT_156f43c38;
  *(undefined8 *)(local_res8 + -0x20) = unaff_RBX;
  *(undefined8 *)(local_res8 + -0x10) = *(undefined8 *)(local_res8 + -8);
  *(undefined8 *)(local_res8 + -8) = *(undefined8 *)(local_res8 + -0x18);
  *(undefined8 *)(local_res8 + -0x18) = uVar2;
  *(undefined8 *)(local_res8 + -0x20) = unaff_R14;
  *(undefined8 *)(local_res8 + -0x10) = unaff_R15;
  *(undefined8 *)(local_res8 + -0x18) = unaff_R15;
  *(code **)(local_res8 + -0x20) = FUN_1614c886f;
  *(undefined8 *)(local_res8 + -0x28) = 0x14d7a9b69;
  *(undefined8 *)(local_res8 + -0x10) = *(undefined8 *)(local_res8 + -0x28);
  return unaff_R12;
}



// FUNCTION 14db61871 FUN_14db61871 body=74 status=ok
// SIG undefined FUN_14db61871(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14db61871(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14db619b7 FUN_14db619b7 body=47 status=ok
// SIG undefined FUN_14db619b7(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014db619e2) overlaps instruction at (ram,0x00014db619e1)
    */
/* WARNING: Removing unreachable block (ram,0x00014db619e1) */

void FUN_14db619b7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined8 in_R10;
  ulonglong local_res8;
  
  bVar2 = (byte)param_3;
  local_res8 = (ulonglong)(uint)local_res8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  puVar1 = (ulonglong *)(&stack0xfffffffff63ab8fa + local_res8);
  *(undefined8 *)(&stack0xfffffffff63ab8f2 + local_res8) = param_3;
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ *(ulonglong *)(&stack0xfffffffff63ab8f2 + local_res8);
  *(undefined8 *)(&stack0xfffffffff63ab8f2 + local_res8) = param_4;
  *(undefined8 *)(&stack0xfffffffff63ab8ea + local_res8) = in_R10;
  *(undefined4 *)(&stack0xfffffffff63ab8e2 + local_res8) = 0x12d56e8;
  *(undefined4 *)(&stack0xfffffffff63ab8e6 + local_res8) = 0;
  *(undefined8 *)(&stack0xfffffffff63ab8da + local_res8) = 0x14db61a40;
  (*(code *)0x1629300d5)();
  *(undefined8 *)(&stack0xfffffffff63ab8e2 + local_res8) =
       *(undefined8 *)(&stack0xfffffffff63ab8e2 + local_res8);
  *(ulonglong *)(&stack0xfffffffff63ab8e2 + local_res8) =
       CONCAT71(0x1629300,~(0xff - (~(bVar2 | 0x7c) | 0xd5)));
  *(undefined **)(&stack0xfffffffff63ab8da + local_res8) = &DAT_14db61a71;
  return;
}



// FUNCTION 14db61a77 FUN_14db61a77 body=8 status=ok
// SIG undefined FUN_14db61a77(void)

void FUN_14db61a77(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 *unaff_R15;
  
  *unaff_R15 = param_3;
  FUN_15b6a7ed9();
  return;
}



// FUNCTION 14db61b4b FUN_14db61b4b body=158 status=ok
// SIG undefined FUN_14db61b4b(void)

void FUN_14db61b4b(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_15b61e2ac(param_1,param_2,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                ~((~param_1 | *(ulonglong *)(unaff_RDI + -0x60)) &
                 (~*(ulonglong *)(unaff_RDI + -0x60) | param_1)));
  return;
}



// FUNCTION 14db61c7b FUN_14db61c7b body=140 status=ok
// SIG undefined FUN_14db61c7b(void)

void FUN_14db61c7b(void)

{
  FUN_1659933bf();
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14db61dba FUN_14db61dba body=56 status=ok
// SIG undefined FUN_14db61dba(void)

void FUN_14db61dba(undefined8 param_1)

{
  undefined8 unaff_retaddr;
  
  FUN_165c7153c(param_1,unaff_retaddr);
  return;
}



// FUNCTION 14db61e45 FUN_14db61e45 body=153 status=ok
// SIG undefined FUN_14db61e45(void)

void FUN_14db61e45(undefined8 param_1)

{
  longlong unaff_R13;
  
  FUN_156a935e1(param_1,*(undefined8 *)(unaff_R13 + -8));
  FUN_14db61ee0();
  return;
}



// FUNCTION 14db61ee0 FUN_14db61ee0 body=121 status=ok
// SIG undefined FUN_14db61ee0(void)

void FUN_14db61ee0(void)

{
  ushort uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong unaff_R12;
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
  ushort local_res8;
  uint6 uStackX_a;
  longlong *local_res10;
  
  uVar1 = 0xffff - (~local_res8 | 0x100);
  bVar13 = (uVar1 & 0x4000) != 0;
  bVar12 = (uVar1 & 0x800) != 0;
  bVar11 = (uVar1 & 0x200) != 0;
  bVar10 = (uVar1 & 0x100) != 0;
  bVar9 = (uVar1 & 0x80) != 0;
  bVar8 = (uVar1 & 0x40) != 0;
  bVar7 = (uVar1 & 0x10) != 0;
  bVar6 = (uVar1 & 4) != 0;
  bVar5 = (uVar1 & 1) != 0;
  bVar17 = (uStackX_a & 0x20) != 0;
  bVar14 = (uStackX_a & 4) != 0;
  bVar16 = 0;
  bVar15 = 0;
  pcVar2 = (code *)swi(0x2e);
  uVar4 = (*pcVar2)();
  *local_res10 = unaff_R12;
  local_res10[-1] = unaff_R12;
  local_res10[-2] = uVar4;
  *(undefined4 *)(local_res10 + -2) = 0x103417fe;
  *(undefined4 *)((longlong)local_res10 + -0xc) = 0;
  lVar3 = local_res10[-2];
  local_res10[-2] =
       (ulonglong)(bVar13 & 1) * 0x4000 | (ulonglong)(bVar12 & 1) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)(bVar11 & 1) * 0x200 |
       (ulonglong)(bVar10 & 1) * 0x100 | (ulonglong)(bVar9 & 1) * 0x80 |
       (ulonglong)(bVar8 & 1) * 0x40 | (ulonglong)(bVar7 & 1) * 0x10 | (ulonglong)(bVar6 & 1) * 4 |
       (ulonglong)(bVar5 & 1) | (ulonglong)(bVar17 & 1) * 0x200000 |
       (ulonglong)(bVar16 & 1) * 0x100000 | (ulonglong)(bVar15 & 1) * 0x80000 |
       (ulonglong)(bVar14 & 1) * 0x40000;
  *local_res10 = lVar3 + -0xb9ee392;
  FUN_14dca9c08();
  return;
}



// FUNCTION 14db6210d FUN_14db6210d body=332 status=ok
// SIG undefined FUN_14db6210d(void)

/* WARNING: Removing unreachable block (ram,0x000166d4ac83) */
/* WARNING: Removing unreachable block (ram,0x00014db621af) */

void FUN_14db6210d(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0x88) + unaff_R15;
  uVar4 = *(ulonglong *)(unaff_R13 + -0x88) & unaff_R15;
  if (uVar2 < uVar4 * 2) {
    FUN_166d4abf6();
    return;
  }
  uVar3 = *(ulonglong *)(unaff_R13 + -0x28) + unaff_R15;
  uVar1 = *(ulonglong *)(unaff_R13 + -0x28) & unaff_R15;
  if (uVar1 * 2 <= uVar3) {
    FUN_16278f4a9();
    return;
  }
  FUN_16674ca65(*(ulonglong *)(unaff_R13 + -0x78) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) * -2,uVar3 + uVar1 * -2,
                uVar2 + uVar4 * -2,*(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14db6225a FUN_14db6225a body=140 status=ok
// SIG undefined FUN_14db6225a(void)

ulonglong FUN_14db6225a(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return *(ulonglong *)(unaff_R13 + -0x38) ^ unaff_R15;
}



// FUNCTION 14db622f2 FUN_14db622f2 body=164 status=ok
// SIG undefined FUN_14db622f2(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014db624a6) overlaps instruction at (ram,0x00014db624a5)
    */
/* WARNING: Removing unreachable block (ram,0x00014db6243d) */
/* WARNING: Removing unreachable block (ram,0x00014db624a3) */
/* WARNING: Removing unreachable block (ram,0x00014db624a6) */
/* WARNING: Removing unreachable block (ram,0x00014db62398) */
/* WARNING: Removing unreachable block (ram,0x00014db62423) */
/* WARNING: Removing unreachable block (ram,0x0001570b326c) */
/* WARNING: Removing unreachable block (ram,0x00014db62432) */
/* WARNING: Removing unreachable block (ram,0x00014db62438) */
/* WARNING: Removing unreachable block (ram,0x00014db62376) */

void FUN_14db622f2(void)

{
  FUN_165979d97();
  return;
}



// FUNCTION 14db62398 FUN_14db62398 body=268 status=ok
// SIG undefined FUN_14db62398(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014db624a6) overlaps instruction at (ram,0x00014db624a5)
    */
/* WARNING: Removing unreachable block (ram,0x00014db6243d) */
/* WARNING: Removing unreachable block (ram,0x00014db624a3) */
/* WARNING: Removing unreachable block (ram,0x00014db624a6) */

void FUN_14db62398(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  ulonglong local_res8 [2];
  ushort uStackX_18;
  ulonglong local_res20;
  undefined8 local_8;
  
  local_8._4_4_ = (undefined4)(in_RAX >> 0x20);
  local_8 = CONCAT44(local_8._4_4_,0x7d597d9c);
                    /* WARNING: Ignoring partial resolution of indirect */
  local_8._4_4_ = 0;
  local_res20 = ~(local_res20 & in_RAX) &
                (*(ulonglong *)
                  ((longlong)local_res8 +
                  ~(~(local_8 & 0xffffffff82a6827b) & (local_8 | 0xffffffff82a6827b))) | in_RAX);
  local_res8[0] = param_3;
  if ((longlong)local_res20 < 0) {
    uStackX_18 = (-0x101 - (uStackX_18 | 0xfeff)) + uStackX_18;
    *(undefined8 *)(local_res20 - 8) = unaff_R15;
    *(undefined8 *)(local_res20 - 0x10) = unaff_R12;
    *(undefined8 *)(local_res20 - 0x18) = unaff_R12;
    *(undefined8 *)(local_res20 - 0x10) = *(undefined8 *)(local_res20 - 8);
    *(undefined8 *)(local_res20 - 8) = 0x44a72894;
    *(ulonglong *)(local_res20 - 8) = *(ulonglong *)(local_res20 - 8) ^ 0x44a72894;
    *(ulonglong *)(local_res20 - 8) = *(ulonglong *)(local_res20 - 8) ^ 0x1570b3304;
    FUN_14d7a8bc6(param_1,param_2,param_3);
    return;
  }
  FUN_1570b326c();
  return;
}



// FUNCTION 14db625a1 FUN_14db625a1 body=233 status=ok
// SIG undefined FUN_14db625a1(void)

/* WARNING: Removing unreachable block (ram,0x00014db6261e) */

void FUN_14db625a1(ulonglong param_1)

{
  undefined8 local_res10;
  
  if (-1 < (longlong)(~(local_res10 & param_1) & (local_res10 | param_1))) {
    return;
  }
  FUN_162846836();
  return;
}



// FUNCTION 14db62882 FUN_14db62882 body=184 status=ok
// SIG undefined FUN_14db62882(void)

/* WARNING: Removing unreachable block (ram,0x00015b2a2cfa) */
/* WARNING: Removing unreachable block (ram,0x00015b2a2d05) */
/* WARNING: Removing unreachable block (ram,0x00015b2a2d00) */
/* WARNING: Removing unreachable block (ram,0x00014db6293c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db62882(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
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
  undefined8 in_RAX;
  ulonglong uVar14;
  undefined8 in_R11;
  undefined8 unaff_R12;
  ulonglong unaff_R15;
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
  longlong in_stack_00000008;
  
  bVar4 = (in_NT & 1) != 0;
  bVar5 = (in_OF & 1) != 0;
  bVar6 = (in_IF & 1) != 0;
  bVar7 = (in_TF & 1) != 0;
  bVar8 = (in_SF & 1) != 0;
  bVar9 = (in_ZF & 1) != 0;
  bVar10 = (in_AF & 1) != 0;
  bVar11 = (in_PF & 1) != 0;
  bVar12 = (in_ID & 1) != 0;
  bVar13 = (in_AC & 1) != 0;
  *(ulonglong *)(&stack0xfffffffff80dffaf + in_stack_00000008) =
       (ulonglong)bVar4 * 0x4000 | (ulonglong)bVar5 * 0x800 | (ulonglong)bVar6 * 0x200 |
       (ulonglong)bVar7 * 0x100 | (ulonglong)bVar8 * 0x80 | (ulonglong)bVar9 * 0x40 |
       (ulonglong)bVar10 * 0x10 | (ulonglong)bVar11 * 4 | (ulonglong)((in_CF & 1) != 0) |
       (ulonglong)bVar12 * 0x200000 | (ulonglong)bVar13 * 0x40000;
  *(undefined4 *)(&stack0xfffffffff80dffa7 + in_stack_00000008) = 0x389cb61b;
  *(undefined4 *)(&stack0xfffffffff80dffab + in_stack_00000008) = 0;
  uVar14 = *(ulonglong *)(&stack0xfffffffff80dffa7 + in_stack_00000008);
  *(ulonglong *)(&stack0xfffffffff80dffa7 + in_stack_00000008) =
       (ulonglong)bVar4 * 0x4000 | (ulonglong)bVar5 * 0x800 | (ulonglong)bVar6 * 0x200 |
       (ulonglong)bVar7 * 0x100 | (ulonglong)bVar8 * 0x80 | (ulonglong)bVar9 * 0x40 |
       (ulonglong)bVar10 * 0x10 | (ulonglong)bVar11 * 4 | (ulonglong)bVar12 * 0x200000 |
       (ulonglong)bVar13 * 0x40000;
  *(undefined8 *)(&stack0xfffffffff80dff9f + in_stack_00000008) = in_RAX;
  *(undefined4 *)(&stack0xfffffffff80dff9f + in_stack_00000008) = 0x5d3f4637;
  *(undefined4 *)(&stack0xfffffffff80dffa3 + in_stack_00000008) = 0;
  uVar2 = *(ulonglong *)(&stack0xfffffffff80dff9f + in_stack_00000008);
  uVar14 = uVar14 ^ uVar2 ^ 0x67b4feed;
  if ((*(ulonglong *)(&stack0xfffffffff80dffa7 + in_stack_00000008) & 1) != 0) {
    uVar14 = uVar14 + 1;
  }
  param_1 = param_1 - uVar14;
  uVar14 = *(ulonglong *)(&stack0xfffffffff80dffaf + in_stack_00000008);
  *(ulonglong *)(&stack0xfffffffff80dffaf + in_stack_00000008) =
       (ulonglong)((uVar14 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar14 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar14 & 0x400) != 0) * 0x400 | (ulonglong)((uVar14 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar14 & 0x100) != 0) * 0x100 | (ulonglong)((uVar14 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar14 & 0x40) != 0) * 0x40 | (ulonglong)((uVar14 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar14 & 4) != 0) * 4 | (ulonglong)((uVar14 & 1) != 0) |
       (ulonglong)((uVar14 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar14 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(&stack0xfffffffff80dffaf + in_stack_00000008) = 0x15b2a2c5f;
  FUN_1615b1250();
  plVar1 = (longlong *)(&stack0xfffffffff80dffbf + in_stack_00000008);
  lVar3 = *plVar1;
  *plVar1 = 0;
  *plVar1 = (longlong)(FUN_1615b1250 + *plVar1);
  *(undefined8 *)(&stack0xfffffffff80dffb7 + in_stack_00000008) = unaff_R12;
  *(undefined8 *)(&stack0xfffffffff80dffaf + in_stack_00000008) = in_R11;
  *(undefined8 *)(&stack0xfffffffff80dffaf + in_stack_00000008) = unaff_R12;
  *(longlong *)(&stack0xfffffffff80dffaf + in_stack_00000008) = lVar3;
  *(ulonglong *)(&stack0xfffffffff80dffa7 + in_stack_00000008) = uVar2 ^ 0x67b4feed | unaff_R15;
  *(longlong *)(&stack0xfffffffff80dffaf + in_stack_00000008) = param_1;
  *(ulonglong *)(&stack0xfffffffff80dffd7 + in_stack_00000008) =
       ~(*(ulonglong *)(&stack0xfffffffff80dffd7 + in_stack_00000008) | unaff_R15) + 1 + unaff_R15 +
       *(longlong *)(&stack0xfffffffff80dffd7 + in_stack_00000008);
  FUN_1618773a1();
  return;
}



// FUNCTION 14db6293c FUN_14db6293c body=171 status=ok
// SIG undefined FUN_14db6293c(void)

void FUN_14db6293c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  
  (*(code *)&LAB_15b1d4e68)(param_1,param_2,param_3,local_res8);
  return;
}



// FUNCTION 14db62a8f FUN_14db62a8f body=295 status=ok
// SIG undefined FUN_14db62a8f(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db62a8f(void)

{
  undefined1 local_res10 [24];
  
  FUN_1613c1c7a(FUN_1613c1c7a,0xfffffffffffffff8,local_res10);
  return;
}



// FUNCTION 14db62b20 FUN_14db62b20 body=95 status=ok
// SIG undefined FUN_14db62b20(void)

void FUN_14db62b20(void)

{
  return;
}



// FUNCTION 14db62c3d FUN_14db62c3d body=302 status=ok
// SIG undefined FUN_14db62c3d(void)

/* WARNING: Removing unreachable block (ram,0x00014db62cd7) */

void FUN_14db62c3d(undefined8 param_1,undefined8 param_2,short *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  short unaff_SI;
  undefined8 in_R11;
  undefined8 unaff_R14;
  undefined8 unaff_retaddr;
  longlong local_res20;
  
  *param_3 = unaff_SI + *param_3;
  *(undefined8 *)(local_res20 + -8) = param_4;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = unaff_R14;
  *(undefined8 *)(local_res20 + -8) = 0;
  uVar1 = *(undefined8 *)(local_res20 + -0x18);
  *(undefined8 *)(local_res20 + -0x18) = unaff_retaddr;
  *(undefined1 **)(local_res20 + -0x20) = &LAB_161ccacc6;
  lVar2 = *(longlong *)(local_res20 + -8);
  *(ulonglong *)(local_res20 + -8) =
       *(ulonglong *)(local_res20 + -8) & *(ulonglong *)(local_res20 + -0x20);
  *(longlong *)(local_res20 + -8) = *(longlong *)(local_res20 + -8) << 1;
  lVar2 = (lVar2 + *(ulonglong *)(local_res20 + -0x20)) - *(longlong *)(local_res20 + -8);
  *(longlong *)(local_res20 + -8) = lVar2;
  *(undefined8 *)(local_res20 + -0x18) = in_R11;
  *(undefined8 *)(local_res20 + -0x20) = uVar1;
  if (-1 < lVar2) {
    thunk_FUN_15b642ca5();
    return;
  }
  FUN_161ccac5f();
  return;
}



// FUNCTION 14db62d6f FUN_14db62d6f body=318 status=ok
// SIG undefined FUN_14db62d6f(void)

/* WARNING: Removing unreachable block (ram,0x00014db62dfb) */
/* WARNING: Removing unreachable block (ram,0x00014db62ea1) */
/* WARNING: Removing unreachable block (ram,0x00014db62ea6) */
/* WARNING: Removing unreachable block (ram,0x00014db62eac) */
/* WARNING: Removing unreachable block (ram,0x00014db62eb1) */
/* WARNING: Removing unreachable block (ram,0x00014db62f41) */
/* WARNING: Removing unreachable block (ram,0x0001617546ee) */
/* WARNING: Removing unreachable block (ram,0x00014db62f47) */

undefined8 FUN_14db62d6f(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  uint uVar2;
  uint in_R10D;
  
  uVar2 = (~(0xffffffff - param_4 & in_R10D) + in_R10D) - ~(0xffffffff - param_4);
  if (CARRY4(uVar2,param_4)) {
    return in_RAX;
  }
  uVar1 = FUN_162a5a479(param_1,param_2,uVar2);
  return uVar1;
}



// FUNCTION 14db62eb1 FUN_14db62eb1 body=356 status=ok
// SIG undefined FUN_14db62eb1(void)

/* WARNING: Removing unreachable block (ram,0x00014db62f47) */

void FUN_14db62eb1(undefined8 param_1,undefined8 param_2,ulonglong param_3,longlong param_4,
                  longlong param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  undefined8 in_R11;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  
  *(undefined8 *)(param_4 + 0x10) = in_R11;
  *(ulonglong *)(param_4 + 0x10) = ~param_3 | ~*(ulonglong *)(param_4 + 0x10);
  *(undefined8 *)(param_5 + -8) = unaff_R13;
  *(undefined8 *)(param_5 + -0x10) = local_res18;
  *(undefined8 *)(param_5 + -0x10) = unaff_retaddr;
  *(undefined8 *)(param_5 + -0x18) = unaff_retaddr;
  *(undefined4 *)(param_5 + -0x20) = 0xd7b7a4e;
  *(undefined4 *)(param_5 + -0x1c) = 0;
  lVar2 = *(longlong *)(param_5 + -0x20);
  *(undefined8 *)(param_5 + -0x20) = unaff_RBX;
  *(undefined8 *)(param_5 + -0x28) = unaff_R14;
  uVar3 = *(undefined8 *)(param_5 + -0x20);
  puVar1 = (undefined8 *)(param_5 + lVar2 + -0xd7b7a6e);
  *puVar1 = &LAB_14e0ebe8b;
  *puVar1 = uVar3;
  FUN_14e0ebe3a(param_1,param_2,local_res10,local_res8);
  return;
}



// FUNCTION 14db631cc FUN_14db631cc body=239 status=ok
// SIG undefined FUN_14db631cc(void)

undefined8 FUN_14db631cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_R12;
  
  uVar1 = FUN_165c2a427(param_1,unaff_R12 + unaff_RDI + 1,param_3,0xb559700a,
                        *(undefined8 *)(unaff_RSI + -8));
  return uVar1;
}



// FUNCTION 14db632f1 FUN_14db632f1 body=782 status=ok
// SIG undefined FUN_14db632f1(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000164f3c48b) overlaps instruction at (ram,0x000164f3c488)
    */
/* WARNING: Removing unreachable block (ram,0x000164f3c488) */
/* WARNING: Removing unreachable block (ram,0x00016211adc0) */
/* WARNING: Removing unreachable block (ram,0x00016211adc6) */
/* WARNING: Removing unreachable block (ram,0x00016211aed0) */
/* WARNING: Removing unreachable block (ram,0x00016211aed5) */
/* WARNING: Removing unreachable block (ram,0x00016211aedb) */
/* WARNING: Removing unreachable block (ram,0x00016211aee0) */
/* WARNING: Removing unreachable block (ram,0x0001566ef620) */
/* WARNING: Removing unreachable block (ram,0x0001566ef626) */
/* WARNING: Removing unreachable block (ram,0x00014d8a0538) */
/* WARNING: Removing unreachable block (ram,0x00014d8a05ac) */
/* WARNING: Removing unreachable block (ram,0x00014d8a05af) */
/* WARNING: Removing unreachable block (ram,0x00014d8a05cb) */
/* WARNING: Removing unreachable block (ram,0x00016211ad40) */
/* WARNING: Removing unreachable block (ram,0x00016211ada5) */
/* WARNING: Removing unreachable block (ram,0x00016211ada7) */
/* WARNING: Removing unreachable block (ram,0x000164f3c48b) */
/* WARNING: Removing unreachable block (ram,0x00014d8a05d1) */

undefined8 FUN_14db632f1(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_R12;
  
  uVar2 = *(ulonglong *)(unaff_R12 + unaff_RSI + param_2 + (unaff_RBP & param_2) * -2);
  uVar1 = *(ulonglong *)(unaff_R12 + -0xa0);
  uVar2 = FUN_161472f03(uVar2 + in_RAX + ~(~uVar2 | ~in_RAX) * -2);
  uVar1 = *(ulonglong *)((uVar1 ^ in_RAX) - 0x58);
  uVar3 = FUN_165f05ed5(~((~uVar2 | uVar1) & (uVar1 ^ 0xffffffffffffffff | uVar2)),FUN_165f05ed5);
  return uVar3;
}



// FUNCTION 14db633fb FUN_14db633fb body=135 status=ok
// SIG undefined FUN_14db633fb(void)

void FUN_14db633fb(undefined8 param_1,int param_2,int param_3)

{
  undefined8 in_stack_00000008;
  
  FUN_15690d2b7(param_1,-(param_2 + param_3 + 1),in_stack_00000008);
  return;
}



// FUNCTION 14db63505 FUN_14db63505 body=126 status=ok
// SIG undefined FUN_14db63505(void)

void FUN_14db63505(void)

{
  return;
}



// FUNCTION 14db63609 FUN_14db63609 body=283 status=ok
// SIG undefined FUN_14db63609(void)

/* WARNING: Removing unreachable block (ram,0x0001625b6047) */
/* WARNING: Removing unreachable block (ram,0x0001625b60d2) */
/* WARNING: Removing unreachable block (ram,0x000156dfb789) */
/* WARNING: Removing unreachable block (ram,0x0001569fcc1f) */
/* WARNING: Removing unreachable block (ram,0x0001569fcc25) */
/* WARNING: Removing unreachable block (ram,0x00016487df2b) */
/* WARNING: Removing unreachable block (ram,0x00016487df31) */
/* WARNING: Removing unreachable block (ram,0x00014db63688) */
/* WARNING: Removing unreachable block (ram,0x000164ee9a75) */
/* WARNING: Removing unreachable block (ram,0x00016616d015) */
/* WARNING: Removing unreachable block (ram,0x00016487de36) */
/* WARNING: Removing unreachable block (ram,0x00016487de3f) */
/* WARNING: Removing unreachable block (ram,0x0001625d84f1) */
/* WARNING: Removing unreachable block (ram,0x00016487dea9) */
/* WARNING: Removing unreachable block (ram,0x00016487deb4) */
/* WARNING: Removing unreachable block (ram,0x00016487def8) */
/* WARNING: Removing unreachable block (ram,0x00016487def3) */
/* WARNING: Removing unreachable block (ram,0x00016487df04) */
/* WARNING: Removing unreachable block (ram,0x00016616d00f) */
/* WARNING: Removing unreachable block (ram,0x000164ee99d1) */
/* WARNING: Removing unreachable block (ram,0x000164ee9a10) */
/* WARNING: Removing unreachable block (ram,0x000164ee9a3e) */
/* WARNING: Removing unreachable block (ram,0x000164ee9a6f) */
/* WARNING: Removing unreachable block (ram,0x0001569fcb82) */
/* WARNING: Removing unreachable block (ram,0x00016487deaf) */
/* WARNING: Removing unreachable block (ram,0x00014e2050cd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14db63609(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14e2050cd();
  return uVar1;
}



// FUNCTION 14db63873 FUN_14db63873 body=14 status=ok
// SIG undefined FUN_14db63873(void)

void FUN_14db63873(void)

{
  FUN_1574ba9da();
  return;
}



// FUNCTION 14db63915 FUN_14db63915 body=60 status=ok
// SIG undefined FUN_14db63915(void)

void FUN_14db63915(void)

{
  undefined2 *unaff_RSI;
  undefined8 in_R10;
  undefined2 unaff_R15W;
  longlong local_res20;
  
  *unaff_RSI = unaff_R15W;
  *(undefined8 *)(local_res20 + -8) = 0x57d7f7a;
  *(undefined8 *)(local_res20 + -0x10) = in_R10;
  *(undefined8 *)(local_res20 + -0x18) = in_R10;
  *(undefined1 **)(local_res20 + -0x10) = &LAB_14db63952;
  return;
}



// FUNCTION 14db63d2c FUN_14db63d2c body=14 status=ok
// SIG undefined FUN_14db63d2c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14db63d2c(void)

{
  in(0x21);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14db63e83 FUN_14db63e83 body=319 status=ok
// SIG undefined FUN_14db63e83(void)

/* WARNING: Removing unreachable block (ram,0x00014db63f26) */
/* WARNING: Removing unreachable block (ram,0x00014db63f2c) */
/* WARNING: Removing unreachable block (ram,0x00014db63f7f) */
/* WARNING: Removing unreachable block (ram,0x00014db63f86) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14db63e83(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1627a82fe(param_1,param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 14db63f2c FUN_14db63f2c body=129 status=ok
// SIG undefined FUN_14db63f2c(void)

void FUN_14db63f2c(undefined1 param_1)

{
  undefined1 uVar1;
  char in_AL;
  undefined8 unaff_R15;
  longlong local_res18;
  
                    /* WARNING: Read-only address (ram,0x00014d7a77a1) is written */
  LOCK();
  uVar1 = param_1;
  if (in_AL != '\0') {
    uVar1 = uRam000000014d7a77a1;
  }
  uRam000000014d7a77a1 = uVar1;
  UNLOCK();
  *(undefined8 *)(local_res18 + -8) = 0x1404824;
  *(undefined8 *)(local_res18 + -0x10) = unaff_R15;
  *(undefined8 *)(local_res18 + -0x18) = unaff_R15;
  *(code **)(local_res18 + -0x10) = FUN_15b3d5987;
  return;
}



// FUNCTION 14db640ff FUN_14db640ff body=139 status=ok
// SIG undefined FUN_14db640ff(void)

void FUN_14db640ff(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  undefined8 unaff_retaddr;
  ulonglong in_stack_00000010;
  undefined8 uStackX_18;
  
  FUN_162f4044a(param_1,param_2,unaff_retaddr,(uStackX_18 + in_RAX) - (uStackX_18 & in_RAX),
                in_stack_00000010 ^ in_RAX);
  FUN_14d85d504(param_1);
  return;
}



// FUNCTION 14db6418c FUN_14db6418c body=76 status=ok
// SIG undefined FUN_14db6418c(void)

void FUN_14db6418c(undefined8 param_1)

{
  FUN_14d85d504(param_1);
  return;
}



// FUNCTION 14db64227 FUN_14db64227 body=129 status=ok
// SIG undefined FUN_14db64227(void)

void FUN_14db64227(undefined8 param_1,undefined8 param_2)

{
  FUN_14dc0498c(param_1,param_2,0x5b388d7e);
  return;
}



// FUNCTION 14db642a9 FUN_14db642a9 body=99 status=ok
// SIG undefined FUN_14db642a9(void)

void FUN_14db642a9(void)

{
  return;
}



// FUNCTION 14db643b6 FUN_14db643b6 body=615 status=ok
// SIG undefined FUN_14db643b6(void)

/* WARNING: Removing unreachable block (ram,0x00014db6457d) */

void FUN_14db643b6(void)

{
  byte bVar1;
  
  FUN_1657d8013();
  bVar1 = 0;
  FUN_160d4b075();
  if ((bVar1 & 1) != 0) {
    FUN_1618bc4b1();
    return;
  }
  FUN_1618bc4b1();
  return;
}



// FUNCTION 14db64620 FUN_14db64620 body=309 status=ok
// SIG undefined FUN_14db64620(void)

undefined8 FUN_14db64620(ulonglong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  uVar1 = FUN_156d18ff8(param_1,(~(*(ulonglong *)(unaff_RDI + -0x40) & param_1) + param_1) -
                                ~*(ulonglong *)(unaff_RDI + -0x40));
  return uVar1;
}



// FUNCTION 14db64758 FUN_14db64758 body=298 status=ok
// SIG undefined FUN_14db64758(void)

/* WARNING: Removing unreachable block (ram,0x00014db647e0) */
/* WARNING: Removing unreachable block (ram,0x00014db647e6) */

undefined8 FUN_14db64758(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db64acf FUN_14db64acf body=79 status=ok
// SIG undefined FUN_14db64acf(void)

void FUN_14db64acf(void)

{
  ulonglong in_RAX;
  ulonglong *puVar1;
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  puVar1 = (ulonglong *)(CONCAT44(uStackX_c,local_res8) & 0x7fffffffffffffff);
  if (uStackX_c < 0) {
    in_RAX = in_RAX & 0xffffffff ^ 0xab9f8da33fe72828;
    *puVar1 = in_RAX;
  }
  *(int *)puVar1 = (int)in_RAX;
  thunk_FUN_156b249bc();
  return;
}



// FUNCTION 14db64b1f FUN_14db64b1f body=144 status=ok
// SIG undefined FUN_14db64b1f(void)

/* WARNING: Removing unreachable block (ram,0x00014db64b5a) */

void FUN_14db64b1f(void)

{
  ulonglong unaff_retaddr;
  ulonglong local_res8;
  
  if ((longlong)local_res8 < 0) {
    unaff_retaddr = unaff_retaddr & 0xffffffff ^ 0xab9f8da33fe72828;
    *(ulonglong *)(local_res8 & 0x7fffffffffffffff) = unaff_retaddr;
  }
  *(int *)(local_res8 & 0x7fffffffffffffff) = (int)unaff_retaddr;
  thunk_FUN_156b249bc();
  return;
}



// FUNCTION 14db64b5a FUN_14db64b5a body=273 status=ok
// SIG undefined FUN_14db64b5a(void)

void FUN_14db64b5a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 in_RAX;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  undefined8 in_R10;
  longlong unaff_R12;
  undefined8 local_res8;
  longlong alStackX_10 [3];
  
  puVar1 = (undefined8 *)((longlong)alStackX_10 + unaff_RBP + 8);
  uVar4 = *puVar1;
  *puVar1 = param_3;
  *(undefined8 *)(&stack0x00000028 + unaff_RBP) = in_RAX;
  uVar2 = *puVar1;
  *(undefined8 *)((longlong)alStackX_10 + unaff_RBP + 0x10) = *(undefined8 *)(param_1 + -0xa0);
  uVar5 = *(ulonglong *)((longlong)alStackX_10 + unaff_RBP + 0x10);
  *(undefined8 *)((longlong)alStackX_10 + unaff_RBP + 0x10) = uVar4;
  uVar3 = *(ulonglong *)(&stack0x00000028 + unaff_RBP);
  *(undefined8 *)((longlong)alStackX_10 + unaff_RBP + 8) = in_R10;
  *(ulonglong *)((longlong)alStackX_10 + unaff_RBP) = unaff_RBX - 1;
  *(ulonglong *)((longlong)alStackX_10 + unaff_RBP) =
       *(longlong *)((longlong)alStackX_10 + unaff_RBP) - ~uVar3;
  uVar4 = *(undefined8 *)((longlong)alStackX_10 + unaff_RBP);
  uVar6 = *(undefined8 *)((longlong)alStackX_10 + unaff_RBP + 8);
  *(ulonglong *)((longlong)alStackX_10 + unaff_RBP + 8) = uVar5 ^ unaff_RBX;
  *(undefined8 *)((longlong)alStackX_10 + unaff_RBP) = uVar6;
  *(undefined8 *)((longlong)&local_res8 + unaff_RBP) = uVar4;
  *(undefined4 *)((longlong)&local_res8 + unaff_RBP) = 0x1f1bbed;
  *(undefined4 *)((longlong)alStackX_10 + unaff_RBP + -4) = 0;
  *(undefined8 *)((longlong)&local_res8 + unaff_RBP) = 0x14db64be3;
  FUN_162765fd1(FUN_162765fd1,param_2,uVar2);
  uVar5 = *(ulonglong *)((longlong)alStackX_10 + unaff_RBP + 8);
  *(undefined8 *)((longlong)alStackX_10 + unaff_RBP + 8) = param_4;
  uVar3 = *(ulonglong *)(unaff_R12 + -0x58);
  *(longlong *)((longlong)alStackX_10 + unaff_RBP + 8) = unaff_R12;
  FUN_161695ba1(~(uVar3 & uVar5) & (uVar3 | uVar5),
                *(ulonglong *)(*(longlong *)((longlong)alStackX_10 + unaff_RBP + 8) + -0x78) ^ uVar5
               );
  return;
}



// FUNCTION 14db64e62 FUN_14db64e62 body=1377 status=ok
// SIG undefined FUN_14db64e62(void)

/* WARNING: Removing unreachable block (ram,0x00015b0f91f2) */
/* WARNING: Removing unreachable block (ram,0x00015b0f9284) */
/* WARNING: Removing unreachable block (ram,0x00015b0f9289) */
/* WARNING: Removing unreachable block (ram,0x00015b0f928f) */
/* WARNING: Removing unreachable block (ram,0x000164b50298) */
/* WARNING: Removing unreachable block (ram,0x000160fb4a52) */
/* WARNING: Removing unreachable block (ram,0x000160fb4a58) */
/* WARNING: Removing unreachable block (ram,0x00014db64f10) */

void FUN_14db64e62(void)

{
  uint uVar1;
  ulonglong uVar2;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 local_res8;
  
  local_res8 = CONCAT44(~local_res8._4_4_,(uint)local_res8);
  uVar2 = local_res8 + 0x34a36efb;
  uVar1 = (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW8(local_res8,-0x34a36efb) * 0x800 |
          (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((longlong)uVar2 < 0) * 0x80
          | (uint)(uVar2 == 0) * 0x40 | (uint)(in_AF & 1) * 0x10 |
          (uint)((POPCOUNT(uVar2 & 0xff) & 1U) == 0) * 4 | (uint)(local_res8 < 0xffffffffcb5c9105);
  local_res8._0_4_ =
       uVar1 | (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
       (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  uVar1 = uVar1 << 0x19 | (uint)local_res8 >> 7;
  if ((int)((-0x2000000 - (uVar1 | 0xfe000000)) + uVar1) < 0) {
    return;
  }
  FUN_160fb48f7(FUN_160fb48f7);
  return;
}



// FUNCTION 14db650e8 FUN_14db650e8 body=705 status=ok
// SIG undefined FUN_14db650e8(void)

/* WARNING: Removing unreachable block (ram,0x00014db65183) */
/* WARNING: Removing unreachable block (ram,0x00014db65189) */
/* WARNING: Removing unreachable block (ram,0x00014db651fa) */
/* WARNING: Removing unreachable block (ram,0x0001656fafaf) */

undefined8 FUN_14db650e8(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = FUN_16651a045(~param_1,0xffffffffffffffff -
                                 (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) &
                                 (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15),param_3);
  return uVar1;
}



// FUNCTION 14db652be FUN_14db652be body=144 status=ok
// SIG undefined FUN_14db652be(void)

/* WARNING: Removing unreachable block (ram,0x00014db65348) */
/* WARNING: Removing unreachable block (ram,0x00014db6534e) */

undefined8 FUN_14db652be(void)

{
  longlong lVar1;
  void *pvVar2;
  ushort uVar3;
  undefined8 unaff_R15;
  ulonglong uVar4;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  undefined2 local_res10;
  undefined6 uStackX_12;
  undefined8 local_res18;
  
  pvVar2 = ProcessEnvironmentBlock;
  uVar3 = ~(~local_res10 & 0xfeff) - 0x100;
  *(undefined8 *)(local_res18 + -8) = unaff_retaddr;
  *(undefined8 *)(local_res18 + -0x10) = unaff_retaddr;
  *(void **)(local_res18 + -0x18) = pvVar2;
  *(undefined4 *)(local_res18 + -0x18) = 0x7ab3684;
  *(undefined8 *)(local_res18 + -0x20) = unaff_retaddr;
  *(ulonglong *)(local_res18 + -0x28) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uStackX_12 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_12 & 4) != 0) * 0x40000;
  *(undefined4 *)(local_res18 + -0x14) = 0;
  uVar4 = *(ulonglong *)(local_res18 + -0x28);
  lVar1 = *(longlong *)(local_res18 + -0x18);
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)((uVar4 & 1) != 0) |
       (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
  *(void **)(local_res18 + -0x20) = pvVar2;
  *(undefined8 *)(local_res18 + -0x28) = unaff_R15;
  *(longlong *)(local_res18 + -8) = lVar1 + -0x4bd804a;
  *(undefined8 *)(local_res18 + -0x10) = uStackX_8;
  *(undefined8 *)(local_res18 + -0x18) = uStackX_8;
  *(undefined8 *)(local_res18 + -0x10) = 0x156ef2e25;
  return *(undefined8 *)(local_res18 + -0x20);
}



// FUNCTION 14db6534e FUN_14db6534e body=44 status=ok
// SIG undefined FUN_14db6534e(void)

void FUN_14db6534e(void)

{
  return;
}



// FUNCTION 14db653f3 FUN_14db653f3 body=130 status=ok
// SIG undefined FUN_14db653f3(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014db6543e) */
/* WARNING: Removing unreachable block (ram,0x000164fad391) */
/* WARNING: Removing unreachable block (ram,0x00014db65472) */

undefined8 FUN_14db653f3(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = -~*(ulonglong *)(unaff_R13 + -0x78) - 1;
  uVar4 = uVar2 + unaff_R15;
  uVar2 = uVar2 & unaff_R15;
  if (uVar4 < uVar2 * 2) {
    uVar3 = ~((unaff_R15 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_R13 + -0x28)) &
             (~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15));
    FUN_15748a808(uVar4 + uVar2 * -2);
    *(uint *)(uVar3 - 0x315bde10) = *(uint *)(uVar3 - 0x315bde10) ^ 1;
    uRam000000015748a86a = 100;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = FUN_165e48979();
  return uVar1;
}



// FUNCTION 14db65478 FUN_14db65478 body=182 status=ok
// SIG undefined FUN_14db65478(void)

void FUN_14db65478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RSI;
  
  (*(code *)0x1620e743d)(param_1,param_2,param_3,param_4,*(undefined8 *)(unaff_RSI + -0x88));
  return;
}



// FUNCTION 14db655e0 FUN_14db655e0 body=55 status=ok
// SIG undefined FUN_14db655e0(void)

void FUN_14db655e0(void)

{
  return;
}



// FUNCTION 14db65701 FUN_14db65701 body=165 status=ok
// SIG undefined FUN_14db65701(void)

/* WARNING: Removing unreachable block (ram,0x00014db65782) */

void FUN_14db65701(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong lVar1;
  undefined8 unaff_RBX;
  short *unaff_RBP;
  undefined8 unaff_R14;
  ushort unaff_R15W;
  short unaff_retaddr;
  undefined8 local_res8;
  undefined8 uStackX_10;
  ulonglong uStackX_20;
  
  *unaff_RBP = (-0x100 - (~-(~(unaff_retaddr + 0x473dU | ~unaff_R15W) | unaff_retaddr + 0x473dU) + 2
                         )) + *unaff_RBP;
  *(undefined8 *)(param_5 + -8) = uStackX_10;
  *(undefined8 *)(param_5 + -0x10) = uStackX_10;
  *(undefined4 *)(param_5 + -0x18) = 0x50e62f3;
  *(undefined4 *)(param_5 + -0x14) = 0;
  lVar1 = *(longlong *)(param_5 + -0x18);
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
  *(undefined8 *)(param_5 + -0x20) = unaff_RBX;
  *(undefined8 *)(param_5 + -0x28) = local_res8;
  *(undefined4 *)(param_5 + -0x28) = 0x1e0a62f3;
  *(undefined4 *)(param_5 + -0x24) = 0;
  *(ulonglong *)(param_5 + -8) = lVar1 - (*(ulonglong *)(param_5 + -0x28) ^ 0x1d4567da);
  *(undefined8 *)(param_5 + -0x10) = local_res8;
  *(undefined8 *)(param_5 + -0x18) = local_res8;
  *(code **)(param_5 + -0x10) = FUN_14d85d504;
  *(undefined8 *)(param_5 + -0x20) = unaff_R14;
  *(undefined8 *)(param_5 + -0x28) = unaff_R14;
  *(code **)(param_5 + -0x20) = FUN_15b3e6c6a;
  FUN_166c7bdc3(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14db658f2 thunk_FUN_156b249bc body=5 status=ok
// SIG undefined thunk_FUN_156b249bc(void)

void thunk_FUN_156b249bc(void)

{
  FUN_156b249bc();
  return;
}



// FUNCTION 14db6590f FUN_14db6590f body=147 status=ok
// SIG undefined FUN_14db6590f(void)

void FUN_14db6590f(undefined8 param_1,undefined8 param_2)

{
  FUN_1651e8caa(param_1,param_2);
  return;
}



// FUNCTION 14db659a3 FUN_14db659a3 body=462 status=ok
// SIG undefined FUN_14db659a3(void)

void FUN_14db659a3(void)

{
  ulonglong uVar1;
  byte unaff_BL;
  byte unaff_BPL;
  
  FUN_1651f35b0();
  uVar1 = (ulonglong)(byte)((unaff_BPL ^ 0xff) & unaff_BL | unaff_BPL);
  FUN_16199b1f6();
  FUN_15787f396(uVar1);
  return;
}



// FUNCTION 14db65cb0 FUN_14db65cb0 body=79 status=ok
// SIG undefined FUN_14db65cb0(void)

void FUN_14db65cb0(void)

{
  return;
}



// FUNCTION 14db65d42 FUN_14db65d42 body=129 status=ok
// SIG undefined FUN_14db65d42(void)

void FUN_14db65d42(void)

{
  FUN_1564e2c65();
  return;
}



// FUNCTION 14db65f0c FUN_14db65f0c body=159 status=ok
// SIG undefined FUN_14db65f0c(void)

void FUN_14db65f0c(void)

{
  return;
}



// FUNCTION 14db66264 FUN_14db66264 body=198 status=ok
// SIG undefined FUN_14db66264(void)

void FUN_14db66264(void)

{
  return;
}



// FUNCTION 14db663cd FUN_14db663cd body=71 status=ok
// SIG undefined FUN_14db663cd(void)

void FUN_14db663cd(void)

{
  return;
}



// FUNCTION 14db66457 FUN_14db66457 body=372 status=ok
// SIG undefined FUN_14db66457(void)

void FUN_14db66457(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_1661ef6f3(FUN_1661ef6f3,param_2,
                -1 - ((~in_RAX | *(ulonglong *)(unaff_R12 + -0x80)) &
                     (~*(ulonglong *)(unaff_R12 + -0x80) | in_RAX)),
                *(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
  return;
}



// FUNCTION 14db66571 thunk_FUN_14db66577 body=5 status=ok
// SIG undefined thunk_FUN_14db66577(void)

void thunk_FUN_14db66577(undefined8 param_1,undefined8 param_2)

{
  FUN_156ae0a8a(param_1,param_2,FUN_156ae0a8a);
  return;
}



// FUNCTION 14db66577 FUN_14db66577 body=91 status=ok
// SIG undefined FUN_14db66577(void)

void FUN_14db66577(undefined8 param_1,undefined8 param_2)

{
  FUN_156ae0a8a(param_1,param_2,FUN_156ae0a8a);
  return;
}



// FUNCTION 14db6679a FUN_14db6679a body=136 status=ok
// SIG undefined FUN_14db6679a(void)

void FUN_14db6679a(byte param_1)

{
  char cVar1;
  byte bVar2;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R14;
  bool bVar3;
  bool bVar4;
  byte unaff_retaddr;
  ushort local_res8;
  uint6 uStackX_a;
  longlong local_res10;
  
  LOCK();
  bVar3 = unaff_retaddr < DAT_14d7c0124;
  bVar4 = SBORROW1(unaff_retaddr,DAT_14d7c0124);
  cVar1 = unaff_retaddr - DAT_14d7c0124;
  bVar2 = param_1;
  if (cVar1 != '\0') {
    bVar2 = DAT_14d7c0124;
  }
  DAT_14d7c0124 = bVar2;
  UNLOCK();
  *(undefined8 *)(local_res10 + -8) = unaff_RDI;
  *(undefined8 *)(local_res10 + -0x10) = unaff_RDI;
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((local_res8 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar4 * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res8 & 0x200) != 0) * 0x200 | (ulonglong)(cVar1 < '\0') * 0x80 |
       (ulonglong)(cVar1 == '\0') * 0x40 | (ulonglong)((local_res8 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar1) & 1U) == 0) * 4 | (ulonglong)bVar3 |
       (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 | (ulonglong)((uStackX_a & 4) != 0) * 0x40000
  ;
  *(undefined8 *)(local_res10 + -0x20) = in_R10;
  *(undefined8 *)(local_res10 + -0x28) = unaff_R14;
  *(undefined8 *)(local_res10 + -8) = 0x2844c12;
  *(undefined8 *)(local_res10 + -0x10) = unaff_RBX;
  *(undefined8 *)(local_res10 + -0x18) = unaff_RBX;
  *(code **)(local_res10 + -0x10) = FUN_14d85d504;
  (*(code *)0x1646d4201)();
  return;
}



// FUNCTION 14db66825 FUN_14db66825 body=186 status=ok
// SIG undefined FUN_14db66825(void)

void FUN_14db66825(void)

{
  return;
}



// FUNCTION 14db668e1 FUN_14db668e1 body=148 status=ok
// SIG undefined FUN_14db668e1(void)

void FUN_14db668e1(undefined8 param_1)

{
  FUN_16291f9d3(param_1);
  return;
}



// FUNCTION 14db66977 FUN_14db66977 body=138 status=ok
// SIG undefined FUN_14db66977(void)

void FUN_14db66977(void)

{
  longlong in_RAX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  longlong unaff_R12;
  undefined8 unaff_retaddr;
  undefined8 local_res20;
  
  *(ulonglong *)(unaff_R12 + 8) =
       ~(0xffffffffffffffffU - unaff_RDI & 0xffffffffffffffffU - unaff_RBP) + in_RAX + 1;
  FUN_14d970d68(FUN_14d970d68,local_res20,unaff_retaddr);
  return;
}



// FUNCTION 14db66abc FUN_14db66abc body=128 status=ok
// SIG undefined FUN_14db66abc(void)

void FUN_14db66abc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_166b99f8d(param_1,param_2,param_3);
  return;
}



// FUNCTION 14db66c7c FUN_14db66c7c body=125 status=ok
// SIG undefined FUN_14db66c7c(void)

/* WARNING: Removing unreachable block (ram,0x00014db66cf6) */
/* WARNING: Removing unreachable block (ram,0x00014db66cfc) */

undefined8 FUN_14db66c7c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong unaff_R12;
  
  uVar1 = FUN_1627e0087(-(param_1 - *(longlong *)(unaff_R12 + -0x58)) ^ in_RAX,
                        *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX,param_3);
  return uVar1;
}



// FUNCTION 14db66cfc FUN_14db66cfc body=45 status=ok
// SIG undefined FUN_14db66cfc(void)

undefined8 FUN_14db66cfc(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 unaff_retaddr;
  undefined8 *local_res10;
  
  pcVar1 = (code *)swi(0x2e);
  uVar2 = (*pcVar1)(param_1,unaff_retaddr);
  *local_res10 = 0x32f7bba;
  local_res10[-1] = uVar2;
  local_res10[-2] = uVar2;
  local_res10[-1] = 0x156ef2e25;
  return local_res10[-2];
}



// FUNCTION 14db66d95 FUN_14db66d95 body=309 status=ok
// SIG undefined FUN_14db66d95(void)

/* WARNING: Removing unreachable block (ram,0x00014db66e30) */
/* WARNING: Removing unreachable block (ram,0x00014db66e36) */

ulonglong FUN_14db66d95(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x38)) &
          (~*(ulonglong *)(unaff_R13 + -0x38) | unaff_R15));
}



// FUNCTION 14db66e36 FUN_14db66e36 body=317 status=ok
// SIG undefined FUN_14db66e36(void)

void FUN_14db66e36(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  lVar1 = *(longlong *)(unaff_R13 + -0xa0);
  FUN_161091bf5(param_1,param_2);
  uVar3 = *(ulonglong *)(lVar1 + -0x90);
  uVar2 = ~unaff_R15 | uVar3;
  uVar3 = ~uVar3 | unaff_R15;
  FUN_15afd94d1((uVar3 - (uVar2 | uVar3)) + uVar2);
  return;
}



// FUNCTION 14db670cd FUN_14db670cd body=175 status=ok
// SIG undefined FUN_14db670cd(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db670cd(undefined8 param_1,undefined8 param_2,int param_3)

{
  int in_R10D;
  undefined8 in_stack_00000008;
  
  FUN_15b71e62c(FUN_15b71e62c,param_2,param_3 + in_R10D + -1,in_stack_00000008);
  return;
}



// FUNCTION 14db67185 FUN_14db67185 body=142 status=ok
// SIG undefined FUN_14db67185(void)

void FUN_14db67185(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  FUN_156cb8361(param_1,param_2,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14db67215 FUN_14db67215 body=163 status=ok
// SIG undefined FUN_14db67215(void)

/* WARNING: Removing unreachable block (ram,0x00014db672ad) */
/* WARNING: Removing unreachable block (ram,0x00014db672b8) */
/* WARNING: Removing unreachable block (ram,0x00014db672b3) */

ulonglong FUN_14db67215(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return ((~param_1 | *(ulonglong *)(unaff_RDI + -0x80)) + param_1 + 1 ^ 0xffffffffffffffff) &
         (*(ulonglong *)(unaff_RDI + -0x80) | param_1);
}



// FUNCTION 14db672b8 FUN_14db672b8 body=133 status=ok
// SIG undefined FUN_14db672b8(void)

void FUN_14db672b8(void)

{
  FUN_157295812();
  return;
}



// FUNCTION 14db6734f FUN_14db6734f body=147 status=ok
// SIG undefined FUN_14db6734f(void)

void FUN_14db6734f(void)

{
  longlong unaff_R14;
  
  if (unaff_R14 == 0xe3eef) {
    FUN_1574ba9da();
    return;
  }
  if (unaff_R14 == 0xe3ef0) {
    FUN_16674c614();
    return;
  }
  if (unaff_R14 == 0xe3ef1) {
    return;
  }
  return;
}



// FUNCTION 14db673e3 FUN_14db673e3 body=163 status=ok
// SIG undefined FUN_14db673e3(void)

/* WARNING: Removing unreachable block (ram,0x00014db67489) */

undefined8 FUN_14db673e3(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  if (~(~*(ulonglong *)(unaff_RDI + -0x80) & param_1) + param_1 < *(ulonglong *)(unaff_RDI + -0x80))
  {
    uVar1 = FUN_1652809f8();
    return uVar1;
  }
  uVar1 = (*(code *)&LAB_161c9670f)
                    (param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,
                     *(ulonglong *)(unaff_RDI + -0x70) ^ param_1,param_4 ^ param_1);
  return uVar1;
}



// FUNCTION 14db67489 FUN_14db67489 body=143 status=ok
// SIG undefined FUN_14db67489(void)

undefined8 FUN_14db67489(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db6751a FUN_14db6751a body=144 status=ok
// SIG undefined FUN_14db6751a(void)

void FUN_14db6751a(undefined8 param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong unaff_RDI;
  undefined1 in_R10B;
  undefined7 in_register_00000091;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 local_res18;
  
  uVar2 = ~(local_res18 & unaff_R15) & (local_res18 | unaff_R15);
  puVar1 = (ulonglong *)(uVar2 - 8);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ unaff_RDI;
  *(ulonglong *)(uVar2 - 0x10) = CONCAT71(in_register_00000091,in_R10B);
  *(undefined8 *)(uVar2 - 0x18) = unaff_R14;
  *(ulonglong *)(uVar2 - 0x20) = unaff_RDI;
  *(undefined8 *)(uVar2 - 0x28) = 0x14db675a6;
  FUN_156a6a4d4(param_1);
  FUN_14db675ac();
  return;
}



// FUNCTION 14db675ac FUN_14db675ac body=46 status=ok
// SIG undefined FUN_14db675ac(void)

void FUN_14db675ac(void)

{
  undefined8 unaff_RSI;
  ulonglong unaff_R14;
  undefined8 auStackX_18 [2];
  
  *(undefined8 *)
   ((longlong)auStackX_18 + ~(~(unaff_R14 & 0xffffffffc55b85a8) & (unaff_R14 | 0xffffffffc55b85a8)))
       = unaff_RSI;
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14db676c4 FUN_14db676c4 body=131 status=ok
// SIG undefined FUN_14db676c4(void)

void FUN_14db676c4(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_RDI;
  ulonglong unaff_R15;
  
  FUN_1669438db(param_1,0xffffffffffffffff - (param_2 & unaff_R15) & unaff_RDI);
  return;
}



// FUNCTION 14db67747 FUN_14db67747 body=147 status=ok
// SIG undefined FUN_14db67747(void)

void FUN_14db67747(undefined8 param_1,undefined8 param_2)

{
  FUN_1669e60d3(param_1,param_2);
  return;
}



// FUNCTION 14db6786f FUN_14db6786f body=149 status=ok
// SIG undefined FUN_14db6786f(void)

void FUN_14db6786f(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000008;
  
  (*(code *)0x16522af63)(0x16522af63,param_2,in_stack_00000008);
  return;
}



// FUNCTION 14db679a0 FUN_14db679a0 body=138 status=ok
// SIG undefined FUN_14db679a0(void)

void FUN_14db679a0(undefined8 param_1,undefined8 param_2)

{
  ulonglong unaff_RBP;
  longlong unaff_R12;
  undefined8 in_stack_00000008;
  
  FUN_1619c55a8(param_1,param_2,
                (~(*(ulonglong *)(unaff_R12 + -0xa0) & unaff_RBP) + unaff_RBP) -
                ~*(ulonglong *)(unaff_R12 + -0xa0),in_stack_00000008);
  return;
}



// FUNCTION 14db67b2c FUN_14db67b2c body=488 status=ok
// SIG undefined FUN_14db67b2c(void)

/* WARNING: Removing unreachable block (ram,0x00014db67bc6) */
/* WARNING: Removing unreachable block (ram,0x00014db67bcc) */
/* WARNING: Removing unreachable block (ram,0x0001654a9129) */
/* WARNING: Removing unreachable block (ram,0x0001652d434e) */

void FUN_14db67b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R12;
  ulonglong in_stack_00000018;
  
  if ((int)*(undefined8 *)(unaff_R12 + -0x48) != 0) {
    FUN_14d83421c(-1 - ~*(ulonglong *)(unaff_R12 + -0x90),
                  -1 - ((~in_stack_00000018 | *(ulonglong *)(unaff_R12 + -0x78)) &
                       (0xffffffffffffffff - *(ulonglong *)(unaff_R12 + -0x78) | in_stack_00000018))
                  ,param_3);
    return;
  }
  FUN_1654a90a6();
  return;
}



// FUNCTION 14db67f52 FUN_14db67f52 body=161 status=ok
// SIG undefined FUN_14db67f52(void)

/* WARNING: Removing unreachable block (ram,0x00014db67fca) */

ulonglong FUN_14db67f52(void)

{
  longlong unaff_RBX;
  ulonglong unaff_RBP;
  longlong local_res8;
  
  return local_res8 - unaff_RBX ^ unaff_RBP;
}



// FUNCTION 14db68011 FUN_14db68011 body=123 status=ok
// SIG undefined FUN_14db68011(void)

void FUN_14db68011(void)

{
  return;
}



// FUNCTION 14db6808d FUN_14db6808d body=419 status=ok
// SIG undefined FUN_14db6808d(void)

/* WARNING: Removing unreachable block (ram,0x00014db68112) */
/* WARNING: Removing unreachable block (ram,0x00014db6811e) */
/* WARNING: Removing unreachable block (ram,0x00016158082d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db6808d(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong unaff_RBP;
  ulonglong uVar6;
  longlong unaff_RDI;
  longlong lVar7;
  int unaff_R14D;
  ulonglong local_res10;
  ulonglong local_res18;
  
  if (-1 < (longlong)(~(~unaff_RBP & local_res10) + local_res10 + 1)) {
    FUN_15b6e8e04();
    return;
  }
  lVar3 = (local_res18 & unaff_RBP) * 2;
  FUN_1663ae374(param_1,param_2,param_3,param_4);
  uVar2 = *(ulonglong *)(param_2 + -0x30);
  lVar7 = uVar2 + 0x5b74249df7e95353;
  uVar5 = 0xa48bdb620816acac;
  FUN_165cc34ed();
  if (unaff_R14D < 0) {
    return;
  }
  puVar1 = (ulonglong *)(lVar3 + -8);
  *puVar1 = (ulonglong)FUN_1663ae374;
  *(code **)(lVar3 + -0x10) = FUN_15b6e8fb3;
  uVar4 = FUN_14e12ae66();
  *(undefined4 *)puVar1 = 0x5f0afd95;
  *(undefined4 *)(lVar3 + -4) = 0;
  uVar6 = *puVar1 ^ 0x5f0afd95 ^ *(ulonglong *)(unaff_RDI + -0x88);
  *puVar1 = ~uVar2;
  *(undefined8 *)(lVar3 + -8) = *(undefined8 *)(unaff_RDI + -0x90);
  *(longlong *)(lVar3 + -0x10) = lVar7;
  *(longlong *)(lVar3 + -0x18) = lVar7;
  *(undefined8 *)(lVar3 + -0x10) = *(undefined8 *)(unaff_RDI + -8);
  *(undefined8 *)(lVar3 + -0x18) = *(undefined8 *)(unaff_RDI + -0x98);
  *(undefined8 *)(lVar3 + -0x20) = uVar4;
  *(ulonglong *)(lVar3 + -0x30) = ~(uVar6 & uVar5) & (uVar6 | uVar5);
  *(undefined8 *)(lVar3 + -0x28) = *(undefined8 *)(unaff_RDI + -0xa0);
  FUN_156579998();
  return;
}



// FUNCTION 14db6811e FUN_14db6811e body=227 status=ok
// SIG undefined FUN_14db6811e(void)

void FUN_14db6811e(undefined8 param_1,undefined8 param_2,ushort param_3,short param_4)

{
  ushort in_R10W;
  ushort unaff_R15W;
  undefined8 uStackX_18;
  
  FUN_1657af5d0(((param_4 + ~(param_3 & unaff_R15W)) - ~in_R10W) + 1,param_2,FUN_1657af5d0,
                uStackX_18);
  return;
}



// FUNCTION 14db681bd FUN_14db681bd body=156 status=ok
// SIG undefined FUN_14db681bd(void)

void FUN_14db681bd(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong unaff_R12;
  longlong unaff_R14;
  longlong local_res10 [3];
  
  *(undefined8 *)((longlong)local_res10 + unaff_R14) = 0;
  *(longlong *)((longlong)local_res10 + unaff_R14) =
       *(longlong *)((longlong)local_res10 + unaff_R14) + param_3;
  lVar1 = local_res10[0];
  local_res10[0] = *(longlong *)(unaff_R12 + -8);
  FUN_162d4cd6b(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14db6825c FUN_14db6825c body=199 status=ok
// SIG undefined FUN_14db6825c(void)

void FUN_14db6825c(void)

{
  return;
}



// FUNCTION 14db68325 FUN_14db68325 body=663 status=ok
// SIG undefined FUN_14db68325(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14db68325(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 uVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong in_R10;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong unaff_R13;
  ulonglong uVar8;
  longlong in_stack_00000008;
  longlong in_stack_00000010;
  ulonglong *local_res18;
  
  uVar1 = *(undefined8 *)(in_stack_00000008 + -0x50);
  FUN_1629c0229();
  uVar8 = (ulonglong)local_res18 | in_R10;
  uVar2 = FUN_14da161e7();
  _FUN_1629c0229 = ~_FUN_1629c0229;
  local_res18[-1] = uVar8;
  local_res18[-2] = in_R10;
  local_res18[-3] = uVar1;
  local_res18[-3] = local_res18[-3];
  local_res18[-4] = ~((unaff_RDI | unaff_RSI) & (~in_RAX & ~unaff_RSI | in_RAX));
  uVar5 = uVar8 + local_res18[6];
  local_res18[-3] = (ulonglong)&stack0x00000010;
  local_res18[-4] = uVar2;
  *(undefined4 *)(local_res18 + -4) = 0x805a755;
  *(undefined4 *)((longlong)local_res18 + -0x1c) = 0;
  uVar8 = uVar8 & *(ulonglong *)((longlong)local_res18 + local_res18[-4] + -0x805a725);
  local_res18[-4] = 0x14db684ae;
  FUN_15b303ef3();
  uVar7 = *(ulonglong *)(unaff_R13 + -0x40) ^ uVar8;
  *(undefined4 *)(local_res18 + -4) = 0xf0fca2b5;
  *(undefined4 *)((longlong)local_res18 + -0x1c) = 0xffffffff;
  uVar4 = local_res18[-4] + 0xf035cbb;
  uVar6 = *(ulonglong *)(unaff_R13 + uVar4);
  local_res18[-4] = 0x14db68538;
  uVar3 = FUN_1568d857f(~uVar6);
  uVar1 = local_res18[-1];
  local_res18[-1] = uVar4;
  local_res18[-2] = unaff_RBX;
  local_res18[-3] = uVar6;
  *local_res18 = ~*local_res18;
  *local_res18 = *local_res18 | uVar3;
  *local_res18 = 0x673fe55e;
  local_res18[-3] =
       0xffffffffffffffff -
       (~(~(0xffffffffffffffff - ((uVar8 - (param_3 | uVar8)) + in_stack_00000010)) | ~uVar5) &
       uVar3) & uVar8;
  local_res18[-4] = uVar7;
  local_res18[-5] = uVar7;
  local_res18[-4] = (ulonglong)&LAB_14db685c7;
  FUN_164a52fef(uVar1);
  return;
}



// FUNCTION 14db688cc FUN_14db688cc body=12 status=ok
// SIG undefined FUN_14db688cc(void)

void FUN_14db688cc(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14db6894c FUN_14db6894c body=136 status=ok
// SIG undefined FUN_14db6894c(void)

/* WARNING: Removing unreachable block (ram,0x00014db689d7) */

void FUN_14db6894c(void)

{
  longlong in_stack_00000028;
  
  if (in_stack_00000028 == 0) {
    FUN_14d8ef252();
    return;
  }
  FUN_14d8ef252();
  return;
}



// FUNCTION 14db689d7 FUN_14db689d7 body=137 status=ok
// SIG undefined FUN_14db689d7(void)

void FUN_14db689d7(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_156d848b5(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,FUN_156d848b5);
  return;
}



// FUNCTION 14db68a60 FUN_14db68a60 body=134 status=ok
// SIG undefined FUN_14db68a60(void)

void FUN_14db68a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 local_res8;
  
  FUN_16624dd3a(-0x101 - (local_res8 | 0xfeff),param_2,param_3,param_4);
  return;
}



// FUNCTION 14db68c34 FUN_14db68c34 body=64 status=ok
// SIG undefined FUN_14db68c34(void)

void FUN_14db68c34(void)

{
  return;
}



// FUNCTION 14db68cc2 FUN_14db68cc2 body=97 status=ok
// SIG undefined FUN_14db68cc2(void)

void FUN_14db68cc2(undefined8 param_1)

{
  bool in_ZF;
  undefined8 in_stack_00000008;
  
  if (!in_ZF) {
    return;
  }
  FUN_16131bb16(param_1,in_stack_00000008);
  return;
}



// FUNCTION 14db68d5b FUN_14db68d5b body=113 status=ok
// SIG undefined FUN_14db68d5b(void)

/* WARNING: Removing unreachable block (ram,0x00014db68f04) */
/* WARNING: Removing unreachable block (ram,0x000160dd0a28) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14db68d5b(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x30) + unaff_R15 +
          (*(ulonglong *)(unaff_R13 + -0x30) & unaff_R15) * -2;
  FUN_1663e535a(uVar1 & 0xffffffffffffff00,0xffffffffffffffffU - param_2 & unaff_RDI);
  FUN_156eaccbf();
  if (*(longlong *)(uVar1 - 0x60) < 0) {
    uVar2 = FUN_1655234e9();
    return uVar2;
  }
  uVar2 = FUN_1655234e9();
  return uVar2;
}



// FUNCTION 14db68dce FUN_14db68dce body=483 status=FAIL
// SIG undefined FUN_14db68dce(void)
/* DECOMPILE FAILED */

// FUNCTION 14db68fb4 FUN_14db68fb4 body=66 status=ok
// SIG undefined FUN_14db68fb4(void)

void FUN_14db68fb4(void)

{
  return;
}



// FUNCTION 14db68ff6 FUN_14db68ff6 body=114 status=ok
// SIG undefined FUN_14db68ff6(void)

/* WARNING: Removing unreachable block (ram,0x00014db69047) */
/* WARNING: Removing unreachable block (ram,0x00014db6904d) */

void FUN_14db68ff6(void)

{
  thunk_FUN_156b249bc();
  return;
}



// FUNCTION 14db692ac FUN_14db692ac body=149 status=ok
// SIG undefined FUN_14db692ac(void)

void FUN_14db692ac(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong unaff_R15;
  
  FUN_14e0febc1(param_1,(-~unaff_RSI - (~unaff_RDI + 2)) + (param_2 & unaff_R15) * -2);
  return;
}



// FUNCTION 14db693d7 FUN_14db693d7 body=48 status=ok
// SIG undefined FUN_14db693d7(void)

void FUN_14db693d7(void)

{
  return;
}



// FUNCTION 14db69482 FUN_14db69482 body=128 status=ok
// SIG undefined FUN_14db69482(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db69482(void)

{
  undefined8 unaff_RBP;
  undefined8 local_res8;
  undefined8 local_res18;
  
  *(undefined8 *)(local_res18 + -8) = local_res8;
  *(undefined8 *)(local_res18 + -0x10) = unaff_RBP;
  *(undefined8 *)(local_res18 + -0x18) = unaff_RBP;
  FUN_16128cd2d();
  return;
}



// FUNCTION 14db695a0 thunk_FUN_1652fc96d body=5 status=ok
// SIG undefined thunk_FUN_1652fc96d(void)

/* WARNING: Removing unreachable block (ram,0x0001652fc9fa) */
/* WARNING: Removing unreachable block (ram,0x0001652fca06) */

undefined8 thunk_FUN_1652fc96d(void)

{
  return 0x1617fbc7d;
}



// FUNCTION 14db695a5 FUN_14db695a5 body=157 status=ok
// SIG undefined FUN_14db695a5(void)

void FUN_14db695a5(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong in_R10;
  
  uVar1 = *(ulonglong *)(param_2 + -0x60);
  FUN_156b5e56f(FUN_156b5e56f,param_2,*(ulonglong *)(param_2 + -0x88) ^ in_R10,
                ~((~uVar1 & ~in_R10 | uVar1) & (0xffffffffffffffff - uVar1 | in_R10)));
  return;
}



// FUNCTION 14db69a17 FUN_14db69a17 body=297 status=ok
// SIG undefined FUN_14db69a17(void)

/* WARNING: Removing unreachable block (ram,0x000156992ec9) */
/* WARNING: Removing unreachable block (ram,0x00014db69aaf) */

void FUN_14db69a17(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  *(undefined8 *)(&stack0x00000010 + unaff_RDI) = 0;
  *(longlong *)(&stack0x00000010 + unaff_RDI) =
       *(longlong *)(&stack0x00000010 + unaff_RDI) + unaff_RSI;
  FUN_15671bf58(param_1,FUN_15671bf58,param_3,param_4);
  return;
}



// FUNCTION 14db69d2c FUN_14db69d2c body=153 status=ok
// SIG undefined FUN_14db69d2c(void)

void FUN_14db69d2c(undefined8 param_1)

{
  FUN_162257b7a(param_1);
  return;
}



// FUNCTION 14db69dcb FUN_14db69dcb body=221 status=ok
// SIG undefined FUN_14db69dcb(void)

/* WARNING: Removing unreachable block (ram,0x00014db69e34) */

void FUN_14db69dcb(undefined8 param_1,undefined8 param_2)

{
  FUN_162a5dcb9(param_1,param_2);
  return;
}



// FUNCTION 14db69f7d FUN_14db69f7d body=225 status=ok
// SIG undefined FUN_14db69f7d(void)

/* WARNING: Removing unreachable block (ram,0x000162621e4c) */
/* WARNING: Removing unreachable block (ram,0x00014db6a00a) */

void FUN_14db69f7d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar5 = *(ulonglong *)(unaff_R13 + -0xa0);
  uVar3 = *(ulonglong *)(unaff_R13 + -0x70) ^ unaff_R15;
  *(undefined8 *)(uVar3 - 8) = unaff_RBX;
  *(code **)(uVar3 - 0x10) = FUN_162507889;
  *(code **)(uVar3 - 0x18) = FUN_162507889;
  lVar6 = *(longlong *)(uVar3 - 8);
  *(undefined8 *)(uVar3 - 0x20) = in_RAX;
  plVar1 = (longlong *)(uVar3 - 0x10);
  *plVar1 = 0;
  *plVar1 = *plVar1 - lVar6;
  *plVar1 = -*plVar1;
  lVar6 = *(longlong *)(uVar3 - 0x18);
  *(undefined8 *)(uVar3 - 8) = 0;
  puVar2 = (ulonglong *)(uVar3 - 8);
  uVar4 = *puVar2;
  *puVar2 = *puVar2 + lVar6;
  *(undefined8 *)(uVar3 - 0x10) = param_3;
  *(undefined8 *)(uVar3 - 0x18) = param_3;
  if ((ulonglong)-lVar6 <= uVar4) {
    *(ulonglong *)(uVar3 - 0x20) = uVar5 + unaff_R15 + (uVar5 & unaff_R15) * -2;
    *(code **)(uVar3 - 0x10) = thunk_FUN_15b642ca5;
    return;
  }
  thunk_FUN_162507840();
  return;
}



// FUNCTION 14db6a0bc FUN_14db6a0bc body=200 status=ok
// SIG undefined FUN_14db6a0bc(void)

longlong FUN_14db6a0bc(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return *(ulonglong *)(unaff_R13 + -0x38) + unaff_R15 +
         (*(ulonglong *)(unaff_R13 + -0x38) & unaff_R15) * -2;
}



// FUNCTION 14db6a1f7 FUN_14db6a1f7 body=159 status=ok
// SIG undefined FUN_14db6a1f7(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014db6a295) overlaps instruction at (ram,0x00014db6a294)
    */
/* WARNING: Removing unreachable block (ram,0x00014db6a278) */
/* WARNING: Removing unreachable block (ram,0x00014db6a283) */
/* WARNING: Removing unreachable block (ram,0x00014db6a294) */
/* WARNING: Removing unreachable block (ram,0x00014db6a295) */
/* WARNING: Removing unreachable block (ram,0x00014db6a27e) */

undefined8 FUN_14db6a1f7(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 in_stack_00000008;
  
  uVar1 = FUN_156d9f9df(param_1,in_stack_00000008,FUN_156d9f9df);
  return uVar1;
}



// FUNCTION 14db6a684 FUN_14db6a684 body=163 status=ok
// SIG undefined FUN_14db6a684(void)

void FUN_14db6a684(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  FUN_164abea7d(param_1,param_2,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14db6a7b9 FUN_14db6a7b9 body=72 status=ok
// SIG undefined FUN_14db6a7b9(void)

void FUN_14db6a7b9(void)

{
  return;
}



// FUNCTION 14db6a83c FUN_14db6a83c body=138 status=ok
// SIG undefined FUN_14db6a83c(void)

void FUN_14db6a83c(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong unaff_R14;
  ulonglong in_stack_00000010;
  undefined8 in_stack_00000018;
  
  thunk_FUN_166a5b0c5(param_1,0,in_stack_00000018,in_stack_00000010 ^ param_3 & unaff_R14);
  return;
}



// FUNCTION 14db6a9dc FUN_14db6a9dc body=150 status=ok
// SIG undefined FUN_14db6a9dc(void)

void FUN_14db6a9dc(undefined8 param_1)

{
  undefined8 unaff_RDI;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  bool bVar1;
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
  ulonglong uVar12;
  undefined2 local_res10;
  undefined6 uStackX_12;
  undefined8 local_res18;
  
  bVar9 = (local_res10 & 0x4000) != 0;
  bVar8 = (local_res10 & 0x800) != 0;
  bVar7 = (local_res10 & 0x400) != 0;
  bVar6 = (local_res10 & 0x200) != 0;
  bVar5 = (local_res10 & 0x80) != 0;
  bVar4 = (local_res10 & 0x40) != 0;
  bVar3 = (local_res10 & 0x10) != 0;
  bVar2 = (local_res10 & 4) != 0;
  bVar1 = (local_res10 & 1) != 0;
  bVar11 = (uStackX_12 & 0x20) != 0;
  bVar10 = (uStackX_12 & 4) != 0;
  *(undefined8 *)(local_res18 + -8) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x10) = unaff_RDI;
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)bVar9 * 0x4000 | (ulonglong)bVar8 * 0x800 | (ulonglong)bVar7 * 0x400 |
       (ulonglong)bVar6 * 0x200 | (ulonglong)bVar5 * 0x80 | (ulonglong)bVar4 * 0x40 |
       (ulonglong)bVar3 * 0x10 | (ulonglong)bVar2 * 4 | (ulonglong)bVar1 |
       (ulonglong)bVar11 * 0x200000 | (ulonglong)bVar10 * 0x40000;
  *(ulonglong *)(local_res18 + -0x20) =
       (ulonglong)bVar9 * 0x4000 | (ulonglong)bVar8 * 0x800 | (ulonglong)bVar7 * 0x400 |
       (ulonglong)bVar6 * 0x200 | (ulonglong)bVar5 * 0x80 | (ulonglong)bVar4 * 0x40 |
       (ulonglong)bVar3 * 0x10 | (ulonglong)bVar2 * 4 | (ulonglong)bVar1 |
       (ulonglong)bVar11 * 0x200000 | (ulonglong)bVar10 * 0x40000;
  *(undefined8 *)(local_res18 + -0x20) = param_1;
  uVar12 = *(ulonglong *)(local_res18 + -0x18);
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((uVar12 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar12 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar12 & 0x400) != 0) * 0x400 | (ulonglong)((uVar12 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar12 & 0x100) != 0) * 0x100 | (ulonglong)((uVar12 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar12 & 0x40) != 0) * 0x40 | (ulonglong)((uVar12 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar12 & 4) != 0) * 4 | (ulonglong)((uVar12 & 1) != 0) |
       (ulonglong)((uVar12 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar12 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R15;
  uVar12 = *(ulonglong *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x18) = unaff_R12;
  *(ulonglong *)(local_res18 + -0x20) =
       (ulonglong)((uVar12 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar12 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar12 & 0x400) != 0) * 0x400 | (ulonglong)((uVar12 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar12 & 0x100) != 0) * 0x100 | (ulonglong)((uVar12 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar12 & 0x40) != 0) * 0x40 | (ulonglong)((uVar12 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar12 & 4) != 0) * 4 | (ulonglong)((uVar12 & 1) != 0) |
       (ulonglong)((uVar12 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar12 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res18 + -0x28) = 0x15759919d;
  return;
}



// FUNCTION 14db6ab39 FUN_14db6ab39 body=155 status=ok
// SIG undefined FUN_14db6ab39(void)

/* WARNING: Removing unreachable block (ram,0x000157040197) */
/* WARNING: Removing unreachable block (ram,0x0001570401a2) */
/* WARNING: Removing unreachable block (ram,0x0001573d171f) */
/* WARNING: Removing unreachable block (ram,0x0001573d1725) */
/* WARNING: Removing unreachable block (ram,0x0001573d1730) */
/* WARNING: Removing unreachable block (ram,0x0001573d17d0) */
/* WARNING: Removing unreachable block (ram,0x0001573d17d6) */
/* WARNING: Removing unreachable block (ram,0x000156e5a64f) */
/* WARNING: Removing unreachable block (ram,0x0001573d16d4) */
/* WARNING: Removing unreachable block (ram,0x00015b2e8791) */
/* WARNING: Removing unreachable block (ram,0x00015b2e8797) */
/* WARNING: Removing unreachable block (ram,0x00015b2e879c) */
/* WARNING: Removing unreachable block (ram,0x00015b2e87fa) */
/* WARNING: Removing unreachable block (ram,0x00015b2e87fd) */
/* WARNING: Removing unreachable block (ram,0x00015704019d) */
/* WARNING: Removing unreachable block (ram,0x00014db6abc9) */
/* WARNING: Removing unreachable block (ram,0x00014db6abd4) */
/* WARNING: Removing unreachable block (ram,0x00014db6ac3a) */
/* WARNING: Removing unreachable block (ram,0x00014db6ac40) */
/* WARNING: Removing unreachable block (ram,0x0001653d79b0) */
/* WARNING: Removing unreachable block (ram,0x0001653d7a1a) */
/* WARNING: Removing unreachable block (ram,0x0001653d7a26) */
/* WARNING: Removing unreachable block (ram,0x000161295252) */
/* WARNING: Removing unreachable block (ram,0x00014dd0f9cd) */
/* WARNING: Removing unreachable block (ram,0x0001573d15ea) */
/* WARNING: Removing unreachable block (ram,0x0001573d16ee) */
/* WARNING: Removing unreachable block (ram,0x0001573d16f6) */
/* WARNING: Removing unreachable block (ram,0x00015b2e86ee) */
/* WARNING: Removing unreachable block (ram,0x00015b2e86fb) */
/* WARNING: Removing unreachable block (ram,0x00014db6abcf) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14db6ab39(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong unaff_R12;
  undefined8 unaff_retaddr;
  
  if (~in_RAX + (-1 - (~*(ulonglong *)(unaff_R12 + -8) | ~in_RAX)) == 0) {
    uVar1 = FUN_15704006a();
    return uVar1;
  }
  if (&stack0x00000000 != (undefined1 *)0x0) {
    uVar1 = FUN_156b788b4(unaff_retaddr,param_2,param_3,param_4);
    return uVar1;
  }
  uVar1 = FUN_160f5e5b4();
  return uVar1;
}



// FUNCTION 14db6abd4 FUN_14db6abd4 body=301 status=ok
// SIG undefined FUN_14db6abd4(void)

/* WARNING: Removing unreachable block (ram,0x00014db6ac40) */
/* WARNING: Removing unreachable block (ram,0x0001653d7a26) */

undefined8 FUN_14db6abd4(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db6ae1a FUN_14db6ae1a body=16 status=ok
// SIG undefined FUN_14db6ae1a(void)

void FUN_14db6ae1a(void)

{
  FUN_14d85d504();
  return;
}



// FUNCTION 14db6aec2 FUN_14db6aec2 body=16 status=ok
// SIG undefined FUN_14db6aec2(void)

void FUN_14db6aec2(void)

{
  return;
}



// FUNCTION 14db6b002 FUN_14db6b002 body=147 status=ok
// SIG undefined FUN_14db6b002(void)

void FUN_14db6b002(ulonglong param_1)

{
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  
  FUN_1627e13ba(param_1,~param_1 | *(ulonglong *)(unaff_RDI + -0x28),
                *(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                ~(unaff_RSI & param_1) & (unaff_RSI | param_1));
  return;
}



// FUNCTION 14db6b095 FUN_14db6b095 body=114 status=ok
// SIG undefined FUN_14db6b095(void)

ulonglong FUN_14db6b095(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  undefined8 unaff_RBX;
  undefined8 in_R11;
  undefined8 unaff_R15;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  uVar1 = local_res18 ^ in_RAX;
  uVar2 = local_res20 ^ in_RAX;
  *(undefined8 *)(uVar2 - 8) = unaff_R15;
  *(undefined8 *)(uVar2 - 0x10) = unaff_R15;
  *(ulonglong *)(uVar2 - 0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x80) != 0) * 0x80 | (ulonglong)((uVar1 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar1 & 0x10) != 0) * 0x10 | (ulonglong)((uVar1 & 4) != 0) * 4 |
       (ulonglong)((uVar1 & 1) != 0) | (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uVar2 - 0x20) = unaff_RBX;
  *(undefined8 *)(uVar2 - 0x28) = in_R11;
  *(undefined8 *)(uVar2 - 0x28) = 0x162f4c30c;
  return local_res10 ^ in_RAX;
}



// FUNCTION 14db6b109 FUN_14db6b109 body=140 status=ok
// SIG undefined FUN_14db6b109(void)

void FUN_14db6b109(undefined8 param_1,undefined8 param_2)

{
  (*(code *)0x164fe21a7)(param_1,param_2);
  return;
}



// FUNCTION 14db6b349 FUN_14db6b349 body=178 status=ok
// SIG undefined FUN_14db6b349(void)

undefined8 FUN_14db6b349(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  longlong unaff_RSI;
  undefined8 in_R11;
  undefined8 unaff_R12;
  longlong unaff_R13;
  longlong alStack_18 [3];
  
  plVar1 = (longlong *)(&stack0x00000008 + unaff_RSI);
  lVar2 = *(longlong *)(unaff_R13 + -0x30);
  *plVar1 = 0;
  *plVar1 = *plVar1 + lVar2;
  *(undefined8 *)(&stack0x00000008 + unaff_RSI) = unaff_RBX;
  *(undefined8 *)(&stack0x00000008 + unaff_RSI) = param_1;
  *(undefined8 *)(&stack0x00000000 + unaff_RSI) = param_3;
  *(undefined8 *)(&stack0x00000008 + unaff_RSI) = in_RAX;
  uVar3 = *(undefined8 *)(unaff_R13 + -0x68);
  *(undefined8 *)(&stack0x00000000 + unaff_RSI) = unaff_R12;
  *(undefined8 *)((longlong)alStack_18 + unaff_RSI + 0x10) = in_R11;
  *(undefined8 *)((longlong)alStack_18 + unaff_RSI + 8) = in_R11;
  *(undefined8 *)((longlong)alStack_18 + unaff_RSI) = in_R11;
  *(undefined1 **)((longlong)alStack_18 + unaff_RSI + 0x10) = &LAB_14db6b3fd;
  *(undefined1 **)((longlong)alStack_18 + unaff_RSI + 8) = &LAB_15b3b33ad;
  return uVar3;
}



// FUNCTION 14db6b528 FUN_14db6b528 body=135 status=ok
// SIG undefined FUN_14db6b528(void)

/* WARNING: Removing unreachable block (ram,0x00014db6b5a7) */
/* WARNING: Removing unreachable block (ram,0x00014db6b5b2) */
/* WARNING: Removing unreachable block (ram,0x00014db6b5ad) */

void FUN_14db6b528(void)

{
  FUN_1614661c2();
  return;
}



// FUNCTION 14db6b5b2 FUN_14db6b5b2 body=175 status=ok
// SIG undefined FUN_14db6b5b2(void)

void FUN_14db6b5b2(byte param_1)

{
  FUN_1660e6d60(param_1 ^ 8,*(undefined8 *)((longlong)ProcessEnvironmentBlock + 0x18));
  return;
}



// FUNCTION 14db6b706 FUN_14db6b706 body=147 status=ok
// SIG undefined FUN_14db6b706(void)

undefined8 FUN_14db6b706(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db6b955 FUN_14db6b955 body=407 status=ok
// SIG undefined FUN_14db6b955(void)

/* WARNING: Removing unreachable block (ram,0x00014db6b9a8) */
/* WARNING: Removing unreachable block (ram,0x00014db6b9de) */

void FUN_14db6b955(void)

{
  int unaff_ESI;
  
  if (-1 < unaff_ESI) {
    FUN_16292a95b();
    return;
  }
  FUN_16292a95b();
  return;
}



// FUNCTION 14db6bc22 FUN_14db6bc22 body=197 status=ok
// SIG undefined FUN_14db6bc22(void)

void FUN_14db6bc22(void)

{
  return;
}



// FUNCTION 14db6bd95 FUN_14db6bd95 body=122 status=ok
// SIG undefined FUN_14db6bd95(void)

/* WARNING: Removing unreachable block (ram,0x00014db6bdd1) */

void FUN_14db6bd95(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_16132960d(param_2,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14db6beba FUN_14db6beba body=162 status=ok
// SIG undefined FUN_14db6beba(void)

/* WARNING: Removing unreachable block (ram,0x00014db6bf52) */
/* WARNING: Removing unreachable block (ram,0x00014db6bf5d) */
/* WARNING: Removing unreachable block (ram,0x00014db6bf73) */
/* WARNING: Removing unreachable block (ram,0x00014db6bf9e) */
/* WARNING: Removing unreachable block (ram,0x00014db6bf58) */

void FUN_14db6beba(void)

{
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  *(undefined8 *)(unaff_RDI + 8) = 0x54245902;
  *(ulonglong *)(unaff_RDI + 8) = *(ulonglong *)(unaff_RDI + 8) ^ 0x54245902;
  *(longlong *)(unaff_RDI + 8) = *(longlong *)(unaff_RDI + 8) - (-1 - unaff_RBP);
  *(ulonglong *)(unaff_RDI + 8) = ~*(ulonglong *)(unaff_RDI + 8);
  *(longlong *)(unaff_RDI + 8) = *(longlong *)(unaff_RDI + 8) + 1;
  return;
}



// FUNCTION 14db6bf5d FUN_14db6bf5d body=86 status=ok
// SIG undefined FUN_14db6bf5d(void)

void FUN_14db6bf5d(undefined1 param_1,undefined8 param_2,longlong param_3)

{
  longlong unaff_R15;
  undefined8 local_res8;
  
  if (unaff_R15 != param_3) {
    return;
  }
  FUN_165e93f27(param_1,param_2,local_res8,0x14d7a95d7);
  return;
}



// FUNCTION 14db6c008 FUN_14db6c008 body=133 status=ok
// SIG undefined FUN_14db6c008(void)

void FUN_14db6c008(void)

{
  return;
}



// FUNCTION 14db6c12c FUN_14db6c12c body=142 status=ok
// SIG undefined FUN_14db6c12c(void)

void FUN_14db6c12c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined2 local_res8;
  
  (*(code *)0x156dc7ccf)(unaff_retaddr,param_2,param_3,-0x100 - (~-(local_res8 | 0xfeff) + 2));
  return;
}



// FUNCTION 14db6c255 FUN_14db6c255 body=132 status=ok
// SIG undefined FUN_14db6c255(void)

/* WARNING: Removing unreachable block (ram,0x00014db6c410) */
/* WARNING: Removing unreachable block (ram,0x00014db6c416) */
/* WARNING: Removing unreachable block (ram,0x0001572afef0) */
/* WARNING: Removing unreachable block (ram,0x00015b3fd1ad) */
/* WARNING: Removing unreachable block (ram,0x00015b91e5af) */
/* WARNING: Removing unreachable block (ram,0x00014db6c37d) */
/* WARNING: Removing unreachable block (ram,0x00014db6c3a3) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffff8 : 0x0001665cb5d8 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_14db6c255(void)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  ulonglong in_R9;
  
  FUN_1571d1cec();
  in_R9 = *(ulonglong *)(unaff_RDI + -0x80) ^ in_R9;
  if (-1 < (longlong)in_R9) {
    uVar1 = FUN_15b91e50e();
    return uVar1;
  }
  return in_R9;
}



// FUNCTION 14db6c2e0 FUN_14db6c2e0 body=154 status=ok
// SIG undefined FUN_14db6c2e0(void)

/* WARNING: Removing unreachable block (ram,0x00014db6c410) */
/* WARNING: Removing unreachable block (ram,0x00014db6c416) */
/* WARNING: Removing unreachable block (ram,0x0001572afef0) */
/* WARNING: Removing unreachable block (ram,0x00015b3fd1ad) */
/* WARNING: Removing unreachable block (ram,0x00015b91e5af) */
/* WARNING: Removing unreachable block (ram,0x00014db6c37d) */
/* WARNING: Removing unreachable block (ram,0x00014db6c3a3) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000008 : 0x0001665cb5d8 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_14db6c2e0(void)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  ulonglong in_stack_00000008;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x80) ^ in_stack_00000008;
  if (-1 < (longlong)uVar1) {
    uVar1 = FUN_15b91e50e();
    return uVar1;
  }
  return uVar1;
}



// FUNCTION 14db6c37d FUN_14db6c37d body=177 status=ok
// SIG undefined FUN_14db6c37d(void)

/* WARNING: Removing unreachable block (ram,0x00014db6c410) */
/* WARNING: Removing unreachable block (ram,0x00014db6c416) */
/* WARNING: Removing unreachable block (ram,0x0001572afef0) */

undefined8 FUN_14db6c37d(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1572afef0();
  return uVar1;
}



// FUNCTION 14db6c561 FUN_14db6c561 body=28 status=ok
// SIG undefined FUN_14db6c561(void)

void FUN_14db6c561(void)

{
  return;
}



// FUNCTION 14db6c62b FUN_14db6c62b body=158 status=ok
// SIG undefined FUN_14db6c62b(void)

void FUN_14db6c62b(void)

{
  undefined8 uStackX_10;
  
  FUN_14dbaa083(uStackX_10);
  return;
}



// FUNCTION 14db6c6c9 FUN_14db6c6c9 body=196 status=ok
// SIG undefined FUN_14db6c6c9(void)

/* WARNING: Removing unreachable block (ram,0x00014db6c776) */

void FUN_14db6c6c9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong in_RAX;
  undefined8 in_stack_00000010;
  
  if (param_5 != 0 || in_RAX != 0) {
    FUN_15b6d828d(param_1,in_stack_00000010,param_3,param_4);
    return;
  }
  FUN_16145b355();
  return;
}



// FUNCTION 14db6c91f FUN_14db6c91f body=28 status=ok
// SIG undefined FUN_14db6c91f(void)

void FUN_14db6c91f(void)

{
  ulonglong *in_RAX;
  undefined8 local_res8;
  
  *in_RAX = 0x1094efc6;
  *in_RAX = *in_RAX ^ 0x129810b4;
  FUN_165c7153c(local_res8);
  return;
}



// FUNCTION 14db6c9c6 FUN_14db6c9c6 body=273 status=ok
// SIG undefined FUN_14db6c9c6(void)

/* WARNING: Removing unreachable block (ram,0x00014db6ca59) */

undefined1 FUN_14db6c9c6(ulonglong param_1)

{
  undefined1 uVar1;
  longlong unaff_RDI;
  
  if (-1 < (longlong)
           ((*(ulonglong *)(unaff_RDI + -0x48) - param_1) +
           (~param_1 | *(ulonglong *)(unaff_RDI + -0x48)) * -2 + -2)) {
    uVar1 = FUN_14da817c4();
    return uVar1;
  }
  uVar1 = FUN_16184d487();
  return uVar1;
}



// FUNCTION 14db6caea FUN_14db6caea body=130 status=ok
// SIG undefined FUN_14db6caea(void)

void FUN_14db6caea(void)

{
  FUN_1656d4fea();
  return;
}



// FUNCTION 14db6cc0f FUN_14db6cc0f body=168 status=ok
// SIG undefined FUN_14db6cc0f(void)

undefined8 FUN_14db6cc0f(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db6cd84 FUN_14db6cd84 body=175 status=ok
// SIG undefined FUN_14db6cd84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14db6cd84(void)

{
  undefined8 in_stack_00000010;
  
  (*(code *)&LAB_1618cff2a)(CONCAT62(0x7ffe,_DAT_7ffe02dc),in_stack_00000010,&LAB_1618cff2a);
  return;
}



// FUNCTION 14db6cf47 FUN_14db6cf47 body=163 status=ok
// SIG undefined FUN_14db6cf47(void)

void FUN_14db6cf47(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_165368e6e(FUN_165368e6e,param_2,0x6991bdbd,param_4);
  return;
}



// FUNCTION 14db6d07a FUN_14db6d07a body=135 status=ok
// SIG undefined FUN_14db6d07a(void)

undefined8 FUN_14db6d07a(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db6d193 FUN_14db6d193 body=128 status=ok
// SIG undefined FUN_14db6d193(void)

void FUN_14db6d193(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x58);
  (*(code *)&LAB_1662b58f5)
            (uVar1,((~((in_RAX ^ 0xffffffffffffffff) & uVar1) + uVar1) -
                   ~(in_RAX ^ 0xffffffffffffffff)) + in_RAX + 1);
  return;
}



// FUNCTION 14db6d213 FUN_14db6d213 body=134 status=ok
// SIG undefined FUN_14db6d213(void)

void FUN_14db6d213(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_R15;
  ulonglong in_stack_00000010;
  
  FUN_14df37d17(in_stack_00000010 + unaff_R15,0x996f7aa,param_3,param_4,
                (in_stack_00000010 & unaff_R15) << 1);
  return;
}



// FUNCTION 14db6d5c8 FUN_14db6d5c8 body=138 status=ok
// SIG undefined FUN_14db6d5c8(void)

void FUN_14db6d5c8(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x78);
  FUN_15b7c936f((~(uVar1 | unaff_R15) | ~((unaff_R15 - (uVar1 | unaff_R15)) + uVar1)) +
                (uVar1 | unaff_R15),FUN_15b7c936f);
  return;
}



// FUNCTION 14db6d6f2 FUN_14db6d6f2 body=195 status=ok
// SIG undefined FUN_14db6d6f2(void)

void FUN_14db6d6f2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1619f73c8(param_1,param_2,
                *(ulonglong *)(unaff_R13 + -0x88) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) * -2,param_4);
  return;
}



// FUNCTION 14db6d86e FUN_14db6d86e body=208 status=ok
// SIG undefined FUN_14db6d86e(void)

void FUN_14db6d86e(void)

{
  return;
}



// FUNCTION 14db6d9da FUN_14db6d9da body=154 status=ok
// SIG undefined FUN_14db6d9da(void)

void FUN_14db6d9da(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1653959af(param_1,param_2,param_3);
  return;
}



// FUNCTION 14db6db9e FUN_14db6db9e body=50 status=ok
// SIG undefined FUN_14db6db9e(void)

void FUN_14db6db9e(void)

{
  return;
}



// FUNCTION 14db6dc23 FUN_14db6dc23 body=77 status=ok
// SIG undefined FUN_14db6dc23(void)

undefined1 FUN_14db6dc23(void)

{
  undefined1 in_AL;
  undefined1 uVar1;
  undefined8 unaff_RBP;
  undefined8 in_R9;
  ushort *in_R11;
  undefined8 unaff_R14;
  ulonglong uStackX_10;
  longlong local_res18;
  
  *in_R11 = ~*in_R11;
  LOCK();
  uVar1 = FUN_14d7a7d92;
  UNLOCK();
  FUN_14d7a7d92 = in_AL;
  *(undefined8 *)(local_res18 + -8) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x10) = unaff_R14;
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
  *(undefined8 *)(local_res18 + -8) = 0x6c2b58;
  *(undefined8 *)(local_res18 + -0x10) = in_R9;
  *(undefined8 *)(local_res18 + -0x18) = in_R9;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RBP;
  *(code **)(local_res18 + -0x10) = FUN_15b3d5987;
  return uVar1;
}



// FUNCTION 14db6dcb7 FUN_14db6dcb7 body=283 status=ok
// SIG undefined FUN_14db6dcb7(void)

/* WARNING: Removing unreachable block (ram,0x00014db6dd31) */

undefined8 FUN_14db6dcb7(undefined8 param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x60);
  uVar2 = thunk_FUN_162c46161((~param_2 | param_4) + param_2,4,0x5436e343,
                              ~((unaff_R15 - (uVar1 | unaff_R15)) + uVar1) & (uVar1 | unaff_R15));
  return uVar2;
}



// FUNCTION 14db6dd31 FUN_14db6dd31 body=131 status=ok
// SIG undefined FUN_14db6dd31(void)

ulonglong FUN_14db6dd31(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong unaff_R12;
  ulonglong local_res8;
  ulonglong uStackX_10;
  
  lVar2 = unaff_R12 + in_RAX + (unaff_R12 & in_RAX) * -2;
  uVar1 = FUN_1611d7f63(param_1,param_2,param_3,
                        (~(~local_res8 | in_RAX) | ~in_RAX | local_res8) + (~local_res8 | in_RAX) +
                        1);
  uVar3 = *(ulonglong *)(lVar2 + -0x40) ^ uVar1;
  FUN_1623d509f(0x30ec8fe0,-(char)param_2,*(ulonglong *)(lVar2 + -0x80) ^ uVar1,
                ~((~uVar1 | *(ulonglong *)(lVar2 + -0x30)) &
                 (~*(ulonglong *)(lVar2 + -0x30) | uVar1)));
  return ~(~uVar3 | uStackX_10) | ~(~uStackX_10 | uVar3);
}



// FUNCTION 14db6ddb4 FUN_14db6ddb4 body=294 status=ok
// SIG undefined FUN_14db6ddb4(void)

ulonglong FUN_14db6ddb4(undefined8 param_1,char param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_R12;
  undefined8 local_res20;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x40) ^ in_RAX;
  FUN_1623d509f(0x30ec8fe0,-param_2,*(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,
                ~((~in_RAX | *(ulonglong *)(unaff_R12 + -0x30)) &
                 (~*(ulonglong *)(unaff_R12 + -0x30) | in_RAX)));
  return ~(~uVar1 | local_res20) | ~(~local_res20 | uVar1);
}



// FUNCTION 14db6dedc FUN_14db6dedc body=25 status=ok
// SIG undefined FUN_14db6dedc(void)

void FUN_14db6dedc(void)

{
  return;
}



// FUNCTION 14db6df6b FUN_14db6df6b body=557 status=ok
// SIG undefined FUN_14db6df6b(void)

/* WARNING: Removing unreachable block (ram,0x00014db6dff6) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x0001619f09f0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db6df6b(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x88);
  uVar2 = (uVar1 + unaff_R15) - (uVar1 & unaff_R15);
  FUN_16620afdb(~(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15),
                *(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2,
                (~uVar2 | ~(uVar1 & unaff_R15)) + uVar2 + 1,
                ~(param_4 & unaff_R15) & ~(param_1 & in_RAX));
  FUN_16123ca6a();
  return;
}



// FUNCTION 14db6e073 FUN_14db6e073 body=145 status=ok
// SIG undefined FUN_14db6e073(void)

void FUN_14db6e073(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x30);
  FUN_1624f6ddd(*(undefined8 *)(unaff_R12 + -0x80),param_2,FUN_1624f6ddd,
                (~uVar1 | ~in_RAX) & (~(uVar1 & in_RAX) + in_RAX) - ~uVar1);
  FUN_165e93f27();
  return;
}



// FUNCTION 14db6e18f FUN_14db6e18f body=131 status=ok
// SIG undefined FUN_14db6e18f(void)

void FUN_14db6e18f(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  uint unaff_EDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x60);
  FUN_162c4a7e3((~(unaff_EDI & (uint)uVar1) + (uint)uVar1) - (unaff_EDI ^ 0xffffffff),param_2,
                (~(~unaff_R15 & uVar1) + uVar1) - unaff_R15);
  return;
}



// FUNCTION 14db6e215 FUN_14db6e215 body=164 status=ok
// SIG undefined FUN_14db6e215(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db6e215(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1613d0d2b(param_1,param_2,param_3);
  return;
}



// FUNCTION 14db6e2b9 FUN_14db6e2b9 body=149 status=ok
// SIG undefined FUN_14db6e2b9(void)

/* WARNING: Instruction at (ram,0x00014db6e2c8) overlaps instruction at (ram,0x00014db6e2c7)
    */
/* WARNING: Removing unreachable block (ram,0x00014db6e2c7) */

void FUN_14db6e2b9(void)

{
  FUN_162501daa();
  return;
}



// FUNCTION 14db6e48f FUN_14db6e48f body=146 status=ok
// SIG undefined FUN_14db6e48f(void)

void FUN_14db6e48f(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R13;
  ushort *unaff_R14;
  longlong local_res10;
  longlong local_res20;
  
  *unaff_R14 = 0xff01 - (~(*unaff_R14 | 0x100) + 2);
  *(undefined8 *)(local_res20 + -8) = unaff_RSI;
  *(undefined8 *)(local_res20 + -0x10) = in_R11;
  *(undefined8 *)(local_res20 + -0x10) = param_1;
  uVar2 = *(undefined8 *)(local_res20 + -0x10);
  *(undefined8 *)(local_res20 + -0x10) = unaff_R13;
  *(code **)(local_res20 + -0x18) = FUN_14db6e522;
  lVar4 = FUN_1565deafd(uVar2);
  uVar3 = *(undefined8 *)(local_res20 + -8);
  lVar4 = lVar4 + local_res10 * -2;
  *(longlong *)(local_res20 + -8) = lVar4;
  *(longlong *)(local_res20 + -0x10) = lVar4;
  *(undefined4 *)(local_res20 + -0x10) = 0x8e0fa52f;
  *(undefined4 *)(local_res20 + -0xc) = 0xffffffff;
  *(undefined8 *)(local_res20 + -0x10) =
       *(undefined8 *)(unaff_RDI + (*(ulonglong *)(local_res20 + -0x10) ^ 0x71f05a8f));
  uVar2 = *(undefined8 *)(local_res20 + -0x10);
  *(undefined8 *)(local_res20 + -8) = uVar2;
  uVar1 = *(undefined8 *)(local_res20 + -8);
  *(longlong *)(local_res20 + -8) = unaff_RDI;
  *(longlong *)(local_res20 + -0x10) = unaff_RDI;
  *(code **)(local_res20 + -8) = FUN_14db6e5d7;
  FUN_160f070e0(uVar3,uVar2,0xa01f3e9,uVar1);
  return;
}



// FUNCTION 14db6e522 FUN_14db6e522 body=179 status=ok
// SIG undefined FUN_14db6e522(void)

void FUN_14db6e522(void)

{
  longlong unaff_RDI;
  undefined8 in_stack_00000008;
  
  FUN_160f070e0(in_stack_00000008,*(undefined8 *)(unaff_RDI + -0x60),0xa01f3e9,
                *(undefined8 *)(unaff_RDI + -0x60));
  return;
}



// FUNCTION 14db6e5d7 FUN_14db6e5d7 body=184 status=ok
// SIG undefined FUN_14db6e5d7(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db6e5d7(ulonglong param_1)

{
  longlong lVar1;
  ulonglong unaff_RSI;
  
  lVar1 = FUN_14d8380e9(param_1,*(ulonglong *)(0x61a9 - (~unaff_RSI + 2)) ^ param_1);
  *(int *)(lVar1 + -0x49) = *(int *)(lVar1 + -0x49) + -0x87fbf9d;
  return;
}



// FUNCTION 14db6e720 FUN_14db6e720 body=123 status=ok
// SIG undefined FUN_14db6e720(void)

void FUN_14db6e720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1620e186a(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14db6e7a2 FUN_14db6e7a2 body=117 status=ok
// SIG undefined FUN_14db6e7a2(void)

void FUN_14db6e7a2(void)

{
  return;
}



// FUNCTION 14db6eb42 FUN_14db6eb42 body=74 status=ok
// SIG undefined FUN_14db6eb42(void)

void FUN_14db6eb42(void)

{
  return;
}



// FUNCTION 14db6ec68 FUN_14db6ec68 body=328 status=ok
// SIG undefined FUN_14db6ec68(void)

/* WARNING: Removing unreachable block (ram,0x00014db6ed06) */
/* WARNING: Removing unreachable block (ram,0x00014db6ed0c) */
/* WARNING: Removing unreachable block (ram,0x00014db6ed17) */

void FUN_14db6ec68(void)

{
  FUN_15b2c6567();
  return;
}



// FUNCTION 14db6edb7 FUN_14db6edb7 body=129 status=ok
// SIG undefined FUN_14db6edb7(void)

void FUN_14db6edb7(ulonglong param_1,ulonglong param_2)

{
  FUN_162886a70(param_1,param_2 + param_1 + (param_2 & param_1) * -2);
  return;
}



// FUNCTION 14db6ee3a FUN_14db6ee3a body=123 status=ok
// SIG undefined FUN_14db6ee3a(void)

/* WARNING: Removing unreachable block (ram,0x00014db6efb2) */

void FUN_14db6ee3a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_162363fea(param_1,param_2,param_3);
  FUN_156cfdd2c();
  FUN_1564aad9b();
  return;
}



// FUNCTION 14db6eeb7 FUN_14db6eeb7 body=325 status=ok
// SIG undefined FUN_14db6eeb7(void)

/* WARNING: Removing unreachable block (ram,0x00014db6efb2) */

void FUN_14db6eeb7(undefined8 param_1,undefined8 param_2)

{
  FUN_156cfdd2c(param_1,param_2);
  FUN_1564aad9b();
  return;
}



// FUNCTION 14db6efff FUN_14db6efff body=246 status=ok
// SIG undefined FUN_14db6efff(void)

/* WARNING: Removing unreachable block (ram,0x00014db6f08d) */
/* WARNING: Removing unreachable block (ram,0x00014db6f0e1) */
/* WARNING: Removing unreachable block (ram,0x00014db6f0ec) */
/* WARNING: Removing unreachable block (ram,0x00014db6f0f2) */
/* WARNING: Removing unreachable block (ram,0x00014db6f22f) */
/* WARNING: Removing unreachable block (ram,0x00014db6f0f7) */
/* WARNING: Removing unreachable block (ram,0x00014db6f131) */
/* WARNING: Removing unreachable block (ram,0x00014db6f135) */
/* WARNING: Removing unreachable block (ram,0x00014db6f21e) */
/* WARNING: Removing unreachable block (ram,0x00014db6f224) */
/* WARNING: Removing unreachable block (ram,0x00014db6f22a) */
/* WARNING: Removing unreachable block (ram,0x000165f6587d) */
/* WARNING: Removing unreachable block (ram,0x000165f65886) */
/* WARNING: Removing unreachable block (ram,0x000162eb2e12) */

void FUN_14db6efff(void)

{
  FUN_162eb2e12();
  return;
}



// FUNCTION 14db6f0f7 FUN_14db6f0f7 body=162 status=ok
// SIG undefined FUN_14db6f0f7(void)

/* WARNING: Removing unreachable block (ram,0x00014db6f131) */
/* WARNING: Removing unreachable block (ram,0x00014db6f22f) */

void FUN_14db6f0f7(void)

{
  ulonglong uVar1;
  
  uVar1 = FUN_15b352265();
  if (((uVar1 & 0x8000) != 0) && (-1 < (char)(uVar1 >> 8))) {
    thunk_FUN_165f65883();
    return;
  }
  return;
}


