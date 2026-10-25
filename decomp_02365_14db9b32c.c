// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14db9b32c thunk_FUN_14db9b332 body=5 status=ok
// SIG undefined thunk_FUN_14db9b332(void)

void thunk_FUN_14db9b332(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong unaff_retaddr;
  
  *(undefined4 *)(&stack0x00000000 + param_2) = 0xffffffff;
  uVar1 = *(ulonglong *)(unaff_R13 + (unaff_retaddr ^ 0x27fc739));
  FUN_1654efc3b(param_1,~(uVar1 & unaff_R15 | ~(uVar1 | unaff_R15)));
  return;
}



// FUNCTION 14db9b332 FUN_14db9b332 body=145 status=ok
// SIG undefined FUN_14db9b332(void)

void FUN_14db9b332(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong unaff_retaddr;
  
  *(undefined4 *)(&stack0x00000000 + param_2) = 0xffffffff;
  uVar1 = *(ulonglong *)(unaff_R13 + (unaff_retaddr ^ 0x27fc739));
  FUN_1654efc3b(param_1,~(uVar1 & unaff_R15 | ~(uVar1 | unaff_R15)));
  return;
}



// FUNCTION 14db9b6c4 FUN_14db9b6c4 body=295 status=ok
// SIG undefined FUN_14db9b6c4(void)

/* WARNING: Removing unreachable block (ram,0x00014db9b97b) */
/* WARNING: Removing unreachable block (ram,0x00014db9b981) */
/* WARNING: Removing unreachable block (ram,0x00014db9b87e) */
/* WARNING: Removing unreachable block (ram,0x00014db9b888) */
/* WARNING: Removing unreachable block (ram,0x000165fdbe3d) */
/* WARNING: Removing unreachable block (ram,0x00014db9b900) */
/* WARNING: Removing unreachable block (ram,0x00014db9b90b) */
/* WARNING: Removing unreachable block (ram,0x00014db9b906) */

void FUN_14db9b6c4(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  char cVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined8 unaff_RSI;
  ulonglong unaff_RDI;
  longlong in_R10;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong unaff_R12;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  bool bVar14;
  bool bVar15;
  longlong local_res8;
  undefined8 local_res10;
  ushort local_res18;
  uint6 uStackX_1a;
  longlong local_res20;
  
  LOCK();
  bVar8 = (byte)local_res10;
  bVar14 = bVar8 < DAT_14d7c0580;
  bVar15 = SBORROW1(bVar8,DAT_14d7c0580);
  cVar7 = bVar8 - DAT_14d7c0580;
  if (cVar7 == '\0') {
    DAT_14d7c0580 = (byte)param_1;
  }
  else {
    local_res10 = CONCAT71((int7)((ulonglong)local_res10 >> 8),DAT_14d7c0580);
  }
  UNLOCK();
  *(undefined8 *)(local_res20 + -8) = local_res10;
  *(undefined8 *)(local_res20 + -0x10) = local_res10;
  *(undefined8 *)(local_res20 + -0x18) = local_res10;
  *(undefined4 *)(local_res20 + -0x18) = 0xdaef7ee;
  *(undefined8 *)(local_res20 + -0x20) = param_4;
  *(ulonglong *)(local_res20 + -0x28) =
       (ulonglong)((local_res18 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar15 * 0x800 |
       (ulonglong)((local_res18 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res18 & 0x200) != 0) * 0x200 | (ulonglong)(cVar7 < '\0') * 0x80 |
       (ulonglong)(cVar7 == '\0') * 0x40 | (ulonglong)((local_res18 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar7) & 1U) == 0) * 4 | (ulonglong)bVar14 |
       (ulonglong)((uStackX_1a & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_1a & 4) != 0) * 0x40000;
  *(undefined4 *)(local_res20 + -0x14) = 0;
  uVar9 = *(undefined8 *)(local_res20 + -0x20);
  *(undefined8 *)(local_res20 + -0x20) = 0x14db9b765;
  uVar9 = FUN_164bdac39(param_1,param_2,param_3,uVar9);
  bVar8 = (char)*(undefined8 *)(local_res20 + -0x18) + 0x88U & 0x3f;
  uVar12 = in_R10 - ((unaff_R12 << bVar8 | unaff_R12 >> 0x40 - bVar8) & 0xfffffffffffffffe);
  *(undefined8 *)(local_res20 + -0x10) = uVar9;
  *(undefined8 *)(local_res20 + -0x18) = unaff_RSI;
  uVar11 = *(ulonglong *)(local_res8 + -0x40);
  uVar3 = *(ulonglong *)(local_res20 + -0x18);
  *(undefined4 *)(local_res20 + -0x18) = 0x7a339b5;
  *(undefined4 *)(local_res20 + -0x14) = 0;
  puVar2 = (ulonglong *)(local_res20 + -0x10 + *(longlong *)(local_res20 + -0x18) + -0x7a339ad);
  uVar11 = ~unaff_R15 | uVar11;
  puVar2[-1] = (ulonglong)FUN_14db9b7ee;
  uVar13 = uVar12;
  uVar10 = FUN_162dbb419();
  *puVar2 = uVar11;
  uVar6 = *puVar2;
  uVar11 = *(ulonglong *)((longlong)puVar2 + param_3 + 0x18);
  puVar1 = (ulonglong *)((longlong)puVar2 + param_3 + 0x18);
  *puVar1 = ~*puVar1;
  puVar1 = (ulonglong *)((longlong)puVar2 + param_3 + 0x18);
  *puVar1 = *puVar1 | unaff_RDI;
  uVar4 = *(ulonglong *)((longlong)puVar2 + param_3 + 0x18);
  *(undefined8 *)((longlong)puVar2 + param_3 + 0x18) = 0;
  puVar1 = (ulonglong *)((longlong)puVar2 + param_3 + 0x18);
  *puVar1 = *puVar1 ^ ~((~unaff_RDI | uVar11) & uVar4);
  uVar9 = puVar2[3];
  puVar2[3] = uVar9;
  puVar2[2] = uVar12;
  puVar2[1] = unaff_R14;
  uVar11 = puVar2[1];
  puVar2[1] = uVar10;
  *puVar2 = uVar3;
  if (-1 < (longlong)(puVar2 + 2)) {
    uVar5 = puVar2[1];
    puVar2[1] = uVar6;
    uVar10 = puVar2[1];
    puVar2[1] = uVar5;
    *puVar2 = uVar11;
    puVar2[1] = uVar10;
    *puVar2 = CONCAT62((int6)((ulonglong)uVar9 >> 0x10),-((ushort)puVar2[4] | 0xfeff));
    puVar2[-1] = uVar13;
    FUN_1565bdf12();
    return;
  }
  FUN_14da0c7eb();
  return;
}



// FUNCTION 14db9b7ee FUN_14db9b7ee body=284 status=ok
// SIG undefined FUN_14db9b7ee(void)

/* WARNING: Removing unreachable block (ram,0x00014db9b97b) */
/* WARNING: Removing unreachable block (ram,0x00014db9b981) */
/* WARNING: Removing unreachable block (ram,0x00014db9b87e) */
/* WARNING: Removing unreachable block (ram,0x00014db9b888) */
/* WARNING: Removing unreachable block (ram,0x000165fdbe3d) */
/* WARNING: Removing unreachable block (ram,0x00014db9b900) */
/* WARNING: Removing unreachable block (ram,0x00014db9b90b) */
/* WARNING: Removing unreachable block (ram,0x00014db9b906) */

void FUN_14db9b7ee(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RDI;
  
  uVar1 = *(ulonglong *)(&stack0x00000018 + param_3);
  *(ulonglong *)(&stack0x00000018 + param_3) = ~*(ulonglong *)(&stack0x00000018 + param_3);
  *(ulonglong *)(&stack0x00000018 + param_3) =
       *(ulonglong *)(&stack0x00000018 + param_3) | unaff_RDI;
  uVar2 = *(ulonglong *)(&stack0x00000018 + param_3);
  *(undefined8 *)(&stack0x00000018 + param_3) = 0;
  *(ulonglong *)(&stack0x00000018 + param_3) =
       *(ulonglong *)(&stack0x00000018 + param_3) ^ ~((~unaff_RDI | uVar1) & uVar2);
  if (-1 < (longlong)&stack0x00000010) {
    FUN_1565bdf12(param_1,0x815b);
    return;
  }
  FUN_14da0c7eb();
  return;
}



// FUNCTION 14db9b90b FUN_14db9b90b body=244 status=ok
// SIG undefined FUN_14db9b90b(void)

/* WARNING: Removing unreachable block (ram,0x00014db9b97b) */
/* WARNING: Removing unreachable block (ram,0x00014db9b981) */

void FUN_14db9b90b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStackX_10;
  
  puVar1 = (undefined8 *)(param_5 + -8);
  *puVar1 = param_3;
  *(undefined8 *)(param_5 + -0x10) = *puVar1;
  *(undefined8 *)(param_5 + -0x18) = uStackX_10;
  *puVar1 = &LAB_16688e7e3;
  uVar2 = *(undefined8 *)(param_5 + -0x10);
  *(undefined8 *)(param_5 + -0x10) = param_4;
  *(undefined8 *)(param_5 + -0x20) = *(undefined8 *)(param_5 + -0x18);
  *(undefined8 *)(param_5 + -0x18) = param_4;
  *(undefined8 *)(param_5 + -0x20) = uVar2;
  *(undefined **)(param_5 + -0x10) = &DAT_14d7bce02;
  return;
}



// FUNCTION 14db9bb29 FUN_14db9bb29 body=301 status=ok
// SIG undefined FUN_14db9bb29(void)

/* WARNING: Removing unreachable block (ram,0x00014db9bbca) */

void FUN_14db9bb29(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong unaff_R14;
  undefined8 local_res18;
  
  uVar1 = *(ulonglong *)(unaff_R14 + 8);
  *(ulonglong *)(unaff_R14 + 8) = ~*(ulonglong *)(unaff_R14 + 8);
  *(ulonglong *)(unaff_R14 + 8) =
       (~(uVar1 & 0xfffffffff67df318) - 0x9820ce8) - *(longlong *)(unaff_R14 + 8);
  *(ulonglong *)(unaff_R14 + 8) = param_1 & *(ulonglong *)(unaff_R14 + 8) ^ 0xffffffffffffffff;
  FUN_1575f2d37(FUN_1575f2d37,local_res18,param_3);
  return;
}



// FUNCTION 14db9bd90 FUN_14db9bd90 body=136 status=ok
// SIG undefined FUN_14db9bd90(void)

void FUN_14db9bd90(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 in_R11;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  puVar1 = (undefined8 *)(&stack0xfffffffff5b7346d + param_2);
  *puVar1 = unaff_RSI;
  puVar1[-1] = puVar1;
  lVar3 = puVar1[-1];
  uVar2 = *(ulonglong *)(lVar3 + 0x20);
  *(ulonglong *)(lVar3 + 0x20) = ~*(ulonglong *)(lVar3 + 0x20);
  *(ulonglong *)(lVar3 + 0x20) = *(ulonglong *)(lVar3 + 0x20) | unaff_R15;
  *(ulonglong *)(lVar3 + 0x20) =
       -1 - ((unaff_R15 ^ 0xffffffffffffffff | uVar2) & *(ulonglong *)(lVar3 + 0x20));
  puVar1[2] = unaff_RBX;
  puVar1[1] = in_R11;
  *puVar1 = param_3;
  puVar1[-1] = in_R11;
  FUN_157281161(param_1,unaff_retaddr,FUN_157281161);
  return;
}



// FUNCTION 14db9be18 FUN_14db9be18 body=124 status=ok
// SIG undefined FUN_14db9be18(void)

void FUN_14db9be18(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_162e3dc1b(*(ulonglong *)(unaff_RSI + -0x60) + unaff_RBP,FUN_162e3dc1b,
                (*(ulonglong *)(unaff_RSI + -0x60) & unaff_RBP) << 1,
                *(ulonglong *)(unaff_RSI + -0x28) ^ unaff_RBP);
  return;
}



// FUNCTION 14db9c0d6 FUN_14db9c0d6 body=95 status=ok
// SIG undefined FUN_14db9c0d6(void)

void FUN_14db9c0d6(void)

{
  undefined8 in_stack_00000008;
  
  FUN_14d7a6b9f(in_stack_00000008);
  return;
}



// FUNCTION 14db9c2bb FUN_14db9c2bb body=147 status=ok
// SIG undefined FUN_14db9c2bb(void)

/* WARNING: Removing unreachable block (ram,0x00014db9c35c) */
/* WARNING: Removing unreachable block (ram,0x00014db9c346) */

void FUN_14db9c2bb(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong unaff_RDI;
  
  FUN_165ca05f4(param_1,param_2,
                (~param_1 | *(ulonglong *)(unaff_RDI + -0x70)) &
                (~*(ulonglong *)(unaff_RDI + -0x70) | param_1) ^ 0xffffffffffffffff,
                param_3 & param_2 ^ 0xffffffffffffffff);
  return;
}



// FUNCTION 14db9c35c FUN_14db9c35c body=166 status=ok
// SIG undefined FUN_14db9c35c(void)

void FUN_14db9c35c(void)

{
  return;
}



// FUNCTION 14db9c5b3 FUN_14db9c5b3 body=167 status=ok
// SIG undefined FUN_14db9c5b3(void)

ulonglong FUN_14db9c5b3(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return *(ulonglong *)(unaff_R13 + -0x90) | unaff_R15;
}



// FUNCTION 14db9c6f3 FUN_14db9c6f3 body=5 status=ok
// SIG undefined FUN_14db9c6f3(void)

void FUN_14db9c6f3(void)

{
  return;
}



// FUNCTION 14db9c78b FUN_14db9c78b body=308 status=ok
// SIG undefined FUN_14db9c78b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014db9c82e) */
/* WARNING: Removing unreachable block (ram,0x00014db9c834) */
/* WARNING: Removing unreachable block (ram,0x00014db9c839) */

void FUN_14db9c78b(void)

{
  undefined8 in_RAX;
  longlong unaff_RSI;
  
  *(char *)(unaff_RSI + 0x21) = *(char *)(unaff_RSI + 0x21) + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14db9caa3 FUN_14db9caa3 body=305 status=ok
// SIG undefined FUN_14db9caa3(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014db9ccff) */
/* WARNING: Removing unreachable block (ram,0x00014db9cd05) */
/* WARNING: Removing unreachable block (ram,0x00014db9cd0a) */
/* WARNING: Removing unreachable block (ram,0x00014db9cbd3) */
/* WARNING: Removing unreachable block (ram,0x00014db9cbde) */
/* WARNING: Removing unreachable block (ram,0x00014db9cc5a) */
/* WARNING: Removing unreachable block (ram,0xa2ff004f) */
/* WARNING: Removing unreachable block (ram,0x00014db9cc60) */
/* WARNING: Removing unreachable block (ram,0x000157637660) */
/* WARNING: Removing unreachable block (ram,0x00014db9cbd9) */
/* WARNING: Removing unreachable block (ram,0x00014db9cb3e) */
/* WARNING: Removing unreachable block (ram,0x00015b44251f) */
/* WARNING: Removing unreachable block (ram,0x00015b4425c3) */
/* WARNING: Removing unreachable block (ram,0x00015b4425be) */
/* WARNING: Removing unreachable block (ram,0x00015b4425d3) */

void FUN_14db9caa3(void)

{
  longlong unaff_R13;
  undefined1 unaff_R15B;
  undefined7 unaff_000000b9;
  
  if (-1 < (longlong)(*(ulonglong *)(unaff_R13 + -0x28) ^ CONCAT71(unaff_000000b9,unaff_R15B))) {
    FUN_165caef87();
    return;
  }
  FUN_165caef87();
  return;
}



// FUNCTION 14db9cbde FUN_14db9cbde body=299 status=ok
// SIG undefined FUN_14db9cbde(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014db9ccff) */
/* WARNING: Removing unreachable block (ram,0x00014db9cd0a) */
/* WARNING: Removing unreachable block (ram,0x00014db9cd05) */
/* WARNING: Removing unreachable block (ram,0x00014db9cc60) */

void FUN_14db9cbde(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong unaff_RDI;
  short *psVar3;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x48);
  psVar3 = (short *)~((~param_1 | *(ulonglong *)(unaff_RDI + -0x88)) &
                     (~*(ulonglong *)(unaff_RDI + -0x88) | param_1));
  lVar2 = *(longlong *)(unaff_RDI + -0x90);
  FUN_14d8275cb();
  *psVar3 = *psVar3 + -1;
  *(ulonglong *)(lVar2 + -8) = uVar1 ^ param_1;
  *(undefined8 *)(lVar2 + -0x10) = param_4;
  *(undefined8 *)(lVar2 + -0x18) = param_4;
  *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(lVar2 + -8);
  *(undefined **)(lVar2 + -8) = &DAT_161877e87;
  in(0xd8);
  in(0xaa);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14db9cd0a FUN_14db9cd0a body=93 status=ok
// SIG undefined FUN_14db9cd0a(void)

void FUN_14db9cd0a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  thunk_FUN_1566805f3(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14db9cd7f FUN_14db9cd7f body=7 status=ok
// SIG undefined FUN_14db9cd7f(void)

void FUN_14db9cd7f(void)

{
  FUN_165e93f27();
  return;
}



// FUNCTION 14db9cd86 FUN_14db9cd86 body=320 status=ok
// SIG undefined FUN_14db9cd86(void)

void FUN_14db9cd86(void)

{
  longlong in_R9;
  longlong unaff_R12;
  
  if (in_R9 == 0x12ad03) {
    FUN_165e93f27();
    return;
  }
  if (in_R9 == 0x12ad04) {
    FUN_165827205();
    FUN_15b23b580(~*(ulonglong *)(unaff_R12 + -0x60));
    return;
  }
  FUN_165827211();
  return;
}



// FUNCTION 14db9cf57 FUN_14db9cf57 body=151 status=ok
// SIG undefined FUN_14db9cf57(void)

void FUN_14db9cf57(undefined8 param_1,undefined8 param_2)

{
  ulonglong unaff_R15;
  ushort local_res18;
  ulonglong in_stack_00000020;
  
  local_res18 = local_res18 + (ushort)unaff_R15 + (local_res18 & (ushort)unaff_R15) * -2;
  FUN_165849c6a(param_1,param_2,FUN_165849c6a,(local_res18 - (local_res18 | 0x100)) + 0x100,
                ~(in_stack_00000020 & unaff_R15) & (in_stack_00000020 | unaff_R15));
  return;
}



// FUNCTION 14db9d1c2 FUN_14db9d1c2 body=130 status=ok
// SIG undefined FUN_14db9d1c2(void)

void FUN_14db9d1c2(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  longlong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)&LAB_1572cf5f3)
            (-*(longlong *)(unaff_R13 + -0x78),&LAB_1572cf5f3,
             (param_3 & unaff_R15 ^ 0xffffffffffffffff) & param_2 - unaff_RDI);
  return;
}



// FUNCTION 14db9d255 FUN_14db9d255 body=149 status=ok
// SIG undefined FUN_14db9d255(void)

void FUN_14db9d255(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x70);
  FUN_14e147655(param_1,param_2,-1 - ((~uVar1 & ~param_1 | uVar1) & (~uVar1 | param_1)));
  return;
}



// FUNCTION 14db9d382 FUN_14db9d382 body=169 status=ok
// SIG undefined FUN_14db9d382(void)

void FUN_14db9d382(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 unaff_RSI;
  ushort *unaff_R12;
  ushort unaff_R15W;
  longlong local_res20;
  
  *unaff_R12 = ~*unaff_R12;
  *unaff_R12 = *unaff_R12 | ~unaff_R15W;
  *unaff_R12 = *unaff_R12;
  *unaff_R12 = ~*unaff_R12;
  *unaff_R12 = *unaff_R12;
  *(undefined8 *)(local_res20 + -8) = param_2;
  *(undefined8 *)(local_res20 + -0x10) = &DAT_1571cbabe;
  *(undefined **)(local_res20 + -0x18) = &DAT_1571cbabe;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  uVar1 = *(undefined8 *)(local_res20 + -0x18);
  *(undefined8 *)(local_res20 + -0x18) = unaff_RSI;
  *(undefined8 *)(local_res20 + -8) = uVar1;
  uVar1 = *(undefined8 *)(local_res20 + -0x10);
  *(undefined8 *)(local_res20 + -0x10) = param_3;
  *(undefined8 *)(local_res20 + -0x18) = param_3;
  (*(code *)0x1571cba9f)(param_1,uVar1,0x1571cba9f);
  return;
}



// FUNCTION 14db9d431 FUN_14db9d431 body=176 status=ok
// SIG undefined FUN_14db9d431(void)

void FUN_14db9d431(void)

{
  return;
}



// FUNCTION 14db9d639 FUN_14db9d639 body=314 status=ok
// SIG undefined FUN_14db9d639(void)

void FUN_14db9d639(int param_1)

{
  FUN_16542400f(~(0xffffffffU - param_1));
  return;
}



// FUNCTION 14db9dba7 FUN_14db9dba7 body=11 status=ok
// SIG undefined FUN_14db9dba7(void)

/* WARNING: Removing unreachable block (ram,0x00014db9dc3d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db9dba7(void)

{
  return;
}



// FUNCTION 14db9dc3d FUN_14db9dc3d body=145 status=ok
// SIG undefined FUN_14db9dc3d(void)

void FUN_14db9dc3d(undefined8 param_1,undefined8 param_2)

{
  FUN_161225cef(param_1,param_2);
  FUN_14db9dcd0();
  return;
}



// FUNCTION 14db9dcd0 FUN_14db9dcd0 body=150 status=ok
// SIG undefined FUN_14db9dcd0(void)

void FUN_14db9dcd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  uint *unaff_RBP;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined1 auStackX_8 [32];
  
  uVar1 = *unaff_RBP;
  if ((in_TF & 1) == 0) {
    register0x00000020 = (BADSPACEBASE *)auStackX_8;
  }
  *(undefined8 *)((longlong)register0x00000020 + -8) = param_3;
  *unaff_RBP = *unaff_RBP & 0x7eca4b83 | 0x8135b47c;
  uVar2 = *(undefined8 *)((longlong)register0x00000020 + -8);
  *unaff_RBP = ~((~*unaff_RBP | ~(uVar1 & 0x8135b47c)) + *unaff_RBP + 1);
  *(int *)((longlong)register0x00000020 + 4) =
       *(int *)((longlong)register0x00000020 + 4) + 0x5b0106e3;
  *(undefined8 *)((longlong)register0x00000020 + -8) = unaff_RBX;
  *(ulonglong *)((longlong)register0x00000020 + -8) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)(in_AF & 1) * 0x10 | 1 |
       (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  *(ushort *)((longlong)register0x00000020 + -8) =
       *(ushort *)((longlong)register0x00000020 + -8) & 0x100;
  *(ulonglong *)((longlong)register0x00000020 + -0x10) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)(*(short *)((longlong)register0x00000020 + -8) < 0) * 0x80 |
       (ulonglong)(*(short *)((longlong)register0x00000020 + -8) == 0) * 0x40 |
       (ulonglong)(in_AF & 1) * 0x10 |
       (ulonglong)((POPCOUNT(*(ushort *)((longlong)register0x00000020 + -8) & 0xff) & 1U) == 0) * 4
       | (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  *(ulonglong *)((longlong)register0x00000020 + -0x10) =
       *(ulonglong *)((longlong)register0x00000020 + -0x10) | 0x800;
  FUN_1646febe8(0x3b0,param_2,uVar2);
  return;
}



// FUNCTION 14db9ddef FUN_14db9ddef body=153 status=ok
// SIG undefined FUN_14db9ddef(void)

void FUN_14db9ddef(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_16247e0fb(param_1,param_2,param_3);
  return;
}



// FUNCTION 14db9df10 FUN_14db9df10 body=177 status=ok
// SIG undefined FUN_14db9df10(void)

void FUN_14db9df10(void)

{
  return;
}



// FUNCTION 14db9dfc3 FUN_14db9dfc3 body=133 status=ok
// SIG undefined FUN_14db9dfc3(void)

/* WARNING: Removing unreachable block (ram,0x00014db9dfe8) */

void FUN_14db9dfc3(void)

{
  return;
}



// FUNCTION 14db9e049 FUN_14db9e049 body=60 status=ok
// SIG undefined FUN_14db9e049(void)

void FUN_14db9e049(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_165c7153c(param_1,param_2,param_3);
  return;
}



// FUNCTION 14db9e0d4 FUN_14db9e0d4 body=363 status=ok
// SIG undefined FUN_14db9e0d4(void)

/* WARNING: Removing unreachable block (ram,0x00014db9e173) */
/* WARNING: Removing unreachable block (ram,0x00014db9e1f9) */
/* WARNING: Removing unreachable block (ram,0x00014db9e20a) */
/* WARNING: Removing unreachable block (ram,0x00014db9e168) */

void FUN_14db9e0d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 in_AL;
  undefined8 uVar4;
  ushort uVar5;
  undefined8 unaff_R12;
  ulonglong unaff_R13;
  ulonglong uVar6;
  ulonglong unaff_R15;
  ulonglong in_stack_00000010;
  ulonglong local_res18;
  ulonglong local_res20;
  
  uVar6 = ~(unaff_R13 & unaff_R15) & (unaff_R13 | unaff_R15);
  uVar1 = local_res18 ^ unaff_R15;
  uVar2 = local_res20 ^ unaff_R15;
  local_res18._0_2_ = (ushort)uVar1;
  uVar5 = 0xff01 - (~((ushort)local_res18 | 0x100) + 2);
                    /* WARNING (jumptable): Read-only address (ram,0x00014d7a6424) is written */
                    /* WARNING: Read-only address (ram,0x00014d7a6424) is written */
  LOCK();
  UNLOCK();
  uRam000000014d7a6424 = in_AL;
  *(ulonglong *)(uVar2 - 8) = uVar6;
  *(ulonglong *)(uVar2 - 0x10) = uVar6;
  *(undefined4 *)(uVar2 - 0x18) = 0x12ab9344;
  *(undefined4 *)(uVar2 - 0x14) = 0;
  lVar3 = *(longlong *)(uVar2 - 0x18);
  *(ulonglong *)(uVar2 - 0x18) =
       (ulonglong)((uVar5 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar5 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar5 & 0x400) != 0) * 0x400 | (ulonglong)((uVar5 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar5 & 0x100) != 0) * 0x100 | (ulonglong)((uVar5 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar5 & 0x40) != 0) * 0x40 | (ulonglong)((uVar5 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar5 & 4) != 0) * 4 | (ulonglong)((uVar5 & 1) != 0) |
       (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uVar2 - 0x20) = unaff_R12;
  *(undefined8 *)(uVar2 - 0x18) = *(undefined8 *)(uVar2 - 0x20);
  *(undefined8 *)(uVar2 - 0x20) = param_3;
  *(undefined8 *)(uVar2 - 0x28) = 0x165baa1b9;
  uVar4 = FUN_14dc3cffa(param_1,param_2,0x490fc25,param_4);
  *(undefined4 *)(uVar2 - 0x28) = 0x70e83012;
  *(undefined4 *)(uVar2 - 0x24) = 0;
  uVar1 = *(ulonglong *)(lVar3 + -0xef35012);
  *(ulonglong *)(uVar2 - 0x28) =
       ~(uVar1 & (in_stack_00000010 ^ unaff_R15)) & (uVar1 | in_stack_00000010 ^ unaff_R15);
  *(undefined8 *)(uVar2 - 0x30) = uVar4;
  *(undefined8 *)(uVar2 - 0x38) = uVar4;
  *(code **)(uVar2 - 0x30) = FUN_165baa260;
  FUN_1667e05e4();
  return;
}



// FUNCTION 14db9e2ca FUN_14db9e2ca body=268 status=ok
// SIG undefined FUN_14db9e2ca(void)

/* WARNING: Removing unreachable block (ram,0x00014db9e342) */
/* WARNING: Removing unreachable block (ram,0x00014db9e348) */

void FUN_14db9e2ca(void)

{
  return;
}



// FUNCTION 14db9e4f3 FUN_14db9e4f3 body=665 status=ok
// SIG undefined FUN_14db9e4f3(void)

/* WARNING: Removing unreachable block (ram,0x00014db9e617) */
/* WARNING: Removing unreachable block (ram,0x00014db9e5f3) */
/* WARNING: Removing unreachable block (ram,0x00014db9e5f9) */
/* WARNING: Removing unreachable block (ram,0x00014db9e61b) */
/* WARNING: Removing unreachable block (ram,0x00014db9e6ab) */
/* WARNING: Removing unreachable block (ram,0x00014db9e6b0) */
/* WARNING: Removing unreachable block (ram,0x000162432168) */
/* WARNING: Removing unreachable block (ram,0x00014db9e6b6) */
/* WARNING: Removing unreachable block (ram,0x00014db9e719) */
/* WARNING: Removing unreachable block (ram,0x00014db9e75e) */
/* WARNING: Removing unreachable block (ram,0x00014db9e763) */
/* WARNING: Removing unreachable block (ram,0x00014db9e769) */
/* WARNING: Removing unreachable block (ram,0x000161b462f4) */
/* WARNING: Removing unreachable block (ram,0x0001624321cc) */
/* WARNING: Removing unreachable block (ram,0x0001624321ce) */

undefined8 FUN_14db9e4f3(void)

{
  undefined8 uVar1;
  longlong unaff_R14;
  ushort unaff_R15W;
  bool bVar2;
  undefined2 local_res18;
  
  local_res18 = local_res18 ^ unaff_R15W;
  bVar2 = (local_res18 | 0x100) == 0x100;
  uVar1 = FUN_1566dbe9a();
  if (bVar2) {
    return uVar1;
  }
  if (unaff_R14 == 1) {
    return uVar1;
  }
  uVar1 = FUN_15701848f();
  return uVar1;
}



// FUNCTION 14db9e894 FUN_14db9e894 body=571 status=ok
// SIG undefined FUN_14db9e894(void)

/* WARNING: Instruction at (ram,0x00016484ab07) overlaps instruction at (ram,0x00016484ab06)
    */
/* WARNING: Removing unreachable block (ram,0x00014db9e9c6) */
/* WARNING: Removing unreachable block (ram,0x00014db9e9cc) */
/* WARNING: Removing unreachable block (ram,0x00015647a1fa) */
/* WARNING: Removing unreachable block (ram,0x00016484ab06) */
/* WARNING: Removing unreachable block (ram,0x00014db9e942) */
/* WARNING: Removing unreachable block (ram,0x00016484ab86) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x00016484ab0c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14db9e894(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  if (CONCAT44((int)((ulonglong)in_RAX >> 0x20),0x28f63c46) != 0x3e78cf43) {
    uVar1 = (*(code *)0x15b579ae6)();
    return uVar1;
  }
  uVar1 = FUN_15b8d66c3();
  return uVar1;
}



// FUNCTION 14db9e9cc FUN_14db9e9cc body=107 status=ok
// SIG undefined FUN_14db9e9cc(void)

void FUN_14db9e9cc(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  FUN_165442fac(*(undefined8 *)(unaff_RDI + -0x48),
                ((param_1 - 1) - ~*(ulonglong *)(unaff_RDI + -0x68)) +
                (*(ulonglong *)(unaff_RDI + -0x68) & param_1) * -2,param_3);
  return;
}



// FUNCTION 14db9eb68 thunk_FUN_14db9eb6e body=5 status=ok
// SIG undefined thunk_FUN_14db9eb6e(void)

void thunk_FUN_14db9eb6e(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1654aee50(param_1,0x25e1,*(undefined8 *)(unaff_RDI + -0x70),
                ~(*(ulonglong *)(unaff_RDI + -0x60) & param_1) &
                (*(ulonglong *)(unaff_RDI + -0x60) | param_1));
  FUN_160d172ef(&DAT_ac91427a73ca2b2b,0xffffffff,0x4104afd6);
  FUN_161c31090();
  return;
}



// FUNCTION 14db9eb6e FUN_14db9eb6e body=446 status=ok
// SIG undefined FUN_14db9eb6e(void)

void FUN_14db9eb6e(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1654aee50(param_1,0x25e1,*(undefined8 *)(unaff_RDI + -0x70),
                ~(*(ulonglong *)(unaff_RDI + -0x60) & param_1) &
                (*(ulonglong *)(unaff_RDI + -0x60) | param_1));
  FUN_160d172ef(&DAT_ac91427a73ca2b2b,0xffffffff,0x4104afd6);
  FUN_161c31090();
  return;
}



// FUNCTION 14db9edd9 FUN_14db9edd9 body=165 status=ok
// SIG undefined FUN_14db9edd9(void)

void FUN_14db9edd9(void)

{
  FUN_16509f9bf();
  FUN_14db9ee80();
  return;
}



// FUNCTION 14db9ee80 FUN_14db9ee80 body=172 status=ok
// SIG undefined FUN_14db9ee80(void)

void FUN_14db9ee80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x1616673a4)(8,param_2,param_3,0x1616673a4);
  return;
}



// FUNCTION 14db9f16a FUN_14db9f16a body=168 status=ok
// SIG undefined FUN_14db9f16a(void)

void FUN_14db9f16a(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_15b82c6d9(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14db9f374 FUN_14db9f374 body=825 status=ok
// SIG undefined FUN_14db9f374(void)

/* WARNING: Removing unreachable block (ram,0x00014d8b086d) */
/* WARNING: Removing unreachable block (ram,0x00014d8b0873) */
/* WARNING: Removing unreachable block (ram,0x00014d8b0878) */
/* WARNING: Removing unreachable block (ram,0x00014d8b0896) */
/* WARNING: Removing unreachable block (ram,0x00014d8b0890) */
/* WARNING: Removing unreachable block (ram,0x00014d8b089f) */
/* WARNING: Removing unreachable block (ram,0x00014db9f4c9) */
/* WARNING: Removing unreachable block (ram,0x00014db9f52f) */
/* WARNING: Removing unreachable block (ram,0x00014db9f535) */
/* WARNING: Removing unreachable block (ram,0x00014db9f41d) */
/* WARNING: Removing unreachable block (ram,0x00014db9f4c3) */
/* WARNING: Removing unreachable block (ram,0x00014d8b07ec) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14db9f374(void)

{
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_R13;
  ulonglong unaff_R14;
  longlong unaff_R15;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 local_res10;
  undefined8 in_stack_00000018;
  ulonglong in_stack_00000030;
  
  *(undefined8 *)(unaff_R15 + 8) = 0;
  *(ulonglong *)(unaff_R15 + 8) = *(ulonglong *)(unaff_R15 + 8) ^ unaff_R14;
  in_stack_00000030 = in_stack_00000030 ^ CONCAT44(local_resc,local_res8);
  *(undefined8 *)(in_stack_00000030 - 8) = unaff_RBP;
  *(undefined8 *)(in_stack_00000030 - 0x10) = local_res10;
  *(undefined8 *)(in_stack_00000030 - 0x18) = local_res10;
  *(undefined8 *)(in_stack_00000030 - 0x10) = *(undefined8 *)(in_stack_00000030 - 8);
  *(undefined8 *)(in_stack_00000030 - 8) = 0x5f7668d4;
  *(ulonglong *)(in_stack_00000030 - 8) = *(ulonglong *)(in_stack_00000030 - 8) ^ 0x5f7668d4;
  *(longlong *)(in_stack_00000030 - 8) =
       (longlong)(&DAT_1569ffafb + *(longlong *)(in_stack_00000030 - 8));
  *(undefined8 *)(in_stack_00000030 - 0x10) = unaff_RBX;
  *(undefined8 *)(in_stack_00000030 - 0x18) = unaff_RBX;
  *(undefined8 *)(in_stack_00000030 - 0x20) = unaff_R13;
  *(undefined **)(in_stack_00000030 - 0x10) = &DAT_14d7c4be6;
  return in_stack_00000018;
}



// FUNCTION 14db9f4c9 FUN_14db9f4c9 body=125 status=ok
// SIG undefined FUN_14db9f4c9(void)

void FUN_14db9f4c9(void)

{
  FUN_15b94d3ef();
  return;
}



// FUNCTION 14db9f5ec FUN_14db9f5ec body=624 status=ok
// SIG undefined FUN_14db9f5ec(void)

/* WARNING: Removing unreachable block (ram,0x00014db9f83b) */

void FUN_14db9f5ec(undefined8 param_1,ushort param_2,undefined8 param_3,ushort param_4)

{
  ushort uVar1;
  ushort in_AX;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 unaff_ESI;
  longlong unaff_R12;
  ulonglong uVar4;
  ushort *unaff_R15;
  
  uVar1 = *unaff_R15;
  *unaff_R15 = 0;
  *unaff_R15 = *unaff_R15 +
               (-~uVar1 - (~(0xfeff - (param_4 | (in_AX & param_2 ^ 0xab21) + 0xaa21)) + 2));
  uVar2 = FUN_1656fcaf8(param_1);
  uVar3 = (-uVar2 - *(ulonglong *)(unaff_R12 + -0x30)) +
          (*(ulonglong *)(unaff_R12 + -0x30) | uVar2) * 2;
  FUN_166a4759c();
  uVar4 = CONCAT44((int)uVar3,unaff_ESI) ^ *(ulonglong *)(unaff_R12 + -200);
  uVar2 = FUN_15738e75d(&stack0x00000018);
  if ((longlong)(*(ulonglong *)(uVar4 + uVar3 + (uVar4 & uVar3) * -2 + -0x78) & uVar2) < 0) {
    thunk_FUN_160ff3983();
    return;
  }
  thunk_FUN_160ff3983();
  return;
}



// FUNCTION 14db9f85d FUN_14db9f85d body=101 status=ok
// SIG undefined FUN_14db9f85d(void)

void FUN_14db9f85d(undefined8 param_1,undefined8 param_2)

{
  FUN_157103c4a(param_1,param_2,FUN_157103c4a);
  return;
}



// FUNCTION 14db9f958 FUN_14db9f958 body=436 status=ok
// SIG undefined FUN_14db9f958(void)

/* WARNING: Removing unreachable block (ram,0x0001621d2e58) */
/* WARNING: Removing unreachable block (ram,0x00014db9f9dc) */
/* WARNING: Removing unreachable block (ram,0x00014db9fa68) */
/* WARNING: Removing unreachable block (ram,0x0001621d2e44) */
/* WARNING: Removing unreachable block (ram,0x0001621d2e73) */
/* WARNING: Removing unreachable block (ram,0x00014db9fa6e) */

void FUN_14db9f958(ulonglong param_1)

{
  longlong *plVar1;
  longlong in_RAX;
  undefined8 unaff_RSI;
  ulonglong local_res20;
  ulonglong in_stack_00000028;
  
  in_stack_00000028 = in_stack_00000028 ^ param_1;
  plVar1 = (longlong *)(in_stack_00000028 - 8);
  *plVar1 = in_RAX;
  if (((local_res20 ^ param_1) & 0x80) == 0) {
    *(longlong *)(in_stack_00000028 - 0x10) = *plVar1;
    *(undefined8 *)(in_stack_00000028 - 0x18) = unaff_RSI;
    *(undefined8 *)(in_stack_00000028 - 8) = 0;
    *plVar1 = (longlong)(&LAB_1665b188b + *plVar1);
    thunk_FUN_15b642ca5();
    return;
  }
  FUN_1665b181d();
  return;
}



// FUNCTION 14db9fac2 FUN_14db9fac2 body=76 status=ok
// SIG undefined FUN_14db9fac2(void)

undefined8 FUN_14db9fac2(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db9fbc5 FUN_14db9fbc5 body=10 status=ok
// SIG undefined FUN_14db9fbc5(void)

void FUN_14db9fbc5(void)

{
  FUN_1614a9420();
  return;
}



// FUNCTION 14db9fc4f FUN_14db9fc4f body=276 status=ok
// SIG undefined FUN_14db9fc4f(void)

/* WARNING: Removing unreachable block (ram,0x00014db9fce9) */

void FUN_14db9fc4f(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong unaff_RSI;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = ~unaff_R15 | param_1 - unaff_RSI;
  uVar1 = param_1 - unaff_RSI ^ 0xffffffffffffffffU | unaff_R15;
  if (-1 < *(longlong *)(unaff_R13 + -0x68)) {
    FUN_14de79c10();
    return;
  }
  FUN_165d92ffc(~((uVar1 - (uVar2 | uVar1)) + uVar2),
                ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) &
                 (~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)),param_3,param_4);
  return;
}



// FUNCTION 14db9fe07 FUN_14db9fe07 body=73 status=ok
// SIG undefined FUN_14db9fe07(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14db9fe07(void)

{
  undefined8 unaff_RBP;
  undefined8 unaff_R13;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_R13;
  *(undefined8 *)(local_res10 + -0x10) = unaff_RBP;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined1 **)(local_res10 + -8) = &LAB_14db9fe65;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14db9fe9e thunk_FUN_14db9fea4 body=5 status=ok
// SIG undefined thunk_FUN_14db9fea4(void)

/* WARNING: Removing unreachable block (ram,0x00014db9ff5b) */
/* WARNING: Removing unreachable block (ram,0x0001617fba86) */
/* WARNING: Removing unreachable block (ram,0x00014db9ff37) */

undefined8 thunk_FUN_14db9fea4(void)

{
  undefined8 uVar1;
  ulonglong unaff_RBX;
  ulonglong unaff_R12;
  undefined8 in_stack_00000010;
  
  if ((unaff_R12 & unaff_RBX) != 0) {
    FUN_156be181a();
    uVar1 = FUN_15b668fec(in_stack_00000010);
    return uVar1;
  }
  uVar1 = FUN_1617fba01();
  return uVar1;
}



// FUNCTION 14db9fea4 FUN_14db9fea4 body=182 status=ok
// SIG undefined FUN_14db9fea4(void)

/* WARNING: Removing unreachable block (ram,0x00014db9ff5b) */
/* WARNING: Removing unreachable block (ram,0x0001617fba86) */
/* WARNING: Removing unreachable block (ram,0x00014db9ff37) */

undefined8 FUN_14db9fea4(void)

{
  undefined8 uVar1;
  ulonglong unaff_RBX;
  ulonglong unaff_R12;
  undefined8 in_stack_00000010;
  
  if ((unaff_R12 & unaff_RBX) != 0) {
    FUN_156be181a();
    uVar1 = FUN_15b668fec(in_stack_00000010);
    return uVar1;
  }
  uVar1 = FUN_1617fba01();
  return uVar1;
}



// FUNCTION 14db9ff5b FUN_14db9ff5b body=189 status=ok
// SIG undefined FUN_14db9ff5b(void)

void FUN_14db9ff5b(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_stack_00000018;
  
  FUN_1626b6738(param_1,param_2,param_3,param_4,(in_stack_00000018 & param_1) << 1);
  return;
}



// FUNCTION 14dba0019 FUN_14dba0019 body=139 status=ok
// SIG undefined FUN_14dba0019(void)

void FUN_14dba0019(undefined8 param_1)

{
  longlong unaff_RDI;
  
  FUN_15663c73f(param_1,*(undefined8 *)(unaff_RDI + -0x68));
  return;
}



// FUNCTION 14dba00a6 FUN_14dba00a6 body=137 status=ok
// SIG undefined FUN_14dba00a6(void)

void FUN_14dba00a6(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong unaff_RBX;
  ulonglong *puVar5;
  
  puVar1 = (ulonglong *)(&stack0xfffffffff00ee862 + param_4);
  *(int *)puVar1 = -0x3d83c927;
  *(int *)puVar1 = (int)*puVar1 + 0x4689f343;
  *(int *)((longlong)puVar1 + 4) = 0x1afea338;
  *(uint *)((longlong)puVar1 + 4) = *(uint *)((longlong)puVar1 + 4) ^ 0x1afea338;
  uVar3 = *puVar1;
  *puVar1 = param_1;
  uVar4 = *puVar1;
  puVar5 = (ulonglong *)((longlong)puVar1 + (uVar3 - 0x9062a04));
  *puVar1 = unaff_RBX;
  puVar1[-1] = (~unaff_RBX + *puVar5) - (~unaff_RBX & *puVar5);
  uVar2 = puVar1[-1];
  uVar3 = *puVar1;
  *puVar5 = ~*puVar5;
  *puVar1 = uVar4;
  uVar4 = *puVar5;
  *puVar5 = ~*puVar5;
  *puVar5 = (~(uVar4 & uVar3) + uVar3) - *puVar5;
  FUN_161ac7feb(FUN_161ac7feb,uVar2);
  return;
}



// FUNCTION 14dba0311 FUN_14dba0311 body=155 status=ok
// SIG undefined FUN_14dba0311(void)

void FUN_14dba0311(void)

{
  return;
}



// FUNCTION 14dba03ae FUN_14dba03ae body=11 status=ok
// SIG undefined FUN_14dba03ae(void)

void FUN_14dba03ae(void)

{
  FUN_14d7aa63e();
  return;
}



// FUNCTION 14dba0569 FUN_14dba0569 body=176 status=ok
// SIG undefined FUN_14dba0569(void)

undefined8 FUN_14dba0569(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dba0619 FUN_14dba0619 body=573 status=ok
// SIG undefined FUN_14dba0619(void)

/* WARNING: Removing unreachable block (ram,0x00014dba0720) */
/* WARNING: Removing unreachable block (ram,0x0001572e5932) */
/* WARNING: Removing unreachable block (ram,0x00014dba06b3) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dba0619(void)

{
  uint6 uVar1;
  uint6 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = (uint6)((ulonglong)*(undefined8 *)(unaff_R13 + -0x30) >> 0x10);
  uVar2 = (uint6)(unaff_R15 >> 0x10);
  uVar5 = CONCAT62(~(uVar1 & uVar2) & (uVar1 | uVar2),0xfeff);
  uVar3 = FUN_164bb8327(FUN_164bb8327,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  uVar6 = uVar3 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_R12 + -0x78);
  uVar4 = ~*(ulonglong *)(unaff_R12 + -0x78) | uVar3;
  FUN_15753af27(uVar5 + uVar3 + (uVar5 & uVar3) * -2,~((uVar4 - (uVar6 | uVar4)) + uVar6));
  return;
}



// FUNCTION 14dba0742 FUN_14dba0742 body=55 status=ok
// SIG undefined FUN_14dba0742(void)

/* WARNING: Removing unreachable block (ram,0x00014dba07e7) */

void FUN_14dba0742(void)

{
  (*(code *)0x1650e6c3a)(0x1650e6c3a);
  return;
}



// FUNCTION 14dba08b2 FUN_14dba08b2 body=296 status=ok
// SIG undefined FUN_14dba08b2(void)

void FUN_14dba08b2(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  ulonglong in_stack_00000018;
  ulonglong in_stack_00000020;
  
  FUN_165c1b784(&stack0x00000008,in_stack_00000008,param_3,param_4,
                param_2 + unaff_R15 + (in_stack_00000018 & unaff_R15) * -2,
                ~(in_stack_00000020 & unaff_R15));
  FUN_15b0b5d72(param_1);
  return;
}



// FUNCTION 14dba09e2 FUN_14dba09e2 body=360 status=ok
// SIG undefined FUN_14dba09e2(void)

/* WARNING: Removing unreachable block (ram,0x00014dba0a57) */

undefined8 FUN_14dba09e2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong unaff_RBP;
  ulonglong unaff_RDI;
  
  uVar1 = (*(code *)0x162e68cce)(param_1,unaff_RDI ^ unaff_RBP,param_3,0x162e68cce);
  return uVar1;
}



// FUNCTION 14dba0ad0 FUN_14dba0ad0 body=365 status=ok
// SIG undefined FUN_14dba0ad0(void)

/* WARNING: Removing unreachable block (ram,0x00014dba0c0d) */
/* WARNING: Removing unreachable block (ram,0x00014dba0b75) */

undefined8 FUN_14dba0ad0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_165367022();
  return uVar1;
}



// FUNCTION 14dba0d36 FUN_14dba0d36 body=153 status=ok
// SIG undefined FUN_14dba0d36(void)

void FUN_14dba0d36(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RBP;
  longlong in_stack_00000008;
  
  *(undefined4 *)(&stack0x635f08e7 + unaff_RBP) = 0;
  *(undefined4 *)(&stack0x635f08e7 + unaff_RBP) = *(undefined4 *)(&stack0x635f08e7 + unaff_RBP);
  if (in_stack_00000008 == -0x7ea1cd23) {
    FUN_156eaf55e();
    return;
  }
  (*(code *)0x1663f1457)(param_1,param_2);
  return;
}



// FUNCTION 14dba0fb2 FUN_14dba0fb2 body=759 status=ok
// SIG undefined FUN_14dba0fb2(void)

/* WARNING: Removing unreachable block (ram,0x00014dba1177) */
/* WARNING: Removing unreachable block (ram,0x00014dba117d) */
/* WARNING: Removing unreachable block (ram,0x00014dba1053) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dba0fb2(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  byte unaff_BL;
  ushort uVar2;
  
  bVar1 = (byte)param_1 & 0xf;
  uVar2 = (ushort)CONCAT71((int7)((ulonglong)param_4 >> 8),(byte)param_4 & unaff_BL);
  FUN_1569c75ca(param_1,~param_1,4,uVar2 << bVar1 | uVar2 >> 0x10 - bVar1);
  thunk_FUN_165ae8401(thunk_FUN_165ae8401);
  return;
}



// FUNCTION 14dba13fc FUN_14dba13fc body=171 status=ok
// SIG undefined FUN_14dba13fc(void)

void FUN_14dba13fc(void)

{
  return;
}



// FUNCTION 14dba1564 FUN_14dba1564 body=141 status=ok
// SIG undefined FUN_14dba1564(void)

void FUN_14dba1564(ulonglong param_1,undefined8 param_2)

{
  undefined8 *unaff_RBP;
  longlong in_R10;
  undefined8 unaff_R15;
  
  *(ulonglong *)(in_R10 + 0x18) =
       (param_1 ^ 0xffffffffffffffff | *(ulonglong *)(in_R10 + 0x18)) + param_1 + 1;
  FUN_15ba0d06f(FUN_15ba0d06f,param_2);
  *unaff_RBP = unaff_R15;
  FUN_165c7153c();
  return;
}



// FUNCTION 14dba167f FUN_14dba167f body=10 status=ok
// SIG undefined FUN_14dba167f(void)

void FUN_14dba167f(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong in_RAX;
  undefined8 in_stack_00000018;
  
  uVar1 = *(ulonglong *)(&stack0xfffffffff77b0d89 + in_RAX);
  *(ulonglong *)(&stack0xfffffffff77b0d89 + in_RAX) =
       ~*(ulonglong *)(&stack0xfffffffff77b0d89 + in_RAX);
  *(ulonglong *)(&stack0xfffffffff77b0d89 + in_RAX) =
       *(ulonglong *)(&stack0xfffffffff77b0d89 + in_RAX) | param_1;
  uVar2 = *(ulonglong *)(&stack0xfffffffff77b0d89 + in_RAX);
  *(undefined8 *)(&stack0xfffffffff77b0d89 + in_RAX) = 0;
  *(ulonglong *)(&stack0xfffffffff77b0d89 + in_RAX) =
       *(ulonglong *)(&stack0xfffffffff77b0d89 + in_RAX) ^
       0xffffffffffffffff - ((~param_1 | uVar1) & uVar2);
  (*(code *)&LAB_14dabb4b1)(in_stack_00000018);
  return;
}



// FUNCTION 14dba1885 FUN_14dba1885 body=170 status=ok
// SIG undefined FUN_14dba1885(void)

void FUN_14dba1885(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong param_8)

{
  undefined8 uVar1;
  longlong lVar2;
  short sVar3;
  undefined8 unaff_RBX;
  undefined8 unaff_R15;
  short *unaff_retaddr;
  
  sVar3 = FUN_156ed6637();
  *unaff_retaddr = sVar3 + *unaff_retaddr;
  *(undefined8 *)(param_8 + -8) = param_1;
  *(undefined8 *)(param_8 + -0x10) = param_4;
  *(undefined8 *)(param_8 + -0x18) = param_4;
  *(undefined8 *)(param_8 + -0x20) = param_5;
  *(undefined8 *)(param_8 + -0x10) = *(undefined8 *)(param_8 + -8);
  uVar1 = *(undefined8 *)(param_8 + -0x18);
  *(undefined8 *)(param_8 + -0x18) = unaff_RBX;
  *(undefined8 *)(param_8 + -0x20) = 0x156ed66a6;
  *(longlong *)(param_8 + -0x28) = param_8 + -0x20;
  lVar2 = *(longlong *)(param_8 + -0x28);
  *(undefined8 *)(lVar2 + -0x10) = unaff_R15;
  *(undefined4 *)(lVar2 + -0x18) = 0x59f7f56;
  *(undefined4 *)(lVar2 + -8) = *(undefined4 *)(lVar2 + -0x18);
  FUN_1569a65a4(&DAT_165de6df6,param_2,param_3,uVar1);
  return;
}



// FUNCTION 14dba1930 FUN_14dba1930 body=152 status=ok
// SIG undefined FUN_14dba1930(void)

void FUN_14dba1930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  undefined8 uVar1;
  longlong lVar2;
  short in_AX;
  undefined8 unaff_RBX;
  short *in_R10;
  undefined8 unaff_R15;
  undefined8 local_res8;
  undefined8 uStackX_20;
  
  *in_R10 = in_AX + *in_R10;
  *(undefined8 *)(param_7 + -8) = param_1;
  *(undefined8 *)(param_7 + -0x10) = param_4;
  *(undefined8 *)(param_7 + -0x18) = param_4;
  *(undefined8 *)(param_7 + -0x20) = uStackX_20;
  *(undefined8 *)(param_7 + -0x10) = *(undefined8 *)(param_7 + -8);
  uVar1 = *(undefined8 *)(param_7 + -0x18);
  *(undefined8 *)(param_7 + -0x18) = unaff_RBX;
  *(undefined8 *)(param_7 + -0x20) = local_res8;
  *(longlong *)(param_7 + -0x28) = param_7 + -0x20;
  lVar2 = *(longlong *)(param_7 + -0x28);
  *(undefined8 *)(lVar2 + -0x10) = unaff_R15;
  *(undefined4 *)(lVar2 + -0x18) = 0x59f7f56;
  *(undefined4 *)(lVar2 + -8) = *(undefined4 *)(lVar2 + -0x18);
  FUN_1569a65a4(&DAT_165de6df6,param_2,param_3,uVar1);
  return;
}



// FUNCTION 14dba19c9 FUN_14dba19c9 body=151 status=ok
// SIG undefined FUN_14dba19c9(void)

/* WARNING: Removing unreachable block (ram,0x0001652eb1b5) */
/* WARNING: Removing unreachable block (ram,0x0001652eb1c0) */
/* WARNING: Removing unreachable block (ram,0x0001652eb1bb) */
/* WARNING: Removing unreachable block (ram,0x00014dba1a5b) */

void FUN_14dba19c9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_164fea5fe(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dba1a61 FUN_14dba1a61 body=159 status=ok
// SIG undefined FUN_14dba1a61(void)

void FUN_14dba1a61(void)

{
  return;
}



// FUNCTION 14dba1b01 FUN_14dba1b01 body=363 status=ok
// SIG undefined FUN_14dba1b01(void)

void FUN_14dba1b01(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_161af240a(param_1,param_2);
  FUN_162343e43(unaff_retaddr);
  FUN_165c7153c();
  return;
}



// FUNCTION 14dba1d5b FUN_14dba1d5b body=189 status=ok
// SIG undefined FUN_14dba1d5b(void)

undefined8 FUN_14dba1d5b(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dba2247 FUN_14dba2247 body=19 status=ok
// SIG undefined FUN_14dba2247(void)

void FUN_14dba2247(void)

{
  thunk_FUN_15b0572f1();
  return;
}



// FUNCTION 14dba22e3 FUN_14dba22e3 body=159 status=ok
// SIG undefined FUN_14dba22e3(void)

/* WARNING: Removing unreachable block (ram,0x000166738575) */
/* WARNING: Removing unreachable block (ram,0x0001667385cc) */
/* WARNING: Removing unreachable block (ram,0x0001667385d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dba22e3(void)

{
  return;
}



// FUNCTION 14dba2384 FUN_14dba2384 body=157 status=ok
// SIG undefined FUN_14dba2384(void)

/* WARNING: Removing unreachable block (ram,0x00014dba24f2) */
/* WARNING: Removing unreachable block (ram,0x00014dba2516) */

ulonglong FUN_14dba2384(int param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong unaff_RDI;
  longlong unaff_R15;
  undefined8 local_res8 [4];
  
  local_res8[0] = *(undefined8 *)(unaff_RDI + -0x90);
  uVar1 = *(undefined8 *)(unaff_RDI + -0x98);
  uVar4 = FUN_1571d94c9();
  uVar5 = *(ulonglong *)(unaff_R15 + 0x10);
  lVar2 = *(longlong *)(unaff_R15 + 0x10);
  *(ulonglong *)(unaff_R15 + 0x10) = ~*(ulonglong *)(unaff_R15 + 0x10);
  *(ulonglong *)(unaff_R15 + 0x10) = *(ulonglong *)(unaff_R15 + 0x10) | uVar4;
  *(ulonglong *)(unaff_R15 + 0x10) =
       ~((~(param_3 & uVar5) + lVar2) - ~param_3 & *(ulonglong *)(unaff_R15 + 0x10));
  iVar3 = FUN_161210c19();
  if (&DAT_00000007 < local_res8) {
    uVar5 = FUN_1656ddd47();
    return uVar5;
  }
  return (ulonglong)(iVar3 + (param_1 - ~(uint)uVar1));
}



// FUNCTION 14dba2421 FUN_14dba2421 body=238 status=ok
// SIG undefined FUN_14dba2421(void)

/* WARNING: Removing unreachable block (ram,0x00014dba24f2) */
/* WARNING: Removing unreachable block (ram,0x00014dba2516) */

ulonglong FUN_14dba2421(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  longlong unaff_R15;
  uint local_res10;
  undefined1 auStackX_20 [8];
  
  uVar3 = *(ulonglong *)(unaff_R15 + 0x10);
  lVar1 = *(longlong *)(unaff_R15 + 0x10);
  *(ulonglong *)(unaff_R15 + 0x10) = ~*(ulonglong *)(unaff_R15 + 0x10);
  *(ulonglong *)(unaff_R15 + 0x10) = *(ulonglong *)(unaff_R15 + 0x10) | in_RAX;
  *(ulonglong *)(unaff_R15 + 0x10) =
       ~((~(param_3 & uVar3) + lVar1) - ~param_3 & *(ulonglong *)(unaff_R15 + 0x10));
  iVar2 = FUN_161210c19(param_1,param_2);
  if (&DAT_00000007 < auStackX_20) {
    uVar3 = FUN_1656ddd47();
    return uVar3;
  }
  return (ulonglong)(iVar2 + ((int)param_1 - ~local_res10));
}



// FUNCTION 14dba2516 FUN_14dba2516 body=122 status=ok
// SIG undefined FUN_14dba2516(void)

undefined8 FUN_14dba2516(undefined8 param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  undefined2 unaff_DI;
  undefined6 unaff_0000003a;
  
  return *(undefined8 *)(CONCAT62(unaff_0000003a,unaff_DI) + param_3 + (param_4 ^ 0x2c51a5d7));
}



// FUNCTION 14dba264e FUN_14dba264e body=149 status=ok
// SIG undefined FUN_14dba264e(void)

void FUN_14dba264e(undefined8 param_1)

{
  FUN_14dd48226(param_1);
  return;
}



// FUNCTION 14dba2769 FUN_14dba2769 body=196 status=ok
// SIG undefined FUN_14dba2769(void)

void FUN_14dba2769(void)

{
  return;
}



// FUNCTION 14dba282e FUN_14dba282e body=311 status=ok
// SIG undefined FUN_14dba282e(void)

/* WARNING: Removing unreachable block (ram,0x00014dba28bb) */
/* WARNING: Removing unreachable block (ram,0x00014dba28c7) */
/* WARNING: Removing unreachable block (ram,0x000165b2f2fb) */
/* WARNING: Removing unreachable block (ram,0x000162b66482) */
/* WARNING: Removing unreachable block (ram,0x000162b66583) */
/* WARNING: Removing unreachable block (ram,0x000162b66589) */
/* WARNING: Removing unreachable block (ram,0x0001669a35d3) */
/* WARNING: Removing unreachable block (ram,0x00014dba2957) */

undefined8 FUN_14dba282e(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_162b66482();
  return uVar1;
}



// FUNCTION 14dba2973 FUN_14dba2973 body=153 status=ok
// SIG undefined FUN_14dba2973(void)

void FUN_14dba2973(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_1611c884e((*(ulonglong *)(unaff_R12 + -0x58) & in_RAX ^ 0xffffffffffffffff) &
                ~(~*(ulonglong *)(unaff_R12 + -0x58) & ~in_RAX),
                *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX,
                ~(~param_1 | param_3 ^ 0xffffffffffffffff) ^ 0xffffffffffffffff);
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dba2a0c FUN_14dba2a0c body=14 status=ok
// SIG undefined FUN_14dba2a0c(void)

void FUN_14dba2a0c(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dba2aa3 FUN_14dba2aa3 body=139 status=ok
// SIG undefined FUN_14dba2aa3(void)

void FUN_14dba2aa3(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_157465344(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX);
  FUN_14dba2b31();
  return;
}



// FUNCTION 14dba2b31 FUN_14dba2b31 body=149 status=ok
// SIG undefined FUN_14dba2b31(void)

void FUN_14dba2b31(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000010;
  
  FUN_14da09d21(param_1,in_stack_00000010,param_3);
  return;
}



// FUNCTION 14dba2bc8 FUN_14dba2bc8 body=286 status=ok
// SIG undefined FUN_14dba2bc8(void)

/* WARNING: Removing unreachable block (ram,0x00014dba2c57) */
/* WARNING: Removing unreachable block (ram,0x00014dba2c62) */
/* WARNING: Removing unreachable block (ram,0x00014dba2ca1) */
/* WARNING: Removing unreachable block (ram,0x00014dba2c5d) */

void FUN_14dba2bc8(void)

{
  ulonglong uVar1;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  longlong lStackX_10;
  
  *(undefined8 *)(lStackX_10 + -8) = in_R11;
  *(undefined8 *)(lStackX_10 + -0x10) = *(undefined8 *)(lStackX_10 + -8);
  *(undefined8 *)(lStackX_10 + -0x18) = unaff_RDI;
  *(undefined8 *)(lStackX_10 + -0x20) = unaff_R13;
  *(undefined8 *)(lStackX_10 + -0x28) = 0x63f0b302;
  uVar1 = *(ulonglong *)(lStackX_10 + -0x28);
  *(undefined1 **)(lStackX_10 + -0x20) = &LAB_14dd9845e;
  *(undefined8 *)(lStackX_10 + -0x28) = unaff_R12;
  *(undefined8 *)(lStackX_10 + -0x10 + ~((~uVar1 | 0x63f0b30a) & (uVar1 | 0xffffffff9c0f4cf5))) =
       *(undefined8 *)(lStackX_10 + -0x20);
  *(undefined8 *)(lStackX_10 + -0x10) = in_R10;
  *(undefined8 *)(lStackX_10 + -0x18) = in_R10;
  *(code **)(lStackX_10 + -0x10) = thunk_FUN_15b642ca5;
  return;
}



// FUNCTION 14dba2ce8 FUN_14dba2ce8 body=177 status=ok
// SIG undefined FUN_14dba2ce8(void)

void FUN_14dba2ce8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_RSI;
  *(undefined8 *)(local_res18 + -0x10) = param_2;
  *(undefined8 *)(local_res18 + -0x18) = *(undefined8 *)(local_res18 + 0x18);
  *(undefined4 *)(local_res18 + -0x14) = 0;
  *(undefined4 *)(local_res18 + -0x18) = *(undefined4 *)(local_res18 + -0x18);
  if (*(int *)(local_res18 + -0x18) < 0) {
    *(undefined4 *)(local_res18 + -0x14) = 0xffffffff;
  }
  uVar1 = *(undefined8 *)(local_res18 + -0x10);
  *(undefined8 *)(local_res18 + -0x10) = unaff_R15;
  *(undefined8 *)(local_res18 + -0x18) = unaff_R15;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x28) = 0xffffffffd1d5368a;
  FUN_165e58e8c(param_1,uVar1,unaff_retaddr);
  return;
}



// FUNCTION 14dba3446 FUN_14dba3446 body=144 status=ok
// SIG undefined FUN_14dba3446(void)

/* WARNING: Instruction at (ram,0x00014dba3484) overlaps instruction at (ram,0x00014dba3481)
    */
/* WARNING: Removing unreachable block (ram,0x00014dba347b) */
/* WARNING: Removing unreachable block (ram,0x00014dba34db) */
/* WARNING: Removing unreachable block (ram,0x00014dba3493) */

ulonglong FUN_14dba3446(void)

{
  undefined8 in_RAX;
  
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),0xb6) ^ 0xc3;
}



// FUNCTION 14dba359e FUN_14dba359e body=424 status=ok
// SIG undefined FUN_14dba359e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7be14b) overlaps instruction at (ram,0x00014d7be149)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7be149) */
/* WARNING: Removing unreachable block (ram,0x00014dba36bd) */
/* WARNING: Removing unreachable block (ram,0x00014dba36c3) */
/* WARNING: Removing unreachable block (ram,0x000161042bf5) */
/* WARNING: Removing unreachable block (ram,0x000161042c8e) */
/* WARNING: Removing unreachable block (ram,0x000161042c93) */
/* WARNING: Removing unreachable block (ram,0x00016210525c) */
/* WARNING: Removing unreachable block (ram,0x0001621052d2) */
/* WARNING: Removing unreachable block (ram,0x00014d7be124) */
/* WARNING: Removing unreachable block (ram,0x00014d7be14b) */
/* WARNING: Removing unreachable block (ram,0x00014d7be14f) */
/* WARNING: Removing unreachable block (ram,0x00014d7be159) */
/* WARNING: Removing unreachable block (ram,0x00014d7be141) */
/* WARNING: Removing unreachable block (ram,0x00014d7be1c4) */
/* WARNING: Removing unreachable block (ram,0x00014d7be164) */
/* WARNING: Removing unreachable block (ram,0x00014d7be16b) */
/* WARNING: Removing unreachable block (ram,0x00014d7be16d) */
/* WARNING: Removing unreachable block (ram,0x00014d7be1b2) */
/* WARNING: Removing unreachable block (ram,0x00014dba3631) */

undefined8 FUN_14dba359e(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dba3751 FUN_14dba3751 body=91 status=ok
// SIG undefined FUN_14dba3751(void)

undefined1
FUN_14dba3751(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_AL;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  ulonglong uVar1;
  ulonglong uStackX_8;
  longlong local_res10;
  
                    /* WARNING: Read-only address (ram,0x00014d7a4bf2) is written */
  LOCK();
  UNLOCK();
  uRam000000014d7a4bf2 = in_AL;
  *(undefined8 *)(local_res10 + -8) = param_4;
  *(undefined8 *)(local_res10 + -0x10) = param_4;
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uStackX_8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_8 & 0x800) != 0) * 0x800 | (ulonglong)((uStackX_8 & 0x400) != 0) * 0x400
       | (ulonglong)((uStackX_8 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_8 & 0x100) != 0) * 0x100 | (ulonglong)((uStackX_8 & 0x80) != 0) * 0x80 |
       (ulonglong)((uStackX_8 & 0x40) != 0) * 0x40 | (ulonglong)((uStackX_8 & 0x10) != 0) * 0x10 |
       (ulonglong)((uStackX_8 & 4) != 0) * 4 | (ulonglong)((uStackX_8 & 1) != 0) |
       (ulonglong)((uStackX_8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_8 & 0x40000) != 0) * 0x40000;
  uVar1 = *(ulonglong *)(local_res10 + -0x18);
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res10 + -0x20) = unaff_R15;
  uVar1 = *(ulonglong *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x18) = param_3;
  *(ulonglong *)(local_res10 + -0x20) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res10 + -8) = 0x4c7cd68;
  *(undefined8 *)(local_res10 + -0x28cf) = unaff_R13;
  *(undefined8 *)(local_res10 + -0x28d7) = unaff_R13;
  *(undefined **)(local_res10 + -0x28cf) = &DAT_156ef2e4a;
  return 0;
}



// FUNCTION 14dba3c3a FUN_14dba3c3a body=325 status=ok
// SIG undefined FUN_14dba3c3a(void)

/* WARNING: Removing unreachable block (ram,0x00014dba3cd9) */
/* WARNING: Removing unreachable block (ram,0x00014dba3ce4) */
/* WARNING: Removing unreachable block (ram,0x000157335e27) */
/* WARNING: Removing unreachable block (ram,0x00014dba3cdf) */
/* WARNING: Removing unreachable block (ram,0x000166cd4527) */
/* WARNING: Removing unreachable block (ram,0x000166cd463c) */
/* WARNING: Removing unreachable block (ram,0x000164c496aa) */
/* WARNING: Removing unreachable block (ram,0x000166cd4642) */
/* WARNING: Removing unreachable block (ram,0x000166cd4870) */
/* WARNING: Removing unreachable block (ram,0x000160fad5bc) */
/* WARNING: Removing unreachable block (ram,0x000160fad5cb) */
/* WARNING: Removing unreachable block (ram,0x000166cd487c) */

undefined8 FUN_14dba3c3a(void)

{
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (*(ulonglong *)(unaff_R13 + -0x30) == unaff_R15) {
    uVar1 = FUN_1575e4905(~(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) &
                          (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15),
                          (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15 ^ 0xffffffffffffffff) &
                          (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15),
                          *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15);
    return uVar1;
  }
  uVar1 = FUN_157335e03();
  return uVar1;
}



// FUNCTION 14dba3f23 FUN_14dba3f23 body=177 status=ok
// SIG undefined FUN_14dba3f23(void)

/* WARNING: Removing unreachable block (ram,0x00014dba3f6b) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dba3f23(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dba3fd6 FUN_14dba3fd6 body=154 status=ok
// SIG undefined FUN_14dba3fd6(void)

void FUN_14dba3fd6(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  undefined8 in_R11;
  longlong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong local_res10;
  ushort local_res18;
  longlong local_res20;
  
  uVar1 = *(ulonglong *)((longlong)&local_res10 + unaff_R15);
  *(ulonglong *)((longlong)&local_res10 + unaff_R15) =
       ~*(ulonglong *)((longlong)&local_res10 + unaff_R15);
  *(ulonglong *)((longlong)&local_res10 + unaff_R15) =
       *(ulonglong *)((longlong)&local_res10 + unaff_R15) | unaff_RBP;
  *(ulonglong *)((longlong)&local_res10 + unaff_R15) =
       ~((~*(ulonglong *)((longlong)&local_res10 + unaff_R15) | ~unaff_RBP | uVar1) +
         *(longlong *)((longlong)&local_res10 + unaff_R15) + 1);
  local_res18 = local_res18 & 0xfeff;
  *(undefined8 *)(local_res20 + -8) = in_R11;
  FUN_156fe3416(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14dba4070 FUN_14dba4070 body=156 status=ok
// SIG undefined FUN_14dba4070(void)

void FUN_14dba4070(void)

{
  (*(code *)0x1663cf989)();
  return;
}



// FUNCTION 14dba4191 FUN_14dba4191 body=123 status=ok
// SIG undefined FUN_14dba4191(void)

/* WARNING: Removing unreachable block (ram,0x00014dba420d) */

void FUN_14dba4191(void)

{
  FUN_1667d65fb();
  return;
}



// FUNCTION 14dba420d FUN_14dba420d body=140 status=ok
// SIG undefined FUN_14dba420d(void)

void FUN_14dba420d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_166592aa2(param_1,param_2,param_3,FUN_166592aa2);
  return;
}



// FUNCTION 14dba42ab FUN_14dba42ab body=584 status=ok
// SIG undefined FUN_14dba42ab(void)

/* WARNING: Removing unreachable block (ram,0x00014dba4323) */
/* WARNING: Removing unreachable block (ram,0x00014dba4334) */
/* WARNING: Removing unreachable block (ram,0x00014dba4462) */
/* WARNING: Removing unreachable block (ram,0x00014dba4468) */
/* WARNING: Removing unreachable block (ram,0x000166914e96) */
/* WARNING: Removing unreachable block (ram,0x00014dba432f) */

void FUN_14dba42ab(undefined8 param_1)

{
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 in_R10;
  undefined8 local_res10;
  
  *(undefined8 *)(local_res10 + -8) = param_1;
  *(undefined8 *)(local_res10 + -0x10) = unaff_RBP;
  *(undefined8 *)(local_res10 + -0x18) = unaff_RBP;
  *(undefined8 *)(local_res10 + -0x20) = in_R10;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -0x18) = unaff_RSI;
  *(undefined8 *)(local_res10 + -8) = 0;
  *(longlong *)(local_res10 + -8) = *(longlong *)(local_res10 + -8) + -0x1654284db;
  *(ulonglong *)(local_res10 + -8) = ~*(ulonglong *)(local_res10 + -8);
  *(longlong *)(local_res10 + -8) = *(longlong *)(local_res10 + -8) + 1;
  *(undefined8 *)(local_res10 + -0x18) = *(undefined8 *)(local_res10 + -0x18);
  thunk_FUN_15b642ca5(*(undefined8 *)(local_res10 + -0x10));
  return;
}



// FUNCTION 14dba4574 FUN_14dba4574 body=137 status=ok
// SIG undefined FUN_14dba4574(void)

void FUN_14dba4574(undefined8 param_1,longlong param_2)

{
  longlong unaff_RSI;
  
  (*(code *)&LAB_166b45870)(param_1,unaff_RSI + param_2 * -2);
  return;
}



// FUNCTION 14dba45ff FUN_14dba45ff body=618 status=ok
// SIG undefined FUN_14dba45ff(void)

/* WARNING: Removing unreachable block (ram,0x00014dba46ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14dba45ff(void)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBP;
  longlong unaff_R12;
  ulonglong unaff_R13;
  longlong unaff_R15;
  
  FUN_16216fccb(((unaff_R13 - 1) - (~(unaff_RBP & unaff_R13) ^ 0xffffffffffffffff)) - ~unaff_RBP,
                FUN_16216fccb,*(undefined8 *)(unaff_R12 + -0x80),
                *(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
  uVar2 = CONCAT71((int7)((ulonglong)(*(longlong *)(unaff_R13 - 0x48) + unaff_R15) >> 8),0x53);
  FUN_156fcaa28();
  uVar1 = FUN_165a81e49(0xb531b63,_DAT_00a60dde + uVar2 + (_DAT_00a60dde & uVar2) * -2,FUN_165a81e49
                       );
  return uVar1;
}



// FUNCTION 14dba46ac FUN_14dba46ac body=168 status=ok
// SIG undefined FUN_14dba46ac(void)

ulonglong FUN_14dba46ac(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return *(ulonglong *)(unaff_RDI + -0x30) | param_1;
}



// FUNCTION 14dba4804 FUN_14dba4804 body=185 status=ok
// SIG undefined FUN_14dba4804(void)

void FUN_14dba4804(void)

{
  FUN_164b296a2(FUN_164b296a2);
  return;
}



// FUNCTION 14dba4944 FUN_14dba4944 body=168 status=ok
// SIG undefined FUN_14dba4944(void)

void FUN_14dba4944(void)

{
  ulonglong in_RAX;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  FUN_15b6cd915((-unaff_R15 - in_RAX) + (in_RAX | unaff_R15) * 2,
                ~(CONCAT44((int)((ulonglong)unaff_retaddr >> 0x20),0x80d493a4) & 0xffffffff80d493e3)
               );
  return;
}



// FUNCTION 14dba4a87 FUN_14dba4a87 body=162 status=ok
// SIG undefined FUN_14dba4a87(void)

void FUN_14dba4a87(undefined8 param_1)

{
  undefined8 in_R11;
  ulonglong unaff_R15;
  
  FUN_160c259eb(param_1);
  *(undefined8 *)(&stack0x67fb40cc + -~unaff_R15) = in_R11;
  FUN_14d7c51cd();
  return;
}



// FUNCTION 14dba4b29 FUN_14dba4b29 body=47 status=ok
// SIG undefined FUN_14dba4b29(void)

void FUN_14dba4b29(void)

{
  undefined8 in_R11;
  ulonglong unaff_R15;
  
  *(undefined8 *)(&stack0x67fb40cc + -~unaff_R15) = in_R11;
  FUN_14d7c51cd();
  return;
}



// FUNCTION 14dba4bd6 FUN_14dba4bd6 body=471 status=ok
// SIG undefined FUN_14dba4bd6(void)

/* WARNING: Removing unreachable block (ram,0x00014dba4da6) */
/* WARNING: Removing unreachable block (ram,0x00014dba4db1) */
/* WARNING: Removing unreachable block (ram,0x00014dba4e44) */
/* WARNING: Removing unreachable block (ram,0x00014dba4e4a) */
/* WARNING: Removing unreachable block (ram,0x000161b065e3) */
/* WARNING: Removing unreachable block (ram,0x000161b06659) */
/* WARNING: Removing unreachable block (ram,0x00014dd78a25) */
/* WARNING: Removing unreachable block (ram,0x00014dd78a2b) */
/* WARNING: Removing unreachable block (ram,0x00014dd78a30) */
/* WARNING: Removing unreachable block (ram,0x00014dd78a54) */
/* WARNING: Removing unreachable block (ram,0x00014dd78a4a) */
/* WARNING: Removing unreachable block (ram,0x00014dd78a5d) */
/* WARNING: Removing unreachable block (ram,0x00014dd78b07) */
/* WARNING: Removing unreachable block (ram,0x00014dd78b0c) */
/* WARNING: Removing unreachable block (ram,0x00014dd78b10) */
/* WARNING: Removing unreachable block (ram,0x00014dd78b40) */
/* WARNING: Removing unreachable block (ram,0x00014dd78b4b) */
/* WARNING: Removing unreachable block (ram,0x00014dd78b51) */
/* WARNING: Removing unreachable block (ram,0x00014dd78b56) */
/* WARNING: Removing unreachable block (ram,0x00014dd78904) */
/* WARNING: Removing unreachable block (ram,0x00014dba4dac) */
/* WARNING: Removing unreachable block (ram,0x00014dba4c85) */
/* WARNING: Removing unreachable block (ram,0x00014dba4d19) */
/* WARNING: Removing unreachable block (ram,0x00014dba4d14) */
/* WARNING: Removing unreachable block (ram,0x00014dd788e3) */
/* WARNING: Removing unreachable block (ram,0x00014dd78a13) */
/* WARNING: Removing unreachable block (ram,0x00014dd78a0e) */
/* WARNING: Removing unreachable block (ram,0x000156ca40da) */
/* WARNING: Removing unreachable block (ram,0x000156ca4111) */
/* WARNING: Removing unreachable block (ram,0x00015705de1d) */
/* WARNING: Removing unreachable block (ram,0x000156ca417f) */
/* WARNING: Removing unreachable block (ram,0x00014dba4d25) */

undefined8 FUN_14dba4bd6(void)

{
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if ((*(ulonglong *)(unaff_R13 + -0x38) & unaff_R15) == 0xffffffffffffffff) {
    uVar1 = FUN_156d0ce20(~-*(ulonglong *)(unaff_R13 + -0x78) + 1 + unaff_R15 +
                          ~(~*(ulonglong *)(unaff_R13 + -0x78) | ~unaff_R15) * -2,
                          *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
    return uVar1;
  }
  uVar1 = FUN_156ca4045();
  return uVar1;
}



// FUNCTION 14dba4db1 FUN_14dba4db1 body=290 status=ok
// SIG undefined FUN_14dba4db1(void)

/* WARNING: Removing unreachable block (ram,0x00014dba4e4a) */

undefined8 FUN_14dba4db1(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dba4edc thunk_FUN_14dba4ee2 body=5 status=ok
// SIG undefined thunk_FUN_14dba4ee2(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00016505a43f) overlaps instruction at (ram,0x00016505a43e)
    */
/* WARNING: Removing unreachable block (ram,0x00014e00d135) */
/* WARNING: Removing unreachable block (ram,0x00014e00d140) */
/* WARNING: Removing unreachable block (ram,0x00014e00d13b) */
/* WARNING: Removing unreachable block (ram,0x000160e14efe) */
/* WARNING: Removing unreachable block (ram,0x000160e14e7f) */
/* WARNING: Removing unreachable block (ram,0x00014df4e1b5) */
/* WARNING: Removing unreachable block (ram,0x00014df4e10a) */
/* WARNING: Removing unreachable block (ram,0x00014df4e16c) */
/* WARNING: Removing unreachable block (ram,0x00014df4e1af) */
/* WARNING: Removing unreachable block (ram,0x000165353a7d) */
/* WARNING: Removing unreachable block (ram,0x00014df4e1aa) */
/* WARNING: Removing unreachable block (ram,0x00016505a43e) */
/* WARNING: Removing unreachable block (ram,0x00016505a517) */
/* WARNING: Removing unreachable block (ram,0x00014dba4f5a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_14dba4ee2(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  ulonglong unaff_RDI;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong unaff_R13;
  ulonglong unaff_R15;
  bool bVar15;
  bool bVar16;
  byte in_AF;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  byte in_TF;
  bool bVar20;
  byte in_IF;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  byte in_NT;
  bool bVar24;
  byte in_AC;
  bool bVar25;
  byte in_ID;
  bool bVar26;
  ulonglong uVar27;
  int unaff_retaddr;
  ulonglong auStackX_8 [4];
  ulonglong auStack_28 [2];
  
  lVar14 = -1 - ((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x40)) &
                (~*(ulonglong *)(unaff_R13 + -0x40) | unaff_R15));
  uVar11 = *(ulonglong *)(unaff_R13 + -0x90);
  if (CARRY8(uVar11,unaff_R15)) {
    FUN_16505a3b0();
    return;
  }
  lVar8 = uVar11 + unaff_R15 + (uVar11 & unaff_R15) * -2;
  uVar11 = *(ulonglong *)(unaff_R13 + -0x60);
  uVar12 = (~(uVar11 & unaff_R15) + unaff_R15) - (uVar11 ^ 0xffffffffffffffff);
  lVar9 = (uVar12 - (~(uVar11 & unaff_R15) | uVar12)) + ~(uVar11 & unaff_R15);
  uVar11 = *(ulonglong *)(unaff_R13 + -0x88);
  uVar13 = uVar11 & unaff_R15;
  FUN_1628b6665(0xee);
  bVar24 = (in_NT & 1) != 0;
  bVar21 = (in_IF & 1) != 0;
  bVar20 = (in_TF & 1) != 0;
  bVar17 = (in_AF & 1) != 0;
  bVar26 = (in_ID & 1) != 0;
  bVar25 = (in_AC & 1) != 0;
  uVar3 = -(-1 - unaff_retaddr) - (~(uint)unaff_R15 + 2);
  uVar12 = (ulonglong)uVar3;
  bVar22 = false;
  uVar5 = (ulonglong)uVar3;
  puVar4 = (ulonglong *)register0x00000020;
  if ((ushort)((ushort)bVar24 * 0x4000 | (ushort)bVar21 * 0x200 | (ushort)bVar20 * 0x100 | 0x40 |
               (ushort)bVar17 * 0x10 | 0xfeff) == 0xfeff) {
    puVar4 = auStackX_8;
  }
  puVar4[-1] = unaff_RDI;
  puVar4[-2] = (ulonglong)bVar24 * 0x4000 | (ulonglong)SBORROW8(uVar5,-0x4ccc8a) * 0x800 |
               (ulonglong)bVar21 * 0x200 | (ulonglong)bVar20 * 0x100 |
               (ulonglong)(uVar5 + 0x4ccc8a == 0) * 0x40 | (ulonglong)bVar17 * 0x10 |
               (ulonglong)((POPCOUNT(uVar5 + 0x4ccc8a & 0xff) & 1U) == 0) * 4 |
               (ulonglong)(uVar5 < 0xffffffffffb33376) | (ulonglong)bVar26 * 0x200000 |
               (ulonglong)bVar25 * 0x40000;
  *(undefined4 *)(puVar4 + -3) = 0x7ffe0008;
  *(undefined4 *)((longlong)puVar4 + -0x14) = 0;
  puVar7 = puVar4 + -2;
  uVar5 = _DAT_7ffe0008 - *(longlong *)puVar4[-3];
  bVar15 = uVar5 < 30000000;
  bVar23 = SBORROW8(uVar5,30000000);
  uVar5 = uVar5 - 30000000;
  bVar19 = (longlong)uVar5 < 0;
  bVar18 = uVar5 == 0;
  bVar16 = (POPCOUNT(uVar5 & 0xff) & 1U) == 0;
  if (bVar15 || bVar18) {
    uVar5 = puVar4[-2];
    bVar24 = (uVar5 & 0x4000) != 0;
    bVar23 = (uVar5 & 0x800) != 0;
    bVar22 = (uVar5 & 0x400) != 0;
    bVar21 = (uVar5 & 0x200) != 0;
    bVar20 = (uVar5 & 0x100) != 0;
    bVar19 = (uVar5 & 0x80) != 0;
    bVar18 = (uVar5 & 0x40) != 0;
    bVar17 = (uVar5 & 0x10) != 0;
    bVar16 = (uVar5 & 4) != 0;
    bVar15 = (uVar5 & 1) != 0;
    bVar26 = (uVar5 & 0x200000) != 0;
    bVar25 = (uVar5 & 0x40000) != 0;
    puVar7 = puVar4 + -1;
  }
  uVar5 = *puVar7;
  *puVar7 = (ulonglong)bVar24 * 0x4000 | (ulonglong)bVar23 * 0x800 | (ulonglong)bVar22 * 0x400 |
            (ulonglong)bVar21 * 0x200 | (ulonglong)bVar20 * 0x100 | (ulonglong)bVar19 * 0x80 |
            (ulonglong)bVar18 * 0x40 | (ulonglong)bVar17 * 0x10 | (ulonglong)bVar16 * 4 |
            (ulonglong)bVar15 | (ulonglong)bVar26 * 0x200000 | (ulonglong)bVar25 * 0x40000;
  uVar27 = *puVar7;
  puVar7[-1] = (ulonglong)((uVar27 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar27 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar27 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar27 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar27 & 0x100) != 0) * 0x100 | (ulonglong)((uVar27 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar27 & 0x40) != 0) * 0x40 | (ulonglong)((uVar27 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar27 & 4) != 0) * 4 | (ulonglong)((uVar27 & 1) != 0) |
               (ulonglong)((uVar27 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar27 & 0x40000) != 0) * 0x40000;
  uVar6 = 0x162610786;
  puVar7[-1] = (ulonglong)FUN_160e14e07;
  uVar27 = (*(code *)0x162610786)();
  *puVar7 = uVar12;
  puVar7[-1] = 0;
  puVar7[-1] = puVar7[-1] + -0x1628b6665;
  puVar7[-1] = -puVar7[-1];
  puVar7[-2] = CONCAT71((int7)(uVar12 >> 8),0x78);
  uVar1 = puVar7[-2];
  puVar7[-2] = uVar5 & uVar12;
  uVar2 = puVar7[-2];
  puVar7[-2] = lVar9;
  puVar7[-3] = uVar2;
  bVar10 = (char)uVar1 + 0x89;
  lVar9 = puVar7[-3];
  bVar26 = (bVar10 & 0x3f) == 0;
  if (bVar26 && (char)bVar10 < '\0' || !bVar26 && lVar9 << (bVar10 & 0x3f) < 0) {
    uVar12 = *puVar7;
    puVar7[1] = uVar6;
    *puVar7 = uVar13;
    puVar7[-1] = lVar14;
    puVar4 = (ulonglong *)(0x11 - (~(ulonglong)puVar7 + 2));
    puVar7[-1] = lVar8;
    uVar13 = *puVar4;
    *puVar4 = ~*puVar4;
    puVar7[-1] = (uVar11 + unaff_R15) - (lVar9 << (bVar10 & 0x3f));
    uVar11 = *puVar4;
    puVar7[-2] = uVar27;
    *puVar4 = *puVar4 & uVar12;
    uVar11 = ((uVar12 - 1) - ~uVar11) - *puVar4;
    *puVar4 = uVar11;
    if (uVar11 != 0) {
      *puVar4 = ~((~uVar12 | uVar13) & *puVar4);
      uVar2 = *puVar7;
      uVar6 = puVar7[1];
      puVar7[3] = puVar7[3] ^ uVar12;
      puVar7[4] = puVar7[4] ^ uVar12;
      uVar1 = puVar7[2];
      *(ushort *)(puVar7 + 3) = (ushort)puVar7[3] & 0xfeff;
      uVar11 = puVar7[3];
      lVar14 = puVar7[4];
      *(longlong *)(lVar14 + -8) = unaff_R13;
      *(longlong *)(lVar14 + -0x10) = unaff_R13;
      *(undefined4 *)(lVar14 + -0x18) = 0x60e41e8;
      *(undefined4 *)(lVar14 + -0x14) = 0;
      lVar8 = *(longlong *)(lVar14 + -0x18);
      *(ulonglong *)(lVar14 + -0x18) =
           (ulonglong)((uVar11 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar11 & 0x800) != 0) * 0x800
           | (ulonglong)((uVar11 & 0x400) != 0) * 0x400 | (ulonglong)((uVar11 & 0x200) != 0) * 0x200
           | (ulonglong)((uVar11 & 0x100) != 0) * 0x100 | (ulonglong)((uVar11 & 0x80) != 0) * 0x80 |
           (ulonglong)((uVar11 & 0x40) != 0) * 0x40 | (ulonglong)((uVar11 & 0x10) != 0) * 0x10 |
           (ulonglong)((uVar11 & 4) != 0) * 4 | (ulonglong)((uVar11 & 1) != 0) |
           (ulonglong)((uVar11 & 0x200000) != 0) * 0x200000 |
           (ulonglong)((uVar11 & 0x40000) != 0) * 0x40000;
      uVar11 = *(ulonglong *)(lVar14 + -0x18);
      *(undefined8 *)(lVar14 + -0x18) = uVar2;
      *(ulonglong *)(lVar14 + -0x20) =
           (ulonglong)((uVar11 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar11 & 0x800) != 0) * 0x800
           | (ulonglong)((uVar11 & 0x400) != 0) * 0x400 | (ulonglong)((uVar11 & 0x200) != 0) * 0x200
           | (ulonglong)((uVar11 & 0x100) != 0) * 0x100 | (ulonglong)((uVar11 & 0x80) != 0) * 0x80 |
           (ulonglong)((uVar11 & 0x40) != 0) * 0x40 | (ulonglong)((uVar11 & 0x10) != 0) * 0x10 |
           (ulonglong)((uVar11 & 4) != 0) * 4 | (ulonglong)((uVar11 & 1) != 0) |
           (ulonglong)((uVar11 & 0x200000) != 0) * 0x200000 |
           (ulonglong)((uVar11 & 0x40000) != 0) * 0x40000;
      *(longlong *)(lVar14 + -8) = lVar8 + -0x5c8c864;
      thunk_FUN_1668275f8(uVar1,uVar6,*(undefined8 *)(lVar14 + -0x18));
      return;
    }
    FUN_162d5b438();
    return;
  }
  FUN_14df4e083();
  return;
}



// FUNCTION 14dba4ee2 FUN_14dba4ee2 body=330 status=ok
// SIG undefined FUN_14dba4ee2(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00016505a43f) overlaps instruction at (ram,0x00016505a43e)
    */
/* WARNING: Removing unreachable block (ram,0x00014e00d135) */
/* WARNING: Removing unreachable block (ram,0x00014e00d140) */
/* WARNING: Removing unreachable block (ram,0x00014e00d13b) */
/* WARNING: Removing unreachable block (ram,0x000160e14efe) */
/* WARNING: Removing unreachable block (ram,0x000160e14e7f) */
/* WARNING: Removing unreachable block (ram,0x00014df4e1b5) */
/* WARNING: Removing unreachable block (ram,0x00014df4e10a) */
/* WARNING: Removing unreachable block (ram,0x00014df4e16c) */
/* WARNING: Removing unreachable block (ram,0x00014df4e1af) */
/* WARNING: Removing unreachable block (ram,0x000165353a7d) */
/* WARNING: Removing unreachable block (ram,0x00014df4e1aa) */
/* WARNING: Removing unreachable block (ram,0x00016505a43e) */
/* WARNING: Removing unreachable block (ram,0x00016505a517) */
/* WARNING: Removing unreachable block (ram,0x00014dba4f5a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dba4ee2(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  ulonglong unaff_RDI;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong unaff_R13;
  ulonglong unaff_R15;
  bool bVar15;
  bool bVar16;
  byte in_AF;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  byte in_TF;
  bool bVar20;
  byte in_IF;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  byte in_NT;
  bool bVar24;
  byte in_AC;
  bool bVar25;
  byte in_ID;
  bool bVar26;
  ulonglong uVar27;
  int unaff_retaddr;
  ulonglong local_res8 [4];
  ulonglong auStack_28 [2];
  
  lVar14 = -1 - ((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x40)) &
                (~*(ulonglong *)(unaff_R13 + -0x40) | unaff_R15));
  uVar11 = *(ulonglong *)(unaff_R13 + -0x90);
  if (CARRY8(uVar11,unaff_R15)) {
    FUN_16505a3b0();
    return;
  }
  lVar8 = uVar11 + unaff_R15 + (uVar11 & unaff_R15) * -2;
  uVar11 = *(ulonglong *)(unaff_R13 + -0x60);
  uVar12 = (~(uVar11 & unaff_R15) + unaff_R15) - (uVar11 ^ 0xffffffffffffffff);
  lVar9 = (uVar12 - (~(uVar11 & unaff_R15) | uVar12)) + ~(uVar11 & unaff_R15);
  uVar11 = *(ulonglong *)(unaff_R13 + -0x88);
  uVar13 = uVar11 & unaff_R15;
  FUN_1628b6665(0xee);
  bVar24 = (in_NT & 1) != 0;
  bVar21 = (in_IF & 1) != 0;
  bVar20 = (in_TF & 1) != 0;
  bVar17 = (in_AF & 1) != 0;
  bVar26 = (in_ID & 1) != 0;
  bVar25 = (in_AC & 1) != 0;
  uVar3 = -(-1 - unaff_retaddr) - (~(uint)unaff_R15 + 2);
  uVar12 = (ulonglong)uVar3;
  bVar22 = false;
  uVar5 = (ulonglong)uVar3;
  puVar4 = (ulonglong *)register0x00000020;
  if ((ushort)((ushort)bVar24 * 0x4000 | (ushort)bVar21 * 0x200 | (ushort)bVar20 * 0x100 | 0x40 |
               (ushort)bVar17 * 0x10 | 0xfeff) == 0xfeff) {
    puVar4 = local_res8;
  }
  puVar4[-1] = unaff_RDI;
  puVar4[-2] = (ulonglong)bVar24 * 0x4000 | (ulonglong)SBORROW8(uVar5,-0x4ccc8a) * 0x800 |
               (ulonglong)bVar21 * 0x200 | (ulonglong)bVar20 * 0x100 |
               (ulonglong)(uVar5 + 0x4ccc8a == 0) * 0x40 | (ulonglong)bVar17 * 0x10 |
               (ulonglong)((POPCOUNT(uVar5 + 0x4ccc8a & 0xff) & 1U) == 0) * 4 |
               (ulonglong)(uVar5 < 0xffffffffffb33376) | (ulonglong)bVar26 * 0x200000 |
               (ulonglong)bVar25 * 0x40000;
  *(undefined4 *)(puVar4 + -3) = 0x7ffe0008;
  *(undefined4 *)((longlong)puVar4 + -0x14) = 0;
  puVar7 = puVar4 + -2;
  uVar5 = _DAT_7ffe0008 - *(longlong *)puVar4[-3];
  bVar15 = uVar5 < 30000000;
  bVar23 = SBORROW8(uVar5,30000000);
  uVar5 = uVar5 - 30000000;
  bVar19 = (longlong)uVar5 < 0;
  bVar18 = uVar5 == 0;
  bVar16 = (POPCOUNT(uVar5 & 0xff) & 1U) == 0;
  if (bVar15 || bVar18) {
    uVar5 = puVar4[-2];
    bVar24 = (uVar5 & 0x4000) != 0;
    bVar23 = (uVar5 & 0x800) != 0;
    bVar22 = (uVar5 & 0x400) != 0;
    bVar21 = (uVar5 & 0x200) != 0;
    bVar20 = (uVar5 & 0x100) != 0;
    bVar19 = (uVar5 & 0x80) != 0;
    bVar18 = (uVar5 & 0x40) != 0;
    bVar17 = (uVar5 & 0x10) != 0;
    bVar16 = (uVar5 & 4) != 0;
    bVar15 = (uVar5 & 1) != 0;
    bVar26 = (uVar5 & 0x200000) != 0;
    bVar25 = (uVar5 & 0x40000) != 0;
    puVar7 = puVar4 + -1;
  }
  uVar5 = *puVar7;
  *puVar7 = (ulonglong)bVar24 * 0x4000 | (ulonglong)bVar23 * 0x800 | (ulonglong)bVar22 * 0x400 |
            (ulonglong)bVar21 * 0x200 | (ulonglong)bVar20 * 0x100 | (ulonglong)bVar19 * 0x80 |
            (ulonglong)bVar18 * 0x40 | (ulonglong)bVar17 * 0x10 | (ulonglong)bVar16 * 4 |
            (ulonglong)bVar15 | (ulonglong)bVar26 * 0x200000 | (ulonglong)bVar25 * 0x40000;
  uVar27 = *puVar7;
  puVar7[-1] = (ulonglong)((uVar27 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar27 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar27 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar27 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar27 & 0x100) != 0) * 0x100 | (ulonglong)((uVar27 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar27 & 0x40) != 0) * 0x40 | (ulonglong)((uVar27 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar27 & 4) != 0) * 4 | (ulonglong)((uVar27 & 1) != 0) |
               (ulonglong)((uVar27 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar27 & 0x40000) != 0) * 0x40000;
  uVar6 = 0x162610786;
  puVar7[-1] = (ulonglong)FUN_160e14e07;
  uVar27 = (*(code *)0x162610786)();
  *puVar7 = uVar12;
  puVar7[-1] = 0;
  puVar7[-1] = puVar7[-1] + -0x1628b6665;
  puVar7[-1] = -puVar7[-1];
  puVar7[-2] = CONCAT71((int7)(uVar12 >> 8),0x78);
  uVar1 = puVar7[-2];
  puVar7[-2] = uVar5 & uVar12;
  uVar2 = puVar7[-2];
  puVar7[-2] = lVar9;
  puVar7[-3] = uVar2;
  bVar10 = (char)uVar1 + 0x89;
  lVar9 = puVar7[-3];
  bVar26 = (bVar10 & 0x3f) == 0;
  if (bVar26 && (char)bVar10 < '\0' || !bVar26 && lVar9 << (bVar10 & 0x3f) < 0) {
    uVar12 = *puVar7;
    puVar7[1] = uVar6;
    *puVar7 = uVar13;
    puVar7[-1] = lVar14;
    puVar4 = (ulonglong *)(0x11 - (~(ulonglong)puVar7 + 2));
    puVar7[-1] = lVar8;
    uVar13 = *puVar4;
    *puVar4 = ~*puVar4;
    puVar7[-1] = (uVar11 + unaff_R15) - (lVar9 << (bVar10 & 0x3f));
    uVar11 = *puVar4;
    puVar7[-2] = uVar27;
    *puVar4 = *puVar4 & uVar12;
    uVar11 = ((uVar12 - 1) - ~uVar11) - *puVar4;
    *puVar4 = uVar11;
    if (uVar11 != 0) {
      *puVar4 = ~((~uVar12 | uVar13) & *puVar4);
      uVar2 = *puVar7;
      uVar6 = puVar7[1];
      puVar7[3] = puVar7[3] ^ uVar12;
      puVar7[4] = puVar7[4] ^ uVar12;
      uVar1 = puVar7[2];
      *(ushort *)(puVar7 + 3) = (ushort)puVar7[3] & 0xfeff;
      uVar11 = puVar7[3];
      lVar14 = puVar7[4];
      *(longlong *)(lVar14 + -8) = unaff_R13;
      *(longlong *)(lVar14 + -0x10) = unaff_R13;
      *(undefined4 *)(lVar14 + -0x18) = 0x60e41e8;
      *(undefined4 *)(lVar14 + -0x14) = 0;
      lVar8 = *(longlong *)(lVar14 + -0x18);
      *(ulonglong *)(lVar14 + -0x18) =
           (ulonglong)((uVar11 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar11 & 0x800) != 0) * 0x800
           | (ulonglong)((uVar11 & 0x400) != 0) * 0x400 | (ulonglong)((uVar11 & 0x200) != 0) * 0x200
           | (ulonglong)((uVar11 & 0x100) != 0) * 0x100 | (ulonglong)((uVar11 & 0x80) != 0) * 0x80 |
           (ulonglong)((uVar11 & 0x40) != 0) * 0x40 | (ulonglong)((uVar11 & 0x10) != 0) * 0x10 |
           (ulonglong)((uVar11 & 4) != 0) * 4 | (ulonglong)((uVar11 & 1) != 0) |
           (ulonglong)((uVar11 & 0x200000) != 0) * 0x200000 |
           (ulonglong)((uVar11 & 0x40000) != 0) * 0x40000;
      uVar11 = *(ulonglong *)(lVar14 + -0x18);
      *(undefined8 *)(lVar14 + -0x18) = uVar2;
      *(ulonglong *)(lVar14 + -0x20) =
           (ulonglong)((uVar11 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar11 & 0x800) != 0) * 0x800
           | (ulonglong)((uVar11 & 0x400) != 0) * 0x400 | (ulonglong)((uVar11 & 0x200) != 0) * 0x200
           | (ulonglong)((uVar11 & 0x100) != 0) * 0x100 | (ulonglong)((uVar11 & 0x80) != 0) * 0x80 |
           (ulonglong)((uVar11 & 0x40) != 0) * 0x40 | (ulonglong)((uVar11 & 0x10) != 0) * 0x10 |
           (ulonglong)((uVar11 & 4) != 0) * 4 | (ulonglong)((uVar11 & 1) != 0) |
           (ulonglong)((uVar11 & 0x200000) != 0) * 0x200000 |
           (ulonglong)((uVar11 & 0x40000) != 0) * 0x40000;
      *(longlong *)(lVar14 + -8) = lVar8 + -0x5c8c864;
      thunk_FUN_1668275f8(uVar1,uVar6,*(undefined8 *)(lVar14 + -0x18));
      return;
    }
    FUN_162d5b438();
    return;
  }
  FUN_14df4e083();
  return;
}



// FUNCTION 14dba502d FUN_14dba502d body=157 status=ok
// SIG undefined FUN_14dba502d(void)

void FUN_14dba502d(void)

{
  return;
}



// FUNCTION 14dba515b FUN_14dba515b body=320 status=ok
// SIG undefined FUN_14dba515b(void)

/* WARNING: Removing unreachable block (ram,0x00014dba51fc) */

undefined1 FUN_14dba515b(void)

{
  undefined1 unaff_R12B;
  
  return unaff_R12B;
}



// FUNCTION 14dba529d FUN_14dba529d body=157 status=ok
// SIG undefined FUN_14dba529d(void)

void FUN_14dba529d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  
  FUN_14dc59086(local_res8,param_2,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14dba5341 FUN_14dba5341 body=153 status=ok
// SIG undefined FUN_14dba5341(void)

/* WARNING: Removing unreachable block (ram,0x00014dba53da) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dba5341(ulonglong param_1)

{
  ulonglong uVar1;
  longlong in_RAX;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  ulonglong local_res8;
  undefined8 in_stack_00000010;
  undefined8 local_res20;
  ulonglong in_stack_00000030;
  
  uVar1 = *(ulonglong *)(in_RAX + 8);
  *(longlong *)(in_RAX + 8) = -*(longlong *)(in_RAX + 8);
  *(longlong *)(in_RAX + 8) = *(longlong *)(in_RAX + 8) + -1;
  *(ulonglong *)(in_RAX + 8) = *(ulonglong *)(in_RAX + 8) | param_1;
  *(ulonglong *)(in_RAX + 8) = ~((~local_res8 | uVar1) & *(ulonglong *)(in_RAX + 8));
  if ((((~param_1 | in_stack_00000030) + param_1 + 1 ^ 0xffffffffffffffff) &
      (~(in_stack_00000030 & param_1) + param_1) - ~in_stack_00000030) == 0) {
    _DAT_fffffffffffffff8 = unaff_RBP;
    _DAT_fffffffffffffff0 = unaff_RBP;
    _DAT_ffffffffffffffe8 = local_res20;
    _DAT_ffffffffffffffe0 = in_stack_00000010;
    _DAT_ffffffffffffffd8 = unaff_RDI;
    _DAT_ffffffffffffffd0 = &LAB_14da767dc;
    return;
  }
  FUN_1563a7920();
  return;
}



// FUNCTION 14dba53da FUN_14dba53da body=137 status=ok
// SIG undefined FUN_14dba53da(void)

void FUN_14dba53da(longlong param_1)

{
  ulonglong uVar1;
  undefined8 local_res18;
  
  uVar1 = ~local_res18 & 0xffffffffffffffffU - param_1;
  FUN_156d3986f(param_1,(~(uVar1 & local_res18) + local_res18) - ~uVar1);
  return;
}



// FUNCTION 14dba55b4 FUN_14dba55b4 body=179 status=ok
// SIG undefined FUN_14dba55b4(void)

void FUN_14dba55b4(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  uVar1 = param_2 ^ 0x7635349a ^ *(ulonglong *)(unaff_RSI + -0x58);
  (*(code *)0x16625947a)(param_1,~(uVar1 & unaff_RBP) & (uVar1 | unaff_RBP));
  return;
}



// FUNCTION 14dba5667 FUN_14dba5667 body=209 status=ok
// SIG undefined FUN_14dba5667(void)

/* WARNING: Removing unreachable block (ram,0x00014dba570a) */
/* WARNING: Removing unreachable block (ram,0x00014dba5710) */

void FUN_14dba5667(undefined8 param_1,undefined8 param_2,ushort *param_3)

{
  undefined8 uVar1;
  undefined8 unaff_RSI;
  undefined8 in_R11;
  undefined8 uStackX_8;
  longlong local_res18;
  
  *param_3 = ~*param_3;
  *(undefined8 *)(local_res18 + -8) = uStackX_8;
  *(undefined8 *)(local_res18 + -0x10) = param_2;
  *(undefined8 *)(local_res18 + -0x18) = param_2;
  *(undefined8 *)(local_res18 + -0x20) = in_R11;
  *(undefined1 **)(local_res18 + -0x20) = &LAB_1611e00b5;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  uVar1 = *(undefined8 *)(local_res18 + -0x20);
  *(undefined8 *)(local_res18 + -0x18) = unaff_RSI;
  *(undefined4 *)(local_res18 + -0x20) = 0x6aacc576;
  *(undefined4 *)(local_res18 + -0x1c) = 0;
  *(undefined8 *)(local_res18 + -0x10 + (*(ulonglong *)(local_res18 + -0x20) ^ 0x6aacc57e)) = uVar1;
  uVar1 = *(undefined8 *)(local_res18 + -0x10);
  *(undefined8 *)(local_res18 + -0x10) = uVar1;
  *(undefined8 *)(local_res18 + -0x18) = uVar1;
  *(undefined8 *)(local_res18 + -0x10) = 0x14d7c4fce;
  return;
}



// FUNCTION 14dba5710 FUN_14dba5710 body=62 status=ok
// SIG undefined FUN_14dba5710(void)

void FUN_14dba5710(void)

{
  longlong in_R11;
  longlong in_stack_00000028;
  longlong lStack0000000000000038;
  
  *(undefined4 *)((longlong)&stack0x00000028 + in_R11) = 0;
  lStack0000000000000038 = in_stack_00000028 + -0x21a1cee;
  FUN_14d85d504();
  return;
}



// FUNCTION 14dba5991 FUN_14dba5991 body=637 status=ok
// SIG undefined FUN_14dba5991(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001565789b2) */
/* WARNING: Removing unreachable block (ram,0x00014dba5a35) */
/* WARNING: Removing unreachable block (ram,0x00014dba5ab2) */
/* WARNING: Removing unreachable block (ram,0x00015679c287) */
/* WARNING: Removing unreachable block (ram,0x00014dba5ab7) */
/* WARNING: Removing unreachable block (ram,0x00015679c153) */
/* WARNING: Removing unreachable block (ram,0x00015679c1d8) */
/* WARNING: Removing unreachable block (ram,0x000156507401) */
/* WARNING: Removing unreachable block (ram,0x00015657898c) */
/* WARNING: Removing unreachable block (ram,0x00015650747d) */
/* WARNING: Removing unreachable block (ram,0x00015679c1de) */
/* WARNING: Removing unreachable block (ram,0x00015679c281) */
/* WARNING: Removing unreachable block (ram,0x00014d7a5254) */
/* WARNING: Removing unreachable block (ram,0x00014dba5abd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dba5991(void)

{
  undefined8 in_R9;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 uStackX_8;
  
  if (*(longlong *)(unaff_R13 + -0x48) == 0 && unaff_R15 == 0) {
    FUN_1625126e7();
    return;
  }
  FUN_161b2c918(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  FUN_161b88f8e(FUN_161b88f8e,uStackX_8,0,in_R9);
  return;
}



// FUNCTION 14dba5abd FUN_14dba5abd body=355 status=ok
// SIG undefined FUN_14dba5abd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dba5abd(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  char in_stack_00000038;
  
  FUN_16692f16f((longlong)in_stack_00000038,*(ulonglong *)(unaff_R13 + -0x38) | unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                (*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15 ^ 0xffffffffffffffff) &
                (*(ulonglong *)(unaff_R13 + -0x60) | unaff_R15));
  (*(code *)0x1656d5a67)();
  return;
}



// FUNCTION 14dba5c29 FUN_14dba5c29 body=810 status=ok
// SIG undefined FUN_14dba5c29(void)

void FUN_14dba5c29(void)

{
  FUN_165f3c192();
  return;
}



// FUNCTION 14dba5cb7 FUN_14dba5cb7 body=147 status=ok
// SIG undefined FUN_14dba5cb7(void)

void FUN_14dba5cb7(void)

{
  FUN_14dc2b18b();
  return;
}



// FUNCTION 14dba5d4c FUN_14dba5d4c body=139 status=ok
// SIG undefined FUN_14dba5d4c(void)

void FUN_14dba5d4c(void)

{
  return;
}



// FUNCTION 14dba5f99 FUN_14dba5f99 body=287 status=ok
// SIG undefined FUN_14dba5f99(void)

/* WARNING: Removing unreachable block (ram,0x00014dba6036) */
/* WARNING: Removing unreachable block (ram,0x0001573b0332) */

void FUN_14dba5f99(void)

{
  FUN_1573b0332();
  return;
}



// FUNCTION 14dba6147 FUN_14dba6147 body=366 status=ok
// SIG undefined FUN_14dba6147(void)

void FUN_14dba6147(void)

{
  ushort uVar1;
  ulonglong uVar2;
  ushort *unaff_RBX;
  longlong unaff_R12;
  
  uVar1 = *unaff_RBX;
  *unaff_RBX = 0xd181;
  *unaff_RBX = *unaff_RBX ^ 0xd181;
  *unaff_RBX = *unaff_RBX + ((uVar1 | 0x100) - 0x100);
  uVar2 = FUN_15b0d8c51();
  uVar2 = ~uVar2 | *(ulonglong *)(unaff_R12 + -0x80);
  FUN_15753eab9(uVar2,FUN_15753eab9,~*(ulonglong *)(unaff_R12 + -0x80));
  FUN_161d94636(uVar2);
  return;
}



// FUNCTION 14dba62bb FUN_14dba62bb body=356 status=ok
// SIG undefined FUN_14dba62bb(void)

/* WARNING: Removing unreachable block (ram,0x00014dba6342) */
/* WARNING: Removing unreachable block (ram,0x000156c74911) */

undefined8
FUN_14dba62bb(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  undefined8 uVar1;
  ulonglong local_res18;
  ulonglong local_res20;
  
  local_res20 = ~((~local_res20 & ~param_1 | local_res20) &
                 (~(~local_res20 & param_1) + param_1) - local_res20);
  if (!CARRY8(~param_1 | param_5,param_1)) {
    uVar1 = (*(code *)&LAB_1652e8b84)
                      (~((~param_1 | local_res18) & (~param_1 & ~local_res18 | param_1)),
                       &local_res20,&LAB_1652e8b84,param_4);
    return uVar1;
  }
  uVar1 = FUN_162bbb950();
  return uVar1;
}



// FUNCTION 14dba6462 FUN_14dba6462 body=184 status=ok
// SIG undefined FUN_14dba6462(void)

ulonglong FUN_14dba6462(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  undefined8 unaff_RSI;
  ulonglong unaff_R13;
  ulonglong unaff_R15;
  
  *param_1 = in_RAX;
  param_1[-1] = unaff_RSI;
  *param_1 = *(ulonglong *)(unaff_R13 - 0x88);
  *param_1 = *(ulonglong *)(unaff_R13 - 0x38);
  uVar1 = *param_1;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *param_1 = unaff_R13;
  param_1[-1] = unaff_R13;
  param_1[-2] = unaff_R13;
  *param_1 = (ulonglong)FUN_14dba651a;
  param_1[-1] = (ulonglong)&LAB_160fca983;
  return uVar1 ^ unaff_R15;
}



// FUNCTION 14dba651a FUN_14dba651a body=92 status=ok
// SIG undefined FUN_14dba651a(void)

void FUN_14dba651a(void)

{
  return;
}



// FUNCTION 14dba66db FUN_14dba66db body=294 status=ok
// SIG undefined FUN_14dba66db(void)

/* WARNING: Removing unreachable block (ram,0x00014dba676f) */

void FUN_14dba66db(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_156d0039b(FUN_156d0039b,
                ((unaff_R15 - 1) - ~*(ulonglong *)(unaff_R13 + -0x28)) +
                (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2,param_3,param_4);
  return;
}



// FUNCTION 14dba6775 FUN_14dba6775 body=118 status=ok
// SIG undefined FUN_14dba6775(void)

void FUN_14dba6775(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -0x10) = param_2;
  *(undefined8 *)(local_res10 + -8) = 0x493d70a;
  uVar1 = *(undefined8 *)(local_res10 + -0x10);
  *(undefined8 *)(local_res10 + -0x10) = param_3;
  *(undefined8 *)(local_res10 + -0x18) = param_3;
  *(undefined8 *)(local_res10 + -0x10) = 0x156ef2e25;
  FUN_161dac386(param_1,uVar1,FUN_161dac386);
  return;
}



// FUNCTION 14dba695f FUN_14dba695f body=367 status=ok
// SIG undefined FUN_14dba695f(void)

void FUN_14dba695f(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 unaff_R12;
  longlong local_res18;
  
  puVar1 = (undefined8 *)(local_res18 + -8);
  *puVar1 = unaff_RSI;
  *(undefined8 *)(local_res18 + -0x10) = 0x14dba69af;
  uVar4 = FUN_156e0590a();
  uVar2 = *puVar1;
  *puVar1 = uVar2;
  *(undefined8 *)(local_res18 + -0x10) = uVar2;
  *(undefined8 *)(local_res18 + -0x18) = param_1;
  *(undefined8 *)(local_res18 + -0x20) = uVar4;
  *(undefined4 *)(local_res18 + -0x20) = 0x89bfe927;
  *(undefined4 *)(local_res18 + -0x1c) = 0xffffffff;
  uVar3 = *(ulonglong *)(local_res18 + -0x20);
  *(undefined8 *)(local_res18 + -0x20) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x28) = unaff_R12;
  *(ulonglong *)(local_res18 + -0x30) = ~uVar3;
  *(undefined8 *)(local_res18 + -0x20) = uVar4;
  *(code **)(local_res18 + -0x28) = FUN_156e0590a;
  FUN_157841666(0x7640166a - (*(longlong *)(local_res18 + -0x30) + 2));
  return;
}



// FUNCTION 14dba6ad6 FUN_14dba6ad6 body=285 status=ok
// SIG undefined FUN_14dba6ad6(void)

/* WARNING: Instruction at (ram,0x00014dba6cbd) overlaps instruction at (ram,0x00014dba6cbc)
    */
/* WARNING: Removing unreachable block (ram,0x00014dba6be2) */
/* WARNING: Removing unreachable block (ram,0x00014dba6be8) */
/* WARNING: Removing unreachable block (ram,0x00014dba6bed) */
/* WARNING: Removing unreachable block (ram,0x00014dba6c86) */
/* WARNING: Removing unreachable block (ram,0x00014dba6c8b) */
/* WARNING: Removing unreachable block (ram,0x00014dba6c91) */
/* WARNING: Removing unreachable block (ram,0x00014dba6cbc) */
/* WARNING: Removing unreachable block (ram,0x00014dba6cbd) */
/* WARNING: Removing unreachable block (ram,0x000165b12865) */
/* WARNING: Removing unreachable block (ram,0x000165b128f2) */
/* WARNING: Removing unreachable block (ram,0x000165b128f8) */
/* WARNING: Removing unreachable block (ram,0x000165b128ed) */
/* WARNING: Removing unreachable block (ram,0x000161a91298) */
/* WARNING: Removing unreachable block (ram,0x000161a91319) */
/* WARNING: Removing unreachable block (ram,0x000161a9131f) */
/* WARNING: Removing unreachable block (ram,0x000161a9139e) */
/* WARNING: Removing unreachable block (ram,0x000161a913a3) */
/* WARNING: Removing unreachable block (ram,0x000161a913a9) */
/* WARNING: Removing unreachable block (ram,0x000161b90014) */
/* WARNING: Removing unreachable block (ram,0x0001575f482d) */
/* WARNING: Removing unreachable block (ram,0x0001575f489a) */
/* WARNING: Removing unreachable block (ram,0x0001575f48a0) */
/* WARNING: Removing unreachable block (ram,0x00016177e014) */
/* WARNING: Removing unreachable block (ram,0x00014dba6b54) */
/* WARNING: Removing unreachable block (ram,0x00016114f117) */
/* WARNING: Removing unreachable block (ram,0x00016114f11c) */
/* WARNING: Removing unreachable block (ram,0x00016488721e) */
/* WARNING: Removing unreachable block (ram,0x00016488744b) */
/* WARNING: Removing unreachable block (ram,0x000164887456) */
/* WARNING: Removing unreachable block (ram,0x000162c3dd2d) */
/* WARNING: Removing unreachable block (ram,0x000164887462) */
/* WARNING: Removing unreachable block (ram,0x00016114f122) */

void FUN_14dba6ad6(void)

{
  undefined8 in_R11;
  undefined8 unaff_R15;
  ushort local_res8;
  uint6 uStackX_a;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = in_R11;
  *(undefined8 *)(local_res10 + -0x10) = in_R11;
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((local_res8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res8 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res8 & 0x200) != 0) * 0x200 | (ulonglong)((local_res8 & 0x80) != 0) * 0x80
       | (ulonglong)((local_res8 & 0x40) != 0) * 0x40 | (ulonglong)((local_res8 & 0x10) != 0) * 0x10
       | (ulonglong)((local_res8 & 4) != 0) * 4 | (ulonglong)((local_res8 & 1) != 0) |
       (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 | (ulonglong)((uStackX_a & 4) != 0) * 0x40000
  ;
  *(undefined8 *)(local_res10 + -0x20) = 0x52ab806;
  *(longlong *)(local_res10 + -0x20) = *(longlong *)(local_res10 + -0x20) + -0xbdbc02;
  *(undefined8 *)(local_res10 + -0x18) = unaff_R15;
  *(undefined8 *)(local_res10 + -8) = 0x46cfc04;
  FUN_165c7153c();
  return;
}



// FUNCTION 14dba6bed FUN_14dba6bed body=219 status=ok
// SIG undefined FUN_14dba6bed(void)

/* WARNING: Instruction at (ram,0x00014dba6cbd) overlaps instruction at (ram,0x00014dba6cbc)
    */
/* WARNING: Removing unreachable block (ram,0x00014dba6c91) */
/* WARNING: Removing unreachable block (ram,0x00014dba6cbd) */
/* WARNING: Removing unreachable block (ram,0x000161a913a9) */
/* WARNING: Removing unreachable block (ram,0x000165b128f8) */
/* WARNING: Removing unreachable block (ram,0x00014dba6cbc) */
/* WARNING: Removing unreachable block (ram,0x0001575f48a0) */
/* WARNING: Removing unreachable block (ram,0x000161a9131f) */
/* WARNING: Removing unreachable block (ram,0x000161a913a3) */
/* WARNING: Removing unreachable block (ram,0x000161a9139e) */

void FUN_14dba6bed(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  ushort uVar3;
  longlong lVar4;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(unaff_RSI + 8) = 0;
  lVar4 = *(longlong *)(unaff_RSI + 8);
  *(ulonglong *)(unaff_RSI + 8) = *(ulonglong *)(unaff_RSI + 8) & param_1;
  *(longlong *)(unaff_RSI + 8) = *(longlong *)(unaff_RSI + 8) << 1;
  *(ulonglong *)(unaff_RSI + 8) = (lVar4 + param_1) - *(longlong *)(unaff_RSI + 8);
  lVar4 = param_5 + unaff_R15 + (param_5 & unaff_R15) * -2;
  if (param_5 + unaff_R15 < (param_5 & unaff_R15) * 2) {
    *(undefined8 *)(lVar4 + -8) = unaff_retaddr;
    *(undefined8 *)(lVar4 + -0x10) = in_RAX;
    uVar3 = (ushort)unaff_retaddr;
    *(undefined8 *)(lVar4 + -0x18) = in_stack_00000008;
    *(undefined8 *)(lVar4 + -0x20) = unaff_RDI;
    *(ushort *)(lVar4 + -0x12) = uVar3;
    *(ushort *)(lVar4 + -0x12) = *(short *)(lVar4 + -0x12) + (~uVar3 - ~(uVar3 & (ushort)param_4));
    uVar1 = *(undefined8 *)(lVar4 + -0x10);
    *(undefined8 *)(lVar4 + -0x10) = param_4;
    *(undefined8 *)(lVar4 + -0x18) = param_4;
    *(undefined8 *)(lVar4 + -0x20) = uVar1;
    *(undefined8 *)(lVar4 + -0x28) = uVar1;
    *(undefined4 *)(lVar4 + -0x28) = 0x4846c170;
    *(undefined4 *)(lVar4 + -0x24) = 0;
    uVar1 = *(undefined8 *)
             (lVar4 + -0x18 + (*(longlong *)(lVar4 + -0x28) + 0x1c854a02U ^ 0x64cc0b62));
    uVar2 = *(undefined8 *)(lVar4 + -0x20);
    *(undefined8 *)(lVar4 + -0x20) = unaff_RBX;
    *(undefined8 *)(lVar4 + -0x10) = uVar1;
    *(undefined8 *)(lVar4 + -8) = 0;
    *(longlong *)(lVar4 + -8) = *(longlong *)(lVar4 + -8) + -0x14df11b27;
    *(longlong *)(lVar4 + -8) = -*(longlong *)(lVar4 + -8);
    *(undefined8 *)(lVar4 + -0x10) = *(undefined8 *)(lVar4 + -0x20);
    *(undefined8 *)(lVar4 + -0x18) = *(undefined8 *)(lVar4 + -0x20);
    *(undefined8 *)(lVar4 + -0x20) = uVar2;
    FUN_14df11ac2();
    return;
  }
  thunk_FUN_165b1286b();
  return;
}



// FUNCTION 14dba6d1d FUN_14dba6d1d body=461 status=ok
// SIG undefined FUN_14dba6d1d(void)

/* WARNING: Removing unreachable block (ram,0x00014dba6e61) */
/* WARNING: Removing unreachable block (ram,0x00014dba6e67) */
/* WARNING: Removing unreachable block (ram,0x00014dba6db9) */

void FUN_14dba6d1d(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_stack_00000008;
  
  if ((longlong)in_stack_00000008 < 0) {
    param_3 = param_3 & 0xffffffff;
    if ((param_3 | 0xe4c395124b23636) != 0) {
      FUN_1619da6e9();
      return;
    }
    param_3 = ~(ulonglong)
               (&DAT_f1b3c6aedb4dc9c9 + (~(~param_3 & 0xf1b3c6aedb4dc9c9) - param_3) +
               ~(ulonglong)(&DAT_f1b3c6aedb4dc9c9 + (~(~param_3 & 0xf1b3c6aedb4dc9c9) - param_3)) +
               1);
    *(ulonglong *)(in_stack_00000008 & 0x7fffffffffffffff) = param_3;
  }
  *(int *)(in_stack_00000008 & 0x7fffffffffffffff) = (int)param_3;
  thunk_FUN_1627529c3(param_1,param_2);
  return;
}



// FUNCTION 14dba6eec FUN_14dba6eec body=147 status=ok
// SIG undefined FUN_14dba6eec(void)

/* WARNING: Removing unreachable block (ram,0x0001654b6994) */
/* WARNING: Removing unreachable block (ram,0x0001654b699a) */
/* WARNING: Removing unreachable block (ram,0x00014dba7018) */
/* WARNING: Removing unreachable block (ram,0x00014dba7023) */
/* WARNING: Removing unreachable block (ram,0x00014dba701e) */
/* WARNING: Removing unreachable block (ram,0x00016497124f) */
/* WARNING: Removing unreachable block (ram,0x00014dba6f80) */
/* WARNING: Removing unreachable block (ram,0x00014dba6f88) */
/* WARNING: Removing unreachable block (ram,0x00014dba6f8d) */
/* WARNING: Removing unreachable block (ram,0x00014dba6fc0) */

undefined8 FUN_14dba6eec(ulonglong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  if ((~(*(ulonglong *)(unaff_RDI + -0x88) & param_1) &
      (*(ulonglong *)(unaff_RDI + -0x88) | param_1)) == 0) {
    uVar1 = FUN_1654b68ff();
    return uVar1;
  }
  uVar1 = FUN_16497124f();
  return uVar1;
}



// FUNCTION 14dba6f80 FUN_14dba6f80 body=322 status=ok
// SIG undefined FUN_14dba6f80(void)

/* WARNING: Removing unreachable block (ram,0x00014dba7018) */
/* WARNING: Removing unreachable block (ram,0x00014dba7023) */
/* WARNING: Removing unreachable block (ram,0x00014dba701e) */

void FUN_14dba6f80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_R10;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_R15;
  *(undefined8 *)(local_res10 + -0x10) = unaff_retaddr;
  *(undefined8 *)(local_res10 + -0x10) = in_R10;
  *(undefined8 *)(local_res10 + -0x18) = param_3;
  FUN_1616eba93();
  return;
}



// FUNCTION 14dba70c3 FUN_14dba70c3 body=492 status=ok
// SIG undefined FUN_14dba70c3(void)

/* WARNING: Removing unreachable block (ram,0x000156937860) */
/* WARNING: Removing unreachable block (ram,0x000156937866) */
/* WARNING: Removing unreachable block (ram,0x0001616d336b) */
/* WARNING: Removing unreachable block (ram,0x0001616d33e4) */
/* WARNING: Removing unreachable block (ram,0x0001616d33ea) */
/* WARNING: Removing unreachable block (ram,0x000157850222) */
/* WARNING: Removing unreachable block (ram,0x0001616d33f1) */
/* WARNING: Removing unreachable block (ram,0x0001616d349f) */
/* WARNING: Removing unreachable block (ram,0x00015b77a08e) */
/* WARNING: Removing unreachable block (ram,0x0001616d34ab) */
/* WARNING: Removing unreachable block (ram,0x0001661c9238) */
/* WARNING: Removing unreachable block (ram,0x0001661c9241) */
/* WARNING: Removing unreachable block (ram,0x0001616d353e) */
/* WARNING: Removing unreachable block (ram,0x0001616d3544) */
/* WARNING: Removing unreachable block (ram,0x0001616d3549) */
/* WARNING: Removing unreachable block (ram,0x00014dba7159) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffff0 : 0x000156937847 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dba70c3(void)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_1616d3371();
  return uVar1;
}



// FUNCTION 14dba7323 FUN_14dba7323 body=208 status=ok
// SIG undefined FUN_14dba7323(void)

void FUN_14dba7323(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *in_R10;
  ulonglong unaff_R13;
  ulonglong unaff_R15;
  ulonglong unaff_retaddr;
  ulonglong in_stack_00000020;
  
  FUN_15702cf1a(param_1,param_2,param_3,param_4,
                ~((~unaff_R15 | in_stack_00000020) & (~in_stack_00000020 | unaff_R15)));
  if (((ulonglong)in_R10 & (unaff_R13 >> 1 | unaff_R13 << 0x3f)) != 0) {
    in_R10 = (ulonglong *)((ulonglong)in_R10 & 0x7fffffffffffffff);
    unaff_retaddr = unaff_retaddr ^ 0xb8374a98aeb06464;
  }
  *in_R10 = unaff_retaddr;
  FUN_162e911a6(param_1);
  return;
}



// FUNCTION 14dba73f4 FUN_14dba73f4 body=360 status=ok
// SIG undefined FUN_14dba73f4(void)

/* WARNING: Removing unreachable block (ram,0x00014dba74a5) */
/* WARNING: Removing unreachable block (ram,0x00014dba74b0) */
/* WARNING: Removing unreachable block (ram,0x00014dba74ab) */

void FUN_14dba73f4(void)

{
  FUN_15721c019();
  FUN_161c7c789();
  return;
}



// FUNCTION 14dba755e FUN_14dba755e body=134 status=ok
// SIG undefined FUN_14dba755e(void)

void FUN_14dba755e(undefined8 param_1)

{
  byte *unaff_RBX;
  bool in_ZF;
  byte unaff_retaddr;
  
  if (!in_ZF) {
    unaff_RBX = (byte *)((ulonglong)unaff_RBX & 0x7fffffffffffffff);
    unaff_retaddr = unaff_retaddr ^ 0x8a;
  }
  *unaff_RBX = unaff_retaddr;
  thunk_FUN_15b1097be(param_1);
  return;
}



// FUNCTION 14dba75e4 FUN_14dba75e4 body=129 status=ok
// SIG undefined FUN_14dba75e4(void)

void FUN_14dba75e4(void)

{
  FUN_1651fada4();
  FUN_164959e05();
  return;
}



// FUNCTION 14dba766c FUN_14dba766c body=183 status=ok
// SIG undefined FUN_14dba766c(void)

void FUN_14dba766c(void)

{
  return;
}



// FUNCTION 14dba77cd FUN_14dba77cd body=9 status=ok
// SIG undefined FUN_14dba77cd(void)

void FUN_14dba77cd(void)

{
  return;
}



// FUNCTION 14dba7859 FUN_14dba7859 body=132 status=ok
// SIG undefined FUN_14dba7859(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001627e6cf5) */
/* WARNING: Removing unreachable block (ram,0x0001627e6cfb) */
/* WARNING: Removing unreachable block (ram,0x0001627e6c50) */
/* WARNING: Removing unreachable block (ram,0x0001627e6c56) */
/* WARNING: Removing unreachable block (ram,0x0001619076ec) */
/* WARNING: Removing unreachable block (ram,0x00015b1ada2f) */
/* WARNING: Removing unreachable block (ram,0x00014d7bc858) */

undefined8 FUN_14dba7859(undefined8 param_1)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  undefined8 local_res10;
  
  if (-1 < (longlong)(local_res10 ^ in_RAX)) {
    uVar1 = FUN_1627e6b1b();
    return uVar1;
  }
  FUN_1666a0248(param_1);
  uVar1 = FUN_15b1ada2f();
  return uVar1;
}



// FUNCTION 14dba78de FUN_14dba78de body=78 status=ok
// SIG undefined FUN_14dba78de(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dba78de(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_RDI;
  *(undefined8 *)(local_res10 + -0x10) = param_2;
  *(undefined8 *)(local_res10 + -0x18) = param_2;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -0x18) = unaff_RSI;
  *(undefined **)(local_res10 + -8) = &DAT_14dba7945;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dba7a14 FUN_14dba7a14 body=40 status=ok
// SIG undefined FUN_14dba7a14(void)

void FUN_14dba7a14(void)

{
  ulonglong unaff_RBX;
  longlong *unaff_RSI;
  ulonglong unaff_RDI;
  longlong lVar1;
  
  lVar1 = unaff_RBX + unaff_RDI + (unaff_RBX & unaff_RDI) * -2;
  *unaff_RSI = lVar1;
  *(int *)unaff_RSI = (int)lVar1;
  thunk_FUN_166485e23();
  return;
}



// FUNCTION 14dba7a3d thunk_FUN_166485e23 body=5 status=ok
// SIG undefined thunk_FUN_166485e23(void)

void thunk_FUN_166485e23(void)

{
  FUN_166485e23();
  return;
}



// FUNCTION 14dba7a83 FUN_14dba7a83 body=145 status=ok
// SIG undefined FUN_14dba7a83(void)

void FUN_14dba7a83(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  ushort *unaff_R15;
  undefined8 in_stack_00000008;
  undefined8 local_res10;
  
  *unaff_R15 = ~(~*unaff_R15 & 0xfeff) - 0x100;
  *(undefined8 *)(param_5 + -8) = local_res10;
  *(undefined8 *)(param_5 + -0x10) = in_stack_00000008;
  FUN_15b308ae7(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dba7be1 FUN_14dba7be1 body=297 status=ok
// SIG undefined FUN_14dba7be1(void)

/* WARNING: Removing unreachable block (ram,0x00014dba7c89) */

void FUN_14dba7be1(undefined8 param_1)

{
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  ushort *unaff_R13;
  undefined8 unaff_R15;
  longlong local_res20;
  
  *unaff_R13 = (~*unaff_R13 & 0x100 | *unaff_R13) - 0x100;
  *(undefined8 *)(local_res20 + -8) = unaff_RBX;
  *(undefined8 *)(local_res20 + -0x10) = unaff_R15;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R15;
  *(undefined8 *)(local_res20 + -0x20) = param_1;
  *(undefined8 *)(local_res20 + -0x20) = unaff_RBP;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined **)(local_res20 + -8) = &DAT_162979164;
                    /* WARNING: Treating indirect jump as return */
  return;
}



// FUNCTION 14dba7e34 FUN_14dba7e34 body=146 status=ok
// SIG undefined FUN_14dba7e34(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7bd103) */
/* WARNING: Removing unreachable block (ram,0x00014d7bd119) */
/* WARNING: Removing unreachable block (ram,0x00014d7bd188) */
/* WARNING: Removing unreachable block (ram,0x00014d7bd18a) */
/* WARNING: Removing unreachable block (ram,0x00014d7bd13b) */

void FUN_14dba7e34(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RBX;
  
  uVar1 = *(ulonglong *)(unaff_RBX + 0x10);
  *(longlong *)(unaff_RBX + 0x10) = -*(longlong *)(unaff_RBX + 0x10);
  *(longlong *)(unaff_RBX + 0x10) = *(longlong *)(unaff_RBX + 0x10) + -1;
  *(ulonglong *)(unaff_RBX + 0x10) = *(ulonglong *)(unaff_RBX + 0x10) | param_1;
  *(ulonglong *)(unaff_RBX + 0x10) = ~((~param_1 | uVar1) & *(ulonglong *)(unaff_RBX + 0x10));
  if (&stack0x00000000 == &DAT_ffffffffffffffe8) {
    FUN_165c8d505();
    return;
  }
  FUN_165c8d505();
  return;
}



// FUNCTION 14dba801c FUN_14dba801c body=87 status=ok
// SIG undefined FUN_14dba801c(void)

undefined8 FUN_14dba801c(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dba81df FUN_14dba81df body=168 status=ok
// SIG undefined FUN_14dba81df(void)

void FUN_14dba81df(void)

{
  return;
}



// FUNCTION 14dba8288 FUN_14dba8288 body=17 status=ok
// SIG undefined FUN_14dba8288(void)

void FUN_14dba8288(void)

{
  return;
}



// FUNCTION 14dba83c3 FUN_14dba83c3 body=325 status=ok
// SIG undefined FUN_14dba83c3(void)

/* WARNING: Removing unreachable block (ram,0x00014dba850a) */
/* WARNING: Removing unreachable block (ram,0x00014dba8454) */
/* WARNING: Removing unreachable block (ram,0x00014dba845a) */
/* WARNING: Removing unreachable block (ram,0x00014dba84ff) */
/* WARNING: Removing unreachable block (ram,0x00014dba8505) */
/* WARNING: Removing unreachable block (ram,0x00014dba84fa) */
/* WARNING: Removing unreachable block (ram,0x0001621f566c) */
/* WARNING: Removing unreachable block (ram,0x0001621f5661) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dba83c3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_stack_00000008;
  
  FUN_157342e0f(param_1,in_stack_00000008,param_3,param_4);
  return;
}



// FUNCTION 14dba850a FUN_14dba850a body=150 status=ok
// SIG undefined FUN_14dba850a(void)

void FUN_14dba850a(longlong param_1)

{
  ulonglong unaff_RBX;
  undefined8 local_res8;
  
  (*(code *)0x1571faaa8)(*(ulonglong *)(param_1 + -0xa0) ^ unaff_RBX,local_res8);
  return;
}



// FUNCTION 14dba8b2d FUN_14dba8b2d body=143 status=ok
// SIG undefined FUN_14dba8b2d(void)

void FUN_14dba8b2d(undefined8 param_1,undefined8 param_2)

{
  ulonglong unaff_R15;
  ulonglong local_res10;
  ulonglong local_res18;
  
  local_res10 = ~(local_res10 & unaff_R15) & (local_res10 | unaff_R15);
  local_res18 = (local_res18 & unaff_R15 ^ 0xffffffffffffffff) & (local_res18 | unaff_R15);
  FUN_1563b627f(param_1,param_2,&local_res10);
  return;
}



// FUNCTION 14dba8bbd FUN_14dba8bbd body=164 status=ok
// SIG undefined FUN_14dba8bbd(void)

void FUN_14dba8bbd(void)

{
  return;
}



// FUNCTION 14dba8d9d thunk_FUN_14dba8da3 body=5 status=ok
// SIG undefined thunk_FUN_14dba8da3(void)

void thunk_FUN_14dba8da3(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)0x165f94edf)(-(~param_1 + 1),param_2,param_3,param_4);
  return;
}



// FUNCTION 14dba8da3 FUN_14dba8da3 body=120 status=ok
// SIG undefined FUN_14dba8da3(void)

void FUN_14dba8da3(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)0x165f94edf)(-(~param_1 + 1),param_2,param_3,param_4);
  return;
}



// FUNCTION 14dba8e1d FUN_14dba8e1d body=82 status=ok
// SIG undefined FUN_14dba8e1d(void)

void FUN_14dba8e1d(void)

{
  thunk_FUN_166485e23();
  return;
}



// FUNCTION 14dba8eb5 FUN_14dba8eb5 body=1532 status=ok
// SIG undefined FUN_14dba8eb5(void)

/* WARNING: Removing unreachable block (ram,0x000162c45b77) */
/* WARNING: Removing unreachable block (ram,0x000162c45b82) */
/* WARNING: Removing unreachable block (ram,0x000161189ed2) */
/* WARNING: Removing unreachable block (ram,0x000166080e4d) */
/* WARNING: Removing unreachable block (ram,0x000166080ea4) */
/* WARNING: Removing unreachable block (ram,0x000165d5d4e4) */
/* WARNING: Removing unreachable block (ram,0x000165d5d4ea) */
/* WARNING: Removing unreachable block (ram,0x000162c45b7d) */
/* WARNING: Removing unreachable block (ram,0x00014dba8f3f) */
/* WARNING: Removing unreachable block (ram,0x000156a1dbb0) */
/* WARNING: Removing unreachable block (ram,0x00014dba8fc0) */
/* WARNING: Removing unreachable block (ram,0x00014dba8fc6) */
/* WARNING: Removing unreachable block (ram,0x00014dd659ff) */
/* WARNING: Removing unreachable block (ram,0x00014de6a4af) */
/* WARNING: Removing unreachable block (ram,0x000166080bf7) */
/* WARNING: Removing unreachable block (ram,0x000166080d0c) */
/* WARNING: Removing unreachable block (ram,0x000166080d17) */
/* WARNING: Removing unreachable block (ram,0x000166080da7) */
/* WARNING: Removing unreachable block (ram,0x000161c33f63) */
/* WARNING: Removing unreachable block (ram,0x000164fc1564) */
/* WARNING: Removing unreachable block (ram,0x000164fc15c2) */
/* WARNING: Removing unreachable block (ram,0x000166080dad) */
/* WARNING: Removing unreachable block (ram,0x000161189732) */
/* WARNING: Removing unreachable block (ram,0x000166080e0c) */
/* WARNING: Removing unreachable block (ram,0x000166080e12) */
/* WARNING: Removing unreachable block (ram,0x000166080d11) */
/* WARNING: Removing unreachable block (ram,0x000161578a4e) */
/* WARNING: Removing unreachable block (ram,0x000164adc215) */
/* WARNING: Removing unreachable block (ram,0x00016512c1a8) */
/* WARNING: Removing unreachable block (ram,0x00016512c228) */
/* WARNING: Removing unreachable block (ram,0x00016512c22c) */
/* WARNING: Removing unreachable block (ram,0x00014dd65a1c) */
/* WARNING: Removing unreachable block (ram,0x00014dba8fcb) */
/* WARNING: Removing unreachable block (ram,0x00014de6a39b) */
/* WARNING: Removing unreachable block (ram,0x00014de6a3e8) */

void FUN_14dba8eb5(undefined8 param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong uStackX_10;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0x28);
  uVar2 = FUN_14ddbefb6(~((0xffffffffffffffff - unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
                         (0xffffffffffffffff - *(ulonglong *)(unaff_R13 + -0x78) | unaff_R15)),
                        ~(uVar2 & unaff_R15) & (~(uVar2 & unaff_R15) + unaff_R15) - ~uVar2);
  FUN_157026be9(uStackX_10 | uVar2);
  uVar3 = (uint)*(undefined8 *)(unaff_R13 + -0x78);
  uVar3 = ~(uVar3 & (uint)unaff_R15) & (uVar3 | (uint)unaff_R15);
  uVar4 = *(ulonglong *)(unaff_R13 + -0x28) + unaff_R15;
  uVar2 = *(ulonglong *)(unaff_R13 + -0x28) & unaff_R15;
  lVar5 = uVar4 + uVar2 * -2;
  if (uVar4 < uVar2 * 2) {
    FUN_14de6a2ae();
    return;
  }
  uVar1 = FUN_1618e2dd5();
  uVar2 = (ulonglong)((-2 - ((param_3 + -1) - (uVar1 ^ 0xffffffff) ^ 0xffffffff)) - ~uVar3);
  FUN_162819da7(uVar2,lVar5);
  FUN_156b9006f(uVar2);
  return;
}



// FUNCTION 14dba90f9 FUN_14dba90f9 body=553 status=ok
// SIG undefined FUN_14dba90f9(void)

/* WARNING: Removing unreachable block (ram,0x000162e29f69) */
/* WARNING: Removing unreachable block (ram,0x000162e29f6f) */
/* WARNING: Removing unreachable block (ram,0x000165e16677) */
/* WARNING: Removing unreachable block (ram,0x000162e29fe3) */
/* WARNING: Removing unreachable block (ram,0x000162e29fe9) */
/* WARNING: Removing unreachable block (ram,0x000162e29fee) */
/* WARNING: Removing unreachable block (ram,0x000162e2a023) */
/* WARNING: Removing unreachable block (ram,0x000162e2a08e) */
/* WARNING: Removing unreachable block (ram,0x000162e2a094) */
/* WARNING: Removing unreachable block (ram,0x00015665e672) */
/* WARNING: Removing unreachable block (ram,0x000160c6f104) */
/* WARNING: Removing unreachable block (ram,0x000160c6f13d) */
/* WARNING: Removing unreachable block (ram,0x000160c6f172) */
/* WARNING: Removing unreachable block (ram,0x000160c6f1a3) */
/* WARNING: Removing unreachable block (ram,0x000166257ff4) */
/* WARNING: Removing unreachable block (ram,0x000160c6f1a9) */
/* WARNING: Removing unreachable block (ram,0x000160c6f1c7) */
/* WARNING: Removing unreachable block (ram,0x000160c6f1d7) */
/* WARNING: Removing unreachable block (ram,0x000160c6f24e) */
/* WARNING: Removing unreachable block (ram,0x000160c6f25a) */
/* WARNING: Removing unreachable block (ram,0x000160c6f25f) */
/* WARNING: Removing unreachable block (ram,0x000162e29eda) */
/* WARNING: Removing unreachable block (ram,0x00015b81f9a4) */
/* WARNING: Removing unreachable block (ram,0x000160b9db5a) */
/* WARNING: Removing unreachable block (ram,0x00015b81fa2e) */
/* WARNING: Removing unreachable block (ram,0x00015b81fa34) */
/* WARNING: Removing unreachable block (ram,0x00015b81fa39) */
/* WARNING: Removing unreachable block (ram,0x00014dba9197) */
/* WARNING: Removing unreachable block (ram,0x00014dba919d) */
/* WARNING: Removing unreachable block (ram,0x00014dba923c) */
/* WARNING: Removing unreachable block (ram,0x00014dba9242) */
/* WARNING: Removing unreachable block (ram,0x0001663fc746) */
/* WARNING: Removing unreachable block (ram,0x000162e2a018) */

undefined8 FUN_14dba90f9(void)

{
  ushort *in_RAX;
  undefined8 uVar1;
  undefined8 in_R10;
  undefined8 unaff_R13;
  short unaff_R14W;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  longlong in_stack_00000028;
  
  *in_RAX = -~*in_RAX - (~(0xfeffU - unaff_R14W) + 2);
  *(undefined8 *)(in_stack_00000028 + -8) = uStackX_18;
  *(undefined8 *)(in_stack_00000028 + -0x10) = in_R10;
  *(undefined8 *)(in_stack_00000028 + -0x18) = in_R10;
  *(undefined8 *)(in_stack_00000028 + -0x10) = *(undefined8 *)(in_stack_00000028 + -8);
  *(undefined8 *)(in_stack_00000028 + -8) = 0;
  *(longlong *)(in_stack_00000028 + -8) = *(longlong *)(in_stack_00000028 + -8) + -0x16625802d;
  *(undefined8 *)(in_stack_00000028 + -0x18) = uStackX_10;
  *(undefined8 *)(in_stack_00000028 + -0x20) = unaff_R13;
  uVar1 = FUN_160c6f104();
  return uVar1;
}



// FUNCTION 14dba92bc FUN_14dba92bc body=13 status=ok
// SIG undefined FUN_14dba92bc(void)

void FUN_14dba92bc(void)

{
  longlong unaff_RSI;
  
                    /* WARNING: Could not recover jumptable at 0x00014dba92c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(unaff_RSI + -0x24cf599))();
  return;
}



// FUNCTION 14dba92c9 FUN_14dba92c9 body=265 status=ok
// SIG undefined FUN_14dba92c9(void)

/* WARNING: Removing unreachable block (ram,0x000165436aca) */
/* WARNING: Removing unreachable block (ram,0x000165436ac4) */
/* WARNING: Removing unreachable block (ram,0x000165436acf) */
/* WARNING: Removing unreachable block (ram,0x000165436b56) */
/* WARNING: Removing unreachable block (ram,0x000165436b5c) */
/* WARNING: Removing unreachable block (ram,0x000165436b61) */
/* WARNING: Removing unreachable block (ram,0x0001625eae0c) */
/* WARNING: Removing unreachable block (ram,0x0001625eae83) */
/* WARNING: Removing unreachable block (ram,0x0001625eae89) */
/* WARNING: Removing unreachable block (ram,0x0001658c1a0e) */
/* WARNING: Removing unreachable block (ram,0x0001658c1a8e) */
/* WARNING: Removing unreachable block (ram,0x00016538648e) */
/* WARNING: Removing unreachable block (ram,0x0001658c1a9a) */
/* WARNING: Removing unreachable block (ram,0x0001658c1b1e) */
/* WARNING: Removing unreachable block (ram,0x0001658c1b23) */
/* WARNING: Removing unreachable block (ram,0x0001658c1b29) */
/* WARNING: Removing unreachable block (ram,0x0001658c1b2e) */
/* WARNING: Removing unreachable block (ram,0x0001651b3917) */
/* WARNING: Removing unreachable block (ram,0x0001651b390b) */
/* WARNING: Removing unreachable block (ram,0x0001651b391c) */
/* WARNING: Removing unreachable block (ram,0x00014dba948f) */
/* WARNING: Removing unreachable block (ram,0x0001648c77d3) */
/* WARNING: Removing unreachable block (ram,0x000166b0466e) */
/* WARNING: Removing unreachable block (ram,0x000166b04668) */
/* WARNING: Removing unreachable block (ram,0x00014dba9336) */
/* WARNING: Removing unreachable block (ram,0x00014dba933c) */
/* WARNING: Removing unreachable block (ram,0x0001651b3881) */
/* WARNING: Removing unreachable block (ram,0x00014dba93ca) */
/* WARNING: Removing unreachable block (ram,0x00014dba93d0) */
/* WARNING: Removing unreachable block (ram,0x00014dba93d5) */
/* WARNING: Removing unreachable block (ram,0x00014dba9461) */
/* WARNING: Removing unreachable block (ram,0x00014dba9467) */
/* WARNING: Removing unreachable block (ram,0x00014dba94fb) */
/* WARNING: Removing unreachable block (ram,0x00014dba9500) */
/* WARNING: Removing unreachable block (ram,0x000162133d37) */
/* WARNING: Removing unreachable block (ram,0x000165436982) */
/* WARNING: Removing unreachable block (ram,0x000165436a29) */
/* WARNING: Removing unreachable block (ram,0x000165436a2f) */
/* WARNING: Removing unreachable block (ram,0x0001564c4069) */
/* WARNING: Removing unreachable block (ram,0x0001564c40df) */
/* WARNING: Removing unreachable block (ram,0x0001564c40e5) */
/* WARNING: Removing unreachable block (ram,0x000165158387) */
/* WARNING: Removing unreachable block (ram,0x00014dba9506) */

undefined8 FUN_14dba92c9(void)

{
  longlong unaff_RSI;
  
  LOCK();
  *(int *)(unaff_RSI + 8) = *(int *)(unaff_RSI + 8) + -1;
  UNLOCK();
  return 0;
}



// FUNCTION 14dba93d5 FUN_14dba93d5 body=345 status=ok
// SIG undefined FUN_14dba93d5(void)

/* WARNING: Removing unreachable block (ram,0x0001625eae83) */
/* WARNING: Removing unreachable block (ram,0x0001625eae89) */
/* WARNING: Removing unreachable block (ram,0x000165436ac4) */
/* WARNING: Removing unreachable block (ram,0x000165436acf) */
/* WARNING: Removing unreachable block (ram,0x000165436b56) */
/* WARNING: Removing unreachable block (ram,0x000165436b5c) */
/* WARNING: Removing unreachable block (ram,0x000165436b61) */
/* WARNING: Removing unreachable block (ram,0x0001625eae0c) */
/* WARNING: Removing unreachable block (ram,0x0001658c1a0e) */
/* WARNING: Removing unreachable block (ram,0x0001658c1a8e) */
/* WARNING: Removing unreachable block (ram,0x00016538648e) */
/* WARNING: Removing unreachable block (ram,0x0001658c1a9a) */
/* WARNING: Removing unreachable block (ram,0x0001658c1b1e) */
/* WARNING: Removing unreachable block (ram,0x0001658c1b23) */
/* WARNING: Removing unreachable block (ram,0x0001658c1b29) */
/* WARNING: Removing unreachable block (ram,0x0001658c1b2e) */
/* WARNING: Removing unreachable block (ram,0x000165436aca) */
/* WARNING: Removing unreachable block (ram,0x00014dba948f) */
/* WARNING: Removing unreachable block (ram,0x00014dba9506) */
/* WARNING: Removing unreachable block (ram,0x000165436a29) */
/* WARNING: Removing unreachable block (ram,0x000165436a2f) */
/* WARNING: Removing unreachable block (ram,0x0001564c40e5) */
/* WARNING: Removing unreachable block (ram,0x00014dba9467) */
/* WARNING: Removing unreachable block (ram,0x00014dba94fb) */
/* WARNING: Removing unreachable block (ram,0x00014dba9500) */

undefined8 FUN_14dba93d5(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  ushort uVar5;
  undefined8 unaff_R14;
  ushort local_res8;
  ulonglong local_res10;
  
  uVar3 = *(ulonglong *)(unaff_RDI + -0xa0);
  uVar1 = *(ulonglong *)(unaff_RDI + -8) ^ param_1;
  uVar2 = local_res10 ^ param_1;
  local_res8 = (ushort)uVar1;
  uVar5 = (local_res8 | 0x100) - 0x100;
  uVar1 = uVar1 >> 0x10;
  syscall();
  *(undefined8 *)(uVar2 - 8) = unaff_R14;
  *(undefined8 *)(uVar2 - 0x10) = unaff_R14;
  *(ulonglong *)(uVar2 - 0x18) =
       (ulonglong)((uVar5 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar5 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar5 & 0x400) != 0) * 0x400 | (ulonglong)((uVar5 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar5 & 0x100) != 0) * 0x100 | (ulonglong)((uVar5 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar5 & 0x40) != 0) * 0x40 | (ulonglong)((uVar5 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar5 & 4) != 0) * 4 | (ulonglong)((uVar5 & 1) != 0) |
       (ulonglong)((uVar1 & 0x20) != 0) * 0x200000 | (ulonglong)((uVar1 & 4) != 0) * 0x40000;
  *(undefined8 *)(uVar2 - 0x20) = unaff_RBP;
  *(undefined8 *)(uVar2 - 0x18) = unaff_RSI;
  *(undefined8 *)(uVar2 - 8) = 0x343f68;
  uVar4 = *(undefined8 *)(uVar2 - 0x10);
  *(undefined8 *)(uVar2 - 0x10) = unaff_RBX;
  *(undefined8 *)(uVar2 - 0x18) = unaff_RBX;
  *(undefined8 *)(uVar2 - 0x20) = uVar4;
  *(undefined8 *)(uVar2 - 0x28) = in_RAX;
  *(ulonglong *)(uVar2 - 0x30) = uVar3 + param_1 + (uVar3 & param_1) * -2;
  *(code **)(uVar2 - 0x10) = FUN_165c7153c;
  return *(undefined8 *)(uVar2 - 0x28);
}



// FUNCTION 14dba952f FUN_14dba952f body=126 status=ok
// SIG undefined FUN_14dba952f(void)

/* WARNING: Removing unreachable block (ram,0x000160d374b2) */
/* WARNING: Removing unreachable block (ram,0x000160d374b8) */
/* WARNING: Removing unreachable block (ram,0x00014dba95af) */
/* WARNING: Removing unreachable block (ram,0x00014dba9599) */

void FUN_14dba952f(undefined1 param_1,longlong param_2)

{
  if (param_2 == 0x115ac3) {
    FUN_1662eee07(param_1,&DAT_14d7a2ce4);
    return;
  }
  if (param_2 == 0x115ac4) {
    FUN_160d3742e();
    return;
  }
  if (param_2 != 0x115ac5) {
    FUN_1568579cf();
    return;
  }
  return;
}



// FUNCTION 14dba95af FUN_14dba95af body=277 status=ok
// SIG undefined FUN_14dba95af(void)

void FUN_14dba95af(void)

{
  (*(code *)0x166c4303d)();
  return;
}



// FUNCTION 14dba9649 FUN_14dba9649 body=1347 status=ok
// SIG undefined FUN_14dba9649(void)

/* WARNING: Removing unreachable block (ram,0x00014dba96d3) */
/* WARNING: Removing unreachable block (ram,0x00014dba96d9) */
/* WARNING: Removing unreachable block (ram,0x0001616ae603) */
/* WARNING: Removing unreachable block (ram,0x0001616ae688) */
/* WARNING: Removing unreachable block (ram,0x0001616ae68e) */
/* WARNING: Removing unreachable block (ram,0x00014d890450) */
/* WARNING: Removing unreachable block (ram,0x00014dba9771) */
/* WARNING: Removing unreachable block (ram,0x00014dba9777) */

void FUN_14dba9649(void)

{
  longlong unaff_R13;
  
  FUN_161df40d8(*(undefined8 *)(unaff_R13 + -8),FUN_161df40d8);
  return;
}



// FUNCTION 14dba98c4 FUN_14dba98c4 body=163 status=ok
// SIG undefined FUN_14dba98c4(void)

/* WARNING: Removing unreachable block (ram,0x00014dba992c) */
/* WARNING: Removing unreachable block (ram,0x0001648ccf4a) */
/* WARNING: Removing unreachable block (ram,0x00014dba9950) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dba98c4(void)

{
  longlong unaff_R13;
  
  if (*(longlong *)(unaff_R13 + -8) == 0) {
    thunk_FUN_160c78159();
    return;
  }
  thunk_FUN_160c78159();
  return;
}



// FUNCTION 14dba9a6c FUN_14dba9a6c body=36 status=ok
// SIG undefined FUN_14dba9a6c(void)

void FUN_14dba9a6c(void)

{
  return;
}



// FUNCTION 14dba9b03 FUN_14dba9b03 body=754 status=ok
// SIG undefined FUN_14dba9b03(void)

/* WARNING: Removing unreachable block (ram,0x0001629d724f) */
/* WARNING: Removing unreachable block (ram,0x0001629d7255) */
/* WARNING: Removing unreachable block (ram,0x0001629d71d0) */
/* WARNING: Removing unreachable block (ram,0x0001629d724a) */
/* WARNING: Removing unreachable block (ram,0x000166d96560) */
/* WARNING: Removing unreachable block (ram,0x000166d96566) */
/* WARNING: Removing unreachable block (ram,0x000156fc281e) */
/* WARNING: Removing unreachable block (ram,0x000166d9652f) */
/* WARNING: Removing unreachable block (ram,0x000164be0ad6) */
/* WARNING: Removing unreachable block (ram,0x000164be0b74) */
/* WARNING: Removing unreachable block (ram,0x000164be0b78) */
/* WARNING: Removing unreachable block (ram,0x000156fc2869) */
/* WARNING: Removing unreachable block (ram,0x000156fc28c7) */
/* WARNING: Removing unreachable block (ram,0x000156fc28cd) */
/* WARNING: Removing unreachable block (ram,0x00014e14482f) */
/* WARNING: Removing unreachable block (ram,0x0001627c5a97) */
/* WARNING: Removing unreachable block (ram,0x0001627c5a9d) */
/* WARNING: Removing unreachable block (ram,0x0001627c5ab9) */
/* WARNING: Removing unreachable block (ram,0x00014dba9c81) */
/* WARNING: Removing unreachable block (ram,0x00014dba9d42) */
/* WARNING: Removing unreachable block (ram,0x00014dba9cc0) */
/* WARNING: Removing unreachable block (ram,0x00014dba9d46) */
/* WARNING: Removing unreachable block (ram,0x0001627c595a) */

undefined8 FUN_14dba9b03(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  ulonglong in_RAX;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong unaff_RBX;
  longlong unaff_R12;
  ulonglong in_stack_00000008;
  ulonglong in_stack_00000010;
  
  uVar5 = CONCAT71((int7)(param_1 >> 8),0xbf) ^ 0xbe;
  bVar3 = (byte)uVar5 & 0x3f;
  bVar1 = (uVar5 & 0x3f) == 0;
  bVar2 = -1 < (longlong)((in_stack_00000010 & param_1) << bVar3 - 1);
  if ((!bVar1 && !bVar2) && (bVar1 || bVar2)) {
    FUN_162dfd6b9(uVar5,unaff_RBX - param_4,*(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,
                  unaff_RBX - param_4,in_stack_00000008 ^ param_1,
                  (in_stack_00000010 & param_1) << bVar3);
    uVar4 = FUN_1627c595a();
    return uVar4;
  }
  uVar4 = FUN_1573c7ecf(param_1,param_2,param_3,param_4);
  return uVar4;
}



// FUNCTION 14dba9e00 FUN_14dba9e00 body=597 status=ok
// SIG undefined FUN_14dba9e00(void)

/* WARNING: Instruction at (ram,0x00014dba9f3d) overlaps instruction at (ram,0x00014dba9f3a)
    */
/* WARNING: Removing unreachable block (ram,0x00014dba9e96) */
/* WARNING: Removing unreachable block (ram,0x00014dba9e9c) */
/* WARNING: Removing unreachable block (ram,0x00014dba9f3a) */
/* WARNING: Removing unreachable block (ram,0x00014dba9f31) */
/* WARNING: Removing unreachable block (ram,0x00014dba9f3d) */
/* WARNING: Removing unreachable block (ram,0x00014dba9f42) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffff8 : 0x00014e053032 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dba9e00(uint param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  uint unaff_EBX;
  
  FUN_15af564b9((~((unaff_EBX ^ 0xffffffff) & param_1) + param_1) - (-1 - (unaff_EBX ^ 0xffffffff))
                & ~((~param_4 - (~(param_1 ^ 0xffffffff) | ~param_4)) + ~(param_1 ^ 0xffffffff)) ^
                0xffffffff);
  return;
}



// FUNCTION 14dba9fbe FUN_14dba9fbe body=194 status=ok
// SIG undefined FUN_14dba9fbe(void)

void FUN_14dba9fbe(undefined8 param_1,undefined8 param_2)

{
  FUN_16661618d(param_1,param_2,ProcessEnvironmentBlock,FUN_16661618d);
  return;
}



// FUNCTION 14dbaa083 FUN_14dbaa083 body=299 status=ok
// SIG undefined FUN_14dbaa083(void)

/* WARNING: Instruction at (ram,0x00014dbaa2ba) overlaps instruction at (ram,0x00014dbaa2b9)
    */
/* WARNING: Removing unreachable block (ram,0x00014dbaa25e) */
/* WARNING: Removing unreachable block (ram,0x00014dbaa2b9) */
/* WARNING: Removing unreachable block (ram,0x00014dbaa2be) */
/* WARNING: Removing unreachable block (ram,0x00014dbaa2ba) */
/* WARNING: Removing unreachable block (ram,0x00014dbaa1b1) */
/* WARNING: Removing unreachable block (ram,0x00014dbaa253) */
/* WARNING: Removing unreachable block (ram,0x00014dbaa24e) */

void FUN_14dbaa083(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_R12;
  ulonglong in_stack_00000038;
  
  uVar3 = FUN_16198a69f();
  uVar1 = *(ulonglong *)(unaff_R12 + 8);
  *(ulonglong *)(unaff_R12 + 8) = ~*(ulonglong *)(unaff_R12 + 8);
  *(ulonglong *)(unaff_R12 + 8) = *(ulonglong *)(unaff_R12 + 8) | uVar3;
  uVar2 = *(ulonglong *)(unaff_R12 + 8);
  *(undefined8 *)(unaff_R12 + 8) = 0;
  *(longlong *)(unaff_R12 + 8) =
       *(longlong *)(unaff_R12 + 8) - ~((uVar3 ^ 0xffffffffffffffff | uVar1) & uVar2);
  *(longlong *)(unaff_R12 + 8) = -*(longlong *)(unaff_R12 + 8);
  in_stack_00000038 = in_stack_00000038 ^ uVar3;
  if (-1 < (longlong)&stack0x00000030) {
    FUN_156d17fd1();
    return;
  }
  FUN_156d17fd1();
  return;
}



// FUNCTION 14dbaa1b1 FUN_14dbaa1b1 body=266 status=ok
// SIG undefined FUN_14dbaa1b1(void)

/* WARNING: Instruction at (ram,0x00014dbaa2ba) overlaps instruction at (ram,0x00014dbaa2b9)
    */
/* WARNING: Removing unreachable block (ram,0x00014dbaa25e) */
/* WARNING: Removing unreachable block (ram,0x00014dbaa2b9) */
/* WARNING: Removing unreachable block (ram,0x00014dbaa2be) */
/* WARNING: Removing unreachable block (ram,0x00014dbaa2ba) */

void FUN_14dbaa1b1(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if ((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) + unaff_R15 == 0) {
    FUN_160f7698b();
    return;
  }
  FUN_160f7698b();
  return;
}



// FUNCTION 14dbaa5e1 FUN_14dbaa5e1 body=448 status=ok
// SIG undefined FUN_14dbaa5e1(void)

/* WARNING: Removing unreachable block (ram,0x00014dbaa689) */
/* WARNING: Removing unreachable block (ram,0x00014dbaa68f) */
/* WARNING: Removing unreachable block (ram,0x00014dbaa653) */

void FUN_14dbaa5e1(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x38);
  (*(code *)0x164b524ae)
            ((((unaff_R15 - (uVar1 | unaff_R15)) + uVar1 ^ 0xffffffffffffffff) + unaff_R15) - ~uVar1
             ,param_2,~(*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15 |
                       ~(*(ulonglong *)(unaff_R13 + -0x88) | unaff_R15)),
             *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14dbaa720 FUN_14dbaa720 body=181 status=ok
// SIG undefined FUN_14dbaa720(void)

void FUN_14dbaa720(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lStack_10;
  uint auStack_8 [2];
  
  plVar1 = (longlong *)(&stack0x00000000 + param_1);
  puVar2 = (uint *)(plVar1 + -1);
  *puVar2 = 0x6e10369b;
  *puVar2 = *puVar2 ^ 0x6e10369b;
  *(undefined4 *)((longlong)plVar1 + -4) = 0;
  *(undefined4 *)((longlong)plVar1 + -4) = *(undefined4 *)((longlong)plVar1 + -4);
  lVar3 = *(longlong *)puVar2;
  puVar2 = (uint *)(plVar1 + -1);
  *puVar2 = 0xeb319332;
  *puVar2 = ~*puVar2;
  *puVar2 = *puVar2 + 2;
  *puVar2 = -*puVar2;
  *puVar2 = *puVar2 + 0x17469b3a;
  *(undefined4 *)((longlong)plVar1 + -4) = 0;
  lVar4 = *(longlong *)puVar2;
  plVar1[-1] = -(lVar3 - *plVar1);
  plVar1[-2] = -(lVar3 - *plVar1);
  plVar1[-1] = (longlong)&LAB_14dbaa7d7;
  FUN_166d13784(lVar4 + -0x2782e63,plVar1[-2],param_3,FUN_166d13784);
  return;
}



// FUNCTION 14dbaa90f FUN_14dbaa90f body=134 status=ok
// SIG undefined FUN_14dbaa90f(void)

/* WARNING: Removing unreachable block (ram,0x00014dbaa998) */

void FUN_14dbaa90f(ulonglong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong unaff_retaddr;
  uint uVar4;
  
  if (unaff_retaddr == -0x45a3e6dc) {
    return;
  }
  uVar3 = -~param_1 - (~(param_1 >> 0x21) + 2);
  param_1 = param_1 >> 0x21 & param_1;
  if (param_1 * 2 <= uVar3) {
    uVar3 = (uVar3 + param_1 * -2) * param_3;
    uVar4 = (uint)(uVar3 >> 0x3d) | (uint)((uVar3 << 0x23) >> 0x20);
    uVar2 = 7 - (uVar4 | 7);
    bVar1 = ((byte)(uVar3 >> 0x1d) & 0x1f) % 9;
    FUN_1628a28c3(CONCAT44(uVar2 + uVar4,(int)(uVar3 >> 0x1d)) ^ uVar3,0xfffffffffffffff8,
                  (byte)(CONCAT11(CARRY4(uVar2,uVar4),(char)param_3) >> bVar1) |
                  (char)param_3 << 9 - bVar1,param_4);
    return;
  }
  FUN_164ef7793();
  return;
}



// FUNCTION 14dbaa998 FUN_14dbaa998 body=116 status=ok
// SIG undefined FUN_14dbaa998(void)

void FUN_14dbaa998(void)

{
  longlong lVar1;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R13;
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
  ulonglong uVar2;
  longlong unaff_retaddr;
  
  *(undefined8 *)(unaff_retaddr + -8) = unaff_RDI;
  *(undefined8 *)(unaff_retaddr + -0x10) = unaff_RDI;
  *(ulonglong *)(unaff_retaddr + -0x18) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_OF & 1) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)(in_SF & 1) * 0x80 | (ulonglong)(in_ZF & 1) * 0x40 | (ulonglong)(in_AF & 1) * 0x10
       | (ulonglong)(in_PF & 1) * 4 | (ulonglong)(in_CF & 1) | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  *(undefined8 *)(unaff_retaddr + -0x20) = 0xf23e0b1;
  uVar2 = *(ulonglong *)(unaff_retaddr + -0x20);
  lVar1 = *(longlong *)(unaff_retaddr + -0x20);
  *(longlong *)(unaff_retaddr + -0x20) = *(longlong *)(unaff_retaddr + -0x20) + -0xe41b5c7;
  *(ulonglong *)(unaff_retaddr + -0x20) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW8(lVar1,0xe41b5c7) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)(*(longlong *)(unaff_retaddr + -0x20) < 0) * 0x80 |
       (ulonglong)(*(longlong *)(unaff_retaddr + -0x20) == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10
       | (ulonglong)((POPCOUNT(*(ulonglong *)(unaff_retaddr + -0x20) & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(uVar2 < 0xe41b5c7) | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  uVar2 = *(ulonglong *)(unaff_retaddr + -0x18);
  *(undefined8 *)(unaff_retaddr + -0x18) = unaff_R13;
  *(undefined8 *)(unaff_retaddr + -0x20) = in_R10;
  *(ulonglong *)(unaff_retaddr + -0x28) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(unaff_retaddr + -8) = 0xe22aea;
  *(undefined8 *)(unaff_retaddr + -0x10) = unaff_RBX;
  *(undefined8 *)(unaff_retaddr + -0x18) = unaff_RBX;
  *(undefined8 *)(unaff_retaddr + -0x10) = 0x156ef2e25;
  return;
}



// FUNCTION 14dbaaa2c FUN_14dbaaa2c body=199 status=ok
// SIG undefined FUN_14dbaaa2c(void)

/* WARNING: Removing unreachable block (ram,0x00014dbaaaf5) */

void FUN_14dbaaa2c(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (*(ulonglong *)(unaff_R13 + -0x68) + unaff_R15 +
      (*(ulonglong *)(unaff_R13 + -0x68) & unaff_R15) * -2 != 0) {
    FUN_1646fee7b();
    return;
  }
  FUN_1646fee7b();
  return;
}



// FUNCTION 14dbaaaf5 FUN_14dbaaaf5 body=158 status=ok
// SIG undefined FUN_14dbaaaf5(void)

void FUN_14dbaaaf5(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_165409edd(param_1,FUN_165409edd,
                (~(*(ulonglong *)(unaff_RDI + -0x30) & param_1) + param_1) -
                ~*(ulonglong *)(unaff_RDI + -0x30));
  return;
}



// FUNCTION 14dbaab94 FUN_14dbaab94 body=191 status=ok
// SIG undefined FUN_14dbaab94(void)

/* WARNING: Removing unreachable block (ram,0x00014dbaac27) */
/* WARNING: Removing unreachable block (ram,0x00014dbaac32) */
/* WARNING: Removing unreachable block (ram,0x00014dbaac2d) */

void FUN_14dbaab94(void)

{
  undefined8 unaff_retaddr;
  
  FUN_165393785(unaff_retaddr);
  return;
}



// FUNCTION 14dbaadf1 FUN_14dbaadf1 body=157 status=ok
// SIG undefined FUN_14dbaadf1(void)

void FUN_14dbaadf1(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_166719385(in_RAX - (*(ulonglong *)(unaff_R12 + -0x80) | in_RAX));
  return;
}



// FUNCTION 14dbaae8f FUN_14dbaae8f body=158 status=ok
// SIG undefined FUN_14dbaae8f(void)

void FUN_14dbaae8f(void)

{
  FUN_16674c351();
  return;
}



// FUNCTION 14dbaaff1 FUN_14dbaaff1 body=754 status=ok
// SIG undefined FUN_14dbaaff1(void)

/* WARNING: Removing unreachable block (ram,0x0001626fc8b4) */
/* WARNING: Removing unreachable block (ram,0x0001626fc8ba) */
/* WARNING: Removing unreachable block (ram,0x0001626fc8f8) */
/* WARNING: Removing unreachable block (ram,0x00014dbab0b9) */
/* WARNING: Removing unreachable block (ram,0x00014dbab09a) */

void FUN_14dbaaff1(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  ulonglong param_5)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 in_RAX;
  undefined8 uVar5;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R13;
  undefined8 local_res8;
  
  param_5 = param_5 ^ param_1;
  plVar1 = (longlong *)(param_5 - 8);
  *plVar1 = 0;
  *plVar1 = *plVar1 - unaff_RDI;
  *plVar1 = -*plVar1;
  *(undefined8 *)(param_5 - 0x10) = unaff_RSI;
  *(undefined8 *)(param_5 - 0x18) = unaff_RSI;
  uVar3 = *(undefined8 *)(param_5 - 8);
  *(undefined8 *)(param_5 - 0x20) = unaff_R13;
  *(undefined8 *)(param_5 - 0x28) = in_R10;
  *(undefined8 *)(param_5 - 0x10) = uVar3;
  uVar3 = *(undefined8 *)(param_5 - 0x18);
  *(undefined8 *)(param_5 - 0x18) = in_RAX;
  *(undefined1 **)(param_5 - 8) = &LAB_161a69871;
  lVar4 = *(longlong *)(param_5 - 0x10);
  *(undefined8 *)(param_5 - 0x10) = local_res8;
  *(undefined8 *)(param_5 - 0x18) = local_res8;
  puVar2 = (ulonglong *)(param_5 - 0x20);
  *puVar2 = 0x5881fb9a;
  *puVar2 = *puVar2 ^ 0x5881fb9a;
  *puVar2 = *puVar2 + param_4;
  *(code **)(param_5 - 0x10) = thunk_FUN_15b642ca5;
  *(undefined8 *)(param_5 - 0x20) = 0x1626fc824;
  uVar5 = FUN_161a6984e();
  *(undefined8 *)(param_5 - 0x18) = uVar5;
  *(undefined8 *)(param_5 - 0x20) = uVar3;
  *(undefined8 *)(param_5 - 0x18) = *(undefined8 *)(lVar4 + -0x60);
  *(undefined8 *)(param_5 - 0x18) = 0x165a62dee;
  return;
}



// FUNCTION 14dbab39b FUN_14dbab39b body=175 status=ok
// SIG undefined FUN_14dbab39b(void)

void FUN_14dbab39b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_retaddr;
  
  FUN_1615731fd(param_1,unaff_retaddr,param_3,param_4);
  return;
}



// FUNCTION 14dbab44b FUN_14dbab44b body=519 status=ok
// SIG undefined FUN_14dbab44b(void)

/* WARNING: Removing unreachable block (ram,0x00014ddb6059) */
/* WARNING: Removing unreachable block (ram,0x00014ddb605f) */

void FUN_14dbab44b(void)

{
  ulonglong in_R9;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  
  if (unaff_R14 == ~(~(unaff_R15 & 0xfffffffffa220278) & (unaff_R15 | 0xfffffffffa220278))) {
    return;
  }
  if (in_R9 == 0x131812) {
    FUN_165e93f27();
    return;
  }
  if ((in_R9 < 0x131813) && (0x131813 < in_R9)) {
    FUN_1574ba9da();
    return;
  }
  if (in_R9 == 0x131813) {
    FUN_165e93f27();
    return;
  }
  if (in_R9 != 0x131814) {
    if (in_R9 == 0x131815) {
      return;
    }
    if (in_R9 != 0x131886) {
      if (in_R9 == 0x131887) {
        FUN_165e93f27();
        return;
      }
      FUN_1668420be();
      return;
    }
    FUN_165e93f27();
    return;
  }
  FUN_165e93f27();
  return;
}



// FUNCTION 14dbab534 FUN_14dbab534 body=67 status=ok
// SIG undefined FUN_14dbab534(void)

void FUN_14dbab534(void)

{
  longlong unaff_R14;
  
  if (unaff_R14 != 0xd9b7f) {
    return;
  }
  FUN_1574ba9da();
  return;
}



// FUNCTION 14dbab634 FUN_14dbab634 body=159 status=ok
// SIG undefined FUN_14dbab634(void)

void FUN_14dbab634(void)

{
  longlong unaff_RSI;
  ulonglong unaff_R14;
  
  (*(code *)0x1629b8a1b)
            (~((unaff_R14 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_RSI + -0x60)) &
              (~*(ulonglong *)(unaff_RSI + -0x60) | unaff_R14)),*(undefined8 *)(unaff_RSI + -0x30));
  return;
}



// FUNCTION 14dbab7e8 FUN_14dbab7e8 body=149 status=ok
// SIG undefined FUN_14dbab7e8(void)

void FUN_14dbab7e8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 unaff_retaddr;
  undefined8 *local_res10;
  
  pcVar1 = (code *)swi(0x2e);
  uVar2 = (*pcVar1)();
  *local_res10 = unaff_retaddr;
  local_res10[-1] = unaff_retaddr;
  local_res10[-2] = uVar2;
  *(undefined4 *)(local_res10 + -2) = 0xd4a625d;
  *(undefined4 *)((longlong)local_res10 + -0xc) = 0;
  local_res10[-3] = 0x166203346;
  return;
}



// FUNCTION 14dbab87e FUN_14dbab87e body=746 status=ok
// SIG undefined FUN_14dbab87e(void)

/* WARNING: Removing unreachable block (ram,0x00014dbab8f5) */
/* WARNING: Removing unreachable block (ram,0x00014dbab8fb) */
/* WARNING: Removing unreachable block (ram,0x00014dbab992) */
/* WARNING: Removing unreachable block (ram,0x00014dbab9a3) */
/* WARNING: Removing unreachable block (ram,0x00014dbaba31) */
/* WARNING: Removing unreachable block (ram,0x00014dbaba36) */
/* WARNING: Removing unreachable block (ram,0x00014dbaba3c) */
/* WARNING: Removing unreachable block (ram,0x0001567fa64d) */
/* WARNING: Removing unreachable block (ram,0x0001567fa674) */
/* WARNING: Removing unreachable block (ram,0x0001567fa67b) */
/* WARNING: Removing unreachable block (ram,0x00014dbab998) */
/* WARNING: Removing unreachable block (ram,0x00014dbab98d) */
/* WARNING: Removing unreachable block (ram,0x00015b822ae8) */
/* WARNING: Removing unreachable block (ram,0x0001567fa6cf) */
/* WARNING: Removing unreachable block (ram,0x0001567fa6d2) */
/* WARNING: Removing unreachable block (ram,0x0001567fa6db) */
/* WARNING: Removing unreachable block (ram,0x0001567fa6e0) */
/* WARNING: Removing unreachable block (ram,0x0001567fa6e6) */
/* WARNING: Removing unreachable block (ram,0x000161945fb0) */

undefined8 FUN_14dbab87e(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar3 = 0xffffffffffffffff - unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78);
  uVar2 = ~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15;
  uVar1 = FUN_157223df3((uVar2 - (uVar3 | uVar2)) + uVar3 ^ 0xffffffffffffffff,
                        *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return uVar1;
}



// FUNCTION 14dbabc52 FUN_14dbabc52 body=161 status=ok
// SIG undefined FUN_14dbabc52(void)

void FUN_14dbabc52(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_156fe06d3(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dbabe0a FUN_14dbabe0a body=36 status=ok
// SIG undefined FUN_14dbabe0a(void)

undefined8 FUN_14dbabe0a(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dbabeb4 FUN_14dbabeb4 body=154 status=ok
// SIG undefined FUN_14dbabeb4(void)

ulonglong FUN_14dbabeb4(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return *(ulonglong *)(unaff_RDI + -0x80) ^ param_1;
}



// FUNCTION 14dbabf5a FUN_14dbabf5a body=539 status=ok
// SIG undefined FUN_14dbabf5a(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbabf5a(ulonglong param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 uVar6;
  undefined8 in_R10;
  ushort in_R11W;
  short *unaff_R12;
  ushort local_res10;
  
  *(undefined8 *)(param_5 + -8) = in_R10;
  *(undefined8 *)(param_5 + -0x10) = unaff_RSI;
  *(undefined8 *)(param_5 + -0x18) = 0x14dbac011;
  FUN_157531bc7();
  *(undefined8 *)(param_5 + -0x10) = param_4;
  uVar6 = *(undefined8 *)(param_5 + -8);
  *(longlong *)(param_5 + -0x10) = param_5 + -8;
  puVar2 = *(ulonglong **)(param_5 + -0x10);
  if (((ulonglong)param_2 & (param_3 >> 1 ^ param_3 << 0x3f)) == 0) {
    *param_2 = uVar6;
    thunk_FUN_166485e23();
    return;
  }
  uVar5 = (longlong)param_2 << 1 | (ulonglong)((longlong)param_2 < 0);
  *puVar2 = (-2 - (uVar5 | 0xfffffffffffffffe)) + uVar5;
  uVar5 = *puVar2;
  *puVar2 = param_1;
  uVar5 = uVar5 >> 1;
  uVar3 = *puVar2;
  *puVar2 = 0x14dbac090;
  uVar4 = FUN_161675eec(uVar3,uVar5,uVar6,FUN_161675eec);
  puVar2[2] = uVar6;
  puVar2[2] = unaff_RBP;
  *unaff_R12 = (-0x101 - (local_res10 | in_R11W)) + *unaff_R12;
  lVar1 = puVar2[6];
  *(ulonglong *)(lVar1 + -8) = puVar2[4];
  *(undefined8 *)(lVar1 + -0x10) = uVar4;
  *(undefined8 *)(lVar1 + -0x18) = uVar4;
  *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(lVar1 + -8);
  *(undefined1 **)(lVar1 + -8) = &LAB_1572d660b;
  *(ulonglong *)(lVar1 + -0x10) = uVar5;
  *(ulonglong *)(lVar1 + -0x18) = uVar5;
  (*(code *)0x1572d6590)();
  return;
}



// FUNCTION 14dbac114 FUN_14dbac114 body=167 status=ok
// SIG undefined FUN_14dbac114(void)

undefined8 FUN_14dbac114(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dbac1bb FUN_14dbac1bb body=164 status=ok
// SIG undefined FUN_14dbac1bb(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014dbac2e2) */

void FUN_14dbac1bb(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 in_RAX;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  ulonglong in_R11;
  undefined8 unaff_R15;
  float10 in_ST0;
  longlong local_res8;
  
  puVar2 = (undefined8 *)(&stack0xfffffffffac03b5d + local_res8);
  *puVar2 = unaff_R15;
  puVar2[-1] = in_RAX;
  uVar8 = *(ulonglong *)(&stack0xfffffffffac03b75 + local_res8);
  lVar4 = *(longlong *)(&stack0xfffffffffac03b75 + local_res8);
  *(ulonglong *)(&stack0xfffffffffac03b75 + local_res8) =
       ~*(ulonglong *)(&stack0xfffffffffac03b75 + local_res8);
  *(ulonglong *)(&stack0xfffffffffac03b75 + local_res8) =
       *(ulonglong *)(&stack0xfffffffffac03b75 + local_res8) | param_1;
  uVar5 = *(ulonglong *)(&stack0xfffffffffac03b75 + local_res8);
  puVar2[-1] = param_2;
  *(ulonglong *)(&stack0xfffffffffac03b75 + local_res8) =
       (((param_1 ^ 0xffffffffffffffff) & uVar8 ^ 0xffffffffffffffff) + lVar4) -
       ~(param_1 ^ 0xffffffffffffffff) & uVar5 ^ 0xffffffffffffffff;
  uVar10 = puVar2[-1];
  puVar2[1] = unaff_RDI;
  uVar8 = puVar2[4];
  puVar2[4] = puVar2[4] & param_1;
  puVar2[4] = ~puVar2[4];
  puVar2[4] = puVar2[4] & (uVar8 | param_1);
  lVar9 = puVar2[2];
  puVar2[2] = param_3;
  puVar2[1] = param_4;
  *puVar2 = FUN_14dbac25f;
  uVar8 = FUN_164c4bec7();
  puVar2[5] = puVar2[5] & uVar8;
  puVar2[5] = ~puVar2[5];
  puVar2[5] = puVar2[5] & (~(in_R11 & uVar8) + uVar8) - ~in_R11;
  plVar3 = puVar2 + 3;
  *plVar3 = *plVar3;
  puVar2[2] = puVar2[1];
  *(ushort *)(puVar2 + 4) = (*(ushort *)(puVar2 + 4) | 0x100) - 0x100;
  uVar6 = puVar2[2];
  lVar7 = *plVar3;
  uVar8 = puVar2[4];
  lVar4 = puVar2[5];
  *(undefined8 *)(lVar4 + -8) = uVar10;
  if ((uVar8 & 0x40) != 0) {
    FUN_165d75b71();
    return;
  }
  *(undefined8 *)(lVar4 + -0x10) = *(undefined8 *)(lVar4 + -8);
  *(undefined8 *)(lVar4 + -8) = 0;
  *(undefined1 **)(lVar4 + -8) = &LAB_165d75bb8 + *(longlong *)(lVar4 + -8);
  uVar10 = *(undefined8 *)(lVar4 + -0x10);
  if (lVar9 == 1) {
    LOCK();
    *(int *)(unaff_RSI + 0x1c7e9) = (int)uVar6;
    UNLOCK();
    *(float *)(unaff_RSI + 0x8a2ea9 + (ulonglong)*(uint *)(unaff_RSI + -0x60ffdbf2) * 2) =
         (float)in_ST0;
    if ('\0' < (char)((byte)lVar7 | 0x61)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(longlong *)(lVar4 + -0x10) = lVar4 + -8;
    FUN_14d7a99eb(0,uVar10);
    return;
  }
  pcVar1 = (char *)(lVar7 + -0x73);
  *pcVar1 = *pcVar1 + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dbac25f FUN_14dbac25f body=130 status=ok
// SIG undefined FUN_14dbac25f(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014dbac2e2) */

void FUN_14dbac25f(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong in_RAX;
  longlong unaff_RSI;
  ulonglong in_R11;
  float10 in_ST0;
  undefined4 unaff_retaddr;
  longlong local_res10;
  short local_res18;
  ulonglong local_res20;
  
  uVar1 = ~(local_res20 & in_RAX) & (~(in_R11 & in_RAX) + in_RAX) - ~in_R11;
  *(undefined8 *)(uVar1 - 8) = param_2;
  if ((local_res18 - 0x100U & 0x40) != 0) {
    FUN_165d75b71();
    return;
  }
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 8) = 0;
  *(undefined1 **)(uVar1 - 8) = &LAB_165d75bb8 + *(longlong *)(uVar1 - 8);
  uVar2 = *(undefined8 *)(uVar1 - 0x10);
  if (param_1 == 1) {
    LOCK();
    *(undefined4 *)(unaff_RSI + 0x1c7e9) = unaff_retaddr;
    UNLOCK();
    *(float *)(unaff_RSI + 0x8a2ea9 + (ulonglong)*(uint *)(unaff_RSI + -0x60ffdbf2) * 2) =
         (float)in_ST0;
    if ('\0' < (char)((byte)local_res10 | 0x61)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(ulonglong *)(uVar1 - 0x10) = uVar1 - 8;
    FUN_14d7a99eb(0,uVar2);
    return;
  }
  *(char *)(local_res10 + -0x73) = *(char *)(local_res10 + -0x73) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dbac2e2 FUN_14dbac2e2 body=161 status=ok
// SIG undefined FUN_14dbac2e2(void)

void FUN_14dbac2e2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong uStack_8;
  
  *(ulonglong *)(&stack0x00000008 + unaff_RDI) = *(ulonglong *)(unaff_R13 + -0x28);
  uVar1 = *(ulonglong *)(&stack0x00000008 + unaff_RDI);
  *(longlong *)(&stack0x00000008 + unaff_RDI) = unaff_R13;
  *(undefined8 *)(&stack0x00000000 + unaff_RDI) = param_3;
  *(undefined8 *)((longlong)&uStack_8 + unaff_RDI) = param_3;
  *(undefined **)(&stack0x00000000 + unaff_RDI) = &DAT_14dbac384;
  FUN_14e15dcc5(param_1,~((~unaff_R15 | uVar1) & (0xffffffffffffffff - uVar1 | unaff_R15)),
                *(undefined8 *)((longlong)&uStack_8 + unaff_RDI));
  return;
}



// FUNCTION 14dbac49a FUN_14dbac49a body=155 status=ok
// SIG undefined FUN_14dbac49a(void)

/* WARNING: Removing unreachable block (ram,0x00014dbac50d) */

void FUN_14dbac49a(ulonglong param_1)

{
  longlong unaff_RDI;
  
  thunk_FUN_165d43eae(param_1,~((~param_1 | *(ulonglong *)(unaff_RDI + -0x28)) &
                               (~*(ulonglong *)(unaff_RDI + -0x28) | param_1)));
  return;
}



// FUNCTION 14dbac663 FUN_14dbac663 body=152 status=ok
// SIG undefined FUN_14dbac663(void)

void FUN_14dbac663(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  FUN_161880ae2(param_1,FUN_161880ae2,param_3,
                *(ulonglong *)(unaff_RDI + -0x50) + param_1 +
                (*(ulonglong *)(unaff_RDI + -0x50) & param_1) * -2);
  return;
}



// FUNCTION 14dbac701 FUN_14dbac701 body=222 status=ok
// SIG undefined FUN_14dbac701(void)

/* WARNING: Removing unreachable block (ram,0x00014dbac789) */

void FUN_14dbac701(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *in_RAX;
  ulonglong unaff_RBP;
  ulonglong unaff_RSI;
  undefined8 unaff_retaddr;
  ulonglong local_res20;
  
  *in_RAX = ~unaff_RSI;
  if (~(local_res20 & unaff_RBP) + unaff_RBP == ~local_res20) {
    thunk_FUN_166213e97();
    return;
  }
  (*(code *)0x1657007f5)(param_1,param_2,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14dbac8c6 FUN_14dbac8c6 body=606 status=ok
// SIG undefined FUN_14dbac8c6(void)

/* WARNING: Instruction at (ram,0x00014dbaca11) overlaps instruction at (ram,0x00014dbaca10)
    */
/* WARNING: Removing unreachable block (ram,0x00014dbaca62) */
/* WARNING: Removing unreachable block (ram,0x00014dbaca68) */
/* WARNING: Removing unreachable block (ram,0x00014dbac9d5) */
/* WARNING: Removing unreachable block (ram,0x00014dbac9db) */
/* WARNING: Removing unreachable block (ram,0x00014dbac94c) */
/* WARNING: Removing unreachable block (ram,0x00014dbac952) */
/* WARNING: Removing unreachable block (ram,0x00014dbac99d) */
/* WARNING: Removing unreachable block (ram,0x00014dbac9c2) */
/* WARNING: Removing unreachable block (ram,0x00014dbac8d2) */
/* WARNING: Removing unreachable block (ram,0x00014dbac9c7) */
/* WARNING: Removing unreachable block (ram,0x00014dbaca11) */
/* WARNING: Removing unreachable block (ram,0x00014dbaca16) */
/* WARNING: Removing unreachable block (ram,0x0001622cdc8f) */
/* WARNING: Removing unreachable block (ram,0x00014dbac9ca) */
/* WARNING: Removing unreachable block (ram,0x00014dbac9d0) */
/* WARNING: Removing unreachable block (ram,0x00014e0e56c7) */
/* WARNING: Removing unreachable block (ram,0x00014db0a13a) */
/* WARNING: Removing unreachable block (ram,0x00014e0e57ca) */
/* WARNING: Removing unreachable block (ram,0x00014e0e57d0) */
/* WARNING: Removing unreachable block (ram,0x00014e0e57d5) */
/* WARNING: Removing unreachable block (ram,0x0001655e08b8) */
/* WARNING: Removing unreachable block (ram,0x0001655e0941) */
/* WARNING: Removing unreachable block (ram,0x0001667ce242) */
/* WARNING: Removing unreachable block (ram,0x0001655e0947) */

undefined8 FUN_14dbac8c6(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  ulonglong in_stack_00000028;
  
  if ((in_stack_00000028 & 1) != 0) {
    return in_RAX;
  }
  uVar1 = FUN_164c68161();
  return uVar1;
}



// FUNCTION 14dbacb2c FUN_14dbacb2c body=93 status=ok
// SIG undefined FUN_14dbacb2c(void)

void FUN_14dbacb2c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 in_R10;
  undefined8 local_res8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = local_res8;
  *(undefined8 *)(local_res18 + -0x10) = param_1;
  *(undefined8 *)(local_res18 + -0x18) = param_1;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  uVar1 = *(undefined8 *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x18) = in_R10;
  *(undefined1 **)(local_res18 + -8) = &LAB_14dbacba1;
  thunk_FUN_15b642ca5(uVar1);
  return;
}



// FUNCTION 14dbacc7b FUN_14dbacc7b body=189 status=ok
// SIG undefined FUN_14dbacc7b(void)

void FUN_14dbacc7b(ulonglong param_1)

{
  longlong unaff_RDI;
  undefined8 unaff_retaddr;
  
  (*(code *)0x15637a88a)
            (param_1,(~(*(ulonglong *)(unaff_RDI + -0x30) & param_1) + param_1) -
                     ~*(ulonglong *)(unaff_RDI + -0x30),unaff_retaddr,0x2fb6099b);
  return;
}



// FUNCTION 14dbacdc7 FUN_14dbacdc7 body=131 status=ok
// SIG undefined FUN_14dbacdc7(void)

void FUN_14dbacdc7(undefined8 param_1,undefined8 param_2)

{
  undefined2 local_res8;
  
  FUN_165b1a2b7(param_1,param_2,local_res8);
  return;
}



// FUNCTION 14dbace4a FUN_14dbace4a body=310 status=ok
// SIG undefined FUN_14dbace4a(void)

/* WARNING: Removing unreachable block (ram,0x0001667fc2e1) */
/* WARNING: Removing unreachable block (ram,0x0001667fc2e7) */
/* WARNING: Removing unreachable block (ram,0x0001667fc366) */
/* WARNING: Removing unreachable block (ram,0x0001620b3e94) */
/* WARNING: Removing unreachable block (ram,0x0001667fc36c) */
/* WARNING: Removing unreachable block (ram,0x0001667fc38d) */
/* WARNING: Removing unreachable block (ram,0x0001667fc388) */
/* WARNING: Removing unreachable block (ram,0x0001667fc3c5) */
/* WARNING: Removing unreachable block (ram,0x0001667fc3d9) */
/* WARNING: Removing unreachable block (ram,0x0001667fc28b) */
/* WARNING: Removing unreachable block (ram,0x00015b6e03d0) */
/* WARNING: Removing unreachable block (ram,0x00015b6e0434) */
/* WARNING: Removing unreachable block (ram,0x00015b6e045e) */
/* WARNING: Removing unreachable block (ram,0x00014dbacef1) */

undefined8
FUN_14dbace4a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined8 local_res18 [2];
  
  *(undefined8 *)((longlong)local_res18 + unaff_RSI) = unaff_RBP;
  local_res18[0] = *(undefined8 *)(unaff_RDI + -8);
  FUN_14d8199db(param_1,param_2,param_3,param_4);
  uVar1 = FUN_15b6e03d0();
  return uVar1;
}



// FUNCTION 14dbad0b4 FUN_14dbad0b4 body=169 status=ok
// SIG undefined FUN_14dbad0b4(void)

/* WARNING: Removing unreachable block (ram,0x00014dbad149) */
/* WARNING: Removing unreachable block (ram,0x00014dbad14f) */
/* WARNING: Removing unreachable block (ram,0x0001573c61ca) */

void FUN_14dbad0b4(void)

{
  FUN_1573c61ca();
  return;
}



// FUNCTION 14dbad1fc FUN_14dbad1fc body=165 status=ok
// SIG undefined FUN_14dbad1fc(void)

void FUN_14dbad1fc(void)

{
  return;
}



// FUNCTION 14dbad333 FUN_14dbad333 body=483 status=ok
// SIG undefined FUN_14dbad333(void)

/* WARNING: Removing unreachable block (ram,0x00014dbad3d8) */
/* WARNING: Removing unreachable block (ram,0x00014dbad3de) */
/* WARNING: Removing unreachable block (ram,0x0001563437a6) */

void FUN_14dbad333(void)

{
  FUN_1563437a6();
  return;
}



// FUNCTION 14dbad518 FUN_14dbad518 body=43 status=ok
// SIG undefined FUN_14dbad518(void)

void FUN_14dbad518(void)

{
  uint *puVar1;
  ulonglong unaff_RBP;
  uint auStackX_10 [6];
  
  *(undefined4 *)((longlong)auStackX_10 + (unaff_RBP ^ 0x57a6b7fe)) = 0xb8d93695;
  puVar1 = (uint *)((longlong)auStackX_10 + (unaff_RBP ^ 0x57a6b7fe));
  *puVar1 = *puVar1 ^ 0x4726c96a;
  return;
}



// FUNCTION 14dbad543 FUN_14dbad543 body=118 status=ok
// SIG undefined FUN_14dbad543(void)

void FUN_14dbad543(void)

{
  return;
}



// FUNCTION 14dbad6fa FUN_14dbad6fa body=9 status=ok
// SIG undefined FUN_14dbad6fa(void)

void FUN_14dbad6fa(void)

{
  return;
}



// FUNCTION 14dbad852 FUN_14dbad852 body=171 status=ok
// SIG undefined FUN_14dbad852(void)

/* WARNING: Removing unreachable block (ram,0x00014dbad9a5) */
/* WARNING: Removing unreachable block (ram,0x00014dbad9b6) */
/* WARNING: Removing unreachable block (ram,0x00014dbad8fe) */
/* WARNING: Removing unreachable block (ram,0x00014dbad979) */
/* WARNING: Removing unreachable block (ram,0x00014dbad986) */
/* WARNING: Removing unreachable block (ram,0x00014dbad8f8) */
/* WARNING: Removing unreachable block (ram,0x00014dbad99f) */
/* WARNING: Removing unreachable block (ram,0x000162389c18) */
/* WARNING: Removing unreachable block (ram,0x000162389c1b) */
/* WARNING: Removing unreachable block (ram,0x00014dbad9b1) */

void FUN_14dbad852(void)

{
  longlong lVar1;
  ulonglong in_RAX;
  ulonglong unaff_RSI;
  ulonglong in_R9;
  longlong unaff_R12;
  
  lVar1 = *(ulonglong *)(unaff_R12 + -0x58) + in_RAX +
          ~(~*(ulonglong *)(unaff_R12 + -0x58) | ~in_RAX) * -2;
  FUN_16273162a(lVar1,lVar1,*(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,in_R9 & unaff_RSI);
  return;
}



// FUNCTION 14dbad8fe FUN_14dbad8fe body=182 status=ok
// SIG undefined FUN_14dbad8fe(void)

/* WARNING: Removing unreachable block (ram,0x00014dbad9a5) */
/* WARNING: Removing unreachable block (ram,0x00014dbad9b6) */
/* WARNING: Removing unreachable block (ram,0x00014dbad99f) */
/* WARNING: Removing unreachable block (ram,0x000162389c18) */
/* WARNING: Removing unreachable block (ram,0x00014dbad9b1) */

void FUN_14dbad8fe(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_156cf9b67(~(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15),
                *(ulonglong *)(unaff_R13 + -0x48) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x48) & unaff_R15) * -2,
                *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14dbad9b6 FUN_14dbad9b6 body=286 status=ok
// SIG undefined FUN_14dbad9b6(void)

void FUN_14dbad9b6(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_166c6900b(~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
                 (~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15)),
                *(undefined8 *)(unaff_R13 + -0x28));
  return;
}



// FUNCTION 14dbada45 FUN_14dbada45 body=188 status=ok
// SIG undefined FUN_14dbada45(void)

void FUN_14dbada45(void)

{
  return;
}



// FUNCTION 14dbadb02 FUN_14dbadb02 body=15 status=ok
// SIG undefined FUN_14dbadb02(void)

void FUN_14dbadb02(void)

{
  return;
}



// FUNCTION 14dbadb9f FUN_14dbadb9f body=134 status=ok
// SIG undefined FUN_14dbadb9f(void)

void FUN_14dbadb9f(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStackX_8;
  ulonglong in_stack_00000018;
  
  FUN_162076eb7(uStackX_8,&DAT_0000feff,param_3,param_4,in_stack_00000018 ^ param_1);
  return;
}



// FUNCTION 14dbadc27 FUN_14dbadc27 body=486 status=ok
// SIG undefined FUN_14dbadc27(void)

/* WARNING: Removing unreachable block (ram,0x00014dbadcaa) */

void FUN_14dbadc27(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  undefined8 unaff_R13;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uStackX_8;
  undefined8 local_res10;
  undefined2 in_stack_00000020;
  ulonglong in_stack_00000030;
  
  lVar2 = unaff_RBP - ~(unaff_RBP ^ 0xffffffffffffffff | in_stack_00000030);
  *(undefined8 *)(lVar2 + -8) = uStackX_8;
  *(undefined8 *)(lVar2 + -0x10) = unaff_RBX;
  *(undefined8 *)(lVar2 + -0x18) = unaff_RBX;
  *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(lVar2 + -8);
  *(undefined8 *)(lVar2 + -0x18) = unaff_R13;
  *(undefined4 *)(lVar2 + -0x20) = 0x5606e1db;
  *(undefined4 *)(lVar2 + -0x1c) = 0;
  uVar3 = *(ulonglong *)(lVar2 + -0x20) ^ 0x5606e1d3;
  *(undefined8 *)(lVar2 + -0x10 + uVar3) = 0;
  puVar1 = (undefined8 *)(lVar2 + -0x10 + uVar3);
  *puVar1 = *puVar1;
  *(longlong *)(lVar2 + -8) = (longlong)(&DAT_156760737 + *(longlong *)(lVar2 + -8));
  *(undefined8 *)(lVar2 + -0x18) = local_res10;
  *(undefined8 *)(lVar2 + -0x20) = 0x165157918;
  FUN_15676070e();
  *(undefined8 *)(lVar2 + -0x18) = *(undefined8 *)(param_2 + -0x30);
  *(undefined8 *)(lVar2 + -0x18) = 0;
  *(undefined2 *)(lVar2 + -0x18) = in_stack_00000020;
  FUN_16147d479();
  return;
}



// FUNCTION 14dbadd67 FUN_14dbadd67 body=604 status=ok
// SIG undefined FUN_14dbadd67(void)

void FUN_14dbadd67(ulonglong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong unaff_RDI;
  ulonglong unaff_R13;
  uint auStackX_8 [8];
  undefined8 local_8;
  
  local_8 = 0x14dbaddeb;
  FUN_1610ec7b3(param_1,*(ulonglong *)(unaff_RDI + -0x70) | param_1,
                *(ulonglong *)(unaff_RDI + -0x70),
                *(ulonglong *)(unaff_RDI + -0x60) + param_1 +
                (*(ulonglong *)(unaff_RDI + -0x60) & param_1) * -2);
  local_8 = 0x14dbade96;
  lVar3 = FUN_165215a3b();
  plVar1 = (longlong *)((longlong)auStackX_8 + lVar3 + -8);
  *(undefined4 *)plVar1 = 0x6721c4c4;
  *(undefined4 *)((longlong)plVar1 + 4) = 0xba1f231a;
  *(uint *)((longlong)plVar1 + 4) = *(uint *)((longlong)plVar1 + 4) ^ 0x5a315f78;
  lVar3 = *(longlong *)((unaff_R13 ^ param_1) - 0x80);
  *plVar1 = lVar3;
  lVar2 = *plVar1;
  *plVar1 = 0x14dbadf29;
  uVar4 = FUN_1660938d5(lVar2);
  *(uint *)(plVar1 + 1) = ~(uint)lVar3;
  *(undefined4 *)((longlong)plVar1 + 0xc) = 0;
  plVar1[1] = uVar4;
  *plVar1 = (longlong)&local_8;
  *plVar1 = *(longlong *)(lVar2 + -0x30);
  plVar1[1] = 0xffffffffec2de444;
  (*(code *)0x164a4362c)();
  return;
}



// FUNCTION 14dbadfc7 FUN_14dbadfc7 body=35 status=ok
// SIG undefined FUN_14dbadfc7(void)

undefined8 FUN_14dbadfc7(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dbae170 FUN_14dbae170 body=325 status=ok
// SIG undefined FUN_14dbae170(void)

/* WARNING: Removing unreachable block (ram,0x00015b7a7da0) */
/* WARNING: Removing unreachable block (ram,0x00015b7a7da6) */
/* WARNING: Removing unreachable block (ram,0x00015b7a7dab) */
/* WARNING: Removing unreachable block (ram,0x00015b7a7e55) */
/* WARNING: Removing unreachable block (ram,0x00015b7a7e57) */
/* WARNING: Removing unreachable block (ram,0x00014dbae214) */

void FUN_14dbae170(void)

{
  FUN_1566990a0();
  return;
}



// FUNCTION 14dbae34a FUN_14dbae34a body=149 status=ok
// SIG undefined FUN_14dbae34a(void)

void FUN_14dbae34a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)0x15b9d24fe)(param_1,param_2,0x15b9d24fe,param_4);
  return;
}



// FUNCTION 14dbae3e1 FUN_14dbae3e1 body=34 status=ok
// SIG undefined FUN_14dbae3e1(void)

void FUN_14dbae3e1(void)

{
  ulonglong unaff_RBX;
  ulonglong unaff_R12;
  ulonglong *unaff_R15;
  
  *unaff_R15 = ~((~unaff_R12 | unaff_RBX) + unaff_R12 + 1);
  thunk_FUN_160e7b2c5();
  return;
}



// FUNCTION 14dbae403 FUN_14dbae403 body=8 status=ok
// SIG undefined FUN_14dbae403(void)

void FUN_14dbae403(void)

{
  undefined8 unaff_R12;
  undefined8 *unaff_R15;
  
  *unaff_R15 = unaff_R12;
  thunk_FUN_160e7b2c5();
  return;
}



// FUNCTION 14dbae411 FUN_14dbae411 body=89 status=ok
// SIG undefined FUN_14dbae411(void)

/* WARNING: Removing unreachable block (ram,0x00014dbae467) */
/* WARNING: Removing unreachable block (ram,0x00014dbae471) */
/* WARNING: Removing unreachable block (ram,0x00014dbae461) */
/* WARNING: Removing unreachable block (ram,0x000156d82787) */
/* WARNING: Removing unreachable block (ram,0x00014dbae4d8) */
/* WARNING: Removing unreachable block (ram,0x00014dbae4dc) */

void FUN_14dbae411(undefined8 param_1)

{
  undefined8 unaff_retaddr;
  undefined4 local_resc;
  
  if (local_resc < 0) {
    FUN_156d82787();
    return;
  }
  FUN_156d82792(param_1,unaff_retaddr);
  return;
}



// FUNCTION 14dbae5ab FUN_14dbae5ab body=453 status=ok
// SIG undefined FUN_14dbae5ab(void)

/* WARNING: Removing unreachable block (ram,0x00014dbae6de) */

void FUN_14dbae5ab(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  ulonglong uVar2;
  longlong unaff_RSI;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong in_R10;
  
  uVar4 = *(ulonglong *)(param_2 + (unaff_RBP ^ 0x6070f45)) ^ in_R10;
  uVar1 = 0xffffffffffffffff - *(ulonglong *)(param_2 + -0x68);
  uVar2 = ~(~in_R10 | *(ulonglong *)(param_2 + -0x68)) | ~((~(uVar1 & in_R10) + in_R10) - ~uVar1);
  FUN_1654d2799(0xffffffff81042267,param_2,*(ulonglong *)(param_2 + -0x88) ^ in_R10,uVar4);
  uVar1 = *(ulonglong *)(unaff_RSI + -0x70);
  if (uVar1 + uVar2 < ((uVar2 - (uVar1 | uVar2)) + uVar1) * 2) {
    FUN_165ae417d();
    return;
  }
  uVar3 = *(ulonglong *)(unaff_RSI + -0x58) | uVar2;
  uVar1 = ~(*(ulonglong *)(unaff_RSI + -0x58) & uVar2);
  (*(code *)0x16133ceff)
            ((*(ulonglong *)(unaff_RSI + -0x38) - uVar2) +
             (~uVar2 | *(ulonglong *)(unaff_RSI + -0x38)) * -2 + -2,
             (uVar3 - (uVar1 | uVar3)) + uVar1,*(ulonglong *)(unaff_RSI + -0x60) ^ uVar2,
             -~uVar4 - (~*(ulonglong *)(unaff_RSI + -0x28) + 2) ^ uVar2);
  return;
}



// FUNCTION 14dbae897 FUN_14dbae897 body=34 status=ok
// SIG undefined FUN_14dbae897(void)

void FUN_14dbae897(undefined8 param_1,DWORD param_2,LPVOID param_3)

{
  undefined8 uStackX_8;
  
                    /* WARNING: Could not recover jumptable at 0x00014dbae8b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(uStackX_8,param_2,param_3);
  return;
}



// FUNCTION 14dbaee17 FUN_14dbaee17 body=567 status=ok
// SIG undefined FUN_14dbaee17(void)

/* WARNING: Removing unreachable block (ram,0x00015b640817) */
/* WARNING: Removing unreachable block (ram,0x00014dbaef31) */
/* WARNING: Removing unreachable block (ram,0x00014dbaefb2) */
/* WARNING: Removing unreachable block (ram,0x00014dbaefb8) */
/* WARNING: Removing unreachable block (ram,0x00014e196406) */
/* WARNING: Removing unreachable block (ram,0x00014dbaf0d5) */
/* WARNING: Removing unreachable block (ram,0x00014dbaefbd) */
/* WARNING: Removing unreachable block (ram,0x00014dbaf04a) */
/* WARNING: Removing unreachable block (ram,0x00015af9611b) */
/* WARNING: Removing unreachable block (ram,0x00015af96195) */
/* WARNING: Removing unreachable block (ram,0x00015af9619b) */
/* WARNING: Removing unreachable block (ram,0x00016568dabc) */
/* WARNING: Removing unreachable block (ram,0x00016568db6a) */
/* WARNING: Removing unreachable block (ram,0x00016568db65) */
/* WARNING: Removing unreachable block (ram,0x00014dbaf050) */
/* WARNING: Removing unreachable block (ram,0x00014dbaf0cf) */
/* WARNING: Removing unreachable block (ram,0x00016699ed40) */
/* WARNING: Removing unreachable block (ram,0x0001619f59f0) */
/* WARNING: Removing unreachable block (ram,0x00014dbaeea4) */
/* WARNING: Removing unreachable block (ram,0x00014dbaeec0) */
/* WARNING: Removing unreachable block (ram,0x00014dbaef2b) */
/* WARNING: Removing unreachable block (ram,0x00014dbaef26) */

void FUN_14dbaee17(longlong param_1)

{
  longlong local_res20;
  
  if (local_res20 != -1 || param_1 != 0) {
    FUN_1661b5736();
    return;
  }
  FUN_1661b5736();
  return;
}



// FUNCTION 14dbaefbd FUN_14dbaefbd body=147 status=ok
// SIG undefined FUN_14dbaefbd(void)

/* WARNING: Removing unreachable block (ram,0x00014dbaf050) */
/* WARNING: Removing unreachable block (ram,0x00014dbaf0cf) */
/* WARNING: Removing unreachable block (ram,0x00016699ed40) */
/* WARNING: Removing unreachable block (ram,0x00014dbaf0d5) */

void FUN_14dbaefbd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ushort uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  bool bVar3;
  ushort uStack_8;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x98) & unaff_R15;
  if (((longlong)uVar1 < 0) && (0 < (longlong)uVar1)) {
    return;
  }
  uVar2 = (ushort)*(undefined8 *)(unaff_R13 + -8);
  uStack_8 = ~((0xffff - (ushort)unaff_R15 | uVar2) & (~uVar2 | (ushort)unaff_R15));
  bVar3 = (uStack_8 | 0x100) == 0x100;
  FUN_16198c380(param_1,param_2,param_3);
  if (bVar3) {
    return;
  }
  return;
}



// FUNCTION 14dbaf050 FUN_14dbaf050 body=155 status=ok
// SIG undefined FUN_14dbaf050(void)

/* WARNING: Removing unreachable block (ram,0x00014dbaf0d5) */

void FUN_14dbaf050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  longlong in_R11;
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
  undefined8 uStackX_10;
  ushort local_res18;
  uint6 uStackX_1a;
  longlong *plStackX_20;
  
  *(undefined8 *)(&stack0xfffffffff4de62b1 + in_R11) = unaff_R13;
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
  pcVar1 = (code *)swi(0x2e);
  uVar2 = (*pcVar1)(uStackX_10);
  *plStackX_20 = unaff_R12;
  plStackX_20[-1] = unaff_R12;
  plStackX_20[-2] =
       (ulonglong)(bVar11 & 1) * 0x4000 | (ulonglong)(bVar10 & 1) * 0x800 |
       (ulonglong)((local_res18 & 0x400) != 0) * 0x400 | (ulonglong)(bVar9 & 1) * 0x200 |
       (ulonglong)(bVar8 & 1) * 0x100 | (ulonglong)(bVar7 & 1) * 0x80 |
       (ulonglong)(bVar6 & 1) * 0x40 | (ulonglong)(bVar5 & 1) * 0x10 | (ulonglong)(bVar4 & 1) * 4 |
       (ulonglong)(bVar3 & 1) | (ulonglong)(bVar15 & 1) * 0x200000 |
       (ulonglong)(bVar14 & 1) * 0x100000 | (ulonglong)(bVar13 & 1) * 0x80000 |
       (ulonglong)(bVar12 & 1) * 0x40000;
  plStackX_20[-3] = uVar2;
  *(undefined4 *)(plStackX_20 + -3) = 0x62cb56aa;
  *(undefined4 *)((longlong)plStackX_20 + -0x14) = 0;
  uVar16 = plStackX_20[-2];
  plStackX_20[-2] =
       (ulonglong)((uVar16 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar16 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar16 & 0x400) != 0) * 0x400 | (ulonglong)((uVar16 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar16 & 0x100) != 0) * 0x100 | (ulonglong)((uVar16 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar16 & 0x40) != 0) * 0x40 | (ulonglong)((uVar16 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar16 & 4) != 0) * 4 | (ulonglong)((uVar16 & 1) != 0) |
       (ulonglong)((uVar16 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar16 & 0x40000) != 0) * 0x40000;
  plStackX_20[-2] = param_3;
  *plStackX_20 = (plStackX_20[-3] ^ 0x6938afafU) - 0x416b565;
  plStackX_20[-1] = unaff_RBX;
  plStackX_20[-2] = unaff_RBX;
  plStackX_20[-1] = (longlong)FUN_165c7153c;
  return;
}



// FUNCTION 14dbaf0d5 FUN_14dbaf0d5 body=128 status=ok
// SIG undefined FUN_14dbaf0d5(void)

void FUN_14dbaf0d5(undefined8 param_1,undefined8 param_2)

{
  FUN_1615a1175(param_1,param_2);
  return;
}



// FUNCTION 14dbaf156 FUN_14dbaf156 body=60 status=ok
// SIG undefined FUN_14dbaf156(void)

void FUN_14dbaf156(void)

{
  return;
}



// FUNCTION 14dbaf206 FUN_14dbaf206 body=145 status=ok
// SIG undefined FUN_14dbaf206(void)

void FUN_14dbaf206(void)

{
  FUN_1651498a3();
  return;
}



// FUNCTION 14dbaf298 FUN_14dbaf298 body=451 status=ok
// SIG undefined FUN_14dbaf298(void)

/* WARNING: Removing unreachable block (ram,0x00014dbaf460) */

void FUN_14dbaf298(ulonglong param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong unaff_RSI;
  longlong lVar4;
  longlong unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R12;
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
  ulonglong local_res10;
  
  uVar2 = FUN_162c2a999(param_1,local_res10 | unaff_R15);
  puVar1 = (uint *)(&stack0xfffffffff6c53d8d + unaff_RSI);
  *(undefined8 *)puVar1 = uVar2;
  *puVar1 = 0x955d3235;
  *puVar1 = *puVar1 ^ 0x4ee4c713;
  *puVar1 = *puVar1 + 0x24460ada;
  *(undefined8 *)(&stack0xfffffffff6c53d85 + unaff_RSI) = unaff_R12;
  *puVar1 = *puVar1 + 0x127d41e9;
  *(undefined4 *)(&stack0xfffffffff6c53d91 + unaff_RSI) = 0xe9b469d6;
  *(int *)(&stack0xfffffffff6c53d91 + unaff_RSI) =
       *(int *)(&stack0xfffffffff6c53d91 + unaff_RSI) + 0x164b962a;
  *(ulonglong *)(&stack0xfffffffff6c53d85 + unaff_RSI) = unaff_R15;
  uVar3 = *(uint *)(&stack0xfffffffff6c53d91 + unaff_RSI);
  *(undefined4 *)(&stack0xfffffffff6c53d91 + unaff_RSI) = 0xffffffff;
  uVar3 = ~uVar3 & *(uint *)(&stack0xfffffffff6c53d91 + unaff_RSI);
  *(uint *)(&stack0xfffffffff6c53d91 + unaff_RSI) = ~uVar3;
  *(undefined8 *)puVar1 = unaff_R13;
  *(undefined8 *)(&stack0xfffffffff6c53d85 + unaff_RSI) = in_R11;
  *(undefined8 *)(&stack0xfffffffff6c53d7d + unaff_RSI) = uVar2;
  *(undefined4 *)(&stack0xfffffffff6c53d7d + unaff_RSI) = 0x3ae789b3;
  *(undefined4 *)(&stack0xfffffffff6c53d81 + unaff_RSI) = 0;
  *(ulonglong *)(&stack0xfffffffff6c53d75 + unaff_RSI) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((int)uVar3 < 0) * 0x80 |
       (ulonglong)(uVar3 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
       (ulonglong)((POPCOUNT(uVar3 & 0xff) & 1U) == 0) * 4 | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  if ((*(uint *)(&stack0xfffffffff6c53d75 + unaff_RSI) & 1) == 0) {
    FUN_156d82572();
    return;
  }
  if ((*(ulonglong *)(&stack0xfffffffff6c53d75 + unaff_RSI) & 1) == 0 &&
      (*(ulonglong *)(&stack0xfffffffff6c53d75 + unaff_RSI) & 0x40) == 0) {
    *(ulonglong *)(&stack0xfffffffff6c53d85 + unaff_RSI) =
         *(ulonglong *)(unaff_RDI + -0x38) + param_1 +
         ~(~*(ulonglong *)(unaff_RDI + -0x38) | ~param_1) * -2;
    *(undefined4 *)(&stack0xfffffffff6c53d85 + unaff_RSI) = 0;
    *(undefined4 *)(&stack0xfffffffff6c53d89 + unaff_RSI) = 0;
    lVar4 = -1 - ((~param_1 | *(ulonglong *)(unaff_RDI + -0x50)) &
                 (0xffffffffffffffff - *(ulonglong *)(unaff_RDI + -0x50) | param_1));
    *(undefined8 *)(&stack0xfffffffff6c53d85 + unaff_RSI) = *(undefined8 *)(unaff_RDI + -0x30);
    *(longlong *)(&stack0xfffffffff6c53d85 + unaff_RSI) = lVar4;
    *(longlong *)(&stack0xfffffffff6c53d7d + unaff_RSI) = lVar4;
    *(longlong *)(&stack0xfffffffff6c53d75 + unaff_RSI) = lVar4;
    *(code **)(&stack0xfffffffff6c53d85 + unaff_RSI) = FUN_165239f9c;
    *(undefined **)(&stack0xfffffffff6c53d7d + unaff_RSI) = &DAT_16660b07e;
    return;
  }
  FUN_156d82572();
  return;
}



// FUNCTION 14dbaf460 FUN_14dbaf460 body=46 status=ok
// SIG undefined FUN_14dbaf460(void)

void FUN_14dbaf460(void)

{
  return;
}



// FUNCTION 14dbaf593 thunk_FUN_16131bb16 body=19 status=ok
// SIG undefined thunk_FUN_16131bb16(void)

void thunk_FUN_16131bb16(void)

{
  FUN_16131bb16();
  return;
}



// FUNCTION 14dbaf62e FUN_14dbaf62e body=145 status=ok
// SIG undefined FUN_14dbaf62e(void)

/* WARNING: Removing unreachable block (ram,0x00014dbaf6c0) */

void FUN_14dbaf62e(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  if (-1 < (longlong)
           ((~in_RAX | *(ulonglong *)(unaff_R12 + -0x90)) &
           (~*(ulonglong *)(unaff_R12 + -0x90) | in_RAX))) {
    thunk_FUN_14dda2f24();
    return;
  }
  thunk_FUN_14dda2f24();
  return;
}



// FUNCTION 14dbaf6c0 FUN_14dbaf6c0 body=275 status=ok
// SIG undefined FUN_14dbaf6c0(void)

void FUN_14dbaf6c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  ulonglong in_R10;
  ulonglong *in_R11;
  ulonglong unaff_R15;
  undefined8 local_res8;
  
  uVar1 = *in_R11;
  *in_R11 = *in_R11 & unaff_R15;
  *in_R11 = (uVar1 + unaff_R15) - *in_R11;
  *in_R11 = 0xffffffffffffffff - (in_R10 & *in_R11);
  FUN_1616bfef1(param_1,local_res8,param_3,-~unaff_R15 - (~(~-param_5 + 1U) + 2));
  (*(code *)0x156f89337)(0x156f89337);
  return;
}



// FUNCTION 14dbafb53 FUN_14dbafb53 body=165 status=ok
// SIG undefined FUN_14dbafb53(void)

/* WARNING: Removing unreachable block (ram,0x00014dbafc06) */

int FUN_14dbafb53(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  longlong unaff_RDI;
  longlong in_R10;
  int unaff_R12D;
  undefined8 in_stack_00000018;
  longlong lStack0000000000000028;
  
  lStack0000000000000028 = unaff_RDI - in_R10;
  iVar1 = FUN_14e24d45b(param_1,in_stack_00000018);
  return iVar1 + param_3 + (param_4 - unaff_R12D);
}



// FUNCTION 14dbafbf9 FUN_14dbafbf9 body=104 status=ok
// SIG undefined FUN_14dbafbf9(void)

/* WARNING: Removing unreachable block (ram,0x00014dbafc06) */

int FUN_14dbafbf9(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  int in_EAX;
  int unaff_R12D;
  
  return in_EAX + param_3 + (param_4 - unaff_R12D);
}



// FUNCTION 14dbafc68 FUN_14dbafc68 body=138 status=ok
// SIG undefined FUN_14dbafc68(void)

void FUN_14dbafc68(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  FUN_1568b9d8f(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,param_3);
  return;
}



// FUNCTION 14dbafd8e FUN_14dbafd8e body=198 status=ok
// SIG undefined FUN_14dbafd8e(void)

void FUN_14dbafd8e(undefined8 param_1)

{
  longlong lVar1;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 local_res10;
  ulonglong local_res20;
  
  lVar1 = local_res20 + unaff_R15 + (local_res20 & unaff_R15) * -2;
  *(longlong *)(lVar1 + -8) = lVar1;
  lVar1 = *(longlong *)(lVar1 + -8);
  *(undefined8 *)(lVar1 + -8) = local_res10;
  *(undefined8 *)(lVar1 + -0x10) = param_1;
  *(undefined8 *)(lVar1 + -0x18) = param_1;
  *(undefined8 *)(lVar1 + -0x20) = unaff_R14;
  *(undefined8 *)(lVar1 + -0x28) = unaff_R12;
  *(undefined8 *)(lVar1 + -0x30) = unaff_R12;
  *(undefined8 *)(lVar1 + -0x38) = unaff_R12;
  *(undefined **)(lVar1 + -0x28) = &DAT_14dbafe56;
  *(undefined1 **)(lVar1 + -0x30) = &LAB_162572758;
  return;
}



// FUNCTION 14dbb03ac FUN_14dbb03ac body=130 status=ok
// SIG undefined FUN_14dbb03ac(void)

void FUN_14dbb03ac(ulonglong param_1,ulonglong param_2)

{
  FUN_16690e6fa(param_1,~((~param_1 | param_2) + param_1 + 1) & (param_2 | param_1));
  return;
}



// FUNCTION 14dbb07b9 FUN_14dbb07b9 body=607 status=ok
// SIG undefined FUN_14dbb07b9(void)

/* WARNING: Removing unreachable block (ram,0x00014dbb08d5) */

undefined8 FUN_14dbb07b9(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  ushort local_res18;
  ulonglong local_res20;
  
  uVar3 = 0x186e3a0c;
  uVar2 = FUN_166086f2e();
  local_res18 = ~((~(ushort)unaff_R15 | local_res18) & (~local_res18 | (ushort)unaff_R15));
  uVar1 = ~(local_res20 & unaff_R15) & (local_res20 | unaff_R15);
  if ((0x100 < (local_res18 | 0x100)) && ((local_res18 | 0x100) < 0x100)) {
    uVar2 = thunk_FUN_15b642ca5();
    return uVar2;
  }
  *(undefined8 *)(uVar1 - 8) = 0x2bd363e1;
  *(undefined8 *)(uVar1 - 0x10) = unaff_R14;
  *(undefined8 *)(uVar1 - 0x18) = uVar3;
  *(undefined8 *)(uVar1 - 0x18) = uVar2;
  *(undefined4 *)(uVar1 - 0x18) = 0xc353be66;
  *(undefined4 *)(uVar1 - 0x14) = 0xffffffff;
  uVar3 = *(undefined8 *)(uVar1 - 0x10);
  *(undefined8 *)(uVar1 - 0x10) = uVar3;
  *(undefined8 *)(uVar1 - 0x18) = uVar3;
  *(undefined8 *)(uVar1 - 0x20) = unaff_R12;
  *(undefined8 *)(uVar1 - 0x28) = uVar2;
  *(undefined4 *)(uVar1 - 0x28) = 0xdb3c15ea;
  *(undefined4 *)(uVar1 - 0x24) = 0xffffffff;
  uVar2 = FUN_1572921db();
  return uVar2;
}



// FUNCTION 14dbb0968 FUN_14dbb0968 body=397 status=ok
// SIG undefined FUN_14dbb0968(void)

void FUN_14dbb0968(undefined8 param_1)

{
  FUN_160bf22a1(param_1,0x6a5c5cac);
  FUN_156d89d19();
  return;
}



// FUNCTION 14dbb0b02 FUN_14dbb0b02 body=202 status=ok
// SIG undefined FUN_14dbb0b02(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014dbb0b7a) */
/* WARNING: Removing unreachable block (ram,0x00014dbb0b8b) */
/* WARNING: Removing unreachable block (ram,0x00014dbb0b80) */

void FUN_14dbb0b02(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  undefined8 unaff_RSI;
  undefined4 *unaff_RDI;
  float10 in_ST0;
  undefined8 local_res8;
  longlong lStackX_20;
  
  puVar2 = (undefined8 *)(lStackX_20 + -8);
  *puVar2 = unaff_RSI;
  *(undefined8 *)(lStackX_20 + -0x10) = param_1;
  uVar3 = *(undefined8 *)(lStackX_20 + -0x10);
  *(undefined8 *)(lStackX_20 + -0x10) = *puVar2;
  *puVar2 = &DAT_15b58b475;
  *(undefined8 *)(lStackX_20 + -0x18) = uVar3;
  *(undefined8 *)(lStackX_20 + -0x20) = local_res8;
  *(undefined8 *)(lStackX_20 + -0x28) = param_2;
  uVar3 = *(undefined8 *)(lStackX_20 + -0x28);
  uVar4 = *(undefined8 *)(lStackX_20 + -0x18);
  *(undefined8 *)(lStackX_20 + -0x18) = param_4;
  *(short *)(CONCAT44(in_register_00000004,in_EAX) + 0x5cd6018b) = (short)ROUND(in_ST0);
  if (!SBORROW1((char)((ulonglong)uVar3 >> 8),(char)in_EAX)) {
    *unaff_RDI = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + 0x3b);
  *pcVar1 = *pcVar1 + (char)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dbb0d4b FUN_14dbb0d4b body=152 status=ok
// SIG undefined FUN_14dbb0d4b(void)

void FUN_14dbb0d4b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_156a01eb3(FUN_156a01eb3,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dbb0e6d FUN_14dbb0e6d body=284 status=ok
// SIG undefined FUN_14dbb0e6d(void)

/* WARNING: Removing unreachable block (ram,0x00014dbb0efd) */

void FUN_14dbb0e6d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong in_R11;
  undefined8 unaff_R14;
  undefined8 local_res18;
  
  *(undefined8 *)(local_res18 + -8) = 0;
  *(longlong *)(local_res18 + -8) = *(longlong *)(local_res18 + -8) - in_R11;
  *(ulonglong *)(local_res18 + -8) = ~*(ulonglong *)(local_res18 + -8);
  *(longlong *)(local_res18 + -8) = *(longlong *)(local_res18 + -8) + 1;
  *(undefined8 *)(local_res18 + -0x10) = param_3;
  *(undefined8 *)(local_res18 + -0x10) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x18) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -8) = 0;
  uVar1 = *(ulonglong *)(local_res18 + -8);
  *(longlong *)(local_res18 + -8) = *(longlong *)(local_res18 + -8) + 0x1648a4b75;
  if (0xfffffffe9b75b48a < uVar1) {
    FUN_1648a4b46();
    return;
  }
  FUN_1648a4b46();
  return;
}


