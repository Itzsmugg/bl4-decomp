// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14dd573ae FUN_14dd573ae body=73 status=ok
// SIG undefined FUN_14dd573ae(void)

void FUN_14dd573ae(void)

{
  return;
}



// FUNCTION 14dd57422 FUN_14dd57422 body=468 status=ok
// SIG undefined FUN_14dd57422(void)

/* WARNING: Removing unreachable block (ram,0x00014dd574bb) */
/* WARNING: Removing unreachable block (ram,0x00014dd574c1) */
/* WARNING: Removing unreachable block (ram,0x00014dd5753e) */
/* WARNING: Removing unreachable block (ram,0x000162117c3e) */
/* WARNING: Removing unreachable block (ram,0x0001662a4128) */

void FUN_14dd57422(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong *unaff_R14;
  
  *unaff_R14 = ~*unaff_R14;
  *unaff_R14 = *unaff_R14 & ~param_1;
  *unaff_R14 = ~*unaff_R14;
  *unaff_R14 = 0xffffffffffffffff - (param_4 & *unaff_R14);
  FUN_1662a4128();
  return;
}



// FUNCTION 14dd57562 FUN_14dd57562 body=53 status=ok
// SIG undefined FUN_14dd57562(void)

void FUN_14dd57562(void)

{
  thunk_FUN_156b249bc();
  return;
}



// FUNCTION 14dd57597 FUN_14dd57597 body=100 status=ok
// SIG undefined FUN_14dd57597(void)

void FUN_14dd57597(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_retaddr;
  
  if (-1 < (longlong)unaff_retaddr) {
    FUN_164f862b3();
    return;
  }
  FUN_164f86277(*(undefined8 *)(unaff_retaddr & 0x7fffffffffffffff),param_2,param_3,FUN_164f86277);
  return;
}



// FUNCTION 14dd575fb FUN_14dd575fb body=125 status=ok
// SIG undefined FUN_14dd575fb(void)

void FUN_14dd575fb(void)

{
  return;
}



// FUNCTION 14dd57679 FUN_14dd57679 body=33 status=ok
// SIG undefined FUN_14dd57679(void)

void FUN_14dd57679(void)

{
  return;
}



// FUNCTION 14dd578f9 FUN_14dd578f9 body=92 status=ok
// SIG undefined FUN_14dd578f9(void)

void FUN_14dd578f9(undefined8 param_1,char param_2)

{
  FUN_15b68888f(param_1,'\x03' - ('\x01' - ~(0xffU - param_2)));
  return;
}



// FUNCTION 14dd57956 FUN_14dd57956 body=131 status=ok
// SIG undefined FUN_14dd57956(void)

void FUN_14dd57956(undefined8 param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong in_RAX;
  char *unaff_RSI;
  longlong unaff_R13;
  ulonglong uStackX_8;
  ulonglong local_res18;
  
  uVar2 = local_res18 ^ in_RAX;
  puVar1 = (ulonglong *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 0x10) = param_1;
  *puVar1 = uStackX_8;
  uVar3 = *(undefined8 *)(uVar2 - 0x10);
  *(ulonglong *)(uVar2 - 0x10) = *puVar1;
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ 0x2c304061;
  *puVar1 = *puVar1 ^ 0x2c304061;
  *puVar1 = (ulonglong)(&LAB_14dd579ed + *puVar1);
  *(char *)((longlong)&LastErrorValue + unaff_R13 + 3) =
       (char)((ulonglong)*(undefined8 *)(uVar2 - 0x10) >> 0x18) >> 7;
  *unaff_RSI = *unaff_RSI + (char)((ulonglong)uVar3 >> 8);
  FUN_14d7c172b();
  return;
}



// FUNCTION 14dd57a03 FUN_14dd57a03 body=313 status=ok
// SIG undefined FUN_14dd57a03(void)

/* WARNING: Removing unreachable block (ram,0x00014dd57aa6) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd57a03(void)

{
  longlong unaff_R13;
  
  if (*(longlong *)(unaff_R13 + -8) == 0) {
    FUN_14d90a13b();
    return;
  }
  FUN_1646e9ac8();
  FUN_161231d1d();
  FUN_15b10faf7();
  return;
}



// FUNCTION 14dd57d96 FUN_14dd57d96 body=198 status=ok
// SIG undefined FUN_14dd57d96(void)

/* WARNING: Removing unreachable block (ram,0x00014dd57e51) */
/* WARNING: Removing unreachable block (ram,0x00014dd57e57) */
/* WARNING: Removing unreachable block (ram,0x000162e60a2f) */
/* WARNING: Removing unreachable block (ram,0x000161b905ab) */
/* WARNING: Removing unreachable block (ram,0x000162e60aad) */
/* WARNING: Removing unreachable block (ram,0x000162e60ab3) */

void FUN_14dd57d96(void)

{
  FUN_162e60a2f();
  return;
}



// FUNCTION 14dd57e5d FUN_14dd57e5d body=79 status=ok
// SIG undefined FUN_14dd57e5d(void)

longlong FUN_14dd57e5d(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return *(ulonglong *)(unaff_RDI + -0x80) + param_1 +
         (*(ulonglong *)(unaff_RDI + -0x80) & param_1) * -2;
}



// FUNCTION 14dd58020 FUN_14dd58020 body=2 status=ok
// SIG undefined FUN_14dd58020(void)

undefined8 FUN_14dd58020(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14dd580a6 FUN_14dd580a6 body=17 status=ok
// SIG undefined FUN_14dd580a6(void)

void FUN_14dd580a6(undefined8 param_1)

{
  FUN_166a62797(param_1,&DAT_14d7a77e0);
  return;
}



// FUNCTION 14dd5832e FUN_14dd5832e body=563 status=ok
// SIG undefined FUN_14dd5832e(void)

/* WARNING: Removing unreachable block (ram,0x00014dd5845a) */
/* WARNING: Removing unreachable block (ram,0x00014dd58548) */
/* WARNING: Removing unreachable block (ram,0x00014dd5854d) */

void FUN_14dd5832e(undefined8 param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 in_RAX;
  undefined8 uVar9;
  ulonglong uVar10;
  code *pcVar11;
  undefined8 unaff_RBP;
  uint uVar12;
  uint uVar13;
  undefined8 in_R10;
  undefined8 in_R11;
  uint *puVar14;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar3;
  
  plVar1 = (longlong *)
           (&stack0xfffffffff5fea38b +
           ~(~(param_2 & 0xffffffffc4edcb34) & (param_2 | 0xffffffffc4edcb34)));
  *plVar1 = param_4;
  plVar1[-1] = in_RAX;
  *(undefined4 *)(plVar1 + -1) = 0xe912e1e7;
  *(undefined4 *)((longlong)plVar1 + -4) = 0xffffffff;
  plVar1[-1] = in_R10;
  plVar1[-2] = in_RAX;
  *(undefined4 *)(plVar1 + -2) = 0x3fbcc076;
  *(undefined4 *)((longlong)plVar1 + -0xc) = 0;
  uVar10 = ~(~(plVar1[-2] & 0xffffffffd6ae20a8U) & (plVar1[-2] | 0xffffffffd6ae20a8U));
  plVar1[-2] = in_RAX;
  *(undefined4 *)(plVar1 + -2) = 2;
  pcVar11 = FUN_161208bc1;
  plVar1[-3] = 0x14dd583c6;
  uVar9 = FUN_161208bc1();
  lVar5 = plVar1[-2];
  uVar6 = plVar1[-1];
  plVar1[-1] = in_R11;
  plVar1[-2] = unaff_RBP;
  lVar4 = *plVar1;
  *plVar1 = 0;
  *plVar1 = *plVar1;
  *plVar1 = (longlong)(pcVar11 + *plVar1);
  lVar7 = *plVar1;
  *plVar1 = lVar5;
  plVar1[-1] = (longlong)plVar1;
  uVar8 = plVar1[-1];
  *(longlong *)(uVar8 - 8) = lVar5;
  *(longlong *)(uVar8 - 0x10) = lVar5;
  *(undefined8 *)(uVar8 - 0x18) = unaff_R13;
  *(undefined8 *)(uVar8 - 0x20) = uVar6;
  if (7 < uVar8) {
    *(longlong *)(uVar8 - 0x20) = lVar7;
    puVar14 = (uint *)(uVar8 - 0x20);
    *(undefined8 *)(uVar8 - 0x28) = unaff_R14;
    *(uint *)(uVar8 - 0x30) = 0;
    *puVar14 = *(uint *)(uVar8 - 0x30);
    *puVar14 = *puVar14 ^ 0x1c8bb23c;
    *puVar14 = *puVar14 ^ 0x2fbc8809;
    *(undefined8 *)(uVar8 - 0x28) = uVar9;
    *(longlong *)(uVar8 - 0x30) = lVar4;
    *(ulonglong *)(uVar8 - 0x30) = uVar10;
    uVar12 = ~(*puVar14 & 0xccc8c5ca) + 0xccc8c5ca;
    *puVar14 = ~*puVar14;
    uVar2 = *puVar14;
    uVar3 = *puVar14;
    uVar13 = uVar12 - *puVar14;
    *puVar14 = uVar13;
    *(ulonglong *)(uVar8 - 0x38) =
         (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW4(uVar12,uVar3) * 0x800 |
         (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
         (ulonglong)((int)uVar13 < 0) * 0x80 | (ulonglong)(uVar13 == 0) * 0x40 |
         (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar13 & 0xff) & 1U) == 0) * 4 |
         (ulonglong)(uVar12 < uVar2) | (ulonglong)(in_ID & 1) * 0x200000 |
         (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
         (ulonglong)(in_AC & 1) * 0x40000;
    FUN_16512c548();
    return;
  }
  FUN_165ee3358();
  return;
}



// FUNCTION 14dd586d7 FUN_14dd586d7 body=31 status=ok
// SIG undefined FUN_14dd586d7(void)

void FUN_14dd586d7(undefined8 param_1)

{
  undefined8 unaff_retaddr;
  
  thunk_FUN_15b642ca5(param_1,unaff_retaddr);
  return;
}



// FUNCTION 14dd5878a FUN_14dd5878a body=133 status=ok
// SIG undefined FUN_14dd5878a(void)

void FUN_14dd5878a(undefined8 param_1)

{
  FUN_156b436b2(param_1);
  return;
}



// FUNCTION 14dd5894d FUN_14dd5894d body=178 status=ok
// SIG undefined FUN_14dd5894d(void)

/* WARNING: Instruction at (ram,0x0001653078e6) overlaps instruction at (ram,0x0001653078e5)
    */
/* WARNING: Removing unreachable block (ram,0x00014dd58a08) */
/* WARNING: Removing unreachable block (ram,0x00016530786f) */
/* WARNING: Removing unreachable block (ram,0x000165307896) */
/* WARNING: Removing unreachable block (ram,0x000165307895) */
/* WARNING: Removing unreachable block (ram,0x0001653078e5) */
/* WARNING: Removing unreachable block (ram,0x0001653078e6) */

void FUN_14dd5894d(void)

{
  undefined1 local_res8 [32];
  
  FUN_16530786f(local_res8);
  return;
}



// FUNCTION 14dd58a81 FUN_14dd58a81 body=188 status=ok
// SIG undefined FUN_14dd58a81(void)

void FUN_14dd58a81(undefined8 param_1,undefined8 param_2)

{
  FUN_156e03b5b(param_1,param_2);
  return;
}



// FUNCTION 14dd58e72 FUN_14dd58e72 body=716 status=ok
// SIG undefined FUN_14dd58e72(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001628d96e5) overlaps instruction at (ram,0x0001628d96e4)
    */
/* WARNING: Removing unreachable block (ram,0x000164814930) */
/* WARNING: Removing unreachable block (ram,0x000164814936) */
/* WARNING: Removing unreachable block (ram,0x00014dd5902e) */
/* WARNING: Removing unreachable block (ram,0x00015b1b1bb9) */
/* WARNING: Removing unreachable block (ram,0x0001628d97c2) */
/* WARNING: Removing unreachable block (ram,0x00015708a2d5) */
/* WARNING: Removing unreachable block (ram,0x00014dca58eb) */
/* WARNING: Removing unreachable block (ram,0x00016185a000) */
/* WARNING: Removing unreachable block (ram,0x00015b04edcf) */

ulonglong FUN_14dd58e72(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  short sVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  code *pcVar14;
  undefined8 unaff_RBX;
  ulonglong uVar15;
  longlong unaff_RSI;
  ulonglong uVar16;
  longlong unaff_RDI;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined8 in_R10;
  undefined8 in_R11;
  byte bVar21;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  byte in_AF;
  bool bVar23;
  byte in_TF;
  bool bVar24;
  byte in_IF;
  bool bVar25;
  bool bVar26;
  byte in_NT;
  bool bVar27;
  byte in_AC;
  bool bVar28;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  bool bVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  longlong lVar22;
  
  puVar2 = (ulonglong *)(&stack0xfffffffffaaa0405 + unaff_RSI);
  *puVar2 = *(ulonglong *)(unaff_RDI + -0x48);
  uVar16 = ~(*puVar2 & param_1) & (*puVar2 | param_1);
  uVar15 = *(ulonglong *)(unaff_RDI + -0x88) ^ param_1;
  *puVar2 = unaff_R13;
  puVar3 = puVar2 + -1;
  *puVar3 = unaff_R13;
  uVar10 = *(undefined8 *)(unaff_RDI + -0x90);
  puVar2[-2] = param_1;
  *(undefined4 *)(puVar2 + -3) = 0x462f36c1;
  *(undefined4 *)((longlong)puVar2 + -0x14) = 0;
  *(undefined8 *)((longlong)puVar3 + (puVar2[-3] ^ 0x462f36c9)) = uVar10;
  uVar10 = puVar2[-2];
  uVar12 = *puVar3;
  puVar2[-1] = uVar16;
  puVar2[-2] = uVar16;
  puVar2[-3] = uVar12;
  puVar2[-4] = *(ulonglong *)(unaff_RDI + -8);
  uVar12 = puVar2[-4];
  puVar2[-4] = 0x14dd58f15;
  uVar10 = FUN_1568ce572(uVar10);
  uVar16 = puVar2[-3];
  puVar2[-3] = param_3;
  puVar2[-4] = uVar10;
  uVar10 = puVar2[-4];
  puVar2[-4] = param_2;
  puVar2[-5] = uVar10;
  puVar2[-1] = uVar12;
  puVar3 = puVar2 + -2;
  uVar31 = *puVar3;
  *puVar3 = unaff_R15;
  uVar12 = *puVar2;
  puVar2[-3] = uVar16;
  uVar20 = (uint)uVar15 ^ 0xffffffff;
  puVar2[-4] = puVar2[-4];
  pcVar14 = FUN_16152ac9e;
  puVar2[-5] = 0x14dd58f97;
  uVar11 = FUN_16152ac9e();
  uVar10 = puVar2[-4];
  puVar2[-4] = in_R11;
  puVar2[-5] = uVar10;
  uVar10 = puVar2[-5];
  uVar17 = puVar2[-4];
  *pcVar14 = (code)~(byte)*pcVar14;
  *pcVar14 = (code)(0x96 - (char)*pcVar14);
  uVar5 = puVar2[-3];
  uVar16 = *puVar3;
  *puVar3 = unaff_R12;
  puVar2[-3] = uVar16;
  uVar30 = puVar2[-3];
  puVar2[-3] = uVar11;
  puVar4 = puVar2 + -4;
  *puVar4 = uVar11;
  *(undefined1 *)puVar4 = 0xaf;
  uVar11 = *puVar4;
  bVar21 = (byte)uVar30 & (byte)(uVar11 ^ 0x4f);
  lVar22 = CONCAT71((int7)(unaff_R12 >> 8),bVar21);
  puVar2[-4] = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
               (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((char)bVar21 < '\0') * 0x80 |
               (ulonglong)(bVar21 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
               (ulonglong)((POPCOUNT(bVar21) & 1U) == 0) * 4 | (ulonglong)(in_ID & 1) * 0x200000 |
               (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
               (ulonglong)(in_AC & 1) * 0x40000;
  if ((puVar2[-4] & 1) == 0) {
    uVar12 = FUN_15708a251();
    return uVar12;
  }
  uVar30 = puVar2[-4];
  bVar27 = (uVar30 & 0x4000) != 0;
  bVar26 = (uVar30 & 0x400) != 0;
  bVar25 = (uVar30 & 0x200) != 0;
  bVar24 = (uVar30 & 0x100) != 0;
  bVar23 = (uVar30 & 0x10) != 0;
  bVar29 = (uVar30 & 0x200000) != 0;
  bVar28 = (uVar30 & 0x40000) != 0;
  if ((uVar30 & 1) == 0 && (uVar30 & 0x40) == 0) {
    puVar2[-3] = uVar10;
    puVar2[-4] = unaff_RBX;
    uVar10 = puVar2[-4];
    uVar6 = puVar2[-3];
    *(undefined4 *)(uVar15 + 8) = 0;
    puVar2[-3] = ~uVar12;
    puVar2[-4] = uVar11 ^ 0x4f;
    uVar20 = *(uint *)(uVar15 + 8);
    *(undefined4 *)(uVar15 + 8) = 0;
    *(uint *)(uVar15 + 8) = ~*(uint *)(uVar15 + 8);
    *(uint *)(uVar15 + 8) = *(uint *)(uVar15 + 8) & uVar20;
    uVar7 = puVar2[-4];
    uVar12 = puVar2[-3];
    puVar2[-3] = 0;
    puVar2[-3] = puVar2[-3] + uVar16;
    puVar2[-4] = uVar5;
    uVar20 = *(uint *)(uVar15 + 8);
    uVar8 = puVar2[-4];
    uVar18 = (uint)uVar5;
    uVar13 = uVar20 - uVar18;
    *(uint *)(uVar15 + 8) = uVar13;
    puVar2[-4] = (ulonglong)bVar27 * 0x4000 | (ulonglong)SBORROW4(uVar20,uVar18) * 0x800 |
                 (ulonglong)bVar26 * 0x400 | (ulonglong)bVar25 * 0x200 | (ulonglong)bVar24 * 0x100 |
                 (ulonglong)((int)uVar13 < 0) * 0x80 | (ulonglong)(uVar13 == 0) * 0x40 |
                 (ulonglong)bVar23 * 0x10 | (ulonglong)((POPCOUNT(uVar13 & 0xff) & 1U) == 0) * 4 |
                 (ulonglong)(uVar20 < uVar18) | (ulonglong)bVar29 * 0x200000 |
                 (ulonglong)bVar28 * 0x40000;
    if ((puVar2[-4] & 1) == 0) {
      uVar12 = FUN_161859efe();
      return uVar12;
    }
    uVar16 = puVar2[-4];
    if ((uVar16 & 1) != 0) {
      uVar10 = puVar2[-3];
      puVar2[-3] = uVar6;
      puVar2[-4] = uVar10;
      uVar20 = (uint)uVar6;
      puVar2[-5] = unaff_R14;
      uVar18 = ~uVar20 & (~uVar20 + uVar20) - ~uVar20;
      uVar10 = puVar2[-4];
      puVar1 = (uint *)(uVar15 + 8);
      uVar20 = *puVar1;
      uVar13 = *puVar1;
      uVar19 = uVar18 - *puVar1;
      puVar2[-4] = uVar7;
      puVar2[-5] = uVar5 & 0xffffffff;
      *(uint *)(uVar15 + 8) = uVar19;
      puVar2[-6] = (ulonglong)((uVar16 & 0x4000) != 0) * 0x4000 |
                   (ulonglong)SBORROW4(uVar18,uVar13) * 0x800 |
                   (ulonglong)((uVar16 & 0x400) != 0) * 0x400 |
                   (ulonglong)((uVar16 & 0x200) != 0) * 0x200 |
                   (ulonglong)((uVar16 & 0x100) != 0) * 0x100 | (ulonglong)((int)uVar19 < 0) * 0x80
                   | (ulonglong)(uVar19 == 0) * 0x40 | (ulonglong)((uVar16 & 0x10) != 0) * 0x10 |
                   (ulonglong)((POPCOUNT(uVar19 & 0xff) & 1U) == 0) * 4 |
                   (ulonglong)(uVar18 < uVar20) | (ulonglong)((uVar16 & 0x200000) != 0) * 0x200000 |
                   (ulonglong)((uVar16 & 0x40000) != 0) * 0x40000;
      puVar2[-4] = 0x161859f74;
      FUN_14e23f78d(uVar10,uVar8);
      uVar31 = puVar2[-2];
      puVar2[-2] = uVar31;
      *(undefined4 *)(puVar2 + -2) = 0xaeec57cd;
      *(undefined4 *)((longlong)puVar2 + -0xc) = 0xffffffff;
      uVar16 = *(ulonglong *)(lVar22 + (puVar2[-2] ^ 0x5113a875));
      uVar17 = *(ulonglong *)(lVar22 + -0x50) ^ uVar31;
      if ((longlong)uVar17 < 0) {
        uVar5 = *(ulonglong *)(lVar22 + -0x90);
        puVar2[-2] = *(undefined8 *)(lVar22 + -0x68);
        puVar2[-3] = *(undefined8 *)(lVar22 + -8);
        puVar2[-4] = 0;
        puVar2[-4] = puVar2[-4] + (0xffffffffffffffff - (uVar16 & uVar31) & (uVar16 | uVar31));
        puVar2[-6] = uVar5 ^ uVar31;
        puVar2[-7] = uVar17;
        puVar2[-5] = puVar2[-4];
        puVar2[-6] = uVar10;
        puVar2[-4] = *(undefined8 *)(lVar22 + -0x98);
        puVar2[-5] = uVar12;
        *(undefined4 *)(puVar2 + -6) = 0xa1d39db6;
        *(undefined4 *)((longlong)puVar2 + -0x2c) = 0xffffffff;
        uVar12 = FUN_15b1b1bb9();
        return uVar12;
      }
      uVar12 = FUN_164814894();
      return uVar12;
    }
    puVar2[-4] = DAT_1568ce4e2;
    *(short *)((longlong)puVar2 + -0x1a) = (short)uVar31;
    sVar9 = *(short *)((longlong)puVar2 + -0x1a) - (short)uVar10;
    puVar2[-4] = CONCAT62((int6)((ulonglong)uVar7 >> 0x10),sVar9);
    puVar2[-5] = CONCAT62((int6)(uVar31 >> 0x10),sVar9);
    puVar2[-4] = (ulonglong)&DAT_16281b9e4;
    return ~(DAT_1568ce53a & uVar12) & (DAT_1568ce53a | uVar12);
  }
  uVar11 = puVar2[-3];
  puVar2[-3] = 0;
  puVar2[-3] = puVar2[-3] - uVar15;
  puVar2[-3] = -puVar2[-3];
  puVar2[-4] = uVar31;
  puVar2[-5] = in_R10;
  uVar10 = puVar2[-5];
  puVar2[-5] = (ulonglong)FUN_1568ce572;
  puVar2[-6] = 0x1568ce5e0;
  uVar6 = puVar2[-5];
  uVar7 = puVar2[-3];
  uVar12 = *puVar3;
  bVar21 = 0xff - (~bVar21 & ((byte)uVar16 | (byte)puVar2[-6])) & 0x1f;
  uVar16 = puVar2[-1];
  uVar20 = (uVar20 << bVar21 | uVar20 >> 0x20 - bVar21) + (int)uVar16;
  puVar2[-1] = uVar10;
  *puVar3 = uVar17;
  puVar2[-3] = uVar16;
  uVar10 = puVar2[-3];
  puVar2[-3] = (ulonglong)bVar27 * 0x4000 | (ulonglong)SCARRY8((longlong)puVar2,-8) * 0x800 |
               (ulonglong)bVar26 * 0x400 | (ulonglong)bVar25 * 0x200 | (ulonglong)bVar24 * 0x100 |
               (ulonglong)((longlong)(puVar2 + -1) < 0) * 0x80 |
               (ulonglong)(puVar2 == (ulonglong *)&DAT_00000008) * 0x40 | (ulonglong)bVar23 * 0x10 |
               (ulonglong)((POPCOUNT((ulonglong)(puVar2 + -1) & 0xff) & 1U) == 0) * 4 |
               (ulonglong)(&DAT_00000007 < puVar2) | (ulonglong)bVar29 * 0x200000 |
               (ulonglong)bVar28 * 0x40000;
  puVar2[-3] = puVar2[-3] | 4;
  uVar31 = puVar2[-3];
  if ((uVar31 & 4) == 0) {
    DAT_820f002424ba0f9c = (char)uVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar2[-3] = (ulonglong)((uVar31 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar31 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar31 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar31 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar31 & 0x100) != 0) * 0x100 | (ulonglong)((uVar31 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar31 & 0x40) != 0) * 0x40 | (ulonglong)((uVar31 & 0x10) != 0) * 0x10
               | 4 | (ulonglong)((uVar31 & 1) != 0) |
               (ulonglong)((uVar31 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar31 & 0x40000) != 0) * 0x40000;
  if ((puVar2[-3] & 1) == 0) {
    uVar31 = puVar2[-3];
  }
  else {
    uVar31 = puVar2[-3];
    if ((uVar31 & 1) == 0 && (uVar31 & 0x40) == 0) {
      *(undefined4 *)puVar3 = 0x56752a19;
      *(undefined4 *)((longlong)puVar2 + -0xc) = 0;
      puVar2 = (ulonglong *)((longlong)puVar2 + ((*puVar3 ^ 0x585dce6b) - 0xe28e482));
      *puVar2 = *(ulonglong *)(unaff_RDI + -0x60);
      uVar12 = *puVar2;
      if ((uVar12 | uVar16) != 0) {
        *puVar2 = *(ulonglong *)(unaff_RDI + -0x70);
        uVar31 = *puVar2;
        *(undefined4 *)puVar2 = 0xb111bf43;
        *(undefined4 *)((longlong)puVar2 + 4) = 0xffffffff;
        *puVar2 = *(ulonglong *)(unaff_RDI + -0x28);
        uVar12 = FUN_164bc9eed(uVar16,*puVar2 | uVar16,
                               -1 - ((0xffffffffffffffff - uVar16 | uVar31) &
                                    ~(uVar31 & 0xffffffffffffffff - uVar16)),
                               ~((uVar16 - (uVar12 | uVar16)) + uVar12) & (uVar12 | uVar16));
        return uVar12;
      }
      uVar12 = FUN_160bcbfa2();
      return uVar12;
    }
  }
  uVar13 = 0xffffffff - (int)uVar10;
  *puVar3 = uVar11;
  puVar2[-3] = unaff_RDI;
  uVar17 = puVar2[-3];
  uVar11 = *puVar3;
  *puVar3 = puVar2[-4];
  puVar2[-3] = uVar7;
  puVar2[-4] = unaff_RBX;
  puVar2[-5] = (ulonglong)((uVar31 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar31 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar31 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar31 & 0x100) != 0) * 0x100 | 0x40 |
               (ulonglong)((uVar31 & 0x10) != 0) * 0x10 | 4 |
               (ulonglong)((uVar31 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar31 & 0x40000) != 0) * 0x40000;
  if (((uint)puVar2[-5] >> 6 & 1) == 0) {
    uVar12 = FUN_15b04ed6c();
    return uVar12;
  }
  if ((puVar2[-5] & 0x40) != 0) {
    uVar12 = puVar2[-3];
    puVar2[-3] = uVar17;
    puVar2[-4] = uVar11;
    *(undefined4 *)(puVar2 + -4) = 0x4520ce19;
    *(undefined4 *)((longlong)puVar2 + -0x1c) = 0;
    uVar10 = puVar2[-4];
    puVar2[-4] = (ulonglong)~uVar20;
    puVar2[-5] = uVar12;
    puVar2[-5] = uVar11;
    puVar2[-6] = uVar6;
    uVar18 = 0x4088e3f5 - (~((int)uVar10 + 0x7a564df2U) + 2);
    uVar10 = puVar2[-4];
    puVar2[-4] = (ulonglong)(uVar13 + (-1 - (~uVar20 | uVar13)));
    puVar2[-5] = puVar2[-6];
    puVar2[-5] = uVar16;
    uVar12 = FUN_14ddab29b(puVar2[-5],uVar5,(-uVar18 - (uint)uVar10) + ((uint)uVar10 | uVar18) * 2);
    return uVar12;
  }
  uVar31 = puVar2[-3];
  uVar12 = ~(uVar5 & uVar17) & (uVar5 | uVar17) ^ *(ulonglong *)(uVar12 - 0x78);
  puVar2[-3] = uVar16;
  uVar10 = puVar2[-3];
  puVar2[-3] = unaff_R14;
  puVar2[-4] = (ulonglong)~uVar20;
  uVar6 = puVar2[-4];
  puVar2[-3] = uVar11;
  puVar2[-4] = uVar31;
  puVar2[-3] = puVar2[-3];
  *(undefined4 *)(puVar2 + -3) = 0;
  *(undefined4 *)((longlong)puVar2 + -0x14) = 0;
  puVar2[-3] = 0xffffffff;
  *(undefined4 *)((longlong)puVar2 + -0x14) = 0;
  *(int *)(puVar2 + -3) = (int)puVar2[-3];
  if ((int)puVar2[-3] < 0) {
    *(undefined4 *)((longlong)puVar2 + -0x14) = 0xffffffff;
  }
  puVar2[-3] = (ulonglong)uVar20;
  uVar12 = thunk_FUN_156f94c36(uVar10,uVar12 + uVar11 + (uVar12 & uVar11) * -2,uVar6,puVar2[-3]);
  return uVar12;
}



// FUNCTION 14dd59262 FUN_14dd59262 body=136 status=ok
// SIG undefined FUN_14dd59262(void)

void FUN_14dd59262(undefined8 param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  ulonglong unaff_RBP;
  
  *(ulonglong *)(param_3 + 8) =
       ~(((~((param_4 - (unaff_RBP | param_4)) + unaff_RBP) + param_4) - ~unaff_RBP) +
         *(longlong *)(param_3 + 8) + 1);
  FUN_15b1d5558();
  return;
}



// FUNCTION 14dd592eb FUN_14dd592eb body=129 status=ok
// SIG undefined FUN_14dd592eb(void)

void FUN_14dd592eb(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)0x16544d6d2)(0x16544d6d2,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dd5936d FUN_14dd5936d body=170 status=ok
// SIG undefined FUN_14dd5936d(void)

void FUN_14dd5936d(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong in_RAX;
  longlong unaff_RSI;
  longlong unaff_R12;
  undefined8 unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x48);
  *(undefined8 *)(unaff_RSI + 0x20b9) = unaff_R15;
  uVar2 = *(ulonglong *)(unaff_R12 + -0x50);
  *(ulonglong *)(unaff_RSI + 0x20b9) = in_RAX;
  *(ulonglong *)(unaff_RSI + 0x20b1) = uVar1 ^ in_RAX;
  uVar3 = *(undefined8 *)(unaff_RSI + 0x20b9);
  *(ulonglong *)(unaff_RSI + 0x20b9) = param_2 ^ in_RAX;
  *(ulonglong *)(unaff_RSI + 0x20b1) = param_2 ^ in_RAX;
  *(ulonglong *)(unaff_RSI + 0x20a9) = ~(uVar2 & in_RAX) & (uVar2 | in_RAX);
  *(undefined8 *)(unaff_RSI + 0x20a1) = uVar3;
  *(undefined8 *)(unaff_RSI + 0x2099) = uVar3;
  *(undefined1 **)(unaff_RSI + 0x20a1) = &LAB_14dd59418;
  FUN_165c65bba();
  return;
}



// FUNCTION 14dd5954c FUN_14dd5954c body=462 status=ok
// SIG undefined FUN_14dd5954c(void)

/* WARNING: Removing unreachable block (ram,0x00014dd5967b) */
/* WARNING: Removing unreachable block (ram,0x00015b08d0cd) */
/* WARNING: Removing unreachable block (ram,0x00014dd59681) */
/* WARNING: Removing unreachable block (ram,0x00014dd59687) */

void FUN_14dd5954c(ulonglong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  longlong in_R11;
  undefined8 in_stack_00000008;
  longlong local_res18 [2];
  
  *(undefined8 *)((longlong)local_res18 + in_R11) = unaff_RDI;
  lVar2 = local_res18[0];
  local_res18[0] = *(longlong *)(unaff_RSI + -8);
  FUN_16634a23b(param_1,in_stack_00000008);
  uVar1 = *(ulonglong *)(lVar2 + -0x70);
  FUN_162f4d494(param_1,uVar1,uVar1 ^ param_1,*(ulonglong *)(lVar2 + -0x60) ^ param_1);
  return;
}



// FUNCTION 14dd5971f FUN_14dd5971f body=175 status=ok
// SIG undefined FUN_14dd5971f(void)

void FUN_14dd5971f(void)

{
  FUN_1658f13bc();
  return;
}



// FUNCTION 14dd59ac1 FUN_14dd59ac1 body=132 status=ok
// SIG undefined FUN_14dd59ac1(void)

void FUN_14dd59ac1(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 local_res8;
  
                    /* WARNING: Could not recover jumptable at 0x00014dd59b43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,local_res8);
  return;
}



// FUNCTION 14dd59f12 FUN_14dd59f12 body=142 status=ok
// SIG undefined FUN_14dd59f12(void)

void FUN_14dd59f12(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong unaff_RDI;
  ulonglong uVar1;
  undefined8 local_res18;
  
  uVar1 = ~(~(unaff_RDI ^ 0xffffffffffffffff) &
           (~(param_1 & 0xffffffffcc94bef0) - 0x336b4110) - ~param_1);
  if (param_4 == uVar1) {
    FUN_165e93f27();
    return;
  }
  if (param_4 - uVar1 != 1) {
    FUN_15b1f0218();
    return;
  }
  FUN_15b1f01fc(local_res18);
  return;
}



// FUNCTION 14dd59fa0 FUN_14dd59fa0 body=8 status=ok
// SIG undefined FUN_14dd59fa0(void)

void FUN_14dd59fa0(void)

{
  return;
}



// FUNCTION 14dd5a0d1 FUN_14dd5a0d1 body=238 status=ok
// SIG undefined FUN_14dd5a0d1(void)

/* WARNING: Removing unreachable block (ram,0x00014dd5a149) */
/* WARNING: Removing unreachable block (ram,0x00014dd5a14f) */

void FUN_14dd5a0d1(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  ulonglong in_stack_00000020;
  
  FUN_14e196f74(param_1,param_2,param_5 + param_1,param_4,
                ~((~param_1 | in_stack_00000020) & (~param_1 & ~in_stack_00000020 | param_1)));
  return;
}



// FUNCTION 14dd5a1c1 FUN_14dd5a1c1 body=105 status=ok
// SIG undefined FUN_14dd5a1c1(void)

void FUN_14dd5a1c1(void)

{
  FUN_161dcb058();
  return;
}



// FUNCTION 14dd5a22a FUN_14dd5a22a body=7 status=ok
// SIG undefined FUN_14dd5a22a(void)

void FUN_14dd5a22a(void)

{
  FUN_161dcb058();
  return;
}



// FUNCTION 14dd5a231 FUN_14dd5a231 body=179 status=ok
// SIG undefined FUN_14dd5a231(void)

void FUN_14dd5a231(undefined8 param_1)

{
  longlong in_R11;
  
  FUN_1665d02e1();
  *(undefined8 *)(&stack0x237edcc8 + in_R11) = param_1;
  return;
}



// FUNCTION 14dd5a43c FUN_14dd5a43c body=145 status=ok
// SIG undefined FUN_14dd5a43c(void)

/* WARNING: Removing unreachable block (ram,0x00014dd5a4cd) */
/* WARNING: Removing unreachable block (ram,0x00014dd5a553) */
/* WARNING: Removing unreachable block (ram,0x00014dc66d0b) */
/* WARNING: Removing unreachable block (ram,0x00014dd5a559) */

void FUN_14dd5a43c(char param_1)

{
  longlong lVar1;
  char cVar2;
  char in_AL;
  ulonglong uVar3;
  undefined8 unaff_RBP;
  ulonglong unaff_R13;
  ulonglong unaff_R15;
  longlong lVar4;
  ulonglong local_res20;
  
  lVar1 = unaff_R13 + unaff_R15 + (-1 - (~unaff_R13 | ~unaff_R15)) * -2;
  uVar3 = (local_res20 + unaff_R15) - (local_res20 & unaff_R15);
  lVar4 = (uVar3 - (~(local_res20 & unaff_R15) | uVar3)) + ~(local_res20 & unaff_R15);
  LOCK();
  cVar2 = param_1;
  if (in_AL != DAT_14d7c451d) {
    cVar2 = DAT_14d7c451d;
  }
  DAT_14d7c451d = cVar2;
  UNLOCK();
  *(undefined8 *)(lVar4 + -0x10) = unaff_RBP;
  *(undefined8 *)(lVar4 + -8) = 0x42a35bc;
  *(longlong *)(lVar4 + -0x28cf) = lVar1;
  *(longlong *)(lVar4 + -0x28d7) = lVar1;
  *(undefined **)(lVar4 + -0x28cf) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14dd5a4cd FUN_14dd5a4cd body=356 status=ok
// SIG undefined FUN_14dd5a4cd(void)

/* WARNING: Removing unreachable block (ram,0x00014dd5a559) */

void FUN_14dd5a4cd(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined8 in_RAX;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *unaff_RBP;
  longlong in_R10;
  undefined8 unaff_R15;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 uStackX_8;
  longlong local_res10;
  undefined8 local_res18;
  
  param_1 = param_1 - in_R10;
  *(undefined4 *)((longlong)&local_res18 + param_1) = 0xac7bf87;
  *(undefined4 *)((longlong)&local_res18 + param_1 + 4) = 0x5592d50b;
  piVar1 = (int *)((longlong)&local_res18 + param_1 + 4);
  *piVar1 = *piVar1 + 0x5e212ac6;
  piVar1 = (int *)((longlong)&local_res18 + param_1 + 4);
  *piVar1 = *piVar1 + 0x4c4c002f;
  uVar3 = *(undefined8 *)((longlong)&local_res18 + param_1);
  *(undefined8 *)((longlong)&local_res18 + param_1) = unaff_R15;
  *(undefined8 *)((longlong)&local_res10 + param_1) = uVar3;
  lVar5 = *(longlong *)((longlong)&local_res10 + param_1) + -0xac7bf7f;
  uVar3 = *(undefined8 *)((longlong)&local_res18 + param_1);
  puVar4 = &stack0xfffffffff53840a1 + lVar5 + param_1 + 0xac7bf7f;
  _fxrstor(puVar4);
  *(ulonglong *)(puVar4 + -8) = CONCAT71((int7)((ulonglong)lVar5 >> 8),0xd);
  uVar2 = puVar4[-8];
  unaff_RBP[-1] = in_RAX;
  *(undefined4 *)(unaff_RBP + -1) = 0;
  *(int *)(unaff_RBP + -1) = *(int *)(unaff_RBP + -1) + 0x7b031a8f;
  *(undefined4 *)((longlong)unaff_RBP + -4) = 0;
  uVar6 = unaff_RBP[-1];
  unaff_RBP[-1] = uVar6;
  uVar7 = unaff_RBP[-1];
  uVar6 = uVar6 | 0xffffffff83750b44;
  unaff_RBP[-1] = local_res10;
  uVar7 = 0xffffffffffffffff - ((~uVar6 | ~(uVar7 & 0xffffffff83750b44)) + uVar6 + 1) ^ 0x789ee34;
  unaff_RBP[-1] =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((longlong)uVar7 < 0) * 0x80 |
       (ulonglong)(uVar7 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
       (ulonglong)((POPCOUNT(uVar7 & 0xff) & 1U) == 0) * 4 | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  uVar7 = unaff_RBP[-1];
  unaff_RBP[-1] =
       (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar7 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar7 & 0x400) != 0) * 0x400 | (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar7 & 0x100) != 0) * 0x100 | (ulonglong)((uVar7 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar7 & 0x40) != 0) * 0x40 | (ulonglong)((uVar7 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar7 & 4) != 0) * 4 | (ulonglong)((uVar7 & 1) != 0) |
       (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000;
  unaff_RBP[-1] = 0x14dc66db0;
  FUN_164f8b297(FUN_164f8b297,uStackX_8,param_3,uVar2);
  unaff_RBP[-1] = param_3;
  unaff_RBP[1] = uVar3;
  *unaff_RBP = uVar3;
  unaff_RBP[1] = &LAB_14dc66de6;
  return;
}



// FUNCTION 14dd5a559 FUN_14dd5a559 body=19 status=ok
// SIG undefined FUN_14dd5a559(void)

void FUN_14dd5a559(void)

{
  FUN_14d7bda21();
  return;
}



// FUNCTION 14dd5a7ae FUN_14dd5a7ae body=61 status=ok
// SIG undefined FUN_14dd5a7ae(void)

void FUN_14dd5a7ae(void)

{
  longlong unaff_RBP;
  undefined4 local_res10 [6];
  
  *(undefined4 *)((longlong)local_res10 + unaff_RBP) = 0;
  return;
}



// FUNCTION 14dd5a8df FUN_14dd5a8df body=176 status=ok
// SIG undefined FUN_14dd5a8df(void)

void FUN_14dd5a8df(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  longlong local_res20;
  
  *(undefined8 *)(local_res20 + -8) = param_2;
  *(undefined8 *)(local_res20 + -0x10) = unaff_R12;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R12;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = unaff_R13;
  *(undefined8 *)(local_res20 + -8) = 0;
  *(longlong *)(local_res20 + -8) = *(longlong *)(local_res20 + -8) + -0x16597685d;
  *(longlong *)(local_res20 + -8) = -*(longlong *)(local_res20 + -8);
  FUN_1659767f6(param_1,FUN_1659767f6);
  return;
}



// FUNCTION 14dd5a991 FUN_14dd5a991 body=328 status=ok
// SIG undefined FUN_14dd5a991(void)

void FUN_14dd5a991(void)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar3 = *(ulonglong *)(unaff_R13 + -0x40) + unaff_R15 +
          ~(~*(ulonglong *)(unaff_R13 + -0x40) | ~unaff_R15) * -2;
  pcVar4 = FUN_14da2ebee;
  FUN_14da2ebee();
  uVar3 = ~(~(uVar3 & 0xffffffffd76e0580) & (uVar3 | 0xffffffffd76e0580));
  puVar1 = (uint *)(&stack0xfffffffff5b6e1a6 + uVar3);
  *puVar1 = 0x2c1eff55;
  *(undefined8 *)(&stack0xfffffffff5b6e19e + uVar3) = 0;
  *(undefined4 *)(&stack0xfffffffff5b6e19e + uVar3) = 0xc280ce9f;
  *(code **)(&stack0xfffffffff5b6e19e + uVar3) = pcVar4;
  uVar2 = *puVar1;
  *puVar1 = ~*puVar1;
  *puVar1 = (~(uVar2 & 0xd46e5461) + 0xd46e5461) - *puVar1;
  *(undefined **)(&stack0xfffffffff5b6e19e + uVar3) = &DAT_16208d147;
  return;
}



// FUNCTION 14dd5ab7f FUN_14dd5ab7f body=122 status=ok
// SIG undefined FUN_14dd5ab7f(void)

void FUN_14dd5ab7f(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10;
  
  FUN_16234f3c6(param_1,param_2,local_res10);
  return;
}



// FUNCTION 14dd5ac68 FUN_14dd5ac68 body=148 status=ok
// SIG undefined FUN_14dd5ac68(void)

/* WARNING: Instruction at (ram,0x00014dd5ac8b) overlaps instruction at (ram,0x00014dd5ac8a)
    */

void FUN_14dd5ac68(undefined8 param_1,char param_2,undefined8 param_3,ulonglong param_4)

{
  char cVar1;
  longlong unaff_RSI;
  char *unaff_RDI;
  undefined1 unaff_R13B;
  undefined7 unaff_000000a9;
  ulonglong unaff_R15;
  bool in_ZF;
  
  if ((in_ZF) ||
     (cVar1 = *unaff_RDI, *unaff_RDI = *unaff_RDI - param_2,
     SBORROW1(cVar1,param_2) == *unaff_RDI < '\0')) {
    param_4 = *(ulonglong *)(CONCAT71(unaff_000000a9,unaff_R13B) + -0x60) ^ unaff_R15;
  }
  FUN_14dd265b1(unaff_RSI + -0x223f8797,param_2,
                *(ulonglong *)(CONCAT71(unaff_000000a9,unaff_R13B) + -0x88) ^ unaff_R15,param_4);
  return;
}



// FUNCTION 14dd5af9a FUN_14dd5af9a body=125 status=ok
// SIG undefined FUN_14dd5af9a(void)

void FUN_14dd5af9a(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_14d8a7f31(param_1,*(undefined8 *)(unaff_RDI + -0x50),*(ulonglong *)(unaff_RDI + -0x30),
                *(ulonglong *)(unaff_RDI + -0x30) | param_1);
  return;
}



// FUNCTION 14dd5b019 FUN_14dd5b019 body=14 status=ok
// SIG undefined FUN_14dd5b019(void)

void FUN_14dd5b019(undefined8 param_1)

{
  longlong unaff_R12;
  undefined8 auStackX_10 [3];
  
  *(undefined8 *)((longlong)auStackX_10 + unaff_R12) = param_1;
  FUN_14d7c1f9f(auStackX_10[0]);
  return;
}



// FUNCTION 14dd5b0bb FUN_14dd5b0bb body=170 status=ok
// SIG undefined FUN_14dd5b0bb(void)

void FUN_14dd5b0bb(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_162f2749d(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,FUN_162f2749d,~(unaff_RSI & param_3));
  return;
}



// FUNCTION 14dd5b167 FUN_14dd5b167 body=177 status=ok
// SIG undefined FUN_14dd5b167(void)

void FUN_14dd5b167(void)

{
  return;
}



// FUNCTION 14dd5b400 FUN_14dd5b400 body=163 status=ok
// SIG undefined FUN_14dd5b400(void)

/* WARNING: Instruction at (ram,0x000164777ba0) overlaps instruction at (ram,0x000164777b9d)
    */
/* WARNING: Removing unreachable block (ram,0x000165d6aca5) */
/* WARNING: Removing unreachable block (ram,0x000165d6ac1a) */
/* WARNING: Removing unreachable block (ram,0x000162bb136b) */
/* WARNING: Removing unreachable block (ram,0x000165d6ac9a) */
/* WARNING: Removing unreachable block (ram,0x000165d6aca0) */
/* WARNING: Removing unreachable block (ram,0x00014dd5b4a5) */
/* WARNING: Removing unreachable block (ram,0x00014dd5b4a9) */
/* WARNING: Removing unreachable block (ram,0x00014dd5b5e4) */
/* WARNING: Removing unreachable block (ram,0x000165d6aa55) */
/* WARNING: Removing unreachable block (ram,0x000165d6aaf3) */
/* WARNING: Removing unreachable block (ram,0x000162da3450) */
/* WARNING: Removing unreachable block (ram,0x000165d6aaf9) */
/* WARNING: Removing unreachable block (ram,0x000165d6ac0a) */
/* WARNING: Removing unreachable block (ram,0x000165d6ac0f) */
/* WARNING: Removing unreachable block (ram,0x000165d6ac15) */
/* WARNING: Removing unreachable block (ram,0x00014dd5b5ea) */
/* WARNING: Removing unreachable block (ram,0x00014dd5b6b3) */
/* WARNING: Removing unreachable block (ram,0x00014dd5b6b5) */
/* WARNING: Removing unreachable block (ram,0x00014dd5b7c7) */
/* WARNING: Removing unreachable block (ram,0x00014dd5b7d2) */
/* WARNING: Removing unreachable block (ram,0x000164777b6a) */
/* WARNING: Removing unreachable block (ram,0x000164777b9d) */
/* WARNING: Removing unreachable block (ram,0x000164777b94) */
/* WARNING: Removing unreachable block (ram,0x000164777ba0) */
/* WARNING: Removing unreachable block (ram,0x000164777ba9) */
/* WARNING: Removing unreachable block (ram,0x00014dd5b7d8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd5b400(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBX;
  longlong unaff_R13;
  longlong in_stack_00000030;
  
  uVar1 = 0xffffffffffffffffU - in_stack_00000030 & unaff_RBX;
  *(undefined8 *)(uVar1 - 8) = 0;
  uVar2 = *(ulonglong *)(uVar1 - 8);
  *(longlong *)(uVar1 - 8) = *(longlong *)(uVar1 - 8) + unaff_R13;
  if (uVar2 < (ulonglong)-unaff_R13) {
    FUN_1655d531c();
    return;
  }
  FUN_1655d531c();
  return;
}



// FUNCTION 14dd5b4a5 FUN_14dd5b4a5 body=643 status=ok
// SIG undefined FUN_14dd5b4a5(void)

/* WARNING: Instruction at (ram,0x000164777ba0) overlaps instruction at (ram,0x000164777b9d)
    */
/* WARNING: Removing unreachable block (ram,0x00014dd5b5ea) */
/* WARNING: Removing unreachable block (ram,0x00014dd5b6b3) */
/* WARNING: Removing unreachable block (ram,0x00014dd5b6b5) */
/* WARNING: Removing unreachable block (ram,0x00014dd5b7c7) */
/* WARNING: Removing unreachable block (ram,0x00014dd5b7d2) */
/* WARNING: Removing unreachable block (ram,0x000164777b6a) */
/* WARNING: Removing unreachable block (ram,0x000164777b9d) */
/* WARNING: Removing unreachable block (ram,0x000164777b94) */
/* WARNING: Removing unreachable block (ram,0x000164777ba0) */
/* WARNING: Removing unreachable block (ram,0x000164777ba9) */
/* WARNING: Removing unreachable block (ram,0x000165d6ac1a) */
/* WARNING: Removing unreachable block (ram,0x000162bb136b) */
/* WARNING: Removing unreachable block (ram,0x000165d6ac9a) */
/* WARNING: Removing unreachable block (ram,0x000165d6aca0) */
/* WARNING: Removing unreachable block (ram,0x000165d6aca5) */
/* WARNING: Removing unreachable block (ram,0x00014dd5b7d8) */
/* WARNING: Removing unreachable block (ram,0x000165d6aaf9) */
/* WARNING: Removing unreachable block (ram,0x000165d6ac0f) */
/* WARNING: Removing unreachable block (ram,0x000165d6ac0a) */

void FUN_14dd5b4a5(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_14e1bf29a(param_1,FUN_14e1bf29a,
                ~(*(ulonglong *)(unaff_RDI + -0x70) & param_1) &
                (*(ulonglong *)(unaff_RDI + -0x70) | param_1),
                *(ulonglong *)(unaff_RDI + -0x60) + param_1 +
                (*(ulonglong *)(unaff_RDI + -0x60) & param_1) * -2);
  FUN_164a6f361(param_1,0x450bc937,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                ~((0xffffffffffffffff - param_1 | *(ulonglong *)(unaff_RDI + -0x60)) &
                 (~*(ulonglong *)(unaff_RDI + -0x60) | param_1)));
  return;
}



// FUNCTION 14dd5b72d FUN_14dd5b72d body=299 status=ok
// SIG undefined FUN_14dd5b72d(void)

/* WARNING: Instruction at (ram,0x000164777ba0) overlaps instruction at (ram,0x000164777b9d)
    */
/* WARNING: Removing unreachable block (ram,0x000164777b9d) */
/* WARNING: Removing unreachable block (ram,0x00014dd5b7d8) */

void FUN_14dd5b72d(void)

{
  longlong unaff_R13;
  
  if (*(longlong *)(unaff_R13 + -0x68) == 0) {
    FUN_164777b6a();
    return;
  }
  (*(code *)&LAB_16519ce3a)();
  return;
}



// FUNCTION 14dd5bc38 FUN_14dd5bc38 body=161 status=ok
// SIG undefined FUN_14dd5bc38(void)

void FUN_14dd5bc38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 in_R10;
  undefined8 unaff_R15;
  bool bVar4;
  bool bVar5;
  byte bStackX_18;
  ushort local_res20;
  uint6 uStackX_22;
  
  uVar1 = ~(~local_res20 & 0xfeff);
  LOCK();
  bVar4 = bStackX_18 < DAT_14d7abcb0;
  bVar5 = SBORROW1(bStackX_18,DAT_14d7abcb0);
  cVar3 = bStackX_18 - DAT_14d7abcb0;
  if (cVar3 == '\0') {
    DAT_14d7abcb0 = (byte)param_1;
  }
  UNLOCK();
  *(undefined8 *)(param_5 + -8) = in_R10;
  *(undefined8 *)(param_5 + -0x10) = in_R10;
  *(undefined4 *)(param_5 + -0x18) = 0x13c2b5aa;
  *(undefined4 *)(param_5 + -0x14) = 0;
  lVar2 = *(longlong *)(param_5 + -0x18);
  *(ulonglong *)(param_5 + -0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar5 * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)(cVar3 < '\0') * 0x80 | (ulonglong)(cVar3 == '\0') * 0x40 |
       (ulonglong)((uVar1 & 0x10) != 0) * 0x10 | (ulonglong)((POPCOUNT(cVar3) & 1U) == 0) * 4 |
       (ulonglong)bVar4 | (ulonglong)((uStackX_22 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_22 & 4) != 0) * 0x40000;
  *(undefined8 *)(param_5 + -0x20) = unaff_R15;
  *(undefined8 *)(param_5 + -0x28) = param_1;
  (*(code *)&LAB_161cafc29)(lVar2 + -0xef1112e,param_2);
  return;
}



// FUNCTION 14dd5bcd9 FUN_14dd5bcd9 body=120 status=ok
// SIG undefined FUN_14dd5bcd9(void)

void FUN_14dd5bcd9(void)

{
  byte *pbVar1;
  byte bVar2;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  *(undefined1 *)(unaff_RSI + 2 + unaff_RDI) = 0xd5;
  bVar2 = *(byte *)(unaff_RSI + 2 + unaff_RDI);
  pbVar1 = (byte *)(unaff_RSI + 2 + unaff_RDI);
  *pbVar1 = *pbVar1 | 0xcb;
  *(byte *)(unaff_RSI + 2 + unaff_RDI) = ~(~(bVar2 & 0xcb) & *(byte *)(unaff_RSI + 2 + unaff_RDI));
  bVar2 = *(byte *)(unaff_RSI + 2 + unaff_RDI);
  pbVar1 = (byte *)(unaff_RSI + 2 + unaff_RDI);
  *pbVar1 = *pbVar1 | 0x11;
  *(byte *)(unaff_RSI + 2 + unaff_RDI) =
       ~(('\x11' - (bVar2 | 0x11)) + bVar2) & *(byte *)(unaff_RSI + 2 + unaff_RDI) ^ 0xff;
  return;
}



// FUNCTION 14dd5bd51 FUN_14dd5bd51 body=725 status=ok
// SIG undefined FUN_14dd5bd51(void)

/* WARNING: Removing unreachable block (ram,0x00014dd5beff) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd5bd51(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  short sVar4;
  undefined8 *unaff_RBP;
  undefined8 unaff_RDI;
  longlong unaff_R13;
  undefined8 local_res10;
  
  FUN_161a3faad(local_res10,param_2,FUN_161a3faad);
  sVar4 = (short)param_2;
  uVar1 = *(ulonglong *)(unaff_R13 + -8);
  uVar3 = FUN_1611a230b();
  if (uVar1 + uVar3 + (uVar1 & uVar3) * -2 != 0) {
    FUN_162ddcce2();
    return;
  }
  FUN_162f3b573();
  FUN_1569ffd00();
  _DAT_ffffffffba926734 = (_DAT_ffffffffba926734 + -1) - ~(0xfeffU - sVar4);
  pcVar2 = (code *)swi(0x2e);
  (*pcVar2)();
  *unaff_RBP = unaff_RDI;
  unaff_RBP[-1] = unaff_RDI;
  FUN_160cb3b0e();
  return;
}



// FUNCTION 14dd5c166 FUN_14dd5c166 body=439 status=ok
// SIG undefined FUN_14dd5c166(void)

/* WARNING: Removing unreachable block (ram,0x000164bff18b) */
/* WARNING: Removing unreachable block (ram,0x000161440b0a) */
/* WARNING: Removing unreachable block (ram,0x000161440b10) */
/* WARNING: Removing unreachable block (ram,0x00014dd5c1ef) */
/* WARNING: Removing unreachable block (ram,0x00014dd5c1f5) */

undefined8 FUN_14dd5c166(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_164bff18b();
  return uVar1;
}



// FUNCTION 14dd5c3a1 FUN_14dd5c3a1 body=139 status=ok
// SIG undefined FUN_14dd5c3a1(void)

void FUN_14dd5c3a1(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)0x157192779)
            (param_1,*(ulonglong *)(unaff_R13 + -0x38) & 0xffff,
             ~((in_RAX | param_3) & (0xffffffffffffffff - param_3 | unaff_R15)));
  return;
}



// FUNCTION 14dd5c434 FUN_14dd5c434 body=134 status=ok
// SIG undefined FUN_14dd5c434(void)

void FUN_14dd5c434(ulonglong param_1,byte param_2,undefined8 param_3)

{
  byte in_AL;
  byte in_R11B;
  
  (*(code *)0x1650e53f4)
            (param_1,(~(~param_2 + 2) + 1) - ~((-~in_AL - (~in_R11B + 2)) + 0x9c),param_3,~param_1);
  return;
}



// FUNCTION 14dd5c52b FUN_14dd5c52b body=286 status=ok
// SIG undefined FUN_14dd5c52b(void)

/* WARNING: Removing unreachable block (ram,0x00014dd5c5ab) */

void FUN_14dd5c52b(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = ~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78);
  if (CARRY8(uVar1,unaff_R15)) {
    FUN_15b114364(~(uVar1 + unaff_R15 + 1) &
                  ~((unaff_R15 | ~*(ulonglong *)(unaff_R13 + -0x78)) + ~unaff_R15 + 1),
                  *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
    return;
  }
  FUN_1613606ff();
  return;
}



// FUNCTION 14dd5c64a FUN_14dd5c64a body=48 status=ok
// SIG undefined FUN_14dd5c64a(void)

void FUN_14dd5c64a(void)

{
  code *pcVar1;
  undefined8 uStackX_8;
  undefined8 local_res18;
  
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(uStackX_8);
  *local_res18 = 0x58d3e88;
  FUN_165c7153c();
  return;
}



// FUNCTION 14dd5ca13 FUN_14dd5ca13 body=279 status=ok
// SIG undefined FUN_14dd5ca13(void)

/* WARNING: Removing unreachable block (ram,0x00014dd5cb1e) */
/* WARNING: Removing unreachable block (ram,0x00014dd5cb2f) */
/* WARNING: Removing unreachable block (ram,0x00014dd5cbdc) */
/* WARNING: Removing unreachable block (ram,0x00014dd5cbe2) */
/* WARNING: Removing unreachable block (ram,0x00014dd5cbd7) */
/* WARNING: Removing unreachable block (ram,0x000162cdf7b8) */
/* WARNING: Removing unreachable block (ram,0x00014dd5cb2a) */

void FUN_14dd5ca13(void)

{
  FUN_161c62f26();
  FUN_156f8ea15(FUN_156f8ea15);
  return;
}



// FUNCTION 14dd5cb2f FUN_14dd5cb2f body=317 status=ok
// SIG undefined FUN_14dd5cb2f(void)

/* WARNING: Removing unreachable block (ram,0x00014dd5cbe2) */

void FUN_14dd5cb2f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong in_RAX;
  undefined8 unaff_RBX;
  undefined8 in_R11;
  undefined8 unaff_R14;
  ulonglong local_res18;
  
  uVar1 = local_res18 ^ in_RAX;
  *(undefined8 *)(uVar1 - 8) = param_3;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x18) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x18) = param_1;
  *(undefined8 *)(uVar1 - 0x20) = in_R11;
  uVar3 = *(undefined8 *)(uVar1 - 0x20);
  *(undefined8 *)(uVar1 - 8) = 0;
  uVar2 = *(undefined8 *)(uVar1 - 0x18);
  *(undefined8 *)(uVar1 - 0x18) = unaff_R14;
  *(undefined8 *)(uVar1 - 0x20) = uVar3;
  *(longlong *)(uVar1 - 8) = *(longlong *)(uVar1 - 8) + -0x162cdf7e3;
  *(longlong *)(uVar1 - 8) = -*(longlong *)(uVar1 - 8);
  uVar3 = *(undefined8 *)(uVar1 - 0x10);
  *(undefined8 *)(uVar1 - 0x18) = uVar2;
  FUN_14d7a9278(*(undefined8 *)(uVar1 - 0x18),param_2,uVar3);
  return;
}



// FUNCTION 14dd5cc6c FUN_14dd5cc6c body=139 status=ok
// SIG undefined FUN_14dd5cc6c(void)

void FUN_14dd5cc6c(void)

{
  return;
}



// FUNCTION 14dd5cda7 FUN_14dd5cda7 body=219 status=ok
// SIG undefined FUN_14dd5cda7(void)

void FUN_14dd5cda7(void)

{
  code *pcVar1;
  ulonglong in_RAX;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  longlong unaff_R12;
  undefined8 unaff_R13;
  undefined8 *puStackX_18;
  
  uVar2 = *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX;
  FUN_1567f1c05(*(undefined8 *)(unaff_R12 + -0x58),FUN_1567f1c05,uVar2,unaff_RDI);
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)();
  puStackX_18[-1] = uVar2;
  *puStackX_18 = 0x323802e;
  *(undefined8 *)((longlong)puStackX_18 + -0x28c7) = unaff_R13;
  *(undefined8 *)((longlong)puStackX_18 + -0x28cf) = unaff_R13;
  *(undefined **)((longlong)puStackX_18 + -0x28c7) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14dd5cef0 FUN_14dd5cef0 body=663 status=ok
// SIG undefined FUN_14dd5cef0(void)

/* WARNING: Removing unreachable block (ram,0x00014dd5d0c0) */
/* WARNING: Removing unreachable block (ram,0x00014dd5cf7a) */
/* WARNING: Removing unreachable block (ram,0x00014dd5cfb9) */
/* WARNING: Removing unreachable block (ram,0x00014dd5d0ba) */
/* WARNING: Removing unreachable block (ram,0x00015b83aa5b) */
/* WARNING: Removing unreachable block (ram,0x000160d0b952) */

void FUN_14dd5cef0(void)

{
  undefined8 in_R10;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_retaddr;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_retaddr;
  *(undefined8 *)(local_res10 + -0x10) = unaff_R13;
  *(undefined8 *)(local_res10 + -0x18) = unaff_R13;
  *(undefined8 *)(local_res10 + -0x20) = in_R10;
  *(undefined8 *)(local_res10 + -0x20) = unaff_R12;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -0x18) = *(undefined8 *)(local_res10 + -0x20);
  *(undefined8 *)(local_res10 + -0x20) = 0;
  *(undefined8 *)(local_res10 + -8) = *(undefined8 *)(local_res10 + -0x20);
  *(longlong *)(local_res10 + -8) = (longlong)(&LAB_156aa6d3f + *(longlong *)(local_res10 + -8));
  return;
}



// FUNCTION 14dd5d163 FUN_14dd5d163 body=153 status=ok
// SIG undefined FUN_14dd5d163(void)

void FUN_14dd5d163(void)

{
  FUN_156d79bd5();
  return;
}



// FUNCTION 14dd5d324 FUN_14dd5d324 body=325 status=ok
// SIG undefined FUN_14dd5d324(void)

/* WARNING: Removing unreachable block (ram,0x000162471153) */
/* WARNING: Removing unreachable block (ram,0x000166562be1) */
/* WARNING: Removing unreachable block (ram,0x000166d320f6) */
/* WARNING: Removing unreachable block (ram,0x000166d321b9) */
/* WARNING: Removing unreachable block (ram,0x000166d321bf) */
/* WARNING: Removing unreachable block (ram,0x0001665cca79) */
/* WARNING: Removing unreachable block (ram,0x0001665ccb12) */
/* WARNING: Removing unreachable block (ram,0x00014dd5d3c5) */
/* WARNING: Removing unreachable block (ram,0x00014dd5d460) */
/* WARNING: Removing unreachable block (ram,0x00014dd5d466) */
/* WARNING: Removing unreachable block (ram,0x000166d31fba) */
/* WARNING: Removing unreachable block (ram,0x000166d32052) */
/* WARNING: Removing unreachable block (ram,0x00014d7ed358) */
/* WARNING: Removing unreachable block (ram,0x000166d32058) */
/* WARNING: Removing unreachable block (ram,0x000166562bc7) */
/* WARNING: Removing unreachable block (ram,0x000166d320eb) */
/* WARNING: Removing unreachable block (ram,0x000166d320f1) */
/* WARNING: Removing unreachable block (ram,0x00014dd5d46b) */
/* WARNING: Removing unreachable block (ram,0x00014dd5d560) */
/* WARNING: Removing unreachable block (ram,0x00014dd5d570) */

undefined8 FUN_14dd5d324(undefined8 param_1,undefined8 param_2,ushort param_3,undefined8 param_4)

{
  short sVar1;
  undefined8 uVar2;
  undefined8 unaff_RSI;
  short *unaff_R12;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  longlong local_res20;
  
  sVar1 = *unaff_R12;
  *unaff_R12 = 0;
  *unaff_R12 = *unaff_R12 + ((sVar1 + -1) - ~param_3);
  *(undefined8 *)(local_res20 + -8) = param_4;
  *(undefined8 *)(local_res20 + -0x10) = unaff_R15;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R15;
  *(undefined8 *)(local_res20 + -0x20) = unaff_retaddr;
  *(undefined8 *)(local_res20 + -0x10) = 0;
  *(ulonglong *)(local_res20 + -0x10) =
       *(ulonglong *)(local_res20 + -0x10) ^ *(ulonglong *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -8) = 0;
  *(undefined8 *)(local_res20 + -0x18) = unaff_RSI;
  *(longlong *)(local_res20 + -8) = (longlong)(&LAB_16247117a + *(longlong *)(local_res20 + -8));
  uVar2 = FUN_14d7a7e45();
  return uVar2;
}



// FUNCTION 14dd5d46b thunk_FUN_14dd5d471 body=5 status=ok
// SIG undefined thunk_FUN_14dd5d471(void)

void thunk_FUN_14dd5d471(undefined8 param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4
                        )

{
  longlong unaff_R12;
  
  FUN_165c8bff3(param_1,*(undefined8 *)(unaff_R12 + -0xa0),param_3,param_4,
                *(undefined8 *)(unaff_R12 + -8),*(undefined8 *)(unaff_R12 + -0x68));
  return;
}



// FUNCTION 14dd5d471 FUN_14dd5d471 body=357 status=ok
// SIG undefined FUN_14dd5d471(void)

void FUN_14dd5d471(undefined8 param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4)

{
  longlong unaff_R12;
  
  FUN_165c8bff3(param_1,*(undefined8 *)(unaff_R12 + -0xa0),param_3,param_4,
                *(undefined8 *)(unaff_R12 + -8),*(undefined8 *)(unaff_R12 + -0x68));
  return;
}



// FUNCTION 14dd5d6f5 FUN_14dd5d6f5 body=114 status=ok
// SIG undefined FUN_14dd5d6f5(void)

void FUN_14dd5d6f5(void)

{
  return;
}



// FUNCTION 14dd5da73 FUN_14dd5da73 body=202 status=ok
// SIG undefined FUN_14dd5da73(void)

/* WARNING: Instruction at (ram,0x00014dd5dad1) overlaps instruction at (ram,0x00014dd5dad0)
    */
/* WARNING: Removing unreachable block (ram,0x00014dd5dad0) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000010 : 0x00014dd5dada */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined * FUN_14dd5da73(longlong param_1,undefined8 param_2,longlong param_3)

{
  *(undefined1 *)(param_1 + 1 + param_3) = 0;
  return &DAT_166a1a1de;
}



// FUNCTION 14dd5db65 FUN_14dd5db65 body=26 status=ok
// SIG undefined FUN_14dd5db65(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dd5db65(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dd5dc0d FUN_14dd5dc0d body=450 status=ok
// SIG undefined FUN_14dd5dc0d(void)

/* WARNING: Instruction at (ram,0x00014dd5dcb3) overlaps instruction at (ram,0x00014dd5dcb0)
    */
/* WARNING: Removing unreachable block (ram,0x00014dd5dc5c) */
/* WARNING: Removing unreachable block (ram,0x00014dd5dcb3) */
/* WARNING: Removing unreachable block (ram,0x00014dd5dc71) */

void FUN_14dd5dc0d(void)

{
  FUN_161041a6f(&DAT_ac91427a73ca2b2b,FUN_161041a6f,0xfffffffffd8e5597);
  return;
}



// FUNCTION 14dd5dcc0 FUN_14dd5dcc0 body=604 status=ok
// SIG undefined FUN_14dd5dcc0(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014dd5dd46) */

void FUN_14dd5dcc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined4 unaff_ESI;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  ulonglong in_stack_00000020;
  
  FUN_165faf77a(param_1,FUN_165faf77a,in_stack_00000008,param_4,
                ~((~(~in_stack_00000020 | unaff_R15) | ~unaff_R15 | in_stack_00000020) +
                  (~in_stack_00000020 | unaff_R15) + 1));
  uVar3 = FUN_15b83e3db(param_1);
  pbVar2 = (byte *)CONCAT71((int7)((ulonglong)uVar3 >> 8),0x10);
  *(int *)pbVar2 = *(int *)pbVar2 + 1;
  LOCK();
  *(undefined4 *)(pbVar2 + -0x22) = unaff_ESI;
  UNLOCK();
  bVar1 = (byte)unaff_ESI & 7;
  *pbVar2 = *pbVar2 << bVar1 | *pbVar2 >> 8 - bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dd5de12 FUN_14dd5de12 body=493 status=ok
// SIG undefined FUN_14dd5de12(void)

/* WARNING: Removing unreachable block (ram,0x00014dd5deb9) */
/* WARNING: Removing unreachable block (ram,0x00014dd5dec4) */
/* WARNING: Removing unreachable block (ram,0x00014dd5debf) */

void FUN_14dd5de12(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  
  FUN_165e07c99();
  puVar1 = &DAT_ac91427a73ca2b2b;
  FUN_162459309();
  FUN_1668d2618(puVar1,param_2);
  return;
}



// FUNCTION 14dd5dec4 FUN_14dd5dec4 body=156 status=ok
// SIG undefined FUN_14dd5dec4(void)

void FUN_14dd5dec4(undefined8 param_1,undefined8 param_2)

{
  thunk_FUN_157295fe8(param_1,param_2,0x46276dad);
  return;
}



// FUNCTION 14dd5e0d7 FUN_14dd5e0d7 body=284 status=ok
// SIG undefined FUN_14dd5e0d7(void)

void FUN_14dd5e0d7(void)

{
  longlong in_RAX;
  longlong unaff_RBX;
  ulonglong unaff_R12;
  
  *(ulonglong *)(unaff_RBX + 8) =
       ((~(unaff_R12 & *(ulonglong *)(unaff_RBX + 8)) + *(longlong *)(unaff_RBX + 8)) - ~unaff_R12)
       + in_RAX + 1;
  FUN_1575705f5();
  return;
}



// FUNCTION 14dd5e288 FUN_14dd5e288 body=251 status=ok
// SIG undefined FUN_14dd5e288(void)

/* WARNING: Removing unreachable block (ram,0x00014dd5e31f) */

undefined4
FUN_14dd5e288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 in_EAX;
  undefined4 uVar4;
  undefined4 in_register_00000004;
  undefined8 unaff_RDI;
  undefined8 unaff_R12;
  undefined8 uStackX_8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_R12;
  *(undefined8 *)(local_res18 + -0x10) = param_1;
  *(undefined1 **)(local_res18 + -0x18) = &LAB_1571c0661;
  lVar1 = *(longlong *)(local_res18 + -0x18);
  uVar2 = *(undefined8 *)(local_res18 + -0x10);
  *(undefined8 *)(local_res18 + -0x10) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x18) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x20) = param_4;
  *(ulonglong *)(local_res18 + -0x28) = CONCAT44(in_register_00000004,in_EAX);
  *(undefined4 *)(local_res18 + -0x28) = 0x7eb9def0;
  *(undefined4 *)(local_res18 + -0x24) = 0;
  uVar3 = *(ulonglong *)(local_res18 + -0x28);
  *(undefined8 *)(local_res18 + -0x28) = uStackX_8;
  *(undefined8 *)(local_res18 + -0x10) =
       *(undefined8 *)
        (local_res18 + -0x18 + ~((uVar3 | 0xffffffff8146211f) & (~uVar3 | 0x7eb9dee0)));
  *(undefined8 *)(local_res18 + -0x18) = *(undefined8 *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -8) = 0;
  *(longlong *)(local_res18 + -8) = *(longlong *)(local_res18 + -8) - (lVar1 + 0x62a2);
  *(longlong *)(local_res18 + -8) = -*(longlong *)(local_res18 + -8);
                    /* WARNING: Could not recover jumptable at 0x0001571c68e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)CONCAT44(in_register_00000004,in_EAX))
                    (uVar2,*(undefined8 *)(local_res18 + -0x28),param_3,
                     *(undefined8 *)(local_res18 + -0x20));
  return uVar4;
}



// FUNCTION 14dd5e44f FUN_14dd5e44f body=121 status=ok
// SIG undefined FUN_14dd5e44f(void)

void FUN_14dd5e44f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 unaff_R14;
  undefined8 local_res10;
  undefined8 local_res20;
  
  *(undefined8 *)(local_res20 + -8) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x10) = local_res10;
  *(undefined8 *)(local_res20 + -0x18) = local_res10;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  uVar1 = *(undefined8 *)(local_res20 + -0x18);
  *(undefined8 *)(local_res20 + -0x18) = param_1;
  *(undefined8 *)(local_res20 + -8) = 0;
  *(ulonglong *)(local_res20 + -8) = *(ulonglong *)(local_res20 + -8) ^ 0x14dd5e4db;
  FUN_14d7a578d(*(undefined8 *)(local_res20 + -0x18),param_2,param_3,uVar1);
  return;
}



// FUNCTION 14dd5e509 FUN_14dd5e509 body=162 status=ok
// SIG undefined FUN_14dd5e509(void)

void FUN_14dd5e509(void)

{
  return;
}



// FUNCTION 14dd5e63e FUN_14dd5e63e body=23 status=ok
// SIG undefined FUN_14dd5e63e(void)

void FUN_14dd5e63e(void)

{
  return;
}



// FUNCTION 14dd5e6cc FUN_14dd5e6cc body=80 status=ok
// SIG undefined FUN_14dd5e6cc(void)

void FUN_14dd5e6cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong unaff_RBP;
  undefined8 unaff_R12;
  undefined8 unaff_retaddr;
  
  puVar1 = (undefined8 *)(&stack0xfffffffffd9964eb + unaff_RBP);
  *(undefined8 *)(&stack0xfffffffffd9964eb + unaff_RBP) = param_2;
  *puVar1 = unaff_R12;
  puVar1[-1] = unaff_retaddr;
  puVar1[-2] = &LAB_14dd5e71d;
  return;
}



// FUNCTION 14dd5e7e8 FUN_14dd5e7e8 body=163 status=ok
// SIG undefined FUN_14dd5e7e8(void)

void FUN_14dd5e7e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_R11;
  undefined8 in_stack_00000010;
  
  *in_R11 = param_2;
  FUN_156dfdf3f(param_1,param_2,in_stack_00000010);
  FUN_15b7ef5c5(FUN_15b7ef5c5);
  return;
}



// FUNCTION 14dd5e88c FUN_14dd5e88c body=135 status=ok
// SIG undefined FUN_14dd5e88c(void)

void FUN_14dd5e88c(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x60);
  FUN_15b7ef5c5(FUN_15b7ef5c5,param_2,*(undefined8 *)(unaff_R13 + -0x88),
                ~((unaff_R15 - (uVar1 | unaff_R15)) + uVar1) &
                (uVar1 + unaff_R15) - (uVar1 & unaff_R15));
  return;
}



// FUNCTION 14dd5eaa3 FUN_14dd5eaa3 body=161 status=ok
// SIG undefined FUN_14dd5eaa3(void)

/* WARNING: Removing unreachable block (ram,0x00014dd5eb45) */
/* WARNING: Removing unreachable block (ram,0x00014dd5ebbd) */
/* WARNING: Removing unreachable block (ram,0x00014dd5ebc4) */
/* WARNING: Removing unreachable block (ram,0x00014dd5ebcc) */
/* WARNING: Removing unreachable block (ram,0x0001564ab4dd) */
/* WARNING: Removing unreachable block (ram,0x00014dd5ebd2) */

void FUN_14dd5eaa3(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong in_RAX;
  longlong unaff_RBP;
  longlong unaff_R12;
  longlong unaff_R14;
  
  plVar1 = (longlong *)(&stack0x00000000 + unaff_RBP);
  *plVar1 = param_3;
  *plVar1 = *plVar1 - unaff_R14;
  *plVar1 = in_RAX;
  *(undefined4 *)plVar1 = 0;
  *(undefined4 *)((longlong)plVar1 + 4) = 0;
  if (-1 < -*(longlong *)(unaff_R12 + -0x60)) {
    FUN_157405776();
    return;
  }
  FUN_157405776();
  return;
}



// FUNCTION 14dd5eb45 FUN_14dd5eb45 body=150 status=ok
// SIG undefined FUN_14dd5eb45(void)

/* WARNING: Removing unreachable block (ram,0x00014dd5ebcc) */
/* WARNING: Removing unreachable block (ram,0x00014dd5ebd2) */

void FUN_14dd5eb45(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte in_ZF;
  
  if ((in_ZF & 1) != 0) {
    return;
  }
  FUN_1564ab4ed(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dd5ebd2 FUN_14dd5ebd2 body=23 status=ok
// SIG undefined FUN_14dd5ebd2(void)

void FUN_14dd5ebd2(void)

{
  return;
}



// FUNCTION 14dd5ece9 FUN_14dd5ece9 body=524 status=ok
// SIG undefined FUN_14dd5ece9(void)

/* WARNING: Instruction at (ram,0x00014dd5ed83) overlaps instruction at (ram,0x00014dd5ed81)
    */
/* WARNING: Removing unreachable block (ram,0x00014dd5ed7e) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x00014dd5eea8 */
/* WARNING: Removing unreachable block (ram,0x00014dd5eee4) */
/* WARNING: Removing unreachable block (ram,0x00014dd5eefb) */
/* WARNING: Removing unreachable block (ram,0x00014dd5eef6) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd5ece9(undefined8 param_1,longlong param_2)

{
  longlong unaff_RSI;
  undefined1 auStackX_10 [24];
  
  *(undefined4 *)(&stack0x00000008 + unaff_RSI) = 0;
  FUN_164c1fa24();
  FUN_16551dda0(*(undefined8 *)(param_2 + -0x68));
  FUN_157017d4b(auStackX_10);
  return;
}



// FUNCTION 14dd5eefb FUN_14dd5eefb body=68 status=ok
// SIG undefined FUN_14dd5eefb(void)

void FUN_14dd5eefb(void)

{
  return;
}



// FUNCTION 14dd5f0a6 FUN_14dd5f0a6 body=199 status=ok
// SIG undefined FUN_14dd5f0a6(void)

void FUN_14dd5f0a6(undefined8 param_1)

{
  FUN_15b80c7b9(param_1);
  return;
}



// FUNCTION 14dd5f2a0 FUN_14dd5f2a0 body=158 status=ok
// SIG undefined FUN_14dd5f2a0(void)

void FUN_14dd5f2a0(undefined8 param_1)

{
  ushort in_R10W;
  
  FUN_166c5f695(param_1,~in_R10W,0x3a55dee,FUN_166c5f695);
  return;
}



// FUNCTION 14dd5f635 FUN_14dd5f635 body=171 status=ok
// SIG undefined FUN_14dd5f635(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00016528e356) */
/* WARNING: Removing unreachable block (ram,0x00016528e361) */
/* WARNING: Removing unreachable block (ram,0x00016528e35c) */
/* WARNING: Removing unreachable block (ram,0x000161d2aec3) */
/* WARNING: Removing unreachable block (ram,0x000161d2af41) */
/* WARNING: Removing unreachable block (ram,0x000161d2af47) */
/* WARNING: Removing unreachable block (ram,0x00016180fb32) */
/* WARNING: Removing unreachable block (ram,0x00014dd5f6e3) */
/* WARNING: Removing unreachable block (ram,0x00014dd5f716) */
/* WARNING: Removing unreachable block (ram,0x00014dd5f723) */
/* WARNING: Removing unreachable block (ram,0x00014dd5f810) */
/* WARNING: Removing unreachable block (ram,0x00014dd5f80b) */
/* WARNING: Removing unreachable block (ram,0x000161d2ae16) */
/* WARNING: Removing unreachable block (ram,0x000161d2aeb8) */
/* WARNING: Removing unreachable block (ram,0x000161d2aebe) */
/* WARNING: Removing unreachable block (ram,0x000161d2aeb3) */
/* WARNING: Removing unreachable block (ram,0x00014dd5f816) */

void FUN_14dd5f635(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong in_RAX;
  undefined8 unaff_RBP;
  ulonglong local_res18;
  ulonglong local_res20;
  
  uVar1 = ~(local_res20 & in_RAX) & (local_res20 | in_RAX);
  *(undefined8 *)(uVar1 - 8) = param_2;
  if (((local_res18 ^ in_RAX) & 1) != 0) {
    *(undefined8 *)(uVar1 - 0x10) = unaff_RBP;
    *(undefined8 *)(uVar1 - 0x18) = unaff_RBP;
    *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
    uVar2 = *(undefined8 *)(uVar1 - 0x18);
    *(undefined8 *)(uVar1 - 8) = 0;
    *(undefined8 *)(uVar1 - 8) = *(undefined8 *)(uVar1 - 8);
    *(longlong *)(uVar1 - 8) = (longlong)(&LAB_16522e06b + *(longlong *)(uVar1 - 8));
    *(undefined8 *)(uVar1 - 0x10) = uVar2;
    *(undefined8 *)(uVar1 - 0x18) = uVar2;
    *(undefined8 *)(uVar1 - 0x10) = 0x14d7c1b10;
    return;
  }
  FUN_16522dfef();
  return;
}



// FUNCTION 14dd5f6e3 FUN_14dd5f6e3 body=473 status=ok
// SIG undefined FUN_14dd5f6e3(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00016528e356) */
/* WARNING: Removing unreachable block (ram,0x00016528e361) */
/* WARNING: Removing unreachable block (ram,0x00016528e35c) */
/* WARNING: Removing unreachable block (ram,0x000161d2af47) */
/* WARNING: Removing unreachable block (ram,0x000161d2aec3) */
/* WARNING: Removing unreachable block (ram,0x000161d2af41) */
/* WARNING: Removing unreachable block (ram,0x00016180fb32) */
/* WARNING: Removing unreachable block (ram,0x00014dd5f816) */

void FUN_14dd5f6e3(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong local_res18;
  
  uVar2 = FUN_162e282b1();
  lVar3 = local_res18 + uVar2 + (local_res18 & uVar2) * -2;
  *(undefined8 *)(lVar3 + -8) = 0;
  *(longlong *)(lVar3 + -8) = *(longlong *)(lVar3 + -8) + 0x30;
  *(undefined8 *)(lVar3 + -0x10) = 0x3bda23e;
  *(undefined8 *)(lVar3 + -0x18) = 0x3bda23e;
  *(undefined1 **)(lVar3 + -0x20) = &LAB_164b695d0;
  *(undefined8 *)(lVar3 + -0x10) = *(undefined8 *)(lVar3 + -8);
  *(undefined8 *)(lVar3 + -8) = 0;
  *(longlong *)(lVar3 + -8) = *(longlong *)(lVar3 + -8) - *(longlong *)(lVar3 + -0x20);
  plVar1 = (longlong *)(lVar3 + -8);
  lVar3 = *plVar1;
  *plVar1 = -*plVar1;
  if (lVar3 != 0) {
    FUN_164b695ab();
    return;
  }
  FUN_164b695ab();
  return;
}



// FUNCTION 14dd5f8bd FUN_14dd5f8bd body=198 status=ok
// SIG undefined FUN_14dd5f8bd(void)

/* WARNING: Instruction at (ram,0x00014dd5f957) overlaps instruction at (ram,0x00014dd5f956)
    */
/* WARNING: Removing unreachable block (ram,0x00014dd5f94c) */

void FUN_14dd5f8bd(void)

{
  return;
}



// FUNCTION 14dd5fa17 FUN_14dd5fa17 body=183 status=ok
// SIG undefined FUN_14dd5fa17(void)

void FUN_14dd5fa17(void)

{
  return;
}



// FUNCTION 14dd5fb76 FUN_14dd5fb76 body=28 status=ok
// SIG undefined FUN_14dd5fb76(void)

void FUN_14dd5fb76(void)

{
  return;
}



// FUNCTION 14dd5fca0 FUN_14dd5fca0 body=115 status=ok
// SIG undefined FUN_14dd5fca0(void)

void FUN_14dd5fca0(ulonglong param_1)

{
  longlong unaff_RDI;
  
  param_1 = *(ulonglong *)(unaff_RDI + -0x98) ^ param_1;
  (*(code *)0x16298cd95)();
  (*(code *)&LAB_166985026)(param_1);
  return;
}



// FUNCTION 14dd5ff5a FUN_14dd5ff5a body=309 status=ok
// SIG undefined FUN_14dd5ff5a(void)

/* WARNING: Removing unreachable block (ram,0x00014dd5ffe5) */

void FUN_14dd5ff5a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  longlong in_R11;
  ulonglong unaff_R12;
  
  if (0x9f < unaff_R12) {
    FUN_1620ae4fa();
    return;
  }
  FUN_161e14f06(param_1,param_2,param_3,param_4,*(undefined8 *)(unaff_R12 - 8));
  *(ulonglong *)(in_R11 + 0x18) = (~in_RAX | *(ulonglong *)(in_R11 + 0x18)) + param_1 + 1;
  FUN_14dc7d075();
  return;
}



// FUNCTION 14dd60092 FUN_14dd60092 body=29 status=ok
// SIG undefined FUN_14dd60092(void)

void FUN_14dd60092(void)

{
  undefined8 unaff_retaddr;
  
  FUN_14d7aa82c(unaff_retaddr);
  return;
}



// FUNCTION 14dd60134 FUN_14dd60134 body=77 status=ok
// SIG undefined FUN_14dd60134(void)

void FUN_14dd60134(void)

{
  return;
}



// FUNCTION 14dd60401 FUN_14dd60401 body=173 status=ok
// SIG undefined FUN_14dd60401(void)

void FUN_14dd60401(void)

{
  FUN_16167d282();
  return;
}



// FUNCTION 14dd60541 thunk_FUN_15b2ffdbd body=11 status=ok
// SIG undefined thunk_FUN_15b2ffdbd(void)

void thunk_FUN_15b2ffdbd(void)

{
  FUN_15b2ffdbd();
  return;
}



// FUNCTION 14dd60608 FUN_14dd60608 body=288 status=ok
// SIG undefined FUN_14dd60608(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001614dfd4f) overlaps instruction at (ram,0x0001614dfd4e)
    */
/* WARNING: Removing unreachable block (ram,0x00014dd60697) */
/* WARNING: Removing unreachable block (ram,0x00014dd6069d) */
/* WARNING: Removing unreachable block (ram,0x0001614dfb59) */
/* WARNING: Removing unreachable block (ram,0xe2975894) */
/* WARNING: Removing unreachable block (ram,0x0001614dfd4f) */
/* WARNING: Removing unreachable block (ram,0x00014dd6071d) */
/* WARNING: Removing unreachable block (ram,0x00014dd60723) */
/* WARNING: Removing unreachable block (ram,0x00014dd60728) */

void FUN_14dd60608(undefined8 param_1)

{
  ushort unaff_R15W;
  ushort local_res10;
  
  local_res10 = (~(~local_res10 | ~unaff_R15W) ^ 0xffff) & (local_res10 | unaff_R15W);
  FUN_14de85a1f(param_1,~(local_res10 | 0xfeff) - 0x100,FUN_14de85a1f);
  return;
}



// FUNCTION 14dd60728 FUN_14dd60728 body=69 status=ok
// SIG undefined FUN_14dd60728(void)

void FUN_14dd60728(void)

{
  return;
}



// FUNCTION 14dd607bf FUN_14dd607bf body=274 status=ok
// SIG undefined FUN_14dd607bf(void)

/* WARNING: Removing unreachable block (ram,0x00014dd608a7) */

void FUN_14dd607bf(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong lVar1;
  
  lVar1 = *(ulonglong *)(unaff_RSI + -0x38) + unaff_RBP +
          (*(ulonglong *)(unaff_RSI + -0x38) & unaff_RBP) * -2;
  FUN_166035ef9();
  FUN_1629533e9(lVar1);
  return;
}



// FUNCTION 14dd608da FUN_14dd608da body=77 status=ok
// SIG undefined FUN_14dd608da(void)

void FUN_14dd608da(undefined8 param_1,undefined8 param_2)

{
  FUN_16120b864(param_1,param_2,FUN_16120b864);
  return;
}



// FUNCTION 14dd6092b FUN_14dd6092b body=316 status=ok
// SIG undefined FUN_14dd6092b(void)

/* WARNING: Removing unreachable block (ram,0x00014dd60bb6) */
/* WARNING: Removing unreachable block (ram,0x00014dd609c4) */
/* WARNING: Removing unreachable block (ram,0x00014dd609cf) */
/* WARNING: Removing unreachable block (ram,0x00014dd609ca) */

undefined8 FUN_14dd6092b(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1663760f0();
  return uVar1;
}



// FUNCTION 14dd60a67 FUN_14dd60a67 body=468 status=ok
// SIG undefined FUN_14dd60a67(void)

/* WARNING: Removing unreachable block (ram,0x00014dd60bb6) */

undefined8 FUN_14dd60a67(undefined8 param_1,ulonglong param_2)

{
  longlong unaff_RSI;
  ulonglong unaff_R15;
  
  FUN_166929e4e(param_1,unaff_RSI + (param_2 & unaff_R15) * -2);
  return LAB_166929dae;
}



// FUNCTION 14dd60c3f FUN_14dd60c3f body=205 status=ok
// SIG undefined FUN_14dd60c3f(void)

/* WARNING: Removing unreachable block (ram,0x00014dd60cd9) */

undefined8
FUN_14dd60c3f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = 0xffffffffffffffff - (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15);
  if (-1 < (longlong)uVar2) {
    uVar1 = FUN_162bd9034();
    return uVar1;
  }
  uVar1 = FUN_156b8c2c3(uVar2 & ~(~*(ulonglong *)(unaff_R13 + -0x78) & ~unaff_R15),
                        *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15,param_3,param_4);
  return uVar1;
}



// FUNCTION 14dd60f43 FUN_14dd60f43 body=88 status=ok
// SIG undefined FUN_14dd60f43(void)

void FUN_14dd60f43(void)

{
  return;
}



// FUNCTION 14dd611ed FUN_14dd611ed body=25 status=ok
// SIG undefined FUN_14dd611ed(void)

undefined1 * FUN_14dd611ed(void)

{
  longlong unaff_R12;
  undefined1 auStackX_18 [16];
  
  return auStackX_18 + unaff_R12;
}



// FUNCTION 14dd6144f FUN_14dd6144f body=12 status=ok
// SIG undefined FUN_14dd6144f(void)

void FUN_14dd6144f(void)

{
  FUN_1574ba9da();
  return;
}



// FUNCTION 14dd6145b FUN_14dd6145b body=248 status=ok
// SIG undefined FUN_14dd6145b(void)

void FUN_14dd6145b(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R14;
  
  if (unaff_R14 == 0xebd4c) {
    FUN_161412a03(param_1,param_2,0xffffffffd7400202);
    return;
  }
  if (unaff_R14 != 0xebd4d) {
    return;
  }
  (*(code *)0x1612d85db)(param_1,0x14d7bfe94);
  return;
}



// FUNCTION 14dd614f0 FUN_14dd614f0 body=87 status=ok
// SIG undefined FUN_14dd614f0(void)

undefined8 FUN_14dd614f0(void)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_R14;
  undefined8 uStackX_8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = in_RAX;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = unaff_RBX;
  *(undefined8 *)(local_res18 + -0x20) = uStackX_8;
  *(undefined1 **)(local_res18 + -8) = &LAB_14dd6155a;
  uVar1 = *(undefined8 *)(local_res18 + -0x10);
  *(undefined8 *)(local_res18 + -0x10) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x18) = unaff_R14;
  *(code **)(local_res18 + -0x10) = thunk_FUN_15b642ca5;
  return uVar1;
}



// FUNCTION 14dd617d1 FUN_14dd617d1 body=177 status=ok
// SIG undefined FUN_14dd617d1(void)

void FUN_14dd617d1(void)

{
  return;
}



// FUNCTION 14dd61af9 FUN_14dd61af9 body=409 status=ok
// SIG undefined FUN_14dd61af9(void)

/* WARNING: Removing unreachable block (ram,0x0001612dd23b) */
/* WARNING: Removing unreachable block (ram,0x00014dd61b8a) */
/* WARNING: Removing unreachable block (ram,0x00014dd61c2c) */
/* WARNING: Removing unreachable block (ram,0x00014dd61c31) */
/* WARNING: Removing unreachable block (ram,0x00014dd61c37) */
/* WARNING: Removing unreachable block (ram,0x00014dd61c3c) */

undefined8 FUN_14dd61af9(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dd61cab FUN_14dd61cab body=150 status=ok
// SIG undefined FUN_14dd61cab(void)

/* WARNING: Removing unreachable block (ram,0x00014dd61cf4) */

ulonglong FUN_14dd61cab(undefined8 param_1)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x48);
  FUN_1573644ed(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,*(undefined8 *)(unaff_R13 + -0x28),
                *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,param_1);
  uVar1 = *(ulonglong *)(unaff_R13 + (uVar1 ^ unaff_R15));
  return ~((unaff_R15 - (uVar1 | unaff_R15)) + uVar1) & (uVar1 | unaff_R15);
}



// FUNCTION 14dd61d43 FUN_14dd61d43 body=89 status=ok
// SIG undefined FUN_14dd61d43(void)

ulonglong FUN_14dd61d43(void)

{
  ulonglong uVar1;
  longlong unaff_RBX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + unaff_RBX);
  return ~((unaff_R15 - (uVar1 | unaff_R15)) + uVar1) & (uVar1 | unaff_R15);
}



// FUNCTION 14dd61f04 FUN_14dd61f04 body=135 status=ok
// SIG undefined FUN_14dd61f04(void)

void FUN_14dd61f04(void)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  code *pcVar6;
  longlong unaff_RSI;
  longlong *plVar7;
  undefined8 in_R9;
  ulonglong in_R10;
  ulonglong unaff_R15;
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
  byte bVar20;
  ulonglong in_stack_00000030;
  ulonglong in_stack_00000038;
  
  pcVar6 = FUN_1658448e7;
  FUN_1658448e7(*(undefined8 *)(unaff_RSI + -0x38));
  uVar2 = *(ulonglong *)(unaff_RSI + 8);
  lVar3 = *(longlong *)(unaff_RSI + 8);
  plVar7 = (longlong *)(unaff_RSI + 8);
  *plVar7 = 0;
  *plVar7 = *plVar7 + ~((lVar3 - (in_R10 | uVar2)) + in_R10);
  puVar1 = (undefined8 *)(~(in_stack_00000038 & unaff_R15) & (in_stack_00000038 | unaff_R15));
  bVar16 = (in_stack_00000030 & 0x4000) != 0;
  bVar15 = (in_stack_00000030 & 0x800) != 0;
  bVar14 = (in_stack_00000030 & 0x200) != 0;
  bVar13 = 0;
  bVar12 = (in_stack_00000030 & 0x80) != 0;
  bVar11 = (in_stack_00000030 & 0x40) != 0;
  bVar10 = (in_stack_00000030 & 0x10) != 0;
  bVar9 = (in_stack_00000030 & 4) != 0;
  bVar8 = (in_stack_00000030 & 1) != 0;
  bVar20 = (in_stack_00000030 & 0x200000) != 0;
  bVar17 = (in_stack_00000030 & 0x40000) != 0;
  bVar19 = 0;
  bVar18 = 0;
  pcVar4 = (code *)swi(0x2e);
  uVar5 = (*pcVar4)();
  *puVar1 = pcVar6;
  puVar1[-1] = pcVar6;
  puVar1[-2] = uVar5;
  *(undefined4 *)(puVar1 + -2) = 0x683aa62;
  *(undefined4 *)((longlong)puVar1 - 0xc) = 0;
  puVar1[-2] = (ulonglong)(bVar16 & 1) * 0x4000 | (ulonglong)(bVar15 & 1) * 0x800 |
               (ulonglong)((in_stack_00000030 & 0x400) != 0) * 0x400 |
               (ulonglong)(bVar14 & 1) * 0x200 | (ulonglong)(bVar13 & 1) * 0x100 |
               (ulonglong)(bVar12 & 1) * 0x80 | (ulonglong)(bVar11 & 1) * 0x40 |
               (ulonglong)(bVar10 & 1) * 0x10 | (ulonglong)(bVar9 & 1) * 4 | (ulonglong)(bVar8 & 1)
               | (ulonglong)(bVar20 & 1) * 0x200000 | (ulonglong)(bVar19 & 1) * 0x100000 |
               (ulonglong)(bVar18 & 1) * 0x80000 | (ulonglong)(bVar17 & 1) * 0x40000;
  puVar1[-3] = in_R9;
  FUN_16561c865();
  return;
}



// FUNCTION 14dd61f8c FUN_14dd61f8c body=160 status=ok
// SIG undefined FUN_14dd61f8c(void)

void FUN_14dd61f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5,ulonglong param_6)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong unaff_RSI;
  longlong *plVar6;
  ulonglong in_R10;
  ulonglong unaff_R15;
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
  
  uVar2 = *(ulonglong *)(unaff_RSI + 8);
  lVar3 = *(longlong *)(unaff_RSI + 8);
  plVar6 = (longlong *)(unaff_RSI + 8);
  *plVar6 = 0;
  *plVar6 = *plVar6 + ~((lVar3 - (in_R10 | uVar2)) + in_R10);
  puVar1 = (undefined8 *)(~(param_6 & unaff_R15) & (param_6 | unaff_R15));
  bVar15 = (param_5 & 0x4000) != 0;
  bVar14 = (param_5 & 0x800) != 0;
  bVar13 = (param_5 & 0x200) != 0;
  bVar12 = 0;
  bVar11 = (param_5 & 0x80) != 0;
  bVar10 = (param_5 & 0x40) != 0;
  bVar9 = (param_5 & 0x10) != 0;
  bVar8 = (param_5 & 4) != 0;
  bVar7 = (param_5 & 1) != 0;
  bVar19 = (param_5 & 0x200000) != 0;
  bVar16 = (param_5 & 0x40000) != 0;
  bVar18 = 0;
  bVar17 = 0;
  pcVar4 = (code *)swi(0x2e);
  uVar5 = (*pcVar4)(param_1,param_2,param_3);
  *puVar1 = param_2;
  puVar1[-1] = param_2;
  puVar1[-2] = uVar5;
  *(undefined4 *)(puVar1 + -2) = 0x683aa62;
  *(undefined4 *)((longlong)puVar1 - 0xc) = 0;
  uVar5 = puVar1[-2];
  puVar1[-2] = (ulonglong)(bVar15 & 1) * 0x4000 | (ulonglong)(bVar14 & 1) * 0x800 |
               (ulonglong)((param_5 & 0x400) != 0) * 0x400 | (ulonglong)(bVar13 & 1) * 0x200 |
               (ulonglong)(bVar12 & 1) * 0x100 | (ulonglong)(bVar11 & 1) * 0x80 |
               (ulonglong)(bVar10 & 1) * 0x40 | (ulonglong)(bVar9 & 1) * 0x10 |
               (ulonglong)(bVar8 & 1) * 4 | (ulonglong)(bVar7 & 1) |
               (ulonglong)(bVar19 & 1) * 0x200000 | (ulonglong)(bVar18 & 1) * 0x100000 |
               (ulonglong)(bVar17 & 1) * 0x80000 | (ulonglong)(bVar16 & 1) * 0x40000;
  puVar1[-3] = param_4;
  FUN_16561c865(param_1,uVar5);
  return;
}



// FUNCTION 14dd620dd FUN_14dd620dd body=157 status=ok
// SIG undefined FUN_14dd620dd(void)

/* WARNING: Removing unreachable block (ram,0x00014dd62177) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd620dd(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  ulonglong local_res8;
  
  FUN_160bb9deb(param_1,param_2,(local_res8 + in_RAX) - (local_res8 & in_RAX));
  return;
}



// FUNCTION 14dd6217d FUN_14dd6217d body=456 status=ok
// SIG undefined FUN_14dd6217d(void)

/* WARNING: Removing unreachable block (ram,0x00014dd62224) */
/* WARNING: Removing unreachable block (ram,0x00014dd6222a) */
/* WARNING: Removing unreachable block (ram,0x000156b17c00) */
/* WARNING: Removing unreachable block (ram,0x000156b17c06) */
/* WARNING: Removing unreachable block (ram,0x00016123bfc6) */
/* WARNING: Removing unreachable block (ram,0x00016123bfed) */
/* WARNING: Removing unreachable block (ram,0x00016123bff0) */
/* WARNING: Removing unreachable block (ram,0x00015707d0ec) */
/* WARNING: Removing unreachable block (ram,0x00015707d215) */
/* WARNING: Removing unreachable block (ram,0x00015707d210) */
/* WARNING: Removing unreachable block (ram,0x00015707d218) */
/* WARNING: Removing unreachable block (ram,0x00015707d255) */
/* WARNING: Removing unreachable block (ram,0x00015707d260) */
/* WARNING: Removing unreachable block (ram,0x00015707d266) */
/* WARNING: Removing unreachable block (ram,0x00015707d26b) */
/* WARNING: Removing unreachable block (ram,0x00016123c223) */
/* WARNING: Removing unreachable block (ram,0x00016123c22f) */
/* WARNING: Removing unreachable block (ram,0x000165d242a5) */
/* WARNING: Removing unreachable block (ram,0x00016123c061) */
/* WARNING: Removing unreachable block (ram,0x00016123c067) */
/* WARNING: Removing unreachable block (ram,0x00016123c131) */
/* WARNING: Removing unreachable block (ram,0x00016123c135) */
/* WARNING: Removing unreachable block (ram,0x00016525ecec) */
/* WARNING: Removing unreachable block (ram,0x00016525ed5d) */
/* WARNING: Removing unreachable block (ram,0x00016525ed69) */
/* WARNING: Removing unreachable block (ram,0x000164abefd2) */
/* WARNING: Removing unreachable block (ram,0x00016123c181) */
/* WARNING: Removing unreachable block (ram,0x00016123c187) */
/* WARNING: Removing unreachable block (ram,0x00016123c18c) */
/* WARNING: Removing unreachable block (ram,0x00016123c1ea) */
/* WARNING: Removing unreachable block (ram,0x00016123c1ed) */
/* WARNING: Removing unreachable block (ram,0x00016123c21e) */
/* WARNING: Removing unreachable block (ram,0x000165b79687) */
/* WARNING: Removing unreachable block (ram,0x000165b7968d) */
/* WARNING: Removing unreachable block (ram,0x000156b17bcc) */
/* WARNING: Removing unreachable block (ram,0x000157606eb0) */

undefined8 FUN_14dd6217d(ulonglong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0x40) & param_1;
  uVar3 = ~uVar2;
  if (CARRY8(uVar2 - ~(uVar3 & (*(ulonglong *)(unaff_RDI + -0x40) | param_1)),uVar3)) {
    uVar1 = FUN_161765a94();
    return uVar1;
  }
  uVar1 = FUN_14db371f5();
  return uVar1;
}



// FUNCTION 14dd6222a FUN_14dd6222a body=149 status=ok
// SIG undefined FUN_14dd6222a(void)

void FUN_14dd6222a(void)

{
  int unaff_R14D;
  int unaff_R15D;
  undefined4 local_res8;
  
  FUN_16212b501(unaff_R14D - (local_res8 - unaff_R15D));
  return;
}



// FUNCTION 14dd6233b FUN_14dd6233b body=153 status=ok
// SIG undefined FUN_14dd6233b(void)

void FUN_14dd6233b(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)&LAB_162a97226)
            (~(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) &
             (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15),
             *(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
             (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2);
  return;
}



// FUNCTION 14dd623d5 FUN_14dd623d5 body=147 status=ok
// SIG undefined FUN_14dd623d5(void)

void FUN_14dd623d5(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  ulonglong local_res8;
  
  FUN_166dce8cf(FUN_166dce8cf,param_2,
                ~(*(ulonglong *)(param_3 + -0xa0) & local_res8) &
                (*(ulonglong *)(param_3 + -0xa0) | local_res8),param_4);
  return;
}



// FUNCTION 14dd6246a FUN_14dd6246a body=478 status=ok
// SIG undefined FUN_14dd6246a(void)

/* WARNING: Removing unreachable block (ram,0x00014dd62508) */
/* WARNING: Removing unreachable block (ram,0x00014dd6250e) */

void FUN_14dd6246a(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_16687bafc(param_1,param_2,
                -1 - ((~param_1 | *(ulonglong *)(unaff_RDI + -8)) &
                     (~*(ulonglong *)(unaff_RDI + -8) | param_1)),&stack0xfffffffffffffff8,
                *(undefined8 *)(unaff_RDI + -0x90));
  return;
}



// FUNCTION 14dd625c2 FUN_14dd625c2 body=121 status=ok
// SIG undefined FUN_14dd625c2(void)

void FUN_14dd625c2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  FUN_15654c889(param_1,0xfffffffffffffff8,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14dd626da FUN_14dd626da body=182 status=ok
// SIG undefined FUN_14dd626da(void)

void FUN_14dd626da(void)

{
  FUN_161e2f09a();
  return;
}



// FUNCTION 14dd6281a FUN_14dd6281a body=153 status=ok
// SIG undefined FUN_14dd6281a(void)

void FUN_14dd6281a(void)

{
  FUN_1616e75c3(0);
  return;
}



// FUNCTION 14dd628b4 FUN_14dd628b4 body=148 status=ok
// SIG undefined FUN_14dd628b4(void)

void FUN_14dd628b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1647496e5(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dd6294a thunk_FUN_14dd62950 body=5 status=ok
// SIG undefined thunk_FUN_14dd62950(void)

ulonglong thunk_FUN_14dd62950(void)

{
  ulonglong unaff_RBP;
  longlong unaff_R12;
  
  return *(ulonglong *)(unaff_R12 + -0x50) ^ unaff_RBP;
}



// FUNCTION 14dd62950 FUN_14dd62950 body=154 status=ok
// SIG undefined FUN_14dd62950(void)

ulonglong FUN_14dd62950(void)

{
  ulonglong unaff_RBP;
  longlong unaff_R12;
  
  return *(ulonglong *)(unaff_R12 + -0x50) ^ unaff_RBP;
}



// FUNCTION 14dd629ea FUN_14dd629ea body=135 status=ok
// SIG undefined FUN_14dd629ea(void)

/* WARNING: Removing unreachable block (ram,0x00014dd62a67) */
/* WARNING: Removing unreachable block (ram,0x00014dd62a6d) */
/* WARNING: Removing unreachable block (ram,0x00014dd62a72) */

void FUN_14dd629ea(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14de36ef2((*(ulonglong *)(unaff_R13 + -0x78) - unaff_R15) +
                (~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) * -2 + -2,
                *(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2,param_3,param_4);
  return;
}



// FUNCTION 14dd62a72 FUN_14dd62a72 body=331 status=ok
// SIG undefined FUN_14dd62a72(void)

void FUN_14dd62a72(undefined8 param_1)

{
  longlong unaff_RDI;
  
  (*(code *)0x160c63f3e)(param_1,*(undefined8 *)(unaff_RDI + -0x28));
  return;
}



// FUNCTION 14dd62cca FUN_14dd62cca body=199 status=ok
// SIG undefined FUN_14dd62cca(void)

undefined8 FUN_14dd62cca(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x28);
  FUN_164720157(~(param_2 & param_1),
                ~((~unaff_R15 | uVar1) & (~(~uVar1 & unaff_R15) + unaff_R15) - uVar1));
  return 0;
}



// FUNCTION 14dd62dd0 FUN_14dd62dd0 body=135 status=ok
// SIG undefined FUN_14dd62dd0(void)

void FUN_14dd62dd0(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_16215090c(param_1,param_2,~(param_1 & ~*(ulonglong *)(unaff_RDI + -0xa0)));
  return;
}



// FUNCTION 14dd62e59 thunk_FUN_14dd62e5f body=5 status=ok
// SIG undefined thunk_FUN_14dd62e5f(void)

void thunk_FUN_14dd62e5f(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  undefined2 unaff_SI;
  longlong unaff_RDI;
  
  FUN_156edf142(param_1,CONCAT62((int6)(*(ulonglong *)(unaff_RDI + -0x60) + param_3 >> 0x10),
                                 unaff_SI),
                *(ulonglong *)(unaff_RDI + -0x70) + param_1 +
                (*(ulonglong *)(unaff_RDI + -0x70) & param_1) * -2,
                *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14dd62e5f FUN_14dd62e5f body=134 status=ok
// SIG undefined FUN_14dd62e5f(void)

void FUN_14dd62e5f(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  undefined2 unaff_SI;
  longlong unaff_RDI;
  
  FUN_156edf142(param_1,CONCAT62((int6)(*(ulonglong *)(unaff_RDI + -0x60) + param_3 >> 0x10),
                                 unaff_SI),
                *(ulonglong *)(unaff_RDI + -0x70) + param_1 +
                (*(ulonglong *)(unaff_RDI + -0x70) & param_1) * -2,
                *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14dd63029 FUN_14dd63029 body=125 status=ok
// SIG undefined FUN_14dd63029(void)

void FUN_14dd63029(byte param_1,byte param_2)

{
  byte unaff_DIL;
  undefined8 local_res8;
  
  FUN_15af8045e(local_res8,(~(unaff_DIL & param_1) - (param_2 | ~(unaff_DIL & param_1))) + param_2,
                FUN_15af8045e);
  return;
}



// FUNCTION 14dd630aa FUN_14dd630aa body=165 status=ok
// SIG undefined FUN_14dd630aa(void)

ulonglong FUN_14dd630aa(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return *(ulonglong *)(unaff_R13 + -0x38) ^ unaff_R15;
}



// FUNCTION 14dd63390 FUN_14dd63390 body=161 status=ok
// SIG undefined FUN_14dd63390(void)

/* WARNING: Removing unreachable block (ram,0x00014dd63423) */
/* WARNING: Removing unreachable block (ram,0x00014dd63429) */
/* WARNING: Removing unreachable block (ram,0x00014dd6342e) */

void FUN_14dd63390(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = -~*(ulonglong *)(unaff_R12 + -0x58) - 1;
  (*(code *)&LAB_160f257b4)
            (~(uVar1 & in_RAX) & (uVar1 | in_RAX),*(undefined8 *)(unaff_R12 + -0x78),
             *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,*(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
  return;
}



// FUNCTION 14dd63434 FUN_14dd63434 body=250 status=ok
// SIG undefined FUN_14dd63434(void)

/* WARNING: Removing unreachable block (ram,0x00014dd634b0) */

void FUN_14dd63434(void)

{
  FUN_16144095d();
  return;
}



// FUNCTION 14dd63541 FUN_14dd63541 body=269 status=ok
// SIG undefined FUN_14dd63541(void)

void FUN_14dd63541(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_16591271e(*(ulonglong *)(unaff_R13 + -0x78) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) * -2,FUN_16591271e);
  return;
}



// FUNCTION 14dd6394b FUN_14dd6394b body=133 status=ok
// SIG undefined FUN_14dd6394b(void)

void FUN_14dd6394b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_15b619f11(param_1,param_2,param_3,thunk_FUN_164846ef8);
  return;
}



// FUNCTION 14dd639d5 FUN_14dd639d5 body=149 status=ok
// SIG undefined FUN_14dd639d5(void)

void FUN_14dd639d5(void)

{
  return;
}



// FUNCTION 14dd63d5c FUN_14dd63d5c body=193 status=ok
// SIG undefined FUN_14dd63d5c(void)

void FUN_14dd63d5c(byte param_1,ulonglong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,ulonglong param_8)

{
  LPCSTR lpProcName;
  byte unaff_BL;
  byte unaff_SIL;
  ulonglong in_R10;
  HMODULE local_res20;
  
  lpProcName = (LPCSTR)(param_2 >> (~((unaff_SIL | unaff_BL) & (param_1 | 0x5a)) & 0x3f) ^
                       param_3 << 0x3f);
  FUN_162e010d7(local_res20,lpProcName,param_5);
  param_8 = param_8 ^ in_R10;
  *(undefined8 *)(param_8 - 8) = param_4;
  *(undefined8 *)(param_8 - 0x10) = *(undefined8 *)(param_8 - 8);
  *(undefined1 **)(param_8 - 8) = &LAB_14dd63e30;
                    /* WARNING: Could not recover jumptable at 0x00014dd63e19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetProcAddress(local_res20,lpProcName);
  return;
}



// FUNCTION 14dd63f11 FUN_14dd63f11 body=11 status=ok
// SIG undefined FUN_14dd63f11(void)

void FUN_14dd63f11(void)

{
  return;
}



// FUNCTION 14dd6408e FUN_14dd6408e body=198 status=ok
// SIG undefined FUN_14dd6408e(void)

void FUN_14dd6408e(void)

{
  longlong unaff_RDI;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  
  FUN_1610528e3(local_res8,unaff_retaddr,
                (~*(ulonglong *)(unaff_RDI + -0x70) | ~local_res8) &
                (*(ulonglong *)(unaff_RDI + -0x70) | local_res8),
                *(ulonglong *)(unaff_RDI + -0x60) ^ local_res8);
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dd64296 FUN_14dd64296 body=146 status=ok
// SIG undefined FUN_14dd64296(void)

void FUN_14dd64296(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong unaff_R15;
  ulonglong local_res20;
  
  uVar1 = local_res20 ^ unaff_R15;
  *(undefined8 *)(uVar1 - 8) = param_3;
  *(undefined1 **)(uVar1 - 0x10) = &LAB_15b4d1b3b;
  *(undefined1 **)(uVar1 - 0x18) = &LAB_15b4d1b3b;
  *(undefined8 *)(uVar1 - 0x20) = param_2;
  FUN_15b4d1ac2(param_1,0xffffffffd85b8924,FUN_15b4d1ac2);
  return;
}



// FUNCTION 14dd6432f FUN_14dd6432f body=153 status=ok
// SIG undefined FUN_14dd6432f(void)

void FUN_14dd6432f(undefined8 param_1,undefined8 param_2)

{
  FUN_164788028(param_1,param_2,FUN_164788028);
  return;
}



// FUNCTION 14dd64531 FUN_14dd64531 body=113 status=ok
// SIG undefined FUN_14dd64531(void)

void FUN_14dd64531(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  
  FUN_1667f5667(in_stack_00000008,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14dd645a2 FUN_14dd645a2 body=231 status=ok
// SIG undefined FUN_14dd645a2(void)

undefined8
FUN_14dd645a2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res8;
  longlong local_res18;
  
  FUN_1662a2402(param_1,param_2,param_3,param_4);
  *(undefined8 *)(local_res18 + -8) = param_1;
  *(undefined8 *)(local_res18 + -0x10) = param_1;
  *(undefined **)(local_res18 + -8) = &DAT_14dd6468f;
  return local_res8;
}



// FUNCTION 14dd6489e FUN_14dd6489e body=263 status=ok
// SIG undefined FUN_14dd6489e(void)

/* WARNING: Removing unreachable block (ram,0x00014dd64926) */
/* WARNING: Removing unreachable block (ram,0x00014dd64931) */
/* WARNING: Removing unreachable block (ram,0x00014dd6492c) */

void FUN_14dd6489e(ulonglong param_1,DWORD param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  ulonglong uVar2;
  UINT local_res10;
  ulonglong uStackX_20;
  
  uVar2 = ~((~param_1 | uStackX_20) & (~uStackX_20 | param_1));
  *(undefined8 *)(uVar2 - 8) = unaff_R12;
  *(undefined8 *)(uVar2 - 0x10) = param_4;
  *(undefined8 *)(uVar2 - 0x18) = param_4;
  uVar1 = *(undefined8 *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 0x20) = unaff_R14;
  *(undefined8 *)(uVar2 - 0x10) = uVar1;
  uVar1 = *(undefined8 *)(uVar2 - 0x18);
  *(undefined8 *)(uVar2 - 8) = 0;
  *(longlong *)(uVar2 - 8) = (longlong)(&LAB_165a443f6 + *(longlong *)(uVar2 - 8));
  *(undefined8 *)(uVar2 - 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0001668cae94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WideCharToMultiByte(local_res10,param_2,*(LPCWSTR *)(uVar2 - 0x18),(int)uVar1,
                      *(LPSTR *)(uVar2 + 0x20),*(int *)(uVar2 + 0x28),*(LPCSTR *)(uVar2 + 0x30),
                      *(LPBOOL *)(uVar2 + 0x38));
  return;
}



// FUNCTION 14dd64ac0 FUN_14dd64ac0 body=198 status=ok
// SIG undefined FUN_14dd64ac0(void)

/* WARNING: Instruction at (ram,0x00014dd64b0b) overlaps instruction at (ram,0x00014dd64b0a)
    */
/* WARNING: Removing unreachable block (ram,0x00014dd64b0a) */

void FUN_14dd64ac0(byte param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  byte unaff_R13B;
  
  FUN_14d95f53d(FUN_14d95f53d,param_2,param_3,
                param_4 << (~((param_1 - (unaff_R13B | param_1)) + unaff_R13B) & 0x1f));
  return;
}



// FUNCTION 14dd64b8f FUN_14dd64b8f body=156 status=ok
// SIG undefined FUN_14dd64b8f(void)

void FUN_14dd64b8f(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_1569c24a9(*(ulonglong *)(unaff_RSI + -0x38),*(ulonglong *)(unaff_RSI + -0x38) | unaff_RBP,
                *(ulonglong *)(unaff_RSI + -0x60) ^ unaff_RBP,
                *(ulonglong *)(unaff_RSI + -0x28) ^ unaff_RBP);
  return;
}



// FUNCTION 14dd64cd1 FUN_14dd64cd1 body=101 status=ok
// SIG undefined FUN_14dd64cd1(void)

void FUN_14dd64cd1(void)

{
  return;
}



// FUNCTION 14dd64d65 FUN_14dd64d65 body=20 status=ok
// SIG undefined FUN_14dd64d65(void)

void FUN_14dd64d65(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_retaddr;
  undefined8 uStackX_10;
  
  *(undefined8 *)(&stack0x5745f1a1 + unaff_retaddr) = param_2;
  FUN_14d7a5073(param_1,uStackX_10);
  return;
}



// FUNCTION 14dd64f3e FUN_14dd64f3e body=134 status=ok
// SIG undefined FUN_14dd64f3e(void)

void FUN_14dd64f3e(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_166860645(FUN_166860645,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14dd64fc4 FUN_14dd64fc4 body=314 status=ok
// SIG undefined FUN_14dd64fc4(void)

/* WARNING: Removing unreachable block (ram,0x00014dd65097) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd64fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined2 local_res20;
  
  pcVar1 = FUN_164c2524f;
  FUN_164c2524f();
  FUN_162c0edd3(pcVar1 + 0x73772b26,local_res20,param_3,FUN_162c0edd3);
  return;
}



// FUNCTION 14dd65360 FUN_14dd65360 body=170 status=ok
// SIG undefined FUN_14dd65360(void)

void FUN_14dd65360(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  
  FUN_1570ebc61(param_1,param_2,unaff_RSI,*(undefined8 *)(unaff_RDI + -0x60));
  return;
}



// FUNCTION 14dd65793 FUN_14dd65793 body=152 status=ok
// SIG undefined FUN_14dd65793(void)

void FUN_14dd65793(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_RBX;
  undefined8 unaff_RDI;
  undefined8 in_R9;
  undefined8 unaff_retaddr;
  longlong in_stack_00000028;
  
  uVar1 = *(ulonglong *)(unaff_RBX + 0x10);
  *(ulonglong *)(unaff_RBX + 0x10) = *(ulonglong *)(unaff_RBX + 0x10) ^ 0xffffffffffffffff;
  *(ulonglong *)(unaff_RBX + 0x10) = *(ulonglong *)(unaff_RBX + 0x10) | in_RAX;
  *(ulonglong *)(unaff_RBX + 0x10) = ~(~in_RAX | uVar1) | ~*(ulonglong *)(unaff_RBX + 0x10);
  *(undefined8 *)(in_stack_00000028 + -8) = unaff_retaddr;
  *(undefined8 *)(in_stack_00000028 + -0x10) = unaff_RDI;
  *(undefined8 *)(in_stack_00000028 + -0x18) = unaff_RDI;
  *(undefined8 *)(in_stack_00000028 + -0x20) = in_R9;
  FUN_166444e50();
  return;
}



// FUNCTION 14dd65832 FUN_14dd65832 body=1201 status=ok
// SIG undefined FUN_14dd65832(void)

/* WARNING: Instruction at (ram,0x00014dd658d8) overlaps instruction at (ram,0x00014dd658d7)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000157889a73) */
/* WARNING: Removing unreachable block (ram,0x000157889a79) */
/* WARNING: Removing unreachable block (ram,0x000157889b15) */
/* WARNING: Removing unreachable block (ram,0x000157889b1b) */
/* WARNING: Removing unreachable block (ram,0x000157889b20) */
/* WARNING: Removing unreachable block (ram,0x000164f4e847) */
/* WARNING: Removing unreachable block (ram,0x000164f4e8a7) */
/* WARNING: Removing unreachable block (ram,0x000164f4e8b1) */
/* WARNING: Removing unreachable block (ram,0x000164f4e8c4) */
/* WARNING: Removing unreachable block (ram,0x000164f4e8c9) */
/* WARNING: Removing unreachable block (ram,0x000164f4e8cf) */
/* WARNING: Removing unreachable block (ram,0x000164f4e8d4) */
/* WARNING: Removing unreachable block (ram,0x000164f4e931) */
/* WARNING: Removing unreachable block (ram,0x000164f4e930) */
/* WARNING: Removing unreachable block (ram,0x00014dd658bf) */
/* WARNING: Removing unreachable block (ram,0x00014dd658d8) */
/* WARNING: Removing unreachable block (ram,0x00014dd658d7) */
/* WARNING: Removing unreachable block (ram,0x00014dd65a0a) */
/* WARNING: Removing unreachable block (ram,0x00015689ef24) */
/* WARNING: Removing unreachable block (ram,0x00014dd65a1c) */
/* WARNING: Removing unreachable block (ram,0x00014dd659ff) */

void FUN_14dd65832(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  undefined8 unaff_RBP;
  undefined8 unaff_R15;
  ulonglong local_res18;
  
  uVar1 = ~((~in_RAX | local_res18) + in_RAX + 1) & (local_res18 | in_RAX);
  *(undefined8 *)(uVar1 - 8) = unaff_R15;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RBP;
  *(undefined8 *)(uVar1 - 0x18) = unaff_RBP;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 8) = 0;
  *(ulonglong *)(uVar1 - 8) = *(ulonglong *)(uVar1 - 8) ^ 0x162b75fef;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dd65c02 FUN_14dd65c02 body=78 status=ok
// SIG undefined FUN_14dd65c02(void)

/* WARNING: Removing unreachable block (ram,0x0001612f12c2) */
/* WARNING: Removing unreachable block (ram,0x0001612f12c8) */
/* WARNING: Removing unreachable block (ram,0x00014dd65c46) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd65c02(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 unaff_R13;
  longlong unaff_R14;
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
  ulonglong uVar18;
  undefined8 unaff_retaddr;
  ulonglong uStackX_10;
  ulonglong local_res18;
  
  plVar1 = (longlong *)(local_res18 ^ unaff_R15);
                    /* WARNING: Ignoring partial resolution of indirect */
  uStackX_10._0_2_ = ((ushort)uStackX_10 | 0x100) - 0x100;
  bVar13 = (uStackX_10 & 0x4000) != 0;
  bVar12 = (uStackX_10 & 0x800) != 0;
  bVar11 = (uStackX_10 & 0x200) != 0;
  bVar10 = (uStackX_10 & 0x100) != 0;
  bVar9 = (uStackX_10 & 0x80) != 0;
  bVar8 = (uStackX_10 & 0x40) != 0;
  bVar7 = (uStackX_10 & 0x10) != 0;
  bVar6 = (uStackX_10 & 4) != 0;
  bVar5 = (uStackX_10 & 1) != 0;
  bVar17 = (uStackX_10 & 0x200000) != 0;
  bVar14 = (uStackX_10 & 0x40000) != 0;
  bVar16 = 0;
  bVar15 = 0;
  pcVar2 = (code *)swi(0x2e);
  uVar4 = (*pcVar2)();
  *plVar1 = unaff_R14;
  plVar1[-1] = unaff_R14;
  plVar1[-2] = uVar4;
  *(undefined4 *)(plVar1 + -2) = 0xa2bc577;
  plVar1[-3] = unaff_retaddr;
  plVar1[-4] = (ulonglong)(bVar13 & 1) * 0x4000 | (ulonglong)(bVar12 & 1) * 0x800 |
               (ulonglong)((uStackX_10 & 0x400) != 0) * 0x400 | (ulonglong)(bVar11 & 1) * 0x200 |
               (ulonglong)(bVar10 & 1) * 0x100 | (ulonglong)(bVar9 & 1) * 0x80 |
               (ulonglong)(bVar8 & 1) * 0x40 | (ulonglong)(bVar7 & 1) * 0x10 |
               (ulonglong)(bVar6 & 1) * 4 | (ulonglong)(bVar5 & 1) |
               (ulonglong)(bVar17 & 1) * 0x200000 | (ulonglong)(bVar16 & 1) * 0x100000 |
               (ulonglong)(bVar15 & 1) * 0x80000 | (ulonglong)(bVar14 & 1) * 0x40000;
  *(undefined4 *)((longlong)plVar1 + -0xc) = 0;
  uVar18 = plVar1[-4];
  lVar3 = plVar1[-2];
  plVar1[-2] = (ulonglong)((uVar18 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar18 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar18 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar18 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar18 & 0x100) != 0) * 0x100 | (ulonglong)((uVar18 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar18 & 0x40) != 0) * 0x40 | (ulonglong)((uVar18 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar18 & 4) != 0) * 4 | (ulonglong)((uVar18 & 1) != 0) |
               (ulonglong)((uVar18 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar18 & 0x40000) != 0) * 0x40000;
  plVar1[-3] = lVar3;
  plVar1[-3] = plVar1[-3] + -0x897285f;
  *plVar1 = lVar3 + -0x897285f;
  *(undefined8 *)((longlong)plVar1 + -0x28c7) = unaff_R13;
  *(undefined8 *)((longlong)plVar1 + -0x28cf) = unaff_R13;
  *(undefined **)((longlong)plVar1 + -0x28c7) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14dd65d95 FUN_14dd65d95 body=146 status=ok
// SIG undefined FUN_14dd65d95(void)

void FUN_14dd65d95(undefined8 param_1)

{
  longlong unaff_RDI;
  
  FUN_1577f6730(param_1,~*(ulonglong *)(unaff_RDI + -0x60));
  return;
}



// FUNCTION 14dd65f75 FUN_14dd65f75 body=148 status=ok
// SIG undefined FUN_14dd65f75(void)

ulonglong FUN_14dd65f75(void)

{
  ulonglong unaff_RBP;
  
  return ~unaff_RBP;
}



// FUNCTION 14dd6600a FUN_14dd6600a body=29 status=ok
// SIG undefined FUN_14dd6600a(void)

void FUN_14dd6600a(void)

{
  return;
}



// FUNCTION 14dd660f3 FUN_14dd660f3 body=158 status=ok
// SIG undefined FUN_14dd660f3(void)

/* WARNING: Removing unreachable block (ram,0x00014dd66192) */
/* WARNING: Removing unreachable block (ram,0x000162b79e59) */
/* WARNING: Removing unreachable block (ram,0x00014dd66198) */
/* WARNING: Removing unreachable block (ram,0x00015b9cee45) */
/* WARNING: Removing unreachable block (ram,0x00014dd6635b) */
/* WARNING: Removing unreachable block (ram,0x00014dd66361) */
/* WARNING: Removing unreachable block (ram,0x00014dd66366) */
/* WARNING: Removing unreachable block (ram,0x00014dd6637c) */

undefined8 FUN_14dd660f3(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_162b79e59();
  return uVar1;
}



// FUNCTION 14dd66198 FUN_14dd66198 body=305 status=ok
// SIG undefined FUN_14dd66198(void)

/* WARNING: Removing unreachable block (ram,0x00014dd66366) */
/* WARNING: Removing unreachable block (ram,0x00014dd6637c) */

void FUN_14dd66198(undefined8 param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  longlong unaff_R13;
  undefined8 local_res8;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  ulonglong in_stack_00000030;
  
  puVar1 = (undefined8 *)(~in_stack_00000030 & param_2);
  puVar1[-1] = unaff_RDI;
  puVar1[-2] = uStackX_10;
  puVar1[-3] = uStackX_10;
  puVar1[-4] = local_res8;
  uVar2 = puVar1[-4];
  puVar1[-2] = 0;
  puVar1[-2] = puVar1[-2] ^ puVar1[-1];
  puVar1[-1] = &LAB_156b29b8c;
  puVar1[-3] = 0x14dd6623a;
  FUN_156b29b33(param_1,uStackX_18);
  puVar1[-3] = FUN_14dd662cc;
  uVar3 = FUN_164777697();
  *puVar1 = param_1;
  uVar4 = (uVar3 & uVar2) * 2;
  uVar3 = ((uVar2 - 1) - ~uVar3) + (uVar3 & uVar2) * -2 ^ uVar4;
  if (~((uVar2 ^ 0xffffffffffffffff) & *(ulonglong *)(unaff_R13 + -0x38)) +
      *(ulonglong *)(unaff_R13 + -0x38) < ~(uVar2 ^ 0xffffffffffffffff)) {
    FUN_15b9cee45();
    return;
  }
  FUN_166caba39(uVar2 + *(ulonglong *)(unaff_R13 + -0x78) +
                (*(ulonglong *)(unaff_R13 + -0x78) & uVar2) * -2,FUN_166caba39,
                uVar4 + uVar3 + (uVar4 & uVar3) * -2);
  return;
}



// FUNCTION 14dd662cc FUN_14dd662cc body=274 status=ok
// SIG undefined FUN_14dd662cc(void)

/* WARNING: Removing unreachable block (ram,0x00014dd66366) */
/* WARNING: Removing unreachable block (ram,0x00014dd6637c) */

void FUN_14dd662cc(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = (in_RAX & unaff_R15) * 2;
  uVar1 = ((unaff_R15 - 1) - ~in_RAX) + (in_RAX & unaff_R15) * -2 ^ uVar2;
  if (~((unaff_R15 ^ 0xffffffffffffffff) & *(ulonglong *)(unaff_R13 + -0x38)) +
      *(ulonglong *)(unaff_R13 + -0x38) < ~(unaff_R15 ^ 0xffffffffffffffff)) {
    FUN_15b9cee45();
    return;
  }
  FUN_166caba39(unaff_R15 + *(ulonglong *)(unaff_R13 + -0x78) +
                (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) * -2,FUN_166caba39,
                uVar2 + uVar1 + (uVar2 & uVar1) * -2);
  return;
}



// FUNCTION 14dd66521 FUN_14dd66521 body=305 status=ok
// SIG undefined FUN_14dd66521(void)

/* WARNING: Removing unreachable block (ram,0x00014dd665b9) */
/* WARNING: Removing unreachable block (ram,0x00014dd665bf) */
/* WARNING: Removing unreachable block (ram,0x00014dd666ec) */
/* WARNING: Removing unreachable block (ram,0x00014dd666f1) */
/* WARNING: Removing unreachable block (ram,0x00014dd666f7) */
/* WARNING: Removing unreachable block (ram,0x00014dd66797) */
/* WARNING: Removing unreachable block (ram,0x00016647a55c) */
/* WARNING: Removing unreachable block (ram,0x00016647a571) */
/* WARNING: Removing unreachable block (ram,0x00016647a575) */
/* WARNING: Removing unreachable block (ram,0x00016647a687) */
/* WARNING: Removing unreachable block (ram,0x00016647a68d) */
/* WARNING: Removing unreachable block (ram,0x00016647a682) */
/* WARNING: Removing unreachable block (ram,0x00014d7a4e86) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x00014dd6679c) */
/* WARNING: Removing unreachable block (ram,0x00014dd667a2) */
/* WARNING: Removing unreachable block (ram,0x0001612bdbea) */
/* WARNING: Removing unreachable block (ram,0x0001662c7933) */

undefined8 FUN_14dd66521(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1617d7322(param_1);
  return uVar1;
}



// FUNCTION 14dd66654 FUN_14dd66654 body=425 status=ok
// SIG undefined FUN_14dd66654(void)

/* WARNING: Removing unreachable block (ram,0x00014dd6679c) */
/* WARNING: Removing unreachable block (ram,0x00014dd667a2) */
/* WARNING: Removing unreachable block (ram,0x00016647a68d) */
/* WARNING: Removing unreachable block (ram,0x00014dd666f7) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14dd66654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 in_RAX;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_RBP;
  undefined8 in_R10;
  code *pcVar6;
  undefined8 in_R11;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  undefined8 local_res18;
  
  puVar1 = (ulonglong *)((~param_5 | ~unaff_R15) & (param_5 | unaff_R15));
  if (-1 < (longlong)puVar1) {
    puVar1[-1] = local_res18;
    puVar1[-2] = param_2;
    uVar4 = puVar1[-2];
    puVar1[-2] = uVar4;
    puVar1[-3] = uVar4;
    puVar1[-2] = puVar1[-1];
    uVar4 = puVar1[-3];
    puVar1[-3] = (ulonglong)&LAB_15674b371;
    puVar1[-4] = in_RAX;
    *(undefined4 *)(puVar1 + -4) = 0x53b8e55;
    *(undefined4 *)((longlong)puVar1 - 0x1c) = 0;
    *(undefined8 *)((longlong)puVar1 + ((puVar1[-4] ^ 0x53b8e5d) - 0x10)) = 0;
    puVar1[-1] = puVar1[-1];
    puVar1[-1] = puVar1[-1] ^ puVar1[-3];
    uVar2 = puVar1[-2];
    puVar1[-2] = in_R10;
    puVar1[-3] = in_R10;
    pcVar6 = FUN_15674b338;
    puVar1[-4] = (ulonglong)FUN_16647a5f4;
    uVar5 = FUN_15674b338(param_1,uVar4);
    puVar1[-3] = param_4;
    puVar1[-4] = (ulonglong)pcVar6;
    uVar3 = puVar1[-1];
    puVar1[-4] = in_R11;
    puVar1[-1] = puVar1[-1] & uVar2;
    puVar1[-1] = ~puVar1[-1];
    puVar1[-4] = param_3;
    puVar1[-5] = unaff_RBP;
    puVar1[-1] = ~puVar1[-1];
    puVar1[-1] = puVar1[-1] | ~(~uVar2 & uVar3 | uVar2);
    puVar1[-1] = ~puVar1[-1];
    uVar4 = puVar1[-5];
    puVar1[-3] = in_stack_00000008;
    uVar3 = *puVar1;
    *puVar1 = *puVar1 & uVar2;
    *puVar1 = ~*puVar1;
    *puVar1 = *puVar1 & (uVar3 | uVar2);
    *(ushort *)(puVar1 + -1) = (ushort)puVar1[-1] & 0xfeff;
    uVar2 = *puVar1;
    *(undefined8 *)(uVar2 - 8) = unaff_R14;
    *(undefined8 *)(uVar2 - 0x10) = uVar4;
    *(undefined8 *)(uVar2 - 0x18) = uVar4;
    uVar4 = *(undefined8 *)(uVar2 - 8);
    *(undefined8 *)(uVar2 - 0x20) = uVar5;
    *(undefined8 *)(uVar2 - 0x10) = uVar4;
    uVar4 = *(undefined8 *)(uVar2 - 0x20);
    *(undefined **)(uVar2 - 8) = &DAT_1661f2a41;
    return uVar4;
  }
  uVar4 = FUN_16647a55c();
  return uVar4;
}



// FUNCTION 14dd66824 FUN_14dd66824 body=123 status=ok
// SIG undefined FUN_14dd66824(void)

/* WARNING: Removing unreachable block (ram,0x00016272066c) */
/* WARNING: Removing unreachable block (ram,0x0001627206df) */
/* WARNING: Removing unreachable block (ram,0x0001627206ec) */
/* WARNING: Removing unreachable block (ram,0x00014dd668a0) */

void FUN_14dd66824(void)

{
  ulonglong in_RAX;
  ulonglong unaff_RBX;
  
  if ((unaff_RBX & in_RAX) == 0xffffffffffffffff && (unaff_RBX == 0 && in_RAX == 0)) {
    FUN_1627205d0();
    return;
  }
  return;
}



// FUNCTION 14dd668a0 FUN_14dd668a0 body=150 status=ok
// SIG undefined FUN_14dd668a0(void)

void FUN_14dd668a0(undefined8 param_1)

{
  FUN_16681d97b(param_1);
  return;
}



// FUNCTION 14dd669da FUN_14dd669da body=193 status=ok
// SIG undefined FUN_14dd669da(void)

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0x00000020 */
/* WARNING: Removing unreachable block (ram,0x000165a06a4b) */
/* WARNING: Removing unreachable block (ram,0x00014dd66a69) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd669da(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong *unaff_R13;
  undefined8 in_stack_00000008;
  undefined8 local_res20;
  ulonglong in_stack_00000028;
  
  uVar1 = *unaff_R13;
  *unaff_R13 = ~*unaff_R13;
  *unaff_R13 = *unaff_R13 | param_1;
  *unaff_R13 = ~((~param_1 | uVar1) & *unaff_R13);
  uVar1 = ~local_res20;
  if (!CARRY8(uVar1,param_1)) {
    FUN_165a069b3();
    return;
  }
  *(undefined8 *)((in_stack_00000028 ^ param_1) - 8) = in_stack_00000008;
  if (((uVar1 + param_1) - (uVar1 & param_1) & 1) != 0) {
    FUN_161b9bcbe();
    return;
  }
  FUN_161b9bcbe();
  return;
}



// FUNCTION 14dd66afa FUN_14dd66afa body=29 status=ok
// SIG undefined FUN_14dd66afa(void)

void FUN_14dd66afa(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dd66b2a FUN_14dd66b2a body=23 status=ok
// SIG undefined FUN_14dd66b2a(void)

void FUN_14dd66b2a(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14dd66c62 FUN_14dd66c62 body=174 status=ok
// SIG undefined FUN_14dd66c62(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd66c62(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_157877c1b(param_1,0xaa73be48,0x5415963c,*(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14dd66d12 FUN_14dd66d12 body=151 status=ok
// SIG undefined FUN_14dd66d12(void)

/* WARNING: Removing unreachable block (ram,0x00016194b926) */
/* WARNING: Removing unreachable block (ram,0x00014dd66da9) */

void FUN_14dd66d12(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  if (-1 < (longlong)(~*(ulonglong *)(unaff_R12 + -0x60) & in_RAX)) {
    FUN_16194b8e7();
    return;
  }
  FUN_165e9eb8b(*(ulonglong *)(unaff_R12 + -0x30),FUN_165e9eb8b,param_3,
                ~*(ulonglong *)(unaff_R12 + -0x30) | in_RAX);
  return;
}



// FUNCTION 14dd66da9 FUN_14dd66da9 body=13 status=ok
// SIG undefined FUN_14dd66da9(void)

void FUN_14dd66da9(void)

{
  FUN_16131bb16();
  return;
}



// FUNCTION 14dd66ee7 FUN_14dd66ee7 body=28 status=ok
// SIG undefined FUN_14dd66ee7(void)

void FUN_14dd66ee7(void)

{
  return;
}



// FUNCTION 14dd66f91 FUN_14dd66f91 body=43 status=ok
// SIG undefined FUN_14dd66f91(void)

void FUN_14dd66f91(void)

{
  longlong in_RAX;
  undefined4 local_res8 [8];
  
  *(undefined4 *)((longlong)local_res8 + in_RAX) = 0;
  return;
}



// FUNCTION 14dd67112 FUN_14dd67112 body=122 status=ok
// SIG undefined FUN_14dd67112(void)

void FUN_14dd67112(void)

{
  FUN_1663292b1();
  return;
}



// FUNCTION 14dd672d8 FUN_14dd672d8 body=118 status=ok
// SIG undefined FUN_14dd672d8(void)

void FUN_14dd672d8(void)

{
  ulonglong *unaff_R13;
  ulonglong unaff_R15;
  
  *unaff_R13 = ~unaff_R15;
  FUN_1626ec790();
  return;
}



// FUNCTION 14dd6734e FUN_14dd6734e body=149 status=ok
// SIG undefined FUN_14dd6734e(void)

void FUN_14dd6734e(void)

{
  return;
}



// FUNCTION 14dd67558 FUN_14dd67558 body=106 status=ok
// SIG undefined FUN_14dd67558(void)

void FUN_14dd67558(void)

{
  longlong unaff_RSI;
  
  if (unaff_RSI == 0xc531a) {
    return;
  }
  if (unaff_RSI == 0xc531b) {
    FUN_16131bb16();
    return;
  }
  (*(code *)&LAB_16210fe5f)();
  return;
}



// FUNCTION 14dd675c2 FUN_14dd675c2 body=317 status=ok
// SIG undefined FUN_14dd675c2(void)

/* WARNING: Removing unreachable block (ram,0x00014dd6764e) */
/* WARNING: Removing unreachable block (ram,0x00014dd676c1) */

void FUN_14dd675c2(undefined8 param_1)

{
  FUN_15707f616(param_1);
  return;
}



// FUNCTION 14dd677f9 FUN_14dd677f9 body=144 status=ok
// SIG undefined FUN_14dd677f9(void)

void FUN_14dd677f9(void)

{
  longlong unaff_R13;
  
  FUN_16160d5fb(*(undefined8 *)(unaff_R13 + -0x78),FUN_16160d5fb);
  return;
}



// FUNCTION 14dd6788a FUN_14dd6788a body=355 status=ok
// SIG undefined FUN_14dd6788a(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd6788a(void)

{
  FUN_14df1aa45();
  FUN_14e0a4193();
  return;
}



// FUNCTION 14dd67a73 FUN_14dd67a73 body=150 status=ok
// SIG undefined FUN_14dd67a73(void)

/* WARNING: Instruction at (ram,0x00014dd67a8b) overlaps instruction at (ram,0x00014dd67a8a)
    */
/* WARNING: Removing unreachable block (ram,0x00014dd67a8a) */

void FUN_14dd67a73(void)

{
  return;
}



// FUNCTION 14dd67c39 FUN_14dd67c39 body=136 status=ok
// SIG undefined FUN_14dd67c39(void)

/* WARNING: Removing unreachable block (ram,0x00014dd67cb7) */
/* WARNING: Removing unreachable block (ram,0x00014dd67cc2) */
/* WARNING: Removing unreachable block (ram,0x00014dd67d16) */
/* WARNING: Removing unreachable block (ram,0x00014dd67d1c) */
/* WARNING: Removing unreachable block (ram,0x00014dd67d21) */
/* WARNING: Removing unreachable block (ram,0x000164fcab2f) */
/* WARNING: Removing unreachable block (ram,0x000166b87b3a) */
/* WARNING: Removing unreachable block (ram,0x00014dd67cbd) */
/* WARNING: Removing unreachable block (ram,0x00016681a1ed) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

LPVOID FUN_14dd67c39(ulonglong param_1,DWORD param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  HANDLE hHeap;
  SIZE_T dwBytes;
  longlong lVar3;
  undefined8 uVar4;
  LPVOID pvVar5;
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  LPVOID unaff_retaddr;
  ulonglong local_res8;
  ulonglong uStackX_10;
  ulonglong uStackX_18;
  
  hHeap = (HANDLE)(local_res8 + unaff_R15 + (local_res8 & unaff_R15) * -2);
  if (-1 < (longlong)(uStackX_10 & unaff_R15)) {
    pvVar5 = (LPVOID)FUN_162c46d45();
    return pvVar5;
  }
  if ((longlong)(uStackX_10 & unaff_R15) < 1) {
    lVar3 = uStackX_18 + unaff_R15 + (uStackX_18 & unaff_R15) * -2;
    *(undefined8 *)(lVar3 + -8) = param_4;
    *(undefined8 *)(lVar3 + -0x10) = unaff_R14;
    *(HANDLE *)(lVar3 + -0x18) = hHeap;
    *(HANDLE *)(lVar3 + -0x20) = hHeap;
    *(HANDLE *)(lVar3 + -0x28) = hHeap;
    *(code **)(lVar3 + -0x18) = FUN_162c46e0c;
    *(undefined **)(lVar3 + -0x20) = &DAT_1574130c0;
    return unaff_retaddr;
  }
  uVar4 = FUN_161c8ccd4();
  uVar1 = *(ulonglong *)(unaff_R15 + 0x10);
  *(ulonglong *)(unaff_R15 + 0x10) = ~*(ulonglong *)(unaff_R15 + 0x10);
  *(ulonglong *)(unaff_R15 + 0x10) = *(ulonglong *)(unaff_R15 + 0x10) | param_1;
  uVar2 = *(ulonglong *)(unaff_R15 + 0x10);
  *(undefined8 *)(unaff_R15 + 0x10) = 0;
  *(longlong *)(unaff_R15 + 0x10) =
       *(longlong *)(unaff_R15 + 0x10) + ((~param_1 | uVar1) & uVar2 ^ 0xffffffffffffffff);
  *(undefined8 *)(uStackX_18 - 0x10) = unaff_RBX;
  *(undefined8 *)(uStackX_18 - 8) = in_R10;
  *(undefined8 *)(uStackX_18 - 0x10) = in_R11;
  *(undefined **)(uStackX_18 - 0x10) = &DAT_15ca77338;
  *(longlong *)(uStackX_18 - 0x10) = *(longlong *)(uStackX_18 - 0x10) + -0x59ebe32;
  lVar3 = *(longlong *)(uStackX_18 - 0x10);
  *(undefined8 *)(uStackX_18 - 0x10) = param_3;
  *(undefined8 *)(uStackX_18 - 0x18) = param_3;
  *(undefined8 *)(uStackX_18 - 0x10) = *(undefined8 *)(uStackX_18 - 8);
  dwBytes = *(SIZE_T *)(uStackX_18 - 0x18);
  *(undefined8 *)(uStackX_18 - 0x18) = param_4;
  *(undefined8 *)(uStackX_18 - 0x20) = unaff_R14;
  *(undefined8 *)(uStackX_18 - 0x28) = uVar4;
  *(ulonglong *)(uStackX_18 - 0x28) = unaff_RBP ^ unaff_R15;
  *(longlong *)(uStackX_18 - 8) = lVar3 + 0x133f;
                    /* WARNING: Could not recover jumptable at 0x00015708c82b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar5 = HeapAlloc(hHeap,param_2,dwBytes);
  return pvVar5;
}



// FUNCTION 14dd67cc2 FUN_14dd67cc2 body=108 status=ok
// SIG undefined FUN_14dd67cc2(void)

/* WARNING: Removing unreachable block (ram,0x00014dd67d21) */

void FUN_14dd67cc2(ulonglong param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  uint unaff_ESI;
  ulonglong in_R11;
  longlong unaff_R12;
  
  if ((int)(unaff_ESI >> 0x1e | unaff_ESI << 2) < 0) {
    FUN_164fcab2f();
    return;
  }
  uVar1 = *(ulonglong *)(unaff_R12 + -0x48);
  FUN_1610a7c37(param_2 + ((in_RAX - (param_1 | in_RAX)) + param_1) * -2,
                *(ulonglong *)(unaff_R12 + -0x78) + in_RAX +
                (*(ulonglong *)(unaff_R12 + -0x78) & in_RAX) * -2,param_3);
  *(undefined8 *)(&stack0xfffffffff227eafe + ~(~uVar1 & (in_R11 | 0xffffffff95c33680))) =
       0x48d88b49ea220d66;
  FUN_162858a66();
  return;
}



// FUNCTION 14dd67ed9 FUN_14dd67ed9 body=696 status=ok
// SIG undefined FUN_14dd67ed9(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014dd67f94) */
/* WARNING: Removing unreachable block (ram,0x00014dd680c7) */
/* WARNING: Removing unreachable block (ram,0x00016679c90c) */
/* WARNING: Removing unreachable block (ram,0x00014d7c42a3) */

undefined8 FUN_14dd67ed9(ulonglong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  longlong lVar2;
  
  lVar2 = *(ulonglong *)(unaff_RDI + -0xa0) + param_1;
  if (CARRY8(*(ulonglong *)(unaff_RDI + -0xa0),param_1)) {
    uVar1 = FUN_164845d62(param_1,param_2,lVar2);
    return uVar1;
  }
  uVar1 = FUN_164845d62(param_1,param_2,lVar2);
  return uVar1;
}



// FUNCTION 14dd68167 FUN_14dd68167 body=99 status=ok
// SIG undefined FUN_14dd68167(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dd68167(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dd681fd FUN_14dd681fd body=7 status=ok
// SIG undefined FUN_14dd681fd(void)

void FUN_14dd681fd(void)

{
  FUN_165e93f27();
  return;
}



// FUNCTION 14dd68204 FUN_14dd68204 body=143 status=ok
// SIG undefined FUN_14dd68204(void)

void FUN_14dd68204(void)

{
  longlong in_R9;
  
  if (in_R9 != 0xca9b0) {
    FUN_166b1cc61();
    return;
  }
  FUN_166b1cc5e();
  return;
}



// FUNCTION 14dd68294 FUN_14dd68294 body=153 status=ok
// SIG undefined FUN_14dd68294(void)

void FUN_14dd68294(undefined8 param_1)

{
  FUN_166b9a71b(param_1,FUN_166b9a71b);
  return;
}



// FUNCTION 14dd6832f FUN_14dd6832f body=430 status=ok
// SIG undefined FUN_14dd6832f(void)

/* WARNING: Removing unreachable block (ram,0x00014dd683b1) */

void FUN_14dd6832f(undefined8 param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  (*(code *)0x15afcc38f)(param_1,~(param_2 & unaff_R15) & param_4,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14dd68474 FUN_14dd68474 body=155 status=ok
// SIG undefined FUN_14dd68474(void)

void FUN_14dd68474(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x68) ^ 0xffffffffffffffff;
  FUN_160c53ed2(FUN_160c53ed2,
                ~((~param_1 | *(ulonglong *)(unaff_RDI + -0x68)) &
                 (~(uVar1 & param_1) + param_1) - ~uVar1));
  return;
}



// FUNCTION 14dd6850f FUN_14dd6850f body=468 status=ok
// SIG undefined FUN_14dd6850f(void)

/* WARNING: Removing unreachable block (ram,0x00014dd68626) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dd6850f(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 in_stack_00000008;
  
  uVar1 = FUN_1669181f5(FUN_1669181f5,param_2,in_stack_00000008);
  return uVar1;
}



// FUNCTION 14dd689dd FUN_14dd689dd body=922 status=ok
// SIG undefined FUN_14dd689dd(void)

/* WARNING: Removing unreachable block (ram,0x00014dd68b23) */
/* WARNING: Removing unreachable block (ram,0x00014dd68b29) */
/* WARNING: Removing unreachable block (ram,0x00014df14b30) */
/* WARNING: Removing unreachable block (ram,0x00014dd68a74) */
/* WARNING: Removing unreachable block (ram,0x00014dd68a7a) */
/* WARNING: Removing unreachable block (ram,0x00014dd68a84) */
/* WARNING: Removing unreachable block (ram,0x00014dd68b1e) */
/* WARNING: Removing unreachable block (ram,0x000161c2a33a) */
/* WARNING: Removing unreachable block (ram,0x000166197233) */

void FUN_14dd689dd(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong lVar1;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 local_res10;
  longlong local_res20;
  
  *(ulonglong *)(unaff_R12 + 0x18) =
       (-2 - (*(ulonglong *)(unaff_R12 + 0x18) | 0xfffffffffffffffe)) +
       *(longlong *)(unaff_R12 + 0x18);
  lVar1 = unaff_R13 - local_res20;
  *(undefined8 *)(lVar1 + -8) = unaff_R15;
  *(undefined8 *)(lVar1 + -0x10) = param_2;
  *(undefined8 *)(lVar1 + -0x10) = unaff_R14;
  *(undefined8 *)(lVar1 + -0x18) = unaff_R14;
  *(undefined8 *)(lVar1 + -0x20) = unaff_RBP;
  *(undefined8 *)(lVar1 + -0x28) = local_res10;
  *(undefined4 *)(lVar1 + -0x28) = 0x969ac5f;
  *(undefined4 *)(lVar1 + -0x24) = 0;
  *(undefined8 *)(lVar1 + -0x10) =
       *(undefined8 *)(lVar1 + -0x18 + (*(longlong *)(lVar1 + -0x28) + 0x30877469U ^ 0x39f120d8));
  *(undefined8 *)(lVar1 + -0x18) = unaff_RDI;
  *(undefined1 **)(lVar1 + -8) = &LAB_14df14b56;
  FUN_14df14b30();
  return;
}



// FUNCTION 14dd68bc5 FUN_14dd68bc5 body=160 status=ok
// SIG undefined FUN_14dd68bc5(void)

void FUN_14dd68bc5(void)

{
  (*(code *)&LAB_156e5f74d)();
  return;
}



// FUNCTION 14dd68c65 FUN_14dd68c65 body=295 status=ok
// SIG undefined FUN_14dd68c65(void)

/* WARNING: Removing unreachable block (ram,0x00014dd68cdb) */
/* WARNING: Removing unreachable block (ram,0x00014dd68ce1) */

void FUN_14dd68c65(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res8;
  ulonglong uStackX_18;
  
  *(undefined8 *)((param_1 - ~uStackX_18) + (uStackX_18 & param_1) * -2 + -9) = param_3;
  FUN_14de2941b(local_res8,param_2,FUN_14de2941b,param_4);
  return;
}



// FUNCTION 14dd68ec2 FUN_14dd68ec2 body=164 status=ok
// SIG undefined FUN_14dd68ec2(void)

/* WARNING: Instruction at (ram,0x000157329cc1) overlaps instruction at (ram,0x000157329cc0)
    */
/* WARNING: Removing unreachable block (ram,0x000157329cc0) */
/* WARNING: Removing unreachable block (ram,0x00014dd68f4d) */

void FUN_14dd68ec2(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong unaff_RBP;
  
  if (*(int *)(unaff_RBP + param_3) < 0) {
    FUN_157329c6d();
    return;
  }
  *(int *)(unaff_RBP + 0x134) = *(int *)(unaff_RBP + param_3);
  return;
}



// FUNCTION 14dd69005 FUN_14dd69005 body=139 status=ok
// SIG undefined FUN_14dd69005(void)

void FUN_14dd69005(void)

{
  (*(code *)&LAB_1663bd893)();
  return;
}



// FUNCTION 14dd69092 FUN_14dd69092 body=296 status=ok
// SIG undefined FUN_14dd69092(void)

/* WARNING: Removing unreachable block (ram,0x00014dd69116) */

void FUN_14dd69092(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000010;
  
  (*(code *)&LAB_156f6c2a8)(param_1,in_stack_00000010,param_3);
  return;
}



// FUNCTION 14dd69309 FUN_14dd69309 body=159 status=ok
// SIG undefined FUN_14dd69309(void)

void FUN_14dd69309(void)

{
  return;
}



// FUNCTION 14dd693ac FUN_14dd693ac body=87 status=ok
// SIG undefined FUN_14dd693ac(void)

void FUN_14dd693ac(void)

{
  FUN_14d7a5283();
  return;
}



// FUNCTION 14dd69509 FUN_14dd69509 body=17 status=ok
// SIG undefined FUN_14dd69509(void)

void FUN_14dd69509(void)

{
  return;
}



// FUNCTION 14dd6962c FUN_14dd6962c body=153 status=ok
// SIG undefined FUN_14dd6962c(void)

void FUN_14dd6962c(void)

{
  FUN_15b7cb8e6();
  return;
}



// FUNCTION 14dd696c9 FUN_14dd696c9 body=126 status=ok
// SIG undefined FUN_14dd696c9(void)

void FUN_14dd696c9(void)

{
  ulonglong unaff_RBX;
  ushort *puVar1;
  undefined1 local_res10 [24];
  
  puVar1 = (ushort *)
           (~((unaff_RBX ^ (ulonglong)local_res10) & unaff_RBX) &
           (unaff_RBX ^ (ulonglong)local_res10 | unaff_RBX));
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 | 0x100;
  *puVar1 = -*puVar1;
  *puVar1 = *puVar1 - 1;
  FUN_14dfb605d();
  return;
}



// FUNCTION 14dd69749 FUN_14dd69749 body=487 status=ok
// SIG undefined FUN_14dd69749(void)

void FUN_14dd69749(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R12;
  longlong unaff_R13;
  undefined8 uStack0000000000000028;
  
  uStack0000000000000028 = *(undefined8 *)(unaff_R13 + unaff_R12);
  FUN_14df5dbae(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dd6987a FUN_14dd6987a body=155 status=ok
// SIG undefined FUN_14dd6987a(void)

void FUN_14dd6987a(ulonglong param_1)

{
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong in_R10;
  ulonglong uVar1;
  
  uVar1 = ~(~(unaff_RSI & 0xffffffffe862dc6b) & (in_R10 | 0xffffffffe862dc6b)) ^
          *(ulonglong *)(unaff_RDI + -0x30);
  FUN_165494e2f(0xae,(~param_1 | uVar1) & ~(uVar1 & 0xffffffffffffffff - param_1) ^
                     0xffffffffffffffff,~-*(longlong *)(unaff_RDI + -0x70) + 1U & param_1,
                *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14dd69915 FUN_14dd69915 body=121 status=ok
// SIG undefined FUN_14dd69915(void)

void FUN_14dd69915(void)

{
  FUN_161b1872b();
  return;
}



// FUNCTION 14dd6998e FUN_14dd6998e body=58 status=ok
// SIG undefined FUN_14dd6998e(void)

undefined2 FUN_14dd6998e(void)

{
  undefined1 in_AL;
  
  return CONCAT11(in_AL,in_AL);
}



// FUNCTION 14dd69a1d FUN_14dd69a1d body=50 status=ok
// SIG undefined FUN_14dd69a1d(void)

void FUN_14dd69a1d(void)

{
  return;
}



// FUNCTION 14dd69bf2 FUN_14dd69bf2 body=167 status=ok
// SIG undefined FUN_14dd69bf2(void)

longlong FUN_14dd69bf2(void)

{
  longlong in_RAX;
  longlong lVar1;
  bool in_CF;
  
  lVar1 = 0x56dccd94;
  if (in_CF) {
    lVar1 = 0x56dccd95;
  }
  return in_RAX + lVar1;
}



// FUNCTION 14dd69db0 FUN_14dd69db0 body=265 status=ok
// SIG undefined FUN_14dd69db0(void)

/* WARNING: Removing unreachable block (ram,0x00014dd69e39) */
/* WARNING: Removing unreachable block (ram,0x00014dd69eb1) */
/* WARNING: Removing unreachable block (ram,0x00014dd69eb6) */
/* WARNING: Removing unreachable block (ram,0x0001614b4020) */
/* WARNING: Removing unreachable block (ram,0x00014dd69ebc) */

undefined8 FUN_14dd69db0(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dd69ebc FUN_14dd69ebc body=45 status=ok
// SIG undefined FUN_14dd69ebc(void)

undefined8 FUN_14dd69ebc(void)

{
  undefined8 local_res8;
  
  return local_res8;
}



// FUNCTION 14dd6a095 FUN_14dd6a095 body=115 status=ok
// SIG undefined FUN_14dd6a095(void)

void FUN_14dd6a095(undefined8 param_1)

{
  undefined8 in_stack_00000008;
  
  FUN_14de9ee33(param_1,in_stack_00000008);
  return;
}



// FUNCTION 14dd6a194 FUN_14dd6a194 body=131 status=ok
// SIG undefined FUN_14dd6a194(void)

void FUN_14dd6a194(short param_1)

{
  ulonglong uVar1;
  short unaff_BP;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = ~*(ulonglong *)(unaff_R13 + -0x38) | unaff_R15;
  (*(code *)0x15b20930e)
            (param_1 - unaff_BP,
             -((~uVar1 | ~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x38)) + uVar1 + 1),
             *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
             *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14dd6a2bb FUN_14dd6a2bb body=158 status=ok
// SIG undefined FUN_14dd6a2bb(void)

void FUN_14dd6a2bb(void)

{
  FUN_156880016();
  return;
}



// FUNCTION 14dd6a40a FUN_14dd6a40a body=145 status=ok
// SIG undefined FUN_14dd6a40a(void)

void FUN_14dd6a40a(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_166e0ef8f((char)param_1,param_1 | ~*(ulonglong *)(unaff_RDI + -0x40),FUN_166e0ef8f);
  return;
}



// FUNCTION 14dd6a49c FUN_14dd6a49c body=143 status=ok
// SIG undefined FUN_14dd6a49c(void)

void FUN_14dd6a49c(short *param_1)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  short unaff_DI;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  longlong local_res20;
  
  *param_1 = unaff_DI + 1;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RSI;
  *(undefined8 *)(local_res20 + -8) = unaff_R12;
  *(undefined8 *)(local_res20 + -0x10) = unaff_retaddr;
  *(undefined8 *)(local_res20 + -0x18) = unaff_retaddr;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = unaff_R13;
  *(undefined8 *)(local_res20 + -0x20) = in_RAX;
  *(undefined1 **)(local_res20 + -8) = &LAB_1651842ef;
  uVar1 = *(undefined8 *)(local_res20 + -0x18);
  *(undefined8 *)(local_res20 + -0x18) = unaff_RBX;
  *(undefined8 *)(local_res20 + -0x18) = uVar1;
  *(undefined8 *)(local_res20 + -0x20) = uVar1;
  *(undefined1 **)(local_res20 + -0x18) = &LAB_14dd6a52c;
  (*(code *)0x1651842b8)(uStackX_8);
  return;
}



// FUNCTION 14dd6a5cb FUN_14dd6a5cb body=3 status=ok
// SIG undefined FUN_14dd6a5cb(void)

void FUN_14dd6a5cb(void)

{
  return;
}



// FUNCTION 14dd6a7b3 FUN_14dd6a7b3 body=293 status=ok
// SIG undefined FUN_14dd6a7b3(void)

/* WARNING: Removing unreachable block (ram,0x00014dd6a83c) */
/* WARNING: Removing unreachable block (ram,0x00014dd6a866) */
/* WARNING: Removing unreachable block (ram,0x00014dd6a861) */
/* WARNING: Removing unreachable block (ram,0x00014dd6a86b) */
/* WARNING: Removing unreachable block (ram,0x00014dd6a8ae) */

void FUN_14dd6a7b3(undefined8 param_1)

{
  longlong unaff_R13;
  
  FUN_160daa31f(param_1,*(undefined8 *)(unaff_R13 + -0x70));
  return;
}



// FUNCTION 14dd6a970 FUN_14dd6a970 body=145 status=ok
// SIG undefined FUN_14dd6a970(void)

void FUN_14dd6a970(void)

{
  return;
}



// FUNCTION 14dd6abe0 FUN_14dd6abe0 body=142 status=ok
// SIG undefined FUN_14dd6abe0(void)

void FUN_14dd6abe0(undefined8 param_1,undefined8 param_2,ushort param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined8 unaff_RBX;
  short unaff_R14W;
  short *unaff_R15;
  undefined8 uStackX_10;
  
  *unaff_R15 = (-0x101 - (unaff_R14W - ~(~param_3 | 0x100))) + *unaff_R15;
  *(undefined8 *)(param_6 + -8) = param_2;
  *(undefined8 *)(param_6 + -0x10) = unaff_RBX;
  *(undefined8 *)(param_6 + -0x18) = unaff_RBX;
  *(undefined8 *)(param_6 + -0x20) = uStackX_10;
  *(undefined8 *)(param_6 + -0x10) = *(undefined8 *)(param_6 + -8);
  *(undefined8 *)(param_6 + -0x20) = 0x166cd0edb;
  *(undefined8 *)(param_6 + -0x28) = 0x166cd0edb;
  *(undefined **)(param_6 + -0x20) = &DAT_14dd6ac71;
  return;
}



// FUNCTION 14dd6ad15 FUN_14dd6ad15 body=191 status=ok
// SIG undefined FUN_14dd6ad15(void)

void FUN_14dd6ad15(void)

{
  undefined8 in_R9;
  undefined8 in_R10;
  undefined8 unaff_R12;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_R12;
  *(undefined8 *)(local_res10 + -0x10) = in_R9;
  *(undefined8 *)(local_res10 + -0x18) = in_R9;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined1 **)(local_res10 + -8) = &LAB_164b45d86;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x18) = *(undefined8 *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x20) = in_R10;
  *(undefined8 *)(local_res10 + -0x28) = in_R10;
  *(undefined **)(local_res10 + -0x20) = &DAT_14dd6add6;
  FUN_164b45d42();
  return;
}



// FUNCTION 14dd6af24 FUN_14dd6af24 body=142 status=ok
// SIG undefined FUN_14dd6af24(void)

void FUN_14dd6af24(void)

{
  FUN_1564cfdb5();
  return;
}



// FUNCTION 14dd6b183 FUN_14dd6b183 body=175 status=ok
// SIG undefined FUN_14dd6b183(void)

void FUN_14dd6b183(void)

{
  FUN_1666568f2();
  return;
}



// FUNCTION 14dd6b236 FUN_14dd6b236 body=38 status=ok
// SIG undefined FUN_14dd6b236(void)

void FUN_14dd6b236(void)

{
  return;
}



// FUNCTION 14dd6b2e4 FUN_14dd6b2e4 body=136 status=ok
// SIG undefined FUN_14dd6b2e4(void)

/* WARNING: Removing unreachable block (ram,0x00014dd6b365) */
/* WARNING: Removing unreachable block (ram,0x00014dd6b36b) */
/* WARNING: Removing unreachable block (ram,0x00014dd6b370) */
/* WARNING: Removing unreachable block (ram,0x00014dd6b3f9) */
/* WARNING: Removing unreachable block (ram,0x0001613079e9) */
/* WARNING: Removing unreachable block (ram,0x00014dd6b3ff) */
/* WARNING: Removing unreachable block (ram,0x00014dd6b473) */
/* WARNING: Removing unreachable block (ram,0x00014dd6b484) */
/* WARNING: Removing unreachable block (ram,0x00014dd6b511) */
/* WARNING: Removing unreachable block (ram,0x00014dd6b517) */
/* WARNING: Removing unreachable block (ram,0x0001572b4c62) */
/* WARNING: Removing unreachable block (ram,0x00014dd6b47f) */
/* WARNING: Removing unreachable block (ram,0x000165e589a7) */

void FUN_14dd6b2e4(void)

{
  FUN_162231adf();
  return;
}



// FUNCTION 14dd6b370 FUN_14dd6b370 body=274 status=ok
// SIG undefined FUN_14dd6b370(void)

/* WARNING: Removing unreachable block (ram,0x00014dd6b517) */
/* WARNING: Removing unreachable block (ram,0x00014dd6b3ff) */
/* WARNING: Removing unreachable block (ram,0x00014dd6b473) */
/* WARNING: Removing unreachable block (ram,0x00014dd6b484) */
/* WARNING: Removing unreachable block (ram,0x00014dd6b511) */
/* WARNING: Removing unreachable block (ram,0x0001572b4c62) */
/* WARNING: Removing unreachable block (ram,0x00014dd6b47f) */
/* WARNING: Removing unreachable block (ram,0x000165e589a7) */

void FUN_14dd6b370(undefined8 param_1)

{
  FUN_1648bfc09(param_1,FUN_1648bfc09);
  return;
}



// FUNCTION 14dd6b484 FUN_14dd6b484 body=259 status=ok
// SIG undefined FUN_14dd6b484(void)

/* WARNING: Removing unreachable block (ram,0x00014dd6b517) */

void FUN_14dd6b484(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ushort uVar2;
  undefined8 in_R11;
  undefined8 unaff_R14;
  ulonglong uVar3;
  ulonglong local_res8;
  longlong local_res10;
  
  uVar2 = (~(ushort)local_res8 & 0x100 | (ushort)local_res8) - 0x100;
  *(undefined8 *)(local_res10 + -8) = in_R11;
  *(undefined8 *)(local_res10 + -0x10) = in_R11;
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((local_res8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((local_res8 & 0x40000) != 0) * 0x40000;
  uVar3 = *(ulonglong *)(local_res10 + -0x18);
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res10 + -0x20) = param_1;
  uVar1 = *(undefined8 *)(local_res10 + -0x20);
  uVar3 = *(ulonglong *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x18) = unaff_R14;
  *(undefined8 *)(local_res10 + -0x20) = param_3;
  *(ulonglong *)(local_res10 + -0x28) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res10 + -8) = 0x19487d0;
  FUN_14d85d504(uVar1,param_2,*(undefined8 *)(local_res10 + -0x20));
  return;
}



// FUNCTION 14dd6b517 FUN_14dd6b517 body=264 status=ok
// SIG undefined FUN_14dd6b517(void)

void FUN_14dd6b517(undefined8 param_1)

{
  undefined8 local_res8;
  
  FUN_1658959c9(param_1,0xffffffffce67ef5d,local_res8);
  return;
}



// FUNCTION 14dd6b6d0 FUN_14dd6b6d0 body=125 status=ok
// SIG undefined FUN_14dd6b6d0(void)

undefined8 FUN_14dd6b6d0(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dd6b74e FUN_14dd6b74e body=370 status=ok
// SIG undefined FUN_14dd6b74e(void)

void FUN_14dd6b74e(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong in_RAX;
  undefined1 local_res18;
  
  *(byte *)(param_3 + in_RAX) = ~(~(local_res18 & 0x65) & (local_res18 | 0x65)) ^ 0x30;
  return;
}



// FUNCTION 14dd6babe thunk_FUN_14dd6bac4 body=5 status=ok
// SIG undefined thunk_FUN_14dd6bac4(void)

void thunk_FUN_14dd6bac4(ulonglong param_1)

{
  longlong unaff_RDI;
  
  (*(code *)0x16140af04)
            (param_1,*(ulonglong *)(unaff_RDI + -0x68) + param_1 +
                     (*(ulonglong *)(unaff_RDI + -0x68) & param_1) * -2);
  return;
}



// FUNCTION 14dd6bac4 FUN_14dd6bac4 body=131 status=ok
// SIG undefined FUN_14dd6bac4(void)

void FUN_14dd6bac4(ulonglong param_1)

{
  longlong unaff_RDI;
  
  (*(code *)0x16140af04)
            (param_1,*(ulonglong *)(unaff_RDI + -0x68) + param_1 +
                     (*(ulonglong *)(unaff_RDI + -0x68) & param_1) * -2);
  return;
}



// FUNCTION 14dd6be11 FUN_14dd6be11 body=128 status=ok
// SIG undefined FUN_14dd6be11(void)

void FUN_14dd6be11(undefined8 param_1)

{
  undefined8 unaff_retaddr;
  
  FUN_14d8ec4c6(param_1,unaff_retaddr);
  return;
}



// FUNCTION 14dd6be94 FUN_14dd6be94 body=71 status=ok
// SIG undefined FUN_14dd6be94(void)

void FUN_14dd6be94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  
  thunk_FUN_15b642ca5(uStackX_8,param_2,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14dd6bf23 thunk_FUN_1624e6a13 body=29 status=ok
// SIG undefined thunk_FUN_1624e6a13(void)

void thunk_FUN_1624e6a13(void)

{
  FUN_1624e6a13();
  return;
}



// FUNCTION 14dd6bf40 FUN_14dd6bf40 body=162 status=ok
// SIG undefined FUN_14dd6bf40(void)

void FUN_14dd6bf40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)&LAB_160bf7a08)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dd6bfe3 FUN_14dd6bfe3 body=138 status=ok
// SIG undefined FUN_14dd6bfe3(void)

void FUN_14dd6bfe3(void)

{
  FUN_15b1ae863();
  return;
}



// FUNCTION 14dd6c06d FUN_14dd6c06d body=83 status=ok
// SIG undefined FUN_14dd6c06d(void)

void FUN_14dd6c06d(void)

{
  return;
}



// FUNCTION 14dd6c18b FUN_14dd6c18b body=475 status=ok
// SIG undefined FUN_14dd6c18b(void)

/* WARNING: Removing unreachable block (ram,0x0001648bea33) */
/* WARNING: Removing unreachable block (ram,0x0001648beae3) */
/* WARNING: Removing unreachable block (ram,0x0001648beae8) */
/* WARNING: Removing unreachable block (ram,0x0001648beaee) */
/* WARNING: Removing unreachable block (ram,0x00015ba56325) */

void FUN_14dd6c18b(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_156a3befd(param_1,~((0xffffffffffffffff - param_1 | *(ulonglong *)(unaff_RDI + -0x68)) &
                         (~*(ulonglong *)(unaff_RDI + -0x68) | param_1)));
  FUN_166ba6d0c(param_1,DAT_156a3be95 ^ param_1);
  return;
}



// FUNCTION 14dd6c22a FUN_14dd6c22a body=364 status=ok
// SIG undefined FUN_14dd6c22a(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dd6c22a(undefined8 param_1,undefined8 param_2)

{
  short unaff_BP;
  undefined8 uVar1;
  
  uVar1 = 0;
  if (unaff_BP < 0) {
    uVar1 = 0xffffffffffffffff;
  }
  uVar1 = FUN_16515cdfa(param_1,param_2,0xffffffffffffffa0,
                        (int)CONCAT62((int6)((ulonglong)uVar1 >> 0x10),unaff_BP));
  return uVar1;
}



// FUNCTION 14dd6c43d FUN_14dd6c43d body=136 status=ok
// SIG undefined FUN_14dd6c43d(void)

/* WARNING: Removing unreachable block (ram,0x00014dd6c735) */
/* WARNING: Removing unreachable block (ram,0x00014dd6c575) */
/* WARNING: Removing unreachable block (ram,0x00014dd6c72f) */
/* WARNING: Removing unreachable block (ram,0x000166868bfa) */
/* WARNING: Removing unreachable block (ram,0x00014dd6c56a) */
/* WARNING: Removing unreachable block (ram,0x00016597b1c5) */

void FUN_14dd6c43d(int param_1)

{
  undefined8 uVar1;
  uint uVar2;
  longlong unaff_RDI;
  longlong unaff_R15;
  
  FUN_14dd02dbd();
  uVar1 = *(undefined8 *)(unaff_RDI + -0x80);
  FUN_14dd151cc(0xd1);
  uVar2 = *(uint *)(unaff_R15 + 4);
  *(uint *)(unaff_R15 + 4) = ~*(uint *)(unaff_R15 + 4);
  *(uint *)(unaff_R15 + 4) = (~(uVar2 & 0xa7014b69) + 0xa7014b69) - *(int *)(unaff_R15 + 4);
  *(uint *)(unaff_R15 + 4) =
       ~(((int)uVar1 + param_1 & 0xa7014b69U ^ 0xffffffff) & *(uint *)(unaff_R15 + 4));
  FUN_165ab62dd();
  return;
}



// FUNCTION 14dd6c4c7 FUN_14dd6c4c7 body=174 status=ok
// SIG undefined FUN_14dd6c4c7(void)

/* WARNING: Removing unreachable block (ram,0x00014dd6c735) */
/* WARNING: Removing unreachable block (ram,0x00014dd6c575) */
/* WARNING: Removing unreachable block (ram,0x00014dd6c72f) */
/* WARNING: Removing unreachable block (ram,0x000166868bfa) */
/* WARNING: Removing unreachable block (ram,0x00014dd6c56a) */
/* WARNING: Removing unreachable block (ram,0x00016597b1c5) */

void FUN_14dd6c4c7(int param_1)

{
  undefined8 uVar1;
  uint uVar2;
  longlong unaff_RDI;
  longlong unaff_R15;
  
  uVar1 = *(undefined8 *)(unaff_RDI + -0x80);
  FUN_14dd151cc(0xd1);
  uVar2 = *(uint *)(unaff_R15 + 4);
  *(uint *)(unaff_R15 + 4) = ~*(uint *)(unaff_R15 + 4);
  *(uint *)(unaff_R15 + 4) = (~(uVar2 & 0xa7014b69) + 0xa7014b69) - *(int *)(unaff_R15 + 4);
  *(uint *)(unaff_R15 + 4) =
       ~(((int)uVar1 + param_1 & 0xa7014b69U ^ 0xffffffff) & *(uint *)(unaff_R15 + 4));
  FUN_165ab62dd();
  return;
}



// FUNCTION 14dd6c575 FUN_14dd6c575 body=641 status=ok
// SIG undefined FUN_14dd6c575(void)

/* WARNING: Removing unreachable block (ram,0x00014dd6c735) */

void FUN_14dd6c575(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar3;
  ulonglong unaff_R15;
  
  FUN_162f2ca96(param_1,param_2,param_3);
  uVar1 = *(ulonglong *)(unaff_RSI + -0x90);
  uVar3 = ~((~unaff_RBP | uVar1) + unaff_RBP + 1) & (uVar1 | unaff_RBP);
  uVar2 = *(ulonglong *)(unaff_RSI + -0x50);
  FUN_1610ed426(uVar1,uVar1 | unaff_RBP,~unaff_RBP | uVar2);
  FUN_1616105f8(*(ulonglong *)(uVar3 - 0x78) ^ unaff_R15,*(ulonglong *)(uVar3 - 0x28) ^ unaff_R15,
                *(ulonglong *)(uVar3 - 0x88) ^ unaff_R15,
                *(ulonglong *)(uVar3 + (uVar2 ^ ~unaff_RDI + 0xa85c0d2)) ^ unaff_R15);
  return;
}



// FUNCTION 14dd6c7f8 FUN_14dd6c7f8 body=135 status=ok
// SIG undefined FUN_14dd6c7f8(void)

/* WARNING: Removing unreachable block (ram,0x00014dd6c881) */

void FUN_14dd6c7f8(void)

{
  if (-1 < (longlong)&stack0xfffffffffffffff8) {
    FUN_156f6a00a();
    return;
  }
  FUN_156f6a00a();
  return;
}



// FUNCTION 14dd6c881 FUN_14dd6c881 body=297 status=ok
// SIG undefined FUN_14dd6c881(void)

void FUN_14dd6c881(void)

{
  (*(code *)0x160d66f97)();
  return;
}



// FUNCTION 14dd6c940 FUN_14dd6c940 body=75 status=ok
// SIG undefined FUN_14dd6c940(void)

void FUN_14dd6c940(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14dd6ca75 FUN_14dd6ca75 body=38 status=ok
// SIG undefined FUN_14dd6ca75(void)

/* WARNING: Removing unreachable block (ram,0x00014dd6cb14) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd6ca75(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong in_stack_00000018;
  
  uVar1 = FUN_165a8492e(param_1,in_stack_00000018,FUN_165a8492e,param_4);
  (*(code *)0x16694d873)(param_1,in_stack_00000018 + uVar1 + (in_stack_00000018 & uVar1) * -2);
  return;
}



// FUNCTION 14dd6cbae FUN_14dd6cbae body=99 status=ok
// SIG undefined FUN_14dd6cbae(void)

void FUN_14dd6cbae(void)

{
  return;
}



// FUNCTION 14dd6ce3b FUN_14dd6ce3b body=155 status=ok
// SIG undefined FUN_14dd6ce3b(void)

void FUN_14dd6ce3b(void)

{
  FUN_165699451(FUN_165699451);
  return;
}


