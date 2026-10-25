// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14d800478 FUN_14d800478 body=126 status=ok
// SIG undefined FUN_14d800478(void)

void * FUN_14d800478(void)

{
  void *pvVar1;
  undefined8 in_R10;
  undefined8 unaff_R13;
  ulonglong uVar2;
  ushort local_res8;
  uint6 uStackX_a;
  longlong local_res10;
  
  pvVar1 = ProcessEnvironmentBlock;
  *(undefined8 *)(local_res10 + -8) = in_R10;
  *(undefined8 *)(local_res10 + -0x10) = in_R10;
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((local_res8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res8 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res8 & 0x200) != 0) * 0x200 | (ulonglong)((local_res8 & 0x80) != 0) * 0x80
       | (ulonglong)((local_res8 & 0x40) != 0) * 0x40 | (ulonglong)((local_res8 & 0x10) != 0) * 0x10
       | (ulonglong)((local_res8 & 4) != 0) * 4 | (ulonglong)((local_res8 & 1) != 0) |
       (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 | (ulonglong)((uStackX_a & 4) != 0) * 0x40000
  ;
  *(undefined4 *)(local_res10 + -0x20) = 0x464dfb27;
  *(undefined4 *)(local_res10 + -0x1c) = 0;
  uVar2 = *(ulonglong *)(local_res10 + -0x18);
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *(ulonglong *)(local_res10 + -8) = (*(ulonglong *)(local_res10 + -0x20) ^ 0x41e442e5) - 0x5195014;
  *(undefined8 *)(local_res10 + -0x28cf) = unaff_R13;
  *(undefined8 *)(local_res10 + -0x28d7) = unaff_R13;
  *(undefined **)(local_res10 + -0x28cf) = &DAT_156ef2e4a;
  return pvVar1;
}



// FUNCTION 14d80065d FUN_14d80065d body=131 status=ok
// SIG undefined FUN_14d80065d(void)

void FUN_14d80065d(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_156b41bcc(param_1,param_2,
                ~*(ulonglong *)(unaff_R12 + -0x40) & (in_RAX ^ 0xffffffffffffffff) |
                *(ulonglong *)(unaff_R12 + -0x40),FUN_156b41bcc);
  return;
}



// FUNCTION 14d800897 FUN_14d800897 body=91 status=ok
// SIG undefined FUN_14d800897(void)

undefined8 FUN_14d800897(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d80090e FUN_14d80090e body=200 status=ok
// SIG undefined FUN_14d80090e(void)

void FUN_14d80090e(undefined8 param_1,undefined8 param_2)

{
  FUN_15b28e476();
  (*(code *)0x14dd5be5d)(param_1,param_2);
  return;
}



// FUNCTION 14d8009de FUN_14d8009de body=168 status=ok
// SIG undefined FUN_14d8009de(void)

/* WARNING: Removing unreachable block (ram,0x00014d800a78) */

void FUN_14d8009de(ulonglong param_1)

{
  undefined8 in_stack_00000008;
  ulonglong local_res10;
  ulonglong in_stack_00000018;
  ulonglong uStackX_20;
  
  if (local_res10 + param_1 < ((~param_1 | local_res10) + param_1 + 1) * 2) {
    FUN_165c42f6b();
    return;
  }
  FUN_165aef2a7(FUN_165aef2a7,uStackX_20 | param_1,in_stack_00000008,&stack0x00000008,
                ~(in_stack_00000018 & param_1 | ~(in_stack_00000018 | param_1)));
  FUN_165c42fe4();
  return;
}



// FUNCTION 14d800b29 thunk_FUN_14d800b2f body=5 status=ok
// SIG undefined thunk_FUN_14d800b2f(void)

void thunk_FUN_14d800b2f(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14d800b2f FUN_14d800b2f body=36 status=ok
// SIG undefined FUN_14d800b2f(void)

void FUN_14d800b2f(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14d800c4a FUN_14d800c4a body=317 status=ok
// SIG undefined FUN_14d800c4a(void)

/* WARNING: Removing unreachable block (ram,0x000162af8123) */
/* WARNING: Removing unreachable block (ram,0x000162af812e) */
/* WARNING: Removing unreachable block (ram,0x00014d800ce8) */
/* WARNING: Removing unreachable block (ram,0x00014d800d7f) */
/* WARNING: Removing unreachable block (ram,0x00014d800d85) */
/* WARNING: Removing unreachable block (ram,0x00014d800d8a) */
/* WARNING: Removing unreachable block (ram,0x000162af80aa) */
/* WARNING: Removing unreachable block (ram,0x000157617377) */
/* WARNING: Removing unreachable block (ram,0x0001576173da) */
/* WARNING: Removing unreachable block (ram,0x0001576173dc) */
/* WARNING: Removing unreachable block (ram,0x000162af8129) */

undefined8 FUN_14d800c4a(void)

{
  longlong *plVar1;
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  longlong in_R11;
  undefined8 unaff_R12;
  longlong local_res20;
  
  *(undefined8 *)(local_res20 + -8) = unaff_R12;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RBP;
  *(undefined8 *)(local_res20 + -0x18) = unaff_RBP;
  *(undefined8 *)(local_res20 + -0x20) = unaff_RSI;
  *(undefined8 *)(local_res20 + -0x28) = in_R10;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  plVar1 = (longlong *)(local_res20 + -0x18);
  *plVar1 = 0;
  *plVar1 = *plVar1 - in_R11;
  *plVar1 = -*plVar1;
  *(undefined1 **)(local_res20 + -8) = &LAB_1563c2559;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x18) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x10) = 0x14d7abd04;
  return in_RAX;
}



// FUNCTION 14d800d8a FUN_14d800d8a body=3 status=ok
// SIG undefined FUN_14d800d8a(void)

void FUN_14d800d8a(void)

{
  return;
}



// FUNCTION 14d800eab FUN_14d800eab body=190 status=ok
// SIG undefined FUN_14d800eab(void)

void FUN_14d800eab(void)

{
  return;
}



// FUNCTION 14d80101d FUN_14d80101d body=245 status=ok
// SIG undefined FUN_14d80101d(void)

/* WARNING: Removing unreachable block (ram,0x00014d8010b7) */

undefined8 FUN_14d80101d(void)

{
  return 0;
}



// FUNCTION 14d801506 FUN_14d801506 body=177 status=ok
// SIG undefined FUN_14d801506(void)

/* WARNING: Removing unreachable block (ram,0x00014d8015a8) */

void FUN_14d801506(void)

{
  longlong unaff_RSI;
  longlong unaff_R12;
  
  *(undefined8 *)(unaff_R12 + -8) = *(undefined8 *)(unaff_RSI + -0x90);
  *(undefined8 *)(unaff_R12 + -8) = *(undefined8 *)(unaff_R12 + -8);
  *(undefined8 *)(unaff_R12 + -8) = *(undefined8 *)(unaff_RSI + -0x50);
  *(undefined1 **)(unaff_R12 + -8) = &LAB_161b6812c;
  return;
}



// FUNCTION 14d8015b7 FUN_14d8015b7 body=167 status=ok
// SIG undefined FUN_14d8015b7(void)

void FUN_14d8015b7(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ushort uVar1;
  longlong in_RAX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ushort in_stack_00000048;
  
  uVar1 = (ushort)*(undefined8 *)(unaff_R13 + -0x38);
  (*(code *)0x1610bf14d)
            ((~in_stack_00000048 | ~(uVar1 & (ushort)unaff_R15) & (uVar1 | (ushort)unaff_R15)) +
             in_stack_00000048 + 1,param_2,
             ~(*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) &
             (*(ulonglong *)(unaff_R13 + -0x88) | unaff_R15),
             in_RAX + unaff_R15 + (param_4 & unaff_R15) * -2);
  return;
}



// FUNCTION 14d80165e thunk_FUN_14d801664 body=5 status=ok
// SIG undefined thunk_FUN_14d801664(void)

undefined8 thunk_FUN_14d801664(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d801664 FUN_14d801664 body=83 status=ok
// SIG undefined FUN_14d801664(void)

undefined8 FUN_14d801664(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d8016cf FUN_14d8016cf body=143 status=ok
// SIG undefined FUN_14d8016cf(void)

void FUN_14d8016cf(longlong param_1)

{
  ulonglong unaff_RBX;
  
  FUN_160bee521(param_1,FUN_160bee521,
                *(ulonglong *)(param_1 + -0x50) + unaff_RBX +
                (*(ulonglong *)(param_1 + -0x50) & unaff_RBX) * -2);
  return;
}



// FUNCTION 14d8018ae FUN_14d8018ae body=142 status=ok
// SIG undefined FUN_14d8018ae(void)

void FUN_14d8018ae(void)

{
  undefined8 *unaff_RBX;
  ulonglong unaff_R14;
  
  FUN_1649f9873();
  *unaff_RBX = &DAT_db2aaf3d7897979 + (unaff_R14 & 0xdb2aaf3d7897979) * -2 + unaff_R14;
  return;
}



// FUNCTION 14d80193d FUN_14d80193d body=80 status=ok
// SIG undefined FUN_14d80193d(void)

void FUN_14d80193d(void)

{
  undefined8 *unaff_RBX;
  ulonglong unaff_R14;
  
  *unaff_RBX = &DAT_db2aaf3d7897979 + (unaff_R14 & 0xdb2aaf3d7897979) * -2 + unaff_R14;
  return;
}



// FUNCTION 14d80198d FUN_14d80198d body=79 status=ok
// SIG undefined FUN_14d80198d(void)

void FUN_14d80198d(void)

{
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  
  if (-1 < (longlong)local_res8) {
    *(undefined8 *)(local_res8 & 0x7fffffffffffffff) = unaff_retaddr;
    thunk_FUN_15b7ddc7c();
    return;
  }
  FUN_164af5bb0();
  return;
}



// FUNCTION 14d8019dc FUN_14d8019dc body=235 status=ok
// SIG undefined FUN_14d8019dc(void)

void FUN_14d8019dc(undefined8 param_1,undefined8 param_2)

{
  (*(code *)0x1615ce10b)(param_1,param_2);
  return;
}



// FUNCTION 14d801b91 FUN_14d801b91 body=157 status=ok
// SIG undefined FUN_14d801b91(void)

void FUN_14d801b91(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_161943d1f(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d801c2e thunk_FUN_14d801c34 body=5 status=ok
// SIG undefined thunk_FUN_14d801c34(void)

/* WARNING: Instruction at (ram,0x00014d801c92) overlaps instruction at (ram,0x00014d801c90)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d801cc7) */

void thunk_FUN_14d801c34(ulonglong param_1)

{
  uint unaff_EBP;
  longlong unaff_RDI;
  uint unaff_retaddr;
  
  if ((ulonglong)(unaff_retaddr ^ unaff_EBP) != 0xffffffff820a98a1) {
    FUN_15b422c78((char)param_1,FUN_15b422c78,
                  *(ulonglong *)(unaff_RDI + -0x70) + param_1 +
                  (*(ulonglong *)(unaff_RDI + -0x70) & param_1) * -2);
    FUN_166272c9c();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d801c34 FUN_14d801c34 body=94 status=ok
// SIG undefined FUN_14d801c34(void)

/* WARNING: Instruction at (ram,0x00014d801c92) overlaps instruction at (ram,0x00014d801c90)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d801cc7) */

void FUN_14d801c34(ulonglong param_1)

{
  uint unaff_EBP;
  longlong unaff_RDI;
  uint unaff_retaddr;
  
  if ((ulonglong)(unaff_retaddr ^ unaff_EBP) != 0xffffffff820a98a1) {
    FUN_15b422c78((char)param_1,FUN_15b422c78,
                  *(ulonglong *)(unaff_RDI + -0x70) + param_1 +
                  (*(ulonglong *)(unaff_RDI + -0x70) & param_1) * -2);
    FUN_166272c9c();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d801e2f FUN_14d801e2f body=141 status=ok
// SIG undefined FUN_14d801e2f(void)

undefined8 FUN_14d801e2f(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d801eeb FUN_14d801eeb body=42 status=ok
// SIG undefined FUN_14d801eeb(void)

void FUN_14d801eeb(void)

{
  return;
}



// FUNCTION 14d801f78 FUN_14d801f78 body=37 status=ok
// SIG undefined FUN_14d801f78(void)

void FUN_14d801f78(void)

{
  return;
}



// FUNCTION 14d8021b5 FUN_14d8021b5 body=406 status=ok
// SIG undefined FUN_14d8021b5(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000162ee1162) overlaps instruction at (ram,0x000162ee1161)
    */
/* WARNING: Removing unreachable block (ram,0x000162ee11e4) */
/* WARNING: Removing unreachable block (ram,0x000162ee1202) */
/* WARNING: Removing unreachable block (ram,0x000162ee11f6) */
/* WARNING: Removing unreachable block (ram,0x000161c81615) */
/* WARNING: Removing unreachable block (ram,0x000161c8160f) */
/* WARNING: Removing unreachable block (ram,0x0001611562e2) */
/* WARNING: Removing unreachable block (ram,0x00014d8021e6) */
/* WARNING: Removing unreachable block (ram,0x0001625db02d) */
/* WARNING: Removing unreachable block (ram,0x0001625db0b5) */
/* WARNING: Removing unreachable block (ram,0x0001625db0bb) */
/* WARNING: Removing unreachable block (ram,0x000162ee10bf) */
/* WARNING: Removing unreachable block (ram,0x000162ee1161) */
/* WARNING: Removing unreachable block (ram,0x000162ee1162) */
/* WARNING: Removing unreachable block (ram,0x000161ae97ce) */
/* WARNING: Removing unreachable block (ram,0x000161ae9838) */
/* WARNING: Removing unreachable block (ram,0x000161ae9862) */
/* WARNING: Removing unreachable block (ram,0x000161ae986e) */
/* WARNING: Removing unreachable block (ram,0x000161ae9857) */
/* WARNING: Removing unreachable block (ram,0x0001574c1906) */
/* WARNING: Removing unreachable block (ram,0x0001574c195a) */
/* WARNING: Removing unreachable block (ram,0x000161ae9837) */
/* WARNING: Removing unreachable block (ram,0x00014d8022d4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d8021b5(void)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong unaff_R12;
  ulonglong unaff_R15;
  ulonglong uStackX_18;
  
  FUN_156c7b2ed(&stack0x00000000,FUN_156c7b2ed,~*(ulonglong *)(unaff_R12 + -0x80) | in_RAX);
  if ((unaff_R15 - (uStackX_18 | unaff_R15)) + uStackX_18 == 0) {
    uVar1 = FUN_161c81588();
    return uVar1;
  }
  uVar1 = FUN_1611562e2();
  return uVar1;
}



// FUNCTION 14d802477 thunk_FUN_14d80247d body=5 status=ok
// SIG undefined thunk_FUN_14d80247d(void)

void thunk_FUN_14d80247d(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  (*(code *)0x14de0852d)(unaff_retaddr,param_2);
  return;
}



// FUNCTION 14d80247d FUN_14d80247d body=126 status=ok
// SIG undefined FUN_14d80247d(void)

void FUN_14d80247d(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  (*(code *)0x14de0852d)(unaff_retaddr,param_2);
  return;
}



// FUNCTION 14d802598 FUN_14d802598 body=135 status=ok
// SIG undefined FUN_14d802598(void)

void FUN_14d802598(undefined8 param_1,undefined8 param_2)

{
  FUN_14d889d07(param_1,param_2);
  return;
}



// FUNCTION 14d8027ef FUN_14d8027ef body=95 status=ok
// SIG undefined FUN_14d8027ef(void)

void FUN_14d8027ef(undefined8 param_1)

{
  FUN_14db0e64f(param_1,FUN_14db0e64f);
  return;
}



// FUNCTION 14d802851 FUN_14d802851 body=161 status=ok
// SIG undefined FUN_14d802851(void)

undefined8 FUN_14d802851(void)

{
  longlong unaff_R13;
  
  return *(undefined8 *)(unaff_R13 + -0x38);
}



// FUNCTION 14d8028f5 FUN_14d8028f5 body=155 status=ok
// SIG undefined FUN_14d8028f5(void)

void FUN_14d8028f5(void)

{
  undefined8 in_stack_00000008;
  
  FUN_166640199(FUN_166640199,in_stack_00000008);
  return;
}



// FUNCTION 14d802b39 FUN_14d802b39 body=151 status=ok
// SIG undefined FUN_14d802b39(void)

void FUN_14d802b39(void)

{
  return;
}



// FUNCTION 14d802bd1 FUN_14d802bd1 body=159 status=ok
// SIG undefined FUN_14d802bd1(void)

void FUN_14d802bd1(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong unaff_R14;
  
  FUN_165d8670d(param_1,0x77349a,(param_1 - (param_3 - unaff_R14)) + (unaff_R14 & param_1) * -2,
                FUN_165d8670d);
  return;
}



// FUNCTION 14d802d0d FUN_14d802d0d body=142 status=ok
// SIG undefined FUN_14d802d0d(void)

/* WARNING: Removing unreachable block (ram,0x00014d802d9d) */
/* WARNING: Removing unreachable block (ram,0x000165cec15f) */
/* WARNING: Removing unreachable block (ram,0x000165cec1c1) */
/* WARNING: Removing unreachable block (ram,0x000165f0f331) */
/* WARNING: Removing unreachable block (ram,0x00014d802f45) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d802d0d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong in_RAX;
  undefined8 in_stack_00000018;
  
  if (param_5 + in_RAX < (param_5 & in_RAX) << 1) {
    FUN_1623c72e5();
    return;
  }
  FUN_15b981c25(param_1,in_stack_00000018,param_3,param_4);
  return;
}



// FUNCTION 14d802d9d FUN_14d802d9d body=139 status=ok
// SIG undefined FUN_14d802d9d(void)

/* WARNING: Removing unreachable block (ram,0x00014d802f45) */

void FUN_14d802d9d(ulonglong param_1)

{
  ulonglong *puVar1;
  ushort *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  longlong in_R10;
  code *pcVar7;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 *local_res18;
  
  puVar1 = local_res18 + -1;
  *puVar1 = 0x2b3d175c;
  *puVar1 = *puVar1 ^ 0x2b3d175c;
  *puVar1 = *puVar1 + in_R10;
  local_res18[-2] = unaff_R12;
  local_res18[-3] = unaff_R12;
  local_res18[-4] = unaff_R13;
  local_res18[-2] = local_res18[-1];
  uVar3 = local_res18[-3];
  local_res18[-1] = 0;
  local_res18[-1] = &DAT_1655d52b2 + local_res18[-1];
  pcVar7 = FUN_1655d5291;
  local_res18[-3] = FUN_14d802e2a;
  FUN_1655d5291();
  local_res18[-1] = pcVar7;
  local_res18[-2] = uVar3;
  *local_res18 = unaff_RBX;
  local_res18[-1] = unaff_RDI;
  local_res18[-2] = unaff_RBP;
  puVar2 = (ushort *)(local_res18 + 1);
  local_res18[-2] = unaff_RBX;
  *(undefined2 *)(local_res18 + -2) = 0xffb2;
  *puVar2 = ~*puVar2;
  *puVar2 = *puVar2 | ~((short)local_res18[-2] - 0xb3U);
  *puVar2 = ~*puVar2;
  local_res18[-2] = 0x14d802eb5;
  FUN_15b756640();
  local_res18[1] = 0x7c3380eff6814983;
  lVar4 = local_res18[1];
  local_res18[1] = param_1;
  uVar5 = local_res18[1];
  uVar6 = lVar4 + param_1 + (param_1 & 0x7c3380eff6814983) * -2;
  local_res18[1] = uVar6 & 0x15b756640;
  local_res18[1] = 0xacd34d4ec1c74824;
  *local_res18 = 0xacd34d4ec1c74824;
  local_res18[1] = FUN_165cec202;
  FUN_1646fa84f(uVar5,FUN_1646fa84f,
                ~((~(~uVar5 & 0x53535a59080c5489) + 0x53535a59080c5489) - uVar5 &
                 (uVar5 | 0xacaca5a6f7f3ab76)),uVar6);
  return;
}



// FUNCTION 14d802e2a FUN_14d802e2a body=580 status=ok
// SIG undefined FUN_14d802e2a(void)

/* WARNING: Removing unreachable block (ram,0x00014d802f45) */

void FUN_14d802e2a(ulonglong param_1)

{
  FUN_15b756640();
  FUN_1646fa84f(param_1,FUN_1646fa84f,
                ~((~(~param_1 & 0x53535a59080c5489) + 0x53535a59080c5489) - param_1 &
                 (param_1 | 0xacaca5a6f7f3ab76)),
                param_1 + 0x7c3380eff6814983 + (param_1 & 0x7c3380eff6814983) * -2);
  return;
}



// FUNCTION 14d803062 FUN_14d803062 body=365 status=ok
// SIG undefined FUN_14d803062(void)

ulonglong FUN_14d803062(ulonglong param_1)

{
  bool bVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0x68) ^ param_1;
  bVar1 = *(longlong *)(unaff_RDI + -0x48) != -1;
  if (bVar1 || param_1 != 0xffffffffffffffff) {
    uVar2 = FUN_165aa8764(param_1,uVar2);
    return uVar2;
  }
  if (!bVar1 && param_1 == 0xffffffffffffffff) {
    uVar2 = FUN_165aa8764(param_1,uVar2);
    return uVar2;
  }
  return *(ulonglong *)(param_1 - 0x68) | 0x4d5ff4ed1eee8b8b;
}



// FUNCTION 14d8032f3 FUN_14d8032f3 body=724 status=ok
// SIG undefined FUN_14d8032f3(void)

/* WARNING: Removing unreachable block (ram,0x00014d80354f) */
/* WARNING: Removing unreachable block (ram,0x00014d8035bc) */
/* WARNING: Removing unreachable block (ram,0x00014d8035c1) */
/* WARNING: Removing unreachable block (ram,0x00014d8035c7) */
/* WARNING: Removing unreachable block (ram,0x00014d8035cc) */

undefined8 FUN_14d8032f3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_16503f147();
  FUN_161bf1db4();
  FUN_1620f4189();
  if (*(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
      (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2 == 0) {
    return param_3;
  }
  uVar1 = thunk_FUN_162ef1646();
  return uVar1;
}



// FUNCTION 14d8035cc FUN_14d8035cc body=131 status=ok
// SIG undefined FUN_14d8035cc(void)

void FUN_14d8035cc(void)

{
  FUN_161d8c686();
  return;
}



// FUNCTION 14d803650 FUN_14d803650 body=267 status=ok
// SIG undefined FUN_14d803650(void)

/* WARNING: Removing unreachable block (ram,0x00014d8036dc) */

void FUN_14d803650(void)

{
  return;
}



// FUNCTION 14d80389c FUN_14d80389c body=63 status=ok
// SIG undefined FUN_14d80389c(void)

undefined8 FUN_14d80389c(void)

{
  undefined8 in_RAX;
  longlong unaff_RSI;
  longlong unaff_R12;
  
  if (unaff_RSI != unaff_R12) {
    return in_RAX;
  }
  return in_RAX;
}



// FUNCTION 14d803925 FUN_14d803925 body=132 status=ok
// SIG undefined FUN_14d803925(void)

ulonglong FUN_14d803925(void)

{
  undefined8 in_R9;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  ulonglong in_stack_00000028;
  
  FUN_161dc56a0(in_stack_00000020,in_stack_00000008,in_stack_00000018,in_R9);
  return ~in_stack_00000028;
}



// FUNCTION 14d8039aa FUN_14d8039aa body=166 status=ok
// SIG undefined FUN_14d8039aa(void)

ulonglong FUN_14d8039aa(void)

{
  undefined8 local_res8;
  
  return ~local_res8;
}



// FUNCTION 14d803afb FUN_14d803afb body=11 status=ok
// SIG undefined FUN_14d803afb(void)

void FUN_14d803afb(void)

{
  return;
}



// FUNCTION 14d803bbf FUN_14d803bbf body=122 status=ok
// SIG undefined FUN_14d803bbf(void)

undefined8 FUN_14d803bbf(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  ulonglong in_R10;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  longlong unaff_retaddr;
  
  *(undefined4 *)(&stack0xfffffffff45b9b06 + unaff_retaddr) = 0xb8621829;
  *(undefined4 *)(&stack0xfffffffff45b9b0a + unaff_retaddr) = 0xf97683fe;
  *(int *)(&stack0xfffffffff45b9b0a + unaff_retaddr) =
       *(int *)(&stack0xfffffffff45b9b0a + unaff_retaddr) + 0x6897c01;
  lVar1 = *(longlong *)(&stack0xfffffffff45b9b06 + unaff_retaddr);
  *(undefined8 *)(&stack0xfffffffff45b9b06 + unaff_retaddr) = in_RAX;
  *(undefined8 *)(&stack0x3bf982f5 + lVar1 + unaff_retaddr) = 0;
  uVar2 = *(undefined8 *)(&stack0xfffffffff45b9b06 + unaff_retaddr);
  *(undefined8 *)(&stack0xfffffffff45b9b0e + unaff_retaddr) = unaff_R15;
  *(undefined8 *)(&stack0xfffffffff45b9b06 + unaff_retaddr) = unaff_R14;
  *(ulonglong *)(&stack0xfffffffff45b9b1e + unaff_retaddr) =
       ~*(ulonglong *)(&stack0xfffffffff45b9b1e + unaff_retaddr);
  *(longlong *)(&stack0xfffffffff45b9b1e + unaff_retaddr) =
       *(longlong *)(&stack0xfffffffff45b9b1e + unaff_retaddr) + 2;
  *(longlong *)(&stack0xfffffffff45b9b1e + unaff_retaddr) =
       -*(longlong *)(&stack0xfffffffff45b9b1e + unaff_retaddr);
  *(ulonglong *)(&stack0xfffffffff45b9b1e + unaff_retaddr) =
       *(longlong *)(&stack0xfffffffff45b9b1e + unaff_retaddr) - ~in_R10;
  return uVar2;
}



// FUNCTION 14d803c84 FUN_14d803c84 body=172 status=ok
// SIG undefined FUN_14d803c84(void)

void FUN_14d803c84(void)

{
  (*(code *)0x15b04915e)();
  return;
}



// FUNCTION 14d803d31 FUN_14d803d31 body=177 status=ok
// SIG undefined FUN_14d803d31(void)

undefined8 FUN_14d803d31(void)

{
  undefined8 in_R9;
  
  FUN_15af8d16f();
  return in_R9;
}



// FUNCTION 14d803e4d FUN_14d803e4d body=716 status=ok
// SIG undefined FUN_14d803e4d(void)

/* WARNING: Removing unreachable block (ram,0x00014d803f8c) */
/* WARNING: Removing unreachable block (ram,0x00014d803f92) */
/* WARNING: Removing unreachable block (ram,0x00014d803ef7) */
/* WARNING: Removing unreachable block (ram,0x00014d803efd) */
/* WARNING: Removing unreachable block (ram,0x00014d803f02) */

undefined8
FUN_14d803e4d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 unaff_RBP;
  undefined8 unaff_R13;
  longlong lStackX_18;
  
  *(undefined8 *)(lStackX_18 + -8) = unaff_RBP;
  *(undefined8 *)(lStackX_18 + -0x10) = unaff_R13;
  *(undefined8 *)(lStackX_18 + -0x18) = unaff_R13;
  *(undefined8 *)(lStackX_18 + -0x20) = param_4;
  *(undefined8 *)(lStackX_18 + -0x10) = 0;
  *(longlong *)(lStackX_18 + -0x10) =
       *(longlong *)(lStackX_18 + -0x10) - *(longlong *)(lStackX_18 + -8);
  *(longlong *)(lStackX_18 + -0x10) = -*(longlong *)(lStackX_18 + -0x10);
  *(undefined **)(lStackX_18 + -8) = &DAT_1625a115c;
                    /* WARNING: Could not recover jumptable at 0x0001625a1141. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,*(undefined8 *)(lStackX_18 + -0x20));
  return uVar1;
}



// FUNCTION 14d8042a9 FUN_14d8042a9 body=120 status=ok
// SIG undefined FUN_14d8042a9(void)

void FUN_14d8042a9(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  undefined8 unaff_retaddr;
  
  FUN_14ddca076(param_1,~(unaff_RDI & ((param_2 - (unaff_RSI | param_2)) + unaff_RSI | unaff_RBP)),
                param_3,unaff_retaddr);
  return;
}



// FUNCTION 14d8043c0 FUN_14d8043c0 body=140 status=ok
// SIG undefined FUN_14d8043c0(void)

/* WARNING: Removing unreachable block (ram,0x00014d8044de) */
/* WARNING: Removing unreachable block (ram,0x00016524db46) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8043c0(ulonglong param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_161e1eab8(1,FUN_161e1eab8,&stack0xfffffffffffffff0,~param_1);
  if ((longlong)
      (*(ulonglong *)(unaff_R13 + -0x38) + unaff_R15 +
      (*(ulonglong *)(unaff_R13 + -0x38) & unaff_R15) * -2) < 0) {
    FUN_16103e9a6(*(undefined8 *)(unaff_R13 + -0x78));
    return;
  }
  FUN_16524daaf();
  return;
}



// FUNCTION 14d80444e FUN_14d80444e body=223 status=ok
// SIG undefined FUN_14d80444e(void)

/* WARNING: Removing unreachable block (ram,0x00014d8044de) */
/* WARNING: Removing unreachable block (ram,0x00016524db46) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d80444e(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if ((longlong)
      (*(ulonglong *)(unaff_R13 + -0x38) + unaff_R15 +
      (*(ulonglong *)(unaff_R13 + -0x38) & unaff_R15) * -2) < 0) {
    FUN_16103e9a6(*(undefined8 *)(unaff_R13 + -0x78));
    return;
  }
  FUN_16524daaf();
  return;
}



// FUNCTION 14d804708 FUN_14d804708 body=208 status=ok
// SIG undefined FUN_14d804708(void)

/* WARNING: Removing unreachable block (ram,0x00014d8047b9) */

undefined8 FUN_14d804708(void)

{
  undefined8 in_RAX;
  longlong unaff_RBX;
  undefined8 unaff_R12;
  undefined8 uStackX_20;
  
  *(undefined8 *)((longlong)&uStackX_20 + unaff_RBX) = unaff_R12;
  return in_RAX;
}



// FUNCTION 14d804a5e FUN_14d804a5e body=82 status=ok
// SIG undefined FUN_14d804a5e(void)

void FUN_14d804a5e(void)

{
  FUN_14d7c1f86();
  return;
}



// FUNCTION 14d804b10 FUN_14d804b10 body=133 status=ok
// SIG undefined FUN_14d804b10(void)

ulonglong FUN_14d804b10(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return ~((~param_1 | *(ulonglong *)(unaff_RDI + -0x80)) &
          (~*(ulonglong *)(unaff_RDI + -0x80) | param_1));
}



// FUNCTION 14d804c62 FUN_14d804c62 body=12 status=ok
// SIG undefined FUN_14d804c62(void)

void FUN_14d804c62(void)

{
  FUN_16131bb16();
  return;
}



// FUNCTION 14d804c6e FUN_14d804c6e body=435 status=ok
// SIG undefined FUN_14d804c6e(void)

/* WARNING: Removing unreachable block (ram,0x00014d804d7e) */

void FUN_14d804c6e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RSI;
  
  if (unaff_RSI == 0x11f9f6) {
    FUN_16131bb16();
    return;
  }
  if (unaff_RSI != 0x11f9f7) {
    FUN_165072594();
    return;
  }
  FUN_165072583(param_1,param_2,param_3,param_4);
  FUN_162eda29d();
  (*(code *)0x157450ce9)(0x157450ce9);
  return;
}



// FUNCTION 14d804e25 FUN_14d804e25 body=314 status=ok
// SIG undefined FUN_14d804e25(void)

/* WARNING: Removing unreachable block (ram,0x00014d804eee) */

void FUN_14d804e25(uint param_1)

{
  uint uVar1;
  int in_R11D;
  uint in_stack_00000008;
  
  uVar1 = (in_R11D + (in_stack_00000008 ^ 0x47d8695b)) - ~param_1;
  uVar1 = uVar1 * 0x800 | uVar1 >> 0x15;
  FUN_1667d08e3((-0x800 - (uVar1 | 0xfffff800)) + uVar1);
  FUN_161404577();
  return;
}



// FUNCTION 14d805145 FUN_14d805145 body=549 status=ok
// SIG undefined FUN_14d805145(void)

/* WARNING: Removing unreachable block (ram,0x00014d805246) */
/* WARNING: Removing unreachable block (ram,0x00014d805284) */
/* WARNING: Removing unreachable block (ram,0x00014d80528a) */

undefined8 FUN_14d805145(ulonglong param_1,ulonglong param_2)

{
  undefined8 in_RAX;
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  char in_stack_00000038;
  
  uVar3 = *(ulonglong *)(unaff_R13 + ~(~param_1 & (param_2 | 0xffffffff922eb2e4)));
  uVar3 = ~((0xffffffffffffffff - unaff_R15 | uVar3) & (~uVar3 | unaff_R15));
  if (-1 < in_stack_00000038) {
    return in_RAX;
  }
  uVar1 = FUN_160fd4c43(uVar3,*(undefined8 *)(unaff_R13 + -0x28));
  uVar2 = CONCAT71((int7)(CONCAT62((int6)(uVar3 >> 0x10),0xffff) >> 8),0xd3);
  uVar2 = FUN_16475211f(uVar2,CONCAT62((int6)((ulonglong)*(undefined8 *)(unaff_R12 + -0x38) >> 0x10)
                                       ,(short)uVar2) << 6,
                        *(ulonglong *)(unaff_R12 + -0x40) + uVar1 +
                        (*(ulonglong *)(unaff_R12 + -0x40) & uVar1) * -2,
                        *(undefined8 *)(unaff_R12 + -0x30));
  return uVar2;
}



// FUNCTION 14d8053e9 FUN_14d8053e9 body=1773 status=ok
// SIG undefined FUN_14d8053e9(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00016253a07a) overlaps instruction at (ram,0x00016253a077)
    */
/* WARNING: Removing unreachable block (ram,0x00016256a6cc) */
/* WARNING: Removing unreachable block (ram,0x00014e0f87f5) */
/* WARNING: Removing unreachable block (ram,0x00014e0f8804) */
/* WARNING: Removing unreachable block (ram,0x00014e0f880a) */
/* WARNING: Removing unreachable block (ram,0x00014e0f88ae) */
/* WARNING: Removing unreachable block (ram,0x000156d923a1) */
/* WARNING: Removing unreachable block (ram,0x00014d8055e9) */
/* WARNING: Removing unreachable block (ram,0x00014d805674) */
/* WARNING: Removing unreachable block (ram,0x00014e0f8770) */
/* WARNING: Removing unreachable block (ram,0x00016256a6bb) */
/* WARNING: Removing unreachable block (ram,0x00016256a6b6) */
/* WARNING: Removing unreachable block (ram,0x00016256a6bf) */
/* WARNING: Removing unreachable block (ram,0x00015b42014c) */
/* WARNING: Removing unreachable block (ram,0x00015b420152) */
/* WARNING: Removing unreachable block (ram,0x00016253a016) */
/* WARNING: Removing unreachable block (ram,0x00016253a073) */
/* WARNING: Removing unreachable block (ram,0x00014d80567a) */
/* WARNING: Removing unreachable block (ram,0x00014d805706) */
/* WARNING: Removing unreachable block (ram,0x00014d805703) */
/* WARNING: Removing unreachable block (ram,0x00014d8054c3) */
/* WARNING: Removing unreachable block (ram,0x00014d805543) */
/* WARNING: Removing unreachable block (ram,0x00014d805549) */
/* WARNING: Removing unreachable block (ram,0x00014d8055de) */
/* WARNING: Removing unreachable block (ram,0x0001567d5689) */
/* WARNING: Removing unreachable block (ram,0x0001567d56f7) */
/* WARNING: Removing unreachable block (ram,0x0001567d56fb) */
/* WARNING: Removing unreachable block (ram,0x00016100635e) */

undefined8 FUN_14d8053e9(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  undefined8 unaff_RSI;
  undefined8 in_R10;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uVar6;
  ulonglong local_20;
  uint local_8;
  
  uVar4 = (ulonglong)local_8;
  if (0xfffffffff2f800b3 < uVar4) {
    local_20 = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SCARRY8(uVar4,0xd07ff4c) * 0x800 |
               (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
               (ulonglong)(uVar4 + 0xd07ff4c == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
               (ulonglong)((POPCOUNT(uVar4 + 0xd07ff4c & 0xff) & 1U) == 0) * 4 | 1 |
               (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
               (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
    uVar3 = FUN_162539f84();
    return uVar3;
  }
  local_20 = (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)(in_ID & 1) * 0x200000 |
             (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
             (ulonglong)(in_AC & 1) * 0x40000;
  bVar2 = (ulonglong)(in_TF & 1) == 0;
  if (bVar2) {
    puVar5 = (ulonglong *)&stack0xffffffffffffffe8;
  }
  else {
    puVar5 = &local_20;
  }
  puVar5[-1] = uVar4 + 0xd084704;
  uVar3 = *puVar5;
  *(int *)(puVar5 + 2) = (int)puVar5[-1];
  *(undefined4 *)((longlong)puVar5 + 0x14) = 0x21d91ea9;
  puVar5[1] = param_2;
  *puVar5 = in_RAX;
  if ((bVar2 && &local_20 >= &DAT_fffffffffffffff8) && (!bVar2 || &local_20 < &DAT_fffffffffffffff8)
     ) {
    uVar4 = *puVar5;
    *puVar5 = unaff_RSI;
    uVar1 = *puVar5;
    *puVar5 = in_RAX;
    *(undefined4 *)(puVar5 + -1) = 0xbccab496;
    *(int *)puVar5 = (int)puVar5[-1];
    *(undefined4 *)((longlong)puVar5 + 4) = 0xffffffff;
    if (*puVar5 == -0x1c4bda75) {
      uVar4 = uVar4 & 0xffffffff;
    }
    puVar5[-1] = uVar3;
    puVar5[-2] = uVar1;
    puVar5[-3] = uVar1;
    puVar5[-4] = (ulonglong)puVar5;
    puVar5[-5] = (ulonglong)puVar5;
    puVar5[-4] = (ulonglong)&LAB_16253a0b7;
    uVar3 = FUN_160ff8332(uVar4);
    return uVar3;
  }
  *(undefined4 *)puVar5 = 0x57e5f7e2;
  *(undefined4 *)((longlong)puVar5 + 4) = 0;
  uVar1 = puVar5[1];
  puVar5[1] = in_RAX;
  *puVar5 = unaff_RSI;
  puVar5[-1] = in_R10;
  puVar5[-1] = uVar3;
  uVar4 = puVar5[-1];
  *puVar5 = 0x164737295;
  FUN_156e2e121(FUN_156e2e121,uVar1);
  uVar6 = puVar5[2];
  puVar5[2] = param_4;
  puVar5[1] = (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 |
              (ulonglong)((uVar6 & 0x800) != 0) * 0x800 | (ulonglong)((uVar6 & 0x400) != 0) * 0x400
              | (ulonglong)((uVar6 & 0x200) != 0) * 0x200 |
              (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)((uVar6 & 0x80) != 0) * 0x80 |
              (ulonglong)((uVar6 & 0x40) != 0) * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
              (ulonglong)((uVar6 & 4) != 0) * 4 | (ulonglong)((uVar6 & 1) != 0) |
              (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
              (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  *puVar5 = 0xffffffffd34e8b2c;
  *puVar5 = *puVar5 + 0x2cb174dc;
  puVar5[4] = uVar4;
  uVar3 = FUN_165c7153c();
  return uVar3;
}



// FUNCTION 14d80570f FUN_14d80570f body=146 status=ok
// SIG undefined FUN_14d80570f(void)

void FUN_14d80570f(void)

{
  FUN_166d4eb94();
  return;
}



// FUNCTION 14d8057a2 thunk_FUN_14d8057a8 body=5 status=ok
// SIG undefined thunk_FUN_14d8057a8(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000164b0cfb1) overlaps instruction at (ram,0x000164b0cfb0)
    */
/* WARNING: Removing unreachable block (ram,0x000165cb020f) */
/* WARNING: Removing unreachable block (ram,0x000165cb02a1) */
/* WARNING: Removing unreachable block (ram,0x0001655f3cc3) */
/* WARNING: Removing unreachable block (ram,0x00014e015f76) */
/* WARNING: Removing unreachable block (ram,0x00014e015f7c) */
/* WARNING: Removing unreachable block (ram,0x00014e015f81) */
/* WARNING: Removing unreachable block (ram,0x000165cb02a6) */
/* WARNING: Removing unreachable block (ram,0x000165cb02ac) */
/* WARNING: Removing unreachable block (ram,0x000164b0ce51) */
/* WARNING: Removing unreachable block (ram,0x000164b0cf73) */
/* WARNING: Removing unreachable block (ram,0x000164b0cf7e) */
/* WARNING: Removing unreachable block (ram,0x000164b0cf84) */
/* WARNING: Removing unreachable block (ram,0x000164b0cfb0) */
/* WARNING: Removing unreachable block (ram,0x000164b0cfb1) */
/* WARNING: Removing unreachable block (ram,0x000164b0cfe0) */
/* WARNING: Removing unreachable block (ram,0x000164b0cfdf) */
/* WARNING: Removing unreachable block (ram,0x000164b0cfe7) */
/* WARNING: Removing unreachable block (ram,0x00014e015ee9) */
/* WARNING: Removing unreachable block (ram,0x00014e015f71) */
/* WARNING: Removing unreachable block (ram,0x000165cb032d) */
/* WARNING: Removing unreachable block (ram,0x000165cb0333) */
/* WARNING: Removing unreachable block (ram,0x000165cb0338) */
/* WARNING: Removing unreachable block (ram,0x00014e16634e) */
/* WARNING: Removing unreachable block (ram,0x00014e166354) */
/* WARNING: Removing unreachable block (ram,0x00014e16635f) */
/* WARNING: Removing unreachable block (ram,0x000165cb0204) */
/* WARNING: Removing unreachable block (ram,0x00014d80582a) */

undefined8
thunk_FUN_14d8057a8(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                   ulonglong param_5)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ushort uVar3;
  ulonglong in_RAX;
  undefined8 uVar4;
  ulonglong uVar5;
  short *psVar6;
  undefined8 in_R11;
  short sVar7;
  longlong unaff_R13;
  ulonglong uVar8;
  ulonglong unaff_R15;
  longlong lVar9;
  bool bVar10;
  byte in_AF;
  bool bVar11;
  byte in_TF;
  bool bVar12;
  byte in_IF;
  bool bVar13;
  bool bVar14;
  byte in_NT;
  bool bVar15;
  byte in_AC;
  bool bVar16;
  byte in_ID;
  ulonglong uVar17;
  ulonglong unaff_retaddr;
  undefined8 in_stack_00000008;
  ulonglong in_stack_00000010;
  ushort uStackX_20;
  ulonglong uStack_8;
  
  uVar5 = *(ulonglong *)(unaff_R13 + (0x2431899b - (~unaff_retaddr + 2)));
  uVar8 = ~(*(ulonglong *)(unaff_R13 + -0xa0) & unaff_R15) &
          (*(ulonglong *)(unaff_R13 + -0xa0) | unaff_R15);
  if ((longlong)uVar8 < 0) {
    uVar4 = FUN_165cb016a();
    return uVar4;
  }
  uStackX_20 = uStackX_20 ^ (ushort)unaff_R15;
  lVar9 = (~(param_5 | unaff_R15) | ~(param_5 & unaff_R15)) + (param_5 | unaff_R15);
  param_5 = lVar9 + 1;
  sVar7 = ~-(uStackX_20 | 0xfeff) + 2;
  bVar10 = (ushort)-sVar7 < 0x100;
  if ((!bVar10) || (bVar10 || sVar7 == -0x100)) {
    *(ulonglong *)(lVar9 + -7) = uVar8;
    *(ulonglong *)(lVar9 + -0xf) = *(ulonglong *)(lVar9 + -7);
    *(undefined8 *)(lVar9 + -0x17) = in_R11;
    *(undefined8 *)(lVar9 + -0x1f) = param_3;
    plVar2 = (longlong *)(lVar9 + -0x27);
    *(int *)plVar2 = -0x28190c28;
    *(int *)plVar2 = *(int *)plVar2 + 0x2a2c5903;
    *(undefined4 *)(lVar9 + -0x23) = 0x9b7e5e91;
    *(int *)(lVar9 + -0x23) = *(int *)(lVar9 + -0x23) + 0x6481a16f;
    uVar4 = *(undefined8 *)(lVar9 + -0x1f);
    *(undefined1 **)(lVar9 + -0x1f) = &LAB_14df5a726;
    *(undefined8 *)(lVar9 + 1 + *plVar2 + -0x2134ce3) = *(undefined8 *)(lVar9 + -0x1f);
    *(undefined8 *)(lVar9 + -0x17) = in_stack_00000008;
    *(undefined8 *)(lVar9 + -0x1f) = in_stack_00000008;
    *(undefined1 **)(lVar9 + -0x17) = &LAB_1626ee522;
    uVar4 = FUN_14df5a700(param_1,param_2,uVar4,param_4);
    return uVar4;
  }
  *(undefined4 *)(&stack0x5f519d71 + ~((~unaff_R15 | uVar5) & (~uVar5 | unaff_R15))) = 0;
  psVar6 = (short *)(~param_2 & 0x3841466f);
  uVar8 = param_2 & 0xffffffffc7beb990 | (ulonglong)psVar6;
  uVar5 = in_stack_00000010 - uVar8;
  puVar1 = (ulonglong *)(&stack0x00000010 + uVar5);
  *puVar1 = in_RAX;
  *(uint *)puVar1 = 0x7fefdd7;
  *(ulonglong *)(&stack0x00000008 + uVar5) =
       (ulonglong)((in_NT & 1) != 0) * 0x4000 | (ulonglong)SBORROW8(in_stack_00000010,uVar8) * 0x800
       | (ulonglong)((in_IF & 1) != 0) * 0x200 | (ulonglong)((in_TF & 1) != 0) * 0x100 |
       (ulonglong)((longlong)uVar5 < 0) * 0x80 | (ulonglong)(uVar5 == 0) * 0x40 |
       (ulonglong)((in_AF & 1) != 0) * 0x10 | (ulonglong)((POPCOUNT(uVar5 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(in_stack_00000010 < uVar8) | (ulonglong)((in_ID & 1) != 0) * 0x200000 |
       (ulonglong)((in_AC & 1) != 0) * 0x40000;
  uVar17 = *(ulonglong *)(&stack0x00000008 + uVar5);
  *(ulonglong *)(&stack0x00000008 + uVar5) =
       (ulonglong)((uVar17 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar17 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar17 & 0x400) != 0) * 0x400 | (ulonglong)((uVar17 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar17 & 0x100) != 0) * 0x100 | (ulonglong)((uVar17 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar17 & 0x40) != 0) * 0x40 | (ulonglong)((uVar17 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar17 & 4) != 0) * 4 | (ulonglong)((uVar17 & 1) != 0) |
       (ulonglong)((uVar17 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar17 & 0x40000) != 0) * 0x40000;
  if ((*(uint *)(&stack0x00000008 + uVar5) >> 7 & 1) != 0) {
    uVar4 = FUN_14d7f828a();
    return uVar4;
  }
  uVar17 = *(ulonglong *)(&stack0x00000008 + uVar5);
  if ((uVar17 & 0x80) != 0) {
    *puVar1 = param_1;
    *(ulonglong *)(&stack0x00000008 + uVar5) = CONCAT62((int6)(param_2 >> 0x10),0xfeff);
    *puVar1 = *puVar1;
    *puVar1 = *(ulonglong *)(&stack0x00000008 + uVar5);
    uVar8 = *puVar1;
    *puVar1 = in_RAX;
    *(short **)(&stack0x00000008 + uVar5) = psVar6;
    *(uint *)(&stack0x00000000 + uVar5) = 0x3b16016c;
    *(uint *)puVar1 = *(uint *)(&stack0x00000000 + uVar5);
    *(ulonglong *)(&stack0x00000008 + uVar5) = uVar8;
    *(ulonglong *)(&stack0x00000000 + uVar5) = in_RAX;
    *(ulonglong *)((longlong)&uStack_8 + uVar5) = uVar5;
    uVar8 = *puVar1;
    *(uint *)puVar1 = (uint)*puVar1 | 0xda077518;
    uVar17 = *puVar1;
    *(uint *)puVar1 = 0;
    *(uint *)puVar1 = (uint)*puVar1 - ~(0xffffffff - ((uint)uVar8 & 0xda077518) & (uint)uVar17);
    *(uint *)puVar1 = -(uint)*puVar1;
    *(undefined1 **)(&stack0x00000008 + uVar5) = &LAB_16638dede;
    return *(undefined8 *)(&stack0x00000000 + uVar5);
  }
  *(undefined4 *)(&stack0x00000014 + uVar5) = 0;
  *(ulonglong *)(&stack0x00000008 + uVar5) =
       (ulonglong)((uVar17 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar17 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar17 & 0x400) != 0) * 0x400 | (ulonglong)((uVar17 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar17 & 0x100) != 0) * 0x100 | (ulonglong)((uVar17 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar17 & 0x10) != 0) * 0x10 | (ulonglong)((uVar17 & 4) != 0) * 4 |
       (ulonglong)((uVar17 & 1) != 0) | (ulonglong)((uVar17 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar17 & 0x40000) != 0) * 0x40000;
  uVar17 = *(ulonglong *)(&stack0x00000008 + uVar5);
  bVar14 = (uVar17 & 0x4000) != 0;
  bVar13 = (uVar17 & 0x400) != 0;
  bVar12 = (uVar17 & 0x200) != 0;
  bVar11 = (uVar17 & 0x100) != 0;
  bVar10 = (uVar17 & 0x10) != 0;
  bVar16 = (uVar17 & 0x200000) != 0;
  bVar15 = (uVar17 & 0x40000) != 0;
  *puVar1 = *(ulonglong *)(*(longlong *)((longlong)ProcessEnvironmentBlock + 0x18) + 0x20);
  *puVar1 = *(ulonglong *)*puVar1;
  *puVar1 = (ulonglong)bVar14 * 0x4000 | (ulonglong)((uVar17 & 0x800) != 0) * 0x800 |
            (ulonglong)bVar13 * 0x400 | (ulonglong)bVar12 * 0x200 | (ulonglong)bVar11 * 0x100 |
            (ulonglong)((uVar17 & 0x80) != 0) * 0x80 | (ulonglong)((uVar17 & 0x40) != 0) * 0x40 |
            (ulonglong)bVar10 * 0x10 | (ulonglong)((uVar17 & 4) != 0) * 4 |
            (ulonglong)bVar16 * 0x200000 | (ulonglong)bVar15 * 0x40000;
  *(ulonglong *)(&stack0x00000008 + uVar5) = in_RAX;
  *(undefined4 *)(&stack0x00000008 + uVar5) = 0x13933c33;
  *(undefined4 *)(&stack0x00000000 + uVar5) = 0x57161f96;
  *(undefined4 *)(&stack0x00000004 + uVar5) = 0;
  uVar17 = *(ulonglong *)(&stack0x00000000 + uVar5);
  *(undefined4 *)
   (&stack0x00000008 + ~(~(uVar17 & 0xffffffffa8e9e06d) & (uVar17 | 0xffffffffa8e9e06d)) + uVar5) =
       0;
  uVar17 = *(ulonglong *)(&stack0x00000008 + uVar5) ^ 0x13933c32;
  *(ulonglong *)(&stack0x00000008 + uVar5) =
       (ulonglong)bVar14 * 0x4000 | (ulonglong)bVar13 * 0x400 | (ulonglong)bVar12 * 0x200 |
       (ulonglong)bVar11 * 0x100 | (ulonglong)((longlong)uVar17 < 0) * 0x80 |
       (ulonglong)(uVar17 == 0) * 0x40 | (ulonglong)bVar10 * 0x10 |
       (ulonglong)((POPCOUNT(uVar17 & 0xff) & 1U) == 0) * 4 | (ulonglong)bVar16 * 0x200000 |
       (ulonglong)bVar15 * 0x40000;
  *(undefined8 *)(&stack0x00000008 + uVar5) = 0x14d7f8324;
  uVar3 = FUN_157189bd1();
  *(ulonglong *)(&stack0x00000018 + uVar5) = *puVar1;
  *puVar1 = uVar8;
  *psVar6 = ((short)uVar17 - ~uVar3) + -0x100;
  LOCK();
  DAT_14d7c12f6 = (undefined1)*(undefined8 *)((longlong)&param_5 + uVar5);
  UNLOCK();
  *(undefined8 *)(*(longlong *)(&stack0x00000038 + uVar5) + -8) = 0x25867fe;
  uVar4 = FUN_14d85d504();
  return uVar4;
}



// FUNCTION 14d8057a8 FUN_14d8057a8 body=238 status=ok
// SIG undefined FUN_14d8057a8(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000164b0cfb1) overlaps instruction at (ram,0x000164b0cfb0)
    */
/* WARNING: Removing unreachable block (ram,0x000165cb020f) */
/* WARNING: Removing unreachable block (ram,0x000165cb02a1) */
/* WARNING: Removing unreachable block (ram,0x0001655f3cc3) */
/* WARNING: Removing unreachable block (ram,0x00014e015f76) */
/* WARNING: Removing unreachable block (ram,0x00014e015f7c) */
/* WARNING: Removing unreachable block (ram,0x00014e015f81) */
/* WARNING: Removing unreachable block (ram,0x000165cb02a6) */
/* WARNING: Removing unreachable block (ram,0x000165cb02ac) */
/* WARNING: Removing unreachable block (ram,0x000164b0ce51) */
/* WARNING: Removing unreachable block (ram,0x000164b0cf73) */
/* WARNING: Removing unreachable block (ram,0x000164b0cf7e) */
/* WARNING: Removing unreachable block (ram,0x000164b0cf84) */
/* WARNING: Removing unreachable block (ram,0x000164b0cfb0) */
/* WARNING: Removing unreachable block (ram,0x000164b0cfb1) */
/* WARNING: Removing unreachable block (ram,0x000164b0cfe0) */
/* WARNING: Removing unreachable block (ram,0x000164b0cfdf) */
/* WARNING: Removing unreachable block (ram,0x000164b0cfe7) */
/* WARNING: Removing unreachable block (ram,0x00014e015ee9) */
/* WARNING: Removing unreachable block (ram,0x00014e015f71) */
/* WARNING: Removing unreachable block (ram,0x000165cb032d) */
/* WARNING: Removing unreachable block (ram,0x000165cb0333) */
/* WARNING: Removing unreachable block (ram,0x000165cb0338) */
/* WARNING: Removing unreachable block (ram,0x00014e16634e) */
/* WARNING: Removing unreachable block (ram,0x00014e166354) */
/* WARNING: Removing unreachable block (ram,0x00014e16635f) */
/* WARNING: Removing unreachable block (ram,0x000165cb0204) */
/* WARNING: Removing unreachable block (ram,0x00014d80582a) */

undefined8
FUN_14d8057a8(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ushort uVar3;
  ulonglong in_RAX;
  undefined8 uVar4;
  ulonglong uVar5;
  short *psVar6;
  undefined8 in_R11;
  short sVar7;
  longlong unaff_R13;
  ulonglong uVar8;
  ulonglong unaff_R15;
  longlong lVar9;
  bool bVar10;
  byte in_AF;
  bool bVar11;
  byte in_TF;
  bool bVar12;
  byte in_IF;
  bool bVar13;
  bool bVar14;
  byte in_NT;
  bool bVar15;
  byte in_AC;
  bool bVar16;
  byte in_ID;
  ulonglong uVar17;
  ulonglong unaff_retaddr;
  undefined8 in_stack_00000008;
  ulonglong in_stack_00000010;
  ushort local_res20;
  ulonglong uStack_8;
  
  uVar5 = *(ulonglong *)(unaff_R13 + (0x2431899b - (~unaff_retaddr + 2)));
  uVar8 = ~(*(ulonglong *)(unaff_R13 + -0xa0) & unaff_R15) &
          (*(ulonglong *)(unaff_R13 + -0xa0) | unaff_R15);
  if ((longlong)uVar8 < 0) {
    uVar4 = FUN_165cb016a();
    return uVar4;
  }
  local_res20 = local_res20 ^ (ushort)unaff_R15;
  lVar9 = (~(param_5 | unaff_R15) | ~(param_5 & unaff_R15)) + (param_5 | unaff_R15);
  param_5 = lVar9 + 1;
  sVar7 = ~-(local_res20 | 0xfeff) + 2;
  bVar10 = (ushort)-sVar7 < 0x100;
  if ((!bVar10) || (bVar10 || sVar7 == -0x100)) {
    *(ulonglong *)(lVar9 + -7) = uVar8;
    *(ulonglong *)(lVar9 + -0xf) = *(ulonglong *)(lVar9 + -7);
    *(undefined8 *)(lVar9 + -0x17) = in_R11;
    *(undefined8 *)(lVar9 + -0x1f) = param_3;
    plVar2 = (longlong *)(lVar9 + -0x27);
    *(int *)plVar2 = -0x28190c28;
    *(int *)plVar2 = *(int *)plVar2 + 0x2a2c5903;
    *(undefined4 *)(lVar9 + -0x23) = 0x9b7e5e91;
    *(int *)(lVar9 + -0x23) = *(int *)(lVar9 + -0x23) + 0x6481a16f;
    uVar4 = *(undefined8 *)(lVar9 + -0x1f);
    *(undefined1 **)(lVar9 + -0x1f) = &LAB_14df5a726;
    *(undefined8 *)(lVar9 + 1 + *plVar2 + -0x2134ce3) = *(undefined8 *)(lVar9 + -0x1f);
    *(undefined8 *)(lVar9 + -0x17) = in_stack_00000008;
    *(undefined8 *)(lVar9 + -0x1f) = in_stack_00000008;
    *(undefined1 **)(lVar9 + -0x17) = &LAB_1626ee522;
    uVar4 = FUN_14df5a700(param_1,param_2,uVar4,param_4);
    return uVar4;
  }
  *(undefined4 *)(&stack0x5f519d71 + ~((~unaff_R15 | uVar5) & (~uVar5 | unaff_R15))) = 0;
  psVar6 = (short *)(~param_2 & 0x3841466f);
  uVar8 = param_2 & 0xffffffffc7beb990 | (ulonglong)psVar6;
  uVar5 = in_stack_00000010 - uVar8;
  puVar1 = (ulonglong *)(&stack0x00000010 + uVar5);
  *puVar1 = in_RAX;
  *(uint *)puVar1 = 0x7fefdd7;
  *(ulonglong *)(&stack0x00000008 + uVar5) =
       (ulonglong)((in_NT & 1) != 0) * 0x4000 | (ulonglong)SBORROW8(in_stack_00000010,uVar8) * 0x800
       | (ulonglong)((in_IF & 1) != 0) * 0x200 | (ulonglong)((in_TF & 1) != 0) * 0x100 |
       (ulonglong)((longlong)uVar5 < 0) * 0x80 | (ulonglong)(uVar5 == 0) * 0x40 |
       (ulonglong)((in_AF & 1) != 0) * 0x10 | (ulonglong)((POPCOUNT(uVar5 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(in_stack_00000010 < uVar8) | (ulonglong)((in_ID & 1) != 0) * 0x200000 |
       (ulonglong)((in_AC & 1) != 0) * 0x40000;
  uVar17 = *(ulonglong *)(&stack0x00000008 + uVar5);
  *(ulonglong *)(&stack0x00000008 + uVar5) =
       (ulonglong)((uVar17 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar17 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar17 & 0x400) != 0) * 0x400 | (ulonglong)((uVar17 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar17 & 0x100) != 0) * 0x100 | (ulonglong)((uVar17 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar17 & 0x40) != 0) * 0x40 | (ulonglong)((uVar17 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar17 & 4) != 0) * 4 | (ulonglong)((uVar17 & 1) != 0) |
       (ulonglong)((uVar17 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar17 & 0x40000) != 0) * 0x40000;
  if ((*(uint *)(&stack0x00000008 + uVar5) >> 7 & 1) != 0) {
    uVar4 = FUN_14d7f828a();
    return uVar4;
  }
  uVar17 = *(ulonglong *)(&stack0x00000008 + uVar5);
  if ((uVar17 & 0x80) != 0) {
    *puVar1 = param_1;
    *(ulonglong *)(&stack0x00000008 + uVar5) = CONCAT62((int6)(param_2 >> 0x10),0xfeff);
    *puVar1 = *puVar1;
    *puVar1 = *(ulonglong *)(&stack0x00000008 + uVar5);
    uVar8 = *puVar1;
    *puVar1 = in_RAX;
    *(short **)(&stack0x00000008 + uVar5) = psVar6;
    *(uint *)(&stack0x00000000 + uVar5) = 0x3b16016c;
    *(uint *)puVar1 = *(uint *)(&stack0x00000000 + uVar5);
    *(ulonglong *)(&stack0x00000008 + uVar5) = uVar8;
    *(ulonglong *)(&stack0x00000000 + uVar5) = in_RAX;
    *(ulonglong *)((longlong)&uStack_8 + uVar5) = uVar5;
    uVar8 = *puVar1;
    *(uint *)puVar1 = (uint)*puVar1 | 0xda077518;
    uVar17 = *puVar1;
    *(uint *)puVar1 = 0;
    *(uint *)puVar1 = (uint)*puVar1 - ~(0xffffffff - ((uint)uVar8 & 0xda077518) & (uint)uVar17);
    *(uint *)puVar1 = -(uint)*puVar1;
    *(undefined1 **)(&stack0x00000008 + uVar5) = &LAB_16638dede;
    return *(undefined8 *)(&stack0x00000000 + uVar5);
  }
  *(undefined4 *)(&stack0x00000014 + uVar5) = 0;
  *(ulonglong *)(&stack0x00000008 + uVar5) =
       (ulonglong)((uVar17 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar17 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar17 & 0x400) != 0) * 0x400 | (ulonglong)((uVar17 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar17 & 0x100) != 0) * 0x100 | (ulonglong)((uVar17 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar17 & 0x10) != 0) * 0x10 | (ulonglong)((uVar17 & 4) != 0) * 4 |
       (ulonglong)((uVar17 & 1) != 0) | (ulonglong)((uVar17 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar17 & 0x40000) != 0) * 0x40000;
  uVar17 = *(ulonglong *)(&stack0x00000008 + uVar5);
  bVar14 = (uVar17 & 0x4000) != 0;
  bVar13 = (uVar17 & 0x400) != 0;
  bVar12 = (uVar17 & 0x200) != 0;
  bVar11 = (uVar17 & 0x100) != 0;
  bVar10 = (uVar17 & 0x10) != 0;
  bVar16 = (uVar17 & 0x200000) != 0;
  bVar15 = (uVar17 & 0x40000) != 0;
  *puVar1 = *(ulonglong *)(*(longlong *)((longlong)ProcessEnvironmentBlock + 0x18) + 0x20);
  *puVar1 = *(ulonglong *)*puVar1;
  *puVar1 = (ulonglong)bVar14 * 0x4000 | (ulonglong)((uVar17 & 0x800) != 0) * 0x800 |
            (ulonglong)bVar13 * 0x400 | (ulonglong)bVar12 * 0x200 | (ulonglong)bVar11 * 0x100 |
            (ulonglong)((uVar17 & 0x80) != 0) * 0x80 | (ulonglong)((uVar17 & 0x40) != 0) * 0x40 |
            (ulonglong)bVar10 * 0x10 | (ulonglong)((uVar17 & 4) != 0) * 4 |
            (ulonglong)bVar16 * 0x200000 | (ulonglong)bVar15 * 0x40000;
  *(ulonglong *)(&stack0x00000008 + uVar5) = in_RAX;
  *(undefined4 *)(&stack0x00000008 + uVar5) = 0x13933c33;
  *(undefined4 *)(&stack0x00000000 + uVar5) = 0x57161f96;
  *(undefined4 *)(&stack0x00000004 + uVar5) = 0;
  uVar17 = *(ulonglong *)(&stack0x00000000 + uVar5);
  *(undefined4 *)
   (&stack0x00000008 + ~(~(uVar17 & 0xffffffffa8e9e06d) & (uVar17 | 0xffffffffa8e9e06d)) + uVar5) =
       0;
  uVar17 = *(ulonglong *)(&stack0x00000008 + uVar5) ^ 0x13933c32;
  *(ulonglong *)(&stack0x00000008 + uVar5) =
       (ulonglong)bVar14 * 0x4000 | (ulonglong)bVar13 * 0x400 | (ulonglong)bVar12 * 0x200 |
       (ulonglong)bVar11 * 0x100 | (ulonglong)((longlong)uVar17 < 0) * 0x80 |
       (ulonglong)(uVar17 == 0) * 0x40 | (ulonglong)bVar10 * 0x10 |
       (ulonglong)((POPCOUNT(uVar17 & 0xff) & 1U) == 0) * 4 | (ulonglong)bVar16 * 0x200000 |
       (ulonglong)bVar15 * 0x40000;
  *(undefined8 *)(&stack0x00000008 + uVar5) = 0x14d7f8324;
  uVar3 = FUN_157189bd1();
  *(ulonglong *)(&stack0x00000018 + uVar5) = *puVar1;
  *puVar1 = uVar8;
  *psVar6 = ((short)uVar17 - ~uVar3) + -0x100;
  LOCK();
  DAT_14d7c12f6 = (undefined1)*(undefined8 *)((longlong)&param_5 + uVar5);
  UNLOCK();
  *(undefined8 *)(*(longlong *)(&stack0x00000038 + uVar5) + -8) = 0x25867fe;
  uVar4 = FUN_14d85d504();
  return uVar4;
}



// FUNCTION 14d8058ac FUN_14d8058ac body=153 status=ok
// SIG undefined FUN_14d8058ac(void)

/* WARNING: Removing unreachable block (ram,0x00014d8059db) */
/* WARNING: Removing unreachable block (ram,0x00014d8059e1) */
/* WARNING: Removing unreachable block (ram,0x0001621608b9) */

void FUN_14d8058ac(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_R12;
  ulonglong unaff_R13;
  undefined8 uStackX_8;
  ulonglong auStackX_18 [2];
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x58) + in_RAX +
          (*(ulonglong *)(unaff_R12 + -0x58) & in_RAX) * -2;
  FUN_166c91d57();
  *(undefined8 *)
   ((longlong)auStackX_18 + ~(~(unaff_R13 & 0xffffffffebb2d775) & (unaff_R13 | 0xffffffffebb2d775)))
       = uStackX_8;
  auStackX_18[1] = ~(auStackX_18[1] & uVar1) & (~(auStackX_18[1] & uVar1) + uVar1) - ~auStackX_18[1]
  ;
  FUN_1621608b9();
  return;
}



// FUNCTION 14d805946 FUN_14d805946 body=211 status=ok
// SIG undefined FUN_14d805946(void)

/* WARNING: Removing unreachable block (ram,0x00014d8059db) */
/* WARNING: Removing unreachable block (ram,0x00014d8059e1) */
/* WARNING: Removing unreachable block (ram,0x0001621608b9) */

void FUN_14d805946(void)

{
  ulonglong unaff_R13;
  undefined8 uStackX_8;
  
  *(undefined8 *)
   (&stack0x00000018 + ~(~(unaff_R13 & 0xffffffffebb2d775) & (unaff_R13 | 0xffffffffebb2d775))) =
       uStackX_8;
  FUN_1621608b9();
  return;
}



// FUNCTION 14d805b38 FUN_14d805b38 body=533 status=ok
// SIG undefined FUN_14d805b38(void)

/* WARNING: Removing unreachable block (ram,0x0001623bd821) */
/* WARNING: Removing unreachable block (ram,0x00014d805c4b) */
/* WARNING: Removing unreachable block (ram,0x00014d805cc8) */
/* WARNING: Removing unreachable block (ram,0x000166a33890) */
/* WARNING: Removing unreachable block (ram,0x000166a33923) */
/* WARNING: Removing unreachable block (ram,0x000166a33928) */
/* WARNING: Removing unreachable block (ram,0x000166a3392e) */
/* WARNING: Removing unreachable block (ram,0x000166a339b3) */
/* WARNING: Removing unreachable block (ram,0x000166a339b9) */
/* WARNING: Removing unreachable block (ram,0x0001662f32f4) */
/* WARNING: Removing unreachable block (ram,0x0001662f336b) */
/* WARNING: Removing unreachable block (ram,0x0001662f3371) */
/* WARNING: Removing unreachable block (ram,0x0001623bd7a0) */
/* WARNING: Removing unreachable block (ram,0x000156422a04) */
/* WARNING: Removing unreachable block (ram,0x0001623bd804) */
/* WARNING: Removing unreachable block (ram,0x0001623bd819) */
/* WARNING: Removing unreachable block (ram,0x000165fc31be) */
/* WARNING: Removing unreachable block (ram,0x00016159311f) */
/* WARNING: Removing unreachable block (ram,0x000165fc3245) */
/* WARNING: Removing unreachable block (ram,0x000165fc324b) */
/* WARNING: Removing unreachable block (ram,0x000165fc3250) */
/* WARNING: Removing unreachable block (ram,0x0001662f337c) */
/* WARNING: Removing unreachable block (ram,0x00014d805bd3) */
/* WARNING: Removing unreachable block (ram,0x00014d805be6) */
/* WARNING: Removing unreachable block (ram,0x00014d805c45) */
/* WARNING: Removing unreachable block (ram,0x000166850f48) */
/* WARNING: Removing unreachable block (ram,0x00014d805cd4) */
/* WARNING: Removing unreachable block (ram,0x00014d805d5c) */
/* WARNING: Removing unreachable block (ram,0x00014d805d62) */
/* WARNING: Removing unreachable block (ram,0x0001616f4477) */

ulonglong FUN_14d805b38(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  if (unaff_RDI == 0x7d46) {
    return CONCAT71((int7)((~param_1 | uRam0000000000007ce6) + param_1 + 1 >> 8),0x5e) ^ 0xbb;
  }
  uVar1 = FUN_160bed4ab();
  return uVar1;
}



// FUNCTION 14d805d68 FUN_14d805d68 body=119 status=ok
// SIG undefined FUN_14d805d68(void)

undefined8 FUN_14d805d68(void)

{
  undefined8 local_res8;
  
  return local_res8;
}



// FUNCTION 14d8061aa FUN_14d8061aa body=186 status=ok
// SIG undefined FUN_14d8061aa(void)

undefined8 FUN_14d8061aa(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d8062e2 FUN_14d8062e2 body=37 status=ok
// SIG undefined FUN_14d8062e2(void)

void FUN_14d8062e2(void)

{
  short in_R10W;
  short *unaff_R13;
  
  *unaff_R13 = in_R10W + 1;
  return;
}



// FUNCTION 14d806400 FUN_14d806400 body=526 status=ok
// SIG undefined FUN_14d806400(void)

/* WARNING: Removing unreachable block (ram,0x00014d806479) */

void FUN_14d806400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong unaff_RBP;
  longlong lVar1;
  undefined8 in_R10;
  undefined8 unaff_R15;
  ulonglong uVar2;
  ulonglong local_res20;
  
  uVar2 = local_res20 ^ unaff_RBP;
  lVar1 = -(param_5 & unaff_RBP) -
          (((param_5 | unaff_RBP) - (~(param_5 & unaff_RBP) | param_5 | unaff_RBP) ^
           0xffffffffffffffff) + 2);
  *(undefined8 *)(lVar1 + -8) = in_R10;
  *(undefined8 *)(lVar1 + -0x10) = in_R10;
  *(ulonglong *)(lVar1 + -0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x80) != 0) * 0x80 | (ulonglong)((uVar2 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar2 & 0x10) != 0) * 0x10 | (ulonglong)((uVar2 & 4) != 0) * 4 |
       (ulonglong)((uVar2 & 1) != 0) | (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  uVar2 = *(ulonglong *)(lVar1 + -0x18);
  *(ulonglong *)(lVar1 + -0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(lVar1 + -0x20) = unaff_R15;
  uVar2 = *(ulonglong *)(lVar1 + -0x18);
  *(undefined8 *)(lVar1 + -0x18) = param_2;
  *(ulonglong *)(lVar1 + -0x20) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(lVar1 + -8) = 0x1045b3a;
  FUN_15b3d5987(param_1,*(undefined8 *)(lVar1 + -0x18));
  return;
}



// FUNCTION 14d8065a6 thunk_FUN_14d8065ac body=5 status=ok
// SIG undefined thunk_FUN_14d8065ac(void)

void thunk_FUN_14d8065ac(undefined8 param_1)

{
  FUN_1576513c4(param_1);
  return;
}



// FUNCTION 14d8065ac FUN_14d8065ac body=103 status=ok
// SIG undefined FUN_14d8065ac(void)

void FUN_14d8065ac(undefined8 param_1)

{
  FUN_1576513c4(param_1);
  return;
}



// FUNCTION 14d806614 FUN_14d806614 body=29 status=ok
// SIG undefined FUN_14d806614(void)

void FUN_14d806614(void)

{
  return;
}



// FUNCTION 14d8068f5 FUN_14d8068f5 body=146 status=ok
// SIG undefined FUN_14d8068f5(void)

void FUN_14d8068f5(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x10) = unaff_RSI;
  *(undefined8 *)(local_res18 + -0x18) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RBX;
  uVar1 = *(undefined8 *)(local_res18 + -0x18);
  uVar2 = *(undefined8 *)(local_res18 + -0x10);
  *(undefined8 *)(local_res18 + -0x10) = in_R11;
  *(undefined8 *)(local_res18 + -0x18) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = *(undefined8 *)(local_res18 + -0x20);
  *(undefined8 *)(local_res18 + -0x20) = uVar1;
  *(undefined8 *)(local_res18 + -0x28) = uVar2;
  *(undefined8 *)(local_res18 + -0x30) = uVar2;
  *(code **)(local_res18 + -0x28) = FUN_14d806990;
  (*(code *)&LAB_1658564cd)();
  return;
}



// FUNCTION 14d806990 FUN_14d806990 body=286 status=ok
// SIG undefined FUN_14d806990(void)

void FUN_14d806990(void)

{
  code *pcVar1;
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  
  FUN_1666742db();
  pcVar1 = FUN_15725069f;
  FUN_15725069f();
  FUN_14d7be95e(uStackX_18,uStackX_20,pcVar1);
  return;
}



// FUNCTION 14d806ab2 FUN_14d806ab2 body=73 status=ok
// SIG undefined FUN_14d806ab2(void)

void FUN_14d806ab2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  undefined8 local_res10;
  
  FUN_14d7be95e(local_res8,local_res10,param_3);
  return;
}



// FUNCTION 14d806b40 FUN_14d806b40 body=578 status=ok
// SIG undefined FUN_14d806b40(void)

/* WARNING: Removing unreachable block (ram,0x00014d99c719) */
/* WARNING: Removing unreachable block (ram,0x000162a36c10) */
/* WARNING: Removing unreachable block (ram,0x00014d806bda) */
/* WARNING: Removing unreachable block (ram,0x00014d806cf0) */
/* WARNING: Removing unreachable block (ram,0x00014d806cf5) */
/* WARNING: Removing unreachable block (ram,0x000162a36b6c) */
/* WARNING: Removing unreachable block (ram,0x000162a36c05) */
/* WARNING: Removing unreachable block (ram,0x000162a36c0a) */
/* WARNING: Removing unreachable block (ram,0x000166cf3406) */
/* WARNING: Removing unreachable block (ram,0x00014d806cfb) */

void FUN_14d806b40(void)

{
  ulonglong in_R9;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  thunk_FUN_15694ecf6(*(undefined8 *)(unaff_R13 + -0x78),thunk_FUN_15694ecf6,
                      *(ulonglong *)(unaff_R13 + -0x88) + unaff_R15 +
                      (*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) * -2,
                      ~((unaff_R15 ^ 0xffffffffffffffff | in_R9) & (~in_R9 | unaff_R15)));
  return;
}



// FUNCTION 14d806f8c FUN_14d806f8c body=140 status=ok
// SIG undefined FUN_14d806f8c(void)

/* WARNING: Removing unreachable block (ram,0x00014d80700f) */
/* WARNING: Removing unreachable block (ram,0x00014d807015) */
/* WARNING: Removing unreachable block (ram,0x00014def9af4) */
/* WARNING: Removing unreachable block (ram,0x00014def9b42) */

void FUN_14d806f8c(void)

{
  FUN_14def9af4();
  return;
}



// FUNCTION 14d80701b FUN_14d80701b body=193 status=ok
// SIG undefined FUN_14d80701b(void)

void FUN_14d80701b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong unaff_RBP;
  longlong lVar2;
  undefined8 unaff_RDI;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  longlong unaff_R15;
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
  undefined8 local_res10;
  ushort local_res18;
  uint6 uStackX_1a;
  ulonglong local_res20;
  
  lVar2 = unaff_RBP + ((0xffffffffffffffffU - unaff_R15 | local_res20) + unaff_R15 + 1) * -2;
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
  *(undefined8 *)(lVar2 + -8) = unaff_RDI;
  *(undefined8 *)(lVar2 + -0x10) = local_res10;
  *(undefined8 *)(lVar2 + -0x18) = 0x14d80709e;
  FUN_160c8031a(param_1,param_2,param_3);
  *(undefined4 *)(lVar2 + -4) = 0;
  lVar1 = *(longlong *)(lVar2 + -8);
  *(ulonglong *)(lVar2 + -8) =
       (ulonglong)(bVar11 & 1) * 0x4000 | (ulonglong)(bVar10 & 1) * 0x800 |
       (ulonglong)((local_res18 & 0x400) != 0) * 0x400 | (ulonglong)(bVar9 & 1) * 0x200 |
       (ulonglong)(bVar8 & 1) * 0x100 | (ulonglong)(bVar7 & 1) * 0x80 |
       (ulonglong)(bVar6 & 1) * 0x40 | (ulonglong)(bVar5 & 1) * 0x10 | (ulonglong)(bVar4 & 1) * 4 |
       (ulonglong)(bVar3 & 1) | (ulonglong)(bVar15 & 1) * 0x200000 |
       (ulonglong)(bVar14 & 1) * 0x100000 | (ulonglong)(bVar13 & 1) * 0x80000 |
       (ulonglong)(bVar12 & 1) * 0x40000;
  *(undefined8 *)(lVar2 + -8) = unaff_R14;
  *(longlong *)(lVar2 + 8) = lVar1 + -0xe3e1ab3;
  *(undefined8 *)(&DAT_ffffffffffffd741 + lVar2) = unaff_R13;
  *(undefined8 *)(lVar2 + -0x28c7) = unaff_R13;
  *(undefined **)(&DAT_ffffffffffffd741 + lVar2) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14d80712c FUN_14d80712c body=126 status=ok
// SIG undefined FUN_14d80712c(void)

void FUN_14d80712c(void)

{
  return;
}



// FUNCTION 14d8071b3 FUN_14d8071b3 body=46 status=ok
// SIG undefined FUN_14d8071b3(void)

void FUN_14d8071b3(void)

{
  return;
}



// FUNCTION 14d8071e1 FUN_14d8071e1 body=135 status=ok
// SIG undefined FUN_14d8071e1(void)

undefined8 FUN_14d8071e1(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong unaff_RSI;
  
  if (unaff_RSI == 0x132198) {
    return in_RAX;
  }
  uVar1 = FUN_15733763e(param_1,param_2,FUN_15733763e);
  return uVar1;
}



// FUNCTION 14d807269 FUN_14d807269 body=155 status=ok
// SIG undefined FUN_14d807269(void)

void FUN_14d807269(void)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  ulonglong in_stack_00000008;
  
  uVar1 = -~*(ulonglong *)(unaff_RDI + -0x28) - 1;
  FUN_164bf9ff8(in_stack_00000008,
                -((~in_stack_00000008 | uVar1) & ~(uVar1 & (in_stack_00000008 ^ 0xffffffffffffffff))
                 ));
  return;
}



// FUNCTION 14d807305 FUN_14d807305 body=336 status=ok
// SIG undefined FUN_14d807305(void)

/* WARNING: Removing unreachable block (ram,0x00014d807397) */
/* WARNING: Removing unreachable block (ram,0x00014d8073a2) */
/* WARNING: Removing unreachable block (ram,0x00014d80739d) */

void FUN_14d807305(void)

{
  longlong unaff_R15;
  longlong local_res10;
  longlong lStack0000000000000030;
  
  lStack0000000000000030 = local_res10 - *(longlong *)(&stack0xfffffffffa926605 + unaff_R15);
  FUN_160df486f();
  return;
}



// FUNCTION 14d8076df thunk_FUN_165e93f27 body=26 status=ok
// SIG undefined thunk_FUN_165e93f27(void)

void thunk_FUN_165e93f27(void)

{
  FUN_165e93f27();
  return;
}



// FUNCTION 14d807777 FUN_14d807777 body=160 status=ok
// SIG undefined FUN_14d807777(void)

void FUN_14d807777(void)

{
  FUN_161d7f8d2(0xfffffffffffffff8);
  return;
}



// FUNCTION 14d80781a FUN_14d80781a body=532 status=ok
// SIG undefined FUN_14d80781a(void)

/* WARNING: Removing unreachable block (ram,0x00014d8078e6) */
/* WARNING: Removing unreachable block (ram,0x00014d807953) */
/* WARNING: Removing unreachable block (ram,0x00014d807959) */
/* WARNING: Removing unreachable block (ram,0x00014d7a66ac) */
/* WARNING: Removing unreachable block (ram,0x000157338523) */
/* WARNING: Removing unreachable block (ram,0x000157338529) */
/* WARNING: Removing unreachable block (ram,0x00016610cce9) */
/* WARNING: Removing unreachable block (ram,0x00014d8078aa) */
/* WARNING: Removing unreachable block (ram,0x000161583806) */
/* WARNING: Removing unreachable block (ram,0x00016610ccde) */

void FUN_14d80781a(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  ulonglong param_5,ulonglong param_6)

{
  code *pcVar1;
  uint unaff_EBX;
  undefined1 unaff_SIL;
  ulonglong uVar2;
  ulonglong in_R11;
  undefined8 *puVar3;
  ulonglong *unaff_R12;
  int unaff_R13D;
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
  int in_stack_00000008;
  undefined8 in_stack_00000010;
  
  if ((unaff_EBX - ((in_stack_00000008 + 0x348bd5c8) - param_4)) + (param_4 & unaff_EBX) * -2 +
      unaff_R13D != 0) {
    FUN_15733842a();
    return;
  }
  FUN_16192687f(param_1,unaff_SIL);
  *unaff_R12 = ~(in_R11 & *unaff_R12);
  uVar2 = param_5 + unaff_R15 + (param_5 & unaff_R15) * -2;
  puVar3 = (undefined8 *)~((~unaff_R15 | param_6) & (~param_6 | unaff_R15));
  bVar12 = (uVar2 & 0x4000) != 0;
  bVar11 = (uVar2 & 0x800) != 0;
  bVar10 = (uVar2 & 0x200) != 0;
  bVar9 = 0;
  bVar8 = (uVar2 & 0x80) != 0;
  bVar7 = (uVar2 & 0x40) != 0;
  bVar6 = (uVar2 & 0x10) != 0;
  bVar5 = (uVar2 & 4) != 0;
  bVar4 = (uVar2 & 1) != 0;
  bVar16 = (uVar2 & 0x200000) != 0;
  bVar13 = (uVar2 & 0x40000) != 0;
  bVar15 = 0;
  bVar14 = 0;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)();
  *puVar3 = unaff_R14;
  puVar3[-1] = unaff_R14;
  puVar3[-2] = (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)(bVar11 & 1) * 0x800 |
               (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)(bVar10 & 1) * 0x200 |
               (ulonglong)(bVar9 & 1) * 0x100 | (ulonglong)(bVar8 & 1) * 0x80 |
               (ulonglong)(bVar7 & 1) * 0x40 | (ulonglong)(bVar6 & 1) * 0x10 |
               (ulonglong)(bVar5 & 1) * 4 | (ulonglong)(bVar4 & 1) |
               (ulonglong)(bVar16 & 1) * 0x200000 | (ulonglong)(bVar15 & 1) * 0x100000 |
               (ulonglong)(bVar14 & 1) * 0x80000 | (ulonglong)(bVar13 & 1) * 0x40000;
  uVar2 = puVar3[-2];
  puVar3[-2] = (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar2 & 0x800) != 0) * 0x800 | (ulonglong)((uVar2 & 0x400) != 0) * 0x400
               | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
               (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
               (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
               (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  uVar2 = puVar3[-2];
  puVar3[-2] = 0;
  puVar3[-3] = in_stack_00000010;
  puVar3[-4] = (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar2 & 0x800) != 0) * 0x800 | (ulonglong)((uVar2 & 0x400) != 0) * 0x400
               | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
               (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
               (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
               (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *puVar3 = 0x4849194;
  FUN_161b12a7a();
  return;
}



// FUNCTION 14d807959 FUN_14d807959 body=74 status=ok
// SIG undefined FUN_14d807959(void)

void FUN_14d807959(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d807a20 FUN_14d807a20 body=159 status=ok
// SIG undefined FUN_14d807a20(void)

void FUN_14d807a20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_16120ac84(param_1,FUN_16120ac84,param_3);
  (*(code *)&LAB_16273ad5a)();
  return;
}



// FUNCTION 14d807ac1 FUN_14d807ac1 body=161 status=ok
// SIG undefined FUN_14d807ac1(void)

void FUN_14d807ac1(undefined8 param_1)

{
  (*(code *)&LAB_16273ad5a)(param_1,&LAB_16273ad5a);
  return;
}



// FUNCTION 14d807b63 FUN_14d807b63 body=304 status=ok
// SIG undefined FUN_14d807b63(void)

/* WARNING: Removing unreachable block (ram,0x00014d807c1f) */
/* WARNING: Removing unreachable block (ram,0x00014d807c93) */

ulonglong FUN_14d807b63(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  
  lVar1 = *(longlong *)(unaff_RDI + -0xa0);
  FUN_166d30dc5();
  if (*(longlong *)(lVar1 + -0x90) != 0) {
    return ~((~unaff_RSI & ~param_1 | unaff_RSI) & (0xffffffffffffffff - unaff_RSI | param_1));
  }
  uVar2 = FUN_14d7f7dc1();
  return uVar2;
}



// FUNCTION 14d807f32 FUN_14d807f32 body=247 status=ok
// SIG undefined FUN_14d807f32(void)

/* WARNING: Removing unreachable block (ram,0x00014d807fac) */
/* WARNING: Removing unreachable block (ram,0x00014d807fd8) */

undefined8 FUN_14d807f32(void)

{
  undefined8 *puVar1;
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  longlong local_res20;
  
  puVar1 = (undefined8 *)(local_res20 + -8);
  *puVar1 = unaff_RBP;
  *(undefined8 *)(local_res20 + -0x10) = *puVar1;
  *puVar1 = &LAB_1571a42ac;
  *(undefined8 *)(local_res20 + -0x10) = in_RAX;
  *(undefined8 *)(local_res20 + -0x18) = in_RAX;
  *(code **)(local_res20 + -0x10) = thunk_FUN_161178fac;
  return *(undefined8 *)(local_res20 + -0x18);
}



// FUNCTION 14d807fd8 FUN_14d807fd8 body=38 status=ok
// SIG undefined FUN_14d807fd8(void)

undefined8 FUN_14d807fd8(void)

{
  undefined8 uStackX_8;
  
  return uStackX_8;
}



// FUNCTION 14d8081a4 FUN_14d8081a4 body=129 status=ok
// SIG undefined FUN_14d8081a4(void)

ulonglong FUN_14d8081a4(ulonglong param_1)

{
  ulonglong unaff_RBX;
  ulonglong unaff_RBP;
  
  return ~(unaff_RBX & param_1) & (unaff_RBP | param_1);
}



// FUNCTION 14d808227 thunk_FUN_165e93f27 body=5 status=ok
// SIG undefined thunk_FUN_165e93f27(void)

void thunk_FUN_165e93f27(void)

{
  FUN_165e93f27();
  return;
}



// FUNCTION 14d808231 thunk_FUN_165e93f27 body=24 status=ok
// SIG undefined thunk_FUN_165e93f27(void)

void thunk_FUN_165e93f27(void)

{
  FUN_165e93f27();
  return;
}



// FUNCTION 14d80824a FUN_14d80824a body=107 status=ok
// SIG undefined FUN_14d80824a(void)

undefined8 FUN_14d80824a(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  if (param_4 != 0x122a6f) {
    return in_RAX;
  }
  uVar1 = FUN_165e93f27(param_1,param_2,param_3,0x14d7abaaf);
  return uVar1;
}



// FUNCTION 14d8082b7 FUN_14d8082b7 body=561 status=ok
// SIG undefined FUN_14d8082b7(void)

/* WARNING: Removing unreachable block (ram,0x000156acf6ef) */
/* WARNING: Removing unreachable block (ram,0x000156acf79f) */
/* WARNING: Removing unreachable block (ram,0x000156acf7a5) */
/* WARNING: Removing unreachable block (ram,0x000156acf7aa) */
/* WARNING: Removing unreachable block (ram,0x0001616ba735) */
/* WARNING: Removing unreachable block (ram,0x0001616ba73b) */
/* WARNING: Removing unreachable block (ram,0x0001616ba7b5) */
/* WARNING: Removing unreachable block (ram,0x0001616ba7ba) */
/* WARNING: Removing unreachable block (ram,0x0001616ba7c0) */
/* WARNING: Removing unreachable block (ram,0x000156acf794) */
/* WARNING: Removing unreachable block (ram,0x00014dac0d47) */
/* WARNING: Removing unreachable block (ram,0x00014d80833e) */

undefined8 FUN_14d8082b7(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 in_RAX;
  ulonglong uVar4;
  longlong unaff_RBX;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 local_res8;
  ulonglong local_res10;
  ulonglong local_res20;
  
  uVar4 = ~((~unaff_R15 | local_res10) & (local_res10 ^ 0xffffffffffffffff | unaff_R15));
  uVar2 = ~(local_res20 & unaff_R15) & (local_res20 | unaff_R15);
  *(undefined8 *)(uVar2 - 8) = unaff_R12;
  *(longlong *)(uVar2 - 0x10) = unaff_RBX;
  plVar1 = (longlong *)(uVar2 - 0x18);
  *plVar1 = 0;
  *plVar1 = *plVar1 + unaff_RBX;
  *(undefined8 *)(uVar2 - 0x10) = *(undefined8 *)(uVar2 - 8);
  lVar3 = *plVar1;
  *(undefined8 *)(uVar2 - 0x18) = local_res8;
  *(longlong *)(uVar2 - 0x20) = lVar3;
  *(undefined1 **)(uVar2 - 8) = &LAB_157864323;
  *(ulonglong *)(uVar2 - 0x10) = uVar4;
  *(ulonglong *)(uVar2 - 0x18) = uVar4;
  *(undefined8 *)(uVar2 - 0x20) = unaff_R14;
  *(code **)(uVar2 - 0x10) = thunk_FUN_15b642ca5;
  return in_RAX;
}



// FUNCTION 14d8085e3 FUN_14d8085e3 body=108 status=ok
// SIG undefined FUN_14d8085e3(void)

void FUN_14d8085e3(void)

{
  return;
}



// FUNCTION 14d808738 FUN_14d808738 body=114 status=ok
// SIG undefined FUN_14d808738(void)

undefined8 FUN_14d808738(undefined8 param_1)

{
  return param_1;
}



// FUNCTION 14d808846 FUN_14d808846 body=283 status=ok
// SIG undefined FUN_14d808846(void)

/* WARNING: Removing unreachable block (ram,0x00014d8089f7) */
/* WARNING: Removing unreachable block (ram,0x00014d8089fd) */
/* WARNING: Removing unreachable block (ram,0x00014d8088e2) */
/* WARNING: Removing unreachable block (ram,0x00014d8088e8) */
/* WARNING: Removing unreachable block (ram,0x000162d86b4f) */
/* WARNING: Removing unreachable block (ram,0x00015ba09173) */

void FUN_14d808846(void)

{
  FUN_15ba09173();
  return;
}



// FUNCTION 14d808961 FUN_14d808961 body=159 status=ok
// SIG undefined FUN_14d808961(void)

/* WARNING: Removing unreachable block (ram,0x00014d8089f7) */
/* WARNING: Removing unreachable block (ram,0x00014d8089fd) */

void FUN_14d808961(void)

{
  return;
}



// FUNCTION 14d808a03 FUN_14d808a03 body=294 status=ok
// SIG undefined FUN_14d808a03(void)

void FUN_14d808a03(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_RSI;
  
  FUN_161e22fa5();
  FUN_16598e95d(unaff_RSI,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d808b2b FUN_14d808b2b body=323 status=ok
// SIG undefined FUN_14d808b2b(void)

/* WARNING: Removing unreachable block (ram,0x00014d808bd2) */
/* WARNING: Removing unreachable block (ram,0x00014d808bd8) */

void FUN_14d808b2b(void)

{
  return;
}



// FUNCTION 14d808c60 FUN_14d808c60 body=73 status=ok
// SIG undefined FUN_14d808c60(void)

void FUN_14d808c60(void)

{
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_R12;
  *(undefined8 *)(local_res10 + -0x10) = unaff_R14;
  *(undefined8 *)(local_res10 + -0x18) = unaff_R14;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined1 **)(local_res10 + -8) = &LAB_14d808cbd;
  FUN_14d7ac96b();
  return;
}



// FUNCTION 14d808d04 FUN_14d808d04 body=293 status=ok
// SIG undefined FUN_14d808d04(void)

void FUN_14d808d04(undefined8 param_1)

{
  ulonglong unaff_R15;
  bool bVar1;
  undefined8 local_res18;
  
  bVar1 = ((~unaff_R15 | local_res18) &
          ((0xffffffffffffffff - local_res18) + unaff_R15) -
          ~(~(0xffffffffffffffff - local_res18) | ~unaff_R15)) == 0;
  FUN_157405cfa();
  if (bVar1) {
    FUN_166a62797(param_1,0x14d7c1147);
    return;
  }
  return;
}



// FUNCTION 14d809062 FUN_14d809062 body=193 status=ok
// SIG undefined FUN_14d809062(void)

/* WARNING: Instruction at (ram,0x00014d809147) overlaps instruction at (ram,0x00014d809146)
    */
/* WARNING: Removing unreachable block (ram,0x000161cceb15) */
/* WARNING: Removing unreachable block (ram,0x00014d8091c9) */

undefined1 *
FUN_14d809062(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 in_RAX;
  undefined1 *puVar4;
  uint uVar5;
  code *pcVar6;
  uint unaff_EBX;
  longlong unaff_RBP;
  ulonglong unaff_R12;
  longlong in_stack_00000008;
  
  *(undefined4 *)(unaff_RBP + 0x134) = 0;
  *(undefined4 *)(unaff_RBP + 0x134) = *(undefined4 *)(unaff_RBP + 0x134);
  uVar2 = *(uint *)(unaff_RBP + 0x134);
  *(undefined4 *)(unaff_RBP + 0x134) = 0xffffffff;
  uVar5 = ~((uVar2 ^ 0xffffffff) & *(uint *)(unaff_RBP + 0x134));
  *(undefined4 *)(unaff_RBP + 0x134) = 0;
  puVar1 = (uint *)(unaff_RBP + 0x134);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar5;
  if (!CARRY4(uVar2,uVar5)) {
    uVar2 = *(uint *)(unaff_RBP + 0x134);
    *(uint *)(unaff_RBP + 0x134) = *(uint *)(unaff_RBP + 0x134) & unaff_EBX;
    *(uint *)(unaff_RBP + 0x134) = ~*(uint *)(unaff_RBP + 0x134);
    *(uint *)(unaff_RBP + 0x134) = *(uint *)(unaff_RBP + 0x134) & (uVar2 | unaff_EBX);
    pcVar6 = FUN_15ba62819;
    FUN_15ba62819();
    puVar4 = (undefined1 *)
             FUN_165f91c98(param_1,pcVar6 + ((param_3 | unaff_R12) + in_stack_00000008 + 1) * -2,
                           0xffffffffffffff70,FUN_165f91c98);
    return puVar4;
  }
  if (*puVar1 == 0 || CARRY4(uVar2,uVar5)) {
    puVar4 = (undefined1 *)FUN_161ccea72();
    return puVar4;
  }
  if (*puVar1 != 0) {
    *(undefined8 *)(unaff_RBP + -8) = in_RAX;
    *(undefined8 *)(unaff_RBP + -0x10) = in_RAX;
    *(undefined8 *)(unaff_RBP + -0x18) = in_RAX;
    *(undefined **)(unaff_RBP + -8) = &DAT_161024a64;
    *(undefined1 **)(unaff_RBP + -0x10) = &LAB_160ce1fbb;
    return *(undefined1 **)(unaff_RBP + -0x18);
  }
  lVar3 = -~(ulonglong)&stack0x00000008;
  if (~(ulonglong)&stack0x00000008 < 0xffffffffffff3d78) {
    *(undefined4 *)(lVar3 + -0x11) = 0x1bb67d04;
    *(undefined1 **)(lVar3 + -0x19) = &LAB_1664893f9;
    return &DAT_240c8948;
  }
  puVar4 = (undefined1 *)FUN_1664893a0(0xffffffffffff3d78,uVar5,param_3,param_4);
  return puVar4;
}



// FUNCTION 14d809124 FUN_14d809124 body=231 status=ok
// SIG undefined FUN_14d809124(void)

/* WARNING: Instruction at (ram,0x00014d809147) overlaps instruction at (ram,0x00014d809146)
    */
/* WARNING: Removing unreachable block (ram,0x00014d8091c9) */

undefined1 * FUN_14d809124(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 in_RAX;
  undefined1 *puVar2;
  longlong unaff_RBP;
  bool in_ZF;
  
  if (!in_ZF) {
    *(undefined8 *)(unaff_RBP + -8) = in_RAX;
    *(undefined8 *)(unaff_RBP + -0x10) = in_RAX;
    *(undefined8 *)(unaff_RBP + -0x18) = in_RAX;
    *(undefined **)(unaff_RBP + -8) = &DAT_161024a64;
    *(undefined1 **)(unaff_RBP + -0x10) = &LAB_160ce1fbb;
    return *(undefined1 **)(unaff_RBP + -0x18);
  }
  lVar1 = -~(ulonglong)&stack0x00000000;
  if (0xffffffffffff3d77 < ~(ulonglong)&stack0x00000000) {
    puVar2 = (undefined1 *)FUN_1664893a0(0xffffffffffff3d78,param_2);
    return puVar2;
  }
  *(undefined4 *)(lVar1 + -0x11) = 0x1bb67d04;
  *(undefined1 **)(lVar1 + -0x19) = &LAB_1664893f9;
  return &DAT_240c8948;
}



// FUNCTION 14d80925c FUN_14d80925c body=154 status=ok
// SIG undefined FUN_14d80925c(void)

void FUN_14d80925c(ulonglong param_1)

{
  ulonglong uVar1;
  longlong in_R11;
  undefined8 in_stack_00000010;
  
  uVar1 = *(ulonglong *)(in_R11 + 8);
  *(longlong *)(in_R11 + 8) = -*(longlong *)(in_R11 + 8);
  *(longlong *)(in_R11 + 8) = *(longlong *)(in_R11 + 8) + -1;
  *(ulonglong *)(in_R11 + 8) = *(ulonglong *)(in_R11 + 8) | param_1;
  *(ulonglong *)(in_R11 + 8) = ~((~param_1 | uVar1) & *(ulonglong *)(in_R11 + 8));
  FUN_14e06a22f(in_stack_00000010);
  return;
}



// FUNCTION 14d8092f8 FUN_14d8092f8 body=96 status=ok
// SIG undefined FUN_14d8092f8(void)

void FUN_14d8092f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  undefined8 local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_retaddr;
  *(undefined8 *)(local_res10 + -0x10) = unaff_retaddr;
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uStackX_8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_8 & 0x800) != 0) * 0x800 | (ulonglong)((uStackX_8 & 0x400) != 0) * 0x400
       | (ulonglong)((uStackX_8 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_8 & 0x100) != 0) * 0x100 | (ulonglong)((uStackX_8 & 0x80) != 0) * 0x80 |
       (ulonglong)((uStackX_8 & 0x40) != 0) * 0x40 | (ulonglong)((uStackX_8 & 0x10) != 0) * 0x10 |
       (ulonglong)((uStackX_8 & 4) != 0) * 4 | (ulonglong)((uStackX_8 & 1) != 0) |
       (ulonglong)((uStackX_8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_8 & 0x40000) != 0) * 0x40000;
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
  *(undefined8 *)(local_res10 + -0x28) = unaff_RBX;
  *(undefined8 *)(local_res10 + -8) = 0x46d9154;
  uVar1 = *(undefined8 *)(local_res10 + -0x18);
  uVar2 = *(undefined8 *)(local_res10 + -0x10);
  *(undefined8 *)(local_res10 + -0x10) = uVar2;
  *(undefined8 *)(local_res10 + -0x18) = uVar2;
  *(undefined8 *)(local_res10 + -0x10) = 0x156ef2e25;
  FUN_15651eaf9(uVar1);
  return;
}



// FUNCTION 14d8093e7 FUN_14d8093e7 body=129 status=ok
// SIG undefined FUN_14d8093e7(void)

void FUN_14d8093e7(undefined8 param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  ulonglong unaff_RBP;
  
  (*(code *)0x161deee58)(param_1,~(param_2 & in_RAX) & unaff_RBP,0x161deee58);
  return;
}



// FUNCTION 14d80946a FUN_14d80946a body=145 status=ok
// SIG undefined FUN_14d80946a(void)

undefined8
FUN_14d80946a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_RAX;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = param_4;
  *(undefined8 *)(local_res18 + -0x10) = in_RAX;
  *(undefined8 *)(local_res18 + -0x18) = in_RAX;
  *(undefined8 *)(local_res18 + -0x20) = param_2;
  *(undefined **)(local_res18 + -0x28) = &DAT_15b2cfef2;
  return *(undefined8 *)(local_res18 + -8);
}



// FUNCTION 14d8094fc FUN_14d8094fc body=24 status=ok
// SIG undefined FUN_14d8094fc(void)

/* WARNING: Control flow encountered bad instruction data */

uint FUN_14d8094fc(longlong param_1,uint param_2)

{
  longlong unaff_RBP;
  uint *unaff_RSI;
  
  if (param_1 + -1 == 0) {
    return param_2 ^ *unaff_RSI;
  }
  *(int *)(unaff_RBP + 0x2967c5d1) =
       *(int *)(unaff_RBP + 0x2967c5d1) >> ((byte)(param_1 + -1) & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d809645 thunk_FUN_14d80964b body=5 status=ok
// SIG undefined thunk_FUN_14d80964b(void)

void thunk_FUN_14d80964b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R13;
  short unaff_R15W;
  
  FUN_162d6c4d5(unaff_R15W + 0x6d07,FUN_162d6c4d5,param_3,*(undefined8 *)(unaff_R13 + -0x60));
  return;
}



// FUNCTION 14d80964b FUN_14d80964b body=167 status=ok
// SIG undefined FUN_14d80964b(void)

void FUN_14d80964b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R13;
  short unaff_R15W;
  
  FUN_162d6c4d5(unaff_R15W + 0x6d07,FUN_162d6c4d5,param_3,*(undefined8 *)(unaff_R13 + -0x60));
  return;
}



// FUNCTION 14d8096f4 FUN_14d8096f4 body=380 status=ok
// SIG undefined FUN_14d8096f4(void)

/* WARNING: Instruction at (ram,0x00014d8097c3) overlaps instruction at (ram,0x00014d8097c2)
    */

void FUN_14d8096f4(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar4;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_RAX;
  char *pcVar9;
  ulonglong *puVar10;
  longlong unaff_R13;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  bool bVar14;
  byte bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  byte bVar19;
  bool bVar20;
  byte bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  byte bVar25;
  bool bVar26;
  byte bVar27;
  bool bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  bool bVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  int iVar3;
  longlong lVar5;
  longlong lVar6;
  
  puVar1 = (undefined8 *)(&stack0xfffffffff575d31e + param_2);
  uVar7 = *(undefined8 *)(unaff_R13 + -0x80);
  *puVar1 = uVar7;
  *puVar1 = in_RAX;
  *(undefined4 *)puVar1 = 0x90602a03;
  *(undefined4 *)((longlong)puVar1 + 4) = 0xffffffff;
  *puVar1 = 0x14d809793;
  pcVar9 = (char *)FUN_156add1b7();
  uVar33 = puVar1[2];
  puVar10 = puVar1 + 3;
  if ((uVar33 & 1) == 0) {
    *(undefined4 *)(puVar1 + 3) = 0;
    *(int *)(puVar1 + 3) = *(int *)(puVar1 + 3) + 0x25e0ead2;
    uVar2 = *(uint *)(puVar1 + 3);
    iVar3 = *(int *)(puVar1 + 3);
    *(int *)(puVar1 + 3) = *(int *)(puVar1 + 3) + 0x89415fd;
    puVar10 = puVar1 + 2;
    puVar1[2] = (ulonglong)((uVar33 & 0x4000) != 0) * 0x4000 |
                (ulonglong)SCARRY4(iVar3,0x89415fd) * 0x800 |
                (ulonglong)((uVar33 & 0x400) != 0) * 0x400 |
                (ulonglong)((uVar33 & 0x200) != 0) * 0x200 |
                (ulonglong)((uVar33 & 0x100) != 0) * 0x100 |
                (ulonglong)(*(int *)(puVar1 + 3) < 0) * 0x80 |
                (ulonglong)(*(int *)(puVar1 + 3) == 0) * 0x40 |
                (ulonglong)((uVar33 & 0x10) != 0) * 0x10 |
                (ulonglong)((POPCOUNT(*(uint *)(puVar1 + 3) & 0xff) & 1U) == 0) * 4 |
                (ulonglong)(0xf76bea02 < uVar2) | (ulonglong)((uVar33 & 0x200000) != 0) * 0x200000 |
                (ulonglong)((uVar33 & 0x40000) != 0) * 0x40000;
    puVar1[2] = puVar1[2] | 1;
  }
  else {
    DAT_81000000002404c7 = (byte)pcVar9;
    pcVar9 = (char *)(ulonglong)
                     (((int)CONCAT71((int7)((ulonglong)pcVar9 >> 8),DAT_81000000002404c7 - 0x24) +
                       0x481da1f + (uint)(DAT_81000000002404c7 < 0x24) & 0xfffffffd) + 0x489c0894);
    *(uint *)(puVar1 + 3) = *(uint *)(puVar1 + 3) | 1;
  }
  uVar33 = *puVar10;
  bVar25 = (uVar33 & 0x4000) != 0;
  bVar21 = (uVar33 & 0x200) != 0;
  bVar19 = (uVar33 & 0x100) != 0;
  bVar15 = (uVar33 & 0x10) != 0;
  bVar31 = (uVar33 & 0x200000) != 0;
  bVar27 = (uVar33 & 0x40000) != 0;
  bVar30 = 0;
  bVar29 = 0;
  if ((uVar33 & 1) == 0) {
    *puVar10 = 0x14d8097c7;
    pcVar9 = (char *)FUN_151a4dc8e();
    *pcVar9 = *pcVar9 + (char)pcVar9;
    *pcVar9 = *pcVar9 + (char)pcVar9;
  }
  else {
    ((ushort *)((longlong)puVar10 + 0xc))[0] = 0;
    ((ushort *)((longlong)puVar10 + 0xc))[1] = 0;
  }
  *(undefined4 *)((longlong)puVar10 + 0xc) = *(undefined4 *)((longlong)puVar10 + 0xc);
  uVar11 = puVar10[1] & 0x518b00cf;
  uVar12 = uVar11 * 2;
  puVar10[1] = puVar10[1] + 0x518b00cf;
  uVar34 = puVar10[1];
  lVar4 = puVar10[1];
  puVar10[1] = puVar10[1] + uVar11 * -2;
  lVar5 = puVar10[1];
  lVar6 = puVar10[1];
  uVar11 = puVar10[1];
  uVar8 = puVar10[1];
  puVar10[1] = (ulonglong)pcVar9;
  *(undefined4 *)(puVar10 + 1) = 0xefa888f0;
  ((ushort *)((longlong)puVar10 + 0xc))[0] = 0xffff;
  ((ushort *)((longlong)puVar10 + 0xc))[1] = 0xffff;
  *puVar10 = (ulonglong)(bVar25 & 1) * 0x4000 | (ulonglong)SBORROW8(lVar4,uVar12) * 0x800 |
             (ulonglong)((uVar33 & 0x400) != 0) * 0x400 | (ulonglong)(bVar21 & 1) * 0x200 |
             (ulonglong)(bVar19 & 1) * 0x100 | (ulonglong)(lVar5 < 0) * 0x80 |
             (ulonglong)(lVar6 == 0) * 0x40 | (ulonglong)(bVar15 & 1) * 0x10 |
             (ulonglong)((POPCOUNT(uVar11 & 0xff) & 1U) == 0) * 4 | (ulonglong)(uVar34 < uVar12) |
             (ulonglong)(bVar31 & 1) * 0x200000 | (ulonglong)(bVar30 & 1) * 0x100000 |
             (ulonglong)(bVar29 & 1) * 0x80000 | (ulonglong)(bVar27 & 1) * 0x40000;
  puVar10[-1] = uVar8;
  puVar10[-2] = (ulonglong)pcVar9;
  if ((*puVar10 & 1) == 0) {
    FUN_1615a472a();
    return;
  }
  uVar33 = *puVar10;
  bVar26 = (uVar33 & 0x4000) != 0;
  bVar24 = (uVar33 & 0x800) != 0;
  bVar23 = (uVar33 & 0x400) != 0;
  bVar22 = (uVar33 & 0x200) != 0;
  bVar20 = (uVar33 & 0x100) != 0;
  bVar18 = (uVar33 & 0x80) != 0;
  bVar17 = (uVar33 & 0x40) != 0;
  bVar16 = (uVar33 & 0x10) != 0;
  bVar14 = (uVar33 & 4) != 0;
  bVar13 = (uVar33 & 1) != 0;
  bVar32 = (uVar33 & 0x200000) != 0;
  bVar28 = (uVar33 & 0x40000) != 0;
  *puVar10 = (ulonglong)bVar26 * 0x4000 | (ulonglong)bVar24 * 0x800 | (ulonglong)bVar23 * 0x400 |
             (ulonglong)bVar22 * 0x200 | (ulonglong)bVar20 * 0x100 | (ulonglong)bVar18 * 0x80 |
             (ulonglong)bVar17 * 0x40 | (ulonglong)bVar16 * 0x10 | (ulonglong)bVar14 * 4 |
             (ulonglong)bVar13 | (ulonglong)bVar32 * 0x200000 | (ulonglong)bVar28 * 0x40000;
  puVar10[-1] = (ulonglong)bVar26 * 0x4000 | (ulonglong)bVar24 * 0x800 | (ulonglong)bVar23 * 0x400 |
                (ulonglong)bVar22 * 0x200 | (ulonglong)bVar20 * 0x100 | (ulonglong)bVar18 * 0x80 |
                (ulonglong)bVar17 * 0x40 | (ulonglong)bVar16 * 0x10 | (ulonglong)bVar14 * 4 |
                (ulonglong)bVar13 | (ulonglong)bVar32 * 0x200000 | (ulonglong)bVar28 * 0x40000;
  *(int *)(puVar10 + -1) = (int)puVar10[-1] << 0x1f;
  *(uint *)(puVar10 + -1) = (uint)puVar10[-1] >> 0x1f;
  if ((int)puVar10[-1] != 0) {
    FUN_1615a472a();
    return;
  }
  uVar34 = *puVar10;
  ((ushort *)((longlong)puVar10 + 0x14))[0] = 0;
  ((ushort *)((longlong)puVar10 + 0x14))[1] = 0;
  uVar33 = puVar10[2];
  puVar10[2] = (ulonglong)((uVar34 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar34 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar34 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar34 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar34 & 0x100) != 0) * 0x100 | (ulonglong)((uVar34 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar34 & 0x40) != 0) * 0x40 | (ulonglong)((uVar34 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar34 & 4) != 0) * 4 | (ulonglong)((uVar34 & 1) != 0) |
               (ulonglong)((uVar34 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar34 & 0x40000) != 0) * 0x40000;
  uVar34 = puVar10[2];
  puVar10[2] = uVar7;
  puVar10[1] = uVar8;
  *puVar10 = (ulonglong)((uVar34 & 0x4000) != 0) * 0x4000 |
             (ulonglong)((uVar34 & 0x800) != 0) * 0x800 | (ulonglong)((uVar34 & 0x400) != 0) * 0x400
             | (ulonglong)((uVar34 & 0x200) != 0) * 0x200 |
             (ulonglong)((uVar34 & 0x100) != 0) * 0x100 | (ulonglong)((uVar34 & 0x80) != 0) * 0x80 |
             (ulonglong)((uVar34 & 0x40) != 0) * 0x40 | (ulonglong)((uVar34 & 0x10) != 0) * 0x10 |
             (ulonglong)((uVar34 & 4) != 0) * 4 | (ulonglong)((uVar34 & 1) != 0) |
             (ulonglong)((uVar34 & 0x200000) != 0) * 0x200000 |
             (ulonglong)((uVar34 & 0x40000) != 0) * 0x40000;
  puVar10[4] = uVar33 - 0x3f60c57;
  FUN_14d85d504();
  return;
}



// FUNCTION 14d809872 FUN_14d809872 body=86 status=ok
// SIG undefined FUN_14d809872(void)

void FUN_14d809872(void)

{
  FUN_14d85d504();
  return;
}



// FUNCTION 14d8098ee FUN_14d8098ee body=16 status=ok
// SIG undefined FUN_14d8098ee(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d8098ee(void)

{
  undefined1 in_AL;
  undefined7 in_register_00000001;
  float10 in_ST0;
  
  *(int *)CONCAT71(in_register_00000001,in_AL) = (int)ROUND(in_ST0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d809caa FUN_14d809caa body=117 status=ok
// SIG undefined FUN_14d809caa(void)

void FUN_14d809caa(void)

{
  return;
}



// FUNCTION 14d809d51 FUN_14d809d51 body=764 status=ok
// SIG undefined FUN_14d809d51(void)

/* WARNING: Removing unreachable block (ram,0x00014d809f12) */
/* WARNING: Removing unreachable block (ram,0x00014d809f18) */
/* WARNING: Removing unreachable block (ram,0x00014d809dec) */
/* WARNING: Removing unreachable block (ram,0x00014d809df2) */
/* WARNING: Removing unreachable block (ram,0x00014d809e88) */
/* WARNING: Removing unreachable block (ram,0x000165957a8e) */
/* WARNING: Removing unreachable block (ram,0x00014d809e8e) */
/* WARNING: Removing unreachable block (ram,0x00014dcaffa0) */
/* WARNING: Removing unreachable block (ram,0x000166678a80) */

undefined8 FUN_14d809d51(ulonglong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x70);
  uVar2 = FUN_166678a80(param_1,~uVar1,
                        uVar1 + param_1 + (-~uVar1 - (~(param_1 - (uVar1 | param_1)) + 2)) * -2);
  return uVar2;
}



// FUNCTION 14d80a07c FUN_14d80a07c body=516 status=ok
// SIG undefined FUN_14d80a07c(void)

/* WARNING: Removing unreachable block (ram,0x00014d80a190) */
/* WARNING: Removing unreachable block (ram,0x00014d80a131) */
/* WARNING: Removing unreachable block (ram,0x00014d80a137) */
/* WARNING: Removing unreachable block (ram,0x00014d80a193) */
/* WARNING: Removing unreachable block (ram,0x000165ce0db8) */
/* WARNING: Removing unreachable block (ram,0x00014d80a19f) */
/* WARNING: Removing unreachable block (ram,0x00014d80a1a2) */
/* WARNING: Removing unreachable block (ram,0x00014d80a1c5) */
/* WARNING: Removing unreachable block (ram,0x00014d80a1ca) */
/* WARNING: Removing unreachable block (ram,0x00014d80a1d0) */
/* WARNING: Removing unreachable block (ram,0x00014d80a1d5) */
/* WARNING: Removing unreachable block (ram,0x00014d80a0cf) */

void FUN_14d80a07c(void)

{
  FUN_165ce0db8();
  return;
}



// FUNCTION 14d80a4d4 FUN_14d80a4d4 body=45 status=ok
// SIG undefined FUN_14d80a4d4(void)

void FUN_14d80a4d4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uStackX_8;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)(param_1,param_2,uStackX_8);
  return;
}



// FUNCTION 14d80a55f FUN_14d80a55f body=144 status=ok
// SIG undefined FUN_14d80a55f(void)

/* WARNING: Removing unreachable block (ram,0x0001564d1827) */
/* WARNING: Removing unreachable block (ram,0x00014d80a5e0) */
/* WARNING: Removing unreachable block (ram,0x00014d80a5e6) */
/* WARNING: Removing unreachable block (ram,0x00014d80a5eb) */
/* WARNING: Removing unreachable block (ram,0x0001564d1925) */
/* WARNING: Removing unreachable block (ram,0x000164f79764) */
/* WARNING: Removing unreachable block (ram,0x0001564d192b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d80a55f(void)

{
  FUN_1664239fa();
  FUN_164f79764();
  return;
}



// FUNCTION 14d80a5f2 FUN_14d80a5f2 body=258 status=ok
// SIG undefined FUN_14d80a5f2(void)

void FUN_14d80a5f2(ulonglong param_1,undefined8 param_2)

{
  longlong *plVar1;
  ushort uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R12;
  ushort *unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
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
  undefined8 unaff_retaddr;
  ushort local_res8;
  uint6 uStackX_a;
  ulonglong local_res10;
  
  plVar1 = (longlong *)(local_res10 ^ param_1);
  bVar14 = (local_res8 & 0x4000) != 0;
  bVar13 = (local_res8 & 0x800) != 0;
  bVar12 = (local_res8 & 0x200) != 0;
  bVar11 = 0;
  bVar10 = (local_res8 & 0x80) != 0;
  bVar9 = (local_res8 & 0x40) != 0;
  bVar8 = (local_res8 & 0x10) != 0;
  bVar7 = (local_res8 & 4) != 0;
  bVar6 = (local_res8 & 1) != 0;
  bVar18 = (uStackX_a & 0x20) != 0;
  bVar15 = (uStackX_a & 4) != 0;
  bVar17 = 0;
  bVar16 = 0;
  pcVar3 = (code *)swi(0x2e);
  uVar5 = (*pcVar3)(unaff_retaddr);
  *plVar1 = unaff_RBP;
  plVar1[-1] = unaff_RBP;
  plVar1[-2] = (ulonglong)(bVar14 & 1) * 0x4000 | (ulonglong)(bVar13 & 1) * 0x800 |
               (ulonglong)((local_res8 & 0x400) != 0) * 0x400 | (ulonglong)(bVar12 & 1) * 0x200 |
               (ulonglong)(bVar11 & 1) * 0x100 | (ulonglong)(bVar10 & 1) * 0x80 |
               (ulonglong)(bVar9 & 1) * 0x40 | (ulonglong)(bVar8 & 1) * 0x10 |
               (ulonglong)(bVar7 & 1) * 4 | (ulonglong)(bVar6 & 1) |
               (ulonglong)(bVar18 & 1) * 0x200000 | (ulonglong)(bVar17 & 1) * 0x100000 |
               (ulonglong)(bVar16 & 1) * 0x80000 | (ulonglong)(bVar15 & 1) * 0x40000;
  plVar1[-3] = unaff_R14;
  plVar1[-4] = uVar5;
  *(undefined4 *)(plVar1 + -4) = 0x7d3c8e40;
  *(undefined4 *)((longlong)plVar1 - 0x1c) = 0;
  uVar4 = plVar1[-4];
  plVar1[-4] = param_2;
  plVar1[-5] = uVar5;
  plVar1[-2] = unaff_R12;
  *plVar1 = 0x3f6442d - (uVar4 ^ 0x7ecc90f3);
  plVar1[-1] = unaff_RBX;
  plVar1[-2] = unaff_RBX;
  plVar1[-3] = 0x14d80a660;
  FUN_14dc3bee2();
  uVar2 = *unaff_R13;
  plVar1[-2] = (longlong)unaff_R13;
  *(ushort *)plVar1[-2] = -0x101 - ~(uVar2 | 0x100);
  plVar1[-2] = in_R11;
  plVar1[-3] = unaff_RDI;
  *(undefined8 *)(plVar1[2] + -8) = unaff_R15;
  FUN_161418306();
  return;
}



// FUNCTION 14d80a6f4 FUN_14d80a6f4 body=112 status=ok
// SIG undefined FUN_14d80a6f4(void)

void FUN_14d80a6f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  short *unaff_RBX;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R12;
  ulonglong uVar1;
  ulonglong uStackX_8;
  longlong local_res10;
  
  *unaff_RBX = *unaff_RBX + -1;
  *(undefined8 *)(local_res10 + -8) = unaff_R12;
  *(undefined8 *)(local_res10 + -0x10) = unaff_R12;
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
  *(undefined8 *)(local_res10 + -0x20) = unaff_RDI;
  *(undefined8 *)(local_res10 + -0x28) = in_R11;
  *(undefined8 *)(local_res10 + -8) = 0x7632e28;
  *(undefined8 *)(local_res10 + -0x18) = param_3;
  *(undefined8 *)(local_res10 + -0x20) = param_3;
  *(undefined1 **)(local_res10 + -0x18) = &LAB_14d80a768;
  FUN_1622fbbd9(param_1,param_2,*(undefined8 *)(local_res10 + -0x20));
  return;
}



// FUNCTION 14d80a877 FUN_14d80a877 body=171 status=ok
// SIG undefined FUN_14d80a877(void)

void FUN_14d80a877(undefined8 param_1)

{
  longlong in_RAX;
  uint local_res8;
  
  if ((ulonglong)(local_res8 ^ 0x2909935b) == 0xffffffffadc8e005) {
    *(char *)(in_RAX + -0x11) = *(char *)(in_RAX + -0x11) - (char)((ulonglong)param_1 >> 8);
  }
  FUN_16209846a((char)param_1,0xffffffffffffffa8,0xffffffffffffffc8);
  return;
}



// FUNCTION 14d80a9af FUN_14d80a9af body=97 status=ok
// SIG undefined FUN_14d80a9af(void)

undefined8 FUN_14d80a9af(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d80ac37 FUN_14d80ac37 body=28 status=ok
// SIG undefined FUN_14d80ac37(void)

void FUN_14d80ac37(void)

{
  return;
}



// FUNCTION 14d80adf7 FUN_14d80adf7 body=311 status=ok
// SIG undefined FUN_14d80adf7(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d80aeab) */
/* WARNING: Removing unreachable block (ram,0x00014d7bd4f6) */
/* WARNING: Removing unreachable block (ram,0x00014d80ae8f) */
/* WARNING: Removing unreachable block (ram,0x00014d80af1a) */
/* WARNING: Removing unreachable block (ram,0x0001657ab882) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d80adf7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1617d2396(param_1,0xffffffff95cfe585,param_3,FUN_1617d2396);
  return;
}



// FUNCTION 14d80b25c FUN_14d80b25c body=185 status=ok
// SIG undefined FUN_14d80b25c(void)

void FUN_14d80b25c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  undefined8 uStackX_8;
  
  FUN_16564b104(param_1,uStackX_8,param_3,*(undefined8 *)(unaff_RDI + -0xa0));
  return;
}



// FUNCTION 14d80b316 FUN_14d80b316 body=182 status=ok
// SIG undefined FUN_14d80b316(void)

void FUN_14d80b316(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x160e2c2cd)(param_1,param_2,param_3,0x1fd1839d);
  return;
}



// FUNCTION 14d80b514 FUN_14d80b514 body=161 status=ok
// SIG undefined FUN_14d80b514(void)

void FUN_14d80b514(undefined8 param_1)

{
  longlong unaff_R12;
  
  FUN_156d8d446(param_1,*(undefined8 *)(unaff_R12 + -0x38),1);
  return;
}



// FUNCTION 14d80b5bb FUN_14d80b5bb body=172 status=ok
// SIG undefined FUN_14d80b5bb(void)

void FUN_14d80b5bb(void)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulonglong unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  ulonglong local_res18;
  
  uVar1 = ~local_res18 & unaff_RDI;
  *(undefined8 *)(uVar1 - 8) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x10) = unaff_R12;
  *(undefined8 *)(uVar1 - 0x18) = in_R11;
  *(undefined8 *)(uVar1 - 0x10) = unaff_R15;
  *(undefined8 *)(uVar1 - 0x18) = unaff_R15;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x20) = in_RAX;
  *(undefined8 *)(uVar1 - 0x28) = in_RAX;
  *(undefined1 **)(uVar1 - 0x20) = &LAB_14d80b66b;
  FUN_15b9f15bf();
  return;
}



// FUNCTION 14d80ba17 FUN_14d80ba17 body=186 status=ok
// SIG undefined FUN_14d80ba17(void)

void FUN_14d80ba17(void)

{
  return;
}



// FUNCTION 14d80bad2 FUN_14d80bad2 body=131 status=ok
// SIG undefined FUN_14d80bad2(void)

void FUN_14d80bad2(void)

{
  undefined8 local_res8;
  
  FUN_156e17787(local_res8);
  return;
}



// FUNCTION 14d80bc00 FUN_14d80bc00 body=19 status=ok
// SIG undefined FUN_14d80bc00(void)

void FUN_14d80bc00(void)

{
  FUN_14d85d504();
  return;
}



// FUNCTION 14d80bde3 FUN_14d80bde3 body=613 status=ok
// SIG undefined FUN_14d80bde3(void)

void FUN_14d80bde3(undefined8 param_1,undefined8 param_2)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  (*(code *)0x15b31579e)
            (0x66c5552,param_2,*(ulonglong *)(unaff_RSI + -0x60) ^ unaff_RBP,
             (-unaff_RBP - *(ulonglong *)(unaff_RSI + -0x28)) +
             (*(ulonglong *)(unaff_RSI + -0x28) | unaff_RBP) * 2);
  return;
}



// FUNCTION 14d80bea1 FUN_14d80bea1 body=1480 status=ok
// SIG undefined FUN_14d80bea1(void)

/* WARNING: Removing unreachable block (ram,0x000160ef958d) */
/* WARNING: Removing unreachable block (ram,0x000160ef9598) */
/* WARNING: Removing unreachable block (ram,0x000160ef9623) */
/* WARNING: Removing unreachable block (ram,0x000160ef9626) */
/* WARNING: Removing unreachable block (ram,0x000160ef96f1) */
/* WARNING: Removing unreachable block (ram,0x000160ef96f7) */
/* WARNING: Removing unreachable block (ram,0x00015ba3b09a) */
/* WARNING: Removing unreachable block (ram,0x00015ba3b12d) */
/* WARNING: Removing unreachable block (ram,0x00015ba3b133) */
/* WARNING: Removing unreachable block (ram,0x000156bfb6da) */
/* WARNING: Removing unreachable block (ram,0x000156bfb768) */
/* WARNING: Removing unreachable block (ram,0x000156bfb76d) */
/* WARNING: Removing unreachable block (ram,0x000156bfb773) */
/* WARNING: Removing unreachable block (ram,0x000162b8cb01) */
/* WARNING: Removing unreachable block (ram,0x000162b8cb8c) */
/* WARNING: Removing unreachable block (ram,0x000162b8cb91) */
/* WARNING: Removing unreachable block (ram,0x000162b8cb97) */
/* WARNING: Removing unreachable block (ram,0x000162f4bb58) */
/* WARNING: Removing unreachable block (ram,0x000162f4bb97) */
/* WARNING: Removing unreachable block (ram,0x000162f4bbea) */
/* WARNING: Removing unreachable block (ram,0x000162f4bbf0) */
/* WARNING: Removing unreachable block (ram,0x000162f4bbe5) */
/* WARNING: Removing unreachable block (ram,0x00014e0cfb15) */
/* WARNING: Removing unreachable block (ram,0x00014d80c08e) */
/* WARNING: Removing unreachable block (ram,0x00014d80c09a) */
/* WARNING: Removing unreachable block (ram,0x00014d80bf5d) */
/* WARNING: Removing unreachable block (ram,0x00014d80bf68) */
/* WARNING: Removing unreachable block (ram,0x00014d80c001) */
/* WARNING: Removing unreachable block (ram,0x00014d80c003) */
/* WARNING: Removing unreachable block (ram,0x000156f3ebec) */
/* WARNING: Removing unreachable block (ram,0x000156f3ec04) */
/* WARNING: Removing unreachable block (ram,0x000156f3ec0f) */
/* WARNING: Removing unreachable block (ram,0x000156f3ec9e) */
/* WARNING: Removing unreachable block (ram,0x000156f3eca4) */
/* WARNING: Removing unreachable block (ram,0x000156f3ed20) */
/* WARNING: Removing unreachable block (ram,0x000156f3ed24) */
/* WARNING: Removing unreachable block (ram,0x000156f3ede1) */
/* WARNING: Removing unreachable block (ram,0x000156f3ede6) */
/* WARNING: Removing unreachable block (ram,0x000156f3edec) */
/* WARNING: Removing unreachable block (ram,0x000156f3edf1) */
/* WARNING: Removing unreachable block (ram,0x000156852ebb) */
/* WARNING: Removing unreachable block (ram,0x000157026775) */
/* WARNING: Removing unreachable block (ram,0x000157026825) */
/* WARNING: Removing unreachable block (ram,0x000157026820) */
/* WARNING: Removing unreachable block (ram,0x00015702682c) */
/* WARNING: Removing unreachable block (ram,0x000156852f45) */
/* WARNING: Removing unreachable block (ram,0x000156852f4b) */
/* WARNING: Removing unreachable block (ram,0x000156852f50) */
/* WARNING: Removing unreachable block (ram,0x00014d80bf63) */
/* WARNING: Removing unreachable block (ram,0x00014d80c129) */
/* WARNING: Removing unreachable block (ram,0x00014d80c134) */
/* WARNING: Removing unreachable block (ram,0x00014d80c12f) */
/* WARNING: Removing unreachable block (ram,0x000160ef950b) */
/* WARNING: Removing unreachable block (ram,0x00015b9f5860) */
/* WARNING: Removing unreachable block (ram,0x000160ef9593) */
/* WARNING: Removing unreachable block (ram,0x0001667b5120) */

undefined8 FUN_14d80bea1(void)

{
  ulonglong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 unaff_RSI;
  ulonglong in_R10;
  longlong unaff_R12;
  undefined8 unaff_R13;
  undefined8 local_res8;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  longlong in_stack_00000028;
  
  uVar1 = *(ulonglong *)(unaff_R12 + 0x10);
  *(undefined8 *)(unaff_R12 + 0x10) = 0;
  *(longlong *)(unaff_R12 + 0x10) = *(longlong *)(unaff_R12 + 0x10) - ~(in_R10 & uVar1);
  *(longlong *)(unaff_R12 + 0x10) = -*(longlong *)(unaff_R12 + 0x10);
  *(undefined8 *)(in_stack_00000028 + -8) = unaff_R13;
  *(undefined8 *)(in_stack_00000028 + -0x10) = in_stack_00000010;
  *(undefined8 *)(in_stack_00000028 + -0x18) = in_stack_00000010;
  *(undefined8 *)(in_stack_00000028 + -0x20) = in_stack_00000018;
  *(undefined8 *)(in_stack_00000028 + -0x10) = *(undefined8 *)(in_stack_00000028 + -8);
  *(undefined8 *)(in_stack_00000028 + -8) = 0;
  *(undefined8 *)(in_stack_00000028 + -0x18) = unaff_RSI;
  *(undefined8 *)(in_stack_00000028 + -0x20) = local_res8;
  puVar2 = *(undefined **)(in_stack_00000028 + -8);
  *(undefined **)(in_stack_00000028 + -8) = puVar2 + -0x1567d0649;
  if (puVar2 < &DAT_1567d0649) {
    uVar3 = FUN_16125edd9();
    return uVar3;
  }
  uVar3 = FUN_16125edd9();
  return uVar3;
}



// FUNCTION 14d80c134 FUN_14d80c134 body=151 status=ok
// SIG undefined FUN_14d80c134(void)

void FUN_14d80c134(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  FUN_15b8e347c(param_1,param_2,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14d80c1ce FUN_14d80c1ce body=454 status=ok
// SIG undefined FUN_14d80c1ce(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d80c1ce(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_R10;
  longlong unaff_R13;
  longlong unaff_R14;
  undefined8 in_stack_00000008;
  undefined8 auStackX_18 [2];
  
  *(undefined8 *)((longlong)auStackX_18 + unaff_R14) = in_R10;
  auStackX_18[0] = *(undefined8 *)(unaff_R13 + -0x98);
  FUN_1570a6f6a(param_1,param_2,param_3,in_stack_00000008);
  return;
}



// FUNCTION 14d80c438 FUN_14d80c438 body=324 status=ok
// SIG undefined FUN_14d80c438(void)

void FUN_14d80c438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 unaff_RDI;
  longlong in_R11;
  ushort *puVar5;
  undefined8 unaff_R12;
  longlong unaff_R15;
  undefined8 local_res18;
  ushort *puStack0000000000000028;
  
  puVar5 = (ushort *)(in_R11 - *(longlong *)(&stack0xfffffffffa954024 + unaff_R15));
  *(undefined8 *)(puVar5 + -4) = unaff_RDI;
  *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -4);
  *(undefined1 **)(puVar5 + -4) = &LAB_15649e4a5;
  puVar5[-0xc] = 0xc4cf;
  puVar5[-0xb] = 0x4d80;
  puVar5[-10] = 1;
  puVar5[-9] = 0;
  puStack0000000000000028 = puVar5;
  FUN_15649e478();
  *(undefined8 *)(puVar5 + -0xc) = unaff_R12;
  uVar2 = *(undefined8 *)(puVar5 + -0xc);
  *(undefined8 *)(puVar5 + -0xc) = param_4;
  uVar3 = *(undefined8 *)(puVar5 + -0xc);
  *puVar5 = (-0x101 - (*puVar5 | 0xfeff)) + *puVar5;
  lVar4 = *(longlong *)(puVar5 + 4);
  *(undefined8 *)(lVar4 + -8) = local_res18;
  *(undefined8 *)(lVar4 + -0x10) = *(undefined8 *)(lVar4 + -8);
  *(undefined8 *)(lVar4 + -0x18) = uVar2;
  *(undefined8 *)(lVar4 + -0x20) = param_1;
  puVar1 = (ulonglong *)(lVar4 + -0x28);
  *puVar1 = 0x1e2ccc6e;
  *puVar1 = *puVar1 ^ 0x1e2ccc6e;
  *(ulonglong *)(lVar4 + -0x30) = *puVar1;
  *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(lVar4 + -0x30);
  uVar2 = *(undefined8 *)(lVar4 + -0x20);
  *(undefined8 *)(lVar4 + -0x20) = param_3;
  *(undefined8 *)(lVar4 + -0x28) = param_3;
  *(undefined1 **)(lVar4 + -0x20) = &LAB_14d80c57e;
  FUN_16211cc08(uVar2,param_2,*(undefined8 *)(lVar4 + -0x28),uVar3);
  return;
}



// FUNCTION 14d80c812 FUN_14d80c812 body=154 status=ok
// SIG undefined FUN_14d80c812(void)

void FUN_14d80c812(void)

{
  return;
}



// FUNCTION 14d80c8ad FUN_14d80c8ad body=415 status=ok
// SIG undefined FUN_14d80c8ad(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014a4930ce) overlaps instruction at (ram,0x00014a4930cc)
    */
/* WARNING: Removing unreachable block (ram,0x00014d80c946) */
/* WARNING: Removing unreachable block (ram,0x00014d80c9c3) */
/* WARNING: Removing unreachable block (ram,0x00014d80c9c9) */
/* WARNING: Removing unreachable block (ram,0x00014a49303b) */
/* WARNING: Removing unreachable block (ram,0x00014a4930cd) */
/* WARNING: Removing unreachable block (ram,0x00014a493064) */
/* WARNING: Removing unreachable block (ram,0x00014a4930ce) */
/* WARNING: Removing unreachable block (ram,0x00014a49306d) */
/* WARNING: Removing unreachable block (ram,0x00014a493073) */
/* WARNING: Removing unreachable block (ram,0x00014a493076) */
/* WARNING: Removing unreachable block (ram,0x00014a4930d7) */
/* WARNING: Removing unreachable block (ram,0x00014a4930c0) */
/* WARNING: Removing unreachable block (ram,0x00014a4930d1) */
/* WARNING: Removing unreachable block (ram,0x00014a4930d9) */

void FUN_14d80c8ad(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 in_RAX;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = in_RAX;
  *(undefined8 *)(local_res10 + -0x10) = unaff_retaddr;
  *(undefined8 *)(local_res10 + -0x18) = unaff_retaddr;
  *(undefined8 *)(local_res10 + -0x20) = unaff_R15;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -0x18) = *(undefined8 *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -8) = 0x5241e16c;
  *(ulonglong *)(local_res10 + -8) = *(ulonglong *)(local_res10 + -8) ^ 0x5241e16c;
  puVar1 = (ulonglong *)(local_res10 + -8);
  uVar2 = *puVar1;
  *puVar1 = (ulonglong)(&DAT_14dc5f6aa + *puVar1);
  if (uVar2 < 0xfffffffeb23a0956) {
    thunk_FUN_15b642ca5();
    return;
  }
  FUN_14dc5f686();
  return;
}



// FUNCTION 14d80ca51 FUN_14d80ca51 body=487 status=ok
// SIG undefined FUN_14d80ca51(void)

/* WARNING: Removing unreachable block (ram,0x00014d80cad3) */
/* WARNING: Removing unreachable block (ram,0x00014d80cad9) */
/* WARNING: Removing unreachable block (ram,0x00014d80cb85) */
/* WARNING: Removing unreachable block (ram,0x00014d80cb8b) */
/* WARNING: Removing unreachable block (ram,0x00015634fff3) */
/* WARNING: Removing unreachable block (ram,0x00015712b389) */

void FUN_14d80ca51(void)

{
  FUN_15712b389();
  return;
}



// FUNCTION 14d80cbcf FUN_14d80cbcf body=77 status=ok
// SIG undefined FUN_14d80cbcf(void)

/* WARNING: Removing unreachable block (ram,0x00014d80cc0d) */
/* WARNING: Removing unreachable block (ram,0x00016484b89d) */
/* WARNING: Removing unreachable block (ram,0x00014d80cc13) */
/* WARNING: Removing unreachable block (ram,0x00014d80cc1d) */

undefined8 FUN_14d80cbcf(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_16484b89d();
  return uVar1;
}



// FUNCTION 14d80cdbf FUN_14d80cdbf body=289 status=ok
// SIG undefined FUN_14d80cdbf(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d80ce4c) */
/* WARNING: Removing unreachable block (ram,0x00014d80cedd) */
/* WARNING: Removing unreachable block (ram,0x00014d80cee3) */
/* WARNING: Removing unreachable block (ram,0x00014d80ced8) */
/* WARNING: Removing unreachable block (ram,0x000156939dd0) */
/* WARNING: Removing unreachable block (ram,0x00015b43a92a) */
/* WARNING: Removing unreachable block (ram,0x0001661145d1) */
/* WARNING: Removing unreachable block (ram,0x00014d80cee8) */
/* WARNING: Removing unreachable block (ram,0x00014d80cfc6) */
/* WARNING: Removing unreachable block (ram,0x00014d80cfc9) */

void FUN_14d80cdbf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong unaff_R15;
  ulonglong uStackX_10;
  ulonglong in_stack_00000018;
  ulonglong in_stack_00000020;
  
  if (uStackX_10 + unaff_R15 < (uStackX_10 & unaff_R15) * 2) {
    lVar2 = in_stack_00000018 + unaff_R15 + (in_stack_00000018 & unaff_R15) * -2;
    uVar1 = ~(ushort)lVar2;
    FUN_16691a58d(uVar1,param_2,param_3,
                  CONCAT62((int6)((ulonglong)param_4 >> 0x10),0xeb0a) & 0xffffffffffff15f5,
                  CONCAT62((int6)((ulonglong)lVar2 >> 0x10),uVar1),in_stack_00000020 ^ unaff_R15);
    return;
  }
  FUN_15b43a884();
  return;
}



// FUNCTION 14d80cee8 FUN_14d80cee8 body=286 status=ok
// SIG undefined FUN_14d80cee8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d80cee8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  ulonglong uVar2;
  undefined8 unaff_RDI;
  ulonglong in_R11;
  ushort *unaff_R13;
  undefined8 uStackX_8;
  longlong local_res20;
  
  *unaff_R13 = ~*unaff_R13;
  *unaff_R13 = *unaff_R13 | 0x100;
  *unaff_R13 = ~*unaff_R13;
  *(undefined8 *)(local_res20 + -8) = uStackX_8;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RDI;
  uVar1 = *(undefined8 *)(local_res20 + -0x10);
  *(undefined8 *)(local_res20 + -0x10) = in_RAX;
  *(undefined8 *)(local_res20 + -0x18) = in_RAX;
  *(undefined8 *)(local_res20 + -0x20) = uVar1;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = param_2;
  *(undefined1 **)(local_res20 + -8) = &LAB_162667aba;
  *(undefined8 *)(local_res20 + -0x20) = 0x14d80cf7e;
  uVar2 = FUN_15b4dcafc();
  *(ulonglong *)(local_res20 + -0x20) = -1 - (uVar2 & in_R11);
  *(undefined4 *)(local_res20 + -0x20) = 0x204d17db;
  *(undefined4 *)(local_res20 + -0x1c) = 0;
  if (*(longlong *)(local_res20 + -0x20) == 0x558f6b81) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined8 *)(local_res20 + -0x20) = param_1;
  thunk_FUN_156923ef8();
  return;
}



// FUNCTION 14d80d0a0 FUN_14d80d0a0 body=81 status=ok
// SIG undefined FUN_14d80d0a0(void)

void FUN_14d80d0a0(void)

{
  return;
}



// FUNCTION 14d80d265 FUN_14d80d265 body=26 status=ok
// SIG undefined FUN_14d80d265(void)

undefined8 FUN_14d80d265(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  return *(undefined8 *)(param_3 + -0x38);
}



// FUNCTION 14d80d372 FUN_14d80d372 body=265 status=ok
// SIG undefined FUN_14d80d372(void)

/* WARNING: Removing unreachable block (ram,0x00014d80d3ad) */

void FUN_14d80d372(void)

{
  FUN_14d822c41();
  return;
}



// FUNCTION 14d80d47e FUN_14d80d47e body=28 status=ok
// SIG undefined FUN_14d80d47e(void)

void FUN_14d80d47e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RSI;
  undefined8 auStackX_18 [2];
  
  *(undefined8 *)((longlong)auStackX_18 + unaff_RSI + param_1) = param_3;
  return;
}



// FUNCTION 14d80d49b FUN_14d80d49b body=429 status=ok
// SIG undefined FUN_14d80d49b(void)

/* WARNING: Removing unreachable block (ram,0x00014d80d58d) */
/* WARNING: Removing unreachable block (ram,0x00014d80d599) */
/* WARNING: Removing unreachable block (ram,0x00014d80d505) */
/* WARNING: Removing unreachable block (ram,0x00014d80d50b) */
/* WARNING: Removing unreachable block (ram,0x000162b8bf75) */
/* WARNING: Removing unreachable block (ram,0x00016181d7b4) */

undefined8 FUN_14d80d49b(undefined8 param_1,longlong param_2)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  if (param_2 == 0x449ae) {
    uVar1 = FUN_16181d7b4();
    return uVar1;
  }
  if (param_2 != 0x449af) {
    return in_RAX;
  }
  return in_RAX;
}



// FUNCTION 14d80d787 FUN_14d80d787 body=131 status=ok
// SIG undefined FUN_14d80d787(void)

/* WARNING: Removing unreachable block (ram,0x00014d80d7be) */

void FUN_14d80d787(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 local_res8;
  undefined8 uStackX_18;
  
  *(ulonglong *)(param_4 + 0x10) =
       (param_1 - (*(ulonglong *)(param_4 + 0x10) | param_1)) + *(longlong *)(param_4 + 0x10);
  FUN_156837048(param_1,param_2,uStackX_18,local_res8);
  return;
}



// FUNCTION 14d80d94b FUN_14d80d94b body=177 status=ok
// SIG undefined FUN_14d80d94b(void)

void FUN_14d80d94b(void)

{
  ulonglong uVar1;
  longlong unaff_R12;
  ulonglong in_stack_00000008;
  ulonglong uStackX_20;
  
  uVar1 = *(ulonglong *)((longlong)&uStackX_20 + unaff_R12);
  *(ulonglong *)((longlong)&uStackX_20 + unaff_R12) =
       ~*(ulonglong *)((longlong)&uStackX_20 + unaff_R12);
  *(ulonglong *)((longlong)&uStackX_20 + unaff_R12) =
       *(ulonglong *)((longlong)&uStackX_20 + unaff_R12) | in_stack_00000008;
  FUN_1653c0735(*(longlong *)((longlong)&uStackX_20 + unaff_R12) -
                (~-(~in_stack_00000008 | uVar1) + 1 |
                *(ulonglong *)((longlong)&uStackX_20 + unaff_R12)),FUN_1653c0735);
  return;
}



// FUNCTION 14d80d9fd FUN_14d80d9fd body=333 status=ok
// SIG undefined FUN_14d80d9fd(void)

undefined8 FUN_14d80d9fd(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_161d1233b();
  return uVar1;
}



// FUNCTION 14d80db57 FUN_14d80db57 body=269 status=ok
// SIG undefined FUN_14d80db57(void)

/* WARNING: Removing unreachable block (ram,0x00014d80dbeb) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d80db57(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong in_R10;
  undefined8 uStackX_8;
  
  uVar1 = *(ulonglong *)(param_3 + -0xa0);
  FUN_165f10882(param_1,uStackX_8,
                -1 - ~(0xffffffffffffffff - ((uVar1 ^ 0xffffffffffffffff) & ~in_R10 | uVar1) |
                      ~((~(~uVar1 & in_R10) + in_R10) - uVar1)));
  return;
}



// FUNCTION 14d80dcf0 FUN_14d80dcf0 body=716 status=ok
// SIG undefined FUN_14d80dcf0(void)

/* WARNING: Removing unreachable block (ram,0x00014d80de1a) */
/* WARNING: Removing unreachable block (ram,0x00014d80de25) */
/* WARNING: Removing unreachable block (ram,0x00014d80debb) */
/* WARNING: Removing unreachable block (ram,0x000161e11808) */
/* WARNING: Removing unreachable block (ram,0x00014d80dec1) */
/* WARNING: Removing unreachable block (ram,0x00014d80df31) */
/* WARNING: Removing unreachable block (ram,0x00014d80df3d) */
/* WARNING: Removing unreachable block (ram,0x00014d84068b) */
/* WARNING: Removing unreachable block (ram,0x00014d80dd7c) */
/* WARNING: Removing unreachable block (ram,0x00014d80dd82) */
/* WARNING: Removing unreachable block (ram,0x0001615628ba) */
/* WARNING: Removing unreachable block (ram,0x00014d80de20) */

undefined8 FUN_14d80dcf0(void)

{
  undefined8 uVar1;
  ulonglong unaff_RDI;
  ulonglong *in_R9;
  
  *in_R9 = ~((~*in_R9 | unaff_RDI) + *in_R9 + 1);
  uVar1 = FUN_15709d3bb();
  return uVar1;
}



// FUNCTION 14d80e004 FUN_14d80e004 body=158 status=ok
// SIG undefined FUN_14d80e004(void)

void FUN_14d80e004(void)

{
  code *pcVar1;
  undefined8 unaff_R15;
  undefined8 local_res8;
  undefined8 *local_res18;
  
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(local_res8);
  *local_res18 = unaff_R15;
  local_res18[-1] = unaff_R15;
  thunk_FUN_161b230ec();
  return;
}



// FUNCTION 14d80e0a4 FUN_14d80e0a4 body=40 status=ok
// SIG undefined FUN_14d80e0a4(void)

void FUN_14d80e0a4(void)

{
  return;
}



// FUNCTION 14d80e388 FUN_14d80e388 body=731 status=ok
// SIG undefined FUN_14d80e388(void)

/* WARNING: Instruction at (ram,0x0001659d934a) overlaps instruction at (ram,0x0001659d9349)
    */
/* WARNING: Removing unreachable block (ram,0x000156c2ba1d) */
/* WARNING: Removing unreachable block (ram,0x00014d80e53e) */
/* WARNING: Removing unreachable block (ram,0x00014d80e544) */
/* WARNING: Removing unreachable block (ram,0x00014d80e54e) */
/* WARNING: Removing unreachable block (ram,0x00014d80e55f) */
/* WARNING: Removing unreachable block (ram,0x00014d80e5d8) */
/* WARNING: Removing unreachable block (ram,0x00014d80e5dd) */
/* WARNING: Removing unreachable block (ram,0x00014d80e5e3) */
/* WARNING: Removing unreachable block (ram,0x00014d80e5e8) */
/* WARNING: Removing unreachable block (ram,0x0001659d931c) */
/* WARNING: Removing unreachable block (ram,0x0001659d934a) */
/* WARNING: Removing unreachable block (ram,0x0001659d9326) */
/* WARNING: Removing unreachable block (ram,0x00014d80e4a0) */
/* WARNING: Removing unreachable block (ram,0x00014d80e4cb) */
/* WARNING: Removing unreachable block (ram,0x000156c2ba21) */
/* WARNING: Removing unreachable block (ram,0x00014d80e51f) */
/* WARNING: Removing unreachable block (ram,0x00014d80e402) */
/* WARNING: Removing unreachable block (ram,0x00014d80e495) */
/* WARNING: Removing unreachable block (ram,0x0001659d92cf) */
/* WARNING: Removing unreachable block (ram,0x0001659d931f) */

undefined8 FUN_14d80e388(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  ulonglong unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 in_R9;
  undefined8 unaff_R13;
  ulonglong uVar3;
  ulonglong unaff_retaddr;
  ulonglong local_res18;
  
  uVar3 = unaff_RBX ^ unaff_retaddr;
  uVar1 = local_res18 ^ unaff_retaddr;
  *(undefined8 *)(uVar1 - 8) = in_RAX;
  *(undefined8 *)(uVar1 - 0x10) = in_RAX;
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x80) != 0) * 0x80 | (ulonglong)((uVar3 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar3 & 0x10) != 0) * 0x10 | (ulonglong)((uVar3 & 4) != 0) * 4 |
       (ulonglong)((uVar3 & 1) != 0) | (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  uVar3 = *(ulonglong *)(uVar1 - 0x18);
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uVar1 - 0x20) = unaff_R13;
  uVar3 = *(ulonglong *)(uVar1 - 0x18);
  *(undefined8 *)(uVar1 - 0x18) = unaff_RSI;
  *(ulonglong *)(uVar1 - 0x20) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uVar1 - 8) = 0x16471e;
  uVar2 = *(undefined8 *)(uVar1 - 0x10);
  *(undefined8 *)(uVar1 - 0x10) = in_R9;
  *(undefined8 *)(uVar1 - 0x18) = in_R9;
  *(undefined8 *)(uVar1 - 0x10) = 0x161e11808;
  return uVar2;
}



// FUNCTION 14d80e7c2 FUN_14d80e7c2 body=282 status=ok
// SIG undefined FUN_14d80e7c2(void)

void FUN_14d80e7c2(void)

{
  (*(code *)0x1619cf4f5)();
  return;
}



// FUNCTION 14d80e8ec FUN_14d80e8ec body=163 status=ok
// SIG undefined FUN_14d80e8ec(void)

void FUN_14d80e8ec(uint param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  FUN_166cc477a(ProcessEnvironmentBlock,param_2,param_3,-~param_1 - param_4);
  return;
}



// FUNCTION 14d80ecba FUN_14d80ecba body=79 status=ok
// SIG undefined FUN_14d80ecba(void)

void FUN_14d80ecba(void)

{
  return;
}



// FUNCTION 14d80edde FUN_14d80edde body=151 status=ok
// SIG undefined FUN_14d80edde(void)

/* WARNING: Removing unreachable block (ram,0x0001662aef95) */
/* WARNING: Removing unreachable block (ram,0x0001662aef80) */
/* WARNING: Removing unreachable block (ram,0x0001662aefa3) */
/* WARNING: Removing unreachable block (ram,0x00014d80ee77) */

void FUN_14d80edde(void)

{
  byte in_CF;
  undefined4 local_res8;
  
  if (-1 < (int)((local_res8 + 0x3838e391) - (uint)((in_CF & 1) != 0))) {
    FUN_161df954a();
    return;
  }
  FUN_1662aef22();
  return;
}



// FUNCTION 14d80ee77 FUN_14d80ee77 body=235 status=ok
// SIG undefined FUN_14d80ee77(void)

void FUN_14d80ee77(void)

{
  ulonglong uVar1;
  ulonglong *in_R10;
  
  uVar1 = *in_R10;
  *in_R10 = *in_R10 | 0xffffffff8a60a7ca;
  *in_R10 = ~(~(uVar1 & 0xffffffff8a60a7ca) & *in_R10);
  FUN_156d8c28e();
  return;
}



// FUNCTION 14d80f0cc FUN_14d80f0cc body=304 status=ok
// SIG undefined FUN_14d80f0cc(void)

/* WARNING: Removing unreachable block (ram,0x00014d80f141) */
/* WARNING: Removing unreachable block (ram,0x00014d80f147) */
/* WARNING: Removing unreachable block (ram,0x00014e19a628) */

void FUN_14d80f0cc(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong in_R10;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  uVar1 = ~(param_2 & (in_R10 ^ 0xffffffffffffffff));
  FUN_14e19a628(param_1,~((uVar1 - (~(~unaff_R15 & ~param_2) | uVar1)) + ~(~unaff_R15 & ~param_2)),
                param_3,unaff_retaddr);
  return;
}



// FUNCTION 14d80f344 FUN_14d80f344 body=71 status=ok
// SIG undefined FUN_14d80f344(void)

void FUN_14d80f344(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  undefined8 uStack_8;
  
  *(undefined8 *)(&stack0x00000008 + param_2) = unaff_R14;
  *(undefined8 *)(&stack0x00000000 + param_2) = param_3;
  uVar2 = *(undefined8 *)(&stack0x00000000 + param_2);
  *(undefined8 *)(&stack0x00000000 + param_2) = in_RAX;
  uVar1 = *(undefined8 *)(&stack0x00000008 + param_2);
  *(undefined8 *)(&stack0x00000008 + param_2) = unaff_R12;
  *(undefined8 *)(&stack0x00000000 + param_2) = uVar1;
  *(undefined8 *)((longlong)&uStack_8 + param_2) = uVar1;
  *(code **)(&stack0x00000000 + param_2) = FUN_14d80f3e9;
  FUN_160ff19f3(0x2956ec06,param_2,uVar2,0xffbaa859);
  return;
}



// FUNCTION 14d80f38b FUN_14d80f38b body=92 status=ok
// SIG undefined FUN_14d80f38b(void)

void FUN_14d80f38b(uint param_1,undefined8 param_2,undefined8 param_3)

{
  uint in_EAX;
  
  FUN_160ff19f3(-~in_EAX - (~param_1 + 2),param_2,param_3,0xffbaa859);
  return;
}



// FUNCTION 14d80f3e9 FUN_14d80f3e9 body=871 status=ok
// SIG undefined FUN_14d80f3e9(void)

void FUN_14d80f3e9(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1661b60b3(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
  return;
}



// FUNCTION 14d80f76c FUN_14d80f76c body=315 status=ok
// SIG undefined FUN_14d80f76c(void)

void FUN_14d80f76c(ulonglong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong unaff_RBP;
  ulonglong uVar6;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 uStack_18;
  ulonglong auStack_10 [2];
  
  puVar1 = (ulonglong *)(&stack0x00000000 + unaff_RBP);
  *puVar1 = param_1;
  uVar5 = *puVar1;
  *(undefined4 *)puVar1 = 0;
  *(undefined4 *)((longlong)puVar1 + 4) = 0;
  uVar3 = *puVar1;
  uVar2 = *(ulonglong *)(unaff_R13 + -0x30);
  uVar6 = uVar2 | unaff_R15;
  *(undefined4 *)puVar1 = 0;
  *(undefined4 *)((longlong)puVar1 + 4) = 0;
  uVar4 = *puVar1;
  *puVar1 = 0x14d80f805;
  uVar5 = FUN_1575626cb(uVar5,uVar3 ^ param_2 + unaff_R15 + (param_2 & unaff_R15) * -2);
  *puVar1 = uVar5;
  puVar1[-1] = (ulonglong)FUN_1575626cb;
  puVar1[-2] = uVar6 - ~(~(uVar4 + uVar6) | ~uVar2 | ~unaff_R15);
  *(undefined4 *)(puVar1 + -3) = 0xec86031d;
  *(undefined4 *)((longlong)puVar1 + -0x14) = 0xffffffff;
  puVar1[-2] = puVar1[-2] + (puVar1[-3] ^ 0x1379fcbd);
  puVar1[-3] = 0x15b5aff78;
  return;
}



// FUNCTION 14d80f8a8 thunk_FUN_14d80f8ae body=5 status=ok
// SIG undefined thunk_FUN_14d80f8ae(void)

/* WARNING: Removing unreachable block (ram,0x00014d80f9ad) */
/* WARNING: Removing unreachable block (ram,0x0001621993a6) */
/* WARNING: Removing unreachable block (ram,0x00014d80f93a) */
/* WARNING: Removing unreachable block (ram,0x00016219937a) */

void thunk_FUN_14d80f8ae(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  short *psVar1;
  short sVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  longlong unaff_RDI;
  byte in_TF;
  undefined1 auStackX_8 [32];
  
  uVar3 = *(ulonglong *)(unaff_RDI + -0x68);
  puVar4 = auStackX_8;
  FUN_162999db5(param_1,(uVar3 - param_1) + (~uVar3 & ~param_1 | uVar3) * -2 + -2,param_3,param_4);
  if ((in_TF & 1) != 0) {
    puVar4 = (undefined1 *)register0x00000020;
  }
  *(undefined1 **)(puVar4 + -8) = puVar4;
  psVar1 = (short *)(*(longlong *)(puVar4 + -8) + 8);
  sVar2 = *(short *)((longlong)ProcessEnvironmentBlock + 0x78);
  *psVar1 = 0;
  *psVar1 = *psVar1 + sVar2;
  FUN_162e9682a(FUN_162e9682a);
  return;
}



// FUNCTION 14d80f8ae FUN_14d80f8ae body=271 status=ok
// SIG undefined FUN_14d80f8ae(void)

/* WARNING: Removing unreachable block (ram,0x00014d80f9ad) */
/* WARNING: Removing unreachable block (ram,0x0001621993a6) */
/* WARNING: Removing unreachable block (ram,0x00014d80f93a) */
/* WARNING: Removing unreachable block (ram,0x00016219937a) */

void FUN_14d80f8ae(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  short *psVar1;
  short sVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  longlong unaff_RDI;
  byte in_TF;
  undefined1 local_res8 [32];
  
  uVar3 = *(ulonglong *)(unaff_RDI + -0x68);
  puVar4 = local_res8;
  FUN_162999db5(param_1,(uVar3 - param_1) + (~uVar3 & ~param_1 | uVar3) * -2 + -2,param_3,param_4);
  if ((in_TF & 1) != 0) {
    puVar4 = (undefined1 *)register0x00000020;
  }
  *(undefined1 **)(puVar4 + -8) = puVar4;
  psVar1 = (short *)(*(longlong *)(puVar4 + -8) + 8);
  sVar2 = *(short *)((longlong)ProcessEnvironmentBlock + 0x78);
  *psVar1 = 0;
  *psVar1 = *psVar1 + sVar2;
  FUN_162e9682a(FUN_162e9682a);
  return;
}



// FUNCTION 14d80fa4c FUN_14d80fa4c body=169 status=ok
// SIG undefined FUN_14d80fa4c(void)

void FUN_14d80fa4c(void)

{
  return;
}



// FUNCTION 14d80faf6 FUN_14d80faf6 body=154 status=ok
// SIG undefined FUN_14d80faf6(void)

/* WARNING: Removing unreachable block (ram,0x00014d80fc44) */
/* WARNING: Removing unreachable block (ram,0x000166dd8611) */

undefined8
FUN_14d80faf6(undefined8 param_1,undefined8 param_2,ushort param_3,longlong param_4,
             undefined8 param_5,longlong param_6)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  short in_R10W;
  undefined *puVar2;
  undefined8 unaff_R12;
  short *unaff_R13;
  undefined8 unaff_R14;
  short unaff_retaddr;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 uStackX_18;
  undefined8 local_res20;
  
  *unaff_R13 = (-0x101 - ((unaff_retaddr + 0x2ac0 + in_R10W) - (param_3 & 0xfeff))) + *unaff_R13;
  *(undefined8 *)(param_6 + -0x10) = in_RAX;
  *(undefined8 *)(param_6 + -8) = in_stack_00000010;
  uVar1 = *(undefined8 *)(param_6 + -0x10);
  puVar2 = &DAT_1667dbfce;
  *(undefined8 *)(param_6 + -0x10) = local_res20;
  *(undefined8 *)(param_6 + -0x18) = local_res20;
  *(undefined8 *)(param_6 + -0x20) = unaff_R12;
  *(undefined8 *)(param_6 + -0x28) = uVar1;
  *(undefined4 *)(param_6 + -0x28) = 0x9601a1fa;
  *(code **)(param_6 + -0x30) = FUN_14d80fb90;
  uVar1 = FUN_16137e6e4(in_stack_00000008);
  *(undefined8 *)(param_6 + -0x30) = unaff_R14;
  *(undefined8 *)(param_6 + -0x38) = uStackX_18;
  *(undefined8 *)(param_6 + -0x20) = 0;
  *(ulonglong *)(param_6 + -0x20) =
       *(ulonglong *)(param_6 + -0x20) ^ *(ulonglong *)(param_6 + -0x18);
  *(undefined **)(param_6 + -0x28) = puVar2;
  *(undefined8 *)(param_6 + -0x30) = 0x15ff1780;
  *(ulonglong *)(param_6 + -0x30) = *(ulonglong *)(param_6 + -0x30) ^ 0x15ff1780;
  *(undefined8 *)(param_6 + -0x18) = *(undefined8 *)(param_6 + -0x30);
  *(longlong *)(param_6 + -0x18) = *(longlong *)(param_6 + -0x18) + param_4;
  *(undefined8 *)(param_6 + -0x20) = *(undefined8 *)(param_6 + -0x38);
  *(undefined8 *)(param_6 + -0x28) = *(undefined8 *)(param_6 + -0x38);
  *(undefined8 *)(param_6 + -0x30) = uVar1;
  *(undefined8 *)(param_6 + -0x20) = 0x14d7ad1b0;
  uVar1 = FUN_166dd8611();
  return uVar1;
}



// FUNCTION 14d80fb90 FUN_14d80fb90 body=180 status=ok
// SIG undefined FUN_14d80fb90(void)

/* WARNING: Removing unreachable block (ram,0x00014d80fc44) */
/* WARNING: Removing unreachable block (ram,0x000166dd8611) */

undefined8 FUN_14d80fb90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 unaff_retaddr;
  undefined8 local_res10;
  
  uVar1 = FUN_166dd8611(param_1,param_2,unaff_retaddr,local_res10);
  return uVar1;
}



// FUNCTION 14d80fc44 FUN_14d80fc44 body=164 status=ok
// SIG undefined FUN_14d80fc44(void)

void FUN_14d80fc44(undefined8 param_1)

{
  FUN_1574204da(param_1,0xffffffffffffffb0,0xffffffffffffffb0,FUN_1574204da);
  return;
}



// FUNCTION 14d80fd9c FUN_14d80fd9c body=151 status=ok
// SIG undefined FUN_14d80fd9c(void)

void FUN_14d80fd9c(ulonglong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong in_RAX;
  longlong unaff_RSI;
  longlong unaff_R12;
  
  puVar1 = (ulonglong *)(&stack0xfffffffff43704a6 + unaff_RSI);
  *puVar1 = *(ulonglong *)(unaff_R12 + -0x78);
  uVar2 = *puVar1;
  uVar3 = *(ulonglong *)(unaff_R12 + -0x48);
  *puVar1 = in_RAX;
  *(ulonglong *)(&stack0xfffffffff437049e + unaff_RSI) = uVar3 + in_RAX + (uVar3 & in_RAX) * -2;
  FUN_1663b9eed(param_1 ^ in_RAX,uVar2 ^ in_RAX);
  return;
}



// FUNCTION 14d80fe35 FUN_14d80fe35 body=136 status=ok
// SIG undefined FUN_14d80fe35(void)

void FUN_14d80fe35(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong in_R10;
  ulonglong unaff_retaddr;
  undefined8 local_res20;
  
  *(undefined8 *)
   ((longlong)&local_res20 +
   (unaff_RSI ^ in_R10 + (unaff_retaddr ^ 0x7f9c2500) + (in_R10 & (unaff_retaddr ^ 0x7f9c2500)) * -2
   )) = unaff_RBP;
  FUN_162d3b9ee(param_1,param_2);
  return;
}



// FUNCTION 14d810004 FUN_14d810004 body=144 status=ok
// SIG undefined FUN_14d810004(void)

void FUN_14d810004(undefined8 param_1)

{
  FUN_1574532a2(param_1);
  return;
}



// FUNCTION 14d810094 FUN_14d810094 body=305 status=ok
// SIG undefined FUN_14d810094(void)

void FUN_14d810094(undefined8 param_1,ulonglong param_2)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  longlong unaff_R15;
  
  FUN_156edb27d(param_1,unaff_RBP + ((unaff_RBX + unaff_RDI + 1U | param_2) + unaff_R15 + 1) * -2);
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d8101d7 FUN_14d8101d7 body=137 status=ok
// SIG undefined FUN_14d8101d7(void)

/* WARNING: Removing unreachable block (ram,0x0001568bc45c) */
/* WARNING: Removing unreachable block (ram,0x00014d810263) */

void FUN_14d8101d7(void)

{
  return;
}



// FUNCTION 14d810263 FUN_14d810263 body=14 status=ok
// SIG undefined FUN_14d810263(void)

void FUN_14d810263(void)

{
  return;
}



// FUNCTION 14d810373 FUN_14d810373 body=434 status=ok
// SIG undefined FUN_14d810373(void)

/* WARNING: Removing unreachable block (ram,0x00014d8103fd) */
/* WARNING: Removing unreachable block (ram,0x00014d810483) */
/* WARNING: Removing unreachable block (ram,0x000165041c9f) */
/* WARNING: Removing unreachable block (ram,0x00014d810489) */

void FUN_14d810373(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  undefined8 in_R11;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong uStackX_10;
  
  uVar4 = *(ulonglong *)(unaff_R13 + -0x28);
  uVar5 = (~unaff_R15 | uVar4) & (~(~uVar4 & unaff_R15) + unaff_R15) - uVar4 ^ 0xffffffffffffffff;
  uVar4 = *(ulonglong *)(unaff_R13 + -0x70);
  uVar1 = *(undefined8 *)(unaff_R13 + -8);
  uVar2 = *(undefined8 *)(unaff_R13 + -0x98);
  pcVar3 = FUN_165cb34a9;
  FUN_165cb34a9();
  uVar4 = uVar4 ^ (ulonglong)pcVar3;
  uVar5 = FUN_1652822b8(uVar4,uVar5,param_3,uVar2);
  uVar5 = ~(uStackX_10 & uVar5) & (uStackX_10 | uVar5);
  *(undefined8 *)(uVar5 - 8) = in_R11;
  *(undefined8 *)(uVar5 - 0x10) = uVar1;
  *(undefined8 *)(uVar5 - 0x18) = uVar1;
  *(undefined8 *)(uVar5 - 0x10) = *(undefined8 *)(uVar5 - 8);
  *(ulonglong *)(uVar5 - 0x18) = uVar4;
  *(undefined8 *)(uVar5 - 0x20) = unaff_RBX;
  FUN_1616f7b58(uVar5 - 8,&LAB_1616f7b8f);
  return;
}



// FUNCTION 14d81048f FUN_14d81048f body=35 status=ok
// SIG undefined FUN_14d81048f(void)

void FUN_14d81048f(void)

{
  ulonglong in_R9;
  longlong *unaff_R13;
  ulonglong unaff_R15;
  
  *unaff_R13 = unaff_R15 + in_R9 + (unaff_R15 & in_R9) * -2;
  return;
}



// FUNCTION 14d8104b2 FUN_14d8104b2 body=20 status=ok
// SIG undefined FUN_14d8104b2(void)

void FUN_14d8104b2(void)

{
  undefined8 *unaff_R13;
  undefined8 unaff_R15;
  
  *unaff_R13 = unaff_R15;
  return;
}



// FUNCTION 14d8104c6 FUN_14d8104c6 body=93 status=ok
// SIG undefined FUN_14d8104c6(void)

/* WARNING: Removing unreachable block (ram,0x000161b32508) */
/* WARNING: Removing unreachable block (ram,0x000161b3250e) */
/* WARNING: Removing unreachable block (ram,0x000161b32519) */
/* WARNING: Removing unreachable block (ram,0x000161b325a9) */
/* WARNING: Removing unreachable block (ram,0x000161b325af) */
/* WARNING: Removing unreachable block (ram,0x00015718e149) */
/* WARNING: Removing unreachable block (ram,0x00015718e1af) */
/* WARNING: Removing unreachable block (ram,0x00015718e1b4) */
/* WARNING: Removing unreachable block (ram,0x000162d666e3) */
/* WARNING: Removing unreachable block (ram,0x000162d666ee) */
/* WARNING: Removing unreachable block (ram,0x000162d66772) */
/* WARNING: Removing unreachable block (ram,0x000162d66778) */
/* WARNING: Removing unreachable block (ram,0x000162d6677d) */
/* WARNING: Removing unreachable block (ram,0x000162d667bc) */
/* WARNING: Removing unreachable block (ram,0x000162d667c0) */
/* WARNING: Removing unreachable block (ram,0x0001660ba013) */
/* WARNING: Removing unreachable block (ram,0x0001611f9479) */
/* WARNING: Removing unreachable block (ram,0x0001611f9502) */
/* WARNING: Removing unreachable block (ram,0x0001611f9507) */
/* WARNING: Removing unreachable block (ram,0x0001611f950d) */
/* WARNING: Removing unreachable block (ram,0x0001611f9512) */
/* WARNING: Removing unreachable block (ram,0x0001660ba0a4) */
/* WARNING: Removing unreachable block (ram,0x0001660ba0aa) */
/* WARNING: Removing unreachable block (ram,0x0001660ba0af) */
/* WARNING: Removing unreachable block (ram,0x0001660ba139) */
/* WARNING: Removing unreachable block (ram,0x0001660ba13f) */
/* WARNING: Removing unreachable block (ram,0x000161b32491) */
/* WARNING: Removing unreachable block (ram,0x000161b324fd) */
/* WARNING: Removing unreachable block (ram,0x000162d666e9) */
/* WARNING: Removing unreachable block (ram,0x00014d810518) */
/* WARNING: Removing unreachable block (ram,0x00014d81051e) */
/* WARNING: Removing unreachable block (ram,0x00014d810523) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8104c6(void)

{
  FUN_166c185d1();
  return;
}



// FUNCTION 14d810523 FUN_14d810523 body=178 status=ok
// SIG undefined FUN_14d810523(void)

void FUN_14d810523(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_16534ba51(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d8105d6 FUN_14d8105d6 body=21 status=ok
// SIG undefined FUN_14d8105d6(void)

void FUN_14d8105d6(void)

{
  FUN_14d7c1e39();
  return;
}



// FUNCTION 14d8107dc FUN_14d8107dc body=141 status=ok
// SIG undefined FUN_14d8107dc(void)

void FUN_14d8107dc(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  longlong unaff_RDI;
  undefined1 local_res8 [32];
  
  FUN_1612823e5(param_1,local_res8,param_3 + 1,-1 - (*(ulonglong *)(unaff_RDI + -0x60) & param_1));
  return;
}



// FUNCTION 14d81086a FUN_14d81086a body=150 status=ok
// SIG undefined FUN_14d81086a(void)

/* WARNING: Instruction at (ram,0x00014d810883) overlaps instruction at (ram,0x00014d810880)
    */

void FUN_14d81086a(ulonglong param_1)

{
  uint uVar1;
  ulonglong in_RAX;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  bool in_ZF;
  char *pcVar2;
  
  if (in_ZF) {
    uVar1 = (int)in_RAX - 0xbab884;
    pcVar2 = (char *)(ulonglong)uVar1;
    *pcVar2 = *pcVar2 + (char)uVar1;
    pcVar2[0x33] = pcVar2[0x33] + (char)param_1;
    register0x00000020 = (BADSPACEBASE *)&stack0xfffffffffffffff8;
    in_RAX = (ulonglong)(uint)(int)(short)uVar1;
  }
  else {
    unaff_RSI = *(ulonglong *)(unaff_RDI + -0x68);
  }
  *(undefined8 *)((longlong)register0x00000020 + -8) = unaff_R15;
  *(ulonglong *)((longlong)register0x00000020 + -0x10) = in_RAX;
  *(undefined4 *)((longlong)register0x00000020 + -0x18) = 0xfb110a16;
  *(undefined4 *)((longlong)register0x00000020 + -0x10) =
       *(undefined4 *)((longlong)register0x00000020 + -0x18);
  *(undefined4 *)((longlong)register0x00000020 + -0xc) = 0xffffffff;
  *(undefined8 *)((longlong)register0x00000020 + -8) = unaff_R12;
  *(undefined8 *)((longlong)register0x00000020 + -8) = unaff_R13;
  FUN_15afdd8bd((char)param_1,unaff_RSI ^ param_1);
  return;
}



// FUNCTION 14d810900 FUN_14d810900 body=159 status=ok
// SIG undefined FUN_14d810900(void)

void FUN_14d810900(void)

{
  FUN_1612574f6();
  return;
}



// FUNCTION 14d8109a0 FUN_14d8109a0 body=140 status=ok
// SIG undefined FUN_14d8109a0(void)

void FUN_14d8109a0(ulonglong param_1,undefined8 param_2)

{
  ulonglong unaff_R12;
  
  FUN_166653f62(param_1,param_2,-1 - (unaff_R12 & param_1),FUN_166653f62);
  return;
}



// FUNCTION 14d810b5b FUN_14d810b5b body=152 status=ok
// SIG undefined FUN_14d810b5b(void)

void FUN_14d810b5b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  FUN_15697d774(in_stack_00000008,in_stack_00000010,param_3);
  return;
}



// FUNCTION 14d810bfa FUN_14d810bfa body=126 status=ok
// SIG undefined FUN_14d810bfa(void)

undefined8 FUN_14d810bfa(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d810da7 FUN_14d810da7 body=152 status=ok
// SIG undefined FUN_14d810da7(void)

void FUN_14d810da7(undefined8 param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  ulonglong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)0x15731eb46)
            (0x15731eb46,0xffffffffffffffb8,
             *(ulonglong *)(unaff_R13 + -0x88) + unaff_R15 +
             (*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) * -2,
             ~((unaff_R15 - (param_3 | unaff_R15)) + param_4) & unaff_RSI);
  return;
}



// FUNCTION 14d810e3f FUN_14d810e3f body=159 status=ok
// SIG undefined FUN_14d810e3f(void)

/* WARNING: Removing unreachable block (ram,0x00014d810f28) */
/* WARNING: Removing unreachable block (ram,0x00014d810f76) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d810e3f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  ulonglong *in_RAX;
  ulonglong uVar2;
  ulonglong unaff_RBX;
  longlong unaff_RDI;
  ulonglong in_R11;
  bool bVar3;
  
  uVar2 = *in_RAX;
  *in_RAX = ~*in_RAX;
  *in_RAX = *in_RAX | in_R11;
  uVar1 = *in_RAX;
  *in_RAX = 0;
  *in_RAX = *in_RAX + ~((~unaff_RBX | uVar2) & uVar1);
  uVar2 = ~in_R11 | param_5;
  bVar3 = (longlong)(~in_R11 & ~param_5 | in_R11) < 0;
  if ((!bVar3) && (bVar3)) {
    FUN_1646fa5ef(uVar2,0xffffffffe253b44d,
                  *(ulonglong *)(unaff_RDI + -0x70) + uVar2 +
                  (*(ulonglong *)(unaff_RDI + -0x70) & uVar2) * -2);
    FUN_162340b0e();
    return;
  }
  FUN_16622bb07(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d810edf FUN_14d810edf body=753 status=ok
// SIG undefined FUN_14d810edf(void)

/* WARNING: Removing unreachable block (ram,0x00014d810f28) */
/* WARNING: Removing unreachable block (ram,0x00014d810f76) */

void FUN_14d810edf(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1646fa5ef(param_1,0xffffffffe253b44d,
                *(ulonglong *)(unaff_RDI + -0x70) + param_1 +
                (*(ulonglong *)(unaff_RDI + -0x70) & param_1) * -2);
  FUN_162340b0e();
  return;
}



// FUNCTION 14d8110d2 FUN_14d8110d2 body=124 status=ok
// SIG undefined FUN_14d8110d2(void)

/* WARNING: Removing unreachable block (ram,0x00014d8111d4) */

void FUN_14d8110d2(uint param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  uint unaff_EBX;
  ulonglong unaff_R12;
  
  uVar2 = (ulonglong)(param_1 | unaff_EBX);
  pcVar3 = FUN_1665bc5fb;
  uVar1 = FUN_1665bc5fb();
  if (-(~unaff_R12 + 2) < ~uVar1) {
    FUN_161df1cf0();
    return;
  }
  FUN_16105debb(uVar2,pcVar3);
  return;
}



// FUNCTION 14d811152 FUN_14d811152 body=134 status=ok
// SIG undefined FUN_14d811152(void)

/* WARNING: Removing unreachable block (ram,0x00014d8111d4) */

void FUN_14d811152(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  undefined8 uStackX_8;
  
  if (-(~uStackX_8 + 2) < ~in_RAX) {
    FUN_161df1cf0();
    return;
  }
  FUN_16105debb(param_1,param_2);
  return;
}



// FUNCTION 14d8111da FUN_14d8111da body=127 status=ok
// SIG undefined FUN_14d8111da(void)

/* WARNING: Instruction at (ram,0x00014d811234) overlaps instruction at (ram,0x00014d811233)
    */

void FUN_14d8111da(void)

{
  ulonglong *puVar1;
  ulonglong unaff_R13;
  ulonglong uVar2;
  ulonglong unaff_R14;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  
  uVar2 = ~(~unaff_R13 | ~unaff_R14) ^ 0xffffffffffffffff;
  puVar1 = (ulonglong *)(&stack0xfffffffff0fbacce + uVar2);
  *puVar1 = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
            (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((longlong)uVar2 < 0) * 0x80 |
            (ulonglong)(uVar2 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
            (ulonglong)((POPCOUNT(uVar2 & 0xff) & 1U) == 0) * 4 | (ulonglong)(in_ID & 1) * 0x200000
            | (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
            (ulonglong)(in_AC & 1) * 0x40000;
  *puVar1 = *puVar1 | 0x800;
  FUN_161d4a75d();
  return;
}



// FUNCTION 14d81143a FUN_14d81143a body=300 status=ok
// SIG undefined FUN_14d81143a(void)

void FUN_14d81143a(ulonglong param_1)

{
  ulonglong in_stack_00000018;
  longlong in_stack_00000028;
  
  FUN_156f3cecd(param_1,in_stack_00000018 | param_1);
  FUN_1619b37cd(in_stack_00000028 + in_stack_00000018);
  return;
}



// FUNCTION 14d811568 FUN_14d811568 body=61 status=ok
// SIG undefined FUN_14d811568(void)

void FUN_14d811568(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14d81186b FUN_14d81186b body=127 status=ok
// SIG undefined FUN_14d81186b(void)

void FUN_14d81186b(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong *unaff_RSI;
  undefined8 local_res8;
  
  uVar1 = *unaff_RSI;
  FUN_16514f8de(param_1,~((~(~local_res8 & uVar1) + uVar1) - local_res8 & (~uVar1 | local_res8)));
  return;
}



// FUNCTION 14d8118ea FUN_14d8118ea body=17 status=ok
// SIG undefined FUN_14d8118ea(void)

void FUN_14d8118ea(void)

{
  return;
}



// FUNCTION 14d811987 FUN_14d811987 body=323 status=ok
// SIG undefined FUN_14d811987(void)

/* WARNING: Removing unreachable block (ram,0x00014d811a36) */

void FUN_14d811987(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if ((longlong)(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15) < 0) {
    FUN_1565e99e3();
    return;
  }
  FUN_1565e99e3();
  return;
}



// FUNCTION 14d811acc FUN_14d811acc body=66 status=ok
// SIG undefined FUN_14d811acc(void)

void FUN_14d811acc(void)

{
  FUN_14d7c17aa();
  return;
}



// FUNCTION 14d811c04 FUN_14d811c04 body=339 status=ok
// SIG undefined FUN_14d811c04(void)

/* WARNING: Removing unreachable block (ram,0x00014d811caf) */
/* WARNING: Removing unreachable block (ram,0x00014d811cb5) */
/* WARNING: Removing unreachable block (ram,0x000157294ef5) */

void FUN_14d811c04(ulonglong param_1,DWORD param_2,LPVOID param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 unaff_RBX;
  longlong unaff_RDI;
  ulonglong uStackX_18;
  
  uVar3 = *(ulonglong *)(unaff_RDI + -0x98);
  uVar2 = ~(uStackX_18 & param_1) & (uStackX_18 | param_1);
  puVar1 = (undefined8 *)(uVar2 - 8);
  *puVar1 = unaff_RBX;
  *(undefined8 *)(uVar2 - 0x10) = *puVar1;
  *puVar1 = &DAT_162ab8699;
                    /* WARNING: Could not recover jumptable at 0x000162ab867f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree((HANDLE)((uVar3 & param_1 ^ 0xffffffffffffffff) & (uVar3 | param_1)),param_2,param_3);
  return;
}



// FUNCTION 14d811d59 FUN_14d811d59 body=125 status=ok
// SIG undefined FUN_14d811d59(void)

void FUN_14d811d59(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  FUN_1624f1f92(param_1,unaff_retaddr,param_3);
  return;
}



// FUNCTION 14d811dd7 FUN_14d811dd7 body=17 status=ok
// SIG undefined FUN_14d811dd7(void)

void FUN_14d811dd7(undefined8 param_1)

{
  FUN_15751fa1b(param_1,&DAT_14d7afcbf);
  return;
}



// FUNCTION 14d811de8 FUN_14d811de8 body=274 status=ok
// SIG undefined FUN_14d811de8(void)

/* WARNING: Removing unreachable block (ram,0x00014d811ebd) */

void FUN_14d811de8(undefined1 param_1,longlong param_2)

{
  if (param_2 == 0x85e33) {
    return;
  }
  if (param_2 == 0x866ef) {
    FUN_16242070c();
    thunk_FUN_165310862();
    return;
  }
  FUN_162420741(param_1,param_2);
  return;
}



// FUNCTION 14d811efc FUN_14d811efc body=162 status=ok
// SIG undefined FUN_14d811efc(void)

/* WARNING: Removing unreachable block (ram,0x00014d811f84) */

void FUN_14d811efc(void)

{
  ushort *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_R12;
  longlong unaff_R13;
  undefined8 unaff_R14;
  longlong unaff_R15;
  longlong unaff_retaddr;
  
  *(undefined8 *)(&stack0xfffffffffe0b4b91 + unaff_retaddr) = unaff_RDI;
  *(undefined8 *)(unaff_R13 + unaff_R15) = in_R11;
  *(undefined8 *)(&stack0xfffffffffe0b4bb1 + unaff_retaddr) = unaff_RSI;
  *(undefined8 *)(&stack0xfffffffffe0b4ba9 + unaff_retaddr) = unaff_RBX;
  puVar1 = (ushort *)(&stack0xfffffffffe0b4bb9 + unaff_retaddr);
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 | 0x100;
  *puVar1 = ~*puVar1;
  uVar2 = *(undefined8 *)(&stack0xfffffffffe0b4ba9 + unaff_retaddr);
  lVar3 = *(longlong *)(&stack0xfffffffffe0b4bc1 + unaff_retaddr);
  *(undefined8 *)(lVar3 + -8) = unaff_R14;
  *(undefined8 *)(lVar3 + -0x10) = uVar2;
  *(undefined8 *)(lVar3 + -0x18) = unaff_R12;
  *(undefined8 *)(lVar3 + -0x10) = *(undefined8 *)(lVar3 + -8);
  *(undefined8 *)(lVar3 + -0x18) = in_R10;
  *(undefined1 **)(lVar3 + -8) = &LAB_164fcba9a;
  FUN_14d7a694d();
  return;
}



// FUNCTION 14d812020 FUN_14d812020 body=143 status=ok
// SIG undefined FUN_14d812020(void)

void FUN_14d812020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14df981a4(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d81227d FUN_14d81227d body=486 status=ok
// SIG undefined FUN_14d81227d(void)

/* WARNING: Removing unreachable block (ram,0x00014d81231d) */
/* WARNING: Removing unreachable block (ram,0x00014d812323) */
/* WARNING: Removing unreachable block (ram,0x000156355f0a) */
/* WARNING: Removing unreachable block (ram,0x00014d8123cb) */
/* WARNING: Removing unreachable block (ram,0x00014d8123d1) */

void FUN_14d81227d(ulonglong param_1)

{
  longlong unaff_RDI;
  
  (*(code *)0x165febda7)
            (param_1,~(*(ulonglong *)(unaff_RDI + -0x68) & param_1) &
                     (*(ulonglong *)(unaff_RDI + -0x68) | param_1),
             *(ulonglong *)(unaff_RDI + -0x70) ^ param_1);
  return;
}



// FUNCTION 14d8124f8 FUN_14d8124f8 body=207 status=ok
// SIG undefined FUN_14d8124f8(void)

/* WARNING: Removing unreachable block (ram,0x0001612af1be) */
/* WARNING: Removing unreachable block (ram,0x0001612af262) */
/* WARNING: Removing unreachable block (ram,0x0001612af266) */
/* WARNING: Removing unreachable block (ram,0x00016198f5f9) */
/* WARNING: Removing unreachable block (ram,0x00014d812573) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8124f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  if (-1 < *(longlong *)(unaff_RDI + -8)) {
    FUN_1621bbb25(param_1,param_2,param_3,FUN_1621bbb25,*(undefined8 *)(unaff_RDI + -0x90));
    return;
  }
  FUN_1612af10a();
  return;
}



// FUNCTION 14d8126a3 FUN_14d8126a3 body=52 status=ok
// SIG undefined FUN_14d8126a3(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d81273c) */
/* WARNING: Removing unreachable block (ram,0x00014d812747) */
/* WARNING: Removing unreachable block (ram,0x00014d812742) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_14d8126a3(uint param_1)

{
  byte bVar1;
  undefined4 uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  char *unaff_RBX;
  longlong unaff_RBP;
  uint *unaff_RSI;
  uint *puStackX_8;
  
  *(uint *)(unaff_RBP + -0x1909dbd8) = *(uint *)(unaff_RBP + -0x1909dbd8) & (uint)unaff_RSI;
  uVar3 = in_RAX & 0xffffffff;
  bVar1 = (byte)param_1 ^ 0x7a;
  out(0xb7,bVar1);
  if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puStackX_8 = *unaff_RSI;
    unaff_RSI = unaff_RSI + 1;
    puStackX_8 = puStackX_8 + 1;
  }
  *unaff_RBX = *unaff_RBX;
  if (*unaff_RBX < '\0') {
    *puStackX_8 = param_1 ^ 0x7a;
    out(0x88,param_1 ^ 0x7a);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = in(0xff);
  if ('\0' < *unaff_RBX) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return uVar2;
}



// FUNCTION 14d812747 FUN_14d812747 body=49 status=ok
// SIG undefined FUN_14d812747(void)

void FUN_14d812747(void)

{
  return;
}



// FUNCTION 14d812bdf FUN_14d812bdf body=136 status=ok
// SIG undefined FUN_14d812bdf(void)

/* WARNING: Instruction at (ram,0x00014d812c44) overlaps instruction at (ram,0x00014d812c43)
    */
/* WARNING: Removing unreachable block (ram,0x00014d812c16) */
/* WARNING: Removing unreachable block (ram,0x00014d812c43) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000018 : 0x00014d812c5c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d812bdf(void)

{
  return;
}



// FUNCTION 14d812c6e FUN_14d812c6e body=111 status=ok
// SIG undefined FUN_14d812c6e(void)

ulonglong FUN_14d812c6e(undefined1 param_1)

{
  undefined1 uVar1;
  short unaff_BX;
  short *unaff_RBP;
  undefined8 unaff_R12;
  short unaff_R15W;
  ulonglong unaff_retaddr;
  longlong in_stack_00000028;
  
  *unaff_RBP = -0xff - (~(unaff_BX - unaff_R15W) + 2U);
                    /* WARNING: Read-only address (ram,0x00014d7ab87e) is written */
  LOCK();
  uVar1 = param_1;
  if ((char)unaff_retaddr != '\0') {
    unaff_retaddr = unaff_retaddr & 0xffffffffffffff00;
    uVar1 = uRam000000014d7ab87e;
  }
  uRam000000014d7ab87e = uVar1;
  UNLOCK();
  *(undefined8 *)(in_stack_00000028 + -8) = 0x683bcc2;
  *(undefined8 *)(in_stack_00000028 + -0x10) = unaff_R12;
  *(undefined8 *)(in_stack_00000028 + -0x18) = unaff_R12;
  *(code **)(in_stack_00000028 + -0x10) = FUN_165c7153c;
  return unaff_retaddr;
}



// FUNCTION 14d812da2 FUN_14d812da2 body=145 status=ok
// SIG undefined FUN_14d812da2(void)

void FUN_14d812da2(ulonglong param_1)

{
  ulonglong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_165250d4c(((unaff_RSI | unaff_R15) - (~(param_1 & unaff_R15) | unaff_RSI | unaff_R15)) +
                ~(param_1 & unaff_R15),*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14d812e34 FUN_14d812e34 body=101 status=ok
// SIG undefined FUN_14d812e34(void)

void FUN_14d812e34(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined4 in_register_00000004;
  undefined8 uVar3;
  undefined8 unaff_RBP;
  undefined8 unaff_R14;
  ulonglong uVar4;
  undefined8 local_res10;
  undefined8 local_res18;
  
  uVar2 = rdtsc();
  uVar3 = CONCAT44((int)((ulonglong)param_2 >> 0x20),(int)((ulonglong)uVar2 >> 0x20));
  *(undefined8 *)(local_res18 + -8) = uVar3;
  *(undefined8 *)(local_res18 + -0x10) = uVar3;
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
  *(ulonglong *)(local_res18 + -0x20) = CONCAT44(in_register_00000004,(int)uVar2);
  *(undefined4 *)(local_res18 + -0x20) = 0x59f84e90;
  *(undefined4 *)(local_res18 + -0x1c) = 0;
  uVar1 = *(ulonglong *)(local_res18 + -0x20);
  uVar4 = *(ulonglong *)(local_res18 + -0x18);
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)((uVar4 & 1) != 0) |
       (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x18) = unaff_RBP;
  *(ulonglong *)(local_res18 + -8) = (uVar1 ^ 0x5a139e20) - 0x8a2c86;
  FUN_165c7153c(param_1,*(undefined8 *)(local_res18 + -0x10));
  return;
}



// FUNCTION 14d812e99 FUN_14d812e99 body=70 status=ok
// SIG undefined FUN_14d812e99(void)

void FUN_14d812e99(void)

{
  return;
}



// FUNCTION 14d812edf FUN_14d812edf body=135 status=ok
// SIG undefined FUN_14d812edf(void)

void FUN_14d812edf(undefined1 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 unaff_R13B;
  undefined7 unaff_000000a9;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(CONCAT71(unaff_000000a9,unaff_R13B) + -0x90);
  uVar2 = ~uVar1;
  FUN_14d8eb5c6(param_1,0xffffffffffffffff - (~unaff_R15 | uVar1) |
                        ~((uVar2 + unaff_R15) - (uVar2 & unaff_R15)));
  return;
}



// FUNCTION 14d812f67 FUN_14d812f67 body=118 status=ok
// SIG undefined FUN_14d812f67(void)

void FUN_14d812f67(void)

{
  return;
}



// FUNCTION 14d813134 FUN_14d813134 body=15 status=ok
// SIG undefined FUN_14d813134(void)

undefined8 FUN_14d813134(void)

{
  undefined4 in_EAX;
  undefined4 *unaff_R15;
  undefined8 uStackX_8;
  
  *unaff_R15 = in_EAX;
  return uStackX_8;
}



// FUNCTION 14d8131f0 FUN_14d8131f0 body=151 status=ok
// SIG undefined FUN_14d8131f0(void)

void FUN_14d8131f0(undefined8 param_1,undefined8 param_2)

{
  ulonglong *in_RAX;
  ulonglong unaff_RBP;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  
  *in_RAX = ~*in_RAX;
  *in_RAX = ((unaff_R15 - 1) - ~(~unaff_R14 | ~unaff_R15)) - *in_RAX;
  *in_RAX = unaff_RBP & *in_RAX ^ 0xffffffffffffffff;
  FUN_14dc5c038(param_1,param_2,FUN_14dc5c038);
  return;
}



// FUNCTION 14d813288 FUN_14d813288 body=139 status=ok
// SIG undefined FUN_14d813288(void)

void FUN_14d813288(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStackX_8;
  undefined8 local_res18;
  
  FUN_1627c5ecf(uStackX_8,FUN_1627c5ecf,param_3,local_res18);
  return;
}



// FUNCTION 14d813315 FUN_14d813315 body=619 status=ok
// SIG undefined FUN_14d813315(void)

/* WARNING: Removing unreachable block (ram,0x00014d813618) */
/* WARNING: Removing unreachable block (ram,0x00014d81361e) */
/* WARNING: Removing unreachable block (ram,0x00014d813629) */
/* WARNING: Removing unreachable block (ram,0x00014d8133d2) */
/* WARNING: Removing unreachable block (ram,0x00014d81344d) */
/* WARNING: Removing unreachable block (ram,0x0001565a3ae2) */
/* WARNING: Removing unreachable block (ram,0x00014d813453) */
/* WARNING: Removing unreachable block (ram,0x0001621784f7) */
/* WARNING: Removing unreachable block (ram,0x00014d81357f) */
/* WARNING: Removing unreachable block (ram,0x00014d813585) */
/* WARNING: Removing unreachable block (ram,0x00014d81358a) */
/* WARNING: Removing unreachable block (ram,0x00016284a93f) */
/* WARNING: Removing unreachable block (ram,0x00016217854e) */
/* WARNING: Removing unreachable block (ram,0x000162178552) */
/* WARNING: Removing unreachable block (ram,0x00014d8133bb) */

void FUN_14d813315(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong in_RAX;
  ulonglong in_R10;
  
  if ((in_RAX & 0x80000000) != 0) {
    return;
  }
  FUN_16618b05e(param_1,*(ulonglong *)(param_3 + -0x70) | in_R10);
  return;
}



// FUNCTION 14d81358a FUN_14d81358a body=152 status=ok
// SIG undefined FUN_14d81358a(void)

/* WARNING: Removing unreachable block (ram,0x00014d813618) */
/* WARNING: Removing unreachable block (ram,0x00014d813629) */
/* WARNING: Removing unreachable block (ram,0x00014d81361e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d81358a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000008;
  
  FUN_1656aba32(param_1,param_2,param_3,in_stack_00000008);
  return;
}



// FUNCTION 14d813629 FUN_14d813629 body=81 status=ok
// SIG undefined FUN_14d813629(void)

void FUN_14d813629(void)

{
  ulonglong *unaff_RBX;
  longlong unaff_R15;
  
  *unaff_RBX = ~*unaff_RBX;
  *unaff_RBX = unaff_R15 - *unaff_RBX;
  return;
}



// FUNCTION 14d8137c4 FUN_14d8137c4 body=175 status=ok
// SIG undefined FUN_14d8137c4(void)

undefined8 FUN_14d8137c4(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d813a3c FUN_14d813a3c body=239 status=ok
// SIG undefined FUN_14d813a3c(void)

/* WARNING: Removing unreachable block (ram,0x00014d813adc) */

void * FUN_14d813a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    ulonglong param_5,longlong param_6)

{
  undefined8 uVar1;
  int in_EAX;
  void *pvVar2;
  undefined8 unaff_RBX;
  int in_R10D;
  undefined8 unaff_R13;
  ulonglong uVar3;
  uint *local_res8;
  undefined8 uStackX_10;
  undefined8 local_res18;
  
  *local_res8 = *local_res8 ^ 0xffffffff;
  *local_res8 = (in_R10D - in_EAX) - *local_res8;
  pvVar2 = ProcessEnvironmentBlock;
  *(undefined8 *)(param_6 + -8) = param_1;
  *(undefined8 *)(param_6 + -0x10) = param_1;
  *(ulonglong *)(param_6 + -0x18) =
       (ulonglong)((param_5 & 0x4000) != 0) * 0x4000 | (ulonglong)((param_5 & 0x800) != 0) * 0x800 |
       (ulonglong)((param_5 & 0x400) != 0) * 0x400 | (ulonglong)((param_5 & 0x200) != 0) * 0x200 |
       (ulonglong)((param_5 & 0x100) != 0) * 0x100 | (ulonglong)((param_5 & 0x80) != 0) * 0x80 |
       (ulonglong)((param_5 & 0x40) != 0) * 0x40 | (ulonglong)((param_5 & 0x10) != 0) * 0x10 |
       (ulonglong)((param_5 & 4) != 0) * 4 | (ulonglong)((param_5 & 1) != 0) |
       (ulonglong)((param_5 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((param_5 & 0x40000) != 0) * 0x40000;
  uVar3 = *(ulonglong *)(param_6 + -0x18);
  *(ulonglong *)(param_6 + -0x18) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_6 + -0x20) = param_2;
  *(undefined8 *)(param_6 + -0x28) = local_res18;
  uVar1 = *(undefined8 *)(param_6 + -0x20);
  uVar3 = *(ulonglong *)(param_6 + -0x18);
  *(undefined8 *)(param_6 + -0x18) = unaff_RBX;
  *(ulonglong *)(param_6 + -0x20) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_6 + -8) = 0x12caede;
  if ((*(ulonglong *)(param_6 + -0x20) & 1) != 0) {
    pvVar2 = (void *)FUN_165cd9bbf(0x12caede,uVar1,uStackX_10);
    return pvVar2;
  }
  *(undefined8 *)(param_6 + -0x28cf) = unaff_R13;
  *(undefined8 *)(param_6 + -0x28d7) = unaff_R13;
  *(undefined **)(param_6 + -0x28cf) = &DAT_156ef2e4a;
  return pvVar2;
}



// FUNCTION 14d813b67 FUN_14d813b67 body=420 status=ok
// SIG undefined FUN_14d813b67(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d813b94) */
/* WARNING: Removing unreachable block (ram,0x00014d813be8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d813b67(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
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
  ulonglong uVar20;
  undefined8 unaff_retaddr;
  ulonglong local_res8;
  undefined8 *local_res10;
  
  bVar15 = (local_res8 & 0x4000) != 0;
  bVar14 = (local_res8 & 0x800) != 0;
  bVar13 = (local_res8 & 0x200) != 0;
  bVar12 = (local_res8 & 0x100) != 0;
  bVar11 = (local_res8 & 0x80) != 0;
  bVar10 = (local_res8 & 0x40) != 0;
  bVar9 = (local_res8 & 0x10) != 0;
  bVar8 = (local_res8 & 4) != 0;
  bVar7 = (local_res8 & 1) != 0;
  bVar19 = (local_res8 & 0x200000) != 0;
  bVar16 = (local_res8 & 0x40000) != 0;
  bVar18 = 0;
  bVar17 = 0;
  pcVar1 = (code *)swi(0x2e);
  uVar5 = (*pcVar1)(unaff_retaddr,param_2,param_3);
  *local_res10 = unaff_RBP;
  local_res10[-1] = unaff_RBP;
  local_res10[-2] = uVar5;
  *(undefined4 *)(local_res10 + -2) = 0x3f82ccf;
  *(undefined4 *)((longlong)local_res10 + -0xc) = 0;
  lVar2 = local_res10[-2];
  local_res10[-2] =
       (ulonglong)(bVar15 & 1) * 0x4000 | (ulonglong)(bVar14 & 1) * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 | (ulonglong)(bVar13 & 1) * 0x200 |
       (ulonglong)(bVar12 & 1) * 0x100 | (ulonglong)(bVar11 & 1) * 0x80 |
       (ulonglong)(bVar10 & 1) * 0x40 | (ulonglong)(bVar9 & 1) * 0x10 | (ulonglong)(bVar8 & 1) * 4 |
       (ulonglong)(bVar7 & 1) | (ulonglong)(bVar19 & 1) * 0x200000 |
       (ulonglong)(bVar18 & 1) * 0x100000 | (ulonglong)(bVar17 & 1) * 0x80000 |
       (ulonglong)(bVar16 & 1) * 0x40000;
  local_res10[-3] = param_2;
  *(undefined4 *)(local_res10 + -4) = 0x44595f0b;
  *(undefined4 *)((longlong)local_res10 + -0x1c) = 0;
  uVar3 = local_res10[-4];
  local_res10[-4] = unaff_retaddr;
  local_res10[-5] = unaff_R13;
  uVar6 = local_res10[-4];
  uVar4 = local_res10[-3];
  uVar20 = local_res10[-2];
  local_res10[-2] = unaff_R12;
  local_res10[-3] =
       (ulonglong)((uVar20 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar20 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar20 & 0x400) != 0) * 0x400 | (ulonglong)((uVar20 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar20 & 0x100) != 0) * 0x100 | (ulonglong)((uVar20 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar20 & 0x40) != 0) * 0x40 | (ulonglong)((uVar20 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar20 & 4) != 0) * 4 | (ulonglong)((uVar20 & 1) != 0) |
       (ulonglong)((uVar20 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar20 & 0x40000) != 0) * 0x40000;
  local_res10[-4] = uVar5;
  *(undefined4 *)(local_res10 + -4) = 0x5fc0ebe0;
  *(undefined4 *)((longlong)local_res10 + -0x1c) = 0;
  uVar20 = local_res10[-4];
  local_res10[-4] = unaff_RDI;
  *(ulonglong *)((longlong)local_res10 + ((uVar20 ^ 0x5fc0ebe8) - 8)) = lVar2 - (uVar3 ^ 0x44358140)
  ;
  local_res10[-5] = FUN_1565e32c3;
  FUN_1615b380f(uVar6,uVar4);
  local_res10[-4] = uVar6;
  local_res10[-5] = uVar6;
  local_res10[-6] = FUN_1615b380f;
  *(undefined4 *)(local_res10 + -7) = 0x83323454;
  *(undefined4 *)((longlong)local_res10 + -0x34) = 0xffffffff;
  local_res10[-4] = *(undefined8 *)((longlong)local_res10 + local_res10[-7] + 0x7ccdcb94);
  local_res10[-3] = 0x7c5af84d;
  local_res10[-3] = local_res10[-3] ^ 0x7c5af84d;
  local_res10[-3] = local_res10[-3] + -0x1565e336e;
  local_res10[-3] = -local_res10[-3];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d813c81 FUN_14d813c81 body=161 status=ok
// SIG undefined FUN_14d813c81(void)

void FUN_14d813c81(void)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  char cVar5;
  ulonglong in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  ulonglong uVar6;
  undefined1 local_res8;
  undefined2 local_res10;
  undefined6 uStackX_12;
  undefined8 local_res18;
  
                    /* WARNING: Read-only address (ram,0x00014d7bdd1b) is written */
  LOCK();
  cVar5 = (char)in_RAX;
  if (cVar5 == '\0') {
    uRam000000014d7bdd1b = local_res8;
  }
  else {
    in_RAX = in_RAX & 0xffffffffffffff00;
  }
  UNLOCK();
  *(undefined8 *)(local_res18 + -8) = unaff_RBX;
  *(undefined8 *)(local_res18 + -0x10) = unaff_RBX;
  *(undefined4 *)(local_res18 + -0x18) = 0xf4ae757;
  *(undefined4 *)(local_res18 + -0x14) = 0;
  uVar2 = *(undefined8 *)(local_res18 + -0x18);
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((local_res10 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res10 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res10 & 0x200) != 0) * 0x200 | (ulonglong)(cVar5 < '\0') * 0x80 |
       (ulonglong)(cVar5 == '\0') * 0x40 | (ulonglong)((local_res10 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar5) & 1U) == 0) * 4 |
       (ulonglong)((uStackX_12 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_12 & 4) != 0) * 0x40000;
  puVar1 = (ulonglong *)(local_res18 + -0x20);
  *puVar1 = in_RAX;
  *(ulonglong *)(local_res18 + -0x28) = in_RAX;
  *(undefined4 *)(local_res18 + -0x28) = 0x8232bed;
  *(undefined4 *)(local_res18 + -0x24) = 0;
  uVar3 = *(ulonglong *)(local_res18 + -0x28);
  *(undefined8 *)(local_res18 + -0x28) = uVar2;
  *(ulonglong *)(local_res18 + -0x28) = *(longlong *)(local_res18 + -0x28) - (uVar3 ^ 0x3b720d6);
  uVar2 = *(undefined8 *)(local_res18 + -0x28);
  uVar3 = *puVar1;
  uVar6 = *(ulonglong *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x18) = unaff_R12;
  *puVar1 = (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800
            | (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200
            | (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)((uVar6 & 0x80) != 0) * 0x80 |
            (ulonglong)((uVar6 & 0x40) != 0) * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
            (ulonglong)((uVar6 & 4) != 0) * 4 | (ulonglong)((uVar6 & 1) != 0) |
            (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
            (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  *(ulonglong *)(local_res18 + -0x28) = uVar3;
  *(undefined4 *)(local_res18 + -0x28) = 0xa96b98e9;
  *(undefined4 *)(local_res18 + -0x24) = 0xffffffff;
  lVar4 = *(longlong *)(local_res18 + -0x28);
  *(undefined8 *)(local_res18 + -0x28) = unaff_R14;
  *(undefined8 *)((longlong)puVar1 + lVar4 + 0x5694672f) = uVar2;
  FUN_165f25174();
  return;
}



// FUNCTION 14d813d22 FUN_14d813d22 body=12 status=ok
// SIG undefined FUN_14d813d22(void)

void FUN_14d813d22(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_retaddr;
  
  FUN_15751fa1b(param_1,param_4,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14d813e60 FUN_14d813e60 body=300 status=ok
// SIG undefined FUN_14d813e60(void)

void FUN_14d813e60(ulonglong param_1)

{
  longlong in_RAX;
  ulonglong unaff_RBX;
  
  FUN_14e0f4342((-~unaff_RBX - (1 - in_RAX)) + (param_1 & unaff_RBX) * -2);
  FUN_162f44920();
  return;
}



// FUNCTION 14d814039 FUN_14d814039 body=315 status=ok
// SIG undefined FUN_14d814039(void)

/* WARNING: Removing unreachable block (ram,0x00014d81417c) */
/* WARNING: Removing unreachable block (ram,0x00014d814182) */
/* WARNING: Removing unreachable block (ram,0x000162e81cbf) */
/* WARNING: Removing unreachable block (ram,0x00014d8140da) */
/* WARNING: Removing unreachable block (ram,0x000165bf4495) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d814039(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_16122b3aa(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d8140da FUN_14d8140da body=168 status=ok
// SIG undefined FUN_14d8140da(void)

/* WARNING: Removing unreachable block (ram,0x00014d81417c) */
/* WARNING: Removing unreachable block (ram,0x00014d814182) */
/* WARNING: Removing unreachable block (ram,0x000162e81cbf) */

void FUN_14d8140da(longlong param_1)

{
  longlong unaff_RDI;
  
  FUN_1629a96db(*(longlong *)(unaff_RDI + -0x88) + param_1);
  return;
}



// FUNCTION 14d814182 FUN_14d814182 body=163 status=ok
// SIG undefined FUN_14d814182(void)

void FUN_14d814182(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  
  FUN_157520b30(param_1,param_2,FUN_157520b30,param_4,*(undefined8 *)(unaff_R13 + -8));
  return;
}



// FUNCTION 14d8142ba FUN_14d8142ba body=176 status=ok
// SIG undefined FUN_14d8142ba(void)

/* WARNING: Instruction at (ram,0x00014d8142d8) overlaps instruction at (ram,0x00014d8142d7)
    */
/* WARNING: Removing unreachable block (ram,0x00014d81435f) */
/* WARNING: Removing unreachable block (ram,0x00014d814365) */
/* WARNING: Removing unreachable block (ram,0x00014d8142d8) */
/* WARNING: Removing unreachable block (ram,0x00014d81436a) */

void FUN_14d8142ba(void)

{
  return;
}



// FUNCTION 14d81436a FUN_14d81436a body=152 status=ok
// SIG undefined FUN_14d81436a(void)

void FUN_14d81436a(void)

{
  return;
}



// FUNCTION 14d8144b4 thunk_FUN_15b1097be body=5 status=ok
// SIG undefined thunk_FUN_15b1097be(void)

void thunk_FUN_15b1097be(void)

{
  thunk_FUN_15b1097be();
  return;
}



// FUNCTION 14d8144b9 thunk_FUN_15b1097be body=5 status=ok
// SIG undefined thunk_FUN_15b1097be(void)

void thunk_FUN_15b1097be(void)

{
  FUN_15b1097be();
  return;
}



// FUNCTION 14d8145d6 FUN_14d8145d6 body=1233 status=ok
// SIG undefined FUN_14d8145d6(void)

/* WARNING: Removing unreachable block (ram,0x0001566a6497) */
/* WARNING: Removing unreachable block (ram,0x0001566a64a8) */
/* WARNING: Removing unreachable block (ram,0x0001566a64bf) */
/* WARNING: Removing unreachable block (ram,0x0001566a649d) */
/* WARNING: Removing unreachable block (ram,0x0001566a637f) */
/* WARNING: Removing unreachable block (ram,0x00014d814781) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14d8145d6(undefined8 param_1,short *param_2,undefined8 param_3,short param_4)

{
  ulonglong *puVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  code *pcVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 in_R11;
  longlong unaff_R13;
  ulonglong unaff_R15;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  bool bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong unaff_retaddr;
  undefined8 uStackX_8;
  undefined8 local_res10;
  ulonglong uStackX_18;
  ulonglong *local_res20;
  
  sVar5 = *param_2;
  *param_2 = 0;
  *param_2 = *param_2 + param_4 + sVar5;
  bVar23 = (uStackX_18 & 0x4000) != 0;
  bVar22 = (uStackX_18 & 0x800) != 0;
  bVar21 = (uStackX_18 & 0x200) != 0;
  bVar20 = (uStackX_18 & 0x100) != 0;
  bVar19 = (uStackX_18 & 0x80) != 0;
  bVar17 = (uStackX_18 & 0x40) != 0;
  bVar16 = (uStackX_18 & 0x10) != 0;
  bVar15 = (uStackX_18 & 4) != 0;
  bVar14 = (uStackX_18 & 1) != 0;
  bVar27 = (uStackX_18 & 0x200000) != 0;
  bVar24 = (uStackX_18 & 0x40000) != 0;
  bVar26 = 0;
  bVar25 = 0;
  pcVar7 = (code *)swi(0x2e);
  uVar9 = (*pcVar7)();
  *local_res20 = unaff_RBP;
  local_res20[-1] = unaff_RBP;
  local_res20[-2] = uVar9;
  *(undefined4 *)(local_res20 + -2) = 0x4fe3383;
  local_res20[-3] = uStackX_8;
  local_res20[-4] =
       (ulonglong)(bVar23 & 1) * 0x4000 | (ulonglong)(bVar22 & 1) * 0x800 |
       (ulonglong)((uStackX_18 & 0x400) != 0) * 0x400 | (ulonglong)(bVar21 & 1) * 0x200 |
       (ulonglong)(bVar20 & 1) * 0x100 | (ulonglong)(bVar19 & 1) * 0x80 |
       (ulonglong)(bVar17 & 1) * 0x40 | (ulonglong)(bVar16 & 1) * 0x10 | (ulonglong)(bVar15 & 1) * 4
       | (ulonglong)(bVar14 & 1) | (ulonglong)(bVar27 & 1) * 0x200000 |
       (ulonglong)(bVar26 & 1) * 0x100000 | (ulonglong)(bVar25 & 1) * 0x80000 |
       (ulonglong)(bVar24 & 1) * 0x40000;
  *(undefined4 *)((longlong)local_res20 + -0xc) = 0;
  uVar28 = local_res20[-4];
  uVar11 = local_res20[-3];
  lVar10 = local_res20[-2];
  local_res20[-2] =
       (ulonglong)((uVar28 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar28 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar28 & 0x400) != 0) * 0x400 | (ulonglong)((uVar28 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar28 & 0x100) != 0) * 0x100 | (ulonglong)((uVar28 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar28 & 0x40) != 0) * 0x40 | (ulonglong)((uVar28 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar28 & 4) != 0) * 4 | (ulonglong)((uVar28 & 1) != 0) |
       (ulonglong)((uVar28 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar28 & 0x40000) != 0) * 0x40000;
  local_res20[-3] = unaff_RDI;
  uVar28 = lVar10 - 0x1e0db35;
  uVar29 = local_res20[-2];
  local_res20[-2] = uVar11;
  local_res20[-3] = param_3;
  local_res20[-4] =
       (ulonglong)((uVar29 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar29 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar29 & 0x400) != 0) * 0x400 | (ulonglong)((uVar29 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar29 & 0x100) != 0) * 0x100 | (ulonglong)((uVar29 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar29 & 0x40) != 0) * 0x40 | (ulonglong)((uVar29 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar29 & 4) != 0) * 4 | (ulonglong)((uVar29 & 1) != 0) |
       (ulonglong)((uVar29 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar29 & 0x40000) != 0) * 0x40000;
  bVar18 = (local_res20[-4] & 0x40) != 0;
  uVar11 = local_res20[-3];
  *local_res20 = uVar28;
  if ((!bVar18) || (bVar18)) {
    *(longlong *)((longlong)local_res20 + -0x28c7) = unaff_R13;
    *(longlong *)((longlong)local_res20 + -0x28cf) = unaff_R13;
    *(undefined **)((longlong)local_res20 + -0x28c7) = &DAT_156ef2e4a;
    return uVar9;
  }
  local_res20[-3] = uVar9;
  local_res20[-4] = unaff_RSI;
  uVar8 = local_res20[-4];
  uVar29 = local_res20[-3];
  uVar12 = *(ulonglong *)(unaff_RSI + -0x38) ^ uVar28;
  puVar1 = local_res20 + -3;
  *puVar1 = uVar29;
  *(undefined4 *)puVar1 = 0xf3acccc;
  *(undefined4 *)((longlong)local_res20 + -0x14) = 0xa2c820de;
  *(int *)((longlong)local_res20 + -0x14) = *(int *)((longlong)local_res20 + -0x14) + 0x5d37df22;
  uVar13 = -((*puVar1 ^ 0xf3acccc) - *(longlong *)(uVar8 - 0x58));
  local_res20[-3] = uVar29;
  lVar10 = (~uVar28 | uVar13) + uVar28 + 1;
  if ((lVar10 >= 0) && (lVar10 < 0)) {
    local_res20[-4] = lVar10;
    local_res20[-5] = uVar8;
    local_res20[-4] = uVar12;
    local_res20[-4] = local_res20[-5];
    uVar28 = *(ulonglong *)(unaff_R13 + -0x38);
    local_res20[-4] = unaff_R15;
    uVar29 = uVar28 ^ 0xffffffffffffffff | unaff_R15;
    uVar28 = ~((uVar29 ^ 0xffffffffffffffff | ~local_res20[-4] | uVar28) + uVar29 + 1);
    local_res20[-4] = uVar28;
    *(undefined4 *)(local_res20 + -4) = 0x8febe680;
    *(int *)(local_res20 + -4) = (int)local_res20[-4] + 0x34970eb9;
    *(undefined4 *)((longlong)local_res20 + -0x1c) = 0;
    piVar2 = (int *)((longlong)local_res20 + -0x1c);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    if (iVar4 != 0) {
      uVar11 = FUN_156798228();
      return uVar11;
    }
    local_res20[-4] = uVar28;
    *(undefined4 *)(local_res20 + -4) = 0;
    puVar3 = (uint *)((longlong)local_res20 + -0x1c);
    *puVar3 = 0x21a4a0c;
    uVar6 = *puVar3;
    *puVar3 = *puVar3 | 0xfde5b5f3;
    *puVar3 = ~(~(uVar6 & 0xfde5b5f3) & *puVar3);
    local_res20[-4] = uVar28;
    local_res20[-5] = (ulonglong)FUN_1567982b6;
    uVar9 = FUN_1666cd237();
    uVar11 = local_res20[-4];
    *(ushort *)(local_res20 + -3) = (ushort)local_res20[-3] & 0xfeff;
    lVar10 = local_res20[-2];
    *(undefined8 *)(lVar10 + -8) = in_R10;
    *(undefined8 *)(lVar10 + -0x10) = local_res10;
    *(undefined8 *)(lVar10 + -0x10) = uVar9;
    *(undefined8 *)(lVar10 + -0x18) = uVar9;
    *(undefined8 *)(lVar10 + -0x10) = *(undefined8 *)(lVar10 + -8);
    uVar9 = *(undefined8 *)(lVar10 + -0x18);
    *(undefined8 *)(lVar10 + -0x18) = uVar11;
    *(undefined8 *)(lVar10 + -8) = 0;
    uVar11 = *(undefined8 *)(lVar10 + -0x18);
    *(longlong *)(lVar10 + -8) = (longlong)(&LAB_16183b354 + *(longlong *)(lVar10 + -8));
    *(undefined8 *)(lVar10 + -0x18) = uVar9;
    *(undefined4 *)(lVar10 + -0x18) = 0;
    *(undefined4 *)(lVar10 + -0x14) = 0;
    uVar11 = FUN_16183b329(uVar11);
    return uVar11;
  }
  local_res20[-3] = uVar12;
  uVar9 = local_res20[-3];
  local_res20[-3] = in_R11;
  local_res20[-4] = uVar9;
  local_res20[-5] = lVar10 * 2;
  lVar10 = local_res20[-5];
  uVar29 = local_res20[-4];
  local_res20[-3] = uVar11;
  puVar1 = local_res20 + -5;
  *(undefined4 *)puVar1 = 0xe5695ef2;
  *(undefined4 *)((longlong)local_res20 + -0x24) = 0xffffffff;
  uVar11 = *(undefined8 *)
            (uVar8 + ~(~(*puVar1 & 0xffffffffe5695e8d) & (*puVar1 | 0xffffffffe5695e8d)));
  *puVar1 = (ulonglong)FUN_162d2e313;
  FUN_165a095d9(uVar29,(uVar13 + uVar28) - lVar10,uVar11);
  uVar28 = *(ulonglong *)(unaff_retaddr + 8);
  *(ulonglong *)(unaff_retaddr + 8) = ~*(ulonglong *)(unaff_retaddr + 8);
  *(ulonglong *)(unaff_retaddr + 8) = *(ulonglong *)(unaff_retaddr + 8) | uVar29;
  *(ulonglong *)(unaff_retaddr + 8) = ~((~uVar29 | uVar28) & *(ulonglong *)(unaff_retaddr + 8));
  uVar28 = *local_res20;
  *local_res20 = *local_res20 & uVar29;
  *local_res20 = ~*local_res20;
  *local_res20 = *local_res20 & (uVar28 | uVar29);
  uVar28 = local_res20[-2];
  *(ushort *)(local_res20 + -1) = (ushort)local_res20[-1] & 0xfeff;
  *(undefined8 *)(*local_res20 - 8) = 0x6449864;
  uVar11 = FUN_165c7153c(uVar28);
  return uVar11;
}



// FUNCTION 14d814871 FUN_14d814871 body=155 status=ok
// SIG undefined FUN_14d814871(void)

void FUN_14d814871(void)

{
  return;
}



// FUNCTION 14d814a5d FUN_14d814a5d body=439 status=ok
// SIG undefined FUN_14d814a5d(void)

/* WARNING: Removing unreachable block (ram,0x00014d814be1) */
/* WARNING: Removing unreachable block (ram,0x00014d814ca6) */

void FUN_14d814a5d(ulonglong param_1)

{
  longlong unaff_RDI;
  longlong lVar1;
  undefined8 in_R11;
  longlong in_stack_00000028;
  
  lVar1 = ~(~*(ulonglong *)(unaff_RDI + -0x40) & param_1) + param_1;
  FUN_15721f5dd();
  FUN_1655fa434();
  FUN_166c4355d();
  *(ulonglong *)(in_stack_00000028 + -8) = param_1;
  *(undefined8 *)(in_stack_00000028 + -0x10) = *(undefined8 *)(in_stack_00000028 + -8);
  *(undefined8 *)(in_stack_00000028 + -0x18) = in_R11;
  *(longlong *)(in_stack_00000028 + -0x20) = lVar1;
  *(undefined4 *)(in_stack_00000028 + -0x28) = 0x11385da;
  *(undefined4 *)(in_stack_00000028 + -0x24) = 0;
  lVar1 = *(longlong *)(in_stack_00000028 + -0x28) + -0x11385ca;
  *(undefined1 **)(in_stack_00000028 + -0x18 + lVar1) = &LAB_162131652;
  if (-1 < lVar1) {
    FUN_14d7a62cb(*(undefined8 *)(in_stack_00000028 + -0x10));
    return;
  }
  FUN_16213162f();
  return;
}



// FUNCTION 14d814c17 FUN_14d814c17 body=284 status=ok
// SIG undefined FUN_14d814c17(void)

/* WARNING: Removing unreachable block (ram,0x00014d814ca6) */

void FUN_14d814c17(undefined8 param_1)

{
  undefined8 in_R11;
  longlong lVar1;
  undefined8 unaff_retaddr;
  longlong local_res20;
  
  *(undefined8 *)(local_res20 + -8) = param_1;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = in_R11;
  *(undefined8 *)(local_res20 + -0x20) = unaff_retaddr;
  *(undefined4 *)(local_res20 + -0x28) = 0x11385da;
  *(undefined4 *)(local_res20 + -0x24) = 0;
  lVar1 = *(longlong *)(local_res20 + -0x28) + -0x11385ca;
  *(undefined1 **)(local_res20 + -0x18 + lVar1) = &LAB_162131652;
  if (-1 < lVar1) {
    FUN_14d7a62cb(*(undefined8 *)(local_res20 + -0x10));
    return;
  }
  FUN_16213162f();
  return;
}



// FUNCTION 14d814d33 FUN_14d814d33 body=142 status=ok
// SIG undefined FUN_14d814d33(void)

void FUN_14d814d33(void)

{
  ulonglong *puVar1;
  undefined8 unaff_R13;
  ulonglong unaff_R14;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  longlong local_res10;
  
  puVar1 = (ulonglong *)(local_res10 + -8);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ unaff_R14;
  *(undefined8 *)(local_res10 + -0x10) = unaff_R13;
  *(undefined8 *)(local_res10 + -0x18) = unaff_R13;
  *(undefined8 *)(local_res10 + -0x20) = unaff_R15;
  *(undefined8 *)(local_res10 + -0x28) = unaff_retaddr;
  *(undefined4 *)(local_res10 + -0x28) = 0x80b0044d;
  *(undefined4 *)(local_res10 + -0x24) = 0xffffffff;
  *(undefined8 *)(local_res10 + -0x10) =
       *(undefined8 *)(local_res10 + *(longlong *)(local_res10 + -0x28) + 0x7f4ffbab);
  *(undefined8 *)(local_res10 + -8) = 0;
  *(ulonglong *)(local_res10 + -8) = *(ulonglong *)(local_res10 + -8) ^ 0x1574a7817;
  *(undefined8 *)(local_res10 + -0x10) = unaff_retaddr;
  *(undefined8 *)(local_res10 + -0x18) = unaff_retaddr;
  *(undefined **)(local_res10 + -0x10) = &DAT_14d7a8873;
  *(undefined1 **)(local_res10 + -0x20) = &LAB_1574a77fc;
  return;
}



// FUNCTION 14d814dc1 FUN_14d814dc1 body=165 status=ok
// SIG undefined FUN_14d814dc1(void)

void FUN_14d814dc1(undefined8 param_1,undefined8 param_2,ushort param_3,undefined8 param_4,
                  longlong *param_5)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 unaff_RBP;
  undefined8 in_R11;
  undefined8 unaff_R12;
  ushort *unaff_R14;
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
  undefined8 uStackX_8;
  undefined8 uStackX_18;
  ulonglong uStackX_20;
  
  *unaff_R14 = (param_3 | *unaff_R14) - 0x100;
  bVar11 = (uStackX_20 & 0x4000) != 0;
  bVar10 = (uStackX_20 & 0x800) != 0;
  bVar9 = (uStackX_20 & 0x200) != 0;
  bVar8 = (uStackX_20 & 0x100) != 0;
  bVar7 = (uStackX_20 & 0x80) != 0;
  bVar6 = (uStackX_20 & 0x40) != 0;
  bVar5 = (uStackX_20 & 0x10) != 0;
  bVar4 = (uStackX_20 & 4) != 0;
  bVar3 = (uStackX_20 & 1) != 0;
  bVar15 = (uStackX_20 & 0x200000) != 0;
  bVar12 = (uStackX_20 & 0x40000) != 0;
  bVar14 = 0;
  bVar13 = 0;
  pcVar1 = (code *)swi(0x2e);
  lVar2 = (*pcVar1)(uStackX_8,param_2,uStackX_18);
  *param_5 = lVar2;
  param_5[-1] = lVar2;
  *(undefined4 *)(param_5 + -2) = 0x5116d12;
  param_5[-3] = unaff_RBP;
  param_5[-4] = (ulonglong)(bVar11 & 1) * 0x4000 | (ulonglong)(bVar10 & 1) * 0x800 |
                (ulonglong)((uStackX_20 & 0x400) != 0) * 0x400 | (ulonglong)(bVar9 & 1) * 0x200 |
                (ulonglong)(bVar8 & 1) * 0x100 | (ulonglong)(bVar7 & 1) * 0x80 |
                (ulonglong)(bVar6 & 1) * 0x40 | (ulonglong)(bVar5 & 1) * 0x10 |
                (ulonglong)(bVar4 & 1) * 4 | (ulonglong)(bVar3 & 1) |
                (ulonglong)(bVar15 & 1) * 0x200000 | (ulonglong)(bVar14 & 1) * 0x100000 |
                (ulonglong)(bVar13 & 1) * 0x80000 | (ulonglong)(bVar12 & 1) * 0x40000;
  *(undefined4 *)((longlong)param_5 + -0xc) = 0;
  uVar16 = param_5[-4];
  lVar2 = param_5[-2];
  param_5[-2] = (ulonglong)((uVar16 & 0x4000) != 0) * 0x4000 |
                (ulonglong)((uVar16 & 0x800) != 0) * 0x800 |
                (ulonglong)((uVar16 & 0x400) != 0) * 0x400 |
                (ulonglong)((uVar16 & 0x200) != 0) * 0x200 |
                (ulonglong)((uVar16 & 0x100) != 0) * 0x100 |
                (ulonglong)((uVar16 & 0x80) != 0) * 0x80 | (ulonglong)((uVar16 & 0x40) != 0) * 0x40
                | (ulonglong)((uVar16 & 0x10) != 0) * 0x10 | (ulonglong)((uVar16 & 4) != 0) * 4 |
                (ulonglong)((uVar16 & 1) != 0) | (ulonglong)((uVar16 & 0x200000) != 0) * 0x200000 |
                (ulonglong)((uVar16 & 0x40000) != 0) * 0x40000;
  param_5[-3] = param_5[-3];
  uVar16 = param_5[-2];
  param_5[-2] = param_4;
  param_5[-3] = unaff_R12;
  param_5[-4] = (ulonglong)((uVar16 & 0x4000) != 0) * 0x4000 |
                (ulonglong)((uVar16 & 0x800) != 0) * 0x800 |
                (ulonglong)((uVar16 & 0x400) != 0) * 0x400 |
                (ulonglong)((uVar16 & 0x200) != 0) * 0x200 |
                (ulonglong)((uVar16 & 0x100) != 0) * 0x100 |
                (ulonglong)((uVar16 & 0x80) != 0) * 0x80 | (ulonglong)((uVar16 & 0x40) != 0) * 0x40
                | (ulonglong)((uVar16 & 0x10) != 0) * 0x10 | (ulonglong)((uVar16 & 4) != 0) * 4 |
                (ulonglong)((uVar16 & 1) != 0) | (ulonglong)((uVar16 & 0x200000) != 0) * 0x200000 |
                (ulonglong)((uVar16 & 0x40000) != 0) * 0x40000;
  *param_5 = lVar2 + -0x20569a4;
  param_5[-3] = in_R11;
  param_5[-4] = in_R11;
  param_5[-3] = (longlong)FUN_14d814e67;
  (*(code *)&LAB_156877ac1)();
  return;
}



// FUNCTION 14d814e67 FUN_14d814e67 body=143 status=ok
// SIG undefined FUN_14d814e67(void)

void FUN_14d814e67(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int unaff_EBP;
  
  FUN_15afd8106(FUN_15afd8106,param_2,param_3,unaff_EBP << 0x17);
  return;
}


