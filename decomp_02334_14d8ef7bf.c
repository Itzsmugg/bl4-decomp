// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14d8ef7bf FUN_14d8ef7bf body=121 status=ok
// SIG undefined FUN_14d8ef7bf(void)

/* WARNING: Removing unreachable block (ram,0x000156962dbd) */

ulonglong FUN_14d8ef7bf(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  longlong lVar6;
  ulonglong *unaff_RBX;
  ulonglong uVar7;
  undefined8 unaff_RBP;
  longlong unaff_RDI;
  longlong lVar8;
  short sVar9;
  ulonglong uVar10;
  code *pcVar11;
  undefined8 in_R11;
  ulonglong uVar12;
  short *unaff_R12;
  ulonglong unaff_R13;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 unaff_retaddr;
  ulonglong local_res8;
  ulonglong local_res10;
  ulonglong local_res18;
  undefined8 uStackX_20;
  
  uVar4 = *(ulonglong *)(unaff_RDI + -0xa0);
  uVar10 = ~((~((param_1 ^ 0xffffffffffffffff) & uVar4) + uVar4) - ~(param_1 ^ 0xffffffffffffffff) &
            (~uVar4 | param_1));
  uVar4 = local_res8 ^ param_1;
  pcVar11 = FUN_1567a7ad8;
  FUN_1567a7ad8(uVar4,unaff_retaddr,param_3);
  *(uint *)(unaff_RBX + -1) = 0x8eb7ac8;
  *(uint *)((longlong)unaff_RBX + -4) = 0;
  uVar13 = unaff_RBX[-1];
  uVar13 = ~(uVar13 & 0xffffffffe6540b39) & (uVar13 | 0xffffffffe6540b39);
  unaff_RBX[-1] = in_R11;
  uVar7 = ~uVar13 | 0xffffffffeebf71f1;
  unaff_RBX[-1] = unaff_RBX[-1];
  uVar12 = ~uVar7 | ~(uVar13 | 0x11408e0e) ^ 0xffffffffffffffff;
  uVar13 = unaff_RBX[-1];
  uVar14 = ~(uVar12 + uVar7 + 1);
  if ((!CARRY8(uVar12,uVar7)) || (CARRY8(uVar12,uVar7))) {
    unaff_RBX[-1] = local_res18 ^ param_1;
    _fxrstor(unaff_RBX + 1);
    *unaff_RBX = unaff_R13;
    cVar5 = (char)uVar4;
    *unaff_RBX = uVar13;
    *unaff_RBX = (ulonglong)pcVar11;
    unaff_RBX[-1] =
         (ulonglong)((uVar10 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar10 & 0x400) != 0) * 0x400 |
         (ulonglong)((uVar10 & 0x200) != 0) * 0x200 | (ulonglong)((uVar10 & 0x100) != 0) * 0x100 |
         (ulonglong)(cVar5 < '\0') * 0x80 | (ulonglong)(cVar5 == '\0') * 0x40 |
         (ulonglong)((uVar10 & 0x10) != 0) * 0x10 | (ulonglong)((POPCOUNT(cVar5) & 1U) == 0) * 4 |
         (ulonglong)((uVar10 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar10 & 0x40000) != 0) * 0x40000;
    uVar4 = unaff_RBX[-1];
    unaff_RBX[-1] =
         (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)((uVar4 & 1) != 0) |
         (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
    uVar4 = (*(code *)0x16529148a)();
    return uVar4;
  }
  uVar7 = *unaff_RBX;
  unaff_RBX[1] = local_res10 ^ param_1;
  uVar4 = unaff_RBX[1];
  unaff_RBX[1] = uVar13;
  unaff_RBX[1] = unaff_RBX[1];
  unaff_RBX[1] = uStackX_20;
  lVar6 = 0x7fd94a1b;
  *unaff_RBX = 0x14d8ef951;
  FUN_162edf22e(uVar7);
  sVar9 = (short)pcVar11;
  uVar13 = unaff_RBX[1];
  unaff_RBX[1] = (ulonglong)((uVar13 & 0x4000) != 0) * 0x4000 |
                 (ulonglong)((uVar13 & 0x800) != 0) * 0x800 |
                 (ulonglong)((uVar13 & 0x400) != 0) * 0x400 |
                 (ulonglong)((uVar13 & 0x200) != 0) * 0x200 |
                 (ulonglong)((uVar13 & 0x100) != 0) * 0x100 |
                 (ulonglong)((uVar13 & 0x80) != 0) * 0x80 | (ulonglong)((uVar13 & 0x40) != 0) * 0x40
                 | (ulonglong)((uVar13 & 0x10) != 0) * 0x10 | (ulonglong)((uVar13 & 4) != 0) * 4 |
                 (ulonglong)((uVar13 & 1) != 0) | (ulonglong)((uVar13 & 0x200000) != 0) * 0x200000 |
                 (ulonglong)((uVar13 & 0x40000) != 0) * 0x40000;
  lVar3 = -~DAT_14c84635c - (lVar6 + 2);
  uVar13 = unaff_RBX[1];
  unaff_RBX[1] = lVar3;
  *(undefined4 *)(unaff_RBX + 1) = 0x38ef7cb;
  *(uint *)((longlong)unaff_RBX + 0xc) = 0;
  lVar6 = unaff_RBX[1];
  unaff_RBX[1] = (ulonglong)((uVar13 & 0x4000) != 0) * 0x4000 |
                 (ulonglong)((uVar13 & 0x800) != 0) * 0x800 |
                 (ulonglong)((uVar13 & 0x400) != 0) * 0x400 |
                 (ulonglong)((uVar13 & 0x200) != 0) * 0x200 |
                 (ulonglong)((uVar13 & 0x100) != 0) * 0x100 |
                 (ulonglong)((uVar13 & 0x80) != 0) * 0x80 | (ulonglong)((uVar13 & 0x40) != 0) * 0x40
                 | (ulonglong)((uVar13 & 0x10) != 0) * 0x10 | (ulonglong)((uVar13 & 4) != 0) * 4 |
                 (ulonglong)((uVar13 & 1) != 0) | (ulonglong)((uVar13 & 0x200000) != 0) * 0x200000 |
                 (ulonglong)((uVar13 & 0x40000) != 0) * 0x40000;
  *unaff_RBX = uVar4;
  *(uint *)(unaff_RBX + -1) = 0x7303aab0;
  *(uint *)((longlong)unaff_RBX + -4) = 0;
  uVar4 = *unaff_RBX;
  uVar13 = lVar6 - (unaff_RBX[-1] ^ 0x708d5e43);
  uVar7 = unaff_RBX[1];
  unaff_RBX[1] = uVar10;
  *unaff_RBX = (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar7 & 0x800) != 0) * 0x800 | (ulonglong)((uVar7 & 0x400) != 0) * 0x400
               | (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar7 & 0x100) != 0) * 0x100 | (ulonglong)((uVar7 & 0x80) != 0) * 0x80 |
               (ulonglong)((uVar7 & 0x40) != 0) * 0x40 | (ulonglong)((uVar7 & 0x10) != 0) * 0x10 |
               (ulonglong)((uVar7 & 4) != 0) * 4 | (ulonglong)((uVar7 & 1) != 0) |
               (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000;
  uVar7 = *unaff_RBX;
  *unaff_RBX = (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar7 & 0x800) != 0) * 0x800 | (ulonglong)((uVar7 & 0x400) != 0) * 0x400
               | (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar7 & 0x100) != 0) * 0x100 | (ulonglong)((uVar7 & 0x80) != 0) * 0x80 |
               (ulonglong)((uVar7 & 0x40) != 0) * 0x40 | (ulonglong)((uVar7 & 0x10) != 0) * 0x10 |
               (ulonglong)((uVar7 & 4) != 0) * 4 | (ulonglong)((uVar7 & 1) != 0) |
               (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000;
  uVar7 = *unaff_RBX;
  *unaff_RBX = (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar7 & 0x800) != 0) * 0x800 | (ulonglong)((uVar7 & 0x400) != 0) * 0x400
               | (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar7 & 0x100) != 0) * 0x100 | (ulonglong)((uVar7 & 0x80) != 0) * 0x80 |
               (ulonglong)((uVar7 & 0x40) != 0) * 0x40 | (ulonglong)((uVar7 & 0x10) != 0) * 0x10 |
               (ulonglong)((uVar7 & 4) != 0) * 4 | (ulonglong)((uVar7 & 1) != 0) |
               (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000;
  if (((uint)*unaff_RBX >> 6 & 1) == 0) {
    uVar4 = FUN_156962c95();
    return uVar4;
  }
  uVar7 = *unaff_RBX;
  if ((uVar7 & 0x40) != 0) {
    *unaff_RBX = (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 |
                 (ulonglong)((uVar7 & 0x800) != 0) * 0x800 |
                 (ulonglong)((uVar7 & 0x400) != 0) * 0x400 |
                 (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
                 (ulonglong)((uVar7 & 0x100) != 0) * 0x100 | (ulonglong)((uVar7 & 0x80) != 0) * 0x80
                 | 0x40 | (ulonglong)((uVar7 & 0x10) != 0) * 0x10 |
                 (ulonglong)((uVar7 & 4) != 0) * 4 | (ulonglong)((uVar7 & 1) != 0) |
                 (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000 |
                 (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000;
    lVar8 = (longlong)unaff_RBX + uVar13 + 0x10;
    uVar13 = *unaff_RBX;
    uVar4 = unaff_RBX[1];
    unaff_RBX[1] = lVar3;
    *unaff_RBX = uVar4;
    unaff_RBX[-1] =
         (ulonglong)((uVar13 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar13 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar13 & 0x400) != 0) * 0x400 | (ulonglong)((uVar13 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar13 & 0x100) != 0) * 0x100 | (ulonglong)((uVar13 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar13 & 0x40) != 0) * 0x40 | (ulonglong)((uVar13 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar13 & 4) != 0) * 4 | (ulonglong)((uVar13 & 1) != 0) |
         (ulonglong)((uVar13 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar13 & 0x40000) != 0) * 0x40000;
    *(uint *)(unaff_RBX + -2) = 0xc910866;
    *(uint *)((longlong)unaff_RBX + -0xc) = 0x48ba85c1;
    *(uint *)((longlong)unaff_RBX + -0xc) = *(uint *)((longlong)unaff_RBX + -0xc) ^ 0x48ba85c1;
    uVar4 = unaff_RBX[-1];
    unaff_RBX[-1] =
         (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)((uVar4 & 1) != 0) |
         (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
    pcVar11 = FUN_156c24d72;
    unaff_RBX[-2] = 0x156962d1c;
    FUN_156c24d72();
    uVar4 = *unaff_RBX;
    *unaff_R12 = sVar9 + -0x100;
    lVar6 = unaff_RBX[4];
    *(code **)(lVar6 + -8) = pcVar11;
    *(undefined8 *)(lVar6 + -0x10) = unaff_RBP;
    *(undefined8 *)(lVar6 + -0x18) = unaff_RBP;
    *(undefined8 *)(lVar6 + -0x10) = *(undefined8 *)(lVar6 + -8);
    uVar2 = *(undefined8 *)(lVar6 + -0x18);
    *(undefined1 **)(lVar6 + -8) = &LAB_166c43c99;
    *(undefined8 *)(lVar6 + -0x18) = *(undefined8 *)(lVar6 + 0x30);
    *(undefined4 *)(lVar6 + -0x14) = 0;
    *(undefined4 *)(lVar6 + -0x18) = *(undefined4 *)(lVar6 + -0x18);
    if (*(int *)(lVar6 + -0x18) < 0) {
      *(ulonglong *)(lVar6 + -0x20) = uVar4;
      *(undefined4 *)(lVar6 + -0x20) = 0x56d472f;
      *(undefined4 *)(lVar6 + -0x1c) = 0x4fe4d4b;
      *(uint *)(lVar6 + -0x1c) = *(uint *)(lVar6 + -0x1c) ^ 0x4fe4d4b;
      uVar13 = *(ulonglong *)(lVar6 + -0x20);
      *(undefined8 *)(lVar6 + -0x20) = uVar2;
      *(ulonglong *)(lVar6 + -0x28) = uVar4;
      uVar13 = ~((uVar13 | 0xfffffffffa92b8d4) & (~uVar13 | 0x56d472b));
      uVar4 = *(ulonglong *)(lVar6 + -0x28);
      *(undefined4 *)(lVar6 + -0x18 + uVar13) = 0xb0570f0b;
      puVar1 = (uint *)(lVar6 + -0x18 + uVar13);
      *puVar1 = *puVar1 ^ 0x4fa8f0f4;
    }
    *(longlong *)(lVar6 + -0x10) = lVar8;
    *(longlong *)(lVar6 + -0x18) = lVar8;
    *(undefined **)(lVar6 + -0x10) = &DAT_166c43c76;
    return uVar4;
  }
  uVar7 = *(ulonglong *)((longlong)unaff_RBX + (uVar13 - 0xda0));
  uVar10 = uVar7 + uVar13 + (uVar7 & uVar13) * -2;
  *unaff_RBX = uVar10;
  uVar7 = *unaff_RBX;
  unaff_RBX[-1] = uVar10;
  *(undefined4 *)(unaff_RBX + -1) = 0xe06827fa;
  *(uint *)((longlong)unaff_RBX + -4) = 0xffffffff;
  *unaff_RBX = *(ulonglong *)((longlong)unaff_RBX + unaff_RBX[-1] + uVar13 + 0x1f97ca56);
  unaff_RBX[-1] = uVar14;
  unaff_RBX[-2] = uVar14;
  unaff_RBX[-1] = (ulonglong)&LAB_14d8efaa7;
  uVar4 = FUN_162eecf01(uVar13,FUN_162eecf01,uVar7,uVar4 + param_3 * -2);
  return uVar4;
}



// FUNCTION 14d8ef839 FUN_14d8ef839 body=1038 status=ok
// SIG undefined FUN_14d8ef839(void)

/* WARNING: Removing unreachable block (ram,0x000156962dbd) */

ulonglong FUN_14d8ef839(char param_1,undefined8 param_2,longlong param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  code *pcVar5;
  longlong lVar6;
  ulonglong *unaff_RBX;
  ulonglong uVar7;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  longlong lVar8;
  short sVar9;
  ulonglong in_R10;
  undefined8 in_R11;
  ulonglong uVar10;
  short *unaff_R12;
  ulonglong unaff_R13;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong local_res8;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  
  *(uint *)(unaff_RBX + -1) = 0x8eb7ac8;
  *(uint *)((longlong)unaff_RBX + -4) = 0;
  uVar11 = unaff_RBX[-1];
  uVar11 = ~(uVar11 & 0xffffffffe6540b39) & (uVar11 | 0xffffffffe6540b39);
  unaff_RBX[-1] = in_R11;
  uVar7 = ~uVar11 | 0xffffffffeebf71f1;
  unaff_RBX[-1] = unaff_RBX[-1];
  uVar10 = ~uVar7 | ~(uVar11 | 0x11408e0e) ^ 0xffffffffffffffff;
  uVar11 = unaff_RBX[-1];
  uVar12 = ~(uVar10 + uVar7 + 1);
  if ((!CARRY8(uVar10,uVar7)) || (CARRY8(uVar10,uVar7))) {
    unaff_RBX[-1] = uStackX_18;
    _fxrstor(unaff_RBX + 1);
    *unaff_RBX = unaff_R13;
    *unaff_RBX = uVar11;
    *unaff_RBX = in_R10;
    unaff_RBX[-1] =
         (ulonglong)((local_res8 & 0x4000) != 0) * 0x4000 |
         (ulonglong)((local_res8 & 0x400) != 0) * 0x400 |
         (ulonglong)((local_res8 & 0x200) != 0) * 0x200 |
         (ulonglong)((local_res8 & 0x100) != 0) * 0x100 | (ulonglong)(param_1 < '\0') * 0x80 |
         (ulonglong)(param_1 == '\0') * 0x40 | (ulonglong)((local_res8 & 0x10) != 0) * 0x10 |
         (ulonglong)((POPCOUNT(param_1) & 1U) == 0) * 4 |
         (ulonglong)((local_res8 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((local_res8 & 0x40000) != 0) * 0x40000;
    uVar11 = unaff_RBX[-1];
    unaff_RBX[-1] =
         (ulonglong)((uVar11 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar11 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar11 & 0x400) != 0) * 0x400 | (ulonglong)((uVar11 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar11 & 0x100) != 0) * 0x100 | (ulonglong)((uVar11 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar11 & 0x40) != 0) * 0x40 | (ulonglong)((uVar11 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar11 & 4) != 0) * 4 | (ulonglong)((uVar11 & 1) != 0) |
         (ulonglong)((uVar11 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar11 & 0x40000) != 0) * 0x40000;
    uVar11 = (*(code *)0x16529148a)();
    return uVar11;
  }
  uVar10 = *unaff_RBX;
  unaff_RBX[1] = uStackX_10;
  uVar7 = unaff_RBX[1];
  unaff_RBX[1] = uVar11;
  unaff_RBX[1] = unaff_RBX[1];
  unaff_RBX[1] = uStackX_20;
  lVar6 = 0x7fd94a1b;
  *unaff_RBX = 0x14d8ef951;
  FUN_162edf22e(uVar10);
  sVar9 = (short)in_R10;
  uVar11 = unaff_RBX[1];
  unaff_RBX[1] = (ulonglong)((uVar11 & 0x4000) != 0) * 0x4000 |
                 (ulonglong)((uVar11 & 0x800) != 0) * 0x800 |
                 (ulonglong)((uVar11 & 0x400) != 0) * 0x400 |
                 (ulonglong)((uVar11 & 0x200) != 0) * 0x200 |
                 (ulonglong)((uVar11 & 0x100) != 0) * 0x100 |
                 (ulonglong)((uVar11 & 0x80) != 0) * 0x80 | (ulonglong)((uVar11 & 0x40) != 0) * 0x40
                 | (ulonglong)((uVar11 & 0x10) != 0) * 0x10 | (ulonglong)((uVar11 & 4) != 0) * 4 |
                 (ulonglong)((uVar11 & 1) != 0) | (ulonglong)((uVar11 & 0x200000) != 0) * 0x200000 |
                 (ulonglong)((uVar11 & 0x40000) != 0) * 0x40000;
  lVar3 = -~DAT_14c84635c - (lVar6 + 2);
  uVar11 = unaff_RBX[1];
  unaff_RBX[1] = lVar3;
  *(undefined4 *)(unaff_RBX + 1) = 0x38ef7cb;
  *(uint *)((longlong)unaff_RBX + 0xc) = 0;
  lVar6 = unaff_RBX[1];
  unaff_RBX[1] = (ulonglong)((uVar11 & 0x4000) != 0) * 0x4000 |
                 (ulonglong)((uVar11 & 0x800) != 0) * 0x800 |
                 (ulonglong)((uVar11 & 0x400) != 0) * 0x400 |
                 (ulonglong)((uVar11 & 0x200) != 0) * 0x200 |
                 (ulonglong)((uVar11 & 0x100) != 0) * 0x100 |
                 (ulonglong)((uVar11 & 0x80) != 0) * 0x80 | (ulonglong)((uVar11 & 0x40) != 0) * 0x40
                 | (ulonglong)((uVar11 & 0x10) != 0) * 0x10 | (ulonglong)((uVar11 & 4) != 0) * 4 |
                 (ulonglong)((uVar11 & 1) != 0) | (ulonglong)((uVar11 & 0x200000) != 0) * 0x200000 |
                 (ulonglong)((uVar11 & 0x40000) != 0) * 0x40000;
  *unaff_RBX = uVar7;
  *(uint *)(unaff_RBX + -1) = 0x7303aab0;
  *(uint *)((longlong)unaff_RBX + -4) = 0;
  uVar11 = *unaff_RBX;
  uVar7 = lVar6 - (unaff_RBX[-1] ^ 0x708d5e43);
  uVar10 = unaff_RBX[1];
  unaff_RBX[1] = unaff_RDI;
  *unaff_RBX = (ulonglong)((uVar10 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar10 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar10 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar10 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar10 & 0x100) != 0) * 0x100 | (ulonglong)((uVar10 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar10 & 0x40) != 0) * 0x40 | (ulonglong)((uVar10 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar10 & 4) != 0) * 4 | (ulonglong)((uVar10 & 1) != 0) |
               (ulonglong)((uVar10 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar10 & 0x40000) != 0) * 0x40000;
  uVar10 = *unaff_RBX;
  *unaff_RBX = (ulonglong)((uVar10 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar10 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar10 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar10 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar10 & 0x100) != 0) * 0x100 | (ulonglong)((uVar10 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar10 & 0x40) != 0) * 0x40 | (ulonglong)((uVar10 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar10 & 4) != 0) * 4 | (ulonglong)((uVar10 & 1) != 0) |
               (ulonglong)((uVar10 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar10 & 0x40000) != 0) * 0x40000;
  uVar10 = *unaff_RBX;
  *unaff_RBX = (ulonglong)((uVar10 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar10 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar10 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar10 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar10 & 0x100) != 0) * 0x100 | (ulonglong)((uVar10 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar10 & 0x40) != 0) * 0x40 | (ulonglong)((uVar10 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar10 & 4) != 0) * 4 | (ulonglong)((uVar10 & 1) != 0) |
               (ulonglong)((uVar10 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar10 & 0x40000) != 0) * 0x40000;
  if (((uint)*unaff_RBX >> 6 & 1) == 0) {
    uVar11 = FUN_156962c95();
    return uVar11;
  }
  uVar10 = *unaff_RBX;
  if ((uVar10 & 0x40) != 0) {
    *unaff_RBX = (ulonglong)((uVar10 & 0x4000) != 0) * 0x4000 |
                 (ulonglong)((uVar10 & 0x800) != 0) * 0x800 |
                 (ulonglong)((uVar10 & 0x400) != 0) * 0x400 |
                 (ulonglong)((uVar10 & 0x200) != 0) * 0x200 |
                 (ulonglong)((uVar10 & 0x100) != 0) * 0x100 |
                 (ulonglong)((uVar10 & 0x80) != 0) * 0x80 | 0x40 |
                 (ulonglong)((uVar10 & 0x10) != 0) * 0x10 | (ulonglong)((uVar10 & 4) != 0) * 4 |
                 (ulonglong)((uVar10 & 1) != 0) | (ulonglong)((uVar10 & 0x200000) != 0) * 0x200000 |
                 (ulonglong)((uVar10 & 0x40000) != 0) * 0x40000;
    lVar8 = (longlong)unaff_RBX + uVar7 + 0x10;
    uVar7 = *unaff_RBX;
    uVar11 = unaff_RBX[1];
    unaff_RBX[1] = lVar3;
    *unaff_RBX = uVar11;
    unaff_RBX[-1] =
         (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar7 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar7 & 0x400) != 0) * 0x400 | (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar7 & 0x100) != 0) * 0x100 | (ulonglong)((uVar7 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar7 & 0x40) != 0) * 0x40 | (ulonglong)((uVar7 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar7 & 4) != 0) * 4 | (ulonglong)((uVar7 & 1) != 0) |
         (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000;
    *(uint *)(unaff_RBX + -2) = 0xc910866;
    *(uint *)((longlong)unaff_RBX + -0xc) = 0x48ba85c1;
    *(uint *)((longlong)unaff_RBX + -0xc) = *(uint *)((longlong)unaff_RBX + -0xc) ^ 0x48ba85c1;
    uVar11 = unaff_RBX[-1];
    unaff_RBX[-1] =
         (ulonglong)((uVar11 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar11 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar11 & 0x400) != 0) * 0x400 | (ulonglong)((uVar11 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar11 & 0x100) != 0) * 0x100 | (ulonglong)((uVar11 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar11 & 0x40) != 0) * 0x40 | (ulonglong)((uVar11 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar11 & 4) != 0) * 4 | (ulonglong)((uVar11 & 1) != 0) |
         (ulonglong)((uVar11 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar11 & 0x40000) != 0) * 0x40000;
    pcVar5 = FUN_156c24d72;
    unaff_RBX[-2] = 0x156962d1c;
    FUN_156c24d72();
    uVar11 = *unaff_RBX;
    *unaff_R12 = sVar9 + -0x100;
    lVar6 = unaff_RBX[4];
    *(code **)(lVar6 + -8) = pcVar5;
    *(undefined8 *)(lVar6 + -0x10) = unaff_RBP;
    *(undefined8 *)(lVar6 + -0x18) = unaff_RBP;
    *(undefined8 *)(lVar6 + -0x10) = *(undefined8 *)(lVar6 + -8);
    uVar2 = *(undefined8 *)(lVar6 + -0x18);
    *(undefined1 **)(lVar6 + -8) = &LAB_166c43c99;
    *(undefined8 *)(lVar6 + -0x18) = *(undefined8 *)(lVar6 + 0x30);
    *(undefined4 *)(lVar6 + -0x14) = 0;
    *(undefined4 *)(lVar6 + -0x18) = *(undefined4 *)(lVar6 + -0x18);
    if (*(int *)(lVar6 + -0x18) < 0) {
      *(ulonglong *)(lVar6 + -0x20) = uVar11;
      *(undefined4 *)(lVar6 + -0x20) = 0x56d472f;
      *(undefined4 *)(lVar6 + -0x1c) = 0x4fe4d4b;
      *(uint *)(lVar6 + -0x1c) = *(uint *)(lVar6 + -0x1c) ^ 0x4fe4d4b;
      uVar7 = *(ulonglong *)(lVar6 + -0x20);
      *(undefined8 *)(lVar6 + -0x20) = uVar2;
      *(ulonglong *)(lVar6 + -0x28) = uVar11;
      uVar7 = ~((uVar7 | 0xfffffffffa92b8d4) & (~uVar7 | 0x56d472b));
      uVar11 = *(ulonglong *)(lVar6 + -0x28);
      *(undefined4 *)(lVar6 + -0x18 + uVar7) = 0xb0570f0b;
      puVar1 = (uint *)(lVar6 + -0x18 + uVar7);
      *puVar1 = *puVar1 ^ 0x4fa8f0f4;
    }
    *(longlong *)(lVar6 + -0x10) = lVar8;
    *(longlong *)(lVar6 + -0x18) = lVar8;
    *(undefined **)(lVar6 + -0x10) = &DAT_166c43c76;
    return uVar11;
  }
  uVar10 = *(ulonglong *)((longlong)unaff_RBX + (uVar7 - 0xda0));
  uVar4 = uVar10 + uVar7 + (uVar10 & uVar7) * -2;
  *unaff_RBX = uVar4;
  uVar10 = *unaff_RBX;
  unaff_RBX[-1] = uVar4;
  *(undefined4 *)(unaff_RBX + -1) = 0xe06827fa;
  *(uint *)((longlong)unaff_RBX + -4) = 0xffffffff;
  *unaff_RBX = *(ulonglong *)((longlong)unaff_RBX + unaff_RBX[-1] + uVar7 + 0x1f97ca56);
  unaff_RBX[-1] = uVar12;
  unaff_RBX[-2] = uVar12;
  unaff_RBX[-1] = (ulonglong)&LAB_14d8efaa7;
  uVar11 = FUN_162eecf01(uVar7,FUN_162eecf01,uVar10,uVar11 + param_3 * -2);
  return uVar11;
}



// FUNCTION 14d8efc1c FUN_14d8efc1c body=140 status=ok
// SIG undefined FUN_14d8efc1c(void)

void FUN_14d8efc1c(undefined8 param_1)

{
  FUN_156a450ab(param_1,FUN_156a450ab,0xfffffffffffffff8,0);
  return;
}



// FUNCTION 14d8efd40 FUN_14d8efd40 body=148 status=ok
// SIG undefined FUN_14d8efd40(void)

void FUN_14d8efd40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000008;
  
  FUN_166187473(param_1,param_2,param_3,in_stack_00000008);
  return;
}



// FUNCTION 14d8efdd4 FUN_14d8efdd4 body=144 status=ok
// SIG undefined FUN_14d8efdd4(void)

void FUN_14d8efdd4(void)

{
  return;
}



// FUNCTION 14d8efef7 FUN_14d8efef7 body=228 status=ok
// SIG undefined FUN_14d8efef7(void)

void FUN_14d8efef7(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char param_5,undefined8 param_6,ulonglong param_7)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong in_RAX;
  ulonglong uVar3;
  undefined1 uVar4;
  longlong unaff_RDI;
  ulonglong *in_R11;
  ulonglong unaff_R15;
  
  uVar4 = (undefined1)param_1;
  *(ulonglong *)(unaff_RDI + 8) = ~*(ulonglong *)(unaff_RDI + 8);
  lVar1 = *(longlong *)(unaff_RDI + 8);
  *(ulonglong *)(unaff_RDI + 8) = *(ulonglong *)(unaff_RDI + 8) & param_1;
  *(ulonglong *)(unaff_RDI + 8) = (lVar1 + param_1) - *(longlong *)(unaff_RDI + 8);
  *(ulonglong *)(unaff_RDI + 8) = 0xffffffffffffffffU - in_RAX | ~*(ulonglong *)(unaff_RDI + 8);
  uVar3 = FUN_14e2355d6(uVar4,param_2,param_3);
  uVar2 = *in_R11;
  *in_R11 = -*in_R11;
  *in_R11 = *in_R11 - 1;
  *in_R11 = *in_R11 | uVar3;
  *in_R11 = ~((~(unaff_R15 ^ uVar3) | uVar2) & *in_R11);
                    /* WARNING: Read-only address (ram,0x00014d7c0bb1) is written */
  LOCK();
  if (param_5 != '\0') {
    uVar4 = uRam000000014d7c0bb1;
  }
  uRam000000014d7c0bb1 = uVar4;
  UNLOCK();
  *(undefined8 *)((param_7 ^ uVar3) - 8) = 0x198aaee;
  FUN_14d85d504();
  return;
}



// FUNCTION 14d8f0000 FUN_14d8f0000 body=529 status=ok
// SIG undefined FUN_14d8f0000(void)

void FUN_14d8f0000(ulonglong param_1,longlong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong in_R10;
  longlong lVar6;
  longlong in_R11;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 uStack_18;
  undefined8 uStack_10;
  ulonglong uStack_8;
  
  lVar6 = in_R10 - in_R11;
  puVar1 = (ulonglong *)(&stack0x00000000 + lVar6);
  puVar1[-1] = *(ulonglong *)(unaff_R13 + -0x80);
  puVar1[-1] = 0x14d8f00a1;
  FUN_160d2f6bf();
  *puVar1 = *(ulonglong *)(unaff_R13 + -0x38);
  uVar4 = *puVar1;
  *puVar1 = 0x1bc79911;
  puVar1[-1] = ~((~unaff_R15 | uVar4) + unaff_R15 + 1) & (uVar4 | unaff_R15);
  puVar1[-2] = 0x14d8f014f;
  uVar5 = FUN_15b3afd6a(0xffffffffffffffb8,0xffffffffffffffb8,~(param_1 & param_2 - lVar6));
  puVar1[-2] = uVar5;
  *(undefined4 *)(puVar1 + -2) = 0x6721c4c4;
  *(undefined4 *)((longlong)puVar1 + -0xc) = 0;
  *(uint *)((longlong)puVar1 + -0xc) = *(uint *)((longlong)puVar1 + -0xc) ^ 0xf24bdd2b;
  uVar2 = *(uint *)((longlong)puVar1 + -0xc);
  puVar1[-3] = uVar5;
  *(undefined4 *)(puVar1 + -3) = 0x77df8057;
  *(undefined4 *)((longlong)puVar1 + -0x14) = 0;
  iVar3 = *(int *)((longlong)puVar1 + -0xc);
  *(uint *)((longlong)puVar1 + -0xc) = *(uint *)((longlong)puVar1 + -0xc) & 0xed9a5eb6;
  *(int *)((longlong)puVar1 + -0xc) = (iVar3 + -0x1265a14a) - *(int *)((longlong)puVar1 + -0xc);
  *(uint *)((longlong)puVar1 + -0xc) =
       ~((uVar2 & (int)puVar1[-3] + 0x75bade5fU ^ 0xffffffff) & *(uint *)((longlong)puVar1 + -0xc));
  FUN_162360d80(0x82da);
  return;
}



// FUNCTION 14d8f0213 FUN_14d8f0213 body=148 status=ok
// SIG undefined FUN_14d8f0213(void)

void FUN_14d8f0213(void)

{
  FUN_165f54f10();
  return;
}



// FUNCTION 14d8f047c FUN_14d8f047c body=150 status=ok
// SIG undefined FUN_14d8f047c(void)

void FUN_14d8f047c(void)

{
  return;
}



// FUNCTION 14d8f0676 FUN_14d8f0676 body=84 status=ok
// SIG undefined FUN_14d8f0676(void)

void FUN_14d8f0676(void)

{
  FUN_15680a3b3();
  return;
}



// FUNCTION 14d8f0762 FUN_14d8f0762 body=80 status=ok
// SIG undefined FUN_14d8f0762(void)

void FUN_14d8f0762(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14d8f07fc FUN_14d8f07fc body=155 status=ok
// SIG undefined FUN_14d8f07fc(void)

void FUN_14d8f07fc(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)0x162ea842b)(0x162ea842b,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14d8f0897 FUN_14d8f0897 body=392 status=ok
// SIG undefined FUN_14d8f0897(void)

/* WARNING: Removing unreachable block (ram,0x00014d8f0915) */

void FUN_14d8f0897(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = ~*(ulonglong *)(unaff_RDI + -0x68);
  uVar1 = (param_1 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_RDI + -0x68)) &
          (uVar1 + param_1) - (uVar1 & param_1);
  if ((longlong)uVar1 < 0) {
    FUN_15657eda1();
    return;
  }
  (*(code *)0x1613a5b15)(param_1,~uVar1);
  return;
}



// FUNCTION 14d8f0a2f FUN_14d8f0a2f body=297 status=ok
// SIG undefined FUN_14d8f0a2f(void)

/* WARNING: Removing unreachable block (ram,0x000165b9a38c) */
/* WARNING: Removing unreachable block (ram,0x00014d8f0ad0) */
/* WARNING: Removing unreachable block (ram,0x00014d8f0ad6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d8f0a2f(undefined8 param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  uint *unaff_RSI;
  ulonglong in_R10;
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
  longlong unaff_retaddr;
  uint uStack_18;
  code *local_10;
  undefined8 local_8;
  
  *unaff_RSI = 0;
  *unaff_RSI = *unaff_RSI ^ param_3;
  bVar3 = (in_CF & 1) != 0;
  local_8 = CONCAT44((int)((ulonglong)unaff_retaddr >> 0x20),0x7f20061);
  uVar1 = (ulonglong)((in_ZF & 1) != 0);
  uVar2 = (ulonglong)bVar3;
  local_10 = (code *)((ulonglong)((in_NT & 1) != 0) * 0x4000 | (ulonglong)((in_OF & 1) != 0) * 0x800
                      | (ulonglong)((in_IF & 1) != 0) * 0x200 |
                      (ulonglong)((in_TF & 1) != 0) * 0x100 | (ulonglong)((in_SF & 1) != 0) * 0x80 |
                      uVar1 * 0x40 | (ulonglong)((in_AF & 1) != 0) * 0x10 |
                      (ulonglong)((in_PF & 1) != 0) * 4 | uVar2 |
                      (ulonglong)((in_ID & 1) != 0) * 0x200000 |
                     (ulonglong)((in_AC & 1) != 0) * 0x40000);
  uStack_18 = (uint)bVar3;
  if (-1 < (int)(uStack_18 << 0x1f)) {
    FUN_165b9a320();
    return;
  }
  if (uVar2 != 0 || uVar1 != 0) {
    local_8 = 0x7f20061;
    local_10 = FUN_165b9a3b4;
    FUN_14db62882();
    return;
  }
  *(undefined1 **)((longlong)&local_10 + unaff_retaddr + (in_R10 & 0x7f20061) * -2) = &LAB_15751c861
  ;
  return;
}



// FUNCTION 14d8f0b5c FUN_14d8f0b5c body=152 status=ok
// SIG undefined FUN_14d8f0b5c(void)

void FUN_14d8f0b5c(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_RBP;
  
  uVar1 = *(ulonglong *)(unaff_RBP + 8);
  *(ulonglong *)(unaff_RBP + 8) = *(ulonglong *)(unaff_RBP + 8) ^ 0xffffffffffffffff;
  *(ulonglong *)(unaff_RBP + 8) = ~*(ulonglong *)(unaff_RBP + 8);
  *(ulonglong *)(unaff_RBP + 8) = *(ulonglong *)(unaff_RBP + 8) & ~in_RAX;
  *(ulonglong *)(unaff_RBP + 8) = ~*(ulonglong *)(unaff_RBP + 8);
  *(ulonglong *)(unaff_RBP + 8) = ~(~in_RAX | uVar1) | ~*(ulonglong *)(unaff_RBP + 8);
  FUN_15b7475c5();
  return;
}



// FUNCTION 14d8f0bf4 FUN_14d8f0bf4 body=399 status=ok
// SIG undefined FUN_14d8f0bf4(void)

/* WARNING: Removing unreachable block (ram,0x00014d8f0c80) */

void FUN_14d8f0bf4(void)

{
  char in_R10B;
  
  if (in_R10B == '\0') {
    return;
  }
  FUN_165a975fa();
  return;
}



// FUNCTION 14d8f0f33 thunk_FUN_14d8f0f39 body=5 status=ok
// SIG undefined thunk_FUN_14d8f0f39(void)

void thunk_FUN_14d8f0f39(void)

{
  return;
}



// FUNCTION 14d8f0f39 FUN_14d8f0f39 body=40 status=ok
// SIG undefined FUN_14d8f0f39(void)

void FUN_14d8f0f39(void)

{
  return;
}



// FUNCTION 14d8f1045 FUN_14d8f1045 body=131 status=ok
// SIG undefined FUN_14d8f1045(void)

void FUN_14d8f1045(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                  undefined8 param_5,ushort param_6)

{
  ulonglong unaff_RDI;
  longlong unaff_R15;
  ulonglong local_res8;
  undefined8 in_stack_00000020;
  
  *(ulonglong *)(unaff_R15 + 0x10) = ~(~unaff_RDI | ~*(ulonglong *)(unaff_R15 + 0x10)) | local_res8;
  *(ulonglong *)(unaff_R15 + 0x10) = ~(param_4 & *(ulonglong *)(unaff_R15 + 0x10));
  param_5 = param_3;
  FUN_162ad2ec7(param_1,param_2,param_6 | 0xfeff,in_stack_00000020);
  return;
}



// FUNCTION 14d8f1157 FUN_14d8f1157 body=556 status=ok
// SIG undefined FUN_14d8f1157(void)

/* WARNING: Removing unreachable block (ram,0x00014d8f11ce) */

void FUN_14d8f1157(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x68);
  uVar2 = (~(uVar1 & param_1) + param_1) - ~uVar1;
  FUN_1629544bd(param_1,(uVar2 - (~(uVar1 & param_1) | uVar2)) + ~(uVar1 & param_1),param_3);
  return;
}



// FUNCTION 14d8f12fd FUN_14d8f12fd body=697 status=ok
// SIG undefined FUN_14d8f12fd(void)

/* WARNING: Removing unreachable block (ram,0x00014d8f136f) */

void FUN_14d8f12fd(undefined8 param_1)

{
  ulonglong unaff_RBP;
  undefined1 unaff_DIL;
  undefined7 unaff_00000039;
  undefined8 local_res8 [4];
  
  FUN_1665e84c8(param_1,*(undefined8 *)(CONCAT71(unaff_00000039,unaff_DIL) + -0x60),
                *(undefined8 *)
                 ((longlong)local_res8 +
                 ~(~(unaff_RBP & 0xffffffff97bf0347) & (unaff_RBP | 0xffffffff97bf0347))));
  return;
}



// FUNCTION 14d8f13a7 FUN_14d8f13a7 body=143 status=ok
// SIG undefined FUN_14d8f13a7(void)

void FUN_14d8f13a7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_16481546a(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d8f153a FUN_14d8f153a body=139 status=ok
// SIG undefined FUN_14d8f153a(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8f153a(void)

{
  FUN_15b0fdc40();
  return;
}



// FUNCTION 14d8f1ae3 FUN_14d8f1ae3 body=172 status=ok
// SIG undefined FUN_14d8f1ae3(void)

void FUN_14d8f1ae3(void)

{
  FUN_1612d0374(FUN_1612d0374);
  return;
}



// FUNCTION 14d8f1b91 FUN_14d8f1b91 body=49 status=ok
// SIG undefined FUN_14d8f1b91(void)

void FUN_14d8f1b91(void)

{
  ulonglong in_R11;
  undefined8 unaff_R13;
  undefined8 auStackX_18 [2];
  
  *(undefined8 *)
   ((longlong)auStackX_18 + ~(~(in_R11 & 0xffffffffd4b616b1) & (in_R11 | 0xffffffffd4b616b1))) =
       unaff_R13;
  return;
}



// FUNCTION 14d8f1bc2 FUN_14d8f1bc2 body=246 status=ok
// SIG undefined FUN_14d8f1bc2(void)

/* WARNING: Removing unreachable block (ram,0x00014d8f1bf4) */

void FUN_14d8f1bc2(void)

{
  thunk_FUN_15b1097be();
  return;
}



// FUNCTION 14d8f1d35 FUN_14d8f1d35 body=138 status=ok
// SIG undefined FUN_14d8f1d35(void)

void FUN_14d8f1d35(ulonglong param_1)

{
  undefined1 in_AL;
  undefined8 unaff_R12;
  undefined8 local_res18;
  ulonglong in_stack_00000028;
  
  in_stack_00000028 = in_stack_00000028 ^ param_1;
                    /* WARNING: Read-only address (ram,0x00014d7ab870) is written */
  LOCK();
  UNLOCK();
  uRam000000014d7ab870 = in_AL;
  *(undefined8 *)(in_stack_00000028 - 8) = unaff_R12;
  *(undefined8 *)(in_stack_00000028 - 0x10) = unaff_R12;
  *(undefined4 *)(in_stack_00000028 - 0x18) = 0x12c22ea6;
  *(undefined4 *)(in_stack_00000028 - 0x14) = 0;
  FUN_156800533(local_res18);
  return;
}



// FUNCTION 14d8f1dc0 FUN_14d8f1dc0 body=55 status=ok
// SIG undefined FUN_14d8f1dc0(void)

void FUN_14d8f1dc0(undefined8 param_1,longlong param_2)

{
  longlong *in_R11;
  longlong unaff_R12;
  longlong unaff_R15;
  undefined8 uStackX_8;
  undefined8 uStackX_10;
  
  *in_R11 = uStackX_8 + ((unaff_R15 - param_2) + unaff_R12) * -2;
  thunk_FUN_1627529c3(param_1,uStackX_10);
  return;
}



// FUNCTION 14d8f1df8 FUN_14d8f1df8 body=61 status=ok
// SIG undefined FUN_14d8f1df8(void)

void FUN_14d8f1df8(void)

{
  FUN_16483d26a(FUN_16483d26a);
  return;
}



// FUNCTION 14d8f1e37 thunk_FUN_14d8f1e3d body=5 status=ok
// SIG undefined thunk_FUN_14d8f1e3d(void)

void thunk_FUN_14d8f1e3d(void)

{
  (*(code *)0x15766cf6f)();
  return;
}



// FUNCTION 14d8f1e3d FUN_14d8f1e3d body=151 status=ok
// SIG undefined FUN_14d8f1e3d(void)

void FUN_14d8f1e3d(void)

{
  (*(code *)0x15766cf6f)();
  return;
}



// FUNCTION 14d8f1ed6 thunk_FUN_14d8f1edc body=5 status=ok
// SIG undefined thunk_FUN_14d8f1edc(void)

void thunk_FUN_14d8f1edc(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d8f1edc FUN_14d8f1edc body=51 status=ok
// SIG undefined FUN_14d8f1edc(void)

void FUN_14d8f1edc(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d8f201e FUN_14d8f201e body=128 status=ok
// SIG undefined FUN_14d8f201e(void)

void FUN_14d8f201e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte unaff_R12B;
  uint uVar1;
  
  uVar1 = (uint)((ulonglong)param_3 >> 0x20);
  *(byte *)CONCAT44((0x7fffffff - (uVar1 | 0x7fffffff)) + uVar1,(int)param_3) = unaff_R12B ^ 0xc4;
  thunk_FUN_164846ef8();
  return;
}



// FUNCTION 14d8f20ac FUN_14d8f20ac body=64 status=ok
// SIG undefined FUN_14d8f20ac(void)

void FUN_14d8f20ac(void)

{
  return;
}



// FUNCTION 14d8f2138 FUN_14d8f2138 body=34 status=ok
// SIG undefined FUN_14d8f2138(void)

void FUN_14d8f2138(void)

{
  return;
}



// FUNCTION 14d8f2248 FUN_14d8f2248 body=220 status=ok
// SIG undefined FUN_14d8f2248(void)

void FUN_14d8f2248(void)

{
  FUN_1656b4151();
  return;
}



// FUNCTION 14d8f2523 FUN_14d8f2523 body=141 status=ok
// SIG undefined FUN_14d8f2523(void)

void FUN_14d8f2523(void)

{
  FUN_1654e8338();
  return;
}



// FUNCTION 14d8f25b1 FUN_14d8f25b1 body=89 status=ok
// SIG undefined FUN_14d8f25b1(void)

void FUN_14d8f25b1(void)

{
  return;
}



// FUNCTION 14d8f2626 thunk_FUN_14d8f262c body=5 status=ok
// SIG undefined thunk_FUN_14d8f262c(void)

void thunk_FUN_14d8f262c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_retaddr;
  
  (*(code *)&LAB_16297cb5a)(~unaff_retaddr,0xffffffffffffff90,param_3,&LAB_16297cb5a);
  return;
}



// FUNCTION 14d8f262c FUN_14d8f262c body=134 status=ok
// SIG undefined FUN_14d8f262c(void)

void FUN_14d8f262c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_retaddr;
  
  (*(code *)&LAB_16297cb5a)(~unaff_retaddr,0xffffffffffffff90,param_3,&LAB_16297cb5a);
  return;
}



// FUNCTION 14d8f26c2 FUN_14d8f26c2 body=94 status=ok
// SIG undefined FUN_14d8f26c2(void)

void FUN_14d8f26c2(void)

{
  return;
}



// FUNCTION 14d8f27d0 FUN_14d8f27d0 body=481 status=ok
// SIG undefined FUN_14d8f27d0(void)

/* WARNING: Removing unreachable block (ram,0x00014d8f285f) */
/* WARNING: Removing unreachable block (ram,0x00014d8f2865) */
/* WARNING: Removing unreachable block (ram,0x00014d8f2890) */
/* WARNING: Removing unreachable block (ram,0x00014d8f289c) */
/* WARNING: Removing unreachable block (ram,0x00014d8f28b0) */
/* WARNING: Removing unreachable block (ram,0x00015b58b380) */
/* WARNING: Removing unreachable block (ram,0x00014d8f2916) */
/* WARNING: Removing unreachable block (ram,0x00014d8f291c) */
/* WARNING: Removing unreachable block (ram,0x00014d8f2921) */
/* WARNING: Removing unreachable block (ram,0x00015b58b393) */
/* WARNING: Removing unreachable block (ram,0x00015b58b3b4) */
/* WARNING: Removing unreachable block (ram,0x00015b58b3e9) */
/* WARNING: Removing unreachable block (ram,0x00015b58b410) */
/* WARNING: Removing unreachable block (ram,0x00015b58b415) */
/* WARNING: Removing unreachable block (ram,0x00014d8f2933) */
/* WARNING: Removing unreachable block (ram,0x00014d8f2936) */
/* WARNING: Removing unreachable block (ram,0x00015b21be72) */
/* WARNING: Removing unreachable block (ram,0x00015b21be78) */

undefined8 FUN_14d8f27d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong unaff_R13;
  longlong unaff_R15;
  
  uVar1 = FUN_156c57601(param_1,param_2,FUN_156c57601,
                        -(-1 - unaff_R15) - (~*(ulonglong *)(unaff_R13 + -0x98) + 2));
  return uVar1;
}



// FUNCTION 14d8f2921 FUN_14d8f2921 body=138 status=ok
// SIG undefined FUN_14d8f2921(void)

/* WARNING: Removing unreachable block (ram,0x00014d8f2933) */

void FUN_14d8f2921(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong unaff_RDI;
  
  thunk_FUN_1570fa24b(param_1,*(undefined8 *)(unaff_RDI + -0x68),param_3 ^ param_1);
  return;
}



// FUNCTION 14d8f29ac FUN_14d8f29ac body=160 status=ok
// SIG undefined FUN_14d8f29ac(void)

void FUN_14d8f29ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_15766a6a4(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d8f2a4c FUN_14d8f2a4c body=146 status=ok
// SIG undefined FUN_14d8f2a4c(void)

void FUN_14d8f2a4c(void)

{
  (*(code *)0x157494d3d)();
  return;
}



// FUNCTION 14d8f2ade FUN_14d8f2ade body=685 status=ok
// SIG undefined FUN_14d8f2ade(void)

/* WARNING: Removing unreachable block (ram,0x000160dfe6be) */
/* WARNING: Removing unreachable block (ram,0x000160dfe6c9) */
/* WARNING: Removing unreachable block (ram,0x000160dfe61c) */
/* WARNING: Removing unreachable block (ram,0x000160dfe622) */
/* WARNING: Removing unreachable block (ram,0x000160dfe6b9) */
/* WARNING: Removing unreachable block (ram,0x000160dfe6c4) */
/* WARNING: Removing unreachable block (ram,0x0001618c045c) */
/* WARNING: Removing unreachable block (ram,0x00014d8f2b5c) */

void FUN_14d8f2ade(undefined8 param_1)

{
  longlong lVar1;
  undefined8 in_R10;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  ulonglong uVar2;
  longlong in_stack_00000028;
  ulonglong in_stack_00000030;
  
  uVar2 = 0xffffffffffffffffU - in_stack_00000028 | unaff_R15;
  in_stack_00000030 = in_stack_00000030 ^ unaff_R15;
  *(undefined8 *)(in_stack_00000030 - 8) = param_1;
  *(undefined8 *)(in_stack_00000030 - 0x10) = param_1;
  *(undefined4 *)(in_stack_00000030 - 0x18) = 0xa750476;
  *(undefined4 *)(in_stack_00000030 - 0x14) = 0;
  lVar1 = *(longlong *)(in_stack_00000030 - 0x18);
  *(ulonglong *)(in_stack_00000030 - 0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x80) != 0) * 0x80 | (ulonglong)((uVar2 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar2 & 0x10) != 0) * 0x10 | (ulonglong)((uVar2 & 4) != 0) * 4 |
       (ulonglong)((uVar2 & 1) != 0) | (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  uVar2 = *(ulonglong *)(in_stack_00000030 - 0x18);
  *(undefined8 *)(in_stack_00000030 - 0x18) = in_R10;
  *(ulonglong *)(in_stack_00000030 - 0x20) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *(longlong *)(in_stack_00000030 - 8) = lVar1 + -0x6e5da38;
  *(undefined8 *)(in_stack_00000030 - 0x28cf) = unaff_R13;
  *(undefined8 *)(in_stack_00000030 - 0x28d7) = unaff_R13;
  *(undefined **)(in_stack_00000030 - 0x28cf) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14d8f2b5c FUN_14d8f2b5c body=162 status=ok
// SIG undefined FUN_14d8f2b5c(void)

void FUN_14d8f2b5c(void)

{
  FUN_160e76be0();
  return;
}



// FUNCTION 14d8f2d2e FUN_14d8f2d2e body=168 status=ok
// SIG undefined FUN_14d8f2d2e(void)

/* WARNING: Removing unreachable block (ram,0x00014d8f2dc3) */
/* WARNING: Removing unreachable block (ram,0x00014d8f2dcf) */
/* WARNING: Removing unreachable block (ram,0x00014d8f2dd5) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8f2d2e(void)

{
  FUN_160bc5cb9();
  return;
}



// FUNCTION 14d8f2dd6 FUN_14d8f2dd6 body=168 status=ok
// SIG undefined FUN_14d8f2dd6(void)

void FUN_14d8f2dd6(void)

{
  undefined8 local_res8;
  
  FUN_156948782(local_res8);
  return;
}



// FUNCTION 14d8f2f82 FUN_14d8f2f82 body=149 status=ok
// SIG undefined FUN_14d8f2f82(void)

void FUN_14d8f2f82(void)

{
  longlong unaff_R13;
  longlong unaff_R15;
  undefined8 unaff_retaddr;
  
  FUN_166647423((unaff_R15 + -1) - ~*(ulonglong *)(unaff_R13 + -0x98),FUN_166647423,unaff_retaddr);
  return;
}



// FUNCTION 14d8f328c FUN_14d8f328c body=302 status=ok
// SIG undefined FUN_14d8f328c(void)

/* WARNING: Instruction at (ram,0x00016235e70e) overlaps instruction at (ram,0x00016235e70b)
    */
/* WARNING: Removing unreachable block (ram,0x00014d8f331f) */
/* WARNING: Removing unreachable block (ram,0x00014d8f3314) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d8f328c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong *puVar3;
  undefined8 unaff_RSI;
  longlong unaff_R12;
  ulonglong unaff_R15;
  bool bVar4;
  byte in_TF;
  ulonglong uVar5;
  undefined8 unaff_retaddr;
  ulonglong local_res8 [4];
  
  lVar1 = FUN_1612f62c5(param_1,param_2,unaff_retaddr);
  uVar2 = FUN_16484691e(0xffffffffffffffa0,*(undefined8 *)(unaff_R12 + -0x30),
                        *(ulonglong *)(unaff_R12 + -0x40) |
                        CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + -0x27ccb37f))
                       );
  puVar3 = local_res8;
  bVar4 = (in_TF & 1) != 0;
  if (bVar4) {
    puVar3 = (ulonglong *)register0x00000020;
  }
  puVar3[-1] = uVar2;
  puVar3[-2] = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),bVar4);
  uVar2 = puVar3[-1];
  uVar5 = *puVar3;
  puVar3[1] = (-local_res8[0] - unaff_R15) + (local_res8[0] | unaff_R15) * 2;
  *puVar3 = (ulonglong)((uVar5 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar5 & 0x800) != 0) * 0x800
            | (ulonglong)((uVar5 & 0x400) != 0) * 0x400 | (ulonglong)((uVar5 & 0x200) != 0) * 0x200
            | (ulonglong)((uVar5 & 0x100) != 0) * 0x100 | (ulonglong)((uVar5 & 0x80) != 0) * 0x80 |
            (ulonglong)((uVar5 & 0x40) != 0) * 0x40 | (ulonglong)((uVar5 & 0x10) != 0) * 0x10 |
            (ulonglong)((uVar5 & 4) != 0) * 4 | (ulonglong)((uVar5 & 1) != 0) |
            (ulonglong)((uVar5 & 0x200000) != 0) * 0x200000 |
            (ulonglong)((uVar5 & 0x40000) != 0) * 0x40000;
  uVar5 = *puVar3;
  *puVar3 = (ulonglong)(puVar3 + 1);
  *puVar3 = (ulonglong)((uVar5 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar5 & 0x800) != 0) * 0x800
            | (ulonglong)((uVar5 & 0x400) != 0) * 0x400 | (ulonglong)((uVar5 & 0x200) != 0) * 0x200
            | (ulonglong)((uVar5 & 0x100) != 0) * 0x100 | (ulonglong)((uVar5 & 0x80) != 0) * 0x80 |
            (ulonglong)((uVar5 & 0x40) != 0) * 0x40 | (ulonglong)((uVar5 & 0x10) != 0) * 0x10 |
            (ulonglong)((uVar5 & 4) != 0) * 4 | (ulonglong)((uVar5 & 1) != 0) |
            (ulonglong)((uVar5 & 0x200000) != 0) * 0x200000 |
            (ulonglong)((uVar5 & 0x40000) != 0) * 0x40000;
  *puVar3 = 0x25c;
  puVar3[-1] = 0x25c;
  puVar3[-2] = 0x25c;
  *puVar3 = (ulonglong)FUN_16235e809;
  puVar3[-1] = 0x161c73546;
  return uVar2;
}



// FUNCTION 14d8f34f8 FUN_14d8f34f8 body=350 status=ok
// SIG undefined FUN_14d8f34f8(void)

/* WARNING: Removing unreachable block (ram,0x00014d8f35a1) */
/* WARNING: Removing unreachable block (ram,0x00014d8f35ac) */
/* WARNING: Removing unreachable block (ram,0x00014d8f35ee) */
/* WARNING: Removing unreachable block (ram,0x00014d8f35a7) */

void FUN_14d8f34f8(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x78) & unaff_R15;
  FUN_165677be0((*(ulonglong *)(unaff_R13 + -0x78) + unaff_R15) -
                ~(~(uVar1 << 1 ^ uVar1 >> 0x3f) | 1));
  return;
}



// FUNCTION 14d8f3659 FUN_14d8f3659 body=340 status=ok
// SIG undefined FUN_14d8f3659(void)

/* WARNING: Removing unreachable block (ram,0x00014d8f36ef) */

undefined8 FUN_14d8f3659(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14df51f25();
  return uVar1;
}



// FUNCTION 14d8f3886 FUN_14d8f3886 body=121 status=ok
// SIG undefined FUN_14d8f3886(void)

void FUN_14d8f3886(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong in_RAX;
  longlong in_R10;
  
  uVar1 = *(ulonglong *)(in_R10 + 8);
  *(longlong *)(in_R10 + 8) = -*(longlong *)(in_R10 + 8);
  *(longlong *)(in_R10 + 8) = *(longlong *)(in_R10 + 8) + -1;
  uVar2 = *(ulonglong *)(in_R10 + 8);
  *(ulonglong *)(in_R10 + 8) = *(ulonglong *)(in_R10 + 8) ^ 0xffffffffffffffff;
  lVar3 = *(longlong *)(in_R10 + 8);
  *(undefined8 *)(in_R10 + 8) = 0;
  *(longlong *)(in_R10 + 8) = *(longlong *)(in_R10 + 8) + ((~(uVar2 & in_RAX) + in_RAX) - lVar3);
  *(ulonglong *)(in_R10 + 8) = -1 - ~(~(~in_RAX | uVar1) | ~*(ulonglong *)(in_R10 + 8));
  FUN_16527afd5();
  return;
}



// FUNCTION 14d8f38ff FUN_14d8f38ff body=231 status=ok
// SIG undefined FUN_14d8f38ff(void)

/* WARNING: Removing unreachable block (ram,0x00014d8f3999) */

void FUN_14d8f38ff(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 unaff_R14;
  undefined8 uStackX_8;
  
  *(undefined8 *)(param_5 + -8) = param_4;
  *(undefined8 *)(param_5 + -0x10) = param_3;
  *(undefined8 *)(param_5 + -0x18) = param_3;
  *(undefined8 *)(param_5 + -0x20) = param_1;
  *(undefined8 *)(param_5 + -0x10) = 0;
  *(longlong *)(param_5 + -0x10) = *(longlong *)(param_5 + -0x10) + *(longlong *)(param_5 + -8);
  *(undefined8 *)(param_5 + -0x20) = unaff_R14;
  *(undefined **)(param_5 + -8) = &DAT_14e1754fa;
  *(undefined8 *)(param_5 + -0x10) = uStackX_8;
  *(undefined8 *)(param_5 + -0x18) = uStackX_8;
  *(undefined **)(param_5 + -0x10) = &DAT_14d7a55ca;
  return;
}



// FUNCTION 14d8f3c38 FUN_14d8f3c38 body=435 status=ok
// SIG undefined FUN_14d8f3c38(void)

/* WARNING: Removing unreachable block (ram,0x00014d8f3cc7) */
/* WARNING: Removing unreachable block (ram,0x000162c6e8dd) */
/* WARNING: Removing unreachable block (ram,0x000162c6e92b) */
/* WARNING: Removing unreachable block (ram,0x00014d8f3d58) */
/* WARNING: Removing unreachable block (ram,0x00014d8f3d5e) */

void FUN_14d8f3c38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  char cVar2;
  ulonglong in_RAX;
  undefined8 unaff_RDI;
  longlong in_R11;
  longlong unaff_R14;
  ulonglong uVar3;
  ulonglong local_res18;
  longlong local_res20;
  
  *(ulonglong *)(in_R11 + 0x10) =
       (in_RAX - (*(ulonglong *)(in_R11 + 0x10) | in_RAX)) + *(longlong *)(in_R11 + 0x10);
  uVar3 = unaff_R14 + local_res20 * -2;
  uVar1 = ~(param_5 & in_RAX) & (~(param_5 & in_RAX) + in_RAX) - ~param_5;
                    /* WARNING (jumptable): Read-only address (ram,0x00014d7a8442) is written */
                    /* WARNING: Read-only address (ram,0x00014d7a8442) is written */
  LOCK();
  cVar2 = (char)local_res18;
  if (cVar2 == '\0') {
    uRam000000014d7a8442 = (undefined1)param_1;
  }
  else {
    local_res18 = local_res18 & 0xffffffffffffff00;
  }
  UNLOCK();
  *(undefined8 *)(uVar1 - 8) = unaff_RDI;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RDI;
  *(ulonglong *)(uVar1 - 0x18) = local_res18;
  *(undefined4 *)(uVar1 - 0x18) = 0x6b6e0df;
  *(undefined4 *)(uVar1 - 0x14) = 0;
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x400) != 0) * 0x400 |
       (ulonglong)((uVar3 & 0x200) != 0) * 0x200 | (ulonglong)(cVar2 < '\0') * 0x80 |
       (ulonglong)(cVar2 == '\0') * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar2) & 1U) == 0) * 4 |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uVar1 - 0x20) = param_3;
  (*(code *)&LAB_162bb7aff)(param_1,param_2,&LAB_162bb7aff,param_4);
  return;
}



// FUNCTION 14d8f3d5e FUN_14d8f3d5e body=142 status=ok
// SIG undefined FUN_14d8f3d5e(void)

void FUN_14d8f3d5e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R12;
  
  (*(code *)&LAB_1614affce)(param_1,&LAB_1614affce,param_3,*(undefined8 *)(unaff_R12 + -0x30));
  return;
}



// FUNCTION 14d8f3ded FUN_14d8f3ded body=284 status=ok
// SIG undefined FUN_14d8f3ded(void)

/* WARNING: Removing unreachable block (ram,0x00014d8f3e8c) */
/* WARNING: Removing unreachable block (ram,0x0001648bb707) */
/* WARNING: Removing unreachable block (ram,0x00014d8f3e92) */

void FUN_14d8f3ded(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1648bb707(0x5b24bb3f,
                ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x48)) &
                 (0xffffffffffffffff - *(ulonglong *)(unaff_R13 + -0x48) | unaff_R15)));
  return;
}



// FUNCTION 14d8f3f10 FUN_14d8f3f10 body=162 status=ok
// SIG undefined FUN_14d8f3f10(void)

/* WARNING: Removing unreachable block (ram,0x00014d8f3fa8) */
/* WARNING: Removing unreachable block (ram,0x00014d8f3fae) */
/* WARNING: Removing unreachable block (ram,0x00014d8f3fb3) */
/* WARNING: Removing unreachable block (ram,0x0001615ebb1d) */

void FUN_14d8f3f10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong in_RAX;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_R13;
  ulonglong uVar3;
  ulonglong local_res10;
  ulonglong local_res18;
  
  uVar3 = local_res10 ^ in_RAX;
  uVar1 = local_res18 ^ in_RAX;
  *(undefined8 *)(uVar1 - 8) = param_4;
  *(undefined8 *)(uVar1 - 0x10) = param_4;
  *(undefined4 *)(uVar1 - 0x18) = 0x6b279f9;
  *(undefined4 *)(uVar1 - 0x14) = 0;
  lVar2 = *(longlong *)(uVar1 - 0x18);
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x80) != 0) * 0x80 | (ulonglong)((uVar3 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar3 & 0x10) != 0) * 0x10 | (ulonglong)((uVar3 & 4) != 0) * 4 |
       (ulonglong)((uVar3 & 1) != 0) | (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uVar1 - 0x20) = unaff_R13;
  *(undefined8 *)(uVar1 - 0x28) = in_R10;
  uVar3 = *(ulonglong *)(uVar1 - 0x18);
  *(undefined8 *)(uVar1 - 0x18) = param_3;
  *(longlong *)(uVar1 - 8) = lVar2 + -0x3f03bf7;
  if ((uVar3 & 0x80) == 0) {
    FUN_14dd66ee7(param_1,param_2,*(undefined8 *)(uVar1 - 0x18));
    return;
  }
  *(undefined8 *)(uVar1 - 0x10) = in_R11;
  *(undefined8 *)(uVar1 - 0x18) = in_R11;
  *(code **)(uVar1 - 0x10) = FUN_14d85d504;
  return;
}



// FUNCTION 14d8f3fb3 FUN_14d8f3fb3 body=181 status=ok
// SIG undefined FUN_14d8f3fb3(void)

void FUN_14d8f3fb3(void)

{
  longlong unaff_RSI;
  undefined8 in_stack_00000008;
  
  *(uint *)(unaff_RSI + 0x100) = ~*(uint *)(unaff_RSI + 0x100);
  FUN_16232bcbd(in_stack_00000008);
  return;
}



// FUNCTION 14d8f4106 thunk_FUN_14d8f4110 body=5 status=ok
// SIG undefined thunk_FUN_14d8f4110(void)

void thunk_FUN_14d8f4110(void)

{
  return;
}



// FUNCTION 14d8f410b thunk_FUN_14d8f4133 body=5 status=ok
// SIG undefined thunk_FUN_14d8f4133(void)

void thunk_FUN_14d8f4133(void)

{
  longlong unaff_RBX;
  
  if (unaff_RBX == 0x11521a) {
    FUN_165dc09fc();
    return;
  }
  if (unaff_RBX == 0x11521b) {
    FUN_165dc09fc();
    return;
  }
  return;
}



// FUNCTION 14d8f4110 FUN_14d8f4110 body=35 status=ok
// SIG undefined FUN_14d8f4110(void)

void FUN_14d8f4110(void)

{
  return;
}



// FUNCTION 14d8f4133 FUN_14d8f4133 body=143 status=ok
// SIG undefined FUN_14d8f4133(void)

void FUN_14d8f4133(void)

{
  longlong unaff_RBX;
  
  if (unaff_RBX == 0x11521a) {
    FUN_165dc09fc();
    return;
  }
  if (unaff_RBX == 0x11521b) {
    FUN_165dc09fc();
    return;
  }
  return;
}



// FUNCTION 14d8f4316 FUN_14d8f4316 body=125 status=ok
// SIG undefined FUN_14d8f4316(void)

void FUN_14d8f4316(void)

{
  return;
}



// FUNCTION 14d8f44cc FUN_14d8f44cc body=185 status=ok
// SIG undefined FUN_14d8f44cc(void)

void FUN_14d8f44cc(void)

{
  longlong unaff_R14;
  
  if (unaff_R14 != 0xd308a) {
    FUN_164b7300c();
    return;
  }
  return;
}



// FUNCTION 14d8f466d FUN_14d8f466d body=280 status=ok
// SIG undefined FUN_14d8f466d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d8f466d(undefined8 param_1,longlong param_2)

{
  if (param_2 == 0x1062b5) {
    FUN_1662eee07(param_1,&DAT_14d7a31d2);
    return;
  }
  if (param_2 != 0x1062b6) {
    FUN_162e46a9f();
    FUN_161060c3e();
    return;
  }
  FUN_1662eee07(param_1,&LAB_14d7bf1a7);
  return;
}



// FUNCTION 14d8f4820 FUN_14d8f4820 body=180 status=ok
// SIG undefined FUN_14d8f4820(void)

undefined8 FUN_14d8f4820(void)

{
  byte bVar1;
  longlong unaff_RDI;
  
  bVar1 = (byte)*(undefined8 *)(unaff_RDI + -0x60);
  return CONCAT71((int7)((ulonglong)*(undefined8 *)(unaff_RDI + -0x60) >> 8),bVar1 >> 6 ^ bVar1 << 2
                 );
}



// FUNCTION 14d8f48d4 thunk_FUN_14d8f48da body=5 status=ok
// SIG undefined thunk_FUN_14d8f48da(void)

void thunk_FUN_14d8f48da(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_1648931a8(unaff_retaddr,param_2,8);
  return;
}



// FUNCTION 14d8f48da FUN_14d8f48da body=128 status=ok
// SIG undefined FUN_14d8f48da(void)

void FUN_14d8f48da(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_1648931a8(unaff_retaddr,param_2,8);
  return;
}



// FUNCTION 14d8f4a97 FUN_14d8f4a97 body=154 status=ok
// SIG undefined FUN_14d8f4a97(void)

undefined8 FUN_14d8f4a97(void)

{
  undefined8 in_stack_00000008;
  
  return in_stack_00000008;
}



// FUNCTION 14d8f4bd7 FUN_14d8f4bd7 body=171 status=ok
// SIG undefined FUN_14d8f4bd7(void)

void FUN_14d8f4bd7(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong unaff_R12;
  ulonglong unaff_R15;
  
  uVar1 = *param_1;
  *param_1 = ~*param_1;
  *param_1 = ~*param_1;
  *param_1 = *param_1 & ~unaff_R15;
  *param_1 = ~*param_1;
  *param_1 = ~((unaff_R12 ^ 0xffffffffffffffff | uVar1) & *param_1);
  return;
}



// FUNCTION 14d8f4c8a FUN_14d8f4c8a body=337 status=ok
// SIG undefined FUN_14d8f4c8a(void)

/* WARNING: Removing unreachable block (ram,0x00014d8f4cd1) */

void FUN_14d8f4c8a(ulonglong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  
  FUN_14e0ccfcd(param_1,FUN_14e0ccfcd,in_stack_00000008,param_4,
                ~-*(longlong *)(unaff_R13 + (param_3 ^ 0x17953ff8)) + 1);
  FUN_16181be6d(~(param_1 & unaff_R15) & (param_1 | unaff_R15),
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14d8f4ddf FUN_14d8f4ddf body=162 status=ok
// SIG undefined FUN_14d8f4ddf(void)

void FUN_14d8f4ddf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R12;
  undefined8 in_stack_00000010;
  
  (*(code *)0x1660bbd56)
            (param_1,in_stack_00000010,param_3,param_4,*(undefined8 *)(unaff_R12 + -0x68));
  return;
}



// FUNCTION 14d8f4f26 FUN_14d8f4f26 body=300 status=ok
// SIG undefined FUN_14d8f4f26(void)

/* WARNING: Removing unreachable block (ram,0x00014d8f4fa6) */
/* WARNING: Removing unreachable block (ram,0x00014d8f4fac) */
/* WARNING: Removing unreachable block (ram,0x00014d8f516c) */
/* WARNING: Removing unreachable block (ram,0x00014d8f5172) */
/* WARNING: Removing unreachable block (ram,0x0001615b1f4e) */
/* WARNING: Removing unreachable block (ram,0x0001624ced66) */
/* WARNING: Removing unreachable block (ram,0x0001624ced6c) */
/* WARNING: Removing unreachable block (ram,0x000162607c35) */
/* WARNING: Removing unreachable block (ram,0x000160b66a5b) */
/* WARNING: Removing unreachable block (ram,0x000160b66a61) */
/* WARNING: Removing unreachable block (ram,0x000160b669e7) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d8f4f26(void)

{
  longlong *plVar1;
  uint *puVar2;
  ulonglong in_RAX;
  undefined8 uVar3;
  longlong unaff_RSI;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  ulonglong uVar4;
  undefined8 in_stack_00000010;
  ulonglong in_stack_00000028;
  
  uVar4 = ~((~in_RAX | in_stack_00000028) & (~in_stack_00000028 | in_RAX));
                    /* WARNING: Ignoring partial resolution of indirect */
  plVar1 = (longlong *)(uVar4 - 8);
  *plVar1 = 0;
  *plVar1 = *plVar1 - unaff_RSI;
  *plVar1 = -*plVar1;
  *(undefined8 *)(uVar4 - 0x10) = unaff_R14;
  *(undefined8 *)(uVar4 - 0x18) = unaff_R14;
  *(undefined8 *)(uVar4 - 0x20) = unaff_R12;
  puVar2 = (uint *)(uVar4 - 0x28);
  *puVar2 = 0xc0cfbf0e;
  *puVar2 = *puVar2 ^ 0x6215b4ef;
  *(undefined4 *)(uVar4 - 0x24) = 0xffffffff;
  *(undefined8 *)(uVar4 - 0x28) = in_stack_00000010;
  uVar3 = FUN_162607c35();
  return uVar3;
}



// FUNCTION 14d8f5052 FUN_14d8f5052 body=484 status=ok
// SIG undefined FUN_14d8f5052(void)

/* WARNING: Removing unreachable block (ram,0x00014d8f5172) */

void FUN_14d8f5052(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  short *unaff_RBP;
  ulonglong uVar5;
  short unaff_SI;
  ulonglong uVar6;
  undefined8 unaff_R12;
  short unaff_R13W;
  ulonglong unaff_R15;
  undefined8 uStackX_10;
  undefined8 uStackX_20;
  
  *unaff_RBP = unaff_R13W + unaff_SI + 1;
  *(undefined8 *)(param_6 + -8) = param_3;
  *(undefined8 *)(param_6 + -0x10) = *(undefined8 *)(param_6 + -8);
  *(undefined8 *)(param_6 + -8) = 0;
  *(undefined1 **)(param_6 + -8) = &LAB_1663c4c0f + *(longlong *)(param_6 + -8);
  *(undefined8 *)(param_6 + -0x18) = uStackX_20;
  *(undefined4 *)(param_6 + -0x20) = 0x479a553c;
  *(undefined4 *)(param_6 + -0x1c) = 0;
  lVar3 = *(longlong *)(param_6 + -0x18);
  uVar1 = *(undefined8 *)(param_6 + -0x10);
  *(undefined8 *)(param_6 + -0x10) = unaff_RBX;
  *(undefined8 *)(param_6 + -0x18) = unaff_RBX;
  *(undefined8 *)(param_6 + -0x10) = 0x14d7a84ac;
  *(undefined8 *)(param_6 + -0x20) = 0x14d8f50e8;
  FUN_1663c4bf0(param_1,param_2,uVar1);
  *(longlong *)(param_6 + -0x18) =
       *(longlong *)(param_6 + -0x18) - (param_4 << ((byte)param_1 & 0x3f));
  uVar2 = *(ulonglong *)(lVar3 + -0x88);
  *(ulonglong *)(param_6 + -0x18) = *(ulonglong *)(lVar3 + -0x38) ^ unaff_R15;
  *(undefined8 *)(param_6 + -0x20) = uStackX_10;
  uVar1 = *(undefined8 *)(param_6 + -0x18);
  *(ulonglong *)(param_6 + -0x18) =
       ~((~unaff_R15 | *(ulonglong *)(lVar3 + -0x48)) & (~*(ulonglong *)(lVar3 + -0x48) | unaff_R15)
        );
  uVar5 = *(ulonglong *)(lVar3 + -0x78);
  *(undefined8 *)(param_6 + -0x18) = uVar1;
  *(undefined4 *)(param_6 + -0x18) = 0;
  *(undefined4 *)(param_6 + -0x14) = 0;
  uVar6 = *(longlong *)(param_6 + -0x18) + uVar5;
  *(ulonglong *)(param_6 + -0x18) = uVar2 ^ unaff_R15;
  uVar1 = *(undefined8 *)(param_6 + -0x18);
  *(ulonglong *)(param_6 + -0x18) = ~(uVar5 & unaff_R15) & uVar6 + (-1 - (~unaff_R15 | uVar6));
  uVar4 = *(undefined8 *)(param_6 + -0x18);
  uVar2 = *(ulonglong *)(lVar3 + -0x28);
  uVar5 = uVar2 | unaff_R15;
  *(undefined8 *)(param_6 + -0x18) = unaff_R12;
  FUN_160e440bc(uVar4,(~uVar5 | ~(uVar2 & unaff_R15)) + uVar5 + 1,uVar1);
  return;
}



// FUNCTION 14d8f528a FUN_14d8f528a body=153 status=ok
// SIG undefined FUN_14d8f528a(void)

void FUN_14d8f528a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint *unaff_R13;
  uint unaff_R15D;
  undefined8 local_res10;
  
  *unaff_R13 = *unaff_R13 | 0xcc9f64c0;
  *unaff_R13 = ~((~*unaff_R13 | ~unaff_R15D) + *unaff_R13 + 1);
  FUN_165bf7c40(param_1,-0x29a19922 - ~-(local_res10 | 0xffffffffd65e66df),param_3,param_4);
  return;
}



// FUNCTION 14d8f53c5 thunk_FUN_14d8f53cb body=5 status=ok
// SIG undefined thunk_FUN_14d8f53cb(void)

undefined8 thunk_FUN_14d8f53cb(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d8f53cb FUN_14d8f53cb body=169 status=ok
// SIG undefined FUN_14d8f53cb(void)

undefined8 FUN_14d8f53cb(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d8f5479 FUN_14d8f5479 body=148 status=ok
// SIG undefined FUN_14d8f5479(void)

/* WARNING: Removing unreachable block (ram,0x000166bfcefd) */
/* WARNING: Removing unreachable block (ram,0x00014d8f550d) */

undefined8 FUN_14d8f5479(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 in_RAX;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 unaff_RBP;
  undefined8 in_R10;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 uStackX_8;
  ulonglong local_res20;
  
  uVar2 = ~((0xffffffffffffffff - unaff_R15 | local_res20) & (~local_res20 | unaff_R15));
  *(undefined8 *)(uVar2 - 8) = in_R10;
  if ((char)in_R10 == '\0') {
    *(undefined8 *)(uVar2 - 0x10) = param_2;
    puVar1 = (undefined8 *)(uVar2 - 0x18);
    *puVar1 = param_2;
    *(undefined8 *)(uVar2 - 0x20) = unaff_R13;
    *(undefined8 *)(uVar2 - 0x10) = *(undefined8 *)(uVar2 - 8);
    *(undefined8 *)(uVar2 - 8) = 0x5bcdb1ee;
    *(ulonglong *)(uVar2 - 8) = *(ulonglong *)(uVar2 - 8) ^ 0x5bcdb1ee;
    *(longlong *)(uVar2 - 8) = (longlong)(&DAT_1661d7340 + *(longlong *)(uVar2 - 8));
    *puVar1 = unaff_RBP;
    uVar3 = *(undefined8 *)(uVar2 - 0x10);
    *(undefined8 *)(uVar2 - 0x10) = uStackX_8;
    *puVar1 = uStackX_8;
    *(undefined8 *)(uVar2 - 0x20) = uVar3;
    *(undefined **)(uVar2 - 0x28) = &DAT_14d7aa8e6;
    *(undefined4 *)(uVar2 - 0x30) = 0x6fb6a3ee;
    *(undefined4 *)(uVar2 - 0x2c) = 0;
    *(undefined8 *)((longlong)puVar1 + (*(ulonglong *)(uVar2 - 0x30) ^ 0x6fb6a3e6)) =
         *(undefined8 *)(uVar2 - 0x28);
    *puVar1 = unaff_R14;
    *(undefined8 *)(uVar2 - 0x20) = unaff_R14;
    *puVar1 = &DAT_1661d7324;
    return in_RAX;
  }
  uVar3 = thunk_FUN_166bfce52();
  return uVar3;
}



// FUNCTION 14d8f550d FUN_14d8f550d body=96 status=ok
// SIG undefined FUN_14d8f550d(void)

void FUN_14d8f550d(void)

{
  return;
}



// FUNCTION 14d8f55af FUN_14d8f55af body=29 status=ok
// SIG undefined FUN_14d8f55af(void)

void FUN_14d8f55af(void)

{
  return;
}



// FUNCTION 14d8f5667 FUN_14d8f5667 body=224 status=ok
// SIG undefined FUN_14d8f5667(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d8f56ba) */
/* WARNING: Removing unreachable block (ram,0x00014d8f56c0) */

undefined8 FUN_14d8f5667(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d8f5745 FUN_14d8f5745 body=73 status=ok
// SIG undefined FUN_14d8f5745(void)

void FUN_14d8f5745(ulonglong param_1)

{
  longlong unaff_RBX;
  ulonglong unaff_R14;
  undefined8 local_res18;
  ulonglong in_stack_00000028;
  
  *(ulonglong *)(unaff_RBX + 8) = ~*(ulonglong *)(unaff_RBX + 8);
  *(ulonglong *)(unaff_RBX + 8) = *(ulonglong *)(unaff_RBX + 8) | param_1;
  *(ulonglong *)(unaff_RBX + 8) = -1 - (unaff_R14 & *(ulonglong *)(unaff_RBX + 8));
  *(undefined8 *)((in_stack_00000028 ^ param_1) - 8) = 0x17d5bde;
  FUN_165c7153c(local_res18);
  return;
}



// FUNCTION 14d8f57d2 FUN_14d8f57d2 body=122 status=ok
// SIG undefined FUN_14d8f57d2(void)

void FUN_14d8f57d2(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = -(param_4 - unaff_RDI) | unaff_R15;
  FUN_156348191(*(ulonglong *)(unaff_R13 + -0x88) | unaff_R15,param_2,
                ~*(ulonglong *)(unaff_R13 + -0x88),
                (uVar1 ^ 0xffffffffffffffff | ~(-(param_4 - unaff_RDI) & unaff_R15)) + uVar1 + 1);
  return;
}



// FUNCTION 14d8f584f FUN_14d8f584f body=402 status=ok
// SIG undefined FUN_14d8f584f(void)

/* WARNING: Instruction at (ram,0x0001668d3235) overlaps instruction at (ram,0x0001668d3234)
    */
/* WARNING: Removing unreachable block (ram,0x00014d8f58be) */
/* WARNING: Removing unreachable block (ram,0x00014d8f58c4) */
/* WARNING: Removing unreachable block (ram,0x000157470fd9) */
/* WARNING: Removing unreachable block (ram,0x00014d8f5957) */
/* WARNING: Removing unreachable block (ram,0x00014d8f595d) */
/* WARNING: Removing unreachable block (ram,0x00014d8f5962) */
/* WARNING: Removing unreachable block (ram,0x00014d8f59a0) */
/* WARNING: Removing unreachable block (ram,0x00014d8f59a4) */
/* WARNING: Removing unreachable block (ram,0x00014d8f5a79) */
/* WARNING: Removing unreachable block (ram,0x00014d8f5a7e) */
/* WARNING: Removing unreachable block (ram,0x00014d8f5a84) */
/* WARNING: Removing unreachable block (ram,0x00014d8f5a89) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000008 : 0x0001668d3250 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8f584f(undefined8 param_1,undefined8 param_2,char param_3,undefined8 param_4)

{
  undefined1 uStack0000000000000129;
  
  uStack0000000000000129 = 0x6c;
  (*(code *)0x14deb8dd8)(param_1,param_2,param_3 + '\x01',param_4);
  return;
}



// FUNCTION 14d8f5962 FUN_14d8f5962 body=131 status=ok
// SIG undefined FUN_14d8f5962(void)

/* WARNING: Removing unreachable block (ram,0x00014d8f59a0) */
/* WARNING: Removing unreachable block (ram,0x00014d8f5a7e) */
/* WARNING: Removing unreachable block (ram,0x00014d8f5a84) */
/* WARNING: Removing unreachable block (ram,0x00014d8f5a89) */

void FUN_14d8f5962(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_161246094(param_1,param_2,param_3,param_4);
  FUN_14de7ceb6();
  return;
}



// FUNCTION 14d8f59e5 FUN_14d8f59e5 body=294 status=ok
// SIG undefined FUN_14d8f59e5(void)

/* WARNING: Removing unreachable block (ram,0x00014d8f5a89) */

void FUN_14d8f59e5(void)

{
  longlong unaff_RDI;
  
  if (*(longlong *)(unaff_RDI + -0x68) == 0) {
    FUN_14de7ceb6();
    return;
  }
  FUN_14de7ceb6();
  return;
}



// FUNCTION 14d8f5ba0 FUN_14d8f5ba0 body=49 status=ok
// SIG undefined FUN_14d8f5ba0(void)

void FUN_14d8f5ba0(void)

{
  return;
}



// FUNCTION 14d8f5cb4 FUN_14d8f5cb4 body=144 status=ok
// SIG undefined FUN_14d8f5cb4(void)

void FUN_14d8f5cb4(void)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 unaff_retaddr;
  undefined8 local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_RBP;
  *(undefined8 *)(local_res10 + -0x10) = unaff_retaddr;
  uVar2 = *(undefined8 *)(local_res10 + -0x10);
  *(undefined8 *)(local_res10 + -0x10) = uVar2;
  *(undefined8 *)(local_res10 + -0x18) = uVar2;
  *(undefined8 *)(local_res10 + -0x20) = unaff_RDI;
  puVar1 = (uint *)(local_res10 + -0x28);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ 0xb48cf20;
  *(undefined4 *)(local_res10 + -0x24) = 0;
  *(undefined8 *)(local_res10 + -0x28) = unaff_RSI;
  FUN_156cb852f();
  return;
}



// FUNCTION 14d8f5de2 FUN_14d8f5de2 body=376 status=ok
// SIG undefined FUN_14d8f5de2(void)

/* WARNING: Removing unreachable block (ram,0x00014d8f5e8d) */
/* WARNING: Removing unreachable block (ram,0x00014d8f5e93) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8f5de2(undefined1 param_1,longlong param_2,undefined8 param_3)

{
  FUN_15b755613(param_1,param_2 + 8,param_3,FUN_15b755613);
  return;
}



// FUNCTION 14d8f60a1 FUN_14d8f60a1 body=171 status=ok
// SIG undefined FUN_14d8f60a1(void)

/* WARNING: Removing unreachable block (ram,0x00014d8f61f3) */
/* WARNING: Removing unreachable block (ram,0x00014d8f61e8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8f60a1(void)

{
  code *pcVar1;
  code *in_R11;
  byte in_AF;
  
  pcVar1 = FUN_15b73a335;
  FUN_15b73a335();
  if ((int)(((uint)((longlong)pcVar1 - (longlong)in_R11 == 0) * 0x40 | (uint)(in_AF & 1) * 0x10 |
             (uint)((POPCOUNT((longlong)pcVar1 - (longlong)in_R11 & 0xff) & 1U) == 0) * 4 |
            (uint)(pcVar1 < in_R11)) << 0x19) < 0) {
    return;
  }
  FUN_15725dffc();
  return;
}



// FUNCTION 14d8f614d FUN_14d8f614d body=463 status=ok
// SIG undefined FUN_14d8f614d(void)

/* WARNING: Removing unreachable block (ram,0x00014d8f61f3) */
/* WARNING: Removing unreachable block (ram,0x00014d8f61e8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8f614d(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_R11;
  byte in_AF;
  
  if ((int)(((uint)(param_3 - in_R11 == 0) * 0x40 | (uint)(in_AF & 1) * 0x10 |
             (uint)((POPCOUNT(param_3 - in_R11 & 0xff) & 1U) == 0) * 4 | (uint)(param_3 < in_R11))
           << 0x19) < 0) {
    return;
  }
  FUN_15725dffc();
  return;
}



// FUNCTION 14d8f6453 FUN_14d8f6453 body=134 status=ok
// SIG undefined FUN_14d8f6453(void)

void FUN_14d8f6453(short param_1,undefined8 param_2,undefined8 param_3,short param_4,
                  longlong param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  short *unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 uStackX_8;
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  
  *unaff_RBP = (-(-1 - param_4) - param_1) + 1;
                    /* WARNING (jumptable): Read-only address (ram,0x00014d7a97de) is written */
                    /* WARNING: Read-only address (ram,0x00014d7a97de) is written */
  LOCK();
  uRam000000014d7a97de = (undefined1)in_RAX;
  uVar4 = in_RAX & 0xffffffffffffff00;
  UNLOCK();
  *(ulonglong *)(param_5 + -8) = uVar4;
  *(ulonglong *)(param_5 + -0x10) = uVar4;
  puVar1 = (ulonglong *)(param_5 + -0x18);
  *puVar1 = uVar4;
  *(undefined8 *)(param_5 + -0x20) = in_R10;
  *(undefined4 *)puVar1 = 0xf5cb468;
  uVar2 = *(undefined8 *)(param_5 + -0x20);
  *(undefined8 *)(param_5 + -0x20) = uStackX_8;
  *(undefined4 *)(param_5 + -0x14) = 0;
  uVar3 = *(undefined8 *)(param_5 + -0x20);
  uVar4 = *puVar1;
  *puVar1 = (ulonglong)((uStackX_20 & 0x4000) != 0) * 0x4000 |
            (ulonglong)((uStackX_20 & 0x800) != 0) * 0x800 |
            (ulonglong)((uStackX_20 & 0x400) != 0) * 0x400 |
            (ulonglong)((uStackX_20 & 0x200) != 0) * 0x200 |
            (ulonglong)((uStackX_20 & 0x100) != 0) * 0x100 |
            (ulonglong)((uStackX_20 & 0x80) != 0) * 0x80 |
            (ulonglong)((uStackX_20 & 0x40) != 0) * 0x40 |
            (ulonglong)((uStackX_20 & 0x10) != 0) * 0x10 | (ulonglong)((uStackX_20 & 4) != 0) * 4 |
            (ulonglong)((uStackX_20 & 1) != 0) |
            (ulonglong)((uStackX_20 & 0x200000) != 0) * 0x200000 |
            (ulonglong)((uStackX_20 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_5 + -0x28) = uVar2;
  *(ulonglong *)(param_5 + -0x20) = uVar4;
  *(undefined8 *)(param_5 + -0x28) = unaff_RDI;
  (*(code *)0x162c58699)(uStackX_18,param_2,param_3,uVar3);
  return;
}



// FUNCTION 14d8f64dc FUN_14d8f64dc body=122 status=ok
// SIG undefined FUN_14d8f64dc(void)

void FUN_14d8f64dc(void)

{
  return;
}



// FUNCTION 14d8f6567 FUN_14d8f6567 body=158 status=ok
// SIG undefined FUN_14d8f6567(void)

void FUN_14d8f6567(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  undefined8 in_stack_00000008;
  
  uVar1 = *param_4;
  *param_4 = ~*param_4;
  *param_4 = *param_4 | param_1;
  *param_4 = 0xffffffffffffffff - ((~param_1 | uVar1) & *param_4);
  FUN_16598a463(FUN_16598a463,param_2,param_3,in_stack_00000008);
  return;
}



// FUNCTION 14d8f67a0 FUN_14d8f67a0 body=6 status=ok
// SIG undefined FUN_14d8f67a0(void)

void FUN_14d8f67a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  uint in_R10D;
  undefined8 unaff_R12;
  
  FUN_15647232c(param_1);
  uVar2 = (ulonglong)in_R10D ^ 0x718f4014;
  *(undefined8 *)(&stack0xfffffffffb0849a9 + uVar2) = *(undefined8 *)(unaff_RDI + -0x80);
  *(undefined8 *)(&stack0xfffffffffb0849a1 + uVar2) =
       *(undefined8 *)(&stack0xfffffffffb0849a9 + uVar2);
  *(undefined4 *)(&stack0xfffffffffb0849a1 + uVar2) = 0xc9a87309;
  *(int *)(&stack0xfffffffffb0849a1 + uVar2) =
       *(int *)(&stack0xfffffffffb0849a1 + uVar2) + 0x3d311565;
  *(undefined4 *)(&stack0xfffffffffb0849a5 + uVar2) = 0;
  lVar1 = *(longlong *)(&stack0xfffffffffb0849a1 + uVar2) + (uVar2 - 0xbd13ebd);
  *(undefined8 *)(&stack0xfffffffff42ec13b + lVar1 + 0xbd13ebd) = param_3;
  *(undefined8 *)(&stack0xfffffffff42ec13b + lVar1 + 0xbd13ebd) = unaff_R12;
  *(undefined8 *)(&stack0xfffffffff42ec133 + lVar1 + 0xbd13ebd) = unaff_R12;
  *(code **)(&stack0xfffffffff42ec13b + lVar1 + 0xbd13ebd) = FUN_14d8f68f6;
  (*(code *)0x15b1c1643)();
  return;
}



// FUNCTION 14d8f67a6 FUN_14d8f67a6 body=332 status=ok
// SIG undefined FUN_14d8f67a6(void)

void FUN_14d8f67a6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  uint in_R10D;
  undefined8 unaff_R12;
  
  FUN_15647232c(param_1);
  uVar2 = (ulonglong)in_R10D ^ 0x718f4014;
  *(undefined8 *)(&stack0xfffffffffb0849a1 + uVar2) = *(undefined8 *)(unaff_RDI + -0x80);
  *(undefined8 *)(&stack0xfffffffffb084999 + uVar2) =
       *(undefined8 *)(&stack0xfffffffffb0849a1 + uVar2);
  *(undefined4 *)(&stack0xfffffffffb084999 + uVar2) = 0xc9a87309;
  *(int *)(&stack0xfffffffffb084999 + uVar2) =
       *(int *)(&stack0xfffffffffb084999 + uVar2) + 0x3d311565;
  *(undefined4 *)(&stack0xfffffffffb08499d + uVar2) = 0;
  lVar1 = *(longlong *)(&stack0xfffffffffb084999 + uVar2) + (uVar2 - 0xbd13ec5);
  *(undefined8 *)(&stack0xfffffffff42ec133 + lVar1 + 0xbd13ec5) = param_3;
  *(undefined8 *)(&stack0xfffffffff42ec133 + lVar1 + 0xbd13ec5) = unaff_R12;
  *(undefined8 *)(&stack0xfffffffff42ec12b + lVar1 + 0xbd13ec5) = unaff_R12;
  *(code **)(&stack0xfffffffff42ec133 + lVar1 + 0xbd13ec5) = FUN_14d8f68f6;
  (*(code *)0x15b1c1643)();
  return;
}



// FUNCTION 14d8f68f6 FUN_14d8f68f6 body=130 status=ok
// SIG undefined FUN_14d8f68f6(void)

void FUN_14d8f68f6(void)

{
  ulonglong uVar1;
  uint in_EAX;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong unaff_R13;
  ulonglong unaff_R15;
  longlong lVar4;
  undefined8 uStackX_10;
  undefined8 uStackX_20;
  
  uVar3 = (ulonglong)(~in_EAX + 1);
  FUN_14d8ffbbd();
  lVar4 = (~uStackX_20 & ~unaff_R15 | uStackX_20 & unaff_R15 ^ 0xffffffffffffffff) +
          ~(~uStackX_20 & ~unaff_R15);
  *(undefined8 *)(lVar4 + -7) = uStackX_10;
  *(undefined8 *)(lVar4 + -0xf) = 0x14d8f6a07;
  uVar2 = FUN_14e1c73a0();
  *(undefined8 *)(lVar4 + -0xf) = uVar2;
  uVar1 = *(ulonglong *)(unaff_R13 + -0x28);
  uVar2 = *(undefined8 *)(lVar4 + -0xf);
  *(ulonglong *)(lVar4 + -0xf) = uVar3;
  *(undefined8 *)(lVar4 + -0x17) = uVar2;
  *(undefined4 *)(lVar4 + -0x17) = 0xc86093c3;
  *(int *)(lVar4 + -0x17) = *(int *)(lVar4 + -0x17) + 0x1590a3f8;
  *(undefined4 *)(lVar4 + -0x13) = 0xffffffff;
  uVar2 = *(undefined8 *)(lVar4 + -0xf);
  *(ulonglong *)(lVar4 + -0xf) = uVar1 ^ 0x14e1c73a0;
  *(longlong *)(lVar4 + -0x17) = unaff_R13;
  (*(code *)0x166b4cf59)(uVar2,lVar4 + -7);
  return;
}



// FUNCTION 14d8f6979 FUN_14d8f6979 body=285 status=ok
// SIG undefined FUN_14d8f6979(void)

void FUN_14d8f6979(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  longlong lVar3;
  undefined8 in_stack_00000008;
  undefined8 local_res10;
  undefined8 local_res20;
  
  lVar3 = (~local_res20 & ~unaff_R15 | local_res20 & unaff_R15 ^ 0xffffffffffffffff) +
          ~(~local_res20 & ~unaff_R15);
  *(undefined8 *)(lVar3 + -7) = local_res10;
  *(undefined8 *)(lVar3 + -0xf) = 0x14d8f6a07;
  uVar2 = FUN_14e1c73a0(param_1,param_2,param_3,in_stack_00000008);
  *(undefined8 *)(lVar3 + -0xf) = uVar2;
  uVar1 = *(ulonglong *)(unaff_R13 + -0x28);
  uVar2 = *(undefined8 *)(lVar3 + -0xf);
  *(undefined8 *)(lVar3 + -0xf) = param_1;
  *(undefined8 *)(lVar3 + -0x17) = uVar2;
  *(undefined4 *)(lVar3 + -0x17) = 0xc86093c3;
  *(int *)(lVar3 + -0x17) = *(int *)(lVar3 + -0x17) + 0x1590a3f8;
  *(undefined4 *)(lVar3 + -0x13) = 0xffffffff;
  uVar2 = *(undefined8 *)(lVar3 + -0xf);
  *(ulonglong *)(lVar3 + -0xf) = uVar1 ^ 0x14e1c73a0;
  *(longlong *)(lVar3 + -0x17) = unaff_R13;
  (*(code *)0x166b4cf59)(uVar2,lVar3 + -7);
  return;
}



// FUNCTION 14d8f6aa0 FUN_14d8f6aa0 body=30 status=ok
// SIG undefined FUN_14d8f6aa0(void)

void FUN_14d8f6aa0(void)

{
  return;
}



// FUNCTION 14d8f6b3f FUN_14d8f6b3f body=685 status=ok
// SIG undefined FUN_14d8f6b3f(void)

/* WARNING: Instruction at (ram,0x0001652cb43c) overlaps instruction at (ram,0x0001652cb43b)
    */
/* WARNING: Removing unreachable block (ram,0x000165916605) */
/* WARNING: Removing unreachable block (ram,0x00016591660b) */
/* WARNING: Removing unreachable block (ram,0x0001623ea761) */
/* WARNING: Removing unreachable block (ram,0x0001652cb2bb) */
/* WARNING: Removing unreachable block (ram,0x0001652cb2c1) */
/* WARNING: Removing unreachable block (ram,0x0001652cb39a) */
/* WARNING: Removing unreachable block (ram,0x0001652cb3a7) */
/* WARNING: Removing unreachable block (ram,0x0001652cb3f6) */
/* WARNING: Removing unreachable block (ram,0x00016512d1a8) */
/* WARNING: Removing unreachable block (ram,0x0001652cb3fc) */
/* WARNING: Removing unreachable block (ram,0x0001652cb434) */
/* WARNING: Removing unreachable block (ram,0x0001652cb42f) */
/* WARNING: Removing unreachable block (ram,0x0001652cb439) */
/* WARNING: Removing unreachable block (ram,0x0001652cb4a6) */
/* WARNING: Removing unreachable block (ram,0x0001652cb4ac) */
/* WARNING: Removing unreachable block (ram,0x0001621307c3) */
/* WARNING: Removing unreachable block (ram,0x000162130843) */
/* WARNING: Removing unreachable block (ram,0x000162130849) */
/* WARNING: Removing unreachable block (ram,0x0001659164e3) */
/* WARNING: Removing unreachable block (ram,0x000165916575) */
/* WARNING: Removing unreachable block (ram,0x00016591657b) */
/* WARNING: Removing unreachable block (ram,0x000165916600) */
/* WARNING: Removing unreachable block (ram,0x000161074257) */
/* WARNING: Removing unreachable block (ram,0x0001610742e6) */
/* WARNING: Removing unreachable block (ram,0x0001610742ec) */
/* WARNING: Removing unreachable block (ram,0x00016107438b) */
/* WARNING: Removing unreachable block (ram,0x000161074391) */
/* WARNING: Removing unreachable block (ram,0x000156ea0dd7) */
/* WARNING: Removing unreachable block (ram,0x000156d985b7) */
/* WARNING: Removing unreachable block (ram,0x00014d8f6c69) */
/* WARNING: Removing unreachable block (ram,0x00014d8f6c6f) */
/* WARNING: Removing unreachable block (ram,0x000164acae66) */
/* WARNING: Removing unreachable block (ram,0x00014d8f6bd4) */
/* WARNING: Removing unreachable block (ram,0x000164acae22) */
/* WARNING: Removing unreachable block (ram,0x000164acae6a) */
/* WARNING: Removing unreachable block (ram,0x0001649c502f) */

undefined8 FUN_14d8f6b3f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x90);
  if (-1 < (longlong)(~((in_RAX - (uVar1 | in_RAX)) + uVar1) & (uVar1 | in_RAX))) {
    uVar2 = FUN_165d93aab(param_1,param_2,param_3,FUN_165d93aab);
    return uVar2;
  }
  uVar2 = FUN_161c3d043();
  return uVar2;
}



// FUNCTION 14d8f6d03 FUN_14d8f6d03 body=362 status=ok
// SIG undefined FUN_14d8f6d03(void)

/* WARNING: Removing unreachable block (ram,0x00014d8f6db3) */

void FUN_14d8f6d03(void)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong unaff_R15;
  longlong unaff_retaddr;
  ulonglong local_res20;
  
  uVar2 = *(ulonglong *)(unaff_retaddr + -0xa0) ^ unaff_R15;
  lVar1 = local_res20 + unaff_R15 + (local_res20 & unaff_R15) * -2;
  *(ulonglong *)(lVar1 + -0x10) = *(ulonglong *)(unaff_retaddr + -0x98) ^ unaff_R15;
  *(undefined8 *)(lVar1 + -0x18) = 0x1fa9b7e;
  *(undefined8 *)(lVar1 + -8) = *(undefined8 *)(lVar1 + -0x18);
  *(ulonglong *)(lVar1 + -0x28cf) = uVar2;
  *(ulonglong *)(lVar1 + -0x28d7) = uVar2;
  *(undefined **)(lVar1 + -0x28cf) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14d8f6e56 FUN_14d8f6e56 body=152 status=ok
// SIG undefined FUN_14d8f6e56(void)

void FUN_14d8f6e56(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  undefined8 unaff_retaddr;
  
  FUN_15aff38e0(unaff_retaddr,FUN_15aff38e0,param_3,param_4,*(undefined8 *)(unaff_R13 + -8));
  return;
}



// FUNCTION 14d8f6eef FUN_14d8f6eef body=9 status=ok
// SIG undefined FUN_14d8f6eef(void)

void FUN_14d8f6eef(void)

{
  return;
}



// FUNCTION 14d8f7013 FUN_14d8f7013 body=21 status=ok
// SIG undefined FUN_14d8f7013(void)

void FUN_14d8f7013(void)

{
  return;
}



// FUNCTION 14d8f70d5 FUN_14d8f70d5 body=106 status=ok
// SIG undefined FUN_14d8f70d5(void)

void FUN_14d8f70d5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R15;
  longlong unaff_retaddr;
  undefined8 local_res8;
  
  FUN_15678be1f(*(longlong *)(unaff_retaddr + -0xa0) + unaff_R15,param_2,param_3,local_res8);
  return;
}



// FUNCTION 14d8f7140 FUN_14d8f7140 body=169 status=ok
// SIG undefined FUN_14d8f7140(void)

void FUN_14d8f7140(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_15b5d4cc0(0xffffffffffffffc0,FUN_15b5d4cc0,
                *(ulonglong *)(unaff_RSI + -0x60) + unaff_RBP +
                (*(ulonglong *)(unaff_RSI + -0x60) & unaff_RBP) * -2,
                *(ulonglong *)(unaff_RSI + -0x28) ^ unaff_RBP);
  return;
}



// FUNCTION 14d8f730e FUN_14d8f730e body=22 status=ok
// SIG undefined FUN_14d8f730e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d8f730e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d8f7525 FUN_14d8f7525 body=564 status=ok
// SIG undefined FUN_14d8f7525(void)

/* WARNING: Removing unreachable block (ram,0x00014d8f756b) */
/* WARNING: Removing unreachable block (ram,0x00015b265874) */
/* WARNING: Removing unreachable block (ram,0x00014d8f75bb) */
/* WARNING: Removing unreachable block (ram,0x00014d8f75f1) */
/* WARNING: Removing unreachable block (ram,0x00014d8f75ec) */

void FUN_14d8f7525(longlong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined2 uVar7;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  longlong lVar8;
  longlong unaff_R12;
  ulonglong local_res8;
  undefined8 uStackX_10;
  
  *(undefined8 *)((longlong)&local_res8 + param_3) = unaff_RSI;
  uVar2 = *(undefined8 *)((longlong)&local_res8 + param_3);
  *(ulonglong *)((longlong)&uStackX_10 + param_3) =
       CONCAT71((int7)((ulonglong)*(undefined8 *)((longlong)&uStackX_10 + param_3) >> 8),
                (char)*(undefined8 *)((longlong)&uStackX_10 + param_3) -
                ((byte)*(undefined8 *)(unaff_RDI + -0x60) ^ (byte)param_1));
  *(undefined4 *)((longlong)&uStackX_10 + param_3) = 0xc984efdc;
  *(undefined4 *)((longlong)&uStackX_10 + param_3 + 4) = 0xffffffff;
  *(undefined8 *)((longlong)&uStackX_10 + param_3) = uVar2;
  uVar7 = (undefined2)*(undefined8 *)((longlong)&uStackX_10 + param_3);
  *(undefined2 *)((longlong)&uStackX_10 + param_3 + 6) = uVar7;
  *(undefined2 *)((longlong)&uStackX_10 + param_3 + 6) = uVar7;
  lVar8 = *(longlong *)(unaff_RDI + -0x28);
  uVar2 = *(undefined8 *)(&stack0x00000030 + param_3);
  *(longlong *)((longlong)&uStackX_10 + param_3) = param_1;
  *(longlong *)((longlong)&local_res8 + param_3) = lVar8 + param_1;
  *(longlong *)(&stack0x00000000 + param_3) = unaff_RDI;
  uVar3 = *(undefined8 *)((longlong)&local_res8 + param_3);
  *(code **)((longlong)&local_res8 + param_3) = FUN_15b2658d1;
  uVar5 = FUN_15b147951(1,uVar3);
  uVar1 = *(ulonglong *)(unaff_R12 + -0x40);
  *(ulonglong *)((longlong)&local_res8 + param_3) =
       ((uVar1 - (~uVar5 | uVar1)) + ~uVar5 ^ 0xffffffffffffffff) + uVar1;
  *(ulonglong *)((longlong)&local_res8 + param_3) =
       *(longlong *)((longlong)&local_res8 + param_3) - uVar5;
  uVar4 = *(ulonglong *)((longlong)&local_res8 + param_3);
  *(code **)((longlong)&local_res8 + param_3) = FUN_15b265967;
  uVar6 = FUN_15b21e0dc();
  uVar1 = *(ulonglong *)(unaff_R12 + ((0x1215b893 - (~uVar5 + 2)) - (uVar4 & (~uVar1 | uVar5))));
  lVar8 = uVar1 + uVar6 + (uVar1 & uVar6) * -2;
  *(ulonglong *)((longlong)&uStackX_10 + param_3) = uVar6;
  *(ulonglong *)((longlong)&local_res8 + param_3) = CONCAT71((int7)((ulonglong)uVar2 >> 8),0xfd);
  *(longlong *)((longlong)&local_res8 + param_3) = lVar8;
  *(longlong *)(&stack0x00000000 + param_3) = lVar8;
  *(undefined1 **)((longlong)&local_res8 + param_3) = &LAB_15b265a09;
  FUN_162bbc4a9();
  return;
}



// FUNCTION 14d8f7790 FUN_14d8f7790 body=151 status=ok
// SIG undefined FUN_14d8f7790(void)

void FUN_14d8f7790(void)

{
  return;
}



// FUNCTION 14d8f7978 FUN_14d8f7978 body=148 status=ok
// SIG undefined FUN_14d8f7978(void)

void FUN_14d8f7978(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_160ed8c16(*(ulonglong *)(unaff_R13 + -0x78),
                ~unaff_R15 & *(ulonglong *)(unaff_R13 + -0x78) | unaff_R15,
                ~(in_RAX & (param_3 | unaff_R15)));
  return;
}



// FUNCTION 14d8f7aba FUN_14d8f7aba body=150 status=ok
// SIG undefined FUN_14d8f7aba(void)

void FUN_14d8f7aba(void)

{
  ulonglong uVar1;
  undefined8 unaff_RSI;
  longlong in_R10;
  ulonglong unaff_R15;
  undefined8 local_res18;
  
  uVar1 = *(ulonglong *)(in_R10 + 0x10);
  *(ulonglong *)(in_R10 + 0x10) = ~*(ulonglong *)(in_R10 + 0x10);
  *(ulonglong *)(in_R10 + 0x10) = *(ulonglong *)(in_R10 + 0x10) | unaff_R15;
  *(ulonglong *)(in_R10 + 0x10) = ~((~unaff_R15 | uVar1) & *(ulonglong *)(in_R10 + 0x10));
  *(undefined8 *)(local_res18 + -8) = unaff_RSI;
  *(undefined8 *)(local_res18 + -0x10) = unaff_RSI;
  FUN_15b7d6024();
  return;
}



// FUNCTION 14d8f7c1a FUN_14d8f7c1a body=28 status=ok
// SIG undefined FUN_14d8f7c1a(void)

void FUN_14d8f7c1a(void)

{
  return;
}



// FUNCTION 14d8f7cbb FUN_14d8f7cbb body=421 status=ok
// SIG undefined FUN_14d8f7cbb(void)

/* WARNING: Removing unreachable block (ram,0x00014d8f7d6f) */
/* WARNING: Removing unreachable block (ram,0x00014d8f7d33) */
/* WARNING: Removing unreachable block (ram,0x00014d8f7dca) */

void FUN_14d8f7cbb(undefined8 param_1,undefined8 param_2)

{
  FUN_14de57629(param_1,param_2);
  return;
}



// FUNCTION 14d8f7de5 FUN_14d8f7de5 body=524 status=ok
// SIG undefined FUN_14d8f7de5(void)

/* WARNING: Removing unreachable block (ram,0x000162cf45f8) */
/* WARNING: Removing unreachable block (ram,0x000162cf45fe) */
/* WARNING: Removing unreachable block (ram,0x000162cf4603) */
/* WARNING: Removing unreachable block (ram,0x00014d8f7fa8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8f7de5(void)

{
  longlong lVar1;
  
  FUN_166ae2cd6();
  lVar1 = FUN_160cdf801();
  if (lVar1 == -1 && _DAT_79d36a6b == 0) {
    FUN_16628fe3b();
    return;
  }
  FUN_162cf4549();
  return;
}



// FUNCTION 14d8f8047 FUN_14d8f8047 body=136 status=ok
// SIG undefined FUN_14d8f8047(void)

void FUN_14d8f8047(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x16222f62d)(param_1,0x16222f62d,param_3,0x6dd046cf);
  return;
}



// FUNCTION 14d8f81f6 FUN_14d8f81f6 body=19 status=ok
// SIG undefined FUN_14d8f81f6(void)

void FUN_14d8f81f6(void)

{
  return;
}



// FUNCTION 14d8f8360 FUN_14d8f8360 body=6 status=ok
// SIG undefined FUN_14d8f8360(void)

void FUN_14d8f8360(void)

{
  return;
}



// FUNCTION 14d8f846e FUN_14d8f846e body=141 status=ok
// SIG undefined FUN_14d8f846e(void)

void FUN_14d8f846e(undefined8 param_1)

{
  FUN_161e34bc9(param_1);
  return;
}



// FUNCTION 14d8f84fc FUN_14d8f84fc body=358 status=ok
// SIG undefined FUN_14d8f84fc(void)

/* WARNING: Removing unreachable block (ram,0x00014d8f8617) */
/* WARNING: Removing unreachable block (ram,0x00014d8f861d) */
/* WARNING: Removing unreachable block (ram,0x00014d8f8756) */
/* WARNING: Removing unreachable block (ram,0x00014d8f8762) */
/* WARNING: Removing unreachable block (ram,0x0001619b98ee) */
/* WARNING: Removing unreachable block (ram,0x000161a8c2a2) */
/* WARNING: Removing unreachable block (ram,0x00014d8f8595) */

void FUN_14d8f84fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_stack_00000008;
  ulonglong local_res10;
  ulonglong local_res20;
  
  *(undefined8 *)((~(local_res20 & in_stack_00000008) & (local_res20 | in_stack_00000008)) - 8) =
       0x1e9f366;
  FUN_165c7153c((~in_stack_00000008 | local_res10) & (~local_res10 | in_stack_00000008) ^
                0xffffffffffffffff,param_2,param_3);
  return;
}



// FUNCTION 14d8f861d FUN_14d8f861d body=385 status=ok
// SIG undefined FUN_14d8f861d(void)

/* WARNING: Removing unreachable block (ram,0x00014d8f8762) */

void FUN_14d8f861d(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_160bb22d6();
  FUN_15b5a5df3(*(ulonglong *)(unaff_R13 + -0x78) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) * -2,
                ~(*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15));
  FUN_14e23521d();
  return;
}



// FUNCTION 14d8f87ef FUN_14d8f87ef body=859 status=ok
// SIG undefined FUN_14d8f87ef(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d8f8973) */
/* WARNING: Removing unreachable block (ram,0x00014d8f8979) */
/* WARNING: Removing unreachable block (ram,0x00014d8f8aaf) */
/* WARNING: Removing unreachable block (ram,0x00014d7acdb1) */

void FUN_14d8f87ef(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  
  FUN_1662d8b78(param_1,~(*(ulonglong *)(unaff_RDI + -0x68) & param_1) &
                        (~param_1 & *(ulonglong *)(unaff_RDI + -0x68) | param_1),param_3,param_4,
                *(undefined8 *)(unaff_RDI + -0x90));
  FUN_162074a31(0xffffffffffffff60);
  return;
}



// FUNCTION 14d8f8a18 FUN_14d8f8a18 body=197 status=ok
// SIG undefined FUN_14d8f8a18(void)

void FUN_14d8f8a18(void)

{
  longlong unaff_R13;
  longlong unaff_R15;
  
  FUN_161a44123(*(longlong *)(unaff_R13 + -0x48) + unaff_R15,&stack0x00000000);
  FUN_166a62797();
  return;
}



// FUNCTION 14d8f8ade FUN_14d8f8ade body=341 status=ok
// SIG undefined FUN_14d8f8ade(void)

/* WARNING: Removing unreachable block (ram,0x00014d8f8b3c) */

void FUN_14d8f8ade(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 == 0x62c81) {
    FUN_166a62797(param_1,&DAT_14d7aeb5a,param_3,param_4);
    return;
  }
  if (param_2 == 0x62d31) {
    FUN_166a62797(param_1,0x14d7c40dd,param_3,param_4);
    return;
  }
  (*(code *)0x1622902bc)(param_1,param_2);
  return;
}



// FUNCTION 14d8f8c6e FUN_14d8f8c6e body=308 status=ok
// SIG undefined FUN_14d8f8c6e(void)

/* WARNING: Removing unreachable block (ram,0x00014d8f8d59) */
/* WARNING: Removing unreachable block (ram,0x00014d8f8d03) */

void FUN_14d8f8c6e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  ulonglong unaff_RSI;
  
  FUN_164b0ab75(param_1,unaff_RSI ^ in_RAX,param_3,param_4);
  FUN_156bc4974();
  FUN_165ba284c();
  return;
}



// FUNCTION 14d8f8e2d FUN_14d8f8e2d body=166 status=ok
// SIG undefined FUN_14d8f8e2d(void)

/* WARNING: Removing unreachable block (ram,0x00014d8f8ec9) */
/* WARNING: Removing unreachable block (ram,0x00014d8f8ed5) */

void FUN_14d8f8e2d(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_162538910(param_1,0xf231b12,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                *(ulonglong *)(unaff_RDI + -0x60) + param_1 +
                (*(ulonglong *)(unaff_RDI + -0x60) & param_1) * -2);
  return;
}



// FUNCTION 14d8f8ed5 FUN_14d8f8ed5 body=173 status=ok
// SIG undefined FUN_14d8f8ed5(void)

void FUN_14d8f8ed5(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  longlong unaff_retaddr;
  
  *(undefined4 *)(&stack0x00000000 + param_3) = 0;
  FUN_1660dabb7(*(ulonglong *)(unaff_R13 + -0x78) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) * -2,FUN_1660dabb7,
                unaff_retaddr + *(longlong *)(unaff_R13 + -0x88) ^ unaff_R15);
  return;
}



// FUNCTION 14d8f933a FUN_14d8f933a body=178 status=ok
// SIG undefined FUN_14d8f933a(void)

undefined8 FUN_14d8f933a(void)

{
  return 0x165a3f444;
}



// FUNCTION 14d8f93f1 FUN_14d8f93f1 body=2 status=ok
// SIG undefined FUN_14d8f93f1(void)

void FUN_14d8f93f1(void)

{
  return;
}



// FUNCTION 14d8f9487 FUN_14d8f9487 body=30 status=ok
// SIG undefined FUN_14d8f9487(void)

void FUN_14d8f9487(void)

{
  ulonglong unaff_RSI;
  longlong in_R10;
  
  *(longlong *)(in_R10 + 8) = -*(longlong *)(in_R10 + 8);
  *(longlong *)(in_R10 + 8) = *(longlong *)(in_R10 + 8) - ~unaff_RSI;
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d8f9530 FUN_14d8f9530 body=81 status=ok
// SIG undefined FUN_14d8f9530(void)

void FUN_14d8f9530(void)

{
  return;
}



// FUNCTION 14d8f965d FUN_14d8f965d body=9 status=ok
// SIG undefined FUN_14d8f965d(void)

void FUN_14d8f965d(void)

{
  return;
}



// FUNCTION 14d8f96d0 FUN_14d8f96d0 body=89 status=ok
// SIG undefined FUN_14d8f96d0(void)

void FUN_14d8f96d0(void)

{
  return;
}



// FUNCTION 14d8f9a36 FUN_14d8f9a36 body=124 status=ok
// SIG undefined FUN_14d8f9a36(void)

void FUN_14d8f9a36(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  thunk_FUN_164b4fc86(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d8f9aba FUN_14d8f9aba body=81 status=ok
// SIG undefined FUN_14d8f9aba(void)

void FUN_14d8f9aba(void)

{
  return;
}



// FUNCTION 14d8f9b42 FUN_14d8f9b42 body=578 status=ok
// SIG undefined FUN_14d8f9b42(void)

/* WARNING: Removing unreachable block (ram,0x0001618da1e6) */
/* WARNING: Removing unreachable block (ram,0x0001618da1ec) */
/* WARNING: Removing unreachable block (ram,0x0001618da1f1) */
/* WARNING: Removing unreachable block (ram,0x0001618da27f) */
/* WARNING: Removing unreachable block (ram,0x0001618da285) */
/* WARNING: Removing unreachable block (ram,0x0001618da29f) */
/* WARNING: Removing unreachable block (ram,0x0001574aa0f0) */
/* WARNING: Removing unreachable block (ram,0x00014d8f9bcc) */
/* WARNING: Removing unreachable block (ram,0x00014d8f9c3b) */
/* WARNING: Removing unreachable block (ram,0x00014d8f9c3d) */
/* WARNING: Removing unreachable block (ram,0x00014d8f9c43) */
/* WARNING: Removing unreachable block (ram,0x0001618da15d) */
/* WARNING: Removing unreachable block (ram,0x0001618da1e1) */
/* WARNING: Removing unreachable block (ram,0x00014d8f9c49) */

void FUN_14d8f9b42(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res8;
  
  FUN_16299337e(local_res8,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d8f9d0b FUN_14d8f9d0b body=157 status=ok
// SIG undefined FUN_14d8f9d0b(void)

/* WARNING: Removing unreachable block (ram,0x00014d8f9d34) */
/* WARNING: Removing unreachable block (ram,0x00014d8f9daa) */

void FUN_14d8f9d0b(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  if (CARRY8(*(ulonglong *)(unaff_R12 + -0x28),in_RAX)) {
    (*(code *)0x1621ad2bd)
              (~(*(ulonglong *)(unaff_R12 + -0x58) & in_RAX |
                ~(*(ulonglong *)(unaff_R12 + -0x58) | in_RAX)),0xffffffffeeffb97f,
               ~(*(ulonglong *)(unaff_R12 + -0x80) & in_RAX) &
               (*(ulonglong *)(unaff_R12 + -0x80) | in_RAX),
               *(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
    return;
  }
  FUN_156d47dba();
  return;
}



// FUNCTION 14d8f9daa FUN_14d8f9daa body=147 status=ok
// SIG undefined FUN_14d8f9daa(void)

void FUN_14d8f9daa(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  thunk_FUN_161352789(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                      *(ulonglong *)(unaff_R12 + -0x78) & in_RAX);
  return;
}



// FUNCTION 14d8f9ed6 FUN_14d8f9ed6 body=177 status=ok
// SIG undefined FUN_14d8f9ed6(void)

void FUN_14d8f9ed6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  char in_AL;
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 unaff_retaddr;
  ulonglong local_res20;
  
  uVar1 = local_res20 ^ unaff_RBP;
                    /* WARNING (jumptable): Read-only address (ram,0x00014d7a76a3) is written */
                    /* WARNING: Read-only address (ram,0x00014d7a76a3) is written */
  LOCK();
  if (in_AL == '\0') {
    uRam000000014d7a76a3 = (undefined1)param_1;
  }
  UNLOCK();
  *(undefined8 *)(uVar1 - 8) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x20) = unaff_RDI;
  *(undefined8 *)(uVar1 - 0x28) = unaff_RDI;
  *(undefined1 **)(uVar1 - 0x20) = &LAB_14d8f9f89;
  (*(code *)&LAB_166cc770c)(param_1,param_2,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14d8fa0a3 FUN_14d8fa0a3 body=332 status=ok
// SIG undefined FUN_14d8fa0a3(void)

void FUN_14d8fa0a3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  FUN_156a358dc(param_1,unaff_retaddr,param_3);
  FUN_162187f23(0x4eaf8154);
  return;
}



// FUNCTION 14d8fa1f0 FUN_14d8fa1f0 body=14 status=ok
// SIG undefined FUN_14d8fa1f0(void)

void FUN_14d8fa1f0(void)

{
  undefined8 unaff_retaddr;
  
  FUN_1611d49fb(unaff_retaddr);
  return;
}



// FUNCTION 14d8fa27c FUN_14d8fa27c body=139 status=ok
// SIG undefined FUN_14d8fa27c(void)

void FUN_14d8fa27c(undefined8 param_1)

{
  FUN_1617f60c7(param_1);
  return;
}



// FUNCTION 14d8fa363 FUN_14d8fa363 body=214 status=ok
// SIG undefined FUN_14d8fa363(void)

/* WARNING: Removing unreachable block (ram,0x00014d8fa38e) */

void FUN_14d8fa363(void)

{
  ulonglong unaff_R15;
  
  if (0xfffffffffffffffd < unaff_R15) {
    FUN_1613c1ec9();
    return;
  }
  FUN_1613c1ec9();
  return;
}



// FUNCTION 14d8fa43f FUN_14d8fa43f body=534 status=ok
// SIG undefined FUN_14d8fa43f(void)

/* WARNING: Removing unreachable block (ram,0x00014d8fa545) */
/* WARNING: Removing unreachable block (ram,0x00014d8fa54b) */
/* WARNING: Removing unreachable block (ram,0x00014d8fa4c5) */
/* WARNING: Removing unreachable block (ram,0x00014d8fa4cb) */
/* WARNING: Removing unreachable block (ram,0x00014e058b66) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8fa43f(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  longlong in_R10;
  
  FUN_1649c8c71(param_1);
  *(undefined4 *)(FUN_1649c8c71 + in_R10) = 0;
  if (-1 < (int)((param_4 - (~param_4 & 0x116927ed | param_4)) + 0x116927ed)) {
    FUN_164b265d8();
    return;
  }
  FUN_164b265d8();
  return;
}



// FUNCTION 14d8fa54b FUN_14d8fa54b body=151 status=ok
// SIG undefined FUN_14d8fa54b(void)

void FUN_14d8fa54b(undefined8 param_1,undefined8 param_2)

{
  FUN_15671b9b4(0x1a3ffbf,param_2);
  return;
}



// FUNCTION 14d8fa677 FUN_14d8fa677 body=141 status=ok
// SIG undefined FUN_14d8fa677(void)

void FUN_14d8fa677(void)

{
  short in_AX;
  undefined8 unaff_RSI;
  short unaff_R12W;
  undefined8 unaff_R13;
  short *unaff_R14;
  undefined8 local_res8;
  undefined8 uStackX_20;
  longlong in_stack_00000030;
  
  *unaff_R14 = -0x101 - ~(unaff_R12W - in_AX);
  *(undefined8 *)(in_stack_00000030 + -8) = uStackX_20;
  *(undefined8 *)(in_stack_00000030 + -0x10) = unaff_R13;
  *(undefined8 *)(in_stack_00000030 + -0x18) = unaff_RSI;
  *(undefined8 *)(in_stack_00000030 + -0x10) = *(undefined8 *)(in_stack_00000030 + -0x18);
  *(undefined8 *)(in_stack_00000030 + -0x18) = *(undefined8 *)(in_stack_00000030 + -0x18);
  *(code **)(in_stack_00000030 + -0x10) = FUN_14d8fa704;
  (*(code *)0x165d66e5c)(local_res8);
  return;
}



// FUNCTION 14d8fa704 FUN_14d8fa704 body=381 status=ok
// SIG undefined FUN_14d8fa704(void)

void FUN_14d8fa704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong in_stack_00000010;
  
  FUN_15663b6b6(param_1,FUN_15663b6b6,unaff_retaddr,param_4,(in_stack_00000010 & unaff_R15) << 1);
  return;
}



// FUNCTION 14d8fa882 FUN_14d8fa882 body=424 status=ok
// SIG undefined FUN_14d8fa882(void)

/* WARNING: Removing unreachable block (ram,0x00014d8fa909) */
/* WARNING: Removing unreachable block (ram,0x00014d8fa915) */
/* WARNING: Removing unreachable block (ram,0x00014d8fa984) */
/* WARNING: Removing unreachable block (ram,0x00014d8fa988) */

void FUN_14d8fa882(undefined8 param_1,undefined8 param_2)

{
  FUN_165ef2fff(param_1,param_2);
  return;
}



// FUNCTION 14d8fa999 FUN_14d8fa999 body=143 status=ok
// SIG undefined FUN_14d8fa999(void)

/* WARNING: Removing unreachable block (ram,0x00014d8faa2a) */
/* WARNING: Removing unreachable block (ram,0x00014d8fab44) */
/* WARNING: Removing unreachable block (ram,0x00014d8fab59) */
/* WARNING: Removing unreachable block (ram,0x00016674c06c) */
/* WARNING: Removing unreachable block (ram,0x00014d8fab5f) */
/* WARNING: Removing unreachable block (ram,0x00014d8fab65) */

undefined8 FUN_14d8fa999(ulonglong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  uVar1 = (*(code *)0x16626b268)
                    (param_1,(~param_1 | *(ulonglong *)(unaff_RDI + -0x80)) + param_1,
                     ~((-~param_1 - ((param_1 & ~*(ulonglong *)(unaff_RDI + -0x70)) + 2)) + 1) &
                     (*(ulonglong *)(unaff_RDI + -0x70) | param_1),
                     *(ulonglong *)(unaff_RDI + -0x60) + param_1 +
                     (*(ulonglong *)(unaff_RDI + -0x60) & param_1) * -2);
  return uVar1;
}



// FUNCTION 14d8faa2a FUN_14d8faa2a body=478 status=ok
// SIG undefined FUN_14d8faa2a(void)

/* WARNING: Removing unreachable block (ram,0x00014d8fab5f) */
/* WARNING: Removing unreachable block (ram,0x00014d8fab65) */

ulonglong FUN_14d8faa2a(ulonglong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                       ulonglong param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 in_AL;
  ulonglong uVar4;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong in_R11;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong local_res18;
  
  param_4 = param_4 - unaff_RBX;
  uVar2 = *(ulonglong *)(&stack0x00000010 + param_4);
  *(ulonglong *)(&stack0x00000010 + param_4) = ~*(ulonglong *)(&stack0x00000010 + param_4);
  *(ulonglong *)(&stack0x00000010 + param_4) =
       *(ulonglong *)(&stack0x00000010 + param_4) | unaff_R15;
  *(ulonglong *)(&stack0x00000010 + param_4) =
       -1 - ((~unaff_R15 | uVar2) & *(ulonglong *)(&stack0x00000010 + param_4));
  uVar2 = ~(param_5 & unaff_R15) & (param_5 | unaff_R15);
  LOCK();
  UNLOCK();
  DAT_14d7aae3b = in_AL;
  *(undefined8 *)(uVar2 - 8) = unaff_retaddr;
  *(undefined8 *)(uVar2 - 0x10) = unaff_retaddr;
  *(undefined8 *)(uVar2 - 0x18) = 0x14d8faab8;
  uVar4 = FUN_15650d7bf();
  puVar1 = (ulonglong *)((uVar2 - 8) + (unaff_RBP - param_2));
  uVar2 = *(ulonglong *)(unaff_R13 + -0x28);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ uVar2;
  uVar2 = *(ulonglong *)(unaff_R13 + -0x30);
  *puVar1 = local_res18;
  uVar3 = *puVar1;
  *puVar1 = puVar1[1];
  *(int *)((longlong)puVar1 + 4) = 0;
  *(int *)puVar1 = (int)*puVar1;
  if ((int)*puVar1 < 0) {
    *(int *)((longlong)puVar1 + 4) = -0x4918da9;
    *(uint *)((longlong)puVar1 + 4) = *(uint *)((longlong)puVar1 + 4) ^ 0x4918da8;
  }
  *puVar1 = uVar4;
  puVar1[-1] = ~((~local_res18 | uVar2) & (~uVar2 | uVar3));
  puVar1[-1] = *(undefined8 *)(unaff_R13 + -0x68);
  uVar2 = *puVar1;
  *puVar1 = in_R11;
  puVar1[-1] = unaff_R13;
  puVar1[-2] = param_3;
  uVar3 = puVar1[-1];
  *puVar1 = param_1;
  *puVar1 = uVar3;
  puVar1[-1] = uVar3;
  puVar1[-2] = uVar3;
  *puVar1 = (ulonglong)&DAT_16674c112;
  puVar1[-1] = (ulonglong)&LAB_14ddfadb2;
  return uVar2;
}



// FUNCTION 14d8fab65 FUN_14d8fab65 body=200 status=ok
// SIG undefined FUN_14d8fab65(void)

void FUN_14d8fab65(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong in_RAX;
  longlong lVar2;
  undefined8 in_R11;
  undefined8 unaff_R15;
  undefined8 local_res8;
  ulonglong local_res20;
  
  lVar2 = local_res20 + in_RAX + (local_res20 & in_RAX) * -2;
  *(undefined8 *)(lVar2 + -8) = param_4;
  *(undefined8 *)(lVar2 + -0x10) = unaff_R15;
  uVar1 = *(undefined8 *)(lVar2 + -0x10);
  *(undefined1 **)(lVar2 + -0x10) = &LAB_1667f698a;
  *(undefined1 **)(lVar2 + -0x18) = &LAB_1667f698a;
  *(undefined8 *)(lVar2 + -0x20) = in_R11;
  *(undefined8 *)(lVar2 + -0x28) = uVar1;
  *(undefined8 *)(lVar2 + -0x30) = uVar1;
  *(undefined1 **)(lVar2 + -0x28) = &LAB_14d8fac30;
  FUN_1667f692d(param_1,local_res8,param_3,*(undefined8 *)(lVar2 + -8));
  return;
}



// FUNCTION 14d8fad5d FUN_14d8fad5d body=186 status=ok
// SIG undefined FUN_14d8fad5d(void)

undefined8 FUN_14d8fad5d(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_R12;
  undefined8 local_res10;
  
  uVar1 = *(ulonglong *)(&stack0xfffffffffea57181 + unaff_R12);
  *(ulonglong *)(&stack0xfffffffffea57181 + unaff_R12) =
       ~*(ulonglong *)(&stack0xfffffffffea57181 + unaff_R12);
  *(ulonglong *)(&stack0xfffffffffea57181 + unaff_R12) =
       *(ulonglong *)(&stack0xfffffffffea57181 + unaff_R12) | in_RAX;
  *(ulonglong *)(&stack0xfffffffffea57181 + unaff_R12) =
       -1 - ((in_RAX ^ 0xffffffffffffffff | uVar1) &
            *(ulonglong *)(&stack0xfffffffffea57181 + unaff_R12));
  return local_res10;
}



// FUNCTION 14d8fae1a FUN_14d8fae1a body=21 status=ok
// SIG undefined FUN_14d8fae1a(void)

void FUN_14d8fae1a(void)

{
  return;
}



// FUNCTION 14d8faf0b FUN_14d8faf0b body=146 status=ok
// SIG undefined FUN_14d8faf0b(void)

/* WARNING: Removing unreachable block (ram,0x00014d8fb17f) */
/* WARNING: Removing unreachable block (ram,0x00014d8fb0e4) */
/* WARNING: Removing unreachable block (ram,0x00014d8fb16e) */
/* WARNING: Removing unreachable block (ram,0x00014d8fb174) */
/* WARNING: Removing unreachable block (ram,0x00014d8fb169) */
/* WARNING: Removing unreachable block (ram,0x00016495438f) */
/* WARNING: Removing unreachable block (ram,0x000164954410) */
/* WARNING: Removing unreachable block (ram,0x000164954416) */
/* WARNING: Removing unreachable block (ram,0x000164954500) */
/* WARNING: Removing unreachable block (ram,0x0001649544fb) */
/* WARNING: Removing unreachable block (ram,0x000164954503) */
/* WARNING: Removing unreachable block (ram,0x00016495440b) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */

void FUN_14d8faf0b(void)

{
  ulonglong in_RAX;
  longlong unaff_RBX;
  ulonglong uVar1;
  longlong unaff_R12;
  ulonglong unaff_retaddr;
  
  *(undefined4 *)(&stack0x00000000 + unaff_RBX) = 0;
  uVar1 = unaff_retaddr ^ *(ulonglong *)(unaff_R12 + -0x30);
  FUN_1662abb2f(~((~in_RAX | *(ulonglong *)(unaff_R12 + -0x58)) &
                 (~*(ulonglong *)(unaff_R12 + -0x58) | in_RAX)),
                ~(*(ulonglong *)(unaff_R12 + -0x78) & in_RAX),
                *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,uVar1 + in_RAX + (uVar1 & in_RAX) * -2);
  FUN_156f2ca39();
  FUN_16495438f();
  return;
}



// FUNCTION 14d8faf9e FUN_14d8faf9e body=479 status=ok
// SIG undefined FUN_14d8faf9e(void)

/* WARNING: Removing unreachable block (ram,0x00014d8fb17f) */
/* WARNING: Removing unreachable block (ram,0x00014d8fb0e4) */
/* WARNING: Removing unreachable block (ram,0x00014d8fb16e) */
/* WARNING: Removing unreachable block (ram,0x00014d8fb174) */
/* WARNING: Removing unreachable block (ram,0x00014d8fb169) */
/* WARNING: Removing unreachable block (ram,0x00016495438f) */
/* WARNING: Removing unreachable block (ram,0x000164954410) */
/* WARNING: Removing unreachable block (ram,0x000164954416) */
/* WARNING: Removing unreachable block (ram,0x000164954500) */
/* WARNING: Removing unreachable block (ram,0x0001649544fb) */
/* WARNING: Removing unreachable block (ram,0x000164954503) */
/* WARNING: Removing unreachable block (ram,0x00016495440b) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */

void FUN_14d8faf9e(void)

{
  FUN_156f2ca39();
  FUN_16495438f();
  return;
}



// FUNCTION 14d8fb17f FUN_14d8fb17f body=163 status=ok
// SIG undefined FUN_14d8fb17f(void)

void FUN_14d8fb17f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 local_res10;
  longlong local_res20;
  
  *(undefined8 *)(local_res20 + -8) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = in_R10;
  *(undefined1 **)(local_res20 + -0x20) = &LAB_15b3caf10;
  *(undefined8 *)(local_res20 + -0x28) = param_3;
  (*(code *)0x15b3caed8)(local_res10,param_2,0x88bf5676);
  return;
}



// FUNCTION 14d8fb2a5 FUN_14d8fb2a5 body=203 status=ok
// SIG undefined FUN_14d8fb2a5(void)

undefined8 FUN_14d8fb2a5(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_RAX;
  longlong unaff_RBX;
  undefined8 unaff_RDI;
  undefined8 unaff_R13;
  longlong local_res8;
  
  *(undefined4 *)(&stack0xfffffffff0fd599b + local_res8) = 0xb7ecda;
  *(undefined4 *)(&stack0xfffffffff0fd599f + local_res8) = 0;
  lVar1 = *(longlong *)
           (&stack0xfffffffff0456ce1 +
           *(longlong *)(&stack0xfffffffff0fd599b + local_res8) + local_res8);
  *(undefined8 *)(&stack0xfffffffff0fd599b + local_res8) = in_RAX;
  *(undefined8 *)(&stack0xfffffffff0fd5993 + local_res8) = unaff_RDI;
  *(longlong *)(&stack0xfffffffff0fd59bb + local_res8) = unaff_RBX - lVar1;
  uVar2 = *(undefined8 *)(&stack0xfffffffff0fd5993 + local_res8);
  uVar3 = *(undefined8 *)(&stack0xfffffffff0fd599b + local_res8);
  *(ushort *)(&stack0xfffffffff0fd59b3 + local_res8) =
       *(ushort *)(&stack0xfffffffff0fd59b3 + local_res8) & 0xfeff;
  lVar1 = *(longlong *)(&stack0xfffffffff0fd59bb + local_res8);
  *(undefined8 *)(lVar1 + -8) = param_2;
  *(undefined8 *)(lVar1 + -0x10) = uVar2;
  *(undefined8 *)(lVar1 + -0x10) = 0x16ec7ab04;
  *(undefined4 *)(lVar1 + -0x18) = 0x81c35b72;
  *(undefined4 *)(lVar1 + -0x14) = 0xffffffff;
  *(undefined8 *)(lVar1 + -0x20) = unaff_R13;
  *(undefined8 *)(lVar1 + -0x28) = unaff_R13;
  *(undefined8 *)(lVar1 + -0x30) = unaff_R13;
  *(code **)(lVar1 + -0x20) = FUN_14d8fb373;
  *(undefined8 *)(lVar1 + -0x28) = 0x16263530f;
  return uVar3;
}



// FUNCTION 14d8fb373 FUN_14d8fb373 body=141 status=ok
// SIG undefined FUN_14d8fb373(void)

void FUN_14d8fb373(void)

{
  return;
}



// FUNCTION 14d8fb411 FUN_14d8fb411 body=132 status=ok
// SIG undefined FUN_14d8fb411(void)

/* WARNING: Removing unreachable block (ram,0x000161aa9f93) */
/* WARNING: Removing unreachable block (ram,0x00014d8fb497) */

void FUN_14d8fb411(undefined8 param_1)

{
  longlong unaff_RDI;
  ulonglong unaff_R15;
  
  FUN_156cbaa3f(param_1,*(undefined8 *)(unaff_RDI + -0x90));
  FUN_1668ce469(unaff_R15,~unaff_R15);
  return;
}



// FUNCTION 14d8fb497 FUN_14d8fb497 body=141 status=ok
// SIG undefined FUN_14d8fb497(void)

void FUN_14d8fb497(void)

{
  (*(code *)&LAB_1657ca644)();
  return;
}



// FUNCTION 14d8fb5b0 thunk_FUN_14d8fb5b6 body=5 status=ok
// SIG undefined thunk_FUN_14d8fb5b6(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000161352bce) */
/* WARNING: Removing unreachable block (ram,0x00014d8fb62d) */
/* WARNING: Removing unreachable block (ram,0x00014d8fb633) */
/* WARNING: Removing unreachable block (ram,0x00014d8fb6a7) */
/* WARNING: Removing unreachable block (ram,0x00014d7a8129) */
/* WARNING: Removing unreachable block (ram,0x00015b12ef1c) */
/* WARNING: Removing unreachable block (ram,0x000161352bbb) */
/* WARNING: Removing unreachable block (ram,0x00014dd528cf) */
/* WARNING: Removing unreachable block (ram,0x000161352cc7) */
/* WARNING: Removing unreachable block (ram,0x000161352ccd) */
/* WARNING: Removing unreachable block (ram,0x000161352cd2) */

void thunk_FUN_14d8fb5b6(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  void *pvVar3;
  ushort uVar4;
  undefined8 unaff_R13;
  bool bVar5;
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  
  pvVar3 = ProcessEnvironmentBlock;
  uVar1 = uStackX_18 ^ param_1;
  uVar2 = ~(uStackX_20 & param_1) & (uStackX_20 | param_1);
  uStackX_18._0_2_ = (ushort)uVar1;
  uVar4 = ((ushort)uStackX_18 | 0x100) - 0x100;
  bVar5 = (uVar4 & 1) != 0;
  *(undefined8 *)(uVar2 - 8) = unaff_R13;
  *(undefined8 *)(uVar2 - 0x10) = unaff_R13;
  *(ulonglong *)(uVar2 - 0x18) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)bVar5 |
       (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(void **)(uVar2 - 0x20) = pvVar3;
  *(undefined4 *)(uVar2 - 0x20) = 0x36a04e16;
  *(undefined4 *)(uVar2 - 0x1c) = 0;
  if (bVar5) {
    FUN_16535141a();
    return;
  }
  FUN_16535141a();
  return;
}



// FUNCTION 14d8fb5b6 FUN_14d8fb5b6 body=243 status=ok
// SIG undefined FUN_14d8fb5b6(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000161352bce) */
/* WARNING: Removing unreachable block (ram,0x00014d8fb62d) */
/* WARNING: Removing unreachable block (ram,0x00014d8fb633) */
/* WARNING: Removing unreachable block (ram,0x00014d8fb6a7) */
/* WARNING: Removing unreachable block (ram,0x00014d7a8129) */
/* WARNING: Removing unreachable block (ram,0x00015b12ef1c) */
/* WARNING: Removing unreachable block (ram,0x000161352bbb) */
/* WARNING: Removing unreachable block (ram,0x00014dd528cf) */
/* WARNING: Removing unreachable block (ram,0x000161352cc7) */
/* WARNING: Removing unreachable block (ram,0x000161352ccd) */
/* WARNING: Removing unreachable block (ram,0x000161352cd2) */

void FUN_14d8fb5b6(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  void *pvVar3;
  ushort uVar4;
  undefined8 unaff_R13;
  bool bVar5;
  undefined8 local_res18;
  undefined8 local_res20;
  
  pvVar3 = ProcessEnvironmentBlock;
  uVar1 = local_res18 ^ param_1;
  uVar2 = ~(local_res20 & param_1) & (local_res20 | param_1);
  local_res18._0_2_ = (ushort)uVar1;
  uVar4 = ((ushort)local_res18 | 0x100) - 0x100;
  bVar5 = (uVar4 & 1) != 0;
  *(undefined8 *)(uVar2 - 8) = unaff_R13;
  *(undefined8 *)(uVar2 - 0x10) = unaff_R13;
  *(ulonglong *)(uVar2 - 0x18) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)bVar5 |
       (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(void **)(uVar2 - 0x20) = pvVar3;
  *(undefined4 *)(uVar2 - 0x20) = 0x36a04e16;
  *(undefined4 *)(uVar2 - 0x1c) = 0;
  if (bVar5) {
    FUN_16535141a();
    return;
  }
  FUN_16535141a();
  return;
}



// FUNCTION 14d8fb6ad FUN_14d8fb6ad body=104 status=ok
// SIG undefined FUN_14d8fb6ad(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d8fb6ad(undefined8 param_1)

{
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 unaff_R12;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_RSI;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = param_1;
  *(undefined **)(local_res18 + -8) = &DAT_14d8fb732;
  *(undefined8 *)(local_res18 + -0x18) = unaff_R12;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d8fb755 FUN_14d8fb755 body=340 status=ok
// SIG undefined FUN_14d8fb755(void)

/* WARNING: Removing unreachable block (ram,0x000166d9c92c) */
/* WARNING: Removing unreachable block (ram,0x00014d8fb800) */

void FUN_14d8fb755(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  uVar1 = ~*(ulonglong *)(unaff_RSI + -0x58) | unaff_RBP ^ 0xffffffffffffffff;
  if (-1 < (longlong)uVar1) {
    FUN_1659fce76(~((~unaff_RBP | *(ulonglong *)(unaff_RSI + -0x38)) &
                   (~*(ulonglong *)(unaff_RSI + -0x38) | unaff_RBP)),
                  *(ulonglong *)(unaff_RSI + -0x58) + unaff_RBP + ~uVar1 * -2,param_3);
    return;
  }
  FUN_166730df1();
  return;
}



// FUNCTION 14d8fb9e5 FUN_14d8fb9e5 body=54 status=ok
// SIG undefined FUN_14d8fb9e5(void)

void FUN_14d8fb9e5(undefined8 param_1,longlong param_2)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  (*(code *)&LAB_16260c927)
            (*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,*(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX,
             ~(*(ulonglong *)(unaff_R12 + param_2) & in_RAX) &
             (*(ulonglong *)(unaff_R12 + param_2) | in_RAX));
  return;
}



// FUNCTION 14d8fba91 FUN_14d8fba91 body=88 status=ok
// SIG undefined FUN_14d8fba91(void)

void FUN_14d8fba91(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014d8fbae7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14d8fbb4a FUN_14d8fbb4a body=122 status=ok
// SIG undefined FUN_14d8fbb4a(void)

void FUN_14d8fbb4a(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1619a4aa0(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14d8fbbc7 FUN_14d8fbbc7 body=160 status=ok
// SIG undefined FUN_14d8fbbc7(void)

void FUN_14d8fbbc7(undefined8 param_1,longlong param_2)

{
  ulonglong in_R10;
  
  FUN_162b15484(*(ulonglong *)(param_2 + -0x48) + in_R10 +
                (*(ulonglong *)(param_2 + -0x48) & in_R10) * -2);
  return;
}



// FUNCTION 14d8fbc68 FUN_14d8fbc68 body=294 status=ok
// SIG undefined FUN_14d8fbc68(void)

void FUN_14d8fbc68(void)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong unaff_RDI;
  undefined8 in_R9;
  undefined8 unaff_R14;
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
  ushort local_10;
  
  puVar1 = *(undefined8 **)(unaff_RDI + -0x90);
  uVar2 = *(ulonglong *)(unaff_RDI + -8);
  FUN_1574c0a30();
  local_10 = (ushort)uVar2;
  local_10 = local_10 - (local_10 & 0x100);
  bVar13 = (local_10 & 0x4000) != 0;
  bVar12 = (local_10 & 0x800) != 0;
  bVar11 = (local_10 & 0x200) != 0;
  bVar10 = (local_10 & 0x100) != 0;
  bVar9 = (local_10 & 0x80) != 0;
  bVar8 = (local_10 & 0x40) != 0;
  bVar7 = (local_10 & 0x10) != 0;
  bVar6 = (local_10 & 4) != 0;
  bVar5 = (local_10 & 1) != 0;
  bVar17 = (uVar2 & 0x200000) != 0;
  bVar14 = (uVar2 & 0x40000) != 0;
  bVar16 = 0;
  bVar15 = 0;
  pcVar3 = (code *)swi(0x2e);
  uVar4 = (*pcVar3)();
  *puVar1 = unaff_R14;
  puVar1[-1] = unaff_R14;
  puVar1[-2] = (ulonglong)(bVar13 & 1) * 0x4000 | (ulonglong)(bVar12 & 1) * 0x800 |
               (ulonglong)((local_10 & 0x400) != 0) * 0x400 | (ulonglong)(bVar11 & 1) * 0x200 |
               (ulonglong)(bVar10 & 1) * 0x100 | (ulonglong)(bVar9 & 1) * 0x80 |
               (ulonglong)(bVar8 & 1) * 0x40 | (ulonglong)(bVar7 & 1) * 0x10 |
               (ulonglong)(bVar6 & 1) * 4 | (ulonglong)(bVar5 & 1) |
               (ulonglong)(bVar17 & 1) * 0x200000 | (ulonglong)(bVar16 & 1) * 0x100000 |
               (ulonglong)(bVar15 & 1) * 0x80000 | (ulonglong)(bVar14 & 1) * 0x40000;
  puVar1[-3] = uVar4;
  *(undefined4 *)(puVar1 + -3) = 0x15cbeb41;
  *(undefined4 *)((longlong)puVar1 + -0x14) = 0;
  uVar2 = puVar1[-3];
  uVar18 = puVar1[-2];
  puVar1[-2] = (ulonglong)((uVar18 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar18 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar18 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar18 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar18 & 0x100) != 0) * 0x100 | (ulonglong)((uVar18 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar18 & 0x40) != 0) * 0x40 | (ulonglong)((uVar18 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar18 & 4) != 0) * 4 | (ulonglong)((uVar18 & 1) != 0) |
               (ulonglong)((uVar18 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar18 & 0x40000) != 0) * 0x40000;
  puVar1[-3] = in_R9;
  *(undefined4 *)(puVar1 + -4) = 0x122861f7;
  *(undefined4 *)((longlong)puVar1 + -0x1c) = 0;
  puVar1[-4] = uVar2 ^ 0x10815d6e;
  FUN_162b28946();
  return;
}



// FUNCTION 14d8fbf8d FUN_14d8fbf8d body=370 status=ok
// SIG undefined FUN_14d8fbf8d(void)

/* WARNING: Removing unreachable block (ram,0x00014d8fc196) */
/* WARNING: Removing unreachable block (ram,0x00014d8fc19c) */
/* WARNING: Removing unreachable block (ram,0x00015708e489) */
/* WARNING: Removing unreachable block (ram,0x00015708e4e7) */
/* WARNING: Removing unreachable block (ram,0x00014d8fc0f0) */
/* WARNING: Removing unreachable block (ram,0x00014d8fc101) */
/* WARNING: Removing unreachable block (ram,0x00014d8fc191) */
/* WARNING: Removing unreachable block (ram,0x00014d8fc0f6) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffff8 : 0x00016284d54f */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8fbf8d(undefined8 param_1)

{
  longlong lVar1;
  longlong unaff_RDI;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  byte bVar3;
  
  uVar2 = 0x7a034818;
  lVar1 = *(longlong *)(unaff_RDI + -0x60);
  bVar3 = 1;
  FUN_16558c8df(param_1,lVar1,0x7a034818,0xffffffffffffffff);
  (*(code *)0x160f25f89)
            (~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
              (~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15)),
             ~(*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) &
             (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15),
             lVar1 + unaff_R15 + (ulonglong)bVar3 + (uVar2 & unaff_R15) * -2);
  return;
}



// FUNCTION 14d8fc101 FUN_14d8fc101 body=155 status=ok
// SIG undefined FUN_14d8fc101(void)

/* WARNING: Removing unreachable block (ram,0x00014d8fc196) */
/* WARNING: Removing unreachable block (ram,0x00014d8fc19c) */
/* WARNING: Removing unreachable block (ram,0x00015708e489) */
/* WARNING: Removing unreachable block (ram,0x00015708e4e7) */

void FUN_14d8fc101(void)

{
  FUN_15708e489();
  return;
}



// FUNCTION 14d8fc19c FUN_14d8fc19c body=96 status=ok
// SIG undefined FUN_14d8fc19c(void)

void FUN_14d8fc19c(void)

{
  return;
}



// FUNCTION 14d8fc2fb FUN_14d8fc2fb body=109 status=ok
// SIG undefined FUN_14d8fc2fb(void)

void FUN_14d8fc2fb(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_15b3d5987(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d8fc588 FUN_14d8fc588 body=150 status=ok
// SIG undefined FUN_14d8fc588(void)

longlong FUN_14d8fc588(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return *(ulonglong *)(unaff_R13 + -0x38) + unaff_R15 +
         ~(~*(ulonglong *)(unaff_R13 + -0x38) | ~unaff_R15) * -2;
}



// FUNCTION 14d8fc61e FUN_14d8fc61e body=112 status=ok
// SIG undefined FUN_14d8fc61e(void)

void FUN_14d8fc61e(undefined8 param_1,undefined8 param_2,ulonglong *param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong unaff_RBP;
  longlong unaff_RDI;
  longlong in_R11;
  longlong unaff_R14;
  
  *(longlong *)(param_4 + 0x18) = unaff_RBP + *(longlong *)(param_4 + 0x18);
  FUN_156b01327();
  *param_3 = 0x2edcc330;
  *param_3 = *param_3 ^ 0x2edcc330;
  *param_3 = *param_3 + unaff_R14;
  param_3[-1] = param_1;
  *param_3 = *param_3 << 3;
  *param_3 = in_R11 + *param_3;
  *param_3 = *param_3 + 0xfa162db;
  uVar1 = *(ulonglong *)(unaff_RDI + -0x60);
  *param_3 = uVar1;
  (*(code *)0x166d28a3b)(param_3[-1],8,uVar1,*param_3);
  return;
}



// FUNCTION 14d8fc691 FUN_14d8fc691 body=169 status=ok
// SIG undefined FUN_14d8fc691(void)

void FUN_14d8fc691(undefined8 param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  longlong in_R11;
  longlong unaff_R14;
  
  *param_3 = 0x2edcc330;
  *param_3 = *param_3 ^ 0x2edcc330;
  *param_3 = *param_3 + unaff_R14;
  param_3[-1] = param_1;
  *param_3 = *param_3 << 3;
  *param_3 = in_R11 + *param_3;
  *param_3 = *param_3 + 0xfa162db;
  uVar1 = *(ulonglong *)(unaff_RDI + -0x60);
  *param_3 = uVar1;
  (*(code *)0x166d28a3b)(param_3[-1],8,uVar1,*param_3);
  return;
}



// FUNCTION 14d8fc86e FUN_14d8fc86e body=33 status=ok
// SIG undefined FUN_14d8fc86e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d8fc88b) overlaps instruction at (ram,0x00014d8fc88a)
    */
/* WARNING: Removing unreachable block (ram,0x00014d8fc9e2) */
/* WARNING: Removing unreachable block (ram,0x00014d8fc9e8) */
/* WARNING: Removing unreachable block (ram,0x00014d8fca2b) */
/* WARNING: Removing unreachable block (ram,0x00014d8fca30) */
/* WARNING: Removing unreachable block (ram,0x00014d8fc95f) */
/* WARNING: Removing unreachable block (ram,0x00014d8fc88a) */

void FUN_14d8fc86e(void)

{
  undefined8 uStackX_8;
  
  (*(code *)0x160d072eb)();
  (*(code *)0x15639abb8)(uStackX_8);
  return;
}



// FUNCTION 14d8fc95f FUN_14d8fc95f body=456 status=ok
// SIG undefined FUN_14d8fc95f(void)

/* WARNING: Removing unreachable block (ram,0x00014d8fc9e2) */
/* WARNING: Removing unreachable block (ram,0x00014d8fc9e8) */
/* WARNING: Removing unreachable block (ram,0x00014d8fca2b) */
/* WARNING: Removing unreachable block (ram,0x00014d8fca30) */

void FUN_14d8fc95f(void)

{
  return;
}



// FUNCTION 14d8fc9e8 FUN_14d8fc9e8 body=205 status=ok
// SIG undefined FUN_14d8fc9e8(void)

void FUN_14d8fc9e8(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined8 in_R10;
  undefined8 unaff_R15;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 unaff_retaddr;
  undefined1 local_20 [8];
  
  puVar1 = local_20;
  if ((in_TF & 1) == 0) {
    puVar1 = &stack0xffffffffffffffe8;
  }
  *(undefined8 *)(puVar1 + -8) = in_R10;
  *(ulonglong *)(puVar1 + -8) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | 0x80 | (ulonglong)(in_AF & 1) * 0x10 | 4 |
       (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  *(ulonglong *)(puVar1 + -0x10) = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  *(undefined8 *)(puVar1 + -0x18) = unaff_R15;
  *(undefined4 *)(puVar1 + -0x20) = 0xf096abdd;
  *(undefined4 *)(puVar1 + -0x1c) = 0xffffffff;
  *(undefined8 *)(puVar1 + -0x20) = 0x171d16258;
  *(undefined8 *)(puVar1 + -0x10) = unaff_retaddr;
  *(undefined8 *)(puVar1 + -0x18) = unaff_retaddr;
  *(undefined1 **)(puVar1 + -0x10) = &LAB_14d8fcabe;
  return;
}



// FUNCTION 14d8fcdea FUN_14d8fcdea body=196 status=ok
// SIG undefined FUN_14d8fcdea(void)

/* WARNING: Removing unreachable block (ram,0x00014d8fcea2) */
/* WARNING: Removing unreachable block (ram,0x00014d8fceb0) */
/* WARNING: Removing unreachable block (ram,0x00016553ccb0) */

void FUN_14d8fcdea(void)

{
  uint unaff_EDI;
  uint *in_R11;
  
  *in_R11 = ~unaff_EDI;
  FUN_16553ccb0();
  return;
}



// FUNCTION 14d8fceb0 FUN_14d8fceb0 body=146 status=ok
// SIG undefined FUN_14d8fceb0(void)

void FUN_14d8fceb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_166d4f3d8(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d8fcf46 FUN_14d8fcf46 body=34 status=ok
// SIG undefined FUN_14d8fcf46(void)

void FUN_14d8fcf46(void)

{
  undefined8 local_res8;
  
  FUN_14d85d504(local_res8);
  return;
}



// FUNCTION 14d8fd0f3 FUN_14d8fd0f3 body=148 status=ok
// SIG undefined FUN_14d8fd0f3(void)

void FUN_14d8fd0f3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_16189b4e9(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d8fd591 FUN_14d8fd591 body=171 status=ok
// SIG undefined FUN_14d8fd591(void)

void FUN_14d8fd591(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong unaff_RDI;
  
  (*(code *)&LAB_16265f768)(param_1,*(ulonglong *)(unaff_RDI + -0x28) | param_1,param_3 ^ param_1);
  return;
}



// FUNCTION 14d8fd63d FUN_14d8fd63d body=148 status=ok
// SIG undefined FUN_14d8fd63d(void)

/* WARNING: Removing unreachable block (ram,0x00014d8fd757) */
/* WARNING: Removing unreachable block (ram,0x00014d8fd75d) */
/* WARNING: Removing unreachable block (ram,0x00014d8fd805) */
/* WARNING: Removing unreachable block (ram,0x00014d8fd80a) */
/* WARNING: Removing unreachable block (ram,0x00014d8fd810) */
/* WARNING: Removing unreachable block (ram,0x00014d8fd8b3) */
/* WARNING: Removing unreachable block (ram,0x00014d8fd90a) */
/* WARNING: Removing unreachable block (ram,0x00014d8fd917) */
/* WARNING: Removing unreachable block (ram,0x00014d8fd91c) */
/* WARNING: Removing unreachable block (ram,0x000156e71382) */
/* WARNING: Removing unreachable block (ram,0x00014d8fd6d1) */

undefined8 FUN_14d8fd63d(void)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong unaff_RBX;
  longlong in_R9;
  longlong local_res8 [4];
  
  local_res8[1] =
       *(longlong *)((longlong)local_res8 + unaff_RBX) + in_RAX + (local_res8[1] & in_RAX) * -2;
  if (local_res8[1] == 0) {
    uVar1 = FUN_156fabfba();
    return uVar1;
  }
  local_res8[2] = ~(local_res8[2] & in_RAX) & (local_res8[2] | in_RAX);
  local_res8[3] = local_res8[3] + in_RAX + (local_res8[3] & in_RAX) * -2;
  local_res8[0] = in_R9;
  uVar1 = FUN_1616f458d();
  return uVar1;
}



// FUNCTION 14d8fd6d1 FUN_14d8fd6d1 body=375 status=ok
// SIG undefined FUN_14d8fd6d1(void)

/* WARNING: Removing unreachable block (ram,0x00014d8fd757) */
/* WARNING: Removing unreachable block (ram,0x00014d8fd75d) */
/* WARNING: Removing unreachable block (ram,0x00014d8fd805) */
/* WARNING: Removing unreachable block (ram,0x00014d8fd80a) */
/* WARNING: Removing unreachable block (ram,0x00014d8fd810) */
/* WARNING: Removing unreachable block (ram,0x00014d8fd8b3) */
/* WARNING: Removing unreachable block (ram,0x00014d8fd90a) */
/* WARNING: Removing unreachable block (ram,0x00014d8fd917) */
/* WARNING: Removing unreachable block (ram,0x00014d8fd91c) */
/* WARNING: Removing unreachable block (ram,0x000156e71382) */

undefined8
FUN_14d8fd6d1(undefined8 param_1,undefined8 param_2,undefined8 param_3,ushort *param_4,
             ulonglong param_5,undefined8 *param_6)

{
  ushort *puVar1;
  ushort uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 unaff_RSI;
  undefined8 in_R11;
  ushort unaff_R12W;
  undefined8 unaff_R13;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  byte bVar8;
  bool bVar9;
  byte bVar10;
  bool bVar11;
  byte bVar12;
  bool bVar13;
  byte bVar14;
  bool bVar15;
  byte bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  byte bVar20;
  bool bVar21;
  byte bVar22;
  bool bVar23;
  byte bVar24;
  bool bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  bool bVar29;
  ulonglong uVar30;
  undefined8 uStackX_18;
  undefined8 local_res20;
  
  uVar2 = *param_4;
  *param_4 = 0;
  *param_4 = *param_4 ^ (unaff_R12W | uVar2) - 0x100;
  bVar22 = (param_5 & 0x4000) != 0;
  bVar20 = (param_5 & 0x800) != 0;
  bVar18 = (param_5 & 0x400) != 0;
  bVar16 = (param_5 & 0x200) != 0;
  bVar14 = (param_5 & 0x100) != 0;
  bVar12 = (param_5 & 0x80) != 0;
  bVar10 = (param_5 & 0x40) != 0;
  bVar8 = (param_5 & 0x10) != 0;
  bVar6 = (param_5 & 4) != 0;
  bVar5 = (param_5 & 1) != 0;
  bVar28 = (param_5 & 0x200000) != 0;
  bVar24 = (param_5 & 0x40000) != 0;
  bVar27 = 0;
  bVar26 = 0;
  pcVar3 = (code *)swi(0x2e);
  (*pcVar3)(param_1,param_2);
  *param_6 = unaff_RSI;
  param_6[-1] = unaff_RSI;
  param_6[-2] = (ulonglong)(bVar22 & 1) * 0x4000 | (ulonglong)(bVar20 & 1) * 0x800 |
                (ulonglong)bVar18 * 0x400 | (ulonglong)(bVar16 & 1) * 0x200 |
                (ulonglong)(bVar14 & 1) * 0x100 | (ulonglong)(bVar12 & 1) * 0x80 |
                (ulonglong)(bVar10 & 1) * 0x40 | (ulonglong)(bVar8 & 1) * 0x10 |
                (ulonglong)(bVar6 & 1) * 4 | (ulonglong)(bVar5 & 1) |
                (ulonglong)(bVar28 & 1) * 0x200000 | (ulonglong)(bVar27 & 1) * 0x100000 |
                (ulonglong)(bVar26 & 1) * 0x80000 | (ulonglong)(bVar24 & 1) * 0x40000;
  param_6[-3] = (ulonglong)(bVar22 & 1) * 0x4000 | (ulonglong)(bVar20 & 1) * 0x800 |
                (ulonglong)bVar18 * 0x400 | (ulonglong)(bVar16 & 1) * 0x200 |
                (ulonglong)(bVar14 & 1) * 0x100 | (ulonglong)(bVar12 & 1) * 0x80 |
                (ulonglong)(bVar10 & 1) * 0x40 | (ulonglong)(bVar8 & 1) * 0x10 |
                (ulonglong)(bVar6 & 1) * 4 | (ulonglong)(bVar5 & 1) |
                (ulonglong)(bVar28 & 1) * 0x200000 | (ulonglong)(bVar27 & 1) * 0x100000 |
                (ulonglong)(bVar26 & 1) * 0x80000 | (ulonglong)(bVar24 & 1) * 0x40000;
  param_6[-3] = in_R11;
  uVar30 = param_6[-2];
  bVar23 = (uVar30 & 0x4000) != 0;
  bVar21 = (uVar30 & 0x800) != 0;
  bVar19 = (uVar30 & 0x400) != 0;
  bVar17 = (uVar30 & 0x200) != 0;
  bVar15 = (uVar30 & 0x100) != 0;
  bVar13 = (uVar30 & 0x80) != 0;
  bVar11 = (uVar30 & 0x40) != 0;
  bVar9 = (uVar30 & 0x10) != 0;
  bVar7 = (uVar30 & 4) != 0;
  bVar18 = (uVar30 & 1) != 0;
  bVar29 = (uVar30 & 0x200000) != 0;
  bVar25 = (uVar30 & 0x40000) != 0;
  param_6[-2] = (ulonglong)bVar23 * 0x4000 | (ulonglong)bVar21 * 0x800 | (ulonglong)bVar19 * 0x400 |
                (ulonglong)bVar17 * 0x200 | (ulonglong)bVar15 * 0x100 | (ulonglong)bVar13 * 0x80 |
                (ulonglong)bVar11 * 0x40 | (ulonglong)bVar9 * 0x10 | (ulonglong)bVar7 * 4 |
                (ulonglong)bVar18 | (ulonglong)bVar29 * 0x200000 | (ulonglong)bVar25 * 0x40000;
  param_6[-3] = unaff_R13;
  param_6[-4] = (ulonglong)bVar23 * 0x4000 | (ulonglong)bVar21 * 0x800 | (ulonglong)bVar19 * 0x400 |
                (ulonglong)bVar17 * 0x200 | (ulonglong)bVar15 * 0x100 | (ulonglong)bVar13 * 0x80 |
                (ulonglong)bVar11 * 0x40 | (ulonglong)bVar9 * 0x10 | (ulonglong)bVar7 * 4 |
                (ulonglong)bVar18 | (ulonglong)bVar29 * 0x200000 | (ulonglong)bVar25 * 0x40000;
  param_6[-4] = param_3;
  uVar30 = param_6[-2];
  *param_6 = 0xfebb0;
  param_6[-0x43d] =
       (ulonglong)((uVar30 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar30 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar30 & 0x400) != 0) * 0x400 | (ulonglong)((uVar30 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar30 & 0x100) != 0) * 0x100 | (ulonglong)((uVar30 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar30 & 0x40) != 0) * 0x40 | (ulonglong)((uVar30 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar30 & 4) != 0) * 4 | (ulonglong)((uVar30 & 1) != 0) |
       (ulonglong)((uVar30 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar30 & 0x40000) != 0) * 0x40000;
  param_6[-0x43e] = local_res20;
  param_6[-0x43f] = param_1;
  puVar1 = (ushort *)(param_6 + -0x43d);
  *puVar1 = ~*puVar1;
  param_6[-0x440] = uStackX_18;
  uVar2 = *puVar1;
  *puVar1 = ~*puVar1;
  *puVar1 = (~(uVar2 & 0x100) + 0x100) - *puVar1;
  uVar4 = FUN_16133aa9b();
  return uVar4;
}



// FUNCTION 14d8fd810 FUN_14d8fd810 body=298 status=ok
// SIG undefined FUN_14d8fd810(void)

void FUN_14d8fd810(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong unaff_R13;
  bool bVar1;
  
  bVar1 = *(longlong *)(unaff_R13 + -8) == 0;
  FUN_16145a016();
  if (bVar1) {
    FUN_166a62797(param_1,&DAT_14d7c2743,param_3);
    return;
  }
  if (param_2 == 0xb5a94) {
    FUN_166a62797(param_1,0x14d7c25d6);
    return;
  }
  FUN_1649d38fa();
  return;
}



// FUNCTION 14d8fd9cf FUN_14d8fd9cf body=578 status=ok
// SIG undefined FUN_14d8fd9cf(void)

/* WARNING: Removing unreachable block (ram,0x00015784ef1a) */
/* WARNING: Removing unreachable block (ram,0x00014d8fda5a) */
/* WARNING: Removing unreachable block (ram,0x00014d8fda60) */
/* WARNING: Removing unreachable block (ram,0x00015784ef14) */

void FUN_14d8fd9cf(void)

{
  return;
}



// FUNCTION 14d8fdd5f FUN_14d8fdd5f body=195 status=ok
// SIG undefined FUN_14d8fdd5f(void)

void FUN_14d8fdd5f(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
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
  undefined8 *local_res8;
  
  FUN_15b0e0c0a(FUN_15b0e0c0a,unaff_RSI - ~unaff_RBP & (~param_2 | param_1) ^ 0xffffffffffffffff);
  bVar10 = (param_1 & 0x4000) != 0;
  bVar9 = (param_1 & 0x800) != 0;
  bVar8 = (param_1 & 0x200) != 0;
  bVar7 = (param_1 & 0x100) != 0;
  bVar6 = (param_1 & 0x80) != 0;
  bVar5 = (param_1 & 0x40) != 0;
  bVar4 = (param_1 & 0x10) != 0;
  bVar3 = (param_1 & 4) != 0;
  bVar2 = (param_1 & 1) != 0;
  bVar14 = (param_1 & 0x200000) != 0;
  bVar11 = (param_1 & 0x40000) != 0;
  bVar13 = 0;
  bVar12 = 0;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)();
  *local_res8 = param_4;
  local_res8[-1] = param_4;
  local_res8[-2] =
       (ulonglong)(bVar10 & 1) * 0x4000 | (ulonglong)(bVar9 & 1) * 0x800 |
       (ulonglong)((param_1 & 0x400) != 0) * 0x400 | (ulonglong)(bVar8 & 1) * 0x200 |
       (ulonglong)(bVar7 & 1) * 0x100 | (ulonglong)(bVar6 & 1) * 0x80 |
       (ulonglong)(bVar5 & 1) * 0x40 | (ulonglong)(bVar4 & 1) * 0x10 | (ulonglong)(bVar3 & 1) * 4 |
       (ulonglong)(bVar2 & 1) | (ulonglong)(bVar14 & 1) * 0x200000 |
       (ulonglong)(bVar13 & 1) * 0x100000 | (ulonglong)(bVar12 & 1) * 0x80000 |
       (ulonglong)(bVar11 & 1) * 0x40000;
  *local_res8 = 0x3c50a32;
  FUN_165c7153c();
  return;
}



// FUNCTION 14d8fdefe FUN_14d8fdefe body=169 status=ok
// SIG undefined FUN_14d8fdefe(void)

void FUN_14d8fdefe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_157483036(param_1,FUN_157483036,param_3);
  return;
}



// FUNCTION 14d8fe041 FUN_14d8fe041 body=130 status=ok
// SIG undefined FUN_14d8fe041(void)

void FUN_14d8fe041(void)

{
  undefined8 *unaff_RSI;
  undefined8 unaff_RDI;
  
  *unaff_RSI = unaff_RDI;
  FUN_14d8283fe();
  return;
}



// FUNCTION 14d8fe21e FUN_14d8fe21e body=389 status=ok
// SIG undefined FUN_14d8fe21e(void)

/* WARNING: Removing unreachable block (ram,0x00014d8fe235) */
/* WARNING: Removing unreachable block (ram,0x00014d8fe296) */

void FUN_14d8fe21e(undefined8 param_1,char param_2)

{
  char local_res8;
  
  FUN_165b531f8(0x9d,param_2 + local_res8);
  return;
}



// FUNCTION 14d8fe32b FUN_14d8fe32b body=168 status=ok
// SIG undefined FUN_14d8fe32b(void)

void FUN_14d8fe32b(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  bool in_ZF;
  
  if (in_ZF) {
    FUN_165e93f27();
    return;
  }
  if (param_4 != 0x120ee6) {
    return;
  }
  FUN_165e93f27(param_1,param_2,param_3,0x14d7c513a);
  return;
}



// FUNCTION 14d8fe634 FUN_14d8fe634 body=306 status=ok
// SIG undefined FUN_14d8fe634(void)

/* WARNING: Removing unreachable block (ram,0x00014d8fe6c3) */
/* WARNING: Removing unreachable block (ram,0x00014d8fe6c9) */
/* WARNING: Removing unreachable block (ram,0x00014d8fe6ce) */

undefined8 FUN_14d8fe634(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d8fe768 FUN_14d8fe768 body=299 status=ok
// SIG undefined FUN_14d8fe768(void)

/* WARNING: Removing unreachable block (ram,0x00014d8fe803) */

void FUN_14d8fe768(ulonglong param_1)

{
  longlong unaff_RDI;
  
  if (!CARRY8(~(~*(ulonglong *)(unaff_RDI + -0xa0) & param_1),param_1)) {
    FUN_1565d9236();
    return;
  }
  FUN_164971101();
  (*(code *)0x14db0876d)(0x14db0876d);
  return;
}



// FUNCTION 14d8fe895 FUN_14d8fe895 body=96 status=ok
// SIG undefined FUN_14d8fe895(void)

void FUN_14d8fe895(void)

{
  undefined8 uVar1;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  undefined8 unaff_retaddr;
  longlong lStackX_10;
  
  *(undefined8 *)(lStackX_10 + -8) = unaff_RSI;
  *(undefined8 *)(lStackX_10 + -0x10) = unaff_retaddr;
  uVar1 = *(undefined8 *)(lStackX_10 + -0x10);
  *(undefined8 *)(lStackX_10 + -0x10) = unaff_R14;
  *(undefined8 *)(lStackX_10 + -0x18) = unaff_R14;
  *(undefined8 *)(lStackX_10 + -0x10) = *(undefined8 *)(lStackX_10 + -8);
  *(undefined8 *)(lStackX_10 + -0x18) = unaff_R12;
  *(undefined8 *)(lStackX_10 + -0x20) = unaff_RBP;
  *(undefined1 **)(lStackX_10 + -8) = &LAB_14d8fe916;
  thunk_FUN_15b642ca5(uVar1);
  return;
}



// FUNCTION 14d8fe92b FUN_14d8fe92b body=120 status=ok
// SIG undefined FUN_14d8fe92b(void)

void FUN_14d8fe92b(void)

{
  return;
}



// FUNCTION 14d8fe9a5 FUN_14d8fe9a5 body=140 status=ok
// SIG undefined FUN_14d8fe9a5(void)

void FUN_14d8fe9a5(ulonglong param_1)

{
  longlong lVar1;
  longlong unaff_RBP;
  
  *(ulonglong *)(unaff_RBP + 0x10) = ~*(ulonglong *)(unaff_RBP + 0x10);
  lVar1 = *(longlong *)(unaff_RBP + 0x10);
  *(ulonglong *)(unaff_RBP + 0x10) = *(ulonglong *)(unaff_RBP + 0x10) & param_1;
  *(ulonglong *)(unaff_RBP + 0x10) = (lVar1 + param_1) - *(longlong *)(unaff_RBP + 0x10);
  FUN_1658443a1();
  return;
}



// FUNCTION 14d8fecba FUN_14d8fecba body=141 status=ok
// SIG undefined FUN_14d8fecba(void)

/* WARNING: Removing unreachable block (ram,0x00014d8fed38) */
/* WARNING: Removing unreachable block (ram,0x00014d8fed44) */
/* WARNING: Removing unreachable block (ram,0x00014d8fed49) */

void FUN_14d8fecba(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)&LAB_161894219)
            (0xcf04d4b,*(ulonglong *)(unaff_R13 + -0x38) | unaff_R15,
             *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
             (-~unaff_R15 - (~*(ulonglong *)(unaff_R13 + -0x60) + 2)) +
             (*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) * -2);
  return;
}



// FUNCTION 14d8fed49 FUN_14d8fed49 body=319 status=ok
// SIG undefined FUN_14d8fed49(void)

void FUN_14d8fed49(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  longlong lVar3;
  longlong unaff_R12;
  undefined8 unaff_R15;
  ulonglong local_res20;
  
  uVar2 = *(ulonglong *)(unaff_R12 + -0x38);
  lVar3 = *(ulonglong *)(unaff_R12 + -0x60) + in_RAX +
          (*(ulonglong *)(unaff_R12 + -0x60) & in_RAX) * -2;
  FUN_1622df47d();
  uVar1 = ~(local_res20 & param_1) & (local_res20 | param_1);
  *(undefined8 *)(uVar1 - 8) = unaff_RBX;
  *(longlong *)(uVar1 - 0x10) = lVar3;
  *(ulonglong *)(uVar1 - 0x18) = uVar2 ^ in_RAX;
  *(undefined8 *)(uVar1 - 0x20) = unaff_RDI;
  *(undefined8 *)(uVar1 - 0x18) = unaff_R15;
  *(undefined8 *)(uVar1 - 0x20) = unaff_R15;
  *(undefined8 *)(uVar1 - 0x28) = unaff_R15;
  *(undefined1 **)(uVar1 - 0x18) = &LAB_14d8fee8a;
  *(undefined8 *)(uVar1 - 0x20) = 0x162ccbd17;
  return;
}



// FUNCTION 14d8ff048 FUN_14d8ff048 body=134 status=ok
// SIG undefined FUN_14d8ff048(void)

void FUN_14d8ff048(undefined8 param_1)

{
  FUN_1659460e4(param_1);
  return;
}



// FUNCTION 14d8ff0d1 FUN_14d8ff0d1 body=132 status=ok
// SIG undefined FUN_14d8ff0d1(void)

void FUN_14d8ff0d1(longlong param_1)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  
  uVar1 = *(ulonglong *)(param_1 + -0x50);
  FUN_162394e05(param_1,-1 - ((0xffffffffffffffff - uVar1 & (unaff_RBX ^ 0xffffffffffffffff) | uVar1
                              ) & (~uVar1 | unaff_RBX)),*(ulonglong *)(param_1 + -0x38) | unaff_RBX)
  ;
  return;
}



// FUNCTION 14d8ff1ec FUN_14d8ff1ec body=947 status=ok
// SIG undefined FUN_14d8ff1ec(void)

/* WARNING: Removing unreachable block (ram,0x00014d8ff29e) */
/* WARNING: Removing unreachable block (ram,0x00014d8ff329) */
/* WARNING: Removing unreachable block (ram,0x00014d8ff32f) */
/* WARNING: Removing unreachable block (ram,0x000160d3f8a5) */
/* WARNING: Removing unreachable block (ram,0x000160d3f8d3) */
/* WARNING: Removing unreachable block (ram,0x000160d3f931) */
/* WARNING: Removing unreachable block (ram,0x000160d3f937) */
/* WARNING: Removing unreachable block (ram,0x000160d3f92c) */
/* WARNING: Removing unreachable block (ram,0x0001660b548d) */
/* WARNING: Removing unreachable block (ram,0x0001660b557b) */
/* WARNING: Removing unreachable block (ram,0x0001660b5580) */
/* WARNING: Removing unreachable block (ram,0x0001660b5586) */
/* WARNING: Removing unreachable block (ram,0x00015b26f7eb) */
/* WARNING: Removing unreachable block (ram,0x00014d8ff28e) */

void FUN_14d8ff1ec(void)

{
  FUN_162585762();
  return;
}



// FUNCTION 14d8ff3c6 FUN_14d8ff3c6 body=183 status=ok
// SIG undefined FUN_14d8ff3c6(void)

void FUN_14d8ff3c6(void)

{
  FUN_15b76d62d();
  return;
}



// FUNCTION 14d8ff524 FUN_14d8ff524 body=138 status=ok
// SIG undefined FUN_14d8ff524(void)

/* WARNING: Removing unreachable block (ram,0x0001617b2dbe) */
/* WARNING: Removing unreachable block (ram,0x0001617b2db3) */
/* WARNING: Removing unreachable block (ram,0x00014d8ff6d4) */

undefined8
FUN_14d8ff524(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5,undefined8 param_6,undefined8 param_7,ulonglong param_8)

{
  ushort *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  undefined1 in_R11B;
  code *pcVar9;
  ulonglong unaff_R13;
  undefined8 unaff_R14;
  undefined8 in_stack_00000010;
  ulonglong local_res18;
  longlong local_res20;
  
  uVar8 = *(ulonglong *)((longlong)&local_res18 + unaff_RDI);
  *(ulonglong *)((longlong)&local_res18 + unaff_RDI) =
       *(ulonglong *)((longlong)&local_res18 + unaff_RDI) ^ 0xffffffffffffffff;
  *(ulonglong *)((longlong)&local_res18 + unaff_RDI) =
       *(ulonglong *)((longlong)&local_res18 + unaff_RDI) | param_1;
  *(ulonglong *)((longlong)&local_res18 + unaff_RDI) =
       ~((~param_1 | uVar8) & *(ulonglong *)((longlong)&local_res18 + unaff_RDI));
  local_res20 = CONCAT62(local_res20._2_6_,~(~(ushort)local_res20 | 0x100));
  pcVar9 = FUN_14e17f36b;
  uVar8 = local_res18;
  local_res18._0_1_ = in_R11B;
  lVar6 = FUN_14e17f36b();
  *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) | unaff_R13;
  *(ulonglong *)(lVar6 + 0x10) = ~*(ulonglong *)(lVar6 + 0x10);
  puVar2 = (undefined8 *)(param_8 ^ uVar8);
  LOCK();
  DAT_14d7bdf97 = (undefined1)local_res18;
  UNLOCK();
  puVar2[-1] = pcVar9;
  puVar2[-2] = pcVar9;
  pcVar9 = FUN_1574b90f1;
  puVar2[-3] = 0x14d8ff63e;
  uVar7 = FUN_1574b90f1();
  uVar4 = puVar2[-2];
  puVar2[-2] = uVar7;
  puVar2[-3] = unaff_RSI;
  uVar7 = *(undefined8 *)
           (local_res20 +
           ~(0xffffffffffffffff - ~(~(ulonglong)pcVar9 | 0x5329cef4) &
            (param_2 | 0xffffffffacd6310b)));
  puVar2[-1] = param_6;
  puVar2[1] = uVar7;
  uVar7 = puVar2[-1];
  *puVar2 = puVar2[-2];
  puVar2[-1] = puVar2[-3];
  uVar5 = puVar2[-1];
  puVar2[-1] = *(undefined8 *)(local_res20 + -0xa0);
  if (-1 < local_res20 + -0xa0) {
    uVar3 = *puVar2;
    *puVar2 = unaff_R14;
    puVar2[-1] = uVar7;
    puVar2[-2] = uVar7;
    *(undefined1 *)(puVar2 + -2) = 0xf3;
    puVar2[1] = puVar2[1] ^ param_5;
    puVar2[2] = puVar2[2] ^ param_5;
    puVar2[3] = puVar2[3] ^ param_5;
    uVar7 = puVar2[1];
    puVar2[1] = param_4;
    *puVar2 = uVar5;
    puVar2[-1] = uVar4;
    *(undefined4 *)(puVar2 + -2) = 0x51b88fc;
    *(undefined4 *)((longlong)puVar2 - 0xc) = 0;
    lVar6 = puVar2[-2];
    puVar2[-2] = uVar7;
    puVar1 = (ushort *)((longlong)puVar2 + lVar6 + -0x51b88ec);
    *puVar1 = (*puVar1 | 0x100) - 0x100;
    lVar6 = puVar2[3];
    *(undefined8 *)(lVar6 + -8) = 0x2335340;
    *(undefined8 *)(lVar6 + -0x10) = in_stack_00000010;
    *(undefined8 *)(lVar6 + -0x18) = in_stack_00000010;
    *(undefined **)(lVar6 + -0x10) = &DAT_16564c584;
    return uVar3;
  }
  uVar7 = FUN_1617b2d2d();
  return uVar7;
}



// FUNCTION 14d8ff5b1 FUN_14d8ff5b1 body=352 status=ok
// SIG undefined FUN_14d8ff5b1(void)

/* WARNING: Removing unreachable block (ram,0x0001617b2dbe) */
/* WARNING: Removing unreachable block (ram,0x0001617b2db3) */
/* WARNING: Removing unreachable block (ram,0x00014d8ff6d4) */

undefined8
FUN_14d8ff5b1(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  ushort *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong in_RAX;
  undefined8 uVar7;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  code *pcVar8;
  ulonglong unaff_R13;
  undefined8 unaff_R14;
  undefined1 unaff_retaddr;
  longlong in_stack_00000008;
  ulonglong uStackX_10;
  undefined8 local_res18;
  
  *(ulonglong *)(in_RAX + 0x10) = *(ulonglong *)(in_RAX + 0x10) | unaff_R13;
  *(ulonglong *)(in_RAX + 0x10) = ~*(ulonglong *)(in_RAX + 0x10);
  puVar2 = (undefined8 *)(param_5 ^ param_1);
  LOCK();
  UNLOCK();
  DAT_14d7bdf97 = unaff_retaddr;
  puVar2[-1] = in_R11;
  puVar2[-2] = in_R11;
  pcVar8 = FUN_1574b90f1;
  puVar2[-3] = 0x14d8ff63e;
  uVar7 = FUN_1574b90f1();
  uVar4 = puVar2[-2];
  puVar2[-2] = uVar7;
  puVar2[-3] = unaff_RSI;
  uVar7 = *(undefined8 *)
           (in_stack_00000008 +
           ~(0xffffffffffffffff - ~(~(ulonglong)pcVar8 | 0x5329cef4) &
            (param_2 | 0xffffffffacd6310b)));
  puVar2[-1] = local_res18;
  puVar2[1] = uVar7;
  uVar7 = puVar2[-1];
  *puVar2 = puVar2[-2];
  puVar2[-1] = puVar2[-3];
  uVar5 = puVar2[-1];
  puVar2[-1] = *(undefined8 *)(in_stack_00000008 + -0xa0);
  if (-1 < in_stack_00000008 + -0xa0) {
    uVar3 = *puVar2;
    *puVar2 = unaff_R14;
    puVar2[-1] = uVar7;
    puVar2[-2] = uVar7;
    *(undefined1 *)(puVar2 + -2) = 0xf3;
    puVar2[1] = puVar2[1] ^ uStackX_10;
    puVar2[2] = puVar2[2] ^ uStackX_10;
    puVar2[3] = puVar2[3] ^ uStackX_10;
    uVar7 = puVar2[1];
    puVar2[1] = param_4;
    *puVar2 = uVar5;
    puVar2[-1] = uVar4;
    *(undefined4 *)(puVar2 + -2) = 0x51b88fc;
    *(undefined4 *)((longlong)puVar2 - 0xc) = 0;
    lVar6 = puVar2[-2];
    puVar2[-2] = uVar7;
    puVar1 = (ushort *)((longlong)puVar2 + lVar6 + -0x51b88ec);
    *puVar1 = (*puVar1 | 0x100) - 0x100;
    lVar6 = puVar2[3];
    *(undefined8 *)(lVar6 + -8) = 0x2335340;
    *(undefined8 *)(lVar6 + -0x10) = unaff_RDI;
    *(undefined8 *)(lVar6 + -0x18) = unaff_RDI;
    *(undefined **)(lVar6 + -0x10) = &DAT_16564c584;
    return uVar3;
  }
  uVar7 = FUN_1617b2d2d();
  return uVar7;
}



// FUNCTION 14d8ff9e0 FUN_14d8ff9e0 body=127 status=ok
// SIG undefined FUN_14d8ff9e0(void)

void FUN_14d8ff9e0(void)

{
  return;
}



// FUNCTION 14d8ffa73 FUN_14d8ffa73 body=153 status=ok
// SIG undefined FUN_14d8ffa73(void)

void FUN_14d8ffa73(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint unaff_retaddr;
  undefined8 auStackX_10 [3];
  
  *(undefined8 *)((longlong)auStackX_10 + ((ulonglong)unaff_retaddr ^ 0x7a14b507)) = param_3;
  return;
}



// FUNCTION 14d8ffbbd FUN_14d8ffbbd body=169 status=ok
// SIG undefined FUN_14d8ffbbd(void)

void FUN_14d8ffbbd(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  (*(code *)&LAB_160c21a01)
            (*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,*(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX);
  return;
}



// FUNCTION 14d8ffd86 FUN_14d8ffd86 body=171 status=ok
// SIG undefined FUN_14d8ffd86(void)

void FUN_14d8ffd86(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined1 unaff_BL;
  longlong unaff_RDI;
  longlong lVar3;
  ulonglong auStackX_8 [4];
  
  *(undefined8 *)((longlong)auStackX_8 + param_3) = *(undefined8 *)(unaff_RDI + -0x40);
  puVar1 = (ulonglong *)((longlong)auStackX_8 + param_3);
  uVar2 = *(ulonglong *)(unaff_RDI + -0x50);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ uVar2;
  lVar3 = (~(*puVar1 & param_1) + param_1) - ~*puVar1;
  FUN_1669f295d(param_1,param_2,lVar3,CONCAT71((int7)((ulonglong)lVar3 >> 8),unaff_BL));
  return;
}



// FUNCTION 14d8ffe32 FUN_14d8ffe32 body=119 status=ok
// SIG undefined FUN_14d8ffe32(void)

void FUN_14d8ffe32(void)

{
  return;
}



// FUNCTION 14d900240 FUN_14d900240 body=299 status=ok
// SIG undefined FUN_14d900240(void)

void FUN_14d900240(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  short sVar2;
  ulonglong in_R10;
  ulonglong *unaff_R13;
  undefined1 local_res18 [4];
  undefined4 local_res1c;
  ulonglong local_res20;
  
  uVar1 = *unaff_R13;
  *unaff_R13 = ~*unaff_R13;
  *unaff_R13 = (~(uVar1 & param_1) + param_1) - *unaff_R13;
  *unaff_R13 = ~((-~*unaff_R13 - (~-(in_R10 | *unaff_R13) + 2)) + in_R10);
  local_res20 = local_res20 ^ param_1;
  sVar2 = (short)local_res18;
  FUN_156a68080();
  local_res1c = 0xe02e7c62;
  (*(code *)0x14defa6c8)(sVar2 * 2,0,param_3,0x14defa6c8);
  return;
}



// FUNCTION 14d9003fa FUN_14d9003fa body=160 status=ok
// SIG undefined FUN_14d9003fa(void)

/* WARNING: Removing unreachable block (ram,0x00014d9005c8) */
/* WARNING: Removing unreachable block (ram,0x00014d900639) */
/* WARNING: Removing unreachable block (ram,0x0001619a00b0) */
/* WARNING: Removing unreachable block (ram,0x0001566e0f6e) */
/* WARNING: Removing unreachable block (ram,0x00014d90049b) */
/* WARNING: Removing unreachable block (ram,0x00014d90052f) */
/* WARNING: Removing unreachable block (ram,0x0001566e0ee8) */
/* WARNING: Removing unreachable block (ram,0x0001566e0f5e) */
/* WARNING: Removing unreachable block (ram,0x0001566e0f63) */
/* WARNING: Removing unreachable block (ram,0x0001566e0f69) */
/* WARNING: Removing unreachable block (ram,0x00014d900535) */
/* WARNING: Removing unreachable block (ram,0x00014d9005b8) */
/* WARNING: Removing unreachable block (ram,0x00014d9005bd) */
/* WARNING: Removing unreachable block (ram,0x00014d9005c3) */
/* WARNING: Removing unreachable block (ram,0x00014d900645) */

void FUN_14d9003fa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_res20;
  
  uVar1 = (unaff_RBP ^ 0xffffffffffffffff | local_res20) &
          (~(unaff_RBP | ~(0xfffffffffffffffe - ~-local_res20)) | unaff_RBP);
  uVar2 = ~uVar1;
  if (uVar1 == 0) {
    FUN_1620ffe4d();
    return;
  }
  *(undefined8 *)(uVar2 - 8) = param_4;
  *(undefined8 *)(uVar2 - 0x10) = unaff_RBX;
  *(undefined8 *)(uVar2 - 0x18) = unaff_RBX;
  *(undefined8 *)(uVar2 - 0x10) = *(undefined8 *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 0x18) = in_RAX;
  *(undefined1 **)(uVar2 - 8) = &LAB_1620ffebc;
  FUN_14d7a8059(param_1,param_2,param_3,*(undefined8 *)(uVar2 - 0x10));
  return;
}



// FUNCTION 14d90049b thunk_FUN_14d9004a1 body=5 status=ok
// SIG undefined thunk_FUN_14d9004a1(void)

/* WARNING: Removing unreachable block (ram,0x00014d9005c8) */
/* WARNING: Removing unreachable block (ram,0x00014d900639) */
/* WARNING: Removing unreachable block (ram,0x0001619a00b0) */
/* WARNING: Removing unreachable block (ram,0x0001566e0f6e) */
/* WARNING: Removing unreachable block (ram,0x00014d900535) */
/* WARNING: Removing unreachable block (ram,0x00014d9005b8) */
/* WARNING: Removing unreachable block (ram,0x00014d9005bd) */
/* WARNING: Removing unreachable block (ram,0x00014d9005c3) */
/* WARNING: Removing unreachable block (ram,0x00014d900645) */

void thunk_FUN_14d9004a1(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    FUN_15b9b9b07();
    return;
  }
  FUN_15b9b9b07();
  return;
}



// FUNCTION 14d9004a1 FUN_14d9004a1 body=446 status=ok
// SIG undefined FUN_14d9004a1(void)

/* WARNING: Removing unreachable block (ram,0x00014d9005c8) */
/* WARNING: Removing unreachable block (ram,0x00014d900639) */
/* WARNING: Removing unreachable block (ram,0x0001619a00b0) */
/* WARNING: Removing unreachable block (ram,0x0001566e0f6e) */
/* WARNING: Removing unreachable block (ram,0x00014d900535) */
/* WARNING: Removing unreachable block (ram,0x00014d9005b8) */
/* WARNING: Removing unreachable block (ram,0x00014d9005bd) */
/* WARNING: Removing unreachable block (ram,0x00014d9005c3) */
/* WARNING: Removing unreachable block (ram,0x00014d900645) */

void FUN_14d9004a1(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    FUN_15b9b9b07();
    return;
  }
  FUN_15b9b9b07();
  return;
}



// FUNCTION 14d9006ed FUN_14d9006ed body=374 status=ok
// SIG undefined FUN_14d9006ed(void)

/* WARNING: Removing unreachable block (ram,0x00014d900807) */

void FUN_14d9006ed(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong unaff_RDI;
  undefined8 unaff_R13;
  longlong unaff_R15;
  ulonglong uVar6;
  uint uStackX_8;
  
  puVar1 = (undefined8 *)(&stack0xfffffffff60da277 + uStackX_8);
  *puVar1 = *(undefined8 *)(unaff_RDI + -0x40);
  *puVar1 = unaff_R13;
  puVar1[-1] = 0x14d900783;
  uVar5 = FUN_14d9dcb72();
  *puVar1 = param_3;
  puVar1[2] = puVar1[2] ^ param_1;
  puVar1[3] = puVar1[3] ^ param_1;
  puVar1[4] = puVar1[4] ^ param_1;
  puVar1[1] = 0;
  puVar1[1] = puVar1[1] + unaff_R15;
  uVar3 = puVar1[1];
  *(ushort *)(puVar1 + 3) = *(ushort *)(puVar1 + 3) & 0xfeff;
  uVar6 = puVar1[3];
  lVar2 = puVar1[4];
  syscall();
  *(ulonglong *)(lVar2 + -0x10) = uVar6;
  *(undefined8 *)(lVar2 + -8) = 0x14d9007ec;
  *(undefined8 *)(lVar2 + -0x10) = 0x14d9007ec;
  *(undefined4 *)(lVar2 + -0x18) = 0x89e87f3;
  *(undefined4 *)(lVar2 + -0x14) = 0;
  lVar4 = *(longlong *)(lVar2 + -0x18);
  *(ulonglong *)(lVar2 + -0x18) =
       (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)((uVar6 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar6 & 0x40) != 0) * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar6 & 4) != 0) * 4 | (ulonglong)((uVar6 & 1) != 0) |
       (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(lVar2 + -0x20) = uVar3;
  uVar6 = *(ulonglong *)(lVar2 + -0x18);
  *(undefined8 *)(lVar2 + -0x18) = uVar5;
  *(ulonglong *)(lVar2 + -0x20) =
       (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)((uVar6 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar6 & 0x40) != 0) * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar6 & 4) != 0) * 4 | (ulonglong)((uVar6 & 1) != 0) |
       (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  *(longlong *)(lVar2 + -8) = lVar4 + -0x124e563;
  FUN_165c7153c(*(undefined8 *)(lVar2 + -0x10));
  return;
}



// FUNCTION 14d900807 FUN_14d900807 body=133 status=ok
// SIG undefined FUN_14d900807(void)

void FUN_14d900807(undefined8 param_1)

{
  FUN_16279569d(param_1,FUN_16279569d);
  return;
}



// FUNCTION 14d900fb3 FUN_14d900fb3 body=331 status=ok
// SIG undefined FUN_14d900fb3(void)

/* WARNING: Removing unreachable block (ram,0x00014d901053) */
/* WARNING: Removing unreachable block (ram,0x00014d901048) */

void FUN_14d900fb3(undefined8 param_1,longlong param_2)

{
  bool in_ZF;
  undefined8 in_stack_00000008;
  
  if (in_ZF) {
    return;
  }
  if (param_2 != 0xb0155) {
    return;
  }
  FUN_162d131c5(in_stack_00000008,0x14d7aad9b);
  return;
}



// FUNCTION 14d9010fe FUN_14d9010fe body=25 status=ok
// SIG undefined FUN_14d9010fe(void)

void FUN_14d9010fe(void)

{
  return;
}



// FUNCTION 14d9017a2 FUN_14d9017a2 body=57 status=ok
// SIG undefined FUN_14d9017a2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d9017a2(undefined8 param_1,undefined1 param_2)

{
  char *pcVar1;
  ulonglong in_RAX;
  longlong unaff_RBX;
  longlong unaff_R14;
  undefined8 local_res8;
  
  if ((POPCOUNT((byte)in_RAX ^ 0x4a) & 1U) != 0) {
    *(longlong *)(local_res8 + -0xc15363f) = *(longlong *)(local_res8 + -0xc15363f) - unaff_R14;
    LOCK();
    *(undefined1 *)(unaff_RBX + -0x54524bae) = param_2;
    UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)((in_RAX ^ 0x4a) - 0x27d5890e);
  *pcVar1 = *pcVar1 + (char)(in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d901860 FUN_14d901860 body=637 status=ok
// SIG undefined FUN_14d901860(void)

/* WARNING: Removing unreachable block (ram,0x000162aa5a8f) */
/* WARNING: Removing unreachable block (ram,0x000162aa5a95) */
/* WARNING: Removing unreachable block (ram,0x00014d9018fa) */

undefined8 FUN_14d901860(ulonglong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  
  uVar2 = param_1;
  FUN_15735bd74();
  uVar1 = FUN_1646e9a05(FUN_1646e9a05,0x58dbebc3,uVar2 | param_1,*(undefined8 *)(unaff_R13 + -0x60))
  ;
  return uVar1;
}



// FUNCTION 14d9019aa FUN_14d9019aa body=152 status=ok
// SIG undefined FUN_14d9019aa(void)

void FUN_14d9019aa(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_166272f2f(param_1,(*(ulonglong *)(unaff_RDI + -0x68) - param_1) +
                        (~param_1 | *(ulonglong *)(unaff_RDI + -0x68)) * -2 + -2);
  return;
}



// FUNCTION 14d901acd FUN_14d901acd body=115 status=ok
// SIG undefined FUN_14d901acd(void)

void FUN_14d901acd(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_1618cc6b0(~(*(ulonglong *)(unaff_RSI + -0x38) & unaff_RBP) &
                (*(ulonglong *)(unaff_RSI + -0x38) | unaff_RBP),FUN_1618cc6b0);
  return;
}



// FUNCTION 14d901b47 FUN_14d901b47 body=153 status=ok
// SIG undefined FUN_14d901b47(void)

/* WARNING: Removing unreachable block (ram,0x00014d901bd9) */

void FUN_14d901b47(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  uint in_EAX;
  byte bVar5;
  ulonglong uVar6;
  uint unaff_EBP;
  uint uVar7;
  longlong unaff_RSI;
  longlong lVar8;
  ulonglong uVar9;
  byte bVar10;
  ulonglong uVar11;
  byte bVar12;
  byte bVar13;
  byte unaff_retaddr;
  int in_stack_00000008;
  
  bVar13 = ~(0xff - unaff_retaddr & 0x9a) + 0x9a;
  bVar10 = ~(0xff - unaff_retaddr);
  if (bVar10 <= bVar13) {
    FUN_15b3b4933();
    return;
  }
  bVar5 = unaff_retaddr | 0x65;
  bVar13 = ~bVar5 | bVar13 - bVar10;
  bVar12 = bVar13 + bVar5 + 1;
  bVar10 = ~bVar12;
  uVar7 = unaff_EBP >> (bVar10 & 0x1f);
  bVar2 = (bVar10 & 0x1f) != 0;
  bVar3 = (unaff_EBP >> (bVar10 & 0x1f) - 1 & 1) != 0;
  bVar1 = (bVar10 & 0x1f) != 0;
  if ((!bVar2 && CARRY1(bVar13,bVar5) || bVar2 && bVar3) &&
     (((bVar2 || !CARRY1(bVar13,bVar5)) && (!bVar2 || !bVar3)) &&
      ((bVar1 || bVar12 != 0) && (!bVar1 || uVar7 != 0)))) {
    FUN_15b3b49bb();
    return;
  }
  uVar11 = (ulonglong)
           (0xffffffffU - in_stack_00000008 |
           in_EAX + uVar7 + (in_EAX & uVar7) * -2 + in_stack_00000008);
  FUN_165b4d704();
  FUN_161a56548();
  uVar9 = *(ulonglong *)(unaff_RSI + -0x68) | uVar11;
  uVar11 = *(ulonglong *)(unaff_RSI + -0x68) & uVar11;
  uVar6 = ~uVar11;
  lVar8 = (~(uVar6 & uVar9) + uVar9) - uVar11;
  lVar4 = -lVar8;
  FUN_166c79585(lVar4 + uVar9 + uVar6,lVar4,lVar8,FUN_166c79585);
  return;
}



// FUNCTION 14d901d40 FUN_14d901d40 body=276 status=ok
// SIG undefined FUN_14d901d40(void)

/* WARNING: Removing unreachable block (ram,0x00014d901dd5) */
/* WARNING: Removing unreachable block (ram,0x00014d901de0) */
/* WARNING: Removing unreachable block (ram,0x00014d901deb) */
/* WARNING: Removing unreachable block (ram,0x00014d901de6) */
/* WARNING: Removing unreachable block (ram,0x00014d901dfb) */
/* WARNING: Removing unreachable block (ram,0x00014d901ddb) */
/* WARNING: Removing unreachable block (ram,0x0001623688bf) */
/* WARNING: Removing unreachable block (ram,0x0001626ce479) */

void FUN_14d901d40(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  longlong unaff_RBX;
  ulonglong uVar1;
  ulonglong unaff_R15;
  ulonglong uStackX_18;
  ulonglong local_res20;
  
  uVar1 = *(ulonglong *)(unaff_RBX + 8);
  *(ulonglong *)(unaff_RBX + 8) = ~*(ulonglong *)(unaff_RBX + 8);
  *(ulonglong *)(unaff_RBX + 8) = (~(uVar1 & unaff_R15) + unaff_R15) - *(longlong *)(unaff_RBX + 8);
  *(ulonglong *)(unaff_RBX + 8) = -1 - (in_RAX & *(ulonglong *)(unaff_RBX + 8));
  uVar1 = (~unaff_R15 | local_res20) & (~local_res20 | unaff_R15);
  uStackX_18 = CONCAT62(uStackX_18._2_6_,
                        (-0x101 - ((ushort)uStackX_18 | 0xfeff)) + (ushort)uStackX_18);
  FUN_1616492fc(param_1,param_2,param_3);
  uVar1 = ~((~param_1 | ~uVar1) & (uVar1 | param_1));
  local_res20._0_2_ = ~-(short)uVar1 + 1;
  if (uVar1 != 0) {
    FUN_164eee991(~((~param_1 | uStackX_18) & (~uStackX_18 | param_1)),
                  CONCAT62((int6)((ulonglong)param_2 >> 0x10),(short)local_res20) | 0xfeff);
    return;
  }
  FUN_14dcfc6ff();
  return;
}



// FUNCTION 14d901fb3 FUN_14d901fb3 body=160 status=ok
// SIG undefined FUN_14d901fb3(void)

void FUN_14d901fb3(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong unaff_R15;
  
  FUN_156eae049(param_1,param_2 ^ unaff_R15,param_3);
  return;
}



// FUNCTION 14d902113 FUN_14d902113 body=159 status=ok
// SIG undefined FUN_14d902113(void)

/* WARNING: Instruction at (ram,0x00014d902135) overlaps instruction at (ram,0x00014d902134)
    */
/* WARNING: Removing unreachable block (ram,0x00014d902134) */

void FUN_14d902113(longlong param_1,char param_2,longlong param_3)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  byte unaff_R13B;
  
  cVar3 = *(char *)(param_1 + 6 + param_3);
  pbVar1 = (byte *)(param_1 + 6 + param_3);
  *pbVar1 = *pbVar1 & unaff_R13B;
  pcVar2 = (char *)(param_1 + 6 + param_3);
  *pcVar2 = *pcVar2 << 1;
  *(byte *)(param_1 + 6 + param_3) = (cVar3 + unaff_R13B) - *(char *)(param_1 + 6 + param_3);
  pcVar2 = (char *)(param_1 + 6 + param_3);
  *pcVar2 = *pcVar2 - param_2;
  *(char *)(param_1 + 6 + param_3) = -*(char *)(param_1 + 6 + param_3);
  *(char *)(param_1 + 7 + param_3) = param_2;
  FUN_160f926c5();
  return;
}



// FUNCTION 14d902256 FUN_14d902256 body=32 status=ok
// SIG undefined FUN_14d902256(void)

undefined8 FUN_14d902256(void)

{
  undefined8 local_res8;
  
  return local_res8;
}



// FUNCTION 14d9022f8 FUN_14d9022f8 body=17 status=ok
// SIG undefined FUN_14d9022f8(void)

void FUN_14d9022f8(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14d9024d1 FUN_14d9024d1 body=373 status=ok
// SIG undefined FUN_14d9024d1(void)

void FUN_14d9024d1(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  bool bVar3;
  longlong unaff_RBP;
  ulonglong uVar4;
  ulonglong in_R10;
  ulonglong uVar5;
  undefined8 unaff_R12;
  longlong unaff_R14;
  byte in_AF;
  byte bVar6;
  byte in_TF;
  byte bVar7;
  byte in_IF;
  byte bVar8;
  byte in_NT;
  byte bVar9;
  byte in_AC;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte in_ID;
  byte bVar13;
  uint local_res10;
  undefined8 in_stack_00000018;
  undefined1 auStackX_20 [8];
  
  uVar4 = (ulonglong)local_res10 - 0x53849f4;
  bVar9 = (in_NT & 1) != 0;
  bVar8 = (in_IF & 1) != 0;
  bVar7 = (in_TF & 1) != 0;
  bVar6 = (in_AF & 1) != 0;
  bVar13 = (in_ID & 1) != 0;
  bVar10 = (in_AC & 1) != 0;
  bVar12 = 0;
  bVar11 = 0;
  FUN_15648ab4e();
  puVar1 = (ulonglong *)(&stack0x00000018 + unaff_R14);
  *puVar1 = in_R10;
  *puVar1 = *puVar1 - 0x1822564;
  uVar2 = *puVar1;
  uVar5 = uVar2 + 0xb77;
  _fxrstor(auStackX_20 + unaff_R14);
  bVar3 = (uVar4 & 0x3f) == 0;
  *(undefined8 *)(unaff_RBP + -8) = in_stack_00000018;
  *(undefined4 *)(unaff_RBP + -8) = 0;
  *(ulonglong *)(unaff_RBP + -0x10) =
       (ulonglong)(bVar9 & 1) * 0x4000 | (ulonglong)SCARRY8(uVar2,0xb77) * 0x800 |
       (ulonglong)(bVar8 & 1) * 0x200 | (ulonglong)(bVar7 & 1) * 0x100 |
       (ulonglong)((longlong)uVar5 < 0) * 0x80 | (ulonglong)(uVar5 == 0) * 0x40 |
       (ulonglong)(bVar6 & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar5 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)
       (byte)(bVar3 * (0xfffffffffffff488 < uVar2) |
             !bVar3 * ((1L << ((byte)uVar4 & 0x3f) - 1 & param_3) != 0)) |
       (ulonglong)(bVar13 & 1) * 0x200000 | (ulonglong)(bVar12 & 1) * 0x100000 |
       (ulonglong)(bVar11 & 1) * 0x80000 | (ulonglong)(bVar10 & 1) * 0x40000;
  *(undefined8 *)(unaff_RBP + -0x10) = unaff_R12;
  *(undefined8 *)(unaff_RBP + -0x18) = unaff_R12;
  *(undefined1 **)(unaff_RBP + -0x10) = &LAB_14d902648;
  FUN_14dbb0968();
  return;
}



// FUNCTION 14d902752 FUN_14d902752 body=127 status=ok
// SIG undefined FUN_14d902752(void)

/* WARNING: Removing unreachable block (ram,0x00014d9027d3) */

void FUN_14d902752(undefined8 param_1)

{
  FUN_16124e1cc(param_1);
  FUN_162af4fe6();
  return;
}



// FUNCTION 14d9027d3 FUN_14d9027d3 body=298 status=ok
// SIG undefined FUN_14d9027d3(void)

void FUN_14d9027d3(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  undefined4 uStackX_10;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x68);
  uVar2 = ~((~param_1 | *(ulonglong *)(unaff_RDI + -0x48)) &
           (*(ulonglong *)(unaff_RDI + -0x48) ^ 0xffffffffffffffff | param_1));
  FUN_161df14d5(0xffffffffffffff78,~((param_1 - (uVar1 | param_1)) + uVar1) & (uVar1 | param_1));
  (*(code *)0x161935516)
            (*(undefined8 *)(uVar2 - 0x70),~uStackX_10,*(ulonglong *)(uVar2 - 0x60) ^ 0x161df14d5,
             -param_4 ^ 0x161df14d5);
  return;
}



// FUNCTION 14d90297f FUN_14d90297f body=500 status=ok
// SIG undefined FUN_14d90297f(void)

/* WARNING: Removing unreachable block (ram,0x00014d902a7f) */
/* WARNING: Removing unreachable block (ram,0x00014d902a85) */
/* WARNING: Removing unreachable block (ram,0x00016559104a) */
/* WARNING: Removing unreachable block (ram,0x0001661366ab) */
/* WARNING: Removing unreachable block (ram,0x000166136737) */
/* WARNING: Removing unreachable block (ram,0x00016613673d) */
/* WARNING: Removing unreachable block (ram,0x000166443a19) */
/* WARNING: Removing unreachable block (ram,0x0001661367ae) */
/* WARNING: Removing unreachable block (ram,0x0001661367c0) */
/* WARNING: Removing unreachable block (ram,0x0001661367c6) */
/* WARNING: Removing unreachable block (ram,0x00014e17a9ac) */
/* WARNING: Removing unreachable block (ram,0x0001655910db) */
/* WARNING: Removing unreachable block (ram,0x0001655910e1) */
/* WARNING: Removing unreachable block (ram,0x00014d9029a4) */
/* WARNING: Removing unreachable block (ram,0x00014d9029f4) */

void FUN_14d90297f(int param_1,undefined8 param_2)

{
  FUN_162702f03(param_1 + (int)param_2,param_2,FUN_162702f03);
  return;
}



// FUNCTION 14d902b1c FUN_14d902b1c body=132 status=ok
// SIG undefined FUN_14d902b1c(void)

/* WARNING: Removing unreachable block (ram,0x00014d902b2d) */
/* WARNING: Removing unreachable block (ram,0x00014d902b88) */

void FUN_14d902b1c(void)

{
  return;
}



// FUNCTION 14d902ba0 FUN_14d902ba0 body=143 status=ok
// SIG undefined FUN_14d902ba0(void)

void FUN_14d902ba0(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000008;
  undefined1 local_res20 [8];
  
  FUN_1649b75b9(param_1,param_2,in_stack_00000008,local_res20);
  return;
}



// FUNCTION 14d902d7a FUN_14d902d7a body=295 status=ok
// SIG undefined FUN_14d902d7a(void)

/* WARNING: Removing unreachable block (ram,0x00014d902e25) */
/* WARNING: Removing unreachable block (ram,0x00014d902e4f) */
/* WARNING: Removing unreachable block (ram,0x00014d902e53) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d902d7a(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (-1 < (longlong)(*(ulonglong *)(unaff_R13 + -0x98) | unaff_R15)) {
    FUN_165863f58();
    return;
  }
  FUN_165863f58();
  return;
}



// FUNCTION 14d902f43 FUN_14d902f43 body=485 status=ok
// SIG undefined FUN_14d902f43(void)

/* WARNING: Removing unreachable block (ram,0x00014d902fd3) */
/* WARNING: Removing unreachable block (ram,0x00014d902fd9) */
/* WARNING: Removing unreachable block (ram,0x00014d903074) */
/* WARNING: Removing unreachable block (ram,0x00014d90307a) */
/* WARNING: Removing unreachable block (ram,0x00014dce126a) */
/* WARNING: Removing unreachable block (ram,0x0001569628c6) */
/* WARNING: Removing unreachable block (ram,0x0001569628cc) */

undefined8 FUN_14d902f43(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d9031c3 FUN_14d9031c3 body=358 status=ok
// SIG undefined FUN_14d9031c3(void)

/* WARNING: Removing unreachable block (ram,0x00014d90326d) */
/* WARNING: Removing unreachable block (ram,0x00014d90327c) */
/* WARNING: Removing unreachable block (ram,0x00014d903282) */

void FUN_14d9031c3(void)

{
  thunk_FUN_165e6a8b6();
  return;
}



// FUNCTION 14d9034fd FUN_14d9034fd body=250 status=ok
// SIG undefined FUN_14d9034fd(void)

/* WARNING: Removing unreachable block (ram,0x00014d90359a) */
/* WARNING: Removing unreachable block (ram,0x00014d9035a5) */
/* WARNING: Removing unreachable block (ram,0x00014d9035a0) */

void FUN_14d9034fd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_156780568(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d9036d9 thunk_FUN_15b3d5987 body=5 status=ok
// SIG undefined thunk_FUN_15b3d5987(void)

void thunk_FUN_15b3d5987(void)

{
  FUN_15b3d5987();
  return;
}



// FUNCTION 14d903796 FUN_14d903796 body=153 status=ok
// SIG undefined FUN_14d903796(void)

void FUN_14d903796(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_RBP;
  
  (*(code *)&LAB_15b7ba1ba)(&LAB_15b7ba1ba,-1 - ~(~unaff_RBP | ~param_2));
  return;
}



// FUNCTION 14d903834 FUN_14d903834 body=33 status=ok
// SIG undefined FUN_14d903834(void)

void FUN_14d903834(void)

{
  return;
}



// FUNCTION 14d9039df FUN_14d9039df body=138 status=ok
// SIG undefined FUN_14d9039df(void)

void FUN_14d9039df(void)

{
  FUN_14df3a24f();
  return;
}



// FUNCTION 14d903a6b FUN_14d903a6b body=22 status=ok
// SIG undefined FUN_14d903a6b(void)

void FUN_14d903a6b(void)

{
  return;
}



// FUNCTION 14d903a81 FUN_14d903a81 body=108 status=ok
// SIG undefined FUN_14d903a81(void)

undefined8 FUN_14d903a81(undefined8 param_1)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong unaff_RSI;
  
  if (unaff_RSI != 0x11b5a5) {
    return in_RAX;
  }
  uVar1 = FUN_16552d184(param_1);
  return uVar1;
}



// FUNCTION 14d903cc3 FUN_14d903cc3 body=299 status=ok
// SIG undefined FUN_14d903cc3(void)

/* WARNING: Removing unreachable block (ram,0x00014d903d3d) */
/* WARNING: Removing unreachable block (ram,0x00014d903d49) */
/* WARNING: Removing unreachable block (ram,0x00014d903d4f) */
/* WARNING: Removing unreachable block (ram,0x00014d903ddd) */

void FUN_14d903cc3(void)

{
  FUN_160ba435d();
  return;
}



// FUNCTION 14d903e91 FUN_14d903e91 body=151 status=ok
// SIG undefined FUN_14d903e91(void)

void FUN_14d903e91(ulonglong param_1)

{
  longlong unaff_RSI;
  
  *(ulonglong *)(unaff_RSI + 0x10) =
       (param_1 - (*(ulonglong *)(unaff_RSI + 0x10) | param_1)) + *(longlong *)(unaff_RSI + 0x10);
  return;
}



// FUNCTION 14d904352 FUN_14d904352 body=472 status=ok
// SIG undefined FUN_14d904352(void)

/* WARNING: Instruction at (ram,0x00015b812503) overlaps instruction at (ram,0x00015b812502)
    */
/* WARNING: Removing unreachable block (ram,0x00014d9043d8) */
/* WARNING: Removing unreachable block (ram,0x00014d9043de) */
/* WARNING: Removing unreachable block (ram,0x00014d904377) */
/* WARNING: Removing unreachable block (ram,0x00014d904432) */
/* WARNING: Removing unreachable block (ram,0x00014d904435) */
/* WARNING: Removing unreachable block (ram,0x00015b812502) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d904352(void)

{
  FUN_16113d565(0xfffffffffffe7bf7);
  return;
}


