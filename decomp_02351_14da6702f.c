// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14da6702f FUN_14da6702f body=139 status=ok
// SIG undefined FUN_14da6702f(void)

void FUN_14da6702f(void)

{
  char cVar1;
  byte bVar2;
  ulonglong in_RAX;
  longlong lVar3;
  undefined8 unaff_RBP;
  longlong unaff_R13;
  bool bVar4;
  bool bVar5;
  byte unaff_retaddr;
  undefined8 uStackX_8;
  byte local_res10;
  ushort local_res18;
  uint6 uStackX_1a;
  ulonglong local_res20;
  
  lVar3 = unaff_R13 + in_RAX + (local_res20 & in_RAX) * -2;
  LOCK();
  bVar4 = local_res10 < DAT_14d7a8ffa;
  bVar5 = SBORROW1(local_res10,DAT_14d7a8ffa);
  cVar1 = local_res10 - DAT_14d7a8ffa;
  bVar2 = unaff_retaddr;
  if (cVar1 != '\0') {
    bVar2 = DAT_14d7a8ffa;
  }
  DAT_14d7a8ffa = bVar2;
  UNLOCK();
  *(undefined8 *)(lVar3 + -8) = uStackX_8;
  *(undefined8 *)(lVar3 + -0x10) = uStackX_8;
  *(ulonglong *)(lVar3 + -0x18) =
       (ulonglong)((local_res18 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar5 * 0x800 |
       (ulonglong)((local_res18 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res18 & 0x200) != 0) * 0x200 | (ulonglong)(cVar1 < '\0') * 0x80 |
       (ulonglong)(cVar1 == '\0') * 0x40 | (ulonglong)((local_res18 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar1) & 1U) == 0) * 4 | (ulonglong)bVar4 |
       (ulonglong)((uStackX_1a & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_1a & 4) != 0) * 0x40000;
  *(undefined8 *)(lVar3 + -0x20) = unaff_RBP;
  FUN_1563fe812();
  return;
}



// FUNCTION 14da670bb FUN_14da670bb body=7 status=ok
// SIG undefined FUN_14da670bb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14da670bb(undefined8 param_1,longlong param_2)

{
  bool in_SF;
  
  if (in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_2 + 0x78f8521c) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14da670ee FUN_14da670ee body=109 status=ok
// SIG undefined FUN_14da670ee(void)

void FUN_14da670ee(undefined8 param_1,uint param_2)

{
  undefined1 *local_8;
  
  local_8 = &DAT_e02e7c626721c4c4;
  thunk_FUN_16208ba30(&local_8,(longlong)(ulonglong)(0x9e7c7daf - (~param_2 + 2)) >>
                               ((byte)&local_8 & 0x3f));
  return;
}



// FUNCTION 14da67496 FUN_14da67496 body=173 status=ok
// SIG undefined FUN_14da67496(void)

/* WARNING: Removing unreachable block (ram,0x00014da67544) */
/* WARNING: Removing unreachable block (ram,0x00014da675cb) */
/* WARNING: Removing unreachable block (ram,0x00014da675cf) */

void FUN_14da67496(void)

{
  ulonglong uVar1;
  longlong in_R9;
  longlong in_R10;
  longlong unaff_R15;
  
  uVar1 = in_R9 + in_R10 + 1U ^ 0xffffffffffffffff;
  if (unaff_R15 + -1 == 0) {
    FUN_1620a8661(0,uVar1);
    return;
  }
  FUN_1620a8661(unaff_R15 + -1,uVar1);
  return;
}



// FUNCTION 14da67544 FUN_14da67544 body=148 status=ok
// SIG undefined FUN_14da67544(void)

/* WARNING: Removing unreachable block (ram,0x00014da675cb) */

void FUN_14da67544(void)

{
  return;
}



// FUNCTION 14da675f6 FUN_14da675f6 body=148 status=ok
// SIG undefined FUN_14da675f6(void)

void FUN_14da675f6(void)

{
  (*(code *)0x1667c6e4b)();
  return;
}



// FUNCTION 14da677e9 FUN_14da677e9 body=320 status=ok
// SIG undefined FUN_14da677e9(void)

void FUN_14da677e9(void)

{
  longlong unaff_R13;
  undefined1 unaff_R15B;
  undefined7 unaff_000000b9;
  
  FUN_164936b8b(*(undefined8 *)(unaff_R13 + -0x90),FUN_164936b8b,
                *(ulonglong *)(unaff_R13 + -0x40) + CONCAT71(unaff_000000b9,unaff_R15B) +
                (*(ulonglong *)(unaff_R13 + -0x40) & CONCAT71(unaff_000000b9,unaff_R15B)) * -2);
  FUN_1661f1e22();
  return;
}



// FUNCTION 14da679de FUN_14da679de body=292 status=ok
// SIG undefined FUN_14da679de(void)

/* WARNING: Removing unreachable block (ram,0x0001569cc4c2) */
/* WARNING: Removing unreachable block (ram,0x00014da67b05) */
/* WARNING: Removing unreachable block (ram,0x00014da67b95) */
/* WARNING: Removing unreachable block (ram,0x00014da67b9b) */
/* WARNING: Removing unreachable block (ram,0x00014da67ba0) */
/* WARNING: Removing unreachable block (ram,0x000160b710bf) */
/* WARNING: Removing unreachable block (ram,0x000160b710da) */
/* WARNING: Removing unreachable block (ram,0x000161837029) */
/* WARNING: Removing unreachable block (ram,0x000160b71137) */
/* WARNING: Removing unreachable block (ram,0x000160b7113d) */
/* WARNING: Removing unreachable block (ram,0x000160b71142) */
/* WARNING: Removing unreachable block (ram,0x000160b71146) */
/* WARNING: Removing unreachable block (ram,0x000160b7125a) */
/* WARNING: Removing unreachable block (ram,0x000160b71260) */
/* WARNING: Removing unreachable block (ram,0x000160b71265) */
/* WARNING: Removing unreachable block (ram,0x000164973b62) */
/* WARNING: Removing unreachable block (ram,0x0001569cc590) */
/* WARNING: Removing unreachable block (ram,0x0001569cc593) */
/* WARNING: Removing unreachable block (ram,0x0001569cc5db) */
/* WARNING: Removing unreachable block (ram,0x0001569cc5e1) */
/* WARNING: Removing unreachable block (ram,0x0001668fb51d) */
/* WARNING: Removing unreachable block (ram,0x00014da67a79) */
/* WARNING: Removing unreachable block (ram,0x00014da67a9b) */
/* WARNING: Removing unreachable block (ram,0x00014da67a9f) */

undefined8 FUN_14da679de(short param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  short unaff_DI;
  
  FUN_162ec6d37(unaff_DI + 0x40 + param_1,param_2,param_3);
  uVar1 = FUN_1659c10b0();
  return uVar1;
}



// FUNCTION 14da67b05 FUN_14da67b05 body=154 status=ok
// SIG undefined FUN_14da67b05(void)

/* WARNING: Removing unreachable block (ram,0x000160b71142) */
/* WARNING: Removing unreachable block (ram,0x000160b71146) */
/* WARNING: Removing unreachable block (ram,0x000160b7125a) */
/* WARNING: Removing unreachable block (ram,0x000160b71260) */
/* WARNING: Removing unreachable block (ram,0x000164973b62) */
/* WARNING: Removing unreachable block (ram,0x000160b71265) */
/* WARNING: Removing unreachable block (ram,0x00014da67ba0) */

longlong FUN_14da67b05(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0x80) | param_1;
  lVar1 = (~uVar2 | ~(*(ulonglong *)(unaff_RDI + -0x80) & param_1)) + uVar2;
  if (lVar1 == -1) {
    lVar1 = FUN_160b710bf();
    return lVar1;
  }
  if (*(ulonglong *)(unaff_RDI + -0x68) + param_1 +
      (*(ulonglong *)(unaff_RDI + -0x68) & param_1) * -2 != 0) {
    return lVar1 + 1;
  }
  lVar1 = FUN_161837029();
  return lVar1;
}



// FUNCTION 14da67ba0 FUN_14da67ba0 body=10 status=ok
// SIG undefined FUN_14da67ba0(void)

void FUN_14da67ba0(void)

{
  return;
}



// FUNCTION 14da67f67 FUN_14da67f67 body=156 status=ok
// SIG undefined FUN_14da67f67(void)

undefined8 FUN_14da67f67(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da68003 FUN_14da68003 body=31 status=ok
// SIG undefined FUN_14da68003(void)

void FUN_14da68003(void)

{
  return;
}



// FUNCTION 14da68152 FUN_14da68152 body=99 status=ok
// SIG undefined FUN_14da68152(void)

void FUN_14da68152(void)

{
  return;
}



// FUNCTION 14da68347 FUN_14da68347 body=593 status=ok
// SIG undefined FUN_14da68347(void)

/* WARNING: Removing unreachable block (ram,0x00014da683dd) */
/* WARNING: Removing unreachable block (ram,0x00014dfcbbe0) */

void FUN_14da68347(void)

{
  longlong in_R9;
  
  if (in_R9 != 0) {
    FUN_166de7e6e();
    return;
  }
  FUN_166de7e6e();
  return;
}



// FUNCTION 14da68467 FUN_14da68467 body=604 status=ok
// SIG undefined FUN_14da68467(void)

/* WARNING: Removing unreachable block (ram,0x00014da68597) */
/* WARNING: Removing unreachable block (ram,0x00014da68507) */
/* WARNING: Removing unreachable block (ram,0x00014da68591) */
/* WARNING: Removing unreachable block (ram,0x000161ba24d5) */

void FUN_14da68467(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong in_RAX;
  ulonglong uVar2;
  undefined8 in_R10;
  undefined8 local_res10;
  undefined8 local_res20;
  
  uVar2 = in_RAX + param_1 + (local_res20 & param_1) * -2;
  *(undefined8 *)(uVar2 - 8) = in_R10;
  if (7 < uVar2) {
    FUN_156c65268();
    return;
  }
  *(undefined8 *)(uVar2 - 0x10) = param_2;
  *(undefined8 *)(uVar2 - 0x18) = param_2;
  *(undefined8 *)(uVar2 - 0x10) = *(undefined8 *)(uVar2 - 8);
  uVar1 = *(undefined8 *)(uVar2 - 0x18);
  *(undefined8 *)(uVar2 - 8) = 0;
  *(longlong *)(uVar2 - 8) = *(longlong *)(uVar2 - 8) + -0x156c652c6;
  *(longlong *)(uVar2 - 8) = -*(longlong *)(uVar2 - 8);
  thunk_FUN_15b642ca5(local_res10,uVar1,param_3);
  return;
}



// FUNCTION 14da68620 FUN_14da68620 body=183 status=ok
// SIG undefined FUN_14da68620(void)

void FUN_14da68620(void)

{
  return;
}



// FUNCTION 14da686db FUN_14da686db body=415 status=ok
// SIG undefined FUN_14da686db(void)

/* WARNING: Removing unreachable block (ram,0x0001565ff507) */
/* WARNING: Removing unreachable block (ram,0x00014da6876b) */
/* WARNING: Removing unreachable block (ram,0x00014da687f6) */
/* WARNING: Removing unreachable block (ram,0x000162e1c4c8) */
/* WARNING: Removing unreachable block (ram,0x0001629ad0f1) */
/* WARNING: Removing unreachable block (ram,0x0001629ad126) */
/* WARNING: Removing unreachable block (ram,0x0001629ad121) */
/* WARNING: Removing unreachable block (ram,0x00014da687fc) */

undefined8
FUN_14da686db(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 uVar4;
  longlong unaff_R13;
  ulonglong uVar5;
  ulonglong unaff_R15;
  
  uVar5 = *(ulonglong *)(unaff_R13 + -0xa0) ^ unaff_R15;
  uVar1 = *(ulonglong *)(unaff_R13 + -0x98) & unaff_R15;
  if (((longlong)uVar1 < 0) && (0 < (longlong)uVar1)) {
    FUN_16260dddc(*(ulonglong *)(uVar5 - 0x78) ^ unaff_R15,*(ulonglong *)(uVar5 - 0x28) ^ unaff_R15)
    ;
    uVar4 = FUN_165c3ac4e();
    return uVar4;
  }
  uVar3 = (ushort)*(undefined8 *)(unaff_R13 + -8);
  uVar2 = uVar3 | (ushort)unaff_R15;
  uVar4 = FUN_165065147(param_1,CONCAT62((int6)(*(ulonglong *)(unaff_R13 + -0x98) + unaff_R15 +
                                                uVar1 * -2 >> 0x10),
                                         (~uVar2 | ~(uVar3 & (ushort)unaff_R15)) + uVar2 + 1),
                        param_3,param_4);
  return uVar4;
}



// FUNCTION 14da68885 FUN_14da68885 body=30 status=ok
// SIG undefined FUN_14da68885(void)

void FUN_14da68885(void)

{
  return;
}



// FUNCTION 14da688a3 FUN_14da688a3 body=245 status=ok
// SIG undefined FUN_14da688a3(void)

/* WARNING: Removing unreachable block (ram,0x00014da6898a) */

void FUN_14da688a3(void)

{
  longlong unaff_RDI;
  
  FUN_161626fe2(&DAT_ac91427a73ca2b2b,&DAT_ac91427a73ca2b2b + *(ulonglong *)(unaff_RDI + -0x78),
                ((*(ulonglong *)(unaff_RDI + -0x78) | 0x536ebd858c35d4d4) + 0xac91427a73ca2b2c) * 2)
  ;
  (*(code *)0x160ce7f49)();
  return;
}



// FUNCTION 14da68abf FUN_14da68abf body=162 status=ok
// SIG undefined FUN_14da68abf(void)

void FUN_14da68abf(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 unaff_RBX;
  longlong unaff_R12;
  longlong unaff_R13;
  uint local_res8;
  
  puVar1 = (undefined8 *)(&stack0xfffffffff64d1552 + local_res8);
  *puVar1 = *(undefined8 *)(unaff_R12 + -0x48);
  *puVar1 = unaff_RBX;
  puVar1[-1] = unaff_RBX;
  plVar2 = puVar1 + -2;
  *plVar2 = 0;
  *plVar2 = *plVar2 + unaff_R13;
  (*(code *)0x16102b7f8)();
  return;
}



// FUNCTION 14da68bfb FUN_14da68bfb body=110 status=ok
// SIG undefined FUN_14da68bfb(void)

void FUN_14da68bfb(void)

{
  return;
}



// FUNCTION 14da68ca9 FUN_14da68ca9 body=124 status=ok
// SIG undefined FUN_14da68ca9(void)

/* WARNING: Removing unreachable block (ram,0x00014da68d1c) */
/* WARNING: Removing unreachable block (ram,0x00014da68d27) */
/* WARNING: Removing unreachable block (ram,0x00014da68d22) */

void FUN_14da68ca9(void)

{
  undefined8 in_stack_00000010;
  
  FUN_1570693bb(in_stack_00000010);
  return;
}



// FUNCTION 14da68d27 FUN_14da68d27 body=130 status=ok
// SIG undefined FUN_14da68d27(void)

void FUN_14da68d27(void)

{
  FUN_15b2d5049();
  return;
}



// FUNCTION 14da68daa FUN_14da68daa body=140 status=ok
// SIG undefined FUN_14da68daa(void)

/* WARNING: Removing unreachable block (ram,0x00014da68e37) */

void FUN_14da68daa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)0x14e062b8a)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14da68e37 FUN_14da68e37 body=169 status=ok
// SIG undefined FUN_14da68e37(void)

void FUN_14da68e37(longlong param_1)

{
  ulonglong unaff_RBX;
  
  FUN_156a12710(param_1,FUN_156a12710,*(ulonglong *)(param_1 + -0x58) | unaff_RBX,
                ~*(ulonglong *)(param_1 + -0x58));
  return;
}



// FUNCTION 14da68ee0 FUN_14da68ee0 body=125 status=ok
// SIG undefined FUN_14da68ee0(void)

void FUN_14da68ee0(undefined8 param_1)

{
  bool in_ZF;
  
  if (in_ZF) {
    FUN_161118d72();
    return;
  }
  FUN_166b20c20(param_1,FUN_166b20c20);
  return;
}



// FUNCTION 14da6910d FUN_14da6910d body=127 status=ok
// SIG undefined FUN_14da6910d(void)

void FUN_14da6910d(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_15667297a(~*(ulonglong *)(unaff_RSI + -0x68) + unaff_RBP,param_2,FUN_15667297a);
  return;
}



// FUNCTION 14da694a5 FUN_14da694a5 body=321 status=ok
// SIG undefined FUN_14da694a5(void)

void FUN_14da694a5(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong unaff_RSI;
  longlong lVar5;
  ulonglong uVar6;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  
  uVar6 = *(ulonglong *)(unaff_R13 + -0x90) ^ unaff_R15;
  lVar5 = (unaff_R15 - (*(ulonglong *)(unaff_R13 + -0x60) | unaff_R15)) +
          *(ulonglong *)(unaff_R13 + -0x60);
  uVar4 = FUN_14dd1dc15();
  puVar1 = (ulonglong *)(&stack0xfffffffff6c80ded + lVar5);
  *(undefined4 *)(puVar1 + -1) = 0xc9bdd257;
  *(int *)puVar1 = (int)puVar1[-1];
  *(undefined4 *)((longlong)puVar1 + 4) = 0xffffffff;
  lVar5 = *(longlong *)(unaff_RSI + (*puVar1 ^ 0x36422d2f));
  uVar2 = puVar1[1];
  puVar1[3] = 0;
  puVar1[3] = puVar1[3] + lVar5;
  puVar1[2] = uVar6;
  puVar1[1] = uVar6;
  puVar1[2] = *(undefined8 *)(unaff_RSI + -8);
  uVar3 = puVar1[1];
  puVar1[1] = uVar2;
  *puVar1 = uVar2;
  puVar1[-1] = unaff_R14;
  puVar1[-2] = uVar4;
  puVar1[-3] = unaff_RSI;
  puVar1[-4] = uVar3;
  puVar1[-5] = uVar3;
  puVar1[-6] = uVar3;
  puVar1[-4] = (ulonglong)FUN_14da695ea;
  puVar1[-5] = (ulonglong)&DAT_1650f8e02;
  return;
}



// FUNCTION 14da695ea FUN_14da695ea body=143 status=ok
// SIG undefined FUN_14da695ea(void)

void FUN_14da695ea(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1616e375a(0xffffffffffffffa5,FUN_1616e375a,*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14da69720 FUN_14da69720 body=304 status=ok
// SIG undefined FUN_14da69720(void)

/* WARNING: Removing unreachable block (ram,0x00014da69845) */
/* WARNING: Removing unreachable block (ram,0x00014da6984b) */
/* WARNING: Removing unreachable block (ram,0x00014da697b2) */
/* WARNING: Removing unreachable block (ram,0x0001656b37d9) */
/* WARNING: Removing unreachable block (ram,0x000164f0078a) */
/* WARNING: Removing unreachable block (ram,0x0001656b37df) */

ulonglong FUN_14da69720(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong unaff_RDI;
  ulonglong unaff_R15;
  
  uVar1 = *(undefined8 *)(unaff_RDI + -0x90);
  if (*(ulonglong *)(unaff_RDI + -0xa0) + param_1 <
      (*(ulonglong *)(unaff_RDI + -0xa0) & param_1) * 2) {
    uVar3 = FUN_1571024d5();
    return uVar3;
  }
  lVar2 = -~(ulonglong)&stack0xffffffffffffffe8;
  uVar3 = *(ulonglong *)(lVar2 + 0x17);
  *(ulonglong *)(lVar2 + 0x17) = ~*(ulonglong *)(lVar2 + 0x17);
  *(ulonglong *)(lVar2 + 0x17) = *(ulonglong *)(lVar2 + 0x17) | param_1;
  *(ulonglong *)(lVar2 + 0x17) =
       (param_1 ^ 0xffffffffffffffff | uVar3) & *(ulonglong *)(lVar2 + 0x17) ^ 0xffffffffffffffff;
  uVar3 = FUN_1611bf800(param_1,uVar1,param_3);
  return uVar3 ^ unaff_R15;
}



// FUNCTION 14da69851 FUN_14da69851 body=289 status=ok
// SIG undefined FUN_14da69851(void)

/* WARNING: Removing unreachable block (ram,0x00014da69936) */
/* WARNING: Removing unreachable block (ram,0x00014da698de) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da69851(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_R15;
  ulonglong in_stack_00000020;
  
  FUN_1621a85bd(param_1,param_2,param_3,param_4,in_stack_00000020 ^ unaff_R15);
  return;
}



// FUNCTION 14da69974 FUN_14da69974 body=556 status=ok
// SIG undefined FUN_14da69974(void)

/* WARNING: Removing unreachable block (ram,0x0001652a5dd7) */
/* WARNING: Removing unreachable block (ram,0x0001652a5de2) */
/* WARNING: Removing unreachable block (ram,0x0001652a5ddd) */
/* WARNING: Removing unreachable block (ram,0x00014da69a0d) */

undefined1 FUN_14da69974(void)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 in_AL;
  undefined1 uVar4;
  undefined8 unaff_RBX;
  longlong unaff_R13;
  ulonglong uVar5;
  ulonglong unaff_R15;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  ulonglong uVar13;
  undefined8 in_stack_00000008;
  
  uVar5 = *(ulonglong *)(unaff_R13 + -0xa0) ^ unaff_R15;
  uVar13 = *(ulonglong *)(unaff_R13 + -8) ^ unaff_R15;
  uVar3 = *(ulonglong *)(unaff_R13 + -0x70) ^ unaff_R15;
  uVar1 = 0xffff - (~(ushort)uVar13 | 0x100);
  bVar10 = (uVar1 & 0x4000) != 0;
  bVar9 = (uVar1 & 0x400) != 0;
  bVar8 = (uVar1 & 0x200) != 0;
  bVar7 = (uVar1 & 0x100) != 0;
  bVar6 = (uVar1 & 0x10) != 0;
  bVar12 = (uVar13 & 0x200000) != 0;
  bVar11 = (uVar13 & 0x40000) != 0;
  LOCK();
  uVar4 = DAT_14d7bc94e;
  UNLOCK();
  DAT_14d7bc94e = in_AL;
  *(undefined8 *)(uVar3 - 8) = unaff_RBX;
  *(undefined8 *)(uVar3 - 0x10) = unaff_RBX;
  *(ulonglong *)(uVar3 - 0x18) =
       (ulonglong)bVar10 * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)bVar9 * 0x400 | (ulonglong)bVar8 * 0x200 | (ulonglong)bVar7 * 0x100 |
       (ulonglong)((uVar1 & 0x80) != 0) * 0x80 | (ulonglong)((uVar1 & 0x40) != 0) * 0x40 |
       (ulonglong)bVar6 * 0x10 | (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)bVar12 * 0x200000 | (ulonglong)bVar11 * 0x40000;
  *(undefined8 *)(uVar3 - 0x20) = 0x100d50d4;
  uVar13 = *(ulonglong *)(uVar3 - 0x20);
  lVar2 = *(longlong *)(uVar3 - 0x20);
  *(longlong *)(uVar3 - 0x20) = *(longlong *)(uVar3 - 0x20) + -0xea1f28e;
  *(ulonglong *)(uVar3 - 0x20) =
       (ulonglong)bVar10 * 0x4000 | (ulonglong)SBORROW8(lVar2,0xea1f28e) * 0x800 |
       (ulonglong)bVar9 * 0x400 | (ulonglong)bVar8 * 0x200 | (ulonglong)bVar7 * 0x100 |
       (ulonglong)(*(longlong *)(uVar3 - 0x20) < 0) * 0x80 |
       (ulonglong)(*(longlong *)(uVar3 - 0x20) == 0) * 0x40 | (ulonglong)bVar6 * 0x10 |
       (ulonglong)((POPCOUNT(*(ulonglong *)(uVar3 - 0x20) & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(uVar13 < 0xea1f28e) | (ulonglong)bVar12 * 0x200000 | (ulonglong)bVar11 * 0x40000;
  uVar13 = *(ulonglong *)(uVar3 - 0x18);
  *(undefined8 *)(uVar3 - 0x18) = in_stack_00000008;
  *(ulonglong *)(uVar3 - 0x20) =
       (ulonglong)((uVar13 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar13 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar13 & 0x400) != 0) * 0x400 | (ulonglong)((uVar13 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar13 & 0x100) != 0) * 0x100 | (ulonglong)((uVar13 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar13 & 0x40) != 0) * 0x40 | (ulonglong)((uVar13 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar13 & 4) != 0) * 4 | (ulonglong)((uVar13 & 1) != 0) |
       (ulonglong)((uVar13 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar13 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uVar3 - 8) = 0x16b5e46;
  *(ulonglong *)(uVar3 - 0x28cf) = uVar5;
  *(ulonglong *)(uVar3 - 0x28d7) = uVar5;
  *(undefined **)(uVar3 - 0x28cf) = &DAT_156ef2e4a;
  return uVar4;
}



// FUNCTION 14da69ab5 FUN_14da69ab5 body=164 status=ok
// SIG undefined FUN_14da69ab5(void)

void FUN_14da69ab5(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + (param_2 ^ 0x724a9c21));
  FUN_1574571cb((*(ulonglong *)(unaff_R12 + -0x28) - in_RAX) +
                (~in_RAX | *(ulonglong *)(unaff_R12 + -0x28)) * -2 + -2,FUN_1574571cb,
                ~(uVar1 & in_RAX) & (uVar1 | in_RAX));
  return;
}



// FUNCTION 14da69c72 FUN_14da69c72 body=147 status=ok
// SIG undefined FUN_14da69c72(void)

void FUN_14da69c72(void)

{
  return;
}



// FUNCTION 14da69dc9 FUN_14da69dc9 body=167 status=ok
// SIG undefined FUN_14da69dc9(void)

void FUN_14da69dc9(void)

{
  return;
}



// FUNCTION 14da69f10 FUN_14da69f10 body=116 status=ok
// SIG undefined FUN_14da69f10(void)

void FUN_14da69f10(void)

{
  return;
}



// FUNCTION 14da6a0a0 FUN_14da6a0a0 body=172 status=ok
// SIG undefined FUN_14da6a0a0(void)

void FUN_14da6a0a0(longlong param_1)

{
  ulonglong in_R11;
  undefined4 local_res8;
  undefined4 local_resc;
  
  *(ulonglong *)(param_1 + 0x10) =
       ~(*(ulonglong *)(param_1 + 0x10) | in_R11) + 1 + in_R11 + *(longlong *)(param_1 + 0x10);
  FUN_15693c58b(CONCAT44(local_resc,local_res8));
  return;
}



// FUNCTION 14da6a32a thunk_FUN_14da6a336 body=5 status=ok
// SIG undefined thunk_FUN_14da6a336(void)

void thunk_FUN_14da6a336(void)

{
  return;
}



// FUNCTION 14da6a330 thunk_FUN_14da6a336 body=5 status=ok
// SIG undefined thunk_FUN_14da6a336(void)

void thunk_FUN_14da6a336(void)

{
  return;
}



// FUNCTION 14da6a336 FUN_14da6a336 body=174 status=ok
// SIG undefined FUN_14da6a336(void)

void FUN_14da6a336(void)

{
  return;
}



// FUNCTION 14da6a52b FUN_14da6a52b body=59 status=ok
// SIG undefined FUN_14da6a52b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014da6a666) */
/* WARNING: Removing unreachable block (ram,0x00014da6a66c) */
/* WARNING: Removing unreachable block (ram,0x00014da6a5c7) */
/* WARNING: Removing unreachable block (ram,0x00014da6a5cd) */
/* WARNING: Removing unreachable block (ram,0x00014da6a661) */
/* WARNING: Removing unreachable block (ram,0x000166a4b881) */
/* WARNING: Removing unreachable block (ram,0x0001667e7461) */
/* WARNING: Removing unreachable block (ram,0x0001667e73c8) */
/* WARNING: Removing unreachable block (ram,0x0001667e745b) */
/* WARNING: Removing unreachable block (ram,0x000164f95e92) */
/* WARNING: Removing unreachable block (ram,0x000164f95f0d) */
/* WARNING: Removing unreachable block (ram,0x000164f95f08) */
/* WARNING: Removing unreachable block (ram,0x0001667e7456) */
/* WARNING: Removing unreachable block (ram,0x00014da6a566) */

void FUN_14da6a52b(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  uint unaff_EBP;
  longlong lVar2;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX;
  lVar2 = *(ulonglong *)(unaff_R12 + -0x78) + in_RAX +
          (*(ulonglong *)(unaff_R12 + -0x78) & in_RAX) * -2;
  if (!CARRY4(0x4821eecf - (unaff_EBP | 0x4821eecf),unaff_EBP)) {
    FUN_15b71559f(uVar1,lVar2);
    return;
  }
  FUN_15b71559f(uVar1,lVar2);
  return;
}



// FUNCTION 14da6a713 FUN_14da6a713 body=406 status=ok
// SIG undefined FUN_14da6a713(void)

/* WARNING: Removing unreachable block (ram,0x00014da6a7a1) */
/* WARNING: Removing unreachable block (ram,0x00014da6a7a7) */

void FUN_14da6a713(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong unaff_R15;
  longlong lVar4;
  longlong local_res8;
  
  uVar3 = *(ulonglong *)(local_res8 + -0x50) + unaff_R15 +
          (*(ulonglong *)(local_res8 + -0x50) & unaff_R15) * -2;
  uVar2 = *(ulonglong *)(local_res8 + -0x70);
  FUN_1648cbbfa(param_1,param_2,param_3);
  lVar4 = (uVar3 - (uVar2 | uVar3)) + uVar2;
  puVar1 = (ulonglong *)(lVar4 + -8);
  *puVar1 = (ulonglong)FUN_1648cbbfa;
  *(ulonglong *)(lVar4 + -0x10) = *puVar1;
  *(undefined8 *)(lVar4 + -0x18) = param_2;
  *(undefined8 *)(lVar4 + -8) = 0xf59b5b3;
  *puVar1 = *puVar1 ^ 0xf59b5b3;
  *puVar1 = *puVar1 + 0x1666a6d1e;
  FUN_1666a6cf1();
  return;
}



// FUNCTION 14da6a81a FUN_14da6a81a body=142 status=ok
// SIG undefined FUN_14da6a81a(void)

void FUN_14da6a81a(void)

{
  FUN_160f62808();
  return;
}



// FUNCTION 14da6aa9c FUN_14da6aa9c body=1331 status=ok
// SIG undefined FUN_14da6aa9c(void)

/* WARNING: Removing unreachable block (ram,0x000166168df5) */
/* WARNING: Removing unreachable block (ram,0x000164fe8e5e) */
/* WARNING: Removing unreachable block (ram,0x00014da6ae0d) */
/* WARNING: Removing unreachable block (ram,0x00014da6ae13) */
/* WARNING: Removing unreachable block (ram,0x00014da6aea4) */
/* WARNING: Removing unreachable block (ram,0x00014da6aea9) */
/* WARNING: Removing unreachable block (ram,0x00014da6aeaf) */
/* WARNING: Removing unreachable block (ram,0x000162a2307f) */
/* WARNING: Removing unreachable block (ram,0x000162a2310e) */
/* WARNING: Removing unreachable block (ram,0x000162a2311a) */
/* WARNING: Removing unreachable block (ram,0x000162a2311f) */
/* WARNING: Removing unreachable block (ram,0x000165dd2529) */
/* WARNING: Removing unreachable block (ram,0x000165dd25be) */
/* WARNING: Removing unreachable block (ram,0x000165dd25c3) */
/* WARNING: Removing unreachable block (ram,0x000165dd25c9) */
/* WARNING: Removing unreachable block (ram,0x000165dd25ce) */
/* WARNING: Removing unreachable block (ram,0x000165dd264d) */
/* WARNING: Removing unreachable block (ram,0x000165dd2652) */
/* WARNING: Removing unreachable block (ram,0x000165dd2658) */
/* WARNING: Removing unreachable block (ram,0x0001650fcce5) */
/* WARNING: Removing unreachable block (ram,0x0001611a650c) */
/* WARNING: Removing unreachable block (ram,0x0001650fcd73) */
/* WARNING: Removing unreachable block (ram,0x0001650fcd79) */
/* WARNING: Removing unreachable block (ram,0x0001650fcd7e) */
/* WARNING: Removing unreachable block (ram,0x00014da6ac55) */
/* WARNING: Removing unreachable block (ram,0x00014da6ac61) */
/* WARNING: Removing unreachable block (ram,0x00014da6ac67) */
/* WARNING: Removing unreachable block (ram,0x00014da6ace7) */
/* WARNING: Removing unreachable block (ram,0x00014da6acf2) */
/* WARNING: Removing unreachable block (ram,0x0001661dbc4c) */
/* WARNING: Removing unreachable block (ram,0x00014da6acf8) */
/* WARNING: Removing unreachable block (ram,0x00014da6ad8d) */
/* WARNING: Removing unreachable block (ram,0x00014da6ad93) */
/* WARNING: Removing unreachable block (ram,0x0001664d23bc) */
/* WARNING: Removing unreachable block (ram,0x0001664d24f1) */
/* WARNING: Removing unreachable block (ram,0x0001664d24f7) */
/* WARNING: Removing unreachable block (ram,0x00015742d5d2) */
/* WARNING: Removing unreachable block (ram,0x00015742d653) */
/* WARNING: Removing unreachable block (ram,0x00015742d65e) */
/* WARNING: Removing unreachable block (ram,0x00015742d6e2) */
/* WARNING: Removing unreachable block (ram,0x00015742d6e8) */
/* WARNING: Removing unreachable block (ram,0x000165737b0c) */
/* WARNING: Removing unreachable block (ram,0x00015742d659) */
/* WARNING: Removing unreachable block (ram,0x0001660c356b) */
/* WARNING: Removing unreachable block (ram,0x00015664eeef) */
/* WARNING: Removing unreachable block (ram,0x000164fe8e53) */
/* WARNING: Removing unreachable block (ram,0x00014da6ab26) */
/* WARNING: Removing unreachable block (ram,0x00014da6ab5b) */

undefined8 FUN_14da6aa9c(undefined1 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  ulonglong in_RAX;
  undefined8 in_R10;
  longlong lVar4;
  undefined8 unaff_R12;
  ulonglong unaff_R13;
  ulonglong unaff_R15;
  ulonglong uVar5;
  ulonglong local_res10;
  ulonglong local_res18;
  
  uVar5 = local_res10 ^ unaff_R15;
  lVar4 = local_res18 + unaff_R15 + (local_res18 & unaff_R15) * -2;
                    /* WARNING (jumptable): Read-only address (ram,0x00014d7a618a) is written */
                    /* WARNING: Read-only address (ram,0x00014d7a618a) is written */
  LOCK();
  cVar3 = (char)in_RAX;
  uVar2 = param_1;
  if (cVar3 != '\0') {
    in_RAX = in_RAX & 0xffffffffffffff00;
    uVar2 = uRam000000014d7a618a;
  }
  uRam000000014d7a618a = uVar2;
  UNLOCK();
  *(undefined8 *)(lVar4 + -8) = param_2;
  *(undefined8 *)(lVar4 + -0x10) = param_2;
  *(undefined4 *)(lVar4 + -0x18) = 0xe2a9835;
  *(ulonglong *)(lVar4 + -0x20) = unaff_R13 + unaff_R15 + (unaff_R13 & unaff_R15) * -2;
  *(ulonglong *)(lVar4 + -0x28) =
       (ulonglong)((uVar5 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar5 & 0x400) != 0) * 0x400 |
       (ulonglong)((uVar5 & 0x200) != 0) * 0x200 | (ulonglong)(cVar3 < '\0') * 0x80 |
       (ulonglong)(cVar3 == '\0') * 0x40 | (ulonglong)((uVar5 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar3) & 1U) == 0) * 4 |
       (ulonglong)((uVar5 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar5 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(lVar4 + -0x30) = unaff_R12;
  *(undefined4 *)(lVar4 + -0x14) = 0;
  uVar5 = *(ulonglong *)(lVar4 + -0x28);
  lVar1 = *(longlong *)(lVar4 + -0x18);
  *(ulonglong *)(lVar4 + -0x18) =
       (ulonglong)((uVar5 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar5 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar5 & 0x400) != 0) * 0x400 | (ulonglong)((uVar5 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar5 & 0x100) != 0) * 0x100 | (ulonglong)((uVar5 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar5 & 0x40) != 0) * 0x40 | (ulonglong)((uVar5 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar5 & 4) != 0) * 4 | (ulonglong)((uVar5 & 1) != 0) |
       (ulonglong)((uVar5 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar5 & 0x40000) != 0) * 0x40000;
  uVar5 = *(ulonglong *)(lVar4 + -0x18);
  *(undefined8 *)(lVar4 + -0x18) = in_R10;
  *(ulonglong *)(lVar4 + -0x20) =
       (ulonglong)((uVar5 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar5 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar5 & 0x400) != 0) * 0x400 | (ulonglong)((uVar5 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar5 & 0x100) != 0) * 0x100 | (ulonglong)((uVar5 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar5 & 0x40) != 0) * 0x40 | (ulonglong)((uVar5 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar5 & 4) != 0) * 4 | (ulonglong)((uVar5 & 1) != 0) |
       (ulonglong)((uVar5 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar5 & 0x40000) != 0) * 0x40000;
  *(longlong *)(lVar4 + -8) = lVar1 + -0xa593425;
  *(ulonglong *)(lVar4 + -0x10) = in_RAX;
  *(ulonglong *)(lVar4 + -0x18) = in_RAX;
  *(undefined8 *)(lVar4 + -0x10) = 0x156ef2e25;
  return *(undefined8 *)(lVar4 + -0x18);
}



// FUNCTION 14da6b07e FUN_14da6b07e body=3 status=ok
// SIG undefined FUN_14da6b07e(void)

void FUN_14da6b07e(void)

{
  return;
}



// FUNCTION 14da6b106 FUN_14da6b106 body=155 status=ok
// SIG undefined FUN_14da6b106(void)

void FUN_14da6b106(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_RAX;
  longlong lVar1;
  undefined8 unaff_RBP;
  longlong unaff_RSI;
  undefined8 unaff_retaddr;
  undefined8 local_res10;
  longlong local_res20;
  
  lVar1 = unaff_RSI - local_res20;
  *(undefined8 *)(lVar1 + -8) = local_res10;
  *(undefined8 *)(lVar1 + -0x10) = unaff_RBP;
  *(undefined8 *)(lVar1 + -0x10) = unaff_retaddr;
  *(undefined8 *)(lVar1 + -0x18) = unaff_retaddr;
  *(undefined8 *)(lVar1 + -0x20) = in_RAX;
  *(undefined **)(lVar1 + -0x28) = &DAT_16576a059;
  *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(lVar1 + -8);
  FUN_16576a001(FUN_16576a001,param_2);
  return;
}



// FUNCTION 14da6b1b3 FUN_14da6b1b3 body=35 status=ok
// SIG undefined FUN_14da6b1b3(void)

void FUN_14da6b1b3(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14da6b37e FUN_14da6b37e body=159 status=ok
// SIG undefined FUN_14da6b37e(void)

void FUN_14da6b37e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)&LAB_166d52623)(param_1,param_2,param_3);
  return;
}



// FUNCTION 14da6b4c4 FUN_14da6b4c4 body=98 status=ok
// SIG undefined FUN_14da6b4c4(void)

void FUN_14da6b4c4(void)

{
  return;
}



// FUNCTION 14da6b994 FUN_14da6b994 body=155 status=ok
// SIG undefined FUN_14da6b994(void)

void FUN_14da6b994(undefined8 param_1)

{
  FUN_157392e60((char)param_1,param_1);
  return;
}



// FUNCTION 14da6ba2f FUN_14da6ba2f body=493 status=ok
// SIG undefined FUN_14da6ba2f(void)

/* WARNING: Removing unreachable block (ram,0x00014da6bad6) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da6ba2f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000010;
  
  (*(code *)0x1571949b2)(in_stack_00000010,param_2,param_3,0x100);
  return;
}



// FUNCTION 14da6bb82 FUN_14da6bb82 body=179 status=ok
// SIG undefined FUN_14da6bb82(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da6bb82(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  char unaff_DIL;
  
  if (-1 < unaff_DIL) {
    thunk_FUN_1621933cf();
    return;
  }
  uVar1 = *(ulonglong *)(unaff_RSI + -0x28);
  (*(code *)0x1646eebd7)
            (param_1,(short)CONCAT71(0xffffffffffffff,unaff_DIL),uVar1,
             ~(uVar1 & unaff_RBP) & (uVar1 | unaff_RBP));
  return;
}



// FUNCTION 14da6bc35 FUN_14da6bc35 body=141 status=ok
// SIG undefined FUN_14da6bc35(void)

void FUN_14da6bc35(void)

{
  FUN_16673d855();
  FUN_14da6bcc5();
  return;
}



// FUNCTION 14da6bcc5 FUN_14da6bcc5 body=9 status=ok
// SIG undefined FUN_14da6bcc5(void)

void FUN_14da6bcc5(void)

{
  return;
}



// FUNCTION 14da6c052 FUN_14da6c052 body=165 status=ok
// SIG undefined FUN_14da6c052(void)

void FUN_14da6c052(void)

{
  ulonglong uVar1;
  longlong in_R9;
  
  uVar1 = *(ulonglong *)(in_R9 + 8);
  *(ulonglong *)(in_R9 + 8) = *(ulonglong *)(in_R9 + 8) | 0xffffffff8b165c46;
  *(ulonglong *)(in_R9 + 8) = ~(~(uVar1 & 0xffffffff8b165c46) & *(ulonglong *)(in_R9 + 8));
  return;
}



// FUNCTION 14da6c195 FUN_14da6c195 body=259 status=ok
// SIG undefined FUN_14da6c195(void)

void FUN_14da6c195(void)

{
  FUN_1618cb1e3();
  FUN_15b3569e0();
  return;
}



// FUNCTION 14da6c299 FUN_14da6c299 body=80 status=ok
// SIG undefined FUN_14da6c299(void)

void FUN_14da6c299(void)

{
  return;
}



// FUNCTION 14da6c316 FUN_14da6c316 body=145 status=ok
// SIG undefined FUN_14da6c316(void)

/* WARNING: Removing unreachable block (ram,0x00014da6c39c) */
/* WARNING: Removing unreachable block (ram,0x00014da6c3a7) */
/* WARNING: Removing unreachable block (ram,0x000166ba9ab9) */
/* WARNING: Removing unreachable block (ram,0x000166ba9ac5) */
/* WARNING: Removing unreachable block (ram,0x000160d28799) */
/* WARNING: Removing unreachable block (ram,0x000160d28822) */
/* WARNING: Removing unreachable block (ram,0x000160d2882d) */
/* WARNING: Removing unreachable block (ram,0x000160d28898) */
/* WARNING: Removing unreachable block (ram,0x000160d28893) */
/* WARNING: Removing unreachable block (ram,0x000160d2889f) */
/* WARNING: Removing unreachable block (ram,0x000160d28828) */
/* WARNING: Removing unreachable block (ram,0x0001627557fd) */
/* WARNING: Removing unreachable block (ram,0x00014da6c3a2) */

void FUN_14da6c316(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong *puVar1;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  
  param_5 = param_5 ^ unaff_R15;
  puVar1 = (ulonglong *)(param_5 - 8);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ param_2;
  *(undefined8 *)(param_5 - 0x10) = unaff_R12;
  *(undefined8 *)(param_5 - 0x18) = unaff_R12;
  *(undefined8 *)(param_5 - 0x20) = unaff_R14;
  FUN_160d28799(param_1,&DAT_16275581f,param_3);
  return;
}



// FUNCTION 14da6c3a7 FUN_14da6c3a7 body=157 status=ok
// SIG undefined FUN_14da6c3a7(void)

void FUN_14da6c3a7(void)

{
  return;
}



// FUNCTION 14da6c938 FUN_14da6c938 body=22 status=ok
// SIG undefined FUN_14da6c938(void)

void FUN_14da6c938(void)

{
  FUN_14d7a4ded();
  return;
}



// FUNCTION 14da6cb0c FUN_14da6cb0c body=187 status=ok
// SIG undefined FUN_14da6cb0c(void)

void FUN_14da6cb0c(ulonglong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RBP;
  longlong unaff_RDI;
  ulonglong unaff_R13;
  
  *(ulonglong *)(&stack0xfffffffff5ea8a15 + unaff_RBP) = *(ulonglong *)(unaff_RDI + -0x40);
  uVar2 = *(ulonglong *)(&stack0xfffffffff5ea8a15 + unaff_RBP);
  puVar1 = (ulonglong *)(&stack0xfffffffff5ea8a15 + unaff_RBP);
  *puVar1 = ~param_1 & uVar2 | param_1;
  *(int *)puVar1 = 0x18b109b8;
  *(int *)puVar1 = (int)*puVar1 + 0x24c94cd3;
  *(int *)((longlong)puVar1 + 4) = 0;
  uVar3 = *puVar1;
  *puVar1 = unaff_R13;
  puVar1[-1] = unaff_R13;
  *puVar1 = (ulonglong)&LAB_14da6cbc8;
  FUN_164f82800(param_1,0,(param_1 ^ 0xffffffffffffffff | uVar2) + param_1 + 1,
                ~(uVar3 & 0xffffffffc285a974));
  return;
}



// FUNCTION 14da6cbce FUN_14da6cbce body=136 status=ok
// SIG undefined FUN_14da6cbce(void)

void FUN_14da6cbce(void)

{
  FUN_157546de5();
  return;
}



// FUNCTION 14da6cc57 FUN_14da6cc57 body=254 status=ok
// SIG undefined FUN_14da6cc57(void)

void FUN_14da6cc57(undefined8 param_1)

{
  FUN_1570be09a(param_1);
  return;
}



// FUNCTION 14da6cd79 FUN_14da6cd79 body=556 status=ok
// SIG undefined FUN_14da6cd79(void)

/* WARNING: Removing unreachable block (ram,0x00014da6ce07) */
/* WARNING: Removing unreachable block (ram,0x00014da6cf8b) */
/* WARNING: Removing unreachable block (ram,0x00014da6cf7c) */

void FUN_14da6cd79(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_157210128(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14da6cfac FUN_14da6cfac body=36 status=ok
// SIG undefined FUN_14da6cfac(void)

ulonglong FUN_14da6cfac(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  return *(ulonglong *)(unaff_RSI + -0x40) ^ unaff_RBP;
}



// FUNCTION 14da6d0ca FUN_14da6d0ca body=162 status=ok
// SIG undefined FUN_14da6d0ca(void)

void FUN_14da6d0ca(void)

{
  ulonglong in_RAX;
  uint unaff_EBX;
  uint unaff_R12D;
  undefined4 unaff_000000a4;
  
  (*(code *)&LAB_14dffe092)
            (0xfffffffff9525b98,(unaff_R12D - (unaff_EBX | unaff_R12D)) + unaff_EBX,
             *(ulonglong *)(CONCAT44(unaff_000000a4,unaff_R12D) + -0x80) ^ in_RAX,
             *(ulonglong *)(CONCAT44(unaff_000000a4,unaff_R12D) + -0x30) ^ in_RAX);
  return;
}



// FUNCTION 14da6d20e FUN_14da6d20e body=105 status=ok
// SIG undefined FUN_14da6d20e(void)

void FUN_14da6d20e(void)

{
  FUN_161107e48();
  return;
}



// FUNCTION 14da6d279 FUN_14da6d279 body=145 status=ok
// SIG undefined FUN_14da6d279(void)

/* WARNING: Removing unreachable block (ram,0x00014da6d2fc) */

void FUN_14da6d279(HDEVINFO param_1,PSP_DEVINFO_DATA param_2,GUID *param_3,DWORD param_4,
                  undefined8 param_5,undefined8 param_6,PSP_DEVICE_INTERFACE_DATA param_7)

{
                    /* WARNING: Could not recover jumptable at 0x00014d89b98c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetupDiEnumDeviceInterfaces(param_1,param_2,param_3,param_4,param_7);
  return;
}



// FUNCTION 14da6d4d7 FUN_14da6d4d7 body=340 status=ok
// SIG undefined FUN_14da6d4d7(void)

/* WARNING: Removing unreachable block (ram,0x00014da6d59d) */

void FUN_14da6d4d7(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (*(ulonglong *)(unaff_R13 + -0x78) != unaff_R15) {
    FUN_15afa29aa();
    return;
  }
  FUN_1615420fd(0,~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) &
                   (0xffffffffffffffff - *(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)));
  return;
}



// FUNCTION 14da6d62d FUN_14da6d62d body=166 status=ok
// SIG undefined FUN_14da6d62d(void)

void FUN_14da6d62d(void)

{
  return;
}



// FUNCTION 14da6d6d3 FUN_14da6d6d3 body=121 status=ok
// SIG undefined FUN_14da6d6d3(void)

void FUN_14da6d6d3(void)

{
  FUN_14dbfec25(FUN_14dbfec25);
  return;
}



// FUNCTION 14da6d86a FUN_14da6d86a body=133 status=ok
// SIG undefined FUN_14da6d86a(void)

void FUN_14da6d86a(undefined8 param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong unaff_R15;
  
  uVar1 = 0xffffffffffffffff - (param_2 & unaff_R15);
  *(undefined4 *)
   (&stack0xffffffffffffffff + ((param_4 | unaff_R15) - (uVar1 | param_4 | unaff_R15)) + uVar1 + 1)
       = 0xe02e7c62;
  (*(code *)0x15af83515)();
  return;
}



// FUNCTION 14da6d8f1 FUN_14da6d8f1 body=270 status=ok
// SIG undefined FUN_14da6d8f1(void)

/* WARNING: Removing unreachable block (ram,0x00014da6d983) */
/* WARNING: Removing unreachable block (ram,0x00014da6d973) */

void FUN_14da6d8f1(void)

{
  FUN_1627065e8();
  return;
}



// FUNCTION 14da6da05 FUN_14da6da05 body=134 status=ok
// SIG undefined FUN_14da6da05(void)

void FUN_14da6da05(void)

{
  return;
}



// FUNCTION 14da6db63 FUN_14da6db63 body=71 status=ok
// SIG undefined FUN_14da6db63(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14da6db63(void)

{
  longlong unaff_RDI;
  uint in_stack_00000010;
  
  *(uint *)(unaff_RDI + 0x28) = *(uint *)(unaff_RDI + 0x28) ^ in_stack_00000010;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14da6dc18 FUN_14da6dc18 body=94 status=ok
// SIG undefined FUN_14da6dc18(void)

longlong FUN_14da6dc18(void)

{
  ulonglong in_RAX;
  longlong unaff_RBP;
  ulonglong unaff_R15;
  
  return -1 - (((unaff_RBP - 1U) + in_RAX) - (unaff_RBP - 1U & in_RAX) & ~(in_RAX & ~unaff_R15));
}



// FUNCTION 14da6dd39 FUN_14da6dd39 body=197 status=ok
// SIG undefined FUN_14da6dd39(void)

void FUN_14da6dd39(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  ulonglong local_res20;
  
  uVar1 = ~((~param_1 | *(ulonglong *)(unaff_RDI + -0x30)) &
           (*(ulonglong *)(unaff_RDI + -0x30) ^ 0xffffffffffffffff | param_1));
  FUN_16182e3d8(param_1,uVar1,FUN_16182e3d8,*(undefined8 *)(unaff_RDI + -0x60));
  *(undefined8 *)((local_res20 ^ uVar1) - 8) = 0x32ccc;
  FUN_161668703();
  return;
}



// FUNCTION 14da6df79 FUN_14da6df79 body=635 status=ok
// SIG undefined FUN_14da6df79(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da6df79(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  longlong unaff_RDI;
  
  FUN_16295d796(param_1,~*(ulonglong *)(unaff_RDI + -0x68),in_RAX & param_3 ^ 0xffffffffffffffff);
  FUN_1577f8426();
  FUN_166bc79e4();
  FUN_1655a50d3();
  return;
}



// FUNCTION 14da6e1fa FUN_14da6e1fa body=283 status=ok
// SIG undefined FUN_14da6e1fa(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014da6e27b) */
/* WARNING: Removing unreachable block (ram,0x00014da6e281) */
/* WARNING: Removing unreachable block (ram,0x000160ecf2ba) */
/* WARNING: Removing unreachable block (ram,0x00014da6e30c) */
/* WARNING: Removing unreachable block (ram,0x00014da6e312) */
/* WARNING: Removing unreachable block (ram,0x00014da6e317) */
/* WARNING: Removing unreachable block (ram,0x00014da6e350) */
/* WARNING: Removing unreachable block (ram,0x000165df83eb) */

void FUN_14da6e1fa(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 unaff_RBP;
  undefined1 *unaff_RSI;
  ulonglong unaff_R15;
  undefined1 *unaff_retaddr;
  ulonglong local_res20;
  
  uVar1 = local_res20 ^ unaff_R15;
  *(undefined8 *)(uVar1 - 8) = unaff_RBP;
  *(undefined8 *)(uVar1 - 0x10) = param_1;
  *(undefined8 *)(uVar1 - 0x18) = param_1;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x18) = param_2;
  *(undefined **)(uVar1 - 8) = &DAT_156ad4f6d;
  **(char **)(uVar1 - 0x18) = -**(char **)(uVar1 - 0x18);
  *unaff_retaddr = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14da6e317 FUN_14da6e317 body=166 status=ok
// SIG undefined FUN_14da6e317(void)

/* WARNING: Removing unreachable block (ram,0x000165df83eb) */

void FUN_14da6e317(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x80) | in_RAX;
  FUN_156fff5f4(uVar1,param_3,~(*(ulonglong *)(unaff_R12 + -0x80) & in_RAX) & uVar1,
                ~((~in_RAX | *(ulonglong *)(unaff_R12 + -0x30)) &
                 (~*(ulonglong *)(unaff_R12 + -0x30) | in_RAX)));
  return;
}



// FUNCTION 14da6e512 FUN_14da6e512 body=140 status=ok
// SIG undefined FUN_14da6e512(void)

void FUN_14da6e512(void)

{
  FUN_1665252ac();
  return;
}



// FUNCTION 14da6e659 FUN_14da6e659 body=134 status=ok
// SIG undefined FUN_14da6e659(void)

void FUN_14da6e659(longlong param_1)

{
  longlong lVar1;
  undefined8 in_RAX;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_retaddr;
  undefined2 local_res8;
  undefined6 uStackX_a;
  undefined8 local_res10;
  
  param_1 = param_1 - local_res10;
  *(undefined8 *)(param_1 + -8) = unaff_R12;
  *(undefined8 *)(param_1 + -0x10) = unaff_R12;
  *(undefined8 *)(param_1 + -0x18) = in_RAX;
  *(undefined4 *)(param_1 + -0x18) = 0x13208eb9;
  *(undefined4 *)(param_1 + -0x14) = 0;
  lVar1 = *(longlong *)(param_1 + -0x18);
  *(ulonglong *)(param_1 + -0x18) =
       (ulonglong)((local_res8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res8 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res8 & 0x200) != 0) * 0x200 | (ulonglong)((local_res8 & 0x80) != 0) * 0x80
       | (ulonglong)((local_res8 & 0x40) != 0) * 0x40 | (ulonglong)((local_res8 & 0x10) != 0) * 0x10
       | (ulonglong)((local_res8 & 4) != 0) * 4 | (ulonglong)((local_res8 & 1) != 0) |
       (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 | (ulonglong)((uStackX_a & 4) != 0) * 0x40000
  ;
  *(undefined8 *)(param_1 + -0x18) = unaff_retaddr;
  *(longlong *)(param_1 + -8) = lVar1 + -0xe628967;
  *(undefined8 *)(param_1 + -0x10) = unaff_R13;
  *(undefined8 *)(param_1 + -0x18) = unaff_R13;
  *(undefined8 *)(param_1 + -0x10) = 0x156ef2e25;
  return;
}



// FUNCTION 14da6e6f6 FUN_14da6e6f6 body=148 status=ok
// SIG undefined FUN_14da6e6f6(void)

void FUN_14da6e6f6(void)

{
  return;
}



// FUNCTION 14da6ea23 FUN_14da6ea23 body=138 status=ok
// SIG undefined FUN_14da6ea23(void)

/* WARNING: Instruction at (ram,0x00014da6eaea) overlaps instruction at (ram,0x00014da6eae9)
    */
/* WARNING: Removing unreachable block (ram,0x00014da6eaa2) */
/* WARNING: Removing unreachable block (ram,0x00014da6eaad) */
/* WARNING: Removing unreachable block (ram,0x00014da6eaea) */
/* WARNING: Removing unreachable block (ram,0x00014da6eae3) */
/* WARNING: Removing unreachable block (ram,0x00014da6eae9) */
/* WARNING: Removing unreachable block (ram,0x00014da6eb4c) */
/* WARNING: Removing unreachable block (ram,0x00014da6eb52) */
/* WARNING: Removing unreachable block (ram,0x00014da6eb5f) */
/* WARNING: Removing unreachable block (ram,0x00014da6eb65) */
/* WARNING: Removing unreachable block (ram,0x00014da6eaa8) */

void FUN_14da6ea23(void)

{
  FUN_166221cd3();
  return;
}



// FUNCTION 14da6eaad FUN_14da6eaad body=760 status=ok
// SIG undefined FUN_14da6eaad(void)

/* WARNING: Instruction at (ram,0x00014da6eaea) overlaps instruction at (ram,0x00014da6eae9)
    */
/* WARNING: Removing unreachable block (ram,0x00014da6eae3) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x00014da6eaf1 */
/* WARNING: Removing unreachable block (ram,0x00014da6eb65) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da6eaad(void)

{
  uint unaff_retaddr;
  ulonglong uVar1;
  
  uVar1 = (ulonglong)~(~(unaff_retaddr & 0xcadec0d4) & (unaff_retaddr | 0xcadec0d4));
  if ((~(uVar1 & 0xffffffff941df689) & (uVar1 | 0xffffffff941df689)) == 0) {
    FUN_14da2d3f8();
    return;
  }
  FUN_14da2d3f8();
  return;
}



// FUNCTION 14da6ecb1 FUN_14da6ecb1 body=430 status=ok
// SIG undefined FUN_14da6ecb1(void)

/* WARNING: Removing unreachable block (ram,0x00014da6ed4c) */
/* WARNING: Removing unreachable block (ram,0x00014da6edbf) */
/* WARNING: Removing unreachable block (ram,0x00014da6edc5) */
/* WARNING: Removing unreachable block (ram,0x00014da6edca) */
/* WARNING: Removing unreachable block (ram,0x00015718e0c2) */
/* WARNING: Removing unreachable block (ram,0x00015718e1af) */
/* WARNING: Removing unreachable block (ram,0x00015718e1b4) */
/* WARNING: Removing unreachable block (ram,0x00014da6ed36) */
/* WARNING: Removing unreachable block (ram,0x00014da6ed41) */
/* WARNING: Removing unreachable block (ram,0x00014da6ed47) */
/* WARNING: Removing unreachable block (ram,0x00014da6ed3c) */

void FUN_14da6ecb1(void)

{
  FUN_1613aeeb0();
  return;
}



// FUNCTION 14da6ee60 FUN_14da6ee60 body=10 status=ok
// SIG undefined FUN_14da6ee60(void)

void FUN_14da6ee60(void)

{
  (*(code *)0x156ead5b6)();
  return;
}



// FUNCTION 14da6f1fc FUN_14da6f1fc body=303 status=ok
// SIG undefined FUN_14da6f1fc(void)

void FUN_14da6f1fc(void)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x90);
  puVar2 = (ulonglong *)FUN_1616693ac();
  *puVar2 = *puVar2 ^ 0xffffffffffffffff;
  *puVar2 = *puVar2 | unaff_R15;
  *puVar2 = ~(uVar1 & *puVar2);
  return;
}



// FUNCTION 14da6f32c FUN_14da6f32c body=149 status=ok
// SIG undefined FUN_14da6f32c(void)

/* WARNING: Removing unreachable block (ram,0x00014da6f3c3) */
/* WARNING: Removing unreachable block (ram,0x00014da6f3b3) */

void FUN_14da6f32c(void)

{
  FUN_16582167f();
  return;
}



// FUNCTION 14da6f3c3 FUN_14da6f3c3 body=14 status=ok
// SIG undefined FUN_14da6f3c3(void)

void FUN_14da6f3c3(void)

{
  FUN_16131bb16();
  return;
}



// FUNCTION 14da6f3d1 FUN_14da6f3d1 body=186 status=ok
// SIG undefined FUN_14da6f3d1(void)

/* WARNING: Removing unreachable block (ram,0x0001621019a3) */
/* WARNING: Removing unreachable block (ram,0x0001621019a9) */
/* WARNING: Removing unreachable block (ram,0x00014da6f466) */
/* WARNING: Removing unreachable block (ram,0x00014da6f46c) */
/* WARNING: Removing unreachable block (ram,0x00014da6f471) */

void FUN_14da6f3d1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RSI;
  
  if (unaff_RSI == 0xc2511) {
    FUN_16131bb16();
    return;
  }
  if (unaff_RSI == 0xc2512) {
    FUN_16210190a();
    return;
  }
  if (unaff_RSI != 0xc2513) {
    FUN_15756a2a5(param_1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 14da6f471 FUN_14da6f471 body=50 status=ok
// SIG undefined FUN_14da6f471(void)

void FUN_14da6f471(void)

{
  return;
}



// FUNCTION 14da6f4f0 FUN_14da6f4f0 body=153 status=ok
// SIG undefined FUN_14da6f4f0(void)

void FUN_14da6f4f0(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined1 unaff_BPL;
  undefined7 unaff_00000029;
  longlong unaff_RSI;
  undefined8 local_res8;
  
  local_res8._0_4_ = 0x2477f31;
  local_res8._4_4_ = 0;
  uVar1 = *(ulonglong *)(unaff_RSI + -0x40) | CONCAT71(unaff_00000029,unaff_BPL);
  local_res8 = ~(*(ulonglong *)(unaff_RSI + -0x40) & CONCAT71(unaff_00000029,unaff_BPL)) & uVar1;
  thunk_FUN_156f87898(&local_res8,uVar1,
                      (~param_3 | ~CONCAT71(unaff_00000029,unaff_BPL)) &
                      (param_3 + CONCAT71(unaff_00000029,unaff_BPL)) -
                      (param_3 & CONCAT71(unaff_00000029,unaff_BPL)));
  return;
}



// FUNCTION 14da6f678 FUN_14da6f678 body=120 status=ok
// SIG undefined FUN_14da6f678(void)

/* WARNING: Removing unreachable block (ram,0x00014da6f6e1) */

void FUN_14da6f678(void)

{
  FUN_1628a4bac();
  return;
}



// FUNCTION 14da6f70b FUN_14da6f70b body=425 status=ok
// SIG undefined FUN_14da6f70b(void)

/* WARNING: Removing unreachable block (ram,0x000156a672f6) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da6f70b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res8;
  
  FUN_160f24197(param_1,param_2,param_3,local_res8);
  FUN_166d8b8ce(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,0xffffffffba8e53c8);
  return;
}



// FUNCTION 14da6f9f6 FUN_14da6f9f6 body=908 status=ok
// SIG undefined FUN_14da6f9f6(void)

/* WARNING: Instruction at (ram,0x000166d271b7) overlaps instruction at (ram,0x000166d271b6)
    */
/* WARNING: Removing unreachable block (ram,0x00014da6fbd7) */
/* WARNING: Removing unreachable block (ram,0x00014da6fc46) */
/* WARNING: Removing unreachable block (ram,0x00014da6fc4a) */
/* WARNING: Removing unreachable block (ram,0x00014da6fc73) */
/* WARNING: Removing unreachable block (ram,0x00014da6fc79) */
/* WARNING: Removing unreachable block (ram,0x000166d2719b) */
/* WARNING: Removing unreachable block (ram,0x000166d271b7) */
/* WARNING: Removing unreachable block (ram,0x000166d271b0) */
/* WARNING: Removing unreachable block (ram,0x000166d271be) */
/* WARNING: Removing unreachable block (ram,0x00014da6fac5) */
/* WARNING: Removing unreachable block (ram,0x00014da6fb4b) */
/* WARNING: Removing unreachable block (ram,0x00015735c3ac) */
/* WARNING: Removing unreachable block (ram,0x00014da6fb51) */

void FUN_14da6f9f6(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000010;
  
  if (&stack0x00000000 == (undefined1 *)0x0) {
    FUN_1657e0096(param_1,param_2,in_stack_00000010);
    FUN_14e07873d();
    return;
  }
  FUN_14db2679f();
  return;
}



// FUNCTION 14da6fe5e FUN_14da6fe5e body=107 status=ok
// SIG undefined FUN_14da6fe5e(void)

void FUN_14da6fe5e(undefined8 param_1,undefined8 param_2)

{
  FUN_15b1c4bcb(FUN_15b1c4bcb,param_2);
  return;
}



// FUNCTION 14da70059 FUN_14da70059 body=176 status=ok
// SIG undefined FUN_14da70059(void)

/* WARNING: Removing unreachable block (ram,0x000162d7e3e4) */
/* WARNING: Removing unreachable block (ram,0x000162d7e3ea) */
/* WARNING: Removing unreachable block (ram,0x00014da70105) */
/* WARNING: Removing unreachable block (ram,0x000164c557fa) */
/* WARNING: Removing unreachable block (ram,0x000164c5589f) */
/* WARNING: Removing unreachable block (ram,0x000164c558a5) */
/* WARNING: Removing unreachable block (ram,0x00014e060fe5) */
/* WARNING: Removing unreachable block (ram,0x00014e06102f) */
/* WARNING: Removing unreachable block (ram,0x00014da7010b) */
/* WARNING: Removing unreachable block (ram,0x00014da701a1) */
/* WARNING: Removing unreachable block (ram,0x00014da701a6) */
/* WARNING: Removing unreachable block (ram,0x00014da701ac) */
/* WARNING: Removing unreachable block (ram,0x000162d7e2db) */
/* WARNING: Removing unreachable block (ram,0x000162d7e3df) */
/* WARNING: Removing unreachable block (ram,0x0001647aef3e) */

void FUN_14da70059(void)

{
  FUN_164c557fa();
  return;
}



// FUNCTION 14da7010b FUN_14da7010b body=309 status=ok
// SIG undefined FUN_14da7010b(void)

/* WARNING: Removing unreachable block (ram,0x000162d7e3e4) */
/* WARNING: Removing unreachable block (ram,0x000162d7e3ea) */
/* WARNING: Removing unreachable block (ram,0x0001647aef3e) */
/* WARNING: Removing unreachable block (ram,0x00014da701ac) */

void FUN_14da7010b(ulonglong param_1)

{
  char *pcVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong unaff_RDI;
  undefined8 in_R11;
  
  if (-1 < (longlong)(*(ulonglong *)(unaff_RDI + -0x80) ^ param_1)) {
    uVar2 = *(ulonglong *)(unaff_RDI + -0x28);
    lVar5 = ~-*(longlong *)(unaff_RDI + -0x68) + 1;
    pcVar4 = (char *)FUN_161cb9f0a(param_1,lVar5,
                                   *(ulonglong *)(0x2a72 - ~(unaff_RDI - 0x2ae3U)) ^ param_1);
    *pcVar4 = *pcVar4 + (char)pcVar4;
    pcVar1 = (char *)(uVar2 + param_1 + (uVar2 & param_1) * -2 + 0x4800242c);
    *pcVar1 = *pcVar1 + (char)pcVar4;
    puVar6 = (undefined8 *)((ulonglong)&stack0xfffffffffffffff0 & 0xffffffff);
    *(undefined4 *)puVar6 = 0;
    *(undefined4 *)((longlong)puVar6 + 0xc) = *(undefined4 *)puVar6;
    uVar3 = *(undefined8 *)(lVar5 + param_1);
    puVar6[2] = uVar3;
    puVar6[1] = uVar3;
    *puVar6 = uVar3;
    puVar6[-1] = in_R11;
    puVar6[-2] = pcVar4;
    *(undefined4 *)(puVar6 + -2) = 0x31dca8fb;
    *(undefined4 *)((longlong)puVar6 + -0xc) = 0;
    *(code **)((longlong)puVar6 + (puVar6[-2] ^ 0x31dca8f3)) = FUN_1620a756f;
    FUN_1647aef3e(0x2404c7);
    return;
  }
  FUN_162d7e2db();
  return;
}



// FUNCTION 14da70241 thunk_FUN_14da70247 body=5 status=ok
// SIG undefined thunk_FUN_14da70247(void)

void thunk_FUN_14da70247(void)

{
  byte in_CF;
  
  if ((in_CF & 1) == 0) {
    return;
  }
  return;
}



// FUNCTION 14da70247 FUN_14da70247 body=136 status=ok
// SIG undefined FUN_14da70247(void)

void FUN_14da70247(void)

{
  byte in_CF;
  
  if ((in_CF & 1) == 0) {
    return;
  }
  return;
}



// FUNCTION 14da706b0 FUN_14da706b0 body=30 status=ok
// SIG undefined FUN_14da706b0(void)

void FUN_14da706b0(void)

{
  return;
}



// FUNCTION 14da707f0 FUN_14da707f0 body=995 status=ok
// SIG undefined FUN_14da707f0(void)

/* WARNING: Removing unreachable block (ram,0x00014da70883) */
/* WARNING: Removing unreachable block (ram,0x00014da7090c) */
/* WARNING: Removing unreachable block (ram,0x00014e238b3d) */
/* WARNING: Removing unreachable block (ram,0x00014e238bb8) */
/* WARNING: Removing unreachable block (ram,0x00014e238bbe) */
/* WARNING: Removing unreachable block (ram,0x00014e238bd4) */
/* WARNING: Removing unreachable block (ram,0x00016666e330) */
/* WARNING: Removing unreachable block (ram,0x00014da70912) */
/* WARNING: Removing unreachable block (ram,0x00014da70a91) */
/* WARNING: Removing unreachable block (ram,0x00014da70a95) */

void FUN_14da707f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  longlong unaff_RBP;
  undefined8 local_res8;
  
  uVar1 = *(ulonglong *)(unaff_RBP + 0x10);
  *(ulonglong *)(unaff_RBP + 0x10) = ~*(ulonglong *)(unaff_RBP + 0x10);
  uVar2 = *(ulonglong *)(unaff_RBP + 0x10);
  *(ulonglong *)(unaff_RBP + 0x10) = ~*(ulonglong *)(unaff_RBP + 0x10);
  *(ulonglong *)(unaff_RBP + 0x10) = (~(uVar2 & in_RAX) + in_RAX) - *(longlong *)(unaff_RBP + 0x10);
  *(ulonglong *)(unaff_RBP + 0x10) =
       -1 - ((-~*(ulonglong *)(unaff_RBP + 0x10) -
             (~(~*(ulonglong *)(unaff_RBP + 0x10) | ~in_RAX | uVar1) + 2)) + 1);
  FUN_166c11f56(param_1,param_2,param_3,local_res8);
  FUN_162d4a113(ProcessEnvironmentBlock);
  return;
}



// FUNCTION 14da70a1c FUN_14da70a1c body=149 status=ok
// SIG undefined FUN_14da70a1c(void)

void FUN_14da70a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14daa22f8(param_1,param_2,param_3);
  return;
}



// FUNCTION 14da70c9a FUN_14da70c9a body=158 status=ok
// SIG undefined FUN_14da70c9a(void)

void FUN_14da70c9a(void)

{
  return;
}



// FUNCTION 14da70f20 FUN_14da70f20 body=99 status=ok
// SIG undefined FUN_14da70f20(void)

void FUN_14da70f20(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  thunk_FUN_1663b9060(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14da71053 FUN_14da71053 body=160 status=ok
// SIG undefined FUN_14da71053(void)

void FUN_14da71053(void)

{
  return;
}



// FUNCTION 14da710f3 FUN_14da710f3 body=310 status=ok
// SIG undefined FUN_14da710f3(void)

void FUN_14da710f3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong in_RAX;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong unaff_RDI;
  undefined8 in_R10;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong auStack_18 [3];
  
  *(ulonglong *)(&stack0x00000000 + unaff_RDI) =
       ~(~(~(unaff_R15 ^ 0xffffffffffffffff) & ~in_RAX) &
        (~(~in_RAX & unaff_R15) + unaff_R15) - in_RAX);
  *(undefined4 *)(&stack0x00000000 + unaff_RDI) = 0xd0803310;
  *(undefined4 *)(&stack0x00000004 + unaff_RDI) = 0xffffffff;
  uVar1 = *(ulonglong *)(unaff_R13 + *(longlong *)(&stack0x00000000 + unaff_RDI) + 0x2f7fcca8);
  uVar6 = ~(uVar1 & unaff_R15) & (uVar1 | unaff_R15);
  uVar1 = *(ulonglong *)(unaff_R13 + -0x78);
  uVar2 = *(undefined8 *)(unaff_R13 + -0x28);
  *(undefined8 *)(&stack0x00000000 + unaff_RDI) = uVar2;
  *(undefined8 *)((longlong)auStack_18 + unaff_RDI + 0x10) = 0x14da7118d;
  uVar5 = FUN_16561e1cb(uVar1 ^ unaff_R15);
  *(undefined8 *)(&stack0x00000000 + unaff_RDI) = uVar5;
  *(undefined8 *)((longlong)auStack_18 + unaff_RDI + 0x10) = uVar2;
  uVar1 = *(ulonglong *)(&stack0x00000000 + unaff_RDI);
  *(undefined8 *)(&stack0x00000000 + unaff_RDI) = in_R10;
  lVar3 = *(longlong *)(&stack0x00000008 + unaff_RDI);
  *(ulonglong *)(&stack0x00000008 + unaff_RDI) =
       *(ulonglong *)(&stack0x00000008 + unaff_RDI) & uVar1;
  *(ulonglong *)(&stack0x00000008 + unaff_RDI) =
       *(longlong *)(&stack0x00000008 + unaff_RDI) << 1 |
       (ulonglong)(*(longlong *)(&stack0x00000008 + unaff_RDI) < 0);
  *(ulonglong *)(&stack0x00000008 + unaff_RDI) =
       *(ulonglong *)(&stack0x00000008 + unaff_RDI) & 0xfffffffffffffffe;
  lVar4 = *(longlong *)(&stack0x00000008 + unaff_RDI);
  *(undefined8 *)((longlong)auStack_18 + unaff_RDI + 0x10) = param_3;
  *(ulonglong *)((longlong)auStack_18 + unaff_RDI + 8) = unaff_R15;
  *(undefined8 *)((longlong)auStack_18 + unaff_RDI) = 0xffffffffffffff88;
  *(ulonglong *)(&stack0x00000008 + unaff_RDI) = (lVar3 + uVar1) - lVar4;
  *(undefined8 *)(&stack0x00000000 + unaff_RDI) = *(undefined8 *)((longlong)auStack_18 + unaff_RDI);
  *(ulonglong *)((longlong)auStack_18 + unaff_RDI + 0x10) = uVar1;
  *(ulonglong *)((longlong)auStack_18 + unaff_RDI + 8) = uVar6;
  *(ulonglong *)((longlong)auStack_18 + unaff_RDI) = uVar6;
  *(undefined1 **)((longlong)auStack_18 + unaff_RDI + 8) = &LAB_14da71232;
  FUN_165149926();
  return;
}



// FUNCTION 14da712c4 FUN_14da712c4 body=168 status=ok
// SIG undefined FUN_14da712c4(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da712c4(undefined1 param_1)

{
  FUN_156c04507(param_1,0xffffffffffffffff);
  FUN_14da7136e();
  return;
}



// FUNCTION 14da7136e FUN_14da7136e body=162 status=ok
// SIG undefined FUN_14da7136e(void)

void FUN_14da7136e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x160cb2287)(param_1,param_2,param_3);
  return;
}



// FUNCTION 14da71411 FUN_14da71411 body=129 status=ok
// SIG undefined FUN_14da71411(void)

void FUN_14da71411(void)

{
  (*(code *)0x1610918fb)();
  return;
}



// FUNCTION 14da71510 thunk_FUN_14da71516 body=5 status=ok
// SIG undefined thunk_FUN_14da71516(void)

/* WARNING: Removing unreachable block (ram,0x0001668cf1f7) */
/* WARNING: Removing unreachable block (ram,0x0001564a8f17) */
/* WARNING: Removing unreachable block (ram,0x000165761bae) */
/* WARNING: Removing unreachable block (ram,0x000165761bb4) */
/* WARNING: Removing unreachable block (ram,0x000156a4e898) */
/* WARNING: Removing unreachable block (ram,0x000156a4e924) */
/* WARNING: Removing unreachable block (ram,0x000156a4e92a) */
/* WARNING: Removing unreachable block (ram,0x0001627165dd) */
/* WARNING: Removing unreachable block (ram,0x00016271666e) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x0001564a8eeb) */
/* WARNING: Removing unreachable block (ram,0x0001564a8f1c) */
/* WARNING: Removing unreachable block (ram,0x00014da7158e) */
/* WARNING: Removing unreachable block (ram,0x00014da7159a) */
/* WARNING: Removing unreachable block (ram,0x00014da71624) */
/* WARNING: Removing unreachable block (ram,0x00014da7162f) */
/* WARNING: Removing unreachable block (ram,0x00014da7162a) */
/* WARNING: Removing unreachable block (ram,0x0001658997f8) */
/* WARNING: Removing unreachable block (ram,0x000165761b18) */
/* WARNING: Removing unreachable block (ram,0x0001668cf1f1) */

undefined8
thunk_FUN_14da71516(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  ulonglong unaff_R15;
  ulonglong in_stack_00000018;
  
  FUN_1664a20b4(param_1,param_2,param_3,param_4,
                ~(in_stack_00000018 & unaff_R15) & (in_stack_00000018 | unaff_R15));
  if ((longlong)
      (~(param_1 & ~*(ulonglong *)(unaff_RDI + -0x80)) &
       (~param_1 & ~*(ulonglong *)(unaff_RDI + -0x80) | param_1) ^ 0xffffffffffffffff) < 0) {
    uVar1 = (*(code *)&LAB_164badb66)();
    return uVar1;
  }
  uVar1 = FUN_162321ba7();
  return uVar1;
}



// FUNCTION 14da71516 FUN_14da71516 body=470 status=ok
// SIG undefined FUN_14da71516(void)

/* WARNING: Removing unreachable block (ram,0x0001668cf1f7) */
/* WARNING: Removing unreachable block (ram,0x0001564a8f17) */
/* WARNING: Removing unreachable block (ram,0x000165761bae) */
/* WARNING: Removing unreachable block (ram,0x000165761bb4) */
/* WARNING: Removing unreachable block (ram,0x000156a4e898) */
/* WARNING: Removing unreachable block (ram,0x000156a4e924) */
/* WARNING: Removing unreachable block (ram,0x000156a4e92a) */
/* WARNING: Removing unreachable block (ram,0x0001627165dd) */
/* WARNING: Removing unreachable block (ram,0x00016271666e) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x0001564a8eeb) */
/* WARNING: Removing unreachable block (ram,0x0001564a8f1c) */
/* WARNING: Removing unreachable block (ram,0x00014da7158e) */
/* WARNING: Removing unreachable block (ram,0x00014da7159a) */
/* WARNING: Removing unreachable block (ram,0x00014da71624) */
/* WARNING: Removing unreachable block (ram,0x00014da7162f) */
/* WARNING: Removing unreachable block (ram,0x00014da7162a) */
/* WARNING: Removing unreachable block (ram,0x0001658997f8) */
/* WARNING: Removing unreachable block (ram,0x000165761b18) */
/* WARNING: Removing unreachable block (ram,0x0001668cf1f1) */

undefined8 FUN_14da71516(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  ulonglong unaff_R15;
  ulonglong in_stack_00000018;
  
  FUN_1664a20b4(param_1,param_2,param_3,param_4,
                ~(in_stack_00000018 & unaff_R15) & (in_stack_00000018 | unaff_R15));
  if ((longlong)
      (~(param_1 & ~*(ulonglong *)(unaff_RDI + -0x80)) &
       (~param_1 & ~*(ulonglong *)(unaff_RDI + -0x80) | param_1) ^ 0xffffffffffffffff) < 0) {
    uVar1 = (*(code *)&LAB_164badb66)();
    return uVar1;
  }
  uVar1 = FUN_162321ba7();
  return uVar1;
}



// FUNCTION 14da71814 FUN_14da71814 body=1048 status=ok
// SIG undefined FUN_14da71814(void)

/* WARNING: Removing unreachable block (ram,0x00014da71948) */
/* WARNING: Removing unreachable block (ram,0x00014da71953) */
/* WARNING: Removing unreachable block (ram,0x00014da719ec) */
/* WARNING: Removing unreachable block (ram,0x00014da719f1) */
/* WARNING: Removing unreachable block (ram,0x00014da719f7) */
/* WARNING: Removing unreachable block (ram,0x0001621fcf9d) */
/* WARNING: Removing unreachable block (ram,0x0001621fd00c) */
/* WARNING: Removing unreachable block (ram,0x0001621fd010) */
/* WARNING: Removing unreachable block (ram,0x00014df42565) */
/* WARNING: Removing unreachable block (ram,0x00014da7194e) */
/* WARNING: Removing unreachable block (ram,0x0001621fd038) */
/* WARNING: Removing unreachable block (ram,0x0001621fd044) */
/* WARNING: Removing unreachable block (ram,0x0001621fd04f) */
/* WARNING: Removing unreachable block (ram,0x0001621fd07b) */
/* WARNING: Removing unreachable block (ram,0x0001621fd07f) */
/* WARNING: Removing unreachable block (ram,0x00015b905624) */

undefined8 FUN_14da71814(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_RDI;
  undefined2 local_res8;
  
  FUN_156dfa386(param_1,CONCAT62((int6)((ulonglong)param_2 >> 0x10),local_res8) & 0xffffffffffff0100
                        | 0xfeff,param_3);
  FUN_161df3ec3();
  return unaff_RDI;
}



// FUNCTION 14da71b1c FUN_14da71b1c body=154 status=ok
// SIG undefined FUN_14da71b1c(void)

/* WARNING: Removing unreachable block (ram,0x00014da71b4f) */

void FUN_14da71b1c(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1666808da(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,*(undefined8 *)(unaff_R13 + -0x28));
  return;
}



// FUNCTION 14da71c46 FUN_14da71c46 body=121 status=ok
// SIG undefined FUN_14da71c46(void)

void FUN_14da71c46(undefined8 param_1)

{
  longlong unaff_RDI;
  
  FUN_16247e92f(param_1,*(undefined8 *)(unaff_RDI + -0x68));
  (*(code *)0x1570f1ac5)();
  return;
}



// FUNCTION 14da71ccb FUN_14da71ccb body=175 status=ok
// SIG undefined FUN_14da71ccb(void)

void FUN_14da71ccb(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  short in_AX;
  longlong in_R11;
  longlong unaff_R12;
  
  (*(code *)0x1570f1ac5)
            ((char)param_1,
             CONCAT62((int6)((ulonglong)*(undefined8 *)(param_1 + -0x28) >> 0x10),in_AX + 0x7576),
             param_3,-(unaff_R12 - in_R11));
  return;
}



// FUNCTION 14da71f5c FUN_14da71f5c body=332 status=ok
// SIG undefined FUN_14da71f5c(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da71f5c(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong lVar2;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x80);
  lVar2 = ~(~in_RAX & uVar1) + uVar1 + 1;
  FUN_157192dc7(~in_RAX & uVar1 | in_RAX,lVar2,lVar2,*(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
  FUN_166d9cb28();
  return;
}



// FUNCTION 14da72313 FUN_14da72313 body=57 status=ok
// SIG undefined FUN_14da72313(void)

void FUN_14da72313(void)

{
  FUN_14d7a4a06();
  return;
}



// FUNCTION 14da723bf FUN_14da723bf body=300 status=ok
// SIG undefined FUN_14da723bf(void)

void FUN_14da723bf(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  undefined1 local_10 [8];
  ulonglong local_8;
  
  local_8 = *(ulonglong *)(unaff_RDI + -0x98) ^ param_1;
  (*(code *)0x1628c45c3)(local_10,0x1628c45c3,param_3);
  return;
}



// FUNCTION 14da7245a FUN_14da7245a body=141 status=ok
// SIG undefined FUN_14da7245a(void)

/* WARNING: Removing unreachable block (ram,0x00014da724e3) */

void FUN_14da7245a(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong in_RAX;
  ulonglong in_R9;
  longlong in_R10;
  longlong in_stack_00000008;
  
  *(ulonglong *)(in_stack_00000008 + 0x10) = ~*(ulonglong *)(in_stack_00000008 + 0x10);
  *(longlong *)(in_stack_00000008 + 0x10) =
       (in_R10 + in_RAX) - *(longlong *)(in_stack_00000008 + 0x10);
  uVar1 = *(ulonglong *)(in_stack_00000008 + 0x10);
  *(undefined8 *)(in_stack_00000008 + 0x10) = 0x45ff5f64;
  uVar2 = *(ulonglong *)(in_stack_00000008 + 0x10);
  *(ulonglong *)(in_stack_00000008 + 0x10) =
       *(ulonglong *)(in_stack_00000008 + 0x10) | 0xffffffffba00a09b;
  *(ulonglong *)(in_stack_00000008 + 0x10) =
       ~(~(uVar2 & 0xffffffffba00a09b) & *(ulonglong *)(in_stack_00000008 + 0x10));
  *(longlong *)(in_stack_00000008 + 0x10) =
       *(longlong *)(in_stack_00000008 + 0x10) - ~(in_R9 & uVar1);
  *(longlong *)(in_stack_00000008 + 0x10) = -*(longlong *)(in_stack_00000008 + 0x10);
  FUN_1564a1ccf();
  return;
}



// FUNCTION 14da724e9 FUN_14da724e9 body=61 status=ok
// SIG undefined FUN_14da724e9(void)

void FUN_14da724e9(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14da726b7 FUN_14da726b7 body=132 status=ok
// SIG undefined FUN_14da726b7(void)

void FUN_14da726b7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14dc818fe(FUN_14dc818fe,param_2,param_3,param_4);
  return;
}



// FUNCTION 14da7273c FUN_14da7273c body=217 status=ok
// SIG undefined FUN_14da7273c(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14da7273c(undefined8 param_1)

{
  FUN_1574009f0(param_1);
  return 0xfffffffea8bff60f;
}



// FUNCTION 14da7286a thunk_FUN_14da72870 body=5 status=ok
// SIG undefined thunk_FUN_14da72870(void)

/* WARNING: Removing unreachable block (ram,0x00014da728f9) */

void thunk_FUN_14da72870(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x88) | 0x47a5b264a7960000;
  uVar2 = ~*(ulonglong *)(unaff_R12 + -0x88) & 0x47a5b264a7960000 | 0xb85a4d9b5869ffff;
  if ((uVar2 - 1) - ~((~(~uVar2 & uVar1) + uVar1) - uVar2) == -1) {
    (*(code *)&LAB_16684dacf)
              (param_1,*(longlong *)(unaff_R12 + -0x70),-*(longlong *)(unaff_R12 + -0x70),
               &LAB_16684dacf);
    return;
  }
  FUN_16176887d();
  return;
}



// FUNCTION 14da72870 FUN_14da72870 body=293 status=ok
// SIG undefined FUN_14da72870(void)

/* WARNING: Removing unreachable block (ram,0x00014da728f9) */

void FUN_14da72870(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x88) | 0x47a5b264a7960000;
  uVar2 = ~*(ulonglong *)(unaff_R12 + -0x88) & 0x47a5b264a7960000 | 0xb85a4d9b5869ffff;
  if ((uVar2 - 1) - ~((~(~uVar2 & uVar1) + uVar1) - uVar2) == -1) {
    (*(code *)&LAB_16684dacf)
              (param_1,*(longlong *)(unaff_R12 + -0x70),-*(longlong *)(unaff_R12 + -0x70),
               &LAB_16684dacf);
    return;
  }
  FUN_16176887d();
  return;
}



// FUNCTION 14da72ad5 FUN_14da72ad5 body=156 status=ok
// SIG undefined FUN_14da72ad5(void)

void FUN_14da72ad5(undefined8 param_1)

{
  (*(code *)&LAB_1571ecd57)(param_1);
  return;
}



// FUNCTION 14da72c11 FUN_14da72c11 body=156 status=ok
// SIG undefined FUN_14da72c11(void)

void FUN_14da72c11(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1658d22d9(param_1,param_2,param_3,8);
  return;
}



// FUNCTION 14da72df0 FUN_14da72df0 body=308 status=ok
// SIG undefined FUN_14da72df0(void)

/* WARNING: Removing unreachable block (ram,0x00014deaa34f) */
/* WARNING: Removing unreachable block (ram,0x00014deaa366) */
/* WARNING: Removing unreachable block (ram,0x00014deaa35b) */
/* WARNING: Removing unreachable block (ram,0x00014da72e93) */
/* WARNING: Removing unreachable block (ram,0x00014deaa2a0) */

void FUN_14da72df0(void)

{
  FUN_14deaa2a0();
  return;
}



// FUNCTION 14da72fc4 FUN_14da72fc4 body=743 status=ok
// SIG undefined FUN_14da72fc4(void)

/* WARNING: Removing unreachable block (ram,0x0001651409e6) */
/* WARNING: Removing unreachable block (ram,0x0001651409f7) */
/* WARNING: Removing unreachable block (ram,0x00014da73065) */
/* WARNING: Removing unreachable block (ram,0x00014da7305b) */
/* WARNING: Removing unreachable block (ram,0x00014da730e0) */
/* WARNING: Removing unreachable block (ram,0x00014da730e5) */
/* WARNING: Removing unreachable block (ram,0x00014da730f6) */
/* WARNING: Removing unreachable block (ram,0x00014da7316c) */
/* WARNING: Removing unreachable block (ram,0x00014da7316f) */
/* WARNING: Removing unreachable block (ram,0x00014da730eb) */

undefined8 FUN_14da72fc4(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14da73218 FUN_14da73218 body=189 status=ok
// SIG undefined FUN_14da73218(void)

void FUN_14da73218(byte param_1,short param_2)

{
  undefined8 in_stack_00000100;
  
  (*(code *)0x161735d40)
            (0x398,param_2 >> ((param_1 | ~(in_stack_00000100._4_1_ | 0x91)) & 0x1f),0x161735d40);
  return;
}



// FUNCTION 14da733fb FUN_14da733fb body=232 status=ok
// SIG undefined FUN_14da733fb(void)

void FUN_14da733fb(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 in_RAX;
  ulonglong unaff_RBX;
  ulonglong unaff_RBP;
  ulonglong uVar4;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_retaddr;
  longlong lStackX_10;
  
  *(undefined8 *)(lStackX_10 + -8) = param_4;
  *(undefined8 *)(lStackX_10 + -0x10) = *(undefined8 *)(lStackX_10 + -8);
  *(undefined8 *)(lStackX_10 + -0x18) = in_R11;
  *(undefined **)(lStackX_10 + -0x20) = &DAT_14dd79638;
  uVar1 = *(undefined8 *)(lStackX_10 + -0x20);
  *(undefined8 *)(lStackX_10 + -0x20) = in_RAX;
  *(undefined8 *)(lStackX_10 + -0x28) = unaff_RDI;
  *(undefined8 *)(lStackX_10 + -8) = uVar1;
  *(undefined8 *)(lStackX_10 + -0x20) = 0x14da73477;
  FUN_14dd795e9();
  uVar2 = *(undefined8 *)(lStackX_10 + -0x18);
  uVar4 = (unaff_RBP + unaff_RBX) - (unaff_RBP & unaff_RBX) ^ 0xffffffffffffffff;
  *(undefined8 *)(lStackX_10 + -0x10) = unaff_retaddr;
  *(ulonglong *)(lStackX_10 + -0x18) = uVar4;
  *(ulonglong *)(lStackX_10 + -0x20) = uVar4;
  *(undefined1 *)(lStackX_10 + -0x20) = 0x12;
  *(undefined8 *)(lStackX_10 + -0x20) = param_2;
  uVar1 = *(undefined8 *)(lStackX_10 + -0x10);
  lVar3 = *(longlong *)(lStackX_10 + -8);
  *(undefined8 *)(lStackX_10 + -8) = uVar2;
  *(undefined8 *)(lStackX_10 + -0x10) = uVar2;
  *(undefined8 *)(lStackX_10 + -8) = *(undefined8 *)(lVar3 + -0x70);
  (*(code *)0x16262a309)(uVar1,*(undefined8 *)(lStackX_10 + -0x20));
  return;
}



// FUNCTION 14da7358c FUN_14da7358c body=159 status=ok
// SIG undefined FUN_14da7358c(void)

void FUN_14da7358c(void)

{
  FUN_14deeb404();
  FUN_14da7362c();
  return;
}



// FUNCTION 14da7362c FUN_14da7362c body=266 status=ok
// SIG undefined FUN_14da7362c(void)

void FUN_14da7362c(byte param_1,byte param_2,byte param_3,ulonglong param_4,ulonglong param_5)

{
  longlong lVar1;
  byte bVar2;
  byte unaff_DIL;
  longlong unaff_R12;
  undefined8 local_res18;
  uint local_res20;
  
  bVar2 = 0x45 - ('\x01' - (param_1 ^ (~(0xff - (param_3 & unaff_DIL)) | ~(param_2 | 1)))) & 0x1f;
  FUN_156b0f58a(FUN_156b0f58a,local_res20 << bVar2 | local_res20 >> 0x20 - bVar2,local_res18);
  lVar1 = param_4 + param_5 + (param_4 & param_5) * -2;
  (*(code *)0x15b4a2923)(0x15b4a2923,lVar1,*(undefined8 *)(unaff_R12 + -0x80),lVar1);
  return;
}



// FUNCTION 14da73737 FUN_14da73737 body=141 status=ok
// SIG undefined FUN_14da73737(void)

void FUN_14da73737(void)

{
  FUN_1624fbabd(FUN_1624fbabd);
  return;
}



// FUNCTION 14da737c4 FUN_14da737c4 body=158 status=ok
// SIG undefined FUN_14da737c4(void)

void FUN_14da737c4(void)

{
  FUN_160e36910(FUN_160e36910);
  return;
}



// FUNCTION 14da738df FUN_14da738df body=131 status=ok
// SIG undefined FUN_14da738df(void)

void FUN_14da738df(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)&LAB_156e5eace)(param_1,param_2,param_3);
  return;
}



// FUNCTION 14da739f4 FUN_14da739f4 body=85 status=ok
// SIG undefined FUN_14da739f4(void)

void FUN_14da739f4(void)

{
  FUN_14dc3aa42();
  return;
}



// FUNCTION 14da73fae FUN_14da73fae body=157 status=ok
// SIG undefined FUN_14da73fae(void)

undefined1 * FUN_14da73fae(void)

{
  return &DAT_b85a4d9b5869ffff;
}



// FUNCTION 14da7404b FUN_14da7404b body=316 status=ok
// SIG undefined FUN_14da7404b(void)

/* WARNING: Removing unreachable block (ram,0x00014da740f3) */

undefined8
FUN_14da7404b(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
             ulonglong param_5,longlong param_6)

{
  undefined8 uVar1;
  char unaff_DIL;
  ulonglong unaff_R15;
  ulonglong in_stack_00000018;
  
  if (param_5 + unaff_R15 < (param_5 & unaff_R15) * 2) {
    uVar1 = FUN_1663e60d9();
    return uVar1;
  }
  FUN_1659a78e0(param_1,param_2);
  uVar1 = 0;
  if (unaff_DIL < '\0') {
    uVar1 = 0xffff;
  }
  FUN_162c247d5(CONCAT62((int6)(param_6 + unaff_R15 >> 0x10),
                         (short)CONCAT71((int7)((ulonglong)uVar1 >> 8),unaff_DIL)) & 0xffffffff,
                DAT_1659a7870 + in_stack_00000018 + (DAT_1659a7870 & in_stack_00000018) * -2,
                -((param_3 ^ 0x3e3f29bb) - DAT_1659a7880) ^ in_stack_00000018);
  uVar1 = FUN_1663e61fe();
  return uVar1;
}



// FUNCTION 14da74313 FUN_14da74313 body=141 status=ok
// SIG undefined FUN_14da74313(void)

void FUN_14da74313(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 unaff_R12;
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
  undefined8 local_res10;
  ushort local_res20;
  uint6 uStackX_22;
  
  bVar15 = (local_res20 & 0x4000) != 0;
  bVar14 = (local_res20 & 0x800) != 0;
  bVar11 = (local_res20 & 0x200) != 0;
  bVar9 = 0;
  bVar8 = (local_res20 & 0x80) != 0;
  bVar7 = (local_res20 & 0x40) != 0;
  bVar5 = (local_res20 & 0x10) != 0;
  bVar4 = (local_res20 & 4) != 0;
  bVar3 = (local_res20 & 1) != 0;
  bVar21 = (uStackX_22 & 0x20) != 0;
  bVar17 = (uStackX_22 & 4) != 0;
  bVar20 = 0;
  bVar19 = 0;
  pcVar2 = (code *)swi(0x2e);
  (*pcVar2)(param_1,param_2,local_res10);
  *param_5 = unaff_R12;
  param_5[-1] = unaff_R12;
  param_5[-2] = (ulonglong)(bVar15 & 1) * 0x4000 | (ulonglong)(bVar14 & 1) * 0x800 |
                (ulonglong)((local_res20 & 0x400) != 0) * 0x400 | (ulonglong)(bVar11 & 1) * 0x200 |
                (ulonglong)(bVar9 & 1) * 0x100 | (ulonglong)(bVar8 & 1) * 0x80 |
                (ulonglong)(bVar7 & 1) * 0x40 | (ulonglong)(bVar5 & 1) * 0x10 |
                (ulonglong)(bVar4 & 1) * 4 | (ulonglong)(bVar3 & 1) |
                (ulonglong)(bVar21 & 1) * 0x200000 | (ulonglong)(bVar20 & 1) * 0x100000 |
                (ulonglong)(bVar19 & 1) * 0x80000 | (ulonglong)(bVar17 & 1) * 0x40000;
  uVar23 = param_5[-2];
  bVar16 = (uVar23 & 0x4000) != 0;
  bVar13 = (uVar23 & 0x400) != 0;
  bVar12 = (uVar23 & 0x200) != 0;
  bVar10 = (uVar23 & 0x100) != 0;
  bVar6 = (uVar23 & 0x10) != 0;
  bVar22 = (uVar23 & 0x200000) != 0;
  bVar18 = (uVar23 & 0x40000) != 0;
  param_5[-2] = (ulonglong)bVar16 * 0x4000 | (ulonglong)((uVar23 & 0x800) != 0) * 0x800 |
                (ulonglong)bVar13 * 0x400 | (ulonglong)bVar12 * 0x200 | (ulonglong)bVar10 * 0x100 |
                (ulonglong)((uVar23 & 0x80) != 0) * 0x80 | (ulonglong)((uVar23 & 0x40) != 0) * 0x40
                | (ulonglong)bVar6 * 0x10 | (ulonglong)((uVar23 & 4) != 0) * 4 |
                (ulonglong)((uVar23 & 1) != 0) | (ulonglong)bVar22 * 0x200000 |
                (ulonglong)bVar18 * 0x40000;
  param_5[-3] = 0xe38da09;
  uVar23 = param_5[-3];
  lVar1 = param_5[-3];
  param_5[-3] = param_5[-3] + -0xa7ab6f3;
  param_5[-3] = (ulonglong)bVar16 * 0x4000 | (ulonglong)SBORROW8(lVar1,0xa7ab6f3) * 0x800 |
                (ulonglong)bVar13 * 0x400 | (ulonglong)bVar12 * 0x200 | (ulonglong)bVar10 * 0x100 |
                (ulonglong)((longlong)param_5[-3] < 0) * 0x80 | (ulonglong)(param_5[-3] == 0) * 0x40
                | (ulonglong)bVar6 * 0x10 |
                (ulonglong)((POPCOUNT(param_5[-3] & 0xff) & 1U) == 0) * 4 |
                (ulonglong)(uVar23 < 0xa7ab6f3) | (ulonglong)bVar22 * 0x200000 |
                (ulonglong)bVar18 * 0x40000;
  *param_5 = 0x3be2316;
  FUN_16292afe4();
  return;
}



// FUNCTION 14da74473 FUN_14da74473 body=426 status=ok
// SIG undefined FUN_14da74473(void)

/* WARNING: Removing unreachable block (ram,0x00014da7450d) */
/* WARNING: Removing unreachable block (ram,0x00014da74513) */
/* WARNING: Removing unreachable block (ram,0x000160ff6c1e) */
/* WARNING: Removing unreachable block (ram,0x000160ff6c9a) */
/* WARNING: Removing unreachable block (ram,0x000160ff6ca0) */
/* WARNING: Removing unreachable block (ram,0x000160ff6c95) */
/* WARNING: Removing unreachable block (ram,0x00015b238f13) */
/* WARNING: Removing unreachable block (ram,0x000160ff6ca5) */

void FUN_14da74473(ulonglong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  ulonglong local_res18;
  undefined8 local_res20;
  longlong in_stack_00000030;
  
  local_res18 = local_res18 ^ param_1;
  uVar3 = FUN_16102fa31(local_res8,param_2);
  uRam000000016102fa41 = ~((ulonglong)local_res10 & 0xd8f766c0ff660824);
                    /* WARNING: Read-only address (ram,0x00016102fa41) is written */
  *(undefined8 *)(in_stack_00000030 + -8) = unaff_RDI;
  *(undefined1 **)(in_stack_00000030 + -0x10) = &LAB_16603cd54;
  *(undefined1 **)(in_stack_00000030 + -0x18) = &LAB_16603cd54;
  *(undefined8 *)(in_stack_00000030 + -0x20) = in_R11;
  *(undefined8 *)(in_stack_00000030 + -0x20) = uVar3;
  *(undefined8 *)(in_stack_00000030 + -0x28) = local_res20;
  *(undefined8 *)(in_stack_00000030 + -0x10) = 0;
  puVar1 = (ulonglong *)(in_stack_00000030 + -0x10);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + *(longlong *)(in_stack_00000030 + -8);
  *(ulonglong *)(in_stack_00000030 + -0x20) = local_res18;
  if (uVar2 < (ulonglong)-*(longlong *)(in_stack_00000030 + -8)) {
    FUN_14de71e7a();
    return;
  }
  FUN_14de71e7a();
  return;
}



// FUNCTION 14da74513 FUN_14da74513 body=12 status=ok
// SIG undefined FUN_14da74513(void)

void FUN_14da74513(void)

{
  return;
}



// FUNCTION 14da7477a FUN_14da7477a body=162 status=ok
// SIG undefined FUN_14da7477a(void)

ulonglong FUN_14da7477a(void)

{
  longlong unaff_RBX;
  undefined4 unaff_ESI;
  undefined2 unaff_DI;
  undefined6 unaff_0000003a;
  undefined4 local_res8 [8];
  
  *(undefined4 *)((longlong)local_res8 + unaff_RBX) = unaff_ESI;
  return ~*(ulonglong *)(CONCAT62(unaff_0000003a,unaff_DI) + -0x80);
}



// FUNCTION 14da7481e FUN_14da7481e body=163 status=ok
// SIG undefined FUN_14da7481e(void)

void FUN_14da7481e(longlong param_1)

{
  longlong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14d8c18a6(-(param_1 - *(longlong *)(unaff_R13 + unaff_RSI)) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14da748c1 FUN_14da748c1 body=126 status=ok
// SIG undefined FUN_14da748c1(void)

void FUN_14da748c1(undefined8 param_1,undefined8 param_2)

{
  FUN_1662eab58(FUN_1662eab58,param_2);
  return;
}



// FUNCTION 14da749f7 thunk_FUN_14da74a01 body=5 status=ok
// SIG undefined thunk_FUN_14da74a01(void)

void thunk_FUN_14da74a01(void)

{
  FUN_165e93f27();
  return;
}



// FUNCTION 14da74a01 FUN_14da74a01 body=12 status=ok
// SIG undefined FUN_14da74a01(void)

void FUN_14da74a01(void)

{
  FUN_165e93f27();
  return;
}



// FUNCTION 14da74a0d FUN_14da74a0d body=117 status=ok
// SIG undefined FUN_14da74a0d(void)

void FUN_14da74a0d(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  if (param_4 == 0x120419) {
    FUN_165e93f27();
    return;
  }
  FUN_161025cfe(param_1,param_2);
  return;
}



// FUNCTION 14da75177 FUN_14da75177 body=606 status=ok
// SIG undefined FUN_14da75177(void)

/* WARNING: Removing unreachable block (ram,0x00016528d11a) */
/* WARNING: Removing unreachable block (ram,0x00014da75185) */
/* WARNING: Removing unreachable block (ram,0x00014da75200) */
/* WARNING: Removing unreachable block (ram,0x00014da7520c) */
/* WARNING: Removing unreachable block (ram,0x00016528d10f) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14da75177(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  undefined8 in_stack_00000008;
  
  uVar1 = (*(code *)&LAB_1625c5c59)
                    (0x489eef5b,&LAB_1625c5c59,param_3,in_stack_00000008,
                     ~*(ulonglong *)(unaff_RDI + -0x90) | param_1);
  return uVar1;
}



// FUNCTION 14da752ec FUN_14da752ec body=126 status=ok
// SIG undefined FUN_14da752ec(void)

void FUN_14da752ec(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong in_R11;
  undefined8 unaff_R15;
  longlong local_res20;
  
  uVar1 = *(ulonglong *)(in_R11 + 0x10);
  *(ulonglong *)(in_R11 + 0x10) = ~*(ulonglong *)(in_R11 + 0x10);
  *(ulonglong *)(in_R11 + 0x10) = *(ulonglong *)(in_R11 + 0x10) | unaff_RBP;
  *(ulonglong *)(in_R11 + 0x10) =
       ~(0xffffffffffffffff - (~(~unaff_RBP | uVar1) | ~*(ulonglong *)(in_R11 + 0x10)));
  *(undefined8 *)(local_res20 + -8) = param_1;
  *(undefined8 *)(local_res20 + -0x10) = param_1;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R15;
  *(undefined8 *)(local_res20 + -0x20) = unaff_R15;
  *(undefined1 **)(local_res20 + -0x18) = &LAB_14da7536b;
  (*(code *)&LAB_15ba2c1fd)(&LAB_15ba2c1fd,param_2);
  return;
}



// FUNCTION 14da753f2 FUN_14da753f2 body=91 status=ok
// SIG undefined FUN_14da753f2(void)

void FUN_14da753f2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 unaff_RBX;
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
  undefined8 unaff_retaddr;
  ulonglong uStackX_8;
  undefined8 *puStackX_10;
  
  bVar10 = (uStackX_8 & 0x4000) != 0;
  bVar9 = (uStackX_8 & 0x800) != 0;
  bVar8 = (uStackX_8 & 0x200) != 0;
  bVar7 = (uStackX_8 & 0x100) != 0;
  bVar6 = (uStackX_8 & 0x80) != 0;
  bVar5 = (uStackX_8 & 0x40) != 0;
  bVar4 = (uStackX_8 & 0x10) != 0;
  bVar3 = (uStackX_8 & 4) != 0;
  bVar2 = (uStackX_8 & 1) != 0;
  bVar14 = (uStackX_8 & 0x200000) != 0;
  bVar11 = (uStackX_8 & 0x40000) != 0;
  bVar13 = 0;
  bVar12 = 0;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(param_1,param_2,unaff_retaddr);
  puStackX_10[-1] = param_4;
  puStackX_10[-2] = 0xfe0784;
  puStackX_10[-3] = unaff_RBX;
  puStackX_10[-4] =
       (ulonglong)(bVar10 & 1) * 0x4000 | (ulonglong)(bVar9 & 1) * 0x800 |
       (ulonglong)((uStackX_8 & 0x400) != 0) * 0x400 | (ulonglong)(bVar8 & 1) * 0x200 |
       (ulonglong)(bVar7 & 1) * 0x100 | (ulonglong)(bVar6 & 1) * 0x80 |
       (ulonglong)(bVar5 & 1) * 0x40 | (ulonglong)(bVar4 & 1) * 0x10 | (ulonglong)(bVar3 & 1) * 4 |
       (ulonglong)(bVar2 & 1) | (ulonglong)(bVar14 & 1) * 0x200000 |
       (ulonglong)(bVar13 & 1) * 0x100000 | (ulonglong)(bVar12 & 1) * 0x80000 |
       (ulonglong)(bVar11 & 1) * 0x40000;
  *puStackX_10 = puStackX_10[-2];
  FUN_15665610a();
  return;
}



// FUNCTION 14da7563e FUN_14da7563e body=162 status=ok
// SIG undefined FUN_14da7563e(void)

/* WARNING: Instruction at (ram,0x00014da75704) overlaps instruction at (ram,0x00014da75702)
    */

void FUN_14da7563e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 unaff_RBP;
  undefined8 unaff_R12;
  longlong unaff_R13;
  undefined8 unaff_R15;
  bool bVar6;
  undefined8 local_res8;
  undefined1 *local_res18;
  
  puVar4 = (undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -8) = unaff_R15;
  *(undefined8 *)(local_res18 + -0x10) = in_RAX;
  *(undefined4 *)(local_res18 + -0x10) = 0xaadcfa97;
  *(undefined4 *)(local_res18 + -0xc) = 0xe8035339;
  *(int *)(local_res18 + -0xc) = *(int *)(local_res18 + -0xc) + 0x17fcacc6;
  lVar1 = *(longlong *)(local_res18 + -0x10);
  if ((lVar1 == -0x55230569) || (puVar4 = (undefined8 *)local_res18, -0x5523056a < lVar1)) {
    puVar4[-1] = param_3;
    bVar6 = (int)lVar1 == -1;
    if ((!bVar6) || (bVar6)) {
      puVar4[-1] = *puVar4;
      *puVar4 = &LAB_16695af43;
      FUN_14d7bd34d(local_res8);
      return;
    }
    puVar4[-1] = puVar4[-1];
    *(undefined4 *)(puVar4 + -2) = 0xfec252b6;
    *(undefined4 *)((longlong)puVar4 + -0xc) = 0xffffffff;
    param_2 = *(undefined8 *)(unaff_R13 + puVar4[-2] + 0x13dacb2);
    param_3 = puVar4[-1];
    puVar5 = puVar4 + -1;
    puVar4[-1] = unaff_RBP;
  }
  else {
    puVar5 = (undefined8 *)(local_res18 + -0x10);
    *(undefined1 **)(local_res18 + -0x10) = local_res18 + -8;
  }
  puVar5[2] = param_2;
  uVar2 = puVar5[1];
  puVar5[1] = unaff_R12;
  *puVar5 = param_3;
  uVar3 = *puVar5;
  *puVar5 = unaff_RBX;
  puVar5[-1] = *(undefined8 *)(unaff_R13 + -0xa0);
  puVar5[1] = param_4;
  FUN_14de2d9e5(local_res8,uVar2,uVar3,FUN_14de2d9e5);
  return;
}



// FUNCTION 14da756e3 FUN_14da756e3 body=138 status=ok
// SIG undefined FUN_14da756e3(void)

void FUN_14da756e3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  FUN_14de2d9e5(param_1,unaff_retaddr,param_3,FUN_14de2d9e5);
  return;
}



// FUNCTION 14da757f5 FUN_14da757f5 body=206 status=ok
// SIG undefined FUN_14da757f5(void)

/* WARNING: Removing unreachable block (ram,0x00014da75807) */
/* WARNING: Removing unreachable block (ram,0x000156a8bfcc) */
/* WARNING: Removing unreachable block (ram,0x00014da7585c) */
/* WARNING: Removing unreachable block (ram,0x00014da758a6) */

void FUN_14da757f5(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  uVar1 = *(ulonglong *)(unaff_RSI + -0x70) | unaff_RBP;
  uVar2 = ~(*(ulonglong *)(unaff_RSI + -0x70) & unaff_RBP);
  if (CARRY8(uVar1 - (uVar2 | uVar1),uVar2)) {
    FUN_156a8bf85();
    return;
  }
  FUN_16252642c(*(ulonglong *)(unaff_RSI + -0x38) + unaff_RBP +
                (*(ulonglong *)(unaff_RSI + -0x38) & unaff_RBP) * -2,FUN_16252642c,
                param_3 ^ unaff_RBP);
  return;
}



// FUNCTION 14da75949 FUN_14da75949 body=130 status=ok
// SIG undefined FUN_14da75949(void)

void FUN_14da75949(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1611c7a3a(1,FUN_1611c7a3a,
                -1 - ((~param_1 | *(ulonglong *)(unaff_RDI + -0x70)) &
                     (*(ulonglong *)(unaff_RDI + -0x70) ^ 0xffffffffffffffff | param_1)));
  return;
}



// FUNCTION 14da759cd thunk_FUN_14da759d3 body=5 status=ok
// SIG undefined thunk_FUN_14da759d3(void)

void thunk_FUN_14da759d3(void)

{
  undefined8 unaff_retaddr;
  undefined8 uStackX_10;
  
  FUN_16578b5c3();
  FUN_165be19aa(unaff_retaddr,uStackX_10);
  return;
}



// FUNCTION 14da759d3 FUN_14da759d3 body=248 status=ok
// SIG undefined FUN_14da759d3(void)

void FUN_14da759d3(void)

{
  undefined8 unaff_retaddr;
  undefined8 local_res10;
  
  FUN_16578b5c3();
  FUN_165be19aa(unaff_retaddr,local_res10);
  return;
}



// FUNCTION 14da75b6d FUN_14da75b6d body=50 status=ok
// SIG undefined FUN_14da75b6d(void)

undefined8 FUN_14da75b6d(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da75c09 FUN_14da75c09 body=160 status=ok
// SIG undefined FUN_14da75c09(void)

void FUN_14da75c09(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong local_res8;
  
  FUN_16250f055(-local_res8,FUN_16250f055,param_3,param_4);
  return;
}



// FUNCTION 14da75dd8 FUN_14da75dd8 body=1176 status=ok
// SIG undefined FUN_14da75dd8(void)

/* WARNING: Removing unreachable block (ram,0x00014da75ed4) */
/* WARNING: Removing unreachable block (ram,0x000161300a73) */
/* WARNING: Removing unreachable block (ram,0x000161300ab1) */
/* WARNING: Removing unreachable block (ram,0x000161300ab7) */
/* WARNING: Removing unreachable block (ram,0x0001563f5ec1) */
/* WARNING: Removing unreachable block (ram,0x00014da75e77) */
/* WARNING: Removing unreachable block (ram,0x00014da75f8b) */
/* WARNING: Removing unreachable block (ram,0x00014da75f8f) */
/* WARNING: Removing unreachable block (ram,0x00014da75fac) */
/* WARNING: Removing unreachable block (ram,0x00014da75fb2) */
/* WARNING: Removing unreachable block (ram,0x00015afc6dea) */

undefined8 FUN_14da75dd8(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 uVar1;
  longlong in_R10;
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000010;
  undefined8 local_res18;
  
  *(undefined8 *)(in_R10 + 8) = 0x2463d43;
  *(ulonglong *)(in_R10 + 8) = *(ulonglong *)(in_R10 + 8) ^ 0x2463d43;
  *(ulonglong *)(in_R10 + 8) = *(longlong *)(in_R10 + 8) - ~param_3;
  *(longlong *)(in_R10 + 8) = -*(longlong *)(in_R10 + 8);
  uVar1 = FUN_1619611ac(local_res18,unaff_retaddr,in_stack_00000010);
  return uVar1;
}



// FUNCTION 14da75fb8 FUN_14da75fb8 body=77 status=ok
// SIG undefined FUN_14da75fb8(void)

void FUN_14da75fb8(undefined8 param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  undefined8 unaff_RSI;
  longlong unaff_R12;
  undefined8 local_res18;
  
  *(undefined8 *)(local_res18 + -8) = param_2;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = unaff_RSI;
  puVar1 = (ulonglong *)(local_res18 + -8);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ 0x14da76022;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(unaff_R12 + 0xe0);
  return;
}



// FUNCTION 14da7622f FUN_14da7622f body=192 status=ok
// SIG undefined FUN_14da7622f(void)

/* WARNING: Instruction at (ram,0x00014da762a4) overlaps instruction at (ram,0x00014da762a3)
    */

void FUN_14da7622f(void)

{
  return;
}



// FUNCTION 14da76394 FUN_14da76394 body=281 status=ok
// SIG undefined FUN_14da76394(void)

/* WARNING: Removing unreachable block (ram,0x00015b6fe144) */
/* WARNING: Removing unreachable block (ram,0x00015b6fe14a) */
/* WARNING: Removing unreachable block (ram,0x0001654429c1) */
/* WARNING: Removing unreachable block (ram,0x000165442a0f) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x00015b6fe0ac) */
/* WARNING: Removing unreachable block (ram,0x00015b6fe0b7) */
/* WARNING: Removing unreachable block (ram,0x00015b6fe0b2) */
/* WARNING: Removing unreachable block (ram,0x00014da76432) */

undefined8 FUN_14da76394(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_165463655();
  return uVar1;
}



// FUNCTION 14da76529 FUN_14da76529 body=110 status=ok
// SIG undefined FUN_14da76529(void)

void FUN_14da76529(undefined8 param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_156acbd3c(param_1,0xaeef309);
  FUN_1568babf2((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) + unaff_R15 + 1,FUN_1568babf2);
  return;
}



// FUNCTION 14da766a2 FUN_14da766a2 body=82 status=ok
// SIG undefined FUN_14da766a2(void)

void FUN_14da766a2(void)

{
  byte *unaff_RBP;
  undefined8 unaff_RSI;
  
  *(undefined8 *)unaff_RBP = unaff_RSI;
  *unaff_RBP = 0;
  *unaff_RBP = *unaff_RBP | 0xad;
  *(undefined1 **)(unaff_RBP + -8) = &LAB_14da766f6;
  return;
}



// FUNCTION 14da76744 FUN_14da76744 body=107 status=ok
// SIG undefined FUN_14da76744(void)

void FUN_14da76744(void)

{
  return;
}



// FUNCTION 14da76920 FUN_14da76920 body=152 status=ok
// SIG undefined FUN_14da76920(void)

void FUN_14da76920(ulonglong param_1)

{
  ulonglong uVar1;
  undefined1 unaff_DIL;
  undefined7 unaff_00000039;
  
  uVar1 = *(ulonglong *)(CONCAT71(unaff_00000039,unaff_DIL) + -0x68);
  FUN_161cf37a7((short)param_1,(~(~uVar1 & param_1) + param_1) - uVar1);
  FUN_15b28dc3b();
  return;
}



// FUNCTION 14da769b8 FUN_14da769b8 body=157 status=ok
// SIG undefined FUN_14da769b8(void)

void FUN_14da769b8(ulonglong param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined1 unaff_DIL;
  undefined7 unaff_00000039;
  
  uVar1 = *(ulonglong *)(CONCAT71(unaff_00000039,unaff_DIL) + -0x80);
  FUN_15b28dc3b(param_1,~((~param_1 + uVar1) - (~param_1 & uVar1)),
                *(ulonglong *)(CONCAT71(unaff_00000039,unaff_DIL) + -0x70) ^ param_1,
                ~((~param_3 | param_4) & (~param_4 | param_1)));
  return;
}



// FUNCTION 14da76b51 FUN_14da76b51 body=176 status=ok
// SIG undefined FUN_14da76b51(void)

/* WARNING: Removing unreachable block (ram,0x00016490046f) */
/* WARNING: Removing unreachable block (ram,0x00014da76c01) */

void FUN_14da76b51(ulonglong param_1,undefined8 param_2,undefined1 param_3)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  ulonglong unaff_R13;
  longlong unaff_retaddr;
  
  *(undefined8 *)(&stack0xfffffffff284f41f + unaff_retaddr) = unaff_RSI;
  uVar2 = *(undefined8 *)(&stack0xfffffffff284f427 + unaff_retaddr);
  puVar1 = (ulonglong *)(&stack0xfffffffff284f427 + unaff_retaddr);
  *puVar1 = unaff_R13;
  *(undefined2 *)puVar1 = 0x6e31;
  bVar3 = (byte)(*puVar1 >> 8);
  if (CARRY8(~param_1 | *(ulonglong *)(unaff_RDI + -0x38),param_1)) {
    *puVar1 = param_1;
    FUN_156b07c5f(param_1,-*puVar1,param_3,FUN_156b07c5f);
    return;
  }
  FUN_164900401(param_1,CONCAT11(~(~(bVar3 & 0x91) & (bVar3 | 0x91)),(char)uVar2));
  return;
}



// FUNCTION 14da76c01 FUN_14da76c01 body=119 status=ok
// SIG undefined FUN_14da76c01(void)

void FUN_14da76c01(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_166c5b99e(param_1,~((~param_1 | *(ulonglong *)(unaff_RDI + -0x68)) &
                         (~*(ulonglong *)(unaff_RDI + -0x68) | param_1)));
  return;
}



// FUNCTION 14da76cff FUN_14da76cff body=17 status=ok
// SIG undefined FUN_14da76cff(void)

void FUN_14da76cff(void)

{
  return;
}



// FUNCTION 14da76e35 FUN_14da76e35 body=150 status=ok
// SIG undefined FUN_14da76e35(void)

undefined8 FUN_14da76e35(void)

{
  longlong unaff_R13;
  
  return *(undefined8 *)(unaff_R13 + -8);
}



// FUNCTION 14da76ffd FUN_14da76ffd body=3 status=ok
// SIG undefined FUN_14da76ffd(void)

void FUN_14da76ffd(void)

{
  return;
}



// FUNCTION 14da77088 FUN_14da77088 body=51 status=ok
// SIG undefined FUN_14da77088(void)

/* WARNING: Instruction at (ram,0x00014da770ae) overlaps instruction at (ram,0x00014da770ac)
    */
/* WARNING: Removing unreachable block (ram,0x00014da770ac) */
/* WARNING: Removing unreachable block (ram,0x00014da770b7) */
/* WARNING: Removing unreachable block (ram,0x00014da770ba) */

void FUN_14da77088(undefined8 param_1,uint param_2)

{
  uint in_EAX;
  uint uVar1;
  int in_R10D;
  uint uVar2;
  
  uVar2 = in_R10D + in_EAX ^ 0xffffffff | param_2;
  uVar1 = ~(param_2 & (in_EAX ^ 0xffffffff));
  (*(code *)0x16623e4bc)(param_1,uVar1,(~(uVar2 & uVar1) + uVar1) - ~uVar2);
  return;
}



// FUNCTION 14da77184 FUN_14da77184 body=168 status=ok
// SIG undefined FUN_14da77184(void)

void FUN_14da77184(undefined8 param_1,undefined8 param_2)

{
  undefined4 unaff_retaddr;
  undefined4 unaff_retaddr_00;
  
  FUN_16561a4e6(param_1,param_2,CONCAT44(unaff_retaddr_00,unaff_retaddr));
  return;
}



// FUNCTION 14da77355 FUN_14da77355 body=195 status=ok
// SIG undefined FUN_14da77355(void)

void FUN_14da77355(void)

{
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  
  *(undefined8 *)(&stack0x00000018 + unaff_RBP) = unaff_RSI;
  return;
}



// FUNCTION 14da77552 FUN_14da77552 body=170 status=ok
// SIG undefined FUN_14da77552(void)

void FUN_14da77552(ulonglong param_1)

{
  FUN_162f0fd2b(-0x7bae607 - ~param_1);
  return;
}



// FUNCTION 14da776a4 FUN_14da776a4 body=162 status=ok
// SIG undefined FUN_14da776a4(void)

void FUN_14da776a4(undefined8 param_1,undefined8 param_2)

{
  FUN_1669a6197(0x10,param_2);
  return;
}



// FUNCTION 14da77746 FUN_14da77746 body=135 status=ok
// SIG undefined FUN_14da77746(void)

void FUN_14da77746(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  
  FUN_160cc515b(param_1,param_2,local_res8);
  return;
}



// FUNCTION 14da777cf FUN_14da777cf body=129 status=ok
// SIG undefined FUN_14da777cf(void)

void FUN_14da777cf(void)

{
  return;
}



// FUNCTION 14da77852 FUN_14da77852 body=769 status=ok
// SIG undefined FUN_14da77852(void)

/* WARNING: Removing unreachable block (ram,0x000164f1c5aa) */
/* WARNING: Removing unreachable block (ram,0x000156c54a75) */
/* WARNING: Removing unreachable block (ram,0x000156c54a7b) */
/* WARNING: Removing unreachable block (ram,0x000164f1c678) */
/* WARNING: Removing unreachable block (ram,0x000164f1c5d2) */
/* WARNING: Removing unreachable block (ram,0x0001620fda3a) */
/* WARNING: Removing unreachable block (ram,0x000164f1c66d) */
/* WARNING: Removing unreachable block (ram,0x000164f1c673) */
/* WARNING: Removing unreachable block (ram,0x00014da778ef) */
/* WARNING: Removing unreachable block (ram,0x00014da77916) */
/* WARNING: Removing unreachable block (ram,0x00014da77926) */
/* WARNING: Removing unreachable block (ram,0x00014da7798c) */
/* WARNING: Removing unreachable block (ram,0x00014da77992) */
/* WARNING: Removing unreachable block (ram,0x00014dfd170d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14da77852(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  uint unaff_R14D;
  ulonglong unaff_R15;
  
  uVar2 = ~((~(~param_1 | unaff_R15) | ~unaff_R15 | param_1) + (~param_1 | unaff_R15) + 1);
  uVar1 = *(ulonglong *)(unaff_R13 + -0x68);
  FUN_161a8c5c2(uVar2,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  uVar1 = *(ulonglong *)
           (~((~(~unaff_R15 & uVar1) + uVar1) - unaff_R15 & (0xffffffffffffffff - uVar1 | unaff_R15)
             ) - 0x80);
  FUN_1648475dd(uVar2,uVar1 + uVar2 + (uVar1 & uVar2) * -2);
  if (_DAT_ffffffff9ae29e9a == 0) {
    uVar1 = FUN_156c549e7();
    return uVar1;
  }
  uVar2 = ~((~uVar1 | -((ulonglong)unaff_R14D - _DAT_ffffffff9ae29eb2)) &
           (~-((ulonglong)unaff_R14D - _DAT_ffffffff9ae29eb2) | uVar1)) + 1;
  if ((uVar2 & 0x8000) != 0) {
    return (ulonglong)((uint)uVar2 | 0xffff0000);
  }
  FUN_156426457(_DAT_ffffffff9ae29ef2 ^ uVar1,FUN_156426457,_DAT_ffffffff9ae29eca ^ uVar1,
                ~((~(~_DAT_ffffffff9ae29f02 | uVar1) | ~uVar1 | _DAT_ffffffff9ae29f02) +
                  (~_DAT_ffffffff9ae29f02 | uVar1) + 1));
  uVar1 = thunk_FUN_15b642ca5();
  return uVar1;
}



// FUNCTION 14da77c83 FUN_14da77c83 body=279 status=ok
// SIG undefined FUN_14da77c83(void)

void FUN_14da77c83(undefined8 param_1)

{
  longlong unaff_RDI;
  
  (*(code *)0x160bf23bb)(param_1,param_1,param_1,~*(ulonglong *)(unaff_RDI + -0x60));
  return;
}



// FUNCTION 14da77d1b FUN_14da77d1b body=2 status=ok
// SIG undefined FUN_14da77d1b(void)

void FUN_14da77d1b(void)

{
  return;
}



// FUNCTION 14da77de1 FUN_14da77de1 body=301 status=ok
// SIG undefined FUN_14da77de1(void)

void FUN_14da77de1(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong unaff_RBP;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)0x162b70468)
            (*(ulonglong *)(unaff_R13 + -0x38) + unaff_R15 +
             (*(ulonglong *)(unaff_R13 + -0x38) & unaff_R15) * -2,param_2,
             *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
             ~(param_4 & unaff_R15) & (~(unaff_RBP & unaff_R15) + unaff_R15) - ~unaff_RBP);
  return;
}



// FUNCTION 14da77e8a FUN_14da77e8a body=169 status=ok
// SIG undefined FUN_14da77e8a(void)

void FUN_14da77e8a(void)

{
  FUN_164efc98d();
  return;
}



// FUNCTION 14da77f33 FUN_14da77f33 body=233 status=ok
// SIG undefined FUN_14da77f33(void)

/* WARNING: Removing unreachable block (ram,0x0001572a31a7) */
/* WARNING: Removing unreachable block (ram,0x0001572a3221) */
/* WARNING: Removing unreachable block (ram,0x0001572a3227) */
/* WARNING: Removing unreachable block (ram,0x00014d9336eb) */
/* WARNING: Removing unreachable block (ram,0x00014da77fe0) */
/* WARNING: Removing unreachable block (ram,0x00014da77fe6) */
/* WARNING: Removing unreachable block (ram,0x0001572a3249) */
/* WARNING: Removing unreachable block (ram,0x0001572a324c) */

void FUN_14da77f33(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  longlong param_5)

{
  longlong *plVar1;
  undefined8 unaff_RDI;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  undefined8 local_res8;
  
  *(ulonglong *)(param_1 + 0x10) = ~param_4 | ~*(ulonglong *)(param_1 + 0x10);
  plVar1 = (longlong *)(param_5 + -8);
  *(undefined8 *)(param_5 + -0x10) = unaff_RDI;
  *plVar1 = 0;
  *plVar1 = *plVar1 + param_2;
  *(undefined8 *)(param_5 + -0x10) = local_res8;
  *(undefined8 *)(param_5 + -0x10) = unaff_R15;
  *(undefined8 *)(param_5 + -0x18) = unaff_R15;
  *(undefined8 *)(param_5 + -0x20) = param_3;
  *(undefined8 *)(param_5 + -0x20) = unaff_R13;
  FUN_1572a31a7();
  return;
}



// FUNCTION 14da77fe6 FUN_14da77fe6 body=136 status=ok
// SIG undefined FUN_14da77fe6(void)

void FUN_14da77fe6(void)

{
  return;
}



// FUNCTION 14da78072 FUN_14da78072 body=111 status=ok
// SIG undefined FUN_14da78072(void)

void FUN_14da78072(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_15b0e0496(FUN_15b0e0496,param_2,param_3,param_4);
  return;
}



// FUNCTION 14da781ab FUN_14da781ab body=136 status=ok
// SIG undefined FUN_14da781ab(void)

void FUN_14da781ab(void)

{
  return;
}



// FUNCTION 14da7838b FUN_14da7838b body=118 status=ok
// SIG undefined FUN_14da7838b(void)

void FUN_14da7838b(ulonglong param_1,ulonglong param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1620e5cfd(param_1 & param_2,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14da7852c FUN_14da7852c body=321 status=ok
// SIG undefined FUN_14da7852c(void)

/* WARNING: Removing unreachable block (ram,0x00014da78622) */
/* WARNING: Removing unreachable block (ram,0x00014da7866e) */
/* WARNING: Removing unreachable block (ram,0x0001657b37f0) */

void FUN_14da7852c(void)

{
  FUN_165504105();
  FUN_1657b37f0();
  return;
}



// FUNCTION 14da7866e FUN_14da7866e body=138 status=ok
// SIG undefined FUN_14da7866e(void)

void FUN_14da7866e(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  ulonglong uVar3;
  ulonglong in_R10;
  ulonglong uVar4;
  
  uVar1 = (~(param_4 & param_1) + param_1) - ~param_4;
  uVar4 = ~(~in_R10 | ~param_1) ^ 0xffffffffffffffff;
  uVar2 = *(ulonglong *)(unaff_RDI + -0x60) | param_1;
  uVar3 = 0xffffffffffffffff - (*(ulonglong *)(unaff_RDI + -0x60) & param_1);
  FUN_156e50c34((char)param_1,(uVar1 - (uVar4 | uVar1)) + uVar4,*(undefined8 *)(unaff_RDI + -0x70),
                (uVar2 - (uVar3 | uVar2)) + uVar3);
  return;
}



// FUNCTION 14da786f9 FUN_14da786f9 body=271 status=ok
// SIG undefined FUN_14da786f9(void)

/* WARNING: Removing unreachable block (ram,0x00014da78786) */

void FUN_14da786f9(void)

{
  ulonglong *in_RAX;
  undefined8 unaff_RDI;
  longlong unaff_R12;
  ulonglong unaff_R15;
  ulonglong in_stack_00000010;
  ulonglong in_stack_00000030;
  
  *in_RAX = ~(unaff_R12 + *in_RAX + 1);
  in_stack_00000030 = in_stack_00000030 ^ unaff_R15;
                    /* WARNING: Read-only address (ram,0x00014d7a5bbd) is written */
  LOCK();
  uRam000000014d7a5bbd = (undefined1)in_stack_00000010;
  UNLOCK();
  *(ulonglong *)(in_stack_00000030 - 8) = in_stack_00000010 & 0xffffffffffffff00;
  *(ulonglong *)(in_stack_00000030 - 0x10) = in_stack_00000010 & 0xffffffffffffff00;
  *(undefined4 *)(in_stack_00000030 - 0x18) = 0x853d61b;
  *(undefined4 *)(in_stack_00000030 - 0x14) = 0;
  *(undefined8 *)(in_stack_00000030 - 0x20) = unaff_RDI;
  *(undefined8 *)(in_stack_00000030 - 0x28) = unaff_RDI;
  *(undefined8 *)(in_stack_00000030 - 0x30) = unaff_RDI;
  *(code **)(in_stack_00000030 - 0x20) = FUN_16299e7a7;
  *(undefined8 *)(in_stack_00000030 - 0x28) = 0x165b5f7a8;
  return;
}



// FUNCTION 14da789e6 FUN_14da789e6 body=178 status=ok
// SIG undefined FUN_14da789e6(void)

void FUN_14da789e6(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar2;
  code *pcVar3;
  
  uVar2 = 0xffffffffffffffff - (param_1 | unaff_RBP);
  uVar1 = ~(0xffffffffffffffff - (((-1 - ~(param_2 | ~uVar2)) + uVar2) - param_2));
  pcVar3 = FUN_1622895c1;
  FUN_1622895c1(uVar1,*(ulonglong *)(unaff_RSI + -0x58) ^ unaff_RBP);
  uVar2 = *(ulonglong *)(pcVar3 + unaff_RBX + 8);
  *(ulonglong *)(pcVar3 + unaff_RBX + 8) = ~*(ulonglong *)(pcVar3 + unaff_RBX + 8);
  *(ulonglong *)(pcVar3 + unaff_RBX + 8) = *(ulonglong *)(pcVar3 + unaff_RBX + 8) | uVar1;
  *(ulonglong *)(pcVar3 + unaff_RBX + 8) =
       ~((~uVar1 | uVar2) & *(ulonglong *)(pcVar3 + unaff_RBX + 8));
  return;
}



// FUNCTION 14da78a9a FUN_14da78a9a body=114 status=ok
// SIG undefined FUN_14da78a9a(void)

undefined8 FUN_14da78a9a(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  if (param_2 == 0x4fd31) {
    uVar1 = FUN_15751fa1b(param_1,0x14d7bfe67);
    return uVar1;
  }
  if (param_2 == 0x4fd32) {
    uVar1 = FUN_1627d4bd8(param_1,FUN_1627d4bd8,param_3,param_4);
    return uVar1;
  }
  return in_RAX;
}



// FUNCTION 14da78bbb FUN_14da78bbb body=118 status=ok
// SIG undefined FUN_14da78bbb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14da78bbb(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  undefined8 unaff_RSI;
  longlong unaff_R13;
  
  puVar1 = (uint *)(&stack0xfffffffff9ad4fbd + unaff_R13);
  *puVar1 = 0xe221f779;
  *puVar1 = *puVar1 ^ 0x8ad395b;
  *puVar1 = *puVar1 ^ 0x47ec09ee;
  *(undefined4 *)(&stack0xfffffffff9ad4fc1 + unaff_R13) = 0xffffffff;
  *(undefined8 *)(&stack0x4c4c8809 + *(longlong *)puVar1 + unaff_R13) = unaff_RSI;
  *(undefined8 *)(&stack0xfffffffff9ad4fdd + unaff_R13) = 0;
  *(longlong *)(&stack0xfffffffff9ad4fdd + unaff_R13) =
       *(longlong *)(&stack0xfffffffff9ad4fdd + unaff_R13) + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14da78c63 FUN_14da78c63 body=144 status=ok
// SIG undefined FUN_14da78c63(void)

void FUN_14da78c63(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  
  (*(code *)0x16503d2fa)(unaff_retaddr,param_2,in_stack_00000008);
  return;
}



// FUNCTION 14da78cf3 FUN_14da78cf3 body=586 status=ok
// SIG undefined FUN_14da78cf3(void)

/* WARNING: Instruction at (ram,0x000164998924) overlaps instruction at (ram,0x000164998923)
    */
/* WARNING: Removing unreachable block (ram,0x00014da78e1f) */
/* WARNING: Removing unreachable block (ram,0x00014da78e25) */
/* WARNING: Removing unreachable block (ram,0x000157343ef3) */
/* WARNING: Removing unreachable block (ram,0x000157343ef9) */
/* WARNING: Removing unreachable block (ram,0x000164998ad4) */
/* WARNING: Removing unreachable block (ram,0x000164998adf) */
/* WARNING: Removing unreachable block (ram,0x000164998ada) */
/* WARNING: Removing unreachable block (ram,0x000162b61fb2) */
/* WARNING: Removing unreachable block (ram,0x000160b4ee1b) */
/* WARNING: Removing unreachable block (ram,0x000160b4ee36) */
/* WARNING: Removing unreachable block (ram,0x000160b4ef40) */
/* WARNING: Removing unreachable block (ram,0x000160b4ef46) */
/* WARNING: Removing unreachable block (ram,0x0001649987c5) */
/* WARNING: Removing unreachable block (ram,0x00016499885c) */
/* WARNING: Removing unreachable block (ram,0x0001654cbd9d) */
/* WARNING: Removing unreachable block (ram,0x000164998862) */
/* WARNING: Removing unreachable block (ram,0x0001649988bb) */
/* WARNING: Removing unreachable block (ram,0x0001649988c0) */
/* WARNING: Removing unreachable block (ram,0x000164998924) */
/* WARNING: Removing unreachable block (ram,0x000164998923) */
/* WARNING: Removing unreachable block (ram,0x00016499892a) */
/* WARNING: Removing unreachable block (ram,0x000164998992) */
/* WARNING: Removing unreachable block (ram,0x000164998998) */
/* WARNING: Removing unreachable block (ram,0x0001649989e5) */
/* WARNING: Removing unreachable block (ram,0x0001649989e9) */
/* WARNING: Removing unreachable block (ram,0x000164998a49) */
/* WARNING: Removing unreachable block (ram,0x000162f34eba) */
/* WARNING: Removing unreachable block (ram,0x000164998a4f) */
/* WARNING: Removing unreachable block (ram,0x000157343e5b) */
/* WARNING: Removing unreachable block (ram,0x000161e352a1) */
/* WARNING: Removing unreachable block (ram,0x000164998a44) */
/* WARNING: Removing unreachable block (ram,0x00014dfd3ac4) */
/* WARNING: Removing unreachable block (ram,0x000162b62042) */
/* WARNING: Removing unreachable block (ram,0x000162b62048) */
/* WARNING: Removing unreachable block (ram,0x00014da78d77) */

ulonglong FUN_14da78cf3(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  return *(ulonglong *)(unaff_RSI + -0x40) ^ unaff_RBP;
}



// FUNCTION 14da78f42 FUN_14da78f42 body=137 status=ok
// SIG undefined FUN_14da78f42(void)

void FUN_14da78f42(undefined8 param_1,longlong param_2)

{
  longlong unaff_retaddr;
  
  FUN_14de36ef2(param_1,unaff_retaddr - param_2);
  return;
}



// FUNCTION 14da7906a FUN_14da7906a body=153 status=ok
// SIG undefined FUN_14da7906a(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da7906a(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong in_RAX;
  ulonglong unaff_RBX;
  longlong unaff_R12;
  undefined8 unaff_R13;
  ulonglong unaff_retaddr;
  undefined8 uStackX_10;
  undefined8 uStackX_20;
  
  uVar2 = *(ulonglong *)(unaff_R12 + -0x48);
  FUN_16497e821(param_1,unaff_retaddr ^ in_RAX);
  uVar1 = ~(uStackX_20 & unaff_RBX) & (uStackX_20 | unaff_RBX);
  *(ulonglong *)(uVar1 - 8) = uVar1;
  lVar3 = *(longlong *)(uVar1 - 8);
  *(undefined8 *)(lVar3 + -8) = 0x2ed0d118;
  *(ulonglong *)(lVar3 + -8) = *(ulonglong *)(lVar3 + -8) ^ 0x2ed0d118;
  *(ulonglong *)(lVar3 + -0x10) = uVar2 ^ in_RAX;
  *(undefined8 *)(lVar3 + -0x18) = unaff_R13;
  *(longlong *)(lVar3 + -8) = *(longlong *)(lVar3 + -8) - param_4;
  *(longlong *)(lVar3 + -8) = -*(longlong *)(lVar3 + -8);
  FUN_161300c7b(uStackX_10);
  return;
}



// FUNCTION 14da79105 FUN_14da79105 body=137 status=ok
// SIG undefined FUN_14da79105(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da79105(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  undefined8 unaff_R13;
  ulonglong local_res8;
  undefined8 uStackX_18;
  
  uVar1 = ~(param_5 & local_res8) & (param_5 | local_res8);
  *(ulonglong *)(uVar1 - 8) = uVar1;
  lVar2 = *(longlong *)(uVar1 - 8);
  *(undefined8 *)(lVar2 + -8) = 0x2ed0d118;
  *(ulonglong *)(lVar2 + -8) = *(ulonglong *)(lVar2 + -8) ^ 0x2ed0d118;
  *(undefined8 *)(lVar2 + -0x10) = unaff_RSI;
  *(undefined8 *)(lVar2 + -0x18) = unaff_R13;
  *(longlong *)(lVar2 + -8) = *(longlong *)(lVar2 + -8) - param_4;
  *(longlong *)(lVar2 + -8) = -*(longlong *)(lVar2 + -8);
  FUN_161300c7b(uStackX_18,param_2,param_3,FUN_161300c7b);
  return;
}



// FUNCTION 14da79190 FUN_14da79190 body=522 status=ok
// SIG undefined FUN_14da79190(void)

/* WARNING: Removing unreachable block (ram,0x00014da792d9) */
/* WARNING: Removing unreachable block (ram,0x00014da792df) */
/* WARNING: Removing unreachable block (ram,0x000162356c50) */
/* WARNING: Removing unreachable block (ram,0x00014da79234) */

void FUN_14da79190(void)

{
  FUN_16291bfbd(0);
  if (&stack0x00000000 == (undefined1 *)0x0) {
    FUN_1565c9330();
    return;
  }
  return;
}



// FUNCTION 14da79367 FUN_14da79367 body=161 status=ok
// SIG undefined FUN_14da79367(void)

void FUN_14da79367(void)

{
  FUN_165a4de64();
  FUN_14da7940a();
  return;
}



// FUNCTION 14da7940a FUN_14da7940a body=325 status=ok
// SIG undefined FUN_14da7940a(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da7940a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong unaff_RBX;
  longlong unaff_RBP;
  byte bVar3;
  byte bVar4;
  byte in_AF;
  byte bVar5;
  byte bVar6;
  byte in_TF;
  byte in_IF;
  byte bVar7;
  byte in_NT;
  byte in_AC;
  byte in_ID;
  ulonglong uVar8;
  undefined8 local_res8;
  
  bVar3 = 0;
  bVar7 = 0;
  bVar6 = 1;
  bVar5 = 0;
  bVar4 = 1;
  uVar2 = FUN_160e22cc5(param_1,param_2,param_3,param_4);
  *(ulonglong *)(&stack0xfffffffff48a056b + unaff_RBX) =
       (ulonglong)((in_NT & 1) != 0) * 0x4000 | (ulonglong)((bVar7 & 1) != 0) * 0x800 |
       (ulonglong)((in_IF & 1) != 0) * 0x200 | (ulonglong)((in_TF & 1) != 0) * 0x100 |
       (ulonglong)((bVar6 & 1) != 0) * 0x80 | (ulonglong)((bVar5 & 1) != 0) * 0x40 |
       (ulonglong)((in_AF & 1) != 0) * 0x10 | (ulonglong)((bVar4 & 1) != 0) * 4 |
       (ulonglong)((bVar3 & 1) != 0) | (ulonglong)((in_ID & 1) != 0) * 0x200000 |
       (ulonglong)((in_AC & 1) != 0) * 0x40000;
  *(undefined8 *)(&stack0xfffffffff48a0563 + unaff_RBX) = uVar2;
  *(undefined4 *)(&stack0xfffffffff48a0563 + unaff_RBX) = 0;
  *(uint *)(&stack0xfffffffff48a0563 + unaff_RBX) =
       *(uint *)(&stack0xfffffffff48a0563 + unaff_RBX) ^ 0x1e6d7b5a;
  *(undefined4 *)(&stack0xfffffffff48a0567 + unaff_RBX) = 0;
  uVar8 = *(ulonglong *)(&stack0xfffffffff48a056b + unaff_RBX);
  *(undefined8 *)(&stack0xfffffffff48a056b + unaff_RBX) = uVar2;
  *(undefined8 *)(&stack0xfffffffff48a0563 + unaff_RBX) = local_res8;
  uVar2 = *(undefined8 *)(&stack0xfffffffff48a056b + unaff_RBX);
  *(ulonglong *)(&stack0xfffffffff48a056b + unaff_RBX) =
       (ulonglong)((uVar8 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar8 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar8 & 0x400) != 0) * 0x400 | (ulonglong)((uVar8 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar8 & 0x100) != 0) * 0x100 | (ulonglong)((uVar8 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar8 & 0x40) != 0) * 0x40 | (ulonglong)((uVar8 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar8 & 4) != 0) * 4 | (ulonglong)((uVar8 & 1) != 0) |
       (ulonglong)((uVar8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar8 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(&stack0xfffffffff48a0563 + unaff_RBX) = uVar2;
  *(undefined4 *)(&stack0xfffffffff48a0563 + unaff_RBX) = 0x22afb55b;
  *(undefined4 *)(&stack0xfffffffff48a0567 + unaff_RBX) = 0;
  lVar1 = *(longlong *)(&stack0xfffffffff48a0563 + unaff_RBX);
  uVar8 = *(ulonglong *)(&stack0xfffffffff48a056b + unaff_RBX);
  *(ulonglong *)(&stack0xfffffffff48a056b + unaff_RBX) =
       (ulonglong)((uVar8 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar8 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar8 & 0x400) != 0) * 0x400 | (ulonglong)((uVar8 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar8 & 0x100) != 0) * 0x100 | (ulonglong)((uVar8 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar8 & 0x40) != 0) * 0x40 | (ulonglong)((uVar8 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar8 & 4) != 0) * 4 | (ulonglong)((uVar8 & 1) != 0) |
       (ulonglong)((uVar8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar8 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(&stack0xfffffffff48a056b + unaff_RBX) = 0x14da79543;
  FUN_165cc83e8();
  *(char *)(unaff_RBP + -0x2a) =
       *(char *)(unaff_RBP + -0x2a) + (char)((ulonglong)(lVar1 + 0x5d4e4aa5) >> 8);
  in(0x9a);
  *(char *)(param_1 + 0x608ea6d5) = *(char *)(param_1 + 0x608ea6d5) + (char)(lVar1 + 0x5d4e4aa5);
  *(int *)(unaff_RBP + -0x9a18af9) = *(int *)(unaff_RBP + -0x9a18af9) + 0x60e22cc5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14da795ed FUN_14da795ed body=169 status=ok
// SIG undefined FUN_14da795ed(void)

/* WARNING: Removing unreachable block (ram,0x00014da7968b) */
/* WARNING: Removing unreachable block (ram,0x00014da79696) */
/* WARNING: Removing unreachable block (ram,0x00014da796da) */
/* WARNING: Removing unreachable block (ram,0x00014da796dd) */
/* WARNING: Removing unreachable block (ram,0x00014da796ff) */
/* WARNING: Removing unreachable block (ram,0x00014da79705) */
/* WARNING: Removing unreachable block (ram,0x0001647586dc) */
/* WARNING: Removing unreachable block (ram,0x0001652f50a5) */
/* WARNING: Removing unreachable block (ram,0x0001652f50ab) */
/* WARNING: Removing unreachable block (ram,0x0001650f1a20) */
/* WARNING: Removing unreachable block (ram,0x00014da79691) */
/* WARNING: Removing unreachable block (ram,0x00015745efc2) */

undefined8 FUN_14da795ed(void)

{
  undefined8 uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong lVar2;
  
  lVar2 = *(ulonglong *)(unaff_RSI + -0x28) + unaff_RBP +
          (*(ulonglong *)(unaff_RSI + -0x28) & unaff_RBP) * -2;
  FUN_1567fb5e1();
  uVar1 = FUN_1650f1a20(0x31,~(lVar2 + unaff_RBP + 1) & 0xfffffffffffffff8);
  return uVar1;
}



// FUNCTION 14da79696 FUN_14da79696 body=260 status=ok
// SIG undefined FUN_14da79696(void)

/* WARNING: Removing unreachable block (ram,0x00014da796da) */
/* WARNING: Removing unreachable block (ram,0x00014da79705) */

undefined8 FUN_14da79696(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da79839 FUN_14da79839 body=20 status=ok
// SIG undefined FUN_14da79839(void)

void FUN_14da79839(void)

{
  return;
}



// FUNCTION 14da79a7c FUN_14da79a7c body=46 status=ok
// SIG undefined FUN_14da79a7c(void)

void FUN_14da79a7c(void)

{
  return;
}



// FUNCTION 14da79b17 FUN_14da79b17 body=55 status=ok
// SIG undefined FUN_14da79b17(void)

void FUN_14da79b17(undefined8 param_1)

{
  FUN_165c7153c(param_1);
  return;
}



// FUNCTION 14da79cbb FUN_14da79cbb body=303 status=ok
// SIG undefined FUN_14da79cbb(void)

void FUN_14da79cbb(ulonglong param_1)

{
  ulonglong in_RAX;
  undefined8 unaff_retaddr;
  
  FUN_161addf00(~(in_RAX & param_1) & (in_RAX | param_1),unaff_retaddr);
  FUN_166582489();
  FUN_14da79dee();
  return;
}



// FUNCTION 14da79dee FUN_14da79dee body=158 status=ok
// SIG undefined FUN_14da79dee(void)

void FUN_14da79dee(undefined8 param_1,undefined2 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  ulonglong unaff_retaddr;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x70);
  uVar2 = ~uVar1 & (unaff_retaddr ^ 0xffffffffffffffff) | uVar1;
  thunk_FUN_1665624d7(unaff_retaddr,param_2,
                      ~(((~uVar1 | unaff_retaddr) - (uVar2 | ~uVar1 | unaff_retaddr)) + uVar2));
  return;
}



// FUNCTION 14da79e8d FUN_14da79e8d body=133 status=ok
// SIG undefined FUN_14da79e8d(void)

undefined8 FUN_14da79e8d(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da79f13 FUN_14da79f13 body=116 status=ok
// SIG undefined FUN_14da79f13(void)

void FUN_14da79f13(void)

{
  ulonglong uVar1;
  ulonglong *unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *unaff_R13;
  *unaff_R13 = ~*unaff_R13;
  *unaff_R13 = *unaff_R13 | unaff_R15;
  *unaff_R13 = ~((~unaff_R15 | uVar1) & *unaff_R13);
  FUN_16534a02d();
  return;
}



// FUNCTION 14da7a038 FUN_14da7a038 body=9 status=ok
// SIG undefined FUN_14da7a038(void)

void FUN_14da7a038(void)

{
  return;
}



// FUNCTION 14da7a219 FUN_14da7a219 body=79 status=ok
// SIG undefined FUN_14da7a219(void)

undefined8 FUN_14da7a219(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14da7a288 FUN_14da7a288 body=157 status=ok
// SIG undefined FUN_14da7a288(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da7a288(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)0x14d958fc6)
            (~unaff_R15,param_2,
             ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x88)) &
              (~*(ulonglong *)(unaff_R13 + -0x88) | unaff_R15)),
             *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14da7a327 FUN_14da7a327 body=168 status=ok
// SIG undefined FUN_14da7a327(void)

undefined8 FUN_14da7a327(void)

{
  undefined8 in_RAX;
  ulonglong unaff_RBX;
  longlong unaff_R14;
  
  *(undefined8 *)(&stack0x43deb332 + unaff_R14) = 0;
  *(ulonglong *)(&stack0x43deb332 + unaff_R14) =
       *(longlong *)(&stack0x43deb332 + unaff_R14) - (~unaff_RBX + 1);
  return in_RAX;
}



// FUNCTION 14da7a469 FUN_14da7a469 body=299 status=ok
// SIG undefined FUN_14da7a469(void)

void FUN_14da7a469(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong in_RAX;
  longlong unaff_RSI;
  longlong unaff_R12;
  
  (*(code *)0x14de2d5a8)
            (~in_RAX & *(ulonglong *)(unaff_R12 + -0x40),param_2,0xffffffffffffffc8,
             param_4 - unaff_RSI);
  return;
}



// FUNCTION 14da7a509 FUN_14da7a509 body=334 status=ok
// SIG undefined FUN_14da7a509(void)

void FUN_14da7a509(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_16278ba16(-1 - ((0xffffffffffffffff - unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
                     (~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15)));
  (*(code *)0x166189bc5)();
  return;
}



// FUNCTION 14da7a657 FUN_14da7a657 body=140 status=ok
// SIG undefined FUN_14da7a657(void)

void FUN_14da7a657(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R12;
  undefined8 local_res8 [2];
  ushort local_res18;
  
  *(undefined8 *)((longlong)local_res8 + unaff_R12) = param_3;
  local_res18 = (-0x101 - (local_res18 | 0xfeff)) + local_res18;
  (*(code *)0x166c32d45)(param_1,param_2,0x166c32d45);
  return;
}



// FUNCTION 14da7a76c FUN_14da7a76c body=141 status=ok
// SIG undefined FUN_14da7a76c(void)

void FUN_14da7a76c(ulonglong param_1,longlong param_2,longlong param_3)

{
  thunk_FUN_165273607(param_1,~param_1,param_2 + param_3);
  return;
}



// FUNCTION 14da7aafa FUN_14da7aafa body=9 status=ok
// SIG undefined FUN_14da7aafa(void)

void FUN_14da7aafa(void)

{
  return;
}



// FUNCTION 14da7ab8a FUN_14da7ab8a body=130 status=ok
// SIG undefined FUN_14da7ab8a(void)

void FUN_14da7ab8a(undefined8 param_1,undefined8 param_2)

{
  FUN_157452a81(param_1,param_2);
  return;
}



// FUNCTION 14da7ac0c FUN_14da7ac0c body=334 status=ok
// SIG undefined FUN_14da7ac0c(void)

void FUN_14da7ac0c(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  longlong unaff_R12;
  
  lVar2 = *(longlong *)(unaff_R12 + -0x68);
  FUN_166c51b13();
  uVar3 = FUN_165e169b2(param_1);
  puVar1 = (undefined8 *)(lVar2 + -8);
  *puVar1 = unaff_RBX;
  *(undefined8 *)(lVar2 + -0x10) = *puVar1;
  *puVar1 = &LAB_14da7ad79;
  *(undefined8 *)(lVar2 + -0x10) = uVar3;
  return;
}



// FUNCTION 14da7afbe FUN_14da7afbe body=151 status=ok
// SIG undefined FUN_14da7afbe(void)

void FUN_14da7afbe(ulonglong param_1)

{
  ulonglong unaff_RBP;
  
  FUN_1623893b7(param_1 ^ unaff_RBP,1);
  return;
}



// FUNCTION 14da7b0f9 FUN_14da7b0f9 body=125 status=ok
// SIG undefined FUN_14da7b0f9(void)

void FUN_14da7b0f9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_15b73e3b2(param_1,(*(ulonglong *)(unaff_R12 + -0x40) + in_RAX) -
                        (*(ulonglong *)(unaff_R12 + -0x40) & in_RAX),param_3,0);
  return;
}



// FUNCTION 14da7b350 FUN_14da7b350 body=3 status=ok
// SIG undefined FUN_14da7b350(void)

void FUN_14da7b350(void)

{
  return;
}



// FUNCTION 14da7b484 FUN_14da7b484 body=126 status=ok
// SIG undefined FUN_14da7b484(void)

void FUN_14da7b484(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_14dd3b38f((char)param_1,FUN_14dd3b38f,*(undefined8 *)(unaff_RDI + -0x70),
                ~(*(ulonglong *)(unaff_RDI + -0x60) & param_1) &
                (*(ulonglong *)(unaff_RDI + -0x60) | param_1));
  return;
}



// FUNCTION 14da7b5a2 FUN_14da7b5a2 body=258 status=ok
// SIG undefined FUN_14da7b5a2(void)

/* WARNING: Removing unreachable block (ram,0x00014da7b64c) */
/* WARNING: Removing unreachable block (ram,0x00014da7b65d) */
/* WARNING: Removing unreachable block (ram,0x00014da7b652) */

void FUN_14da7b5a2(void)

{
  FUN_160d67e62();
  return;
}



// FUNCTION 14da7b788 FUN_14da7b788 body=142 status=ok
// SIG undefined FUN_14da7b788(void)

void FUN_14da7b788(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong unaff_RBP;
  longlong unaff_R13;
  longlong unaff_R14;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x28);
  FUN_166c6bdfd(~((unaff_R14 + unaff_RBP) - (-1 - param_2) &
                 (~(unaff_R15 | ~(0xffffffffffffffffU - param_1)) | unaff_R15)),
                ~(uVar1 & unaff_R15) & (~(uVar1 & unaff_R15) + unaff_R15) - ~uVar1);
  return;
}



// FUNCTION 14da7b817 FUN_14da7b817 body=166 status=ok
// SIG undefined FUN_14da7b817(void)

/* WARNING: Removing unreachable block (ram,0x00014da7b8ba) */

void FUN_14da7b817(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (-1 < (longlong)(*(ulonglong *)(unaff_R13 + -0x38) ^ unaff_R15)) {
    return;
  }
  FUN_1622ec455();
  return;
}



// FUNCTION 14da7b8c0 FUN_14da7b8c0 body=290 status=ok
// SIG undefined FUN_14da7b8c0(void)

void FUN_14da7b8c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  
  FUN_165615054(param_1,*(undefined8 *)(unaff_R13 + -0x98),param_3,param_4,param_2,
                *(undefined8 *)(unaff_R13 + -8));
  FUN_1563c7272(param_1);
  return;
}



// FUNCTION 14da7b9f1 FUN_14da7b9f1 body=139 status=ok
// SIG undefined FUN_14da7b9f1(void)

ulonglong FUN_14da7b9f1(ulonglong param_1)

{
  ulonglong uVar1;
  uint unaff_ESI;
  longlong unaff_RDI;
  undefined4 local_res10;
  
  uVar1 = (param_1 - (*(ulonglong *)(unaff_RDI + -0x40) | param_1)) +
          *(ulonglong *)(unaff_RDI + -0x40);
  return uVar1 >> 0x1f | uVar1 << 0x22 | (ulonglong)(unaff_ESI < local_res10) << 0x21;
}



// FUNCTION 14da7bbcd FUN_14da7bbcd body=135 status=ok
// SIG undefined FUN_14da7bbcd(void)

void FUN_14da7bbcd(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  (*(code *)0x1568f3e26)
            (*(ulonglong *)(unaff_RSI + -0x38) ^ unaff_RBP,*(undefined8 *)(unaff_RSI + -0x58));
  return;
}



// FUNCTION 14da7bc5a FUN_14da7bc5a body=178 status=ok
// SIG undefined FUN_14da7bc5a(void)

/* WARNING: Removing unreachable block (ram,0x00014da7bcf4) */

undefined8 FUN_14da7bc5a(void)

{
  return 8;
}



// FUNCTION 14da7bd18 FUN_14da7bd18 body=120 status=ok
// SIG undefined FUN_14da7bd18(void)

/* WARNING: Instruction at (ram,0x00016261e55b) overlaps instruction at (ram,0x00016261e55a)
    */
/* WARNING: Removing unreachable block (ram,0x00014da7bd90) */

void FUN_14da7bd18(longlong param_1,undefined8 param_2,longlong param_3)

{
  char in_AL;
  longlong unaff_RBP;
  
  if (param_1 == param_3) {
    *(undefined4 *)(unaff_RBP + 0xd8) = 0;
    DAT_1d6c89a1 = DAT_1d6c89a1 + in_AL;
    (*(code *)0x162e6571c)();
    return;
  }
  FUN_162dadf1d();
  return;
}



// FUNCTION 14da7bd90 FUN_14da7bd90 body=444 status=ok
// SIG undefined FUN_14da7bd90(void)

void FUN_14da7bd90(ulonglong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar5;
  undefined8 in_R10;
  longlong in_R11;
  longlong unaff_R12;
  
  uVar5 = 0x63553ffb;
  puVar1 = (undefined8 *)(&stack0xffffffffff224bf5 + unaff_RDI);
  *puVar1 = in_RAX;
  puVar1[-1] = unaff_RSI;
  *(undefined4 *)(puVar1 + -2) = 0x29ef178b;
  *(undefined4 *)((longlong)puVar1 + -0xc) = 0;
  uVar4 = puVar1[-2];
  puVar1[-2] = 0x14da7be33;
  FUN_16218a227();
  uVar5 = ~((~param_1 | uVar5) & (~uVar5 | param_1));
  puVar1[-1] = unaff_R12 + -0x6c97 + (uVar4 ^ 0x29ef7b9c);
  uVar4 = *(ulonglong *)(unaff_RDI + -0xddb433);
  puVar1[-1] = uVar4;
  lVar3 = puVar1[-1] + param_1;
  uVar4 = uVar4 & param_1;
  puVar1[-1] = *(undefined8 *)(unaff_RDI + -0xddb473);
  *(undefined4 *)(puVar1 + -1) = 0;
  puVar1[-2] = 0x14da7bed6;
  FUN_160df690d();
  uVar2 = *(undefined8 *)((longlong)puVar1 + (~uVar5 | ~param_1) + 8);
  *puVar1 = in_R10;
  puVar1[2] = uVar2;
  uVar2 = puVar1[1];
  puVar1[1] = lVar3 + uVar4 * -2;
  puVar1[3] = 0x4d645b49;
  puVar1[3] = puVar1[3] ^ 0x4d645b49;
  puVar1[3] = puVar1[3] + in_R11;
  *(undefined4 *)(puVar1 + 1) = 0x1cc0183f;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  thunk_FUN_15b642ca5(uVar2);
  return;
}



// FUNCTION 14da7c228 FUN_14da7c228 body=157 status=ok
// SIG undefined FUN_14da7c228(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da7c228(void)

{
  return;
}



// FUNCTION 14da7c2c7 FUN_14da7c2c7 body=98 status=ok
// SIG undefined FUN_14da7c2c7(void)

void FUN_14da7c2c7(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14da7c36d FUN_14da7c36d body=88 status=ok
// SIG undefined FUN_14da7c36d(void)

void FUN_14da7c36d(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014da7c3c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14da7c427 FUN_14da7c427 body=230 status=ok
// SIG undefined FUN_14da7c427(void)

/* WARNING: Instruction at (ram,0x00016654833f) overlaps instruction at (ram,0x00016654833e)
    */
/* WARNING: Removing unreachable block (ram,0x0001665483c8) */
/* WARNING: Removing unreachable block (ram,0x00014da7c56e) */
/* WARNING: Removing unreachable block (ram,0x00014da7c563) */
/* WARNING: Removing unreachable block (ram,0x00014da7c4c1) */
/* WARNING: Removing unreachable block (ram,0x000166548338) */
/* WARNING: Removing unreachable block (ram,0x00014da7c55d) */
/* WARNING: Removing unreachable block (ram,0x00016654833b) */
/* WARNING: Removing unreachable block (ram,0x0001665483c2) */
/* WARNING: Removing unreachable block (ram,0x000161cf7a43) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14da7c427(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 unaff_R13;
  ushort *unaff_R14;
  undefined8 uStackX_10;
  
  uVar1 = *unaff_R14;
  uVar2 = *unaff_R14;
  *unaff_R14 = 0;
  *unaff_R14 = *unaff_R14 - ((~(uVar1 | 0xfeff) - 0x100) + uVar2);
  *unaff_R14 = -*unaff_R14;
  *(undefined8 *)(param_5 + -8) = unaff_RDI;
  *(undefined8 *)(param_5 + -0x10) = *(undefined8 *)(param_5 + -8);
  *(undefined8 *)(param_5 + -0x18) = param_4;
  *(undefined8 *)(param_5 + -0x20) = unaff_R13;
  *(undefined1 **)(0x11 - (~(param_5 - 0x18U) + 2)) = &LAB_1572af24d;
  *(undefined8 *)(param_5 + -0x10) = param_3;
  *(undefined8 *)(param_5 + -0x18) = param_3;
  *(undefined8 *)(param_5 + -0x20) = unaff_RBP;
  *(undefined8 *)(param_5 + -0x28) = uStackX_10;
  *(undefined **)(param_5 + -0x10) = &DAT_14d7c26cc;
  return;
}



// FUNCTION 14da7c4c1 FUN_14da7c4c1 body=307 status=ok
// SIG undefined FUN_14da7c4c1(void)

/* WARNING: Instruction at (ram,0x00016654833f) overlaps instruction at (ram,0x00016654833e)
    */
/* WARNING: Removing unreachable block (ram,0x000166548338) */
/* WARNING: Removing unreachable block (ram,0x00014da7c563) */
/* WARNING: Removing unreachable block (ram,0x00014da7c56e) */
/* WARNING: Removing unreachable block (ram,0x00014da7c569) */
/* WARNING: Removing unreachable block (ram,0x0001665483c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14da7c4c1(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = 0xffffffffffffffff - (-1 - *(ulonglong *)(unaff_R12 + -0x80)) & ~in_RAX;
  (*(code *)0x14deef96e)
            (&stack0xfffffffffffffff8,param_2,
             ~(~uVar1 - ~(uVar1 | ~in_RAX | *(ulonglong *)(unaff_R12 + -0x80))));
  return;
}



// FUNCTION 14da7c56e FUN_14da7c56e body=126 status=ok
// SIG undefined FUN_14da7c56e(void)

void FUN_14da7c56e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x162e2b02a)(param_1,param_2,param_3,0x162e2b02a);
  return;
}



// FUNCTION 14da7c5ee FUN_14da7c5ee body=157 status=ok
// SIG undefined FUN_14da7c5ee(void)

/* WARNING: Removing unreachable block (ram,0x00014da7c60f) */

void FUN_14da7c5ee(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_165a2a4c7(param_1,*(ulonglong *)(unaff_RDI + -0x68) + param_1 +
                        (*(ulonglong *)(unaff_RDI + -0x68) & param_1) * -2,FUN_165a2a4c7);
  return;
}



// FUNCTION 14da7c720 FUN_14da7c720 body=416 status=ok
// SIG undefined FUN_14da7c720(void)

/* WARNING: Removing unreachable block (ram,0x00014da7c85c) */
/* WARNING: Removing unreachable block (ram,0x00014da7c867) */
/* WARNING: Removing unreachable block (ram,0x00014da7c7b4) */
/* WARNING: Removing unreachable block (ram,0x00014da7c7ba) */
/* WARNING: Removing unreachable block (ram,0x00016115cc94) */
/* WARNING: Removing unreachable block (ram,0x00014da7c862) */

undefined8 FUN_14da7c720(void)

{
  ushort *puVar1;
  undefined8 in_R9;
  longlong in_R10;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 local_res10;
  longlong lStackX_20;
  
  puVar1 = (ushort *)(&stack0xfffffffff62fc7da + in_R10);
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 | 0x100;
  *puVar1 = ~*puVar1;
  *(undefined8 *)(lStackX_20 + -0x10) = unaff_retaddr;
  *(undefined8 *)(lStackX_20 + -0x18) = 0x323564c;
  *(undefined8 *)(lStackX_20 + -8) = *(undefined8 *)(lStackX_20 + -0x18);
  *(undefined8 *)(lStackX_20 + -0x10) = unaff_R15;
  *(undefined8 *)(lStackX_20 + -0x18) = unaff_R15;
  *(undefined8 *)(lStackX_20 + -0x20) = in_R9;
  *(undefined8 *)(lStackX_20 + -0x10) = 0x156ef2e25;
  return local_res10;
}



// FUNCTION 14da7c90c FUN_14da7c90c body=234 status=ok
// SIG undefined FUN_14da7c90c(void)

void FUN_14da7c90c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  ulonglong *puVar2;
  undefined8 in_RAX;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 in_R10;
  undefined8 in_R11;
  ulonglong unaff_R12;
  longlong unaff_retaddr;
  
  puVar1 = &stack0xfffffffff7baecc4 + unaff_retaddr;
  *(undefined8 *)(puVar1 + -8) = unaff_RBP;
  *(undefined8 *)(puVar1 + -8) = unaff_RSI;
  *(undefined8 *)(puVar1 + -0x10) = in_RAX;
  *(undefined4 *)(puVar1 + -0x10) = 0xd2073520;
  *(int *)(puVar1 + -0x10) = *(int *)(puVar1 + -0x10) + 0x2df8cae0;
  *(undefined4 *)(puVar1 + -0xc) = 0;
  *(undefined8 *)(puVar1 + -0x10) = in_R10;
  *(undefined8 *)(puVar1 + -0x18) = param_1;
  uVar4 = *(undefined8 *)(puVar1 + -0x18);
  *(undefined8 *)(puVar1 + -0x10) = in_R11;
  *(undefined8 *)(puVar1 + -0x18) = in_RAX;
  *(undefined8 *)(puVar1 + -0x20) = 0x14da7c98c;
  uVar3 = FUN_156a1e3bd(uVar4,puVar1);
  *(ulonglong *)(puVar1 + -0x10) = *(ulonglong *)(puVar1 + -0x10) ^ uVar3;
  *(undefined8 *)(puVar1 + -0x18) = uVar4;
  *(ulonglong *)(puVar1 + -0x20) = unaff_R12 + uVar3 + (unaff_R12 & uVar3) * -2;
  puVar2 = (ulonglong *)(puVar1 + -0x28);
  *puVar2 = uVar3;
  *(int *)puVar2 = -0x1c31fe82;
  *(int *)puVar2 = (int)*puVar2 + 0x36649385;
  *(undefined4 *)(puVar1 + -0x24) = 0;
  uVar3 = *puVar2;
  *(undefined8 *)(puVar1 + -0x28) = param_3;
  *(ulonglong *)(puVar1 + -0x30) = uVar3;
  *(ulonglong *)(puVar1 + -0x38) = uVar3;
  *(undefined1 **)(puVar1 + -0x30) = &LAB_14da7c9f8;
  return;
}



// FUNCTION 14da7cbd5 FUN_14da7cbd5 body=58 status=ok
// SIG undefined FUN_14da7cbd5(void)

void FUN_14da7cbd5(void)

{
  return;
}



// FUNCTION 14da7cc75 FUN_14da7cc75 body=156 status=ok
// SIG undefined FUN_14da7cc75(void)

undefined8 FUN_14da7cc75(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da7cec9 FUN_14da7cec9 body=83 status=ok
// SIG undefined FUN_14da7cec9(void)

void FUN_14da7cec9(void)

{
  longlong *plVar1;
  longlong unaff_R12;
  longlong unaff_R15;
  longlong local_res18;
  
  plVar1 = (longlong *)(local_res18 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1;
  *plVar1 = *plVar1 - unaff_R15;
  *plVar1 = -*plVar1;
  *(longlong *)(local_res18 + -0x10) = *plVar1;
  *plVar1 = (longlong)&LAB_14da7cf36;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(unaff_R12 + 0xe0);
  return;
}


