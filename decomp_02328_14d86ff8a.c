// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14d86ff8a FUN_14d86ff8a body=271 status=ok
// SIG undefined FUN_14d86ff8a(void)

/* WARNING: Removing unreachable block (ram,0x00014d86ffb5) */

void FUN_14d86ff8a(ulonglong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong unaff_RDI;
  longlong unaff_R12;
  undefined8 local_res8;
  
  lVar2 = (~*(ulonglong *)(unaff_RDI + -0x28) * -2 - *(ulonglong *)(unaff_RDI + -0x28)) + -2;
  uVar1 = FUN_15b7a3283(param_1,lVar2,local_res8 ^ param_1);
  FUN_15af4c524(lVar2 + param_1 + uVar1 + (param_1 & uVar1) * -2,
                *(ulonglong *)(unaff_R12 + -0x78) ^ uVar1);
  return;
}



// FUNCTION 14d870149 FUN_14d870149 body=625 status=ok
// SIG undefined FUN_14d870149(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d870149(void)

{
  FUN_165fe58ab();
  return;
}



// FUNCTION 14d870403 FUN_14d870403 body=265 status=ok
// SIG undefined FUN_14d870403(void)

/* WARNING: Removing unreachable block (ram,0x00014d87047a) */
/* WARNING: Removing unreachable block (ram,0x00014d87048b) */
/* WARNING: Removing unreachable block (ram,0x00014d870480) */
/* WARNING: Removing unreachable block (ram,0x000156e099ac) */
/* WARNING: Removing unreachable block (ram,0x000156e099b2) */

undefined8 FUN_14d870403(undefined8 param_1,undefined8 param_2,ulonglong *param_3)

{
  undefined8 in_RAX;
  ulonglong in_R10;
  ulonglong unaff_R15;
  
  *param_3 = ~*param_3;
  *param_3 = *param_3 | unaff_R15;
  *param_3 = ~(in_R10 & *param_3);
  return in_RAX;
}



// FUNCTION 14d87048b FUN_14d87048b body=156 status=ok
// SIG undefined FUN_14d87048b(void)

void FUN_14d87048b(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_156716a44(param_1,*(undefined8 *)(unaff_RDI + -0x28),
                *(ulonglong *)(unaff_RDI + -0x70) + param_1 +
                (*(ulonglong *)(unaff_RDI + -0x70) & param_1) * -2,
                *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14d870527 FUN_14d870527 body=290 status=ok
// SIG undefined FUN_14d870527(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d870527(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  ushort *puVar2;
  undefined8 in_R10;
  undefined8 unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 uStackX_10;
  undefined8 local_res20;
  
  puVar2 = (ushort *)
           (*(ulonglong *)(unaff_R13 + -0x30) + unaff_R15 +
           (*(ulonglong *)(unaff_R13 + -0x30) & unaff_R15) * -2);
  uVar1 = *(undefined8 *)(unaff_R13 + -0x68);
  FUN_1623994e7(param_1,-(~*(ulonglong *)(unaff_R13 + -0x28) + 1) ^ unaff_R15);
  *puVar2 = (*puVar2 | 0x100) - 0x100;
  *(undefined8 *)(local_res20 + -8) = uStackX_10;
  *(undefined8 *)(local_res20 + -0x10) = in_R10;
  *(undefined8 *)(local_res20 + -0x10) = uVar1;
  *(undefined8 *)(local_res20 + -0x18) = uVar1;
  *(undefined8 *)(local_res20 + -0x20) = unaff_R12;
  *(undefined8 *)(local_res20 + -0x28) = unaff_RBX;
  thunk_FUN_14dca2fa4();
  return;
}



// FUNCTION 14d87064a FUN_14d87064a body=288 status=ok
// SIG undefined FUN_14d87064a(void)

/* WARNING: Removing unreachable block (ram,0x00014d8706c4) */
/* WARNING: Removing unreachable block (ram,0x00014d8706ca) */
/* WARNING: Removing unreachable block (ram,0x00014e2392e4) */
/* WARNING: Removing unreachable block (ram,0x0001573cea1a) */
/* WARNING: Removing unreachable block (ram,0x00014d870749) */
/* WARNING: Removing unreachable block (ram,0x00014d87074f) */
/* WARNING: Removing unreachable block (ram,0x00014d870754) */
/* WARNING: Removing unreachable block (ram,0x0001573cea14) */

void FUN_14d87064a(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  FUN_1647fbf79(~((~(*(ulonglong *)(unaff_R13 + -0x50) & unaff_R15) + unaff_R15) -
                 ~*(ulonglong *)(unaff_R13 + -0x50)),param_2,unaff_retaddr);
  return;
}



// FUNCTION 14d8706ca FUN_14d8706ca body=131 status=ok
// SIG undefined FUN_14d8706ca(void)

/* WARNING: Removing unreachable block (ram,0x00014d870749) */
/* WARNING: Removing unreachable block (ram,0x00014d87074f) */
/* WARNING: Removing unreachable block (ram,0x00014d870754) */

void FUN_14d8706ca(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  code *pcVar1;
  ulonglong in_RAX;
  
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(param_1,param_2);
  *(undefined8 *)((~param_5 | ~in_RAX) & (param_5 | in_RAX)) = 0x360e738;
  FUN_14d85d504();
  return;
}



// FUNCTION 14d870754 FUN_14d870754 body=146 status=ok
// SIG undefined FUN_14d870754(void)

void FUN_14d870754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1655e0671(FUN_1655e0671,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d8707e7 FUN_14d8707e7 body=572 status=ok
// SIG undefined FUN_14d8707e7(void)

/* WARNING: Removing unreachable block (ram,0x00014d870908) */
/* WARNING: Removing unreachable block (ram,0x00014d8708fd) */
/* WARNING: Removing unreachable block (ram,0x00014dc1a837) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8707e7(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  longlong unaff_R13;
  longlong unaff_retaddr;
  ushort in_stack_00000008;
  ushort uVar1;
  
  FUN_1649e11b5(param_1,param_2,~*(ulonglong *)(unaff_RDI + -0x70) | param_1);
  uVar1 = (ushort)*(undefined8 *)((unaff_retaddr - unaff_R13) + -8) ^ in_stack_00000008;
  if (-1 < (short)((-0x101 - (uVar1 | 0xfeff)) + uVar1)) {
    FUN_161006e5d();
    return;
  }
  FUN_161006e5d();
  return;
}



// FUNCTION 14d870a2e FUN_14d870a2e body=658 status=ok
// SIG undefined FUN_14d870a2e(void)

/* WARNING: Instruction at (ram,0x00014d870bc1) overlaps instruction at (ram,0x00014d870bc0)
    */
/* WARNING: Removing unreachable block (ram,0x00014d870b5a) */
/* WARNING: Removing unreachable block (ram,0x00014d870b60) */
/* WARNING: Removing unreachable block (ram,0x00014d870bc1) */
/* WARNING: Removing unreachable block (ram,0x00014d870bc0) */
/* WARNING: Removing unreachable block (ram,0x000165959640) */
/* WARNING: Removing unreachable block (ram,0x000164950a5b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_14d870a2e(void)

{
  ulonglong uVar1;
  undefined8 unaff_RSI;
  ulonglong unaff_R15;
  
  FUN_14d86c1e8();
  FUN_16649c962(unaff_RSI);
  if (-1 < (longlong)
           (~((_DAT_ffffffffffffff50 | 0xfffffffe99b6369d) & (~_DAT_ffffffffffffff50 | 0x16649c962))
           & unaff_R15)) {
    uVar1 = FUN_1647bb4f8();
    return uVar1;
  }
  return _DAT_ffffffffffffff88 ^ 0x16649c962;
}



// FUNCTION 14d870b60 FUN_14d870b60 body=168 status=ok
// SIG undefined FUN_14d870b60(void)

/* WARNING: Instruction at (ram,0x00014d870bc1) overlaps instruction at (ram,0x00014d870bc0)
    */

undefined8 FUN_14d870b60(undefined8 param_1,undefined8 param_2,longlong param_3,char param_4)

{
  longlong in_RAX;
  
  *(undefined1 *)(in_RAX + param_3) = 0xe4;
  *(byte *)(in_RAX + param_3) = *(byte *)(in_RAX + param_3) ^ 0xe4;
  *(undefined1 *)(in_RAX + param_3) = *(undefined1 *)(in_RAX + param_3);
  *(char *)(in_RAX + param_3) = *(char *)(in_RAX + param_3) - param_4;
  FUN_15b3f024c();
  return DAT_15b3f021c;
}



// FUNCTION 14d870d30 FUN_14d870d30 body=58 status=ok
// SIG undefined FUN_14d870d30(void)

void FUN_14d870d30(void)

{
  undefined8 in_RAX;
  uint unaff_retaddr;
  undefined8 auStackX_10 [3];
  
  *(undefined8 *)((longlong)auStackX_10 + ((ulonglong)unaff_retaddr ^ 0x61b42595)) = in_RAX;
  return;
}



// FUNCTION 14d870f15 FUN_14d870f15 body=154 status=ok
// SIG undefined FUN_14d870f15(void)

/* WARNING: Removing unreachable block (ram,0x000160d10c8d) */
/* WARNING: Removing unreachable block (ram,0x00014d870fb0) */
/* WARNING: Removing unreachable block (ram,0x00014d871111) */
/* WARNING: Removing unreachable block (ram,0x00014d87111c) */
/* WARNING: Removing unreachable block (ram,0x0001629400e6) */
/* WARNING: Removing unreachable block (ram,0x00014d871128) */

undefined8 FUN_14d870f15(void)

{
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (-1 < (longlong)(*(ulonglong *)(unaff_R13 + -0x40) & unaff_R15)) {
    uVar1 = FUN_15b64ba41();
    return uVar1;
  }
  uVar1 = FUN_160d10b66();
  return uVar1;
}



// FUNCTION 14d870fb0 FUN_14d870fb0 body=140 status=ok
// SIG undefined FUN_14d870fb0(void)

void FUN_14d870fb0(void)

{
  ulonglong *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  byte bVar5;
  uint uVar7;
  ulonglong uVar10;
  ulonglong uVar11;
  void *pvVar12;
  byte bVar13;
  uint uVar14;
  undefined8 uVar15;
  ulonglong *in_R9;
  ulonglong uVar17;
  longlong lVar18;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  bool bVar19;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uVar20;
  byte bVar6;
  uint uVar8;
  uint uVar9;
  byte *pbVar16;
  
  uVar10 = *(ulonglong *)(unaff_R13 + -0xa0);
  uVar15 = FUN_161e39855();
  puVar1 = in_R9 + -1;
  *(undefined4 *)puVar1 = 0x5587c4fc;
  *(undefined4 *)((longlong)in_R9 + -4) = 0;
  uVar17 = *puVar1 ^ 0x54af6215;
  *puVar1 = *in_R9;
  lVar18 = uVar17 - 0x128a6e1;
  uVar11 = *puVar1;
  *(undefined8 *)((longlong)puVar1 + lVar18) = uVar15;
  *(undefined4 *)((longlong)puVar1 + lVar18) = 0x55373ab3;
  *(uint *)((longlong)puVar1 + lVar18) = *(uint *)((longlong)puVar1 + lVar18) ^ 0x53b51528;
  *(undefined4 *)((longlong)puVar1 + (uVar17 - 0x128a6dd)) = 0xd2488d41;
  puVar2 = (uint *)((longlong)puVar1 + (uVar17 - 0x128a6dd));
  uVar14 = *puVar2;
  uVar7 = *puVar2;
  *puVar2 = *puVar2 + 0x2db772bf;
  pvVar12 = ProcessEnvironmentBlock;
  uVar8 = *puVar2;
  uVar9 = *puVar2;
  bVar19 = (POPCOUNT(*puVar2 & 0xff) & 1U) == 0;
  *(ulonglong *)((longlong)puVar1 + lVar18) = unaff_R15;
  puVar3 = (undefined8 *)((longlong)puVar1 + (uVar17 - 0x128a6e9));
  *puVar3 = pvVar12;
  *(undefined4 *)puVar3 = 0xd8c8d58d;
  *(ulonglong *)((longlong)puVar1 + (uVar17 - 0x128a6f1)) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SCARRY4(uVar7,0x2db772bf) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)((int)uVar8 < 0) * 0x80 | (ulonglong)(uVar9 == 0) * 0x40 |
       (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)bVar19 * 4 | (ulonglong)(0xd2488d40 < uVar14) |
       (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  *(ulonglong *)((longlong)puVar1 + (uVar17 - 0x128a6f9)) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SCARRY4(uVar7,0x2db772bf) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)((int)uVar8 < 0) * 0x80 | (ulonglong)(uVar9 == 0) * 0x40 |
       (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)bVar19 * 4 | (ulonglong)(0xd2488d40 < uVar14) |
       (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  *(int *)((longlong)puVar1 + (uVar17 - 0x128a6f9)) =
       *(int *)((longlong)puVar1 + (uVar17 - 0x128a6f9)) << 0x1f;
  *(uint *)((longlong)puVar1 + (uVar17 - 0x128a6f9)) =
       *(uint *)((longlong)puVar1 + (uVar17 - 0x128a6f9)) >> 0x1f;
  if (*(int *)((longlong)puVar1 + (uVar17 - 0x128a6f9)) == 0) {
    FUN_1629400e6();
    return;
  }
  uVar20 = *(ulonglong *)((longlong)puVar1 + (uVar17 - 0x128a6f1));
  if ((uVar20 & 1) == 0 && (uVar20 & 0x40) == 0) {
    uVar14 = (uint)pvVar12 ^ 0x1e9128d;
    pbVar16 = (byte *)(ulonglong)uVar14;
    bVar13 = (byte)uVar14;
    *pbVar16 = *pbVar16 + bVar13;
    DAT_de48498e = DAT_de48498e + (char)(uVar11 >> 8);
    *pbVar16 = *pbVar16 + bVar13;
    bVar5 = *pbVar16;
    bVar6 = *pbVar16;
    *pbVar16 = *pbVar16 + bVar13;
    lVar18 = *(longlong *)((longlong)puVar1 + (uVar17 - 0x128a6e9));
    *(ulonglong *)((longlong)puVar1 + (uVar17 - 0x128a6e9)) =
         (ulonglong)((uVar20 & 0x4000) != 0) * 0x4000 | (ulonglong)SCARRY1(bVar6,bVar13) * 0x800 |
         (ulonglong)((uVar20 & 0x400) != 0) * 0x400 | (ulonglong)((uVar20 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar20 & 0x100) != 0) * 0x100 | (ulonglong)((char)*pbVar16 < '\0') * 0x80 |
         (ulonglong)(*pbVar16 == 0) * 0x40 | (ulonglong)((uVar20 & 0x10) != 0) * 0x10 |
         (ulonglong)((POPCOUNT(*pbVar16) & 1U) == 0) * 4 | (ulonglong)CARRY1(bVar5,bVar13) |
         (ulonglong)((uVar20 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar20 & 0x40000) != 0) * 0x40000;
    *(longlong *)((longlong)puVar1 + (uVar17 - 0x128a6d9)) = lVar18 + -0xe2540d4;
    FUN_165c7153c();
    return;
  }
  *(undefined4 *)((longlong)puVar1 + (uVar17 - 0x128a6e5)) = 0xb345d65d;
  piVar4 = (int *)((longlong)puVar1 + (uVar17 - 0x128a6e5));
  *piVar4 = *piVar4 + 0x4cba29a2;
  *(ulonglong *)((longlong)puVar1 + (uVar17 - 0x128a6e9)) = uVar10 ^ unaff_R15;
  *(undefined8 *)((longlong)puVar1 + (uVar17 - 0x128a6f1)) = unaff_R14;
  *(undefined8 *)((longlong)puVar1 + (uVar17 - 0x128a6f9)) = unaff_R14;
  *(undefined **)((longlong)puVar1 + (uVar17 - 0x128a6f1)) = &DAT_162940121;
  return;
}



// FUNCTION 14d87103d FUN_14d87103d body=310 status=ok
// SIG undefined FUN_14d87103d(void)

void FUN_14d87103d(void)

{
  ulonglong *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  byte bVar5;
  uint uVar7;
  ulonglong uVar10;
  void *pvVar11;
  byte bVar12;
  uint uVar13;
  undefined8 in_RAX;
  ulonglong *in_R9;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  bool bVar17;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uVar18;
  byte bVar6;
  uint uVar8;
  uint uVar9;
  byte *pbVar14;
  
  puVar1 = in_R9 + -1;
  *(undefined4 *)puVar1 = 0x5587c4fc;
  *(undefined4 *)((longlong)in_R9 + -4) = 0;
  uVar15 = *puVar1 ^ 0x54af6215;
  *puVar1 = *in_R9;
  lVar16 = uVar15 - 0x128a6e1;
  uVar10 = *puVar1;
  *(undefined8 *)((longlong)puVar1 + lVar16) = in_RAX;
  *(undefined4 *)((longlong)puVar1 + lVar16) = 0x55373ab3;
  *(uint *)((longlong)puVar1 + lVar16) = *(uint *)((longlong)puVar1 + lVar16) ^ 0x53b51528;
  *(undefined4 *)((longlong)puVar1 + (uVar15 - 0x128a6dd)) = 0xd2488d41;
  puVar2 = (uint *)((longlong)puVar1 + (uVar15 - 0x128a6dd));
  uVar13 = *puVar2;
  uVar7 = *puVar2;
  *puVar2 = *puVar2 + 0x2db772bf;
  pvVar11 = ProcessEnvironmentBlock;
  uVar8 = *puVar2;
  uVar9 = *puVar2;
  bVar17 = (POPCOUNT(*puVar2 & 0xff) & 1U) == 0;
  *(undefined8 *)((longlong)puVar1 + lVar16) = unaff_R15;
  puVar3 = (undefined8 *)((longlong)puVar1 + (uVar15 - 0x128a6e9));
  *puVar3 = pvVar11;
  *(undefined4 *)puVar3 = 0xd8c8d58d;
  *(ulonglong *)((longlong)puVar1 + (uVar15 - 0x128a6f1)) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SCARRY4(uVar7,0x2db772bf) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)((int)uVar8 < 0) * 0x80 | (ulonglong)(uVar9 == 0) * 0x40 |
       (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)bVar17 * 4 | (ulonglong)(0xd2488d40 < uVar13) |
       (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  *(ulonglong *)((longlong)puVar1 + (uVar15 - 0x128a6f9)) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SCARRY4(uVar7,0x2db772bf) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)((int)uVar8 < 0) * 0x80 | (ulonglong)(uVar9 == 0) * 0x40 |
       (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)bVar17 * 4 | (ulonglong)(0xd2488d40 < uVar13) |
       (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  *(int *)((longlong)puVar1 + (uVar15 - 0x128a6f9)) =
       *(int *)((longlong)puVar1 + (uVar15 - 0x128a6f9)) << 0x1f;
  *(uint *)((longlong)puVar1 + (uVar15 - 0x128a6f9)) =
       *(uint *)((longlong)puVar1 + (uVar15 - 0x128a6f9)) >> 0x1f;
  if (*(int *)((longlong)puVar1 + (uVar15 - 0x128a6f9)) == 0) {
    FUN_1629400e6();
    return;
  }
  uVar18 = *(ulonglong *)((longlong)puVar1 + (uVar15 - 0x128a6f1));
  if ((uVar18 & 1) == 0 && (uVar18 & 0x40) == 0) {
    uVar13 = (uint)pvVar11 ^ 0x1e9128d;
    pbVar14 = (byte *)(ulonglong)uVar13;
    bVar12 = (byte)uVar13;
    *pbVar14 = *pbVar14 + bVar12;
    DAT_de48498e = DAT_de48498e + (char)(uVar10 >> 8);
    *pbVar14 = *pbVar14 + bVar12;
    bVar5 = *pbVar14;
    bVar6 = *pbVar14;
    *pbVar14 = *pbVar14 + bVar12;
    lVar16 = *(longlong *)((longlong)puVar1 + (uVar15 - 0x128a6e9));
    *(ulonglong *)((longlong)puVar1 + (uVar15 - 0x128a6e9)) =
         (ulonglong)((uVar18 & 0x4000) != 0) * 0x4000 | (ulonglong)SCARRY1(bVar6,bVar12) * 0x800 |
         (ulonglong)((uVar18 & 0x400) != 0) * 0x400 | (ulonglong)((uVar18 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar18 & 0x100) != 0) * 0x100 | (ulonglong)((char)*pbVar14 < '\0') * 0x80 |
         (ulonglong)(*pbVar14 == 0) * 0x40 | (ulonglong)((uVar18 & 0x10) != 0) * 0x10 |
         (ulonglong)((POPCOUNT(*pbVar14) & 1U) == 0) * 4 | (ulonglong)CARRY1(bVar5,bVar12) |
         (ulonglong)((uVar18 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar18 & 0x40000) != 0) * 0x40000;
    *(longlong *)((longlong)puVar1 + (uVar15 - 0x128a6d9)) = lVar16 + -0xe2540d4;
    FUN_165c7153c();
    return;
  }
  *(undefined4 *)((longlong)puVar1 + (uVar15 - 0x128a6e5)) = 0xb345d65d;
  piVar4 = (int *)((longlong)puVar1 + (uVar15 - 0x128a6e5));
  *piVar4 = *piVar4 + 0x4cba29a2;
  *(undefined8 *)((longlong)puVar1 + (uVar15 - 0x128a6e9)) = unaff_R13;
  *(undefined8 *)((longlong)puVar1 + (uVar15 - 0x128a6f1)) = unaff_R14;
  *(undefined8 *)((longlong)puVar1 + (uVar15 - 0x128a6f9)) = unaff_R14;
  *(undefined **)((longlong)puVar1 + (uVar15 - 0x128a6f1)) = &DAT_162940121;
  return;
}



// FUNCTION 14d8713b2 FUN_14d8713b2 body=42 status=ok
// SIG undefined FUN_14d8713b2(void)

/* WARNING: Removing unreachable block (ram,0x00014d871434) */
/* WARNING: Removing unreachable block (ram,0x00014d871454) */

undefined8
FUN_14d8713b2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ushort param_5,ulonglong param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ulonglong uStackX_8;
  undefined8 uStackX_20;
  
  *(undefined8 *)(unaff_RDI + 8) = in_R10;
  param_6 = param_6 ^ uStackX_8;
  *(undefined8 *)(param_6 - 8) = unaff_R13;
  if ((param_5 & 1) == 0) {
    uVar2 = FUN_162cd68cd();
    return uVar2;
  }
  *(undefined8 *)(param_6 - 0x10) = param_2;
  *(undefined8 *)(param_6 - 0x18) = param_2;
  *(undefined8 *)(param_6 - 0x20) = unaff_R14;
  lVar1 = *(longlong *)(param_6 - 8);
  *(undefined8 *)(param_6 - 0x10) = 0;
  *(longlong *)(param_6 - 0x10) = *(longlong *)(param_6 - 0x10) + lVar1;
  *(undefined8 *)(param_6 - 0x18) = in_R11;
  *(undefined8 *)(param_6 - 8) = 0;
  *(longlong *)(param_6 - 8) = (longlong)(&LAB_162cd6972 + *(longlong *)(param_6 - 8));
  *(undefined8 *)(param_6 - 0x18) = param_4;
  uVar2 = *(undefined8 *)(param_6 - 0x18);
  *(undefined8 *)(param_6 - 0x10) = uVar2;
  *(undefined8 *)(param_6 - 0x18) = uVar2;
  *(undefined8 *)(param_6 - 0x10) = 0x14d7c1903;
  return uStackX_20;
}



// FUNCTION 14d8714bc FUN_14d8714bc body=24 status=ok
// SIG undefined FUN_14d8714bc(void)

void FUN_14d8714bc(void)

{
  return;
}



// FUNCTION 14d871747 FUN_14d871747 body=270 status=ok
// SIG undefined FUN_14d871747(void)

/* WARNING: Removing unreachable block (ram,0x000164fa138c) */
/* WARNING: Removing unreachable block (ram,0x000164fa1428) */
/* WARNING: Removing unreachable block (ram,0x000164fa142d) */
/* WARNING: Removing unreachable block (ram,0x000164fa1433) */
/* WARNING: Removing unreachable block (ram,0x000164fa1438) */
/* WARNING: Removing unreachable block (ram,0x000164fa153e) */
/* WARNING: Removing unreachable block (ram,0x000164fa1543) */
/* WARNING: Removing unreachable block (ram,0x000164fa1549) */
/* WARNING: Removing unreachable block (ram,0x00015637ed7a) */
/* WARNING: Removing unreachable block (ram,0x000164fa1381) */
/* WARNING: Removing unreachable block (ram,0x000164fa1149) */
/* WARNING: Removing unreachable block (ram,0x000164fa114f) */
/* WARNING: Removing unreachable block (ram,0x0001648b336a) */
/* WARNING: Removing unreachable block (ram,0x0001648b33d5) */
/* WARNING: Removing unreachable block (ram,0x000164fa12f2) */
/* WARNING: Removing unreachable block (ram,0x000164fa12f8) */
/* WARNING: Removing unreachable block (ram,0x00014dbf5702) */
/* WARNING: Removing unreachable block (ram,0x00014d8717c6) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d871747(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_R15;
  ulonglong in_stack_00000020;
  
  FUN_161aa0d83(param_1,param_2,param_3,param_4,~unaff_R15 & ~in_stack_00000020 | unaff_R15);
  (*(code *)0x156a8c4d4)(param_1,&stack0x00000008);
  return;
}



// FUNCTION 14d871856 FUN_14d871856 body=148 status=ok
// SIG undefined FUN_14d871856(void)

/* WARNING: Removing unreachable block (ram,0x000156614201) */
/* WARNING: Removing unreachable block (ram,0x0001566141fb) */
/* WARNING: Removing unreachable block (ram,0x000156614206) */
/* WARNING: Removing unreachable block (ram,0x0001566142a0) */
/* WARNING: Removing unreachable block (ram,0x0001657acb91) */
/* WARNING: Removing unreachable block (ram,0x0001566142a6) */
/* WARNING: Removing unreachable block (ram,0x0001566143cc) */
/* WARNING: Removing unreachable block (ram,0x0001566143d8) */
/* WARNING: Removing unreachable block (ram,0x000162c8ef33) */
/* WARNING: Removing unreachable block (ram,0x00014d8718df) */
/* WARNING: Removing unreachable block (ram,0x00014d8718e5) */
/* WARNING: Removing unreachable block (ram,0x00014d8718ea) */

void FUN_14d871856(longlong param_1)

{
  ulonglong unaff_RBX;
  
  FUN_16495cfb0(param_1,0xffffffffffffffff - (*(ulonglong *)(param_1 + -0x78) & unaff_RBX) &
                        (*(ulonglong *)(param_1 + -0x78) | unaff_RBX),
                ~((unaff_RBX ^ 0xffffffffffffffff | *(ulonglong *)(param_1 + -0x88)) &
                 (*(ulonglong *)(param_1 + -0x88) ^ 0xffffffffffffffff | unaff_RBX)));
  return;
}



// FUNCTION 14d8718ea FUN_14d8718ea body=2 status=ok
// SIG undefined FUN_14d8718ea(void)

void FUN_14d8718ea(void)

{
  return;
}



// FUNCTION 14d871984 FUN_14d871984 body=142 status=ok
// SIG undefined FUN_14d871984(void)

void FUN_14d871984(longlong param_1,undefined8 param_2)

{
  longlong in_R11;
  longlong unaff_R15;
  
  FUN_1661ea20e(param_1 + unaff_R15 + in_R11,param_2,FUN_1661ea20e);
  return;
}



// FUNCTION 14d871a13 FUN_14d871a13 body=146 status=ok
// SIG undefined FUN_14d871a13(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d871a13(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong unaff_R15;
  ulonglong local_res18;
  
  uVar1 = local_res18 ^ unaff_R15;
  *(undefined8 *)(uVar1 - 8) = param_2;
  *(undefined8 *)(uVar1 - 0x10) = param_2;
  *(undefined4 *)(uVar1 - 0x18) = 0x771a2c6;
  *(undefined4 *)(uVar1 - 0x14) = 0;
  FUN_1650291e0(param_1,FUN_1650291e0);
  return;
}



// FUNCTION 14d871d1e FUN_14d871d1e body=469 status=ok
// SIG undefined FUN_14d871d1e(void)

/* WARNING: Removing unreachable block (ram,0x00014d871dc3) */
/* WARNING: Removing unreachable block (ram,0x00014d871dc9) */

void FUN_14d871d1e(undefined8 param_1)

{
  longlong unaff_RSI;
  ulonglong unaff_retaddr;
  
  FUN_1626deb7b(param_1,*(ulonglong *)(unaff_RSI + -0xa0) | unaff_retaddr);
  return;
}



// FUNCTION 14d871e6b FUN_14d871e6b body=384 status=ok
// SIG undefined FUN_14d871e6b(void)

void FUN_14d871e6b(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong unaff_RBX;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong *in_R11;
  ulonglong unaff_R13;
  ulonglong uStackX_10;
  undefined8 uStack0000000000000028;
  
  *in_R11 = ~*in_R11;
  *in_R11 = ~(unaff_R13 & *in_R11);
  uStack0000000000000028 = 0x14d871eee;
  uVar4 = FUN_162e6cee0();
  uVar8 = ~uStackX_10 | param_1;
  uVar5 = ~(~(~unaff_RBX & (uVar4 ^ 0xffffffffffffffff)) + (uVar4 ^ 0xffffffffffffffff) + 1 |
           uStackX_10);
  uVar7 = ~uVar8;
  uVar5 = uVar5 + (-1 - (uVar8 | uVar5));
  puVar6 = (ulonglong *)(-1 - ~uVar5);
  *(undefined8 *)(&stack0xfffffffff1fa0536 + param_4) = 0x14d871f78;
  FUN_165b5af8f();
  uVar2 = *(ulonglong *)(&stack0xfffffffff1fa0546 + param_4);
  uVar4 = *puVar6;
  *puVar6 = ~*puVar6;
  *puVar6 = *puVar6 | uVar2;
  *(ulonglong *)(&stack0xfffffffff1fa0546 + param_4) = param_1;
  uVar1 = *puVar6;
  uVar4 = 0xffffffffffffffff - (uVar8 | uVar4);
  *(ulonglong **)(&stack0xfffffffff1fa053e + param_4) = puVar6;
  uVar3 = *(undefined8 *)(&stack0xfffffffff1fa0546 + param_4);
  *(ulonglong *)(&stack0xfffffffff1fa0546 + param_4) = (~(uVar4 & ~uVar1) + ~uVar1) - ~uVar4;
  **(undefined8 **)(&stack0xfffffffff1fa053e + param_4) =
       *(undefined8 *)(&stack0xfffffffff1fa0546 + param_4);
  *(ulonglong *)(&stack0xfffffffff1fa0566 + param_4) =
       *(ulonglong *)(&stack0xfffffffff1fa0566 + param_4) ^ uVar2;
  *(ulonglong *)(&stack0xfffffffff1fa0556 + param_4) = uVar5;
  *(ulonglong *)(&stack0xfffffffff1fa054e + param_4) = uVar7;
  uVar4 = *(ulonglong *)(&stack0xfffffffff1fa056e + param_4);
  *(ulonglong *)(&stack0xfffffffff1fa056e + param_4) =
       ~*(ulonglong *)(&stack0xfffffffff1fa056e + param_4);
  *(ulonglong *)(&stack0xfffffffff1fa056e + param_4) =
       *(ulonglong *)(&stack0xfffffffff1fa056e + param_4) | uVar2;
  *(ulonglong *)(&stack0xfffffffff1fa056e + param_4) =
       ~((~uVar2 | uVar4) & *(ulonglong *)(&stack0xfffffffff1fa056e + param_4));
  (*(code *)0x15750d476)(uVar3);
  return;
}



// FUNCTION 14d8721ab FUN_14d8721ab body=151 status=ok
// SIG undefined FUN_14d8721ab(void)

void FUN_14d8721ab(void)

{
  return;
}



// FUNCTION 14d872388 FUN_14d872388 body=137 status=ok
// SIG undefined FUN_14d872388(void)

void FUN_14d872388(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)0x166ba1ce3)
            (~(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) &
             (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15),*(undefined8 *)(unaff_R13 + -0x28));
  return;
}



// FUNCTION 14d872413 FUN_14d872413 body=158 status=ok
// SIG undefined FUN_14d872413(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d872413(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 in_R11;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  undefined8 local_res20;
  
  *(undefined8 *)(param_3 + local_res20 * -2 + -8) = in_R11;
  FUN_15b85f8af(param_1,param_2,local_res8,unaff_retaddr);
  return;
}



// FUNCTION 14d8725ff FUN_14d8725ff body=638 status=ok
// SIG undefined FUN_14d8725ff(void)

/* WARNING: Removing unreachable block (ram,0x00014de74605) */
/* WARNING: Removing unreachable block (ram,0x00014de74611) */
/* WARNING: Removing unreachable block (ram,0x00014de7454f) */
/* WARNING: Removing unreachable block (ram,0x00014de7455b) */
/* WARNING: Removing unreachable block (ram,0x00015649d865) */
/* WARNING: Removing unreachable block (ram,0x00014de744d7) */
/* WARNING: Removing unreachable block (ram,0x00015b74eb8c) */
/* WARNING: Removing unreachable block (ram,0x00014de744dd) */
/* WARNING: Removing unreachable block (ram,0x00015b969c68) */
/* WARNING: Removing unreachable block (ram,0x00014d872671) */
/* WARNING: Removing unreachable block (ram,0x00014d87267c) */
/* WARNING: Removing unreachable block (ram,0x00014d872725) */
/* WARNING: Removing unreachable block (ram,0x00014d87272a) */
/* WARNING: Removing unreachable block (ram,0x00014e04b38a) */
/* WARNING: Removing unreachable block (ram,0x00014d872730) */
/* WARNING: Removing unreachable block (ram,0x00014d87285c) */
/* WARNING: Removing unreachable block (ram,0x00014d872861) */
/* WARNING: Removing unreachable block (ram,0x00014d872867) */
/* WARNING: Removing unreachable block (ram,0x00015b61f4e0) */
/* WARNING: Removing unreachable block (ram,0x00014d872677) */

undefined8 FUN_14d8725ff(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_16546b6b5(param_1,param_2,param_3);
  uVar1 = FUN_15b74eb8c();
  return uVar1;
}



// FUNCTION 14d8729fd FUN_14d8729fd body=134 status=ok
// SIG undefined FUN_14d8729fd(void)

void FUN_14d8729fd(undefined8 param_1,undefined8 param_2)

{
  longlong in_RAX;
  longlong unaff_R12;
  
  FUN_14e188973(param_1,param_2,
                ((0xffffffffffffffffU - in_RAX) -
                (~*(ulonglong *)(unaff_R12 + -0x90) | 0xffffffffffffffffU - in_RAX)) +
                ~*(ulonglong *)(unaff_R12 + -0x90) ^ 0xffffffffffffffff);
  return;
}



// FUNCTION 14d872a89 FUN_14d872a89 body=176 status=ok
// SIG undefined FUN_14d872a89(void)

void FUN_14d872a89(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  undefined8 local_res10;
  
  FUN_161d0ef82(unaff_retaddr,param_2,local_res10);
  return;
}



// FUNCTION 14d872f5b FUN_14d872f5b body=15 status=ok
// SIG undefined FUN_14d872f5b(void)

void FUN_14d872f5b(void)

{
  return;
}



// FUNCTION 14d872fd6 FUN_14d872fd6 body=51 status=ok
// SIG undefined FUN_14d872fd6(void)

void FUN_14d872fd6(void)

{
  FUN_15b752fb8();
  return;
}



// FUNCTION 14d873295 FUN_14d873295 body=201 status=ok
// SIG undefined FUN_14d873295(void)

void FUN_14d873295(void)

{
  return;
}



// FUNCTION 14d87335f FUN_14d87335f body=146 status=ok
// SIG undefined FUN_14d87335f(void)

/* WARNING: Removing unreachable block (ram,0x00014d87346f) */
/* WARNING: Removing unreachable block (ram,0x00014d873475) */
/* WARNING: Removing unreachable block (ram,0x00014d87347a) */

void FUN_14d87335f(undefined8 param_1,undefined8 param_2,byte param_3)

{
  byte *unaff_retaddr;
  
  FUN_156697652();
  *unaff_retaddr = ~(~((-0x2b - (~-(param_3 | 0xd4) + 2)) + param_3) & (param_3 & 0x2b | 0xd4));
  return;
}



// FUNCTION 14d8733f2 FUN_14d8733f2 body=135 status=ok
// SIG undefined FUN_14d8733f2(void)

/* WARNING: Removing unreachable block (ram,0x00014d87346f) */
/* WARNING: Removing unreachable block (ram,0x00014d873475) */
/* WARNING: Removing unreachable block (ram,0x00014d87347a) */

void FUN_14d8733f2(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 local_res8;
  
  *local_res8 = ~(~((-0x2b - (~-(param_3 | 0xd4) + 2)) + param_3) & (param_3 & 0x2b | 0xd4));
  return;
}



// FUNCTION 14d87347a FUN_14d87347a body=142 status=ok
// SIG undefined FUN_14d87347a(void)

void FUN_14d87347a(void)

{
  undefined8 in_stack_00000008;
  
  FUN_161dd1f73(in_stack_00000008);
  return;
}



// FUNCTION 14d873608 FUN_14d873608 body=747 status=ok
// SIG undefined FUN_14d873608(void)

/* WARNING: Removing unreachable block (ram,0x000156ff3861) */
/* WARNING: Removing unreachable block (ram,0x00014d87369b) */
/* WARNING: Removing unreachable block (ram,0x00014d87385c) */
/* WARNING: Removing unreachable block (ram,0x000156ff37e4) */
/* WARNING: Removing unreachable block (ram,0x000156ff385b) */
/* WARNING: Removing unreachable block (ram,0x00016243e7a1) */
/* WARNING: Removing unreachable block (ram,0x00014d873862) */

undefined8 FUN_14d873608(ulonglong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  if (-1 < (longlong)
           ((~*(ulonglong *)(unaff_RDI + -0x88) | ~param_1) + *(ulonglong *)(unaff_RDI + -0x88) + 1)
     ) {
    uVar1 = FUN_14dfdcb3a();
    return uVar1;
  }
  uVar1 = FUN_14dfdcb3a();
  return uVar1;
}



// FUNCTION 14d873990 FUN_14d873990 body=68 status=ok
// SIG undefined FUN_14d873990(void)

void FUN_14d873990(void)

{
  return;
}



// FUNCTION 14d873a28 FUN_14d873a28 body=142 status=ok
// SIG undefined FUN_14d873a28(void)

/* WARNING: Removing unreachable block (ram,0x00014d873b61) */

void FUN_14d873a28(undefined8 param_1,undefined8 param_2)

{
  short *psVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  ulonglong uVar9;
  ulonglong unaff_RSI;
  undefined8 in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
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
  byte bVar22;
  ulonglong uVar23;
  
  uVar9 = unaff_RBP ^ 0x31bae6b0;
  *(undefined8 *)(&stack0xfffffffff73604c7 + uVar9) = param_1;
  *(undefined8 *)(&stack0xfffffffff73604b7 + uVar9) = in_RAX;
  *(ulonglong *)(&stack0xfffffffff73604af + uVar9) = unaff_R15;
  uVar4 = *(undefined8 *)(&stack0xfffffffff73604af + uVar9);
  *(undefined8 *)(&stack0xfffffffff73604bf + uVar9) = param_1;
  (&stack0xfffffffff73604bf)[uVar9] = 0x5a;
  uVar5 = *(undefined8 *)(&stack0xfffffffff73604bf + uVar9);
  *(code **)(&stack0xfffffffff73604c7 + uVar9) = FUN_14d873ab8;
  FUN_16476c7f2();
  *(undefined8 *)(&stack0xfffffffff73604df + uVar9) = unaff_R14;
  uVar6 = *(ulonglong *)(&stack0xfffffffff73604cf + uVar9);
  uVar7 = *(undefined8 *)(&stack0xfffffffff73604d7 + uVar9);
  *(undefined8 *)(&stack0xfffffffff73604d7 + uVar9) = param_2;
  *(undefined8 *)(&stack0xfffffffff73604cf + uVar9) = unaff_R12;
  uVar23 = *(ulonglong *)(&stack0xfffffffff73604e7 + uVar9);
  uVar8 = *(undefined8 *)(&stack0xfffffffff73604cf + uVar9);
  *(ulonglong *)(&stack0xfffffffff73604e7 + uVar9) =
       *(ulonglong *)(&stack0xfffffffff73604e7 + uVar9) & uVar6;
  *(ulonglong *)(&stack0xfffffffff73604e7 + uVar9) =
       ~*(ulonglong *)(&stack0xfffffffff73604e7 + uVar9);
  *(ulonglong *)(&stack0xfffffffff73604e7 + uVar9) =
       *(ulonglong *)(&stack0xfffffffff73604e7 + uVar9) & (uVar23 | uVar6);
  *(ulonglong *)(&stack0xfffffffff73604ef + uVar9) =
       *(ulonglong *)(&stack0xfffffffff73604ef + uVar9) ^ uVar6;
  *(undefined8 *)(&stack0xfffffffff73604df + uVar9) = uVar4;
  *(undefined8 *)(&stack0xfffffffff73604d7 + uVar9) = in_R11;
  *(undefined8 *)(&stack0xfffffffff73604cf + uVar9) = unaff_RBX;
  psVar1 = (short *)(&stack0xfffffffff73604e7 + uVar9);
  *psVar1 = (-0x101 - (~-*psVar1 + 1U | 0xfeff)) + *psVar1;
  uVar4 = *(undefined8 *)(&stack0xfffffffff73604df + uVar9);
  uVar23 = *(ulonglong *)(&stack0xfffffffff73604e7 + uVar9);
  bVar18 = (uVar23 & 0x4000) != 0;
  bVar17 = (uVar23 & 0x800) != 0;
  bVar16 = (uVar23 & 0x200) != 0;
  bVar15 = (uVar23 & 0x100) != 0;
  bVar14 = (uVar23 & 0x80) != 0;
  bVar13 = (uVar23 & 0x40) != 0;
  bVar12 = (uVar23 & 0x10) != 0;
  bVar11 = (uVar23 & 4) != 0;
  bVar10 = (uVar23 & 1) != 0;
  bVar22 = (uVar23 & 0x200000) != 0;
  bVar19 = (uVar23 & 0x40000) != 0;
  bVar21 = 0;
  bVar20 = 0;
  puVar2 = *(undefined8 **)(&stack0xfffffffff73604ef + uVar9);
  pcVar3 = (code *)swi(0x2e);
  (*pcVar3)();
  *puVar2 = uVar8;
  puVar2[-1] = uVar8;
  puVar2[-2] = (ulonglong)(bVar18 & 1) * 0x4000 | (ulonglong)(bVar17 & 1) * 0x800 |
               (ulonglong)((uVar23 & 0x400) != 0) * 0x400 | (ulonglong)(bVar16 & 1) * 0x200 |
               (ulonglong)(bVar15 & 1) * 0x100 | (ulonglong)(bVar14 & 1) * 0x80 |
               (ulonglong)(bVar13 & 1) * 0x40 | (ulonglong)(bVar12 & 1) * 0x10 |
               (ulonglong)(bVar11 & 1) * 4 | (ulonglong)(bVar10 & 1) |
               (ulonglong)(bVar22 & 1) * 0x200000 | (ulonglong)(bVar21 & 1) * 0x100000 |
               (ulonglong)(bVar20 & 1) * 0x80000 | (ulonglong)(bVar19 & 1) * 0x40000;
  uVar23 = puVar2[-2];
  puVar2[-2] = (ulonglong)((uVar23 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar23 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar23 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar23 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar23 & 0x100) != 0) * 0x100 | (ulonglong)((uVar23 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar23 & 0x40) != 0) * 0x40 | (ulonglong)((uVar23 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar23 & 4) != 0) * 4 | (ulonglong)((uVar23 & 1) != 0) |
               (ulonglong)((uVar23 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar23 & 0x40000) != 0) * 0x40000;
  puVar2[-3] = (unaff_RSI + unaff_R15) - ((unaff_RSI & unaff_R15) << ((char)uVar5 + 0xa7U & 0x3f));
  uVar23 = puVar2[-2];
  puVar2[-2] = uVar7;
  puVar2[-3] = uVar7;
  puVar2[-4] = uVar4;
  puVar2[-5] = (ulonglong)((uVar23 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar23 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar23 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar23 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar23 & 0x100) != 0) * 0x100 | (ulonglong)((uVar23 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar23 & 0x40) != 0) * 0x40 | (ulonglong)((uVar23 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar23 & 4) != 0) * 4 | (ulonglong)((uVar23 & 1) != 0) |
               (ulonglong)((uVar23 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar23 & 0x40000) != 0) * 0x40000;
  puVar2[-2] = &DAT_14e0edf8a;
  return;
}



// FUNCTION 14d873ab8 FUN_14d873ab8 body=549 status=ok
// SIG undefined FUN_14d873ab8(void)

/* WARNING: Removing unreachable block (ram,0x00014d873b61) */

void FUN_14d873ab8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 unaff_RSI;
  undefined8 unaff_R12;
  ushort uVar3;
  undefined8 unaff_R15;
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
  ulonglong unaff_retaddr;
  undefined8 local_res8;
  ulonglong local_res18;
  ulonglong local_res20;
  
  uVar17 = ~(local_res18 & unaff_retaddr) & (local_res18 | unaff_retaddr);
  puVar1 = (undefined8 *)(local_res20 ^ unaff_retaddr);
  local_res18._0_2_ = (short)uVar17;
  uVar3 = (-0x101 - (~-(short)local_res18 + 1U | 0xfeff)) + (short)local_res18;
  bVar12 = (uVar3 & 0x4000) != 0;
  bVar11 = (uVar3 & 0x800) != 0;
  bVar10 = (uVar3 & 0x200) != 0;
  bVar9 = (uVar3 & 0x100) != 0;
  bVar8 = (uVar3 & 0x80) != 0;
  bVar7 = (uVar3 & 0x40) != 0;
  bVar6 = (uVar3 & 0x10) != 0;
  bVar5 = (uVar3 & 4) != 0;
  bVar4 = (uVar3 & 1) != 0;
  bVar16 = (uVar17 & 0x200000) != 0;
  bVar13 = (uVar17 & 0x40000) != 0;
  bVar15 = 0;
  bVar14 = 0;
  pcVar2 = (code *)swi(0x2e);
  (*pcVar2)(param_1,param_2);
  *puVar1 = unaff_R12;
  puVar1[-1] = unaff_R12;
  puVar1[-2] = (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)(bVar11 & 1) * 0x800 |
               (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)(bVar10 & 1) * 0x200 |
               (ulonglong)(bVar9 & 1) * 0x100 | (ulonglong)(bVar8 & 1) * 0x80 |
               (ulonglong)(bVar7 & 1) * 0x40 | (ulonglong)(bVar6 & 1) * 0x10 |
               (ulonglong)(bVar5 & 1) * 4 | (ulonglong)(bVar4 & 1) |
               (ulonglong)(bVar16 & 1) * 0x200000 | (ulonglong)(bVar15 & 1) * 0x100000 |
               (ulonglong)(bVar14 & 1) * 0x80000 | (ulonglong)(bVar13 & 1) * 0x40000;
  uVar17 = puVar1[-2];
  puVar1[-2] = (ulonglong)((uVar17 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar17 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar17 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar17 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar17 & 0x100) != 0) * 0x100 | (ulonglong)((uVar17 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar17 & 0x40) != 0) * 0x40 | (ulonglong)((uVar17 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar17 & 4) != 0) * 4 | (ulonglong)((uVar17 & 1) != 0) |
               (ulonglong)((uVar17 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar17 & 0x40000) != 0) * 0x40000;
  puVar1[-3] = unaff_RSI;
  uVar17 = puVar1[-2];
  puVar1[-2] = local_res8;
  puVar1[-3] = local_res8;
  puVar1[-4] = unaff_R15;
  puVar1[-5] = (ulonglong)((uVar17 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar17 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar17 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar17 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar17 & 0x100) != 0) * 0x100 | (ulonglong)((uVar17 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar17 & 0x40) != 0) * 0x40 | (ulonglong)((uVar17 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar17 & 4) != 0) * 4 | (ulonglong)((uVar17 & 1) != 0) |
               (ulonglong)((uVar17 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar17 & 0x40000) != 0) * 0x40000;
  puVar1[-2] = &DAT_14e0edf8a;
  return;
}



// FUNCTION 14d873d36 FUN_14d873d36 body=169 status=ok
// SIG undefined FUN_14d873d36(void)

void FUN_14d873d36(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_160d0d198(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d873e7e FUN_14d873e7e body=420 status=ok
// SIG undefined FUN_14d873e7e(void)

/* WARNING: Removing unreachable block (ram,0x00014d87404a) */
/* WARNING: Removing unreachable block (ram,0x00014d8740da) */
/* WARNING: Removing unreachable block (ram,0x00014d8740e0) */
/* WARNING: Removing unreachable block (ram,0x00014d8740d5) */
/* WARNING: Removing unreachable block (ram,0x0001568b7db1) */
/* WARNING: Removing unreachable block (ram,0x00014d873f0c) */
/* WARNING: Removing unreachable block (ram,0x00014d873f12) */
/* WARNING: Removing unreachable block (ram,0x00014d873fa3) */
/* WARNING: Removing unreachable block (ram,0x00014d873fa9) */
/* WARNING: Removing unreachable block (ram,0x00014d87403f) */
/* WARNING: Removing unreachable block (ram,0x00014d874045) */
/* WARNING: Removing unreachable block (ram,0x0001622beed5) */
/* WARNING: Removing unreachable block (ram,0x000160bab08a) */
/* WARNING: Removing unreachable block (ram,0x000161659010) */

undefined8 FUN_14d873e7e(ulonglong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  uVar1 = FUN_14da68daa(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
  return uVar1;
}



// FUNCTION 14d873fa9 FUN_14d873fa9 body=159 status=ok
// SIG undefined FUN_14d873fa9(void)

/* WARNING: Removing unreachable block (ram,0x00014d87404a) */
/* WARNING: Removing unreachable block (ram,0x00014d8740da) */
/* WARNING: Removing unreachable block (ram,0x00014d8740e0) */
/* WARNING: Removing unreachable block (ram,0x00014d8740d5) */
/* WARNING: Removing unreachable block (ram,0x0001568b7db1) */
/* WARNING: Removing unreachable block (ram,0x000160bab08a) */

undefined8 FUN_14d873fa9(void)

{
  short in_AX;
  undefined8 uVar1;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 in_R9;
  short *unaff_R13;
  undefined8 unaff_retaddr;
  undefined8 local_res20;
  
  *unaff_R13 = in_AX + -0x100;
  *(undefined8 *)(local_res20 + -8) = unaff_retaddr;
  *(undefined8 *)(local_res20 + -0x10) = in_R9;
  *(undefined8 *)(local_res20 + -0x18) = in_R9;
  *(undefined8 *)(local_res20 + -0x20) = unaff_RBP;
  *(undefined8 *)(local_res20 + -0x20) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = *(undefined8 *)(local_res20 + -0x20);
  uVar1 = FUN_160bab08a();
  return uVar1;
}



// FUNCTION 14d87404a FUN_14d87404a body=582 status=ok
// SIG undefined FUN_14d87404a(void)

/* WARNING: Removing unreachable block (ram,0x00014d8740e0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14d87404a(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
             ulonglong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong in_RAX;
  undefined8 uVar3;
  undefined8 unaff_RBP;
  undefined8 unaff_R15;
  ulonglong local_res8;
  
  param_5 = param_5 ^ in_RAX;
                    /* WARNING: Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
  *(undefined8 *)(param_5 - 8) = unaff_RBP;
  *(undefined8 *)(param_5 - 0x10) = unaff_RBP;
  *(undefined8 *)(param_5 - 0x18) = 0x1568b7e50;
  FUN_162a2b86f(local_res8,param_2,param_3);
  uVar1 = *(ulonglong *)((param_5 - 8) + (param_4 ^ 0x44e1ffb0));
  *(undefined8 *)(param_5 - 0x10) = param_2;
  uVar3 = *(undefined8 *)(param_5 - 0x10);
  *(ulonglong *)(param_5 + 8) = *(ulonglong *)(param_5 + 8) & local_res8;
  *(ulonglong *)(param_5 - 0x10) = local_res8;
  *(longlong *)(param_5 + 8) = *(longlong *)(param_5 + 8) << 1;
  lVar2 = *(longlong *)(param_5 + 8);
  *(undefined8 *)(param_5 - 0x10) = *(undefined8 *)(param_5 - 0x10);
  *(undefined8 *)(param_5 - 0x18) = unaff_R15;
  *(undefined8 *)(param_5 - 0x20) = uVar3;
  uVar3 = *(undefined8 *)(param_5 - 0x20);
  *(undefined8 *)(param_5 + 8) = 0;
  *(longlong *)(param_5 + 8) = *(longlong *)(param_5 + 8) + ((-~local_res8 - (~uVar1 + 2)) - lVar2);
  uVar3 = FUN_14d93cae0(*(undefined8 *)(param_5 - 0x10),uVar3);
  return uVar3;
}



// FUNCTION 14d8741d5 FUN_14d8741d5 body=20 status=ok
// SIG undefined FUN_14d8741d5(void)

void FUN_14d8741d5(void)

{
  return;
}



// FUNCTION 14d8742f8 FUN_14d8742f8 body=296 status=ok
// SIG undefined FUN_14d8742f8(void)

void FUN_14d8742f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong uVar2;
  ulonglong unaff_R15;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0xa0) ^ unaff_R15;
  FUN_16167be90(param_1,param_2,param_3);
  FUN_14d892f5e();
  uVar1 = *(ulonglong *)(uVar2 - 0x78);
  uVar2 = *(ulonglong *)(uVar2 - 0x28);
  FUN_16635b5a8(~((unaff_R15 ^ 0xffffffffffffffff | uVar1) & (~uVar1 | unaff_R15)),
                ~((~unaff_R15 | uVar2) & (~uVar2 | unaff_R15)));
  FUN_14d8744b9();
  return;
}



// FUNCTION 14d874423 FUN_14d874423 body=149 status=ok
// SIG undefined FUN_14d874423(void)

void FUN_14d874423(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_16635b5a8(~((unaff_R15 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_R13 + -0x78)) &
                 (~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15)),
                ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) &
                 (~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)));
  FUN_14d8744b9();
  return;
}



// FUNCTION 14d8744b9 FUN_14d8744b9 body=155 status=ok
// SIG undefined FUN_14d8744b9(void)

void FUN_14d8744b9(void)

{
  FUN_14dd45c04();
  return;
}



// FUNCTION 14d874555 FUN_14d874555 body=127 status=ok
// SIG undefined FUN_14d874555(void)

void FUN_14d874555(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_R10;
  longlong unaff_R12;
  undefined1 local_res18 [16];
  
  *(ulonglong *)(unaff_R12 + 0x18) =
       (~*(ulonglong *)(unaff_R12 + 0x18) - ~(*(ulonglong *)(unaff_R12 + 0x18) & in_R10)) +
       *(longlong *)(unaff_R12 + 0x18);
  FUN_1624ae919(local_res18,param_2);
  return;
}



// FUNCTION 14d874739 FUN_14d874739 body=151 status=ok
// SIG undefined FUN_14d874739(void)

void FUN_14d874739(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x78);
  FUN_14d89ff4d(0xffffffffffffffff - uVar1 | unaff_R15,~uVar1 & ~unaff_R15 | uVar1);
  return;
}



// FUNCTION 14d8747d1 FUN_14d8747d1 body=222 status=ok
// SIG undefined FUN_14d8747d1(void)

/* WARNING: Instruction at (ram,0x000162506b8f) overlaps instruction at (ram,0x000162506b8e)
    */
/* WARNING: Removing unreachable block (ram,0x00014d874849) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000008 : 0x000162506b9b */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8747d1(void)

{
  FUN_1566bc589();
  return;
}



// FUNCTION 14d874849 FUN_14d874849 body=133 status=ok
// SIG undefined FUN_14d874849(void)

void FUN_14d874849(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_161973b8e(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d8748d0 FUN_14d8748d0 body=262 status=ok
// SIG undefined FUN_14d8748d0(void)

/* WARNING: Removing unreachable block (ram,0x00014d874966) */

void FUN_14d8748d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  ushort *unaff_R12;
  undefined8 in_stack_00000008;
  
  *unaff_R12 = ~*unaff_R12;
  *unaff_R12 = *unaff_R12 | 0x100;
  *unaff_R12 = ~*unaff_R12;
  *(undefined8 *)(param_5 + -8) = in_stack_00000008;
  *(undefined8 *)(param_5 + -0x10) = in_RAX;
  uVar1 = *(undefined8 *)(param_5 + -0x10);
  *(undefined8 *)(param_5 + -0x10) = *(undefined8 *)(param_5 + -8);
  *(undefined8 *)(param_5 + -0x18) = param_2;
  *(undefined8 *)(param_5 + -0x20) = uVar1;
  *(undefined4 *)(param_5 + -0x20) = 0x50643171;
  *(undefined4 *)(param_5 + -0x1c) = 0;
  *(undefined **)(param_5 + -0x10 + (*(ulonglong *)(param_5 + -0x20) ^ 0x50643179)) = &DAT_165407848
  ;
  thunk_FUN_15b642ca5(param_1,*(undefined8 *)(param_5 + -0x18),param_3,param_4);
  return;
}



// FUNCTION 14d874a8c FUN_14d874a8c body=139 status=ok
// SIG undefined FUN_14d874a8c(void)

void FUN_14d874a8c(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_16278299e(FUN_16278299e,*(ulonglong *)(unaff_R13 + -0x48) | unaff_R15);
  return;
}



// FUNCTION 14d874c56 FUN_14d874c56 body=326 status=ok
// SIG undefined FUN_14d874c56(void)

/* WARNING: Removing unreachable block (ram,0x00014d874d01) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d874c56(undefined8 param_1)

{
  FUN_1577e358c(param_1);
  return;
}



// FUNCTION 14d874d9d FUN_14d874d9d body=145 status=ok
// SIG undefined FUN_14d874d9d(void)

void FUN_14d874d9d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_AL;
  undefined8 unaff_retaddr;
  longlong local_res18;
  
  LOCK();
  UNLOCK();
  DAT_14d7bd776 = in_AL;
  *(undefined8 *)(local_res18 + -8) = unaff_retaddr;
  *(undefined8 *)(local_res18 + -0x10) = unaff_retaddr;
  FUN_160bc267c(param_1,param_2,param_3,FUN_160bc267c);
  return;
}



// FUNCTION 14d874e2f FUN_14d874e2f body=143 status=ok
// SIG undefined FUN_14d874e2f(void)

/* WARNING: Removing unreachable block (ram,0x00014d874ebe) */

void FUN_14d874e2f(void)

{
  return;
}



// FUNCTION 14d874ebe FUN_14d874ebe body=224 status=ok
// SIG undefined FUN_14d874ebe(void)

void FUN_14d874ebe(void)

{
  return;
}



// FUNCTION 14d8750f2 FUN_14d8750f2 body=46 status=ok
// SIG undefined FUN_14d8750f2(void)

undefined8 FUN_14d8750f2(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d875199 FUN_14d875199 body=135 status=ok
// SIG undefined FUN_14d875199(void)

void FUN_14d875199(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong unaff_R15;
  
  (*(code *)0x1656005b7)(param_1,~((unaff_RDI + param_2) - ~unaff_RSI & (~param_2 | unaff_R15)));
  return;
}



// FUNCTION 14d875221 FUN_14d875221 body=138 status=ok
// SIG undefined FUN_14d875221(void)

/* WARNING: Removing unreachable block (ram,0x00014d8752a8) */

void FUN_14d875221(undefined8 param_1)

{
  ushort uVar1;
  longlong unaff_R13;
  ushort unaff_R15W;
  undefined2 local_res10;
  
  uVar1 = (ushort)*(undefined8 *)(unaff_R13 + -0x68);
  if ((ushort)~((unaff_R15W ^ 0xffff | uVar1) & ~(~(0xffff - uVar1) & ~unaff_R15W)) == local_res10)
  {
    FUN_156bf1e3f(param_1);
    return;
  }
  FUN_1569dd883();
  return;
}



// FUNCTION 14d8752ae FUN_14d8752ae body=90 status=ok
// SIG undefined FUN_14d8752ae(void)

void FUN_14d8752ae(void)

{
  return;
}



// FUNCTION 14d87546c FUN_14d87546c body=214 status=ok
// SIG undefined FUN_14d87546c(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong FUN_14d87546c(void)

{
  ulonglong unaff_RBP;
  ulonglong in_stack_00000028;
  
  return in_stack_00000028 + unaff_RBP + (in_stack_00000028 & unaff_RBP) * -2;
}



// FUNCTION 14d87592d FUN_14d87592d body=5 status=ok
// SIG undefined FUN_14d87592d(void)

void FUN_14d87592d(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014d875951. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14d8759c5 FUN_14d8759c5 body=171 status=ok
// SIG undefined FUN_14d8759c5(void)

void FUN_14d8759c5(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_14da8bebf(*(ulonglong *)(unaff_R12 + -0x70) + in_RAX +
                (*(ulonglong *)(unaff_R12 + -0x70) & in_RAX) * -2);
  return;
}



// FUNCTION 14d875b74 FUN_14d875b74 body=166 status=ok
// SIG undefined FUN_14d875b74(void)

void FUN_14d875b74(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  undefined8 unaff_RDI;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined1 **)(local_res18 + -8) = &LAB_156b8dcfa;
  *(undefined8 *)(local_res18 + -0x10) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x18) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x28) = in_RAX;
  *(undefined4 *)(local_res18 + -0x28) = 0x41086610;
  *(undefined4 *)(local_res18 + -0x24) = 0;
  uVar1 = *(ulonglong *)(local_res18 + -0x28);
  *(undefined8 *)(local_res18 + -0x28) = param_1;
  *(undefined8 *)(local_res18 + -0x30) = param_2;
  FUN_156b8dcba(FUN_156b8dcba,(uVar1 | 0x41086618) - 0x41086619);
  return;
}



// FUNCTION 14d875cab FUN_14d875cab body=150 status=ok
// SIG undefined FUN_14d875cab(void)

void FUN_14d875cab(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RSI;
  longlong in_R10;
  longlong unaff_R13;
  ulonglong local_res20;
  
  puVar1 = (ulonglong *)(in_R10 + 8 + unaff_R13);
  *puVar1 = ~*puVar1;
  *(longlong *)(in_R10 + 8 + unaff_R13) = 0xdda7b92 - *(longlong *)(in_R10 + 8 + unaff_R13);
  uVar2 = *(ulonglong *)((longlong)&local_res20 + unaff_R13);
  *(ulonglong *)((longlong)&local_res20 + unaff_R13) =
       *(ulonglong *)((longlong)&local_res20 + unaff_R13) | 0xffffffffc6170b50;
  uVar3 = *(ulonglong *)((longlong)&local_res20 + unaff_R13);
  *(undefined8 *)((longlong)&local_res20 + unaff_R13) = 0;
  *(ulonglong *)((longlong)&local_res20 + unaff_R13) =
       *(ulonglong *)((longlong)&local_res20 + unaff_R13) ^
       ~(~((uVar2 | 0x39e8f4af) - 0x39e8f4af) & uVar3);
  *(longlong *)((longlong)&local_res20 + unaff_R13) =
       *(longlong *)((longlong)&local_res20 + unaff_R13) - unaff_RSI;
  return;
}



// FUNCTION 14d875d7b FUN_14d875d7b body=336 status=ok
// SIG undefined FUN_14d875d7b(void)

/* WARNING: Removing unreachable block (ram,0x00014d875e0f) */
/* WARNING: Removing unreachable block (ram,0x00014d875e15) */
/* WARNING: Removing unreachable block (ram,0x000156d70809) */

undefined8 FUN_14d875d7b(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_156d70809();
  return uVar1;
}



// FUNCTION 14d875f67 FUN_14d875f67 body=20 status=ok
// SIG undefined FUN_14d875f67(void)

void FUN_14d875f67(void)

{
  return;
}



// FUNCTION 14d87603a FUN_14d87603a body=34 status=ok
// SIG undefined FUN_14d87603a(void)

void FUN_14d87603a(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 unaff_R13;
  undefined8 uStackX_10;
  undefined8 auStackX_18 [2];
  
  *(undefined8 *)((longlong)auStackX_18 + param_4) = unaff_R13;
  FUN_14d85d504(param_1,auStackX_18[0],param_3,uStackX_10);
  return;
}



// FUNCTION 14d876240 FUN_14d876240 body=151 status=ok
// SIG undefined FUN_14d876240(void)

void FUN_14d876240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  
  FUN_156ab6128(local_res8,param_2,param_3);
  return;
}



// FUNCTION 14d876470 FUN_14d876470 body=200 status=ok
// SIG undefined FUN_14d876470(void)

/* WARNING: Removing unreachable block (ram,0x00014d876484) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d876470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_16542c7a3(FUN_16542c7a3,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d876539 FUN_14d876539 body=52 status=ok
// SIG undefined FUN_14d876539(void)

void FUN_14d876539(void)

{
  return;
}



// FUNCTION 14d8765d4 FUN_14d8765d4 body=284 status=ok
// SIG undefined FUN_14d8765d4(void)

/* WARNING: Instruction at (ram,0x00014d8766b8) overlaps instruction at (ram,0x00014d8766b6)
    */
/* WARNING: Removing unreachable block (ram,0x00014d87665e) */
/* WARNING: Removing unreachable block (ram,0x00014d8766b1) */
/* WARNING: Removing unreachable block (ram,0x00014d876676) */
/* WARNING: Removing unreachable block (ram,0x00014d8766b8) */
/* WARNING: Removing unreachable block (ram,0x00014d87667d) */

void FUN_14d8765d4(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong unaff_RSI;
  ulonglong unaff_R15;
  undefined8 local_res18;
  
  if (param_5 + param_1 == (param_5 & param_1)) {
    (*(code *)0x14de30a12)
              (0xffffffffffffffff - (local_res18 & param_1) &
               (~(((param_1 - 1) - ~-(unaff_RSI | param_1)) + unaff_RSI) + param_1) - ~unaff_R15,
               param_2,param_3,param_4);
    return;
  }
  FUN_15b8b75b0();
  return;
}



// FUNCTION 14d8766f3 FUN_14d8766f3 body=256 status=ok
// SIG undefined FUN_14d8766f3(void)

short FUN_14d8766f3(ulonglong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ushort *puVar3;
  ulonglong unaff_RBP;
  ulonglong uVar4;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar4 = ~(unaff_RBP & (~param_1 | param_2));
  lVar2 = *(ulonglong *)(unaff_R13 + -0x88) + unaff_R15;
  lVar1 = *(longlong *)(unaff_R13 + -0x38);
  FUN_161d3ee89(uVar4,lVar2,lVar2 + (*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) * -2);
  puVar3 = (ushort *)(*(ulonglong *)(lVar1 + unaff_R15 + -0x68) ^ uVar4);
  FUN_14e22d8a8(uVar4);
  return ~(*puVar3 & 0xfeff) - 0x101;
}



// FUNCTION 14d8767f6 thunk_FUN_14d8767fc body=5 status=ok
// SIG undefined thunk_FUN_14d8767fc(void)

short thunk_FUN_14d8767fc(undefined8 param_1,ushort *param_2)

{
  return ~(*param_2 & 0xfeff) - 0x101;
}



// FUNCTION 14d8767fc FUN_14d8767fc body=65 status=ok
// SIG undefined FUN_14d8767fc(void)

short FUN_14d8767fc(undefined8 param_1,ushort *param_2)

{
  return ~(*param_2 & 0xfeff) - 0x101;
}



// FUNCTION 14d876887 FUN_14d876887 body=140 status=ok
// SIG undefined FUN_14d876887(void)

void FUN_14d876887(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong unaff_RBX;
  ulonglong unaff_R15;
  undefined1 local_res8 [32];
  
  lVar1 = (((unaff_R15 ^ 0xffffffffffffffff) + param_4) -
          ((unaff_R15 ^ 0xffffffffffffffff) & param_4)) + unaff_R15 + 1;
  FUN_16502a508(param_1,lVar1,CONCAT71((int7)((ulonglong)local_res8 >> 8),0x11) ^ 0xb3,
                unaff_RBX + lVar1 * -2);
  return;
}



// FUNCTION 14d8769c6 FUN_14d8769c6 body=462 status=ok
// SIG undefined FUN_14d8769c6(void)

/* WARNING: Instruction at (ram,0x00015b49d29b) overlaps instruction at (ram,0x00015b49d29a)
    */
/* WARNING: Removing unreachable block (ram,0x00014d876b58) */
/* WARNING: Removing unreachable block (ram,0x00014d876b5e) */
/* WARNING: Removing unreachable block (ram,0x0001574972da) */
/* WARNING: Removing unreachable block (ram,0x000157497371) */
/* WARNING: Removing unreachable block (ram,0x000157497377) */
/* WARNING: Removing unreachable block (ram,0x000165fbdb6e) */
/* WARNING: Removing unreachable block (ram,0x000165fbdbca) */
/* WARNING: Removing unreachable block (ram,0x000165fbdbce) */
/* WARNING: Removing unreachable block (ram,0x000165fbdc1f) */
/* WARNING: Removing unreachable block (ram,0x000165fbdc25) */
/* WARNING: Removing unreachable block (ram,0x00015b24c8dd) */
/* WARNING: Removing unreachable block (ram,0x00015b24c907) */
/* WARNING: Removing unreachable block (ram,0x00015b24c921) */
/* WARNING: Removing unreachable block (ram,0x00015b24c972) */
/* WARNING: Removing unreachable block (ram,0x00015b24c978) */
/* WARNING: Removing unreachable block (ram,0x0001613ff74d) */
/* WARNING: Removing unreachable block (ram,0x00015b49d29a) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000008 : 0x00015b49d2a7 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d8769c6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  byte in_AF;
  int *unaff_retaddr;
  longlong in_stack_00000008;
  undefined8 uStackX_20;
  undefined1 uStack0000000000000120;
  
  *unaff_retaddr = 0;
  *unaff_retaddr = *unaff_retaddr + -0x642e7470;
  *unaff_retaddr = -*unaff_retaddr;
  uStack0000000000000120 = 0xa2;
  if ((-1 < (int)(((uint)(in_stack_00000008 < 0) * 0x80 |
                   (uint)(CONCAT71((int7)(CONCAT44((int)((ulonglong)in_stack_00000008 >> 0x20),
                                                   0x642e7470) >> 8),0xa2) == 0) * 0x40 |
                  (uint)(in_AF & 1) * 0x10) << 0x18)) && (in_stack_00000008 < 0)) {
    uVar1 = FUN_1574972da();
    return uVar1;
  }
  uStack0000000000000120 = 0;
  pcVar2 = FUN_16675e728;
  FUN_16675e728(FUN_16675e728,param_2,param_3,in_stack_00000008);
  FUN_162306ab9(pcVar2);
  return uStackX_20;
}



// FUNCTION 14d876a92 FUN_14d876a92 body=203 status=ok
// SIG undefined FUN_14d876a92(void)

/* WARNING: Removing unreachable block (ram,0x00014d876b58) */
/* WARNING: Removing unreachable block (ram,0x00014d876b5e) */
/* WARNING: Removing unreachable block (ram,0x0001574972da) */
/* WARNING: Removing unreachable block (ram,0x000157497371) */
/* WARNING: Removing unreachable block (ram,0x000157497377) */
/* WARNING: Removing unreachable block (ram,0x000165fbdb6e) */
/* WARNING: Removing unreachable block (ram,0x000165fbdbca) */
/* WARNING: Removing unreachable block (ram,0x000165fbdbce) */
/* WARNING: Removing unreachable block (ram,0x000165fbdc1f) */
/* WARNING: Removing unreachable block (ram,0x000165fbdc25) */
/* WARNING: Removing unreachable block (ram,0x00015b24c8dd) */
/* WARNING: Removing unreachable block (ram,0x00015b24c907) */
/* WARNING: Removing unreachable block (ram,0x00015b24c921) */
/* WARNING: Removing unreachable block (ram,0x00015b24c972) */
/* WARNING: Removing unreachable block (ram,0x00015b24c978) */
/* WARNING: Removing unreachable block (ram,0x0001613ff74d) */

void FUN_14d876a92(void)

{
  FUN_1574972da();
  return;
}



// FUNCTION 14d876b5e FUN_14d876b5e body=134 status=ok
// SIG undefined FUN_14d876b5e(void)

void FUN_14d876b5e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  undefined8 local_res10;
  
  FUN_1651aed9c(local_res10,param_2,param_3,local_res8);
  return;
}



// FUNCTION 14d876be5 FUN_14d876be5 body=82 status=ok
// SIG undefined FUN_14d876be5(void)

void FUN_14d876be5(undefined8 param_1)

{
  undefined8 unaff_retaddr;
  
  thunk_FUN_15b642ca5(param_1,unaff_retaddr);
  return;
}



// FUNCTION 14d876ca6 FUN_14d876ca6 body=1314 status=ok
// SIG undefined FUN_14d876ca6(void)

/* WARNING: Removing unreachable block (ram,0x000165f5284b) */
/* WARNING: Removing unreachable block (ram,0x00016570aaa1) */
/* WARNING: Removing unreachable block (ram,0x00016570aaa7) */
/* WARNING: Removing unreachable block (ram,0x00016570aa77) */
/* WARNING: Removing unreachable block (ram,0x000162783ea2) */
/* WARNING: Removing unreachable block (ram,0x000162783dec) */
/* WARNING: Removing unreachable block (ram,0x000160d6ccc5) */
/* WARNING: Removing unreachable block (ram,0x000162783e91) */
/* WARNING: Removing unreachable block (ram,0x000162783e97) */
/* WARNING: Removing unreachable block (ram,0x00014d876d37) */
/* WARNING: Removing unreachable block (ram,0x00014d876dc4) */
/* WARNING: Removing unreachable block (ram,0x00014d876dca) */
/* WARNING: Removing unreachable block (ram,0x00014d876e26) */
/* WARNING: Removing unreachable block (ram,0x000165f5273b) */
/* WARNING: Removing unreachable block (ram,0x000165f52874) */
/* WARNING: Removing unreachable block (ram,0x000165f5287a) */
/* WARNING: Removing unreachable block (ram,0x00016570aa07) */
/* WARNING: Removing unreachable block (ram,0x0001621b5a21) */
/* WARNING: Removing unreachable block (ram,0x0001621b5a88) */
/* WARNING: Removing unreachable block (ram,0x0001621b5a8b) */

longlong FUN_14d876ca6(void)

{
  longlong lVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (unaff_R15 - 1 < (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15)) {
    return (-unaff_R15 - *(ulonglong *)(unaff_R13 + -0x38)) +
           (*(ulonglong *)(unaff_R13 + -0x38) | unaff_R15) * 2;
  }
  lVar1 = FUN_162f4e4f5();
  return lVar1;
}



// FUNCTION 14d876dca FUN_14d876dca body=157 status=ok
// SIG undefined FUN_14d876dca(void)

void FUN_14d876dca(void)

{
  return;
}



// FUNCTION 14d876e69 FUN_14d876e69 body=420 status=ok
// SIG undefined FUN_14d876e69(void)

void FUN_14d876e69(ulonglong param_1,undefined8 param_2,undefined8 param_3,ushort *param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  void *pvVar6;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined1 *puVar7;
  undefined8 unaff_R14;
  ulonglong uVar8;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  longlong local_res10;
  longlong local_res20;
  
  *param_4 = ~(~*param_4 & 0xfeff) - 0x100;
  *(undefined8 *)(local_res20 + -8) = uStackX_8;
  puVar7 = &LAB_1611c8352;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = unaff_RSI;
  *(undefined8 *)(local_res20 + -0x20) = unaff_retaddr;
  plVar1 = (longlong *)(local_res20 + -0x28);
  *plVar1 = local_res10;
  *(undefined4 *)plVar1 = 0x9a0a089;
  *(undefined4 *)(local_res20 + -0x24) = 0;
  lVar3 = *plVar1;
  *(undefined8 *)(local_res20 + -0x28) = 0x14d876ef9;
  FUN_1611c830e();
  *(undefined8 *)(local_res20 + -0x20) = unaff_R14;
  uVar4 = *(undefined8 *)(local_res20 + -0x18);
  *(ushort *)(local_res20 + -0x10) = *(ushort *)(local_res20 + -0x10) & 0xfeff;
  pvVar6 = ProcessEnvironmentBlock;
  uVar8 = *(ulonglong *)(local_res20 + -0x10);
  lVar5 = *(longlong *)(local_res20 + -8);
  *(undefined8 *)(lVar5 + -8) = uVar4;
  *(undefined8 *)(lVar5 + -0x10) = uVar4;
  *(ulonglong *)(lVar5 + -0x18) =
       (ulonglong)((uVar8 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar8 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar8 & 0x400) != 0) * 0x400 | (ulonglong)((uVar8 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar8 & 0x100) != 0) * 0x100 | (ulonglong)((uVar8 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar8 & 0x40) != 0) * 0x40 | (ulonglong)((uVar8 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar8 & 4) != 0) * 4 | (ulonglong)((uVar8 & 1) != 0) |
       (ulonglong)((uVar8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar8 & 0x40000) != 0) * 0x40000;
  *(void **)(lVar5 + -0x20) = pvVar6;
  *(undefined4 *)(lVar5 + -0x20) = 0x7e319cb1;
  *(undefined4 *)(lVar5 + -0x1c) = 0;
  uVar8 = *(ulonglong *)(lVar5 + -0x18);
  *(ulonglong *)(lVar5 + -0x18) =
       (ulonglong)((uVar8 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar8 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar8 & 0x400) != 0) * 0x400 | (ulonglong)((uVar8 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar8 & 0x100) != 0) * 0x100 | (ulonglong)((uVar8 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar8 & 0x40) != 0) * 0x40 | (ulonglong)((uVar8 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar8 & 4) != 0) * 4 | (ulonglong)((uVar8 & 1) != 0) |
       (ulonglong)((uVar8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar8 & 0x40000) != 0) * 0x40000;
  *(undefined1 **)(lVar5 + -0x20) = puVar7;
  *(void **)(lVar5 + -0x28) = pvVar6;
  *(undefined4 *)(lVar5 + -0x28) = 0x31a96108;
  *(undefined4 *)(lVar5 + -0x24) = 0;
  uVar8 = *(ulonglong *)(lVar5 + -0x28);
  *(undefined8 *)(lVar5 + -0x28) = unaff_RDI;
  *(longlong *)(lVar5 + -0x30) = local_res20 + -0x18 + lVar3 + -0x9a0a079;
  *(undefined8 *)(lVar5 + -0x38) = 0x14d876f86;
  FUN_16490db9b();
  *(undefined8 *)(lVar5 + -0x38) = *(undefined8 *)((uVar8 ^ 0x3506fabc) - 0x28);
  uVar8 = *(ulonglong *)(lVar5 + -0x38);
  *(ulonglong *)(lVar5 + -0x38) = uVar8;
  uVar2 = *(ulonglong *)(lVar5 + -0x38);
  *(ulonglong *)(lVar5 + -0x38) = param_1 - 1;
  *(ulonglong *)(lVar5 + -0x38) = *(longlong *)(lVar5 + -0x38) - (uVar2 ^ 0xffffffffffffffff);
  *(undefined8 *)(lVar5 + -0x38) = *(undefined8 *)(lVar5 + -0x38);
  *(ulonglong *)(lVar5 + -0x38) = *(longlong *)(lVar5 + -0x38) + (uVar8 & param_1) * -2;
  FUN_16293cf4b();
  return;
}



// FUNCTION 14d8771f5 FUN_14d8771f5 body=151 status=ok
// SIG undefined FUN_14d8771f5(void)

void FUN_14d8771f5(undefined8 param_1,undefined8 param_2,int param_3)

{
  int unaff_EDI;
  undefined4 in_R10D;
  
  FUN_1660abd3c(param_1,FUN_1660abd3c,param_3 - (unaff_EDI + 1),in_R10D);
  return;
}



// FUNCTION 14d87728c FUN_14d87728c body=163 status=ok
// SIG undefined FUN_14d87728c(void)

void FUN_14d87728c(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_R15;
  
  FUN_15b90f987(param_1,param_2 ^ unaff_R15);
  return;
}



// FUNCTION 14d877514 FUN_14d877514 body=250 status=ok
// SIG undefined FUN_14d877514(void)

/* WARNING: Removing unreachable block (ram,0x00014df3ada7) */
/* WARNING: Removing unreachable block (ram,0x00014df3ada1) */
/* WARNING: Removing unreachable block (ram,0x00014df3adb2) */
/* WARNING: Removing unreachable block (ram,0x00014d8778a2) */
/* WARNING: Removing unreachable block (ram,0x00014d877897) */
/* WARNING: Removing unreachable block (ram,0x00014d87774d) */
/* WARNING: Removing unreachable block (ram,0x000162a82d6c) */
/* WARNING: Removing unreachable block (ram,0x00014df3ace4) */
/* WARNING: Removing unreachable block (ram,0x00014df3acef) */
/* WARNING: Removing unreachable block (ram,0x00014df3acea) */

void FUN_14d877514(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  uint *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong in_RAX;
  undefined8 uVar8;
  undefined8 unaff_RBX;
  byte unaff_BPL;
  undefined8 unaff_RDI;
  undefined8 uVar9;
  byte bVar10;
  undefined8 in_R11;
  longlong unaff_R13;
  ulonglong unaff_R15;
  bool bVar11;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uVar12;
  undefined8 local_res8;
  uint local_res10 [6];
  ulonglong uStack_8;
  
  puVar2 = (uint *)((longlong)local_res10 + param_4 + -8);
  *puVar2 = 0x4db18124;
  *(undefined4 *)((longlong)local_res10 + param_4) = 0;
  *(uint *)((longlong)local_res10 + param_4) = *(uint *)((longlong)local_res10 + param_4) ^ *puVar2;
  *puVar2 = 0xee7a8bd5;
  *(undefined4 *)((longlong)local_res10 + param_4 + -4) = 0xffffffff;
  lVar7 = *(longlong *)puVar2;
  *(undefined8 *)puVar2 = unaff_RBX;
  *(undefined8 *)((longlong)local_res10 + param_4 + -0x10) = unaff_RDI;
  uVar6 = *(undefined8 *)puVar2;
  puVar3 = (undefined8 *)((longlong)local_res10 + param_4);
  *(undefined4 *)((longlong)puVar3 + lVar7 + 0x1185742f) = 0;
  uVar9 = *puVar3;
  *puVar3 = param_3;
  *(longlong *)puVar2 = in_RAX;
  *puVar2 = 0x67a0663b;
  *puVar2 = *puVar2 ^ 0x4e25dbe3;
  bVar11 = (POPCOUNT(*puVar2 & 0xff) & 1U) == 0;
  *(undefined4 *)((longlong)local_res10 + param_4 + -4) = 0;
  *(ulonglong *)((longlong)local_res10 + param_4 + -0x10) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((int)*puVar2 < 0) * 0x80 |
       (ulonglong)(*puVar2 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)bVar11 * 4 |
       (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  *(ulonglong *)((longlong)&uStack_8 + param_4) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((int)*puVar2 < 0) * 0x80 |
       (ulonglong)(*puVar2 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)bVar11 * 4 |
       (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  *(int *)((longlong)&uStack_8 + param_4) = *(int *)((longlong)&uStack_8 + param_4) << 0x19;
  *(uint *)((longlong)&uStack_8 + param_4) = *(uint *)((longlong)&uStack_8 + param_4) >> 0x1f;
  if (*(int *)((longlong)&uStack_8 + param_4) == 0) {
    FUN_16638518d();
    return;
  }
  uVar12 = *(ulonglong *)((longlong)local_res10 + param_4 + -0x10);
  *(ulonglong *)((longlong)local_res10 + param_4 + -0x10) =
       (ulonglong)((uVar12 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar12 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar12 & 0x400) != 0) * 0x400 | (ulonglong)((uVar12 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar12 & 0x100) != 0) * 0x100 | (ulonglong)((uVar12 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar12 & 0x40) != 0) * 0x40 | (ulonglong)((uVar12 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar12 & 4) != 0) * 4 | (ulonglong)((uVar12 & 1) != 0) |
       (ulonglong)((uVar12 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar12 & 0x40000) != 0) * 0x40000;
  if ((*(uint *)((longlong)local_res10 + param_4 + -0x10) >> 6 & 1) == 0) {
    *puVar2 = 0x796818e;
    *(undefined4 *)((longlong)local_res10 + param_4 + -4) = 0;
    plVar1 = (longlong *)((longlong)puVar2 + *(longlong *)puVar2 + -0x796818e);
    lVar7 = *(longlong *)(unaff_R13 + -0xa0);
    *plVar1 = 0;
    *plVar1 = *plVar1 - lVar7;
    *plVar1 = -*plVar1;
    plVar1[1] = local_res8;
    lVar7 = plVar1[2];
    plVar1[2] = plVar1[2] & unaff_R15;
    plVar1[2] = plVar1[2] << 1 | (ulonglong)(plVar1[2] < 0);
    plVar1[2] = plVar1[2] & 0xfffffffffffffffe;
    *plVar1 = in_RAX;
    *(undefined4 *)(plVar1 + -1) = 0xd95e687f;
    *(undefined4 *)((longlong)plVar1 + -4) = 0xffffffff;
    uVar12 = plVar1[-1];
    plVar1[-1] = (lVar7 + unaff_R15) - plVar1[2];
    *(longlong *)((longlong)plVar1 + (0x26a19792 - (~uVar12 + 2))) = plVar1[-1];
    *plVar1 = 0x14d8776d0;
    uVar8 = FUN_16670f2f3();
    plVar1[1] = in_R11;
    bVar10 = (~unaff_BPL | ~(byte)uVar6) + unaff_BPL + 1;
    plVar1[1] = CONCAT71((int7)((ulonglong)uVar6 >> 8),bVar10);
    bVar4 = *(byte *)(param_1 + 0x20);
    uVar6 = plVar1[1];
    cVar5 = *(char *)(param_1 + 0x20);
    plVar1[1] = uVar9;
    if ((byte)((~bVar10 | ~bVar4) + cVar5) == (byte)~(byte)uVar6) {
      plVar1[3] = uVar8;
      *(undefined4 *)(plVar1 + 3) = 0xa0b3acca;
      plVar1[2] = (longlong)&DAT_161a780af;
      return;
    }
    FUN_161a7809b();
    return;
  }
  FUN_16638518d();
  return;
}



// FUNCTION 14d87760e FUN_14d87760e body=706 status=ok
// SIG undefined FUN_14d87760e(void)

/* WARNING: Removing unreachable block (ram,0x00014df3ada7) */
/* WARNING: Removing unreachable block (ram,0x00014df3ada1) */
/* WARNING: Removing unreachable block (ram,0x00014df3adb2) */
/* WARNING: Removing unreachable block (ram,0x00014d8778a2) */
/* WARNING: Removing unreachable block (ram,0x00014d877897) */
/* WARNING: Removing unreachable block (ram,0x00014d87774d) */
/* WARNING: Removing unreachable block (ram,0x000162a82d6c) */
/* WARNING: Removing unreachable block (ram,0x00014df3ace4) */
/* WARNING: Removing unreachable block (ram,0x00014df3acef) */
/* WARNING: Removing unreachable block (ram,0x00014df3acea) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d87760e(longlong param_1)

{
  byte unaff_BL;
  byte unaff_BPL;
  byte bVar1;
  
  FUN_16670f2f3();
  bVar1 = (~unaff_BPL | ~unaff_BL) + unaff_BPL + 1;
  if ((byte)((~bVar1 | ~*(byte *)(param_1 + 0x20)) + *(char *)(param_1 + 0x20)) == (byte)~bVar1) {
    return;
  }
  FUN_161a7809b();
  return;
}



// FUNCTION 14d877938 FUN_14d877938 body=309 status=ok
// SIG undefined FUN_14d877938(void)

void FUN_14d877938(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 in_RAX;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  longlong in_R10;
  longlong lVar5;
  undefined8 in_R11;
  longlong unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 uStackX_8;
  longlong lStack_8;
  
  param_3 = param_3 - param_2;
  plVar1 = (longlong *)(&stack0x00000010 + param_3);
  lVar3 = *plVar1;
  *plVar1 = in_R10;
  *(undefined8 *)((longlong)&stack0x00000008 + param_3) = unaff_R14;
  *(undefined8 *)(&stack0x00000000 + param_3) = in_RAX;
  *(undefined8 *)((longlong)&stack0x00000008 + param_3) = uStackX_8;
  uVar4 = *(undefined8 *)((longlong)&stack0x00000008 + param_3);
  lVar5 = *plVar1;
  *plVar1 = *(longlong *)(unaff_R12 + -0x68);
  *(undefined8 *)((longlong)&stack0x00000008 + param_3) = unaff_R13;
  *(undefined8 *)(&stack0x00000000 + param_3) = unaff_R13;
  *(undefined8 *)((longlong)&stack0x00000008 + param_3) = *(undefined8 *)(unaff_R12 + -8);
  *(undefined8 *)((longlong)&lStack_8 + param_3) = 0x14d8779ae;
  uVar4 = FUN_165df3535(param_1,uVar4,lVar3);
  lVar3 = *plVar1;
  puVar2 = (undefined8 *)(lVar3 + -8);
  *puVar2 = param_4;
  *(undefined8 *)(lVar3 + -0x10) = *puVar2;
  *puVar2 = 0x31e76359;
  *(longlong *)(lVar3 + -0x18) = lVar5;
  *(undefined8 *)(lVar3 + -0x20) = unaff_R15;
  *(undefined8 *)(lVar3 + -0x28) = uVar4;
  *(undefined4 *)(lVar3 + -0x28) = 0xe6ca690;
  *(undefined4 *)(lVar3 + -0x24) = 0;
  *(undefined **)(lVar3 + -0x28) = &DAT_15b5779e1;
  *(undefined4 *)(lVar3 + -0x30) = 0x1f1224ac;
  *(undefined4 *)(lVar3 + -0x2c) = 0;
  *(undefined8 *)(lVar3 + -0x28) = in_R11;
  *(undefined8 *)(lVar3 + -0x30) = unaff_RBX;
  *(undefined8 *)(lVar3 + -0x38) = unaff_RBX;
  *(code **)(lVar3 + -0x30) = FUN_14d877a74;
  FUN_15b577964();
  return;
}



// FUNCTION 14d877a74 FUN_14d877a74 body=162 status=ok
// SIG undefined FUN_14d877a74(void)

void FUN_14d877a74(void)

{
  FUN_15b3fae4e();
  return;
}



// FUNCTION 14d877b1e FUN_14d877b1e body=298 status=ok
// SIG undefined FUN_14d877b1e(void)

/* WARNING: Removing unreachable block (ram,0x00014d877bc1) */

void FUN_14d877b1e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong in_RAX;
  undefined8 local_res8;
  
  if (-1 < in_RAX + -0xc2a35b2) {
    FUN_16177041f();
    return;
  }
  thunk_FUN_15b642ca5(param_1,local_res8,param_3);
  return;
}



// FUNCTION 14d877c4f FUN_14d877c4f body=465 status=ok
// SIG undefined FUN_14d877c4f(void)

/* WARNING: Removing unreachable block (ram,0x00014d877cde) */

undefined8 FUN_14d877c4f(ulonglong param_1)

{
  undefined8 uVar1;
  undefined8 unaff_R13;
  uint in_stack_00000008;
  ulonglong local_res20;
  
  *(undefined8 *)(&stack0x00000018 + ((ulonglong)in_stack_00000008 ^ 0x2ab967e8)) = unaff_R13;
  FUN_1618b48cc((~(~param_1 & local_res20) + local_res20) - param_1 & (~local_res20 | param_1) ^
                0xffffffffffffffff);
  FUN_1625afc71();
  uVar1 = FUN_1666a2e22();
  return uVar1;
}



// FUNCTION 14d877ebb FUN_14d877ebb body=114 status=ok
// SIG undefined FUN_14d877ebb(void)

void FUN_14d877ebb(byte param_1,undefined8 param_2,undefined8 param_3)

{
  byte in_R11B;
  
  FUN_157291c5d(param_1 + (-~in_R11B - 8) + ~(~param_1 | ~(-~in_R11B - 8)) * -2,param_2,param_3);
  return;
}



// FUNCTION 14d8781e7 FUN_14d8781e7 body=441 status=ok
// SIG undefined FUN_14d8781e7(void)

/* WARNING: Removing unreachable block (ram,0x00014d87827a) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8781e7(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_160de73e5(~(param_1 & unaff_R15) & unaff_RDI,
                ~(*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15),param_3);
  return;
}



// FUNCTION 14d8783cf FUN_14d8783cf body=590 status=ok
// SIG undefined FUN_14d8783cf(void)

/* WARNING: Removing unreachable block (ram,0x00014d87840d) */

void FUN_14d8783cf(void)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong in_R9;
  longlong unaff_retaddr;
  undefined8 uStackX_18;
  longlong in_stack_00000030;
  
  lVar1 = unaff_retaddr + in_R9 * -2;
  lVar3 = 0x591e3eb8;
  (*(code *)0x16672f392)();
  uRam000000016672f3a2 = 0xd7f748f88b49a6e0;
                    /* WARNING (jumptable): Read-only address (ram,0x00016672f3a2) is written */
                    /* WARNING: Read-only address (ram,0x00016672f3a2) is written */
  in_stack_00000030 = lVar3 - in_stack_00000030;
  puVar2 = &stack0x00000028;
  FUN_1616afdf8(lVar1,puVar2,FUN_1616afdf8,uStackX_18);
  (*(code *)0x160ca7545)(lVar1,(uint)puVar2 >> 0x10 ^ (uint)puVar2 << 0x10);
  return;
}



// FUNCTION 14d878581 FUN_14d878581 body=776 status=ok
// SIG undefined FUN_14d878581(void)

/* WARNING: Instruction at (ram,0x00014dfb77c5) overlaps instruction at (ram,0x00014dfb77c4)
    */
/* WARNING: Removing unreachable block (ram,0x000166d251f2) */
/* WARNING: Removing unreachable block (ram,0x00014d87860c) */
/* WARNING: Removing unreachable block (ram,0x00014d878618) */

undefined8 FUN_14d878581(ulonglong param_1)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  int unaff_EBX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar11;
  ulonglong uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong unaff_R15;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 unaff_retaddr;
  ulonglong local_res8 [4];
  
  uVar16 = *(ulonglong *)(unaff_RSI + -0x98);
  uVar4 = *(ulonglong *)(unaff_RSI + -0xa0);
  local_res8[0] = ~(local_res8[0] & unaff_RBP) & (local_res8[0] | unaff_RBP);
  local_res8[1] = local_res8[1] + unaff_RBP + (local_res8[1] & unaff_RBP) * -2;
  FUN_156eb38f6();
  uVar7 = *(ulonglong *)(unaff_RDI + -0x40);
  uVar12 = (param_1 - 1) - ~uVar7;
  lVar14 = ~(uVar7 | param_1) + 1 + param_1 + uVar7;
  lVar10 = uVar12 + lVar14 * -2;
  pcVar13 = FUN_1651c28ff;
  lVar11 = lVar10;
  uVar7 = FUN_1651c28ff();
  lVar9 = (param_1 - unaff_R15) - (ulonglong)((local_res8[0] & 1) != 0);
  puVar3 = (ulonglong *)((longlong)local_res8 + lVar9 + 0x10);
  uVar15 = *puVar3;
  *puVar3 = (ulonglong)((uVar15 & 0x4000) != 0) * 0x4000 |
            (ulonglong)((uVar15 & 0x800) != 0) * 0x800 | (ulonglong)((uVar15 & 0x400) != 0) * 0x400
            | (ulonglong)((uVar15 & 0x200) != 0) * 0x200 |
            (ulonglong)((uVar15 & 0x100) != 0) * 0x100 | (ulonglong)((uVar15 & 0x80) != 0) * 0x80 |
            (ulonglong)((uVar15 & 0x40) != 0) * 0x40 | (ulonglong)((uVar15 & 0x10) != 0) * 0x10 |
            (ulonglong)((uVar15 & 4) != 0) * 4 | (ulonglong)((uVar15 & 1) != 0) |
            (ulonglong)((uVar15 & 0x200000) != 0) * 0x200000 |
            (ulonglong)((uVar15 & 0x40000) != 0) * 0x40000;
  puVar1 = (ulonglong *)((longlong)local_res8 + lVar9 + 8);
  *puVar1 = uVar7;
  uVar15 = (*puVar3 | 0x800) - 0x800;
  *puVar3 = uVar15;
  uVar7 = *puVar1;
  if ((*puVar3 & 0x800) == 0) {
    *puVar3 = uVar7;
    *(longlong *)((longlong)local_res8 + lVar9 + 8) = unaff_RDI;
    puVar3 = (ulonglong *)((longlong)local_res8 + lVar9);
    *puVar3 = uVar16 ^ unaff_RBP;
    *(ulonglong *)((longlong)local_res8 + lVar9 + -8) = uVar7;
    *(undefined4 *)((longlong)local_res8 + lVar9 + -8) = 0x40504b04;
    *(undefined4 *)((longlong)local_res8 + lVar9 + -4) = 0;
    uVar16 = *(ulonglong *)((longlong)local_res8 + lVar9 + -8);
    *(void **)((longlong)local_res8 + lVar9 + -8) = ProcessEnvironmentBlock;
    lVar11 = *(longlong *)(*(longlong *)((longlong)local_res8 + lVar9 + -8) + (uVar16 ^ 0x40504b1c))
    ;
    *puVar3 = uVar12;
    *(longlong *)((longlong)local_res8 + lVar9 + -8) = lVar10;
    puVar5 = (undefined8 *)**(undefined8 **)(lVar11 + 0x20);
    *puVar3 = (ulonglong)pcVar13;
    puVar2 = (undefined8 *)((longlong)local_res8 + lVar9 + -8);
    *puVar2 = *puVar5;
    uVar8 = *puVar2;
    *(undefined8 *)((longlong)local_res8 + lVar9 + -8) = 0x1615b5dc0;
    FUN_164934735(uVar8);
    uVar8 = thunk_FUN_15b642ca5();
    return uVar8;
  }
  uVar16 = *(ulonglong *)((longlong)local_res8 + lVar9 + 0x18);
  *(ulonglong *)((longlong)local_res8 + lVar9 + 0x18) =
       (ulonglong)((uVar16 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar16 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar16 & 0x400) != 0) * 0x400 | (ulonglong)((uVar16 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar16 & 0x100) != 0) * 0x100 | (ulonglong)((uVar16 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar16 & 0x40) != 0) * 0x40 | (ulonglong)((uVar16 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar16 & 4) != 0) * 4 | (ulonglong)((uVar16 & 1) != 0) |
       (ulonglong)((uVar16 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar16 & 0x40000) != 0) * 0x40000;
  *(ulonglong *)((longlong)local_res8 + lVar9 + 0x18) =
       *(ulonglong *)((longlong)local_res8 + lVar9 + 0x18) | 1;
  if ((*(ulonglong *)((longlong)local_res8 + lVar9 + 0x18) & 1) == 0) {
    *(undefined8 *)((longlong)local_res8 + lVar9 + 0x18) = 0x14dfb77c9;
    func_0x000197c40311();
    uVar7 = (ulonglong)(uint)((int)uVar15 + unaff_EBX);
  }
  else {
    uVar7 = uVar7 + lVar14;
  }
  *(longlong *)((longlong)local_res8 + lVar9 + 0x18) = lVar11;
  *(undefined8 *)((longlong)local_res8 + lVar9 + 0x10) = 0x14dfb77de;
  uVar8 = FUN_166a953a2(uVar7);
  *(undefined8 *)((longlong)local_res8 + lVar9 + 0x10) = uVar8;
  *(ulonglong *)((longlong)local_res8 + lVar9 + 8) =
       ~((0xffffffffffffffff - unaff_RBP | uVar4) & (~uVar4 | unaff_RBP));
  uVar8 = *(undefined8 *)((longlong)local_res8 + lVar9 + 8);
  *(undefined8 *)((longlong)local_res8 + lVar9 + 8) = *(undefined8 *)(unaff_RDI + -0x88);
  uVar6 = *(undefined8 *)((longlong)local_res8 + lVar9 + 0x10);
  *(undefined8 *)((longlong)local_res8 + lVar9 + 0x10) = unaff_retaddr;
  *(undefined8 *)((longlong)local_res8 + lVar9 + 8) = unaff_retaddr;
  *(undefined8 *)((longlong)local_res8 + lVar9) = uVar6;
  *(undefined8 *)((longlong)local_res8 + lVar9 + -8) = uVar8;
  uVar8 = *(undefined8 *)((longlong)local_res8 + lVar9 + -8);
  uVar16 = *(ulonglong *)((longlong)local_res8 + lVar9);
  *(undefined8 *)((longlong)local_res8 + lVar9 + 0x10) = *(undefined8 *)(unaff_RDI + -0x90);
  lVar10 = *(longlong *)((longlong)local_res8 + lVar9 + 8);
  *(longlong *)((longlong)local_res8 + lVar9 + 8) = lVar11;
  *(longlong *)((longlong)local_res8 + lVar9) = lVar11;
  *(undefined8 *)((longlong)local_res8 + lVar9 + 8) = *(undefined8 *)(unaff_RDI + -8);
  *(undefined8 *)((longlong)local_res8 + lVar9) = *(undefined8 *)(unaff_RDI + -0x98);
  *(ulonglong *)((longlong)local_res8 + lVar9 + -8) =
       ((ulonglong)~(uint)(uVar16 >> 1) - lVar10) - (ulonglong)((uVar16 & 1) != 0);
  *(undefined8 *)(&stack0xfffffffffffffff8 + lVar9) = uVar8;
  *(undefined1 **)(&stack0xfffffffffffffff0 + lVar9) = &LAB_1566c25b6;
  return 0x7e6d;
}



// FUNCTION 14d8786b2 FUN_14d8786b2 body=293 status=ok
// SIG undefined FUN_14d8786b2(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d878747) */
/* WARNING: Removing unreachable block (ram,0x00014d87874d) */
/* WARNING: Removing unreachable block (ram,0x00014d878752) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8786b2(undefined8 param_1,undefined2 param_2)

{
  ulonglong *puVar1;
  bool bVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong in_R10;
  undefined8 local_res18;
  
  uVar4 = 0x18;
  uVar3 = FUN_160c32b06();
  puVar1 = (ulonglong *)(local_res18 + -8);
  *puVar1 = 0;
  *puVar1 = *puVar1 + in_R10;
  *(ulonglong *)(local_res18 + -0x10) = *puVar1;
  *puVar1 = 0;
  *puVar1 = *puVar1 - 0x162aceef7;
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 + 1;
  bVar2 = (uVar4 & 0x1f) == 0;
  if (bVar2 && (POPCOUNT(*puVar1 & 0xff) & 1U) == 0 ||
      !bVar2 && (POPCOUNT(0x62aceef7 << ((byte)uVar4 & 0x1f) & 0xff) & 1U) == 0) {
    out(param_2,uVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d8787d9 FUN_14d8787d9 body=296 status=ok
// SIG undefined FUN_14d8787d9(void)

/* WARNING: Removing unreachable block (ram,0x00014d878851) */
/* WARNING: Removing unreachable block (ram,0x00014d878857) */

void FUN_14d8787d9(ulonglong param_1,ulonglong param_2,undefined8 param_3)

{
  FUN_1655ac268(param_1,param_2 ^ param_1,param_3);
  return;
}



// FUNCTION 14d87899d FUN_14d87899d body=53 status=ok
// SIG undefined FUN_14d87899d(void)

void FUN_14d87899d(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014d8789d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14d878a54 FUN_14d878a54 body=91 status=ok
// SIG undefined FUN_14d878a54(void)

void FUN_14d878a54(void)

{
  FUN_1612214f3();
  return;
}



// FUNCTION 14d878ab0 FUN_14d878ab0 body=30 status=ok
// SIG undefined FUN_14d878ab0(void)

void FUN_14d878ab0(void)

{
  return;
}



// FUNCTION 14d878b45 FUN_14d878b45 body=124 status=ok
// SIG undefined FUN_14d878b45(void)

/* WARNING: Removing unreachable block (ram,0x0001628354c8) */
/* WARNING: Removing unreachable block (ram,0x0001628354bd) */
/* WARNING: Removing unreachable block (ram,0x00014d878bc3) */

longlong FUN_14d878b45(ulonglong param_1,longlong param_2)

{
  longlong lVar1;
  ushort unaff_BP;
  ushort unaff_SI;
  longlong unaff_RDI;
  undefined8 local_res8;
  int in_stack_00000038;
  
  if ((ushort)(unaff_SI + unaff_BP) < (ushort)((unaff_SI & unaff_BP) * 2)) {
    lVar1 = FUN_16283543e();
    return lVar1;
  }
  if (-1 < in_stack_00000038) {
    lVar1 = (*(code *)0x14dc0059d)(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
    return lVar1;
  }
  return local_res8 + param_2 * -2;
}



// FUNCTION 14d878bc3 FUN_14d878bc3 body=66 status=ok
// SIG undefined FUN_14d878bc3(void)

void FUN_14d878bc3(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res18;
  
  FUN_14d85d504(param_1,param_2,local_res18);
  return;
}



// FUNCTION 14d878c51 thunk_FUN_14d878c57 body=5 status=ok
// SIG undefined thunk_FUN_14d878c57(void)

void thunk_FUN_14d878c57(void)

{
  return;
}



// FUNCTION 14d878c57 FUN_14d878c57 body=171 status=ok
// SIG undefined FUN_14d878c57(void)

void FUN_14d878c57(void)

{
  return;
}



// FUNCTION 14d878d03 FUN_14d878d03 body=157 status=ok
// SIG undefined FUN_14d878d03(void)

void FUN_14d878d03(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_166a88d39(FUN_166a88d39,param_2,
                ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x88)) &
                 (~*(ulonglong *)(unaff_R13 + -0x88) | unaff_R15)),
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14d878e24 FUN_14d878e24 body=132 status=ok
// SIG undefined FUN_14d878e24(void)

void FUN_14d878e24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14d86d688(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d878ea9 FUN_14d878ea9 body=634 status=ok
// SIG undefined FUN_14d878ea9(void)

/* WARNING: Removing unreachable block (ram,0x00014d878fd5) */
/* WARNING: Removing unreachable block (ram,0x00014d878fdb) */
/* WARNING: Removing unreachable block (ram,0x000162ace216) */
/* WARNING: Removing unreachable block (ram,0x000162ace2a9) */
/* WARNING: Removing unreachable block (ram,0x000162ace2ae) */
/* WARNING: Removing unreachable block (ram,0x000162ace2b4) */
/* WARNING: Removing unreachable block (ram,0x0001614c6436) */
/* WARNING: Removing unreachable block (ram,0x000162ace344) */
/* WARNING: Removing unreachable block (ram,0x000162ace34a) */
/* WARNING: Removing unreachable block (ram,0x000162ace34f) */
/* WARNING: Removing unreachable block (ram,0x000156d91ea5) */
/* WARNING: Removing unreachable block (ram,0x00014d8790f9) */
/* WARNING: Removing unreachable block (ram,0x00014d8790ff) */
/* WARNING: Removing unreachable block (ram,0x0001651d5ba7) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000038 : 0x0001651d5b72 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d878ea9(ulonglong param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong unaff_RBX;
  ulonglong uVar2;
  longlong unaff_R15;
  undefined8 unaff_retaddr;
  longlong local_res10;
  
  *(ulonglong *)(unaff_R15 + 8) = *(ulonglong *)(unaff_R15 + 8) ^ 0xffffffffffffffff;
  *(ulonglong *)(unaff_R15 + 8) = *(ulonglong *)(unaff_R15 + 8) | param_1;
  *(ulonglong *)(unaff_R15 + 8) = -1 - (in_RAX & *(ulonglong *)(unaff_R15 + 8));
  FUN_164ae6598();
  uVar2 = ~unaff_RBX | *(ulonglong *)(local_res10 + -0xa0);
  uVar1 = ~*(ulonglong *)(local_res10 + -0xa0) | unaff_RBX;
  FUN_160c2f4c0(-1 - ((uVar1 - (uVar2 | uVar1)) + uVar2),param_2,unaff_retaddr);
  return;
}



// FUNCTION 14d879191 FUN_14d879191 body=39 status=ok
// SIG undefined FUN_14d879191(void)

void FUN_14d879191(void)

{
  return;
}



// FUNCTION 14d87922e FUN_14d87922e body=430 status=ok
// SIG undefined FUN_14d87922e(void)

void FUN_14d87922e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong unaff_retaddr;
  
  pcVar3 = FUN_16222c3e2;
  uVar1 = FUN_16222c3e2(param_1,param_2,param_3);
  uVar2 = (~uVar1 | *(ulonglong *)(unaff_retaddr + -0x80)) + uVar1 + 1;
  FUN_14e165534(uVar2,param_2,
                (uVar2 ^ 0xffffffffffffffff) &
                (~uVar1 & *(ulonglong *)(unaff_retaddr + -0x80) | uVar1),(ulonglong)pcVar3 ^ uVar1);
  FUN_15767c2fb();
  return;
}



// FUNCTION 14d879512 FUN_14d879512 body=139 status=ok
// SIG undefined FUN_14d879512(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d879512(void)

{
  return;
}



// FUNCTION 14d879623 FUN_14d879623 body=54 status=ok
// SIG undefined FUN_14d879623(void)

void FUN_14d879623(void)

{
  ulonglong unaff_RDI;
  ulonglong in_R9;
  ulonglong *unaff_R12;
  
  *unaff_R12 = ~((0xffffffffffffffff - unaff_RDI | in_R9) & (~in_R9 | unaff_RDI));
  thunk_FUN_164846ef8();
  return;
}



// FUNCTION 14d879659 FUN_14d879659 body=82 status=ok
// SIG undefined FUN_14d879659(void)

void FUN_14d879659(void)

{
  FUN_1614b13d8(0xbd);
  return;
}



// FUNCTION 14d8797df FUN_14d8797df body=880 status=ok
// SIG undefined FUN_14d8797df(void)

/* WARNING: Removing unreachable block (ram,0x0001610667ca) */
/* WARNING: Removing unreachable block (ram,0x0001610667d0) */
/* WARNING: Removing unreachable block (ram,0x00014d87988f) */
/* WARNING: Removing unreachable block (ram,0x00014d879895) */
/* WARNING: Removing unreachable block (ram,0x00016106671b) */
/* WARNING: Removing unreachable block (ram,0x00014e09135a) */

void FUN_14d8797df(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong in_RAX;
  longlong unaff_RBP;
  uint in_R10D;
  uint local_res18 [4];
  uint uStack000000000000012c;
  
  uStack000000000000012c = ~(in_R10D & *(uint *)((longlong)local_res18 + (in_RAX - unaff_RBP)));
  if (0x117 < 0xffffffffffffffffU - (longlong)&stack0x00000008) {
    FUN_165f7be13();
    return;
  }
  FUN_14de56938(param_1,FUN_14de56938,param_3);
  return;
}



// FUNCTION 14d87992e FUN_14d87992e body=128 status=ok
// SIG undefined FUN_14d87992e(void)

/* WARNING: Removing unreachable block (ram,0x000165ed9acc) */
/* WARNING: Removing unreachable block (ram,0x000165ed9ad7) */
/* WARNING: Removing unreachable block (ram,0x000165ed9ad2) */

void FUN_14d87992e(ulonglong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong unaff_RDI;
  ulonglong uVar2;
  longlong unaff_R12;
  
  uVar1 = FUN_16199a634(~(param_1 & in_RAX) & unaff_RDI,
                        -1 - (~(in_RAX & ~*(ulonglong *)(unaff_R12 + -0x78)) &
                             (~*(ulonglong *)(unaff_R12 + -0x78) | in_RAX)));
  uVar2 = *(ulonglong *)(unaff_R12 + -0x90) + uVar1;
  uVar1 = (*(ulonglong *)(unaff_R12 + -0x90) & uVar1) << 1;
  if ((uVar2 < uVar1) && (uVar1 < uVar2)) {
    return;
  }
  FUN_161ab63d0();
  return;
}



// FUNCTION 14d8799ae FUN_14d8799ae body=141 status=ok
// SIG undefined FUN_14d8799ae(void)

/* WARNING: Removing unreachable block (ram,0x000165ed9acc) */
/* WARNING: Removing unreachable block (ram,0x000165ed9ad7) */
/* WARNING: Removing unreachable block (ram,0x000165ed9ad2) */

void FUN_14d8799ae(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R12;
  
  uVar2 = *(ulonglong *)(unaff_R12 + -0x90) + in_RAX;
  uVar1 = (*(ulonglong *)(unaff_R12 + -0x90) & in_RAX) << 1;
  if ((uVar2 < uVar1) && (uVar1 < uVar2)) {
    return;
  }
  FUN_161ab63d0(~(~in_RAX | *(ulonglong *)(unaff_R12 + -0xa0)) &
                ~(0xffffffffffffffff - *(ulonglong *)(unaff_R12 + -0xa0) | in_RAX),param_2,param_3);
  return;
}



// FUNCTION 14d879a3b FUN_14d879a3b body=149 status=ok
// SIG undefined FUN_14d879a3b(void)

void FUN_14d879a3b(void)

{
  return;
}



// FUNCTION 14d879be9 FUN_14d879be9 body=285 status=ok
// SIG undefined FUN_14d879be9(void)

/* WARNING: Removing unreachable block (ram,0x00014d879c84) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d879be9(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong unaff_RDI;
  longlong in_R10;
  
  *(longlong *)(in_R10 + 8) = param_2 + param_1 + *(longlong *)(in_R10 + 8);
  if (unaff_RDI == param_5 * 2) {
    FUN_165ca0553();
    return;
  }
  FUN_157072c3e();
  return;
}



// FUNCTION 14d879d8b FUN_14d879d8b body=2 status=ok
// SIG undefined FUN_14d879d8b(void)

void FUN_14d879d8b(void)

{
  return;
}



// FUNCTION 14d879e16 FUN_14d879e16 body=159 status=ok
// SIG undefined FUN_14d879e16(void)

/* WARNING: Removing unreachable block (ram,0x00014d879e89) */
/* WARNING: Removing unreachable block (ram,0x00014d879e94) */
/* WARNING: Removing unreachable block (ram,0x00014d879e35) */
/* WARNING: Removing unreachable block (ram,0x00014d879e8f) */

undefined8 FUN_14d879e16(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_16262fe9a(param_1);
  return uVar1;
}



// FUNCTION 14d879fc9 FUN_14d879fc9 body=407 status=ok
// SIG undefined FUN_14d879fc9(void)

/* WARNING: Removing unreachable block (ram,0x00014d87a0d5) */
/* WARNING: Removing unreachable block (ram,0x00014d87a0db) */
/* WARNING: Removing unreachable block (ram,0x00014d87a058) */
/* WARNING: Removing unreachable block (ram,0x00014d87a0a4) */

void FUN_14d879fc9(ulonglong param_1)

{
  ulonglong *puVar1;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 local_res10;
  ushort local_res18;
  uint6 uStackX_1a;
  ulonglong local_res20;
  
  param_1 = local_res20 ^ param_1;
  puVar1 = (ulonglong *)(param_1 - 8);
  *(undefined8 *)(param_1 - 0x10) = unaff_R12;
  *(ulonglong *)(param_1 - 0x18) =
       (ulonglong)((local_res18 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res18 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res18 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res18 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res18 & 0x80) != 0) * 0x80 | (ulonglong)((local_res18 & 0x40) != 0) * 0x40
       | (ulonglong)((local_res18 & 0x10) != 0) * 0x10 | (ulonglong)((local_res18 & 4) != 0) * 4 |
       (ulonglong)((local_res18 & 1) != 0) | (ulonglong)((uStackX_1a & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_1a & 4) != 0) * 0x40000;
  *puVar1 = 0x7d6b1f81;
  *puVar1 = *puVar1 ^ 0x7e3935eb;
  *(undefined8 *)(param_1 - 0x10) = unaff_R13;
  *(undefined8 *)(param_1 - 0x18) = unaff_R13;
  *(undefined8 *)(param_1 - 0x20) = local_res10;
  *(code **)(param_1 - 0x10) = FUN_165c7153c;
  return;
}



// FUNCTION 14d87a181 FUN_14d87a181 body=58 status=ok
// SIG undefined FUN_14d87a181(void)

void FUN_14d87a181(void)

{
  ulonglong unaff_RSI;
  longlong unaff_R12;
  undefined8 uStackX_8;
  undefined8 local_res18 [2];
  
  *(undefined8 *)((longlong)local_res18 + unaff_R12 + (unaff_RSI ^ 0x643da1d4)) = uStackX_8;
  return;
}



// FUNCTION 14d87a2cb FUN_14d87a2cb body=291 status=ok
// SIG undefined FUN_14d87a2cb(void)

void FUN_14d87a2cb(undefined8 param_1)

{
  (*(code *)0x14dbb6bb1)(param_1);
  return;
}



// FUNCTION 14d87a33d FUN_14d87a33d body=468 status=ok
// SIG undefined FUN_14d87a33d(void)

/* WARNING: Removing unreachable block (ram,0x00014d87a3b5) */
/* WARNING: Removing unreachable block (ram,0x00014d87a3bb) */
/* WARNING: Removing unreachable block (ram,0x00014d87a470) */
/* WARNING: Removing unreachable block (ram,0x00014d87a476) */
/* WARNING: Removing unreachable block (ram,0x0001567782e6) */
/* WARNING: Removing unreachable block (ram,0x0001567782f5) */
/* WARNING: Removing unreachable block (ram,0x0001567782fd) */
/* WARNING: Removing unreachable block (ram,0x00014d87a481) */

void FUN_14d87a33d(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  
  FUN_1654070c8(~((~param_1 | *(ulonglong *)(unaff_RDI + -0x98)) &
                 (0xffffffffffffffff - *(ulonglong *)(unaff_RDI + -0x98) | param_1)),FUN_1654070c8,
                param_3,param_4);
  return;
}



// FUNCTION 14d87a514 FUN_14d87a514 body=159 status=ok
// SIG undefined FUN_14d87a514(void)

void FUN_14d87a514(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_157836e84(~((~in_RAX | *(ulonglong *)(unaff_R12 + -0x58)) &
                 (~*(ulonglong *)(unaff_R12 + -0x58) | in_RAX)),0xfffffffffffffff8,
                *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,
                *(ulonglong *)(unaff_R12 + -0x30) + in_RAX +
                (*(ulonglong *)(unaff_R12 + -0x30) & in_RAX) * -2);
  return;
}



// FUNCTION 14d87a656 FUN_14d87a656 body=171 status=ok
// SIG undefined FUN_14d87a656(void)

void FUN_14d87a656(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R12;
  longlong unaff_R14;
  undefined8 in_stack_00000020;
  
  *(undefined8 *)(unaff_R14 + unaff_R12 + -1) = param_3;
  (*(code *)0x15b449551)(param_1,param_2,in_stack_00000020,0xae2a36);
  return;
}



// FUNCTION 14d87a77a FUN_14d87a77a body=173 status=ok
// SIG undefined FUN_14d87a77a(void)

/* WARNING: Removing unreachable block (ram,0x000156467c66) */
/* WARNING: Removing unreachable block (ram,0x000156467c72) */
/* WARNING: Removing unreachable block (ram,0x000156467c7d) */
/* WARNING: Removing unreachable block (ram,0x000156467c82) */
/* WARNING: Removing unreachable block (ram,0x00014d87a817) */
/* WARNING: Removing unreachable block (ram,0x00014d87a828) */
/* WARNING: Removing unreachable block (ram,0x000156467c0a) */
/* WARNING: Removing unreachable block (ram,0x000156467c61) */
/* WARNING: Removing unreachable block (ram,0x00014d87a8a3) */
/* WARNING: Removing unreachable block (ram,0x00014d87a8af) */
/* WARNING: Removing unreachable block (ram,0x00014d87a8b5) */
/* WARNING: Removing unreachable block (ram,0x00014d87a927) */
/* WARNING: Removing unreachable block (ram,0x00014d87a928) */
/* WARNING: Removing unreachable block (ram,0x00014d87a93d) */
/* WARNING: Removing unreachable block (ram,0x00014d87a943) */
/* WARNING: Removing unreachable block (ram,0x0001570819fd) */
/* WARNING: Removing unreachable block (ram,0x00014d87a9e8) */
/* WARNING: Removing unreachable block (ram,0x00014d87a9ee) */
/* WARNING: Removing unreachable block (ram,0x00014d87a9f3) */
/* WARNING: Removing unreachable block (ram,0x000166c2f7c0) */
/* WARNING: Removing unreachable block (ram,0x000166c2f846) */
/* WARNING: Removing unreachable block (ram,0x000166c2f84d) */
/* WARNING: Removing unreachable block (ram,0x000166c2f85f) */
/* WARNING: Removing unreachable block (ram,0x000166c2f86a) */
/* WARNING: Removing unreachable block (ram,0x000166c2f8f7) */
/* WARNING: Removing unreachable block (ram,0x000166c2f8fc) */
/* WARNING: Removing unreachable block (ram,0x000166c2f902) */
/* WARNING: Removing unreachable block (ram,0x000161842d5e) */
/* WARNING: Removing unreachable block (ram,0x00014d87a823) */

undefined8 FUN_14d87a77a(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14d87a828 FUN_14d87a828 body=276 status=ok
// SIG undefined FUN_14d87a828(void)

/* WARNING: Removing unreachable block (ram,0x000156467c66) */
/* WARNING: Removing unreachable block (ram,0x000156467c72) */
/* WARNING: Removing unreachable block (ram,0x000156467c7d) */
/* WARNING: Removing unreachable block (ram,0x000156467c82) */
/* WARNING: Removing unreachable block (ram,0x00014d87a943) */
/* WARNING: Removing unreachable block (ram,0x0001570819fd) */
/* WARNING: Removing unreachable block (ram,0x00014d87a9e8) */
/* WARNING: Removing unreachable block (ram,0x00014d87a9ee) */
/* WARNING: Removing unreachable block (ram,0x00014d87a8b5) */
/* WARNING: Removing unreachable block (ram,0x00014d87a927) */
/* WARNING: Removing unreachable block (ram,0x00014d87a928) */
/* WARNING: Removing unreachable block (ram,0x00014d87a93d) */
/* WARNING: Removing unreachable block (ram,0x000166c2f7c0) */
/* WARNING: Removing unreachable block (ram,0x000166c2f846) */
/* WARNING: Removing unreachable block (ram,0x000166c2f84d) */
/* WARNING: Removing unreachable block (ram,0x000166c2f85f) */
/* WARNING: Removing unreachable block (ram,0x000166c2f86a) */
/* WARNING: Removing unreachable block (ram,0x000166c2f8f7) */
/* WARNING: Removing unreachable block (ram,0x000166c2f8fc) */
/* WARNING: Removing unreachable block (ram,0x000161842d5e) */
/* WARNING: Removing unreachable block (ram,0x000166c2f902) */
/* WARNING: Removing unreachable block (ram,0x00014d87a9f3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d87a828(void)

{
  longlong unaff_RBP;
  byte unaff_R14B;
  
  if (-1 < (char)-~(~unaff_R14B & ~*(byte *)(unaff_RBP + 0x108))) {
    FUN_156467c0a();
    return;
  }
  FUN_165f0cbbe();
  return;
}



// FUNCTION 14d87a943 FUN_14d87a943 body=174 status=ok
// SIG undefined FUN_14d87a943(void)

/* WARNING: Removing unreachable block (ram,0x00014d87a9f3) */

void FUN_14d87a943(void)

{
  longlong unaff_R13;
  
  if (-1 < *(longlong *)(unaff_R13 + -0x28)) {
    thunk_FUN_157081a03();
    return;
  }
  return;
}



// FUNCTION 14d87a9f3 FUN_14d87a9f3 body=81 status=ok
// SIG undefined FUN_14d87a9f3(void)

void FUN_14d87a9f3(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014d87aa42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14d87ab48 FUN_14d87ab48 body=142 status=ok
// SIG undefined FUN_14d87ab48(void)

void FUN_14d87ab48(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  longlong unaff_RBP;
  undefined8 in_stack_00000008;
  
  *(longlong *)(unaff_RBP + 8) = param_4 + *(longlong *)(unaff_RBP + 8);
  uVar1 = 0xffffffffffffffff - param_5 | param_1;
  FUN_15b8ad68b(FUN_15b8ad68b,param_2,-1 - (~(uVar1 & ~(~param_5 & ~param_1 | param_5)) + uVar1 + 1)
                ,in_stack_00000008);
  FUN_14d87abd7();
  return;
}



// FUNCTION 14d87abd7 FUN_14d87abd7 body=132 status=ok
// SIG undefined FUN_14d87abd7(void)

/* WARNING: Removing unreachable block (ram,0x00014d87ac0c) */

void FUN_14d87abd7(void)

{
  longlong unaff_R13;
  
  FUN_16131483f(*(undefined8 *)(unaff_R13 + -0x78),FUN_16131483f);
  return;
}



// FUNCTION 14d87ac5b FUN_14d87ac5b body=113 status=ok
// SIG undefined FUN_14d87ac5b(void)

void FUN_14d87ac5b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 local_res8 [2];
  ushort local_res18;
  longlong local_res20;
  
  *(undefined8 *)
   ((longlong)local_res8 +
   ~(((unaff_R15 | 0x760e4fe2) - 0x760e4fe2 ^ 0xffffffffffffffff) & (unaff_R15 | 0xffffffff89f1b01d)
    )) = param_4;
  local_res18 = local_res18 & 0xfeff;
  *(undefined8 *)(local_res20 + -8) = param_3;
  (*(code *)0x162e7bedc)(param_1,unaff_retaddr,0x162e7bedc,local_res8[0]);
  return;
}



// FUNCTION 14d87ad69 FUN_14d87ad69 body=145 status=ok
// SIG undefined FUN_14d87ad69(void)

void FUN_14d87ad69(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_15741c285(FUN_15741c285,8,
                ~(*(ulonglong *)(unaff_R12 + -0x80) & in_RAX) &
                (*(ulonglong *)(unaff_R12 + -0x80) | in_RAX),
                *(ulonglong *)(unaff_R12 + -0x30) + in_RAX +
                (*(ulonglong *)(unaff_R12 + -0x30) & in_RAX) * -2);
  return;
}



// FUNCTION 14d87ae00 FUN_14d87ae00 body=281 status=ok
// SIG undefined FUN_14d87ae00(void)

void FUN_14d87ae00(ulonglong param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong unaff_RDI;
  longlong lVar3;
  longlong in_R11;
  ulonglong uVar4;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0xa0);
  uVar4 = ~param_1;
  pcVar2 = FUN_165dd4819;
  FUN_165dd4819();
  lVar3 = (longlong)pcVar2 -
          (in_R11 << (~(~((byte)param_1 & 0x24) & ((byte)param_1 | 0x24)) & 0x3f));
  FUN_156edffe9(0,lVar3,lVar3,-*(longlong *)(((uVar4 + uVar1) - (uVar4 & uVar1)) + -0x60));
  return;
}



// FUNCTION 14d87b037 FUN_14d87b037 body=156 status=ok
// SIG undefined FUN_14d87b037(void)

/* WARNING: Removing unreachable block (ram,0x00014d87b0fa) */
/* WARNING: Removing unreachable block (ram,0x00014d87b0a7) */
/* WARNING: Removing unreachable block (ram,0x00014d87b10f) */
/* WARNING: Removing unreachable block (ram,0x000162afb329) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x00016109a0f2) */
/* WARNING: Removing unreachable block (ram,0x00014d87b0d3) */
/* WARNING: Removing unreachable block (ram,0x00014d87b159) */
/* WARNING: Removing unreachable block (ram,0x00016109a060) */
/* WARNING: Removing unreachable block (ram,0x00016109a0ec) */
/* WARNING: Removing unreachable block (ram,0x0001626c0966) */
/* WARNING: Removing unreachable block (ram,0x00014d87b165) */
/* WARNING: Removing unreachable block (ram,0x00014d87b17c) */
/* WARNING: Removing unreachable block (ram,0x00014d87b17f) */

undefined8 FUN_14d87b037(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d87b0d3 FUN_14d87b0d3 body=277 status=ok
// SIG undefined FUN_14d87b0d3(void)

/* WARNING: Removing unreachable block (ram,0x00014d87b0fa) */
/* WARNING: Removing unreachable block (ram,0x00014d87b10f) */
/* WARNING: Removing unreachable block (ram,0x000162afb329) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x00016109a0f2) */
/* WARNING: Removing unreachable block (ram,0x00014d87b165) */
/* WARNING: Removing unreachable block (ram,0x00014d87b17c) */
/* WARNING: Removing unreachable block (ram,0x00014d87b17f) */

undefined8 FUN_14d87b0d3(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong unaff_RDI;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0x60);
  uVar3 = *(ulonglong *)(unaff_RDI + -0x70);
  uVar5 = *(ulonglong *)(unaff_RDI + -0x68);
  uVar4 = *(ulonglong *)(unaff_RDI + -0x98);
  uVar7 = *(ulonglong *)(unaff_RDI + -8) + param_1 + (*(ulonglong *)(unaff_RDI + -8) & param_1) * -2
  ;
  uVar1 = *(ulonglong *)(unaff_RDI + -0x90) ^ param_1;
  *(undefined8 *)(uVar1 - 8) = unaff_R14;
  *(undefined8 *)(uVar1 - 0x10) = unaff_R14;
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar7 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar7 & 0x400) != 0) * 0x400 | (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar7 & 0x80) != 0) * 0x80 | (ulonglong)((uVar7 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar7 & 0x10) != 0) * 0x10 | (ulonglong)((uVar7 & 4) != 0) * 4 |
       (ulonglong)((uVar7 & 1) != 0) | (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uVar1 - 8) = 0x58db4e6;
  *(undefined8 *)(uVar1 - 0x10) = unaff_R15;
  *(undefined8 *)(uVar1 - 0x18) = unaff_R15;
  uVar6 = (*(code *)0x1654d3b23)(uVar4 ^ param_1,uVar5 ^ param_1,uVar3 ^ param_1,uVar2 ^ param_1);
  return uVar6;
}



// FUNCTION 14d87b1f2 FUN_14d87b1f2 body=578 status=ok
// SIG undefined FUN_14d87b1f2(void)

/* WARNING: Removing unreachable block (ram,0x0001662f4d33) */
/* WARNING: Removing unreachable block (ram,0x0001662f4d39) */
/* WARNING: Removing unreachable block (ram,0x0001662f4d3e) */
/* WARNING: Removing unreachable block (ram,0x00016510f8ee) */
/* WARNING: Removing unreachable block (ram,0x00016510f8f4) */
/* WARNING: Removing unreachable block (ram,0x00016510f8f9) */
/* WARNING: Removing unreachable block (ram,0x00016510f988) */
/* WARNING: Removing unreachable block (ram,0x00016510f98d) */
/* WARNING: Removing unreachable block (ram,0x00016510f993) */
/* WARNING: Removing unreachable block (ram,0x00014dc6823b) */
/* WARNING: Removing unreachable block (ram,0x00014dc682bf) */
/* WARNING: Removing unreachable block (ram,0x00014dc682c4) */
/* WARNING: Removing unreachable block (ram,0x00014dc682ca) */
/* WARNING: Removing unreachable block (ram,0x00014dc6831e) */
/* WARNING: Removing unreachable block (ram,0x00014dc68319) */
/* WARNING: Removing unreachable block (ram,0x00014dc68321) */
/* WARNING: Removing unreachable block (ram,0x00014dc68363) */
/* WARNING: Removing unreachable block (ram,0x00014dc68368) */
/* WARNING: Removing unreachable block (ram,0x00014dc6836e) */
/* WARNING: Removing unreachable block (ram,0x000164a7ae32) */
/* WARNING: Removing unreachable block (ram,0x000164a7aec0) */
/* WARNING: Removing unreachable block (ram,0x000164a7aec6) */
/* WARNING: Removing unreachable block (ram,0x0001662f4c9b) */
/* WARNING: Removing unreachable block (ram,0x000166a780b0) */
/* WARNING: Removing unreachable block (ram,0x000166c0ccf0) */
/* WARNING: Removing unreachable block (ram,0x0001656bcfe6) */
/* WARNING: Removing unreachable block (ram,0x000164a7af51) */
/* WARNING: Removing unreachable block (ram,0x000164a7af57) */
/* WARNING: Removing unreachable block (ram,0x000164a7af5c) */
/* WARNING: Removing unreachable block (ram,0x00014d87b27b) */
/* WARNING: Removing unreachable block (ram,0x00014d87b29e) */
/* WARNING: Removing unreachable block (ram,0x00014d87b2a1) */

void FUN_14d87b1f2(void)

{
  FUN_16617722f();
  return;
}



// FUNCTION 14d87b443 FUN_14d87b443 body=897 status=ok
// SIG undefined FUN_14d87b443(void)

/* WARNING: Removing unreachable block (ram,0x000161554d4d) */
/* WARNING: Removing unreachable block (ram,0x000161554d58) */
/* WARNING: Removing unreachable block (ram,0x00014d95c921) */
/* WARNING: Removing unreachable block (ram,0x000162f71f07) */
/* WARNING: Removing unreachable block (ram,0x000161554d53) */
/* WARNING: Removing unreachable block (ram,0x00014d87b55e) */
/* WARNING: Removing unreachable block (ram,0x00014d87b5e7) */
/* WARNING: Removing unreachable block (ram,0x00016677f8b9) */
/* WARNING: Removing unreachable block (ram,0x000162f71eb9) */
/* WARNING: Removing unreachable block (ram,0x00014d95c94d) */
/* WARNING: Removing unreachable block (ram,0x00014d95c971) */
/* WARNING: Removing unreachable block (ram,0x000162f71ed1) */
/* WARNING: Removing unreachable block (ram,0x000162f71f69) */
/* WARNING: Removing unreachable block (ram,0x000162f71f6f) */
/* WARNING: Removing unreachable block (ram,0x00016519b347) */
/* WARNING: Removing unreachable block (ram,0x00016519b397) */
/* WARNING: Removing unreachable block (ram,0x00016519b39a) */
/* WARNING: Removing unreachable block (ram,0x00014d87b5ed) */
/* WARNING: Removing unreachable block (ram,0x00014d95c8b7) */
/* WARNING: Removing unreachable block (ram,0x00014d95c947) */
/* WARNING: Removing unreachable block (ram,0x00014d95c942) */
/* WARNING: Removing unreachable block (ram,0x00014d87b4c8) */
/* WARNING: Removing unreachable block (ram,0x00014d95c830) */
/* WARNING: Removing unreachable block (ram,0x00014d95c8b1) */
/* WARNING: Removing unreachable block (ram,0x0001566ef485) */
/* WARNING: Removing unreachable block (ram,0x00014d87b553) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d87b443(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_162483d80();
  return uVar1;
}



// FUNCTION 14d87b680 FUN_14d87b680 body=131 status=ok
// SIG undefined FUN_14d87b680(void)

/* WARNING: Removing unreachable block (ram,0x00014d87b6f5) */
/* WARNING: Removing unreachable block (ram,0x00014d87b706) */
/* WARNING: Removing unreachable block (ram,0x00014d87b701) */

void FUN_14d87b680(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_16471be48((~*(ulonglong *)(unaff_RSI + -0x38) | ~unaff_RBP) &
                ~(~*(ulonglong *)(unaff_RSI + -0x38) & ~unaff_RBP));
  FUN_1658f340e();
  return;
}



// FUNCTION 14d87b706 thunk_FUN_14d87b70c body=5 status=ok
// SIG undefined thunk_FUN_14d87b70c(void)

void thunk_FUN_14d87b70c(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong in_R9;
  
  uVar1 = *(ulonglong *)(unaff_RSI + -0x60);
  FUN_166e0c077(0xffffffff91bb3f55,FUN_166e0c077,
                (~unaff_RBP | uVar1) & (~(~uVar1 & unaff_RBP) + unaff_RBP) - uVar1 ^
                0xffffffffffffffff,in_R9 ^ *(ulonglong *)(unaff_RSI + -0x28) ^ unaff_RBP);
  return;
}



// FUNCTION 14d87b70c FUN_14d87b70c body=154 status=ok
// SIG undefined FUN_14d87b70c(void)

void FUN_14d87b70c(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong in_R9;
  
  uVar1 = *(ulonglong *)(unaff_RSI + -0x60);
  FUN_166e0c077(0xffffffff91bb3f55,FUN_166e0c077,
                (~unaff_RBP | uVar1) & (~(~uVar1 & unaff_RBP) + unaff_RBP) - uVar1 ^
                0xffffffffffffffff,in_R9 ^ *(ulonglong *)(unaff_RSI + -0x28) ^ unaff_RBP);
  return;
}



// FUNCTION 14d87b7a6 FUN_14d87b7a6 body=302 status=ok
// SIG undefined FUN_14d87b7a6(void)

void FUN_14d87b7a6(void)

{
  (*(code *)0x164c305bc)();
  return;
}



// FUNCTION 14d87b83c FUN_14d87b83c body=319 status=ok
// SIG undefined FUN_14d87b83c(void)

void FUN_14d87b83c(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)0x15b3a05ba)
            (*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
             *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14d87ba6a FUN_14d87ba6a body=112 status=ok
// SIG undefined FUN_14d87ba6a(void)

undefined8 FUN_14d87ba6a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1627b2664();
  return uVar1;
}



// FUNCTION 14d87bba6 FUN_14d87bba6 body=448 status=ok
// SIG undefined FUN_14d87bba6(void)

/* WARNING: Removing unreachable block (ram,0x000162c6668e) */
/* WARNING: Removing unreachable block (ram,0x000162c66694) */
/* WARNING: Removing unreachable block (ram,0x000162c6671c) */
/* WARNING: Removing unreachable block (ram,0x000162c66721) */
/* WARNING: Removing unreachable block (ram,0x00014d87bcc7) */

void FUN_14d87bba6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 in_RAX;
  undefined8 uVar6;
  undefined8 in_R11;
  longlong unaff_R12;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong in_stack_00000008;
  ulonglong local_res18;
  
  puVar2 = (ulonglong *)(local_res18 ^ unaff_R15);
  puVar2[-1] = in_RAX;
  puVar2[-2] = puVar2[-1];
  puVar2[-3] = unaff_R13;
  puVar2[-1] = (ulonglong)&DAT_156a80a11;
  uVar4 = puVar2[-3];
  puVar2[-3] = 0x14d87bc29;
  uVar6 = FUN_156a809e8();
  uVar5 = puVar2[-1];
  puVar2[-1] = uVar6;
  puVar2[-2] = uVar5;
  uVar5 = *puVar2;
  *puVar2 = ~*puVar2;
  *puVar2 = *puVar2 | in_stack_00000008;
  *puVar2 = ~((~in_stack_00000008 | uVar5) & *puVar2);
  puVar2[-1] = param_3;
  puVar2[-2] = uVar4;
  uVar5 = puVar2[1];
  puVar2[1] = ~puVar2[1];
  puVar2[1] = puVar2[1] | in_stack_00000008;
  puVar2[1] = ~((~in_stack_00000008 | uVar5) & puVar2[1]);
  puVar2[2] = puVar2[2] ^ in_stack_00000008;
  puVar2[-1] = puVar2[5];
  *(undefined4 *)((longlong)puVar2 - 4) = 0;
  *(int *)(puVar2 + -1) = (int)puVar2[-1];
  if ((int)puVar2[-1] < 0) {
    *(undefined4 *)((longlong)puVar2 - 4) = 0xffffffff;
  }
  uVar5 = *puVar2;
  *(ushort *)(puVar2 + 1) = (ushort)puVar2[1] & 0xfeff;
  lVar3 = puVar2[2];
  plVar1 = (longlong *)(lVar3 + -8);
  *plVar1 = unaff_R12;
  *(undefined8 *)(lVar3 + -0x10) = unaff_retaddr;
  *(longlong *)(lVar3 + -0x10) = *plVar1;
  *(undefined8 *)(lVar3 + -0x18) = in_R11;
  *(undefined8 *)(lVar3 + -8) = 0;
  *plVar1 = *plVar1 + 0x15756dc1c;
  *(ulonglong *)(lVar3 + -0x18) = uVar5;
  *(undefined4 *)(lVar3 + -0x20) = 0x54c8e809;
  *(undefined4 *)(lVar3 + -0x1c) = 0;
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d87bd68 FUN_14d87bd68 body=188 status=ok
// SIG undefined FUN_14d87bd68(void)

ulonglong FUN_14d87bd68(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  return *(ulonglong *)(unaff_RSI + -0x40) ^ unaff_RBP;
}



// FUNCTION 14d87bf4d thunk_FUN_14d87bf53 body=5 status=ok
// SIG undefined thunk_FUN_14d87bf53(void)

void thunk_FUN_14d87bf53(void)

{
  longlong unaff_R13;
  
  FUN_15b4bf3bf(*(undefined8 *)(0x2f65 - ~(unaff_R13 - 0x2fdeU)));
  return;
}



// FUNCTION 14d87bf53 FUN_14d87bf53 body=185 status=ok
// SIG undefined FUN_14d87bf53(void)

void FUN_14d87bf53(void)

{
  longlong unaff_R13;
  
  FUN_15b4bf3bf(*(undefined8 *)(0x2f65 - ~(unaff_R13 - 0x2fdeU)));
  return;
}



// FUNCTION 14d87c0ff FUN_14d87c0ff body=154 status=ok
// SIG undefined FUN_14d87c0ff(void)

/* WARNING: Removing unreachable block (ram,0x00014d87c116) */

void FUN_14d87c0ff(undefined8 param_1,undefined8 param_2)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  undefined7 uStack_f;
  
  uStack_f = (undefined7)
             (*(ulonglong *)(unaff_RSI + -0x68) + unaff_RBP +
              ((~*(ulonglong *)(unaff_RSI + -0x68) | ~unaff_RBP) ^ 0xffffffffffffffff) * -2 >> 8);
  (*(code *)0x14d86241d)
            (0x1e,param_2,CONCAT71(uStack_f,0x81) ^ 0x79,*(undefined8 *)(unaff_RSI + -0x28));
  return;
}



// FUNCTION 14d87c19a FUN_14d87c19a body=55 status=ok
// SIG undefined FUN_14d87c19a(void)

void FUN_14d87c19a(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RBP;
  ulonglong in_R10;
  undefined8 uStackX_18;
  
  *(ulonglong *)(unaff_RBP + 8) = *(ulonglong *)(unaff_RBP + 8) | 0xffffffffc1b8edfe;
  *(ulonglong *)(unaff_RBP + 8) = -1 - (in_R10 & *(ulonglong *)(unaff_RBP + 8));
  FUN_14d7c53e2(param_1,param_2,uStackX_18);
  return;
}



// FUNCTION 14d87c245 FUN_14d87c245 body=22 status=ok
// SIG undefined FUN_14d87c245(void)

undefined8 FUN_14d87c245(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14d87c35b FUN_14d87c35b body=114 status=ok
// SIG undefined FUN_14d87c35b(void)

void FUN_14d87c35b(void)

{
  FUN_16514b958();
  FUN_15751fa1b();
  return;
}



// FUNCTION 14d87c3cd FUN_14d87c3cd body=31 status=ok
// SIG undefined FUN_14d87c3cd(void)

void FUN_14d87c3cd(undefined8 param_1)

{
  FUN_15751fa1b(param_1,0x14d7bfd75);
  return;
}



// FUNCTION 14d87c3ec FUN_14d87c3ec body=133 status=ok
// SIG undefined FUN_14d87c3ec(void)

/* WARNING: Removing unreachable block (ram,0x00014d87c468) */
/* WARNING: Removing unreachable block (ram,0x00014d87c473) */
/* WARNING: Removing unreachable block (ram,0x00014d87c4e2) */
/* WARNING: Removing unreachable block (ram,0x00014d87c4e7) */
/* WARNING: Removing unreachable block (ram,0x000160fd81d4) */
/* WARNING: Removing unreachable block (ram,0x00014d87c4ed) */
/* WARNING: Removing unreachable block (ram,0x00014d87c50e) */
/* WARNING: Removing unreachable block (ram,0x000162e4fce7) */
/* WARNING: Removing unreachable block (ram,0x00014d87c572) */
/* WARNING: Removing unreachable block (ram,0x00014d87c578) */
/* WARNING: Removing unreachable block (ram,0x00014d87c57d) */
/* WARNING: Removing unreachable block (ram,0x000156417e72) */
/* WARNING: Removing unreachable block (ram,0x000156417ef4) */
/* WARNING: Removing unreachable block (ram,0x000156417ef9) */
/* WARNING: Removing unreachable block (ram,0x000156417eff) */
/* WARNING: Removing unreachable block (ram,0x000156417f04) */
/* WARNING: Removing unreachable block (ram,0x000156417faf) */
/* WARNING: Removing unreachable block (ram,0x000156417fb5) */
/* WARNING: Removing unreachable block (ram,0x0001648eecd2) */
/* WARNING: Removing unreachable block (ram,0x00014d87c605) */
/* WARNING: Removing unreachable block (ram,0x00014d87c611) */
/* WARNING: Removing unreachable block (ram,0x00014d87c616) */
/* WARNING: Removing unreachable block (ram,0x00014d87c6b8) */
/* WARNING: Removing unreachable block (ram,0x000156484ef8) */
/* WARNING: Removing unreachable block (ram,0x000156484efe) */
/* WARNING: Removing unreachable block (ram,0x0001655c627b) */
/* WARNING: Removing unreachable block (ram,0x0001655c6281) */
/* WARNING: Removing unreachable block (ram,0x0001655c61fd) */
/* WARNING: Removing unreachable block (ram,0x000162824652) */
/* WARNING: Removing unreachable block (ram,0x0001628246c0) */
/* WARNING: Removing unreachable block (ram,0x0001628246c6) */
/* WARNING: Removing unreachable block (ram,0x0001628246cb) */
/* WARNING: Removing unreachable block (ram,0x000156484e73) */
/* WARNING: Removing unreachable block (ram,0x000156c3c7fd) */
/* WARNING: Removing unreachable block (ram,0x00014d87c6bd) */
/* WARNING: Removing unreachable block (ram,0x00014d87c6ce) */
/* WARNING: Removing unreachable block (ram,0x00014d87c7df) */
/* WARNING: Removing unreachable block (ram,0x00014d87c7e4) */
/* WARNING: Removing unreachable block (ram,0x000161cff246) */
/* WARNING: Removing unreachable block (ram,0x000161cff271) */
/* WARNING: Removing unreachable block (ram,0x000161cff276) */
/* WARNING: Removing unreachable block (ram,0x000161cff2bf) */
/* WARNING: Removing unreachable block (ram,0x000161cff2c4) */
/* WARNING: Removing unreachable block (ram,0x000161cff2ca) */
/* WARNING: Removing unreachable block (ram,0x000160e778a4) */
/* WARNING: Removing unreachable block (ram,0x00014d87c7ea) */
/* WARNING: Removing unreachable block (ram,0x00014d87c879) */
/* WARNING: Removing unreachable block (ram,0x00014d87c87e) */
/* WARNING: Removing unreachable block (ram,0x00014d87c884) */
/* WARNING: Removing unreachable block (ram,0x00014d87c901) */
/* WARNING: Removing unreachable block (ram,0x00015b5caff4) */
/* WARNING: Removing unreachable block (ram,0x00014d87c6c3) */
/* WARNING: Removing unreachable block (ram,0x000160f2c206) */
/* WARNING: Removing unreachable block (ram,0x000160f2c20c) */
/* WARNING: Removing unreachable block (ram,0x000160f2c273) */
/* WARNING: Removing unreachable block (ram,0x000160f2c27e) */
/* WARNING: Removing unreachable block (ram,0x000160f2c279) */
/* WARNING: Removing unreachable block (ram,0x0001658b2b37) */
/* WARNING: Removing unreachable block (ram,0x000165445fbe) */
/* WARNING: Removing unreachable block (ram,0x0001628ae67b) */
/* WARNING: Removing unreachable block (ram,0x000165446041) */
/* WARNING: Removing unreachable block (ram,0x000165446047) */
/* WARNING: Removing unreachable block (ram,0x00016544604c) */
/* WARNING: Removing unreachable block (ram,0x000165446066) */
/* WARNING: Removing unreachable block (ram,0x000165446061) */
/* WARNING: Removing unreachable block (ram,0x0001654460b8) */
/* WARNING: Removing unreachable block (ram,0x0001654460ca) */
/* WARNING: Removing unreachable block (ram,0x00014d87c46e) */
/* WARNING: Removing unreachable block (ram,0x000160f2c174) */
/* WARNING: Removing unreachable block (ram,0x000160f2c17a) */
/* WARNING: Removing unreachable block (ram,0x000160f2c17f) */
/* WARNING: Removing unreachable block (ram,0x000160f2c19c) */

undefined8 FUN_14d87c3ec(undefined8 param_1,longlong param_2)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  if (param_2 == 0x95d4f) {
    return in_RAX;
  }
  if (param_2 == 0x95d50) {
    uVar1 = FUN_15751fa1b(param_1,0x14d7a8343);
    return uVar1;
  }
  if (param_2 == 0x9634f) {
    uVar1 = FUN_165569502();
    return uVar1;
  }
  if (param_2 != 0x96350) {
    return in_RAX;
  }
  return in_RAX;
}



// FUNCTION 14d87c473 FUN_14d87c473 body=265 status=ok
// SIG undefined FUN_14d87c473(void)

/* WARNING: Removing unreachable block (ram,0x000161cff271) */
/* WARNING: Removing unreachable block (ram,0x00014d87c6bd) */
/* WARNING: Removing unreachable block (ram,0x00014d87c6c3) */
/* WARNING: Removing unreachable block (ram,0x00014d87c6ce) */
/* WARNING: Removing unreachable block (ram,0x00014d87c7df) */
/* WARNING: Removing unreachable block (ram,0x00014d87c7e4) */
/* WARNING: Removing unreachable block (ram,0x000161cff246) */
/* WARNING: Removing unreachable block (ram,0x000161cff276) */
/* WARNING: Removing unreachable block (ram,0x000161cff2bf) */
/* WARNING: Removing unreachable block (ram,0x000161cff2c4) */
/* WARNING: Removing unreachable block (ram,0x000161cff2ca) */
/* WARNING: Removing unreachable block (ram,0x000160e778a4) */
/* WARNING: Removing unreachable block (ram,0x00014d87c7ea) */
/* WARNING: Removing unreachable block (ram,0x00014d87c879) */
/* WARNING: Removing unreachable block (ram,0x00014d87c87e) */
/* WARNING: Removing unreachable block (ram,0x00015b5caff4) */
/* WARNING: Removing unreachable block (ram,0x00014d87c884) */
/* WARNING: Removing unreachable block (ram,0x00014d87c901) */
/* WARNING: Removing unreachable block (ram,0x0001655c61fd) */
/* WARNING: Removing unreachable block (ram,0x000162824652) */
/* WARNING: Removing unreachable block (ram,0x0001628246c0) */
/* WARNING: Removing unreachable block (ram,0x0001628246c6) */
/* WARNING: Removing unreachable block (ram,0x0001628246cb) */
/* WARNING: Removing unreachable block (ram,0x000156484e73) */
/* WARNING: Removing unreachable block (ram,0x000156484ef8) */
/* WARNING: Removing unreachable block (ram,0x000156484efe) */
/* WARNING: Removing unreachable block (ram,0x000156c3c7fd) */
/* WARNING: Removing unreachable block (ram,0x0001655c627b) */
/* WARNING: Removing unreachable block (ram,0x0001655c6281) */
/* WARNING: Removing unreachable block (ram,0x00014d87c4e7) */
/* WARNING: Removing unreachable block (ram,0x00014d87c4ed) */
/* WARNING: Removing unreachable block (ram,0x00014d87c50e) */
/* WARNING: Removing unreachable block (ram,0x000162e4fce7) */
/* WARNING: Removing unreachable block (ram,0x00014d87c572) */
/* WARNING: Removing unreachable block (ram,0x00014d87c578) */
/* WARNING: Removing unreachable block (ram,0x00014d87c57d) */
/* WARNING: Removing unreachable block (ram,0x000156417e72) */
/* WARNING: Removing unreachable block (ram,0x000156417ef4) */
/* WARNING: Removing unreachable block (ram,0x000156417ef9) */
/* WARNING: Removing unreachable block (ram,0x000156417eff) */
/* WARNING: Removing unreachable block (ram,0x000156417f04) */
/* WARNING: Removing unreachable block (ram,0x000156417faf) */
/* WARNING: Removing unreachable block (ram,0x000156417fb5) */
/* WARNING: Removing unreachable block (ram,0x0001648eecd2) */
/* WARNING: Removing unreachable block (ram,0x00014d87c605) */
/* WARNING: Removing unreachable block (ram,0x00014d87c611) */
/* WARNING: Removing unreachable block (ram,0x00014d87c616) */
/* WARNING: Removing unreachable block (ram,0x00014d87c6b8) */
/* WARNING: Removing unreachable block (ram,0x000160fd81d4) */

undefined8 FUN_14d87c473(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_160fd81d4();
  return uVar1;
}



// FUNCTION 14d87c57d FUN_14d87c57d body=332 status=ok
// SIG undefined FUN_14d87c57d(void)

/* WARNING: Removing unreachable block (ram,0x0001655c61fd) */
/* WARNING: Removing unreachable block (ram,0x0001655c627b) */
/* WARNING: Removing unreachable block (ram,0x0001655c6281) */
/* WARNING: Removing unreachable block (ram,0x000162824652) */
/* WARNING: Removing unreachable block (ram,0x0001628246c0) */
/* WARNING: Removing unreachable block (ram,0x0001628246c6) */
/* WARNING: Removing unreachable block (ram,0x0001628246cb) */
/* WARNING: Removing unreachable block (ram,0x000156484e73) */
/* WARNING: Removing unreachable block (ram,0x000156484ef8) */
/* WARNING: Removing unreachable block (ram,0x000156484efe) */
/* WARNING: Removing unreachable block (ram,0x000156c3c7fd) */
/* WARNING: Removing unreachable block (ram,0x00014d87c6bd) */
/* WARNING: Removing unreachable block (ram,0x00014d87c6ce) */
/* WARNING: Removing unreachable block (ram,0x00014d87c7df) */
/* WARNING: Removing unreachable block (ram,0x00014d87c7e4) */
/* WARNING: Removing unreachable block (ram,0x000161cff246) */
/* WARNING: Removing unreachable block (ram,0x00014d87c7ea) */
/* WARNING: Removing unreachable block (ram,0x00014d87c879) */
/* WARNING: Removing unreachable block (ram,0x00014d87c87e) */
/* WARNING: Removing unreachable block (ram,0x00014d87c884) */
/* WARNING: Removing unreachable block (ram,0x00014d87c901) */
/* WARNING: Removing unreachable block (ram,0x00015b5caff4) */
/* WARNING: Removing unreachable block (ram,0x000161cff271) */
/* WARNING: Removing unreachable block (ram,0x000161cff276) */
/* WARNING: Removing unreachable block (ram,0x000161cff2bf) */
/* WARNING: Removing unreachable block (ram,0x000161cff2c4) */
/* WARNING: Removing unreachable block (ram,0x000161cff2ca) */
/* WARNING: Removing unreachable block (ram,0x000160e778a4) */
/* WARNING: Removing unreachable block (ram,0x00014d87c6c3) */
/* WARNING: Removing unreachable block (ram,0x000156417f04) */
/* WARNING: Removing unreachable block (ram,0x000156417faf) */
/* WARNING: Removing unreachable block (ram,0x0001648eecd2) */
/* WARNING: Removing unreachable block (ram,0x000156417fb5) */
/* WARNING: Removing unreachable block (ram,0x00014d87c616) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d87c57d(void)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  longlong unaff_R15;
  ulonglong unaff_retaddr;
  
  if (unaff_R15 == 0) {
    uVar1 = FUN_156417e72();
    return uVar1;
  }
  if ((*(ulonglong *)(unaff_RDI + -0x88) & unaff_retaddr) * 2 <=
      *(ulonglong *)(unaff_RDI + -0x88) + unaff_retaddr) {
    uVar1 = FUN_14dd6d204();
    return uVar1;
  }
  uVar1 = FUN_14dd6d204();
  return uVar1;
}



// FUNCTION 14d87c6ce FUN_14d87c6ce body=571 status=ok
// SIG undefined FUN_14d87c6ce(void)

/* WARNING: Removing unreachable block (ram,0x000156484ef8) */
/* WARNING: Removing unreachable block (ram,0x000156484efe) */
/* WARNING: Removing unreachable block (ram,0x0001655c61fd) */
/* WARNING: Removing unreachable block (ram,0x0001655c627b) */
/* WARNING: Removing unreachable block (ram,0x0001655c6281) */
/* WARNING: Removing unreachable block (ram,0x000162824652) */
/* WARNING: Removing unreachable block (ram,0x0001628246c0) */
/* WARNING: Removing unreachable block (ram,0x0001628246c6) */
/* WARNING: Removing unreachable block (ram,0x0001628246cb) */
/* WARNING: Removing unreachable block (ram,0x000156484e73) */
/* WARNING: Removing unreachable block (ram,0x000156c3c7fd) */
/* WARNING: Removing unreachable block (ram,0x000161cff271) */
/* WARNING: Removing unreachable block (ram,0x00014d87c7ea) */
/* WARNING: Removing unreachable block (ram,0x00014d87c879) */
/* WARNING: Removing unreachable block (ram,0x00014d87c87e) */
/* WARNING: Removing unreachable block (ram,0x00015b5caff4) */
/* WARNING: Removing unreachable block (ram,0x000161cff2ca) */
/* WARNING: Removing unreachable block (ram,0x00014d87c884) */

undefined8 FUN_14d87c6ce(ulonglong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar3 = *(ulonglong *)(0xaff3 - ~(unaff_RDI - 0xb054U));
  uVar1 = FUN_1653a2c15(param_1,uVar3 + param_1,FUN_1653a2c15,uVar3 & param_1);
  uVar3 = ~*(ulonglong *)(unaff_R13 + -0x48);
  uVar3 = (uVar3 + ~unaff_R15) - (uVar3 & ~unaff_R15);
  lVar2 = *(ulonglong *)(unaff_R13 + -0x48) + unaff_R15 + ~uVar3 * -2;
  if (lVar2 < 0) {
    uVar1 = FUN_161cff246(uVar3,lVar2);
    return uVar1;
  }
  if (-1 < (longlong)
           (*(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
           (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2)) {
    return uVar1;
  }
  uVar1 = FUN_160e778a4();
  return uVar1;
}



// FUNCTION 14d87c910 FUN_14d87c910 body=146 status=ok
// SIG undefined FUN_14d87c910(void)

/* WARNING: Instruction at (ram,0x00014d87ca15) overlaps instruction at (ram,0x00014d87ca14)
    */
/* WARNING: Removing unreachable block (ram,0x00014d87c9ba) */
/* WARNING: Removing unreachable block (ram,0x00015b038e92) */
/* WARNING: Removing unreachable block (ram,0x00014d87c9a3) */
/* WARNING: Removing unreachable block (ram,0x00014d87c9bb) */
/* WARNING: Removing unreachable block (ram,0x00014d87c9c9) */
/* WARNING: Removing unreachable block (ram,0x00014d87ca15) */
/* WARNING: Removing unreachable block (ram,0x00014d87ca14) */
/* WARNING: Removing unreachable block (ram,0x00014d87ca20) */

undefined8 FUN_14d87c910(ulonglong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x60);
  FUN_165638660(param_1,FUN_165638660,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                ~((~uVar1 & ~param_1 | uVar1) & (~uVar1 | param_1)));
  uVar2 = FUN_16254f407();
  return uVar2;
}



// FUNCTION 14d87c9a3 FUN_14d87c9a3 body=181 status=ok
// SIG undefined FUN_14d87c9a3(void)

/* WARNING: Instruction at (ram,0x00014d87ca15) overlaps instruction at (ram,0x00014d87ca14)
    */
/* WARNING: Removing unreachable block (ram,0x00014d87c9ba) */
/* WARNING: Removing unreachable block (ram,0x00014d87ca14) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000014 : 0x00014d87ca3f */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d87c9a3(int param_1)

{
  ulonglong uVar1;
  ulonglong local_res8;
  uint local_res10 [6];
  
  uVar1 = local_res8 ^ 0xadd0441;
  *(undefined4 *)((longlong)local_res10 + uVar1) = 0;
  *(uint *)((longlong)local_res10 + uVar1) = *(uint *)((longlong)local_res10 + uVar1) ^ 0x39c3c1dd;
  *(uint *)((longlong)local_res10 + uVar1) = *(uint *)((longlong)local_res10 + uVar1) ^ 0x39c3c1dd;
  *(int *)((longlong)local_res10 + uVar1) = *(int *)((longlong)local_res10 + uVar1) - param_1;
  *(uint *)((longlong)local_res10 + uVar1) = ~*(uint *)((longlong)local_res10 + uVar1);
  *(int *)((longlong)local_res10 + uVar1) = *(int *)((longlong)local_res10 + uVar1) + 1;
  FUN_1610aadeb();
  return;
}



// FUNCTION 14d87cb59 FUN_14d87cb59 body=280 status=ok
// SIG undefined FUN_14d87cb59(void)

void FUN_14d87cb59(ulonglong param_1)

{
  longlong unaff_RDI;
  
  (*(code *)0x15b3de0c2)
            (param_1,~param_1,
             *(ulonglong *)(unaff_RDI + -0x40) + param_1 +
             (*(ulonglong *)(unaff_RDI + -0x40) & param_1) * -2,*(undefined8 *)(unaff_RDI + -0x60));
  return;
}



// FUNCTION 14d87cc7c FUN_14d87cc7c body=35 status=ok
// SIG undefined FUN_14d87cc7c(void)

void FUN_14d87cc7c(void)

{
  return;
}



// FUNCTION 14d87cd15 FUN_14d87cd15 body=86 status=ok
// SIG undefined FUN_14d87cd15(void)

/* WARNING: Removing unreachable block (ram,0x00014d87cd30) */

void FUN_14d87cd15(longlong param_1)

{
  uint unaff_retaddr;
  int local_res8 [8];
  
  *(uint *)((longlong)local_res8 + param_1) =
       *(int *)((longlong)local_res8 + param_1) + (unaff_retaddr ^ 0x2b64ab55);
  return;
}



// FUNCTION 14d87cee0 FUN_14d87cee0 body=129 status=ok
// SIG undefined FUN_14d87cee0(void)

void FUN_14d87cee0(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_stack_00000008;
  ulonglong in_stack_00000010;
  
  FUN_156847b57(~(in_stack_00000010 & param_1) & (param_2 | param_1),in_stack_00000008,param_3,
                param_4);
  return;
}



// FUNCTION 14d87cf62 FUN_14d87cf62 body=14 status=ok
// SIG undefined FUN_14d87cf62(void)

void FUN_14d87cf62(void)

{
  return;
}



// FUNCTION 14d87d1a3 FUN_14d87d1a3 body=305 status=ok
// SIG undefined FUN_14d87d1a3(void)

/* WARNING: Removing unreachable block (ram,0x00014d87d225) */
/* WARNING: Removing unreachable block (ram,0x00014d87d22b) */
/* WARNING: Removing unreachable block (ram,0x0001647aea43) */

void FUN_14d87d1a3(void)

{
  longlong unaff_RSI;
  ulonglong in_R9;
  ulonglong unaff_R14;
  
  *(ulonglong *)(unaff_RSI + 8) = ~(0xffffffffffffffff - (unaff_R14 ^ 0xffffffffffffffff | ~in_R9));
  FUN_1647aea43();
  return;
}



// FUNCTION 14d87d2d5 FUN_14d87d2d5 body=147 status=ok
// SIG undefined FUN_14d87d2d5(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d87d2d5(void)

{
  FUN_156fa939e();
  return;
}



// FUNCTION 14d87d36a FUN_14d87d36a body=152 status=ok
// SIG undefined FUN_14d87d36a(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d87d36a(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong unaff_RDI;
  undefined8 in_R9;
  undefined8 in_R11;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  bool bVar11;
  byte bVar12;
  bool bVar13;
  bool bVar14;
  byte bVar15;
  byte bVar16;
  bool bVar17;
  byte bVar18;
  bool bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  bool bVar23;
  ulonglong uVar24;
  
  puVar2 = *(undefined8 **)(unaff_RDI + -8);
  uVar24 = *(ulonglong *)(unaff_RDI + -0x98);
  FUN_14df675f9();
  bVar16 = (uVar24 & 0x4000) != 0;
  bVar15 = (uVar24 & 0x800) != 0;
  bVar12 = (uVar24 & 0x200) != 0;
  bVar10 = (uVar24 & 0x100) != 0;
  bVar9 = (uVar24 & 0x80) != 0;
  bVar8 = (uVar24 & 0x40) != 0;
  bVar6 = (uVar24 & 0x10) != 0;
  bVar5 = (uVar24 & 4) != 0;
  bVar4 = (uVar24 & 1) != 0;
  bVar22 = (uVar24 & 0x200000) != 0;
  bVar18 = (uVar24 & 0x40000) != 0;
  bVar21 = 0;
  bVar20 = 0;
  pcVar3 = (code *)swi(0x2e);
  (*pcVar3)();
  *puVar2 = in_R9;
  puVar2[-1] = in_R9;
  puVar2[-2] = (ulonglong)(bVar16 & 1) * 0x4000 | (ulonglong)(bVar15 & 1) * 0x800 |
               (ulonglong)((uVar24 & 0x400) != 0) * 0x400 | (ulonglong)(bVar12 & 1) * 0x200 |
               (ulonglong)(bVar10 & 1) * 0x100 | (ulonglong)(bVar9 & 1) * 0x80 |
               (ulonglong)(bVar8 & 1) * 0x40 | (ulonglong)(bVar6 & 1) * 0x10 |
               (ulonglong)(bVar5 & 1) * 4 | (ulonglong)(bVar4 & 1) |
               (ulonglong)(bVar22 & 1) * 0x200000 | (ulonglong)(bVar21 & 1) * 0x100000 |
               (ulonglong)(bVar20 & 1) * 0x80000 | (ulonglong)(bVar18 & 1) * 0x40000;
  uVar24 = puVar2[-2];
  bVar17 = (uVar24 & 0x4000) != 0;
  bVar14 = (uVar24 & 0x400) != 0;
  bVar13 = (uVar24 & 0x200) != 0;
  bVar11 = (uVar24 & 0x100) != 0;
  bVar7 = (uVar24 & 0x10) != 0;
  bVar23 = (uVar24 & 0x200000) != 0;
  bVar19 = (uVar24 & 0x40000) != 0;
  puVar2[-2] = (ulonglong)bVar17 * 0x4000 | (ulonglong)((uVar24 & 0x800) != 0) * 0x800 |
               (ulonglong)bVar14 * 0x400 | (ulonglong)bVar13 * 0x200 | (ulonglong)bVar11 * 0x100 |
               (ulonglong)((uVar24 & 0x80) != 0) * 0x80 | (ulonglong)((uVar24 & 0x40) != 0) * 0x40 |
               (ulonglong)bVar7 * 0x10 | (ulonglong)((uVar24 & 4) != 0) * 4 |
               (ulonglong)((uVar24 & 1) != 0) | (ulonglong)bVar23 * 0x200000 |
               (ulonglong)bVar19 * 0x40000;
  puVar2[-3] = 0x10d665bc;
  uVar24 = puVar2[-3];
  lVar1 = puVar2[-3];
  puVar2[-3] = puVar2[-3] + -0xd878778;
  puVar2[-3] = (ulonglong)bVar17 * 0x4000 | (ulonglong)SBORROW8(lVar1,0xd878778) * 0x800 |
               (ulonglong)bVar14 * 0x400 | (ulonglong)bVar13 * 0x200 | (ulonglong)bVar11 * 0x100 |
               (ulonglong)((longlong)puVar2[-3] < 0) * 0x80 | (ulonglong)(puVar2[-3] == 0) * 0x40 |
               (ulonglong)bVar7 * 0x10 | (ulonglong)((POPCOUNT(puVar2[-3] & 0xff) & 1U) == 0) * 4 |
               (ulonglong)(uVar24 < 0xd878778) | (ulonglong)bVar23 * 0x200000 |
               (ulonglong)bVar19 * 0x40000;
  uVar24 = puVar2[-2];
  puVar2[-2] = in_R11;
  puVar2[-3] = (ulonglong)((uVar24 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar24 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar24 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar24 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar24 & 0x100) != 0) * 0x100 | (ulonglong)((uVar24 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar24 & 0x40) != 0) * 0x40 | (ulonglong)((uVar24 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar24 & 4) != 0) * 4 | (ulonglong)((uVar24 & 1) != 0) |
               (ulonglong)((uVar24 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar24 & 0x40000) != 0) * 0x40000;
  *puVar2 = 0x34ede44;
  FUN_14d85d504();
  return;
}



// FUNCTION 14d87d402 FUN_14d87d402 body=125 status=ok
// SIG undefined FUN_14d87d402(void)

void FUN_14d87d402(void)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 in_R9;
  undefined8 in_R11;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  bool bVar10;
  byte bVar11;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  byte bVar15;
  bool bVar16;
  byte bVar17;
  bool bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  bool bVar22;
  ulonglong uVar23;
  ulonglong uStackX_10;
  undefined8 *local_res18;
  
  bVar15 = (uStackX_10 & 0x4000) != 0;
  bVar14 = (uStackX_10 & 0x800) != 0;
  bVar11 = (uStackX_10 & 0x200) != 0;
  bVar9 = (uStackX_10 & 0x100) != 0;
  bVar8 = (uStackX_10 & 0x80) != 0;
  bVar7 = (uStackX_10 & 0x40) != 0;
  bVar5 = (uStackX_10 & 0x10) != 0;
  bVar4 = (uStackX_10 & 4) != 0;
  bVar3 = (uStackX_10 & 1) != 0;
  bVar21 = (uStackX_10 & 0x200000) != 0;
  bVar17 = (uStackX_10 & 0x40000) != 0;
  bVar20 = 0;
  bVar19 = 0;
  pcVar2 = (code *)swi(0x2e);
  (*pcVar2)();
  *local_res18 = in_R9;
  local_res18[-1] = in_R9;
  local_res18[-2] =
       (ulonglong)(bVar15 & 1) * 0x4000 | (ulonglong)(bVar14 & 1) * 0x800 |
       (ulonglong)((uStackX_10 & 0x400) != 0) * 0x400 | (ulonglong)(bVar11 & 1) * 0x200 |
       (ulonglong)(bVar9 & 1) * 0x100 | (ulonglong)(bVar8 & 1) * 0x80 |
       (ulonglong)(bVar7 & 1) * 0x40 | (ulonglong)(bVar5 & 1) * 0x10 | (ulonglong)(bVar4 & 1) * 4 |
       (ulonglong)(bVar3 & 1) | (ulonglong)(bVar21 & 1) * 0x200000 |
       (ulonglong)(bVar20 & 1) * 0x100000 | (ulonglong)(bVar19 & 1) * 0x80000 |
       (ulonglong)(bVar17 & 1) * 0x40000;
  uVar23 = local_res18[-2];
  bVar16 = (uVar23 & 0x4000) != 0;
  bVar13 = (uVar23 & 0x400) != 0;
  bVar12 = (uVar23 & 0x200) != 0;
  bVar10 = (uVar23 & 0x100) != 0;
  bVar6 = (uVar23 & 0x10) != 0;
  bVar22 = (uVar23 & 0x200000) != 0;
  bVar18 = (uVar23 & 0x40000) != 0;
  local_res18[-2] =
       (ulonglong)bVar16 * 0x4000 | (ulonglong)((uVar23 & 0x800) != 0) * 0x800 |
       (ulonglong)bVar13 * 0x400 | (ulonglong)bVar12 * 0x200 | (ulonglong)bVar10 * 0x100 |
       (ulonglong)((uVar23 & 0x80) != 0) * 0x80 | (ulonglong)((uVar23 & 0x40) != 0) * 0x40 |
       (ulonglong)bVar6 * 0x10 | (ulonglong)((uVar23 & 4) != 0) * 4 | (ulonglong)((uVar23 & 1) != 0)
       | (ulonglong)bVar22 * 0x200000 | (ulonglong)bVar18 * 0x40000;
  local_res18[-3] = 0x10d665bc;
  uVar23 = local_res18[-3];
  lVar1 = local_res18[-3];
  local_res18[-3] = local_res18[-3] + -0xd878778;
  local_res18[-3] =
       (ulonglong)bVar16 * 0x4000 | (ulonglong)SBORROW8(lVar1,0xd878778) * 0x800 |
       (ulonglong)bVar13 * 0x400 | (ulonglong)bVar12 * 0x200 | (ulonglong)bVar10 * 0x100 |
       (ulonglong)((longlong)local_res18[-3] < 0) * 0x80 | (ulonglong)(local_res18[-3] == 0) * 0x40
       | (ulonglong)bVar6 * 0x10 | (ulonglong)((POPCOUNT(local_res18[-3] & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(uVar23 < 0xd878778) | (ulonglong)bVar22 * 0x200000 | (ulonglong)bVar18 * 0x40000;
  uVar23 = local_res18[-2];
  local_res18[-2] = in_R11;
  local_res18[-3] =
       (ulonglong)((uVar23 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar23 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar23 & 0x400) != 0) * 0x400 | (ulonglong)((uVar23 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar23 & 0x100) != 0) * 0x100 | (ulonglong)((uVar23 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar23 & 0x40) != 0) * 0x40 | (ulonglong)((uVar23 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar23 & 4) != 0) * 4 | (ulonglong)((uVar23 & 1) != 0) |
       (ulonglong)((uVar23 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar23 & 0x40000) != 0) * 0x40000;
  *local_res18 = 0x34ede44;
  FUN_14d85d504();
  return;
}



// FUNCTION 14d87d5fb FUN_14d87d5fb body=311 status=ok
// SIG undefined FUN_14d87d5fb(void)

/* WARNING: Removing unreachable block (ram,0x00014d87d61c) */

void FUN_14d87d5fb(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  short unaff_DI;
  short *in_R10;
  undefined8 in_R11;
  undefined8 uVar3;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
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
  undefined8 local_res8;
  ulonglong uStackX_20;
  
  *in_R10 = unaff_DI + *in_R10;
  bVar12 = (uStackX_20 & 0x4000) != 0;
  bVar10 = (uStackX_20 & 0x200) != 0;
  bVar9 = (uStackX_20 & 0x100) != 0;
  bVar6 = (uStackX_20 & 0x10) != 0;
  bVar16 = (uStackX_20 & 0x200000) != 0;
  bVar13 = (uStackX_20 & 0x40000) != 0;
  bVar15 = 0;
  bVar14 = 0;
  *(undefined8 *)(param_5 + -8) = in_R11;
  *(undefined **)(param_5 + -0x10) = &DAT_16271decf;
  *(undefined **)(param_5 + -0x18) = &DAT_16271decf;
  *(undefined8 *)(param_5 + -0x20) = local_res8;
  *(undefined8 *)(param_5 + -0x20) = param_4;
  *(undefined8 *)(param_5 + -0x10) = *(undefined8 *)(param_5 + -8);
  uVar3 = *(undefined8 *)(param_5 + -0x18);
  *(undefined8 *)(param_5 + -8) = 0;
  puVar1 = (ulonglong *)(param_5 + -8);
  bVar4 = 0;
  bVar11 = 0;
  *puVar1 = *puVar1;
  bVar8 = (longlong)*puVar1 < 0;
  bVar7 = *puVar1 == 0;
  bVar5 = (POPCOUNT(*puVar1 & 0xff) & 1U) == 0;
  *(undefined8 *)(param_5 + -0x18) = unaff_R15;
  *(undefined8 *)(param_5 + -0x20) = unaff_R13;
  *(undefined8 *)(param_5 + -0x28) = 0x14d87d6a5;
  uVar2 = FUN_16271de7f();
  *(ulonglong *)(param_5 + -0x20) =
       (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)(bVar11 & 1) * 0x800 |
       (ulonglong)((uStackX_20 & 0x400) != 0) * 0x400 | (ulonglong)(bVar10 & 1) * 0x200 |
       (ulonglong)(bVar9 & 1) * 0x100 | (ulonglong)(bVar8 & 1) * 0x80 |
       (ulonglong)(bVar7 & 1) * 0x40 | (ulonglong)(bVar6 & 1) * 0x10 | (ulonglong)(bVar5 & 1) * 4 |
       (ulonglong)(bVar4 & 1) | (ulonglong)(bVar16 & 1) * 0x200000 |
       (ulonglong)(bVar15 & 1) * 0x100000 | (ulonglong)(bVar14 & 1) * 0x80000 |
       (ulonglong)(bVar13 & 1) * 0x40000;
  if ((*(uint *)(param_5 + -0x20) >> 6 & 1) != 0) {
    *(undefined8 *)(param_5 + -0x20) = uVar3;
    puVar1 = (ulonglong *)(param_5 + -0x28);
    *puVar1 = uVar2;
    *(ulonglong *)(param_5 + -0x30) = uVar2;
    *(undefined4 *)(param_5 + -0x30) = 0x5aedb911;
    *(undefined4 *)(param_5 + -0x2c) = 0;
    *(undefined8 *)(param_5 + -0x30) = unaff_R12;
    *(undefined8 *)(param_5 + -0x20) = param_2;
    *puVar1 = 0;
    *puVar1 = *puVar1 ^ 0x307b5406;
    *puVar1 = *puVar1 ^ 0x307b5406;
    *(undefined4 *)puVar1 = 0xa69ba03c;
    FUN_162508606(param_1,FUN_162508606);
    return;
  }
  FUN_1568055bc();
  return;
}



// FUNCTION 14d87d7e9 FUN_14d87d7e9 body=178 status=ok
// SIG undefined FUN_14d87d7e9(void)

void FUN_14d87d7e9(void)

{
  return;
}



// FUNCTION 14d87d9d0 FUN_14d87d9d0 body=153 status=ok
// SIG undefined FUN_14d87d9d0(void)

void FUN_14d87d9d0(void)

{
  FUN_164c5e83b();
  return;
}



// FUNCTION 14d87da6a FUN_14d87da6a body=300 status=ok
// SIG undefined FUN_14d87da6a(void)

/* WARNING: Removing unreachable block (ram,0x00014d87db6b) */

undefined1 FUN_14d87da6a(ulonglong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  longlong unaff_RBX;
  ulonglong uVar6;
  longlong unaff_RDI;
  undefined8 unaff_R13;
  ulonglong local_res8;
  longlong local_res10;
  
  uVar6 = (param_4 - unaff_RBX) + param_2;
  pcVar5 = FUN_161a2c67c;
  uVar3 = FUN_161a2c67c(param_1,FUN_161a2c67c,
                        (-~param_1 - (~*(ulonglong *)(unaff_RDI + -0x70) + 2)) +
                        (*(ulonglong *)(unaff_RDI + -0x70) & param_1) * -2,~uVar6);
  LOCK();
  uVar4 = DAT_14d7bdad4;
  UNLOCK();
  DAT_14d7bdad4 = uVar3;
  *(undefined8 *)(local_res10 + -8) = unaff_R13;
  puVar1 = (undefined8 *)(local_res10 + -0x10);
  *(ulonglong *)(local_res10 + -0x18) = uVar6;
  *puVar1 = unaff_R13;
  *(undefined4 *)(local_res10 + -0x18) = 0x34fd68d;
  *(undefined4 *)(local_res10 + -0x14) = 0;
  lVar2 = *(longlong *)(local_res10 + -0x18);
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((local_res8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res8 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res8 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res8 & 0x100) != 0) * 0x100 | (ulonglong)((local_res8 & 0x80) != 0) * 0x80
       | (ulonglong)((local_res8 & 0x40) != 0) * 0x40 | (ulonglong)((local_res8 & 0x10) != 0) * 0x10
       | (ulonglong)((local_res8 & 4) != 0) * 4 | (ulonglong)((local_res8 & 1) != 0) |
       (ulonglong)((local_res8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((local_res8 & 0x40000) != 0) * 0x40000;
  *(longlong *)(local_res10 + -8) = lVar2 + -0x78b45d;
  *puVar1 = pcVar5;
  *(code **)(local_res10 + -0x18) = pcVar5;
  *puVar1 = FUN_165c7153c;
  return uVar4;
}



// FUNCTION 14d87db71 FUN_14d87db71 body=27 status=ok
// SIG undefined FUN_14d87db71(void)

void FUN_14d87db71(void)

{
  undefined8 uStackX_8;
  
  thunk_FUN_15b642ca5(uStackX_8);
  return;
}



// FUNCTION 14d87dcad FUN_14d87dcad body=204 status=ok
// SIG undefined FUN_14d87dcad(void)

void FUN_14d87dcad(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_RBP;
  longlong unaff_RDI;
  ulonglong uVar1;
  
  uVar1 = ~((param_2 - (unaff_RBP | param_2)) + unaff_RDI);
  FUN_156ba21e5(param_1);
  if (uVar1 != 0x3cbd6) {
    return;
  }
  FUN_166a62797();
  return;
}



// FUNCTION 14d87df97 FUN_14d87df97 body=972 status=ok
// SIG undefined FUN_14d87df97(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d87df97(undefined8 param_1,ulonglong param_2)

{
  ushort uVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong unaff_R13;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong unaff_R15;
  ulonglong uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  ulonglong uStackX_10;
  longlong local_res18;
  
  uVar4 = (~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x48)) &
          (~*(ulonglong *)(unaff_R13 + -0x48) | unaff_R15);
  uVar5 = ~uVar4;
  pcVar2 = FUN_1647c7479;
  FUN_1647c7479(FUN_1647c7479,param_2,*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15);
  FUN_15b786727(pcVar2);
  uVar10 = *(ulonglong *)(uVar5 - 0x78) ^ 0x1f830bf9;
  uVar6 = 0xffffffffffffffa8;
  uVar7 = *(ulonglong *)(uVar5 - 0x58) | 0x1f830bf9;
  uVar9 = ~(*(ulonglong *)(uVar5 - 0x58) & 0x1f830bf9);
  lVar8 = (uVar7 - (uVar9 | uVar7)) + uVar9;
  FUN_1664d27cd();
  lVar3 = (uVar4 | 0xffffffffffffffff - (param_2 & uVar10)) + uVar5 + 1;
  uVar1 = FUN_1646c5b15();
  _DAT_ffffffffffffff88 = (-0x101 - (uVar1 | (ushort)lVar8)) + _DAT_ffffffffffffff88;
  bVar20 = (uStackX_10 & 0x4000) != 0;
  bVar19 = (uStackX_10 & 0x800) != 0;
  bVar18 = (uStackX_10 & 0x400) != 0;
  bVar17 = (uStackX_10 & 0x200) != 0;
  bVar16 = (uStackX_10 & 0x100) != 0;
  bVar15 = (uStackX_10 & 0x80) != 0;
  bVar14 = (uStackX_10 & 0x40) != 0;
  bVar13 = (uStackX_10 & 0x10) != 0;
  bVar12 = (uStackX_10 & 4) != 0;
  bVar11 = (uStackX_10 & 1) != 0;
  bVar22 = (uStackX_10 & 0x200000) != 0;
  bVar21 = (uStackX_10 & 0x40000) != 0;
  *(undefined8 *)(local_res18 + -8) = uVar6;
  *(undefined8 *)(local_res18 + -0x10) = uVar6;
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)bVar20 * 0x4000 | (ulonglong)bVar19 * 0x800 | (ulonglong)bVar18 * 0x400 |
       (ulonglong)bVar17 * 0x200 | (ulonglong)bVar16 * 0x100 | (ulonglong)bVar15 * 0x80 |
       (ulonglong)bVar14 * 0x40 | (ulonglong)bVar13 * 0x10 | (ulonglong)bVar12 * 4 |
       (ulonglong)bVar11 | (ulonglong)bVar22 * 0x200000 | (ulonglong)bVar21 * 0x40000;
  *(ulonglong *)(local_res18 + -0x20) =
       (ulonglong)bVar20 * 0x4000 | (ulonglong)bVar19 * 0x800 | (ulonglong)bVar18 * 0x400 |
       (ulonglong)bVar17 * 0x200 | (ulonglong)bVar16 * 0x100 | (ulonglong)bVar15 * 0x80 |
       (ulonglong)bVar14 * 0x40 | (ulonglong)bVar13 * 0x10 | (ulonglong)bVar12 * 4 |
       (ulonglong)bVar11 | (ulonglong)bVar22 * 0x200000 | (ulonglong)bVar21 * 0x40000;
  uVar4 = *(ulonglong *)(local_res18 + -0x18);
  bVar20 = (uVar4 & 0x4000) != 0;
  bVar19 = (uVar4 & 0x800) != 0;
  bVar18 = (uVar4 & 0x400) != 0;
  bVar17 = (uVar4 & 0x200) != 0;
  bVar16 = (uVar4 & 0x100) != 0;
  bVar15 = (uVar4 & 0x80) != 0;
  bVar14 = (uVar4 & 0x40) != 0;
  bVar13 = (uVar4 & 0x10) != 0;
  bVar12 = (uVar4 & 4) != 0;
  bVar11 = (uVar4 & 1) != 0;
  bVar22 = (uVar4 & 0x200000) != 0;
  bVar21 = (uVar4 & 0x40000) != 0;
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)bVar20 * 0x4000 | (ulonglong)bVar19 * 0x800 | (ulonglong)bVar18 * 0x400 |
       (ulonglong)bVar17 * 0x200 | (ulonglong)bVar16 * 0x100 | (ulonglong)bVar15 * 0x80 |
       (ulonglong)bVar14 * 0x40 | (ulonglong)bVar13 * 0x10 | (ulonglong)bVar12 * 4 |
       (ulonglong)bVar11 | (ulonglong)bVar22 * 0x200000 | (ulonglong)bVar21 * 0x40000;
  *(longlong *)(local_res18 + -0x20) = lVar3;
  *(ulonglong *)(local_res18 + -0x28) =
       (ulonglong)bVar20 * 0x4000 | (ulonglong)bVar19 * 0x800 | (ulonglong)bVar18 * 0x400 |
       (ulonglong)bVar17 * 0x200 | (ulonglong)bVar16 * 0x100 | (ulonglong)bVar15 * 0x80 |
       (ulonglong)bVar14 * 0x40 | (ulonglong)bVar13 * 0x10 | (ulonglong)bVar12 * 4 |
       (ulonglong)bVar11 | (ulonglong)bVar22 * 0x200000 | (ulonglong)bVar21 * 0x40000;
  *(undefined8 *)(local_res18 + -8) = 0x1569f42;
  *(undefined8 *)(local_res18 + -0x10) = 0;
  *(undefined8 *)(local_res18 + -0x18) = 0;
  *(undefined8 *)(local_res18 + -0x20) = 0x14d87e2ce;
  FUN_1617299e7();
  *(ulonglong *)(local_res18 + -0x20) = uVar10;
  *(undefined8 *)(local_res18 + -0x20) = *(undefined8 *)(lVar8 + -0x30);
  *(undefined8 *)(local_res18 + -0x20) = 0x14d87e360;
  FUN_164b1eb66();
  FUN_1662eee07();
  return;
}



// FUNCTION 14d87e5dc FUN_14d87e5dc body=704 status=ok
// SIG undefined FUN_14d87e5dc(void)

/* WARNING: Removing unreachable block (ram,0x00014d87e7fd) */
/* WARNING: Removing unreachable block (ram,0x00014d87e67a) */
/* WARNING: Removing unreachable block (ram,0x00014d87e71f) */
/* WARNING: Removing unreachable block (ram,0x00014d87e742) */
/* WARNING: Removing unreachable block (ram,0x00014d87e7b5) */
/* WARNING: Removing unreachable block (ram,0x00014d87e7ad) */

void FUN_14d87e5dc(void)

{
  FUN_16169a496();
  return;
}



// FUNCTION 14d87ea8f FUN_14d87ea8f body=134 status=ok
// SIG undefined FUN_14d87ea8f(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d87ea8f(void)

{
  undefined4 unaff_EDI;
  undefined8 in_R10;
  undefined8 uStackX_10;
  
  uStackX_10 = CONCAT44(unaff_EDI,(undefined4)uStackX_10);
  *(undefined8 *)(&stack0xfffffffff8050478 + uStackX_10) = in_R10;
  FUN_1646cfafb();
  return;
}



// FUNCTION 14d87eb16 FUN_14d87eb16 body=153 status=ok
// SIG undefined FUN_14d87eb16(void)

/* WARNING: Removing unreachable block (ram,0x00014d87ebab) */
/* WARNING: Removing unreachable block (ram,0x00014d87eba0) */

void FUN_14d87eb16(ulonglong param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 unaff_R12;
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
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  undefined8 uStackX_10;
  ushort uStackX_18;
  uint6 uStackX_1a;
  ulonglong local_res20;
  
  puVar3 = (undefined8 *)(param_2 + ((~param_1 | local_res20) + param_1 + 1) * -2);
  bVar12 = (uStackX_18 & 0x4000) != 0;
  bVar11 = (uStackX_18 & 0x800) != 0;
  bVar10 = (uStackX_18 & 0x200) != 0;
  bVar9 = 0;
  bVar8 = (uStackX_18 & 0x80) != 0;
  bVar7 = (uStackX_18 & 0x40) != 0;
  bVar6 = (uStackX_18 & 0x10) != 0;
  bVar5 = (uStackX_18 & 4) != 0;
  bVar4 = (uStackX_18 & 1) != 0;
  bVar16 = (uStackX_1a & 0x20) != 0;
  bVar13 = (uStackX_1a & 4) != 0;
  bVar15 = 0;
  bVar14 = 0;
  pcVar1 = (code *)swi(0x2e);
  uVar2 = (*pcVar1)(uStackX_10,local_res8);
  *puVar3 = uVar2;
  puVar3[-1] = uVar2;
  puVar3[-2] = (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)(bVar11 & 1) * 0x800 |
               (ulonglong)((uStackX_18 & 0x400) != 0) * 0x400 | (ulonglong)(bVar10 & 1) * 0x200 |
               (ulonglong)(bVar9 & 1) * 0x100 | (ulonglong)(bVar8 & 1) * 0x80 |
               (ulonglong)(bVar7 & 1) * 0x40 | (ulonglong)(bVar6 & 1) * 0x10 |
               (ulonglong)(bVar5 & 1) * 4 | (ulonglong)(bVar4 & 1) |
               (ulonglong)(bVar16 & 1) * 0x200000 | (ulonglong)(bVar15 & 1) * 0x100000 |
               (ulonglong)(bVar14 & 1) * 0x80000 | (ulonglong)(bVar13 & 1) * 0x40000;
  uVar17 = puVar3[-2];
  puVar3[-2] = (ulonglong)((uVar17 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar17 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar17 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar17 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar17 & 0x100) != 0) * 0x100 | (ulonglong)((uVar17 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar17 & 0x40) != 0) * 0x40 | (ulonglong)((uVar17 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar17 & 4) != 0) * 4 | (ulonglong)((uVar17 & 1) != 0) |
               (ulonglong)((uVar17 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar17 & 0x40000) != 0) * 0x40000;
  puVar3[-3] = unaff_R12;
  uVar17 = puVar3[-2];
  puVar3[-2] = unaff_retaddr;
  puVar3[-3] = (ulonglong)((uVar17 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar17 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar17 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar17 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar17 & 0x100) != 0) * 0x100 | (ulonglong)((uVar17 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar17 & 0x40) != 0) * 0x40 | (ulonglong)((uVar17 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar17 & 4) != 0) * 4 | (ulonglong)((uVar17 & 1) != 0) |
               (ulonglong)((uVar17 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar17 & 0x40000) != 0) * 0x40000;
  *puVar3 = 0x55b563e;
  FUN_165c7153c();
  return;
}



// FUNCTION 14d87ebb1 FUN_14d87ebb1 body=320 status=ok
// SIG undefined FUN_14d87ebb1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14d87ebb1(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_162ee78a7();
  return uVar1;
}



// FUNCTION 14d87ed6b FUN_14d87ed6b body=1969 status=ok
// SIG undefined FUN_14d87ed6b(void)

/* WARNING: Removing unreachable block (ram,0x000164bf7c4a) */
/* WARNING: Removing unreachable block (ram,0x000164bf7c50) */
/* WARNING: Removing unreachable block (ram,0x00014d87efe0) */
/* WARNING: Removing unreachable block (ram,0x00014d87efeb) */
/* WARNING: Removing unreachable block (ram,0x000161cc4538) */
/* WARNING: Removing unreachable block (ram,0x000161cc453e) */
/* WARNING: Removing unreachable block (ram,0x00014d87eea6) */
/* WARNING: Removing unreachable block (ram,0x000161cc44a6) */
/* WARNING: Removing unreachable block (ram,0x00014d87ee7f) */
/* WARNING: Removing unreachable block (ram,0x00014d87eeac) */
/* WARNING: Removing unreachable block (ram,0x00014d87eeb2) */
/* WARNING: Removing unreachable block (ram,0x000156f51dbf) */
/* WARNING: Removing unreachable block (ram,0x00014d87ef48) */
/* WARNING: Removing unreachable block (ram,0x00014d87ef54) */
/* WARNING: Removing unreachable block (ram,0x00014d87efe6) */
/* WARNING: Removing unreachable block (ram,0x000164bf7bd8) */
/* WARNING: Removing unreachable block (ram,0x000164bf7c45) */
/* WARNING: Removing unreachable block (ram,0x000166d267eb) */
/* WARNING: Removing unreachable block (ram,0x00014d87ee0d) */

undefined8 FUN_14d87ed6b(undefined8 param_1,undefined8 param_2,ushort *param_3)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R13;
  ulonglong uVar4;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  ulonglong uStackX_10;
  longlong local_res18;
  
  uVar1 = *param_3;
  *param_3 = 0;
  *param_3 = *param_3 + ((uVar1 | 0x100) - 0x100);
  *(undefined8 *)(local_res18 + -8) = unaff_retaddr;
  *(undefined8 *)(local_res18 + -8) = in_RAX;
  *(undefined8 *)(local_res18 + -0x10) = in_RAX;
  *(undefined8 *)(local_res18 + -0x18) = in_RAX;
  *(undefined4 *)(local_res18 + -0x18) = 0x63f32cc;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RDI;
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
  *(undefined4 *)(local_res18 + -0x14) = 0;
  uVar4 = *(ulonglong *)(local_res18 + -0x28);
  if ((uVar4 & 0x40) != 0) {
    lVar2 = *(longlong *)(local_res18 + -0x18);
    *(ulonglong *)(local_res18 + -0x18) =
         (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 | 0x40
         | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 | (ulonglong)((uVar4 & 4) != 0) * 4 |
         (ulonglong)((uVar4 & 1) != 0) | (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
    uVar4 = *(ulonglong *)(local_res18 + -0x18);
    *(undefined8 *)(local_res18 + -0x18) = in_R10;
    *(ulonglong *)(local_res18 + -0x20) =
         (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)((uVar4 & 1) != 0) |
         (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
    *(longlong *)(local_res18 + -8) = lVar2 + -0x5657c3c;
    *(undefined8 *)(local_res18 + -0x28cf) = unaff_R13;
    *(undefined8 *)(local_res18 + -0x28d7) = unaff_R13;
    *(undefined **)(local_res18 + -0x28cf) = &DAT_156ef2e4a;
    return *(undefined8 *)(local_res18 + -0x10);
  }
  uVar3 = FUN_16297d0a7(&ExceptionList,param_2,local_res8);
  return uVar3;
}



// FUNCTION 14d87efeb FUN_14d87efeb body=125 status=ok
// SIG undefined FUN_14d87efeb(void)

void FUN_14d87efeb(undefined8 param_1,undefined8 param_2)

{
  FUN_1616e7dd6(param_1,param_2);
  return;
}



// FUNCTION 14d87f100 FUN_14d87f100 body=51 status=ok
// SIG undefined FUN_14d87f100(void)

void FUN_14d87f100(void)

{
  return;
}



// FUNCTION 14d87f241 FUN_14d87f241 body=38 status=ok
// SIG undefined FUN_14d87f241(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d87f241(void)

{
  char cVar1;
  undefined7 in_register_00000001;
  undefined4 *unaff_RBX;
  
  cVar1 = in(0x1e);
  LOCK();
  *unaff_RBX = (int)unaff_RBX;
  UNLOCK();
  *(char *)CONCAT71(in_register_00000001,cVar1) =
       *(char *)CONCAT71(in_register_00000001,cVar1) + cVar1;
  *(char *)CONCAT71(in_register_00000001,cVar1) =
       *(char *)CONCAT71(in_register_00000001,cVar1) + cVar1;
  *(char *)CONCAT71(in_register_00000001,cVar1) =
       *(char *)CONCAT71(in_register_00000001,cVar1) + cVar1;
  *(char *)CONCAT71(in_register_00000001,cVar1) =
       *(char *)CONCAT71(in_register_00000001,cVar1) + cVar1;
  *(char *)CONCAT71(in_register_00000001,cVar1) =
       *(char *)CONCAT71(in_register_00000001,cVar1) + cVar1;
  *(char *)CONCAT71(in_register_00000001,cVar1) =
       *(char *)CONCAT71(in_register_00000001,cVar1) + cVar1;
  *(char *)CONCAT71(in_register_00000001,cVar1) =
       *(char *)CONCAT71(in_register_00000001,cVar1) + cVar1;
  *(char *)CONCAT71(in_register_00000001,cVar1) =
       *(char *)CONCAT71(in_register_00000001,cVar1) + cVar1;
  *(char *)CONCAT71(in_register_00000001,cVar1) =
       *(char *)CONCAT71(in_register_00000001,cVar1) + cVar1;
  *(char *)CONCAT71(in_register_00000001,cVar1) =
       *(char *)CONCAT71(in_register_00000001,cVar1) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d87f369 FUN_14d87f369 body=308 status=ok
// SIG undefined FUN_14d87f369(void)

undefined8 FUN_14d87f369(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  ulonglong unaff_RDI;
  ulonglong in_R10;
  undefined8 in_stack_00000008;
  longlong local_res10;
  ulonglong in_stack_00000018;
  longlong local_res20;
  
  FUN_165aa25a6(in_stack_00000008,param_2,param_3,local_res20 + in_RAX,
                (~in_stack_00000018 | 0xffffffffffffffff - in_RAX) & ~(~unaff_RDI & ~in_RAX));
  FUN_15b5b1297(in_R10,FUN_15b5b1297,0xffffffffffffffd0,
                *(ulonglong *)(local_res10 + -0x40) + in_R10 +
                (*(ulonglong *)(local_res10 + -0x40) & in_R10) * -2);
  return 0x37d3d4e;
}



// FUNCTION 14d87f4a0 FUN_14d87f4a0 body=78 status=ok
// SIG undefined FUN_14d87f4a0(void)

undefined8 FUN_14d87f4a0(void)

{
  return 0x37d3d4e;
}



// FUNCTION 14d87f5c5 FUN_14d87f5c5 body=89 status=ok
// SIG undefined FUN_14d87f5c5(void)

undefined8 FUN_14d87f5c5(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d87f6cd FUN_14d87f6cd body=143 status=ok
// SIG undefined FUN_14d87f6cd(void)

/* WARNING: Removing unreachable block (ram,0x00014d87f7ac) */
/* WARNING: Removing unreachable block (ram,0x00014d87f74b) */

void FUN_14d87f6cd(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong unaff_R12;
  
  lVar3 = *(ulonglong *)(unaff_R12 + -0x30) + in_RAX +
          (*(ulonglong *)(unaff_R12 + -0x30) & in_RAX) * -2;
  uVar4 = *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX;
  uVar1 = FUN_16679aa47(FUN_16679aa47,0xde82e671,uVar4,lVar3);
  uVar2 = 0xffffffffffffffff - *(longlong *)(unaff_R12 + -0x58);
  FUN_165f6afcf(uVar2 & uVar1,uVar2 + uVar1,lVar3 + (uVar4 & uVar1) * -2);
  return;
}



// FUNCTION 14d87f75d FUN_14d87f75d body=276 status=ok
// SIG undefined FUN_14d87f75d(void)

/* WARNING: Removing unreachable block (ram,0x00014d87f7ac) */

void FUN_14d87f75d(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_RBX;
  longlong unaff_R12;
  
  uVar1 = 0xffffffffffffffff - *(longlong *)(unaff_R12 + -0x58);
  FUN_165f6afcf(uVar1 & in_RAX,uVar1 + in_RAX,unaff_RBX + (param_3 & in_RAX) * -2);
  return;
}



// FUNCTION 14d87f996 FUN_14d87f996 body=136 status=ok
// SIG undefined FUN_14d87f996(void)

/* WARNING: Removing unreachable block (ram,0x00015b02d932) */
/* WARNING: Removing unreachable block (ram,0x00015b02d938) */
/* WARNING: Removing unreachable block (ram,0x0001617ae0fb) */
/* WARNING: Removing unreachable block (ram,0x0001617ae101) */
/* WARNING: Removing unreachable block (ram,0x0001617ae15c) */
/* WARNING: Removing unreachable block (ram,0x0001617ae160) */
/* WARNING: Removing unreachable block (ram,0x00015b02d93d) */
/* WARNING: Removing unreachable block (ram,0x000161b1645d) */
/* WARNING: Removing unreachable block (ram,0x00014d87fab8) */

void FUN_14d87f996(ulonglong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 unaff_EBX;
  longlong lVar11;
  longlong unaff_RDI;
  undefined8 in_R10;
  code *pcVar12;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 local_res8;
  ulonglong local_res18;
  
  uVar7 = *(ulonglong *)(unaff_RDI + -0x98) ^ param_1;
  uVar2 = ~(local_res18 & param_1) & (local_res18 | param_1);
  puVar1 = (undefined8 *)(uVar2 - 8);
  *puVar1 = local_res8;
  *(undefined8 *)(uVar2 - 0x10) = *puVar1;
  *puVar1 = &LAB_16185a3cd;
  pcVar12 = FUN_16185a3a0;
  *(code **)(uVar2 - 0x18) = FUN_14d87fa1f;
  FUN_16185a3a0();
  *(undefined4 *)(uVar2 - 8) = unaff_EBX;
  *(undefined4 *)(uVar2 - 4) = 0xffffffff;
  *(undefined8 *)(uVar2 - 8) = *(undefined8 *)(unaff_R13 + *(longlong *)(uVar2 - 8) + 0x278b2b83);
  *(ulonglong *)(uVar2 - 8) = uVar7;
  *(ulonglong *)(uVar2 - 0x10) = uVar7;
  *(undefined1 *)(uVar2 - 0x18) = 0xba;
  *(undefined1 *)(uVar2 - 0x10) = *(undefined1 *)(uVar2 - 0x18);
  uVar8 = (-*(longlong *)(unaff_R13 + -0x78) ^ 0xffffffffffffffffU) + 1;
  uVar9 = uVar8 ^ 0xffffffffffffffff;
  *(undefined8 *)(uVar2 - 8) = *(undefined8 *)(unaff_R13 + -0x28);
  uVar7 = *(ulonglong *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 8) = *(undefined8 *)(unaff_R13 + -0x30);
  uVar5 = *(ulonglong *)(uVar2 - 8);
  *(code **)(uVar2 - 8) = pcVar12;
  *(undefined8 *)(uVar2 - 0x10) = in_R10;
  *(undefined8 *)(uVar2 - 0x10) = 0x161b163c7;
  FUN_164883d02(~((~unaff_R15 | uVar8) & (~(uVar9 & unaff_R15) + unaff_R15) - ~uVar9),
                ~((unaff_R15 - (uVar7 | unaff_R15)) + uVar7) & (uVar7 | unaff_R15));
  *(ulonglong *)(uVar2 - 8) = uVar5 ^ unaff_R15;
  *(undefined8 *)(uVar2 - 0x10) = *(undefined8 *)(uVar2 - 8);
  uVar7 = *(ulonglong *)(uVar2 - 0x10);
  lVar11 = -1 - ((~uVar7 | unaff_R15) -
                ~(~(~uVar7 | unaff_R15) | (~unaff_R15 + uVar7) - (~unaff_R15 & uVar7)));
  *(longlong *)(uVar2 - 8) = lVar11;
  uVar3 = *(undefined8 *)(uVar2 - 8);
  uVar7 = *(ulonglong *)(unaff_R13 + -0x88);
  if (lVar11 == 0) {
    *(undefined8 *)(uVar2 - 8) = *(undefined8 *)(unaff_R13 + -0x38);
    uVar6 = ~(*(ulonglong *)(uVar2 - 8) & unaff_R15) & (*(ulonglong *)(uVar2 - 8) | unaff_R15);
    *(undefined8 *)(uVar2 - 8) = unaff_R14;
    *(ulonglong *)(uVar2 - 0x10) = uVar6;
    *(undefined4 *)(uVar2 - 0x10) = 0x879559c9;
    *(undefined4 *)(uVar2 - 0xc) = 0xffffffff;
    uVar5 = *(ulonglong *)(unaff_R13 + (*(ulonglong *)(uVar2 - 0x10) ^ 0x786aa641));
    *(ulonglong *)(uVar2 - 8) = ~(uVar7 & unaff_R15) & (~(uVar7 & unaff_R15) + unaff_R15) - ~uVar7;
    *(ulonglong *)(uVar2 - 0x10) = unaff_R15;
    *(undefined8 *)(uVar2 - 0x18) = 0;
    uVar4 = *(undefined8 *)(uVar2 - 8);
    *(ulonglong *)(uVar2 - 8) = ~*(ulonglong *)(uVar2 - 0x10) | uVar5;
    uVar8 = *(ulonglong *)(uVar2 - 8);
    *(undefined8 *)(uVar2 - 8) = *(undefined8 *)(unaff_R13 + -0x28);
    uVar9 = *(ulonglong *)(uVar2 - 8);
    uVar10 = uVar9 ^ 0xffffffffffffffff;
    uVar7 = *(ulonglong *)(unaff_R13 + -0x30);
    *(undefined8 *)(uVar2 - 8) = uVar4;
    uVar4 = *(undefined8 *)(uVar2 - 8);
    *(ulonglong *)(uVar2 - 8) = uVar7 + unaff_R15 + (uVar7 & unaff_R15) * -2;
    *(ulonglong *)(uVar2 - 8) = uVar6;
    FUN_16689726e(~(uVar8 & (~(~uVar5 & unaff_R15) + unaff_R15) - uVar5),
                  ~((~unaff_R15 | uVar9) & (~(uVar10 & unaff_R15) + unaff_R15) - ~uVar10),uVar4,
                  uVar3);
    return;
  }
  FUN_1617ae06f();
  return;
}



// FUNCTION 14d87fa1f FUN_14d87fa1f body=687 status=ok
// SIG undefined FUN_14d87fa1f(void)

/* WARNING: Removing unreachable block (ram,0x00015b02d932) */
/* WARNING: Removing unreachable block (ram,0x00015b02d938) */
/* WARNING: Removing unreachable block (ram,0x0001617ae0fb) */
/* WARNING: Removing unreachable block (ram,0x0001617ae101) */
/* WARNING: Removing unreachable block (ram,0x0001617ae15c) */
/* WARNING: Removing unreachable block (ram,0x0001617ae160) */
/* WARNING: Removing unreachable block (ram,0x00015b02d93d) */
/* WARNING: Removing unreachable block (ram,0x000161b1645d) */
/* WARNING: Removing unreachable block (ram,0x00014d87fab8) */

void FUN_14d87fa1f(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = (-*(longlong *)(unaff_R13 + -0x78) ^ 0xffffffffffffffffU) + 1;
  uVar3 = uVar2 ^ 0xffffffffffffffff;
  uVar1 = *(ulonglong *)(unaff_R13 + -0x28);
  uVar4 = *(ulonglong *)(unaff_R13 + -0x30) ^ unaff_R15;
  FUN_164883d02(~((~unaff_R15 | uVar2) & (~(uVar3 & unaff_R15) + unaff_R15) - ~uVar3),
                ~((unaff_R15 - (uVar1 | unaff_R15)) + uVar1) & (uVar1 | unaff_R15));
  uVar1 = *(ulonglong *)(unaff_R13 + -0x88);
  if ((~uVar4 | unaff_R15) - ~(~(~uVar4 | unaff_R15) | (~unaff_R15 + uVar4) - (~unaff_R15 & uVar4))
      == -1) {
    uVar2 = *(ulonglong *)(unaff_R13 + -0x78);
    uVar3 = *(ulonglong *)(unaff_R13 + -0x28) ^ 0xffffffffffffffff;
    FUN_16689726e(~((~unaff_R15 | uVar2) & (~(~uVar2 & unaff_R15) + unaff_R15) - uVar2),
                  ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) &
                   (~(uVar3 & unaff_R15) + unaff_R15) - ~uVar3),
                  ~(uVar1 & unaff_R15) & (~(uVar1 & unaff_R15) + unaff_R15) - ~uVar1,0);
    return;
  }
  FUN_1617ae06f();
  return;
}



// FUNCTION 14d87ff96 FUN_14d87ff96 body=152 status=ok
// SIG undefined FUN_14d87ff96(void)

/* WARNING: Removing unreachable block (ram,0x00014d880028) */
/* WARNING: Removing unreachable block (ram,0x00014d88002e) */
/* WARNING: Removing unreachable block (ram,0x000156c898cd) */

void FUN_14d87ff96(void)

{
  FUN_156c898cd();
  return;
}



// FUNCTION 14d88002e FUN_14d88002e body=144 status=ok
// SIG undefined FUN_14d88002e(void)

void FUN_14d88002e(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res10;
  
  FUN_15b14bfa1(~(param_1 & unaff_R15) & (param_1 | unaff_R15),*(undefined8 *)(unaff_R13 + -0x28),
                param_3,local_res10);
  return;
}



// FUNCTION 14d8802ac FUN_14d8802ac body=199 status=ok
// SIG undefined FUN_14d8802ac(void)

void FUN_14d8802ac(ulonglong param_1)

{
  ulonglong uVar1;
  longlong in_RAX;
  
  uVar1 = *(ulonglong *)(in_RAX + 0x18);
  *(ulonglong *)(in_RAX + 0x18) = ~*(ulonglong *)(in_RAX + 0x18);
  *(ulonglong *)(in_RAX + 0x18) = *(ulonglong *)(in_RAX + 0x18) | param_1;
  *(ulonglong *)(in_RAX + 0x18) = ~((~param_1 | uVar1) & *(ulonglong *)(in_RAX + 0x18));
  return;
}



// FUNCTION 14d880374 FUN_14d880374 body=330 status=ok
// SIG undefined FUN_14d880374(void)

/* WARNING: Removing unreachable block (ram,0x00014d880410) */
/* WARNING: Removing unreachable block (ram,0x00014d880416) */
/* WARNING: Removing unreachable block (ram,0x00014d880417) */
/* WARNING: Removing unreachable block (ram,0x00014d88041b) */

void FUN_14d880374(void)

{
  return;
}



// FUNCTION 14d880416 FUN_14d880416 body=148 status=ok
// SIG undefined FUN_14d880416(void)

void FUN_14d880416(void)

{
  return;
}



// FUNCTION 14d8805f4 FUN_14d8805f4 body=164 status=ok
// SIG undefined FUN_14d8805f4(void)

void FUN_14d8805f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1651076ff(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d880750 FUN_14d880750 body=59 status=ok
// SIG undefined FUN_14d880750(void)

void FUN_14d880750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStackX_8;
  
  thunk_FUN_15b642ca5(uStackX_8,param_2,param_3);
  return;
}



// FUNCTION 14d88080b FUN_14d88080b body=468 status=ok
// SIG undefined FUN_14d88080b(void)

/* WARNING: Removing unreachable block (ram,0x00014d88093e) */
/* WARNING: Removing unreachable block (ram,0x00014d880944) */
/* WARNING: Removing unreachable block (ram,0x0001629565ce) */
/* WARNING: Removing unreachable block (ram,0x00014d8808ad) */
/* WARNING: Removing unreachable block (ram,0x00014d8808b8) */
/* WARNING: Removing unreachable block (ram,0x00014d880939) */
/* WARNING: Removing unreachable block (ram,0x000165a180f0) */
/* WARNING: Removing unreachable block (ram,0x000165a180f6) */
/* WARNING: Removing unreachable block (ram,0x00015682958c) */
/* WARNING: Removing unreachable block (ram,0x00015682964b) */
/* WARNING: Removing unreachable block (ram,0x00015682964f) */
/* WARNING: Removing unreachable block (ram,0x000162066b97) */
/* WARNING: Removing unreachable block (ram,0x000162066b9d) */
/* WARNING: Removing unreachable block (ram,0x000162066cb6) */
/* WARNING: Removing unreachable block (ram,0x000162066cbc) */
/* WARNING: Removing unreachable block (ram,0x0001655df398) */
/* WARNING: Removing unreachable block (ram,0x00014d8808b3) */
/* WARNING: Removing unreachable block (ram,0x000165f1e78f) */
/* WARNING: Removing unreachable block (ram,0x000165f1e795) */
/* WARNING: Removing unreachable block (ram,0x00016482a0eb) */
/* WARNING: Removing unreachable block (ram,0x00016482a0f1) */
/* WARNING: Removing unreachable block (ram,0x00016482a177) */
/* WARNING: Removing unreachable block (ram,0x00016482a182) */
/* WARNING: Removing unreachable block (ram,0x000165a18043) */
/* WARNING: Removing unreachable block (ram,0x00016482a188) */
/* WARNING: Removing unreachable block (ram,0x000162066b22) */
/* WARNING: Removing unreachable block (ram,0x00016482a0d0) */
/* WARNING: Removing unreachable block (ram,0x00016482a0d5) */
/* WARNING: Removing unreachable block (ram,0x0001617fd1bd) */
/* WARNING: Removing unreachable block (ram,0x000156762625) */
/* WARNING: Removing unreachable block (ram,0x000165f1e66d) */
/* WARNING: Removing unreachable block (ram,0x000165f1e707) */
/* WARNING: Removing unreachable block (ram,0x000165565e8e) */
/* WARNING: Removing unreachable block (ram,0x000165565eae) */
/* WARNING: Removing unreachable block (ram,0x000165565ea8) */
/* WARNING: Removing unreachable block (ram,0x000165565eb3) */
/* WARNING: Removing unreachable block (ram,0x0001565db3de) */

undefined8 FUN_14d88080b(longlong param_1)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong unaff_R12;
  
  uVar3 = param_1 + *(longlong *)(unaff_R12 + -0x58) ^ in_RAX;
  uVar1 = *(ulonglong *)(unaff_R12 + -0x50);
  FUN_166d612ab();
  uVar1 = *(ulonglong *)((uVar1 - in_RAX) + (~in_RAX | uVar1) * -2 + -0x4a);
  if ((uVar3 - (uVar1 | uVar3)) + uVar1 == 0) {
    uVar2 = (*(code *)0x15b4aa9b9)(uVar3,0x15b4aa9b9);
    return uVar2;
  }
  uVar2 = FUN_164f6f913();
  return uVar2;
}



// FUNCTION 14d8809e1 FUN_14d8809e1 body=128 status=ok
// SIG undefined FUN_14d8809e1(void)

void FUN_14d8809e1(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  uVar1 = *param_1;
  *param_1 = ~*param_1;
  *param_1 = *param_1 | unaff_R15;
  *param_1 = (~unaff_R15 | uVar1) & *param_1 ^ 0xffffffffffffffff;
  (*(code *)0x165dbc445)(unaff_retaddr);
  return;
}



// FUNCTION 14d880a6c FUN_14d880a6c body=175 status=ok
// SIG undefined FUN_14d880a6c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d880a6c(undefined8 param_1,undefined8 param_2)

{
  FUN_16640dab7(param_1,param_2,_DAT_7ffe0330);
  return;
}



// FUNCTION 14d880b1c FUN_14d880b1c body=1166 status=ok
// SIG undefined FUN_14d880b1c(void)

/* WARNING: Removing unreachable block (ram,0x00014d880c04) */
/* WARNING: Removing unreachable block (ram,0x00014d880bb6) */
/* WARNING: Removing unreachable block (ram,0x00014d880bd9) */
/* WARNING: Removing unreachable block (ram,0x00014d880bde) */
/* WARNING: Removing unreachable block (ram,0x00014d880be4) */
/* WARNING: Removing unreachable block (ram,0x00014d880bee) */
/* WARNING: Removing unreachable block (ram,0x00014d880bf3) */
/* WARNING: Removing unreachable block (ram,0x00015677292e) */
/* WARNING: Removing unreachable block (ram,0x00015677293e) */
/* WARNING: Removing unreachable block (ram,0x000156772943) */
/* WARNING: Removing unreachable block (ram,0x000160fc4669) */
/* WARNING: Removing unreachable block (ram,0x000160fc4686) */
/* WARNING: Removing unreachable block (ram,0x000160fc468a) */
/* WARNING: Removing unreachable block (ram,0x00014d880bf9) */
/* WARNING: Removing unreachable block (ram,0x00014d880bff) */
/* WARNING: Removing unreachable block (ram,0x00014d880c18) */
/* WARNING: Removing unreachable block (ram,0x00014d880c1e) */
/* WARNING: Removing unreachable block (ram,0x00014d880c23) */
/* WARNING: Removing unreachable block (ram,0x00014d880c29) */
/* WARNING: Removing unreachable block (ram,0x00014d880c2e) */
/* WARNING: Removing unreachable block (ram,0x00014d880c36) */
/* WARNING: Removing unreachable block (ram,0x00014d880c3c) */
/* WARNING: Removing unreachable block (ram,0x000161a6e843) */
/* WARNING: Removing unreachable block (ram,0x000161a6e8ab) */
/* WARNING: Removing unreachable block (ram,0x000161a6e8b0) */
/* WARNING: Removing unreachable block (ram,0x000161a6e8bb) */
/* WARNING: Removing unreachable block (ram,0x000161a6e8b6) */
/* WARNING: Removing unreachable block (ram,0x00015677296d) */
/* WARNING: Removing unreachable block (ram,0x000156772973) */
/* WARNING: Removing unreachable block (ram,0x00014d880b74) */

uint FUN_14d880b1c(void)

{
  uint unaff_EBX;
  
  return ~(~((-0x5225b3d0 - (unaff_EBX | 0xadda4c30)) + unaff_EBX) &
          (-0x5225b3d1 - (unaff_EBX & 0xadda4c30)) - ~unaff_EBX);
}



// FUNCTION 14d880cd2 FUN_14d880cd2 body=313 status=ok
// SIG undefined FUN_14d880cd2(void)

/* WARNING: Instruction at (ram,0x000165314a42) overlaps instruction at (ram,0x000165314a3f)
    */
/* WARNING: Removing unreachable block (ram,0x0001653149c1) */
/* WARNING: Removing unreachable block (ram,0x0001653149c7) */
/* WARNING: Removing unreachable block (ram,0x000165314a42) */
/* WARNING: Removing unreachable block (ram,0x000165314a3f) */
/* WARNING: Removing unreachable block (ram,0x000165314a54) */
/* WARNING: Removing unreachable block (ram,0x000165314a59) */
/* WARNING: Removing unreachable block (ram,0x000165314a5f) */
/* WARNING: Removing unreachable block (ram,0x000165314a64) */
/* WARNING: Removing unreachable block (ram,0x00014de049cf) */
/* WARNING: Removing unreachable block (ram,0x00014de04944) */
/* WARNING: Removing unreachable block (ram,0x00014de049c4) */
/* WARNING: Removing unreachable block (ram,0x00014de049ca) */
/* WARNING: Removing unreachable block (ram,0x00014de049bf) */
/* WARNING: Removing unreachable block (ram,0x00014d880d5f) */
/* WARNING: Removing unreachable block (ram,0x00015b5f3ee4) */

void FUN_14d880cd2(ulonglong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong unaff_RDI;
  ulonglong unaff_R15;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0x98);
  if ((longlong)
      ((~param_1 | *(ulonglong *)(unaff_RDI + -0x88)) &
       (~*(ulonglong *)(unaff_RDI + -0x88) | param_1) ^ 0xffffffffffffffff) < 0) {
    lVar3 = *(ulonglong *)(unaff_RDI + -0x90) + param_1 +
            (*(ulonglong *)(unaff_RDI + -0x90) & param_1) * -2;
    puVar1 = (ulonglong *)(lVar3 + -8);
    *puVar1 = unaff_R15;
    *(ulonglong *)(lVar3 + -0x10) = *puVar1;
    *puVar1 = 0;
    *puVar1 = *puVar1 - 0x156b6c915;
    *puVar1 = ~*puVar1;
    *puVar1 = *puVar1 + 1;
    thunk_FUN_15b0572f1(uVar2 ^ param_1);
    return;
  }
  FUN_15b5f3e55();
  return;
}



// FUNCTION 14d880e10 FUN_14d880e10 body=281 status=ok
// SIG undefined FUN_14d880e10(void)

/* WARNING: Removing unreachable block (ram,0x00014d880e72) */
/* WARNING: Removing unreachable block (ram,0x00014d880e7d) */
/* WARNING: Removing unreachable block (ram,0x00014d880e78) */

undefined8 FUN_14d880e10(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  ushort *unaff_RDI;
  undefined8 unaff_R14;
  undefined8 uStackX_20;
  
  *unaff_RDI = (*unaff_RDI - 1) - ~(~((*unaff_RDI - (*unaff_RDI | 0x100)) + 0x100 | 0xfeff) - 0x100)
  ;
  *(undefined8 *)(uStackX_20 + -8) = unaff_RBP;
  *(undefined8 *)(uStackX_20 + -0x10) = unaff_R14;
  *(undefined8 *)(uStackX_20 + -0x18) = param_2;
  *(undefined8 *)(uStackX_20 + -0x20) = 0x165c434ac;
  return in_RAX;
}



// FUNCTION 14d880f2c FUN_14d880f2c body=525 status=ok
// SIG undefined FUN_14d880f2c(void)

/* WARNING: Removing unreachable block (ram,0x000162df2554) */
/* WARNING: Removing unreachable block (ram,0x000162df255a) */
/* WARNING: Removing unreachable block (ram,0x000162df25db) */
/* WARNING: Removing unreachable block (ram,0x000162df25e7) */
/* WARNING: Removing unreachable block (ram,0x0001656d679f) */
/* WARNING: Removing unreachable block (ram,0x0001656d6832) */
/* WARNING: Removing unreachable block (ram,0x0001656d6838) */
/* WARNING: Removing unreachable block (ram,0x00014d8fe9a5) */
/* WARNING: Removing unreachable block (ram,0x0001656d68d3) */
/* WARNING: Removing unreachable block (ram,0x0001656d68d9) */
/* WARNING: Removing unreachable block (ram,0x0001656d68de) */
/* WARNING: Removing unreachable block (ram,0x0001622da4af) */
/* WARNING: Removing unreachable block (ram,0x0001622da529) */
/* WARNING: Removing unreachable block (ram,0x0001622da52f) */
/* WARNING: Removing unreachable block (ram,0x000165b7ca59) */
/* WARNING: Removing unreachable block (ram,0x00014d880fbf) */

void FUN_14d880f2c(ulonglong param_1,undefined8 param_2)

{
  undefined8 local_res10;
  
  if (CARRY8(~(local_res10 | param_1) | ~((param_1 - (local_res10 | param_1)) + local_res10),
             local_res10 | param_1)) {
    (*(code *)0x162644abb)(0x162644abb,param_2);
    return;
  }
  FUN_162df24b7();
  return;
}



// FUNCTION 14d881172 FUN_14d881172 body=16 status=ok
// SIG undefined FUN_14d881172(void)

void FUN_14d881172(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d8814c5 FUN_14d8814c5 body=960 status=ok
// SIG undefined FUN_14d8814c5(void)

/* WARNING: Removing unreachable block (ram,0x00014d8815f8) */
/* WARNING: Removing unreachable block (ram,0x00014d881604) */
/* WARNING: Removing unreachable block (ram,0x00014d8816c2) */
/* WARNING: Removing unreachable block (ram,0x00014d8816c8) */
/* WARNING: Removing unreachable block (ram,0x000162d42fbd) */

void FUN_14d8814c5(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  ushort *puVar1;
  ulonglong *puVar2;
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  undefined2 uVar3;
  ulonglong uVar4;
  undefined8 unaff_retaddr;
  ushort auStackX_10 [4];
  undefined8 uStackX_18;
  
  puVar1 = (ushort *)((longlong)auStackX_10 + param_4);
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 | 0x100;
  *puVar1 = ~*puVar1;
  *(undefined8 *)(param_5 + -8) = param_2;
  *(undefined8 *)(param_5 + -0x10) = unaff_RBX;
  *(undefined8 *)(param_5 + -0x18) = unaff_RBX;
  *(undefined8 *)(param_5 + -0x20) = unaff_retaddr;
  *(undefined4 *)(param_5 + -0x28) = 0x4cdc68c8;
  *(undefined4 *)(param_5 + -0x24) = 0;
  *(undefined8 *)(param_5 + -0x18 + (*(ulonglong *)(param_5 + -0x28) ^ 0x4cdc68c0)) =
       *(undefined8 *)(param_5 + -8);
  uVar3 = (undefined2)*(undefined8 *)(param_5 + -0x20);
  *(undefined **)(param_5 + -8) = &DAT_156e2468e;
  *(undefined8 *)(param_5 + -0x18) = 0x14d88155a;
  FUN_156e24635(uStackX_18);
  uVar4 = *(ulonglong *)(unaff_RSI + -0x50);
  *(undefined4 *)(param_5 + -0x18) = 0x749e014;
  *(undefined4 *)(param_5 + -0x14) = 0x29e10a56;
  *(uint *)(param_5 + -0x14) = *(uint *)(param_5 + -0x14) ^ 0x29e10a56;
  puVar2 = (ulonglong *)(param_5 + *(longlong *)(param_5 + -0x18) + -0x749e02c);
  *puVar2 = 0;
  *(undefined2 *)puVar2 = uVar3;
  *puVar2 = ~unaff_RBP & ~uVar4 | unaff_RBP;
  uVar4 = ~*(ulonglong *)(unaff_RSI + -0x68) | unaff_RBP;
  *puVar2 = uVar4;
  puVar2[-1] = uVar4;
  puVar2[-2] = uVar4;
  *puVar2 = (ulonglong)FUN_1624f37ab;
  puVar2[-1] = 0x15b694073;
  return;
}



// FUNCTION 14d88173d FUN_14d88173d body=34 status=ok
// SIG undefined FUN_14d88173d(void)

void FUN_14d88173d(void)

{
  return;
}



// FUNCTION 14d881856 FUN_14d881856 body=301 status=ok
// SIG undefined FUN_14d881856(void)

/* WARNING: Instruction at (ram,0x00014d88186d) overlaps instruction at (ram,0x00014d88186c)
    */
/* WARNING: Removing unreachable block (ram,0x00014d88186c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffff8 : 0x00014d8818cc */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d881856(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_161ce4547(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d881b4d FUN_14d881b4d body=174 status=ok
// SIG undefined FUN_14d881b4d(void)

/* WARNING: Removing unreachable block (ram,0x00014d881be8) */

void FUN_14d881b4d(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  undefined8 local_res20;
  
  FUN_1667e4439(FUN_1667e4439,local_res20,*(undefined8 *)(unaff_R12 + -0x80),
                *(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
  return;
}



// FUNCTION 14d881bfc FUN_14d881bfc body=132 status=ok
// SIG undefined FUN_14d881bfc(void)

ulonglong FUN_14d881bfc(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x80);
  return ~(uVar1 & param_1) & uVar1 + (-1 - (~param_1 | uVar1));
}



// FUNCTION 14d881d23 FUN_14d881d23 body=123 status=ok
// SIG undefined FUN_14d881d23(void)

void FUN_14d881d23(void)

{
  ulonglong uVar1;
  undefined8 unaff_RSI;
  ulonglong in_R11;
  undefined8 local_res10 [3];
  
  uVar1 = ~(~(in_R11 & 0xffffffff8a5737b6) & (in_R11 | 0xffffffff8a5737b6));
  *(undefined8 *)
   ((longlong)local_res10 + ~(~(uVar1 & 0xffffffff9a0d94eb) & (uVar1 | 0xffffffff9a0d94eb))) =
       unaff_RSI;
  FUN_165c3b0a6(FUN_165c3b0a6);
  return;
}



// FUNCTION 14d881da0 FUN_14d881da0 body=16 status=ok
// SIG undefined FUN_14d881da0(void)

void FUN_14d881da0(void)

{
  FUN_156c79161();
  return;
}



// FUNCTION 14d881eb9 FUN_14d881eb9 body=177 status=ok
// SIG undefined FUN_14d881eb9(void)

undefined8 FUN_14d881eb9(void)

{
  return 0;
}



// FUNCTION 14d882095 FUN_14d882095 body=177 status=ok
// SIG undefined FUN_14d882095(void)

void FUN_14d882095(undefined8 param_1,undefined8 param_2,int param_3)

{
  longlong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (-1 < param_3) {
    FUN_1654b11b5();
    return;
  }
  FUN_1654b11ab();
  FUN_165451eb3(*(ulonglong *)(unaff_R13 + unaff_RSI) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14d882146 FUN_14d882146 body=183 status=ok
// SIG undefined FUN_14d882146(void)

void FUN_14d882146(void)

{
  longlong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_165451eb3(*(ulonglong *)(unaff_R13 + unaff_RSI) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14d8821ff FUN_14d8821ff body=311 status=ok
// SIG undefined FUN_14d8821ff(void)

void FUN_14d8821ff(void)

{
  longlong unaff_RBP;
  longlong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong unaff_retaddr;
  
  FUN_1665e5fb4(unaff_retaddr,0x2441a0c1,-*(longlong *)(unaff_RDI + -0x70),
                ~((~unaff_retaddr | *(ulonglong *)(unaff_RDI + -0x60)) + unaff_retaddr + 1) &
                (*(ulonglong *)(unaff_RDI + -0x60) | unaff_retaddr));
  FUN_162562728(0xfffffffffffffff8,unaff_retaddr + unaff_RBP + 0x1a8705a,
                *(undefined8 *)(unaff_R13 + -0x90),
                -1 - ((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x40)) &
                     (0xffffffffffffffff - *(ulonglong *)(unaff_R13 + -0x40) | unaff_R15)));
  return;
}



// FUNCTION 14d882339 FUN_14d882339 body=629 status=ok
// SIG undefined FUN_14d882339(void)

/* WARNING: Removing unreachable block (ram,0x00014d8823d2) */

void FUN_14d882339(undefined8 param_1,uint param_2)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_161a824bd(0xffffffffffffff90,param_2 ^ 0xffffffff,*(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,
                *(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
  return;
}



// FUNCTION 14d882512 FUN_14d882512 body=164 status=ok
// SIG undefined FUN_14d882512(void)

/* WARNING: Removing unreachable block (ram,0x00014d8825ea) */

void FUN_14d882512(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  char in_stack_00000010;
  undefined1 auStack_200 [512];
  
  FUN_1661c70df(param_1,param_2,param_3);
  _fxsave(auStack_200);
  if (&stack0x00000010 < &DAT_00000210) {
    in_stack_00000010 = in_stack_00000010 + '\x01';
  }
  uVar1 = (ulonglong)(byte)((char)param_2 - in_stack_00000010);
  FUN_15b8cd3fd();
  FUN_161a05e7a(FUN_161a05e7a,uVar1);
  return;
}



// FUNCTION 14d8825b7 FUN_14d8825b7 body=247 status=ok
// SIG undefined FUN_14d8825b7(void)

/* WARNING: Removing unreachable block (ram,0x00014d8825ea) */

void FUN_14d8825b7(undefined8 param_1,char param_2)

{
  ulonglong uVar1;
  char in_R11B;
  undefined1 auStack_210 [528];
  
  _fxsave(auStack_210);
  if (&stack0x00000000 < &DAT_00000210) {
    in_R11B = in_R11B + '\x01';
  }
  uVar1 = (ulonglong)(byte)(param_2 - in_R11B);
  FUN_15b8cd3fd();
  FUN_161a05e7a(FUN_161a05e7a,uVar1);
  return;
}



// FUNCTION 14d882758 FUN_14d882758 body=156 status=ok
// SIG undefined FUN_14d882758(void)

void FUN_14d882758(undefined8 param_1,ulonglong *param_2,undefined8 param_3)

{
  byte *pbVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong unaff_RBX;
  ulonglong unaff_RSI;
  undefined8 in_R10;
  longlong lVar6;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  
  uVar5 = FUN_16499fdb4(param_1,param_2,param_3);
  *(uint *)param_2 = 0x9dc1e69;
  *(uint *)param_2 = (uint)*param_2 ^ 0x17f3489a;
  *(uint *)((longlong)param_2 + 4) = 0;
  lVar6 = -~*param_2 - (~unaff_RBX + 2);
  uVar3 = param_2[2];
  *(undefined1 *)((longlong)param_2 + lVar6 + 0x18) = 0xa1;
  pbVar1 = (byte *)((longlong)param_2 + lVar6 + 0x18);
  *pbVar1 = *pbVar1 ^ 0xa1;
  param_2[2] = uVar5;
  *(undefined4 *)(param_2 + 2) = 0x7d123c48;
  *(uint *)((longlong)param_2 + 0x14) = 0;
  uVar5 = param_2[2];
  param_2[2] = (ulonglong)FUN_16499fdb4;
  param_2[1] = (ulonglong)~(uint)uVar5;
  *param_2 = unaff_RSI;
  uVar5 = param_2[1];
  param_2[1] = in_R10;
  uVar4 = -(1 - (int)uVar5);
  uVar2 = uVar4 + 3;
  param_2[1] = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW4(uVar4,-3) * 0x800 |
               (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
               (ulonglong)((int)uVar2 < 0) * 0x80 | (ulonglong)(uVar2 == 0) * 0x40 |
               (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar2 & 0xff) & 1U) == 0) * 4 |
               (ulonglong)(uVar4 < 0xfffffffd) | (ulonglong)(in_ID & 1) * 0x200000 |
               (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
               (ulonglong)(in_AC & 1) * 0x40000;
  FUN_156c76281(param_1,uVar3);
  return;
}



// FUNCTION 14d8827f6 FUN_14d8827f6 body=270 status=ok
// SIG undefined FUN_14d8827f6(void)

void FUN_14d8827f6(undefined8 param_1,ulonglong *param_2)

{
  byte *pbVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 in_RAX;
  ulonglong unaff_RBX;
  ulonglong unaff_RSI;
  undefined8 in_R10;
  longlong lVar6;
  undefined8 unaff_R15;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  
  *(uint *)param_2 = 0x9dc1e69;
  *(uint *)param_2 = (uint)*param_2 ^ 0x17f3489a;
  *(uint *)((longlong)param_2 + 4) = 0;
  lVar6 = -~*param_2 - (~unaff_RBX + 2);
  uVar3 = param_2[2];
  *(undefined1 *)((longlong)param_2 + lVar6 + 0x18) = 0xa1;
  pbVar1 = (byte *)((longlong)param_2 + lVar6 + 0x18);
  *pbVar1 = *pbVar1 ^ 0xa1;
  param_2[2] = in_RAX;
  *(undefined4 *)(param_2 + 2) = 0x7d123c48;
  *(uint *)((longlong)param_2 + 0x14) = 0;
  uVar4 = param_2[2];
  param_2[2] = unaff_R15;
  param_2[1] = (ulonglong)~(uint)uVar4;
  *param_2 = unaff_RSI;
  uVar4 = param_2[1];
  param_2[1] = in_R10;
  uVar5 = -(1 - (int)uVar4);
  uVar2 = uVar5 + 3;
  param_2[1] = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW4(uVar5,-3) * 0x800 |
               (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
               (ulonglong)((int)uVar2 < 0) * 0x80 | (ulonglong)(uVar2 == 0) * 0x40 |
               (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar2 & 0xff) & 1U) == 0) * 4 |
               (ulonglong)(uVar5 < 0xfffffffd) | (ulonglong)(in_ID & 1) * 0x200000 |
               (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
               (ulonglong)(in_AC & 1) * 0x40000;
  FUN_156c76281(param_1,uVar3);
  return;
}



// FUNCTION 14d882a68 thunk_FUN_14d882a6e body=5 status=ok
// SIG undefined thunk_FUN_14d882a6e(void)

void thunk_FUN_14d882a6e(ulonglong param_1)

{
  ulonglong unaff_RDI;
  ulonglong unaff_R15;
  
  FUN_161c9a53e(~((unaff_RDI | param_1) & (~param_1 | unaff_R15)),FUN_161c9a53e);
  return;
}



// FUNCTION 14d882a6e FUN_14d882a6e body=121 status=ok
// SIG undefined FUN_14d882a6e(void)

void FUN_14d882a6e(ulonglong param_1)

{
  ulonglong unaff_RDI;
  ulonglong unaff_R15;
  
  FUN_161c9a53e(~((unaff_RDI | param_1) & (~param_1 | unaff_R15)),FUN_161c9a53e);
  return;
}



// FUNCTION 14d882b80 thunk_FUN_14d882b86 body=5 status=ok
// SIG undefined thunk_FUN_14d882b86(void)

/* WARNING: Removing unreachable block (ram,0x00014d882d09) */
/* WARNING: Removing unreachable block (ram,0x00014d882d0f) */
/* WARNING: Removing unreachable block (ram,0x00014d882d14) */
/* WARNING: Removing unreachable block (ram,0x00014d882ca7) */

void thunk_FUN_14d882b86(void)

{
  longlong unaff_RDI;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = ~(unaff_R15 & ~*(ulonglong *)(unaff_R13 + -0x80));
  uVar2 = ~*(ulonglong *)(unaff_R13 + -0x80) | unaff_R15;
  uVar2 = (uVar1 - 1) - ~(uVar2 - (uVar1 | uVar2));
  FUN_16640d50d();
  uVar1 = *(ulonglong *)(unaff_RDI + -0x68);
  if ((uVar1 & uVar2) == 0) {
    FUN_166b42e67();
    return;
  }
  (*(code *)0x1576803b8)
            (*(undefined8 *)(unaff_RDI + -0x90),~(uVar1 & uVar2) & (uVar1 + uVar2) - (uVar1 & uVar2)
            );
  return;
}



// FUNCTION 14d882b86 FUN_14d882b86 body=388 status=ok
// SIG undefined FUN_14d882b86(void)

/* WARNING: Removing unreachable block (ram,0x00014d882d09) */
/* WARNING: Removing unreachable block (ram,0x00014d882d0f) */
/* WARNING: Removing unreachable block (ram,0x00014d882d14) */
/* WARNING: Removing unreachable block (ram,0x00014d882ca7) */

void FUN_14d882b86(void)

{
  longlong unaff_RDI;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = ~(unaff_R15 & ~*(ulonglong *)(unaff_R13 + -0x80));
  uVar2 = ~*(ulonglong *)(unaff_R13 + -0x80) | unaff_R15;
  uVar2 = (uVar1 - 1) - ~(uVar2 - (uVar1 | uVar2));
  FUN_16640d50d();
  uVar1 = *(ulonglong *)(unaff_RDI + -0x68);
  if ((uVar1 & uVar2) == 0) {
    FUN_166b42e67();
    return;
  }
  (*(code *)0x1576803b8)
            (*(undefined8 *)(unaff_RDI + -0x90),~(uVar1 & uVar2) & (uVar1 + uVar2) - (uVar1 & uVar2)
            );
  return;
}



// FUNCTION 14d882d14 FUN_14d882d14 body=164 status=ok
// SIG undefined FUN_14d882d14(void)

void FUN_14d882d14(void)

{
  ulonglong unaff_RBX;
  undefined8 unaff_R14;
  
  *(undefined8 *)(&stack0x5914f4e4 + -~unaff_RBX) = unaff_R14;
  FUN_1569fb927();
  return;
}



// FUNCTION 14d882db9 FUN_14d882db9 body=491 status=ok
// SIG undefined FUN_14d882db9(void)

/* WARNING: Removing unreachable block (ram,0x000166875fca) */
/* WARNING: Removing unreachable block (ram,0x00014d882f07) */
/* WARNING: Removing unreachable block (ram,0x00014d882fa1) */
/* WARNING: Removing unreachable block (ram,0x000166875f83) */
/* WARNING: Removing unreachable block (ram,0x000166876009) */
/* WARNING: Removing unreachable block (ram,0x00014d882fa7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d882db9(void)

{
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1646e627e();
  uVar1 = FUN_16510ff58(*(undefined8 *)(unaff_R13 + -0x90),0xffffffffffffffc0,
                        ~*(ulonglong *)(unaff_R13 + -0x88),
                        *(ulonglong *)(unaff_R13 + -0x60) + unaff_R15 +
                        (*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) * -2);
  return uVar1;
}



// FUNCTION 14d882fa7 FUN_14d882fa7 body=17 status=ok
// SIG undefined FUN_14d882fa7(void)

void FUN_14d882fa7(void)

{
  return;
}



// FUNCTION 14d883032 FUN_14d883032 body=343 status=ok
// SIG undefined FUN_14d883032(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d8830db) */
/* WARNING: Removing unreachable block (ram,0x00014d8830e6) */
/* WARNING: Removing unreachable block (ram,0x00014d8830e1) */
/* WARNING: Removing unreachable block (ram,0x00014d7a691e) */

undefined8 FUN_14d883032(ulonglong param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_R12;
  longlong unaff_R13;
  bool in_CF;
  ulonglong auStack_10 [2];
  
  lVar5 = 0xc435048;
  if (in_CF) {
    lVar5 = 0xc435049;
  }
  lVar5 = unaff_R13 - lVar5;
  *(undefined8 *)(&stack0x00000000 + lVar5) = *(undefined8 *)(unaff_R12 + -0x70);
  uVar2 = *(ulonglong *)(&stack0x00000000 + lVar5);
  *(ulonglong *)(&stack0x00000000 + lVar5) = in_RAX;
  *(undefined4 *)(&stack0x00000000 + lVar5) = 0x79fc7a40;
  *(undefined4 *)(&stack0x00000004 + lVar5) = 0;
  lVar4 = (-~in_RAX - (~uVar2 + (*(ulonglong *)(&stack0x00000000 + lVar5) ^ 0x79fc7a42))) +
          ~(~uVar2 | ~in_RAX) * -2;
  puVar1 = (ulonglong *)(&stack0x00000000 + lVar5);
  *puVar1 = param_1;
  *puVar1 = *puVar1 + param_2;
  *puVar1 = *puVar1 + 0x7a7c44d;
  lVar5 = *(longlong *)(unaff_R12 + -0x60);
  *puVar1 = 0;
  *puVar1 = *puVar1 + lVar5;
  lVar5 = *(longlong *)(unaff_R12 + -0x40);
  if (lVar5 < 0) {
    *puVar1 = in_RAX;
    puVar1[-1] = CONCAT62((int6)((ulonglong)lVar4 >> 0x10),(short)lVar4 >> ((byte)lVar5 & 0x1f));
    uVar2 = *puVar1;
    *(undefined4 *)puVar1 = 0xd4cf7688;
    *(undefined4 *)((longlong)puVar1 + 4) = 0xffffffff;
    *puVar1 = uVar2;
    puVar1[-1] = uVar2;
    puVar1[-2] = uVar2;
    *puVar1 = (ulonglong)&LAB_165849971;
    puVar1[-1] = 0x161722165;
    return puVar1[-2];
  }
  uVar3 = FUN_1658498bb();
  return uVar3;
}



// FUNCTION 14d8832f6 FUN_14d8832f6 body=477 status=ok
// SIG undefined FUN_14d8832f6(void)

/* WARNING: Removing unreachable block (ram,0x00014d883564) */
/* WARNING: Removing unreachable block (ram,0x00014d88356a) */
/* WARNING: Removing unreachable block (ram,0x00014d8833ee) */
/* WARNING: Removing unreachable block (ram,0x00015758d023) */

undefined8 FUN_14d8832f6(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 in_R9;
  longlong unaff_R12;
  int unaff_R13D;
  int in_stack_00000020;
  
  FUN_1665d8c8c();
  uVar1 = *(undefined8 *)(unaff_R12 + -0x58);
  FUN_14e07d769(uVar1);
  iVar2 = (int)uVar1;
  *(undefined8 *)(&stack0x14b5c3e1 + CONCAT44(0xffffffff,in_stack_00000020 + 0x46e12cbf)) = in_R9;
  FUN_160c1e5df();
  uVar1 = FUN_15758d023((unaff_R13D - iVar2) + 1);
  return uVar1;
}



// FUNCTION 14d8834d3 FUN_14d8834d3 body=162 status=ok
// SIG undefined FUN_14d8834d3(void)

/* WARNING: Removing unreachable block (ram,0x00014d883564) */
/* WARNING: Removing unreachable block (ram,0x00014d88356a) */
/* WARNING: Removing unreachable block (ram,0x00015758d023) */

undefined8 FUN_14d8834d3(int param_1)

{
  undefined8 uVar1;
  int unaff_R13D;
  
  uVar1 = FUN_15758d023((unaff_R13D - param_1) + 1);
  return uVar1;
}



// FUNCTION 14d88378c FUN_14d88378c body=550 status=ok
// SIG undefined FUN_14d88378c(void)

/* WARNING: Removing unreachable block (ram,0x00015721d63d) */
/* WARNING: Removing unreachable block (ram,0x000156b496cf) */
/* WARNING: Removing unreachable block (ram,0x00015721d571) */
/* WARNING: Removing unreachable block (ram,0x00015721d661) */
/* WARNING: Removing unreachable block (ram,0x00015721d667) */
/* WARNING: Removing unreachable block (ram,0x000156b4962c) */
/* WARNING: Removing unreachable block (ram,0x00016553385d) */
/* WARNING: Removing unreachable block (ram,0x000156b496c4) */
/* WARNING: Removing unreachable block (ram,0x000156b496ca) */
/* WARNING: Removing unreachable block (ram,0x00014d88380d) */

undefined8 FUN_14d88378c(void)

{
  undefined8 uVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  
  if (((ulonglong)local_res10 & 0x8000000000000000) == 0) {
    *local_res10 = local_res8;
    uVar1 = thunk_FUN_160e7b2c5();
    return uVar1;
  }
  uVar1 = FUN_15721d55a();
  return uVar1;
}



// FUNCTION 14d8838d9 FUN_14d8838d9 body=271 status=ok
// SIG undefined FUN_14d8838d9(void)

/* WARNING: Removing unreachable block (ram,0x00014d883a7d) */
/* WARNING: Removing unreachable block (ram,0x00014d883a89) */
/* WARNING: Removing unreachable block (ram,0x00014d883941) */
/* WARNING: Removing unreachable block (ram,0x00014d88396d) */
/* WARNING: Removing unreachable block (ram,0x00014d883968) */
/* WARNING: Removing unreachable block (ram,0x00016510cbf6) */
/* WARNING: Removing unreachable block (ram,0x00016510cc58) */
/* WARNING: Removing unreachable block (ram,0x00016510cc53) */
/* WARNING: Removing unreachable block (ram,0x00014d8839de) */
/* WARNING: Removing unreachable block (ram,0x00014d8839e4) */
/* WARNING: Removing unreachable block (ram,0x00016510cbf1) */
/* WARNING: Removing unreachable block (ram,0x00014d8839ea) */

undefined8 FUN_14d8838d9(void)

{
  undefined8 uVar1;
  ulonglong unaff_RBX;
  
  if (unaff_RBX == 0x10f3c8) {
    uVar1 = FUN_165dc09fc();
    return uVar1;
  }
  if (unaff_RBX < 0x10f3c9) {
    uVar1 = FUN_162e4d600();
    return uVar1;
  }
  uVar1 = FUN_162e4d600();
  return uVar1;
}



// FUNCTION 14d8839ea FUN_14d8839ea body=257 status=ok
// SIG undefined FUN_14d8839ea(void)

/* WARNING: Removing unreachable block (ram,0x00014d883a7d) */
/* WARNING: Removing unreachable block (ram,0x00014d883a89) */

void FUN_14d8839ea(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14d82b155(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15,FUN_14d82b155);
  return;
}



// FUNCTION 14d883b0d FUN_14d883b0d body=303 status=ok
// SIG undefined FUN_14d883b0d(void)

/* WARNING: Removing unreachable block (ram,0x00014d883ba3) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d883b0d(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (-1 < (longlong)
           ((*(ulonglong *)(unaff_R13 + -0x40) & unaff_R15 ^ 0xffffffffffffffff) &
           (*(ulonglong *)(unaff_R13 + -0x40) | unaff_R15))) {
    FUN_1621ec952();
    return;
  }
  FUN_1621ec952();
  return;
}



// FUNCTION 14d883c43 FUN_14d883c43 body=173 status=ok
// SIG undefined FUN_14d883c43(void)

void FUN_14d883c43(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res8 [4];
  
  local_res8[0] = *(undefined8 *)(unaff_R13 + -0x38);
  (*(code *)0x165ded173)
            (local_res8,8,*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
             *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14d883e25 FUN_14d883e25 body=146 status=ok
// SIG undefined FUN_14d883e25(void)

void FUN_14d883e25(void)

{
  (*(code *)&LAB_16131d088)();
  return;
}



// FUNCTION 14d883fe3 FUN_14d883fe3 body=15 status=ok
// SIG undefined FUN_14d883fe3(void)

void FUN_14d883fe3(void)

{
  return;
}



// FUNCTION 14d88406b FUN_14d88406b body=141 status=ok
// SIG undefined FUN_14d88406b(void)

/* WARNING: Removing unreachable block (ram,0x00014d8840f9) */
/* WARNING: Removing unreachable block (ram,0x00014d88416d) */
/* WARNING: Removing unreachable block (ram,0x00014d88418c) */
/* WARNING: Removing unreachable block (ram,0x00014d884198) */
/* WARNING: Removing unreachable block (ram,0x00016525d972) */

void FUN_14d88406b(void)

{
  ushort uVar1;
  ulonglong in_RAX;
  short unaff_BX;
  undefined8 in_R9;
  undefined8 unaff_retaddr;
  undefined2 local_res10;
  undefined8 local_res18;
  ulonglong in_stack_00000020;
  
  uVar1 = (ushort)in_RAX;
  local_res10 = unaff_BX + uVar1 + (local_res10 & uVar1) * -2;
  if (-1 < (longlong)((-~in_RAX - (~local_res18 + 2)) + (local_res18 & in_RAX) * -2)) {
    (*(code *)0x16598ff9c)
              (unaff_retaddr,~local_res10,uVar1 | local_res10,in_R9,
               in_stack_00000020 + in_RAX + (in_stack_00000020 & in_RAX) * -2);
    return;
  }
  FUN_15b8ec4dc();
  return;
}



// FUNCTION 14d8840f9 FUN_14d8840f9 body=155 status=ok
// SIG undefined FUN_14d8840f9(void)

/* WARNING: Removing unreachable block (ram,0x00014d884198) */

void FUN_14d8840f9(byte param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  byte in_AL;
  longlong lVar5;
  undefined8 unaff_RSI;
  ulonglong unaff_R15;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined8 uStackX_10;
  ulonglong local_res20;
  
  uVar1 = local_res20 ^ unaff_R15;
  lVar5 = param_5 + unaff_R15 + (param_5 & unaff_R15) * -2;
  bVar11 = (uVar1 & 0x4000) != 0;
  bVar9 = (uVar1 & 0x400) != 0;
  bVar8 = (uVar1 & 0x200) != 0;
  bVar7 = (uVar1 & 0x10) != 0;
  bVar13 = (uVar1 & 0x200000) != 0;
  bVar12 = (uVar1 & 0x40000) != 0;
  LOCK();
  bVar6 = in_AL < FUN_14d7c44fc;
  bVar10 = SBORROW1(in_AL,FUN_14d7c44fc);
  cVar3 = in_AL - FUN_14d7c44fc;
  bVar4 = param_1;
  if (cVar3 != '\0') {
    bVar4 = FUN_14d7c44fc;
  }
  FUN_14d7c44fc = bVar4;
  UNLOCK();
  *(undefined8 *)(lVar5 + -8) = uStackX_10;
  *(undefined8 *)(lVar5 + -0x10) = uStackX_10;
  *(ulonglong *)(lVar5 + -0x18) =
       (ulonglong)bVar11 * 0x4000 | (ulonglong)bVar10 * 0x800 | (ulonglong)bVar9 * 0x400 |
       (ulonglong)bVar8 * 0x200 | (ulonglong)(cVar3 < '\0') * 0x80 |
       (ulonglong)(cVar3 == '\0') * 0x40 | (ulonglong)bVar7 * 0x10 |
       (ulonglong)((POPCOUNT(cVar3) & 1U) == 0) * 4 | (ulonglong)bVar6 |
       (ulonglong)bVar13 * 0x200000 | (ulonglong)bVar12 * 0x40000;
  *(undefined8 *)(lVar5 + -0x20) = 0x82eeca2;
  uVar1 = *(ulonglong *)(lVar5 + -0x20);
  lVar2 = *(longlong *)(lVar5 + -0x20);
  *(longlong *)(lVar5 + -0x20) = *(longlong *)(lVar5 + -0x20) + -0x406a102;
  *(ulonglong *)(lVar5 + -0x20) =
       (ulonglong)bVar11 * 0x4000 | (ulonglong)SBORROW8(lVar2,0x406a102) * 0x800 |
       (ulonglong)bVar9 * 0x400 | (ulonglong)bVar8 * 0x200 |
       (ulonglong)(*(longlong *)(lVar5 + -0x20) < 0) * 0x80 |
       (ulonglong)(*(longlong *)(lVar5 + -0x20) == 0) * 0x40 | (ulonglong)bVar7 * 0x10 |
       (ulonglong)((POPCOUNT(*(ulonglong *)(lVar5 + -0x20) & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(uVar1 < 0x406a102) | (ulonglong)bVar13 * 0x200000 | (ulonglong)bVar12 * 0x40000;
  *(undefined8 *)(lVar5 + -0x18) = unaff_RSI;
  *(undefined8 *)(lVar5 + -8) = 0x4284ba0;
  *(undefined8 *)(lVar5 + -0x10) = param_4;
  *(undefined8 *)(lVar5 + -0x18) = param_4;
  *(undefined8 *)(lVar5 + -0x10) = 0x156ef2e25;
  return;
}



// FUNCTION 14d884198 FUN_14d884198 body=82 status=ok
// SIG undefined FUN_14d884198(void)

void FUN_14d884198(undefined8 param_1,undefined8 param_2,ulonglong param_3,longlong *param_4)

{
  ulonglong unaff_R12;
  
  *param_4 = unaff_R12 + param_3 + (unaff_R12 & param_3) * -2;
  thunk_FUN_160f41655(param_1);
  return;
}



// FUNCTION 14d88431c FUN_14d88431c body=99 status=ok
// SIG undefined FUN_14d88431c(void)

void FUN_14d88431c(uint param_1,undefined8 param_2,uint param_3)

{
  uint in_EAX;
  int unaff_R12D;
  
  (*(code *)0x160ba4830)
            (~((~((~param_3 + param_1) - (-1 - unaff_R12D)) |
               ~(((param_1 | ~in_EAX) + in_EAX) - param_1)) ^ 0xffffffff));
  return;
}



// FUNCTION 14d8843a2 FUN_14d8843a2 body=38 status=ok
// SIG undefined FUN_14d8843a2(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d8843ba) overlaps instruction at (ram,0x00014d8843b9)
    */
/* WARNING: Removing unreachable block (ram,0x00014d884435) */
/* WARNING: Removing unreachable block (ram,0x00014d884441) */
/* WARNING: Removing unreachable block (ram,0x00014d884498) */
/* WARNING: Removing unreachable block (ram,0x00014d8844c5) */
/* WARNING: Removing unreachable block (ram,0x00014d8844cb) */
/* WARNING: Removing unreachable block (ram,0x00014d8844d1) */
/* WARNING: Removing unreachable block (ram,0x00014d884546) */
/* WARNING: Removing unreachable block (ram,0x00014d88454f) */
/* WARNING: Removing unreachable block (ram,0x0001620a9cec) */
/* WARNING: Removing unreachable block (ram,0x0001620a9cf1) */
/* WARNING: Removing unreachable block (ram,0x0001620a9d39) */
/* WARNING: Removing unreachable block (ram,0x0001620a9d34) */
/* WARNING: Removing unreachable block (ram,0x0001620a9d73) */
/* WARNING: Removing unreachable block (ram,0x0001620a9d79) */
/* WARNING: Removing unreachable block (ram,0x0001620a9d6e) */
/* WARNING: Removing unreachable block (ram,0x00015b57d79a) */
/* WARNING: Removing unreachable block (ram,0x00014d88447e) */
/* WARNING: Removing unreachable block (ram,0x00014d8843f0) */
/* WARNING: Removing unreachable block (ram,0x00014d88443c) */
/* WARNING: Removing unreachable block (ram,0x000165e93f27) */
/* WARNING: Removing unreachable block (ram,0x000165f13a70) */
/* WARNING: Removing unreachable block (ram,0x00014d8843b9) */
/* WARNING: Removing unreachable block (ram,0x000156f089ce) */
/* WARNING: Removing unreachable block (ram,0x000156f089d4) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x000165f13a57 */
/* WARNING: Removing unreachable block (ram,0x000165f13a21) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8843a2(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  ushort in_R11W;
  undefined8 in_stack_00000008;
  longlong lVar2;
  ushort in_stack_00000010;
  ushort uStackX_20;
  
  lVar2 = CONCAT44((int)((ulonglong)in_stack_00000008 >> 0x20) + -1,(int)in_stack_00000008);
  *(undefined4 *)(&stack0x088d8970 + lVar2) = 0xffffffff;
                    /* WARNING: Bad instruction - Truncating control flow here */
  FUN_161a5c41c();
  uVar1 = *(ulonglong *)(CONCAT62((int6)((ulonglong)lVar2 >> 0x10),0x7e8) + -0x28);
  FUN_16106604c(uStackX_20,FUN_16106604c,
                CONCAT62(0xffffffffffff,
                         -(uStackX_20 |
                          ~((in_R11W - (in_stack_00000010 | in_R11W)) + in_stack_00000010))),
                uVar1 + unaff_RBP + (uVar1 & unaff_RBP) * -2);
  return;
}



// FUNCTION 14d884565 FUN_14d884565 body=173 status=ok
// SIG undefined FUN_14d884565(void)

void FUN_14d884565(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_16477ab27(0x4dd93b2d,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d884613 FUN_14d884613 body=170 status=ok
// SIG undefined FUN_14d884613(void)

void FUN_14d884613(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulonglong param_7)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  longlong in_RAX;
  ulonglong unaff_RDI;
  undefined8 in_R10;
  ulonglong in_R11;
  
  lVar2 = *(longlong *)(in_RAX + 8);
  *(ulonglong *)(in_RAX + 8) = *(ulonglong *)(in_RAX + 8) & unaff_RDI;
  *(longlong *)(in_RAX + 8) = *(longlong *)(in_RAX + 8) << 1;
  *(ulonglong *)(in_RAX + 8) = (lVar2 + unaff_RDI) - *(longlong *)(in_RAX + 8);
  *(ulonglong *)(in_RAX + 8) = *(ulonglong *)(in_RAX + 8) | param_1;
  *(ulonglong *)(in_RAX + 8) = ~(in_R11 & *(ulonglong *)(in_RAX + 8));
  puVar1 = (undefined8 *)(param_7 ^ param_1);
  pcVar3 = (code *)swi(0x2e);
  (*pcVar3)();
  *puVar1 = in_R10;
  puVar1[-2] = param_2;
  puVar1[-1] = in_R10;
  *(undefined4 *)(puVar1 + -2) = 0x7450266;
  *(undefined4 *)((longlong)puVar1 - 0xc) = 0;
  puVar1[-3] = param_5;
  puVar1[-4] = param_5;
  puVar1[-5] = param_5;
  puVar1[-3] = &DAT_14d8846be;
  puVar1[-4] = &LAB_16574ae58;
  return;
}



// FUNCTION 14d88476d FUN_14d88476d body=167 status=ok
// SIG undefined FUN_14d88476d(void)

void FUN_14d88476d(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong in_R10;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong local_8;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x50);
  local_8 = *(ulonglong *)(unaff_R13 + -8);
  FUN_1572b0813(param_1);
  *(ulonglong *)((longlong)&local_8 + (in_R10 ^ 0x386e6cda)) =
       ~(uVar1 & unaff_R15) & (uVar1 | unaff_R15);
  return;
}



// FUNCTION 14d884954 FUN_14d884954 body=155 status=ok
// SIG undefined FUN_14d884954(void)

void FUN_14d884954(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  
  (*(code *)&LAB_15b71a801)(param_1,param_2,local_res8);
  return;
}



// FUNCTION 14d8849f0 FUN_14d8849f0 body=249 status=ok
// SIG undefined FUN_14d8849f0(void)

/* WARNING: Removing unreachable block (ram,0x00014d884a8f) */
/* WARNING: Removing unreachable block (ram,0x00014d884a95) */
/* WARNING: Removing unreachable block (ram,0x00016604bf39) */

void FUN_14d8849f0(void)

{
  FUN_16604bf39();
  return;
}


