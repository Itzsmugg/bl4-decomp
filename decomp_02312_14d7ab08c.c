// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14d7ab08c FUN_14d7ab08c body=25 status=ok
// SIG undefined FUN_14d7ab08c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab08c(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RDI;
  
  *(char *)(unaff_RDI + -0x8fc305d) =
       *(char *)(unaff_RDI + -0x8fc305d) - (char)((ulonglong)param_1 >> 8);
  pcVar1 = (char *)(param_2 + CONCAT71(unaff_00000019,unaff_BL) * 4);
  *pcVar1 = *pcVar1 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab0a9 FUN_14d7ab0a9 body=4 status=ok
// SIG undefined FUN_14d7ab0a9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab0a9(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  char unaff_BL;
  
  *(char *)(param_2 + 0x3d1be048) = *(char *)(param_2 + 0x3d1be048) + unaff_BL;
  uVar1 = in(0x99);
  out(7,(char)uVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab0be FUN_14d7ab0be body=6 status=ok
// SIG undefined FUN_14d7ab0be(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab0be(undefined8 param_1,longlong param_2)

{
  int unaff_ESP;
  byte in_CF;
  
  *(int *)(param_2 + 0x19) = *(int *)(param_2 + 0x19) + unaff_ESP + (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab0c6 FUN_14d7ab0c6 body=19 status=ok
// SIG undefined FUN_14d7ab0c6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab0c6(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (!in_ZF && in_OF == in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(param_2 + CONCAT71(unaff_00000019,unaff_BL) * 4);
  *pcVar1 = *pcVar1 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab0db FUN_14d7ab0db body=4 status=ok
// SIG undefined FUN_14d7ab0db(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab0db(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab0f9 FUN_14d7ab0f9 body=11 status=ok
// SIG undefined FUN_14d7ab0f9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab0f9(longlong param_1)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  (*(code *)(param_1 + 0x67573900))();
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab106 FUN_14d7ab106 body=5 status=ok
// SIG undefined FUN_14d7ab106(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab106(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab10f thunk_EXT_FUN_0625a858 body=7 status=ok
// SIG undefined thunk_EXT_FUN_0625a858(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0625a858(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab139 FUN_14d7ab139 body=7 status=ok
// SIG undefined FUN_14d7ab139(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab139(void)

{
  longlong in_RAX;
  int unaff_EDI;
  
  *(int *)(in_RAX + 0x2e) = *(int *)(in_RAX + 0x2e) + unaff_EDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab146 FUN_14d7ab146 body=17 status=ok
// SIG undefined FUN_14d7ab146(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab146(undefined8 param_1,char *param_2)

{
  code *pcVar1;
  char unaff_BL;
  byte unaff_BPL;
  
  *param_2 = (*param_2 - unaff_BL) - (unaff_BPL < 0xfd);
  if (*param_2 != '\0') {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab15a FUN_14d7ab15a body=2 status=ok
// SIG undefined FUN_14d7ab15a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab15a(undefined8 param_1,undefined2 param_2)

{
  undefined1 in_AL;
  
  out(param_2,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab163 FUN_14d7ab163 body=10 status=ok
// SIG undefined FUN_14d7ab163(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab163(ulonglong param_1)

{
  char cVar1;
  char *unaff_RDI;
  char *pcVar2;
  
  if ((POPCOUNT((char)(param_1 & 0xffffffff) - *unaff_RDI) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar1 = in(0x1e);
  pcVar2 = (char *)CONCAT71((int7)((param_1 & 0xffffffff) >> 8),cVar1);
  LOCK();
  uRam00000000ca93c539 = 0xca93c539;
  UNLOCK();
  *pcVar2 = *pcVar2 + cVar1;
  *pcVar2 = *pcVar2 + cVar1;
  *pcVar2 = *pcVar2 + cVar1;
  *pcVar2 = *pcVar2 + cVar1;
  *pcVar2 = *pcVar2 + cVar1;
  *pcVar2 = *pcVar2 + cVar1;
  *pcVar2 = *pcVar2 + cVar1;
  *pcVar2 = *pcVar2 + cVar1;
  *pcVar2 = *pcVar2 + cVar1;
  *pcVar2 = *pcVar2 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab17c FUN_14d7ab17c body=83 status=ok
// SIG undefined FUN_14d7ab17c(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7ab1b1) overlaps instruction at (ram,0x00014d7ab1ae)
    */

void FUN_14d7ab17c(longlong param_1,undefined2 param_2)

{
  uint *puVar1;
  undefined1 uVar2;
  char cVar3;
  int in_EAX;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 *unaff_RSI;
  byte *unaff_RDI;
  byte *pbVar8;
  bool bVar9;
  
  unaff_RSI[-0x61] = unaff_RSI[-0x61] + (char)((ulonglong)param_1 >> 8);
  *(int *)(unaff_RSI + 0x2dbfcbef) = *(int *)(unaff_RSI + 0x2dbfcbef) >> 0xc;
  iVar4 = in_EAX + (int)param_1;
  do {
  } while (param_1 == 0);
  puVar1 = (uint *)(unaff_RSI + -0x5b);
  bVar9 = *puVar1 < 0xffffffa9;
  uVar5 = *puVar1;
  *puVar1 = *puVar1 + 0x57;
  out(*unaff_RSI,param_2);
  puVar7 = (undefined4 *)&DAT_d89a8c7f;
  pbVar8 = unaff_RDI;
  if (*puVar1 != 0 && SBORROW4(uVar5,-0x57) == (int)*puVar1 < 0) {
    puVar7 = (undefined4 *)0xca93c539;
    pbVar8 = unaff_RDI + 1;
    bVar9 = (byte)iVar4 < *unaff_RDI;
    if ((POPCOUNT((byte)iVar4 - *unaff_RDI) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar2 = in(0x1e);
    iVar4 = CONCAT31((int3)((uint)iVar4 >> 8),uVar2);
  }
  pbVar8[0x43f276a7] = (byte)((ulonglong)puVar7 >> 8);
  uVar5 = iVar4 + -0x6cff4cfe + (uint)bVar9;
  pbVar8 = (byte *)((ulonglong)uVar5 - 0x8cd8b53);
  *pbVar8 = *pbVar8 << 5 | *pbVar8 >> 3;
  uVar5 = uVar5 + 0xe11b9374;
  pcVar6 = (char *)(ulonglong)uVar5;
  LOCK();
  *puVar7 = (int)puVar7;
  UNLOCK();
  cVar3 = (char)uVar5;
  *pcVar6 = *pcVar6 + cVar3;
  *pcVar6 = *pcVar6 + cVar3;
  *pcVar6 = *pcVar6 + cVar3;
  *pcVar6 = *pcVar6 + cVar3;
  *pcVar6 = *pcVar6 + cVar3;
  *pcVar6 = *pcVar6 + cVar3;
  *pcVar6 = *pcVar6 + cVar3;
  *pcVar6 = *pcVar6 + cVar3;
  *pcVar6 = *pcVar6 + cVar3;
  *pcVar6 = *pcVar6 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab1d2 FUN_14d7ab1d2 body=4 status=ok
// SIG undefined FUN_14d7ab1d2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab1d2(longlong param_1,undefined2 param_2)

{
  char cVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  char in_ZF;
  
  if (param_1 == 1 || in_ZF != '\0') {
    out(param_2,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar1 = (char)in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + cVar1;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + cVar1;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + cVar1;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + cVar1;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab1da FUN_14d7ab1da body=13 status=ok
// SIG undefined FUN_14d7ab1da(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab1da(undefined8 param_1,undefined2 param_2)

{
  uint *puVar1;
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  undefined4 unaff_0000002c;
  bool in_PF;
  
  out(param_2,in_EAX);
  if (in_PF) {
    in(param_2);
    in(param_2);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  puVar1 = (uint *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x9e56fe3);
  *puVar1 = *puVar1 << 1 | (uint)((int)*puVar1 < 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab1e7 FUN_14d7ab1e7 body=3 status=ok
// SIG undefined FUN_14d7ab1e7(void)

void FUN_14d7ab1e7(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RDI;
  
  in(param_2);
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7ab1f0 FUN_14d7ab1f0 body=14 status=ok
// SIG undefined FUN_14d7ab1f0(void)

void FUN_14d7ab1f0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7ab205 FUN_14d7ab205 body=3 status=ok
// SIG undefined FUN_14d7ab205(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab205(void)

{
  char in_AL;
  undefined7 in_register_00000001;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab20d FUN_14d7ab20d body=8 status=ok
// SIG undefined FUN_14d7ab20d(void)

void FUN_14d7ab20d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7ab215 FUN_14d7ab215 body=1 status=ok
// SIG undefined FUN_14d7ab215(void)

void FUN_14d7ab215(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7ab21a FUN_14d7ab21a body=3 status=ok
// SIG undefined FUN_14d7ab21a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab21a(undefined8 param_1,undefined2 param_2)

{
  undefined4 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
  in(9);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab21e FUN_14d7ab21e body=15 status=ok
// SIG undefined FUN_14d7ab21e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab21e(void)

{
  uint *puVar1;
  longlong unaff_RBP;
  
  puVar1 = (uint *)(unaff_RBP + 0x9e56fe3);
  *puVar1 = *puVar1 << 1 | (uint)((int)*puVar1 < 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab238 FUN_14d7ab238 body=5 status=ok
// SIG undefined FUN_14d7ab238(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab238(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab24d FUN_14d7ab24d body=3 status=ok
// SIG undefined FUN_14d7ab24d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab24d(undefined8 param_1,undefined2 param_2)

{
  int *piVar1;
  code *pcVar2;
  char in_AL;
  undefined7 in_register_00000001;
  int unaff_EBP;
  undefined4 *unaff_RSI;
  char *unaff_RDI;
  
  out(*unaff_RSI,param_2);
  if (in_AL == *unaff_RDI || in_AL < *unaff_RDI) {
    piVar1 = (int *)(CONCAT71(in_register_00000001,in_AL) + -0x39 +
                    CONCAT71(in_register_00000001,in_AL));
    *piVar1 = *piVar1 + unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



// FUNCTION 14d7ab251 FUN_14d7ab251 body=2 status=ok
// SIG undefined FUN_14d7ab251(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab251(void)

{
  int *piVar1;
  code *pcVar2;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  int unaff_EBP;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (in_ZF || in_OF != in_SF) {
    piVar1 = (int *)(CONCAT71(in_register_00000001,in_AL) + -0x39 +
                    CONCAT71(in_register_00000001,in_AL));
    *piVar1 = *piVar1 + unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



// FUNCTION 14d7ab266 FUN_14d7ab266 body=2 status=ok
// SIG undefined FUN_14d7ab266(void)

void FUN_14d7ab266(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7ab26e FUN_14d7ab26e body=2 status=ok
// SIG undefined FUN_14d7ab26e(void)

void FUN_14d7ab26e(longlong param_1)

{
  uint *puVar1;
  char *pcVar2;
  uint uVar3;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  char unaff_BL;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  uint *unaff_RSI;
  
  puVar1 = (uint *)((CONCAT71(in_register_00000001,in_AL) | 1) + 0x8db9957);
  *puVar1 = *puVar1 | 0x795345f2;
  uVar3 = *unaff_RSI;
  *unaff_RSI = *unaff_RSI + unaff_EBP;
  *(char *)(param_1 + 0xcaa7a2) =
       (*(char *)(param_1 + 0xcaa7a2) - unaff_BL) - CARRY4(uVar3,unaff_EBP);
  pcVar2 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + -0x5c76f440);
  *pcVar2 = *pcVar2 >> ((byte)param_1 & 0x1f);
  return;
}



// FUNCTION 14d7ab272 FUN_14d7ab272 body=11 status=ok
// SIG undefined FUN_14d7ab272(void)

/* WARNING: Instruction at (ram,0x00014d7ab27c) overlaps instruction at (ram,0x00014d7ab27b)
    */

void FUN_14d7ab272(longlong param_1)

{
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined1 *puVar1;
  longlong unaff_RBP;
  char in_CF;
  bool in_SF;
  float10 in_ST0;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  
  *(int *)CONCAT44(in_register_00000004,in_EAX) = (int)in_ST0;
  puVar1 = auStack_10;
  if (!in_SF) {
    puVar1 = auStack_18;
  }
  *(ulonglong *)(puVar1 + -8) = CONCAT71(unaff_00000019,unaff_BL);
  *(char *)(param_1 + 0xcaa7a2) = (*(char *)(param_1 + 0xcaa7a2) - unaff_BL) - in_CF;
  *(char *)(unaff_RBP + -0x5c76f440) = *(char *)(unaff_RBP + -0x5c76f440) >> ((byte)param_1 & 0x1f);
  return;
}



// FUNCTION 14d7ab298 FUN_14d7ab298 body=4 status=ok
// SIG undefined FUN_14d7ab298(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab298(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab2a4 FUN_14d7ab2a4 body=3 status=ok
// SIG undefined FUN_14d7ab2a4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab2a4(void)

{
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  *(undefined4 *)(unaff_RDI + 1) = *(undefined4 *)(unaff_RSI + 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab2b1 FUN_14d7ab2b1 body=20 status=ok
// SIG undefined FUN_14d7ab2b1(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7ab27c) overlaps instruction at (ram,0x00014d7ab27b)
    */

void FUN_14d7ab2b1(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  char *pcVar2;
  byte bVar3;
  uint in_EAX;
  int iVar4;
  ulonglong uVar5;
  longlong lVar7;
  char unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  uint uVar8;
  undefined1 *puVar9;
  uint unaff_EBP;
  uint unaff_ESI;
  undefined1 *unaff_RDI;
  undefined8 in_R11;
  int unaff_R13D;
  float10 in_ST0;
  undefined7 uVar6;
  ulonglong uVar10;
  
  uVar6 = (undefined7)((ulonglong)param_1 >> 8);
  uVar5 = CONCAT71(uVar6,0x1d);
  piVar1 = (int *)((longlong)(ulonglong)unaff_EBP + -0x2f);
  uVar8 = (int)&stack0x00000000 - *piVar1;
  uVar10 = (ulonglong)uVar8;
  if (uVar8 == 0 || (int)&stack0x00000000 < *piVar1) {
    unaff_RDI[-0x67] = (char)param_2;
    *(int *)(ulonglong)unaff_EBP = (int)in_ST0;
    puVar9 = (undefined1 *)(uVar10 - 8);
    *(undefined8 *)(uVar10 - 8) = in_R11;
    if (-1 < (int)uVar8) {
      puVar9 = (undefined1 *)(uVar10 - 0x10);
      *(ulonglong *)(uVar10 - 0x10) = CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
    }
    *(ulonglong *)(puVar9 + -8) = CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
    *(char *)(uVar5 + 0xcaa7a2) = *(char *)(uVar5 + 0xcaa7a2) - unaff_BL;
    pcVar2 = (char *)((ulonglong)in_EAX - 0x5c76f440);
    *pcVar2 = *pcVar2 >> 0x1d;
    return;
  }
  *(uint *)(param_2 + -0x45) = *(uint *)(param_2 + -0x45) ^ (uint)uVar5;
  bVar3 = (byte)unaff_ESI;
  out((short)param_2,bVar3);
  lVar7 = CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                   CONCAT11((char)((ulonglong)param_2 >> 8) + bVar3,(char)param_2));
  out(0xbd,unaff_ESI);
  LOCK();
  uVar8 = *(uint *)((ulonglong)unaff_ESI + 0x48e5f4);
  *(uint *)((ulonglong)unaff_ESI + 0x48e5f4) = unaff_EBP;
  UNLOCK();
  *(float *)(lVar7 + 0x34 + (longlong)unaff_RDI * 2) = (float)in_ST0;
  iVar4 = (unaff_ESI + 0xb543378f) - (uint)CARRY1(unaff_BH,bVar3);
  if ((0x4abcc870 < unaff_ESI && (uint)CARRY1(unaff_BH,bVar3) <= unaff_ESI + 0xb543378f) &&
      iVar4 != 0) {
    bVar3 = *(byte *)((ulonglong)in_EAX - 0x6b);
    uVar5 = CONCAT71(uVar6,bVar3) | 0x1d;
    lVar7 = 0;
    DAT_00000000 = DAT_00000000 - (bVar3 | 0x1d);
    uVar8 = CONCAT31((int3)((uint)iVar4 >> 8),(char)iVar4 + '}');
    out(0x8e,(char)unaff_R13D);
    iVar4 = unaff_R13D;
  }
  LOCK();
  *(char *)CONCAT62((int6)((ulonglong)lVar7 >> 0x10),CONCAT11(unaff_BL,(char)lVar7)) =
       (char)((uint)iVar4 >> 8);
  UNLOCK();
  *(int *)(uVar5 + 0x38) = *(int *)(uVar5 + 0x38) << 1;
  *unaff_RDI = *(undefined1 *)(ulonglong)uVar8;
  if (uVar5 == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// FUNCTION 14d7ab2cf FUN_14d7ab2cf body=15 status=ok
// SIG undefined FUN_14d7ab2cf(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab2cf(undefined8 param_1)

{
  int *piVar1;
  ulonglong in_RAX;
  byte bVar2;
  char *pcVar4;
  char unaff_BL;
  char unaff_BH;
  undefined1 unaff_BPL;
  undefined7 unaff_00000029;
  undefined1 *unaff_RDI;
  undefined8 unaff_R13;
  longlong lVar3;
  
  *(undefined4 *)(unaff_RDI + 0x48e5f4b0) = 0x7a5cd900;
  bVar2 = (byte)param_1 | *(byte *)(CONCAT71(unaff_00000029,unaff_BPL) + -0x6b);
  lVar3 = CONCAT71((int7)((ulonglong)param_1 >> 8),bVar2);
  pcVar4 = (char *)((longlong)(in_RAX ^ 0x81) >> 0x3f);
  *pcVar4 = *pcVar4 - bVar2;
  out(0x8e,(char)unaff_R13);
  LOCK();
  *(char *)CONCAT62((int6)((longlong)in_RAX >> 0x3f),
                    CONCAT11(unaff_BL + unaff_BH,(char)((longlong)in_RAX >> 0x3f))) =
       (char)((ulonglong)unaff_R13 >> 8);
  UNLOCK();
  piVar1 = (int *)(lVar3 + 0x38);
  *piVar1 = *piVar1 << 1;
  *unaff_RDI = *(undefined1 *)
                (CONCAT71((int7)(in_RAX >> 8),(char)(in_RAX ^ 0x81) + '}') & 0xffffffff);
  if (lVar3 == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// FUNCTION 14d7ab2df FUN_14d7ab2df body=5 status=ok
// SIG undefined FUN_14d7ab2df(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab2df(longlong param_1,char *param_2)

{
  longlong in_RAX;
  byte bVar1;
  undefined1 unaff_BL;
  undefined1 unaff_BPL;
  undefined7 unaff_00000029;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  longlong unaff_R13;
  bool in_CF;
  bool in_ZF;
  
  if (!in_CF && !in_ZF) {
    bVar1 = (byte)param_1 | *(byte *)(CONCAT71(unaff_00000029,unaff_BPL) + -0x6b);
    param_1 = CONCAT71((int7)((ulonglong)param_1 >> 8),bVar1);
    param_2 = (char *)(in_RAX >> 0x3f);
    *param_2 = *param_2 - bVar1;
    unaff_RSI = (undefined1 *)
                (CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + '}') & 0xffffffff);
    out(0x8e,(char)unaff_R13);
    in_RAX = unaff_R13;
  }
  LOCK();
  *(char *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(unaff_BL,(char)param_2)) =
       (char)((ulonglong)in_RAX >> 8);
  UNLOCK();
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) << 1;
  *unaff_RDI = *unaff_RSI;
  if (param_1 == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// FUNCTION 14d7ab2e4 FUN_14d7ab2e4 body=63 status=ok
// SIG undefined FUN_14d7ab2e4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab2e4(undefined8 param_1)

{
  int *piVar1;
  longlong in_RAX;
  byte bVar2;
  undefined1 unaff_BL;
  undefined1 unaff_BPL;
  undefined7 unaff_00000029;
  undefined1 *unaff_RDI;
  undefined8 unaff_R13;
  longlong lVar3;
  
  bVar2 = (byte)param_1 | *(byte *)(CONCAT71(unaff_00000029,unaff_BPL) + -0x6b);
  lVar3 = CONCAT71((int7)((ulonglong)param_1 >> 8),bVar2);
  *(char *)(in_RAX >> 0x3f) = *(char *)(in_RAX >> 0x3f) - bVar2;
  out(0x8e,(char)unaff_R13);
  LOCK();
  *(char *)CONCAT62((int6)(in_RAX >> 0x3f),CONCAT11(unaff_BL,(char)(in_RAX >> 0x3f))) =
       (char)((ulonglong)unaff_R13 >> 8);
  UNLOCK();
  piVar1 = (int *)(lVar3 + 0x38);
  *piVar1 = *piVar1 << 1;
  *unaff_RDI = *(undefined1 *)
                (CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + '}') & 0xffffffff);
  if (lVar3 == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// FUNCTION 14d7ab31c FUN_14d7ab31c body=6 status=ok
// SIG undefined FUN_14d7ab31c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab31c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab360 FUN_14d7ab360 body=21 status=ok
// SIG undefined FUN_14d7ab360(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7ab381) overlaps instruction at (ram,0x00014d7ab380)
    */

void FUN_14d7ab360(longlong param_1)

{
  char *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong in_RAX;
  int *unaff_RBX;
  longlong *unaff_RBP;
  undefined8 unaff_RSI;
  uint *unaff_RDI;
  char in_CF;
  
  LOCK();
  uVar3 = *(undefined4 *)((longlong)unaff_RBP + -0x41887a05);
  *(undefined4 *)((longlong)unaff_RBP + -0x41887a05) = (int)unaff_RSI;
  UNLOCK();
  if (!(bool)in_CF) {
    while( true ) {
      DAT_85585b11c1005a5a = (undefined1)in_RAX;
      param_1 = CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                         CONCAT11((char)((ulonglong)param_1 >> 8) + *(char *)(in_RAX + 0x3a) + in_CF
                                  ,(char)param_1));
      *unaff_RBX = *unaff_RBX + 0x3d;
      piVar2 = (int *)((longlong)unaff_RBP + (longlong)unaff_RDI * 8 + -0x260f3c03);
      *piVar2 = *piVar2 << 0x1e;
      uVar5 = (uint)in_RAX ^ 0x38d8c9ab;
      pcVar1 = (char *)((longlong)unaff_RDI + param_1);
      *pcVar1 = *pcVar1 + (char)(uVar5 >> 8);
      in_CF = 0x1f < (byte)((char)uVar5 + 0x96U);
      cVar4 = (char)uVar5 + 'v';
      uVar5 = CONCAT31((int3)(uVar5 >> 8),cVar4);
      in_RAX = (ulonglong)uVar5;
      param_1 = param_1 + -1;
      if (param_1 == 0 || cVar4 != '\0') break;
      *unaff_RDI = uVar5;
      unaff_RBP = (longlong *)*unaff_RBP;
      unaff_RDI = unaff_RDI + 1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)unaff_RDI = *(undefined1 *)CONCAT44((int)((ulonglong)unaff_RSI >> 0x20),uVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab381 FUN_14d7ab381 body=19 status=ok
// SIG undefined FUN_14d7ab381(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab381(longlong param_1)

{
  char *pcVar1;
  char in_AL;
  byte bVar2;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 *unaff_RDI;
  char in_CF;
  
  do {
    *unaff_RDI = CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
    bVar2 = in_AL + -0x6a + in_CF;
    pcVar1 = (char *)((longlong)(unaff_RDI + 1) + param_1);
    *pcVar1 = *pcVar1 + in_AH;
    in_CF = 0x1f < bVar2;
    in_AL = bVar2 - 0x20;
    param_1 = param_1 + -1;
    unaff_RDI = unaff_RDI + 1;
  } while (param_1 != 0 && in_AL == '\0');
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab3a2 FUN_14d7ab3a2 body=14 status=ok
// SIG undefined FUN_14d7ab3a2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab3a2(undefined8 param_1,undefined8 param_2)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  code *pcVar6;
  int in_EAX;
  uint uVar7;
  byte bVar8;
  undefined7 uVar9;
  undefined4 *unaff_RSI;
  uint *unaff_RDI;
  float10 in_ST0;
  byte bVar4;
  byte bVar5;
  
  uVar9 = (undefined7)((ulonglong)param_2 >> 8);
  bVar8 = (char)param_2 + *(char *)(unaff_RSI + -0x1a);
  uVar7 = in_EAX + 0xd3b14902;
  pbVar2 = (byte *)(CONCAT71(uVar9,bVar8) + 0x431db2);
  bVar3 = *pbVar2;
  bVar4 = *pbVar2;
  *pbVar2 = *pbVar2 + bVar8;
  bVar5 = *pbVar2;
  if (!CARRY1(bVar3,bVar8) && *pbVar2 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar1 = (uint *)(CONCAT71(uVar9,bVar8) + 0x686b36f2);
  *puVar1 = ~*puVar1;
  *unaff_RDI = uVar7;
  *unaff_RSI = 0x78bc43;
  if (SCARRY1(bVar4,bVar8) == (char)bVar5 < '\0') {
    pcVar6 = (code *)swi(0x9a);
    (*pcVar6)();
    *(short *)((longlong)unaff_RDI + -0x32) = (short)in_ST0;
    *(undefined1 *)(unaff_RDI + 1) = DAT_00aeb0d8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(ulonglong)uVar7 = *(char *)(ulonglong)uVar7 + (char)uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab3b0 FUN_14d7ab3b0 body=5 status=ok
// SIG undefined FUN_14d7ab3b0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab3b0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  char in_AL;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_CF;
  bool in_ZF;
  char in_SF;
  char in_OF;
  float10 in_ST0;
  
  if (!in_CF && !in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)(param_2 + 0x686b36f2) = ~*(uint *)(param_2 + 0x686b36f2);
  *unaff_RDI = CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *unaff_RSI = 0x78bc43;
  if (in_OF == in_SF) {
    pcVar1 = (code *)swi(0x9a);
    (*pcVar1)();
    *(short *)((longlong)unaff_RDI + -0x32) = (short)in_ST0;
    *(undefined1 *)(unaff_RDI + 1) = DAT_00aeb0d8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab3b8 FUN_14d7ab3b8 body=4 status=ok
// SIG undefined FUN_14d7ab3b8(void)

void FUN_14d7ab3b8(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 in_EAX;
  uint uVar3;
  undefined2 uVar4;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  
  uVar4 = (undefined2)param_2;
  out(uVar4,in_EAX);
  uVar3 = in(uVar4);
  uVar2 = *(uint *)(unaff_RDI + param_2 * 4 + 0x1f3a8811);
  uVar1 = in(uVar4);
  *unaff_RDI = uVar1;
  *(char *)(unaff_RSI + 0x42de5088) =
       *(char *)(unaff_RSI + 0x42de5088) + (char)((ulonglong)param_2 >> 8) +
       (uVar2 < (uVar3 & 0xffffff06));
  return;
}



// FUNCTION 14d7ab3bc FUN_14d7ab3bc body=19 status=ok
// SIG undefined FUN_14d7ab3bc(void)

void FUN_14d7ab3bc(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  
  uVar3 = in((short)param_2);
  uVar2 = *(uint *)(unaff_RDI + param_2 * 4 + 0x1f3a8811);
  uVar1 = in((short)param_2);
  *unaff_RDI = uVar1;
  *(char *)(unaff_RSI + 0x42de5088) =
       *(char *)(unaff_RSI + 0x42de5088) + (char)((ulonglong)param_2 >> 8) +
       (uVar2 < (uVar3 & 0xffffff06));
  return;
}



// FUNCTION 14d7ab3ef FUN_14d7ab3ef body=9 status=ok
// SIG undefined FUN_14d7ab3ef(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab3ef(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab3fc FUN_14d7ab3fc body=2 status=ok
// SIG undefined FUN_14d7ab3fc(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab3fc(char *param_1,int *param_2)

{
  ulonglong *puVar1;
  code *pcVar2;
  int iVar3;
  longlong in_RAX;
  int unaff_EBX;
  undefined4 unaff_EDI;
  longlong unaff_R13;
  
  *param_1 = *param_1 - (char)((ulonglong)param_1 >> 8);
  puVar1 = (ulonglong *)(unaff_R13 * 8 + 0x76ceee70);
  *puVar1 = *puVar1 ^ 0xffffffffaf78d6e5;
  LOCK();
  *(undefined4 *)(in_RAX + 0x43) = unaff_EDI;
  UNLOCK();
  iVar3 = (int)in_RAX + unaff_EBX;
  if (param_1 != &DAT_00000001 && iVar3 == 0) {
    return;
  }
  if (iVar3 != 0 && SCARRY4((int)in_RAX,unaff_EBX) == iVar3 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = unaff_EBX;
  pcVar2 = (code *)swi(1);
  (*pcVar2)();
  return;
}



// FUNCTION 14d7ab42a FUN_14d7ab42a body=13 status=ok
// SIG undefined FUN_14d7ab42a(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7ab3f2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7ab42a(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int in_EAX;
  undefined2 uVar5;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  byte in_CF;
  char in_ZF;
  float10 in_ST0;
  
  if (param_1 + -1 != 0 && in_ZF != '\0') {
    uVar5 = (undefined2)param_2;
    out(uVar5,in_EAX + 0x3a944445 + (uint)in_CF);
    uVar4 = in(uVar5);
    uVar2 = *(uint *)(unaff_RDI + param_2 * 4 + 0x1f3a8811);
    uVar1 = in(uVar5);
    *unaff_RDI = uVar1;
    *(char *)(unaff_RSI + 0x42de5088) =
         *(char *)(unaff_RSI + 0x42de5088) + (char)((ulonglong)param_2 >> 8) +
         (uVar2 < (uVar4 & 0xffffff06));
    return;
  }
  bVar3 = (byte)in_EAX ^ 10;
  _DAT_b5e25da4 = (short)in_ST0;
  out(0x15,bVar3);
  if ('\0' < (char)bVar3) {
    *(int *)(unaff_RSI + -0x7f) = *(int *)(unaff_RSI + -0x7f) - (int)(param_1 + -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab440 FUN_14d7ab440 body=1 status=ok
// SIG undefined FUN_14d7ab440(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7ab3f2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7ab440(longlong param_1,longlong param_2)

{
  char *pcVar1;
  int iVar2;
  float fVar3;
  undefined1 uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  longlong in_RAX;
  undefined2 uVar8;
  longlong unaff_RBX;
  uint *unaff_RSI;
  uint *unaff_RDI;
  float10 in_ST0;
  float10 in_ST6;
  
  fVar3 = *(float *)(in_RAX + -0x20887222);
  iVar2 = *(int *)(param_2 + unaff_RBX);
  uVar5 = *unaff_RSI;
  pcVar1 = (char *)(in_RAX + 0xb);
  *pcVar1 = *pcVar1 + (char)param_1;
  if ((POPCOUNT(*pcVar1) & 1U) == 0) {
    *(char *)(param_1 + 0x1fe05919) = *(char *)(param_1 + 0x1fe05919) + (byte)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)((longlong)unaff_RDI + 0x3f) = *(char *)((longlong)unaff_RDI + 0x3f) + (char)param_1;
  if (param_1 + -1 == 0 || *unaff_RSI != *unaff_RDI) {
    bVar6 = (byte)in_RAX ^ 10;
    _DAT_b5e25da4 =
         (short)(in_ST6 / ((float10)(short)uVar5 / ((float10)iVar2 / (in_ST0 - (float10)fVar3))));
    out(0x15,bVar6);
    if ('\0' < (char)bVar6) {
      *(int *)((longlong)unaff_RSI + -0x7b) =
           *(int *)((longlong)unaff_RSI + -0x7b) - (int)(param_1 + -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar8 = (undefined2)param_2;
  out(uVar8,(int)in_RAX + 0x3a944445 + (uint)(*unaff_RSI < *unaff_RDI));
  uVar7 = in(uVar8);
  uVar5 = *(uint *)((longlong)unaff_RDI + param_2 * 4 + 0x1f3a8815);
  uVar4 = in(uVar8);
  *(undefined1 *)(unaff_RDI + 1) = uVar4;
  *(char *)(unaff_RSI + 0x10b79423) =
       (char)unaff_RSI[0x10b79423] + (char)((ulonglong)param_2 >> 8) +
       (uVar5 < (uVar7 & 0xffffff06));
  return;
}



// FUNCTION 14d7ab444 FUN_14d7ab444 body=29 status=ok
// SIG undefined FUN_14d7ab444(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7ab3f2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7ab444(longlong param_1,longlong param_2)

{
  char *pcVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  longlong in_RAX;
  undefined2 uVar7;
  longlong unaff_RBX;
  uint *puVar8;
  uint *unaff_RDI;
  float10 in_ST0;
  float10 in_ST6;
  
  puVar8 = (uint *)(ulonglong)((int)unaff_RDI - 0x21);
  iVar2 = *(int *)(param_2 + unaff_RBX);
  uVar4 = *puVar8;
  pcVar1 = (char *)(in_RAX + 0xb);
  *pcVar1 = *pcVar1 + (char)param_1;
  if ((POPCOUNT(*pcVar1) & 1U) == 0) {
    *(char *)(param_1 + 0x1fe05919) = *(char *)(param_1 + 0x1fe05919) + (byte)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)((longlong)unaff_RDI + 0x3f) = *(char *)((longlong)unaff_RDI + 0x3f) + (char)param_1;
  if (param_1 + -1 == 0 || *puVar8 != *unaff_RDI) {
    bVar5 = (byte)in_RAX ^ 10;
    _DAT_b5e25da4 = (short)(in_ST6 / ((float10)(short)uVar4 / ((float10)iVar2 / in_ST0)));
    out(0x15,bVar5);
    if ('\0' < (char)bVar5) {
      *(int *)((longlong)puVar8 + -0x7b) = *(int *)((longlong)puVar8 + -0x7b) - (int)(param_1 + -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar7 = (undefined2)param_2;
  out(uVar7,(int)in_RAX + 0x3a944445 + (uint)(*puVar8 < *unaff_RDI));
  uVar6 = in(uVar7);
  uVar4 = *(uint *)((longlong)unaff_RDI + param_2 * 4 + 0x1f3a8815);
  uVar3 = in(uVar7);
  *(undefined1 *)(unaff_RDI + 1) = uVar3;
  *(char *)(puVar8 + 0x10b79423) =
       (char)puVar8[0x10b79423] + (char)((ulonglong)param_2 >> 8) + (uVar4 < (uVar6 & 0xffffff06));
  return;
}



// FUNCTION 14d7ab46f FUN_14d7ab46f body=4 status=ok
// SIG undefined FUN_14d7ab46f(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7ab4f6) overlaps instruction at (ram,0x00014d7ab4f4)
    */

void FUN_14d7ab46f(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  byte *in_RAX;
  longlong lVar4;
  char cVar5;
  char cVar6;
  undefined6 uVar7;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *unaff_RBP;
  longlong unaff_RSI;
  char in_ZF;
  char cVar3;
  
  uVar7 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar6 = (char)((ulonglong)param_2 >> 8);
  cVar5 = (char)param_2;
  lVar4 = param_1 + -1;
  if (lVar4 == 0 || in_ZF == '\0') {
    *(char *)CONCAT62(uVar7,CONCAT11(cVar6,10)) =
         *(char *)CONCAT62(uVar7,CONCAT11(cVar6,10)) + (char)in_RAX;
    if (lVar4 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar1 = (char *)(unaff_RSI + lVar4 * 8);
    *pcVar1 = *pcVar1 + (char)((ulonglong)in_RAX >> 8);
    in(CONCAT11(cVar6,10));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((byte)lVar4 < *(byte *)(param_1 + 0x1600eb77)) {
    cRam000000014fcab5ab = (cRam000000014fcab5ab - cVar5) + -1;
  }
  else {
    in_RAX = (byte *)(ulonglong)((uint)in_RAX & 0xaf151822);
    in_RAX[2] = in_RAX[2] + cVar5;
  }
  cVar5 = ((byte)in_RAX & *in_RAX) + cVar5;
  uVar9 = (ulonglong)
          (uint)((int)&stack0xfffffffffffffff8 +
                CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  cVar3 = (char)((ulonglong)in_RAX >> 8);
  cVar2 = cVar3 + cVar5;
  if (cVar2 == '\0' || SCARRY1(cVar3,cVar5) != cVar2 < '\0') {
    *(ulonglong *)(uVar9 - 8) =
         CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
    puVar8 = (undefined8 *)(uVar9 - 0x10);
    *(undefined8 **)(uVar9 - 0x10) = unaff_RBP;
    cVar5 = '\x1d';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar8 = puVar8 + -1;
      *puVar8 = *unaff_RBP;
      cVar5 = cVar5 + -1;
    } while ('\0' < cVar5);
    *(ulonglong *)(uVar9 - 0x100) = uVar9 - 0x10;
    *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH + cVar6,unaff_BL))) =
         *(byte *)CONCAT44(unaff_0000001c,
                           CONCAT22(unaff_0000001a,CONCAT11(unaff_BH + cVar6,unaff_BL))) &
         (byte)(uVar9 - 0xa5d1) & 0x5e;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab474 FUN_14d7ab474 body=12 status=ok
// SIG undefined FUN_14d7ab474(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab474(longlong param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined8 in_RAX;
  longlong unaff_RSI;
  
  if (param_1 != 0) {
    pcVar1 = (char *)(unaff_RSI + param_1 * 8);
    *pcVar1 = *pcVar1 + (char)((ulonglong)in_RAX >> 8);
    in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab481 FUN_14d7ab481 body=6 status=ok
// SIG undefined FUN_14d7ab481(void)

void FUN_14d7ab481(undefined8 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined4 unaff_EBX;
  undefined1 *unaff_RDI;
  
  uVar1 = in((short)param_2);
  *unaff_RDI = uVar1;
  *param_2 = unaff_EBX;
  pcVar2 = (code *)swi(1);
  (*pcVar2)();
  return;
}



// FUNCTION 14d7ab49b FUN_14d7ab49b body=24 status=ok
// SIG undefined FUN_14d7ab49b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab49b(longlong param_1,longlong param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 in_RAX;
  char cVar3;
  int unaff_EBX;
  ulonglong uVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  undefined8 *unaff_RBP;
  int unaff_EDI;
  uint uVar7;
  byte in_CF;
  undefined1 auStack_a4e9 [42193];
  undefined8 uStack_18;
  char *pcVar8;
  
  cVar3 = (char)((ulonglong)param_2 >> 8);
  uVar7 = (unaff_EDI - unaff_EBX) - (uint)in_CF;
  pcVar8 = (char *)(ulonglong)uVar7;
  uVar2 = (longlong)*(int *)(param_2 + 0x33) * -0x24;
  uVar4 = uVar2 & 0xffffffff;
  if ((longlong)(int)uVar2 == uVar2 && uVar7 != 0) {
    out(0x44,(int)in_RAX);
    puVar6 = (undefined8 *)&stack0xfffffffffffffff0;
    cVar1 = '\x1d';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *unaff_RBP;
      cVar1 = cVar1 + -1;
    } while ('\0' < cVar1);
    pbVar5 = (byte *)CONCAT62((int6)(uVar4 >> 0x10),CONCAT11((char)(uVar4 >> 8) + cVar3,(char)uVar4)
                             );
    *pbVar5 = *pbVar5 & (char)auStack_a4e9 + 0x18U & 0x5e;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar5 = (byte *)(param_2 + param_1 * 2);
  if ((byte)param_1 < *pbVar5) {
    *pcVar8 = *pcVar8 + ((byte)param_1 - *pbVar5);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)pcVar8 =
       (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                     CONCAT11((char)((ulonglong)in_RAX >> 8) + cVar3,(char)in_RAX));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab4b9 FUN_14d7ab4b9 body=13 status=ok
// SIG undefined FUN_14d7ab4b9(void)

void FUN_14d7ab4b9(void)

{
  func_0xe213feb7();
  return;
}



// FUNCTION 14d7ab4db FUN_14d7ab4db body=105 status=ok
// SIG undefined FUN_14d7ab4db(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7ab4f6) overlaps instruction at (ram,0x00014d7ab4f4)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7ab4db(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  int *piVar2;
  char cVar4;
  uint in_EAX;
  byte *pbVar3;
  char cVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *unaff_RBP;
  uint uVar10;
  short *unaff_RSI;
  int iVar11;
  uint uVar12;
  int *unaff_RDI;
  undefined2 in_CS;
  byte in_CF;
  float10 in_ST0;
  char cVar5;
  
  *unaff_RSI = (short)ROUND(in_ST0);
  uVar1 = *param_1;
  puVar8 = (undefined8 *)(ulonglong)uVar1;
  iVar11 = (int)unaff_RDI;
  uVar10 = ((int)unaff_RSI - iVar11) - (uint)in_CF;
  piVar2 = (int *)*puVar8;
  uVar12 = iVar11 - *unaff_RDI;
  pbVar3 = (byte *)(ulonglong)uVar12;
  if (SBORROW4(iVar11,*unaff_RDI)) {
    cVar6 = (char)param_2;
    if ((byte)param_1 < (byte)param_1[0x5803ade]) {
      cRam000000014fcab5ab = (cRam000000014fcab5ab - cVar6) + -1;
    }
    else {
      pbVar3 = (byte *)(ulonglong)(uVar12 & 0xaf151822);
      pbVar3[2] = pbVar3[2] + cVar6;
    }
    *puVar8 = (uint *)(ulonglong)in_EAX;
    cVar6 = ((byte)pbVar3 & *pbVar3) + cVar6;
    uVar9 = (ulonglong)(uVar1 + (int)piVar2);
    cVar5 = (char)((ulonglong)pbVar3 >> 8);
    cVar4 = cVar5 + cVar6;
    if (cVar4 == '\0' || SCARRY1(cVar5,cVar6) != cVar4 < '\0') {
      *(int **)(uVar9 - 8) = piVar2;
      puVar7 = (undefined8 *)(uVar9 - 0x10);
      *(undefined8 **)(uVar9 - 0x10) = unaff_RBP;
      cVar6 = '\x1d';
      do {
        unaff_RBP = unaff_RBP + -1;
        puVar7 = puVar7 + -1;
        *puVar7 = *unaff_RBP;
        cVar6 = cVar6 + -1;
      } while ('\0' < cVar6);
      *(ulonglong *)(uVar9 - 0x100) = uVar9 - 0x10;
      pbVar3 = (byte *)CONCAT62((int6)((ulonglong)piVar2 >> 0x10),
                                CONCAT11((char)((ulonglong)piVar2 >> 8) +
                                         (char)((ulonglong)param_2 >> 8),(char)piVar2));
      *pbVar3 = *pbVar3 & (byte)(uVar9 - 0xa5d1) & 0x5e;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar10 = *(uint *)(ulonglong)(uVar10 >> 1 | (uint)((uVar10 & 1) != 0) << 0x1f);
  uVar1 = *(uint *)(ulonglong)in_EAX;
  if ((int)uVar1 <= (int)uVar10) {
    if ((int)(uVar1 - uVar10) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_1 == (uint *)0x0) {
      *(undefined2 *)((longlong)puVar8 + 4) = in_CS;
      *(undefined4 *)puVar8 = 0x4d7ab5a6;
      (*(code *)&DAT_ffffffffffffffef)();
    }
    else {
      out((short)param_2,uVar12);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *piVar2 = *piVar2 + uVar12 + (uint)(uVar1 < uVar10);
  *pbVar3 = *pbVar3 + 1;
  _DAT_5884f080dc419cbb = uVar12;
  *(int *)((longlong)unaff_RBP + 0x26) = *(int *)((longlong)unaff_RBP + 0x26) >> 1;
  *pbVar3 = *pbVar3 + (char)uVar12;
  if (param_1 != (uint *)&DAT_00000001 && *pbVar3 != 0) {
    *(uint *)puVar8[1] =
         CONCAT22((short)(uVar12 >> 0x10),CONCAT11((char)(uVar12 >> 8) + (char)piVar2,(char)uVar12))
    ;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab531 FUN_14d7ab531 body=5 status=ok
// SIG undefined FUN_14d7ab531(void)

void FUN_14d7ab531(void)

{
  return;
}



// FUNCTION 14d7ab536 FUN_14d7ab536 body=16 status=ok
// SIG undefined FUN_14d7ab536(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7ab536(undefined8 param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + 0x281718);
  _DAT_26139ad6000e97dc = in_EAX;
  *pcVar1 = *pcVar1 + (char)in_EAX;
  out(param_2,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab56f FUN_14d7ab56f body=4 status=ok
// SIG undefined FUN_14d7ab56f(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7ab5a3) overlaps instruction at (ram,0x00014d7ab5a2)
    */

void FUN_14d7ab56f(longlong param_1,undefined2 param_2)

{
  char *pcVar1;
  char cVar2;
  undefined4 in_EAX;
  char cVar5;
  byte *pbVar4;
  undefined8 unaff_RBX;
  undefined8 *puVar6;
  undefined8 *unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_CF;
  bool in_ZF;
  undefined1 auStack_a4e9 [42193];
  undefined8 uStack_18;
  char cVar3;
  
  if (in_ZF) {
    *unaff_RDI = *unaff_RSI;
    uRam900ebadc00b6ef35 = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar5 = (char)((ulonglong)unaff_RBX >> 8);
  if (!in_CF) {
    pcVar1 = (char *)(longlong)((int)param_1 + 0x8e96cd);
    *pcVar1 = *pcVar1 + cVar5;
    if (-1 < *pcVar1) {
      if (param_1 == 0) {
        (*(code *)&DAT_ffffffffffffffef)();
      }
      else {
        out(param_2,in_EAX);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar3 = (char)((uint)in_EAX >> 8);
  cVar2 = cVar3 + (char)in_EAX;
  if (cVar2 != '\0' && SCARRY1(cVar3,(char)in_EAX) == cVar2 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar6 = (undefined8 *)&stack0xfffffffffffffff0;
  cVar2 = '\x1d';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar6 = puVar6 + -1;
    *puVar6 = *unaff_RBP;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
  pbVar4 = (byte *)CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),
                            CONCAT11(cVar5 + (char)((ushort)param_2 >> 8),(char)unaff_RBX));
  *pbVar4 = *pbVar4 & (char)auStack_a4e9 + 0x18U & 0x5e;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab573 FUN_14d7ab573 body=7 status=ok
// SIG undefined FUN_14d7ab573(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab573(void)

{
  undefined4 in_EAX;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab5b6 FUN_14d7ab5b6 body=3 status=ok
// SIG undefined FUN_14d7ab5b6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab5b6(undefined8 param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = in_EAX;
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab5bf FUN_14d7ab5bf body=3 status=ok
// SIG undefined FUN_14d7ab5bf(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab5bf(byte param_1)

{
  longlong unaff_RSI;
  char *unaff_RDI;
  byte in_CF;
  byte in_ZF;
  float10 in_ST0;
  float10 in_ST5;
  
  if (!(bool)(in_CF | in_ZF)) {
    in_ST0 = in_ST5;
  }
  *(int *)(unaff_RSI + -0x2c2af5f6) = (int)in_ST0;
  *unaff_RDI = *unaff_RDI >> (param_1 & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab5c4 FUN_14d7ab5c4 body=14 status=ok
// SIG undefined FUN_14d7ab5c4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab5c4(byte param_1)

{
  longlong unaff_RSI;
  char *unaff_RDI;
  float10 in_ST0;
  
  *(int *)(unaff_RSI + -0x2c2af5f6) = (int)in_ST0;
  *unaff_RDI = *unaff_RDI >> (param_1 & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab5d9 FUN_14d7ab5d9 body=8 status=ok
// SIG undefined FUN_14d7ab5d9(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7ab5bf) */

void FUN_14d7ab5d9(longlong param_1,undefined8 param_2,byte param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  byte *in_RAX;
  undefined8 *puVar3;
  undefined2 uVar4;
  longlong unaff_RSI;
  char *unaff_RDI;
  bool in_CF;
  bool in_ZF;
  float10 in_ST0;
  longlong lVar5;
  
  puVar3 = (undefined8 *)(param_1 + -1);
  if (puVar3 != (undefined8 *)0x0 && in_ZF != false) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_CF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_CF && !in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  in_RAX[-0x7edeae32] = in_RAX[-0x7edeae32] + (char)((ulonglong)param_2 >> 8);
  if (CARRY1(param_3,*in_RAX)) {
    *(int *)(unaff_RSI + -0x2c2af5f6) = (int)in_ST0;
    *unaff_RDI = *unaff_RDI >> ((byte)puVar3 & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = CONCAT11(in_RAX[-0x10],(char)param_2);
  lVar5 = CONCAT62((int6)((ulonglong)param_2 >> 0x10),uVar4);
  uVar1 = in(uVar4);
  *(undefined4 *)(unaff_RDI + 1) = uVar1;
  (*(code *)*puVar3)();
  uVar2 = in(0x42);
  out((short)CONCAT71((int7)((ulonglong)lVar5 >> 8),(char)lVar5 - *(char *)(lVar5 + 0x14)),uVar2);
  return;
}



// FUNCTION 14d7ab5e6 FUN_14d7ab5e6 body=12 status=ok
// SIG undefined FUN_14d7ab5e6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab5e6(longlong param_1)

{
  uint in_EAX;
  longlong unaff_RSI;
  
  *(uint *)(param_1 + 0x7200024c) = *(uint *)(param_1 + 0x7200024c) & in_EAX;
  *(uint *)(unaff_RSI + 0x708a003c) = *(uint *)(unaff_RSI + 0x708a003c) >> 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab60e FUN_14d7ab60e body=14 status=ok
// SIG undefined FUN_14d7ab60e(void)

void FUN_14d7ab60e(void)

{
  return;
}



// FUNCTION 14d7ab626 FUN_14d7ab626 body=3 status=ok
// SIG undefined FUN_14d7ab626(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab626(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab62a FUN_14d7ab62a body=26 status=ok
// SIG undefined FUN_14d7ab62a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab62a(byte param_1)

{
  uint uVar1;
  undefined4 in_EAX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char unaff_R14B;
  longlong unaff_R15;
  byte in_CF;
  bool in_ZF;
  
  if (!in_ZF) {
                    /* WARNING: Read-only address (ram,0x0001447c0d32) is written */
    uRam00000001447c0d32 = in_CF | 0x91fffff6;
    *(char *)(unaff_R15 + -0x5a26e599) = *(char *)(unaff_R15 + -0x5a26e599) + unaff_R14B;
    *(char *)(unaff_RSI + 0x1b) = *(char *)(unaff_RSI + 0x1b) + ((byte)((uint)in_EAX >> 8) ^ 8);
    uVar1 = *(uint *)(unaff_RBP + -0xaf45af0);
    *(uint *)(unaff_RBP + -0xaf45af0) = uVar1 >> (param_1 & 0x1f) | uVar1 << 0x21 - (param_1 & 0x1f)
    ;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRam00000001447c0d32 = 0x48fffffb;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab64a FUN_14d7ab64a body=7 status=ok
// SIG undefined FUN_14d7ab64a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab64a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab65f FUN_14d7ab65f body=11 status=ok
// SIG undefined FUN_14d7ab65f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab65f(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab67d FUN_14d7ab67d body=8 status=ok
// SIG undefined FUN_14d7ab67d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab67d(void)

{
  uint unaff_ESI;
  bool bVar1;
  
  uRam007adcdb98cbd1d1 = in(0x7f);
  bVar1 = CARRY4(uRam000000006fd3f4b8,unaff_ESI);
  uRam000000006fd3f4b8 = uRam000000006fd3f4b8 + unaff_ESI;
  if (bVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab68e FUN_14d7ab68e body=4 status=ok
// SIG undefined FUN_14d7ab68e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab68e(uint *param_1)

{
  uint uVar1;
  uint unaff_ESI;
  
  uVar1 = *param_1;
  *param_1 = *param_1 + unaff_ESI;
  if (CARRY4(uVar1,unaff_ESI)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab696 FUN_14d7ab696 body=5 status=ok
// SIG undefined FUN_14d7ab696(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab696(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab6ac FUN_14d7ab6ac body=4 status=ok
// SIG undefined FUN_14d7ab6ac(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab6ac(ulonglong param_1,char param_2)

{
  byte bVar3;
  uint in_EAX;
  uint uVar1;
  char *pcVar2;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong unaff_RBP;
  byte *unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_retaddr;
  
  bVar3 = (byte)(in_EAX >> 8);
  *unaff_RSI = *unaff_RSI ^ bVar3;
  puVar4 = (ulonglong *)(ulonglong)in_EAX;
  pcVar2 = (char *)((param_1 & 0xffffffff) + 0xb1567e);
  *pcVar2 = *pcVar2 + param_2;
  *(byte *)(unaff_RDI + 8) = *unaff_RSI;
  uVar5 = (longlong)*(int *)((longlong)puVar4 + -0x5dfce242) * -0x57 & 0xffffffff;
  *(char *)(uVar5 + 7) = *(char *)(uVar5 + 7) + (char)in_EAX;
  *(char *)((longlong)puVar4 + -0x666ce643) = *(char *)((longlong)puVar4 + -0x666ce643) + bVar3;
  uVar1 = *(uint *)(unaff_RDI + 0x1c);
  *(char *)(unaff_RBP + 0x70) = (char)(uVar1 >> 8);
  *(undefined4 *)(unaff_RDI + 9) = *(undefined4 *)(unaff_RSI + 1);
  uVar1 = uVar1 & 0xb404daf7;
  *(uint *)(unaff_retaddr + -0x174b13bd) =
       *(uint *)(unaff_retaddr + -0x174b13bd) | (uint)unaff_retaddr;
  out((short)uVar5,uVar1);
  *(char *)(unaff_retaddr + -0x4efa68cc) =
       *(char *)(unaff_retaddr + -0x4efa68cc) + (char)((ulonglong)unaff_retaddr >> 8);
  out(unaff_RSI[5],(short)uVar5);
  bVar3 = (byte)uVar1 & 0x3f;
  *puVar4 = *puVar4 << bVar3 | *puVar4 >> 0x40 - bVar3;
  pcVar2 = (char *)((ulonglong)puVar4 ^ 0x7e);
  uRam2630d100951a5d9d = SUB84(pcVar2,0);
  *pcVar2 = *pcVar2 + (char)(uVar5 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab6ba FUN_14d7ab6ba body=3 status=ok
// SIG undefined FUN_14d7ab6ba(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab6ba(ulonglong param_1)

{
  byte bVar1;
  uint uVar2;
  ulonglong *puVar3;
  char *pcVar4;
  ulonglong uVar5;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  longlong unaff_retaddr;
  
  *unaff_RDI = *unaff_RSI;
  uVar5 = (longlong)*(int *)(param_1 - 0x5dfce242) * -0x57 & 0xffffffff;
  *(char *)(uVar5 + 7) = *(char *)(uVar5 + 7) + (char)param_1;
  *(char *)(param_1 - 0x666ce643) = *(char *)(param_1 - 0x666ce643) + (char)(param_1 >> 8);
  uVar2 = *(uint *)(unaff_RDI + 0x14);
  *(char *)(unaff_RBP + 0x70) = (char)(uVar2 >> 8);
  *(undefined4 *)(unaff_RDI + 1) = *(undefined4 *)(unaff_RSI + 1);
  uVar2 = uVar2 & 0xb404daf7;
  *(uint *)(unaff_retaddr + -0x174b13bd) =
       *(uint *)(unaff_retaddr + -0x174b13bd) | (uint)unaff_retaddr;
  out((short)uVar5,uVar2);
  *(char *)(unaff_retaddr + -0x4efa68cc) =
       *(char *)(unaff_retaddr + -0x4efa68cc) + (char)((ulonglong)unaff_retaddr >> 8);
  out(unaff_RSI[5],(short)uVar5);
  puVar3 = (ulonglong *)(param_1 & 0xffffffff);
  bVar1 = (byte)uVar2 & 0x3f;
  *puVar3 = *puVar3 << bVar1 | *puVar3 >> 0x40 - bVar1;
  pcVar4 = (char *)((ulonglong)puVar3 ^ 0x7e);
  uRam2630d100951a5d9d = SUB84(pcVar4,0);
  *pcVar4 = *pcVar4 + (char)(uVar5 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab6c3 FUN_14d7ab6c3 body=6 status=ok
// SIG undefined FUN_14d7ab6c3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab6c3(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab6da FUN_14d7ab6da body=22 status=ok
// SIG undefined FUN_14d7ab6da(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab6da(ulonglong param_1,undefined2 param_2)

{
  uint *puVar1;
  byte bVar2;
  uint in_EAX;
  ulonglong *puVar3;
  char *pcVar4;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *(char *)(unaff_RBP + 0x70) = (char)(in_EAX >> 8);
  *unaff_RDI = *unaff_RSI;
  puVar1 = (uint *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                   -0x174b13bd);
  *puVar1 = *puVar1 | CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  out(param_2,in_EAX & 0xb404daf7);
  pcVar4 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                   -0x4efa68cc);
  *pcVar4 = *pcVar4 + unaff_BH;
  out(*(undefined1 *)(unaff_RSI + 1),param_2);
  puVar3 = (ulonglong *)(param_1 & 0xffffffff);
  bVar2 = (byte)(in_EAX & 0xb404daf7) & 0x3f;
  *puVar3 = *puVar3 << bVar2 | *puVar3 >> 0x40 - bVar2;
  pcVar4 = (char *)((ulonglong)puVar3 ^ 0x7e);
  uRam2630d100951a5d9d = SUB84(pcVar4,0);
  *pcVar4 = *pcVar4 + (char)((ushort)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab721 FUN_14d7ab721 body=6 status=ok
// SIG undefined FUN_14d7ab721(void)

void FUN_14d7ab721(char param_1)

{
  char *pcVar1;
  code *pcVar2;
  uint in_EAX;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  
  pcVar1 = (char *)((ulonglong)
                    (in_EAX & *(uint *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
                                       0x20a3f1d)) + 0x5b);
  *pcVar1 = *pcVar1 + param_1;
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



// FUNCTION 14d7ab735 FUN_14d7ab735 body=10 status=ok
// SIG undefined FUN_14d7ab735(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab735(longlong param_1)

{
  char in_AL;
  int unaff_ESI;
  byte in_CF;
  
  *(int *)(param_1 + -0x7c) = (*(int *)(param_1 + -0x7c) - unaff_ESI) - (uint)in_CF;
  *(char *)(param_1 + 0xdb4f717) = *(char *)(param_1 + 0xdb4f717) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab751 FUN_14d7ab751 body=6 status=ok
// SIG undefined FUN_14d7ab751(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7ab782) */

void FUN_14d7ab751(longlong param_1,undefined8 param_2)

{
  int in_EAX;
  byte bVar1;
  char *unaff_RSI;
  
  bVar1 = (byte)((ulonglong)param_2 >> 8) & (byte)in_EAX;
  if ((char)bVar1 < '\0') {
    *unaff_RSI = *unaff_RSI + bVar1;
    *(char *)(ulonglong)(in_EAX + 0x4906aa37U) = (char)(in_EAX + 0x4906aa37U);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(param_1 + 0x27) = *(int *)(param_1 + 0x27) - (int)&stack0x00000000;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab755 FUN_14d7ab755 body=16 status=ok
// SIG undefined FUN_14d7ab755(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab755(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  char *in_RAX;
  char *unaff_RSI;
  char in_SF;
  char in_OF;
  
  if (in_OF != in_SF) {
    uVar1 = (int)in_RAX + 0x4906aa37;
    *unaff_RSI = *unaff_RSI + (char)((ulonglong)param_2 >> 8);
    *(char *)(ulonglong)uVar1 = (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = *in_RAX + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab76c FUN_14d7ab76c body=4 status=ok
// SIG undefined FUN_14d7ab76c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab76c(longlong param_1)

{
  byte in_CF;
  
  *(int *)(param_1 + 0x27) = (*(int *)(param_1 + 0x27) - (int)&stack0x00000000) - (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab779 FUN_14d7ab779 body=1 status=ok
// SIG undefined FUN_14d7ab779(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab779(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab789 FUN_14d7ab789 body=3 status=ok
// SIG undefined FUN_14d7ab789(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab789(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  
  uVar1 = in(param_2);
  out(param_2,uVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab78e FUN_14d7ab78e body=3 status=ok
// SIG undefined FUN_14d7ab78e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7ab797) overlaps instruction at (ram,0x00014d7ab796)
    */

void FUN_14d7ab78e(uint *param_1,longlong param_2)

{
  char *pcVar1;
  uint *puVar2;
  byte bVar3;
  undefined4 *puVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 uVar7;
  uint in_EAX;
  uint uVar8;
  byte *pbVar9;
  byte bVar10;
  undefined2 uVar11;
  char cVar12;
  longlong unaff_RBX;
  ulonglong *puVar14;
  undefined4 *unaff_RSI;
  uint unaff_EDI;
  bool bVar15;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  bool bVar16;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  float10 in_ST0;
  ulonglong uStack_8;
  longlong lVar13;
  
  *(short *)((longlong)unaff_RSI + -0x1a) = (short)ROUND(in_ST0);
  uVar8 = in_EAX | 0x52d79000;
  pbVar9 = (byte *)(ulonglong)uVar8;
  bVar10 = (byte)param_1 & 0x1f;
  uVar5 = *param_1;
  *param_1 = *param_1 << bVar10;
  bVar16 = ((ulonglong)param_1 & 0x1f) != 0 && (int)(uVar5 << bVar10 - 1) < 0;
  bVar15 = ((ulonglong)param_1 & 0x1f) != 0;
  puVar14 = &uStack_8;
  uStack_8 = (ulonglong)(in_NT & 1) * 0x4000 |
             (ulonglong)(bVar10 == 1 && bVar16 != (int)*param_1 < 0) * 0x800 |
             (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
             (ulonglong)(!bVar15 && (int)uVar8 < 0 || bVar15 && (int)*param_1 < 0) * 0x80 |
             (ulonglong)(!bVar15 && uVar8 == 0 || bVar15 && *param_1 == 0) * 0x40 |
             (ulonglong)(in_AF & 1) * 0x10 |
             (ulonglong)
             (!bVar15 && (POPCOUNT(in_EAX & 0xff) & 1U) == 0 ||
             bVar15 && (POPCOUNT(*param_1 & 0xff) & 1U) == 0) * 4 | (ulonglong)bVar16 |
             (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
             (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  if (param_1 != (uint *)0x0) {
    while( true ) {
      lVar6 = *puVar14;
      uVar11 = (undefined2)param_2;
      out(*unaff_RSI,uVar11);
      cVar12 = (char)unaff_RBX >> ((byte)param_1 & 0x1f);
      lVar13 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar12);
      bVar10 = (byte)param_2;
      bVar15 = CARRY1(DAT_12d212dd6,bVar10);
      bVar16 = SCARRY1(DAT_12d212dd6,bVar10);
      DAT_12d212dd6 = DAT_12d212dd6 + bVar10;
      bVar10 = (byte)((ulonglong)pbVar9 >> 8);
      if (bVar16 == (char)DAT_12d212dd6 < '\0') break;
      puVar4 = (undefined4 *)((longlong)unaff_RSI + 5);
      out(*(undefined1 *)(unaff_RSI + 1),uVar11);
      out(uVar11,(char)pbVar9);
      *(ulonglong *)(lVar6 + -8) =
           (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)bVar16 * 0x800 |
           (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
           (ulonglong)((char)DAT_12d212dd6 < '\0') * 0x80 | (ulonglong)(DAT_12d212dd6 == 0) * 0x40 |
           (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(DAT_12d212dd6) & 1U) == 0) * 4 |
           (ulonglong)bVar15 | (ulonglong)(in_ID & 1) * 0x200000 |
           (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
           (ulonglong)(in_AC & 1) * 0x40000;
      *(char *)(unaff_RSI + -0x12) = *(char *)(unaff_RSI + -0x12) + cVar12;
      puVar2 = (uint *)((longlong)pbVar9 * 2 + 0x29);
      *puVar2 = *puVar2 ^ unaff_EDI;
      *(longlong *)(lVar6 + -0x10) = lVar6 + -8;
      puVar14 = (ulonglong *)(lVar6 + -0x18);
      *(undefined4 **)(lVar6 + -0x18) = puVar4;
      *(longlong *)(lVar6 + -0x20) = param_2;
      pbVar9 = (byte *)CONCAT71((int7)((ulonglong)pbVar9 >> 8),uRam3ae5cb51004769ad);
      bVar3 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar10;
      param_1 = *(uint **)(lVar6 + -0x20);
      if (!CARRY1(bVar3,bVar10)) {
        pcVar1 = (char *)((ulonglong)((int)puVar4 + 0x188e1b0a) + param_2 * 2);
        *pcVar1 = *pcVar1 + (char)((ulonglong)unaff_RBX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(uint *)(lVar13 + -0x2d90a3d7) = *(uint *)(lVar13 + -0x2d90a3d7) ^ (uint)lVar13;
      in_IF = 1;
      unaff_RBX = lVar13;
      unaff_RSI = puVar4;
    }
    uVar7 = in(uVar11);
    pcVar1 = (char *)(CONCAT71(0x48ea6d,uVar7) + -0x1ab51b20);
    *pcVar1 = *pcVar1 + (byte)param_1 + bVar10;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab793 FUN_14d7ab793 body=22 status=ok
// SIG undefined FUN_14d7ab793(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7ab797) overlaps instruction at (ram,0x00014d7ab796)
    */

void FUN_14d7ab793(uint *param_1,longlong param_2)

{
  char *pcVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 uVar6;
  ulonglong in_RAX;
  byte *pbVar7;
  byte bVar8;
  undefined2 uVar9;
  char cVar10;
  longlong unaff_RBX;
  ulonglong *puVar12;
  undefined4 *unaff_RSI;
  uint unaff_EDI;
  byte in_CF;
  byte bVar13;
  bool bVar14;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  bool bVar15;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong local_10;
  longlong lStack_8;
  longlong lVar11;
  
  pbVar7 = (byte *)CONCAT71((int7)(in_RAX >> 8),*(undefined1 *)(unaff_RBX + (in_RAX & 0xff)));
  lStack_8 = param_2;
  bVar8 = (byte)param_1 & 0x1f;
  uVar4 = *param_1;
  *param_1 = *param_1 << bVar8;
  bVar14 = ((ulonglong)param_1 & 0x1f) != 0;
  bVar13 = !bVar14 & in_CF | (bVar14 && (int)(uVar4 << bVar8 - 1) < 0);
  bVar14 = ((ulonglong)param_1 & 0x1f) != 0;
  puVar12 = &local_10;
  local_10 = (ulonglong)(in_NT & 1) * 0x4000 |
             (ulonglong)(byte)(bVar8 != 1 & in_OF | bVar8 == 1 & (bVar13 ^ (int)*param_1 < 0)) *
             0x800 | (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
             (ulonglong)(byte)(!bVar14 & in_SF | (bVar14 && (int)*param_1 < 0)) * 0x80 |
             (ulonglong)(byte)(!bVar14 & in_ZF | (bVar14 && *param_1 == 0)) * 0x40 |
             (ulonglong)(in_AF & 1) * 0x10 |
             (ulonglong)(byte)(!bVar14 & in_PF | (bVar14 && (POPCOUNT(*param_1 & 0xff) & 1U) == 0))
             * 4 | (ulonglong)bVar13 | (ulonglong)(in_ID & 1) * 0x200000 |
             (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
             (ulonglong)(in_AC & 1) * 0x40000;
  if (param_1 != (uint *)0x0) {
    while( true ) {
      lVar5 = *puVar12;
      uVar9 = (undefined2)param_2;
      out(*unaff_RSI,uVar9);
      cVar10 = (char)unaff_RBX >> ((byte)param_1 & 0x1f);
      lVar11 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar10);
      bVar8 = (byte)param_2;
      bVar14 = CARRY1(DAT_12d212dd6,bVar8);
      bVar15 = SCARRY1(DAT_12d212dd6,bVar8);
      DAT_12d212dd6 = DAT_12d212dd6 + bVar8;
      bVar8 = (byte)((ulonglong)pbVar7 >> 8);
      if (bVar15 == (char)DAT_12d212dd6 < '\0') break;
      puVar3 = (undefined4 *)((longlong)unaff_RSI + 5);
      out(*(undefined1 *)(unaff_RSI + 1),uVar9);
      out(uVar9,(char)pbVar7);
      *(ulonglong *)(lVar5 + -8) =
           (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)bVar15 * 0x800 |
           (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
           (ulonglong)((char)DAT_12d212dd6 < '\0') * 0x80 | (ulonglong)(DAT_12d212dd6 == 0) * 0x40 |
           (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(DAT_12d212dd6) & 1U) == 0) * 4 |
           (ulonglong)bVar14 | (ulonglong)(in_ID & 1) * 0x200000 |
           (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
           (ulonglong)(in_AC & 1) * 0x40000;
      *(char *)(unaff_RSI + -0x12) = *(char *)(unaff_RSI + -0x12) + cVar10;
      puVar2 = (uint *)((longlong)pbVar7 * 2 + 0x29);
      *puVar2 = *puVar2 ^ unaff_EDI;
      *(longlong *)(lVar5 + -0x10) = lVar5 + -8;
      puVar12 = (ulonglong *)(lVar5 + -0x18);
      *(undefined4 **)(lVar5 + -0x18) = puVar3;
      *(longlong *)(lVar5 + -0x20) = param_2;
      pbVar7 = (byte *)CONCAT71((int7)((ulonglong)pbVar7 >> 8),uRam3ae5cb51004769ad);
      bVar13 = *pbVar7;
      *pbVar7 = *pbVar7 + bVar8;
      param_1 = *(uint **)(lVar5 + -0x20);
      if (!CARRY1(bVar13,bVar8)) {
        pcVar1 = (char *)((ulonglong)((int)puVar3 + 0x188e1b0a) + param_2 * 2);
        *pcVar1 = *pcVar1 + (char)((ulonglong)unaff_RBX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(uint *)(lVar11 + -0x2d90a3d7) = *(uint *)(lVar11 + -0x2d90a3d7) ^ (uint)lVar11;
      in_IF = 1;
      unaff_RBX = lVar11;
      unaff_RSI = puVar3;
    }
    uVar6 = in(uVar9);
    pcVar1 = (char *)(CONCAT71(0x48ea6d,uVar6) + -0x1ab51b20);
    *pcVar1 = *pcVar1 + (byte)param_1 + bVar8;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab7a9 FUN_14d7ab7a9 body=42 status=ok
// SIG undefined FUN_14d7ab7a9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab7a9(longlong param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined8 in_RAX;
  longlong unaff_RBP;
  char in_ZF;
  
  param_1 = param_1 + -1;
  if (param_1 == 0 || in_ZF == '\0') {
    LOCK();
    *(char *)(unaff_RBP + -0x16) = (char)((ulonglong)param_1 >> 8);
    UNLOCK();
    uVar2 = in(param_2);
    pcVar1 = (char *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar2) + -0x1ab51b20);
    *pcVar1 = *pcVar1 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab7ea FUN_14d7ab7ea body=3 status=ok
// SIG undefined FUN_14d7ab7ea(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7ab7ec) overlaps instruction at (ram,0x00014d7ab7eb)
    */

void FUN_14d7ab7ea(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  byte bVar6;
  byte *in_RAX;
  byte *pbVar5;
  byte bVar7;
  undefined2 uVar8;
  undefined8 unaff_RBX;
  longlong lVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  uint unaff_EDI;
  bool bVar12;
  byte in_AF;
  byte in_TF;
  bool bVar13;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined1 *unaff_retaddr;
  undefined1 auStackX_8 [32];
  
  puVar10 = (ulonglong *)auStackX_8;
  lVar9 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),0x31);
  while( true ) {
    *(int *)(unaff_retaddr + param_2 * 2 + 0x52) =
         *(int *)(unaff_retaddr + param_2 * 2 + 0x52) - (int)param_2;
    uVar4 = uRam3ae5cb51004769ad;
    pbVar5 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),uRam3ae5cb51004769ad);
    bVar7 = *pbVar5;
    bVar6 = (byte)((ulonglong)in_RAX >> 8);
    *pbVar5 = *pbVar5 + bVar6;
    uVar3 = *puVar10;
    if (!CARRY1(bVar7,bVar6)) {
      pcVar1 = (char *)((ulonglong)((int)unaff_retaddr + 0x188e1b0a) + param_2 * 2);
      *pcVar1 = *pcVar1 + (char)((ulonglong)unaff_RBX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar2 = (uint *)(lVar9 + -0x2d90a3d7);
    *puVar2 = *puVar2 ^ (uint)lVar9;
    bVar7 = (byte)param_2;
    bVar12 = CARRY1(DAT_12d212dd6,bVar7);
    bVar13 = SCARRY1(DAT_12d212dd6,bVar7);
    DAT_12d212dd6 = DAT_12d212dd6 + bVar7;
    uVar8 = (undefined2)param_2;
    if (bVar13 == (char)DAT_12d212dd6 < '\0') break;
    out(*unaff_retaddr,uVar8);
    out(uVar8,uVar4);
    *puVar10 = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)bVar13 * 0x800 | 0x200 |
               (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((char)DAT_12d212dd6 < '\0') * 0x80 |
               (ulonglong)(DAT_12d212dd6 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
               (ulonglong)((POPCOUNT(DAT_12d212dd6) & 1U) == 0) * 4 | (ulonglong)bVar12 |
               (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
               (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
    unaff_retaddr[-0x4c] = unaff_retaddr[-0x4c] + '1';
    puVar2 = (uint *)((longlong)pbVar5 * 2 + 0x29);
    *puVar2 = *puVar2 ^ unaff_EDI;
    puVar10[-1] = (ulonglong)puVar10;
    puVar10[-2] = (ulonglong)(unaff_retaddr + 1);
    puVar11 = puVar10 + -3;
    puVar10 = puVar10 + -3;
    *puVar11 = param_2;
    in_RAX = pbVar5;
    unaff_retaddr = unaff_retaddr + 1;
  }
  uVar4 = in(uVar8);
  pcVar1 = (char *)(CONCAT71(0x48ea6d,uVar4) + -0x1ab51b20);
  *pcVar1 = *pcVar1 + (char)uVar3 + bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab7ef FUN_14d7ab7ef body=4 status=ok
// SIG undefined FUN_14d7ab7ef(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7ab7f0) overlaps instruction at (ram,0x00014d7ab7ef)
    */

void FUN_14d7ab7ef(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  byte bVar6;
  byte *in_RAX;
  byte *pbVar5;
  byte bVar7;
  undefined2 uVar8;
  longlong unaff_RBX;
  ulonglong *puVar9;
  undefined1 *unaff_RSI;
  uint unaff_EDI;
  bool bVar10;
  byte in_AF;
  byte in_TF;
  bool bVar11;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  
  while( true ) {
    *(int *)(unaff_RSI + param_2 * 2 + 0x52) =
         *(int *)(unaff_RSI + param_2 * 2 + 0x52) - (int)param_2;
    uVar4 = uRam3ae5cb51004769ad;
    pbVar5 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),uRam3ae5cb51004769ad);
    bVar7 = *pbVar5;
    bVar6 = (byte)((ulonglong)in_RAX >> 8);
    *pbVar5 = *pbVar5 + bVar6;
    uVar3 = *(undefined8 *)register0x00000020;
    if (!CARRY1(bVar7,bVar6)) {
      pcVar1 = (char *)((ulonglong)((int)unaff_RSI + 0x188e1b0a) + param_2 * 2);
      *pcVar1 = *pcVar1 + (char)((ulonglong)unaff_RBX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(uint *)(unaff_RBX + -0x2d90a3d7) = *(uint *)(unaff_RBX + -0x2d90a3d7) ^ (uint)unaff_RBX;
    bVar7 = (byte)param_2;
    bVar10 = CARRY1(DAT_12d212dd6,bVar7);
    bVar11 = SCARRY1(DAT_12d212dd6,bVar7);
    DAT_12d212dd6 = DAT_12d212dd6 + bVar7;
    uVar8 = (undefined2)param_2;
    if (bVar11 == (char)DAT_12d212dd6 < '\0') break;
    out(*unaff_RSI,uVar8);
    out(uVar8,uVar4);
    *(ulonglong *)register0x00000020 =
         (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)bVar11 * 0x800 | 0x200 |
         (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((char)DAT_12d212dd6 < '\0') * 0x80 |
         (ulonglong)(DAT_12d212dd6 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
         (ulonglong)((POPCOUNT(DAT_12d212dd6) & 1U) == 0) * 4 | (ulonglong)bVar10 |
         (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
         (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
    unaff_RSI[-0x4c] = unaff_RSI[-0x4c] + (char)unaff_RBX;
    puVar2 = (uint *)((longlong)pbVar5 * 2 + 0x29);
    *puVar2 = *puVar2 ^ unaff_EDI;
    *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
    *(undefined1 **)((longlong)register0x00000020 + -0x10) = unaff_RSI + 1;
    puVar9 = (ulonglong *)((longlong)register0x00000020 + -0x18);
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -0x18);
    *puVar9 = param_2;
    in_RAX = pbVar5;
    unaff_RSI = unaff_RSI + 1;
  }
  uVar4 = in(uVar8);
  pcVar1 = (char *)(CONCAT71(0x48ea6d,uVar4) + -0x1ab51b20);
  *pcVar1 = *pcVar1 + (char)uVar3 + bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab7f8 FUN_14d7ab7f8 body=2 status=ok
// SIG undefined FUN_14d7ab7f8(void)

void FUN_14d7ab7f8(void)

{
  return;
}



// FUNCTION 14d7ab801 FUN_14d7ab801 body=18 status=ok
// SIG undefined FUN_14d7ab801(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab801(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char unaff_BH;
  int unaff_ESI;
  
  pcVar1 = (char *)((ulonglong)(unaff_ESI + 0x188e1b0a) + param_2 * 2);
  *pcVar1 = *pcVar1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab81a FUN_14d7ab81a body=2 status=ok
// SIG undefined FUN_14d7ab81a(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7ab880) overlaps instruction at (ram,0x00014d7ab87f)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7ab873) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab899) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab8da) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab8ba) */
/* WARNING: Removing unreachable block (ram,0xb0005235) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab8c9) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab875) */

ulonglong FUN_14d7ab81a(longlong param_1,ulonglong param_2)

{
  uint *puVar1;
  byte bVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  char *pcVar9;
  ulonglong unaff_RBX;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
  ulonglong uVar10;
  bool in_CF;
  char in_AF;
  bool in_ZF;
  undefined1 auStack_8 [8];
  
  if (in_CF || in_ZF) {
    uVar3 = in((short)param_2);
    *unaff_RDI = uVar3;
    *(int *)(unaff_RBX + 3) = (int)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar10 = (ulonglong)uRam07725411da000078;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),
                   *(undefined1 *)(unaff_RBX + ((ulonglong)unaff_RDI & 0xff)));
  pbVar7 = (byte *)(uVar4 & 0xffffffff);
  uVar6 = (uint)uVar4;
  if (uVar6 != 0x30421cbf) {
    pcVar9 = (char *)(uVar10 + 0x755f6e90);
    *pcVar9 = *pcVar9 + (char)unaff_RBX + (uVar6 < 0x30421cbf);
    pbVar8 = (byte *)(param_2 & 0xffffffff);
    puVar1 = (uint *)(uVar10 + 0x10b97011 + unaff_RBX * 8);
    *puVar1 = ~*puVar1;
    bVar5 = (byte)pbVar8;
    *pbVar8 = *pbVar8 + bVar5;
    out(0x42,bVar5);
    if (param_1 != 1) {
      bVar2 = *pbVar8;
      *pbVar8 = *pbVar8 + bVar5;
      pcVar9 = (char *)CONCAT62((int6)((ulonglong)pbVar8 >> 0x10),
                                CONCAT11(((char)*pbVar8 < '\0') << 7 | (*pbVar8 == 0) << 6 |
                                         in_AF << 4 | ((POPCOUNT(*pbVar8) & 1U) == 0) << 2 | 2U |
                                         CARRY1(bVar2,bVar5),bVar5));
      LOCK();
      *(int *)pbVar7 = (int)auStack_8;
      UNLOCK();
      *(uint *)(unaff_RSI + 0x55a87a2e) =
           *(uint *)(unaff_RSI + 0x55a87a2e) ^
           (uint)CONCAT71((int7)((ulonglong)pcVar9 >> 8),bVar5 - *pcVar9);
      return unaff_RBX & 0xffffffff;
    }
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  bVar5 = (byte)param_1 & 7;
  *pbVar7 = *pbVar7 << bVar5 | *pbVar7 >> 8 - bVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab820 FUN_14d7ab820 body=154 status=ok
// SIG undefined FUN_14d7ab820(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7ab873) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab899) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab8da) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab8ba) */
/* WARNING: Removing unreachable block (ram,0xb0005235) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab8c9) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab875) */

ulonglong FUN_14d7ab820(longlong param_1,ulonglong param_2)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  char *pcVar7;
  ulonglong unaff_RBX;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  bool in_CF;
  char in_AF;
  undefined1 auStack_10 [8];
  
  uVar4 = in_RAX;
  if (!in_CF) {
    uVar4 = unaff_RDI & 0xffffffff;
    unaff_RDI = in_RAX & 0xffffffff;
  }
  pbVar5 = (byte *)CONCAT71((int7)(uVar4 >> 8),*(undefined1 *)(unaff_RBX + (uVar4 & 0xff)));
  if ((uint)pbVar5 != 0x30421cbf) {
    *(char *)(unaff_RDI + 0x755f6e90) =
         *(char *)(unaff_RDI + 0x755f6e90) + (char)unaff_RBX + ((uint)pbVar5 < 0x30421cbf);
    pbVar6 = (byte *)(param_2 & 0xffffffff);
    puVar1 = (uint *)(unaff_RDI + 0x10b97011 + unaff_RBX * 8);
    *puVar1 = ~*puVar1;
    bVar3 = (byte)pbVar6;
    *pbVar6 = *pbVar6 + bVar3;
    out(0x42,bVar3);
    if (param_1 != 1) {
      bVar2 = *pbVar6;
      *pbVar6 = *pbVar6 + bVar3;
      pcVar7 = (char *)CONCAT62((int6)((ulonglong)pbVar6 >> 0x10),
                                CONCAT11(((char)*pbVar6 < '\0') << 7 | (*pbVar6 == 0) << 6 |
                                         in_AF << 4 | ((POPCOUNT(*pbVar6) & 1U) == 0) << 2 | 2U |
                                         CARRY1(bVar2,bVar3),bVar3));
      LOCK();
      *(int *)((ulonglong)pbVar5 & 0xffffffff) = (int)auStack_10;
      UNLOCK();
      *(uint *)(unaff_RSI + 0x55a87a2e) =
           *(uint *)(unaff_RSI + 0x55a87a2e) ^
           (uint)CONCAT71((int7)((ulonglong)pcVar7 >> 8),bVar3 - *pcVar7);
      return unaff_RBX & 0xffffffff;
    }
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  bVar3 = (byte)param_1 & 7;
  *pbVar5 = *pbVar5 << bVar3 | *pbVar5 >> 8 - bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab855 FUN_14d7ab855 body=1 status=ok
// SIG undefined FUN_14d7ab855(void)

undefined4 FUN_14d7ab855(undefined8 param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 in_EAX;
  undefined4 unaff_EBX;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
  byte in_CF;
  char in_PF;
  char in_AF;
  char in_ZF;
  char in_SF;
  
  *unaff_RDI = in_EAX;
  bVar1 = in_SF << 7 | in_ZF << 6 | in_AF << 4 | in_PF << 2 | 2U | in_CF;
  LOCK();
  *param_2 = (int)&stack0x00000000;
  UNLOCK();
  *(uint *)(unaff_RSI + 0x55a87a2e) =
       *(uint *)(unaff_RSI + 0x55a87a2e) ^
       (uint)CONCAT11(bVar1,-0x27 - *(char *)(ulonglong)CONCAT11(bVar1,0xd9));
  return unaff_EBX;
}



// FUNCTION 14d7ab8d1 FUN_14d7ab8d1 body=8 status=ok
// SIG undefined FUN_14d7ab8d1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab8d1(char *param_1,char param_2)

{
  in(0xbb);
  *param_1 = *param_1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab900 FUN_14d7ab900 body=1 status=ok
// SIG undefined FUN_14d7ab900(void)

void FUN_14d7ab900(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7ab904 FUN_14d7ab904 body=5 status=ok
// SIG undefined FUN_14d7ab904(void)

void FUN_14d7ab904(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7ab909 FUN_14d7ab909 body=7 status=ok
// SIG undefined FUN_14d7ab909(void)

void FUN_14d7ab909(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7ab913 FUN_14d7ab913 body=1 status=ok
// SIG undefined FUN_14d7ab913(void)

undefined4 FUN_14d7ab913(byte param_1,undefined2 param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  longlong unaff_RSI;
  
  uVar2 = in(param_2);
  pbVar1 = (byte *)(unaff_RSI + 0x179f0f2c);
  *pbVar1 = *pbVar1 << (param_1 & 7) | *pbVar1 >> 8 - (param_1 & 7);
  return uVar2;
}



// FUNCTION 14d7ab917 FUN_14d7ab917 body=6 status=ok
// SIG undefined FUN_14d7ab917(void)

void FUN_14d7ab917(void)

{
  undefined8 unaff_RDI;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  *(bool *)unaff_RDI = !in_ZF && in_OF == in_SF;
  return;
}



// FUNCTION 14d7ab92a FUN_14d7ab92a body=3 status=ok
// SIG undefined FUN_14d7ab92a(void)

void FUN_14d7ab92a(void)

{
  return;
}



// FUNCTION 14d7ab936 FUN_14d7ab936 body=4 status=ok
// SIG undefined FUN_14d7ab936(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab936(undefined8 param_1)

{
  char *in_RAX;
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  *(char *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(char *)CONCAT44(unaff_0000001c,unaff_EBX) + (char)unaff_EBX;
  if (((ulonglong)in_RAX & 0xffffffff) == 1 || *(char *)CONCAT44(unaff_0000001c,unaff_EBX) == '\0')
  {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)
   ((CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(0xe7,(char)param_1)) & 0xffffffff) - 0x6b)
       = unaff_EBX;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7ab941 FUN_14d7ab941 body=2 status=ok
// SIG undefined FUN_14d7ab941(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab941(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab94e FUN_14d7ab94e body=2 status=ok
// SIG undefined FUN_14d7ab94e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab94e(void)

{
  byte bVar1;
  byte bVar2;
  undefined8 in_RAX;
  byte *unaff_RBX;
  int unaff_EBP;
  undefined1 *unaff_RDI;
  undefined2 in_CS;
  bool in_ZF;
  char in_SF;
  char in_OF;
  int *unaff_retaddr;
  undefined1 auStack_10 [8];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (!in_ZF && in_OF == in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = *unaff_RBX;
  bVar2 = (byte)((ulonglong)in_RAX >> 8);
  *unaff_RBX = *unaff_RBX + bVar2;
  *unaff_RDI = (char)in_RAX;
  *unaff_retaddr = *unaff_retaddr + unaff_EBP + (uint)CARRY1(bVar1,bVar2);
  _uStack_8 = CONCAT44(CONCAT22(uStack_4._2_2_,in_CS),0x4d7ab9af);
  (*(code *)((longlong)unaff_retaddr + 0x53))();
  *(uint *)(unaff_RDI + 1) = *(uint *)(unaff_RDI + 1) | (uint)auStack_10;
  in(0xb6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab960 FUN_14d7ab960 body=12 status=ok
// SIG undefined FUN_14d7ab960(void)

void FUN_14d7ab960(undefined8 param_1)

{
  int *piVar1;
  code *pcVar2;
  longlong unaff_RSI;
  
  *(char *)(unaff_RSI + 0x39) = (char)((ulonglong)param_1 >> 8);
  piVar1 = (int *)((longlong)&ClientId.UniqueThread + unaff_RSI + 6);
  *piVar1 = *piVar1 << 0x16;
  pcVar2 = (code *)swi(1);
  (*pcVar2)();
  return;
}



// FUNCTION 14d7ab975 FUN_14d7ab975 body=4 status=ok
// SIG undefined FUN_14d7ab975(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab975(undefined8 param_1,undefined2 param_2)

{
  undefined1 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab979 FUN_14d7ab979 body=2 status=ok
// SIG undefined FUN_14d7ab979(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab979(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab97d FUN_14d7ab97d body=4 status=ok
// SIG undefined FUN_14d7ab97d(void)

void FUN_14d7ab97d(void)

{
  return;
}



// FUNCTION 14d7ab98b FUN_14d7ab98b body=11 status=ok
// SIG undefined FUN_14d7ab98b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab98b(undefined8 param_1,char param_2)

{
  longlong unaff_RBP;
  
  *(char *)(unaff_RBP + -1) = *(char *)(unaff_RBP + -1) + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab9ac FUN_14d7ab9ac body=15 status=ok
// SIG undefined FUN_14d7ab9ac(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab9ac(longlong param_1)

{
  uint *unaff_RDI;
  undefined2 in_CS;
  undefined1 auStack_10 [8];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  _uStack_8 = CONCAT44(CONCAT22(uStack_4._2_2_,in_CS),0x4d7ab9af);
  (*(code *)(param_1 + 0x53))();
  *unaff_RDI = *unaff_RDI | (uint)auStack_10;
  in(0xb6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab9be FUN_14d7ab9be body=3 status=ok
// SIG undefined FUN_14d7ab9be(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7ab9be(void)

{
  code *pcVar1;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (!in_ZF && in_OF == in_SF) {
    pcVar1 = (code *)swi(1);
    (*pcVar1)();
    return;
  }
  from_bcd(_DAT_110217e68);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab9c6 FUN_14d7ab9c6 body=3 status=ok
// SIG undefined FUN_14d7ab9c6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab9c6(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab9ca FUN_14d7ab9ca body=1 status=ok
// SIG undefined FUN_14d7ab9ca(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab9ca(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  longlong in_RAX;
  byte unaff_BL;
  
  pbVar1 = (byte *)(param_2 + in_RAX * 8);
  *pbVar1 = *pbVar1 & unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab9cf FUN_14d7ab9cf body=4 status=ok
// SIG undefined FUN_14d7ab9cf(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab9cf(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab9d3 FUN_14d7ab9d3 body=2 status=ok
// SIG undefined FUN_14d7ab9d3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab9d3(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab9d9 FUN_14d7ab9d9 body=21 status=ok
// SIG undefined FUN_14d7ab9d9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab9d9(undefined4 param_1)

{
  char *pcVar1;
  longlong unaff_RBP;
  undefined4 unaff_EDI;
  undefined4 unaff_0000003c;
  
  pcVar1 = (char *)(CONCAT44(unaff_0000003c,unaff_EDI) + 0x3e6e142a);
  *pcVar1 = *pcVar1 + (char)((uint)param_1 >> 8);
  *(int *)(unaff_RBP + 0x1eeaa200) = -*(int *)(unaff_RBP + 0x1eeaa200);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab9f0 FUN_14d7ab9f0 body=8 status=ok
// SIG undefined FUN_14d7ab9f0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab9f0(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined1 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab9f8 FUN_14d7ab9f8 body=1 status=ok
// SIG undefined FUN_14d7ab9f8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab9f8(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined1 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab9fc FUN_14d7ab9fc body=6 status=ok
// SIG undefined FUN_14d7ab9fc(void)

void FUN_14d7ab9fc(void)

{
  longlong in_RAX;
  
                    /* WARNING: Could not recover jumptable at 0x00014d7ab9fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulonglong)*(uint *)(in_RAX + -0x41ff6c1b))();
  return;
}



// FUNCTION 14d7aba05 FUN_14d7aba05 body=17 status=ok
// SIG undefined FUN_14d7aba05(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aba05(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aba1a FUN_14d7aba1a body=2 status=ok
// SIG undefined FUN_14d7aba1a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aba1a(void)

{
  in(0x5c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aba1e FUN_14d7aba1e body=16 status=ok
// SIG undefined FUN_14d7aba1e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7aba1e(undefined8 param_1,undefined2 param_2)

{
  byte *pbVar1;
  undefined3 uVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 in_EAX;
  undefined4 uVar5;
  byte bVar6;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined4 *unaff_RDI;
  
  out(param_2,in_EAX);
  uVar5 = in(param_2);
  uVar2 = (undefined3)((uint)uVar5 >> 8);
  cVar3 = in(param_2);
  pbVar1 = (byte *)((ulonglong)CONCAT31(uVar2,cVar3) - 0x35);
  bVar6 = (byte)((ushort)param_2 >> 8);
  *pbVar1 = *pbVar1 ^ bVar6;
  uVar4 = *(undefined1 *)
           (CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
           ((ulonglong)CONCAT31(uVar2,cVar3 + unaff_BH) & 0xff));
  LOCK();
  *(byte *)((longlong)&ClientId.UniqueProcess +
           CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 2) = bVar6;
  UNLOCK();
  *unaff_RDI = CONCAT31(uVar2,uVar4);
  from_bcd(_DAT_110217e68);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aba2f FUN_14d7aba2f body=4 status=ok
// SIG undefined FUN_14d7aba2f(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7aba2f(undefined8 param_1,undefined8 param_2)

{
  undefined4 in_EAX;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  undefined4 *unaff_RDI;
  
  LOCK();
  *(char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x42) =
       (char)((ulonglong)param_2 >> 8);
  UNLOCK();
  *unaff_RDI = in_EAX;
  from_bcd(_DAT_110217e68);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aba34 FUN_14d7aba34 body=11 status=ok
// SIG undefined FUN_14d7aba34(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7aba34(void)

{
  from_bcd(_DAT_110217e68);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aba40 FUN_14d7aba40 body=109 status=ok
// SIG undefined FUN_14d7aba40(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7aba6f) overlaps instruction at (ram,0x00014d7aba6b)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_14d7aba40(longlong param_1,undefined8 param_2)

{
  char cVar1;
  char *in_RAX;
  int *piVar3;
  byte unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  uint unaff_ESI;
  longlong unaff_RDI;
  char unaff_R13B;
  float10 in_ST0;
  char cVar2;
  
  cVar1 = *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_R13B;
  cVar2 = *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  if (*(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) == '\0') {
    *in_RAX = *in_RAX + (char)param_1;
  }
  else {
    *(int *)(CONCAT62(unaff_0000001a,(ushort)unaff_BL) + 0x30d4004e) = (int)ROUND(in_ST0);
    in_RAX = &DAT_3efb00ab;
    if (SCARRY1(cVar1,unaff_R13B)) {
      _DAT_3efb00ab = 0x3efb00ab;
      if (cVar2 < '\0') {
        *(undefined8 *)((ulonglong)(*(int *)(param_1 + 0x2f19f061) + 0x3efb00ab) - 8) = 0x10;
        out(0xd600,(char)_DAT_7a06cd90);
        piVar3 = (int *)(ulonglong)(uint)(int)(short)((short)_DAT_7a06cd90 + -0x6a);
        *piVar3 = *piVar3 + 1;
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      return unaff_ESI;
    }
    DAT_d5712673 = DAT_d5712673 + (char)((ulonglong)param_2 >> 8);
    if ((POPCOUNT(DAT_d5712673) & 1U) == 0) {
      *(undefined1 *)(unaff_RDI + 0x3e6e142a) = *(undefined1 *)(unaff_RDI + 0x3e6e142a);
      *(int *)(unaff_RBP + 0x1eeaa200) = -*(int *)(unaff_RBP + 0x1eeaa200);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(char *)(ulonglong)unaff_ESI = *(char *)(ulonglong)unaff_ESI + (char)unaff_ESI;
  out(*(undefined4 *)((ulonglong)in_RAX & 0xffffffff),(short)param_2);
  *(char *)(param_1 + 0x6b5a0002) = *(char *)(param_1 + 0x6b5a0002) + '\x01';
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7abaa0 FUN_14d7abaa0 body=2 status=ok
// SIG undefined FUN_14d7abaa0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abaa0(undefined8 param_1,undefined2 param_2)

{
  byte *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI ^ (byte)((ushort)param_2 >> 8);
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abaa4 FUN_14d7abaa4 body=2 status=ok
// SIG undefined FUN_14d7abaa4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abaa4(undefined8 param_1,undefined2 param_2)

{
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abaad FUN_14d7abaad body=31 status=ok
// SIG undefined FUN_14d7abaad(void)

ulonglong FUN_14d7abaad(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  char in_AL;
  char cVar3;
  undefined1 uVar4;
  undefined6 uVar5;
  char unaff_BL;
  ulonglong uVar6;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined2 in_CS;
  
  uVar5 = (undefined6)((ulonglong)param_1 >> 0x10);
  uVar2 = CONCAT71((int7)((ulonglong)param_2 >> 8),*unaff_RSI);
  cVar3 = (char)param_1 + unaff_BL;
  uVar4 = 0xe9;
  uVar6 = (ulonglong)((uint)&stack0x00000000 ^ *(uint *)(unaff_RBP + 0x4cdea00c));
  if (CONCAT62(uVar5,CONCAT11(0xe9,cVar3)) != 0) {
    return uVar2 & 0xffffffff;
  }
  out(CONCAT11(0x20,in_AL << 1),(int)uVar2);
  *(undefined2 *)(uVar6 - 4) = in_CS;
  *(undefined4 *)(uVar6 - 8) = 0x4d7aba9e;
  (*(code *)(unaff_RSI + -0x4f94ce7))();
  pcVar1 = (char *)(CONCAT62(uVar5,CONCAT11(uVar4,cVar3)) + 0x6b5a0002);
  *pcVar1 = *pcVar1 + '\x01';
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7abaff FUN_14d7abaff body=31 status=ok
// SIG undefined FUN_14d7abaff(void)

/* WARNING: Instruction at (ram,0x00014d7abb02) overlaps instruction at (ram,0x00014d7abaff)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7abb10) */

void FUN_14d7abaff(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char in_AL;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  undefined4 uVar3;
  
  uVar3 = (undefined4)param_1;
  do {
    in_AH = in_AH & (byte)uVar3;
    LOCK();
    puVar1 = (undefined4 *)(CONCAT44((int)((ulonglong)param_1 >> 0x20),uVar3) + -0x7f9f5000);
    uVar2 = *puVar1;
    *puVar1 = uVar3;
    UNLOCK();
    *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
         - CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
    *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) + in_AL;
    uVar3 = uVar2;
  } while( true );
}



// FUNCTION 14d7abb2f FUN_14d7abb2f body=8 status=ok
// SIG undefined FUN_14d7abb2f(void)

void FUN_14d7abb2f(undefined8 param_1)

{
  code *pcVar1;
  uint uVar2;
  char *unaff_RDI;
  char in_SF;
  char in_OF;
  char *pcVar3;
  
  uVar2 = in(0x50);
  pcVar3 = (char *)(ulonglong)uVar2;
  *unaff_RDI = (char)uVar2;
  if (in_OF == in_SF) {
    cRam000000014e7aa099 = cRam000000014e7aa099 + (char)((ulonglong)param_1 >> 8);
    return;
  }
  *pcVar3 = *pcVar3 + (char)uVar2;
  *pcVar3 = *pcVar3 + (char)(uVar2 >> 8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7abb38 FUN_14d7abb38 body=16 status=ok
// SIG undefined FUN_14d7abb38(void)

undefined4 FUN_14d7abb38(void)

{
  uint in_EAX;
  uint uVar1;
  uint unaff_ESI;
  uint uVar2;
  char in_AF;
  
  uVar1 = in_EAX - 0xffe55c;
  uVar2 = unaff_ESI + uVar1 + (uint)(in_EAX < 0xffe55c);
  return CONCAT22((short)(uVar1 >> 0x10),
                  CONCAT11(((int)uVar2 < 0) << 7 | (uVar2 == 0) << 6 | in_AF << 4 |
                           ((POPCOUNT(uVar2 & 0xff) & 1U) == 0) << 2 | 2U |
                           (CARRY4(unaff_ESI,uVar1) ||
                           CARRY4(unaff_ESI + uVar1,(uint)(in_EAX < 0xffe55c))),(char)uVar1));
}



// FUNCTION 14d7abb52 FUN_14d7abb52 body=8 status=ok
// SIG undefined FUN_14d7abb52(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7abb52(undefined8 param_1,byte *param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  byte bVar5;
  undefined8 in_RAX;
  byte bVar7;
  longlong lVar6;
  longlong unaff_RBX;
  char *unaff_RSI;
  longlong unaff_RDI;
  char in_AF;
  longlong unaff_retaddr;
  byte *pbVar4;
  
  cVar2 = *unaff_RSI;
  bVar5 = *param_2;
  bVar7 = (byte)((ulonglong)param_2 >> 8);
  *param_2 = *param_2 + bVar7;
  lVar6 = CONCAT71((int7)((ulonglong)param_2 >> 8),0xc5);
  bVar5 = ((char)*param_2 < '\0') << 7 | (*param_2 == 0) << 6 | in_AF << 4 |
          ((POPCOUNT(*param_2) & 1U) == 0) << 2 | 2U | CARRY1(bVar5,bVar7);
  pcVar1 = (char *)(lVar6 + 0x4a4ffba1);
  *pcVar1 = *pcVar1 + bVar5;
  pbVar4 = (byte *)(unaff_RDI + (longlong)unaff_RSI * 2);
  *pbVar4 = *pbVar4 & (byte)((ulonglong)param_1 >> 8);
  if (*pbVar4 == 0) {
    cVar3 = cVar2 + -0x6b;
    pbVar4 = (byte *)CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                              CONCAT11(bVar5,cVar2)) >> 8),cVar3);
    *pbVar4 = *pbVar4 << 7 | *pbVar4 >> 1;
    *(int *)(unaff_retaddr + -0x6a) = (int)unaff_retaddr;
    unaff_RSI[0x7b5b6827] = unaff_RSI[0x7b5b6827] + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*(undefined4 *)unaff_RSI,(short)lVar6);
  *(char *)(unaff_RBX + -0x1dc9ad99) = *(char *)(unaff_RBX + -0x1dc9ad99) + -0x3b;
  _DAT_28075ec96eaf714c = 0x5bddf9fc;
  return;
}



// FUNCTION 14d7abb60 FUN_14d7abb60 body=2 status=ok
// SIG undefined FUN_14d7abb60(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7abb60(undefined8 param_1,longlong param_2)

{
  char cVar1;
  byte bVar3;
  undefined8 in_RAX;
  longlong unaff_RBX;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  byte in_CF;
  char in_PF;
  char in_AF;
  char in_ZF;
  char in_SF;
  longlong unaff_retaddr;
  byte *pbVar2;
  
  bVar3 = in_SF << 7 | in_ZF << 6 | in_AF << 4 | in_PF << 2 | 2U | in_CF;
  *(char *)(param_2 + 0x4a4ffba1) = *(char *)(param_2 + 0x4a4ffba1) + bVar3;
  pbVar2 = (byte *)(unaff_RDI + (longlong)unaff_RSI * 2);
  *pbVar2 = *pbVar2 & (byte)((ulonglong)param_1 >> 8);
  if (*pbVar2 != 0) {
    out(*unaff_RSI,(short)param_2);
    *(char *)(unaff_RBX + -0x1dc9ad99) = *(char *)(unaff_RBX + -0x1dc9ad99) + (char)param_2;
    _DAT_28075ec96eaf714c = 0x5bddf9fc;
    return;
  }
  cVar1 = (char)in_RAX + -0x6b;
  pbVar2 = (byte *)CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                            CONCAT11(bVar3,(char)in_RAX)) >> 8),cVar1);
  *pbVar2 = *pbVar2 << 7 | *pbVar2 >> 1;
  *(int *)(unaff_retaddr + -0x6a) = (int)unaff_retaddr;
  *(char *)((longlong)unaff_RSI + 0x7b5b6827) = *(char *)((longlong)unaff_RSI + 0x7b5b6827) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abb66 FUN_14d7abb66 body=39 status=ok
// SIG undefined FUN_14d7abb66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7abb66(undefined8 param_1,undefined2 param_2)

{
  undefined1 in_AL;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  uint unaff_EDI;
  
  DAT_74772c204a4ffba1 = in_AL;
  *(uint *)(unaff_RBP + -0xd2d7ef4) = *(uint *)(unaff_RBP + -0xd2d7ef4) & unaff_EDI;
  out(*unaff_RSI,param_2);
  *(char *)(unaff_RBX + -0x1dc9ad99) = *(char *)(unaff_RBX + -0x1dc9ad99) + (char)param_2;
  _DAT_28075ec96eaf714c = 0x5bddf9fc;
  return;
}



// FUNCTION 14d7abb93 FUN_14d7abb93 body=2 status=ok
// SIG undefined FUN_14d7abb93(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abb93(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abba5 FUN_14d7abba5 body=4 status=ok
// SIG undefined FUN_14d7abba5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abba5(void)

{
  char in_AL;
  undefined4 unaff_EBP;
  undefined4 unaff_0000002c;
  longlong unaff_RSI;
  
  *(undefined4 *)(CONCAT44(unaff_0000002c,unaff_EBP) + -0x6a) = unaff_EBP;
  *(char *)(unaff_RSI + 0x7b5b6827) = *(char *)(unaff_RSI + 0x7b5b6827) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abbaa FUN_14d7abbaa body=2 status=ok
// SIG undefined FUN_14d7abbaa(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abbaa(longlong param_1)

{
  undefined1 in_AH;
  undefined4 unaff_EBX;
  undefined1 *unaff_RDI;
  
  LOCK();
  *unaff_RDI = in_AH;
  UNLOCK();
  *(undefined4 *)(param_1 + 0xb9bcc5) = unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abbae FUN_14d7abbae body=15 status=ok
// SIG undefined FUN_14d7abbae(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abbae(char *param_1,char param_2,undefined8 param_3,longlong param_4)

{
  undefined4 in_R11D;
  bool in_PF;
  
  if (in_PF) {
    *(undefined4 *)(param_4 + 0xb9bcc5) = in_R11D;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  in(0xff);
  *param_1 = *param_1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abbd3 FUN_14d7abbd3 body=9 status=ok
// SIG undefined FUN_14d7abbd3(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7abbd3(void)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined4 unaff_ESI;
  undefined8 auStack_10 [2];
  
  _DAT_492db2a4 = unaff_ESI;
  puVar3 = auStack_10 + 1;
  puVar1 = (undefined8 *)0x2c9ecb1e;
  cVar2 = '\n';
  do {
    puVar1 = puVar1 + -1;
    puVar3 = puVar3 + -1;
    *puVar3 = *puVar1;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abbe4 FUN_14d7abbe4 body=4 status=ok
// SIG undefined FUN_14d7abbe4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abbe4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abbe8 FUN_14d7abbe8 body=6 status=ok
// SIG undefined FUN_14d7abbe8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abbe8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abbf0 FUN_14d7abbf0 body=39 status=ok
// SIG undefined FUN_14d7abbf0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abbf0(undefined8 param_1,undefined2 param_2,ulonglong *param_3)

{
  undefined1 uVar1;
  uint in_EAX;
  uint uVar2;
  undefined1 *unaff_RDI;
  ulonglong unaff_retaddr;
  
  out(0xc3,in_EAX);
  *param_3 = *param_3 << 1 | (ulonglong)((longlong)*param_3 < 0);
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  uVar2 = in_EAX & 0x9c58d5fb;
  if ((int)uVar2 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(param_2,uVar2);
  if (uVar2 < *(uint *)(unaff_RDI + (ulonglong)((unaff_retaddr & 0x400) != 0) * -2 + 1)) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abc06 FUN_14d7abc06 body=8 status=ok
// SIG undefined FUN_14d7abc06(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abc06(longlong param_1)

{
  if (param_1 == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// FUNCTION 14d7abc2c FUN_14d7abc2c body=4 status=ok
// SIG undefined FUN_14d7abc2c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abc2c(ulonglong param_1)

{
  uint *puVar1;
  char *pcVar2;
  longlong unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RDI;
  ulonglong unaff_R15;
  
  pcVar2 = (char *)(unaff_RBP & 0xffffffff);
  *pcVar2 = *pcVar2 + (char)pcVar2;
  puVar1 = (uint *)((param_1 & unaff_R15) + 0x2f433301);
  *puVar1 = *puVar1 & (uint)&stack0x00000000;
  *(uint *)(unaff_RBX + 0x628b0300) = *(uint *)(unaff_RBX + 0x628b0300) ^ (uint)&stack0x00000000;
  pcVar2 = (char *)(unaff_RBX + 0x53 + unaff_RDI * 2);
  *pcVar2 = *pcVar2 + (char)(param_1 & unaff_R15);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abc3b FUN_14d7abc3b body=8 status=ok
// SIG undefined FUN_14d7abc3b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7abcf7) */

void FUN_14d7abc3b(int param_1)

{
  longlong unaff_RBX;
  
  if ((POPCOUNT(param_1 + *(int *)(unaff_RBX + 0x4c005262) & 0xff) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abc5a FUN_14d7abc5a body=4 status=ok
// SIG undefined FUN_14d7abc5a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abc5a(char param_1)

{
  longlong unaff_RBX;
  
  *(char *)(unaff_RBX + -0x6a) = *(char *)(unaff_RBX + -0x6a) - param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abc5e FUN_14d7abc5e body=1 status=ok
// SIG undefined FUN_14d7abc5e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abc5e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abc68 FUN_14d7abc68 body=4 status=ok
// SIG undefined FUN_14d7abc68(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abc68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abc6c FUN_14d7abc6c body=24 status=ok
// SIG undefined FUN_14d7abc6c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abc6c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abc8c FUN_14d7abc8c body=5 status=ok
// SIG undefined FUN_14d7abc8c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abc8c(undefined8 param_1,longlong param_2)

{
  (&stack0x0000004e)[param_2 * 2] =
       (&stack0x0000004e)[param_2 * 2] + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abc92 FUN_14d7abc92 body=12 status=ok
// SIG undefined FUN_14d7abc92(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abc92(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined1 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abca7 FUN_14d7abca7 body=5 status=ok
// SIG undefined FUN_14d7abca7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abca7(longlong param_1,undefined2 param_2)

{
  undefined4 uVar1;
  longlong in_RAX;
  char *pcVar2;
  char unaff_BL;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
  char in_ZF;
  
  pcVar2 = (char *)(param_1 + -1);
  if (pcVar2 == (char *)0x0 || in_ZF != '\0') {
    *(char *)(in_RAX + -0x20fffff4) = -*(char *)(in_RAX + -0x20fffff4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  *(undefined4 *)((longlong)unaff_RDI + 5) = *(undefined4 *)(unaff_RSI + 1);
  *(char *)(unaff_RBP + 0x77) = *(char *)(unaff_RBP + 0x77) + (char)((ulonglong)in_RAX >> 8);
  *pcVar2 = *pcVar2 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abcb1 FUN_14d7abcb1 body=3 status=ok
// SIG undefined FUN_14d7abcb1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abcb1(void)

{
  longlong in_RAX;
  float10 in_ST0;
  
  *(short *)(in_RAX + 0x36) = (short)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abcb9 FUN_14d7abcb9 body=3 status=ok
// SIG undefined FUN_14d7abcb9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abcb9(void)

{
  code *pcVar1;
  char *pcVar2;
  char unaff_DIL;
  char *unaff_R14;
  
  *unaff_R14 = *unaff_R14 + unaff_DIL;
  pcVar1 = (code *)swi(0x87);
  pcVar2 = (char *)(*pcVar1)();
  *pcVar2 = *pcVar2 + (char)pcVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abcbe FUN_14d7abcbe body=22 status=ok
// SIG undefined FUN_14d7abcbe(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abcbe(void)

{
  code *pcVar1;
  char *pcVar2;
  
  pcVar1 = (code *)swi(0x87);
  pcVar2 = (char *)(*pcVar1)();
  *pcVar2 = *pcVar2 + (char)pcVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abcda FUN_14d7abcda body=29 status=ok
// SIG undefined FUN_14d7abcda(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abcda(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  char extraout_AH;
  uint *in_RAX;
  undefined1 uVar2;
  undefined7 uVar3;
  char unaff_BL;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined4 *unaff_retaddr;
  
  uVar3 = (undefined7)((ulonglong)param_1 >> 8);
  uVar2 = (undefined1)param_1;
  *in_RAX = *in_RAX << 1 | (uint)((int)*in_RAX < 0);
  func_0x00019b6fb587();
  uVar1 = in(param_2);
  *unaff_retaddr = uVar1;
  *(undefined4 *)((longlong)unaff_retaddr + 5) = *(undefined4 *)(unaff_RSI + 1);
  *(char *)(unaff_RBP + 0x77) = *(char *)(unaff_RBP + 0x77) + extraout_AH;
  *(char *)CONCAT71(uVar3,uVar2) = *(char *)CONCAT71(uVar3,uVar2) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abcfa FUN_14d7abcfa body=21 status=ok
// SIG undefined FUN_14d7abcfa(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abcfa(void)

{
  undefined1 in_AL;
  undefined4 *unaff_RDI;
  bool in_ZF;
  char *unaff_retaddr;
  
  if (in_ZF) {
    *unaff_retaddr = *unaff_retaddr + (char)unaff_retaddr;
    *unaff_RDI = (int)unaff_retaddr;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)unaff_RDI = in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abd16 FUN_14d7abd16 body=22 status=ok
// SIG undefined FUN_14d7abd16(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abd16(void)

{
  int *piVar1;
  code *pcVar2;
  longlong unaff_RBX;
  longlong unaff_RBP;
  byte in_CF;
  bool in_PF;
  
  if (!in_PF) {
    pcVar2 = (code *)swi(1);
    (*pcVar2)();
    return;
  }
  piVar1 = (int *)(unaff_RBX + -0x7c + unaff_RBP * 2);
  *piVar1 = *piVar1 + (int)&stack0x00000000 + (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abd28 FUN_14d7abd28 body=9 status=ok
// SIG undefined FUN_14d7abd28(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7abd2d) overlaps instruction at (ram,0x00014d7abd2c)
    */

void FUN_14d7abd28(longlong param_1,undefined2 param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 in_EAX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong in_FS_OFFSET;
  
  if (param_1 == 0) {
    uRam7bcb03149a00c61a = (undefined1)in_EAX;
    iVar2 = *(int *)(in_FS_OFFSET + unaff_RBP + -0x49a92c66 + (unaff_RDI + 1) * 4) * 0x17;
    in_EAX = CONCAT31((int3)((uint)iVar2 >> 8),(char)iVar2 + -0x6c);
    pcVar1 = (char *)(unaff_RSI + 0xd8e3f9);
    *pcVar1 = *pcVar1;
    if (*pcVar1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *(char *)(unaff_RBP + -0x7c) = *(char *)(unaff_RBP + -0x7c) + (char)((ushort)param_2 >> 8);
  }
  out(param_2,in_EAX);
  *(char *)(unaff_RDI + -0x12) = *(char *)(unaff_RDI + -0x12) + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abd32 FUN_14d7abd32 body=13 status=ok
// SIG undefined FUN_14d7abd32(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abd32(undefined8 param_1,undefined2 param_2)

{
  undefined4 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abd43 FUN_14d7abd43 body=9 status=ok
// SIG undefined FUN_14d7abd43(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7abdd7) overlaps instruction at (ram,0x00014d7abdd3)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7abd43(undefined8 param_1,uint *param_2)

{
  char *pcVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  undefined1 uVar9;
  char cVar12;
  byte *in_RAX;
  uint *puVar10;
  ulonglong uVar11;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_EBP;
  char *unaff_RDI;
  undefined2 in_ES;
  float10 in_ST0;
  undefined4 *unaff_retaddr;
  
  uVar6 = *param_2;
  *(undefined2 *)in_RAX = in_ES;
  if ((char)((char)((ulonglong)param_2 >> 8) - (char)uVar6) < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar3 = *in_RAX;
  bVar8 = (byte)in_RAX;
  *in_RAX = *in_RAX + bVar8;
  bVar5 = ((byte)param_1 & 0x1f) % 9;
  cVar4 = *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       cVar4 << bVar5 | (byte)(CONCAT11(CARRY1(bVar3,bVar8),cVar4) >> 9 - bVar5);
  uVar6 = *param_2;
  *(int *)in_RAX = (int)in_RAX;
  uVar7 = param_2[0x17];
  *in_RAX = *in_RAX + bVar8;
  bVar3 = *in_RAX;
  *in_RAX = *in_RAX + bVar8;
  out(*unaff_retaddr,(short)param_2);
  if (-1 < (char)((byte)uVar7 | *(byte *)((longlong)unaff_retaddr + 0x6475e31))) {
    puVar10 = (uint *)(CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                                CONCAT11((char)((ulonglong)param_1 >> 8) + unaff_BH +
                                         *(char *)((longlong)unaff_retaddr + -0x1e) +
                                         CARRY1(bVar3,bVar8),(byte)param_1)) & 0xffffffff);
    cVar4 = (char)((ulonglong)in_RAX >> 8);
    uVar7 = *puVar10;
    *puVar10 = *puVar10 - (uint)&stack0xfffffffffffffff8;
    if ((uint)&stack0xfffffffffffffff8 <= uVar7 && *puVar10 != 0) {
      *(int *)((longlong)unaff_retaddr + -0x497ba4ca) = (int)in_RAX;
      uVar9 = (undefined1)((short)puVar10 / (short)cVar4);
      cVar12 = (char)((short)puVar10 % (short)cVar4);
      _DAT_cff10cf2 = (longlong)in_ST0;
      uVar11 = CONCAT71((int7)(CONCAT62((int6)((ulonglong)puVar10 >> 0x10),CONCAT11(cVar12,uVar9))
                              >> 8),uVar9) ^ 0x1c;
      DAT_7056bcc136d65706 = (undefined1)uVar11;
      *unaff_RDI = *unaff_RDI + cVar4;
      *(uint *)(unaff_RDI + -0x2dc0ff03) =
           *(uint *)(unaff_RDI + -0x2dc0ff03) | (int)unaff_retaddr + 4U;
      piVar2 = (int *)(uVar11 * 2 + -0x652de700);
      *piVar2 = *piVar2 << 0x1f;
      pcVar1 = (char *)((ulonglong)(unaff_EBP ^ uVar6) - 0x65);
      *pcVar1 = *pcVar1 + cVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abd5c FUN_14d7abd5c body=11 status=ok
// SIG undefined FUN_14d7abd5c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abd5c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abd74 FUN_14d7abd74 body=3 status=ok
// SIG undefined FUN_14d7abd74(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abd74(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abda0 FUN_14d7abda0 body=16 status=ok
// SIG undefined FUN_14d7abda0(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7abdd7) overlaps instruction at (ram,0x00014d7abdd3)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7abda0(undefined8 param_1,undefined2 param_2)

{
  int *piVar1;
  uint uVar2;
  undefined1 uVar3;
  char cVar6;
  undefined4 in_EAX;
  uint *puVar4;
  ulonglong uVar5;
  char cVar7;
  byte unaff_BH;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  char *unaff_RDI;
  char in_CF;
  float10 in_ST0;
  
  out(*unaff_RSI,param_2);
  if ((char)(unaff_BH | *(byte *)((longlong)unaff_RSI + 0x6475e31)) < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar4 = (uint *)(CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                             CONCAT11((char)((ulonglong)param_1 >> 8) +
                                      *(char *)((longlong)unaff_RSI + -0x1e) + in_CF,(char)param_1))
                   & 0xffffffff);
  uVar2 = *puVar4;
  *puVar4 = *puVar4 - (uint)&stack0xfffffffffffffff8;
  if ((uint)&stack0xfffffffffffffff8 <= uVar2 && *puVar4 != 0) {
    *(undefined4 *)((longlong)unaff_RSI + -0x497ba4ca) = in_EAX;
    cVar7 = (char)((uint)in_EAX >> 8);
    uVar3 = (undefined1)((short)puVar4 / (short)cVar7);
    cVar6 = (char)((short)puVar4 % (short)cVar7);
    _DAT_cff10cf2 = (longlong)in_ST0;
    uVar5 = CONCAT71((int7)(CONCAT62((int6)((ulonglong)puVar4 >> 0x10),CONCAT11(cVar6,uVar3)) >> 8),
                     uVar3) ^ 0x1c;
    DAT_7056bcc136d65706 = (undefined1)uVar5;
    *unaff_RDI = *unaff_RDI + cVar7;
    *(uint *)(unaff_RDI + -0x2dc0ff03) = *(uint *)(unaff_RDI + -0x2dc0ff03) | (int)unaff_RSI + 4U;
    piVar1 = (int *)(uVar5 * 2 + -0x652de700);
    *piVar1 = *piVar1 << 0x1f;
    *(char *)(unaff_RBP + -0x65) = *(char *)(unaff_RBP + -0x65) + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abdb0 FUN_14d7abdb0 body=2 status=ok
// SIG undefined FUN_14d7abdb0(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7abdd7) overlaps instruction at (ram,0x00014d7abdd3)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7abdb0(ulonglong param_1)

{
  int *piVar1;
  uint uVar2;
  undefined1 uVar3;
  char cVar6;
  undefined4 in_EAX;
  uint *puVar4;
  ulonglong uVar5;
  char cVar7;
  longlong unaff_RBP;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  char *unaff_RDI;
  float10 in_ST0;
  
  puVar4 = (uint *)(param_1 & 0xffffffff);
  uVar2 = *puVar4;
  *puVar4 = *puVar4 - (uint)&stack0xfffffffffffffff8;
  if ((uint)&stack0xfffffffffffffff8 <= uVar2 && *puVar4 != 0) {
    *(undefined4 *)(CONCAT44(unaff_00000034,unaff_ESI) + -0x497ba4ce) = in_EAX;
    cVar7 = (char)((uint)in_EAX >> 8);
    uVar3 = (undefined1)((short)puVar4 / (short)cVar7);
    cVar6 = (char)((short)puVar4 % (short)cVar7);
    _DAT_cff10cf2 = (longlong)in_ST0;
    uVar5 = CONCAT71((int7)(CONCAT62((int6)((ulonglong)puVar4 >> 0x10),CONCAT11(cVar6,uVar3)) >> 8),
                     uVar3) ^ 0x1c;
    DAT_7056bcc136d65706 = (undefined1)uVar5;
    *unaff_RDI = *unaff_RDI + cVar7;
    *(uint *)(unaff_RDI + -0x2dc0ff03) = *(uint *)(unaff_RDI + -0x2dc0ff03) | unaff_ESI;
    piVar1 = (int *)(uVar5 * 2 + -0x652de700);
    *piVar1 = *piVar1 << 0x1f;
    *(char *)(unaff_RBP + -0x65) = *(char *)(unaff_RBP + -0x65) + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abdbd FUN_14d7abdbd body=22 status=ok
// SIG undefined FUN_14d7abdbd(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7abdbd(undefined8 param_1)

{
  int *piVar1;
  undefined1 in_AL;
  byte bVar2;
  undefined1 in_AH;
  char cVar3;
  undefined6 in_register_00000002;
  char cVar4;
  longlong unaff_RBP;
  uint unaff_ESI;
  char *unaff_RDI;
  float10 in_ST0;
  longlong unaff_retaddr;
  
  cVar4 = (char)((ulonglong)param_1 >> 8);
  bVar2 = (byte)(CONCAT11(in_AH,in_AL) / (short)cVar4);
  cVar3 = (char)(CONCAT11(in_AH,in_AL) % (short)cVar4);
  _DAT_cff10cf2 = (longlong)in_ST0;
  DAT_7056bcc136d65706 = bVar2 ^ 0x1c;
  *unaff_RDI = *unaff_RDI + cVar4;
  *(uint *)(unaff_retaddr + -0x2dc0ff03) = *(uint *)(unaff_retaddr + -0x2dc0ff03) | unaff_ESI;
  piVar1 = (int *)(((CONCAT62(in_register_00000002,CONCAT11(cVar3,bVar2)) ^ 0x1c) - 0x652de700) +
                  (CONCAT62(in_register_00000002,CONCAT11(cVar3,bVar2)) ^ 0x1c));
  *piVar1 = *piVar1 << 0x1f;
  *(char *)(unaff_RBP + -0x65) = *(char *)(unaff_RBP + -0x65) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abddd FUN_14d7abddd body=2 status=ok
// SIG undefined FUN_14d7abddd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abddd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abde2 FUN_14d7abde2 body=2 status=ok
// SIG undefined FUN_14d7abde2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abde2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abdef FUN_14d7abdef body=10 status=ok
// SIG undefined FUN_14d7abdef(void)

undefined8 FUN_14d7abdef(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14d7abe01 FUN_14d7abe01 body=2 status=ok
// SIG undefined FUN_14d7abe01(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abe01(void)

{
  in(0xe7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abe18 FUN_14d7abe18 body=17 status=ok
// SIG undefined FUN_14d7abe18(void)

undefined4 FUN_14d7abe18(longlong param_1,undefined2 param_2)

{
  undefined1 uVar1;
  byte bVar2;
  int in_EAX;
  uint uVar3;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *unaff_RDI;
  byte in_CF;
  int *piVar4;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  uVar3 = in_EAX + 0x2e02 + (uint)in_CF;
  piVar4 = (int *)(ulonglong)uVar3;
  bVar2 = *(byte *)(param_1 + -0x7c);
  *piVar4 = *piVar4 - uVar3;
  return CONCAT31((int3)(uVar3 >> 8),
                  *(undefined1 *)
                   (CONCAT62(unaff_0000001a,CONCAT11(unaff_BH ^ bVar2,unaff_BL)) +
                   ((ulonglong)piVar4 & 0xff)));
}



// FUNCTION 14d7abe2e FUN_14d7abe2e body=11 status=ok
// SIG undefined FUN_14d7abe2e(void)

int FUN_14d7abe2e(void)

{
  char cVar1;
  undefined8 in_RAX;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RBP;
  char in_CF;
  undefined8 uStack_10;
  
  piVar2 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),((char)in_RAX + -0x46) - in_CF);
  puVar3 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x01';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar3 = puVar3 + -1;
    *puVar3 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  return (int)piVar2 + *piVar2;
}



// FUNCTION 14d7abe41 FUN_14d7abe41 body=1 status=ok
// SIG undefined FUN_14d7abe41(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abe41(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abe4a FUN_14d7abe4a body=2 status=ok
// SIG undefined FUN_14d7abe4a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abe4a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abe4f FUN_14d7abe4f body=5 status=ok
// SIG undefined FUN_14d7abe4f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abe4f(void)

{
  bool in_CF;
  
  if (!in_CF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abe62 FUN_14d7abe62 body=4 status=ok
// SIG undefined FUN_14d7abe62(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abe62(void)

{
  char cVar1;
  code *pcVar2;
  char in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  ulonglong unaff_RBP;
  undefined1 in_OF;
  
  while (!(bool)in_OF) {
    unaff_RBP = (ulonglong)*(uint *)(unaff_RBP - 0x56d9f67e);
    *(char *)(unaff_RBP - 3) = *(char *)(unaff_RBP - 3) + in_AL;
    cVar1 = *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
    *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
         *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
    in_OF = SCARRY1(cVar1,in_AL);
  }
  pcVar2 = (code *)swi(5);
  (*pcVar2)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abe67 FUN_14d7abe67 body=1 status=ok
// SIG undefined FUN_14d7abe67(void)

void FUN_14d7abe67(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7abe71 FUN_14d7abe71 body=3 status=ok
// SIG undefined FUN_14d7abe71(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abe71(undefined4 param_1,undefined2 param_2)

{
  char in_AL;
  byte bVar1;
  char cVar2;
  byte in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RBX;
  longlong unaff_RDI;
  
  out(param_2,in_AL);
  bVar1 = (in_AL + -0x3c) - CARRY1((byte)((ushort)param_2 >> 8),in_AH);
  cVar2 = *(char *)(unaff_RBX + (ulonglong)bVar1);
  if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) + cVar2;
  *(uint *)(unaff_RDI + 0x41) =
       *(uint *)(unaff_RDI + 0x41) & CONCAT31((int3)((uint)param_1 >> 8),0xe3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abe97 FUN_14d7abe97 body=55 status=ok
// SIG undefined FUN_14d7abe97(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7abe97(char param_1)

{
  undefined4 in_EAX;
  uint uVar1;
  undefined4 unaff_EDI;
  undefined4 unaff_0000003c;
  undefined2 in_CS;
  byte *pbVar2;
  
  *(undefined2 *)CONCAT44(unaff_0000003c,unaff_EDI) = in_CS;
  uVar1 = in((short)in_EAX);
  pbVar2 = (byte *)(ulonglong)uVar1;
  _DAT_863a81ae = _DAT_863a81ae ^ 0x77c3e659;
  *pbVar2 = *pbVar2 << 1 | (char)*pbVar2 < '\0';
  FUN_14d7abeef(param_1 + (char)((uint)in_EAX >> 8));
  return;
}



// FUNCTION 14d7abed8 FUN_14d7abed8 body=3 status=ok
// SIG undefined FUN_14d7abed8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abed8(undefined8 param_1)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  undefined4 in_EAX;
  char cVar6;
  uint uVar8;
  byte bVar9;
  longlong unaff_RBX;
  byte *unaff_RSI;
  longlong in_FS_OFFSET;
  ulonglong unaff_retaddr;
  undefined2 uVar7;
  
  bVar4 = *unaff_RSI;
  pbVar1 = (byte *)(unaff_RBX + -0x221b4262);
  bVar3 = *pbVar1;
  bVar9 = (byte)((ulonglong)unaff_RBX >> 8);
  *pbVar1 = *pbVar1 + bVar9;
  cVar6 = (char)((int)in_EAX >> 0x1f);
  uVar7 = CONCAT11(-CARRY1(bVar3,bVar9),cVar6);
  pcVar2 = (char *)((ulonglong)CONCAT22((short)((int)in_EAX >> 0x1f),uVar7) + unaff_RBX * 8);
  *pcVar2 = *pcVar2 + cVar6;
  uVar8 = (uint)unaff_RBX & *(uint *)((ulonglong)(uint)(int)(short)(ushort)bVar4 * 2 + -0x1a11a8c0);
  uVar5 = (uint)(byte)(bVar4 + (char)((ulonglong)param_1 >> 8) + 0x5c);
  *(uint *)(ulonglong)uVar5 = *(uint *)(ulonglong)uVar5 & uVar5;
  out(unaff_RSI[1],uVar7);
  out(0xb3f8,*(char *)((ulonglong)CONCAT22((short)(uVar8 >> 0x10),CONCAT11(0xdf,(char)uVar8)) +
                      (unaff_retaddr & 0xff)) + -0x33);
  *(char *)(in_FS_OFFSET + 0x2900597f) = *(char *)(in_FS_OFFSET + 0x2900597f) << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abedd FUN_14d7abedd body=2 status=ok
// SIG undefined FUN_14d7abedd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abedd(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined8 in_RAX;
  undefined2 uVar6;
  uint uVar7;
  byte bVar8;
  longlong unaff_RBX;
  char *unaff_RSI;
  longlong in_FS_OFFSET;
  ulonglong unaff_retaddr;
  
  cVar4 = *unaff_RSI;
  pbVar1 = (byte *)(unaff_RBX + -0x221b4262);
  bVar3 = *pbVar1;
  bVar8 = (byte)((ulonglong)unaff_RBX >> 8);
  *pbVar1 = *pbVar1 + bVar8;
  uVar6 = CONCAT11(-CARRY1(bVar3,bVar8),(char)param_2);
  pcVar2 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),uVar6) + unaff_RBX * 8);
  *pcVar2 = *pcVar2 + (char)param_2;
  uVar7 = (uint)unaff_RBX &
          *(uint *)((ulonglong)(uint)(int)(short)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar4) * 2
                   + -0x1a11a8c0);
  uVar5 = CONCAT31((int3)(char)((ulonglong)in_RAX >> 8),
                   cVar4 + (char)((ulonglong)param_1 >> 8) + '\\');
  *(uint *)(ulonglong)uVar5 = *(uint *)(ulonglong)uVar5 & uVar5;
  out(unaff_RSI[1],uVar6);
  out(0xb3f8,*(char *)((ulonglong)CONCAT22((short)(uVar7 >> 0x10),CONCAT11(0xdf,(char)uVar7)) +
                      (unaff_retaddr & 0xff)) + -0x33);
  *(char *)(in_FS_OFFSET + 0x2900597f) = *(char *)(in_FS_OFFSET + 0x2900597f) << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abeeb FUN_14d7abeeb body=2 status=ok
// SIG undefined FUN_14d7abeeb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abeeb(undefined8 param_1,double *param_2)

{
  char cVar1;
  undefined8 in_RAX;
  undefined7 uVar3;
  uint *puVar2;
  uint unaff_EBX;
  uint uVar4;
  undefined1 *unaff_RSI;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  float10 in_ST0;
  
  *param_2 = (double)in_ST0;
  cVar1 = *unaff_RDI;
  *unaff_RDI = -*unaff_RDI;
  uVar3 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar1 = (char)in_RAX + -0x26 + (cVar1 != '\0');
  uVar4 = unaff_EBX & *(uint *)(CONCAT71(uVar3,cVar1) * 2 + -0x1a11a8c0);
  puVar2 = (uint *)CONCAT71(uVar3,cVar1 + (char)((ulonglong)param_1 >> 8) + '\\');
  *puVar2 = *puVar2 & (uint)puVar2;
  out(*unaff_RSI,(short)param_2);
  out(0xb3f8,*(char *)((ulonglong)CONCAT22((short)(uVar4 >> 0x10),CONCAT11(0xdf,(char)uVar4)) +
                      ((ulonglong)unaff_RDI & 0xff)) + -0x33);
  *(char *)(in_FS_OFFSET + 0x2900597f) = *(char *)(in_FS_OFFSET + 0x2900597f) << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abeef FUN_14d7abeef body=10 status=ok
// SIG undefined FUN_14d7abeef(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abeef(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  longlong in_RAX;
  uint *puVar2;
  uint uVar3;
  longlong unaff_RBX;
  undefined1 *unaff_RSI;
  ulonglong unaff_RDI;
  longlong in_FS_OFFSET;
  
  pcVar1 = (char *)(param_2 + unaff_RBX * 8);
  *pcVar1 = *pcVar1 + (char)param_2;
  uVar3 = (uint)unaff_RBX & *(uint *)(in_RAX * 2 + -0x1a11a8c0);
  puVar2 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                            (char)in_RAX + (char)((ulonglong)param_1 >> 8) + '\\');
  *puVar2 = *puVar2 & (uint)puVar2;
  out(*unaff_RSI,(short)param_2);
  out(0xb3f8,*(char *)((ulonglong)CONCAT22((short)(uVar3 >> 0x10),CONCAT11(0xdf,(char)uVar3)) +
                      (unaff_RDI & 0xff)) + -0x33);
  *(char *)(in_FS_OFFSET + 0x2900597f) = *(char *)(in_FS_OFFSET + 0x2900597f) << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abefa FUN_14d7abefa body=31 status=ok
// SIG undefined FUN_14d7abefa(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abefa(undefined8 param_1,undefined2 param_2)

{
  undefined1 unaff_BL;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  undefined1 *unaff_RSI;
  ulonglong unaff_RDI;
  longlong in_FS_OFFSET;
  
  FUN_14d9c632b();
  out(*unaff_RSI,param_2);
  out(0xb3f8,*(char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(0xdf,unaff_BL))) +
                      (unaff_RDI & 0xff)) + -0x33);
  *(char *)(in_FS_OFFSET + 0x2900597f) = *(char *)(in_FS_OFFSET + 0x2900597f) << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abf30 FUN_14d7abf30 body=10 status=ok
// SIG undefined FUN_14d7abf30(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abf30(void)

{
  char *pcVar1;
  longlong unaff_RDI;
  longlong in_FS_OFFSET;
  
  pcVar1 = (char *)(in_FS_OFFSET + unaff_RDI + 0x40);
  *pcVar1 = *pcVar1 << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abf51 FUN_14d7abf51 body=16 status=ok
// SIG undefined FUN_14d7abf51(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abf51(undefined8 param_1,undefined2 param_2)

{
  char cVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  undefined4 uVar2;
  
  out(param_2,(byte)in_EAX);
  if ((in_EAX & 0x11) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar1 = *(char *)(unaff_RBX + (ulonglong)(byte)in_EAX);
  uVar2 = CONCAT31((int3)(in_EAX >> 8),cVar1);
  *(char *)CONCAT44(in_register_00000004,uVar2) =
       *(char *)CONCAT44(in_register_00000004,uVar2) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abf68 FUN_14d7abf68 body=3 status=ok
// SIG undefined FUN_14d7abf68(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abf68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abf79 FUN_14d7abf79 body=12 status=ok
// SIG undefined FUN_14d7abf79(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7abf8b) */
/* WARNING: Removing unreachable block (ram,0x00014d7abf8f) */
/* WARNING: Removing unreachable block (ram,0x00014d7abf55) */

void FUN_14d7abf79(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  char cVar4;
  char cVar5;
  undefined6 uVar6;
  longlong unaff_RDI;
  byte *unaff_retaddr;
  
  uVar6 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar5 = (char)((ulonglong)param_1 >> 8);
  cVar4 = (char)param_1 * '\x02' + '\x01';
  *unaff_retaddr = *unaff_retaddr & (byte)unaff_retaddr;
  if (CONCAT62(uVar6,CONCAT11(cVar5,cVar4)) != 0) {
    iVar2 = *(int *)((ulonglong)((uint)unaff_retaddr | 0x63643e) | 0x89) * -0x7c998277;
    unaff_retaddr[CONCAT62(uVar6,CONCAT11(cVar5,cVar4)) * 4] =
         unaff_retaddr[CONCAT62(uVar6,CONCAT11(cVar5,cVar4)) * 4] + (char)((ulonglong)param_2 >> 8);
    out((short)param_2,(char)iVar2);
    piVar1 = (int *)(unaff_RDI + 1);
    iVar2 = CONCAT31((int3)((uint)iVar2 >> 8),uRam643ff5389300457e) + *piVar1;
    *(char *)piVar1 = *(char *)piVar1 + (char)*(undefined4 *)(unaff_retaddr + -0x70);
    puVar3 = (uint *)(ulonglong)CONCAT31((int3)((uint)iVar2 >> 8),(char)iVar2 + cVar5);
    unaff_retaddr[0x27bb05f4] = unaff_retaddr[0x27bb05f4] + cVar4;
    *puVar3 = *puVar3 >> 0x15 | *puVar3 << 0xb;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abf96 FUN_14d7abf96 body=1 status=ok
// SIG undefined FUN_14d7abf96(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abf96(void)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abf9f FUN_14d7abf9f body=2 status=ok
// SIG undefined FUN_14d7abf9f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abf9f(undefined8 param_1)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  char cVar8;
  int iVar5;
  uint *puVar7;
  undefined8 unaff_RBX;
  longlong unaff_RDI;
  byte *pbVar6;
  
  iVar5 = in(0x7d);
  iVar5 = iVar5 + -0x10bd003f;
  bVar4 = (byte)iVar5;
  cVar8 = (char)((uint)iVar5 >> 8) + (char)((ulonglong)unaff_RBX >> 8);
  uVar3 = CONCAT22((short)((uint)iVar5 >> 0x10),CONCAT11(cVar8,bVar4));
  pbVar6 = (byte *)(ulonglong)uVar3;
  if ((POPCOUNT(cVar8) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar4;
  bRam00000000b602ef04 =
       (byte)(CONCAT11(CARRY1(bVar1,bVar4),bRam00000000b602ef04) >> 3) | bRam00000000b602ef04 << 6;
  piVar2 = (int *)(unaff_RDI + 1);
  iVar5 = CONCAT31((int3)(uVar3 >> 8),uRam643ff5389300457e) + *piVar2;
  *(char *)piVar2 = *(char *)piVar2 + (char)uRam00000000b602ee20;
  puVar7 = (uint *)(ulonglong)
                   CONCAT31((int3)((uint)iVar5 >> 8),(char)iVar5 + (char)((ulonglong)param_1 >> 8));
  cRam00000000ddbdf484 = cRam00000000ddbdf484 + (char)param_1;
  *puVar7 = *puVar7 >> 0x15 | *puVar7 << 0xb;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abfa3 FUN_14d7abfa3 body=3 status=ok
// SIG undefined FUN_14d7abfa3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abfa3(void)

{
  in(0x75);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abfac FUN_14d7abfac body=14 status=ok
// SIG undefined FUN_14d7abfac(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abfac(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abfc1 FUN_14d7abfc1 body=1 status=ok
// SIG undefined FUN_14d7abfc1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abfc1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abfe4 FUN_14d7abfe4 body=9 status=ok
// SIG undefined FUN_14d7abfe4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abfe4(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  undefined8 in_RAX;
  uint *puVar4;
  longlong unaff_RDI;
  longlong unaff_retaddr;
  
  iVar3 = *(int *)((ulonglong)((uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),0xbe) | 0x63643e) |
                  0x89) * -0x7c998277;
  pcVar1 = (char *)(unaff_retaddr + param_1 * 4);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  out((short)param_2,(char)iVar3);
  piVar2 = (int *)(unaff_RDI + 1);
  iVar3 = CONCAT31((int3)((uint)iVar3 >> 8),uRam643ff5389300457e) + *piVar2;
  *(char *)piVar2 = *(char *)piVar2 + (char)*(undefined4 *)(unaff_retaddr + -0x70);
  puVar4 = (uint *)(ulonglong)
                   CONCAT31((int3)((uint)iVar3 >> 8),(char)iVar3 + (char)((ulonglong)param_1 >> 8));
  *(char *)(unaff_retaddr + 0x27bb05f4) = *(char *)(unaff_retaddr + 0x27bb05f4) + (char)param_1;
  *puVar4 = *puVar4 >> 0x15 | *puVar4 << 0xb;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abfed FUN_14d7abfed body=3 status=ok
// SIG undefined FUN_14d7abfed(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abfed(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  ulonglong in_RAX;
  uint *puVar4;
  longlong unaff_RDI;
  longlong unaff_retaddr;
  
  iVar3 = *(int *)(in_RAX | 0x89) * -0x7c998277;
  pcVar1 = (char *)(unaff_retaddr + param_1 * 4);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  out((short)param_2,(char)iVar3);
  piVar2 = (int *)(unaff_RDI + 1);
  iVar3 = CONCAT31((int3)((uint)iVar3 >> 8),uRam643ff5389300457e) + *piVar2;
  *(char *)piVar2 = *(char *)piVar2 + (char)*(undefined4 *)(unaff_retaddr + -0x70);
  puVar4 = (uint *)(ulonglong)
                   CONCAT31((int3)((uint)iVar3 >> 8),(char)iVar3 + (char)((ulonglong)param_1 >> 8));
  *(char *)(unaff_retaddr + 0x27bb05f4) = *(char *)(unaff_retaddr + 0x27bb05f4) + (char)param_1;
  *puVar4 = *puVar4 >> 0x15 | *puVar4 << 0xb;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7abff2 FUN_14d7abff2 body=6 status=ok
// SIG undefined FUN_14d7abff2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7abff2(void)

{
  int *in_RAX;
  longlong unaff_RBP;
  undefined4 unaff_EDI;
  
  *(undefined4 *)(unaff_RBP + 0x66) = unaff_EDI;
  *in_RAX = *in_RAX + 0x34;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac001 FUN_14d7ac001 body=3 status=ok
// SIG undefined FUN_14d7ac001(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac001(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 in_RAX;
  uint *puVar3;
  longlong unaff_RDI;
  bool in_ZF;
  longlong unaff_retaddr;
  
  if (!in_ZF) {
    piVar1 = (int *)(unaff_RDI + 1);
    iVar2 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),uRam643ff5389300457e) + *piVar1;
    *(char *)piVar1 = *(char *)piVar1 + (char)*(undefined4 *)(unaff_retaddr + -0x70);
    puVar3 = (uint *)(ulonglong)
                     CONCAT31((int3)((uint)iVar2 >> 8),(char)iVar2 + (char)((ulonglong)param_1 >> 8)
                             );
    *(char *)(unaff_retaddr + 0x27bb05f4) = *(char *)(unaff_retaddr + 0x27bb05f4) + (char)param_1;
    *puVar3 = *puVar3 >> 0x15 | *puVar3 << 0xb;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac029 FUN_14d7ac029 body=2 status=ok
// SIG undefined FUN_14d7ac029(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac029(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac03a FUN_14d7ac03a body=2 status=ok
// SIG undefined FUN_14d7ac03a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac03a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac03e FUN_14d7ac03e body=15 status=ok
// SIG undefined FUN_14d7ac03e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac03e(char param_1,undefined2 param_2)

{
  char cVar1;
  char *in_RAX;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  undefined4 *unaff_RSI;
  char *unaff_RDI;
  char in_CF;
  bool in_OF;
  undefined8 uStack_10;
  
  puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\b';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  if (!in_OF) {
    in(param_2);
    *(undefined4 *)((ulonglong)in_RAX & 0xffffffff) = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)((longlong)in_RAX * 2) = (*(char *)((longlong)in_RAX * 2) - param_1) - in_CF;
  *in_RAX = *in_RAX + (char)in_RAX;
  *unaff_RDI = (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac05a FUN_14d7ac05a body=3 status=ok
// SIG undefined FUN_14d7ac05a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac05a(undefined8 param_1,byte param_2)

{
  ulonglong unaff_RBX;
  
  *(byte *)(unaff_RBX & 0xffffffff) = *(byte *)(unaff_RBX & 0xffffffff) ^ param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac06a FUN_14d7ac06a body=7 status=ok
// SIG undefined FUN_14d7ac06a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac06a(void)

{
  undefined1 in_AL;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac085 FUN_14d7ac085 body=9 status=ok
// SIG undefined FUN_14d7ac085(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7ac085(undefined8 param_1,char param_2)

{
  char *pcVar1;
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  undefined4 unaff_0000002c;
  
  cRam00000000cef045fd = cRam00000000cef045fd + (char)in_EAX;
  pcVar1 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x46ae72);
  _DAT_a0327590082dc33 = in_EAX;
  *pcVar1 = *pcVar1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac08f FUN_14d7ac08f body=18 status=ok
// SIG undefined FUN_14d7ac08f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac08f(undefined8 param_1,char param_2)

{
  char *pcVar1;
  undefined4 unaff_EBP;
  undefined4 unaff_0000002c;
  
  pcVar1 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x46ae72);
  *pcVar1 = *pcVar1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac0a2 FUN_14d7ac0a2 body=3 status=ok
// SIG undefined FUN_14d7ac0a2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac0a2(longlong param_1,int *param_2)

{
  int *piVar1;
  uint *puVar2;
  unkbyte10 Var3;
  uint in_EAX;
  longlong unaff_RSI;
  char *unaff_RDI;
  char unaff_R13B;
  bool in_CF;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  
  if (!in_CF) {
    *unaff_RDI = *unaff_RDI + unaff_R13B;
    LOCK();
    piVar1 = (int *)(param_1 * 9 + 0x2bcd6c);
    *piVar1 = *piVar1 - (int)param_1;
    UNLOCK();
    LOCK();
    *param_2 = (int)param_1;
    UNLOCK();
    puVar2 = (uint *)(param_2 + (ulonglong)in_EAX * 2 + -0x17937dd5);
    *puVar2 = *puVar2 >> 7 | *puVar2 << 0x19;
    if (-1 < (int)*puVar2) {
      in_ST0 = in_ST1;
    }
    LOCK();
    *(undefined1 *)(unaff_RSI + 0x5bea93) = 0xf6;
    UNLOCK();
    Var3 = to_bcd(in_ST0);
    *(unkbyte10 *)param_2 = Var3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac0b8 FUN_14d7ac0b8 body=10 status=ok
// SIG undefined FUN_14d7ac0b8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac0b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac0c5 FUN_14d7ac0c5 body=9 status=ok
// SIG undefined FUN_14d7ac0c5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac0c5(undefined8 param_1,unkbyte10 *param_2)

{
  unkbyte10 Var1;
  undefined8 in_RAX;
  longlong unaff_RSI;
  char in_CF;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  
  if (in_CF == '\0') {
    in_ST0 = in_ST1;
  }
  LOCK();
  *(char *)(unaff_RSI + 0x5bea93) = (char)((ulonglong)in_RAX >> 8);
  UNLOCK();
  Var1 = to_bcd(in_ST0);
  *param_2 = Var1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac0ce FUN_14d7ac0ce body=18 status=ok
// SIG undefined FUN_14d7ac0ce(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac0ce(undefined8 param_1,unkbyte10 *param_2)

{
  unkbyte10 Var1;
  unkbyte10 in_ST0;
  
  Var1 = to_bcd(in_ST0);
  *param_2 = Var1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac0e3 thunk_EXT_FUN_32df5bb4 body=7 status=ok
// SIG undefined thunk_EXT_FUN_32df5bb4(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_32df5bb4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac0eb FUN_14d7ac0eb body=1 status=ok
// SIG undefined FUN_14d7ac0eb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac0eb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac0ef FUN_14d7ac0ef body=4 status=ok
// SIG undefined FUN_14d7ac0ef(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac0ef(byte param_1)

{
  byte *in_RAX;
  char *pcVar1;
  longlong unaff_RBX;
  bool in_OF;
  
  if (in_OF) {
    pcVar1 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                              *(undefined1 *)(unaff_RBX + ((ulonglong)in_RAX & 0xff)));
    *pcVar1 = *pcVar1 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = *in_RAX << (param_1 & 7) | *in_RAX >> 8 - (param_1 & 7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac0f4 FUN_14d7ac0f4 body=4 status=ok
// SIG undefined FUN_14d7ac0f4(void)

void FUN_14d7ac0f4(undefined8 param_1,undefined8 param_2)

{
  char *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI + ((byte)((ulonglong)param_2 >> 8) | (byte)param_2);
  return;
}



// FUNCTION 14d7ac0fd FUN_14d7ac0fd body=9 status=ok
// SIG undefined FUN_14d7ac0fd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac0fd(undefined4 param_1,unkbyte10 *param_2)

{
  uint *puVar1;
  unkbyte10 Var2;
  char cVar3;
  byte bVar4;
  undefined8 in_RAX;
  byte *pbVar5;
  char cVar8;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char in_CF;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  char cVar6;
  char cVar7;
  
  cVar7 = (char)((ulonglong)in_RAX >> 8);
  cVar8 = (char)((ulonglong)unaff_RBX >> 8);
  cVar3 = cVar7 - cVar8;
  cVar6 = cVar3 - in_CF;
  pbVar5 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar6,(char)in_RAX));
  if (cVar6 == '\0' || (SBORROW1(cVar7,cVar8) != SBORROW1(cVar3,in_CF)) != cVar6 < '\0') {
    bVar4 = (byte)param_1 & 7;
    *pbVar5 = *pbVar5 << bVar4 | *pbVar5 >> 8 - bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  LOCK();
  *(undefined4 *)param_2 = param_1;
  UNLOCK();
  puVar1 = (uint *)((longlong)param_2 + unaff_RBP * 8 + -0x5e4df754);
  *puVar1 = *puVar1 >> 7 | *puVar1 << 0x19;
  if (-1 < (int)*puVar1) {
    in_ST0 = in_ST1;
  }
  LOCK();
  *(undefined1 *)(unaff_RSI + 0x5bea93) = 0xf6;
  UNLOCK();
  Var2 = to_bcd(in_ST0);
  *param_2 = Var2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac10f FUN_14d7ac10f body=1 status=ok
// SIG undefined FUN_14d7ac10f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac10f(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac121 FUN_14d7ac121 body=8 status=ok
// SIG undefined FUN_14d7ac121(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac121(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  byte *unaff_RSI;
  ulonglong unaff_RDI;
  bool in_SF;
  
  if (in_SF) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uRam000000011fcae733 = uRam000000011fcae733 & 0xf7133fea;
  pcVar1 = (char *)(param_2 + 0x151bd08f + (unaff_RDI & 0xffffffff));
  *pcVar1 = *pcVar1 + (char)((unaff_RDI & 0xffffffff) >> 8);
  *unaff_RSI = ~*unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac13e FUN_14d7ac13e body=3 status=ok
// SIG undefined FUN_14d7ac13e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac13e(void)

{
  undefined8 unaff_RBP;
  
  uRamd8057580001e48c5 = (int)CONCAT71((uint7)((ulonglong)unaff_RBP >> 8) & 0xffffff,0xb6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac147 FUN_14d7ac147 body=8 status=ok
// SIG undefined FUN_14d7ac147(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac147(void)

{
  uint *puVar1;
  longlong in_RAX;
  longlong unaff_RBP;
  
  puVar1 = (uint *)(unaff_RBP + -0x28 + in_RAX);
  *puVar1 = *puVar1 ^ 0xf77d16fa;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac154 FUN_14d7ac154 body=19 status=ok
// SIG undefined FUN_14d7ac154(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac154(void)

{
  byte *pbVar1;
  undefined1 in_AL;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  
  pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x1a);
  *pbVar1 = *pbVar1 | unaff_BH;
  DAT_b585f5b0e55a8367 = in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac173 FUN_14d7ac173 body=6 status=ok
// SIG undefined FUN_14d7ac173(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac173(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac185 FUN_14d7ac185 body=11 status=ok
// SIG undefined FUN_14d7ac185(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7ac1dd) */
/* WARNING: Removing unreachable block (ram,0x00014d7ac1f5) */
/* WARNING: Removing unreachable block (ram,0x00014d7ac1c8) */

void FUN_14d7ac185(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  byte in_AL;
  undefined1 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  unaff_RDI[1] = in_AL & 0x42 ^ 0x53;
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



// FUNCTION 14d7ac1b3 FUN_14d7ac1b3 body=10 status=ok
// SIG undefined FUN_14d7ac1b3(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7ac1f1) overlaps instruction at (ram,0x00014d7ac1f0)
    */

void FUN_14d7ac1b3(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  undefined8 in_RAX;
  byte bVar4;
  char cVar5;
  longlong unaff_RBX;
  undefined4 *unaff_RSI;
  ulonglong uVar3;
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  cVar2 = (char)in_RAX + 'l';
  uVar3 = CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2);
  param_1 = param_1 + -1;
  if (param_1 == 0 || cVar2 == '\0') {
    FUN_14d7ac173();
    return;
  }
  while( true ) {
    uVar3 = uVar3 & 0xffffffff;
    param_1 = param_1 + -1;
    if (param_1 == 0) break;
    bVar4 = (byte)param_1;
    *(char *)(uVar3 * 2) = *(char *)(uVar3 * 2) + bVar4;
    cVar5 = cVar5 + bVar4;
    out(*unaff_RSI,CONCAT11(cVar5,(char)param_2));
    param_1 = CONCAT71((int7)((ulonglong)param_1 >> 8),bVar4 ^ *(byte *)(unaff_RBX + 0x2a000065));
    pcVar1 = (char *)((uVar3 - 0x1a9b6949) + param_1 * 8);
    *pcVar1 = *pcVar1 + (DAT_5353007761b98900 & 0x70);
    unaff_RSI = unaff_RSI + 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac1b7 FUN_14d7ac1b7 body=7 status=ok
// SIG undefined FUN_14d7ac1b7(void)

void FUN_14d7ac1b7(void)

{
  FUN_14d7ac173();
  return;
}



// FUNCTION 14d7ac1c4 FUN_14d7ac1c4 body=2 status=ok
// SIG undefined FUN_14d7ac1c4(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7ac1c8) overlaps instruction at (ram,0x00014d7ac1c6)
    */

void FUN_14d7ac1c4(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  char cVar3;
  longlong unaff_RBX;
  undefined4 *unaff_RSI;
  undefined4 *puVar4;
  ulonglong unaff_RDI;
  
  cVar3 = (char)((ulonglong)param_2 >> 8);
  while( true ) {
    puVar4 = unaff_RSI + (ulonglong)((*(ulonglong *)register0x00000020 & 0x400) != 0) * -2 + 1;
    out(*unaff_RSI,CONCAT11(cVar3,(char)param_2));
    uVar2 = CONCAT71((int7)(in_RAX >> 8),DAT_5353007761b98900);
    cVar3 = cVar3 + (byte)param_1;
    unaff_RSI = puVar4 + (ulonglong)((*(ulonglong *)register0x00000020 & 0x400) != 0) * -2 + 1;
    out(*puVar4,CONCAT11(cVar3,(char)param_2));
    param_1 = CONCAT71((int7)((ulonglong)param_1 >> 8),
                       (byte)param_1 ^ *(byte *)(unaff_RBX + 0x2a000065));
    pcVar1 = (char *)((unaff_RDI - 0x1a9b6949) + param_1 * 8);
    *pcVar1 = *pcVar1 + (DAT_5353007761b98900 & 0x70);
    in_RAX = unaff_RDI & 0xffffffff;
    unaff_RDI = uVar2 & 0xffffff70;
    register0x00000020 = (BADSPACEBASE *)(*(ulonglong *)((longlong)register0x00000020 + 8) + 8);
    param_1 = param_1 + -1;
    if (param_1 == 0) break;
    *(char *)(unaff_RDI * 2) = *(char *)(unaff_RDI * 2) + (char)param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac1c9 FUN_14d7ac1c9 body=20 status=ok
// SIG undefined FUN_14d7ac1c9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac1c9(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  char cVar4;
  longlong unaff_RBX;
  undefined4 *unaff_RSI;
  ulonglong unaff_RDI;
  
  cVar4 = (char)((ulonglong)param_2 >> 8);
  uVar3 = in_RAX & 0xffffffffffffff00;
  while( true ) {
    uVar2 = CONCAT71((int7)(uVar3 >> 8),DAT_5353007761b98900);
    cVar4 = cVar4 + (byte)param_1;
    out(*unaff_RSI,CONCAT11(cVar4,(char)param_2));
    param_1 = CONCAT71((int7)((ulonglong)param_1 >> 8),
                       (byte)param_1 ^ *(byte *)(unaff_RBX + 0x2a000065));
    pcVar1 = (char *)((unaff_RDI - 0x1a9b6949) + param_1 * 8);
    *pcVar1 = *pcVar1 + (DAT_5353007761b98900 & 0x70);
    uVar3 = unaff_RDI & 0xffffffff;
    unaff_RDI = uVar2 & 0xffffff70;
    param_1 = param_1 + -1;
    if (param_1 == 0) break;
    *(char *)(unaff_RDI * 2) = *(char *)(unaff_RDI * 2) + (char)param_1;
    unaff_RSI = unaff_RSI + 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac1eb FUN_14d7ac1eb body=3 status=ok
// SIG undefined FUN_14d7ac1eb(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7ac1ed) overlaps instruction at (ram,0x00014d7ac1eb)
    */

void FUN_14d7ac1eb(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  longlong unaff_RBX;
  undefined4 *unaff_RSI;
  
  cVar4 = (char)((ulonglong)param_2 >> 8);
  while( true ) {
    uVar2 = in(0x5d);
    param_1 = param_1 + -1;
    if (param_1 == 0) break;
    pcVar1 = (char *)((ulonglong)uVar2 * 2);
    bVar3 = (byte)param_1;
    *pcVar1 = *pcVar1 + bVar3;
    cVar4 = cVar4 + bVar3;
    out(*unaff_RSI,CONCAT11(cVar4,(char)param_2));
    param_1 = CONCAT71((int7)((ulonglong)param_1 >> 8),bVar3 ^ *(byte *)(unaff_RBX + 0x2a000065));
    pcVar1 = (char *)(((ulonglong)uVar2 - 0x1a9b6949) + param_1 * 8);
    *pcVar1 = *pcVar1 + (DAT_5353007761b98900 & 0x70);
    unaff_RSI = unaff_RSI + 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac1f8 FUN_14d7ac1f8 body=3 status=ok
// SIG undefined FUN_14d7ac1f8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac1f8(undefined8 param_1,undefined2 param_2)

{
  undefined1 *unaff_RSI;
  bool in_SF;
  
  out(*unaff_RSI,param_2);
  if (!in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac205 FUN_14d7ac205 body=3 status=ok
// SIG undefined FUN_14d7ac205(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac205(char *param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint *in_RAX;
  byte unaff_BL;
  char unaff_BH;
  longlong unaff_RBP;
  int *unaff_RDI;
  
  *in_RAX = *in_RAX ^ (uint)in_RAX;
  *param_1 = *param_1 + unaff_BH;
  pbVar1 = (byte *)(param_1 + 0xf);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + unaff_BL;
  *unaff_RDI = (*unaff_RDI - (int)param_1) - (uint)CARRY1(bVar2,unaff_BL);
  *(char *)(unaff_RBP + 0x1503db) = *(char *)(unaff_RBP + 0x1503db) + -0x3a;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac20a FUN_14d7ac20a body=7 status=ok
// SIG undefined FUN_14d7ac20a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac20a(char *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte unaff_BL;
  char unaff_BH;
  longlong unaff_RBP;
  int *unaff_RDI;
  
  *param_1 = *param_1 + unaff_BH;
  pbVar1 = (byte *)(param_1 + 0xf);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + unaff_BL;
  *unaff_RDI = (*unaff_RDI - (int)param_1) - (uint)CARRY1(bVar2,unaff_BL);
  *(char *)(unaff_RBP + 0x1503db) = *(char *)(unaff_RBP + 0x1503db) + -0x3a;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac214 FUN_14d7ac214 body=3 status=ok
// SIG undefined FUN_14d7ac214(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac214(void)

{
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RBP;
  
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) << 1 |
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) < '\0';
  *(char *)(unaff_RBP + 0x1503db) = *(char *)(unaff_RBP + 0x1503db) + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac229 FUN_14d7ac229 body=6 status=ok
// SIG undefined FUN_14d7ac229(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac229(void)

{
  char *pcVar1;
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_BH;
  
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH * '\x02',in_AL)) + -0x614cc939);
  DAT_ddef3f82 = in_AL;
  *pcVar1 = *pcVar1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac230 FUN_14d7ac230 body=14 status=ok
// SIG undefined FUN_14d7ac230(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac230(longlong param_1)

{
  char *pcVar1;
  uint uVar2;
  undefined1 uVar3;
  byte in_AH;
  undefined6 in_register_00000002;
  char unaff_BH;
  
  uVar3 = in(2);
  uVar2 = *(uint *)(param_1 + 0x59);
  *(uint *)(param_1 + 0x59) = uVar2 << 0x18 | (uint)(CONCAT14((in_AH & 1) != 0,uVar2) >> 9);
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,uVar3)) + -0x614cc939);
  *pcVar1 = *pcVar1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac241 FUN_14d7ac241 body=3 status=ok
// SIG undefined FUN_14d7ac241(void)

void FUN_14d7ac241(void)

{
  FUN_14d7ac229();
  return;
}



// FUNCTION 14d7ac24b FUN_14d7ac24b body=7 status=ok
// SIG undefined FUN_14d7ac24b(void)

uint FUN_14d7ac24b(void)

{
  uint unaff_R13D;
  
  return unaff_R13D & 0x24e7c7e6;
}



// FUNCTION 14d7ac25c FUN_14d7ac25c body=3 status=ok
// SIG undefined FUN_14d7ac25c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac25c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac278 FUN_14d7ac278 body=6 status=ok
// SIG undefined FUN_14d7ac278(void)

void FUN_14d7ac278(void)

{
  longlong unaff_RDI;
  
                    /* WARNING: Could not recover jumptable at 0x00014d7ac278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulonglong)*(uint *)(unaff_RDI + 0x3900f156))();
  return;
}



// FUNCTION 14d7ac28a FUN_14d7ac28a body=3 status=ok
// SIG undefined FUN_14d7ac28a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac28a(void)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  float10 in_ST0;
  undefined8 uStack_10;
  
  *(int *)((longlong)unaff_RBP + -7) = (int)ROUND(in_ST0);
  puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x14';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac298 thunk_FUN_14d7ac304 body=2 status=ok
// SIG undefined thunk_FUN_14d7ac304(void)

void thunk_FUN_14d7ac304(void)

{
  return;
}



// FUNCTION 14d7ac2a7 FUN_14d7ac2a7 body=8 status=ok
// SIG undefined FUN_14d7ac2a7(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7ac278) overlaps instruction at (ram,0x00014d7ac277)
    */

void FUN_14d7ac2a7(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  undefined1 uVar4;
  code *pcVar5;
  byte bVar6;
  byte bVar8;
  short in_AX;
  uint uVar7;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RSI;
  undefined1 *unaff_RDI;
  bool in_CF;
  bool in_ZF;
  unkbyte10 in_ST6;
  
  uVar7 = (uint)in_AX;
  if (in_CF || in_ZF) {
    *(char *)((ulonglong)uVar7 - 0x614cc939) = *(char *)((ulonglong)uVar7 - 0x614cc939) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar3 = (int *)(unaff_RDI + 1);
  uVar4 = in((short)param_2);
  *unaff_RDI = uVar4;
  *piVar3 = (*piVar3 - uVar7) - (uint)in_CF;
  bVar8 = (byte)((ulonglong)param_2 >> 8);
  if (!SCARRY1(unaff_BH,bVar8)) {
    bVar8 = (byte)(uVar7 - *(int *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH + bVar8,unaff_BL)) +
                                   0x20ee2172) >> 8);
    *unaff_RSI = *unaff_RSI + bVar8;
    ffree(in_ST6);
    if (-1 < (char)((unaff_BL + (char)((ulonglong)param_1 >> 8)) - (bVar8 ^ 0xc4))) {
      return;
    }
    *(char *)piVar3 = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar1 = unaff_RDI + -0x56a6a45c;
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar8;
  bVar6 = in((short)param_2);
  if (*pbVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!CARRY1(bVar2,bVar8)) {
    if ((bool)((char)param_2 - *param_1) ==
        bVar6 < *(byte *)(ulonglong)CONCAT31((int3)(char)((ushort)in_AX >> 8),bVar6)) {
      pcVar5 = (code *)swi(1);
      (*pcVar5)();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014d7ac278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulonglong)*(uint *)(unaff_RDI + 0x3900f158))();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac2bd FUN_14d7ac2bd body=7 status=ok
// SIG undefined FUN_14d7ac2bd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac2bd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac2d7 FUN_14d7ac2d7 body=1 status=ok
// SIG undefined FUN_14d7ac2d7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac2d7(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac2e6 FUN_14d7ac2e6 body=6 status=ok
// SIG undefined FUN_14d7ac2e6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac2e6(void)

{
  int unaff_ESP;
  longlong unaff_RDI;
  byte in_CF;
  
  *(int *)(unaff_RDI + -0x25b1d1f2) = *(int *)(unaff_RDI + -0x25b1d1f2) + unaff_ESP + (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac2fd FUN_14d7ac2fd body=6 status=ok
// SIG undefined FUN_14d7ac2fd(void)

void FUN_14d7ac2fd(void)

{
  undefined1 unaff_BL;
  longlong unaff_RBP;
  
  *(undefined1 *)(unaff_RBP + 0x295f808f) = unaff_BL;
  return;
}



// FUNCTION 14d7ac304 FUN_14d7ac304 body=1 status=ok
// SIG undefined FUN_14d7ac304(void)

void FUN_14d7ac304(void)

{
  return;
}



// FUNCTION 14d7ac305 FUN_14d7ac305 body=13 status=ok
// SIG undefined FUN_14d7ac305(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac305(undefined8 param_1,undefined2 param_2)

{
  uint *puVar1;
  undefined1 in_AL;
  uint unaff_ESI;
  int unaff_EDI;
  longlong unaff_R14;
  char unaff_R15B;
  
  out(param_2,in_AL);
  puVar1 = (uint *)((ulonglong)(unaff_EDI - unaff_ESI) + 0x2f);
  *puVar1 = *puVar1 ^ unaff_ESI;
  cRam0000000019aa72ac = cRam0000000019aa72ac - (char)((ulonglong)param_1 >> 8);
  *(char *)(unaff_R14 + 0x44ca9ca9) = *(char *)(unaff_R14 + 0x44ca9ca9) + unaff_R15B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac312 FUN_14d7ac312 body=6 status=ok
// SIG undefined FUN_14d7ac312(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac312(undefined8 param_1)

{
  longlong unaff_RSI;
  longlong unaff_R14;
  char unaff_R15B;
  
  *(char *)(unaff_RSI + 0x19776100) =
       *(char *)(unaff_RSI + 0x19776100) - (char)((ulonglong)param_1 >> 8);
  *(char *)(unaff_R14 + 0x44ca9ca9) = *(char *)(unaff_R14 + 0x44ca9ca9) + unaff_R15B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac32d FUN_14d7ac32d body=11 status=ok
// SIG undefined FUN_14d7ac32d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac32d(void)

{
  undefined1 in_AL;
  
  DAT_5e0025a8952f0079 = in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac342 FUN_14d7ac342 body=6 status=ok
// SIG undefined FUN_14d7ac342(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac342(undefined8 param_1,undefined2 param_2)

{
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac34b FUN_14d7ac34b body=2 status=ok
// SIG undefined FUN_14d7ac34b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac34b(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac360 FUN_14d7ac360 body=2 status=ok
// SIG undefined FUN_14d7ac360(void)

/* WARNING: Control flow encountered bad instruction data */

uint FUN_14d7ac360(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  char cVar3;
  int in_EAX;
  ulonglong uVar4;
  longlong unaff_RBX;
  char *unaff_RSI;
  longlong unaff_RDI;
  
  uVar2 = (longlong)in_EAX * (longlong)*(int *)(unaff_RDI + 0x51603 + param_2 * 4);
  uVar4 = uVar2 & 0xffffffff;
  *(char *)(uVar4 - 0x55) =
       *(char *)(uVar4 - 0x55) + (char)(uVar2 >> 0x28) + ((longlong)(int)uVar2 != uVar2);
  cVar3 = (char)uVar4 + '8';
  if ((POPCOUNT(cVar3) & 1U) != 0) {
    uVar1 = *(uint *)(unaff_RBX + -0x22);
    *unaff_RSI = *unaff_RSI + '\x01';
    return (uint)CONCAT71((int7)(uVar4 >> 8),cVar3) | uVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac364 FUN_14d7ac364 body=20 status=ok
// SIG undefined FUN_14d7ac364(void)

/* WARNING: Control flow encountered bad instruction data */

uint FUN_14d7ac364(void)

{
  uint uVar1;
  char cVar2;
  longlong unaff_RBX;
  char *unaff_RSI;
  int unaff_EDI;
  
  cVar2 = (char)(unaff_EDI + -0x548ff000) + '8';
  if ((POPCOUNT(cVar2) & 1U) != 0) {
    uVar1 = *(uint *)(unaff_RBX + -0x22);
    *unaff_RSI = *unaff_RSI + '\x01';
    return CONCAT31((int3)((uint)(unaff_EDI + -0x548ff000) >> 8),cVar2) | uVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac37a FUN_14d7ac37a body=5 status=ok
// SIG undefined FUN_14d7ac37a(void)

undefined1 FUN_14d7ac37a(void)

{
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  byte *unaff_RDI;
  undefined2 in_ES;
  
  bRame16c0098e38568d8 = (byte)in_EAX;
  *unaff_RDI = *unaff_RDI | bRame16c0098e38568d8;
  *(undefined2 *)CONCAT44(in_register_00000004,in_EAX) = in_ES;
  out(0x9c,bRame16c0098e38568d8);
  return *(undefined1 *)(unaff_RBX + (ulonglong)bRame16c0098e38568d8);
}



// FUNCTION 14d7ac37f FUN_14d7ac37f body=2 status=ok
// SIG undefined FUN_14d7ac37f(void)

undefined1 FUN_14d7ac37f(void)

{
  byte in_AL;
  longlong unaff_RBX;
  
  out(0x9c,in_AL);
  bRame16c0098e38568d8 = in_AL;
  return *(undefined1 *)(unaff_RBX + (ulonglong)in_AL);
}



// FUNCTION 14d7ac383 FUN_14d7ac383 body=16 status=ok
// SIG undefined FUN_14d7ac383(void)

int FUN_14d7ac383(longlong param_1,undefined2 param_2)

{
  undefined4 uVar1;
  short in_AX;
  undefined4 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  *(char *)(param_1 + -0x29) = *(char *)(param_1 + -0x29) + (char)((ulonglong)param_1 >> 8);
  return (int)in_AX;
}



// FUNCTION 14d7ac39c FUN_14d7ac39c body=9 status=ok
// SIG undefined FUN_14d7ac39c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac39c(uint param_1)

{
  undefined4 in_EAX;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = in_EAX;
  func_0x00014e1ccb29(param_1 | (int)unaff_RDI + 4U);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


