// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14d7a7a9c FUN_14d7a7a9c body=11 status=ok
// SIG undefined FUN_14d7a7a9c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7a9c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7aad FUN_14d7a7aad body=12 status=ok
// SIG undefined FUN_14d7a7aad(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7aad(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  
  pbVar1 = (byte *)(CONCAT71(unaff_00000019,unaff_BL) + 0x3f);
  *pbVar1 = *pbVar1 | (byte)((ulonglong)param_2 >> 8);
  func_0x0001a79b3d8a();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7acd FUN_14d7a7acd body=6 status=ok
// SIG undefined FUN_14d7a7acd(void)

void FUN_14d7a7acd(void)

{
  longlong unaff_RSI;
  undefined2 in_GS;
  
  *(undefined2 *)(unaff_RSI + 0x22) = in_GS;
  return;
}



// FUNCTION 14d7a7adf FUN_14d7a7adf body=2 status=ok
// SIG undefined FUN_14d7a7adf(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7adf(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7ae3 FUN_14d7a7ae3 body=4 status=ok
// SIG undefined FUN_14d7a7ae3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7ae3(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  uint unaff_EDI;
  undefined8 uStack_10;
  
  if (param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)((ulonglong)unaff_EDI - 0x1690ee0f) = *(char *)((ulonglong)unaff_EDI - 0x1690ee0f) + '<';
  puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x05';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7af3 FUN_14d7a7af3 body=6 status=ok
// SIG undefined FUN_14d7a7af3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7af3(void)

{
  longlong unaff_RBP;
  
  *(undefined1 *)(unaff_RBP + -0x19) = 0xeb;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7afc FUN_14d7a7afc body=25 status=ok
// SIG undefined FUN_14d7a7afc(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7afc(int param_1)

{
  char *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RBP;
  int unaff_EDI;
  undefined8 uStack_10;
  
  pcVar1 = (char *)((ulonglong)(uint)(unaff_EDI - param_1) - 0x1690ee0f);
  *pcVar1 = *pcVar1 + '<';
  puVar3 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar2 = '\x05';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar3 = puVar3 + -1;
    *puVar3 = *unaff_RBP;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7b1d FUN_14d7a7b1d body=11 status=ok
// SIG undefined FUN_14d7a7b1d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a7b1d(longlong param_1)

{
  undefined4 in_EAX;
  
  _DAT_651c6c26e3137989 = in_EAX;
  if (param_1 == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7b32 FUN_14d7a7b32 body=2 status=ok
// SIG undefined FUN_14d7a7b32(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7b32(undefined1 param_1)

{
  undefined2 *in_RAX;
  undefined2 in_ES;
  
  *in_RAX = in_ES;
  LOCK();
  uRam0000000182417f7b = param_1;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7b36 FUN_14d7a7b36 body=10 status=ok
// SIG undefined FUN_14d7a7b36(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7b36(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7b4a FUN_14d7a7b4a body=6 status=ok
// SIG undefined FUN_14d7a7b4a(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a7bae) overlaps instruction at (ram,0x00014d7a7bad)
    */

void FUN_14d7a7b4a(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  byte bVar2;
  int in_EAX;
  uint uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined8 unaff_RBP;
  char unaff_R12B;
  char unaff_R15B;
  undefined7 unaff_000000b9;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  char *unaff_retaddr;
  undefined1 auStackX_8 [32];
  
  puVar5 = auStackX_8;
  uVar4 = 0xd9ad631e;
  uVar3 = in_EAX + 0x508bfb68;
  *(char *)(param_1 + -0x8f0f8cd) = *(char *)(param_1 + -0x8f0f8cd) + (char)param_2;
  if (param_1 + -1 == 0) {
    if (SCARRY1(unaff_R15B,unaff_R12B) == (char)(unaff_R15B + unaff_R12B) < '\0') {
      return;
    }
    param_1 = param_1 + -2;
    if (param_1 == 0 || (char)(unaff_R15B + unaff_R12B) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(0xb2,uVar3);
    puVar5 = (undefined1 *)register0x00000020;
  }
  else {
    *unaff_retaddr = *unaff_retaddr - (char)((ulonglong)param_2 >> 8);
    param_1 = CONCAT71((int7)((ulonglong)(param_1 + -1) >> 8),0xef);
    *(char *)CONCAT71(unaff_000000b9,unaff_R15B) = -*(char *)CONCAT71(unaff_000000b9,unaff_R15B);
    uVar4 = (ulonglong)((int)auStackX_8 + 0xd9ad631e);
    uVar3 = uVar3 & 0xff;
    param_2 = 0x9c;
  }
  bVar2 = (byte)uVar3 & 0xe7;
  *(ulonglong *)(puVar5 + -8) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((char)bVar2 < '\0') * 0x80 |
       (ulonglong)((uVar3 & 0xe7) == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
       (ulonglong)((POPCOUNT(bVar2) & 1U) == 0) * 4 | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  if ((char)bVar2 >= '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar1 = (uint *)(CONCAT62((int6)(uVar4 >> 0x10),CONCAT11((char)param_2,(char)uVar4)) + 0x1b);
  *puVar1 = ~*puVar1;
  *(undefined8 *)(*(longlong *)(puVar5 + -8) + -8) = unaff_RBP;
  if (param_1 == 0) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7b52 FUN_14d7a7b52 body=4 status=ok
// SIG undefined FUN_14d7a7b52(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a7bae) overlaps instruction at (ram,0x00014d7a7bad)
    */

void FUN_14d7a7b52(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  byte bVar2;
  undefined2 in_AX;
  uint uVar3;
  ulonglong unaff_RBX;
  undefined8 unaff_RBP;
  char *unaff_RSI;
  byte unaff_R12B;
  byte unaff_R15B;
  char cVar4;
  undefined7 unaff_000000b9;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uStack_8;
  
  bVar2 = (char)in_AX + 0x74;
  uVar3 = CONCAT31((int3)(char)((ushort)in_AX >> 8),bVar2);
  *(char *)(param_1 + -0x8f0f8cd) = *(char *)(param_1 + -0x8f0f8cd) + (char)param_2;
  if (param_1 + -1 == 0) {
    cVar4 = unaff_R15B + unaff_R12B;
    if (SCARRY1(unaff_R15B,unaff_R12B) == cVar4 < '\0') {
      return;
    }
    param_1 = param_1 + -2;
    if (param_1 == 0 || cVar4 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(0xb2,uVar3);
    register0x00000020 = (BADSPACEBASE *)&uStack_8;
    uStack_8 = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SCARRY1(unaff_R15B,unaff_R12B) * 0x800 |
               (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
               (ulonglong)(cVar4 < '\0') * 0x80 | (ulonglong)(cVar4 == '\0') * 0x40 |
               (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(cVar4) & 1U) == 0) * 4 |
               (ulonglong)CARRY1(unaff_R15B,unaff_R12B) | (ulonglong)(in_ID & 1) * 0x200000 |
               (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
               (ulonglong)(in_AC & 1) * 0x40000;
  }
  else {
    *unaff_RSI = *unaff_RSI - (char)((ulonglong)param_2 >> 8);
    param_1 = CONCAT71((int7)((ulonglong)(param_1 + -1) >> 8),0xef);
    *(char *)CONCAT71(unaff_000000b9,unaff_R15B) = -*(char *)CONCAT71(unaff_000000b9,unaff_R15B);
    unaff_RBX = (ulonglong)(uint)((int)unaff_RBX + (int)&stack0x00000000);
    uVar3 = (uint)bVar2;
    param_2 = 0x9c;
  }
  bVar2 = (byte)uVar3 & 0xe7;
  *(ulonglong *)((longlong)register0x00000020 + -8) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((char)bVar2 < '\0') * 0x80 |
       (ulonglong)((uVar3 & 0xe7) == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
       (ulonglong)((POPCOUNT(bVar2) & 1U) == 0) * 4 | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  if ((char)bVar2 >= '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar1 = (uint *)(CONCAT62((int6)(unaff_RBX >> 0x10),CONCAT11((char)param_2,(char)unaff_RBX)) +
                   0x1b);
  *puVar1 = ~*puVar1;
  *(undefined8 *)(*(longlong *)((longlong)register0x00000020 + -8) + -8) = unaff_RBP;
  if (param_1 == 0) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7b57 FUN_14d7a7b57 body=6 status=ok
// SIG undefined FUN_14d7a7b57(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7b57(void)

{
  undefined8 unaff_RDI;
  undefined8 in_MM2;
  undefined8 in_MM4;
  
  MaskedMoveQWord(in_MM4,in_MM2,unaff_RDI);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7b64 FUN_14d7a7b64 body=1 status=ok
// SIG undefined FUN_14d7a7b64(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7b64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7b98 FUN_14d7a7b98 body=9 status=ok
// SIG undefined FUN_14d7a7b98(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a7bb8) overlaps instruction at (ram,0x00014d7a7bb6)
    */

void FUN_14d7a7b98(undefined8 param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  char *unaff_R15;
  bool in_CF;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  char *unaff_retaddr;
  undefined8 uStackX_8;
  undefined1 auStackX_10 [24];
  
  uVar3 = (undefined1)param_1;
  uVar4 = 0x6f005e33;
  puVar5 = auStackX_10;
  if (in_CF) {
    *unaff_retaddr = *unaff_retaddr + (char)unaff_retaddr;
    puVar5 = (undefined1 *)(ulonglong)(param_2 + 0x28);
    uVar3 = 0xef;
    *unaff_R15 = -*unaff_R15;
    uVar4 = (ulonglong)(param_2 + 0x6f005e5b);
    unaff_retaddr = (char *)((ulonglong)unaff_retaddr & 0xff);
    param_2 = 0x9c;
  }
  else {
    in_IF = 0;
  }
  bVar2 = (byte)unaff_retaddr & 0xe7;
  *(ulonglong *)(puVar5 + -8) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((char)bVar2 < '\0') * 0x80 |
       (ulonglong)(((ulonglong)unaff_retaddr & 0xe7) == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
       (ulonglong)((POPCOUNT(bVar2) & 1U) == 0) * 4 | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  if ((char)bVar2 >= '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar1 = (uint *)(CONCAT62((int6)(uVar4 >> 0x10),CONCAT11((char)param_2,(char)uVar4)) + 0x1b);
  *puVar1 = ~*puVar1;
  *(undefined8 *)(*(longlong *)(puVar5 + -8) + -8) = uStackX_8;
  if (CONCAT71((int7)((ulonglong)param_1 >> 8),uVar3) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// FUNCTION 14d7a7ba3 FUN_14d7a7ba3 body=42 status=ok
// SIG undefined FUN_14d7a7ba3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7ba3(undefined8 param_1,int param_2)

{
  uint *puVar1;
  byte in_AL;
  byte bVar2;
  int unaff_EBX;
  uint uVar3;
  undefined8 unaff_RBP;
  char *unaff_R15;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  
  uVar3 = param_2 + 0x28;
  *unaff_R15 = -*unaff_R15;
  bVar2 = in_AL & 0xe7;
  *(ulonglong *)((ulonglong)uVar3 - 8) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((char)bVar2 < '\0') * 0x80 |
       (ulonglong)(bVar2 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
       (ulonglong)((POPCOUNT(bVar2) & 1U) == 0) * 4 | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  if ((char)bVar2 >= '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar1 = (uint *)((ulonglong)
                    CONCAT22((short)(unaff_EBX + uVar3 >> 0x10),
                             CONCAT11(0x9c,(char)(unaff_EBX + uVar3))) + 0x1b);
  *puVar1 = ~*puVar1;
  *(undefined8 *)(*(longlong *)((ulonglong)uVar3 - 8) + -8) = unaff_RBP;
  if (CONCAT71((int7)((ulonglong)param_1 >> 8),0xef) == 0) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7bc1 FUN_14d7a7bc1 body=3 status=ok
// SIG undefined FUN_14d7a7bc1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7bc1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7bc9 FUN_14d7a7bc9 body=1 status=ok
// SIG undefined FUN_14d7a7bc9(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a7bb8) overlaps instruction at (ram,0x00014d7a7bb6)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a7ba1) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7c2a) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7c39) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7c25) */

void FUN_14d7a7bc9(undefined8 param_1)

{
  uint *puVar1;
  code *pcVar2;
  uint uVar3;
  char cVar7;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  longlong in_RCX;
  ulonglong *puVar8;
  byte unaff_BPL;
  uint *unaff_RSI;
  char *unaff_RDI;
  byte in_AF;
  byte in_TF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 in_XMM0_Qb;
  
  puVar1 = unaff_RSI + -0x1f;
  uVar3 = *puVar1;
  cVar7 = (char)(*unaff_RSI >> 8);
  *(char *)puVar1 = (char)*puVar1 - cVar7;
  piVar6 = (int *)((ulonglong)&stack0x00000000 & 0xffffffff);
  puVar8 = (ulonglong *)(ulonglong)(*unaff_RSI ^ 0xeb6a0023);
  if (SBORROW1((char)uVar3,cVar7) == (char)*puVar1 < '\0') {
    *unaff_RDI = '\0';
    if (in_RCX == 1) {
      *puVar8 = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_TF & 1) * 0x100 |
                (ulonglong)((unaff_BPL & 0x44) == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
                (ulonglong)((POPCOUNT(unaff_BPL & 0x44) & 1U) == 0) * 4 |
                (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
                (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_RDI[0x82ecdb] = unaff_RDI[0x82ecdb] + (char)((ulonglong)piVar6 >> 8);
    in(0x5242);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((char)((char)unaff_RSI[1] - *unaff_RDI) < '\0') {
    *piVar6 = *piVar6 + 0x70;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!SBORROW1((char)unaff_RSI[1],*unaff_RDI)) {
    *(char *)piVar6 = (char)*piVar6;
    *(undefined8 *)piVar6 = param_1;
    *(undefined8 *)(piVar6 + 2) = in_XMM0_Qb;
    return;
  }
  *(ulonglong *)(unaff_RDI + 0x21) =
       (*(longlong *)(unaff_RDI + 0x21) + 1) - (ulonglong)(*(longlong *)(unaff_RDI + 0x21) == 0);
  if ((longlong *)puVar8[5] != (longlong *)0x0) {
    pcVar2 = *(code **)(*(longlong *)puVar8[5] + 0x640);
    puVar8[-1] = 0x147c45544;
    lVar4 = (*pcVar2)();
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)(lVar4 + 0xa8);
      goto LAB_147c45554;
    }
  }
  uVar5 = 0;
LAB_147c45554:
  *(undefined8 *)((longlong)unaff_RSI + 6) = uVar5;
  if ((puVar8[6] ^ (ulonglong)puVar8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    puVar8[-1] = (ulonglong)&UNK_147c45574;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14d7a7bce FUN_14d7a7bce body=19 status=ok
// SIG undefined FUN_14d7a7bce(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a7bb8) overlaps instruction at (ram,0x00014d7a7bb6)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a7ba1) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7c2a) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7c39) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7c25) */

void FUN_14d7a7bce(undefined8 param_1)

{
  char *pcVar1;
  char cVar2;
  code *pcVar3;
  char cVar4;
  uint in_EAX;
  char cVar8;
  longlong lVar5;
  undefined8 uVar6;
  int *piVar7;
  longlong in_RCX;
  ulonglong *puVar9;
  byte unaff_BPL;
  char *unaff_RSI;
  char *unaff_RDI;
  char in_CF;
  byte in_AF;
  byte in_TF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 in_XMM0_Qb;
  undefined8 uStack_8;
  
  uStack_8 = 0xffffffffffffffeb;
  pcVar1 = unaff_RSI + -0x80;
  cVar2 = *pcVar1;
  cVar8 = (char)(in_EAX >> 8);
  cVar4 = *pcVar1 - cVar8;
  *pcVar1 = cVar4 - in_CF;
  piVar7 = (int *)((ulonglong)&uStack_8 & 0xffffffff);
  puVar9 = (ulonglong *)(ulonglong)in_EAX;
  if ((SBORROW1(cVar2,cVar8) != SBORROW1(cVar4,in_CF)) == *pcVar1 < '\0') {
    *unaff_RDI = (char)piVar7;
    if (in_RCX == 1) {
      *puVar9 = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_TF & 1) * 0x100 |
                (ulonglong)((unaff_BPL & 0x44) == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
                (ulonglong)((POPCOUNT(unaff_BPL & 0x44) & 1U) == 0) * 4 |
                (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
                (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_RDI[0x82ecdb] = unaff_RDI[0x82ecdb] + (char)((ulonglong)piVar7 >> 8);
    in(0x5242);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((char)(*unaff_RSI - *unaff_RDI) < '\0') {
    *piVar7 = *piVar7 + 0x70;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!SBORROW1(*unaff_RSI,*unaff_RDI)) {
    *(char *)piVar7 = (char)*piVar7 + (char)piVar7;
    *(undefined8 *)piVar7 = param_1;
    *(undefined8 *)(piVar7 + 2) = in_XMM0_Qb;
    return;
  }
  *(ulonglong *)(unaff_RDI + 0x21) =
       (*(longlong *)(unaff_RDI + 0x21) + 1) - (ulonglong)(*(longlong *)(unaff_RDI + 0x21) == 0);
  if ((longlong *)puVar9[5] != (longlong *)0x0) {
    pcVar3 = *(code **)(*(longlong *)puVar9[5] + 0x640);
    puVar9[-1] = 0x147c45544;
    lVar5 = (*pcVar3)();
    if (lVar5 != 0) {
      uVar6 = *(undefined8 *)(lVar5 + 0xa8);
      goto LAB_147c45554;
    }
  }
  uVar6 = 0;
LAB_147c45554:
  *(undefined8 *)(unaff_RSI + 2) = uVar6;
  if ((puVar9[6] ^ (ulonglong)puVar9) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    puVar9[-1] = (ulonglong)&UNK_147c45574;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14d7a7bf0 FUN_14d7a7bf0 body=7 status=ok
// SIG undefined FUN_14d7a7bf0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7bf0(undefined8 param_1,undefined1 param_2)

{
  int in_EAX;
  int *unaff_RDI;
  byte in_CF;
  int *unaff_retaddr;
  
  out(CONCAT11(0x77,param_2),in_EAX + -0x656389ae + (uint)in_CF);
  if ((POPCOUNT(*unaff_retaddr - *unaff_RDI & 0xff) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7bf8 FUN_14d7a7bf8 body=13 status=ok
// SIG undefined FUN_14d7a7bf8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7bf8(void)

{
  int *unaff_RDI;
  bool in_CF;
  bool in_ZF;
  int *unaff_retaddr;
  
  if (!in_CF && !in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((POPCOUNT(*unaff_retaddr - *unaff_RDI & 0xff) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7c04 FUN_14d7a7c04 body=3 status=ok
// SIG undefined FUN_14d7a7c04(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7c04(longlong param_1,undefined1 param_2)

{
  int in_EAX;
  int *unaff_RDI;
  byte in_CF;
  char in_ZF;
  int *unaff_retaddr;
  
  if (param_1 == 1 || in_ZF == '\0') {
    return;
  }
  out(CONCAT11(0x77,param_2),in_EAX + -0x656389ae + (uint)in_CF);
  if ((POPCOUNT(*unaff_retaddr - *unaff_RDI & 0xff) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7c08 FUN_14d7a7c08 body=6 status=ok
// SIG undefined FUN_14d7a7c08(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7c08(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7c12 FUN_14d7a7c12 body=21 status=ok
// SIG undefined FUN_14d7a7c12(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7c12(void)

{
  in(0x5242);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7c3d FUN_14d7a7c3d body=20 status=ok
// SIG undefined FUN_14d7a7c3d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7c3d(undefined8 param_1,undefined2 param_2)

{
  char unaff_BL;
  longlong unaff_RSI;
  
  *(char *)(unaff_RSI + 0x3d673d62) = *(char *)(unaff_RSI + 0x3d673d62) + unaff_BL;
  in(CONCAT11((char)((ushort)param_2 >> 8),0x5c));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7c51 FUN_14d7a7c51 body=8 status=ok
// SIG undefined FUN_14d7a7c51(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7c51(undefined8 param_1,undefined2 param_2)

{
  char unaff_BL;
  longlong unaff_RSI;
  
  *(char *)(unaff_RSI + 0x3d673d62) = *(char *)(unaff_RSI + 0x3d673d62) + unaff_BL;
  in(CONCAT11((char)((ushort)param_2 >> 8),0x5c));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7c63 FUN_14d7a7c63 body=7 status=ok
// SIG undefined FUN_14d7a7c63(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7c63(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7c74 FUN_14d7a7c74 body=1 status=ok
// SIG undefined FUN_14d7a7c74(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7c74(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7c79 FUN_14d7a7c79 body=5 status=ok
// SIG undefined FUN_14d7a7c79(void)

void FUN_14d7a7c79(void)

{
  byte *pbVar1;
  ulonglong unaff_RSI;
  char in_CF;
  
  pbVar1 = (byte *)((unaff_RSI & 0xffffffff) - 0x51);
  *pbVar1 = *pbVar1 >> 1 | in_CF << 7;
  return;
}



// FUNCTION 14d7a7c86 FUN_14d7a7c86 body=2 status=ok
// SIG undefined FUN_14d7a7c86(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7c86(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7c8a FUN_14d7a7c8a body=118 status=ok
// SIG undefined FUN_14d7a7c8a(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a7d11) overlaps instruction at (ram,0x00014d7a7d0f)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a7d3c) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7da0) */

void FUN_14d7a7c8a(longlong param_1,undefined2 param_2)

{
  char *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  uint uVar7;
  int iVar8;
  char cVar9;
  longlong lVar10;
  char cVar11;
  uint uVar12;
  uint *in_RAX;
  undefined1 *unaff_RBX;
  undefined1 *puVar14;
  undefined8 *puVar15;
  undefined8 *unaff_RBP;
  undefined1 *unaff_RSI;
  uint uVar16;
  byte *unaff_RDI;
  longlong unaff_R13;
  longlong unaff_R14;
  bool bVar17;
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
  ulonglong in_MM6;
  undefined2 in_ST6h;
  unkbyte10 in_ST7;
  int iVar6;
  uint uVar13;
  
  pcVar1 = unaff_RBX + -0x24f7a07d;
  *pcVar1 = -*pcVar1;
  puVar14 = (undefined1 *)register0x00000020;
  if (*pcVar1 != '\0') {
    uVar16 = (uint)((byte)in_RAX < 0xfc);
    uVar13 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX + 4);
    uVar7 = uVar13 + 0xf1edbac5;
    uVar12 = uVar7 + uVar16;
    in_RAX = (uint *)(ulonglong)uVar12;
    param_1 = param_1 + -1;
    if (param_1 == 0 || uVar12 == 0) {
      if ((POPCOUNT((byte)uVar12 ^ 0x4a) & 1U) == 0) {
        pcVar1 = (char *)(((ulonglong)uVar12 ^ 0x4a) - 0x27d5890e);
        *pcVar1 = *pcVar1 + (char)(uVar12 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(longlong *)(unaff_R13 + -0xc15363f) = *(longlong *)(unaff_R13 + -0xc15363f) - unaff_R14;
      LOCK();
      unaff_RBX[-0x54524bae] = (char)param_2;
      UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar16 = (uint)(0xe12453a < uVar13 || CARRY4(uVar7,uVar16));
    iVar8 = (int)unaff_RDI - *(int *)(unaff_RSI + -0x14);
    bVar17 = SBORROW4((int)unaff_RDI,*(int *)(unaff_RSI + -0x14)) != SBORROW4(iVar8,uVar16);
    uVar16 = iVar8 - uVar16;
    unaff_RDI = (byte *)(ulonglong)uVar16;
    puVar14 = unaff_RBX;
    if ((int)uVar16 < 0) {
      *in_RAX = *in_RAX & (uint)param_1;
      pcVar1 = (char *)((longlong)unaff_RBP * 2 + 0x634dcdcf);
      *pcVar1 = *pcVar1 + (char)param_2;
    }
    else if (param_1 == 0) {
      *unaff_RDI = (byte)uVar12;
      piVar2 = (int *)(unaff_RBX + -0x455c1900);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 << 0xe;
      iVar5 = *piVar2;
      iVar6 = *piVar2;
      out(*unaff_RSI,param_2);
      if (bVar17 == iVar5 < 0) {
        *(undefined1 **)((ulonglong)uVar12 - 8) = unaff_RBX;
        lVar10 = *(longlong *)((ulonglong)uVar12 - 8);
        out(unaff_RSI[1],param_2);
        cVar11 = (char)((ulonglong)&stack0xfffffffffffffff0 & 0xffffffff);
        if (iVar6 != 0 && bVar17 == iVar5 < 0) {
          *(undefined8 **)(lVar10 + -8) = unaff_RBP;
          bVar4 = unaff_RSI[2];
          puVar15 = (undefined8 *)(lVar10 + -0x10);
          *(undefined8 **)(lVar10 + -0x10) = unaff_RBP;
          cVar9 = '\x1a';
          do {
            unaff_RBP = unaff_RBP + -1;
            puVar15 = puVar15 + -1;
            *puVar15 = *unaff_RBP;
            cVar9 = cVar9 + -1;
          } while ('\0' < cVar9);
          *(longlong *)(lVar10 + -0xe8) = lVar10 + -0x10;
          uRam8c90de9321f2f356 =
               (int)CONCAT71((int7)(((ulonglong)&stack0xfffffffffffffff0 & 0xffffffff) >> 8),
                             (cVar11 + -0x40) - (iVar8 << 0xd < 0) & bVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uRam00000000ed8e090f = 8;
        cRam0e51d3c62b620034 = cVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (iVar6 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  while( true ) {
    *(undefined2 *)unaff_RDI = in_FPUControlWord;
    *(undefined2 *)(unaff_RDI + 4) = in_FPUStatusWord;
    *(undefined2 *)(unaff_RDI + 8) = in_FPUTagWord;
    *(undefined8 *)(unaff_RDI + 0x14) = in_FPUDataPointer;
    *(undefined8 *)(unaff_RDI + 0xc) = in_FPUInstructionPointer;
    *(undefined2 *)(unaff_RDI + 0x12) = in_FPULastInstructionOpcode;
    *(unkbyte10 *)(unaff_RDI + 0x1c) = in_ST0;
    *(unkbyte10 *)(unaff_RDI + 0x26) = in_ST1;
    *(unkbyte10 *)(unaff_RDI + 0x30) = in_ST2;
    *(unkbyte10 *)(unaff_RDI + 0x3a) = in_ST3;
    *(unkbyte10 *)(unaff_RDI + 0x44) = in_ST4;
    *(unkbyte10 *)(unaff_RDI + 0x4e) = in_ST5;
    *(unkuint10 *)(unaff_RDI + 0x58) = CONCAT28(in_ST6h,in_MM6);
    *(unkbyte10 *)(unaff_RDI + 0x62) = in_ST7;
    in_FPUControlWord = 0x37f;
    in_FPUStatusWord = 0;
    in_FPUTagWord = 0xffff;
    in_FPUDataPointer = 0;
    in_FPUInstructionPointer = 0;
    in_FPULastInstructionOpcode = 0;
    in_MM6 = in_MM6 >> *(longlong *)((longlong)in_RAX + 0x5c5be3a2);
    DAT_8786520f = DAT_8786520f + (char)in_RAX;
    bVar17 = DAT_8786520f == '\0';
    *(undefined8 *)(puVar14 + -8) = *(undefined8 *)((longlong)in_RAX + 0x7b);
    uVar3 = in(param_2);
    *(undefined4 *)unaff_RDI = uVar3;
    if (bVar17) break;
    param_2 = 0xfb97;
    *(undefined8 *)(puVar14 + -0x10) = 0x3570fb97;
    puVar14 = puVar14 + -0x10;
    unaff_RDI = unaff_RDI + 4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7cdd FUN_14d7a7cdd body=1 status=ok
// SIG undefined FUN_14d7a7cdd(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a7d11) overlaps instruction at (ram,0x00014d7a7d0f)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a7d3c) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7da0) */

void FUN_14d7a7cdd(longlong param_1,undefined2 param_2)

{
  int *piVar1;
  char *pcVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  uint uVar8;
  char cVar9;
  longlong lVar10;
  uint *in_RAX;
  longlong unaff_RBX;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *unaff_RBP;
  undefined8 unaff_RSI;
  undefined1 *puVar13;
  int unaff_EDI;
  char *pcVar14;
  longlong unaff_R15;
  bool bVar15;
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
  ulonglong in_MM6;
  undefined2 in_ST6h;
  unkbyte10 in_ST7;
  undefined1 *unaff_retaddr;
  int iVar6;
  int iVar7;
  
  puVar13 = (undefined1 *)
            CONCAT71((int7)((ulonglong)unaff_RSI >> 8),
                     (byte)unaff_RSI | *(byte *)(unaff_R15 + 0x53195946));
  bVar15 = SBORROW4(unaff_EDI,*(int *)(puVar13 + -0x14));
  uVar8 = unaff_EDI - *(int *)(puVar13 + -0x14);
  pcVar14 = (char *)(ulonglong)uVar8;
  plVar11 = (longlong *)register0x00000020;
  if (((int)uVar8 < 0) || (plVar11 = (longlong *)unaff_retaddr, param_1 != 0)) {
    while( true ) {
      lVar10 = *plVar11;
      *in_RAX = *in_RAX & (uint)param_1;
      pcVar2 = (char *)((longlong)unaff_RBP * 2 + 0x634dcdcf);
      *pcVar2 = *pcVar2 + (char)param_2;
      *(undefined2 *)pcVar14 = in_FPUControlWord;
      *(undefined2 *)(pcVar14 + 4) = in_FPUStatusWord;
      *(undefined2 *)(pcVar14 + 8) = in_FPUTagWord;
      *(undefined8 *)(pcVar14 + 0x14) = in_FPUDataPointer;
      *(undefined8 *)(pcVar14 + 0xc) = in_FPUInstructionPointer;
      *(undefined2 *)(pcVar14 + 0x12) = in_FPULastInstructionOpcode;
      *(unkbyte10 *)(pcVar14 + 0x1c) = in_ST0;
      *(unkbyte10 *)(pcVar14 + 0x26) = in_ST1;
      *(unkbyte10 *)(pcVar14 + 0x30) = in_ST2;
      *(unkbyte10 *)(pcVar14 + 0x3a) = in_ST3;
      *(unkbyte10 *)(pcVar14 + 0x44) = in_ST4;
      *(unkbyte10 *)(pcVar14 + 0x4e) = in_ST5;
      *(unkuint10 *)(pcVar14 + 0x58) = CONCAT28(in_ST6h,in_MM6);
      *(unkbyte10 *)(pcVar14 + 0x62) = in_ST7;
      in_FPUControlWord = 0x37f;
      in_FPUStatusWord = 0;
      in_FPUTagWord = 0xffff;
      in_FPUDataPointer = 0;
      in_FPUInstructionPointer = 0;
      in_FPULastInstructionOpcode = 0;
      param_1 = 0x2550f000;
      in_MM6 = in_MM6 >> *(longlong *)((longlong)in_RAX + 0x5c5be3a2);
      DAT_8786520f = DAT_8786520f + (char)in_RAX;
      bVar15 = DAT_8786520f == '\0';
      *(undefined8 *)(lVar10 + -8) = *(undefined8 *)((longlong)in_RAX + 0x7b);
      uVar3 = in(param_2);
      *(undefined4 *)pcVar14 = uVar3;
      if (bVar15) break;
      param_2 = 0xfb97;
      *(undefined8 *)(lVar10 + -0x10) = 0x3570fb97;
      plVar11 = (longlong *)(lVar10 + -0x10);
      pcVar14 = pcVar14 + 4;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar14 = (char)in_RAX;
  piVar1 = (int *)(unaff_RBX + -0x455c1900);
  iVar5 = *piVar1;
  *piVar1 = *piVar1 << 0xe;
  iVar6 = *piVar1;
  iVar7 = *piVar1;
  out(*puVar13,param_2);
  if (bVar15 == iVar6 < 0) {
    *(longlong *)(((ulonglong)in_RAX & 0xffffffff) - 8) = unaff_RBX;
    lVar10 = *(longlong *)(((ulonglong)in_RAX & 0xffffffff) - 8);
    out(puVar13[1],param_2);
    if (iVar7 != 0 && bVar15 == iVar6 < 0) {
      *(undefined8 **)(lVar10 + -8) = unaff_RBP;
      bVar4 = puVar13[2];
      puVar12 = (undefined8 *)(lVar10 + -0x10);
      *(undefined8 **)(lVar10 + -0x10) = unaff_RBP;
      cVar9 = '\x1a';
      do {
        unaff_RBP = unaff_RBP + -1;
        puVar12 = puVar12 + -1;
        *puVar12 = *unaff_RBP;
        cVar9 = cVar9 + -1;
      } while ('\0' < cVar9);
      *(longlong *)(lVar10 + -0xe8) = lVar10 + -0x10;
      uRam8c90de9321f2f356 =
           (int)CONCAT71((int7)((ulonglong)&stack0x00000000 >> 8),
                         -(iVar5 << 0xd < 0) - 0x40U & bVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uRam00000000ed8e090f = 8;
    uRam0e51d3c62b620034 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (iVar7 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7d24 FUN_14d7a7d24 body=14 status=ok
// SIG undefined FUN_14d7a7d24(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7d24(void)

{
  char *pcVar1;
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x27d5890e);
  *pcVar1 = *pcVar1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7d3a FUN_14d7a7d3a body=3 status=ok
// SIG undefined FUN_14d7a7d3a(void)

void FUN_14d7a7d3a(void)

{
  in(0xde);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a7d43 FUN_14d7a7d43 body=9 status=ok
// SIG undefined FUN_14d7a7d43(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7d43(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7d50 FUN_14d7a7d50 body=3 status=ok
// SIG undefined FUN_14d7a7d50(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7d50(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7d54 FUN_14d7a7d54 body=5 status=ok
// SIG undefined FUN_14d7a7d54(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7d54(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7d64 FUN_14d7a7d64 body=2 status=ok
// SIG undefined FUN_14d7a7d64(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7d64(char param_1)

{
  char *pcVar1;
  longlong in_RAX;
  char cVar2;
  longlong unaff_RBX;
  longlong unaff_RBP;
  char cVar3;
  
  pcVar1 = (char *)(unaff_RBX + in_RAX * 4);
  *pcVar1 = *pcVar1 + param_1;
  cVar3 = (char)((ulonglong)unaff_RBX >> 8);
  cVar2 = cVar3 + *(char *)(unaff_RBP + 0x144ceaa0);
  if (cVar2 != '\0' && SCARRY1(cVar3,*(char *)(unaff_RBP + 0x144ceaa0)) == cVar2 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7d6c FUN_14d7a7d6c body=2 status=ok
// SIG undefined FUN_14d7a7d6c(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a7d93) overlaps instruction at (ram,0x00014d7a7d92)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a7d3c) */

void FUN_14d7a7d6c(longlong param_1,undefined2 param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  uint in_EAX;
  longlong unaff_RBX;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  byte in_OF;
  
  *unaff_RDI = (char)in_EAX;
  uVar9 = (ulonglong)in_EAX;
  piVar1 = (int *)(unaff_RBX + -0x455c1900);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 << 0xe;
  bVar6 = (bool)(in_OF & 1);
  bVar4 = *piVar1 < 0;
  bVar5 = *piVar1 != 0;
  out(*unaff_RSI,param_2);
  if (bVar6 == bVar4) {
    *(longlong *)(uVar9 - 8) = unaff_RBX;
    lVar8 = *(longlong *)(uVar9 - 8);
    out(unaff_RSI[1],param_2);
    if (bVar5 && bVar6 == bVar4) {
      *(undefined8 **)(lVar8 + -8) = unaff_RBP;
      bVar2 = unaff_RSI[2];
      puVar10 = (undefined8 *)(lVar8 + -0x10);
      *(undefined8 **)(lVar8 + -0x10) = unaff_RBP;
      cVar7 = '\x1a';
      do {
        unaff_RBP = unaff_RBP + -1;
        puVar10 = puVar10 + -1;
        *puVar10 = *unaff_RBP;
        cVar7 = cVar7 + -1;
      } while ('\0' < cVar7);
      *(longlong *)(lVar8 + -0xe8) = lVar8 + -0x10;
      uRam8c90de9321f2f356 =
           (int)CONCAT71((int7)((ulonglong)&stack0x00000000 >> 8),
                         -(iVar3 << 0xd < 0) - 0x40U & bVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)(param_1 + 0x703d005a) = (char)((ulonglong)param_1 >> 8);
    uRam0e51d3c62b620034 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 + -1 == 0 || bVar5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar5 && bVar6 == bVar4) {
    *(longlong *)(uVar9 - 8) = param_1 + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7d71 FUN_14d7a7d71 body=7 status=ok
// SIG undefined FUN_14d7a7d71(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7d71(void)

{
  undefined4 in_EAX;
  
  out(0xa3,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7d79 FUN_14d7a7d79 body=3 status=ok
// SIG undefined FUN_14d7a7d79(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a7d93) overlaps instruction at (ram,0x00014d7a7d92)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a7d3c) */

void FUN_14d7a7d79(longlong param_1,undefined2 param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 in_EAX;
  longlong unaff_RBX;
  undefined8 *puVar3;
  undefined8 *unaff_RBP;
  undefined1 *unaff_RSI;
  char in_CF;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  out(*unaff_RSI,param_2);
  if (!in_ZF && in_OF == in_SF) {
    *(undefined8 **)(unaff_RBX + -8) = unaff_RBP;
    bVar1 = unaff_RSI[1];
    puVar3 = (undefined8 *)(unaff_RBX + -0x10);
    *(undefined8 **)(unaff_RBX + -0x10) = unaff_RBP;
    cVar2 = '\x1a';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar3 = puVar3 + -1;
      *puVar3 = *unaff_RBP;
      cVar2 = cVar2 + -1;
    } while ('\0' < cVar2);
    *(longlong *)(unaff_RBX + -0xe8) = unaff_RBX + -0x10;
    uRam8c90de9321f2f356 =
         CONCAT31((int3)((uint)in_EAX >> 8),((char)in_EAX + -0x40) - in_CF & bVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(param_1 + 0x703d005a) = (char)((ulonglong)param_1 >> 8);
  cRam0e51d3c62b620034 = (char)in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7d7e FUN_14d7a7d7e body=11 status=ok
// SIG undefined FUN_14d7a7d7e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a7d93) overlaps instruction at (ram,0x00014d7a7d92)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a7d3c) */

void FUN_14d7a7d7e(longlong param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_EAX;
  undefined8 *puVar3;
  undefined8 *unaff_RBP;
  byte *unaff_RSI;
  char in_CF;
  bool in_ZF;
  char in_SF;
  char in_OF;
  undefined8 uStack_18;
  
  if (!in_ZF && in_OF == in_SF) {
    bVar1 = *unaff_RSI;
    puVar3 = (undefined8 *)&stack0xfffffffffffffff0;
    cVar2 = '\x1a';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar3 = puVar3 + -1;
      *puVar3 = *unaff_RBP;
      cVar2 = cVar2 + -1;
    } while ('\0' < cVar2);
    uRam8c90de9321f2f356 =
         CONCAT31((int3)((uint)in_EAX >> 8),((char)in_EAX + -0x40) - in_CF & bVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(param_1 + 0x703d005a) = (char)((ulonglong)param_1 >> 8);
  cRam0e51d3c62b620034 = (char)in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7d8a FUN_14d7a7d8a body=1 status=ok
// SIG undefined FUN_14d7a7d8a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7d8a(longlong param_1,uint param_2)

{
  undefined1 in_AL;
  longlong unaff_RBX;
  
  *(uint *)(unaff_RBX + -0x75736f22) = *(uint *)(unaff_RBX + -0x75736f22) & param_2;
  *(char *)(param_1 + 0x703d005a) = (char)((ulonglong)param_1 >> 8);
  uRam0e51d3c62b620034 = in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7d8e FUN_14d7a7d8e body=1 status=ok
// SIG undefined FUN_14d7a7d8e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7d8e(void)

{
  undefined4 in_EAX;
  
                    /* WARNING: Read-only address (ram,0x00014daf200c) is written */
  cRam000000014daf200c = (char)((uint)in_EAX >> 8) + '\\';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7d92 FUN_14d7a7d92 body=10 status=ok
// SIG undefined FUN_14d7a7d92(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7d92(void)

{
  bool in_OF;
  
  if (!in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a7da0 FUN_14d7a7da0 body=1 status=ok
// SIG undefined FUN_14d7a7da0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7da0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7da4 FUN_14d7a7da4 body=6 status=ok
// SIG undefined FUN_14d7a7da4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7da4(longlong param_1)

{
  byte in_AL;
  bool bVar1;
  
  bVar1 = (in_AL & 0x26) == 0;
  if (param_1 == 1 || !bVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7dad FUN_14d7a7dad body=2 status=ok
// SIG undefined FUN_14d7a7dad(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7dad(void)

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



// FUNCTION 14d7a7db1 FUN_14d7a7db1 body=3 status=ok
// SIG undefined FUN_14d7a7db1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7db1(void)

{
  char *unaff_RBX;
  
  *unaff_RBX = *unaff_RBX + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7dc3 FUN_14d7a7dc3 body=2 status=ok
// SIG undefined FUN_14d7a7dc3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7dc3(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RBP;
  bool in_ZF;
  
  if (!in_ZF) {
    *(char *)(unaff_RBP + -3) = *(char *)(unaff_RBP + -3) + (char)((ulonglong)param_2 >> 8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7dc8 FUN_14d7a7dc8 body=47 status=ok
// SIG undefined FUN_14d7a7dc8(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a7dde) overlaps instruction at (ram,0x00014d7a7ddd)
    */

void FUN_14d7a7dc8(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char cVar6;
  undefined7 uVar7;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *unaff_RSI;
  
  uVar7 = (undefined7)((ulonglong)param_2 >> 8);
  cVar6 = (char)param_2;
  uVar2 = *(uint *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x8ffe88a);
  uVar4 = in(0x9d);
  pcVar1 = unaff_RSI + 1;
  iVar3 = CONCAT31((int3)((uint)uVar4 >> 8),*unaff_RSI);
  uVar5 = iVar3 + 0x2405927d;
  if (SCARRY4(uVar5,0x2c99f424)) {
    *pcVar1 = (*pcVar1 - cVar6) - (0xd3660bdb < uVar5);
    if (param_1 + -1 != 0) {
      *(char **)((ulonglong)uVar2 - 8) = pcVar1;
      cVar6 = cVar6 + (char)((uint)(iVar3 + 0x509f86a1) >> 8);
    }
    unaff_RSI[0x65f5a069] = unaff_RSI[0x65f5a069] - cVar6;
    *(byte *)CONCAT71(uVar7,cVar6) = *(byte *)CONCAT71(uVar7,cVar6) | (byte)(param_1 + -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Read-only address (ram,0x00014daf200c) is written */
  cRam000000014daf200c = unaff_BH + '\\';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7dfb FUN_14d7a7dfb body=6 status=ok
// SIG undefined FUN_14d7a7dfb(void)

/* WARNING: Control flow encountered bad instruction data */

ulonglong FUN_14d7a7dfb(undefined8 param_1,undefined8 param_2)

{
  int in_EAX;
  longlong unaff_RBX;
  undefined1 *unaff_RDI;
  char in_CF;
  bool in_PF;
  undefined1 auStack_8 [8];
  
  *unaff_RDI = (char)in_EAX;
  if (!in_PF) {
    *(char *)(unaff_RBX + -0x46) = *(char *)(unaff_RBX + -0x46) - (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  DAT_27633377cc007777 = (char)in_EAX;
  out(0x5b,(in_EAX + 0x4c48e298) - (uint)(in_CF == '\0'));
  return (ulonglong)auStack_8 & 0xffffffff;
}



// FUNCTION 14d7a7e03 FUN_14d7a7e03 body=5 status=ok
// SIG undefined FUN_14d7a7e03(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7e03(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7e0f FUN_14d7a7e0f body=6 status=ok
// SIG undefined FUN_14d7a7e0f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7e0f(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7e17 FUN_14d7a7e17 body=43 status=ok
// SIG undefined FUN_14d7a7e17(void)

ulonglong FUN_14d7a7e17(void)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong unaff_RBP;
  
  uVar4 = FUN_15730ee8a();
  bVar3 = (byte)((ulonglong)uVar4 >> 8);
  DAT_27633377cc007777 = in(0xe0);
  pbVar1 = (byte *)(unaff_RBP + 0x78d5d941);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar3;
  out(0x5b,((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),DAT_27633377cc007777) + 0x4c48e298) -
           (uint)CARRY1(bVar2,bVar3));
  return (ulonglong)&stack0x00000000 & 0xffffffff;
}



// FUNCTION 14d7a7e45 FUN_14d7a7e45 body=3 status=ok
// SIG undefined FUN_14d7a7e45(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7e45(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7e49 FUN_14d7a7e49 body=3 status=ok
// SIG undefined FUN_14d7a7e49(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7e49(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RBX;
  bool in_ZF;
  
  if (!in_ZF) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(char *)(unaff_RBX + -0x46) = *(char *)(unaff_RBX + -0x46) - (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7e4e FUN_14d7a7e4e body=8 status=ok
// SIG undefined FUN_14d7a7e4e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7e4e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7e60 FUN_14d7a7e60 body=20 status=ok
// SIG undefined FUN_14d7a7e60(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a7e85) overlaps instruction at (ram,0x00014d7a7e7f)
    */

int FUN_14d7a7e60(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  char *pcVar6;
  uint *puVar7;
  char unaff_BL;
  undefined7 unaff_00000019;
  uint uVar8;
  char *unaff_RDI;
  undefined2 in_ES;
  char in_CF;
  undefined1 in_PF;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined1 *puStackX_8;
  undefined1 auStackX_10 [24];
  uint uVar2;
  uint uVar9;
  
  pcVar5 = (code *)swi(0xe1);
  pcVar6 = (char *)(*pcVar5)();
  puVar7 = (uint *)CONCAT71((int7)((ulonglong)param_2 >> 8),0x32);
  if ((bool)in_PF) {
    *puStackX_8 = (char)pcVar6;
    uVar3 = (uint)(in_CF == '\0');
    uVar1 = *puVar7;
    uVar9 = (uint)auStackX_10;
    uVar2 = *puVar7;
    uVar4 = uVar9 - *puVar7;
    uVar8 = uVar4 - uVar3;
    *(undefined2 *)pcVar6 = in_ES;
    *(undefined1 *)(param_1 + (longlong)(puStackX_8 + 1) * 2) = 0xb6;
    *(ulonglong *)((ulonglong)uVar8 - 8) =
         (ulonglong)(in_NT & 1) * 0x4000 |
         (ulonglong)(SBORROW4(uVar9,uVar2) != SBORROW4(uVar4,uVar3)) * 0x800 |
         (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
         (ulonglong)((int)uVar8 < 0) * 0x80 | (ulonglong)(uVar8 == 0) * 0x40 |
         (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar8 & 0xff) & 1U) == 0) * 4 |
         (ulonglong)(uVar9 < uVar1 || uVar4 < uVar3) | (ulonglong)(in_ID & 1) * 0x200000 |
         (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
         (ulonglong)(in_AC & 1) * 0x40000;
    *pcVar6 = *pcVar6 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_RDI + unaff_BL;
  return (int)CONCAT71((int7)((ulonglong)pcVar6 >> 8),
                       *(undefined1 *)
                        (CONCAT71(unaff_00000019,unaff_BL) + ((ulonglong)pcVar6 & 0xff))) +
         0x7f9a9e1e;
}



// FUNCTION 14d7a7e7f FUN_14d7a7e7f body=9 status=ok
// SIG undefined FUN_14d7a7e7f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7e7f(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7e94 FUN_14d7a7e94 body=10 status=ok
// SIG undefined FUN_14d7a7e94(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7e94(void)

{
  longlong unaff_RBP;
  char *unaff_RSI;
  undefined8 unaff_retaddr;
  
  *unaff_RSI = *unaff_RSI + '5';
  LOCK();
  *(char *)(unaff_RBP + 0x7c4dcb00) = (char)((ulonglong)unaff_retaddr >> 8);
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7ea5 FUN_14d7a7ea5 body=3 status=ok
// SIG undefined FUN_14d7a7ea5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7ea5(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7eb2 FUN_14d7a7eb2 body=2 status=ok
// SIG undefined FUN_14d7a7eb2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7eb2(byte param_1,undefined2 param_2)

{
  uint uVar1;
  char unaff_BL;
  longlong unaff_RBP;
  longlong unaff_RSI;
  uint *unaff_RDI;
  undefined2 in_FPUControlWord;
  
  uVar1 = in(param_2);
  *(undefined2 *)((ulonglong)uVar1 - 0x80) = in_FPUControlWord;
  *(char *)(unaff_RBP + -0x6d) = *(char *)(unaff_RBP + -0x6d) + unaff_BL + '\b';
  *unaff_RDI = *unaff_RDI >> (param_1 & 0x1f);
  *(char *)(unaff_RSI + -0x7bf5204d) = *(char *)(unaff_RSI + -0x7bf5204d) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7eb6 FUN_14d7a7eb6 body=29 status=ok
// SIG undefined FUN_14d7a7eb6(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a7ec4) overlaps instruction at (ram,0x00014d7a7ec2)
    */

void FUN_14d7a7eb6(longlong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  uint *unaff_RDI;
  undefined8 unaff_R12;
  longlong unaff_retaddr;
  undefined1 auStackX_8 [32];
  
  DAT_1c67aeb6b = DAT_1c67aeb6b | 0x29;
  uVar1 = in_RAX;
  if (param_1 == 0) {
    register0x00000020 = (BADSPACEBASE *)auStackX_8;
    uVar1 = unaff_RBX & 0xffffffff;
    unaff_RBX = in_RAX & 0xffffffff;
    unaff_RBP = unaff_retaddr;
  }
  *(ulonglong *)((longlong)register0x00000020 + -8) = uVar1;
  *(undefined8 *)((longlong)register0x00000020 + -0x10) = unaff_R12;
  LOCK();
  *(char *)(unaff_RBP + -0x6d) = *(char *)(unaff_RBP + -0x6d) + (char)unaff_RBX;
  UNLOCK();
  *unaff_RDI = *unaff_RDI >> ((byte)param_1 & 0x1f);
  *(char *)(unaff_RSI + -0x7bf5204d) = *(char *)(unaff_RSI + -0x7bf5204d) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7edd FUN_14d7a7edd body=2 status=ok
// SIG undefined FUN_14d7a7edd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7edd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7eee FUN_14d7a7eee body=13 status=ok
// SIG undefined FUN_14d7a7eee(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7eee(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  func_0x00010e23e38d();
  out(*unaff_RSI,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7eff FUN_14d7a7eff body=46 status=ok
// SIG undefined FUN_14d7a7eff(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a7f88) overlaps instruction at (ram,0x00014d7a7f86)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a7f12) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7f75) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7f1e) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7f20) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7f22) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7f26) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7f30) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7f5f) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7f6d) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7efd) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7f03) */

void FUN_14d7a7eff(byte param_1,uint param_2)

{
  int *piVar1;
  byte bVar2;
  code *pcVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong unaff_RDI;
  undefined1 in_CF;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  float10 in_ST0;
  
  bVar2 = *(byte *)(unaff_RDI + 0x2c346ffb);
  *(byte *)(unaff_RDI + 0x2c346ffb) = (byte)(CONCAT11(in_CF,bVar2) >> 2) | bVar2 << 7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  DAT_1277aae5c = DAT_1277aae5c + '\x01';
  *(double *)((in_RAX | 0xde) + 0x7d16004a) = (double)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  uVar5 = (ulonglong)param_2;
  uVar4 = (ulonglong)uRamfd38d80715d9bb43;
  *(undefined2 *)(uVar5 + 0x1353daa8) = in_FPUControlWord;
  *(undefined2 *)(uVar5 + 0x1353daac) = in_FPUStatusWord;
  *(undefined2 *)(uVar5 + 0x1353dab0) = in_FPUTagWord;
  *(undefined8 *)(uVar5 + 0x1353dabc) = in_FPUDataPointer;
  *(undefined8 *)(uVar5 + 0x1353dab4) = 0x14d7a7f80;
  *(undefined2 *)(uVar5 + 0x1353daba) = in_FPULastInstructionOpcode;
  piVar1 = (int *)(uVar4 * 2 + -0x4069328c);
  *piVar1 = *piVar1 - param_2;
  pcVar3 = (code *)swi(1);
  (*pcVar3)(param_1 >> 1,(uint)(in_RAX | 0xde) | 0x9a);
  return;
}



// FUNCTION 14d7a7f2f FUN_14d7a7f2f body=39 status=ok
// SIG undefined FUN_14d7a7f2f(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a7f2f(undefined8 param_1,longlong param_2)

{
  longlong in_RAX;
  byte unaff_BL;
  undefined1 unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  longlong unaff_RSI;
  float10 in_ST0;
  
  *(int *)(unaff_RSI + 0x275a9a8b) =
       *(int *)(unaff_RSI + 0x275a9a8b) + CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *(byte *)(in_RAX + 0x6f26c0bd) = *(byte *)(in_RAX + 0x6f26c0bd) ^ unaff_BL;
  *(float *)(param_2 + -0x60ffb31d) = (float)in_ST0;
  out(0xf6,(int)CONCAT71(0x8e54ae,*(undefined1 *)
                                   (CONCAT44(unaff_0000001c,
                                             CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                                   7)));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7f77 FUN_14d7a7f77 body=1 status=ok
// SIG undefined FUN_14d7a7f77(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a7f77(void)

{
  undefined4 in_EAX;
  
  _DAT_1b697d16004a90dd = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7f7b FUN_14d7a7f7b body=4 status=ok
// SIG undefined FUN_14d7a7f7b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a7f7b(undefined8 param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  undefined4 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
  _DAT_1b697d16004a90dd = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7f7f FUN_14d7a7f7f body=10 status=ok
// SIG undefined FUN_14d7a7f7f(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a7f7f(void)

{
  undefined4 in_EAX;
  
  _DAT_1b697d16004a90dd = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7f8c FUN_14d7a7f8c body=7 status=ok
// SIG undefined FUN_14d7a7f8c(void)

void FUN_14d7a7f8c(byte param_1,uint param_2)

{
  int *piVar1;
  code *pcVar2;
  uint in_EAX;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  
  uVar4 = (ulonglong)param_2;
  uVar3 = (ulonglong)uRamfd38d80715d9bb43;
  *(undefined2 *)(uVar4 + 0x1353daa8) = in_FPUControlWord;
  *(undefined2 *)(uVar4 + 0x1353daac) = in_FPUStatusWord;
  *(undefined2 *)(uVar4 + 0x1353dab0) = in_FPUTagWord;
  *(undefined8 *)(uVar4 + 0x1353dabc) = in_FPUDataPointer;
  *(undefined8 *)(uVar4 + 0x1353dab4) = in_FPUInstructionPointer;
  *(undefined2 *)(uVar4 + 0x1353daba) = in_FPULastInstructionOpcode;
  piVar1 = (int *)(uVar3 * 2 + -0x4069328c);
  *piVar1 = *piVar1 - param_2;
  pcVar2 = (code *)swi(1);
  (*pcVar2)(param_1 >> 1,in_EAX | 0x9a);
  return;
}



// FUNCTION 14d7a7f94 FUN_14d7a7f94 body=26 status=ok
// SIG undefined FUN_14d7a7f94(void)

void FUN_14d7a7f94(void)

{
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  longlong in_RAX;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  
  lVar3 = CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  *(undefined2 *)(lVar3 + 0x1353daa8) = in_FPUControlWord;
  *(undefined2 *)(lVar3 + 0x1353daac) = in_FPUStatusWord;
  *(undefined2 *)(lVar3 + 0x1353dab0) = in_FPUTagWord;
  *(undefined8 *)(lVar3 + 0x1353dabc) = in_FPUDataPointer;
  *(undefined8 *)(lVar3 + 0x1353dab4) = in_FPUInstructionPointer;
  *(undefined2 *)(lVar3 + 0x1353daba) = in_FPULastInstructionOpcode;
  piVar1 = (int *)(in_RAX * 2 + -0x4069328c);
  *piVar1 = *piVar1 - CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  pcVar2 = (code *)swi(1);
  (*pcVar2)();
  return;
}



// FUNCTION 14d7a7fb6 FUN_14d7a7fb6 body=4 status=ok
// SIG undefined FUN_14d7a7fb6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7fb6(byte param_1)

{
  char in_AL;
  undefined2 *unaff_RSI;
  undefined4 unaff_EDI;
  undefined4 unaff_0000003c;
  undefined2 in_ES;
  char in_CF;
  
  *(byte *)CONCAT44(unaff_0000003c,unaff_EDI) =
       *(byte *)CONCAT44(unaff_0000003c,unaff_EDI) >> (param_1 & 7) |
       *(char *)CONCAT44(unaff_0000003c,unaff_EDI) << 8 - (param_1 & 7);
  *unaff_RSI = in_ES;
  *(undefined8 *)(CONCAT44(unaff_0000003c,unaff_EDI) + -8) = 0;
  bRama323d1cb6500b5b5 = (in_AL + '\x1e') - in_CF & (byte)unaff_EDI;
  in(0x3c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7fba FUN_14d7a7fba body=6 status=ok
// SIG undefined FUN_14d7a7fba(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7fba(byte param_1)

{
  byte in_AL;
  undefined2 *unaff_RSI;
  undefined4 unaff_EDI;
  undefined4 unaff_0000003c;
  undefined2 in_ES;
  longlong unaff_retaddr;
  
  *(byte *)CONCAT44(unaff_0000003c,unaff_EDI) =
       *(byte *)CONCAT44(unaff_0000003c,unaff_EDI) >> (param_1 & 7) |
       *(char *)CONCAT44(unaff_0000003c,unaff_EDI) << 8 - (param_1 & 7);
  *unaff_RSI = in_ES;
  *(undefined8 *)(unaff_retaddr + -8) = 0;
  bRama323d1cb6500b5b5 = in_AL & (byte)unaff_EDI;
  in(0x3c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7fc2 FUN_14d7a7fc2 body=2 status=ok
// SIG undefined FUN_14d7a7fc2(void)

void FUN_14d7a7fc2(void)

{
  return;
}



// FUNCTION 14d7a7fc6 FUN_14d7a7fc6 body=7 status=ok
// SIG undefined FUN_14d7a7fc6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7fc6(void)

{
  undefined1 in_AL;
  longlong unaff_retaddr;
  
  *(undefined8 *)(unaff_retaddr + -8) = 0;
  uRama323d1cb6500b5b5 = in_AL;
  in(0x3c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7fe5 FUN_14d7a7fe5 body=5 status=ok
// SIG undefined FUN_14d7a7fe5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7fe5(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7ff2 FUN_14d7a7ff2 body=2 status=ok
// SIG undefined FUN_14d7a7ff2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7ff2(void)

{
  in(0x42);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a7ff6 FUN_14d7a7ff6 body=2 status=ok
// SIG undefined FUN_14d7a7ff6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a7ff6(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8008 FUN_14d7a8008 body=4 status=ok
// SIG undefined FUN_14d7a8008(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7a807f) */

void FUN_14d7a8008(undefined4 *param_1,short param_2)

{
  longlong unaff_RSI;
  float10 in_ST0;
  longlong unaff_retaddr;
  
  if ((POPCOUNT((char)param_1 + *(char *)(unaff_RSI + 0x40d00f73)) & 1U) != 0) {
    out(param_2 - (short)*param_1,(int)&stack0x00000000);
    *(longlong *)(unaff_retaddr + 0x13) = (longlong)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a800c FUN_14d7a800c body=17 status=ok
// SIG undefined FUN_14d7a800c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a800c(undefined8 param_1,undefined2 param_2)

{
  char cVar1;
  code *pcVar2;
  char cVar3;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  float10 in_ST0;
  undefined8 uStack_8;
  
  cVar3 = (char)param_1 + *(char *)(unaff_RSI + 0x40d00f73);
  uStack_8 = CONCAT71((int7)((ulonglong)param_1 >> 8),cVar3);
  if ((POPCOUNT(cVar3) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(param_2,(int)&uStack_8);
  *(longlong *)(unaff_RBX + 0x13) = (longlong)in_ST0;
  cVar1 = (char)((ulonglong)&uStack_8 & 0xffffffff) + -0x26;
  if ((POPCOUNT(cVar1) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)(cVar3,CONCAT71((int7)(((ulonglong)&uStack_8 & 0xffffffff) >> 8),cVar1) *
                  (ulonglong)*(uint *)(unaff_RDI + -0x134c9800) >> 0x20);
  return;
}



// FUNCTION 14d7a801c FUN_14d7a801c body=6 status=ok
// SIG undefined FUN_14d7a801c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a801c(undefined8 param_1)

{
  code *pcVar1;
  ulonglong in_RAX;
  longlong unaff_RBX;
  longlong unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R14;
  byte in_CF;
  
  if ((POPCOUNT(unaff_RBX + *(longlong *)(unaff_R14 + unaff_R12) + (ulonglong)in_CF & 0xff) & 1U) !=
      0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)(param_1,(in_RAX & 0xffffffff) * (ulonglong)*(uint *)(unaff_RDI + -0x134c9800) >> 0x20);
  return;
}



// FUNCTION 14d7a8024 FUN_14d7a8024 body=8 status=ok
// SIG undefined FUN_14d7a8024(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8024(undefined8 param_1,longlong param_2)

{
  byte unaff_BL;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *(byte *)(param_2 + 0x72) = *(byte *)(param_2 + 0x72) ^ unaff_BL;
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a802c FUN_14d7a802c body=14 status=ok
// SIG undefined FUN_14d7a802c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a802c(void)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a803c FUN_14d7a803c body=14 status=ok
// SIG undefined FUN_14d7a803c(void)

/* WARNING: Control flow encountered bad instruction data */

char FUN_14d7a803c(char param_1)

{
  code *pcVar1;
  uint in_EAX;
  byte *pbVar2;
  byte unaff_BH;
  uint *unaff_RDI;
  
  if (*unaff_RDI <= in_EAX) {
    pbVar2 = (byte *)(ulonglong)(uint)((int)in_EAX >> 0x1f);
    pcVar1 = (code *)swi(0x7d);
    (*pcVar1)();
    *pbVar2 = *pbVar2 | unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return ((char)in_EAX - param_1) + -1;
}



// FUNCTION 14d7a804d FUN_14d7a804d body=10 status=ok
// SIG undefined FUN_14d7a804d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a804d(undefined8 param_1,char *param_2)

{
  *param_2 = *param_2 + '\x01';
  in((short)param_2);
  *(int *)(param_2 + -0x53) = *(int *)(param_2 + -0x53) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8059 FUN_14d7a8059 body=14 status=ok
// SIG undefined FUN_14d7a8059(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8059(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a806e FUN_14d7a806e body=11 status=ok
// SIG undefined FUN_14d7a806e(void)

int FUN_14d7a806e(longlong param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  int unaff_EBX;
  int unaff_EBP;
  uint *unaff_RSI;
  
  uVar2 = (ulonglong)*unaff_RSI;
  *(uint *)(ulonglong)(uint)(unaff_EBX + unaff_EBP) =
       *(uint *)(ulonglong)(uint)(unaff_EBX + unaff_EBP) ^ (uint)&stack0xfffffffffffffff8;
  puVar1 = unaff_RSI + 1;
  for (; param_1 != 0; param_1 = param_1 + -1) {
    uVar2 = CONCAT71((int7)(uVar2 >> 8),(char)*puVar1);
    puVar1 = (uint *)((longlong)puVar1 + 1);
  }
  return (int)uVar2 + 0x3cc2cc9f;
}



// FUNCTION 14d7a807a FUN_14d7a807a body=8 status=ok
// SIG undefined FUN_14d7a807a(void)

int FUN_14d7a807a(longlong param_1)

{
  undefined8 in_RAX;
  undefined1 *unaff_RSI;
  
  for (; param_1 != 0; param_1 = param_1 + -1) {
    in_RAX = CONCAT71((int7)((ulonglong)in_RAX >> 8),*unaff_RSI);
    unaff_RSI = unaff_RSI + 1;
  }
  return (int)in_RAX + 0x3cc2cc9f;
}



// FUNCTION 14d7a8082 FUN_14d7a8082 body=9 status=ok
// SIG undefined FUN_14d7a8082(void)

void FUN_14d7a8082(undefined8 param_1,undefined2 param_2)

{
  char *pcVar1;
  code *pcVar2;
  char in_AL;
  undefined7 in_register_00000001;
  
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL + -9) + -0x4d);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  in(param_2);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



// FUNCTION 14d7a8093 FUN_14d7a8093 body=8 status=ok
// SIG undefined FUN_14d7a8093(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8093(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  longlong unaff_RBP;
  
  pbVar1 = (byte *)(unaff_RBP + -0x7d2bb4f5 + param_2 * 4);
  *pbVar1 = *pbVar1 | 0x2c;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a809f FUN_14d7a809f body=3 status=ok
// SIG undefined FUN_14d7a809f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a809f(void)

{
  undefined1 uVar1;
  undefined4 in_EAX;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = (char)in_EAX;
  uVar1 = in(0x5a);
  out(0xc1,CONCAT31((int3)((uint)in_EAX >> 8),uVar1));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a80a3 FUN_14d7a80a3 body=3 status=ok
// SIG undefined FUN_14d7a80a3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a80a3(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a80ac FUN_14d7a80ac body=28 status=ok
// SIG undefined FUN_14d7a80ac(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a80ac(undefined8 param_1)

{
  byte *pbVar1;
  undefined1 in_AL;
  char extraout_AL;
  byte bVar2;
  undefined1 extraout_AH;
  undefined6 extraout_var;
  undefined1 uVar3;
  undefined7 uVar4;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  char cVar5;
  undefined8 uStackX_8;
  
  uVar4 = (undefined7)((ulonglong)param_1 >> 8);
  uVar3 = (undefined1)param_1;
  cVar5 = (uStackX_8 & 1) != 0;
  if ((uStackX_8 & 4) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (((uStackX_8 & 0x800) != 0) != ((uStackX_8 & 0x80) != 0)) {
    func_0x000141d0bfa7();
    bVar2 = (extraout_AL - *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) - cVar5;
    pbVar1 = (byte *)(CONCAT71(uVar4,uVar3) + -0x33);
    *pbVar1 = *pbVar1 << 1 | (char)*pbVar1 < '\0';
    if (*(byte *)CONCAT62(extraout_var,CONCAT11(extraout_AH,bVar2)) < bVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(0x37,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a80bd FUN_14d7a80bd body=12 status=ok
// SIG undefined FUN_14d7a80bd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a80bd(longlong param_1)

{
  byte *pbVar1;
  char in_AL;
  byte bVar2;
  undefined7 in_register_00000001;
  char *unaff_RBX;
  char in_CF;
  
  bVar2 = (in_AL - *unaff_RBX) - in_CF;
  pbVar1 = (byte *)(param_1 + -0x33);
  *pbVar1 = *pbVar1 << 1 | (char)*pbVar1 < '\0';
  if (*(byte *)CONCAT71(in_register_00000001,bVar2) < bVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8113 FUN_14d7a8113 body=2 status=ok
// SIG undefined FUN_14d7a8113(void)

void FUN_14d7a8113(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a8118 FUN_14d7a8118 body=6 status=ok
// SIG undefined FUN_14d7a8118(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8118(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a812d FUN_14d7a812d body=37 status=ok
// SIG undefined FUN_14d7a812d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a812d(longlong param_1)

{
  longlong in_RAX;
  longlong *unaff_RSI;
  char *unaff_RDI;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (!in_ZF && in_OF == in_SF) {
    *unaff_RDI = *unaff_RDI + (char)param_1;
    out(0xc,(char)in_RAX);
    *unaff_RSI = *unaff_RSI - param_1;
    *(char *)((longlong)unaff_RSI + -0x49) =
         *(char *)((longlong)unaff_RSI + -0x49) + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 + -1 == 0 || in_ZF != false) {
    *(char *)(in_RAX + 0x1351a3ef) =
         *(char *)(in_RAX + 0x1351a3ef) + (char)((ulonglong)(param_1 + -1) >> 8);
    unaff_RDI[-0x68] = unaff_RDI[-0x68] + (char)*(undefined4 *)(param_1 + -0x71) * -0x70;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8157 FUN_14d7a8157 body=2 status=ok
// SIG undefined FUN_14d7a8157(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8157(undefined1 param_1,char *param_2)

{
  byte unaff_BH;
  undefined1 *unaff_RSI;
  bool in_PF;
  
  if (in_PF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = *param_2 + (unaff_BH & unaff_RSI[-0x36]);
  LOCK();
  unaff_RSI[3] = param_1;
  UNLOCK();
  out(*unaff_RSI,(short)param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8160 FUN_14d7a8160 body=2 status=ok
// SIG undefined FUN_14d7a8160(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8160(byte param_1)

{
  longlong unaff_RSI;
  
  in(0xf5);
  *(int *)(unaff_RSI + 0x4eaa7100) = *(int *)(unaff_RSI + 0x4eaa7100) << (param_1 & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a816a FUN_14d7a816a body=4 status=ok
// SIG undefined FUN_14d7a816a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a816a(void)

{
  undefined1 in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  undefined2 in_ES;
  bool in_OF;
  
  if (in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) = in_ES;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a816e FUN_14d7a816e body=10 status=ok
// SIG undefined FUN_14d7a816e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a816e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8182 FUN_14d7a8182 body=10 status=ok
// SIG undefined FUN_14d7a8182(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8182(undefined8 param_1,char param_2)

{
  longlong unaff_RDI;
  
  *(char *)(unaff_RDI + 0x1f40824e) = *(char *)(unaff_RDI + 0x1f40824e) + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a81a2 FUN_14d7a81a2 body=8 status=ok
// SIG undefined FUN_14d7a81a2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a81a2(int param_1)

{
  longlong unaff_RBX;
  longlong unaff_RDI;
  
  if (SBORROW4(*(int *)(unaff_RDI + -0x4e + unaff_RBX * 4),param_1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a81b6 FUN_14d7a81b6 body=7 status=ok
// SIG undefined FUN_14d7a81b6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a81b6(longlong param_1,int *param_2)

{
  undefined1 uVar1;
  undefined8 in_RAX;
  ulonglong uVar2;
  longlong unaff_RBP;
  int unaff_EDI;
  float10 in_ST0;
  
  uVar1 = in((short)param_2);
  uVar2 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar1) & 0xffffffff;
  *param_2 = (int)in_ST0;
  *(char *)(unaff_RBP + -0x2a) = *(char *)(unaff_RBP + -0x2a) + (char)(uVar2 >> 8);
  in(0x9a);
  *(char *)(param_1 + 0x608ea6d5) = *(char *)(param_1 + 0x608ea6d5) + (char)uVar2;
  *(int *)(unaff_RBP + -0x9a18af9) = *(int *)(unaff_RBP + -0x9a18af9) + unaff_EDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a81c4 FUN_14d7a81c4 body=4 status=ok
// SIG undefined FUN_14d7a81c4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a81c4(longlong param_1,undefined2 param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined6 uVar4;
  char unaff_BL;
  char unaff_BH;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  int unaff_EDI;
  char in_SF;
  char in_OF;
  
  uVar4 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar3 = (char)param_1;
  if (in_OF != in_SF) {
    in(0x9a);
    *(char *)(param_1 + 0x608ea6d5) = *(char *)(param_1 + 0x608ea6d5) + unaff_BL;
    *(int *)(unaff_RBP + -0x9a18af9) = *(int *)(unaff_RBP + -0x9a18af9) + unaff_EDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*unaff_RSI,param_2);
  cVar2 = (char)((ulonglong)param_1 >> 8) - cVar3;
  cVar1 = *(char *)CONCAT62(uVar4,CONCAT11(cVar2,cVar3));
  *(char *)CONCAT62(uVar4,CONCAT11(cVar2,cVar3)) =
       *(char *)CONCAT62(uVar4,CONCAT11(cVar2,cVar3)) + unaff_BH;
  if (SCARRY1(cVar1,unaff_BH)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a81d1 FUN_14d7a81d1 body=2 status=ok
// SIG undefined FUN_14d7a81d1(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a8233) overlaps instruction at (ram,0x00014d7a8231)
    */

void FUN_14d7a81d1(byte param_1)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  byte bVar4;
  char in_AL;
  uint uVar5;
  undefined1 *puVar6;
  ulonglong *puVar7;
  longlong unaff_RDI;
  bool bVar8;
  bool in_ZF;
  
  if (in_ZF) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  while( true ) {
    puVar6 = (undefined1 *)((longlong)register0x00000020 + -8);
    *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
    in_AL = in_AL + 'R';
    puVar7 = (ulonglong *)((longlong)register0x00000020 + -0x10);
    *(undefined8 *)((longlong)register0x00000020 + -0x10) = *(undefined8 *)(unaff_RDI + -0x531eda00)
    ;
    if ((POPCOUNT(in_AL) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar8 = (*puVar7 & 1) != 0;
    bVar4 = param_1 & 0x1f;
    uVar5 = (int)puVar6 << bVar4;
    register0x00000020 = (BADSPACEBASE *)(ulonglong)uVar5;
    bVar1 = bVar4 != 0;
    bVar2 = (int)puVar6 << bVar4 - 1 < 0;
    if ((!bVar1 && bVar8 || bVar1 && bVar2) ||
        (bVar4 == 0 && (*puVar7 & 0x40) != 0 || bVar4 != 0 && uVar5 == 0)) break;
    if (!bVar1 && bVar8 || bVar1 && bVar2) {
      pcVar3 = (code *)swi(1);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a81e6 FUN_14d7a81e6 body=5 status=ok
// SIG undefined FUN_14d7a81e6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a81e6(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a81ee FUN_14d7a81ee body=6 status=ok
// SIG undefined FUN_14d7a81ee(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a81ee(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8202 FUN_14d7a8202 body=5 status=ok
// SIG undefined FUN_14d7a8202(void)

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_14d7a8202(longlong param_1)

{
  int in_EAX;
  undefined4 unaff_ESI;
  
  if (0xe6565f < in_EAX) {
    out(0x91,(char)in_EAX);
    out(0x9f,(char)in_EAX);
    out(0x91,0x96);
    return unaff_ESI;
  }
  LOCK();
  *(int *)(param_1 * 5 + 0xd8d50d) = (int)param_1;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a820b FUN_14d7a820b body=7 status=ok
// SIG undefined FUN_14d7a820b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a820b(longlong param_1)

{
  LOCK();
  *(int *)(param_1 * 5 + 0xd8d50d) = (int)param_1;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a822b FUN_14d7a822b body=3 status=ok
// SIG undefined FUN_14d7a822b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a822b(byte param_1)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  byte bVar4;
  byte in_AL;
  uint uVar5;
  undefined1 *puVar6;
  ulonglong *puVar7;
  longlong unaff_RSI;
  longlong unaff_RDI;
  bool bVar8;
  bool bVar9;
  
  bVar8 = in_AL < *(byte *)(unaff_RSI + -0x7c);
  while( true ) {
    if (bVar8) {
      pcVar3 = (code *)swi(1);
      (*pcVar3)();
      return;
    }
    puVar6 = (undefined1 *)((longlong)register0x00000020 + -8);
    *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
    in_AL = in_AL + 0x52;
    puVar7 = (ulonglong *)((longlong)register0x00000020 + -0x10);
    *(undefined8 *)((longlong)register0x00000020 + -0x10) = *(undefined8 *)(unaff_RDI + -0x531eda00)
    ;
    if ((POPCOUNT(in_AL) & 1U) == 0) break;
    bVar9 = (*puVar7 & 1) != 0;
    bVar4 = param_1 & 0x1f;
    uVar5 = (int)puVar6 << bVar4;
    register0x00000020 = (BADSPACEBASE *)(ulonglong)uVar5;
    bVar1 = bVar4 != 0;
    bVar2 = (int)puVar6 << bVar4 - 1 < 0;
    bVar8 = !bVar1 && bVar9 || bVar1 && bVar2;
    if ((!bVar1 && bVar9 || bVar1 && bVar2) ||
        (bVar4 == 0 && (*puVar7 & 0x40) != 0 || bVar4 != 0 && uVar5 == 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8230 FUN_14d7a8230 body=10 status=ok
// SIG undefined FUN_14d7a8230(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8230(byte param_1)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  byte bVar4;
  byte in_AL;
  uint uVar5;
  undefined1 *puVar6;
  ulonglong *puVar7;
  longlong unaff_RSI;
  longlong unaff_RDI;
  bool bVar8;
  bool bVar9;
  
  bVar8 = in_AL < *(byte *)(unaff_RSI + -0x7c);
  while( true ) {
    if (bVar8) {
      pcVar3 = (code *)swi(1);
      (*pcVar3)();
      return;
    }
    puVar6 = (undefined1 *)((longlong)register0x00000020 + -8);
    *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
    in_AL = in_AL + 0x52;
    puVar7 = (ulonglong *)((longlong)register0x00000020 + -0x10);
    *(undefined8 *)((longlong)register0x00000020 + -0x10) = *(undefined8 *)(unaff_RDI + -0x531eda00)
    ;
    if ((POPCOUNT(in_AL) & 1U) == 0) break;
    bVar9 = (*puVar7 & 1) != 0;
    bVar4 = param_1 & 0x1f;
    uVar5 = (int)puVar6 << bVar4;
    register0x00000020 = (BADSPACEBASE *)(ulonglong)uVar5;
    bVar1 = bVar4 != 0;
    bVar2 = (int)puVar6 << bVar4 - 1 < 0;
    bVar8 = !bVar1 && bVar9 || bVar1 && bVar2;
    if ((!bVar1 && bVar9 || bVar1 && bVar2) ||
        (bVar4 == 0 && (*puVar7 & 0x40) != 0 || bVar4 != 0 && uVar5 == 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a823d FUN_14d7a823d body=5 status=ok
// SIG undefined FUN_14d7a823d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a823d(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  byte bVar5;
  char in_AL;
  ulonglong uVar6;
  uint uVar7;
  longlong unaff_RDI;
  bool bVar9;
  undefined1 in_PF;
  char in_ZF;
  ulonglong uVar8;
  
  uVar6 = param_1 - 1;
  if (uVar6 != 0 && in_ZF != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while( true ) {
    if ((bool)in_PF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar9 = (*(ulonglong *)register0x00000020 & 1) != 0;
    bVar5 = (byte)uVar6 & 0x1f;
    uVar7 = (int)(ulonglong *)((longlong)register0x00000020 + 8) << bVar5;
    uVar8 = (ulonglong)uVar7;
    bVar2 = (uVar6 & 0x1f) != 0;
    bVar3 = (int)(ulonglong *)((longlong)register0x00000020 + 8) << bVar5 - 1 < 0;
    bVar1 = (uVar6 & 0x1f) == 0;
    if ((!bVar2 && bVar9 || bVar2 && bVar3) ||
        (bVar1 && (*(ulonglong *)register0x00000020 & 0x40) != 0 || !bVar1 && uVar7 == 0)) break;
    if (!bVar2 && bVar9 || bVar2 && bVar3) {
      pcVar4 = (code *)swi(1);
      (*pcVar4)();
      return;
    }
    *(ulonglong *)(uVar8 - 8) = uVar8;
    in_AL = in_AL + 'R';
    in_PF = (POPCOUNT(in_AL) & 1U) == 0;
    register0x00000020 = (BADSPACEBASE *)(uVar8 - 0x10);
    *(undefined8 *)(uVar8 - 0x10) = *(undefined8 *)(unaff_RDI + -0x531eda00);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8245 FUN_14d7a8245 body=61 status=ok
// SIG undefined FUN_14d7a8245(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a8276) overlaps instruction at (ram,0x00014d7a8275)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a8245(byte param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined6 uVar10;
  undefined1 unaff_BL;
  uint uVar11;
  ulonglong *puVar12;
  longlong unaff_RBP;
  byte *unaff_RSI;
  uint uVar14;
  bool bVar15;
  ulonglong uVar13;
  
  uVar10 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar9 = (undefined1)((ulonglong)param_2 >> 8);
  uVar8 = (undefined1)param_2;
  *(char *)(unaff_RBP + 0x30) = *(char *)(unaff_RBP + 0x30) + param_1;
  puVar12 = (ulonglong *)&stack0xfffffffffffffff0;
  _DAT_ddcea34bc2ec60 = (undefined4)unaff_RBP;
  LOCK();
  bVar7 = *unaff_RSI;
  *unaff_RSI = param_1;
  UNLOCK();
  func_0x00011249a2fe();
  iVar5 = _DAT_f82bd062;
  uVar14 = _DAT_f82bd062 * 0x79f9276f;
  out(CONCAT11(uVar9,uVar8),unaff_BL);
  *(char *)CONCAT62(uVar10,CONCAT11(uVar9,uVar8)) =
       *(char *)CONCAT62(uVar10,CONCAT11(uVar9,uVar8)) << 1;
  uVar6 = iVar5 * -0x57405024;
  while( true ) {
    bVar15 = (*puVar12 & 1) != 0;
    bVar4 = bVar7 & 0x1f;
    uVar11 = (int)(puVar12 + 1) << bVar4;
    uVar13 = (ulonglong)uVar11;
    bVar1 = bVar4 != 0;
    bVar2 = (int)(puVar12 + 1) << bVar4 - 1 < 0;
    if ((!bVar1 && bVar15 || bVar1 && bVar2) ||
        (bVar4 == 0 && (*puVar12 & 0x40) != 0 || bVar4 != 0 && uVar11 == 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (!bVar1 && bVar15 || bVar1 && bVar2) break;
    *(ulonglong *)(uVar13 - 8) = uVar13;
    bVar4 = (char)uVar6 + 0x52;
    uVar6 = (uint)bVar4;
    puVar12 = (ulonglong *)(uVar13 - 0x10);
    *(undefined8 *)(uVar13 - 0x10) = *(undefined8 *)((ulonglong)uVar14 - 0x531eda00);
    if ((POPCOUNT(bVar4) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  pcVar3 = (code *)swi(1);
  (*pcVar3)();
  return;
}



// FUNCTION 14d7a829a FUN_14d7a829a body=16 status=ok
// SIG undefined FUN_14d7a829a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a829a(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong unaff_RBX;
  uint uVar8;
  byte in_CF;
  bool bVar11;
  byte in_AF;
  bool bVar12;
  byte in_TF;
  byte in_IF;
  bool bVar13;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar9;
  longlong *plVar10;
  
  puVar1 = (uint *)(unaff_RBX + -0x67777d4a);
  uVar4 = (uint)in_CF;
  uVar3 = *puVar1;
  uVar9 = (uint)&stack0x00000000;
  uVar5 = uVar9 - *puVar1;
  bVar13 = SBORROW4(uVar9,*puVar1) != SBORROW4(uVar5,uVar4);
  uVar8 = uVar5 - uVar4;
  plVar10 = (longlong *)(ulonglong)uVar8;
  bVar12 = uVar8 == 0;
  bVar11 = (POPCOUNT(uVar8 & 0xff) & 1U) == 0;
  uVar7 = in((short)param_2);
  lVar6 = *plVar10;
  if (!bVar12 && bVar13 == (int)uVar8 < 0) {
    if (bVar11) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *plVar10 = param_2;
  if ((uVar9 >= uVar3 && uVar5 >= uVar4) && !bVar12) {
    plVar10[-1] = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)bVar13 * 0x800 |
                  (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
                  (ulonglong)((int)uVar8 < 0) * 0x80 | (ulonglong)bVar12 * 0x40 |
                  (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)bVar11 * 4 |
                  (ulonglong)(uVar9 < uVar3 || uVar5 < uVar4) | (ulonglong)(in_ID & 1) * 0x200000 |
                  (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
                  (ulonglong)(in_AC & 1) * 0x40000;
    piVar2 = (int *)(param_2 + -0x26 + lVar6 * 8);
    *piVar2 = *piVar2 - (int)lVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (-1 < (char)((char)uVar7 + '\n')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a82aa FUN_14d7a82aa body=2 status=ok
// SIG undefined FUN_14d7a82aa(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a82aa(void)

{
  undefined4 in_EAX;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a82ae FUN_14d7a82ae body=3 status=ok
// SIG undefined FUN_14d7a82ae(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a82ae(undefined8 param_1,undefined2 param_2)

{
  uint in_EAX;
  int *unaff_RBX;
  int unaff_ESI;
  
  out(param_2,in_EAX & 0xffffff06);
  in(0xea);
  *unaff_RBX = *unaff_RBX + unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a82b2 thunk_EXT_FUN_4a633401 body=7 status=ok
// SIG undefined thunk_EXT_FUN_4a633401(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_4a633401(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a82ba FUN_14d7a82ba body=1 status=ok
// SIG undefined FUN_14d7a82ba(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a82ba(longlong param_1)

{
  char cVar1;
  char cVar2;
  undefined4 in_EAX;
  longlong unaff_RBX;
  char *unaff_RSI;
  char *unaff_RDI;
  undefined2 in_GS;
  
  *(undefined2 *)(unaff_RBX + 0x72cada00) = in_GS;
  out(0xfd,in_EAX);
  do {
    if (param_1 == 0) {
      halt_baddata();
    }
    param_1 = param_1 + -1;
    cVar2 = *unaff_RDI;
    cVar1 = *unaff_RSI;
    unaff_RSI = unaff_RSI + 1;
    unaff_RDI = unaff_RDI + 1;
  } while (cVar1 == cVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a82bf FUN_14d7a82bf body=20 status=ok
// SIG undefined FUN_14d7a82bf(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a82bf(longlong param_1)

{
  char cVar1;
  char cVar2;
  undefined4 in_EAX;
  char *unaff_RSI;
  char *unaff_RDI;
  bool in_CF;
  
  if (in_CF) {
    *(undefined4 *)unaff_RDI = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
    if (param_1 == 0) {
      halt_baddata();
    }
    param_1 = param_1 + -1;
    cVar2 = *unaff_RDI;
    cVar1 = *unaff_RSI;
    unaff_RSI = unaff_RSI + -1;
    unaff_RDI = unaff_RDI + -1;
  } while (cVar1 == cVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a82d4 FUN_14d7a82d4 body=13 status=ok
// SIG undefined FUN_14d7a82d4(void)

void FUN_14d7a82d4(char param_1,char param_2)

{
  FUN_14d7a82fd(param_1,param_2 + param_1);
  return;
}



// FUNCTION 14d7a82ea FUN_14d7a82ea body=2 status=ok
// SIG undefined FUN_14d7a82ea(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a82ea(void)

{
  char unaff_BL;
  char *unaff_RSI;
  char in_CF;
  
  *unaff_RSI = (*unaff_RSI - unaff_BL) - in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a82f7 FUN_14d7a82f7 body=5 status=ok
// SIG undefined FUN_14d7a82f7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a82f7(undefined8 param_1)

{
  int *unaff_RBX;
  longlong unaff_RSI;
  bool in_CF;
  bool in_SF;
  
  if (in_CF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_SF) {
    *unaff_RBX = *unaff_RBX + -0x7e;
    if (-1 < (char)(*(char *)(unaff_RSI * 9) - (char)((ulonglong)param_1 >> 8))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RSI + 0x6b055) = *(char *)(unaff_RSI + 0x6b055) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a82fd FUN_14d7a82fd body=4 status=ok
// SIG undefined FUN_14d7a82fd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a82fd(undefined8 param_1)

{
  int *unaff_RBX;
  longlong unaff_RSI;
  byte in_CF;
  
  *unaff_RBX = (*unaff_RBX + -0x7e) - (uint)in_CF;
  if (-1 < (char)(*(char *)(unaff_RSI * 9) - (char)((ulonglong)param_1 >> 8))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8307 FUN_14d7a8307 body=4 status=ok
// SIG undefined FUN_14d7a8307(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8307(void)

{
  char in_AL;
  
  if (-1 < (char)(in_AL + '\n')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a830f FUN_14d7a830f body=3 status=ok
// SIG undefined FUN_14d7a830f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a830f(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8313 FUN_14d7a8313 body=2 status=ok
// SIG undefined FUN_14d7a8313(void)

void FUN_14d7a8313(undefined8 param_1,undefined2 param_2)

{
  undefined1 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
  return;
}



// FUNCTION 14d7a8317 FUN_14d7a8317 body=7 status=ok
// SIG undefined FUN_14d7a8317(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8317(longlong param_1,undefined2 param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 *unaff_RDI;
  
  if (param_1 != 0) {
    pcVar2 = (code *)swi(1);
    (*pcVar2)();
    return;
  }
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  uVar1 = in(param_2);
  unaff_RDI[1] = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8329 FUN_14d7a8329 body=12 status=ok
// SIG undefined FUN_14d7a8329(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a8343) overlaps instruction at (ram,0x00014d7a833e)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a8329(undefined8 param_1,char param_2)

{
  uint uVar1;
  undefined1 uVar2;
  uint in_EAX;
  undefined4 in_register_00000004;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RDI;
  
  while( true ) {
    *(uint *)CONCAT71(unaff_00000019,unaff_BL) =
         *(uint *)CONCAT71(unaff_00000019,unaff_BL) & (uint)register0x00000020;
    uVar2 = *(undefined1 *)(CONCAT71(unaff_00000019,unaff_BL) + (ulonglong)(byte)in_EAX);
    _DAT_697821e9bb13270 = in_EAX;
    *(char *)(unaff_RDI + 0x32d957c3) = *(char *)(unaff_RDI + 0x32d957c3) + param_2;
    *(undefined8 *)((longlong)register0x00000020 + -8) = param_1;
    uVar1 = CONCAT31((int3)(in_EAX >> 8),uVar2);
    in_EAX = uVar1 ^ 0x21;
    if (*(char *)((longlong)register0x00000020 + CONCAT71(unaff_00000019,unaff_BL) * 8 + 0x18003b97)
        <= unaff_BL) break;
    *(char *)(CONCAT44(in_register_00000004,uVar1) ^ 0x21) =
         *(char *)(CONCAT44(in_register_00000004,uVar1) ^ 0x21) + unaff_BL;
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8336 FUN_14d7a8336 body=2 status=ok
// SIG undefined FUN_14d7a8336(void)

undefined4 FUN_14d7a8336(void)

{
  undefined4 unaff_EDI;
  
  return unaff_EDI;
}



// FUNCTION 14d7a833a FUN_14d7a833a body=16 status=ok
// SIG undefined FUN_14d7a833a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a833a(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  byte bVar2;
  undefined7 uVar3;
  uint unaff_EDI;
  undefined4 unaff_0000003c;
  
  uVar3 = (undefined7)((ulonglong)param_2 >> 8);
  bVar2 = (byte)param_2 ^ *(byte *)(param_1 + 0x34);
  *(uint *)CONCAT71(uVar3,bVar2) = *(uint *)CONCAT71(uVar3,bVar2) & unaff_EDI;
  piVar1 = (int *)(CONCAT71(uVar3,bVar2) + -0x26 + CONCAT44(unaff_0000003c,unaff_EDI) * 8);
  *piVar1 = *piVar1 - unaff_EDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8353 FUN_14d7a8353 body=2 status=ok
// SIG undefined FUN_14d7a8353(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8353(undefined8 param_1,byte *param_2)

{
  *param_2 = *param_2 | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8361 FUN_14d7a8361 body=22 status=ok
// SIG undefined FUN_14d7a8361(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8361(longlong param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  char in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RBX;
  
  puVar1 = (undefined1 *)(unaff_RBX + -0x43 + param_1 * 8);
  *puVar1 = *puVar1;
  pcVar2 = (char *)(CONCAT71(in_register_00000001,in_AL + -0x24) + 0x7e88c057 + param_1 * 4);
  *pcVar2 = *pcVar2 + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8380 FUN_14d7a8380 body=9 status=ok
// SIG undefined FUN_14d7a8380(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8380(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  byte in_AL;
  byte unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined4 *unaff_RDI;
  bool in_PF;
  
  if (in_PF) {
    uVar1 = in(param_2);
    *unaff_RDI = uVar1;
    unaff_RDI = unaff_RDI + 1;
  }
  else if (CARRY1(unaff_BL,in_AL)) {
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL + in_AL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL + in_AL)) - unaff_BH;
    return;
  }
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8389 FUN_14d7a8389 body=8 status=ok
// SIG undefined FUN_14d7a8389(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8389(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a839a FUN_14d7a839a body=17 status=ok
// SIG undefined FUN_14d7a839a(void)

void FUN_14d7a839a(undefined1 param_1)

{
  undefined1 *in_RAX;
  
  LOCK();
  *in_RAX = param_1;
  UNLOCK();
  FUN_14d7a8336();
  return;
}



// FUNCTION 14d7a83b2 FUN_14d7a83b2 body=15 status=ok
// SIG undefined FUN_14d7a83b2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a83b2(undefined8 param_1,char *param_2)

{
  uint *unaff_RBX;
  uint unaff_EBP;
  char in_R11B;
  
  *param_2 = *param_2 + in_R11B;
  LOCK();
  *unaff_RBX = unaff_EBP | (uint)param_2;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a83c2 FUN_14d7a83c2 body=4 status=ok
// SIG undefined FUN_14d7a83c2(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a83c3) overlaps instruction at (ram,0x00014d7a83c2)
    */

void FUN_14d7a83c2(undefined8 param_1,char *param_2)

{
  undefined1 in_AL;
  uint *unaff_RBX;
  uint unaff_EBP;
  char in_R11B;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  out(0x1e,in_AL);
  if (!in_ZF && in_OF == in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = *param_2 + in_R11B;
  LOCK();
  *unaff_RBX = unaff_EBP | (uint)param_2;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a83d2 FUN_14d7a83d2 body=11 status=ok
// SIG undefined FUN_14d7a83d2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a83d2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a83de FUN_14d7a83de body=3 status=ok
// SIG undefined FUN_14d7a83de(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a83de(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a83f2 FUN_14d7a83f2 body=11 status=ok
// SIG undefined FUN_14d7a83f2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a83f2(void)

{
  in(0x6a);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a83fe FUN_14d7a83fe body=8 status=ok
// SIG undefined FUN_14d7a83fe(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a83fe(void)

{
  uint *puVar1;
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  puVar1 = (uint *)(unaff_RBP + -0x6e + unaff_RBX);
  *puVar1 = *puVar1 & 0x4e9c5400;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8407 FUN_14d7a8407 body=8 status=ok
// SIG undefined FUN_14d7a8407(void)

/* WARNING: Removing unreachable block (ram,0x00014d7a839d) */

void FUN_14d7a8407(void)

{
  return;
}



// FUNCTION 14d7a840f FUN_14d7a840f body=12 status=ok
// SIG undefined FUN_14d7a840f(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a8488) overlaps instruction at (ram,0x00014d7a8486)
    */
/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a840f(char *param_1,char param_2)

{
  char *pcVar1;
  uint *puVar2;
  bool bVar3;
  undefined2 uVar4;
  byte in_AL;
  char cVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined4 unaff_EBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  byte bVar8;
  bool in_SF;
  
  if (!in_SF) {
    out(0x6b,unaff_EBP);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_RSI;
  cVar5 = (char)param_1;
  *param_1 = *param_1 + cVar5;
  uVar4 = CONCAT11(0x30,(char)((ulonglong)param_1 >> 8));
  pcVar1 = (char *)(CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(param_2,cVar5)) + 0x3a);
  *pcVar1 = *pcVar1 + param_2;
  *(char *)(unaff_RDI + 0x3e59074) = *(char *)(unaff_RDI + 0x3e59074) + cVar5;
  pcVar1 = (char *)(unaff_RDI + 2);
  uVar6 = in(uVar4);
  unaff_RDI[1] = uVar6;
  uVar7 = 0xfa5b1ec848669dc3;
  puVar2 = unaff_RSI + 2;
  out(unaff_RSI[1],uVar4);
  bVar8 = 0xa7 < in_AL;
  _DAT_82ab8af3 = 0x14d7a846f;
  uVar6 = (**(code **)((longlong)unaff_RSI + 0x12))();
  *pcVar1 = *pcVar1;
  cVar5 = ((char)uVar6 + '\x7f') - (bVar8 & 1);
  *puVar2 = *puVar2 << ((byte)uVar7 & 0x1f);
  bVar3 = (uVar7 & 0x1f) != 0;
  if ((bVar3 || (POPCOUNT(cVar5) & 1U) != 0) && (!bVar3 || (POPCOUNT(*puVar2 & 0xff) & 1U) != 0)) {
    *(char *)(uVar7 - 0x29ff7256) = *(char *)(uVar7 - 0x29ff7256) + (char)((int)uVar6 >> 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar1 = cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8423 FUN_14d7a8423 body=6 status=ok
// SIG undefined FUN_14d7a8423(void)

char FUN_14d7a8423(undefined8 param_1,undefined2 param_2)

{
  char in_AL;
  char cVar1;
  char in_CF;
  
  cVar1 = in_AL + (char)((ushort)param_2 >> 8) + in_CF;
  out(param_2,cVar1);
  return cVar1;
}



// FUNCTION 14d7a842c FUN_14d7a842c body=96 status=ok
// SIG undefined FUN_14d7a842c(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a8488) overlaps instruction at (ram,0x00014d7a8486)
    */
/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a842c(undefined8 param_1)

{
  char *pcVar1;
  uint *puVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  longlong in_RAX;
  ulonglong uVar6;
  undefined2 uVar7;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  byte bVar8;
  
  cVar4 = *(char *)(in_RAX + 0x900a558);
  pcVar1 = (char *)(CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(0xeb,cVar4)) + 0x3a);
  *pcVar1 = *pcVar1 + -0x15;
  *(char *)(unaff_RDI + 0x3e59073) = *(char *)(unaff_RDI + 0x3e59073) + cVar4;
  pcVar1 = (char *)(unaff_RDI + 1);
  uVar7 = (undefined2)CONCAT71(0x7830,(char)((ulonglong)param_1 >> 8));
  uVar5 = in(uVar7);
  *unaff_RDI = uVar5;
  uVar6 = 0xfa5b1ec848669dc3;
  puVar2 = unaff_RSI + 1;
  out(*unaff_RSI,uVar7);
  bVar8 = 0xa7 < (byte)in_RAX;
  _DAT_82ab8af3 = 0x14d7a846f;
  uVar5 = (**(code **)((longlong)unaff_RSI + 0xe))();
  *pcVar1 = *pcVar1;
  cVar4 = ((char)uVar5 + '\x7f') - (bVar8 & 1);
  *puVar2 = *puVar2 << ((byte)uVar6 & 0x1f);
  bVar3 = (uVar6 & 0x1f) != 0;
  if ((bVar3 || (POPCOUNT(cVar4) & 1U) != 0) && (!bVar3 || (POPCOUNT(*puVar2 & 0xff) & 1U) != 0)) {
    *(char *)(uVar6 - 0x29ff7256) = *(char *)(uVar6 - 0x29ff7256) + (char)((int)uVar5 >> 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar1 = cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a848f FUN_14d7a848f body=4 status=ok
// SIG undefined FUN_14d7a848f(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a8488) overlaps instruction at (ram,0x00014d7a8486)
    */
/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a848f(uint param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  ulonglong uVar3;
  undefined2 uVar4;
  char cVar5;
  undefined4 uVar6;
  ulonglong in_RAX;
  ulonglong uVar7;
  char unaff_BL;
  char cVar8;
  uint *puVar9;
  uint *puVar10;
  char *unaff_RDI;
  byte bVar11;
  bool bVar12;
  
  uVar6 = (undefined4)in_RAX;
  param_1 = param_1 ^ 0x47;
  uVar7 = (ulonglong)param_1;
  cVar5 = (char)param_2;
  *(char *)(uVar7 + 0x6697ba96) = *(char *)(uVar7 + 0x6697ba96) + cVar5;
  cVar8 = unaff_BL - (char)((ulonglong)param_2 >> 8);
  uVar3 = (longlong)*(int *)(longlong)(int)param_1 * -0x53;
  puVar10 = (uint *)(uVar3 & 0xffffffff);
  bVar12 = (longlong)(int)uVar3 != uVar3;
  puVar9 = puVar10;
  if (bVar12 == cVar8 < '\0') {
    pcVar2 = unaff_RDI + 1;
    *unaff_RDI = (char)*puVar10;
    if (bVar12 == cVar8 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)((ulonglong)param_1 - 0x5b) = cVar8;
    cVar8 = (char)in_RAX;
    *(char *)(in_RAX & 0xffffffff) = *(char *)(in_RAX & 0xffffffff) + cVar8;
    uVar4 = CONCAT11(0x30,(char)(in_RAX >> 8));
    pcVar1 = (char *)((ulonglong)CONCAT22((short)(in_RAX >> 0x10),CONCAT11(cVar5,cVar8)) + 0x3a);
    *pcVar1 = *pcVar1 + cVar5;
    unaff_RDI[0xf9641cd] = unaff_RDI[0xf9641cd] + cVar8;
    unaff_RDI = unaff_RDI + 5;
    uVar6 = in(uVar4);
    *(undefined4 *)pcVar2 = uVar6;
    uVar7 = 0xfa5b1ec848669dc3;
    puVar9 = (uint *)((longlong)puVar10 + 5);
    out(*(undefined4 *)((longlong)puVar10 + 1),uVar4);
    bVar11 = 0xa7 < (byte)param_1;
    _DAT_82ab8af3 = 0x14d7a846f;
    uVar6 = (**(code **)((longlong)puVar10 + 0xf))();
    *unaff_RDI = *unaff_RDI;
    bVar12 = (bool)(bVar11 & 1);
  }
  cVar5 = ((char)uVar6 + '\x7f') - bVar12;
  *puVar9 = *puVar9 << ((byte)uVar7 & 0x1f);
  bVar12 = (uVar7 & 0x1f) != 0;
  if ((bVar12 || (POPCOUNT(cVar5) & 1U) != 0) && (!bVar12 || (POPCOUNT(*puVar9 & 0xff) & 1U) != 0))
  {
    *(char *)(uVar7 - 0x29ff7256) = *(char *)(uVar7 - 0x29ff7256) + (char)((int)uVar6 >> 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8494 FUN_14d7a8494 body=19 status=ok
// SIG undefined FUN_14d7a8494(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a8488) overlaps instruction at (ram,0x00014d7a8486)
    */
/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a8494(void)

{
  char *pcVar1;
  char *pcVar2;
  ulonglong uVar3;
  char cVar4;
  undefined4 uVar5;
  uint in_EAX;
  ulonglong uVar6;
  undefined2 uVar7;
  undefined1 unaff_BL;
  uint *puVar8;
  ulonglong unaff_RSI;
  uint *puVar9;
  char *unaff_RDI;
  byte bVar10;
  bool bVar11;
  char in_SF;
  
  uVar6 = (ulonglong)in_EAX;
  uVar5 = (undefined4)unaff_RSI;
  uVar3 = (longlong)*(int *)(longlong)(int)in_EAX * -0x53;
  puVar9 = (uint *)(uVar3 & 0xffffffff);
  bVar11 = (longlong)(int)uVar3 != uVar3;
  puVar8 = puVar9;
  if (bVar11 == (bool)in_SF) {
    pcVar2 = unaff_RDI + 1;
    *unaff_RDI = (char)*puVar9;
    if (bVar11 == (bool)in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)((ulonglong)in_EAX - 0x5b) = unaff_BL;
    cVar4 = (char)unaff_RSI;
    *(char *)(unaff_RSI & 0xffffffff) = *(char *)(unaff_RSI & 0xffffffff) + cVar4;
    pcVar1 = (char *)((ulonglong)CONCAT22((short)(unaff_RSI >> 0x10),CONCAT11(0x97,cVar4)) + 0x3a);
    *pcVar1 = *pcVar1 + -0x69;
    unaff_RDI[0xf9641cd] = unaff_RDI[0xf9641cd] + cVar4;
    unaff_RDI = unaff_RDI + 5;
    uVar7 = (undefined2)CONCAT71(0xf32830,(char)(unaff_RSI >> 8));
    uVar5 = in(uVar7);
    *(undefined4 *)pcVar2 = uVar5;
    uVar6 = 0xfa5b1ec848669dc3;
    puVar8 = (uint *)((longlong)puVar9 + 5);
    out(*(undefined4 *)((longlong)puVar9 + 1),uVar7);
    bVar10 = 0xa7 < (byte)in_EAX;
    _DAT_82ab8af3 = 0x14d7a846f;
    uVar5 = (**(code **)((longlong)puVar9 + 0xf))();
    *unaff_RDI = *unaff_RDI;
    bVar11 = (bool)(bVar10 & 1);
  }
  cVar4 = ((char)uVar5 + '\x7f') - bVar11;
  *puVar8 = *puVar8 << ((byte)uVar6 & 0x1f);
  bVar11 = (uVar6 & 0x1f) != 0;
  if ((bVar11 || (POPCOUNT(cVar4) & 1U) != 0) && (!bVar11 || (POPCOUNT(*puVar8 & 0xff) & 1U) != 0))
  {
    *(char *)(uVar6 - 0x29ff7256) = *(char *)(uVar6 - 0x29ff7256) + (char)((int)uVar5 >> 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a84a8 FUN_14d7a84a8 body=14 status=ok
// SIG undefined FUN_14d7a84a8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a84a8(longlong param_1)

{
  undefined4 in_EAX;
  bool in_ZF;
  
  if (!in_ZF) {
    return;
  }
  *(char *)(param_1 + -0x29ff7256) = *(char *)(param_1 + -0x29ff7256) + (char)((int)in_EAX >> 0xf);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a84b9 FUN_14d7a84b9 body=7 status=ok
// SIG undefined FUN_14d7a84b9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a84b9(undefined8 param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  char unaff_BH;
  
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + 0x3ec754cd);
  *pcVar1 = *pcVar1 - unaff_BH;
  out(param_2,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a84c2 FUN_14d7a84c2 body=7 status=ok
// SIG undefined FUN_14d7a84c2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a84c2(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  char *unaff_RBX;
  longlong unaff_RSI;
  
  *(byte *)(param_1 + 0x6f9a9d81) = *(byte *)(param_1 + 0x6f9a9d81) & 0x99;
  bVar1 = *(byte *)(unaff_RSI + -7);
  *unaff_RBX = *unaff_RBX + (char)param_2;
  *(byte *)(param_1 + unaff_RSI) =
       *(byte *)(param_1 + unaff_RSI) | (byte)((ulonglong)param_2 >> 8) ^ bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a84cb FUN_14d7a84cb body=3 status=ok
// SIG undefined FUN_14d7a84cb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a84cb(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  char *unaff_RBX;
  longlong unaff_RSI;
  
  bVar1 = *(byte *)(unaff_RSI + -7);
  *unaff_RBX = *unaff_RBX + (char)param_2;
  *(byte *)(param_1 + unaff_RSI) =
       *(byte *)(param_1 + unaff_RSI) | (byte)((ulonglong)param_2 >> 8) ^ bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a84cf FUN_14d7a84cf body=4 status=ok
// SIG undefined FUN_14d7a84cf(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a84cf(longlong param_1,undefined8 param_2)

{
  char *unaff_RBX;
  longlong unaff_RSI;
  
  *unaff_RBX = *unaff_RBX + (char)param_2;
  *(byte *)(param_1 + unaff_RSI) = *(byte *)(param_1 + unaff_RSI) | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a84e5 FUN_14d7a84e5 body=27 status=ok
// SIG undefined FUN_14d7a84e5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a84e5(undefined8 param_1,undefined8 param_2)

{
  char in_AL;
  char cVar1;
  longlong unaff_RBX;
  undefined4 *unaff_RSI;
  char cVar2;
  
  cVar2 = (char)((ulonglong)param_2 >> 8);
  cVar1 = cVar2 + in_AL;
  if (cVar1 == '\0' || SCARRY1(cVar2,in_AL) != cVar1 < '\0') {
    out(0x9b,0x48);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RBX + 0x163d12a8) =
       *(char *)(unaff_RBX + 0x163d12a8) + (char)((uint)*unaff_RSI >> 8);
  FUN_14d7a84e5(unaff_RSI[1]);
  return;
}



// FUNCTION 14d7a84fe FUN_14d7a84fe body=13 status=ok
// SIG undefined FUN_14d7a84fe(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a84fe(void)

{
  bool in_CF;
  
  if (in_CF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a850f FUN_14d7a850f body=18 status=ok
// SIG undefined FUN_14d7a850f(void)

int FUN_14d7a850f(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 in_RAX;
  int unaff_EBX;
  undefined1 *unaff_RSI;
  
  uVar1 = *unaff_RSI;
  *(int *)(param_2 + -0x35) = *(int *)(param_2 + -0x35) + unaff_EBX;
  return ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar1) + 0x1ef8059f) -
         (uint)(*(byte *)(param_1 + 0x7f29e000) < (byte)param_2);
}



// FUNCTION 14d7a8532 FUN_14d7a8532 body=9 status=ok
// SIG undefined FUN_14d7a8532(void)

void FUN_14d7a8532(void)

{
  FUN_14d7a84e5();
  return;
}



// FUNCTION 14d7a853e FUN_14d7a853e body=8 status=ok
// SIG undefined FUN_14d7a853e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a853e(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  undefined4 unaff_EBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_retaddr;
  
  iVar1 = *(int *)CONCAT44(in_register_00000004,in_EAX);
  LOCK();
  *param_2 = CONCAT31((int3)((uint)unaff_EBX >> 8),*(undefined1 *)(unaff_RSI + -0x77));
  UNLOCK();
  bRam00000000b42fde5c = bRam00000000b42fde5c | (byte)((ulonglong)param_1 >> 8);
  if (bRam00000000b42fde5c != 0) {
    cRam00000000b42fde3d = cRam00000000b42fde3d + (char)in_EAX;
    *(uint *)(unaff_retaddr + -0x17) = *(uint *)(unaff_retaddr + -0x17) ^ iVar1 * 0x8007d93;
    uRam36bf01481ad8d8e4 = in_EAX;
    *(int *)(unaff_RDI + 0x51) = *(int *)(unaff_RDI + 0x51) + (int)unaff_retaddr;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a854f FUN_14d7a854f body=4 status=ok
// SIG undefined FUN_14d7a854f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a854f(void)

{
  undefined4 in_EAX;
  uint unaff_EBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  bool in_ZF;
  longlong unaff_retaddr;
  
  if (!in_ZF) {
    *(char *)(unaff_RSI + -0x1f) = *(char *)(unaff_RSI + -0x1f) + (char)in_EAX;
    *(uint *)(unaff_retaddr + -0x17) = *(uint *)(unaff_retaddr + -0x17) ^ unaff_EBP;
    uRam36bf01481ad8d8e4 = in_EAX;
    *(int *)(unaff_RDI + 0x51) = *(int *)(unaff_RDI + 0x51) + (int)unaff_retaddr;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a855c FUN_14d7a855c body=2 status=ok
// SIG undefined FUN_14d7a855c(void)

void FUN_14d7a855c(void)

{
  longlong unaff_RDI;
  
  *(longlong *)(unaff_RDI + 0x514f1136) = *(longlong *)(unaff_RDI + 0x514f1136) + unaff_RDI;
  return;
}



// FUNCTION 14d7a8560 FUN_14d7a8560 body=11 status=ok
// SIG undefined FUN_14d7a8560(void)

void FUN_14d7a8560(void)

{
  return;
}



// FUNCTION 14d7a856c FUN_14d7a856c body=2 status=ok
// SIG undefined FUN_14d7a856c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a856c(void)

{
  longlong unaff_RBP;
  
  *(int *)(unaff_RBP + 0x73e28100) = *(int *)(unaff_RBP + 0x73e28100) << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a857d FUN_14d7a857d body=3 status=ok
// SIG undefined FUN_14d7a857d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a857d(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  int unaff_retaddr;
  
  piVar1 = (int *)((ulonglong)(uint)(unaff_retaddr + unaff_EBP) - 0x22);
  *piVar1 = *piVar1 << 1;
  pcVar2 = (code *)swi(0x31);
  (*pcVar2)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8581 thunk_EXT_FUN_d1ca245b body=7 status=ok
// SIG undefined thunk_EXT_FUN_d1ca245b(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_d1ca245b(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8596 FUN_14d7a8596 body=2 status=ok
// SIG undefined FUN_14d7a8596(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8596(uint param_1,uint *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  uint *unaff_RDI;
  undefined8 uStack_10;
  
  *param_2 = *param_2 & 0x590a5271;
  puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x03';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  *unaff_RDI = *unaff_RDI & param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a859a FUN_14d7a859a body=7 status=ok
// SIG undefined FUN_14d7a859a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a859a(uint param_1)

{
  char cVar1;
  byte bVar2;
  uint *in_RAX;
  undefined8 *puVar3;
  undefined8 *unaff_RBP;
  uint *unaff_RDI;
  bool in_OF;
  undefined8 uStack_10;
  
  if (in_OF) {
    puVar3 = (undefined8 *)&stack0xfffffffffffffff8;
    cVar1 = '\x03';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar3 = puVar3 + -1;
      *puVar3 = *unaff_RBP;
      cVar1 = cVar1 + -1;
    } while ('\0' < cVar1);
    *unaff_RDI = *unaff_RDI & param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar2 = (byte)param_1 & 0x1f;
  *in_RAX = *in_RAX >> bVar2 | (int)in_RAX << 0x20 - bVar2;
  FUN_14a5b289b();
  return;
}



// FUNCTION 14d7a85a7 FUN_14d7a85a7 body=8 status=ok
// SIG undefined FUN_14d7a85a7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a85a7(uint param_1)

{
  char cVar1;
  uint *unaff_RDI;
  undefined8 *unaff_retaddr;
  
  cVar1 = '\x03';
  do {
    unaff_retaddr = unaff_retaddr + -1;
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
    *(undefined8 *)register0x00000020 = *unaff_retaddr;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  *unaff_RDI = *unaff_RDI & param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a85b4 FUN_14d7a85b4 body=6 status=ok
// SIG undefined FUN_14d7a85b4(void)

undefined4 FUN_14d7a85b4(char *param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 in_RAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  longlong unaff_RDI;
  
  uRam8ae79ec458030064 = (undefined4)in_RAX;
  cVar1 = *param_1;
  *(char *)(unaff_RBP + -0x78c39fa5) = *(char *)(unaff_RBP + -0x78c39fa5) + param_2;
  *(char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x734a0d4c) = (char)param_1;
  uVar2 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX - cVar1) & 0x9cbfd432;
  *(char *)(unaff_RBX + -0x3b) = *(char *)(unaff_RBX + -0x3b) + (char)((ulonglong)unaff_RBX >> 8);
  *(uint *)(unaff_RDI + -0x7c93d19b) = *(uint *)(unaff_RDI + -0x7c93d19b) & (uint)param_1;
  return CONCAT31((int3)(uVar2 >> 8),(char)uVar2 + *(char *)(ulonglong)uVar2);
}



// FUNCTION 14d7a85bd FUN_14d7a85bd body=14 status=ok
// SIG undefined FUN_14d7a85bd(void)

undefined4 FUN_14d7a85bd(char *param_1,char param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  longlong in_RAX;
  int unaff_EBX;
  uint uVar4;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  longlong unaff_RDI;
  
  uVar4 = unaff_EBX + *(int *)(in_RAX + -0x3c);
  out(0x8a,(int)in_RAX);
  cVar2 = *param_1;
  *(char *)(unaff_RBP + -0x78c39fa5) = *(char *)(unaff_RBP + -0x78c39fa5) + param_2;
  *(char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x734a0d4c) = (char)param_1;
  uVar3 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX - cVar2) & 0x9cbfd432;
  pcVar1 = (char *)((ulonglong)uVar4 - 0x3b);
  *pcVar1 = *pcVar1 + (char)(uVar4 >> 8);
  *(uint *)(unaff_RDI + -0x7c93d19b) = *(uint *)(unaff_RDI + -0x7c93d19b) & (uint)param_1;
  return CONCAT31((int3)(uVar3 >> 8),(char)uVar3 + *(char *)(ulonglong)uVar3);
}



// FUNCTION 14d7a85ce FUN_14d7a85ce body=5 status=ok
// SIG undefined FUN_14d7a85ce(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a85ce(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a85d7 FUN_14d7a85d7 body=15 status=ok
// SIG undefined FUN_14d7a85d7(void)

/* WARNING: Control flow encountered bad instruction data */

char FUN_14d7a85d7(uint param_1)

{
  char cVar1;
  char *in_RAX;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  uint *unaff_RDI;
  bool in_PF;
  undefined8 uStack_10;
  
  if (in_PF) {
    *(uint *)((longlong)unaff_RDI + -0x7c93d19b) =
         *(uint *)((longlong)unaff_RDI + -0x7c93d19b) & param_1;
    return (char)in_RAX + *in_RAX;
  }
  puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x03';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  *unaff_RDI = *unaff_RDI & param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a85e8 FUN_14d7a85e8 body=14 status=ok
// SIG undefined FUN_14d7a85e8(void)

void FUN_14d7a85e8(byte param_1)

{
  int in_EAX;
  undefined4 in_register_00000004;
  
  out(0x8e5d,(char)in_EAX);
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) >> (param_1 & 0x1f) |
       in_EAX << 0x20 - (param_1 & 0x1f);
  FUN_14a5b289b(param_1,0x5b648e5d);
  return;
}



// FUNCTION 14d7a8605 FUN_14d7a8605 body=1 status=ok
// SIG undefined FUN_14d7a8605(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8605(int *param_1)

{
  int *piVar1;
  int unaff_EBX;
  byte in_CF;
  
  piVar1 = (int *)(ulonglong)uRam11358cbb58ee6a96;
  *param_1 = (*param_1 - unaff_EBX) - (uint)in_CF;
  *(bool *)(CONCAT71((int7)((ulonglong)param_1 >> 8),0x3d) + -0x80) = SCARRY4(*piVar1,0xd10b6c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a860d FUN_14d7a860d body=25 status=ok
// SIG undefined FUN_14d7a860d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a860d(undefined8 param_1)

{
  uint in_EAX;
  
  *(bool *)(CONCAT71((int7)((ulonglong)param_1 >> 8),0x3d) + -0x80) =
       SCARRY4(*(int *)(ulonglong)(in_EAX ^ 0xf8191911),0xd10b6c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8627 FUN_14d7a8627 body=39 status=ok
// SIG undefined FUN_14d7a8627(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a8663) overlaps instruction at (ram,0x00014d7a865c)
    */

void FUN_14d7a8627(undefined8 param_1,undefined2 param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar4;
  char cVar5;
  undefined1 uVar6;
  undefined4 in_EAX;
  uint uVar7;
  byte bVar8;
  undefined2 uVar9;
  char unaff_BL;
  undefined8 *puVar10;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char *pcVar11;
  bool in_CF;
  bool in_ZF;
  byte bVar3;
  
  if (!in_CF && !in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar9 = CONCAT11((char)((ushort)param_2 >> 8),(char)param_2 - (char)((ulonglong)param_1 >> 8));
  puVar10 = (undefined8 *)&stack0xfffffffffffffff8;
  pcVar11 = (char *)(unaff_RDI + 8);
  uVar4 = in(uVar9);
  *(undefined4 *)(unaff_RDI + 4) = uVar4;
  uVar6 = DAT_c07c628c60d793c8;
  uVar7 = CONCAT31((int3)((uint)in_EAX >> 8),DAT_c07c628c60d793c8);
  do {
    *pcVar11 = *pcVar11 + unaff_BL;
    pcVar11 = pcVar11 + 4;
    pbVar1 = (byte *)(unaff_RBP + 0x2ad071ba);
    bVar2 = *pbVar1;
    bVar8 = (byte)param_1;
    bVar3 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar8;
    out(uVar9,uVar6);
    param_1 = *puVar10;
    puVar10 = puVar10 + 1;
    if (CARRY1(bVar2,bVar8)) {
      uVar7 = (uVar7 ^ 0x94994000) + 0x592f53db;
      *(char *)(unaff_RSI + -0x6b) = *(char *)(unaff_RSI + -0x6b) + (char)(uVar7 >> 8);
      cVar5 = *(char *)((ulonglong)uVar7 + 0x4a);
      *(uint *)pcVar11 = CONCAT22((short)(uVar7 >> 0x10),0x850b);
      pbVar1 = (byte *)(CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                                 CONCAT11((char)((ulonglong)param_1 >> 8) + cVar5,(byte)param_1)) +
                       0x3e350030);
      *pbVar1 = *pbVar1 & (byte)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while (SCARRY1(bVar3,bVar8) == (char)*pbVar1 < '\0');
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a862b FUN_14d7a862b body=12 status=ok
// SIG undefined FUN_14d7a862b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a8663) overlaps instruction at (ram,0x00014d7a865c)
    */

void FUN_14d7a862b(uint param_1,longlong param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 uVar4;
  char cVar5;
  undefined1 uVar6;
  undefined4 in_EAX;
  uint uVar7;
  byte bVar8;
  ulonglong uVar9;
  uint *unaff_RBX;
  undefined1 **ppuVar11;
  int unaff_EBP;
  longlong unaff_RSI;
  char *pcVar12;
  char in_AF;
  undefined1 *puStack_18;
  undefined8 uStack_8;
  byte bVar10;
  
  *(uint *)(unaff_RSI + -0x2a) = *(uint *)(unaff_RSI + -0x2a) ^ param_1;
  uStack_8 = 0x4b84a978;
  bVar10 = (byte)((uint)in_EAX >> 8) & *(byte *)(param_2 + 0xf689100);
  uVar9 = (ulonglong)CONCAT11(bVar10,(char)in_EAX);
  ppuVar11 = &puStack_18;
  puStack_18 = &stack0xfffffffffffffff0;
  pcVar12 = (char *)((undefined4 *)(ulonglong)*unaff_RBX + 1);
  uVar4 = in((short)param_2);
  *(undefined4 *)(ulonglong)*unaff_RBX = uVar4;
  uVar6 = DAT_c07c628c60d793c8;
  uVar7 = CONCAT31((int3)CONCAT61((int6)((ulonglong)unaff_RSI >> 0x10),
                                  ((char)bVar10 < '\0') << 7 | (bVar10 == 0) << 6 | in_AF << 4 |
                                  ((POPCOUNT(bVar10) & 1U) == 0) << 2),DAT_c07c628c60d793c8);
  do {
    *pcVar12 = *pcVar12 + (char)unaff_RBX;
    pcVar12 = pcVar12 + 4;
    pbVar2 = (byte *)((ulonglong)(uint)(unaff_EBP * -0x76) + 0x2ad071ba);
    bVar10 = *pbVar2;
    bVar8 = (byte)uVar9;
    bVar3 = *pbVar2;
    *pbVar2 = *pbVar2 + bVar8;
    out((short)param_2,uVar6);
    uVar9 = (ulonglong)*ppuVar11;
    ppuVar11 = ppuVar11 + 1;
    if (CARRY1(bVar10,bVar8)) {
      uVar7 = ((uVar7 | 0x200) ^ 0x94994000) + 0x592f53db;
      pcVar1 = (char *)((ulonglong)CONCAT31((int3)(param_1 >> 8),(char)param_1 + -0x4b) - 0x6b);
      *pcVar1 = *pcVar1 + (char)(uVar7 >> 8);
      cVar5 = *(char *)((ulonglong)uVar7 + 0x4a);
      *(uint *)pcVar12 = CONCAT22((short)(uVar7 >> 0x10),0x850b);
      pbVar2 = (byte *)(CONCAT62((int6)(uVar9 >> 0x10),
                                 CONCAT11((char)(uVar9 >> 8) + cVar5,(byte)uVar9)) + 0x3e350030);
      *pbVar2 = *pbVar2 & (byte)uVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while (SCARRY1(bVar3,bVar8) == (char)*pbVar2 < '\0');
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8637 FUN_14d7a8637 body=12 status=ok
// SIG undefined FUN_14d7a8637(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a8663) overlaps instruction at (ram,0x00014d7a865c)
    */

void FUN_14d7a8637(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  char cVar4;
  undefined1 uVar5;
  uint in_EAX;
  uint uVar6;
  byte bVar7;
  ulonglong uVar8;
  uint *unaff_RBX;
  undefined1 **ppuVar10;
  int unaff_EBP;
  undefined8 unaff_RSI;
  char *pcVar11;
  char in_AF;
  undefined1 *puStack_10;
  byte bVar9;
  
  bVar9 = (byte)((ulonglong)param_1 >> 8) & *(byte *)(param_2 + 0xf689100);
  uVar8 = (ulonglong)CONCAT11(bVar9,(char)param_1);
  ppuVar10 = &puStack_10;
  puStack_10 = &stack0xfffffffffffffff8;
  pcVar11 = (char *)((undefined4 *)(ulonglong)*unaff_RBX + 1);
  uVar3 = in((short)param_2);
  *(undefined4 *)(ulonglong)*unaff_RBX = uVar3;
  uVar5 = DAT_c07c628c60d793c8;
  uVar6 = CONCAT31((int3)CONCAT61((int6)((ulonglong)unaff_RSI >> 0x10),
                                  ((char)bVar9 < '\0') << 7 | (bVar9 == 0) << 6 | in_AF << 4 |
                                  ((POPCOUNT(bVar9) & 1U) == 0) << 2),DAT_c07c628c60d793c8);
  do {
    *pcVar11 = *pcVar11 + (char)unaff_RBX;
    pcVar11 = pcVar11 + 4;
    pbVar1 = (byte *)((ulonglong)(uint)(unaff_EBP * -0x76) + 0x2ad071ba);
    bVar9 = *pbVar1;
    bVar7 = (byte)uVar8;
    bVar2 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar7;
    out((short)param_2,uVar5);
    uVar8 = (ulonglong)*ppuVar10;
    ppuVar10 = ppuVar10 + 1;
    if (CARRY1(bVar9,bVar7)) {
      uVar6 = ((uVar6 | 0x200) ^ 0x94994000) + 0x592f53db;
      *(char *)((ulonglong)in_EAX - 0x6b) = *(char *)((ulonglong)in_EAX - 0x6b) + (char)(uVar6 >> 8)
      ;
      cVar4 = *(char *)((ulonglong)uVar6 + 0x4a);
      *(uint *)pcVar11 = CONCAT22((short)(uVar6 >> 0x10),0x850b);
      pbVar1 = (byte *)(CONCAT62((int6)(uVar8 >> 0x10),
                                 CONCAT11((char)(uVar8 >> 8) + cVar4,(byte)uVar8)) + 0x3e350030);
      *pbVar1 = *pbVar1 & (byte)uVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while (SCARRY1(bVar2,bVar7) == (char)*pbVar1 < '\0');
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8645 FUN_14d7a8645 body=3 status=ok
// SIG undefined FUN_14d7a8645(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a8663) overlaps instruction at (ram,0x00014d7a865c)
    */

void FUN_14d7a8645(undefined8 param_1,undefined2 param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  undefined8 in_RAX;
  byte bVar8;
  uint *unaff_RBX;
  undefined8 *puVar9;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char *pcVar10;
  byte in_CF;
  char in_PF;
  char in_AF;
  char in_ZF;
  char in_SF;
  byte bVar3;
  
  puVar9 = (undefined8 *)&stack0xfffffffffffffff8;
  pcVar10 = (char *)((undefined4 *)(ulonglong)*unaff_RBX + 1);
  uVar4 = in(param_2);
  *(undefined4 *)(ulonglong)*unaff_RBX = uVar4;
  uVar6 = DAT_c07c628c60d793c8;
  uVar7 = CONCAT31((int3)CONCAT61((int6)((ulonglong)in_RAX >> 0x10),
                                  in_SF << 7 | in_ZF << 6 | in_AF << 4 | in_PF << 2 | 2U | in_CF),
                   DAT_c07c628c60d793c8);
  do {
    *pcVar10 = *pcVar10 + (char)unaff_RBX;
    pcVar10 = pcVar10 + 4;
    pbVar1 = (byte *)(unaff_RBP + 0x2ad071ba);
    bVar2 = *pbVar1;
    bVar8 = (byte)param_1;
    bVar3 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar8;
    out(param_2,uVar6);
    param_1 = *puVar9;
    puVar9 = puVar9 + 1;
    if (CARRY1(bVar2,bVar8)) {
      uVar7 = (uVar7 ^ 0x94994000) + 0x592f53db;
      *(char *)(unaff_RSI + -0x6b) = *(char *)(unaff_RSI + -0x6b) + (char)(uVar7 >> 8);
      cVar5 = *(char *)((ulonglong)uVar7 + 0x4a);
      *(uint *)pcVar10 = CONCAT22((short)(uVar7 >> 0x10),0x850b);
      pbVar1 = (byte *)(CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                                 CONCAT11((char)((ulonglong)param_1 >> 8) + cVar5,(byte)param_1)) +
                       0x3e350030);
      *pbVar1 = *pbVar1 & (byte)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while (SCARRY1(bVar3,bVar8) == (char)*pbVar1 < '\0');
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8675 FUN_14d7a8675 body=12 status=ok
// SIG undefined FUN_14d7a8675(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a8676) overlaps instruction at (ram,0x00014d7a8675)
    */

void FUN_14d7a8675(undefined8 param_1,undefined2 param_2)

{
  byte *pbVar1;
  char cVar2;
  int in_EAX;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char unaff_BL;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char *unaff_RDI;
  
  while( true ) {
    bVar5 = (byte)((ulonglong)param_1 >> 8);
    bVar6 = (byte)((ushort)param_2 >> 8);
    param_1 = *(undefined8 *)register0x00000020;
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + 8);
    bVar4 = (byte)param_1;
    if (bVar5 < bVar6) {
      uVar3 = in_EAX + 0x592f53db;
      *(char *)(unaff_RSI + -0x6b) = *(char *)(unaff_RSI + -0x6b) + (char)(uVar3 >> 8);
      cVar2 = *(char *)((ulonglong)uVar3 + 0x4a);
      *(uint *)unaff_RDI = CONCAT22((short)(uVar3 >> 0x10),0x850b);
      pbVar1 = (byte *)(CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                                 CONCAT11((char)((ulonglong)param_1 >> 8) + cVar2,bVar4)) +
                       0x3e350030);
      *pbVar1 = *pbVar1 & bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((char)bVar5 < (char)bVar6) break;
    *unaff_RDI = *unaff_RDI + unaff_BL;
    unaff_RDI = unaff_RDI + 4;
    *(char *)(unaff_RBP + 0x2ad071ba) = *(char *)(unaff_RBP + 0x2ad071ba) + bVar4;
    out(param_2,(char)in_EAX);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8682 FUN_14d7a8682 body=20 status=ok
// SIG undefined FUN_14d7a8682(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8682(undefined8 param_1)

{
  byte *pbVar1;
  char cVar2;
  undefined8 in_RAX;
  undefined6 uVar3;
  undefined2 unaff_BP;
  undefined4 *unaff_RDI;
  
  uVar3 = (undefined6)((ulonglong)in_RAX >> 0x10);
  cVar2 = *(char *)(CONCAT62(uVar3,unaff_BP) + 0x4a);
  *unaff_RDI = (int)CONCAT62(uVar3,0x850b);
  pbVar1 = (byte *)(CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                             CONCAT11((char)((ulonglong)param_1 >> 8) + cVar2,(byte)param_1)) +
                   0x3e350030);
  *pbVar1 = *pbVar1 & (byte)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a869c FUN_14d7a869c body=4 status=ok
// SIG undefined FUN_14d7a869c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a869c(longlong param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined4 *in_RAX;
  undefined4 unaff_ESI;
  undefined1 *unaff_RDI;
  
  *in_RAX = unaff_ESI;
  cRam00000001073f1ee4 = cRam00000001073f1ee4 + (char)((ushort)param_2 >> 8);
  *(char *)(param_1 + -0x72) = *(char *)(param_1 + -0x72) + (char)param_1;
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a86a1 FUN_14d7a86a1 body=13 status=ok
// SIG undefined FUN_14d7a86a1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a86a1(longlong param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined1 *unaff_RDI;
  
  *(char *)(param_1 + -0x72) = *(char *)(param_1 + -0x72) + (char)param_1;
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a86c4 FUN_14d7a86c4 body=36 status=ok
// SIG undefined FUN_14d7a86c4(void)

/* WARNING: Instruction at (ram,0x00014d7a86c5) overlaps instruction at (ram,0x00014d7a86c4)
    */

ulonglong FUN_14d7a86c4(char param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  ulonglong in_RAX;
  longlong unaff_RBX;
  undefined8 *puVar4;
  undefined8 *unaff_RBP;
  undefined8 *puVar5;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong unaff_R12;
  char in_CF;
  bool in_PF;
  undefined1 auStack_7c3c [31788];
  undefined8 uStack_10;
  
  puVar5 = unaff_RBP;
  if (!in_PF) {
    pbVar3 = (byte *)(unaff_RSI - 0x533c20e4);
    bVar1 = *pbVar3;
    *pbVar3 = *pbVar3 + 0x49;
    in_RAX = (ulonglong)
             ((int)CONCAT62((int6)(in_RAX >> 0x10),
                            CONCAT11((char)(in_RAX >> 8) + param_1 + (0xb6 < bVar1),(char)in_RAX)) +
             0xd7a39d26);
    pbVar3 = (byte *)(unaff_RBX + -0x4da16dac);
    in_CF = 0x37 < *pbVar3;
    *pbVar3 = *pbVar3 - 0x38;
    puVar4 = (undefined8 *)&stack0xfffffffffffffff8;
    puVar5 = (undefined8 *)&stack0xfffffffffffffff8;
    cVar2 = '\x06';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *unaff_RBP;
      cVar2 = cVar2 + -1;
    } while ('\0' < cVar2);
    register0x00000020 = (BADSPACEBASE *)auStack_7c3c;
  }
  pbVar3 = (byte *)((longlong)puVar5 + ((longlong)unaff_R12 >> 3) + -0x3c85c000);
  *pbVar3 = *pbVar3 & ~('\x01' << (unaff_R12 & 7));
  *(byte *)(unaff_RDI + -0x3b) =
       *(byte *)(unaff_RDI + -0x3b) & (byte)((ulonglong)register0x00000020 >> 8);
  *(undefined8 *)((CONCAT71((int7)(in_RAX >> 8),(char)in_RAX + '/' + in_CF) & 0xffffffff) - 8) =
       0x6c0c52;
  return unaff_RSI & 0xffffffff;
}



// FUNCTION 14d7a86da FUN_14d7a86da body=4 status=ok
// SIG undefined FUN_14d7a86da(void)

undefined4 FUN_14d7a86da(undefined8 param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  undefined4 unaff_ESI;
  
  out(param_2,in_EAX);
  return unaff_ESI;
}



// FUNCTION 14d7a86de FUN_14d7a86de body=7 status=ok
// SIG undefined FUN_14d7a86de(void)

void FUN_14d7a86de(void)

{
  return;
}



// FUNCTION 14d7a86e7 FUN_14d7a86e7 body=13 status=ok
// SIG undefined FUN_14d7a86e7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a86e7(void)

{
  int *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI << 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a86f8 FUN_14d7a86f8 body=6 status=ok
// SIG undefined FUN_14d7a86f8(void)

void FUN_14d7a86f8(undefined8 param_1,undefined8 param_2)

{
  uint unaff_EBX;
  uint *unaff_RDI;
  
  *(char *)((longlong)unaff_RDI * 5) =
       *(char *)((longlong)unaff_RDI * 5) - (char)((ulonglong)param_2 >> 8);
  *unaff_RDI = *unaff_RDI & unaff_EBX;
  uRamcabc4eba422e8b80 = (char)uRam348800dd269c2ca5;
  uRam8d92ca9de9d99200 = uRam348800dd269c2ca5;
  return;
}



// FUNCTION 14d7a870f FUN_14d7a870f body=10 status=ok
// SIG undefined FUN_14d7a870f(void)

void FUN_14d7a870f(undefined8 param_1,undefined1 *param_2)

{
  longlong unaff_RBX;
  
  *param_2 = (char)((ulonglong)param_2 >> 8);
  *(byte *)(unaff_RBX + 0x4eba422e) = *(byte *)(unaff_RBX + 0x4eba422e) | 0xbc;
  return;
}



// FUNCTION 14d7a873b FUN_14d7a873b body=5 status=ok
// SIG undefined FUN_14d7a873b(void)

void FUN_14d7a873b(void)

{
  undefined4 in_EAX;
  
  out(0xb0,in_EAX);
  return;
}



// FUNCTION 14d7a8759 FUN_14d7a8759 body=2 status=ok
// SIG undefined FUN_14d7a8759(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8759(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8761 FUN_14d7a8761 body=29 status=ok
// SIG undefined FUN_14d7a8761(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8761(void)

{
  byte in_AL;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
  *(byte *)(unaff_RDI + 1) = in_AL | 0xcd;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8795 FUN_14d7a8795 body=55 status=ok
// SIG undefined FUN_14d7a8795(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7a87e2) */
/* WARNING: Removing unreachable block (ram,0x00014d7a87e4) */
/* WARNING: Removing unreachable block (ram,0x00014d7a8852) */
/* WARNING: Removing unreachable block (ram,0x00014d7a886b) */
/* WARNING: Removing unreachable block (ram,0x00014d7a88d9) */

void FUN_14d7a8795(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a87a2 FUN_14d7a87a2 body=4 status=ok
// SIG undefined FUN_14d7a87a2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a87a2(void)

{
  uint *puVar1;
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  uint unaff_EBP;
  
  cRam00000000e6495624 = cRam00000000e6495624 + in_AH;
  puVar1 = (uint *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x43c174b7);
  *puVar1 = *puVar1 | unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a87ab FUN_14d7a87ab body=8 status=ok
// SIG undefined FUN_14d7a87ab(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a87ab(void)

{
  short in_AX;
  uint unaff_EBP;
  
  *(uint *)((ulonglong)(uint)(int)in_AX - 0x43c174b7) =
       *(uint *)((ulonglong)(uint)(int)in_AX - 0x43c174b7) | unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a87bc FUN_14d7a87bc body=8 status=ok
// SIG undefined FUN_14d7a87bc(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a87bc(undefined8 param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  byte bVar3;
  char cVar4;
  undefined6 uVar5;
  byte unaff_BL;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  undefined2 in_SS;
  undefined8 in_MM7;
  
  uVar5 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar4 = (char)((ulonglong)param_1 >> 8);
  bVar3 = (byte)param_1 ^ unaff_BL;
  pshufw(in_MM7,*(undefined8 *)(CONCAT62(uVar5,CONCAT11(cVar4,bVar3)) + 0x43),0x5b);
  (*(code *)(CONCAT62(uVar5,CONCAT11(cVar4,bVar3)) + -5))();
  *(undefined2 *)(unaff_RSI + 0x33) = in_SS;
  uVar2 = in(param_2);
  *unaff_RDI = uVar2;
  pcVar1 = (char *)(CONCAT62(uVar5,CONCAT11(cVar4,bVar3)) + 0x1c);
  *pcVar1 = *pcVar1 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a87c4 FUN_14d7a87c4 body=25 status=ok
// SIG undefined FUN_14d7a87c4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a87c4(longlong param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  undefined6 uVar5;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  undefined2 in_SS;
  
  uVar5 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar4 = (char)((ulonglong)param_1 >> 8);
  uVar3 = (undefined1)param_1;
  (*(code *)(param_1 + -5))();
  *(undefined2 *)(unaff_RSI + 0x33) = in_SS;
  uVar2 = in(param_2);
  *unaff_RDI = uVar2;
  pcVar1 = (char *)(CONCAT62(uVar5,CONCAT11(cVar4,uVar3)) + 0x1c);
  *pcVar1 = *pcVar1 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a87f2 FUN_14d7a87f2 body=7 status=ok
// SIG undefined FUN_14d7a87f2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a87f2(undefined8 param_1,undefined8 param_2)

{
  char in_AL;
  char cVar1;
  char cVar2;
  undefined6 uVar3;
  undefined1 *unaff_RSI;
  
  uVar3 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar2 = (char)((ulonglong)param_2 >> 8);
  cVar1 = (char)param_2 + in_AL;
  out(*unaff_RSI,CONCAT11(cVar2,cVar1));
  *(char *)CONCAT62(uVar3,CONCAT11(cVar2,cVar1)) =
       *(char *)CONCAT62(uVar3,CONCAT11(cVar2,cVar1)) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a87ff FUN_14d7a87ff body=4 status=ok
// SIG undefined FUN_14d7a87ff(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a87ff(byte param_1,undefined2 param_2)

{
  char in_AL;
  char *pcVar1;
  longlong unaff_RBX;
  ulonglong unaff_RDI;
  
  if (in_AL < -0x1f) {
    pcVar1 = (char *)(CONCAT71((int7)(unaff_RDI >> 8),
                               *(undefined1 *)(unaff_RBX + (unaff_RDI & 0xff))) & 0xffffffff);
    *pcVar1 = *pcVar1 + (param_1 ^ (byte)((ushort)param_2 >> 8));
    out(0x33,uRamf193c237dbbca5f8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8803 FUN_14d7a8803 body=9 status=ok
// SIG undefined FUN_14d7a8803(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8803(char param_1,undefined2 param_2)

{
  char in_AL;
  char *pcVar1;
  longlong unaff_RBX;
  ulonglong unaff_RDI;
  
  if (in_AL < -0x1f) {
    pcVar1 = (char *)(CONCAT71((int7)(unaff_RDI >> 8),
                               *(undefined1 *)(unaff_RBX + (unaff_RDI & 0xff))) & 0xffffffff);
    *pcVar1 = *pcVar1 + param_1;
    out(0x33,uRamf193c237dbbca5f8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a880c FUN_14d7a880c body=8 status=ok
// SIG undefined FUN_14d7a880c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a880c(void)

{
  out(0x33,uRamf193c237dbbca5f8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a881c FUN_14d7a881c body=1 status=ok
// SIG undefined FUN_14d7a881c(void)

void FUN_14d7a881c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7a8821 FUN_14d7a8821 body=1 status=ok
// SIG undefined FUN_14d7a8821(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8821(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8825 FUN_14d7a8825 body=3 status=ok
// SIG undefined FUN_14d7a8825(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8825(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8835 FUN_14d7a8835 body=8 status=ok
// SIG undefined FUN_14d7a8835(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8835(longlong param_1)

{
  uint unaff_EBX;
  
  *(uint *)(param_1 + -0x59d52102) = *(uint *)(param_1 + -0x59d52102) ^ unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a88d3 FUN_14d7a88d3 body=5 status=ok
// SIG undefined FUN_14d7a88d3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a88d3(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  byte bVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint in_EAX;
  undefined2 uVar8;
  uint uVar9;
  char unaff_BL;
  undefined7 unaff_00000019;
  byte *pbVar11;
  byte *pbVar12;
  byte *unaff_RBP;
  uint uVar13;
  uint *puVar14;
  uint *unaff_RSI;
  undefined4 *puVar15;
  undefined1 *unaff_RDI;
  undefined4 *puVar16;
  char cVar17;
  bool bVar18;
  ulonglong unaff_retaddr;
  undefined1 *puStack_10;
  undefined8 uStack_8;
  ulonglong uVar7;
  uint uVar10;
  
  uVar8 = CONCAT11((char)((ulonglong)param_2 >> 8) - unaff_BL,(char)param_2);
  bVar18 = (unaff_retaddr & 0x400) != 0;
  cVar17 = (unaff_retaddr & 0x10) != 0;
  uVar1 = in(uVar8);
  *unaff_RDI = uVar1;
  puStack_10 = (undefined1 *)&uStack_8;
  uStack_8 = 0xfffffffffe72c0b8;
  uVar10 = (uint)CONCAT62((int6)((ulonglong)param_2 >> 0x10),uVar8);
  uVar9 = uVar10 - *unaff_RSI;
  puVar16 = (undefined4 *)
            (ulonglong)
            ((int)unaff_RDI + 1 + (uint)bVar18 * -2 + *(int *)(param_1 + 0x155700c4) +
            (uint)(uVar10 < *unaff_RSI));
  uVar10 = *unaff_RSI;
  uVar13 = (uint)unaff_RSI;
  uVar6 = uVar13 - uVar10;
  uVar7 = (ulonglong)&puStack_10 & 0xffffffff;
  pbVar11 = (byte *)(ulonglong)in_EAX;
  pbVar12 = unaff_RBP;
  puVar14 = unaff_RSI;
  puVar15 = puVar16;
  puVar5 = &uStack_8;
  if (uVar13 < uVar10 || uVar6 == 0) goto LAB_14d7a88c2;
  bVar18 = true;
  out((short)uVar9,(int)&puStack_10);
  if (uVar13 < uVar10) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while( true ) {
    uVar9 = *(uint *)(unaff_RBP + -0x1a958999) ^ 0xaabf2687;
    uVar6 = (int)puVar16 + 0x57adf1c0;
    pbVar12 = *(byte **)unaff_RBP;
    pbVar11 = unaff_RBP + 8;
    if ((POPCOUNT(uVar6 & 0xff) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar6 = uVar6 & 0xf7a4adde;
    uVar7 = (ulonglong)uVar6;
    puVar14 = unaff_RSI;
    puVar15 = puVar16;
    puVar5 = (undefined8 *)puStack_10;
LAB_14d7a88c2:
    puStack_10 = (undefined1 *)puVar5;
    if (-1 < (int)uVar6) break;
    bVar4 = *(byte *)CONCAT71(unaff_00000019,unaff_BL) & 0xd0;
    unaff_RBP = (byte *)(CONCAT62((int6)(uVar7 >> 0x10),
                                  CONCAT11(((char)bVar4 < '\0') << 7 | (bVar4 == 0) << 6 |
                                           cVar17 << 4 | ((POPCOUNT(bVar4) & 1U) == 0) << 2,
                                           (char)uVar7)) | 0x200);
    bVar4 = *unaff_RBP;
    *unaff_RBP = *unaff_RBP + 0x93;
    unaff_RSI = puVar14 + (ulonglong)bVar18 * -2 + 1;
    out(*puVar14,(short)uVar9);
    param_1 = param_1 + -1;
    if (param_1 != 0 && *unaff_RBP == 0) {
      uVar10 = *unaff_RSI;
      uVar6 = *unaff_RSI;
      *(undefined8 *)(pbVar11 + -8) = 0x58c27145;
      *(char *)((ulonglong)uVar9 + 0x5e) =
           *(char *)((ulonglong)uVar9 + 0x5e) + (char)param_1 +
           ((uint)puVar15 < uVar10 || (uint)puVar15 - uVar6 < (uint)(0x6c < bVar4));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar16 = puVar15 + (ulonglong)bVar18 * -2 + 1;
    uVar2 = in((short)uVar9);
    *puVar15 = uVar2;
    param_1 = CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                       CONCAT11((byte)((ulonglong)param_1 >> 8) &
                                *(byte *)((ulonglong)pbVar12 & 0xffffffff),(char)param_1));
    pcVar3 = (code *)swi(0xdb);
    (*pcVar3)();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a88df FUN_14d7a88df body=16 status=ok
// SIG undefined FUN_14d7a88df(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a88df(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  byte bVar4;
  uint uVar5;
  uint in_EAX;
  byte *unaff_RBX;
  byte *pbVar7;
  byte *pbVar8;
  byte *unaff_RBP;
  uint uVar9;
  uint *puVar10;
  uint *unaff_RSI;
  int unaff_EDI;
  undefined4 *puVar11;
  undefined4 *puVar12;
  byte in_CF;
  char in_AF;
  byte bVar13;
  ulonglong uVar6;
  
  bVar13 = 0;
  puVar12 = (undefined4 *)(ulonglong)(unaff_EDI + *(int *)(param_1 + 0x155700c4) + (uint)in_CF);
  uVar1 = *unaff_RSI;
  uVar9 = (uint)unaff_RSI;
  uVar5 = uVar9 - uVar1;
  uVar6 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  pbVar7 = (byte *)(ulonglong)in_EAX;
  pbVar8 = unaff_RBP;
  puVar10 = unaff_RSI;
  puVar11 = puVar12;
  if (uVar9 < uVar1 || uVar5 == 0) goto LAB_14d7a88c2;
  bVar13 = 1;
  out((short)param_2,(int)&stack0xfffffffffffffff8);
  if (uVar9 < uVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while( true ) {
    param_2 = (ulonglong)(*(uint *)(unaff_RBP + -0x1a958999) ^ 0xaabf2687);
    uVar5 = (int)puVar12 + 0x57adf1c0;
    pbVar8 = *(byte **)unaff_RBP;
    pbVar7 = unaff_RBP + 8;
    if ((POPCOUNT(uVar5 & 0xff) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar5 = uVar5 & 0xf7a4adde;
    uVar6 = (ulonglong)uVar5;
    puVar10 = unaff_RSI;
    puVar11 = puVar12;
LAB_14d7a88c2:
    if (-1 < (int)uVar5) break;
    bVar4 = *unaff_RBX & 0xd0;
    unaff_RBP = (byte *)(CONCAT62((int6)(uVar6 >> 0x10),
                                  CONCAT11(((char)bVar4 < '\0') << 7 | (bVar4 == 0) << 6 |
                                           in_AF << 4 | ((POPCOUNT(bVar4) & 1U) == 0) << 2,
                                           (char)uVar6)) | 0x200);
    bVar4 = *unaff_RBP;
    *unaff_RBP = *unaff_RBP + 0x93;
    unaff_RSI = puVar10 + (ulonglong)bVar13 * -2 + 1;
    out(*puVar10,(short)param_2);
    param_1 = param_1 + -1;
    if (param_1 != 0 && *unaff_RBP == 0) {
      uVar1 = *unaff_RSI;
      uVar5 = *unaff_RSI;
      *(undefined8 *)(pbVar7 + -8) = 0x58c27145;
      *(char *)(param_2 + 0x5e) =
           *(char *)(param_2 + 0x5e) + (char)param_1 +
           ((uint)puVar11 < uVar1 || (uint)puVar11 - uVar5 < (uint)(0x6c < bVar4));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar12 = puVar11 + (ulonglong)bVar13 * -2 + 1;
    uVar2 = in((short)param_2);
    *puVar11 = uVar2;
    param_1 = CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                       CONCAT11((byte)((ulonglong)param_1 >> 8) &
                                *(byte *)((ulonglong)pbVar8 & 0xffffffff),(char)param_1));
    pcVar3 = (code *)swi(0xdb);
    (*pcVar3)();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a88f3 FUN_14d7a88f3 body=3 status=ok
// SIG undefined FUN_14d7a88f3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a88f3(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a88f7 FUN_14d7a88f7 body=8 status=ok
// SIG undefined FUN_14d7a88f7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a88f7(longlong param_1)

{
  code *pcVar1;
  undefined4 in_EAX;
  char *pcVar2;
  char unaff_BL;
  char in_CF;
  char in_ZF;
  
  pcVar2 = (char *)(param_1 + -1);
  if (pcVar2 == (char *)0x0 || in_ZF == '\0') {
    uRam271d001ab85d7248 = in_EAX;
    *pcVar2 = *pcVar2 + unaff_BL + in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while( true ) {
    in(0xe);
    pcVar1 = (code *)swi(0xee);
    (*pcVar1)();
    if (pcVar2 != (char *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (iRam00000000e9efae0e != 0) break;
    pcVar2 = (char *)0x0;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7a88fb FUN_14d7a88fb body=8 status=ok
// SIG undefined FUN_14d7a88fb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a88fb(char *param_1)

{
  char unaff_BL;
  bool in_CF;
  
  if (!in_CF) {
    *param_1 = *param_1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bRam00000000521a325b = (byte)(CONCAT11(1,bRam00000000521a325b) >> 3) | bRam00000000521a325b << 6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8911 FUN_14d7a8911 body=2 status=ok
// SIG undefined FUN_14d7a8911(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8911(int param_1,byte param_2)

{
  byte bVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte *unaff_RBX;
  uint unaff_EBP;
  ulonglong uVar5;
  bool bVar6;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  bool bVar7;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  
  uVar3 = (ulonglong)&stack0x00000000 & 0xffffffff;
  bVar6 = (char)*unaff_RBX < '\0';
  *unaff_RBX = *unaff_RBX << 1;
  bVar7 = bVar6 != (char)*unaff_RBX < '\0';
  bVar1 = *unaff_RBX;
  while( true ) {
    uVar5 = uVar3 & 0xffffffff;
    *(ulonglong *)((ulonglong)unaff_EBP - 8) =
         (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)bVar7 * 0x800 | (ulonglong)(in_IF & 1) * 0x200
         | (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((char)bVar1 < '\0') * 0x80 |
         (ulonglong)(bVar1 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
         (ulonglong)((POPCOUNT(bVar1) & 1U) == 0) * 4 | (ulonglong)bVar6 |
         (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
         (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
    uVar4 = (ulonglong)(uint)(param_1 + iRam00000000e9efae0e);
    if (param_1 + iRam00000000e9efae0e != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    in(0xe);
    pcVar2 = (code *)swi(0xee);
    uVar3 = (*pcVar2)();
    if (uVar4 != 0) break;
    bVar6 = false;
    bVar7 = false;
    param_2 = param_2 | *(byte *)(uVar5 + 0x63d094);
    param_1 = 0;
    bVar1 = param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8951 FUN_14d7a8951 body=3 status=ok
// SIG undefined FUN_14d7a8951(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a8955) overlaps instruction at (ram,0x00014d7a8954)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a896f) */

void FUN_14d7a8951(void)

{
  undefined4 uVar1;
  longlong unaff_RBX;
  
  do {
    uVar1 = in(0xaa);
    *(byte *)(unaff_RBX + -0x160affb3) =
         *(byte *)(unaff_RBX + -0x160affb3) ^ (char)uVar1 * cRam0000000106755586;
    unaff_RBX = 0x95e64bc0;
  } while( true );
}



// FUNCTION 14d7a8961 FUN_14d7a8961 body=1 status=ok
// SIG undefined FUN_14d7a8961(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7a896f) */

void FUN_14d7a8961(void)

{
  byte in_AL;
  longlong unaff_RBX;
  
  do {
    *(byte *)(unaff_RBX + -0x160affb3) = *(byte *)(unaff_RBX + -0x160affb3) ^ in_AL;
    unaff_RBX = 0x95e64bc0;
    in_AL = in_AL & 0x2a;
  } while( true );
}



// FUNCTION 14d7a896a FUN_14d7a896a body=5 status=ok
// SIG undefined FUN_14d7a896a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a896a(void)

{
  byte in_AL;
  longlong unaff_RBX;
  undefined1 in_OF;
  
  out(0x95,in_AL);
  while (!(bool)in_OF) {
    in_AL = in_AL & 0x2a;
    *(byte *)(unaff_RBX + -0x160affb3) = *(byte *)(unaff_RBX + -0x160affb3) ^ in_AL;
    unaff_RBX = 0x95e64bc0;
    in_OF = false;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a897e FUN_14d7a897e body=5 status=ok
// SIG undefined FUN_14d7a897e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a89a8) overlaps instruction at (ram,0x00014d7a89a5)
    */

void FUN_14d7a897e(longlong param_1,ulonglong param_2)

{
  char *pcVar1;
  char cVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  undefined8 in_RAX;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined2 uVar7;
  longlong unaff_RBX;
  ulonglong *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 *unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  bool bVar12;
  ulonglong auStack_6525 [2];
  undefined1 auStack_6515 [25861];
  undefined8 uStack_10;
  
  if (param_1 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar7 = 0;
  uVar3 = in((short)param_2);
  puVar5 = (undefined4 *)(*(code *)CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar3))();
  pcVar1 = (char *)(unaff_RBX + -0x75 + (longlong)unaff_RBP * 8);
  *pcVar1 = *pcVar1 + (char)uVar7;
  *puVar5 = 0x8987b01;
  uVar3 = *unaff_RSI;
  uVar6 = CONCAT71((int7)((ulonglong)puVar5 >> 8),uVar3);
  bVar12 = false;
  puVar9 = (undefined8 *)&stack0xfffffffffffffff8;
  puVar11 = &stack0xfffffffffffffff8;
  cVar2 = '\x05';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar9 = puVar9 + -1;
    *puVar9 = *unaff_RBP;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
  puVar10 = auStack_6515;
  pcVar1 = unaff_RDI + -0xebf94f4;
  *pcVar1 = *pcVar1 + '\x01';
  cVar2 = *pcVar1;
  *unaff_RDI = uVar3;
  while( true ) {
    if (bVar12 || cVar2 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar11[-0x14] = puVar11[-0x14] + (char)((ushort)uVar7 >> 8);
    param_2 = (ulonglong)~(uint)param_2;
    *(undefined1 **)(puVar10 + -8) = puVar11;
    puVar8 = (ulonglong *)(puVar10 + -0x10);
    puVar10 = puVar10 + -0x10;
    *puVar8 = param_2;
    uVar4 = (ulonglong)puVar11 & 0xffffffff;
    puVar11 = (undefined1 *)(ulonglong)((uint)uVar6 | 0x514d3b04);
    cVar2 = (char)uVar4 * '\x02';
    if (-1 < cVar2) break;
    uVar4 = (longlong)*(int *)(CONCAT71((int7)(uVar4 >> 8),cVar2) + -0xf) * -0x56;
    uVar6 = uVar4 & 0xffffffff;
    bVar12 = (longlong)(int)uVar4 != uVar4;
  }
  DAT_9d009790615b75d7 = cVar2;
  unaff_RDI[0x2d] = unaff_RDI[0x2d] + (char)(uVar4 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8986 FUN_14d7a8986 body=72 status=ok
// SIG undefined FUN_14d7a8986(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a89a8) overlaps instruction at (ram,0x00014d7a89a5)
    */

void FUN_14d7a8986(undefined8 param_1,ulonglong param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  code *in_RAX;
  undefined4 *puVar4;
  ulonglong uVar5;
  char cVar6;
  char cVar7;
  longlong unaff_RBX;
  ulonglong *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 *unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  bool bVar12;
  ulonglong auStack_6525 [2];
  undefined1 auStack_6515 [25861];
  undefined8 uStack_10;
  
  cVar7 = (char)((ulonglong)param_1 >> 8);
  cVar6 = (char)param_1;
  puVar4 = (undefined4 *)(*in_RAX)();
  pcVar1 = (char *)(unaff_RBX + -0x75 + (longlong)unaff_RBP * 8);
  *pcVar1 = *pcVar1 + cVar6;
  *puVar4 = 0x8987b01;
  uVar2 = *unaff_RSI;
  uVar5 = CONCAT71((int7)((ulonglong)puVar4 >> 8),uVar2);
  bVar12 = false;
  puVar9 = (undefined8 *)&stack0xfffffffffffffff8;
  puVar11 = &stack0xfffffffffffffff8;
  cVar6 = '\x05';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar9 = puVar9 + -1;
    *puVar9 = *unaff_RBP;
    cVar6 = cVar6 + -1;
  } while ('\0' < cVar6);
  puVar10 = auStack_6515;
  pcVar1 = unaff_RDI + -0xebf94f4;
  *pcVar1 = *pcVar1 + '\x01';
  cVar6 = *pcVar1;
  *unaff_RDI = uVar2;
  while( true ) {
    if (bVar12 || cVar6 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar11[-0x14] = puVar11[-0x14] + cVar7;
    param_2 = (ulonglong)~(uint)param_2;
    *(undefined1 **)(puVar10 + -8) = puVar11;
    puVar8 = (ulonglong *)(puVar10 + -0x10);
    puVar10 = puVar10 + -0x10;
    *puVar8 = param_2;
    uVar3 = (ulonglong)puVar11 & 0xffffffff;
    puVar11 = (undefined1 *)(ulonglong)((uint)uVar5 | 0x514d3b04);
    cVar6 = (char)uVar3 * '\x02';
    if (-1 < cVar6) break;
    uVar3 = (longlong)*(int *)(CONCAT71((int7)(uVar3 >> 8),cVar6) + -0xf) * -0x56;
    uVar5 = uVar3 & 0xffffffff;
    bVar12 = (longlong)(int)uVar3 != uVar3;
  }
  DAT_9d009790615b75d7 = cVar6;
  unaff_RDI[0x2d] = unaff_RDI[0x2d] + (char)(uVar3 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a89b0 FUN_14d7a89b0 body=2 status=ok
// SIG undefined FUN_14d7a89b0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a89b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a89b5 FUN_14d7a89b5 body=5 status=ok
// SIG undefined FUN_14d7a89b5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a89b5(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a89cf FUN_14d7a89cf body=1 status=ok
// SIG undefined FUN_14d7a89cf(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a89cf(void)

{
  undefined1 in_AL;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a89d3 FUN_14d7a89d3 body=8 status=ok
// SIG undefined FUN_14d7a89d3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a89d3(longlong param_1,undefined2 param_2,undefined8 param_3,longlong param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 in_RAX;
  ulonglong uVar4;
  longlong unaff_RDI;
  char in_ZF;
  bool in_OF;
  
  if (in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(0x81,(int)in_RAX);
  param_1 = param_1 + -1;
  if (param_1 == 0 || in_ZF != '\0') {
    pcVar1 = (char *)(param_1 + unaff_RDI + 1);
    *pcVar1 = *pcVar1 + '\x01';
    out(param_2,(char)in_RAX);
    uVar3 = in(param_2);
    uVar4 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar3) & 0xffffffffffffffb4;
    pcVar1 = (char *)(uVar4 + 0x44bb1069);
    *pcVar1 = *pcVar1 + (char)uVar4;
    return;
  }
  pcVar2 = (code *)swi(1);
  (*pcVar2)(param_1,param_2,*(undefined4 *)(param_4 + 0x7a));
  return;
}



// FUNCTION 14d7a89db FUN_14d7a89db body=4 status=ok
// SIG undefined FUN_14d7a89db(void)

void FUN_14d7a89db(longlong param_1,undefined2 param_2,undefined8 param_3,longlong param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 in_RAX;
  ulonglong uVar4;
  longlong unaff_RDI;
  char in_ZF;
  
  param_1 = param_1 + -1;
  if (param_1 == 0 || in_ZF != '\0') {
    pcVar1 = (char *)(param_1 + unaff_RDI + 1);
    *pcVar1 = *pcVar1 + '\x01';
    out(param_2,(char)in_RAX);
    uVar3 = in(param_2);
    uVar4 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar3) & 0xffffffffffffffb4;
    pcVar1 = (char *)(uVar4 + 0x44bb1069);
    *pcVar1 = *pcVar1 + (char)uVar4;
    return;
  }
  pcVar2 = (code *)swi(1);
  (*pcVar2)(param_1,param_2,*(undefined4 *)(param_4 + 0x7a));
  return;
}



// FUNCTION 14d7a89df FUN_14d7a89df body=19 status=ok
// SIG undefined FUN_14d7a89df(void)

void FUN_14d7a89df(longlong param_1,undefined2 param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 in_RAX;
  ulonglong uVar4;
  longlong unaff_RDI;
  char in_ZF;
  
  if (param_1 + -1 == 0 || in_ZF != '\0') {
    pcVar1 = (char *)(param_1 + -1 + unaff_RDI + 1);
    *pcVar1 = *pcVar1 + '\x01';
    out(param_2,(char)in_RAX);
    uVar3 = in(param_2);
    uVar4 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar3) & 0xffffffffffffffb4;
    pcVar1 = (char *)(uVar4 + 0x44bb1069);
    *pcVar1 = *pcVar1 + (char)uVar4;
    return;
  }
  pcVar2 = (code *)swi(1);
  (*pcVar2)();
  return;
}



// FUNCTION 14d7a89ef FUN_14d7a89ef body=11 status=ok
// SIG undefined FUN_14d7a89ef(void)

void FUN_14d7a89ef(void)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x44bb1069);
  *pcVar1 = *pcVar1 + in_AL;
  return;
}



// FUNCTION 14d7a89fc FUN_14d7a89fc body=3 status=ok
// SIG undefined FUN_14d7a89fc(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a89fc(void)

{
  uint *puVar1;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  
  puVar1 = (uint *)(CONCAT44(unaff_0000001c,unaff_EBX) + -0x24);
  *puVar1 = *puVar1 | unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8a05 FUN_14d7a8a05 body=24 status=ok
// SIG undefined FUN_14d7a8a05(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8a05(undefined8 param_1,undefined2 param_2)

{
  code *pcVar1;
  undefined4 in_EAX;
  
  out(param_2,in_EAX);
  in(param_2);
  pcVar1 = (code *)swi(0xfd);
  (*pcVar1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8a25 FUN_14d7a8a25 body=6 status=ok
// SIG undefined FUN_14d7a8a25(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8a25(byte param_1)

{
  byte *pbVar1;
  char *pcVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  undefined8 in_RAX;
  ulonglong uVar6;
  longlong unaff_RBX;
  longlong *unaff_RBP;
  longlong lVar7;
  byte *unaff_RDI;
  undefined1 in_CF;
  byte in_AF;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (!in_ZF && in_OF == in_SF) {
    return;
  }
  uVar3 = *(uint *)(unaff_RBX + -0x341694bd);
  *(uint *)(unaff_RBX + -0x341694bd) =
       (uint)(CONCAT14(in_CF,uVar3) >> (param_1 & 0x1f)) | uVar3 << 0x21 - (param_1 & 0x1f);
  bVar5 = (byte)in_RAX;
  *unaff_RDI = bVar5;
  bVar4 = 9 < (bVar5 & 0xf) | in_AF;
  uVar6 = CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar5 + bVar4 * -6) & 0xffffffffffffff0f;
  bVar5 = (byte)uVar6;
  lVar7 = *unaff_RBP;
  pbVar1 = (byte *)(CONCAT62((int6)(uVar6 >> 0x10),
                             CONCAT11((char)((ulonglong)in_RAX >> 8) - bVar4,bVar5)) + 0x554f00d2);
  *pbVar1 = *pbVar1 >> 3;
  unaff_RDI[1] = bVar5;
  pcVar2 = (char *)((longlong)unaff_RBP + lVar7 * 2 + 8);
  *pcVar2 = *pcVar2 + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8a2d FUN_14d7a8a2d body=3 status=ok
// SIG undefined FUN_14d7a8a2d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8a2d(void)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8a31 FUN_14d7a8a31 body=5 status=ok
// SIG undefined FUN_14d7a8a31(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8a31(void)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8a39 FUN_14d7a8a39 body=17 status=ok
// SIG undefined FUN_14d7a8a39(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8a39(undefined8 param_1,undefined2 param_2)

{
  int *unaff_RSI;
  float10 in_ST0;
  
  *unaff_RSI = (int)ROUND(in_ST0);
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8a5c FUN_14d7a8a5c body=8 status=ok
// SIG undefined FUN_14d7a8a5c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8a5c(undefined8 param_1,undefined1 param_2)

{
  longlong unaff_RBP;
  
  LOCK();
  *(undefined1 *)(unaff_RBP + -0x6c4d2585) = param_2;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8a64 FUN_14d7a8a64 body=6 status=ok
// SIG undefined FUN_14d7a8a64(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8a64(undefined8 param_1,undefined1 param_2)

{
  longlong unaff_RBP;
  
  LOCK();
  *(undefined1 *)(unaff_RBP + -0x6c4d2585) = param_2;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8a79 FUN_14d7a8a79 body=92 status=ok
// SIG undefined FUN_14d7a8a79(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a8a79(byte param_1)

{
  byte *pbVar1;
  char *pcVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined8 in_RAX;
  ulonglong uVar7;
  longlong *unaff_RBP;
  longlong lVar8;
  char *unaff_RSI;
  uint *unaff_RDI;
  byte in_AF;
  
  *unaff_RDI = *unaff_RDI & (uint)unaff_RDI;
  _DAT_4f00948fad4797fd =
       (undefined4)
       CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                CONCAT11((char)((ulonglong)in_RAX >> 8) + *unaff_RSI,*unaff_RSI));
  uVar6 = in(0x91);
  uVar3 = *(uint *)((longlong)unaff_RBP + 0x7dfb161);
  _DAT_ba70e33e =
       (uint)(((ulonglong)_DAT_ba70e33e | 0x100000000) >> (param_1 & 0x1f)) |
       (uint)(((ulonglong)_DAT_ba70e33e | 0x100000000) << 0x21 - (param_1 & 0x1f));
  bVar5 = (byte)uVar6;
  *(byte *)(ulonglong)uVar3 = bVar5;
  bVar4 = 9 < (bVar5 & 0xf) | in_AF;
  uVar7 = (ulonglong)CONCAT31((int3)((uint)uVar6 >> 8),bVar5 + bVar4 * -6) & 0xffffffffffffff0f;
  bVar5 = (byte)uVar7;
  lVar8 = *unaff_RBP;
  pbVar1 = (byte *)(CONCAT62((int6)(uVar7 >> 0x10),CONCAT11((char)((uint)uVar6 >> 8) - bVar4,bVar5))
                   + 0x554f00d2);
  *pbVar1 = *pbVar1 >> 3;
  ((byte *)(ulonglong)uVar3)[1] = bVar5;
  pcVar2 = (char *)((longlong)unaff_RBP + lVar8 * 2 + 8);
  *pcVar2 = *pcVar2 + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8ad9 FUN_14d7a8ad9 body=16 status=ok
// SIG undefined FUN_14d7a8ad9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8ad9(undefined8 param_1,uint *param_2)

{
  uint unaff_ESP;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  float10 in_ST0;
  
  *unaff_RDI = *unaff_RSI;
  *(double *)((longlong)unaff_RSI + 0x44) = (double)in_ST0;
  *param_2 = *param_2 & unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8af2 FUN_14d7a8af2 body=7 status=ok
// SIG undefined FUN_14d7a8af2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8af2(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  char *pcVar2;
  char cVar3;
  undefined6 in_register_00000002;
  uint unaff_EBX;
  undefined4 *unaff_RSI;
  bool in_CF;
  bool bVar4;
  char in_PF;
  char in_AF;
  bool in_ZF;
  char in_SF;
  longlong unaff_retaddr;
  
  if (param_1 != 1) {
    if (in_CF || in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*unaff_RSI,(short)param_2);
  if (in_CF || in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar1 = (uint *)((ulonglong)unaff_EBX + 0x65);
  bVar4 = (*puVar1 & 1) != 0;
  *puVar1 = *puVar1 >> 1 | (uint)bVar4 << 0x1f;
  cVar3 = (char)((ulonglong)param_2 >> 8) + *(char *)(unaff_retaddr + -0x3aa35a3c);
  if ((POPCOUNT(cVar3) & 1U) != 0) {
    *(undefined1 *)
     CONCAT62(in_register_00000002,
              CONCAT11(in_SF << 7 | in_ZF << 6 | in_AF << 4 | in_PF << 2 | 2U | bVar4 |
                       (byte)param_2,0xe1)) = 0xed;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (cVar3 == '\0') {
    pcVar2 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),(ushort)(byte)param_2) + -0x2b);
    *pcVar2 = *pcVar2 + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8afa FUN_14d7a8afa body=8 status=ok
// SIG undefined FUN_14d7a8afa(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a8b5e) overlaps instruction at (ram,0x00014d7a8b5d)
    */

void FUN_14d7a8afa(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  char *pcVar2;
  undefined1 in_AL;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong lVar3;
  char cVar4;
  longlong unaff_RBP;
  longlong unaff_RDI;
  bool bVar5;
  char in_PF;
  char in_AF;
  char in_ZF;
  char in_SF;
  
  cVar4 = (char)((ulonglong)param_2 >> 8);
  lVar3 = param_1 + -1;
  if (lVar3 == 0 || in_ZF == '\0') {
    puVar1 = (uint *)(unaff_RBP + 0x65);
    bVar5 = (*puVar1 & 1) != 0;
    *puVar1 = *puVar1 >> 1 | (uint)bVar5 << 0x1f;
    cVar4 = cVar4 + *(char *)(unaff_RDI + -0x3aa35a3c);
    if ((POPCOUNT(cVar4) & 1U) != 0) {
      *(undefined1 *)
       CONCAT44(in_register_00000004,
                CONCAT22(in_register_00000002,
                         CONCAT11(in_SF << 7 | in_ZF << 6 | in_AF << 4 | in_PF << 2 | 2U | bVar5 |
                                  (byte)param_2,in_AL))) = 0xed;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    lVar3 = param_1 + -2;
    if (lVar3 != 0 && cVar4 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *(undefined8 *)
     ((ulonglong)
      (uint)((int)&stack0x00000000 + CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) - 8) =
         0xffffffffffffffd5;
  }
  pcVar2 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(cVar4,(byte)param_2)) +
                   -0x2b);
  *pcVar2 = *pcVar2 + (char)((ulonglong)lVar3 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8b02 FUN_14d7a8b02 body=19 status=ok
// SIG undefined FUN_14d7a8b02(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8b02(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  undefined1 in_AL;
  undefined6 in_register_00000002;
  longlong unaff_RDI;
  byte in_CF;
  char in_PF;
  char in_AF;
  char in_ZF;
  char in_SF;
  
  cVar2 = (char)((ulonglong)param_2 >> 8) + *(char *)(unaff_RDI + -0x3aa35a3c);
  if ((POPCOUNT(cVar2) & 1U) != 0) {
    *(undefined1 *)
     CONCAT62(in_register_00000002,
              CONCAT11(in_SF << 7 | in_ZF << 6 | in_AF << 4 | in_PF << 2 | 2U | in_CF |
                       (byte)param_2,in_AL)) = 0xed;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 + -1 == 0 || cVar2 == '\0') {
    pcVar1 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(cVar2,(byte)param_2)) +
                     -0x2b);
    *pcVar1 = *pcVar1 + (char)((ulonglong)(param_1 + -1) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8b1f FUN_14d7a8b1f body=6 status=ok
// SIG undefined FUN_14d7a8b1f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8b1f(undefined8 param_1)

{
  longlong unaff_RDI;
  
  *(byte *)(unaff_RDI + -0x1fc38b72) =
       *(byte *)(unaff_RDI + -0x1fc38b72) & (byte)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8b27 FUN_14d7a8b27 body=1 status=ok
// SIG undefined FUN_14d7a8b27(void)

void FUN_14d7a8b27(void)

{
  char unaff_BL;
  longlong unaff_RBP;
  
  *(char *)(unaff_RBP + -0x29a27f15) = *(char *)(unaff_RBP + -0x29a27f15) + unaff_BL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a8b2b FUN_14d7a8b2b body=4 status=ok
// SIG undefined FUN_14d7a8b2b(void)

void FUN_14d7a8b2b(void)

{
  char unaff_BL;
  longlong unaff_RBP;
  
  *(char *)(unaff_RBP + -0x29a27f15) = *(char *)(unaff_RBP + -0x29a27f15) + unaff_BL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a8b3c FUN_14d7a8b3c body=3 status=ok
// SIG undefined FUN_14d7a8b3c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8b3c(undefined8 param_1,undefined2 param_2)

{
  undefined4 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8b45 FUN_14d7a8b45 body=1 status=ok
// SIG undefined FUN_14d7a8b45(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8b45(longlong param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int unaff_EBP;
  undefined1 *unaff_RDI;
  byte in_CF;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  uVar2 = uRambb8ff3192d00e873;
  *(int *)(param_1 + -0x68e054cb) = (*(int *)(param_1 + -0x68e054cb) - unaff_EBP) - (uint)in_CF;
  unaff_RDI[0xae004] = unaff_RDI[0xae004] + (char)((uint)uVar2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8b4a FUN_14d7a8b4a body=5 status=ok
// SIG undefined FUN_14d7a8b4a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8b4a(longlong param_1)

{
  uint in_EAX;
  int unaff_EBP;
  longlong unaff_RDI;
  
  *(int *)(param_1 + -0x68e054cb) =
       (*(int *)(param_1 + -0x68e054cb) - unaff_EBP) - (uint)(in_EAX < 0xbb8ff319);
  *(char *)(unaff_RDI + 0xae003) = *(char *)(unaff_RDI + 0xae003) + (char)(in_EAX + 0x44700ce7 >> 8)
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8b5b FUN_14d7a8b5b body=1 status=ok
// SIG undefined FUN_14d7a8b5b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8b5b(void)

{
  int in_EAX;
  
  *(undefined8 *)((ulonglong)(uint)((int)&stack0x00000000 + in_EAX) - 8) = 0xffffffffffffffd5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8b79 FUN_14d7a8b79 body=3 status=ok
// SIG undefined FUN_14d7a8b79(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x4000abb2) */

void FUN_14d7a8b79(undefined1 param_1,undefined1 param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  uint *in_RAX;
  undefined1 *unaff_RDI;
  undefined1 unaff_retaddr;
  
  *in_RAX = *in_RAX << 4 | *in_RAX >> 0x1c;
  uVar2 = in(CONCAT11(param_1,param_2));
  *unaff_RDI = uVar2;
  unaff_RDI[1] = unaff_retaddr;
  pcVar1 = (char *)(((ulonglong)in_RAX & 0xffffffff) + 0xae003);
  *pcVar1 = *pcVar1 + (char)((ulonglong)(unaff_RDI + 2) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8b8a FUN_14d7a8b8a body=3 status=ok
// SIG undefined FUN_14d7a8b8a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8b8a(byte param_1,undefined2 param_2)

{
  uint in_EAX;
  longlong unaff_RBX;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  bool in_OF;
  
  *unaff_RDI = *unaff_RSI;
  if (in_OF) {
    *(char *)(unaff_RBX + -0x72) = *(char *)(unaff_RBX + -0x72) << (param_1 & 0x1f);
    out(param_2,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)((ulonglong)in_EAX + 0xae003) =
       *(char *)((ulonglong)in_EAX + 0xae003) + (char)((ulonglong)(unaff_RDI + 1) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8b8e FUN_14d7a8b8e body=5 status=ok
// SIG undefined FUN_14d7a8b8e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8b8e(undefined8 param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  bool in_CF;
  
  if (in_CF) {
    out(param_2,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8bc6 FUN_14d7a8bc6 body=8 status=ok
// SIG undefined FUN_14d7a8bc6(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a8bac) overlaps instruction at (ram,0x00014d7a8baa)
    */
/* WARNING: Removing unreachable block (ram,0x4000abb2) */

void FUN_14d7a8bc6(longlong param_1,char *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  int *piVar4;
  byte bVar5;
  byte *in_RAX;
  byte bVar7;
  uint uVar8;
  ulonglong unaff_RBX;
  char *pcVar9;
  undefined8 *puVar10;
  longlong unaff_RBP;
  uint *unaff_RSI;
  byte *unaff_RDI;
  int *in_R11;
  char unaff_R14B;
  char in_CF;
  undefined8 *unaff_retaddr;
  longlong lVar6;
  
  bVar7 = (byte)((ulonglong)param_1 >> 8);
  puVar10 = (undefined8 *)register0x00000020;
  if (in_CF != '\0') {
    uVar8 = (uint)unaff_RBX ^ *unaff_RSI;
    unaff_RBX = (ulonglong)uVar8;
    if ((POPCOUNT(uVar8 & 0xff) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(uint *)((longlong)unaff_RSI + -0x1af2c16d) =
         *(uint *)((longlong)unaff_RSI + -0x1af2c16d) ^ 0x25;
    *param_2 = *param_2 + bVar7;
    *(char *)((longlong)in_R11 + -0x5c96da7d) =
         *(char *)((longlong)in_R11 + -0x5c96da7d) + unaff_R14B;
    in_RAX = (byte *)(ulonglong)
                     ((int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                    CONCAT11((char)((ulonglong)in_RAX >> 8) + (char)in_RAX,
                                             (char)in_RAX)) + 0x73f5ed8c);
    puVar10 = unaff_retaddr;
    if (param_1 == 0) {
      pbVar2 = (byte *)*unaff_retaddr;
      *unaff_retaddr = pbVar2;
      *unaff_RDI = *pbVar2;
      in_RAX[0xae003] = in_RAX[0xae003] + (char)((ulonglong)(unaff_RDI + 1) >> 8);
      unaff_retaddr[-1] = 0xffffffffffffffd5;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  bVar5 = (byte)in_RAX | *in_RAX;
  lVar6 = CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar5);
  pbVar2 = (byte *)(unaff_RBP + -0x29);
  bVar3 = *pbVar2;
  *pbVar2 = *pbVar2 + bVar7;
  pcVar9 = (char *)CONCAT62((int6)(unaff_RBX >> 0x10),CONCAT11(0x2a,(byte)unaff_RBX));
  piVar4 = (int *)(lVar6 * 2);
  *piVar4 = (*piVar4 - (int)param_1) - (uint)CARRY1(bVar3,bVar7);
  if (-1 < *piVar4) {
    puVar10[-1] = CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                           CONCAT11((char)((ulonglong)in_RAX >> 8) -
                                                    ((byte)param_2 | 0xef),bVar5)) >> 8),
                           bVar5 + 0x5a + (bVar5 < 6));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(lVar6 + -0x3b);
  *pcVar1 = *pcVar1 + bVar5;
  unaff_RDI[-0xb512b8c] =
       unaff_RDI[-0xb512b8c] >> 1 | ((byte)pcVar9[0xff00000000] < (byte)unaff_RBX) << 7;
  bVar7 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + 0x2a;
  *unaff_RDI = (byte)*unaff_RSI;
  *pcVar9 = *pcVar9 + '\x01';
  *in_R11 = (*in_R11 - ((int)unaff_RSI + 1)) - (uint)(0xd5 < bVar7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8bd2 FUN_14d7a8bd2 body=37 status=ok
// SIG undefined FUN_14d7a8bd2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8bd2(int param_1)

{
  char *pcVar1;
  byte bVar2;
  int *piVar3;
  char cVar4;
  ulonglong in_RAX;
  byte unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  byte *unaff_RSI;
  byte *unaff_RDI;
  int *in_R11;
  longlong lVar5;
  
  *(uint *)(&stack0x6d00000a + in_RAX * 4) = *(uint *)(&stack0x6d00000a + in_RAX * 4) ^ (uint)in_RAX
  ;
  cVar4 = *(char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (in_RAX & 0xff));
  lVar5 = CONCAT71((int7)(in_RAX >> 8),cVar4);
  piVar3 = (int *)(lVar5 * 2);
  *piVar3 = *piVar3 - param_1;
  if (-1 < *piVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(lVar5 + -0x3b);
  *pcVar1 = *pcVar1 + cVar4;
  unaff_RDI[-0xb512b8c] =
       unaff_RDI[-0xb512b8c] >> 1 |
       (*(byte *)(CONCAT62(unaff_0000001a,CONCAT11(0x2a,unaff_BL)) + 0xff00000000) < unaff_BL) << 7;
  bVar2 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + 0x2a;
  *unaff_RDI = *unaff_RSI;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(0x2a,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(0x2a,unaff_BL)) + '\x01';
  *in_R11 = (*in_R11 - ((int)unaff_RSI + 1)) - (uint)(0xd5 < bVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a8bf9 FUN_14d7a8bf9 body=6 status=ok
// SIG undefined FUN_14d7a8bf9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a8bf9(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


