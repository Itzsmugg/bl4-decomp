// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14d9c9e6c FUN_14d9c9e6c body=263 status=ok
// SIG undefined FUN_14d9c9e6c(void)

/* WARNING: Removing unreachable block (ram,0x00014d9c9eea) */
/* WARNING: Removing unreachable block (ram,0x00014d9c9ef0) */
/* WARNING: Removing unreachable block (ram,0x00014d9c9f5e) */
/* WARNING: Removing unreachable block (ram,0x00014d9c9f62) */
/* WARNING: Removing unreachable block (ram,0x00014d9c9f7d) */
/* WARNING: Removing unreachable block (ram,0x00014d9c9f82) */
/* WARNING: Removing unreachable block (ram,0x00014d9c9f88) */
/* WARNING: Removing unreachable block (ram,0x00014d9c9f8d) */

longlong FUN_14d9c9e6c(void)

{
  longlong in_RAX;
  longlong in_stack_00000008;
  
  return in_stack_00000008 + in_RAX * -2;
}



// FUNCTION 14d9c9ef0 FUN_14d9c9ef0 body=285 status=ok
// SIG undefined FUN_14d9c9ef0(void)

/* WARNING: Removing unreachable block (ram,0x00014d9c9f82) */
/* WARNING: Removing unreachable block (ram,0x00014d9c9f88) */
/* WARNING: Removing unreachable block (ram,0x00014d9c9f5e) */
/* WARNING: Removing unreachable block (ram,0x00014d9c9f8d) */

undefined8 FUN_14d9c9ef0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1658ba842();
  return uVar1;
}



// FUNCTION 14d9ca0cc FUN_14d9ca0cc body=161 status=ok
// SIG undefined FUN_14d9ca0cc(void)

void FUN_14d9ca0cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)&LAB_1653bcafa)(param_1,param_2,param_3,&LAB_1653bcafa);
  return;
}



// FUNCTION 14d9ca224 FUN_14d9ca224 body=291 status=ok
// SIG undefined FUN_14d9ca224(void)

void FUN_14d9ca224(ulonglong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong unaff_RBP;
  uint unaff_ESI;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R12;
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
  longlong lStackX_8;
  longlong local_res10;
  ulonglong local_res18;
  ulonglong local_res20;
  
  uVar4 = 0xffffffffffffffffU - local_res10 & unaff_RBP;
  uVar18 = local_res18 ^ param_1;
  puVar1 = (undefined8 *)(local_res20 ^ param_1);
  bVar13 = (uVar18 & 0x4000) != 0;
  bVar12 = (uVar18 & 0x800) != 0;
  bVar11 = (uVar18 & 0x200) != 0;
  bVar10 = 0;
  bVar9 = (uVar18 & 0x80) != 0;
  bVar8 = (uVar18 & 0x40) != 0;
  bVar7 = (uVar18 & 0x10) != 0;
  bVar6 = (uVar18 & 4) != 0;
  bVar5 = (uVar18 & 1) != 0;
  bVar17 = (uVar18 & 0x200000) != 0;
  bVar14 = (uVar18 & 0x40000) != 0;
  bVar16 = 0;
  bVar15 = 0;
  pcVar2 = (code *)swi(0x2e);
  (*pcVar2)();
  *puVar1 = unaff_RDI;
  puVar1[-1] = unaff_RDI;
  puVar1[-2] = (ulonglong)(bVar13 & 1) * 0x4000 | (ulonglong)(bVar12 & 1) * 0x800 |
               (ulonglong)((uVar18 & 0x400) != 0) * 0x400 | (ulonglong)(bVar11 & 1) * 0x200 |
               (ulonglong)(bVar10 & 1) * 0x100 | (ulonglong)(bVar9 & 1) * 0x80 |
               (ulonglong)(bVar8 & 1) * 0x40 | (ulonglong)(bVar7 & 1) * 0x10 |
               (ulonglong)(bVar6 & 1) * 4 | (ulonglong)(bVar5 & 1) |
               (ulonglong)(bVar17 & 1) * 0x200000 | (ulonglong)(bVar16 & 1) * 0x100000 |
               (ulonglong)(bVar15 & 1) * 0x80000 | (ulonglong)(bVar14 & 1) * 0x40000;
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
  puVar1[-3] = param_2;
  uVar18 = puVar1[-2];
  puVar1[-2] = in_R10;
  puVar1[-3] = (ulonglong)((uVar18 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar18 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar18 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar18 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar18 & 0x100) != 0) * 0x100 | (ulonglong)((uVar18 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar18 & 0x40) != 0) * 0x40 | (ulonglong)((uVar18 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar18 & 4) != 0) * 4 | (ulonglong)((uVar18 & 1) != 0) |
               (ulonglong)((uVar18 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar18 & 0x40000) != 0) * 0x40000;
  *puVar1 = 0x430371a;
  puVar1[-1] = puVar1[-2];
  puVar1[-2] = puVar1[-2];
  puVar1[-3] = 0x14d9ca2a6;
  FUN_166b18ce8();
  puVar1[-2] = unaff_retaddr;
  puVar1[-1] = 0;
  puVar1[-1] = puVar1[-1] - ((uVar4 ^ 0x1219e29b) - lStackX_8);
  lVar3 = puVar1[-1];
  bVar5 = (byte)puVar1 & 0x1f;
  *(ulonglong *)(lVar3 + -8) = (ulonglong)(unaff_ESI << bVar5 | unaff_ESI >> 0x20 - bVar5);
  *(undefined8 *)(lVar3 + -0x10) = unaff_R12;
  *(undefined8 *)(lVar3 + -0x18) = 0x180928a;
  *(undefined8 *)(lVar3 + -0x18) = *(undefined8 *)(lVar3 + -0x18);
  *(longlong *)(lVar3 + -0x18) = *(longlong *)(lVar3 + -0x18) + -0x1809282;
  FUN_165e6266a(*(undefined8 *)(lVar3 + -0x18));
  return;
}



// FUNCTION 14d9ca3e1 FUN_14d9ca3e1 body=134 status=ok
// SIG undefined FUN_14d9ca3e1(void)

void FUN_14d9ca3e1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  undefined8 in_R10;
  undefined8 unaff_R12;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_RBP;
  *(undefined8 *)(local_res18 + -0x10) = unaff_R12;
  *(undefined8 *)(local_res18 + -0x18) = unaff_R12;
  *(undefined8 *)(local_res18 + -0x20) = param_3;
  *(undefined8 *)(local_res18 + -0x28) = in_RAX;
  *(undefined4 *)(local_res18 + -0x28) = 0xcf3aca09;
  *(undefined4 *)(local_res18 + -0x24) = 0xffffffff;
  lVar1 = *(longlong *)(local_res18 + *(longlong *)(local_res18 + -0x28) + 0x30c535ef);
  *(undefined8 *)(local_res18 + -0x10) = 0;
  *(longlong *)(local_res18 + -0x10) = *(longlong *)(local_res18 + -0x10) + lVar1;
  *(undefined8 *)(local_res18 + -0x18) = in_R10;
  *(undefined1 **)(local_res18 + -8) = &LAB_166a0d228;
  FUN_14d7c1936(param_1,param_2,*(undefined8 *)(local_res18 + -0x20));
  return;
}



// FUNCTION 14d9ca479 FUN_14d9ca479 body=139 status=ok
// SIG undefined FUN_14d9ca479(void)

void FUN_14d9ca479(undefined8 param_1,undefined8 param_2)

{
  FUN_1654baa38(param_1,param_2);
  return;
}



// FUNCTION 14d9ca657 FUN_14d9ca657 body=398 status=ok
// SIG undefined FUN_14d9ca657(void)

/* WARNING: Removing unreachable block (ram,0x00014d9ca6dc) */

void FUN_14d9ca657(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  undefined8 unaff_RBP;
  ulonglong in_R10;
  undefined8 unaff_R12;
  ulonglong unaff_R15;
  undefined8 in_stack_00000010;
  undefined8 uStackX_18;
  ushort local_res20;
  
  uVar1 = ~(param_5 & unaff_R15) & (in_R10 | unaff_R15);
  if ((ushort)((-0x101 - (local_res20 | 0xfeff)) + local_res20) != 0) {
    FUN_165a0b8e4();
    return;
  }
  *(undefined8 *)(uVar1 - 8) = unaff_R12;
  *(undefined8 *)(uVar1 - 0x10) = in_stack_00000010;
  *(undefined8 *)(uVar1 - 0x18) = in_stack_00000010;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x18) = unaff_RBP;
  *(undefined8 *)(uVar1 - 0x20) = uStackX_18;
  *(undefined1 **)(uVar1 - 8) = &LAB_160b8aa55;
  *(undefined8 *)(uVar1 - 0x10) = param_1;
  *(undefined8 *)(uVar1 - 0x18) = param_1;
  *(undefined8 *)(uVar1 - 0x20) = param_3;
  FUN_160b8aa20(0x14d7c38e5,param_2,FUN_160b8aa20);
  return;
}



// FUNCTION 14d9ca8ff FUN_14d9ca8ff body=141 status=ok
// SIG undefined FUN_14d9ca8ff(void)

void FUN_14d9ca8ff(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(0x1066 - ~(unaff_R13 - 0x10c7U));
  FUN_160bc3568(0x1067,param_2,0,~(uVar1 & unaff_R15 | ~(uVar1 | unaff_R15)));
  return;
}



// FUNCTION 14d9ca98d FUN_14d9ca98d body=139 status=ok
// SIG undefined FUN_14d9ca98d(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d9ca98d(void)

{
  FUN_1650828c9();
  return;
}



// FUNCTION 14d9cafce FUN_14d9cafce body=300 status=ok
// SIG undefined FUN_14d9cafce(void)

/* WARNING: Removing unreachable block (ram,0x00014d9cb068) */
/* WARNING: Removing unreachable block (ram,0x00014d9cb06e) */
/* WARNING: Removing unreachable block (ram,0x00016495f056) */

undefined8 FUN_14d9cafce(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  undefined8 uStack_8;
  
  param_2 = param_2 ^ 0x646efdd2;
  *(undefined8 *)(&stack0x00000000 + param_2) = in_RAX;
  *(undefined4 *)(&stack0x00000000 + param_2) = 0;
  *(undefined4 *)(&stack0x00000004 + param_2) = 0;
  *(undefined8 *)(&stack0x00000000 + param_2) = param_4;
  *(undefined8 *)(&stack0x00000000 + param_2) = param_1;
  *(undefined8 *)((longlong)&uStack_8 + param_2) = param_1;
  *(undefined1 *)((longlong)&uStack_8 + param_2) = 0xf8;
  uVar1 = FUN_16495f056();
  return uVar1;
}



// FUNCTION 14d9cb243 FUN_14d9cb243 body=143 status=ok
// SIG undefined FUN_14d9cb243(void)

/* WARNING: Removing unreachable block (ram,0x00014d9cb37c) */

longlong FUN_14d9cb243(char param_1,longlong param_2)

{
  longlong lVar1;
  longlong unaff_RBP;
  undefined8 local_res8;
  
  lVar1 = FUN_1615abcd8(local_res8,unaff_RBP - (param_2 << (param_1 + 0x43U & 0x3f)));
  if (-1 < -lVar1) {
    lVar1 = FUN_1655392d8();
    return lVar1;
  }
  return lVar1;
}



// FUNCTION 14d9cb2d5 FUN_14d9cb2d5 body=205 status=ok
// SIG undefined FUN_14d9cb2d5(void)

/* WARNING: Removing unreachable block (ram,0x00014d9cb37c) */

longlong FUN_14d9cb2d5(void)

{
  longlong in_RAX;
  longlong lVar1;
  
  if (-1 < -in_RAX) {
    lVar1 = FUN_1655392d8();
    return lVar1;
  }
  return in_RAX;
}



// FUNCTION 14d9cb6e9 FUN_14d9cb6e9 body=295 status=ok
// SIG undefined FUN_14d9cb6e9(void)

undefined8 FUN_14d9cb6e9(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_156870c2e();
  return uVar1;
}



// FUNCTION 14d9cb817 FUN_14d9cb817 body=166 status=ok
// SIG undefined FUN_14d9cb817(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d9cb817(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  
  FUN_15b11938b(local_res8,param_2);
  return;
}



// FUNCTION 14d9cbb6e FUN_14d9cbb6e body=197 status=ok
// SIG undefined FUN_14d9cbb6e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c2103) overlaps instruction at (ram,0x00014d7c20fc)
    */

void FUN_14d9cbb6e(undefined8 param_1,undefined2 param_2,ulonglong param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  undefined8 unaff_RSI;
  int *piVar7;
  int *unaff_RDI;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined8 unaff_retaddr;
  longlong lStackX_8;
  longlong local_res10;
  ushort local_res18;
  ulonglong local_res20;
  
  param_3 = ~(local_res20 & unaff_RBP) & param_3;
  *(undefined8 *)(param_3 - 8) = param_1;
  *(undefined8 *)(param_3 - 0x10) = unaff_RBX;
  puVar2 = (undefined8 *)(param_3 - 0x18);
  *puVar2 = unaff_RBX;
  *(undefined8 *)(param_3 - 0x20) = unaff_RSI;
  uVar5 = *(undefined8 *)(param_3 - 0x20);
  *(undefined8 *)(param_3 - 0x10) = *(undefined8 *)(param_3 - 8);
  *puVar2 = uVar5;
  if ((&DAT_fffffffffffffff7 < puVar2) && (puVar2 < &DAT_fffffffffffffff8)) {
    *(undefined8 *)(param_3 - 0x20) = unaff_retaddr;
    *(undefined8 *)(param_3 - 8) = *(undefined8 *)(param_3 - 0x20);
    FUN_161955713(&LAB_1611e429b,param_2,*(undefined8 *)(param_3 - 0x10));
    return;
  }
  *(undefined8 *)(param_3 - 0x20) = unaff_retaddr;
  bVar10 = SCARRY8(param_3 - 0x10,8);
  bVar9 = (undefined8 *)(param_3 - 8) == (undefined8 *)0x0;
  *(undefined8 *)(param_3 - 8) = &LAB_1611e429b;
  uVar4 = *(ulonglong *)(param_3 - 0x10);
  while( true ) {
    bVar8 = false;
    piVar7 = unaff_RDI;
    if (bVar9) {
      *(char *)(local_res10 + -0x2d) = *(char *)(local_res10 + -0x2d) + (char)(uVar4 >> 8);
      piVar7 = unaff_RDI + (ulonglong)((local_res18 & 0x400) != 0) * -2 + 1;
      bVar10 = SBORROW4((int)lStackX_8,*unaff_RDI);
      *(char *)(lStackX_8 + 0x74ee5e6f) = '\0';
      bVar8 = *(char *)(lStackX_8 + 0x74ee5e6f) == '\0';
    }
    if (bVar10) break;
    local_res10 = 0x6d009ef0f01f4f0e;
    puVar1 = (uint *)(piVar7 + 0x179bec30);
    bVar6 = (byte)uVar4 & 0x1f;
    uVar3 = *puVar1;
    *puVar1 = *puVar1 >> bVar6;
    bVar10 = bVar6 == 1 && (int)uVar3 < 0;
    bVar9 = (uVar4 & 0x1f) != 0;
    bVar9 = (bool)(!bVar9 & bVar8 | (bVar9 && *puVar1 == 0));
    out(param_2,(char)lStackX_8);
    unaff_RDI = piVar7;
  }
  out(0x14,(int)lStackX_8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d9cbca0 FUN_14d9cbca0 body=127 status=ok
// SIG undefined FUN_14d9cbca0(void)

undefined8 FUN_14d9cbca0(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d9cbd9d FUN_14d9cbd9d body=176 status=ok
// SIG undefined FUN_14d9cbd9d(void)

undefined8 FUN_14d9cbd9d(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  ulonglong local_res18;
  
  param_1 = local_res18 ^ param_1;
  *(undefined8 *)(param_1 - 8) = unaff_RSI;
  *(undefined8 *)(param_1 - 0x10) = unaff_RBX;
  *(undefined8 *)(param_1 - 0x18) = unaff_RBX;
  *(undefined8 *)(param_1 - 0x10) = *(undefined8 *)(param_1 - 8);
  *(undefined8 *)(param_1 - 0x20) = param_4;
  *(undefined8 *)(param_1 - 0x28) = param_4;
  *(undefined8 *)(param_1 - 0x30) = param_4;
  *(undefined1 **)(param_1 - 0x20) = &LAB_14d9cbe4f;
  *(undefined8 *)(param_1 - 0x28) = 0x1648e6b2d;
  return in_RAX;
}



// FUNCTION 14d9cc153 FUN_14d9cc153 body=344 status=ok
// SIG undefined FUN_14d9cc153(void)

/* WARNING: Removing unreachable block (ram,0x00014d9cc214) */
/* WARNING: Removing unreachable block (ram,0x00014d9cc1f3) */
/* WARNING: Removing unreachable block (ram,0x00014d9cc1f9) */
/* WARNING: Removing unreachable block (ram,0x00014d9cc21d) */
/* WARNING: Removing unreachable block (ram,0x00015b94944f) */

void FUN_14d9cc153(void)

{
  FUN_15b94944f();
  return;
}



// FUNCTION 14d9cc328 FUN_14d9cc328 body=110 status=ok
// SIG undefined FUN_14d9cc328(void)

void FUN_14d9cc328(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong unaff_RSI;
  ulonglong unaff_R15;
  
  uVar1 = -(unaff_RSI ^ 0xffffffffffffffff) - param_2;
  FUN_1568e0302(param_1,0xffffffffffffffff - ~(~uVar1 | ~unaff_R15) & (uVar1 | unaff_R15));
  FUN_14d9cc398();
  return;
}



// FUNCTION 14d9cc398 FUN_14d9cc398 body=681 status=ok
// SIG undefined FUN_14d9cc398(void)

/* WARNING: Instruction at (ram,0x00014d9cc465) overlaps instruction at (ram,0x00014d9cc464)
    */
/* WARNING: Removing unreachable block (ram,0x000164f9babb) */
/* WARNING: Removing unreachable block (ram,0x00014dd71db2) */
/* WARNING: Removing unreachable block (ram,0x00014d9cc415) */
/* WARNING: Removing unreachable block (ram,0x00014d9cc465) */
/* WARNING: Removing unreachable block (ram,0x00014d9cc464) */
/* WARNING: Removing unreachable block (ram,0x00014d9cc471) */
/* WARNING: Removing unreachable block (ram,0x00014d9cc4a7) */
/* WARNING: Removing unreachable block (ram,0x00014d9cc4df) */
/* WARNING: Removing unreachable block (ram,0x00014d9cc4ce) */
/* WARNING: Removing unreachable block (ram,0x00014d9cc495) */

void FUN_14d9cc398(void)

{
  longlong unaff_R15;
  
  if (-1 < -1 - unaff_R15) {
    FUN_14dd71db2();
    return;
  }
  FUN_164f9ba2b();
  return;
}



// FUNCTION 14d9cc765 FUN_14d9cc765 body=146 status=ok
// SIG undefined FUN_14d9cc765(void)

void FUN_14d9cc765(void)

{
  longlong unaff_RDI;
  undefined4 in_R9D;
  undefined8 local_res8;
  
  local_res8 = CONCAT44(0xac91427a,in_R9D);
  FUN_15684aa33(local_res8,0xffffffffffffffc8,*(longlong *)(unaff_RDI + -0x38) + local_res8);
  return;
}



// FUNCTION 14d9cc9fa FUN_14d9cc9fa body=126 status=ok
// SIG undefined FUN_14d9cc9fa(void)

/* WARNING: Removing unreachable block (ram,0x00014d9ccb93) */
/* WARNING: Removing unreachable block (ram,0x00014d9ccb8d) */
/* WARNING: Removing unreachable block (ram,0x00014d9ccb98) */
/* WARNING: Removing unreachable block (ram,0x00014d9ccbe0) */
/* WARNING: Removing unreachable block (ram,0x00014d9ccc29) */
/* WARNING: Removing unreachable block (ram,0x00014d9ccc2f) */
/* WARNING: Removing unreachable block (ram,0x000164c05bfc) */
/* WARNING: Removing unreachable block (ram,0x00014da4d63b) */
/* WARNING: Removing unreachable block (ram,0x000161215740) */
/* WARNING: Removing unreachable block (ram,0x00014d9cca79) */
/* WARNING: Removing unreachable block (ram,0x000157280982) */
/* WARNING: Removing unreachable block (ram,0x000166ad8636) */
/* WARNING: Removing unreachable block (ram,0x000157280988) */

undefined8 FUN_14d9cc9fa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong unaff_R12;
  
  if (*(ulonglong *)(unaff_R12 + -0x78) == 0) {
    uVar1 = FUN_14da4d5c0();
    return uVar1;
  }
  uVar1 = FUN_16219762f(~(*(ulonglong *)(unaff_R12 + -0x58) & in_RAX) &
                        (*(ulonglong *)(unaff_R12 + -0x58) | in_RAX),
                        *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX,param_3,FUN_16219762f);
  return uVar1;
}



// FUNCTION 14d9cca79 FUN_14d9cca79 body=602 status=ok
// SIG undefined FUN_14d9cca79(void)

/* WARNING: Removing unreachable block (ram,0x00014d9ccb8d) */
/* WARNING: Removing unreachable block (ram,0x00014d9ccb98) */
/* WARNING: Removing unreachable block (ram,0x00014d9ccbe0) */
/* WARNING: Removing unreachable block (ram,0x00014d9ccc29) */
/* WARNING: Removing unreachable block (ram,0x00014d9ccc2f) */
/* WARNING: Removing unreachable block (ram,0x000164c05bfc) */
/* WARNING: Removing unreachable block (ram,0x00014d9ccb93) */
/* WARNING: Removing unreachable block (ram,0x000157280988) */

undefined8 FUN_14d9cca79(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1657b0669(param_1,param_2);
  uVar1 = FUN_162ead744();
  return uVar1;
}



// FUNCTION 14d9cccdf FUN_14d9cccdf body=84 status=ok
// SIG undefined FUN_14d9cccdf(void)

void FUN_14d9cccdf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
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
  ulonglong local_res10;
  undefined8 *local_res18;
  
  bVar11 = (local_res10 & 0x4000) != 0;
  bVar10 = (local_res10 & 0x800) != 0;
  bVar9 = (local_res10 & 0x200) != 0;
  bVar8 = (local_res10 & 0x100) != 0;
  bVar7 = (local_res10 & 0x80) != 0;
  bVar6 = (local_res10 & 0x40) != 0;
  bVar5 = (local_res10 & 0x10) != 0;
  bVar4 = (local_res10 & 4) != 0;
  bVar3 = (local_res10 & 1) != 0;
  bVar15 = (local_res10 & 0x200000) != 0;
  bVar12 = (local_res10 & 0x40000) != 0;
  bVar14 = 0;
  bVar13 = 0;
  pcVar1 = (code *)swi(0x2e);
  uVar2 = (*pcVar1)();
  *local_res18 = param_3;
  local_res18[-1] = param_3;
  local_res18[-2] =
       (ulonglong)(bVar11 & 1) * 0x4000 | (ulonglong)(bVar10 & 1) * 0x800 |
       (ulonglong)((local_res10 & 0x400) != 0) * 0x400 | (ulonglong)(bVar9 & 1) * 0x200 |
       (ulonglong)(bVar8 & 1) * 0x100 | (ulonglong)(bVar7 & 1) * 0x80 |
       (ulonglong)(bVar6 & 1) * 0x40 | (ulonglong)(bVar5 & 1) * 0x10 | (ulonglong)(bVar4 & 1) * 4 |
       (ulonglong)(bVar3 & 1) | (ulonglong)(bVar15 & 1) * 0x200000 |
       (ulonglong)(bVar14 & 1) * 0x100000 | (ulonglong)(bVar13 & 1) * 0x80000 |
       (ulonglong)(bVar12 & 1) * 0x40000;
  uVar16 = local_res18[-2];
  local_res18[-2] =
       (ulonglong)((uVar16 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar16 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar16 & 0x400) != 0) * 0x400 | (ulonglong)((uVar16 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar16 & 0x100) != 0) * 0x100 | (ulonglong)((uVar16 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar16 & 0x40) != 0) * 0x40 | (ulonglong)((uVar16 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar16 & 4) != 0) * 4 | (ulonglong)((uVar16 & 1) != 0) |
       (ulonglong)((uVar16 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar16 & 0x40000) != 0) * 0x40000;
  local_res18[-3] = uVar2;
  uVar16 = local_res18[-2];
  local_res18[-2] = local_res18[-3];
  local_res18[-3] =
       (ulonglong)((uVar16 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar16 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar16 & 0x400) != 0) * 0x400 | (ulonglong)((uVar16 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar16 & 0x100) != 0) * 0x100 | (ulonglong)((uVar16 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar16 & 0x40) != 0) * 0x40 | (ulonglong)((uVar16 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar16 & 4) != 0) * 4 | (ulonglong)((uVar16 & 1) != 0) |
       (ulonglong)((uVar16 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar16 & 0x40000) != 0) * 0x40000;
  *local_res18 = 0x6d6aff4;
  FUN_165c7153c(param_1,param_2,local_res18[-1]);
  return;
}



// FUNCTION 14d9ccea1 FUN_14d9ccea1 body=193 status=ok
// SIG undefined FUN_14d9ccea1(void)

void FUN_14d9ccea1(void)

{
  FUN_165718291();
  return;
}



// FUNCTION 14d9ccfdc FUN_14d9ccfdc body=135 status=ok
// SIG undefined FUN_14d9ccfdc(void)

/* WARNING: Removing unreachable block (ram,0x00014d9cd058) */
/* WARNING: Removing unreachable block (ram,0x00014d9cd063) */
/* WARNING: Removing unreachable block (ram,0x00014d9cd0d7) */
/* WARNING: Removing unreachable block (ram,0x00014d9cd0dc) */
/* WARNING: Removing unreachable block (ram,0x00014d9cd0e2) */
/* WARNING: Removing unreachable block (ram,0x000162d8af87) */
/* WARNING: Removing unreachable block (ram,0x000162d8af93) */
/* WARNING: Removing unreachable block (ram,0x000162d8af8e) */
/* WARNING: Removing unreachable block (ram,0x000162d8b000) */
/* WARNING: Removing unreachable block (ram,0x000162d8affb) */
/* WARNING: Removing unreachable block (ram,0x000162d8b011) */
/* WARNING: Removing unreachable block (ram,0x000162d8b016) */
/* WARNING: Removing unreachable block (ram,0x000160bd9d11) */
/* WARNING: Removing unreachable block (ram,0x000162d8b01c) */
/* WARNING: Removing unreachable block (ram,0x000162d8b097) */
/* WARNING: Removing unreachable block (ram,0x000162d8b09d) */
/* WARNING: Removing unreachable block (ram,0x0001664d72ec) */
/* WARNING: Removing unreachable block (ram,0x0001664d7336) */
/* WARNING: Removing unreachable block (ram,0x0001664d733a) */
/* WARNING: Removing unreachable block (ram,0x000166d5634a) */
/* WARNING: Removing unreachable block (ram,0x000166d563d5) */
/* WARNING: Removing unreachable block (ram,0x00014d9cd05e) */
/* WARNING: Removing unreachable block (ram,0x000166d5635c) */

undefined8 FUN_14d9ccfdc(undefined8 param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 in_RAX;
  undefined8 uVar4;
  ulonglong unaff_RBX;
  undefined8 unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong auStack_10 [2];
  
  *(undefined8 *)(&stack0x00000000 + param_2) = unaff_RDI;
  *(ulonglong *)(&stack0x00000000 + param_2) =
       *(longlong *)(&stack0x00000000 + param_2) - (unaff_RBX & 0xfffffffffffffffe);
  uVar4 = *(undefined8 *)(&stack0x00000000 + param_2);
  uVar2 = *(ulonglong *)(unaff_R13 + -0x78);
  *(undefined8 *)(&stack0x00000000 + param_2) = *(undefined8 *)(unaff_R13 + -0x28);
  uVar3 = *(ulonglong *)(&stack0x00000000 + param_2);
  puVar1 = (ulonglong *)(&stack0x00000000 + param_2);
  *puVar1 = uVar2 ^ unaff_R15;
  *puVar1 = *(ulonglong *)(unaff_R13 + -0x30);
  uVar2 = *puVar1;
  *puVar1 = *(ulonglong *)(unaff_R13 + -0x68);
  *(undefined8 *)(&stack0x00000000 + param_2) = in_RAX;
  *(ulonglong *)(&stack0x00000000 + param_2) = unaff_R15;
  *(ulonglong *)((longlong)auStack_10 + param_2 + 8) = uVar2 ^ unaff_R15;
  *(undefined8 *)((longlong)auStack_10 + param_2) = uVar4;
  *(undefined4 *)(&stack0x00000000 + param_2) = 0xe92f6dd;
  *(int *)(&stack0x00000000 + param_2) = *(int *)(&stack0x00000000 + param_2) + 0x6d898e84;
  *(undefined4 *)(&stack0x00000004 + param_2) = 0;
  *(ulonglong *)(&stack0x00000000 + param_2) = uVar3 + unaff_R15 + (uVar3 & unaff_R15) * -2;
  *(undefined8 *)((longlong)auStack_10 + param_2 + 8) = 0x164b6252b;
  FUN_162bc02d9();
  uVar4 = FUN_164b62531();
  return uVar4;
}



// FUNCTION 14d9cd063 FUN_14d9cd063 body=142 status=ok
// SIG undefined FUN_14d9cd063(void)

/* WARNING: Removing unreachable block (ram,0x000162d8b097) */
/* WARNING: Removing unreachable block (ram,0x000162d8b09d) */
/* WARNING: Removing unreachable block (ram,0x000162d8b01c) */
/* WARNING: Removing unreachable block (ram,0x0001664d72ec) */
/* WARNING: Removing unreachable block (ram,0x0001664d7336) */
/* WARNING: Removing unreachable block (ram,0x0001664d733a) */
/* WARNING: Removing unreachable block (ram,0x00014d9cd0e2) */
/* WARNING: Removing unreachable block (ram,0x000160bd9d11) */

undefined8 FUN_14d9cd063(ulonglong param_1,undefined1 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 uStackX_8;
  
  if (0x12df42 < param_1) {
    uVar1 = FUN_162d8af87(param_1 - 0x12df43);
    return uVar1;
  }
  if (param_1 - 0x12df43 != 0) {
    if (param_4 == 0x12df44) {
      uVar1 = thunk_FUN_165e93f27();
      return uVar1;
    }
    uVar1 = FUN_160bd9d24();
    return uVar1;
  }
  uVar1 = FUN_165e93f27(uStackX_8,param_2,param_3,&DAT_14d7c1a46);
  return uVar1;
}



// FUNCTION 14d9cd18f FUN_14d9cd18f body=105 status=ok
// SIG undefined FUN_14d9cd18f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d9cd18f(undefined4 param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  longlong local_res18;
  
  puVar1 = (ulonglong *)(local_res18 + -8);
  *puVar1 = 0;
  *puVar1 = *puVar1;
  *puVar1 = *puVar1 ^ unaff_RBP;
  *(undefined8 *)(local_res18 + -0x10) = param_2;
  *(undefined8 *)(local_res18 + -0x18) = param_2;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RBX;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined1 **)(local_res18 + -8) = &LAB_14d9cd210;
  LOCK();
  **(undefined4 **)(local_res18 + -0x18) = param_1;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d9cd604 FUN_14d9cd604 body=607 status=ok
// SIG undefined FUN_14d9cd604(void)

/* WARNING: Removing unreachable block (ram,0x0001663c746f) */
/* WARNING: Removing unreachable block (ram,0x0001663c747a) */
/* WARNING: Removing unreachable block (ram,0x0001653504a6) */
/* WARNING: Removing unreachable block (ram,0x0001653504ac) */
/* WARNING: Removing unreachable block (ram,0x0001663c7475) */
/* WARNING: Removing unreachable block (ram,0x0001653503a7) */
/* WARNING: Removing unreachable block (ram,0x000165350425) */
/* WARNING: Removing unreachable block (ram,0x00015b27d64a) */
/* WARNING: Removing unreachable block (ram,0x00014d9cd756) */
/* WARNING: Removing unreachable block (ram,0x00014d9cd75e) */
/* WARNING: Removing unreachable block (ram,0x00014d9cd7de) */
/* WARNING: Removing unreachable block (ram,0x00014d9cd7e4) */
/* WARNING: Removing unreachable block (ram,0x0001617efdf3) */
/* WARNING: Removing unreachable block (ram,0x0001626bf270) */
/* WARNING: Removing unreachable block (ram,0x0001626bf2fd) */
/* WARNING: Removing unreachable block (ram,0x0001626bf303) */
/* WARNING: Removing unreachable block (ram,0x000160cd3a10) */

void FUN_14d9cd604(void)

{
  undefined8 in_R10;
  undefined8 in_stack_00000008;
  
  FUN_14e1f1fec(in_stack_00000008);
  FUN_1653503a7(in_R10);
  return;
}



// FUNCTION 14d9cd7e4 FUN_14d9cd7e4 body=159 status=ok
// SIG undefined FUN_14d9cd7e4(void)

void FUN_14d9cd7e4(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_162965cd1(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,*(undefined8 *)(unaff_R13 + -0x28),
                param_2 + param_3 * -2);
  return;
}



// FUNCTION 14d9cd947 FUN_14d9cd947 body=100 status=ok
// SIG undefined FUN_14d9cd947(void)

void FUN_14d9cd947(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RDI;
  longlong local_res20;
  
  *(undefined8 *)(local_res20 + -8) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -8) = 0;
  *(undefined1 **)(local_res20 + -8) = &LAB_14d9cd9bb + *(longlong *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x10) = in_RAX;
  return;
}



// FUNCTION 14d9cdb2c FUN_14d9cdb2c body=174 status=ok
// SIG undefined FUN_14d9cdb2c(void)

void FUN_14d9cdb2c(undefined8 param_1)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  (*(code *)0x16488c88a)
            (param_1,0x16488c88a,
             ((unaff_RBP - 1) - (-1 - *(longlong *)(unaff_RSI + -0x60))) +
             (-1 - (0xffffffffffffffffU - *(longlong *)(unaff_RSI + -0x60) |
                   unaff_RBP ^ 0xffffffffffffffff)) * -2,
             *(ulonglong *)(unaff_RSI + -0x28) ^ unaff_RBP);
  return;
}



// FUNCTION 14d9cdd2a FUN_14d9cdd2a body=258 status=ok
// SIG undefined FUN_14d9cdd2a(void)

void FUN_14d9cdd2a(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_165b5652b(FUN_165b5652b,
                ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) &
                 (~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)));
  return;
}



// FUNCTION 14d9cde61 FUN_14d9cde61 body=163 status=ok
// SIG undefined FUN_14d9cde61(void)

void FUN_14d9cde61(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  
  (*(code *)0x166b018cd)(param_1,param_2,param_3,param_4,*(undefined8 *)(unaff_RDI + -0x90));
  return;
}



// FUNCTION 14d9cdf05 FUN_14d9cdf05 body=73 status=ok
// SIG undefined FUN_14d9cdf05(void)

void FUN_14d9cdf05(void)

{
  return;
}



// FUNCTION 14d9cdf9f FUN_14d9cdf9f body=448 status=ok
// SIG undefined FUN_14d9cdf9f(void)

/* WARNING: Removing unreachable block (ram,0x00014d9ce019) */
/* WARNING: Removing unreachable block (ram,0x00014d9ce024) */
/* WARNING: Removing unreachable block (ram,0x00014d9ce01f) */

void FUN_14d9cdf9f(void)

{
  return;
}



// FUNCTION 14d9ce458 FUN_14d9ce458 body=50 status=ok
// SIG undefined FUN_14d9ce458(void)

void FUN_14d9ce458(LPCSTR param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014d9ce484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LoadLibraryA(param_1);
  return;
}



// FUNCTION 14d9ce4fa FUN_14d9ce4fa body=136 status=ok
// SIG undefined FUN_14d9ce4fa(void)

void FUN_14d9ce4fa(undefined8 param_1,undefined8 param_2)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  (*(code *)&LAB_160c6df99)
            (&LAB_160c6df99,param_2,
             ~((~unaff_RBP | *(ulonglong *)(unaff_RSI + -0x60)) &
              (~*(ulonglong *)(unaff_RSI + -0x60) | unaff_RBP)));
  return;
}



// FUNCTION 14d9ce60f FUN_14d9ce60f body=137 status=ok
// SIG undefined FUN_14d9ce60f(void)

void FUN_14d9ce60f(ulonglong param_1)

{
  undefined8 in_R11;
  undefined4 unaff_retaddr;
  ulonglong local_res18;
  ulonglong local_res20;
  
  *(undefined8 *)(&stack0x40509daf + CONCAT44(0xffffffff,unaff_retaddr)) = in_R11;
  local_res18 = local_res18 ^ param_1;
  local_res20 = local_res20 ^ param_1;
  FUN_165a052bb(param_1,&local_res18);
  FUN_14d9ce69c();
  return;
}



// FUNCTION 14d9ce69c FUN_14d9ce69c body=154 status=ok
// SIG undefined FUN_14d9ce69c(void)

/* WARNING: Removing unreachable block (ram,0x000165b50954) */
/* WARNING: Removing unreachable block (ram,0x00014d9ce722) */

void FUN_14d9ce69c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  undefined8 in_R11;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined1 local_res10 [8];
  ulonglong uStackX_18;
  ulonglong uStackX_20;
  
  uVar3 = (~((in_RAX ^ 0xffffffffffffffff) & uStackX_18) + uStackX_18) -
          ~(in_RAX ^ 0xffffffffffffffff);
  uVar1 = 0xffffffffffffffff - uStackX_18 | in_RAX;
  uStackX_18 = ~((uVar1 - (uVar3 | uVar1)) + uVar3);
  uStackX_20 = uStackX_20 ^ in_RAX;
  if (local_res10 < &DAT_fffffffffffffff8) {
    FUN_1667ed403();
    return;
  }
  *(undefined8 *)(uStackX_20 - 8) = unaff_R14;
  *(undefined8 *)(uStackX_20 - 0x10) = param_3;
  *(undefined8 *)(uStackX_20 - 0x18) = param_3;
  *(undefined8 *)(uStackX_20 - 0x20) = unaff_R15;
  uVar2 = *(undefined8 *)(uStackX_20 - 0x20);
  *(undefined8 *)(uStackX_20 - 0x10) = *(undefined8 *)(uStackX_20 - 8);
  *(undefined8 *)(uStackX_20 - 0x18) = in_R11;
  *(undefined8 *)(uStackX_20 - 8) = 0;
  *(longlong *)(uStackX_20 - 8) = *(longlong *)(uStackX_20 - 8) + -0x156ba1513;
  *(undefined8 *)(uStackX_20 - 0x18) = uVar2;
  *(undefined8 *)(uStackX_20 - 0x20) = uVar2;
  *(undefined8 *)(uStackX_20 - 0x28) = uVar2;
  *(code **)(uStackX_20 - 0x18) = FUN_1667ed4be;
  *(undefined1 **)(uStackX_20 - 0x20) = &LAB_156ba14d0;
  return;
}



// FUNCTION 14d9ce7d5 FUN_14d9ce7d5 body=151 status=ok
// SIG undefined FUN_14d9ce7d5(void)

void FUN_14d9ce7d5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  code *UNRECOVERED_JUMPTABLE;
  longlong in_stack_00000008;
  undefined8 local_res10 [3];
  
  uVar1 = local_res10[0];
  local_res10[0] = *(undefined8 *)(in_stack_00000008 + -8);
  local_res10[1] = param_2;
  lVar2 = FUN_156abde98(param_1,uVar1);
  *(undefined8 *)((longlong)local_res10 + lVar2) = param_4;
  UNRECOVERED_JUMPTABLE = (code *)FUN_15b9eec13();
                    /* WARNING: Could not recover jumptable at 0x00014d9ce8f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14d9ce86f FUN_14d9ce86f body=118 status=ok
// SIG undefined FUN_14d9ce86f(void)

void FUN_14d9ce86f(void)

{
  longlong in_RAX;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_retaddr;
  undefined8 auStackX_10 [3];
  
  *(undefined8 *)((longlong)auStackX_10 + in_RAX) = unaff_retaddr;
  UNRECOVERED_JUMPTABLE = (code *)FUN_15b9eec13();
                    /* WARNING: Could not recover jumptable at 0x00014d9ce8f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14d9ce8e7 FUN_14d9ce8e7 body=13 status=ok
// SIG undefined FUN_14d9ce8e7(void)

void FUN_14d9ce8e7(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014d9ce8f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14d9ceac0 FUN_14d9ceac0 body=298 status=ok
// SIG undefined FUN_14d9ceac0(void)

/* WARNING: Removing unreachable block (ram,0x0001619441ce) */
/* WARNING: Removing unreachable block (ram,0x0001619441d4) */
/* WARNING: Removing unreachable block (ram,0x00014d9ceb56) */
/* WARNING: Removing unreachable block (ram,0x00014d9ceb5c) */
/* WARNING: Removing unreachable block (ram,0x00014d9cebe3) */
/* WARNING: Removing unreachable block (ram,0x00014d9cebee) */
/* WARNING: Removing unreachable block (ram,0x00014d9cebf4) */
/* WARNING: Removing unreachable block (ram,0x00014d9cebf9) */
/* WARNING: Removing unreachable block (ram,0x00016685b926) */
/* WARNING: Removing unreachable block (ram,0x00016685b9a3) */
/* WARNING: Removing unreachable block (ram,0x00016685b9a9) */
/* WARNING: Removing unreachable block (ram,0x000161944135) */
/* WARNING: Removing unreachable block (ram,0x0001619441c9) */
/* WARNING: Removing unreachable block (ram,0x00014debf093) */

undefined8 FUN_14d9ceac0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_16685b926();
  return uVar1;
}



// FUNCTION 14d9cebf9 FUN_14d9cebf9 body=165 status=ok
// SIG undefined FUN_14d9cebf9(void)

void FUN_14d9cebf9(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_156e1fd42(param_1,param_2,
                ((-1 - (~unaff_R15 & *(ulonglong *)(unaff_R13 + -0x80))) +
                *(ulonglong *)(unaff_R13 + -0x80)) - unaff_R15);
  return;
}



// FUNCTION 14d9cef71 thunk_FUN_14d9cef77 body=5 status=ok
// SIG undefined thunk_FUN_14d9cef77(void)

void thunk_FUN_14d9cef77(void)

{
  return;
}



// FUNCTION 14d9cef77 FUN_14d9cef77 body=94 status=ok
// SIG undefined FUN_14d9cef77(void)

void FUN_14d9cef77(void)

{
  return;
}



// FUNCTION 14d9cf224 FUN_14d9cf224 body=189 status=ok
// SIG undefined FUN_14d9cf224(void)

void FUN_14d9cf224(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  
  FUN_160d03715(param_1,param_2,param_3,param_4,*(undefined8 *)(unaff_RDI + -8),
                *(undefined8 *)(unaff_RDI + -0x90));
  FUN_166a62797();
  return;
}



// FUNCTION 14d9cf2e2 FUN_14d9cf2e2 body=154 status=ok
// SIG undefined FUN_14d9cf2e2(void)

void FUN_14d9cf2e2(undefined8 param_1,longlong param_2)

{
  if (param_2 == 0x7fe6f) {
    FUN_166a62797(param_1,0x14d7be543);
    return;
  }
  if (param_2 != 0x80075) {
    return;
  }
  FUN_166a62797(param_1,0x14d7bd24d);
  return;
}



// FUNCTION 14d9cf37c FUN_14d9cf37c body=588 status=ok
// SIG undefined FUN_14d9cf37c(void)

void FUN_14d9cf37c(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  code *pcVar2;
  longlong lVar3;
  ulonglong in_R10;
  ulonglong *puVar4;
  longlong unaff_R12;
  ulonglong unaff_R15;
  ulonglong local_res20;
  
  local_res20 = local_res20 ^ unaff_R15;
  uVar1 = in_R10;
  FUN_1572f73a5();
  local_res20 = (~local_res20 | ~uVar1) & (local_res20 | uVar1);
  puVar4 = &local_res20;
  pcVar2 = FUN_15711de98;
  uVar1 = FUN_15711de98();
  lVar3 = (~(ulonglong)pcVar2 | (ulonglong)puVar4) + in_R10 + 1;
  FUN_166b4b58a(FUN_166b4b58a,0xffffffffffffffff,0x2a0ded28,
                ~((uVar1 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_R12 + -0x30)) &
                 (~*(ulonglong *)(unaff_R12 + -0x30) | uVar1)));
  (*(code *)0x166bd93a6)(0xffffffffffffff01,*(ulonglong *)(unaff_RSI + (1 - lVar3)) | unaff_RBP);
  return;
}



// FUNCTION 14d9cf5ce FUN_14d9cf5ce body=84 status=ok
// SIG undefined FUN_14d9cf5ce(void)

void FUN_14d9cf5ce(ulonglong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RDI;
  
  *(ulonglong *)(&stack0xfffffffff3bedd39 + param_2) = *(ulonglong *)(unaff_RDI + -0x60);
  uVar2 = *(ulonglong *)(&stack0xfffffffff3bedd39 + param_2);
  uVar1 = *(ulonglong *)(unaff_RDI + -0x70);
  uVar3 = uVar1 | param_1;
  *(longlong *)(&stack0xfffffffff3bedd39 + param_2) = unaff_RDI;
  *(longlong *)(&stack0xfffffffff3bedd31 + param_2) = unaff_RDI;
  *(undefined1 **)(&stack0xfffffffff3bedd39 + param_2) = &LAB_14d9cf670;
  FUN_164804c1e((char)param_1,uVar3,0xffffffffffffffff - (uVar1 & param_1) & uVar3,
                ~(uVar2 & param_1) & (uVar2 | param_1));
  return;
}



// FUNCTION 14d9cf84a FUN_14d9cf84a body=69 status=ok
// SIG undefined FUN_14d9cf84a(void)

void FUN_14d9cf84a(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_R11;
  longlong unaff_R15;
  undefined8 local_res8;
  undefined8 local_res18 [2];
  
  *(undefined8 *)((longlong)local_res18 + unaff_R15) = in_R11;
  local_res18[0] = param_2;
  FUN_14d7a754d(param_1,param_2,local_res8);
  return;
}



// FUNCTION 14d9cfcb6 FUN_14d9cfcb6 body=165 status=ok
// SIG undefined FUN_14d9cfcb6(void)

void FUN_14d9cfcb6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1613471ff(param_1,&stack0x00000000,param_3);
  FUN_15b3d5987();
  return;
}



// FUNCTION 14d9cfd5c FUN_14d9cfd5c body=14 status=ok
// SIG undefined FUN_14d9cfd5c(void)

void FUN_14d9cfd5c(void)

{
  FUN_15b3d5987();
  return;
}



// FUNCTION 14d9cfe97 FUN_14d9cfe97 body=431 status=ok
// SIG undefined FUN_14d9cfe97(void)

/* WARNING: Removing unreachable block (ram,0x00014d9cff1f) */

void FUN_14d9cfe97(ulonglong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  
  FUN_16489a92d(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,~(param_3 & param_1) & param_2,
                param_4);
  return;
}



// FUNCTION 14d9d0073 FUN_14d9d0073 body=60 status=ok
// SIG undefined FUN_14d9d0073(void)

void FUN_14d9d0073(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 unaff_RBP;
  undefined8 uStackX_8;
  
  *(undefined8 *)(param_3 + 8) = unaff_RBP;
  thunk_FUN_15b642ca5(param_1,param_2,uStackX_8);
  return;
}



// FUNCTION 14d9d01a0 FUN_14d9d01a0 body=270 status=ok
// SIG undefined FUN_14d9d01a0(void)

/* WARNING: Removing unreachable block (ram,0x00015710976c) */
/* WARNING: Removing unreachable block (ram,0x00014d9d021b) */
/* WARNING: Removing unreachable block (ram,0x00015710970f) */
/* WARNING: Removing unreachable block (ram,0x00015710976f) */
/* WARNING: Removing unreachable block (ram,0x00015710984b) */
/* WARNING: Removing unreachable block (ram,0x000157109851) */
/* WARNING: Removing unreachable block (ram,0x00014e037891) */
/* WARNING: Removing unreachable block (ram,0x00014e03791d) */
/* WARNING: Removing unreachable block (ram,0x00014e037923) */
/* WARNING: Removing unreachable block (ram,0x00014e037928) */
/* WARNING: Removing unreachable block (ram,0x00014e037969) */
/* WARNING: Removing unreachable block (ram,0x000166c8fc54) */
/* WARNING: Removing unreachable block (ram,0x000166c8fce1) */
/* WARNING: Removing unreachable block (ram,0x000166c8fcec) */
/* WARNING: Removing unreachable block (ram,0x000166c8fcf2) */
/* WARNING: Removing unreachable block (ram,0x000166c8fcf7) */
/* WARNING: Removing unreachable block (ram,0x00014e03796e) */
/* WARNING: Removing unreachable block (ram,0x00014e037973) */

undefined8 FUN_14d9d01a0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_15710970f();
  return uVar1;
}



// FUNCTION 14d9d02af FUN_14d9d02af body=136 status=ok
// SIG undefined FUN_14d9d02af(void)

void FUN_14d9d02af(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong unaff_RSI;
  ulonglong unaff_R15;
  
  FUN_1655403af(param_1,~((~unaff_RSI | param_2) & (~(~param_2 & unaff_R15) + unaff_R15) - param_2),
                param_3);
  return;
}



// FUNCTION 14d9d0629 FUN_14d9d0629 body=138 status=ok
// SIG undefined FUN_14d9d0629(void)

/* WARNING: Instruction at (ram,0x00014d9d073c) overlaps instruction at (ram,0x00014d9d073b)
    */
/* WARNING: Removing unreachable block (ram,0x00014d9d06aa) */
/* WARNING: Removing unreachable block (ram,0x00014d9d06b0) */
/* WARNING: Removing unreachable block (ram,0x00014d9d06b5) */
/* WARNING: Removing unreachable block (ram,0x00014d9d06fa) */
/* WARNING: Removing unreachable block (ram,0x00014d9d073c) */
/* WARNING: Removing unreachable block (ram,0x00014d9d0751) */
/* WARNING: Removing unreachable block (ram,0x0001620ed700) */
/* WARNING: Removing unreachable block (ram,0x00014d9d0757) */
/* WARNING: Removing unreachable block (ram,0x00014d9d073b) */
/* WARNING: Removing unreachable block (ram,0x00014d9d075c) */
/* WARNING: Removing unreachable block (ram,0x00014d9d07f5) */
/* WARNING: Removing unreachable block (ram,0x00014d9d07fb) */
/* WARNING: Removing unreachable block (ram,0x000162ab3df3) */

undefined8 FUN_14d9d0629(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  uVar1 = FUN_161ce93e6(param_1,*(ulonglong *)(unaff_RDI + unaff_RBP + unaff_RSI) ^ param_1,
                        FUN_161ce93e6,param_4);
  return uVar1;
}



// FUNCTION 14d9d06b5 FUN_14d9d06b5 body=506 status=ok
// SIG undefined FUN_14d9d06b5(void)

/* WARNING: Instruction at (ram,0x00014d9d073c) overlaps instruction at (ram,0x00014d9d073b)
    */
/* WARNING: Removing unreachable block (ram,0x00014d9d0757) */
/* WARNING: Removing unreachable block (ram,0x00014d9d07fb) */
/* WARNING: Removing unreachable block (ram,0x00014d9d073b) */
/* WARNING: Removing unreachable block (ram,0x00014d9d07f5) */
/* WARNING: Removing unreachable block (ram,0x000162ab3df3) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000008 : 0x0001620ed77d */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d9d06b5(void)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)0x16176fca0)();
  return uVar1;
}



// FUNCTION 14d9d0801 FUN_14d9d0801 body=146 status=ok
// SIG undefined FUN_14d9d0801(void)

/* WARNING: Removing unreachable block (ram,0x00014d9d084e) */

void FUN_14d9d0801(void)

{
  longlong unaff_R13;
  
  FUN_165f6cbcf(0,*(undefined8 *)(unaff_R13 + -0x78));
  return;
}



// FUNCTION 14d9d0894 FUN_14d9d0894 body=99 status=ok
// SIG undefined FUN_14d9d0894(void)

void FUN_14d9d0894(void)

{
  return;
}



// FUNCTION 14d9d08f8 FUN_14d9d08f8 body=178 status=ok
// SIG undefined FUN_14d9d08f8(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d9d08f8(void)

{
  FUN_16264d80d(0x4f6a6373,FUN_16264d80d,0x11878f81);
  return;
}



// FUNCTION 14d9d0c37 FUN_14d9d0c37 body=16 status=ok
// SIG undefined FUN_14d9d0c37(void)

void FUN_14d9d0c37(void)

{
  FUN_14d7c2ca1();
  return;
}



// FUNCTION 14d9d0f1d FUN_14d9d0f1d body=272 status=ok
// SIG undefined FUN_14d9d0f1d(void)

void FUN_14d9d0f1d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R13;
  
  FUN_166cad02d(param_1,param_2,param_3,-1 - ~*(ulonglong *)(unaff_R13 + -0x50));
  FUN_1615db13c(FUN_1615db13c);
  return;
}



// FUNCTION 14d9d102f FUN_14d9d102f body=273 status=ok
// SIG undefined FUN_14d9d102f(void)

/* WARNING: Removing unreachable block (ram,0x00014d9d10bf) */
/* WARNING: Removing unreachable block (ram,0x00014d9d10e9) */
/* WARNING: Removing unreachable block (ram,0x00014d9d10ee) */

void FUN_14d9d102f(undefined8 param_1,char param_2)

{
  byte unaff_SIL;
  char unaff_DIL;
  int unaff_R13D;
  
  if (&stack0x00000000 <= &DAT_fffffffffffffff7) {
    FUN_1567aa970();
    return;
  }
  FUN_162548ce3();
  FUN_160d557c8(*(undefined8 *)((ulonglong)(unaff_R13D + 0xb39f3995) - 0x78),
                CONCAT71(0xffffffffffffff,
                         (unaff_SIL - (~(unaff_DIL - param_2) | unaff_SIL)) + ~(unaff_DIL - param_2)
                        ),FUN_160d557c8);
  return;
}



// FUNCTION 14d9d1233 FUN_14d9d1233 body=145 status=ok
// SIG undefined FUN_14d9d1233(void)

void FUN_14d9d1233(undefined8 param_1,undefined8 param_2,short param_3,undefined8 param_4)

{
  short *unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 local_res8;
  longlong local_res20;
  
  *unaff_RSI = param_3 + 1;
  *(undefined8 *)(local_res20 + -8) = param_4;
  *(undefined8 *)(local_res20 + -0x10) = unaff_R15;
  *(undefined8 *)(local_res20 + -0x10) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x10) = 0;
  *(ulonglong *)(local_res20 + -0x10) =
       *(ulonglong *)(local_res20 + -0x10) ^ *(ulonglong *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = unaff_R12;
  *(undefined8 *)(local_res20 + -0x20) = unaff_R13;
  *(undefined8 *)(local_res20 + -8) = 0x6b010722;
  *(undefined8 *)(local_res20 + -0x20) = local_res8;
  *(undefined8 *)(local_res20 + -0x28) = unaff_RDI;
  *(undefined **)(local_res20 + -0x30) = &DAT_1652f2e4d;
  return;
}



// FUNCTION 14d9d13d0 FUN_14d9d13d0 body=169 status=ok
// SIG undefined FUN_14d9d13d0(void)

void FUN_14d9d13d0(void)

{
  undefined8 uVar1;
  longlong unaff_R13;
  
  uVar1 = 0x2d8dd11b;
  FUN_16593ed54();
  FUN_15b1853fa(*(ulonglong *)(unaff_R13 + -0x78) + 0x4ac27a2a +
                (*(ulonglong *)(unaff_R13 + -0x78) & 0x4ac27a2a) * -2,
                *(ulonglong *)(unaff_R13 + -0x28) ^ 0x4ac27a2a,uVar1);
  return;
}



// FUNCTION 14d9d147b FUN_14d9d147b body=178 status=ok
// SIG undefined FUN_14d9d147b(void)

void FUN_14d9d147b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_15b1853fa(*(ulonglong *)(unaff_R13 + -0x78) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) * -2,
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15,param_3);
  return;
}



// FUNCTION 14d9d152d FUN_14d9d152d body=508 status=ok
// SIG undefined FUN_14d9d152d(void)

/* WARNING: Removing unreachable block (ram,0x000162e22125) */
/* WARNING: Removing unreachable block (ram,0x000162e220de) */
/* WARNING: Removing unreachable block (ram,0x000162e220e4) */
/* WARNING: Removing unreachable block (ram,0x00014d7c09b9) */
/* WARNING: Removing unreachable block (ram,0x000161ae378e) */
/* WARNING: Removing unreachable block (ram,0x0001629f2d2e) */
/* WARNING: Removing unreachable block (ram,0x0001629f2d34) */
/* WARNING: Removing unreachable block (ram,0x00014d9d15b8) */
/* WARNING: Removing unreachable block (ram,0x000161ae3757) */
/* WARNING: Removing unreachable block (ram,0x00014d9d1638) */

void FUN_14d9d152d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(0xba3 - ~(unaff_R13 - 0xbccU));
  FUN_156a3e5fc(*(ulonglong *)(unaff_R13 + -0x50) | unaff_R15,
                ~(uVar1 & unaff_R15) & (uVar1 | unaff_R15),param_3,param_4);
  FUN_1612ee3a2();
  return;
}



// FUNCTION 14d9d1892 FUN_14d9d1892 body=12 status=ok
// SIG undefined FUN_14d9d1892(void)

void FUN_14d9d1892(void)

{
  return;
}



// FUNCTION 14d9d1a29 FUN_14d9d1a29 body=486 status=ok
// SIG undefined FUN_14d9d1a29(void)

/* WARNING: Removing unreachable block (ram,0x00014d9d1aba) */
/* WARNING: Removing unreachable block (ram,0x00014d9d1ac0) */
/* WARNING: Removing unreachable block (ram,0x00014d9d805c) */

void FUN_14d9d1a29(void)

{
  return;
}



// FUNCTION 14d9d1d69 FUN_14d9d1d69 body=182 status=ok
// SIG undefined FUN_14d9d1d69(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d9d1d69(void)

{
  return;
}



// FUNCTION 14d9d1e20 FUN_14d9d1e20 body=289 status=ok
// SIG undefined FUN_14d9d1e20(void)

/* WARNING: Removing unreachable block (ram,0x00014d9d1e39) */
/* WARNING: Removing unreachable block (ram,0x00014d9d1f1d) */

void FUN_14d9d1e20(uint param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  longlong unaff_R14;
  undefined8 local_res8;
  ushort local_res10;
  ulonglong local_res18;
  
  pcVar3 = FUN_1660ca917;
  uVar2 = FUN_1660ca917(FUN_1660ca917,param_2,param_3 & param_1);
  uVar2 = ~(local_res18 & uVar2) &
          (~(*(ulonglong *)(&stack0x00000000 + unaff_R14) & uVar2) + uVar2) -
          ~*(ulonglong *)(&stack0x00000000 + unaff_R14);
  if (0x100 < (local_res10 | 0x100)) {
    FUN_16679080f();
    return;
  }
  *(undefined8 *)(uVar2 - 8) = local_res8;
  *(undefined8 *)(uVar2 - 0x10) = in_R11;
  *(undefined8 *)(uVar2 - 0x18) = in_R11;
  *(code **)(uVar2 - 0x20) = pcVar3;
  *(undefined4 *)(uVar2 - 0x28) = 0x5b71d07b;
  *(undefined4 *)(uVar2 - 0x24) = 0;
  uVar1 = *(undefined8 *)((uVar2 - 0x18) + (*(ulonglong *)(uVar2 - 0x28) ^ 0x5b71d06b));
  *(undefined8 *)(uVar2 - 0x20) = unaff_RDI;
  *(undefined8 *)(uVar2 - 0x10) = uVar1;
  *(undefined8 *)(uVar2 - 0x18) = unaff_RBP;
  *(undefined8 *)(uVar2 - 0x20) = unaff_R13;
  *(undefined1 **)(uVar2 - 8) = &LAB_15b67dd6a;
  *(undefined8 *)(uVar2 - 0x18) = unaff_R12;
  *(undefined8 *)(uVar2 - 0x20) = unaff_R12;
  *(undefined8 *)(uVar2 - 0x28) = unaff_R12;
  *(code **)(uVar2 - 0x18) = FUN_1667908c0;
  *(undefined **)(uVar2 - 0x20) = &DAT_15b67dd37;
  return;
}



// FUNCTION 14d9d204b FUN_14d9d204b body=142 status=ok
// SIG undefined FUN_14d9d204b(void)

void FUN_14d9d204b(void)

{
  undefined8 local_res8;
  
  (*(code *)0x1657dcd6e)(local_res8,0x1657dcd6e);
  return;
}



// FUNCTION 14d9d20d9 FUN_14d9d20d9 body=155 status=ok
// SIG undefined FUN_14d9d20d9(void)

/* WARNING: Removing unreachable block (ram,0x00014d9d2122) */

void FUN_14d9d20d9(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  FUN_157474cc3(param_1,param_4,param_3,param_4 << 0x13);
  return;
}



// FUNCTION 14d9d2174 FUN_14d9d2174 body=474 status=ok
// SIG undefined FUN_14d9d2174(void)

/* WARNING: Removing unreachable block (ram,0x00014d9d22ab) */
/* WARNING: Removing unreachable block (ram,0x00014d9d2214) */
/* WARNING: Removing unreachable block (ram,0x00014d9d221a) */
/* WARNING: Removing unreachable block (ram,0x00014d9d22a5) */
/* WARNING: Removing unreachable block (ram,0x00014d9d22a0) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffe0 : 0x000166947e93 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d9d2174(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14d9d248c FUN_14d9d248c body=171 status=ok
// SIG undefined FUN_14d9d248c(void)

void FUN_14d9d248c(void)

{
  return;
}



// FUNCTION 14d9d2722 FUN_14d9d2722 body=155 status=ok
// SIG undefined FUN_14d9d2722(void)

void FUN_14d9d2722(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x60);
  (*(code *)0x16244f826)
            (param_1,uVar1 | param_1,0x16244f826,
             ~((param_1 - (uVar1 | param_1)) + uVar1) & (uVar1 | param_1));
  return;
}



// FUNCTION 14d9d2961 FUN_14d9d2961 body=511 status=ok
// SIG undefined FUN_14d9d2961(void)

/* WARNING: Removing unreachable block (ram,0x00014d9d2a33) */
/* WARNING: Removing unreachable block (ram,0x00014d9d2a09) */
/* WARNING: Removing unreachable block (ram,0x00014d9d2a96) */
/* WARNING: Removing unreachable block (ram,0x0001563f076c) */
/* WARNING: Removing unreachable block (ram,0x00014d9d2a9c) */

undefined8 FUN_14d9d2961(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d9d2b39 FUN_14d9d2b39 body=208 status=ok
// SIG undefined FUN_14d9d2b39(void)

void FUN_14d9d2b39(void)

{
  return;
}



// FUNCTION 14d9d2cc8 FUN_14d9d2cc8 body=137 status=ok
// SIG undefined FUN_14d9d2cc8(void)

void FUN_14d9d2cc8(void)

{
  return;
}



// FUNCTION 14d9d2d55 FUN_14d9d2d55 body=141 status=ok
// SIG undefined FUN_14d9d2d55(void)

/* WARNING: Removing unreachable block (ram,0x0001650cd0eb) */
/* WARNING: Removing unreachable block (ram,0x0001650cd09b) */
/* WARNING: Removing unreachable block (ram,0x0001650cd0a6) */
/* WARNING: Removing unreachable block (ram,0x0001650cd123) */
/* WARNING: Removing unreachable block (ram,0x000164f6baac) */
/* WARNING: Removing unreachable block (ram,0x0001650cd129) */
/* WARNING: Removing unreachable block (ram,0x00014d9d2de3) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d9d2d55(void)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  ulonglong local_res10;
  ulonglong local_res18;
  
  uVar2 = unaff_R15 - (local_res18 | unaff_R15);
  if (CARRY8(uVar2,local_res18)) {
    FUN_1650ccfdd();
    return;
  }
  lVar1 = (unaff_R15 - local_res18) + uVar2 * -2;
  *(undefined8 *)(lVar1 + -0x10) = unaff_R13;
  *(undefined8 *)(lVar1 + -8) = 0x17516c;
  if ((~(local_res10 & unaff_R15) & (local_res10 | unaff_R15) & 0x40) == 0) {
    FUN_1649384fe();
    return;
  }
  *(undefined8 *)(lVar1 + -0x28cf) = *(undefined8 *)(lVar1 + -0x10);
  *(undefined8 *)(lVar1 + -0x28d7) = *(undefined8 *)(lVar1 + -0x10);
  *(undefined **)(lVar1 + -0x28cf) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14d9d2de3 FUN_14d9d2de3 body=170 status=ok
// SIG undefined FUN_14d9d2de3(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d9d2de3(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong in_R10;
  ulonglong unaff_retaddr;
  undefined8 local_res8;
  undefined8 local_res20;
  
  *(undefined8 *)
   ((unaff_retaddr - (in_R10 - local_res20)) + (local_res20 & unaff_retaddr) * -2 + -8) = local_res8
  ;
  FUN_1620c711c(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d9d2e8d FUN_14d9d2e8d body=461 status=ok
// SIG undefined FUN_14d9d2e8d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d9d2e8d(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_R12;
  ulonglong unaff_retaddr;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x58);
  FUN_14dc50139(~((in_RAX - (uVar1 | in_RAX)) + uVar1) & (uVar1 | in_RAX),199,
                param_3 + (unaff_retaddr & in_RAX) * -2);
  FUN_1652c5c28();
  return;
}



// FUNCTION 14d9d311a FUN_14d9d311a body=164 status=ok
// SIG undefined FUN_14d9d311a(void)

void FUN_14d9d311a(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1566728d6(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
  return;
}



// FUNCTION 14d9d31be FUN_14d9d31be body=71 status=ok
// SIG undefined FUN_14d9d31be(void)

void FUN_14d9d31be(undefined8 param_1)

{
  undefined8 local_res10;
  
  thunk_FUN_15b642ca5(param_1,local_res10);
  return;
}



// FUNCTION 14d9d339a FUN_14d9d339a body=486 status=ok
// SIG undefined FUN_14d9d339a(void)

/* WARNING: Removing unreachable block (ram,0x0001668ea1b3) */
/* WARNING: Removing unreachable block (ram,0x0001668ea1be) */
/* WARNING: Removing unreachable block (ram,0x0001668ea1b9) */
/* WARNING: Removing unreachable block (ram,0x00014d9d3451) */
/* WARNING: Removing unreachable block (ram,0x00014d9d34ea) */
/* WARNING: Removing unreachable block (ram,0x00014d9d34e5) */
/* WARNING: Removing unreachable block (ram,0x0001570d7ab3) */
/* WARNING: Removing unreachable block (ram,0x00014d9d3440) */
/* WARNING: Removing unreachable block (ram,0x00014d9d3446) */
/* WARNING: Removing unreachable block (ram,0x00014d9d34f0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined * FUN_14d9d339a(void)

{
  return &DAT_156e5f3c2;
}



// FUNCTION 14d9d3451 FUN_14d9d3451 body=322 status=ok
// SIG undefined FUN_14d9d3451(void)

/* WARNING: Removing unreachable block (ram,0x00014d9d34ea) */
/* WARNING: Removing unreachable block (ram,0x00014d9d34f0) */

undefined1 * FUN_14d9d3451(void)

{
  return &LAB_156d35442;
}



// FUNCTION 14d9d359d FUN_14d9d359d body=185 status=ok
// SIG undefined FUN_14d9d359d(void)

void FUN_14d9d359d(void)

{
  return;
}



// FUNCTION 14d9d3657 FUN_14d9d3657 body=131 status=ok
// SIG undefined FUN_14d9d3657(void)

void FUN_14d9d3657(byte param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong in_RAX;
  longlong unaff_RBP;
  ulonglong unaff_R13;
  
  FUN_166527159(param_1 >> 4 | param_1 << 5,0x18,param_3,
                unaff_RBP - ~param_4 & (~unaff_R13 | in_RAX) ^ 0xffffffffffffffff);
  return;
}



// FUNCTION 14d9d39b7 FUN_14d9d39b7 body=35 status=ok
// SIG undefined FUN_14d9d39b7(void)

void FUN_14d9d39b7(void)

{
  longlong in_R9;
  longlong unaff_R13;
  longlong lStack0000000000000028;
  
  lStack0000000000000028 = unaff_R13 - in_R9;
  FUN_14d85d504();
  return;
}



// FUNCTION 14d9d3a59 FUN_14d9d3a59 body=299 status=ok
// SIG undefined FUN_14d9d3a59(void)

/* WARNING: Removing unreachable block (ram,0x000166714be9) */
/* WARNING: Removing unreachable block (ram,0x000166714bf4) */
/* WARNING: Removing unreachable block (ram,0x000166714bef) */
/* WARNING: Removing unreachable block (ram,0x000160ce24fb) */
/* WARNING: Removing unreachable block (ram,0x000160ce25b2) */
/* WARNING: Removing unreachable block (ram,0x00014d9d3ad7) */
/* WARNING: Removing unreachable block (ram,0x000160ce23f8) */
/* WARNING: Removing unreachable block (ram,0x000160ce24a4) */
/* WARNING: Removing unreachable block (ram,0x000160ce24c5) */
/* WARNING: Removing unreachable block (ram,0x000160ce24d2) */
/* WARNING: Removing unreachable block (ram,0x000160ce24de) */
/* WARNING: Removing unreachable block (ram,0x000160ce24f0) */
/* WARNING: Removing unreachable block (ram,0x000160ce24f6) */
/* WARNING: Removing unreachable block (ram,0x000162df4fc9) */
/* WARNING: Removing unreachable block (ram,0x000162df4fd1) */
/* WARNING: Removing unreachable block (ram,0x000162df504c) */
/* WARNING: Removing unreachable block (ram,0x000162df5052) */
/* WARNING: Removing unreachable block (ram,0x00015755925c) */
/* WARNING: Removing unreachable block (ram,0x000157559287) */
/* WARNING: Removing unreachable block (ram,0x0001575592b7) */
/* WARNING: Removing unreachable block (ram,0x0001575592a5) */
/* WARNING: Removing unreachable block (ram,0x0001620c6a31) */
/* WARNING: Removing unreachable block (ram,0x0001620c6a74) */
/* WARNING: Removing unreachable block (ram,0x0001620c6a95) */
/* WARNING: Removing unreachable block (ram,0x00014d9d3b81) */
/* WARNING: Removing unreachable block (ram,0x00014d9d3b87) */
/* WARNING: Removing unreachable block (ram,0x000166862b14) */
/* WARNING: Removing unreachable block (ram,0x00014d9d3bfc) */

undefined8 FUN_14d9d3a59(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  ulonglong unaff_retaddr;
  ulonglong in_stack_00000008;
  
  *(undefined8 *)
   (&stack0x00000020 + (~(in_stack_00000008 & unaff_retaddr) & (in_stack_00000008 | unaff_retaddr)))
       = param_3;
  uRam000000014d7a928c = 0;
  return in_RAX;
}



// FUNCTION 14d9d3b87 FUN_14d9d3b87 body=235 status=ok
// SIG undefined FUN_14d9d3b87(void)

void FUN_14d9d3b87(void)

{
  undefined8 unaff_retaddr;
  
  if (CONCAT44((int)((ulonglong)unaff_retaddr >> 0x20),0xe7a2c1) == 0xe7a2c1) {
    return;
  }
  return;
}



// FUNCTION 14d9d3c73 FUN_14d9d3c73 body=429 status=ok
// SIG undefined FUN_14d9d3c73(void)

/* WARNING: Instruction at (ram,0x000162d51223) overlaps instruction at (ram,0x000162d51222)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000164b9c727) */
/* WARNING: Removing unreachable block (ram,0x000164b9c732) */
/* WARNING: Removing unreachable block (ram,0x000164b9c736) */
/* WARNING: Removing unreachable block (ram,0x000162cafc08) */
/* WARNING: Removing unreachable block (ram,0x000162cafc02) */
/* WARNING: Removing unreachable block (ram,0x000162cafc0d) */
/* WARNING: Removing unreachable block (ram,0x000162cafc98) */
/* WARNING: Removing unreachable block (ram,0x000162cafc9d) */
/* WARNING: Removing unreachable block (ram,0x000156669763) */
/* WARNING: Removing unreachable block (ram,0x000156669865) */
/* WARNING: Removing unreachable block (ram,0x000156669867) */
/* WARNING: Removing unreachable block (ram,0x000162cafca3) */
/* WARNING: Removing unreachable block (ram,0x000162cafdac) */
/* WARNING: Removing unreachable block (ram,0x000162cafdb2) */
/* WARNING: Removing unreachable block (ram,0x000162cafdb7) */
/* WARNING: Removing unreachable block (ram,0x00014dbd4530) */
/* WARNING: Removing unreachable block (ram,0x00014dbd45b9) */
/* WARNING: Removing unreachable block (ram,0x00014dbd45be) */
/* WARNING: Removing unreachable block (ram,0x00014dbd45c4) */
/* WARNING: Removing unreachable block (ram,0x00014dbd45c9) */
/* WARNING: Removing unreachable block (ram,0x00014dbd45fc) */
/* WARNING: Removing unreachable block (ram,0x00014dbd4600) */
/* WARNING: Removing unreachable block (ram,0x00016181b509) */
/* WARNING: Removing unreachable block (ram,0x000162d512a1) */
/* WARNING: Removing unreachable block (ram,0x000162e4aeb4) */
/* WARNING: Removing unreachable block (ram,0x000162e4aeba) */
/* WARNING: Removing unreachable block (ram,0x000164b9c72d) */
/* WARNING: Removing unreachable block (ram,0x000162d51222) */
/* WARNING: Removing unreachable block (ram,0x00015b684325) */
/* WARNING: Removing unreachable block (ram,0x00015b684347) */
/* WARNING: Removing unreachable block (ram,0x00015b684339) */
/* WARNING: Removing unreachable block (ram,0x000162d512ed) */
/* WARNING: Removing unreachable block (ram,0x000162d5130b) */
/* WARNING: Removing unreachable block (ram,0x000162e4ae2d) */
/* WARNING: Removing unreachable block (ram,0x000162e4ae48) */
/* WARNING: Removing unreachable block (ram,0x00015b684280) */
/* WARNING: Removing unreachable block (ram,0x00015b6842f4) */
/* WARNING: Removing unreachable block (ram,0x000164efe9ab) */
/* WARNING: Removing unreachable block (ram,0x00015b6842f3) */
/* WARNING: Removing unreachable block (ram,0x000162d51311) */
/* WARNING: Removing unreachable block (ram,0x000162d5132c) */
/* WARNING: Removing unreachable block (ram,0x000162d51321) */
/* WARNING: Removing unreachable block (ram,0x00016181b5e5) */
/* WARNING: Removing unreachable block (ram,0x00014d9d3cee) */
/* WARNING: Removing unreachable block (ram,0x00014d9d3e1b) */
/* WARNING: Removing unreachable block (ram,0x0001659a447b) */
/* WARNING: Removing unreachable block (ram,0x00014d9d3e21) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffe8 : 0x00014dd5ad86 */
/* WARNING: Removing unreachable block (ram,0x000162d5124c) */
/* WARNING: Removing unreachable block (ram,0x000162d512e1) */
/* WARNING: Removing unreachable block (ram,0x00014de23e32) */
/* WARNING: Removing unreachable block (ram,0x000162d511c8) */
/* WARNING: Removing unreachable block (ram,0x00014dd5ad86) */
/* WARNING: Removing unreachable block (ram,0x000162d511fe) */
/* WARNING: Removing unreachable block (ram,0x00014dd5adc9) */
/* WARNING: Removing unreachable block (ram,0x00016181b52a) */
/* WARNING: Removing unreachable block (ram,0x000162cafb86) */
/* WARNING: Removing unreachable block (ram,0x000162d511c2) */
/* WARNING: Removing unreachable block (ram,0x000166af5cf4) */
/* WARNING: Removing unreachable block (ram,0x00016181b5ce) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14d9d3c73(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x28);
  uVar2 = FUN_1655226f4(~unaff_RSI,
                        uVar1 + unaff_R15 +
                        ((-~unaff_R15 - (~(~uVar1 & ~unaff_R15 | uVar1) + 2)) + 1) * -2,param_3,
                        param_4);
  return uVar2;
}



// FUNCTION 14d9d3e21 FUN_14d9d3e21 body=167 status=ok
// SIG undefined FUN_14d9d3e21(void)

undefined8 FUN_14d9d3e21(void)

{
  undefined8 local_res8;
  
  return local_res8;
}



// FUNCTION 14d9d3f5f FUN_14d9d3f5f body=137 status=ok
// SIG undefined FUN_14d9d3f5f(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d9d408d) */
/* WARNING: Removing unreachable block (ram,0x00014d9d3fe9) */
/* WARNING: Removing unreachable block (ram,0x00014d9d4087) */
/* WARNING: Removing unreachable block (ram,0x00014d7c547a) */

void FUN_14d9d3f5f(ulonglong param_1)

{
  ulonglong unaff_RSI;
  ulonglong unaff_R15;
  
  FUN_16574640c(~(unaff_RSI & (param_1 | unaff_R15)));
  return;
}



// FUNCTION 14d9d3fe9 FUN_14d9d3fe9 body=297 status=ok
// SIG undefined FUN_14d9d3fe9(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d9d408d) */

void FUN_14d9d3fe9(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_RAX;
  longlong unaff_RBX;
  undefined1 *unaff_RSI;
  uint unaff_EDI;
  undefined8 in_R11;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  ulonglong local_res20;
  
  uVar1 = ~((~unaff_R15 | local_res20) + unaff_R15 + 1) & (local_res20 | unaff_R15);
  *(undefined8 *)(uVar1 - 8) = in_R11;
  *(undefined8 *)(uVar1 - 0x10) = in_RAX;
  uVar3 = *(undefined8 *)(uVar1 - 0x10);
  *(undefined8 *)(uVar1 - 0x10) = param_4;
  uVar4 = *(undefined8 *)(uVar1 - 0x10);
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x18) = uVar4;
  *(undefined **)(uVar1 - 8) = &DAT_156d5ddda;
  uVar4 = *(undefined8 *)(uVar1 - 0x18);
  *(undefined8 *)(uVar1 - 0x18) = uVar3;
  *(undefined4 *)(uVar1 - 0x18) = 0;
  *(undefined8 *)(uVar1 - 0x20) = uVar3;
  *(undefined4 *)(uVar1 - 0x20) = 0xf00f4268;
  *(undefined4 *)(uVar1 - 0x1c) = 0xffffffff;
  *(undefined4 *)(uVar1 + *(longlong *)(uVar1 - 0x20) + 0xff0bd84) = 0;
  in((short)param_2);
  out(*unaff_RSI,(short)param_2);
  pcVar2 = (code *)swi(0xba);
  (*pcVar2)(in_stack_00000008,
            (longlong)
            (param_2 << 0x20 |
            CONCAT71((int7)(uVar1 - 8 >> 8),*(undefined1 *)(unaff_RBX + (uVar1 - 8 & 0xff))) &
            0xffffffff) % (longlong)*(int *)(param_2 + 0x75) & 0xffffffff,param_3,uVar4);
  *(char *)((ulonglong)unaff_EDI - 0x4a208a23) =
       *(char *)((ulonglong)unaff_EDI - 0x4a208a23) + (char)(unaff_EDI >> 8) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d9d4116 FUN_14d9d4116 body=143 status=ok
// SIG undefined FUN_14d9d4116(void)

void FUN_14d9d4116(undefined8 param_1)

{
  FUN_1566ee13c(param_1);
  FUN_14d9d41a8();
  return;
}



// FUNCTION 14d9d41a8 FUN_14d9d41a8 body=404 status=ok
// SIG undefined FUN_14d9d41a8(void)

/* WARNING: Instruction at (ram,0x00014d9d430c) overlaps instruction at (ram,0x00014d9d430b)
    */
/* WARNING: Removing unreachable block (ram,0x00014d9d4232) */
/* WARNING: Removing unreachable block (ram,0x00014d9d430c) */
/* WARNING: Removing unreachable block (ram,0x00014d9d430b) */
/* WARNING: Removing unreachable block (ram,0x00014d9d4311) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d9d41a8(void)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_R12;
  
  if (&stack0x00000000 == (undefined1 *)0x1700) {
    uVar2 = in_RAX ^ 0xffffffffffffffff | *(ulonglong *)(unaff_R12 + -0x80);
    uVar3 = 0xffffffffffffffff - *(ulonglong *)(unaff_R12 + -0x80) | in_RAX;
    uVar2 = ~((uVar3 - (uVar2 | uVar3)) + uVar2);
    uVar1 = FUN_1662076a8(~in_RAX & *(ulonglong *)(unaff_R12 + -0x30) | in_RAX,uVar2,uVar2);
    return uVar1;
  }
  uVar1 = FUN_14da8e408();
  return uVar1;
}



// FUNCTION 14d9d468b FUN_14d9d468b body=164 status=ok
// SIG undefined FUN_14d9d468b(void)

void FUN_14d9d468b(void)

{
  undefined8 in_RAX;
  uint *puVar1;
  longlong unaff_RDI;
  longlong lVar2;
  longlong unaff_R15;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  longlong local_res10;
  undefined1 auStackX_18 [16];
  undefined1 local_2e1d [11805];
  
  lVar2 = (unaff_R15 - unaff_RDI) + local_res10;
  puVar1 = (uint *)(lVar2 + -8);
  *(undefined8 *)puVar1 = in_RAX;
  *(ulonglong *)(lVar2 + -0x10) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SCARRY8((longlong)local_2e1d,0x2e35) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)((longlong)auStackX_18 < 0) * 0x80 |
       (ulonglong)(auStackX_18 == (undefined1 *)0x0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
       (ulonglong)((POPCOUNT((ulonglong)auStackX_18 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)((undefined1 *)0xffffffffffffd1ca < local_2e1d) |
       (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  *(ushort *)(lVar2 + -0x10) = *(ushort *)(lVar2 + -0x10) & 0x100;
  if (*(short *)(lVar2 + -0x10) != 0) {
    puVar1 = (uint *)(lVar2 + -0x10);
  }
  *puVar1 = 0;
  *puVar1 = *puVar1 + 0x42c80361;
  *puVar1 = *puVar1 ^ 0x4209e166;
  puVar1[1] = 0;
  *(undefined8 *)puVar1 = in_RAX;
  *puVar1 = 0xc1e20f;
  puVar1[-2] = 0x56676f85;
  puVar1[-1] = 1;
  return;
}



// FUNCTION 14d9d4731 FUN_14d9d4731 body=150 status=ok
// SIG undefined FUN_14d9d4731(void)

void FUN_14d9d4731(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_160fa6318(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
  FUN_14dcea587();
  return;
}



// FUNCTION 14d9d47c7 FUN_14d9d47c7 body=170 status=ok
// SIG undefined FUN_14d9d47c7(void)

void FUN_14d9d47c7(undefined8 param_1)

{
  FUN_14dcea587(param_1,0xfffffffff37fbf9b);
  return;
}



// FUNCTION 14d9d48fe FUN_14d9d48fe body=72 status=ok
// SIG undefined FUN_14d9d48fe(void)

void FUN_14d9d48fe(void)

{
  return;
}



// FUNCTION 14d9d4ac6 FUN_14d9d4ac6 body=305 status=ok
// SIG undefined FUN_14d9d4ac6(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001569398ff) overlaps instruction at (ram,0x0001569398fe)
    */
/* WARNING: Removing unreachable block (ram,0x0001617088ce) */
/* WARNING: Removing unreachable block (ram,0x000165cadbc6) */
/* WARNING: Removing unreachable block (ram,0x000165cadbcc) */
/* WARNING: Removing unreachable block (ram,0x000165cadbf8) */
/* WARNING: Removing unreachable block (ram,0x000161740574) */
/* WARNING: Removing unreachable block (ram,0x00015693990b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14d9d4ac6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  ushort *puVar3;
  ushort uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  char cVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulonglong unaff_RBX;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  bool bVar16;
  byte in_AF;
  bool bVar17;
  byte in_TF;
  bool bVar18;
  byte in_IF;
  bool bVar19;
  bool bVar20;
  byte in_NT;
  bool bVar21;
  byte in_AC;
  bool bVar22;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  bool bVar23;
  ulonglong uVar24;
  undefined4 unaff_retaddr;
  ulonglong local_res8;
  undefined1 local_res10 [24];
  
  uVar6 = *(ulonglong *)(param_1 + CONCAT44(0xffffffff,unaff_retaddr) + 0x2ea44ce8);
  uVar24 = *(ulonglong *)(param_1 + -0x48);
  uVar14 = FUN_161079dec();
  lVar12 = -((param_1 + -1) - ~unaff_R15);
  puVar9 = local_res10 + lVar12;
  _fxsave(puVar9);
  *(undefined1 **)(local_res10 + lVar12 + -8) = puVar9;
  lVar7 = *(longlong *)(local_res10 + lVar12 + -8);
  *(ulonglong *)(local_res10 + lVar12 + -8) = ~uVar24 & 0xffffffffffffffff - unaff_RBX | uVar24;
  *(undefined8 *)(local_res10 + lVar12 + -0x10) = param_3;
  uVar15 = *(undefined8 *)(local_res10 + lVar12 + -8);
  *(ulonglong *)(local_res10 + lVar12 + -8) = uVar24;
  *(undefined8 *)(local_res10 + lVar12 + -8) = *(undefined8 *)(local_res10 + lVar12 + -8);
  uVar10 = *(undefined8 *)(local_res10 + lVar12 + -8);
  *(undefined8 *)(lVar7 + -0x10) = local_res8;
  if (lVar7 == 8) {
    _DAT_fffffffffffffff0 =
         (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
         (ulonglong)(in_TF & 1) * 0x100 | 0x40 | (ulonglong)(in_AF & 1) * 0x10 | 5 |
         (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
         (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
    uVar6 = _DAT_fffffffffffffff0;
    if ((_DAT_fffffffffffffff0 >> 6 & 1) == 0) {
      uVar15 = _DAT_00000000;
      _DAT_00000008 = _DAT_00000008 ^ (ulonglong)puVar9;
      _DAT_00000010 = _DAT_00000010 ^ (ulonglong)puVar9;
      _DAT_fffffffffffffff8 = uVar10;
      _DAT_00000018 = ~((~(ulonglong)puVar9 | _DAT_00000018) & (~_DAT_00000018 | (ulonglong)puVar9))
      ;
      _DAT_00000000 = &LAB_14d9d4c6d;
      _DAT_fffffffffffffff0 = uVar6;
      return uVar15;
    }
    uVar15 = FUN_1569398a9();
    return uVar15;
  }
  puVar1 = (ulonglong *)(lVar7 + -8);
  uVar11 = *(undefined8 *)(lVar7 + -0x10);
  *(undefined8 *)(lVar7 + -0x10) = unaff_R12;
  *(undefined8 *)(lVar7 + -0x18) = 0x57ad09b4;
  *(undefined8 *)(lVar7 + -0x20) = *(undefined8 *)(lVar7 + -0x18);
  *puVar1 = *(ulonglong *)(lVar7 + -0x20);
  *(ulonglong *)(lVar7 + -0x18) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SCARRY8(lVar7 + -0x10,-8) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)(lVar7 + -0x18 < 0) * 0x80 | (ulonglong)(lVar7 == 0x18) * 0x40 |
       (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(lVar7 - 0x18U & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(&DAT_00000007 < (undefined1 *)(lVar7 + -0x10)) |
       (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  *(ulonglong *)(lVar7 + -0x18) = *(ulonglong *)(lVar7 + -0x18) | 1;
  uVar24 = *(ulonglong *)(lVar7 + -0x18);
  bVar21 = (uVar24 & 0x4000) != 0;
  bVar20 = (uVar24 & 0x400) != 0;
  bVar19 = (uVar24 & 0x200) != 0;
  bVar18 = (uVar24 & 0x100) != 0;
  bVar17 = (uVar24 & 0x10) != 0;
  bVar23 = (uVar24 & 0x200000) != 0;
  bVar22 = (uVar24 & 0x40000) != 0;
  if ((uVar24 & 1) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar8 = *(undefined8 *)(lVar7 + -0x10);
  puVar3 = (ushort *)(lVar7 + -8);
  *puVar1 = *puVar1 ^ 0x57ad09b4;
  *puVar3 = 0;
  *puVar3 = *puVar3 + 0x8c34;
  *puVar3 = *puVar3 ^ 0x8c34;
  uVar4 = *puVar3;
  *puVar3 = *puVar3 & (ushort)uVar15;
  *puVar3 = ~*puVar3;
  *(undefined8 *)(lVar7 + -0x10) = uVar10;
  *(undefined8 *)(lVar7 + -0x18) = unaff_R13;
  puVar3 = (ushort *)(lVar7 + -8);
  *puVar3 = ~*puVar3;
  *puVar3 = *puVar3 | ~(uVar4 | (ushort)uVar15);
  *puVar3 = ~*puVar3;
  uVar5 = *(uint *)(lVar7 + -8);
  *(undefined8 *)(lVar7 + -8) = uVar11;
  *(undefined8 *)(lVar7 + -0x10) = uVar14;
  *(undefined4 *)(lVar7 + -0x10) = 0x24f03db6;
  *(undefined4 *)(lVar7 + -0xc) = 0;
  uVar24 = *(ulonglong *)(lVar7 + -0x10);
  *(ulonglong *)(lVar7 + -0x10) = CONCAT71((int7)((ulonglong)uVar15 >> 8),(byte)uVar15 >> 1);
  cVar13 = (char)uVar14;
  *(undefined8 *)(lVar7 + -0x10) = 0x2a18354;
  *(ulonglong *)(lVar7 + -0x10) =
       *(longlong *)(lVar7 + -0x10) -
       ~(~(uVar24 & 0xffffffffd9ae4115) & (uVar24 | 0xffffffffd9ae4115));
  puVar2 = (undefined8 *)(lVar7 + -8 + *(longlong *)(lVar7 + -0x10));
  *puVar2 = param_2;
  puVar2[-1] = uVar6 + unaff_RBX + (uVar6 & unaff_RBX) * -2;
  uVar6 = puVar2[-1];
  puVar2[-1] = (ulonglong)uVar5;
  *(undefined4 *)(puVar2 + -2) = 0x6cabb109;
  *(undefined4 *)((longlong)puVar2 + -0xc) = 0;
  puVar1 = (ulonglong *)((longlong)puVar2 + ((puVar2[-2] ^ 0x6cabf080) - 0x4191));
  *puVar1 = 0x25f614ca;
  *puVar1 = *puVar1 ^ 0x25f614ca;
  puVar1[-1] = uVar6;
  bVar16 = (POPCOUNT(cVar13) & 1U) == 0;
  puVar1[-1] = (ulonglong)bVar21 * 0x4000 | (ulonglong)bVar20 * 0x400 | (ulonglong)bVar19 * 0x200 |
               (ulonglong)bVar18 * 0x100 | (ulonglong)(cVar13 < '\0') * 0x80 |
               (ulonglong)(cVar13 == '\0') * 0x40 | (ulonglong)bVar17 * 0x10 | (ulonglong)bVar16 * 4
               | (ulonglong)bVar23 * 0x200000 | (ulonglong)bVar22 * 0x40000;
  puVar1[-2] = (ulonglong)bVar21 * 0x4000 | (ulonglong)bVar20 * 0x400 | (ulonglong)bVar19 * 0x200 |
               (ulonglong)bVar18 * 0x100 | (ulonglong)(cVar13 < '\0') * 0x80 |
               (ulonglong)(cVar13 == '\0') * 0x40 | (ulonglong)bVar17 * 0x10 | (ulonglong)bVar16 * 4
               | (ulonglong)bVar23 * 0x200000 | (ulonglong)bVar22 * 0x40000;
  if ((puVar1[-1] & 0x80) == 0) {
    uVar15 = FUN_156608280();
    return uVar15;
  }
  puVar1[-2] = uVar8;
  puVar1[-3] = uVar8;
  puVar1[-2] = 0x1617088c8;
  return uVar14;
}



// FUNCTION 14d9d4bf9 FUN_14d9d4bf9 body=115 status=ok
// SIG undefined FUN_14d9d4bf9(void)

undefined8 FUN_14d9d4bf9(void)

{
  undefined8 local_res8;
  
  return local_res8;
}



// FUNCTION 14d9d4d0d FUN_14d9d4d0d body=393 status=ok
// SIG undefined FUN_14d9d4d0d(void)

/* WARNING: Removing unreachable block (ram,0x00014d9d4d90) */

void FUN_14d9d4d0d(void)

{
  FUN_157589551();
  return;
}



// FUNCTION 14d9d4e18 FUN_14d9d4e18 body=185 status=ok
// SIG undefined FUN_14d9d4e18(void)

/* WARNING: Removing unreachable block (ram,0x00014d9d4e9d) */
/* WARNING: Removing unreachable block (ram,0x00014d9d4ea3) */
/* WARNING: Removing unreachable block (ram,0x000162ed981d) */

void FUN_14d9d4e18(void)

{
  FUN_162ed981d();
  return;
}



// FUNCTION 14d9d4f3b FUN_14d9d4f3b body=453 status=ok
// SIG undefined FUN_14d9d4f3b(void)

/* WARNING: Instruction at (ram,0x00014d9d5050) overlaps instruction at (ram,0x00014d9d504e)
    */
/* WARNING: Removing unreachable block (ram,0x000156bf64e6) */
/* WARNING: Removing unreachable block (ram,0x000156bf64f2) */
/* WARNING: Removing unreachable block (ram,0x000156bf64fd) */
/* WARNING: Removing unreachable block (ram,0x000156bf6425) */
/* WARNING: Removing unreachable block (ram,0x00014d9d4fbd) */
/* WARNING: Removing unreachable block (ram,0x0001667c6e40) */
/* WARNING: Removing unreachable block (ram,0x0001667c6e46) */
/* WARNING: Removing unreachable block (ram,0x0001667c6e4b) */
/* WARNING: Removing unreachable block (ram,0x000156bf6558) */
/* WARNING: Removing unreachable block (ram,0x000156bf655c) */
/* WARNING: Removing unreachable block (ram,0x00014d9d504b) */
/* WARNING: Removing unreachable block (ram,0x00014d9d50a3) */
/* WARNING: Removing unreachable block (ram,0x00014d9d50f7) */
/* WARNING: Removing unreachable block (ram,0x00014d9d50fb) */
/* WARNING: Removing unreachable block (ram,0x00014d9d4fd3) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d9d4f3b(void)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = FUN_165f5b51d();
  lVar3 = (*(ulonglong *)(unaff_R13 + -0x70) - unaff_R15) +
          (~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x70)) * -2 + -2;
  puVar1 = (ulonglong *)(lVar3 + -8);
  *puVar1 = *(ulonglong *)(unaff_R13 + -0xa0) ^ unaff_R15;
  *(ulonglong *)(lVar3 + -0x10) = *puVar1;
  *puVar1 = (ulonglong)&DAT_162c35609;
  *(undefined8 *)(lVar3 + -0x18) = 0x162c355ea;
  return uVar2;
}



// FUNCTION 14d9d507c FUN_14d9d507c body=155 status=ok
// SIG undefined FUN_14d9d507c(void)

/* WARNING: Removing unreachable block (ram,0x00014d9d50f7) */

void FUN_14d9d507c(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  longlong unaff_RBP;
  longlong unaff_RDI;
  ulonglong unaff_R15;
  
  FUN_1570e4f85(param_1,(-(-1 - unaff_RBP) - unaff_RDI) + (param_2 & unaff_R15) * -2,param_3);
  return;
}



// FUNCTION 14d9d511f FUN_14d9d511f body=139 status=ok
// SIG undefined FUN_14d9d511f(void)

void FUN_14d9d511f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_165812b52(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d9d5235 FUN_14d9d5235 body=3 status=ok
// SIG undefined FUN_14d9d5235(void)

void FUN_14d9d5235(void)

{
  return;
}



// FUNCTION 14d9d5618 FUN_14d9d5618 body=323 status=ok
// SIG undefined FUN_14d9d5618(void)

/* WARNING: Removing unreachable block (ram,0x00014d9d56ab) */
/* WARNING: Removing unreachable block (ram,0x00014d9d56b6) */
/* WARNING: Removing unreachable block (ram,0x00014d9d56b1) */

void FUN_14d9d5618(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulonglong unaff_RBP;
  undefined8 unaff_RSI;
  ushort uVar3;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
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
  ulonglong local_res18;
  ulonglong local_res20;
  
  uVar17 = local_res18 ^ unaff_RBP;
  puVar1 = (undefined8 *)(local_res20 ^ unaff_RBP);
  local_res18._0_2_ = (ushort)uVar17;
  uVar3 = -~((ushort)local_res18 | 0x100) - 0x101;
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
  (*pcVar2)(param_1,param_2,param_3,param_4);
  *puVar1 = unaff_R14;
  puVar1[-1] = unaff_R14;
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
  uVar17 = puVar1[-2];
  puVar1[-2] = unaff_R13;
  puVar1[-3] = (ulonglong)((uVar17 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar17 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar17 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar17 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar17 & 0x100) != 0) * 0x100 | (ulonglong)((uVar17 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar17 & 0x40) != 0) * 0x40 | (ulonglong)((uVar17 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar17 & 4) != 0) * 4 | (ulonglong)((uVar17 & 1) != 0) |
               (ulonglong)((uVar17 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar17 & 0x40000) != 0) * 0x40000;
  puVar1[-4] = unaff_RSI;
  *puVar1 = 0x62e5b6;
  FUN_1573cc13a();
  return;
}



// FUNCTION 14d9d591f FUN_14d9d591f body=185 status=ok
// SIG undefined FUN_14d9d591f(void)

void FUN_14d9d591f(void)

{
  return;
}



// FUNCTION 14d9d59db thunk_FUN_14d9d59e1 body=5 status=ok
// SIG undefined thunk_FUN_14d9d59e1(void)

/* WARNING: Removing unreachable block (ram,0x00014d9d5a66) */
/* WARNING: Removing unreachable block (ram,0x00014d9d5a8b) */
/* WARNING: Removing unreachable block (ram,0x00014d9d5a8f) */

void thunk_FUN_14d9d59e1(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_16166f754(unaff_RBP & ~*(ulonglong *)(unaff_RSI + -0x38) |
                ~(*(ulonglong *)(unaff_RSI + -0x38) ^ 0xffffffffffffffff | unaff_RBP),
                *(longlong *)(unaff_RSI + -0x58) + unaff_RBP +
                ~(0xffffffffffffffffU - *(longlong *)(unaff_RSI + -0x58) | ~unaff_RBP) * -2);
  return;
}



// FUNCTION 14d9d59e1 FUN_14d9d59e1 body=515 status=ok
// SIG undefined FUN_14d9d59e1(void)

/* WARNING: Removing unreachable block (ram,0x00014d9d5a66) */
/* WARNING: Removing unreachable block (ram,0x00014d9d5a8b) */
/* WARNING: Removing unreachable block (ram,0x00014d9d5a8f) */

void FUN_14d9d59e1(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_16166f754(unaff_RBP & ~*(ulonglong *)(unaff_RSI + -0x38) |
                ~(*(ulonglong *)(unaff_RSI + -0x38) ^ 0xffffffffffffffff | unaff_RBP),
                *(longlong *)(unaff_RSI + -0x58) + unaff_RBP +
                ~(0xffffffffffffffffU - *(longlong *)(unaff_RSI + -0x58) | ~unaff_RBP) * -2);
  return;
}



// FUNCTION 14d9d5cb5 FUN_14d9d5cb5 body=426 status=ok
// SIG undefined FUN_14d9d5cb5(void)

/* WARNING: Instruction at (ram,0x0001660ce8bc) overlaps instruction at (ram,0x0001660ce8bb)
    */
/* WARNING: Removing unreachable block (ram,0x00014d9d5d9a) */
/* WARNING: Removing unreachable block (ram,0x00014d9d5da8) */
/* WARNING: Removing unreachable block (ram,0x0001660ce848) */
/* WARNING: Removing unreachable block (ram,0x0001660ce8bc) */
/* WARNING: Removing unreachable block (ram,0x0001660ce8bb) */

void FUN_14d9d5cb5(void)

{
  FUN_1660ce848();
  return;
}



// FUNCTION 14d9d5e62 FUN_14d9d5e62 body=133 status=ok
// SIG undefined FUN_14d9d5e62(void)

undefined8 FUN_14d9d5e62(void)

{
  ulonglong in_RAX;
  undefined8 unaff_R13;
  undefined8 uStackX_18;
  ulonglong in_stack_00000028;
  
  *(undefined8 *)((in_stack_00000028 ^ in_RAX) - 8) = unaff_R13;
  *(undefined1 **)((in_stack_00000028 ^ in_RAX) - 0x10) = &LAB_160ce1e8b;
  return uStackX_18;
}



// FUNCTION 14d9d5f79 FUN_14d9d5f79 body=167 status=ok
// SIG undefined FUN_14d9d5f79(void)

void FUN_14d9d5f79(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  
  (*(code *)0x14d85aec7)(param_1,param_2,local_res8);
  return;
}



// FUNCTION 14d9d6026 FUN_14d9d6026 body=171 status=ok
// SIG undefined FUN_14d9d6026(void)

void FUN_14d9d6026(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)0x162e7caae)
            ((*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15 ^ 0xffffffffffffffff) &
             (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15),*(undefined8 *)(unaff_R13 + -0x28));
  return;
}



// FUNCTION 14d9d6181 FUN_14d9d6181 body=251 status=ok
// SIG undefined FUN_14d9d6181(void)

/* WARNING: Removing unreachable block (ram,0x00014d9d6213) */

void FUN_14d9d6181(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  undefined8 unaff_retaddr;
  
  if (((in_RAX ^ -(~(~(param_4 & 0xffffffffdb692446) & (param_4 | 0xffffffffdb692446)) - unaff_R12))
       >> 0x26 & 1) != 0) {
    FUN_166832db6(param_1,unaff_retaddr);
    return;
  }
  FUN_166832db6(param_1,unaff_retaddr);
  return;
}



// FUNCTION 14d9d6486 FUN_14d9d6486 body=144 status=ok
// SIG undefined FUN_14d9d6486(void)

/* WARNING: Removing unreachable block (ram,0x00014d9d649d) */

void FUN_14d9d6486(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1658d609e(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d9d6639 FUN_14d9d6639 body=272 status=ok
// SIG undefined FUN_14d9d6639(void)

/* WARNING: Removing unreachable block (ram,0x00014d9d66c3) */
/* WARNING: Removing unreachable block (ram,0x00014d9d66c9) */
/* WARNING: Removing unreachable block (ram,0x00014d9d66ce) */

void FUN_14d9d6639(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *param_4;
  uVar2 = *param_4;
  *param_4 = ~*param_4;
  *param_4 = *param_4 | param_1;
  *param_4 = ~(((param_1 ^ 0xffffffffffffffff) + uVar1) - ((param_1 ^ 0xffffffffffffffff) & uVar2) &
              *param_4);
  FUN_157139b3e();
  return;
}



// FUNCTION 14d9d674c FUN_14d9d674c body=298 status=ok
// SIG undefined FUN_14d9d674c(void)

/* WARNING: Removing unreachable block (ram,0x00014d9d67ce) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d9d674c(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d9d68e1 FUN_14d9d68e1 body=160 status=ok
// SIG undefined FUN_14d9d68e1(void)

void FUN_14d9d68e1(undefined8 param_1,longlong param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14d8bca67(*(undefined8 *)(unaff_R13 + -0x78),-param_2,
                *(ulonglong *)(unaff_R13 + param_2) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + param_2) & unaff_R15) * -2);
  return;
}



// FUNCTION 14d9d6983 FUN_14d9d6983 body=190 status=ok
// SIG undefined FUN_14d9d6983(void)

void FUN_14d9d6983(undefined8 param_1,undefined8 param_2)

{
  ulonglong unaff_R15;
  ulonglong in_stack_00000010;
  ulonglong uStackX_18;
  
  FUN_156a67056(param_1,param_2,~unaff_R15 | uStackX_18,FUN_156a67056,in_stack_00000010 ^ unaff_R15)
  ;
  return;
}



// FUNCTION 14d9d6a56 FUN_14d9d6a56 body=93 status=ok
// SIG undefined FUN_14d9d6a56(void)

void FUN_14d9d6a56(void)

{
  FUN_161ba78ad();
  return;
}



// FUNCTION 14d9d6b63 FUN_14d9d6b63 body=164 status=ok
// SIG undefined FUN_14d9d6b63(void)

/* WARNING: Removing unreachable block (ram,0x00014d9d6ca4) */
/* WARNING: Removing unreachable block (ram,0x00014d9d6caa) */
/* WARNING: Removing unreachable block (ram,0x0001649a1a5c) */
/* WARNING: Removing unreachable block (ram,0x00014d9d6bfd) */
/* WARNING: Removing unreachable block (ram,0x00014d9d6c08) */
/* WARNING: Removing unreachable block (ram,0x00014d9d6c9f) */
/* WARNING: Removing unreachable block (ram,0x00014d9d6c03) */

undefined8 FUN_14d9d6b63(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  undefined8 unaff_R12;
  ulonglong local_res20;
  
  uVar1 = local_res20 ^ in_RAX;
  *(undefined8 *)(uVar1 - 8) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x10) = param_1;
  uVar2 = *(undefined8 *)(uVar1 - 0x10);
  *(undefined8 *)(uVar1 - 0x10) = unaff_R12;
  *(undefined8 *)(uVar1 - 0x18) = unaff_R12;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined1 **)(uVar1 - 8) = &LAB_162548343;
  uVar2 = FUN_14d7c0d34(uVar2);
  return uVar2;
}



// FUNCTION 14d9d6c08 FUN_14d9d6c08 body=223 status=ok
// SIG undefined FUN_14d9d6c08(void)

/* WARNING: Removing unreachable block (ram,0x00014d9d6ca4) */
/* WARNING: Removing unreachable block (ram,0x00014d9d6caa) */
/* WARNING: Removing unreachable block (ram,0x0001649a1a5c) */

undefined8 FUN_14d9d6c08(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong unaff_R13;
  
  uVar1 = *(ulonglong *)(unaff_R13 + 8);
  *(ulonglong *)(unaff_R13 + 8) = *(ulonglong *)(unaff_R13 + 8) | 0xffffffffebecaf86;
  *(ulonglong *)(unaff_R13 + 8) = ~(~(uVar1 & 0xffffffffebecaf86) & *(ulonglong *)(unaff_R13 + 8));
  uVar2 = FUN_1649a1a5c();
  return uVar2;
}



// FUNCTION 14d9d6d59 FUN_14d9d6d59 body=164 status=ok
// SIG undefined FUN_14d9d6d59(void)

void FUN_14d9d6d59(void)

{
  (*(code *)&LAB_157624b5a)();
  return;
}



// FUNCTION 14d9d6fda FUN_14d9d6fda body=154 status=ok
// SIG undefined FUN_14d9d6fda(void)

void FUN_14d9d6fda(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_stack_00000008;
  
  (*(code *)&LAB_164f65849)(param_1,in_stack_00000008,param_3,param_4);
  return;
}



// FUNCTION 14d9d7105 FUN_14d9d7105 body=423 status=ok
// SIG undefined FUN_14d9d7105(void)

/* WARNING: Removing unreachable block (ram,0x00014d9d71ef) */
/* WARNING: Removing unreachable block (ram,0x00014d9d71f5) */

undefined8 FUN_14d9d7105(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong in_R10;
  ulonglong unaff_R15;
  ulonglong local_res10;
  ulonglong uStackX_20;
  
  uVar5 = FUN_1667a9f22(param_1,param_2);
  uVar2 = uStackX_20 ^ unaff_R15;
  *(undefined8 *)(uVar2 - 8) = param_3;
  *(ulonglong *)(uVar2 - 0x10) = in_R10;
  puVar1 = (ulonglong *)(uVar2 - 0x18);
  *puVar1 = in_R10;
  *(undefined1 **)(uVar2 - 0x20) = &LAB_166ac53dd;
  lVar3 = *(longlong *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 0x10) = 0;
  *(longlong *)(uVar2 - 0x10) = *(longlong *)(uVar2 - 0x10) - lVar3;
  *(longlong *)(uVar2 - 0x10) = -*(longlong *)(uVar2 - 0x10);
  uVar4 = *puVar1;
  *puVar1 = ~((~unaff_R15 | local_res10) & (~local_res10 | unaff_R15));
  *(undefined8 *)(uVar2 - 0x20) = uVar5;
  *(ulonglong *)(uVar2 - 0x28) = uVar4;
  *(undefined1 **)(uVar2 - 0x30) = &LAB_166ac538c;
  return 0x35770714;
}



// FUNCTION 14d9d7381 FUN_14d9d7381 body=122 status=ok
// SIG undefined FUN_14d9d7381(void)

void FUN_14d9d7381(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_16268d6ba(param_1,(~*(ulonglong *)(unaff_RDI + -0x80) | param_1) ^ 0xffffffffffffffff);
  return;
}



// FUNCTION 14d9d7472 FUN_14d9d7472 body=155 status=ok
// SIG undefined FUN_14d9d7472(void)

void FUN_14d9d7472(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  uint unaff_EDI;
  undefined4 unaff_0000003c;
  undefined8 uStackX_8;
  
  uVar1 = *(ulonglong *)(CONCAT44(unaff_0000003c,unaff_EDI) + -0x38);
  FUN_14dcd3b4c(param_1,param_2,~((0xffffffffffffffff - param_1 | uVar1) & (~uVar1 | param_1)),
                0x1082ee80);
  FUN_164891cff(uStackX_8,-~unaff_EDI - (~(uint)param_2 + 2),FUN_164891cff);
  return;
}



// FUNCTION 14d9d750e thunk_FUN_14d9d7514 body=5 status=ok
// SIG undefined thunk_FUN_14d9d7514(void)

void thunk_FUN_14d9d7514(undefined8 param_1,uint param_2)

{
  uint unaff_EDI;
  undefined8 unaff_retaddr;
  
  FUN_164891cff(unaff_retaddr,-~unaff_EDI - (~param_2 + 2),FUN_164891cff);
  return;
}



// FUNCTION 14d9d7514 FUN_14d9d7514 body=109 status=ok
// SIG undefined FUN_14d9d7514(void)

void FUN_14d9d7514(undefined8 param_1,uint param_2)

{
  uint unaff_EDI;
  undefined8 unaff_retaddr;
  
  FUN_164891cff(unaff_retaddr,-~unaff_EDI - (~param_2 + 2),FUN_164891cff);
  return;
}



// FUNCTION 14d9d7628 FUN_14d9d7628 body=145 status=ok
// SIG undefined FUN_14d9d7628(void)

void FUN_14d9d7628(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong local_res8 [4];
  
  local_res8[0] =
       ~((0xffffffffffffffff - param_1 | local_res8[0]) + param_1 + 1) & (local_res8[0] | param_1);
  FUN_16246ab13(param_1,FUN_16246ab13,param_3,local_res8);
  return;
}



// FUNCTION 14d9d7a85 thunk_FUN_14d9d7a8b body=5 status=ok
// SIG undefined thunk_FUN_14d9d7a8b(void)

void thunk_FUN_14d9d7a8b(void)

{
  return;
}



// FUNCTION 14d9d7a8b FUN_14d9d7a8b body=28 status=ok
// SIG undefined FUN_14d9d7a8b(void)

void FUN_14d9d7a8b(void)

{
  return;
}



// FUNCTION 14d9d7b21 FUN_14d9d7b21 body=149 status=ok
// SIG undefined FUN_14d9d7b21(void)

void FUN_14d9d7b21(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  ulonglong unaff_RBP;
  ulonglong *unaff_RSI;
  undefined8 unaff_retaddr;
  
  *unaff_RSI = ~*unaff_RSI;
  *unaff_RSI = *unaff_RSI | unaff_RBP;
  uVar1 = *unaff_RSI;
  *unaff_RSI = 0;
  *unaff_RSI = *unaff_RSI + ~(unaff_RBX & uVar1);
  (*(code *)0x1648beaee)(unaff_retaddr);
  return;
}



// FUNCTION 14d9d7c48 FUN_14d9d7c48 body=329 status=ok
// SIG undefined FUN_14d9d7c48(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffe8 : 0x00014d9d7dc4 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d9d7c48(ulonglong param_1)

{
  ulonglong in_RAX;
  ulonglong unaff_RBX;
  uint unaff_ESI;
  ulonglong uVar1;
  uint unaff_retaddr;
  
  uVar1 = ~*(ulonglong *)(param_1 - 0x50);
  if ((unaff_ESI < unaff_retaddr) && (unaff_retaddr < unaff_ESI)) {
    FUN_14de3b35c(param_1 ^ in_RAX,
                  *(ulonglong *)
                   (*(ulonglong *)(param_1 - 0x50) + unaff_RBX +
                    ~((uVar1 + ~unaff_RBX) - (uVar1 & ~unaff_RBX)) * -2 + -0x78) ^ in_RAX);
    FUN_14e03cdbb();
    return;
  }
  return;
}



// FUNCTION 14d9d7ce1 FUN_14d9d7ce1 body=304 status=ok
// SIG undefined FUN_14d9d7ce1(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x00014d9d7d7c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d9d7ce1(ulonglong param_1)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_14de3b35c(param_1 ^ in_RAX,*(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX);
  FUN_14e03cdbb();
  return;
}



// FUNCTION 14d9d847d FUN_14d9d847d body=332 status=ok
// SIG undefined FUN_14d9d847d(void)

/* WARNING: Removing unreachable block (ram,0x00014d9d8500) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d9d847d(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong in_R10;
  
  uVar1 = *(ulonglong *)(param_2 + -0xa0);
  FUN_15664510e(FUN_15664510e,~(uVar1 & in_R10) & (~(uVar1 & in_R10) + in_R10) - ~uVar1,
                &stack0xffffffffffffffe8);
  return;
}



// FUNCTION 14d9d8618 FUN_14d9d8618 body=14 status=ok
// SIG undefined FUN_14d9d8618(void)

void FUN_14d9d8618(void)

{
  return;
}



// FUNCTION 14d9d89c0 FUN_14d9d89c0 body=141 status=ok
// SIG undefined FUN_14d9d89c0(void)

void FUN_14d9d89c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_RDI;
  ulonglong uVar1;
  ulonglong unaff_R12;
  longlong unaff_R14;
  longlong lVar2;
  undefined4 auStackX_c [7];
  
  FUN_15b1d451a(param_1,param_2,param_3);
  uVar1 = ~(~(unaff_RDI & 0xfffffffff27d973b) & (unaff_RDI | 0xfffffffff27d973b));
  lVar2 = unaff_R14 - (~(unaff_R12 & uVar1) & (unaff_R12 | uVar1));
  *(undefined4 *)((longlong)auStackX_c + lVar2 + -0xc) = 0xab577047;
  *(undefined8 *)(&stack0xfffffffffffffff8 + lVar2) = param_1;
  *(int *)((longlong)auStackX_c + lVar2 + -0xc) =
       *(int *)((longlong)auStackX_c + lVar2 + -0xc) + 0x54a88fb9;
  *(undefined4 *)((longlong)auStackX_c + lVar2) =
       *(undefined4 *)((longlong)auStackX_c + lVar2 + -0xc);
  FUN_15b9607bd(FUN_15b9607bd);
  return;
}



// FUNCTION 14d9d8a4e FUN_14d9d8a4e body=149 status=ok
// SIG undefined FUN_14d9d8a4e(void)

void FUN_14d9d8a4e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_RDI;
  ulonglong uVar1;
  ulonglong unaff_R12;
  longlong unaff_R14;
  longlong lVar2;
  undefined8 unaff_retaddr;
  undefined8 local_res10;
  int aiStackX_18 [4];
  
  uVar1 = ~(~(unaff_RDI & 0xfffffffff27d973b) & (unaff_RDI | 0xfffffffff27d973b));
  lVar2 = unaff_R14 - (~(unaff_R12 & uVar1) & (unaff_R12 | uVar1));
  *(undefined4 *)((longlong)aiStackX_18 + lVar2) = 0xab577047;
  *(undefined8 *)((longlong)&local_res10 + lVar2) = param_1;
  *(int *)((longlong)aiStackX_18 + lVar2) = *(int *)((longlong)aiStackX_18 + lVar2) + 0x54a88fb9;
  *(undefined4 *)((longlong)aiStackX_18 + lVar2 + 0xc) =
       *(undefined4 *)((longlong)aiStackX_18 + lVar2);
  FUN_15b9607bd(FUN_15b9607bd,param_2,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14d9d8ed4 FUN_14d9d8ed4 body=447 status=ok
// SIG undefined FUN_14d9d8ed4(void)

/* WARNING: Removing unreachable block (ram,0x00014d9d908b) */
/* WARNING: Removing unreachable block (ram,0x00014d9d9096) */
/* WARNING: Removing unreachable block (ram,0x00014d9d8f77) */
/* WARNING: Removing unreachable block (ram,0x00014d9d8f7d) */
/* WARNING: Removing unreachable block (ram,0x00014d9b228d) */
/* WARNING: Removing unreachable block (ram,0x00014d9d9091) */

undefined8 FUN_14d9d8ed4(void)

{
  longlong *plVar1;
  ushort *puVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  undefined8 in_R9;
  undefined8 in_R10;
  longlong unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_retaddr;
  ushort local_res8 [12];
  longlong local_res20;
  
  puVar2 = (ushort *)((longlong)local_res8 + unaff_R13);
  *puVar2 = ~*puVar2;
  *puVar2 = *puVar2 | 0x100;
  *puVar2 = ~*puVar2;
  plVar1 = (longlong *)(local_res20 + -8);
  *plVar1 = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x10) = in_R9;
  *(longlong *)(local_res20 + -0x10) = *plVar1;
  *plVar1 = 0;
  *plVar1 = *plVar1 + -0x16291e7f5;
  *plVar1 = -*plVar1;
  *(undefined8 *)(local_res20 + -0x18) = unaff_RSI;
  *(undefined8 *)(local_res20 + -0x20) = unaff_retaddr;
  *(undefined8 *)(local_res20 + -0x28) = 0;
  *(undefined8 *)(local_res20 + -0x20) = unaff_RBP;
  *(undefined8 *)(local_res20 + -0x20) = in_RAX;
  *(undefined8 *)(local_res20 + -0x28) = in_RAX;
  *(undefined4 *)(local_res20 + -0x28) = 0x56d289d;
  *(undefined4 *)(local_res20 + -0x24) = 0;
  *(undefined8 *)(local_res20 + -0x28) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x30) = in_R10;
  uVar3 = FUN_16291e7c5();
  return uVar3;
}



// FUNCTION 14d9d9096 FUN_14d9d9096 body=151 status=ok
// SIG undefined FUN_14d9d9096(void)

void FUN_14d9d9096(void)

{
  longlong in_R10;
  ulonglong unaff_R15;
  
  *(ulonglong *)(in_R10 + 0x10) = (~unaff_R15 | *(ulonglong *)(in_R10 + 0x10)) + unaff_R15 + 1;
  FUN_16155f387();
  return;
}



// FUNCTION 14d9d912f FUN_14d9d912f body=7 status=ok
// SIG undefined FUN_14d9d912f(void)

void FUN_14d9d912f(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d9d93ab FUN_14d9d93ab body=147 status=ok
// SIG undefined FUN_14d9d93ab(void)

void FUN_14d9d93ab(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  undefined8 unaff_RSI;
  ulonglong in_R10;
  longlong in_R11;
  ulonglong uVar2;
  undefined8 local_res18;
  undefined2 local_res20;
  undefined6 uStackX_22;
  
  *(ulonglong *)(in_R11 + 0x10) = ~in_R10;
  uVar1 = rdtsc();
  *(undefined8 *)(param_5 + -8) = unaff_RSI;
  *(undefined8 *)(param_5 + -0x10) = unaff_RSI;
  *(ulonglong *)(param_5 + -0x18) =
       (ulonglong)((local_res20 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res20 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res20 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res20 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res20 & 0x80) != 0) * 0x80 | (ulonglong)((local_res20 & 0x40) != 0) * 0x40
       | (ulonglong)((local_res20 & 0x10) != 0) * 0x10 | (ulonglong)((local_res20 & 4) != 0) * 4 |
       (ulonglong)((local_res20 & 1) != 0) | (ulonglong)((uStackX_22 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_22 & 4) != 0) * 0x40000;
  uVar2 = *(ulonglong *)(param_5 + -0x18);
  *(ulonglong *)(param_5 + -0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *(ulonglong *)(param_5 + -0x20) =
       CONCAT44((int)((ulonglong)param_2 >> 0x20),(int)((ulonglong)uVar1 >> 0x20));
  *(undefined8 *)(param_5 + -0x18) = local_res18;
  (*(code *)0x1666fb7ef)(param_1,*(undefined8 *)(param_5 + -0x20));
  return;
}



// FUNCTION 14d9d94b8 FUN_14d9d94b8 body=561 status=ok
// SIG undefined FUN_14d9d94b8(void)

/* WARNING: Removing unreachable block (ram,0x00014d9d9535) */
/* WARNING: Removing unreachable block (ram,0x00014d9d953b) */

void FUN_14d9d94b8(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_R10;
  undefined8 in_stack_00000010;
  
  (*(code *)0x1664817b2)
            (in_stack_00000010,
             ~((~*(ulonglong *)(param_2 + -0xa0) | ~in_R10) ^ 0xffffffffffffffff) &
             (*(ulonglong *)(param_2 + -0xa0) | in_R10),param_3,param_4);
  return;
}



// FUNCTION 14d9d95cb FUN_14d9d95cb body=158 status=ok
// SIG undefined FUN_14d9d95cb(void)

void FUN_14d9d95cb(void)

{
  (*(code *)0x14e156125)();
  return;
}



// FUNCTION 14d9d9669 FUN_14d9d9669 body=155 status=ok
// SIG undefined FUN_14d9d9669(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d9d9669(undefined8 param_1)

{
  FUN_165e6e5b0(param_1);
  FUN_1573b2350(FUN_1573b2350);
  return;
}



// FUNCTION 14d9d9705 FUN_14d9d9705 body=177 status=ok
// SIG undefined FUN_14d9d9705(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d9d9705(void)

{
  FUN_1573b2350(FUN_1573b2350);
  return;
}



// FUNCTION 14d9d97bc FUN_14d9d97bc body=194 status=ok
// SIG undefined FUN_14d9d97bc(void)

void FUN_14d9d97bc(byte param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong unaff_RDI;
  undefined8 local_res8;
  
  local_res8 = CONCAT44(local_res8._4_4_ - (param_4 + 0x6f40025),(undefined4)local_res8);
  if (local_res8 == -0x2b7cd404) {
    FUN_162637db6(param_1,param_2 >> (param_1 & 0x3f),*(undefined8 *)(unaff_RDI + -0x30));
    return;
  }
  FUN_14db0ee27();
  return;
}



// FUNCTION 14d9d9852 FUN_14d9d9852 body=161 status=ok
// SIG undefined FUN_14d9d9852(void)

undefined8 FUN_14d9d9852(void)

{
  longlong unaff_RDI;
  
  return *(undefined8 *)(unaff_RDI + -0x30);
}



// FUNCTION 14d9d98f5 FUN_14d9d98f5 body=136 status=ok
// SIG undefined FUN_14d9d98f5(void)

void FUN_14d9d98f5(undefined8 param_1)

{
  (*(code *)0x1667099a5)(param_1);
  return;
}



// FUNCTION 14d9d9a41 FUN_14d9d9a41 body=181 status=ok
// SIG undefined FUN_14d9d9a41(void)

undefined1 * FUN_14d9d9a41(void)

{
  undefined1 local_res10 [24];
  
  return local_res10;
}



// FUNCTION 14d9d9af6 thunk_FUN_14d9d9afc body=5 status=ok
// SIG undefined thunk_FUN_14d9d9afc(void)

/* WARNING: Removing unreachable block (ram,0x00014d9d9baa) */

void thunk_FUN_14d9d9afc(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_15696e5ab(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                (~(~in_RAX & *(ulonglong *)(unaff_R12 + -0x28)) + *(ulonglong *)(unaff_R12 + -0x28))
                - in_RAX,0xffffffffffffffff - (*(ulonglong *)(unaff_R12 + -0x80) & in_RAX) &
                         (*(ulonglong *)(unaff_R12 + -0x80) | in_RAX),
                *(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
  return;
}



// FUNCTION 14d9d9afc FUN_14d9d9afc body=174 status=ok
// SIG undefined FUN_14d9d9afc(void)

/* WARNING: Removing unreachable block (ram,0x00014d9d9baa) */

void FUN_14d9d9afc(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_15696e5ab(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                (~(~in_RAX & *(ulonglong *)(unaff_R12 + -0x28)) + *(ulonglong *)(unaff_R12 + -0x28))
                - in_RAX,0xffffffffffffffff - (*(ulonglong *)(unaff_R12 + -0x80) & in_RAX) &
                         (*(ulonglong *)(unaff_R12 + -0x80) | in_RAX),
                *(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
  return;
}



// FUNCTION 14d9d9baa FUN_14d9d9baa body=83 status=ok
// SIG undefined FUN_14d9d9baa(void)

void FUN_14d9d9baa(void)

{
  return;
}



// FUNCTION 14d9d9c49 FUN_14d9d9c49 body=152 status=ok
// SIG undefined FUN_14d9d9c49(void)

/* WARNING: Removing unreachable block (ram,0x00014d9d9ce2) */

void FUN_14d9d9c49(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_RBP;
  undefined8 in_R11;
  undefined8 unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong local_res20;
  
  uVar2 = 0xffffffffffffffff - (local_res20 & unaff_R15) &
          (-~unaff_R15 - ((local_res20 & unaff_R15) + 2)) - ~local_res20;
  *(undefined8 *)(uVar2 - 8) = in_R11;
  *(undefined8 *)(uVar2 - 0x10) = unaff_retaddr;
  *(undefined8 *)(uVar2 - 0x18) = unaff_retaddr;
  *(undefined8 *)(uVar2 - 0x20) = param_4;
  lVar3 = *(longlong *)(uVar2 - 8);
  uVar4 = *(undefined8 *)(uVar2 - 0x20);
  *(undefined8 *)(uVar2 - 0x20) = unaff_R12;
  *(undefined8 *)(uVar2 - 0x28) = unaff_RBP;
  *(undefined8 *)(uVar2 - 0x30) = param_2;
  uVar5 = *(undefined8 *)(uVar2 - 0x30);
  *(undefined8 *)(uVar2 - 0x10) = 0;
  *(longlong *)(uVar2 - 0x10) = *(longlong *)(uVar2 - 0x10) - lVar3;
  *(longlong *)(uVar2 - 0x10) = -*(longlong *)(uVar2 - 0x10);
  *(undefined8 *)(uVar2 - 8) = 0x1fb3d848;
  *(ulonglong *)(uVar2 - 8) = *(ulonglong *)(uVar2 - 8) ^ 0x1fb3d848;
  *(ulonglong *)(uVar2 - 8) = *(ulonglong *)(uVar2 - 8) ^ 0x1621d8d8a;
  *(undefined8 *)(uVar2 - 0x18) = 0x1654f4be3;
  FUN_1621d8d4f(param_1,uVar5,param_3,uVar4);
  puVar1 = (ulonglong *)(uVar2 - 0x18);
  *(int *)puVar1 = 0x7c24061;
  *(int *)puVar1 = (int)*puVar1 + 0x5f5f8463;
  *(undefined4 *)(uVar2 - 0x14) = 0xe02e7c62;
  *(int *)puVar1 = -0x2b16f6a5;
  *(undefined4 *)(uVar2 - 0x14) = 0xffffffff;
  lVar3 = *(longlong *)(unaff_R13 + (*puVar1 ^ 0x2b16f69b));
  *puVar1 = 0;
  *puVar1 = *puVar1 - lVar3;
  *puVar1 = -*puVar1;
  FUN_1657171ee(lVar3,(int)uVar5 + -0x7490ffe);
  return;
}



// FUNCTION 14d9d9ce2 FUN_14d9d9ce2 body=7 status=ok
// SIG undefined FUN_14d9d9ce2(void)

void FUN_14d9d9ce2(void)

{
  return;
}



// FUNCTION 14d9d9fe8 FUN_14d9d9fe8 body=131 status=ok
// SIG undefined FUN_14d9d9fe8(void)

void FUN_14d9d9fe8(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong in_RAX;
  longlong unaff_RSI;
  undefined8 uStackX_10;
  undefined8 local_res20;
  
  uVar1 = *(ulonglong *)(unaff_RSI + 8);
  *(undefined8 *)(unaff_RSI + 8) = 0;
  *(longlong *)(unaff_RSI + 8) =
       *(longlong *)(unaff_RSI + 8) + (0xffffffffffffffffU - in_RAX | uVar1) + in_RAX + 1;
  FUN_15707070d(uStackX_10 + local_res20 * -2,param_2);
  return;
}



// FUNCTION 14d9da17d FUN_14d9da17d body=875 status=ok
// SIG undefined FUN_14d9da17d(void)

void FUN_14d9da17d(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  ulonglong in_R10;
  
  (*(code *)0x162716c32)(0x162716c32,param_2,~(in_RAX & (param_3 | in_R10)));
  return;
}



// FUNCTION 14d9da2c4 FUN_14d9da2c4 body=174 status=ok
// SIG undefined FUN_14d9da2c4(void)

void FUN_14d9da2c4(void)

{
  return;
}



// FUNCTION 14d9da372 FUN_14d9da372 body=138 status=ok
// SIG undefined FUN_14d9da372(void)

void FUN_14d9da372(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10;
  
  (*(code *)0x162f692e1)(param_1,param_2,local_res10);
  return;
}



// FUNCTION 14d9da517 FUN_14d9da517 body=7 status=ok
// SIG undefined FUN_14d9da517(void)

void FUN_14d9da517(void)

{
  FUN_1564ccc4b();
  return;
}



// FUNCTION 14d9da719 FUN_14d9da719 body=164 status=ok
// SIG undefined FUN_14d9da719(void)

/* WARNING: Removing unreachable block (ram,0x00014d9da7a8) */
/* WARNING: Removing unreachable block (ram,0x00014d9da7bf) */
/* WARNING: Removing unreachable block (ram,0x00014d9da7b4) */

void FUN_14d9da719(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  longlong unaff_R14;
  longlong lVar1;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  longlong local_res10 [2];
  ulonglong local_res20;
  
  lVar1 = *(longlong *)
           ((longlong)local_res10 +
           ~(0xffffffffffffffffU - unaff_R14 & (param_3 | 0xffffffff9d801ff0))) + in_RAX +
          ~(~local_res20 | ~in_RAX) * -2;
  local_res20._0_2_ = (ushort)lVar1;
  local_res20 = CONCAT62((int6)((ulonglong)lVar1 >> 0x10),((ushort)local_res20 | 0x100) - 0x100);
  FUN_1615b9184(param_1,param_2,local_res8,unaff_retaddr);
  return;
}



// FUNCTION 14d9da7bf FUN_14d9da7bf body=161 status=ok
// SIG undefined FUN_14d9da7bf(void)

void FUN_14d9da7bf(undefined8 param_1,undefined8 param_2)

{
  longlong in_RAX;
  longlong unaff_RSI;
  longlong lVar1;
  longlong unaff_R13;
  longlong in_stack_00000008;
  longlong local_res18 [2];
  
  lVar1 = in_RAX + unaff_RSI;
  *(undefined8 *)((longlong)local_res18 + lVar1) = 0;
  *(longlong *)((longlong)local_res18 + lVar1) =
       *(longlong *)((longlong)local_res18 + lVar1) - in_stack_00000008;
  *(longlong *)((longlong)local_res18 + lVar1) = -*(longlong *)((longlong)local_res18 + lVar1);
  local_res18[0] = *(longlong *)(unaff_R13 + -8);
  (*(code *)0x165d01206)(param_1,param_2,0x165d01206);
  return;
}



// FUNCTION 14d9da861 FUN_14d9da861 body=144 status=ok
// SIG undefined FUN_14d9da861(void)

/* WARNING: Removing unreachable block (ram,0x00014d9da8f2) */

void FUN_14d9da861(void)

{
  ulonglong unaff_RBP;
  undefined8 local_res18;
  
  if (((~unaff_RBP | local_res18) & ((local_res18 | ~unaff_RBP) + ~local_res18 + 1 | unaff_RBP)) ==
      0) {
    FUN_165867813();
    return;
  }
  return;
}



// FUNCTION 14d9da8f2 FUN_14d9da8f2 body=220 status=ok
// SIG undefined FUN_14d9da8f2(void)

void FUN_14d9da8f2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulonglong param_7)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  longlong in_R10;
  ulonglong unaff_R15;
  ulonglong local_res8;
  
  uVar1 = FUN_1615c4c60();
  param_7 = *(longlong *)((longlong)&param_5 + (~(unaff_R15 & (local_res8 | ~unaff_RBX)) - in_R10))
            + uVar1 + (param_7 & uVar1) * -2;
  param_5 = param_3;
  FUN_14e160919(param_1,param_2,FUN_14e160919);
  return;
}



// FUNCTION 14d9dad59 FUN_14d9dad59 body=15 status=ok
// SIG undefined FUN_14d9dad59(void)

void FUN_14d9dad59(void)

{
  return;
}



// FUNCTION 14d9daf08 FUN_14d9daf08 body=171 status=ok
// SIG undefined FUN_14d9daf08(void)

void FUN_14d9daf08(void)

{
  return;
}



// FUNCTION 14d9dafc2 FUN_14d9dafc2 body=179 status=ok
// SIG undefined FUN_14d9dafc2(void)

undefined8 FUN_14d9dafc2(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1617f6d7b();
  return uVar1;
}



// FUNCTION 14d9db0d1 thunk_FUN_165dc09fc body=19 status=ok
// SIG undefined thunk_FUN_165dc09fc(void)

void thunk_FUN_165dc09fc(void)

{
  FUN_165dc09fc();
  return;
}



// FUNCTION 14d9db0e4 FUN_14d9db0e4 body=357 status=ok
// SIG undefined FUN_14d9db0e4(void)

/* WARNING: Removing unreachable block (ram,0x00014d9db186) */
/* WARNING: Removing unreachable block (ram,0x00014d9db18c) */
/* WARNING: Removing unreachable block (ram,0x00014dbb70e3) */

void FUN_14d9db0e4(void)

{
  longlong unaff_RBX;
  
  if (unaff_RBX == 0x11576a) {
    FUN_165dc09fc();
    return;
  }
  if (unaff_RBX != 0x11576b) {
    if (unaff_RBX == 0x11576c) {
      FUN_14dbb70e3();
      return;
    }
    FUN_14dbb70ea();
    return;
  }
  FUN_165dc09fc();
  return;
}



// FUNCTION 14d9db2d3 thunk_FUN_14d9db2d9 body=5 status=ok
// SIG undefined thunk_FUN_14d9db2d9(void)

void thunk_FUN_14d9db2d9(undefined8 param_1)

{
  longlong unaff_RDI;
  longlong unaff_R12;
  byte in_CF;
  
  FUN_165bc5661(param_1,0x947e328,
                -((unaff_R12 - *(longlong *)(unaff_RDI + -0x40)) - (ulonglong)in_CF));
  return;
}



// FUNCTION 14d9db2d9 FUN_14d9db2d9 body=118 status=ok
// SIG undefined FUN_14d9db2d9(void)

void FUN_14d9db2d9(undefined8 param_1)

{
  longlong unaff_RDI;
  longlong unaff_R12;
  byte in_CF;
  
  FUN_165bc5661(param_1,0x947e328,
                -((unaff_R12 - *(longlong *)(unaff_RDI + -0x40)) - (ulonglong)in_CF));
  return;
}



// FUNCTION 14d9db443 FUN_14d9db443 body=147 status=ok
// SIG undefined FUN_14d9db443(void)

void FUN_14d9db443(undefined8 param_1,longlong param_2)

{
  FUN_15b052e0e();
  (*(code *)0x15b6982e1)(param_1,-param_2,0x8417a042);
  return;
}



// FUNCTION 14d9db4d6 FUN_14d9db4d6 body=110 status=ok
// SIG undefined FUN_14d9db4d6(void)

void FUN_14d9db4d6(undefined8 param_1,longlong param_2)

{
  (*(code *)0x15b6982e1)(param_1,-param_2,0x8417a042);
  return;
}



// FUNCTION 14d9db54c FUN_14d9db54c body=62 status=ok
// SIG undefined FUN_14d9db54c(void)

void FUN_14d9db54c(void)

{
  return;
}



// FUNCTION 14d9db643 FUN_14d9db643 body=416 status=ok
// SIG undefined FUN_14d9db643(void)

undefined8 FUN_14d9db643(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar5;
  undefined8 unaff_R14;
  bool bVar6;
  ulonglong local_res8;
  ulonglong local_res10;
  ulonglong local_res18;
  
  pvVar3 = ClientId.UniqueProcess;
  uVar5 = ~((param_1 ^ 0xffffffffffffffff | local_res10) & ~(local_res10 & ~param_1));
  uVar1 = local_res18 ^ param_1;
  bVar6 = (uVar5 & 1) != 0;
  if (!bVar6) {
    *(undefined8 *)(uVar1 - 0x10) = unaff_R14;
    *(longlong *)(uVar1 - 8) = unaff_RSI;
    *(longlong *)(uVar1 - 0x10) = unaff_RSI;
    *(undefined4 *)(uVar1 - 0x18) = 0x234fc07;
    *(undefined4 *)(uVar1 - 0x14) = 0;
    lVar2 = *(longlong *)(uVar1 - 0x18);
    *(ulonglong *)(uVar1 - 0x18) =
         (ulonglong)((uVar5 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar5 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar5 & 0x400) != 0) * 0x400 | (ulonglong)((uVar5 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar5 & 0x80) != 0) * 0x80 | (ulonglong)((uVar5 & 0x40) != 0) * 0x40 |
         (ulonglong)((uVar5 & 0x10) != 0) * 0x10 | (ulonglong)((uVar5 & 4) != 0) * 4 |
         (ulonglong)bVar6 | (ulonglong)((uVar5 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar5 & 0x40000) != 0) * 0x40000;
    *(longlong *)(uVar1 - 0x20) = lVar2;
    *(longlong *)(uVar1 - 0x20) = *(longlong *)(uVar1 - 0x20) + -0xff3143;
    uVar5 = *(ulonglong *)(uVar1 - 0x18);
    *(void **)(uVar1 - 0x18) = pvVar3;
    *(undefined8 *)(uVar1 - 0x20) = unaff_RBP;
    *(ulonglong *)(uVar1 - 0x28) =
         (ulonglong)((uVar5 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar5 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar5 & 0x400) != 0) * 0x400 | (ulonglong)((uVar5 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar5 & 0x100) != 0) * 0x100 | (ulonglong)((uVar5 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar5 & 0x40) != 0) * 0x40 | (ulonglong)((uVar5 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar5 & 4) != 0) * 4 | (ulonglong)((uVar5 & 1) != 0) |
         (ulonglong)((uVar5 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar5 & 0x40000) != 0) * 0x40000;
    *(undefined8 *)(uVar1 - 0x20) = param_4;
    *(longlong *)(uVar1 - 8) = lVar2 + -0xff3143;
    uVar4 = *(undefined8 *)(uVar1 - 0x18);
    *(undefined8 *)(uVar1 - 0x18) = uVar4;
    *(undefined8 *)(uVar1 - 0x20) = uVar4;
    *(undefined8 *)(uVar1 - 0x28) = uVar4;
    *(undefined **)(uVar1 - 0x18) = &DAT_15b1e7cfd;
    *(undefined8 *)(uVar1 - 0x20) = 0x1669f05bb;
    return *(undefined8 *)(uVar1 - 0x28);
  }
  if (bVar6) {
    uVar4 = FUN_15b1e7c69();
    return uVar4;
  }
  uVar4 = FUN_1657369b0(local_res8 ^ param_1);
  return uVar4;
}



// FUNCTION 14d9db93a FUN_14d9db93a body=129 status=ok
// SIG undefined FUN_14d9db93a(void)

void FUN_14d9db93a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_156d69896(param_1,param_2,param_3,0xffffffffc8be9c65);
  return;
}



// FUNCTION 14d9dbaea FUN_14d9dbaea body=1091 status=ok
// SIG undefined FUN_14d9dbaea(void)

/* WARNING: Removing unreachable block (ram,0x00014d9dbd4e) */
/* WARNING: Removing unreachable block (ram,0x00014d9dbdc0) */
/* WARNING: Removing unreachable block (ram,0x00014d9dbdc5) */
/* WARNING: Removing unreachable block (ram,0x00014d9dbb8f) */
/* WARNING: Removing unreachable block (ram,0x00014d9dbc3e) */
/* WARNING: Removing unreachable block (ram,0x0001623b6d74) */
/* WARNING: Removing unreachable block (ram,0x00014d9dbc44) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_14d9dbaea(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  return CONCAT62((int6)(*(ulonglong *)(unaff_R12 + -0x98) + in_RAX +
                         (*(ulonglong *)(unaff_R12 + -0x98) & in_RAX) * -2 >> 0x10),0xe803) | 0xe903
  ;
}



// FUNCTION 14d9dbe06 FUN_14d9dbe06 body=174 status=ok
// SIG undefined FUN_14d9dbe06(void)

void FUN_14d9dbe06(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 unaff_RBX;
  undefined8 in_R10;
  undefined8 unaff_R13;
  undefined8 unaff_retaddr;
  undefined8 *local_res10;
  
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(unaff_retaddr,param_2,param_3,param_4);
  *local_res10 = in_R10;
  local_res10[-2] = unaff_RBX;
  local_res10[-3] = unaff_R13;
  local_res10[-4] = unaff_R13;
  local_res10[-5] = unaff_R13;
  local_res10[-3] = 0x14d9dbeb6;
  local_res10[-4] = 0x1626051bc;
  return;
}



// FUNCTION 14d9dbf4b FUN_14d9dbf4b body=125 status=ok
// SIG undefined FUN_14d9dbf4b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d9dbf4b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  undefined8 unaff_R12;
  ulonglong unaff_R15;
  undefined8 local_res10;
  
  lVar2 = (~unaff_R15 | local_res10) + unaff_R15 + 1;
  lVar1 = lVar2 * 2;
  FUN_156e5fc3d(param_1,param_2,param_3,local_res10 + unaff_R15 + lVar2 * -2);
  *(undefined8 *)(lVar1 + -8) = unaff_RBX;
  *(undefined8 *)(lVar1 + -0x10) = unaff_R12;
  *(undefined8 *)(lVar1 + -0x18) = unaff_R12;
  *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(lVar1 + -8);
  *(undefined8 *)(lVar1 + -8) = 0;
  *(longlong *)(lVar1 + -8) = *(longlong *)(lVar1 + -8) + -0x14d9dc02f;
  *(longlong *)(lVar1 + -8) = -*(longlong *)(lVar1 + -8);
  in((short)param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d9dbfc8 FUN_14d9dbfc8 body=86 status=ok
// SIG undefined FUN_14d9dbfc8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d9dbfc8(undefined8 param_1,undefined2 param_2)

{
  undefined8 unaff_RBX;
  undefined8 unaff_R12;
  undefined8 local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_RBX;
  *(undefined8 *)(local_res10 + -0x10) = unaff_R12;
  *(undefined8 *)(local_res10 + -0x18) = unaff_R12;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -8) = 0;
  *(longlong *)(local_res10 + -8) = *(longlong *)(local_res10 + -8) + -0x14d9dc02f;
  *(longlong *)(local_res10 + -8) = -*(longlong *)(local_res10 + -8);
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d9dc072 FUN_14d9dc072 body=82 status=ok
// SIG undefined FUN_14d9dc072(void)

void FUN_14d9dc072(void)

{
  return;
}



// FUNCTION 14d9dc120 FUN_14d9dc120 body=255 status=ok
// SIG undefined FUN_14d9dc120(void)

/* WARNING: Removing unreachable block (ram,0x00014d9dc24c) */

void FUN_14d9dc120(void)

{
  longlong lVar1;
  
  FUN_162c17ec3();
  lVar1 = FUN_162cc42d8();
  if (lVar1 == -0x7942f059) {
    FUN_162bb6b57();
    return;
  }
  FUN_164a391c2();
  return;
}



// FUNCTION 14d9dc223 FUN_14d9dc223 body=138 status=ok
// SIG undefined FUN_14d9dc223(void)

/* WARNING: Removing unreachable block (ram,0x00014d9dc24c) */

void FUN_14d9dc223(ulonglong param_1)

{
  longlong in_RAX;
  longlong unaff_RDI;
  
  if (in_RAX == -0x7942f059) {
    FUN_162bb6b57(param_1,0x1635b9f7,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1);
    return;
  }
  FUN_164a391c2();
  return;
}



// FUNCTION 14d9dc477 FUN_14d9dc477 body=17 status=ok
// SIG undefined FUN_14d9dc477(void)

void FUN_14d9dc477(void)

{
  return;
}



// FUNCTION 14d9dc48e FUN_14d9dc48e body=116 status=ok
// SIG undefined FUN_14d9dc48e(void)

void FUN_14d9dc48e(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RSI;
  
  if (unaff_RSI != 0xc659f) {
    (*(code *)0x161ca5e6a)(param_1,param_2);
    return;
  }
  FUN_16131bb16();
  return;
}



// FUNCTION 14d9dc840 FUN_14d9dc840 body=170 status=ok
// SIG undefined FUN_14d9dc840(void)

void FUN_14d9dc840(void)

{
  return;
}



// FUNCTION 14d9dc8ee FUN_14d9dc8ee body=96 status=ok
// SIG undefined FUN_14d9dc8ee(void)

void FUN_14d9dc8ee(void)

{
  return;
}



// FUNCTION 14d9dcae1 thunk_FUN_14d9dcae7 body=5 status=ok
// SIG undefined thunk_FUN_14d9dcae7(void)

void thunk_FUN_14d9dcae7(void)

{
  FUN_1653de013();
  FUN_14d9dcb72();
  return;
}



// FUNCTION 14d9dcae7 FUN_14d9dcae7 body=137 status=ok
// SIG undefined FUN_14d9dcae7(void)

void FUN_14d9dcae7(void)

{
  FUN_1653de013();
  FUN_14d9dcb72();
  return;
}



// FUNCTION 14d9dcb72 FUN_14d9dcb72 body=1159 status=ok
// SIG undefined FUN_14d9dcb72(void)

/* WARNING: Removing unreachable block (ram,0x000162c73baf) */
/* WARNING: Removing unreachable block (ram,0x000162c73bb5) */
/* WARNING: Removing unreachable block (ram,0x00014ddfc681) */
/* WARNING: Removing unreachable block (ram,0x000162c73c1f) */
/* WARNING: Removing unreachable block (ram,0x000162c73c25) */
/* WARNING: Removing unreachable block (ram,0x00014d9dcc07) */
/* WARNING: Removing unreachable block (ram,0x00014d9dccb4) */
/* WARNING: Removing unreachable block (ram,0x00014d9dccb9) */
/* WARNING: Removing unreachable block (ram,0x00014d9dccbf) */
/* WARNING: Removing unreachable block (ram,0x00014d9dccca) */

undefined8 FUN_14d9dcb72(ulonglong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  FUN_156d0bcdf(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,
                *(ulonglong *)(unaff_RDI + -0x70) ^ param_1);
  uVar1 = FUN_14d7be61a();
  return uVar1;
}



// FUNCTION 14d9dcdf6 FUN_14d9dcdf6 body=178 status=ok
// SIG undefined FUN_14d9dcdf6(void)

void FUN_14d9dcdf6(ulonglong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 in_R10;
  undefined8 unaff_R14;
  longlong unaff_R15;
  undefined8 local_res8;
  ulonglong local_res18;
  
  lVar2 = local_res18 + param_1 + (local_res18 & param_1) * -2;
  *(undefined8 *)(lVar2 + -8) = local_res8;
  *(longlong *)(lVar2 + -0x10) = unaff_R15;
  plVar1 = (longlong *)(lVar2 + -0x18);
  *plVar1 = 0;
  *plVar1 = *plVar1 + unaff_R15;
  *(undefined8 *)(lVar2 + -0x20) = unaff_R14;
  *(undefined8 *)(lVar2 + -0x28) = in_R10;
  *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(lVar2 + -8);
  FUN_162f1f4c6(&LAB_162f1f4fc);
  return;
}



// FUNCTION 14d9dcea8 FUN_14d9dcea8 body=185 status=ok
// SIG undefined FUN_14d9dcea8(void)

void FUN_14d9dcea8(void)

{
  return;
}



// FUNCTION 14d9dd0a0 FUN_14d9dd0a0 body=126 status=ok
// SIG undefined FUN_14d9dd0a0(void)

undefined8 FUN_14d9dd0a0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 in_RAX;
  ulonglong unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 in_R9;
  undefined8 unaff_R14;
  ulonglong local_res18;
  
  uVar1 = local_res18 ^ unaff_RBP;
  *(undefined8 *)(uVar1 - 8) = unaff_R14;
  *(undefined1 **)(uVar1 - 0x10) = &LAB_14d9dd137;
  *(undefined1 **)(uVar1 - 0x18) = &LAB_14d9dd137;
  *(undefined8 *)(uVar1 - 0x20) = in_RAX;
  uVar3 = *(undefined8 *)(uVar1 - 0x20);
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  uVar2 = *(ulonglong *)(uVar1 - 0x18);
  *(undefined8 *)(uVar1 - 0x18) = in_R9;
  *(undefined8 *)(uVar1 - 8) = 0x6dcd5848;
  *(ulonglong *)(uVar1 - 8) = *(ulonglong *)(uVar1 - 8) ^ 0x6dcd5848;
  *(ulonglong *)(uVar1 - 8) = *(ulonglong *)(uVar1 - 8) ^ uVar2;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RSI;
  *(undefined8 *)(uVar1 - 0x18) = unaff_RSI;
  *(undefined8 *)(uVar1 - 0x10) = 0x14d7a78bc;
  return uVar3;
}



// FUNCTION 14d9dd30b FUN_14d9dd30b body=748 status=ok
// SIG undefined FUN_14d9dd30b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d9dd4cf) */
/* WARNING: Removing unreachable block (ram,0x00014d9dd4da) */
/* WARNING: Removing unreachable block (ram,0x000166133862) */
/* WARNING: Removing unreachable block (ram,0x000166133889) */
/* WARNING: Removing unreachable block (ram,0x000166133896) */
/* WARNING: Removing unreachable block (ram,0x000166133909) */
/* WARNING: Removing unreachable block (ram,0x00016613390f) */
/* WARNING: Removing unreachable block (ram,0x00016613391a) */
/* WARNING: Removing unreachable block (ram,0x000162760a12) */
/* WARNING: Removing unreachable block (ram,0x0001661339b8) */
/* WARNING: Removing unreachable block (ram,0x0001661339be) */
/* WARNING: Removing unreachable block (ram,0x0001623c3b5e) */
/* WARNING: Removing unreachable block (ram,0x00014d9dd4d5) */
/* WARNING: Removing unreachable block (ram,0x00014d9dd43d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d9dd30b(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  byte bVar3;
  ulonglong uVar5;
  longlong unaff_RDI;
  ulonglong uVar6;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong uVar4;
  
  bVar3 = (byte)param_1;
  bVar1 = (bVar3 & 0x1f) % 9;
  uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),
                   bVar3 << bVar1 |
                   (byte)(CONCAT11(*(ulonglong *)(unaff_R13 + -0x90) + unaff_R15 <
                                   (*(ulonglong *)(unaff_R13 + -0x90) & unaff_R15) * 2,bVar3) >>
                         9 - bVar1));
  FUN_1660b1433(uVar4,param_2,*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  if (-~uVar4 - (~*(ulonglong *)(unaff_RDI + -0x40) + 2) <
      ((~*(ulonglong *)(unaff_RDI + -0x40) | uVar4 ^ 0xffffffffffffffff) ^ 0xffffffffffffffff) * 2)
  {
    uVar2 = FUN_1661337c1();
    return uVar2;
  }
  uVar5 = ~uVar4 | *(ulonglong *)(unaff_RDI + -0x70);
  uVar6 = *(ulonglong *)(unaff_RDI + -0x70) ^ 0xffffffffffffffff | uVar4;
  uVar2 = FUN_160fd2cb0(uVar4,FUN_160fd2cb0,~((uVar6 - (uVar5 | uVar6)) + uVar5),
                        *(ulonglong *)(unaff_RDI + -0x60) ^ uVar4);
  return uVar2;
}



// FUNCTION 14d9dd5fd FUN_14d9dd5fd body=355 status=ok
// SIG undefined FUN_14d9dd5fd(void)

/* WARNING: Removing unreachable block (ram,0x00014d9dd698) */

undefined8 FUN_14d9dd5fd(void)

{
  return 0x779bedf4;
}



// FUNCTION 14d9dd6b2 FUN_14d9dd6b2 body=307 status=ok
// SIG undefined FUN_14d9dd6b2(void)

/* WARNING: Removing unreachable block (ram,0x00015708e134) */
/* WARNING: Removing unreachable block (ram,0x00015708e1f8) */
/* WARNING: Removing unreachable block (ram,0x00015708e203) */
/* WARNING: Removing unreachable block (ram,0x00015708e1fe) */
/* WARNING: Removing unreachable block (ram,0x00015708e1f3) */
/* WARNING: Removing unreachable block (ram,0x0001565ac249) */
/* WARNING: Removing unreachable block (ram,0x0001565ac256) */
/* WARNING: Removing unreachable block (ram,0x0001565ac25a) */
/* WARNING: Removing unreachable block (ram,0x00014ddcbad5) */
/* WARNING: Removing unreachable block (ram,0x00014ddcbb1f) */
/* WARNING: Removing unreachable block (ram,0x00014ddcbb26) */
/* WARNING: Removing unreachable block (ram,0x00014ddcbb7b) */
/* WARNING: Removing unreachable block (ram,0x00014ddcbb81) */
/* WARNING: Removing unreachable block (ram,0x00015708e083) */
/* WARNING: Removing unreachable block (ram,0x00015708e129) */
/* WARNING: Removing unreachable block (ram,0x00015708e12e) */
/* WARNING: Removing unreachable block (ram,0x000165342823) */
/* WARNING: Removing unreachable block (ram,0x00016534284d) */
/* WARNING: Removing unreachable block (ram,0x00016534285a) */
/* WARNING: Removing unreachable block (ram,0x00014ddcbb86) */
/* WARNING: Removing unreachable block (ram,0x00014d9dd7bc) */

byte FUN_14d9dd6b2(undefined8 param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  longlong unaff_R13;
  undefined8 uVar5;
  ulonglong unaff_R15;
  bool bVar6;
  bool bVar7;
  ulonglong uVar8;
  byte unaff_retaddr;
  ulonglong uStackX_10;
  ulonglong local_res18;
  
  uVar5 = 0x358;
  FUN_1627442eb();
  lVar2 = *(ulonglong *)(unaff_R13 + -0xa0) + unaff_R15 +
          (*(ulonglong *)(unaff_R13 + -0xa0) & unaff_R15) * -2;
  if ((~unaff_R15 & uStackX_10) != 0) {
    bVar4 = FUN_14ddcba2d();
    return bVar4;
  }
  uVar8 = ~(uStackX_10 & unaff_R15) & unaff_R15;
  uVar1 = local_res18 ^ unaff_R15;
  LOCK();
  bVar6 = unaff_retaddr < DAT_14d7a7356;
  bVar7 = SBORROW1(unaff_retaddr,DAT_14d7a7356);
  cVar3 = unaff_retaddr - DAT_14d7a7356;
  bVar4 = DAT_14d7a7356;
  if (cVar3 == '\0') {
    DAT_14d7a7356 = (byte)param_1;
    bVar4 = unaff_retaddr;
  }
  UNLOCK();
  *(longlong *)(uVar1 - 8) = lVar2;
  *(longlong *)(uVar1 - 0x10) = lVar2;
  *(undefined4 *)(uVar1 - 0x18) = 0x82c5e74;
  *(undefined4 *)(uVar1 - 0x14) = 0;
  lVar2 = *(longlong *)(uVar1 - 0x18);
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)((uVar8 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar7 * 0x800 |
       (ulonglong)((uVar8 & 0x400) != 0) * 0x400 | (ulonglong)((uVar8 & 0x200) != 0) * 0x200 |
       (ulonglong)(cVar3 < '\0') * 0x80 | (ulonglong)(cVar3 == '\0') * 0x40 |
       (ulonglong)((uVar8 & 0x10) != 0) * 0x10 | (ulonglong)((POPCOUNT(cVar3) & 1U) == 0) * 4 |
       (ulonglong)bVar6 | (ulonglong)((uVar8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar8 & 0x40000) != 0) * 0x40000;
  *(longlong *)(uVar1 - 0x20) = lVar2;
  *(longlong *)(uVar1 - 0x20) = *(longlong *)(uVar1 - 0x20) + -0x5269d92;
  uVar8 = *(ulonglong *)(uVar1 - 0x18);
  *(undefined8 *)(uVar1 - 0x18) = uVar5;
  *(longlong *)(uVar1 - 8) = lVar2 + -0x5269d92;
  uVar5 = *(undefined8 *)(uVar1 - 0x18);
  *(code **)(uVar1 - 0x10) = FUN_1627442eb;
  *(code **)(uVar1 - 0x18) = FUN_1627442eb;
  *(undefined8 *)(uVar1 - 0x10) = 0x156ef2e25;
  if ((uVar8 & 0x40) == 0) {
    return bVar4;
  }
  bVar4 = FUN_16636506c(param_1,uVar5);
  return bVar4;
}



// FUNCTION 14d9dd843 FUN_14d9dd843 body=2 status=ok
// SIG undefined FUN_14d9dd843(void)

undefined8 FUN_14d9dd843(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14d9dd845 FUN_14d9dd845 body=144 status=ok
// SIG undefined FUN_14d9dd845(void)

void FUN_14d9dd845(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RBX;
  
  if (unaff_RBX == 0x10f656) {
    FUN_165dc09fc();
    return;
  }
  FUN_1666281dc(param_1,param_2,param_3,FUN_1666281dc);
  return;
}



// FUNCTION 14d9dd8d7 FUN_14d9dd8d7 body=60 status=ok
// SIG undefined FUN_14d9dd8d7(void)

void FUN_14d9dd8d7(void)

{
  FUN_15b3d5987();
  return;
}



// FUNCTION 14d9dd913 FUN_14d9dd913 body=101 status=ok
// SIG undefined FUN_14d9dd913(void)

void FUN_14d9dd913(short param_1,undefined8 param_2)

{
  FUN_156f49298(param_1 + 1,param_2,0xfffffffffffffffd,0xffffffff801461af);
  return;
}



// FUNCTION 14d9dda27 FUN_14d9dda27 body=156 status=ok
// SIG undefined FUN_14d9dda27(void)

void FUN_14d9dda27(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong unaff_R15;
  ulonglong local_res8;
  ulonglong local_res10;
  ulonglong local_res18;
  
  local_res8 = local_res8 + unaff_R15 + (local_res8 & unaff_R15) * -2;
  local_res10 = local_res10 + unaff_R15 + (local_res10 & unaff_R15) * -2;
  uVar1 = ~unaff_R15 | local_res18;
  local_res18 = ~local_res18 | unaff_R15;
  FUN_1611caf5c(param_1,&local_res8,~(uVar1 & local_res18));
  return;
}



// FUNCTION 14d9ddf0b FUN_14d9ddf0b body=126 status=ok
// SIG undefined FUN_14d9ddf0b(void)

void FUN_14d9ddf0b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)&LAB_16683cf70)(param_1,param_2,param_3,&LAB_16683cf70);
  return;
}



// FUNCTION 14d9de007 FUN_14d9de007 body=180 status=ok
// SIG undefined FUN_14d9de007(void)

void FUN_14d9de007(void)

{
  return;
}



// FUNCTION 14d9de14c FUN_14d9de14c body=128 status=ok
// SIG undefined FUN_14d9de14c(void)

void FUN_14d9de14c(void)

{
  return;
}



// FUNCTION 14d9de266 FUN_14d9de266 body=157 status=ok
// SIG undefined FUN_14d9de266(void)

void FUN_14d9de266(void)

{
  thunk_FUN_15b8c964d();
  return;
}



// FUNCTION 14d9de397 FUN_14d9de397 body=299 status=ok
// SIG undefined FUN_14d9de397(void)

void FUN_14d9de397(undefined8 param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res8;
  
  FUN_156516b2b(param_1,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  local_res8 = CONCAT44((0x7fffffff -
                        ((~(local_res8._4_4_ & 0x7fffffff) + 0x7fffffff) - ~local_res8._4_4_)) +
                        local_res8._4_4_,(undefined4)local_res8);
  FUN_16164ccfa(param_1,local_res8);
  return;
}



// FUNCTION 14d9de6f8 FUN_14d9de6f8 body=170 status=ok
// SIG undefined FUN_14d9de6f8(void)

void FUN_14d9de6f8(undefined8 param_1,undefined8 param_2)

{
  FUN_160befa5c(param_1,param_2,0,FUN_160befa5c);
  return;
}



// FUNCTION 14d9de7a2 FUN_14d9de7a2 body=176 status=ok
// SIG undefined FUN_14d9de7a2(void)

/* WARNING: Removing unreachable block (ram,0x00014d9de83b) */

void FUN_14d9de7a2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 unaff_R12;
  undefined8 unaff_retaddr;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_R12;
  plVar1 = (longlong *)(local_res10 + -0x10);
  *plVar1 = (longlong)&DAT_1524bd698;
  *plVar1 = *plVar1 + -0x463742f;
  lVar2 = *plVar1;
  *(undefined8 *)(local_res10 + -0x10) = param_3;
  *(undefined8 *)(local_res10 + -0x18) = param_3;
  *(undefined8 *)(local_res10 + -0x20) = unaff_RDI;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  uVar3 = *(undefined8 *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x18) = unaff_RSI;
  *(longlong *)(local_res10 + -0x20) = local_res10 + -0x18;
  *(longlong *)(*(longlong *)(local_res10 + -0x20) + 0x10) = lVar2;
  thunk_FUN_15b642ca5(unaff_retaddr,param_2,uVar3);
  return;
}



// FUNCTION 14d9deb3d FUN_14d9deb3d body=133 status=ok
// SIG undefined FUN_14d9deb3d(void)

void FUN_14d9deb3d(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_156dd48fb(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
  return;
}



// FUNCTION 14d9debc3 FUN_14d9debc3 body=175 status=ok
// SIG undefined FUN_14d9debc3(void)

void FUN_14d9debc3(void)

{
  return;
}



// FUNCTION 14d9ded0b FUN_14d9ded0b body=181 status=ok
// SIG undefined FUN_14d9ded0b(void)

undefined8 FUN_14d9ded0b(void)

{
  return 0xffffffffffffffa0;
}



// FUNCTION 14d9def22 FUN_14d9def22 body=19 status=ok
// SIG undefined FUN_14d9def22(void)

void FUN_14d9def22(void)

{
  return;
}



// FUNCTION 14d9df2b0 FUN_14d9df2b0 body=353 status=ok
// SIG undefined FUN_14d9df2b0(void)

/* WARNING: Removing unreachable block (ram,0x00014d9df358) */

void FUN_14d9df2b0(uint param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0xffffffff - (int)param_2;
  iVar2 = (~(uVar1 & param_1) + param_1) - (uVar1 ^ 0xffffffff);
  if (-1 < iVar2) {
    FUN_1627426a6(param_1,param_2,iVar2);
    return;
  }
  FUN_1627426a6(param_1,param_2,iVar2);
  return;
}



// FUNCTION 14d9df4c7 FUN_14d9df4c7 body=317 status=ok
// SIG undefined FUN_14d9df4c7(void)

void FUN_14d9df4c7(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_1668bf9b1();
  FUN_15af26468(param_1,param_2,*(undefined8 *)(unaff_RDI + -8));
  return;
}



// FUNCTION 14d9df610 FUN_14d9df610 body=149 status=ok
// SIG undefined FUN_14d9df610(void)

/* WARNING: Removing unreachable block (ram,0x00014d9df664) */
/* WARNING: Removing unreachable block (ram,0x00014d9df697) */

void FUN_14d9df610(void)

{
  FUN_14db17b7c();
  return;
}



// FUNCTION 14d9dfba7 FUN_14d9dfba7 body=177 status=ok
// SIG undefined FUN_14d9dfba7(void)

undefined8 FUN_14d9dfba7(ulonglong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong unaff_R12;
  short unaff_R13W;
  undefined8 unaff_R14;
  undefined8 uStackX_18;
  longlong in_stack_00000028;
  
  uVar5 = (~(~unaff_R12 | param_1) | ~param_1 | unaff_R12) + (~unaff_R12 | param_1) + 1;
  uVar6 = ~uVar5;
  uVar3 = FUN_16575357b();
  uVar1 = *(ulonglong *)(uVar6 - 0x50);
  uVar2 = *(undefined8 *)(uVar6 - 0x90);
  uVar4 = FUN_1658aea17();
  *(short *)((uVar1 & uVar3 ^ 0xffffffffffffffff) & (uVar1 | uVar3)) = unaff_R13W + 1;
  *(undefined8 *)(in_stack_00000028 + -8) = unaff_R14;
  *(ulonglong *)(in_stack_00000028 + -0x10) = uVar5;
  *(code **)(in_stack_00000028 + -0x10) = FUN_1658aea17;
  *(code **)(in_stack_00000028 + -0x18) = FUN_1658aea17;
  *(undefined8 *)(in_stack_00000028 + -0x20) = uStackX_18;
  *(undefined8 *)(in_stack_00000028 + -0x10) = *(undefined8 *)(in_stack_00000028 + -8);
  *(undefined8 *)(in_stack_00000028 + -0x18) = uVar4;
  *(undefined8 *)(in_stack_00000028 + -0x20) = uVar4;
  *(undefined4 *)(in_stack_00000028 + -0x20) = 0x5d513eaf;
  *(undefined8 *)(in_stack_00000028 + -0x28) = uVar4;
  *(undefined4 *)(in_stack_00000028 + -0x28) = 0x36a81402;
  *(undefined4 *)(in_stack_00000028 + -0x24) = 0;
  *(undefined4 *)
   (in_stack_00000028 + -0x20 + (*(ulonglong *)(in_stack_00000028 + -0x28) ^ 0x36a81406)) = 0;
  uVar4 = *(undefined8 *)(in_stack_00000028 + -0x20);
  *(undefined8 *)(in_stack_00000028 + -0x20) = uVar2;
  *(undefined8 *)(in_stack_00000028 + -0x28) = unaff_RBX;
  *(undefined8 *)(in_stack_00000028 + -0x30) = unaff_RBX;
  *(undefined1 **)(in_stack_00000028 + -0x28) = &LAB_14d9dfd8b;
  return uVar4;
}



// FUNCTION 14d9dfc58 FUN_14d9dfc58 body=306 status=ok
// SIG undefined FUN_14d9dfc58(void)

undefined8
FUN_14d9dfc58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong in_RAX;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  longlong unaff_R12;
  short unaff_R13W;
  undefined8 unaff_R14;
  undefined8 uStackX_10;
  longlong local_res20;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x50);
  uVar2 = *(undefined8 *)(unaff_R12 + -0x90);
  uVar3 = FUN_1658aea17(param_1,param_2);
  *(short *)((uVar1 & in_RAX ^ 0xffffffffffffffff) & (uVar1 | in_RAX)) = unaff_R13W + 1;
  *(undefined8 *)(local_res20 + -8) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x10) = param_4;
  *(code **)(local_res20 + -0x10) = FUN_1658aea17;
  *(code **)(local_res20 + -0x18) = FUN_1658aea17;
  *(undefined8 *)(local_res20 + -0x20) = uStackX_10;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = uVar3;
  *(undefined8 *)(local_res20 + -0x20) = uVar3;
  *(undefined4 *)(local_res20 + -0x20) = 0x5d513eaf;
  *(undefined8 *)(local_res20 + -0x28) = uVar3;
  *(undefined4 *)(local_res20 + -0x28) = 0x36a81402;
  *(undefined4 *)(local_res20 + -0x24) = 0;
  *(undefined4 *)(local_res20 + -0x20 + (*(ulonglong *)(local_res20 + -0x28) ^ 0x36a81406)) = 0;
  uVar3 = *(undefined8 *)(local_res20 + -0x20);
  *(undefined8 *)(local_res20 + -0x20) = uVar2;
  *(undefined8 *)(local_res20 + -0x28) = unaff_RBX;
  *(undefined8 *)(local_res20 + -0x30) = unaff_RBX;
  *(undefined1 **)(local_res20 + -0x28) = &LAB_14d9dfd8b;
  return uVar3;
}



// FUNCTION 14d9dfe2f FUN_14d9dfe2f body=166 status=ok
// SIG undefined FUN_14d9dfe2f(void)

void FUN_14d9dfe2f(void)

{
  return;
}



// FUNCTION 14d9dfed8 FUN_14d9dfed8 body=148 status=ok
// SIG undefined FUN_14d9dfed8(void)

/* WARNING: Removing unreachable block (ram,0x00014d9dfffa) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14d9dfed8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong in_R10;
  longlong unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 uStackX_10;
  undefined8 uStackX_20;
  
  uVar2 = *(undefined8 *)(unaff_R13 + -0x68);
  uVar1 = FUN_1569fb426();
  if (uStackX_20 + in_R10 < (uStackX_20 & in_R10) << 1) {
    param_5 = param_5 ^ in_R10;
    *(longlong *)(param_5 - 8) = unaff_R13;
    *(undefined8 *)(param_5 - 0x10) = unaff_R15;
    *(undefined8 *)(param_5 - 0x18) = unaff_R15;
    *(undefined8 *)(param_5 - 0x20) = unaff_R14;
    *(undefined8 *)(param_5 - 0x10) = 0x5d4ee54a;
    *(undefined8 *)(param_5 - 0x20) = uVar2;
    *(undefined8 *)(param_5 - 0x28) = uStackX_10;
    *(undefined8 *)(param_5 - 0x30) = 0x1659997d3;
    return uVar1;
  }
  uVar2 = FUN_1569e81e3(param_1,param_2,param_3);
  return uVar2;
}



// FUNCTION 14d9dff6d FUN_14d9dff6d body=277 status=ok
// SIG undefined FUN_14d9dff6d(void)

/* WARNING: Removing unreachable block (ram,0x00014d9dfffa) */

undefined8
FUN_14d9dff6d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  undefined8 unaff_RDI;
  ulonglong in_R10;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 in_stack_00000010;
  undefined8 local_res20;
  
  if (local_res20 + in_R10 < (local_res20 & in_R10) * 2) {
    param_5 = param_5 ^ in_R10;
    *(undefined8 *)(param_5 - 8) = unaff_R13;
    *(undefined8 *)(param_5 - 0x10) = unaff_R15;
    *(undefined8 *)(param_5 - 0x18) = unaff_R15;
    *(undefined8 *)(param_5 - 0x20) = unaff_R14;
    *(undefined8 *)(param_5 - 0x10) = 0x5d4ee54a;
    *(undefined8 *)(param_5 - 0x20) = unaff_RDI;
    *(undefined8 *)(param_5 - 0x28) = in_stack_00000010;
    *(undefined8 *)(param_5 - 0x30) = 0x1659997d3;
    return in_RAX;
  }
  uVar1 = FUN_1569e81e3(param_1,param_2,param_3);
  return uVar1;
}



// FUNCTION 14d9e0082 FUN_14d9e0082 body=161 status=ok
// SIG undefined FUN_14d9e0082(void)

/* WARNING: Removing unreachable block (ram,0x00014d9e0119) */
/* WARNING: Removing unreachable block (ram,0x00014d9e0124) */
/* WARNING: Removing unreachable block (ram,0x00014d9e011f) */

void FUN_14d9e0082(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1653fa91b(param_1,~(*(ulonglong *)(unaff_RDI + -0x68) & param_1 |
                         ~(*(ulonglong *)(unaff_RDI + -0x68) | param_1)));
  return;
}



// FUNCTION 14d9e0124 FUN_14d9e0124 body=151 status=ok
// SIG undefined FUN_14d9e0124(void)

void FUN_14d9e0124(void)

{
  FUN_165632e35();
  FUN_14d9e01bd();
  return;
}



// FUNCTION 14d9e01bd FUN_14d9e01bd body=159 status=ok
// SIG undefined FUN_14d9e01bd(void)

void FUN_14d9e01bd(void)

{
  FUN_14dfa2102();
  return;
}



// FUNCTION 14d9e02e0 FUN_14d9e02e0 body=107 status=ok
// SIG undefined FUN_14d9e02e0(void)

void FUN_14d9e02e0(void)

{
  return;
}



// FUNCTION 14d9e0402 FUN_14d9e0402 body=40 status=ok
// SIG undefined FUN_14d9e0402(void)

void FUN_14d9e0402(void)

{
  return;
}



// FUNCTION 14d9e0703 FUN_14d9e0703 body=146 status=ok
// SIG undefined FUN_14d9e0703(void)

void FUN_14d9e0703(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  longlong lVar2;
  longlong in_R10;
  undefined8 uStackX_8;
  undefined8 local_res10;
  ulonglong local_res20;
  
  lVar2 = param_4 + param_1 + (local_res20 & param_1) * -2;
  plVar1 = (longlong *)(lVar2 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1 - in_R10;
  *plVar1 = -*plVar1;
  *(undefined8 *)(lVar2 + -0x10) = unaff_RSI;
  *(undefined8 *)(lVar2 + -0x18) = 0x1716fada1;
  *(undefined1 **)(lVar2 + -0x20) = &LAB_162ddff50;
  *(undefined8 *)(lVar2 + -0x10) = unaff_RBX;
  *(undefined8 *)(lVar2 + -0x18) = unaff_RBX;
  *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(lVar2 + -8);
  FUN_162ddfedf(local_res10,param_2,param_3,uStackX_8);
  return;
}



// FUNCTION 14d9e0797 FUN_14d9e0797 body=173 status=ok
// SIG undefined FUN_14d9e0797(void)

/* WARNING: Removing unreachable block (ram,0x00014d9e083e) */
/* WARNING: Removing unreachable block (ram,0x00014d9e0844) */
/* WARNING: Removing unreachable block (ram,0x00016176e8af) */

void FUN_14d9e0797(void)

{
  FUN_16176e8af();
  return;
}



// FUNCTION 14d9e0844 FUN_14d9e0844 body=112 status=ok
// SIG undefined FUN_14d9e0844(void)

void FUN_14d9e0844(undefined8 param_1,undefined8 param_2)

{
  FUN_166aa252d(param_1,param_2,FUN_166aa252d);
  return;
}



// FUNCTION 14d9e08b4 FUN_14d9e08b4 body=116 status=ok
// SIG undefined FUN_14d9e08b4(void)

void FUN_14d9e08b4(undefined8 param_1,undefined8 param_2)

{
  FUN_14d8408f1(param_1,param_2);
  return;
}



// FUNCTION 14d9e09d6 FUN_14d9e09d6 body=281 status=ok
// SIG undefined FUN_14d9e09d6(void)

/* WARNING: Removing unreachable block (ram,0x00014d9e0a64) */

void FUN_14d9e09d6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong in_RAX;
  undefined8 in_R10;
  undefined8 in_stack_00000008;
  ulonglong local_res18;
  
  param_5 = param_5 ^ in_RAX;
  *(undefined8 *)(param_5 - 8) = param_2;
  *(undefined8 *)(param_5 - 0x10) = in_R10;
  *(undefined8 *)(param_5 - 0x18) = in_R10;
  *(undefined8 *)(param_5 - 0x20) = in_stack_00000008;
  *(ulonglong *)(param_5 - 0x28) = ~((~in_RAX | local_res18) & (~local_res18 | in_RAX));
  *(undefined4 *)(param_5 - 0x28) = 0x231305c3;
  *(undefined4 *)(param_5 - 0x24) = 0;
  *(undefined1 **)(param_5 - 0x28) = &LAB_16526307b;
  return;
}



// FUNCTION 14d9e0b9a FUN_14d9e0b9a body=451 status=ok
// SIG undefined FUN_14d9e0b9a(void)

/* WARNING: Removing unreachable block (ram,0x00014d9e0ccf) */
/* WARNING: Removing unreachable block (ram,0x00014d9e0d55) */
/* WARNING: Removing unreachable block (ram,0x00014d9e0d5a) */
/* WARNING: Removing unreachable block (ram,0x0001572768d8) */
/* WARNING: Removing unreachable block (ram,0x0001572768de) */
/* WARNING: Removing unreachable block (ram,0x00014d9e0d60) */

void FUN_14d9e0b9a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  longlong unaff_R13;
  
  uVar1 = *(undefined8 *)(unaff_RDI + -0x68);
  FUN_1619e3725();
  if (((*(ulonglong *)(unaff_R13 + -0x50) | 0xfffffffe9e61c8da) &
      (~*(ulonglong *)(unaff_R13 + -0x50) | 0x1619e3725)) == 0) {
    FUN_1621f6075();
    return;
  }
  FUN_156dfb0bf(FUN_156dfb0bf,uVar1,param_2,*(undefined8 *)(unaff_R13 + -0x98),
                *(undefined8 *)(unaff_R13 + -0x70));
  return;
}



// FUNCTION 14d9e0d60 FUN_14d9e0d60 body=130 status=ok
// SIG undefined FUN_14d9e0d60(void)

void FUN_14d9e0d60(undefined8 param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_160fe4bf4(param_1,~unaff_R15,*(undefined8 *)(unaff_R13 + -0x88),
                param_3 + unaff_R15 + (-~param_4 - (~(unaff_R15 - (param_4 | unaff_R15)) + 2)) * -2)
  ;
  return;
}



// FUNCTION 14d9e0de4 FUN_14d9e0de4 body=367 status=ok
// SIG undefined FUN_14d9e0de4(void)

/* WARNING: Instruction at (ram,0x00014d9e0eba) overlaps instruction at (ram,0x00014d9e0eb9)
    */
/* WARNING: Removing unreachable block (ram,0x00014d9e0e83) */
/* WARNING: Removing unreachable block (ram,0x00014d9e0eba) */
/* WARNING: Removing unreachable block (ram,0x00014d9e0eb7) */
/* WARNING: Removing unreachable block (ram,0x00014d9e0ec0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d9e0de4(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong unaff_RDI;
  ulonglong uVar2;
  longlong local_res10;
  ulonglong local_res18;
  ulonglong in_stack_00000020;
  
  *(undefined8 *)
   ((longlong)&local_res18 + ~(~(unaff_RDI & 0xffffffffa9dfc656) & (unaff_RDI | 0xffffffffa9dfc656))
   ) = param_4;
  uVar1 = local_res18;
  local_res18 = *(ulonglong *)(local_res10 + -0x98);
  uVar2 = *(ulonglong *)(local_res10 + -0xa0) | param_1;
  if ((uVar2 ^ 0xffffffffffffffff | ~(*(ulonglong *)(local_res10 + -0xa0) & param_1)) + uVar2 == -1)
  {
    local_res18 = ~(local_res18 & param_1) & (local_res18 | param_1);
    FUN_1572723eb(param_1,param_2,param_3,uVar1,in_stack_00000020 ^ param_1);
    return;
  }
  FUN_1627e14d0();
  return;
}



// FUNCTION 14d9e0fca FUN_14d9e0fca body=167 status=ok
// SIG undefined FUN_14d9e0fca(void)

/* WARNING: Removing unreachable block (ram,0x00014d9e1071) */

void FUN_14d9e0fca(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  
  if ((~(*(ulonglong *)(unaff_RDI + -0x88) & param_1) &
      (*(ulonglong *)(unaff_RDI + -0x88) | param_1)) == 0) {
    FUN_16180d770(param_1,param_2,param_3,param_4);
    return;
  }
  FUN_160ce5d9e();
  return;
}



// FUNCTION 14d9e1071 FUN_14d9e1071 body=128 status=ok
// SIG undefined FUN_14d9e1071(void)

void FUN_14d9e1071(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  longlong in_R11;
  undefined8 unaff_R12;
  ushort auStackX_10 [12];
  undefined8 auStack_10 [2];
  
  puVar1 = (undefined8 *)((longlong)auStackX_10 + in_R11 + -0x10);
  puVar1[1] = unaff_RBP;
  *puVar1 = unaff_R12;
  puVar1[-1] = unaff_RDI;
  puVar1[-1] = unaff_RSI;
  puVar1[-2] = param_2;
  *(ushort *)(puVar1 + 2) = (*(ushort *)(puVar1 + 2) | 0x100) - 0x100;
  FUN_165ad6016(param_1,puVar1[-2]);
  return;
}



// FUNCTION 14d9e1242 thunk_FUN_14d9e1248 body=5 status=ok
// SIG undefined thunk_FUN_14d9e1248(void)

/* WARNING: Removing unreachable block (ram,0x00014d9e12b0) */
/* WARNING: Removing unreachable block (ram,0x00014d9e12cd) */
/* WARNING: Removing unreachable block (ram,0x00014d9e12d3) */
/* WARNING: Removing unreachable block (ram,0x00014d9e12de) */

void thunk_FUN_14d9e1248(void)

{
  FUN_165cbc060();
  return;
}



// FUNCTION 14d9e1248 FUN_14d9e1248 body=393 status=ok
// SIG undefined FUN_14d9e1248(void)

/* WARNING: Removing unreachable block (ram,0x00014d9e12b0) */
/* WARNING: Removing unreachable block (ram,0x00014d9e12cd) */
/* WARNING: Removing unreachable block (ram,0x00014d9e12d3) */
/* WARNING: Removing unreachable block (ram,0x00014d9e12de) */

void FUN_14d9e1248(void)

{
  FUN_165cbc060();
  return;
}



// FUNCTION 14d9e1422 FUN_14d9e1422 body=289 status=ok
// SIG undefined FUN_14d9e1422(void)

void FUN_14d9e1422(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined7 uVar7;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  longlong unaff_R15;
  ulonglong uStackX_8;
  
  uVar7 = (undefined7)((ulonglong)param_1 >> 8);
  uVar6 = (undefined1)param_1;
  puVar1 = (ulonglong *)(&stack0xfffffffff84c6137 + unaff_R15);
  uVar2 = *puVar1;
  *puVar1 = unaff_RDI;
  uVar3 = *puVar1;
  *(ulonglong *)(&stack0xfffffffff84c613f + unaff_R15) =
       *(ulonglong *)(&stack0xfffffffff84c613f + unaff_R15) ^ uVar2;
  *(ulonglong *)(&stack0xfffffffff84c6147 + unaff_R15) =
       *(ulonglong *)(&stack0xfffffffff84c6147 + unaff_R15) ^ uVar2;
  *puVar1 = uStackX_8;
  *(ulonglong *)(&stack0xfffffffff84c612f + unaff_R15) = uVar3;
  *(undefined4 *)(&stack0xfffffffff84c6127 + unaff_R15) = 0xe65da8b;
  *(undefined4 *)(&stack0xfffffffff84c612b + unaff_R15) = 0;
  lVar4 = *(longlong *)(&stack0xfffffffff84c6127 + unaff_R15) + unaff_R15 + -0x1619794c;
  *(ulonglong *)(&stack0xffffffffe9e686c4 + lVar4 + 0x1619794c) =
       ~*(ulonglong *)(&stack0xffffffffe9e686c4 + lVar4 + 0x1619794c);
  *(ulonglong *)(&stack0xffffffffe9e686c4 + lVar4 + 0x1619794c) =
       *(ulonglong *)(&stack0xffffffffe9e686c4 + lVar4 + 0x1619794c) | uVar2;
  *(undefined8 *)(&stack0xfffffffff84c6127 + unaff_R15) = 0x14d9e14b7;
  uVar5 = FUN_162400b10(uVar6,param_2,param_3);
  uVar2 = *(ulonglong *)(unaff_RSI + -0x78);
  *(undefined8 *)(&stack0xfffffffff84c6127 + unaff_R15) = uVar5;
  *(longlong *)(&stack0xfffffffff84c611f + unaff_R15) = unaff_RSI;
  *(ulonglong *)(&stack0xfffffffff84c6127 + unaff_R15) = CONCAT71(uVar7,uVar6);
  FUN_157899e96(0,uVar2 | unaff_RBP);
  return;
}



// FUNCTION 14d9e1543 FUN_14d9e1543 body=134 status=ok
// SIG undefined FUN_14d9e1543(void)

void FUN_14d9e1543(void)

{
  return;
}



// FUNCTION 14d9e1681 FUN_14d9e1681 body=125 status=ok
// SIG undefined FUN_14d9e1681(void)

void FUN_14d9e1681(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_157599cc2(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d9e1701 FUN_14d9e1701 body=235 status=ok
// SIG undefined FUN_14d9e1701(void)

undefined8 FUN_14d9e1701(void)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong unaff_R12;
  
  uVar1 = FUN_161b70489(~(*(ulonglong *)(unaff_R12 + -0x28) & in_RAX),
                        *(ulonglong *)(unaff_R12 + -0x28),*(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX
                        ,*(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
  return uVar1;
}



// FUNCTION 14d9e1b3f FUN_14d9e1b3f body=284 status=ok
// SIG undefined FUN_14d9e1b3f(void)

/* WARNING: Removing unreachable block (ram,0x00014d9e1c3d) */

void FUN_14d9e1b3f(undefined8 param_1,ulonglong param_2,undefined8 param_3,int param_4,
                  ulonglong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong in_RAX;
  ulonglong uVar3;
  undefined8 unaff_RBP;
  code *pcVar4;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  longlong lStackX_10;
  
  *(undefined8 *)((longlong)&lStackX_10 + unaff_R13) = 0;
  *(longlong *)((longlong)&lStackX_10 + unaff_R13) =
       *(longlong *)((longlong)&lStackX_10 + unaff_R13) + in_RAX;
  param_5 = param_5 ^ unaff_R15;
  *(undefined8 *)(param_5 - 8) = unaff_RBP;
  *(undefined8 *)(param_5 - 0x10) = 0x14d9e1bbd;
  FUN_1657029b1();
  *(undefined4 *)(param_5 - 0x10) = 0xa4795a12;
  *(int *)(param_5 - 0x10) = *(int *)(param_5 - 0x10) + 0x78358528;
  *(uint *)(param_5 - 0x10) = 0x4a72e589 - ~*(uint *)(param_5 - 0x10);
  *(undefined4 *)(param_5 - 0xc) = 0xe02e7c62;
  uVar2 = *(undefined8 *)(param_5 - 0x10);
  uVar3 = (ulonglong)param_4;
  pcVar4 = FUN_15669e5aa;
  *(code **)(param_5 - 0x10) = FUN_14d9e1c5c;
  FUN_15669e5aa();
  *(ulonglong *)(param_5 - 8) = param_2 + uVar3;
  *(ulonglong *)(param_5 - 8) = *(longlong *)(param_5 - 8) + (param_2 & uVar3) * -2;
  *(undefined8 *)(param_5 - 8) = *(undefined8 *)(param_5 - 8);
  uVar1 = *(undefined8 *)(param_5 - 8);
  *(undefined8 *)(param_5 - 8) = in_stack_00000008;
  *(undefined8 *)(param_5 - 8) = uVar1;
  *(undefined8 *)(param_5 - 8) = uVar2;
  *(code **)(param_5 - 0x10) = pcVar4;
  *(code **)(param_5 - 0x18) = pcVar4;
  *(code **)(param_5 - 0x20) = pcVar4;
  *(code **)(param_5 - 0x10) = FUN_14d9e1cfb;
  *(undefined8 *)(param_5 - 0x18) = 0x161311db4;
  return;
}


