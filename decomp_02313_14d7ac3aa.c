// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14d7ac3aa FUN_14d7ac3aa body=2 status=ok
// SIG undefined FUN_14d7ac3aa(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac3aa(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac3ae FUN_14d7ac3ae body=4 status=ok
// SIG undefined FUN_14d7ac3ae(void)

/* WARNING: Control flow encountered bad instruction data */

uint FUN_14d7ac3ae(longlong param_1)

{
  uint uVar1;
  char cVar2;
  undefined1 in_AL;
  longlong unaff_RBX;
  char *unaff_RSI;
  int unaff_EDI;
  char in_ZF;
  
  if (param_1 == 1 || in_ZF == '\0') {
    out(0x76,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar2 = (char)(unaff_EDI + -0x548ff000) + '8';
  if ((POPCOUNT(cVar2) & 1U) != 0) {
    uVar1 = *(uint *)(unaff_RBX + -0x22);
    *unaff_RSI = *unaff_RSI + '\x01';
    return CONCAT31((int3)((uint)(unaff_EDI + -0x548ff000) >> 8),cVar2) | uVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac3c9 FUN_14d7ac3c9 body=16 status=ok
// SIG undefined FUN_14d7ac3c9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac3c9(undefined8 param_1,undefined2 param_2)

{
  longlong unaff_RSI;
  
  in(param_2);
  *(char *)(unaff_RSI + 0x3d) =
       *(char *)(unaff_RSI + 0x3d) + (char)param_1 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac3df FUN_14d7ac3df body=2 status=ok
// SIG undefined FUN_14d7ac3df(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac3df(void)

{
  char cVar1;
  undefined8 in_RAX;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_ZF;
  ulonglong uStackX_8;
  
  cVar1 = in(0xb6);
  if (!in_ZF) {
    *(char *)(unaff_RDI + -2) = *(char *)(unaff_RDI + -2) + (char)((ulonglong)in_RAX >> 8);
    cRamdbac4422e0a3407b = cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_RSI;
  unaff_RDI[(ulonglong)((uStackX_8 & 0x400) != 0) * -2 + 1] =
       (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1 + -0x56);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac3e3 FUN_14d7ac3e3 body=7 status=ok
// SIG undefined FUN_14d7ac3e3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac3e3(void)

{
  undefined8 in_RAX;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_ZF;
  ulonglong unaff_retaddr;
  
  if (!in_ZF) {
    *(char *)(unaff_RDI + -2) = *(char *)(unaff_RDI + -2) + (char)((ulonglong)in_RAX >> 8);
    cRamdbac4422e0a3407b = (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_RSI;
  unaff_RDI[(ulonglong)((unaff_retaddr & 0x400) != 0) * -2 + 1] =
       (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + -0x56);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac3ec FUN_14d7ac3ec body=11 status=ok
// SIG undefined FUN_14d7ac3ec(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7ac3ec(void)

{
  code *pcVar1;
  undefined4 in_EAX;
  bool in_PF;
  
  if (in_PF) {
    _DAT_8d0562dbac4422e0 = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7ac401 FUN_14d7ac401 body=6 status=ok
// SIG undefined FUN_14d7ac401(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac401(undefined8 param_1,undefined2 param_2)

{
  char *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  char *unaff_RSI;
  undefined4 *unaff_RDI;
  ulonglong unaff_retaddr;
  
  *(byte *)((longlong)unaff_RDI + 0x106c1fc6) =
       *(byte *)((longlong)unaff_RDI + 0x106c1fc6) ^ (byte)((ulonglong)param_1 >> 8);
  uVar3 = func_0xd9aac4b6();
  cVar2 = *unaff_RSI;
  lVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),cVar2);
  out(param_2,cVar2);
  pcVar1 = (char *)(lVar4 + 0x198f56fe);
  *pcVar1 = *pcVar1 + cVar2;
  *unaff_RDI = *(undefined4 *)(unaff_RSI + 1);
  unaff_RDI[(ulonglong)((unaff_retaddr & 0x400) != 0) * -2 + 1] = (int)lVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac40f FUN_14d7ac40f body=3 status=ok
// SIG undefined FUN_14d7ac40f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac40f(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac413 FUN_14d7ac413 body=2 status=ok
// SIG undefined FUN_14d7ac413(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac413(void)

{
  undefined4 in_EAX;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  byte in_CF;
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(ulonglong)(((int)&stack0x00000000 - (int)unaff_RDI) - (uint)in_CF);
  *unaff_RDI = *unaff_RSI;
  unaff_RDI[(ulonglong)((uVar1 & 0x400) != 0) * -2 + 1] = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac417 FUN_14d7ac417 body=9 status=ok
// SIG undefined FUN_14d7ac417(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac417(void)

{
  undefined4 in_EAX;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
  unaff_RDI[(ulonglong)(((ulonglong)unaff_RSI & 0x400) != 0) * -2 + 1] = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac429 FUN_14d7ac429 body=27 status=ok
// SIG undefined FUN_14d7ac429(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac429(void)

{
  byte *pbVar1;
  longlong lVar2;
  char in_AL;
  byte bVar3;
  char cVar4;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  undefined4 *unaff_RDI;
  byte unaff_R14B;
  longlong unaff_R15;
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
  
  pbVar1 = (byte *)(unaff_R15 + 0x7acc00db);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 - unaff_R14B;
  bVar3 = (in_AL + -0x47) - (bVar3 < unaff_R14B);
  cVar4 = bVar3 + 0xb1;
  if (0x4e < bVar3 && cVar4 != '\0') {
    *unaff_RDI = CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar4));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  lVar2 = CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar4)));
  *(undefined2 *)(lVar2 + -0x15) = in_FPUControlWord;
  *(undefined2 *)(lVar2 + -0x11) = in_FPUStatusWord;
  *(undefined2 *)(lVar2 + -0xd) = in_FPUTagWord;
  *(undefined8 *)(lVar2 + -1) = in_FPUDataPointer;
  *(undefined8 *)(lVar2 + -9) = in_FPUInstructionPointer;
  *(undefined2 *)(lVar2 + -3) = in_FPULastInstructionOpcode;
  *(unkbyte10 *)(lVar2 + 7) = in_ST0;
  *(unkbyte10 *)(lVar2 + 0x11) = in_ST1;
  *(unkbyte10 *)(lVar2 + 0x1b) = in_ST2;
  *(unkbyte10 *)(lVar2 + 0x25) = in_ST3;
  *(unkbyte10 *)(lVar2 + 0x2f) = in_ST4;
  *(unkbyte10 *)(lVar2 + 0x39) = in_ST5;
  *(unkbyte10 *)(lVar2 + 0x43) = in_ST6;
  *(unkbyte10 *)(lVar2 + 0x4d) = in_ST7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac45a FUN_14d7ac45a body=9 status=ok
// SIG undefined FUN_14d7ac45a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac45a(undefined8 param_1,byte *param_2)

{
  undefined1 uVar1;
  ulonglong in_RAX;
  longlong lVar2;
  bool in_ZF;
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
  
  if (!in_ZF) {
    uVar1 = in(0x10);
    in_RAX = (ulonglong)((uint)CONCAT71((int7)(in_RAX >> 8),uVar1) & 0xf5750051);
  }
  lVar2 = CONCAT71((int7)(in_RAX >> 8),(byte)in_RAX ^ *param_2);
  *(undefined2 *)(lVar2 + -0x15) = in_FPUControlWord;
  *(undefined2 *)(lVar2 + -0x11) = in_FPUStatusWord;
  *(undefined2 *)(lVar2 + -0xd) = in_FPUTagWord;
  *(undefined8 *)(lVar2 + -1) = in_FPUDataPointer;
  *(undefined8 *)(lVar2 + -9) = in_FPUInstructionPointer;
  *(undefined2 *)(lVar2 + -3) = in_FPULastInstructionOpcode;
  *(unkbyte10 *)(lVar2 + 7) = in_ST0;
  *(unkbyte10 *)(lVar2 + 0x11) = in_ST1;
  *(unkbyte10 *)(lVar2 + 0x1b) = in_ST2;
  *(unkbyte10 *)(lVar2 + 0x25) = in_ST3;
  *(unkbyte10 *)(lVar2 + 0x2f) = in_ST4;
  *(unkbyte10 *)(lVar2 + 0x39) = in_ST5;
  *(unkbyte10 *)(lVar2 + 0x43) = in_ST6;
  *(unkbyte10 *)(lVar2 + 0x4d) = in_ST7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac466 FUN_14d7ac466 body=5 status=ok
// SIG undefined FUN_14d7ac466(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac466(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  undefined8 in_RAX;
  undefined8 *puVar5;
  undefined8 *unaff_RBP;
  undefined1 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  uVar1 = *unaff_RSI;
  puVar5 = (undefined8 *)(unaff_RSI + -8);
  *(undefined8 **)(unaff_RSI + -8) = unaff_RBP;
  cVar2 = '\x15';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar5 = puVar5 + -1;
    *puVar5 = *unaff_RBP;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
  *(undefined1 **)(unaff_RSI + -0xb8) = unaff_RSI + -8;
  uVar4 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar1);
  out(param_2,uVar4);
  *unaff_RDI = *(undefined4 *)(unaff_RSI + 1);
  if (uVar4 < 0xd8ca2ecc) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar3 = (code *)swi(1);
  (*pcVar3)();
  *(undefined1 **)(unaff_RSI + -0x12e) = unaff_RSI + -8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac47d FUN_14d7ac47d body=3 status=ok
// SIG undefined FUN_14d7ac47d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac47d(undefined8 param_1,undefined2 param_2)

{
  char *pcVar1;
  char cVar2;
  uint in_EAX;
  undefined8 uVar3;
  longlong lVar4;
  char *unaff_RSI;
  undefined4 *puVar5;
  char in_SF;
  char in_OF;
  ulonglong unaff_retaddr;
  
  puVar5 = (undefined4 *)(ulonglong)in_EAX;
  if (in_OF == in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)((longlong)puVar5 + 0x106c1fc6) =
       *(byte *)((longlong)puVar5 + 0x106c1fc6) ^ (byte)((ulonglong)param_1 >> 8);
  uVar3 = func_0xd9aac4b6();
  cVar2 = *unaff_RSI;
  lVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),cVar2);
  out(param_2,cVar2);
  pcVar1 = (char *)(lVar4 + 0x198f56fe);
  *pcVar1 = *pcVar1 + cVar2;
  *puVar5 = *(undefined4 *)(unaff_RSI + 1);
  puVar5[(ulonglong)((unaff_retaddr & 0x400) != 0) * -2 + 1] = (int)lVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac486 FUN_14d7ac486 body=5 status=ok
// SIG undefined FUN_14d7ac486(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac486(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac49b FUN_14d7ac49b body=1 status=ok
// SIG undefined FUN_14d7ac49b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac49b(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac4a5 FUN_14d7ac4a5 body=22 status=ok
// SIG undefined FUN_14d7ac4a5(void)

void FUN_14d7ac4a5(longlong param_1)

{
  uint *puVar1;
  char *pcVar2;
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_BL;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  *(char *)(param_1 + -10) = *(char *)(param_1 + -10) + unaff_BL;
  puVar1 = (uint *)(unaff_RSI + 0x4b);
  *puVar1 = *puVar1 >> 0x16 | *puVar1 << 10;
  pcVar2 = (char *)(unaff_RBP + -0x2b05b7f3 +
                   (CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ 0x12) * 4);
  *pcVar2 = *pcVar2 + in_AH;
  return;
}



// FUNCTION 14d7ac4bc FUN_14d7ac4bc body=1 status=ok
// SIG undefined FUN_14d7ac4bc(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac4bc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac4c1 FUN_14d7ac4c1 body=4 status=ok
// SIG undefined FUN_14d7ac4c1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac4c1(void)

{
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac4c6 FUN_14d7ac4c6 body=2 status=ok
// SIG undefined FUN_14d7ac4c6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac4c6(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac4cb FUN_14d7ac4cb body=4 status=ok
// SIG undefined FUN_14d7ac4cb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac4cb(char param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 in_RAX;
  
  *(char *)(param_2 + 0x76c8b1) = *(char *)(param_2 + 0x76c8b1) + param_1 * '\x02';
  if ((uint)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(0x33,(char)in_RAX)) < 0xd8ca2ecc) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac4e1 FUN_14d7ac4e1 body=9 status=ok
// SIG undefined FUN_14d7ac4e1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac4e1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac4eb FUN_14d7ac4eb body=11 status=ok
// SIG undefined FUN_14d7ac4eb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac4eb(void)

{
  undefined4 in_EAX;
  
  out(0x1a,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac4fe FUN_14d7ac4fe body=2 status=ok
// SIG undefined FUN_14d7ac4fe(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac4fe(int param_1,byte param_2)

{
  byte *pbVar1;
  uint *puVar2;
  char *pcVar3;
  int *piVar4;
  undefined1 *puVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  char cVar9;
  ulonglong uVar10;
  byte bVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 in_RAX;
  undefined6 uVar15;
  ulonglong uVar16;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  char *unaff_RSI;
  int unaff_EDI;
  undefined1 in_CF;
  bool bVar17;
  int aiStack_8 [2];
  
  uVar15 = (undefined6)((ulonglong)in_RAX >> 0x10);
  puVar5 = (undefined1 *)(CONCAT62(uVar15,CONCAT11(100,(char)in_RAX)) + -0x49650000);
  bVar11 = ((byte)param_1 & 0x1f) % 9;
  uVar12 = CONCAT11(in_CF,*puVar5);
  uVar12 = uVar12 << bVar11 | uVar12 >> 9 - bVar11;
  *puVar5 = (char)uVar12;
  bVar17 = (uVar12 & 0x100) != 0;
  pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x13);
  bVar11 = *pbVar1;
  bVar6 = *pbVar1;
  *pbVar1 = (bVar6 - param_2) - bVar17;
  aiStack_8[0] = -0x75bfe6e8;
  aiStack_8[1] = -1;
  uVar16 = (ulonglong)
           ((param_1 - *(int *)((longlong)aiStack_8 + unaff_RBP)) -
           (uint)(bVar11 < param_2 || (byte)(bVar6 - param_2) < bVar17));
  uVar13 = (unaff_EDI + 4) * 2;
  uVar10 = (CONCAT62(uVar15,(short)(char)in_RAX * (short)*unaff_RSI) & 0xffffffff) *
           (ulonglong)*(uint *)(uVar16 + 0x7e0a0518);
  puVar2 = (uint *)(unaff_RSI + 0x18);
  uVar8 = *puVar2;
  uVar14 = (uint)uVar10;
  *puVar2 = *puVar2 + uVar14;
  pcVar3 = (char *)(uVar16 + 10);
  cVar7 = *pcVar3;
  cVar9 = *pcVar3 - (char)unaff_RBP;
  *pcVar3 = cVar9 - CARRY4(uVar8,uVar14);
  if (*pcVar3 != '\0' &&
      (SBORROW1(cVar7,(char)unaff_RBP) != SBORROW1(cVar9,CARRY4(uVar8,uVar14))) == *pcVar3 < '\0') {
    piVar4 = (int *)((uVar10 >> 0x20) - 4);
    *piVar4 = *piVar4 + uVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iRam000000011e675328 = iRam000000011e675328 + (int)(uVar10 >> 0x20);
  *(uint *)(unaff_RSI + 0x44) = *(uint *)(unaff_RSI + 0x44) | uVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac509 FUN_14d7ac509 body=7 status=ok
// SIG undefined FUN_14d7ac509(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac509(undefined8 param_1,char param_2)

{
  longlong unaff_RDI;
  bool in_OF;
  
  if (in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RDI + -0x7a757e9b) = *(char *)(unaff_RDI + -0x7a757e9b) + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac51a FUN_14d7ac51a body=2 status=ok
// SIG undefined FUN_14d7ac51a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac51a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac53f FUN_14d7ac53f body=5 status=ok
// SIG undefined FUN_14d7ac53f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac53f(undefined8 param_1,longlong param_2)

{
  *(uint *)(param_2 + 0xff2519ea85) = *(uint *)(param_2 + 0xff2519ea85) | 0x605c200;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac544 FUN_14d7ac544 body=12 status=ok
// SIG undefined FUN_14d7ac544(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac544(undefined8 param_1,longlong param_2)

{
  *(uint *)(param_2 + 0xff2519ea85) = *(uint *)(param_2 + 0xff2519ea85) | 0x605c200;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac551 FUN_14d7ac551 body=9 status=ok
// SIG undefined FUN_14d7ac551(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac551(undefined4 param_1)

{
  longlong unaff_RSI;
  char *unaff_RDI;
  float10 in_ST0;
  
  *(short *)(unaff_RSI + 0x2d) = (short)ROUND(in_ST0);
  *unaff_RDI = *unaff_RDI + (char)((uint)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac55a FUN_14d7ac55a body=1 status=ok
// SIG undefined FUN_14d7ac55a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac55a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac55f FUN_14d7ac55f body=6 status=ok
// SIG undefined FUN_14d7ac55f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac55f(char param_1,undefined8 param_2)

{
  uint *puVar1;
  longlong in_RAX;
  char cVar2;
  longlong unaff_RSI;
  
  cVar2 = (char)param_2 + *(char *)(in_RAX + -0x56ffa5c5);
  uRam09008caf8ba75048 = (undefined1)in_RAX;
  if (cVar2 < '\0') {
    *(char *)(unaff_RSI + 0x6c) = *(char *)(unaff_RSI + 0x6c) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar1 = (uint *)(CONCAT71((int7)((ulonglong)param_2 >> 8),cVar2) + 0xff2519ea85);
  *puVar1 = *puVar1 | 0x605c200;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac56d FUN_14d7ac56d body=4 status=ok
// SIG undefined FUN_14d7ac56d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac56d(char param_1,longlong param_2)

{
  uint in_EAX;
  longlong unaff_RSI;
  uint unaff_EDI;
  
  if ((int)(in_EAX | unaff_EDI) < 0) {
    *(char *)(unaff_RSI + 0x6c) = *(char *)(unaff_RSI + 0x6c) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)(param_2 + 0xff2519ea85) = *(uint *)(param_2 + 0xff2519ea85) | 0x605c200;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac571 FUN_14d7ac571 body=10 status=ok
// SIG undefined FUN_14d7ac571(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac571(char param_1)

{
  longlong unaff_RSI;
  
  *(char *)(unaff_RSI + 0x6c) = *(char *)(unaff_RSI + 0x6c) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac582 FUN_14d7ac582 body=5 status=ok
// SIG undefined FUN_14d7ac582(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac582(void)

{
  char *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac58a FUN_14d7ac58a body=8 status=ok
// SIG undefined FUN_14d7ac58a(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7ac5a7) overlaps instruction at (ram,0x00014d7ac5a3)
    */

void FUN_14d7ac58a(longlong param_1)

{
  longlong unaff_RBX;
  float10 in_ST0;
  
  *(longlong *)(param_1 + 0x2773ec75) = (longlong)in_ST0;
  *(char *)(unaff_RBX + 0x23) = *(char *)(unaff_RBX + 0x23) + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac593 FUN_14d7ac593 body=3 status=ok
// SIG undefined FUN_14d7ac593(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7ac5a7) overlaps instruction at (ram,0x00014d7ac5a3)
    */

void FUN_14d7ac593(void)

{
  in(1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac597 FUN_14d7ac597 body=19 status=ok
// SIG undefined FUN_14d7ac597(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7ac5a7) overlaps instruction at (ram,0x00014d7ac5a3)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7ac597(void)

{
  int unaff_EBX;
  
  _DAT_1b37bbd37 = _DAT_1b37bbd37 + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac5ae FUN_14d7ac5ae body=2 status=ok
// SIG undefined FUN_14d7ac5ae(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac5ae(void)

{
  undefined4 in_EAX;
  
  out(0x68,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac5c3 FUN_14d7ac5c3 body=1 status=ok
// SIG undefined FUN_14d7ac5c3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac5c3(char param_1,char *param_2)

{
  undefined4 in_EAX;
  
  out(10,in_EAX);
  *param_2 = *param_2 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac5c7 FUN_14d7ac5c7 body=2 status=ok
// SIG undefined FUN_14d7ac5c7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac5c7(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac5cc FUN_14d7ac5cc body=2 status=ok
// SIG undefined FUN_14d7ac5cc(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac5cc(char param_1,char *param_2)

{
  undefined4 in_EAX;
  
  out(10,in_EAX);
  *param_2 = *param_2 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac5d1 FUN_14d7ac5d1 body=3 status=ok
// SIG undefined FUN_14d7ac5d1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac5d1(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined1 *unaff_RDI;
  bool in_OF;
  
  if (!in_OF) {
    uVar1 = in(param_2);
    *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac5d5 FUN_14d7ac5d5 body=7 status=ok
// SIG undefined FUN_14d7ac5d5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac5d5(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac5de FUN_14d7ac5de body=7 status=ok
// SIG undefined FUN_14d7ac5de(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac5de(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac5e6 FUN_14d7ac5e6 body=4 status=ok
// SIG undefined FUN_14d7ac5e6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac5e6(void)

{
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac5ea FUN_14d7ac5ea body=1 status=ok
// SIG undefined FUN_14d7ac5ea(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac5ea(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac5fe FUN_14d7ac5fe body=36 status=ok
// SIG undefined FUN_14d7ac5fe(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7ac67e) overlaps instruction at (ram,0x00014d7ac67d)
    */

void FUN_14d7ac5fe(longlong param_1)

{
  code *pcVar1;
  int in_EAX;
  longlong unaff_RSI;
  int unaff_EDI;
  undefined4 unaff_0000003c;
  bool in_CF;
  bool in_ZF;
  bool bVar2;
  float10 in_ST0;
  
  if ((!in_CF && !in_ZF) && (in_CF)) {
    return;
  }
  bVar2 = (in_EAX + 0x6d0f17e4U | 0xac56a300) != 0;
  if (param_1 == 1 || bVar2) {
    pcVar1 = (code *)swi(1);
    (*pcVar1)();
    return;
  }
  if (bVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(double *)(unaff_RSI + 0x56) = (double)in_ST0;
  *(int *)CONCAT44(unaff_0000003c,unaff_EDI) =
       *(int *)CONCAT44(unaff_0000003c,unaff_EDI) + unaff_EDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac619 FUN_14d7ac619 body=10 status=ok
// SIG undefined FUN_14d7ac619(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac619(undefined8 param_1,undefined2 param_2)

{
  undefined4 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac62b FUN_14d7ac62b body=9 status=ok
// SIG undefined FUN_14d7ac62b(void)

void FUN_14d7ac62b(void)

{
  longlong in_RAX;
  char unaff_BH;
  
  *(char *)(in_RAX + -0x3873655c) = *(char *)(in_RAX + -0x3873655c) + unaff_BH;
  return;
}



// FUNCTION 14d7ac646 FUN_14d7ac646 body=5 status=ok
// SIG undefined FUN_14d7ac646(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac646(int *param_1)

{
  *param_1 = *param_1 << ((byte)param_1 & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac64e FUN_14d7ac64e body=3 status=ok
// SIG undefined FUN_14d7ac64e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac64e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac665 FUN_14d7ac665 body=2 status=ok
// SIG undefined FUN_14d7ac665(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac665(undefined8 param_1,undefined2 param_2)

{
  undefined1 in_AL;
  char unaff_BL;
  longlong unaff_RBP;
  
  *(char *)(unaff_RBP + -0x2d) = *(char *)(unaff_RBP + -0x2d) + unaff_BL;
  out(param_2,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac669 FUN_14d7ac669 body=7 status=ok
// SIG undefined FUN_14d7ac669(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac669(longlong param_1,undefined2 param_2,char param_3)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  longlong in_RAX;
  char cVar10;
  longlong lVar9;
  uint unaff_EBP;
  char *unaff_RSI;
  undefined1 *unaff_RDI;
  undefined4 *puVar11;
  char *in_R10;
  char in_SF;
  char in_OF;
  
  uVar5 = in(param_2);
  *unaff_RDI = uVar5;
  if (in_OF != in_SF) {
    *(char *)(in_RAX + 0x41) = *(char *)(in_RAX + 0x41) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  lVar9 = param_1 + -1;
  cVar4 = *unaff_RSI;
  pcVar8 = (char *)(CONCAT71((int7)((ulonglong)(unaff_RDI + 1) >> 8),cVar4) & 0xffffffff);
  *in_R10 = *in_R10 + param_3;
  uVar7 = *(uint *)(pcVar8 + (ulonglong)~unaff_EBP + 0x1606d5eb);
  iRam00000000008f8675 = iRam00000000008f8675 + -0x8f86c8;
  LOCK();
  pcVar2 = (char *)(param_1 + -0x75ff5210 + (longlong)pcVar8 * 2);
  cVar3 = *pcVar2;
  cVar10 = (char)((ulonglong)lVar9 >> 8);
  *pcVar2 = *pcVar2 + cVar10;
  UNLOCK();
  if (SCARRY1(cVar3,cVar10) != *pcVar2 < '\0') {
    *pcVar8 = *pcVar8 + cVar4;
    pbVar1 = (byte *)((ulonglong)uVar7 * 4 + 0x8f86c8);
    *pbVar1 = *pbVar1 ^ 0x86;
    puVar11 = (undefined4 *)
              (CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + -0x25) & 0xffffffff);
    while (lVar9 != 0) {
      lVar9 = lVar9 + -1;
      uVar5 = in(param_2);
      *(undefined1 *)puVar11 = uVar5;
      puVar11 = (undefined4 *)((longlong)puVar11 + 1);
    }
    uVar6 = in(param_2);
    *puVar11 = uVar6;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac68b FUN_14d7ac68b body=2 status=ok
// SIG undefined FUN_14d7ac68b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac68b(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac68f FUN_14d7ac68f body=5 status=ok
// SIG undefined FUN_14d7ac68f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac68f(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  *param_3 = *param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac697 FUN_14d7ac697 body=2 status=ok
// SIG undefined FUN_14d7ac697(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac697(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  *param_3 = *param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac6a2 FUN_14d7ac6a2 body=45 status=ok
// SIG undefined FUN_14d7ac6a2(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7ac708) overlaps instruction at (ram,0x00014d7ac703)
    */

void FUN_14d7ac6a2(longlong param_1,ulonglong param_2,char param_3)

{
  uint *puVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined2 uVar11;
  char *pcVar12;
  byte bVar13;
  undefined8 in_RAX;
  byte *pbVar14;
  undefined7 uVar15;
  longlong lVar16;
  uint uVar17;
  undefined8 *unaff_RBP;
  undefined8 uVar19;
  char *unaff_RSI;
  undefined4 *unaff_RDI;
  undefined4 *puVar20;
  char *in_R10;
  bool in_ZF;
  char in_SF;
  char in_OF;
  uint uVar18;
  
  if (in_ZF || in_OF != in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar4 = *unaff_RSI;
  *(int *)(unaff_RSI + -0x770a55cf) = *(int *)(unaff_RSI + -0x770a55cf) - (int)unaff_RBP;
  pbVar14 = (byte *)(param_2 & 0xffffffff);
  uVar11 = (undefined2)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar4);
  uVar19 = *unaff_RBP;
  bVar3 = *pbVar14;
  bVar13 = (byte)pbVar14;
  *pbVar14 = *pbVar14 + bVar13;
  puVar1 = (uint *)((longlong)unaff_RDI + 0xb3500fb);
  uVar9 = (uint)CARRY1(bVar3,bVar13);
  uVar8 = *puVar1;
  uVar18 = (uint)uVar19;
  uVar10 = uVar18 - *puVar1;
  uVar17 = uVar10 - uVar9;
  uVar15 = (undefined7)((ulonglong)pbVar14 >> 8);
  if (uVar17 == 0) {
    *unaff_RBP = unaff_RDI;
    *unaff_RDI = (int)CONCAT71(uVar15,bVar13 + 0x7d + (uVar18 < uVar8 || uVar10 < uVar9));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 != 1) {
    from_bcd(*(unkbyte10 *)((longlong)pbVar14 * 2 + 0x2985064b));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (SBORROW4(uVar18,*puVar1) != SBORROW4(uVar10,uVar9)) {
    uVar6 = in(uVar11);
    *(undefined1 *)unaff_RDI = uVar6;
    if (-1 < (int)uVar17) {
      pbVar14[0x41] = pbVar14[0x41] + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    lVar16 = -1;
    cVar5 = unaff_RSI[1];
    pcVar12 = (char *)(CONCAT71((int7)((ulonglong)((longlong)unaff_RDI + 1) >> 8),cVar5) &
                      0xffffffff);
    *in_R10 = *in_R10 + param_3;
    uVar8 = *(uint *)(pcVar12 + (ulonglong)~uVar17 + 0x1606d5eb);
    iRam00000000008f8675 = iRam00000000008f8675 + -0x8f86c8;
    LOCK();
    pcVar2 = (char *)((longlong)pcVar12 * 2 + -0x75ff5210);
    cVar4 = *pcVar2;
    *pcVar2 = *pcVar2 + -1;
    UNLOCK();
    if (SCARRY1(cVar4,-1) != *pcVar2 < '\0') {
      *pcVar12 = *pcVar12 + cVar5;
      *unaff_RBP = unaff_RBP + 1;
      pbVar14 = (byte *)((ulonglong)uVar8 * 4 + 0x8f86c8);
      *pbVar14 = *pbVar14 ^ 0x86;
      puVar20 = (undefined4 *)CONCAT71(uVar15,bVar13 - 0x25);
      while (lVar16 != 0) {
        lVar16 = lVar16 + -1;
        uVar6 = in(uVar11);
        *(undefined1 *)puVar20 = uVar6;
        puVar20 = (undefined4 *)((longlong)puVar20 + 1);
      }
      uVar7 = in(uVar11);
      *puVar20 = uVar7;
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)((ulonglong)uVar17 - 0x2d) = *(char *)((ulonglong)uVar17 - 0x2d) + '\x1e';
  out(uVar11,bVar13);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac6d2 FUN_14d7ac6d2 body=11 status=ok
// SIG undefined FUN_14d7ac6d2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac6d2(undefined8 *param_1)

{
  undefined4 in_EAX;
  undefined4 *unaff_RDI;
  char in_CF;
  undefined8 unaff_retaddr;
  
  *param_1 = unaff_retaddr;
  *unaff_RDI = CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + '}' + in_CF);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac6e7 FUN_14d7ac6e7 body=4 status=ok
// SIG undefined FUN_14d7ac6e7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac6e7(longlong param_1,undefined2 param_2,char param_3)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  undefined8 in_RAX;
  char cVar10;
  longlong lVar9;
  uint unaff_EBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  undefined4 *puVar11;
  char *in_R10;
  
  *unaff_RDI = *unaff_RSI;
  lVar9 = param_1 + -1;
  cVar4 = *(char *)(unaff_RSI + 1);
  pcVar8 = (char *)(CONCAT71((int7)((ulonglong)((longlong)unaff_RDI + 5) >> 8),cVar4) & 0xffffffff);
  *in_R10 = *in_R10 + param_3;
  uVar7 = *(uint *)(pcVar8 + (ulonglong)~unaff_EBP + 0x1606d5eb);
  iRam00000000008f8675 = iRam00000000008f8675 + -0x8f86c8;
  LOCK();
  pcVar2 = (char *)(param_1 + -0x75ff5210 + (longlong)pcVar8 * 2);
  cVar3 = *pcVar2;
  cVar10 = (char)((ulonglong)lVar9 >> 8);
  *pcVar2 = *pcVar2 + cVar10;
  UNLOCK();
  if (SCARRY1(cVar3,cVar10) != *pcVar2 < '\0') {
    *pcVar8 = *pcVar8 + cVar4;
    pbVar1 = (byte *)((ulonglong)uVar7 * 4 + 0x8f86c8);
    *pbVar1 = *pbVar1 ^ 0x86;
    puVar11 = (undefined4 *)
              (CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + -0x25) & 0xffffffff);
    while (lVar9 != 0) {
      lVar9 = lVar9 + -1;
      uVar5 = in(param_2);
      *(undefined1 *)puVar11 = uVar5;
      puVar11 = (undefined4 *)((longlong)puVar11 + 1);
    }
    uVar6 = in(param_2);
    *puVar11 = uVar6;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac6eb FUN_14d7ac6eb body=21 status=ok
// SIG undefined FUN_14d7ac6eb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac6eb(longlong param_1,undefined2 param_2,char param_3)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  undefined8 in_RAX;
  char cVar10;
  longlong lVar9;
  uint unaff_EBP;
  char *unaff_RSI;
  longlong unaff_RDI;
  undefined4 *puVar11;
  char *in_R10;
  
  lVar9 = param_1 + -1;
  cVar4 = *unaff_RSI;
  pcVar8 = (char *)(CONCAT71((int7)((ulonglong)(unaff_RDI + 1) >> 8),cVar4) & 0xffffffff);
  *in_R10 = *in_R10 + param_3;
  uVar7 = *(uint *)(pcVar8 + (ulonglong)~unaff_EBP + 0x1606d5eb);
  iRam00000000008f8675 = iRam00000000008f8675 + -0x8f86c8;
  LOCK();
  pcVar2 = (char *)(param_1 + -0x75ff5210 + (longlong)pcVar8 * 2);
  cVar3 = *pcVar2;
  cVar10 = (char)((ulonglong)lVar9 >> 8);
  *pcVar2 = *pcVar2 + cVar10;
  UNLOCK();
  if (SCARRY1(cVar3,cVar10) != *pcVar2 < '\0') {
    *pcVar8 = *pcVar8 + cVar4;
    pbVar1 = (byte *)((ulonglong)uVar7 * 4 + 0x8f86c8);
    *pbVar1 = *pbVar1 ^ 0x86;
    puVar11 = (undefined4 *)
              (CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + -0x25) & 0xffffffff);
    while (lVar9 != 0) {
      lVar9 = lVar9 + -1;
      uVar5 = in(param_2);
      *(undefined1 *)puVar11 = uVar5;
      puVar11 = (undefined4 *)((longlong)puVar11 + 1);
    }
    uVar6 = in(param_2);
    *puVar11 = uVar6;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac702 FUN_14d7ac702 body=38 status=ok
// SIG undefined FUN_14d7ac702(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac702(longlong param_1,undefined2 param_2)

{
  int *piVar1;
  byte *pbVar2;
  char *pcVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  uint uVar7;
  byte bVar8;
  int in_EAX;
  undefined4 in_register_00000004;
  char cVar9;
  byte unaff_BL;
  char cVar10;
  char unaff_BH;
  byte bVar11;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  undefined4 *unaff_RDI;
  
  bVar8 = (byte)in_EAX;
  cVar10 = unaff_BL + bVar8;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX + (uint)CARRY1(unaff_BL,bVar8);
  bVar11 = unaff_BH + bVar8;
  uVar7 = *(uint *)(unaff_RBP + 0x1606d5eb + CONCAT44(in_register_00000004,in_EAX));
  piVar1 = (int *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(bVar11,cVar10))) + -0x53
                  );
  *piVar1 = *piVar1 - CONCAT22(unaff_0000001a,CONCAT11(bVar11,cVar10));
  LOCK();
  pcVar3 = (char *)(param_1 + -0x75ff520f + CONCAT44(in_register_00000004,in_EAX) * 2);
  cVar4 = *pcVar3;
  cVar9 = (char)((ulonglong)param_1 >> 8);
  *pcVar3 = *pcVar3 + cVar9;
  UNLOCK();
  if (SCARRY1(cVar4,cVar9) == *pcVar3 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + bVar8;
  pbVar2 = (byte *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(bVar11,cVar10))) +
                   (ulonglong)uVar7 * 4);
  *pbVar2 = *pbVar2 ^ bVar11;
  while (param_1 != 0) {
    param_1 = param_1 + -1;
    uVar5 = in(param_2);
    *(undefined1 *)unaff_RDI = uVar5;
    unaff_RDI = (undefined4 *)((longlong)unaff_RDI + 1);
  }
  uVar6 = in(param_2);
  *unaff_RDI = uVar6;
  return;
}



// FUNCTION 14d7ac71f FUN_14d7ac71f body=2 status=ok
// SIG undefined FUN_14d7ac71f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac71f(undefined8 param_1,undefined2 param_2)

{
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac73e FUN_14d7ac73e body=1 status=ok
// SIG undefined FUN_14d7ac73e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7ac744) overlaps instruction at (ram,0x00014d7ac73f)
    */

void FUN_14d7ac73e(ulonglong param_1,undefined8 param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  byte bVar7;
  byte *in_RAX;
  char *pcVar8;
  longlong lVar9;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *puVar10;
  longlong unaff_RBP;
  undefined4 *unaff_RDI;
  undefined4 *puVar11;
  longlong alStackX_8 [4];
  
  puVar6 = (undefined1 *)register0x00000020;
  do {
    puVar11 = unaff_RDI;
    puVar10 = puVar6;
    pbVar1 = (byte *)(unaff_RBP + 0x6d3dd789 +
                     CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 4);
    *pbVar1 = *pbVar1 | unaff_BH;
    lVar5 = *(longlong *)(puVar10 + 8);
    unaff_RDI = (undefined4 *)((longlong)puVar11 + 1);
    puVar6 = puVar10 + 0x10;
  } while ((POPCOUNT((byte)(param_1 >> 8) & (byte)((ulonglong)param_2 >> 8)) & 1U) == 0);
  bVar7 = (byte)in_RAX ^ *in_RAX;
  pcVar8 = (char *)(param_1 & 0xffffffff);
  lVar9 = (CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar7) & 0xffffffff) - 1;
  if (lVar9 != 0 && bVar7 == 0) {
    *pcVar8 = *pcVar8 + (char)pcVar8;
    *(undefined1 **)(puVar10 + 8) = puVar10 + 0x10;
    pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + lVar5 * 4);
    *pbVar1 = *pbVar1 ^ unaff_BH;
    while (lVar9 != 0) {
      lVar9 = lVar9 + -1;
      uVar2 = in((short)param_2);
      *(undefined1 *)unaff_RDI = uVar2;
      unaff_RDI = (undefined4 *)((longlong)unaff_RDI + 1);
    }
    uVar3 = in((short)param_2);
    *unaff_RDI = uVar3;
    return;
  }
  uVar4 = (int)lVar9 - *(int *)(unaff_RBP + 0xff5925);
  LOCK();
  *(char *)((longlong)puVar11 + (ulonglong)uVar4 * 2 + -0x74c3ea63) = (char)uVar4;
  UNLOCK();
  *(longlong *)(puVar10 + 0x10) = lVar5;
  from_bcd(*(unkbyte10 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac770 FUN_14d7ac770 body=28 status=ok
// SIG undefined FUN_14d7ac770(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7ac7fa) overlaps instruction at (ram,0x00014d7ac7f9)
    */

void FUN_14d7ac770(longlong param_1,undefined2 param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  char *in_RAX;
  longlong lVar7;
  byte bVar8;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  uint unaff_EBP;
  uint uVar9;
  longlong unaff_RSI;
  byte *unaff_RDI;
  byte *pbVar11;
  float10 in_ST0;
  uint *puVar10;
  
  uVar9 = unaff_EBP & (uint)param_1;
  puVar10 = (uint *)(ulonglong)uVar9;
  if ((POPCOUNT(uVar9 & 0xff) & 1U) != 0) {
    in_RAX[0xff00000000] = in_RAX[0xff00000000] - (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  lVar7 = param_1 + -1;
  if (lVar7 == 0) {
    *in_RAX = *in_RAX + (char)((ulonglong)in_RAX >> 8);
    *(double *)(in_RAX + unaff_RSI * 8) = (double)in_ST0;
    bVar2 = *unaff_RDI;
    bVar8 = (byte)param_2;
    *unaff_RDI = *unaff_RDI + bVar8;
    uVar5 = (uint)in_RAX + 0xb81ac8e;
    uVar6 = uVar5 + CARRY1(bVar2,bVar8);
    lVar7 = param_1 + -2;
    if (lVar7 != 0 && uVar6 == 0) {
      LOCK();
      *(byte *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
               -0x72) = unaff_BH;
      UNLOCK();
      pcVar1 = (char *)((ulonglong)uVar6 + 0x3c + unaff_RSI);
      *pcVar1 = *pcVar1 + bVar8;
      pbVar11 = unaff_RDI + -1;
      bVar2 = in(param_2);
      *unaff_RDI = bVar2;
      goto code_r0x00014d7ac795;
    }
    cVar4 = ((char)uVar6 + ';') -
            (0xf47e5371 < (uint)in_RAX || CARRY4(uVar5,(uint)CARRY1(bVar2,bVar8)));
    uVar5 = CONCAT31((int3)(uVar6 >> 8),cVar4);
    *puVar10 = *puVar10 & uVar9;
    *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)(uVar6 >> 8);
    register0x00000020 =
         (BADSPACEBASE *)
         (ulonglong)((uint)&stack0x00000000 ^ CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
    *(char *)(param_1 + 0x347ea7) = *(char *)(param_1 + 0x347ea7) + cVar4;
    cVar4 = unaff_BH +
            *(char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)))
                      + -0x5f61e4fd + (longlong)puVar10 * 4);
    if (cVar4 != '\0') {
      if ((POPCOUNT(cVar4) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar5 = uVar5 & *(uint *)(unaff_RSI + 0x48028e7b);
    *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)uVar5;
    unaff_BH = 0;
  }
  else {
    *in_RAX = *in_RAX + (char)in_RAX;
  }
  *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
  pbVar11 = (byte *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                    unaff_RSI * 4);
  *pbVar11 = *pbVar11 ^ unaff_BH;
  pbVar11 = unaff_RDI;
  while (lVar7 != 0) {
    lVar7 = lVar7 + -1;
    bVar2 = in(param_2);
    *pbVar11 = bVar2;
    pbVar11 = pbVar11 + -1;
  }
code_r0x00014d7ac795:
  uVar3 = in(param_2);
  *(undefined4 *)pbVar11 = uVar3;
  return;
}



// FUNCTION 14d7ac774 FUN_14d7ac774 body=5 status=ok
// SIG undefined FUN_14d7ac774(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac774(void)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0xff00000000);
  *pcVar1 = *pcVar1 - in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac7c6 FUN_14d7ac7c6 body=3 status=ok
// SIG undefined FUN_14d7ac7c6(void)

/* WARNING: Instruction at (ram,0x00014d7ac7c7) overlaps instruction at (ram,0x00014d7ac7c6)
    */

void FUN_14d7ac7c6(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  int *in_RAX;
  byte bVar6;
  char cVar7;
  char cVar8;
  byte unaff_BL;
  undefined7 unaff_00000019;
  undefined8 *puVar9;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char *unaff_RDI;
  undefined1 uVar5;
  
  cVar8 = (char)((ulonglong)param_2 >> 8);
  cVar7 = (char)param_2;
  bVar6 = (byte)((ulonglong)param_1 >> 8);
  uVar5 = (undefined1)param_1;
  while( true ) {
    *(int *)(unaff_RSI + unaff_RBP * 8) = (int)unaff_RDI;
    if ((int)in_RAX < *in_RAX) break;
    pcVar3 = unaff_RDI + 1;
    *unaff_RDI = (char)in_RAX - (char)*in_RAX;
    uVar4 = in(CONCAT11(cVar8,cVar7));
    *pcVar3 = *pcVar3 + (char)uVar4;
    pcVar2 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 0x12dad3b5);
    *pcVar2 = *pcVar2 << 1;
    *(char *)((ulonglong)uVar4 - 0x5f) = *(char *)((ulonglong)uVar4 - 0x5f) + cVar7;
    out(0x56,(char)uVar4);
    *(char *)(unaff_RBP + 0x5101267d) = *(char *)(unaff_RBP + 0x5101267d) + cVar7;
    in_RAX = (int *)((ulonglong)pcVar3 & 0xffffffff);
    unaff_RDI = (char *)(ulonglong)uVar4;
    puVar9 = (undefined8 *)((longlong)register0x00000020 + -8);
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
    *puVar9 = CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(bVar6,uVar5));
    cVar8 = cVar8 + (char)*in_RAX + (*(byte *)CONCAT71(unaff_00000019,unaff_BL) < unaff_BL);
    uVar5 = 0x89;
  }
  pbVar1 = (byte *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(cVar8,cVar7)) + 0x3e);
  *pbVar1 = *pbVar1 ^ bVar6;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7ac7cb FUN_14d7ac7cb body=8 status=ok
// SIG undefined FUN_14d7ac7cb(void)

void FUN_14d7ac7cb(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  int in_EAX;
  int *piVar5;
  undefined1 uVar6;
  byte bVar7;
  char cVar8;
  char cVar9;
  byte unaff_BL;
  undefined7 unaff_00000019;
  undefined8 *puVar10;
  longlong unaff_RBP;
  undefined1 *unaff_RDI;
  char in_SF;
  char in_OF;
  
  cVar9 = (char)((ulonglong)param_2 >> 8);
  cVar8 = (char)param_2;
  bVar7 = (byte)((ulonglong)param_1 >> 8);
  uVar6 = (undefined1)param_1;
  while (in_OF == in_SF) {
    pcVar3 = unaff_RDI + 1;
    *unaff_RDI = (char)in_EAX;
    uVar4 = in(CONCAT11(cVar9,cVar8));
    *pcVar3 = *pcVar3 + (char)uVar4;
    pcVar2 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 0x12dad3b5);
    *pcVar2 = *pcVar2 << 1;
    *(char *)((ulonglong)uVar4 - 0x5f) = *(char *)((ulonglong)uVar4 - 0x5f) + cVar8;
    out(0x56,(char)uVar4);
    *(char *)(unaff_RBP + 0x5101267d) = *(char *)(unaff_RBP + 0x5101267d) + cVar8;
    piVar5 = (int *)((ulonglong)pcVar3 & 0xffffffff);
    unaff_RDI = (undefined1 *)(ulonglong)uVar4;
    puVar10 = (undefined8 *)((longlong)register0x00000020 + -8);
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
    *puVar10 = CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(bVar7,uVar6));
    cVar9 = cVar9 + (char)*piVar5 + (*(byte *)CONCAT71(unaff_00000019,unaff_BL) < unaff_BL);
    uVar6 = 0x89;
    in_EAX = (int)pcVar3 - *piVar5;
    in_SF = in_EAX < 0;
    in_OF = SBORROW4((int)pcVar3,*piVar5);
  }
  pbVar1 = (byte *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(cVar9,cVar8)) + 0x3e);
  *pbVar1 = *pbVar1 ^ bVar7;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7ac7f9 FUN_14d7ac7f9 body=20 status=ok
// SIG undefined FUN_14d7ac7f9(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7ac7fa) overlaps instruction at (ram,0x00014d7ac7f9)
    */

void FUN_14d7ac7f9(longlong param_1,undefined2 param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint in_EAX;
  byte unaff_BL;
  char unaff_BH;
  char cVar5;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
  
  cVar5 = unaff_BH +
          *(char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x5f61e4fd +
                   unaff_RBP * 4);
  if (cVar5 == '\0') {
    uVar4 = in_EAX & *(uint *)(unaff_RSI + 0x48028e7b);
    *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
    puVar1 = (undefined1 *)(CONCAT62(unaff_0000001a,(ushort)unaff_BL) + unaff_RSI * 4);
    *puVar1 = *puVar1;
    while (param_1 != 0) {
      param_1 = param_1 + -1;
      uVar2 = in(param_2);
      *(undefined1 *)unaff_RDI = uVar2;
      unaff_RDI = (undefined4 *)((longlong)unaff_RDI + 1);
    }
    uVar3 = in(param_2);
    *unaff_RDI = uVar3;
    return;
  }
  if ((POPCOUNT(cVar5) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac81b FUN_14d7ac81b body=3 status=ok
// SIG undefined FUN_14d7ac81b(void)

void FUN_14d7ac81b(void)

{
  return;
}



// FUNCTION 14d7ac82d FUN_14d7ac82d body=5 status=ok
// SIG undefined FUN_14d7ac82d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac82d(void)

{
  byte *pbVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  
  pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
                   CONCAT44(in_register_00000004,in_EAX) * 8);
  *pbVar1 = *pbVar1 & unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac836 FUN_14d7ac836 body=1 status=ok
// SIG undefined FUN_14d7ac836(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac836(undefined8 param_1,undefined2 param_2)

{
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac83c FUN_14d7ac83c body=17 status=ok
// SIG undefined FUN_14d7ac83c(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7ac83c(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  char *pcVar2;
  uint *unaff_RDI;
  
  uVar1 = ((ulonglong)param_2 << 0x20 | in_RAX & 0xffffffff) / (ulonglong)*unaff_RDI;
  pcVar2 = (char *)(uVar1 & 0xffffffff);
  _DAT_30b727360009d3f6 = (undefined4)uVar1;
  *pcVar2 = *pcVar2 + (char)pcVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac85b FUN_14d7ac85b body=3 status=ok
// SIG undefined FUN_14d7ac85b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac85b(undefined8 param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  char in_AL;
  longlong unaff_RBP;
  int unaff_EDI;
  undefined8 in_R10;
  byte in_CF;
  
  puVar2 = *(undefined1 **)(unaff_RBP + 8);
  pcVar1 = (char *)((ulonglong)(unaff_EDI + (int)&stack0x00000000 + (uint)in_CF) - 0x67d463cf);
  *pcVar1 = *pcVar1 + in_AL;
  *(undefined8 *)(unaff_RBP + 8) = in_R10;
  out(*puVar2,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac86d FUN_14d7ac86d body=3 status=ok
// SIG undefined FUN_14d7ac86d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac86d(undefined8 param_1,undefined2 param_2)

{
  undefined1 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac877 FUN_14d7ac877 body=15 status=ok
// SIG undefined FUN_14d7ac877(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac877(char *param_1,char param_2,ulonglong *param_3)

{
  char *pcVar1;
  code *pcVar2;
  undefined4 in_EAX;
  undefined4 *unaff_RBX;
  longlong unaff_RBP;
  bool in_CF;
  bool in_ZF;
  float10 in_ST0;
  float10 in_ST5;
  
  if (!in_CF && !in_ZF) {
    *param_3 = *param_3 ^ (ulonglong)param_3;
    *param_1 = *param_1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  LOCK();
  *unaff_RBX = in_EAX;
  UNLOCK();
  pcVar1 = (char *)(unaff_RBP + 7);
  *pcVar1 = *pcVar1 + (char)param_1;
  if (*pcVar1 < '\0') {
    *param_1 = *param_1 + (char)param_1 + (in_ST0 < in_ST5);
    pcVar2 = (code *)swi(1);
    (*pcVar2)();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac89a FUN_14d7ac89a body=2 status=ok
// SIG undefined FUN_14d7ac89a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac89a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac8b3 FUN_14d7ac8b3 body=10 status=ok
// SIG undefined FUN_14d7ac8b3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac8b3(char *param_1,char param_2,ulonglong *param_3)

{
  ulonglong in_R10;
  longlong in_R11;
  
  *(ulonglong *)(in_R11 + -0x53) = *(ulonglong *)(in_R11 + -0x53) & in_R10;
  *param_3 = *param_3 ^ (ulonglong)param_3;
  *param_1 = *param_1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac8ce FUN_14d7ac8ce body=7 status=ok
// SIG undefined FUN_14d7ac8ce(void)

void FUN_14d7ac8ce(void)

{
  return;
}



// FUNCTION 14d7ac8e2 FUN_14d7ac8e2 body=1 status=ok
// SIG undefined FUN_14d7ac8e2(void)

void FUN_14d7ac8e2(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7ac8ee FUN_14d7ac8ee body=14 status=ok
// SIG undefined FUN_14d7ac8ee(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac8ee(char *param_1,char param_2,ulonglong *param_3)

{
  char *pcVar1;
  code *pcVar2;
  uint in_EAX;
  uint *unaff_RBX;
  uint unaff_EBP;
  bool in_CF;
  bool in_ZF;
  char in_SF;
  char in_OF;
  float10 in_ST0;
  float10 in_ST5;
  
  if (!in_ZF && in_OF == in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_CF || in_ZF) {
    LOCK();
    *unaff_RBX = unaff_EBP & 0xffffff00;
    UNLOCK();
    pcVar1 = (char *)((ulonglong)in_EAX + 7);
    *pcVar1 = *pcVar1 + (char)param_1;
    if (*pcVar1 < '\0') {
      *param_1 = *param_1 + (char)param_1 + (in_ST0 < in_ST5);
      pcVar2 = (code *)swi(1);
      (*pcVar2)();
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_3 = *param_3 ^ (ulonglong)param_3;
  *param_1 = *param_1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac90a FUN_14d7ac90a body=4 status=ok
// SIG undefined FUN_14d7ac90a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac90a(longlong param_1,uint param_2)

{
  longlong unaff_RDI;
  
  *(uint *)(param_1 + -0x45) = *(uint *)(param_1 + -0x45) | param_2;
  *(byte *)(unaff_RDI + 0x1d) = *(byte *)(unaff_RDI + 0x1d) ^ (byte)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac90f FUN_14d7ac90f body=7 status=ok
// SIG undefined FUN_14d7ac90f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac90f(byte param_1)

{
  longlong unaff_RDI;
  
  *(byte *)(unaff_RDI + 0x1d) = *(byte *)(unaff_RDI + 0x1d) ^ param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac923 FUN_14d7ac923 body=13 status=ok
// SIG undefined FUN_14d7ac923(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac923(undefined8 param_1,longlong param_2)

{
  undefined4 in_EAX;
  undefined4 uVar1;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  bool in_CF;
  bool in_OF;
  
  if (!in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)(unaff_RBX + (ulonglong)(byte)in_EAX));
  if (!in_CF) {
    *(byte *)(param_2 + 0x44) = *(byte *)(param_2 + 0x44) >> ((byte)param_1 & 0x1f);
    *(byte *)CONCAT44(in_register_00000004,uVar1) =
         *(byte *)CONCAT44(in_register_00000004,uVar1) & (byte)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac935 FUN_14d7ac935 body=1 status=ok
// SIG undefined FUN_14d7ac935(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac935(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac939 FUN_14d7ac939 body=3 status=ok
// SIG undefined FUN_14d7ac939(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7ac95f) overlaps instruction at (ram,0x00014d7ac95e)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7ac939(longlong param_1,byte *param_2,char param_3)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  byte *in_RAX;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  ulonglong unaff_RBP;
  uint *unaff_RDI;
  byte in_CF;
  bool bVar9;
  char in_SF;
  char in_OF;
  
  if (in_OF != in_SF) {
LAB_14d7ac9a7:
    param_2[0x44] = param_2[0x44] >> ((byte)param_1 & 0x1f);
    *in_RAX = *in_RAX & (byte)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = (uint)in_RAX;
  uVar6 = (int)uVar4 >> 0x1f;
  uVar5 = uVar4 + 0xef710f91 + (uint)in_CF;
  puVar8 = &stack0xfffffffffffffff8;
  uVar4 = (uint)(0x108ef06e < uVar4 || CARRY4(uVar4 + 0xef710f91,(uint)in_CF));
  uVar2 = uVar6 + 0x43e38018;
  uVar7 = (int)uVar5 >> 0x1f;
  if ((POPCOUNT(uVar2 + uVar4 & 0xff) & 1U) == 0) {
    if (uVar6 < 0xbc1c7fe8 && !CARRY4(uVar2,uVar4)) {
      return;
    }
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (uVar6 < 0xbc1c7fe8 && !CARRY4(uVar2,uVar4)) {
    uVar5 = uVar5 & 0xd0d82f73;
    param_2 = (byte *)(unaff_RBP & 0xffffffff);
    puVar8 = &stack0xfffffffffffffff0;
    if (0 < (int)uVar5) {
      cVar3 = (byte)uVar5 + 0x3b;
      *param_2 = *param_2 << 1 | (byte)uVar5 < 0xc5;
      pcVar1 = (char *)((ulonglong)CONCAT31((int3)(uVar5 >> 8),cVar3) * 8 + -0x3a65c0c0);
      *pcVar1 = *pcVar1 + cVar3;
      in_RAX = &DAT_65b8bb18;
      bVar9 = (char)DAT_65b8baef < '\0';
      DAT_65b8baef = DAT_65b8baef << 1 | bVar9;
      if (bVar9) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_14d7ac9a7;
    }
    *unaff_RDI = uVar5;
    uVar7 = CONCAT31((int3)(unaff_RBP >> 8),(byte)unaff_RBP ^ *(byte *)(param_1 + 0x4194002a));
  }
  else if ((SCARRY4(uVar6,0x43e38018) != SCARRY4(uVar2,uVar4)) == (int)(uVar2 + uVar4) < 0) {
    out((short)((int)uVar5 >> 0x1f),(char)uVar5);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(undefined4 *)((ulonglong)uVar7 - 8) = 0x32d6006e;
  *(char *)((ulonglong)puVar8 & 0xffffffff) = *(char *)((ulonglong)puVar8 & 0xffffffff) + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac93d FUN_14d7ac93d body=1 status=ok
// SIG undefined FUN_14d7ac93d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac93d(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac945 FUN_14d7ac945 body=32 status=ok
// SIG undefined FUN_14d7ac945(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7ac95f) overlaps instruction at (ram,0x00014d7ac95e)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7ac945(longlong param_1,uint param_2,char param_3)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  uint in_EAX;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint unaff_EBX;
  undefined1 *puVar7;
  ulonglong unaff_RBP;
  uint *unaff_RDI;
  byte in_CF;
  bool bVar8;
  undefined1 auStack_8 [8];
  
  puVar7 = auStack_8;
  uVar4 = (uint)in_CF;
  uVar2 = unaff_EBX + param_2;
  uVar5 = (int)in_EAX >> 0x1f;
  if ((POPCOUNT(uVar2 + uVar4 & 0xff) & 1U) != 0) {
    if (CARRY4(unaff_EBX,param_2) || CARRY4(uVar2,uVar4)) {
      if ((SCARRY4(unaff_EBX,param_2) != SCARRY4(uVar2,uVar4)) == (int)(uVar2 + uVar4) < 0) {
        out((short)((int)in_EAX >> 0x1f),(char)in_EAX);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
    }
    else {
      uVar4 = in_EAX & 0xd0d82f73;
      pbVar6 = (byte *)(unaff_RBP & 0xffffffff);
      puVar7 = &stack0xfffffffffffffff0;
      if (0 < (int)uVar4) {
        cVar3 = (byte)uVar4 + 0x3b;
        *pbVar6 = *pbVar6 << 1 | (byte)uVar4 < 0xc5;
        pcVar1 = (char *)((ulonglong)CONCAT31((int3)(uVar4 >> 8),cVar3) * 8 + -0x3a65c0c0);
        *pcVar1 = *pcVar1 + cVar3;
        bVar8 = (char)DAT_65b8baef < '\0';
        DAT_65b8baef = DAT_65b8baef << 1 | bVar8;
        if (bVar8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        pbVar6[0x44] = pbVar6[0x44] >> ((byte)param_1 & 0x1f);
        _DAT_65b8bb18 = CONCAT11(DAT_65b8bb18_1,DAT_65b8bb18 & (byte)((ulonglong)param_1 >> 8));
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *unaff_RDI = uVar4;
      uVar5 = CONCAT31((int3)(unaff_RBP >> 8),(byte)unaff_RBP ^ *(byte *)(param_1 + 0x4194002a));
    }
    *(undefined4 *)((ulonglong)uVar5 - 8) = 0x32d6006e;
    *(char *)((ulonglong)puVar7 & 0xffffffff) = *(char *)((ulonglong)puVar7 & 0xffffffff) + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!CARRY4(unaff_EBX,param_2) && !CARRY4(uVar2,uVar4)) {
    return;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7ac96b FUN_14d7ac96b body=10 status=ok
// SIG undefined FUN_14d7ac96b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac96b(undefined8 param_1,longlong param_2,char param_3)

{
  undefined4 unaff_EBX;
  
  *(undefined4 *)(param_2 + -8) = unaff_EBX;
  *(char *)((ulonglong)&stack0x00000000 & 0xffffffff) =
       *(char *)((ulonglong)&stack0x00000000 & 0xffffffff) + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac97e FUN_14d7ac97e body=49 status=ok
// SIG undefined FUN_14d7ac97e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7ac97e(undefined8 param_1,undefined8 param_2,char param_3)

{
  byte bVar1;
  uint in_EAX;
  uint uVar2;
  char *pcVar3;
  byte *pbVar4;
  undefined4 unaff_EBX;
  ulonglong unaff_RBP;
  bool bVar5;
  uint *unaff_retaddr;
  
  uVar2 = (in_EAX | 0x6b) & 0xd0d82f73;
  pbVar4 = (byte *)(unaff_RBP & 0xffffffff);
  bVar1 = (byte)uVar2;
  if ((int)uVar2 < 1) {
    *unaff_retaddr = uVar2;
    pcVar3 = (char *)(ulonglong)CONCAT22((short)(uVar2 >> 0x10),CONCAT11(0x34,bVar1));
    *(undefined4 *)
     ((ulonglong)
      CONCAT31((int3)(unaff_RBP >> 8),
               (byte)unaff_RBP ^
               *(byte *)(CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(0x3f,(byte)param_1)) +
                        0x4194002a)) - 8) = unaff_EBX;
    *pcVar3 = *pcVar3 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar4 = *pbVar4 << 1 | bVar1 < 0xc5;
  pcVar3 = (char *)((ulonglong)CONCAT31((int3)(uVar2 >> 8),bVar1 + 0x3b) * 8 + -0x3a65c0c0);
  *pcVar3 = *pcVar3 + bVar1 + 0x3b;
  bVar5 = (char)DAT_65b8baef < '\0';
  DAT_65b8baef = DAT_65b8baef << 1 | bVar5;
  if (!bVar5) {
    pbVar4[0x44] = pbVar4[0x44] >> ((byte)param_1 & 0x1f);
    _DAT_65b8bb18 = _DAT_65b8bb18 & 0xff3f;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac9b0 FUN_14d7ac9b0 body=2 status=ok
// SIG undefined FUN_14d7ac9b0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac9b0(undefined8 param_1)

{
  char *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI - (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac9b5 FUN_14d7ac9b5 body=9 status=ok
// SIG undefined FUN_14d7ac9b5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac9b5(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ac9c2 FUN_14d7ac9c2 body=5 status=ok
// SIG undefined FUN_14d7ac9c2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ac9c2(int param_1)

{
  longlong unaff_RBP;
  bool in_SF;
  int aiStack_4b [18];
  
  if (!in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 != *(int *)((longlong)aiStack_4b + unaff_RBP)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// FUNCTION 14d7ac9cb FUN_14d7ac9cb body=4 status=ok
// SIG undefined FUN_14d7ac9cb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14d7ac9cb(void)

{
  return _DAT_6bb04316002c2f44;
}



// FUNCTION 14d7ac9cf FUN_14d7ac9cf body=12 status=ok
// SIG undefined FUN_14d7ac9cf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14d7ac9cf(void)

{
  return _DAT_6bb04316002c2f44;
}



// FUNCTION 14d7aca14 FUN_14d7aca14 body=4 status=ok
// SIG undefined FUN_14d7aca14(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aca14(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 *in_RAX;
  undefined4 unaff_EBP;
  undefined4 unaff_0000002c;
  int aiStack_4b [18];
  
  *in_RAX = (char)((ulonglong)param_1 >> 8);
  LOCK();
  uVar1 = *param_1;
  *param_1 = unaff_EBP;
  UNLOCK();
  if ((int)param_1 != *(int *)((longlong)aiStack_4b + CONCAT44(unaff_0000002c,uVar1))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// FUNCTION 14d7aca18 FUN_14d7aca18 body=8 status=ok
// SIG undefined FUN_14d7aca18(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aca18(int param_1)

{
  longlong unaff_RBP;
  int aiStack_4b [18];
  
  if (param_1 != *(int *)((longlong)aiStack_4b + unaff_RBP)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// FUNCTION 14d7aca25 FUN_14d7aca25 body=1 status=ok
// SIG undefined FUN_14d7aca25(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aca25(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aca3e FUN_14d7aca3e body=7 status=ok
// SIG undefined FUN_14d7aca3e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aca3e(void)

{
  char *in_RAX;
  
  *in_RAX = *in_RAX + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aca47 FUN_14d7aca47 body=1 status=ok
// SIG undefined FUN_14d7aca47(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aca47(void)

{
  undefined4 in_EAX;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aca4f FUN_14d7aca4f body=6 status=ok
// SIG undefined FUN_14d7aca4f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aca4f(void)

{
  in(0x17);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aca58 FUN_14d7aca58 body=7 status=ok
// SIG undefined FUN_14d7aca58(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aca58(longlong param_1,uint param_2)

{
  char *pcVar1;
  uint3 uVar2;
  uint uVar3;
  undefined1 uVar4;
  int in_EAX;
  char cVar5;
  byte bVar6;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  byte in_CF;
  undefined2 unaff_retaddr;
  
  uVar2 = (uint3)((in_EAX + -0x4922b8d6) - (uint)in_CF >> 8);
  bVar6 = (byte)unaff_EBX | *(byte *)((ulonglong)(param_2 | unaff_EBX) + 0xff00000000);
  pcVar1 = (char *)(CONCAT71((uint7)uVar2,0xfc) + 0x5959d58c);
  cVar5 = (char)((param_2 | unaff_EBX) >> 8);
  *pcVar1 = *pcVar1 + cVar5;
  uVar4 = in(0xb0);
  uVar3 = CONCAT31(uVar2,uVar4);
  pcVar1 = (char *)(CONCAT44(unaff_0000001c,CONCAT31((int3)(unaff_EBX >> 8),bVar6)) + -0x3d);
  *pcVar1 = *pcVar1 + cVar5;
  *(char *)(param_1 + -0x37) = *(char *)(param_1 + -0x37) + bVar6;
  out(unaff_retaddr,uVar3);
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aca61 FUN_14d7aca61 body=8 status=ok
// SIG undefined FUN_14d7aca61(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aca61(longlong param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  char cVar4;
  byte unaff_BL;
  byte bVar5;
  undefined7 unaff_00000019;
  undefined2 unaff_retaddr;
  undefined4 uVar3;
  
  bVar5 = unaff_BL | *(byte *)(param_2 + 0xff00000000);
  pcVar1 = (char *)((CONCAT44(in_register_00000004,in_EAX) ^ 0xfc) + 0x5959d58c);
  cVar4 = (char)((ulonglong)param_2 >> 8);
  *pcVar1 = *pcVar1 + cVar4;
  uVar2 = in(0xb0);
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),uVar2);
  pcVar1 = (char *)(CONCAT71(unaff_00000019,bVar5) + -0x3d);
  *pcVar1 = *pcVar1 + cVar4;
  *(char *)(param_1 + -0x37) = *(char *)(param_1 + -0x37) + bVar5;
  out(unaff_retaddr,uVar3);
  *(char *)CONCAT44(in_register_00000004,uVar3) =
       *(char *)CONCAT44(in_register_00000004,uVar3) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aca6a FUN_14d7aca6a body=2 status=ok
// SIG undefined FUN_14d7aca6a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aca6a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aca6e FUN_14d7aca6e body=12 status=ok
// SIG undefined FUN_14d7aca6e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aca6e(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_retaddr;
  undefined2 uStackX_8;
  undefined4 uVar3;
  
  uVar2 = in(0xb0);
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),uVar2);
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -0x3d);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_retaddr + -0x37) = *(char *)(unaff_retaddr + -0x37) + unaff_BL;
  out(uStackX_8,uVar3);
  *(char *)CONCAT44(in_register_00000004,uVar3) =
       *(char *)CONCAT44(in_register_00000004,uVar3) + (char)unaff_retaddr;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aca7b FUN_14d7aca7b body=6 status=ok
// SIG undefined FUN_14d7aca7b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aca7b(longlong param_1)

{
  char *in_RAX;
  char unaff_BL;
  bool in_CF;
  undefined2 unaff_retaddr;
  
  if (in_CF) {
    *(char *)(param_1 + -0x37) = *(char *)(param_1 + -0x37) + unaff_BL;
    out(unaff_retaddr,(int)in_RAX);
    *in_RAX = *in_RAX + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aca83 FUN_14d7aca83 body=4 status=ok
// SIG undefined FUN_14d7aca83(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aca83(longlong param_1)

{
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  char unaff_BL;
  undefined2 uStackX_8;
  
  *(char *)(param_1 + -0x37) = *(char *)(param_1 + -0x37) + unaff_BL;
  out(uStackX_8,in_EAX);
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aca8d FUN_14d7aca8d body=3 status=ok
// SIG undefined FUN_14d7aca8d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aca8d(longlong param_1)

{
  undefined8 in_RAX;
  
  *(byte *)(param_1 + -0x26) = *(byte *)(param_1 + -0x26) | (byte)((ulonglong)in_RAX >> 8);
  in(0x17);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aca91 FUN_14d7aca91 body=4 status=ok
// SIG undefined FUN_14d7aca91(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aca91(undefined8 param_1,byte param_2)

{
  uint in_EAX;
  uint uVar1;
  longlong unaff_RBX;
  byte *unaff_RDI;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (in_ZF || in_OF != in_SF) {
    in(0x17);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = in_EAX + 0x8f4c8129;
  if (0x70b37ed6 < in_EAX || uVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)(unaff_RBX + 0x52) = *(byte *)(unaff_RBX + 0x52) | 0x20;
  if ((byte)uVar1 < 0xcc) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)((ulonglong)uVar1 + 0x21054fdb) = *(int *)((ulonglong)uVar1 + 0x21054fdb) << 1;
  *unaff_RDI = *unaff_RDI | param_2;
  in(0xd8);
  in(0xaa);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aca95 FUN_14d7aca95 body=9 status=ok
// SIG undefined FUN_14d7aca95(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aca95(void)

{
  in(0x17);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acaa6 FUN_14d7acaa6 body=2 status=ok
// SIG undefined FUN_14d7acaa6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acaa6(void)

{
  undefined1 in_AL;
  undefined1 *unaff_RDI;
  bool in_PF;
  
  if (!in_PF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acaaa FUN_14d7acaaa body=54 status=ok
// SIG undefined FUN_14d7acaaa(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acaaa(longlong param_1)

{
  byte *pbVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *in_RAX;
  byte bVar5;
  longlong unaff_RBX;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  longlong in_R10;
  byte in_CF;
  
  bVar5 = (byte)((ulonglong)param_1 >> 8);
  if (param_1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(param_1 + 0x13) = *(int *)(param_1 + 0x13) + (int)&stack0x00000000 + (uint)in_CF;
  uVar4 = (uint)in_RAX;
  *in_RAX = *in_RAX & uVar4;
  *unaff_RDI = *unaff_RSI;
  pbVar1 = (byte *)(in_R10 + -0x7d);
  *pbVar1 = *pbVar1 & 0x7f;
  if (*pbVar1 != 0) {
    return;
  }
  puVar2 = (uint *)(CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                             CONCAT11(bVar5,(byte)param_1 ^ bVar5)) + 0x788f4c);
  uVar3 = *puVar2;
  *puVar2 = *puVar2 - uVar4;
  if (uVar3 < uVar4 || *puVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)(unaff_RBX + 0x52) = *(byte *)(unaff_RBX + 0x52) | 0x20;
  if ((byte)in_RAX < 0xcc) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)((longlong)in_RAX + 0x21054fdb) = *(int *)((longlong)in_RAX + 0x21054fdb) << 1;
  *(byte *)(unaff_RDI + 1) = *(byte *)(unaff_RDI + 1) | 0x5d;
  in(0xd8);
  in(0xaa);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acae8 FUN_14d7acae8 body=6 status=ok
// SIG undefined FUN_14d7acae8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acae8(undefined8 param_1,undefined2 param_2)

{
  uint uVar1;
  uint uVar2;
  longlong unaff_RBX;
  uint *unaff_RSI;
  byte *unaff_RDI;
  bool in_OF;
  
  if (in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = *unaff_RSI;
  out(param_2,(char)uVar1);
  uVar2 = uVar1 + 0x8f4c8129;
  if (0x70b37ed6 < uVar1 || uVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)(unaff_RBX + 0x52) = *(byte *)(unaff_RBX + 0x52) | 0x20;
  if ((byte)uVar2 < 0xcc) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)((ulonglong)uVar2 + 0x21054fdb) = *(int *)((ulonglong)uVar2 + 0x21054fdb) << 1;
  *unaff_RDI = *unaff_RDI | (byte)param_2;
  in(0xd8);
  in(0xaa);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acb05 FUN_14d7acb05 body=2 status=ok
// SIG undefined FUN_14d7acb05(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acb05(void)

{
  undefined4 in_EAX;
  
  out(0xa1,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acb16 FUN_14d7acb16 body=7 status=ok
// SIG undefined FUN_14d7acb16(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acb16(undefined8 param_1,byte param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  undefined8 in_RAX;
  longlong unaff_RBX;
  byte *unaff_RDI;
  byte in_CF;
  
  iVar3 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),0x1f) + -0x7f5d087 + (uint)in_CF;
  bVar2 = (char)iVar3 - 0x1c;
  *(byte *)(unaff_RBX + 0x52) = *(byte *)(unaff_RBX + 0x52) | 0x20;
  if (bVar2 < 0xcc) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar1 = (int *)((ulonglong)(CONCAT31((int3)((uint)iVar3 >> 8),bVar2) & 0xffff00ff) + 0x21054fdb);
  *piVar1 = *piVar1 << 1;
  *unaff_RDI = *unaff_RDI | param_2;
  in(0xd8);
  in(0xaa);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acb1f FUN_14d7acb1f body=8 status=ok
// SIG undefined FUN_14d7acb1f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acb1f(undefined8 param_1,byte param_2)

{
  int *piVar1;
  byte bVar2;
  undefined8 in_RAX;
  longlong unaff_RBX;
  byte *unaff_RDI;
  
  bVar2 = (char)in_RAX - 0x1c;
  *(byte *)(unaff_RBX + 0x52) = *(byte *)(unaff_RBX + 0x52) | 0x20;
  if (bVar2 < 0xcc) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar1 = (int *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2) + 0x21054fdb);
  *piVar1 = *piVar1 << 1;
  *unaff_RDI = *unaff_RDI | param_2;
  in(0xd8);
  in(0xaa);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acb27 FUN_14d7acb27 body=12 status=ok
// SIG undefined FUN_14d7acb27(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acb27(undefined8 param_1,byte param_2)

{
  longlong in_RAX;
  longlong unaff_RBX;
  byte *unaff_RDI;
  
  *(byte *)(unaff_RBX + 0x52) = *(byte *)(unaff_RBX + 0x52) | 0x20;
  if ((byte)in_RAX < 0xcc) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(in_RAX + 0x21054fdb) = *(int *)(in_RAX + 0x21054fdb) << 1;
  *unaff_RDI = *unaff_RDI | param_2;
  in(0xd8);
  in(0xaa);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acb3c FUN_14d7acb3c body=1 status=ok
// SIG undefined FUN_14d7acb3c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acb3c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acb48 FUN_14d7acb48 body=7 status=ok
// SIG undefined FUN_14d7acb48(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acb48(undefined8 param_1,undefined2 param_2)

{
  undefined1 in_AL;
  
  out(param_2,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acb58 FUN_14d7acb58 body=2 status=ok
// SIG undefined FUN_14d7acb58(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acb58(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acb5d FUN_14d7acb5d body=16 status=ok
// SIG undefined FUN_14d7acb5d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acb5d(void)

{
  char cVar1;
  uint in_EAX;
  char unaff_BL;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  uint unaff_ESI;
  char unaff_DIL;
  char in_CF;
  undefined1 auStack_24c0 [9392];
  undefined8 uStack_10;
  
  puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x11';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  DAT_f3b7b290 = DAT_f3b7b290 + unaff_BL + unaff_DIL + in_CF;
  if (DAT_f3b7b290 == '\0') {
    *(ulonglong *)((ulonglong)((int)auStack_24c0 - 0x88U | unaff_ESI) + 8) = (ulonglong)in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acb6e FUN_14d7acb6e body=12 status=ok
// SIG undefined FUN_14d7acb6e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acb6e(undefined8 param_1,char *param_2)

{
  int unaff_ESI;
  
  *param_2 = *param_2 - (char)param_2;
  *(int *)(param_2 + 0x5ae60b4c) = *(int *)(param_2 + 0x5ae60b4c) - unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acb87 FUN_14d7acb87 body=13 status=ok
// SIG undefined FUN_14d7acb87(void)

void FUN_14d7acb87(void)

{
  return;
}



// FUNCTION 14d7acb9b FUN_14d7acb9b body=12 status=ok
// SIG undefined FUN_14d7acb9b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acb9b(void)

{
  undefined1 in_AL;
  longlong unaff_RBX;
  longlong unaff_RSI;
  undefined2 in_FPUControlWord;
  
  *(undefined1 *)(unaff_RBX + -0x1c) = in_AL;
  *(undefined2 *)(unaff_RSI + -0x7d) = in_FPUControlWord;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acbbb FUN_14d7acbbb body=4 status=ok
// SIG undefined FUN_14d7acbbb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acbbb(void)

{
  byte in_AL;
  undefined4 *unaff_RDI;
  
  out(0xcf,in_AL & (byte)*unaff_RDI);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acbbf thunk_EXT_FUN_1c0af9ac2 body=5 status=ok
// SIG undefined thunk_EXT_FUN_1c0af9ac2(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_1c0af9ac2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acbdb FUN_14d7acbdb body=8 status=ok
// SIG undefined FUN_14d7acbdb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acbdb(void)

{
  char cVar1;
  undefined8 *unaff_retaddr;
  
  cVar1 = '\t';
  do {
    unaff_retaddr = unaff_retaddr + -1;
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
    *(undefined8 *)register0x00000020 = *unaff_retaddr;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acbf5 FUN_14d7acbf5 body=15 status=ok
// SIG undefined FUN_14d7acbf5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acbf5(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined6 uVar6;
  undefined2 uVar7;
  undefined6 uVar8;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  undefined1 *unaff_RSI;
  bool in_ZF;
  char in_SF;
  char in_OF;
  undefined1 auStackX_10 [24];
  
  uVar8 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar7 = (undefined2)param_2;
  uVar6 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar5 = (byte)((ulonglong)param_1 >> 8);
  uVar4 = (undefined1)param_1;
  out(*unaff_RSI,uVar7);
  if (!in_ZF && in_OF == in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar3 = (code *)swi(0x58);
  (*pcVar3)();
  pbVar1 = (byte *)(CONCAT62(uVar8,uVar7) + CONCAT71(unaff_00000019,unaff_BL) * 2);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar5;
  if (CARRY1(bVar2,bVar5) || *pbVar1 == 0) {
    *(uint *)CONCAT62(uVar6,CONCAT11(bVar5,uVar4)) =
         *(uint *)CONCAT62(uVar6,CONCAT11(bVar5,uVar4)) |
         (int)auStackX_10 +
         *(int *)(CONCAT62(uVar6,CONCAT11(bVar5,uVar4)) + 0x55 + CONCAT62(uVar8,uVar7) * 8);
    in(0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acc06 FUN_14d7acc06 body=7 status=ok
// SIG undefined FUN_14d7acc06(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acc06(uint *param_1,longlong param_2)

{
  byte in_AL;
  
  if (in_AL < 0x5b) {
    *param_1 = *param_1 | (int)&stack0x00000000 + *(int *)((longlong)param_1 + param_2 * 8 + 0x55);
    in(0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acc0e FUN_14d7acc0e body=15 status=ok
// SIG undefined FUN_14d7acc0e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acc0e(uint *param_1,longlong param_2)

{
  *param_1 = *param_1 | (int)&stack0x00000000 + *(int *)((longlong)param_1 + param_2 * 8 + 0x55);
  in(0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acc34 FUN_14d7acc34 body=17 status=ok
// SIG undefined FUN_14d7acc34(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acc34(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  longlong unaff_RBX;
  
  bVar1 = (byte)((ulonglong)param_2 >> 8);
  *(byte *)(unaff_RBX + -0x4b50236b) = *(byte *)(unaff_RBX + -0x4b50236b) | bVar1;
  *(byte *)(unaff_RBX + -0x59) = bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acc4b FUN_14d7acc4b body=15 status=ok
// SIG undefined FUN_14d7acc4b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acc4b(longlong param_1)

{
  undefined1 *unaff_RSI;
  longlong unaff_RDI;
  ulonglong in_K3;
  undefined1 auVar1 [16];
  undefined1 in_XMM21 [16];
  
  auVar1 = vpmovsdb_avx512vl(in_XMM21);
  *(uint *)(param_1 + 0x246ffe3a) =
       CONCAT13(((byte)(in_K3 >> 3) & 1) * auVar1[3],
                CONCAT12(((byte)(in_K3 >> 2) & 1) * auVar1[2],
                         CONCAT11(((byte)(in_K3 >> 1) & 1) * auVar1[1],((byte)in_K3 & 1) * auVar1[0]
                                 )));
  *(undefined1 *)(unaff_RDI + 4) = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acc60 FUN_14d7acc60 body=7 status=ok
// SIG undefined FUN_14d7acc60(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acc60(uint *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  code *pcVar4;
  longlong in_RAX;
  byte bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined6 uVar8;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  undefined1 *unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_CF;
  bool in_ZF;
  char in_SF;
  char in_OF;
  undefined1 auStackX_10 [24];
  
  uVar8 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar6 = (undefined1)param_2;
  LOCK();
  uVar7 = *(undefined1 *)(in_RAX + -0x2f);
  *(undefined1 *)(in_RAX + -0x2f) = (char)((ulonglong)param_2 >> 8);
  UNLOCK();
  while (param_1 != (uint *)0x0) {
    param_1 = (uint *)((longlong)param_1 + -1);
    uVar3 = in(CONCAT11(uVar7,uVar6));
    *unaff_RDI = uVar3;
    unaff_RDI = unaff_RDI + 1;
  }
  if (in_CF || in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*unaff_RSI,CONCAT11(uVar7,uVar6));
  if (!in_ZF && in_OF == in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar4 = (code *)swi(0x58);
  (*pcVar4)();
  pbVar1 = (byte *)(CONCAT62(uVar8,CONCAT11(uVar7,uVar6)) + CONCAT71(unaff_00000019,unaff_BL) * 2);
  bVar2 = *pbVar1;
  bVar5 = (byte)((ulonglong)param_1 >> 8);
  *pbVar1 = *pbVar1 + bVar5;
  if (CARRY1(bVar2,bVar5) || *pbVar1 == 0) {
    *param_1 = *param_1 |
               (int)auStackX_10 +
               *(int *)((longlong)param_1 + CONCAT62(uVar8,CONCAT11(uVar7,uVar6)) * 8 + 0x55);
    in(0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acc68 FUN_14d7acc68 body=6 status=ok
// SIG undefined FUN_14d7acc68(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acc68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acc74 FUN_14d7acc74 body=12 status=ok
// SIG undefined FUN_14d7acc74(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acc74(undefined8 param_1,longlong param_2)

{
  *(byte *)(param_2 + -0x567e4c79) = *(byte *)(param_2 + -0x567e4c79) & 0xfb;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acc99 FUN_14d7acc99 body=1 status=ok
// SIG undefined FUN_14d7acc99(void)

void FUN_14d7acc99(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7acca1 FUN_14d7acca1 body=4 status=ok
// SIG undefined FUN_14d7acca1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acca1(longlong param_1)

{
  undefined1 *unaff_RSI;
  longlong unaff_RDI;
  ulonglong in_K3;
  undefined1 auVar1 [16];
  undefined1 in_XMM21 [16];
  
  auVar1 = vpmovsdb_avx512vl(in_XMM21);
  *(uint *)(param_1 + 0x246ffe3a) =
       CONCAT13(((byte)(in_K3 >> 3) & 1) * auVar1[3],
                CONCAT12(((byte)(in_K3 >> 2) & 1) * auVar1[2],
                         CONCAT11(((byte)(in_K3 >> 1) & 1) * auVar1[1],((byte)in_K3 & 1) * auVar1[0]
                                 )));
  *(undefined1 *)(unaff_RDI + 4) = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acca5 thunk_FUN_14d7acc4b body=2 status=ok
// SIG undefined thunk_FUN_14d7acc4b(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_FUN_14d7acc4b(longlong param_1)

{
  undefined1 *unaff_RSI;
  longlong unaff_RDI;
  ulonglong in_K3;
  undefined1 auVar1 [16];
  undefined1 in_XMM21 [16];
  
  auVar1 = vpmovsdb_avx512vl(in_XMM21);
  *(uint *)(param_1 + 0x246ffe3a) =
       CONCAT13(((byte)(in_K3 >> 3) & 1) * auVar1[3],
                CONCAT12(((byte)(in_K3 >> 2) & 1) * auVar1[2],
                         CONCAT11(((byte)(in_K3 >> 1) & 1) * auVar1[1],((byte)in_K3 & 1) * auVar1[0]
                                 )));
  *(undefined1 *)(unaff_RDI + 4) = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7accad FUN_14d7accad body=3 status=ok
// SIG undefined FUN_14d7accad(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7accad(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7accb5 FUN_14d7accb5 body=28 status=ok
// SIG undefined FUN_14d7accb5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7accb5(undefined4 *param_1)

{
  undefined4 uVar1;
  byte in_AL;
  char unaff_BH;
  longlong unaff_RDI;
  
  uVar1 = *param_1;
  *(char *)(unaff_RDI + 0x6f) = *(char *)(unaff_RDI + 0x6f) + unaff_BH;
  LOCK();
  *(byte *)(((ulonglong)param_1 & 0xffffffff) - 0x2e999e92) = in_AL & (byte)uVar1;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7accf4 FUN_14d7accf4 body=121 status=ok
// SIG undefined FUN_14d7accf4(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7acce8) overlaps instruction at (ram,0x00014d7acce7)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7acdfa) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7accf4(undefined8 param_1,undefined8 param_2,int *param_3)

{
  char *pcVar1;
  byte *pbVar2;
  uint *puVar3;
  longlong *plVar4;
  char cVar5;
  code *pcVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 in_RAX;
  undefined8 uVar9;
  undefined6 uVar12;
  ulonglong uVar10;
  longlong lVar11;
  byte bVar13;
  short sVar14;
  char unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  longlong *plVar15;
  longlong *unaff_RBP;
  longlong *plVar16;
  longlong unaff_RSI;
  uint uVar17;
  uint *unaff_RDI;
  bool bVar18;
  undefined1 in_ZF;
  char in_SF;
  char in_OF;
  float10 in_ST0;
  
  plVar4 = (longlong *)register0x00000020;
  while( true ) {
    plVar15 = plVar4;
    uVar8 = (uint)in_RAX;
    sVar14 = (short)((ulonglong)in_RAX >> 0x10) >> 0xf;
    out(sVar14,(char)in_RAX);
    uVar12 = (undefined6)((ulonglong)param_1 >> 0x10);
    if (!(bool)in_ZF && in_OF == in_SF) {
      lVar11 = CONCAT62(uVar12,CONCAT11(0xa6,(char)param_1)) + -1;
      if ((lVar11 == 0 || (bool)in_ZF == false) &&
         (unaff_BL = unaff_BL + (char)((ulonglong)lVar11 >> 8), unaff_BL < '\0')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar3 = (uint *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
                       CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 8);
      *puVar3 = ~*puVar3;
      out(0x2e,0x2cd70763);
                    /* WARNING (jumptable): Read-only address (ram,0x000144fc732a) is written */
                    /* WARNING: Read-only address (ram,0x000144fc732a) is written */
      uRam0000000144fc732a = 0xc04018b;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(int *)((longlong)unaff_RBP + -0x9ac1ca6) = (int)ROUND(in_ST0);
    uVar17 = *unaff_RDI;
    if ((POPCOUNT(uVar8 - *unaff_RDI & 0xff) & 1U) != 0) break;
    unaff_RDI = unaff_RDI + 2;
    puVar7 = (undefined8 *)*plVar15;
    *param_3 = *param_3 + (int)unaff_RDI;
    *plVar15 = (longlong)puVar7;
    cVar5 = '\x11';
    plVar4 = plVar15;
    do {
      puVar7 = puVar7 + -1;
      plVar4 = plVar4 + -1;
      *plVar4 = *puVar7;
      cVar5 = cVar5 + -1;
    } while ('\0' < cVar5);
    plVar15[-0x12] = (longlong)plVar15;
    in_ST0 = (float10)*(longlong *)(unaff_RSI + -0x6fd026f4);
    in_RAX = 0x6c6a974b;
    pcVar1 = (char *)((longlong)plVar15 + -0x65);
    in_OF = SCARRY1(*pcVar1,'K');
    *pcVar1 = *pcVar1 + 'K';
    in_SF = *pcVar1 < '\0';
    in_ZF = *pcVar1 == '\0';
    plVar4 = (longlong *)((longlong)plVar15 + -0x1203);
    unaff_RBP = plVar15;
    unaff_RSI = unaff_RSI + 4;
  }
  plVar16 = (longlong *)*unaff_RBP;
  *unaff_RBP = (longlong)plVar16;
  cVar5 = '\x01';
  plVar4 = unaff_RBP;
  do {
    plVar16 = plVar16 + -1;
    plVar4 = plVar4 + -1;
    *plVar4 = *plVar16;
    cVar5 = cVar5 + -1;
  } while ('\0' < cVar5);
  unaff_RBP[-2] = (longlong)unaff_RBP;
  *(undefined8 *)((longlong)unaff_RBP + -22999) = in_RAX;
  pbVar2 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x697df300);
  if (*pbVar2 <= unaff_BH && (uVar8 < uVar17) <= (byte)(unaff_BH - *pbVar2)) {
    lVar11 = CONCAT62(uVar12,CONCAT11((byte)((ulonglong)param_1 >> 8) &
                                      *(byte *)(unaff_RBP + 0x31c4e21),(char)param_1));
    bVar18 = (byte)((ulonglong)in_RAX >> 8) < (byte)unaff_RDI[0x11];
    bVar13 = (char)((ulonglong)in_RAX >> 0x18) >> 7;
    uVar17 = (((int)unaff_RDI + 4) - (int)lVar11) -
             (uint)(CARRY1(bVar13,bVar13) || CARRY1(bVar13 * '\x02',bVar18));
    uVar8 = (uint)(uVar8 < *(uint *)(ulonglong)uVar17);
    uVar17 = (uVar17 + 4) - CONCAT22(sVar14,CONCAT11(bVar13 * '\x02' + bVar18,bVar13));
    uVar10 = lVar11 - 1;
    if (uVar10 != 0 && uVar17 == uVar8) {
      if (-1 < (int)(uVar17 - uVar8)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar6 = (code *)swi(0x9f);
    uVar9 = (*pcVar6)();
    *(undefined8 *)((longlong)unaff_RBP + -22999) = uVar9;
    if ((uint)uVar9 < 0x5a763c17) {
      uRam0000000144fc732a = 0xc04018b;
      halt_baddata();
    }
                    /* WARNING: Could not recover jumptable at 0x00014d7acd3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulonglong)*(uint *)((longlong)unaff_RBP + -0x34))(uVar10 ^ 0xf6);
    return;
  }
  halt_baddata();
}



// FUNCTION 14d7acd47 FUN_14d7acd47 body=3 status=ok
// SIG undefined FUN_14d7acd47(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7acdfa) */

void FUN_14d7acd47(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  char *pcVar2;
  char unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  *(undefined4 *)(unaff_RDI + 1) = *(undefined4 *)(unaff_RSI + 1);
  pcVar2 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x594a68f1 + unaff_RBP);
  *pcVar2 = *pcVar2 - (char)((ulonglong)param_2 >> 8);
  if ((param_1 + -1 == 0 || *pcVar2 != '\0') &&
     (unaff_BL = unaff_BL + (char)((ulonglong)(param_1 + -1) >> 8), unaff_BL < '\0')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar1 = (uint *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
                   CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 8);
  *puVar1 = ~*puVar1;
  out(0x2e,0x2cd70763);
                    /* WARNING: Read-only address (ram,0x000144fc732a) is written */
  uRam0000000144fc732a = 0xc04018b;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acd98 FUN_14d7acd98 body=15 status=ok
// SIG undefined FUN_14d7acd98(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acd98(void)

{
                    /* WARNING: Read-only address (ram,0x000144fc732a) is written */
  uRam0000000144fc732a = 0xc04018b;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acda8 FUN_14d7acda8 body=17 status=ok
// SIG undefined FUN_14d7acda8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acda8(void)

{
  int *in_RAX;
  undefined1 in_R10B;
  longlong unaff_R15;
  bool in_PF;
  
  if (in_PF) {
    *in_RAX = *in_RAX + (int)in_RAX;
    LOCK();
    *(undefined1 *)(unaff_R15 + -0x53) = in_R10B;
    UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acdc2 FUN_14d7acdc2 body=23 status=ok
// SIG undefined FUN_14d7acdc2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acdc2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acdda FUN_14d7acdda body=10 status=ok
// SIG undefined FUN_14d7acdda(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7ace19) overlaps instruction at (ram,0x00014d7ace14)
    */

void FUN_14d7acdda(longlong param_1,byte param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 uVar3;
  longlong in_RAX;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  undefined8 *puVar4;
  longlong unaff_RSI;
  longlong unaff_RDI;
  bool in_SF;
  undefined8 auStack_10 [2];
  
  if (in_SF) {
    if (param_1 == 1) {
      LOCK();
      *(undefined1 *)(unaff_RDI + unaff_RSI * 4) = 0;
      UNLOCK();
      uVar3 = in(0xaf);
      LOCK();
      *(char *)(unaff_RSI + 0x3a + CONCAT71(unaff_00000019,unaff_BL) * 2) = (char)uVar3;
      UNLOCK();
      puVar4 = auStack_10 + 1;
      puVar1 = (undefined8 *)0x987485a0;
      cVar2 = '\x05';
      do {
        puVar1 = puVar1 + -1;
        puVar4 = puVar4 + -1;
        *puVar4 = *puVar1;
        cVar2 = cVar2 + -1;
      } while ('\0' < cVar2);
    }
    else {
      out(0x9b,(byte)in_RAX & (byte)*(undefined4 *)(in_RAX + -0x38));
    }
    *(byte *)(unaff_RSI + 0x35) = *(byte *)(unaff_RSI + 0x35) | param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acdea FUN_14d7acdea body=13 status=ok
// SIG undefined FUN_14d7acdea(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acdea(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acdff FUN_14d7acdff body=2 status=ok
// SIG undefined FUN_14d7acdff(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7ace19) overlaps instruction at (ram,0x00014d7ace14)
    */

void FUN_14d7acdff(longlong param_1,byte param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 uVar3;
  longlong in_RAX;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  undefined8 *puVar4;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined8 auStack_10 [2];
  
  if (param_1 == 1) {
    LOCK();
    *(undefined1 *)(unaff_RDI + unaff_RSI * 4) = 0;
    UNLOCK();
    uVar3 = in(0xaf);
    LOCK();
    *(char *)(unaff_RSI + 0x3a + CONCAT71(unaff_00000019,unaff_BL) * 2) = (char)uVar3;
    UNLOCK();
    puVar4 = auStack_10 + 1;
    puVar1 = (undefined8 *)0x987485a0;
    cVar2 = '\x05';
    do {
      puVar1 = puVar1 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar1;
      cVar2 = cVar2 + -1;
    } while ('\0' < cVar2);
  }
  else {
    out(0x9b,(byte)in_RAX & (byte)*(undefined4 *)(in_RAX + -0x38));
  }
  *(byte *)(unaff_RSI + 0x35) = *(byte *)(unaff_RSI + 0x35) | param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ace03 FUN_14d7ace03 body=35 status=ok
// SIG undefined FUN_14d7ace03(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ace03(undefined8 param_1,byte param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 in_AL;
  undefined1 unaff_BL;
  undefined6 unaff_0000001a;
  undefined8 *puVar3;
  longlong unaff_RSI;
  undefined8 auStack_10 [2];
  
  LOCK();
  *(undefined1 *)(unaff_RSI + 0x3a + CONCAT62(unaff_0000001a,CONCAT11(0xe5,unaff_BL)) * 2) = in_AL;
  UNLOCK();
  puVar3 = auStack_10 + 1;
  puVar1 = (undefined8 *)0x987485a0;
  cVar2 = '\x05';
  do {
    puVar1 = puVar1 + -1;
    puVar3 = puVar3 + -1;
    *puVar3 = *puVar1;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
  *(byte *)(unaff_RSI + 0x35) = *(byte *)(unaff_RSI + 0x35) | param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ace3c FUN_14d7ace3c body=5 status=ok
// SIG undefined FUN_14d7ace3c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ace3c(byte *param_1,char *param_2)

{
  bool in_PF;
  
  if (in_PF) {
    *param_1 = *param_1 & 0x85;
    return;
  }
  *param_2 = *param_2 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ace55 FUN_14d7ace55 body=11 status=ok
// SIG undefined FUN_14d7ace55(void)

void FUN_14d7ace55(void)

{
  code *pcVar1;
  
  func_0xe3957002();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7ace61 FUN_14d7ace61 body=9 status=ok
// SIG undefined FUN_14d7ace61(void)

void FUN_14d7ace61(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7acec4 FUN_14d7acec4 body=1 status=ok
// SIG undefined FUN_14d7acec4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acec4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aced6 FUN_14d7aced6 body=109 status=ok
// SIG undefined FUN_14d7aced6(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7ace74) overlaps instruction at (ram,0x00014d7ace72)
    */

void FUN_14d7aced6(longlong param_1,longlong param_2)

{
  uint *puVar1;
  char *pcVar2;
  undefined1 uVar3;
  uint in_EAX;
  uint uVar4;
  byte bVar6;
  byte *pbVar5;
  char unaff_BL;
  undefined1 unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  undefined8 *puVar7;
  byte *unaff_RSI;
  char *unaff_RDI;
  char in_ZF;
  bool in_OF;
  undefined2 in_FPUControlWord;
  
  pbVar5 = (byte *)(param_1 + -1);
  if (pbVar5 == (byte *)0x0 || in_ZF == '\0') {
    if (in_OF) {
      *(undefined2 *)((undefined1 *)(ulonglong)in_EAX + -0x29) = in_FPUControlWord;
      uVar4 = (int)unaff_RDI + 0xeece989c;
      bVar6 = (byte)((ulonglong)param_2 >> 8);
      *(char *)((ulonglong)uVar4 - 0x546b573c) = (char)((ulonglong)pbVar5 >> 8);
      if ((POPCOUNT(bVar6 * '\x02') & 1U) != 0) {
        pcVar2 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(0x30,unaff_BL)))
                         + 0x846e2ff);
        *pcVar2 = *pcVar2 + (char)(uVar4 >> 8);
        FUN_14d7acf12();
        return;
      }
      uVar3 = in(0x91ce);
      *(undefined1 *)(ulonglong)in_EAX = uVar3;
      if (-1 < (int)((int)unaff_RDI + -0x51d9a081 + (uint)CARRY1(bVar6,bVar6))) {
        pbVar5 = (byte *)(((ulonglong)unaff_RSI & 0xffffffff) + 0x2f26000a);
        *pbVar5 = *pbVar5 | 0x34;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      DAT_00000013 = DAT_00000013 + '4';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    while( true ) {
      param_2 = CONCAT71((int7)((ulonglong)param_2 >> 8),
                         (char)param_2 + unaff_RDI[(longlong)pbVar5 * 4 + -0x450e45f8]);
      *(char *)(param_2 + -0xe8557b) = *(char *)(param_2 + -0xe8557b) + (char)in_EAX;
      *(byte **)((longlong)register0x00000020 + -8) = unaff_RSI;
      *(byte **)((longlong)register0x00000020 + -0x10) = unaff_RSI;
      bVar6 = (byte)((ulonglong)pbVar5 >> 8) & *pbVar5;
      *unaff_RDI = *unaff_RDI + (char)pbVar5;
      if ((POPCOUNT(*unaff_RDI) & 1U) == 0) break;
      puVar7 = (undefined8 *)((ulonglong)unaff_RDI & 0xffffffff);
      unaff_RDI = (char *)*puVar7;
      register0x00000020 = (BADSPACEBASE *)(puVar7 + 1);
      *(byte *)(param_2 + 0xf002ab3) = *(byte *)(param_2 + 0xf002ab3) ^ bVar6;
      if (CONCAT62((int6)((ulonglong)pbVar5 >> 0x10),CONCAT11(bVar6,(char)pbVar5)) != 1) {
        *puVar7 = puVar7 + 1;
        break;
      }
      in_EAX = (uint)*unaff_RSI;
      pbVar5 = (byte *)0x0;
      unaff_RSI = unaff_RSI + 1;
    }
    puVar1 = (uint *)(param_2 + 0x53);
    *puVar1 = *puVar1 & 0xffffff93;
    if (0 < (int)*puVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar2 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)))
                     + -0x2e);
    *pcVar2 = *pcVar2 + unaff_BL;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acf12 FUN_14d7acf12 body=9 status=ok
// SIG undefined FUN_14d7acf12(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acf12(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acf49 FUN_14d7acf49 body=28 status=ok
// SIG undefined FUN_14d7acf49(void)

void FUN_14d7acf49(longlong param_1,int param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  uint uVar3;
  longlong unaff_RBX;
  ulonglong *unaff_RBP;
  ulonglong unaff_R13;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  uVar2 = *(undefined8 *)(ulonglong)(param_2 + 0x2d);
  if (in_ZF || in_OF != in_SF) {
    uVar3 = (uint)param_1 & *(uint *)(param_1 + -2);
    *unaff_RBP = (ulonglong)uVar3;
    pcVar1 = (char *)((ulonglong)
                      (uint)(*(int *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) +
                                     unaff_RBX * 2) * 0x131cb022) + 0x2a);
    *pcVar1 = *pcVar1 + (char)uVar3;
    return;
  }
  *(char *)(unaff_RBX + 0x846e2ff) = *(char *)(unaff_RBX + 0x846e2ff) + in_AH;
  *unaff_RBP = unaff_R13;
  FUN_14d7acf12(param_1,uVar2);
  return;
}



// FUNCTION 14d7acf69 FUN_14d7acf69 body=7 status=ok
// SIG undefined FUN_14d7acf69(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acf69(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acf9a FUN_14d7acf9a body=16 status=ok
// SIG undefined FUN_14d7acf9a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acf9a(char param_1)

{
  longlong unaff_RSI;
  
  *(char *)(unaff_RSI + 0x1f7cb2d7) = *(char *)(unaff_RSI + 0x1f7cb2d7) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acfaf FUN_14d7acfaf body=7 status=ok
// SIG undefined FUN_14d7acfaf(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acfaf(longlong param_1,int param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  uint uVar3;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  ulonglong *unaff_RBP;
  ulonglong unaff_R13;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (in_OF == in_SF) {
    *(uint *)(param_1 + CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) * 4) = (uint)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = *(undefined8 *)(ulonglong)(param_2 + 0x2d);
  if (in_ZF || in_OF != in_SF) {
    uVar3 = (uint)param_1 & *(uint *)(param_1 + -2);
    *unaff_RBP = (ulonglong)uVar3;
    pcVar1 = (char *)((ulonglong)
                      (uint)(*(int *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) +
                                     CONCAT71(unaff_00000019,unaff_BL) * 2) * 0x131cb022) + 0x2a);
    *pcVar1 = *pcVar1 + (char)uVar3;
    return;
  }
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 0x846e2ff);
  *pcVar1 = *pcVar1 + in_AH;
  *unaff_RBP = unaff_R13;
  FUN_14d7acf12(param_1,uVar2);
  return;
}



// FUNCTION 14d7acfbb FUN_14d7acfbb body=3 status=ok
// SIG undefined FUN_14d7acfbb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acfbb(void)

{
  bool in_ZF;
  
  if (!in_ZF) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acfbf FUN_14d7acfbf body=13 status=ok
// SIG undefined FUN_14d7acfbf(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acfbf(void)

{
  uint unaff_EBX;
  longlong unaff_RDI;
  
  *(uint *)(unaff_RDI + -0x5513010d) = *(uint *)(unaff_RDI + -0x5513010d) | unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7acfd3 FUN_14d7acfd3 body=34 status=ok
// SIG undefined FUN_14d7acfd3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7acfd3(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 unaff_EBX;
  undefined4 uVar4;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  short *unaff_RDI;
  float10 in_ST0;
  
  uVar4 = CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX * '\x02');
  pcVar1 = (char *)(CONCAT44(unaff_0000001c,uVar4) + 0x3a04457 + unaff_RBP * 8);
  *pcVar1 = *pcVar1 + (char)*unaff_RSI;
  pcVar1 = (char *)(CONCAT44(unaff_0000001c,uVar4) + -0x4c2bdb37);
  cVar2 = *pcVar1;
  *pcVar1 = -*pcVar1;
  *(int *)(param_2 + 0x448b0003) =
       (*(int *)(param_2 + 0x448b0003) - (int)param_2) - (uint)(cVar2 != '\0');
  *unaff_RDI = (short)ROUND(in_ST0);
  uVar3 = in((short)param_2);
  *(undefined1 *)unaff_RDI = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad009 FUN_14d7ad009 body=8 status=ok
// SIG undefined FUN_14d7ad009(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad009(longlong param_1)

{
  byte in_CF;
  
  *(byte *)(param_1 + 0x38110099) = *(byte *)(param_1 + 0x38110099) << 1 | in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad020 FUN_14d7ad020 body=27 status=ok
// SIG undefined FUN_14d7ad020(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7ad030) overlaps instruction at (ram,0x00014d7ad02d)
    */

void FUN_14d7ad020(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  longlong unaff_RSI;
  char in_SF;
  char in_OF;
  ulonglong unaff_retaddr;
  
  if (in_OF != in_SF) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (0xe < *(int *)(unaff_RSI + 0x33c7d238)) {
    uVar1 = in(param_2);
    *(undefined1 *)(unaff_retaddr & 0xffffffff) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7ad03b FUN_14d7ad03b body=28 status=ok
// SIG undefined FUN_14d7ad03b(void)

void FUN_14d7ad03b(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 in_EAX;
  char *unaff_RSI;
  char *unaff_RDI;
  uint *puVar3;
  
  *unaff_RDI = *unaff_RDI + (char)((uint)in_EAX >> 8);
  *unaff_RDI = *unaff_RSI;
  puVar3 = (uint *)(unaff_RDI + 1);
  do {
    puVar1 = (uint *)((longlong)puVar3 + 1);
    uVar2 = *puVar3;
    param_1 = CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                       CONCAT11(*(char *)((ulonglong)param_2 + (longlong)puVar1),(char)param_1)) +
              -1;
    puVar3 = puVar1;
  } while (param_1 != 0 && (char)param_2 == (char)uVar2);
  *puVar1 = param_2;
  out(unaff_RSI[2],(ushort)in_EAX ^ 0x68);
  return;
}



// FUNCTION 14d7ad05f FUN_14d7ad05f body=3 status=ok
// SIG undefined FUN_14d7ad05f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad05f(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad063 FUN_14d7ad063 body=3 status=ok
// SIG undefined FUN_14d7ad063(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad063(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad067 FUN_14d7ad067 body=15 status=ok
// SIG undefined FUN_14d7ad067(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad067(undefined8 param_1,undefined2 param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  int *piVar4;
  int in_EAX;
  undefined4 in_register_00000004;
  undefined4 *unaff_RDI;
  
  puVar1 = (uint *)(CONCAT44(in_register_00000004,in_EAX) + -0x7e);
  *puVar1 = *puVar1 - in_EAX;
  if ((POPCOUNT(*puVar1 & 0xff) & 1U) != 0) {
    uVar2 = in(param_2);
    *unaff_RDI = uVar2;
    pcVar3 = (code *)swi(0x3a);
    piVar4 = (int *)(*pcVar3)();
    *piVar4 = (int)unaff_RDI + 4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// FUNCTION 14d7ad07b FUN_14d7ad07b body=4 status=ok
// SIG undefined FUN_14d7ad07b(void)

void FUN_14d7ad07b(undefined8 param_1,int param_2)

{
  FUN_14d7ad020(param_1,param_2 + (int)&stack0x00000000);
  return;
}



// FUNCTION 14d7ad07f FUN_14d7ad07f body=3 status=ok
// SIG undefined FUN_14d7ad07f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad07f(void)

{
  int unaff_EBX;
  undefined4 unaff_0000001c;
  
  *(int *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(int *)CONCAT44(unaff_0000001c,unaff_EBX) + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad083 FUN_14d7ad083 body=6 status=ok
// SIG undefined FUN_14d7ad083(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad083(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad08b FUN_14d7ad08b body=20 status=ok
// SIG undefined FUN_14d7ad08b(void)

int FUN_14d7ad08b(int param_1)

{
  return param_1 + -1;
}



// FUNCTION 14d7ad0a0 FUN_14d7ad0a0 body=3 status=ok
// SIG undefined FUN_14d7ad0a0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad0a0(void)

{
  longlong unaff_RDI;
  
  *(char *)(unaff_RDI + -0x6c) = *(char *)(unaff_RDI + -0x6c) << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad0bc FUN_14d7ad0bc body=3 status=ok
// SIG undefined FUN_14d7ad0bc(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad0bc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad0d0 FUN_14d7ad0d0 body=32 status=ok
// SIG undefined FUN_14d7ad0d0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad0d0(void)

{
  uint *puVar1;
  longlong lVar2;
  longlong in_RAX;
  undefined4 unaff_EBX;
  longlong unaff_RSI;
  longlong unaff_R12;
  
  lVar2 = (longlong)*(int *)(in_RAX + 0x72) * 0xb51f63d;
  if ((int)lVar2 != lVar2) {
    from_bcd(*(unkbyte10 *)(unaff_R12 + 0x4e));
    *(undefined4 *)(unaff_RSI + 0x691c0569) = unaff_EBX;
    out(0,(int)unaff_R12);
    puVar1 = (uint *)(unaff_R12 + -0x379e8b46);
    *puVar1 = *puVar1 >> 2 | *puVar1 << 0x1e;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// FUNCTION 14d7ad0f5 FUN_14d7ad0f5 body=4 status=ok
// SIG undefined FUN_14d7ad0f5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad0f5(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad0fd FUN_14d7ad0fd body=1 status=ok
// SIG undefined FUN_14d7ad0fd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad0fd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad101 FUN_14d7ad101 body=4 status=ok
// SIG undefined FUN_14d7ad101(void)

/* WARNING: Control flow encountered bad instruction data */

uint FUN_14d7ad101(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  byte bVar5;
  longlong unaff_RBX;
  char *pcVar6;
  longlong unaff_RBP;
  uint *unaff_RSI;
  undefined1 *unaff_RDI;
  undefined8 *unaff_retaddr;
  
  bVar5 = (byte)param_2 | *(byte *)(unaff_RBX + 0x40);
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) - (int)unaff_retaddr;
  out(CONCAT11(0x3d,bVar5),uRam865b4cd84bf52b05);
  if ((char)((byte)uRam865b4cd84bf52b05 | 0x36) < '\0') {
    return uRam865b4cd84bf52b05 | 0x36;
  }
  uVar3 = uRam865b4cd84bf52b05 | 0x8290bbfe;
  pcVar6 = (char *)CONCAT71((int7)((ulonglong)*unaff_retaddr >> 8),0x99);
  puVar1 = (uint *)(unaff_RDI + 1);
  *unaff_RDI = (char)uVar3;
  *(uint *)(unaff_RBP + -0x1909dbd8) = *(uint *)(unaff_RBP + -0x1909dbd8) & (uint)unaff_RSI;
  uVar4 = (ulonglong)uVar3;
  bVar2 = (byte)param_1 ^ 0x7a;
  uVar3 = (uint)param_1 ^ 0x7a;
  out(0xb7,bVar2);
  if (bVar2 != 0) {
    *unaff_retaddr = unaff_retaddr + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar1 = *unaff_RSI;
    unaff_RSI = unaff_RSI + 1;
    puVar1 = puVar1 + 1;
  }
  *pcVar6 = *pcVar6;
  if (-1 < *pcVar6) {
    uVar3 = in(0xff);
    if (*pcVar6 < '\x01') {
      return uVar3;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_retaddr =
       CONCAT44((int)((ulonglong)param_2 >> 0x20),
                CONCAT22((short)((ulonglong)param_2 >> 0x10),CONCAT11(0x3d,bVar5)));
  *puVar1 = uVar3;
  out(0x88,uVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad105 FUN_14d7ad105 body=3 status=ok
// SIG undefined FUN_14d7ad105(void)

/* WARNING: Control flow encountered bad instruction data */

uint FUN_14d7ad105(longlong param_1,undefined1 param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  char *pcVar5;
  longlong unaff_RBP;
  uint *unaff_RSI;
  undefined1 *unaff_RDI;
  undefined8 unaff_retaddr;
  
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) - (int)&stack0x00000000;
  out(CONCAT11(0x3d,param_2),uRam865b4cd84bf52b05);
  if ((char)((byte)uRam865b4cd84bf52b05 | 0x36) < '\0') {
    return uRam865b4cd84bf52b05 | 0x36;
  }
  uVar3 = uRam865b4cd84bf52b05 | 0x8290bbfe;
  pcVar5 = (char *)CONCAT71((int7)((ulonglong)unaff_retaddr >> 8),0x99);
  puVar1 = (uint *)(unaff_RDI + 1);
  *unaff_RDI = (char)uVar3;
  *(uint *)(unaff_RBP + -0x1909dbd8) = *(uint *)(unaff_RBP + -0x1909dbd8) & (uint)unaff_RSI;
  uVar4 = (ulonglong)uVar3;
  bVar2 = (byte)param_1 ^ 0x7a;
  uVar3 = (uint)param_1 ^ 0x7a;
  out(0xb7,bVar2);
  if (bVar2 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar1 = *unaff_RSI;
    unaff_RSI = unaff_RSI + 1;
    puVar1 = puVar1 + 1;
  }
  *pcVar5 = *pcVar5;
  if (-1 < *pcVar5) {
    uVar3 = in(0xff);
    if (*pcVar5 < '\x01') {
      return uVar3;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar1 = uVar3;
  out(0x88,uVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad109 FUN_14d7ad109 body=8 status=ok
// SIG undefined FUN_14d7ad109(void)

/* WARNING: Control flow encountered bad instruction data */

ulonglong FUN_14d7ad109(undefined8 param_1,undefined2 param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  char *pcVar5;
  longlong unaff_RBP;
  uint *unaff_RSI;
  undefined1 *unaff_RDI;
  
  out(param_2,(int)in_RAX);
  if ((char)((byte)in_RAX | 0x36) < '\0') {
    return in_RAX | 0x36;
  }
  uVar3 = (uint)(in_RAX | 0x36) | 0x8290bbc8;
  pcVar5 = (char *)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),0x99);
  puVar1 = (uint *)(unaff_RDI + 1);
  *unaff_RDI = (char)uVar3;
  *(uint *)(unaff_RBP + -0x1909dbd8) = *(uint *)(unaff_RBP + -0x1909dbd8) & (uint)unaff_RSI;
  uVar4 = (ulonglong)uVar3;
  bVar2 = (byte)param_1 ^ 0x7a;
  uVar3 = (uint)CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(0xb6,(byte)param_1)) ^ 0x7a;
  out(0xb7,bVar2);
  if (bVar2 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar1 = *unaff_RSI;
    unaff_RSI = unaff_RSI + 1;
    puVar1 = puVar1 + 1;
  }
  *pcVar5 = *pcVar5;
  if (-1 < *pcVar5) {
    uVar3 = in(0xff);
    if (*pcVar5 < '\x01') {
      return (ulonglong)uVar3;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar1 = uVar3;
  out(0x88,uVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad115 FUN_14d7ad115 body=47 status=ok
// SIG undefined FUN_14d7ad115(void)

/* WARNING: Control flow encountered bad instruction data */

ulonglong FUN_14d7ad115(undefined8 param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  undefined8 unaff_RBX;
  char *pcVar5;
  longlong unaff_RBP;
  uint *unaff_RSI;
  undefined1 *unaff_RDI;
  undefined8 unaff_retaddr;
  
  if ((char)((byte)in_RAX | 0x36) < '\0') {
    return in_RAX | 0x36;
  }
  uVar3 = (uint)(in_RAX | 0x36) | 0x8290bbc8;
  pcVar5 = (char *)CONCAT71((int7)((ulonglong)unaff_retaddr >> 8),0x99);
  puVar1 = (uint *)(unaff_RDI + 1);
  *unaff_RDI = (char)uVar3;
  *(uint *)(unaff_RBP + -0x1909dbd8) = *(uint *)(unaff_RBP + -0x1909dbd8) & (uint)unaff_RSI;
  uVar4 = (ulonglong)uVar3;
  bVar2 = (byte)param_1 ^ 0x7a;
  uVar3 = (uint)CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                         CONCAT11((char)((ulonglong)unaff_RBX >> 8),(byte)param_1)) ^ 0x7a;
  out(0xb7,bVar2);
  if (bVar2 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar1 = *unaff_RSI;
    unaff_RSI = unaff_RSI + 1;
    puVar1 = puVar1 + 1;
  }
  *pcVar5 = *pcVar5;
  if (-1 < *pcVar5) {
    uVar3 = in(0xff);
    if (*pcVar5 < '\x01') {
      return (ulonglong)uVar3;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar1 = uVar3;
  out(0x88,uVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad142 FUN_14d7ad142 body=3 status=ok
// SIG undefined FUN_14d7ad142(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad142(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad15b FUN_14d7ad15b body=14 status=ok
// SIG undefined FUN_14d7ad15b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7ad1a9) */

void FUN_14d7ad15b(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad174 FUN_14d7ad174 body=38 status=ok
// SIG undefined FUN_14d7ad174(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7ad190) overlaps instruction at (ram,0x00014d7ad188)
    */

void FUN_14d7ad174(char param_1,undefined2 param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 in_RAX;
  longlong unaff_RBX;
  uint uVar4;
  
  uVar4 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + '~');
  uVar3 = uVar4 + 0x9e6d1070;
  if (0x6192ef8f < uVar4) {
    uVar2 = in(param_2);
    uVar3 = CONCAT31((int3)(uVar3 >> 8),uVar2);
    if (!SCARRY4(uVar4,-0x6192ef90)) {
      *(char *)(unaff_RBX + -0x53) = *(char *)(unaff_RBX + -0x53) - param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  pbVar1 = (byte *)((ulonglong)uVar3 + 0x1d1ec838);
  *pbVar1 = *pbVar1 >> 7 | *pbVar1 << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad1a4 FUN_14d7ad1a4 body=33 status=ok
// SIG undefined FUN_14d7ad1a4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad1a4(byte param_1)

{
  int *piVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  char unaff_BH;
  longlong unaff_RSI;
  
  piVar1 = (int *)(CONCAT71(in_register_00000001,in_AL) + -0x3a5e066c);
  *piVar1 = *piVar1 << (param_1 & 0x1f);
  DAT_13450cfeb230492f = in_AL;
  *(char *)(unaff_RSI + -8) = *(char *)(unaff_RSI + -8) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad1d5 FUN_14d7ad1d5 body=4 status=ok
// SIG undefined FUN_14d7ad1d5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad1d5(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad1ff FUN_14d7ad1ff body=37 status=ok
// SIG undefined FUN_14d7ad1ff(void)

/* WARNING: Instruction at (ram,0x00014d7ad201) overlaps instruction at (ram,0x00014d7ad200)
    */
/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad1ff(undefined8 param_1,undefined2 param_2)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  ulonglong in_RAX;
  longlong unaff_RBX;
  undefined1 *unaff_RSI;
  char *pcVar4;
  
  if (SBORROW1((char)in_RAX,';')) {
    in(0x2b);
    pcVar2 = (code *)swi(1);
    (*pcVar2)();
    return;
  }
  cVar3 = *(char *)(unaff_RBX + (in_RAX & 0xff));
  pcVar4 = (char *)CONCAT71((int7)(in_RAX >> 8),cVar3);
  out(*unaff_RSI,param_2);
  pcVar1 = pcVar4 + 0x159a4e41;
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8) + '\x01';
  in(0x1b);
  if (cVar3 == *pcVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad20f FUN_14d7ad20f body=4 status=ok
// SIG undefined FUN_14d7ad20f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad20f(undefined1 *param_1,undefined8 param_2)

{
  int in_EAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_retaddr;
  
  *(char *)(unaff_RBX + -0x54) = *(char *)(unaff_RBX + -0x54) + (char)((ulonglong)param_2 >> 8);
  uRama333dd890041d30a = (undefined1)in_EAX;
  *param_1 = (char)(CONCAT11((unaff_retaddr & 1) != 0,*param_1) >> 1);
  *(int *)(unaff_RBP + 0x6a) = *(int *)(unaff_RBP + 0x6a) - in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad218 FUN_14d7ad218 body=14 status=ok
// SIG undefined FUN_14d7ad218(void)

char FUN_14d7ad218(void)

{
  char in_AL;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  byte *unaff_RDI;
  
  *(undefined8 *)
   ((ulonglong)
    ((uint)&stack0x00000000 ^
    *(uint *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
             0x29b319c0)) - 8) = 0xffffffffffffff8d;
  out(0x9e,in_AL);
  *unaff_RDI = *unaff_RDI ^ unaff_BH;
  return in_AL + -0x49;
}



// FUNCTION 14d7ad229 FUN_14d7ad229 body=5 status=ok
// SIG undefined FUN_14d7ad229(void)

char FUN_14d7ad229(void)

{
  char in_AL;
  
  return in_AL + -0x49;
}



// FUNCTION 14d7ad232 FUN_14d7ad232 body=12 status=ok
// SIG undefined FUN_14d7ad232(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad232(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint in_EAX;
  uint uVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  undefined1 *unaff_RSI;
  
  uVar3 = in_EAX & *(uint *)(param_2 + -0x405133ff);
  if (uVar3 != 0) {
    uRam2e4363b6006563fb = CONCAT31((int3)(uVar3 >> 8),*unaff_RSI);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar2 = *(byte *)CONCAT44(unaff_0000001c,unaff_EBX);
  out(*unaff_RSI,(short)param_2);
  pbVar1 = (byte *)(ulonglong)bVar2 + 0x159a4e41;
  *pbVar1 = *pbVar1 + ((byte)((ulonglong)param_1 >> 8) & *(byte *)(param_2 + 0x18)) + 1;
  in(0x1b);
  if (bVar2 == *(byte *)(ulonglong)bVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad23e FUN_14d7ad23e body=4 status=ok
// SIG undefined FUN_14d7ad23e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad23e(void)

{
  undefined4 in_EAX;
  undefined1 *unaff_RSI;
  
  uRam2e4363b6006563fb = CONCAT31((int3)((uint)in_EAX >> 8),*unaff_RSI);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad247 FUN_14d7ad247 body=2 status=ok
// SIG undefined FUN_14d7ad247(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad247(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad24f FUN_14d7ad24f body=6 status=ok
// SIG undefined FUN_14d7ad24f(void)

int FUN_14d7ad24f(void)

{
  short in_AX;
  
  return (int)in_AX;
}



// FUNCTION 14d7ad257 FUN_14d7ad257 body=3 status=ok
// SIG undefined FUN_14d7ad257(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad257(void)

{
  int *unaff_RBX;
  
  *unaff_RBX = *unaff_RBX + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad26c FUN_14d7ad26c body=4 status=ok
// SIG undefined FUN_14d7ad26c(void)

/* WARNING: Control flow encountered bad instruction data */

char FUN_14d7ad26c(longlong param_1)

{
  char in_AL;
  byte in_AH;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  byte *unaff_RDI;
  char in_SF;
  char in_OF;
  
  if (param_1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_OF != in_SF) {
    *(undefined4 *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH | in_AH,unaff_BL)) + -0x7f67b46) =
         0xdd461530;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(0x9e,in_AL);
  *unaff_RDI = *unaff_RDI ^ unaff_BH;
  return in_AL + -0x49;
}



// FUNCTION 14d7ad270 FUN_14d7ad270 body=2 status=ok
// SIG undefined FUN_14d7ad270(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad270(void)

{
  byte in_AH;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  
  *(undefined4 *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH | in_AH,unaff_BL)) + -0x7f67b46) =
       0xdd461530;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad274 FUN_14d7ad274 body=12 status=ok
// SIG undefined FUN_14d7ad274(void)

int FUN_14d7ad274(void)

{
  int in_EAX;
  byte in_CF;
  
  return in_EAX + -0x166122ba + (uint)in_CF;
}



// FUNCTION 14d7ad280 FUN_14d7ad280 body=6 status=ok
// SIG undefined FUN_14d7ad280(void)

void FUN_14d7ad280(undefined8 param_1,undefined2 param_2)

{
  longlong unaff_RBX;
  
  out(DAT_15d1a4e5,param_2);
  *(byte *)(unaff_RBX + -0x7519f38e) = *(byte *)(unaff_RBX + -0x7519f38e) ^ 0xbd;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7ad291 FUN_14d7ad291 body=27 status=ok
// SIG undefined FUN_14d7ad291(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad291(undefined8 param_1,undefined2 param_2)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
  in(0xe3);
  out(*(undefined4 *)(unaff_RSI + 1),param_2);
  *(uint *)(unaff_RDI + 0x25) = *(uint *)(unaff_RDI + 0x25) ^ (int)(unaff_RSI + 1) + 4U;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad2c1 FUN_14d7ad2c1 body=11 status=ok
// SIG undefined FUN_14d7ad2c1(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7ad2f3) overlaps instruction at (ram,0x00014d7ad2f1)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7ad2c1(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  byte bVar2;
  undefined8 in_RAX;
  uint *puVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  ulonglong uVar5;
  ulonglong uVar3;
  
  uVar5 = (ulonglong)(uint)(*(int *)(param_2 + -0x41b2a706) * -0x5214bfdb);
  bVar2 = in((short)param_2);
  uVar3 = CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2);
  *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) = *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) ^ bVar2;
  if (*(char *)CONCAT44(unaff_0000001c,unaff_EBX) != '\0') {
    uVar5 = uVar3 & 0xffffffff;
    uVar3 = (ulonglong)&stack0x00000000 & 0xffffffff;
  }
  in(0x42);
  puVar4 = (uint *)(param_1 + -1);
  if (puVar4 != (uint *)0x0 && ((byte)param_3 & *(byte *)(param_3 + 0x5700acbb + uVar3 * 4)) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014d7ad2f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulonglong)*puVar4)();
    return;
  }
  piVar1 = (int *)(*(longlong *)(uVar5 - 0x6d) * 0x13 + 0x71f2316c);
  *piVar1 = *piVar1 - (int)puVar4;
  _DAT_6a11892ce = _DAT_6a11892ce >> 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad2cd FUN_14d7ad2cd body=66 status=ok
// SIG undefined FUN_14d7ad2cd(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7ad2f3) overlaps instruction at (ram,0x00014d7ad2f1)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7ad2cd(longlong param_1,undefined2 param_2,longlong param_3)

{
  int *piVar1;
  byte bVar2;
  undefined8 in_RAX;
  uint *puVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  ulonglong unaff_RSI;
  ulonglong uVar3;
  
  bVar2 = in(param_2);
  uVar3 = CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2);
  *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) = *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) ^ bVar2;
  if (*(char *)CONCAT44(unaff_0000001c,unaff_EBX) != '\0') {
    unaff_RSI = uVar3 & 0xffffffff;
    uVar3 = (ulonglong)&stack0x00000000 & 0xffffffff;
  }
  in(0x42);
  puVar4 = (uint *)(param_1 + -1);
  if (puVar4 != (uint *)0x0 && ((byte)param_3 & *(byte *)(param_3 + 0x5700acbb + uVar3 * 4)) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014d7ad2f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulonglong)*puVar4)();
    return;
  }
  piVar1 = (int *)(*(longlong *)(unaff_RSI - 0x6d) * 0x13 + 0x71f2316c);
  *piVar1 = *piVar1 - (int)puVar4;
  _DAT_6a11892ce = _DAT_6a11892ce >> 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad31f FUN_14d7ad31f body=17 status=ok
// SIG undefined FUN_14d7ad31f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad31f(undefined8 param_1,char *param_2)

{
  byte in_AH;
  longlong unaff_RSI;
  
  *param_2 = *param_2 - (char)((ulonglong)param_2 >> 8);
  *(byte *)(unaff_RSI + -0x5b) = *(byte *)(unaff_RSI + -0x5b) ^ in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad333 FUN_14d7ad333 body=2 status=ok
// SIG undefined FUN_14d7ad333(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad333(longlong param_1)

{
  code *pcVar1;
  ulonglong in_RAX;
  
  if (param_1 == 1) {
    *(undefined1 *)(in_RAX + 3) = *(undefined1 *)(in_RAX + 3);
    pcVar1 = (code *)swi(1);
    (*pcVar1)(0,in_RAX & 0xffffffff);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad338 FUN_14d7ad338 body=4 status=ok
// SIG undefined FUN_14d7ad338(void)

/* WARNING: Heritage AFTER dead removal. Example location: RCX : 0x00014d7ad340 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_14d7ad338(undefined8 param_1)

{
  char *pcVar1;
  code *pcVar2;
  uint uVar3;
  
  uVar3 = in(0x91);
  pcVar1 = (char *)((ulonglong)uVar3 + 3);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  pcVar2 = (code *)swi(1);
  (*pcVar2)(param_1,(ulonglong)uVar3);
  return;
}



// FUNCTION 14d7ad33d FUN_14d7ad33d body=7 status=ok
// SIG undefined FUN_14d7ad33d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad33d(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad345 FUN_14d7ad345 body=5 status=ok
// SIG undefined FUN_14d7ad345(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad345(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad35f FUN_14d7ad35f body=13 status=ok
// SIG undefined FUN_14d7ad35f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad35f(void)

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



// FUNCTION 14d7ad374 FUN_14d7ad374 body=2 status=ok
// SIG undefined FUN_14d7ad374(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad374(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad378 FUN_14d7ad378 body=3 status=ok
// SIG undefined FUN_14d7ad378(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad378(void)

{
  undefined1 in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       ~*(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad37c FUN_14d7ad37c body=2 status=ok
// SIG undefined FUN_14d7ad37c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad37c(void)

{
  undefined4 *unaff_RSI;
  
  uRam2002e91b84640b50 = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad380 FUN_14d7ad380 body=4 status=ok
// SIG undefined FUN_14d7ad380(void)

void FUN_14d7ad380(void)

{
  FUN_14d80f38b();
  return;
}



// FUNCTION 14d7ad384 thunk_FUN_14d80f38b body=5 status=ok
// SIG undefined thunk_FUN_14d80f38b(void)

void thunk_FUN_14d80f38b(void)

{
  FUN_14d80f38b();
  return;
}



// FUNCTION 14d7ad393 FUN_14d7ad393 body=2 status=ok
// SIG undefined FUN_14d7ad393(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad393(void)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  undefined8 uStack_10;
  
  puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\b';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad3a0 FUN_14d7ad3a0 body=2 status=ok
// SIG undefined FUN_14d7ad3a0(void)

void FUN_14d7ad3a0(undefined8 param_1,undefined2 param_2)

{
  undefined4 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
  return;
}



// FUNCTION 14d7ad3b2 FUN_14d7ad3b2 body=14 status=ok
// SIG undefined FUN_14d7ad3b2(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7ad3b2(void)

{
  uint uVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 in_RAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined8 *unaff_RBP;
  undefined1 *unaff_RDI;
  longlong unaff_retaddr;
  undefined1 auStackX_8 [32];
  undefined1 auStack_c58a [50450];
  
  if (-1 < (char)((char)in_RAX + -7)) {
    uRam0000000141d76ebf = 0x570074a1;
    uRam000000014d8c6db8 = 0xdff74824;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RBP + -5) = *(char *)(unaff_RBP + -5) + (char)((ulonglong)in_RAX >> 8);
  *unaff_RDI = 0;
  *(char *)(unaff_retaddr + -0xe) = *(char *)(unaff_retaddr + -0xe) + unaff_BH;
                    /* WARNING: Read-only address (ram,0x00014d8c6db8) is written */
  uRam000000014d8c6db8 = (uint)auStackX_8 ^ 0xdff74824;
  cVar3 = '\x0e';
  puVar2 = (undefined8 *)register0x00000020;
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar3 = cVar3 + -1;
  } while ('\0' < cVar3);
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + '\x01';
                    /* WARNING: Read-only address (ram,0x000141d76ebf) is written */
  uRam0000000141d76ebf = 0x3a5095c;
  uVar1 = (int)auStack_c58a + -0x70 + *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *(undefined8 *)((ulonglong)uVar1 - 8) = 0xffffffffffffffbb;
  do {
  } while (uVar1 != 0);
  return;
}



// FUNCTION 14d7ad3f6 FUN_14d7ad3f6 body=8 status=ok
// SIG undefined FUN_14d7ad3f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7ad3f6(longlong param_1)

{
  uint uVar1;
  char cVar2;
  char in_AH;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined8 *puVar3;
  undefined8 *unaff_RBP;
  undefined1 *unaff_RDI;
  undefined1 auStack_c592 [50562];
  undefined8 uStack_10;
  
  *(char *)(unaff_RBP + -5) = *(char *)(unaff_RBP + -5) + in_AH;
  *unaff_RDI = 0;
  *(char *)(param_1 + -0xe) = *(char *)(param_1 + -0xe) + unaff_BH;
                    /* WARNING: Read-only address (ram,0x00014d8c6db8) is written */
  uRam000000014d8c6db8 = (uint)&stack0x00000000 ^ 0xdff74824;
  puVar3 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar2 = '\x0e';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar3 = puVar3 + -1;
    *puVar3 = *unaff_RBP;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + '\x01';
                    /* WARNING: Read-only address (ram,0x000141d76ebf) is written */
  uRam0000000141d76ebf = 0x3a5095c;
  uVar1 = (int)auStack_c592 + -0x70 + *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *(undefined8 *)((ulonglong)uVar1 - 8) = 0xffffffffffffffbb;
  do {
  } while (uVar1 != 0);
  return;
}



// FUNCTION 14d7ad40c FUN_14d7ad40c body=26 status=ok
// SIG undefined FUN_14d7ad40c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7ad40c(void)

{
  uint uVar1;
  ulonglong uVar2;
  int *unaff_RBX;
  byte in_CF;
  undefined1 auStackX_8 [32];
  
  *(char *)unaff_RBX = (char)*unaff_RBX + '\x01';
                    /* WARNING: Read-only address (ram,0x000141d76ebf) is written */
  uVar2 = (ulonglong)in_CF << 0x20 | 0x570074a1;
  uRam0000000141d76ebf = (uint)(uVar2 >> 0x16) | (uint)(uVar2 << 0xb);
  uVar1 = (int)auStackX_8 + *unaff_RBX;
  *(undefined8 *)((ulonglong)uVar1 - 8) = 0xffffffffffffffbb;
  do {
  } while (uVar1 != 0);
  return;
}



// FUNCTION 14d7ad432 FUN_14d7ad432 body=4 status=ok
// SIG undefined FUN_14d7ad432(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad432(uint param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_EAX;
  byte bVar5;
  longlong unaff_RBX;
  int unaff_EBP;
  byte *unaff_RSI;
  undefined2 in_ES;
  bool in_ZF;
  bool bVar6;
  
  *(undefined2 *)(unaff_RSI + 0x54) = in_ES;
  if (in_ZF) {
    out((short)param_2,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)(unaff_RBX + -0x3fb63d00) = *(uint *)(unaff_RBX + -0x3fb63d00) ^ param_2;
  do {
    pbVar2 = unaff_RSI + 1;
    out(*unaff_RSI,(short)param_2);
    bVar1 = *pbVar2;
    bVar5 = (byte)(param_1 >> 8);
    *pbVar2 = *pbVar2 - bVar5;
    uVar3 = (uint)(bVar1 < bVar5);
    bVar6 = SCARRY4(param_1,unaff_EBP);
    iVar4 = param_1 + unaff_EBP;
    param_1 = iVar4 + uVar3;
    unaff_RSI = pbVar2;
  } while ((POPCOUNT(param_1 & 0xff) & 1U) == 0);
  if (param_1 == 0 || (bVar6 != SCARRY4(iVar4,uVar3)) != (int)param_1 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad436 FUN_14d7ad436 body=2 status=ok
// SIG undefined FUN_14d7ad436(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad436(uint param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_EAX;
  byte bVar5;
  longlong unaff_RBX;
  int unaff_EBP;
  byte *unaff_RSI;
  bool in_ZF;
  bool bVar6;
  
  if (in_ZF) {
    out((short)param_2,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)(unaff_RBX + -0x3fb63d00) = *(uint *)(unaff_RBX + -0x3fb63d00) ^ param_2;
  do {
    pbVar2 = unaff_RSI + 1;
    out(*unaff_RSI,(short)param_2);
    bVar1 = *pbVar2;
    bVar5 = (byte)(param_1 >> 8);
    *pbVar2 = *pbVar2 - bVar5;
    uVar3 = (uint)(bVar1 < bVar5);
    bVar6 = SCARRY4(param_1,unaff_EBP);
    iVar4 = param_1 + unaff_EBP;
    param_1 = iVar4 + uVar3;
    unaff_RSI = pbVar2;
  } while ((POPCOUNT(param_1 & 0xff) & 1U) == 0);
  if (param_1 == 0 || (bVar6 != SCARRY4(iVar4,uVar3)) != (int)param_1 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad44f FUN_14d7ad44f body=10 status=ok
// SIG undefined FUN_14d7ad44f(void)

void FUN_14d7ad44f(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  uint unaff_ESI;
  
  *(int *)(unaff_RBX + 0x23) = *(int *)(unaff_RBX + 0x23) << 1;
  *(uint *)(unaff_RBP + -0x799f2c2a) = *(uint *)(unaff_RBP + -0x799f2c2a) ^ unaff_ESI;
  return;
}



// FUNCTION 14d7ad468 FUN_14d7ad468 body=5 status=ok
// SIG undefined FUN_14d7ad468(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad468(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad47e FUN_14d7ad47e body=6 status=ok
// SIG undefined FUN_14d7ad47e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad47e(undefined8 param_1,uint param_2)

{
  byte *pbVar1;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  *(uint *)(unaff_RSI + 0x4a3b15f6) = *(uint *)(unaff_RSI + 0x4a3b15f6) | param_2;
  pbVar1 = &stack0x00000000 + unaff_RBP * 4;
  *pbVar1 = *pbVar1 >> 1 | *pbVar1 << 7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad486 FUN_14d7ad486 body=17 status=ok
// SIG undefined FUN_14d7ad486(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad486(undefined8 param_1,char param_2)

{
  uint *puVar1;
  char *pcVar2;
  undefined4 in_EAX;
  undefined3 uVar4;
  int iVar3;
  undefined4 in_register_00000004;
  undefined1 *unaff_RSI;
  int *unaff_RDI;
  longlong in_FS_OFFSET;
  
  DAT_15a3b1ec7 = ~DAT_15a3b1ec7;
  uVar4 = (undefined3)((uint)in_EAX >> 8);
  puVar1 = (uint *)(CONCAT44(in_register_00000004,CONCAT31(uVar4,*unaff_RSI)) + 0x50);
  *puVar1 = *puVar1 ^ (uint)&stack0x00000000;
  iVar3 = CONCAT31(uVar4,uRamaf00cb173b79be4a);
  *(undefined1 *)(unaff_RDI + 1) = unaff_RSI[1];
  if (iVar3 < *unaff_RDI) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar2 = (char *)((longlong)unaff_RDI + in_FS_OFFSET + 5);
  *pcVar2 = *pcVar2 - param_2;
  return;
}



// FUNCTION 14d7ad49a FUN_14d7ad49a body=2 status=ok
// SIG undefined FUN_14d7ad49a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad49a(void)

{
  bool in_SF;
  
  if (in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad49f FUN_14d7ad49f body=5 status=ok
// SIG undefined FUN_14d7ad49f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad49f(undefined8 param_1,char param_2)

{
  char *pcVar1;
  int in_EAX;
  undefined1 *unaff_RSI;
  longlong unaff_RDI;
  longlong in_FS_OFFSET;
  
  *(undefined1 *)(unaff_RDI + 8) = *unaff_RSI;
  if (in_EAX < *(int *)(unaff_RDI + 4)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(in_FS_OFFSET + unaff_RDI + 9);
  *pcVar1 = *pcVar1 - param_2;
  return;
}



// FUNCTION 14d7ad4ac FUN_14d7ad4ac body=4 status=ok
// SIG undefined FUN_14d7ad4ac(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad4ac(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  undefined2 *in_RAX;
  undefined2 in_ES;
  
  bVar1 = *param_2;
  *param_2 = *param_2 + (byte)in_RAX;
  if (!CARRY1(bVar1,(byte)in_RAX) && *param_2 != 0) {
    *in_RAX = in_ES;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad4b1 FUN_14d7ad4b1 body=41 status=ok
// SIG undefined FUN_14d7ad4b1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad4b1(void)

{
  undefined2 *in_RAX;
  undefined2 in_ES;
  
  *in_RAX = in_ES;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad4e7 FUN_14d7ad4e7 body=2 status=ok
// SIG undefined FUN_14d7ad4e7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad4e7(void)

{
  undefined4 in_EAX;
  
  out(0x83,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad4eb FUN_14d7ad4eb body=2 status=ok
// SIG undefined FUN_14d7ad4eb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad4eb(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0xbc);
  (*pcVar1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad4f3 FUN_14d7ad4f3 body=4 status=ok
// SIG undefined FUN_14d7ad4f3(void)

void FUN_14d7ad4f3(void)

{
  return;
}



// FUNCTION 14d7ad4fc FUN_14d7ad4fc body=8 status=ok
// SIG undefined FUN_14d7ad4fc(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad4fc(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined7 uVar2;
  int *unaff_RSI;
  
  uVar2 = (undefined7)((ulonglong)param_2 >> 8);
  cVar1 = (byte)param_2 - *(byte *)(param_2 + 0x56);
  *(uint *)CONCAT71(uVar2,cVar1) =
       *(int *)CONCAT71(uVar2,cVar1) + *unaff_RSI +
       (uint)((byte)param_2 < *(byte *)(param_2 + 0x56));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad508 FUN_14d7ad508 body=11 status=ok
// SIG undefined FUN_14d7ad508(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad508(void)

{
  byte *pbVar1;
  undefined1 in_AL;
  byte in_AH;
  longlong unaff_RBP;
  uint unaff_ESI;
  
  pbVar1 = (byte *)((ulonglong)(unaff_ESI | *(uint *)(unaff_RBP + -0x12)) + 0x57);
  *pbVar1 = *pbVar1 | in_AH;
  out(0x9a,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad521 FUN_14d7ad521 body=46 status=ok
// SIG undefined FUN_14d7ad521(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad521(longlong param_1,uint param_2)

{
  uint in_EAX;
  uint uVar1;
  char unaff_BL;
  undefined8 *unaff_RBP;
  undefined8 uVar2;
  uint *unaff_RSI;
  uint *unaff_RDI;
  undefined2 in_CS;
  
  if (param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = *unaff_RBP;
  DAT_f412685d = DAT_f412685d + unaff_BL + (*unaff_RSI < *unaff_RDI);
  *(undefined2 *)((ulonglong)param_2 - 0x70) = in_CS;
  uVar1 = (uint)uVar2 | 0x9759786c;
  out((short)in_EAX,uVar1);
  if ((int)uVar1 < 0) {
    *unaff_RBP = 0xffffffffffffffa6;
    *(int *)((ulonglong)in_EAX - 0x41) =
         (*(int *)((ulonglong)in_EAX - 0x41) + -0x72d946) - (uint)(uVar1 < 0xcae9e57f);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad52d FUN_14d7ad52d body=1 status=ok
// SIG undefined FUN_14d7ad52d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad52d(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  uint in_EAX;
  uint unaff_EBX;
  longlong unaff_RBP;
  uint *unaff_RDI;
  
  *unaff_RDI = in_EAX;
  puVar1 = (uint *)(unaff_RBP + -0x4f08b56a);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + unaff_EBX;
  if (CARRY4(uVar2,unaff_EBX) || *puVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(param_2 + -0x41) = (*(int *)(param_2 + -0x41) + -0x72d946) - (uint)(in_EAX < 0xcae9e57f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ad536 FUN_14d7ad536 body=18 status=ok
// SIG undefined FUN_14d7ad536(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ad536(longlong param_1)

{
  *(char *)(param_1 * 5) = *(char *)(param_1 * 5) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bc73a FUN_14d7bc73a body=8 status=ok
// SIG undefined FUN_14d7bc73a(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bc73b) overlaps instruction at (ram,0x00014d7bc73a)
    */

void FUN_14d7bc73a(undefined8 param_1,int *param_2,undefined8 param_3,char param_4)

{
  byte unaff_BL;
  undefined7 unaff_00000019;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  longlong in_R10;
  byte in_CF;
  bool in_SF;
  float10 in_ST0;
  
  if (!in_SF) {
    *(uint *)CONCAT71(unaff_00000019,unaff_BL) =
         (*(int *)CONCAT71(unaff_00000019,unaff_BL) + 0x6be3bc6c) - (uint)in_CF;
    *(char *)(unaff_RDI + -8) = *(char *)(unaff_RDI + -8) + unaff_BL;
    *(char *)(in_R10 + 0x3f) = *(char *)(in_R10 + 0x3f) + param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!CARRY1(unaff_BL,(byte)param_2) && (byte)(unaff_BL + (byte)param_2) != '\0') {
    out(*unaff_RSI,(short)param_2);
    *param_2 = (int)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bc742 FUN_14d7bc742 body=7 status=ok
// SIG undefined FUN_14d7bc742(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bc742(void)

{
  char unaff_BL;
  longlong unaff_RDI;
  char in_R9B;
  longlong in_R10;
  
  *(char *)(unaff_RDI + -8) = *(char *)(unaff_RDI + -8) + unaff_BL;
  *(char *)(in_R10 + 0x3f) = *(char *)(in_R10 + 0x3f) + in_R9B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bc74b FUN_14d7bc74b body=56 status=ok
// SIG undefined FUN_14d7bc74b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bc74b(undefined8 param_1,byte *param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  byte bVar3;
  undefined4 in_EAX;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined2 in_CS;
  bool in_OF;
  uint unaff_retaddr;
  
  out(0xb,in_EAX);
  if (!in_OF) {
    bVar3 = in(0xe);
    uVar1 = in((short)param_2);
    *(undefined1 *)(unaff_RDI + 1) = uVar1;
    out((short)param_2,bVar3 & 0x66);
    *(char *)(unaff_RSI + 0x16e7ff85) = *(char *)(unaff_RSI + 0x16e7ff85) + (bVar3 & 0x66);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = *param_2 | (byte)((ulonglong)param_1 >> 8);
  pcVar2 = (code *)swi(0x24);
  (*pcVar2)(0x2eab63f0,(int)(unaff_retaddr | 0xa8bf0770) >> 0x1f);
  *(undefined2 *)(unaff_RBX + 0x21) = in_CS;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bc76a FUN_14d7bc76a body=8 status=ok
// SIG undefined FUN_14d7bc76a(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bc809) overlaps instruction at (ram,0x00014d7bc808)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bc76a(undefined8 param_1,ulonglong param_2,undefined8 param_3,char param_4)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  short sVar5;
  code *pcVar6;
  uint uVar7;
  undefined1 uVar8;
  uint in_EAX;
  char cVar9;
  longlong unaff_RBP;
  int unaff_ESI;
  longlong in_R10;
  undefined2 in_CS;
  char in_CF;
  bool in_ZF;
  int unaff_retaddr;
  
  cVar9 = (char)((ulonglong)param_1 >> 8);
  if (in_ZF) {
    cVar9 = (char)in_EAX - *(char *)(param_2 + 0xd);
    if (SBORROW1((char)in_EAX,*(char *)(param_2 + 0xd)) != SBORROW1(cVar9,in_CF)) {
      param_2 = (ulonglong)(uint)(unaff_retaddr >> 0x1f);
    }
    pcVar6 = (code *)swi(0x24);
    (*pcVar6)((char)param_1,param_2);
    *(undefined2 *)((ulonglong)CONCAT31((int3)(in_EAX >> 8),cVar9 - in_CF) + 0x21) = in_CS;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar5 = (short)*(char *)(ulonglong)in_EAX;
  uVar8 = (undefined1)((short)unaff_retaddr / sVar5);
  uVar7 = CONCAT22((short)((uint)unaff_retaddr >> 0x10),
                   CONCAT11((char)((short)unaff_retaddr % sVar5),uVar8));
  pcVar1 = (char *)(ulonglong)in_EAX + -0x80;
  cVar3 = *pcVar1;
  *pcVar1 = *pcVar1 + cVar9;
  param_2 = param_2 & 0xffffffff;
  if (*pcVar1 != '\0') {
    uRamb800b12b282300f6 = uVar7;
    if (SCARRY1(cVar3,cVar9)) {
      *(char *)(in_R10 + 0x3f) = *(char *)(in_R10 + 0x3f) + param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (SCARRY1(cVar3,cVar9)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (-1 < *pcVar1) {
    *(undefined8 *)(unaff_RBP + -0x7a5833ac) = 0x2d;
    piVar2 = (int *)(param_2 + 0x67);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + unaff_ESI;
    if (*piVar2 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*piVar2 != 0 && !SCARRY4(iVar4,unaff_ESI)) {
      *(undefined8 *)((ulonglong)uVar7 - 8) = 0x14d7bc879;
      func_0x0001145dd97a();
      out((short)param_2,uVar8);
                    /* WARNING: Could not recover jumptable at 0x00014d7bc87e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*_DAT_ffffffffffffffb9)();
      return;
    }
    pcVar6 = (code *)swi(1);
    (*pcVar6)();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bc773 FUN_14d7bc773 body=19 status=ok
// SIG undefined FUN_14d7bc773(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bc773(undefined8 param_1)

{
  char *unaff_RBX;
  
  *unaff_RBX = *unaff_RBX - (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bc78d FUN_14d7bc78d body=10 status=ok
// SIG undefined FUN_14d7bc78d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bc78d(void)

{
  int in_EAX;
  code *UNRECOVERED_JUMPTABLE;
  char in_SF;
  char in_OF;
  
  if (in_OF == in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!SBORROW4(in_EAX,0x5b6bd88d)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Could not recover jumptable at 0x00014d7bc75f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14d7bc79d FUN_14d7bc79d body=21 status=ok
// SIG undefined FUN_14d7bc79d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bc835) overlaps instruction at (ram,0x00014d7bc833)
    */

void FUN_14d7bc79d(ulonglong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  char *pcVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  uint uVar7;
  int *in_RAX;
  undefined2 uVar8;
  uint uVar9;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  undefined1 *unaff_RSI;
  longlong unaff_RDI;
  uint in_R11D;
  undefined2 in_FPUControlWord;
  undefined8 in_MM3;
  unkbyte10 in_ST5;
  
  uVar5 = *(undefined8 *)(unaff_RDI + -0x18951ff6);
  pavgw((short)in_ST5,(short)uVar5);
  pavgw((short)((unkuint10)in_ST5 >> 0x10),(short)((ulonglong)uVar5 >> 0x10));
  pavgw((short)((unkuint10)in_ST5 >> 0x20),(short)((ulonglong)uVar5 >> 0x20));
  pavgw((short)((unkuint10)in_ST5 >> 0x30),(short)((ulonglong)uVar5 >> 0x30));
  *(int *)((longlong)in_RAX + 0x5e) =
       *(int *)((longlong)in_RAX + 0x5e) - CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  uVar9 = (uint)CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(0x92,(char)param_2)) ^
          *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  if (-1 < (int)uVar9) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  LOCK();
  puVar1 = (undefined1 *)((longlong)in_RAX + unaff_RDI * 2);
  uVar4 = *puVar1;
  *puVar1 = (char)(uVar9 >> 8);
  uVar8 = CONCAT11(uVar4,(char)uVar9);
  uVar7 = CONCAT22((short)(uVar9 >> 0x10),uVar8);
  UNLOCK();
  pcVar3 = (char *)(((ulonglong)uVar7 - 0x1ac6b0e7) + (longlong)in_RAX * 4);
  *pcVar3 = *pcVar3 + (char)in_RAX;
  if ((int)(in_R11D & CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) < 0) {
    out(CONCAT11(0x36,(char)uVar9),(char)in_RAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*unaff_RSI,uVar8);
  pmulhw(in_MM3,*(undefined8 *)in_RAX);
  *(char *)(in_RAX + 0x16) = (char)in_RAX[0x16] + -0x56;
  *(uint *)(param_1 - 0x4a) = *(uint *)(param_1 - 0x4a) ^ (uint)unaff_RDI;
  piVar2 = (int *)(param_1 + 0x35 + (longlong)(unaff_RSI + 1) * 8);
  *piVar2 = *piVar2 + (int)in_RAX;
  if (*(uint *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,0xaa))) + -0x28) <
      uVar7) {
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
  pcVar6 = (code *)swi(1);
  (*pcVar6)();
  return;
}



// FUNCTION 14d7bc7be FUN_14d7bc7be body=3 status=ok
// SIG undefined FUN_14d7bc7be(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bc7be(undefined8 param_1,undefined1 param_2)

{
  undefined1 in_AL;
  
  out(CONCAT11(0x36,param_2),in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bc7c2 FUN_14d7bc7c2 body=9 status=ok
// SIG undefined FUN_14d7bc7c2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bc7c2(undefined8 param_1,undefined2 param_2)

{
  undefined1 in_AL;
  
  out(param_2,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bc7d2 FUN_14d7bc7d2 body=4 status=ok
// SIG undefined FUN_14d7bc7d2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bc7d2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bc7e2 FUN_14d7bc7e2 body=4 status=ok
// SIG undefined FUN_14d7bc7e2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bc7e2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bc7eb FUN_14d7bc7eb body=7 status=ok
// SIG undefined FUN_14d7bc7eb(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bc7eb(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  byte *in_RAX;
  byte bVar6;
  undefined1 uVar7;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  
  uVar7 = (undefined1)((ulonglong)param_2 >> 8);
  bVar6 = (byte)param_2;
  iVar5 = (int)unaff_RSI + 4;
  out(*unaff_RSI,(short)param_2);
  pbVar2 = (byte *)(param_2 + 0x57 + (longlong)in_RAX * 8);
  *pbVar2 = *pbVar2 | bVar6;
  *in_RAX = *in_RAX << 1 | (char)*in_RAX < '\0';
  *(uint *)(unaff_RDI + -0x70d048ec) = *(uint *)(unaff_RDI + -0x70d048ec) & (uint)&stack0x00000000;
  piVar1 = (int *)(param_2 + 0x67);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + iVar5;
  if (*piVar1 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*piVar1 != 0 && !SCARRY4(iVar3,iVar5)) {
    *(undefined8 *)(((ulonglong)in_RAX & 0xffffffff) - 8) = 0x14d7bc879;
    func_0x0001145dd97a();
    out(CONCAT11(uVar7,bVar6),(char)((ulonglong)in_RAX & 0xffffffff));
                    /* WARNING: Could not recover jumptable at 0x00014d7bc87e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_ffffffffffffffb9)();
    return;
  }
  pcVar4 = (code *)swi(1);
  (*pcVar4)();
  return;
}



// FUNCTION 14d7bc7f4 FUN_14d7bc7f4 body=6 status=ok
// SIG undefined FUN_14d7bc7f4(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bc7f4(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint in_EAX;
  undefined2 uVar4;
  int unaff_ESI;
  longlong unaff_RDI;
  
  uVar4 = (undefined2)param_2;
  *(uint *)(unaff_RDI + -0x70d048ec) = *(uint *)(unaff_RDI + -0x70d048ec) & (uint)&stack0x00000000;
  piVar1 = (int *)(param_2 + 0x67);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + unaff_ESI;
  if (*piVar1 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*piVar1 != 0 && !SCARRY4(iVar2,unaff_ESI)) {
    *(undefined8 *)((ulonglong)in_EAX - 8) = 0x14d7bc879;
    func_0x0001145dd97a();
    out(uVar4,(char)in_EAX);
                    /* WARNING: Could not recover jumptable at 0x00014d7bc87e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_ffffffffffffffb9)();
    return;
  }
  pcVar3 = (code *)swi(1);
  (*pcVar3)();
  return;
}



// FUNCTION 14d7bc7fc FUN_14d7bc7fc body=1 status=ok
// SIG undefined FUN_14d7bc7fc(void)

void FUN_14d7bc7fc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7bc809 FUN_14d7bc809 body=2 status=ok
// SIG undefined FUN_14d7bc809(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bc809(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


