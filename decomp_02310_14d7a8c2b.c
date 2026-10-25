// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14d7a8c2b FUN_14d7a8c2b body=18 status=ok
// SIG undefined FUN_14d7a8c2b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x4000abb2) */

void FUN_14d7a8c2b(longlong param_1)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  int *piVar4;
  byte bVar5;
  char cVar8;
  uint uVar6;
  uint in_EAX;
  byte bVar9;
  byte unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  byte *unaff_RDI;
  int *in_R11;
  char unaff_R14B;
  char in_CF;
  byte *unaff_retaddr;
  ulonglong uVar7;
  
  uVar7 = unaff_RSI & 0xffffffff;
  cVar8 = (char)(uVar7 >> 8) +
          *(char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x347e00aa) + in_CF;
  if (cVar8 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)((longlong)in_R11 + -0x5c96da7d) = *(char *)((longlong)in_R11 + -0x5c96da7d) + unaff_R14B
  ;
  uVar6 = (int)CONCAT62((int6)(uVar7 >> 0x10),CONCAT11(cVar8,(char)uVar7)) + 0x73f5ed8c;
  if (param_1 == 0) {
    *unaff_RDI = *unaff_retaddr;
    pbVar2 = (byte *)(ulonglong)uVar6 + 0xae003;
    *pbVar2 = *pbVar2 + (char)((ulonglong)(unaff_RDI + 1) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar5 = (byte)uVar6 | *(byte *)(ulonglong)uVar6;
  uVar7 = (ulonglong)CONCAT31((int3)(uVar6 >> 8),bVar5);
  pbVar2 = (byte *)(unaff_RBP + -0x29);
  bVar3 = *pbVar2;
  bVar9 = (byte)((ulonglong)param_1 >> 8);
  *pbVar2 = *pbVar2 + bVar9;
  piVar4 = (int *)(uVar7 * 2);
  *piVar4 = (*piVar4 - (int)param_1) - (uint)CARRY1(bVar3,bVar9);
  if (*piVar4 < 0) {
    pcVar1 = (char *)(uVar7 - 0x3b);
    *pcVar1 = *pcVar1 + bVar5;
    unaff_RDI[-0xb512b8c] =
         unaff_RDI[-0xb512b8c] >> 1 |
         (*(byte *)(CONCAT62(unaff_0000001a,CONCAT11(0x2a,unaff_BL)) + 0xff00000000) < unaff_BL) <<
         7;
    bVar3 = *unaff_RDI;
    *unaff_RDI = *unaff_RDI + 0x2a;
    *unaff_RDI = *(byte *)(ulonglong)in_EAX;
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(0x2a,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(0x2a,unaff_BL)) + '\x01';
    *in_R11 = (*in_R11 - (in_EAX + 1)) - (uint)(0xd5 < bVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8c39 FUN_14d7a8c39 body=7 status=ok
// SIG undefined FUN_14d7a8c39(void)

void FUN_14d7a8c39(void)

{
  return;
}



// FUNCTION 14d7a8c45 FUN_14d7a8c45 body=7 status=ok
// SIG undefined FUN_14d7a8c45(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8c45(undefined8 param_1,longlong param_2)

{
  int unaff_ESP;
  byte in_CF;
  
  *(int *)(param_2 + -0x7d8ec898) = (*(int *)(param_2 + -0x7d8ec898) - unaff_ESP) - (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8c5f FUN_14d7a8c5f body=4 status=ok
// SIG undefined FUN_14d7a8c5f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8c5f(void)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  undefined8 uStack_10;
  
  puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x17';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8c64 FUN_14d7a8c64 body=5 status=ok
// SIG undefined FUN_14d7a8c64(void)

ulonglong FUN_14d7a8c64(longlong param_1,undefined2 param_2)

{
  uint *puVar1;
  char *pcVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined8 in_RAX;
  undefined7 uVar6;
  ulonglong uVar5;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
  unkbyte10 in_ST0;
  
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  uVar4 = in(0x27);
  puVar1 = (uint *)((longlong)unaff_RDI + -0x364a60ef);
  bVar3 = (byte)param_1 & 0x1f;
  *puVar1 = *puVar1 >> bVar3 | *puVar1 << 0x20 - bVar3;
  *unaff_RDI = (int)CONCAT71(uVar6,uVar4);
  *(byte *)(param_1 + -0x2f) = *(byte *)(param_1 + -0x2f) | (byte)((ulonglong)unaff_RBX >> 8);
  uVar4 = in(param_2);
  uVar5 = CONCAT71(uVar6,uVar4);
  uVar7 = (ulonglong)(uint)((int)uVar5 * 0x30fb6993);
  *(unkbyte10 *)(&stack0xfffffffffffffff0 + uVar7) = in_ST0;
  *(char *)(param_1 + 0x45) = *(char *)(param_1 + 0x45) + '\x01';
  pcVar2 = (char *)(unaff_RSI + -0xb852009 + uVar7 * 8);
  *pcVar2 = *pcVar2 + '\\';
  return uVar5 & 0xf8d537 ^ 0x6e;
}



// FUNCTION 14d7a8c6d FUN_14d7a8c6d body=53 status=ok
// SIG undefined FUN_14d7a8c6d(void)

ulonglong FUN_14d7a8c6d(undefined8 param_1,undefined2 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  undefined1 uVar3;
  undefined8 in_RAX;
  undefined6 uVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
  unkbyte10 in_ST0;
  ulonglong uVar4;
  
  uVar5 = (undefined6)((ulonglong)param_1 >> 0x10);
  *unaff_RDI = (int)in_RAX;
  pbVar1 = (byte *)(CONCAT62(uVar5,CONCAT11(0xc9,(char)param_1)) + -0x2f);
  *pbVar1 = *pbVar1 | (byte)((ulonglong)unaff_RBX >> 8);
  uVar3 = in(param_2);
  uVar4 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar3);
  uVar6 = (ulonglong)(uint)((int)uVar4 * 0x30fb6993);
  *(unkbyte10 *)(&stack0xfffffffffffffff0 + uVar6) = in_ST0;
  pcVar2 = (char *)(CONCAT62(uVar5,CONCAT11(0xc9,(char)param_1)) + 0x45);
  *pcVar2 = *pcVar2 + '\x01';
  pcVar2 = (char *)(unaff_RSI + -0xb852009 + uVar6 * 8);
  *pcVar2 = *pcVar2 + '\\';
  return uVar4 & 0xf8d537 ^ 0x6e;
}



// FUNCTION 14d7a8cbc FUN_14d7a8cbc body=2 status=ok
// SIG undefined FUN_14d7a8cbc(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8cbc(void)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8cc0 FUN_14d7a8cc0 body=1 status=ok
// SIG undefined FUN_14d7a8cc0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8cc0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8cc4 FUN_14d7a8cc4 body=2 status=ok
// SIG undefined FUN_14d7a8cc4(void)

void FUN_14d7a8cc4(void)

{
  char unaff_BL;
  
  cRam00000001b27bd470 = cRam00000001b27bd470 + unaff_BL;
  return;
}



// FUNCTION 14d7a8cd6 FUN_14d7a8cd6 body=8 status=ok
// SIG undefined FUN_14d7a8cd6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8cd6(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8cde FUN_14d7a8cde body=2 status=ok
// SIG undefined FUN_14d7a8cde(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8cde(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8cf1 FUN_14d7a8cf1 body=7 status=ok
// SIG undefined FUN_14d7a8cf1(void)

void FUN_14d7a8cf1(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a8cf9 FUN_14d7a8cf9 body=4 status=ok
// SIG undefined FUN_14d7a8cf9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8cf9(undefined8 param_1,undefined8 param_2)

{
  uint *puVar1;
  uint in_EAX;
  uint uVar2;
  longlong unaff_RSI;
  longlong unaff_RDI;
  float10 in_ST0;
  
  *(char *)(unaff_RSI + -0x23bf83a2) = *(char *)(unaff_RSI + -0x23bf83a2) + (char)(in_EAX >> 8);
  uVar2 = in_EAX | *(uint *)(unaff_RDI + -2);
  iRam000000019cce2cda = (int)ROUND(in_ST0);
  out(CONCAT11((byte)((ulonglong)param_2 >> 8) | *(byte *)(unaff_RSI + 0x34),(char)param_2),uVar2);
  puVar1 = (uint *)((ulonglong)uVar2 - 0x229b8863);
  *puVar1 = *puVar1 ^ 0x5d;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8cfe FUN_14d7a8cfe body=12 status=ok
// SIG undefined FUN_14d7a8cfe(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8cfe(undefined8 param_1,undefined2 param_2)

{
  uint *puVar1;
  uint in_EAX;
  char *unaff_RSI;
  char *unaff_RDI;
  float10 in_ST0;
  longlong unaff_retaddr;
  
  if (*unaff_RDI <= *unaff_RSI) {
    iRam000000019cce2cda = (int)ROUND(in_ST0 - (float10)*(double *)(unaff_retaddr + -0x59));
    out(param_2,in_EAX | *(uint *)(unaff_RDI + 1));
    puVar1 = (uint *)((ulonglong)(in_EAX | *(uint *)(unaff_RDI + 1)) - 0x229b8863);
    *puVar1 = *puVar1 ^ 0x5d;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8d0a FUN_14d7a8d0a body=4 status=ok
// SIG undefined FUN_14d7a8d0a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8d0a(undefined8 param_1,undefined2 param_2)

{
  uint *puVar1;
  undefined1 in_AL;
  byte bVar2;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte in_CF;
  char in_PF;
  char in_AF;
  char in_ZF;
  char in_SF;
  
  bVar2 = in_SF << 7 | in_ZF << 6 | in_AF << 4 | in_PF << 2 | 2U | in_CF;
  out(param_2,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL)));
  puVar1 = (uint *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL))) + -0x229b8863);
  *puVar1 = *puVar1 ^ 0x5d;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8d0e FUN_14d7a8d0e body=1 status=ok
// SIG undefined FUN_14d7a8d0e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8d0e(void)

{
  longlong in_RAX;
  
  *(uint *)(in_RAX + -0x229b8863) = *(uint *)(in_RAX + -0x229b8863) ^ 0x5d;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8d12 FUN_14d7a8d12 body=20 status=ok
// SIG undefined FUN_14d7a8d12(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8d12(undefined8 param_1,undefined2 param_2)

{
  uint *puVar1;
  undefined1 uVar2;
  undefined7 in_register_00000001;
  
  uVar2 = in(param_2);
  puVar1 = (uint *)(CONCAT71(in_register_00000001,uVar2) + -0x229b8863);
  *puVar1 = *puVar1 ^ 0x5d;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8d28 FUN_14d7a8d28 body=2 status=ok
// SIG undefined FUN_14d7a8d28(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8d28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8d39 FUN_14d7a8d39 body=1 status=ok
// SIG undefined FUN_14d7a8d39(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8d39(undefined8 param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  
  out(param_2,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8d54 FUN_14d7a8d54 body=5 status=ok
// SIG undefined FUN_14d7a8d54(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8d54(void)

{
  uint *unaff_RBX;
  uint unaff_ESP;
  
  *unaff_RBX = *unaff_RBX | unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8d5c FUN_14d7a8d5c body=5 status=ok
// SIG undefined FUN_14d7a8d5c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8d5c(undefined8 param_1,undefined2 param_2)

{
  code *pcVar1;
  longlong lVar2;
  char in_SF;
  bool in_OF;
  
  if (in_OF == (bool)in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (code *)swi(0x9f);
  lVar2 = (*pcVar1)();
  out(param_2,(int)lVar2);
  *(uint *)(lVar2 + -0x229b8863) = *(uint *)(lVar2 + -0x229b8863) ^ 0x5d;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8d64 FUN_14d7a8d64 body=4 status=ok
// SIG undefined FUN_14d7a8d64(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8d64(longlong param_1,undefined2 param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 *in_RAX;
  undefined7 uVar5;
  char cVar6;
  char unaff_BL;
  undefined1 *unaff_RSI;
  uint *unaff_RDI;
  char in_CF;
  bool bVar7;
  char in_ZF;
  char *pcVar4;
  
  param_1 = param_1 + -1;
  if (param_1 == 0 || in_ZF != '\0') {
    *in_RAX = (int)unaff_RDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar6 = (char)param_1 + unaff_RSI[-0x7c019dec] + in_CF;
  out(0xcc,(int)in_RAX);
  uVar5 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar2 = (byte)in_RAX | (byte)*unaff_RDI;
  pcVar4 = (char *)CONCAT71(uVar5,bVar2);
  uVar3 = (uint)pcVar4;
  bVar7 = uVar3 < *unaff_RDI;
  if (bVar7 || uVar3 == *unaff_RDI) {
    out(*unaff_RSI,param_2);
    *(undefined1 *)(unaff_RDI + 1) = unaff_RSI[1];
    pcVar4[0x79] = (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!bVar7 && uVar3 != *unaff_RDI) {
    cVar1 = bVar2 + 0x3f + bVar7;
    pcVar4 = (char *)CONCAT71(uVar5,cVar1);
    *pcVar4 = *pcVar4 + cVar1;
    pcVar4 = (char *)(CONCAT71((int7)((ulonglong)param_1 >> 8),cVar6) + 0x71f408);
    *pcVar4 = *pcVar4 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)((longlong)unaff_RDI + -0x5b4849b7) =
       *(char *)((longlong)unaff_RDI + -0x5b4849b7) - cVar6;
  *pcVar4 = *pcVar4 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8d70 FUN_14d7a8d70 body=11 status=ok
// SIG undefined FUN_14d7a8d70(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8d70(undefined4 param_1,undefined2 param_2)

{
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  longlong in_FS_OFFSET;
  bool in_SF;
  float10 in_ST0;
  
  out(*unaff_RSI,param_2);
  in(0x54);
  out(param_2,(char)param_1);
  if (!in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRam779db083011a70b5 = param_1;
  *(double *)(in_FS_OFFSET + unaff_RBP + 0x5e) = (double)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8db6 FUN_14d7a8db6 body=7 status=ok
// SIG undefined FUN_14d7a8db6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8db6(longlong param_1)

{
  char in_AL;
  char in_CF;
  
  *(char *)(param_1 + 0x18180010) = (*(char *)(param_1 + 0x18180010) - in_AL) - in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8dbf FUN_14d7a8dbf body=7 status=ok
// SIG undefined FUN_14d7a8dbf(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8dbf(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8dc9 FUN_14d7a8dc9 body=2 status=ok
// SIG undefined FUN_14d7a8dc9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8dc9(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8dd2 FUN_14d7a8dd2 body=1 status=ok
// SIG undefined FUN_14d7a8dd2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8dd2(undefined8 param_1,int *param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_retaddr;
  
  bVar2 = *(byte *)(unaff_retaddr + -0x7bdfdb43);
  *param_2 = *param_2 << 1;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH | bVar2,unaff_BL)) + 0xacce750);
  *pcVar1 = *pcVar1 + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8dd6 FUN_14d7a8dd6 body=14 status=ok
// SIG undefined FUN_14d7a8dd6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8dd6(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  byte in_AL;
  longlong unaff_RBX;
  float10 in_ST0;
  
  *(float *)(unaff_RBX + 0x24bdbd0a) = (float)in_ST0;
  pbVar1 = (byte *)(param_1 + 0x62148e12 + param_2 * 8);
  *pbVar1 = *pbVar1 & in_AL;
  *(char *)(unaff_RBX + 0xacce750) = *(char *)(unaff_RBX + 0xacce750) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8de6 FUN_14d7a8de6 body=14 status=ok
// SIG undefined FUN_14d7a8de6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8de6(longlong param_1,undefined2 param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined8 in_RAX;
  undefined7 uVar5;
  char unaff_BL;
  undefined1 *unaff_RSI;
  uint *unaff_RDI;
  bool bVar6;
  char *pcVar4;
  
  out(0xcc,(int)in_RAX);
  uVar5 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar2 = (byte)in_RAX | (byte)*unaff_RDI;
  pcVar4 = (char *)CONCAT71(uVar5,bVar2);
  uVar3 = (uint)pcVar4;
  bVar6 = uVar3 < *unaff_RDI;
  if (bVar6 || uVar3 == *unaff_RDI) {
    out(*unaff_RSI,param_2);
    *(undefined1 *)(unaff_RDI + 1) = unaff_RSI[1];
    pcVar4[0x79] = (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!bVar6 && uVar3 != *unaff_RDI) {
    cVar1 = bVar2 + 0x3f + bVar6;
    pcVar4 = (char *)CONCAT71(uVar5,cVar1);
    *pcVar4 = *pcVar4 + cVar1;
    *(char *)(param_1 + 0x71f408) = *(char *)(param_1 + 0x71f408) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)((longlong)unaff_RDI + -0x5b4849b7) =
       *(char *)((longlong)unaff_RDI + -0x5b4849b7) - (char)param_1;
  *pcVar4 = *pcVar4 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8df6 FUN_14d7a8df6 body=2 status=ok
// SIG undefined FUN_14d7a8df6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8df6(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8e0b FUN_14d7a8e0b body=13 status=ok
// SIG undefined FUN_14d7a8e0b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7a8dc5) */
/* WARNING: Removing unreachable block (ram,0x00014d7a8dc7) */
/* WARNING: Removing unreachable block (ram,0x00014d7a8dda) */

void FUN_14d7a8e0b(longlong param_1,undefined2 param_2)

{
  undefined1 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
  if (-1 < (char)((char)param_1 + 0x13U | 0xf7)) {
    *(char *)(param_1 + 0x71f408) = *(char *)(param_1 + 0x71f408) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8e1b FUN_14d7a8e1b body=10 status=ok
// SIG undefined FUN_14d7a8e1b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8e1b(longlong param_1)

{
  byte in_AL;
  
  if ((char)(in_AL | 0xa9) < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(param_1 + 0x71f408) = *(char *)(param_1 + 0x71f408) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8e23 FUN_14d7a8e23 body=13 status=ok
// SIG undefined FUN_14d7a8e23(void)

/* WARNING: Instruction at (ram,0x00014d7a8e31) overlaps instruction at (ram,0x00014d7a8e30)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a8e23(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  int in_EAX;
  uint uVar4;
  int iVar5;
  byte bVar7;
  longlong unaff_RBX;
  ulonglong uVar8;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined2 in_SS;
  byte in_CF;
  bool bVar9;
  bool in_SF;
  byte *pbVar6;
  
  *(undefined2 *)(unaff_RSI + 0xa857460) = in_SS;
  if (!in_SF) {
    (&stack0x00000000)[unaff_RSI * 2] =
         (&stack0x00000000)[unaff_RSI * 2] + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while( true ) {
    uVar4 = in_EAX + -0x4605328d + (uint)in_CF ^ 0x685259e0;
    uVar8 = (ulonglong)*(uint *)(unaff_RBP + -0x13d1035d);
    pbVar6 = (byte *)(unaff_RBX + unaff_RDI * 2);
    bVar2 = *pbVar6;
    bVar7 = (byte)((ulonglong)param_1 >> 8);
    *pbVar6 = *pbVar6 + bVar7;
    bVar3 = (char)uVar4 + -0x29 + CARRY1(bVar2,bVar7);
    uVar4 = CONCAT31((int3)(uVar4 >> 8),bVar3);
    pbVar6 = (byte *)(ulonglong)uVar4;
    bVar9 = uVar4 < _DAT_06848862;
    *(byte **)(uVar8 - 8) = pbVar6;
    bVar2 = *pbVar6;
    bVar7 = *pbVar6;
    *pbVar6 = (bVar7 - bVar3) - bVar9;
    if (*pbVar6 == 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (param_1 != 1) break;
    *(undefined8 *)(uVar8 - 0x10) = param_2;
    *(undefined8 *)(uVar8 - 0x18) = 0x63003c4e;
    unaff_RDI = 0x684886a;
    uRam0000000006848866 = uRam000000001bc6f154;
    iVar5 = (uVar4 - *(int *)pbVar6) - (uint)(bVar2 < bVar3 || (byte)(bVar7 - bVar3) < bVar9);
    bVar2 = (byte)iVar5;
    in_CF = bVar2 < 0x7b;
    in_EAX = CONCAT31((int3)((uint)iVar5 >> 8),bVar2 + 0x85);
    param_1 = 0;
    _DAT_c6f154be26ec2efc = uVar4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8e5b FUN_14d7a8e5b body=2 status=ok
// SIG undefined FUN_14d7a8e5b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8e5b(longlong param_1)

{
  char *pcVar1;
  byte unaff_BL;
  undefined7 unaff_00000019;
  byte *unaff_RBP;
  
  *unaff_RBP = *unaff_RBP & unaff_BL;
  if ((param_1 == 1 || *unaff_RBP != 0) && (*unaff_RBP == 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 0x239573a6);
  *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8e60 FUN_14d7a8e60 body=5 status=ok
// SIG undefined FUN_14d7a8e60(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8e60(longlong param_1)

{
  char *pcVar1;
  char unaff_BL;
  undefined7 unaff_00000019;
  bool in_ZF;
  
  if ((param_1 == 1 || in_ZF == false) && (in_ZF)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 0x239573a6);
  *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8e71 FUN_14d7a8e71 body=1 status=ok
// SIG undefined FUN_14d7a8e71(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a8ed5) overlaps instruction at (ram,0x00014d7a8ed3)
    */

void FUN_14d7a8e71(undefined8 param_1,longlong param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_RBX;
  undefined4 unaff_EBP;
  char unaff_SIL;
  int unaff_R12D;
  int *unaff_R14;
  
  uVar1 = CONCAT71((int7)(in_RAX >> 8),*(undefined1 *)(unaff_RBX + (in_RAX & 0xff)));
  if ((uVar1 & 0xa92e908e) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((int)uVar1 + *(int *)(param_2 + 0x760041f0) < 0) {
    LOCK();
    *(char *)(unaff_R14 + 0x1e) = (char)unaff_R14[0x1e] + unaff_SIL;
    UNLOCK();
  }
  *unaff_R14 = (*unaff_R14 - unaff_R12D) - (uint)((DAT_198c4500b92c7ba9 ^ 0x8f) < 0xe);
  FUN_14d7a8f68(param_1,unaff_EBP);
  return;
}



// FUNCTION 14d7a8e75 FUN_14d7a8e75 body=11 status=ok
// SIG undefined FUN_14d7a8e75(void)

undefined4 FUN_14d7a8e75(void)

{
  undefined4 unaff_EBX;
  
  return unaff_EBX;
}



// FUNCTION 14d7a8e8b FUN_14d7a8e8b body=32 status=ok
// SIG undefined FUN_14d7a8e8b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a8ed5) overlaps instruction at (ram,0x00014d7a8ed3)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a8e83) */
/* WARNING: Removing unreachable block (ram,0x00014d7a8e5c) */
/* WARNING: Removing unreachable block (ram,0x00014d7a8e86) */

void FUN_14d7a8e8b(undefined2 param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar3;
  undefined4 uVar2;
  undefined4 in_EAX;
  char unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  undefined4 unaff_EBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  int unaff_R12D;
  int *unaff_R14;
  bool in_ZF;
  
  if (!in_ZF) {
    out(0xe1,in_EAX);
    out(0xb1,in_EAX);
    out((short)param_2,(char)in_EAX);
    *unaff_RDI = *unaff_RSI;
    pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x239573a6);
    *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = in(0x6b);
  bVar3 = (byte)((uint)uVar2 >> 8);
  uRama92e908ea9d7d04f = (undefined1)uVar2;
  if (CARRY1(bVar3,unaff_BH) || (byte)(bVar3 + unaff_BH) == '\0') {
    if ((int)(CONCAT22((short)((uint)uVar2 >> 0x10),CONCAT11(bVar3 + unaff_BH,uRama92e908ea9d7d04f))
              + *(int *)(param_2 + 0x760041f0) + (uint)CARRY1(bVar3,unaff_BH)) < 0) {
      LOCK();
      *(char *)(unaff_R14 + 0x1e) = (char)unaff_R14[0x1e] + (char)unaff_RSI;
      UNLOCK();
    }
    *unaff_R14 = (*unaff_R14 - unaff_R12D) - (uint)((DAT_198c4500b92c7ba9 ^ 0x8f) < 0xe);
    FUN_14d7a8f68(param_1,unaff_EBP);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8ead FUN_14d7a8ead body=16 status=ok
// SIG undefined FUN_14d7a8ead(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a8e43) overlaps instruction at (ram,0x00014d7a8e3f)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14d7a8ead(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  byte bVar6;
  undefined1 uVar7;
  int iVar8;
  uint in_EAX;
  uint uVar9;
  byte *pbVar10;
  ulonglong uVar11;
  byte bVar12;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined8 *puVar13;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  bool bVar14;
  
  uVar9 = in_EAX | 0xa0b56a10;
  pbVar10 = (byte *)(ulonglong)uVar9;
  if ((POPCOUNT(uVar9 & 0xff) & 1U) == 0) {
    while( true ) {
      pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_RDI * 2);
      bVar2 = *pbVar1;
      bVar12 = (byte)((ulonglong)param_1 >> 8);
      *pbVar1 = *pbVar1 + bVar12;
      bVar6 = (char)pbVar10 + -0x29 + CARRY1(bVar2,bVar12);
      pbVar10 = (byte *)CONCAT71((int7)((ulonglong)pbVar10 >> 8),bVar6);
      uVar9 = (uint)pbVar10;
      bVar14 = uVar9 < _DAT_06848862;
      *(byte **)((longlong)register0x00000020 + -8) = pbVar10;
      bVar2 = *pbVar10;
      bVar12 = *pbVar10;
      *pbVar10 = (bVar12 - bVar6) - bVar14;
      if (*pbVar10 == 0) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return uVar11;
      }
      if (param_1 != 1) break;
      *(undefined8 *)((longlong)register0x00000020 + -0x10) = param_2;
      puVar13 = (undefined8 *)((longlong)register0x00000020 + -0x18);
      register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -0x18);
      *puVar13 = 0x63003c4e;
      unaff_RDI = 0x684886a;
      uRam0000000006848866 = uRam000000001bc6f154;
      iVar8 = (uVar9 - *(int *)pbVar10) - (uint)(bVar2 < bVar6 || (byte)(bVar12 - bVar6) < bVar14);
      pbVar10 = (byte *)(ulonglong)CONCAT31((int3)((uint)iVar8 >> 8),(char)iVar8 + -0x7b);
      param_1 = 0;
      _DAT_c6f154be26ec2efc = uVar9;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 != 0) {
    in((short)param_2);
    pcVar5 = (code *)swi(0x93);
    (*pcVar5)();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = *(uint *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x2ed45a00 +
                   unaff_RSI * 8);
  *pbVar10 = *pbVar10 ^ (byte)uVar9;
  uVar3 = *(undefined4 *)(ulonglong)uVar4;
  uVar7 = in(0xb6);
  if ((int)((uint)param_2 ^ *(uint *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x56))
      < 0) {
    *(char *)(unaff_RBP + 0x2b) = *(char *)(unaff_RBP + 0x2b) + unaff_BH;
    return (ulonglong)CONCAT31((int3)((uint)uVar3 >> 8),uVar7);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8ec1 FUN_14d7a8ec1 body=51 status=ok
// SIG undefined FUN_14d7a8ec1(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a8ec1(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  code *pcVar3;
  byte bVar4;
  uint uVar5;
  ulonglong in_RAX;
  longlong unaff_RBX;
  undefined8 *puVar7;
  undefined4 unaff_EBP;
  undefined4 *unaff_RSI;
  int unaff_R12D;
  int *unaff_R14;
  bool bVar8;
  bool in_CF;
  bool in_ZF;
  bool in_SF;
  char in_OF;
  byte bVar2;
  byte *pbVar6;
  
  if (in_CF) {
    while( true ) {
      bVar4 = (byte)in_RAX + 0x5c + ((byte)in_RAX < 0x7b);
      pbVar6 = (byte *)CONCAT71((int7)(in_RAX >> 8),bVar4);
      uVar5 = (uint)pbVar6;
      bVar8 = uVar5 < _DAT_06848862;
      *(byte **)((longlong)register0x00000020 + -8) = pbVar6;
      bVar1 = *pbVar6;
      bVar2 = *pbVar6;
      *pbVar6 = (bVar2 - bVar4) - bVar8;
      if (*pbVar6 == 0) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (param_1 != 1) break;
      *(undefined8 *)((longlong)register0x00000020 + -0x10) = param_2;
      puVar7 = (undefined8 *)((longlong)register0x00000020 + -0x18);
      register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -0x18);
      *puVar7 = 0x63003c4e;
      uRam0000000006848866 = *unaff_RSI;
      in_RAX = (ulonglong)
               ((uVar5 - *(int *)pbVar6) - (uint)(bVar1 < bVar4 || (byte)(bVar2 - bVar4) < bVar8));
      param_1 = 0;
      unaff_RSI = unaff_RSI + 1;
      _DAT_c6f154be26ec2efc = uVar5;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar5 = in((short)param_2);
  if ((bool)in_OF == in_SF) {
    if ((param_1 == 1 || in_ZF == false) && (in_ZF)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)(unaff_RBX + 0x239573a6) = *(char *)(unaff_RBX + 0x239573a6) + (char)unaff_RBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  LOCK();
  *(uint *)(ulonglong)uVar5 = uVar5;
  UNLOCK();
  if (!in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  LOCK();
  *(char *)(unaff_R14 + 0x1e) = (char)unaff_R14[0x1e] + (char)unaff_RSI;
  UNLOCK();
  *unaff_R14 = (*unaff_R14 - unaff_R12D) - (uint)((DAT_198c4500b92c7ba9 ^ 0x8f) < 0xe);
  FUN_14d7a8f68(param_1,unaff_EBP);
  return;
}



// FUNCTION 14d7a8efe FUN_14d7a8efe body=14 status=ok
// SIG undefined FUN_14d7a8efe(void)

void FUN_14d7a8efe(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  uint unaff_ESI;
  
  DAT_1b47acfd6 = (undefined1)((ulonglong)param_2 >> 8);
  *(uint *)(param_2 + 0x67) = *(uint *)(param_2 + 0x67) | unaff_ESI;
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7a8f0f FUN_14d7a8f0f body=3 status=ok
// SIG undefined FUN_14d7a8f0f(void)

void FUN_14d7a8f0f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7a8f22 FUN_14d7a8f22 body=4 status=ok
// SIG undefined FUN_14d7a8f22(void)

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_14d7a8f22(undefined8 param_1,uint param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  
  uVar1 = *unaff_RSI;
  uVar2 = in(0xb6);
  if ((int)(param_2 ^ *(uint *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x56)) < 0)
  {
    *(char *)(unaff_RBP + 0x2b) = *(char *)(unaff_RBP + 0x2b) + unaff_BH;
    return CONCAT31((int3)((uint)uVar1 >> 8),uVar2);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8f26 FUN_14d7a8f26 body=9 status=ok
// SIG undefined FUN_14d7a8f26(void)

/* WARNING: Control flow encountered bad instruction data */

undefined1 FUN_14d7a8f26(void)

{
  undefined1 uVar1;
  char unaff_BH;
  longlong unaff_RBP;
  bool in_SF;
  
  uVar1 = in(0xb6);
  if (in_SF) {
    *(char *)(unaff_RBP + 0x2b) = *(char *)(unaff_RBP + 0x2b) + unaff_BH;
    return uVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8f41 thunk_FUN_14d7a8f58 body=2 status=ok
// SIG undefined thunk_FUN_14d7a8f58(void)

void thunk_FUN_14d7a8f58(undefined8 param_1)

{
  longlong unaff_RBP;
  char in_CF;
  
  *(char *)(unaff_RBP + -0x5ed13a2f) =
       *(char *)(unaff_RBP + -0x5ed13a2f) + (char)((ulonglong)param_1 >> 8) + in_CF;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a8f49 FUN_14d7a8f49 body=1 status=ok
// SIG undefined FUN_14d7a8f49(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8f49(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8f4e FUN_14d7a8f4e body=9 status=ok
// SIG undefined FUN_14d7a8f4e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8f4e(void)

{
  uint *puVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined1 *in_RAX;
  bool in_PF;
  
  if (!in_PF) {
    LOCK();
    uVar2 = *in_RAX;
    *in_RAX = (char)in_RAX;
    UNLOCK();
    puVar1 = (uint *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar2) + 0x10);
    *puVar1 = ~*puVar1;
    pcVar3 = (code *)swi(0x5c);
    (*pcVar3)();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8f58 FUN_14d7a8f58 body=15 status=ok
// SIG undefined FUN_14d7a8f58(void)

void FUN_14d7a8f58(undefined8 param_1)

{
  longlong unaff_RBP;
  char in_CF;
  
  *(char *)(unaff_RBP + -0x5ed13a2f) =
       *(char *)(unaff_RBP + -0x5ed13a2f) + (char)((ulonglong)param_1 >> 8) + in_CF;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a8f68 FUN_14d7a8f68 body=3 status=ok
// SIG undefined FUN_14d7a8f68(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8f68(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x5c);
  (*pcVar1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8f73 FUN_14d7a8f73 body=2 status=ok
// SIG undefined FUN_14d7a8f73(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8f73(void)

{
  code *pcVar1;
  bool in_PF;
  
  if (!in_PF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7a8f7f FUN_14d7a8f7f body=14 status=ok
// SIG undefined FUN_14d7a8f7f(void)

/* WARNING: Instruction at (ram,0x00014d7a8f65) overlaps instruction at (ram,0x00014d7a8f64)
    */

void FUN_14d7a8f7f(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char in_ZF;
  longlong unaff_retaddr;
  
  uVar1 = func_0x0001aa075fd8();
  param_1 = param_1 + -1;
  if (param_1 == 0 || in_ZF == '\0') {
    *(char *)(unaff_RSI + 0x41) = *(char *)(unaff_RSI + 0x41) + (char)param_1;
    FUN_14d7a8f8d();
    return;
  }
  if (param_2 + (uint)uVar1 == 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(undefined8 *)(unaff_retaddr + -8) = uVar1;
  *(char *)(unaff_RBP + -0x5ed13a2f) =
       *(char *)(unaff_RBP + -0x5ed13a2f) + (char)((ulonglong)param_1 >> 8) +
       CARRY4(param_2,(uint)uVar1);
  *(longlong *)(unaff_retaddr + -0x10) = param_1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a8f8d FUN_14d7a8f8d body=6 status=ok
// SIG undefined FUN_14d7a8f8d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8f8d(undefined8 param_1)

{
  byte *pbVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  undefined7 uVar7;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  uVar7 = (undefined7)((ulonglong)param_1 >> 8);
  bVar6 = (byte)param_1 | *(byte *)(unaff_RBP + -0x2e794229);
  cRam000000013e0f620a = cRam000000013e0f620a - (char)uRam94c2d11843150079;
  pbVar1 = (byte *)(CONCAT71(uVar7,bVar6) + 0x23e5d388);
  bVar3 = *pbVar1;
  bVar5 = (byte)((uint)uRam94c2d11843150079 >> 8);
  *pbVar1 = *pbVar1 + bVar5;
  puVar2 = (uint *)(CONCAT71(uVar7,bVar6) + unaff_RSI * 4);
  uVar4 = *puVar2;
  *puVar2 = uVar4 << (bVar6 & 0x1f) |
            (uint)(CONCAT14(CARRY1(bVar3,bVar5),uVar4) >> 0x21 - (bVar6 & 0x1f));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8fb4 FUN_14d7a8fb4 body=11 status=ok
// SIG undefined FUN_14d7a8fb4(void)

/* WARNING: Instruction at (ram,0x00014d7a8fb7) overlaps instruction at (ram,0x00014d7a8fb4)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a8fc2) */

void FUN_14d7a8fb4(void)

{
  do {
    *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
  } while( true );
}



// FUNCTION 14d7a8fc1 FUN_14d7a8fc1 body=16 status=ok
// SIG undefined FUN_14d7a8fc1(void)

void FUN_14d7a8fc1(void)

{
  code *pcVar1;
  undefined1 *unaff_RSI;
  byte *unaff_RDI;
  undefined1 uStackX_10;
  
  pcVar1 = (code *)swi(0xe4);
  (*pcVar1)();
  *unaff_RDI = *unaff_RDI | uStackX_10;
  *unaff_RSI = 0;
  return;
}



// FUNCTION 14d7a8fdc FUN_14d7a8fdc body=10 status=ok
// SIG undefined FUN_14d7a8fdc(void)

void FUN_14d7a8fdc(byte param_1)

{
  byte *unaff_RSI;
  byte *unaff_RDI;
  byte unaff_retaddr;
  
  *unaff_RDI = *unaff_RDI | unaff_retaddr;
  *unaff_RSI = *unaff_RSI >> (param_1 & 0x1f);
  return;
}



// FUNCTION 14d7a8fff FUN_14d7a8fff body=9 status=ok
// SIG undefined FUN_14d7a8fff(void)

undefined4 FUN_14d7a8fff(undefined4 param_1)

{
  longlong unaff_RBP;
  undefined2 in_SS;
  
  *(undefined2 *)(unaff_RBP + 0x1c00bdb0) = in_SS;
  return param_1;
}



// FUNCTION 14d7a9008 FUN_14d7a9008 body=5 status=ok
// SIG undefined FUN_14d7a9008(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9008(void)

{
  char in_AL;
  longlong unaff_RDI;
  char in_CF;
  
  *(char *)(unaff_RDI + 0x6b) = (*(char *)(unaff_RDI + 0x6b) - in_AL) - in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a901f FUN_14d7a901f body=4 status=ok
// SIG undefined FUN_14d7a901f(void)

void FUN_14d7a901f(void)

{
  return;
}



// FUNCTION 14d7a902f FUN_14d7a902f body=8 status=ok
// SIG undefined FUN_14d7a902f(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a9031) overlaps instruction at (ram,0x00014d7a9030)
    */

void FUN_14d7a902f(short param_1,short param_2)

{
  undefined4 uVar1;
  uint in_EAX;
  char unaff_BH;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  char in_SF;
  char in_OF;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  if (in_OF == in_SF) {
    unaff_RSI = (undefined4 *)(ulonglong)in_EAX;
    param_2 = param_1 * 0x45d6;
  }
  out(*unaff_RSI,param_2);
  *(char *)(unaff_RDI + 1) = *(char *)(unaff_RDI + 1) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a903c FUN_14d7a903c body=5 status=ok
// SIG undefined FUN_14d7a903c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a903c(longlong param_1)

{
  char *pcVar1;
  char unaff_BL;
  undefined7 unaff_00000019;
  int unaff_EBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  bool in_PF;
  longlong unaff_retaddr;
  
  if (!in_PF) {
    *(int *)(param_1 + -0x48c5c5a0) = *(int *)(param_1 + -0x48c5c5a0) + unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(unaff_RDI + 0x6e + param_1);
  *pcVar1 = *pcVar1 + unaff_BL;
  *(ulonglong *)(unaff_retaddr + -8) = CONCAT71(unaff_00000019,unaff_BL);
  *(char *)(unaff_RSI + -3) = *(char *)(unaff_RSI + -3) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9040 FUN_14d7a9040 body=10 status=ok
// SIG undefined FUN_14d7a9040(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9040(longlong param_1)

{
  int unaff_EBP;
  
  *(int *)(param_1 + -0x48c5c5a0) = *(int *)(param_1 + -0x48c5c5a0) + unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a904c FUN_14d7a904c body=3 status=ok
// SIG undefined FUN_14d7a904c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a904c(undefined1 param_1)

{
  undefined1 in_AH;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = param_1;
  unaff_RDI[0x655725ad] = in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9054 thunk_EXT_FUN_8896c485 body=8 status=ok
// SIG undefined thunk_EXT_FUN_8896c485(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_8896c485(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a906a FUN_14d7a906a body=10 status=ok
// SIG undefined FUN_14d7a906a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a906a(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined4 *unaff_RBX;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  undefined4 unaff_EDI;
  
  if (param_1 != 0) {
    LOCK();
    *unaff_RBX = unaff_EDI;
    UNLOCK();
    puVar1 = (uint *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x12934aa4);
    *puVar1 = *puVar1 & unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  DAT_00000000 = DAT_00000000 + (char)((ulonglong)param_2 >> 8);
  return;
}



// FUNCTION 14d7a9077 FUN_14d7a9077 body=4 status=ok
// SIG undefined FUN_14d7a9077(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9077(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a907f FUN_14d7a907f body=4 status=ok
// SIG undefined FUN_14d7a907f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a907f(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a908c FUN_14d7a908c body=7 status=ok
// SIG undefined FUN_14d7a908c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a908c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9098 FUN_14d7a9098 body=11 status=ok
// SIG undefined FUN_14d7a9098(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9098(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  undefined1 in_R11B;
  float10 in_ST0;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  in(0x70);
  unaff_RDI[2] = in_R11B;
  *(int *)(unaff_RSI + 1) = (int)ROUND(in_ST0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a90a5 FUN_14d7a90a5 body=3 status=ok
// SIG undefined FUN_14d7a90a5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a90a5(void)

{
  int *unaff_RSI;
  float10 in_ST0;
  
  *unaff_RSI = (int)ROUND(in_ST0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a90a9 FUN_14d7a90a9 body=7 status=ok
// SIG undefined FUN_14d7a90a9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a90a9(void)

{
  longlong unaff_RBX;
  byte in_CF;
  
  *(int *)(unaff_RBX + -0x44cbe8f6) = (*(int *)(unaff_RBX + -0x44cbe8f6) + -0x54) - (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a90be FUN_14d7a90be body=3 status=ok
// SIG undefined FUN_14d7a90be(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a9138) overlaps instruction at (ram,0x00014d7a9137)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a90be(undefined8 param_1,char param_2)

{
  unkbyte10 Var1;
  char cVar2;
  int *in_RAX;
  char *pcVar4;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  undefined4 unaff_EBP;
  undefined4 unaff_0000002c;
  unkbyte10 *unaff_RDI;
  bool in_PF;
  unkbyte10 in_ST0;
  uint *unaff_retaddr;
  char cVar3;
  
  if (in_PF) {
    *in_RAX = *in_RAX + 0x5e;
    *(undefined1 *)((longlong)unaff_retaddr + -0x25) = 0;
    *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) >> 1
    ;
    cVar2 = *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
    cVar3 = *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
    Var1 = to_bcd(in_ST0);
    *unaff_RDI = Var1;
    if (-1 < cVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (unaff_retaddr != (uint *)&DAT_00000001 && cVar3 == '\0') {
      do {
      } while( true );
    }
  }
  else {
    *unaff_retaddr = *unaff_retaddr | (uint)unaff_RDI;
  }
  pcVar4 = (char *)(**(code **)(CONCAT44(unaff_0000002c,unaff_EBP) + 6))();
  *pcVar4 = *pcVar4 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a90c3 FUN_14d7a90c3 body=19 status=ok
// SIG undefined FUN_14d7a90c3(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a90c3(longlong param_1,char param_2)

{
  unkbyte10 Var1;
  char cVar2;
  char *pcVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  undefined4 unaff_EBP;
  undefined4 unaff_0000002c;
  unkbyte10 *unaff_RDI;
  unkbyte10 in_ST0;
  char cVar3;
  
  *(undefined1 *)(param_1 + -0x25) = 0;
  *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) = *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) >> 1;
  cVar2 = *(char *)CONCAT44(unaff_0000001c,unaff_EBX);
  cVar3 = *(char *)CONCAT44(unaff_0000001c,unaff_EBX);
  Var1 = to_bcd(in_ST0);
  *unaff_RDI = Var1;
  if (-1 < cVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 != 1 && cVar3 == '\0') {
    do {
    } while( true );
  }
  pcVar4 = (char *)(**(code **)(CONCAT44(unaff_0000002c,unaff_EBP) + 6))();
  *pcVar4 = *pcVar4 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a90d8 FUN_14d7a90d8 body=14 status=ok
// SIG undefined FUN_14d7a90d8(void)

/* WARNING: Instruction at (ram,0x00014d7a90dd) overlaps instruction at (ram,0x00014d7a90d8)
    */

void FUN_14d7a90d8(longlong param_1,byte param_2)

{
  do {
    *(byte *)(param_1 + 0x1183b5bf) = *(byte *)(param_1 + 0x1183b5bf) & param_2;
  } while( true );
}



// FUNCTION 14d7a90e8 FUN_14d7a90e8 body=19 status=ok
// SIG undefined FUN_14d7a90e8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a90e8(undefined8 param_1,undefined2 param_2)

{
  byte *pbVar1;
  int *piVar2;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  
  pbVar1 = (byte *)(CONCAT44(unaff_0000001c,unaff_EBX) + -0x52730f15);
  *pbVar1 = *pbVar1 >> 1 | *pbVar1 << 7;
  piVar2 = (int *)(CONCAT44(unaff_0000001c,unaff_EBX) + -0x53fa9322);
  *piVar2 = *piVar2 + unaff_EBX;
  in(0xc3);
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a910e FUN_14d7a910e body=70 status=ok
// SIG undefined FUN_14d7a910e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a910e(undefined8 param_1,char param_2)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  undefined4 in_EAX;
  char *pcVar4;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  undefined4 *unaff_RDI;
  bool bVar5;
  float10 in_ST0;
  
  bVar1 = *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  bVar5 = CARRY4(_DAT_153920bb8,unaff_EBP);
  _DAT_153920bb8 = _DAT_153920bb8 + unaff_EBP;
  _DAT_a3209d3400daddaf = in_EAX;
  *unaff_RDI = in_EAX;
  iVar2 = unaff_RDI[1];
  _DAT_f8c85760c8a3aed4 = in_EAX;
  *(longlong *)
   CONCAT62((int6)((ulonglong)param_1 >> 0x10),
            CONCAT11((char)((ulonglong)param_1 >> 8),(byte)param_1 ^ bVar1)) = (longlong)in_ST0;
  pcVar3 = *(code **)(CONCAT44(unaff_0000002c,unaff_EBP) + 6);
  *(undefined8 *)((ulonglong)(((int)&stack0x00000000 - iVar2) - (uint)bVar5) - 8) = 0x14d7a913c;
  pcVar4 = (char *)(*pcVar3)();
  *pcVar4 = *pcVar4 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9163 FUN_14d7a9163 body=7 status=ok
// SIG undefined FUN_14d7a9163(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a9144) overlaps instruction at (ram,0x00014d7a9143)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a9121) */
/* WARNING: Removing unreachable block (ram,0x00014d7a9130) */

void FUN_14d7a9163(uint *param_1,longlong param_2)

{
  char unaff_BL;
  uint unaff_EBP;
  bool in_CF;
  bool in_ZF;
  byte unaff_retaddr;
  
  if (in_CF || in_ZF) {
                    /* WARNING: Could not recover jumptable at 0x00014d7a91be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulonglong)*(uint *)(param_2 + 0x6a))();
    return;
  }
  *(char *)(param_2 + 0x38ca442a) = *(char *)(param_2 + 0x38ca442a) + unaff_BL;
  *param_1 = *param_1 & unaff_EBP;
  if ((char)(unaff_retaddr | 0x99) < '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a916c FUN_14d7a916c body=43 status=ok
// SIG undefined FUN_14d7a916c(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a9144) overlaps instruction at (ram,0x00014d7a9143)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a9121) */
/* WARNING: Removing unreachable block (ram,0x00014d7a9130) */

void FUN_14d7a916c(uint *param_1)

{
  byte in_AL;
  uint unaff_EBP;
  
  *param_1 = *param_1 & unaff_EBP;
  if ((char)(in_AL | 0x99) < '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a91c1 FUN_14d7a91c1 body=42 status=ok
// SIG undefined FUN_14d7a91c1(void)

ulonglong FUN_14d7a91c1(uint param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  char *unaff_retaddr;
  
  *unaff_retaddr = *unaff_retaddr + (char)param_1;
  uVar2 = CONCAT71((int7)((ulonglong)(unaff_RDI + 4) >> 8),DAT_6c00ec5ab22b4153);
  puVar1 = (uint *)((ulonglong)*(uint *)(unaff_RDI + 0x304ec804) - 0x47d7ac94);
  *puVar1 = *puVar1 & param_1;
  return uVar2 & 0xffffffff;
}



// FUNCTION 14d7a91f1 FUN_14d7a91f1 body=4 status=ok
// SIG undefined FUN_14d7a91f1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a91f1(undefined8 param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  
  out(param_2,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a91fe FUN_14d7a91fe body=12 status=ok
// SIG undefined FUN_14d7a91fe(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a91fe(void)

{
  int *piVar1;
  uint in_EAX;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  
  piVar1 = (int *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x1f);
  *piVar1 = *piVar1 + 1;
  if ((in_EAX & 0x100) != 0 || (in_EAX & 0x4000) != 0) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a920a FUN_14d7a920a body=6 status=ok
// SIG undefined FUN_14d7a920a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a920a(char param_1)

{
  longlong unaff_RBX;
  
  *(char *)(unaff_RBX + -0x240190e2) = *(char *)(unaff_RBX + -0x240190e2) - param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a921a FUN_14d7a921a body=1 status=ok
// SIG undefined FUN_14d7a921a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a921a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a921f FUN_14d7a921f body=9 status=ok
// SIG undefined FUN_14d7a921f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a921f(void)

{
  func_0x000124e03522();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9240 FUN_14d7a9240 body=3 status=ok
// SIG undefined FUN_14d7a9240(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9240(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined1 *unaff_RDI;
  bool in_CF;
  
  while (!in_CF) {
    uVar1 = in(param_2);
    *unaff_RDI = uVar1;
    param_2 = CONCAT11((char)((ushort)param_2 >> 8),0x51);
    unaff_RDI = unaff_RDI + 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9248 FUN_14d7a9248 body=2 status=ok
// SIG undefined FUN_14d7a9248(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9248(longlong param_1)

{
  undefined8 *unaff_RBP;
  undefined4 unaff_EDI;
  
  *(undefined4 *)(param_1 + 0x5e3c16bc) = unaff_EDI;
  *unaff_RBP = 0x14d7a9257;
  func_0x0001a4b546e2();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a924c FUN_14d7a924c body=11 status=ok
// SIG undefined FUN_14d7a924c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a924c(void)

{
  undefined8 *unaff_RBP;
  
  *unaff_RBP = 0x14d7a9257;
  func_0x0001a4b546e2(0x5e3c16bc);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9278 FUN_14d7a9278 body=28 status=ok
// SIG undefined FUN_14d7a9278(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9278(char *param_1,undefined8 param_2)

{
  char in_AL;
  longlong unaff_RBP;
  char *unaff_RDI;
  undefined2 in_FPUStatusWord;
  
  DAT_1088571ea = DAT_1088571ea - in_AL;
  *unaff_RDI = in_AL + 'm';
  LOCK();
  *param_1 = *param_1 + (char)((ulonglong)param_2 >> 8);
  UNLOCK();
  *(undefined2 *)(unaff_RBP + -0x6a5a6cc1) = in_FPUStatusWord;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a92a1 FUN_14d7a92a1 body=7 status=ok
// SIG undefined FUN_14d7a92a1(void)

undefined8 FUN_14d7a92a1(undefined8 param_1,ulonglong param_2)

{
  return CONCAT71((int7)((param_2 & 0xffffffff) >> 8),(char)(param_2 & 0xffffffff) + -0x39);
}



// FUNCTION 14d7a92b8 FUN_14d7a92b8 body=8 status=ok
// SIG undefined FUN_14d7a92b8(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a9279) overlaps instruction at (ram,0x00014d7a9273)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a9273) */
/* WARNING: Removing unreachable block (ram,0x00014d7a92c8) */
/* WARNING: Removing unreachable block (ram,0x00014d7a9293) */
/* WARNING: Removing unreachable block (ram,0x00014d7a92de) */
/* WARNING: Removing unreachable block (ram,0x00014d7a926a) */
/* WARNING: Removing unreachable block (ram,0x00014d7a92e5) */
/* WARNING: Removing unreachable block (ram,0x00014d7a92ef) */
/* WARNING: Removing unreachable block (ram,0x00014d7a9270) */
/* WARNING: Removing unreachable block (ram,0x00014d7a9284) */
/* WARNING: Removing unreachable block (ram,0x00014d7a9289) */

void FUN_14d7a92b8(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  longlong in_RAX;
  undefined1 unaff_XMM6 [16];
  
  pbVar1 = (byte *)(in_RAX + -0x40116b00);
  *pbVar1 = *pbVar1 ^ (byte)((ulonglong)param_2 >> 8);
  vcvtdq2ps_avx(unaff_XMM6);
  if ((POPCOUNT(*pbVar1) & 1U) != 0) {
    *(byte *)(param_2 + 0x69d8392c) = *(byte *)(param_2 + 0x69d8392c) | (byte)param_2;
    uRamaa008532428f9fc2 = (int)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a92ce FUN_14d7a92ce body=12 status=ok
// SIG undefined FUN_14d7a92ce(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a9293) overlaps instruction at (ram,0x00014d7a928e)
    */

void FUN_14d7a92ce(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar4;
  ulonglong uVar5;
  undefined8 in_RAX;
  char *pcVar6;
  int iVar7;
  char unaff_BL;
  undefined1 *puVar8;
  ulonglong unaff_RBP;
  ulonglong uVar9;
  uint *unaff_RSI;
  uint *unaff_RDI;
  longlong unaff_R13;
  byte in_AF;
  char in_SF;
  byte in_TF;
  byte in_IF;
  char in_OF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined2 in_FPUStatusWord;
  int iVar3;
  
  if (in_OF == in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  LOCK();
  puVar1 = (uint *)(param_1 + -0x3502493f + param_2 * 8);
  uVar2 = *puVar1;
  *puVar1 = (uint)in_RAX;
  uVar5 = CONCAT44((int)((ulonglong)in_RAX >> 0x20),uVar2);
  UNLOCK();
  puVar1 = unaff_RDI + 1;
  iVar7 = (int)param_2 + *(int *)(unaff_R13 + 0x1f) + (uint)(*unaff_RSI < *unaff_RDI);
  pcVar6 = (char *)(param_1 + -1);
  if (pcVar6 == (char *)0x0 || iVar7 != 0) {
    pcVar6 = (char *)CONCAT62((int6)((ulonglong)pcVar6 >> 0x10),
                              CONCAT11((char)((ulonglong)pcVar6 >> 8) + (char)(uVar2 >> 8),
                                       (char)pcVar6));
    if (unaff_BL < *(char *)(uVar5 + 0x50)) {
      out(0,(char)uVar2);
      return;
    }
    puVar8 = &stack0xfffffffffffffff8;
    uVar9 = 0xc5fa000;
    register0x00000020 = (BADSPACEBASE *)(ulonglong)((uint)puVar8 - *puVar1);
    if (*puVar1 <= (uint)puVar8) {
      *(int *)(uVar5 + 0x1daae9d0) = *(int *)(uVar5 + 0x1daae9d0) + -0xc5fa000;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    uVar5 = unaff_RBP & 0xffffffff;
    uVar9 = (ulonglong)uVar2;
  }
  iVar3 = (int)CONCAT71((int7)(uVar5 >> 8),uRam28df5582882ebf53);
  uVar2 = iVar3 + 0xbb0adf6c;
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0x73334aaa;
  uVar4 = iVar3 + 0x64b2efd9;
  *(char *)puVar1 = (char)uVar4;
  *(ulonglong *)((longlong)register0x00000020 + -0x10) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW4(uVar2,0x5657ef93) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)((int)uVar4 < 0) * 0x80 | (ulonglong)(uVar4 == 0) * 0x40 |
       (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar4 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(uVar2 < 0x5657ef93) | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  LOCK();
  *pcVar6 = *pcVar6 + (char)((uint)iVar7 >> 8);
  UNLOCK();
  *(undefined2 *)(uVar9 - 0x6a5a6cc1) = in_FPUStatusWord;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a92df FUN_14d7a92df body=7 status=ok
// SIG undefined FUN_14d7a92df(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a92df(char *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar3;
  ulonglong uVar4;
  uint *unaff_RDI;
  byte in_AF;
  bool in_ZF;
  char in_SF;
  byte in_TF;
  byte in_IF;
  char in_OF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined2 in_FPUStatusWord;
  longlong unaff_retaddr;
  int iVar2;
  
  in(0x38);
  if (!in_ZF && in_OF == in_SF) {
    out(0,(char)unaff_retaddr);
    return;
  }
  uVar4 = (ulonglong)((uint)&stack0xfffffffffffffff8 - *unaff_RDI);
  if (*unaff_RDI <= (uint)&stack0xfffffffffffffff8) {
    *(int *)(unaff_retaddr + 0x1daae9d0) = *(int *)(unaff_retaddr + 0x1daae9d0) + -0xc5fa000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar2 = (int)CONCAT71((int7)((ulonglong)unaff_retaddr >> 8),uRam28df5582882ebf53);
  uVar1 = iVar2 + 0xbb0adf6c;
  *(undefined8 *)(uVar4 - 8) = 0x73334aaa;
  uVar3 = iVar2 + 0x64b2efd9;
  *(char *)unaff_RDI = (char)uVar3;
  *(ulonglong *)(uVar4 - 0x10) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW4(uVar1,0x5657ef93) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)((int)uVar3 < 0) * 0x80 | (ulonglong)(uVar3 == 0) * 0x40 |
       (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar3 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(uVar1 < 0x5657ef93) | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  LOCK();
  *param_1 = *param_1 + (char)((ulonglong)param_2 >> 8);
  UNLOCK();
  uRamffffffffa205333f = in_FPUStatusWord;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a92e8 FUN_14d7a92e8 body=11 status=ok
// SIG undefined FUN_14d7a92e8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a92e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a92f4 FUN_14d7a92f4 body=6 status=ok
// SIG undefined FUN_14d7a92f4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a92f4(void)

{
  undefined1 in_AL;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a930b FUN_14d7a930b body=35 status=ok
// SIG undefined FUN_14d7a930b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a930b(uint param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int unaff_EBX;
  longlong unaff_RSI;
  byte in_CF;
  bool bVar6;
  undefined8 unaff_retaddr;
  
  bVar3 = (byte)unaff_retaddr + 0xa9;
  bVar6 = (byte)unaff_retaddr < 0x57 || bVar3 < in_CF;
  bVar3 = bVar3 - in_CF;
  bVar1 = bVar3 + 0x7b;
  uVar2 = (uint)(0x84 < bVar3 || CARRY1(bVar1,bVar6));
  iVar5 = (param_1 - param_2) - uVar2;
  uVar4 = (uint)CONCAT71((int7)((ulonglong)unaff_retaddr >> 8),bVar1 + bVar6);
  if (CONCAT22((short)((uint)iVar5 >> 0x10),CONCAT11(0x10,(char)iVar5)) != 1 &&
      unaff_EBX - *(int *)(unaff_RSI + 0x731ba292) ==
      (uint)(0x60c2738 < uVar4 ||
            CARRY4(uVar4 + 0xf9f3d8c7,(uint)(param_1 < param_2 || param_1 - param_2 < uVar2)))) {
    *(int *)(unaff_RSI + 0x43a7cafd) = *(int *)(unaff_RSI + 0x43a7cafd) << 0x13;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9339 FUN_14d7a9339 body=14 status=ok
// SIG undefined FUN_14d7a9339(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9339(undefined8 param_1,undefined2 param_2)

{
  undefined4 *unaff_RSI;
  undefined1 *unaff_RDI;
  bool in_OF;
  
  if (!in_OF) {
    out(*unaff_RSI,param_2);
    *unaff_RDI = *(undefined1 *)(unaff_RSI + -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9349 FUN_14d7a9349 body=5 status=ok
// SIG undefined FUN_14d7a9349(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9349(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9355 FUN_14d7a9355 body=2 status=ok
// SIG undefined FUN_14d7a9355(void)

void FUN_14d7a9355(void)

{
  return;
}



// FUNCTION 14d7a9359 FUN_14d7a9359 body=14 status=ok
// SIG undefined FUN_14d7a9359(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9359(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a936d FUN_14d7a936d body=7 status=ok
// SIG undefined FUN_14d7a936d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a936d(void)

{
  char cVar1;
  uint uVar2;
  uint *in_RAX;
  undefined8 *puVar4;
  undefined8 *unaff_RBP;
  undefined8 uStack_28;
  byte *pbVar3;
  
  uVar2 = (uint)in_RAX | *in_RAX;
  pbVar3 = (byte *)(ulonglong)uVar2;
  out(0xb3,(char)uVar2);
  *pbVar3 = *pbVar3 << 5 | *pbVar3 >> 3;
  puVar4 = (undefined8 *)&stack0xffffffffffffffe0;
  cVar1 = '\x03';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar4 = puVar4 + -1;
    *puVar4 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  _DAT_13ad03546 = _DAT_13ad03546 - (uVar2 + 0x35af142a);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a937a FUN_14d7a937a body=7 status=ok
// SIG undefined FUN_14d7a937a(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a937a(void)

{
  char cVar1;
  byte *in_RAX;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  longlong unaff_retaddr;
  
  out(0xb3,(char)in_RAX);
  *in_RAX = *in_RAX << 5 | *in_RAX >> 3;
  puVar2 = (undefined8 *)(unaff_retaddr + -8);
  *(undefined8 **)(unaff_retaddr + -8) = unaff_RBP;
  cVar1 = '\x03';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  *(longlong *)(unaff_retaddr + -0x28) = unaff_retaddr + -8;
  *(longlong *)(unaff_retaddr + -0xb2bf) = unaff_retaddr + -0xb2b7;
  _DAT_13ad03546 = _DAT_13ad03546 - ((int)in_RAX + 0x35af142a);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9383 FUN_14d7a9383 body=19 status=ok
// SIG undefined FUN_14d7a9383(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a9383(void)

{
  char cVar1;
  int in_EAX;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  undefined8 uStack_18;
  
  puVar2 = (undefined8 *)&stack0xfffffffffffffff0;
  cVar1 = '\x03';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  _DAT_13ad03546 = _DAT_13ad03546 - (in_EAX + 0x35af142a);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a939b FUN_14d7a939b body=10 status=ok
// SIG undefined FUN_14d7a939b(void)

void FUN_14d7a939b(void)

{
  longlong in_RAX;
  
  *(char *)(in_RAX + -2) = *(char *)(in_RAX + -2) + '\x01';
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a93a7 FUN_14d7a93a7 body=15 status=ok
// SIG undefined FUN_14d7a93a7(void)

void FUN_14d7a93a7(void)

{
  longlong in_RAX;
  
  *(char *)(in_RAX + -2) = *(char *)(in_RAX + -2) + '\x01';
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a93b8 FUN_14d7a93b8 body=10 status=ok
// SIG undefined FUN_14d7a93b8(void)

void FUN_14d7a93b8(void)

{
  undefined1 in_AL;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = in_AL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a93ca FUN_14d7a93ca body=10 status=ok
// SIG undefined FUN_14d7a93ca(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a93ca(void)

{
  char in_AL;
  char *unaff_RDI;
  
  if (SBORROW1(in_AL,*unaff_RDI)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a93d7 FUN_14d7a93d7 body=3 status=ok
// SIG undefined FUN_14d7a93d7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a93d7(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a93db FUN_14d7a93db body=5 status=ok
// SIG undefined FUN_14d7a93db(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a93db(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a93e4 FUN_14d7a93e4 body=2 status=ok
// SIG undefined FUN_14d7a93e4(void)

void FUN_14d7a93e4(byte param_1,int *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  undefined4 in_EAX;
  byte unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  byte *unaff_RSI;
  longlong unaff_RDI;
  longlong lStackX_8;
  char acStack_17 [23];
  
  bVar5 = (char)in_EAX + 0xbc;
  acStack_17[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 4] =
       acStack_17[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 4] << (param_1 & 0x1f);
  param_1 = param_1 & 0x1f;
  bVar2 = *unaff_RSI;
  *unaff_RSI = *unaff_RSI >> param_1;
  pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH | unaff_BL,unaff_BL)) + -0x6067a73c);
  bVar3 = *pbVar1;
  *pbVar1 = (byte)(CONCAT11(param_1 != 0 && (bVar2 >> param_1 - 1 & 1) != 0,bVar3) >> 2) |
            bVar3 << 7;
  cVar4 = *(char *)(lStackX_8 + -0x55);
  pbVar1 = (byte *)(unaff_RDI + -0x3e17be4e);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar5;
  out((short)param_2,
      CONCAT22((short)((uint)in_EAX >> 0x10),CONCAT11((char)((uint)in_EAX >> 8) + cVar4,bVar5)));
  *param_2 = *param_2 - (uint)CARRY1(bVar2,bVar5);
  return;
}



// FUNCTION 14d7a93e8 FUN_14d7a93e8 body=6 status=ok
// SIG undefined FUN_14d7a93e8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a93e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9401 FUN_14d7a9401 body=9 status=ok
// SIG undefined FUN_14d7a9401(void)

void FUN_14d7a9401(undefined8 param_1,int *param_2)

{
  undefined4 unaff_ESI;
  byte in_CF;
  
  LOCK();
  *(undefined4 *)((longlong)param_2 + -0x103e17bf) = unaff_ESI;
  UNLOCK();
  *param_2 = *param_2 - (uint)in_CF;
  return;
}



// FUNCTION 14d7a940e FUN_14d7a940e body=9 status=ok
// SIG undefined FUN_14d7a940e(void)

void FUN_14d7a940e(undefined8 param_1,undefined2 param_2)

{
  undefined1 in_AL;
  
  out(param_2,in_AL);
  return;
}



// FUNCTION 14d7a9420 FUN_14d7a9420 body=26 status=ok
// SIG undefined FUN_14d7a9420(void)

/* WARNING: Instruction at (ram,0x00014d7a9424) overlaps instruction at (ram,0x00014d7a9422)
    */
/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9420(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  ulonglong in_RAX;
  char cVar6;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  bool bVar7;
  uint uVar3;
  ulonglong uVar4;
  uint *puVar5;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  while( true ) {
    uVar1 = in(0xa8);
    uVar4 = CONCAT71((int7)(in_RAX >> 8),uVar1);
    uVar3 = (uint)uVar4;
    uVar2 = uVar3 & 0x607500d9;
    puVar5 = (uint *)(ulonglong)uVar2;
    bVar7 = (uVar4 & 0x607500d9) != 0;
    param_1 = param_1 + -1;
    if (param_1 != 0 && bVar7) break;
    in_RAX = unaff_RDI & 0xffffffff;
    unaff_RDI = (ulonglong)uVar2;
    if (!bVar7) {
      *(char *)(in_RAX - 0x862d799) = *(char *)(in_RAX - 0x862d799) - cVar6;
      return;
    }
    *(char *)(unaff_RBP + 0x60) = *(char *)(unaff_RBP + 0x60) + cVar6;
  }
  if ((POPCOUNT(uVar3 & 0xd9) & 1U) != 0) {
    *puVar5 = *puVar5 ^ uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar5 = *puVar5 + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9435 FUN_14d7a9435 body=41 status=ok
// SIG undefined FUN_14d7a9435(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9435(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  int in_EAX;
  char cVar4;
  char cVar5;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_R14;
  
  cVar4 = (char)((ulonglong)param_1 >> 8);
  pbVar2 = (byte *)(unaff_RSI + 0x66 + unaff_R14 * 2);
  bVar3 = *pbVar2;
  *pbVar2 = *pbVar2 + (byte)param_2;
  cVar5 = cVar4 + (char)param_1;
  if (cVar5 == '\0' || SCARRY1(cVar4,(char)param_1) != cVar5 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)((ulonglong)
                    ((in_EAX - *(int *)(unaff_RBP + 0xc)) - (uint)CARRY1(bVar3,(byte)param_2)) -
                   0x862d799);
  *pcVar1 = *pcVar1 - (char)((ulonglong)param_2 >> 8);
  return;
}



// FUNCTION 14d7a9458 FUN_14d7a9458 body=10 status=ok
// SIG undefined FUN_14d7a9458(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9458(void)

{
  bool in_OF;
  
  if (in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9479 FUN_14d7a9479 body=5 status=ok
// SIG undefined FUN_14d7a9479(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9479(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9483 FUN_14d7a9483 body=4 status=ok
// SIG undefined FUN_14d7a9483(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9483(undefined8 param_1,longlong param_2)

{
  longlong unaff_RDI;
  float10 in_ST0;
  
  *(short *)(param_2 + 0x45 + unaff_RDI * 4) = (short)ROUND(in_ST0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a94ab FUN_14d7a94ab body=2 status=ok
// SIG undefined FUN_14d7a94ab(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a94ab(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a94b4 FUN_14d7a94b4 body=10 status=ok
// SIG undefined FUN_14d7a94b4(void)

undefined4 FUN_14d7a94b4(void)

{
  undefined4 uVar1;
  longlong unaff_RBX;
  
  uVar1 = in(0x47);
  *(char *)(unaff_RBX + -8) = *(char *)(unaff_RBX + -8) + 'S';
  return uVar1;
}



// FUNCTION 14d7a94c1 FUN_14d7a94c1 body=42 status=ok
// SIG undefined FUN_14d7a94c1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a94c1(longlong param_1)

{
  uint in_EAX;
  char *pcVar1;
  undefined4 unaff_EBP;
  undefined4 unaff_0000002c;
  ulonglong unaff_RDI;
  byte *pbVar2;
  bool in_ZF;
  bool in_SF;
  char in_OF;
  
  pcVar1 = (char *)(unaff_RDI & 0xffffffff);
  pbVar2 = (byte *)(ulonglong)in_EAX;
  if (!in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_ZF && (bool)in_OF == in_SF) {
    *pcVar1 = *pcVar1 + (byte)pcVar1;
    pbVar2[-0x192ab80] = pbVar2[-0x192ab80] + (char)((ulonglong)pcVar1 >> 8);
    *pbVar2 = *pbVar2 & (byte)pcVar1;
    in(0xdb);
    *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & (byte)param_1;
    pcVar1 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + -0x700772d5);
    *pcVar1 = *pcVar1 + (byte)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a94e1 FUN_14d7a94e1 body=10 status=ok
// SIG undefined FUN_14d7a94e1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a94e1(undefined8 param_1,undefined2 param_2)

{
  uint in_EAX;
  uint uVar1;
  char cVar2;
  ulonglong uVar3;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  undefined4 *unaff_RDI;
  undefined8 unaff_R15;
  undefined1 auStack_8 [8];
  
  uVar1 = in_EAX | 0xb1db6f5;
  if (uVar1 != 0) {
    cVar2 = (char)((ushort)param_2 >> 8);
    uVar3 = (ulonglong)((int)auStack_8 + uVar1);
    *(undefined8 *)(uVar3 - 8) = 0x41f34a66;
    out(CONCAT11(cVar2,(char)param_2 + cVar2),uVar1);
    *(ulonglong *)(uVar3 - 0x10) = CONCAT44(unaff_00000034,unaff_ESI);
    *(undefined8 *)(uVar3 - 0x18) = unaff_R15;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a94e9 FUN_14d7a94e9 body=10 status=ok
// SIG undefined FUN_14d7a94e9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a94e9(undefined8 param_1,undefined2 param_2)

{
  int in_EAX;
  char cVar1;
  ulonglong uVar2;
  undefined8 unaff_RSI;
  undefined8 unaff_R15;
  char in_CF;
  
  cVar1 = (char)((ushort)param_2 >> 8);
  uVar2 = (ulonglong)(uint)((int)&stack0x00000000 + in_EAX);
  *(undefined8 *)(uVar2 - 8) = 0x41f34a66;
  out(CONCAT11(cVar1,(char)param_2 + cVar1 + in_CF),in_EAX);
  *(undefined8 *)(uVar2 - 0x10) = unaff_RSI;
  *(undefined8 *)(uVar2 - 0x18) = unaff_R15;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a94f6 FUN_14d7a94f6 body=2 status=ok
// SIG undefined FUN_14d7a94f6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a94f6(byte param_1)

{
  byte *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI >> (param_1 & 7) | *unaff_RDI << 8 - (param_1 & 7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a950e FUN_14d7a950e body=53 status=ok
// SIG undefined FUN_14d7a950e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7a94ef) */

void FUN_14d7a950e(undefined8 param_1,char *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  undefined8 in_RAX;
  char unaff_BL;
  char unaff_BPL;
  longlong unaff_RSI;
  uint *unaff_RDI;
  byte *in_R10;
  byte unaff_R15B;
  char in_CF;
  
  cVar3 = *param_2;
  out((short)param_2,(char)in_RAX);
  bVar2 = *in_R10;
  *in_R10 = *in_R10 + unaff_R15B;
  cVar4 = in((short)param_2);
                    /* WARNING: Read-only address (ram,0x00014d9c48b8) is written */
  cRam000000014d9c48b8 = (char)param_2 + 'H';
  *(char *)(unaff_RSI + 0x3bf940eb +
           CONCAT71((int7)((ulonglong)param_1 >> 8),(char)param_1 + cVar3 + in_CF) * 2) =
       unaff_BL - unaff_BPL;
  pbVar1 = (byte *)(CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),(short)(char)in_RAX)
                                   >> 8),cVar4) + 0x63956d96);
  *pbVar1 = *pbVar1 >> 1 | *pbVar1 << 7;
  uVar5 = in(0);
  out(CONCAT11(((char)((ulonglong)param_2 >> 8) - cVar4) - CARRY1(bVar2,unaff_R15B),(char)param_2),
      (char)(uVar5 & 0xffffff57));
  *(char *)((longlong)unaff_RDI + 0xb) = *(char *)((longlong)unaff_RDI + 0xb) << 6;
  *unaff_RDI = uVar5 & 0xffffff57;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a954f FUN_14d7a954f body=13 status=ok
// SIG undefined FUN_14d7a954f(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a954f(void)

{
  int unaff_EBP;
  
  _DAT_15b1315ed = _DAT_15b1315ed + unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9563 FUN_14d7a9563 body=9 status=ok
// SIG undefined FUN_14d7a9563(void)

void FUN_14d7a9563(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a9584 FUN_14d7a9584 body=10 status=ok
// SIG undefined FUN_14d7a9584(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9584(undefined8 param_1,char *param_2)

{
  undefined1 in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  int unaff_EBX;
  int *unaff_RSI;
  
  param_2[-0x43] = param_2[-0x43] & 0x73;
  *unaff_RSI = *unaff_RSI + unaff_EBX;
  *(undefined1 *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x46374f8e) = 0xf6;
  *param_2 = *param_2 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9590 FUN_14d7a9590 body=15 status=ok
// SIG undefined FUN_14d7a9590(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9590(undefined8 param_1,char *param_2)

{
  byte in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RBX;
  
  *(undefined1 *)
   (CONCAT62(in_register_00000002,CONCAT11(in_AH,*(undefined1 *)(unaff_RBX + (ulonglong)in_AL))) +
   -0x46374f8e) = 0xf6;
  *param_2 = *param_2 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a95a2 FUN_14d7a95a2 body=8 status=ok
// SIG undefined FUN_14d7a95a2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a95a2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a95af FUN_14d7a95af body=4 status=ok
// SIG undefined FUN_14d7a95af(void)

void FUN_14d7a95af(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a95b8 FUN_14d7a95b8 body=3 status=ok
// SIG undefined FUN_14d7a95b8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a95b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a95bd FUN_14d7a95bd body=3 status=ok
// SIG undefined FUN_14d7a95bd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a95bd(longlong param_1,longlong param_2)

{
  undefined4 in_EAX;
  char in_ZF;
  
  out((short)param_2,in_EAX);
  if (param_1 == 1 || in_ZF == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)(param_2 + -0x50) = *(byte *)(param_2 + -0x50) ^ 200;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a95ca FUN_14d7a95ca body=7 status=ok
// SIG undefined FUN_14d7a95ca(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a958d) overlaps instruction at (ram,0x00014d7a958c)
    */

void FUN_14d7a95ca(undefined8 param_1,char *param_2,undefined8 param_3,ulonglong *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  ulonglong in_RAX;
  undefined8 *puVar6;
  int *unaff_RSI;
  undefined4 *unaff_RDI;
  byte in_CF;
  bool in_ZF;
  bool in_SF;
  
  if (!in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_SF) {
    while( true ) {
      uVar5 = (int)in_RAX + 0x62809b61 + (uint)in_CF;
      in_RAX = (ulonglong)uVar5;
      if ((int)uVar5 < 0) {
        *(undefined1 *)(in_RAX - 0x46374f8e) = 0xf6;
        *param_2 = *param_2 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pcVar2 = (char *)((longlong)unaff_RDI + 1);
      uVar3 = in((short)param_2);
      *(undefined1 *)unaff_RDI = uVar3;
      unaff_RDI = (undefined4 *)((longlong)unaff_RDI + 2);
      bVar4 = (byte)uVar5;
      if ((char)(bVar4 - *pcVar2) < '\0') break;
      *param_4 = *param_4 & (ulonglong)register0x00000020;
      puVar6 = (undefined8 *)((longlong)register0x00000020 + -8);
      register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
      *puVar6 = unaff_RSI;
      pbVar1 = (byte *)(param_2 + -0x28);
      in_CF = CARRY1(*pbVar1,bVar4);
      *pbVar1 = *pbVar1 + bVar4;
    }
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uRam88a9400f248ff6c5 = (undefined4)in_RAX;
  *unaff_RDI = uRam88a9400f248ff6c5;
  *unaff_RSI = *unaff_RSI << ((byte)param_1 & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a95d2 FUN_14d7a95d2 body=6 status=ok
// SIG undefined FUN_14d7a95d2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a95d2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a95da FUN_14d7a95da body=7 status=ok
// SIG undefined FUN_14d7a95da(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a95da(byte param_1)

{
  int *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI << (param_1 & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a95e6 FUN_14d7a95e6 body=7 status=ok
// SIG undefined FUN_14d7a95e6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a95e6(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a95fb FUN_14d7a95fb body=26 status=ok
// SIG undefined FUN_14d7a95fb(void)

int FUN_14d7a95fb(undefined8 param_1,longlong param_2)

{
  int unaff_EBX;
  uint unaff_EBP;
  longlong unaff_RSI;
  
  *(uint *)(param_2 + -0x2791dec8) = *(uint *)(param_2 + -0x2791dec8) & unaff_EBP;
  *(char *)(unaff_RSI + -0x160535f0) =
       *(char *)(unaff_RSI + -0x160535f0) + (char)((ulonglong)param_2 >> 8);
  return unaff_EBX + -0x63db9ba;
}



// FUNCTION 14d7a9619 FUN_14d7a9619 body=3 status=ok
// SIG undefined FUN_14d7a9619(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9619(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a961e FUN_14d7a961e body=1 status=ok
// SIG undefined FUN_14d7a961e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a961e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a962c FUN_14d7a962c body=2 status=ok
// SIG undefined FUN_14d7a962c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a962c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9645 FUN_14d7a9645 body=3 status=ok
// SIG undefined FUN_14d7a9645(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9645(void)

{
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (in_ZF || in_OF != in_SF) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9649 FUN_14d7a9649 body=1 status=ok
// SIG undefined FUN_14d7a9649(void)

void FUN_14d7a9649(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7a964d FUN_14d7a964d body=4 status=ok
// SIG undefined FUN_14d7a964d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a964d(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9664 FUN_14d7a9664 body=6 status=ok
// SIG undefined FUN_14d7a9664(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a9664(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a966c FUN_14d7a966c body=2 status=ok
// SIG undefined FUN_14d7a966c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a966c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9674 FUN_14d7a9674 body=2 status=ok
// SIG undefined FUN_14d7a9674(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9674(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9689 FUN_14d7a9689 body=3 status=ok
// SIG undefined FUN_14d7a9689(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7a970e) */
/* WARNING: Removing unreachable block (ram,0x00014d7a9718) */

void FUN_14d7a9689(longlong param_1,undefined4 *param_2)

{
  byte *pbVar1;
  uint in_EAX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  char *unaff_RDI;
  
  TaskRegister(*(undefined2 *)((ulonglong)in_EAX - 0x4f));
  pbVar1 = (byte *)(param_1 + -0x74275b00);
  *pbVar1 = *pbVar1 ^ (byte)((uint)unaff_EBP >> 8);
  if (-1 < (char)*pbVar1) {
    *(uint *)CONCAT44(unaff_00000034,unaff_ESI) =
         *(uint *)CONCAT44(unaff_00000034,unaff_ESI) | 0xf94a0000;
    LOCK();
    *param_2 = unaff_ESI;
    UNLOCK();
    *unaff_RDI = *unaff_RDI - (char)param_2;
    return;
  }
  if (param_1 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a969c FUN_14d7a969c body=13 status=ok
// SIG undefined FUN_14d7a969c(void)

void FUN_14d7a969c(undefined8 param_1,undefined4 *param_2)

{
  undefined4 unaff_ESI;
  char *unaff_RDI;
  
  LOCK();
  *param_2 = unaff_ESI;
  UNLOCK();
  *unaff_RDI = *unaff_RDI - (char)param_2;
  return;
}



// FUNCTION 14d7a96b8 FUN_14d7a96b8 body=1 status=ok
// SIG undefined FUN_14d7a96b8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a96b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a96c0 FUN_14d7a96c0 body=5 status=ok
// SIG undefined FUN_14d7a96c0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a96c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a96da FUN_14d7a96da body=10 status=ok
// SIG undefined FUN_14d7a96da(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a96da(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a96ea FUN_14d7a96ea body=25 status=ok
// SIG undefined FUN_14d7a96ea(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a96ea(longlong param_1,uint *param_2)

{
  undefined1 *puVar1;
  unkbyte10 Var2;
  char in_AL;
  byte bVar3;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BH;
  longlong unaff_RBP;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  int *unaff_RDI;
  unkbyte10 in_ST0;
  
  bVar3 = in_AL + 0x52;
  *unaff_RDI = *unaff_RDI - (int)param_2;
  if ((POPCOUNT(bVar3 & 0x75) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) &
           0xffffffffffffff75) =
       *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3)))
                & 0xffffffffffffff75) + (bVar3 & 0x75);
  if (param_1 != 0) {
    if ((CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3)) & 0xffffff75) < 0x50b0d96d ||
        (CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3)) & 0xffffff75) == 0x50b0d96d) {
      *param_2 = *param_2 ^ 0xffffffae;
      *(char *)(unaff_RBP + 0x3cd98d45) = *(char *)(unaff_RBP + 0x3cd98d45) - (char)param_1;
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    LOCK();
    *param_2 = unaff_ESI;
    UNLOCK();
    *(char *)unaff_RDI = (char)*unaff_RDI - (char)param_2;
    return;
  }
  puVar1 = (undefined1 *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x1dfc44);
  *puVar1 = *puVar1;
  if ((CONCAT44(in_register_00000004,
                CONCAT22(in_register_00000002,
                         CONCAT11(in_AH + (char)((ulonglong)param_2 >> 8),bVar3))) &
      0xffffffffffffff75) == 0x6b0e0735) {
    Var2 = to_bcd(in_ST0);
    *(unkbyte10 *)(unaff_RBP + 0x68) = Var2;
    DAT_ffffffffffffff91 = DAT_ffffffffffffff91 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9709 FUN_14d7a9709 body=16 status=ok
// SIG undefined FUN_14d7a9709(void)

void FUN_14d7a9709(char param_1)

{
  longlong unaff_RBP;
  
  *(char *)(unaff_RBP + 0x3cd98d45) = *(char *)(unaff_RBP + 0x3cd98d45) - param_1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a9719 FUN_14d7a9719 body=6 status=ok
// SIG undefined FUN_14d7a9719(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9719(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9744 FUN_14d7a9744 body=20 status=ok
// SIG undefined FUN_14d7a9744(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9744(longlong param_1)

{
  unkbyte10 Var1;
  int in_EAX;
  char unaff_BH;
  byte *unaff_RDI;
  unkbyte10 in_ST0;
  
  Var1 = to_bcd(in_ST0);
  *(unkbyte10 *)
   ((ulonglong)((in_EAX + -0x3d4ffb00) - (uint)((byte)in_EAX < *unaff_RDI) ^ 0xe06b0e07) + 0x68) =
       Var1;
  *(char *)(param_1 + -0x6e) = *(char *)(param_1 + -0x6e) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9761 FUN_14d7a9761 body=3 status=ok
// SIG undefined FUN_14d7a9761(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9761(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9769 FUN_14d7a9769 body=3 status=ok
// SIG undefined FUN_14d7a9769(void)

undefined8 FUN_14d7a9769(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14d7a976e FUN_14d7a976e body=14 status=ok
// SIG undefined FUN_14d7a976e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a976e(void)

{
  code *pcVar1;
  longlong *unaff_RSI;
  float10 in_ST0;
  
  *unaff_RSI = (longlong)ROUND(in_ST0);
  pcVar1 = (code *)swi(0xe6);
  (*pcVar1)();
  pcVar1 = (code *)swi(0);
  (*pcVar1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9785 FUN_14d7a9785 body=44 status=ok
// SIG undefined FUN_14d7a9785(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a978f) overlaps instruction at (ram,0x00014d7a978a)
    */

void FUN_14d7a9785(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  short sVar2;
  int *in_RAX;
  undefined1 *puVar3;
  char cVar4;
  undefined1 uVar5;
  undefined6 uVar6;
  longlong unaff_RBP;
  undefined4 *unaff_RDI;
  bool in_CF;
  bool in_ZF;
  
  uVar6 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar5 = (undefined1)((ulonglong)param_2 >> 8);
  uVar1 = in((short)param_2);
  *unaff_RDI = uVar1;
  if (!in_ZF) {
    *(char *)(param_2 + 0x45) = *(char *)(param_2 + 0x45) + (char)param_2 + in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((in_CF || in_ZF) && (!in_ZF)) {
    *in_RAX = *in_RAX + -0x7ae1eea2;
    in(0x3e);
    cVar4 = (char)param_2 + (char)((ulonglong)param_1 >> 8);
    *(char *)CONCAT62(uVar6,CONCAT11(uVar5,cVar4)) =
         *(char *)CONCAT62(uVar6,CONCAT11(uVar5,cVar4)) << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar2 = (short)(char)in_RAX * (short)DAT_16d565057;
  *(uint *)(unaff_RBP + 0x241eb04c) =
       *(uint *)(unaff_RBP + 0x241eb04c) << 1 | (uint)((char)sVar2 != sVar2);
  puVar3 = (undefined1 *)FUN_14a7b26b8();
  *puVar3 = 0x44;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a97ab FUN_14d7a97ab body=22 status=ok
// SIG undefined FUN_14d7a97ab(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a97ab(undefined8 param_1,undefined8 param_2)

{
  int *in_RAX;
  char cVar1;
  undefined7 uVar2;
  char unaff_BH;
  char *unaff_RSI;
  
  uVar2 = (undefined7)((ulonglong)param_2 >> 8);
  *unaff_RSI = *unaff_RSI + unaff_BH;
  *in_RAX = *in_RAX + -0x7ae1eea2;
  in(0x3e);
  cVar1 = (char)param_2 + '%';
  *(char *)CONCAT71(uVar2,cVar1) = *(char *)CONCAT71(uVar2,cVar1) << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a97c1 FUN_14d7a97c1 body=6 status=ok
// SIG undefined FUN_14d7a97c1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a97c1(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined7 uVar2;
  
  uVar2 = (undefined7)((ulonglong)param_2 >> 8);
  in(0x3e);
  cVar1 = (char)param_2 + (char)((ulonglong)param_1 >> 8);
  *(char *)CONCAT71(uVar2,cVar1) = *(char *)CONCAT71(uVar2,cVar1) << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a97ca FUN_14d7a97ca body=33 status=ok
// SIG undefined FUN_14d7a97ca(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a97ca(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  uint in_EAX;
  char cVar2;
  undefined1 uVar3;
  undefined6 uVar4;
  undefined4 *unaff_RDI;
  bool in_PF;
  
  uVar4 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar3 = (undefined1)((ulonglong)param_2 >> 8);
  if (!in_PF) {
    in(0x3e);
    cVar2 = (char)param_2 + (char)((ulonglong)param_1 >> 8);
    *(char *)CONCAT62(uVar4,CONCAT11(uVar3,cVar2)) =
         *(char *)CONCAT62(uVar4,CONCAT11(uVar3,cVar2)) << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = in((short)param_2);
  *unaff_RDI = uVar1;
  *(uint *)(param_1 + 0x5cf8fe4e) = *(uint *)(param_1 + 0x5cf8fe4e) & in_EAX;
  *(int *)(param_2 + 0x6f) = *(int *)(param_2 + 0x6f) << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a97ec FUN_14d7a97ec body=1 status=ok
// SIG undefined FUN_14d7a97ec(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a97ec(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9800 FUN_14d7a9800 body=7 status=ok
// SIG undefined FUN_14d7a9800(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9800(void)

{
  undefined4 in_EAX;
  
  out(0x7a,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9808 FUN_14d7a9808 body=6 status=ok
// SIG undefined FUN_14d7a9808(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9808(undefined8 param_1,undefined2 param_2)

{
  undefined1 *unaff_RSI;
  bool in_PF;
  bool in_SF;
  
  out(*unaff_RSI,param_2);
  if (!in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_PF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9811 FUN_14d7a9811 body=11 status=ok
// SIG undefined FUN_14d7a9811(void)

void FUN_14d7a9811(undefined8 param_1,undefined2 param_2)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  char in_CF;
  
  out(*unaff_RSI,param_2);
  *unaff_RDI = 0xde;
  cRam000000007d8e9ade = cRam000000007d8e9ade + -0x22 + in_CF;
  FUN_14d7a987a();
  return;
}



// FUNCTION 14d7a981e FUN_14d7a981e body=2 status=ok
// SIG undefined FUN_14d7a981e(void)

void FUN_14d7a981e(void)

{
  FUN_14d7a987a();
  return;
}



// FUNCTION 14d7a9826 FUN_14d7a9826 body=2 status=ok
// SIG undefined FUN_14d7a9826(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7a97c4) */

void FUN_14d7a9826(undefined8 param_1,undefined2 param_2)

{
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
  in(param_2);
  out(*(undefined1 *)(unaff_RSI + 1),param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a982b FUN_14d7a982b body=7 status=ok
// SIG undefined FUN_14d7a982b(void)

void FUN_14d7a982b(void)

{
  longlong unaff_RBX;
  uint unaff_EBP;
  
  *(uint *)(unaff_RBX + -0x27ffd0f3) = *(uint *)(unaff_RBX + -0x27ffd0f3) ^ unaff_EBP;
  return;
}



// FUNCTION 14d7a9851 FUN_14d7a9851 body=9 status=ok
// SIG undefined FUN_14d7a9851(void)

void FUN_14d7a9851(void)

{
  return;
}



// FUNCTION 14d7a9862 FUN_14d7a9862 body=15 status=ok
// SIG undefined FUN_14d7a9862(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9862(void)

{
  longlong unaff_RBX;
  bool in_PF;
  
  if (!in_PF) {
    in(0x42);
    *(char *)(unaff_RBX + -0x6c026f42) = *(char *)(unaff_RBX + -0x6c026f42) + -2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_14d7a987a();
  return;
}



// FUNCTION 14d7a9878 FUN_14d7a9878 body=2 status=ok
// SIG undefined FUN_14d7a9878(void)

void FUN_14d7a9878(undefined8 param_1,undefined2 param_2)

{
  longlong unaff_RSI;
  int unaff_EDI;
  
  out(*(undefined1 *)(unaff_RSI + 1),param_2);
  *(uint *)(unaff_RSI + 0x2049e683) = *(uint *)(unaff_RSI + 0x2049e683) ^ unaff_EDI + 4U;
  FUN_14d7a98f9(4);
  return;
}



// FUNCTION 14d7a987a FUN_14d7a987a body=14 status=ok
// SIG undefined FUN_14d7a987a(void)

void FUN_14d7a987a(undefined8 param_1,undefined2 param_2)

{
  undefined1 *unaff_RSI;
  uint unaff_EDI;
  
  out(*unaff_RSI,param_2);
  *(uint *)(unaff_RSI + 0x2049e682) = *(uint *)(unaff_RSI + 0x2049e682) ^ unaff_EDI;
  FUN_14d7a98f9(4);
  return;
}



// FUNCTION 14d7a9889 FUN_14d7a9889 body=4 status=ok
// SIG undefined FUN_14d7a9889(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a9899) overlaps instruction at (ram,0x00014d7a9897)
    */

byte FUN_14d7a9889(longlong param_1)

{
  byte in_AL;
  char in_AH;
  longlong unaff_RBP;
  
  *(char *)(param_1 + 0x7200b4e4) = *(char *)(param_1 + 0x7200b4e4) + '\x01';
  *(char *)(unaff_RBP + -0xd) = *(char *)(unaff_RBP + -0xd) - in_AH;
  do {
    in_AH = in_AH + (char)((ulonglong)param_1 >> 8);
    param_1 = param_1 + -1;
    if (param_1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while (-1 < in_AH);
  return in_AL | 0x30;
}



// FUNCTION 14d7a988d FUN_14d7a988d body=24 status=ok
// SIG undefined FUN_14d7a988d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a9899) overlaps instruction at (ram,0x00014d7a9897)
    */

byte FUN_14d7a988d(longlong param_1)

{
  byte in_AL;
  char in_AH;
  longlong unaff_RBP;
  
  *(char *)(param_1 + 0x7200b4e4) = *(char *)(param_1 + 0x7200b4e4) + '\x01';
  *(char *)(unaff_RBP + -0xd) = *(char *)(unaff_RBP + -0xd) - in_AH;
  do {
    in_AH = in_AH + (char)((ulonglong)param_1 >> 8);
    param_1 = param_1 + -1;
    if (param_1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while (-1 < in_AH);
  return in_AL | 0x30;
}



// FUNCTION 14d7a98b0 FUN_14d7a98b0 body=4 status=ok
// SIG undefined FUN_14d7a98b0(void)

ulonglong FUN_14d7a98b0(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  bool in_ZF;
  bool in_OF;
  
  if (!in_OF) {
    if (in_ZF) {
      uVar1 = FUN_14d7a98f9();
      return uVar1;
    }
    return in_RAX;
  }
  uVar1 = (ulonglong)(uint)((int)in_RAX >> 0x1f);
  if (!in_OF) {
    return uVar1;
  }
  return (ulonglong)
         CONCAT31((int3)(in_RAX >> 8) >> 0x17,
                  ((char)(in_RAX >> 0x18) >> 7) - *(char *)(uVar1 + 0x5a020067));
}



// FUNCTION 14d7a98b4 FUN_14d7a98b4 body=10 status=ok
// SIG undefined FUN_14d7a98b4(void)

ulonglong FUN_14d7a98b4(void)

{
  int in_EAX;
  bool in_OF;
  
  if (!in_OF) {
    return (ulonglong)(uint)(in_EAX >> 0x1f);
  }
  return (ulonglong)
         CONCAT31((int3)(in_EAX >> 0x1f),
                  (char)(in_EAX >> 0x1f) - *(char *)((ulonglong)(uint)(in_EAX >> 0x1f) + 0x5a020067)
                 );
}



// FUNCTION 14d7a98c0 FUN_14d7a98c0 body=5 status=ok
// SIG undefined FUN_14d7a98c0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a98c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a98cf thunk_EXT_FUN_1831f0dd0 body=10 status=ok
// SIG undefined thunk_EXT_FUN_1831f0dd0(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_1831f0dd0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a98db FUN_14d7a98db body=20 status=ok
// SIG undefined FUN_14d7a98db(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a9899) overlaps instruction at (ram,0x00014d7a9897)
    */

void FUN_14d7a98db(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  byte bVar2;
  longlong in_RAX;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  char in_CF;
  bool in_SF;
  
  if (in_SF) {
    puVar1 = (ulonglong *)(param_3 + 0x458d + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
    *puVar1 = *puVar1 | param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RBP + -0xd) =
       (*(char *)(unaff_RBP + -0xd) - (char)((ulonglong)in_RAX >> 8)) - in_CF;
  do {
    bVar2 = (char)((ulonglong)in_RAX >> 8) + (char)((ulonglong)param_1 >> 8);
    in_RAX = (ulonglong)bVar2 << 8;
    param_1 = param_1 + -1;
    if (param_1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while (-1 < (short)((ushort)bVar2 << 8));
  return;
}



// FUNCTION 14d7a98f9 FUN_14d7a98f9 body=18 status=ok
// SIG undefined FUN_14d7a98f9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a98f9(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a991e FUN_14d7a991e body=1 status=ok
// SIG undefined FUN_14d7a991e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a991e(void)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9923 FUN_14d7a9923 body=7 status=ok
// SIG undefined FUN_14d7a9923(void)

void FUN_14d7a9923(void)

{
  return;
}



// FUNCTION 14d7a9940 FUN_14d7a9940 body=7 status=ok
// SIG undefined FUN_14d7a9940(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9940(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a994e FUN_14d7a994e body=5 status=ok
// SIG undefined FUN_14d7a994e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a994e(undefined8 param_1,byte param_2)

{
  byte *pbVar1;
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  pbVar1 = (byte *)(unaff_RBX + unaff_RBP * 2);
  *pbVar1 = *pbVar1 & param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9956 FUN_14d7a9956 body=3 status=ok
// SIG undefined FUN_14d7a9956(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a9899) overlaps instruction at (ram,0x00014d7a9897)
    */

void FUN_14d7a9956(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  byte bVar2;
  longlong in_RAX;
  char cVar3;
  byte unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  bool in_OF;
  
  bVar2 = (byte)((ulonglong)param_2 >> 8);
  if (in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar3 = unaff_BL - bVar2;
  if (-1 < cVar3) {
    *(char *)(unaff_RBP + -0xd) =
         (*(char *)(unaff_RBP + -0xd) - (char)((ulonglong)in_RAX >> 8)) - (unaff_BL < bVar2);
    do {
      bVar2 = (char)((ulonglong)in_RAX >> 8) + (char)((ulonglong)param_1 >> 8);
      in_RAX = (ulonglong)bVar2 << 8;
      param_1 = param_1 + -1;
      if (param_1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    } while (-1 < (short)((ushort)bVar2 << 8));
    return;
  }
  puVar1 = (ulonglong *)(param_3 + 0x458d + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar3)));
  *puVar1 = *puVar1 | param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9970 FUN_14d7a9970 body=2 status=ok
// SIG undefined FUN_14d7a9970(void)

void FUN_14d7a9970(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7a9982 FUN_14d7a9982 body=21 status=ok
// SIG undefined FUN_14d7a9982(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9982(undefined8 param_1,undefined2 param_2)

{
  byte bVar1;
  undefined2 in_AX;
  byte unaff_BL;
  byte *unaff_RDI;
  char in_CF;
  
  bVar1 = (char)in_AX + 'z' + in_CF;
  out(param_2,CONCAT31((int3)(char)((ushort)in_AX >> 8),bVar1));
  *unaff_RDI = (byte)(CONCAT11(CARRY1(unaff_BL,bVar1),*unaff_RDI) >> 5) | *unaff_RDI << 4;
  out(0x72,bVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9998 FUN_14d7a9998 body=39 status=ok
// SIG undefined FUN_14d7a9998(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9998(undefined8 param_1,undefined2 param_2)

{
  undefined1 in_AL;
  undefined4 *unaff_RSI;
  char *unaff_RDI;
  
  out(*unaff_RSI,param_2);
  DAT_ea839912a72b0910 = in_AL;
  if (*unaff_RDI < *(char *)(unaff_RSI + 1)) {
    in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a99b4 FUN_14d7a99b4 body=2 status=ok
// SIG undefined FUN_14d7a99b4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a99b4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a99b8 FUN_14d7a99b8 body=2 status=ok
// SIG undefined FUN_14d7a99b8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a99b8(void)

{
  uint *in_RAX;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a99d7 FUN_14d7a99d7 body=4 status=ok
// SIG undefined FUN_14d7a99d7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a99d7(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a99db thunk_EXT_FUN_11fb33da2 body=5 status=ok
// SIG undefined thunk_EXT_FUN_11fb33da2(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_11fb33da2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a99eb FUN_14d7a99eb body=21 status=ok
// SIG undefined FUN_14d7a99eb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a99eb(char *param_1)

{
  byte *pbVar1;
  char cVar2;
  code *pcVar3;
  char in_AL;
  undefined7 unaff_00000019;
  
  pbVar1 = (byte *)(CONCAT71(unaff_00000019,0xcf) + 0x3a00176b);
  *pbVar1 = *pbVar1 | 0xcf;
  cVar2 = *param_1;
  *param_1 = *param_1 + in_AL;
  if (SCARRY1(cVar2,in_AL)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)((char)param_1,0x2378d629);
  return;
}



// FUNCTION 14d7a9a03 FUN_14d7a9a03 body=7 status=ok
// SIG undefined FUN_14d7a9a03(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9a03(longlong param_1,char *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  float fVar4;
  code *pcVar5;
  undefined8 in_RAX;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined4 unaff_EBP;
  undefined4 unaff_0000002c;
  longlong unaff_RSI;
  char in_AF;
  bool in_SF;
  bool in_OF;
  float10 in_ST0;
  
  if (!in_SF) {
    if (in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *param_2 = *param_2 + unaff_BL;
  *(undefined4 *)(unaff_RSI + -0x1c634d00) = 0x829b1742;
  fVar4 = *(float *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x47);
  *(int *)(param_1 + -0x23e81c34) = *(int *)(param_1 + -0x23e81c34) + 0x2d;
  pbVar2 = (byte *)(CONCAT71(unaff_00000019,unaff_BL) + 0x240e9e);
  bVar3 = *pbVar2;
  *pbVar2 = *pbVar2 + (byte)param_1;
  if (param_1 != 1) {
    pcVar1 = (char *)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                               CONCAT11(((char)*pbVar2 < '\0') << 7 | (*pbVar2 == 0) << 6 |
                                        in_AF << 4 | ((POPCOUNT(*pbVar2) & 1U) == 0) << 2 | 2U |
                                        CARRY1(bVar3,(byte)param_1),(byte)in_RAX)) + -0x73);
    *pcVar1 = *pcVar1 + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  LOCK();
  *(undefined4 *)(unaff_RSI + 0x1c7e9) = unaff_EBP;
  UNLOCK();
  *(float *)(unaff_RSI + 0x8a2ea9 + CONCAT71(unaff_00000019,unaff_BL) * 2) =
       (float)(in_ST0 * (float10)fVar4);
  if ((char)((byte)in_RAX | 0x61) < '\x01') {
    FUN_14d7a99eb();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9a14 FUN_14d7a9a14 body=6 status=ok
// SIG undefined FUN_14d7a9a14(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9a14(uint param_1)

{
  longlong unaff_RBP;
  
  *(uint *)(unaff_RBP + 0x219171e) = *(uint *)(unaff_RBP + 0x219171e) ^ param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9a29 FUN_14d7a9a29 body=11 status=ok
// SIG undefined FUN_14d7a9a29(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9a29(longlong param_1)

{
  char cVar1;
  undefined8 in_RAX;
  char unaff_BH;
  char in_CF;
  
  cVar1 = ((char)in_RAX - unaff_BH) - in_CF;
  LOCK();
  *(char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1) = cVar1;
  UNLOCK();
  if (param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9a36 FUN_14d7a9a36 body=12 status=ok
// SIG undefined FUN_14d7a9a36(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9a36(longlong param_1)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  float fVar4;
  byte in_AL;
  undefined6 in_register_00000002;
  longlong unaff_RBX;
  undefined4 unaff_EBP;
  undefined4 unaff_0000002c;
  longlong unaff_RSI;
  char in_AF;
  float10 in_ST0;
  
  fVar4 = *(float *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x47);
  *(int *)(param_1 + -0x23e81c34) = *(int *)(param_1 + -0x23e81c34) + 0x2d;
  pbVar2 = (byte *)(unaff_RBX + 0x240e9e);
  bVar3 = *pbVar2;
  *pbVar2 = *pbVar2 + (byte)param_1;
  if (param_1 != 1) {
    pcVar1 = (char *)(CONCAT62(in_register_00000002,
                               CONCAT11(((char)*pbVar2 < '\0') << 7 | (*pbVar2 == 0) << 6 |
                                        in_AF << 4 | ((POPCOUNT(*pbVar2) & 1U) == 0) << 2 | 2U |
                                        CARRY1(bVar3,(byte)param_1),in_AL)) + -0x73);
    *pcVar1 = *pcVar1 + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  LOCK();
  *(undefined4 *)(unaff_RSI + 0x1c7e9) = unaff_EBP;
  UNLOCK();
  *(float *)(unaff_RSI + 0x8a2ea9 + unaff_RBX * 2) = (float)(in_ST0 * (float10)fVar4);
  if ((char)(in_AL | 0x61) < '\x01') {
    FUN_14d7a99eb();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9a48 FUN_14d7a9a48 body=11 status=ok
// SIG undefined FUN_14d7a9a48(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9a48(longlong param_1)

{
  char *pcVar1;
  byte in_AL;
  undefined6 in_register_00000002;
  longlong unaff_RBX;
  undefined4 unaff_EBP;
  longlong unaff_RSI;
  byte in_CF;
  char in_PF;
  char in_AF;
  char in_ZF;
  char in_SF;
  float10 in_ST0;
  
  if (param_1 != 1) {
    pcVar1 = (char *)(CONCAT62(in_register_00000002,
                               CONCAT11(in_SF << 7 | in_ZF << 6 | in_AF << 4 | in_PF << 2 | 2U |
                                        in_CF,in_AL)) + -0x73);
    *pcVar1 = *pcVar1 + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  LOCK();
  *(undefined4 *)(unaff_RSI + 0x1c7e9) = unaff_EBP;
  UNLOCK();
  *(float *)(unaff_RSI + 0x8a2ea9 + unaff_RBX * 2) = (float)in_ST0;
  if ((char)(in_AL | 0x61) < '\x01') {
    FUN_14d7a99eb();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9a5a FUN_14d7a9a5a body=5 status=ok
// SIG undefined FUN_14d7a9a5a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9a5a(void)

{
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (in_ZF || in_OF != in_SF) {
    FUN_14d7a99eb();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9a62 FUN_14d7a9a62 body=3 status=ok
// SIG undefined FUN_14d7a9a62(void)

void FUN_14d7a9a62(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a9a6b FUN_14d7a9a6b body=4 status=ok
// SIG undefined FUN_14d7a9a6b(void)

void FUN_14d7a9a6b(void)

{
  return;
}



// FUNCTION 14d7a9a86 FUN_14d7a9a86 body=7 status=ok
// SIG undefined FUN_14d7a9a86(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9a86(undefined8 param_1,longlong param_2)

{
  uint in_EAX;
  byte unaff_BL;
  undefined7 unaff_00000019;
  uint *unaff_RDI;
  bool in_ZF;
  char in_SF;
  char in_OF;
  undefined1 uStackX_8;
  
  if (in_ZF || in_OF != in_SF) {
    *(uint *)(param_2 + -0x5e) = *(uint *)(param_2 + -0x5e) & (uint)&stack0x00000000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) = *(byte *)CONCAT71(unaff_00000019,unaff_BL) ^ 0x80;
  out(0xa8,(char)in_EAX);
  *unaff_RDI = (in_EAX | 0xa6) ^ 0x58;
  if (CARRY1(unaff_BL,uStackX_8) || (byte)(unaff_BL + uStackX_8) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9a98 FUN_14d7a9a98 body=1 status=ok
// SIG undefined FUN_14d7a9a98(void)

void FUN_14d7a9a98(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7a9aa0 FUN_14d7a9aa0 body=3 status=ok
// SIG undefined FUN_14d7a9aa0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9aa0(undefined8 param_1,longlong param_2)

{
  uint in_EAX;
  byte unaff_BL;
  uint *unaff_RDI;
  
  *(char *)(param_2 + 0x49) = -*(char *)(param_2 + 0x49);
  out(0xa8,(char)in_EAX);
  *unaff_RDI = (in_EAX | 0xa6) ^ 0x58;
  if (CARRY1(unaff_BL,(byte)param_2) || (byte)(unaff_BL + (byte)param_2) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9aa4 FUN_14d7a9aa4 body=15 status=ok
// SIG undefined FUN_14d7a9aa4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9aa4(undefined8 param_1,byte param_2)

{
  uint in_EAX;
  byte unaff_BL;
  longlong unaff_RDI;
  
  *(uint *)(unaff_RDI + 1) = in_EAX ^ 0x58;
  if (CARRY1(unaff_BL,param_2) || (byte)(unaff_BL + param_2) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9aba FUN_14d7a9aba body=20 status=ok
// SIG undefined FUN_14d7a9aba(void)

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_14d7a9aba(undefined8 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 unaff_ESI;
  uint *unaff_RDI;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  
  lVar3 = CONCAT62((int6)((ulonglong)&stack0xfffffffffffffff6 >> 0x10),
                   (short)&stack0xfffffffffffffff6 + (short)param_2 + 1);
  *(undefined8 *)(lVar3 + -8) = param_1;
  uVar1 = *unaff_RDI;
  uVar2 = param_2 - *unaff_RDI;
  *(ulonglong *)(lVar3 + -0x10) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW4(param_2,*unaff_RDI) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)((int)uVar2 < 0) * 0x80 | (ulonglong)(uVar2 == 0) * 0x40 |
       (ulonglong)((POPCOUNT(uVar2 & 0xff) & 1U) == 0) * 4 | (ulonglong)(param_2 < uVar1) |
       (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  if (param_2 < uVar1 || uVar2 == 0) {
    return unaff_ESI;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9ace FUN_14d7a9ace body=4 status=ok
// SIG undefined FUN_14d7a9ace(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9ace(undefined8 param_1,undefined1 param_2)

{
  longlong unaff_RBX;
  longlong unaff_RSI;
  bool in_ZF;
  char in_SF;
  char in_OF;
  float10 in_ST0;
  
  if (in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(float *)(unaff_RSI + 0x8a2ea9 + unaff_RBX * 2) = (float)in_ST0;
  if (in_OF != in_SF) {
    FUN_14d7a99eb(param_2);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9ad6 FUN_14d7a9ad6 body=2 status=ok
// SIG undefined FUN_14d7a9ad6(void)

void FUN_14d7a9ad6(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a9ae3 FUN_14d7a9ae3 body=23 status=ok
// SIG undefined FUN_14d7a9ae3(void)

/* WARNING: Control flow encountered bad instruction data */

ulonglong FUN_14d7a9ae3(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  short sVar2;
  uint in_EAX;
  uint uVar3;
  byte bVar4;
  undefined8 unaff_RBX;
  undefined4 *unaff_RSI;
  byte *unaff_RDI;
  char in_CF;
  longlong unaff_retaddr;
  
  unaff_RDI[-0x177d50f6] = unaff_RDI[-0x177d50f6] >> 1 | in_CF << 7;
  bVar4 = (byte)unaff_RBX & *(byte *)((longlong)unaff_RSI + -0x56);
  pcVar1 = (char *)(param_2 + -0x6b9bb089);
  *pcVar1 = *pcVar1 + '\x01';
  if (*pcVar1 < '\0') {
    out(0xc2,in_EAX);
    *unaff_RDI = bVar4;
    uVar3 = in_EAX & 0xffffffee &
            *(uint *)(CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar4) + -0x38);
    sVar2 = (short)CONCAT31((int3)(uVar3 >> 8),(char)uVar3 + '\x01');
    *(char *)(unaff_retaddr + -0x26) =
         *(char *)(unaff_retaddr + -0x26) + (char)*(undefined6 *)(unaff_retaddr + 0x47);
    *(undefined4 *)unaff_RDI = *unaff_RSI;
    return (ulonglong)
           CONCAT22((short)(uVar3 >> 0x10),
                    CONCAT11((char)(sVar2 % (short)(char)bVar4),(char)(sVar2 / (short)(char)bVar4)))
    ;
  }
  if (*pcVar1 == '\0') {
    return (ulonglong)unaff_RSI & 0xffffffff;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9afb FUN_14d7a9afb body=12 status=ok
// SIG undefined FUN_14d7a9afb(void)

undefined4 FUN_14d7a9afb(void)

{
  short sVar1;
  uint in_EAX;
  uint uVar2;
  longlong unaff_RBX;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  longlong unaff_retaddr;
  
  uVar2 = in_EAX & 0xffffffee & *(uint *)(unaff_RBX + -0x38);
  sVar1 = (short)CONCAT31((int3)(uVar2 >> 8),(char)uVar2 + '\x01');
  *(char *)(unaff_retaddr + -0x26) =
       *(char *)(unaff_retaddr + -0x26) + (char)*(undefined6 *)(unaff_retaddr + 0x47);
  *unaff_RDI = *unaff_RSI;
  return CONCAT22((short)(uVar2 >> 0x10),
                  CONCAT11((char)(sVar1 % (short)(char)unaff_RBX),
                           (char)(sVar1 / (short)(char)unaff_RBX)));
}



// FUNCTION 14d7a9b07 thunk_FUN_14d7a9b83 body=3 status=ok
// SIG undefined thunk_FUN_14d7a9b83(void)

undefined4 thunk_FUN_14d7a9b83(void)

{
  short sVar1;
  uint in_EAX;
  uint uVar2;
  longlong unaff_RBX;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  undefined8 uStackX_8;
  
  uVar2 = in_EAX & *(uint *)(unaff_RBX + -0x38);
  sVar1 = (short)CONCAT31((int3)(uVar2 >> 8),(char)uVar2 + '\x01');
  *(char *)(uStackX_8 + -0x26) =
       *(char *)(uStackX_8 + -0x26) + (char)*(undefined6 *)(uStackX_8 + 0x47);
  *unaff_RDI = *unaff_RSI;
  return CONCAT22((short)(uVar2 >> 0x10),
                  CONCAT11((char)(sVar1 % (short)(char)unaff_RBX),
                           (char)(sVar1 / (short)(char)unaff_RBX)));
}



// FUNCTION 14d7a9b0b FUN_14d7a9b0b body=2 status=ok
// SIG undefined FUN_14d7a9b0b(void)

/* WARNING: Heritage AFTER dead removal. Example location: RCX : 0x00014d7a9b23 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_14d7a9b0b(undefined8 param_1,byte param_2)

{
  byte *pbVar1;
  code *pcVar2;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined4 unaff_EDI;
  undefined4 unaff_0000003c;
  
  pbVar1 = (byte *)(unaff_RSI + -0x2450bf62 + unaff_RBP * 2);
  *pbVar1 = *pbVar1 ^ (byte)((ulonglong)param_1 >> 8);
  *(char *)(unaff_RBP + 0x24) = *(char *)(unaff_RBP + 0x24) + param_2;
  pcVar2 = (code *)swi(3);
  (*pcVar2)(param_1,param_2 | *(byte *)CONCAT44(unaff_0000003c,unaff_EDI));
  return;
}



// FUNCTION 14d7a9b0f FUN_14d7a9b0f body=12 status=ok
// SIG undefined FUN_14d7a9b0f(void)

void FUN_14d7a9b0f(undefined8 param_1,undefined2 param_2)

{
  code *pcVar1;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  longlong unaff_RDI;
  
  out(*unaff_RSI,param_2);
  *(char *)(unaff_RBP + 0x24) = *(char *)(unaff_RBP + 0x24) + (byte)param_2;
  pcVar1 = (code *)swi(3);
  (*pcVar1)(param_1,(byte)param_2 | *(byte *)(unaff_RDI + 4));
  return;
}



// FUNCTION 14d7a9b1c FUN_14d7a9b1c body=3 status=ok
// SIG undefined FUN_14d7a9b1c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9b1c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9b20 FUN_14d7a9b20 body=4 status=ok
// SIG undefined FUN_14d7a9b20(void)

void FUN_14d7a9b20(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7a9b2a FUN_14d7a9b2a body=9 status=ok
// SIG undefined FUN_14d7a9b2a(void)

/* WARNING: Control flow encountered bad instruction data */

ulonglong FUN_14d7a9b2a(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 in_RAX;
  uint *puVar3;
  uint unaff_EBP;
  uint *unaff_RSI;
  uint *unaff_RDI;
  undefined1 auStack_10 [8];
  
  puVar3 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((byte)((ulonglong)in_RAX >> 8) ^ (byte)param_1,(char)in_RAX));
  *puVar3 = *puVar3 | (uint)param_1;
  uVar2 = *unaff_RDI;
  uVar1 = *unaff_RSI;
  *(char *)(param_1 + -0x31) = *(char *)(param_1 + -0x31) + (byte)param_1;
  *(uint *)(ulonglong)unaff_EBP = unaff_EBP;
  if (param_1 == 1) {
    *(ulonglong *)(((ulonglong)(auStack_10 + (longlong)(unaff_RDI + 1) * 2) & 0xffffffff) - 8) =
         CONCAT71((int7)((ulonglong)puVar3 >> 8),((char)in_RAX + 'u') - (uVar1 < uVar2)) &
         0xffffffff;
    return (ulonglong)(unaff_RSI + 1) & 0xffffffff;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9b33 FUN_14d7a9b33 body=23 status=ok
// SIG undefined FUN_14d7a9b33(void)

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_14d7a9b33(longlong param_1)

{
  uint in_EAX;
  uint unaff_EBP;
  undefined4 unaff_ESI;
  longlong unaff_RDI;
  
  *(char *)(param_1 + -0x31) = *(char *)(param_1 + -0x31) + (char)param_1;
  *(uint *)(ulonglong)unaff_EBP = unaff_EBP;
  if (param_1 == 1) {
    *(ulonglong *)(((ulonglong)(&stack0x00000000 + unaff_RDI * 2) & 0xffffffff) - 8) =
         (ulonglong)in_EAX;
    return unaff_ESI;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9b65 FUN_14d7a9b65 body=10 status=ok
// SIG undefined FUN_14d7a9b65(void)

/* WARNING: Control flow encountered bad instruction data */

ulonglong FUN_14d7a9b65(longlong param_1)

{
  char *pcVar1;
  longlong lVar2;
  short sVar3;
  uint uVar4;
  undefined8 in_RAX;
  ulonglong uVar5;
  longlong unaff_RBX;
  int unaff_EBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_CF;
  bool in_ZF;
  
  uVar5 = CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(0x98,(char)in_RAX));
  if (in_CF || in_ZF) {
    return uVar5;
  }
  pcVar1 = (char *)(uVar5 - 0x10);
  *pcVar1 = *pcVar1 + (char)param_1;
  if (param_1 == 1 || *pcVar1 == '\0') {
    do {
      uVar4 = (uint)uVar5 ^ 0x2bd7ae;
      uVar5 = (ulonglong)uVar4 ^ 0x50;
    } while ((char)uVar4 != 'P');
    uVar4 = (uint)uVar5 & *(uint *)(unaff_RBX + -0x38);
    sVar3 = (short)CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + '\x01');
    lVar2 = *(longlong *)((ulonglong)(uint)(unaff_EBP - (int)unaff_RBX) + 0x10);
    pcVar1 = (char *)(lVar2 + -0x26);
    *pcVar1 = *pcVar1 + (char)*(undefined6 *)(lVar2 + 0x47);
    *unaff_RDI = *unaff_RSI;
    return (ulonglong)
           CONCAT11((char)(sVar3 % (short)(char)unaff_RBX),(char)(sVar3 / (short)(char)unaff_RBX));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9b7f FUN_14d7a9b7f body=4 status=ok
// SIG undefined FUN_14d7a9b7f(void)

undefined4 FUN_14d7a9b7f(void)

{
  char *pcVar1;
  short sVar2;
  uint in_EAX;
  uint uVar3;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  uVar3 = in_EAX & *(uint *)(unaff_RBX + -0x38);
  sVar2 = (short)CONCAT31((int3)(uVar3 >> 8),(char)uVar3 + '\x01');
  pcVar1 = (char *)(*(longlong *)(unaff_RBP + 0x10) + -0x26);
  *pcVar1 = *pcVar1 + (char)*(undefined6 *)(*(longlong *)(unaff_RBP + 0x10) + 0x47);
  *unaff_RDI = *unaff_RSI;
  return CONCAT22((short)(uVar3 >> 0x10),
                  CONCAT11((char)(sVar2 % (short)(char)unaff_RBX),
                           (char)(sVar2 / (short)(char)unaff_RBX)));
}



// FUNCTION 14d7a9b83 FUN_14d7a9b83 body=3 status=ok
// SIG undefined FUN_14d7a9b83(void)

undefined4 FUN_14d7a9b83(void)

{
  short sVar1;
  uint in_EAX;
  uint uVar2;
  longlong unaff_RBX;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  undefined8 uStackX_8;
  
  uVar2 = in_EAX & *(uint *)(unaff_RBX + -0x38);
  sVar1 = (short)CONCAT31((int3)(uVar2 >> 8),(char)uVar2 + '\x01');
  *(char *)(uStackX_8 + -0x26) =
       *(char *)(uStackX_8 + -0x26) + (char)*(undefined6 *)(uStackX_8 + 0x47);
  *unaff_RDI = *unaff_RSI;
  return CONCAT22((short)(uVar2 >> 0x10),
                  CONCAT11((char)(sVar1 % (short)(char)unaff_RBX),
                           (char)(sVar1 / (short)(char)unaff_RBX)));
}



// FUNCTION 14d7a9b87 FUN_14d7a9b87 body=22 status=ok
// SIG undefined FUN_14d7a9b87(void)

undefined2 FUN_14d7a9b87(void)

{
  char cVar1;
  undefined2 in_AX;
  short sVar2;
  char unaff_BL;
  undefined8 *puVar3;
  undefined8 *unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  longlong lStack_d0d5;
  undefined8 uStack_10;
  
  puVar3 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x02';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar3 = puVar3 + -1;
    *puVar3 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  sVar2 = CONCAT11((char)((ushort)in_AX >> 8),(char)in_AX + '\x01');
  *(char *)(lStack_d0d5 + -0x26) =
       *(char *)(lStack_d0d5 + -0x26) + (char)*(undefined6 *)(lStack_d0d5 + 0x47);
  *unaff_RDI = *unaff_RSI;
  return CONCAT11((char)(sVar2 % (short)unaff_BL),(char)(sVar2 / (short)unaff_BL));
}



// FUNCTION 14d7a9ba1 FUN_14d7a9ba1 body=3 status=ok
// SIG undefined FUN_14d7a9ba1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9ba1(void)

{
  undefined4 in_EAX;
  undefined4 *unaff_RDI;
  bool in_OF;
  
  if (!in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9bae FUN_14d7a9bae body=8 status=ok
// SIG undefined FUN_14d7a9bae(void)

/* WARNING: Control flow encountered bad instruction data */

ulonglong FUN_14d7a9bae(longlong param_1)

{
  char *pcVar1;
  uint *puVar2;
  longlong lVar3;
  short sVar4;
  uint uVar5;
  int in_EAX;
  ulonglong uVar6;
  longlong unaff_RBX;
  int unaff_EBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_CF;
  bool in_ZF;
  
  if (!in_CF && !in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar2 = (uint *)(unaff_RBX + -0x54211b36);
  uVar5 = *puVar2;
  *puVar2 = *puVar2 - (in_EAX >> 0x1f);
  uVar6 = (ulonglong)CONCAT22((short)((uint)in_EAX >> 0x10),CONCAT11(0x98,(char)in_EAX));
  if ((uint)(in_EAX >> 0x1f) <= uVar5 && *puVar2 != 0) {
    pcVar1 = (char *)(uVar6 - 0x10);
    *pcVar1 = *pcVar1 + (char)param_1;
    if (param_1 == 1 || *pcVar1 == '\0') {
      do {
        uVar5 = (uint)uVar6 ^ 0x2bd7ae;
        uVar6 = (ulonglong)uVar5 ^ 0x50;
      } while ((char)uVar5 != 'P');
      uVar5 = (uint)uVar6 & *(uint *)(unaff_RBX + -0x38);
      sVar4 = (short)CONCAT31((int3)(uVar5 >> 8),(char)uVar5 + '\x01');
      lVar3 = *(longlong *)((ulonglong)(uint)(unaff_EBP - (int)unaff_RBX) + 0x10);
      pcVar1 = (char *)(lVar3 + -0x26);
      *pcVar1 = *pcVar1 + (char)*(undefined6 *)(lVar3 + 0x47);
      *unaff_RDI = *unaff_RSI;
      return (ulonglong)
             CONCAT22((short)(uVar5 >> 0x10),
                      CONCAT11((char)(sVar4 % (short)(char)unaff_RBX),
                               (char)(sVar4 / (short)(char)unaff_RBX)));
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return uVar6;
}



// FUNCTION 14d7a9bc3 FUN_14d7a9bc3 body=2 status=ok
// SIG undefined FUN_14d7a9bc3(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14d7a9bc3(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  uint *puVar3;
  byte bVar4;
  uint uVar5;
  short sVar6;
  uint uVar7;
  ulonglong uVar8;
  byte bVar9;
  longlong unaff_RBX;
  ulonglong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  uVar7 = in(0x33);
  uVar8 = (ulonglong)uVar7;
  puVar3 = (uint *)((longlong)unaff_RSI + 0x43aace9a);
  *puVar3 = *puVar3 ^ (uint)unaff_RBP;
  if (*puVar3 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 == 1) {
    pbVar2 = (byte *)(unaff_RBP * 8);
    bVar4 = *pbVar2;
    bVar9 = (byte)((ulonglong)param_2 >> 8);
    *pbVar2 = *pbVar2 + bVar9;
    unaff_RSI = (undefined4 *)
                (ulonglong)((int)unaff_RSI + _DAT_00000000 + (uint)CARRY1(bVar4,bVar9));
    puVar3 = (uint *)(unaff_RBX + -0x54211b36);
    uVar5 = *puVar3;
    *puVar3 = *puVar3 - ((int)uVar7 >> 0x1f);
    uVar8 = (ulonglong)CONCAT22((short)(uVar7 >> 0x10),CONCAT11(0x98,(char)uVar7));
    if (uVar5 < (uint)((int)uVar7 >> 0x1f) || *puVar3 == 0) {
      return uVar8;
    }
    unaff_RBP = (ulonglong)((uint)unaff_RBP - (int)unaff_RBX);
    pcVar1 = (char *)(uVar8 - 0x10);
    *pcVar1 = *pcVar1;
    if (*pcVar1 != '\0') {
      halt_baddata();
    }
  }
  do {
    uVar7 = (uint)uVar8 ^ 0x2bd7ae;
    uVar8 = (ulonglong)uVar7 ^ 0x50;
  } while ((char)uVar7 != 'P');
  uVar7 = (uint)uVar8 & *(uint *)(unaff_RBX + -0x38);
  sVar6 = (short)CONCAT31((int3)(uVar7 >> 8),(char)uVar7 + '\x01');
  pcVar1 = (char *)(*(longlong *)(unaff_RBP + 0x10) + -0x26);
  *pcVar1 = *pcVar1 + (char)*(undefined6 *)(*(longlong *)(unaff_RBP + 0x10) + 0x47);
  *unaff_RDI = *unaff_RSI;
  return (ulonglong)
         CONCAT22((short)(uVar7 >> 0x10),
                  CONCAT11((char)(sVar6 % (short)(char)unaff_RBX),
                           (char)(sVar6 / (short)(char)unaff_RBX)));
}



// FUNCTION 14d7a9bcb FUN_14d7a9bcb body=14 status=ok
// SIG undefined FUN_14d7a9bcb(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14d7a9bcb(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  uint *puVar2;
  byte *pbVar3;
  byte bVar4;
  short sVar5;
  uint uVar6;
  ulonglong in_RAX;
  byte bVar8;
  uint uVar7;
  longlong unaff_RBX;
  ulonglong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_ZF;
  
  if (in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 == 1) {
    pbVar3 = (byte *)(unaff_RBP * 8);
    bVar4 = *pbVar3;
    bVar8 = (byte)((ulonglong)param_2 >> 8);
    *pbVar3 = *pbVar3 + bVar8;
    unaff_RSI = (undefined4 *)
                (ulonglong)((int)unaff_RSI + _DAT_00000000 + (uint)CARRY1(bVar4,bVar8));
    uVar7 = (int)in_RAX >> 0x1f;
    puVar2 = (uint *)(unaff_RBX + -0x54211b36);
    uVar6 = *puVar2;
    *puVar2 = *puVar2 - uVar7;
    in_RAX = CONCAT62((int6)((in_RAX & 0xffffffff) >> 0x10),
                      CONCAT11(0x98,(char)(in_RAX & 0xffffffff)));
    if (uVar6 < uVar7 || *puVar2 == 0) {
      return in_RAX;
    }
    unaff_RBP = (ulonglong)(uint)((int)unaff_RBP - (int)unaff_RBX);
    pcVar1 = (char *)(in_RAX - 0x10);
    *pcVar1 = *pcVar1;
    if (*pcVar1 != '\0') {
      halt_baddata();
    }
  }
  do {
    uVar6 = (uint)in_RAX ^ 0x2bd7ae;
    in_RAX = (ulonglong)uVar6 ^ 0x50;
  } while ((char)uVar6 != 'P');
  uVar6 = (uint)in_RAX & *(uint *)(unaff_RBX + -0x38);
  sVar5 = (short)CONCAT31((int3)(uVar6 >> 8),(char)uVar6 + '\x01');
  pcVar1 = (char *)(*(longlong *)(unaff_RBP + 0x10) + -0x26);
  *pcVar1 = *pcVar1 + (char)*(undefined6 *)(*(longlong *)(unaff_RBP + 0x10) + 0x47);
  *unaff_RDI = *unaff_RSI;
  return (ulonglong)
         CONCAT22((short)(uVar6 >> 0x10),
                  CONCAT11((char)(sVar5 % (short)(char)unaff_RBX),
                           (char)(sVar5 / (short)(char)unaff_RBX)));
}



// FUNCTION 14d7a9bdd FUN_14d7a9bdd body=3 status=ok
// SIG undefined FUN_14d7a9bdd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9bdd(void)

{
  int unaff_ESP;
  longlong unaff_RSI;
  byte in_CF;
  
  *(int *)(unaff_RSI + 0x66) = *(int *)(unaff_RSI + 0x66) + unaff_ESP + (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9be9 FUN_14d7a9be9 body=11 status=ok
// SIG undefined FUN_14d7a9be9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9be9(undefined8 param_1,undefined8 param_2)

{
  undefined4 in_EAX;
  undefined4 *unaff_RDI;
  char in_CF;
  
  *(char *)((longlong)unaff_RDI + 0x6b) =
       (*(char *)((longlong)unaff_RDI + 0x6b) - (char)((ulonglong)param_2 >> 8)) - in_CF;
  *unaff_RDI = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9bf5 FUN_14d7a9bf5 body=7 status=ok
// SIG undefined FUN_14d7a9bf5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9bf5(void)

{
  undefined4 unaff_EBX;
  undefined1 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = unaff_EBX;
  *(undefined1 *)(unaff_RDI + 1) = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9c05 FUN_14d7a9c05 body=3 status=ok
// SIG undefined FUN_14d7a9c05(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a9c05(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  code *pcVar4;
  undefined4 in_EAX;
  byte bVar5;
  ulonglong uVar6;
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  bVar5 = (byte)((ulonglong)param_2 >> 8);
  *(uint *)(unaff_RDI + -0x50) = ~*(uint *)(unaff_RDI + -0x50);
  uVar6 = (ulonglong)(uint)((int)&stack0x00000000 - *(int *)(unaff_RBP + -0x3f));
  out((short)param_2,in_EAX);
  pbVar1 = (byte *)(unaff_RDI + 0x65dfdf74);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar5;
  pcVar2 = (char *)(uVar6 + 0x6ad0c332 + CONCAT71((int7)((ulonglong)param_1 >> 8),0x68));
  _DAT_44ea4541668a4089 = in_EAX;
  *pcVar2 = *pcVar2 + (((char)in_EAX + '/') - CARRY1(bVar3,bVar5));
  if (*pcVar2 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined8 *)(uVar6 - 8) = 0xffffffffe3736ed2;
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}



// FUNCTION 14d7a9c09 FUN_14d7a9c09 body=48 status=ok
// SIG undefined FUN_14d7a9c09(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a9c09(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  code *pcVar4;
  undefined4 in_EAX;
  byte bVar5;
  uint unaff_EDI;
  
  bVar5 = (byte)((ulonglong)param_2 >> 8);
  pbVar1 = (byte *)((ulonglong)(unaff_EDI >> 0x18) + 0x65dfdf74);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar5;
  _DAT_44ea4541668a4089 = in_EAX;
  pcVar2 = &stack0x6ad0c332 + CONCAT71((int7)((ulonglong)param_1 >> 8),0x68);
  *pcVar2 = *pcVar2 + (((char)in_EAX + '/') - CARRY1(bVar3,bVar5));
  if (*pcVar2 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}



// FUNCTION 14d7a9c47 FUN_14d7a9c47 body=7 status=ok
// SIG undefined FUN_14d7a9c47(void)

void FUN_14d7a9c47(void)

{
  return;
}



// FUNCTION 14d7a9c4f FUN_14d7a9c4f body=3 status=ok
// SIG undefined FUN_14d7a9c4f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9c4f(undefined8 param_1,byte *param_2)

{
  uint unaff_EBP;
  longlong unaff_RDI;
  
  *param_2 = *param_2 | (byte)((ulonglong)param_2 >> 8);
  *(uint *)(unaff_RDI + -0x46) = *(uint *)(unaff_RDI + -0x46) & unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9c53 FUN_14d7a9c53 body=6 status=ok
// SIG undefined FUN_14d7a9c53(void)

void FUN_14d7a9c53(void)

{
  longlong unaff_RBP;
  byte in_R11B;
  
  *(byte *)(unaff_RBP + 0x7316aff8) = *(byte *)(unaff_RBP + 0x7316aff8) ^ in_R11B;
  return;
}



// FUNCTION 14d7a9c5b FUN_14d7a9c5b body=3 status=ok
// SIG undefined FUN_14d7a9c5b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9c5b(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9c5f FUN_14d7a9c5f body=50 status=ok
// SIG undefined FUN_14d7a9c5f(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a9c5f(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  uint uVar2;
  code *pcVar3;
  uint in_EAX;
  byte bVar4;
  byte unaff_BL;
  int unaff_ESI;
  uint uVar5;
  undefined2 in_SS;
  bool in_CF;
  bool bVar6;
  bool in_ZF;
  undefined1 auStackX_8 [32];
  
  bVar4 = (byte)((ulonglong)param_1 >> 8);
  if (in_CF) {
    return;
  }
  if (in_ZF) {
    *(undefined8 *)((ulonglong)in_EAX - 8) = param_2;
    out(0xb7,(int)auStackX_8);
    *(undefined8 *)((ulonglong)in_EAX - 0x10) = 0xffffffffe3736ed2;
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar6 = CARRY1(DAT_eccd0000,bVar4);
  DAT_eccd0000 = DAT_eccd0000 + bVar4;
  uVar2 = (uint)bVar6;
  uVar5 = (unaff_ESI + -0x2d9cd99b) - uVar2;
  _DAT_eccd0043 = in_SS;
  if (uVar5 != 0 &&
      (SBORROW4(unaff_ESI,0x2d9cd99b) != SBORROW4(unaff_ESI + -0x2d9cd99b,uVar2)) == (int)uVar5 < 0)
  {
    pbVar1 = (byte *)(param_1 + 0x16);
    bVar4 = *pbVar1;
    *pbVar1 = *pbVar1 + unaff_BL;
    *(int *)((ulonglong)uVar5 - 0x7f115e1e) =
         *(int *)((ulonglong)uVar5 - 0x7f115e1e) + uVar5 + (uint)CARRY1(bVar4,unaff_BL);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9c64 FUN_14d7a9c64 body=20 status=ok
// SIG undefined FUN_14d7a9c64(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9c64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9cb8 FUN_14d7a9cb8 body=17 status=ok
// SIG undefined FUN_14d7a9cb8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9cb8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9cd5 FUN_14d7a9cd5 body=4 status=ok
// SIG undefined FUN_14d7a9cd5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9cd5(void)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  undefined8 uStack_10;
  
  puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x13';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9ce7 FUN_14d7a9ce7 body=2 status=ok
// SIG undefined FUN_14d7a9ce7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9ce7(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9ceb FUN_14d7a9ceb body=2 status=ok
// SIG undefined FUN_14d7a9ceb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9ceb(void)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte bVar6;
  uint uVar5;
  byte unaff_BL;
  uint uVar7;
  longlong unaff_RSI;
  byte *unaff_RDI;
  undefined2 in_SS;
  
  func_0x000189734907();
  uVar5 = *(int *)(unaff_RSI + -0x32ffff41) * -0x14;
  bVar2 = *unaff_RDI;
  bVar6 = (byte)(uVar5 >> 8);
  *unaff_RDI = *unaff_RDI + bVar6;
  uVar3 = (uint)CARRY1(bVar2,bVar6);
  iVar4 = (int)unaff_RSI + -0x2d9cd99b;
  uVar7 = iVar4 - uVar3;
  *(undefined2 *)(unaff_RDI + 0x43) = in_SS;
  if (uVar7 != 0 && (SBORROW4((int)unaff_RSI,0x2d9cd99b) != SBORROW4(iVar4,uVar3)) == (int)uVar7 < 0
     ) {
    pbVar1 = (byte *)((ulonglong)uVar5 + 0x16);
    bVar2 = *pbVar1;
    *pbVar1 = *pbVar1 + unaff_BL;
    *(int *)((ulonglong)uVar7 - 0x7f115e1e) =
         *(int *)((ulonglong)uVar7 - 0x7f115e1e) + uVar7 + (uint)CARRY1(bVar2,unaff_BL);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9cf0 FUN_14d7a9cf0 body=9 status=ok
// SIG undefined FUN_14d7a9cf0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9cf0(void)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte bVar6;
  uint uVar5;
  byte unaff_BL;
  uint uVar7;
  longlong unaff_RSI;
  byte *unaff_RDI;
  undefined2 in_SS;
  
  func_0x000189734907();
  uVar5 = *(int *)(unaff_RSI + -0x32ffff41) * -0x14;
  bVar2 = *unaff_RDI;
  bVar6 = (byte)(uVar5 >> 8);
  *unaff_RDI = *unaff_RDI + bVar6;
  uVar3 = (uint)CARRY1(bVar2,bVar6);
  iVar4 = (int)unaff_RSI + -0x2d9cd99b;
  uVar7 = iVar4 - uVar3;
  *(undefined2 *)(unaff_RDI + 0x43) = in_SS;
  if (uVar7 != 0 && (SBORROW4((int)unaff_RSI,0x2d9cd99b) != SBORROW4(iVar4,uVar3)) == (int)uVar7 < 0
     ) {
    pbVar1 = (byte *)((ulonglong)uVar5 + 0x16);
    bVar2 = *pbVar1;
    *pbVar1 = *pbVar1 + unaff_BL;
    *(int *)((ulonglong)uVar7 - 0x7f115e1e) =
         *(int *)((ulonglong)uVar7 - 0x7f115e1e) + uVar7 + (uint)CARRY1(bVar2,unaff_BL);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9d28 FUN_14d7a9d28 body=2 status=ok
// SIG undefined FUN_14d7a9d28(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9d28(void)

{
  undefined2 *in_RAX;
  undefined2 in_FPUControlWord;
  
  *in_RAX = in_FPUControlWord;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9d38 FUN_14d7a9d38 body=11 status=ok
// SIG undefined FUN_14d7a9d38(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9d38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9d44 FUN_14d7a9d44 body=24 status=ok
// SIG undefined FUN_14d7a9d44(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9d44(void)

{
  undefined1 in_AL;
  longlong unaff_RBP;
  undefined2 in_FS;
  bool in_PF;
  
  if (in_PF) {
    uRam36e9b4b30eb3acea = in_AL;
    *(undefined2 *)(unaff_RBP + 0xb583f00) = in_FS;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9d61 FUN_14d7a9d61 body=17 status=ok
// SIG undefined FUN_14d7a9d61(void)

void FUN_14d7a9d61(void)

{
  byte in_AL;
  undefined1 in_AH;
  longlong unaff_RSI;
  longlong unaff_retaddr;
  
  *(byte *)(unaff_RSI + -0x7366161e) = *(byte *)(unaff_RSI + -0x7366161e) | in_AL;
  LOCK();
  *(undefined1 *)(unaff_retaddr + 0x4a5c6080) = in_AH;
  UNLOCK();
  out(0x90,in_AL);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a9d75 FUN_14d7a9d75 body=26 status=ok
// SIG undefined FUN_14d7a9d75(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9d75(undefined8 param_1,undefined4 *param_2)

{
  longlong unaff_RSI;
  uint unaff_EDI;
  
  LOCK();
  *param_2 = (int)param_2;
  UNLOCK();
  *(uint *)(unaff_RSI + -0x618289fe) = *(uint *)(unaff_RSI + -0x618289fe) | unaff_EDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9db7 FUN_14d7a9db7 body=8 status=ok
// SIG undefined FUN_14d7a9db7(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a9db7(byte param_1,undefined2 param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined4 in_EAX;
  byte unaff_BH;
  undefined8 *puVar5;
  undefined8 *unaff_RBP;
  undefined8 uStack_10;
  
  out(param_2,(char)in_EAX);
  pbVar1 = (byte *)((longlong)unaff_RBP + 0x7f);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + unaff_BH;
  uVar4 = _DAT_3d8e5f5057a46bdc;
  out(0x58,in_EAX);
  *(int *)(ulonglong)_DAT_3d8e5f5057a46bdc =
       (*(int *)(ulonglong)_DAT_3d8e5f5057a46bdc - _DAT_3d8e5f5057a46bdc) -
       (uint)(CARRY1(param_1,(byte)param_2) ||
             CARRY1(param_1 + (byte)param_2,CARRY1(bVar2,unaff_BH)));
  out(uRam0000000003591e00,param_2);
  out(0x28,(char)uVar4 + '_');
  puVar5 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar3 = '\a';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar5 = puVar5 + -1;
    *puVar5 = *unaff_RBP;
    cVar3 = cVar3 + -1;
  } while ('\0' < cVar3);
  in(0x95);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9dc3 FUN_14d7a9dc3 body=29 status=ok
// SIG undefined FUN_14d7a9dc3(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a9dc3(undefined8 param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RBP;
  undefined4 *unaff_RSI;
  uint unaff_EDI;
  undefined8 uStack_10;
  
  uVar2 = _DAT_3d8e5f5057a46bdc;
  *(int *)(ulonglong)_DAT_3d8e5f5057a46bdc =
       (*(int *)(ulonglong)_DAT_3d8e5f5057a46bdc - _DAT_3d8e5f5057a46bdc) -
       (uint)CARRY4(unaff_EDI,param_2);
  out(*unaff_RSI,(short)param_2);
  out(0x28,(char)uVar2 + '_');
  puVar3 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\a';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar3 = puVar3 + -1;
    *puVar3 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  in(0x95);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9de4 FUN_14d7a9de4 body=6 status=ok
// SIG undefined FUN_14d7a9de4(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a9de5) overlaps instruction at (ram,0x00014d7a9de4)
    */

void FUN_14d7a9de4(void)

{
  char cVar1;
  undefined1 in_AL;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  bool in_OF;
  undefined8 uStack_10;
  
  if (in_OF) {
    out(0x28,in_AL);
    puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
    cVar1 = '\a';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar2 = puVar2 + -1;
      *puVar2 = *unaff_RBP;
      cVar1 = cVar1 + -1;
    } while ('\0' < cVar1);
  }
  in(0x95);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9df0 FUN_14d7a9df0 body=3 status=ok
// SIG undefined FUN_14d7a9df0(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a9dcc) overlaps instruction at (ram,0x00014d7a9dc5)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a9da6) */
/* WARNING: Removing unreachable block (ram,0x00014d7a9dcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a9df0(undefined8 param_1,int *param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  ulonglong in_RAX;
  undefined8 unaff_RBX;
  undefined8 *puVar4;
  undefined8 *unaff_RBP;
  char *unaff_RSI;
  char *unaff_RDI;
  undefined2 in_ES;
  char in_CF;
  undefined8 unaff_retaddr;
  
  *unaff_RSI = (*unaff_RSI - (char)((ulonglong)unaff_RBX >> 8)) - in_CF;
  *unaff_RDI = *unaff_RSI;
  pcVar1 = unaff_RSI + -3;
  *pcVar1 = *pcVar1 + (char)param_2;
  if ((POPCOUNT(*pcVar1) & 1U) != 0) {
    *(int *)(unaff_RSI + 1) = *(int *)(unaff_RSI + 1) + 0x31d1147d;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = *param_2 + 1;
  *(undefined8 *)(unaff_RDI + -0x13) = unaff_retaddr;
  *(undefined2 *)(in_RAX ^ 0xfd) = in_ES;
  uVar3 = _DAT_3d8e5f5057a46bdc;
  if ((char)in_RAX != -3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    *(int *)(ulonglong)_DAT_3d8e5f5057a46bdc =
         (*(int *)(ulonglong)_DAT_3d8e5f5057a46bdc - _DAT_3d8e5f5057a46bdc) -
         (uint)((int)param_2 < 0);
    out(uRam0000000003591e00,(short)unaff_RDI + 1);
    out(0x28,(char)uVar3 + '_');
    puVar4 = (undefined8 *)&stack0x00000008;
    cVar2 = '\a';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *unaff_RBP;
      cVar2 = cVar2 + -1;
    } while ('\0' < cVar2);
    in(0x95);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


