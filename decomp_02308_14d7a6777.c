// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14d7a6777 FUN_14d7a6777 body=9 status=ok
// SIG undefined FUN_14d7a6777(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a6777(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong unaff_RBP;
  longlong unaff_RSI;
  byte *unaff_RDI;
  char in_SS;
  bool bVar3;
  
  if (param_1 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = (uint)(*(byte *)(unaff_RSI + 4) < *unaff_RDI);
  uVar2 = (uint)unaff_RBP;
  bVar3 = uRam00000000219c1405 < uVar2;
  uVar2 = uRam00000000219c1405 - uVar2;
  uRam00000000219c1405 = uVar2 - uVar1;
  if (bVar3 || uVar2 < uVar1) {
    *(char *)(unaff_RBP + -0x33903a45) = *(char *)(unaff_RBP + -0x33903a45) + in_SS;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (SBORROW4((int)_DAT_965e3100,-0x5607fa00) !=
      SBORROW4((int)_DAT_965e3100 + 0x5607fa00,(uint)(bVar3 || uVar2 < uVar1))) {
    in(0xdf);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_965e3100 = 0xffffffffffffffbc;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6780 FUN_14d7a6780 body=20 status=ok
// SIG undefined FUN_14d7a6780(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a6780(longlong param_1)

{
  uint uVar1;
  int in_EAX;
  char unaff_BL;
  uint uVar2;
  longlong unaff_RBP;
  byte *unaff_RSI;
  byte *unaff_RDI;
  bool bVar3;
  
  if (param_1 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = (uint)(*unaff_RSI < *unaff_RDI);
  uVar2 = (uint)unaff_RBP;
  bVar3 = uRam00000000219c1405 < uVar2;
  uVar2 = uRam00000000219c1405 - uVar2;
  uRam00000000219c1405 = uVar2 - uVar1;
  if (bVar3 || uVar2 < uVar1) {
    *(char *)(unaff_RBP + -0x33903a45) = *(char *)(unaff_RBP + -0x33903a45) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (SBORROW4(in_EAX,-0x5607fa00) != SBORROW4(in_EAX + 0x5607fa00,(uint)(bVar3 || uVar2 < uVar1)))
  {
    in(0xdf);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6795 FUN_14d7a6795 body=3 status=ok
// SIG undefined FUN_14d7a6795(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6795(longlong param_1)

{
  undefined4 in_EAX;
  longlong unaff_RDI;
  undefined2 in_ES;
  
  *(undefined2 *)(unaff_RDI + param_1 * 4) = in_ES;
  uRam587f04d925ccb17c = CONCAT31((int3)((uint)in_EAX >> 8),(char)((ulonglong)param_1 >> 8));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a67a5 FUN_14d7a67a5 body=1 status=ok
// SIG undefined FUN_14d7a67a5(void)

void FUN_14d7a67a5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7a67a9 FUN_14d7a67a9 body=14 status=ok
// SIG undefined FUN_14d7a67a9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a67a9(void)

{
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (in_ZF || in_OF != in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a67bd FUN_14d7a67bd body=19 status=ok
// SIG undefined FUN_14d7a67bd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a67bd(void)

{
  char cVar1;
  longlong unaff_RBX;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  undefined2 in_FPUControlWord;
  longlong lStack_9640;
  undefined8 uStack_10;
  
  puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\f';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  *(undefined2 *)(lStack_9640 + 0xce317f3 + unaff_RBX * 4) = in_FPUControlWord;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a67f2 FUN_14d7a67f2 body=8 status=ok
// SIG undefined FUN_14d7a67f2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a67f2(void)

{
  undefined1 in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RBX;
  int unaff_ESI;
  undefined2 in_FPUControlWord;
  longlong unaff_retaddr;
  
  if (-1 < unaff_ESI + *(int *)(CONCAT71(in_register_00000001,in_AL) + 0x403a3319)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(unaff_retaddr + 0xce317f3 + unaff_RBX * 4) = in_FPUControlWord;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6803 FUN_14d7a6803 body=3 status=ok
// SIG undefined FUN_14d7a6803(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6803(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a680b FUN_14d7a680b body=8 status=ok
// SIG undefined FUN_14d7a680b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a680b(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6813 FUN_14d7a6813 body=1 status=ok
// SIG undefined FUN_14d7a6813(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6813(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6817 FUN_14d7a6817 body=4 status=ok
// SIG undefined FUN_14d7a6817(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6817(void)

{
  undefined1 uVar1;
  undefined4 in_EAX;
  
  uVar1 = in(0xda);
  out(0x58,CONCAT31((int3)((uint)in_EAX >> 8),uVar1));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a681f FUN_14d7a681f body=4 status=ok
// SIG undefined FUN_14d7a681f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a681f(undefined8 param_1,longlong param_2)

{
  byte unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  int unaff_ESI;
  longlong unaff_RDI;
  
  if (-1 < (int)unaff_RDI -
           *(int *)(CONCAT71(unaff_00000019,unaff_BL & *(byte *)(unaff_RBP + 0x67 + unaff_RDI * 8))
                   + -0x4a)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  LOCK();
  *(int *)(param_2 + 0x5fc90047) = unaff_ESI + 1;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6823 FUN_14d7a6823 body=21 status=ok
// SIG undefined FUN_14d7a6823(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6823(undefined8 param_1,longlong param_2)

{
  longlong unaff_RBX;
  int unaff_ESI;
  int unaff_EDI;
  byte in_CF;
  
  if (-1 < (int)((unaff_EDI - *(int *)(unaff_RBX + -0x4a)) - (uint)in_CF)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  LOCK();
  *(int *)(param_2 + 0x5fc90047) = unaff_ESI + 1;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6849 FUN_14d7a6849 body=8 status=ok
// SIG undefined FUN_14d7a6849(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6849(undefined8 param_1)

{
  char *pcVar1;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  LOCK();
  *(char *)(unaff_RDI + -4 + unaff_RBX * 2) = (char)param_1;
  UNLOCK();
  pcVar1 = (char *)(unaff_RBX + -0x4c + unaff_RSI);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6852 FUN_14d7a6852 body=3 status=ok
// SIG undefined FUN_14d7a6852(void)

void FUN_14d7a6852(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  int *in_RAX;
  undefined1 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  iRam2550d72f4b6ffa24 = *in_RAX * -0x51aab1c6;
  out(0x7e,iRam2550d72f4b6ffa24);
  *(int *)(unaff_RDI + 0x62) = iRam2550d72f4b6ffa24;
  return;
}



// FUNCTION 14d7a685b FUN_14d7a685b body=5 status=ok
// SIG undefined FUN_14d7a685b(void)

void FUN_14d7a685b(void)

{
  undefined4 in_EAX;
  longlong unaff_RDI;
  
  out(0x7e,in_EAX);
  *(undefined4 *)(unaff_RDI + 0x61) = in_EAX;
  uRam2550d72f4b6ffa24 = in_EAX;
  return;
}



// FUNCTION 14d7a6863 FUN_14d7a6863 body=1 status=ok
// SIG undefined FUN_14d7a6863(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6863(undefined8 param_1,undefined2 param_2)

{
  undefined4 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6867 FUN_14d7a6867 body=6 status=ok
// SIG undefined FUN_14d7a6867(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6867(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(5);
  (*pcVar1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a686f FUN_14d7a686f body=17 status=ok
// SIG undefined FUN_14d7a686f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a686f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x55);
  (*pcVar1)();
  in(0xd3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6884 FUN_14d7a6884 body=3 status=ok
// SIG undefined FUN_14d7a6884(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6884(void)

{
  undefined4 in_EAX;
  bool in_CF;
  
  if (!in_CF) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  out(0x58,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6933 FUN_14d7a6933 body=7 status=ok
// SIG undefined FUN_14d7a6933(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6933(void)

{
  code *pcVar1;
  undefined1 unaff_BH;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
  LOCK();
  UNLOCK();
  pcVar1 = (code *)swi(0);
  DAT_d9be1003 = unaff_BH;
  (*pcVar1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6940 FUN_14d7a6940 body=7 status=ok
// SIG undefined FUN_14d7a6940(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a69c1) overlaps instruction at (ram,0x00014d7a69c0)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a6940(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  uint *puVar3;
  uint uVar4;
  code *pcVar7;
  undefined8 uVar8;
  byte bVar9;
  undefined8 in_RAX;
  char cVar10;
  longlong unaff_RBX;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong unaff_RBP;
  char *unaff_RSI;
  char *unaff_RDI;
  bool in_PF;
  bool in_OF;
  uint uVar5;
  uint uVar6;
  
  if (in_OF) {
    pcVar7 = (code *)swi(0x75);
    in_RAX = (*pcVar7)();
  }
  else {
    if (!in_PF) {
      cRam000000018fddf5eb = cRam000000018fddf5eb + '\x01';
      out(0x6e,(char)in_RAX);
      pcVar1 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(0x86,(char)param_2)) +
                       -0x411281dc);
      *pcVar1 = *pcVar1 + (char)in_RAX;
      uRame53556fc7715d485 = (undefined2)in_RAX;
      *(uint *)(unaff_RBP + 0x601bb581) = *(uint *)(unaff_RBP + 0x601bb581) & (uint)unaff_RSI;
      pbVar2 = (byte *)(unaff_RBP + 0x7ee79258);
      *pbVar2 = *pbVar2 | (byte)((ulonglong)in_RAX >> 8);
      if (param_1 != 1 && *pbVar2 == 0) {
        in(0xd8);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    (&stack0xfffffffffffffff8)[unaff_RBX] = (&stack0xfffffffffffffff8)[unaff_RBX] + (char)unaff_RBX;
    cVar10 = (char)((ulonglong)param_1 >> 8) + -1;
    if (cVar10 != '\0') {
      do {
        puVar3 = (uint *)(unaff_RBP + 0x7ab3ea31);
        uVar4 = *puVar3;
        uVar12 = (uint)unaff_RBP;
        uVar5 = *puVar3;
        uVar6 = *puVar3;
        unaff_RBP = (ulonglong)(uVar12 - uVar6);
        *unaff_RDI = *unaff_RSI;
        unaff_RDI = _DAT_b2a4bb55;
        puVar11 = (undefined8 *)&DAT_b2a4bb5d;
        while (!SBORROW4(uVar12,uVar5)) {
          uVar8 = *puVar11;
          puVar11 = puVar11 + 1;
          if (uVar12 - uVar6 != 0 && (int)uVar5 <= (int)uVar12) {
            out(uRam000000007be83900,
                (short)CONCAT71((int7)((ulonglong)uVar8 >> 8),(char)uVar8 << 1 | uVar12 < uVar4));
            goto code_r0x00014d7a69c2;
          }
        }
        *(char *)(ulonglong)_DAT_37f1618abd653784 =
             *(char *)(ulonglong)_DAT_37f1618abd653784 + cVar10;
        unaff_RSI = unaff_RSI + 9;
        unaff_RBX = 0x7a;
      } while( true );
    }
  }
  bVar9 = ((byte)in_RAX + 0x29) - ((byte)in_RAX < *(byte *)(unaff_RBX + 0xfefffffffe));
  if (!SBORROW1(bVar9,*unaff_RDI)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (-1 < (char)(bVar9 - *unaff_RDI)) {
    return;
  }
  if ((POPCOUNT((uint)bVar9 - (int)unaff_RBP & 0xff) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00014d7a69c2:
  *(char *)(unaff_RBP + 0x39d1a065) = *(char *)(unaff_RBP + 0x39d1a065) + (char)unaff_RBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a694d FUN_14d7a694d body=19 status=ok
// SIG undefined FUN_14d7a694d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a69c1) overlaps instruction at (ram,0x00014d7a69c0)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a694d(undefined8 param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar5;
  byte in_AL;
  byte bVar6;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong unaff_RBP;
  char *unaff_RSI;
  char *unaff_RDI;
  bool in_ZF;
  uint uVar3;
  uint uVar4;
  
  if (in_ZF) {
    bVar6 = (in_AL + 0x29) - (in_AL < *(byte *)(CONCAT71(unaff_00000019,unaff_BL) + 0xfefffffffe));
    if (!SBORROW1(bVar6,*unaff_RDI)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (-1 < (char)(bVar6 - *unaff_RDI)) {
      return;
    }
    if ((POPCOUNT((uint)bVar6 - (int)unaff_RBP & 0xff) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
code_r0x00014d7a69c2:
    *(char *)(unaff_RBP + 0x39d1a065) = *(char *)(unaff_RBP + 0x39d1a065) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
    puVar1 = (uint *)(unaff_RBP + 0x7ab3ea31);
    uVar2 = *puVar1;
    uVar8 = (uint)unaff_RBP;
    uVar3 = *puVar1;
    uVar4 = *puVar1;
    unaff_RBP = (ulonglong)(uVar8 - uVar4);
    *unaff_RDI = *unaff_RSI;
    unaff_RDI = _DAT_b2a4bb55;
    puVar7 = (undefined8 *)&DAT_b2a4bb5d;
    while (!SBORROW4(uVar8,uVar3)) {
      uVar5 = *puVar7;
      puVar7 = puVar7 + 1;
      if (uVar8 - uVar4 != 0 && (int)uVar3 <= (int)uVar8) {
        out(uRam000000007be83900,
            (short)CONCAT71((int7)((ulonglong)uVar5 >> 8),(char)uVar5 << 1 | uVar8 < uVar2));
        goto code_r0x00014d7a69c2;
      }
    }
    *(char *)(ulonglong)_DAT_37f1618abd653784 =
         *(char *)(ulonglong)_DAT_37f1618abd653784 + (char)((ulonglong)param_1 >> 8);
    unaff_RSI = unaff_RSI + 9;
    unaff_BL = 'z';
  } while( true );
}



// FUNCTION 14d7a6965 FUN_14d7a6965 body=16 status=ok
// SIG undefined FUN_14d7a6965(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6965(void)

{
  int *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6976 FUN_14d7a6976 body=3 status=ok
// SIG undefined FUN_14d7a6976(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6976(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a697a FUN_14d7a697a body=4 status=ok
// SIG undefined FUN_14d7a697a(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a697a(undefined8 param_1,ulonglong param_2)

{
  uint *puVar1;
  char *pcVar2;
  byte bVar3;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  byte *in_RAX;
  uint uVar8;
  char unaff_BL;
  byte unaff_BH;
  undefined2 unaff_0000001a;
  ulonglong *puVar9;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  longlong unaff_RSI;
  byte in_CF;
  bool bVar10;
  bool bVar11;
  byte bVar4;
  
  bVar3 = *in_RAX;
  bVar4 = *in_RAX;
  *in_RAX = (bVar4 - unaff_BH) - in_CF;
  puVar1 = (uint *)(param_2 - 0xad74ec);
  uVar8 = (uint)(bVar3 < unaff_BH || (byte)(bVar4 - unaff_BH) < in_CF);
  uVar6 = *puVar1 - CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  bVar10 = *puVar1 < CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) || uVar6 < uVar8;
  bVar11 = SBORROW4(*puVar1,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) !=
           SBORROW4(uVar6,uVar8);
  *puVar1 = uVar6 - uVar8;
  uVar8 = *puVar1;
  if (CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(0xc9,(char)param_1)) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
    puVar7 = *(undefined1 **)register0x00000020;
    puVar9 = (ulonglong *)((longlong)register0x00000020 + 8);
    while (!bVar11) {
      param_2 = *puVar9;
      puVar9 = puVar9 + 1;
      if (0 < (int)uVar8) {
        out(uRam000000007be83900,(short)CONCAT71((int7)(param_2 >> 8),(char)param_2 << 1 | bVar10));
        pcVar2 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x39d1a065);
        *pcVar2 = *pcVar2 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    *(char *)(ulonglong)_DAT_37f1618abd653784 = *(char *)(ulonglong)_DAT_37f1618abd653784 + -0x37;
    puVar5 = (undefined1 *)(unaff_RSI + 8);
    bVar10 = false;
    bVar11 = false;
    uVar8 = (uint)param_2 ^ unaff_EBP;
    param_2 = (ulonglong)uVar8;
    unaff_BL = 'z';
    unaff_RSI = unaff_RSI + 9;
    *puVar7 = *puVar5;
    register0x00000020 = (BADSPACEBASE *)&DAT_b2a4bb55;
  } while( true );
}



// FUNCTION 14d7a697e FUN_14d7a697e body=9 status=ok
// SIG undefined FUN_14d7a697e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a697e(longlong param_1,ulonglong param_2)

{
  uint *puVar1;
  char *pcVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint unaff_EBX;
  ulonglong *puVar7;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  longlong unaff_RSI;
  byte in_CF;
  bool bVar8;
  bool bVar9;
  
  puVar1 = (uint *)(param_2 - 0xad74ec);
  uVar6 = (uint)in_CF;
  uVar4 = *puVar1 - unaff_EBX;
  bVar8 = *puVar1 < unaff_EBX || uVar4 < uVar6;
  bVar9 = SBORROW4(*puVar1,unaff_EBX) != SBORROW4(uVar4,uVar6);
  *puVar1 = uVar4 - uVar6;
  uVar6 = *puVar1;
  if (param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
    puVar5 = *(undefined1 **)register0x00000020;
    puVar7 = (ulonglong *)((longlong)register0x00000020 + 8);
    while (!bVar9) {
      param_2 = *puVar7;
      puVar7 = puVar7 + 1;
      if (0 < (int)uVar6) {
        out(uRam000000007be83900,(short)CONCAT71((int7)(param_2 >> 8),(char)param_2 << 1 | bVar8));
        pcVar2 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x39d1a065);
        *pcVar2 = *pcVar2 + (char)unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    *(undefined1 *)(ulonglong)_DAT_37f1618abd653784 =
         *(undefined1 *)(ulonglong)_DAT_37f1618abd653784;
    puVar3 = (undefined1 *)(unaff_RSI + 8);
    bVar8 = false;
    bVar9 = false;
    uVar6 = (uint)param_2 ^ unaff_EBP;
    param_2 = (ulonglong)uVar6;
    unaff_EBX = 0x7a;
    unaff_RSI = unaff_RSI + 9;
    *puVar5 = *puVar3;
    register0x00000020 = (BADSPACEBASE *)&DAT_b2a4bb55;
  } while( true );
}



// FUNCTION 14d7a698f FUN_14d7a698f body=3 status=ok
// SIG undefined FUN_14d7a698f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a698f(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6993 FUN_14d7a6993 body=41 status=ok
// SIG undefined FUN_14d7a6993(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a6997) overlaps instruction at (ram,0x00014d7a6995)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a6997) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a6993(undefined8 param_1,uint param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined2 unaff_0000002a;
  undefined4 unaff_0000002c;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  undefined2 in_FS;
  
  *unaff_RDI = *(undefined1 *)(unaff_RSI + 8);
  puVar3 = (undefined8 *)&DAT_b2a4bb5d;
  do {
    uVar2 = *puVar3;
    puVar3 = puVar3 + 1;
  } while ((int)(param_2 ^ CONCAT22(unaff_0000002a,in_FS)) < 1);
  out(uRam000000007be83900,(short)CONCAT71((int7)((ulonglong)uVar2 >> 8),(char)uVar2 << 1));
  pcVar1 = (char *)(CONCAT44(unaff_0000002c,CONCAT22(unaff_0000002a,in_FS)) + 0x39d1a065);
  *pcVar1 = *pcVar1 + 'z';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a69c0 FUN_14d7a69c0 body=10 status=ok
// SIG undefined FUN_14d7a69c0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a69c0(void)

{
  char unaff_BL;
  longlong unaff_RBP;
  bool in_PF;
  
  if (in_PF) {
    *(char *)(unaff_RBP + 0x39d1a065) = *(char *)(unaff_RBP + 0x39d1a065) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a69ce FUN_14d7a69ce body=9 status=ok
// SIG undefined FUN_14d7a69ce(void)

void FUN_14d7a69ce(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RDI;
  float10 in_ST0;
  
  *(int *)(param_2 + 0x411e4288) = (int)ROUND(in_ST0);
  uVar1 = in((short)param_2);
  *unaff_RDI = uVar1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a69da FUN_14d7a69da body=5 status=ok
// SIG undefined FUN_14d7a69da(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a69da(void)

{
  undefined4 in_EAX;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
  undefined2 in_SS;
  bool in_ZF;
  
  *(undefined2 *)(unaff_RSI + -0x70) = in_SS;
  if (in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a69e6 FUN_14d7a69e6 body=8 status=ok
// SIG undefined FUN_14d7a69e6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a69e6(undefined8 param_1,undefined2 param_2,longlong param_3)

{
  undefined4 in_EAX;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = in_EAX;
  out(param_2,(char)in_EAX);
  *(char *)(param_3 + -0x55) = *(char *)(param_3 + -0x55) - (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6a08 FUN_14d7a6a08 body=15 status=ok
// SIG undefined FUN_14d7a6a08(void)

/* WARNING: Removing unreachable block (ram,0x00014d7a6a17) */

undefined4 FUN_14d7a6a08(undefined8 param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  in(param_2);
  return CONCAT31((uint3)((uint)in_EAX >> 8) & (uint3)((uint)unaff_EBP >> 8),DAT_acbefea8eef4f68a);
}



// FUNCTION 14d7a6a18 FUN_14d7a6a18 body=11 status=ok
// SIG undefined FUN_14d7a6a18(void)

int FUN_14d7a6a18(undefined8 param_1,undefined1 param_2)

{
  int in_EAX;
  longlong unaff_RSI;
  
  *(undefined1 *)(unaff_RSI + -0x58) = param_2;
  return in_EAX + 0x3484bdc4;
}



// FUNCTION 14d7a6a24 FUN_14d7a6a24 body=19 status=ok
// SIG undefined FUN_14d7a6a24(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6a24(byte param_1)

{
  longlong unaff_RBX;
  
  *(byte *)(unaff_RBX + -0xee2c960) = *(byte *)(unaff_RBX + -0xee2c960) & param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6a38 FUN_14d7a6a38 body=3 status=ok
// SIG undefined FUN_14d7a6a38(void)

void FUN_14d7a6a38(void)

{
  return;
}



// FUNCTION 14d7a6a40 FUN_14d7a6a40 body=15 status=ok
// SIG undefined FUN_14d7a6a40(void)

void FUN_14d7a6a40(void)

{
  longlong unaff_RBP;
  float10 in_ST0;
  
  *(double *)(unaff_RBP + 0x5f) = (double)in_ST0;
  return;
}



// FUNCTION 14d7a6a59 FUN_14d7a6a59 body=7 status=ok
// SIG undefined FUN_14d7a6a59(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6a59(undefined4 param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 in_EAX;
  int *unaff_RBX;
  longlong unaff_RBP;
  bool in_CF;
  bool in_ZF;
  
  *(undefined4 *)(unaff_RBP + -0x18) = param_1;
  out((short)param_2,in_EAX);
  if (!in_CF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_CF && !in_ZF) {
    puVar1 = (uint *)((byte *)(ulonglong)param_2 + 0x22);
    uVar2 = *puVar1;
    *puVar1 = uVar2 << 0x1e |
              (uint)(CONCAT14(CARRY1((byte)param_1,*(byte *)(ulonglong)param_2),uVar2) >> 3);
    *unaff_RBX = *unaff_RBX - param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6a61 FUN_14d7a6a61 body=4 status=ok
// SIG undefined FUN_14d7a6a61(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6a61(byte param_1,byte *param_2)

{
  uint uVar1;
  int *unaff_RBX;
  longlong unaff_RSI;
  
  *(char *)(unaff_RSI + -0x35) = *(char *)(unaff_RSI + -0x35) << (param_1 & 0x1f);
  uVar1 = *(uint *)(param_2 + 0x22);
  *(uint *)(param_2 + 0x22) = uVar1 << 0x1e | (uint)(CONCAT14(CARRY1(param_1,*param_2),uVar1) >> 3);
  *unaff_RBX = *unaff_RBX - (int)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6a69 FUN_14d7a6a69 body=22 status=ok
// SIG undefined FUN_14d7a6a69(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6a69(undefined8 param_1,int param_2)

{
  undefined1 in_AL;
  undefined1 unaff_BL;
  byte unaff_BH;
  byte bVar1;
  undefined6 unaff_0000001a;
  
  out(0x12,in_AL);
  bVar1 = unaff_BH & (byte)((uint)param_2 >> 8);
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(bVar1,unaff_BL)) =
       *(int *)CONCAT62(unaff_0000001a,CONCAT11(bVar1,unaff_BL)) - param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6a8f FUN_14d7a6a8f body=5 status=ok
// SIG undefined FUN_14d7a6a8f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6a8f(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6ab0 FUN_14d7a6ab0 body=49 status=ok
// SIG undefined FUN_14d7a6ab0(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7a6b30) */
/* WARNING: Removing unreachable block (ram,0x00014d7a6aca) */

void FUN_14d7a6ab0(undefined8 param_1)

{
  byte bVar1;
  undefined7 uVar2;
  byte *unaff_RBX;
  longlong unaff_RSI;
  
  *(int *)(unaff_RSI + 0x7a90c21b) = *(int *)(unaff_RSI + 0x7a90c21b) >> 1;
  uVar2 = (undefined7)((ulonglong)param_1 >> 8);
  bVar1 = (byte)param_1 << ((byte)param_1 & 0x1f);
  while( true ) {
    if ((bVar1 | *unaff_RBX) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (CONCAT71(uVar2,bVar1 | *unaff_RBX) != 1) break;
    bVar1 = 0;
    uVar2 = 0;
  }
  return;
}



// FUNCTION 14d7a6acb FUN_14d7a6acb body=12 status=ok
// SIG undefined FUN_14d7a6acb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6acb(int param_1)

{
  ulonglong uVar1;
  bool bVar2;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  
  uVar1 = (longlong)param_1 * 0x11;
  bVar2 = (longlong)(int)uVar1 != uVar1;
  *(ulonglong *)((uVar1 & 0xffffffff) - 8) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)bVar2 * 0x800 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)(in_SF & 1) * 0x80 |
       (ulonglong)(in_ZF & 1) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)(in_PF & 1) * 4 |
       (ulonglong)bVar2 | (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6adb FUN_14d7a6adb body=3 status=ok
// SIG undefined FUN_14d7a6adb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6adb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6ae7 FUN_14d7a6ae7 body=4 status=ok
// SIG undefined FUN_14d7a6ae7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6ae7(void)

{
  longlong in_RAX;
  uint unaff_EDI;
  
  *(uint *)(in_RAX + -0x77) = *(uint *)(in_RAX + -0x77) ^ unaff_EDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6af3 FUN_14d7a6af3 body=4 status=ok
// SIG undefined FUN_14d7a6af3(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7a6b30) */

void FUN_14d7a6af3(undefined8 param_1,undefined2 param_2)

{
  uint unaff_EBP;
  uint unaff_ESI;
  
  out(*(undefined4 *)(ulonglong)(unaff_ESI | unaff_EBP),param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6afb FUN_14d7a6afb body=4 status=ok
// SIG undefined FUN_14d7a6afb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6afb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6b17 FUN_14d7a6b17 body=4 status=ok
// SIG undefined FUN_14d7a6b17(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6b17(int param_1,longlong param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  char *unaff_RSI;
  char *unaff_RDI;
  bool bVar4;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  
  cRam0000000172882ef6 = cRam0000000172882ef6 + (char)((ulonglong)param_2 >> 8);
  if (SBORROW1(*unaff_RSI,*unaff_RDI)) {
    uVar2 = in((short)param_2);
    *(undefined4 *)(unaff_RDI + 1) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(param_2 + 0x5f);
  *pcVar1 = *pcVar1 + (char)((uint)param_1 >> 8);
  uVar3 = (longlong)param_1 * 0x11;
  bVar4 = (longlong)(int)uVar3 != uVar3;
  *(ulonglong *)((uVar3 & 0xffffffff) - 8) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)bVar4 * 0x800 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)(*pcVar1 < '\0') * 0x80 |
       (ulonglong)(*pcVar1 == '\0') * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
       (ulonglong)((POPCOUNT(*pcVar1) & 1U) == 0) * 4 | (ulonglong)bVar4 |
       (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6b20 FUN_14d7a6b20 body=14 status=ok
// SIG undefined FUN_14d7a6b20(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a6b20(void)

{
  uint in_EAX;
  
  _DAT_3822990c34426d58 = in_EAX & 0x71a63514;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6b49 FUN_14d7a6b49 body=12 status=ok
// SIG undefined FUN_14d7a6b49(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6b49(byte param_1,longlong param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_2 + -0xc);
  *puVar1 = *puVar1 >> (param_1 & 0x1f) | *puVar1 << 0x20 - (param_1 & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6b5a FUN_14d7a6b5a body=37 status=ok
// SIG undefined FUN_14d7a6b5a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6b5a(undefined8 param_1)

{
  char *pcVar1;
  char cVar2;
  longlong unaff_RBX;
  longlong unaff_RDI;
  
  cVar2 = *(char *)(unaff_RDI + 0x1d + unaff_RBX * 2);
  *(uint *)(unaff_RDI + 0x6b120a87) = ~*(uint *)(unaff_RDI + 0x6b120a87);
  pcVar1 = (char *)(unaff_RDI + -0x35 +
                   CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                            CONCAT11((char)((ulonglong)param_1 >> 8) + cVar2,(char)param_1)) * 4);
  *pcVar1 = *pcVar1 << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6b86 FUN_14d7a6b86 body=2 status=ok
// SIG undefined FUN_14d7a6b86(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6b86(void)

{
  undefined4 in_EAX;
  
  out(0x6e,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6b8a FUN_14d7a6b8a body=10 status=ok
// SIG undefined FUN_14d7a6b8a(void)

undefined4 FUN_14d7a6b8a(longlong param_1,undefined4 param_2)

{
  uint *puVar1;
  byte bVar2;
  longlong unaff_RDI;
  
  puVar1 = (uint *)(unaff_RDI + 0x49 + param_1 * 8);
  bVar2 = (byte)param_1 & 0x1f;
  *puVar1 = *puVar1 >> bVar2 | *puVar1 << 0x20 - bVar2;
  return param_2;
}



// FUNCTION 14d7a6b9f FUN_14d7a6b9f body=1 status=ok
// SIG undefined FUN_14d7a6b9f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6b9f(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6baf FUN_14d7a6baf body=22 status=ok
// SIG undefined FUN_14d7a6baf(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6baf(int *param_1)

{
  undefined1 uVar1;
  undefined6 in_register_00000002;
  longlong unaff_RDI;
  byte in_CF;
  char in_PF;
  char in_AF;
  char in_ZF;
  char in_SF;
  float10 in_ST0;
  
  uVar1 = DAT_a0f641bc86b15e4b;
  *param_1 = *param_1 + 0x1c4fb821;
  *(undefined1 *)(unaff_RDI + 2) = uVar1;
  *(longlong *)
   CONCAT62(in_register_00000002,
            CONCAT11(in_SF << 7 | in_ZF << 6 | in_AF << 4 | in_PF << 2 | 2U | in_CF,uVar1)) =
       (longlong)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6bc7 FUN_14d7a6bc7 body=4 status=ok
// SIG undefined FUN_14d7a6bc7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6bc7(longlong param_1,int param_2)

{
  ushort *puVar1;
  uint *puVar2;
  ushort uVar3;
  code *pcVar4;
  char cVar5;
  undefined8 in_RAX;
  char *pcVar6;
  byte *pbVar7;
  short sVar8;
  byte bVar10;
  ulonglong uVar9;
  longlong lVar11;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  longlong *in_R10;
  byte in_CF;
  float10 in_ST0;
  undefined4 *unaff_retaddr;
  undefined1 auStackX_8 [32];
  
  *(int *)((longlong)unaff_RSI + -0x5a) =
       (*(int *)((longlong)unaff_RSI + -0x5a) - param_2) - (uint)in_CF;
  uVar9 = (ulonglong)(uint)((int)in_RAX >> 0x1f);
  sVar8 = (short)((ulonglong)in_RAX >> 0x10) >> 0xf;
  out(sVar8,(int)in_RAX);
  *in_R10 = *in_R10 << 1;
  out(sVar8,(char)in_RAX);
  puVar2 = unaff_retaddr + 1;
  *unaff_retaddr = *unaff_RSI;
  pbVar7 = (byte *)(uVar9 + 0x5f969d64);
  *pbVar7 = *pbVar7 ^ 0x2e;
  bVar10 = (char)((ulonglong)in_RAX >> 0x18) >> 7;
  if (!SCARRY1(bVar10,'.')) {
    *puVar2 = unaff_RSI[1];
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)(unaff_RBP + 0x58) = *(uint *)(unaff_RBP + 0x58) | 0x740046fd;
  *(byte *)puVar2 = (byte)*puVar2 | bVar10;
  if ((char)(byte)*puVar2 < '\0') {
    do {
    } while ((POPCOUNT((byte)*puVar2) & 1U) != 0);
    *puVar2 = *puVar2 >> ((byte)param_1 & 0x1f);
    puVar1 = (ushort *)(uVar9 + 0x24620d8f + param_1 * 8);
    uVar3 = *puVar1;
    lVar11 = CONCAT62((int6)((ulonglong)auStackX_8 >> 0x10),(ushort)auStackX_8 - *puVar1);
    *(longlong *)(lVar11 + -8) = lVar11;
    cVar5 = ((char)in_RAX + '?') - ((ushort)auStackX_8 < uVar3);
    pcVar6 = (char *)(ulonglong)(uint)(int)(short)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar5);
    *pcVar6 = *pcVar6 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar4 = (code *)swi(0x9f);
  pbVar7 = (byte *)(*pcVar4)();
  *pbVar7 = *pbVar7 & (byte)pbVar7;
  *(short *)puVar2 = (short)ROUND(in_ST0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)(0x2c);
  return;
}



// FUNCTION 14d7a6bcb FUN_14d7a6bcb body=62 status=ok
// SIG undefined FUN_14d7a6bcb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6bcb(longlong param_1,longlong param_2)

{
  ushort *puVar1;
  uint *puVar2;
  ushort uVar3;
  code *pcVar4;
  char cVar5;
  undefined8 in_RAX;
  char *pcVar6;
  byte *pbVar7;
  longlong lVar8;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  longlong *in_R10;
  float10 in_ST0;
  undefined4 *unaff_retaddr;
  undefined1 auStackX_8 [32];
  
  out((short)param_2,(int)in_RAX);
  *in_R10 = *in_R10 << 1;
  out((short)param_2,(char)in_RAX);
  puVar2 = unaff_retaddr + 1;
  *unaff_retaddr = *unaff_RSI;
  *(byte *)(param_2 + 0x5f969d64) = *(byte *)(param_2 + 0x5f969d64) ^ 0x2e;
  if (!SCARRY1((char)((ulonglong)param_2 >> 8),'.')) {
    *puVar2 = unaff_RSI[1];
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)(unaff_RBP + 0x58) = *(uint *)(unaff_RBP + 0x58) | 0x740046fd;
  *(byte *)puVar2 = (byte)*puVar2 | (byte)param_2;
  if ((char)(byte)*puVar2 < '\0') {
    do {
    } while ((POPCOUNT((byte)*puVar2) & 1U) != 0);
    *puVar2 = *puVar2 >> ((byte)param_1 & 0x1f);
    puVar1 = (ushort *)(param_2 + 0x24620d8f + param_1 * 8);
    uVar3 = *puVar1;
    lVar8 = CONCAT62((int6)((ulonglong)auStackX_8 >> 0x10),(ushort)auStackX_8 - *puVar1);
    *(longlong *)(lVar8 + -8) = lVar8;
    cVar5 = ((char)in_RAX + '?') - ((ushort)auStackX_8 < uVar3);
    pcVar6 = (char *)(ulonglong)(uint)(int)(short)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar5);
    *pcVar6 = *pcVar6 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar4 = (code *)swi(0x9f);
  pbVar7 = (byte *)(*pcVar4)();
  *pbVar7 = *pbVar7 & (byte)pbVar7;
  *(short *)puVar2 = (short)ROUND(in_ST0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)(0x2c);
  return;
}



// FUNCTION 14d7a6bf8 FUN_14d7a6bf8 body=3 status=ok
// SIG undefined FUN_14d7a6bf8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6bf8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6c3c FUN_14d7a6c3c body=7 status=ok
// SIG undefined FUN_14d7a6c3c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6c3c(undefined1 param_1,undefined2 param_2)

{
  undefined1 *unaff_RBX;
  bool in_ZF;
  
  LOCK();
  *unaff_RBX = param_1;
  UNLOCK();
  in(param_2);
  if (!in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6c57 FUN_14d7a6c57 body=8 status=ok
// SIG undefined FUN_14d7a6c57(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6c57(char *param_1,uint *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  undefined8 *puVar5;
  uint unaff_EBP;
  undefined8 *puVar8;
  char *unaff_RDI;
  bool bVar9;
  bool bVar10;
  undefined8 *puVar6;
  longlong lVar7;
  
  cVar2 = func_0xe79c1e04();
  *unaff_RDI = cVar2;
  *param_1 = *param_1 + cVar2;
  puVar8 = (undefined8 *)(ulonglong)*param_2;
  bVar9 = unaff_EBP < 0x1aa0e941;
  bVar10 = SBORROW4(unaff_EBP,0x1aa0e941);
  iVar3 = unaff_EBP + 0xe55f16bf;
  param_1 = param_1 + -1;
  if (param_1 == (char *)0x0) {
    unaff_RDI[(longlong)puVar8 * 2 + 1] = unaff_RDI[(longlong)puVar8 * 2 + 1] + (char)iVar3;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  do {
    puVar5 = (undefined8 *)((longlong)register0x00000020 + -8);
    puVar6 = (undefined8 *)((longlong)register0x00000020 + -8);
    *(undefined8 **)((longlong)register0x00000020 + -8) = puVar8;
    cVar2 = '\x1c';
    do {
      puVar8 = puVar8 + -1;
      puVar5 = puVar5 + -1;
      *puVar5 = *puVar8;
      cVar2 = cVar2 + -1;
    } while ('\0' < cVar2);
    *(undefined1 **)((longlong)register0x00000020 + -0xf0) =
         (undefined1 *)((longlong)register0x00000020 + -8);
    bVar4 = (byte)param_1 & 7;
    bVar4 = (byte)(undefined1 *)((longlong)register0x00000020 + -0x29c4) << bVar4 |
            (byte)(undefined1 *)((longlong)register0x00000020 + -0x29c4) >> 8 - bVar4;
    lVar7 = CONCAT71((int7)((ulonglong)((longlong)register0x00000020 + -0x29c4) >> 8),bVar4);
    bVar1 = ((ulonglong)param_1 & 0x1f) != 0;
    bVar9 = (bool)(!bVar1 & bVar9 | (bVar1 && (bVar4 & 1) != 0));
    bVar1 = ((byte)param_1 & 0x1f) == 1;
    bVar10 = (bool)(!bVar1 & bVar10 | bVar1 & (bVar9 ^ (char)bVar4 < '\0'));
    register0x00000020 = (BADSPACEBASE *)(lVar7 + -8);
    *(uint **)(lVar7 + -8) = param_2;
    puVar8 = puVar6;
  } while (iVar3 != 0 && bVar10 == iVar3 < 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6c60 FUN_14d7a6c60 body=20 status=ok
// SIG undefined FUN_14d7a6c60(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a6c61) overlaps instruction at (ram,0x00014d7a6c60)
    */

void FUN_14d7a6c60(char *param_1,uint *param_2)

{
  int *piVar1;
  char *pcVar2;
  bool bVar3;
  char cVar4;
  byte in_AL;
  int iVar5;
  byte bVar7;
  undefined8 *puVar8;
  longlong unaff_RBP;
  undefined8 *puVar11;
  longlong unaff_RDI;
  bool bVar12;
  bool bVar13;
  uint uVar6;
  undefined8 *puVar9;
  longlong lVar10;
  
  while( true ) {
    piVar1 = (int *)(param_1 + unaff_RBP * 2);
    *piVar1 = *piVar1 + (int)&stack0x00000000;
    if (-1 < *piVar1) break;
    *param_1 = *param_1 + in_AL;
    in_AL = in_AL & 0x69;
  }
  puVar11 = (undefined8 *)(ulonglong)*param_2;
  uVar6 = (uint)unaff_RBP;
  bVar12 = uVar6 < 0x1aa0e941;
  bVar13 = SBORROW4(uVar6,0x1aa0e941);
  iVar5 = uVar6 + 0xe55f16bf;
  param_1 = param_1 + -1;
  if (param_1 != (char *)0x0) {
    do {
      puVar8 = (undefined8 *)((longlong)register0x00000020 + -8);
      puVar9 = (undefined8 *)((longlong)register0x00000020 + -8);
      *(undefined8 **)((longlong)register0x00000020 + -8) = puVar11;
      cVar4 = '\x1c';
      do {
        puVar11 = puVar11 + -1;
        puVar8 = puVar8 + -1;
        *puVar8 = *puVar11;
        cVar4 = cVar4 + -1;
      } while ('\0' < cVar4);
      *(undefined1 **)((longlong)register0x00000020 + -0xf0) =
           (undefined1 *)((longlong)register0x00000020 + -8);
      bVar7 = (byte)param_1 & 7;
      bVar7 = (byte)(undefined1 *)((longlong)register0x00000020 + -0x29c4) << bVar7 |
              (byte)(undefined1 *)((longlong)register0x00000020 + -0x29c4) >> 8 - bVar7;
      lVar10 = CONCAT71((int7)((ulonglong)((longlong)register0x00000020 + -0x29c4) >> 8),bVar7);
      bVar3 = ((ulonglong)param_1 & 0x1f) != 0;
      bVar12 = (bool)(!bVar3 & bVar12 | (bVar3 && (bVar7 & 1) != 0));
      bVar3 = ((byte)param_1 & 0x1f) == 1;
      bVar13 = (bool)(!bVar3 & bVar13 | bVar3 & (bVar12 ^ (char)bVar7 < '\0'));
      register0x00000020 = (BADSPACEBASE *)(lVar10 + -8);
      *(uint **)(lVar10 + -8) = param_2;
      puVar11 = puVar9;
    } while (iVar5 != 0 && bVar13 == iVar5 < 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar2 = (char *)(unaff_RDI + (longlong)puVar11 * 2);
  *pcVar2 = *pcVar2 + (char)iVar5;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a6c83 FUN_14d7a6c83 body=4 status=ok
// SIG undefined FUN_14d7a6c83(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a6cbf) overlaps instruction at (ram,0x00014d7a6cba)
    */

void FUN_14d7a6c83(undefined8 param_1,uint param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong in_RAX;
  longlong lVar8;
  uint *puVar9;
  char unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  byte bVar10;
  undefined1 *puVar11;
  undefined8 *puVar15;
  undefined8 *unaff_RBP;
  uint unaff_ESI;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  char *unaff_retaddr;
  undefined8 in_stack_00000008;
  uint uVar7;
  undefined1 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  
  lVar8 = (longlong)*(int *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x6f);
  uVar5 = (ulonglong)param_2 << 0x20 | in_RAX & 0xffffffff;
  puVar9 = (uint *)((longlong)uVar5 % lVar8 & 0xffffffff);
  unaff_RDI[-0x4f] = unaff_RDI[-0x4f] - (char)((ulonglong)((longlong)uVar5 / lVar8) >> 8);
  *(int *)(unaff_retaddr + -0x334b5f0f) = *(int *)(unaff_retaddr + -0x334b5f0f) + 0x5e;
  unaff_retaddr[10] = unaff_retaddr[10] + (char)((ulonglong)unaff_retaddr >> 8);
  uVar7 = *(uint *)(unaff_retaddr + 0x6f01422);
  unaff_RDI[-0x30230fb9] = unaff_RDI[-0x30230fb9] ^ unaff_BH;
  cVar3 = *(char *)(ulonglong)(unaff_ESI & uVar7);
  lVar8 = CONCAT71((int7)((ulonglong)in_stack_00000008 >> 8),cVar3);
  puVar12 = &stack0x00000008;
  puVar11 = &stack0x00000008;
  pcVar1 = (char *)(in_FS_OFFSET + lVar8 + -0x211b28a8);
  cVar2 = *pcVar1;
  *pcVar1 = *pcVar1 + unaff_BL;
  if (SCARRY1(cVar2,unaff_BL) != *pcVar1 < '\0') {
    puVar9 = (uint *)CONCAT71((int7)((ulonglong)puVar9 >> 8),
                              (byte)puVar9 & *(byte *)(lVar8 + -0x19c27988));
    pcVar1 = (char *)(lVar8 * 2 + -0x2b37bb6a);
    cVar2 = *pcVar1;
    *pcVar1 = '\0';
    bVar16 = (char)(cVar2 << 7) < '\0';
    bVar19 = false;
    bVar18 = *pcVar1 < '\0';
    bVar17 = *pcVar1 == '\0';
    goto code_r0x00014d7a6cc4;
  }
  *unaff_RDI = cVar3;
  *unaff_retaddr = *unaff_retaddr + cVar3;
  puVar15 = (undefined8 *)(ulonglong)*puVar9;
  uVar7 = (uint)unaff_RBP;
  bVar16 = uVar7 < 0x1aa0e941;
  bVar19 = SBORROW4(uVar7,0x1aa0e941);
  iVar6 = uVar7 + 0xe55f16bf;
  bVar18 = iVar6 < 0;
  bVar17 = iVar6 == 0;
  unaff_retaddr = unaff_retaddr + -1;
  if (unaff_retaddr == (char *)0x0) {
    unaff_RDI[(longlong)puVar15 * 2 + 1] = unaff_RDI[(longlong)puVar15 * 2 + 1] + (char)iVar6;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  do {
    puVar13 = (undefined8 *)(puVar12 + -8);
    unaff_RBP = (undefined8 *)(puVar12 + -8);
    *(undefined8 **)(puVar12 + -8) = puVar15;
    cVar2 = '\x1c';
    do {
      puVar15 = puVar15 + -1;
      puVar13 = puVar13 + -1;
      *puVar13 = *puVar15;
      cVar2 = cVar2 + -1;
    } while ('\0' < cVar2);
    *(undefined1 **)(puVar12 + -0xf0) = puVar12 + -8;
    puVar11 = puVar12 + -0x29c4;
code_r0x00014d7a6cc4:
    bVar10 = (byte)unaff_retaddr & 7;
    bVar10 = (byte)puVar11 << bVar10 | (byte)puVar11 >> 8 - bVar10;
    lVar14 = CONCAT71((int7)((ulonglong)puVar11 >> 8),bVar10);
    bVar4 = ((ulonglong)unaff_retaddr & 0x1f) != 0;
    bVar16 = (bool)(!bVar4 & bVar16 | (bVar4 && (bVar10 & 1) != 0));
    bVar4 = ((byte)unaff_retaddr & 0x1f) == 1;
    bVar19 = (bool)(!bVar4 & bVar19 | bVar4 & (bVar16 ^ (char)bVar10 < '\0'));
    puVar12 = (undefined1 *)(lVar14 + -8);
    *(uint **)(lVar14 + -8) = puVar9;
    puVar15 = unaff_RBP;
  } while (!bVar17 && bVar19 == bVar18);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6c87 FUN_14d7a6c87 body=12 status=ok
// SIG undefined FUN_14d7a6c87(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a6cbf) overlaps instruction at (ram,0x00014d7a6cba)
    */

void FUN_14d7a6c87(char *param_1,uint *param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 in_RAX;
  longlong lVar7;
  byte bVar8;
  char unaff_BL;
  byte unaff_BH;
  byte bVar9;
  undefined8 *puVar10;
  undefined8 *puVar12;
  undefined8 *unaff_RBP;
  uint unaff_ESI;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  undefined8 unaff_retaddr;
  uint uVar6;
  longlong lVar11;
  
  bVar8 = (byte)param_2;
  unaff_RDI[-0x4f] = unaff_RDI[-0x4f] - (char)((ulonglong)in_RAX >> 8);
  *(int *)(param_1 + -0x334b5f0f) = *(int *)(param_1 + -0x334b5f0f) + 0x5e;
  param_1[10] = param_1[10] + (char)((ulonglong)param_1 >> 8);
  uVar6 = *(uint *)(param_1 + 0x6f01422);
  unaff_RDI[-0x30230fb9] = unaff_RDI[-0x30230fb9] ^ unaff_BH;
  cVar3 = *(char *)(ulonglong)(unaff_ESI & uVar6);
  lVar7 = CONCAT71((int7)((ulonglong)unaff_retaddr >> 8),cVar3);
  pcVar1 = (char *)(in_FS_OFFSET + lVar7 + -0x211b28a8);
  cVar2 = *pcVar1;
  *pcVar1 = *pcVar1 + unaff_BL;
  if (SCARRY1(cVar2,unaff_BL) != *pcVar1 < '\0') {
    bVar8 = bVar8 & *(byte *)(lVar7 + -0x19c27988);
    pcVar1 = (char *)(lVar7 * 2 + -0x2b37bb6a);
    cVar2 = *pcVar1;
    *pcVar1 = '\0';
    bVar13 = (char)(cVar2 << 7) < '\0';
    bVar16 = false;
    bVar15 = *pcVar1 < '\0';
    bVar14 = *pcVar1 == '\0';
    goto code_r0x00014d7a6cc4;
  }
  *unaff_RDI = cVar3;
  *param_1 = *param_1 + cVar3;
  puVar12 = (undefined8 *)(ulonglong)*param_2;
  uVar6 = (uint)unaff_RBP;
  bVar13 = uVar6 < 0x1aa0e941;
  bVar16 = SBORROW4(uVar6,0x1aa0e941);
  iVar5 = uVar6 + 0xe55f16bf;
  bVar15 = iVar5 < 0;
  bVar14 = iVar5 == 0;
  param_1 = param_1 + -1;
  if (param_1 == (char *)0x0) {
    unaff_RDI[(longlong)puVar12 * 2 + 1] = unaff_RDI[(longlong)puVar12 * 2 + 1] + (char)iVar5;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  do {
    puVar10 = (undefined8 *)((longlong)register0x00000020 + -8);
    unaff_RBP = (undefined8 *)((longlong)register0x00000020 + -8);
    *(undefined8 **)((longlong)register0x00000020 + -8) = puVar12;
    cVar2 = '\x1c';
    do {
      puVar12 = puVar12 + -1;
      puVar10 = puVar10 + -1;
      *puVar10 = *puVar12;
      cVar2 = cVar2 + -1;
    } while ('\0' < cVar2);
    *(undefined1 **)((longlong)register0x00000020 + -0xf0) =
         (undefined1 *)((longlong)register0x00000020 + -8);
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -0x29c4);
code_r0x00014d7a6cc4:
    bVar9 = (byte)param_1 & 7;
    bVar9 = (byte)register0x00000020 << bVar9 | (byte)register0x00000020 >> 8 - bVar9;
    lVar11 = CONCAT71((int7)((ulonglong)register0x00000020 >> 8),bVar9);
    bVar4 = ((ulonglong)param_1 & 0x1f) != 0;
    bVar13 = (bool)(!bVar4 & bVar13 | (bVar4 && (bVar9 & 1) != 0));
    bVar4 = ((byte)param_1 & 0x1f) == 1;
    bVar16 = (bool)(!bVar4 & bVar16 | bVar4 & (bVar13 ^ (char)bVar9 < '\0'));
    register0x00000020 = (BADSPACEBASE *)(lVar11 + -8);
    *(ulonglong *)(lVar11 + -8) = CONCAT71((int7)((ulonglong)param_2 >> 8),bVar8);
    puVar12 = unaff_RBP;
  } while (!bVar14 && bVar16 == bVar15);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6c94 FUN_14d7a6c94 body=10 status=ok
// SIG undefined FUN_14d7a6c94(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6c94(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6ca4 FUN_14d7a6ca4 body=6 status=ok
// SIG undefined FUN_14d7a6ca4(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a6cbf) overlaps instruction at (ram,0x00014d7a6cba)
    */

void FUN_14d7a6ca4(char *param_1,uint *param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 in_RAX;
  longlong lVar7;
  byte bVar8;
  char unaff_BL;
  byte bVar9;
  undefined1 *puVar10;
  undefined8 *puVar12;
  undefined8 *unaff_RBP;
  char *unaff_RSI;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  uint uVar6;
  undefined8 *puVar11;
  
  bVar8 = (byte)param_2;
  cVar3 = *unaff_RSI;
  lVar7 = CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar3);
  puVar10 = &stack0xfffffffffffffff8;
  pcVar1 = (char *)(in_FS_OFFSET + lVar7 + -0x211b28a8);
  cVar2 = *pcVar1;
  *pcVar1 = *pcVar1 + unaff_BL;
  if (SCARRY1(cVar2,unaff_BL) != *pcVar1 < '\0') {
    bVar8 = bVar8 & *(byte *)(lVar7 + -0x19c27988);
    pcVar1 = (char *)(lVar7 * 2 + -0x2b37bb6a);
    cVar2 = *pcVar1;
    *pcVar1 = '\0';
    bVar13 = (char)(cVar2 << 7) < '\0';
    bVar16 = false;
    bVar15 = *pcVar1 < '\0';
    bVar14 = *pcVar1 == '\0';
    goto code_r0x00014d7a6cc4;
  }
  *unaff_RDI = cVar3;
  *param_1 = *param_1 + cVar3;
  puVar12 = (undefined8 *)(ulonglong)*param_2;
  uVar6 = (uint)unaff_RBP;
  bVar13 = uVar6 < 0x1aa0e941;
  bVar16 = SBORROW4(uVar6,0x1aa0e941);
  iVar5 = uVar6 + 0xe55f16bf;
  bVar15 = iVar5 < 0;
  bVar14 = iVar5 == 0;
  param_1 = param_1 + -1;
  if (param_1 == (char *)0x0) {
    unaff_RDI[(longlong)puVar12 * 2 + 1] = unaff_RDI[(longlong)puVar12 * 2 + 1] + (char)iVar5;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  do {
    puVar11 = (undefined8 *)((longlong)register0x00000020 + -0x10);
    unaff_RBP = (undefined8 *)((longlong)register0x00000020 + -0x10);
    *(undefined8 **)((longlong)register0x00000020 + -0x10) = puVar12;
    cVar2 = '\x1c';
    do {
      puVar12 = puVar12 + -1;
      puVar11 = puVar11 + -1;
      *puVar11 = *puVar12;
      cVar2 = cVar2 + -1;
    } while ('\0' < cVar2);
    *(undefined1 **)((longlong)register0x00000020 + -0xf8) =
         (undefined1 *)((longlong)register0x00000020 + -0x10);
    puVar10 = (undefined1 *)((longlong)register0x00000020 + -0x29cc);
code_r0x00014d7a6cc4:
    bVar9 = (byte)param_1 & 7;
    bVar9 = (byte)puVar10 << bVar9 | (byte)puVar10 >> 8 - bVar9;
    register0x00000020 = (BADSPACEBASE *)CONCAT71((int7)((ulonglong)puVar10 >> 8),bVar9);
    bVar4 = ((ulonglong)param_1 & 0x1f) != 0;
    bVar13 = (bool)(!bVar4 & bVar13 | (bVar4 && (bVar9 & 1) != 0));
    bVar4 = ((byte)param_1 & 0x1f) == 1;
    bVar16 = (bool)(!bVar4 & bVar16 | bVar4 & (bVar13 ^ (char)bVar9 < '\0'));
    *(ulonglong *)((longlong)register0x00000020 + -8) =
         CONCAT71((int7)((ulonglong)param_2 >> 8),bVar8);
    puVar12 = unaff_RBP;
  } while (!bVar14 && bVar16 == bVar15);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6cad FUN_14d7a6cad body=7 status=ok
// SIG undefined FUN_14d7a6cad(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a6cbf) overlaps instruction at (ram,0x00014d7a6cba)
    */

void FUN_14d7a6cad(char *param_1,uint *param_2)

{
  char *pcVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  byte bVar7;
  byte bVar8;
  undefined1 *puVar9;
  undefined8 *puVar13;
  undefined8 *unaff_RBP;
  char *unaff_RDI;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  char in_SF;
  char in_OF;
  bool bVar17;
  undefined8 unaff_retaddr;
  undefined1 auStackX_8 [32];
  uint uVar6;
  undefined1 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  
  bVar7 = (byte)param_2;
  puVar10 = auStackX_8;
  puVar9 = auStackX_8;
  cVar4 = in(0xde);
  lVar3 = CONCAT71((int7)((ulonglong)unaff_retaddr >> 8),cVar4);
  if (in_OF != in_SF) {
    bVar7 = bVar7 & *(byte *)(lVar3 + -0x19c27988);
    pcVar1 = (char *)(lVar3 * 2 + -0x2b37bb6a);
    cVar4 = *pcVar1;
    *pcVar1 = '\0';
    bVar14 = (char)(cVar4 << 7) < '\0';
    bVar17 = false;
    bVar16 = *pcVar1 < '\0';
    bVar15 = *pcVar1 == '\0';
    goto code_r0x00014d7a6cc4;
  }
  *unaff_RDI = cVar4;
  *param_1 = *param_1 + cVar4;
  puVar13 = (undefined8 *)(ulonglong)*param_2;
  uVar6 = (uint)unaff_RBP;
  bVar14 = uVar6 < 0x1aa0e941;
  bVar17 = SBORROW4(uVar6,0x1aa0e941);
  iVar5 = uVar6 + 0xe55f16bf;
  bVar16 = iVar5 < 0;
  bVar15 = iVar5 == 0;
  param_1 = param_1 + -1;
  if (param_1 == (char *)0x0) {
    unaff_RDI[(longlong)puVar13 * 2 + 1] = unaff_RDI[(longlong)puVar13 * 2 + 1] + (char)iVar5;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  do {
    puVar11 = (undefined8 *)(puVar10 + -8);
    unaff_RBP = (undefined8 *)(puVar10 + -8);
    *(undefined8 **)(puVar10 + -8) = puVar13;
    cVar4 = '\x1c';
    do {
      puVar13 = puVar13 + -1;
      puVar11 = puVar11 + -1;
      *puVar11 = *puVar13;
      cVar4 = cVar4 + -1;
    } while ('\0' < cVar4);
    *(undefined1 **)(puVar10 + -0xf0) = puVar10 + -8;
    puVar9 = puVar10 + -0x29c4;
code_r0x00014d7a6cc4:
    bVar8 = (byte)param_1 & 7;
    bVar8 = (byte)puVar9 << bVar8 | (byte)puVar9 >> 8 - bVar8;
    lVar12 = CONCAT71((int7)((ulonglong)puVar9 >> 8),bVar8);
    bVar2 = ((ulonglong)param_1 & 0x1f) != 0;
    bVar14 = (bool)(!bVar2 & bVar14 | (bVar2 && (bVar8 & 1) != 0));
    bVar2 = ((byte)param_1 & 0x1f) == 1;
    bVar17 = (bool)(!bVar2 & bVar17 | bVar2 & (bVar14 ^ (char)bVar8 < '\0'));
    puVar10 = (undefined1 *)(lVar12 + -8);
    *(ulonglong *)(lVar12 + -8) = CONCAT71((int7)((ulonglong)param_2 >> 8),bVar7);
    puVar13 = unaff_RBP;
  } while (!bVar15 && bVar17 == bVar16);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6cb5 FUN_14d7a6cb5 body=25 status=ok
// SIG undefined FUN_14d7a6cb5(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a6cbf) overlaps instruction at (ram,0x00014d7a6cbd)
    */

void FUN_14d7a6cb5(byte param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 *unaff_RBP;
  longlong unaff_RSI;
  bool bVar9;
  bool in_ZF;
  bool in_SF;
  bool bVar10;
  longlong lVar8;
  
  bVar5 = (byte)param_2;
  if (!in_SF) {
    pbVar1 = (byte *)(unaff_RSI + 0x28d4c844);
    bVar9 = CARRY1(*pbVar1,bVar5);
    bVar10 = SCARRY1(*pbVar1,bVar5);
    *pbVar1 = *pbVar1 + bVar5;
    bVar5 = *pbVar1;
    bVar2 = *pbVar1;
    while( true ) {
      bVar4 = param_1 & 0x1f;
      bVar6 = (byte)register0x00000020 << (param_1 & 7) |
              (byte)register0x00000020 >> 8 - (param_1 & 7);
      lVar8 = CONCAT71((int7)((ulonglong)register0x00000020 >> 8),bVar6);
      bVar9 = (bool)(bVar4 == 0 & bVar9 | (bVar4 != 0 && (bVar6 & 1) != 0));
      bVar10 = (bool)(bVar4 != 1 & bVar10 | bVar4 == 1 & (bVar9 ^ (char)bVar6 < '\0'));
      *(undefined8 *)(lVar8 + -8) = param_2;
      if (bVar2 == 0 || bVar10 != (char)bVar5 < '\0') break;
      puVar7 = (undefined8 *)(lVar8 + -0x10);
      *(undefined8 **)(lVar8 + -0x10) = unaff_RBP;
      cVar3 = '\x1c';
      do {
        unaff_RBP = unaff_RBP + -1;
        puVar7 = puVar7 + -1;
        *puVar7 = *unaff_RBP;
        cVar3 = cVar3 + -1;
      } while ('\0' < cVar3);
      *(longlong *)(lVar8 + -0xf8) = lVar8 + -0x10;
      register0x00000020 = (BADSPACEBASE *)(lVar8 + -0x29cc);
      unaff_RBP = (undefined8 *)(lVar8 + -0x10);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  in((short)param_2);
  if (!in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6cdb FUN_14d7a6cdb body=25 status=ok
// SIG undefined FUN_14d7a6cdb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6cdb(char *param_1)

{
  char unaff_BL;
  char unaff_BH;
  
  param_1[-0x4f] = param_1[-0x4f] + unaff_BH;
  *param_1 = *param_1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6cf5 FUN_14d7a6cf5 body=7 status=ok
// SIG undefined FUN_14d7a6cf5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6cf5(undefined8 param_1,int param_2)

{
  longlong in_RAX;
  byte in_CF;
  
  *(int *)(in_RAX + 0x57) = (*(int *)(in_RAX + 0x57) - param_2) - (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6d06 FUN_14d7a6d06 body=7 status=ok
// SIG undefined FUN_14d7a6d06(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a6d06(void)

{
  code *pcVar1;
  int in_EAX;
  undefined1 *unaff_RDI;
  undefined4 *unaff_retaddr;
  
  if ((int)(in_EAX + 0xca43bbcbU) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = uRam00000000a2d92ec4;
  _DAT_19e393025547c6b4 = in_EAX + 0xca43bbcbU ^ 0xd5327baf;
  if (_DAT_19e393025547c6b4 == 0) {
    *(undefined4 *)(unaff_RDI + 1) = *unaff_retaddr;
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6d0e FUN_14d7a6d0e body=7 status=ok
// SIG undefined FUN_14d7a6d0e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a6d0e(void)

{
  code *pcVar1;
  uint in_EAX;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  undefined4 *unaff_retaddr;
  
  if ((int)(in_EAX ^ 0x2635bc44) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_RSI;
  _DAT_19e393025547c6b4 = in_EAX ^ 0xf307c7eb;
  if (_DAT_19e393025547c6b4 == 0) {
    *(undefined4 *)(unaff_RDI + 1) = *unaff_retaddr;
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6d23 FUN_14d7a6d23 body=5 status=ok
// SIG undefined FUN_14d7a6d23(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a6d23(void)

{
  undefined1 uVar1;
  int iVar2;
  code *pcVar3;
  undefined8 in_RAX;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  bool in_ZF;
  char in_SF;
  char in_OF;
  undefined2 unaff_retaddr;
  undefined6 uStack_6;
  
  if (!in_ZF && in_OF == in_SF) {
    unaff_RSI[0x10a38904] = unaff_RSI[0x10a38904] << 1;
    uRam00000000b877d2af = uRam00000000b877d2af >> 0x10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uStack_6 = (undefined6)((ulonglong)unaff_RDI >> 0x10);
  uVar1 = *unaff_RSI;
  iVar2 = *(int *)(unaff_RSI + 1);
  *unaff_RDI = (char)*(int *)(unaff_RSI + 1);
  _DAT_19e393025547c6b4 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar1) + iVar2 ^ 0xd5327baf;
  if (_DAT_19e393025547c6b4 == 0) {
    *(undefined4 *)(unaff_RDI + 1) = *(undefined4 *)CONCAT26(unaff_retaddr,uStack_6);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6d2b FUN_14d7a6d2b body=24 status=ok
// SIG undefined FUN_14d7a6d2b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6d2b(void)

{
  uint *puVar1;
  longlong unaff_RSI;
  byte in_CF;
  
  puVar1 = (uint *)CONCAT71(0xa11ccd,in_CF + 0x98);
  *(byte *)(unaff_RSI + 0x10a38904) = *(byte *)(unaff_RSI + 0x10a38904) << 1 | 0x67 < in_CF;
  *puVar1 = *puVar1 >> 0x10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6d4f FUN_14d7a6d4f body=8 status=ok
// SIG undefined FUN_14d7a6d4f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6d4f(byte param_1)

{
  uint *puVar1;
  longlong unaff_RBP;
  
  puVar1 = (uint *)(unaff_RBP + 0x2a7267f2);
  *puVar1 = *puVar1 >> (param_1 & 0x1f) | *puVar1 << 0x20 - (param_1 & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6d77 FUN_14d7a6d77 body=39 status=ok
// SIG undefined FUN_14d7a6d77(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a6d77(void)

{
  int iVar1;
  code *pcVar2;
  int in_EAX;
  int *unaff_RSI;
  undefined1 *unaff_RDI;
  undefined4 *unaff_retaddr;
  
  iVar1 = *unaff_RSI;
  *unaff_RDI = (char)*unaff_RSI;
  _DAT_19e393025547c6b4 = in_EAX + iVar1 ^ 0xd5327baf;
  if (_DAT_19e393025547c6b4 == 0) {
    *(undefined4 *)(unaff_RDI + 1) = *unaff_retaddr;
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6dac FUN_14d7a6dac body=20 status=ok
// SIG undefined FUN_14d7a6dac(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6dac(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6dd5 FUN_14d7a6dd5 body=14 status=ok
// SIG undefined FUN_14d7a6dd5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6dd5(int *param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  undefined4 *unaff_RSI;
  
  *param_1 = -*param_1;
  out(*unaff_RSI,param_2);
  out(0xe4,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6de5 FUN_14d7a6de5 body=2 status=ok
// SIG undefined FUN_14d7a6de5(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a6de5(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  char in_AL;
  undefined1 unaff_BL;
  uint unaff_EBP;
  int unaff_ESI;
  undefined1 *unaff_RDI;
  char in_CF;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (!in_ZF && in_OF == in_SF) {
    cRam3ef9574f3a34856b = in_AL;
    unaff_RDI[0x5d3dd97c] = (unaff_RDI[0x5d3dd97c] - in_AL) - in_CF;
    piVar1 = (int *)((ulonglong)(uint)((int)unaff_RDI * -0x12f52849) + 0x61148d77);
    *piVar1 = *piVar1 - (int)&stack0x00000000;
    uVar3 = _DAT_20e1e6244f24d841;
    *(uint *)(param_2 + 0x45) = *(uint *)(param_2 + 0x45) ^ 2;
    out(1,unaff_BL);
    uVar2 = in((short)param_2);
    *unaff_RDI = uVar2;
    piVar1 = (int *)((ulonglong)(unaff_EBP | *(uint *)(ulonglong)uVar3) - 0xe3c28b4);
    *piVar1 = *piVar1 - uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*(undefined1 *)(ulonglong)(uint)(unaff_ESI >> 1),(short)param_2);
  *(char *)(param_1 + -0x2b0e08ce) = *(char *)(param_1 + -0x2b0e08ce) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6de9 FUN_14d7a6de9 body=3 status=ok
// SIG undefined FUN_14d7a6de9(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a6de9(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  char in_AL;
  undefined1 unaff_BL;
  uint unaff_EBP;
  undefined1 *unaff_RDI;
  
  unaff_RDI[0x5d3dd97c] = (unaff_RDI[0x5d3dd97c] - in_AL) + -1;
  piVar1 = (int *)((ulonglong)(uint)((int)unaff_RDI * -0x12f52849) + 0x61148d77);
  *piVar1 = *piVar1 - (int)&stack0xfffffffffffffff8;
  uVar3 = _DAT_20e1e6244f24d841;
  *(uint *)(param_2 + 0x45) = *(uint *)(param_2 + 0x45) ^ 2;
  out(1,unaff_BL);
  uVar2 = in((short)param_2);
  *unaff_RDI = uVar2;
  piVar1 = (int *)((ulonglong)(unaff_EBP | *(uint *)(ulonglong)uVar3) - 0xe3c28b4);
  *piVar1 = *piVar1 - uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6ded FUN_14d7a6ded body=52 status=ok
// SIG undefined FUN_14d7a6ded(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a6ded(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  char in_AL;
  undefined1 unaff_BL;
  uint unaff_EBP;
  undefined1 *unaff_RDI;
  
  unaff_RDI[0x5d3dd97c] = (unaff_RDI[0x5d3dd97c] - in_AL) + -1;
  piVar1 = (int *)((ulonglong)(uint)((int)unaff_RDI * -0x12f52849) + 0x61148d77);
  *piVar1 = *piVar1 - (int)&stack0xfffffffffffffff8;
  uVar3 = _DAT_20e1e6244f24d841;
  *(uint *)(param_2 + 0x45) = *(uint *)(param_2 + 0x45) ^ 2;
  out(1,unaff_BL);
  uVar2 = in((short)param_2);
  *unaff_RDI = uVar2;
  piVar1 = (int *)((ulonglong)(unaff_EBP | *(uint *)(ulonglong)uVar3) - 0xe3c28b4);
  *piVar1 = *piVar1 - uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6e23 FUN_14d7a6e23 body=3 status=ok
// SIG undefined FUN_14d7a6e23(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6e23(int *param_1)

{
  longlong unaff_RBP;
  
  *param_1 = *param_1 + -0x2f;
  *(char *)(unaff_RBP + 0x3ee2ca53) = *(char *)(unaff_RBP + 0x3ee2ca53) << ((byte)param_1 & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6e3c FUN_14d7a6e3c body=10 status=ok
// SIG undefined FUN_14d7a6e3c(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a6e3c(int param_1)

{
  _DAT_12ba4113f = _DAT_12ba4113f + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6e48 FUN_14d7a6e48 body=6 status=ok
// SIG undefined FUN_14d7a6e48(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a6e6a) overlaps instruction at (ram,0x00014d7a6e69)
    */

void FUN_14d7a6e48(byte param_1,longlong param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong in_RAX;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 unaff_RBX;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  int unaff_R13D;
  ulonglong unaff_R15;
  char in_AF;
  bool bVar8;
  float10 in_ST0;
  float10 fVar9;
  uint *puVar5;
  
  LOCK();
  *(char *)(in_RAX + -0x6f7b849d) = (char)((ulonglong)unaff_RBX >> 8);
  UNLOCK();
  uVar4 = (uint)in_RAX | 0x3b120035;
  puVar5 = (uint *)(ulonglong)uVar4;
  if (unaff_R13D != *param_3) {
    bVar8 = SCARRY1(DAT_1131a63d2,-0x2b);
    DAT_1131a63d2 = DAT_1131a63d2 + -0x2b;
    fVar9 = in_ST0 + (float10)*(double *)(param_2 + -0x1ea8279f);
    uVar3 = CONCAT22((short)(uVar4 >> 0x10),CONCAT11(0x80,(char)uVar4));
    if (bVar8) {
      lVar6 = func_0xdaec11af();
      *(int *)(lVar6 + 0x763cc9df) = (int)fVar9;
      uVar3 = uRam763cc9df88db8d71;
    }
    uRam763cc9df88db8d71 = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar1 = (int *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x3e);
  *piVar1 = *piVar1 >> (param_1 & 0x1f);
  uVar2 = *puVar5;
  *puVar5 = *puVar5 - uVar4;
  uVar7 = CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),(ushort)(byte)unaff_RBX) & 0xffffffff;
  if ((*(ulonglong *)
        (CONCAT62((int6)(uVar7 >> 0x10),
                  CONCAT11(((int)*puVar5 < 0) << 7 | (*puVar5 == 0) << 6 | in_AF << 4 |
                           ((POPCOUNT(*puVar5 & 0xff) & 1U) == 0) << 2 | 2U | uVar2 < uVar4,
                           (char)uVar7)) + 0x58c450e0) & unaff_R15) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6e51 FUN_14d7a6e51 body=16 status=ok
// SIG undefined FUN_14d7a6e51(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a6e6a) overlaps instruction at (ram,0x00014d7a6e69)
    */

void FUN_14d7a6e51(byte param_1,longlong param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  uint *in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 unaff_RBX;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  int unaff_R13D;
  ulonglong unaff_R15;
  char in_AF;
  bool bVar5;
  float10 in_ST0;
  float10 fVar6;
  
  if (unaff_R13D != *param_3) {
    bVar5 = SCARRY1(DAT_1131a63d2,-0x2b);
    DAT_1131a63d2 = DAT_1131a63d2 + -0x2b;
    fVar6 = in_ST0 + (float10)*(double *)(param_2 + -0x1ea8279f);
    if (bVar5) {
      lVar3 = func_0xdaec11af();
      *(int *)(lVar3 + 0x763cc9df) = (int)fVar6;
    }
    else {
      uRam763cc9df88db8d71 =
           (undefined4)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(0x80,(char)in_RAX));
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar1 = (int *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x3e);
  *piVar1 = *piVar1 >> (param_1 & 0x1f);
  uVar2 = *in_RAX;
  *in_RAX = *in_RAX - (uint)in_RAX;
  uVar4 = CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),(ushort)(byte)unaff_RBX) & 0xffffffff;
  if ((*(ulonglong *)
        (CONCAT62((int6)(uVar4 >> 0x10),
                  CONCAT11(((int)*in_RAX < 0) << 7 | (*in_RAX == 0) << 6 | in_AF << 4 |
                           ((POPCOUNT(*in_RAX & 0xff) & 1U) == 0) << 2 | 2U | uVar2 < (uint)in_RAX,
                           (char)uVar4)) + 0x58c450e0) & unaff_R15) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6e61 FUN_14d7a6e61 body=19 status=ok
// SIG undefined FUN_14d7a6e61(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a6e6a) overlaps instruction at (ram,0x00014d7a6e69)
    */

void FUN_14d7a6e61(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 in_EAX;
  bool in_OF;
  float10 in_ST0;
  float10 fVar3;
  
  fVar3 = in_ST0 + (float10)*(double *)(param_2 + -0x1ea8279f);
  uVar2 = in_EAX;
  if (in_OF) {
    lVar1 = func_0xdaec11af();
    *(int *)(lVar1 + 0x763cc9df) = (int)fVar3;
    uVar2 = uRam763cc9df88db8d71;
  }
  uRam763cc9df88db8d71 = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6e75 FUN_14d7a6e75 body=8 status=ok
// SIG undefined FUN_14d7a6e75(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a6e75(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined1 uVar4;
  longlong in_RAX;
  undefined7 uVar6;
  char *pcVar5;
  byte bVar7;
  char cVar8;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  ulonglong uVar9;
  uint unaff_EBP;
  undefined1 *unaff_RSI;
  int *unaff_RDI;
  uint unaff_R13D;
  
  cVar8 = (char)((ulonglong)param_2 >> 8);
  uVar3 = *(uint *)(in_RAX + 0x1d00fc5f);
  *unaff_RDI = *unaff_RDI << 1;
  pbVar1 = (byte *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x35a64d5b);
  bVar2 = *pbVar1;
  bVar7 = (byte)param_1;
  *pbVar1 = *pbVar1 + bVar7;
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  uVar4 = in(0x77);
  *(int *)(param_2 + 0x73) =
       (*(int *)(param_2 + 0x73) - (int)&stack0x00000000) - (uint)CARRY1(bVar2,bVar7);
  *(undefined1 *)unaff_RDI = uVar4;
  *(char *)((longlong)unaff_RDI + 0x517dd51f) = *(char *)((longlong)unaff_RDI + 0x517dd51f) + bVar7;
  uVar9 = (ulonglong)((uint)&stack0xfffffffffffffff8 ^ (uint)CONCAT71(uVar6,uVar4));
  uVar4 = *unaff_RSI;
  *(ulonglong *)(uVar9 - 8) = (ulonglong)(unaff_EBP ^ uVar3);
  *(ulonglong *)(uVar9 - 0x10) = uVar9 - 8;
  _DAT_d13da199 = _DAT_d13da199 ^ (uint)param_2;
  uVar3 = (int)(uVar9 - 0x9a29) - unaff_EBX;
  bVar2 = *(byte *)(CONCAT71(uVar6,uVar4) + 0x17dad800);
  if (CONCAT62((int6)((ulonglong)param_1 >> 0x10),
               CONCAT11((byte)((ulonglong)param_1 >> 8) |
                        *(byte *)((longlong)unaff_RDI + (uVar9 - 8) * 4 + 0x2d29b309),bVar7)) == 1)
  {
    *(undefined1 *)((longlong)unaff_RDI + 1) = 0xef;
    *(char *)(unaff_RDI + -0x10) = (char)unaff_RDI[-0x10] - cVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)(uVar9 + 7) = *(uint *)(uVar9 + 7) | uVar3;
  *(ulonglong *)((ulonglong)uVar3 - 8) = uVar9 - 8;
  pcVar5 = (char *)((ulonglong)((longlong)unaff_RDI + 1) & 0xffffffff);
  *pcVar5 = *pcVar5 + (char)((ulonglong)pcVar5 >> 8);
  if ((int)(unaff_R13D &
           *(uint *)(CONCAT44((int)((ulonglong)(unaff_RSI + 1) >> 0x20),(int)(unaff_RSI + 1) + 4) +
                     0x16 + CONCAT44((int)((ulonglong)param_2 >> 0x20),
                                     CONCAT22((short)((ulonglong)param_2 >> 0x10),
                                              CONCAT11(cVar8,(byte)param_2 | bVar2))) * 4)) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6e7e FUN_14d7a6e7e body=4 status=ok
// SIG undefined FUN_14d7a6e7e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6e7e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6e86 FUN_14d7a6e86 body=4 status=ok
// SIG undefined FUN_14d7a6e86(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a6e86(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  undefined8 in_RAX;
  char *pcVar4;
  char cVar5;
  int unaff_EBX;
  ulonglong uVar6;
  undefined8 unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  uint unaff_R13D;
  byte in_CF;
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  *(int *)(param_2 + 0x73) = (*(int *)(param_2 + 0x73) - (int)&stack0x00000000) - (uint)in_CF;
  *unaff_RDI = (char)in_RAX;
  unaff_RDI[0x517dd51f] = unaff_RDI[0x517dd51f] + (char)param_1;
  uVar6 = (ulonglong)((uint)&stack0xfffffffffffffff8 ^ (uint)in_RAX);
  uVar1 = *unaff_RSI;
  *(undefined8 *)(uVar6 - 8) = unaff_RBP;
  *(ulonglong *)(uVar6 - 0x10) = uVar6 - 8;
  _DAT_d13da199 = _DAT_d13da199 ^ (uint)param_2;
  uVar3 = (int)(uVar6 - 0x9a29) - unaff_EBX;
  bVar2 = *(byte *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar1) + 0x17dad800);
  if (CONCAT62((int6)((ulonglong)param_1 >> 0x10),
               CONCAT11((byte)((ulonglong)param_1 >> 8) | unaff_RDI[(uVar6 - 8) * 4 + 0x2d29b309],
                        (char)param_1)) == 1) {
    unaff_RDI[1] = 0xef;
    unaff_RDI[-0x40] = unaff_RDI[-0x40] - cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)(uVar6 + 7) = *(uint *)(uVar6 + 7) | uVar3;
  *(ulonglong *)((ulonglong)uVar3 - 8) = uVar6 - 8;
  pcVar4 = (char *)((ulonglong)(unaff_RDI + 1) & 0xffffffff);
  *pcVar4 = *pcVar4 + (char)((ulonglong)pcVar4 >> 8);
  if ((int)(unaff_R13D &
           *(uint *)(CONCAT44((int)((ulonglong)(unaff_RSI + 1) >> 0x20),(int)(unaff_RSI + 1) + 4) +
                     0x16 + CONCAT44((int)((ulonglong)param_2 >> 0x20),
                                     CONCAT22((short)((ulonglong)param_2 >> 0x10),
                                              CONCAT11(cVar5,(byte)param_2 | bVar2))) * 4)) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6e8f FUN_14d7a6e8f body=4 status=ok
// SIG undefined FUN_14d7a6e8f(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a6e8f(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  undefined8 in_RAX;
  char *pcVar4;
  char cVar5;
  int unaff_EBX;
  ulonglong uVar6;
  undefined8 unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  uint unaff_R13D;
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  uVar6 = (ulonglong)((uint)&stack0xfffffffffffffff0 ^ (uint)in_RAX);
  uVar1 = *unaff_RSI;
  *(undefined8 *)(uVar6 - 8) = unaff_RBP;
  *(ulonglong *)(uVar6 - 0x10) = uVar6 - 8;
  _DAT_d13da199 = _DAT_d13da199 ^ (uint)param_2;
  uVar3 = (int)(uVar6 - 0x9a29) - unaff_EBX;
  bVar2 = *(byte *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar1) + 0x17dad800);
  if (CONCAT62((int6)((ulonglong)param_1 >> 0x10),
               CONCAT11((byte)((ulonglong)param_1 >> 8) | unaff_RDI[(uVar6 - 8) * 4 + 0x2d29b308],
                        (char)param_1)) == 1) {
    *unaff_RDI = 0xef;
    unaff_RDI[-0x41] = unaff_RDI[-0x41] - cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)(uVar6 + 7) = *(uint *)(uVar6 + 7) | uVar3;
  *(ulonglong *)((ulonglong)uVar3 - 8) = uVar6 - 8;
  pcVar4 = (char *)((ulonglong)unaff_RDI & 0xffffffff);
  *pcVar4 = *pcVar4 + (char)((ulonglong)pcVar4 >> 8);
  if ((int)(unaff_R13D &
           *(uint *)(CONCAT44((int)((ulonglong)(unaff_RSI + 1) >> 0x20),(int)(unaff_RSI + 1) + 4) +
                     0x16 + CONCAT44((int)((ulonglong)param_2 >> 0x20),
                                     CONCAT22((short)((ulonglong)param_2 >> 0x10),
                                              CONCAT11(cVar5,(byte)param_2 | bVar2))) * 4)) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6e93 FUN_14d7a6e93 body=69 status=ok
// SIG undefined FUN_14d7a6e93(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a6e93(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 in_RAX;
  char *pcVar2;
  char cVar3;
  int unaff_EBX;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  uint unaff_R13D;
  undefined1 auStack_9a29 [39457];
  
  cVar3 = (char)((ulonglong)param_2 >> 8);
  _DAT_d13da199 = _DAT_d13da199 ^ (uint)param_2;
  bVar1 = *(byte *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),*unaff_RSI) + 0x17dad800);
  if (CONCAT62((int6)((ulonglong)param_1 >> 0x10),
               CONCAT11((byte)((ulonglong)param_1 >> 8) |
                        unaff_RDI[(longlong)&stack0xfffffffffffffff8 * 4 + 0x2d29b308],(char)param_1
                       )) == 1) {
    *unaff_RDI = 0xef;
    unaff_RDI[-0x41] = unaff_RDI[-0x41] - cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 **)((ulonglong)(uint)((int)auStack_9a29 - unaff_EBX) - 8) = &stack0xfffffffffffffff8;
  pcVar2 = (char *)((ulonglong)unaff_RDI & 0xffffffff);
  *pcVar2 = *pcVar2 + (char)((ulonglong)pcVar2 >> 8);
  if ((int)(unaff_R13D &
           *(uint *)(CONCAT44((int)((ulonglong)(unaff_RSI + 1) >> 0x20),(int)(unaff_RSI + 1) + 4) +
                     0x16 + CONCAT44((int)((ulonglong)param_2 >> 0x20),
                                     CONCAT22((short)((ulonglong)param_2 >> 0x10),
                                              CONCAT11(cVar3,(byte)param_2 | bVar1))) * 4)) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6ec5 FUN_14d7a6ec5 body=44 status=ok
// SIG undefined FUN_14d7a6ec5(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a6ec5(byte param_1)

{
  uint uVar1;
  undefined8 in_RAX;
  uint *puVar2;
  ulonglong unaff_RBX;
  undefined1 *unaff_RSI;
  ulonglong unaff_R15;
  char in_AF;
  
  puVar2 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),*unaff_RSI);
  _DAT_9c526fb7 = 0x9c526fbf;
  *(int *)(unaff_RSI + 0x3f) = *(int *)(unaff_RSI + 0x3f) >> (param_1 & 0x1f);
  uVar1 = *puVar2;
  *puVar2 = *puVar2 - (uint)puVar2;
  if ((*(ulonglong *)
        (CONCAT62((int6)((unaff_RBX & 0xffffffff) >> 0x10),
                  CONCAT11(((int)*puVar2 < 0) << 7 | (*puVar2 == 0) << 6 | in_AF << 4 |
                           ((POPCOUNT(*puVar2 & 0xff) & 1U) == 0) << 2 | 2U | uVar1 < (uint)puVar2,
                           (char)(unaff_RBX & 0xffffffff))) + 0x58c450e0) & unaff_R15) != 0) {
    puRam000000009c526faf = unaff_RSI + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6ef2 FUN_14d7a6ef2 body=10 status=ok
// SIG undefined FUN_14d7a6ef2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6ef2(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6f1b FUN_14d7a6f1b body=8 status=ok
// SIG undefined FUN_14d7a6f1b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6f1b(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6f23 FUN_14d7a6f23 body=6 status=ok
// SIG undefined FUN_14d7a6f23(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6f23(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6f33 FUN_14d7a6f33 body=1 status=ok
// SIG undefined FUN_14d7a6f33(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6f33(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6f37 FUN_14d7a6f37 body=16 status=ok
// SIG undefined FUN_14d7a6f37(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a6f44) overlaps instruction at (ram,0x00014d7a6f43)
    */

void FUN_14d7a6f37(longlong param_1,ulonglong param_2)

{
  uint *puVar1;
  char *pcVar2;
  uint uVar3;
  float10 fVar4;
  char cVar5;
  int iVar6;
  undefined8 in_RAX;
  undefined7 uVar9;
  ulonglong uVar8;
  byte bVar10;
  byte bVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  int iVar14;
  char *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  uint *puVar15;
  undefined1 *unaff_RDI;
  undefined1 *puVar16;
  uint unaff_R13D;
  byte in_CF;
  byte bVar17;
  bool bVar18;
  bool bVar19;
  char cVar20;
  char cVar21;
  float10 in_ST0;
  byte *pbVar7;
  
  uVar13 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar12 = (undefined2)((ulonglong)param_1 >> 0x10);
  bVar11 = (byte)((ulonglong)param_1 >> 8);
  bVar10 = (byte)param_1;
  if (param_1 == 0) {
    *(undefined4 *)(unaff_RDI + -0x59) = *(undefined4 *)(unaff_RDI + -0x59);
    if ((int)(unaff_R13D & *(uint *)(unaff_RSI + 0x16 + param_2 * 4)) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while( true ) {
    *(ulonglong *)((longlong)register0x00000020 + -8) = param_2;
    out(0x2a,(char)in_RAX);
    iVar14 = (int)param_2 + CONCAT22(uVar12,CONCAT11(bVar11,bVar10)) + (uint)in_CF;
    iVar6 = in((short)iVar14);
    *unaff_RBX = *unaff_RBX + (char)iVar14;
    param_2 = (ulonglong)
              CONCAT22((short)((uint)iVar14 >> 0x10),
                       CONCAT11((byte)((uint)iVar14 >> 8) | bVar11,(char)iVar14));
    pbVar7 = (byte *)(param_2 - 0x4d);
    bVar17 = *pbVar7 < 0x1b;
    cVar21 = SBORROW1(*pbVar7,'\x1b');
    *pbVar7 = *pbVar7 - 0x1b;
    cVar20 = (char)*pbVar7 < '\0';
    bVar19 = *pbVar7 == 0;
    bVar18 = (POPCOUNT(*pbVar7) & 1U) == 0;
    puVar15 = (uint *)(ulonglong)(iVar6 + 0x336fffb6);
    *(undefined8 *)((longlong)register0x00000020 + -0x10) = 0x14d7a6f54;
    in_RAX = func_0x000151810454();
    if (!bVar18) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *unaff_RDI = (char)in_RAX;
    *(uint **)((longlong)register0x00000020 + -0x10) = puVar15;
    if (bVar19 || cVar21 != cVar20) break;
    *(undefined8 *)((longlong)register0x00000020 + -0x18) = 0xffffffffffffffb3;
    uVar3 = (uint)(undefined1 *)((longlong)register0x00000020 + -0x18) - *puVar15;
    in_CF = (uint)(undefined1 *)((longlong)register0x00000020 + -0x18) < *puVar15 || uVar3 < bVar17;
    register0x00000020 = (BADSPACEBASE *)(ulonglong)(uVar3 - bVar17);
    unaff_RDI = unaff_RDI + 1;
  }
  uVar9 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar5 = in((short)param_2);
  pbVar7 = (byte *)CONCAT71(uVar9,cVar5);
  fVar4 = (float10)*(double *)(param_2 + 0x74);
  bVar17 = (byte)(param_2 >> 8);
  if (cVar21 == cVar20) {
    *(ulonglong *)((longlong)register0x00000020 + -0x18) =
         CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,bVar10)));
    unaff_RBX[CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,bVar10))) * 4 + 0xc] =
         unaff_RBX[CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,bVar10))) * 4 + 0xc] & bVar17;
    pcVar2 = (char *)(CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,bVar10))) + 0xf46e99);
    *pcVar2 = *pcVar2 + '\x01';
    uVar8 = CONCAT71(uVar9,cVar5 - (char)((ulonglong)in_RAX >> 8));
    if ((uint)(undefined1 *)((longlong)register0x00000020 + -0x18) <= *(uint *)(unaff_RBP + -0x39))
    {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out((short)param_2,(int)uVar8);
    *(ushort *)(ulonglong)((uint)unaff_RBX & (uint)param_2) =
         (ushort)(in_ST0 < fVar4) << 8 | (ushort)(NAN(in_ST0) || NAN(fVar4)) << 10 |
         (ushort)(in_ST0 == fVar4) << 0xe;
    puVar16 = (undefined1 *)(uVar8 & 0xffffffff);
    puVar1 = (uint *)(CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,bVar10))) + 0x1b);
    *puVar1 = *puVar1 << (bVar10 & 0x1f) | *puVar1 >> 0x20 - (bVar10 & 0x1f);
    puVar1 = (uint *)(puVar16 + 1);
    *puVar16 = (char)*puVar15;
    *puVar1 = *puVar1 & 0x158709a0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar7 = *pbVar7 ^ bVar17;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6f4c FUN_14d7a6f4c body=3 status=ok
// SIG undefined FUN_14d7a6f4c(void)

void FUN_14d7a6f4c(void)

{
  longlong unaff_RDI;
  
                    /* WARNING: Could not recover jumptable at 0x00014d7a6f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulonglong)*(uint *)(unaff_RDI + 0x33))();
  return;
}



// FUNCTION 14d7a6f66 FUN_14d7a6f66 body=8 status=ok
// SIG undefined FUN_14d7a6f66(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6f66(byte param_1,longlong param_2)

{
  undefined1 in_AL;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = in_AL;
  *(int *)(param_2 + -0x53) = *(int *)(param_2 + -0x53) >> (param_1 & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6f72 FUN_14d7a6f72 body=5 status=ok
// SIG undefined FUN_14d7a6f72(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6f72(byte param_1)

{
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) << (param_1 & 7) |
       *(byte *)CONCAT44(in_register_00000004,in_EAX) >> 8 - (param_1 & 7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6f7a FUN_14d7a6f7a body=23 status=ok
// SIG undefined FUN_14d7a6f7a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6f7a(byte param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  undefined4 uVar2;
  
  uVar1 = in(param_2);
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),uVar1);
  *(byte *)CONCAT44(in_register_00000004,uVar2) =
       *(char *)CONCAT44(in_register_00000004,uVar2) << (param_1 & 7) |
       *(byte *)CONCAT44(in_register_00000004,uVar2) >> 8 - (param_1 & 7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6f97 FUN_14d7a6f97 body=8 status=ok
// SIG undefined FUN_14d7a6f97(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6f97(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  char *pcVar2;
  uint uVar3;
  float10 fVar4;
  char cVar5;
  undefined8 in_RAX;
  undefined7 uVar8;
  ulonglong uVar7;
  byte bVar9;
  undefined7 uVar10;
  byte bVar11;
  longlong unaff_RBX;
  uint uVar12;
  longlong unaff_RBP;
  uint *unaff_RSI;
  undefined1 *unaff_RDI;
  undefined1 *puVar14;
  byte in_CF;
  bool bVar15;
  undefined1 in_ZF;
  char in_SF;
  char in_OF;
  float10 in_ST0;
  byte *pbVar6;
  uint uVar13;
  
  uVar10 = (undefined7)((ulonglong)param_1 >> 8);
  bVar9 = (byte)param_1;
  while( true ) {
    *unaff_RDI = (char)in_RAX;
    *(uint **)((longlong)register0x00000020 + -8) = unaff_RSI;
    if ((bool)in_ZF || in_OF != in_SF) break;
    *(undefined8 *)((longlong)register0x00000020 + -0x10) = 0xffffffffffffffb3;
    uVar3 = (uint)in_CF;
    uVar13 = (uint)(undefined1 *)((longlong)register0x00000020 + -0x10);
    uVar12 = uVar13 - *unaff_RSI;
    in_CF = uVar13 < *unaff_RSI || uVar12 < uVar3;
    in_OF = SBORROW4(uVar13,*unaff_RSI) != SBORROW4(uVar12,uVar3);
    uVar12 = uVar12 - uVar3;
    register0x00000020 = (BADSPACEBASE *)(ulonglong)uVar12;
    in_SF = (int)uVar12 < 0;
    in_ZF = uVar12 == 0;
    bVar15 = (POPCOUNT(uVar12 & 0xff) & 1U) == 0;
    unaff_RSI = (uint *)(ulonglong)((int)in_RAX + 0x336fffb6);
    *(undefined8 *)((longlong)register0x00000020 + -8) = 0x14d7a6f54;
    in_RAX = func_0x000151810454();
    unaff_RDI = unaff_RDI + 1;
    if (!bVar15) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  uVar8 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar5 = in((short)param_2);
  pbVar6 = (byte *)CONCAT71(uVar8,cVar5);
  fVar4 = (float10)*(double *)(param_2 + 0x74);
  bVar11 = (byte)((ulonglong)param_2 >> 8);
  if (in_OF == in_SF) {
    *(ulonglong *)((longlong)register0x00000020 + -0x10) = CONCAT71(uVar10,bVar9);
    pbVar6 = (byte *)(unaff_RBX + 0xc + CONCAT71(uVar10,bVar9) * 4);
    *pbVar6 = *pbVar6 & bVar11;
    pcVar2 = (char *)(CONCAT71(uVar10,bVar9) + 0xf46e99);
    *pcVar2 = *pcVar2 + '\x01';
    uVar7 = CONCAT71(uVar8,cVar5 - (char)((ulonglong)in_RAX >> 8));
    if ((uint)(undefined1 *)((longlong)register0x00000020 + -0x10) <= *(uint *)(unaff_RBP + -0x39))
    {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out((short)param_2,(int)uVar7);
    *(ushort *)(ulonglong)((uint)unaff_RBX & (uint)param_2) =
         (ushort)(in_ST0 < fVar4) << 8 | (ushort)(NAN(in_ST0) || NAN(fVar4)) << 10 |
         (ushort)(in_ST0 == fVar4) << 0xe;
    puVar14 = (undefined1 *)(uVar7 & 0xffffffff);
    puVar1 = (uint *)(CONCAT71(uVar10,bVar9) + 0x1b);
    *puVar1 = *puVar1 << (bVar9 & 0x1f) | *puVar1 >> 0x20 - (bVar9 & 0x1f);
    puVar1 = (uint *)(puVar14 + 1);
    *puVar14 = (char)*unaff_RSI;
    *puVar1 = *puVar1 & 0x158709a0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar6 = *pbVar6 ^ bVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6f9f FUN_14d7a6f9f body=7 status=ok
// SIG undefined FUN_14d7a6f9f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6f9f(longlong param_1,uint param_2)

{
  uint *puVar1;
  byte *pbVar2;
  byte *in_RAX;
  ulonglong uVar3;
  byte bVar4;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *puVar5;
  char in_SF;
  char in_OF;
  undefined2 in_FPUStatusWord;
  undefined1 auStack_8 [8];
  
  bVar4 = (byte)(param_2 >> 8);
  if (in_OF != in_SF) {
    *in_RAX = *in_RAX ^ bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar2 = (byte *)(unaff_RBX + 0xc + param_1 * 4);
  *pbVar2 = *pbVar2 & bVar4;
  *(char *)(param_1 + 0xf46e99) = *(char *)(param_1 + 0xf46e99) + '\x01';
  uVar3 = CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX - (char)((ulonglong)in_RAX >> 8));
  if ((uint)auStack_8 <= *(uint *)(unaff_RBP + -0x39)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out((short)param_2,(int)uVar3);
  *(undefined2 *)(ulonglong)((uint)unaff_RBX & param_2) = in_FPUStatusWord;
  puVar5 = (undefined1 *)(uVar3 & 0xffffffff);
  puVar1 = (uint *)(param_1 + 0x1b);
  bVar4 = (byte)param_1 & 0x1f;
  *puVar1 = *puVar1 << bVar4 | *puVar1 >> 0x20 - bVar4;
  puVar1 = (uint *)(puVar5 + 1);
  *puVar5 = *unaff_RSI;
  *puVar1 = *puVar1 & 0x158709a0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6fa3 FUN_14d7a6fa3 body=23 status=ok
// SIG undefined FUN_14d7a6fa3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6fa3(longlong param_1,uint param_2)

{
  uint *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 in_RAX;
  ulonglong uVar4;
  undefined2 uVar5;
  uint unaff_EBX;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *puVar6;
  bool in_ZF;
  undefined2 in_FPUStatusWord;
  
  uVar5 = (undefined2)param_2;
  if (in_ZF) {
    uVar3 = in(uVar5);
    out(uVar5,uVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = CONCAT71((int7)((ulonglong)in_RAX >> 8),
                   ((byte)in_RAX | 0xfe) - (char)((ulonglong)in_RAX >> 8));
  if ((uint)&stack0x00000000 <= *(uint *)(unaff_RBP + -0x39)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(uVar5,(int)uVar4);
  *(undefined2 *)(ulonglong)(unaff_EBX & param_2) = in_FPUStatusWord;
  puVar6 = (undefined1 *)(uVar4 & 0xffffffff);
  puVar1 = (uint *)(param_1 + 0x1b);
  bVar2 = (byte)param_1 & 0x1f;
  *puVar1 = *puVar1 << bVar2 | *puVar1 >> 0x20 - bVar2;
  puVar1 = (uint *)(puVar6 + 1);
  *puVar6 = *unaff_RSI;
  *puVar1 = *puVar1 & 0x158709a0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6fbc thunk_EXT_FUN_1806a44c5 body=5 status=ok
// SIG undefined thunk_EXT_FUN_1806a44c5(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_1806a44c5(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6fd8 FUN_14d7a6fd8 body=8 status=ok
// SIG undefined FUN_14d7a6fd8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6fd8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6fe8 FUN_14d7a6fe8 body=2 status=ok
// SIG undefined FUN_14d7a6fe8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6fe8(byte param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  bool in_CF;
  bool in_ZF;
  undefined4 uVar2;
  
  if (in_CF || in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = in(param_2);
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),uVar1);
  *(byte *)CONCAT44(in_register_00000004,uVar2) =
       *(char *)CONCAT44(in_register_00000004,uVar2) << (param_1 & 7) |
       *(byte *)CONCAT44(in_register_00000004,uVar2) >> 8 - (param_1 & 7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6ff0 FUN_14d7a6ff0 body=12 status=ok
// SIG undefined FUN_14d7a6ff0(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a703a) overlaps instruction at (ram,0x00014d7a7039)
    */

void FUN_14d7a6ff0(byte param_1,byte *param_2)

{
  byte bVar1;
  char *unaff_RBX;
  longlong unaff_RDI;
  bool in_ZF;
  bool in_SF;
  char in_OF;
  
  if (in_ZF || (bool)in_OF != in_SF) {
    *(int *)(unaff_RDI + -0x4c44ee82) = *(int *)(unaff_RDI + -0x4c44ee82) >> 0x1e;
    *unaff_RBX = *unaff_RBX - (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = *param_2 | param_1;
  bVar1 = unaff_RBX[0x5f763929];
  unaff_RBX[0x5f763929] = bVar1 >> 4 | bVar1 << 5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7001 FUN_14d7a7001 body=29 status=ok
// SIG undefined FUN_14d7a7001(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a704b) overlaps instruction at (ram,0x00014d7a7048)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a7058) */

ulonglong FUN_14d7a7001(longlong param_1,unkbyte10 *param_2)

{
  int *piVar1;
  unkbyte10 Var2;
  int iVar3;
  code *pcVar4;
  undefined1 uVar5;
  uint uVar6;
  longlong in_RAX;
  ulonglong uVar7;
  byte bVar8;
  uint uVar9;
  byte bVar10;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  undefined2 in_FS;
  byte in_CF;
  byte in_AF;
  bool bVar11;
  byte in_TF;
  byte in_IF;
  bool bVar12;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  unkbyte10 in_ST0;
  undefined1 auStackX_8 [32];
  
  uVar6 = (uint)in_RAX;
  piVar1 = (int *)(unaff_RBX + -0x7d);
  iVar3 = *piVar1 + (int)unaff_RDI;
  bVar12 = SCARRY4(*piVar1,(int)unaff_RDI) != SCARRY4(iVar3,(uint)in_CF);
  *piVar1 = iVar3 + (uint)in_CF;
  bVar11 = *piVar1 == 0;
  uVar7 = param_1 - 1;
  if (uVar7 == 0 || bVar11) {
    uVar7 = (ulonglong)*(uint *)(unaff_RBP + 0x19);
    in(0x6d);
    pcVar4 = (code *)swi(0x62);
    in_RAX = (*pcVar4)();
    register0x00000020 = (BADSPACEBASE *)auStackX_8;
    *(byte *)(in_RAX + 0x1d) = *(byte *)(in_RAX + 0x1d) | (byte)(uVar7 >> 8);
    bVar8 = (byte)param_2;
    bVar10 = (byte)((ulonglong)unaff_RBX >> 8);
    param_2 = (unkbyte10 *)CONCAT71((int7)((ulonglong)param_2 >> 8),bVar8 + bVar10);
    if (CARRY1(bVar8,bVar10)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar11 || bVar12 != *piVar1 < 0) {
      if (bVar11 || bVar12 != *piVar1 < 0) goto LAB_14d7a7079;
      goto code_r0x00014d7a7051;
    }
    unaff_RBX = 0xbca71eb3;
    register0x00000020 = (BADSPACEBASE *)&stack0xfffffffffffffff8;
    *(uint *)(unaff_RSI + -0x5f6eccd8) = *(uint *)(unaff_RSI + -0x5f6eccd8) & (uint)param_2;
    *(char *)(param_1 + -0x7b) = *(char *)(param_1 + -0x7b) + '\x01';
  }
  uVar6 = (uint)in_RAX;
  uVar9 = (uint)param_2 ^ *(uint *)(uVar7 - 0x798e0160);
  param_2 = (unkbyte10 *)(ulonglong)uVar9;
  if ((int)uVar9 < 1) {
LAB_14d7a7079:
    uVar5 = DAT_2a007ba9e5373103;
    Var2 = to_bcd(in_ST0);
    *param_2 = Var2;
    *unaff_RDI = uVar5;
    *(longlong *)((longlong)register0x00000020 + -8) = unaff_RBP;
    bVar8 = *(byte *)(unaff_RSI + -0x33);
    uVar5 = in((short)param_2);
    *(undefined2 *)(unaff_RBP + 0x445c9037) = in_FS;
    piVar1 = (int *)(unaff_RBX + 0x24721a42);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 << 1;
    *(char *)(unaff_RBX + -0x65) = (*(char *)(unaff_RBX + -0x65) - (char)param_2) - (iVar3 < 0);
    pcVar4 = (code *)swi(0xd1);
    uVar7 = (*pcVar4)((uint)CONCAT71(CONCAT61((int6)((ulonglong)in_RAX >> 0x10),
                                              (byte)((ulonglong)in_RAX >> 8) ^ bVar8),uVar5) &
                      0x7a912f2b);
    return uVar7;
  }
code_r0x00014d7a7051:
  uVar6 = uVar6 ^ 0xacf1064a;
  *(ulonglong *)((longlong)register0x00000020 + -8) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((int)uVar6 < 0) * 0x80 |
       (ulonglong)(uVar6 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
       (ulonglong)((POPCOUNT(uVar6 & 0xff) & 1U) == 0) * 4 | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
  out(0x2f,uVar6);
  return (ulonglong)uVar6 ^ 0x73;
}



// FUNCTION 14d7a7023 FUN_14d7a7023 body=55 status=ok
// SIG undefined FUN_14d7a7023(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a7023(uint *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong unaff_RBP;
  int unaff_ESI;
  uint unaff_EDI;
  float10 in_ST0;
  
  piVar1 = (int *)(unaff_RBP + -0x643ff5f8 + (longlong)param_1);
  *piVar1 = *piVar1 + unaff_ESI;
  uVar2 = *param_1;
  *param_1 = *param_1 - unaff_EDI;
  if (unaff_EDI <= uVar2 && *param_1 != 0) {
    _DAT_10f57c7b1 = (short)ROUND(in_ST0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7038 FUN_14d7a7038 body=3 status=ok
// SIG undefined FUN_14d7a7038(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7038(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7070 FUN_14d7a7070 body=5 status=ok
// SIG undefined FUN_14d7a7070(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7070(void)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  longlong unaff_RBP;
  byte in_CF;
  int iVar3;
  
  piVar1 = (int *)(unaff_RBP + -4);
  iVar2 = *piVar1;
  iVar3 = *piVar1;
  *piVar1 = iVar3 + in_EAX + (uint)in_CF;
  if (*piVar1 == 0 || (SCARRY4(iVar2,in_EAX) != SCARRY4(iVar3 + in_EAX,(uint)in_CF)) != *piVar1 < 0)
  {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a70b5 FUN_14d7a70b5 body=5 status=ok
// SIG undefined FUN_14d7a70b5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a70b5(char param_1,undefined2 param_2)

{
  undefined4 uVar1;
  uint *in_RAX;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_CF;
  bool in_ZF;
  
  if (!in_CF && !in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_RSI;
  *in_RAX = *in_RAX ^ (uint)in_RAX;
  in(param_2);
  if ((char)(*(char *)(unaff_RDI + 1) - param_1) < '\0') {
    uVar1 = in(param_2);
    unaff_RDI[1] = uVar1;
    in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// FUNCTION 14d7a70ca FUN_14d7a70ca body=6 status=ok
// SIG undefined FUN_14d7a70ca(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a70ca(char param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  char *unaff_RDI;
  
  *param_2 = *param_2 >> 0x1a;
  uVar2 = SUB82(param_2,0);
  in(uVar2);
  if ((char)(*unaff_RDI - param_1) < '\0') {
    uVar1 = in(uVar2);
    *(undefined4 *)unaff_RDI = uVar1;
    in(uVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// FUNCTION 14d7a70d2 FUN_14d7a70d2 body=30 status=ok
// SIG undefined FUN_14d7a70d2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a70d2(char param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RDI;
  
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x6e3cbc28;
  in(param_2);
  if ((char)(*unaff_RDI - param_1) < '\0') {
    uVar1 = in(param_2);
    *(undefined4 *)unaff_RDI = uVar1;
    in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// FUNCTION 14d7a70ef FUN_14d7a70ef body=11 status=ok
// SIG undefined FUN_14d7a70ef(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a70ef(longlong param_1,undefined2 param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined4 in_EAX;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  byte *unaff_RSI;
  byte *unaff_RDI;
  undefined1 in_CF;
  char in_ZF;
  
  if (param_1 == 1 || in_ZF == '\0') {
    puVar1 = (undefined1 *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x179699);
    *puVar1 = (char)(CONCAT11(in_CF,*puVar1) >> 1);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uRamd06e33003ee91023 = (undefined1)in_EAX;
  uVar2 = in(param_2);
  *unaff_RDI = *unaff_RDI ^ unaff_BH;
  out(0x14,CONCAT31((int3)((uint)in_EAX >> 8),uVar2));
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7104 FUN_14d7a7104 body=4 status=ok
// SIG undefined FUN_14d7a7104(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a717e) overlaps instruction at (ram,0x00014d7a717b)
    */

undefined2 * FUN_14d7a7104(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  ulonglong in_RAX;
  undefined2 *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  byte unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  byte *unaff_RSI;
  byte *unaff_RDI;
  byte *pbVar8;
  ulonglong unaff_R15;
  undefined2 in_DS;
  byte in_CF;
  bool in_PF;
  bool in_ZF;
  char in_SF;
  char in_OF;
  uint unaff_retaddr;
  
  if (in_OF == in_SF) {
    if (!in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar7 = (undefined2 *)(ulonglong)((unaff_retaddr ^ 0xe8a7a63a) + 0x563103cc);
  }
  else {
    puVar7 = (undefined2 *)
             CONCAT71((int7)(in_RAX >> 8),
                      *(undefined1 *)(CONCAT71(unaff_00000019,unaff_BL) + (in_RAX & 0xff)));
    *puVar7 = in_DS;
    UNRECOVERED_JUMPTABLE = (code *)(param_1 + -1);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      unaff_RSI = (byte *)0xf567d23a;
      goto code_r0x00014d7a71f5;
    }
    pbVar8 = unaff_RDI;
    if (!in_PF) {
      while( true ) {
        bVar4 = (byte)puVar7;
        pbVar1 = unaff_RSI + -0x16;
        DAT_29e698bba5c2a289 = bVar4;
        *pbVar1 = *pbVar1 + bVar4 + in_CF;
        if ((POPCOUNT(*pbVar1) & 1U) != 0) {
          from_bcd(*(unkbyte10 *)pbVar8);
          *UNRECOVERED_JUMPTABLE = (code)((byte)*UNRECOVERED_JUMPTABLE & unaff_BL);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        unaff_RDI = pbVar8 + 1;
        if (bVar4 < *pbVar8 || bVar4 == *pbVar8) break;
        unaff_RSI = (byte *)0x95eabbdd;
        in_CF = 0;
        in_OF = '\0';
        uVar5 = (uint)CONCAT71((int7)(CONCAT62((int6)((ulonglong)puVar7 >> 0x10),
                                               CONCAT11(bVar4 / 0x8d,bVar4)) >> 8),bVar4 % 0x8d) ^
                0xa7ed6045;
        puVar7 = (undefined2 *)(ulonglong)uVar5;
        in_SF = (int)uVar5 < 0;
code_r0x00014d7a71f5:
        if (in_OF == in_SF) {
          puVar2 = (ulonglong *)(unaff_R15 - 0x35a301fe);
          uVar3 = (ulonglong)in_CF;
          in_CF = CARRY8(*puVar2,unaff_R15) || CARRY8(*puVar2 + unaff_R15,uVar3);
          *puVar2 = *puVar2 + unaff_R15 + uVar3;
          pbVar8 = *(byte **)register0x00000020;
          register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + 8);
          unaff_RSI = pbVar8 + 1;
          *unaff_RDI = *pbVar8;
          pbVar8 = unaff_RDI + 1;
        }
        else {
          *(int *)(param_2 + -0x67445a3e) = (int)register0x00000020;
          out(0x29,(char)puVar7);
          pbVar8 = unaff_RDI;
        }
      }
      pbVar8 = (byte *)(unaff_RBP + 0x67 + (longlong)puVar7 * 8);
      bVar4 = (byte)UNRECOVERED_JUMPTABLE & 7;
      *pbVar8 = *pbVar8 << bVar4 | *pbVar8 >> 8 - bVar4;
      iVar6 = in((short)param_2);
                    /* WARNING: Could not recover jumptable at 0x00014d7a7238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar7 = (undefined2 *)(*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,iVar6 >> 0x1f);
      return puVar7;
    }
  }
  return puVar7;
}



// FUNCTION 14d7a710c FUN_14d7a710c body=1 status=ok
// SIG undefined FUN_14d7a710c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a710c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7125 thunk_EXT_FUN_ec31dbd0 body=7 status=ok
// SIG undefined thunk_EXT_FUN_ec31dbd0(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_ec31dbd0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a712d FUN_14d7a712d body=4 status=ok
// SIG undefined FUN_14d7a712d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a712d(undefined8 param_1,undefined2 param_2)

{
  bool in_OF;
  
  if (!in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  in(param_2);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a7131 FUN_14d7a7131 body=6 status=ok
// SIG undefined FUN_14d7a7131(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7131(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a714e FUN_14d7a714e body=1 status=ok
// SIG undefined FUN_14d7a714e(void)

void FUN_14d7a714e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7a716c FUN_14d7a716c body=3 status=ok
// SIG undefined FUN_14d7a716c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14d7a716c(void)

{
  uint unaff_retaddr;
  
  return (unaff_retaddr ^ 0xe8a7a63a) + 0x563103cc;
}



// FUNCTION 14d7a7170 FUN_14d7a7170 body=22 status=ok
// SIG undefined FUN_14d7a7170(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14d7a7170(void)

{
  uint unaff_retaddr;
  
  return (unaff_retaddr ^ 0xe8a7a63a) + 0x563103cc;
}



// FUNCTION 14d7a718d FUN_14d7a718d body=8 status=ok
// SIG undefined FUN_14d7a718d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a718d(longlong param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined4 in_EAX;
  byte *unaff_RSI;
  byte *unaff_RDI;
  
  if (param_1 == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = in(param_2);
  *unaff_RDI = *unaff_RDI ^ 0xf6;
  out(0x14,CONCAT31(CONCAT21((short)((uint)in_EAX >> 0x10),(char)((uint)in_EAX >> 8) >> 1),uVar1));
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7199 FUN_14d7a7199 body=1 status=ok
// SIG undefined FUN_14d7a7199(void)

void FUN_14d7a7199(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7a719d FUN_14d7a719d body=2 status=ok
// SIG undefined FUN_14d7a719d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14d7a719d(void)

{
  bool in_CF;
  bool in_ZF;
  uint unaff_retaddr;
  
  if (!in_CF && !in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return (unaff_retaddr ^ 0xe8a7a63a) + 0x563103cc;
}



// FUNCTION 14d7a71bb FUN_14d7a71bb body=11 status=ok
// SIG undefined FUN_14d7a71bb(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7a71c5) */

void FUN_14d7a71bb(longlong param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined4 in_EAX;
  undefined8 unaff_RBX;
  byte *unaff_RSI;
  byte *unaff_RDI;
  longlong unaff_R13;
  
  *(undefined1 *)(unaff_R13 + -0x2e) = 0;
  if (param_1 != 1) {
    uVar1 = in(param_2);
    *unaff_RDI = *unaff_RDI ^ (byte)((ulonglong)unaff_RBX >> 8);
    out(0x14,CONCAT31(CONCAT21((short)((uint)in_EAX >> 0x10),(char)((uint)in_EAX >> 8) >> 1),uVar1))
    ;
    *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a71df FUN_14d7a71df body=3 status=ok
// SIG undefined FUN_14d7a71df(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a71df(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a71e3 FUN_14d7a71e3 body=3 status=ok
// SIG undefined FUN_14d7a71e3(void)

/* WARNING: Instruction at (ram,0x00014d7a71e8) overlaps instruction at (ram,0x00014d7a71e6)
    */
/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a71e3(code *UNRECOVERED_JUMPTABLE,uint param_2)

{
  char *pcVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  byte bVar6;
  uint in_EAX;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  byte unaff_BL;
  ulonglong unaff_RBP;
  undefined1 *unaff_RDI;
  ulonglong unaff_R15;
  
  out(0xfe,in_EAX);
  uVar9 = unaff_RBP & 0xffffffff;
  while( true ) {
    bVar6 = (byte)uVar9;
    uVar7 = (uint)CONCAT71((int7)(CONCAT62((int6)(uVar9 >> 0x10),CONCAT11(bVar6 / 0x8d,bVar6)) >> 8)
                           ,bVar6 % 0x8d) ^ 0xa7ed6045;
    uVar9 = (ulonglong)uVar7;
    bVar6 = (byte)uVar7;
    if ((int)uVar7 < 0) {
      *(int *)((ulonglong)in_EAX - 0x67445a3e) = (int)register0x00000020;
      out(0x29,bVar6);
    }
    puVar2 = (ulonglong *)(unaff_R15 - 0x35a301fe);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 + unaff_R15;
    puVar5 = *(undefined1 **)register0x00000020;
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + 8);
    pbVar4 = unaff_RDI + 1;
    *unaff_RDI = *puVar5;
    pcVar1 = puVar5 + -0x15;
    DAT_29e698bba5c2a289 = bVar6;
    *pcVar1 = *pcVar1 + bVar6 + CARRY8(uVar3,unaff_R15);
    if ((POPCOUNT(*pcVar1) & 1U) != 0) break;
    unaff_RDI = unaff_RDI + 2;
    if (bVar6 < *pbVar4 || bVar6 == *pbVar4) {
      pbVar4 = (byte *)((ulonglong)param_2 + 0x67 + uVar9 * 8);
      bVar6 = (byte)UNRECOVERED_JUMPTABLE & 7;
      *pbVar4 = *pbVar4 << bVar6 | *pbVar4 >> 8 - bVar6;
      iVar8 = in((short)in_EAX);
                    /* WARNING: Could not recover jumptable at 0x00014d7a7238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)((byte)UNRECOVERED_JUMPTABLE,iVar8 >> 0x1f);
      return;
    }
  }
  from_bcd(*(unkbyte10 *)pbVar4);
  *UNRECOVERED_JUMPTABLE = (code)((byte)*UNRECOVERED_JUMPTABLE & unaff_BL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a71f3 FUN_14d7a71f3 body=79 status=ok
// SIG undefined FUN_14d7a71f3(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a7204) overlaps instruction at (ram,0x00014d7a7203)
    */

void FUN_14d7a71f3(code *UNRECOVERED_JUMPTABLE,longlong param_2)

{
  char *pcVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  byte *pbVar5;
  uint uVar6;
  undefined1 *puVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  byte unaff_BL;
  longlong unaff_RBP;
  uint *unaff_RSI;
  uint *unaff_RDI;
  uint *puVar12;
  ulonglong unaff_R15;
  bool bVar13;
  bool bVar14;
  ulonglong uVar4;
  
  uVar10 = in((short)param_2);
  puVar12 = unaff_RDI + 1;
  uVar6 = *unaff_RDI;
  uVar9 = *unaff_RSI;
  bVar13 = uVar9 < uVar6;
  bVar14 = SBORROW4(uVar9,uVar6);
  uVar9 = uVar9 - uVar6;
  while( true ) {
    bVar8 = (byte)uVar10;
    if (bVar14 != (int)uVar9 < 0) {
      *(int *)(param_2 + -0x67445a3e) = (int)register0x00000020;
      out(0x29,bVar8);
    }
    puVar2 = (ulonglong *)(unaff_R15 - 0x35a301fe);
    uVar3 = *puVar2;
    uVar4 = *puVar2;
    *puVar2 = uVar4 + unaff_R15 + (ulonglong)bVar13;
    puVar7 = *(undefined1 **)register0x00000020;
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + 8);
    pbVar5 = (byte *)((longlong)puVar12 + 1);
    *(undefined1 *)puVar12 = *puVar7;
    pcVar1 = puVar7 + -0x15;
    DAT_29e698bba5c2a289 = bVar8;
    *pcVar1 = *pcVar1 + bVar8 +
              (CARRY8(uVar3,unaff_R15) || CARRY8(uVar4 + unaff_R15,(ulonglong)bVar13));
    if ((POPCOUNT(*pcVar1) & 1U) != 0) break;
    puVar12 = (uint *)((longlong)puVar12 + 2);
    if (bVar8 < *pbVar5 || bVar8 == *pbVar5) {
      pbVar5 = (byte *)(unaff_RBP + 0x67 + (ulonglong)uVar10 * 8);
      bVar8 = (byte)UNRECOVERED_JUMPTABLE & 7;
      *pbVar5 = *pbVar5 << bVar8 | *pbVar5 >> 8 - bVar8;
      iVar11 = in((short)param_2);
                    /* WARNING: Could not recover jumptable at 0x00014d7a7238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)((byte)UNRECOVERED_JUMPTABLE,iVar11 >> 0x1f);
      return;
    }
    bVar13 = false;
    bVar14 = false;
    uVar9 = CONCAT31((int3)(CONCAT22((short)(uVar10 >> 0x10),CONCAT11(bVar8 / 0x8d,bVar8)) >> 8),
                     bVar8 % 0x8d) ^ 0xa7ed6045;
    uVar10 = uVar9;
  }
  from_bcd(*(unkbyte10 *)pbVar5);
  *UNRECOVERED_JUMPTABLE = (code)((byte)*UNRECOVERED_JUMPTABLE & unaff_BL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a723b FUN_14d7a723b body=7 status=ok
// SIG undefined FUN_14d7a723b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a723b(undefined8 param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  bool in_ZF;
  
  out(param_2,in_EAX);
  if (!in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(param_2,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a724c FUN_14d7a724c body=3 status=ok
// SIG undefined FUN_14d7a724c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a724c(longlong param_1)

{
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  
  *(char *)(param_1 + -0x53edf80c) = *(char *)(param_1 + -0x53edf80c) + (char)unaff_EBX;
  *(int *)CONCAT44(unaff_0000001c,unaff_EBX) = *(int *)CONCAT44(unaff_0000001c,unaff_EBX) + -0x16;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7259 FUN_14d7a7259 body=2 status=ok
// SIG undefined FUN_14d7a7259(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7259(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a725e FUN_14d7a725e body=4 status=ok
// SIG undefined FUN_14d7a725e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a725e(byte param_1)

{
  int iVar1;
  longlong unaff_RSI;
  
  iVar1 = iRam00000000f0249c58;
  param_1 = param_1 & 0x1f;
  iRam00000000f0249c58 = iRam00000000f0249c58 << param_1;
  *(uint *)(unaff_RSI + 0x4581a5f5) =
       *(uint *)(unaff_RSI + 0x4581a5f5) << 1 | (uint)(param_1 != 0 && iVar1 << param_1 - 1 < 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7266 FUN_14d7a7266 body=1 status=ok
// SIG undefined FUN_14d7a7266(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7266(void)

{
  longlong in_RAX;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  
  uRamdec14581a5f596c1 = (undefined1)in_RAX;
  *unaff_RDI = uRamdec14581a5f596c1;
  *(int *)(unaff_RSI + in_RAX) = (int)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a726e FUN_14d7a726e body=16 status=ok
// SIG undefined FUN_14d7a726e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a726e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7293 FUN_14d7a7293 body=14 status=ok
// SIG undefined FUN_14d7a7293(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7293(byte param_1)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  code *pcVar6;
  byte in_AL;
  undefined7 in_register_00000001;
  byte in_CF;
  
  pbVar2 = (byte *)(CONCAT71(in_register_00000001,in_AL) + 0x7060da86);
  bVar3 = *pbVar2;
  bVar5 = *pbVar2 - in_AL;
  *pbVar2 = bVar5 - in_CF;
  if ((bVar3 >= in_AL && bVar5 >= in_CF) && *pbVar2 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar1 = (uint *)(CONCAT71(in_register_00000001,in_AL) + 0x41);
  uVar4 = *puVar1;
  *puVar1 = uVar4 << (param_1 & 0x1f) |
            (uint)(CONCAT14(bVar3 < in_AL || bVar5 < in_CF,uVar4) >> 0x21 - (param_1 & 0x1f));
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}



// FUNCTION 14d7a729f FUN_14d7a729f body=1 status=ok
// SIG undefined FUN_14d7a729f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a729f(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a72ac FUN_14d7a72ac body=6 status=ok
// SIG undefined FUN_14d7a72ac(void)

ulonglong FUN_14d7a72ac(void)

{
  code *pcVar1;
  uint uVar2;
  undefined8 in_RAX;
  ulonglong uVar3;
  bool in_CF;
  bool in_ZF;
  
  if (!in_CF && !in_ZF) {
    uVar2 = in(0x61);
    return (ulonglong)uVar2;
  }
  bRam000000019e4db348 = bRam000000019e4db348 | (byte)((ulonglong)in_RAX >> 8);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}



// FUNCTION 14d7a72b4 FUN_14d7a72b4 body=22 status=ok
// SIG undefined FUN_14d7a72b4(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a72b4(longlong param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 in_EAX;
  char unaff_BL;
  undefined4 *unaff_RDI;
  
  *(char *)(param_1 + -0x15a3b701) = *(char *)(param_1 + -0x15a3b701) - unaff_BL;
  *(byte *)((longlong)unaff_RDI + 0x79) =
       *(byte *)((longlong)unaff_RDI + 0x79) | (byte)((uint)in_EAX >> 8);
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  _DAT_4e926378c9a84fe4 = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a72d0 FUN_14d7a72d0 body=4 status=ok
// SIG undefined FUN_14d7a72d0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a72d0(longlong param_1,uint param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  uint unaff_ESI;
  
  if ((-1 < (int)(unaff_ESI | param_2)) &&
     (uVar2 = in((short)param_2), param_1 == 1 || (unaff_ESI | param_2) == 0)) {
    bRam000000019e4db348 = bRam000000019e4db348 | (byte)((uint)uVar2 >> 8);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a72d4 FUN_14d7a72d4 body=19 status=ok
// SIG undefined FUN_14d7a72d4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a72d4(longlong param_1,undefined2 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  char in_ZF;
  char in_SF;
  char in_OF;
  
  if ((in_OF == in_SF) && (uVar2 = in(param_2), param_1 == 1 || in_ZF != '\0')) {
    bRam000000019e4db348 = bRam000000019e4db348 | (byte)((uint)uVar2 >> 8);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a72e4 FUN_14d7a72e4 body=8 status=ok
// SIG undefined FUN_14d7a72e4(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a72e8) overlaps instruction at (ram,0x00014d7a72e6)
    */

void FUN_14d7a72e4(longlong param_1)

{
  code *pcVar1;
  byte in_AH;
  
  if (param_1 == 1 || (char)((ulonglong)param_1 >> 8) == '\0') {
    bRam000000019e4db348 = bRam000000019e4db348 | in_AH;
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7312 FUN_14d7a7312 body=2 status=ok
// SIG undefined FUN_14d7a7312(void)

void FUN_14d7a7312(undefined8 param_1,longlong param_2)

{
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  
  *(char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x39 + param_2 * 2) =
       (char)((ulonglong)param_2 >> 8);
  return;
}



// FUNCTION 14d7a7316 FUN_14d7a7316 body=18 status=ok
// SIG undefined FUN_14d7a7316(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7316(int param_1,undefined8 param_2,longlong param_3)

{
  code *pcVar1;
  int unaff_EBX;
  undefined4 unaff_ESI;
  longlong unaff_R15;
  
  if (unaff_EBX != param_1) {
    *(longlong *)(unaff_R15 + -0x6bc42ff4) = *(longlong *)(unaff_R15 + -0x6bc42ff4) - param_3;
    pcVar1 = (code *)swi(3);
    (*pcVar1)(unaff_ESI);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7342 FUN_14d7a7342 body=11 status=ok
// SIG undefined FUN_14d7a7342(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a7342(byte param_1)

{
  _DAT_95fbb1a1 = _DAT_95fbb1a1 << (param_1 & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7357 FUN_14d7a7357 body=3 status=ok
// SIG undefined FUN_14d7a7357(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7357(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a735b FUN_14d7a735b body=15 status=ok
// SIG undefined FUN_14d7a735b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a735b(longlong param_1)

{
  code *pcVar1;
  undefined4 in_EAX;
  char in_ZF;
  bool in_OF;
  
  if (!in_OF) {
    in(0x87);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 == 1 || in_ZF != '\0') {
    bRam000000019e4db348 = bRam000000019e4db348 | (byte)((uint)in_EAX >> 8);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7374 FUN_14d7a7374 body=10 status=ok
// SIG undefined FUN_14d7a7374(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7374(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7384 FUN_14d7a7384 body=4 status=ok
// SIG undefined FUN_14d7a7384(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7384(void)

{
  byte *pbVar1;
  byte unaff_SIL;
  undefined7 unaff_00000031;
  
  pbVar1 = (byte *)(CONCAT71(unaff_00000031,unaff_SIL) + -0x56);
  *pbVar1 = *pbVar1 & unaff_SIL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7390 FUN_14d7a7390 body=10 status=ok
// SIG undefined FUN_14d7a7390(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7390(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a73a9 FUN_14d7a73a9 body=19 status=ok
// SIG undefined FUN_14d7a73a9(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a73a9(void)

{
  int *in_RAX;
  bool in_OF;
  
  if (in_OF) {
    _DAT_541e254e358cedb8 = (int)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = *in_RAX + 0xa07bb70;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a73bd FUN_14d7a73bd body=2 status=ok
// SIG undefined FUN_14d7a73bd(void)

void FUN_14d7a73bd(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  return;
}



// FUNCTION 14d7a73c1 FUN_14d7a73c1 body=6 status=ok
// SIG undefined FUN_14d7a73c1(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7a7388) */

void FUN_14d7a73c1(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RDI;
  bool in_CF;
  
  if (in_CF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  return;
}



// FUNCTION 14d7a73cd FUN_14d7a73cd body=16 status=ok
// SIG undefined FUN_14d7a73cd(void)

ulonglong FUN_14d7a73cd(undefined8 param_1,undefined2 param_2)

{
  char unaff_DIL;
  char in_SF;
  char in_OF;
  
  do {
  } while (in_OF == in_SF);
  out(param_2,unaff_DIL + '\x15');
  return (ulonglong)&stack0x00000000 & 0xffffffff;
}



// FUNCTION 14d7a73ea FUN_14d7a73ea body=26 status=ok
// SIG undefined FUN_14d7a73ea(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a73ea(undefined8 param_1,undefined4 param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  undefined2 uVar2;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  char *unaff_RDI;
  
  LOCK();
  UNLOCK();
  uVar2 = 0x5373;
  out(0x5373,*(undefined1 *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (in_RAX & 0xff))
     );
  _DAT_139e85add = param_2;
  uVar1 = func_0x000179bd51a0(param_1,0xa5d95373);
  *unaff_RDI = *unaff_RDI + (char)uVar1;
  *(uint *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(uint *)CONCAT44(unaff_00000034,unaff_ESI) ^ unaff_ESI;
  out(uVar2,(int)(uVar1 >> 1));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7407 FUN_14d7a7407 body=20 status=ok
// SIG undefined FUN_14d7a7407(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7407(undefined8 param_1,undefined2 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  
  pcVar1 = (code *)swi(0xb7);
  uVar2 = (*pcVar1)();
  *(uint *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(uint *)CONCAT44(unaff_00000034,unaff_ESI) ^ unaff_ESI;
  out(param_2,uVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a741e FUN_14d7a741e body=4 status=ok
// SIG undefined FUN_14d7a741e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a745d) overlaps instruction at (ram,0x00014d7a745c)
    */

void FUN_14d7a741e(longlong param_1,undefined4 param_2)

{
  char *pcVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  undefined8 in_RAX;
  byte *pbVar7;
  char cVar8;
  byte bVar9;
  undefined6 uVar10;
  byte bVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  longlong *in_R10;
  char in_CF;
  bool bVar14;
  bool bVar15;
  longlong unaff_retaddr;
  
  uVar10 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar9 = (byte)((ulonglong)param_1 >> 8);
  LOCK();
  uVar3 = *(undefined1 *)(param_1 + 0x12);
  *(undefined1 *)(param_1 + 0x12) = (char)in_RAX;
  pbVar7 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar3);
  UNLOCK();
  *unaff_RDI = *unaff_RSI;
  cVar8 = (char)param_1 + pbVar7[-0x62] + in_CF;
  pcVar1 = (char *)(CONCAT62(uVar10,CONCAT11(bVar9,cVar8)) + -0x62);
  bVar11 = (byte)((uint)param_2 >> 8);
  *pcVar1 = *pcVar1 + bVar11;
  bVar6 = *pbVar7;
  *pbVar7 = *pbVar7 - 0x37;
  *in_R10 = *in_R10 + 0x149c325c + (ulonglong)(0x36 < bVar6);
  unaff_RDI[0x2e] = unaff_RDI[0x2e] + bVar9;
  bVar6 = unaff_RSI[1] | 0x96;
  *(byte *)(unaff_retaddr + -0xd4e75e2) = *(byte *)(unaff_retaddr + -0xd4e75e2) & bVar11;
  piVar2 = (int *)(CONCAT62(uVar10,CONCAT11(bVar9,cVar8)) + 0x176afe00);
  iVar4 = *piVar2;
  uVar5 = (int)&stack0x00000000 - *piVar2;
  uVar12 = (ulonglong)uVar5;
  bVar14 = (int)uVar5 < 0;
  *(undefined8 *)(uVar12 - 8) = 0xffffffffa85b6ab2;
  plVar13 = (longlong *)(uVar12 - 0x10);
  *(undefined1 **)(uVar12 - 0x10) = unaff_RSI + 2;
  bVar15 = SBORROW4((int)&stack0x00000000,iVar4);
  while (bVar11 = (byte)((ulonglong)unaff_retaddr >> 8), bVar15 != bVar14) {
    bVar6 = 0x6a;
    unaff_retaddr = *plVar13;
    plVar13 = plVar13 + 1;
    bVar14 = false;
    bVar15 = false;
  }
  if (!SCARRY1(bVar11,bVar9)) {
    plVar13[-1] = (longlong)(unaff_RDI + 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar4 = *(int *)(unaff_RSI + 0x45);
  plVar13[-1] = (longlong)plVar13;
  *(char *)(ulonglong)(uint)(iVar4 * -0x64ad6a2d) =
       ((byte)param_2 | 0x92) + bVar6 + CARRY1(bVar11,bVar9);
  ((char *)(ulonglong)(uint)(iVar4 * -0x64ad6a2d))[1] = unaff_RSI[2];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7422 FUN_14d7a7422 body=10 status=ok
// SIG undefined FUN_14d7a7422(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a745d) overlaps instruction at (ram,0x00014d7a745c)
    */

void FUN_14d7a7422(undefined8 param_1,undefined4 param_2)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  byte *in_RAX;
  char cVar6;
  byte bVar7;
  undefined6 uVar8;
  byte bVar9;
  ulonglong uVar10;
  longlong *plVar11;
  byte *unaff_RSI;
  longlong unaff_RDI;
  longlong *in_R10;
  char in_CF;
  bool bVar12;
  bool bVar13;
  longlong unaff_retaddr;
  
  uVar8 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar7 = (byte)((ulonglong)param_1 >> 8);
  cVar6 = (char)param_1 + in_RAX[-0x62] + in_CF;
  pcVar1 = (char *)(CONCAT62(uVar8,CONCAT11(bVar7,cVar6)) + -0x62);
  bVar9 = (byte)((uint)param_2 >> 8);
  *pcVar1 = *pcVar1 + bVar9;
  bVar5 = *in_RAX;
  *in_RAX = *in_RAX - 0x37;
  *in_R10 = *in_R10 + 0x149c325c + (ulonglong)(0x36 < bVar5);
  *(char *)(unaff_RDI + 0x2d) = *(char *)(unaff_RDI + 0x2d) + bVar7;
  bVar5 = *unaff_RSI | 0x96;
  *(byte *)(unaff_retaddr + -0xd4e75e2) = *(byte *)(unaff_retaddr + -0xd4e75e2) & bVar9;
  piVar2 = (int *)(CONCAT62(uVar8,CONCAT11(bVar7,cVar6)) + 0x176afe00);
  iVar3 = *piVar2;
  uVar4 = (int)&stack0x00000000 - *piVar2;
  uVar10 = (ulonglong)uVar4;
  bVar12 = (int)uVar4 < 0;
  *(undefined8 *)(uVar10 - 8) = 0xffffffffa85b6ab2;
  plVar11 = (longlong *)(uVar10 - 0x10);
  *(byte **)(uVar10 - 0x10) = unaff_RSI + 1;
  bVar13 = SBORROW4((int)&stack0x00000000,iVar3);
  while (bVar9 = (byte)((ulonglong)unaff_retaddr >> 8), bVar13 != bVar12) {
    bVar5 = 0x6a;
    unaff_retaddr = *plVar11;
    plVar11 = plVar11 + 1;
    bVar12 = false;
    bVar13 = false;
  }
  if (!SCARRY1(bVar9,bVar7)) {
    plVar11[-1] = unaff_RDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar3 = *(int *)(unaff_RSI + 0x44);
  plVar11[-1] = (longlong)plVar11;
  *(char *)(ulonglong)(uint)(iVar3 * -0x64ad6a2d) =
       ((byte)param_2 | 0x92) + bVar5 + CARRY1(bVar9,bVar7);
  ((char *)(ulonglong)(uint)(iVar3 * -0x64ad6a2d))[1] = unaff_RSI[1];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a742e FUN_14d7a742e body=6 status=ok
// SIG undefined FUN_14d7a742e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a742e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7437 FUN_14d7a7437 body=29 status=ok
// SIG undefined FUN_14d7a7437(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a745d) overlaps instruction at (ram,0x00014d7a745c)
    */

void FUN_14d7a7437(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  char in_AL;
  char cVar4;
  byte bVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined4 *unaff_RSI;
  undefined8 unaff_RDI;
  char *pcVar8;
  bool bVar9;
  bool bVar10;
  longlong unaff_retaddr;
  
  bVar5 = (byte)((ulonglong)param_1 >> 8);
  out(*unaff_RSI,(short)param_2);
  cVar4 = in_AL + -0x76;
  *(byte *)(unaff_retaddr + -0xd4e75e2) =
       *(byte *)(unaff_retaddr + -0xd4e75e2) & (byte)((uint)param_2 >> 8);
  iVar1 = *(int *)(param_1 + 0x176afe00);
  uVar2 = (int)&stack0x00000000 - *(int *)(param_1 + 0x176afe00);
  uVar6 = (ulonglong)uVar2;
  bVar9 = (int)uVar2 < 0;
  *(undefined8 *)(uVar6 - 8) = 0xffffffffa85b6ab2;
  plVar7 = (longlong *)(uVar6 - 0x10);
  *(undefined4 **)(uVar6 - 0x10) = unaff_RSI + 1;
  bVar10 = SBORROW4((int)&stack0x00000000,iVar1);
  while (bVar3 = (byte)((ulonglong)unaff_retaddr >> 8), bVar10 != bVar9) {
    cVar4 = 'j';
    unaff_retaddr = *plVar7;
    plVar7 = plVar7 + 1;
    bVar9 = false;
    bVar10 = false;
  }
  if (!SCARRY1(bVar3,bVar5)) {
    plVar7[-1] = unaff_RDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar8 = (char *)(ulonglong)(uint)(*(int *)((longlong)unaff_RSI + 0x47) * -0x64ad6a2d);
  plVar7[-1] = (longlong)plVar7;
  *pcVar8 = ((byte)param_2 | 0x92) + cVar4 + CARRY1(bVar3,bVar5);
  pcVar8[1] = *(char *)(unaff_RSI + 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7454 FUN_14d7a7454 body=53 status=ok
// SIG undefined FUN_14d7a7454(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a745d) overlaps instruction at (ram,0x00014d7a745c)
    */

void FUN_14d7a7454(longlong param_1,char param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  char in_AL;
  byte bVar4;
  undefined8 unaff_RBX;
  uint uVar5;
  undefined8 *puVar7;
  char *unaff_RSI;
  undefined8 unaff_RDI;
  byte in_CF;
  bool bVar8;
  bool bVar9;
  undefined1 auStack_8 [8];
  ulonglong uVar6;
  
  bVar4 = (byte)((ulonglong)param_1 >> 8);
  iVar1 = *(int *)(param_1 + 0x176afe00);
  iVar2 = (int)auStack_8 - *(int *)(param_1 + 0x176afe00);
  uVar5 = iVar2 - (uint)in_CF;
  uVar6 = (ulonglong)uVar5;
  bVar8 = (int)uVar5 < 0;
  *(undefined8 *)(uVar6 - 8) = 0xffffffffa85b6ab2;
  puVar7 = (undefined8 *)(uVar6 - 0x10);
  *(char **)(uVar6 - 0x10) = unaff_RSI;
  bVar9 = SBORROW4((int)auStack_8,iVar1) != SBORROW4(iVar2,(uint)in_CF);
  while (bVar3 = (byte)((ulonglong)unaff_RBX >> 8), bVar9 != bVar8) {
    param_2 = 'j';
    unaff_RBX = *puVar7;
    puVar7 = puVar7 + 1;
    bVar8 = false;
    bVar9 = false;
  }
  if (!SCARRY1(bVar3,bVar4)) {
    puVar7[-1] = unaff_RDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar1 = *(int *)(unaff_RSI + 0x43);
  puVar7[-1] = puVar7;
  *(char *)(ulonglong)(uint)(iVar1 * -0x64ad6a2d) = in_AL + param_2 + CARRY1(bVar3,bVar4);
  ((char *)(ulonglong)(uint)(iVar1 * -0x64ad6a2d))[1] = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7476 FUN_14d7a7476 body=14 status=ok
// SIG undefined FUN_14d7a7476(void)

/* WARNING: Instruction at (ram,0x00014d7a7480) overlaps instruction at (ram,0x00014d7a747f)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_14d7a7476(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  byte *unaff_RSI;
  byte in_CF;
  
  bVar2 = (byte)((ulonglong)param_1 >> 8);
  bVar1 = bVar2 - *unaff_RSI;
  if ((*unaff_RSI <= bVar2 && in_CF <= bVar1) && bVar1 != in_CF) {
    return 8;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7486 FUN_14d7a7486 body=5 status=ok
// SIG undefined FUN_14d7a7486(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7486(void)

{
  undefined4 in_EAX;
  
  out(0x3a,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a748b FUN_14d7a748b body=4 status=ok
// SIG undefined FUN_14d7a748b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a748b(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a748f FUN_14d7a748f body=1 status=ok
// SIG undefined FUN_14d7a748f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a748f(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7497 FUN_14d7a7497 body=3 status=ok
// SIG undefined FUN_14d7a7497(void)

undefined4 FUN_14d7a7497(void)

{
  undefined4 unaff_EBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
  return unaff_EBP;
}



// FUNCTION 14d7a74b3 FUN_14d7a74b3 body=9 status=ok
// SIG undefined FUN_14d7a74b3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a74b3(void)

{
  undefined2 unaff_retaddr;
  
  in(unaff_retaddr);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a74d5 FUN_14d7a74d5 body=10 status=ok
// SIG undefined FUN_14d7a74d5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a74d5(void)

{
  bool in_CF;
  unkbyte10 in_ST0;
  
  fptan(in_ST0);
  if (in_CF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a74e2 FUN_14d7a74e2 body=4 status=ok
// SIG undefined FUN_14d7a74e2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a74e2(void)

{
  bool in_CF;
  
  if (in_CF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a74e6 FUN_14d7a74e6 body=16 status=ok
// SIG undefined FUN_14d7a74e6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a74e6(byte param_1)

{
  longlong unaff_RSI;
  int *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI << 1;
  *(ulonglong *)(unaff_RSI + -0x73) = *(ulonglong *)(unaff_RSI + -0x73) >> (param_1 & 0x3f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7505 FUN_14d7a7505 body=4 status=ok
// SIG undefined FUN_14d7a7505(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7505(byte param_1)

{
  longlong unaff_RSI;
  
  *(char *)(unaff_RSI + -4) = *(char *)(unaff_RSI + -4) >> (param_1 & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a751e FUN_14d7a751e body=33 status=ok
// SIG undefined FUN_14d7a751e(void)

/* WARNING: Instruction at (ram,0x00014d7a7527) overlaps instruction at (ram,0x00014d7a7526)
    */

ulonglong FUN_14d7a751e(ulonglong param_1,undefined2 param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined4 uVar4;
  uint in_EAX;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  undefined4 *unaff_RDI;
  char cVar3;
  
  *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
       ~*(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  uVar4 = in(param_2);
  *unaff_RDI = uVar4;
  while( true ) {
    if ((in_EAX | 0x3c099cd7) != 0) {
      return (ulonglong)(in_EAX | 0x3c099cd7);
    }
    bVar2 = *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
    cVar3 = *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
    *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
         unaff_BH;
    if (SCARRY1(cVar3,unaff_BH) ==
        *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) <
        '\0') break;
    in_EAX = 0;
  }
  pcVar1 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                    0x7a2a7640 + param_1);
  *pcVar1 = *pcVar1 + (char)param_1 + CARRY1(bVar2,unaff_BH);
  return param_1 & 0xffffffff;
}



// FUNCTION 14d7a7544 FUN_14d7a7544 body=1 status=ok
// SIG undefined FUN_14d7a7544(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7544(longlong param_1)

{
  undefined4 in_EAX;
  undefined8 unaff_RBP;
  uint unaff_EDI;
  char in_ZF;
  
  uRam35fd092e84930005 = (undefined1)in_EAX;
  if (param_1 == 1 || in_ZF != '\0') {
    out(0x52,in_EAX);
    *(undefined8 *)((ulonglong)unaff_EDI - 8) = unaff_RBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7549 FUN_14d7a7549 body=3 status=ok
// SIG undefined FUN_14d7a7549(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7549(void)

{
  uint unaff_EBX;
  uint unaff_EBP;
  uint unaff_EDI;
  
  out(0x52,unaff_EBX ^ 0xf87de090);
  *(ulonglong *)((ulonglong)unaff_EDI - 8) = (ulonglong)(unaff_EBP | unaff_EDI);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a754d FUN_14d7a754d body=23 status=ok
// SIG undefined FUN_14d7a754d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a754d(void)

{
  uint in_EAX;
  undefined8 unaff_RBP;
  uint unaff_EDI;
  
  out(0x52,in_EAX ^ 0xf87de090);
  *(undefined8 *)((ulonglong)unaff_EDI - 8) = unaff_RBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7567 FUN_14d7a7567 body=2 status=ok
// SIG undefined FUN_14d7a7567(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7567(void)

{
  int *in_RAX;
  int unaff_EBX;
  
  *in_RAX = *in_RAX - unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a758a FUN_14d7a758a body=4 status=ok
// SIG undefined FUN_14d7a758a(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a7596) overlaps instruction at (ram,0x00014d7a7595)
    */

ulonglong FUN_14d7a758a(ulonglong param_1,undefined8 param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar4;
  char *pcVar5;
  char cVar6;
  uint in_EAX;
  uint uVar7;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 unaff_RBX;
  byte *pbVar12;
  uint uVar14;
  undefined8 unaff_RBP;
  char *unaff_RSI;
  uint unaff_EDI;
  char *pcVar15;
  byte bVar3;
  ulonglong uVar8;
  byte bVar13;
  
  pcVar15 = (char *)(ulonglong)(unaff_EDI ^ (uint)&stack0x00000000);
  bVar13 = (char)((ulonglong)unaff_RBX >> 8) + (char)((ulonglong)param_2 >> 8);
  pbVar12 = (byte *)CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),CONCAT11(bVar13,(char)unaff_RBX));
  uVar7 = in_EAX | 0x1ef80fb0;
  uVar8 = (ulonglong)uVar7;
  do {
    if ((POPCOUNT(uVar7 & 0xff) & 1U) == 0) {
      while( true ) {
        uVar7 = (uint)uVar8 | 0x3c099cd7;
        if (uVar7 != 0) {
          return (ulonglong)uVar7;
        }
        bVar2 = *pbVar12;
        bVar3 = *pbVar12;
        *pbVar12 = *pbVar12 + bVar13;
        if (SCARRY1(bVar3,bVar13) == (char)*pbVar12 < '\0') break;
        uVar8 = 0;
      }
      pbVar12[param_1 + 0x7a2a7640] =
           pbVar12[param_1 + 0x7a2a7640] + (char)param_1 + CARRY1(bVar2,bVar13);
      return param_1 & 0xffffffff;
    }
    *(undefined8 *)((longlong)register0x00000020 + -8) = 0x14d7a759f;
    uVar9 = func_0x00019e6b7fe1();
    pcVar5 = unaff_RSI + 1;
    uVar10 = CONCAT71((int7)((ulonglong)uVar9 >> 8),*unaff_RSI);
    *pcVar5 = *pcVar5 + -1;
    unaff_RSI[-0x1e] = unaff_RSI[-0x1e] >> 0xc;
    uVar8 = (ulonglong)register0x00000020 & 0xffffffff;
    register0x00000020 = (BADSPACEBASE *)(uVar10 & 0xffffffff);
    puVar1 = (uint *)(pcVar15 + 0x1d);
    uVar4 = *puVar1;
    uVar14 = (uint)uVar10;
    *puVar1 = *puVar1 - uVar14;
    uVar7 = *puVar1;
    unaff_RSI = pcVar5;
  } while (uVar4 < uVar14);
  *(undefined8 *)((longlong)register0x00000020 + -8) = unaff_RBP;
  *(byte **)((longlong)register0x00000020 + -0x10) = pbVar12;
  lVar11 = 0x6702f429;
  cVar6 = in(0xcf);
  *(undefined8 *)((longlong)register0x00000020 + -0x18) = 0xffffffffffffffa4;
  *pcVar15 = *pcVar5;
  do {
    pcVar15 = pcVar15 + 1;
    if (lVar11 == 0) {
      halt_baddata();
    }
    lVar11 = lVar11 + -1;
  } while (cVar6 != *pcVar15);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7593 FUN_14d7a7593 body=1 status=ok
// SIG undefined FUN_14d7a7593(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7593(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7598 FUN_14d7a7598 body=15 status=ok
// SIG undefined FUN_14d7a7598(void)

/* WARNING: Control flow encountered bad instruction data */

ulonglong FUN_14d7a7598(ulonglong param_1)

{
  uint *puVar1;
  byte bVar2;
  char *pcVar4;
  char cVar5;
  uint uVar6;
  ulonglong in_RAX;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  byte bVar10;
  byte *unaff_RBX;
  uint uVar11;
  undefined8 unaff_RBP;
  char *unaff_RSI;
  char *unaff_RDI;
  undefined1 in_PF;
  byte bVar3;
  
  do {
    if ((bool)in_PF) {
      while( true ) {
        uVar6 = (uint)in_RAX | 0x3c099cd7;
        if (uVar6 != 0) {
          return (ulonglong)uVar6;
        }
        bVar2 = *unaff_RBX;
        bVar10 = (byte)((ulonglong)unaff_RBX >> 8);
        bVar3 = *unaff_RBX;
        *unaff_RBX = *unaff_RBX + bVar10;
        if (SCARRY1(bVar3,bVar10) == (char)*unaff_RBX < '\0') break;
        in_RAX = 0;
      }
      unaff_RBX[param_1 + 0x7a2a7640] =
           unaff_RBX[param_1 + 0x7a2a7640] + (char)param_1 + CARRY1(bVar2,bVar10);
      return param_1 & 0xffffffff;
    }
    *(undefined8 *)((longlong)register0x00000020 + -8) = 0x14d7a759f;
    uVar7 = func_0x00019e6b7fe1();
    pcVar4 = unaff_RSI + 1;
    uVar8 = CONCAT71((int7)((ulonglong)uVar7 >> 8),*unaff_RSI);
    *pcVar4 = *pcVar4 + -1;
    unaff_RSI[-0x1e] = unaff_RSI[-0x1e] >> 0xc;
    in_RAX = (ulonglong)register0x00000020 & 0xffffffff;
    register0x00000020 = (BADSPACEBASE *)(uVar8 & 0xffffffff);
    puVar1 = (uint *)(unaff_RDI + 0x1d);
    uVar6 = *puVar1;
    uVar11 = (uint)uVar8;
    *puVar1 = *puVar1 - uVar11;
    in_PF = (POPCOUNT(*puVar1 & 0xff) & 1U) == 0;
    unaff_RSI = pcVar4;
  } while (uVar6 < uVar11);
  *(undefined8 *)((longlong)register0x00000020 + -8) = unaff_RBP;
  *(byte **)((longlong)register0x00000020 + -0x10) = unaff_RBX;
  lVar9 = 0x6702f429;
  cVar5 = in(0xcf);
  *(undefined8 *)((longlong)register0x00000020 + -0x18) = 0xffffffffffffffa4;
  *unaff_RDI = *pcVar4;
  do {
    unaff_RDI = unaff_RDI + 1;
    if (lVar9 == 0) {
      halt_baddata();
    }
    lVar9 = lVar9 + -1;
  } while (cVar5 != *unaff_RDI);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a75a8 FUN_14d7a75a8 body=28 status=ok
// SIG undefined FUN_14d7a75a8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a75a8(void)

{
  char cVar1;
  longlong lVar2;
  char *unaff_RSI;
  char *unaff_RDI;
  
  lVar2 = 0x6702f429;
  cVar1 = in(0xcf);
  *unaff_RDI = *unaff_RSI;
  do {
    unaff_RDI = unaff_RDI + 1;
    if (lVar2 == 0) {
      halt_baddata();
    }
    lVar2 = lVar2 + -1;
  } while (cVar1 != *unaff_RDI);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a75c8 FUN_14d7a75c8 body=9 status=ok
// SIG undefined FUN_14d7a75c8(void)

void FUN_14d7a75c8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7a75d1 FUN_14d7a75d1 body=8 status=ok
// SIG undefined FUN_14d7a75d1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a75d1(void)

{
  int *in_RAX;
  undefined2 unaff_retaddr;
  
  *in_RAX = *in_RAX + -0x7f;
  out(*(undefined4 *)((ulonglong)&stack0x00000000 & 0xffffffff),unaff_retaddr);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a75da FUN_14d7a75da body=7 status=ok
// SIG undefined FUN_14d7a75da(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a75da(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a75e4 FUN_14d7a75e4 body=2 status=ok
// SIG undefined FUN_14d7a75e4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a75e4(void)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a75fc FUN_14d7a75fc body=2 status=ok
// SIG undefined FUN_14d7a75fc(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a763a) overlaps instruction at (ram,0x00014d7a7635)
    */

void FUN_14d7a75fc(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  uint in_EAX;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  undefined8 *puVar7;
  undefined8 *unaff_RBP;
  int unaff_ESI;
  undefined4 unaff_00000034;
  undefined4 *unaff_RDI;
  undefined8 uStack_10;
  
  uRam1222d77e921f3e59 = (undefined1)in_EAX;
  pbVar1 = (byte *)(CONCAT71(unaff_00000019,unaff_BL) + 0x45);
  *pbVar1 = *pbVar1 >> 1;
  puVar7 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar5 = '\x17';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar7 = puVar7 + -1;
    *puVar7 = *unaff_RBP;
    cVar5 = cVar5 + -1;
  } while ('\0' < cVar5);
  *(char *)(unaff_RDI + -0x1e75e2fc) = (char)param_1;
  uVar4 = in((short)param_2);
  *unaff_RDI = uVar4;
  pbVar1 = (byte *)(CONCAT44(unaff_00000034,unaff_ESI) + param_1 * 2);
  bVar3 = *pbVar1;
  bVar6 = (byte)((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff);
  *pbVar1 = *pbVar1 + bVar6;
  if (CARRY1(bVar3,bVar6)) {
    return;
  }
  piVar2 = (int *)(param_2 + (ulonglong)in_EAX * 4);
  *piVar2 = *piVar2 - unaff_ESI;
  out((short)param_2,(int)&stack0xfffffffffffffff8);
  LOCK();
  *(undefined1 *)(unaff_RDI + 0x15f992d8) = unaff_BL;
  UNLOCK();
  *(char *)(param_2 + -0x7d1df71) =
       *(char *)(param_2 + -0x7d1df71) +
       (char)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7604 FUN_14d7a7604 body=3 status=ok
// SIG undefined FUN_14d7a7604(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a763a) overlaps instruction at (ram,0x00014d7a7635)
    */

void FUN_14d7a7604(longlong param_1,byte *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  int *piVar3;
  byte bVar4;
  undefined4 uVar5;
  char cVar6;
  undefined1 uVar7;
  byte bVar8;
  ulonglong in_RAX;
  byte bVar9;
  undefined1 uVar10;
  undefined6 uVar11;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  undefined8 *puVar12;
  undefined8 *unaff_RBP;
  int unaff_ESI;
  undefined4 unaff_00000034;
  undefined4 *unaff_RDI;
  undefined8 uStack_10;
  
  uVar11 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar10 = (undefined1)((ulonglong)param_2 >> 8);
  uVar7 = *(undefined1 *)(CONCAT71(unaff_00000019,unaff_BL) + (in_RAX & 0xff));
  bVar9 = (byte)param_2 & *param_2;
  pbVar1 = (byte *)(CONCAT71(unaff_00000019,unaff_BL) + 0x45);
  *pbVar1 = *pbVar1 >> 1;
  puVar12 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar6 = '\x17';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar12 = puVar12 + -1;
    *puVar12 = *unaff_RBP;
    cVar6 = cVar6 + -1;
  } while ('\0' < cVar6);
  *(char *)(unaff_RDI + -0x1e75e2fc) = (char)param_1;
  uVar5 = in(CONCAT11(uVar10,bVar9));
  *unaff_RDI = uVar5;
  pbVar1 = (byte *)(CONCAT44(unaff_00000034,unaff_ESI) + param_1 * 2);
  bVar4 = *pbVar1;
  bVar8 = (byte)((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff);
  *pbVar1 = *pbVar1 + bVar8;
  if (CARRY1(bVar4,bVar8)) {
    return;
  }
  piVar3 = (int *)(CONCAT62(uVar11,CONCAT11(uVar10,bVar9)) +
                  (CONCAT71((int7)(in_RAX >> 8),uVar7) & 0xffffffff) * 4);
  *piVar3 = *piVar3 - unaff_ESI;
  out(CONCAT11(uVar10,bVar9),(int)&stack0xfffffffffffffff8);
  LOCK();
  *(undefined1 *)(unaff_RDI + 0x15f992d8) = unaff_BL;
  UNLOCK();
  pcVar2 = (char *)(CONCAT62(uVar11,CONCAT11(uVar10,bVar9)) + -0x7d1df71);
  *pcVar2 = *pcVar2 + (char)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7608 FUN_14d7a7608 body=61 status=ok
// SIG undefined FUN_14d7a7608(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a763a) overlaps instruction at (ram,0x00014d7a7635)
    */

void FUN_14d7a7608(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined2 uVar6;
  undefined1 unaff_BL;
  ulonglong unaff_RBP;
  int unaff_ESI;
  undefined4 unaff_00000034;
  undefined4 *unaff_RDI;
  ulonglong unaff_retaddr;
  
  uVar6 = (undefined2)param_2;
  out(uVar6,*(int *)(unaff_RBP - 0x38) * -0x73);
  *(char *)(unaff_RDI + -0x1e75e2fc) = (char)param_1;
  uVar4 = in(uVar6);
  *unaff_RDI = uVar4;
  pbVar1 = (byte *)(CONCAT44(unaff_00000034,unaff_ESI) + param_1 * 2);
  bVar3 = *pbVar1;
  bVar5 = (byte)(unaff_RBP & 0xffffffff);
  *pbVar1 = *pbVar1 + bVar5;
  if (CARRY1(bVar3,bVar5)) {
    return;
  }
  piVar2 = (int *)(param_2 + (unaff_retaddr & 0xffffffff) * 4);
  *piVar2 = *piVar2 - unaff_ESI;
  out(uVar6,(int)unaff_RBP);
  LOCK();
  *(undefined1 *)(unaff_RDI + 0x15f992d8) = unaff_BL;
  UNLOCK();
  *(char *)(param_2 + -0x7d1df71) =
       *(char *)(param_2 + -0x7d1df71) + (char)((unaff_RBP & 0xffffffff) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7652 FUN_14d7a7652 body=1 status=ok
// SIG undefined FUN_14d7a7652(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7652(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a765a FUN_14d7a765a body=8 status=ok
// SIG undefined FUN_14d7a765a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a765a(uint param_1,undefined2 param_2)

{
  uint *in_RAX;
  undefined4 *unaff_RSI;
  
  *in_RAX = *in_RAX | param_1;
  out(*unaff_RSI,CONCAT11((char)((ushort)param_2 >> 8),(byte)param_2 & (byte)*in_RAX));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7662 FUN_14d7a7662 body=5 status=ok
// SIG undefined FUN_14d7a7662(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7662(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7676 FUN_14d7a7676 body=11 status=ok
// SIG undefined FUN_14d7a7676(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7676(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 in_RAX;
  char *pcVar3;
  char *unaff_RBX;
  int unaff_EBP;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  bool in_OF;
  undefined1 auStackX_8 [32];
  
  if (!in_OF) {
    *(int *)(longlong)(unaff_EBP + 0x76) = *(int *)(longlong)(unaff_EBP + 0x76) + (int)auStackX_8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar3 = (char *)CONCAT44((int)((ulonglong)in_RAX >> 0x20),*unaff_RSI);
  cVar1 = *unaff_RBX;
  iVar2 = *(int *)(unaff_RDI + 0x73c4264 + (longlong)(unaff_RSI + 1) * 4);
  *pcVar3 = *pcVar3 + (char)*unaff_RSI;
  func_0x0001b211376f((int)CONCAT71((int7)((ulonglong)param_1 >> 8),(char)param_1 + cVar1) + iVar2,5
                     );
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7682 FUN_14d7a7682 body=3 status=ok
// SIG undefined FUN_14d7a7682(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7682(void)

{
  longlong unaff_RBP;
  
  *(int *)(unaff_RBP + 0x76) = *(int *)(unaff_RBP + 0x76) + (int)&stack0x00000000;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7686 FUN_14d7a7686 body=8 status=ok
// SIG undefined FUN_14d7a7686(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7686(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7692 FUN_14d7a7692 body=6 status=ok
// SIG undefined FUN_14d7a7692(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7692(void)

{
  uint *puVar1;
  longlong in_RAX;
  uint unaff_ESP;
  
  puVar1 = (uint *)(in_RAX * 3 + -0xb);
  *puVar1 = *puVar1 ^ unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a769b FUN_14d7a769b body=1 status=ok
// SIG undefined FUN_14d7a769b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a769b(undefined8 param_1)

{
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  bool in_CF;
  bool in_ZF;
  undefined8 uStackX_8;
  
  if (!in_CF && !in_ZF) {
    rdtsc();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined8 *)CONCAT44(in_register_00000004,in_EAX) = uStackX_8;
  func_0x0001b211376f(param_1,5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a76ac FUN_14d7a76ac body=9 status=ok
// SIG undefined FUN_14d7a76ac(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7a76ce) */

undefined8 FUN_14d7a76ac(int param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  uint in_EAX;
  char cVar5;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *puVar6;
  char *unaff_RSI;
  undefined4 *puVar7;
  undefined4 *unaff_RDI;
  undefined8 unaff_R12;
  undefined1 auStack_10 [8];
  undefined1 auStack_8 [8];
  
  puVar6 = auStack_8;
  cVar3 = *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  cVar2 = *unaff_RSI;
  cVar5 = (char)((ulonglong)param_2 >> 8);
  *unaff_RSI = *unaff_RSI + cVar5;
  if (*unaff_RSI == '\0' || SCARRY1(cVar2,cVar5) != *unaff_RSI < '\0') {
    pcVar1 = (char *)(CONCAT71((int7)((ulonglong)param_2 >> 8),(char)param_2 + cVar3) + 0x630098ee +
                     CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
    *pcVar1 = *pcVar1 + (char)(in_EAX >> 8);
    puVar6 = auStack_10;
    puVar7 = (undefined4 *)(ulonglong)in_EAX;
    *unaff_RDI = *puVar7;
    if ((POPCOUNT(param_1 + unaff_RDI[1] & 0xff) & 1U) == 0) {
      bVar4 = (byte)(((ulonglong)unaff_RSI & 0xffffffff) >> 8);
      *(int *)((longlong)puVar7 + 0xd8a7bdb) =
           (*(int *)((longlong)puVar7 + 0xd8a7bdb) + 0x73) -
           (uint)(bVar4 < *(byte *)(puVar7 + -0x1c));
      return CONCAT71(CONCAT61((int6)(((ulonglong)unaff_RSI & 0xffffffff) >> 0x10),
                               bVar4 - *(byte *)(puVar7 + -0x1c)),0xa9);
    }
  }
  *(undefined8 *)(puVar6 + -8) = unaff_R12;
  rdtsc();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a76c3 FUN_14d7a76c3 body=4 status=ok
// SIG undefined FUN_14d7a76c3(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7a76ce) */

undefined8 FUN_14d7a76c3(int param_1)

{
  byte bVar1;
  undefined8 in_RAX;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
  if ((POPCOUNT(param_1 + unaff_RDI[1] & 0xff) & 1U) != 0) {
    rdtsc();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = (byte)((ulonglong)in_RAX >> 8);
  *(int *)((longlong)unaff_RSI + 0xd8a7bdb) =
       (*(int *)((longlong)unaff_RSI + 0xd8a7bdb) + 0x73) -
       (uint)(bVar1 < *(byte *)(unaff_RSI + -0x1c));
  return CONCAT71(CONCAT61((int6)((ulonglong)in_RAX >> 0x10),bVar1 - *(byte *)(unaff_RSI + -0x1c)),
                  0xa9);
}



// FUNCTION 14d7a76c7 FUN_14d7a76c7 body=7 status=ok
// SIG undefined FUN_14d7a76c7(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7a76ce) */

undefined8 FUN_14d7a76c7(int param_1)

{
  byte bVar1;
  undefined8 in_RAX;
  longlong unaff_RSI;
  int *unaff_RDI;
  
  if ((POPCOUNT(param_1 + *unaff_RDI & 0xff) & 1U) != 0) {
    rdtsc();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = (byte)((ulonglong)in_RAX >> 8);
  *(int *)(unaff_RSI + 0xd8a7bd7) =
       (*(int *)(unaff_RSI + 0xd8a7bd7) + 0x73) - (uint)(bVar1 < *(byte *)(unaff_RSI + -0x74));
  return CONCAT71(CONCAT61((int6)((ulonglong)in_RAX >> 0x10),bVar1 - *(byte *)(unaff_RSI + -0x74)),
                  0xa9);
}



// FUNCTION 14d7a76d4 FUN_14d7a76d4 body=31 status=ok
// SIG undefined FUN_14d7a76d4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a76d4(longlong param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char in_ZF;
  bool in_SF;
  longlong unaff_retaddr;
  
  if (in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar3 = (char *)(unaff_RBP & 0xffffffff);
  param_1 = param_1 + -1;
  if (param_1 == 0 || in_ZF != '\0') {
    cVar1 = *unaff_RBX;
    iVar2 = *(int *)(unaff_RDI + 0x73c4264 + unaff_RSI * 4);
    *pcVar3 = *pcVar3 + (char)pcVar3;
    *(undefined **)(unaff_retaddr + -8) = &LAB_14d7a76f3;
    func_0x0001b211376f((int)CONCAT71((int7)((ulonglong)param_1 >> 8),(char)param_1 + cVar1) + iVar2
                        ,5);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a76fb FUN_14d7a76fb body=3 status=ok
// SIG undefined FUN_14d7a76fb(void)

void FUN_14d7a76fb(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a7721 FUN_14d7a7721 body=36 status=ok
// SIG undefined FUN_14d7a7721(void)

undefined8 FUN_14d7a7721(void)

{
  byte bVar1;
  int in_EAX;
  longlong unaff_RSI;
  
  bVar1 = (byte)((uint)(in_EAX + -0x29a35287) >> 8);
  *(int *)(unaff_RSI + 0xd8a7bd7) =
       (*(int *)(unaff_RSI + 0xd8a7bd7) + 0x73) - (uint)(bVar1 < *(byte *)(unaff_RSI + -0x74));
  return CONCAT71((uint7)CONCAT21((short)((uint)(in_EAX + -0x29a35287) >> 0x10),
                                  bVar1 - *(byte *)(unaff_RSI + -0x74)),0xa9);
}



// FUNCTION 14d7a7746 FUN_14d7a7746 body=1 status=FAIL
// SIG undefined FUN_14d7a7746(void)
/* DECOMPILE FAILED */

// FUNCTION 14d7a774f FUN_14d7a774f body=3 status=ok
// SIG undefined FUN_14d7a774f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a774f(undefined8 param_1,longlong param_2)

{
  undefined4 unaff_ESP;
  
  *(undefined4 *)(param_2 * 5) = unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7754 FUN_14d7a7754 body=12 status=ok
// SIG undefined FUN_14d7a7754(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a7858) overlaps instruction at (ram,0x00014d7a7855)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a7825) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7855) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7865) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7875) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7858) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7835) */

void FUN_14d7a7754(undefined8 param_1,byte *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  code *pcVar5;
  char cVar6;
  uint uVar7;
  undefined8 in_RAX;
  byte *unaff_RBX;
  int unaff_EBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_retaddr;
  
  out((short)param_2,(int)in_RAX);
  cVar6 = ((char)in_RAX + -1) - ((byte)((ulonglong)unaff_RBX >> 8) < *unaff_RBX);
  uVar4 = (longlong)*(int *)(param_2 + -0x22) * -0x17;
  if ((longlong)(int)uVar4 == uVar4 && cVar6 != '\0') {
    pcVar1 = (char *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar6) + -0x5b);
    *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  }
  cRam00000001291280c9 = cRam00000001291280c9 + (char)unaff_RBX;
  *unaff_retaddr = *unaff_RSI;
  *(int *)(unaff_RBX + -0x675b16a7) = *(int *)(unaff_RBX + -0x675b16a7) >> 1;
  *(undefined1 *)(unaff_RSI + 1) = 0;
  uVar7 = unaff_EBP * -0x5a8fff7c | 0x28632d4c;
  *param_2 = *param_2 & 0x5f;
  uVar3 = *(undefined4 *)((ulonglong)uVar7 - 0x53dfb1f3);
  if ((uVar4 & 0xffffffff) == 0) {
    uVar2 = in((short)param_2);
    *(undefined4 *)(ulonglong)uVar7 = uVar2;
    param_2[0x5d] = param_2[0x5d] + (char)unaff_RBX + (char)uVar3;
    pcVar5 = (code *)swi(0x13);
    (*pcVar5)();
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(undefined1 *)(ulonglong)uVar7 = 0x99;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7761 FUN_14d7a7761 body=5 status=ok
// SIG undefined FUN_14d7a7761(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a7858) overlaps instruction at (ram,0x00014d7a7855)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a7825) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7855) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7865) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7875) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7858) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7835) */

void FUN_14d7a7761(longlong param_1,byte *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  uint uVar4;
  longlong unaff_RBX;
  int unaff_EBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
  *(int *)(unaff_RBX + -0x675b16a7) = *(int *)(unaff_RBX + -0x675b16a7) >> 1;
  *(undefined1 *)(unaff_RSI + 1) = 0;
  uVar4 = unaff_EBP * -0x5a8fff7c | 0x28632d4c;
  *param_2 = *param_2 & 0x5f;
  uVar2 = *(undefined4 *)((ulonglong)uVar4 - 0x53dfb1f3);
  if (param_1 == 0) {
    uVar1 = in((short)param_2);
    *(undefined4 *)(ulonglong)uVar4 = uVar1;
    param_2[0x5d] = param_2[0x5d] + (char)unaff_RBX + (char)uVar2;
    pcVar3 = (code *)swi(0x13);
    (*pcVar3)();
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(undefined1 *)(ulonglong)uVar4 = 0x99;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a776a FUN_14d7a776a body=9 status=ok
// SIG undefined FUN_14d7a776a(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a7858) overlaps instruction at (ram,0x00014d7a7855)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a7825) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7855) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7865) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7875) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7858) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7835) */

void FUN_14d7a776a(longlong param_1,byte *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  uint in_EAX;
  uint uVar4;
  longlong unaff_RBX;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_OF;
  
  if (in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_RSI;
  *(int *)(unaff_RBX + -0x675b16a7) = *(int *)(unaff_RBX + -0x675b16a7) >> 1;
  *(undefined1 *)(unaff_RSI + 1) = 0;
  uVar4 = in_EAX | 0x28632d4c;
  *param_2 = *param_2 & 0x5f;
  uVar2 = *(undefined4 *)((ulonglong)uVar4 - 0x53dfb1f3);
  if (param_1 == 0) {
    uVar1 = in((short)param_2);
    *(undefined4 *)(ulonglong)uVar4 = uVar1;
    param_2[0x5d] = param_2[0x5d] + (char)unaff_RBX + (char)uVar2;
    pcVar3 = (code *)swi(0x13);
    (*pcVar3)();
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(undefined1 *)(ulonglong)uVar4 = 0x99;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7773 FUN_14d7a7773 body=6 status=ok
// SIG undefined FUN_14d7a7773(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a7858) overlaps instruction at (ram,0x00014d7a7855)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a7825) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7855) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7865) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7875) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7858) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7835) */

void FUN_14d7a7773(longlong param_1,byte *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  uint in_EAX;
  uint uVar4;
  longlong unaff_RBX;
  undefined1 *unaff_RSI;
  undefined1 unaff_DIL;
  
  *(int *)(unaff_RBX + -0x675b16a7) = *(int *)(unaff_RBX + -0x675b16a7) >> 1;
  *unaff_RSI = 0;
  uVar4 = in_EAX | 0x28632d4c;
  *param_2 = *param_2 & 0x5f;
  uVar2 = *(undefined4 *)((ulonglong)uVar4 - 0x53dfb1f3);
  if (param_1 == 0) {
    uVar1 = in((short)param_2);
    *(undefined4 *)(ulonglong)uVar4 = uVar1;
    param_2[0x5d] = param_2[0x5d] + (char)unaff_RBX + (char)uVar2;
    pcVar3 = (code *)swi(0x13);
    (*pcVar3)();
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(undefined1 *)(ulonglong)uVar4 = unaff_DIL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a777b FUN_14d7a777b body=1 status=ok
// SIG undefined FUN_14d7a777b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a7858) overlaps instruction at (ram,0x00014d7a7855)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a7825) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7855) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7865) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7875) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7858) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7835) */

void FUN_14d7a777b(longlong param_1,byte *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  uint in_EAX;
  uint uVar4;
  char unaff_BL;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = (char)in_EAX;
  uVar4 = in_EAX | 0x28632d4c;
  *param_2 = *param_2 & 0x5f;
  uVar2 = *(undefined4 *)((ulonglong)uVar4 - 0x53dfb1f3);
  if (param_1 == 0) {
    uVar1 = in((short)param_2);
    *(undefined4 *)(ulonglong)uVar4 = uVar1;
    param_2[0x5d] = param_2[0x5d] + unaff_BL + (char)uVar2;
    pcVar3 = (code *)swi(0x13);
    (*pcVar3)();
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(char *)(ulonglong)uVar4 = (char)unaff_RDI + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a777f FUN_14d7a777f body=2 status=ok
// SIG undefined FUN_14d7a777f(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a7858) overlaps instruction at (ram,0x00014d7a7855)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a7825) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7855) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7865) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7875) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7858) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7835) */

void FUN_14d7a777f(longlong param_1,byte *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  ulonglong in_RAX;
  char unaff_BL;
  undefined1 unaff_DIL;
  
  *param_2 = *param_2 & 0x5f;
  uVar2 = *(undefined4 *)(in_RAX - 0x53dfb1f3);
  if (param_1 == 0) {
    uVar1 = in((short)param_2);
    *(undefined4 *)(in_RAX & 0xffffffff) = uVar1;
    param_2[0x5d] = param_2[0x5d] + unaff_BL + (char)uVar2;
    pcVar3 = (code *)swi(0x13);
    (*pcVar3)();
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(undefined1 *)(in_RAX & 0xffffffff) = unaff_DIL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7784 FUN_14d7a7784 body=46 status=ok
// SIG undefined FUN_14d7a7784(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a7858) overlaps instruction at (ram,0x00014d7a7855)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a7825) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7855) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7865) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7875) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7858) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7835) */

void FUN_14d7a7784(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  ulonglong in_RAX;
  char unaff_BL;
  undefined1 unaff_retaddr;
  
  uVar2 = *(undefined4 *)(in_RAX - 0x53dfb1f3);
  if (param_1 == 0) {
    uVar1 = in((short)param_2);
    *(undefined4 *)(in_RAX & 0xffffffff) = uVar1;
    *(char *)(param_2 + 0x5d) = *(char *)(param_2 + 0x5d) + unaff_BL + (char)uVar2;
    pcVar3 = (code *)swi(0x13);
    (*pcVar3)();
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(undefined1 *)(in_RAX & 0xffffffff) = unaff_retaddr;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a77b3 FUN_14d7a77b3 body=17 status=ok
// SIG undefined FUN_14d7a77b3(void)

void FUN_14d7a77b3(longlong param_1,longlong param_2)

{
  code *pcVar1;
  longlong unaff_RDI;
  char in_ZF;
  
  if (param_1 == 1 || in_ZF != '\0') {
    *(char *)(unaff_RDI + -0x55) = *(char *)(unaff_RDI + -0x55) + (char)((ulonglong)param_2 >> 8);
    *(char *)(param_2 + 0x5d) = *(char *)(param_2 + 0x5d) + 'g';
  }
  pcVar1 = (code *)swi(0x13);
  (*pcVar1)();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a77e3 FUN_14d7a77e3 body=10 status=ok
// SIG undefined FUN_14d7a77e3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a77e3(void)

{
  undefined4 in_EAX;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = in_EAX;
  *(char *)(unaff_RDI + -0x1b) = *(char *)(unaff_RDI + -0x1b) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a77f1 FUN_14d7a77f1 body=4 status=ok
// SIG undefined FUN_14d7a77f1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a77f1(undefined8 param_1,char *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  code *pcVar3;
  ulonglong in_RAX;
  char unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  undefined8 uStack_8;
  
  do {
    if ((in_RAX & 0x400) == 0) {
      *(ulonglong *)((longlong)register0x00000020 + -8) =
           CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
      pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x27);
      *pbVar1 = *pbVar1 & (byte)param_1;
      *param_2 = *param_2 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + 8);
  } while ((in_RAX & 0x4000) == 0);
  pcVar3 = (code *)swi(0x34);
  (*pcVar3)();
  pcVar2 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x2b2b9997);
  *pcVar2 = *pcVar2 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a77f5 FUN_14d7a77f5 body=13 status=ok
// SIG undefined FUN_14d7a77f5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a77f5(undefined8 param_1,char *param_2)

{
  byte *pbVar1;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  
  pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x27);
  *pbVar1 = *pbVar1 & (byte)param_1;
  *param_2 = *param_2 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7817 FUN_14d7a7817 body=13 status=ok
// SIG undefined FUN_14d7a7817(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a7858) overlaps instruction at (ram,0x00014d7a7855)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a7858) */

void FUN_14d7a7817(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  undefined8 in_RAX;
  undefined2 *puVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  uint unaff_EBP;
  uint unaff_ESI;
  uint *unaff_RDI;
  undefined2 in_FS;
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
  
  puVar2 = (undefined2 *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + 's');
  pcVar1 = (char *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x68);
  *pcVar1 = *pcVar1 + (char)unaff_EBX;
  *(uint *)((longlong)puVar2 + 0x15b13bdd) = *(uint *)((longlong)puVar2 + 0x15b13bdd) & unaff_EBP;
  *puVar2 = in_FPUControlWord;
  puVar2[2] = in_FPUStatusWord;
  puVar2[4] = in_FPUTagWord;
  *(undefined8 *)(puVar2 + 10) = in_FPUDataPointer;
  *(undefined8 *)(puVar2 + 6) = in_FPUInstructionPointer;
  puVar2[9] = in_FPULastInstructionOpcode;
  *(unkbyte10 *)(puVar2 + 0xe) = in_ST0;
  *(unkbyte10 *)(puVar2 + 0x13) = in_ST1;
  *(unkbyte10 *)(puVar2 + 0x18) = in_ST2;
  *(unkbyte10 *)(puVar2 + 0x1d) = in_ST3;
  *(unkbyte10 *)(puVar2 + 0x22) = in_ST4;
  *(unkbyte10 *)(puVar2 + 0x27) = in_ST5;
  *(unkbyte10 *)(puVar2 + 0x2c) = in_ST6;
  *(unkbyte10 *)(puVar2 + 0x31) = in_ST7;
  pcVar1 = (char *)((longlong)unaff_RDI + 0x49);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  if (*pcVar1 == '\0') {
    *(int *)(param_2 + -0x6f7859dd) = *(int *)(param_2 + -0x6f7859dd) + 99;
    LOCK();
    *unaff_RDI = *unaff_RDI & unaff_ESI;
    UNLOCK();
    puVar2 = (undefined2 *)(ulonglong)unaff_ESI;
    if (-1 < (int)*unaff_RDI) {
      puVar2[0x21e1ba00] = in_FS;
      return;
    }
  }
  LOCK();
  *(char *)puVar2 = (char)puVar2;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a784b FUN_14d7a784b body=4 status=ok
// SIG undefined FUN_14d7a784b(void)

/* WARNING: Instruction at (ram,0x00014d7a7858) overlaps instruction at (ram,0x00014d7a7855)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7a7858) */

void FUN_14d7a784b(undefined8 param_1,longlong param_2)

{
  undefined4 in_EAX;
  uint unaff_ESI;
  uint *unaff_RDI;
  undefined2 in_FS;
  
  out(0xf1,in_EAX);
  *(int *)(param_2 + -0x6f7859dd) = *(int *)(param_2 + -0x6f7859dd) + 99;
  LOCK();
  *unaff_RDI = *unaff_RDI & unaff_ESI;
  UNLOCK();
  if (-1 < (int)*unaff_RDI) {
    *(undefined2 *)((undefined1 *)(ulonglong)unaff_ESI + 0x43c37400) = in_FS;
    return;
  }
  LOCK();
  *(undefined1 *)(ulonglong)unaff_ESI = (char)unaff_ESI;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a784f FUN_14d7a784f body=39 status=ok
// SIG undefined FUN_14d7a784f(void)

/* WARNING: Instruction at (ram,0x00014d7a7858) overlaps instruction at (ram,0x00014d7a7855)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7a7858) */

void FUN_14d7a784f(undefined8 param_1,longlong param_2)

{
  uint unaff_ESI;
  uint *unaff_RDI;
  undefined2 in_FS;
  
  *(int *)(param_2 + -0x6f7859dd) = *(int *)(param_2 + -0x6f7859dd) + 99;
  LOCK();
  *unaff_RDI = *unaff_RDI & unaff_ESI;
  UNLOCK();
  if (-1 < (int)*unaff_RDI) {
    *(undefined2 *)((undefined1 *)(ulonglong)unaff_ESI + 0x43c37400) = in_FS;
    return;
  }
  LOCK();
  *(undefined1 *)(ulonglong)unaff_ESI = (char)unaff_ESI;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a787c FUN_14d7a787c body=8 status=ok
// SIG undefined FUN_14d7a787c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a787c(undefined8 param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte unaff_BL;
  longlong unaff_RDI;
  
  pbVar1 = (byte *)(CONCAT71((int7)((ulonglong)param_1 >> 8),0x14) + -0x700e79ab);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + unaff_BL;
  uVar3 = *(uint *)(unaff_RDI + -0x13);
  *(uint *)(unaff_RDI + -0x13) =
       uVar3 << 0x14 | (uint)(CONCAT14(CARRY1(bVar2,unaff_BL),uVar3) >> 0xd);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a789f FUN_14d7a789f body=8 status=ok
// SIG undefined FUN_14d7a789f(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a78c1) overlaps instruction at (ram,0x00014d7a78bd)
    */

void FUN_14d7a789f(undefined8 param_1,undefined8 param_2)

{
  uint *puVar1;
  char *pcVar2;
  byte *pbVar3;
  byte bVar4;
  undefined1 uVar5;
  longlong lVar6;
  code *pcVar7;
  undefined4 in_EAX;
  undefined4 uVar8;
  undefined4 in_register_00000004;
  undefined1 uVar9;
  undefined6 uVar11;
  ulonglong uVar10;
  byte bVar12;
  undefined6 uVar13;
  byte unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined4 *unaff_RDI;
  longlong in_R11;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  undefined1 auStack_18 [8];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uVar13 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar12 = (byte)param_2;
  uVar5 = *unaff_RSI;
  uVar8 = CONCAT31((int3)((uint)in_EAX >> 8),uVar5);
  out((short)param_2,uVar5);
  uVar11 = (undefined6)((ulonglong)param_1 >> 0x10);
  uVar9 = (undefined1)param_1;
  uStack_8 = CONCAT62(uVar11,CONCAT11((byte)((ulonglong)param_1 >> 8) ^
                                      *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)),
                                      uVar9));
  puVar1 = (uint *)(CONCAT44(in_register_00000004,uVar8) + 0x27);
  *puVar1 = *puVar1 << 1 | (uint)((int)*puVar1 < 0);
  lVar6 = *(longlong *)(in_R11 + -0x65);
  pbVar3 = unaff_RSI + unaff_RBP + 1;
  bVar4 = *pbVar3;
  *pbVar3 = *pbVar3 + unaff_BH;
  uStack_10 = CONCAT62(uVar13,CONCAT11(0x20,bVar12));
  if (CARRY1(bVar4,unaff_BH) || *pbVar3 == 0) {
    pcVar2 = (char *)(CONCAT62(uVar13,CONCAT11(0x20,bVar12)) + 0x48dd00ab);
    *pcVar2 = *pcVar2 + '\x13';
    pcVar7 = (code *)swi(3);
    (*pcVar7)(CONCAT62(uVar11,CONCAT11(0xb5,uVar9)),bVar12,lVar6 * 0x1489e012);
    return;
  }
  lVar6 = CONCAT44(in_register_00000004,uVar8);
  *(undefined2 *)(lVar6 + -0x7d7f447d) = in_FPUControlWord;
  *(undefined2 *)(lVar6 + -0x7d7f4479) = in_FPUStatusWord;
  *(undefined2 *)(lVar6 + -0x7d7f4475) = in_FPUTagWord;
  *(undefined8 *)(lVar6 + -0x7d7f4469) = in_FPUDataPointer;
  *(undefined8 *)(lVar6 + -0x7d7f4471) = in_FPUInstructionPointer;
  *(undefined2 *)(lVar6 + -0x7d7f446b) = in_FPULastInstructionOpcode;
  *unaff_RDI = uVar8;
  uVar10 = CONCAT62(uVar11,CONCAT11(unaff_BL + 0xb5,uVar9));
  if (auStack_18 + uVar10 + (0x4a < unaff_BL) == (undefined1 *)0x0) {
    out(CONCAT11(0x20,~bVar12),uVar5);
    out(0x50,uVar8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       (*(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) - ((int)unaff_RDI + 4)) -
       (uint)(CARRY8(uVar10,(ulonglong)auStack_18) ||
             CARRY8((ulonglong)(auStack_18 + uVar10),(ulonglong)(0x4a < unaff_BL)));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a78a7 FUN_14d7a78a7 body=8 status=ok
// SIG undefined FUN_14d7a78a7(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a78c1) overlaps instruction at (ram,0x00014d7a78bd)
    */

void FUN_14d7a78a7(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  undefined6 uVar7;
  ulonglong uVar6;
  byte bVar8;
  undefined6 uVar9;
  byte unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
  longlong in_R11;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  
  uVar9 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar8 = (byte)param_2;
  lVar4 = *(longlong *)(in_R11 + -0x65);
  pbVar2 = (byte *)(unaff_RSI + unaff_RBP);
  bVar3 = *pbVar2;
  *pbVar2 = *pbVar2 + unaff_BH;
  uVar7 = (undefined6)((ulonglong)param_1 >> 0x10);
  uStack_8 = CONCAT62(uVar9,CONCAT11(0x20,bVar8));
  if (CARRY1(bVar3,unaff_BH) || *pbVar2 == 0) {
    pcVar1 = (char *)(CONCAT62(uVar9,CONCAT11(0x20,bVar8)) + 0x48dd00ab);
    *pcVar1 = *pcVar1 + '\x13';
    pcVar5 = (code *)swi(3);
    (*pcVar5)(CONCAT62(uVar7,CONCAT11(0xb5,(char)param_1)),bVar8,lVar4 * 0x1489e012);
    return;
  }
  lVar4 = CONCAT44(in_register_00000004,in_EAX);
  *(undefined2 *)(lVar4 + -0x7d7f447d) = in_FPUControlWord;
  *(undefined2 *)(lVar4 + -0x7d7f4479) = in_FPUStatusWord;
  *(undefined2 *)(lVar4 + -0x7d7f4475) = in_FPUTagWord;
  *(undefined8 *)(lVar4 + -0x7d7f4469) = in_FPUDataPointer;
  *(undefined8 *)(lVar4 + -0x7d7f4471) = in_FPUInstructionPointer;
  *(undefined2 *)(lVar4 + -0x7d7f446b) = in_FPULastInstructionOpcode;
  *unaff_RDI = in_EAX;
  uVar6 = CONCAT62(uVar7,CONCAT11(unaff_BL + 0xb5,(char)param_1));
  if (auStack_10 + uVar6 + (0x4a < unaff_BL) == (undefined1 *)0x0) {
    out(CONCAT11(0x20,~bVar8),(char)in_EAX);
    out(0x50,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       (*(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) - ((int)unaff_RDI + 4)) -
       (uint)(CARRY8(uVar6,(ulonglong)auStack_10) ||
             CARRY8((ulonglong)(auStack_10 + uVar6),(ulonglong)(0x4a < unaff_BL)));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a78b4 FUN_14d7a78b4 body=3 status=ok
// SIG undefined FUN_14d7a78b4(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a78c1) overlaps instruction at (ram,0x00014d7a78bd)
    */

void FUN_14d7a78b4(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong lVar4;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  ulonglong uVar5;
  byte bVar7;
  undefined6 uVar8;
  byte unaff_BL;
  undefined7 unaff_00000019;
  undefined4 *unaff_RDI;
  bool in_CF;
  bool in_ZF;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  byte bVar6;
  
  uVar8 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar7 = (byte)param_2;
  uStack_8 = CONCAT62(uVar8,CONCAT11(0x20,bVar7));
  if (in_CF || in_ZF) {
    pcVar1 = (char *)(CONCAT62(uVar8,CONCAT11(0x20,bVar7)) + 0x48dd00ab);
    *pcVar1 = *pcVar1 + '\x13';
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar4 = CONCAT44(in_register_00000004,in_EAX);
  *(undefined2 *)(lVar4 + -0x7d7f447d) = in_FPUControlWord;
  *(undefined2 *)(lVar4 + -0x7d7f4479) = in_FPUStatusWord;
  *(undefined2 *)(lVar4 + -0x7d7f4475) = in_FPUTagWord;
  *(undefined8 *)(lVar4 + -0x7d7f4469) = in_FPUDataPointer;
  *(undefined8 *)(lVar4 + -0x7d7f4471) = in_FPUInstructionPointer;
  *(undefined2 *)(lVar4 + -0x7d7f446b) = in_FPULastInstructionOpcode;
  *unaff_RDI = in_EAX;
  bVar6 = (byte)((ulonglong)param_1 >> 8);
  uVar5 = CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(bVar6 + unaff_BL,(char)param_1));
  uVar2 = (ulonglong)CARRY1(bVar6,unaff_BL);
  if (auStack_10 + uVar5 + uVar2 == (undefined1 *)0x0) {
    out(CONCAT11(0x20,~bVar7),(char)in_EAX);
    out(0x50,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) =
       (*(int *)CONCAT71(unaff_00000019,unaff_BL) - ((int)unaff_RDI + 4)) -
       (uint)(CARRY8(uVar5,(ulonglong)auStack_10) || CARRY8((ulonglong)(auStack_10 + uVar5),uVar2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a78b8 FUN_14d7a78b8 body=27 status=ok
// SIG undefined FUN_14d7a78b8(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a78c1) overlaps instruction at (ram,0x00014d7a78bd)
    */

void FUN_14d7a78b8(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong lVar4;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  ulonglong uVar5;
  undefined1 uVar7;
  byte unaff_BL;
  undefined7 unaff_00000019;
  undefined4 *unaff_RDI;
  bool in_CF;
  bool in_ZF;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  undefined1 auStack_8 [8];
  byte bVar6;
  
  uVar7 = (undefined1)((ulonglong)param_2 >> 8);
  if (in_CF || in_ZF) {
    pcVar1 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(uVar7,0xb7)) + 0x48dd00ab
                     );
    *pcVar1 = *pcVar1 + '\x13';
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar4 = CONCAT44(in_register_00000004,in_EAX);
  *(undefined2 *)(lVar4 + -0x7d7f447d) = in_FPUControlWord;
  *(undefined2 *)(lVar4 + -0x7d7f4479) = in_FPUStatusWord;
  *(undefined2 *)(lVar4 + -0x7d7f4475) = in_FPUTagWord;
  *(undefined8 *)(lVar4 + -0x7d7f4469) = in_FPUDataPointer;
  *(undefined8 *)(lVar4 + -0x7d7f4471) = in_FPUInstructionPointer;
  *(undefined2 *)(lVar4 + -0x7d7f446b) = in_FPULastInstructionOpcode;
  *unaff_RDI = in_EAX;
  bVar6 = (byte)((ulonglong)param_1 >> 8);
  uVar5 = CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(bVar6 + unaff_BL,(char)param_1));
  uVar2 = (ulonglong)CARRY1(bVar6,unaff_BL);
  if (auStack_8 + uVar5 + uVar2 == (undefined1 *)0x0) {
    out(CONCAT11(uVar7,0x48),(char)in_EAX);
    out(0x50,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) =
       (*(int *)CONCAT71(unaff_00000019,unaff_BL) - ((int)unaff_RDI + 4)) -
       (uint)(CARRY8(uVar5,(ulonglong)auStack_8) || CARRY8((ulonglong)(auStack_8 + uVar5),uVar2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a78d5 FUN_14d7a78d5 body=1 status=ok
// SIG undefined FUN_14d7a78d5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a78d5(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a78d9 FUN_14d7a78d9 body=8 status=ok
// SIG undefined FUN_14d7a78d9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a78d9(void)

{
  bool in_CF;
  
  if (!in_CF) {
    in(0xc5);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a78e1 FUN_14d7a78e1 body=2 status=ok
// SIG undefined FUN_14d7a78e1(void)

void FUN_14d7a78e1(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a78f9 FUN_14d7a78f9 body=12 status=ok
// SIG undefined FUN_14d7a78f9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a78f9(char param_1)

{
  undefined4 in_EAX;
  char *unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_ZF;
  char *unaff_retaddr;
  
  if (in_ZF) {
    *unaff_RSI = *unaff_RSI + param_1;
    *unaff_RDI = in_EAX;
    *unaff_retaddr = *unaff_retaddr + ',';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a7906 FUN_14d7a7906 body=2 status=ok
// SIG undefined FUN_14d7a7906(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7906(void)

{
  int *unaff_RBX;
  int unaff_EDI;
  byte in_CF;
  
  *unaff_RBX = (*unaff_RBX - unaff_EDI) - (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a791b FUN_14d7a791b body=10 status=ok
// SIG undefined FUN_14d7a791b(void)

uint FUN_14d7a791b(void)

{
  uint unaff_ESI;
  
  return unaff_ESI ^ 0xe83703b1;
}



// FUNCTION 14d7a7928 FUN_14d7a7928 body=10 status=ok
// SIG undefined FUN_14d7a7928(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7928(char param_1,undefined2 param_2)

{
  out(param_2,param_1 + -0x2f);
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7942 FUN_14d7a7942 body=2 status=ok
// SIG undefined FUN_14d7a7942(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7942(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a794f FUN_14d7a794f body=1 status=ok
// SIG undefined FUN_14d7a794f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a794f(void)

{
  func_0x0001815842b5();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7953 FUN_14d7a7953 body=11 status=ok
// SIG undefined FUN_14d7a7953(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7953(void)

{
  undefined2 *unaff_RBX;
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
  
  *unaff_RBX = in_FPUControlWord;
  unaff_RBX[2] = in_FPUStatusWord;
  unaff_RBX[4] = in_FPUTagWord;
  *(undefined8 *)(unaff_RBX + 10) = in_FPUDataPointer;
  *(undefined8 *)(unaff_RBX + 6) = in_FPUInstructionPointer;
  unaff_RBX[9] = in_FPULastInstructionOpcode;
  *(unkbyte10 *)(unaff_RBX + 0xe) = in_ST0;
  *(unkbyte10 *)(unaff_RBX + 0x13) = in_ST1;
  *(unkbyte10 *)(unaff_RBX + 0x18) = in_ST2;
  *(unkbyte10 *)(unaff_RBX + 0x1d) = in_ST3;
  *(unkbyte10 *)(unaff_RBX + 0x22) = in_ST4;
  *(unkbyte10 *)(unaff_RBX + 0x27) = in_ST5;
  *(unkbyte10 *)(unaff_RBX + 0x2c) = in_ST6;
  *(unkbyte10 *)(unaff_RBX + 0x31) = in_ST7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7960 FUN_14d7a7960 body=4 status=ok
// SIG undefined FUN_14d7a7960(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7960(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined1 *unaff_RSI;
  longlong unaff_RDI;
  
  out(*unaff_RSI,param_2);
  uVar1 = in(param_2);
  *(undefined1 *)(unaff_RDI + 1) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7964 FUN_14d7a7964 body=1 status=ok
// SIG undefined FUN_14d7a7964(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7964(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined1 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a79a3 FUN_14d7a79a3 body=8 status=ok
// SIG undefined FUN_14d7a79a3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a79a3(char *param_1,undefined2 *param_2)

{
  int in_EAX;
  byte bVar1;
  undefined6 uVar2;
  char unaff_BL;
  uint uVar3;
  undefined1 *unaff_RSI;
  bool bVar5;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  undefined8 in_MM0;
  undefined4 *puVar4;
  
  uVar2 = (undefined6)((ulonglong)param_2 >> 0x10);
  *param_2 = in_FPUControlWord;
  param_2[2] = in_FPUStatusWord;
  param_2[4] = in_FPUTagWord;
  *(undefined8 *)(param_2 + 10) = in_FPUDataPointer;
  *(undefined8 *)(param_2 + 6) = in_FPUInstructionPointer;
  param_2[9] = in_FPULastInstructionOpcode;
  puVar4 = (undefined4 *)(unaff_RSI + 1);
  out(*unaff_RSI,(short)param_2);
  bVar1 = (byte)((ulonglong)param_2 >> 8) | 0x37;
  bVar5 = (POPCOUNT(bVar1) & 1U) == 0;
  if (!bVar5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while( true ) {
    if (bVar5) {
      psubsw(in_MM0,in_MM0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar3 = (int)puVar4 + *(int *)((ulonglong)(in_EAX + 0x4af6eb42U | 0x35210025) + 0x30681e5);
    puVar4 = (undefined4 *)(ulonglong)uVar3;
    if ((POPCOUNT(uVar3 & 0xff) & 1U) == 0) break;
    *param_1 = *param_1 + unaff_BL;
    bVar5 = (POPCOUNT(*param_1) & 1U) == 0;
  }
  *(char *)CONCAT62(uVar2,CONCAT11(bVar1,0x37)) =
       *(char *)CONCAT62(uVar2,CONCAT11(bVar1,0x37)) + (char)*puVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a79ac FUN_14d7a79ac body=5 status=ok
// SIG undefined FUN_14d7a79ac(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a79ac(char *param_1,undefined8 param_2)

{
  uint in_EAX;
  byte bVar1;
  undefined6 uVar2;
  char unaff_BL;
  uint uVar3;
  undefined4 *unaff_RSI;
  bool bVar4;
  undefined8 in_MM0;
  
  uVar2 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar1 = (byte)((ulonglong)param_2 >> 8) | 0x37;
  bVar4 = (POPCOUNT(bVar1) & 1U) == 0;
  if (!bVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while( true ) {
    if (bVar4) {
      psubsw(in_MM0,in_MM0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar3 = (int)unaff_RSI + *(int *)((ulonglong)(in_EAX | 0x35210025) + 0x30681e5);
    unaff_RSI = (undefined4 *)(ulonglong)uVar3;
    if ((POPCOUNT(uVar3 & 0xff) & 1U) == 0) break;
    *param_1 = *param_1 + unaff_BL;
    bVar4 = (POPCOUNT(*param_1) & 1U) == 0;
  }
  *(char *)CONCAT62(uVar2,CONCAT11(bVar1,0x37)) =
       *(char *)CONCAT62(uVar2,CONCAT11(bVar1,0x37)) + (char)*unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a79b9 FUN_14d7a79b9 body=5 status=ok
// SIG undefined FUN_14d7a79b9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a79b9(char *param_1,char *param_2)

{
  longlong in_RAX;
  char unaff_BL;
  uint uVar1;
  undefined4 *unaff_RSI;
  bool in_PF;
  undefined8 in_MM0;
  
  if (!in_PF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while( true ) {
    if (in_PF) {
      psubsw(in_MM0,in_MM0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar1 = (int)unaff_RSI + *(int *)(in_RAX + 0x30681e5);
    unaff_RSI = (undefined4 *)(ulonglong)uVar1;
    if ((POPCOUNT(uVar1 & 0xff) & 1U) == 0) break;
    *param_1 = *param_1 + unaff_BL;
    in_PF = (POPCOUNT(*param_1) & 1U) == 0;
  }
  *param_2 = *param_2 + (char)*unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a79db FUN_14d7a79db body=2 status=ok
// SIG undefined FUN_14d7a79db(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a79e9) overlaps instruction at (ram,0x00014d7a79e7)
    */

void FUN_14d7a79db(byte param_1,undefined2 param_2)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  byte bVar4;
  ulonglong in_RAX;
  ulonglong uVar5;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined4 *unaff_EDI;
  byte in_CF;
  
  uVar5 = (in_RAX - 0x67a7c65b) + (ulonglong)in_CF;
  if (0x67a7c65a < in_RAX || CARRY8(in_RAX - 0x67a7c65b,(ulonglong)in_CF)) {
    *(char *)(unaff_RBP + 0xbee3703) = *(char *)(unaff_RBP + 0xbee3703) + (char)(uVar5 >> 8);
  }
  else {
    if ((POPCOUNT(uVar5 & 0xff) & 1U) != 0) {
      *(char *)(unaff_RBP + -0x63f6aa37) = *(char *)(unaff_RBP + -0x63f6aa37) << (param_1 & 0x1f);
      out(*unaff_RSI,param_2);
      pcVar3 = (code *)swi(0xad);
      (*pcVar3)(uVar5 & 0xffffffff);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar1 = (byte *)(uVar5 * 2 + -0x11c8fc5b);
    bVar4 = (param_1 & 0x1f) % 9;
    bVar2 = *pbVar1;
    *pbVar1 = bVar2 >> bVar4 | bVar2 << 9 - bVar4;
    *unaff_EDI = (int)uVar5;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a79fb FUN_14d7a79fb body=12 status=ok
// SIG undefined FUN_14d7a79fb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a79fb(undefined8 param_1,longlong param_2)

{
  undefined8 in_RAX;
  longlong unaff_RBX;
  uint unaff_ESP;
  longlong unaff_RSI;
  
  *(uint *)(param_2 + 0x3979d299) = *(uint *)(param_2 + 0x3979d299) & unaff_ESP;
  *(char *)(unaff_RSI + -0x596051e4) = *(char *)(unaff_RSI + -0x596051e4) + '\x01';
  *(char *)(unaff_RBX + -0x78b5d82) =
       *(char *)(unaff_RBX + -0x78b5d82) + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7a08 FUN_14d7a7a08 body=23 status=ok
// SIG undefined FUN_14d7a7a08(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a7a08(void)

{
  code *pcVar1;
  undefined4 in_EAX;
  undefined8 unaff_retaddr;
  
  pcVar1 = (code *)swi(0xa8);
  _DAT_65fe5c15f874a27e = in_EAX;
  (*pcVar1)(0x76d8007b,unaff_retaddr);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7a23 FUN_14d7a7a23 body=71 status=ok
// SIG undefined FUN_14d7a7a23(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a79e9) overlaps instruction at (ram,0x00014d7a79e7)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a79e9) */

void FUN_14d7a7a23(longlong param_1,char *param_2)

{
  byte *pbVar1;
  float fVar2;
  byte bVar3;
  code *pcVar4;
  byte bVar5;
  ulonglong in_RAX;
  char *pcVar6;
  uint *unaff_EBX;
  longlong unaff_RBP;
  uint uVar7;
  undefined4 *unaff_RSI;
  uint *unaff_EDI;
  bool bVar8;
  undefined8 uVar9;
  float10 in_ST0;
  
  fVar2 = *(float *)((longlong)unaff_RSI + -0x33);
  pcVar6 = (char *)(param_1 + -1);
  if (pcVar6 != (char *)0x0 && (in_RAX & 0x4e) == 0) {
    uVar7 = (uint)(short)in_RAX;
    if ((POPCOUNT((byte)in_RAX & 0x4e) & 1U) == 0) {
      pbVar1 = (byte *)((ulonglong)uVar7 * 2 + -0x11c8fc5b);
      bVar5 = ((byte)pcVar6 & 0x1f) % 9;
      bVar3 = *pbVar1;
      *pbVar1 = bVar3 >> bVar5 | bVar3 << 9 - bVar5;
      *unaff_EDI = uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)(unaff_RBP + -0x63f6aa37) = *(char *)(unaff_RBP + -0x63f6aa37) << ((byte)pcVar6 & 0x1f)
    ;
    out(*(undefined1 *)unaff_RSI,(short)param_2);
    pcVar4 = (code *)swi(0xad);
    (*pcVar4)((ulonglong)uVar7);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar8 = (POPCOUNT((int)unaff_EBX - (int)unaff_EDI & 0xff) & 1U) == 0;
  if (unaff_EBX < unaff_EDI) {
    if (!bVar8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    while( true ) {
      if (bVar8) {
        uVar9 = SUB108(in_ST0 / (float10)fVar2,0);
        psubsw(uVar9,uVar9);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar7 = (int)unaff_RSI + *(int *)(in_RAX + 0x30681e5);
      unaff_RSI = (undefined4 *)(ulonglong)uVar7;
      if ((POPCOUNT(uVar7 & 0xff) & 1U) == 0) break;
      *pcVar6 = *pcVar6 + -0xe;
      bVar8 = (POPCOUNT(*pcVar6) & 1U) == 0;
    }
    *param_2 = *param_2 + (char)*unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  DAT_7e2ef97b = (DAT_7e2ef97b - (byte)in_RAX) -
                 CARRY1((byte)(in_RAX >> 8),(byte)((ulonglong)param_2 >> 8));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7a52 FUN_14d7a7a52 body=10 status=ok
// SIG undefined FUN_14d7a7a52(void)

void FUN_14d7a7a52(void)

{
  return;
}



// FUNCTION 14d7a7a5e FUN_14d7a7a5e body=2 status=ok
// SIG undefined FUN_14d7a7a5e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7a5e(undefined8 param_1,byte param_2)

{
  byte *in_RAX;
  
  *in_RAX = *in_RAX ^ param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7a66 FUN_14d7a7a66 body=7 status=ok
// SIG undefined FUN_14d7a7a66(void)

void FUN_14d7a7a66(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  ulonglong param_13)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong in_RCX;
  int unaff_EBP;
  longlong in_R11;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined8 uStackX_8;
  undefined1 auStackX_10 [24];
  
  uVar9 = (ulonglong)(uint)(unaff_EBP * -0x6b4bd60);
  *(undefined8 *)(in_R11 + 0x1c00ec10) = uStackX_8;
  puVar3 = (undefined4 *)(uVar9 * 2);
  *puVar3 = (int)param_1;
  puVar3[1] = (int)((ulonglong)param_1 >> 0x20);
  puVar3[2] = in_XMM0_Dc;
  puVar3[3] = in_XMM0_Dd;
  while( true ) {
    puVar3 = (undefined4 *)(uVar9 + 0x20 + param_2);
    *puVar3 = (undefined4)param_10;
    puVar3[1] = param_10._4_4_;
    puVar3[2] = (undefined4)param_11;
    puVar3[3] = param_11._4_4_;
    puVar3 = (undefined4 *)(uVar9 + 0x10 + param_2);
    *puVar3 = (undefined4)param_8;
    puVar3[1] = param_8._4_4_;
    puVar3[2] = (undefined4)param_9;
    puVar3[3] = param_9._4_4_;
    puVar3 = (undefined4 *)(uVar9 + param_2);
    *puVar3 = (undefined4)param_6;
    puVar3[1] = param_6._4_4_;
    puVar3[2] = (undefined4)param_7;
    puVar3[3] = param_7._4_4_;
    param_3 = param_3 + 0x30;
    param_2 = param_2 + -0x30;
    if (in_RCX == param_3) break;
    param_6 = *(undefined8 *)(uVar9 + param_3);
    param_7 = ((undefined8 *)(uVar9 + param_3))[1];
    puVar1 = (undefined8 *)(uVar9 + 0x10 + param_3);
    param_8 = *puVar1;
    param_9 = puVar1[1];
    puVar1 = (undefined8 *)(uVar9 + 0x20 + param_3);
    param_10 = *puVar1;
    param_11 = puVar1[1];
    uVar4 = *(undefined8 *)(uVar9 + param_2);
    uVar5 = ((undefined8 *)(uVar9 + param_2))[1];
    puVar1 = (undefined8 *)(uVar9 + 0x10 + param_2);
    uVar6 = *puVar1;
    uVar7 = puVar1[1];
    puVar1 = (undefined8 *)(uVar9 + 0x20 + param_2);
    uVar8 = puVar1[1];
    puVar2 = (undefined8 *)(uVar9 + 0x20 + param_3);
    *puVar2 = *puVar1;
    puVar2[1] = uVar8;
    puVar1 = (undefined8 *)(uVar9 + 0x10 + param_3);
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    *(undefined8 *)(uVar9 + param_3) = uVar4;
    ((undefined8 *)(uVar9 + param_3))[1] = uVar5;
  }
  if ((param_13 ^ (ulonglong)auStackX_10) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14d7a7a73 FUN_14d7a7a73 body=2 status=ok
// SIG undefined FUN_14d7a7a73(void)

void FUN_14d7a7a73(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,ulonglong param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_RAX;
  longlong lVar9;
  longlong in_RCX;
  char in_CF;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined8 uStackX_20;
  
  lVar9 = CONCAT71((int7)((ulonglong)in_RAX >> 8),((char)in_RAX + -0x1b) - in_CF);
  puVar3 = (undefined4 *)(lVar9 * 2);
  *puVar3 = (int)param_1;
  puVar3[1] = (int)((ulonglong)param_1 >> 0x20);
  puVar3[2] = in_XMM0_Dc;
  puVar3[3] = in_XMM0_Dd;
  while( true ) {
    puVar3 = (undefined4 *)(lVar9 + 0x20 + param_2);
    *puVar3 = (undefined4)param_8;
    puVar3[1] = param_8._4_4_;
    puVar3[2] = (undefined4)param_9;
    puVar3[3] = param_9._4_4_;
    puVar3 = (undefined4 *)(lVar9 + 0x10 + param_2);
    *puVar3 = (undefined4)param_6;
    puVar3[1] = param_6._4_4_;
    puVar3[2] = (undefined4)param_7;
    puVar3[3] = param_7._4_4_;
    puVar3 = (undefined4 *)(lVar9 + param_2);
    *puVar3 = (undefined4)uStackX_20;
    puVar3[1] = uStackX_20._4_4_;
    puVar3[2] = (undefined4)param_5;
    puVar3[3] = param_5._4_4_;
    param_3 = param_3 + 0x30;
    param_2 = param_2 + -0x30;
    if (in_RCX == param_3) break;
    uStackX_20 = *(undefined8 *)(lVar9 + param_3);
    param_5 = ((undefined8 *)(lVar9 + param_3))[1];
    puVar1 = (undefined8 *)(lVar9 + 0x10 + param_3);
    param_6 = *puVar1;
    param_7 = puVar1[1];
    puVar1 = (undefined8 *)(lVar9 + 0x20 + param_3);
    param_8 = *puVar1;
    param_9 = puVar1[1];
    uVar4 = *(undefined8 *)(lVar9 + param_2);
    uVar5 = ((undefined8 *)(lVar9 + param_2))[1];
    puVar1 = (undefined8 *)(lVar9 + 0x10 + param_2);
    uVar6 = *puVar1;
    uVar7 = puVar1[1];
    puVar1 = (undefined8 *)(lVar9 + 0x20 + param_2);
    uVar8 = puVar1[1];
    puVar2 = (undefined8 *)(lVar9 + 0x20 + param_3);
    *puVar2 = *puVar1;
    puVar2[1] = uVar8;
    puVar1 = (undefined8 *)(lVar9 + 0x10 + param_3);
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    *(undefined8 *)(lVar9 + param_3) = uVar4;
    ((undefined8 *)(lVar9 + param_3))[1] = uVar5;
  }
  if ((param_11 ^ (ulonglong)&stack0x00000000) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14d7a7a7c FUN_14d7a7a7c body=3 status=ok
// SIG undefined FUN_14d7a7a7c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7a7c(undefined8 param_1,undefined2 param_2)

{
  undefined4 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7a80 FUN_14d7a7a80 body=4 status=ok
// SIG undefined FUN_14d7a7a80(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7a80(void)

{
  bool in_CF;
  bool in_ZF;
  
  if (in_CF || in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7a8c FUN_14d7a7a8c body=4 status=ok
// SIG undefined FUN_14d7a7a8c(void)

void FUN_14d7a7a8c(void)

{
  code *pcVar1;
  bool in_CF;
  
  if (!in_CF) {
    return;
  }
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}


