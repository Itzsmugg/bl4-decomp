// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14d7c35b3 FUN_14d7c35b3 body=3 status=ok
// SIG undefined FUN_14d7c35b3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c35b3(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c35b7 FUN_14d7c35b7 body=8 status=ok
// SIG undefined FUN_14d7c35b7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c35b7(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  undefined4 in_EAX;
  byte bVar6;
  ulonglong unaff_RSI;
  char cVar5;
  
  bVar6 = (byte)((ulonglong)param_1 >> 8);
  pbVar1 = (byte *)((unaff_RSI & 0xffffffff) - 0x7f);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar6;
  in(0x2a);
  pcVar2 = (char *)((unaff_RSI & 0xffffffff) + 0xeb3104d);
  cVar4 = *pcVar2;
  cVar5 = *pcVar2;
  LOCK();
  *(char *)(param_2 + -0x3f052843) = (char)((uint)in_EAX >> 8);
  UNLOCK();
  do {
  } while (SBORROW1((char)in_EAX,cVar4) != SBORROW1((char)in_EAX - cVar5,CARRY1(bVar3,bVar6)));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c35c0 FUN_14d7c35c0 body=23 status=ok
// SIG undefined FUN_14d7c35c0(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c35d0) overlaps instruction at (ram,0x00014d7c35ce)
    */

void FUN_14d7c35c0(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  bool bVar6;
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  bVar4 = (byte)param_2;
  while( true ) {
    bVar6 = bVar4 < *(byte *)(unaff_RSI + 0x4d851a50);
    bVar4 = bVar4 - *(byte *)(unaff_RSI + 0x4d851a50);
    pcVar1 = (char *)(unaff_RBX + -0x425d79f2);
    cVar2 = *pcVar1;
    cVar3 = *pcVar1 + cVar5;
    *pcVar1 = cVar3 + bVar6;
    *(undefined1 *)(unaff_RBP + -0x4acc0f45) = 0;
    if (SCARRY1(cVar2,cVar5) == SCARRY1(cVar3,bVar6)) break;
    unaff_RBX = 0x2db533f0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c35e0 FUN_14d7c35e0 body=28 status=ok
// SIG undefined FUN_14d7c35e0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c35e0(uint param_1,uint *param_2,undefined8 param_3,byte param_4)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar6;
  char cVar7;
  bool bVar9;
  undefined4 in_EAX;
  byte bVar10;
  byte unaff_BL;
  byte *unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_SF;
  byte bVar5;
  char cVar8;
  
  if (in_SF) {
    LOCK();
    *param_2 = param_1;
    UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RSI = param_4;
  bVar3 = *unaff_RSI;
  bVar10 = (byte)(param_1 >> 8);
  *unaff_RSI = *unaff_RSI + bVar10;
  pbVar2 = (byte *)((longlong)param_2 + -0x53cd20a3);
  bVar4 = *pbVar2;
  bVar5 = *pbVar2;
  *pbVar2 = bVar5 + unaff_BL + CARRY1(bVar3,bVar10);
  uVar6 = in((short)param_2);
  *unaff_RDI = uVar6;
  bVar9 = (param_1 & 0x1f) != 0;
  if ((bVar9 || !CARRY1(bVar4,unaff_BL) && !CARRY1(bVar5 + unaff_BL,CARRY1(bVar3,bVar10))) &&
      (!bVar9 || ((char)(byte)param_1 >> ((byte)param_1 & 0x1f) - 1 & 1U) == 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar2 = (byte *)(((ulonglong)unaff_RSI & 0xffffffff) - 0x7f);
  bVar3 = *pbVar2;
  *pbVar2 = *pbVar2 + bVar10;
  in(0x2a);
  pcVar1 = (char *)(((ulonglong)unaff_RSI & 0xffffffff) + 0xeb3104d);
  cVar7 = *pcVar1;
  cVar8 = *pcVar1;
  LOCK();
  *(char *)((longlong)param_2 + -0x3f052843) = (char)((uint)in_EAX >> 8);
  UNLOCK();
  do {
  } while (SBORROW1((char)in_EAX,cVar7) != SBORROW1((char)in_EAX - cVar8,CARRY1(bVar3,bVar10)));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c35fc FUN_14d7c35fc body=26 status=ok
// SIG undefined FUN_14d7c35fc(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c35f9) overlaps instruction at (ram,0x00014d7c35f8)
    */

void FUN_14d7c35fc(ulonglong param_1,int *param_2,undefined8 param_3,byte param_4)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 uVar5;
  byte bVar6;
  char cVar7;
  int iVar9;
  bool bVar10;
  ulonglong uVar11;
  char cVar12;
  undefined4 in_EAX;
  byte bVar13;
  byte bVar14;
  byte unaff_BL;
  longlong unaff_RBP;
  byte *unaff_RSI;
  undefined4 *unaff_RDI;
  longlong unaff_R14;
  byte unaff_R15B;
  bool bVar15;
  bool in_PF;
  bool in_ZF;
  bool in_SF;
  bool in_OF;
  float10 in_ST0;
  byte bVar4;
  char cVar8;
  
  bVar14 = (byte)(param_1 >> 8);
  bVar13 = (byte)param_1;
  if ((!in_PF) || (in_OF)) {
    *unaff_RDI = *(undefined4 *)unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar11 = (longlong)*(int *)(unaff_RBP + 0xe) * 0x74;
  bVar15 = (longlong)(int)uVar11 != uVar11;
  cVar12 = (char)in_EAX;
  if (in_ZF || bVar15 != in_SF) {
    out(0,cVar12);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_SF) {
    *unaff_RSI = param_4;
    bVar6 = *unaff_RSI;
    *unaff_RSI = *unaff_RSI + bVar14;
    pbVar2 = (byte *)((longlong)param_2 + -0x53cd20a3);
    bVar3 = *pbVar2;
    bVar4 = *pbVar2;
    *pbVar2 = bVar4 + unaff_BL + CARRY1(bVar6,bVar14);
    uVar5 = in((short)param_2);
    *(undefined4 *)(uVar11 & 0xffffffff) = uVar5;
    bVar15 = (param_1 & 0x1f) == 0;
    if (bVar15 && (CARRY1(bVar3,unaff_BL) || CARRY1(bVar4 + unaff_BL,CARRY1(bVar6,bVar14))) ||
        !bVar15 && ((char)bVar13 >> (bVar13 & 0x1f) - 1 & 1U) != 0) {
      pbVar2 = (byte *)(((ulonglong)unaff_RSI & 0xffffffff) - 0x7f);
      bVar13 = *pbVar2;
      *pbVar2 = *pbVar2 + bVar14;
      in(0x2a);
      pcVar1 = (char *)(((ulonglong)unaff_RSI & 0xffffffff) + 0xeb3104d);
      cVar7 = *pcVar1;
      cVar8 = *pcVar1;
      LOCK();
      *(char *)((longlong)param_2 + -0x3f052843) = (char)((uint)in_EAX >> 8);
      UNLOCK();
      do {
      } while (SBORROW1(cVar12,cVar7) != SBORROW1(cVar12 - cVar8,CARRY1(bVar13,bVar14)));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar9 = *param_2;
  *param_2 = *param_2 << (bVar13 & 0x1f);
  bVar10 = (param_1 & 0x1f) != 0;
  bVar14 = unaff_RSI[unaff_R14 * 8 + -6];
  bVar6 = unaff_RSI[unaff_R14 * 8 + -6];
  *(short *)(param_1 - 0x4bce0447) = (short)in_ST0;
  *(char *)(ulonglong)(uint)(int)(short)in_EAX =
       *(char *)(ulonglong)(uint)(int)(short)in_EAX +
       (unaff_R15B < bVar14 ||
       (byte)(unaff_R15B - bVar6) <
       (!bVar10 && bVar15 || bVar10 && iVar9 << (bVar13 & 0x1f) - 1 < 0));
  return;
}



// FUNCTION 14d7c3600 FUN_14d7c3600 body=7 status=ok
// SIG undefined FUN_14d7c3600(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3600(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3615 FUN_14d7c3615 body=5 status=ok
// SIG undefined FUN_14d7c3615(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3615(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c361d FUN_14d7c361d body=1 status=ok
// SIG undefined FUN_14d7c361d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c361d(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c364a FUN_14d7c364a body=23 status=ok
// SIG undefined FUN_14d7c364a(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c3675) overlaps instruction at (ram,0x00014d7c3674)
    */

void FUN_14d7c364a(longlong param_1,undefined2 param_2)

{
  uint uVar1;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  char cVar8;
  undefined8 uVar6;
  uint *puVar7;
  byte bVar10;
  ulonglong uVar11;
  byte *pbVar12;
  undefined8 *unaff_RBP;
  undefined8 uVar13;
  char *unaff_RSI;
  undefined4 *unaff_RDI;
  byte in_R10B;
  bool bVar14;
  char in_AF;
  uint uVar2;
  byte bVar9;
  
  uVar3 = in(param_2);
  *unaff_RDI = uVar3;
  uVar11 = param_1 - 1;
  if (uVar11 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar13 = *unaff_RBP;
  pcVar4 = (code *)swi(0xbf);
  uVar6 = (*pcVar4)();
  bVar9 = (byte)((ulonglong)uVar6 >> 8);
  bVar10 = (byte)uVar11;
  cVar8 = bVar9 + bVar10;
  bVar14 = (POPCOUNT(cVar8) & 1U) == 0;
  puVar7 = (uint *)CONCAT62((int6)((ulonglong)uVar6 >> 0x10),
                            CONCAT11((cVar8 < '\0') << 7 | (cVar8 == '\0') << 6 | in_AF << 4 |
                                     bVar14 << 2 | 2U | CARRY1(bVar9,bVar10),(char)uVar6));
  iVar5 = (int)puVar7;
  if (bVar14) {
    pbVar12 = (byte *)CONCAT71((int7)(uVar11 >> 8),bVar10 << (bVar10 & 0x1f));
    bVar14 = (uVar11 & 0x1f) != 0;
    if ((bVar14 || !CARRY1(bVar9,bVar10)) && (!bVar14 || -1 < (char)(bVar10 << (bVar10 & 0x1f) - 1))
       ) {
      if (iVar5 < (int)unaff_RDI[1]) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar14 = CARRY1(*pbVar12,in_R10B);
    *pbVar12 = *pbVar12 + in_R10B;
  }
  else {
    pbVar12 = (byte *)((ulonglong)(unaff_RDI + 1) & 0xffffffff);
    uRam00000001c8dbf2ab =
         uRam00000001c8dbf2ab << 1 |
         (uint)((longlong)
                (int)((longlong)*(int *)(unaff_RSI + (ulonglong)*puVar7 * 2 + 0x4c) * -0x26) !=
               (longlong)*(int *)(unaff_RSI + (ulonglong)*puVar7 * 2 + 0x4c) * -0x26);
    *unaff_RSI = *unaff_RSI + (char)((ulonglong)pbVar12 >> 8);
    *(int *)(unaff_RSI + 0x18) = (int)uVar13;
    bVar14 = 0xe6 < *pbVar12;
    *pbVar12 = *pbVar12 + 0x19;
    unaff_RSI = unaff_RSI + 4;
  }
  unaff_RBP[1] = pbVar12;
  puVar7 = (uint *)(pbVar12 + -0x623d7dab);
  uVar1 = *puVar7;
  uVar2 = *puVar7;
  *puVar7 = (uVar2 + 0xdc8896db) - (uint)bVar14;
  *(uint *)(unaff_RSI + -0x2dd4d1d9) =
       (*(int *)(unaff_RSI + -0x2dd4d1d9) - iVar5) -
       (uint)(uVar1 < 0x23776925 || uVar2 + 0xdc8896db < (uint)bVar14);
  return;
}



// FUNCTION 14d7c3662 FUN_14d7c3662 body=22 status=ok
// SIG undefined FUN_14d7c3662(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3662(byte *param_1,byte param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  int in_EAX;
  undefined4 unaff_EBP;
  longlong unaff_RSI;
  unkbyte10 *unaff_RDI;
  bool in_ZF;
  char in_SF;
  char in_OF;
  uint uVar4;
  
  if (!in_ZF && in_OF == in_SF) {
    *(undefined4 *)(unaff_RSI + 0x18) = unaff_EBP;
    bVar2 = *param_1;
    *param_1 = *param_1 + param_2;
    puVar1 = (uint *)(param_1 + -0x623d7dab);
    uVar3 = *puVar1;
    uVar4 = *puVar1;
    pbRam000000002e007b57 = param_1;
    *puVar1 = (uVar4 + 0xdc8896db) - (uint)CARRY1(bVar2,param_2);
    *(int *)(unaff_RSI + -0x2dd4d1d5) =
         (*(int *)(unaff_RSI + -0x2dd4d1d5) - in_EAX) -
         (uint)(uVar3 < 0x23776925 || uVar4 + 0xdc8896db < (uint)CARRY1(bVar2,param_2));
    return;
  }
  from_bcd(*unaff_RDI);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3677 FUN_14d7c3677 body=5 status=ok
// SIG undefined FUN_14d7c3677(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3677(longlong param_1,int param_2)

{
  byte in_CF;
  
  *(int *)(param_1 + -0x7f) = *(int *)(param_1 + -0x7f) + param_2 + (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c367f FUN_14d7c367f body=12 status=ok
// SIG undefined FUN_14d7c367f(void)

void FUN_14d7c367f(void)

{
  undefined4 in_EAX;
  byte *unaff_RDI;
  
  LOCK();
  *unaff_RDI = (byte)((uint)in_EAX >> 8) & 0x77;
  UNLOCK();
  return;
}



// FUNCTION 14d7c3690 FUN_14d7c3690 body=7 status=ok
// SIG undefined FUN_14d7c3690(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3690(longlong param_1)

{
  char in_ZF;
  
  if (param_1 == 1 || in_ZF == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c36ad FUN_14d7c36ad body=2 status=ok
// SIG undefined FUN_14d7c36ad(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c36c9) overlaps instruction at (ram,0x00014d7c36c8)
    */

void FUN_14d7c36ad(ulonglong param_1,undefined2 param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar5;
  bool bVar6;
  int in_EAX;
  byte bVar7;
  int unaff_ESI;
  undefined4 *unaff_RDI;
  byte in_R10B;
  uint uVar4;
  byte *pbVar8;
  
  uRam822e2b31db27df1a = (undefined1)in_EAX;
  if (unaff_ESI < 0 == unaff_ESI << 1 < 0) {
    uVar5 = in(param_2);
    *unaff_RDI = uVar5;
    bVar7 = (byte)param_1;
    pbVar8 = (byte *)CONCAT71((int7)(param_1 >> 8),bVar7 << (bVar7 & 0x1f));
    bVar6 = (param_1 & 0x1f) != 0;
    if (!bVar6 && unaff_ESI < 0 || bVar6 && (char)(bVar7 << (bVar7 & 0x1f) - 1) < '\0') {
      bVar7 = *pbVar8;
      *pbVar8 = *pbVar8 + in_R10B;
      puVar1 = (uint *)(pbVar8 + -0x623d7dab);
      uVar3 = *puVar1;
      uVar4 = *puVar1;
      *puVar1 = (uVar4 + 0xdc8896db) - (uint)CARRY1(bVar7,in_R10B);
      piVar2 = (int *)((ulonglong)(uint)(unaff_ESI << 1) - 0x2dd4d1d9);
      *piVar2 = (*piVar2 - in_EAX) -
                (uint)(uVar3 < 0x23776925 || uVar4 + 0xdc8896db < (uint)CARRY1(bVar7,in_R10B));
      return;
    }
    if ((int)unaff_RDI[-1] <= in_EAX) {
      in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c36d6 FUN_14d7c36d6 body=13 status=ok
// SIG undefined FUN_14d7c36d6(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c3675) */

void FUN_14d7c36d6(uint param_1,undefined2 param_2)

{
  int in_EAX;
  longlong unaff_RBX;
  int *unaff_RDI;
  
  if ((int)(param_1 | *(uint *)((longlong)unaff_RDI + unaff_RBX * 4 + -0x1e)) < 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*unaff_RDI <= in_EAX) {
    in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c36ea FUN_14d7c36ea body=4 status=ok
// SIG undefined FUN_14d7c36ea(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c36ea(longlong param_1)

{
  char in_AL;
  
  *(char *)(param_1 + 0x1d0831ee) = *(char *)(param_1 + 0x1d0831ee) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c36fb FUN_14d7c36fb body=15 status=ok
// SIG undefined FUN_14d7c36fb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c36fb(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  char in_SF;
  char in_OF;
  
  uVar2 = in(0xb1);
  cVar1 = (char)uVar2;
  if (in_OF != in_SF) {
    cVar1 = *(char *)(CONCAT71(unaff_00000019,unaff_BL) + ((ulonglong)uVar2 & 0xff));
  }
  *(char *)(param_2 + -0x78) = *(char *)(param_2 + -0x78) + cVar1;
  if (param_1 == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c371f FUN_14d7c371f body=3 status=ok
// SIG undefined FUN_14d7c371f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c371f(undefined8 param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  
  out(param_2,in_EAX);
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c372b thunk_EXT_FUN_3fd4c48c body=7 status=ok
// SIG undefined thunk_EXT_FUN_3fd4c48c(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_3fd4c48c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3733 FUN_14d7c3733 body=2 status=ok
// SIG undefined FUN_14d7c3733(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3733(undefined8 param_1)

{
  undefined4 in_EAX;
  undefined4 uVar1;
  undefined4 in_register_00000004;
  
  out((short)((int)in_EAX >> 0x1f),in_EAX);
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),uRam730da00bc0ef9d64);
  *(char *)CONCAT44(in_register_00000004,uVar1) =
       *(char *)CONCAT44(in_register_00000004,uVar1) + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c373b FUN_14d7c373b body=4 status=ok
// SIG undefined FUN_14d7c373b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c373b(void)

{
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3747 FUN_14d7c3747 body=21 status=ok
// SIG undefined FUN_14d7c3747(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3747(undefined8 param_1,undefined2 param_2,char *param_3)

{
  code *pcVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  char unaff_R13B;
  
  out(param_2,in_AL);
  in(0xbf);
  if ((int)&stack0x00000000 != 0 || *(int *)(CONCAT71(in_register_00000001,in_AL) + 0x7469730d) != 0
     ) {
    *param_3 = *param_3 + unaff_R13B;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7c3765 FUN_14d7c3765 body=7 status=ok
// SIG undefined FUN_14d7c3765(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3765(undefined8 param_1,undefined2 param_2)

{
  undefined1 in_AL;
  undefined4 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
  out(param_2,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3771 FUN_14d7c3771 body=4 status=ok
// SIG undefined FUN_14d7c3771(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3771(undefined8 param_1,undefined2 param_2)

{
  undefined1 in_AL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_EBP;
  
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,0x2a)) =
       *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,0x2a)) | unaff_EBP;
  out(param_2,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3779 FUN_14d7c3779 body=14 status=ok
// SIG undefined FUN_14d7c3779(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3779(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3789 FUN_14d7c3789 body=23 status=ok
// SIG undefined FUN_14d7c3789(void)

/* WARNING: Control flow encountered bad instruction data */

int FUN_14d7c3789(longlong param_1,undefined2 param_2)

{
  uint in_EAX;
  int iVar1;
  char *unaff_RBX;
  uint unaff_ESI;
  
  *unaff_RBX = *unaff_RBX + (char)((ulonglong)param_1 >> 8);
  if (param_1 == 1 || *unaff_RBX == '\0') {
    iVar1 = in(param_2);
    *(uint *)((ulonglong)in_EAX + 0xabd48e) = *(uint *)((ulonglong)in_EAX + 0xabd48e) & unaff_ESI;
    return iVar1 + 0x57c0edd8;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c37a2 FUN_14d7c37a2 body=1 status=ok
// SIG undefined FUN_14d7c37a2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c37a2(longlong param_1,undefined2 param_2)

{
  char *pcVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined3 uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  byte unaff_BH;
  char *unaff_RSI;
  undefined4 *unaff_RDI;
  undefined1 in_CF;
  
  uVar9 = in(param_2);
  bVar5 = *(byte *)((longlong)unaff_RDI + 0x21);
  *(byte *)((longlong)unaff_RDI + 0x21) = bVar5 << 3 | (byte)(CONCAT11(in_CF,bVar5) >> 6);
  *unaff_RDI = uVar9;
  cVar4 = *unaff_RSI;
  uVar8 = (undefined3)((uint)uVar9 >> 8);
  puVar2 = (uint *)(param_1 * 2 + 0x7a);
  uVar6 = (uint)CARRY1(unaff_BH,(byte)param_1);
  uVar3 = *puVar2;
  uVar7 = *puVar2 + (uint)param_1;
  *puVar2 = uVar7 + uVar6;
  out(param_2,CONCAT31(uVar8,cVar4));
  puVar10 = (undefined1 *)
            (ulonglong)
            CONCAT31(uVar8,cVar4 + 'c' + (CARRY4(uVar3,(uint)param_1) || CARRY4(uVar7,uVar6)));
  pcVar1 = puVar10 + 0x63fa4328;
  *pcVar1 = *pcVar1 + (char)param_2;
  LOCK();
  *puVar10 = (char)((ushort)param_2 >> 8);
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c37a6 FUN_14d7c37a6 body=2 status=ok
// SIG undefined FUN_14d7c37a6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c37a6(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c37af FUN_14d7c37af body=19 status=ok
// SIG undefined FUN_14d7c37af(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c37af(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  ulonglong unaff_R15;
  
  *(ulonglong *)(param_2 + -0x11) = *(ulonglong *)(param_2 + -0x11) | unaff_R15;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL + 'c') + 0x63fa4328);
  *pcVar1 = *pcVar1 + (char)param_2;
  LOCK();
  *(char *)CONCAT71(in_register_00000001,in_AL + 'c') = (char)((ulonglong)param_2 >> 8);
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c37c4 FUN_14d7c37c4 body=12 status=ok
// SIG undefined FUN_14d7c37c4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c37c4(byte *param_1,longlong param_2)

{
  int *piVar1;
  byte unaff_BL;
  longlong unaff_RBP;
  int unaff_ESI;
  
  piVar1 = (int *)(param_2 + -0x6593a1ff + unaff_RBP * 2);
  *piVar1 = *piVar1 + unaff_ESI + (uint)(*param_1 < unaff_BL);
  in((short)param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c37da FUN_14d7c37da body=23 status=ok
// SIG undefined FUN_14d7c37da(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c37da(longlong param_1,int param_2)

{
  byte *pbVar1;
  uint *puVar2;
  uint in_EAX;
  uint unaff_EBX;
  longlong unaff_RBP;
  
  pbVar1 = (byte *)(unaff_RBP + 0x30);
  *pbVar1 = *pbVar1 & (byte)param_1;
  if ((char)*pbVar1 < '\0') {
    puVar2 = (uint *)(unaff_RBP * 5 + 100);
    *puVar2 = *puVar2 ^ in_EAX & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(param_1 + 0x35) = *(int *)(param_1 + 0x35) - param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c37fa FUN_14d7c37fa body=2 status=ok
// SIG undefined FUN_14d7c37fa(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c37fa(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c37fe FUN_14d7c37fe body=1 status=ok
// SIG undefined FUN_14d7c37fe(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c37fe(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined1 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3803 FUN_14d7c3803 body=16 status=ok
// SIG undefined FUN_14d7c3803(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3803(uint param_1,uint param_2)

{
  undefined1 in_AL;
  undefined7 in_register_00000001;
  undefined4 *unaff_RSI;
  
  if ((param_1 ^ (uint)unaff_RSI) < 2) {
    out(*unaff_RSI,(short)param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)CONCAT71(in_register_00000001,in_AL) =
       *(uint *)CONCAT71(in_register_00000001,in_AL) ^ param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c381b FUN_14d7c381b body=18 status=ok
// SIG undefined FUN_14d7c381b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c381b(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  uint in_EAX;
  byte *pbVar3;
  byte bVar4;
  ulonglong unaff_RDI;
  
  bVar4 = (byte)((ulonglong)param_2 >> 8);
  pbVar3 = (byte *)(ulonglong)in_EAX;
  bVar2 = *pbVar3;
  *pbVar3 = *pbVar3 + bVar4;
  pcVar1 = (char *)((unaff_RDI & 0xffffffff) * 2 + -0x3a);
  *pcVar1 = *pcVar1 + (char)((unaff_RDI & 0xffffffff) >> 8) + CARRY1(bVar2,bVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3834 FUN_14d7c3834 body=36 status=ok
// SIG undefined FUN_14d7c3834(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c3841) overlaps instruction at (ram,0x00014d7c3840)
    */

void FUN_14d7c3834(longlong param_1,undefined2 param_2)

{
  char *pcVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_EBP;
  undefined4 *unaff_RSI;
  uint *unaff_RDI;
  bool bVar4;
  bool in_ZF;
  float10 in_ST0;
  
  lVar2 = (longlong)*(int *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x7aba226c) *
          0xac2de51;
  bVar4 = (int)lVar2 != lVar2;
  if (bVar4 || in_ZF) {
    *unaff_RDI = *unaff_RDI ^ unaff_EBP;
    *(int *)(param_1 + 0x2e) = *(int *)(param_1 + 0x2e) << 0x1b;
    pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x49d9a131);
    *pcVar1 = *pcVar1 << 1;
    out(0,(char)unaff_RDI);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*unaff_RSI,param_2);
  if (bVar4 || in_ZF) {
    uVar3 = *unaff_RDI;
    *(float *)((longlong)unaff_RSI + 5) = (float)in_ST0;
    if ((byte)uVar3 <= *(byte *)(unaff_RSI + 1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3858 FUN_14d7c3858 body=8 status=ok
// SIG undefined FUN_14d7c3858(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3858(int param_1,code *param_2)

{
  undefined1 uVar1;
  longlong unaff_RBX;
  undefined1 *unaff_RDI;
  byte in_CF;
  
  uVar1 = (*param_2)((param_1 - *(int *)(unaff_RBX + 0x37)) - (uint)in_CF);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3860 FUN_14d7c3860 body=2 status=ok
// SIG undefined FUN_14d7c3860(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3860(void)

{
  undefined1 in_AL;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3864 FUN_14d7c3864 body=1 status=ok
// SIG undefined FUN_14d7c3864(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3864(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3868 FUN_14d7c3868 body=8 status=ok
// SIG undefined FUN_14d7c3868(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3868(void)

{
  bool in_CF;
  bool in_ZF;
  
  if (!in_CF && !in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3878 FUN_14d7c3878 body=16 status=ok
// SIG undefined FUN_14d7c3878(void)

undefined1 FUN_14d7c3878(void)

{
  return DAT_639ca825805323;
}



// FUNCTION 14d7c3891 FUN_14d7c3891 body=25 status=ok
// SIG undefined FUN_14d7c3891(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3891(longlong param_1)

{
  char *pcVar1;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 unaff_DIL;
  
  *(int *)(param_1 + 0x2e) = *(int *)(param_1 + 0x2e) << 0x1b;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x49d9a131);
  *pcVar1 = *pcVar1 << 1;
  out(0,unaff_DIL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c38ae FUN_14d7c38ae body=13 status=ok
// SIG undefined FUN_14d7c38ae(void)

undefined8 FUN_14d7c38ae(void)

{
  undefined1 auStackX_8 [32];
  
  return CONCAT71((int7)(((ulonglong)auStackX_8 & 0xffffffff) >> 8),
                  (char)((ulonglong)auStackX_8 & 0xffffffff) + '-');
}



// FUNCTION 14d7c38c7 FUN_14d7c38c7 body=19 status=ok
// SIG undefined FUN_14d7c38c7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c38c7(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  longlong in_RAX;
  ulonglong uVar2;
  longlong unaff_RSI;
  char cVar3;
  
  uVar2 = (longlong)*(int *)(in_RAX + unaff_RSI * 4) * -0x2e & 0xffffffff;
  bVar1 = (byte)in_RAX ^ *(byte *)(uVar2 + 0x4e + (ulonglong)(uint)(int)(short)in_RAX * 2);
  cVar3 = bVar1 == 0;
  if ((POPCOUNT(bVar1) & 1U) != 0) {
    *(char *)(uVar2 - 0x100ecabd) = *(char *)(uVar2 - 0x100ecabd) + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00010a7c7775();
  if (uVar2 == 1 || cVar3 != '\0') {
    return;
  }
  return;
}



// FUNCTION 14d7c38d8 FUN_14d7c38d8 body=3 status=ok
// SIG undefined FUN_14d7c38d8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c38d8(longlong param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined1 in_AL;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  undefined4 *unaff_RDI;
  char in_ZF;
  bool in_SF;
  
  if (in_SF) {
    pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x49d9a131);
    *pcVar1 = *pcVar1 << 1;
    out(0,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = in(param_2);
  *unaff_RDI = uVar2;
  func_0x00010a7c7775();
  if (param_1 == 1 || in_ZF != '\0') {
    return;
  }
  return;
}



// FUNCTION 14d7c38dc FUN_14d7c38dc body=1 status=ok
// SIG undefined FUN_14d7c38dc(void)

void FUN_14d7c38dc(longlong param_1)

{
  char in_ZF;
  
  func_0x00010a7c7775();
  if (param_1 == 1 || in_ZF != '\0') {
    return;
  }
  return;
}



// FUNCTION 14d7c38e1 FUN_14d7c38e1 body=31 status=ok
// SIG undefined FUN_14d7c38e1(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c38e1(undefined8 param_1,int *param_2)

{
  _DAT_30cb1020 = _DAT_30cb1020 + 0x60d1c2a1;
  *param_2 = *param_2 + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c390b FUN_14d7c390b body=19 status=ok
// SIG undefined FUN_14d7c390b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c390b(undefined8 param_1,longlong param_2)

{
  int unaff_EBX;
  longlong unaff_RBP;
  char in_CF;
  
  *(char *)(unaff_RBP + -0x6009776b) =
       *(char *)(unaff_RBP + -0x6009776b) + (char)((ulonglong)param_1 >> 8) + in_CF;
  *(int *)(param_2 + 0x46f4d972) = *(int *)(param_2 + 0x46f4d972) - unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c391f FUN_14d7c391f body=5 status=ok
// SIG undefined FUN_14d7c391f(void)

uint FUN_14d7c391f(undefined8 param_1)

{
  uint in_EAX;
  longlong unaff_RBX;
  
  *(byte *)(unaff_RBX + -0x78fbff32) =
       *(byte *)(unaff_RBX + -0x78fbff32) ^ (byte)((ulonglong)param_1 >> 8);
  return (in_EAX ^ 0x1fb96a19) & 0xffffff84;
}



// FUNCTION 14d7c3928 FUN_14d7c3928 body=2 status=ok
// SIG undefined FUN_14d7c3928(void)

byte FUN_14d7c3928(void)

{
  char in_AL;
  
  return in_AL + 0x87U & 0x84;
}



// FUNCTION 14d7c392c FUN_14d7c392c body=4 status=ok
// SIG undefined FUN_14d7c392c(void)

void FUN_14d7c392c(void)

{
  return;
}



// FUNCTION 14d7c393c FUN_14d7c393c body=3 status=ok
// SIG undefined FUN_14d7c393c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c393c(void)

{
  char in_SF;
  char in_OF;
  
  if (in_OF == in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3956 FUN_14d7c3956 body=7 status=ok
// SIG undefined FUN_14d7c3956(void)

void FUN_14d7c3956(void)

{
  char in_AL;
  longlong unaff_RBP;
  longlong in_R9;
  
  *(undefined1 *)(unaff_RBP + -0x2dbfed24) = 0;
  *(char *)(in_R9 + -0x7cdd7863) = *(char *)(in_R9 + -0x7cdd7863) + in_AL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7c3981 FUN_14d7c3981 body=2 status=ok
// SIG undefined FUN_14d7c3981(void)

void FUN_14d7c3981(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7c3985 FUN_14d7c3985 body=3 status=ok
// SIG undefined FUN_14d7c3985(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3985(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3989 FUN_14d7c3989 body=6 status=ok
// SIG undefined FUN_14d7c3989(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3989(void)

{
  char cVar1;
  undefined4 *in_RAX;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  undefined8 uStack_10;
  
  puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x02';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  *in_RAX = (int)&stack0xfffffffffffffff8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3991 FUN_14d7c3991 body=30 status=ok
// SIG undefined FUN_14d7c3991(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3991(longlong param_1)

{
  uint *puVar1;
  char *pcVar2;
  undefined1 *puVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  undefined2 uVar7;
  ulonglong uVar8;
  undefined1 uVar9;
  uint uVar10;
  ulonglong in_RAX;
  uint uVar12;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined1 *unaff_RSI;
  uint *unaff_RDI;
  char in_CF;
  bool bVar16;
  bool in_PF;
  float10 fVar17;
  byte *pbVar11;
  ulonglong uVar13;
  
  bVar16 = in_CF == '\0';
  uVar15 = 0x17eead50;
  puVar14 = &DAT_4771b74a;
  if (!in_PF) {
    uVar6 = in((short)(in_RAX >> 0x10) >> 0xf);
    *unaff_RDI = uVar6;
    pcVar2 = (char *)((ulonglong)(uint)((int)in_RAX >> 0x1f) + (longlong)unaff_RSI * 4);
    *pcVar2 = *pcVar2 + ((char)(in_RAX >> 0x18) >> 7);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while( true ) {
    if (bVar16) {
      return;
    }
    uVar7 = (undefined2)in_RAX;
    uVar10 = in(0x30);
    uVar12 = (uint)CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(0x36,(char)param_1));
    uVar13 = (ulonglong)(uVar12 + 0x70ddd262);
    puVar1 = (uint *)(uVar13 - 0x3dc2f671);
    uVar6 = *puVar1;
    *puVar1 = uVar6 << 6 | (uint)(CONCAT14(0x8f222d9d < uVar12,uVar6) >> 0x1b);
    out(*unaff_RSI,uVar7);
    fVar17 = (float10)from_bcd(*(unkbyte10 *)((ulonglong)uVar10 - 0x6fc1665f));
    uVar9 = in(uVar7);
    pbVar11 = (byte *)CONCAT71((int7)((ulonglong)uVar15 >> 8),uVar9);
    uVar8 = (ulonglong)unaff_RDI >> 8;
    unaff_RDI = (uint *)(pbVar11 + 1);
    puVar3 = unaff_RSI + 2;
    bVar5 = *pbVar11;
    bVar4 = unaff_RSI[1];
    uVar15 = 0xdb009009;
    in(uVar7);
    uVar6 = *(uint *)(unaff_RSI + -0x34215d32);
    *(uint *)(unaff_RSI + -0x34215d32) =
         (uint)(CONCAT14(bVar4 < bVar5,uVar6) >> 0x16) | uVar6 << 0xb;
    param_1 = uVar13 - 1;
    if (param_1 != 0 && bVar4 != bVar5) break;
    *(undefined1 **)(puVar14 + -8) = puVar14;
    if ((char)bVar5 < (char)bVar4) {
      *unaff_RDI = *unaff_RDI | (uint)in_RAX;
      halt_baddata();
    }
    *(int *)(longlong)((int)puVar3 + -0x7288c056) = (int)ROUND(fVar17);
    bVar16 = (uRam00000000f34d81bb & 1) != 0;
    uRam00000000f34d81bb = uRam00000000f34d81bb >> 1 | (uint)bVar16 << 0x1f;
    unaff_RSI = unaff_RSI + 3;
    in_RAX = CONCAT71((int7)uVar8,*puVar3) & 0xffffffff;
    puVar14 = puVar14 + -8;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c39a5 FUN_14d7c39a5 body=16 status=ok
// SIG undefined FUN_14d7c39a5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c39a5(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
  
  uVar2 = in((short)param_2);
  *unaff_RDI = uVar2;
  pcVar1 = (char *)(param_2 + unaff_RSI * 4);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c39b6 FUN_14d7c39b6 body=2 status=ok
// SIG undefined FUN_14d7c39b6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c39b6(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c39c2 FUN_14d7c39c2 body=5 status=ok
// SIG undefined FUN_14d7c39c2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c39c2(void)

{
  bool in_OF;
  
  if (!in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c39ce FUN_14d7c39ce body=30 status=ok
// SIG undefined FUN_14d7c39ce(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c39ce(ulonglong param_1,ulonglong param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined8 in_RAX;
  uint uVar7;
  longlong lVar8;
  ulonglong unaff_RBP;
  byte *unaff_RSI;
  uint *unaff_RDI;
  byte *pbVar9;
  bool bVar10;
  float10 fVar11;
  
  while( true ) {
    fVar11 = (float10)from_bcd(*(unkbyte10 *)(unaff_RBP - 0x6fc1665f));
    uVar5 = in((short)param_2);
    uVar4 = (ulonglong)unaff_RDI >> 8;
    pbVar9 = (byte *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar5) & 0xffffffff);
    unaff_RDI = (uint *)(pbVar9 + 1);
    bVar2 = *pbVar9;
    bVar1 = *unaff_RSI;
    in((short)param_2);
    uVar3 = *(uint *)(unaff_RSI + -0x34215d33);
    *(uint *)(unaff_RSI + -0x34215d33) =
         (uint)(CONCAT14(bVar1 < bVar2,uVar3) >> 0x16) | uVar3 << 0xb;
    lVar8 = param_1 - 1;
    if (lVar8 != 0 && bVar1 != bVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
    if ((char)bVar2 < (char)bVar1) break;
    *(int *)(longlong)((int)(unaff_RSI + 1) + -0x7288c056) = (int)ROUND(fVar11);
    bVar10 = (uRam00000000f34d81bb & 1) != 0;
    uRam00000000f34d81bb = uRam00000000f34d81bb >> 1 | (uint)bVar10 << 0x1f;
    pbVar9 = unaff_RSI + 2;
    param_2 = CONCAT71((int7)uVar4,unaff_RSI[1]) & 0xffffffff;
    if (bVar10) {
      return;
    }
    uVar6 = in(0x30);
    uVar7 = (uint)CONCAT62((int6)((ulonglong)lVar8 >> 0x10),CONCAT11(0x36,(char)lVar8));
    param_1 = (ulonglong)(uVar7 + 0x70ddd262);
    uVar3 = *(uint *)(param_1 - 0x3dc2f671);
    *(uint *)(param_1 - 0x3dc2f671) =
         uVar3 << 6 | (uint)(CONCAT14(0x8f222d9d < uVar7,uVar3) >> 0x1b);
    in_RAX = 0xdb009009;
    unaff_RBP = (ulonglong)uVar6;
    unaff_RSI = unaff_RSI + 3;
    out(*pbVar9,(short)param_2);
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
  }
  *unaff_RDI = *unaff_RDI | (uint)param_2;
  halt_baddata();
}



// FUNCTION 14d7c39f3 FUN_14d7c39f3 body=15 status=ok
// SIG undefined FUN_14d7c39f3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c39f3(longlong param_1)

{
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  if (param_1 != 0) {
    *(uint *)(unaff_RSI + 0x51) = *(uint *)(unaff_RSI + 0x51) | (uint)param_1;
    *(char *)(unaff_RDI + 4) = (char)unaff_RSI + '\x04';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3a20 FUN_14d7c3a20 body=2 status=ok
// SIG undefined FUN_14d7c3a20(void)

void FUN_14d7c3a20(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7c3a2c FUN_14d7c3a2c body=10 status=ok
// SIG undefined FUN_14d7c3a2c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3a2c(char param_1,char *param_2)

{
  longlong unaff_RBX;
  undefined2 in_DS;
  undefined2 auStack_55 [42];
  
  *param_2 = *param_2 - param_1;
  auStack_55[unaff_RBX * 4] = in_DS;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3a38 FUN_14d7c3a38 body=10 status=ok
// SIG undefined FUN_14d7c3a38(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3a38(void)

{
  int in_EAX;
  int *unaff_RDI;
  
  *unaff_RDI = in_EAX + 0x6f59c77e;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3a48 FUN_14d7c3a48 body=2 status=ok
// SIG undefined FUN_14d7c3a48(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3a48(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3a4c FUN_14d7c3a4c body=3 status=ok
// SIG undefined FUN_14d7c3a4c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3a4c(void)

{
  char *pcVar1;
  code *pcVar2;
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_BL;
  undefined7 unaff_00000019;
  
  if (unaff_BL != *(char *)(CONCAT71(unaff_00000019,unaff_BL) + -0x1d)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x50);
  *pcVar1 = *pcVar1 + in_AH;
  pcVar2 = (code *)swi(1);
  (*pcVar2)(0xd9127915);
  return;
}



// FUNCTION 14d7c3a55 FUN_14d7c3a55 body=6 status=ok
// SIG undefined FUN_14d7c3a55(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3a55(void)

{
  longlong in_RAX;
  byte unaff_BL;
  
  *(byte *)(in_RAX + 0x7db3c6a2) = *(byte *)(in_RAX + 0x7db3c6a2) | unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3a5d FUN_14d7c3a5d body=3 status=ok
// SIG undefined FUN_14d7c3a5d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3a5d(byte param_1)

{
  char *in_RAX;
  
  *in_RAX = *in_RAX << (param_1 & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3a61 FUN_14d7c3a61 body=10 status=ok
// SIG undefined FUN_14d7c3a61(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3a61(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  char cVar2;
  
  cVar2 = DAT_ecc75eb8;
  DAT_ecc75eb8 = DAT_ecc75eb8 + -0x12;
  if ('\x11' < cVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)(param_2 + -0x1c) = *(uint *)(param_2 + -0x1c) & 0xecc75eb8;
  pcVar1 = (code *)swi(0xe2);
  (*pcVar1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3a6d FUN_14d7c3a6d body=2 status=ok
// SIG undefined FUN_14d7c3a6d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3a6d(longlong param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3a71 FUN_14d7c3a71 body=3 status=ok
// SIG undefined FUN_14d7c3a71(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3a71(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3a7e FUN_14d7c3a7e body=10 status=ok
// SIG undefined FUN_14d7c3a7e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3a7e(void)

{
  code *pcVar1;
  char unaff_BH;
  longlong unaff_RDI;
  bool in_OF;
  
  if (in_OF) {
    *(char *)(unaff_RDI + 0x1ec8852b) = *(char *)(unaff_RDI + 0x1ec8852b) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7c3a8f FUN_14d7c3a8f body=25 status=ok
// SIG undefined FUN_14d7c3a8f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3a8f(longlong param_1)

{
  code *pcVar1;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  
  if (param_1 == 1) {
    pcVar1 = (code *)swi(0xe2);
    (*pcVar1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) | 0xf0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3aa3 FUN_14d7c3aa3 body=4 status=ok
// SIG undefined FUN_14d7c3aa3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3aa3(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3aab FUN_14d7c3aab body=3 status=ok
// SIG undefined FUN_14d7c3aab(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3aab(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3add FUN_14d7c3add body=41 status=ok
// SIG undefined FUN_14d7c3add(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c3af8) */
/* WARNING: Removing unreachable block (ram,0x00014d7c3afa) */
/* WARNING: Removing unreachable block (ram,0x00014d7c3acd) */

undefined8 FUN_14d7c3add(void)

{
  undefined4 *in_RAX;
  ulonglong unaff_RBP;
  undefined4 unaff_EDI;
  
  *in_RAX = unaff_EDI;
  return CONCAT71((int7)((unaff_RBP & 0xffffffff) >> 8),(char)(unaff_RBP & 0xffffffff) + '\x06');
}



// FUNCTION 14d7c3b01 FUN_14d7c3b01 body=15 status=ok
// SIG undefined FUN_14d7c3b01(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c3af8) */
/* WARNING: Removing unreachable block (ram,0x00014d7c3afa) */
/* WARNING: Removing unreachable block (ram,0x00014d7c3acd) */

undefined8 FUN_14d7c3b01(longlong param_1)

{
  undefined1 uVar1;
  ulonglong unaff_RBP;
  undefined4 unaff_EDI;
  bool in_PF;
  bool in_ZF;
  
  if (in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_PF) {
    uVar1 = in(0xcd);
    if (param_1 != 1) {
      *(undefined4 *)CONCAT71(0x93243a,uVar1) = unaff_EDI;
      return CONCAT71((int7)((unaff_RBP & 0xffffffff) >> 8),(char)(unaff_RBP & 0xffffffff) + '\x06')
      ;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3b11 FUN_14d7c3b11 body=6 status=ok
// SIG undefined FUN_14d7c3b11(void)

void FUN_14d7c3b11(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  longlong unaff_RDI;
  undefined2 in_CS;
  
  *(undefined2 *)(unaff_RDI + -0x6fbc5fb0) = in_CS;
  pcVar1 = (char *)(param_2 + unaff_RDI * 8);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  return;
}



// FUNCTION 14d7c3b29 FUN_14d7c3b29 body=6 status=ok
// SIG undefined FUN_14d7c3b29(void)

/* WARNING: Control flow encountered bad instruction data */

ulonglong FUN_14d7c3b29(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int in_EAX;
  ulonglong uVar4;
  byte *unaff_RBX;
  undefined8 *puVar5;
  undefined8 *unaff_RBP;
  int *unaff_RSI;
  undefined4 unaff_EDI;
  byte in_CF;
  bool bVar6;
  char cVar7;
  char cVar8;
  undefined8 uStack_10;
  
  uVar2 = (uint)in_CF;
  uVar3 = in_EAX + 0x6767f58c;
  cVar8 = SBORROW4(in_EAX,-0x6767f58c) != SBORROW4(uVar3,uVar2);
  cVar7 = (int)(uVar3 - uVar2) < 0;
  bVar6 = uVar3 == uVar2;
  uVar4 = func_0x0001cd034f0a();
  if (!bVar6 && cVar8 == cVar7) {
    return uVar4;
  }
  if (!bVar6 && cVar8 == cVar7) {
    *unaff_RBX = *unaff_RBX | (byte)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar5 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar7 = '\x1a';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar5 = puVar5 + -1;
    *puVar5 = *unaff_RBP;
    cVar7 = cVar7 + -1;
  } while ('\0' < cVar7);
  iVar1 = *(int *)(uVar4 & 0xffffffff);
  if (-1 < (int)unaff_RSI - iVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!SBORROW4((int)unaff_RSI,iVar1)) {
    return (ulonglong)CONCAT31((int3)((uint)unaff_EDI >> 8),(char)unaff_EDI + '\x06');
  }
  if ((int)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),0x3e) >> 0x12 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(uVar4 & 0xffffffff) = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3b31 FUN_14d7c3b31 body=19 status=ok
// SIG undefined FUN_14d7c3b31(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3b31(undefined8 param_1,undefined4 param_2)

{
  longlong unaff_RBX;
  
  LOCK();
  *(char *)(unaff_RBX + -0x12ab37c2) = (char)((uint)param_2 >> 8);
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3b4a FUN_14d7c3b4a body=9 status=ok
// SIG undefined FUN_14d7c3b4a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3b4a(void)

{
  longlong in_RAX;
  
  *(char *)(in_RAX + -0xd) = *(char *)(in_RAX + -0xd) << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3b56 FUN_14d7c3b56 body=4 status=ok
// SIG undefined FUN_14d7c3b56(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3b56(void)

{
  uint in_EAX;
  undefined8 unaff_RDI;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (in_ZF || in_OF != in_SF) {
    *(undefined8 *)((ulonglong)in_EAX - 8) = unaff_RDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3b63 FUN_14d7c3b63 body=4 status=ok
// SIG undefined FUN_14d7c3b63(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3b63(undefined8 param_1,char param_2)

{
  char *unaff_RDI;
  char in_CF;
  
  *unaff_RDI = *unaff_RDI + param_2 + in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3b6f FUN_14d7c3b6f body=8 status=ok
// SIG undefined FUN_14d7c3b6f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3b6f(undefined8 param_1,undefined2 param_2)

{
  in(CONCAT11((char)((ushort)param_2 >> 8),0x88));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3b7b FUN_14d7c3b7b body=9 status=ok
// SIG undefined FUN_14d7c3b7b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3b7b(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3b93 FUN_14d7c3b93 body=6 status=ok
// SIG undefined FUN_14d7c3b93(void)

undefined1 FUN_14d7c3b93(byte param_1)

{
  undefined1 uVar1;
  longlong unaff_RBP;
  
  uVar1 = in(0xce);
  *(char *)(unaff_RBP + -0x14) = *(char *)(unaff_RBP + -0x14) >> (param_1 & 0x1f);
  return uVar1;
}



// FUNCTION 14d7c3ba4 FUN_14d7c3ba4 body=27 status=ok
// SIG undefined FUN_14d7c3ba4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3ba4(longlong param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RBP;
  undefined4 *unaff_RDI;
  int unaff_R13D;
  undefined2 in_GS;
  undefined8 uStack_10;
  
  puVar4 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar2 = '\x11';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar4 = puVar4 + -1;
    *puVar4 = *unaff_RBP;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
  uVar3 = in((short)param_2);
  *(undefined2 *)
   ((CONCAT71((int7)((ulonglong)&stack0xfffffffffffffff8 >> 8),uVar3) & 0xffffffff) - 0x7c18d203) =
       in_GS;
  uVar1 = in((short)param_2);
  *unaff_RDI = uVar1;
  if (param_1 != 1 && param_2 == unaff_R13D) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7c3bc0 FUN_14d7c3bc0 body=4 status=ok
// SIG undefined FUN_14d7c3bc0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3bc0(byte param_1)

{
  uint *puVar1;
  char *pcVar2;
  undefined7 unaff_00000019;
  longlong unaff_RDI;
  
  puVar1 = (uint *)(unaff_RDI + 0x7f);
  *puVar1 = *puVar1 << (param_1 & 0x1f) | *puVar1 >> 0x20 - (param_1 & 0x1f);
  pcVar2 = (char *)(CONCAT71(unaff_00000019,0x8c) + -0x27);
  *pcVar2 = *pcVar2 + -8;
  LOCK();
  DAT_157b16469 = 0xf8;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3bcd FUN_14d7c3bcd body=6 status=ok
// SIG undefined FUN_14d7c3bcd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3bcd(void)

{
  undefined1 in_AL;
  
  LOCK();
  DAT_157b16469 = in_AL;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3bf6 FUN_14d7c3bf6 body=7 status=ok
// SIG undefined FUN_14d7c3bf6(void)

void FUN_14d7c3bf6(void)

{
  return;
}



// FUNCTION 14d7c3bff FUN_14d7c3bff body=1 status=ok
// SIG undefined FUN_14d7c3bff(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3bff(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3c14 FUN_14d7c3c14 body=7 status=ok
// SIG undefined FUN_14d7c3c14(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c3c6e) */
/* WARNING: Removing unreachable block (ram,0x00014d7c3ca1) */
/* WARNING: Removing unreachable block (ram,0x00014d7c3c76) */
/* WARNING: Removing unreachable block (ram,0x00014d7c3b44) */

void FUN_14d7c3c14(void)

{
  byte in_AL;
  
  if ((in_AL | 0xd8) != 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3c29 FUN_14d7c3c29 body=11 status=ok
// SIG undefined FUN_14d7c3c29(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3c29(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong in_RAX;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  undefined8 uStack_10;
  
  puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x1e';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  *(char *)(in_RAX + 0x7523a092) = *(char *)(in_RAX + 0x7523a092) + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3c3f FUN_14d7c3c3f body=7 status=ok
// SIG undefined FUN_14d7c3c3f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3c3f(void)

{
  uint unaff_ESP;
  uint *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI ^ unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3c47 FUN_14d7c3c47 body=3 status=ok
// SIG undefined FUN_14d7c3c47(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3c47(longlong param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined8 in_RAX;
  undefined1 *unaff_RBX;
  byte *unaff_RSI;
  bool in_OF;
  byte *pbStackX_8;
  
  if (in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                             CONCAT11((byte)((ulonglong)in_RAX >> 8) & unaff_RBX[0x77],(char)in_RAX)
                            ) + 0x3777bd4f);
  *pcVar1 = *pcVar1 + (char)unaff_RBX;
  FUN_15851a063(param_1,(ulonglong)unaff_RBX & 0xffffffff);
  uVar2 = in(0x3c);
  *unaff_RBX = (char)((uint)uVar2 >> 8);
  if (*pbStackX_8 <= *unaff_RSI) {
    *(int *)(param_1 + 0x4a80671) = *(int *)(param_1 + 0x4a80671) + (int)unaff_RBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3c4b FUN_14d7c3c4b body=8 status=ok
// SIG undefined FUN_14d7c3c4b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c3c77) overlaps instruction at (ram,0x00014d7c3c76)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7c3c80) */
/* WARNING: Removing unreachable block (ram,0x00014d7c3c87) */
/* WARNING: Removing unreachable block (ram,0x00014d7c3c89) */
/* WARNING: Removing unreachable block (ram,0x00014d7c3c86) */

void FUN_14d7c3c4b(longlong param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 in_RAX;
  undefined1 *unaff_RBX;
  uint *unaff_RDI;
  char in_CF;
  undefined1 *unaff_retaddr;
  byte *pbStackX_10;
  
  cVar2 = (char)in_RAX + 'n';
  if (SBORROW1((char)in_RAX,-0x6e) == SBORROW1(cVar2,in_CF)) {
    uVar1 = *unaff_RDI;
    FUN_15851a063(param_1,CONCAT31((int3)(char)((ulonglong)in_RAX >> 8),cVar2 - in_CF) & 0xfffffff1)
    ;
    uVar3 = in(0x3c);
    *unaff_retaddr = (char)((uint)uVar3 >> 8);
    unaff_RBX = unaff_retaddr;
    if (*(byte *)(ulonglong)uVar1 < *pbStackX_10) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(int *)(param_1 + 0x4a80671) = *(int *)(param_1 + 0x4a80671) + (int)unaff_RBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3c53 FUN_14d7c3c53 body=28 status=ok
// SIG undefined FUN_14d7c3c53(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c3c77) overlaps instruction at (ram,0x00014d7c3c76)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7c3c80) */
/* WARNING: Removing unreachable block (ram,0x00014d7c3c87) */
/* WARNING: Removing unreachable block (ram,0x00014d7c3c89) */
/* WARNING: Removing unreachable block (ram,0x00014d7c3c86) */

void FUN_14d7c3c53(longlong param_1)

{
  uint uVar1;
  undefined4 in_EAX;
  undefined4 uVar2;
  undefined1 *unaff_RBX;
  uint *unaff_RDI;
  bool in_OF;
  undefined1 *unaff_retaddr;
  byte *pbStackX_10;
  
  if (!in_OF) {
    uVar1 = *unaff_RDI;
    FUN_15851a063(param_1,CONCAT31((int3)(char)((uint)in_EAX >> 8),(char)in_EAX) & 0xfffffff1);
    uVar2 = in(0x3c);
    *unaff_retaddr = (char)((uint)uVar2 >> 8);
    unaff_RBX = unaff_retaddr;
    if (*(byte *)(ulonglong)uVar1 < *pbStackX_10) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(int *)(param_1 + 0x4a80671) = *(int *)(param_1 + 0x4a80671) + (int)unaff_RBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3c70 FUN_14d7c3c70 body=12 status=ok
// SIG undefined FUN_14d7c3c70(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c3c86) overlaps instruction at (ram,0x00014d7c3c85)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7c3c87) */
/* WARNING: Removing unreachable block (ram,0x00014d7c3c89) */
/* WARNING: Removing unreachable block (ram,0x00014d7c3c7a) */

void FUN_14d7c3c70(void)

{
  longlong unaff_RSI;
  
                    /* WARNING: Could not recover jumptable at 0x00014d7c3c86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulonglong)((uint)&stack0x00000000 & *(uint *)(unaff_RSI + -0x66eed48e)))(0x7d8f3b7d);
  return;
}



// FUNCTION 14d7c3c80 FUN_14d7c3c80 body=14 status=ok
// SIG undefined FUN_14d7c3c80(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c3c86) overlaps instruction at (ram,0x00014d7c3c85)
    */

void FUN_14d7c3c80(void)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  bool in_OF;
  undefined8 uStack_10;
  
  if (in_OF) {
    in(0x89);
    puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
    cVar1 = '\x11';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar2 = puVar2 + -1;
      *puVar2 = *unaff_RBP;
      cVar1 = cVar1 + -1;
    } while ('\0' < cVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Could not recover jumptable at 0x00014d7c3c86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&stack0x00000000)(0x7d8f3b7d);
  return;
}



// FUNCTION 14d7c3c90 FUN_14d7c3c90 body=5 status=ok
// SIG undefined FUN_14d7c3c90(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3c90(undefined8 param_1,int *param_2)

{
  *param_2 = *param_2 << 9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3cad FUN_14d7c3cad body=3 status=ok
// SIG undefined FUN_14d7c3cad(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3cad(void)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3cb9 FUN_14d7c3cb9 body=9 status=ok
// SIG undefined FUN_14d7c3cb9(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c3cb9(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3ccd FUN_14d7c3ccd body=8 status=ok
// SIG undefined FUN_14d7c3ccd(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c3c86) overlaps instruction at (ram,0x00014d7c3c85)
    */

void FUN_14d7c3ccd(void)

{
  char cVar1;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  bool in_CF;
  bool in_ZF;
  char in_SF;
  bool in_OF;
  undefined8 uStack_10;
  
  if (!in_ZF && in_OF == (bool)in_SF) {
    if (in_OF) {
      in(0x89);
      puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
      cVar1 = '\x11';
      do {
        unaff_RBP = unaff_RBP + -1;
        puVar2 = puVar2 + -1;
        *puVar2 = *unaff_RBP;
        cVar1 = cVar1 + -1;
      } while ('\0' < cVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Could not recover jumptable at 0x00014d7c3c86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)&stack0x00000000)(0x7d8f3b7d);
    return;
  }
  if (in_CF) {
    cVar1 = in(0x3c);
    *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar1)) =
         *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar1)) + cVar1;
    out(0x69,cVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3cdf FUN_14d7c3cdf body=23 status=ok
// SIG undefined FUN_14d7c3cdf(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c3cc3) */

void FUN_14d7c3cdf(void)

{
  undefined1 in_AL;
  undefined8 *unaff_RBP;
  
                    /* WARNING: Read-only address (ram,0x0001566d9fce) is written */
  LOCK();
  UNLOCK();
  uRam00000001566d9fce = in_AL;
  *unaff_RBP = 0xffffffffd201e6c5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3cfb FUN_14d7c3cfb body=5 status=ok
// SIG undefined FUN_14d7c3cfb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3cfb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3d0b FUN_14d7c3d0b body=1 status=ok
// SIG undefined FUN_14d7c3d0b(void)

void FUN_14d7c3d0b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7c3d18 FUN_14d7c3d18 body=1 status=ok
// SIG undefined FUN_14d7c3d18(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3d18(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3d34 FUN_14d7c3d34 body=14 status=ok
// SIG undefined FUN_14d7c3d34(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3d34(undefined4 *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  char cVar3;
  undefined8 in_RAX;
  char unaff_BH;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined1 in_CF;
  bool in_PF;
  bool in_OF;
  
  cVar3 = (char)((ulonglong)in_RAX >> 8);
  if (!in_PF) {
    while( true ) {
      bVar1 = (byte)param_1 & 0x1f;
      uVar2 = (ulonglong)(CONCAT14(in_CF,*param_1) >> bVar1) |
              (ulonglong)CONCAT14(in_CF,*param_1) << 0x21 - bVar1;
      *param_1 = (int)uVar2;
      in_CF = (uVar2 & 0x100000000) != 0;
      if (unaff_BH != '\x01') break;
      *(char *)(unaff_RSI + -0x31 + unaff_RDI * 8) = cVar3;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_OF) {
    uRam000000015ff17f8d = *(undefined1 *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),0x8b) + -0x32);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)((longlong)param_1 + -0x42) = *(char *)((longlong)param_1 + -0x42) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3d6c FUN_14d7c3d6c body=8 status=ok
// SIG undefined FUN_14d7c3d6c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3d6c(longlong param_1)

{
  undefined8 in_MM0;
  
  pshufw(in_MM0,*(undefined8 *)(param_1 + 0x5b7fb533),0x61);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3d78 FUN_14d7c3d78 body=12 status=ok
// SIG undefined FUN_14d7c3d78(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3d78(longlong param_1,undefined2 param_2)

{
  int *piVar1;
  uint in_EAX;
  undefined4 unaff_EBP;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  
  *(byte *)(unaff_RDI + -0x2635460d) =
       *(byte *)(unaff_RDI + -0x2635460d) ^ (byte)((ushort)param_2 >> 8);
  out(*unaff_RSI,param_2);
  LOCK();
  *(undefined4 *)(((ulonglong)(in_EAX & 0x619104) - 0x2c30019c) + param_1 * 4) = unaff_EBP;
  UNLOCK();
  piVar1 = (int *)(((ulonglong)(in_EAX & 0x619104) - 0x69) + unaff_RDI * 8);
  *piVar1 = *piVar1 - ((int)unaff_RSI + 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3d9a FUN_14d7c3d9a body=3 status=ok
// SIG undefined FUN_14d7c3d9a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3d9a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3da7 FUN_14d7c3da7 body=14 status=ok
// SIG undefined FUN_14d7c3da7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3da7(longlong param_1)

{
  ulonglong in_RAX;
  longlong unaff_RBX;
  undefined4 *unaff_RDI;
  float10 in_ST0;
  float *unaff_retaddr;
  
  if (param_1 != 0) {
    *unaff_RDI = (int)CONCAT71((int7)(in_RAX >> 8),*(undefined1 *)(unaff_RBX + (in_RAX & 0xff)));
    *unaff_retaddr = (float)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3dbb FUN_14d7c3dbb body=2 status=ok
// SIG undefined FUN_14d7c3dbb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3dbb(void)

{
  undefined4 in_EAX;
  
  out(0xd9,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3dc3 FUN_14d7c3dc3 body=1 status=ok
// SIG undefined FUN_14d7c3dc3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3dc3(void)

{
  in(3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3dc7 FUN_14d7c3dc7 body=35 status=ok
// SIG undefined FUN_14d7c3dc7(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c3dc7(longlong param_1,char param_2)

{
  char *pcVar1;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  longlong unaff_RDI;
  char in_CF;
  char in_ZF;
  
  if (param_1 == 1 || in_ZF != '\0') {
    in(3);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(unaff_RDI + -0x78 + CONCAT44(unaff_00000034,unaff_ESI) * 4);
  *pcVar1 = *pcVar1 + param_2 + in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3dd8 FUN_14d7c3dd8 body=2 status=ok
// SIG undefined FUN_14d7c3dd8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3dd8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3de4 FUN_14d7c3de4 body=8 status=ok
// SIG undefined FUN_14d7c3de4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3de4(char param_1)

{
  longlong unaff_RBX;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
  *(char *)(unaff_RBX + -0x5c) = *(char *)(unaff_RBX + -0x5c) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3df1 FUN_14d7c3df1 body=14 status=ok
// SIG undefined FUN_14d7c3df1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3df1(longlong param_1,undefined4 param_2)

{
  char *pcVar1;
  byte bVar2;
  longlong in_RAX;
  char unaff_BL;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  undefined2 in_FS;
  byte in_CF;
  char in_ZF;
  bool in_SF;
  char in_OF;
  longlong unaff_retaddr;
  
  *(longlong *)(unaff_retaddr + -8) = param_1;
  bVar2 = (byte)in_RAX;
  if ((bool)in_OF == in_SF) {
    pcVar1 = (char *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),(bVar2 - 0x20) - in_CF) + 0xc);
    *pcVar1 = (*pcVar1 - unaff_BL) - (bVar2 < 0x20 || (byte)(bVar2 - 0x20) < in_CF);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_SF) {
    unaff_RSI[3] = unaff_RSI[3] + bVar2;
    return;
  }
  if (param_1 == 1 || in_ZF == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(in_RAX + 0x27) = in_FS;
  *(longlong *)(unaff_retaddr + -0x10) = unaff_RBP;
  *unaff_RDI = *unaff_RSI;
  *(undefined4 *)(unaff_RBP + 0x66) = param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3dfd FUN_14d7c3dfd body=10 status=ok
// SIG undefined FUN_14d7c3dfd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3dfd(undefined8 param_1,undefined2 param_2)

{
  byte in_AL;
  undefined4 *unaff_RSI;
  byte *unaff_RDI;
  
  DAT_19c836cda = (DAT_19c836cda + 'R') - (in_AL < *unaff_RDI);
  out(*unaff_RSI,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3e1b FUN_14d7c3e1b body=2 status=ok
// SIG undefined FUN_14d7c3e1b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3e1b(longlong param_1)

{
  undefined4 in_EAX;
  
  out(0xda,(char)in_EAX);
  *(undefined4 *)(param_1 + 0x3a27608c) = in_EAX;
  uRam89a44f5527fa34fb = (char)in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3e1f FUN_14d7c3e1f body=20 status=ok
// SIG undefined FUN_14d7c3e1f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3e1f(undefined8 param_1,undefined4 param_2)

{
  longlong in_RAX;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  undefined2 in_FS;
  
  *(undefined2 *)(in_RAX + 0x27) = in_FS;
  *unaff_RDI = *unaff_RSI;
  *(undefined4 *)(unaff_RBP + 0x66) = param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3e53 FUN_14d7c3e53 body=4 status=ok
// SIG undefined FUN_14d7c3e53(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3e53(longlong param_1,longlong param_2)

{
  uint *puVar1;
  char *pcVar2;
  code *pcVar3;
  uint uVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  undefined2 in_FS;
  
  uVar6 = (undefined4)param_2;
  pcVar2 = (char *)(param_2 + -0x6d + unaff_RSI);
  *pcVar2 = *pcVar2 + '!';
  puVar1 = (uint *)(CONCAT44(unaff_0000001c,CONCAT31((int3)((uint)unaff_EBX >> 8),0xad)) +
                   0x1e603c3d);
  *puVar1 = *puVar1 >> ((byte)param_1 & 0x1f);
  pcVar3 = (code *)swi(0);
  uVar4 = (*pcVar3)();
  bVar5 = (byte)uVar6 & *(byte *)(param_1 + 0x41);
  if (-1 < (char)bVar5) {
    pcVar2 = (undefined1 *)(ulonglong)uVar4 + 3;
    *pcVar2 = *pcVar2 + (char)(unaff_RSI & 0xffffffff);
    return;
  }
  if (bVar5 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)((unaff_RSI & 0xffffffff) + 0x27) = in_FS;
  *(undefined1 *)(unaff_RDI + 1) = *(undefined1 *)(ulonglong)uVar4;
  *(uint *)(unaff_RBP + 0x66) = CONCAT31((int3)((uint)uVar6 >> 8),bVar5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3e57 FUN_14d7c3e57 body=5 status=ok
// SIG undefined FUN_14d7c3e57(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3e57(longlong param_1,longlong param_2)

{
  char *pcVar1;
  code *pcVar2;
  uint uVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  undefined2 in_FS;
  char in_CF;
  
  uVar5 = (undefined4)param_2;
  pcVar1 = (char *)(param_2 + -0x6d + unaff_RSI);
  *pcVar1 = *pcVar1 + '!' + in_CF;
  *(uint *)(unaff_RBX + 0x1e603c3d) = *(uint *)(unaff_RBX + 0x1e603c3d) >> ((byte)param_1 & 0x1f);
  pcVar2 = (code *)swi(0);
  uVar3 = (*pcVar2)();
  bVar4 = (byte)uVar5 & *(byte *)(param_1 + 0x41);
  if (-1 < (char)bVar4) {
    pcVar1 = (undefined1 *)(ulonglong)uVar3 + 3;
    *pcVar1 = *pcVar1 + (char)(unaff_RSI & 0xffffffff);
    return;
  }
  if (bVar4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)((unaff_RSI & 0xffffffff) + 0x27) = in_FS;
  *(undefined1 *)(unaff_RDI + 1) = *(undefined1 *)(ulonglong)uVar3;
  *(uint *)(unaff_RBP + 0x66) = CONCAT31((int3)((uint)uVar5 >> 8),bVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3e5f FUN_14d7c3e5f body=2 status=ok
// SIG undefined FUN_14d7c3e5f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3e5f(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3e64 FUN_14d7c3e64 body=22 status=ok
// SIG undefined FUN_14d7c3e64(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3e64(longlong param_1,undefined4 param_2)

{
  char *pcVar1;
  uint in_EAX;
  byte bVar2;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  undefined2 in_FS;
  
  bVar2 = (byte)param_2 & *(byte *)(param_1 + 0x41);
  if (-1 < (char)bVar2) {
    pcVar1 = (undefined1 *)(ulonglong)in_EAX + 3;
    *pcVar1 = *pcVar1 + (char)(unaff_RSI & 0xffffffff);
    return;
  }
  if (bVar2 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)((unaff_RSI & 0xffffffff) + 0x27) = in_FS;
  *(undefined1 *)(unaff_RDI + 1) = *(undefined1 *)(ulonglong)in_EAX;
  *(uint *)(unaff_RBP + 0x66) = CONCAT31((int3)((uint)param_2 >> 8),bVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3e81 FUN_14d7c3e81 body=17 status=ok
// SIG undefined FUN_14d7c3e81(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3e81(void)

{
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  int unaff_EBP;
  
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) - unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3e93 FUN_14d7c3e93 body=10 status=ok
// SIG undefined FUN_14d7c3e93(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3e93(undefined8 param_1,undefined2 param_2)

{
  undefined1 in_AL;
  
  out(param_2,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3ea3 FUN_14d7c3ea3 body=11 status=ok
// SIG undefined FUN_14d7c3ea3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3ea3(char *param_1,undefined2 param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 in_RAX;
  longlong unaff_RBX;
  ulonglong uVar3;
  char in_R10B;
  
  puVar1 = (uint *)(unaff_RBX + -0x47);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - (uint)unaff_RBX;
  uVar3 = (ulonglong)param_1 & 0xffffffff;
  uRamf268b1c4fb95fd1a =
       (undefined4)
       CONCAT71((int7)((ulonglong)in_RAX >> 8),((char)in_RAX + 'P') - (uVar2 < (uint)unaff_RBX));
  *param_1 = *param_1 - in_R10B;
  out(param_2,(int)((ulonglong)in_RAX >> 8) << 8);
  *(undefined1 *)
   CONCAT62((int6)(uVar3 >> 0x10),
            CONCAT11((char)(uVar3 >> 8) + (char)((ulonglong)in_RAX >> 8),(char)uVar3)) = 0xa9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3eaf FUN_14d7c3eaf body=4 status=ok
// SIG undefined FUN_14d7c3eaf(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3eaf(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3ebc FUN_14d7c3ebc body=17 status=ok
// SIG undefined FUN_14d7c3ebc(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3ebc(undefined8 param_1,undefined2 param_2)

{
  uint in_EAX;
  ulonglong unaff_RBX;
  
  out(param_2,in_EAX & 0xffffff00);
  *(undefined1 *)(unaff_RBX & 0xffffffff) = 0xa9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3ecd FUN_14d7c3ecd body=17 status=ok
// SIG undefined FUN_14d7c3ecd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3ecd(undefined8 param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  ulonglong unaff_RBX;
  
  out(param_2,in_EAX);
  *(undefined1 *)(unaff_RBX & 0xffffffff) = 0xa9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3ee5 FUN_14d7c3ee5 body=8 status=ok
// SIG undefined FUN_14d7c3ee5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3ee5(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  ulonglong unaff_RBX;
  undefined1 *unaff_RDI;
  char in_SF;
  char in_OF;
  
  if (in_OF == in_SF) {
    in(param_2);
    uVar1 = func_0x00011f8786b5();
    *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(unaff_RBX & 0xffffffff) = 0xa9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3eed FUN_14d7c3eed body=8 status=ok
// SIG undefined FUN_14d7c3eed(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3eed(void)

{
  undefined1 uVar1;
  undefined1 *unaff_RDI;
  
  uVar1 = func_0x00011f8786b5();
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3ef5 FUN_14d7c3ef5 body=9 status=ok
// SIG undefined FUN_14d7c3ef5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3ef5(void)

{
  undefined1 in_AL;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3f09 FUN_14d7c3f09 body=7 status=ok
// SIG undefined FUN_14d7c3f09(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3f09(void)

{
  undefined1 in_AL;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = in_AL;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + -0x1c;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3f11 FUN_14d7c3f11 body=12 status=ok
// SIG undefined FUN_14d7c3f11(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c3f40) overlaps instruction at (ram,0x00014d7c3f3d)
    */

ulonglong FUN_14d7c3f11(longlong param_1)

{
  char *pcVar1;
  int iVar2;
  longlong in_RAX;
  char cVar3;
  int unaff_EBX;
  ulonglong unaff_RBP;
  int unaff_ESI;
  undefined4 unaff_00000034;
  char unaff_retaddr;
  
  iVar2 = *(int *)(&stack0x00000000 + in_RAX * 4);
  pcVar1 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + -0x749fe35c);
  *pcVar1 = *pcVar1 + unaff_retaddr;
  cVar3 = (char)((uint)(unaff_EBX - iVar2) >> 8) + *(char *)(unaff_RBP - 0x5eff6fa5);
  if (cVar3 == '\0') {
    return 0x5e3fd8a0;
  }
  if ((POPCOUNT(cVar3) & 1U) != 0) {
    iRam000000016d5b0a3c = iRam000000016d5b0a3c - unaff_ESI;
    if (param_1 == 1 || iRam000000016d5b0a3c != 0) {
      return unaff_RBP & 0xffffffff;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3f1e FUN_14d7c3f1e body=4 status=ok
// SIG undefined FUN_14d7c3f1e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c3f40) overlaps instruction at (ram,0x00014d7c3f3d)
    */

ulonglong FUN_14d7c3f1e(longlong param_1)

{
  uint in_EAX;
  char unaff_BH;
  char cVar1;
  undefined8 *puVar2;
  ulonglong unaff_RBP;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *(undefined1 *)(ulonglong)in_EAX;
  puVar2 = (undefined8 *)(ulonglong)*(uint *)((undefined1 *)(ulonglong)in_EAX + -3);
  cVar1 = unaff_BH + *(char *)(unaff_RBP - 0x5eff6fa5);
  *puVar2 = 0x56c1916b;
  if (cVar1 == '\0') {
    return 0x5e3fd8a0;
  }
  if ((POPCOUNT(cVar1) & 1U) != 0) {
    iRam000000016d5b0a3c = iRam000000016d5b0a3c - (in_EAX + 1);
    if (param_1 == 1 || iRam000000016d5b0a3c != 0) {
      return unaff_RBP & 0xffffffff;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar2[-1] = puVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3f22 FUN_14d7c3f22 body=4 status=ok
// SIG undefined FUN_14d7c3f22(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c3f40) overlaps instruction at (ram,0x00014d7c3f3d)
    */

ulonglong FUN_14d7c3f22(longlong param_1)

{
  char unaff_BH;
  char cVar1;
  undefined8 *puVar2;
  ulonglong unaff_RBP;
  int unaff_ESI;
  undefined4 unaff_00000034;
  
  puVar2 = (undefined8 *)(ulonglong)*(uint *)(CONCAT44(unaff_00000034,unaff_ESI) + -4);
  cVar1 = unaff_BH + *(char *)(unaff_RBP - 0x5eff6fa5);
  *puVar2 = 0x56c1916b;
  if (cVar1 == '\0') {
    return 0x5e3fd8a0;
  }
  if ((POPCOUNT(cVar1) & 1U) != 0) {
    iRam000000016d5b0a3c = iRam000000016d5b0a3c - unaff_ESI;
    if (param_1 == 1 || iRam000000016d5b0a3c != 0) {
      return unaff_RBP & 0xffffffff;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar2[-1] = puVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3f2b FUN_14d7c3f2b body=12 status=ok
// SIG undefined FUN_14d7c3f2b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c3f40) overlaps instruction at (ram,0x00014d7c3f3d)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14d7c3f2b(longlong param_1)

{
  undefined4 unaff_EBP;
  byte in_CF;
  bool in_PF;
  bool in_ZF;
  int unaff_retaddr;
  
  if (in_ZF) {
    return _DAT_a0b856c1916b68f8;
  }
  if (!in_PF) {
    iRam000000016d5b0a3c = (iRam000000016d5b0a3c - unaff_retaddr) - (uint)in_CF;
    if (param_1 == 1 || iRam000000016d5b0a3c != 0) {
      return unaff_EBP;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3f37 FUN_14d7c3f37 body=8 status=ok
// SIG undefined FUN_14d7c3f37(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c3f40) overlaps instruction at (ram,0x00014d7c3f3d)
    */

ulonglong FUN_14d7c3f37(longlong param_1)

{
  ulonglong in_RAX;
  ulonglong unaff_RBP;
  int unaff_ESI;
  byte in_CF;
  bool in_PF;
  bool in_ZF;
  
  if (in_ZF) {
    return in_RAX;
  }
  if (!in_PF) {
    iRam000000016d5b0a3c = (iRam000000016d5b0a3c - unaff_ESI) - (uint)in_CF;
    if (param_1 == 1 || iRam000000016d5b0a3c != 0) {
      return unaff_RBP & 0xffffffff;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3f3f FUN_14d7c3f3f body=4 status=ok
// SIG undefined FUN_14d7c3f3f(void)

void FUN_14d7c3f3f(void)

{
  return;
}



// FUNCTION 14d7c3f47 FUN_14d7c3f47 body=23 status=ok
// SIG undefined FUN_14d7c3f47(void)

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_14d7c3f47(undefined8 param_1)

{
  byte bVar1;
  undefined8 in_RAX;
  byte *pbVar2;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char in_ZF;
  
  pbVar2 = (byte *)(CONCAT71((int7)((ulonglong)param_1 >> 8),0x1c) + -1);
  if (pbVar2 == (byte *)0x0 || in_ZF != '\0') {
    LOCK();
    *(char *)(unaff_RDI + -0x24bdef4d) = (char)((ulonglong)in_RAX >> 8);
    UNLOCK();
    bVar1 = (byte)pbVar2 & 7;
    *pbVar2 = *pbVar2 << bVar1 | *pbVar2 >> 8 - bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *(undefined4 *)(unaff_RBX + -0x4ce1ffd7 + unaff_RSI * 8);
}



// FUNCTION 14d7c3f5d FUN_14d7c3f5d body=1 status=ok
// SIG undefined FUN_14d7c3f5d(void)

void FUN_14d7c3f5d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7c3f65 FUN_14d7c3f65 body=4 status=ok
// SIG undefined FUN_14d7c3f65(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3f65(byte param_1)

{
  char *pcVar1;
  longlong in_RAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  
  *(char *)(in_RAX + -0x21) = *(char *)(in_RAX + -0x21) << (param_1 & 0x1f);
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x62ab2d39);
  *pcVar1 = *pcVar1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3f76 FUN_14d7c3f76 body=2 status=ok
// SIG undefined FUN_14d7c3f76(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3f76(longlong param_1,byte param_2)

{
  code *pcVar1;
  byte *in_RAX;
  bool in_CF;
  bool in_ZF;
  
  if (in_CF || in_ZF) {
    *(int *)(param_1 + 0x72) = *(int *)(param_1 + 0x72) << 0xf;
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)(param_1,param_2 ^ *in_RAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3f7e FUN_14d7c3f7e body=23 status=ok
// SIG undefined FUN_14d7c3f7e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3f7e(longlong param_1,byte param_2)

{
  code *pcVar1;
  uint uVar2;
  
  uVar2 = in(0x3c);
  *(int *)(param_1 + 0x72) = *(int *)(param_1 + 0x72) << 0xf;
  pcVar1 = (code *)swi(0x39);
  (*pcVar1)(param_1,param_2 ^ *(byte *)(ulonglong)uVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3f96 FUN_14d7c3f96 body=7 status=ok
// SIG undefined FUN_14d7c3f96(void)

void FUN_14d7c3f96(longlong param_1)

{
  code *pcVar1;
  
  *(int *)(param_1 + -0x460fa7ed) = *(int *)(param_1 + -0x460fa7ed) >> 1;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7c3f9e FUN_14d7c3f9e body=37 status=ok
// SIG undefined FUN_14d7c3f9e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3f9e(undefined2 *param_1,longlong param_2)

{
  char cVar1;
  code *pcVar2;
  undefined1 in_AL;
  undefined1 *puVar3;
  ulonglong unaff_RBX;
  ulonglong *puVar4;
  undefined8 *puVar5;
  uint unaff_EBP;
  undefined1 *unaff_RDI;
  undefined2 in_SS;
  bool in_CF;
  bool in_ZF;
  undefined1 *unaff_retaddr;
  ulonglong auStackX_8 [4];
  
  if (!in_CF && !in_ZF) {
    puVar4 = auStackX_8;
    *(uint *)(unaff_RDI + -0x1a803083) = *(uint *)(unaff_RDI + -0x1a803083) | unaff_EBP;
    do {
      puVar3 = (undefined1 *)(unaff_RBX & 0xffffffff);
      unaff_RBX = (ulonglong)unaff_retaddr & 0xffffffff;
      *(char *)(unaff_RBX - 0x6438ca9d) = '\0';
      cVar1 = *(char *)(unaff_RBX - 0x6438ca9d);
      puVar5 = (undefined8 *)((longlong)puVar4 + -8);
      puVar4 = (ulonglong *)((longlong)puVar4 + -8);
      *puVar5 = 0xfffffffff7ca961a;
      unaff_retaddr = puVar3;
    } while (cVar1 != '\0');
    pcVar2 = (code *)swi(1);
    (*pcVar2)();
    return;
  }
  *unaff_RDI = in_AL;
  *param_1 = in_SS;
  if (((auStackX_8[0] & 0x800) != 0) != ((auStackX_8[0] & 0x80) != 0)) {
    out(*unaff_retaddr,(short)param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(param_2 + 1) = (*(char *)(param_2 + 1) + -0x50) - ((auStackX_8[0] & 1) != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3faa FUN_14d7c3faa body=6 status=ok
// SIG undefined FUN_14d7c3faa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c3faa(undefined8 param_1,char param_2)

{
  code *pcVar1;
  char in_CF;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)(param_1,(param_2 - *(char *)((ulonglong)_DAT_1b610db77 - 0xe880836)) - in_CF);
  return;
}



// FUNCTION 14d7c3fb6 FUN_14d7c3fb6 body=1 status=ok
// SIG undefined FUN_14d7c3fb6(void)

void FUN_14d7c3fb6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7c3fd2 FUN_14d7c3fd2 body=3 status=ok
// SIG undefined FUN_14d7c3fd2(void)

void FUN_14d7c3fd2(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7c3fd6 FUN_14d7c3fd6 body=3 status=ok
// SIG undefined FUN_14d7c3fd6(void)

void FUN_14d7c3fd6(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7c3fda FUN_14d7c3fda body=1 status=ok
// SIG undefined FUN_14d7c3fda(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3fda(undefined8 param_1,undefined2 param_2)

{
  undefined4 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3fe3 FUN_14d7c3fe3 body=8 status=ok
// SIG undefined FUN_14d7c3fe3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3fe3(undefined8 param_1,longlong param_2)

{
  char in_CF;
  
  *(char *)(param_2 + 1) = (*(char *)(param_2 + 1) + -0x50) - in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3ff3 FUN_14d7c3ff3 body=5 status=ok
// SIG undefined FUN_14d7c3ff3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3ff3(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3ff8 FUN_14d7c3ff8 body=8 status=ok
// SIG undefined FUN_14d7c3ff8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3ff8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c4003 FUN_14d7c4003 body=8 status=ok
// SIG undefined FUN_14d7c4003(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c4003(void)

{
  uint *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI | 0x2455ae0d;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c402b FUN_14d7c402b body=12 status=ok
// SIG undefined FUN_14d7c402b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c404a) overlaps instruction at (ram,0x00014d7c4049)
    */

void FUN_14d7c402b(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint *puVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  char *pcVar10;
  uint uVar11;
  longlong unaff_RBX;
  undefined1 *unaff_RSI;
  
  uVar11 = (uint)unaff_RBX | *(uint *)(&stack0x6396a806 + unaff_RBX * 8);
  if (param_1 - 1U == 0 || uVar11 == 0) {
    uVar9 = param_1 - 1U & 0xffffffff;
    cVar3 = *(char *)(uVar9 + 0x45f5002b + param_2 * 4);
    pcVar10 = (char *)(uVar9 ^ 0x66);
    piVar1 = (int *)((ulonglong)uVar11 + 0x31);
    *piVar1 = *piVar1 + -1;
    *pcVar10 = *pcVar10 + cVar3;
    uVar5 = (uint)(0xd < (byte)pcVar10);
    uVar8 = (uint)CONCAT71((int7)(uVar9 >> 8),(byte)pcVar10 - 0xe);
    uVar6 = uVar8 + 0x2a06fd6e;
    uVar7 = CONCAT31((int3)(uVar6 + uVar5 >> 8),uRam04acad42f3a5ebed);
    out(0,uVar7);
    bVar4 = *(byte *)(ulonglong)uVar7;
    *(byte *)(ulonglong)uVar7 =
         (byte)(CONCAT11(0xd5f90291 < uVar8 || CARRY4(uVar6,uVar5),bVar4) >> 4) | bVar4 << 5;
    puVar2 = (uint *)((ulonglong)uVar11 + 0x2eb99c5b);
    *puVar2 = *puVar2 | uVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*unaff_RSI,(short)param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c404d FUN_14d7c404d body=6 status=ok
// SIG undefined FUN_14d7c404d(void)

void FUN_14d7c404d(void)

{
  FUN_14d7c3ff8();
  return;
}



// FUNCTION 14d7c4055 FUN_14d7c4055 body=4 status=ok
// SIG undefined FUN_14d7c4055(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c4055(void)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  char cVar4;
  byte bVar5;
  undefined2 uVar6;
  undefined4 in_register_00000004;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  undefined4 *unaff_RSI;
  
  bVar5 = (byte)((uint)*unaff_RSI >> 8);
  uVar6 = (undefined2)((uint)*unaff_RSI >> 0x10);
  pbVar3 = (byte *)((longlong)unaff_RSI + 5);
  bVar2 = *pbVar3;
  *pbVar3 = *pbVar3 + bVar5;
  cVar4 = *(char *)CONCAT44(in_register_00000004,
                            CONCAT22(uVar6,CONCAT11(bVar5,*(char *)(unaff_RSI + 1) + -0x19)));
  *(byte *)CONCAT44(in_register_00000004,
                    CONCAT22(uVar6,CONCAT11(bVar5,*(char *)(unaff_RSI + 1) + -0x19))) =
       (byte)(CONCAT11(CARRY1(bVar2,bVar5),cVar4) >> 4) | cVar4 << 5;
  puVar1 = (uint *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x2eb99c5b);
  *puVar1 = *puVar1 | unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c405a FUN_14d7c405a body=19 status=ok
// SIG undefined FUN_14d7c405a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c405a(void)

{
  uint *puVar1;
  byte *in_RAX;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  undefined1 in_CF;
  
  *in_RAX = (byte)(CONCAT11(in_CF,*in_RAX) >> 4) | *in_RAX << 5;
  puVar1 = (uint *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x2eb99c5b);
  *puVar1 = *puVar1 | unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c4072 FUN_14d7c4072 body=6 status=ok
// SIG undefined FUN_14d7c4072(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c4072(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  byte bVar2;
  longlong unaff_RSI;
  
  LOCK();
  uVar1 = *(undefined1 *)(unaff_RSI + -0x640e411f);
  *(undefined1 *)(unaff_RSI + -0x640e411f) = (char)param_2;
  UNLOCK();
  bVar2 = in((short)CONCAT71((int7)((ulonglong)param_2 >> 8),uVar1));
  DAT_888e5502bc530a92 = bVar2 | 0x58;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c407a FUN_14d7c407a body=18 status=ok
// SIG undefined FUN_14d7c407a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c407a(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  int *in_RAX;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  char in_ZF;
  
  if (param_1 + -1 == 0 || in_ZF == '\0') {
    pcVar5 = (code *)swi(1);
    (*pcVar5)();
    return;
  }
  uVar8 = (int)in_RAX - *in_RAX;
  pcVar9 = (char *)((ulonglong)uVar8 ^ 0x66);
  piVar1 = (int *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x31);
  *piVar1 = *piVar1 + -1;
  *pcVar9 = *pcVar9 + (char)(param_1 + -1);
  uVar6 = CONCAT31((int3)(uVar8 >> 8),(byte)pcVar9 - 0xe);
  uVar8 = (uint)(0xd < (byte)pcVar9);
  uVar4 = uVar6 + 0x2a06fd6e;
  uVar7 = CONCAT31((int3)(uVar4 + uVar8 >> 8),uRam04acad42f3a5ebed);
  out(0,uVar7);
  bVar3 = *(byte *)(ulonglong)uVar7;
  *(byte *)(ulonglong)uVar7 =
       (byte)(CONCAT11(0xd5f90291 < uVar6 || CARRY4(uVar4,uVar8),bVar3) >> 4) | bVar3 << 5;
  puVar2 = (uint *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x2eb99c5b);
  *puVar2 = *puVar2 | unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c407e FUN_14d7c407e body=31 status=ok
// SIG undefined FUN_14d7c407e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c407e(undefined8 param_1,undefined2 param_2)

{
  byte bVar1;
  
  bVar1 = in(param_2);
  DAT_888e5502bc530a92 = bVar1 | 0x58;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c40e6 FUN_14d7c40e6 body=132 status=ok
// SIG undefined FUN_14d7c40e6(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c414c) overlaps instruction at (ram,0x00014d7c4148)
    */
/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x00014d7c4165) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c40e6(longlong param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  char *pcVar4;
  undefined1 uVar5;
  uint in_EAX;
  uint uVar6;
  byte *pbVar7;
  longlong lVar8;
  byte bVar9;
  longlong lVar10;
  undefined2 uVar11;
  ulonglong uVar12;
  char *unaff_RBX;
  longlong *plVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  uint *unaff_RBP;
  uint *puVar16;
  uint uVar17;
  undefined1 *unaff_RSI;
  uint *unaff_RDI;
  undefined4 *puVar18;
  undefined2 in_FS;
  bool bVar19;
  float10 in_ST0;
  
  while (pcVar4 = _DAT_c51da3a7, !SBORROW1((char)in_EAX,-0x40)) {
    *unaff_RDI = *unaff_RDI | (uint)unaff_RBX;
    uVar17 = in_EAX + 0xfb20e7a8;
    _DAT_c51da39f = unaff_RDI;
    if ((int)in_EAX < 0x4df1858) {
      *(char *)(ulonglong)uVar17 = (*(char *)(ulonglong)uVar17 + '\x03') - (0x4df1857 < in_EAX);
      plVar13 = (longlong *)(ulonglong)(uVar17 * 0x3b00ffcb);
    }
    else {
      *(uint *)(param_1 + 0x72) = *(uint *)(param_1 + 0x72) | (uint)param_1;
      unaff_RBP = _DAT_c51da39f;
      plVar13 = (longlong *)&DAT_c51da39f;
      in(0xfb);
      _DAT_c51da39f = param_2;
      if (*(uint *)(param_1 + 0x16967560) != 0xc51da39f) {
        if (0xc51da39f < *(uint *)(param_1 + 0x16967560)) {
          FUN_14d7c3ff8();
          return;
        }
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      *unaff_RBX = *unaff_RBX + (char)((ulonglong)unaff_RBX >> 8);
    }
    param_1 = *plVar13;
    in_EAX = in(0x5c);
  }
  puVar14 = (undefined1 *)0xc51da3af;
  iVar2 = *(int *)((longlong)param_2 + 0xe);
  puVar18 = (undefined4 *)((longlong)unaff_RDI + 1);
  uVar17 = (int)unaff_RSI + 1;
  *(undefined1 *)unaff_RDI = *unaff_RSI;
  lVar10 = CONCAT71((int7)((ulonglong)param_1 >> 8),0xb1) + -1;
  if (lVar10 == 0) {
    uVar5 = in((short)param_2);
    uVar11 = CONCAT11(0xba,(char)param_2);
    param_2 = (uint *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),uVar11);
    uVar6 = (uint)(short)((short)CONCAT31((int3)((uint)(iVar2 * -0x3a) >> 8),uVar5) -
                         (short)_DAT_00000000);
    puVar16 = *(uint **)unaff_RBP;
    puVar18 = (undefined4 *)
              (ulonglong)((int)unaff_RDI + 5U | *(uint *)((longlong)unaff_RDI + -0x19));
    *(float *)(unaff_RSI + 0x6844bb0e) = (float)in_ST0;
    do {
    } while ((POPCOUNT(uVar6 & 0x19) & 1U) == 0);
    uVar15 = (ulonglong)(uVar6 & 0x13bf9619);
    uVar6 = uVar17 & *(uint *)(pcVar4 + 0x25) & _DAT_00000000;
    uVar17 = uVar6 + 1;
    out(*(undefined1 *)(ulonglong)uVar6,uVar11);
    puVar14 = (undefined1 *)(uVar15 - 8);
    *(ulonglong *)(uVar15 - 8) = (ulonglong)(unaff_RBP + 2) & 0xffffffff;
    unaff_RBP = puVar16;
    if ((int)uVar6 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *pcVar4 = *pcVar4 + (char)((ulonglong)param_2 >> 8);
  }
  in((short)param_2);
  pbVar7 = (byte *)((ulonglong)puVar14 & 0xffffffff);
  bVar1 = *pbVar7;
  uVar17 = uVar17 ^ (uint)unaff_RBP;
  uVar3 = (longlong)(int)param_2[(ulonglong)(uint)(_DAT_176b5d046 * -0x7f1e9f28) * 2] * 0x3571af9d;
  uVar12 = uVar3 & 0xffffffff;
  bVar19 = (longlong)(int)uVar3 != uVar3;
  *(undefined2 *)(uVar12 + 0x4dd40d55) = in_FS;
  if (bVar19 == (int)uVar17 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  lVar8 = (CONCAT71((int7)((ulonglong)pbVar7 >> 8),(byte)pbVar7 & bVar1) + -0x14a01e3a) -
          (ulonglong)bVar19;
  pbVar7 = (byte *)((ulonglong)uVar17 + 0x7d);
  *pbVar7 = *pbVar7 | (byte)uVar12;
  *puVar18 = (int)lVar8;
  uVar5 = in((short)uVar12);
  bVar9 = (byte)lVar10;
  pbVar7 = (byte *)(CONCAT71((int7)((ulonglong)lVar8 >> 8),uVar5) + -0x47 + uVar12 * 4);
  bVar1 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar9;
  if (CARRY1(bVar1,bVar9) || *pbVar7 == 0) {
    *(char *)((longlong)puVar18 + -0x13) = *(char *)((longlong)puVar18 + -0x13) + (char)pcVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c4174 FUN_14d7c4174 body=21 status=ok
// SIG undefined FUN_14d7c4174(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c41df) overlaps instruction at (ram,0x00014d7c41de)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7c4165) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c4174(uint *param_1,longlong param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  undefined1 uVar4;
  short sVar5;
  uint uVar6;
  uint in_EAX;
  byte *pbVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  char *pcVar11;
  char *unaff_RBX;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *unaff_RBP;
  uint uVar14;
  char *pcVar15;
  char *unaff_RSI;
  int unaff_EDI;
  undefined4 *puVar16;
  undefined1 *puVar17;
  undefined2 in_FS;
  bool bVar18;
  bool in_PF;
  bool in_ZF;
  bool in_SF;
  float10 in_ST0;
  
  uVar4 = (undefined1)unaff_EDI;
  sVar5 = (short)unaff_EDI;
  puVar17 = (undefined1 *)(ulonglong)in_EAX;
  puVar16 = (undefined4 *)(puVar17 + 1);
  *puVar17 = uVar4;
  pcVar11 = unaff_RBX;
  pcVar15 = unaff_RSI;
  if (in_PF) {
    param_1 = (uint *)((longlong)param_1 + -1);
    if (param_1 == (uint *)0x0 || in_ZF == false) {
      if (!in_PF) {
        *(char *)((longlong)unaff_RBP + 0x2886aeb4) =
             *(char *)((longlong)unaff_RBP + 0x2886aeb4) + (char)unaff_RBX;
        puVar17 = (undefined1 *)0x676ae2d9;
        uRamee82b226e5fda6c2 = uVar4;
        for (uVar9 = (ulonglong)(uint)((int)param_1 + *(int *)(param_2 + 0x7d7ac54b)); uVar9 != 0;
            uVar9 = uVar9 - 1) {
          *puVar17 = uVar4;
          puVar17 = puVar17 + 1;
        }
        DAT_583af491 = DAT_583af491 - (char)((uint)(unaff_EDI + 0x67831448) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *unaff_RSI = *unaff_RSI + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    plVar13 = unaff_RBP;
    if (in_SF) {
      puVar1 = (uint *)(puVar17 + 2);
      do {
        *(uint *)((longlong)param_1 + 0x72) = *(uint *)((longlong)param_1 + 0x72) | (uint)param_1;
        unaff_RBP = *(longlong **)register0x00000020;
        *(longlong *)register0x00000020 = param_2;
        in(0xfb);
        if ((uint)register0x00000020 != param_1[0x5a59d58]) {
          if ((uint)register0x00000020 < param_1[0x5a59d58]) {
            FUN_14d7c3ff8();
            return;
          }
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        *unaff_RBX = *unaff_RBX + (char)((ulonglong)unaff_RBX >> 8);
        while( true ) {
          pcVar11 = _DAT_c51da3a7;
          param_1 = *(uint **)register0x00000020;
          uVar14 = in(0x5c);
          if (SBORROW1((char)uVar14,-0x40)) {
            register0x00000020 = (BADSPACEBASE *)0xc51da3af;
            iVar3 = *(int *)(param_2 + 0xe);
            puVar16 = (undefined4 *)(puVar17 + 3);
            pcVar15 = unaff_RSI + 1;
            *(char *)puVar1 = *unaff_RSI;
            param_1 = (uint *)(CONCAT71((int7)((ulonglong)param_1 >> 8),0xb1) + -1);
            if (param_1 != (uint *)0x0) {
              *pcVar11 = *pcVar11 + (char)((ulonglong)param_2 >> 8);
              goto LAB_14d7c4132;
            }
            uVar4 = in((short)param_2);
            sVar5 = (short)CONCAT31((int3)((uint)(iVar3 * -0x3a) >> 8),uVar4);
            param_2 = CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(0xba,(char)param_2));
            plVar13 = unaff_RBP;
            goto code_r0x00014d7c4107;
          }
          *puVar1 = *puVar1 | (uint)unaff_RBX;
          register0x00000020 = (BADSPACEBASE *)&DAT_c51da39f;
          uVar6 = uVar14 + 0xfb20e7a8;
          _DAT_c51da39f = puVar1;
          if (0x4df1857 < (int)uVar14) break;
          *(char *)(ulonglong)uVar6 = (*(char *)(ulonglong)uVar6 + '\x03') - (0x4df1857 < uVar14);
          register0x00000020 = (BADSPACEBASE *)(ulonglong)(uVar6 * 0x3b00ffcb);
        }
      } while( true );
    }
code_r0x00014d7c4107:
    uVar14 = (uint)(short)(sVar5 - (short)*param_1);
    unaff_RBP = (longlong *)*plVar13;
    puVar16 = (undefined4 *)(ulonglong)((int)puVar16 + 4U | *(uint *)((longlong)puVar16 + -0x1a));
    *(float *)(pcVar15 + 0x6844bb0d) = (float)in_ST0;
    do {
    } while ((POPCOUNT(uVar14 & 0x19) & 1U) == 0);
    uVar12 = (ulonglong)(uVar14 & 0x13bf9619);
    uVar14 = (uint)pcVar15 & *(uint *)(pcVar11 + 0x25) & *param_1;
    pcVar15 = (undefined1 *)(ulonglong)uVar14 + 1;
    out(*(undefined1 *)(ulonglong)uVar14,(short)param_2);
    register0x00000020 = (BADSPACEBASE *)(uVar12 - 8);
    *(ulonglong *)(uVar12 - 8) = (ulonglong)(plVar13 + 1) & 0xffffffff;
    if ((int)uVar14 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    in((short)param_2);
  }
LAB_14d7c4132:
  pbVar7 = (byte *)((ulonglong)register0x00000020 & 0xffffffff);
  bVar2 = *pbVar7;
  uVar14 = (uint)pcVar15 ^ (uint)unaff_RBP;
  uVar9 = (longlong)*(int *)(param_2 + (ulonglong)(uint)(_DAT_176b5d046 * -0x7f1e9f28) * 8) *
          0x3571af9d;
  uVar10 = uVar9 & 0xffffffff;
  bVar18 = (longlong)(int)uVar9 != uVar9;
  *(undefined2 *)(uVar10 + 0x4dd40d55) = in_FS;
  if (bVar18 == (int)uVar14 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  lVar8 = (CONCAT71((int7)((ulonglong)pbVar7 >> 8),(byte)pbVar7 & bVar2) + -0x14a01e3a) -
          (ulonglong)bVar18;
  pbVar7 = (byte *)((ulonglong)uVar14 + 0x7d);
  *pbVar7 = *pbVar7 | (byte)uVar10;
  *puVar16 = (int)lVar8;
  uVar4 = in((short)uVar10);
  pbVar7 = (byte *)(CONCAT71((int7)((ulonglong)lVar8 >> 8),uVar4) + -0x47 + uVar10 * 4);
  bVar2 = *pbVar7;
  *pbVar7 = *pbVar7 + (byte)param_1;
  if (CARRY1(bVar2,(byte)param_1) || *pbVar7 == 0) {
    *(char *)((longlong)puVar16 + -0x13) = *(char *)((longlong)puVar16 + -0x13) + (char)pcVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c4180 FUN_14d7c4180 body=13 status=ok
// SIG undefined FUN_14d7c4180(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c4180(undefined8 param_1)

{
  char *unaff_RSI;
  bool in_ZF;
  
  if (!in_ZF) {
    *unaff_RSI = *unaff_RSI + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c419d FUN_14d7c419d body=16 status=ok
// SIG undefined FUN_14d7c419d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c4157) overlaps instruction at (ram,0x00014d7c4156)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7c4165) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c419d(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  char cVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  byte *pbVar8;
  longlong lVar9;
  int *in_RAX;
  byte bVar10;
  byte bVar12;
  ulonglong uVar13;
  char unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 *unaff_RBP;
  byte *unaff_RSI;
  uint unaff_EDI;
  undefined4 *puVar16;
  byte *pbVar17;
  undefined2 in_FS;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  float10 in_ST0;
  ulonglong unaff_retaddr;
  undefined1 auStackX_8 [32];
  uint *puVar11;
  
  bVar10 = (char)param_1 + param_4;
  puVar11 = (uint *)CONCAT71((int7)((ulonglong)param_1 >> 8),bVar10);
  bVar20 = (unaff_retaddr & 0x400) != 0;
  *puVar11 = (uint)auStackX_8;
  *in_RAX = *in_RAX << (bVar10 & 0x1f);
  pbVar17 = (byte *)(ulonglong)unaff_EDI;
  pbVar8 = unaff_RSI + 0x7be62012;
  bVar1 = *pbVar8;
  bVar12 = (byte)param_2;
  *pbVar8 = *pbVar8 + bVar12;
  cVar6 = in((short)param_2);
  bVar2 = bVar12 + *pbVar17;
  bVar18 = CARRY1(bVar2,CARRY1(bVar1,bVar12));
  bVar19 = CARRY1(bVar12,*pbVar17) || bVar18;
  uVar13 = CONCAT71((int7)((ulonglong)param_2 >> 8),bVar2 + CARRY1(bVar1,bVar12));
  if (CARRY1(bVar12,*pbVar17) || bVar18) {
    return;
  }
  cVar4 = cVar6 + '\b' + bVar19;
  lVar9 = CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar4);
  if ((SCARRY1(cVar6,'\b') != SCARRY1(cVar6 + '\b',bVar19)) == cVar4 < '\0') {
    *pbVar17 = *unaff_RSI;
    uVar7 = (uint)(short)((short)lVar9 - (short)*puVar11);
    uVar15 = *unaff_RBP;
    puVar16 = (undefined4 *)
              (ulonglong)
              ((uint)(pbVar17 + (ulonglong)bVar20 * -8 + (ulonglong)bVar20 * -2 + 5) |
              *(uint *)(pbVar17 + (ulonglong)bVar20 * -8 + (ulonglong)bVar20 * -2 + 5 + -0x1e));
    *(float *)(unaff_RSI + (ulonglong)bVar20 * -2 + 1 + 0x6844bb0d) = (float)in_ST0;
    do {
    } while ((POPCOUNT(uVar7 & 0x19) & 1U) == 0);
    uVar14 = (ulonglong)(uVar7 & 0x13bf9619);
    uVar7 = (uint)(unaff_RSI + (ulonglong)bVar20 * -2 + 1) &
            *(uint *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x25) & *puVar11;
    out(*(undefined1 *)(ulonglong)uVar7,(short)uVar13);
    *(ulonglong *)(uVar14 - 8) = (ulonglong)(unaff_RBP + 1) & 0xffffffff;
    if ((int)uVar7 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    in((short)uVar13);
    pbVar8 = (byte *)(uVar14 - 8 & 0xffffffff);
    bVar1 = *pbVar8;
    uVar7 = uVar7 + 1 + (uint)bVar20 * -2 ^ (uint)uVar15;
    uVar3 = (longlong)*(int *)(uVar13 + (ulonglong)(uint)(_DAT_176b5d046 * -0x7f1e9f28) * 8) *
            0x3571af9d;
    uVar13 = uVar3 & 0xffffffff;
    bVar18 = (longlong)(int)uVar3 != uVar3;
    *(undefined2 *)(uVar13 + 0x4dd40d55) = in_FS;
    if (bVar18 == (int)uVar7 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    lVar9 = (CONCAT71((int7)((ulonglong)pbVar8 >> 8),(byte)pbVar8 & bVar1) + -0x14a01e3a) -
            (ulonglong)bVar18;
    pbVar8 = (byte *)((ulonglong)uVar7 + 0x7d);
    *pbVar8 = *pbVar8 | (byte)uVar13;
    pbVar17 = (byte *)(puVar16 + (ulonglong)bVar20 * -2 + 1);
    *puVar16 = (int)lVar9;
  }
  uVar5 = in((short)uVar13);
  pbVar8 = (byte *)(CONCAT71((int7)((ulonglong)lVar9 >> 8),uVar5) + -0x47 + uVar13 * 4);
  bVar1 = *pbVar8;
  *pbVar8 = *pbVar8 + bVar10;
  if (CARRY1(bVar1,bVar10) || *pbVar8 == 0) {
    pbVar17[-0x17] = pbVar17[-0x17] + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c41ad FUN_14d7c41ad body=34 status=ok
// SIG undefined FUN_14d7c41ad(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c4157) overlaps instruction at (ram,0x00014d7c4156)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7c4165) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c41ad(uint *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  char cVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  byte *pbVar8;
  longlong lVar9;
  undefined8 in_RAX;
  byte bVar10;
  ulonglong uVar11;
  char unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 *unaff_RBP;
  byte *unaff_RSI;
  uint unaff_EDI;
  undefined4 *puVar14;
  byte *pbVar15;
  undefined2 in_FS;
  bool bVar16;
  bool bVar17;
  float10 in_ST0;
  
  pbVar15 = (byte *)(ulonglong)unaff_EDI;
  pbVar8 = unaff_RSI + 0x7be62012;
  bVar1 = *pbVar8;
  bVar10 = (byte)param_2;
  *pbVar8 = *pbVar8 + bVar10;
  cVar6 = in((short)param_2);
  bVar2 = bVar10 + *pbVar15;
  bVar16 = CARRY1(bVar2,CARRY1(bVar1,bVar10));
  bVar17 = CARRY1(bVar10,*pbVar15) || bVar16;
  uVar11 = CONCAT71((int7)((ulonglong)param_2 >> 8),bVar2 + CARRY1(bVar1,bVar10));
  if (CARRY1(bVar10,*pbVar15) || bVar16) {
    return;
  }
  cVar4 = cVar6 + '\b' + bVar17;
  lVar9 = CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar4);
  if ((SCARRY1(cVar6,'\b') != SCARRY1(cVar6 + '\b',bVar17)) == cVar4 < '\0') {
    *pbVar15 = *unaff_RSI;
    uVar7 = (uint)(short)((short)lVar9 - (short)*param_1);
    uVar13 = *unaff_RBP;
    puVar14 = (undefined4 *)(ulonglong)(unaff_EDI + 5 | *(uint *)(pbVar15 + -0x19));
    *(float *)(unaff_RSI + 0x6844bb0e) = (float)in_ST0;
    do {
    } while ((POPCOUNT(uVar7 & 0x19) & 1U) == 0);
    uVar12 = (ulonglong)(uVar7 & 0x13bf9619);
    uVar7 = (int)unaff_RSI + 1U &
            *(uint *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x25) & *param_1;
    out(*(undefined1 *)(ulonglong)uVar7,(short)uVar11);
    *(ulonglong *)(uVar12 - 8) = (ulonglong)(unaff_RBP + 1) & 0xffffffff;
    if ((int)uVar7 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    in((short)uVar11);
    pbVar8 = (byte *)(uVar12 - 8 & 0xffffffff);
    bVar1 = *pbVar8;
    uVar7 = uVar7 + 1 ^ (uint)uVar13;
    uVar3 = (longlong)*(int *)(uVar11 + (ulonglong)(uint)(_DAT_176b5d046 * -0x7f1e9f28) * 8) *
            0x3571af9d;
    uVar11 = uVar3 & 0xffffffff;
    bVar16 = (longlong)(int)uVar3 != uVar3;
    *(undefined2 *)(uVar11 + 0x4dd40d55) = in_FS;
    if (bVar16 == (int)uVar7 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    lVar9 = (CONCAT71((int7)((ulonglong)pbVar8 >> 8),(byte)pbVar8 & bVar1) + -0x14a01e3a) -
            (ulonglong)bVar16;
    pbVar8 = (byte *)((ulonglong)uVar7 + 0x7d);
    *pbVar8 = *pbVar8 | (byte)uVar11;
    pbVar15 = (byte *)(puVar14 + 1);
    *puVar14 = (int)lVar9;
  }
  uVar5 = in((short)uVar11);
  pbVar8 = (byte *)(CONCAT71((int7)((ulonglong)lVar9 >> 8),uVar5) + -0x47 + uVar11 * 4);
  bVar1 = *pbVar8;
  *pbVar8 = *pbVar8 + (byte)param_1;
  if (CARRY1(bVar1,(byte)param_1) || *pbVar8 == 0) {
    pbVar15[-0x17] = pbVar15[-0x17] + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c41e8 FUN_14d7c41e8 body=49 status=ok
// SIG undefined FUN_14d7c41e8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c41e8(int param_1,undefined8 param_2)

{
  char in_AL;
  int iVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  longlong unaff_RBP;
  undefined1 *unaff_RDI;
  
  uVar3 = (undefined1)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RBP + -0x41) = *(char *)(unaff_RBP + -0x41) - in_AL;
  iVar1 = in(0x26);
  out(CONCAT11(uVar3,0x82),(char)iVar1);
  for (uVar2 = (ulonglong)
               (uint)(param_1 +
                     *(int *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(uVar3,0x82)) +
                             0x7d7ac54b)); uVar2 != 0; uVar2 = uVar2 - 1) {
    *unaff_RDI = (char)iVar1;
    unaff_RDI = unaff_RDI + 1;
  }
  DAT_583af491 = DAT_583af491 - (char)((uint)(iVar1 + 0x67831448) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c421c FUN_14d7c421c body=3 status=ok
// SIG undefined FUN_14d7c421c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c421c(undefined8 *param_1,undefined2 *param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  uint in_EAX;
  uint uVar3;
  longlong unaff_RDI;
  undefined1 in_CF;
  undefined2 in_FPUControlWord;
  
  while( true ) {
    uVar3 = (uint)param_1;
    param_1 = (undefined8 *)(ulonglong)in_EAX;
    if (!(bool)in_CF) break;
    uVar2 = *(undefined8 *)register0x00000020;
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + 8);
    *param_1 = uVar2;
    *param_2 = in_FPUControlWord;
    pbVar1 = (byte *)(unaff_RDI + 0x4e);
    *pbVar1 = *pbVar1 >> 6 | *pbVar1 << 2;
    in_CF = (char)*pbVar1 < '\0';
    in_EAX = uVar3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c4225 FUN_14d7c4225 body=8 status=ok
// SIG undefined FUN_14d7c4225(void)

void FUN_14d7c4225(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014d7c422a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulonglong)*(uint *)(param_1 + -0x2a))();
  return;
}



// FUNCTION 14d7c4232 FUN_14d7c4232 body=8 status=ok
// SIG undefined FUN_14d7c4232(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c4232(void)

{
  undefined1 in_AL;
  
  LOCK();
  FUN_1497a938c = in_AL;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c4252 FUN_14d7c4252 body=23 status=ok
// SIG undefined FUN_14d7c4252(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c425c) */

void FUN_14d7c4252(void)

{
  func_0x0001494a1add(0x32);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c4276 FUN_14d7c4276 body=4 status=ok
// SIG undefined FUN_14d7c4276(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c4276(uint param_1)

{
  uint in_EAX;
  uint unaff_ESI;
  byte unaff_DIL;
  
  if ((int)(param_1 | unaff_ESI) < 1) {
    *(byte *)(ulonglong)in_EAX = *(byte *)(ulonglong)in_EAX << 1 | 0x95 < unaff_DIL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c427a FUN_14d7c427a body=10 status=ok
// SIG undefined FUN_14d7c427a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c427a(void)

{
  uint in_EAX;
  byte unaff_DIL;
  byte in_CF;
  
  *(byte *)(ulonglong)in_EAX =
       *(byte *)(ulonglong)in_EAX << 1 | (0x95 < unaff_DIL || CARRY1(unaff_DIL + 0x6a,in_CF));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c4297 FUN_14d7c4297 body=21 status=ok
// SIG undefined FUN_14d7c4297(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c429f) overlaps instruction at (ram,0x00014d7c429e)
    */

void FUN_14d7c4297(longlong param_1,undefined2 param_2,undefined8 param_3,uint param_4)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 in_EAX;
  longlong unaff_RBX;
  undefined8 *unaff_RBP;
  undefined4 *unaff_RDI;
  uint *unaff_R15;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  *unaff_R15 = *unaff_R15 ^ param_4;
  if (0 < (int)*unaff_R15) {
    *(int *)((longlong)unaff_RDI + 0x1a) =
         *(int *)((longlong)unaff_RDI + 0x1a) + (int)unaff_RBX +
         (uint)(*(byte *)(unaff_RBX + 0x69) < (byte)unaff_RBX);
    *(char *)(param_1 + -0x2ed2c4eb) = (char)param_1;
    out(0,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar2 = '\x05';
  do {
    unaff_RBP = unaff_RBP + -1;
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
    *(undefined8 *)register0x00000020 = *unaff_RBP;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c42bf FUN_14d7c42bf body=18 status=ok
// SIG undefined FUN_14d7c42bf(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c4311) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c42bf(char param_1)

{
  code *pcVar1;
  undefined8 unaff_retaddr;
  
  if (!SCARRY1(param_1,(char)((ulonglong)unaff_retaddr >> 8))) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c42e5 FUN_14d7c42e5 body=28 status=ok
// SIG undefined FUN_14d7c42e5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c42e5(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RBP;
  undefined1 *unaff_RDI;
  bool in_OF;
  
  *unaff_RDI = in_AL;
  if (!in_OF) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  _DAT_61d7540930c7db08 = CONCAT71(in_register_00000001,in_AL);
  *(char *)(unaff_RBP + 0x66efe9b) =
       *(char *)(unaff_RBP + 0x66efe9b) + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7c42ed FUN_14d7c42ed body=11 status=ok
// SIG undefined FUN_14d7c42ed(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c42ed(uint param_1)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  longlong unaff_RBP;
  byte in_CF;
  
  iVar3 = FUN_159da11a7();
  uVar4 = (iVar3 + 0x6d7a186e) - (uint)in_CF;
  bVar2 = *(byte *)(unaff_RBP + 0x561fc00e);
  *(byte *)(unaff_RBP + 0x561fc00e) =
       (byte)(CONCAT11(CARRY4(param_1,param_1),bVar2) >> 4) | bVar2 << 5;
  pcVar1 = (char *)((ulonglong)uVar4 + 0x73);
  *pcVar1 = *pcVar1 + (char)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c42f9 FUN_14d7c42f9 body=11 status=ok
// SIG undefined FUN_14d7c42f9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c42f9(void)

{
  char *pcVar1;
  byte bVar2;
  char in_AL;
  undefined7 in_register_00000001;
  longlong *unaff_RBP;
  undefined1 in_CF;
  
  bVar2 = *(byte *)(*unaff_RBP + 0x561fc00e);
  *(byte *)(*unaff_RBP + 0x561fc00e) = (byte)(CONCAT11(in_CF,bVar2) >> 4) | bVar2 << 5;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x73);
  *pcVar1 = *pcVar1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c430a FUN_14d7c430a body=1 status=ok
// SIG undefined FUN_14d7c430a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c430a(undefined8 param_1,undefined2 param_2)

{
  code *pcVar1;
  uint uVar2;
  longlong unaff_RBP;
  
  uVar2 = in(param_2);
  _DAT_61d7540930c7db08 = (ulonglong)uVar2;
  *(char *)(unaff_RBP + 0x66efe9b) = *(char *)(unaff_RBP + 0x66efe9b) + (char)((ushort)param_2 >> 8)
  ;
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7c430e FUN_14d7c430e body=2 status=ok
// SIG undefined FUN_14d7c430e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c430e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c4348 FUN_14d7c4348 body=16 status=ok
// SIG undefined FUN_14d7c4348(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c4348(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  char in_AH;
  byte unaff_BL;
  undefined7 unaff_00000019;
  undefined4 unaff_ESI;
  undefined4 *unaff_RDI;
  char in_CF;
  
  *unaff_RDI = unaff_ESI;
  pbVar1 = (byte *)(param_2 + -0x58501dae);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + unaff_BL;
  piVar2 = (int *)(CONCAT71(unaff_00000019,unaff_BL) + -0x7b +
                  CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                           CONCAT11(((char)((ulonglong)param_1 >> 8) - in_AH) - in_CF,(char)param_1)
                          ));
  *piVar2 = (*piVar2 - (int)param_2) - (uint)CARRY1(bVar3,unaff_BL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c435d FUN_14d7c435d body=2 status=ok
// SIG undefined FUN_14d7c435d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c435d(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c4361 FUN_14d7c4361 body=11 status=ok
// SIG undefined FUN_14d7c4361(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c4361(void)

{
  undefined4 in_EAX;
  
  _DAT_85a2030800fe1bcf = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c4376 FUN_14d7c4376 body=31 status=ok
// SIG undefined FUN_14d7c4376(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c4376(longlong param_1,undefined8 param_2)

{
  byte in_AL;
  byte *unaff_RBX;
  char in_CF;
  float10 in_ST0;
  
  *(int *)(CONCAT44((int)((ulonglong)param_2 >> 0x20),
                    CONCAT31((int3)((ulonglong)param_2 >> 8),
                             (char)param_2 +
                             *(char *)(param_1 + 0x54f5fbc6 + (longlong)unaff_RBX * 4) + in_CF)) +
          0x28) = (int)ROUND(in_ST0);
  *unaff_RBX = *unaff_RBX & (in_AL | 0xf9);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c4396 FUN_14d7c4396 body=3 status=ok
// SIG undefined FUN_14d7c4396(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c4396(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char unaff_BH;
  longlong unaff_RSI;
  
  pcVar1 = (char *)(unaff_RSI + -0x76 +
                   CONCAT71((int7)((ulonglong)param_2 >> 8),
                            (char)param_2 + *(char *)(unaff_RSI + 0x29)) * 2);
  *pcVar1 = *pcVar1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c439a FUN_14d7c439a body=4 status=ok
// SIG undefined FUN_14d7c439a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c439a(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char unaff_BH;
  longlong unaff_RSI;
  
  pcVar1 = (char *)(unaff_RSI + -0x76 + param_2 * 2);
  *pcVar1 = *pcVar1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c43a2 FUN_14d7c43a2 body=4 status=ok
// SIG undefined FUN_14d7c43a2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c43a2(uint param_1)

{
  char cVar1;
  undefined4 in_EAX;
  undefined3 uVar3;
  uint uVar2;
  undefined4 in_register_00000004;
  longlong unaff_retaddr;
  undefined1 auStack_8 [8];
  
  uVar3 = (undefined3)((uint)in_EAX >> 8);
  cVar1 = (byte)in_EAX + 0x42;
  if (0xbd < (byte)in_EAX && cVar1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = CONCAT31(uVar3,cVar1) | 0x65;
  out(9,uVar2);
  *(uint *)(unaff_retaddr + -0x1fc1938b) = *(uint *)(unaff_retaddr + -0x1fc1938b) | param_1;
  *(ulonglong *)(((ulonglong)auStack_8 & 0xffffffff) - 8) =
       CONCAT44(in_register_00000004,CONCAT31(uVar3,(char)uVar2)) | 0xb7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c43a6 FUN_14d7c43a6 body=3 status=ok
// SIG undefined FUN_14d7c43a6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c43a6(uint param_1,longlong param_2)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  bool in_CF;
  bool in_ZF;
  undefined1 auStack_10 [8];
  
  if (!in_CF && !in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(9,in_EAX | 0x65);
  *(uint *)(param_2 + -0x1fc1938b) = *(uint *)(param_2 + -0x1fc1938b) | param_1;
  *(ulonglong *)(((ulonglong)auStack_10 & 0xffffffff) - 8) =
       CONCAT44(in_register_00000004,CONCAT31((int3)(in_EAX >> 8),(char)(in_EAX | 0x65))) | 0xb7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c43ab FUN_14d7c43ab body=12 status=ok
// SIG undefined FUN_14d7c43ab(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c43ab(undefined8 param_1,longlong param_2)

{
  *(char *)(param_2 + 0x40) = *(char *)(param_2 + 0x40) - (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c43b7 FUN_14d7c43b7 body=23 status=ok
// SIG undefined FUN_14d7c43b7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c43b7(void)

{
  bool in_CF;
  bool in_ZF;
  
  if (!in_CF && !in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c43d2 FUN_14d7c43d2 body=2 status=ok
// SIG undefined FUN_14d7c43d2(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c444b) overlaps instruction at (ram,0x00014d7c4448)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7c43ed) */
/* WARNING: Removing unreachable block (ram,0x00014d7c4414) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c43d2(int *param_1,longlong param_2)

{
  undefined4 uVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  ulonglong in_RAX;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  longlong *plVar12;
  longlong *plVar13;
  longlong *unaff_RBP;
  longlong *plVar14;
  undefined4 *puVar15;
  undefined4 *unaff_RDI;
  ulonglong in_R11;
  float10 in_ST0;
  longlong unaff_retaddr;
  char cVar10;
  char cVar11;
  
  puVar15 = (undefined4 *)0x16930132;
  uVar7 = (int)param_1 - *param_1;
  uVar6 = (in_RAX | 0x4a) ^ 0x8d;
  if ((char)(((byte)in_RAX | 0x4a) ^ 0x8d) < '\x01') {
LAB_14d7c4438:
    *(uint *)(param_2 + -0x1fc1938b) = *(uint *)(param_2 + -0x1fc1938b) | uVar7;
    plVar12 = (longlong *)((longlong)register0x00000020 + -8);
    *(undefined4 **)((longlong)register0x00000020 + -8) = puVar15;
  }
  else {
    uVar6 = (ulonglong)((uint)uVar6 ^ 0x9f9c969b);
    *(int *)(ulonglong)uVar7 = *(int *)(ulonglong)uVar7 - (int)unaff_retaddr;
    plVar13 = (longlong *)&stack0xfffffffffffffff8;
    plVar14 = unaff_RBP;
    while( true ) {
      *(undefined4 **)((longlong)plVar13 + -8) = puVar15;
      unaff_retaddr = CONCAT71((int7)((ulonglong)unaff_retaddr >> 8),0xfd);
      uVar4 = *(undefined8 *)((longlong)plVar13 + -8);
      out((short)param_2,(int)uVar6 + -0x3c8c459d);
      if (0x3c8c459c < (int)uVar6) {
        return;
      }
      puVar15 = (undefined4 *)(ulonglong)((uint)unaff_retaddr * 0x59f7e3ff);
      in((short)param_2);
      unaff_RBP = (longlong *)*plVar14;
      plVar13 = plVar14 + 2;
      plVar12 = plVar14 + 2;
      uVar1 = in((short)plVar14[1]);
      *unaff_RDI = uVar1;
      uVar6 = 0x8c77021b;
      cVar11 = (char)((ulonglong)uVar4 >> 8);
      cVar10 = -cVar11;
      puVar9 = (uint *)CONCAT62((int6)((ulonglong)uVar4 >> 0x10),CONCAT11(cVar10,(char)uVar4));
      if (cVar10 != '\0' && cVar11 < '\x01') break;
      uVar7 = (uint)puVar9 | *puVar9;
      param_2 = CONCAT62(0x301a,CONCAT11(*(undefined1 *)((longlong)unaff_RBP + 0x6c),0x95));
      lVar8 = (ulonglong)uVar7 - 1;
      if (lVar8 == 0 || uVar7 == 0) {
        uVar7 = (uint)lVar8 | puVar15[-0x1d03655f];
        register0x00000020 = (BADSPACEBASE *)plVar14[2];
        goto LAB_14d7c4438;
      }
      uVar5 = in(0x57);
      uVar6 = CONCAT71(0x8c7702,uVar5);
      plVar14 = unaff_RBP;
      unaff_RDI = unaff_RDI + 1;
    }
    puVar9 = (uint *)(unaff_retaddr + 0x2fa21d24);
    *puVar9 = *puVar9 ^ (uint)unaff_retaddr;
    uVar7 = *puVar9;
    uVar2 = *(uint *)(in_R11 & 0xffffffff);
    uVar6 = (ulonglong)uVar2;
    *(short *)((longlong)unaff_RDI + 0x71) = (short)ROUND(in_ST0);
    if ((POPCOUNT(uVar7 & 0xff) & 1U) != 0) {
      bRam75472f93eb93432f = (byte)uVar2 & 0x1d;
      unaff_RDI[1] = *puVar15;
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(longlong **)((longlong)plVar12 + -8) = unaff_RBP;
  *(ulonglong *)(((ulonglong)((longlong)plVar12 + -8) & 0xffffffff) - 8) = uVar6 | 0xb7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c43d6 FUN_14d7c43d6 body=189 status=ok
// SIG undefined FUN_14d7c43d6(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c444b) overlaps instruction at (ram,0x00014d7c4448)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7c43ed) */
/* WARNING: Removing unreachable block (ram,0x00014d7c4414) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c43d6(int *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  ulonglong in_RAX;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  longlong unaff_RBX;
  longlong *plVar13;
  longlong *plVar14;
  longlong *unaff_RBP;
  longlong *plVar15;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  ulonglong in_R11;
  float10 in_ST0;
  longlong unaff_retaddr;
  char cVar11;
  char cVar12;
  
  *(int *)(unaff_RBX + 0x48823a16) = *(int *)(unaff_RBX + 0x48823a16) + (int)param_2;
  pbVar1 = (byte *)(param_2 + (longlong)param_1 * 2);
  *pbVar1 = *pbVar1 ^ (byte)param_1;
  uVar8 = (int)param_1 - *param_1;
  uVar7 = in_RAX & 0xfffffffffffffffb ^ 0x8d;
  if ((char)((byte)(in_RAX & 0xfffffffffffffffb) ^ 0x8d) < '\x01') {
LAB_14d7c4438:
    *(uint *)(param_2 + -0x1fc1938b) = *(uint *)(param_2 + -0x1fc1938b) | uVar8;
    plVar13 = (longlong *)((longlong)register0x00000020 + -8);
    *(undefined4 **)((longlong)register0x00000020 + -8) = unaff_RSI;
  }
  else {
    uVar7 = (ulonglong)((uint)uVar7 ^ 0x9f9c969b);
    *(int *)(ulonglong)uVar8 = *(int *)(ulonglong)uVar8 - (int)unaff_retaddr;
    plVar14 = (longlong *)&stack0xfffffffffffffff8;
    plVar15 = unaff_RBP;
    while( true ) {
      *(undefined4 **)((longlong)plVar14 + -8) = unaff_RSI;
      unaff_retaddr = CONCAT71((int7)((ulonglong)unaff_retaddr >> 8),0xfd);
      uVar5 = *(undefined8 *)((longlong)plVar14 + -8);
      out((short)param_2,(int)uVar7 + -0x3c8c459d);
      if (0x3c8c459c < (int)uVar7) {
        return;
      }
      unaff_RSI = (undefined4 *)(ulonglong)((uint)unaff_retaddr * 0x59f7e3ff);
      in((short)param_2);
      unaff_RBP = (longlong *)*plVar15;
      plVar14 = plVar15 + 2;
      plVar13 = plVar15 + 2;
      uVar2 = in((short)plVar15[1]);
      *unaff_RDI = uVar2;
      uVar7 = 0x8c77021b;
      cVar12 = (char)((ulonglong)uVar5 >> 8);
      cVar11 = -cVar12;
      puVar10 = (uint *)CONCAT62((int6)((ulonglong)uVar5 >> 0x10),CONCAT11(cVar11,(char)uVar5));
      if (cVar11 != '\0' && cVar12 < '\x01') break;
      uVar8 = (uint)puVar10 | *puVar10;
      param_2 = CONCAT62(0x301a,CONCAT11(*(undefined1 *)((longlong)unaff_RBP + 0x6c),0x95));
      lVar9 = (ulonglong)uVar8 - 1;
      if (lVar9 == 0 || uVar8 == 0) {
        uVar8 = (uint)lVar9 | unaff_RSI[-0x1d03655f];
        register0x00000020 = (BADSPACEBASE *)plVar15[2];
        goto LAB_14d7c4438;
      }
      uVar6 = in(0x57);
      uVar7 = CONCAT71(0x8c7702,uVar6);
      plVar15 = unaff_RBP;
      unaff_RDI = unaff_RDI + 1;
    }
    puVar10 = (uint *)(unaff_retaddr + 0x2fa21d24);
    *puVar10 = *puVar10 ^ (uint)unaff_retaddr;
    uVar8 = *puVar10;
    uVar3 = *(uint *)(in_R11 & 0xffffffff);
    uVar7 = (ulonglong)uVar3;
    *(short *)((longlong)unaff_RDI + 0x71) = (short)ROUND(in_ST0);
    if ((POPCOUNT(uVar8 & 0xff) & 1U) != 0) {
      bRam75472f93eb93432f = (byte)uVar3 & 0x1d;
      unaff_RDI[1] = *unaff_RSI;
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(longlong **)((longlong)plVar13 + -8) = unaff_RBP;
  *(ulonglong *)(((ulonglong)((longlong)plVar13 + -8) & 0xffffffff) - 8) = uVar7 | 0xb7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c4444 FUN_14d7c4444 body=21 status=ok
// SIG undefined FUN_14d7c4444(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c4444(void)

{
  undefined1 in_AL;
  undefined7 in_register_00000001;
  
  *(ulonglong *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) - 8) =
       CONCAT71(in_register_00000001,in_AL) | 0xb7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c44ba FUN_14d7c44ba body=3 status=ok
// SIG undefined FUN_14d7c44ba(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c44b0) overlaps instruction at (ram,0x00014d7c44ae)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c44ba(uint *param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  ulonglong uVar9;
  ulonglong in_RAX;
  char cVar10;
  ulonglong uVar12;
  longlong unaff_RBX;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  ulonglong in_R11;
  bool in_ZF;
  float10 in_ST0;
  char cVar11;
  
  if (!in_ZF) {
    lVar5 = (longlong)*(int *)(param_2 + 0x5bcb7e18 + (longlong)unaff_RBP);
    uVar9 = param_2 << 0x20 | in_RAX & 0xffffffff;
    uVar12 = (longlong)uVar9 % lVar5 & 0xffffffff;
    uVar9 = (ulonglong)((uint)((longlong)uVar9 / lVar5) ^ 0x9f9c969b);
    *param_1 = *param_1 - (int)unaff_RBX;
    plVar14 = (longlong *)&stack0xfffffffffffffff0;
    while( true ) {
      *(undefined4 **)((longlong)plVar14 + -8) = unaff_RSI;
      unaff_RBX = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),0xfd);
      uVar7 = *(undefined8 *)((longlong)plVar14 + -8);
      out((short)uVar12,(int)uVar9 + -0x3c8c459d);
      if (0x3c8c459c < (int)uVar9) {
        return;
      }
      unaff_RSI = (undefined4 *)(ulonglong)((uint)unaff_RBX * 0x59f7e3ff);
      in((short)uVar12);
      plVar15 = (longlong *)*unaff_RBP;
      plVar14 = unaff_RBP + 2;
      plVar13 = unaff_RBP + 2;
      uVar3 = in((short)unaff_RBP[1]);
      *unaff_RDI = uVar3;
      uVar9 = 0x8c77021b;
      param_2 = 0x301a0c95;
      cVar11 = (char)((ulonglong)uVar7 >> 8);
      cVar10 = -cVar11;
      param_1 = (uint *)CONCAT62((int6)((ulonglong)uVar7 >> 0x10),CONCAT11(cVar10,(char)uVar7));
      if (cVar10 != '\0' && cVar11 < '\x01') break;
      uVar12 = (ulonglong)CONCAT11(*(undefined1 *)((longlong)plVar15 + 0x6c),0x95);
      if (((uint)param_1 | *param_1) < 2) {
        plVar13 = (longlong *)(unaff_RBP[2] + -8);
        *(undefined4 **)(unaff_RBP[2] + -8) = unaff_RSI;
        goto code_r0x00014d7c4452;
      }
      uVar8 = in(0x57);
      uVar9 = CONCAT71(0x8c7702,uVar8);
      unaff_RBP = plVar15;
      unaff_RDI = unaff_RDI + 1;
    }
    puVar1 = (uint *)(unaff_RBX + 0x2fa21d24);
    *puVar1 = *puVar1 ^ (uint)unaff_RBX;
    uVar2 = *puVar1;
    uVar4 = *(uint *)(in_R11 & 0xffffffff);
    uVar9 = (ulonglong)uVar4;
    *(short *)((longlong)unaff_RDI + 0x71) = (short)ROUND(in_ST0);
    if ((POPCOUNT(uVar2 & 0xff) & 1U) == 0) {
code_r0x00014d7c4452:
      *(longlong **)((longlong)plVar13 + -8) = plVar15;
      *(ulonglong *)(((ulonglong)((longlong)plVar13 + -8) & 0xffffffff) - 8) = uVar9 | 0xb7;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bRam75472f93eb93432f = (byte)uVar4 & 0x1d;
    unaff_RDI[1] = *unaff_RSI;
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)(param_1,param_2);
  return;
}



// FUNCTION 14d7c44bf FUN_14d7c44bf body=2 status=ok
// SIG undefined FUN_14d7c44bf(void)

void FUN_14d7c44bf(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7c44c3 FUN_14d7c44c3 body=11 status=ok
// SIG undefined FUN_14d7c44c3(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c44b0) overlaps instruction at (ram,0x00014d7c44ae)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c44c3(uint *param_1,ushort param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  undefined8 in_RAX;
  char cVar9;
  longlong unaff_RBX;
  longlong *plVar11;
  longlong *unaff_RBP;
  longlong *plVar12;
  undefined4 *unaff_RSI;
  undefined4 *puVar13;
  undefined4 *unaff_RDI;
  ulonglong in_R11;
  bool in_OF;
  undefined2 in_FPUStatusWord;
  float10 in_ST0;
  char cVar10;
  
  plVar11 = (longlong *)register0x00000020;
  puVar13 = unaff_RDI;
  if (param_1 == (uint *)0x0) {
    while( true ) {
      *(undefined4 **)((longlong)plVar11 + -8) = unaff_RSI;
      unaff_RBX = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),0xfd);
      uVar6 = *(undefined8 *)((longlong)plVar11 + -8);
      out(param_2,(int)in_RAX + -0x3c8c459d);
      if (0x3c8c459c < (int)in_RAX) {
        return;
      }
      unaff_RSI = (undefined4 *)(ulonglong)(uint)((int)unaff_RBX * 0x59f7e3ff);
      in(param_2);
      plVar12 = (longlong *)*unaff_RBP;
      register0x00000020 = (BADSPACEBASE *)(unaff_RBP + 2);
      plVar11 = unaff_RBP + 2;
      unaff_RDI = puVar13 + 1;
      uVar3 = in((short)unaff_RBP[1]);
      *puVar13 = uVar3;
      uVar8 = 0x8c77021b;
      param_2 = 0xc95;
      cVar10 = (char)((ulonglong)uVar6 >> 8);
      cVar9 = -cVar10;
      param_1 = (uint *)CONCAT62((int6)((ulonglong)uVar6 >> 0x10),CONCAT11(cVar9,(char)uVar6));
      if (cVar9 != '\0' && cVar10 < '\x01') goto LAB_14d7c4448_3;
      param_2 = CONCAT11(*(undefined1 *)((longlong)plVar12 + 0x6c),0x95);
      if (((uint)param_1 | *param_1) < 2) break;
      uVar7 = in(0x57);
      in_RAX = CONCAT71(0x8c7702,uVar7);
      unaff_RBP = plVar12;
      puVar13 = unaff_RDI;
    }
    register0x00000020 = (BADSPACEBASE *)(unaff_RBP[2] + -8);
    *(undefined4 **)(unaff_RBP[2] + -8) = unaff_RSI;
  }
  else {
    plVar12 = (longlong *)0x3c3aa4fc;
    if (in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_2 = param_2 & 0xff;
    *(undefined2 *)((longlong)unaff_RSI + -0x77) = in_FPUStatusWord;
LAB_14d7c4448_3:
    puVar1 = (uint *)(unaff_RBX + 0x2fa21d24);
    *puVar1 = *puVar1 ^ (uint)unaff_RBX;
    uVar2 = *puVar1;
    uVar4 = *(uint *)(in_R11 & 0xffffffff);
    uVar8 = (ulonglong)uVar4;
    *(short *)((longlong)unaff_RDI + 0x6d) = (short)ROUND(in_ST0);
    if ((POPCOUNT(uVar2 & 0xff) & 1U) != 0) {
      bRam75472f93eb93432f = (byte)uVar4 & 0x1d;
      *unaff_RDI = *unaff_RSI;
      pcVar5 = (code *)swi(3);
      (*pcVar5)(param_1,param_2);
      return;
    }
  }
  *(longlong **)((longlong)register0x00000020 + -8) = plVar12;
  *(ulonglong *)(((ulonglong)((longlong)register0x00000020 + -8) & 0xffffffff) - 8) = uVar8 | 0xb7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c44cf FUN_14d7c44cf body=2 status=ok
// SIG undefined FUN_14d7c44cf(void)

void FUN_14d7c44cf(void)

{
  undefined8 *unaff_RBX;
  
                    /* WARNING: Could not recover jumptable at 0x00014d7c44cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*unaff_RBX)();
  return;
}



// FUNCTION 14d7c44d3 FUN_14d7c44d3 body=29 status=ok
// SIG undefined FUN_14d7c44d3(void)

void FUN_14d7c44d3(byte param_1,longlong param_2)

{
  longlong unaff_RDI;
  
  *(char *)(param_2 + -0x17a5ff06) = *(char *)(param_2 + -0x17a5ff06) + -1;
  *(int *)(param_2 + 0x5378a846) = *(int *)(param_2 + 0x5378a846) << (param_1 & 0x1f);
  *(char *)(unaff_RDI + -0x5d) = *(char *)(unaff_RDI + -0x5d) + (char)((ulonglong)param_2 >> 8);
  return;
}



// FUNCTION 14d7c44f4 FUN_14d7c44f4 body=4 status=ok
// SIG undefined FUN_14d7c44f4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c44f4(undefined8 param_1,undefined2 param_2)

{
  in(param_2);
  in(0x87);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c44f8 FUN_14d7c44f8 body=2 status=ok
// SIG undefined FUN_14d7c44f8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c44f8(void)

{
  in(0x87);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c44fc FUN_14d7c44fc body=30 status=ok
// SIG undefined FUN_14d7c44fc(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c44fc(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 *unaff_RDI;
  undefined1 in_PF;
  char in_ZF;
  
  if ((bool)in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (code *)swi(0);
  uVar2 = (*pcVar1)();
  if (param_1 == 1 || in_ZF != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_PF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c4511 FUN_14d7c4511 body=11 status=ok
// SIG undefined FUN_14d7c4511(void)

int FUN_14d7c4511(void)

{
  short in_AX;
  char unaff_BH;
  int unaff_EBP;
  
  *(char *)(longlong)(unaff_EBP + 0x7a) = *(char *)(longlong)(unaff_EBP + 0x7a) + unaff_BH;
  return in_AX + 0x6fc6f35a;
}



// FUNCTION 14d7c451e FUN_14d7c451e body=3 status=ok
// SIG undefined FUN_14d7c451e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c451e(undefined8 param_1,byte *param_2)

{
  char *pcVar1;
  uint *puVar2;
  byte *pbVar3;
  char cVar4;
  longlong lVar5;
  byte bVar6;
  uint *in_RAX;
  undefined1 *unaff_RBX;
  undefined8 *puVar7;
  undefined8 *unaff_RBP;
  longlong unaff_RSI;
  undefined1 *puVar8;
  int *piVar9;
  bool in_ZF;
  bool bVar10;
  char in_SF;
  bool bVar11;
  char in_OF;
  bool bVar12;
  undefined1 *unaff_retaddr;
  
  if (in_OF != in_SF) {
    return;
  }
  piVar9 = (int *)(unaff_retaddr + 1);
  *unaff_retaddr = (char)in_RAX;
  if (!in_ZF) {
    *piVar9 = *piVar9 - (uint)piVar9;
    puVar2 = (uint *)(unaff_retaddr + 0x6f6324cb);
    bVar12 = false;
    *puVar2 = *puVar2 & (uint)piVar9;
    bVar11 = (int)*puVar2 < 0;
    bVar10 = *puVar2 == 0;
    if ((POPCOUNT(*puVar2 & 0xff) & 1U) != 0) {
      (param_2 + -0x4da2af29)[(longlong)in_RAX] =
           (param_2 + -0x4da2af29)[(longlong)in_RAX] + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    while (bVar10 || bVar12 != bVar11) {
      pbVar3 = (byte *)(unaff_RSI + -0x1b3d9dc4);
      bVar6 = (byte)param_1 & 7;
      *pbVar3 = *pbVar3 << bVar6 | *pbVar3 >> 8 - bVar6;
      puVar8 = (undefined1 *)(ulonglong)((uint)piVar9 | *in_RAX);
      *param_2 = *param_2 & (byte)((ulonglong)param_1 >> 8);
      piVar9 = (int *)(puVar8 + 1);
      *puVar8 = (char)in_RAX;
      pcVar1 = unaff_RBX + -0x1b;
      bVar12 = SBORROW1(*pcVar1,-0x6f);
      *pcVar1 = *pcVar1 + 'o';
      bVar11 = *pcVar1 < '\0';
      bVar10 = *pcVar1 == '\0';
    }
    out(0xb,8);
    lVar5 = *(longlong *)((ulonglong)in_RAX & 0xffffffff);
    *unaff_RBX = 8;
    puVar7 = (undefined8 *)(lVar5 + -8);
    *(undefined8 **)(lVar5 + -8) = unaff_RBP;
    cVar4 = '\x1a';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar7 = puVar7 + -1;
      *puVar7 = *unaff_RBP;
      cVar4 = cVar4 + -1;
    } while ('\0' < cVar4);
    *(longlong *)(lVar5 + -0xe0) = lVar5 + -8;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c4522 FUN_14d7c4522 body=3 status=ok
// SIG undefined FUN_14d7c4522(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c4522(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c4526 FUN_14d7c4526 body=7 status=ok
// SIG undefined FUN_14d7c4526(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c4526(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c454a FUN_14d7c454a body=13 status=ok
// SIG undefined FUN_14d7c454a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c454a(undefined8 param_1,uint param_2)

{
  uint unaff_ESI;
  longlong unaff_RDI;
  char in_SF;
  char in_OF;
  
  if (in_OF != in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!CARRY4(param_2,unaff_ESI)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RDI + -0x5e) = *(char *)(unaff_RDI + -0x5e) + (char)(param_2 + unaff_ESI >> 8);
  return;
}



// FUNCTION 14d7c4562 FUN_14d7c4562 body=16 status=ok
// SIG undefined FUN_14d7c4562(void)

/* WARNING: Control flow encountered bad instruction data */

char FUN_14d7c4562(int param_1,int param_2)

{
  char in_AL;
  int unaff_EBX;
  char *unaff_retaddr;
  
  if (unaff_EBX == 0 && param_2 == 0) {
    *unaff_retaddr = in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return in_AL + (char)((uint)(param_1 + param_2) >> 8);
}



// FUNCTION 14d7c4577 FUN_14d7c4577 body=4 status=ok
// SIG undefined FUN_14d7c4577(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c4577(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  uint *puVar2;
  byte *pbVar3;
  char *pcVar4;
  uint uVar5;
  longlong lVar6;
  char cVar8;
  uint in_EAX;
  uint *puVar7;
  byte bVar9;
  byte bVar10;
  undefined6 uVar11;
  byte bVar12;
  undefined1 uVar13;
  undefined6 uVar14;
  undefined1 unaff_BL;
  undefined6 unaff_0000001a;
  undefined8 *puVar15;
  undefined8 *unaff_RBP;
  undefined1 *unaff_RSI;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  int *unaff_retaddr;
  undefined1 auStackX_8 [32];
  
  uVar14 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar13 = (undefined1)((ulonglong)param_2 >> 8);
  bVar12 = (byte)param_2;
  uVar11 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar10 = (byte)((ulonglong)param_1 >> 8);
  out(*unaff_RSI,(short)param_2);
  *(char *)(param_2 + 0xe671cf2) = *(char *)(param_2 + 0xe671cf2) + bVar10;
  cVar8 = (char)((in_EAX & 0xffffff40) >> 8);
  bVar9 = (char)param_1 + cVar8;
  uVar16 = (uint)unaff_retaddr;
  if (bVar9 != 0 && SCARRY1((char)param_1,cVar8) == (char)bVar9 < '\0') {
    uVar16 = uVar16 + 4;
    puVar7 = (uint *)func_0x000174ab28ec();
    *(byte *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) =
         *(char *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) + bVar9;
    *(byte *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) =
         *(char *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) - bVar12;
    goto LAB_14d7c45e3;
  }
  uVar13 = 0;
  puVar7 = (uint *)(ulonglong)
                   (in_EAX & 0xffffff40 ^ *(uint *)(CONCAT62(uVar14,(ushort)bVar12) + 0x1e));
  piVar1 = (int *)(CONCAT62(unaff_0000001a,CONCAT11(0x3e,unaff_BL)) + 0x2b38b64b);
  *piVar1 = *piVar1 + 0x6a74aa5f;
  *unaff_retaddr = *unaff_retaddr - uVar16;
  puVar2 = (uint *)((longlong)unaff_retaddr + 0x6f6324ca);
  bVar19 = false;
  *puVar2 = *puVar2 & uVar16;
  bVar18 = (int)*puVar2 < 0;
  bVar17 = *puVar2 == 0;
  if ((POPCOUNT(*puVar2 & 0xff) & 1U) != 0) {
    pcVar4 = (char *)(CONCAT62(uVar14,(ushort)bVar12) + -0x4da2af29 + (longlong)puVar7);
    *pcVar4 = *pcVar4 + bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while( true ) {
    uVar16 = (uint)unaff_retaddr;
    if (!bVar17 && bVar19 == bVar18) break;
LAB_14d7c45e3:
    pbVar3 = (byte *)((ulonglong)((uint)auStackX_8 ^ 0x55e0c14a) - 0x1b3d9dc4);
    *pbVar3 = *pbVar3 << (bVar9 & 7) | *pbVar3 >> 8 - (bVar9 & 7);
    uVar5 = *puVar7;
    *(byte *)CONCAT62(uVar14,CONCAT11(uVar13,bVar12)) =
         *(byte *)CONCAT62(uVar14,CONCAT11(uVar13,bVar12)) & bVar10;
    unaff_retaddr = (int *)((undefined1 *)(ulonglong)(uVar16 | uVar5) + 1);
    *(undefined1 *)(ulonglong)(uVar16 | uVar5) = (char)puVar7;
    pcVar4 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(0x3e,unaff_BL)) + -0x1b);
    bVar19 = SBORROW1(*pcVar4,-0x6f);
    *pcVar4 = *pcVar4 + 'o';
    bVar18 = *pcVar4 < '\0';
    bVar17 = *pcVar4 == '\0';
  }
  out(0xb,(char)auStackX_8);
  lVar6 = *(longlong *)((ulonglong)puVar7 & 0xffffffff);
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(0x3e,unaff_BL)) = (char)auStackX_8;
  puVar15 = (undefined8 *)(lVar6 + -8);
  *(undefined8 **)(lVar6 + -8) = unaff_RBP;
  cVar8 = '\x1a';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar15 = puVar15 + -1;
    *puVar15 = *unaff_RBP;
    cVar8 = cVar8 + -1;
  } while ('\0' < cVar8);
  *(longlong *)(lVar6 + -0xe0) = lVar6 + -8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c4588 FUN_14d7c4588 body=9 status=ok
// SIG undefined FUN_14d7c4588(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c4588(undefined8 param_1,undefined8 param_2)

{
  uint *puVar1;
  byte *pbVar2;
  char *pcVar3;
  uint uVar4;
  longlong lVar5;
  char cVar7;
  uint in_EAX;
  uint *puVar6;
  byte bVar8;
  byte bVar9;
  undefined6 uVar10;
  byte bVar11;
  undefined1 uVar12;
  undefined6 uVar13;
  undefined1 *unaff_RBX;
  undefined8 *puVar14;
  undefined8 *unaff_RBP;
  uint unaff_ESI;
  uint uVar15;
  int *unaff_RDI;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  
  uVar13 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar12 = (undefined1)((ulonglong)param_2 >> 8);
  bVar11 = (byte)param_2;
  uVar10 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar9 = (byte)((ulonglong)param_1 >> 8);
  cVar7 = (char)(in_EAX >> 8);
  bVar8 = (char)param_1 + cVar7;
  uVar15 = (uint)unaff_RDI;
  if (bVar8 != 0 && SCARRY1((char)param_1,cVar7) == (char)bVar8 < '\0') {
    uVar15 = uVar15 + 4;
    puVar6 = (uint *)func_0x000174ab28ec();
    *(byte *)CONCAT62(uVar10,CONCAT11(bVar9,bVar8)) =
         *(char *)CONCAT62(uVar10,CONCAT11(bVar9,bVar8)) + bVar8;
    *(byte *)CONCAT62(uVar10,CONCAT11(bVar9,bVar8)) =
         *(char *)CONCAT62(uVar10,CONCAT11(bVar9,bVar8)) - bVar11;
    goto LAB_14d7c45e3;
  }
  uVar12 = 0;
  puVar6 = (uint *)(ulonglong)(in_EAX ^ *(uint *)(CONCAT62(uVar13,(ushort)bVar11) + 0x1e));
  *(int *)(unaff_RBX + 0x2b38b64b) = *(int *)(unaff_RBX + 0x2b38b64b) + 0x6a74aa5f;
  *unaff_RDI = *unaff_RDI - uVar15;
  puVar1 = (uint *)((longlong)unaff_RDI + 0x6f6324ca);
  bVar18 = false;
  *puVar1 = *puVar1 & uVar15;
  bVar17 = (int)*puVar1 < 0;
  bVar16 = *puVar1 == 0;
  if ((POPCOUNT(*puVar1 & 0xff) & 1U) != 0) {
    pcVar3 = (char *)(CONCAT62(uVar13,(ushort)bVar11) + -0x4da2af29 + (longlong)puVar6);
    *pcVar3 = *pcVar3 + bVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while (uVar15 = (uint)unaff_RDI, bVar16 || bVar18 != bVar17) {
LAB_14d7c45e3:
    pbVar2 = (byte *)((ulonglong)(unaff_ESI ^ (uint)&stack0x00000000) - 0x1b3d9dc4);
    *pbVar2 = *pbVar2 << (bVar8 & 7) | *pbVar2 >> 8 - (bVar8 & 7);
    uVar4 = *puVar6;
    *(byte *)CONCAT62(uVar13,CONCAT11(uVar12,bVar11)) =
         *(byte *)CONCAT62(uVar13,CONCAT11(uVar12,bVar11)) & bVar9;
    unaff_RDI = (int *)((undefined1 *)(ulonglong)(uVar15 | uVar4) + 1);
    *(undefined1 *)(ulonglong)(uVar15 | uVar4) = (char)puVar6;
    pcVar3 = unaff_RBX + -0x1b;
    bVar18 = SBORROW1(*pcVar3,-0x6f);
    *pcVar3 = *pcVar3 + 'o';
    bVar17 = *pcVar3 < '\0';
    bVar16 = *pcVar3 == '\0';
  }
  out(0xb,0);
  lVar5 = *(longlong *)((ulonglong)puVar6 & 0xffffffff);
  *unaff_RBX = 0;
  puVar14 = (undefined8 *)(lVar5 + -8);
  *(undefined8 **)(lVar5 + -8) = unaff_RBP;
  cVar7 = '\x1a';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar14 = puVar14 + -1;
    *puVar14 = *unaff_RBP;
    cVar7 = cVar7 + -1;
  } while ('\0' < cVar7);
  *(longlong *)(lVar5 + -0xe0) = lVar5 + -8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c4591 FUN_14d7c4591 body=3 status=ok
// SIG undefined FUN_14d7c4591(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c4591(undefined8 param_1,byte *param_2)

{
  char *pcVar1;
  uint *puVar2;
  byte *pbVar3;
  char cVar4;
  longlong lVar5;
  byte bVar6;
  uint in_EAX;
  uint uVar7;
  undefined1 *unaff_RBX;
  undefined8 *puVar8;
  undefined8 *unaff_RBP;
  longlong unaff_RSI;
  int *unaff_RDI;
  undefined1 *puVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  
  uVar7 = in_EAX ^ *(uint *)(param_2 + 0x1e);
  *(int *)(unaff_RBX + 0x2b38b64b) = *(int *)(unaff_RBX + 0x2b38b64b) + 0x6a74aa5f;
  *unaff_RDI = *unaff_RDI - (uint)unaff_RDI;
  puVar2 = (uint *)((longlong)unaff_RDI + 0x6f6324ca);
  bVar12 = false;
  *puVar2 = *puVar2 & (uint)unaff_RDI;
  bVar11 = (int)*puVar2 < 0;
  bVar10 = *puVar2 == 0;
  if ((POPCOUNT(*puVar2 & 0xff) & 1U) != 0) {
    (param_2 + -0x4da2af29)[(longlong)(ulonglong)uVar7] =
         (param_2 + -0x4da2af29)[(longlong)(ulonglong)uVar7] + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while (bVar10 || bVar12 != bVar11) {
    pbVar3 = (byte *)(unaff_RSI + -0x1b3d9dc4);
    bVar6 = (byte)param_1 & 7;
    *pbVar3 = *pbVar3 << bVar6 | *pbVar3 >> 8 - bVar6;
    puVar9 = (undefined1 *)(ulonglong)((uint)unaff_RDI | *(uint *)(ulonglong)uVar7);
    *param_2 = *param_2 & (byte)((ulonglong)param_1 >> 8);
    unaff_RDI = (int *)(puVar9 + 1);
    *puVar9 = (char)uVar7;
    pcVar1 = unaff_RBX + -0x1b;
    bVar12 = SBORROW1(*pcVar1,-0x6f);
    *pcVar1 = *pcVar1 + 'o';
    bVar11 = *pcVar1 < '\0';
    bVar10 = *pcVar1 == '\0';
  }
  out(0xb,0);
  lVar5 = *(longlong *)(ulonglong)uVar7;
  *unaff_RBX = 0;
  puVar8 = (undefined8 *)(lVar5 + -8);
  *(undefined8 **)(lVar5 + -8) = unaff_RBP;
  cVar4 = '\x1a';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar8 = puVar8 + -1;
    *puVar8 = *unaff_RBP;
    cVar4 = cVar4 + -1;
  } while ('\0' < cVar4);
  *(longlong *)(lVar5 + -0xe0) = lVar5 + -8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c4599 FUN_14d7c4599 body=16 status=ok
// SIG undefined FUN_14d7c4599(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c4599(undefined8 param_1,byte *param_2)

{
  char *pcVar1;
  uint *puVar2;
  byte *pbVar3;
  char cVar4;
  longlong lVar5;
  byte bVar6;
  uint *in_RAX;
  int unaff_EBX;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *unaff_RBP;
  longlong unaff_RSI;
  int *unaff_RDI;
  undefined1 *puVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  
  uVar7 = unaff_EBX - *(int *)((longlong)unaff_RDI + -0x56);
  if (uVar7 != 0) {
    *unaff_RDI = *unaff_RDI - (uint)unaff_RDI;
    puVar2 = (uint *)((longlong)unaff_RDI + 0x6f6324ca);
    bVar12 = false;
    *puVar2 = *puVar2 & (uint)unaff_RDI;
    bVar11 = (int)*puVar2 < 0;
    bVar10 = *puVar2 == 0;
    if ((POPCOUNT(*puVar2 & 0xff) & 1U) != 0) {
      (param_2 + -0x4da2af29)[(longlong)in_RAX] =
           (param_2 + -0x4da2af29)[(longlong)in_RAX] + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    while (bVar10 || bVar12 != bVar11) {
      pbVar3 = (byte *)(unaff_RSI + -0x1b3d9dc4);
      bVar6 = (byte)param_1 & 7;
      *pbVar3 = *pbVar3 << bVar6 | *pbVar3 >> 8 - bVar6;
      puVar9 = (undefined1 *)(ulonglong)((uint)unaff_RDI | *in_RAX);
      *param_2 = *param_2 & (byte)((ulonglong)param_1 >> 8);
      unaff_RDI = (int *)(puVar9 + 1);
      *puVar9 = (char)in_RAX;
      pcVar1 = (undefined1 *)(ulonglong)uVar7 + -0x1b;
      bVar12 = SBORROW1(*pcVar1,-0x6f);
      *pcVar1 = *pcVar1 + 'o';
      bVar11 = *pcVar1 < '\0';
      bVar10 = *pcVar1 == '\0';
    }
    out(0xb,0);
    lVar5 = *(longlong *)((ulonglong)in_RAX & 0xffffffff);
    *(undefined1 *)(ulonglong)uVar7 = 0;
    puVar8 = (undefined8 *)(lVar5 + -8);
    *(undefined8 **)(lVar5 + -8) = unaff_RBP;
    cVar4 = '\x1a';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar8 = puVar8 + -1;
      *puVar8 = *unaff_RBP;
      cVar4 = cVar4 + -1;
    } while ('\0' < cVar4);
    *(longlong *)(lVar5 + -0xe0) = lVar5 + -8;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c45aa FUN_14d7c45aa body=7 status=ok
// SIG undefined FUN_14d7c45aa(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c45aa(void)

{
  uint in_EAX;
  
  *(ulonglong *)((ulonglong)in_EAX - 8) = (ulonglong)&stack0x00000000 & 0xffffffff;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c45b6 FUN_14d7c45b6 body=8 status=ok
// SIG undefined FUN_14d7c45b6(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c45d8) overlaps instruction at (ram,0x00014d7c45d7)
    */

void FUN_14d7c45b6(undefined8 param_1,undefined2 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  longlong lVar4;
  undefined4 in_EAX;
  uint *puVar5;
  byte bVar6;
  byte bVar7;
  undefined6 uVar8;
  byte *pbVar9;
  char unaff_BL;
  char cVar10;
  undefined7 unaff_00000019;
  undefined8 *puVar11;
  undefined8 *unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *puVar12;
  undefined4 *unaff_RDI;
  undefined4 *puVar13;
  undefined1 *puVar14;
  
  uVar8 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar7 = (byte)((ulonglong)param_1 >> 8);
  bVar6 = (byte)param_1;
  cVar10 = unaff_BL + unaff_RSI[-0x3389a708];
  puVar12 = unaff_RSI;
  if ((POPCOUNT(cVar10) & 1U) == 0) {
    puVar12 = unaff_RSI + 1;
    out(*unaff_RSI,param_2);
    unaff_RDI = unaff_RDI + 1;
  }
  puVar13 = unaff_RDI + 1;
  *unaff_RDI = in_EAX;
  pbVar9 = &DAT_eb68feb3;
  *(int *)CONCAT71(unaff_00000019,cVar10) = *(int *)CONCAT71(unaff_00000019,cVar10) + (int)puVar12;
  *(uint *)(puVar12 + -0x51) = *(uint *)(puVar12 + -0x51) ^ (uint)unaff_RBP;
  puVar5 = (uint *)func_0x000174ab28ec();
  *(byte *)CONCAT62(uVar8,CONCAT11(bVar7,bVar6)) =
       *(char *)CONCAT62(uVar8,CONCAT11(bVar7,bVar6)) + bVar6;
  *(char *)CONCAT62(uVar8,CONCAT11(bVar7,bVar6)) =
       *(char *)CONCAT62(uVar8,CONCAT11(bVar7,bVar6)) - (char)pbVar9;
  do {
    pbVar2 = puVar12 + -0x1b3d9dc4;
    *pbVar2 = *pbVar2 << (bVar6 & 7) | *pbVar2 >> 8 - (bVar6 & 7);
    puVar14 = (undefined1 *)(ulonglong)((uint)puVar13 | *puVar5);
    *pbVar9 = *pbVar9 & bVar7;
    puVar13 = (undefined4 *)(puVar14 + 1);
    *puVar14 = (char)puVar5;
    pcVar1 = (char *)(CONCAT71(unaff_00000019,cVar10) + -0x1b);
    cVar3 = *pcVar1;
    *pcVar1 = *pcVar1 + 'o';
  } while (*pcVar1 == '\0' || SBORROW1(cVar3,-0x6f) != *pcVar1 < '\0');
  out(0xb,0x10);
  lVar4 = *(longlong *)((ulonglong)puVar5 & 0xffffffff);
  *(undefined1 *)CONCAT71(unaff_00000019,cVar10) = 0x10;
  puVar11 = (undefined8 *)(lVar4 + -8);
  *(undefined8 **)(lVar4 + -8) = unaff_RBP;
  cVar10 = '\x1a';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar11 = puVar11 + -1;
    *puVar11 = *unaff_RBP;
    cVar10 = cVar10 + -1;
  } while ('\0' < cVar10);
  *(longlong *)(lVar4 + -0xe0) = lVar4 + -8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c45be FUN_14d7c45be body=47 status=ok
// SIG undefined FUN_14d7c45be(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c45be(undefined8 param_1)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  longlong lVar4;
  undefined4 in_EAX;
  uint *puVar5;
  byte bVar6;
  byte bVar7;
  undefined6 uVar8;
  byte *pbVar9;
  int *unaff_RBX;
  undefined8 *puVar10;
  undefined8 *unaff_RBP;
  int unaff_ESI;
  undefined4 unaff_00000034;
  undefined4 *unaff_RDI;
  undefined4 *puVar11;
  undefined1 *puVar12;
  
  uVar8 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar7 = (byte)((ulonglong)param_1 >> 8);
  bVar6 = (byte)param_1;
  puVar11 = unaff_RDI + 1;
  *unaff_RDI = in_EAX;
  pbVar9 = &DAT_eb68feb3;
  *unaff_RBX = *unaff_RBX + unaff_ESI;
  puVar5 = (uint *)(CONCAT44(unaff_00000034,unaff_ESI) + -0x51);
  *puVar5 = *puVar5 ^ (uint)unaff_RBP;
  puVar5 = (uint *)func_0x000174ab28ec();
  *(byte *)CONCAT62(uVar8,CONCAT11(bVar7,bVar6)) =
       *(char *)CONCAT62(uVar8,CONCAT11(bVar7,bVar6)) + bVar6;
  *(char *)CONCAT62(uVar8,CONCAT11(bVar7,bVar6)) =
       *(char *)CONCAT62(uVar8,CONCAT11(bVar7,bVar6)) - (char)pbVar9;
  do {
    pbVar2 = (byte *)(CONCAT44(unaff_00000034,unaff_ESI) + -0x1b3d9dc4);
    *pbVar2 = *pbVar2 << (bVar6 & 7) | *pbVar2 >> 8 - (bVar6 & 7);
    puVar12 = (undefined1 *)(ulonglong)((uint)puVar11 | *puVar5);
    *pbVar9 = *pbVar9 & bVar7;
    puVar11 = (undefined4 *)(puVar12 + 1);
    *puVar12 = (char)puVar5;
    pcVar1 = (char *)((longlong)unaff_RBX + -0x1b);
    cVar3 = *pcVar1;
    *pcVar1 = *pcVar1 + 'o';
  } while (*pcVar1 == '\0' || SBORROW1(cVar3,-0x6f) != *pcVar1 < '\0');
  out(0xb,0x10);
  lVar4 = *(longlong *)((ulonglong)puVar5 & 0xffffffff);
  *(undefined1 *)unaff_RBX = 0x10;
  puVar10 = (undefined8 *)(lVar4 + -8);
  *(undefined8 **)(lVar4 + -8) = unaff_RBP;
  cVar3 = '\x1a';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar10 = puVar10 + -1;
    *puVar10 = *unaff_RBP;
    cVar3 = cVar3 + -1;
  } while ('\0' < cVar3);
  *(longlong *)(lVar4 + -0xe0) = lVar4 + -8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c45ef FUN_14d7c45ef body=25 status=ok
// SIG undefined FUN_14d7c45ef(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c45f3) overlaps instruction at (ram,0x00014d7c45ef)
    */

void FUN_14d7c45ef(undefined8 param_1,byte *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  uint *puVar3;
  char cVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  undefined1 *unaff_RBX;
  undefined8 *puVar8;
  undefined8 *unaff_RBP;
  longlong unaff_RSI;
  undefined1 *puVar9;
  undefined1 *unaff_RDI;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  
  puVar3 = (uint *)(unaff_RDI + -0x7f55e8bd);
  bVar12 = false;
  *puVar3 = *puVar3 ^ 0x6b;
  bVar11 = (int)*puVar3 < 0;
  bVar10 = *puVar3 == 0;
  uVar7 = in(0x91);
  while (bVar10 || bVar12 != bVar11) {
    pbVar2 = (byte *)(unaff_RSI + -0x1b3d9dc4);
    bVar6 = (byte)param_1 & 7;
    *pbVar2 = *pbVar2 << bVar6 | *pbVar2 >> 8 - bVar6;
    puVar9 = (undefined1 *)(ulonglong)((uint)unaff_RDI | *(uint *)(ulonglong)uVar7);
    *param_2 = *param_2 & (byte)((ulonglong)param_1 >> 8);
    unaff_RDI = puVar9 + 1;
    *puVar9 = (char)uVar7;
    pcVar1 = unaff_RBX + -0x1b;
    bVar12 = SBORROW1(*pcVar1,-0x6f);
    *pcVar1 = *pcVar1 + 'o';
    bVar11 = *pcVar1 < '\0';
    bVar10 = *pcVar1 == '\0';
  }
  out(0xb,0);
  lVar5 = *(longlong *)(ulonglong)uVar7;
  *unaff_RBX = 0;
  puVar8 = (undefined8 *)(lVar5 + -8);
  *(undefined8 **)(lVar5 + -8) = unaff_RBP;
  cVar4 = '\x1a';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar8 = puVar8 + -1;
    *puVar8 = *unaff_RBP;
    cVar4 = cVar4 + -1;
  } while ('\0' < cVar4);
  *(longlong *)(lVar5 + -0xe0) = lVar5 + -8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c4614 FUN_14d7c4614 body=3 status=ok
// SIG undefined FUN_14d7c4614(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c4614(void)

{
  undefined4 in_EAX;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c461d FUN_14d7c461d body=6 status=ok
// SIG undefined FUN_14d7c461d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c461d(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c462e FUN_14d7c462e body=8 status=ok
// SIG undefined FUN_14d7c462e(void)

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_14d7c462e(byte param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined8 in_RAX;
  byte unaff_BH;
  longlong unaff_RBP;
  uint *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(0x45,(char)in_RAX));
  *unaff_RSI = *unaff_RSI | 0xffffffc2;
  uRam0000000020a11f9b = 0x20a11fa3;
  uVar6 = in(0xa4);
  uVar3 = *(uint *)(unaff_RBP + -0x53);
  uVar5 = (ulonglong)uVar3 << 0x21 - (param_1 & 0x1f);
  *(uint *)(unaff_RBP + -0x53) = uVar3 >> (param_1 & 0x1f) | (uint)uVar5;
  uVar3 = (uint)((uVar5 & 0x100000000) != 0);
  uVar4 = 0x20a11f9b - (int)unaff_RSI;
  if (uVar4 == uVar3 ||
      (SBORROW4(0x20a11f9b,(int)unaff_RSI) != SBORROW4(uVar4,uVar3)) != (int)(uVar4 - uVar3) < 0) {
    return uVar6;
  }
  *(byte *)(unaff_RBP + -0x25) = *(byte *)(unaff_RBP + -0x25) & unaff_BH;
  piVar1 = (int *)(param_2 + 0x1ec3d848);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + (int)param_2;
  if (!SCARRY4(iVar2,(int)param_2)) {
    *(byte *)(unaff_RSI + 8) = (byte)unaff_RSI[8] >> 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c463a FUN_14d7c463a body=38 status=ok
// SIG undefined FUN_14d7c463a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c463a(byte param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  byte unaff_BH;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  *(byte *)(unaff_RBP + -0x5c) = *(byte *)(unaff_RBP + -0x5c) & (byte)param_2;
  uVar3 = *(uint *)(unaff_RBP + -0x53);
  uVar5 = (ulonglong)uVar3 << 0x21 - (param_1 & 0x1f);
  *(uint *)(unaff_RBP + -0x53) = uVar3 >> (param_1 & 0x1f) | (uint)uVar5;
  uVar3 = (uint)((uVar5 & 0x100000000) != 0);
  uVar4 = (int)&stack0x00000000 - (int)unaff_RSI;
  if (uVar4 == uVar3 ||
      (SBORROW4((int)&stack0x00000000,(int)unaff_RSI) != SBORROW4(uVar4,uVar3)) !=
      (int)(uVar4 - uVar3) < 0) {
    return;
  }
  *(byte *)(unaff_RBP + -0x25) = *(byte *)(unaff_RBP + -0x25) & unaff_BH;
  piVar1 = (int *)(param_2 + 0x1ec3d848);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + (int)param_2;
  if (!SCARRY4(iVar2,(int)param_2)) {
    *(byte *)(unaff_RSI + 0x20) = *(byte *)(unaff_RSI + 0x20) >> 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c4662 FUN_14d7c4662 body=28 status=ok
// SIG undefined FUN_14d7c4662(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c4662(undefined8 param_1,ulonglong param_2)

{
  code *pcVar1;
  undefined8 in_RAX;
  char *pcVar2;
  byte *pbVar3;
  char cVar4;
  int unaff_EBP;
  undefined4 *unaff_RSI;
  char *unaff_RDI;
  
  out(0x80,(int)in_RAX);
  pcVar2 = (char *)CONCAT44((int)((ulonglong)in_RAX >> 0x20),*unaff_RSI);
  *pcVar2 = *pcVar2 >> 0x10;
  pcVar1 = (code *)swi(0);
  (*pcVar1)();
  pbVar3 = (byte *)(param_2 & 0xffffffff);
  *(int *)(unaff_RDI + -10) = *(int *)(unaff_RDI + -10) + unaff_EBP;
  cVar4 = (char)((ulonglong)param_1 >> 8) + *unaff_RDI;
  if (CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(cVar4,(char)param_1)) == 1 ||
      cVar4 == '\0') {
    *pbVar3 = *pbVar3 & (byte)pbVar3;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c4680 FUN_14d7c4680 body=12 status=ok
// SIG undefined FUN_14d7c4680(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c4680(void)

{
  byte in_AL;
  undefined4 *unaff_RSI;
  byte *unaff_RDI;
  float10 in_ST0;
  
  if ((in_AL & 0xe9) == 0) {
    *(short *)unaff_RDI = (short)in_ST0;
    *(undefined8 *)((ulonglong)((uint)&stack0x00000000 ^ uRam00000000cac08411) - 8) = 0x18476f39;
    *unaff_RDI = in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c4688 FUN_14d7c4688 body=9 status=ok
// SIG undefined FUN_14d7c4688(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c4688(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  char in_AL;
  byte unaff_BH;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  if (in_AL < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)(unaff_RBP + -0x25) = *(byte *)(unaff_RBP + -0x25) & unaff_BH;
  piVar1 = (int *)(param_2 + 0x1ec3d848);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + (int)param_2;
  if (!SCARRY4(iVar2,(int)param_2)) {
    *(byte *)(unaff_RSI + 0x20) = *(byte *)(unaff_RSI + 0x20) >> 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c469c FUN_14d7c469c body=5 status=ok
// SIG undefined FUN_14d7c469c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c469c(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong unaff_RSI;
  bool in_CF;
  
  if (!in_CF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar1 = (int *)(param_2 + 0x1ec3d848);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + (int)param_2;
  if (!SCARRY4(iVar2,(int)param_2)) {
    *(byte *)(unaff_RSI + 0x20) = *(byte *)(unaff_RSI + 0x20) >> 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c46ac FUN_14d7c46ac body=21 status=ok
// SIG undefined FUN_14d7c46ac(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c46ad) overlaps instruction at (ram,0x00014d7c46ac)
    */

void FUN_14d7c46ac(void)

{
  uint in_EAX;
  byte *unaff_RBX;
  longlong unaff_RSI;
  bool in_CF;
  bool in_SF;
  
  if (in_CF) {
    while (*(int *)unaff_RBX = *(int *)unaff_RBX + 1, 0xe3721588 < in_EAX) {
      in_EAX = in(8);
    }
    *unaff_RBX = *unaff_RBX | 0x79;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_SF) {
    *(short *)(unaff_RSI + 4) = *(short *)(unaff_RSI + 4) + (short)unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c46e9 FUN_14d7c46e9 body=11 status=ok
// SIG undefined FUN_14d7c46e9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c46e9(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c46f9 FUN_14d7c46f9 body=2 status=ok
// SIG undefined FUN_14d7c46f9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c46f9(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  longlong in_RAX;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong unaff_R14;
  byte in_CF;
  
  if (CARRY4((uint)&stack0x00000000,*(uint *)(unaff_RBX + -0x56b7c000)) ||
      CARRY4((uint)&stack0x00000000 + *(uint *)(unaff_RBX + -0x56b7c000),(uint)in_CF)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar1 = (byte *)(param_1 + -0x34d9b6cd + in_RAX * 4);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 >> 7;
  if (param_1 == 1) {
    *(short *)(unaff_RSI + 4) = *(short *)(unaff_RSI + 4) + (short)unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bVar2 >> 6 & 1) == 0) {
    *(longlong *)(unaff_R13 + -0x72ffe6e9) = *(longlong *)(unaff_R13 + -0x72ffe6e9) - unaff_R12;
    DAT_abc3ac600503cfb9 = (undefined1)in_RAX;
    *(char *)(param_4 + unaff_R14) = -*(char *)(param_4 + unaff_R14);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



// FUNCTION 14d7c4702 FUN_14d7c4702 body=5 status=ok
// SIG undefined FUN_14d7c4702(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c4702(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c470a FUN_14d7c470a body=1 status=ok
// SIG undefined FUN_14d7c470a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c470a(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  code *pcVar1;
  undefined1 in_AL;
  uint *unaff_RSI;
  uint *unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong unaff_R14;
  
  if (param_1 == 1) {
    *(short *)(unaff_RSI + 2) = (short)unaff_RSI[2] + (short)unaff_RSI + 4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*unaff_RDI <= *unaff_RSI) {
    *(longlong *)(unaff_R13 + -0x72ffe6e9) = *(longlong *)(unaff_R13 + -0x72ffe6e9) - unaff_R12;
    DAT_abc3ac600503cfb9 = in_AL;
    *(char *)(param_4 + unaff_R14) = -*(char *)(param_4 + unaff_R14);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7c4712 FUN_14d7c4712 body=6 status=ok
// SIG undefined FUN_14d7c4712(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c4712(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c4726 FUN_14d7c4726 body=33 status=ok
// SIG undefined FUN_14d7c4726(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c4726(longlong param_1)

{
  uint in_EAX;
  longlong unaff_RDI;
  
  *(int *)(param_1 + 0x2e3f296b) = *(int *)(param_1 + 0x2e3f296b) + (int)&stack0x00000000;
  *(ulonglong *)((ulonglong)in_EAX - 8) = (ulonglong)in_EAX;
  *(undefined1 *)(unaff_RDI + 0x2e56d016) = 0xac;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c474f FUN_14d7c474f body=13 status=ok
// SIG undefined FUN_14d7c474f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c474f(undefined8 param_1,undefined2 param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint in_EAX;
  undefined4 unaff_EBX;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  DAT_ecc57af0f8f5970 = (undefined1)unaff_EBX;
  out(param_2,DAT_ecc57af0f8f5970);
  pbVar1 = (byte *)(unaff_RBP + 0x607d5a25);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + (byte)in_EAX;
  *(char *)((ulonglong)in_EAX + 0x4e) =
       (*(char *)((ulonglong)in_EAX + 0x4e) - (char)((uint)unaff_EBX >> 8)) -
       CARRY1(bVar2,(byte)in_EAX);
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c475c FUN_14d7c475c body=21 status=ok
// SIG undefined FUN_14d7c475c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c475c(void)

{
  undefined1 in_AL;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  DAT_ecc57af0f8f5970 = in_AL;
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c477c FUN_14d7c477c body=5 status=ok
// SIG undefined FUN_14d7c477c(void)

void FUN_14d7c477c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7c4784 FUN_14d7c4784 body=3 status=ok
// SIG undefined FUN_14d7c4784(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c4784(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined1 in_AL;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong unaff_R14;
  
  *(int *)(param_2 + 0x2f) = *(int *)(param_2 + 0x2f) << 1;
  *(longlong *)(unaff_R13 + -0x72ffe6e9) = *(longlong *)(unaff_R13 + -0x72ffe6e9) - unaff_R12;
  DAT_abc3ac600503cfb9 = in_AL;
  *(char *)(param_4 + unaff_R14) = -*(char *)(param_4 + unaff_R14);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c4788 FUN_14d7c4788 body=23 status=ok
// SIG undefined FUN_14d7c4788(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c4788(void)

{
  undefined1 in_AL;
  int unaff_ESP;
  longlong unaff_RBP;
  longlong in_R9;
  longlong unaff_R14;
  
  *(int *)(unaff_RBP + -0x72ffe6e9) = *(int *)(unaff_RBP + -0x72ffe6e9) - unaff_ESP;
  DAT_abc3ac600503cfb9 = in_AL;
  *(char *)(in_R9 + unaff_R14) = -*(char *)(in_R9 + unaff_R14);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c47a1 FUN_14d7c47a1 body=5 status=ok
// SIG undefined FUN_14d7c47a1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c47a1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c47a9 thunk_EXT_FUN_4bf67d96 body=7 status=ok
// SIG undefined thunk_EXT_FUN_4bf67d96(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_4bf67d96(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c47bd FUN_14d7c47bd body=1 status=ok
// SIG undefined FUN_14d7c47bd(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c479f) */

void FUN_14d7c47bd(undefined8 param_1,undefined2 param_2)

{
  in(param_2);
  cRam000000019a92ded4 = cRam000000019a92ded4 + cRamdd6227ff82c6a04d;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c47c1 FUN_14d7c47c1 body=8 status=ok
// SIG undefined FUN_14d7c47c1(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c479f) */

void FUN_14d7c47c1(undefined8 param_1,longlong param_2)

{
  char in_AL;
  
  *(undefined1 *)(param_2 + -0x229dd801) = 0xb2;
  cRam000000019a92ded4 = cRam000000019a92ded4 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c47ca FUN_14d7c47ca body=26 status=ok
// SIG undefined FUN_14d7c47ca(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c479f) */

void FUN_14d7c47ca(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c47e7 FUN_14d7c47e7 body=6 status=ok
// SIG undefined FUN_14d7c47e7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c47e7(undefined8 param_1,longlong param_2)

{
  int unaff_EDI;
  
  *(int *)(param_2 + 0x41981a05) = *(int *)(param_2 + 0x41981a05) + unaff_EDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c47f1 FUN_14d7c47f1 body=10 status=ok
// SIG undefined FUN_14d7c47f1(void)

void FUN_14d7c47f1(void)

{
  code *pcVar1;
  undefined1 in_AL;
  
  out(0xae,in_AL);
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7c4802 FUN_14d7c4802 body=2 status=ok
// SIG undefined FUN_14d7c4802(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c4837) overlaps instruction at (ram,0x00014d7c4836)
    */

void FUN_14d7c4802(longlong param_1,code *param_2)

{
  char *pcVar1;
  char cVar2;
  undefined1 uVar3;
  char in_AL;
  uint uVar4;
  undefined8 uVar5;
  code unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  ulonglong uVar7;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  byte unaff_R13B;
  float10 in_ST0;
  ulonglong uVar6;
  
  if ((POPCOUNT(in_AL >> 1) & 1U) == 0) {
    uVar7 = (ulonglong)uRamd9c52b4a0ec900e7;
    *(longlong *)(uVar7 - 8) = unaff_RBP;
    uVar4 = (uint)*(undefined8 *)(uVar7 - 8);
  }
  else {
    param_2[-0x23443f41] = unaff_BL;
    uVar5 = (*param_2)();
    pcVar1 = (char *)(param_1 + -0x6fb365ba);
    *pcVar1 = *pcVar1 + (byte)param_1;
    cVar2 = *pcVar1;
    param_2 = (code *)(CONCAT71((int7)((ulonglong)uVar5 >> 8),(byte)uVar5 ^ (byte)param_1) &
                      0xffffffff);
    *unaff_RDI = *unaff_RSI;
    uVar4 = *(int *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x34b73183 +
                    unaff_RBP * 2) * -0x10;
    uVar6 = (ulonglong)uVar4;
    param_1 = param_1 + -1;
    unaff_RSI = unaff_RSI + 1;
    unaff_RDI = unaff_RDI + 1;
    if (param_1 != 0 && cVar2 != '\0') goto LAB_14d7c4843;
  }
  uVar6 = (ulonglong)param_2 & 0xffffffff;
  *(char *)(param_1 + 0x5a76f609) =
       (*(char *)(param_1 + 0x5a76f609) - unaff_BH) - CARRY1(unaff_R13B,unaff_R13B);
  pcVar1 = (char *)(uVar6 + 0x589f9f55 + (longlong)unaff_RDI * 8);
  *pcVar1 = *pcVar1 + (char)uVar4;
  LOCK();
  uVar3 = *(undefined1 *)(unaff_RSI + 0x1bbd4db6);
  *(char *)(unaff_RSI + 0x1bbd4db6) = (char)(uVar4 >> 8);
  param_2 = (code *)(ulonglong)CONCAT22((short)(uVar4 >> 0x10),CONCAT11(uVar3,(char)uVar4));
  UNLOCK();
LAB_14d7c4843:
  *(short *)CONCAT71((int7)((ulonglong)param_2 >> 8),(char)param_2 + (char)(uVar6 >> 8)) =
       (short)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c4807 FUN_14d7c4807 body=1 status=ok
// SIG undefined FUN_14d7c4807(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c4807(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c4811 FUN_14d7c4811 body=5 status=ok
// SIG undefined FUN_14d7c4811(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c4811(byte param_1,char *param_2)

{
  char cVar1;
  uint *in_RAX;
  byte in_CF;
  
  param_1 = param_1 & 0x1f;
  cVar1 = *param_2;
  *param_2 = *param_2 << param_1;
  *in_RAX = *in_RAX << 9 |
            (uint)(ushort)(CONCAT14(param_1 == 0 & in_CF |
                                    (param_1 != 0 && (char)(cVar1 << param_1 - 1) < '\0'),*in_RAX)
                          >> 0x18);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c4825 FUN_14d7c4825 body=4 status=ok
// SIG undefined FUN_14d7c4825(void)

void FUN_14d7c4825(void)

{
  code *pcVar1;
  char in_SF;
  char in_OF;
  
  if (in_OF != in_SF) {
    return;
  }
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}


