// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14da928ba FUN_14da928ba body=169 status=ok
// SIG undefined FUN_14da928ba(void)

void FUN_14da928ba(void)

{
  FUN_156932ceb();
  return;
}



// FUNCTION 14da92a08 FUN_14da92a08 body=129 status=ok
// SIG undefined FUN_14da92a08(void)

void FUN_14da92a08(undefined8 param_1)

{
  FUN_162cf4a58(param_1);
  return;
}



// FUNCTION 14da92b30 FUN_14da92b30 body=6 status=ok
// SIG undefined FUN_14da92b30(void)

void FUN_14da92b30(void)

{
  FUN_162910f81();
  return;
}



// FUNCTION 14da92b9e FUN_14da92b9e body=155 status=ok
// SIG undefined FUN_14da92b9e(void)

void FUN_14da92b9e(void)

{
  FUN_156ca3888();
  return;
}



// FUNCTION 14da92ccc FUN_14da92ccc body=310 status=ok
// SIG undefined FUN_14da92ccc(void)

/* WARNING: Removing unreachable block (ram,0x00016514773b) */
/* WARNING: Removing unreachable block (ram,0x000165147741) */
/* WARNING: Removing unreachable block (ram,0x00014da92d5e) */
/* WARNING: Removing unreachable block (ram,0x00014da92d64) */
/* WARNING: Removing unreachable block (ram,0x000161d3398a) */
/* WARNING: Removing unreachable block (ram,0x0001573d2ab9) */

void FUN_14da92ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  char cVar8;
  byte bVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined8 unaff_R12;
  ulonglong uVar15;
  ushort uVar16;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  bool bVar17;
  bool bVar18;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x30);
  uVar12 = ~(~(unaff_R15 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_R13 + -0x68)) |
            *(ulonglong *)(unaff_R13 + -0x68) & ~unaff_R15) ^ 0xffffffffffffffff;
  uVar13 = *(ulonglong *)(unaff_R13 + -0x50) ^ unaff_R15;
  uVar14 = 0x5390bd40;
  bVar9 = FUN_165758140();
  uVar16 = (-0x100 - (~-((ushort)param_4 | 0xfeff) + 2)) + (ushort)param_4;
  LOCK();
  bVar17 = bVar9 < DAT_14d7bef3b;
  bVar18 = SBORROW1(bVar9,DAT_14d7bef3b);
  cVar8 = bVar9 - DAT_14d7bef3b;
  if (cVar8 == '\0') {
    DAT_14d7bef3b = (byte)uVar13;
  }
  UNLOCK();
  *(undefined8 *)(param_4 - 8) = unaff_R14;
  *(undefined8 *)(param_4 - 0x10) = unaff_R14;
  *(undefined4 *)(param_4 - 0x18) = 0x536a704;
  *(undefined4 *)(param_4 - 0x14) = 0;
  lVar6 = *(longlong *)(param_4 - 0x18);
  *(ulonglong *)(param_4 - 0x18) =
       (ulonglong)((uVar16 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar18 * 0x800 |
       (ulonglong)((uVar16 & 0x400) != 0) * 0x400 | (ulonglong)((uVar16 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar16 & 0x100) != 0) * 0x100 | (ulonglong)(cVar8 < '\0') * 0x80 |
       (ulonglong)(cVar8 == '\0') * 0x40 | (ulonglong)((uVar16 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar8) & 1U) == 0) * 4 | (ulonglong)bVar17 |
       (ulonglong)((param_4 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((param_4 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_4 - 0x20) = uVar14;
  *(undefined8 *)(param_4 - 0x28) = param_3;
  *(ulonglong *)(param_4 - 0x18) = uVar1 + unaff_R15 + (uVar1 & unaff_R15) * -2;
  *(longlong *)(param_4 - 8) = lVar6 + -0x3465700;
  uVar14 = *(undefined8 *)(param_4 - 0x18);
  *(undefined8 *)(param_4 - 0x18) = 0x1651476b0;
  uVar10 = FUN_165846298();
  *(undefined8 *)(param_4 - 0x18) = *(undefined8 *)(uVar12 - 0x60);
  uVar7 = *(ulonglong *)(param_4 - 0x18);
  uVar3 = *(ulonglong *)(uVar12 - 0x70);
  *(undefined8 *)(param_4 - 0x18) = uVar14;
  uVar1 = *(ulonglong *)(uVar12 - 0x80);
  *(undefined4 *)(param_4 - 0x20) = 0x278f4cd1;
  *(undefined4 *)(param_4 - 0x1c) = 0;
  lVar6 = param_4 + ((*(ulonglong *)(param_4 - 0x20) ^ 0x2ceb1211) - 0xb645ed0);
  uVar4 = *(ulonglong *)(uVar12 - 0x28);
  uVar5 = *(ulonglong *)(uVar12 - 0x68);
  *(undefined8 *)(lVar6 + -8) = uVar10;
  uVar15 = *(ulonglong *)(uVar12 - 0x48);
  *(ulonglong *)(lVar6 + -8) = uVar13;
  uVar11 = *(ulonglong *)(lVar6 + -8);
  *(undefined8 *)(lVar6 + -8) = *(undefined8 *)(uVar12 - 0x90);
  *(undefined8 *)(lVar6 + -0x10) = unaff_R12;
  *(undefined8 *)(lVar6 + -0x18) = unaff_R12;
  *(ulonglong *)(lVar6 + -0x20) = -~uVar15 - 1 ^ uVar11;
  *(undefined4 *)(lVar6 + -0x28) = 0x48e790b0;
  *(undefined4 *)(lVar6 + -0x24) = 0;
  uVar15 = *(ulonglong *)(lVar6 + -0x28) ^ 0x3c2e9d61;
  *(ulonglong *)(lVar6 + -0x28) = uVar4 ^ uVar13;
  lVar2 = *(longlong *)(uVar12 + (~(uVar15 & 0xffffffff8b36f229) & (uVar15 | 0xffffffff8b36f229)));
  *(undefined8 *)(lVar6 + -0x10) = 0;
  *(longlong *)(lVar6 + -0x10) = *(longlong *)(lVar6 + -0x10) - lVar2;
  *(longlong *)(lVar6 + -0x10) = -*(longlong *)(lVar6 + -0x10);
  *(undefined8 *)(lVar6 + -0x18) = *(undefined8 *)(uVar12 - 0x98);
  *(undefined8 *)(lVar6 + -0x28) = *(undefined8 *)(lVar6 + -0x28);
  *(ulonglong *)(lVar6 + -0x20) = uVar3 ^ uVar13;
  *(ulonglong *)(lVar6 + -0x28) = uVar1 ^ uVar13;
  *(undefined8 *)(lVar6 + -0x30) = 0x161d338f6;
  FUN_1615a33bb(uVar11,uVar5 ^ uVar13,0xffffffffc6e3b744,uVar7 ^ uVar13);
  if ((uVar11 - 1) - ~*(ulonglong *)(uVar12 - 0x30) < (*(ulonglong *)(uVar12 - 0x30) & uVar11) * 2)
  {
    thunk_FUN_1573d2a32();
    return;
  }
  uVar1 = *(ulonglong *)(uVar12 - 0x80);
  *(ulonglong *)(lVar6 + -0x30) = uVar11;
  *(ulonglong *)(lVar6 + -0x30) = uVar1 + uVar11;
  *(ulonglong *)(lVar6 + -0x30) = *(longlong *)(lVar6 + -0x30) + (uVar1 & uVar11) * -2;
  if (*(longlong *)(lVar6 + -0x30) < 0) {
    FUN_156c5b370();
    return;
  }
  FUN_156c5b370();
  return;
}



// FUNCTION 14da92e02 FUN_14da92e02 body=123 status=ok
// SIG undefined FUN_14da92e02(void)

void FUN_14da92e02(ulonglong param_1,ulonglong param_2)

{
  FUN_164b3be6d(param_1,param_2 + param_1 + (param_2 & param_1) * -2);
  return;
}



// FUNCTION 14da92f25 FUN_14da92f25 body=155 status=ok
// SIG undefined FUN_14da92f25(void)

/* WARNING: Removing unreachable block (ram,0x00014da92fbb) */
/* WARNING: Removing unreachable block (ram,0x00014da92fc1) */
/* WARNING: Removing unreachable block (ram,0x00014da93055) */
/* WARNING: Removing unreachable block (ram,0x00014da9305b) */
/* WARNING: Removing unreachable block (ram,0x0001653357e5) */

void FUN_14da92f25(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_16579cb56(0xffffffffffffffff - (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15),
                ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) &
                 (*(ulonglong *)(unaff_R13 + -0x28) ^ 0xffffffffffffffff | unaff_R15)),
                ((~*(ulonglong *)(unaff_R13 + -0x30) | ~unaff_R15) + unaff_R15) -
                ~*(ulonglong *)(unaff_R13 + -0x30));
  return;
}



// FUNCTION 14da92fc1 FUN_14da92fc1 body=153 status=ok
// SIG undefined FUN_14da92fc1(void)

/* WARNING: Removing unreachable block (ram,0x00014da93055) */
/* WARNING: Removing unreachable block (ram,0x00014da9305b) */

void FUN_14da92fc1(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_14e24eeb7(FUN_14e24eeb7,*(longlong *)(unaff_RDI + -0x28) + param_1,
                *(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14da9305b FUN_14da9305b body=231 status=ok
// SIG undefined FUN_14da9305b(void)

void FUN_14da9305b(undefined8 param_1)

{
  undefined8 *puVar1;
  ushort *in_R11;
  undefined8 unaff_R13;
  undefined8 uStackX_10;
  longlong in_stack_00000030;
  
  FUN_1653c9d39();
  *in_R11 = ~*in_R11;
  puVar1 = (undefined8 *)(in_stack_00000030 + -8);
  *puVar1 = unaff_R13;
  *(undefined8 *)(in_stack_00000030 + -0x10) = *puVar1;
  *puVar1 = &LAB_14da9315d;
  thunk_FUN_15b642ca5(param_1,uStackX_10);
  return;
}



// FUNCTION 14da93185 FUN_14da93185 body=177 status=ok
// SIG undefined FUN_14da93185(void)

/* WARNING: Removing unreachable block (ram,0x00014da931dd) */

void FUN_14da93185(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_15b110fde(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX);
  return;
}



// FUNCTION 14da932e3 FUN_14da932e3 body=149 status=ok
// SIG undefined FUN_14da932e3(void)

void FUN_14da932e3(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_156e9d41a(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,FUN_156e9d41a,
                ~(*(ulonglong *)(unaff_R12 + -0x80) & in_RAX) &
                (*(ulonglong *)(unaff_R12 + -0x80) | in_RAX));
  return;
}



// FUNCTION 14da933fe FUN_14da933fe body=237 status=ok
// SIG undefined FUN_14da933fe(void)

void FUN_14da933fe(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  longlong lVar3;
  ulonglong unaff_R12;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uVar4;
  
  lVar3 = (param_3 + -1) - ~unaff_R12;
  *(undefined8 *)(lVar3 + -8) = in_RAX;
  *(undefined4 *)(lVar3 + -8) = 0x456347d;
  *(int *)(lVar3 + -8) = *(int *)(lVar3 + -8) + 0x1c550851;
  *(undefined4 *)(lVar3 + -4) = 0;
  puVar1 = (uint *)(lVar3 + -4);
  *puVar1 = *puVar1;
  uVar2 = *(undefined8 *)(lVar3 + -8);
  *(ulonglong *)(lVar3 + -8) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((int)*puVar1 < 0) * 0x80 |
       (ulonglong)(*puVar1 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
       (ulonglong)((POPCOUNT(*puVar1 & 0xff) & 1U) == 0) * 4 | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  *(undefined8 *)(lVar3 + -0x10) = uVar2;
  *(undefined8 *)(lVar3 + -0x18) = unaff_RBP;
  *(undefined8 *)(lVar3 + -0x20) = 0xfffffffff2ae8c21;
  *(longlong *)(lVar3 + -0x20) = *(longlong *)(lVar3 + -0x20) + 0x171cfc88c;
  uVar4 = *(ulonglong *)(lVar3 + -8);
  *(undefined8 *)(lVar3 + -8) = *(undefined8 *)(lVar3 + -0x18);
  *(undefined8 *)(lVar3 + -0x10) = *(undefined8 *)(lVar3 + -0x18);
  *(undefined8 *)(lVar3 + -0x18) = 0xfffffffffffffffb;
  *(ulonglong *)(lVar3 + -0x20) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)((uVar4 & 1) != 0) |
       (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
  *(undefined1 **)(lVar3 + -8) = &LAB_14da934ec;
  return;
}



// FUNCTION 14da9351f FUN_14da9351f body=603 status=ok
// SIG undefined FUN_14da9351f(void)

/* WARNING: Removing unreachable block (ram,0x00014da9352d) */
/* WARNING: Removing unreachable block (ram,0x00014da935bf) */
/* WARNING: Removing unreachable block (ram,0x00014da935c5) */

undefined8 FUN_14da9351f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_161d627f8(param_1,param_2,param_3);
  uVar1 = FUN_1658a36e1();
  return uVar1;
}



// FUNCTION 14da93943 FUN_14da93943 body=47 status=ok
// SIG undefined FUN_14da93943(void)

void FUN_14da93943(undefined8 param_1)

{
  FUN_14d994e7f(param_1,4);
  return;
}



// FUNCTION 14da93972 FUN_14da93972 body=152 status=ok
// SIG undefined FUN_14da93972(void)

/* WARNING: Instruction at (ram,0x00014da93aad) overlaps instruction at (ram,0x00014da93aac)
    */
/* WARNING: Removing unreachable block (ram,0x00015ba2576f) */
/* WARNING: Removing unreachable block (ram,0x00015ba25775) */
/* WARNING: Removing unreachable block (ram,0x00015ba257f2) */
/* WARNING: Removing unreachable block (ram,0x00015ba257f7) */
/* WARNING: Removing unreachable block (ram,0x00015ba257fd) */
/* WARNING: Removing unreachable block (ram,0x0001567b9db1) */
/* WARNING: Removing unreachable block (ram,0x0001567b9dce) */
/* WARNING: Removing unreachable block (ram,0x0001567b9de5) */
/* WARNING: Removing unreachable block (ram,0x0001567b9dda) */
/* WARNING: Removing unreachable block (ram,0x0001567b9dec) */
/* WARNING: Removing unreachable block (ram,0x000162259f9d) */
/* WARNING: Removing unreachable block (ram,0x000162259fa3) */
/* WARNING: Removing unreachable block (ram,0x000162259fb0) */
/* WARNING: Removing unreachable block (ram,0x000162259fb6) */
/* WARNING: Removing unreachable block (ram,0x00016225a04a) */
/* WARNING: Removing unreachable block (ram,0x00016225a050) */
/* WARNING: Removing unreachable block (ram,0x00014d9a4070) */
/* WARNING: Removing unreachable block (ram,0x00014da93aad) */
/* WARNING: Removing unreachable block (ram,0x00015b4d2e01) */
/* WARNING: Removing unreachable block (ram,0x00014da93b51) */
/* WARNING: Removing unreachable block (ram,0x00014da93bde) */
/* WARNING: Removing unreachable block (ram,0x00014da93be9) */
/* WARNING: Removing unreachable block (ram,0x00014da93be4) */
/* WARNING: Removing unreachable block (ram,0x00015b1f2b0b) */
/* WARNING: Removing unreachable block (ram,0x00015b1f2b48) */
/* WARNING: Removing unreachable block (ram,0x00015b1f2b51) */
/* WARNING: Removing unreachable block (ram,0x00015b1f2c49) */
/* WARNING: Removing unreachable block (ram,0x00015b4d2dac) */
/* WARNING: Removing unreachable block (ram,0x00015b1f2c4f) */
/* WARNING: Removing unreachable block (ram,0x00015ba25646) */
/* WARNING: Removing unreachable block (ram,0x00015b1f2ced) */
/* WARNING: Removing unreachable block (ram,0x00015b1f2cf3) */
/* WARNING: Removing unreachable block (ram,0x00015b1f2cf8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da93972(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  uint unaff_EBP;
  undefined8 unaff_RSI;
  longlong unaff_R12;
  ulonglong uVar5;
  byte bVar6;
  undefined1 local_res8 [8];
  undefined8 in_stack_00000010;
  
  FUN_161deb137();
  puVar4 = &stack0x00000010;
  uVar5 = CONCAT44(0xe02e7c62,unaff_EBP ^ 0x1973c75f);
  uVar2 = _LAB_161deb0df | uVar5;
  uVar5 = _LAB_161deb0df & uVar5;
  bVar6 = 1;
  uVar3 = FUN_1659928ff();
  if ((~uVar5 & uVar2) + 0x74d71cee == (ulonglong)bVar6) {
    puVar4 = local_res8;
  }
  *(undefined8 *)(puVar4 + -8) = uVar3;
  *(undefined8 *)(puVar4 + -0x10) = unaff_RSI;
  plVar1 = (longlong *)(puVar4 + -0x18);
  *plVar1 = unaff_R12;
  *plVar1 = *plVar1 + -0x88;
  uVar2 = *(ulonglong *)*plVar1;
  uVar5 = *(ulonglong *)(puVar4 + -8);
  *(undefined8 *)(puVar4 + -8) = in_stack_00000010;
  if (-1 < (longlong)(uVar2 & uVar5)) {
    FUN_1574dd989();
    return;
  }
  *(undefined4 *)(puVar4 + -8) = 0x970bc516;
  *(undefined4 *)(puVar4 + -4) = 0xffffffff;
  *(undefined **)(puVar4 + -8) = &DAT_162f437c5;
  return;
}



// FUNCTION 14da93a0d FUN_14da93a0d body=473 status=ok
// SIG undefined FUN_14da93a0d(void)

/* WARNING: Instruction at (ram,0x00014da93aad) overlaps instruction at (ram,0x00014da93aac)
    */
/* WARNING: Removing unreachable block (ram,0x00015ba2576f) */
/* WARNING: Removing unreachable block (ram,0x00015ba25775) */
/* WARNING: Removing unreachable block (ram,0x00015ba257f2) */
/* WARNING: Removing unreachable block (ram,0x00015ba257f7) */
/* WARNING: Removing unreachable block (ram,0x00015ba257fd) */
/* WARNING: Removing unreachable block (ram,0x0001567b9db1) */
/* WARNING: Removing unreachable block (ram,0x0001567b9dce) */
/* WARNING: Removing unreachable block (ram,0x0001567b9de5) */
/* WARNING: Removing unreachable block (ram,0x0001567b9dda) */
/* WARNING: Removing unreachable block (ram,0x0001567b9dec) */
/* WARNING: Removing unreachable block (ram,0x000162259f9d) */
/* WARNING: Removing unreachable block (ram,0x000162259fa3) */
/* WARNING: Removing unreachable block (ram,0x000162259fb0) */
/* WARNING: Removing unreachable block (ram,0x000162259fb6) */
/* WARNING: Removing unreachable block (ram,0x00016225a04a) */
/* WARNING: Removing unreachable block (ram,0x00016225a050) */
/* WARNING: Removing unreachable block (ram,0x00014d9a4070) */
/* WARNING: Removing unreachable block (ram,0x00014da93aad) */
/* WARNING: Removing unreachable block (ram,0x00015b4d2e01) */
/* WARNING: Removing unreachable block (ram,0x00014da93b51) */
/* WARNING: Removing unreachable block (ram,0x00014da93bde) */
/* WARNING: Removing unreachable block (ram,0x00014da93be9) */
/* WARNING: Removing unreachable block (ram,0x00014da93be4) */
/* WARNING: Removing unreachable block (ram,0x00015b1f2b0b) */
/* WARNING: Removing unreachable block (ram,0x00015b1f2b48) */
/* WARNING: Removing unreachable block (ram,0x00015b1f2b51) */
/* WARNING: Removing unreachable block (ram,0x00015b1f2c49) */
/* WARNING: Removing unreachable block (ram,0x00015b4d2dac) */
/* WARNING: Removing unreachable block (ram,0x00015b1f2c4f) */
/* WARNING: Removing unreachable block (ram,0x00015ba25646) */
/* WARNING: Removing unreachable block (ram,0x00015b1f2ced) */
/* WARNING: Removing unreachable block (ram,0x00015b1f2cf3) */
/* WARNING: Removing unreachable block (ram,0x00015b1f2cf8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da93a0d(undefined8 param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint unaff_EBX;
  undefined8 **ppuVar4;
  undefined8 unaff_RSI;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong uVar5;
  byte bVar6;
  undefined8 *local_res8;
  undefined8 local_res10;
  
  ppuVar4 = (undefined8 **)&local_res10;
  local_res10 = CONCAT44(0xe02e7c62,unaff_EBX ^ 0x1973c75f);
  uVar2 = *(ulonglong *)(unaff_R13 + -0x58) | local_res10;
  uVar5 = *(ulonglong *)(unaff_R13 + -0x58) & local_res10;
  local_res10 = *(longlong *)(unaff_R13 + -0x80);
  bVar6 = local_res10 != 0;
  local_res8 = (undefined8 *)0x14da93ac1;
  uVar3 = FUN_1659928ff();
  if ((~uVar5 & uVar2) + 0x74d71cee == (ulonglong)bVar6) {
    local_res8 = ppuVar4;
    ppuVar4 = &local_res8;
  }
  ppuVar4[-1] = (undefined8 *)uVar3;
  ppuVar4[-2] = (undefined8 *)unaff_RSI;
  plVar1 = (longlong *)(ppuVar4 + -3);
  *plVar1 = unaff_R12;
  *plVar1 = *plVar1 + -0x88;
  uVar2 = *(ulonglong *)*plVar1;
  uVar5 = (ulonglong)ppuVar4[-1];
  ppuVar4[-1] = (undefined8 *)param_1;
  if (-1 < (longlong)(uVar2 & uVar5)) {
    FUN_1574dd989();
    return;
  }
  *(undefined4 *)(ppuVar4 + -1) = 0x970bc516;
  *(undefined4 *)((longlong)ppuVar4 + -4) = 0xffffffff;
  ppuVar4[-1] = (undefined8 *)&DAT_162f437c5;
  return;
}



// FUNCTION 14da93de3 FUN_14da93de3 body=211 status=ok
// SIG undefined FUN_14da93de3(void)

/* WARNING: Removing unreachable block (ram,0x00014da93e6d) */

undefined8
FUN_14da93de3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R13;
  ulonglong in_stack_00000008;
  undefined8 local_res18;
  ulonglong local_res20;
  
  if (-1 < (longlong)
           (~((in_RAX - (local_res20 | in_RAX)) + local_res20) &
           ((in_stack_00000008 ^ 0x592e14da) + local_res20 | in_RAX))) {
    param_5 = param_5 ^ in_RAX;
    *(undefined8 *)(param_5 - 8) = unaff_RDI;
    *(undefined8 *)(param_5 - 0x10) = unaff_R13;
    *(undefined8 *)(param_5 - 0x10) = param_4;
    *(undefined8 *)(param_5 - 0x18) = param_4;
    *(undefined8 *)(param_5 - 0x10) = *(undefined8 *)(param_5 - 8);
    *(undefined8 *)(param_5 - 0x18) = param_1;
    *(undefined8 *)(param_5 - 0x20) = param_3;
    *(undefined1 **)(param_5 - 8) = &LAB_162c3fc21;
    *(undefined8 *)(param_5 - 0x18) = in_R11;
    *(undefined **)(param_5 - 0x20) = &DAT_162c3fbfb;
    return local_res18;
  }
  uVar1 = FUN_161c90e58();
  return uVar1;
}



// FUNCTION 14da93f0b FUN_14da93f0b body=122 status=ok
// SIG undefined FUN_14da93f0b(void)

void FUN_14da93f0b(void)

{
  return;
}



// FUNCTION 14da93f85 FUN_14da93f85 body=25 status=ok
// SIG undefined FUN_14da93f85(void)

undefined8 FUN_14da93f85(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14da94024 FUN_14da94024 body=90 status=ok
// SIG undefined FUN_14da94024(void)

void FUN_14da94024(void)

{
  return;
}



// FUNCTION 14da94155 FUN_14da94155 body=145 status=ok
// SIG undefined FUN_14da94155(void)

longlong FUN_14da94155(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return *(ulonglong *)(unaff_RDI + -0x80) + param_1 +
         (*(ulonglong *)(unaff_RDI + -0x80) & param_1) * -2;
}



// FUNCTION 14da941e6 FUN_14da941e6 body=199 status=ok
// SIG undefined FUN_14da941e6(void)

/* WARNING: Removing unreachable block (ram,0x00014da9428a) */

void FUN_14da941e6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 unaff_RDI;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 unaff_retaddr;
  ushort local_res8;
  uint6 uStackX_a;
  longlong local_res10;
  
  uVar2 = (-0x101 - (local_res8 | 0xfeff)) + local_res8;
  *(undefined8 *)(local_res10 + -8) = unaff_RDI;
  *(undefined8 *)(local_res10 + -0x10) = unaff_RDI;
  *(undefined8 *)(local_res10 + -0x18) = unaff_retaddr;
  *(undefined4 *)(local_res10 + -0x18) = 0xff78b91;
  *(undefined4 *)(local_res10 + -0x14) = 0;
  lVar1 = *(longlong *)(local_res10 + -0x18);
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 | (ulonglong)((uStackX_a & 4) != 0) * 0x40000
  ;
  *(longlong *)(local_res10 + -0x20) = lVar1;
  *(longlong *)(local_res10 + -0x20) = *(longlong *)(local_res10 + -0x20) + -0xcc47a0f;
  uVar3 = *(ulonglong *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x18) = param_1;
  *(ulonglong *)(local_res10 + -0x20) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(longlong *)(local_res10 + -8) = lVar1 + -0xcc47a0f;
  *(undefined8 *)(local_res10 + -0x10) = param_4;
  *(undefined8 *)(local_res10 + -0x18) = param_4;
  *(code **)(local_res10 + -0x10) = FUN_14d85d504;
  return;
}



// FUNCTION 14da94290 FUN_14da94290 body=175 status=ok
// SIG undefined FUN_14da94290(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da94290(void)

{
  return;
}



// FUNCTION 14da947ea FUN_14da947ea body=148 status=ok
// SIG undefined FUN_14da947ea(void)

void FUN_14da947ea(longlong param_1)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  
  uVar1 = *(ulonglong *)(param_1 + unaff_RBP + 0x43f89f2e);
  (*(code *)0x165523f37)
            ((char)param_1,0xffffffffffffff90,
             ~((~unaff_RBX | *(ulonglong *)(param_1 + -0x88)) &
              (~*(ulonglong *)(param_1 + -0x88) | unaff_RBX)),
             (~(~uVar1 | 0xffffffffffffffff - unaff_RBX) ^ 0xffffffffffffffff) &
             (uVar1 + unaff_RBX) - (uVar1 & unaff_RBX));
  return;
}



// FUNCTION 14da94880 FUN_14da94880 body=762 status=ok
// SIG undefined FUN_14da94880(void)

/* WARNING: Removing unreachable block (ram,0x00014da94afb) */
/* WARNING: Removing unreachable block (ram,0x00014da94b01) */
/* WARNING: Removing unreachable block (ram,0x00014da94b6f) */
/* WARNING: Removing unreachable block (ram,0x00015b784fe5) */
/* WARNING: Removing unreachable block (ram,0x00015b785062) */
/* WARNING: Removing unreachable block (ram,0x00015b785067) */
/* WARNING: Removing unreachable block (ram,0x00015b78506d) */
/* WARNING: Removing unreachable block (ram,0x00015b843420) */
/* WARNING: Removing unreachable block (ram,0x000166af4cd7) */
/* WARNING: Removing unreachable block (ram,0x000166af4d2f) */
/* WARNING: Removing unreachable block (ram,0x000166af4d33) */
/* WARNING: Removing unreachable block (ram,0x00014da949ae) */

void FUN_14da94880(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulonglong param_7,ulonglong param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  ulonglong in_RAX;
  undefined8 uVar5;
  undefined8 unaff_RBP;
  longlong in_R11;
  ushort uVar6;
  longlong unaff_R13;
  ulonglong unaff_R14;
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
  ulonglong uStackX_8;
  undefined8 local_res10;
  undefined8 local_res20;
  
  *(ulonglong *)(unaff_R13 + 8) = ~in_RAX & *(ulonglong *)(unaff_R13 + 8) | in_RAX;
  *(ulonglong *)(unaff_R13 + 8) =
       ~((0xffffffffffffffffU - *(longlong *)(unaff_R13 + 8) | unaff_R14) +
         *(longlong *)(unaff_R13 + 8) + 1);
  FUN_165a602bb();
  uVar3 = param_2 + in_R11 + (param_7 & uStackX_8) * -2;
  puVar2 = (undefined8 *)(param_8 ^ uStackX_8);
  param_7._0_2_ = (ushort)uVar3;
  uVar6 = ((ushort)param_7 | 0x100) - 0x100;
  if (-1 < (short)uVar6) {
    bVar15 = (uVar6 & 0x4000) != 0;
    bVar14 = (uVar6 & 0x800) != 0;
    bVar13 = (uVar6 & 0x200) != 0;
    bVar12 = (uVar6 & 0x100) != 0;
    bVar11 = (uVar6 & 0x80) != 0;
    bVar10 = (uVar6 & 0x40) != 0;
    bVar9 = (uVar6 & 0x10) != 0;
    bVar8 = (uVar6 & 4) != 0;
    bVar7 = (uVar6 & 1) != 0;
    bVar19 = (uVar3 & 0x200000) != 0;
    bVar16 = (uVar3 & 0x40000) != 0;
    bVar18 = 0;
    bVar17 = 0;
    pcVar4 = (code *)swi(0x2e);
    uVar5 = (*pcVar4)(param_6,unaff_RBP);
    *puVar2 = uVar5;
    puVar2[-1] = uVar5;
    puVar2[-2] = uVar5;
    *(undefined4 *)(puVar2 + -2) = 0xb1b67a0;
    *(undefined4 *)((longlong)puVar2 - 0xc) = 0;
    uVar5 = puVar2[-2];
    puVar2[-2] = (ulonglong)(bVar15 & 1) * 0x4000 | (ulonglong)(bVar14 & 1) * 0x800 |
                 (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)(bVar13 & 1) * 0x200 |
                 (ulonglong)(bVar12 & 1) * 0x100 | (ulonglong)(bVar11 & 1) * 0x80 |
                 (ulonglong)(bVar10 & 1) * 0x40 | (ulonglong)(bVar9 & 1) * 0x10 |
                 (ulonglong)(bVar8 & 1) * 4 | (ulonglong)(bVar7 & 1) |
                 (ulonglong)(bVar19 & 1) * 0x200000 | (ulonglong)(bVar18 & 1) * 0x100000 |
                 (ulonglong)(bVar17 & 1) * 0x80000 | (ulonglong)(bVar16 & 1) * 0x40000;
    puVar1 = puVar2 + -3;
    *puVar1 = param_5;
    puVar2[-4] = uVar5;
    *(undefined4 *)(puVar2 + -4) = 0x2a47b1fb;
    *(undefined4 *)((longlong)puVar2 - 0x1c) = 0;
    uVar3 = puVar2[-4];
    puVar2[-4] = uVar5;
    puVar2[-4] = puVar2[-4] - (uVar3 ^ 0x2f29a887);
    *puVar2 = puVar2[-4];
    puVar2[-1] = local_res20;
    puVar2[-2] = local_res20;
    *puVar1 = *puVar1;
    puVar2[-4] = local_res10;
    FUN_16534ae34();
    return;
  }
  FUN_1665444eb();
  return;
}



// FUNCTION 14da94c21 FUN_14da94c21 body=498 status=ok
// SIG undefined FUN_14da94c21(void)

/* WARNING: Instruction at (ram,0x000162b8f439) overlaps instruction at (ram,0x000162b8f436)
    */
/* WARNING: Removing unreachable block (ram,0x00015b048dcd) */
/* WARNING: Removing unreachable block (ram,0x00015b048dd3) */
/* WARNING: Removing unreachable block (ram,0x000162914d8e) */
/* WARNING: Removing unreachable block (ram,0x00014da94cdc) */

void FUN_14da94c21(void)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  int *in_RAX;
  ulonglong unaff_RBP;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  longlong unaff_R15;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uVar10;
  ulonglong uVar11;
  uint local_res8 [8];
  
  puVar1 = (uint *)((longlong)local_res8 + unaff_R15);
  *puVar1 = 0x1863015a;
  *puVar1 = *puVar1 ^ 0x1fd70d5a;
  *(undefined4 *)((longlong)local_res8 + unaff_R15 + 4) = 0;
  puVar2 = (ulonglong *)(&stack0xfffffffff84bf640 + *(longlong *)puVar1 + unaff_R15);
  uVar5 = *puVar2;
  *puVar2 = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
            (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((int)*puVar1 < 0) * 0x80 |
            (ulonglong)(*puVar1 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
            (ulonglong)((POPCOUNT(*puVar1 & 0xff) & 1U) == 0) * 4 |
            (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
            (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  puVar2[-1] = unaff_RBP;
  *(undefined2 *)(puVar2 + -1) = 0x5fcd;
  uVar10 = *puVar2;
  *puVar2 = (ulonglong)((uVar10 & 0x4000) != 0) * 0x4000 |
            (ulonglong)((uVar10 & 0x800) != 0) * 0x800 | (ulonglong)((uVar10 & 0x400) != 0) * 0x400
            | (ulonglong)((uVar10 & 0x200) != 0) * 0x200 |
            (ulonglong)((uVar10 & 0x100) != 0) * 0x100 | (ulonglong)((uVar10 & 0x80) != 0) * 0x80 |
            (ulonglong)((uVar10 & 0x40) != 0) * 0x40 | (ulonglong)((uVar10 & 0x10) != 0) * 0x10 |
            (ulonglong)((uVar10 & 4) != 0) * 4 | (ulonglong)((uVar10 & 1) != 0) |
            (ulonglong)((uVar10 & 0x200000) != 0) * 0x200000 |
            (ulonglong)((uVar10 & 0x40000) != 0) * 0x40000;
  uVar11 = *puVar2;
  *puVar2 = (ulonglong)in_RAX;
  *(undefined4 *)puVar2 = 0x9933e28;
  *(undefined4 *)((longlong)puVar2 + 4) = 0;
  puVar2 = (ulonglong *)((longlong)puVar2 + (*puVar2 - 0x9933e28));
  *(undefined4 *)puVar2 = 0x1b8d628e;
  *(undefined4 *)((longlong)puVar2 + 4) = 0;
  *(undefined4 *)((longlong)puVar2 + 4) = *(undefined4 *)((longlong)puVar2 + 4);
  uVar8 = *puVar2;
  puVar9 = puVar2 + 1;
  *puVar2 = (ulonglong)in_RAX;
  *(undefined4 *)puVar2 = 0xb66a3d9;
  *(undefined4 *)((longlong)puVar2 + 4) = 0;
  uVar8 = uVar8 ^ ~(((*puVar2 ^ 0x321d79ee) & 0xffffffffdd6bc44e ^ 0xffffffffffffffff) &
                   (*puVar2 ^ 0x321d79ee | 0xffffffffdd6bc44e));
  *puVar2 = (ulonglong)in_RAX;
  *(undefined4 *)puVar2 = 0x6b49b937;
  *(undefined4 *)((longlong)puVar2 + 4) = 0;
  uVar10 = *puVar2;
  *puVar2 = (ulonglong)((uVar11 & 0x4000) != 0) * 0x4000 |
            (ulonglong)((uVar11 & 0x400) != 0) * 0x400 | (ulonglong)((uVar11 & 0x200) != 0) * 0x200
            | (ulonglong)((uVar11 & 0x100) != 0) * 0x100 | (ulonglong)((longlong)uVar8 < 0) * 0x80 |
            (ulonglong)(uVar8 == 0) * 0x40 | (ulonglong)((uVar11 & 0x10) != 0) * 0x10 |
            (ulonglong)((POPCOUNT(uVar8 & 0xff) & 1U) == 0) * 4 |
            (ulonglong)((uVar11 & 0x200000) != 0) * 0x200000 |
            (ulonglong)((uVar11 & 0x40000) != 0) * 0x40000;
  uVar11 = ~(uVar10 & 0xffffffff94d4c5c8);
  uVar10 = uVar10 | 0xffffffff94d4c5c8;
  uVar11 = (uVar10 - (uVar11 | uVar10)) + uVar11;
  uVar10 = ~uVar11;
  if ((longlong)uVar11 < 0) {
    FUN_15b048d35();
    return;
  }
  if ((*puVar2 & 1) != 0) {
    uVar10 = uVar10 + 1;
  }
  lVar7 = uVar8 - uVar10;
  *(undefined8 *)((longlong)puVar2 + lVar7) = in_RAX;
  *(int **)((longlong)puVar2 + lVar7 + -8) = in_RAX;
  *(undefined4 *)((longlong)puVar2 + lVar7 + -8) = 0xd09e682;
  *(undefined4 *)((longlong)puVar2 + lVar7 + -4) = 0;
  puVar6 = (undefined4 *)
           ((longlong)puVar2 + lVar7 + *(longlong *)((longlong)puVar2 + lVar7 + -8) + -0xd09e68a);
  *puVar6 = 0xa52eb35e;
  puVar6[2] = *puVar6;
  puVar3 = (undefined8 *)(puVar6 + 2);
  puVar6[3] = 0;
  puVar6[3] = puVar6[3] ^ 0xffffffff;
  *puVar3 = *puVar3;
  iVar4 = *in_RAX;
  *puVar3 = in_RAX;
  *puVar3 = 0x162b8f491;
  FUN_1573d24f5(iVar4 * -0x2a74b6d1,~*(ulonglong *)(puVar6 + 4));
  *(ulonglong **)(puVar6 + 6) = puVar9;
  *(ulonglong *)(puVar6 + 10) = uVar5;
  FUN_165c7153c();
  return;
}



// FUNCTION 14da94df5 FUN_14da94df5 body=144 status=ok
// SIG undefined FUN_14da94df5(void)

void FUN_14da94df5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  thunk_FUN_156f9d173(param_1,thunk_FUN_156f9d173,param_3,0xffffffff9980dd54);
  return;
}



// FUNCTION 14da9550b FUN_14da9550b body=41 status=ok
// SIG undefined FUN_14da9550b(void)

undefined8 FUN_14da9550b(void)

{
  longlong unaff_R13;
  
  return *(undefined8 *)(unaff_R13 + -0x30);
}



// FUNCTION 14da956d6 FUN_14da956d6 body=153 status=ok
// SIG undefined FUN_14da956d6(void)

/* WARNING: Removing unreachable block (ram,0x000157112bc5) */
/* WARNING: Removing unreachable block (ram,0x000157112bcb) */
/* WARNING: Removing unreachable block (ram,0x000157112bfb) */
/* WARNING: Removing unreachable block (ram,0x00014da9576b) */
/* WARNING: Removing unreachable block (ram,0x000157112a98) */
/* WARNING: Removing unreachable block (ram,0x000157112b23) */
/* WARNING: Removing unreachable block (ram,0x000157112b29) */
/* WARNING: Removing unreachable block (ram,0x000160f5003f) */
/* WARNING: Removing unreachable block (ram,0x00014da9573e) */
/* WARNING: Removing unreachable block (ram,0x00014da95771) */

void FUN_14da956d6(void)

{
  thunk_FUN_157112a9e();
  return;
}



// FUNCTION 14da957bc thunk_FUN_15b1097be body=5 status=ok
// SIG undefined thunk_FUN_15b1097be(void)

void thunk_FUN_15b1097be(void)

{
  FUN_15b1097be();
  return;
}



// FUNCTION 14da95b78 FUN_14da95b78 body=295 status=ok
// SIG undefined FUN_14da95b78(void)

/* WARNING: Removing unreachable block (ram,0x0001627652f3) */
/* WARNING: Removing unreachable block (ram,0x000165483d5d) */
/* WARNING: Removing unreachable block (ram,0x000165483de1) */
/* WARNING: Removing unreachable block (ram,0x000165721b5d) */
/* WARNING: Removing unreachable block (ram,0x000165483de7) */
/* WARNING: Removing unreachable block (ram,0x000165483e21) */
/* WARNING: Removing unreachable block (ram,0x000165483e1c) */
/* WARNING: Removing unreachable block (ram,0x000165483e41) */
/* WARNING: Removing unreachable block (ram,0x000165483e46) */
/* WARNING: Removing unreachable block (ram,0x000165483e60) */
/* WARNING: Removing unreachable block (ram,0x000165483e81) */
/* WARNING: Removing unreachable block (ram,0x000165483e9a) */
/* WARNING: Removing unreachable block (ram,0x000165483e9f) */
/* WARNING: Removing unreachable block (ram,0x000165483ea5) */
/* WARNING: Removing unreachable block (ram,0x000165483eaa) */
/* WARNING: Removing unreachable block (ram,0x000165483f41) */
/* WARNING: Removing unreachable block (ram,0x000165483f52) */
/* WARNING: Removing unreachable block (ram,0x000165483f47) */
/* WARNING: Removing unreachable block (ram,0x000165483f36) */
/* WARNING: Removing unreachable block (ram,0x00014da95c27) */
/* WARNING: Removing unreachable block (ram,0x00014da95ca7) */
/* WARNING: Removing unreachable block (ram,0x00014da95cac) */
/* WARNING: Removing unreachable block (ram,0x000165483cc3) */
/* WARNING: Removing unreachable block (ram,0x000165483d57) */
/* WARNING: Removing unreachable block (ram,0x0001627652dc) */
/* WARNING: Removing unreachable block (ram,0x00014da95cb2) */

void FUN_14da95b78(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x60);
  if (uVar1 == 0) {
    FUN_1567fa52e();
    return;
  }
  FUN_166a99f00(param_1,FUN_166a99f00,~param_1 & ~*(ulonglong *)(unaff_RDI + -0x70) | param_1,
                ~((~param_1 | uVar1) & (uVar1 ^ 0xffffffffffffffff | param_1)));
  return;
}



// FUNCTION 14da95c27 FUN_14da95c27 body=233 status=ok
// SIG undefined FUN_14da95c27(void)

/* WARNING: Removing unreachable block (ram,0x0001627652f3) */
/* WARNING: Removing unreachable block (ram,0x000165483d5d) */
/* WARNING: Removing unreachable block (ram,0x000165483de1) */
/* WARNING: Removing unreachable block (ram,0x000165721b5d) */
/* WARNING: Removing unreachable block (ram,0x000165483de7) */
/* WARNING: Removing unreachable block (ram,0x000165483e21) */
/* WARNING: Removing unreachable block (ram,0x000165483e1c) */
/* WARNING: Removing unreachable block (ram,0x000165483e41) */
/* WARNING: Removing unreachable block (ram,0x000165483e46) */
/* WARNING: Removing unreachable block (ram,0x000165483e60) */
/* WARNING: Removing unreachable block (ram,0x000165483e81) */
/* WARNING: Removing unreachable block (ram,0x000165483e9a) */
/* WARNING: Removing unreachable block (ram,0x000165483e9f) */
/* WARNING: Removing unreachable block (ram,0x000165483ea5) */
/* WARNING: Removing unreachable block (ram,0x000165483eaa) */
/* WARNING: Removing unreachable block (ram,0x000165483f41) */
/* WARNING: Removing unreachable block (ram,0x000165483f52) */
/* WARNING: Removing unreachable block (ram,0x000165483f47) */
/* WARNING: Removing unreachable block (ram,0x000165483f36) */
/* WARNING: Removing unreachable block (ram,0x00014da95cb2) */

void FUN_14da95c27(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  if (-1 < (longlong)
           ((~(~*(ulonglong *)(unaff_RDI + -0x60) | ~param_1) ^ 0xffffffffffffffff) &
           (*(ulonglong *)(unaff_RDI + -0x60) | param_1))) {
    FUN_1664628fd(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,
                  ~(*(ulonglong *)(unaff_RDI + -0x70) & param_1) &
                  (*(ulonglong *)(unaff_RDI + -0x70) | param_1));
    return;
  }
  FUN_165483cc3(param_1,param_2,0x1760);
  return;
}



// FUNCTION 14da95efa FUN_14da95efa body=199 status=ok
// SIG undefined FUN_14da95efa(void)

/* WARNING: Instruction at (ram,0x00014da95f5e) overlaps instruction at (ram,0x00014da95f5d)
    */
/* WARNING: Removing unreachable block (ram,0x00014da95f38) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x00014da95f4e */
/* WARNING: Removing unreachable block (ram,0x00014da95f5d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da95efa(ulonglong param_1,undefined8 param_2)

{
  undefined8 local_res8;
  
  FUN_15b3e4823(0xffffffffffffffff -
                (((param_1 ^ 0xffffffffffffffff) - 0x41) -
                ((param_1 ^ 0xffffffffffffffff | 0x40) - 0x40)) ^ 0xffffffffffffffff,param_2,
                local_res8);
  FUN_16497c935();
  return;
}



// FUNCTION 14da961fa FUN_14da961fa body=158 status=ok
// SIG undefined FUN_14da961fa(void)

void FUN_14da961fa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  undefined8 unaff_retaddr;
  undefined8 local_res18;
  
  uVar1 = ~(local_res18 & in_RAX) & (local_res18 | in_RAX);
  *(undefined8 *)(uVar1 - 8) = param_3;
  *(undefined8 *)(uVar1 - 0x10) = param_3;
  *(undefined8 *)(uVar1 - 8) = 0x14da96299;
  FUN_15b334c12(unaff_retaddr,param_2,*(undefined8 *)(uVar1 - 0x10));
  return;
}



// FUNCTION 14da96338 FUN_14da96338 body=77 status=ok
// SIG undefined FUN_14da96338(void)

void FUN_14da96338(void)

{
  return;
}



// FUNCTION 14da96903 FUN_14da96903 body=90 status=ok
// SIG undefined FUN_14da96903(void)

void FUN_14da96903(LPCSTR param_1,ulonglong param_2)

{
  longlong unaff_R12;
  longlong alStackX_10 [3];
  
  *(undefined8 *)
   ((longlong)alStackX_10 + ~(~(param_2 & 0xffffffff9ac2a210) & (param_2 | 0xffffffff9ac2a210))) = 0
  ;
  alStackX_10[1] = -(alStackX_10[1] - unaff_R12);
                    /* WARNING: Could not recover jumptable at 0x00014da96957. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LoadLibraryA(param_1);
  return;
}



// FUNCTION 14da96a61 FUN_14da96a61 body=122 status=ok
// SIG undefined FUN_14da96a61(void)

void FUN_14da96a61(void)

{
  return;
}



// FUNCTION 14da96b84 FUN_14da96b84 body=1177 status=ok
// SIG undefined FUN_14da96b84(void)

/* WARNING: Removing unreachable block (ram,0x000162e0f64d) */
/* WARNING: Removing unreachable block (ram,0x0001654b828d) */
/* WARNING: Removing unreachable block (ram,0x0001654b82a5) */
/* WARNING: Removing unreachable block (ram,0x0001654b829f) */
/* WARNING: Removing unreachable block (ram,0x00014da96d59) */
/* WARNING: Removing unreachable block (ram,0x00014da96dda) */
/* WARNING: Removing unreachable block (ram,0x00014da96de0) */
/* WARNING: Removing unreachable block (ram,0x000162e0f5fb) */
/* WARNING: Removing unreachable block (ram,0x00014da96c0e) */
/* WARNING: Removing unreachable block (ram,0x00014da96c8e) */
/* WARNING: Removing unreachable block (ram,0x00014da96c89) */
/* WARNING: Removing unreachable block (ram,0x00014da96caa) */
/* WARNING: Removing unreachable block (ram,0x00014da96d53) */
/* WARNING: Removing unreachable block (ram,0x000156cfc07b) */

undefined8 FUN_14da96b84(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  uint in_R10D;
  int unaff_R12D;
  undefined8 in_stack_00000018;
  
  uVar1 = param_3 + unaff_R12D;
  uVar2 = (*(code *)0x156f1a318)
                    (in_stack_00000018,0xffffffff - (in_R10D & uVar1) & (in_R10D | uVar1),uVar1,
                     param_4);
  return uVar2;
}



// FUNCTION 14da96de0 FUN_14da96de0 body=289 status=ok
// SIG undefined FUN_14da96de0(void)

void FUN_14da96de0(ulonglong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  short sVar3;
  ulonglong uVar4;
  byte unaff_BL;
  longlong unaff_RDI;
  ulonglong uVar5;
  ulonglong unaff_R12;
  undefined8 local_res8;
  
  lVar2 = param_1 - unaff_R12;
  uVar5 = unaff_R12 & param_1;
  uVar4 = CONCAT71((int7)((ulonglong)param_2 >> 8),~(unaff_BL & 0xd1) + unaff_BL + -0x2e);
  FUN_166a8f717();
  uVar5 = lVar2 + (~unaff_R12 - ~uVar5) * -2 << ((char)param_1 + 0x17U & 0x3f);
  lVar2 = uVar4 - uVar5;
  bVar1 = ((byte)local_res8 & 0x1f) % 0x11;
  sVar3 = (short)lVar2;
  FUN_1616d8178(local_res8,
                CONCAT62((int6)((ulonglong)lVar2 >> 0x10),
                         sVar3 << bVar1 | (ushort)(CONCAT12(uVar4 < uVar5,sVar3) >> 0x11 - bVar1)),
                *(undefined8 *)(unaff_RDI + -0x70),*(ulonglong *)(unaff_RDI + -0x60) ^ local_res8);
  return;
}



// FUNCTION 14da96fb5 FUN_14da96fb5 body=604 status=ok
// SIG undefined FUN_14da96fb5(void)

/* WARNING: Removing unreachable block (ram,0x0001662cfa63) */
/* WARNING: Removing unreachable block (ram,0x0001662cfb07) */
/* WARNING: Removing unreachable block (ram,0x0001662cfb0d) */
/* WARNING: Removing unreachable block (ram,0x000160db3423) */
/* WARNING: Removing unreachable block (ram,0x00016669252b) */
/* WARNING: Removing unreachable block (ram,0x00014da97036) */
/* WARNING: Removing unreachable block (ram,0x00014da970e1) */
/* WARNING: Removing unreachable block (ram,0x00014da970e7) */
/* WARNING: Removing unreachable block (ram,0x0001662cf911) */
/* WARNING: Removing unreachable block (ram,0x0001563434de) */
/* WARNING: Removing unreachable block (ram,0x0001662cf9a8) */
/* WARNING: Removing unreachable block (ram,0x0001662cf9ae) */
/* WARNING: Removing unreachable block (ram,0x0001662cf9b3) */
/* WARNING: Removing unreachable block (ram,0x0001662cfa2d) */
/* WARNING: Removing unreachable block (ram,0x000164ab3974) */
/* WARNING: Removing unreachable block (ram,0x000164ab399a) */
/* WARNING: Removing unreachable block (ram,0x000164ab3a19) */
/* WARNING: Removing unreachable block (ram,0x000164ab3a25) */
/* WARNING: Removing unreachable block (ram,0x000164ab3a3d) */
/* WARNING: Removing unreachable block (ram,0x000166774fe9) */
/* WARNING: Removing unreachable block (ram,0x000160db34ab) */
/* WARNING: Removing unreachable block (ram,0x000160db34bc) */
/* WARNING: Removing unreachable block (ram,0x000160db34c3) */

undefined8
FUN_14da96fb5(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,ulonglong param_6,longlong param_7)

{
  ulonglong *puVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 unaff_RDI;
  undefined8 unaff_R12;
  longlong unaff_R14;
  ushort *puVar4;
  ulonglong uVar5;
  
  puVar4 = (ushort *)(unaff_R14 - param_3);
  *puVar4 = ~*puVar4;
  uVar2 = *puVar4;
  *puVar4 = *puVar4 & 0x100;
  *puVar4 = (uVar2 + 0x100) - *puVar4;
  *puVar4 = ~*puVar4;
  *(undefined8 *)(param_7 + -0x10) = unaff_R12;
  *(undefined8 *)(param_7 + -0x18) = unaff_RDI;
  *(ulonglong *)(param_7 + -0x20) =
       (ulonglong)((param_6 & 0x4000) != 0) * 0x4000 | (ulonglong)((param_6 & 0x800) != 0) * 0x800 |
       (ulonglong)((param_6 & 0x400) != 0) * 0x400 | (ulonglong)((param_6 & 0x200) != 0) * 0x200 |
       (ulonglong)((param_6 & 0x100) != 0) * 0x100 | (ulonglong)((param_6 & 0x80) != 0) * 0x80 |
       (ulonglong)((param_6 & 0x40) != 0) * 0x40 | (ulonglong)((param_6 & 0x10) != 0) * 0x10 |
       (ulonglong)((param_6 & 4) != 0) * 4 | (ulonglong)((param_6 & 1) != 0) |
       (ulonglong)((param_6 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((param_6 & 0x40000) != 0) * 0x40000;
  uVar5 = *(ulonglong *)(param_7 + -0x20);
  puVar1 = (ulonglong *)(param_7 + -8);
  *(ulonglong *)(param_7 + -0x18) =
       (ulonglong)((uVar5 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar5 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar5 & 0x400) != 0) * 0x400 | (ulonglong)((uVar5 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar5 & 0x100) != 0) * 0x100 | (ulonglong)((uVar5 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar5 & 0x40) != 0) * 0x40 | (ulonglong)((uVar5 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar5 & 4) != 0) * 4 | (ulonglong)((uVar5 & 1) != 0) |
       (ulonglong)((uVar5 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar5 & 0x40000) != 0) * 0x40000;
  *puVar1 = 0x4180c0c8;
  *puVar1 = *puVar1 ^ 0x4048d100;
  uVar3 = FUN_14d85d504();
  return uVar3;
}



// FUNCTION 14da97204 FUN_14da97204 body=140 status=ok
// SIG undefined FUN_14da97204(void)

void FUN_14da97204(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_R14;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = param_3;
  *(undefined8 *)(local_res18 + -0x10) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x18) = unaff_R14;
  *(code **)(local_res18 + -0x10) = FUN_14da97291;
  FUN_157120dcd(param_1,param_2,FUN_157120dcd);
  return;
}



// FUNCTION 14da97291 FUN_14da97291 body=308 status=ok
// SIG undefined FUN_14da97291(void)

/* WARNING: Instruction at (ram,0x00014da97387) overlaps instruction at (ram,0x00014da97384)
    */
/* WARNING: Removing unreachable block (ram,0x00014da97500) */
/* WARNING: Removing unreachable block (ram,0x00014da97506) */
/* WARNING: Removing unreachable block (ram,0x00014da97456) */
/* WARNING: Removing unreachable block (ram,0x00014da97461) */
/* WARNING: Removing unreachable block (ram,0x0001572cb8a8) */
/* WARNING: Removing unreachable block (ram,0x0001572cb915) */
/* WARNING: Removing unreachable block (ram,0x0001572cb91a) */
/* WARNING: Removing unreachable block (ram,0x0001572cb920) */
/* WARNING: Removing unreachable block (ram,0x0001572cb925) */
/* WARNING: Removing unreachable block (ram,0x00014da9745c) */
/* WARNING: Removing unreachable block (ram,0x00014da97381) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000010 : 0x000165ecab7f */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da97291(undefined8 param_1,undefined1 param_2)

{
  code *pcVar1;
  longlong unaff_RBX;
  longlong lVar2;
  int unaff_EDI;
  undefined8 in_R10;
  int unaff_R13D;
  undefined8 local_res8;
  
  pcVar1 = FUN_1626b2be1;
  FUN_1626b2be1(FUN_1626b2be1,param_2,local_res8,unaff_R13D + unaff_EDI);
  lVar2 = CONCAT71((int7)((ulonglong)in_R10 >> 8),1);
  FUN_166a17ee3();
  lVar2 = (unaff_RBX + lVar2) - (-1 - (longlong)pcVar1);
  FUN_156f2e31c();
  FUN_156992d89(lVar2);
  return;
}



// FUNCTION 14da973cb FUN_14da973cb body=149 status=ok
// SIG undefined FUN_14da973cb(void)

/* WARNING: Removing unreachable block (ram,0x00014da97500) */
/* WARNING: Removing unreachable block (ram,0x00014da97506) */
/* WARNING: Removing unreachable block (ram,0x00014da97456) */
/* WARNING: Removing unreachable block (ram,0x00014da97461) */
/* WARNING: Removing unreachable block (ram,0x0001572cb8a8) */
/* WARNING: Removing unreachable block (ram,0x0001572cb915) */
/* WARNING: Removing unreachable block (ram,0x0001572cb91a) */
/* WARNING: Removing unreachable block (ram,0x0001572cb920) */
/* WARNING: Removing unreachable block (ram,0x0001572cb925) */
/* WARNING: Removing unreachable block (ram,0x00014da9745c) */

void FUN_14da973cb(longlong param_1,longlong param_2)

{
  longlong unaff_RBX;
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong in_R10;
  
  lVar1 = (unaff_RBX + in_R10) - (-1 - param_1);
  uVar2 = ~in_R10 | *(ulonglong *)(param_2 + -0x88);
  uVar3 = *(ulonglong *)(param_2 + -0x88) ^ 0xffffffffffffffff | in_R10;
  FUN_156f2e31c(lVar1,param_2,~((uVar3 - (uVar2 | uVar3)) + uVar2));
  FUN_156992d89(lVar1);
  return;
}



// FUNCTION 14da97461 FUN_14da97461 body=170 status=ok
// SIG undefined FUN_14da97461(void)

/* WARNING: Removing unreachable block (ram,0x00014da97500) */
/* WARNING: Removing unreachable block (ram,0x00014da97506) */
/* WARNING: Removing unreachable block (ram,0x0001572cb91a) */
/* WARNING: Removing unreachable block (ram,0x0001572cb925) */
/* WARNING: Removing unreachable block (ram,0x0001572cb920) */

void FUN_14da97461(void)

{
  FUN_1574911c5();
  return;
}



// FUNCTION 14da9750c FUN_14da9750c body=98 status=ok
// SIG undefined FUN_14da9750c(void)

void FUN_14da9750c(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong *unaff_R15;
  
  uVar1 = *unaff_R15;
  *unaff_R15 = *unaff_R15 ^ 0xffffffffffffffff;
  *unaff_R15 = ~param_1 & *unaff_R15 | param_1;
  *unaff_R15 = 0xffffffffffffffff -
               ~(0xffffffffffffffff - (~param_1 | uVar1) | *unaff_R15 ^ 0xffffffffffffffff);
  FUN_15ba4ab09(param_1,param_2,FUN_15ba4ab09);
  return;
}



// FUNCTION 14da9756f FUN_14da9756f body=58 status=ok
// SIG undefined FUN_14da9756f(void)

void FUN_14da9756f(void)

{
  return;
}



// FUNCTION 14da9767d FUN_14da9767d body=293 status=ok
// SIG undefined FUN_14da9767d(void)

void FUN_14da9767d(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  uVar1 = ~*(ulonglong *)(unaff_RSI + -0x60) & ~unaff_RBP;
  uVar2 = ~uVar1;
  FUN_161a9fe3d(uVar2,param_2,~(*(ulonglong *)(unaff_RSI + -0x60) & unaff_RBP | uVar1),
                param_1 + unaff_RBX * -2);
  FUN_165662c9c(uVar2);
  return;
}



// FUNCTION 14da978cd FUN_14da978cd body=27 status=ok
// SIG undefined FUN_14da978cd(void)

void FUN_14da978cd(void)

{
  return;
}



// FUNCTION 14da97952 FUN_14da97952 body=586 status=ok
// SIG undefined FUN_14da97952(void)

/* WARNING: Removing unreachable block (ram,0x00014da979f8) */
/* WARNING: Removing unreachable block (ram,0x00014da97a82) */
/* WARNING: Removing unreachable block (ram,0x000160dba77c) */
/* WARNING: Removing unreachable block (ram,0x00014da979ed) */
/* WARNING: Removing unreachable block (ram,0x00014da979f3) */
/* WARNING: Removing unreachable block (ram,0x00014da97a88) */

undefined8 FUN_14da97952(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1568efb40();
  return uVar1;
}



// FUNCTION 14da97bc6 FUN_14da97bc6 body=331 status=ok
// SIG undefined FUN_14da97bc6(void)

/* WARNING: Removing unreachable block (ram,0x00014da97c4d) */
/* WARNING: Removing unreachable block (ram,0x00014da97c53) */

ulonglong FUN_14da97bc6(longlong param_1)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  ulonglong uVar2;
  
  uVar1 = *(ulonglong *)(param_1 + -0x70);
  uVar2 = ((~uVar1 & unaff_RBX ^ 0xffffffffffffffff) + unaff_RBX) - uVar1;
  return ~((~uVar2 | ~unaff_RBX | uVar1) + uVar2 + 1);
}



// FUNCTION 14da97e3d FUN_14da97e3d body=89 status=ok
// SIG undefined FUN_14da97e3d(void)

void FUN_14da97e3d(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  code *pcVar1;
  undefined8 in_R10;
  undefined4 local_res8;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  undefined8 local_res20;
  
  *(undefined8 *)(param_4 + CONCAT44(0xffffffff,local_res8) + 0x372a097d) = param_3;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(local_res20,param_2,uStackX_18,uStackX_10);
  *param_6 = 0x69977ee;
  param_6[-1] = in_R10;
  param_6[-2] = in_R10;
  param_6[-1] = FUN_165c7153c;
  return;
}



// FUNCTION 14da97f96 FUN_14da97f96 body=156 status=ok
// SIG undefined FUN_14da97f96(void)

/* WARNING: Removing unreachable block (ram,0x00014da98028) */
/* WARNING: Removing unreachable block (ram,0x00014da98039) */
/* WARNING: Removing unreachable block (ram,0x00014da980c5) */
/* WARNING: Removing unreachable block (ram,0x00014da980cb) */
/* WARNING: Removing unreachable block (ram,0x000165b36c9b) */
/* WARNING: Removing unreachable block (ram,0x00014da9802e) */
/* WARNING: Removing unreachable block (ram,0x0001662a0c36) */

undefined8 FUN_14da97f96(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da98039 FUN_14da98039 body=278 status=ok
// SIG undefined FUN_14da98039(void)

/* WARNING: Removing unreachable block (ram,0x00014da980cb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14da98039(int param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x88) | unaff_R15;
  uVar2 = ~(*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15);
  (*(code *)0x16235d751)
            (-~param_3 - param_1,param_2,(uVar1 - (uVar2 | uVar1)) + uVar2,
             *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14da98201 FUN_14da98201 body=367 status=ok
// SIG undefined FUN_14da98201(void)

/* WARNING: Removing unreachable block (ram,0x00015b1dd881) */

void FUN_14da98201(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  uint *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 in_RAX;
  undefined8 in_R11;
  ushort uVar12;
  ushort uVar13;
  byte in_CF;
  bool bVar14;
  byte in_PF;
  bool bVar15;
  byte in_AF;
  bool bVar16;
  byte in_ZF;
  bool bVar17;
  byte in_SF;
  bool bVar18;
  byte in_TF;
  bool bVar19;
  byte in_IF;
  bool bVar20;
  bool bVar21;
  byte in_OF;
  bool bVar22;
  byte in_NT;
  bool bVar23;
  byte in_AC;
  bool bVar24;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  bool bVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong auStack_28 [3];
  undefined8 uStack_10;
  ulonglong uStack_8;
  
  *(ulonglong *)((longlong)&uStack_8 + param_2) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_OF & 1) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)(in_SF & 1) * 0x80 | (ulonglong)(in_ZF & 1) * 0x40 | (ulonglong)(in_AF & 1) * 0x10
       | (ulonglong)(in_PF & 1) * 4 | (ulonglong)(in_CF & 1) | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  uVar26 = *(ulonglong *)((longlong)&uStack_8 + param_2);
  *(ulonglong *)((longlong)&uStack_8 + param_2) =
       (ulonglong)((uVar26 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar26 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar26 & 0x400) != 0) * 0x400 | (ulonglong)((uVar26 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar26 & 0x100) != 0) * 0x100 | (ulonglong)((uVar26 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar26 & 0x40) != 0) * 0x40 | (ulonglong)((uVar26 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar26 & 4) != 0) * 4 | (ulonglong)((uVar26 & 1) != 0) |
       (ulonglong)((uVar26 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar26 & 0x40000) != 0) * 0x40000;
  uVar26 = *(ulonglong *)((longlong)&uStack_8 + param_2);
  *(ulonglong *)((longlong)&uStack_8 + param_2) =
       (ulonglong)((uVar26 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar26 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar26 & 0x400) != 0) * 0x400 | (ulonglong)((uVar26 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar26 & 0x100) != 0) * 0x100 | (ulonglong)((uVar26 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar26 & 0x40) != 0) * 0x40 | (ulonglong)((uVar26 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar26 & 4) != 0) * 4 | (ulonglong)((uVar26 & 1) != 0) |
       (ulonglong)((uVar26 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar26 & 0x40000) != 0) * 0x40000;
  puVar2 = (ulonglong *)((longlong)&uStack_10 + param_2);
  *puVar2 = 0x1608 - (~(param_1 + 0x684549bU) + 2);
  *puVar2 = *puVar2 - 0x6846aa2;
  uVar26 = *puVar2;
  uVar27 = *(ulonglong *)((longlong)&uStack_8 + param_2);
  bVar23 = (uVar27 & 0x4000) != 0;
  bVar22 = (uVar27 & 0x800) != 0;
  bVar21 = (uVar27 & 0x400) != 0;
  bVar20 = (uVar27 & 0x200) != 0;
  bVar19 = (uVar27 & 0x100) != 0;
  bVar18 = (uVar27 & 0x80) != 0;
  bVar17 = (uVar27 & 0x40) != 0;
  bVar16 = (uVar27 & 0x10) != 0;
  bVar15 = (uVar27 & 4) != 0;
  bVar14 = (uVar27 & 1) != 0;
  bVar25 = (uVar27 & 0x200000) != 0;
  bVar24 = (uVar27 & 0x40000) != 0;
  *(ulonglong *)((longlong)&uStack_8 + param_2) =
       (ulonglong)bVar23 * 0x4000 | (ulonglong)bVar22 * 0x800 | (ulonglong)bVar21 * 0x400 |
       (ulonglong)bVar20 * 0x200 | (ulonglong)bVar19 * 0x100 | (ulonglong)bVar18 * 0x80 |
       (ulonglong)bVar17 * 0x40 | (ulonglong)bVar16 * 0x10 | (ulonglong)bVar15 * 4 |
       (ulonglong)bVar14 | (ulonglong)bVar25 * 0x200000 | (ulonglong)bVar24 * 0x40000;
  *(ulonglong *)((longlong)&uStack_10 + param_2) =
       (ulonglong)bVar23 * 0x4000 | (ulonglong)bVar22 * 0x800 | (ulonglong)bVar21 * 0x400 |
       (ulonglong)bVar20 * 0x200 | (ulonglong)bVar19 * 0x100 | (ulonglong)bVar18 * 0x80 |
       (ulonglong)bVar17 * 0x40 | (ulonglong)bVar16 * 0x10 | (ulonglong)bVar15 * 4 |
       (ulonglong)bVar14 | (ulonglong)bVar25 * 0x200000 | (ulonglong)bVar24 * 0x40000;
  *(uint *)((longlong)&uStack_8 + param_2) =
       *(uint *)((longlong)&uStack_8 + param_2) >> 6 |
       *(int *)((longlong)&uStack_8 + param_2) << 0x1a;
  uVar11 = *(uint *)((longlong)&uStack_8 + param_2) & 1;
  *(ulonglong *)((longlong)auStack_28 + param_2 + 0x10) =
       (ulonglong)bVar23 * 0x4000 | (ulonglong)bVar21 * 0x400 | (ulonglong)bVar20 * 0x200 |
       (ulonglong)bVar19 * 0x100 | (ulonglong)(uVar11 == 0) * 0x40 | (ulonglong)bVar16 * 0x10 |
       (ulonglong)(POPCOUNT(uVar11) == '\0') * 4 | (ulonglong)bVar25 * 0x200000 |
       (ulonglong)bVar24 * 0x40000;
  puVar3 = (uint *)((longlong)&uStack_8 + param_2);
  *puVar3 = *puVar3 << 6 | *puVar3 >> 0x1a;
  if ((*(ulonglong *)((longlong)auStack_28 + param_2 + 0x10) & 0x40) != 0) {
    uVar27 = *(ulonglong *)((longlong)&uStack_10 + param_2);
    bVar23 = (uVar27 & 0x4000) != 0;
    bVar22 = (uVar27 & 0x800) != 0;
    bVar21 = (uVar27 & 0x400) != 0;
    bVar20 = (uVar27 & 0x200) != 0;
    bVar19 = (uVar27 & 0x100) != 0;
    bVar18 = (uVar27 & 0x80) != 0;
    bVar17 = (uVar27 & 0x40) != 0;
    bVar16 = (uVar27 & 0x10) != 0;
    bVar15 = (uVar27 & 4) != 0;
    bVar14 = (uVar27 & 1) != 0;
    bVar25 = (uVar27 & 0x200000) != 0;
    bVar24 = (uVar27 & 0x40000) != 0;
    *(ulonglong *)((longlong)&uStack_10 + param_2) =
         (ulonglong)bVar23 * 0x4000 | (ulonglong)bVar22 * 0x800 | (ulonglong)bVar21 * 0x400 |
         (ulonglong)bVar20 * 0x200 | (ulonglong)bVar19 * 0x100 | (ulonglong)bVar18 * 0x80 |
         (ulonglong)bVar17 * 0x40 | (ulonglong)bVar16 * 0x10 | (ulonglong)bVar15 * 4 |
         (ulonglong)bVar14 | (ulonglong)bVar25 * 0x200000 | (ulonglong)bVar24 * 0x40000;
    *(longlong *)((longlong)auStack_28 + param_2 + 0x10) = param_2;
    *(undefined8 *)((longlong)auStack_28 + param_2 + 8) = 0x3cd5;
    *(ulonglong *)((longlong)auStack_28 + param_2) =
         (ulonglong)bVar23 * 0x4000 | (ulonglong)bVar22 * 0x800 | (ulonglong)bVar21 * 0x400 |
         (ulonglong)bVar20 * 0x200 | (ulonglong)bVar19 * 0x100 | (ulonglong)bVar18 * 0x80 |
         (ulonglong)bVar17 * 0x40 | (ulonglong)bVar16 * 0x10 | (ulonglong)bVar15 * 4 |
         (ulonglong)bVar14 | (ulonglong)bVar25 * 0x200000 | (ulonglong)bVar24 * 0x40000;
    uVar8 = *(undefined8 *)((longlong)auStack_28 + param_2 + 8);
    if ((*(ushort *)((longlong)&uStack_10 + param_2) & 0x80) != 0) {
      FUN_15b1dd7ef(uVar26,*(undefined8 *)((longlong)auStack_28 + param_2 + 0x10));
      return;
    }
    uVar9 = *(undefined8 *)((longlong)auStack_28 + param_2 + 0x10);
    uVar27 = *(ulonglong *)((longlong)&uStack_10 + param_2);
    *(ulonglong *)((longlong)&uStack_10 + param_2) =
         (ulonglong)((uVar27 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar27 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar27 & 0x400) != 0) * 0x400 | (ulonglong)((uVar27 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar27 & 0x100) != 0) * 0x100 | (ulonglong)((uVar27 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar27 & 0x40) != 0) * 0x40 | (ulonglong)((uVar27 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar27 & 4) != 0) * 4 | (ulonglong)((uVar27 & 1) != 0) |
         (ulonglong)((uVar27 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar27 & 0x40000) != 0) * 0x40000;
    if ((*(uint *)((longlong)&uStack_10 + param_2) >> 7 & 1) == 0) {
      FUN_15b1dd7ef();
      return;
    }
    FUN_14da982c2(uVar26,uVar9,param_3,uVar8);
    return;
  }
  uVar27 = *(ulonglong *)((longlong)&uStack_10 + param_2);
  *(ulonglong *)((longlong)&uStack_10 + param_2) =
       (ulonglong)((uVar27 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar27 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar27 & 0x400) != 0) * 0x400 | (ulonglong)((uVar27 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar27 & 0x100) != 0) * 0x100 | (ulonglong)((uVar27 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar27 & 0x40) != 0) * 0x40 | (ulonglong)((uVar27 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar27 & 4) != 0) * 4 | 1 | (ulonglong)((uVar27 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar27 & 0x40000) != 0) * 0x40000;
  *(uint *)((longlong)&uStack_10 + param_2) =
       *(int *)((longlong)&uStack_10 + param_2) << 0x1f |
       *(uint *)((longlong)&uStack_10 + param_2) >> 1;
  *(uint *)((longlong)&uStack_10 + param_2) = *(uint *)((longlong)&uStack_10 + param_2) & 0x80000000
  ;
  *(uint *)((longlong)&uStack_10 + param_2) = *(uint *)((longlong)&uStack_10 + param_2) >> 0x1f;
  if (*(int *)((longlong)&uStack_10 + param_2) == 0) {
    FUN_16191d531();
    return;
  }
  uVar27 = *(ulonglong *)((longlong)&uStack_8 + param_2);
  *(undefined8 *)((longlong)&uStack_8 + param_2) =
       *(undefined8 *)((longlong)ProcessEnvironmentBlock + 0x18);
  puVar5 = (undefined8 *)
           **(undefined8 **)**(undefined8 **)(*(longlong *)((longlong)&uStack_8 + param_2) + 0x20);
  *(undefined8 *)((longlong)&uStack_8 + param_2) = in_RAX;
  *(undefined8 *)((longlong)&uStack_10 + param_2) = 0xffffffffffffe9f8;
  plVar4 = (longlong *)*puVar5;
  uVar9 = *(undefined8 *)((longlong)&uStack_8 + param_2);
  *(ulonglong *)((longlong)&uStack_8 + param_2) =
       (ulonglong)((uVar27 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar27 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar27 & 0x400) != 0) * 0x400 | (ulonglong)((uVar27 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar27 & 0x100) != 0) * 0x100 | (ulonglong)((uVar27 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar27 & 0x40) != 0) * 0x40 | (ulonglong)((uVar27 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar27 & 4) != 0) * 4 | (ulonglong)((uVar27 & 1) != 0) |
       (ulonglong)((uVar27 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar27 & 0x40000) != 0) * 0x40000;
  uVar27 = *(ulonglong *)((longlong)&uStack_8 + param_2);
  plVar1 = (longlong *)((longlong)&uStack_8 + param_2);
  *plVar1 = *plVar4;
  lVar6 = *plVar1;
  *(undefined4 *)((longlong)&uStack_10 + param_2) = 0x4821344;
  *(undefined4 *)((longlong)&uStack_10 + param_2 + 4) = 0;
  lVar10 = *(longlong *)((longlong)&uStack_10 + param_2);
  *(ulonglong *)((longlong)&uStack_10 + param_2) =
       (ulonglong)((uVar27 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar27 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar27 & 0x400) != 0) * 0x400 | (ulonglong)((uVar27 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar27 & 0x100) != 0) * 0x100 | (ulonglong)((uVar27 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar27 & 0x40) != 0) * 0x40 | (ulonglong)((uVar27 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar27 & 4) != 0) * 4 | (ulonglong)((uVar27 & 1) != 0) |
       (ulonglong)((uVar27 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar27 & 0x40000) != 0) * 0x40000;
  uVar27 = *(ulonglong *)((longlong)&uStack_10 + param_2);
  bVar23 = (uVar27 & 0x4000) != 0;
  bVar22 = (uVar27 & 0x800) != 0;
  bVar21 = (uVar27 & 0x400) != 0;
  bVar20 = (uVar27 & 0x200) != 0;
  bVar19 = (uVar27 & 0x100) != 0;
  bVar18 = (uVar27 & 0x80) != 0;
  bVar17 = (uVar27 & 0x40) != 0;
  bVar16 = (uVar27 & 0x10) != 0;
  bVar15 = (uVar27 & 4) != 0;
  bVar14 = (uVar27 & 1) != 0;
  bVar25 = (uVar27 & 0x200000) != 0;
  bVar24 = (uVar27 & 0x40000) != 0;
  puVar5 = (undefined8 *)((longlong)plVar1 + lVar10 + -0x4821344);
  *puVar5 = *(undefined8 *)(lVar6 + 0x6a);
  uVar8 = *puVar5;
  *(ulonglong *)((longlong)plVar1 + lVar10 + -0x4821344) =
       (ulonglong)bVar23 * 0x4000 | (ulonglong)bVar22 * 0x800 | (ulonglong)bVar21 * 0x400 |
       (ulonglong)bVar20 * 0x200 | (ulonglong)bVar19 * 0x100 | (ulonglong)bVar18 * 0x80 |
       (ulonglong)bVar17 * 0x40 | (ulonglong)bVar16 * 0x10 | (ulonglong)bVar15 * 4 |
       (ulonglong)bVar14 | (ulonglong)bVar25 * 0x200000 | (ulonglong)bVar24 * 0x40000;
  *(ulonglong *)((longlong)plVar1 + lVar10 + -0x482134c) =
       (ulonglong)bVar23 * 0x4000 | (ulonglong)bVar22 * 0x800 | (ulonglong)bVar21 * 0x400 |
       (ulonglong)bVar20 * 0x200 | (ulonglong)bVar19 * 0x100 | (ulonglong)bVar18 * 0x80 |
       (ulonglong)bVar17 * 0x40 | (ulonglong)bVar16 * 0x10 | (ulonglong)bVar15 * 4 |
       (ulonglong)bVar14 | (ulonglong)bVar25 * 0x200000 | (ulonglong)bVar24 * 0x40000;
  *(ulonglong *)((longlong)plVar1 + lVar10 + -0x4821354) =
       (ulonglong)bVar23 * 0x4000 | (ulonglong)bVar22 * 0x800 | (ulonglong)bVar21 * 0x400 |
       (ulonglong)bVar20 * 0x200 | (ulonglong)bVar19 * 0x100 | (ulonglong)bVar18 * 0x80 |
       (ulonglong)bVar17 * 0x40 | (ulonglong)bVar16 * 0x10 | (ulonglong)bVar15 * 4 |
       (ulonglong)bVar14 | (ulonglong)bVar25 * 0x200000 | (ulonglong)bVar24 * 0x40000;
  *(int *)((longlong)plVar1 + lVar10 + -0x4821354) =
       *(int *)((longlong)plVar1 + lVar10 + -0x4821354) << 0x19;
  *(uint *)((longlong)plVar1 + lVar10 + -0x4821354) =
       *(uint *)((longlong)plVar1 + lVar10 + -0x4821354) >> 0x1f;
  if (*(int *)((longlong)plVar1 + lVar10 + -0x4821354) == 0) {
    FUN_165489d8c();
    return;
  }
  if ((*(ulonglong *)((longlong)plVar1 + lVar10 + -0x482134c) & 0x40) == 0) {
    FUN_161d5f01f();
    return;
  }
  *(undefined4 *)((longlong)plVar1 + lVar10 + -0x482134c) = 0x47b2d3c8;
  *(undefined4 *)((longlong)plVar1 + lVar10 + -0x4821348) = 0;
  uVar27 = *(ulonglong *)((longlong)plVar1 + lVar10 + -0x482134c) ^ 0x6aa125e8;
  uVar28 = *(ulonglong *)((longlong)plVar1 + lVar10 + -0x4821344);
  *(ulonglong *)((longlong)plVar1 + lVar10 + -0x4821344) =
       (ulonglong)((uVar28 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar28 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar28 & 0x400) != 0) * 0x400 | (ulonglong)((uVar28 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar28 & 0x100) != 0) * 0x100 | (ulonglong)((uVar28 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar28 & 0x40) != 0) * 0x40 | (ulonglong)((uVar28 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar28 & 4) != 0) * 4 | (ulonglong)((uVar28 & 1) != 0) |
       (ulonglong)((uVar28 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar28 & 0x40000) != 0) * 0x40000;
  puVar7 = (undefined8 *)
           (~(~(uVar27 & 0xffffffffd1a9d777) & (uVar27 - 0x2e562889) - (uVar27 & 0xffffffffd1a9d777)
             ) - 0x345dea0);
  uVar28 = *(ulonglong *)((longlong)plVar1 + lVar10 + -0x4821344);
  *(ulonglong *)((longlong)plVar1 + lVar10 + -0x4821344) =
       (ulonglong)((uVar28 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar28 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar28 & 0x400) != 0) * 0x400 | (ulonglong)((uVar28 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar28 & 0x100) != 0) * 0x100 | (ulonglong)((uVar28 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar28 & 0x40) != 0) * 0x40 | (ulonglong)((uVar28 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar28 & 4) != 0) * 4 | (ulonglong)((uVar28 & 1) != 0) |
       (ulonglong)((uVar28 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar28 & 0x40000) != 0) * 0x40000;
  uVar28 = *(ulonglong *)((longlong)plVar1 + lVar10 + -0x4821344);
  bVar23 = (uVar28 & 0x4000) != 0;
  bVar22 = (uVar28 & 0x800) != 0;
  bVar21 = (uVar28 & 0x400) != 0;
  bVar20 = (uVar28 & 0x200) != 0;
  bVar19 = (uVar28 & 0x100) != 0;
  bVar18 = (uVar28 & 0x80) != 0;
  bVar17 = (uVar28 & 0x40) != 0;
  bVar16 = (uVar28 & 0x10) != 0;
  bVar15 = (uVar28 & 4) != 0;
  bVar14 = (uVar28 & 1) != 0;
  bVar25 = (uVar28 & 0x200000) != 0;
  bVar24 = (uVar28 & 0x40000) != 0;
  *(ulonglong *)((longlong)plVar1 + lVar10 + -0x4821344) =
       (ulonglong)bVar23 * 0x4000 | (ulonglong)bVar22 * 0x800 | (ulonglong)bVar21 * 0x400 |
       (ulonglong)bVar20 * 0x200 | (ulonglong)bVar19 * 0x100 | (ulonglong)bVar18 * 0x80 |
       (ulonglong)bVar17 * 0x40 | (ulonglong)bVar16 * 0x10 | (ulonglong)bVar15 * 4 |
       (ulonglong)bVar14 | (ulonglong)bVar25 * 0x200000 | (ulonglong)bVar24 * 0x40000;
  *(ulonglong *)((longlong)plVar1 + lVar10 + -0x482134c) = uVar27;
  puVar5 = (undefined8 *)((longlong)plVar1 + lVar10 + -0x4821354);
  *puVar5 = uVar8;
  *(ulonglong *)((longlong)plVar1 + lVar10 + -0x482135c) =
       (ulonglong)bVar23 * 0x4000 | (ulonglong)bVar22 * 0x800 | (ulonglong)bVar21 * 0x400 |
       (ulonglong)bVar20 * 0x200 | (ulonglong)bVar19 * 0x100 | (ulonglong)bVar18 * 0x80 |
       (ulonglong)bVar17 * 0x40 | (ulonglong)bVar16 * 0x10 | (ulonglong)bVar15 * 4 |
       (ulonglong)bVar14 | (ulonglong)bVar25 * 0x200000 | (ulonglong)bVar24 * 0x40000;
  plVar4 = (longlong *)((longlong)plVar1 + lVar10 + -0x4821364);
  *(undefined4 *)plVar4 = 0x912006b5;
  *(undefined4 *)((longlong)plVar1 + lVar10 + -0x4821360) = 0xffffffff;
  uVar12 = *(ushort *)((longlong)puVar5 + *plVar4 + 0x6edff95b);
  uVar27 = *(ulonglong *)((longlong)plVar1 + lVar10 + -0x482135c);
  uVar8 = *puVar5;
  *(undefined8 *)((longlong)plVar1 + lVar10 + -0x4821354) = uVar9;
  uVar12 = ~uVar12 | 0xff7f;
  uVar13 = ~uVar12;
  *(ulonglong *)((longlong)plVar1 + lVar10 + -0x4821354) =
       (ulonglong)((uVar27 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar27 & 0x400) != 0) * 0x400 |
       (ulonglong)((uVar27 & 0x200) != 0) * 0x200 | (ulonglong)((uVar27 & 0x100) != 0) * 0x100 |
       (ulonglong)(-1 < (short)uVar12) * 0x80 | (ulonglong)(uVar13 == 0) * 0x40 |
       (ulonglong)((uVar27 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(uVar13 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)((uVar27 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar27 & 0x40000) != 0) * 0x40000;
  *(longlong *)((longlong)plVar1 + lVar10 + -0x482135c) = lVar10 + -0x482133c;
  if ((*(ushort *)((longlong)plVar1 + lVar10 + -0x4821354) & 0x40) != 0) {
    if ((*(ulonglong *)((longlong)plVar1 + lVar10 + -0x4821344) & 0x80) != 0) {
      *(undefined8 *)((longlong)plVar1 + lVar10 + -0x482132c) = *puVar7;
      uVar27 = *(ulonglong *)((longlong)plVar1 + lVar10 + -0x482132c);
      *(undefined8 *)((longlong)plVar1 + lVar10 + -0x482132c) =
           *(undefined8 *)((longlong)plVar1 + lVar10 + -0x4821334);
      *(ulonglong *)((longlong)plVar1 + lVar10 + -0x4821334) =
           uVar27 + uVar26 + (uVar27 & uVar26) * -2;
      *(undefined8 *)((longlong)plVar1 + lVar10 + -0x482132c) = in_R11;
      FUN_160bc81a9();
      return;
    }
    FUN_161241e94(uVar26,uVar8,*(undefined8 *)((longlong)plVar1 + lVar10 + -0x482135c),puVar7);
    return;
  }
  FUN_161241e94(uVar26,uVar8,*(undefined8 *)((longlong)plVar1 + lVar10 + -0x482135c),puVar7);
  return;
}



// FUNCTION 14da982c2 FUN_14da982c2 body=721 status=ok
// SIG undefined FUN_14da982c2(void)

/* WARNING: Removing unreachable block (ram,0x000160d471e1) */
/* WARNING: Removing unreachable block (ram,0x00014da98353) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14da982c2(undefined1 param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong in_RAX;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong uStackX_10;
  
  uVar2 = uStackX_10 ^ unaff_R15;
  *(undefined8 *)(uVar2 - 8) = in_R11;
  *(undefined8 *)(uVar2 - 0x10) = unaff_R14;
  puVar1 = (ulonglong *)(uVar2 - 0x18);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ param_2;
  *(undefined8 *)(uVar2 - 0x20) = unaff_RDI;
  *(undefined8 *)(uVar2 - 0x20) = unaff_retaddr;
  *(ulonglong *)(uVar2 - 0x28) = in_RAX;
  uVar3 = *puVar1;
  *puVar1 = *(ulonglong *)(uVar2 - 0x28);
  *(undefined4 *)puVar1 = 0xe6afe30;
  *(undefined4 *)(uVar2 - 0x14) = 0xa77c4b38;
  *(undefined8 *)(uVar2 - 0x20) = unaff_RBX;
  *(int *)(uVar2 - 0x14) = *(int *)(uVar2 - 0x14) + 0x5883b4c8;
  uVar2 = *puVar1;
  *(undefined8 *)((longlong)puVar1 + (uVar2 - 0xe6afe28)) =
       *(undefined8 *)((longlong)puVar1 + (uVar2 - 0xe6afe20));
  *(ulonglong *)((longlong)puVar1 + (uVar2 - 0xe6afe30)) = uVar3;
  *(undefined **)((longlong)puVar1 + (uVar2 - 0xe6afe38)) = &DAT_16558dc3c;
  uVar4 = FUN_16558dc04(param_1,FUN_16558dc04);
  return uVar4;
}



// FUNCTION 14da983e8 FUN_14da983e8 body=171 status=ok
// SIG undefined FUN_14da983e8(void)

void FUN_14da983e8(ulonglong param_1,ulonglong param_2)

{
  longlong unaff_RDI;
  longlong lVar1;
  undefined8 unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong auStack_18 [3];
  
  lVar1 = unaff_RDI - (param_2 ^ 0x20e1f77a);
  param_1 = param_1 ^ unaff_R15;
  *(undefined8 *)((longlong)auStack_18 + lVar1 + 0x10) = *(undefined8 *)(unaff_R13 + -0x28);
  *(undefined8 *)((longlong)auStack_18 + lVar1 + 0x10) = unaff_R12;
  *(ulonglong *)((longlong)auStack_18 + lVar1 + 0x10) = param_1;
  *(ulonglong *)((longlong)auStack_18 + lVar1 + 8) = param_1;
  *(ulonglong *)((longlong)auStack_18 + lVar1) = param_1;
  *(code **)((longlong)auStack_18 + lVar1 + 0x10) = FUN_14da98493;
  *(undefined **)((longlong)auStack_18 + lVar1 + 8) = &DAT_15b498949;
  return;
}



// FUNCTION 14da98493 FUN_14da98493 body=387 status=ok
// SIG undefined FUN_14da98493(void)

/* WARNING: Removing unreachable block (ram,0x00015786c460) */
/* WARNING: Removing unreachable block (ram,0x00014da98510) */
/* WARNING: Removing unreachable block (ram,0x000166ca44cf) */
/* WARNING: Removing unreachable block (ram,0x000166ca44db) */
/* WARNING: Removing unreachable block (ram,0x00015b0f53ad) */
/* WARNING: Removing unreachable block (ram,0x00015b0f5439) */
/* WARNING: Removing unreachable block (ram,0x00015b0f5447) */
/* WARNING: Removing unreachable block (ram,0x00015b0f5442) */
/* WARNING: Removing unreachable block (ram,0x00015b0f5431) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14da98493(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_15b0f53ad();
  return uVar1;
}



// FUNCTION 14da98516 FUN_14da98516 body=329 status=ok
// SIG undefined FUN_14da98516(void)

/* WARNING: Removing unreachable block (ram,0x00014da985c1) */

void FUN_14da98516(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  
  FUN_16591c4a8(param_1,param_2,param_3,param_4,*(undefined8 *)(unaff_R13 + -0x70));
  return;
}



// FUNCTION 14da98662 FUN_14da98662 body=311 status=ok
// SIG undefined FUN_14da98662(void)

/* WARNING: Removing unreachable block (ram,0x00015671f92b) */
/* WARNING: Removing unreachable block (ram,0x000165c452a0) */
/* WARNING: Removing unreachable block (ram,0x00015671f9b1) */
/* WARNING: Removing unreachable block (ram,0x00015671f9bd) */
/* WARNING: Removing unreachable block (ram,0x00015671f9c2) */
/* WARNING: Removing unreachable block (ram,0x000160d7fe91) */
/* WARNING: Removing unreachable block (ram,0x000160d7fee7) */
/* WARNING: Removing unreachable block (ram,0x00014da98704) */
/* WARNING: Removing unreachable block (ram,0x00014da9870a) */
/* WARNING: Removing unreachable block (ram,0x00015671fae0) */
/* WARNING: Removing unreachable block (ram,0x00015671fae6) */
/* WARNING: Removing unreachable block (ram,0x00015671faf1) */

undefined8 FUN_14da98662(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_15671f92b();
  return uVar1;
}



// FUNCTION 14da9882d FUN_14da9882d body=131 status=ok
// SIG undefined FUN_14da9882d(void)

void FUN_14da9882d(ulonglong param_1,ulonglong param_2,undefined8 param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *param_4;
  uVar2 = *param_4;
  uVar3 = *param_4;
  *param_4 = ~*param_4;
  uVar4 = *param_4;
  *param_4 = ~*param_4;
  *param_4 = (~(uVar4 & param_1) + param_1) - *param_4;
  *param_4 = ~(uVar1 - (uVar3 - (param_2 | uVar2)) & *param_4);
  return;
}



// FUNCTION 14da98a93 FUN_14da98a93 body=323 status=ok
// SIG undefined FUN_14da98a93(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00015b4aa795) overlaps instruction at (ram,0x00015b4aa794)
    */
/* WARNING: Removing unreachable block (ram,0x00014da98ce6) */
/* WARNING: Removing unreachable block (ram,0x00014da98cf7) */
/* WARNING: Removing unreachable block (ram,0x00014da98c58) */
/* WARNING: Removing unreachable block (ram,0x00014da98c5e) */
/* WARNING: Removing unreachable block (ram,0x000164c1b476) */
/* WARNING: Removing unreachable block (ram,0x000164c1b4a7) */
/* WARNING: Removing unreachable block (ram,0x000164c1b4ab) */
/* WARNING: Removing unreachable block (ram,0x000164c1b534) */
/* WARNING: Removing unreachable block (ram,0x000164c1b53a) */
/* WARNING: Removing unreachable block (ram,0x000164c1b53f) */
/* WARNING: Removing unreachable block (ram,0x000156e8ca98) */
/* WARNING: Removing unreachable block (ram,0x000156e8cb27) */
/* WARNING: Removing unreachable block (ram,0x000162f4000a) */
/* WARNING: Removing unreachable block (ram,0x000156e8cb2d) */
/* WARNING: Removing unreachable block (ram,0x000156e8cb6a) */
/* WARNING: Removing unreachable block (ram,0x000156e8cbbf) */
/* WARNING: Removing unreachable block (ram,0x00014d7a8bdb) */
/* WARNING: Removing unreachable block (ram,0x00014d7a8be2) */
/* WARNING: Removing unreachable block (ram,0x00014d7a8b96) */
/* WARNING: Removing unreachable block (ram,0x000165559367) */
/* WARNING: Removing unreachable block (ram,0x000165559391) */
/* WARNING: Removing unreachable block (ram,0x0001655594a8) */
/* WARNING: Removing unreachable block (ram,0x0001655594ae) */
/* WARNING: Removing unreachable block (ram,0x0001655594b9) */
/* WARNING: Removing unreachable block (ram,0x0001655594b4) */
/* WARNING: Removing unreachable block (ram,0x0001655594c6) */
/* WARNING: Removing unreachable block (ram,0x00016253677a) */
/* WARNING: Removing unreachable block (ram,0x0001621c42dc) */
/* WARNING: Removing unreachable block (ram,0x0001621c430f) */
/* WARNING: Removing unreachable block (ram,0x0001621c431a) */
/* WARNING: Removing unreachable block (ram,0x00016483b14c) */
/* WARNING: Removing unreachable block (ram,0x0001621c4326) */
/* WARNING: Removing unreachable block (ram,0x0001621c4398) */
/* WARNING: Removing unreachable block (ram,0x0001621c439d) */
/* WARNING: Removing unreachable block (ram,0x0001621c43a3) */
/* WARNING: Removing unreachable block (ram,0x0001655122f6) */
/* WARNING: Removing unreachable block (ram,0x000165512398) */
/* WARNING: Removing unreachable block (ram,0x00016551239e) */
/* WARNING: Removing unreachable block (ram,0x000156852085) */
/* WARNING: Removing unreachable block (ram,0x000162c8cdba) */
/* WARNING: Removing unreachable block (ram,0x000156852124) */
/* WARNING: Removing unreachable block (ram,0x000156852134) */
/* WARNING: Removing unreachable block (ram,0x00015685213f) */
/* WARNING: Removing unreachable block (ram,0x00014da98ba9) */
/* WARNING: Removing unreachable block (ram,0x00014da98cec) */
/* WARNING: Removing unreachable block (ram,0x00015b4aa87e) */
/* WARNING: Removing unreachable block (ram,0x00014e055de0) */
/* WARNING: Removing unreachable block (ram,0x00014e055e73) */
/* WARNING: Removing unreachable block (ram,0x00014e055e78) */
/* WARNING: Removing unreachable block (ram,0x00014e055d21) */
/* WARNING: Removing unreachable block (ram,0x00014e055dd1) */
/* WARNING: Removing unreachable block (ram,0x00014e055dd8) */
/* WARNING: Removing unreachable block (ram,0x000165ee7c64) */
/* WARNING: Removing unreachable block (ram,0x00015b4aa873) */
/* WARNING: Removing unreachable block (ram,0x00014da98b25) */

ulonglong FUN_14da98a93(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if ((in_RAX & 0x80) != 0) {
    uVar1 = FUN_16274ce40(param_1,param_2);
    return uVar1;
  }
  return in_RAX & 0xff;
}



// FUNCTION 14da98bc1 FUN_14da98bc1 body=474 status=ok
// SIG undefined FUN_14da98bc1(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001655594c1) overlaps instruction at (ram,0x0001655594c0)
    */
/* WARNING: Removing unreachable block (ram,0x00014da98ce6) */
/* WARNING: Removing unreachable block (ram,0x00014da98cf7) */
/* WARNING: Removing unreachable block (ram,0x000164c1b534) */
/* WARNING: Removing unreachable block (ram,0x000164c1b53a) */
/* WARNING: Removing unreachable block (ram,0x000164c1b53f) */
/* WARNING: Removing unreachable block (ram,0x00014da98c58) */
/* WARNING: Removing unreachable block (ram,0x00014da98c5e) */
/* WARNING: Removing unreachable block (ram,0x000164c1b476) */
/* WARNING: Removing unreachable block (ram,0x000164c1b4a7) */
/* WARNING: Removing unreachable block (ram,0x000164c1b4ab) */
/* WARNING: Removing unreachable block (ram,0x000156e8ca98) */
/* WARNING: Removing unreachable block (ram,0x000156e8cb27) */
/* WARNING: Removing unreachable block (ram,0x000162f4000a) */
/* WARNING: Removing unreachable block (ram,0x000156e8cb2d) */
/* WARNING: Removing unreachable block (ram,0x000156e8cb6a) */
/* WARNING: Removing unreachable block (ram,0x000156e8cbbf) */
/* WARNING: Removing unreachable block (ram,0x00014d7a8bdb) */
/* WARNING: Removing unreachable block (ram,0x00014d7a8be2) */
/* WARNING: Removing unreachable block (ram,0x00014d7a8b96) */
/* WARNING: Removing unreachable block (ram,0x000165559367) */
/* WARNING: Removing unreachable block (ram,0x000165559391) */
/* WARNING: Removing unreachable block (ram,0x0001655594a8) */
/* WARNING: Removing unreachable block (ram,0x0001655594ae) */
/* WARNING: Removing unreachable block (ram,0x0001655594b9) */
/* WARNING: Removing unreachable block (ram,0x0001655594b4) */
/* WARNING: Removing unreachable block (ram,0x0001655594c6) */
/* WARNING: Removing unreachable block (ram,0x00016253677a) */
/* WARNING: Removing unreachable block (ram,0x0001621c42dc) */
/* WARNING: Removing unreachable block (ram,0x0001621c430f) */
/* WARNING: Removing unreachable block (ram,0x0001621c431a) */
/* WARNING: Removing unreachable block (ram,0x00016483b14c) */
/* WARNING: Removing unreachable block (ram,0x0001621c4326) */
/* WARNING: Removing unreachable block (ram,0x0001621c4398) */
/* WARNING: Removing unreachable block (ram,0x0001621c439d) */
/* WARNING: Removing unreachable block (ram,0x0001621c43a3) */
/* WARNING: Removing unreachable block (ram,0x0001655122f6) */
/* WARNING: Removing unreachable block (ram,0x000165512398) */
/* WARNING: Removing unreachable block (ram,0x00016551239e) */
/* WARNING: Removing unreachable block (ram,0x000156852085) */
/* WARNING: Removing unreachable block (ram,0x000162c8cdba) */
/* WARNING: Removing unreachable block (ram,0x000156852124) */
/* WARNING: Removing unreachable block (ram,0x000156852134) */
/* WARNING: Removing unreachable block (ram,0x00015685213f) */
/* WARNING: Removing unreachable block (ram,0x00014da98cec) */

undefined8 FUN_14da98bc1(void)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong unaff_R12;
  
  uVar1 = thunk_FUN_161a75f96(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                              ~*(ulonglong *)(unaff_R12 + -0x60),
                              *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,
                              ~(*(ulonglong *)(unaff_R12 + -0x30) & in_RAX) &
                              (*(ulonglong *)(unaff_R12 + -0x30) | in_RAX));
  return uVar1;
}



// FUNCTION 14da98cf7 FUN_14da98cf7 body=157 status=ok
// SIG undefined FUN_14da98cf7(void)

void FUN_14da98cf7(ulonglong param_1,undefined8 param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 in_RAX;
  ulonglong unaff_RSI;
  undefined2 *unaff_RDI;
  undefined8 in_R11;
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
  undefined2 unaff_retaddr;
  undefined8 uStackX_a;
  ulonglong *local_res1a;
  
  *unaff_RDI = unaff_retaddr;
  local_res1a[-1] = param_1;
  local_res1a[-2] = unaff_RSI;
  local_res1a[-3] = unaff_RSI;
  local_res1a[-4] = in_RAX;
  local_res1a[-2] = local_res1a[-1];
  local_res1a[-3] = in_R11;
  local_res1a[-1] = 0;
  local_res1a[-1] = local_res1a[-1] + 0x16103319e;
  local_res1a[-3] = (ulonglong)FUN_14da98d95;
  FUN_161033173();
  uVar16 = *local_res1a;
  bVar11 = (uVar16 & 0x4000) != 0;
  bVar10 = (uVar16 & 0x800) != 0;
  bVar9 = (uVar16 & 0x200) != 0;
  bVar8 = (uVar16 & 0x100) != 0;
  bVar7 = (uVar16 & 0x80) != 0;
  bVar6 = (uVar16 & 0x40) != 0;
  bVar5 = (uVar16 & 0x10) != 0;
  bVar4 = (uVar16 & 4) != 0;
  bVar3 = (uVar16 & 1) != 0;
  bVar15 = (uVar16 & 0x200000) != 0;
  bVar12 = (uVar16 & 0x40000) != 0;
  bVar14 = 0;
  bVar13 = 0;
  lVar1 = local_res1a[1];
  pcVar2 = (code *)swi(0x2e);
  (*pcVar2)();
  *(undefined8 *)(lVar1 + -8) = param_2;
  *(undefined8 *)(lVar1 + -0x10) = param_2;
  *(undefined8 *)(lVar1 + -0x18) = uStackX_a;
  *(ulonglong *)(lVar1 + -0x20) =
       (ulonglong)(bVar11 & 1) * 0x4000 | (ulonglong)(bVar10 & 1) * 0x800 |
       (ulonglong)((uVar16 & 0x400) != 0) * 0x400 | (ulonglong)(bVar9 & 1) * 0x200 |
       (ulonglong)(bVar8 & 1) * 0x100 | (ulonglong)(bVar7 & 1) * 0x80 |
       (ulonglong)(bVar6 & 1) * 0x40 | (ulonglong)(bVar5 & 1) * 0x10 | (ulonglong)(bVar4 & 1) * 4 |
       (ulonglong)(bVar3 & 1) | (ulonglong)(bVar15 & 1) * 0x200000 |
       (ulonglong)(bVar14 & 1) * 0x100000 | (ulonglong)(bVar13 & 1) * 0x80000 |
       (ulonglong)(bVar12 & 1) * 0x40000;
  *(undefined1 **)(lVar1 + -8) = &LAB_14da98dcd;
  return;
}



// FUNCTION 14da98d95 FUN_14da98d95 body=54 status=ok
// SIG undefined FUN_14da98d95(void)

void FUN_14da98d95(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 unaff_RBP;
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
  ulonglong uStackX_10;
  longlong local_res18;
  
  bVar10 = (uStackX_10 & 0x4000) != 0;
  bVar9 = (uStackX_10 & 0x800) != 0;
  bVar8 = (uStackX_10 & 0x200) != 0;
  bVar7 = (uStackX_10 & 0x100) != 0;
  bVar6 = (uStackX_10 & 0x80) != 0;
  bVar5 = (uStackX_10 & 0x40) != 0;
  bVar4 = (uStackX_10 & 0x10) != 0;
  bVar3 = (uStackX_10 & 4) != 0;
  bVar2 = (uStackX_10 & 1) != 0;
  bVar14 = (uStackX_10 & 0x200000) != 0;
  bVar11 = (uStackX_10 & 0x40000) != 0;
  bVar13 = 0;
  bVar12 = 0;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)();
  *(undefined8 *)(local_res18 + -8) = param_2;
  *(undefined8 *)(local_res18 + -0x10) = param_2;
  *(undefined8 *)(local_res18 + -0x18) = unaff_RBP;
  *(ulonglong *)(local_res18 + -0x20) =
       (ulonglong)(bVar10 & 1) * 0x4000 | (ulonglong)(bVar9 & 1) * 0x800 |
       (ulonglong)((uStackX_10 & 0x400) != 0) * 0x400 | (ulonglong)(bVar8 & 1) * 0x200 |
       (ulonglong)(bVar7 & 1) * 0x100 | (ulonglong)(bVar6 & 1) * 0x80 |
       (ulonglong)(bVar5 & 1) * 0x40 | (ulonglong)(bVar4 & 1) * 0x10 | (ulonglong)(bVar3 & 1) * 4 |
       (ulonglong)(bVar2 & 1) | (ulonglong)(bVar14 & 1) * 0x200000 |
       (ulonglong)(bVar13 & 1) * 0x100000 | (ulonglong)(bVar12 & 1) * 0x80000 |
       (ulonglong)(bVar11 & 1) * 0x40000;
  *(undefined1 **)(local_res18 + -8) = &LAB_14da98dcd;
  return;
}



// FUNCTION 14da98f6b FUN_14da98f6b body=286 status=ok
// SIG undefined FUN_14da98f6b(void)

/* WARNING: Removing unreachable block (ram,0x00014da99009) */
/* WARNING: Removing unreachable block (ram,0x00014da99014) */
/* WARNING: Removing unreachable block (ram,0x00014da9900f) */

undefined8 FUN_14da98f6b(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0x60) | unaff_R15;
  uVar1 = FUN_15b123027(FUN_15b123027,uVar2,
                        (*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15 ^ 0xffffffffffffffff) &
                        (*(ulonglong *)(unaff_R13 + -0x88) | unaff_R15),
                        ~(~(*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) ^ 0xffffffffffffffff |
                         ~uVar2));
  return uVar1;
}



// FUNCTION 14da992fd FUN_14da992fd body=163 status=ok
// SIG undefined FUN_14da992fd(void)

undefined8 FUN_14da992fd(void)

{
  undefined8 local_res10;
  
  return local_res10;
}



// FUNCTION 14da993a9 FUN_14da993a9 body=67 status=ok
// SIG undefined FUN_14da993a9(void)

void FUN_14da993a9(void)

{
  undefined8 unaff_RBP;
  ulonglong unaff_RDI;
  undefined8 auStackX_18 [2];
  
  *(undefined8 *)
   ((longlong)auStackX_18 +
   ~((unaff_RDI & 0xffffffffce828f4c ^ 0xffffffffffffffff) & (unaff_RDI | 0xffffffffce828f4c))) =
       unaff_RBP;
  return;
}



// FUNCTION 14da99446 FUN_14da99446 body=153 status=ok
// SIG undefined FUN_14da99446(void)

/* WARNING: Removing unreachable block (ram,0x00014da9951e) */
/* WARNING: Removing unreachable block (ram,0x00014da994d5) */
/* WARNING: Removing unreachable block (ram,0x00014da994e0) */
/* WARNING: Removing unreachable block (ram,0x00014da99519) */
/* WARNING: Removing unreachable block (ram,0x00014da99522) */
/* WARNING: Removing unreachable block (ram,0x00014da994db) */

undefined8 FUN_14da99446(void)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  bool bVar3;
  undefined8 local_res8;
  
  lVar2 = *(ulonglong *)(unaff_R13 + -0x38) + unaff_R15 +
          (*(ulonglong *)(unaff_R13 + -0x38) & unaff_R15) * -2;
  bVar3 = lVar2 == 0;
  FUN_14dea99f1(FUN_14dea99f1,lVar2,*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15);
  if (bVar3) {
    return local_res8;
  }
  uVar1 = FUN_14dc13c31();
  return uVar1;
}



// FUNCTION 14da994e0 FUN_14da994e0 body=124 status=ok
// SIG undefined FUN_14da994e0(void)

/* WARNING: Removing unreachable block (ram,0x00014da9951e) */

void FUN_14da994e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  
  (*(code *)0x1662a98c9)(local_res8,param_2,0x1662a98c9);
  return;
}



// FUNCTION 14da9955c FUN_14da9955c body=249 status=ok
// SIG undefined FUN_14da9955c(void)

/* WARNING: Removing unreachable block (ram,0x00014da995e0) */
/* WARNING: Removing unreachable block (ram,0x00014da995e6) */
/* WARNING: Removing unreachable block (ram,0x00014da995eb) */

undefined8 FUN_14da9955c(void)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_165c0d6e9();
  return uVar1;
}



// FUNCTION 14da99663 FUN_14da99663 body=164 status=ok
// SIG undefined FUN_14da99663(void)

undefined1 * FUN_14da99663(void)

{
  undefined1 local_res10 [24];
  
  return local_res10;
}



// FUNCTION 14da99707 FUN_14da99707 body=149 status=ok
// SIG undefined FUN_14da99707(void)

longlong FUN_14da99707(undefined8 param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined4 unaff_EBX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined4 unaff_retaddr;
  ulonglong auStackX_8 [4];
  undefined1 auStack_710f [28943];
  
  param_2 = param_2 - (CONCAT44(unaff_EBX,unaff_retaddr) ^ 0x1e471bb9);
  puVar1 = (ulonglong *)((longlong)auStackX_8 + param_2);
  *puVar1 = *(ulonglong *)(unaff_R13 + -0x38);
  uVar2 = *puVar1;
  *(undefined8 *)(-(~(ulonglong)(auStack_710f + param_2) + 2) + 0x7118) =
       *(undefined8 *)(unaff_R13 + -0x48);
  *(undefined8 *)(-(~(ulonglong)(auStack_710f + param_2) + 2) + 0x7110) = 0x165fa5490;
  return uVar2 + unaff_R15 + (uVar2 & unaff_R15) * -2;
}



// FUNCTION 14da9979d FUN_14da9979d body=127 status=ok
// SIG undefined FUN_14da9979d(void)

void FUN_14da9979d(void)

{
  FUN_1621ed743();
  return;
}



// FUNCTION 14da9981d FUN_14da9981d body=14 status=ok
// SIG undefined FUN_14da9981d(void)

void FUN_14da9981d(undefined8 param_1)

{
  undefined8 unaff_retaddr;
  
  FUN_14d7bcbe8(param_1,unaff_retaddr);
  return;
}



// FUNCTION 14da9995c FUN_14da9995c body=139 status=ok
// SIG undefined FUN_14da9995c(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da9995c(void)

{
  longlong lVar1;
  longlong unaff_RDI;
  undefined8 local_res8;
  
  lVar1 = *(ulonglong *)(unaff_RDI + -0x60) + local_res8 +
          (*(ulonglong *)(unaff_RDI + -0x60) & local_res8) * -2;
  FUN_161a56a2a(local_res8,0xffffffffffffff90,lVar1,lVar1);
  return;
}



// FUNCTION 14da999e9 FUN_14da999e9 body=150 status=ok
// SIG undefined FUN_14da999e9(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da999e9(void)

{
  return;
}



// FUNCTION 14da99b13 FUN_14da99b13 body=43 status=ok
// SIG undefined FUN_14da99b13(void)

void FUN_14da99b13(void)

{
  return;
}



// FUNCTION 14da99d53 FUN_14da99d53 body=74 status=ok
// SIG undefined FUN_14da99d53(void)

void FUN_14da99d53(undefined8 param_1)

{
  FUN_1611d12e6(param_1);
  return;
}



// FUNCTION 14da99d9d FUN_14da99d9d body=7 status=ok
// SIG undefined FUN_14da99d9d(void)

void FUN_14da99d9d(void)

{
  return;
}



// FUNCTION 14da99e0e FUN_14da99e0e body=40 status=ok
// SIG undefined FUN_14da99e0e(void)

undefined8 FUN_14da99e0e(void)

{
  longlong *plVar1;
  longlong in_RAX;
  longlong in_R9;
  longlong unaff_R15;
  undefined8 uStackX_8;
  longlong local_res18 [2];
  
  *(undefined8 *)((longlong)local_res18 + unaff_R15 + in_RAX) = 0;
  plVar1 = (longlong *)((longlong)local_res18 + unaff_R15 + in_RAX);
  *plVar1 = *plVar1 + in_R9;
  return uStackX_8;
}



// FUNCTION 14da99f75 FUN_14da99f75 body=168 status=ok
// SIG undefined FUN_14da99f75(void)

void FUN_14da99f75(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_RBP;
  undefined8 unaff_retaddr;
  ulonglong in_stack_00000020;
  
  FUN_165082cfd(param_1,param_2,unaff_retaddr,param_4,in_stack_00000020 ^ unaff_RBP);
  return;
}



// FUNCTION 14da9a0cf FUN_14da9a0cf body=335 status=ok
// SIG undefined FUN_14da9a0cf(void)

/* WARNING: Removing unreachable block (ram,0x00014da9a178) */
/* WARNING: Removing unreachable block (ram,0x00014da9a17e) */
/* WARNING: Removing unreachable block (ram,0x00014da9a189) */

void FUN_14da9a0cf(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1575bdc80(param_1,~(*(ulonglong *)(unaff_RDI + -0x68) & param_1),
                ~(*(ulonglong *)(unaff_RDI + -0x70) & param_1) &
                (*(ulonglong *)(unaff_RDI + -0x70) | param_1));
  return;
}



// FUNCTION 14da9a2e3 FUN_14da9a2e3 body=159 status=ok
// SIG undefined FUN_14da9a2e3(void)

void FUN_14da9a2e3(void)

{
  thunk_FUN_16544332e();
  return;
}



// FUNCTION 14da9a4a7 FUN_14da9a4a7 body=111 status=ok
// SIG undefined FUN_14da9a4a7(void)

void FUN_14da9a4a7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_RBP;
  undefined8 unaff_R13;
  ulonglong uVar1;
  ulonglong uStackX_10;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -0x10) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x18) = 0x62d93a0;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RBP;
  *(ulonglong *)(local_res18 + -0x28) =
       (ulonglong)((uStackX_10 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_10 & 0x800) != 0) * 0x800 |
       (ulonglong)((uStackX_10 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_10 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_10 & 0x100) != 0) * 0x100 | (ulonglong)((uStackX_10 & 0x80) != 0) * 0x80
       | (ulonglong)((uStackX_10 & 0x40) != 0) * 0x40 | (ulonglong)((uStackX_10 & 0x10) != 0) * 0x10
       | (ulonglong)((uStackX_10 & 4) != 0) * 4 | (ulonglong)((uStackX_10 & 1) != 0) |
       (ulonglong)((uStackX_10 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_10 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res18 + -8) = *(undefined8 *)(local_res18 + -0x18);
  uVar1 = *(ulonglong *)(local_res18 + -0x28);
  *(undefined8 *)(local_res18 + -0x10) = param_2;
  *(undefined8 *)(local_res18 + -0x18) = param_2;
  *(undefined8 *)(local_res18 + -0x20) = param_3;
  *(ulonglong *)(local_res18 + -0x28) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined1 **)(local_res18 + -0x10) = &LAB_14da9a51a;
  return;
}



// FUNCTION 14da9a525 FUN_14da9a525 body=100 status=ok
// SIG undefined FUN_14da9a525(void)

void FUN_14da9a525(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 in_RAX;
  undefined8 local_res18;
  
  *(undefined8 *)(local_res18 + -8) = in_RAX;
  *(undefined8 *)(local_res18 + -0x10) = param_2;
  *(undefined8 *)(local_res18 + -0x18) = param_2;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -8) = 0x4fa44a3f;
  *(ulonglong *)(local_res18 + -8) = *(ulonglong *)(local_res18 + -8) ^ 0x4fa44a3f;
  *(longlong *)(local_res18 + -8) = *(longlong *)(local_res18 + -8) + 0x14da9a5a5;
  pcVar1 = (code *)swi(3);
  (*pcVar1)(param_1,*(undefined8 *)(local_res18 + -0x18));
  return;
}



// FUNCTION 14da9a5d3 FUN_14da9a5d3 body=427 status=ok
// SIG undefined FUN_14da9a5d3(void)

/* WARNING: Removing unreachable block (ram,0x00014da9a657) */
/* WARNING: Removing unreachable block (ram,0x00014da9a65d) */
/* WARNING: Removing unreachable block (ram,0x00014dc80e5c) */

void FUN_14da9a5d3(undefined8 param_1)

{
  (*(code *)0x16104d254)(param_1,0x16104d254);
  return;
}



// FUNCTION 14da9a708 FUN_14da9a708 body=138 status=ok
// SIG undefined FUN_14da9a708(void)

void FUN_14da9a708(void)

{
  undefined8 local_res18;
  
  FUN_165d877c7(local_res18);
  return;
}



// FUNCTION 14da9a957 FUN_14da9a957 body=450 status=ok
// SIG undefined FUN_14da9a957(void)

/* WARNING: Removing unreachable block (ram,0x00014da9a9ff) */
/* WARNING: Removing unreachable block (ram,0x00014da9aa0a) */
/* WARNING: Removing unreachable block (ram,0x00014da9aa9a) */
/* WARNING: Removing unreachable block (ram,0x00014da9aaa0) */
/* WARNING: Removing unreachable block (ram,0x00015664f4d7) */
/* WARNING: Removing unreachable block (ram,0x00014da9a979) */
/* WARNING: Removing unreachable block (ram,0x00014da9aa05) */

void FUN_14da9a957(void)

{
  FUN_15b3bae8e();
  return;
}



// FUNCTION 14da9aaa0 FUN_14da9aaa0 body=161 status=ok
// SIG undefined FUN_14da9aaa0(void)

void FUN_14da9aaa0(void)

{
  FUN_160cae31a();
  return;
}



// FUNCTION 14da9ab41 FUN_14da9ab41 body=531 status=ok
// SIG undefined FUN_14da9ab41(void)

/* WARNING: Removing unreachable block (ram,0x000162a0192e) */
/* WARNING: Removing unreachable block (ram,0x000162a01955) */
/* WARNING: Removing unreachable block (ram,0x000162a01a4f) */
/* WARNING: Removing unreachable block (ram,0x0001622f2057) */
/* WARNING: Removing unreachable block (ram,0x0001622f20da) */
/* WARNING: Removing unreachable block (ram,0x00014da9abcf) */
/* WARNING: Removing unreachable block (ram,0x00014da9abd5) */
/* WARNING: Removing unreachable block (ram,0x00014da9ac5c) */
/* WARNING: Removing unreachable block (ram,0x0001573bf09f) */
/* WARNING: Removing unreachable block (ram,0x00014da9ac62) */
/* WARNING: Removing unreachable block (ram,0x00014da9acec) */
/* WARNING: Removing unreachable block (ram,0x00014da9acf1) */
/* WARNING: Removing unreachable block (ram,0x00014da9acf7) */
/* WARNING: Removing unreachable block (ram,0x00014da9ad44) */
/* WARNING: Removing unreachable block (ram,0x00014da9ad47) */
/* WARNING: Removing unreachable block (ram,0x000161b3cd7d) */
/* WARNING: Removing unreachable block (ram,0x0001573bf1b8) */
/* WARNING: Removing unreachable block (ram,0x0001573bf1be) */
/* WARNING: Removing unreachable block (ram,0x000161493ac5) */
/* WARNING: Removing unreachable block (ram,0x0001622f20df) */
/* WARNING: Removing unreachable block (ram,0x0001622f20e5) */
/* WARNING: Removing unreachable block (ram,0x0001622f216d) */
/* WARNING: Removing unreachable block (ram,0x0001618607a3) */
/* WARNING: Removing unreachable block (ram,0x0001622f2173) */
/* WARNING: Removing unreachable block (ram,0x0001622f21fe) */
/* WARNING: Removing unreachable block (ram,0x0001622f220a) */
/* WARNING: Removing unreachable block (ram,0x0001622f228b) */
/* WARNING: Removing unreachable block (ram,0x0001622f2290) */
/* WARNING: Removing unreachable block (ram,0x0001622f2296) */
/* WARNING: Removing unreachable block (ram,0x0001622f229b) */
/* WARNING: Removing unreachable block (ram,0x0001622f22de) */
/* WARNING: Removing unreachable block (ram,0x0001622f21f9) */
/* WARNING: Removing unreachable block (ram,0x00014d9d953b) */
/* WARNING: Removing unreachable block (ram,0x000165390c01) */

undefined8 FUN_14da9ab41(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1622f2057();
  return uVar1;
}



// FUNCTION 14da9ad67 FUN_14da9ad67 body=144 status=ok
// SIG undefined FUN_14da9ad67(void)

void FUN_14da9ad67(void)

{
  longlong unaff_RSI;
  bool in_ZF;
  
  if (in_ZF) {
    return;
  }
  if (unaff_RSI != 0x1328c8) {
    if (unaff_RSI != 0x132965) {
      FUN_1624b6480();
      return;
    }
    FUN_1624b6474();
    return;
  }
  FUN_16131bb16();
  return;
}



// FUNCTION 14da9afda FUN_14da9afda body=67 status=ok
// SIG undefined FUN_14da9afda(void)

void FUN_14da9afda(void)

{
  return;
}



// FUNCTION 14da9b077 FUN_14da9b077 body=14 status=ok
// SIG undefined FUN_14da9b077(void)

void FUN_14da9b077(void)

{
  undefined8 unaff_R12;
  undefined8 *unaff_R14;
  
  *unaff_R14 = unaff_R12;
  return;
}



// FUNCTION 14da9b10a FUN_14da9b10a body=359 status=ok
// SIG undefined FUN_14da9b10a(void)

/* WARNING: Removing unreachable block (ram,0x00014da9b1b7) */
/* WARNING: Removing unreachable block (ram,0x00014da9b1bd) */
/* WARNING: Removing unreachable block (ram,0x00014da9b230) */
/* WARNING: Removing unreachable block (ram,0x00014da9b233) */
/* WARNING: Removing unreachable block (ram,0x0001622343e5) */

void FUN_14da9b10a(void)

{
  thunk_FUN_1622343eb();
  return;
}



// FUNCTION 14da9b55f FUN_14da9b55f body=196 status=ok
// SIG undefined FUN_14da9b55f(void)

/* WARNING: Removing unreachable block (ram,0x00014da9b5e2) */
/* WARNING: Removing unreachable block (ram,0x00014da9b5e8) */
/* WARNING: Removing unreachable block (ram,0x00014da9b610) */
/* WARNING: Removing unreachable block (ram,0x00014da9b60b) */
/* WARNING: Removing unreachable block (ram,0x00014da9b61d) */
/* WARNING: Removing unreachable block (ram,0x00014df17b0d) */

void FUN_14da9b55f(void)

{
  FUN_14df17b0d();
  return;
}



// FUNCTION 14da9b625 FUN_14da9b625 body=121 status=ok
// SIG undefined FUN_14da9b625(void)

/* WARNING: Removing unreachable block (ram,0x00014da9b693) */
/* WARNING: Removing unreachable block (ram,0x00014da9b699) */
/* WARNING: Removing unreachable block (ram,0x00014da9b69e) */

void FUN_14da9b625(void)

{
  ulonglong unaff_retaddr;
  undefined8 local_res8;
  
  if ((longlong)local_res8 < 0) {
    unaff_retaddr = unaff_retaddr ^ 0x89589490c9b97979;
  }
  *(ulonglong *)(local_res8 & 0x7fffffffffffffff) = unaff_retaddr;
  return;
}



// FUNCTION 14da9b69e FUN_14da9b69e body=115 status=ok
// SIG undefined FUN_14da9b69e(void)

void FUN_14da9b69e(void)

{
  longlong unaff_R12;
  undefined8 local_res8 [4];
  
  local_res8[1] = *(undefined8 *)((longlong)local_res8 + unaff_R12);
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14da9ba69 FUN_14da9ba69 body=384 status=ok
// SIG undefined FUN_14da9ba69(void)

/* WARNING: Removing unreachable block (ram,0x00014da9bafd) */

void FUN_14da9ba69(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1571e8439(param_1,((param_1 - 1) - ~*(ulonglong *)(unaff_RDI + -0x68)) +
                        (*(ulonglong *)(unaff_RDI + -0x68) & param_1) * -2);
  return;
}



// FUNCTION 14da9bb82 FUN_14da9bb82 body=171 status=ok
// SIG undefined FUN_14da9bb82(void)

/* WARNING: Instruction at (ram,0x00014da9bb92) overlaps instruction at (ram,0x00014da9bb91)
    */

void FUN_14da9bb82(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000018;
  
  DAT_14cad9ec8 = 0xd2081cd;
  FUN_1610d898e(param_1,param_2,in_stack_00000018);
  return;
}



// FUNCTION 14da9bcc7 FUN_14da9bcc7 body=324 status=ok
// SIG undefined FUN_14da9bcc7(void)

void FUN_14da9bcc7(void)

{
  undefined8 *puVar1;
  ulonglong in_RAX;
  undefined8 unaff_RBP;
  undefined8 in_R9;
  undefined8 unaff_R12;
  longlong lVar2;
  undefined8 local_res8;
  ushort local_res10;
  ulonglong local_res18;
  
  lVar2 = -((~in_RAX + local_res18) - (~in_RAX & local_res18) & (~local_res18 | in_RAX));
  puVar1 = (undefined8 *)(lVar2 + -9);
  *puVar1 = in_R9;
  *(undefined8 *)(lVar2 + -0x11) = *puVar1;
  *puVar1 = &LAB_162ba5590;
  *(undefined8 *)(lVar2 + -0x19) = unaff_RBP;
  if ((local_res10 & 1) != 0) {
    *(undefined8 *)(lVar2 + -0x21) = unaff_R12;
    *(undefined8 *)(lVar2 + -0x29) = 0x14da9bd6a;
    FUN_162ba5557();
    *(undefined4 *)(lVar2 + -0x29) = 0;
    *(undefined4 *)(lVar2 + -0x25) = 0;
    (*(code *)0x1665f41f4)();
    return;
  }
  *(undefined8 *)(lVar2 + -0x11) = local_res8;
  return;
}



// FUNCTION 14da9be0c FUN_14da9be0c body=154 status=ok
// SIG undefined FUN_14da9be0c(void)

void FUN_14da9be0c(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)0x1610bda88)
            ((-unaff_R15 - *(ulonglong *)(unaff_R13 + -0x78)) +
             (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15) * 2,*(undefined8 *)(unaff_R13 + -0x28))
  ;
  return;
}



// FUNCTION 14da9bfd4 FUN_14da9bfd4 body=141 status=ok
// SIG undefined FUN_14da9bfd4(void)

void FUN_14da9bfd4(void)

{
  (*(code *)0x16283ecbe)();
  return;
}



// FUNCTION 14da9c068 FUN_14da9c068 body=608 status=ok
// SIG undefined FUN_14da9c068(void)

/* WARNING: Removing unreachable block (ram,0x00014da9c101) */
/* WARNING: Removing unreachable block (ram,0x00014da9c107) */
/* WARNING: Removing unreachable block (ram,0x000164ee7b02) */
/* WARNING: Removing unreachable block (ram,0x00014da9c164) */
/* WARNING: Removing unreachable block (ram,0x00014da9c167) */
/* WARNING: Removing unreachable block (ram,0x000164ee7a8e) */
/* WARNING: Removing unreachable block (ram,0x000164ee7aae) */

void FUN_14da9c068(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  short unaff_BP;
  longlong unaff_RDI;
  
  uVar1 = ~(~param_1 | *(ulonglong *)(unaff_RDI + -0x30)) |
          ~(~*(ulonglong *)(unaff_RDI + -0x30) | param_1);
  if (-1 < (short)(unaff_BP - ((ushort)*(undefined8 *)(unaff_RDI + -0x50) ^ (ushort)param_1))) {
    FUN_161ad929a(param_1,uVar1,param_3,*(undefined8 *)(unaff_RDI + -0x60));
    return;
  }
  FUN_161ad929a(param_1,uVar1,param_3,*(undefined8 *)(unaff_RDI + -0x60));
  return;
}



// FUNCTION 14da9c196 FUN_14da9c196 body=139 status=ok
// SIG undefined FUN_14da9c196(void)

void FUN_14da9c196(undefined8 param_1)

{
  FUN_16554ed55(param_1);
  return;
}



// FUNCTION 14da9c2c5 FUN_14da9c2c5 body=146 status=ok
// SIG undefined FUN_14da9c2c5(void)

void FUN_14da9c2c5(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + (param_1 ^ 0x1142b69a));
  FUN_161786a41(FUN_161786a41,0xffffffffffffffc8,
                ~((unaff_R15 ^ 0xffffffffffffffff | uVar1) & (~uVar1 | unaff_R15)));
  return;
}



// FUNCTION 14da9c357 FUN_14da9c357 body=155 status=ok
// SIG undefined FUN_14da9c357(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00015b49d15e) */
/* WARNING: Removing unreachable block (ram,0x00014da9c479) */
/* WARNING: Removing unreachable block (ram,0x00014da9c47f) */
/* WARNING: Removing unreachable block (ram,0x00014da9c3f2) */
/* WARNING: Removing unreachable block (ram,0x00015705d632) */
/* WARNING: Removing unreachable block (ram,0x00015705d63e) */
/* WARNING: Removing unreachable block (ram,0x00015705d6a3) */
/* WARNING: Removing unreachable block (ram,0x00015705d6c4) */
/* WARNING: Removing unreachable block (ram,0x00015705d6c9) */
/* WARNING: Removing unreachable block (ram,0x00015b49d11d) */
/* WARNING: Removing unreachable block (ram,0x00015b49d148) */
/* WARNING: Removing unreachable block (ram,0x00015b49d143) */
/* WARNING: Removing unreachable block (ram,0x00015705d693) */
/* WARNING: Removing unreachable block (ram,0x00015705d6d5) */
/* WARNING: Removing unreachable block (ram,0x00015705d73c) */
/* WARNING: Removing unreachable block (ram,0x00015705d73a) */

undefined8 FUN_14da9c357(void)

{
  longlong in_RAX;
  undefined8 uVar1;
  longlong unaff_R12;
  
  if (*(longlong *)(unaff_R12 + -0x58) == in_RAX) {
    uVar1 = FUN_161acb630();
    return uVar1;
  }
  uVar1 = FUN_161acb630();
  return uVar1;
}



// FUNCTION 14da9c3f2 FUN_14da9c3f2 body=304 status=ok
// SIG undefined FUN_14da9c3f2(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00015b49d15e) */
/* WARNING: Removing unreachable block (ram,0x00014da9c479) */
/* WARNING: Removing unreachable block (ram,0x00014da9c47f) */
/* WARNING: Removing unreachable block (ram,0x00015705d6d5) */
/* WARNING: Removing unreachable block (ram,0x00015705d73c) */
/* WARNING: Removing unreachable block (ram,0x00015705d73a) */
/* WARNING: Removing unreachable block (ram,0x00015705d6c9) */
/* WARNING: Removing unreachable block (ram,0x00015b49d143) */
/* WARNING: Removing unreachable block (ram,0x00015b49d148) */

undefined8 FUN_14da9c3f2(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R14;
  bool bVar4;
  undefined8 uStackX_8;
  undefined8 uStackX_18;
  
  uVar1 = ~(uStackX_18 & param_1) & (uStackX_18 | param_1);
  *(undefined8 *)(uVar1 - 8) = unaff_R14;
  *(undefined8 *)(uVar1 - 0x10) = in_R10;
  *(undefined8 *)(uVar1 - 0x18) = in_R10;
  *(undefined8 *)(uVar1 - 0x20) = param_4;
  uVar2 = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x20) = uStackX_8;
  *(undefined4 *)(uVar1 - 0x28) = 0x6bd5b98d;
  *(undefined4 *)(uVar1 - 0x24) = 0;
  *(undefined4 *)(uVar1 - 0x24) = *(undefined4 *)(uVar1 - 0x24);
  uVar3 = *(ulonglong *)(uVar1 - 0x28) ^ 0x6bd5b985;
  bVar4 = uVar3 == 0;
  *(undefined8 *)((uVar1 - 0x18) + uVar3) = uVar2;
  uVar2 = *(undefined8 *)(uVar1 - 0x20);
  *(undefined8 *)(uVar1 - 0x20) = 0x15705d624;
  FUN_157081e9d();
  if (bVar4) {
    uVar2 = FUN_16131bb16();
    return uVar2;
  }
  *(undefined8 *)(uVar1 - 0x18) = 0;
  *(longlong *)(uVar1 - 0x18) = *(longlong *)(uVar1 - 0x18) + unaff_RDI;
  *(undefined8 *)(uVar1 - 0x20) = uVar2;
  if (unaff_RSI != 0x131621) {
    *(undefined8 *)(uVar1 - 0x18) = param_2;
    *(longlong *)(uVar1 - 0x20) = unaff_RSI;
    *(undefined4 *)(uVar1 - 0x28) = 0x26a2b1a;
    *(undefined4 *)(uVar1 - 0x24) = 0;
    uVar2 = FUN_15b49d11d();
    return uVar2;
  }
  uVar2 = FUN_16131bb16();
  return uVar2;
}



// FUNCTION 14da9c523 FUN_14da9c523 body=3 status=ok
// SIG undefined FUN_14da9c523(void)

void FUN_14da9c523(void)

{
  return;
}



// FUNCTION 14da9c6ac FUN_14da9c6ac body=131 status=ok
// SIG undefined FUN_14da9c6ac(void)

/* WARNING: Removing unreachable block (ram,0x00014da9c732) */

void FUN_14da9c6ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *in_RAX;
  uint uVar3;
  undefined8 unaff_RBX;
  ulonglong *puVar4;
  ulonglong unaff_RBP;
  uint uVar5;
  uint uVar6;
  undefined8 unaff_RDI;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uVar7;
  undefined8 unaff_retaddr;
  ulonglong local_8;
  
  local_8 = (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)(in_ID & 1) * 0x200000 |
            (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
            (ulonglong)(in_AC & 1) * 0x40000;
  puVar4 = &local_8;
  if ((ulonglong)(in_TF & 1) == 0) {
    puVar4 = (ulonglong *)register0x00000020;
  }
  *puVar4 = 0;
  *puVar4 = *puVar4 ^ unaff_RBP;
  puVar4[-1] = unaff_R15;
  puVar4[-2] = unaff_RBX;
  iVar1 = *in_RAX;
  puVar4[-3] = unaff_RDI;
  puVar4[-4] = unaff_retaddr;
  uVar5 = iVar1 - 1;
  uVar2 = puVar4[-4];
  uVar3 = ~(uint)unaff_RBX;
  uVar6 = uVar5 - uVar3;
  puVar4[-4] = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW4(uVar5,uVar3) * 0x800 |
               (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
               (ulonglong)((int)uVar6 < 0) * 0x80 | (ulonglong)(uVar6 == 0) * 0x40 |
               (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar6 & 0xff) & 1U) == 0) * 4 |
               (ulonglong)(uVar5 < uVar3) | (ulonglong)(in_ID & 1) * 0x200000 |
               (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
               (ulonglong)(in_AC & 1) * 0x40000;
  uVar7 = puVar4[-4];
  puVar4[-3] = (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar7 & 0x800) != 0) * 0x800 | (ulonglong)((uVar7 & 0x400) != 0) * 0x400
               | (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar7 & 0x100) != 0) * 0x100 | (ulonglong)((uVar7 & 0x80) != 0) * 0x80 |
               (ulonglong)((uVar7 & 0x40) != 0) * 0x40 | (ulonglong)((uVar7 & 0x10) != 0) * 0x10 |
               (ulonglong)((uVar7 & 4) != 0) * 4 | (ulonglong)((uVar7 & 1) != 0) |
               (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000;
  puVar4[-4] = unaff_R12;
  puVar4[-5] = param_1;
  *(ushort *)(puVar4 + -3) = (0x100 - ((ushort)puVar4[-3] | 0x100)) + (short)puVar4[-3];
  FUN_15b963098(puVar4[-5],param_2,param_3,uVar2);
  return;
}



// FUNCTION 14da9c732 FUN_14da9c732 body=179 status=ok
// SIG undefined FUN_14da9c732(void)

void FUN_14da9c732(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_stack_00000008;
  ulonglong in_stack_00000020;
  
  FUN_161391081(param_1,param_2,in_stack_00000008,param_4,(in_stack_00000020 & param_1) << 1);
  FUN_14da9c7e6();
  return;
}



// FUNCTION 14da9c7e6 FUN_14da9c7e6 body=69 status=ok
// SIG undefined FUN_14da9c7e6(void)

undefined8 FUN_14da9c7e6(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da9caa8 FUN_14da9caa8 body=127 status=ok
// SIG undefined FUN_14da9caa8(void)

/* WARNING: Removing unreachable block (ram,0x00014da9cb96) */
/* WARNING: Removing unreachable block (ram,0x00014da9cba6) */
/* WARNING: Removing unreachable block (ram,0x00014da9cbac) */

void FUN_14da9caa8(undefined8 param_1)

{
  FUN_15b271d16(param_1);
  return;
}



// FUNCTION 14da9cb28 FUN_14da9cb28 body=206 status=ok
// SIG undefined FUN_14da9cb28(void)

/* WARNING: Removing unreachable block (ram,0x00014da9cb96) */
/* WARNING: Removing unreachable block (ram,0x00014da9cba6) */
/* WARNING: Removing unreachable block (ram,0x00014da9cbac) */

void FUN_14da9cb28(void)

{
  return;
}



// FUNCTION 14da9cbfa FUN_14da9cbfa body=288 status=ok
// SIG undefined FUN_14da9cbfa(void)

void FUN_14da9cbfa(void)

{
  undefined8 *puVar1;
  undefined8 unaff_RSI;
  
  puVar1 = (undefined8 *)&DAT_fffffffffffffff8;
  FUN_15ba2b9dc();
  *puVar1 = unaff_RSI;
  FUN_16693a9e5();
  return;
}



// FUNCTION 14da9cd1c FUN_14da9cd1c body=160 status=ok
// SIG undefined FUN_14da9cd1c(void)

/* WARNING: Removing unreachable block (ram,0x00014da9cdbc) */

void FUN_14da9cd1c(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x68) | unaff_R15;
  uVar2 = ~(*(ulonglong *)(unaff_R13 + -0x68) & unaff_R15);
  if (CARRY8(uVar1 - (uVar2 | uVar1),uVar2)) {
    FUN_1573596ae(param_1,param_2);
    return;
  }
  FUN_15683b3ba();
  return;
}



// FUNCTION 14da9cdbc FUN_14da9cdbc body=118 status=ok
// SIG undefined FUN_14da9cdbc(void)

void FUN_14da9cdbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  short unaff_DI;
  short *unaff_R13;
  undefined8 uStackX_8;
  longlong local_res20;
  
  *unaff_R13 = unaff_DI + *unaff_R13;
  *(undefined8 *)(local_res20 + -8) = param_2;
  *(undefined8 *)(local_res20 + -0x10) = param_4;
  *(undefined8 *)(local_res20 + -0x18) = param_4;
  *(undefined8 *)(local_res20 + -0x20) = in_RAX;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  uVar1 = *(undefined8 *)(local_res20 + -0x18);
  *(undefined8 *)(local_res20 + -0x18) = uStackX_8;
  *(undefined1 **)(local_res20 + -8) = &LAB_14da9ce46;
  thunk_FUN_15b642ca5(param_1,*(undefined8 *)(local_res20 + -0x10),param_3,uVar1);
  return;
}



// FUNCTION 14da9cf33 FUN_14da9cf33 body=147 status=ok
// SIG undefined FUN_14da9cf33(void)

void FUN_14da9cf33(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong *unaff_RBP;
  
  uVar1 = *unaff_RBP;
  *unaff_RBP = ~*unaff_RBP;
  *unaff_RBP = *unaff_RBP | param_1;
  *unaff_RBP = ~((param_1 ^ 0xffffffffffffffff | uVar1) & *unaff_RBP);
  FUN_1649b1b54(FUN_1649b1b54,param_2,param_3);
  return;
}



// FUNCTION 14da9cfc8 FUN_14da9cfc8 body=752 status=ok
// SIG undefined FUN_14da9cfc8(void)

/* WARNING: Removing unreachable block (ram,0x00015ba52f31) */
/* WARNING: Removing unreachable block (ram,0x000156ff2288) */
/* WARNING: Removing unreachable block (ram,0x000156ff228e) */
/* WARNING: Removing unreachable block (ram,0x00014da9d06d) */
/* WARNING: Removing unreachable block (ram,0x000156ff213c) */
/* WARNING: Removing unreachable block (ram,0x000156ff21b8) */
/* WARNING: Removing unreachable block (ram,0x000156ff21be) */
/* WARNING: Removing unreachable block (ram,0x000156ff2253) */
/* WARNING: Removing unreachable block (ram,0x000156ff224e) */
/* WARNING: Removing unreachable block (ram,0x00014d990325) */

void FUN_14da9cfc8(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  uVar1 = *(ulonglong *)(unaff_RSI + -0x28);
  uVar2 = (~(~uVar1 & unaff_RBP) + unaff_RBP) - uVar1;
  FUN_166d538ce(uVar2,FUN_166d538ce,0xfffffffff67f8bf6,-1 - ((~unaff_RBP | uVar1) & uVar2));
  return;
}



// FUNCTION 14da9d093 FUN_14da9d093 body=147 status=ok
// SIG undefined FUN_14da9d093(void)

/* WARNING: Removing unreachable block (ram,0x00014da9d1a5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14da9d093(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  
  FUN_15b76f74c();
  uVar1 = CONCAT44((uint)(param_2 >> 0x3d),(int)(param_2 >> 0x1d));
  lVar2 = (param_2 - (uVar1 | param_2)) + uVar1;
  FUN_161ac292a((uVar1 + param_2) - ~(~(lVar2 * 2 | (ulonglong)(lVar2 < 0)) | 1),0xd858fef,
                FUN_161ac292a,param_4);
  return;
}



// FUNCTION 14da9d1a5 FUN_14da9d1a5 body=151 status=ok
// SIG undefined FUN_14da9d1a5(void)

void FUN_14da9d1a5(char param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  char unaff_BPL;
  byte unaff_DIL;
  longlong unaff_R12;
  
  uVar1 = ~(~in_RAX | *(ulonglong *)(unaff_R12 + -0x80)) |
          ~(~in_RAX & ~*(ulonglong *)(unaff_R12 + -0x80) | in_RAX);
  FUN_160edc202(uVar1,0xffffffffccb57367,uVar1,
                param_3 - (param_4 << (param_1 + (unaff_BPL - ~unaff_DIL) & 0x3f)));
  FUN_14da9d23d();
  return;
}



// FUNCTION 14da9d23d FUN_14da9d23d body=269 status=ok
// SIG undefined FUN_14da9d23d(void)

/* WARNING: Removing unreachable block (ram,0x00014da9d2b7) */
/* WARNING: Removing unreachable block (ram,0x00014da9d2bd) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da9d23d(void)

{
  undefined8 in_RAX;
  longlong unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 unaff_R13;
  longlong unaff_retaddr;
  longlong in_stack_00000030;
  
  *(undefined8 *)(unaff_RBP + unaff_retaddr + 0x4762cbe1) = in_RAX;
  *(undefined8 *)(in_stack_00000030 + -8) = unaff_R13;
  *(undefined8 *)(in_stack_00000030 + -0x10) = unaff_RDI;
  *(undefined8 *)(in_stack_00000030 + -0x18) = unaff_RDI;
  *(undefined8 *)(in_stack_00000030 + -0x10) = *(undefined8 *)(in_stack_00000030 + -8);
  *(undefined **)(in_stack_00000030 + -8) = &DAT_165db4653;
  FUN_14d7a5a3d();
  return;
}



// FUNCTION 14da9d4f1 FUN_14da9d4f1 body=73 status=ok
// SIG undefined FUN_14da9d4f1(void)

undefined8 FUN_14da9d4f1(void)

{
  undefined8 in_stack_00000008;
  
  return in_stack_00000008;
}



// FUNCTION 14da9d5c1 FUN_14da9d5c1 body=163 status=ok
// SIG undefined FUN_14da9d5c1(void)

void FUN_14da9d5c1(void)

{
  FUN_1655ac9fe();
  FUN_165e93f27();
  return;
}



// FUNCTION 14da9d777 FUN_14da9d777 body=256 status=ok
// SIG undefined FUN_14da9d777(void)

void FUN_14da9d777(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong in_RAX;
  ulonglong in_stack_00000018;
  ulonglong in_stack_00000020;
  
  FUN_165e6c259(~param_5,param_2,0xffffffffffffffff - in_RAX | param_5,param_4,
                (in_stack_00000018 & in_RAX ^ 0xffffffffffffffff) & (in_stack_00000018 | in_RAX),
                ~(in_stack_00000020 & in_RAX) & (in_stack_00000020 | in_RAX));
  return;
}



// FUNCTION 14da9d96f FUN_14da9d96f body=217 status=ok
// SIG undefined FUN_14da9d96f(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da9d96f(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined2 in_stack_00000028;
  
  FUN_15b7af5cb(*(undefined8 *)(unaff_R13 + -0x88),in_stack_00000028,
                *(undefined8 *)(unaff_R13 + -0x88),*(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14da9da4e FUN_14da9da4e body=146 status=ok
// SIG undefined FUN_14da9da4e(void)

void FUN_14da9da4e(undefined8 param_1)

{
  undefined8 in_RAX;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  undefined8 local_res18;
  
  *(undefined8 *)(local_res18 + -8) = in_R10;
  *(undefined8 *)(local_res18 + -0x10) = unaff_R12;
  *(undefined8 *)(local_res18 + -0x18) = in_RAX;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R15;
  *(undefined4 *)(local_res18 + -0x28) = 0xf986cfd;
  *(undefined4 *)(local_res18 + -0x24) = 0;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RDI;
  *(undefined4 *)(local_res18 + -0x28) = 0x17ef711c;
  *(undefined4 *)(local_res18 + -0x24) = 0;
  *(undefined8 *)(local_res18 + -0x20) = in_R10;
  *(undefined8 *)(local_res18 + -0x20) = unaff_retaddr;
  (*(code *)0x156b1942f)(param_1,*(undefined8 *)(local_res18 + -0x20),local_res8);
  return;
}



// FUNCTION 14da9daf7 FUN_14da9daf7 body=15 status=ok
// SIG undefined FUN_14da9daf7(void)

void FUN_14da9daf7(void)

{
  return;
}



// FUNCTION 14da9db71 FUN_14da9db71 body=329 status=ok
// SIG undefined FUN_14da9db71(void)

/* WARNING: Removing unreachable block (ram,0x00015655e7bb) */
/* WARNING: Removing unreachable block (ram,0x00014da9dc11) */
/* WARNING: Removing unreachable block (ram,0x00014da9dc63) */
/* WARNING: Removing unreachable block (ram,0x00014da9dc5e) */
/* WARNING: Removing unreachable block (ram,0x00014da9dc74) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da9db71(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)0x1621c7513)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14da9dcbd FUN_14da9dcbd body=284 status=ok
// SIG undefined FUN_14da9dcbd(void)

/* WARNING: Removing unreachable block (ram,0x00014d806850) */
/* WARNING: Removing unreachable block (ram,0x00014d806856) */
/* WARNING: Removing unreachable block (ram,0x00015710e31e) */
/* WARNING: Removing unreachable block (ram,0x00015710e329) */
/* WARNING: Removing unreachable block (ram,0x00015710e3aa) */
/* WARNING: Removing unreachable block (ram,0x00015710e3b5) */
/* WARNING: Removing unreachable block (ram,0x00015710e3dd) */
/* WARNING: Removing unreachable block (ram,0x00015710e3e5) */
/* WARNING: Removing unreachable block (ram,0x00015710e324) */
/* WARNING: Removing unreachable block (ram,0x00016187dab7) */
/* WARNING: Removing unreachable block (ram,0x00016187dab1) */
/* WARNING: Removing unreachable block (ram,0x00016187dabc) */
/* WARNING: Removing unreachable block (ram,0x00016495626f) */
/* WARNING: Removing unreachable block (ram,0x000164956275) */
/* WARNING: Removing unreachable block (ram,0x0001649561e5) */
/* WARNING: Removing unreachable block (ram,0x000160f294b5) */
/* WARNING: Removing unreachable block (ram,0x000160f294c0) */
/* WARNING: Removing unreachable block (ram,0x000160f29555) */
/* WARNING: Removing unreachable block (ram,0x000160f2955b) */
/* WARNING: Removing unreachable block (ram,0x00016615ffc4) */
/* WARNING: Removing unreachable block (ram,0x00014da9ddcf) */
/* WARNING: Removing unreachable block (ram,0x00014da9ddd5) */
/* WARNING: Removing unreachable block (ram,0x00014da9dde0) */
/* WARNING: Removing unreachable block (ram,0x00014da9df59) */
/* WARNING: Removing unreachable block (ram,0x00014da9df5d) */
/* WARNING: Removing unreachable block (ram,0x00014d80670a) */
/* WARNING: Removing unreachable block (ram,0x00014d8067a1) */
/* WARNING: Removing unreachable block (ram,0x00014d8067a7) */
/* WARNING: Removing unreachable block (ram,0x000156ca936d) */
/* WARNING: Removing unreachable block (ram,0x00014da9dd64) */
/* WARNING: Removing unreachable block (ram,0x000166d6d249) */
/* WARNING: Removing unreachable block (ram,0x000157581cab) */
/* WARNING: Removing unreachable block (ram,0x000157581d43) */
/* WARNING: Removing unreachable block (ram,0x000157581d48) */
/* WARNING: Removing unreachable block (ram,0x000165487cb0) */
/* WARNING: Removing unreachable block (ram,0x000165487d4a) */
/* WARNING: Removing unreachable block (ram,0x00015705c4cb) */
/* WARNING: Removing unreachable block (ram,0x000165487d56) */
/* WARNING: Removing unreachable block (ram,0x000165487dc8) */
/* WARNING: Removing unreachable block (ram,0x000165487dd2) */
/* WARNING: Removing unreachable block (ram,0x000165487dd8) */
/* WARNING: Removing unreachable block (ram,0x00014d80668d) */
/* WARNING: Removing unreachable block (ram,0x00014d806704) */
/* WARNING: Removing unreachable block (ram,0x00016187da2a) */
/* WARNING: Removing unreachable block (ram,0x000157581d4e) */
/* WARNING: Removing unreachable block (ram,0x000166d6d24f) */

undefined8 FUN_14da9dcbd(void)

{
  return 0x14e13a2c7;
}



// FUNCTION 14da9dde0 FUN_14da9dde0 body=506 status=ok
// SIG undefined FUN_14da9dde0(void)

/* WARNING: Removing unreachable block (ram,0x00014da9df59) */

undefined8 FUN_14da9dde0(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong in_R10;
  longlong unaff_R15;
  undefined8 local_res10;
  
  uVar2 = local_res10 + unaff_R15;
  FUN_1655a7ed3();
  uVar3 = ~uVar2;
  FUN_16151c9ef();
  uVar1 = FUN_16296b54d(uVar2,in_R10 + uVar2 + (uVar3 & uVar2) * -2);
  return uVar1;
}



// FUNCTION 14da9e1f3 FUN_14da9e1f3 body=145 status=ok
// SIG undefined FUN_14da9e1f3(void)

void FUN_14da9e1f3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  ulonglong in_R10;
  ulonglong unaff_R15;
  
  *(ulonglong *)(unaff_RDI + 0x10) = *(ulonglong *)(unaff_RDI + 0x10) ^ 0xffffffffffffffff;
  *(ulonglong *)(unaff_RDI + 0x10) = *(ulonglong *)(unaff_RDI + 0x10) | unaff_R15;
  *(ulonglong *)(unaff_RDI + 0x10) = -1 - (in_R10 & *(ulonglong *)(unaff_RDI + 0x10));
  (*(code *)&LAB_14e0a0e46)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14da9e321 FUN_14da9e321 body=146 status=ok
// SIG undefined FUN_14da9e321(void)

void FUN_14da9e321(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong unaff_RSI;
  longlong unaff_R15;
  
  uVar1 = (~param_1 | param_3) + unaff_R15 + 1;
  FUN_166ce1517(uVar1,FUN_166ce1517,~uVar1 & unaff_RSI);
  return;
}



// FUNCTION 14da9e4e9 FUN_14da9e4e9 body=98 status=ok
// SIG undefined FUN_14da9e4e9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14da9e4e9(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14da9e5a3 FUN_14da9e5a3 body=265 status=ok
// SIG undefined FUN_14da9e5a3(void)

/* WARNING: Removing unreachable block (ram,0x00016112f3db) */
/* WARNING: Removing unreachable block (ram,0x00014da9e619) */
/* WARNING: Removing unreachable block (ram,0x00014da9e625) */
/* WARNING: Removing unreachable block (ram,0x00016515ac57) */

void FUN_14da9e5a3(void)

{
  FUN_16112f3db();
  return;
}



// FUNCTION 14da9e6ae FUN_14da9e6ae body=125 status=ok
// SIG undefined FUN_14da9e6ae(void)

/* WARNING: Removing unreachable block (ram,0x00014da9e6f7) */

void FUN_14da9e6ae(void)

{
  return;
}



// FUNCTION 14da9e72f FUN_14da9e72f body=92 status=ok
// SIG undefined FUN_14da9e72f(void)

void FUN_14da9e72f(undefined8 param_1)

{
  longlong lVar1;
  undefined8 in_RAX;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_retaddr;
  ushort local_res8;
  uint6 uStackX_a;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = param_1;
  *(undefined8 *)(local_res10 + -0x10) = param_1;
  *(undefined8 *)(local_res10 + -0x18) = in_RAX;
  *(undefined4 *)(local_res10 + -0x18) = 0xdad30c5;
  *(undefined4 *)(local_res10 + -0x14) = 0;
  lVar1 = *(longlong *)(local_res10 + -0x18);
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((local_res8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res8 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res8 & 0x200) != 0) * 0x200 | (ulonglong)((local_res8 & 0x80) != 0) * 0x80
       | (ulonglong)((local_res8 & 0x40) != 0) * 0x40 | (ulonglong)((local_res8 & 0x10) != 0) * 0x10
       | (ulonglong)((local_res8 & 4) != 0) * 4 | (ulonglong)((local_res8 & 1) != 0) |
       (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 | (ulonglong)((uStackX_a & 4) != 0) * 0x40000
  ;
  *(undefined8 *)(local_res10 + -0x20) = unaff_R12;
  *(undefined8 *)(local_res10 + -0x18) = unaff_retaddr;
  *(longlong *)(local_res10 + -8) = lVar1 + -0x9dcce5b;
  *(undefined8 *)(local_res10 + -0x28cf) = unaff_R13;
  *(undefined8 *)(local_res10 + -0x28d7) = unaff_R13;
  *(undefined **)(local_res10 + -0x28cf) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14da9e8d8 FUN_14da9e8d8 body=27 status=ok
// SIG undefined FUN_14da9e8d8(void)

void FUN_14da9e8d8(void)

{
  FUN_165e93f27();
  return;
}



// FUNCTION 14da9e97c FUN_14da9e97c body=162 status=ok
// SIG undefined FUN_14da9e97c(void)

void FUN_14da9e97c(void)

{
  ulonglong *puVar1;
  ulonglong in_RAX;
  ushort *in_R9;
  longlong local_res20;
  
  *in_R9 = ~*in_R9;
  *in_R9 = *in_R9 | 0x100;
  *in_R9 = ~*in_R9;
  puVar1 = (ulonglong *)(local_res20 + -8);
  *puVar1 = in_RAX;
  *(ulonglong *)(local_res20 + -0x10) = *puVar1;
  *puVar1 = 0;
  *puVar1 = *puVar1 + 0x5c2c5fae;
  *puVar1 = *puVar1 ^ 0x5c2c5fae;
  *puVar1 = (ulonglong)(&LAB_14de180cd + *puVar1);
  FUN_15b1916cc();
  return;
}



// FUNCTION 14da9eabb FUN_14da9eabb body=156 status=ok
// SIG undefined FUN_14da9eabb(void)

void FUN_14da9eabb(undefined8 param_1,undefined8 param_2)

{
  FUN_161c6cad3(param_1,param_2);
  return;
}



// FUNCTION 14da9eb58 FUN_14da9eb58 body=432 status=ok
// SIG undefined FUN_14da9eb58(void)

undefined8 FUN_14da9eb58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong unaff_R13;
  
  FUN_1611f18c3();
  lVar2 = *(longlong *)(unaff_R13 + -0x40) >> 5;
  FUN_162f07496();
  uVar1 = FUN_15b0ef928(lVar2,param_2);
  return uVar1;
}



// FUNCTION 14da9ed91 FUN_14da9ed91 body=137 status=ok
// SIG undefined FUN_14da9ed91(void)

void FUN_14da9ed91(void)

{
  return;
}



// FUNCTION 14da9efeb FUN_14da9efeb body=146 status=ok
// SIG undefined FUN_14da9efeb(void)

void FUN_14da9efeb(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_156d3c683(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14da9f080 FUN_14da9f080 body=188 status=ok
// SIG undefined FUN_14da9f080(void)

/* WARNING: Removing unreachable block (ram,0x000161b79e9f) */
/* WARNING: Removing unreachable block (ram,0x000161b79ea5) */
/* WARNING: Removing unreachable block (ram,0x00014da9f242) */
/* WARNING: Removing unreachable block (ram,0x00014da9f248) */
/* WARNING: Removing unreachable block (ram,0x0001621dc1ea) */
/* WARNING: Removing unreachable block (ram,0x0001621dc1f0) */
/* WARNING: Removing unreachable block (ram,0x00014da9f0fe) */

void FUN_14da9f080(undefined8 param_1,ulonglong param_2)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0x00000004;
  FUN_15b63aac1(puVar1,param_2 ^ 0xffff);
  FUN_156d799f5(puVar1);
  return;
}



// FUNCTION 14da9f13d FUN_14da9f13d body=396 status=ok
// SIG undefined FUN_14da9f13d(void)

/* WARNING: Removing unreachable block (ram,0x000161b79e9f) */
/* WARNING: Removing unreachable block (ram,0x000161b79ea5) */
/* WARNING: Removing unreachable block (ram,0x00014da9f242) */
/* WARNING: Removing unreachable block (ram,0x00014da9f248) */
/* WARNING: Removing unreachable block (ram,0x0001621dc1ea) */
/* WARNING: Removing unreachable block (ram,0x0001621dc1f0) */

void FUN_14da9f13d(undefined8 param_1)

{
  FUN_156d799f5(param_1);
  return;
}



// FUNCTION 14da9f2cf FUN_14da9f2cf body=122 status=ok
// SIG undefined FUN_14da9f2cf(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da9f2cf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 in_R11D;
  
  FUN_165f7532b(in_R11D,8,param_3,param_4);
  return;
}



// FUNCTION 14da9f34b thunk_FUN_14da9f351 body=5 status=ok
// SIG undefined thunk_FUN_14da9f351(void)

void thunk_FUN_14da9f351(void)

{
  FUN_16131bb16();
  return;
}



// FUNCTION 14da9f351 FUN_14da9f351 body=61 status=ok
// SIG undefined FUN_14da9f351(void)

void FUN_14da9f351(void)

{
  FUN_16131bb16();
  return;
}



// FUNCTION 14da9f493 FUN_14da9f493 body=170 status=ok
// SIG undefined FUN_14da9f493(void)

void FUN_14da9f493(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1574799b7(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14da9f5e7 FUN_14da9f5e7 body=126 status=ok
// SIG undefined FUN_14da9f5e7(void)

void FUN_14da9f5e7(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_R12;
  undefined8 in_stack_00000010;
  
  uVar1 = *(ulonglong *)(unaff_R12 + 8);
  *(ulonglong *)(unaff_R12 + 8) = ~*(ulonglong *)(unaff_R12 + 8);
  *(ulonglong *)(unaff_R12 + 8) = *(ulonglong *)(unaff_R12 + 8) | in_RAX;
  *(ulonglong *)(unaff_R12 + 8) = ~((~in_RAX | uVar1) & *(ulonglong *)(unaff_R12 + 8));
  FUN_1619b0f2b(param_1,param_2,in_stack_00000010);
  return;
}



// FUNCTION 14da9f66c FUN_14da9f66c body=129 status=ok
// SIG undefined FUN_14da9f66c(void)

void FUN_14da9f66c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_ID;
  int unaff_retaddr;
  undefined8 in_stack_00000008;
  
  uVar1 = unaff_retaddr + 0x3ccb3e7e;
  uVar2 = param_3 + uVar1;
  FUN_162248f14(param_1,param_2,uVar2,in_stack_00000008,
                (ulonglong)((in_NT & 1) != 0) * 0x4000 | (ulonglong)SCARRY4(param_3,uVar1) * 0x800 |
                (ulonglong)((in_IF & 1) != 0) * 0x200 | (ulonglong)((in_TF & 1) != 0) * 0x100 |
                (ulonglong)((int)uVar2 < 0) * 0x80 | (ulonglong)(uVar2 == 0) * 0x40 |
                (ulonglong)((in_AF & 1) != 0) * 0x10 |
                (ulonglong)((POPCOUNT(uVar2 & 0xff) & 1U) == 0) * 4 |
                (ulonglong)CARRY4(param_3,uVar1) | (ulonglong)((in_ID & 1) != 0) * 0x200000 |
                (ulonglong)((in_AC & 1) != 0) * 0x40000);
  FUN_164fd0450();
  return;
}



// FUNCTION 14da9f6f0 FUN_14da9f6f0 body=172 status=ok
// SIG undefined FUN_14da9f6f0(void)

void FUN_14da9f6f0(void)

{
  FUN_164fd0450();
  return;
}



// FUNCTION 14da9f79c FUN_14da9f79c body=44 status=ok
// SIG undefined FUN_14da9f79c(void)

void FUN_14da9f79c(void)

{
  FUN_14d85d504();
  return;
}



// FUNCTION 14da9f955 FUN_14da9f955 body=802 status=ok
// SIG undefined FUN_14da9f955(void)

/* WARNING: Removing unreachable block (ram,0x00016160fb06) */
/* WARNING: Removing unreachable block (ram,0x00016160fb0c) */
/* WARNING: Removing unreachable block (ram,0x00016160fb11) */
/* WARNING: Removing unreachable block (ram,0x000161997ec0) */
/* WARNING: Removing unreachable block (ram,0x000161997f44) */
/* WARNING: Removing unreachable block (ram,0x000161997f49) */
/* WARNING: Removing unreachable block (ram,0x000161997f54) */
/* WARNING: Removing unreachable block (ram,0x00016160fa5e) */
/* WARNING: Removing unreachable block (ram,0x00014ddf95be) */
/* WARNING: Removing unreachable block (ram,0x000161997f4f) */
/* WARNING: Removing unreachable block (ram,0x00016160fb9a) */
/* WARNING: Removing unreachable block (ram,0x00016160fba0) */
/* WARNING: Removing unreachable block (ram,0x00016160fc37) */
/* WARNING: Removing unreachable block (ram,0x00016160fc3d) */
/* WARNING: Removing unreachable block (ram,0x00016160fc44) */
/* WARNING: Removing unreachable block (ram,0x00015b969a48) */
/* WARNING: Removing unreachable block (ram,0x00014da9fa7d) */
/* WARNING: Removing unreachable block (ram,0x00014da9fa83) */
/* WARNING: Removing unreachable block (ram,0x00016160fa53) */
/* WARNING: Removing unreachable block (ram,0x00014da9f9f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14da9f955(undefined8 param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int unaff_EBX;
  int unaff_ESI;
  uint unaff_EDI;
  longlong lVar3;
  uint unaff_R12D;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong local_res10;
  ulonglong in_stack_00000018;
  ulonglong uStack0000000000000028;
  ulonglong in_stack_00000030;
  ulonglong in_stack_00000038;
  
  uStack0000000000000028 = param_1;
  uVar1 = FUN_165206b2a();
  local_res10 = in_stack_00000018 & 0xffffffff;
  lVar3 = (ulonglong)
          ((-2 - ((~(unaff_ESI - unaff_EBX) | unaff_R12D) + (unaff_ESI - unaff_EBX) + 1)) -
          ~unaff_EDI) + (local_res10 ^ 0x4cf49d18);
  *(undefined8 *)((longlong)&stack0x00000028 + lVar3) = 0;
  *(ulonglong *)((longlong)&stack0x00000028 + lVar3) =
       *(ulonglong *)((longlong)&stack0x00000028 + lVar3) ^
       ((ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
        (ulonglong)(in_TF & 1) * 0x100 | 0x80 | (ulonglong)(in_AF & 1) * 0x10 |
        (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
        (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000);
  uStack0000000000000028 = FUN_165206a8b ^ uVar1;
  in_stack_00000030 = in_stack_00000030 ^ uVar1;
  in_stack_00000038 = in_stack_00000038 ^ uVar1;
  uVar2 = FUN_166908b34();
  return uVar2;
}



// FUNCTION 14da9fa94 FUN_14da9fa94 body=385 status=ok
// SIG undefined FUN_14da9fa94(void)

/* WARNING: Removing unreachable block (ram,0x000161582e44) */
/* WARNING: Removing unreachable block (ram,0x000161582e4a) */
/* WARNING: Removing unreachable block (ram,0x000161582d30) */
/* WARNING: Removing unreachable block (ram,0x000161582d36) */
/* WARNING: Removing unreachable block (ram,0x000156632665) */
/* WARNING: Removing unreachable block (ram,0x000166254ea7) */
/* WARNING: Removing unreachable block (ram,0x00014da9fbf5) */
/* WARNING: Removing unreachable block (ram,0x00014da9fbfb) */
/* WARNING: Removing unreachable block (ram,0x000165c79812) */
/* WARNING: Removing unreachable block (ram,0x000165c798a3) */
/* WARNING: Removing unreachable block (ram,0x000165c798a8) */
/* WARNING: Removing unreachable block (ram,0x000161582b5d) */
/* WARNING: Removing unreachable block (ram,0x000161582ba7) */
/* WARNING: Removing unreachable block (ram,0x000161582bab) */
/* WARNING: Removing unreachable block (ram,0x000162d223de) */
/* WARNING: Removing unreachable block (ram,0x000162d22404) */
/* WARNING: Removing unreachable block (ram,0x000162d2246e) */
/* WARNING: Removing unreachable block (ram,0x00015786191c) */
/* WARNING: Removing unreachable block (ram,0x000165c798ae) */
/* WARNING: Removing unreachable block (ram,0x000165c79953) */
/* WARNING: Removing unreachable block (ram,0x000165c79958) */
/* WARNING: Removing unreachable block (ram,0x00014e04cc35) */
/* WARNING: Removing unreachable block (ram,0x000165c7995e) */
/* WARNING: Removing unreachable block (ram,0x000165c79a0a) */
/* WARNING: Removing unreachable block (ram,0x00016605328f) */
/* WARNING: Removing unreachable block (ram,0x000165c79a10) */
/* WARNING: Removing unreachable block (ram,0x000165c79aa0) */
/* WARNING: Removing unreachable block (ram,0x000165c79aa6) */
/* WARNING: Removing unreachable block (ram,0x000165c79ae9) */
/* WARNING: Removing unreachable block (ram,0x000165c79b11) */
/* WARNING: Removing unreachable block (ram,0x000165c79b1d) */
/* WARNING: Removing unreachable block (ram,0x000165c79b20) */
/* WARNING: Removing unreachable block (ram,0x000166254e36) */
/* WARNING: Removing unreachable block (ram,0x000166254eb0) */
/* WARNING: Removing unreachable block (ram,0x000162d22474) */
/* WARNING: Removing unreachable block (ram,0x000161582bfa) */
/* WARNING: Removing unreachable block (ram,0x000161582c9d) */
/* WARNING: Removing unreachable block (ram,0x000161582ca2) */
/* WARNING: Removing unreachable block (ram,0x000161582ca8) */
/* WARNING: Removing unreachable block (ram,0x000166d42eff) */
/* WARNING: Removing unreachable block (ram,0x0001657577a8) */
/* WARNING: Removing unreachable block (ram,0x000166d42f88) */
/* WARNING: Removing unreachable block (ram,0x000166d42f8e) */
/* WARNING: Removing unreachable block (ram,0x000166d42f93) */
/* WARNING: Removing unreachable block (ram,0x000166d42fbb) */
/* WARNING: Removing unreachable block (ram,0x000166d42fc0) */
/* WARNING: Removing unreachable block (ram,0x00014d812f67) */
/* WARNING: Removing unreachable block (ram,0x000166d43021) */
/* WARNING: Removing unreachable block (ram,0x000166d43027) */
/* WARNING: Removing unreachable block (ram,0x00015b1001ed) */
/* WARNING: Removing unreachable block (ram,0x000161582e85) */
/* WARNING: Removing unreachable block (ram,0x000161582e88) */

undefined8 FUN_14da9fa94(void)

{
  undefined8 uVar1;
  
  FUN_166963a63();
  uVar1 = FUN_165c79812();
  return uVar1;
}



// FUNCTION 14da9fdcc FUN_14da9fdcc body=483 status=ok
// SIG undefined FUN_14da9fdcc(void)

/* WARNING: Removing unreachable block (ram,0x00014da9fe70) */
/* WARNING: Removing unreachable block (ram,0x00014da9fe76) */

void FUN_14da9fdcc(void)

{
  return;
}



// FUNCTION 14da9ffb6 thunk_FUN_14da9ffbc body=5 status=ok
// SIG undefined thunk_FUN_14da9ffbc(void)

void thunk_FUN_14da9ffbc(byte param_1,uint param_2)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  thunk_FUN_1624be68a(param_1,param_2 << (param_1 & 0x1f) | param_2 >> 0x20 - (param_1 & 0x1f),
                      *(undefined8 *)(unaff_R12 + -0x80),*(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX)
  ;
  return;
}



// FUNCTION 14da9ffbc FUN_14da9ffbc body=139 status=ok
// SIG undefined FUN_14da9ffbc(void)

void FUN_14da9ffbc(byte param_1,uint param_2)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  thunk_FUN_1624be68a(param_1,param_2 << (param_1 & 0x1f) | param_2 >> 0x20 - (param_1 & 0x1f),
                      *(undefined8 *)(unaff_R12 + -0x80),*(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX)
  ;
  return;
}



// FUNCTION 14daa00d7 FUN_14daa00d7 body=103 status=ok
// SIG undefined FUN_14daa00d7(void)

void FUN_14daa00d7(void)

{
  return;
}



// FUNCTION 14daa0204 FUN_14daa0204 body=169 status=ok
// SIG undefined FUN_14daa0204(void)

void FUN_14daa0204(byte param_1,longlong param_2)

{
  longlong unaff_RBP;
  undefined8 unaff_retaddr;
  
  FUN_156eaa8e1(unaff_retaddr,unaff_RBP - (param_2 << (param_1 & 0x3f)));
  return;
}



// FUNCTION 14daa0337 FUN_14daa0337 body=170 status=ok
// SIG undefined FUN_14daa0337(void)

/* WARNING: Removing unreachable block (ram,0x00014daa03e1) */

undefined8 FUN_14daa0337(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong unaff_R13;
  
  if (-1 < *(longlong *)(unaff_R13 + -0x68)) {
    uVar1 = FUN_16240761a();
    return uVar1;
  }
  uVar1 = FUN_1662cf7b5(param_1,FUN_1662cf7b5,param_3);
  return uVar1;
}



// FUNCTION 14daa03e1 FUN_14daa03e1 body=167 status=ok
// SIG undefined FUN_14daa03e1(void)

undefined8 FUN_14daa03e1(void)

{
  return 0x26807c28;
}



// FUNCTION 14daa0708 FUN_14daa0708 body=262 status=ok
// SIG undefined FUN_14daa0708(void)

/* WARNING: Instruction at (ram,0x00014daa0ad7) overlaps instruction at (ram,0x00014daa0ad6)
    */
/* WARNING: Removing unreachable block (ram,0x00014daa08c9) */
/* WARNING: Removing unreachable block (ram,0x00014daa09e8) */
/* WARNING: Removing unreachable block (ram,0x00014daa09ee) */
/* WARNING: Removing unreachable block (ram,0x00014daa0a7e) */
/* WARNING: Removing unreachable block (ram,0x00014daa0a83) */
/* WARNING: Removing unreachable block (ram,0x00014daa0a89) */
/* WARNING: Removing unreachable block (ram,0x00014daa0ad7) */
/* WARNING: Removing unreachable block (ram,0x00014daa0ad6) */
/* WARNING: Removing unreachable block (ram,0x00014daa0af3) */
/* WARNING: Removing unreachable block (ram,0x00014daa0957) */
/* WARNING: Removing unreachable block (ram,0x0001614901f0) */
/* WARNING: Removing unreachable block (ram,0x00014d9ad742) */
/* WARNING: Removing unreachable block (ram,0x00014d9ad748) */
/* WARNING: Removing unreachable block (ram,0x00014d9ad74d) */
/* WARNING: Removing unreachable block (ram,0x000161490273) */
/* WARNING: Removing unreachable block (ram,0x00016227b446) */
/* WARNING: Removing unreachable block (ram,0x000161490279) */
/* WARNING: Removing unreachable block (ram,0x0001614902a9) */
/* WARNING: Removing unreachable block (ram,0x000161490314) */
/* WARNING: Removing unreachable block (ram,0x000161490319) */
/* WARNING: Removing unreachable block (ram,0x0001576304da) */
/* WARNING: Removing unreachable block (ram,0x0001576304e7) */
/* WARNING: Removing unreachable block (ram,0x0001576304eb) */
/* WARNING: Removing unreachable block (ram,0x0001576305d9) */
/* WARNING: Removing unreachable block (ram,0x0001576305dd) */
/* WARNING: Removing unreachable block (ram,0x00016149031f) */
/* WARNING: Removing unreachable block (ram,0x0001614903ae) */
/* WARNING: Removing unreachable block (ram,0x0001614903b4) */
/* WARNING: Removing unreachable block (ram,0x000161490440) */
/* WARNING: Removing unreachable block (ram,0x000160fd537d) */
/* WARNING: Removing unreachable block (ram,0x000160fd5419) */
/* WARNING: Removing unreachable block (ram,0x000160fd541f) */
/* WARNING: Removing unreachable block (ram,0x00014d7f257c) */
/* WARNING: Removing unreachable block (ram,0x000161490446) */
/* WARNING: Removing unreachable block (ram,0x000161490570) */
/* WARNING: Removing unreachable block (ram,0x00016271c2a3) */
/* WARNING: Removing unreachable block (ram,0x000161490576) */
/* WARNING: Removing unreachable block (ram,0x000161490605) */
/* WARNING: Removing unreachable block (ram,0x000165f312b2) */
/* WARNING: Removing unreachable block (ram,0x000165f3130e) */
/* WARNING: Removing unreachable block (ram,0x000165f31314) */
/* WARNING: Removing unreachable block (ram,0x000160dff67d) */
/* WARNING: Removing unreachable block (ram,0x00015b959850) */
/* WARNING: Removing unreachable block (ram,0x00015b9598f5) */
/* WARNING: Removing unreachable block (ram,0x0001610c4feb) */
/* WARNING: Removing unreachable block (ram,0x00014d9ad6ae) */
/* WARNING: Removing unreachable block (ram,0x000165f13f28) */
/* WARNING: Removing unreachable block (ram,0x0001610c5080) */
/* WARNING: Removing unreachable block (ram,0x0001610c5086) */
/* WARNING: Removing unreachable block (ram,0x0001610c508b) */
/* WARNING: Removing unreachable block (ram,0x0001610c511c) */
/* WARNING: Removing unreachable block (ram,0x0001610c5122) */
/* WARNING: Removing unreachable block (ram,0x000156ce1f67) */
/* WARNING: Removing unreachable block (ram,0x000156ce1fe5) */
/* WARNING: Removing unreachable block (ram,0x0001573ee3f7) */
/* WARNING: Removing unreachable block (ram,0x000156ce1feb) */
/* WARNING: Removing unreachable block (ram,0x000156ce207b) */
/* WARNING: Removing unreachable block (ram,0x000156ce2080) */
/* WARNING: Removing unreachable block (ram,0x000156ce2086) */
/* WARNING: Removing unreachable block (ram,0x000156ce220d) */
/* WARNING: Removing unreachable block (ram,0x000156ce2213) */
/* WARNING: Removing unreachable block (ram,0x000161127bcb) */
/* WARNING: Removing unreachable block (ram,0x000165088421) */
/* WARNING: Removing unreachable block (ram,0x0001650884c2) */
/* WARNING: Removing unreachable block (ram,0x0001650884c8) */
/* WARNING: Removing unreachable block (ram,0x000166da9ea8) */
/* WARNING: Removing unreachable block (ram,0x0001610c524c) */
/* WARNING: Removing unreachable block (ram,0x0001610c5252) */
/* WARNING: Removing unreachable block (ram,0x0001564391b2) */
/* WARNING: Removing unreachable block (ram,0x000160fb12f8) */
/* WARNING: Removing unreachable block (ram,0x00014daa08bd) */
/* WARNING: Removing unreachable block (ram,0x00014daa08ce) */
/* WARNING: Removing unreachable block (ram,0x00014daa0951) */
/* WARNING: Removing unreachable block (ram,0x000164f31160) */
/* WARNING: Removing unreachable block (ram,0x00014daa094c) */
/* WARNING: Removing unreachable block (ram,0x000161b4eeba) */
/* WARNING: Removing unreachable block (ram,0x00014daa0797) */
/* WARNING: Removing unreachable block (ram,0x00014daa0818) */
/* WARNING: Removing unreachable block (ram,0x00014daa081d) */
/* WARNING: Removing unreachable block (ram,0x0001567f349c) */
/* WARNING: Removing unreachable block (ram,0x00014daa0823) */
/* WARNING: Removing unreachable block (ram,0x00014daa0857) */
/* WARNING: Removing unreachable block (ram,0x000161b4eead) */

undefined8 FUN_14daa0708(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  undefined8 uStackX_10;
  ulonglong local_res20;
  
  *(ulonglong *)(unaff_RDI + 0x10) = ~*(ulonglong *)(unaff_RDI + 0x10);
  lVar1 = *(longlong *)(unaff_RDI + 0x10);
  *(ulonglong *)(unaff_RDI + 0x10) = *(ulonglong *)(unaff_RDI + 0x10) & ~param_1;
  *(ulonglong *)(unaff_RDI + 0x10) = (lVar1 + ~param_1) - *(longlong *)(unaff_RDI + 0x10);
  *(ulonglong *)(unaff_RDI + 0x10) = ~*(ulonglong *)(unaff_RDI + 0x10);
  uVar2 = (*(code *)0x1658a5d7d)(-1 - ~local_res20,param_2,param_3,uStackX_10);
  return uVar2;
}



// FUNCTION 14daa0797 thunk_FUN_14daa079d body=5 status=ok
// SIG undefined thunk_FUN_14daa079d(void)

/* WARNING: Instruction at (ram,0x00014daa0ad7) overlaps instruction at (ram,0x00014daa0ad6)
    */
/* WARNING: Removing unreachable block (ram,0x00014daa08c9) */
/* WARNING: Removing unreachable block (ram,0x00014daa09e8) */
/* WARNING: Removing unreachable block (ram,0x00014daa09ee) */
/* WARNING: Removing unreachable block (ram,0x00014daa0a7e) */
/* WARNING: Removing unreachable block (ram,0x00014daa0a83) */
/* WARNING: Removing unreachable block (ram,0x00014daa0a89) */
/* WARNING: Removing unreachable block (ram,0x00014daa0ad7) */
/* WARNING: Removing unreachable block (ram,0x00014daa0ad6) */
/* WARNING: Removing unreachable block (ram,0x00014daa0af3) */
/* WARNING: Removing unreachable block (ram,0x00014daa0957) */
/* WARNING: Removing unreachable block (ram,0x0001614901f0) */
/* WARNING: Removing unreachable block (ram,0x00014d9ad742) */
/* WARNING: Removing unreachable block (ram,0x00014d9ad748) */
/* WARNING: Removing unreachable block (ram,0x00014d9ad74d) */
/* WARNING: Removing unreachable block (ram,0x000161490273) */
/* WARNING: Removing unreachable block (ram,0x00016227b446) */
/* WARNING: Removing unreachable block (ram,0x000161490279) */
/* WARNING: Removing unreachable block (ram,0x0001614902a9) */
/* WARNING: Removing unreachable block (ram,0x000161490314) */
/* WARNING: Removing unreachable block (ram,0x000161490319) */
/* WARNING: Removing unreachable block (ram,0x0001576304da) */
/* WARNING: Removing unreachable block (ram,0x0001576304e7) */
/* WARNING: Removing unreachable block (ram,0x0001576304eb) */
/* WARNING: Removing unreachable block (ram,0x0001576305d9) */
/* WARNING: Removing unreachable block (ram,0x0001576305dd) */
/* WARNING: Removing unreachable block (ram,0x00016149031f) */
/* WARNING: Removing unreachable block (ram,0x0001614903ae) */
/* WARNING: Removing unreachable block (ram,0x0001614903b4) */
/* WARNING: Removing unreachable block (ram,0x000161490440) */
/* WARNING: Removing unreachable block (ram,0x000160fd537d) */
/* WARNING: Removing unreachable block (ram,0x000160fd5419) */
/* WARNING: Removing unreachable block (ram,0x000160fd541f) */
/* WARNING: Removing unreachable block (ram,0x00014d7f257c) */
/* WARNING: Removing unreachable block (ram,0x000161490446) */
/* WARNING: Removing unreachable block (ram,0x000161490570) */
/* WARNING: Removing unreachable block (ram,0x00016271c2a3) */
/* WARNING: Removing unreachable block (ram,0x000161490576) */
/* WARNING: Removing unreachable block (ram,0x000161490605) */
/* WARNING: Removing unreachable block (ram,0x000165f312b2) */
/* WARNING: Removing unreachable block (ram,0x000165f3130e) */
/* WARNING: Removing unreachable block (ram,0x000165f31314) */
/* WARNING: Removing unreachable block (ram,0x000160dff67d) */
/* WARNING: Removing unreachable block (ram,0x00015b959850) */
/* WARNING: Removing unreachable block (ram,0x00015b9598f5) */
/* WARNING: Removing unreachable block (ram,0x0001610c4feb) */
/* WARNING: Removing unreachable block (ram,0x00014d9ad6ae) */
/* WARNING: Removing unreachable block (ram,0x000165f13f28) */
/* WARNING: Removing unreachable block (ram,0x0001610c5080) */
/* WARNING: Removing unreachable block (ram,0x0001610c5086) */
/* WARNING: Removing unreachable block (ram,0x0001610c508b) */
/* WARNING: Removing unreachable block (ram,0x0001610c511c) */
/* WARNING: Removing unreachable block (ram,0x0001610c5122) */
/* WARNING: Removing unreachable block (ram,0x000156ce1f67) */
/* WARNING: Removing unreachable block (ram,0x000156ce1fe5) */
/* WARNING: Removing unreachable block (ram,0x0001573ee3f7) */
/* WARNING: Removing unreachable block (ram,0x000156ce1feb) */
/* WARNING: Removing unreachable block (ram,0x000156ce207b) */
/* WARNING: Removing unreachable block (ram,0x000156ce2080) */
/* WARNING: Removing unreachable block (ram,0x000156ce2086) */
/* WARNING: Removing unreachable block (ram,0x000156ce220d) */
/* WARNING: Removing unreachable block (ram,0x000156ce2213) */
/* WARNING: Removing unreachable block (ram,0x000161127bcb) */
/* WARNING: Removing unreachable block (ram,0x000165088421) */
/* WARNING: Removing unreachable block (ram,0x0001650884c2) */
/* WARNING: Removing unreachable block (ram,0x0001650884c8) */
/* WARNING: Removing unreachable block (ram,0x000166da9ea8) */
/* WARNING: Removing unreachable block (ram,0x0001610c524c) */
/* WARNING: Removing unreachable block (ram,0x0001610c5252) */
/* WARNING: Removing unreachable block (ram,0x0001564391b2) */
/* WARNING: Removing unreachable block (ram,0x000160fb12f8) */
/* WARNING: Removing unreachable block (ram,0x00014daa08bd) */
/* WARNING: Removing unreachable block (ram,0x00014daa08ce) */
/* WARNING: Removing unreachable block (ram,0x00014daa0951) */
/* WARNING: Removing unreachable block (ram,0x000164f31160) */
/* WARNING: Removing unreachable block (ram,0x00014daa094c) */
/* WARNING: Removing unreachable block (ram,0x000161b4eeba) */
/* WARNING: Removing unreachable block (ram,0x00014daa0823) */
/* WARNING: Removing unreachable block (ram,0x00014daa0857) */
/* WARNING: Removing unreachable block (ram,0x000161b4eead) */

undefined8 thunk_FUN_14daa079d(ulonglong param_1)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  undefined8 uStackX_8;
  
  if ((uStackX_8 ^ 0xffffffffffffffff | ~param_1) == 0xffffffffffffffff) {
    return in_RAX;
  }
  uVar1 = FUN_1567f349c();
  return uVar1;
}



// FUNCTION 14daa079d FUN_14daa079d body=459 status=ok
// SIG undefined FUN_14daa079d(void)

/* WARNING: Instruction at (ram,0x00014daa0ad7) overlaps instruction at (ram,0x00014daa0ad6)
    */
/* WARNING: Removing unreachable block (ram,0x00014daa08c9) */
/* WARNING: Removing unreachable block (ram,0x00014daa09e8) */
/* WARNING: Removing unreachable block (ram,0x00014daa09ee) */
/* WARNING: Removing unreachable block (ram,0x00014daa0a7e) */
/* WARNING: Removing unreachable block (ram,0x00014daa0a83) */
/* WARNING: Removing unreachable block (ram,0x00014daa0a89) */
/* WARNING: Removing unreachable block (ram,0x00014daa0ad7) */
/* WARNING: Removing unreachable block (ram,0x00014daa0ad6) */
/* WARNING: Removing unreachable block (ram,0x00014daa0af3) */
/* WARNING: Removing unreachable block (ram,0x00014daa0957) */
/* WARNING: Removing unreachable block (ram,0x0001614901f0) */
/* WARNING: Removing unreachable block (ram,0x00014d9ad742) */
/* WARNING: Removing unreachable block (ram,0x00014d9ad748) */
/* WARNING: Removing unreachable block (ram,0x00014d9ad74d) */
/* WARNING: Removing unreachable block (ram,0x000161490273) */
/* WARNING: Removing unreachable block (ram,0x00016227b446) */
/* WARNING: Removing unreachable block (ram,0x000161490279) */
/* WARNING: Removing unreachable block (ram,0x0001614902a9) */
/* WARNING: Removing unreachable block (ram,0x000161490314) */
/* WARNING: Removing unreachable block (ram,0x000161490319) */
/* WARNING: Removing unreachable block (ram,0x0001576304da) */
/* WARNING: Removing unreachable block (ram,0x0001576304e7) */
/* WARNING: Removing unreachable block (ram,0x0001576304eb) */
/* WARNING: Removing unreachable block (ram,0x0001576305d9) */
/* WARNING: Removing unreachable block (ram,0x0001576305dd) */
/* WARNING: Removing unreachable block (ram,0x00016149031f) */
/* WARNING: Removing unreachable block (ram,0x0001614903ae) */
/* WARNING: Removing unreachable block (ram,0x0001614903b4) */
/* WARNING: Removing unreachable block (ram,0x000161490440) */
/* WARNING: Removing unreachable block (ram,0x000160fd537d) */
/* WARNING: Removing unreachable block (ram,0x000160fd5419) */
/* WARNING: Removing unreachable block (ram,0x000160fd541f) */
/* WARNING: Removing unreachable block (ram,0x00014d7f257c) */
/* WARNING: Removing unreachable block (ram,0x000161490446) */
/* WARNING: Removing unreachable block (ram,0x000161490570) */
/* WARNING: Removing unreachable block (ram,0x00016271c2a3) */
/* WARNING: Removing unreachable block (ram,0x000161490576) */
/* WARNING: Removing unreachable block (ram,0x000161490605) */
/* WARNING: Removing unreachable block (ram,0x000165f312b2) */
/* WARNING: Removing unreachable block (ram,0x000165f3130e) */
/* WARNING: Removing unreachable block (ram,0x000165f31314) */
/* WARNING: Removing unreachable block (ram,0x000160dff67d) */
/* WARNING: Removing unreachable block (ram,0x00015b959850) */
/* WARNING: Removing unreachable block (ram,0x00015b9598f5) */
/* WARNING: Removing unreachable block (ram,0x0001610c4feb) */
/* WARNING: Removing unreachable block (ram,0x00014d9ad6ae) */
/* WARNING: Removing unreachable block (ram,0x000165f13f28) */
/* WARNING: Removing unreachable block (ram,0x0001610c5080) */
/* WARNING: Removing unreachable block (ram,0x0001610c5086) */
/* WARNING: Removing unreachable block (ram,0x0001610c508b) */
/* WARNING: Removing unreachable block (ram,0x0001610c511c) */
/* WARNING: Removing unreachable block (ram,0x0001610c5122) */
/* WARNING: Removing unreachable block (ram,0x000156ce1f67) */
/* WARNING: Removing unreachable block (ram,0x000156ce1fe5) */
/* WARNING: Removing unreachable block (ram,0x0001573ee3f7) */
/* WARNING: Removing unreachable block (ram,0x000156ce1feb) */
/* WARNING: Removing unreachable block (ram,0x000156ce207b) */
/* WARNING: Removing unreachable block (ram,0x000156ce2080) */
/* WARNING: Removing unreachable block (ram,0x000156ce2086) */
/* WARNING: Removing unreachable block (ram,0x000156ce220d) */
/* WARNING: Removing unreachable block (ram,0x000156ce2213) */
/* WARNING: Removing unreachable block (ram,0x000161127bcb) */
/* WARNING: Removing unreachable block (ram,0x000165088421) */
/* WARNING: Removing unreachable block (ram,0x0001650884c2) */
/* WARNING: Removing unreachable block (ram,0x0001650884c8) */
/* WARNING: Removing unreachable block (ram,0x000166da9ea8) */
/* WARNING: Removing unreachable block (ram,0x0001610c524c) */
/* WARNING: Removing unreachable block (ram,0x0001610c5252) */
/* WARNING: Removing unreachable block (ram,0x0001564391b2) */
/* WARNING: Removing unreachable block (ram,0x000160fb12f8) */
/* WARNING: Removing unreachable block (ram,0x00014daa08bd) */
/* WARNING: Removing unreachable block (ram,0x00014daa08ce) */
/* WARNING: Removing unreachable block (ram,0x00014daa0951) */
/* WARNING: Removing unreachable block (ram,0x000164f31160) */
/* WARNING: Removing unreachable block (ram,0x00014daa094c) */
/* WARNING: Removing unreachable block (ram,0x000161b4eeba) */
/* WARNING: Removing unreachable block (ram,0x00014daa0823) */
/* WARNING: Removing unreachable block (ram,0x00014daa0857) */
/* WARNING: Removing unreachable block (ram,0x000161b4eead) */

undefined8 FUN_14daa079d(ulonglong param_1)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  undefined8 local_res8;
  
  if ((local_res8 ^ 0xffffffffffffffff | ~param_1) == 0xffffffffffffffff) {
    return in_RAX;
  }
  uVar1 = FUN_1567f349c();
  return uVar1;
}



// FUNCTION 14daa08ce FUN_14daa08ce body=580 status=ok
// SIG undefined FUN_14daa08ce(void)

/* WARNING: Instruction at (ram,0x00014daa0ad7) overlaps instruction at (ram,0x00014daa0ad6)
    */
/* WARNING: Removing unreachable block (ram,0x00014daa09e8) */
/* WARNING: Removing unreachable block (ram,0x00014daa09ee) */
/* WARNING: Removing unreachable block (ram,0x00014daa0a7e) */
/* WARNING: Removing unreachable block (ram,0x000160fb12f8) */
/* WARNING: Removing unreachable block (ram,0x00014daa0a83) */
/* WARNING: Removing unreachable block (ram,0x00014daa0a89) */
/* WARNING: Removing unreachable block (ram,0x00014daa0ad7) */
/* WARNING: Removing unreachable block (ram,0x00014daa0ad6) */
/* WARNING: Removing unreachable block (ram,0x00014daa0af3) */
/* WARNING: Removing unreachable block (ram,0x00014daa0957) */
/* WARNING: Removing unreachable block (ram,0x0001614901f0) */
/* WARNING: Removing unreachable block (ram,0x00014d9ad742) */
/* WARNING: Removing unreachable block (ram,0x00014d9ad748) */
/* WARNING: Removing unreachable block (ram,0x00014d9ad74d) */
/* WARNING: Removing unreachable block (ram,0x000161490273) */
/* WARNING: Removing unreachable block (ram,0x00016227b446) */
/* WARNING: Removing unreachable block (ram,0x000161490279) */
/* WARNING: Removing unreachable block (ram,0x0001614902a9) */
/* WARNING: Removing unreachable block (ram,0x000161490314) */
/* WARNING: Removing unreachable block (ram,0x000161490319) */
/* WARNING: Removing unreachable block (ram,0x0001576304da) */
/* WARNING: Removing unreachable block (ram,0x0001576304e7) */
/* WARNING: Removing unreachable block (ram,0x0001576304eb) */
/* WARNING: Removing unreachable block (ram,0x0001576305d9) */
/* WARNING: Removing unreachable block (ram,0x0001576305dd) */
/* WARNING: Removing unreachable block (ram,0x00016149031f) */
/* WARNING: Removing unreachable block (ram,0x0001614903ae) */
/* WARNING: Removing unreachable block (ram,0x0001614903b4) */
/* WARNING: Removing unreachable block (ram,0x000161490440) */
/* WARNING: Removing unreachable block (ram,0x000160fd537d) */
/* WARNING: Removing unreachable block (ram,0x000160fd5419) */
/* WARNING: Removing unreachable block (ram,0x000160fd541f) */
/* WARNING: Removing unreachable block (ram,0x00014d7f257c) */
/* WARNING: Removing unreachable block (ram,0x000161490446) */
/* WARNING: Removing unreachable block (ram,0x000161490570) */
/* WARNING: Removing unreachable block (ram,0x00016271c2a3) */
/* WARNING: Removing unreachable block (ram,0x000161490576) */
/* WARNING: Removing unreachable block (ram,0x000161490605) */
/* WARNING: Removing unreachable block (ram,0x000165f312b2) */
/* WARNING: Removing unreachable block (ram,0x000165f3130e) */
/* WARNING: Removing unreachable block (ram,0x000165f31314) */
/* WARNING: Removing unreachable block (ram,0x000160dff67d) */
/* WARNING: Removing unreachable block (ram,0x00015b959850) */
/* WARNING: Removing unreachable block (ram,0x00015b9598f5) */
/* WARNING: Removing unreachable block (ram,0x0001610c4feb) */
/* WARNING: Removing unreachable block (ram,0x00014d9ad6ae) */
/* WARNING: Removing unreachable block (ram,0x000165f13f28) */
/* WARNING: Removing unreachable block (ram,0x0001610c5080) */
/* WARNING: Removing unreachable block (ram,0x0001610c5086) */
/* WARNING: Removing unreachable block (ram,0x0001610c508b) */
/* WARNING: Removing unreachable block (ram,0x0001610c511c) */
/* WARNING: Removing unreachable block (ram,0x0001610c5122) */
/* WARNING: Removing unreachable block (ram,0x000156ce1f67) */
/* WARNING: Removing unreachable block (ram,0x000156ce1fe5) */
/* WARNING: Removing unreachable block (ram,0x0001573ee3f7) */
/* WARNING: Removing unreachable block (ram,0x000156ce1feb) */
/* WARNING: Removing unreachable block (ram,0x000156ce207b) */
/* WARNING: Removing unreachable block (ram,0x000156ce2080) */
/* WARNING: Removing unreachable block (ram,0x000156ce2086) */
/* WARNING: Removing unreachable block (ram,0x000156ce220d) */
/* WARNING: Removing unreachable block (ram,0x000156ce2213) */
/* WARNING: Removing unreachable block (ram,0x000161127bcb) */
/* WARNING: Removing unreachable block (ram,0x000165088421) */
/* WARNING: Removing unreachable block (ram,0x0001650884c2) */
/* WARNING: Removing unreachable block (ram,0x0001650884c8) */
/* WARNING: Removing unreachable block (ram,0x000166da9ea8) */
/* WARNING: Removing unreachable block (ram,0x0001610c524c) */
/* WARNING: Removing unreachable block (ram,0x0001610c5252) */
/* WARNING: Removing unreachable block (ram,0x0001564391b2) */
/* WARNING: Removing unreachable block (ram,0x00014daa094c) */

undefined8 FUN_14daa08ce(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_15b8fdd7b(param_1,param_2,param_3,FUN_15b8fdd7b);
  return uVar1;
}



// FUNCTION 14daa0b18 FUN_14daa0b18 body=95 status=ok
// SIG undefined FUN_14daa0b18(void)

/* WARNING: Removing unreachable block (ram,0x00014daa0b6b) */
/* WARNING: Removing unreachable block (ram,0x00014daa0b49) */

void FUN_14daa0b18(void)

{
  undefined4 in_EAX;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = in_EAX;
  FUN_161bb98af(FUN_161bb98af);
  return;
}



// FUNCTION 14daa0bfc FUN_14daa0bfc body=448 status=ok
// SIG undefined FUN_14daa0bfc(void)

/* WARNING: Removing unreachable block (ram,0x00014daa0c72) */
/* WARNING: Removing unreachable block (ram,0x00014daa0c78) */

void FUN_14daa0bfc(void)

{
  ulonglong unaff_RDI;
  longlong unaff_R12;
  ulonglong in_stack_00000010;
  
  FUN_162977012();
  FUN_161cbc007();
  *(ulonglong *)(&stack0x00000008 + unaff_R12) =
       ~((~(~unaff_RDI | in_stack_00000010) | ~in_stack_00000010 | unaff_RDI) +
         (~unaff_RDI | in_stack_00000010) + 1);
  return;
}



// FUNCTION 14daa0c8c FUN_14daa0c8c body=118 status=ok
// SIG undefined FUN_14daa0c8c(void)

void FUN_14daa0c8c(void)

{
  return;
}



// FUNCTION 14daa0d1a FUN_14daa0d1a body=167 status=ok
// SIG undefined FUN_14daa0d1a(void)

void FUN_14daa0d1a(void)

{
  return;
}



// FUNCTION 14daa0e5b FUN_14daa0e5b body=165 status=ok
// SIG undefined FUN_14daa0e5b(void)

/* WARNING: Removing unreachable block (ram,0x00014daa0ef5) */

void FUN_14daa0e5b(void)

{
  (*(code *)0x161228056)();
  return;
}



// FUNCTION 14daa0f02 FUN_14daa0f02 body=11 status=ok
// SIG undefined FUN_14daa0f02(void)

void FUN_14daa0f02(void)

{
  undefined8 local_res8;
  
  FUN_15b3d5987(local_res8);
  return;
}



// FUNCTION 14daa0fa2 FUN_14daa0fa2 body=166 status=ok
// SIG undefined FUN_14daa0fa2(void)

void FUN_14daa0fa2(void)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RDI;
  ulonglong in_R10;
  longlong unaff_R12;
  
  puVar1 = (ulonglong *)(&stack0xfffffffffae9d3b9 + unaff_RDI);
  puVar1[-1] = in_RAX;
  *(undefined4 *)(puVar1 + -1) = 0x80a1b255;
  *(undefined4 *)((longlong)puVar1 + -4) = 0xffffffff;
  *puVar1 = *(ulonglong *)(unaff_R12 + puVar1[-1] + 0x7f5e4d53);
  uVar4 = ~in_RAX | *puVar1;
  uVar3 = ~*puVar1;
  *puVar1 = uVar3 + in_RAX;
  *puVar1 = *puVar1 - (uVar3 & in_RAX);
  uVar3 = *puVar1;
  uVar2 = *(undefined8 *)(unaff_R12 + -0x78);
  *puVar1 = in_R10;
  puVar1[-1] = in_R10;
  *puVar1 = (ulonglong)&LAB_14daa1049;
  FUN_164fa0615(~((uVar3 - (uVar4 | uVar3)) + uVar4),uVar2);
  return;
}



// FUNCTION 14daa10d3 FUN_14daa10d3 body=178 status=ok
// SIG undefined FUN_14daa10d3(void)

undefined8 FUN_14daa10d3(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 in_RAX;
  ulonglong *unaff_R14;
  
  uVar1 = *unaff_R14;
  uVar2 = *unaff_R14;
  *unaff_R14 = ~*unaff_R14;
  *unaff_R14 = (~uVar2 - 1) - *unaff_R14;
  *unaff_R14 = ~((uVar1 ^ 0xffffffffffffffff) & *unaff_R14);
  return in_RAX;
}



// FUNCTION 14daa1186 FUN_14daa1186 body=147 status=ok
// SIG undefined FUN_14daa1186(void)

/* WARNING: Removing unreachable block (ram,0x00014daa12c5) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14daa1186(byte param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 in_R11;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  bool bVar5;
  bool bVar6;
  ulonglong uVar7;
  ulonglong local_res8;
  longlong lStackX_10;
  
  uVar4 = FUN_14dfc6c9e();
  LOCK();
  bVar3 = (byte)uVar4;
  bVar5 = bVar3 < DAT_14d7a5e7b;
  bVar6 = SBORROW1(bVar3,DAT_14d7a5e7b);
  cVar2 = bVar3 - DAT_14d7a5e7b;
  bVar3 = param_1;
  if (cVar2 != '\0') {
    uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),DAT_14d7a5e7b);
    bVar3 = DAT_14d7a5e7b;
  }
  DAT_14d7a5e7b = bVar3;
  UNLOCK();
  *(undefined8 *)(lStackX_10 + -8) = uVar4;
  *(undefined8 *)(lStackX_10 + -0x10) = uVar4;
  *(undefined4 *)(lStackX_10 + -0x18) = 0x12fc05e5;
  *(undefined8 *)(lStackX_10 + -0x20) = unaff_R14;
  *(ulonglong *)(lStackX_10 + -0x28) =
       (ulonglong)((local_res8 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar6 * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res8 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res8 & 0x100) != 0) * 0x100 | (ulonglong)(cVar2 < '\0') * 0x80 |
       (ulonglong)(cVar2 == '\0') * 0x40 | (ulonglong)((local_res8 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar2) & 1U) == 0) * 4 | (ulonglong)bVar5 |
       (ulonglong)((local_res8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((local_res8 & 0x40000) != 0) * 0x40000;
  if (!bVar5) {
    uVar4 = FUN_161ba142b();
    return uVar4;
  }
  *(undefined4 *)(lStackX_10 + -0x14) = 0;
  uVar7 = *(ulonglong *)(lStackX_10 + -0x28);
  lVar1 = *(longlong *)(lStackX_10 + -0x18);
  *(ulonglong *)(lStackX_10 + -0x18) =
       (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar7 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar7 & 0x400) != 0) * 0x400 | (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar7 & 0x100) != 0) * 0x100 | (ulonglong)((uVar7 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar7 & 0x40) != 0) * 0x40 | (ulonglong)((uVar7 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar7 & 4) != 0) * 4 | (ulonglong)((uVar7 & 1) != 0) |
       (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(lStackX_10 + -0x20) = param_4;
  uVar7 = *(ulonglong *)(lStackX_10 + -0x18);
  *(undefined8 *)(lStackX_10 + -0x18) = param_3;
  *(undefined8 *)(lStackX_10 + -0x20) = in_R11;
  *(ulonglong *)(lStackX_10 + -0x28) =
       (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar7 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar7 & 0x400) != 0) * 0x400 | (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar7 & 0x100) != 0) * 0x100 | (ulonglong)((uVar7 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar7 & 0x40) != 0) * 0x40 | (ulonglong)((uVar7 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar7 & 4) != 0) * 4 | (ulonglong)((uVar7 & 1) != 0) |
       (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000;
  *(longlong *)(lStackX_10 + -8) = lVar1 + -0xf08f1dd;
  *(undefined8 *)(lStackX_10 + -0x28cf) = unaff_R13;
  *(undefined8 *)(lStackX_10 + -0x28d7) = unaff_R13;
  *(undefined **)(lStackX_10 + -0x28cf) = &DAT_156ef2e4a;
  return *(undefined8 *)(lStackX_10 + -0x10);
}



// FUNCTION 14daa121b FUN_14daa121b body=169 status=ok
// SIG undefined FUN_14daa121b(void)

/* WARNING: Removing unreachable block (ram,0x00014daa12c5) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14daa121b(byte param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  undefined8 in_RAX;
  undefined8 uVar4;
  undefined8 in_R11;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  bool bVar5;
  bool bVar6;
  ulonglong uVar7;
  ulonglong local_res8;
  longlong local_res10;
  
  LOCK();
  bVar3 = (byte)in_RAX;
  bVar5 = bVar3 < DAT_14d7a5e7b;
  bVar6 = SBORROW1(bVar3,DAT_14d7a5e7b);
  cVar2 = bVar3 - DAT_14d7a5e7b;
  bVar3 = param_1;
  if (cVar2 != '\0') {
    in_RAX = CONCAT71((int7)((ulonglong)in_RAX >> 8),DAT_14d7a5e7b);
    bVar3 = DAT_14d7a5e7b;
  }
  DAT_14d7a5e7b = bVar3;
  UNLOCK();
  *(undefined8 *)(local_res10 + -8) = in_RAX;
  *(undefined8 *)(local_res10 + -0x10) = in_RAX;
  *(undefined4 *)(local_res10 + -0x18) = 0x12fc05e5;
  *(undefined8 *)(local_res10 + -0x20) = unaff_R14;
  *(ulonglong *)(local_res10 + -0x28) =
       (ulonglong)((local_res8 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar6 * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res8 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res8 & 0x100) != 0) * 0x100 | (ulonglong)(cVar2 < '\0') * 0x80 |
       (ulonglong)(cVar2 == '\0') * 0x40 | (ulonglong)((local_res8 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar2) & 1U) == 0) * 4 | (ulonglong)bVar5 |
       (ulonglong)((local_res8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((local_res8 & 0x40000) != 0) * 0x40000;
  if (!bVar5) {
    uVar4 = FUN_161ba142b();
    return uVar4;
  }
  *(undefined4 *)(local_res10 + -0x14) = 0;
  uVar7 = *(ulonglong *)(local_res10 + -0x28);
  lVar1 = *(longlong *)(local_res10 + -0x18);
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar7 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar7 & 0x400) != 0) * 0x400 | (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar7 & 0x100) != 0) * 0x100 | (ulonglong)((uVar7 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar7 & 0x40) != 0) * 0x40 | (ulonglong)((uVar7 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar7 & 4) != 0) * 4 | (ulonglong)((uVar7 & 1) != 0) |
       (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res10 + -0x20) = param_4;
  uVar7 = *(ulonglong *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x18) = param_3;
  *(undefined8 *)(local_res10 + -0x20) = in_R11;
  *(ulonglong *)(local_res10 + -0x28) =
       (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar7 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar7 & 0x400) != 0) * 0x400 | (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar7 & 0x100) != 0) * 0x100 | (ulonglong)((uVar7 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar7 & 0x40) != 0) * 0x40 | (ulonglong)((uVar7 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar7 & 4) != 0) * 4 | (ulonglong)((uVar7 & 1) != 0) |
       (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000;
  *(longlong *)(local_res10 + -8) = lVar1 + -0xf08f1dd;
  *(undefined8 *)(local_res10 + -0x28cf) = unaff_R13;
  *(undefined8 *)(local_res10 + -0x28d7) = unaff_R13;
  *(undefined **)(local_res10 + -0x28cf) = &DAT_156ef2e4a;
  return *(undefined8 *)(local_res10 + -0x10);
}



// FUNCTION 14daa12c5 FUN_14daa12c5 body=12 status=ok
// SIG undefined FUN_14daa12c5(void)

void FUN_14daa12c5(void)

{
  return;
}



// FUNCTION 14daa1528 FUN_14daa1528 body=306 status=ok
// SIG undefined FUN_14daa1528(void)

/* WARNING: Removing unreachable block (ram,0x00014daa1583) */
/* WARNING: Removing unreachable block (ram,0x00014daa15e2) */

void FUN_14daa1528(void)

{
  FUN_1668872a8();
  FUN_156c53847();
  return;
}



// FUNCTION 14daa170e FUN_14daa170e body=234 status=ok
// SIG undefined FUN_14daa170e(void)

/* WARNING: Removing unreachable block (ram,0x00014daa17e7) */

void FUN_14daa170e(undefined8 param_1,undefined8 param_2)

{
  FUN_164b9686f(param_1,param_2);
  FUN_1575b2454(param_1);
  return;
}



// FUNCTION 14daa19cf FUN_14daa19cf body=139 status=ok
// SIG undefined FUN_14daa19cf(void)

void FUN_14daa19cf(void)

{
  longlong unaff_RDI;
  ulonglong unaff_R12;
  
  *(ulonglong *)(unaff_RDI + 0x18) =
       (unaff_R12 - (*(ulonglong *)(unaff_RDI + 0x18) | unaff_R12)) +
       *(longlong *)(unaff_RDI + 0x18);
  (*(code *)0x1660ddbd2)();
  return;
}



// FUNCTION 14daa1dfe FUN_14daa1dfe body=993 status=ok
// SIG undefined FUN_14daa1dfe(void)

/* WARNING: Removing unreachable block (ram,0x00014daa1e95) */
/* WARNING: Removing unreachable block (ram,0x00014e17c8ed) */
/* WARNING: Removing unreachable block (ram,0x00014e17c8e2) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14daa1dfe(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong unaff_RBX;
  longlong in_R9;
  ulonglong unaff_R14;
  byte in_AF;
  
  uVar1 = in_RAX - (unaff_R14 | unaff_RBX);
  if (-1 < (int)(((uint)(uVar1 == 0) * 0x40 | (uint)(in_AF & 1) * 0x10 |
                  (uint)((POPCOUNT(uVar1 & 0xff) & 1U) == 0) * 4 |
                 (uint)(in_RAX < (unaff_R14 | unaff_RBX))) << 0x19)) {
    FUN_1572c8988();
    return;
  }
  if (in_R9 == 0) {
    FUN_1572c8932(FUN_1572c8932);
    return;
  }
  FUN_160dd826a();
  return;
}



// FUNCTION 14daa2095 FUN_14daa2095 body=140 status=ok
// SIG undefined FUN_14daa2095(void)

void FUN_14daa2095(undefined8 param_1,undefined8 param_2)

{
  (*(code *)0x165a07659)(param_1,param_2);
  return;
}



// FUNCTION 14daa22f8 FUN_14daa22f8 body=142 status=ok
// SIG undefined FUN_14daa22f8(void)

/* WARNING: Removing unreachable block (ram,0x00014daa2384) */

void FUN_14daa22f8(ulonglong param_1)

{
  ulonglong uVar1;
  longlong in_R10;
  undefined8 in_stack_00000008;
  undefined2 local_res10;
  
  uVar1 = *(ulonglong *)(in_R10 + 0x10);
  *(ulonglong *)(in_R10 + 0x10) = ~*(ulonglong *)(in_R10 + 0x10);
  *(ulonglong *)(in_R10 + 0x10) = *(ulonglong *)(in_R10 + 0x10) | param_1;
  *(ulonglong *)(in_R10 + 0x10) =
       ~((param_1 ^ 0xffffffffffffffff | uVar1) & *(ulonglong *)(in_R10 + 0x10));
  if ((-~local_res10 - (~(~(local_res10 | 0xfeff) - 0x100) + 2) & 1) != 0) {
    FUN_164b102cf(in_stack_00000008);
    return;
  }
  FUN_164b102cf(in_stack_00000008);
  return;
}



// FUNCTION 14daa2480 FUN_14daa2480 body=163 status=ok
// SIG undefined FUN_14daa2480(void)

void FUN_14daa2480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  undefined8 in_stack_00000010;
  
  (*(code *)&LAB_16181179e)(in_stack_00000010,param_2,param_3,local_res8);
  return;
}



// FUNCTION 14daa25c4 FUN_14daa25c4 body=504 status=ok
// SIG undefined FUN_14daa25c4(void)

/* WARNING: Removing unreachable block (ram,0x00014daa2657) */
/* WARNING: Removing unreachable block (ram,0x00014daa265d) */

void FUN_14daa25c4(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong in_R10;
  undefined8 in_stack_00000010;
  
  FUN_1669d56d0(param_5 | in_R10,
                ~((~in_R10 | *(ulonglong *)(param_2 + -0xa0)) &
                 (~*(ulonglong *)(param_2 + -0xa0) | in_R10)),param_3,in_stack_00000010);
  return;
}



// FUNCTION 14daa2799 FUN_14daa2799 body=158 status=ok
// SIG undefined FUN_14daa2799(void)

/* WARNING: Removing unreachable block (ram,0x00014daa27e3) */
/* WARNING: Removing unreachable block (ram,0x00014daa2824) */
/* WARNING: Removing unreachable block (ram,0x00014daa282a) */

void FUN_14daa2799(undefined8 param_1,ulonglong param_2)

{
  FUN_165203125(param_1,8,~param_2);
  return;
}



// FUNCTION 14daa2dfd FUN_14daa2dfd body=575 status=ok
// SIG undefined FUN_14daa2dfd(void)

void FUN_14daa2dfd(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong *unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_R13;
  undefined8 local_res10;
  undefined8 local_res20;
  
  uVar1 = *unaff_RBX;
  *unaff_RBX = ~*unaff_RBX;
  *unaff_RBX = *unaff_RBX | param_1;
  *unaff_RBX = ~(~(~(0xffffffffffffffff - param_1) & ~uVar1) & *unaff_RBX);
  *(undefined8 *)((local_res20 ^ param_1) - 8) = unaff_RSI;
  *(undefined8 *)((local_res20 ^ param_1) - 0x10) = unaff_R13;
  (*(code *)0x15ba22a72)(local_res10,param_2);
  return;
}



// FUNCTION 14daa2e7f FUN_14daa2e7f body=185 status=ok
// SIG undefined FUN_14daa2e7f(void)

/* WARNING: Removing unreachable block (ram,0x00014daa2f20) */
/* WARNING: Removing unreachable block (ram,0x00014daa2f26) */

ulonglong FUN_14daa2e7f(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return *(ulonglong *)(unaff_RDI + -0x80) ^ param_1;
}



// FUNCTION 14daa2f3a FUN_14daa2f3a body=84 status=ok
// SIG undefined FUN_14daa2f3a(void)

void FUN_14daa2f3a(void)

{
  return;
}



// FUNCTION 14daa31a3 FUN_14daa31a3 body=96 status=ok
// SIG undefined FUN_14daa31a3(void)

void FUN_14daa31a3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14d7bd73d(param_1,param_2,param_3);
  return;
}



// FUNCTION 14daa33e8 FUN_14daa33e8 body=138 status=ok
// SIG undefined FUN_14daa33e8(void)

void FUN_14daa33e8(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = CONCAT71((uint7)((ulonglong)*(undefined8 *)(unaff_R13 + -0x78) >> 8) ^
                   (uint7)(unaff_R15 >> 8),0x77) ^ 0x76;
  FUN_160cbb04f(uVar1,(*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) << ((byte)uVar1 & 0x3f));
  return;
}



// FUNCTION 14daa3474 FUN_14daa3474 body=294 status=ok
// SIG undefined FUN_14daa3474(void)

/* WARNING: Removing unreachable block (ram,0x00014daa3507) */
/* WARNING: Removing unreachable block (ram,0x00014daa350d) */
/* WARNING: Removing unreachable block (ram,0x000165355a53) */
/* WARNING: Removing unreachable block (ram,0x000161d709f0) */
/* WARNING: Removing unreachable block (ram,0x000165355adb) */
/* WARNING: Removing unreachable block (ram,0x000165355ae7) */
/* WARNING: Removing unreachable block (ram,0x000165355aec) */

void FUN_14daa3474(undefined8 param_1)

{
  FUN_165355a53(param_1);
  return;
}



// FUNCTION 14daa364e FUN_14daa364e body=141 status=ok
// SIG undefined FUN_14daa364e(void)

void FUN_14daa364e(undefined8 param_1,ulonglong param_2)

{
  longlong in_R10;
  
  *(ulonglong *)(in_R10 + 0x10) =
       ~((*(longlong *)(in_R10 + 0x10) - (param_2 | *(ulonglong *)(in_R10 + 0x10))) + param_2);
  return;
}



// FUNCTION 14daa3774 FUN_14daa3774 body=1048 status=ok
// SIG undefined FUN_14daa3774(void)

/* WARNING: Removing unreachable block (ram,0x000156e92a8a) */
/* WARNING: Removing unreachable block (ram,0x000156e92a90) */
/* WARNING: Removing unreachable block (ram,0x000156e92afb) */
/* WARNING: Removing unreachable block (ram,0x000156e92afe) */
/* WARNING: Removing unreachable block (ram,0x000166e0010f) */
/* WARNING: Removing unreachable block (ram,0x000166e0013e) */
/* WARNING: Removing unreachable block (ram,0x000166e00142) */
/* WARNING: Removing unreachable block (ram,0x00014daa37b2) */
/* WARNING: Removing unreachable block (ram,0x00014d84d7e3) */
/* WARNING: Removing unreachable block (ram,0x00014d84d7e9) */
/* WARNING: Removing unreachable block (ram,0x00014d84d7ee) */
/* WARNING: Removing unreachable block (ram,0x000156f87017) */
/* WARNING: Removing unreachable block (ram,0x00014daa3b0c) */
/* WARNING: Removing unreachable block (ram,0x00014daa3b4f) */
/* WARNING: Removing unreachable block (ram,0x00014daa3b61) */
/* WARNING: Removing unreachable block (ram,0x00014daa3b8f) */
/* WARNING: Removing unreachable block (ram,0x0001617698e3) */
/* WARNING: Removing unreachable block (ram,0x00014daa3b8a) */
/* WARNING: Removing unreachable block (ram,0x00014daa39bd) */
/* WARNING: Removing unreachable block (ram,0x00014daa3a55) */
/* WARNING: Removing unreachable block (ram,0x00014daa3a5a) */
/* WARNING: Removing unreachable block (ram,0x00014daa3a60) */
/* WARNING: Removing unreachable block (ram,0x000166519f13) */
/* WARNING: Removing unreachable block (ram,0x00014daa37f9) */
/* WARNING: Removing unreachable block (ram,0x00014daa3911) */
/* WARNING: Removing unreachable block (ram,0x00014daa3917) */
/* WARNING: Removing unreachable block (ram,0x000166e0008a) */
/* WARNING: Removing unreachable block (ram,0x000166e00109) */
/* WARNING: Removing unreachable block (ram,0x00015b4b5773) */
/* WARNING: Removing unreachable block (ram,0x00015b4b5803) */
/* WARNING: Removing unreachable block (ram,0x00015b4b57fe) */
/* WARNING: Removing unreachable block (ram,0x000166519e8a) */
/* WARNING: Removing unreachable block (ram,0x000166519f08) */
/* WARNING: Removing unreachable block (ram,0x000166519f0d) */
/* WARNING: Removing unreachable block (ram,0x000164809c9c) */
/* WARNING: Removing unreachable block (ram,0x00015b4b5809) */
/* WARNING: Removing unreachable block (ram,0x00015b4b5843) */
/* WARNING: Removing unreachable block (ram,0x00015b4b5848) */
/* WARNING: Removing unreachable block (ram,0x00015b4b588c) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x0001648fb1d3) */
/* WARNING: Removing unreachable block (ram,0x000156f87046) */
/* WARNING: Removing unreachable block (ram,0x00014daa391c) */
/* WARNING: Removing unreachable block (ram,0x00014daa39b7) */
/* WARNING: Removing unreachable block (ram,0x00014daa39b2) */
/* WARNING: Removing unreachable block (ram,0x000156e92998) */
/* WARNING: Removing unreachable block (ram,0x000156e92a05) */
/* WARNING: Removing unreachable block (ram,0x000156e92a0b) */
/* WARNING: Removing unreachable block (ram,0x00014d84d73e) */
/* WARNING: Removing unreachable block (ram,0x00014daa3a65) */
/* WARNING: Removing unreachable block (ram,0x00014daa3b01) */
/* WARNING: Removing unreachable block (ram,0x00014daa3b06) */
/* WARNING: Removing unreachable block (ram,0x00015b7f2f9a) */
/* WARNING: Removing unreachable block (ram,0x00014daa3b9b) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_14daa3774(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 in_RAX;
  ulonglong uVar7;
  short sVar8;
  ulonglong unaff_RBX;
  ushort *puVar9;
  ulonglong uVar10;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  ulonglong unaff_R12;
  undefined8 unaff_R13;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  ulonglong unaff_retaddr;
  undefined8 local_res8;
  longlong in_stack_00000010;
  ushort local_208;
  uint6 uStack_206;
  undefined1 auStack_200 [496];
  longlong lVar4;
  
  uVar6 = local_res8;
  bVar16 = (unaff_retaddr & 0x4000) != 0;
  bVar15 = (unaff_retaddr & 0x400) != 0;
  bVar14 = (unaff_retaddr & 0x200) != 0;
  bVar13 = (unaff_retaddr & 0x100) != 0;
  bVar12 = (unaff_retaddr & 0x10) != 0;
  bVar18 = (unaff_retaddr & 0x200000) != 0;
  bVar17 = (unaff_retaddr & 0x40000) != 0;
  local_res8._0_2_ = SUB82(&stack0x090adf9c,0);
  uVar7 = CONCAT62((int6)((ulonglong)in_RAX >> 0x10),(undefined2)local_res8);
  _fxsave(auStack_200);
  local_208 = (ushort)bVar16 * 0x4000 | (ushort)SBORROW8((longlong)&stack0x00000010,0x210) * 0x800 |
              (ushort)bVar15 * 0x400 | (ushort)bVar14 * 0x200 | (ushort)bVar13 * 0x100 |
              (ushort)((longlong)auStack_200 < 0) * 0x80 |
              (ushort)(auStack_200 == (undefined1 *)0x0) * 0x40 | (ushort)bVar12 * 0x10 | 4 |
              (ushort)(&stack0x00000010 < &DAT_00000210);
  sVar8 = (local_208 | 0xfeff) + 0x101;
  _local_208 = CONCAT62((uint6)((ulonglong)bVar18 * 0x200000 >> 0x10) |
                        (uint6)((ulonglong)bVar17 * 0x40000 >> 0x10),sVar8);
  puVar9 = &local_208;
  if (sVar8 == 0) {
    puVar9 = (ushort *)auStack_200;
  }
  plVar2 = (longlong *)((longlong)puVar9 + -8);
  lVar1 = (unaff_RBX ^ 0xffffffffffffffff) + 1;
  uVar10 = -in_stack_00000010;
  *(undefined8 *)((longlong)puVar9 + -0x10) = 0;
  uVar3 = *(ulonglong *)((longlong)puVar9 + -0x10);
  lVar4 = *(longlong *)((longlong)puVar9 + -0x10);
  *(longlong *)((longlong)puVar9 + -0x10) =
       *(longlong *)((longlong)puVar9 + -0x10) + in_stack_00000010;
  bVar11 = (POPCOUNT(*(ulonglong *)((longlong)puVar9 + -0x10) & 0xff) & 1U) == 0;
  uVar5 = *(ulonglong *)((longlong)puVar9 + -0x10);
  if (-1 < *(longlong *)((longlong)puVar9 + -0x10)) {
    *(ulonglong *)((longlong)puVar9 + -0x18) =
         (ulonglong)bVar16 * 0x4000 | (ulonglong)SBORROW8(lVar4,uVar10) * 0x800 |
         (ulonglong)bVar15 * 0x400 | (ulonglong)bVar14 * 0x200 | (ulonglong)bVar13 * 0x100 |
         (ulonglong)(*(longlong *)((longlong)puVar9 + -0x10) == 0) * 0x40 | (ulonglong)bVar12 * 0x10
         | (ulonglong)bVar11 * 4 | (ulonglong)(uVar3 < uVar10) | (ulonglong)bVar18 * 0x200000 |
         (ulonglong)bVar17 * 0x40000;
    *(ulonglong *)((longlong)puVar9 + -0x20) =
         (ulonglong)bVar16 * 0x4000 | (ulonglong)SBORROW8(lVar4,uVar10) * 0x800 |
         (ulonglong)bVar15 * 0x400 | (ulonglong)bVar14 * 0x200 | (ulonglong)bVar13 * 0x100 |
         (ulonglong)(*(longlong *)((longlong)puVar9 + -0x10) == 0) * 0x40 | (ulonglong)bVar12 * 0x10
         | (ulonglong)bVar11 * 4 | (ulonglong)(uVar3 < uVar10) | (ulonglong)bVar18 * 0x200000 |
         (ulonglong)bVar17 * 0x40000;
    *(int *)((longlong)puVar9 + -0x20) = *(int *)((longlong)puVar9 + -0x20) << 0x18;
    *(uint *)((longlong)puVar9 + -0x20) = *(uint *)((longlong)puVar9 + -0x20) >> 0x1f;
    if (*(int *)((longlong)puVar9 + -0x20) == 0) {
      uVar7 = FUN_156f86fed();
      return uVar7;
    }
    *(undefined8 *)((longlong)puVar9 + -0x18) = unaff_R13;
    *(undefined8 *)((longlong)puVar9 + -0x18) = uVar6;
    *(ulonglong *)((longlong)puVar9 + -0x18) =
         ~((~(~uVar7 & uVar5) + uVar5) - uVar7 & (~uVar5 + uVar7) - (~uVar5 & uVar7));
    *(ulonglong *)((longlong)puVar9 + -0x18) = unaff_R12;
    *(longlong *)((longlong)puVar9 + -0x20) = lVar1;
    *(longlong *)((longlong)puVar9 + -0x28) = lVar1;
    *(longlong *)((longlong)puVar9 + -0x30) = lVar1;
    *(undefined1 **)((longlong)puVar9 + -0x20) = &LAB_161d9e305;
    *(undefined **)((longlong)puVar9 + -0x28) = &DAT_156be1c4a;
    return uVar7;
  }
  *plVar2 = 0;
  *(undefined8 *)((longlong)puVar9 + -0x10) = unaff_RDI;
  *plVar2 = *plVar2 - lVar1;
  *(undefined8 *)((longlong)puVar9 + -0x10) = param_1;
  *(undefined8 *)((longlong)puVar9 + -0x18) = in_R11;
  *(undefined8 *)((longlong)puVar9 + -0x20) = in_R11;
  *(undefined **)((longlong)puVar9 + -0x18) = &DAT_16113eac4;
  return uVar7;
}



// FUNCTION 14daa391c FUN_14daa391c body=634 status=ok
// SIG undefined FUN_14daa391c(void)

/* WARNING: Removing unreachable block (ram,0x000156e92afb) */
/* WARNING: Removing unreachable block (ram,0x00014d84d7e3) */
/* WARNING: Removing unreachable block (ram,0x00014d84d7e9) */
/* WARNING: Removing unreachable block (ram,0x00014d84d7ee) */
/* WARNING: Removing unreachable block (ram,0x00014daa3b0c) */
/* WARNING: Removing unreachable block (ram,0x00014daa3b4f) */
/* WARNING: Removing unreachable block (ram,0x00014daa3b61) */
/* WARNING: Removing unreachable block (ram,0x00014daa3b8f) */
/* WARNING: Removing unreachable block (ram,0x0001617698e3) */
/* WARNING: Removing unreachable block (ram,0x00014daa3b8a) */
/* WARNING: Removing unreachable block (ram,0x00014daa39bd) */
/* WARNING: Removing unreachable block (ram,0x00014daa3a55) */
/* WARNING: Removing unreachable block (ram,0x00014daa3a5a) */
/* WARNING: Removing unreachable block (ram,0x00014daa3a60) */
/* WARNING: Removing unreachable block (ram,0x000156e92a8a) */
/* WARNING: Removing unreachable block (ram,0x00014daa3a65) */
/* WARNING: Removing unreachable block (ram,0x00014daa3b01) */
/* WARNING: Removing unreachable block (ram,0x00014daa3b06) */
/* WARNING: Removing unreachable block (ram,0x00015b7f2f9a) */
/* WARNING: Removing unreachable block (ram,0x00014daa3b9b) */
/* WARNING: Removing unreachable block (ram,0x000156e92a0b) */

undefined8 FUN_14daa391c(void)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  lVar2 = *(ulonglong *)(unaff_R13 + -0x78) + unaff_R15 +
          (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) * -2;
  FUN_165a787a5();
  uVar1 = FUN_165e930fe(*(undefined8 *)(lVar2 + -0xa0));
  return uVar1;
}



// FUNCTION 14daa3b9b FUN_14daa3b9b body=154 status=ok
// SIG undefined FUN_14daa3b9b(void)

void FUN_14daa3b9b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong in_R11;
  longlong in_stack_00000020;
  
  FUN_14d814dc1(FUN_14d814dc1,param_2,0x100,param_4,in_R11 - in_stack_00000020);
  FUN_1662f5f76();
  return;
}



// FUNCTION 14daa3c35 FUN_14daa3c35 body=150 status=ok
// SIG undefined FUN_14daa3c35(void)

void FUN_14daa3c35(undefined1 param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  longlong in_R10;
  longlong unaff_R12;
  
  FUN_1662f5f76(param_1,in_R10 + ~param_2,*(undefined8 *)(unaff_R12 + -0x80),
                *(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
  return;
}



// FUNCTION 14daa3d71 FUN_14daa3d71 body=163 status=ok
// SIG undefined FUN_14daa3d71(void)

/* WARNING: Removing unreachable block (ram,0x00014daa3ec5) */

void FUN_14daa3d71(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBP;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong local_res8;
  ulonglong uStackX_20;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0x38) + unaff_R15 +
          (*(ulonglong *)(unaff_R13 + -0x38) & unaff_R15) * -2;
  uVar1 = FUN_161b5b648(uVar2,param_2,*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                        unaff_RBP ^ 0xffffffffffffffff);
  local_res8 = *(ulonglong *)
                ((~((ulonglong)&local_res8 & uVar1) & ((ulonglong)&local_res8 | uVar1)) + 0x5dd4) ^
               uVar2;
  if (-1 < (longlong)(((~uVar2 | uStackX_20) + uVar2 + 1) * 2)) {
    FUN_1616cd34f();
    return;
  }
  FUN_1616cd34f();
  return;
}



// FUNCTION 14daa3e17 FUN_14daa3e17 body=173 status=ok
// SIG undefined FUN_14daa3e17(void)

/* WARNING: Removing unreachable block (ram,0x00014daa3ec5) */

void FUN_14daa3e17(ulonglong param_1)

{
  ulonglong local_res18;
  
  if (-1 < (longlong)(((~param_1 | local_res18) + param_1 + 1) * 2)) {
    FUN_1616cd34f();
    return;
  }
  FUN_1616cd34f();
  return;
}



// FUNCTION 14daa3ec5 FUN_14daa3ec5 body=160 status=ok
// SIG undefined FUN_14daa3ec5(void)

void FUN_14daa3ec5(void)

{
  return;
}



// FUNCTION 14daa3f68 FUN_14daa3f68 body=153 status=ok
// SIG undefined FUN_14daa3f68(void)

void FUN_14daa3f68(ulonglong param_1,undefined8 param_2)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_1661416f2((uint)((param_1 & 0xffffffff) >> 0x1f) | (uint)((param_1 & 0xffffffff) << 2),param_2
                ,~*(ulonglong *)(unaff_RSI + -0x60) | unaff_RBP,
                *(ulonglong *)(unaff_RSI + -0x28) ^ unaff_RBP);
  return;
}



// FUNCTION 14daa414b FUN_14daa414b body=256 status=ok
// SIG undefined FUN_14daa414b(void)

/* WARNING: Removing unreachable block (ram,0x000156740800) */
/* WARNING: Removing unreachable block (ram,0x00015674087f) */
/* WARNING: Removing unreachable block (ram,0x000156740885) */
/* WARNING: Removing unreachable block (ram,0x00015674088a) */
/* WARNING: Removing unreachable block (ram,0x00016570f82a) */
/* WARNING: Removing unreachable block (ram,0x00016570f8ba) */
/* WARNING: Removing unreachable block (ram,0x00016570f8bf) */
/* WARNING: Removing unreachable block (ram,0x00016570f8c5) */
/* WARNING: Removing unreachable block (ram,0x0001571a0fa4) */
/* WARNING: Removing unreachable block (ram,0x0001567407f5) */
/* WARNING: Removing unreachable block (ram,0x00014daa424d) */

undefined8 FUN_14daa414b(ulonglong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  ulonglong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  bool bVar2;
  
  bVar2 = ~unaff_R15 + (-1 - (~*(ulonglong *)(unaff_R13 + -0x30) | ~unaff_R15)) == -1 &&
          (~*(ulonglong *)(unaff_R13 + -0x30) | unaff_R15) == 0xffffffffffffffff;
  uVar1 = FUN_1573c7f51(param_1,~(param_2 & unaff_R15) & (unaff_RSI | unaff_R15));
  if (bVar2) {
    uVar1 = FUN_166140def(param_1 ^ unaff_R15,
                          ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) &
                           (*(ulonglong *)(unaff_R13 + -0x28) ^ 0xffffffffffffffff | unaff_R15)));
    return uVar1;
  }
  return uVar1;
}



// FUNCTION 14daa424d FUN_14daa424d body=152 status=ok
// SIG undefined FUN_14daa424d(void)

ulonglong FUN_14daa424d(void)

{
  longlong unaff_RDI;
  
  return ~*(ulonglong *)(unaff_RDI + -0x80);
}



// FUNCTION 14daa42e6 FUN_14daa42e6 body=161 status=ok
// SIG undefined FUN_14daa42e6(void)

void FUN_14daa42e6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStackX_20;
  
  FUN_14dc9fc06(param_1,param_2,param_3,uStackX_20);
  return;
}



// FUNCTION 14daa4428 FUN_14daa4428 body=134 status=ok
// SIG undefined FUN_14daa4428(void)

void FUN_14daa4428(undefined8 param_1)

{
  FUN_162ae7590(param_1,0xffffffffffffffff);
  return;
}



// FUNCTION 14daa44b4 FUN_14daa44b4 body=320 status=ok
// SIG undefined FUN_14daa44b4(void)

/* WARNING: Removing unreachable block (ram,0x00014daa4527) */

undefined8 FUN_14daa44b4(ulonglong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  uVar1 = FUN_15ba00d9d(param_1,*(ulonglong *)(unaff_RDI + -0x68) + param_1 +
                                (*(ulonglong *)(unaff_RDI + -0x68) & param_1) * -2);
  return uVar1;
}



// FUNCTION 14daa45a4 FUN_14daa45a4 body=166 status=ok
// SIG undefined FUN_14daa45a4(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001649b6064) */
/* WARNING: Removing unreachable block (ram,0x0001649b606a) */
/* WARNING: Removing unreachable block (ram,0x0001628aac4c) */
/* WARNING: Removing unreachable block (ram,0x0001628aacd1) */
/* WARNING: Removing unreachable block (ram,0x0001628aacd6) */
/* WARNING: Removing unreachable block (ram,0x0001628aacdc) */
/* WARNING: Removing unreachable block (ram,0x0001628aace1) */
/* WARNING: Removing unreachable block (ram,0x00014daa461f) */
/* WARNING: Removing unreachable block (ram,0x0001654d1ba2) */
/* WARNING: Removing unreachable block (ram,0x00014daa468d) */
/* WARNING: Removing unreachable block (ram,0x0001654d1c78) */
/* WARNING: Removing unreachable block (ram,0x0001654d1c93) */
/* WARNING: Removing unreachable block (ram,0x0001654d1c88) */
/* WARNING: Removing unreachable block (ram,0x0001654d1be7) */
/* WARNING: Removing unreachable block (ram,0x00016128b24a) */
/* WARNING: Removing unreachable block (ram,0x0001649b5fd2) */
/* WARNING: Removing unreachable block (ram,0x00014daa464b) */

ulonglong FUN_14daa45a4(ulonglong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint unaff_ESI;
  longlong unaff_RDI;
  ushort in_R10W;
  
  uVar1 = (uint)in_R10W;
  if (((~uVar1 | unaff_ESI) + uVar1 + 1) * 2 <= unaff_ESI + uVar1) {
    return ~((param_1 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_RDI + -0x80)) &
            (0xffffffffffffffff - *(ulonglong *)(unaff_RDI + -0x80) | param_1));
  }
  uVar2 = FUN_1649b5f34();
  return uVar2;
}



// FUNCTION 14daa464b FUN_14daa464b body=135 status=ok
// SIG undefined FUN_14daa464b(void)

/* WARNING: Removing unreachable block (ram,0x00014daa468d) */

void FUN_14daa464b(void)

{
  FUN_160edf99d();
  return;
}



// FUNCTION 14daa4c5d FUN_14daa4c5d body=126 status=ok
// SIG undefined FUN_14daa4c5d(void)

void FUN_14daa4c5d(ulonglong param_1,ulonglong param_2)

{
  longlong unaff_RSI;
  
  FUN_1563f73ef(param_1,unaff_RSI + ((param_1 - (param_2 | param_1)) + param_2) * -2);
  return;
}



// FUNCTION 14daa4d8b FUN_14daa4d8b body=56 status=ok
// SIG undefined FUN_14daa4d8b(void)

void FUN_14daa4d8b(void)

{
  return;
}



// FUNCTION 14daa4e1e FUN_14daa4e1e body=344 status=ok
// SIG undefined FUN_14daa4e1e(void)

/* WARNING: Removing unreachable block (ram,0x00014daa4eaf) */

undefined8
FUN_14daa4e1e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14dbf3659(FUN_14dbf3659,param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 14daa5014 FUN_14daa5014 body=164 status=ok
// SIG undefined FUN_14daa5014(void)

void FUN_14daa5014(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_stack_00000008;
  ulonglong in_stack_00000018;
  ulonglong in_stack_00000020;
  
  FUN_1573b731f(0x10,param_2,in_stack_00000008,param_4,
                ~((~param_1 | in_stack_00000018) & (~in_stack_00000018 | param_1)),
                ~in_stack_00000020 | param_1);
  return;
}



// FUNCTION 14daa50b8 FUN_14daa50b8 body=73 status=ok
// SIG undefined FUN_14daa50b8(void)

void FUN_14daa50b8(void)

{
  return;
}



// FUNCTION 14daa5177 FUN_14daa5177 body=158 status=ok
// SIG undefined FUN_14daa5177(void)

void FUN_14daa5177(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  undefined8 unaff_R15;
  longlong unaff_retaddr;
  undefined8 local_res18;
  ulonglong local_res20;
  
  *(undefined8 *)((longlong)&local_res20 + unaff_RDI) = unaff_R15;
  local_res20 = ~(*(ulonglong *)(unaff_retaddr + -8) & param_1) &
                (*(ulonglong *)(unaff_retaddr + -8) | param_1);
  FUN_1663c8c3e(param_1,param_2,local_res18);
  return;
}



// FUNCTION 14daa53f8 FUN_14daa53f8 body=381 status=ok
// SIG undefined FUN_14daa53f8(void)

/* WARNING: Removing unreachable block (ram,0x00014daa5467) */
/* WARNING: Removing unreachable block (ram,0x00014daa546d) */
/* WARNING: Removing unreachable block (ram,0x00014daa555f) */
/* WARNING: Removing unreachable block (ram,0x00014daa5561) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14daa53f8(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong unaff_R15;
  ulonglong in_stack_00000008;
  undefined8 local_res20;
  
  uVar1 = local_res20 ^ in_stack_00000008;
                    /* WARNING: Ignoring partial resolution of indirect */
  *(ulonglong *)(uVar1 - 8) =
       ~((~in_stack_00000008 | unaff_R15 + 1U) &
        (~in_stack_00000008 & 0xffffffffffffffff - (unaff_R15 + 1U) | in_stack_00000008));
  *(undefined8 *)(uVar1 - 0x10) = param_1;
  *(undefined8 *)(uVar1 - 0x18) = param_1;
  uVar2 = *(ulonglong *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x10) = 0;
  *(ulonglong *)(uVar1 - 0x10) = *(ulonglong *)(uVar1 - 0x10) ^ uVar2;
  uVar3 = *(undefined8 *)(uVar1 - 0x18);
  *(undefined8 *)(uVar1 - 8) = 0x16627528c;
  thunk_FUN_15b642ca5(uVar3);
  return;
}



// FUNCTION 14daa5579 FUN_14daa5579 body=134 status=ok
// SIG undefined FUN_14daa5579(void)

/* WARNING: Removing unreachable block (ram,0x00016648bcb1) */
/* WARNING: Removing unreachable block (ram,0x00016648bcb7) */
/* WARNING: Removing unreachable block (ram,0x00016648bcfe) */
/* WARNING: Removing unreachable block (ram,0x00016648bd01) */
/* WARNING: Removing unreachable block (ram,0x00014daa55f5) */
/* WARNING: Removing unreachable block (ram,0x00014daa55fb) */
/* WARNING: Removing unreachable block (ram,0x00014daa5600) */

void FUN_14daa5579(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 unaff_RSI;
  undefined8 in_R10;
  undefined8 unaff_R15;
  undefined8 uStackX_10;
  undefined8 uStackX_20;
  
  uVar1 = (uStackX_20 & param_1 ^ 0xffffffffffffffff) & (uStackX_20 | param_1);
  *(undefined8 *)(uVar1 - 8) = param_2;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x18) = unaff_R15;
  *(undefined8 *)(uVar1 - 8) = 0x3ec0d41e;
  *(ulonglong *)(uVar1 - 8) = *(ulonglong *)(uVar1 - 8) ^ 0xebdd6f6;
  *(undefined8 *)(uVar1 - 0x20) = unaff_RSI;
  *(undefined8 *)(uVar1 - 0x28) = in_R10;
  uVar2 = *(ulonglong *)(uVar1 - 8);
  *(ulonglong *)(uVar1 - 8) = *(ulonglong *)(uVar1 - 8) | 0xffffffffcf82fd17;
  *(ulonglong *)(uVar1 - 8) = ~(~(uVar2 & 0xffffffffcf82fd17) & *(ulonglong *)(uVar1 - 8));
  *(longlong *)(uVar1 - 8) = *(longlong *)(uVar1 - 8) + -0x15763f853;
  *(longlong *)(uVar1 - 8) = -*(longlong *)(uVar1 - 8);
  thunk_FUN_15b642ca5(~(uStackX_10 & param_1) & (uStackX_10 | param_1),*(undefined8 *)(uVar1 - 0x10)
                     );
  return;
}



// FUNCTION 14daa5600 FUN_14daa5600 body=143 status=ok
// SIG undefined FUN_14daa5600(void)

void FUN_14daa5600(ulonglong param_1,ulonglong param_2)

{
  longlong unaff_RDI;
  ulonglong uVar1;
  
  uVar1 = ~param_2 ^ 0x54acae3d ^ *(ulonglong *)(unaff_RDI + -0x60);
  FUN_161aa3264(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,
                ~((0xffffffffffffffff - param_1 | *(ulonglong *)(unaff_RDI + -0x70)) &
                 (~*(ulonglong *)(unaff_RDI + -0x70) | param_1)),
                ~(uVar1 & param_1) & (uVar1 | param_1));
  return;
}



// FUNCTION 14daa57b6 FUN_14daa57b6 body=175 status=ok
// SIG undefined FUN_14daa57b6(void)

void FUN_14daa57b6(void)

{
  return;
}



// FUNCTION 14daa5866 thunk_FUN_14daa586c body=5 status=ok
// SIG undefined thunk_FUN_14daa586c(void)

/* WARNING: Removing unreachable block (ram,0x00014daa5903) */
/* WARNING: Removing unreachable block (ram,0x00014daa5914) */
/* WARNING: Removing unreachable block (ram,0x00014daa59aa) */
/* WARNING: Removing unreachable block (ram,0x00014daa59af) */
/* WARNING: Removing unreachable block (ram,0x00014daa59b5) */
/* WARNING: Removing unreachable block (ram,0x0001627e0ed8) */
/* WARNING: Removing unreachable block (ram,0x0001627e0f61) */
/* WARNING: Removing unreachable block (ram,0x0001627e0f67) */
/* WARNING: Removing unreachable block (ram,0x000162bc5c54) */
/* WARNING: Removing unreachable block (ram,0x00014daa5909) */

void thunk_FUN_14daa586c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  ulonglong in_stack_00000008;
  
  FUN_14da620e8(in_stack_00000008,FUN_14da620e8,param_3,param_4,
                ~(*(ulonglong *)(unaff_RDI + -0x98) & ~in_stack_00000008),
                *(undefined8 *)(unaff_RDI + param_1));
  return;
}



// FUNCTION 14daa586c FUN_14daa586c body=162 status=ok
// SIG undefined FUN_14daa586c(void)

/* WARNING: Removing unreachable block (ram,0x00014daa5903) */
/* WARNING: Removing unreachable block (ram,0x00014daa5914) */
/* WARNING: Removing unreachable block (ram,0x00014daa59aa) */
/* WARNING: Removing unreachable block (ram,0x00014daa59af) */
/* WARNING: Removing unreachable block (ram,0x00014daa59b5) */
/* WARNING: Removing unreachable block (ram,0x0001627e0ed8) */
/* WARNING: Removing unreachable block (ram,0x0001627e0f61) */
/* WARNING: Removing unreachable block (ram,0x0001627e0f67) */
/* WARNING: Removing unreachable block (ram,0x000162bc5c54) */
/* WARNING: Removing unreachable block (ram,0x00014daa5909) */

void FUN_14daa586c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  ulonglong in_stack_00000008;
  
  FUN_14da620e8(in_stack_00000008,FUN_14da620e8,param_3,param_4,
                ~(*(ulonglong *)(unaff_RDI + -0x98) & ~in_stack_00000008),
                *(undefined8 *)(unaff_RDI + param_1));
  return;
}



// FUNCTION 14daa5914 FUN_14daa5914 body=806 status=ok
// SIG undefined FUN_14daa5914(void)

/* WARNING: Removing unreachable block (ram,0x00014daa59af) */
/* WARNING: Removing unreachable block (ram,0x0001627e0ed8) */
/* WARNING: Removing unreachable block (ram,0x0001627e0f61) */
/* WARNING: Removing unreachable block (ram,0x0001627e0f67) */
/* WARNING: Removing unreachable block (ram,0x000162bc5c54) */
/* WARNING: Removing unreachable block (ram,0x00014daa59b5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14daa5914(void)

{
  FUN_1627e0ed8();
  return;
}



// FUNCTION 14daa5d6d FUN_14daa5d6d body=670 status=ok
// SIG undefined FUN_14daa5d6d(void)

/* WARNING: Removing unreachable block (ram,0x00015b0c54dc) */
/* WARNING: Removing unreachable block (ram,0x000162b9c18c) */
/* WARNING: Removing unreachable block (ram,0x00015b0c557e) */
/* WARNING: Removing unreachable block (ram,0x00015b0c54e2) */
/* WARNING: Removing unreachable block (ram,0x00015b0c556e) */
/* WARNING: Removing unreachable block (ram,0x00015b0c5573) */
/* WARNING: Removing unreachable block (ram,0x00015b0c5579) */
/* WARNING: Removing unreachable block (ram,0x00014daa5e32) */

void FUN_14daa5d6d(void)

{
  FUN_162b9c18c();
  return;
}



// FUNCTION 14daa5ed2 FUN_14daa5ed2 body=130 status=ok
// SIG undefined FUN_14daa5ed2(void)

void FUN_14daa5ed2(void)

{
  return;
}



// FUNCTION 14daa60b3 FUN_14daa60b3 body=1075 status=ok
// SIG undefined FUN_14daa60b3(void)

/* WARNING: Instruction at (ram,0x00015b9b839f) overlaps instruction at (ram,0x00015b9b839e)
    */
/* WARNING: Removing unreachable block (ram,0x000165f2da64) */
/* WARNING: Removing unreachable block (ram,0x000161ca7c8b) */
/* WARNING: Removing unreachable block (ram,0x000165f2dad7) */
/* WARNING: Removing unreachable block (ram,0x000165f2db11) */
/* WARNING: Removing unreachable block (ram,0x000165f2db17) */
/* WARNING: Removing unreachable block (ram,0x000165f2db22) */
/* WARNING: Removing unreachable block (ram,0x00015b9b82ef) */
/* WARNING: Removing unreachable block (ram,0x00015b9b82f5) */
/* WARNING: Removing unreachable block (ram,0x00015b9b8381) */
/* WARNING: Removing unreachable block (ram,0x00015b9b8386) */
/* WARNING: Removing unreachable block (ram,0x00015b9b838c) */
/* WARNING: Removing unreachable block (ram,0x00015b9b839f) */
/* WARNING: Removing unreachable block (ram,0x00015b9b8398) */
/* WARNING: Removing unreachable block (ram,0x00015b9b83ac) */
/* WARNING: Removing unreachable block (ram,0x00015b9b840a) */
/* WARNING: Removing unreachable block (ram,0x00015b9b8410) */
/* WARNING: Removing unreachable block (ram,0x00015b9b842f) */
/* WARNING: Removing unreachable block (ram,0x00015b9b8435) */
/* WARNING: Removing unreachable block (ram,0x0001668007bc) */
/* WARNING: Removing unreachable block (ram,0x0001668007cf) */
/* WARNING: Removing unreachable block (ram,0x000164f991e9) */
/* WARNING: Removing unreachable block (ram,0x000160c42499) */
/* WARNING: Removing unreachable block (ram,0x000165f2db0c) */
/* WARNING: Removing unreachable block (ram,0x00014daa61ba) */

undefined8 FUN_14daa60b3(ulonglong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong local_res20;
  
  FUN_1610d5996(param_1,param_2,~(param_1 & ~local_res20));
  uVar1 = FUN_160c42499();
  return uVar1;
}



// FUNCTION 14daa6261 FUN_14daa6261 body=154 status=ok
// SIG undefined FUN_14daa6261(void)

void FUN_14daa6261(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_16668f001(param_1,param_2,param_3);
  return;
}



// FUNCTION 14daa62fc FUN_14daa62fc body=132 status=ok
// SIG undefined FUN_14daa62fc(void)

void FUN_14daa62fc(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  byte bVar1;
  longlong unaff_R13;
  ulonglong *puVar2;
  ulonglong unaff_R15;
  bool bVar3;
  byte local_res8;
  ulonglong local_res18;
  byte abStackX_20 [8];
  
  puVar2 = (ulonglong *)(*(ulonglong *)(unaff_R13 + -0xa0) ^ unaff_R15);
  bVar3 = (longlong)(~(~unaff_R15 & local_res18) + local_res18 + 1) < 0;
  FUN_156d7519d();
  if ((!bVar3) && (bVar3)) {
    bVar1 = abStackX_20[param_1];
    abStackX_20[param_1] = ~abStackX_20[param_1];
    abStackX_20[param_1] = abStackX_20[param_1] | local_res8;
    abStackX_20[param_1] = ~((~local_res8 | bVar1) & abStackX_20[param_1]);
    return;
  }
  param_3 = param_3 & 0xffffffff;
  if (((ulonglong)puVar2 & 0x8000000000000000) != 0) {
    puVar2 = (ulonglong *)((ulonglong)puVar2 & 0x7fffffffffffffff);
    param_3 = ~((param_3 | 0xeae4e23bc8b08282) & (~param_3 | 0x151b1dc4374f7d7d));
    *puVar2 = param_3;
  }
  *(int *)puVar2 = (int)param_3;
  FUN_1653c0931();
  return;
}



// FUNCTION 14daa6380 thunk_FUN_1626247f0 body=5 status=ok
// SIG undefined thunk_FUN_1626247f0(void)

void thunk_FUN_1626247f0(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  byte in_R10B;
  bool in_SF;
  ulonglong unaff_retaddr;
  ulonglong *puStackX_8;
  byte abStackX_20 [8];
  
  if ((!in_SF) && (in_SF)) {
    bVar1 = abStackX_20[param_1];
    abStackX_20[param_1] = ~abStackX_20[param_1];
    abStackX_20[param_1] = abStackX_20[param_1] | in_R10B;
    abStackX_20[param_1] = ~((~in_R10B | bVar1) & abStackX_20[param_1]);
    return;
  }
  uVar2 = unaff_retaddr & 0xffffffff;
  if (((ulonglong)puStackX_8 & 0x8000000000000000) != 0) {
    puStackX_8 = (ulonglong *)((ulonglong)puStackX_8 & 0x7fffffffffffffff);
    uVar2 = ~((uVar2 | 0xeae4e23bc8b08282) & (~uVar2 | 0x151b1dc4374f7d7d));
    *puStackX_8 = uVar2;
  }
  *(int *)puStackX_8 = (int)uVar2;
  FUN_1653c0931(param_1);
  return;
}



// FUNCTION 14daa641d FUN_14daa641d body=177 status=ok
// SIG undefined FUN_14daa641d(void)

undefined8 FUN_14daa641d(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14daa6567 FUN_14daa6567 body=22 status=ok
// SIG undefined FUN_14daa6567(void)

void FUN_14daa6567(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14daa661e FUN_14daa661e body=379 status=ok
// SIG undefined FUN_14daa661e(void)

/* WARNING: Removing unreachable block (ram,0x00014daa66b4) */
/* WARNING: Removing unreachable block (ram,0x00014daa66a9) */

undefined8 FUN_14daa661e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  byte in_R10B;
  longlong unaff_R13;
  ulonglong unaff_R15;
  bool in_CF;
  
  if (in_CF) {
    param_3 = 1;
  }
  uVar1 = FUN_14da05078(0xffffffffffffffa0,
                        CONCAT71((int7)((*(ulonglong *)(unaff_R13 + -0x58) + unaff_R15) -
                                        (*(ulonglong *)(unaff_R13 + -0x58) & unaff_R15) >> 8),
                                 (byte)unaff_R15 & in_R10B),param_3);
  return uVar1;
}



// FUNCTION 14daa670f FUN_14daa670f body=58 status=ok
// SIG undefined FUN_14daa670f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14daa670f(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  uint *puVar1;
  byte *pbVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 unaff_RBX;
  int iVar9;
  undefined8 unaff_RBP;
  longlong unaff_RSI;
  undefined8 in_R11;
  longlong lStackX_8;
  
  if (0xba835 < param_2) {
    if (param_2 == 0xba836) {
      FUN_166a62797(param_1,&DAT_14d7b72a0);
      return;
    }
    if (param_2 == 0xba837) {
      return;
    }
    (*(code *)&LAB_166d17504)(param_1,param_2,param_3);
    return;
  }
  if (param_2 < 0xba837) {
    FUN_15732e61f();
    return;
  }
  *(undefined8 *)(lStackX_8 + -8) = unaff_RBP;
  *(undefined8 *)(lStackX_8 + -0x10) = *(undefined8 *)(lStackX_8 + -8);
  *(undefined8 *)(lStackX_8 + -0x18) = in_R11;
  *(undefined8 *)(lStackX_8 + -0x20) = unaff_RBX;
  uVar6 = *(undefined8 *)(lStackX_8 + -0x20);
  *(undefined1 **)(lStackX_8 + -8) = &LAB_14daa679e;
  lVar7 = *(longlong *)(lStackX_8 + -0x10);
  iVar9 = (int)lStackX_8 + -8;
  puVar1 = (uint *)(lVar7 + -0x53);
  uVar4 = *puVar1;
  uVar8 = (ulonglong)uVar4 << 0xb;
  *puVar1 = uVar4 >> 0x16 | (uint)uVar8;
  uVar4 = (uint)((uVar8 & 0x100000000) != 0);
  uVar5 = iVar9 - (int)unaff_RSI;
  if (uVar5 != uVar4 &&
      (SBORROW4(iVar9,(int)unaff_RSI) != SBORROW4(uVar5,uVar4)) == (int)(uVar5 - uVar4) < 0) {
    pbVar2 = (byte *)(lVar7 + -0x25);
    *pbVar2 = *pbVar2 & (byte)((ulonglong)uVar6 >> 8);
    piVar3 = (int *)(param_2 + 0x1ec3d848);
    iVar9 = *piVar3;
    *piVar3 = *piVar3 + (int)param_2;
    if (!SCARRY4(iVar9,(int)param_2)) {
      *(byte *)(unaff_RSI + 0x20) = *(byte *)(unaff_RSI + 0x20) >> 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// FUNCTION 14daa674b FUN_14daa674b body=63 status=ok
// SIG undefined FUN_14daa674b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14daa674b(byte param_1,longlong param_2)

{
  uint *puVar1;
  byte *pbVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 unaff_RBX;
  int iVar9;
  undefined8 unaff_RBP;
  longlong unaff_RSI;
  undefined8 in_R11;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_RBP;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -0x18) = in_R11;
  *(undefined8 *)(local_res10 + -0x20) = unaff_RBX;
  uVar6 = *(undefined8 *)(local_res10 + -0x20);
  *(undefined1 **)(local_res10 + -8) = &LAB_14daa679e;
  lVar7 = *(longlong *)(local_res10 + -0x10);
  iVar9 = (int)local_res10 + -8;
  puVar1 = (uint *)(lVar7 + -0x53);
  uVar4 = *puVar1;
  uVar8 = (ulonglong)uVar4 << 0x21 - (param_1 & 0x1f);
  *puVar1 = uVar4 >> (param_1 & 0x1f) | (uint)uVar8;
  uVar4 = (uint)((uVar8 & 0x100000000) != 0);
  uVar5 = iVar9 - (int)unaff_RSI;
  if (uVar5 == uVar4 ||
      (SBORROW4(iVar9,(int)unaff_RSI) != SBORROW4(uVar5,uVar4)) != (int)(uVar5 - uVar4) < 0) {
    return;
  }
  pbVar2 = (byte *)(lVar7 + -0x25);
  *pbVar2 = *pbVar2 & (byte)((ulonglong)uVar6 >> 8);
  piVar3 = (int *)(param_2 + 0x1ec3d848);
  iVar9 = *piVar3;
  *piVar3 = *piVar3 + (int)param_2;
  if (!SCARRY4(iVar9,(int)param_2)) {
    *(byte *)(unaff_RSI + 0x20) = *(byte *)(unaff_RSI + 0x20) >> 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14daa6926 FUN_14daa6926 body=68 status=ok
// SIG undefined FUN_14daa6926(void)

void FUN_14daa6926(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014daa6968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return;
}



// FUNCTION 14daa69d7 FUN_14daa69d7 body=118 status=ok
// SIG undefined FUN_14daa69d7(void)

undefined8 FUN_14daa69d7(void)

{
  longlong in_RAX;
  longlong in_R11;
  longlong unaff_R12;
  undefined8 in_stack_00000010;
  
  *(longlong *)(in_R11 + 8) = in_RAX + unaff_R12 + 2;
  return in_stack_00000010;
}



// FUNCTION 14daa6baf FUN_14daa6baf body=157 status=ok
// SIG undefined FUN_14daa6baf(void)

void FUN_14daa6baf(void)

{
  return;
}



// FUNCTION 14daa6cdd FUN_14daa6cdd body=181 status=ok
// SIG undefined FUN_14daa6cdd(void)

/* WARNING: Removing unreachable block (ram,0x00014daa6d89) */
/* WARNING: Removing unreachable block (ram,0x00014daa6d94) */
/* WARNING: Removing unreachable block (ram,0x00014daa6d8f) */

void FUN_14daa6cdd(void)

{
  FUN_161e350bf();
  return;
}



// FUNCTION 14daa6d94 FUN_14daa6d94 body=12 status=ok
// SIG undefined FUN_14daa6d94(void)

void FUN_14daa6d94(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014daa6d9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14daa6e21 FUN_14daa6e21 body=156 status=ok
// SIG undefined FUN_14daa6e21(void)

/* WARNING: Removing unreachable block (ram,0x00014daa6f4c) */
/* WARNING: Removing unreachable block (ram,0x00014daa6f58) */
/* WARNING: Removing unreachable block (ram,0x00014daa6f0a) */
/* WARNING: Removing unreachable block (ram,0x00016623f769) */
/* WARNING: Removing unreachable block (ram,0x00015736995f) */
/* WARNING: Removing unreachable block (ram,0x000157369965) */
/* WARNING: Removing unreachable block (ram,0x0001573699e5) */
/* WARNING: Removing unreachable block (ram,0x0001573699eb) */
/* WARNING: Removing unreachable block (ram,0x0001573699f0) */
/* WARNING: Removing unreachable block (ram,0x000157369b29) */
/* WARNING: Removing unreachable block (ram,0x000157369b2f) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x000162563218) */
/* WARNING: Removing unreachable block (ram,0x00016623f5a6) */
/* WARNING: Removing unreachable block (ram,0x000156c196bf) */
/* WARNING: Removing unreachable block (ram,0x00016623f629) */
/* WARNING: Removing unreachable block (ram,0x00016623f62f) */
/* WARNING: Removing unreachable block (ram,0x00016623f634) */
/* WARNING: Removing unreachable block (ram,0x00016623f646) */
/* WARNING: Removing unreachable block (ram,0x00016623f653) */
/* WARNING: Removing unreachable block (ram,0x00016623f6d9) */
/* WARNING: Removing unreachable block (ram,0x00016623f6de) */
/* WARNING: Removing unreachable block (ram,0x00016623f6e4) */
/* WARNING: Removing unreachable block (ram,0x00016623f6e9) */
/* WARNING: Removing unreachable block (ram,0x00016623f76e) */
/* WARNING: Removing unreachable block (ram,0x0001619ca448) */
/* WARNING: Removing unreachable block (ram,0x00014daa6ebd) */
/* WARNING: Removing unreachable block (ram,0x00014daa6eca) */
/* WARNING: Removing unreachable block (ram,0x00014daa6ec5) */
/* WARNING: Removing unreachable block (ram,0x00014e001517) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14daa6e21(undefined8 param_1,longlong param_2)

{
  ulonglong in_R10;
  ulonglong local_8;
  
  local_8 = *(ulonglong *)(param_2 + -8) ^ in_R10;
  FUN_161be4e09(param_1,&local_8);
  FUN_1619ca448();
  return;
}



// FUNCTION 14daa6ebd FUN_14daa6ebd body=234 status=ok
// SIG undefined FUN_14daa6ebd(void)

/* WARNING: Removing unreachable block (ram,0x00014daa6f4c) */
/* WARNING: Removing unreachable block (ram,0x00014daa6f58) */

void FUN_14daa6ebd(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  bool in_ZF;
  
  if (in_ZF) {
    FUN_165e93f27(param_1,param_2,param_3,&DAT_14d7a50b4);
    return;
  }
  if (param_4 != 0xcd18d) {
    return;
  }
  FUN_165e93f27();
  return;
}



// FUNCTION 14daa700b FUN_14daa700b body=131 status=ok
// SIG undefined FUN_14daa700b(void)

void FUN_14daa700b(ulonglong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  
  FUN_165c0ca80(param_1,*(undefined8 *)(unaff_RDI + -0x68),
                ~((param_2 + param_3) - (unaff_RSI & param_3) & (~param_3 | param_1)));
  return;
}



// FUNCTION 14daa71ea FUN_14daa71ea body=141 status=ok
// SIG undefined FUN_14daa71ea(void)

void FUN_14daa71ea(void)

{
  return;
}



// FUNCTION 14daa73bb FUN_14daa73bb body=85 status=ok
// SIG undefined FUN_14daa73bb(void)

void FUN_14daa73bb(void)

{
  return;
}



// FUNCTION 14daa7463 FUN_14daa7463 body=125 status=ok
// SIG undefined FUN_14daa7463(void)

void FUN_14daa7463(void)

{
  longlong *plVar1;
  undefined8 in_RAX;
  ushort unaff_BX;
  undefined8 unaff_RBP;
  ushort *unaff_R15;
  longlong local_res8;
  longlong in_stack_00000028;
  
  *unaff_R15 = *unaff_R15 | unaff_BX;
  *unaff_R15 = ~*unaff_R15;
  plVar1 = (longlong *)(in_stack_00000028 + -8);
  *(undefined8 *)(in_stack_00000028 + -0x10) = unaff_RBP;
  *plVar1 = 0;
  *plVar1 = *plVar1 + local_res8;
  *(longlong *)(in_stack_00000028 + -0x10) = *plVar1;
  *plVar1 = (longlong)&LAB_14daa74f5;
  *(undefined8 *)(in_stack_00000028 + -0x18) = in_RAX;
  FUN_14d7ac593();
  return;
}



// FUNCTION 14daa7523 FUN_14daa7523 body=538 status=ok
// SIG undefined FUN_14daa7523(void)

/* WARNING: Removing unreachable block (ram,0x00014daa762a) */
/* WARNING: Removing unreachable block (ram,0x00014daa75dd) */
/* WARNING: Removing unreachable block (ram,0x00014daa7637) */
/* WARNING: Removing unreachable block (ram,0x00014daa763d) */
/* WARNING: Removing unreachable block (ram,0x00016556d621) */

void FUN_14daa7523(void)

{
  undefined8 in_stack_00000008;
  
  if (&DAT_fffffffffffffff7 < &stack0x00000008) {
    FUN_15b23a952(in_stack_00000008);
    return;
  }
  FUN_15b23a952(in_stack_00000008);
  return;
}



// FUNCTION 14daa7790 thunk_FUN_14daa7796 body=5 status=ok
// SIG undefined thunk_FUN_14daa7796(void)

/* WARNING: Removing unreachable block (ram,0x00014daa7808) */
/* WARNING: Removing unreachable block (ram,0x00014daa780e) */

void thunk_FUN_14daa7796(ulonglong param_1)

{
  longlong unaff_RDI;
  
  param_1 = *(ulonglong *)(unaff_RDI + -0x90) ^ param_1;
  syscall();
  *(undefined8 *)(param_1 - 0x10) = 0x1619dd37a;
  *(undefined8 *)(param_1 - 0x18) = 0x1619dd37a;
  *(undefined1 **)(param_1 - 0x10) = &LAB_1619dd393;
  return;
}



// FUNCTION 14daa7796 FUN_14daa7796 body=263 status=ok
// SIG undefined FUN_14daa7796(void)

/* WARNING: Removing unreachable block (ram,0x00014daa7808) */
/* WARNING: Removing unreachable block (ram,0x00014daa780e) */

void FUN_14daa7796(ulonglong param_1)

{
  longlong unaff_RDI;
  
  param_1 = *(ulonglong *)(unaff_RDI + -0x90) ^ param_1;
  syscall();
  *(undefined8 *)(param_1 - 0x10) = 0x1619dd37a;
  *(undefined8 *)(param_1 - 0x18) = 0x1619dd37a;
  *(undefined1 **)(param_1 - 0x10) = &LAB_1619dd393;
  return;
}



// FUNCTION 14daa789f thunk_FUN_14daa78a5 body=5 status=ok
// SIG undefined thunk_FUN_14daa78a5(void)

void thunk_FUN_14daa78a5(undefined8 param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong in_R10;
  
  uVar1 = (*(longlong *)(param_2 + -0x88) + -1) - (-1 - param_3);
  uVar1 = ~((0xffffffffffffffff - in_R10 | uVar1) & (~uVar1 | in_R10));
  FUN_1626ac411(uVar1,param_2,uVar1);
  return;
}



// FUNCTION 14daa78a5 FUN_14daa78a5 body=127 status=ok
// SIG undefined FUN_14daa78a5(void)

void FUN_14daa78a5(undefined8 param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong in_R10;
  
  uVar1 = (*(longlong *)(param_2 + -0x88) + -1) - (-1 - param_3);
  uVar1 = ~((0xffffffffffffffff - in_R10 | uVar1) & (~uVar1 | in_R10));
  FUN_1626ac411(uVar1,param_2,uVar1);
  return;
}



// FUNCTION 14daa792a FUN_14daa792a body=321 status=ok
// SIG undefined FUN_14daa792a(void)

/* WARNING: Removing unreachable block (ram,0x00015723f00c) */
/* WARNING: Removing unreachable block (ram,0x00015723f012) */
/* WARNING: Removing unreachable block (ram,0x00015723f01d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14daa792a(void)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uStackX_8;
  undefined8 in_stack_00000010;
  longlong local_8;
  
  local_8 = CONCAT44(local_8._4_4_,0xcd55973e);
  if (local_8 == 0x81b4b8d) {
    FUN_16207f43a();
    return;
  }
  uVar1 = 0xb2d6c04;
  lVar2 = 0x6a3a7933;
  FUN_1628cf1e5();
  *(ulonglong *)(lVar2 + 8) = ~*(ulonglong *)(lVar2 + 8);
  *(ulonglong *)(lVar2 + 8) = *(ulonglong *)(lVar2 + 8) | 0xffffffffc443efed;
  *(ulonglong *)(lVar2 + 8) = ~*(ulonglong *)(lVar2 + 8);
  FUN_156e50368(uVar1,uStackX_8,FUN_156e50368,in_stack_00000010);
  return;
}



// FUNCTION 14daa79e3 FUN_14daa79e3 body=145 status=ok
// SIG undefined FUN_14daa79e3(void)

void FUN_14daa79e3(undefined8 param_1,longlong param_2)

{
  ulonglong unaff_RSI;
  undefined8 uStackX_8;
  undefined8 in_stack_00000010;
  
  *(ulonglong *)(param_2 + 8) = ~*(ulonglong *)(param_2 + 8);
  *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) | ~unaff_RSI;
  *(ulonglong *)(param_2 + 8) = ~*(ulonglong *)(param_2 + 8);
  FUN_156e50368(param_1,uStackX_8,FUN_156e50368,in_stack_00000010);
  return;
}



// FUNCTION 14daa7b26 FUN_14daa7b26 body=143 status=ok
// SIG undefined FUN_14daa7b26(void)

void FUN_14daa7b26(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 in_stack_00000008;
  
  if (param_4 == param_2) {
    FUN_165e93f27();
    return;
  }
  if (param_4 - param_2 != 1) {
    FUN_16540048d();
    return;
  }
  FUN_165400483(param_1,in_stack_00000008,param_3,0x14d7c0279);
  return;
}


