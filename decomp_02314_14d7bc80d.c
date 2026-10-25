// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14d7bc80d FUN_14d7bc80d body=16 status=ok
// SIG undefined FUN_14d7bc80d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bc80d(int param_1)

{
  longlong unaff_RBP;
  int *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + param_1;
  LOCK();
  *(char *)(unaff_RBP + 0x22aa0083) = (char)param_1;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bc825 FUN_14d7bc825 body=8 status=ok
// SIG undefined FUN_14d7bc825(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bc835) overlaps instruction at (ram,0x00014d7bc833)
    */

void FUN_14d7bc825(ulonglong param_1,uint param_2)

{
  int *piVar1;
  code *pcVar2;
  int *in_RAX;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined2 in_FPUControlWord;
  undefined8 in_MM3;
  
  pmulhw(in_MM3,*(undefined8 *)in_RAX);
  *(char *)(in_RAX + 0x16) = (char)in_RAX[0x16] + unaff_BL;
  *(uint *)(param_1 - 0x4a) = *(uint *)(param_1 - 0x4a) ^ (uint)unaff_RDI;
  piVar1 = (int *)(param_1 + 0x35 + unaff_RSI * 8);
  *piVar1 = *piVar1 + (int)in_RAX;
  if (*(uint *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x28) < param_2) {
    *in_RAX = *in_RAX + -0x56;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)((param_1 & 0xffffffffffffff00) + 0x3a) = in_FPUControlWord;
  if ((param_1 & 0xffffffffffffff00) == 1) {
    *(char *)(unaff_RDI + 0x52766cb6) = *(char *)(unaff_RDI + 0x52766cb6) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar2 = (code *)swi(1);
  (*pcVar2)();
  return;
}



// FUNCTION 14d7bc82e FUN_14d7bc82e body=5 status=ok
// SIG undefined FUN_14d7bc82e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bc835) overlaps instruction at (ram,0x00014d7bc833)
    */

void FUN_14d7bc82e(ulonglong param_1,uint param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined2 in_FPUControlWord;
  undefined8 uStackX_8;
  
  *(uint *)(param_1 - 0x4a) = *(uint *)(param_1 - 0x4a) ^ (uint)unaff_RDI;
  piVar1 = (int *)(param_1 + 0x35 + unaff_RSI * 8);
  *piVar1 = *piVar1 + (int)uStackX_8;
  if (*(uint *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x28) < param_2) {
    *uStackX_8 = *uStackX_8 + -0x56;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)((param_1 & 0xffffffffffffff00) + 0x3a) = in_FPUControlWord;
  if ((param_1 & 0xffffffffffffff00) == 1) {
    *(char *)(unaff_RDI + 0x52766cb6) = *(char *)(unaff_RDI + 0x52766cb6) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar2 = (code *)swi(1);
  (*pcVar2)();
  return;
}



// FUNCTION 14d7bc842 FUN_14d7bc842 body=2 status=ok
// SIG undefined FUN_14d7bc842(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bc842(longlong param_1)

{
  code *pcVar1;
  char unaff_BH;
  longlong unaff_RDI;
  
  if (param_1 == 1) {
    *(char *)(unaff_RDI + 0x52766cb6) = *(char *)(unaff_RDI + 0x52766cb6) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7bc846 FUN_14d7bc846 body=12 status=ok
// SIG undefined FUN_14d7bc846(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bc846(void)

{
  char unaff_BH;
  longlong unaff_RDI;
  undefined4 unaff_R12D;
  longlong unaff_R15;
  
  LOCK();
  *(undefined4 *)(unaff_R15 + -0x52) = unaff_R12D;
  UNLOCK();
  *(char *)(unaff_RDI + 0x52766cb5) = *(char *)(unaff_RDI + 0x52766cb5) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bc85c FUN_14d7bc85c body=2 status=ok
// SIG undefined FUN_14d7bc85c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bc85c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bc860 FUN_14d7bc860 body=5 status=ok
// SIG undefined FUN_14d7bc860(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bc860(undefined8 param_1,byte param_2)

{
  byte *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI & param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bc871 FUN_14d7bc871 body=13 status=ok
// SIG undefined FUN_14d7bc871(void)

void FUN_14d7bc871(undefined8 param_1,int param_2)

{
  int iVar1;
  longlong unaff_RDI;
  longlong unaff_R13;
  byte in_CF;
  
  iVar1 = param_2 + (int)&stack0x00000000 + (uint)in_CF;
  *(undefined1 *)(unaff_RDI + 0x31) = 0xed;
  out((short)iVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00014d7bc87e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_R13 + -0x47))(0x1e86ee1,iVar1);
  return;
}



// FUNCTION 14d7bc881 FUN_14d7bc881 body=9 status=ok
// SIG undefined FUN_14d7bc881(void)

void FUN_14d7bc881(void)

{
  return;
}



// FUNCTION 14d7bc88d FUN_14d7bc88d body=4 status=ok
// SIG undefined FUN_14d7bc88d(void)

void FUN_14d7bc88d(void)

{
  return;
}



// FUNCTION 14d7bc896 FUN_14d7bc896 body=5 status=ok
// SIG undefined FUN_14d7bc896(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bc896(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bc89e FUN_14d7bc89e body=8 status=ok
// SIG undefined FUN_14d7bc89e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bc89e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0xd0);
  (*pcVar1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bc8aa FUN_14d7bc8aa body=21 status=ok
// SIG undefined FUN_14d7bc8aa(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bc8aa(longlong param_1)

{
  int in_EAX;
  uint unaff_ESI;
  longlong unaff_RDI;
  
  *(uint *)(unaff_RDI + 0x70592263) = *(uint *)(unaff_RDI + 0x70592263) | unaff_ESI;
  *(uint *)(ulonglong)(in_EAX + 0xf3e8a195) = *(uint *)(ulonglong)(in_EAX + 0xf3e8a195) ^ 0x41;
  if (param_1 != 0) {
    in(0xd8);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bc8c2 FUN_14d7bc8c2 body=12 status=ok
// SIG undefined FUN_14d7bc8c2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bc8c2(void)

{
  uint *puVar1;
  longlong unaff_RDI;
  bool bVar2;
  
  puVar1 = (uint *)(unaff_RDI + 0x51932b83);
  bVar2 = (*puVar1 & 1) != 0;
  *puVar1 = *puVar1 >> 1 | (uint)bVar2 << 0x1f;
  if (-1 < (char)(((char)unaff_RDI + -0x6d) - bVar2 ^ 0x69U)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bc8cf thunk_FUN_14d7bc905 body=2 status=ok
// SIG undefined thunk_FUN_14d7bc905(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_FUN_14d7bc905(char *param_1,uint *param_2)

{
  char unaff_BL;
  uint unaff_EBP;
  char in_CF;
  
  *param_1 = (*param_1 - unaff_BL) - in_CF;
  *param_2 = *param_2 | unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bc8d8 FUN_14d7bc8d8 body=21 status=ok
// SIG undefined FUN_14d7bc8d8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bc8d8(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int in_EAX;
  char unaff_BH;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  undefined8 uStack_18;
  
  if (in_EAX != 0x60188997) {
    puVar2 = (undefined8 *)&stack0xfffffffffffffff0;
    cVar1 = '\r';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar2 = puVar2 + -1;
      *puVar2 = *unaff_RBP;
      cVar1 = cVar1 + -1;
    } while ('\0' < cVar1);
    *(char *)(param_2 + 0x1f) = *(char *)(param_2 + 0x1f) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bc8f8 FUN_14d7bc8f8 body=3 status=ok
// SIG undefined FUN_14d7bc8f8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bc8f8(char *param_1,uint *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  uint uVar3;
  ulonglong uVar4;
  byte bVar5;
  char cVar6;
  char *in_RAX;
  longlong lVar8;
  longlong unaff_RBX;
  uint unaff_EBP;
  int unaff_ESI;
  longlong unaff_RDI;
  byte in_CF;
  bool in_SF;
  char *pcVar7;
  
  if (in_SF) {
    *in_RAX = *in_RAX + 'b';
    uVar4 = (longlong)unaff_ESI * -0x19d16ad1;
    lVar8 = (uVar4 & 0xffffffff) - 1;
    if (lVar8 == 0 || ((ulonglong)in_RAX & 0x4000) != 0) {
      bVar5 = (byte)lVar8 & 0x1f;
      uVar3 = *(uint *)(unaff_RDI + 0x25);
      *(uint *)(unaff_RDI + 0x25) =
           (uint)(CONCAT14((longlong)(int)uVar4 != uVar4,uVar3) >> bVar5) | uVar3 << 0x21 - bVar5;
      pbVar1 = (byte *)(((ulonglong)in_RAX & 0xffffffff) + 0x46);
      *pbVar1 = *pbVar1 | 0xb;
      puVar2 = (uint *)(((ulonglong)in_RAX & 0xffffffff) - 0x13e6ff0e);
      *puVar2 = *puVar2 & (uint)in_RAX;
      *(int *)(unaff_RBX + 0x11069a49) = *(int *)(unaff_RBX + 0x11069a49) + -0x7f;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    cVar6 = in(0x98);
    pcVar7 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar6);
    *pcVar7 = *pcVar7 + '\x01';
    if (*pcVar7 == '\0') {
      *param_1 = (*param_1 - (cVar6 << 1 | in_CF)) - (cVar6 < '\0');
      *param_2 = *param_2 | unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bc8fc FUN_14d7bc8fc body=9 status=ok
// SIG undefined FUN_14d7bc8fc(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bc8fc(char *param_1,uint *param_2)

{
  char cVar1;
  undefined8 in_RAX;
  uint unaff_EBP;
  byte in_CF;
  char *pcVar2;
  
  cVar1 = in(0x98);
  pcVar2 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
  *pcVar2 = *pcVar2 + '\x01';
  if (*pcVar2 == '\0') {
    *param_1 = (*param_1 - (cVar1 << 1 | in_CF)) - (cVar1 < '\0');
    *param_2 = *param_2 | unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bc905 FUN_14d7bc905 body=7 status=ok
// SIG undefined FUN_14d7bc905(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bc905(char *param_1,uint *param_2)

{
  char unaff_BL;
  uint unaff_EBP;
  char in_CF;
  
  *param_1 = (*param_1 - unaff_BL) - in_CF;
  *param_2 = *param_2 | unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bc926 FUN_14d7bc926 body=16 status=ok
// SIG undefined FUN_14d7bc926(void)

/* WARNING: Control flow encountered bad instruction data */

ulonglong FUN_14d7bc926(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 in_RAX;
  char cVar3;
  longlong unaff_RBP;
  char unaff_DIL;
  char *pcVar2;
  byte bVar4;
  
  bVar1 = (byte)in_RAX ^ *(byte *)(unaff_RBP + -0x44);
  pcVar2 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1);
  *pcVar2 = *pcVar2 + bVar1;
  bVar4 = (byte)((ulonglong)param_2 >> 8);
  cVar3 = bVar4 - bVar1;
  if (cVar3 == '\0') {
    return CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(cVar3,(char)param_2)) & 0xffffffff;
  }
  if (-1 < (char)((unaff_DIL + -0x6d) - (bVar4 < bVar1) ^ 0x69U)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bc937 FUN_14d7bc937 body=10 status=ok
// SIG undefined FUN_14d7bc937(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bc937(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bc945 FUN_14d7bc945 body=2 status=ok
// SIG undefined FUN_14d7bc945(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bc945(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bc960 FUN_14d7bc960 body=20 status=ok
// SIG undefined FUN_14d7bc960(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bc960(char param_1,unkbyte10 *param_2)

{
  int *piVar1;
  uint uVar2;
  ulonglong uVar3;
  byte bVar4;
  ulonglong in_RAX;
  char *pcVar5;
  longlong lVar6;
  ulonglong unaff_RBX;
  int unaff_ESI;
  longlong unaff_RDI;
  unkbyte10 in_ST0;
  
  *(char *)(in_RAX - 0x65) = *(char *)(in_RAX - 0x65) + -9;
  *(char *)(unaff_RBX - 0x7cb466d0) = *(char *)(unaff_RBX - 0x7cb466d0) + param_1;
  *param_2 = in_ST0;
  pcVar5 = (char *)(unaff_RBX & 0xffffff70);
  *pcVar5 = *pcVar5 + 'b';
  uVar3 = (longlong)unaff_ESI * -0x19d16ad1;
  lVar6 = (uVar3 & 0xffffffff) - 1;
  if (lVar6 != 0 && (unaff_RBX & 0x4000) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar4 = (byte)lVar6 & 0x1f;
  uVar2 = *(uint *)(unaff_RDI + 0x25);
  *(uint *)(unaff_RDI + 0x25) =
       (uint)(CONCAT14((longlong)(int)uVar3 != uVar3,uVar2) >> bVar4) | uVar2 << 0x21 - bVar4;
  pcVar5[0x46] = pcVar5[0x46] | 0xb;
  *(uint *)(pcVar5 + -0x13e6ff0e) = *(uint *)(pcVar5 + -0x13e6ff0e) & (uint)pcVar5;
  piVar1 = (int *)((in_RAX & 0xffffffff) + 0x11069a49);
  *piVar1 = *piVar1 + -0x7f;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bc97e FUN_14d7bc97e body=21 status=ok
// SIG undefined FUN_14d7bc97e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bc97e(byte param_1)

{
  byte *pbVar1;
  uint *puVar2;
  uint uVar3;
  undefined1 in_AL;
  longlong unaff_RBX;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  longlong unaff_RDI;
  undefined1 in_CF;
  
  out(0xe0,in_AL);
  uVar3 = *(uint *)(unaff_RDI + 0x25);
  *(uint *)(unaff_RDI + 0x25) =
       (uint)(CONCAT14(in_CF,uVar3) >> (param_1 & 0x1f)) | uVar3 << 0x21 - (param_1 & 0x1f);
  pbVar1 = (byte *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x46);
  *pbVar1 = *pbVar1 | 0xb;
  puVar2 = (uint *)(CONCAT44(unaff_0000002c,unaff_EBP) + -0x13e6ff0e);
  *puVar2 = *puVar2 & unaff_EBP;
  *(int *)(unaff_RBX + 0x11069a49) = *(int *)(unaff_RBX + 0x11069a49) + -0x7f;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bc997 FUN_14d7bc997 body=14 status=ok
// SIG undefined FUN_14d7bc997(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bc997(void)

{
  longlong unaff_RBX;
  uint unaff_EBP;
  byte in_CF;
  
  *(int *)(unaff_RBX + 0x11069a49) =
       *(int *)(unaff_RBX + 0x11069a49) + -0x7f +
       (uint)((uint)&stack0x00000000 < unaff_EBP || (uint)&stack0x00000000 - unaff_EBP < (uint)in_CF
             );
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bc9b8 FUN_14d7bc9b8 body=3 status=ok
// SIG undefined FUN_14d7bc9b8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bc9b8(void)

{
  longlong unaff_RDI;
  
  *(uint *)(unaff_RDI + 0x4a) = *(uint *)(unaff_RDI + 0x4a) & (uint)unaff_RDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bc9bc FUN_14d7bc9bc body=5 status=ok
// SIG undefined FUN_14d7bc9bc(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bc9bc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bc9cc FUN_14d7bc9cc body=13 status=ok
// SIG undefined FUN_14d7bc9cc(void)

undefined4 FUN_14d7bc9cc(void)

{
  undefined4 unaff_ESI;
  
  return unaff_ESI;
}



// FUNCTION 14d7bc9dc FUN_14d7bc9dc body=7 status=ok
// SIG undefined FUN_14d7bc9dc(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bc9dc(longlong param_1,longlong param_2)

{
  uint *puVar1;
  byte bVar2;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  
  out(*unaff_RSI,(short)param_2);
  puVar1 = (uint *)(unaff_RBP + 0x3f + param_1 * 2);
  *puVar1 = *puVar1 ^ 0xb;
  bVar2 = *(byte *)(param_2 + 0x31);
  *(byte *)(param_2 + 0x31) = bVar2 << 7 | bVar2 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bc9e4 FUN_14d7bc9e4 body=29 status=ok
// SIG undefined FUN_14d7bc9e4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bc9e4(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  
  out(*unaff_RSI,(short)param_2);
  *(uint *)(unaff_RBP + 0x1f75ab4d) = *(uint *)(unaff_RBP + 0x1f75ab4d) ^ 0xb;
  bVar1 = *(byte *)(param_2 + 0x31);
  *(byte *)(param_2 + 0x31) = bVar1 << 7 | bVar1 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bca05 FUN_14d7bca05 body=6 status=ok
// SIG undefined FUN_14d7bca05(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bca05(byte param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte in_AL;
  byte bVar3;
  
  bVar3 = (byte)((ulonglong)param_2 >> 8);
  do {
    bVar3 = bVar3 & in_AL;
    if ('\0' < (char)bVar3) {
      pbVar1 = (byte *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(bVar3,(char)param_2)) +
                       0x31);
      bVar2 = (param_1 & 0x1f) % 9;
      bVar3 = *pbVar1;
      *pbVar1 = bVar3 << bVar2 | bVar3 >> 9 - bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while ((POPCOUNT(bVar3) & 1U) == 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bca0d FUN_14d7bca0d body=22 status=ok
// SIG undefined FUN_14d7bca0d(void)

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_14d7bca0d(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 uVar1;
  uint in_EAX;
  int iVar2;
  uint unaff_EDI;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int unaff_retaddr;
  
  if (param_1 != 1) {
    *(undefined1 *)(ulonglong)(unaff_EDI ^ in_EAX) = (char)unaff_retaddr;
    iVar2 = unaff_retaddr + -0x6b3bae0b;
    if ((SEXT816(*param_3 * -9) != SEXT816(*param_3) * SEXT816(-9)) == iVar2 < 0) {
      ((undefined1 *)(ulonglong)(unaff_EDI ^ in_EAX))[1] = (char)iVar2;
      uVar1 = in((short)CONCAT71((int7)((ulonglong)param_2 >> 8),0x43));
      return CONCAT31((int3)((uint)iVar2 >> 8),uVar1);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar3 = false;
  bVar5 = false;
  bVar4 = true;
  func_0x00015d053be8();
  if (bVar3 || bVar4) {
    if (!bVar5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bca19 FUN_14d7bca19 body=3 status=ok
// SIG undefined FUN_14d7bca19(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bca19(void)

{
  bool in_CF;
  bool in_ZF;
  bool in_SF;
  
  if (!in_CF && !in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bca1d FUN_14d7bca1d body=3 status=ok
// SIG undefined FUN_14d7bca1d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bca1d(void)

{
  bool in_SF;
  
  if (!in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bca25 FUN_14d7bca25 body=2 status=ok
// SIG undefined FUN_14d7bca25(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bca25(uint param_1)

{
  longlong in_RAX;
  uint unaff_EBX;
  
  *(uint *)(in_RAX + -0x2d248ee4) =
       *(uint *)(in_RAX + -0x2d248ee4) << 1 | (uint)(param_1 < unaff_EBX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bca29 FUN_14d7bca29 body=9 status=ok
// SIG undefined FUN_14d7bca29(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bca29(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bca35 FUN_14d7bca35 body=4 status=ok
// SIG undefined FUN_14d7bca35(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bca35(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bca3e FUN_14d7bca3e body=22 status=ok
// SIG undefined FUN_14d7bca3e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bca3e(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  byte bVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  char in_SF;
  char in_OF;
  
  bVar2 = (byte)((ulonglong)param_2 >> 8);
  if (in_OF != in_SF) {
    *unaff_RDI = *unaff_RSI;
    (**(code **)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x6fc621b9))();
    unaff_RDI[0x477ef6a3] = unaff_RDI[0x477ef6a3] & bVar2;
    func_0x0001362166d7();
    pcVar1 = (code *)swi(1);
    (*pcVar1)();
    return;
  }
  func_0x0001c9bc4705();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bca5f FUN_14d7bca5f body=4 status=ok
// SIG undefined FUN_14d7bca5f(void)

undefined1 FUN_14d7bca5f(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  
  uVar1 = in(param_2);
  return uVar1;
}



// FUNCTION 14d7bca63 FUN_14d7bca63 body=2 status=ok
// SIG undefined FUN_14d7bca63(void)

void FUN_14d7bca63(void)

{
  return;
}



// FUNCTION 14d7bca68 FUN_14d7bca68 body=11 status=ok
// SIG undefined FUN_14d7bca68(void)

/* WARNING: Control flow encountered bad instruction data */

uint FUN_14d7bca68(void)

{
  uint in_EAX;
  bool in_PF;
  
  if (!in_PF) {
    return (in_EAX | 0x9e) ^ 0xd7cc49a2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bca81 FUN_14d7bca81 body=8 status=ok
// SIG undefined FUN_14d7bca81(void)

/* WARNING: Control flow encountered bad instruction data */

uint FUN_14d7bca81(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  uint in_EAX;
  byte bVar3;
  undefined8 unaff_retaddr;
  
  if ((char)((byte)in_EAX | 0x72) < '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar2 = (in_EAX | 0x72) + 0xa0f0f843;
  bVar1 = *param_2;
  bVar3 = (byte)((ulonglong)unaff_retaddr >> 8);
  *param_2 = *param_2 + bVar3;
  return CONCAT31((int3)((uint)iVar2 >> 8),((char)iVar2 + 'D') - CARRY1(bVar1,bVar3)) + 0x1b476686U
         ^ 0xbe587faa;
}



// FUNCTION 14d7bca89 FUN_14d7bca89 body=3 status=ok
// SIG undefined FUN_14d7bca89(void)

/* WARNING: Control flow encountered bad instruction data */

uint FUN_14d7bca89(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  byte bVar3;
  byte in_CF;
  bool in_ZF;
  char in_SF;
  char in_OF;
  undefined8 unaff_retaddr;
  
  if (in_ZF || in_OF != in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar2 = (in_EAX + -0x5f0f07bd) - (uint)in_CF;
  bVar1 = *param_2;
  bVar3 = (byte)((ulonglong)unaff_retaddr >> 8);
  *param_2 = *param_2 + bVar3;
  return CONCAT31((int3)((uint)iVar2 >> 8),((char)iVar2 + 'D') - CARRY1(bVar1,bVar3)) + 0x1b476686U
         ^ 0xbe587faa;
}



// FUNCTION 14d7bca8d FUN_14d7bca8d body=8 status=ok
// SIG undefined FUN_14d7bca8d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bca8d(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bca95 FUN_14d7bca95 body=4 status=ok
// SIG undefined FUN_14d7bca95(void)

void FUN_14d7bca95(char param_1,undefined8 param_2)

{
  char cVar1;
  code *pcVar2;
  char *in_RAX;
  byte bVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  cVar1 = *in_RAX;
  bVar3 = (char)((ulonglong)param_2 >> 8) + ((byte)in_RAX ^ 0x51);
  *unaff_RDI = *unaff_RSI;
  (**(code **)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x6fc621b9))(param_1 - cVar1);
  unaff_RDI[0x477ef6a3] = unaff_RDI[0x477ef6a3] & bVar3;
  func_0x0001362166d7();
  pcVar2 = (code *)swi(1);
  (*pcVar2)();
  return;
}



// FUNCTION 14d7bcaa6 FUN_14d7bcaa6 body=13 status=ok
// SIG undefined FUN_14d7bcaa6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bcaa6(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcac7 FUN_14d7bcac7 body=8 status=ok
// SIG undefined FUN_14d7bcac7(void)

void FUN_14d7bcac7(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7bcad4 FUN_14d7bcad4 body=6 status=ok
// SIG undefined FUN_14d7bcad4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bcad4(void)

{
  undefined4 *unaff_RSI;
  
  out(*(undefined1 *)unaff_RSI,(short)*unaff_RSI);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcadc FUN_14d7bcadc body=15 status=ok
// SIG undefined FUN_14d7bcadc(void)

undefined8 FUN_14d7bcadc(void)

{
  uint *in_RAX;
  ulonglong unaff_RSI;
  uint unaff_EDI;
  
  *in_RAX = *in_RAX ^ unaff_EDI;
  return CONCAT71((int7)((unaff_RSI & 0xffffffff) >> 8),
                  ((char)(unaff_RSI & 0xffffffff) + -0x4a) -
                  ((longlong)(int)((longlong)(int)unaff_EDI * -0x11089900) !=
                  (longlong)(int)unaff_EDI * -0x11089900));
}



// FUNCTION 14d7bcafa FUN_14d7bcafa body=9 status=ok
// SIG undefined FUN_14d7bcafa(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bcafa(undefined8 param_1,int *param_2)

{
  *param_2 = *param_2 >> 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcb06 FUN_14d7bcb06 body=28 status=ok
// SIG undefined FUN_14d7bcb06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_14d7bcb06(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint in_EAX;
  
  _DAT_168c331a0 = _DAT_168c331a0 - param_3;
  return in_EAX ^ 0xbe587faa;
}



// FUNCTION 14d7bcb28 FUN_14d7bcb28 body=4 status=ok
// SIG undefined FUN_14d7bcb28(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bcb28(void)

{
  int *in_RAX;
  int unaff_EDI;
  byte in_CF;
  
  *in_RAX = (*in_RAX - unaff_EDI) - (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcb31 FUN_14d7bcb31 body=22 status=ok
// SIG undefined FUN_14d7bcb31(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14d7bcb31(undefined8 param_1,longlong param_2,longlong param_3)

{
  char *pcVar1;
  uint *puVar2;
  byte bVar3;
  uint in_EAX;
  ulonglong uVar4;
  char cVar5;
  longlong unaff_RBX;
  undefined8 *puVar6;
  char unaff_BPL;
  undefined8 *puVar7;
  char *unaff_RSI;
  byte *unaff_RDI;
  undefined2 in_FS;
  longlong in_FS_OFFSET;
  char in_OF;
  undefined1 *puStack_10;
  
  if ((bool)in_OF != ((in_EAX & 0x8000) != 0)) {
    *(char *)((ulonglong)in_EAX + 0x10) = *(char *)((ulonglong)in_EAX + 0x10) + unaff_BPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((in_EAX & 0x100) != 0) {
    bVar3 = *(byte *)(param_2 + 0x1b);
    *(byte *)(param_2 + 0x1b) = bVar3 << 2 | (byte)(CONCAT11(1,bVar3) >> 7);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar3 = (byte)in_EAX;
  *unaff_RDI = bVar3;
  *(undefined2 *)(param_2 + 0x1f2bf6c) = in_FS;
  cVar5 = (char)((ulonglong)param_1 >> 8) + (char)(in_EAX >> 8);
  pcVar1 = (char *)(CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(cVar5,(char)param_1)) +
                   -0x12);
  *pcVar1 = *pcVar1 + bVar3;
  puStack_10 = &stack0xfffffffffffffff8;
  puVar7 = (undefined8 *)(ulonglong)in_EAX;
  puVar2 = (uint *)(unaff_RSI + in_FS_OFFSET + 0x53220804);
  *puVar2 = *puVar2 << 1 | (uint)((int)*puVar2 < 0);
  *unaff_RSI = *unaff_RSI + cVar5;
  if (!SBORROW1(unaff_BPL,'!')) {
    cRamf47d6eaf7854ce0c = unaff_BPL + -0x21;
    *(uint *)((longlong)puVar7 + -0x1a) = *(uint *)((longlong)puVar7 + -0x1a) & (uint)&puStack_10;
    uVar4 = FUN_14d7bcc15(0x1263a088);
    return uVar4;
  }
  if ((char)(unaff_BPL + -0x21) == '\0') {
    DAT_5b01b69800cd8102 = (bVar3 | 0x2e) + 0xae;
    puVar6 = (undefined8 *)&stack0xfffffffffffffff8;
    cVar5 = '\x1b';
    do {
      puVar7 = puVar7 + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *puVar7;
      cVar5 = cVar5 + -1;
    } while ('\0' < cVar5);
    *(uint *)(unaff_RBX + 0x6c) =
         CONCAT22((short)((ulonglong)param_2 >> 0x10),CONCAT11(0x1e,(char)param_2));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_168c331a0 = _DAT_168c331a0 - param_3;
  return (ulonglong)(in_EAX ^ 0xbe587faa);
}



// FUNCTION 14d7bcb4e FUN_14d7bcb4e body=7 status=ok
// SIG undefined FUN_14d7bcb4e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14d7bcb4e(longlong param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  char *pcVar2;
  uint *puVar3;
  byte bVar4;
  byte bVar6;
  char cVar7;
  undefined8 in_RAX;
  ulonglong uVar8;
  char cVar9;
  ulonglong *puVar10;
  longlong unaff_RBP;
  undefined8 *puVar11;
  byte *unaff_RSI;
  byte *unaff_RDI;
  undefined2 in_FS;
  longlong in_FS_OFFSET;
  char in_ZF;
  undefined1 *puStack_10;
  ulonglong uStack_8;
  byte bVar5;
  
  param_1 = param_1 + -1;
  if (param_1 == 0 || in_ZF == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar6 = *unaff_RSI;
  uStack_8 = CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar6);
  pbVar1 = (byte *)(unaff_RBP + -0x62);
  bVar4 = *pbVar1;
  bVar5 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar6;
  cVar7 = (char)unaff_RBP;
  if (SCARRY1(bVar5,bVar6) != (char)*pbVar1 < '\0') {
    pcVar2 = (char *)((uStack_8 & 0xffffffff) + 0x10);
    *pcVar2 = *pcVar2 + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (CARRY1(bVar4,bVar6)) {
    bVar4 = *(byte *)(param_2 + 0x1b);
    *(byte *)(param_2 + 0x1b) = bVar4 << 2 | (byte)(CONCAT11(1,bVar4) >> 7);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = bVar6;
  *(undefined2 *)(param_2 + 0x1f2bf6c) = in_FS;
  cVar9 = (char)((ulonglong)param_1 >> 8) + (char)((ulonglong)in_RAX >> 8);
  pcVar2 = (char *)(CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(cVar9,(char)param_1)) +
                   -0x12);
  *pcVar2 = *pcVar2 + bVar6;
  puStack_10 = (undefined1 *)&uStack_8;
  puVar11 = (undefined8 *)(uStack_8 & 0xffffffff);
  puVar3 = (uint *)(unaff_RSI + in_FS_OFFSET + 0x53220805);
  *puVar3 = *puVar3 << 1 | (uint)((int)*puVar3 < 0);
  unaff_RSI[1] = unaff_RSI[1] + cVar9;
  if (SBORROW1(cVar7,'!')) {
    if ((char)(cVar7 + -0x21) == '\0') {
      puVar10 = &uStack_8;
      cVar7 = '\x1b';
      do {
        puVar11 = puVar11 + -1;
        puVar10 = puVar10 + -1;
        *puVar10 = *puVar11;
        cVar7 = cVar7 + -1;
      } while ('\0' < cVar7);
      DAT_5b01b69800cd8102 = (bVar6 | 0x2e) + 0xae;
      uRam00000000b5e99063 =
           CONCAT22((short)((ulonglong)param_2 >> 0x10),CONCAT11(0x1e,(char)param_2));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _DAT_168c331a0 = _DAT_168c331a0 - param_3;
    return (ulonglong)((uint)uStack_8 ^ 0xbe587faa);
  }
  cRamf47d6eaf7854ce0c = cVar7 + -0x21;
  *(uint *)((longlong)puVar11 + -0x1a) = *(uint *)((longlong)puVar11 + -0x1a) & (uint)&puStack_10;
  uVar8 = FUN_14d7bcc15(0x1263a088);
  return uVar8;
}



// FUNCTION 14d7bcb5b FUN_14d7bcb5b body=25 status=ok
// SIG undefined FUN_14d7bcb5b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14d7bcb5b(undefined8 param_1,longlong param_2,longlong param_3)

{
  char *pcVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  byte *in_RAX;
  ulonglong uVar5;
  char cVar6;
  longlong unaff_RBX;
  ulonglong *puVar7;
  char unaff_BPL;
  undefined8 *puVar8;
  char *unaff_RSI;
  byte *unaff_RDI;
  undefined2 in_FS;
  longlong in_FS_OFFSET;
  undefined1 *puStack_10;
  ulonglong uStack_8;
  
  *in_RAX = *in_RAX | (byte)((ulonglong)param_2 >> 8);
  uVar4 = (int)in_RAX + 0xcf46097a;
  uStack_8 = (ulonglong)uVar4;
  bVar3 = (byte)uVar4;
  *unaff_RDI = bVar3;
  *(undefined2 *)(param_2 + 0x1f2bf6c) = in_FS;
  cVar6 = (char)((ulonglong)param_1 >> 8) + (char)(uVar4 >> 8);
  pcVar1 = (char *)(CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(cVar6,(char)param_1)) +
                   -0x12);
  *pcVar1 = *pcVar1 + bVar3;
  puStack_10 = (undefined1 *)&uStack_8;
  puVar8 = (undefined8 *)(ulonglong)uVar4;
  puVar2 = (uint *)(unaff_RSI + in_FS_OFFSET + 0x53220804);
  *puVar2 = *puVar2 << 1 | (uint)((int)*puVar2 < 0);
  *unaff_RSI = *unaff_RSI + cVar6;
  if (!SBORROW1(unaff_BPL,'!')) {
    cRamf47d6eaf7854ce0c = unaff_BPL + -0x21;
    *(uint *)((longlong)puVar8 + -0x1a) = *(uint *)((longlong)puVar8 + -0x1a) & (uint)&puStack_10;
    uVar5 = FUN_14d7bcc15(0x1263a088);
    return uVar5;
  }
  if ((char)(unaff_BPL + -0x21) == '\0') {
    DAT_5b01b69800cd8102 = (bVar3 | 0x2e) + 0xae;
    puVar7 = &uStack_8;
    cVar6 = '\x1b';
    do {
      puVar8 = puVar8 + -1;
      puVar7 = puVar7 + -1;
      *puVar7 = *puVar8;
      cVar6 = cVar6 + -1;
    } while ('\0' < cVar6);
    *(uint *)(unaff_RBX + 0x6c) =
         CONCAT22((short)((ulonglong)param_2 >> 0x10),CONCAT11(0x1e,(char)param_2));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_168c331a0 = _DAT_168c331a0 - param_3;
  return (ulonglong)(uVar4 ^ 0xbe587faa);
}



// FUNCTION 14d7bcb9f FUN_14d7bcb9f body=8 status=ok
// SIG undefined FUN_14d7bcb9f(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bcbc4) overlaps instruction at (ram,0x00014d7bcbc3)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14d7bcb9f(longlong param_1,uint param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  short in_AX;
  ulonglong uVar3;
  char cVar4;
  uint unaff_EBX;
  ulonglong *puVar5;
  uint unaff_EBP;
  undefined8 *puVar6;
  uint *unaff_RSI;
  longlong unaff_RDI;
  undefined1 *puStack_10;
  ulonglong uStack_8;
  
  param_2 = unaff_EBX ^ param_2;
  uStack_8 = (ulonglong)(uint)(int)in_AX;
  _DAT_20ca6d075501c896 = param_2;
  if ((int)param_2 < 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar6 = (undefined8 *)(ulonglong)(unaff_EBP >> 0x1b);
  *(int *)(param_1 + -0x1f39f6ca) = *(int *)(param_1 + -0x1f39f6ca) << 1;
  cVar4 = (char)((ulonglong)param_1 >> 8) + *(char *)((ulonglong)param_2 * 2 + 0x35);
  *unaff_RSI = *unaff_RSI | (uint)&stack0x00000000;
  if (-1 < (int)*unaff_RSI) {
    LOCK();
    puVar1 = (undefined4 *)
             (CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(cVar4,(char)param_1)) + -0x78 +
             unaff_RDI * 4);
    uVar2 = *puVar1;
    *puVar1 = 0xb69afc4a;
    UNLOCK();
    do {
      out((char)*unaff_RSI,(short)uVar2);
      unaff_RSI = (uint *)((longlong)unaff_RSI + 1);
    } while( true );
  }
  puStack_10 = (undefined1 *)&uStack_8;
  *(char *)unaff_RSI = (char)*unaff_RSI + cVar4;
  cVar4 = (char)param_2 + -0x21;
  if (!SBORROW1((char)param_2,'!')) {
    cRamf47d6eaf7854ce0c = cVar4;
    *(uint *)((longlong)puVar6 + -0x1a) = *(uint *)((longlong)puVar6 + -0x1a) & (uint)&puStack_10;
    uVar3 = FUN_14d7bcc15(0x1263a088,0xb69a874a);
    return uVar3;
  }
  if (cVar4 != '\0') {
    _DAT_168c331a0 = _DAT_168c331a0 - param_3;
    return (ulonglong)((int)in_AX ^ 0xbe587faa);
  }
  DAT_5b01b69800cd8102 = ((byte)in_AX | 0x2e) + 0xae;
  puVar5 = &uStack_8;
  cVar4 = '\x1b';
  do {
    puVar6 = puVar6 + -1;
    puVar5 = puVar5 + -1;
    *puVar5 = *puVar6;
    cVar4 = cVar4 + -1;
  } while ('\0' < cVar4);
  *(undefined4 *)(uStack_8 + 0x6c) = 0xb69a1e4a;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcba7 FUN_14d7bcba7 body=52 status=ok
// SIG undefined FUN_14d7bcba7(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bcbc4) overlaps instruction at (ram,0x00014d7bcbc3)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14d7bcba7(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint in_EAX;
  ulonglong uVar3;
  char cVar4;
  uint unaff_EBX;
  ulonglong *puVar5;
  uint unaff_EBP;
  undefined8 *puVar6;
  uint *unaff_RSI;
  longlong unaff_RDI;
  bool in_ZF;
  char in_SF;
  char in_OF;
  undefined1 *puStack_10;
  ulonglong uStack_8;
  
  uStack_8 = (ulonglong)in_EAX;
  _DAT_20ca6d075501c896 = unaff_EBX;
  if (in_ZF || in_OF != in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar6 = (undefined8 *)(ulonglong)(unaff_EBP >> 0x1b);
  *(int *)(param_1 + -0x1f39f6ca) = *(int *)(param_1 + -0x1f39f6ca) << 1;
  cVar4 = (char)((ulonglong)param_1 >> 8) + *(char *)((ulonglong)unaff_EBX * 2 + 0x35);
  *unaff_RSI = *unaff_RSI | (uint)&stack0x00000000;
  if (-1 < (int)*unaff_RSI) {
    LOCK();
    puVar1 = (undefined4 *)
             (CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(cVar4,(char)param_1)) + -0x78 +
             unaff_RDI * 4);
    uVar2 = *puVar1;
    *puVar1 = (int)param_2;
    UNLOCK();
    do {
      out((char)*unaff_RSI,(short)uVar2);
      unaff_RSI = (uint *)((longlong)unaff_RSI + 1);
    } while( true );
  }
  puStack_10 = (undefined1 *)&uStack_8;
  *(char *)unaff_RSI = (char)*unaff_RSI + cVar4;
  cVar4 = (char)unaff_EBX + -0x21;
  if (!SBORROW1((char)unaff_EBX,'!')) {
    cRamf47d6eaf7854ce0c = cVar4;
    *(uint *)((longlong)puVar6 + -0x1a) = *(uint *)((longlong)puVar6 + -0x1a) & (uint)&puStack_10;
    uVar3 = FUN_14d7bcc15(0x1263a088,(char)param_2);
    return uVar3;
  }
  if (cVar4 != '\0') {
    _DAT_168c331a0 = _DAT_168c331a0 - param_3;
    return (ulonglong)(in_EAX ^ 0xbe587faa);
  }
  DAT_5b01b69800cd8102 = ((byte)in_EAX | 0x2e) + 0xae;
  puVar5 = &uStack_8;
  cVar4 = '\x1b';
  do {
    puVar6 = puVar6 + -1;
    puVar5 = puVar5 + -1;
    *puVar5 = *puVar6;
    cVar4 = cVar4 + -1;
  } while ('\0' < cVar4);
  *(uint *)(uStack_8 + 0x6c) =
       CONCAT22((short)((ulonglong)param_2 >> 0x10),CONCAT11(0x1e,(char)param_2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcbe0 FUN_14d7bcbe0 body=8 status=ok
// SIG undefined FUN_14d7bcbe0(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bccf1) overlaps instruction at (ram,0x00014d7bcceb)
    */

undefined8 FUN_14d7bcbe0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  undefined2 uVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 *unaff_RBP;
  int *unaff_RSI;
  int *unaff_RDI;
  undefined1 auStack_9e09 [40441];
  undefined8 uStack_10;
  
  uVar5 = (undefined2)param_2;
  in(uVar5);
  piVar4 = unaff_RDI + 1;
  in(uVar5);
  if (*unaff_RSI - *unaff_RDI < 0) {
    LOCK();
    *(char *)piVar4 = (char)*piVar4 + '\x01';
    UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 != 0) {
    iVar1 = in(uVar5);
    *piVar4 = iVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar3 = -DAT_0000007e;
  if (DAT_0000007e == '\0' && bVar3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((char)bVar3 < '\0') {
    bVar6 = (byte)((ulonglong)param_2 >> 8);
    piVar4 = (int *)((ulonglong)(byte)(bVar3 + bVar6) << 8);
    *piVar4 = (*piVar4 + 0x58) - (uint)CARRY1(bVar3,bVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((ulonglong)bVar3 << 8 == 1 || bVar3 == 0) {
    return 0x1f61445e;
  }
  if (DAT_0000007e != '\0') {
    puVar7 = (undefined8 *)&stack0xfffffffffffffff8;
    cVar2 = '\x04';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar7 = puVar7 + -1;
      *puVar7 = *unaff_RBP;
      cVar2 = cVar2 + -1;
    } while ('\0' < cVar2);
    *(byte *)((longlong)unaff_RDI + 5) =
         *(byte *)((longlong)unaff_RDI + 5) & (char)auStack_9e09 - 0x20U;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcbe8 FUN_14d7bcbe8 body=15 status=ok
// SIG undefined FUN_14d7bcbe8(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bccf1) overlaps instruction at (ram,0x00014d7bcceb)
    */

undefined8 FUN_14d7bcbe8(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 *unaff_RBP;
  char *unaff_RDI;
  bool in_SF;
  undefined1 auStack_9e09 [40441];
  undefined8 uStack_10;
  
  if (in_SF) {
    LOCK();
    *unaff_RDI = *unaff_RDI + '\x01';
    UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 != 0) {
    uVar1 = in((short)param_2);
    *(undefined4 *)unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar3 = -DAT_0000007e;
  if (DAT_0000007e == '\0' && bVar3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((char)bVar3 < '\0') {
    bVar5 = (byte)((ulonglong)param_2 >> 8);
    piVar4 = (int *)((ulonglong)(byte)(bVar3 + bVar5) << 8);
    *piVar4 = (*piVar4 + 0x58) - (uint)CARRY1(bVar3,bVar5);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((ulonglong)bVar3 << 8 == 1 || bVar3 == 0) {
    return 0x1f61445e;
  }
  if (DAT_0000007e != '\0') {
    puVar6 = (undefined8 *)&stack0xfffffffffffffff8;
    cVar2 = '\x04';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *unaff_RBP;
      cVar2 = cVar2 + -1;
    } while ('\0' < cVar2);
    unaff_RDI[1] = unaff_RDI[1] & (char)auStack_9e09 - 0x20U;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcc15 FUN_14d7bcc15 body=7 status=ok
// SIG undefined FUN_14d7bcc15(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bcc15(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcc1e FUN_14d7bcc1e body=5 status=ok
// SIG undefined FUN_14d7bcc1e(void)

/* WARNING: Instruction at (ram,0x00014d7bcc1f) overlaps instruction at (ram,0x00014d7bcc1e)
    */

void FUN_14d7bcc1e(void)

{
  return;
}



// FUNCTION 14d7bcc33 FUN_14d7bcc33 body=9 status=ok
// SIG undefined FUN_14d7bcc33(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bcc33(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcc48 FUN_14d7bcc48 body=11 status=ok
// SIG undefined FUN_14d7bcc48(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bcc48(undefined8 param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  char in_SF;
  char in_OF;
  
  if (in_OF != in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(param_2,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcc5d FUN_14d7bcc5d body=3 status=ok
// SIG undefined FUN_14d7bcc5d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7bcc7b) */

void FUN_14d7bcc5d(undefined8 param_1,uint param_2)

{
  byte *pbVar1;
  byte in_AL;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  undefined8 in_MM0;
  undefined8 in_MM4;
  
  param_2 = param_2 | *(uint *)(unaff_RDI + 0x4d8218);
  psllw(in_MM0,in_MM4);
  pbVar1 = (byte *)((ulonglong)param_2 + 0x2e);
  *pbVar1 = *pbVar1 | in_AL;
  pbVar1 = (byte *)((ulonglong)param_2 - 0xd);
  *pbVar1 = *pbVar1 & (byte)((ulonglong)&stack0x00000000 >> 8);
  out(*unaff_RSI,(short)param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcc61 FUN_14d7bcc61 body=7 status=ok
// SIG undefined FUN_14d7bcc61(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bcc61(undefined8 param_1,longlong param_2)

{
  char unaff_DIL;
  char in_CF;
  
  *(char *)(param_2 + -0xef0ffb3) = (*(char *)(param_2 + -0xef0ffb3) - unaff_DIL) - in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcc6a FUN_14d7bcc6a body=4 status=ok
// SIG undefined FUN_14d7bcc6a(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7bcc7b) */

void FUN_14d7bcc6a(void)

{
  byte *pbVar1;
  int in_EAX;
  byte unaff_BL;
  undefined4 *unaff_RSI;
  
  pbVar1 = (byte *)((ulonglong)(uint)(in_EAX >> 0x1f) + 0x2e);
  *pbVar1 = *pbVar1 | unaff_BL;
  pbVar1 = (byte *)((ulonglong)(uint)(in_EAX >> 0x1f) - 0xd);
  *pbVar1 = *pbVar1 & (byte)((ulonglong)&stack0x00000000 >> 8);
  out(*unaff_RSI,(short)(in_EAX >> 0x1f));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcc6e FUN_14d7bcc6e body=24 status=ok
// SIG undefined FUN_14d7bcc6e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7bcc7b) */

void FUN_14d7bcc6e(undefined8 param_1,longlong param_2)

{
  byte unaff_BL;
  undefined4 *unaff_RSI;
  
  *(byte *)(param_2 + 0x2e) = *(byte *)(param_2 + 0x2e) | unaff_BL;
  *(byte *)(param_2 + -0xd) = *(byte *)(param_2 + -0xd) & (byte)((ulonglong)&stack0x00000000 >> 8);
  out(*unaff_RSI,(short)param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcc8a FUN_14d7bcc8a body=7 status=ok
// SIG undefined FUN_14d7bcc8a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bcc8a(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcc96 FUN_14d7bcc96 body=20 status=ok
// SIG undefined FUN_14d7bcc96(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bccf1) overlaps instruction at (ram,0x00014d7bcceb)
    */

undefined8 FUN_14d7bcc96(longlong param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar3;
  undefined6 uVar4;
  int *piVar2;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 *unaff_RBP;
  longlong unaff_RDI;
  bool bVar7;
  undefined1 auStack_9e09 [40441];
  undefined8 uStack_10;
  
  bVar5 = (byte)((ulonglong)param_2 >> 8);
  bVar3 = (byte)((ulonglong)param_1 >> 8);
  bVar7 = *(byte *)(param_1 + 0x7e) <= bVar3;
  uVar4 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar3 = bVar3 - *(byte *)(param_1 + 0x7e);
  if (bVar7 && bVar3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((char)bVar3 < '\0') {
    piVar2 = (int *)CONCAT62(uVar4,CONCAT11(bVar3 + bVar5,(char)param_1));
    *piVar2 = (*piVar2 + 0x58) - (uint)CARRY1(bVar3,bVar5);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (CONCAT62(uVar4,CONCAT11(bVar3,(char)param_1)) == 1 || bVar3 == 0) {
    return 0x1f61445e;
  }
  if (!bVar7) {
    puVar6 = (undefined8 *)&stack0xfffffffffffffff8;
    cVar1 = '\x04';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *unaff_RBP;
      cVar1 = cVar1 + -1;
    } while ('\0' < cVar1);
    *(byte *)(unaff_RDI + 1) = *(byte *)(unaff_RDI + 1) & (char)auStack_9e09 - 0x20U;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bccab FUN_14d7bccab body=41 status=ok
// SIG undefined FUN_14d7bccab(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bccc4) overlaps instruction at (ram,0x00014d7bccc3)
    */

void FUN_14d7bccab(undefined8 param_1,undefined2 *param_2)

{
  char cVar1;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined2 in_GS;
  bool in_ZF;
  char in_SF;
  char in_OF;
  undefined1 auStack_9e09 [40441];
  undefined8 uStack_10;
  
  if (in_ZF || in_OF != in_SF) {
    puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
    cVar1 = '\x04';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar2 = puVar2 + -1;
      *puVar2 = *unaff_RBP;
      cVar1 = cVar1 + -1;
    } while ('\0' < cVar1);
    *(byte *)(unaff_RDI + 1) = *(byte *)(unaff_RDI + 1) & (char)auStack_9e09 - 0x20U;
  }
  else if (!in_ZF && in_OF == in_SF) {
    if (!in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BH;
    uRam00000000b0e9cf09 = in((short)param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RSI + 0x4daeaceb) =
       *(char *)(unaff_RSI + 0x4daeaceb) + (char)((ulonglong)param_2 >> 8);
  *param_2 = in_GS;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bccd7 FUN_14d7bccd7 body=6 status=ok
// SIG undefined FUN_14d7bccd7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bccd7(void)

{
  byte unaff_SPL;
  byte *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI & unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bccdf FUN_14d7bccdf body=6 status=ok
// SIG undefined FUN_14d7bccdf(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bccdf(byte param_1,undefined2 param_2)

{
  undefined1 uVar1;
  byte bVar2;
  ushort uVar3;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  undefined1 *unaff_RDI;
  undefined1 in_CF;
  bool in_PF;
  
  bVar2 = (param_1 & 0x1f) % 9;
  uVar3 = CONCAT11(in_CF,*(undefined1 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  uVar3 = uVar3 >> bVar2 | uVar3 << 9 - bVar2;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = (char)uVar3;
  if (!in_PF) {
    *(char *)(unaff_RBP + 0x3af990b5) =
         *(char *)(unaff_RBP + 0x3af990b5) + (char)param_2 + ((uVar3 & 0x100) != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BH;
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcce3 FUN_14d7bcce3 body=7 status=ok
// SIG undefined FUN_14d7bcce3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bcce3(undefined8 param_1,char param_2)

{
  longlong unaff_RBP;
  char in_CF;
  
  *(char *)(unaff_RBP + 0x3af990b5) = *(char *)(unaff_RBP + 0x3af990b5) + param_2 + in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcceb thunk_EXT_FUN_9fa56163 body=7 status=ok
// SIG undefined thunk_EXT_FUN_9fa56163(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_9fa56163(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bccf3 FUN_14d7bccf3 body=8 status=ok
// SIG undefined FUN_14d7bccf3(void)

/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_14d7bccf3(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  longlong unaff_RDI;
  bool in_CF;
  char in_ZF;
  undefined1 auStack_9e09 [40441];
  undefined8 uStack_10;
  
  if (param_1 == 1 || in_ZF != '\0') {
    return 0x1f61445e;
  }
  if (in_CF) {
    puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
    cVar1 = '\x04';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar2 = puVar2 + -1;
      *puVar2 = *unaff_RBP;
      cVar1 = cVar1 + -1;
    } while ('\0' < cVar1);
    *(byte *)(unaff_RDI + 1) = *(byte *)(unaff_RDI + 1) & (char)auStack_9e09 - 0x20U;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bccfb FUN_14d7bccfb body=5 status=ok
// SIG undefined FUN_14d7bccfb(void)

byte FUN_14d7bccfb(void)

{
  byte in_AL;
  
  return in_AL | 10;
}



// FUNCTION 14d7bcd03 FUN_14d7bcd03 body=26 status=ok
// SIG undefined FUN_14d7bcd03(void)

uint FUN_14d7bcd03(char *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  
  pbVar1 = (byte *)(unaff_RBP + 0x38067320);
  *pbVar1 = *pbVar1 >> 1 | *pbVar1 << 7;
  uVar2 = *unaff_RSI;
  *param_1 = *param_1 >> 1;
  return CONCAT22((short)((uint)uVar2 >> 0x10),CONCAT11(4,(char)uVar2)) & (int)unaff_RSI + 4U;
}



// FUNCTION 14d7bcd28 FUN_14d7bcd28 body=15 status=ok
// SIG undefined FUN_14d7bcd28(void)

void FUN_14d7bcd28(void)

{
  return;
}



// FUNCTION 14d7bcd3d FUN_14d7bcd3d body=15 status=ok
// SIG undefined FUN_14d7bcd3d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bcd3d(void)

{
  undefined4 unaff_EBP;
  
  _DAT_daa4423c = unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcd4d FUN_14d7bcd4d body=26 status=ok
// SIG undefined FUN_14d7bcd4d(void)

/* WARNING: Instruction at (ram,0x00014d7bcd58) overlaps instruction at (ram,0x00014d7bcd57)
    */

void FUN_14d7bcd4d(byte param_1,undefined2 param_2)

{
  byte *pbVar1;
  code *pcVar2;
  longlong lVar3;
  
  do {
    pcVar2 = (code *)swi(0xee);
    lVar3 = (*pcVar2)();
    pbVar1 = (byte *)(lVar3 * 9 + -0x32d22a1e);
    *pbVar1 = *pbVar1 & param_1;
    out(param_2,(char)lVar3);
  } while( true );
}



// FUNCTION 14d7bcd6d FUN_14d7bcd6d body=5 status=ok
// SIG undefined FUN_14d7bcd6d(void)

void FUN_14d7bcd6d(void)

{
  undefined4 in_EAX;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
  char in_SF;
  char in_OF;
  
  *unaff_RDI = in_EAX;
  if (in_OF != in_SF) {
    FUN_14d7bcd86();
    return;
  }
  *(char *)(unaff_RSI + -0x55) = *(char *)(unaff_RSI + -0x55) + '=';
  return;
}



// FUNCTION 14d7bcd75 FUN_14d7bcd75 body=11 status=ok
// SIG undefined FUN_14d7bcd75(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bcd75(void)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong in_RAX;
  longlong unaff_RSI;
  undefined2 in_SS;
  
  uVar1 = *(undefined4 *)(unaff_RSI + -0x71);
  *(undefined2 *)(in_RAX + -0x24d1ea6f) = in_SS;
  pcVar2 = (code *)swi(0x6e);
  (*pcVar2)(uVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcd86 FUN_14d7bcd86 body=3 status=ok
// SIG undefined FUN_14d7bcd86(void)

/* WARNING: Control flow encountered bad instruction data */

ulonglong FUN_14d7bcd86(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  ulonglong in_RAX;
  char unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  bool in_CF;
  bool in_ZF;
  bool in_SF;
  
  if (!in_CF && !in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_SF) {
    pcVar1 = (char *)(param_2 + -0x1630f641 +
                     CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 8);
    *pcVar1 = *pcVar1 + unaff_BL;
    return in_RAX & 0xffffffffffffff00;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcd89 FUN_14d7bcd89 body=1 status=ok
// SIG undefined FUN_14d7bcd89(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bcd89(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcd91 FUN_14d7bcd91 body=4 status=ok
// SIG undefined FUN_14d7bcd91(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bcd96) overlaps instruction at (ram,0x00014d7bcd95)
    */

void FUN_14d7bcd91(longlong param_1,undefined2 param_2)

{
  char unaff_BH;
  longlong unaff_RBP;
  longlong unaff_RDI;
  bool in_ZF;
  char in_SF;
  bool in_OF;
  float10 in_ST0;
  
  if (in_OF) {
    if (!in_ZF && in_SF == '\x01') {
      *(short *)(param_1 + -0x5a5867a0 + unaff_RBP * 4) = (short)ROUND(in_ST0);
      in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *(char *)(unaff_RDI + 0x17) = *(char *)(unaff_RDI + 0x17) + unaff_BH;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcdaf FUN_14d7bcdaf body=8 status=ok
// SIG undefined FUN_14d7bcdaf(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bcdaf(longlong param_1,undefined2 param_2)

{
  longlong unaff_RBP;
  float10 in_ST0;
  
  *(short *)(param_1 + -0x5a5867a0 + unaff_RBP * 4) = (short)ROUND(in_ST0);
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcdbf FUN_14d7bcdbf body=6 status=ok
// SIG undefined FUN_14d7bcdbf(void)

/* WARNING: Instruction at (ram,0x00014d7bcdc6) overlaps instruction at (ram,0x00014d7bcdc5)
    */
/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bcdbf(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  byte bVar3;
  uint in_EAX;
  byte *pbVar5;
  int iVar6;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_PF;
  uint *puVar4;
  
  *unaff_RDI = *unaff_RSI;
  if (in_PF) {
    if (param_1 == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar1 = in((short)param_2);
    *(undefined1 *)(unaff_RDI + 1) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*(undefined1 *)(unaff_RSI + 1),(short)param_2);
  iVar6 = (int)CONCAT71((int7)((ulonglong)param_2 >> 8),
                        (char)param_2 - (char)((ulonglong)param_2 >> 8));
  *(byte *)((longlong)unaff_RDI + 0x1b7f1d61) = *(byte *)((longlong)unaff_RDI + 0x1b7f1d61) | 0x3c;
  bVar3 = (byte)(in_EAX ^ 0x698d0021) & 0xd7;
  puVar4 = (uint *)((ulonglong)(in_EAX ^ 0x698d0021) & 0xffffffffffffffd7);
  if (((POPCOUNT(bVar3) & 1U) != 0) && (-1 < (char)bVar3)) {
    *puVar4 = *puVar4 & (uint)puVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar2 = (code *)swi(0x81);
  pbVar5 = (byte *)(*pcVar2)();
  *pbVar5 = *pbVar5 | (byte)pbVar5;
  *(int *)(longlong)(iVar6 + -0x4ab22012) = *(int *)(longlong)(iVar6 + -0x4ab22012) + -1;
  FUN_14d7bcdd2();
  return;
}



// FUNCTION 14d7bcdcc FUN_14d7bcdcc body=6 status=ok
// SIG undefined FUN_14d7bcdcc(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bcdcc(undefined8 param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  int in_EAX;
  uint uVar3;
  byte *pbVar4;
  longlong unaff_RBX;
  byte in_CF;
  
  uVar3 = (in_EAX + -0x243c1b7f) - (uint)in_CF;
  uVar2 = CONCAT31((int3)(uVar3 >> 8),*(undefined1 *)(unaff_RBX + ((ulonglong)uVar3 & 0xff)));
  if (((POPCOUNT(uVar3 & 0xff) & 1U) != 0) && (-1 < (int)uVar3)) {
    *(uint *)(ulonglong)uVar2 = *(uint *)(ulonglong)uVar2 & uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (code *)swi(0x81);
  pbVar4 = (byte *)(*pcVar1)();
  *pbVar4 = *pbVar4 | (byte)pbVar4;
  *(int *)(longlong)(param_2 + -0x4ab22012) = *(int *)(longlong)(param_2 + -0x4ab22012) + -1;
  FUN_14d7bcdd2();
  return;
}



// FUNCTION 14d7bcdd2 FUN_14d7bcdd2 body=5 status=ok
// SIG undefined FUN_14d7bcdd2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bcdd2(undefined8 param_1,int param_2)

{
  code *pcVar1;
  undefined4 in_EAX;
  uint uVar2;
  undefined4 in_register_00000004;
  byte *pbVar3;
  longlong unaff_RBX;
  bool in_PF;
  bool in_SF;
  
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)(unaff_RBX + (ulonglong)(byte)in_EAX));
  if ((!in_PF) && (!in_SF)) {
    *(uint *)CONCAT44(in_register_00000004,uVar2) =
         *(uint *)CONCAT44(in_register_00000004,uVar2) & uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (code *)swi(0x81);
  pbVar3 = (byte *)(*pcVar1)();
  *pbVar3 = *pbVar3 | (byte)pbVar3;
  *(int *)(longlong)(param_2 + -0x4ab22012) = *(int *)(longlong)(param_2 + -0x4ab22012) + -1;
  FUN_14d7bcdd2();
  return;
}



// FUNCTION 14d7bcdd8 FUN_14d7bcdd8 body=14 status=ok
// SIG undefined FUN_14d7bcdd8(void)

void FUN_14d7bcdd8(undefined8 param_1,int param_2)

{
  code *pcVar1;
  byte *pbVar2;
  
  pcVar1 = (code *)swi(0x81);
  pbVar2 = (byte *)(*pcVar1)();
  *pbVar2 = *pbVar2 | (byte)pbVar2;
  *(int *)(longlong)(param_2 + -0x4ab22012) = *(int *)(longlong)(param_2 + -0x4ab22012) + -1;
  FUN_14d7bcdd2();
  return;
}



// FUNCTION 14d7bcded FUN_14d7bcded body=2 status=ok
// SIG undefined FUN_14d7bcded(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bcded(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bce06 FUN_14d7bce06 body=28 status=ok
// SIG undefined FUN_14d7bce06(void)

void FUN_14d7bce06(void)

{
  short in_AX;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       (int)in_AX + *(int *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x41171d43);
  return;
}



// FUNCTION 14d7bce23 FUN_14d7bce23 body=4 status=ok
// SIG undefined FUN_14d7bce23(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bce23(undefined8 param_1,undefined8 param_2)

{
  longlong in_RAX;
  char unaff_BL;
  char *unaff_RSI;
  char in_CF;
  
  LOCK();
  *unaff_RSI = (*unaff_RSI - (char)((ulonglong)param_2 >> 8)) - in_CF;
  UNLOCK();
  *(char *)(in_RAX + 0x13) = *(char *)(in_RAX + 0x13) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bce40 FUN_14d7bce40 body=1 status=ok
// SIG undefined FUN_14d7bce40(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bce40(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bce65 FUN_14d7bce65 body=1 status=ok
// SIG undefined FUN_14d7bce65(void)

void FUN_14d7bce65(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7bce69 FUN_14d7bce69 body=4 status=ok
// SIG undefined FUN_14d7bce69(void)

void FUN_14d7bce69(undefined8 param_1,undefined2 param_2)

{
  in(param_2);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7bce7a FUN_14d7bce7a body=13 status=ok
// SIG undefined FUN_14d7bce7a(void)

void FUN_14d7bce7a(undefined8 param_1,undefined2 param_2)

{
  in(param_2);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7bcee4 FUN_14d7bcee4 body=38 status=ok
// SIG undefined FUN_14d7bcee4(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bcee6) overlaps instruction at (ram,0x00014d7bcee5)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7bcea2) */
/* WARNING: Removing unreachable block (ram,0x00014d7bcf06) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bcee4(longlong param_1,byte *param_2)

{
  char *pcVar1;
  undefined2 uVar2;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  char *unaff_RDI;
  int in_R10D;
  longlong unaff_R13;
  byte bVar3;
  
  while( true ) {
    *(char **)((longlong)register0x00000020 + -8) = unaff_RDI;
    *unaff_RDI = *unaff_RDI >> ((byte)param_1 & 0x1f);
    register0x00000020 = (BADSPACEBASE *)&DAT_9802b656;
    bVar3 = (byte)((ulonglong)param_2 >> 8) & *param_2;
    uVar2 = CONCAT11(bVar3,(char)param_2);
    param_2 = (byte *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),uVar2);
    if (bVar3 != 0) break;
    in(uVar2);
    *(int *)(&DAT_9802b656 + unaff_R13 * 4) =
         (*(int *)(&DAT_9802b656 + unaff_R13 * 4) - in_R10D) + -1;
    *(undefined1 *)(param_1 + 0x3d5fd4d2) = 0;
    pcVar1 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x1c);
    *pcVar1 = *pcVar1 - (char)unaff_ESI;
    param_1 = param_1 + -1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcf12 FUN_14d7bcf12 body=26 status=ok
// SIG undefined FUN_14d7bcf12(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7bcf26) */
/* WARNING: Removing unreachable block (ram,0x00014d7bcf3a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14d7bcf12(void)

{
  return CONCAT31((int3)((uint)_DAT_761848ef3d5fd4d3 >> 8),(char)_DAT_761848ef3d5fd4d3 + 'w');
}



// FUNCTION 14d7bcf2f FUN_14d7bcf2f body=9 status=ok
// SIG undefined FUN_14d7bcf2f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bcf2f(undefined8 param_1,undefined2 param_2)

{
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcf40 FUN_14d7bcf40 body=1 status=ok
// SIG undefined FUN_14d7bcf40(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bcf40(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcf48 FUN_14d7bcf48 body=3 status=ok
// SIG undefined FUN_14d7bcf48(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bcf6a) overlaps instruction at (ram,0x00014d7bcf69)
    */

undefined8 * FUN_14d7bcf48(ulonglong param_1,undefined8 param_2)

{
  int *piVar1;
  byte *pbVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  undefined8 *in_RAX;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined2 uVar8;
  undefined6 uVar9;
  byte unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  undefined8 *unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  byte in_ZF;
  byte in_SF;
  byte in_OF;
  
  uVar9 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar8 = (undefined2)param_2;
  piVar1 = (int *)(unaff_RDI + -0x7d);
  bVar5 = (byte)param_1 & 0x1f;
  *piVar1 = *piVar1 >> bVar5;
  bVar4 = (param_1 & 0x1f) != 0;
  if (!(bool)(!bVar4 & in_ZF | (bVar4 && *piVar1 == 0)) &&
      (byte)(bVar5 != 1 & in_OF) == (byte)(!bVar4 & in_SF | (bVar4 && *piVar1 < 0))) {
    return in_RAX;
  }
  *(uint *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) + 0x50) =
       CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  uVar7 = CONCAT62((int6)(param_1 >> 0x10),
                   CONCAT11((byte)(param_1 >> 8) ^ (byte)((ulonglong)in_RAX >> 8),(byte)param_1));
  *(char *)((longlong)in_RAX + -0x6ed27c9d) = *(char *)((longlong)in_RAX + -0x6ed27c9d) + unaff_BH;
  *(uint *)(unaff_RSI + 0x1e) = *(uint *)(unaff_RSI + 0x1e) ^ (uint)uVar7;
  pcVar3 = (code *)*in_RAX;
  *unaff_RBP = 0x14d7bcf69;
  uVar6 = (*pcVar3)();
  pbVar2 = (byte *)(CONCAT62(uVar9,uVar8) * 4 + 0x1071657fe);
  *pbVar2 = *pbVar2 >> 1 | *pbVar2 << 7;
  if (((uint)CONCAT71((int7)((ulonglong)uVar6 >> 8),(byte)uVar6 & unaff_BL) | 0xda0d73e6) != 0) {
    return (undefined8 *)(uVar7 & 0xffffffff);
  }
  uRam00000000b60019fe = in(uVar8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcf4c FUN_14d7bcf4c body=46 status=ok
// SIG undefined FUN_14d7bcf4c(void)

/* WARNING: Control flow encountered bad instruction data */

ulonglong FUN_14d7bcf4c(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  undefined4 uVar3;
  code *pcVar4;
  int in_EAX;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined6 uVar10;
  undefined8 *unaff_RBP;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
  byte in_CF;
  undefined8 unaff_retaddr;
  
  uVar10 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar8 = (undefined1)param_2;
  uVar5 = (in_EAX + -0x19febf) - (uint)in_CF;
  uVar9 = 0x89;
  uVar7 = CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                   CONCAT11((byte)((ulonglong)param_1 >> 8) ^ (byte)(uVar5 >> 8),(char)param_1));
  pcVar1 = (char *)((longlong)(ulonglong)uVar5 + -0x6ed27c9d);
  *pcVar1 = *pcVar1 + (char)((ulonglong)unaff_retaddr >> 8);
  *(uint *)(unaff_RSI + 0x1e) = *(uint *)(unaff_RSI + 0x1e) ^ (uint)uVar7;
  pcVar4 = *(code **)(ulonglong)uVar5;
  *unaff_RBP = 0x14d7bcf69;
  uVar6 = (*pcVar4)();
  pbVar2 = (byte *)(unaff_RDI + CONCAT62(uVar10,CONCAT11(uVar9,uVar8)) + 0x14458f80);
  *pbVar2 = *pbVar2 >> 1 | *pbVar2 << 7;
  if (((uint)CONCAT71((int7)((ulonglong)uVar6 >> 8),(byte)uVar6 & (byte)unaff_retaddr) | 0xda0d73e6)
      != 0) {
    return uVar7 & 0xffffffff;
  }
  uVar3 = in(CONCAT11(uVar9,uVar8));
  *unaff_RDI = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcf7b FUN_14d7bcf7b body=5 status=ok
// SIG undefined FUN_14d7bcf7b(void)

void FUN_14d7bcf7b(undefined8 param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  
  out(param_2,in_EAX);
  return;
}



// FUNCTION 14d7bcf8c FUN_14d7bcf8c body=3 status=ok
// SIG undefined FUN_14d7bcf8c(void)

void FUN_14d7bcf8c(longlong param_1)

{
  byte bVar1;
  undefined4 in_EAX;
  byte in_CF;
  
  bVar1 = (byte)((uint)in_EAX >> 8);
  cRam78f3007663bce0de =
       ((char)in_EAX -
       (bVar1 < *(byte *)(param_1 + 0x22) || (byte)(bVar1 - *(byte *)(param_1 + 0x22)) < in_CF)) +
       -0x80;
  return;
}



// FUNCTION 14d7bcf90 FUN_14d7bcf90 body=2 status=ok
// SIG undefined FUN_14d7bcf90(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bcf90(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcf94 FUN_14d7bcf94 body=2 status=ok
// SIG undefined FUN_14d7bcf94(void)

void FUN_14d7bcf94(void)

{
  char in_AL;
  
  cRam78f3007663bce0de = in_AL + '\x13';
  return;
}



// FUNCTION 14d7bcf98 FUN_14d7bcf98 body=28 status=ok
// SIG undefined FUN_14d7bcf98(void)

/* WARNING: Control flow encountered bad instruction data */

ulonglong FUN_14d7bcf98(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *in_RAX;
  ulonglong uVar5;
  byte unaff_BL;
  char unaff_BH;
  undefined8 *unaff_RBP;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
  char in_ZF;
  bool in_SF;
  
  param_1 = param_1 + -1;
  if (param_1 != 0 && in_ZF == '\0') {
    uVar5 = CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                     CONCAT11((byte)((ulonglong)param_1 >> 8) ^ (byte)((ulonglong)in_RAX >> 8),
                              (char)param_1));
    *(char *)((longlong)in_RAX + -0x6ed27c9d) = *(char *)((longlong)in_RAX + -0x6ed27c9d) + unaff_BH
    ;
    *(uint *)(unaff_RSI + 0x1e) = *(uint *)(unaff_RSI + 0x1e) ^ (uint)uVar5;
    pcVar3 = (code *)*in_RAX;
    *unaff_RBP = 0x14d7bcf69;
    uVar4 = (*pcVar3)();
    pbVar1 = (byte *)(unaff_RDI + param_2 + 0x14458f80);
    *pbVar1 = *pbVar1 >> 1 | *pbVar1 << 7;
    if (((uint)CONCAT71((int7)((ulonglong)uVar4 >> 8),(byte)uVar4 & unaff_BL) | 0xda0d73e6) != 0) {
      return uVar5 & 0xffffffff;
    }
    uVar2 = in((short)param_2);
    *unaff_RDI = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcfbc FUN_14d7bcfbc body=7 status=ok
// SIG undefined FUN_14d7bcfbc(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bcfbc(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  undefined4 *unaff_RDI;
  
  *(int *)((longlong)unaff_RDI + 0x6a25738e) =
       *(int *)((longlong)unaff_RDI + 0x6a25738e) + unaff_EBP;
  *unaff_RDI = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcfc4 FUN_14d7bcfc4 body=4 status=ok
// SIG undefined FUN_14d7bcfc4(void)

void FUN_14d7bcfc4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7bcfc8 FUN_14d7bcfc8 body=7 status=ok
// SIG undefined FUN_14d7bcfc8(void)

void FUN_14d7bcfc8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7bcfd0 FUN_14d7bcfd0 body=1 status=ok
// SIG undefined FUN_14d7bcfd0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bcfd0(undefined8 param_1,undefined2 param_2)

{
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcfd4 FUN_14d7bcfd4 body=8 status=ok
// SIG undefined FUN_14d7bcfd4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bcfd4(undefined8 param_1,undefined2 param_2)

{
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcfe5 FUN_14d7bcfe5 body=3 status=ok
// SIG undefined FUN_14d7bcfe5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bcfe5(void)

{
  char *pcVar1;
  uint in_EAX;
  int *piVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  int unaff_EBP;
  uint *unaff_RSI;
  
  piVar2 = (int *)(ulonglong)in_EAX;
  pcVar1 = (char *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x6a);
  *pcVar1 = *pcVar1 + (char)in_EAX;
  *piVar2 = *piVar2 + unaff_EBP;
  if (-1 < *piVar2) {
    *unaff_RSI = *unaff_RSI << 1 | (uint)((int)*unaff_RSI < 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcfe9 FUN_14d7bcfe9 body=4 status=ok
// SIG undefined FUN_14d7bcfe9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bcfe9(undefined8 param_1,int *param_2)

{
  char *pcVar1;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  int unaff_EBP;
  uint *unaff_RSI;
  
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x6a);
  *pcVar1 = *pcVar1 + (char)param_2;
  *param_2 = *param_2 + unaff_EBP;
  if (-1 < *param_2) {
    *unaff_RSI = *unaff_RSI << 1 | (uint)((int)*unaff_RSI < 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcfee FUN_14d7bcfee body=9 status=ok
// SIG undefined FUN_14d7bcfee(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bcfee(void)

{
  uint *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI << 1 | (uint)((int)*unaff_RSI < 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bcffe FUN_14d7bcffe body=2 status=ok
// SIG undefined FUN_14d7bcffe(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bcffe(void)

{
  int *piVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  
  piVar1 = (int *)((CONCAT44(in_register_00000004,in_EAX) | 0x1d) +
                  (CONCAT44(in_register_00000004,in_EAX) | 0x1d));
  *piVar1 = *piVar1 + (in_EAX | 0x1d);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd007 FUN_14d7bd007 body=11 status=ok
// SIG undefined FUN_14d7bd007(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14d7bd007(void)

{
  uint uVar1;
  uint *puVar2;
  longlong unaff_RDI;
  float10 in_ST0;
  
  uVar1 = _DAT_28c0f13301af8f0f;
  puVar2 = (uint *)(ulonglong)_DAT_28c0f13301af8f0f;
  *(short *)(unaff_RDI + -0x2a) = (short)ROUND(in_ST0);
  *puVar2 = *puVar2 << 1 | (uint)((int)*puVar2 < 0);
  return CONCAT31((int3)(uVar1 >> 8),(char)uVar1 - (char)*puVar2);
}



// FUNCTION 14d7bd013 FUN_14d7bd013 body=1 status=ok
// SIG undefined FUN_14d7bd013(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd013(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd01c FUN_14d7bd01c body=20 status=ok
// SIG undefined FUN_14d7bd01c(void)

/* WARNING: Control flow encountered bad instruction data */

char FUN_14d7bd01c(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char in_AL;
  int unaff_EBP;
  uint *unaff_RSI;
  bool in_PF;
  char in_ZF;
  
  if (in_PF) {
    *unaff_RSI = *unaff_RSI << 1 | (uint)((int)*unaff_RSI < 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 + -1 == 0 || in_ZF == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(param_1 + -0x2a824f12);
  *pcVar1 = *pcVar1 + (char)((ulonglong)(param_1 + -1) >> 8);
  if ((POPCOUNT(*pcVar1) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(param_2 + 0x6a) = *(int *)(param_2 + 0x6a) + unaff_EBP;
  return in_AL + -0x15;
}



// FUNCTION 14d7bd02a FUN_14d7bd02a body=25 status=ok
// SIG undefined FUN_14d7bd02a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd02a(uint param_1,uint param_2)

{
  short sVar1;
  int unaff_EBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  bool bVar2;
  
  *(int *)(unaff_RDI + -0x14a50817) = *(int *)(unaff_RDI + -0x14a50817) + unaff_EBP;
  param_1 = param_1 ^ param_2;
  sVar1 = (ushort)(byte)unaff_RDI * (ushort)*(byte *)(unaff_RSI + 0x59987dda);
  bVar2 = (char)((ushort)sVar1 >> 8) != '\0';
  if (-1 < (int)param_1) {
    out((short)param_2,((char)sVar1 + -0x30) - bVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar2 || param_1 == 0) {
    *(int *)(ulonglong)param_1 = *(int *)(ulonglong)param_1 + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd03e FUN_14d7bd03e body=9 status=ok
// SIG undefined FUN_14d7bd03e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd03e(char param_1,undefined2 param_2)

{
  undefined1 in_AL;
  undefined7 in_register_00000001;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) - param_1;
  out(param_2,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd05b FUN_14d7bd05b body=3 status=ok
// SIG undefined FUN_14d7bd05b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd05b(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd067 FUN_14d7bd067 body=5 status=ok
// SIG undefined FUN_14d7bd067(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bd052) overlaps instruction at (ram,0x00014d7bd04f)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bd067(char *param_1,longlong param_2)

{
  char in_AL;
  uint uVar1;
  int unaff_EBP;
  undefined1 in_PF;
  char in_SF;
  bool in_OF;
  
  if (in_OF == (bool)in_SF) {
    if (in_OF == (bool)in_SF) {
      *param_1 = *param_1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (!in_OF) {
      _DAT_051de777 = 0x51de77f;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar1 = in(4);
    in_PF = (POPCOUNT(uVar1 & 0xef) & 1U) == 0;
  }
  if ((bool)in_PF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(param_2 + 0x6a) = *(int *)(param_2 + 0x6a) + unaff_EBP;
  return;
}



// FUNCTION 14d7bd06f FUN_14d7bd06f body=1 status=ok
// SIG undefined FUN_14d7bd06f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd06f(undefined8 param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  
  out(param_2,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd077 FUN_14d7bd077 body=10 status=ok
// SIG undefined FUN_14d7bd077(void)

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_14d7bd077(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  undefined4 in_EAX;
  byte bVar3;
  char cVar4;
  char *pcVar5;
  ulonglong unaff_RBP;
  uint unaff_EDI;
  
  cVar4 = (char)((ulonglong)param_1 >> 8);
  uRam00000000ecb50e6b = uRam00000000ecb50e6b & unaff_EDI;
  pbVar1 = (byte *)(param_2 + -0x54);
  bVar3 = (byte)param_2;
  pcVar5 = (char *)CONCAT71((int7)((ulonglong)param_2 >> 8),bVar3 + *pbVar1);
  if (!SCARRY1(bVar3,*pbVar1)) {
    *pcVar5 = *pcVar5 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar3 = (byte)(CONCAT11(CARRY1(bVar3,*pbVar1),cVar4) >> 5) | cVar4 << 4;
  pcVar2 = (char *)(CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(bVar3,(char)param_1)) +
                   -0x2a824f11);
  *pcVar2 = *pcVar2 + bVar3;
  if ((POPCOUNT(*pcVar2) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(pcVar5 + 0x6a) =
       *(int *)(pcVar5 + 0x6a) +
       (int)CONCAT71((int7)((unaff_RBP & 0xffffffff) >> 8),(char)(unaff_RBP & 0xffffffff) + '`');
  return CONCAT31((int3)(char)((uint)in_EAX >> 8),(char)in_EAX + -0x15);
}



// FUNCTION 14d7bd083 FUN_14d7bd083 body=10 status=ok
// SIG undefined FUN_14d7bd083(void)

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_14d7bd083(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined8 in_RAX;
  byte bVar3;
  char cVar4;
  undefined4 unaff_EBP;
  undefined1 *unaff_RSI;
  undefined1 in_CF;
  bool in_OF;
  
  cVar4 = (char)((ulonglong)param_1 >> 8);
  uVar2 = *unaff_RSI;
  if (!in_OF) {
    *param_2 = *param_2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar3 = (byte)(CONCAT11(in_CF,cVar4) >> 5) | cVar4 << 4;
  pcVar1 = (char *)(CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(bVar3,(char)param_1)) +
                   -0x2a824f11);
  *pcVar1 = *pcVar1 + bVar3;
  if ((POPCOUNT(*pcVar1) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(param_2 + 0x6a) =
       *(int *)(param_2 + 0x6a) + (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar2);
  return CONCAT31((int3)(char)((uint)unaff_EBP >> 8),(char)unaff_EBP + -0x15);
}



// FUNCTION 14d7bd0a4 FUN_14d7bd0a4 body=29 status=ok
// SIG undefined FUN_14d7bd0a4(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bd0a4(longlong param_1)

{
  int iVar1;
  uint uVar2;
  int unaff_EBX;
  int unaff_EBP;
  int *unaff_RDI;
  
  *(uint *)(param_1 + -0x13) = *(uint *)(param_1 + -0x13) ^ 0xd332110e;
  iVar1 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI - unaff_EBX;
  if (!SBORROW4(iVar1,unaff_EBX)) {
    _DAT_051de777 = 0x51de77f;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = in(4);
  if ((POPCOUNT(uVar2 & 0xef) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iRam000000009683b912 = iRam000000009683b912 + unaff_EBP;
  return;
}



// FUNCTION 14d7bd0d1 FUN_14d7bd0d1 body=6 status=ok
// SIG undefined FUN_14d7bd0d1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd0d1(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined8 in_RAX;
  undefined1 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  uVar1 = in(0x9c);
  *(int *)(unaff_RDI + 1) = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar1);
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd0d9 thunk_FUN_14d7bd083 body=2 status=ok
// SIG undefined thunk_FUN_14d7bd083(void)

void thunk_FUN_14d7bd083(void)

{
  FUN_14d7bd083();
  return;
}



// FUNCTION 14d7bd0e9 FUN_14d7bd0e9 body=16 status=ok
// SIG undefined FUN_14d7bd0e9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd0e9(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd0ff FUN_14d7bd0ff body=4 status=ok
// SIG undefined FUN_14d7bd0ff(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd0ff(ulonglong param_1,longlong param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *unaff_RSI;
  longlong unaff_RDI;
  undefined2 in_CS;
  bool in_PF;
  
  if (!in_PF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = *unaff_RSI;
  *(undefined2 *)(param_2 + -0x11ff6927) = in_CS;
  *(char *)(param_2 + -0x625eaa49) = *(char *)(param_2 + -0x625eaa49) >> ((byte)param_1 & 0x1f);
  pbVar2 = (byte *)(param_1 & 0xffffffff);
  *pbVar2 = *pbVar2 >> 1 | *pbVar2 << 7;
  if ((bVar1 & unaff_RSI[1]) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (-1 < (char)(bVar1 & unaff_RSI[1])) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(unaff_RDI + -0x745305f4) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd110 FUN_14d7bd110 body=9 status=ok
// SIG undefined FUN_14d7bd110(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd110(ulonglong param_1)

{
  byte in_AL;
  byte *pbVar1;
  byte *unaff_RSI;
  longlong unaff_RDI;
  
  pbVar1 = (byte *)(param_1 & 0xffffffff);
  *pbVar1 = *pbVar1 >> 1 | *pbVar1 << 7;
  if ((in_AL & *unaff_RSI) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (-1 < (char)(in_AL & *unaff_RSI)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(unaff_RDI + -0x745305f4) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd120 FUN_14d7bd120 body=10 status=ok
// SIG undefined FUN_14d7bd120(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd120(longlong param_1,undefined2 param_2)

{
  int in_EAX;
  
  out(param_2,in_EAX);
  if (param_1 == 1 || in_EAX == -0x7c2305ca) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// FUNCTION 14d7bd12d FUN_14d7bd12d body=18 status=ok
// SIG undefined FUN_14d7bd12d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd12d(void)

{
  longlong unaff_RDI;
  char in_SF;
  char in_OF;
  
  if (in_OF != in_SF) {
    func_0x000115b42cc8();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(unaff_RDI + -0x745305f4) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd135 FUN_14d7bd135 body=5 status=ok
// SIG undefined FUN_14d7bd135(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd135(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd152 FUN_14d7bd152 body=5 status=ok
// SIG undefined FUN_14d7bd152(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd152(uint param_1)

{
  int *in_RAX;
  uint *unaff_RBX;
  float10 in_ST0;
  
  *unaff_RBX = *unaff_RBX | param_1;
  *in_RAX = (int)ROUND(in_ST0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd167 FUN_14d7bd167 body=10 status=ok
// SIG undefined FUN_14d7bd167(void)

void FUN_14d7bd167(void)

{
  code *pcVar1;
  
  in(0xa7);
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7bd174 FUN_14d7bd174 body=4 status=ok
// SIG undefined FUN_14d7bd174(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd174(undefined8 param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  undefined1 in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  uVar2 = *(uint *)(unaff_RSI + -0x75);
  *(char *)(param_2 + -0x35faa617) =
       *(char *)(param_2 + -0x35faa617) + (char)((ulonglong)param_2 >> 8);
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) | in_AH;
  cVar1 = *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(byte *)(unaff_RSI + 0x14) = in_AH;
  *(undefined8 *)((ulonglong)uVar2 - 8) = 0xffffffffabd0e1e0;
  if (-1 < cVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(unaff_RDI + -0x745305f4) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd185 FUN_14d7bd185 body=3 status=ok
// SIG undefined FUN_14d7bd185(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd185(longlong param_1)

{
  undefined4 in_EAX;
  undefined4 *unaff_RDI;
  char in_ZF;
  bool in_SF;
  
  if (param_1 != 1 && in_ZF != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = in_EAX;
  if (!in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(unaff_RDI + -0x1d14c17c) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd189 FUN_14d7bd189 body=18 status=ok
// SIG undefined FUN_14d7bd189(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bd189(undefined8 param_1)

{
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  unkbyte10 in_ST0;
  
  (&stack0xffffffff8ec2ebbc)[unaff_RBP * 4] =
       (&stack0xffffffff8ec2ebbc)[unaff_RBP * 4] + (char)((ulonglong)param_1 >> 8);
  _DAT_dbeeb5ff = in_ST0;
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd1a3 FUN_14d7bd1a3 body=4 status=ok
// SIG undefined FUN_14d7bd1a3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd1a3(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd1cd FUN_14d7bd1cd body=24 status=ok
// SIG undefined FUN_14d7bd1cd(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7bd21e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bd1cd(undefined8 param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  int in_EAX;
  undefined4 in_register_00000004;
  char unaff_BL;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  *(longlong *)(unaff_RSI + 0x6b8969cf) = *(longlong *)(unaff_RSI + 0x6b8969cf) + unaff_RDI;
  _DAT_152243734 = _DAT_152243734 & param_2;
  uVar1 = *(uint *)CONCAT44(in_register_00000004,in_EAX);
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) - param_2;
  if (param_2 <= uVar1 && *(int *)CONCAT44(in_register_00000004,in_EAX) != 0) {
    *(char *)(unaff_RSI + -100) = *(char *)(unaff_RSI + -100) + unaff_BL;
    pcVar2 = (code *)swi(0x8d);
    uVar3 = (*pcVar2)(param_1,in_EAX >> 0x1f);
    pcVar2 = (code *)swi(3);
    (*pcVar2)(param_1,uVar3);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd1ee FUN_14d7bd1ee body=1 status=ok
// SIG undefined FUN_14d7bd1ee(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd1ee(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd1f2 FUN_14d7bd1f2 body=4 status=ok
// SIG undefined FUN_14d7bd1f2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd1f2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd1ff FUN_14d7bd1ff body=18 status=ok
// SIG undefined FUN_14d7bd1ff(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bd204) overlaps instruction at (ram,0x00014d7bd202)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7bd21e) */

void FUN_14d7bd1ff(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 in_RAX;
  int unaff_ESI;
  longlong unaff_R14;
  char in_CF;
  char in_SF;
  char in_OF;
  float10 in_ST0;
  
  uVar4 = (undefined4)in_RAX;
  if (!(bool)in_SF) {
    cVar3 = (char)in_RAX + 'q';
    in_OF = SCARRY1((char)in_RAX,'q') != SCARRY1(cVar3,in_CF);
    cVar3 = cVar3 + in_CF;
    uVar4 = (undefined4)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar3);
    in_SF = cVar3 < '\0';
  }
  uVar1 = *(uint *)(param_4 + unaff_R14 * 2);
  if (in_OF != in_SF) {
    *(float *)(param_1 + -0x47) = (float)in_ST0;
    in((short)uVar1);
    *(int *)(ulonglong)uVar1 = *(int *)(ulonglong)uVar1 - unaff_ESI;
    *(undefined4 *)(param_1 + 0x5d99e6dd) = *(undefined4 *)(param_1 + 0x5d99e6dd);
    uVar4 = uRam48f1572b00848935;
  }
  uRam48f1572b00848935 = uVar4;
  pcVar2 = (code *)swi(0x8d);
  (*pcVar2)();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



// FUNCTION 14d7bd213 FUN_14d7bd213 body=11 status=ok
// SIG undefined FUN_14d7bd213(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7bd21e) */

void FUN_14d7bd213(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  int in_EAX;
  char unaff_BL;
  longlong unaff_RSI;
  
  *(char *)(unaff_RSI + -100) = *(char *)(unaff_RSI + -100) + unaff_BL;
  pcVar1 = (code *)swi(0x8d);
  uVar2 = (*pcVar1)(param_1,in_EAX >> 0x1f);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(param_1,uVar2);
  return;
}



// FUNCTION 14d7bd22e FUN_14d7bd22e body=7 status=ok
// SIG undefined FUN_14d7bd22e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7bd21e) */

void FUN_14d7bd22e(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  int in_EAX;
  undefined4 in_register_00000004;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  uVar2 = *(uint *)(unaff_RDI + -0x3446576a);
  if (unaff_EBX << 8 < 1) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar3 = (uint)(unaff_EBX << 7 < 0);
  uVar1 = *(uint *)CONCAT44(in_register_00000004,in_EAX);
  uVar4 = *(int *)CONCAT44(in_register_00000004,in_EAX) - param_2;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) = uVar4 - uVar3;
  if ((uVar1 < param_2 || uVar4 < uVar3) || *(int *)CONCAT44(in_register_00000004,in_EAX) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(unaff_RSI + -100) = *(undefined1 *)(unaff_RSI + -100);
  pcVar5 = (code *)swi(0x8d);
  (*pcVar5)(param_1 & uVar2,in_EAX >> 0x1f);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}



// FUNCTION 14d7bd247 FUN_14d7bd247 body=63 status=ok
// SIG undefined FUN_14d7bd247(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd247(longlong param_1,undefined8 param_2,short *param_3)

{
  short sVar1;
  unkbyte10 Var2;
  uint in_EAX;
  unkbyte10 *unaff_RSI;
  bool in_OF;
  
  if (in_OF) {
    *(char *)((longlong)unaff_RSI + -0x4877630e) =
         *(char *)((longlong)unaff_RSI + -0x4877630e) + (char)param_1;
    *(undefined8 *)(ulonglong)in_EAX = 0xffffffffddd182f3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  LOCK();
  *(int *)(param_1 + -0x43) = *(int *)(param_1 + -0x43) + -1;
  UNLOCK();
  sVar1 = *param_3;
  *(uint *)(param_1 + -0x330065e7) =
       *(uint *)(param_1 + -0x330065e7) ^
       (uint)CONCAT71((uint7)((ulonglong)&stack0x00000000 >> 8) & 0xffffff,0x37);
  Var2 = to_bcd((float10)sVar1);
  *unaff_RSI = Var2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd270 FUN_14d7bd270 body=7 status=ok
// SIG undefined FUN_14d7bd270(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd270(void)

{
  uint in_EAX;
  byte *unaff_RDI;
  
  if ((byte)in_EAX < *unaff_RDI) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined8 *)(ulonglong)in_EAX = 0xffffffffddd182f3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd27c FUN_14d7bd27c body=4 status=ok
// SIG undefined FUN_14d7bd27c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd27c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd288 FUN_14d7bd288 body=5 status=ok
// SIG undefined FUN_14d7bd288(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7bd21e) */

void FUN_14d7bd288(longlong param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  byte in_AL;
  byte bVar3;
  byte in_AH;
  short in_register_00000002;
  undefined4 in_register_00000004;
  undefined8 unaff_RBX;
  longlong unaff_RSI;
  bool in_CF;
  
  if (!in_CF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & in_AL;
  if (param_1 + -1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar3 = in_AH | (byte)((ulonglong)unaff_RBX >> 8);
  if ((char)bVar3 < '\x01') {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar1 = *(uint *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(bVar3,in_AL)));
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar3,in_AL))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar3,in_AL))) -
       param_2;
  if (uVar1 < param_2 ||
      *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar3,in_AL))) ==
      0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RSI + -100) = *(char *)(unaff_RSI + -100) + (char)unaff_RBX;
  pcVar2 = (code *)swi(0x8d);
  (*pcVar2)(param_1 + -1,(int)in_register_00000002 >> 0xf);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



// FUNCTION 14d7bd28d FUN_14d7bd28d body=3 status=ok
// SIG undefined FUN_14d7bd28d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7bd21e) */

void FUN_14d7bd28d(longlong param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_AL;
  byte bVar3;
  byte in_AH;
  short in_register_00000002;
  undefined4 in_register_00000004;
  undefined8 unaff_RBX;
  longlong unaff_RSI;
  
  if (param_1 + -1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar3 = in_AH | (byte)((ulonglong)unaff_RBX >> 8);
  if ((char)bVar3 < '\x01') {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar1 = *(uint *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(bVar3,in_AL)));
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar3,in_AL))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar3,in_AL))) -
       param_2;
  if (uVar1 < param_2 ||
      *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar3,in_AL))) ==
      0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RSI + -100) = *(char *)(unaff_RSI + -100) + (char)unaff_RBX;
  pcVar2 = (code *)swi(0x8d);
  (*pcVar2)(param_1 + -1,(int)in_register_00000002 >> 0xf);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



// FUNCTION 14d7bd291 FUN_14d7bd291 body=7 status=ok
// SIG undefined FUN_14d7bd291(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd291(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 in_RAX;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  
  uVar1 = in(param_2);
  out(0xdf,uVar1);
  iVar2 = *(int *)CONCAT44((int)((ulonglong)in_RAX >> 0x20),*unaff_RSI) + -0x40ea01;
  XRELEASE();
  LOCK();
  *(char *)(unaff_RDI + -0x5d) = *(char *)(unaff_RDI + -0x5d) + (char)((uint)iVar2 >> 8);
  UNLOCK();
  out(0x3f,(char)iVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd29a FUN_14d7bd29a body=20 status=ok
// SIG undefined FUN_14d7bd29a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd29a(void)

{
  int in_EAX;
  longlong unaff_RDI;
  
  XRELEASE();
  LOCK();
  *(char *)(unaff_RDI + -0x5d) =
       *(char *)(unaff_RDI + -0x5d) + (char)((uint)(in_EAX + -0x40ea01) >> 8);
  UNLOCK();
  out(0x3f,(char)(in_EAX + -0x40ea01));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd2ce FUN_14d7bd2ce body=71 status=ok
// SIG undefined FUN_14d7bd2ce(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bd2ce(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  undefined1 uVar4;
  code *pcVar5;
  char cVar6;
  byte bVar7;
  byte bVar9;
  undefined8 in_RAX;
  undefined7 uVar10;
  int *piVar8;
  byte bVar11;
  undefined8 uVar12;
  char *unaff_RBX;
  byte *pbVar13;
  longlong *plVar14;
  longlong *unaff_RBP;
  undefined8 *puVar15;
  longlong unaff_RSI;
  byte *pbVar16;
  int unaff_EDI;
  undefined1 *puVar17;
  char in_CF;
  bool bVar18;
  bool bVar19;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 in_ST5;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  uint unaff_retaddr;
  
  *unaff_RBX = *unaff_RBX + (char)((ulonglong)param_1 >> 8) + in_CF;
  uVar10 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar6 = in((short)param_2);
  pbVar13 = (byte *)(ulonglong)(unaff_retaddr + *(uint *)(unaff_RSI + -0x24a3ad00));
  pbVar16 = (byte *)(CONCAT71(uVar10,(cVar6 - *(char *)CONCAT71(uVar10,cVar6)) -
                                     CARRY4(unaff_retaddr,*(uint *)(unaff_RSI + -0x24a3ad00))) &
                    0xffffffff);
  uVar3 = unaff_EDI + 1;
  puVar1 = (uint *)(param_2 + 0xb6b234);
  bVar19 = (int)*puVar1 < 0;
  *puVar1 = *puVar1 >> 1;
  bVar18 = (int)*puVar1 < 0;
  piVar8 = (int *)(ulonglong)uVar3;
  puVar17 = (undefined1 *)(ulonglong)_DAT_9f95e78b00741070;
  bVar7 = (byte)uVar3;
  puVar15 = (undefined8 *)*unaff_RBP;
  DAT_74f253dbdf1e39ca = bVar7;
  while( true ) {
    pbVar13 = (byte *)((ulonglong)pbVar13 & 0xffffffffffffff00);
    bVar11 = (byte)param_2;
    if (bVar19 != bVar18) break;
    piVar8[-0x10159fab] = piVar8[-0x10159fab] >> 9;
    param_3 = unaff_RBP[1];
    unaff_RBP[1] = (longlong)pbVar13;
    bVar9 = *pbVar13;
    bVar19 = SCARRY1(*pbVar13,bVar11);
    *pbVar13 = *pbVar13 + bVar11;
    bVar18 = (char)*pbVar13 < '\0';
    if (!CARRY1(bVar9,bVar11) && *pbVar13 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *piVar8 = *piVar8 + uVar3;
  bVar9 = (byte)(uVar3 >> 8);
  DAT_12b8386c3 = DAT_12b8386c3 ^ bVar9;
  _DAT_103efee07 = CONCAT26(in_FPULastInstructionOpcode,(int6)in_FPUInstructionPointer);
  piVar8 = (int *)(ulonglong)CONCAT22((short)(uVar3 >> 0x10),CONCAT11(bVar9 - 0x15,bVar7));
  _DAT_103efedfb = in_FPUControlWord;
  _DAT_103efedff = in_FPUStatusWord;
  _DAT_103efee03 = in_FPUTagWord;
  _DAT_103efee0f = in_FPUDataPointer;
  _DAT_103efee17 = in_ST0;
  _DAT_103efee21 = in_ST1;
  _DAT_103efee2b = in_ST2;
  _DAT_103efee35 = in_ST3;
  _DAT_103efee3f = in_ST4;
  _DAT_103efee49 = in_ST5;
  _DAT_103efee53 = in_ST6;
  _DAT_103efee5d = in_ST7;
  *piVar8 = *piVar8 + 0x59;
  bVar18 = SCARRY1(DAT_14e5b35e8,bVar11);
  DAT_14e5b35e8 = DAT_14e5b35e8 + bVar11;
  out((short)param_2,bVar7);
  if (bVar18 == DAT_14e5b35e8 < '\0') {
    return;
  }
  bVar9 = (byte)((ulonglong)param_2 >> 8);
  *unaff_RBP = 0x4df8ef42;
  uVar12 = CONCAT71((int7)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                                    CONCAT11(-0x70 - bVar7,bVar11)) >> 8),
                    (bVar11 - *(char *)((longlong)piVar8 + 0x751fdbbe)) - (0x90 < bVar7));
  pbVar2 = pbVar16 + 0x678408ac;
  *pbVar2 = *pbVar2;
  out(0x5e,(uint)CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(bVar9,(char)param_1)) | 0xeb00
     );
  if ((longlong)piVar8 + -1 == 0) {
    pcVar5 = (code *)swi(1);
    (*pcVar5)(0,uVar12,param_3);
    return;
  }
  plVar14 = unaff_RBP + -1;
  unaff_RBP[-1] = (longlong)puVar15;
  cVar6 = '\x11';
  do {
    puVar15 = puVar15 + -1;
    plVar14 = plVar14 + -1;
    *plVar14 = *puVar15;
    cVar6 = cVar6 + -1;
  } while ('\0' < cVar6);
  unaff_RBP[-0x13] = (longlong)(unaff_RBP + -1);
  uVar4 = in((short)uVar12);
  *puVar17 = uVar4;
  pbVar13[99] = pbVar13[99] + (char)((longlong)piVar8 + -1);
  bVar7 = *pbVar16;
  *(undefined1 **)((longlong)unaff_RBP + -0x4952) = puVar17 + 1;
  *(char *)((longlong)piVar8 + 0xba23eb) =
       *(char *)((longlong)piVar8 + 0xba23eb) + (bVar9 | 0xeb | bVar7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd319 FUN_14d7bd319 body=44 status=ok
// SIG undefined FUN_14d7bd319(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd319(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  char cVar4;
  char cVar5;
  code *pcVar6;
  uint uVar7;
  char *in_RAX;
  byte bVar8;
  byte bVar10;
  ulonglong uVar9;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined8 *puVar11;
  undefined8 *unaff_RBP;
  byte *unaff_RSI;
  undefined1 *unaff_RDI;
  char in_CF;
  unkbyte10 in_ST0;
  undefined8 uStack_18;
  undefined8 uStack_8;
  
  puVar2 = unaff_RDI + 1;
  uVar3 = in((short)param_2);
  *unaff_RDI = uVar3;
  bVar8 = (byte)param_1;
  *in_RAX = (*in_RAX - bVar8) - in_CF;
  *(uint *)(puVar2 + param_1) = *(uint *)(puVar2 + param_1) ^ (uint)unaff_RBP;
  *(int *)((longlong)unaff_RBP + -0x1d) = *(int *)((longlong)unaff_RBP + -0x1d) >> (bVar8 & 0x1f);
  uVar7 = (uint)in_RAX | 0x2e9c956b;
  if ((int)uVar7 < 1) {
    pcVar6 = (code *)swi(0x9a);
    (*pcVar6)();
    fptan(in_ST0);
    in(0xc2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((int)uVar7 < 0) {
    bVar10 = (byte)((ulonglong)param_1 >> 8) | (byte)((ulonglong)param_2 >> 8);
    uStack_8 = 0x4df8ef42;
    uVar9 = (ulonglong)uVar7;
    cVar4 = *(char *)(uVar9 + 0x751fdbbe);
    unaff_RSI[0x678408ac] = unaff_RSI[0x678408ac] + unaff_BL;
    out(0x5e,(int)CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(bVar10,bVar8)));
    if (uVar9 - 1 != 0) {
      puVar11 = (undefined8 *)&stack0xfffffffffffffff0;
      cVar5 = '\x11';
      do {
        unaff_RBP = unaff_RBP + -1;
        puVar11 = puVar11 + -1;
        *puVar11 = *unaff_RBP;
        cVar5 = cVar5 + -1;
      } while ('\0' < cVar5);
      uVar3 = in(CONCAT11(-0x70 - (byte)uVar7,((char)param_2 - cVar4) - (0x90 < (byte)uVar7)));
      *puVar2 = uVar3;
      pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 99);
      *pcVar1 = *pcVar1 + (char)(uVar9 - 1);
      *(char *)(uVar9 + 0xba23eb) = *(char *)(uVar9 + 0xba23eb) + (bVar10 | *unaff_RSI);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar6 = (code *)swi(1);
    (*pcVar6)();
    return;
  }
  return;
}



// FUNCTION 14d7bd344 FUN_14d7bd344 body=7 status=ok
// SIG undefined FUN_14d7bd344(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bd344(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  code *pcVar5;
  char cVar6;
  byte bVar7;
  byte bVar10;
  int in_EAX;
  uint uVar8;
  uint uVar9;
  byte bVar12;
  ulonglong uVar11;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined8 *puVar13;
  undefined8 *unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  bool bVar14;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 in_ST5;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  
  uVar8 = (in_EAX - *(int *)(unaff_RSI + 0x5cd7ae38)) + 0x5dddf300;
  if ((int)uVar8 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar9 = in((short)param_2);
  if ((char)((char)uVar8 + *(char *)(ulonglong)uVar8) == '\0') {
    out((short)uVar9,(int)param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar7 = (byte)uVar9;
  *(byte *)(unaff_RDI + 1) = bVar7;
  cVar6 = (char)param_2 * '\x02';
  *(char *)((ulonglong)uVar9 + 0x1438e) = *(char *)((ulonglong)uVar9 + 0x1438e) + (char)param_1;
  bVar10 = (byte)(uVar9 >> 8);
  DAT_12b8386c3 = DAT_12b8386c3 ^ bVar10;
  _DAT_103efee07 = CONCAT26(in_FPULastInstructionOpcode,(int6)in_FPUInstructionPointer);
  bVar12 = (byte)((ulonglong)param_1 >> 8);
  uVar8 = CONCAT22((short)(uVar9 >> 0x10),CONCAT11(bVar10 + bVar12,bVar7));
  _DAT_103efedfb = in_FPUControlWord;
  _DAT_103efedff = in_FPUStatusWord;
  _DAT_103efee03 = in_FPUTagWord;
  _DAT_103efee0f = in_FPUDataPointer;
  _DAT_103efee17 = in_ST0;
  _DAT_103efee21 = in_ST1;
  _DAT_103efee2b = in_ST2;
  _DAT_103efee35 = in_ST3;
  _DAT_103efee3f = in_ST4;
  _DAT_103efee49 = in_ST5;
  _DAT_103efee53 = in_ST6;
  _DAT_103efee5d = in_ST7;
  *(int *)(ulonglong)uVar8 = *(int *)(ulonglong)uVar8 + 0x59;
  bVar14 = SCARRY1(DAT_14e5b35e8,cVar6);
  DAT_14e5b35e8 = DAT_14e5b35e8 + cVar6;
  out((short)CONCAT71((int7)((ulonglong)param_2 >> 8),cVar6),bVar7);
  if (bVar14 == DAT_14e5b35e8 < '\0') {
    return;
  }
  bVar12 = bVar12 | (byte)((ulonglong)param_2 >> 8);
  uRam00000000356f6494 = 0x4df8ef42;
  uVar11 = (ulonglong)uVar8;
  cVar3 = *(char *)(uVar11 + 0x751fdbbe);
  cRam000000011731968b = cRam000000011731968b + unaff_BL;
  out(0x5e,(int)CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(bVar12,(char)param_1)));
  if (uVar11 - 1 == 0) {
    pcVar5 = (code *)swi(1);
    (*pcVar5)();
    return;
  }
  puVar13 = (undefined8 *)0x356f648c;
  cVar4 = '\x11';
  puRam00000000356f648c = unaff_RBP;
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar13 = puVar13 + -1;
    *puVar13 = *unaff_RBP;
    cVar4 = cVar4 + -1;
  } while ('\0' < cVar4);
  uRam00000000356f63fc = 0x356f648c;
  lRam00000000356f1b42 = unaff_RDI + 3;
  uVar2 = in(CONCAT11(-0x70 - bVar7,(cVar6 - cVar3) - (0x90 < bVar7)));
  *(undefined1 *)(unaff_RDI + 2) = uVar2;
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 99);
  *pcVar1 = *pcVar1 + (char)(uVar11 - 1);
  *(char *)(uVar11 + 0xba23eb) = *(char *)(uVar11 + 0xba23eb) + (bVar12 | bRam00000000afad8ddf);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd34d FUN_14d7bd34d body=6 status=ok
// SIG undefined FUN_14d7bd34d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bd34d(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  code *pcVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  byte bVar9;
  longlong in_RAX;
  int *piVar8;
  byte bVar11;
  ulonglong uVar10;
  char unaff_BL;
  undefined7 unaff_00000019;
  ulonglong *puVar12;
  ulonglong *unaff_RBP;
  byte *unaff_RSI;
  undefined1 *unaff_RDI;
  longlong in_FS_OFFSET;
  char in_SF;
  char in_OF;
  bool bVar13;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  float10 in_ST0;
  unkbyte10 in_ST1;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 in_ST5;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  
  *(double *)((longlong)unaff_RBP + 0x79) = (double)in_ST0;
  if (in_OF == in_SF) {
    uVar7 = (int)in_RAX + iRam000000012a42e079;
    *unaff_RBP = (ulonglong)(uVar7 | *(uint *)(in_FS_OFFSET + (ulonglong)uVar7));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = *param_2 + (char)param_2;
  uVar6 = (undefined1)in_RAX;
  *unaff_RDI = uVar6;
  cVar5 = (char)param_2 * '\x02';
  *(char *)(in_RAX + 0x1438e) = *(char *)(in_RAX + 0x1438e) + (char)param_1;
  bVar9 = (byte)((ulonglong)in_RAX >> 8);
  DAT_12b8386c3 = DAT_12b8386c3 ^ bVar9;
  _DAT_103efee07 = CONCAT26(in_FPULastInstructionOpcode,0x14d7bd34d);
  bVar11 = (byte)((ulonglong)param_1 >> 8);
  piVar8 = (int *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar9 + bVar11,uVar6));
  _DAT_103efedfb = in_FPUControlWord;
  _DAT_103efedff = in_FPUStatusWord;
  _DAT_103efee03 = in_FPUTagWord;
  _DAT_103efee0f = in_FPUDataPointer;
  _DAT_103efee17 = in_ST1;
  _DAT_103efee21 = in_ST2;
  _DAT_103efee2b = in_ST3;
  _DAT_103efee35 = in_ST4;
  _DAT_103efee3f = in_ST5;
  _DAT_103efee49 = in_ST6;
  _DAT_103efee53 = in_ST7;
  _DAT_103efee5d = in_ST7;
  *piVar8 = *piVar8 + 0x59;
  bVar13 = SCARRY1(DAT_14e5b35e8,cVar5);
  DAT_14e5b35e8 = DAT_14e5b35e8 + cVar5;
  out((short)CONCAT71((int7)((ulonglong)param_2 >> 8),cVar5),uVar6);
  if (bVar13 == DAT_14e5b35e8 < '\0') {
    return;
  }
  bVar11 = bVar11 | (byte)((ulonglong)param_2 >> 8);
  uRam00000000356f6494 = 0x4df8ef42;
  uVar10 = (ulonglong)piVar8 & 0xffffffff;
  cVar2 = *(char *)(uVar10 + 0x751fdbbe);
  unaff_RSI[0x678408ac] = unaff_RSI[0x678408ac] + unaff_BL;
  out(0x5e,(int)CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(bVar11,(char)param_1)));
  if (uVar10 - 1 == 0) {
    pcVar4 = (code *)swi(1);
    (*pcVar4)();
    return;
  }
  puVar12 = (ulonglong *)0x356f648c;
  cVar3 = '\x11';
  puRam00000000356f648c = unaff_RBP;
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar12 = puVar12 + -1;
    *puVar12 = *unaff_RBP;
    cVar3 = cVar3 + -1;
  } while ('\0' < cVar3);
  uRam00000000356f63fc = 0x356f648c;
  puRam00000000356f1b42 = unaff_RDI + 2;
  uVar6 = in(CONCAT11(-0x70 - (byte)uVar10,(cVar5 - cVar2) - (0x90 < (byte)uVar10)));
  unaff_RDI[1] = uVar6;
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 99);
  *pcVar1 = *pcVar1 + (char)(uVar10 - 1);
  *(char *)(uVar10 + 0xba23eb) = *(char *)(uVar10 + 0xba23eb) + (bVar11 | *unaff_RSI);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd362 FUN_14d7bd362 body=3 status=ok
// SIG undefined FUN_14d7bd362(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd362(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd399 FUN_14d7bd399 body=7 status=ok
// SIG undefined FUN_14d7bd399(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd399(byte param_1)

{
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (!in_ZF && in_OF == in_SF) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  DAT_1b245b022 = DAT_1b245b022 & param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd3a1 FUN_14d7bd3a1 body=10 status=ok
// SIG undefined FUN_14d7bd3a1(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bd3b2) overlaps instruction at (ram,0x00014d7bd3b1)
    */

void FUN_14d7bd3a1(void)

{
  char cVar1;
  undefined8 in_RAX;
  longlong unaff_RBX;
  undefined4 unaff_EDI;
  
  cVar1 = (char)in_RAX - (char)((ulonglong)in_RAX >> 8);
  LOCK();
  *(undefined4 *)(unaff_RBX + -0x55) = unaff_EDI;
  UNLOCK();
  do {
    if (cVar1 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while ((POPCOUNT(cVar1) & 1U) == 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd3af FUN_14d7bd3af body=2 status=ok
// SIG undefined FUN_14d7bd3af(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bd3b2) overlaps instruction at (ram,0x00014d7bd3b1)
    */

void FUN_14d7bd3af(void)

{
  longlong unaff_RBX;
  undefined4 unaff_EDI;
  bool in_PF;
  bool in_ZF;
  
  LOCK();
  *(undefined4 *)(unaff_RBX + -0x55) = unaff_EDI;
  UNLOCK();
  do {
    if (in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while (in_PF);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd3b3 FUN_14d7bd3b3 body=8 status=ok
// SIG undefined FUN_14d7bd3b3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd3b3(void)

{
  undefined4 in_EAX;
  undefined4 *unaff_RDI;
  bool in_PF;
  bool in_ZF;
  
  *unaff_RDI = in_EAX;
  do {
    if (in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while (in_PF);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd3c8 FUN_14d7bd3c8 body=3 status=ok
// SIG undefined FUN_14d7bd3c8(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bd3c8(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  code *pcVar4;
  char cVar5;
  byte bVar6;
  byte bVar8;
  undefined4 in_EAX;
  uint uVar7;
  ulonglong uVar9;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined8 *puVar10;
  undefined8 *unaff_RBP;
  byte *unaff_RSI;
  byte *unaff_RDI;
  bool in_ZF;
  bool bVar11;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  float10 in_ST0;
  unkbyte10 in_ST1;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 in_ST5;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  
  *(undefined4 *)(unaff_RSI + -0x54) = in_EAX;
  *(short *)((longlong)unaff_RBP + 0x2afad) = (short)in_ST0;
  uVar7 = in((short)param_2);
  if (in_ZF) {
    out((short)uVar7,(int)param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar6 = (byte)uVar7;
  *unaff_RDI = bVar6;
  cVar5 = (char)param_2 * '\x02';
  *(char *)((ulonglong)uVar7 + 0x1438e) = *(char *)((ulonglong)uVar7 + 0x1438e) + (char)param_1;
  bVar8 = (byte)(uVar7 >> 8);
  DAT_12b8386c3 = DAT_12b8386c3 ^ bVar8;
  _DAT_103efee07 = CONCAT26(in_FPULastInstructionOpcode,0x14d7bd3cf);
  uVar7 = CONCAT22((short)(uVar7 >> 0x10),CONCAT11(bVar8 - 0x1f,bVar6));
  _DAT_103efedfb = in_FPUControlWord;
  _DAT_103efedff = in_FPUStatusWord;
  _DAT_103efee03 = in_FPUTagWord;
  _DAT_103efee0f = in_FPUDataPointer;
  _DAT_103efee17 = in_ST1;
  _DAT_103efee21 = in_ST2;
  _DAT_103efee2b = in_ST3;
  _DAT_103efee35 = in_ST4;
  _DAT_103efee3f = in_ST5;
  _DAT_103efee49 = in_ST6;
  _DAT_103efee53 = in_ST7;
  _DAT_103efee5d = in_ST7;
  *(int *)(ulonglong)uVar7 = *(int *)(ulonglong)uVar7 + 0x59;
  bVar11 = SCARRY1(DAT_14e5b35e8,cVar5);
  DAT_14e5b35e8 = DAT_14e5b35e8 + cVar5;
  out((short)CONCAT71((int7)((ulonglong)param_2 >> 8),cVar5),bVar6);
  if (bVar11 == DAT_14e5b35e8 < '\0') {
    return;
  }
  bVar8 = (byte)((ulonglong)param_2 >> 8);
  uRam00000000356f6494 = 0x4df8ef42;
  uVar9 = (ulonglong)uVar7;
  cVar2 = *(char *)(uVar9 + 0x751fdbbe);
  unaff_RSI[0x678408ac] = unaff_RSI[0x678408ac] + unaff_BL;
  out(0x5e,(uint)CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(bVar8,(char)param_1)) | 0xe100
     );
  if (uVar9 - 1 == 0) {
    pcVar4 = (code *)swi(1);
    (*pcVar4)();
    return;
  }
  puVar10 = (undefined8 *)0x356f648c;
  cVar3 = '\x11';
  puRam00000000356f648c = unaff_RBP;
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar10 = puVar10 + -1;
    *puVar10 = *unaff_RBP;
    cVar3 = cVar3 + -1;
  } while ('\0' < cVar3);
  uRam00000000356f63fc = 0x356f648c;
  pbRam00000000356f1b42 = unaff_RDI + 2;
  bVar6 = in(CONCAT11(-0x70 - bVar6,(cVar5 - cVar2) - (0x90 < bVar6)));
  unaff_RDI[1] = bVar6;
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 99);
  *pcVar1 = *pcVar1 + (char)(uVar9 - 1);
  *(char *)(uVar9 + 0xba23eb) = *(char *)(uVar9 + 0xba23eb) + (bVar8 | 0xe1 | *unaff_RSI);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd3cc FUN_14d7bd3cc body=56 status=ok
// SIG undefined FUN_14d7bd3cc(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bd382) overlaps instruction at (ram,0x00014d7bd37e)
    */
/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bd3cc(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  code *pcVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  byte bVar8;
  char *in_RAX;
  byte bVar10;
  ulonglong uVar9;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined8 *puVar11;
  undefined8 *unaff_RBP;
  byte *unaff_RDI;
  char in_ZF;
  bool bVar12;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 in_ST5;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  
  param_1 = param_1 + -1;
  if (param_1 != 0 && in_ZF != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar7 = in((short)param_2);
  if ((char)((char)in_RAX + *in_RAX) == '\0') {
    out((short)uVar7,(int)param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar6 = (byte)uVar7;
  *unaff_RDI = bVar6;
  cVar5 = (char)param_2 * '\x02';
  *(char *)((ulonglong)uVar7 + 0x1438e) = *(char *)((ulonglong)uVar7 + 0x1438e) + (char)param_1;
  bVar8 = (byte)(uVar7 >> 8);
  DAT_12b8386c3 = DAT_12b8386c3 ^ bVar8;
  _DAT_103efee07 = CONCAT26(in_FPULastInstructionOpcode,(int6)in_FPUInstructionPointer);
  bVar10 = (byte)((ulonglong)param_1 >> 8);
  uVar7 = CONCAT22((short)(uVar7 >> 0x10),CONCAT11(bVar8 + bVar10,bVar6));
  _DAT_103efedfb = in_FPUControlWord;
  _DAT_103efedff = in_FPUStatusWord;
  _DAT_103efee03 = in_FPUTagWord;
  _DAT_103efee0f = in_FPUDataPointer;
  _DAT_103efee17 = in_ST0;
  _DAT_103efee21 = in_ST1;
  _DAT_103efee2b = in_ST2;
  _DAT_103efee35 = in_ST3;
  _DAT_103efee3f = in_ST4;
  _DAT_103efee49 = in_ST5;
  _DAT_103efee53 = in_ST6;
  _DAT_103efee5d = in_ST7;
  *(int *)(ulonglong)uVar7 = *(int *)(ulonglong)uVar7 + 0x59;
  bVar12 = SCARRY1(DAT_14e5b35e8,cVar5);
  DAT_14e5b35e8 = DAT_14e5b35e8 + cVar5;
  out((short)CONCAT71((int7)((ulonglong)param_2 >> 8),cVar5),bVar6);
  if (bVar12 == DAT_14e5b35e8 < '\0') {
    return;
  }
  bVar10 = bVar10 | (byte)((ulonglong)param_2 >> 8);
  uRam00000000356f6494 = 0x4df8ef42;
  uVar9 = (ulonglong)uVar7;
  cVar2 = *(char *)(uVar9 + 0x751fdbbe);
  cRam000000011731968b = cRam000000011731968b + unaff_BL;
  out(0x5e,(int)CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(bVar10,(char)param_1)));
  if (uVar9 - 1 == 0) {
    pcVar4 = (code *)swi(1);
    (*pcVar4)();
    return;
  }
  puVar11 = (undefined8 *)0x356f648c;
  cVar3 = '\x11';
  puRam00000000356f648c = unaff_RBP;
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar11 = puVar11 + -1;
    *puVar11 = *unaff_RBP;
    cVar3 = cVar3 + -1;
  } while ('\0' < cVar3);
  uRam00000000356f63fc = 0x356f648c;
  pbRam00000000356f1b42 = unaff_RDI + 2;
  bVar6 = in(CONCAT11(-0x70 - bVar6,(cVar5 - cVar2) - (0x90 < bVar6)));
  unaff_RDI[1] = bVar6;
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 99);
  *pcVar1 = *pcVar1 + (char)(uVar9 - 1);
  *(char *)(uVar9 + 0xba23eb) = *(char *)(uVar9 + 0xba23eb) + (bVar10 | bRam00000000afad8ddf);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd3e7 FUN_14d7bd3e7 body=16 status=ok
// SIG undefined FUN_14d7bd3e7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd3e7(void)

{
  longlong unaff_RBP;
  
  *(uint *)(unaff_RBP + 0x2db50056) = *(uint *)(unaff_RBP + 0x2db50056) >> 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd3fa FUN_14d7bd3fa body=24 status=ok
// SIG undefined FUN_14d7bd3fa(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd3fa(int param_1)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  code *pcVar5;
  byte *pbVar6;
  ulonglong uVar7;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined8 *unaff_RBP;
  undefined1 *unaff_RDI;
  byte *pbStackX_8;
  char cStackX_10;
  
  pcVar5 = (code *)swi(0x65);
  pbVar6 = (byte *)(*pcVar5)();
  *pbVar6 = *pbVar6 << 1 | (char)*pbVar6 < '\0';
  *(char *)((longlong)unaff_RBP + 0xd4e07c) =
       *(char *)((longlong)unaff_RBP + 0xd4e07c) + (char)((ulonglong)pbVar6 >> 8);
  uVar7 = CONCAT71((int7)((ulonglong)pbVar6 >> 8),(char)pbVar6 + 'j') & 0xffffffff;
  cVar3 = *(char *)(uVar7 + 0x751fdbbe);
  pbStackX_8[0x678408ac] = pbStackX_8[0x678408ac] + unaff_BL;
  out(0x5e,param_1 + 0xaf705a2);
  if (uVar7 - 1 == 0) {
    pcVar5 = (code *)swi(1);
    (*pcVar5)();
    return;
  }
  cVar4 = '\x11';
  do {
    unaff_RBP = unaff_RBP + -1;
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
    *(undefined8 *)register0x00000020 = *unaff_RBP;
    cVar4 = cVar4 + -1;
  } while ('\0' < cVar4);
  uVar2 = in(CONCAT11(-0x70 - (byte)uVar7,(cStackX_10 - cVar3) - (0x90 < (byte)uVar7)));
  *unaff_RDI = uVar2;
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 99);
  *pcVar1 = *pcVar1 + (char)(uVar7 - 1);
  *(char *)(uVar7 + 0xba23eb) =
       *(char *)(uVar7 + 0xba23eb) + ((byte)((uint)(param_1 + 0xaf705a2) >> 8) | *pbStackX_8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd416 FUN_14d7bd416 body=59 status=ok
// SIG undefined FUN_14d7bd416(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd416(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  code *pcVar5;
  uint in_EAX;
  byte bVar7;
  ulonglong uVar6;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined8 *puVar8;
  undefined8 *unaff_RBP;
  byte *unaff_RSI;
  undefined1 *unaff_RDI;
  undefined8 uStack_18;
  undefined8 uStack_8;
  
  bVar7 = (byte)((ulonglong)param_1 >> 8) | (byte)((ulonglong)param_2 >> 8);
  uStack_8 = 0x4df8ef42;
  uVar6 = (ulonglong)in_EAX;
  cVar3 = *(char *)(uVar6 + 0x751fdbbe);
  unaff_RSI[0x678408ac] = unaff_RSI[0x678408ac] + unaff_BL;
  out(0x5e,(int)CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(bVar7,(char)param_1)));
  if (uVar6 - 1 == 0) {
    pcVar5 = (code *)swi(1);
    (*pcVar5)();
    return;
  }
  puVar8 = (undefined8 *)&stack0xfffffffffffffff0;
  cVar4 = '\x11';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar8 = puVar8 + -1;
    *puVar8 = *unaff_RBP;
    cVar4 = cVar4 + -1;
  } while ('\0' < cVar4);
  uVar2 = in(CONCAT11(-0x70 - (byte)in_EAX,((char)param_2 - cVar3) - (0x90 < (byte)in_EAX)));
  *unaff_RDI = uVar2;
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 99);
  *pcVar1 = *pcVar1 + (char)(uVar6 - 1);
  *(char *)(uVar6 + 0xba23eb) = *(char *)(uVar6 + 0xba23eb) + (bVar7 | *unaff_RSI);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd438 FUN_14d7bd438 body=6 status=ok
// SIG undefined FUN_14d7bd438(void)

void FUN_14d7bd438(void)

{
  longlong unaff_RDI;
  longlong unaff_R12;
  
                    /* WARNING: Could not recover jumptable at 0x00014d7bd43a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulonglong)*(uint *)(unaff_RDI + unaff_R12 * 4))();
  return;
}



// FUNCTION 14d7bd469 FUN_14d7bd469 body=7 status=ok
// SIG undefined FUN_14d7bd469(void)

void FUN_14d7bd469(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7bd471 FUN_14d7bd471 body=18 status=ok
// SIG undefined FUN_14d7bd471(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd471(void)

{
  undefined1 uVar1;
  undefined4 in_EAX;
  undefined4 *unaff_RDI;
  
  uVar1 = in(0xe1);
  *unaff_RDI = CONCAT31((int3)((uint)in_EAX >> 8),uVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd487 FUN_14d7bd487 body=5 status=ok
// SIG undefined FUN_14d7bd487(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd487(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd498 FUN_14d7bd498 body=5 status=ok
// SIG undefined FUN_14d7bd498(void)

void FUN_14d7bd498(longlong param_1,int param_2)

{
  byte *unaff_RSI;
  byte *unaff_RDI;
  
  *(int *)(param_1 + -0x5f) = *(int *)(param_1 + -0x5f) + param_2 + (uint)(*unaff_RSI < *unaff_RDI);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7bd4a1 FUN_14d7bd4a1 body=2 status=ok
// SIG undefined FUN_14d7bd4a1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd4a1(byte *param_1)

{
  byte bVar1;
  undefined8 in_RAX;
  
  bVar1 = (byte)((ulonglong)in_RAX >> 8);
  cRam00000000f7aae943 =
       cRam00000000f7aae943 +
       (char)(CONCAT11(bVar1 + *param_1,(char)in_RAX) + 0x82f5006e + (uint)CARRY1(bVar1,*param_1) >>
             8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd4b0 FUN_14d7bd4b0 body=3 status=ok
// SIG undefined FUN_14d7bd4b0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd4b0(void)

{
  undefined1 in_AL;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd4c0 FUN_14d7bd4c0 body=3 status=ok
// SIG undefined FUN_14d7bd4c0(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bd4de) overlaps instruction at (ram,0x00014d7bd4da)
    */

void FUN_14d7bd4c0(byte param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  ulonglong in_RAX;
  undefined4 uVar3;
  char cVar4;
  ulonglong unaff_RBX;
  undefined1 *puVar5;
  byte *unaff_RSI;
  uint *unaff_RDI;
  bool in_CF;
  
  uVar3 = (undefined4)param_2;
  if (in_CF) {
    puVar5 = &stack0xfffffffffffffff8;
  }
  else {
    *unaff_RDI = *unaff_RDI | (uint)unaff_RSI;
    bVar2 = (param_1 & 0x1f) % 9;
    *unaff_RSI = *unaff_RSI << bVar2 | *unaff_RSI >> 9 - bVar2;
    uVar3 = CONCAT31((int3)((ulonglong)param_2 >> 8),
                     (char)param_2 + *(char *)((in_RAX ^ 0x4a) - 0x4978c75));
    unaff_RBX = (ulonglong)((uint)CONCAT11(0x17,(char)unaff_RBX) << 0x1e);
    puVar5 = &stack0xfffffffffffffff0;
  }
  cVar4 = (char)unaff_RBX;
  *(ulonglong *)(puVar5 + -8) = CONCAT62((int6)(unaff_RBX >> 0x10),CONCAT11(cVar4,cVar4));
  pcVar1 = (char *)(CONCAT44((int)((ulonglong)param_2 >> 0x20),uVar3) + -0x5e);
  *pcVar1 = *pcVar1 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd4c5 FUN_14d7bd4c5 body=9 status=ok
// SIG undefined FUN_14d7bd4c5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd4c5(byte param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  ulonglong in_RAX;
  byte *unaff_RSI;
  uint *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI | (uint)unaff_RSI;
  bVar2 = (param_1 & 0x1f) % 9;
  *unaff_RSI = *unaff_RSI << bVar2 | *unaff_RSI >> 9 - bVar2;
  puVar1 = (undefined1 *)
           (CONCAT44((int)((ulonglong)param_2 >> 0x20),
                     CONCAT31((int3)((ulonglong)param_2 >> 8),
                              (char)param_2 + *(char *)((in_RAX ^ 0x4a) - 0x4978c75))) + -0x5e);
  *puVar1 = *puVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd4d1 FUN_14d7bd4d1 body=28 status=ok
// SIG undefined FUN_14d7bd4d1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd4d1(undefined8 param_1,longlong param_2)

{
  char *unaff_RBX;
  bool in_CF;
  
  if (in_CF) {
    *(undefined1 *)(param_2 + -0x5e) = *(undefined1 *)(param_2 + -0x5e);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RBX = *unaff_RBX + (char)((ulonglong)unaff_RBX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd4ed FUN_14d7bd4ed body=12 status=ok
// SIG undefined FUN_14d7bd4ed(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd4ed(undefined8 param_1,longlong param_2)

{
  char unaff_BH;
  
  *(char *)(param_2 + -0x5e) = *(char *)(param_2 + -0x5e) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd4fe FUN_14d7bd4fe body=5 status=ok
// SIG undefined FUN_14d7bd4fe(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd4fe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd50c FUN_14d7bd50c body=6 status=ok
// SIG undefined FUN_14d7bd50c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd50c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd513 FUN_14d7bd513 body=4 status=ok
// SIG undefined FUN_14d7bd513(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd513(undefined8 param_1,undefined2 param_2)

{
  char cVar1;
  undefined8 in_RAX;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  undefined4 unaff_ESI;
  undefined4 *unaff_RDI;
  char *pcVar2;
  
  out(0x27,(char)in_RAX);
  cVar1 = in(param_2);
  pcVar2 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
  out(0x8e,(int)pcVar2);
  *(undefined4 *)
   (CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) + -0x7761c430) =
       unaff_ESI;
  *pcVar2 = *pcVar2 + cVar1;
  if (-1 < *pcVar2) {
    *unaff_RDI = (int)pcVar2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd533 FUN_14d7bd533 body=4 status=ok
// SIG undefined FUN_14d7bd533(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd533(void)

{
  undefined4 in_EAX;
  undefined4 *unaff_RDI;
  bool in_SF;
  
  if (!in_SF) {
    *unaff_RDI = in_EAX;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd537 FUN_14d7bd537 body=17 status=ok
// SIG undefined FUN_14d7bd537(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd537(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd54a FUN_14d7bd54a body=5 status=ok
// SIG undefined FUN_14d7bd54a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd54a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd557 FUN_14d7bd557 body=18 status=ok
// SIG undefined FUN_14d7bd557(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd557(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  byte in_AL;
  bool in_CF;
  int *unaff_retaddr;
  
  if (!in_CF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar1 = (byte *)(param_2 + -0x1c343bdb);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + in_AL;
  pcVar3 = (code *)swi(1);
  (*pcVar3)(unaff_retaddr,(int)param_2 + *unaff_retaddr + (uint)CARRY1(bVar2,in_AL));
  return;
}



// FUNCTION 14d7bd56b FUN_14d7bd56b body=4 status=ok
// SIG undefined FUN_14d7bd56b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd56b(undefined8 param_1,undefined2 param_2)

{
  char *pcVar1;
  byte in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RBX;
  undefined4 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
  pcVar1 = (char *)(CONCAT71(in_register_00000001,*(undefined1 *)(unaff_RBX + (ulonglong)in_AL)) +
                   -0x7b);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd574 FUN_14d7bd574 body=10 status=ok
// SIG undefined FUN_14d7bd574(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd574(void)

{
  uint *puVar1;
  uint in_EAX;
  undefined7 unaff_00000019;
  uint unaff_ESI;
  
  LOCK();
  puVar1 = (uint *)(CONCAT71(unaff_00000019,0x2e) + -0x4e71b566);
  *puVar1 = *puVar1 ^ unaff_ESI;
  UNLOCK();
  out(0x3c,in_EAX & 0x84be0049);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd581 FUN_14d7bd581 body=12 status=ok
// SIG undefined FUN_14d7bd581(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd581(undefined8 param_1,longlong param_2)

{
  int in_EAX;
  byte in_CF;
  
  *(undefined8 *)((ulonglong)(in_EAX + -0x76b96926 + (uint)in_CF) - 8) = param_1;
  *(undefined1 *)((ulonglong)&stack0x00000000 & 0xffffffff) =
       *(undefined1 *)((ulonglong)&stack0x00000000 & 0xffffffff);
  *(char *)(param_2 + -0x5a) = *(char *)(param_2 + -0x5a) + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd590 FUN_14d7bd590 body=3 status=ok
// SIG undefined FUN_14d7bd590(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd590(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd5a1 FUN_14d7bd5a1 body=2 status=ok
// SIG undefined FUN_14d7bd5a1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd5a1(void)

{
  undefined4 in_EAX;
  
  out(0xd8,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd5c2 FUN_14d7bd5c2 body=16 status=ok
// SIG undefined FUN_14d7bd5c2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd5c2(void)

{
  char in_AL;
  undefined1 unaff_BH;
  longlong unaff_RBP;
  
  LOCK();
  *(undefined1 *)(unaff_RBP * 2 + 0x10) = unaff_BH;
  UNLOCK();
  if (in_AL == -0x62) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd5d4 FUN_14d7bd5d4 body=6 status=ok
// SIG undefined FUN_14d7bd5d4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd5d4(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined8 in_RAX;
  int unaff_EBX;
  longlong *unaff_RBP;
  undefined1 *unaff_RSI;
  byte *unaff_RDI;
  bool in_CF;
  
  if (in_CF) {
    pcVar1 = (char *)(param_1 +
                     CONCAT71((int7)((ulonglong)param_2 >> 8),
                              (byte)param_2 & *(byte *)(*unaff_RBP + 0x7302d347)) * 8);
    *pcVar1 = *pcVar1 + (char)param_1;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(char *)(param_1 + 0xbc95f0) = *(char *)(param_1 + 0xbc95f0) + (char)param_1;
  *(int *)(unaff_RSI + -0x37) = *(int *)(unaff_RSI + -0x37) - unaff_EBX;
  in((short)param_2);
  bVar2 = in(0x61);
  if ((char)(*(byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2) & bVar2) < '\0') {
    *unaff_RDI = bVar2;
    out(*unaff_RSI,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd5df FUN_14d7bd5df body=4 status=ok
// SIG undefined FUN_14d7bd5df(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd5df(undefined8 param_1,undefined2 param_2)

{
  byte bVar1;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  int unaff_EBX;
  undefined1 *unaff_RSI;
  byte *unaff_RDI;
  
  *(int *)(unaff_RSI + -0x37) = *(int *)(unaff_RSI + -0x37) - unaff_EBX;
  in(param_2);
  bVar1 = in(0x61);
  if (-1 < (char)(*(byte *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar1))) & bVar1))
  {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = bVar1;
  out(*unaff_RSI,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd60f FUN_14d7bd60f body=14 status=ok
// SIG undefined FUN_14d7bd60f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd60f(ulonglong param_1,uint *param_2)

{
  char *pcVar1;
  bool bVar2;
  byte bVar3;
  undefined1 *unaff_RSI;
  byte in_CF;
  
  bVar3 = (byte)param_1 & 0x1f;
  *param_2 = *param_2 << bVar3 | *param_2 >> 0x20 - bVar3;
  bVar2 = (param_1 & 0x1f) != 0;
  if ((bool)(!bVar2 & in_CF | (bVar2 && (*param_2 & 1) != 0))) {
    pcVar1 = (char *)(param_1 + (longlong)param_2 * 8);
    *pcVar1 = *pcVar1 + (byte)param_1;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  out(*unaff_RSI,(short)param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd61a FUN_14d7bd61a body=8 status=ok
// SIG undefined FUN_14d7bd61a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd61a(void)

{
  uint uVar1;
  longlong unaff_RSI;
  undefined1 in_CF;
  
  uVar1 = *(uint *)(unaff_RSI + -0x5cff7650);
  *(uint *)(unaff_RSI + -0x5cff7650) = (uint)(CONCAT14(in_CF,uVar1) >> 0xb) | uVar1 << 0x16;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd623 FUN_14d7bd623 body=10 status=ok
// SIG undefined FUN_14d7bd623(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd623(longlong param_1)

{
  char in_AL;
  undefined7 in_register_00000001;
  undefined2 *unaff_RDI;
  undefined2 in_FPUStatusWord;
  
  *(undefined1 *)(param_1 + 0x55) = *(undefined1 *)(param_1 + 0x55);
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *unaff_RDI = in_FPUStatusWord;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd634 FUN_14d7bd634 body=5 status=ok
// SIG undefined FUN_14d7bd634(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd634(void)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 unaff_BH;
  undefined1 *puVar3;
  longlong unaff_RBP;
  char in_ZF;
  char in_SF;
  char in_OF;
  
  puVar3 = (undefined1 *)register0x00000020;
  do {
    if (in_OF == in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 **)(puVar3 + -8) = puVar3;
    LOCK();
    puVar1 = (undefined1 *)(unaff_RBP * 2 + 0x10);
    uVar2 = *puVar1;
    *puVar1 = unaff_BH;
    UNLOCK();
    unaff_BH = uVar2;
    puVar3 = puVar3 + -8;
  } while (in_ZF != '\0');
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd63d FUN_14d7bd63d body=23 status=ok
// SIG undefined FUN_14d7bd63d(void)

/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_14d7bd63d(undefined8 param_1,int *param_2)

{
  byte bVar1;
  int *in_RAX;
  ulonglong uVar2;
  undefined7 uVar3;
  undefined2 uVar4;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  int unaff_EDI;
  char *pcVar5;
  byte in_CF;
  undefined1 *unaff_retaddr;
  
  pcVar5 = (char *)(ulonglong)((unaff_EDI - *param_2) - (uint)in_CF);
  *(uint *)(unaff_RBP + 0x68) = ~*(uint *)(unaff_RBP + 0x68);
  uVar4 = SUB82(param_2,0);
  if (SBORROW1((char)in_RAX,*pcVar5)) {
    *in_RAX = *in_RAX + 0xc365e37;
    in(uVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar5[0xa5a260] = pcVar5[0xa5a260] + (char)((ulonglong)param_1 >> 8);
  *(char *)(unaff_RSI + -0x55) = *(char *)(unaff_RSI + -0x55) + (char)param_2;
  uVar2 = unaff_RBP & 0xffffffff;
  uVar3 = (undefined7)(uVar2 >> 8);
  if (0x115eb1e4 < (int)in_RAX) {
    pcVar5[0xda18e7] = pcVar5[0xda18e7] + (char)(uVar2 >> 8);
    out(uVar4,(char)uVar2);
    return CONCAT71(uVar3,0x3c);
  }
  in(uVar4);
  bVar1 = in(0x61);
  if (-1 < (char)(*(byte *)CONCAT71(uVar3,bVar1) & bVar1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar5[1] = bVar1;
  out(*unaff_retaddr,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd646 FUN_14d7bd646 body=2 status=ok
// SIG undefined FUN_14d7bd646(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14d7bd646(void)

{
  undefined1 in_AL;
  
  uRam1c052eab560000a5 = in_AL;
  return CONCAT71((int7)((ulonglong)_DAT_e6a70052897e95ee >> 8),0x3c);
}



// FUNCTION 14d7bd650 FUN_14d7bd650 body=26 status=ok
// SIG undefined FUN_14d7bd650(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14d7bd650(void)

{
  return CONCAT71((uint7)(uint3)((uint)_DAT_e6a70052897e95ee >> 8),0x3c);
}



// FUNCTION 14d7bd66f FUN_14d7bd66f body=4 status=ok
// SIG undefined FUN_14d7bd66f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd66f(short *param_1,char *param_2)

{
  undefined4 uVar1;
  longlong unaff_RDI;
  float10 in_ST0;
  
  *param_1 = (short)ROUND(in_ST0);
  *param_2 = *param_2 + (char)((ulonglong)param_1 >> 8);
  uVar1 = in((short)param_2);
  *(undefined4 *)(unaff_RDI + 4) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd674 FUN_14d7bd674 body=6 status=ok
// SIG undefined FUN_14d7bd674(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd674(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd68a FUN_14d7bd68a body=16 status=ok
// SIG undefined FUN_14d7bd68a(void)

void FUN_14d7bd68a(void)

{
  uint in_EAX;
  uint uVar1;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  
  uVar1 = in_EAX ^ *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  return;
}



// FUNCTION 14d7bd6a3 FUN_14d7bd6a3 body=2 status=ok
// SIG undefined FUN_14d7bd6a3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd6a3(undefined8 param_1,undefined2 param_2)

{
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd6b5 FUN_14d7bd6b5 body=9 status=ok
// SIG undefined FUN_14d7bd6b5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd6b5(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  in(0xe2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd6c7 FUN_14d7bd6c7 body=29 status=ok
// SIG undefined FUN_14d7bd6c7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd6c7(ushort param_1,char param_2)

{
  char *pcVar1;
  undefined8 in_RAX;
  ulonglong uVar2;
  int *piVar3;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_ESP;
  longlong unaff_RBP;
  ushort unaff_SI;
  undefined6 unaff_00000032;
  
  uVar2 = CONCAT71((int7)((ulonglong)in_RAX >> 8),DAT_10eae235a5a5de61);
  pcVar1 = (char *)(CONCAT62(unaff_00000032,unaff_SI & param_1) + 0x1f);
  *pcVar1 = *pcVar1 + param_2;
  uVar2 = (uVar2 & 0xffffffff) * (ulonglong)unaff_ESP;
  piVar3 = (int *)(uVar2 & 0xffffffff);
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_RBP * 8);
  *pcVar1 = *pcVar1 + unaff_BH;
  *piVar3 = *piVar3 + (int)(uVar2 >> 0x20);
  *(char *)piVar3 = (char)*piVar3 + (char)piVar3;
  out(0x46,(int)uVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd6e9 FUN_14d7bd6e9 body=3 status=ok
// SIG undefined FUN_14d7bd6e9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd6e9(longlong param_1,int param_2)

{
  char *pcVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  int unaff_ESP;
  
  if (param_1 != 1) {
    pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
                     (ulonglong)(uint)(unaff_ESP * 0xd) * 8);
    *pcVar1 = *pcVar1 + unaff_BH;
    *(int *)CONCAT44(in_register_00000004,in_EAX) =
         *(int *)CONCAT44(in_register_00000004,in_EAX) + param_2;
    *(char *)CONCAT44(in_register_00000004,in_EAX) =
         *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
    out(0x46,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7bd6ee FUN_14d7bd6ee body=8 status=ok
// SIG undefined FUN_14d7bd6ee(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd6ee(longlong param_1,int param_2)

{
  char *pcVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  char in_ZF;
  
  if (param_1 != 1 && in_ZF != '\0') {
    pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_RBP * 8);
    *pcVar1 = *pcVar1 + unaff_BH;
    *(int *)CONCAT44(in_register_00000004,in_EAX) =
         *(int *)CONCAT44(in_register_00000004,in_EAX) + param_2;
    *(char *)CONCAT44(in_register_00000004,in_EAX) =
         *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
    out(0x46,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7bd6f7 FUN_14d7bd6f7 body=1 status=ok
// SIG undefined FUN_14d7bd6f7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd6f7(undefined8 param_1,char *param_2)

{
  int in_EAX;
  int iVar1;
  longlong unaff_RBX;
  char *unaff_RDI;
  undefined1 auStackX_8 [32];
  
  *(int *)(param_2 + 0x1e190027) = (int)auStackX_8;
  iVar1 = in_EAX + -0x36e04404;
  param_2[0xfef246bc26] = param_2[0xfef246bc26] + (char)iVar1;
  *(int *)(unaff_RBX + 0x6f) = *(int *)(unaff_RBX + 0x6f) - iVar1;
  *param_2 = *param_2 + (char)((uint)iVar1 >> 8);
  *unaff_RDI = (char)iVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd6fc FUN_14d7bd6fc body=7 status=ok
// SIG undefined FUN_14d7bd6fc(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd6fc(undefined8 param_1,char *param_2)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  int *unaff_RSI;
  char *unaff_RDI;
  byte in_CF;
  
  *unaff_RSI = (*unaff_RSI - unaff_EBX) - (uint)in_CF;
  iVar2 = in_EAX + -0x36e04404;
  param_2[0xfef246bc26] = param_2[0xfef246bc26] + (char)iVar2;
  piVar1 = (int *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x6f);
  *piVar1 = *piVar1 - iVar2;
  *param_2 = *param_2 + (char)((uint)iVar2 >> 8);
  *unaff_RDI = (char)iVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd70e FUN_14d7bd70e body=13 status=ok
// SIG undefined FUN_14d7bd70e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd70e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd71b FUN_14d7bd71b body=4 status=ok
// SIG undefined FUN_14d7bd71b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd71b(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd730 FUN_14d7bd730 body=2 status=ok
// SIG undefined FUN_14d7bd730(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd730(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd738 FUN_14d7bd738 body=12 status=ok
// SIG undefined FUN_14d7bd738(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd738(undefined8 param_1,char param_2)

{
  code *pcVar1;
  longlong unaff_RBX;
  bool in_SF;
  
  if (in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RBX + 0x1c) = *(char *)(unaff_RBX + 0x1c) + param_2;
  in(0x3f);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7bd73d FUN_14d7bd73d body=6 status=ok
// SIG undefined FUN_14d7bd73d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bd73d(void)

{
  uint in_EAX;
  uint uVar1;
  longlong unaff_RBP;
  byte in_CF;
  undefined1 auStack_8 [8];
  
  uVar1 = in_EAX + _DAT_136688e17 + (uint)in_CF;
  *(int *)(unaff_RBP + 0xe53900) =
       *(int *)(unaff_RBP + 0xe53900) + (int)auStack_8 +
       (uint)(0xc9f8ff3b < uVar1 ||
             CARRY4(uVar1 + 0x360700c4,
                    (uint)(CARRY4(in_EAX,_DAT_136688e17) ||
                          CARRY4(in_EAX + _DAT_136688e17,(uint)in_CF))));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd76a FUN_14d7bd76a body=9 status=ok
// SIG undefined FUN_14d7bd76a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd76a(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  uint in_EAX;
  uint uVar4;
  longlong lVar5;
  int *piVar6;
  char unaff_BL;
  undefined7 unaff_00000019;
  char *unaff_RDI;
  longlong in_R10;
  
  uVar4 = (in_EAX | 0x61) ^ 0x580040a3;
  lVar5 = CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                   CONCAT11(0x31,(byte)param_1 & (byte)(in_EAX >> 8)));
  piVar6 = (int *)(lVar5 + -1);
  bVar3 = (byte)uVar4;
  if (piVar6 == (int *)0x0 || uVar4 == 0) {
    *(uint *)(&stack0x00000000 + (longlong)piVar6 * 2) =
         (*(int *)(&stack0x00000000 + (longlong)piVar6 * 2) + -0x20470d0c) -
         (uint)(uVar4 < 0xbe4ab563);
    bRam00000000fad868d6 = bRam00000000fad868d6 + 0xd;
    *unaff_RDI = bVar3 + 0x9d;
    pcVar1 = (char *)(lVar5 + -0x1dfcacc7);
    *pcVar1 = *pcVar1 - unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar2 = *param_3;
  *param_3 = *param_3 + bVar3;
  *piVar6 = *piVar6 + 0x17 + (uint)CARRY1(bVar2,bVar3);
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) >> ((byte)piVar6 & 0x1f);
  *(undefined4 *)(in_R10 + -0x371cebf8) = 0xfad868d6;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + bVar3;
  if (!SCARRY4((int)uVar4 >> 0x1f,*(int *)(unaff_RDI + -0x54))) {
    bVar3 = (byte)piVar6 & 7;
    bRam00000000fad868d6 = bRam00000000fad868d6 >> bVar3 | bRam00000000fad868d6 << 8 - bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd777 FUN_14d7bd777 body=1 status=ok
// SIG undefined FUN_14d7bd777(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd777(undefined8 param_1,int param_2,byte *param_3)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  int *piVar5;
  char unaff_BL;
  undefined7 unaff_00000019;
  char *unaff_RDI;
  longlong in_R10;
  char in_ZF;
  char *unaff_retaddr;
  int aiStackX_8 [8];
  
  lVar4 = CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(0x31,(char)param_1));
  piVar5 = (int *)(lVar4 + -1);
  bVar3 = (byte)unaff_retaddr;
  if (piVar5 == (int *)0x0 || in_ZF != '\0') {
    piVar5 = (int *)((longlong)aiStackX_8 + (longlong)piVar5 * 2);
    *piVar5 = (*piVar5 - param_2) - (uint)((uint)unaff_retaddr < 0xbe4ab563);
    bRam00000000fad868d6 = bRam00000000fad868d6 + (char)((uint)param_2 >> 8);
    *unaff_RDI = bVar3 + 0x9d;
    pcVar1 = (char *)(lVar4 + -0x1dfcacc7);
    *pcVar1 = *pcVar1 - unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar2 = *param_3;
  *param_3 = *param_3 + bVar3;
  *piVar5 = *piVar5 + 0x17 + (uint)CARRY1(bVar2,bVar3);
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) >> ((byte)piVar5 & 0x1f);
  *(undefined4 *)(in_R10 + -0x371cebf8) = 0xfad868d6;
  *unaff_retaddr = *unaff_retaddr + bVar3;
  if (!SCARRY4((int)(uint)unaff_retaddr >> 0x1f,*(int *)(unaff_RDI + -0x54))) {
    bVar3 = (byte)piVar5 & 7;
    bRam00000000fad868d6 = bRam00000000fad868d6 >> bVar3 | bRam00000000fad868d6 << 8 - bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd77b FUN_14d7bd77b body=32 status=ok
// SIG undefined FUN_14d7bd77b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd77b(undefined8 param_1,int param_2,byte *param_3)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  char *in_RAX;
  longlong lVar4;
  int *piVar5;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  char *unaff_RDI;
  longlong in_R10;
  char in_ZF;
  
  lVar4 = CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(0x31,(char)param_1));
  piVar5 = (int *)(lVar4 + -1);
  bVar3 = (byte)in_RAX;
  if (piVar5 == (int *)0x0 || in_ZF != '\0') {
    *(uint *)(&stack0x00000000 + (longlong)piVar5 * 2) =
         (*(int *)(&stack0x00000000 + (longlong)piVar5 * 2) - param_2) -
         (uint)((uint)in_RAX < 0xbe4ab563);
    *(char *)CONCAT44(unaff_00000034,unaff_ESI) =
         *(char *)CONCAT44(unaff_00000034,unaff_ESI) + (char)((uint)param_2 >> 8);
    *unaff_RDI = bVar3 + 0x9d;
    pcVar1 = (char *)(lVar4 + -0x1dfcacc7);
    *pcVar1 = *pcVar1 - unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar2 = *param_3;
  *param_3 = *param_3 + bVar3;
  *piVar5 = *piVar5 + 0x17 + (uint)CARRY1(bVar2,bVar3);
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) >> ((byte)piVar5 & 0x1f);
  *(undefined4 *)(in_R10 + -0x371cebf8) = unaff_ESI;
  *in_RAX = *in_RAX + bVar3;
  if (!SCARRY4((int)(uint)in_RAX >> 0x1f,*(int *)(unaff_RDI + -0x54))) {
    bVar3 = (byte)piVar5 & 7;
    *(byte *)CONCAT44(unaff_00000034,unaff_ESI) =
         *(byte *)CONCAT44(unaff_00000034,unaff_ESI) >> bVar3 |
         *(char *)CONCAT44(unaff_00000034,unaff_ESI) << 8 - bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd783 FUN_14d7bd783 body=7 status=ok
// SIG undefined FUN_14d7bd783(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd783(undefined8 param_1)

{
  char *pcVar1;
  undefined1 in_AL;
  char unaff_BL;
  undefined1 *unaff_RDI;
  char unaff_R14B;
  
  cRam000000001419238a = cRam000000001419238a + unaff_R14B;
  *unaff_RDI = in_AL;
  pcVar1 = (char *)(CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(0x4a,(char)param_1)) +
                   -0x1dfcacc6);
  *pcVar1 = *pcVar1 - unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd7a6 FUN_14d7bd7a6 body=7 status=ok
// SIG undefined FUN_14d7bd7a6(void)

ulonglong FUN_14d7bd7a6(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 in_RAX;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  char unaff_R12B;
  char in_CF;
  
  *(char *)((longlong)unaff_RSI + -0x2e) =
       (*(char *)((longlong)unaff_RSI + -0x2e) - (char)((ulonglong)in_RAX >> 8)) - in_CF;
  uVar1 = *unaff_RSI;
  *(char *)(unaff_RDI + 0x6eb6c307) = *(char *)(unaff_RDI + 0x6eb6c307) + unaff_R12B;
  return CONCAT44(param_2,uVar1) / (longlong)param_1 & 0xffffffff;
}



// FUNCTION 14d7bd7af FUN_14d7bd7af body=1 status=ok
// SIG undefined FUN_14d7bd7af(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd7af(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd7b3 FUN_14d7bd7b3 body=2 status=ok
// SIG undefined FUN_14d7bd7b3(void)

void FUN_14d7bd7b3(undefined8 param_1,undefined2 param_2)

{
  undefined1 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
  return;
}



// FUNCTION 14d7bd7b8 FUN_14d7bd7b8 body=20 status=ok
// SIG undefined FUN_14d7bd7b8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd7b8(void)

{
  char *pcVar1;
  ulonglong uVar2;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  uVar2 = unaff_RBX & 0xffffffff;
  pcVar1 = (char *)(unaff_RBP + -0x77);
  *pcVar1 = *pcVar1 + (char)(uVar2 >> 8);
  if (*pcVar1 < '\0') {
    *(char *)(uVar2 - 0x51) = *(char *)(uVar2 - 0x51) + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(uVar2 + 0x2f) = *(char *)(uVar2 + 0x2f) + (char)uVar2;
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd7c6 FUN_14d7bd7c6 body=4 status=ok
// SIG undefined FUN_14d7bd7c6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd7c6(int *param_1,char param_2)

{
  byte bVar1;
  byte bVar2;
  uint in_EAX;
  byte *pbVar3;
  char unaff_BL;
  char cVar4;
  undefined7 unaff_00000019;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  uint unaff_EDI;
  longlong in_R10;
  
  pbVar3 = (byte *)(ulonglong)unaff_EDI;
  cVar4 = unaff_BL + param_2 * '\x02';
  bVar1 = *pbVar3;
  bVar2 = (byte)unaff_EDI;
  *pbVar3 = *pbVar3 + bVar2;
  *param_1 = *param_1 + 0x17 + (uint)CARRY1(bVar1,bVar2);
  *(char *)CONCAT71(unaff_00000019,cVar4) =
       *(char *)CONCAT71(unaff_00000019,cVar4) >> ((byte)param_1 & 0x1f);
  *(undefined4 *)(in_R10 + -0x371cebf8) = unaff_ESI;
  *pbVar3 = *pbVar3 + bVar2;
  if (!SCARRY4((int)unaff_EDI >> 0x1f,*(int *)((ulonglong)in_EAX - 0x54))) {
    bVar1 = (byte)param_1 & 7;
    *(byte *)CONCAT44(unaff_00000034,unaff_ESI) =
         *(byte *)CONCAT44(unaff_00000034,unaff_ESI) >> bVar1 |
         *(char *)CONCAT44(unaff_00000034,unaff_ESI) << 8 - bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd7fe FUN_14d7bd7fe body=11 status=ok
// SIG undefined FUN_14d7bd7fe(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7bd7dc) */
/* WARNING: Removing unreachable block (ram,0x00014d7bd7e5) */
/* WARNING: Removing unreachable block (ram,0x00014d7bd7a4) */

void FUN_14d7bd7fe(longlong param_1,longlong param_2,char *param_3)

{
  uint *puVar1;
  uint uVar2;
  int *in_RAX;
  longlong unaff_RBP;
  int unaff_ESI;
  bool in_OF;
  
  if (!in_OF) {
    *(int *)(param_2 + 0x32) = unaff_ESI;
    *param_3 = *param_3 + (char)param_3;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  puVar1 = (uint *)((longlong)in_RAX + (ulonglong)(uint)(unaff_ESI << 5) * 2);
  uVar2 = *puVar1;
  *puVar1 = (uint)(CONCAT14(unaff_ESI << 4 < 0,uVar2) >> 0x12) | uVar2 << 0xf;
  if ((POPCOUNT((int)in_RAX + *in_RAX & *(uint *)(param_1 + 5) & 0xff) & 1U) == 0) {
    *(char *)(unaff_RBP + 0x3d) = *(char *)(unaff_RBP + 0x3d) + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RBP + 0x2c48896d) = *(char *)(unaff_RBP + 0x2c48896d) << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd80d FUN_14d7bd80d body=1 status=ok
// SIG undefined FUN_14d7bd80d(void)

void FUN_14d7bd80d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7bd811 FUN_14d7bd811 body=1 status=ok
// SIG undefined FUN_14d7bd811(void)

void FUN_14d7bd811(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7bd816 FUN_14d7bd816 body=4 status=ok
// SIG undefined FUN_14d7bd816(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bd829) overlaps instruction at (ram,0x00014d7bd824)
    */

void FUN_14d7bd816(undefined8 param_1,ulonglong param_2)

{
  byte bVar1;
  code *pcVar2;
  byte bVar3;
  char *in_RAX;
  byte *pbVar4;
  byte bVar5;
  char cVar6;
  undefined6 uVar7;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  longlong in_R10;
  byte in_CF;
  bool in_PF;
  bool bVar8;
  
  uVar7 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar6 = (char)((ulonglong)param_1 >> 8);
  bVar5 = (byte)param_1;
  if (in_PF) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(uint *)CONCAT44(unaff_0000001c,unaff_EBX) =
       (*(int *)CONCAT44(unaff_0000001c,unaff_EBX) - (int)param_2) - (uint)in_CF;
  *in_RAX = *in_RAX + (char)unaff_EBX;
  if (unaff_EBX <= *(int *)(unaff_RBP + 0x45030038)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x0001ad7c049e();
  *unaff_RDI = *unaff_RDI | bVar5;
  bVar8 = (POPCOUNT(*unaff_RDI) & 1U) == 0;
  pbVar4 = (byte *)FUN_14e557ea4();
  if (bVar8) {
    bVar1 = *pbVar4;
    bVar3 = (byte)pbVar4;
    *pbVar4 = *pbVar4 + bVar3;
    *(uint *)CONCAT62(uVar7,CONCAT11(cVar6,bVar5)) =
         *(int *)CONCAT62(uVar7,CONCAT11(cVar6,bVar5)) + 0x17 + (uint)CARRY1(bVar1,bVar3);
    *(char *)CONCAT44(unaff_0000001c,unaff_EBX) =
         *(char *)CONCAT44(unaff_0000001c,unaff_EBX) >> (bVar5 & 0x1f);
    *(undefined4 *)(in_R10 + -0x371cebf8) = unaff_ESI;
    *pbVar4 = *pbVar4 + bVar3;
    if (!SCARRY4((int)pbVar4 >> 0x1f,*(int *)(unaff_RDI + -0x54))) {
      *(byte *)CONCAT44(unaff_00000034,unaff_ESI) =
           *(byte *)CONCAT44(unaff_00000034,unaff_ESI) >> (bVar5 & 7) |
           *(char *)CONCAT44(unaff_00000034,unaff_ESI) << 8 - (bVar5 & 7);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((POPCOUNT((int)param_2 + *(int *)(param_2 & 0xffffffff) &
                *(uint *)(CONCAT62(uVar7,CONCAT11(cVar6,bVar5)) + 5) & 0xff) & 1U) != 0) {
    *(char *)(unaff_RBP + 0x2c48896d) = *(char *)(unaff_RBP + 0x2c48896d) << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RBP + 0x3d) = *(char *)(unaff_RBP + 0x3d) + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd820 FUN_14d7bd820 body=3 status=ok
// SIG undefined FUN_14d7bd820(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd820(int *param_1,uint param_2)

{
  char *pcVar1;
  byte bVar2;
  uint *puVar3;
  byte bVar4;
  int in_EAX;
  uint uVar5;
  byte *pbVar6;
  char *unaff_RBX;
  longlong unaff_RBP;
  uint *unaff_RSI;
  longlong unaff_RDI;
  longlong in_R10;
  undefined8 in_MM5;
  
  uVar5 = in_EAX + *(int *)(unaff_RBP + 0x7d) + 0x2c74e844;
  pcVar1 = (char *)((ulonglong)uVar5 + 0x39);
  *pcVar1 = *pcVar1 + (char)(uVar5 >> 8);
  puVar3 = unaff_RSI + 1;
  uVar5 = *unaff_RSI;
  pbVar6 = (byte *)(ulonglong)uVar5;
  psubsb(in_MM5,*(undefined8 *)(unaff_RBP + -0x5a));
  if ((POPCOUNT(*pcVar1) & 1U) == 0) {
    bVar2 = *pbVar6;
    bVar4 = (byte)uVar5;
    *pbVar6 = *pbVar6 + bVar4;
    *param_1 = *param_1 + 0x17 + (uint)CARRY1(bVar2,bVar4);
    *unaff_RBX = *unaff_RBX >> ((byte)param_1 & 0x1f);
    *(int *)(in_R10 + -0x371cebf8) = (int)puVar3;
    *pbVar6 = *pbVar6 + bVar4;
    if (!SCARRY4((int)uVar5 >> 0x1f,*(int *)(unaff_RDI + -0x54))) {
      bVar2 = (byte)param_1 & 7;
      *(byte *)puVar3 = (byte)*puVar3 >> bVar2 | (char)*puVar3 << 8 - bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((POPCOUNT(param_2 + *(int *)(ulonglong)param_2 & *(uint *)((longlong)param_1 + 5) & 0xff) & 1U
      ) != 0) {
    *(char *)(unaff_RBP + 0x2c48896d) = *(char *)(unaff_RBP + 0x2c48896d) << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RBP + 0x3d) = *(char *)(unaff_RBP + 0x3d) + (char)((ulonglong)param_1 >> 8);
  uRam0000000008827bf8 = 0xffffffff874c00ad;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd824 FUN_14d7bd824 body=21 status=ok
// SIG undefined FUN_14d7bd824(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd824(undefined8 param_1,ulonglong param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte bVar4;
  char cVar5;
  undefined6 uVar6;
  char *unaff_RBX;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  longlong in_R10;
  bool bVar7;
  
  uVar6 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar5 = (char)((ulonglong)param_1 >> 8);
  bVar4 = (byte)param_1;
  func_0x0001ad7c049e();
  *unaff_RDI = *unaff_RDI | bVar4;
  bVar7 = (POPCOUNT(*unaff_RDI) & 1U) == 0;
  pbVar3 = (byte *)FUN_14e557ea4();
  if (bVar7) {
    bVar1 = *pbVar3;
    bVar2 = (byte)pbVar3;
    *pbVar3 = *pbVar3 + bVar2;
    *(uint *)CONCAT62(uVar6,CONCAT11(cVar5,bVar4)) =
         *(int *)CONCAT62(uVar6,CONCAT11(cVar5,bVar4)) + 0x17 + (uint)CARRY1(bVar1,bVar2);
    *unaff_RBX = *unaff_RBX >> (bVar4 & 0x1f);
    *(undefined4 *)(in_R10 + -0x371cebf8) = unaff_ESI;
    *pbVar3 = *pbVar3 + bVar2;
    if (!SCARRY4((int)pbVar3 >> 0x1f,*(int *)(unaff_RDI + -0x54))) {
      *(byte *)CONCAT44(unaff_00000034,unaff_ESI) =
           *(byte *)CONCAT44(unaff_00000034,unaff_ESI) >> (bVar4 & 7) |
           *(char *)CONCAT44(unaff_00000034,unaff_ESI) << 8 - (bVar4 & 7);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((POPCOUNT((int)param_2 + *(int *)(param_2 & 0xffffffff) &
                *(uint *)(CONCAT62(uVar6,CONCAT11(cVar5,bVar4)) + 5) & 0xff) & 1U) != 0) {
    *(char *)(unaff_RBP + 0x2c48896d) = *(char *)(unaff_RBP + 0x2c48896d) << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RBP + 0x3d) = *(char *)(unaff_RBP + 0x3d) + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd83c FUN_14d7bd83c body=8 status=ok
// SIG undefined FUN_14d7bd83c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd83c(longlong param_1,uint param_2)

{
  longlong unaff_RBP;
  
  if ((POPCOUNT(param_2 + *(int *)(ulonglong)param_2 & *(uint *)(param_1 + 5) & 0xff) & 1U) != 0) {
    *(char *)(unaff_RBP + 0x2c48896d) = *(char *)(unaff_RBP + 0x2c48896d) << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RBP + 0x3d) = *(char *)(unaff_RBP + 0x3d) + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd844 FUN_14d7bd844 body=18 status=ok
// SIG undefined FUN_14d7bd844(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd844(longlong param_1,uint param_2)

{
  longlong unaff_RBP;
  
  if ((POPCOUNT(param_2 + *(int *)(ulonglong)param_2 & *(uint *)(param_1 + 5) & 0xff) & 1U) != 0) {
    *(char *)(unaff_RBP + 0x2c48896d) = *(char *)(unaff_RBP + 0x2c48896d) << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RBP + 0x3d) = *(char *)(unaff_RBP + 0x3d) + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd85a FUN_14d7bd85a body=7 status=ok
// SIG undefined FUN_14d7bd85a(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7bd8e3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bd85a(undefined8 param_1,undefined2 param_2)

{
  byte bVar1;
  undefined4 in_EAX;
  char cVar3;
  byte bVar4;
  undefined6 uVar5;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined8 unaff_RSI;
  bool bVar6;
  byte *pbVar2;
  
  uVar5 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar4 = (byte)((ulonglong)param_1 >> 8);
  *(undefined4 *)(CONCAT71(unaff_00000019,unaff_BL) + -0x7b) = in_EAX;
  bVar1 = in(0x84);
  pbVar2 = (byte *)(CONCAT71((int7)((ulonglong)unaff_RSI >> 8),bVar1) & 0xffffffff);
  *pbVar2 = *pbVar2 ^ bVar1;
  if (*pbVar2 == 0) {
    *pbVar2 = *pbVar2 + bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar3 = (char)param_1 + bVar1 + 0x7a;
  bVar1 = (byte)in_EAX;
  out(param_2,bVar1);
  bVar6 = CARRY1(*(byte *)CONCAT71(unaff_00000019,unaff_BL),bVar4);
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + bVar4;
  if ((bVar1 < 0x6b && !CARRY1(bVar1 + 0x95,bVar6)) && (byte)(bVar1 + 0x95 + bVar6) != '\0') {
    *(char *)CONCAT62(uVar5,CONCAT11(bVar4,cVar3)) =
         *(char *)CONCAT62(uVar5,CONCAT11(bVar4,cVar3)) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_171059e43 = -_DAT_171059e43;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd86d FUN_14d7bd86d body=4 status=ok
// SIG undefined FUN_14d7bd86d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bd874) overlaps instruction at (ram,0x00014d7bd873)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7bd8e3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14d7bd86d(longlong param_1,longlong param_2)

{
  byte bVar1;
  code *pcVar2;
  byte bVar3;
  byte bVar4;
  int *in_RAX;
  char *pcVar6;
  undefined8 uVar7;
  char cVar8;
  byte bVar9;
  undefined6 uVar10;
  char unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  byte unaff_SIL;
  longlong unaff_RDI;
  bool bVar11;
  bool in_ZF;
  char in_SF;
  char in_OF;
  byte *pbVar5;
  
  uVar10 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar9 = (byte)((ulonglong)param_1 >> 8);
  cVar8 = (char)param_1;
  if (in_ZF) {
    pbVar5 = (byte *)((ulonglong)in_RAX & 0xffffffffffffffe0);
    bVar3 = *pbVar5;
    bVar4 = (byte)pbVar5;
    bVar1 = *pbVar5;
    *pbVar5 = *pbVar5 + bVar4;
    if (!CARRY1(bVar3,bVar4) && *pbVar5 != 0) {
      if (SCARRY1(bVar1,bVar4) == (char)*pbVar5 < '\0') {
        out(0xad,(uint)pbVar5);
        pcVar6 = (char *)(ulonglong)((uint)pbVar5 ^ 0xdba200d5);
        *pcVar6 = *pcVar6 + bVar9;
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return uVar7;
      }
      *(char *)(param_1 + -0x64697abd) = *(char *)(param_1 + -0x64697abd) + cVar8;
      bVar3 = in(0x84);
      pbVar5 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3);
      *pbVar5 = *pbVar5 ^ bVar3;
      if (*pbVar5 != 0) {
        cVar8 = cVar8 + bVar3 + 0x7a;
        out((short)param_2,unaff_SIL);
        bVar11 = CARRY1(*(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)),bVar9);
        *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
             *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + bVar9;
        if ((unaff_SIL < 0x6b && !CARRY1(unaff_SIL + 0x95,bVar11)) &&
            (byte)(unaff_SIL + 0x95 + bVar11) != '\0') {
          *(char *)CONCAT62(uVar10,CONCAT11(bVar9,cVar8)) =
               *(char *)CONCAT62(uVar10,CONCAT11(bVar9,cVar8)) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        _DAT_171059e43 = -_DAT_171059e43;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *pbVar5 = *pbVar5 + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (in_OF == in_SF) {
      *in_RAX = *in_RAX + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)(param_2 + 0x2facfa) = *(char *)(param_2 + 0x2facfa) + cVar8;
    cRam000000014e5bfca1 = cRam000000014e5bfca1 + (char)param_2;
    *(char *)(unaff_RDI + -0x35) = *(char *)(unaff_RDI + -0x35) + (char)((ulonglong)param_2 >> 8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd871 FUN_14d7bd871 body=4 status=ok
// SIG undefined FUN_14d7bd871(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bd874) overlaps instruction at (ram,0x00014d7bd873)
    */

void FUN_14d7bd871(char param_1,longlong param_2)

{
  undefined1 in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RDI;
  char in_SF;
  char in_OF;
  
  if (in_OF != in_SF) {
    *(char *)(param_2 + 0x2facfa) = *(char *)(param_2 + 0x2facfa) + param_1;
    cRam000000014e5bfca1 = cRam000000014e5bfca1 + (char)param_2;
    *(char *)(unaff_RDI + -0x35) = *(char *)(unaff_RDI + -0x35) + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd87b FUN_14d7bd87b body=8 status=ok
// SIG undefined FUN_14d7bd87b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd87b(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  cRam000000014e5bfca1 = cRam000000014e5bfca1 + (char)param_2;
  *(char *)(unaff_RDI + -0x35) = *(char *)(unaff_RDI + -0x35) + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd893 FUN_14d7bd893 body=20 status=ok
// SIG undefined FUN_14d7bd893(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd893(undefined8 param_1)

{
  longlong unaff_RBP;
  
  *(char *)(unaff_RBP + 0x3d) = *(char *)(unaff_RBP + 0x3d) + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd8ab FUN_14d7bd8ab body=2 status=ok
// SIG undefined FUN_14d7bd8ab(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14d7bd8ab(undefined8 param_1,ulonglong param_2)

{
  code *pcVar1;
  uint in_EAX;
  ulonglong uVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  char unaff_BL;
  undefined7 unaff_00000019;
  byte unaff_BPL;
  bool bVar8;
  bool in_ZF;
  char in_SF;
  char in_OF;
  float10 in_ST0;
  
  uVar7 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar6 = (undefined2)((ulonglong)param_1 >> 0x10);
  bVar4 = (byte)((ulonglong)param_1 >> 8);
  if (!in_ZF && in_OF == in_SF) {
    *(char *)(ulonglong)(in_EAX ^ 0xdba200d5) = *(char *)(ulonglong)(in_EAX ^ 0xdba200d5) + bVar4;
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  bVar5 = bVar4 + (byte)param_2;
  _DAT_13bd4330a = (short)ROUND(in_ST0);
  *(uint *)(CONCAT71(unaff_00000019,unaff_BL) + 0xcc77ec) =
       CONCAT22(uVar6,CONCAT11(bVar5,(char)param_1));
  if (CARRY1(bVar4,(byte)param_2)) {
    in(0xf2);
    return param_2 & 0xffffffff;
  }
  cVar3 = (char)param_1 + (char)in_EAX + 'z';
  _DAT_28e67334 = CONCAT71(unaff_00000019,unaff_BL);
  out((short)param_2,unaff_BPL);
  bVar8 = CARRY1(*(byte *)CONCAT71(unaff_00000019,unaff_BL),bVar5);
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + bVar5;
  if ((0x6a < unaff_BPL || CARRY1(unaff_BPL + 0x95,bVar8)) ||
      (byte)(unaff_BPL + 0x95 + bVar8) == '\0') {
    _DAT_171059e43 = -_DAT_171059e43;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(bVar5,cVar3))) =
       *(char *)CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(bVar5,cVar3))) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd8b0 FUN_14d7bd8b0 body=38 status=ok
// SIG undefined FUN_14d7bd8b0(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14d7bd8b0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 in_AL;
  int iVar2;
  byte bVar4;
  char *pcVar3;
  ulonglong uVar6;
  char unaff_BL;
  undefined7 unaff_00000019;
  byte unaff_BPL;
  longlong unaff_RSI;
  bool bVar7;
  float10 in_ST0;
  char unaff_retaddr;
  undefined1 auStackX_8 [32];
  byte bVar5;
  
  DAT_62f47ec485dbdb = in_AL;
  *(char *)(unaff_RSI + 0x6206a1e5) =
       *(char *)(unaff_RSI + 0x6206a1e5) - (char)((ulonglong)param_2 >> 8);
  uVar6 = CONCAT71((int7)((ulonglong)param_2 >> 8),0x50);
  iVar2 = (int)auStackX_8 * 0xd125ffa;
  bVar5 = (byte)((uint)iVar2 >> 8);
  bVar4 = bVar5 + 0x50;
  uVar1 = CONCAT22((short)((uint)iVar2 >> 0x10),CONCAT11(bVar4,(char)iVar2));
  _DAT_13bd4330a = (short)ROUND(in_ST0);
  *(undefined4 *)(CONCAT71(unaff_00000019,unaff_BL) + 0xcc77ec) = uVar1;
  if (0xaf < bVar5) {
    in(0xf2);
    return uVar6 & 0xffffffff;
  }
  pcVar3 = (char *)(ulonglong)CONCAT31((int3)((uint)uVar1 >> 8),(char)iVar2 + unaff_retaddr + 'z');
  _DAT_28e67334 = CONCAT71(unaff_00000019,unaff_BL);
  out((short)uVar6,unaff_BPL);
  bVar7 = CARRY1(*(byte *)CONCAT71(unaff_00000019,unaff_BL),bVar4);
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + bVar4;
  if ((0x6a < unaff_BPL || CARRY1(unaff_BPL + 0x95,bVar7)) ||
      (byte)(unaff_BPL + 0x95 + bVar7) == '\0') {
    _DAT_171059e43 = -_DAT_171059e43;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar3 = *pcVar3 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd8dc FUN_14d7bd8dc body=19 status=ok
// SIG undefined FUN_14d7bd8dc(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14d7bd8dc(undefined8 param_1,undefined4 param_2)

{
  char in_AL;
  char cVar1;
  byte bVar2;
  undefined6 uVar3;
  char unaff_BL;
  undefined7 unaff_00000019;
  byte unaff_SIL;
  bool in_CF;
  bool bVar4;
  
  uVar3 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar2 = (byte)((ulonglong)param_1 >> 8);
  if (in_CF) {
    in(0xf2);
    return param_2;
  }
  cVar1 = (char)param_1 + in_AL + 'z';
  _DAT_28e67334 = CONCAT71(unaff_00000019,unaff_BL);
  out((short)param_2,unaff_SIL);
  bVar4 = CARRY1(*(byte *)CONCAT71(unaff_00000019,unaff_BL),bVar2);
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + bVar2;
  if ((0x6a < unaff_SIL || CARRY1(unaff_SIL + 0x95,bVar4)) ||
      (byte)(unaff_SIL + 0x95 + bVar4) == '\0') {
    _DAT_171059e43 = -_DAT_171059e43;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT62(uVar3,CONCAT11(bVar2,cVar1)) =
       *(char *)CONCAT62(uVar3,CONCAT11(bVar2,cVar1)) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd8f5 FUN_14d7bd8f5 body=8 status=ok
// SIG undefined FUN_14d7bd8f5(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bd8dc) overlaps instruction at (ram,0x00014d7bd8db)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7bd8e3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14d7bd8f5(longlong param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint *in_RAX;
  byte bVar7;
  char *pcVar6;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_EBP;
  char *unaff_RSI;
  char *unaff_RDI;
  byte in_CF;
  bool bVar8;
  float10 in_ST0;
  
  uVar3 = (uint)in_CF;
  uVar4 = unaff_EBP - *in_RAX;
  bVar7 = (byte)((ulonglong)param_1 >> 8);
  if (unaff_EBP < *in_RAX || uVar4 < uVar3) {
    *(char *)(param_1 + 0xee960f) = *(char *)(param_1 + 0xee960f) + bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((unaff_EBP < *in_RAX || uVar4 < uVar3) || uVar4 == uVar3) {
    pcVar6 = &stack0x7328e673 + (longlong)unaff_RDI;
    *pcVar6 = *pcVar6 + unaff_BH;
    if (*pcVar6 < '\0') {
      out((short)param_2,(char)in_RAX);
      _DAT_13bd4330a = (short)ROUND(in_ST0);
      *(int *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0xcc77ec) = (int)param_1;
      pcVar6 = (char *)CONCAT71((int7)((ulonglong)param_1 >> 8),(char)param_1 + (char)in_RAX + 'z');
      _DAT_28e67334 = CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
      bVar5 = (byte)unaff_RSI;
      out((short)param_2,bVar5);
      bVar8 = CARRY1(*(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)),bVar7);
      *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
           *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + bVar7;
      if ((0x6a < bVar5 || CARRY1(bVar5 + 0x95,bVar8)) || (byte)(bVar5 + 0x95 + bVar8) == '\0') {
        _DAT_171059e43 = -_DAT_171059e43;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *pcVar6 = *pcVar6 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    do {
      if (param_1 == 0) {
        return param_2;
      }
      param_1 = param_1 + -1;
      cVar2 = *unaff_RDI;
      cVar1 = *unaff_RSI;
      unaff_RSI = unaff_RSI + 1;
      unaff_RDI = unaff_RDI + 1;
    } while (cVar1 != cVar2);
    return param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd903 FUN_14d7bd903 body=3 status=ok
// SIG undefined FUN_14d7bd903(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd903(void)

{
  undefined4 *unaff_RBX;
  undefined4 unaff_ESP;
  char in_SF;
  char in_OF;
  
  if (in_OF != in_SF) {
    *unaff_RBX = unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd90c FUN_14d7bd90c body=8 status=ok
// SIG undefined FUN_14d7bd90c(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bd90c(longlong param_1,uint param_2)

{
  byte bVar1;
  code *pcVar2;
  byte bVar3;
  byte bVar4;
  byte unaff_BL;
  char cVar5;
  undefined7 unaff_00000019;
  float10 in_ST0;
  
  param_2 = param_2 ^ *(uint *)(param_1 + 0x4d);
  bVar4 = (byte)(param_2 >> 8);
  cVar5 = unaff_BL + bVar4;
  out((short)param_2,0x84765e4d);
  bVar3 = ((byte)param_1 & 0x1f) % 9;
  bVar1 = *(byte *)(param_1 + 0x404115);
  *(byte *)(param_1 + 0x404115) =
       bVar1 << bVar3 | (byte)(CONCAT11(CARRY1(unaff_BL,bVar4),bVar1) >> 9 - bVar3);
  cRam0000000084765e4d = cRam0000000084765e4d + (byte)param_1;
  if (cRam0000000084765e4d == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_176da4d83 = (short)in_ST0;
  *(char *)CONCAT71(unaff_00000019,cVar5) = *(char *)CONCAT71(unaff_00000019,cVar5) + cVar5;
  pcVar2 = (code *)swi(1);
  (*pcVar2)();
  return;
}



// FUNCTION 14d7bd928 FUN_14d7bd928 body=3 status=ok
// SIG undefined FUN_14d7bd928(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bd928(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_CF;
  float10 in_ST0;
  longlong unaff_retaddr;
  undefined1 auStackX_8 [32];
  
  if (!in_CF) {
    *(char *)(unaff_retaddr + -0x7a2fb594) = *(char *)(unaff_retaddr + -0x7a2fb594) - unaff_BH;
    uVar1 = in(param_2);
    *unaff_RDI = uVar1;
    _DAT_176da4d83 = (short)in_ST0;
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BL;
    pcVar2 = (code *)swi(1);
    (*pcVar2)();
    return;
  }
  *unaff_RSI = (int)auStackX_8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd92c FUN_14d7bd92c body=20 status=ok
// SIG undefined FUN_14d7bd92c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bd92c(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined4 *unaff_RDI;
  float10 in_ST0;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  _DAT_176da4d83 = (short)in_ST0;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
  pcVar2 = (code *)swi(1);
  (*pcVar2)(0x85d04a6c);
  return;
}



// FUNCTION 14d7bd94b FUN_14d7bd94b body=4 status=ok
// SIG undefined FUN_14d7bd94b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bd94b(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  byte bVar2;
  undefined2 in_AX;
  char cVar3;
  byte bVar4;
  undefined6 uVar5;
  char unaff_BL;
  undefined7 unaff_00000019;
  byte unaff_SIL;
  undefined1 *unaff_RDI;
  bool bVar6;
  
  uVar5 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar4 = (byte)((ulonglong)param_1 >> 8);
  LOCK();
  uVar1 = *unaff_RDI;
  *unaff_RDI = (char)in_AX;
  UNLOCK();
  bVar2 = (byte)((short)CONCAT31((int3)(char)((ushort)in_AX >> 8),uVar1) /
                (short)*(char *)(CONCAT71(unaff_00000019,unaff_BL) + 0x67005567));
  cVar3 = ((byte)param_1 | bVar2) + bVar2 + 0x7a;
  out(param_2,unaff_SIL);
  bVar6 = CARRY1(*(byte *)CONCAT71(unaff_00000019,unaff_BL),bVar4);
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + bVar4;
  if ((0x6a < unaff_SIL || CARRY1(unaff_SIL + 0x95,bVar6)) ||
      (byte)(unaff_SIL + 0x95 + bVar6) == '\0') {
    _DAT_171059e43 = -_DAT_171059e43;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT62(uVar5,CONCAT11(bVar4,cVar3)) =
       *(char *)CONCAT62(uVar5,CONCAT11(bVar4,cVar3)) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd955 FUN_14d7bd955 body=30 status=ok
// SIG undefined FUN_14d7bd955(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bd955(undefined8 param_1,undefined2 param_2)

{
  byte in_AL;
  char cVar1;
  byte bVar2;
  undefined6 uVar3;
  char unaff_BL;
  undefined7 unaff_00000019;
  byte unaff_SIL;
  bool bVar4;
  
  uVar3 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar2 = (byte)((ulonglong)param_1 >> 8);
  cVar1 = ((byte)param_1 | in_AL) + in_AL + 0x7a;
  out(param_2,unaff_SIL);
  bVar4 = CARRY1(*(byte *)CONCAT71(unaff_00000019,unaff_BL),bVar2);
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + bVar2;
  if ((0x6a < unaff_SIL || CARRY1(unaff_SIL + 0x95,bVar4)) ||
      (byte)(unaff_SIL + 0x95 + bVar4) == '\0') {
    _DAT_171059e43 = -_DAT_171059e43;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT62(uVar3,CONCAT11(bVar2,cVar1)) =
       *(char *)CONCAT62(uVar3,CONCAT11(bVar2,cVar1)) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bd97d FUN_14d7bd97d body=12 status=ok
// SIG undefined FUN_14d7bd97d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bd97d(undefined8 param_1,char param_2)

{
  char *pcVar1;
  byte in_AL;
  int unaff_EBP;
  int *unaff_RSI;
  
  pcVar1 = (char *)((ulonglong)
                    (unaff_EBP + *unaff_RSI +
                    (uint)(in_AL < *(byte *)(CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                                                      CONCAT11((char)((ulonglong)param_1 >> 8) -
                                                               FUN_148c606b8,(char)param_1)) + 0x25)
                          )) - 0x77);
  *pcVar1 = *pcVar1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


