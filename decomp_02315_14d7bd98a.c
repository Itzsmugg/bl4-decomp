// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14d7bd98a FUN_14d7bd98a body=3 status=ok
// SIG undefined FUN_14d7bd98a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd98a(void)

{
  undefined4 *unaff_RSI;
  
  *unaff_RSI = (int)&stack0xfffffffffffffff8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd98e FUN_14d7bd98e body=1 status=ok
// SIG undefined FUN_14d7bd98e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd98e(void)

{
  longlong unaff_RBP;
  float10 in_ST0;
  
  *(longlong *)(unaff_RBP + 0x1825779c) = (longlong)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd993 FUN_14d7bd993 body=8 status=ok
// SIG undefined FUN_14d7bd993(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd993(undefined8 param_1,longlong param_2)

{
  uint in_EAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined4 unaff_EBP;
  undefined4 *unaff_RSI;
  char *unaff_RDI;
  
  if ((in_EAX ^ 0x8ddda4f9) == 0) {
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) - unaff_BH;
    LOCK();
    *unaff_RSI = unaff_EBP;
    UNLOCK();
    *(char *)(param_2 + 0x23ceaf04) = (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_RDI + (char)((in_EAX ^ 0x8ddda4f9) + 0x92b1ded8 >> 8);
  return;
}



// FUNCTION 14d7bd99b FUN_14d7bd99b body=2 status=ok
// SIG undefined FUN_14d7bd99b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd99b(undefined8 param_1,longlong param_2)

{
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined4 unaff_EBP;
  undefined4 *unaff_RSI;
  char in_CF;
  
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       (*(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) - unaff_BH) - in_CF;
  LOCK();
  *unaff_RSI = unaff_EBP;
  UNLOCK();
  *(char *)(param_2 + 0x23ceaf04) = (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd9a0 FUN_14d7bd9a0 body=6 status=ok
// SIG undefined FUN_14d7bd9a0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd9a0(undefined8 param_1,longlong param_2)

{
  *(char *)(param_2 + 0x23ceaf04) = (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd9ae FUN_14d7bd9ae body=9 status=ok
// SIG undefined FUN_14d7bd9ae(void)

void FUN_14d7bd9ae(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  uint in_EAX;
  char *unaff_RDI;
  
  out(0xda,in_EAX ^ 0xf5);
  *unaff_RDI = *unaff_RDI + '\x01';
  in((short)param_2);
  uVar1 = in((short)param_2);
  *(undefined4 *)unaff_RDI = uVar1;
  unaff_RDI[-0x77] = unaff_RDI[-0x77] + (char)((ulonglong)param_1 >> 8);
  iRam00000000e02db89f = iRam00000000e02db89f + param_2;
  unaff_RDI[4] = unaff_RDI[4] + (char)(in_EAX >> 8);
  return;
}



// FUNCTION 14d7bd9ba FUN_14d7bd9ba body=4 status=ok
// SIG undefined FUN_14d7bd9ba(void)

void FUN_14d7bd9ba(undefined8 param_1,int param_2)

{
  char in_AH;
  longlong unaff_RDI;
  
  *(char *)(unaff_RDI + -0x7a) = *(char *)(unaff_RDI + -0x7a) + (char)((ulonglong)param_1 >> 8);
  iRam00000000e02db89f = iRam00000000e02db89f + param_2;
  *(char *)(unaff_RDI + 1) = *(char *)(unaff_RDI + 1) + in_AH;
  return;
}



// FUNCTION 14d7bd9bf FUN_14d7bd9bf body=13 status=ok
// SIG undefined FUN_14d7bd9bf(void)

void FUN_14d7bd9bf(undefined8 param_1,undefined2 param_2)

{
  int in_EAX;
  undefined4 *unaff_RSI;
  char *unaff_RDI;
  
  out(*unaff_RSI,param_2);
  *unaff_RDI = *unaff_RDI + (char)((uint)(in_EAX + -0x6d4e2128) >> 8);
  return;
}



// FUNCTION 14d7bd9cc FUN_14d7bd9cc body=4 status=ok
// SIG undefined FUN_14d7bd9cc(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bda58) overlaps instruction at (ram,0x00014d7bda57)
    */

void FUN_14d7bd9cc(char *param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  undefined1 uVar5;
  char cVar10;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  byte bVar11;
  byte bVar12;
  char cVar13;
  byte unaff_BL;
  byte bVar14;
  undefined6 unaff_0000001a;
  uint unaff_EBP;
  byte *unaff_RSI;
  byte *unaff_RDI;
  byte *pbVar15;
  char in_AF;
  
  bVar12 = (byte)((ulonglong)param_1 >> 8);
  bVar11 = (byte)param_1;
  cVar10 = *(char *)CONCAT62(unaff_0000001a,CONCAT11(bVar12,unaff_BL));
  cVar13 = (char)((ulonglong)param_2 >> 8);
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(bVar12,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(bVar12,unaff_BL)) + cVar13;
  uVar6 = in((short)param_2);
  if (!SCARRY1(cVar10,cVar13)) {
    if ((int)uVar6 < -0x66f5b8e7) {
      pbVar9 = (byte *)((longlong)*(int *)(ulonglong)uVar6 * 0x1a & 0xffffffff);
      if ((POPCOUNT(uVar6 + 0x66f5b8e7 & 0xff) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pbVar15 = unaff_RDI + 1;
      *unaff_RDI = (byte)pbVar9;
    }
    else {
      bVar14 = *unaff_RSI;
      *unaff_RSI = *unaff_RSI + bVar12;
      unaff_RDI[0x13210098] = unaff_RDI[0x13210098] + bVar11 + CARRY1(bVar14,bVar12);
      *(byte *)(param_2 + 0x1287b049) = *(byte *)(param_2 + 0x1287b049) ^ bVar12;
      pbVar9 = (byte *)0x99c17ce8;
      pbVar15 = unaff_RDI;
    }
    *pbVar9 = *pbVar9 << (bVar11 & 7) | *pbVar9 >> 8 - (bVar11 & 7);
    *pbVar15 = (byte)pbVar9;
    pbVar15[1] = (byte)pbVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar14 = *unaff_RSI;
  bVar4 = (byte)uVar6;
  bVar2 = *unaff_RSI;
  *unaff_RSI = *unaff_RSI + bVar4;
  if (*unaff_RSI != 0 && SCARRY1(bVar2,bVar4) == (char)*unaff_RSI < '\0') {
    *param_1 = *param_1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar7 = CONCAT22((short)(uVar6 >> 0x10),
                   CONCAT11(((char)*unaff_RSI < '\0') << 7 | (*unaff_RSI == 0) << 6 | in_AF << 4 |
                            ((POPCOUNT(*unaff_RSI) & 1U) == 0) << 2 | 2U | CARRY1(bVar14,bVar4),
                            bVar4)) | 0xe185cf5d;
  *(int *)(param_2 + -0x56b63c00) = *(int *)(param_2 + -0x56b63c00) << (bVar11 & 0x1f);
  uVar8 = (ulonglong)uVar7 ^ 0xd8;
  *(char *)(uVar8 - 0x1c) = *(char *)(uVar8 - 0x1c) + (char)uVar8;
  *(char *)(uVar8 - 0x4bc99c3b) = *(char *)(uVar8 - 0x4bc99c3b) + bVar11;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(bVar12,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(bVar12,unaff_BL)) + (char)uVar8;
  uVar6 = unaff_EBP & (uint)param_2;
  uVar5 = in((short)param_2);
  uVar6 = CONCAT31(CONCAT21((short)(uVar7 >> 0x10),
                            ((int)uVar6 < 0) << 7 | (uVar6 == 0) << 6 | in_AF << 4 |
                            ((POPCOUNT(uVar6 & 0xff) & 1U) == 0) << 2),uVar5) | 0x200;
  iVar3 = *(int *)(ulonglong)uVar6;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(bVar12,unaff_BL)) + -3);
  cVar10 = (char)(uVar6 >> 8);
  *pcVar1 = *pcVar1 + cVar10;
  bVar14 = unaff_BL ^ DAT_124af39f1;
  bVar12 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + bVar11;
  pcVar1 = (char *)((ulonglong)(unaff_EBP + iVar3) - 0x7c);
  *pcVar1 = (*pcVar1 - cVar10) - CARRY1(bVar12,bVar11);
  param_1[(longlong)unaff_RSI * 2 + 0x625f57c4] =
       param_1[(longlong)unaff_RSI * 2 + 0x625f57c4] + bVar14;
  in(0x7d);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd9d1 FUN_14d7bd9d1 body=4 status=ok
// SIG undefined FUN_14d7bd9d1(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bda58) overlaps instruction at (ram,0x00014d7bda57)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7bd9d5) */
/* WARNING: Removing unreachable block (ram,0x00014d7bd9da) */
/* WARNING: Removing unreachable block (ram,0x00014d7bd9ef) */

void FUN_14d7bd9d1(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  int *in_RAX;
  byte *pbVar2;
  byte bVar3;
  byte *unaff_RSI;
  undefined1 *unaff_RDI;
  undefined1 *puVar4;
  
  bVar3 = (byte)((ulonglong)param_1 >> 8);
  if ((int)in_RAX < -0x66f5b8e7) {
    pbVar2 = (byte *)((longlong)*in_RAX * 0x1a & 0xffffffff);
    if ((POPCOUNT((int)in_RAX + 0x66f5b8e7U & 0xff) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar4 = unaff_RDI + 1;
    *unaff_RDI = (char)pbVar2;
  }
  else {
    bVar1 = *unaff_RSI;
    *unaff_RSI = *unaff_RSI + bVar3;
    unaff_RDI[0x13210098] = unaff_RDI[0x13210098] + (byte)param_1 + CARRY1(bVar1,bVar3);
    *(byte *)(param_2 + 0x1287b049) = *(byte *)(param_2 + 0x1287b049) ^ bVar3;
    pbVar2 = (byte *)0x99c17ce8;
    puVar4 = unaff_RDI;
  }
  bVar3 = (byte)param_1 & 7;
  *pbVar2 = *pbVar2 << bVar3 | *pbVar2 >> 8 - bVar3;
  *puVar4 = (char)pbVar2;
  puVar4[1] = (char)pbVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd9df FUN_14d7bd9df body=10 status=ok
// SIG undefined FUN_14d7bd9df(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd9df(undefined8 param_1,undefined2 param_2)

{
  int in_EAX;
  undefined4 *unaff_RSI;
  char *unaff_RDI;
  bool in_OF;
  
  out(0xdd,in_EAX);
  if (in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*unaff_RSI,param_2);
  *unaff_RDI = *unaff_RDI + (char)((uint)(in_EAX + -0x6d4e2128) >> 8);
  return;
}



// FUNCTION 14d7bd9fc FUN_14d7bd9fc body=2 status=ok
// SIG undefined FUN_14d7bd9fc(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd9fc(undefined8 param_1,uint param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  char cVar7;
  undefined1 uVar8;
  undefined6 in_register_00000002;
  byte bVar9;
  byte unaff_BL;
  byte bVar10;
  undefined7 unaff_00000019;
  uint unaff_EBP;
  uint *unaff_RSI;
  byte *unaff_RDI;
  char in_AF;
  
  bVar9 = (byte)param_1;
  cVar7 = in(0);
  uVar2 = *unaff_RSI;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + cVar7;
  uVar6 = unaff_EBP & param_2;
  bVar4 = ((int)uVar6 < 0) << 7 | (uVar6 == 0) << 6 | in_AF << 4 |
          ((POPCOUNT(uVar6 & 0xff) & 1U) == 0) << 2;
  bVar5 = bVar4 | 2;
  uVar8 = in((short)param_2);
  iVar3 = *(int *)(CONCAT62(in_register_00000002,CONCAT11(bVar4,uVar8)) | 0x200);
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -3);
  *pcVar1 = *pcVar1 + bVar5;
  bVar10 = unaff_BL ^ DAT_124af39f1;
  bVar4 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + bVar9;
  pcVar1 = (char *)((ulonglong)(unaff_EBP + iVar3) - 0x7c);
  *pcVar1 = (*pcVar1 - bVar5) - CARRY1(bVar4,bVar9);
  pcVar1 = (char *)(CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(cVar7,bVar9)) + 0x625f57c4
                   + (ulonglong)uVar2 * 2);
  *pcVar1 = *pcVar1 + bVar10;
  in(0x7d);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bda0a FUN_14d7bda0a body=8 status=ok
// SIG undefined FUN_14d7bda0a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bda0a(longlong param_1,uint param_2)

{
  char *pcVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined6 in_register_00000002;
  byte unaff_BL;
  byte bVar7;
  undefined7 unaff_00000019;
  uint unaff_EBP;
  longlong unaff_RSI;
  int unaff_EDI;
  byte *pbVar8;
  char in_AF;
  
  pbVar8 = (byte *)(ulonglong)(unaff_EDI + unaff_EBP);
  uVar5 = unaff_EBP & param_2;
  bVar3 = ((int)uVar5 < 0) << 7 | (uVar5 == 0) << 6 | in_AF << 4 |
          ((POPCOUNT(uVar5 & 0xff) & 1U) == 0) << 2;
  bVar4 = bVar3 | 2;
  uVar6 = in((short)param_2);
  iVar2 = *(int *)(CONCAT62(in_register_00000002,CONCAT11(bVar3,uVar6)) | 0x200);
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -3);
  *pcVar1 = *pcVar1 + bVar4;
  bVar7 = unaff_BL ^ DAT_124af39f1;
  bVar3 = *pbVar8;
  *pbVar8 = *pbVar8 + (byte)param_1;
  pcVar1 = (char *)((ulonglong)(unaff_EBP + iVar2) - 0x7c);
  *pcVar1 = (*pcVar1 - bVar4) - CARRY1(bVar3,(byte)param_1);
  pcVar1 = (char *)(param_1 + 0x625f57c4 + unaff_RSI * 2);
  *pcVar1 = *pcVar1 + bVar7;
  in(0x7d);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bda13 FUN_14d7bda13 body=8 status=ok
// SIG undefined FUN_14d7bda13(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bda13(longlong param_1)

{
  char *pcVar1;
  byte bVar2;
  char in_AH;
  byte unaff_BL;
  byte bVar3;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  longlong unaff_RSI;
  byte *pbVar4;
  
  pbVar4 = (byte *)(ulonglong)unaff_EBP;
  bVar3 = unaff_BL ^ DAT_124af39f1;
  bVar2 = *pbVar4;
  *pbVar4 = *pbVar4 + (byte)param_1;
  pcVar1 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + -0x7c);
  *pcVar1 = (*pcVar1 - in_AH) - CARRY1(bVar2,(byte)param_1);
  pcVar1 = (char *)(param_1 + 0x625f57c4 + unaff_RSI * 2);
  *pcVar1 = *pcVar1 + bVar3;
  in(0x7d);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bda1c FUN_14d7bda1c body=4 status=ok
// SIG undefined FUN_14d7bda1c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bda1c(longlong param_1)

{
  char *pcVar1;
  char unaff_BL;
  longlong unaff_RSI;
  
  pcVar1 = (char *)(param_1 + 0x625f57c4 + unaff_RSI * 2);
  *pcVar1 = *pcVar1 + unaff_BL;
  in(0x7d);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bda21 FUN_14d7bda21 body=5 status=ok
// SIG undefined FUN_14d7bda21(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bda21(void)

{
  bool in_OF;
  
  if (in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bda35 FUN_14d7bda35 body=4 status=ok
// SIG undefined FUN_14d7bda35(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bda58) overlaps instruction at (ram,0x00014d7bda57)
    */

void FUN_14d7bda35(longlong param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 in_RAX;
  byte *pbVar3;
  byte bVar4;
  byte *unaff_RSI;
  undefined1 *unaff_RDI;
  undefined1 *puVar5;
  char in_CF;
  
  bVar4 = (byte)((ulonglong)param_1 >> 8);
  uRam2c699feb00543f71 =
       (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),((char)in_RAX + -0x34) - in_CF);
  uVar2 = uRam2c699feb00543f71 & *(uint *)(param_1 + -0x6fff7559);
  if ((int)uVar2 < -0x66f5b8e7) {
    pbVar3 = (byte *)((longlong)*(int *)(ulonglong)uVar2 * 0x1a & 0xffffffff);
    if ((POPCOUNT(uVar2 + 0x66f5b8e7 & 0xff) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar5 = unaff_RDI + 1;
    *unaff_RDI = (char)pbVar3;
  }
  else {
    bVar1 = *unaff_RSI;
    *unaff_RSI = *unaff_RSI + bVar4;
    unaff_RDI[0x13210098] = unaff_RDI[0x13210098] + (byte)param_1 + CARRY1(bVar1,bVar4);
    *(byte *)(param_2 + 0x1287b049) = *(byte *)(param_2 + 0x1287b049) ^ bVar4;
    pbVar3 = (byte *)0x99c17ce8;
    puVar5 = unaff_RDI;
  }
  bVar4 = (byte)param_1 & 7;
  *pbVar3 = *pbVar3 << bVar4 | *pbVar3 >> 8 - bVar4;
  *puVar5 = (char)pbVar3;
  puVar5[1] = (char)pbVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bda3e thunk_FUN_14d7bd9df body=2 status=ok
// SIG undefined thunk_FUN_14d7bd9df(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_FUN_14d7bd9df(undefined8 param_1,undefined2 param_2)

{
  int in_EAX;
  undefined4 *unaff_RSI;
  char *unaff_RDI;
  bool in_OF;
  
  out(0xdd,in_EAX);
  if (in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*unaff_RSI,param_2);
  *unaff_RDI = *unaff_RDI + (char)((uint)(in_EAX + -0x6d4e2128) >> 8);
  return;
}



// FUNCTION 14d7bda42 FUN_14d7bda42 body=15 status=ok
// SIG undefined FUN_14d7bda42(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bda58) overlaps instruction at (ram,0x00014d7bda57)
    */

void FUN_14d7bda42(longlong param_1,longlong param_2)

{
  byte bVar1;
  uint in_EAX;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  byte *unaff_RSI;
  undefined1 *unaff_RDI;
  undefined1 *puVar5;
  
  bVar4 = (byte)((ulonglong)param_1 >> 8);
  uVar2 = in_EAX & *(uint *)(param_1 + -0x6fff7559);
  if ((int)uVar2 < -0x66f5b8e7) {
    pbVar3 = (byte *)((longlong)*(int *)(ulonglong)uVar2 * 0x1a & 0xffffffff);
    if ((POPCOUNT(uVar2 + 0x66f5b8e7 & 0xff) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar5 = unaff_RDI + 1;
    *unaff_RDI = (char)pbVar3;
  }
  else {
    bVar1 = *unaff_RSI;
    *unaff_RSI = *unaff_RSI + bVar4;
    unaff_RDI[0x13210098] = unaff_RDI[0x13210098] + (byte)param_1 + CARRY1(bVar1,bVar4);
    *(byte *)(param_2 + 0x1287b049) = *(byte *)(param_2 + 0x1287b049) ^ bVar4;
    pbVar3 = (byte *)0x99c17ce8;
    puVar5 = unaff_RDI;
  }
  bVar4 = (byte)param_1 & 7;
  *pbVar3 = *pbVar3 << bVar4 | *pbVar3 >> 8 - bVar4;
  *puVar5 = (char)pbVar3;
  puVar5[1] = (char)pbVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bda55 FUN_14d7bda55 body=2 status=ok
// SIG undefined FUN_14d7bda55(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bda55(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  uint *unaff_RBX;
  undefined1 *unaff_RDI;
  
  *unaff_RBX = *unaff_RBX & (uint)param_2;
  *(byte *)(param_2 + 0x1287b049) =
       *(byte *)(param_2 + 0x1287b049) ^ (byte)((ulonglong)param_1 >> 8);
  bVar1 = (byte)param_1 & 7;
  bRam0000000099c17ce8 = bRam0000000099c17ce8 << bVar1 | bRam0000000099c17ce8 >> 8 - bVar1;
  *unaff_RDI = 0xe8;
  unaff_RDI[1] = 0xe8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bda5a FUN_14d7bda5a body=23 status=ok
// SIG undefined FUN_14d7bda5a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bda5a(byte param_1)

{
  undefined1 in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = in_AL;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) << (param_1 & 7) |
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) >> 8 - (param_1 & 7);
  unaff_RDI[1] = in_AL;
  unaff_RDI[2] = in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bda7c FUN_14d7bda7c body=20 status=ok
// SIG undefined FUN_14d7bda7c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bda7c(char *param_1,longlong param_2)

{
  longlong unaff_RSI;
  float10 in_ST0;
  
  *(int *)(unaff_RSI + -0x2c + param_2 * 2) = (int)in_ST0;
  *param_1 = *param_1 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bda93 FUN_14d7bda93 body=14 status=ok
// SIG undefined FUN_14d7bda93(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bda93(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  uint in_EAX;
  byte *pbVar2;
  ulonglong unaff_RSI;
  undefined1 *unaff_RDI;
  
  pbVar2 = (byte *)(unaff_RSI & 0xffffffff);
  if (param_1 + -1 != 0) {
    bVar1 = (byte)(param_1 + -1) & 7;
    *pbVar2 = *pbVar2 << bVar1 | *pbVar2 >> 8 - bVar1;
    *unaff_RDI = (char)unaff_RSI;
    unaff_RDI[1] = (char)unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*(undefined4 *)(ulonglong)in_EAX,(short)param_2);
                    /* WARNING: Could not recover jumptable at 0x00014d7bdaa3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_2)();
  return;
}



// FUNCTION 14d7bdab8 FUN_14d7bdab8 body=4 status=ok
// SIG undefined FUN_14d7bdab8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdab8(longlong param_1,longlong param_2)

{
  char *pcVar1;
  uint uVar2;
  char unaff_BL;
  char unaff_BH;
  uint unaff_EBP;
  uint *unaff_RDI;
  byte in_CF;
  undefined8 unaff_retaddr;
  uint uVar3;
  
  uVar2 = *unaff_RDI;
  uVar3 = *unaff_RDI;
  *(undefined8 *)(param_1 + -0xf) = unaff_retaddr;
  pcVar1 = (char *)(((ulonglong)(unaff_EBP + uVar3 + (uint)in_CF) - 0x44ff8044) + param_2 * 4);
  *pcVar1 = *pcVar1 + unaff_BH + unaff_BL +
                      (CARRY4(unaff_EBP,uVar2) || CARRY4(unaff_EBP + uVar3,(uint)in_CF));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdabc FUN_14d7bdabc body=4 status=ok
// SIG undefined FUN_14d7bdabc(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdabc(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char unaff_BH;
  longlong unaff_RBP;
  undefined8 unaff_retaddr;
  
  *(undefined8 *)(param_1 + -0xf) = unaff_retaddr;
  pcVar1 = (char *)(unaff_RBP + -0x44ff8044 + param_2 * 4);
  *pcVar1 = *pcVar1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdaca FUN_14d7bdaca body=2 status=ok
// SIG undefined FUN_14d7bdaca(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdaca(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdada FUN_14d7bdada body=4 status=ok
// SIG undefined FUN_14d7bdada(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdada(undefined8 param_1)

{
  char *pcVar1;
  code *pcVar2;
  undefined1 in_AL;
  char cVar3;
  undefined7 in_register_00000001;
  char unaff_BL;
  longlong unaff_RDI;
  
  out(0x18,in_AL);
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + -0x590b0f1d);
  *pcVar1 = *pcVar1 + unaff_BL;
  pcVar2 = (code *)swi(0xd0);
  cVar3 = (*pcVar2)(param_1,0x16);
  *(char *)(unaff_RDI + 0x3e) = *(char *)(unaff_RDI + 0x3e) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdaf9 FUN_14d7bdaf9 body=20 status=ok
// SIG undefined FUN_14d7bdaf9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdaf9(undefined8 param_1,uint param_2)

{
  char in_AL;
  undefined7 in_register_00000001;
  uint *unaff_RDI;
  
  DAT_2c2e772e90c207bb = in_AL;
  *unaff_RDI = *unaff_RDI & param_2;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdb1b FUN_14d7bdb1b body=7 status=ok
// SIG undefined FUN_14d7bdb1b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdb1b(void)

{
  ulonglong in_RAX;
  uint *puVar1;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  
  cRam000000014dee3872 =
       *(char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (in_RAX & 0xff));
  puVar1 = (uint *)CONCAT71((int7)(in_RAX >> 8),cRam000000014dee3872);
  if ((POPCOUNT(*unaff_RSI - *unaff_RDI & 0xff) & 1U) != 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *puVar1 = *puVar1 << 1 | (uint)((int)*puVar1 < 0);
                    /* WARNING: Read-only address (ram,0x00014dee3872) is written */
  cRam000000014dee3872 = cRam000000014dee3872 + 'q';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdb24 FUN_14d7bdb24 body=15 status=ok
// SIG undefined FUN_14d7bdb24(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdb24(void)

{
  char in_AL;
  
                    /* WARNING: Read-only address (ram,0x00014dee3872) is written */
  cRam000000014dee3872 = in_AL + 'q';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdb3f FUN_14d7bdb3f body=2 status=ok
// SIG undefined FUN_14d7bdb3f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdb3f(longlong param_1)

{
  char *pcVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RBP;
  longlong unaff_RSI;
  bool in_PF;
  char in_ZF;
  
  if (!in_PF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 + -1 == 0 || in_ZF == '\0') {
    pcVar1 = (char *)(unaff_RBP + 0x25 + unaff_RSI * 2);
    *pcVar1 = *pcVar1 + (char)(param_1 + -1);
    LOCK();
    *(undefined1 *)CONCAT71(in_register_00000001,in_AL) = in_AL;
    UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdb4c FUN_14d7bdb4c body=1 status=ok
// SIG undefined FUN_14d7bdb4c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdb4c(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined1 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdb50 FUN_14d7bdb50 body=1 status=ok
// SIG undefined FUN_14d7bdb50(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdb50(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdb63 FUN_14d7bdb63 body=30 status=ok
// SIG undefined FUN_14d7bdb63(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bdbe3) overlaps instruction at (ram,0x00014d7bdbe2)
    */

void FUN_14d7bdb63(undefined4 param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar5;
  undefined1 *in_RAX;
  ulonglong uVar6;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 unaff_SIL;
  undefined2 *unaff_RDI;
  undefined2 in_FS;
  longlong in_FS_OFFSET;
  byte in_CF;
  bool in_PF;
  bool in_ZF;
  int iVar3;
  int iVar4;
  
  if (in_PF) {
    out((short)param_2,(int)in_RAX);
    iVar2 = *param_2;
    iVar5 = *param_2 - (int)param_2;
    *param_2 = iVar5 - (uint)in_CF;
    iVar3 = *param_2;
    iVar4 = *param_2;
    *unaff_RDI = in_FS;
    uVar6 = (ulonglong)in_RAX & 0xffffffff;
    if ((SBORROW4(iVar2,(int)param_2) != SBORROW4(iVar5,(uint)in_CF)) != iVar3 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)(uVar6 + 0x3b32b600 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         (char)((uint)param_1 >> 8);
    out((short)uVar6,unaff_SIL);
    if (iVar4 == 0) {
      pcVar1 = (char *)(in_FS_OFFSET + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x29);
      *pcVar1 = *pcVar1 + (char)(uVar6 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (in_ZF) {
    LOCK();
    *in_RAX = (char)in_RAX;
    UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdb77 FUN_14d7bdb77 body=73 status=ok
// SIG undefined FUN_14d7bdb77(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bdbad) overlaps instruction at (ram,0x00014d7bdbac)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bdb77(longlong param_1,short param_2)

{
  char *pcVar1;
  byte bVar2;
  char cVar4;
  int iVar5;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  code *pcVar10;
  byte bVar11;
  char cVar13;
  int in_EAX;
  byte *pbVar12;
  byte bVar14;
  int *piVar15;
  byte unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  byte *unaff_RSI;
  char *unaff_RDI;
  undefined2 in_FS;
  longlong in_FS_OFFSET;
  byte in_CF;
  bool bVar16;
  byte bVar3;
  int iVar6;
  
  pbVar12 = (byte *)(ulonglong)(uint)(int)param_2;
  bVar2 = *unaff_RSI;
  bVar3 = *unaff_RSI;
  *unaff_RSI = (bVar3 - unaff_BL) - in_CF;
  cVar13 = (char)((ushort)param_2 >> 8);
  if (param_1 == 0) {
    if (in_EAX != *(int *)(unaff_RSI + 0xda4bc9)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    piVar15 = (int *)(ulonglong)uRamffffffffdf57567a;
    uVar7 = (uint)CARRY4((uint)unaff_RBP,(uint)unaff_RDI);
    bVar16 = SBORROW4(*piVar15,uRamffffffffdf57567a);
    iVar9 = *piVar15 - uRamffffffffdf57567a;
    *piVar15 = iVar9 - uVar7;
    iVar5 = *piVar15;
    iVar6 = *piVar15;
    *(undefined2 *)unaff_RDI = in_FS;
    if ((bVar16 != SBORROW4(iVar9,uVar7)) != iVar5 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar12[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x3b32b600] = 0xff;
    out(param_2,(char)unaff_RSI);
    if (iVar6 == 0) {
      pcVar1 = (char *)(in_FS_OFFSET + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x29);
      *pcVar1 = *pcVar1 + cVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar14 = (byte)((ulonglong)param_1 >> 8);
  bVar16 = bVar14 < (byte)in_EAX ||
           (byte)(bVar14 - (byte)in_EAX) < (bVar2 < unaff_BL || (byte)(bVar3 - unaff_BL) < in_CF);
  bVar2 = *pbVar12;
  bVar11 = (byte)param_2;
  bVar3 = *pbVar12;
  bVar14 = *pbVar12 + bVar11;
  *pbVar12 = bVar14 + bVar16;
  if ((CARRY1(bVar2,bVar11) || CARRY1(bVar14,bVar16)) || *pbVar12 == 0) {
    out((short)in_EAX,bVar11);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (SCARRY1(bVar3,bVar11) != SCARRY1(bVar14,bVar16)) {
    bVar2 = *unaff_RSI;
    *unaff_RSI = *unaff_RSI + bVar11;
    puVar8 = (uint *)(unaff_RDI + 1);
    *unaff_RDI = (char)unaff_RBP;
    if (!CARRY1(bVar2,bVar11)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar7 = *puVar8;
    *puVar8 = *puVar8 - (uint)puVar8;
    *puVar8 = CONCAT31((int3)((ulonglong)unaff_RBP >> 8),(char)unaff_RBP - (uVar7 < (uint)puVar8));
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  out(0x3d,(int)param_2);
  pcVar1 = (char *)(unaff_RBP + 0x1623a8ef);
  cVar4 = *pcVar1;
  *pcVar1 = *pcVar1 + cVar13;
  out(0x82,bVar11);
  if (SCARRY1(cVar4,cVar13) == *pcVar1 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdb95 FUN_14d7bdb95 body=2 status=ok
// SIG undefined FUN_14d7bdb95(void)

void FUN_14d7bdb95(undefined8 param_1,undefined2 param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  code *pcVar4;
  uint *unaff_RSI;
  uint *unaff_RDI;
  char in_CF;
  
  in(param_2);
  uVar2 = *unaff_RSI;
  cRamac88d888424faa17 = (char)uVar2;
  cVar3 = cRamac88d888424faa17 - *(char *)(ulonglong)uVar2;
  uVar1 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI - (uint)unaff_RDI;
  *unaff_RDI = CONCAT31((int3)(uVar2 >> 8),(cVar3 - in_CF) - (uVar1 < (uint)unaff_RDI));
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}



// FUNCTION 14d7bdbb6 FUN_14d7bdbb6 body=10 status=ok
// SIG undefined FUN_14d7bdbb6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdbb6(void)

{
  uint in_EAX;
  
  if ((in_EAX & 0x1ee16f) == 0) {
    LOCK();
    DAT_00000000 = 0;
    UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdbe3 FUN_14d7bdbe3 body=2 status=ok
// SIG undefined FUN_14d7bdbe3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdbe3(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdbf5 FUN_14d7bdbf5 body=12 status=ok
// SIG undefined FUN_14d7bdbf5(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bdbf5(longlong param_1)

{
  int in_EAX;
  longlong unaff_RSI;
  
  _DAT_16385dc23 = _DAT_16385dc23 + in_EAX;
  if (param_1 != 0) {
    *(char *)(unaff_RSI + -3) = *(char *)(unaff_RSI + -3) + (char)((uint)in_EAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdc07 FUN_14d7bdc07 body=2 status=ok
// SIG undefined FUN_14d7bdc07(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdc07(byte param_1)

{
  undefined1 in_AL;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  uint *unaff_RDI;
  bool in_CF;
  bool in_ZF;
  
  if (!in_CF && !in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       << (param_1 & 7) |
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       >> 8 - (param_1 & 7);
  *unaff_RDI = *unaff_RDI >> (param_1 & 0x1f);
  LOCK();
  *(undefined1 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,0xec)) = in_AH;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdc2f FUN_14d7bdc2f body=52 status=ok
// SIG undefined FUN_14d7bdc2f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdc2f(undefined8 param_1)

{
  char *pcVar1;
  undefined1 in_AL;
  undefined1 extraout_AL;
  undefined1 in_AH;
  undefined1 extraout_AH;
  undefined6 in_register_00000002;
  undefined6 extraout_var;
  byte bVar2;
  byte bVar3;
  undefined6 uVar4;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined8 *unaff_RBP;
  char unaff_DIL;
  undefined7 unaff_00000039;
  
  uVar4 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar2 = (byte)param_1;
  bVar3 = (byte)((ulonglong)param_1 >> 8) |
          *(byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x73);
  pcVar1 = (char *)((longlong)unaff_RBP +
                   CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -100);
  *pcVar1 = *pcVar1 + unaff_BL;
  *unaff_RBP = 0x14d7bdc3f;
  func_0x0001be7c3668();
  DAT_fa05460e = DAT_fa05460e + unaff_DIL;
  *(byte *)CONCAT62(extraout_var,CONCAT11(extraout_AH,extraout_AL)) =
       *(char *)CONCAT62(extraout_var,CONCAT11(extraout_AH,extraout_AL)) << (bVar2 & 7) |
       *(byte *)CONCAT62(extraout_var,CONCAT11(extraout_AH,extraout_AL)) >> 8 - (bVar2 & 7);
  *unaff_RBP = CONCAT62(uVar4,CONCAT11(bVar3,bVar2));
  *(uint *)CONCAT71(unaff_00000039,unaff_DIL) =
       *(uint *)CONCAT71(unaff_00000039,unaff_DIL) >> (bVar2 & 0x1f);
  unaff_RBP[-1] = CONCAT62(uVar4,CONCAT11(bVar3,bVar2));
  unaff_RBP[-2] = CONCAT71(unaff_00000019,0xec);
  LOCK();
  *(undefined1 *)CONCAT71(unaff_00000019,0xec) = extraout_AH;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdc6e FUN_14d7bdc6e body=6 status=ok
// SIG undefined FUN_14d7bdc6e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdc6e(byte param_1)

{
  uint *puVar1;
  undefined1 extraout_AL;
  undefined1 in_AL;
  undefined1 extraout_AH;
  undefined1 in_AH;
  undefined6 extraout_var;
  undefined6 in_register_00000002;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  bool in_PF;
  char acStack_6c [100];
  undefined8 uStack_8;
  
  if (in_PF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar1 = (uint *)(unaff_RDI + 1);
  *unaff_RDI = *unaff_RSI;
  acStack_6c[CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL))] =
       acStack_6c[CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL))] + -0x61;
  uStack_8 = 0x14d7bdc3f;
  func_0x0001be7c3668();
  DAT_fa05460e = DAT_fa05460e + (char)puVar1;
  *(byte *)CONCAT62(extraout_var,CONCAT11(extraout_AH,extraout_AL)) =
       *(char *)CONCAT62(extraout_var,CONCAT11(extraout_AH,extraout_AL)) << (param_1 & 7) |
       *(byte *)CONCAT62(extraout_var,CONCAT11(extraout_AH,extraout_AL)) >> 8 - (param_1 & 7);
  *puVar1 = *puVar1 >> (param_1 & 0x1f);
  LOCK();
  *(undefined1 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,0xec)) = extraout_AH;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdc72 FUN_14d7bdc72 body=8 status=ok
// SIG undefined FUN_14d7bdc72(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdc72(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdc8a FUN_14d7bdc8a body=4 status=ok
// SIG undefined FUN_14d7bdc8a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdc8a(undefined8 param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  char unaff_BL;
  
  out(param_2,in_AL);
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x48864445);
  *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdca4 FUN_14d7bdca4 body=12 status=ok
// SIG undefined FUN_14d7bdca4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdca4(undefined8 param_1,undefined8 param_2,char param_3)

{
  longlong in_RAX;
  char *in_R10;
  bool in_PF;
  
  if (!in_PF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_R10 = *in_R10 + param_3;
                    /* WARNING: Could not recover jumptable at 0x00014d7bdc87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulonglong)*(uint *)(&stack0xffffffffeef075f7 + in_RAX))();
  return;
}



// FUNCTION 14d7bdcb1 FUN_14d7bdcb1 body=2 status=ok
// SIG undefined FUN_14d7bdcb1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdcb1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdcb6 FUN_14d7bdcb6 body=12 status=ok
// SIG undefined FUN_14d7bdcb6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdcb6(void)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  bool in_CF;
  
  *unaff_RDI = *unaff_RSI;
  if (!in_CF) {
    in(0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdcba FUN_14d7bdcba body=9 status=ok
// SIG undefined FUN_14d7bdcba(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdcba(void)

{
  in(0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdccc FUN_14d7bdccc body=13 status=ok
// SIG undefined FUN_14d7bdccc(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdccc(undefined8 param_1)

{
  longlong unaff_RBX;
  
  *(byte *)(unaff_RBX + -0x24) = *(byte *)(unaff_RBX + -0x24) | (byte)((ulonglong)param_1 >> 8);
  cRam00000000675cd276 = cRam00000000675cd276 + -0x39;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdcda FUN_14d7bdcda body=11 status=ok
// SIG undefined FUN_14d7bdcda(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdcda(void)

{
  undefined1 in_AL;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  
  out(0x1d,in_AL);
  out(0x94,unaff_ESI);
  *(char *)(unaff_RBP + -0x52) = *(char *)(unaff_RBP + -0x52) + (char)unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdce7 FUN_14d7bdce7 body=1 status=ok
// SIG undefined FUN_14d7bdce7(void)

void FUN_14d7bdce7(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7bdd09 FUN_14d7bdd09 body=3 status=ok
// SIG undefined FUN_14d7bdd09(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdd09(void)

{
  char in_AH;
  longlong unaff_RBP;
  uint *unaff_RSI;
  uint *unaff_RDI;
  
  *unaff_RSI = *unaff_RSI ^ (uint)unaff_RSI;
  *unaff_RDI = *unaff_RSI;
  *(char *)(unaff_RBP + -0x3bd509c2) = *(char *)(unaff_RBP + -0x3bd509c2) + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdd0e FUN_14d7bdd0e body=4 status=ok
// SIG undefined FUN_14d7bdd0e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdd0e(void)

{
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdd33 FUN_14d7bdd33 body=12 status=ok
// SIG undefined FUN_14d7bdd33(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdd33(void)

{
  char *in_RAX;
  
  *in_RAX = *in_RAX >> 0x1d;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdd44 FUN_14d7bdd44 body=16 status=ok
// SIG undefined FUN_14d7bdd44(void)

void FUN_14d7bdd44(undefined8 param_1,char *param_2,undefined8 param_3,char param_4)

{
  int *piVar1;
  uint in_EAX;
  uint uVar2;
  char unaff_BH;
  char unaff_SIL;
  
  uVar2 = in_EAX & 0xa500ade9;
  if (unaff_SIL < param_4) {
    return;
  }
  param_2[uVar2] = param_2[uVar2] + (char)uVar2;
  piVar1 = (int *)((ulonglong)uVar2 + 0x72);
  *piVar1 = *piVar1 + -3;
  *param_2 = *param_2 + unaff_BH;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7bdd5a FUN_14d7bdd5a body=13 status=ok
// SIG undefined FUN_14d7bdd5a(void)

void FUN_14d7bdd5a(void)

{
  undefined1 in_AL;
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  *(undefined1 *)(unaff_RBX + -0x2cffad72) = in_AL;
  *(char *)(unaff_RBP + -0x69771be9) = *(char *)(unaff_RBP + -0x69771be9) + (char)unaff_RBX;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7bdd68 FUN_14d7bdd68 body=1 status=ok
// SIG undefined FUN_14d7bdd68(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdd68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdd70 FUN_14d7bdd70 body=14 status=ok
// SIG undefined FUN_14d7bdd70(void)

void FUN_14d7bdd70(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7bdd82 FUN_14d7bdd82 body=22 status=ok
// SIG undefined FUN_14d7bdd82(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bdd82(longlong param_1,undefined2 param_2)

{
  uint uVar1;
  char cVar2;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  float10 in_ST0;
  
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)((uint)_DAT_f357af9c00a8ac >> 8);
  uVar1 = *(uint *)(unaff_RSI + 1);
  cVar2 = *(char *)(unaff_RDI + 1);
  *(undefined4 *)(ulonglong)uVar1 = *(undefined4 *)(ulonglong)uVar1;
  if (-1 < (char)((char)uVar1 - cVar2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 == 1 || (char)uVar1 != cVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(unaff_RBP + 0x7d818c07) = (short)in_ST0;
  out(*(undefined4 *)(unaff_RSI + 5),param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdda0 FUN_14d7bdda0 body=3 status=ok
// SIG undefined FUN_14d7bdda0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdda0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bddba FUN_14d7bddba body=2 status=ok
// SIG undefined FUN_14d7bddba(void)

ulonglong FUN_14d7bddba(void)

{
  uint uVar1;
  ulonglong in_RAX;
  bool in_SF;
  
  if (!in_SF) {
    uVar1 = (uint)in_RAX ^ 0x17fbbcc6;
    return (ulonglong)(uVar1 ^ *(uint *)(ulonglong)uVar1);
  }
  return in_RAX;
}



// FUNCTION 14d7bddbe FUN_14d7bddbe body=10 status=ok
// SIG undefined FUN_14d7bddbe(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bddbe(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_2 + -0x31);
  *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bddcb FUN_14d7bddcb body=1 status=ok
// SIG undefined FUN_14d7bddcb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bddcb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bddd7 FUN_14d7bddd7 body=16 status=ok
// SIG undefined FUN_14d7bddd7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bddd7(longlong param_1,longlong param_2)

{
  byte unaff_BL;
  undefined4 *unaff_RSI;
  undefined2 in_ES;
  
  *(byte *)(param_2 + -0x20c9a9e9) = *(byte *)(param_2 + -0x20c9a9e9) & unaff_BL;
  *(undefined2 *)(param_1 + -0x7fff9483) = in_ES;
  out(*unaff_RSI,(short)param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdde8 FUN_14d7bdde8 body=2 status=ok
// SIG undefined FUN_14d7bdde8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdde8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bddec FUN_14d7bddec body=21 status=ok
// SIG undefined FUN_14d7bddec(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bddec(ulonglong param_1,char *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  longlong in_RAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  uint *unaff_RDI;
  char in_CF;
  bool in_ZF;
  uint uVar4;
  
  if (!in_ZF) {
    uVar2 = *unaff_RDI;
    uVar7 = (uint)in_RAX;
    uVar3 = *unaff_RDI;
    uVar4 = *unaff_RDI;
    puVar1 = (uint *)(unaff_RBX + 0x3e);
    bVar6 = (byte)param_1 & 0x1f;
    *puVar1 = *puVar1 >> bVar6 | *puVar1 << 0x20 - bVar6;
    bVar5 = (param_1 & 0x1f) != 0;
    *param_2 = (*param_2 - (char)((ulonglong)param_2 >> 8)) -
               (!bVar5 && (uVar7 < uVar3 || uVar7 - uVar4 < (uint)(uVar7 < uVar2)) ||
               bVar5 && (int)*puVar1 < 0);
    param_2[unaff_RBP * 8] = param_2[unaff_RBP * 8] + (char)(param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(in_RAX + 0xff00000000) = (*(char *)(in_RAX + 0xff00000000) - (char)in_RAX) - in_CF;
  *(char *)(unaff_RSI + 0x4b) = *(char *)(unaff_RSI + 0x4b) + (byte)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bde02 FUN_14d7bde02 body=2 status=ok
// SIG undefined FUN_14d7bde02(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bde02(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bde06 FUN_14d7bde06 body=6 status=ok
// SIG undefined FUN_14d7bde06(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bde06(void)

{
  undefined4 in_EAX;
  char in_SF;
  char in_OF;
  
  if (in_OF != in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRamcdc2713de5896d4a = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bde1b FUN_14d7bde1b body=11 status=ok
// SIG undefined FUN_14d7bde1b(void)

/* WARNING: Instruction at (ram,0x00014d7bde21) overlaps instruction at (ram,0x00014d7bde1c)
    */

uint FUN_14d7bde1b(void)

{
  char cVar1;
  uint uVar3;
  undefined8 in_RAX;
  ulonglong *puVar4;
  longlong unaff_RBP;
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
  byte bVar2;
  
  while( true ) {
    puVar4 = (ulonglong *)((longlong)register0x00000020 + -8);
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
    *puVar4 = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_OF & 1) * 0x800 |
              (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
              (ulonglong)(in_SF & 1) * 0x80 | (ulonglong)(in_ZF & 1) * 0x40 |
              (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)(in_PF & 1) * 4 | (ulonglong)(in_CF & 1) |
              (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
              (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
    if ((*(uint *)(unaff_RBP + 0x18) & 0x8604601f) == 0) break;
    bVar2 = (byte)in_RAX;
    in_CF = 0x79 < bVar2;
    in_OF = SCARRY1(bVar2,-0x7a);
    cVar1 = bVar2 + 0x86;
    in_RAX = CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
    in_SF = cVar1 < '\0';
    in_ZF = cVar1 == '\0';
    in_PF = (POPCOUNT(cVar1) & 1U) == 0;
  }
  uVar3 = (uint)in_RAX ^ 0x17fbbcc6;
  return uVar3 ^ *(uint *)(ulonglong)uVar3;
}



// FUNCTION 14d7bde28 FUN_14d7bde28 body=14 status=ok
// SIG undefined FUN_14d7bde28(void)

uint FUN_14d7bde28(void)

{
  uint in_EAX;
  
  return in_EAX ^ 0x17fbbcc6 ^ *(uint *)(ulonglong)(in_EAX ^ 0x17fbbcc6);
}



// FUNCTION 14d7bde52 FUN_14d7bde52 body=10 status=ok
// SIG undefined FUN_14d7bde52(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bde52(char param_1)

{
  char *pcVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  undefined6 in_register_00000002;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong unaff_retaddr;
  
  cVar3 = in(0x32);
  bVar4 = ((unaff_retaddr & 0x80) != 0) << 7 | ((unaff_retaddr & 0x40) != 0) << 6 |
          ((unaff_retaddr & 0x10) != 0) << 4 | ((unaff_retaddr & 4) != 0) << 2 | 2U |
          (unaff_retaddr & 1) != 0;
  lVar2 = (longlong)
          *(int *)(CONCAT62(in_register_00000002,CONCAT11(bVar4,cVar3)) + -0x4fae0786 +
                  unaff_RDI * 2) * 0x36d76a00;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(bVar4,cVar3)) + 0xff00000000);
  *pcVar1 = (*pcVar1 - cVar3) - ((int)lVar2 != lVar2);
  *(char *)(unaff_RSI + 0x4b) = *(char *)(unaff_RSI + 0x4b) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bde5f FUN_14d7bde5f body=7 status=ok
// SIG undefined FUN_14d7bde5f(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bde67) overlaps instruction at (ram,0x00014d7bde66)
    */

void FUN_14d7bde5f(undefined8 param_1)

{
  char *pcVar1;
  longlong lVar2;
  undefined1 in_AL;
  uint7 in_register_00000001;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char in_CF;
  bool in_PF;
  
  if (in_PF) {
    lVar2 = (longlong)*(int *)(CONCAT71(in_register_00000001,in_AL) + -0x4fae0786 + unaff_RDI * 2) *
            0x36d76a00;
    in_CF = (int)lVar2 != lVar2;
    register0x00000020 = *(BADSPACEBASE **)(unaff_RBP + 8);
  }
  *(undefined8 *)((longlong)register0x00000020 + -8) = param_1;
  *(undefined8 *)((longlong)register0x00000020 + -0x10) = 0xffffffffffffffd7;
  pcVar1 = (char *)((ulonglong)in_register_00000001 * 0x100 + 0xff00000000);
  *pcVar1 = *pcVar1 - in_CF;
  *(char *)(unaff_RSI + 0x4b) = *(char *)(unaff_RSI + 0x4b) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bde67 FUN_14d7bde67 body=8 status=ok
// SIG undefined FUN_14d7bde67(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bde67(char param_1)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RSI;
  char in_CF;
  
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0xff00000000);
  *pcVar1 = (*pcVar1 - in_AL) - in_CF;
  *(char *)(unaff_RSI + 0x4b) = *(char *)(unaff_RSI + 0x4b) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bde76 FUN_14d7bde76 body=2 status=ok
// SIG undefined FUN_14d7bde76(void)

void FUN_14d7bde76(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7bde7a FUN_14d7bde7a body=15 status=ok
// SIG undefined FUN_14d7bde7a(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7bdef5) */
/* WARNING: Removing unreachable block (ram,0x00014d7bdea8) */
/* WARNING: Removing unreachable block (ram,0x00014d7bdef7) */

void FUN_14d7bde7a(char param_1)

{
  char *pcVar1;
  ulonglong in_RAX;
  longlong unaff_RSI;
  char in_CF;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_OF != in_SF) {
    pcVar1 = (char *)((in_RAX & 0xffffffffffffff00) + 0xff00000000);
    *pcVar1 = *pcVar1 - in_CF;
    *(char *)(unaff_RSI + 0x4b) = *(char *)(unaff_RSI + 0x4b) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  in(0x7a);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bde82 FUN_14d7bde82 body=3 status=ok
// SIG undefined FUN_14d7bde82(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bde82(void)

{
  undefined4 in_EAX;
  
  out(0x81,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bde8b FUN_14d7bde8b body=2 status=ok
// SIG undefined FUN_14d7bde8b(void)

void FUN_14d7bde8b(void)

{
  return;
}



// FUNCTION 14d7bde8f FUN_14d7bde8f body=29 status=ok
// SIG undefined FUN_14d7bde8f(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bde93) overlaps instruction at (ram,0x00014d7bde91)
    */

ulonglong FUN_14d7bde8f(longlong param_1,undefined2 param_2)

{
  undefined8 in_RAX;
  ulonglong uVar1;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_EBP;
  uint uVar2;
  byte *unaff_RSI;
  byte in_CF;
  bool in_PF;
  byte in_AF;
  bool in_ZF;
  bool in_SF;
  byte in_TF;
  byte in_IF;
  char in_OF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  
  if (!in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_ZF && in_OF == '\x01') {
    *(char *)(param_1 + 0x74001086) = *(char *)(param_1 + 0x74001086) - unaff_BH;
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) << 1 |
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) < '\0';
    return (ulonglong)*unaff_RSI;
  }
  if (in_PF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                   CONCAT11(in_ZF << 6 | 0x80U | in_AF << 4 | 2 | in_CF,(char)in_RAX));
  if (param_1 == 1) {
    uVar2 = unaff_EBP & (uint)uVar1 ^ *(uint *)(unaff_RSI + -0x58183fa2);
    in(param_2);
    *(ulonglong *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
         (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((int)uVar2 < 0) * 0x80 |
         (ulonglong)(uVar2 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
         (ulonglong)((POPCOUNT(uVar2 & 0xff) & 1U) == 0) * 4 | 1 | (ulonglong)(in_ID & 1) * 0x200000
         | (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
         (ulonglong)(in_AC & 1) * 0x40000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return uVar1;
}



// FUNCTION 14d7bde93 FUN_14d7bde93 body=9 status=ok
// SIG undefined FUN_14d7bde93(void)

undefined1 FUN_14d7bde93(longlong param_1)

{
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *unaff_RSI;
  
  *(char *)(param_1 + 0x74001086) = *(char *)(param_1 + 0x74001086) - unaff_BH;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) << 1 |
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) < '\0';
  return *unaff_RSI;
}



// FUNCTION 14d7bde9c FUN_14d7bde9c body=4 status=ok
// SIG undefined FUN_14d7bde9c(void)

undefined1 FUN_14d7bde9c(void)

{
  undefined1 *unaff_RSI;
  
  return *unaff_RSI;
}



// FUNCTION 14d7bdebe FUN_14d7bdebe body=11 status=ok
// SIG undefined FUN_14d7bdebe(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdebe(char *param_1)

{
  byte in_AL;
  longlong unaff_RBP;
  
  *(char *)(unaff_RBP + 0x70) = *(char *)(unaff_RBP + 0x70) + (in_AL & 0x58);
  *param_1 = *param_1 << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdee5 FUN_14d7bdee5 body=1 status=ok
// SIG undefined FUN_14d7bdee5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdee5(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdeed FUN_14d7bdeed body=16 status=ok
// SIG undefined FUN_14d7bdeed(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bdeae) overlaps instruction at (ram,0x00014d7bdead)
    */

uint FUN_14d7bdeed(void)

{
  undefined1 uVar1;
  uint *unaff_RSI;
  bool in_CF;
  bool in_ZF;
  char in_SF;
  bool in_OF;
  
  uVar1 = (undefined1)*unaff_RSI;
  if (in_OF) {
    out(0,uVar1);
  }
  else {
    if (in_CF || in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (!in_ZF && in_SF == '\0') {
      return *unaff_RSI & 0x744535d2;
    }
  }
  out(0,uVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdf28 FUN_14d7bdf28 body=6 status=ok
// SIG undefined FUN_14d7bdf28(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdf28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdf30 FUN_14d7bdf30 body=1 status=ok
// SIG undefined FUN_14d7bdf30(void)

void FUN_14d7bdf30(undefined8 param_1,longlong param_2)

{
  char in_AL;
  undefined4 *unaff_RSI;
  
  out(*unaff_RSI,(short)param_2);
  *(char *)(param_2 + -0x3c) = *(char *)(param_2 + -0x3c) + in_AL;
  return;
}



// FUNCTION 14d7bdf4c FUN_14d7bdf4c body=41 status=ok
// SIG undefined FUN_14d7bdf4c(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bdf4c(undefined8 param_1,longlong param_2)

{
  undefined6 uVar1;
  undefined1 *unaff_RBX;
  uint unaff_ESI;
  
  uVar1 = (undefined6)((ulonglong)param_1 >> 0x10);
  *(uint *)CONCAT62(uVar1,CONCAT11(*unaff_RBX,(char)param_1)) =
       *(uint *)CONCAT62(uVar1,CONCAT11(*unaff_RBX,(char)param_1)) & 0xf9c228ff;
  *(uint *)(param_2 + -0xc) = *(uint *)(param_2 + -0xc) >> 0x13;
  _DAT_a84f1d54b118c705 = unaff_ESI;
  *(char *)(ulonglong)unaff_ESI = *(char *)(ulonglong)unaff_ESI + (char)unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdf82 FUN_14d7bdf82 body=4 status=ok
// SIG undefined FUN_14d7bdf82(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdf82(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdf8f FUN_14d7bdf8f body=8 status=ok
// SIG undefined FUN_14d7bdf8f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdf8f(undefined8 param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  byte in_AL;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  undefined1 *unaff_RDI;
  
  uVar2 = in(param_2);
  *unaff_RDI = uVar2;
  if ((POPCOUNT((uint)in_AL) & 1U) != 0) {
    pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -0x21708355);
    *pcVar1 = *pcVar1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdfa9 FUN_14d7bdfa9 body=2 status=ok
// SIG undefined FUN_14d7bdfa9(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bdfc0) overlaps instruction at (ram,0x00014d7bdfbb)
    */

void FUN_14d7bdfa9(undefined8 param_1)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  int unaff_EBP;
  undefined4 unaff_0000002c;
  uint *unaff_RSI;
  undefined4 unaff_EDI;
  undefined7 uVar7;
  
  bVar4 = (byte)((uint)unaff_EDI >> 8);
  uVar7 = (undefined7)((ulonglong)param_1 >> 8);
  pbVar6 = (byte *)CONCAT71(uVar7,(byte)param_1 + *(byte *)((longlong)unaff_RSI + -0x7494cd43));
  piVar1 = (int *)(CONCAT44(unaff_0000002c,unaff_EBP) + -0x4db1c868);
  *piVar1 = *piVar1 + unaff_EBP +
            (uint)CARRY1((byte)param_1,*(byte *)((longlong)unaff_RSI + -0x7494cd43));
  bVar2 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar4;
  uVar5 = (uint)CARRY1(bVar2,bVar4);
  uVar3 = *unaff_RSI + 0x1c26d6a8;
  if ((*unaff_RSI < 0xe3d92958 || uVar3 < uVar5) || uVar3 == uVar5) {
    uVar5 = (int)CONCAT71(uVar7,uRame254f6005e368dd1) + 0x1b413d69;
    *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdfb7 FUN_14d7bdfb7 body=5 status=ok
// SIG undefined FUN_14d7bdfb7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdfb7(void)

{
  longlong unaff_RDI;
  
  *(int *)(unaff_RDI + -0x69) = *(int *)(unaff_RDI + -0x69) + -2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdfc3 FUN_14d7bdfc3 body=1 status=ok
// SIG undefined FUN_14d7bdfc3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdfc3(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bdfd9 FUN_14d7bdfd9 body=8 status=ok
// SIG undefined FUN_14d7bdfd9(void)

undefined4 FUN_14d7bdfd9(undefined8 param_1,longlong param_2)

{
  undefined4 unaff_EDI;
  
  *(byte *)(param_2 + 0x2d) = ~*(byte *)(param_2 + 0x2d);
  return unaff_EDI;
}



// FUNCTION 14d7bdff8 FUN_14d7bdff8 body=1 status=ok
// SIG undefined FUN_14d7bdff8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bdff8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be000 FUN_14d7be000 body=27 status=ok
// SIG undefined FUN_14d7be000(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be000(void)

{
  ulonglong uVar1;
  uint uVar2;
  longlong in_RAX;
  undefined4 *unaff_RSI;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  
  uVar1 = (longlong)*(int *)(in_RAX + -0x5ff1408) * 0x1caec6;
  uVar2 = ((int)in_RAX + 0x59abd58b) - (uint)((longlong)(int)uVar1 != uVar1);
  if ((POPCOUNT(uVar2 & 0xff) & 1U) != 0) {
    *(undefined4 *)(uVar1 & 0xffffffff) = *unaff_RSI;
    uRam0000000000a3e0f8 = 0x53002626;
    uRam0000000000a3e0f0 =
         (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
         (ulonglong)(in_TF & 1) * 0x100 |
         (ulonglong)((uVar2 + *(int *)(ulonglong)uVar2 & 0x14ea92cf) == 0) * 0x40 |
         (ulonglong)(in_AF & 1) * 0x10 |
         (ulonglong)((POPCOUNT(uVar2 + *(int *)(ulonglong)uVar2 & 0xcf) & 1U) == 0) * 4 |
         (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
         (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be01c FUN_14d7be01c body=16 status=ok
// SIG undefined FUN_14d7be01c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be01c(void)

{
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_PF;
  
  if (!in_PF) {
    *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be02f FUN_14d7be02f body=6 status=ok
// SIG undefined FUN_14d7be02f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be02f(undefined8 param_1,undefined2 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *puStack_1471;
  undefined4 *puStack_1461;
  undefined8 uStack_10;
  
  puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x19';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  *puStack_1471 = *unaff_RSI;
  in(param_2);
  *(int *)(puStack_1471 + -0x1d52ffd9) =
       (*(int *)(puStack_1471 + -0x1d52ffd9) - (int)&stack0xfffffffffffffff8) + -1;
  out(*puStack_1461,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be038 FUN_14d7be038 body=3 status=ok
// SIG undefined FUN_14d7be038(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be038(undefined8 param_1,undefined2 param_2)

{
  int unaff_EBP;
  longlong unaff_RDI;
  undefined8 uStackX_8;
  
  in(param_2);
  *(int *)(unaff_RDI + -0x1d52ffda) = (*(int *)(unaff_RDI + -0x1d52ffda) - unaff_EBP) + -1;
  out(*uStackX_8,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be03c FUN_14d7be03c body=5 status=ok
// SIG undefined FUN_14d7be03c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be03c(undefined8 param_1,undefined2 param_2)

{
  int unaff_EBP;
  longlong unaff_RDI;
  undefined4 *unaff_retaddr;
  
  *(int *)(unaff_RDI + -0x1d52ffda) = (*(int *)(unaff_RDI + -0x1d52ffda) - unaff_EBP) + -1;
  out(*unaff_retaddr,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be04a FUN_14d7be04a body=3 status=ok
// SIG undefined FUN_14d7be04a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be04a(undefined8 param_1,undefined2 param_2)

{
  undefined8 uStackX_8;
  
  out(*uStackX_8,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be052 FUN_14d7be052 body=1 status=ok
// SIG undefined FUN_14d7be052(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be052(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_ZF;
  
  if (in_ZF) {
    uVar1 = in(param_2);
    *(undefined1 *)unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be057 FUN_14d7be057 body=7 status=ok
// SIG undefined FUN_14d7be057(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be057(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_ZF;
  
  if (in_ZF) {
    uVar1 = in(param_2);
    *(undefined1 *)unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be071 FUN_14d7be071 body=3 status=ok
// SIG undefined FUN_14d7be071(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7be0eb) overlaps instruction at (ram,0x00014d7be0e9)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7be100) */

void FUN_14d7be071(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  short sVar3;
  uint uVar4;
  longlong in_RAX;
  int *piVar5;
  char cVar6;
  undefined2 uVar7;
  char *pcVar8;
  undefined1 unaff_BL;
  undefined6 unaff_0000001a;
  ulonglong uVar9;
  longlong unaff_RBP;
  char unaff_SIL;
  int unaff_EDI;
  undefined2 in_CS;
  bool bVar10;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  
  cVar6 = (char)((ulonglong)param_1 >> 8);
  uVar7 = CONCAT11((byte)((ulonglong)param_2 >> 8) ^ *(byte *)(in_RAX + 0x2d),(char)param_2);
  uVar4 = (uint)in_RAX & 0xcf00008a;
  if ((POPCOUNT((uint)in_RAX & 0x8a) & 1U) != 0) {
    *(char *)(param_4 + 0x38c375ed) = *(char *)(param_4 + 0x38c375ed) + unaff_SIL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = *(undefined1 *)(ulonglong)uVar4;
  if ((int)uVar4 < 0) {
    out(uVar7,(char)uVar4);
    *(undefined2 *)(unaff_RBP + 0x16 + CONCAT62(unaff_0000001a,CONCAT11(uVar1,unaff_BL))) = in_CS;
    sVar3 = (short)(uVar4 >> 0x10);
    pcVar8 = (char *)(ulonglong)(uint)((int)sVar3 >> 0xf);
    uVar9 = (ulonglong)CONCAT22(sVar3,CONCAT11(cVar6,(char)uVar4));
    *pcVar8 = *pcVar8 + (char)(((ulonglong)&stack0x00000000 & 0xffffffff) >> 8);
    lVar2 = (longlong)*(int *)CONCAT62(unaff_0000001a,CONCAT11(uVar1,unaff_BL)) * -0x7118ff3f;
    bVar10 = (int)lVar2 != lVar2;
    *(ulonglong *)(uVar9 - 8) =
         (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)bVar10 * 0x800 |
         (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
         (ulonglong)(*pcVar8 < '\0') * 0x80 | (ulonglong)(*pcVar8 == '\0') * 0x40 |
         (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(*pcVar8) & 1U) == 0) * 4 |
         (ulonglong)bVar10 | (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000
         | (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
    pcVar8[0x4b97] = pcVar8[0x4b97] | (byte)param_1;
    *(undefined8 *)(uVar9 - 0x10) = 0x64000e16;
    *(char *)(param_1 + 0x5a6113) = *(char *)(param_1 + 0x5a6113) + cVar6;
    *(undefined8 *)(uVar9 - 0x18) = 0x7e81bf35;
    piVar5 = (int *)CONCAT71((int7)(((ulonglong)&stack0x00000000 & 0xffffffff) >> 8),0x24);
    do {
      *(char *)((longlong)piVar5 + 0x35) = *(char *)((longlong)piVar5 + 0x35) + cVar6;
      piVar5 = (int *)((ulonglong)(uint3)((uint)(*piVar5 * 0x4ee0000) >> 8) << 8);
    } while( true );
  }
  pcVar8 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),uVar7) + 0xe0234d);
  *pcVar8 = *pcVar8 + (char)param_2;
  *(char *)(ulonglong)(unaff_EDI + 0x43) = *(char *)(ulonglong)(unaff_EDI + 0x43) + (byte)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be075 FUN_14d7be075 body=7 status=ok
// SIG undefined FUN_14d7be075(void)

void FUN_14d7be075(undefined8 param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  
  out(param_2,in_EAX);
  return;
}



// FUNCTION 14d7be083 FUN_14d7be083 body=54 status=ok
// SIG undefined FUN_14d7be083(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7be08d) overlaps instruction at (ram,0x00014d7be089)
    */

void FUN_14d7be083(undefined8 param_1,ulonglong param_2)

{
  undefined1 *puVar1;
  int iVar2;
  char cVar3;
  undefined4 in_EAX;
  char *pcVar4;
  byte unaff_BL;
  undefined7 unaff_00000019;
  int *unaff_RDI;
  longlong unaff_R13;
  char unaff_R15B;
  
  pcVar4 = (char *)(param_2 & 0xffffffff);
  *pcVar4 = *pcVar4 + (char)pcVar4;
  cVar3 = (char)in_EAX;
  if ((char)pcVar4 != DAT_1c05274ac) {
    pcVar4 = (char *)CONCAT71((int7)((ulonglong)pcVar4 >> 8),DAT_1c05274ac);
    cVar3 = DAT_1c05274ac;
  }
  DAT_1c05274ac = cVar3;
  iVar2 = *unaff_RDI;
  pcVar4[unaff_R13 * 2 + -0x45] = pcVar4[unaff_R13 * 2 + -0x45] + unaff_R15B;
  cVar3 = (char)pcVar4;
  out(0,cVar3);
  *unaff_RDI = *unaff_RDI + 1;
  *pcVar4 = *pcVar4 + cVar3;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + cVar3;
  if (iVar2 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar1 = (undefined1 *)
           ((ulonglong)
            CONCAT22((short)((uint)in_EAX >> 0x10),
                     CONCAT11((byte)((uint)in_EAX >> 8) | unaff_BL,(char)in_EAX)) - 0x17);
  *puVar1 = *puVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be0bb FUN_14d7be0bb body=8 status=ok
// SIG undefined FUN_14d7be0bb(void)

/* WARNING: Instruction at (ram,0x00014d7be0eb) overlaps instruction at (ram,0x00014d7be0e9)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7be164) */
/* WARNING: Removing unreachable block (ram,0x00014d7be16b) */
/* WARNING: Removing unreachable block (ram,0x00014d7be16d) */
/* WARNING: Removing unreachable block (ram,0x00014d7be1b2) */
/* WARNING: Removing unreachable block (ram,0x00014d7be149) */
/* WARNING: Removing unreachable block (ram,0x00014d7be100) */
/* WARNING: Removing unreachable block (ram,0x00014d7be061) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7be0bb(undefined8 param_1,undefined2 param_2)

{
  byte *pbVar1;
  char cVar2;
  longlong lVar3;
  undefined1 uVar4;
  ulonglong in_RAX;
  ulonglong uVar5;
  int *piVar6;
  uint *puVar7;
  byte bVar8;
  byte bVar9;
  char *pcVar10;
  char cVar11;
  uint uVar12;
  byte bVar13;
  int *unaff_RBX;
  uint uVar14;
  ulonglong uVar15;
  undefined4 unaff_EBP;
  undefined4 unaff_0000002c;
  char *unaff_RSI;
  ulonglong unaff_RDI;
  undefined2 in_CS;
  bool in_CF;
  bool bVar16;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 *unaff_retaddr;
  
  uVar14 = (uint)&stack0x00000000;
  if (in_CF) {
    pcVar10 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0xa7f5eb7);
    *pcVar10 = *pcVar10 + (char)param_2;
  }
  else {
    bVar8 = (byte)param_1;
    bVar9 = (byte)((ulonglong)param_1 >> 8) &
            *(byte *)(unaff_RDI + 0x79 + CONCAT44(unaff_0000002c,unaff_EBP) * 4);
    bVar13 = (byte)((ulonglong)unaff_RBX >> 8);
    bVar16 = CARRY1(bVar9,bVar13);
    bVar9 = bVar9 + bVar13;
    if (bVar16 || bVar9 == 0) {
      out(param_2,(char)in_RAX);
      *(undefined2 *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x16 + (longlong)unaff_RBX) = in_CS;
      uVar5 = CONCAT62((int6)(in_RAX >> 0x10),
                       CONCAT11((char)(in_RAX >> 8) + bVar9 + bVar16,(char)in_RAX));
      pcVar10 = (char *)(ulonglong)(uint)((int)uVar5 >> 0x1f);
      uVar15 = uVar5 & 0xffffffff;
      *pcVar10 = *pcVar10 + (char)(((ulonglong)&stack0x00000000 & 0xffffffff) >> 8);
      lVar3 = (longlong)*unaff_RBX * -0x7118ff3f;
      bVar16 = (int)lVar3 != lVar3;
      *(ulonglong *)(uVar15 - 8) =
           (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)bVar16 * 0x800 |
           (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
           (ulonglong)(*pcVar10 < '\0') * 0x80 | (ulonglong)(*pcVar10 == '\0') * 0x40 |
           (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(*pcVar10) & 1U) == 0) * 4 |
           (ulonglong)bVar16 | (ulonglong)(in_ID & 1) * 0x200000 |
           (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
           (ulonglong)(in_AC & 1) * 0x40000;
      pcVar10[0x4b97] = pcVar10[0x4b97] | bVar8;
      *(undefined8 *)(uVar15 - 0x10) = 0x64000e16;
      pcVar10 = (char *)(CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(bVar9,bVar8)) +
                        0x5a6113);
      *pcVar10 = *pcVar10 + bVar9;
      *(undefined8 *)(uVar15 - 0x18) = 0x7e81bf35;
      piVar6 = (int *)CONCAT71((int7)(((ulonglong)&stack0x00000000 & 0xffffffff) >> 8),0x24);
      do {
        *(char *)((longlong)piVar6 + 0x35) = *(char *)((longlong)piVar6 + 0x35) + bVar9;
        piVar6 = (int *)((ulonglong)(uint3)((uint)(*piVar6 * 0x4ee0000) >> 8) << 8);
      } while( true );
    }
    uVar4 = *(undefined1 *)((longlong)unaff_RBX + (in_RAX & 0xff));
    *(char *)(unaff_RDI - 0x7c) = (*(char *)(unaff_RDI - 0x7c) - bVar9) - bVar16;
    puVar7 = (uint *)(unaff_RDI & 0xffffffff);
    unaff_RDI = CONCAT71((int7)(in_RAX >> 8),uVar4) & 0xffffffff;
    uVar12 = (uint)unaff_RBX >> (bVar8 & 0x1f) | (uint)unaff_RBX << 0x20 - (bVar8 & 0x1f);
    *puVar7 = *puVar7 << 1 | (uint)((int)*puVar7 < 0);
    uVar4 = in(0xbf);
    in_RAX = CONCAT71((int7)((ulonglong)puVar7 >> 8),uVar4);
    pbVar1 = (byte *)((ulonglong)uVar12 - 0x601b73de);
    bVar8 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar9;
    cVar2 = (char)uVar12 - cRam00000000a6950106;
    cVar11 = cVar2 - CARRY1(bVar8,bVar9);
    unaff_RBX = (int *)(ulonglong)CONCAT31((int3)(uVar12 >> 8),cVar11);
    unaff_RSI = (char *)*unaff_retaddr;
    uVar14 = (int)unaff_retaddr + 8;
    if (cVar11 != '\0' &&
        (SBORROW1((char)uVar12,cRam00000000a6950106) != SBORROW1(cVar2,CARRY1(bVar8,bVar9))) ==
        cVar11 < '\0') {
      unaff_RSI[(longlong)unaff_RBX + -0x35] = unaff_RSI[(longlong)unaff_RBX + -0x35] & 0xfc;
      do {
      } while( true );
    }
  }
  *(char *)(unaff_RDI + 0x7d720b2b) = *(char *)(unaff_RDI + 0x7d720b2b) + (char)unaff_RBX;
  puVar7 = (uint *)(in_RAX + CONCAT44(unaff_0000002c,unaff_EBP));
  *puVar7 = *puVar7 | uVar14;
  *unaff_RSI = *unaff_RSI + (char)(in_RAX >> 8);
  *unaff_RSI = *unaff_RSI + (char)((ulonglong)unaff_RBX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be0c4 FUN_14d7be0c4 body=28 status=ok
// SIG undefined FUN_14d7be0c4(void)

/* WARNING: Instruction at (ram,0x00014d7be0eb) overlaps instruction at (ram,0x00014d7be0e9)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7be149) */
/* WARNING: Removing unreachable block (ram,0x00014d7be164) */
/* WARNING: Removing unreachable block (ram,0x00014d7be16b) */
/* WARNING: Removing unreachable block (ram,0x00014d7be16d) */
/* WARNING: Removing unreachable block (ram,0x00014d7be1b2) */
/* WARNING: Removing unreachable block (ram,0x00014d7be100) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7be0c4(longlong param_1,undefined2 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  uint *puVar3;
  char cVar4;
  longlong lVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  ulonglong in_RAX;
  ulonglong uVar9;
  int *piVar10;
  uint *puVar11;
  byte bVar12;
  char *pcVar13;
  char cVar14;
  uint uVar15;
  int *unaff_RBX;
  ulonglong uVar16;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  undefined2 in_CS;
  bool in_CF;
  bool bVar17;
  byte in_AF;
  bool in_ZF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 *unaff_retaddr;
  
  bVar12 = (byte)((ulonglong)param_1 >> 8);
  if (in_CF || in_ZF) {
    out(param_2,(char)in_RAX);
    *(undefined2 *)(unaff_RBP + 0x16 + (longlong)unaff_RBX) = in_CS;
    uVar9 = CONCAT62((int6)(in_RAX >> 0x10),
                     CONCAT11((char)(in_RAX >> 8) + bVar12 + in_CF,(char)in_RAX));
    pcVar13 = (char *)(ulonglong)(uint)((int)uVar9 >> 0x1f);
    uVar16 = uVar9 & 0xffffffff;
    *pcVar13 = *pcVar13 + (char)(((ulonglong)&stack0x00000000 & 0xffffffff) >> 8);
    lVar5 = (longlong)*unaff_RBX * -0x7118ff3f;
    bVar17 = (int)lVar5 != lVar5;
    *(ulonglong *)(uVar16 - 8) =
         (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)bVar17 * 0x800 | 0x400 |
         (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
         (ulonglong)(*pcVar13 < '\0') * 0x80 | (ulonglong)(*pcVar13 == '\0') * 0x40 |
         (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(*pcVar13) & 1U) == 0) * 4 |
         (ulonglong)bVar17 | (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000
         | (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
    pcVar13[0x4b97] = pcVar13[0x4b97] | (byte)param_1;
    *(undefined8 *)(uVar16 - 0x10) = 0x64000e16;
    *(char *)(param_1 + 0x5a6113) = *(char *)(param_1 + 0x5a6113) + bVar12;
    *(undefined8 *)(uVar16 - 0x18) = 0x7e81bf35;
    piVar10 = (int *)CONCAT71((int7)(((ulonglong)&stack0x00000000 & 0xffffffff) >> 8),0x24);
    do {
      *(char *)((longlong)piVar10 + 0x35) = *(char *)((longlong)piVar10 + 0x35) + bVar12;
      piVar10 = (int *)((ulonglong)(uint3)((uint)(*piVar10 * 0x4ee0000) >> 8) << 8);
    } while( true );
  }
  uVar7 = *(undefined1 *)((longlong)unaff_RBX + (in_RAX & 0xff));
  *(char *)(unaff_RDI - 0x7c) = (*(char *)(unaff_RDI - 0x7c) - bVar12) - in_CF;
  puVar11 = (uint *)(unaff_RDI & 0xffffffff);
  bVar6 = (byte)param_1 & 0x1f;
  uVar15 = (uint)unaff_RBX >> bVar6 | (uint)unaff_RBX << 0x20 - bVar6;
  *puVar11 = *puVar11 << 1 | (uint)((int)*puVar11 < 0);
  uVar8 = in(0xbf);
  pbVar1 = (byte *)((ulonglong)uVar15 - 0x601b73de);
  bVar6 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar12;
  cVar4 = (char)uVar15 - cRam00000000a6950106;
  cVar14 = cVar4 - CARRY1(bVar6,bVar12);
  pcVar13 = (char *)*unaff_retaddr;
  if (cVar14 != '\0' &&
      (SBORROW1((char)uVar15,cRam00000000a6950106) != SBORROW1(cVar4,CARRY1(bVar6,bVar12))) ==
      cVar14 < '\0') {
    pcVar13[(ulonglong)CONCAT31((int3)(uVar15 >> 8),cVar14) - 0x35] =
         pcVar13[(ulonglong)CONCAT31((int3)(uVar15 >> 8),cVar14) - 0x35] & 0xfc;
    do {
    } while( true );
  }
  pcVar2 = (char *)((CONCAT71((int7)(in_RAX >> 8),uVar7) & 0xffffffff) + 0x7d720b2b);
  *pcVar2 = *pcVar2 + cVar14;
  puVar3 = (uint *)(CONCAT71((int7)((ulonglong)puVar11 >> 8),uVar8) + unaff_RBP);
  *puVar3 = *puVar3 | (int)unaff_retaddr + 8U;
  *pcVar13 = *pcVar13 + (char)((ulonglong)puVar11 >> 8);
  *pcVar13 = *pcVar13 + (char)(uVar15 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be0e5 FUN_14d7be0e5 body=4 status=ok
// SIG undefined FUN_14d7be0e5(void)

/* WARNING: Instruction at (ram,0x00014d7be0eb) overlaps instruction at (ram,0x00014d7be0e9)
    */

undefined4 FUN_14d7be0e5(longlong param_1)

{
  char *pcVar1;
  undefined8 in_RAX;
  int *piVar2;
  char cVar3;
  longlong unaff_RDI;
  undefined4 unaff_R15D;
  
  cVar3 = (char)((ulonglong)param_1 >> 8);
  *(char *)(param_1 + 0x5a6113) = *(char *)(param_1 + 0x5a6113) + cVar3;
  piVar2 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX + 0x24);
  if (0xdb < (byte)in_RAX) {
    pcVar1 = (char *)(param_1 + unaff_RDI * 2);
    *pcVar1 = *pcVar1 + cVar3;
    return unaff_R15D;
  }
  do {
    *(char *)((longlong)piVar2 + 0x35) = *(char *)((longlong)piVar2 + 0x35) + cVar3;
    piVar2 = (int *)((ulonglong)(uint3)((uint)(*piVar2 * 0x4ee0000) >> 8) << 8);
  } while( true );
}



// FUNCTION 14d7be0f3 FUN_14d7be0f3 body=3 status=ok
// SIG undefined FUN_14d7be0f3(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7be100) */

void FUN_14d7be0f3(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  char *in_RAX;
  int *piVar2;
  byte unaff_BL;
  undefined7 unaff_00000019;
  ulonglong unaff_RBP;
  int *unaff_RDI;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (!in_ZF && in_OF == in_SF) {
    piVar2 = (int *)(unaff_RBP & 0xffffffff);
    do {
      piVar2 = (int *)((ulonglong)(uint3)((uint)(*piVar2 * 0x4ee0000) >> 8) * 0x100);
      *(char *)((longlong)piVar2 + 0x35) =
           *(char *)((longlong)piVar2 + 0x35) + (char)((ulonglong)param_1 >> 8);
    } while( true );
  }
  *unaff_RDI = *unaff_RDI + 1;
  *in_RAX = *in_RAX + (char)in_RAX;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)in_RAX;
  if (param_1 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar1 = (undefined1 *)
           (CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                     CONCAT11((byte)((ulonglong)param_2 >> 8) | unaff_BL,(char)param_2)) + -0x17);
  *puVar1 = *puVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be0fa FUN_14d7be0fa body=8 status=ok
// SIG undefined FUN_14d7be0fa(void)

/* WARNING: Instruction at (ram,0x00014d7be0fc) overlaps instruction at (ram,0x00014d7be0fb)
    */

undefined4 FUN_14d7be0fa(longlong param_1,undefined2 param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined8 in_RAX;
  int *piVar3;
  char cVar4;
  longlong unaff_RDI;
  undefined4 unaff_R15D;
  
  cVar4 = (char)((ulonglong)param_1 >> 8);
  bVar2 = (byte)in_RAX;
  out(param_2,bVar2);
  piVar3 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2 + 0x24);
  if (0xdb < bVar2) {
    pcVar1 = (char *)(param_1 + unaff_RDI * 2);
    *pcVar1 = *pcVar1 + cVar4;
    return unaff_R15D;
  }
  do {
    *(char *)((longlong)piVar3 + 0x35) = *(char *)((longlong)piVar3 + 0x35) + cVar4;
    piVar3 = (int *)((ulonglong)(uint3)((uint)(*piVar3 * 0x4ee0000) >> 8) << 8);
  } while( true );
}



// FUNCTION 14d7be103 FUN_14d7be103 body=4 status=ok
// SIG undefined FUN_14d7be103(void)

char FUN_14d7be103(void)

{
  char in_AL;
  
  return in_AL + -0x79;
}



// FUNCTION 14d7be10b FUN_14d7be10b body=8 status=ok
// SIG undefined FUN_14d7be10b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7be14b) overlaps instruction at (ram,0x00014d7be149)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7be149) */
/* WARNING: Removing unreachable block (ram,0x00014d7be164) */
/* WARNING: Removing unreachable block (ram,0x00014d7be16b) */
/* WARNING: Removing unreachable block (ram,0x00014d7be16d) */
/* WARNING: Removing unreachable block (ram,0x00014d7be1b2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7be10b(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  uint *puVar3;
  char cVar4;
  undefined8 *puVar5;
  char *pcVar6;
  byte bVar7;
  byte bVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined8 in_RAX;
  byte bVar11;
  char cVar12;
  uint uVar13;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char in_CF;
  
  bVar8 = (byte)in_RAX;
  *(char *)(unaff_RDI + -0xb) = *(char *)(unaff_RDI + -0xb) + bVar8 + in_CF;
  uVar9 = *(undefined1 *)(unaff_RBX + (ulonglong)(ushort)bVar8);
  bVar11 = (byte)((ulonglong)param_1 >> 8);
  DAT_0ff9f7d5 = (DAT_0ff9f7d5 - bVar11) -
                 ((byte)((ulonglong)param_2 >> 8) < (byte)((ulonglong)unaff_RBX >> 8));
  bVar7 = (byte)param_1 & 0x1f;
  uVar13 = (uint)unaff_RBX >> bVar7 | (uint)unaff_RBX << 0x20 - bVar7;
  uRam000000000ff9f851 = uRam000000000ff9f851 << 1 | (uint)((int)uRam000000000ff9f851 < 0);
  puVar5 = *(undefined8 **)(ulonglong)(uint)(*(int *)(unaff_RSI + 0x5496e601) * -0x6d);
  uVar10 = in(0xbf);
  pbVar1 = (byte *)((ulonglong)uVar13 - 0x601b73de);
  bVar7 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar11;
  cVar4 = (char)uVar13 - cRam00000000a6950106;
  cVar12 = cVar4 - CARRY1(bVar7,bVar11);
  pcVar6 = (char *)*puVar5;
  if (cVar12 == '\0' ||
      (SBORROW1((char)uVar13,cRam00000000a6950106) != SBORROW1(cVar4,CARRY1(bVar7,bVar11))) !=
      cVar12 < '\0') {
    pcVar2 = (char *)((CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),(ushort)bVar8) >>
                                      8),uVar9) & 0xffffffff) + 0x7d720b2b);
    *pcVar2 = *pcVar2 + cVar12;
    puVar3 = (uint *)(CONCAT71(0xff9f8,uVar10) + unaff_RBP);
    *puVar3 = *puVar3 | (int)puVar5 + 8U;
    *pcVar6 = *pcVar6 + -8;
    *pcVar6 = *pcVar6 + (char)(uVar13 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar6[(ulonglong)CONCAT31((int3)(uVar13 >> 8),cVar12) - 0x35] =
       pcVar6[(ulonglong)CONCAT31((int3)(uVar13 >> 8),cVar12) - 0x35] & 0xfc;
  do {
  } while( true );
}



// FUNCTION 14d7be113 FUN_14d7be113 body=8 status=ok
// SIG undefined FUN_14d7be113(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7be14b) overlaps instruction at (ram,0x00014d7be149)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7be149) */
/* WARNING: Removing unreachable block (ram,0x00014d7be164) */
/* WARNING: Removing unreachable block (ram,0x00014d7be16b) */
/* WARNING: Removing unreachable block (ram,0x00014d7be16d) */
/* WARNING: Removing unreachable block (ram,0x00014d7be1b2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7be113(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  uint *puVar3;
  int iVar4;
  char cVar5;
  undefined8 *puVar6;
  char *pcVar7;
  byte bVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined8 in_RAX;
  uint *puVar11;
  byte bVar12;
  char cVar13;
  uint uVar14;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  
  iVar4 = *(int *)(unaff_RSI + 0x5496e601);
  uVar9 = *(undefined1 *)(unaff_RBX + (ulonglong)(ushort)(byte)in_RAX);
  bVar12 = (byte)((ulonglong)param_1 >> 8);
  *(char *)(unaff_RDI - 0x7c) =
       (*(char *)(unaff_RDI - 0x7c) - bVar12) -
       ((byte)((ulonglong)param_2 >> 8) < (byte)((ulonglong)unaff_RBX >> 8));
  puVar11 = (uint *)(unaff_RDI & 0xffffffff);
  bVar8 = (byte)param_1 & 0x1f;
  uVar14 = (uint)unaff_RBX >> bVar8 | (uint)unaff_RBX << 0x20 - bVar8;
  *puVar11 = *puVar11 << 1 | (uint)((int)*puVar11 < 0);
  puVar6 = *(undefined8 **)(ulonglong)(uint)(iVar4 * -0x6d);
  uVar10 = in(0xbf);
  pbVar1 = (byte *)((ulonglong)uVar14 - 0x601b73de);
  bVar8 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar12;
  cVar5 = (char)uVar14 - cRam00000000a6950106;
  cVar13 = cVar5 - CARRY1(bVar8,bVar12);
  pcVar7 = (char *)*puVar6;
  if (cVar13 == '\0' ||
      (SBORROW1((char)uVar14,cRam00000000a6950106) != SBORROW1(cVar5,CARRY1(bVar8,bVar12))) !=
      cVar13 < '\0') {
    pcVar2 = (char *)((CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                                (ushort)(byte)in_RAX) >> 8),uVar9) & 0xffffffff) +
                     0x7d720b2b);
    *pcVar2 = *pcVar2 + cVar13;
    puVar3 = (uint *)(CONCAT71((int7)((ulonglong)puVar11 >> 8),uVar10) + unaff_RBP);
    *puVar3 = *puVar3 | (int)puVar6 + 8U;
    *pcVar7 = *pcVar7 + (char)((ulonglong)puVar11 >> 8);
    *pcVar7 = *pcVar7 + (char)(uVar14 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar7[(ulonglong)CONCAT31((int3)(uVar14 >> 8),cVar13) - 0x35] =
       pcVar7[(ulonglong)CONCAT31((int3)(uVar14 >> 8),cVar13) - 0x35] & 0xfc;
  do {
  } while( true );
}



// FUNCTION 14d7be11b FUN_14d7be11b body=12 status=ok
// SIG undefined FUN_14d7be11b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7be14b) overlaps instruction at (ram,0x00014d7be149)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7be149) */
/* WARNING: Removing unreachable block (ram,0x00014d7be164) */
/* WARNING: Removing unreachable block (ram,0x00014d7be16b) */
/* WARNING: Removing unreachable block (ram,0x00014d7be16d) */
/* WARNING: Removing unreachable block (ram,0x00014d7be1b2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7be11b(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  uint *puVar3;
  char cVar4;
  char *pcVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined8 in_RAX;
  uint *puVar9;
  byte bVar10;
  char cVar11;
  uint uVar12;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  undefined8 *unaff_retaddr;
  
  uVar7 = *(undefined1 *)(unaff_RBX + (ulonglong)(ushort)(byte)in_RAX);
  bVar10 = (byte)((ulonglong)param_1 >> 8);
  *(char *)(unaff_RDI - 0x7c) =
       (*(char *)(unaff_RDI - 0x7c) - bVar10) -
       ((byte)((ulonglong)param_2 >> 8) < (byte)((ulonglong)unaff_RBX >> 8));
  puVar9 = (uint *)(unaff_RDI & 0xffffffff);
  bVar6 = (byte)param_1 & 0x1f;
  uVar12 = (uint)unaff_RBX >> bVar6 | (uint)unaff_RBX << 0x20 - bVar6;
  *puVar9 = *puVar9 << 1 | (uint)((int)*puVar9 < 0);
  uVar8 = in(0xbf);
  pbVar1 = (byte *)((ulonglong)uVar12 - 0x601b73de);
  bVar6 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar10;
  cVar4 = (char)uVar12 - cRam00000000a6950106;
  cVar11 = cVar4 - CARRY1(bVar6,bVar10);
  pcVar5 = (char *)*unaff_retaddr;
  if (cVar11 == '\0' ||
      (SBORROW1((char)uVar12,cRam00000000a6950106) != SBORROW1(cVar4,CARRY1(bVar6,bVar10))) !=
      cVar11 < '\0') {
    pcVar2 = (char *)((CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                                (ushort)(byte)in_RAX) >> 8),uVar7) & 0xffffffff) +
                     0x7d720b2b);
    *pcVar2 = *pcVar2 + cVar11;
    puVar3 = (uint *)(CONCAT71((int7)((ulonglong)puVar9 >> 8),uVar8) + unaff_RBP);
    *puVar3 = *puVar3 | (int)unaff_retaddr + 8U;
    *pcVar5 = *pcVar5 + (char)((ulonglong)puVar9 >> 8);
    *pcVar5 = *pcVar5 + (char)(uVar12 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar5[(ulonglong)CONCAT31((int3)(uVar12 >> 8),cVar11) - 0x35] =
       pcVar5[(ulonglong)CONCAT31((int3)(uVar12 >> 8),cVar11) - 0x35] & 0xfc;
  do {
  } while( true );
}



// FUNCTION 14d7be137 FUN_14d7be137 body=14 status=ok
// SIG undefined FUN_14d7be137(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7be14b) overlaps instruction at (ram,0x00014d7be149)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7be149) */
/* WARNING: Removing unreachable block (ram,0x00014d7be164) */
/* WARNING: Removing unreachable block (ram,0x00014d7be16b) */
/* WARNING: Removing unreachable block (ram,0x00014d7be16d) */
/* WARNING: Removing unreachable block (ram,0x00014d7be1b2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7be137(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong in_RAX;
  char unaff_BL;
  char cVar2;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  longlong unaff_RDI;
  char in_CF;
  char *unaff_retaddr;
  undefined1 auStackX_8 [32];
  
  out((short)param_2,(int)in_RAX);
  cVar1 = unaff_BL - *(char *)(param_2 + -0x486afff6);
  cVar2 = cVar1 - in_CF;
  if (cVar2 == '\0' ||
      (SBORROW1(unaff_BL,*(char *)(param_2 + -0x486afff6)) != SBORROW1(cVar1,in_CF)) != cVar2 < '\0'
     ) {
    *(char *)(unaff_RDI + 0x7d720b2b) = *(char *)(unaff_RDI + 0x7d720b2b) + cVar2;
    *(uint *)(in_RAX + unaff_RBP) = *(uint *)(in_RAX + unaff_RBP) | (uint)auStackX_8;
    *unaff_retaddr = *unaff_retaddr + (char)((ulonglong)in_RAX >> 8);
    *unaff_retaddr = *unaff_retaddr + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  unaff_retaddr[CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,cVar2))) + -0x35]
       = unaff_retaddr
         [CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,cVar2))) + -0x35] &
         (byte)param_2;
  do {
  } while( true );
}



// FUNCTION 14d7be145 FUN_14d7be145 body=16 status=ok
// SIG undefined FUN_14d7be145(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7be164) */
/* WARNING: Removing unreachable block (ram,0x00014d7be16b) */
/* WARNING: Removing unreachable block (ram,0x00014d7be16d) */
/* WARNING: Removing unreachable block (ram,0x00014d7be1b2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7be145(char param_1)

{
  longlong in_RAX;
  undefined4 unaff_EBX;
  longlong unaff_RBP;
  char *unaff_RSI;
  longlong unaff_RDI;
  bool in_CF;
  
  if (in_CF) {
    unaff_RSI[0x20] = unaff_RSI[0x20] + param_1;
    do {
    } while( true );
  }
  *(char *)(unaff_RDI + 0x7d720b2b) = *(char *)(unaff_RDI + 0x7d720b2b) + (char)unaff_EBX;
  *(uint *)(in_RAX + unaff_RBP) = *(uint *)(in_RAX + unaff_RBP) | (uint)&stack0x00000000;
  *unaff_RSI = *unaff_RSI + (char)((ulonglong)in_RAX >> 8);
  *unaff_RSI = *unaff_RSI + (char)((uint)unaff_EBX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be14a FUN_14d7be14a body=37 status=ok
// SIG undefined FUN_14d7be14a(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7be164) */
/* WARNING: Removing unreachable block (ram,0x00014d7be16b) */
/* WARNING: Removing unreachable block (ram,0x00014d7be16d) */
/* WARNING: Removing unreachable block (ram,0x00014d7be1b2) */

void FUN_14d7be14a(void)

{
  byte *pbVar1;
  longlong unaff_RBX;
  byte in_R10B;
  longlong unaff_R14;
  
  pbVar1 = (byte *)(unaff_RBX + -0x35 + unaff_R14);
  *pbVar1 = *pbVar1 & in_R10B;
  do {
  } while( true );
}



// FUNCTION 14d7be171 FUN_14d7be171 body=28 status=ok
// SIG undefined FUN_14d7be171(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be171(longlong param_1,uint *param_2)

{
  byte unaff_BL;
  byte unaff_BH;
  char *unaff_RSI;
  char in_SF;
  char in_OF;
  
  in(0xf);
  if (in_OF != in_SF) {
    in(0xcd);
    *param_2 = *param_2 | 0xee526dba;
    unaff_RSI[-0x5a] = unaff_RSI[-0x5a] & unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)(param_1 + 0x403c0040) = *(byte *)(param_1 + 0x403c0040) ^ unaff_BH;
  *unaff_RSI = *unaff_RSI + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be194 FUN_14d7be194 body=1 status=ok
// SIG undefined FUN_14d7be194(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be194(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be198 FUN_14d7be198 body=14 status=ok
// SIG undefined FUN_14d7be198(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be198(void)

{
  code *pcVar1;
  longlong unaff_RSI;
  longlong unaff_RDI;
  bool in_CF;
  bool in_ZF;
  undefined2 in_FPUControlWord;
  
  *(undefined2 *)(unaff_RDI + 0x42) = in_FPUControlWord;
  if (in_CF || in_ZF) {
    LOCK();
    *(int *)(unaff_RSI + 0x5b42ed44) = (int)&stack0x00000000;
    UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7be1e3 FUN_14d7be1e3 body=3 status=ok
// SIG undefined FUN_14d7be1e3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be1e3(uint param_1)

{
  uint *puVar1;
  longlong unaff_RBX;
  longlong unaff_RSI;
  
  puVar1 = (uint *)(unaff_RBX + unaff_RSI * 2);
  *puVar1 = *puVar1 & param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be1fb FUN_14d7be1fb body=2 status=ok
// SIG undefined FUN_14d7be1fb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be1fb(void)

{
  int unaff_EBX;
  int *unaff_RSI;
  byte in_CF;
  
  *unaff_RSI = *unaff_RSI + unaff_EBX + (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be209 FUN_14d7be209 body=9 status=ok
// SIG undefined FUN_14d7be209(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be209(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  uVar1 = in(param_2);
  unaff_RDI[1] = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be215 FUN_14d7be215 body=25 status=ok
// SIG undefined FUN_14d7be215(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be215(undefined8 param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulonglong in_RAX;
  undefined1 unaff_BL;
  byte unaff_BH;
  byte bVar4;
  undefined6 unaff_0000001a;
  undefined8 *unaff_RSI;
  undefined4 *unaff_RDI;
  char unaff_R14B;
  longlong unaff_retaddr;
  
  pcVar1 = (char *)((in_RAX ^ 0x5e) + 0x36);
  *pcVar1 = *pcVar1 + (char)(in_RAX >> 8);
  out(param_2,(char)(in_RAX ^ 0x5e));
  uVar2 = *unaff_RSI;
  uVar3 = in(param_2);
  *unaff_RDI = uVar3;
  *(char *)(unaff_RDI + 1) = (char)uVar2 + '\x17';
  bVar4 = unaff_BH & *(byte *)(unaff_retaddr + -0x31);
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(bVar4,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(bVar4,unaff_BL)) + unaff_R14B;
  iRama7df76520a05560a = iRama7df76520a05560a + (int)(unaff_RDI + 1) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be22e FUN_14d7be22e body=7 status=ok
// SIG undefined FUN_14d7be22e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be22e(longlong param_1)

{
  undefined1 in_AL;
  undefined1 unaff_BL;
  byte unaff_BH;
  byte bVar1;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  undefined1 *unaff_RDI;
  char unaff_R14B;
  
  *unaff_RDI = in_AL;
  bVar1 = unaff_BH & *(byte *)(unaff_RBP + -0x31);
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(bVar1,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(bVar1,unaff_BL)) + unaff_R14B;
  *(int *)(param_1 + 5) = *(int *)(param_1 + 5) + (int)unaff_RDI + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be237 FUN_14d7be237 body=7 status=ok
// SIG undefined FUN_14d7be237(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be237(longlong param_1)

{
  uint unaff_EDI;
  
  *(int *)(param_1 + 5) = *(int *)(param_1 + 5) + (unaff_EDI ^ (uint)param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be23f FUN_14d7be23f body=2 status=ok
// SIG undefined FUN_14d7be23f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be23f(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  
  bVar2 = (byte)in_EAX & 0x7c;
  bVar1 = *(byte *)(CONCAT44(in_register_00000004,in_EAX) & 0xffffffffffffff7c);
  *(byte *)(CONCAT44(in_register_00000004,in_EAX) & 0xffffffffffffff7c) =
       *(char *)(CONCAT44(in_register_00000004,in_EAX) & 0xffffffffffffff7c) + bVar2;
  cRam0000000181b8d5ca =
       (cRam0000000181b8d5ca - (char)((ulonglong)param_2 >> 8)) - CARRY1(bVar1,bVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be254 FUN_14d7be254 body=6 status=ok
// SIG undefined FUN_14d7be254(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be254(longlong param_1,longlong param_2)

{
  char *pcVar1;
  undefined8 in_RAX;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  
  *(byte *)(param_2 + -0xbd5ef9d) = *(byte *)(param_2 + -0xbd5ef9d) ^ (byte)((ulonglong)in_RAX >> 8)
  ;
  if (param_1 != 0) {
    return;
  }
  cRam00000000c6f40000 = cRam00000000c6f40000 - unaff_BH;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x74d90639);
  *pcVar1 = *pcVar1 + unaff_BL;
  *(char *)(unaff_RBP + 0x32) = *(char *)(unaff_RBP + 0x32) - unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be263 FUN_14d7be263 body=13 status=ok
// SIG undefined FUN_14d7be263(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be263(longlong param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  
  if (param_1 != 0) {
    return;
  }
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) - unaff_BH;
  pcVar2 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x74d90639);
  *pcVar2 = *pcVar2 + unaff_BL;
  *(char *)(unaff_RBP + 0x32) = *(char *)(unaff_RBP + 0x32) - unaff_BL;
  puVar1 = (undefined1 *)(CONCAT71(in_register_00000001,in_AL) + -0xf);
  *puVar1 = *puVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be27a FUN_14d7be27a body=19 status=ok
// SIG undefined FUN_14d7be27a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be27a(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RSI;
  byte in_CF;
  
  *param_3 = (longlong)param_3 + (ulonglong)in_CF + *param_3;
  *(undefined1 *)CONCAT71(unaff_00000019,unaff_BL) = 0;
  DAT_1f1313d35408cbca = *(undefined1 *)(unaff_RSI + 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be291 FUN_14d7be291 body=4 status=ok
// SIG undefined FUN_14d7be291(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be291(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be29f FUN_14d7be29f body=16 status=ok
// SIG undefined FUN_14d7be29f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be29f(undefined8 param_1,longlong param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  uint in_EAX;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  uint *unaff_RSI;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  
  uVar2 = *unaff_RSI;
  puVar1 = (undefined2 *)(CONCAT71(unaff_00000019,unaff_BL) + -0x58 + param_2 * 2);
  *puVar1 = in_FPUControlWord;
  puVar1[2] = in_FPUStatusWord;
  puVar1[4] = in_FPUTagWord;
  *(undefined8 *)(puVar1 + 10) = in_FPUDataPointer;
  *(undefined8 *)(puVar1 + 6) = in_FPUInstructionPointer;
  puVar1[9] = in_FPULastInstructionOpcode;
  if (uVar2 <= in_EAX) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!SBORROW4(uVar2,in_EAX)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  DAT_1f1313d35408cbca = (char)*unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be2ce FUN_14d7be2ce body=4 status=ok
// SIG undefined FUN_14d7be2ce(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be2ce(void)

{
  undefined1 *unaff_RSI;
  bool in_OF;
  
  if (!in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  DAT_1f1313d35408cbca = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be2e7 FUN_14d7be2e7 body=3 status=ok
// SIG undefined FUN_14d7be2e7(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7be2bb) */

void FUN_14d7be2e7(longlong param_1,code *param_2)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  longlong in_RAX;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined8 *unaff_RBP;
  longlong unaff_RSI;
  char *unaff_R15;
  undefined8 uStack_10;
  
  puVar1 = (uint *)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                             CONCAT11((byte)((ulonglong)in_RAX >> 8) ^ *(byte *)(in_RAX + -0x1a),
                                      (char)in_RAX)) + 0xf);
  *puVar1 = *puVar1 ^ (uint)param_1;
  param_1 = param_1 + -1;
  if (param_1 != 0 && *puVar1 == 0) {
    pbVar4 = (byte *)(*param_2)();
    *(char *)(unaff_RSI + 0x5d) = *(char *)(unaff_RSI + 0x5d) + (char)((ulonglong)pbVar4 >> 8);
    puVar5 = (undefined8 *)&stack0xfffffffffffffff8;
    cVar2 = '\x15';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar5 = puVar5 + -1;
      *puVar5 = *unaff_RBP;
      cVar2 = cVar2 + -1;
    } while ('\0' < cVar2);
    bVar3 = (byte)param_1 & 7;
    *pbVar4 = *pbVar4 >> bVar3 | *pbVar4 << 8 - bVar3;
    *unaff_R15 = *unaff_R15 >> 0x17;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be2eb FUN_14d7be2eb body=10 status=ok
// SIG undefined FUN_14d7be2eb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be2eb(undefined8 param_1,undefined8 *param_2)

{
  undefined8 in_MM6;
  
  psraw(in_MM6,*param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be302 FUN_14d7be302 body=17 status=ok
// SIG undefined FUN_14d7be302(void)

void FUN_14d7be302(longlong param_1)

{
  char in_AL;
  uint unaff_EBP;
  
  *(uint *)(param_1 + -0x16) = *(uint *)(param_1 + -0x16) & unaff_EBP;
  *(byte *)(param_1 + -0x7b) = *(byte *)(param_1 + -0x7b) ^ in_AL + 0xb6U;
  return;
}



// FUNCTION 14d7be31d FUN_14d7be31d body=7 status=ok
// SIG undefined FUN_14d7be31d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7be2bb) */

void FUN_14d7be31d(byte param_1)

{
  char cVar1;
  byte *in_RAX;
  undefined8 *puVar2;
  undefined8 unaff_RBP;
  undefined8 *puVar3;
  char *unaff_R15;
  undefined2 unaff_retaddr;
  undefined8 uStack_e;
  
  *in_RAX = *in_RAX << (param_1 & 7) | *in_RAX >> 8 - (param_1 & 7);
  puVar3 = (undefined8 *)CONCAT62((int6)((ulonglong)unaff_RBP >> 0x10),unaff_retaddr);
  puVar2 = (undefined8 *)&stack0xfffffffffffffffa;
  cVar1 = '\x15';
  do {
    puVar3 = puVar3 + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *puVar3;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  *in_RAX = *in_RAX >> (param_1 & 7) | *in_RAX << 8 - (param_1 & 7);
  *unaff_R15 = *unaff_R15 >> 0x17;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be326 FUN_14d7be326 body=8 status=ok
// SIG undefined FUN_14d7be326(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7be2bb) */

void FUN_14d7be326(byte param_1)

{
  char cVar1;
  byte *in_RAX;
  undefined8 *puVar2;
  undefined8 unaff_RBP;
  undefined8 *puVar3;
  char *unaff_R15;
  undefined2 unaff_retaddr;
  undefined8 uStack_e;
  
  puVar3 = (undefined8 *)CONCAT62((int6)((ulonglong)unaff_RBP >> 0x10),unaff_retaddr);
  puVar2 = (undefined8 *)&stack0xfffffffffffffffa;
  cVar1 = '\x15';
  do {
    puVar3 = puVar3 + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *puVar3;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  *in_RAX = *in_RAX >> (param_1 & 7) | *in_RAX << 8 - (param_1 & 7);
  *unaff_R15 = *unaff_R15 >> 0x17;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be32e FUN_14d7be32e body=13 status=ok
// SIG undefined FUN_14d7be32e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7be2bb) */

void FUN_14d7be32e(void)

{
  char *unaff_R15;
  
  *unaff_R15 = *unaff_R15 >> 0x17;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be33f FUN_14d7be33f body=7 status=ok
// SIG undefined FUN_14d7be33f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be33f(void)

{
  int in_EAX;
  longlong unaff_RBX;
  
  LOCK();
  *(int *)(unaff_RBX + 0x5a240af5) = *(int *)(unaff_RBX + 0x5a240af5) + in_EAX;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be350 FUN_14d7be350 body=15 status=ok
// SIG undefined FUN_14d7be350(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7be440) overlaps instruction at (ram,0x00014d7be43f)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7be3c8) */
/* WARNING: Removing unreachable block (ram,0x00014d7be392) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14d7be350(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  byte bVar11;
  uint uVar8;
  byte bVar10;
  ulonglong in_RAX;
  longlong lVar12;
  char cVar13;
  byte unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  longlong *plVar14;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  byte in_R11B;
  byte unaff_R13B;
  bool bVar15;
  char in_AF;
  longlong unaff_retaddr;
  longlong alStackX_8 [4];
  uint uVar7;
  char *pcVar9;
  
  pcVar9 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x55);
  *pcVar9 = *pcVar9 + unaff_BL;
  out((short)param_2,(int)(in_RAX ^ 0x96));
  lVar12 = unaff_retaddr + -1;
  uVar4 = (undefined1)(in_RAX ^ 0x96);
  if (lVar12 != 0 && (*(byte *)(unaff_RSI + -0x272c84cc) & 0x70) != 0) {
    out((short)param_2,uVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar10 = (byte)(in_RAX >> 8);
  cVar13 = bVar10 + *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  pcVar9 = (char *)CONCAT62((int6)(in_RAX >> 0x10),CONCAT11(cVar13,uVar4));
  if (cVar13 == '\0' ||
      SCARRY1(bVar10,*(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) != cVar13 < '\0'
     ) {
    if (!CARRY1(bVar10,*(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) &&
        cVar13 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    cVar13 = (char)((ulonglong)param_2 >> 8);
    param_2 = CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(cVar13 * '\x02',(char)param_2));
    plVar3 = alStackX_8;
    if (SCARRY1(cVar13,cVar13) != (char)(cVar13 * '\x02') < '\0') {
      do {
        while( true ) {
          plVar14 = plVar3;
          _DAT_dcc9183b = _DAT_dcc9183b ^ 0x7500008d;
          *(uint *)(unaff_RDI + param_2 + -3) =
               *(uint *)(unaff_RDI + param_2 + -3) | (uint)unaff_RDI;
          uVar2 = (longlong)(int)pcVar9 * (longlong)*(int *)(param_2 + 0x45);
          pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x3712968a);
          bVar10 = *pbVar1;
          *pbVar1 = *pbVar1 + unaff_BL;
          uVar7 = (uint)uVar2;
          uVar8 = uVar7 + 0x9bb64339;
          uVar6 = uVar8 - CARRY1(bVar10,unaff_BL);
          bVar11 = ((int)uVar6 < 0) << 7 | (uVar6 == 0) << 6 | in_AF << 4 |
                   ((POPCOUNT(uVar6 & 0xff) & 1U) == 0) << 2 | 2U |
                   (uVar7 < 0x6449bcc7 || uVar8 < CARRY1(bVar10,unaff_BL));
          pcVar9 = (char *)(ulonglong)CONCAT22((short)(uVar6 >> 0x10),CONCAT11(bVar11,(char)uVar6));
          pbVar1 = (byte *)((uVar2 >> 0x20) + 0x29);
          bVar10 = *pbVar1;
          *pbVar1 = *pbVar1 + bVar11;
          param_2 = *plVar14;
          unaff_RDI = (undefined1 *)
                      (ulonglong)
                      (((uint)unaff_RDI - *(int *)(unaff_RSI + -0x25e33f35)) -
                      (uint)CARRY1(bVar10,bVar11));
          if (lVar12 != 0) break;
          *plVar14 = 0x45;
          plVar3 = plVar14;
        }
        *pcVar9 = *pcVar9 + (char)uVar6;
        *unaff_RDI = 0xf7;
        bVar15 = CARRY1(in_R11B,unaff_R13B);
        in_R11B = in_R11B + unaff_R13B;
        uVar8 = bVar15 + 0xa03bb49f;
        pcVar9 = (char *)(ulonglong)uVar8;
        unaff_BH = unaff_BH ^ (byte)((ulonglong)lVar12 >> 8);
        plVar3 = plVar14 + 1;
        unaff_RDI = unaff_RDI + 1;
      } while ((char)unaff_BH < '\x01');
      *plVar14 = 0xffffffff9059dbe3;
      bVar10 = (byte)(uVar8 >> 8) >> 1;
      pcVar9 = (char *)(ulonglong)CONCAT22((short)(uVar8 >> 0x10),CONCAT11(bVar10,(char)uVar8));
      *pcVar9 = *pcVar9 + bVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  uVar4 = in((short)param_2);
  *unaff_RDI = uVar4;
  *(byte *)(unaff_retaddr + -0x21febfe2) = *(byte *)(unaff_retaddr + -0x21febfe2) ^ (byte)param_2;
  iVar5 = (int)pcVar9 + 0x64760047;
  lVar12 = (longlong)(int)param_2 * -0x29;
  return CONCAT31((int3)((uint)iVar5 >> 8),(char)iVar5 + ':' + ((int)lVar12 != lVar12));
}



// FUNCTION 14d7be361 FUN_14d7be361 body=6 status=ok
// SIG undefined FUN_14d7be361(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7be440) overlaps instruction at (ram,0x00014d7be43f)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14d7be361(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  byte bVar12;
  uint uVar9;
  char cVar11;
  undefined8 in_RAX;
  longlong lVar13;
  undefined2 uVar14;
  byte unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  longlong *plVar15;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  byte in_R11B;
  byte unaff_R13B;
  byte in_CF;
  bool bVar16;
  char in_AF;
  char in_ZF;
  char in_SF;
  char in_OF;
  uint uVar8;
  char *pcVar10;
  
  uVar14 = (undefined2)param_2;
  out(uVar14,(int)in_RAX);
  lVar13 = param_1 + -1;
  if (lVar13 == 0 || in_ZF != '\0') {
    if (in_OF == in_SF) {
      bVar12 = (byte)((ulonglong)in_RAX >> 8);
      bVar3 = bVar12 + *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
      cVar11 = bVar3 + in_CF;
      pcVar10 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar11,(char)in_RAX));
      if (cVar11 == '\0' ||
          (SCARRY1(bVar12,*(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) !=
          SCARRY1(bVar3,in_CF)) != cVar11 < '\0') {
        if ((!CARRY1(bVar12,*(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) &&
            !CARRY1(bVar3,in_CF)) && cVar11 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        cVar11 = (char)((ulonglong)param_2 >> 8);
        param_2 = CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                           CONCAT11(cVar11 * '\x02',(char)param_2));
        plVar5 = (longlong *)register0x00000020;
        if (SCARRY1(cVar11,cVar11) != (char)(cVar11 * '\x02') < '\0') {
          do {
            while( true ) {
              plVar15 = plVar5;
              _DAT_dcc9183b = _DAT_dcc9183b ^ 0x7500008d;
              *(uint *)(unaff_RDI + param_2 + -3) =
                   *(uint *)(unaff_RDI + param_2 + -3) | (uint)unaff_RDI;
              uVar4 = (longlong)(int)pcVar10 * (longlong)*(int *)(param_2 + 0x45);
              pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x3712968a);
              bVar3 = *pbVar1;
              *pbVar1 = *pbVar1 + unaff_BL;
              uVar8 = (uint)uVar4;
              uVar9 = uVar8 + 0x9bb64339;
              uVar7 = uVar9 - CARRY1(bVar3,unaff_BL);
              bVar12 = ((int)uVar7 < 0) << 7 | (uVar7 == 0) << 6 | in_AF << 4 |
                       ((POPCOUNT(uVar7 & 0xff) & 1U) == 0) << 2 | 2U |
                       (uVar8 < 0x6449bcc7 || uVar9 < CARRY1(bVar3,unaff_BL));
              pcVar10 = (char *)(ulonglong)
                                CONCAT22((short)(uVar7 >> 0x10),CONCAT11(bVar12,(char)uVar7));
              pbVar1 = (byte *)((uVar4 >> 0x20) + 0x29);
              bVar3 = *pbVar1;
              *pbVar1 = *pbVar1 + bVar12;
              param_2 = *plVar15;
              unaff_RDI = (undefined1 *)
                          (ulonglong)
                          (((uint)unaff_RDI - *(int *)(unaff_RSI + -0x25e33f35)) -
                          (uint)CARRY1(bVar3,bVar12));
              if (lVar13 != 0) break;
              *plVar15 = 0x45;
              plVar5 = plVar15;
            }
            *pcVar10 = *pcVar10 + (char)uVar7;
            *unaff_RDI = 0xf7;
            bVar16 = CARRY1(in_R11B,unaff_R13B);
            in_R11B = in_R11B + unaff_R13B;
            uVar9 = bVar16 + 0xa03bb49f;
            pcVar10 = (char *)(ulonglong)uVar9;
            unaff_BH = unaff_BH ^ (byte)((ulonglong)lVar13 >> 8);
            plVar5 = plVar15 + 1;
            unaff_RDI = unaff_RDI + 1;
          } while ((char)unaff_BH < '\x01');
          *plVar15 = 0xffffffff9059dbe3;
          bVar3 = (byte)(uVar9 >> 8) >> 1;
          pcVar10 = (char *)(ulonglong)CONCAT22((short)(uVar9 >> 0x10),CONCAT11(bVar3,(char)uVar9));
          *pcVar10 = *pcVar10 + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      uVar2 = in((short)param_2);
      *unaff_RDI = uVar2;
      *(byte *)(param_1 + -0x21febfe2) = *(byte *)(param_1 + -0x21febfe2) ^ (byte)param_2;
      iVar6 = (int)pcVar10 + 0x64760047;
      lVar13 = (longlong)(int)param_2 * -0x29;
      return CONCAT31((int3)((uint)iVar6 >> 8),(char)iVar6 + ':' + ((int)lVar13 != lVar13));
    }
  }
  else {
    in_CF = false;
  }
  if ((bool)in_CF) {
    uVar2 = in(uVar14);
    *unaff_RDI = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(uVar14,(char)in_RAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be366 FUN_14d7be366 body=17 status=ok
// SIG undefined FUN_14d7be366(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7be440) overlaps instruction at (ram,0x00014d7be43f)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14d7be366(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  byte bVar13;
  uint uVar10;
  char cVar12;
  undefined8 in_RAX;
  byte unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  longlong *plVar14;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  byte in_R11B;
  byte unaff_R13B;
  bool in_CF;
  bool bVar15;
  char in_AF;
  char in_SF;
  char in_OF;
  uint uVar9;
  char *pcVar11;
  
  if (in_OF != in_SF) {
    if (in_CF) {
      uVar2 = in((short)param_2);
      *unaff_RDI = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out((short)param_2,(char)in_RAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar13 = (byte)((ulonglong)in_RAX >> 8);
  bVar3 = bVar13 + *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  cVar12 = bVar3 + in_CF;
  pcVar11 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar12,(char)in_RAX));
  if (cVar12 == '\0' ||
      (SCARRY1(bVar13,*(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) !=
      SCARRY1(bVar3,in_CF)) != cVar12 < '\0') {
    if ((!CARRY1(bVar13,*(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) &&
        !CARRY1(bVar3,in_CF)) && cVar12 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    cVar12 = (char)((ulonglong)param_2 >> 8);
    param_2 = CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(cVar12 * '\x02',(char)param_2));
    plVar6 = (longlong *)register0x00000020;
    if (SCARRY1(cVar12,cVar12) != (char)(cVar12 * '\x02') < '\0') {
      do {
        while( true ) {
          plVar14 = plVar6;
          _DAT_dcc9183b = _DAT_dcc9183b ^ 0x7500008d;
          *(uint *)(unaff_RDI + param_2 + -3) =
               *(uint *)(unaff_RDI + param_2 + -3) | (uint)unaff_RDI;
          uVar4 = (longlong)(int)pcVar11 * (longlong)*(int *)(param_2 + 0x45);
          pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x3712968a);
          bVar3 = *pbVar1;
          *pbVar1 = *pbVar1 + unaff_BL;
          uVar9 = (uint)uVar4;
          uVar10 = uVar9 + 0x9bb64339;
          uVar8 = uVar10 - CARRY1(bVar3,unaff_BL);
          bVar13 = ((int)uVar8 < 0) << 7 | (uVar8 == 0) << 6 | in_AF << 4 |
                   ((POPCOUNT(uVar8 & 0xff) & 1U) == 0) << 2 | 2U |
                   (uVar9 < 0x6449bcc7 || uVar10 < CARRY1(bVar3,unaff_BL));
          pcVar11 = (char *)(ulonglong)CONCAT22((short)(uVar8 >> 0x10),CONCAT11(bVar13,(char)uVar8))
          ;
          pbVar1 = (byte *)((uVar4 >> 0x20) + 0x29);
          bVar3 = *pbVar1;
          *pbVar1 = *pbVar1 + bVar13;
          param_2 = *plVar14;
          unaff_RDI = (undefined1 *)
                      (ulonglong)
                      (((uint)unaff_RDI - *(int *)(unaff_RSI + -0x25e33f35)) -
                      (uint)CARRY1(bVar3,bVar13));
          if (param_1 != 0) break;
          *plVar14 = 0x45;
          plVar6 = plVar14;
        }
        *pcVar11 = *pcVar11 + (char)uVar8;
        *unaff_RDI = 0xf7;
        bVar15 = CARRY1(in_R11B,unaff_R13B);
        in_R11B = in_R11B + unaff_R13B;
        uVar10 = bVar15 + 0xa03bb49f;
        pcVar11 = (char *)(ulonglong)uVar10;
        unaff_BH = unaff_BH ^ (byte)((ulonglong)param_1 >> 8);
        plVar6 = plVar14 + 1;
        unaff_RDI = unaff_RDI + 1;
      } while ((char)unaff_BH < '\x01');
      *plVar14 = 0xffffffff9059dbe3;
      bVar3 = (byte)(uVar10 >> 8) >> 1;
      pcVar11 = (char *)(ulonglong)CONCAT22((short)(uVar10 >> 0x10),CONCAT11(bVar3,(char)uVar10));
      *pcVar11 = *pcVar11 + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  uVar2 = in((short)param_2);
  *unaff_RDI = uVar2;
  *(byte *)(param_1 + -0x21febfe1) = *(byte *)(param_1 + -0x21febfe1) ^ (byte)param_2;
  iVar7 = (int)pcVar11 + 0x64760047;
  lVar5 = (longlong)(int)param_2 * -0x29;
  return CONCAT31((int3)((uint)iVar7 >> 8),(char)iVar7 + ':' + ((int)lVar5 != lVar5));
}



// FUNCTION 14d7be36e FUN_14d7be36e body=4 status=ok
// SIG undefined FUN_14d7be36e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be36e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be377 FUN_14d7be377 body=8 status=ok
// SIG undefined FUN_14d7be377(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be377(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be38d FUN_14d7be38d body=1 status=ok
// SIG undefined FUN_14d7be38d(void)

void FUN_14d7be38d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7be3a2 FUN_14d7be3a2 body=13 status=ok
// SIG undefined FUN_14d7be3a2(void)

void FUN_14d7be3a2(void)

{
  char cVar1;
  undefined4 in_EAX;
  undefined8 *puVar2;
  int unaff_EBP;
  undefined8 *puVar3;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  undefined8 auStack_10 [2];
  
  puVar3 = (undefined8 *)(ulonglong)(uint)(unaff_EBP << 0x1e);
  puVar2 = auStack_10 + 1;
  cVar1 = '\x13';
  do {
    puVar3 = puVar3 + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *puVar3;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  *unaff_RDI = *unaff_RSI;
  out(0xef,in_EAX);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7be3b7 FUN_14d7be3b7 body=11 status=ok
// SIG undefined FUN_14d7be3b7(void)

void FUN_14d7be3b7(void)

{
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  undefined2 in_GS;
  
  *(undefined2 *)(CONCAT71(unaff_00000019,unaff_BL) + -0x66) = in_GS;
  return;
}



// FUNCTION 14d7be3c8 FUN_14d7be3c8 body=7 status=ok
// SIG undefined FUN_14d7be3c8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be3c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be3d5 FUN_14d7be3d5 body=12 status=ok
// SIG undefined FUN_14d7be3d5(void)

int FUN_14d7be3d5(void)

{
  int iVar1;
  uint in_EAX;
  longlong unaff_RBP;
  
  iVar1 = (in_EAX ^ 0xf02688) - *(int *)(unaff_RBP + 0x21);
  out(1,(char)iVar1);
  return iVar1;
}



// FUNCTION 14d7be3e2 FUN_14d7be3e2 body=104 status=ok
// SIG undefined FUN_14d7be3e2(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7be440) overlaps instruction at (ram,0x00014d7be43f)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14d7be3e2(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  uint uVar10;
  byte bVar12;
  char *in_RAX;
  char *pcVar11;
  byte unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  longlong *plVar13;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  byte in_R11B;
  byte unaff_R13B;
  bool bVar14;
  char in_AF;
  uint uVar9;
  
  plVar6 = (longlong *)register0x00000020;
  if ('\x0e' < (char)in_RAX) {
    uVar3 = in((short)param_2);
    *unaff_RDI = uVar3;
    *(byte *)(param_1 + -0x21febfe1) = *(byte *)(param_1 + -0x21febfe1) ^ (byte)param_2;
    iVar7 = (int)in_RAX + 0x64760047;
    lVar5 = (longlong)(int)param_2 * -0x29;
    return CONCAT31((int3)((uint)iVar7 >> 8),(char)iVar7 + ':' + ((int)lVar5 != lVar5));
  }
  do {
    while( true ) {
      plVar13 = plVar6;
      _DAT_dcc9183b = _DAT_dcc9183b ^ 0x7500008d;
      *(uint *)(unaff_RDI + param_2 + -3) = *(uint *)(unaff_RDI + param_2 + -3) | (uint)unaff_RDI;
      uVar4 = (longlong)(int)in_RAX * (longlong)*(int *)(param_2 + 0x45);
      pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x3712968a);
      bVar2 = *pbVar1;
      *pbVar1 = *pbVar1 + unaff_BL;
      uVar9 = (uint)uVar4;
      uVar10 = uVar9 + 0x9bb64339;
      uVar8 = uVar10 - CARRY1(bVar2,unaff_BL);
      bVar12 = ((int)uVar8 < 0) << 7 | (uVar8 == 0) << 6 | in_AF << 4 |
               ((POPCOUNT(uVar8 & 0xff) & 1U) == 0) << 2 | 2U |
               (uVar9 < 0x6449bcc7 || uVar10 < CARRY1(bVar2,unaff_BL));
      in_RAX = (char *)(ulonglong)CONCAT22((short)(uVar8 >> 0x10),CONCAT11(bVar12,(char)uVar8));
      pbVar1 = (byte *)((uVar4 >> 0x20) + 0x29);
      bVar2 = *pbVar1;
      *pbVar1 = *pbVar1 + bVar12;
      param_2 = *plVar13;
      unaff_RDI = (undefined1 *)
                  (ulonglong)
                  (((uint)unaff_RDI - *(int *)(unaff_RSI + -0x25e33f35)) -
                  (uint)CARRY1(bVar2,bVar12));
      if (param_1 != 0) break;
      *plVar13 = 0x45;
      plVar6 = plVar13;
    }
    *in_RAX = *in_RAX + (char)uVar8;
    *unaff_RDI = 0xf7;
    bVar14 = CARRY1(in_R11B,unaff_R13B);
    in_R11B = in_R11B + unaff_R13B;
    uVar10 = bVar14 + 0xa03bb49f;
    in_RAX = (char *)(ulonglong)uVar10;
    unaff_BH = unaff_BH ^ (byte)((ulonglong)param_1 >> 8);
    plVar6 = plVar13 + 1;
    unaff_RDI = unaff_RDI + 1;
  } while ((char)unaff_BH < '\x01');
  *plVar13 = 0xffffffff9059dbe3;
  bVar2 = (byte)(uVar10 >> 8) >> 1;
  pcVar11 = (char *)(ulonglong)CONCAT22((short)(uVar10 >> 0x10),CONCAT11(bVar2,(char)uVar10));
  *pcVar11 = *pcVar11 + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be408 FUN_14d7be408 body=35 status=ok
// SIG undefined FUN_14d7be408(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be408(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint unaff_ESI;
  byte unaff_R13B;
  
  out((short)param_2,unaff_ESI);
  DAT_697a12fe5bb521ac = (undefined1)unaff_ESI;
  pbVar1 = (byte *)((ulonglong)unaff_ESI + 0x4c);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 - unaff_R13B;
  *(char *)(param_2 + 0x420bf7b1) =
       (*(char *)(param_2 + 0x420bf7b1) - (char)param_2) - (bVar2 < unaff_R13B);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be490 FUN_14d7be490 body=9 status=ok
// SIG undefined FUN_14d7be490(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be490(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  code *pcVar2;
  byte in_AH;
  byte bVar3;
  char *unaff_RDI;
  byte in_CF;
  bool in_PF;
  
  bVar3 = (byte)((ulonglong)param_2 >> 8);
  if (!in_PF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = in_AH + bVar3;
  *unaff_RDI = *unaff_RDI + bVar1 + in_CF + (CARRY1(in_AH,bVar3) || CARRY1(bVar1,in_CF));
  pcVar2 = (code *)swi(1);
  (*pcVar2)();
  return;
}



// FUNCTION 14d7be4ce FUN_14d7be4ce body=3 status=ok
// SIG undefined FUN_14d7be4ce(void)

void FUN_14d7be4ce(void)

{
  code *pcVar1;
  char in_AH;
  char *unaff_RDI;
  char in_CF;
  
  *unaff_RDI = *unaff_RDI + in_AH + in_CF;
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7be4d3 FUN_14d7be4d3 body=2 status=ok
// SIG undefined FUN_14d7be4d3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be4d3(int *param_1)

{
  int unaff_ESI;
  
  *param_1 = *param_1 + unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be4d7 FUN_14d7be4d7 body=17 status=ok
// SIG undefined FUN_14d7be4d7(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7be440) overlaps instruction at (ram,0x00014d7be43f)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7be4d7(longlong param_1,longlong param_2)

{
  uint *puVar1;
  byte *pbVar2;
  ulonglong uVar3;
  byte bVar4;
  byte bVar9;
  char cVar10;
  uint uVar5;
  uint uVar7;
  char *in_RAX;
  byte unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *puVar11;
  undefined1 *unaff_RDI;
  byte in_R11B;
  byte unaff_R13B;
  bool bVar12;
  char in_AF;
  bool in_SF;
  longlong lStack_8;
  uint uVar6;
  char *pcVar8;
  
  cVar10 = (char)((ulonglong)in_RAX >> 8);
  if (!in_SF) {
    *in_RAX = *in_RAX + (char)in_RAX;
    DAT_1cbe3a8e6 = DAT_1cbe3a8e6 + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar8 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x62);
  *pcVar8 = *pcVar8 + unaff_BH;
  if ((POPCOUNT(*pcVar8) & 1U) == 0) {
    while( true ) {
      puVar11 = unaff_RDI + 1;
      *unaff_RDI = 0xf7;
      bVar12 = CARRY1(in_R11B,unaff_R13B);
      in_R11B = in_R11B + unaff_R13B;
      uVar7 = bVar12 + 0xa03bb49f;
      pcVar8 = (char *)(ulonglong)uVar7;
      unaff_BH = unaff_BH ^ (byte)((ulonglong)param_1 >> 8);
      if ('\0' < (char)unaff_BH) break;
      while( true ) {
        _DAT_dcc9183b = _DAT_dcc9183b ^ 0x7500008d;
        *(uint *)(puVar11 + param_2 + -3) = *(uint *)(puVar11 + param_2 + -3) | (uint)puVar11;
        uVar3 = (longlong)(int)pcVar8 * (longlong)*(int *)(param_2 + 0x45);
        pbVar2 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x3712968a);
        bVar4 = *pbVar2;
        *pbVar2 = *pbVar2 + unaff_BL;
        uVar6 = (uint)uVar3;
        uVar7 = uVar6 + 0x9bb64339;
        uVar5 = uVar7 - CARRY1(bVar4,unaff_BL);
        bVar9 = ((int)uVar5 < 0) << 7 | (uVar5 == 0) << 6 | in_AF << 4 |
                ((POPCOUNT(uVar5 & 0xff) & 1U) == 0) << 2 | 2U |
                (uVar6 < 0x6449bcc7 || uVar7 < CARRY1(bVar4,unaff_BL));
        pcVar8 = (char *)(ulonglong)CONCAT22((short)(uVar5 >> 0x10),CONCAT11(bVar9,(char)uVar5));
        pbVar2 = (byte *)((uVar3 >> 0x20) + 0x29);
        bVar4 = *pbVar2;
        *pbVar2 = *pbVar2 + bVar9;
        param_2 = *(longlong *)register0x00000020;
        puVar11 = (undefined1 *)
                  (ulonglong)
                  (((uint)puVar11 - *(int *)(unaff_RSI + -0x25e33f35)) - (uint)CARRY1(bVar4,bVar9));
        if (param_1 != 0) break;
        *(undefined8 *)register0x00000020 = 0x45;
      }
      *pcVar8 = *pcVar8 + (char)uVar5;
      register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + 8);
      unaff_RDI = puVar11;
    }
    *(undefined8 *)((longlong)register0x00000020 + -8) = 0xffffffff9059dbe3;
    bVar4 = (byte)(uVar7 >> 8) >> 1;
    pcVar8 = (char *)(ulonglong)CONCAT22((short)(uVar7 >> 0x10),CONCAT11(bVar4,(char)uVar7));
    *pcVar8 = *pcVar8 + bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*unaff_RSI,(short)param_2);
  puVar1 = (uint *)(param_2 + 0x4c);
  bVar4 = (byte)param_1 & 0x1f;
  *puVar1 = *puVar1 << bVar4 | *puVar1 >> 0x20 - bVar4;
  *(char *)(unaff_RBP + -0x18) = *(char *)(unaff_RBP + -0x18) + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be4ec FUN_14d7be4ec body=42 status=ok
// SIG undefined FUN_14d7be4ec(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be4ec(longlong param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  
  *(char *)(param_1 + 0x74) = (char)param_1;
  uVar3 = in(0x29);
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,uVar3))) + -0x58 +
                   CONCAT62(unaff_0000001a,
                            CONCAT11(unaff_BH + (char)((ulonglong)param_1 >> 8),unaff_BL)) * 4);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + unaff_BL;
  if (!CARRY1(bVar2,unaff_BL) && *pbVar1 != 0) {
    *(char *)(param_1 + 0x2f) = *(char *)(param_1 + 0x2f) + in_AH + CARRY1(bVar2,unaff_BL);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be518 FUN_14d7be518 body=34 status=ok
// SIG undefined FUN_14d7be518(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be518(undefined4 param_1,undefined8 param_2)

{
  char *pcVar1;
  code *pcVar2;
  uint uVar3;
  char cVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined6 uVar7;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  longlong unaff_R14;
  char unaff_R15B;
  bool in_CF;
  bool in_ZF;
  
  uVar7 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar6 = (undefined1)((ulonglong)param_2 >> 8);
  uVar5 = (undefined1)param_2;
  cVar4 = (char)((uint)param_1 >> 8);
  if (in_CF || in_ZF) {
    out(*unaff_RSI,(short)param_2);
    *(char *)(unaff_R14 + 0x4b4b4a2a) = *(char *)(unaff_R14 + 0x4b4b4a2a) + unaff_R15B;
    *unaff_RDI = unaff_RSI[1];
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar2 = (code *)swi(0xc4);
  (*pcVar2)();
  uVar3 = in(CONCAT11(uVar6,uVar5));
  pcVar1 = (char *)(CONCAT62(uVar7,CONCAT11(uVar6,uVar5)) + (ulonglong)uVar3);
  *pcVar1 = *pcVar1 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be53d FUN_14d7be53d body=1 status=ok
// SIG undefined FUN_14d7be53d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be53d(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be542 FUN_14d7be542 body=48 status=ok
// SIG undefined FUN_14d7be542(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7be542(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ushort uVar5;
  uint in_EAX;
  undefined4 uVar7;
  char *pcVar8;
  byte bVar9;
  undefined7 uVar10;
  longlong unaff_RBX;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  char in_CF;
  bool bVar11;
  float10 in_ST0;
  undefined2 uVar6;
  
  pcVar8 = (char *)(param_1 + 0x3ff94d80 + unaff_RBX * 8);
  bVar9 = (byte)((ulonglong)param_2 >> 8);
  *pcVar8 = *pcVar8 + bVar9 + in_CF;
  uVar5 = (ushort)(in_EAX & 0xa061f5eb);
  uVar6 = CONCAT11((char)(uVar5 % (ushort)bVar9),(char)(uVar5 / bVar9));
  uVar3 = CONCAT22((short)((in_EAX & 0xa061f5eb) >> 0x10),uVar6);
  puVar1 = (uint *)((ulonglong)uVar3 + 0x4c);
  bVar11 = 0xffffffa3 < *puVar1;
  _DAT_db4aa7b6d51c185 = uVar3;
  *puVar1 = *puVar1 + 0x5c;
  uVar2 = *puVar1;
  *unaff_RDI = *unaff_RSI;
  *(undefined1 *)(unaff_RDI + 1) = *(undefined1 *)(unaff_RSI + 1);
  uVar10 = (undefined7)((ulonglong)param_2 >> 8);
  if (!bVar11 && uVar2 != 0) {
    out(*(undefined1 *)((longlong)unaff_RSI + 5),
        (short)CONCAT71(uVar10,((byte)param_2 ^ (&stack0xffffffffd6c80009)[unaff_RBX]) -
                               *(char *)((longlong)unaff_RSI + 0xec4ef05)));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = CONCAT71(uVar10,bVar11 + -0x6a);
  pcVar8 = (char *)(uVar4 & 0xffffffff);
  if (bVar11 < 0x6a) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar7 = (undefined4)uVar4;
  *(undefined4 *)((longlong)unaff_RDI + 5) = uVar7;
  out(uVar6,uVar7);
  *pcVar8 = *pcVar8 + bVar9;
  *(short *)(ulonglong)uVar3 = (short)ROUND(in_ST0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be571 FUN_14d7be571 body=8 status=ok
// SIG undefined FUN_14d7be571(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be571(undefined4 param_1)

{
  longlong unaff_RSI;
  char in_SF;
  char in_OF;
  
  do {
    *(undefined4 *)(unaff_RSI + 0x1e44dedc) = param_1;
  } while (in_OF == in_SF);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be579 FUN_14d7be579 body=5 status=ok
// SIG undefined FUN_14d7be579(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be579(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be58b FUN_14d7be58b body=2 status=ok
// SIG undefined FUN_14d7be58b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be58b(longlong param_1,undefined8 param_2)

{
  char cVar1;
  char *unaff_RDI;
  
  cVar1 = (char)((ulonglong)param_2 >> 8);
  if (param_1 == 1) {
    *unaff_RDI = cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cRam00000001107d1401 = cRam00000001107d1401 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be598 FUN_14d7be598 body=3 status=ok
// SIG undefined FUN_14d7be598(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be598(void)

{
  char *pcVar1;
  byte *pbVar2;
  uint *puVar3;
  undefined1 unaff_BL;
  byte bVar4;
  longlong unaff_RBP;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  bool in_OF;
  
  if (!in_OF) {
    puVar3 = (uint *)((ulonglong)&stack0x00000000 & 0xffffffff);
    *puVar3 = *puVar3 << 0x12 | *puVar3 >> 0xe;
    *(undefined1 *)(unaff_RBP + 0x551b8) = *(undefined1 *)(unaff_RBP + 0x551b8);
    pcVar1 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0xefab90);
    bVar4 = (byte)(((ulonglong)&stack0x00000000 & 0xffffffff) >> 8);
    *pcVar1 = *pcVar1 + bVar4;
    pbVar2 = (byte *)(((ulonglong)&stack0x00000000 & 0xffffffff) * 9 + 0x3570009c);
    *pbVar2 = *pbVar2 & bVar4;
    uRam9432c61adf320058 = unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)(unaff_RBP + 0x3da5800) = *(uint *)(unaff_RBP + 0x3da5800) ^ unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be5a6 FUN_14d7be5a6 body=6 status=ok
// SIG undefined FUN_14d7be5a6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be5a6(void)

{
  byte *pbVar1;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  
  pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x3570009c +
                   CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 8);
  *pbVar1 = *pbVar1 & unaff_BH;
  uRam9432c61adf320058 = 0x51;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be5bb FUN_14d7be5bb body=4 status=ok
// SIG undefined FUN_14d7be5bb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be5bb(undefined8 param_1,undefined2 param_2)

{
  byte unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *unaff_RSI;
  
  out(*unaff_RSI,
      CONCAT11((char)((ushort)param_2 >> 8),
               ((byte)param_2 ^
               (&stack0xffffffffd6c80009)
               [CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL ^ unaff_BH))]) -
               unaff_RSI[0xec4ef00]));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be5bf FUN_14d7be5bf body=17 status=ok
// SIG undefined FUN_14d7be5bf(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be5bf(undefined8 param_1,undefined2 param_2)

{
  longlong unaff_RBX;
  undefined1 *unaff_RSI;
  
  out(*unaff_RSI,
      CONCAT11((char)((ushort)param_2 >> 8),
               ((byte)param_2 ^ (&stack0xffffffffd6c80009)[unaff_RBX]) - unaff_RSI[0xec4ef00]));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be5d2 FUN_14d7be5d2 body=20 status=ok
// SIG undefined FUN_14d7be5d2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be5d2(longlong param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  byte *pbVar3;
  byte unaff_BL;
  undefined7 unaff_00000019;
  int unaff_EBP;
  undefined4 unaff_0000002c;
  byte bVar4;
  undefined8 unaff_RSI;
  int *unaff_RDI;
  
  bVar4 = (byte)unaff_RSI & *(byte *)(param_3 + -0x2c42af);
  pbVar3 = &stack0xffffffff985ed055 + (longlong)unaff_RDI;
  *pbVar3 = *pbVar3 >> 1 | *pbVar3 << 7;
  if ((char)bVar4 < '\0') {
    puVar1 = (undefined1 *)(CONCAT71(unaff_00000019,unaff_BL) + 2);
    *puVar1 = *puVar1;
    *(char *)(param_1 + -0x32) = *(char *)(param_1 + -0x32) + param_2;
    *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
         *(byte *)CONCAT71(unaff_00000019,unaff_BL) & unaff_BL;
    piVar2 = (int *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x5fb35);
    *piVar2 = *piVar2 - unaff_EBP;
    *(char *)((longlong)unaff_RDI + -0x391967be) =
         *(char *)((longlong)unaff_RDI + -0x391967be) + (byte)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar2 = (int *)((ulonglong)
                   (uint)((int)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),bVar4) - *unaff_RDI) +
                  0x32928800);
  *piVar2 = *piVar2 << ((byte)param_1 & 0x1f);
  return;
}



// FUNCTION 14d7be5ef FUN_14d7be5ef body=1 status=ok
// SIG undefined FUN_14d7be5ef(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be5ef(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RSI;
  undefined8 unaff_retaddr;
  
  uVar1 = *unaff_RSI;
  *(undefined8 *)(param_2 + -0x68) = unaff_retaddr;
  out(0xc6,(byte)uVar1 ^ 0xfb);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be5f5 FUN_14d7be5f5 body=5 status=ok
// SIG undefined FUN_14d7be5f5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be5f5(undefined8 param_1,longlong param_2)

{
  undefined1 in_AL;
  undefined8 unaff_retaddr;
  
  *(undefined8 *)(param_2 + -0x68) = unaff_retaddr;
  out(0xc6,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be5fe FUN_14d7be5fe body=3 status=ok
// SIG undefined FUN_14d7be5fe(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be5fe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be603 FUN_14d7be603 body=4 status=ok
// SIG undefined FUN_14d7be603(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be603(undefined8 param_1,undefined8 param_2)

{
  cRam00000001107d1401 = cRam00000001107d1401 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be608 FUN_14d7be608 body=10 status=ok
// SIG undefined FUN_14d7be608(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be608(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be61a FUN_14d7be61a body=2 status=ok
// SIG undefined FUN_14d7be61a(void)

void FUN_14d7be61a(void)

{
  return;
}



// FUNCTION 14d7be623 FUN_14d7be623 body=2 status=ok
// SIG undefined FUN_14d7be623(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be623(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be627 FUN_14d7be627 body=3 status=ok
// SIG undefined FUN_14d7be627(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be627(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be630 FUN_14d7be630 body=13 status=ok
// SIG undefined FUN_14d7be630(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be630(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be63d FUN_14d7be63d body=10 status=ok
// SIG undefined FUN_14d7be63d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be63d(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be64a FUN_14d7be64a body=5 status=ok
// SIG undefined FUN_14d7be64a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be64a(undefined1 *param_1,undefined2 param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  
  *param_1 = (char)((ulonglong)param_1 >> 8);
  uVar2 = in(param_2);
  puVar3 = (uint *)(ulonglong)uVar2;
  bVar1 = (byte)param_1 & 0x1f;
  *puVar3 = *puVar3 << bVar1 | *puVar3 >> 0x20 - bVar1;
  out(0x1e,uVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be64f FUN_14d7be64f body=2 status=ok
// SIG undefined FUN_14d7be64f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be64f(void)

{
  undefined4 in_EAX;
  
  out(0x1e,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be653 FUN_14d7be653 body=6 status=ok
// SIG undefined FUN_14d7be653(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be653(longlong param_1,undefined8 param_2,char *param_3)

{
  undefined1 *puVar1;
  uint *puVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  ulonglong in_RAX;
  char *pcVar6;
  longlong unaff_RBX;
  int unaff_EBP;
  int *unaff_RSI;
  int *unaff_RDI;
  char *unaff_retaddr;
  
  uVar4 = *(undefined1 *)(unaff_RBX + (in_RAX & 0xff));
  *(char *)unaff_RDI = (char)*unaff_RDI - (char)((ulonglong)param_1 >> 8);
  iVar3 = *unaff_RDI;
  *(undefined1 *)CONCAT71((int7)(in_RAX >> 8),uVar4) = 0x25;
  puVar2 = (uint *)((longlong)unaff_RDI + 0xc194e7);
  *puVar2 = *puVar2 << 9 | *puVar2 >> 0x17;
  cVar5 = (char)unaff_retaddr;
  out(0xd5,cVar5);
  if (param_1 == 1 || (char)iVar3 == '\0') {
    *unaff_RDI = *unaff_RDI >> 1;
    *(char *)(param_1 + 0x48d2f17b) = *(char *)(param_1 + 0x48d2f17b) + '\x01';
    *param_3 = *param_3 + cVar5;
    unaff_retaddr[0] = 'p';
    unaff_retaddr[1] = -0x32;
    unaff_retaddr[2] = -0x3a;
    unaff_retaddr[3] = 'v';
    *unaff_retaddr = *unaff_retaddr + cVar5;
    cVar5 = in(0x1a);
    iVar3 = *(int *)(param_1 + 0x3e);
    pcVar6 = (char *)CONCAT71((int7)((ulonglong)unaff_retaddr >> 8),cVar5 + -10);
    *unaff_RSI = *unaff_RSI >> 0x19;
    puVar1 = (undefined1 *)((ulonglong)(uint)(unaff_EBP - iVar3) - 6);
    *puVar1 = *puVar1;
    *(char *)unaff_RSI = (char)*unaff_RSI;
    *pcVar6 = *pcVar6 + cVar5 + -10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar6 = (char *)((longlong)unaff_RDI * 4 + -0x1a9c6143);
  *pcVar6 = *pcVar6 + '\x1d';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be65f FUN_14d7be65f body=12 status=ok
// SIG undefined FUN_14d7be65f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be65f(undefined8 param_1,undefined2 param_2)

{
  undefined1 in_AL;
  
  out(param_2,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be67a FUN_14d7be67a body=5 status=ok
// SIG undefined FUN_14d7be67a(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7be67a(uint param_1,char param_2)

{
  char *pcVar1;
  char cVar2;
  char *in_RAX;
  char *pcVar3;
  int unaff_EBP;
  uint uVar4;
  int *unaff_RSI;
  
  if ((param_1 & (uint)in_RAX) == 1) {
    in_RAX[0] = 'p';
    in_RAX[1] = -0x32;
    in_RAX[2] = -0x3a;
    in_RAX[3] = 'v';
    *in_RAX = *in_RAX + (char)in_RAX;
    cVar2 = in(0x1a);
    uVar4 = unaff_EBP - _DAT_0000003f;
    pcVar3 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2 + -10);
    *unaff_RSI = *unaff_RSI >> 0x19;
    pcVar1 = (char *)((ulonglong)uVar4 - 6);
    *pcVar1 = *pcVar1 + param_2;
    *(char *)unaff_RSI = (char)*unaff_RSI + param_2;
    *pcVar3 = *pcVar3 + cVar2 + -10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be696 FUN_14d7be696 body=3 status=ok
// SIG undefined FUN_14d7be696(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be696(undefined8 param_1,char param_2)

{
  char in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RBP;
  int *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI >> 0x19;
  *(char *)(unaff_RBP + -6) = *(char *)(unaff_RBP + -6) + param_2;
  *(char *)unaff_RSI = (char)*unaff_RSI + param_2;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be69c FUN_14d7be69c body=10 status=ok
// SIG undefined FUN_14d7be69c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be69c(undefined8 param_1,char param_2)

{
  char in_AL;
  undefined7 in_register_00000001;
  char *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI + param_2;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be6b9 FUN_14d7be6b9 body=3 status=ok
// SIG undefined FUN_14d7be6b9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be6b9(void)

{
  char in_AL;
  longlong unaff_RBP;
  char in_CF;
  
  *(char *)(unaff_RBP + 0x1e) = (*(char *)(unaff_RBP + 0x1e) - in_AL) - in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be6be FUN_14d7be6be body=1 status=ok
// SIG undefined FUN_14d7be6be(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be6be(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be6c2 thunk_EXT_FUN_1727c0f9c body=8 status=ok
// SIG undefined thunk_EXT_FUN_1727c0f9c(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_1727c0f9c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be6cb FUN_14d7be6cb body=5 status=ok
// SIG undefined FUN_14d7be6cb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be6cb(uint param_1,char *param_2,longlong param_3)

{
  char *pcVar1;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  longlong unaff_R12;
  undefined8 unaff_retaddr;
  
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 0x36);
  *pcVar1 = *pcVar1 + unaff_BL;
  *(int *)(unaff_R12 + unaff_RBP) = *(int *)(unaff_R12 + unaff_RBP) >> ((byte)param_1 & 0x1f);
  *param_2 = *param_2 + (char)((ulonglong)unaff_retaddr >> 8);
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)param_3;
  *(uint *)(param_2 + param_3 * 4) = *(uint *)(param_2 + param_3 * 4) ^ param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be6d1 FUN_14d7be6d1 body=1 status=ok
// SIG undefined FUN_14d7be6d1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be6d1(uint param_1,char *param_2,longlong param_3)

{
  undefined8 in_RAX;
  longlong unaff_RBP;
  longlong unaff_R12;
  char *unaff_retaddr;
  
  *(int *)(unaff_R12 + unaff_RBP) = *(int *)(unaff_R12 + unaff_RBP) >> ((byte)param_1 & 0x1f);
  *param_2 = *param_2 + (char)((ulonglong)in_RAX >> 8);
  *unaff_retaddr = *unaff_retaddr + (char)param_3;
  *(uint *)(param_2 + param_3 * 4) = *(uint *)(param_2 + param_3 * 4) ^ param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be6ea FUN_14d7be6ea body=3 status=ok
// SIG undefined FUN_14d7be6ea(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be6ea(uint param_1,longlong param_2)

{
  uint *puVar1;
  longlong in_RAX;
  
  puVar1 = (uint *)(param_2 + in_RAX * 4);
  *puVar1 = *puVar1 ^ param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be6ef FUN_14d7be6ef body=20 status=ok
// SIG undefined FUN_14d7be6ef(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be6ef(byte param_1)

{
  int in_EAX;
  
  DAT_f41700a49a109600 = (char)(in_EAX << (param_1 & 0x1f));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be706 FUN_14d7be706 body=28 status=ok
// SIG undefined FUN_14d7be706(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be706(int param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  int *unaff_RSI;
  code *unaff_RDI;
  
  uVar1 = (*unaff_RDI)();
  DAT_9cd7944347222600 = 0;
  *param_3 = *param_3;
  *(undefined8 *)((ulonglong)uVar1 - 8) = 0x14d7be71f;
  func_0xd3b44f89();
  *unaff_RSI = *unaff_RSI - param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be733 FUN_14d7be733 body=5 status=ok
// SIG undefined FUN_14d7be733(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be733(void)

{
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be741 FUN_14d7be741 body=2 status=ok
// SIG undefined FUN_14d7be741(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be741(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be74e FUN_14d7be74e body=4 status=ok
// SIG undefined FUN_14d7be74e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be74e(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  char unaff_BL;
  char *unaff_RSI;
  undefined1 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  *unaff_RSI = *unaff_RSI + (unaff_BL - (char)param_2);
  unaff_RDI[1] = unaff_RDI[1] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be782 FUN_14d7be782 body=21 status=ok
// SIG undefined FUN_14d7be782(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be782(undefined8 param_1,char *param_2)

{
  undefined8 in_RAX;
  char *pcVar1;
  char cVar2;
  
  cVar2 = (char)((ulonglong)in_RAX >> 8) - *param_2;
  pcVar1 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar2,(char)in_RAX));
  if (-1 < cVar2) {
    *pcVar1 = *pcVar1 + (char)param_2;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be7aa FUN_14d7be7aa body=8 status=ok
// SIG undefined FUN_14d7be7aa(void)

undefined8 FUN_14d7be7aa(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



// FUNCTION 14d7be7ba FUN_14d7be7ba body=1 status=ok
// SIG undefined FUN_14d7be7ba(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be7ba(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be7c8 FUN_14d7be7c8 body=2 status=ok
// SIG undefined FUN_14d7be7c8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be7c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be7d6 FUN_14d7be7d6 body=2 status=ok
// SIG undefined FUN_14d7be7d6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be7d6(void)

{
  byte *in_RAX;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  byte *unaff_RSI;
  uint *unaff_RDI;
  undefined2 in_FPUStatusWord;
  
  *unaff_RSI = *unaff_RSI & (byte)in_RAX;
  *in_RAX = *in_RAX | (byte)((ulonglong)in_RAX >> 8);
  *unaff_RDI = *unaff_RDI ^ unaff_EBX;
  *(undefined2 *)unaff_RDI = in_FPUStatusWord;
  *(uint *)(unaff_RSI + -0x25ff1dce) = *(uint *)(unaff_RSI + -0x25ff1dce) >> 0x11;
  *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) & bRamfa920400f0ab06a4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be7e9 FUN_14d7be7e9 body=2 status=ok
// SIG undefined FUN_14d7be7e9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be7e9(void)

{
  code *pcVar1;
  byte *unaff_RBX;
  
  pcVar1 = (code *)swi(0xb0);
  (*pcVar1)();
  func_0x00019e1ce891();
  *unaff_RBX = *unaff_RBX & bRamfa920400f0ab06a4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be7ee FUN_14d7be7ee body=9 status=ok
// SIG undefined FUN_14d7be7ee(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be7ee(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be819 FUN_14d7be819 body=47 status=ok
// SIG undefined FUN_14d7be819(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be819(longlong param_1,unkbyte10 *param_2)

{
  unkbyte10 Var1;
  char in_AL;
  char *unaff_RSI;
  char *unaff_RDI;
  char in_CF;
  unkbyte10 in_ST0;
  
  Var1 = to_bcd(in_ST0);
  *param_2 = Var1;
  if (SCARRY1(in_AL,'\'') == SCARRY1(in_AL + '\'',in_CF)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RSI = *unaff_RSI + (char)((ulonglong)param_1 >> 8);
  if (param_1 == 1) {
    if ((char)(*unaff_RSI - *unaff_RDI) < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)((longlong)param_2 + 0x78f8521c) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be840 FUN_14d7be840 body=11 status=ok
// SIG undefined FUN_14d7be840(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be840(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be84d FUN_14d7be84d body=4 status=ok
// SIG undefined FUN_14d7be84d(void)

void FUN_14d7be84d(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7be85e FUN_14d7be85e body=13 status=ok
// SIG undefined FUN_14d7be85e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be85e(void)

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



// FUNCTION 14d7be87f FUN_14d7be87f body=16 status=ok
// SIG undefined FUN_14d7be87f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be87f(undefined1 param_1,undefined1 *param_2)

{
  LOCK();
  *param_2 = param_1;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be890 FUN_14d7be890 body=1 status=ok
// SIG undefined FUN_14d7be890(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be890(undefined8 param_1,undefined2 param_2)

{
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be8a5 FUN_14d7be8a5 body=2 status=ok
// SIG undefined FUN_14d7be8a5(void)

void FUN_14d7be8a5(void)

{
  longlong unaff_RBP;
  
  *(int *)(unaff_RBP + 0x58) = *(int *)(unaff_RBP + 0x58) + 1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7be8a9 FUN_14d7be8a9 body=3 status=ok
// SIG undefined FUN_14d7be8a9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be8a9(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be8b1 FUN_14d7be8b1 body=12 status=ok
// SIG undefined FUN_14d7be8b1(void)

void FUN_14d7be8b1(byte param_1)

{
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  *(char *)(unaff_RSI + -10) = *(char *)(unaff_RSI + -10) << (param_1 & 0x1f);
  *(int *)(unaff_RBP + 0x58) = *(int *)(unaff_RBP + 0x58) + 1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7be8bd FUN_14d7be8bd body=6 status=ok
// SIG undefined FUN_14d7be8bd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be8bd(void)

{
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be8ce FUN_14d7be8ce body=12 status=ok
// SIG undefined FUN_14d7be8ce(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be8ce(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be8e7 FUN_14d7be8e7 body=20 status=ok
// SIG undefined FUN_14d7be8e7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be8e7(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be8fd FUN_14d7be8fd body=5 status=ok
// SIG undefined FUN_14d7be8fd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be8fd(void)

{
  char *unaff_RSI;
  char unaff_DIL;
  longlong in_R11;
  
  *unaff_RSI = *unaff_RSI + '\x01';
  *(char *)(in_R11 + -0x38e2a710) = *(char *)(in_R11 + -0x38e2a710) - unaff_DIL;
  in(0x4e);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be928 FUN_14d7be928 body=10 status=ok
// SIG undefined FUN_14d7be928(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7be932) */

void FUN_14d7be928(void)

{
  short in_AX;
  byte unaff_BL;
  undefined4 unaff_EBP;
  byte unaff_DIL;
  longlong in_R11;
  
  LOCK();
  *(undefined4 *)((ulonglong)(uint)(int)in_AX + 0x4c) = unaff_EBP;
  UNLOCK();
  *(char *)(in_R11 + -0x38e2a710) = *(char *)(in_R11 + -0x38e2a710) - (unaff_DIL ^ unaff_BL);
  in(0x4e);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be95a FUN_14d7be95a body=3 status=ok
// SIG undefined FUN_14d7be95a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be95a(longlong param_1)

{
  undefined2 *puVar1;
  undefined1 in_AL;
  byte bVar2;
  undefined6 in_register_00000002;
  int unaff_EBP;
  byte in_CF;
  char in_PF;
  char in_AF;
  char in_ZF;
  char in_SF;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  
  bVar2 = in_SF << 7 | in_ZF << 6 | in_AF << 4 | in_PF << 2 | 2U | in_CF;
  *(uint *)CONCAT62(in_register_00000002,CONCAT11(bVar2,in_AL)) =
       (*(int *)CONCAT62(in_register_00000002,CONCAT11(bVar2,in_AL)) - unaff_EBP) - (uint)in_CF;
  if (param_1 == 1 || *(int *)CONCAT62(in_register_00000002,CONCAT11(bVar2,in_AL)) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar1 = (undefined2 *)
           (CONCAT62(in_register_00000002,CONCAT11(bVar2,in_AL)) +
           CONCAT62(in_register_00000002,CONCAT11(bVar2,in_AL)));
  *puVar1 = in_FPUControlWord;
  puVar1[2] = in_FPUStatusWord;
  puVar1[4] = in_FPUTagWord;
  *(undefined8 *)(puVar1 + 10) = in_FPUDataPointer;
  *(undefined8 *)(puVar1 + 6) = in_FPUInstructionPointer;
  puVar1[9] = in_FPULastInstructionOpcode;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be95e FUN_14d7be95e body=9 status=ok
// SIG undefined FUN_14d7be95e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7be932) */

void FUN_14d7be95e(void)

{
  short in_AX;
  byte unaff_BL;
  undefined4 unaff_EBP;
  byte unaff_DIL;
  longlong in_R11;
  bool in_ZF;
  
  if (!in_ZF) {
    LOCK();
    *(undefined4 *)((ulonglong)(uint)(int)in_AX + 0x4c) = unaff_EBP;
    UNLOCK();
    *(char *)(in_R11 + -0x38e2a710) = *(char *)(in_R11 + -0x38e2a710) - (unaff_DIL ^ unaff_BL);
    in(0x4e);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be979 FUN_14d7be979 body=5 status=ok
// SIG undefined FUN_14d7be979(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be979(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be98a FUN_14d7be98a body=26 status=ok
// SIG undefined FUN_14d7be98a(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7be98e) */

void FUN_14d7be98a(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint *in_RAX;
  byte bVar5;
  longlong lVar4;
  char cVar6;
  undefined4 *unaff_RSI;
  undefined1 *unaff_RDI;
  bool in_CF;
  bool in_ZF;
  
  lVar4 = param_1 + -1;
  if (lVar4 == 0) {
    *unaff_RDI = *(undefined1 *)unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_CF || in_ZF) {
    out(0x4b,(int)((ulonglong)in_RAX & 0xffffffffffffff00));
    LOCK();
    *(char *)(((ulonglong)in_RAX & 0xffffffffffffff00) + 0x1076f70c) = (char)lVar4;
    UNLOCK();
    unaff_RDI[1] = *(undefined1 *)unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (&stack0x00000000)[(longlong)unaff_RSI * 2] = (&stack0x00000000)[(longlong)unaff_RSI * 2] + '\x01'
  ;
  bVar5 = (byte)((ulonglong)lVar4 >> 8);
  *(char *)((longlong)in_RAX * 2) = *(char *)((longlong)in_RAX * 2) - bVar5;
  pbVar1 = (byte *)(param_2 + 0x7e);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar5;
  bVar3 = (byte)param_2 + *(byte *)(param_2 + -0x2e);
  cVar6 = bVar3 + CARRY1(bVar2,bVar5);
  if (param_1 == 2 || cVar6 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = (*in_RAX - (int)in_RAX) -
            (uint)(CARRY1((byte)param_2,*(byte *)(param_2 + -0x2e)) ||
                  CARRY1(bVar3,CARRY1(bVar2,bVar5)));
  if ((POPCOUNT(*in_RAX & 0xff) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*unaff_RSI,CONCAT11((char)((ulonglong)param_2 >> 8),cVar6));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be98e FUN_14d7be98e body=2 status=ok
// SIG undefined FUN_14d7be98e(void)

void FUN_14d7be98e(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014d7be98e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14d7be993 FUN_14d7be993 body=13 status=ok
// SIG undefined FUN_14d7be993(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7be98e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7be993(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint *in_RAX;
  byte bVar4;
  char cVar5;
  undefined4 unaff_EBP;
  undefined4 unaff_0000002c;
  undefined4 *unaff_RSI;
  
  *(undefined4 *)(CONCAT44(unaff_0000002c,unaff_EBP) + -0x34) = unaff_EBP;
  (&stack0x00000000)[(longlong)unaff_RSI * 2] = (&stack0x00000000)[(longlong)unaff_RSI * 2] + '\x01'
  ;
  bVar4 = (byte)((ulonglong)param_1 >> 8);
  _DAT_be13918035fdd49d = in_RAX;
  *(char *)((longlong)in_RAX * 2) = *(char *)((longlong)in_RAX * 2) - bVar4;
  pbVar1 = (byte *)(param_2 + 0x7e);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar4;
  bVar3 = (byte)param_2 + *(byte *)(param_2 + -0x2e);
  cVar5 = bVar3 + CARRY1(bVar2,bVar4);
  if (CONCAT71((int7)((ulonglong)param_1 >> 8),0x48) == 1 || cVar5 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = (*in_RAX - (int)in_RAX) -
            (uint)(CARRY1((byte)param_2,*(byte *)(param_2 + -0x2e)) ||
                  CARRY1(bVar3,CARRY1(bVar2,bVar4)));
  if ((POPCOUNT(*in_RAX & 0xff) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*unaff_RSI,CONCAT11((char)((ulonglong)param_2 >> 8),cVar5));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be9a9 FUN_14d7be9a9 body=2 status=ok
// SIG undefined FUN_14d7be9a9(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7be98e) */

void FUN_14d7be9a9(longlong param_1,longlong param_2)

{
  byte bVar1;
  uint *in_RAX;
  char cVar2;
  undefined4 *unaff_RSI;
  byte in_CF;
  
  bVar1 = (byte)param_2 + *(byte *)(param_2 + -0x2e);
  cVar2 = bVar1 + in_CF;
  if (param_1 == 1 || cVar2 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = (*in_RAX - (int)in_RAX) -
            (uint)(CARRY1((byte)param_2,*(byte *)(param_2 + -0x2e)) || CARRY1(bVar1,in_CF));
  if ((POPCOUNT(*in_RAX & 0xff) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*unaff_RSI,CONCAT11((char)((ulonglong)param_2 >> 8),cVar2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be9ad FUN_14d7be9ad body=10 status=ok
// SIG undefined FUN_14d7be9ad(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7be98e) */

void FUN_14d7be9ad(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be9b9 FUN_14d7be9b9 body=4 status=ok
// SIG undefined FUN_14d7be9b9(void)

undefined4 FUN_14d7be9b9(void)

{
  undefined4 unaff_EBP;
  
  return unaff_EBP;
}



// FUNCTION 14d7be9be FUN_14d7be9be body=10 status=ok
// SIG undefined FUN_14d7be9be(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be9be(void)

{
  bool in_ZF;
  
  if (in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be9cb FUN_14d7be9cb body=14 status=ok
// SIG undefined FUN_14d7be9cb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be9cb(void)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  
  pbVar1 = (byte *)(CONCAT71(in_register_00000001,in_AL) + 0x22);
  *pbVar1 = *pbVar1 << 2 | *pbVar1 >> 6;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) >> 1;
  *(byte *)(unaff_RBP + 0x42a476c5) = *(byte *)(unaff_RBP + 0x42a476c5) & unaff_BH;
  puVar2 = (undefined2 *)
           (CONCAT71(in_register_00000001,in_AL) + CONCAT71(in_register_00000001,in_AL));
  *puVar2 = in_FPUControlWord;
  puVar2[2] = in_FPUStatusWord;
  puVar2[4] = in_FPUTagWord;
  *(undefined8 *)(puVar2 + 10) = in_FPUDataPointer;
  *(undefined8 *)(puVar2 + 6) = in_FPUInstructionPointer;
  puVar2[9] = in_FPULastInstructionOpcode;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be9e8 FUN_14d7be9e8 body=10 status=ok
// SIG undefined FUN_14d7be9e8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be9e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be9f5 FUN_14d7be9f5 body=2 status=ok
// SIG undefined FUN_14d7be9f5(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7be9f8) overlaps instruction at (ram,0x00014d7be9f7)
    */

void FUN_14d7be9f5(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be9fa FUN_14d7be9fa body=2 status=ok
// SIG undefined FUN_14d7be9fa(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7be9fb) overlaps instruction at (ram,0x00014d7be9fa)
    */

void FUN_14d7be9fa(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7be9fe FUN_14d7be9fe body=1 status=ok
// SIG undefined FUN_14d7be9fe(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7be9fe(void)

{
  int *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI << 0x11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bea03 FUN_14d7bea03 body=2 status=ok
// SIG undefined FUN_14d7bea03(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bea03(longlong param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined2 *puVar2;
  uint *in_RAX;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  int *unaff_RDI;
  bool in_SF;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  
  if (!in_SF) {
    *(char *)((longlong)in_RAX + -0x3f3472d9) =
         *(char *)((longlong)in_RAX + -0x3f3472d9) + (char)param_1;
    *(byte *)(unaff_RBP + 0x42a476c5) = *(byte *)(unaff_RBP + 0x42a476c5) & unaff_BH;
    puVar2 = (undefined2 *)
             ((ulonglong)
              ((uint)(((ulonglong)in_RAX & 0xffffffff) << 0x1b) |
              (uint)(((ulonglong)in_RAX & 0xffffffff) >> 6)) * 2);
    *puVar2 = in_FPUControlWord;
    puVar2[2] = in_FPUStatusWord;
    puVar2[4] = in_FPUTagWord;
    *(undefined8 *)(puVar2 + 10) = in_FPUDataPointer;
    *(undefined8 *)(puVar2 + 6) = in_FPUInstructionPointer;
    puVar2[9] = in_FPULastInstructionOpcode;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = *in_RAX ^ (uint)in_RAX;
  *unaff_RDI = *unaff_RDI << 0x1a;
  if (param_1 != 0) {
    pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x50);
    *pcVar1 = *pcVar1 + unaff_BH;
    out(*unaff_RSI,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*unaff_RSI,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bea0c FUN_14d7bea0c body=4 status=ok
// SIG undefined FUN_14d7bea0c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bea0c(byte param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI << (param_1 & 0x1f);
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x50);
  *pcVar1 = *pcVar1 + unaff_BH;
  out(*(undefined4 *)unaff_RSI,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bea10 FUN_14d7bea10 body=12 status=ok
// SIG undefined FUN_14d7bea10(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bea10(undefined8 param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined4 *unaff_RSI;
  
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x50);
  *pcVar1 = *pcVar1 + unaff_BH;
  out(*unaff_RSI,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bea1e FUN_14d7bea1e body=1 status=ok
// SIG undefined FUN_14d7bea1e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bea1e(void)

{
  undefined4 in_EAX;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bea34 FUN_14d7bea34 body=12 status=ok
// SIG undefined FUN_14d7bea34(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bea34(undefined8 param_1,undefined2 param_2)

{
  int in_EAX;
  int *piVar1;
  undefined4 *unaff_RSI;
  undefined1 *unaff_RDI;
  byte in_CF;
  bool in_SF;
  
  *unaff_RDI = (char)in_EAX;
  out(param_2,(char)in_EAX);
  if (in_SF) {
    *(undefined4 *)(unaff_RDI + 1) = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar1 = (int *)(ulonglong)(in_EAX + -0x3b432c8b + (uint)in_CF);
  cRam000000004578ee29 = cRam000000004578ee29 + (char)((ushort)param_2 >> 8);
  *piVar1 = *piVar1 - (int)(unaff_RDI + 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bea4d FUN_14d7bea4d body=3 status=ok
// SIG undefined FUN_14d7bea4d(void)

void FUN_14d7bea4d(void)

{
  return;
}



// FUNCTION 14d7bea5a FUN_14d7bea5a body=11 status=ok
// SIG undefined FUN_14d7bea5a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bea5a(longlong param_1,byte *param_2)

{
  char *pcVar1;
  code *pcVar2;
  byte in_AL;
  byte unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  
  *(uint *)(param_2 + 0x27) = *(uint *)(param_2 + 0x27) & (uint)param_2;
  *param_2 = *param_2 ^ in_AL;
  *(int *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x1deaa20f) =
       (int)&stack0x00000000;
  if (param_1 == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(CONCAT44((int)((ulonglong)param_2 >> 0x20),
                             CONCAT22((short)((ulonglong)param_2 >> 0x10),
                                      CONCAT11((char)((ulonglong)param_2 >> 8),
                                               (byte)param_2 - unaff_BL))) + 0x68c6fe69);
  *pcVar1 = (*pcVar1 - unaff_BH) - ((byte)param_2 < unaff_BL);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



// FUNCTION 14d7bea66 FUN_14d7bea66 body=8 status=ok
// SIG undefined FUN_14d7bea66(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bea66(longlong param_1)

{
  if (param_1 == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bea6f FUN_14d7bea6f body=12 status=ok
// SIG undefined FUN_14d7bea6f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bea6f(longlong param_1,longlong param_2)

{
  code *pcVar1;
  char unaff_BH;
  char in_CF;
  
  if (param_1 == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(param_2 + 0x68c6fe69) = (*(char *)(param_2 + 0x68c6fe69) - unaff_BH) - in_CF;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7bea7c FUN_14d7bea7c body=10 status=ok
// SIG undefined FUN_14d7bea7c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bea7c(void)

{
  code *pcVar1;
  char unaff_BL;
  undefined7 unaff_00000019;
  
  pcVar1 = (code *)swi(0x3c);
  (*pcVar1)();
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bea89 FUN_14d7bea89 body=13 status=ok
// SIG undefined FUN_14d7bea89(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bea89(undefined1 param_1,undefined8 param_2)

{
  undefined1 in_AL;
  undefined6 in_register_00000002;
  char *unaff_RBX;
  int unaff_EDI;
  
  DAT_11238be06 = DAT_11238be06 & (byte)param_2;
  *unaff_RBX = *unaff_RBX + (char)((ulonglong)param_2 >> 8);
  *(int *)CONCAT62(in_register_00000002,CONCAT11(param_1,in_AL)) =
       *(int *)CONCAT62(in_register_00000002,CONCAT11(param_1,in_AL)) - unaff_EDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7beaa3 FUN_14d7beaa3 body=1 status=ok
// SIG undefined FUN_14d7beaa3(void)

void FUN_14d7beaa3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7beae7 FUN_14d7beae7 body=2 status=ok
// SIG undefined FUN_14d7beae7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7beae7(longlong param_1)

{
  char *pcVar1;
  code *pcVar2;
  undefined4 uVar3;
  byte bVar4;
  byte unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  bool in_ZF;
  bool in_OF;
  
  if (in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_ZF) {
    uVar3 = in(0xdc);
    bVar4 = (byte)((int)uVar3 >> 0x1f);
    *(int *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x1deaa20f) =
         (int)&stack0x00000000;
    if (param_1 != 1) {
      pcVar1 = (char *)((ulonglong)CONCAT31((int3)((int)uVar3 >> 0x1f),bVar4 - unaff_BL) +
                       0x68c6fe69);
      *pcVar1 = (*pcVar1 - unaff_BH) - (bVar4 < unaff_BL);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7beaec FUN_14d7beaec body=4 status=ok
// SIG undefined FUN_14d7beaec(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7beadd) overlaps instruction at (ram,0x00014d7beadb)
    */

void FUN_14d7beaec(int *param_1,undefined1 *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar7;
  ulonglong uVar8;
  uint uVar9;
  char cVar10;
  byte bVar11;
  int *in_RAX;
  longlong lVar12;
  byte bVar14;
  byte bVar15;
  ulonglong unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  char in_CF;
  bool bVar16;
  char in_AF;
  bool bVar17;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined6 uVar13;
  
  bVar14 = (byte)((ulonglong)param_1 >> 8);
  while( true ) {
    bVar15 = (byte)(unaff_RBX >> 8);
    uVar13 = (undefined6)((ulonglong)in_RAX >> 0x10);
    cVar10 = (char)in_RAX;
    lVar12 = CONCAT62(uVar13,CONCAT11((char)((ulonglong)in_RAX >> 8) + bVar15 + in_CF,cVar10));
    *(longlong *)((longlong)register0x00000020 + -8) = lVar12;
    *(undefined1 **)((longlong)register0x00000020 + -0x10) = param_2;
    pbVar1 = (byte *)(lVar12 + -9);
    bVar3 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar15;
    bVar4 = *pbVar1;
    bVar5 = *pbVar1;
    bVar6 = *pbVar1;
    bVar7 = in_AF << 4;
    *(undefined1 **)((longlong)register0x00000020 + -0x18) = param_2;
    param_2 = &DAT_cc6bc991;
    *(undefined8 *)((longlong)register0x00000020 + -0x20) = 0xfffffffffffffff3;
    bVar11 = cVar10 + 0xe;
    in_AF = (bVar7 & 0x10) != 0;
    pcVar2 = (char *)(unaff_RBX - 0x43bf74c);
    *pcVar2 = *pcVar2 + bVar15;
    if (-1 < *pcVar2) {
                    /* WARNING: Could not recover jumptable at 0x00014d7beb46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulonglong)*(uint *)(unaff_RSI + 0x12c248f3))();
      return;
    }
    bVar3 = *(byte *)CONCAT71((int7)(CONCAT62(uVar13,CONCAT11(((char)bVar4 < '\0') << 7 |
                                                              (bVar5 == 0) << 6 | bVar7 |
                                                              ((POPCOUNT(bVar6) & 1U) == 0) << 2 | 2
                                                              | CARRY1(bVar3,bVar15),cVar10)) >> 8),
                              bVar11);
    bVar16 = bVar11 < bVar3;
    bVar17 = bVar11 == bVar3;
    in_RAX = (int *)(unaff_RBP & 0xffffffff);
    DAT_cc6bc991 = 0xc9;
    if (!SBORROW1(bVar11,bVar3)) break;
    bVar16 = CARRY1(bRam00000000cd1df15b,bVar14);
    bRam00000000cd1df15b = bRam00000000cd1df15b + bVar14;
    cVar10 = ((char)unaff_RBP + '&') - bVar16;
    uVar9 = CONCAT31((int3)(unaff_RBP >> 8),cVar10);
    in_RAX = (int *)(ulonglong)uVar9;
    uVar8 = *(ulonglong *)((longlong)register0x00000020 + -0x20);
    pbVar1 = (byte *)((longlong)param_1 + -0x23);
    in_CF = CARRY1(*pbVar1,bVar15);
    *pbVar1 = *pbVar1 + bVar15;
    if (!(bool)in_CF) {
      if (-1 < (char)*pbVar1) {
        DAT_30dfc2106d9198d9 = cVar10;
        *in_RAX = *in_RAX - uVar9;
        in_RAX = (int *)(unaff_RBX & 0xffffffff);
        DAT_708817943644dc84 = SUB81(in_RAX,0);
        *(undefined1 **)((longlong)register0x00000020 + -0x20) =
             (undefined1 *)((longlong)register0x00000020 + -0x18);
        goto LAB_14d7bead4_7;
      }
      pcVar2 = (char *)(uVar8 + 0x70903288);
      *pcVar2 = *pcVar2 + -0x6f;
      bVar17 = (unaff_RBP & 0x4000) != 0;
      bVar16 = (unaff_RBP & 0x100) != 0;
      break;
    }
    unaff_RBX = 0xfbc408b4;
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -0x18);
    unaff_RBP = uVar8;
    unaff_RSI = unaff_RSI + 1;
  }
  if (!bVar16 && !bVar17) {
    *param_1 = *param_1 + -0x3bffc05e;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_14d7bead4_7:
  *(undefined1 *)(in_RAX + 0x15) = 0xc9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7beaf9 FUN_14d7beaf9 body=4 status=ok
// SIG undefined FUN_14d7beaf9(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7beadd) overlaps instruction at (ram,0x00014d7beadb)
    */

void FUN_14d7beaf9(int *param_1,undefined1 *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  ulonglong uVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  int *in_RAX;
  byte bVar8;
  byte bVar9;
  ulonglong unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  byte in_CF;
  bool bVar10;
  char in_PF;
  char in_AF;
  char in_ZF;
  bool bVar11;
  char in_SF;
  
  bVar8 = (byte)((ulonglong)param_1 >> 8);
  while( true ) {
    bVar7 = in_SF << 7 | in_ZF << 6 | in_AF << 4 | in_PF << 2 | 2U | in_CF;
    *(undefined1 **)((longlong)register0x00000020 + -8) = param_2;
    param_2 = &DAT_cc6bc991;
    *(undefined8 *)((longlong)register0x00000020 + -0x10) = 0xfffffffffffffff3;
    bVar6 = (char)in_RAX + 0xe;
    in_AF = (bVar7 & 0x10) != 0;
    pcVar2 = (char *)(unaff_RBX - 0x43bf74c);
    bVar9 = (byte)(unaff_RBX >> 8);
    *pcVar2 = *pcVar2 + bVar9;
    if (-1 < *pcVar2) {
                    /* WARNING: Could not recover jumptable at 0x00014d7beb46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulonglong)*(uint *)(unaff_RSI + 0x12c248f3))();
      return;
    }
    bVar7 = *(byte *)CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                              CONCAT11(bVar7,(char)in_RAX)) >> 8),bVar6);
    bVar10 = bVar6 < bVar7;
    bVar11 = bVar6 == bVar7;
    in_RAX = (int *)(unaff_RBP & 0xffffffff);
    DAT_cc6bc991 = 0xc9;
    if (!SBORROW1(bVar6,bVar7)) break;
    bVar10 = CARRY1(bRam00000000cd1df15b,bVar8);
    bRam00000000cd1df15b = bRam00000000cd1df15b + bVar8;
    cVar5 = ((char)unaff_RBP + '&') - bVar10;
    uVar4 = CONCAT31((int3)(unaff_RBP >> 8),cVar5);
    in_RAX = (int *)(ulonglong)uVar4;
    uVar3 = *(ulonglong *)((longlong)register0x00000020 + -0x10);
    pbVar1 = (byte *)((longlong)param_1 + -0x23);
    in_CF = CARRY1(*pbVar1,bVar9);
    *pbVar1 = *pbVar1 + bVar9;
    in_SF = (char)*pbVar1 < '\0';
    in_ZF = *pbVar1 == 0;
    in_PF = (POPCOUNT(*pbVar1) & 1U) == 0;
    if (!(bool)in_CF) {
      if (!(bool)in_SF) {
        DAT_30dfc2106d9198d9 = cVar5;
        *in_RAX = *in_RAX - uVar4;
        in_RAX = (int *)(unaff_RBX & 0xffffffff);
        DAT_708817943644dc84 = SUB81(in_RAX,0);
        *(undefined1 **)((longlong)register0x00000020 + -0x10) =
             (undefined1 *)((longlong)register0x00000020 + -8);
        goto LAB_14d7bead4_7;
      }
      pcVar2 = (char *)(uVar3 + 0x70903288);
      *pcVar2 = *pcVar2 + -0x6f;
      bVar11 = (unaff_RBP & 0x4000) != 0;
      bVar10 = (unaff_RBP & 0x100) != 0;
      break;
    }
    unaff_RBX = 0xfbc408b4;
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
    unaff_RBP = uVar3;
    unaff_RSI = unaff_RSI + 1;
  }
  if (!bVar10 && !bVar11) {
    *param_1 = *param_1 + -0x3bffc05e;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_14d7bead4_7:
  *(undefined1 *)(in_RAX + 0x15) = 0xc9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7beafd FUN_14d7beafd body=36 status=ok
// SIG undefined FUN_14d7beafd(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7beadd) overlaps instruction at (ram,0x00014d7beadb)
    */

void FUN_14d7beafd(int *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  int *in_RAX;
  byte bVar7;
  byte bVar8;
  ulonglong unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  bool bVar9;
  bool bVar10;
  
  bVar7 = (byte)((ulonglong)param_1 >> 8);
  while( true ) {
    bVar6 = (char)in_RAX + 0xe;
    pcVar2 = (char *)(unaff_RBX - 0x43bf74c);
    bVar8 = (byte)(unaff_RBX >> 8);
    *pcVar2 = *pcVar2 + bVar8;
    if (-1 < *pcVar2) {
                    /* WARNING: Could not recover jumptable at 0x00014d7beb46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulonglong)*(uint *)(unaff_RSI + 0x12c248f3))();
      return;
    }
    bVar3 = *(byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar6);
    bVar9 = bVar6 < bVar3;
    bVar10 = bVar6 == bVar3;
    in_RAX = (int *)(unaff_RBP & 0xffffffff);
    DAT_cc6bc991 = 0xc9;
    if (!SBORROW1(bVar6,bVar3)) break;
    bVar9 = CARRY1(bRam00000000cd1df15b,bVar7);
    bRam00000000cd1df15b = bRam00000000cd1df15b + bVar7;
    cVar5 = ((char)unaff_RBP + '&') - bVar9;
    uVar4 = CONCAT31((int3)(unaff_RBP >> 8),cVar5);
    in_RAX = (int *)(ulonglong)uVar4;
    pbVar1 = (byte *)((longlong)param_1 + -0x23);
    bVar6 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar8;
    if (!CARRY1(bVar6,bVar8)) {
      if (-1 < (char)*pbVar1) {
        DAT_30dfc2106d9198d9 = cVar5;
        *in_RAX = *in_RAX - uVar4;
        in_RAX = (int *)(unaff_RBX & 0xffffffff);
        DAT_708817943644dc84 = SUB81(in_RAX,0);
        goto LAB_14d7bead4_7;
      }
      cRam000000007090327b = cRam000000007090327b + -0x6f;
      bVar10 = (unaff_RBP & 0x4000) != 0;
      bVar9 = (unaff_RBP & 0x100) != 0;
      break;
    }
    unaff_RBX = 0xfbc408b4;
    unaff_RBP = 0xfffffffffffffff3;
    unaff_RSI = unaff_RSI + 1;
  }
  if (!bVar9 && !bVar10) {
    *param_1 = *param_1 + -0x3bffc05e;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_14d7bead4_7:
  *(undefined1 *)(in_RAX + 0x15) = 0xc9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7beb30 FUN_14d7beb30 body=3 status=ok
// SIG undefined FUN_14d7beb30(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7beb30(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0);
  (*pcVar1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7beb3d FUN_14d7beb3d body=15 status=ok
// SIG undefined FUN_14d7beb3d(void)

void FUN_14d7beb3d(void)

{
  undefined1 in_AL;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = in_AL;
                    /* WARNING: Could not recover jumptable at 0x00014d7beb46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulonglong)*(uint *)(unaff_RSI + 0x12c248f2))(0);
  return;
}



// FUNCTION 14d7beb52 FUN_14d7beb52 body=2 status=ok
// SIG undefined FUN_14d7beb52(void)

void FUN_14d7beb52(longlong param_1,uint *param_2)

{
  code *pcVar1;
  byte bVar2;
  undefined1 in_AL;
  undefined4 unaff_EBP;
  undefined1 in_CF;
  
  bVar2 = (byte)param_1 & 0x1f;
  *param_2 = (uint)(CONCAT14(in_CF,*param_2) >> bVar2) | *param_2 << 0x21 - bVar2;
  out(0x99,in_AL);
  *(undefined4 *)(param_1 + 0x4a) = unaff_EBP;
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}


