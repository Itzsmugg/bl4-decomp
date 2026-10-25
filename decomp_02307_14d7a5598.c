// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14d7a5598 FUN_14d7a5598 body=35 status=ok
// SIG undefined FUN_14d7a5598(void)

void FUN_14d7a5598(char param_1,undefined2 param_2)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 unaff_EBX;
  uint unaff_EBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
  uVar1 = in(param_2);
  *(undefined1 *)(unaff_RDI + 1) = uVar1;
  bVar2 = *(byte *)(((longlong)unaff_RDI + 5) * 3);
  *(char *)((longlong)unaff_RDI + -0x43) = *(char *)((longlong)unaff_RDI + -0x43) + param_1;
  *(uint *)((ulonglong)(unaff_EBP | 0x7ffb377d) + 0x4d1acc6a) =
       CONCAT22((short)((uint)unaff_EBX >> 0x10),
                CONCAT11((byte)((uint)unaff_EBX >> 8) | bVar2,(char)unaff_EBX));
  return;
}



// FUNCTION 14d7a55bd FUN_14d7a55bd body=25 status=ok
// SIG undefined FUN_14d7a55bd(void)

void FUN_14d7a55bd(undefined8 param_1,undefined2 param_2,char *param_3)

{
  code *pcVar1;
  byte bVar2;
  undefined4 in_EAX;
  uint uVar3;
  undefined4 *unaff_RDI;
  bool in_CF;
  bool bVar4;
  bool in_ZF;
  
  bVar2 = (byte)in_EAX;
  if (!in_CF && !in_ZF) {
    *unaff_RDI = in_EAX;
    out(param_2,bVar2);
    uVar3 = FUN_1405e98ed();
    do {
      uVar3 = uVar3 + 0xa13113a0;
    } while ((POPCOUNT(uVar3 & 0xff) & 1U) == 0);
    *param_3 = *param_3 + (char)unaff_RDI + '\x04';
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  bVar4 = CARRY1(bRam000000015a85bc8a,bVar2);
  bRam000000015a85bc8a = bRam000000015a85bc8a + bVar2;
  if (!bVar4 && bRam000000015a85bc8a != '\0') {
    pcVar1 = (code *)swi(1);
    (*pcVar1)();
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7a55ce FUN_14d7a55ce body=1 status=ok
// SIG undefined FUN_14d7a55ce(void)

void FUN_14d7a55ce(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7a55d4 FUN_14d7a55d4 body=11 status=ok
// SIG undefined FUN_14d7a55d4(void)

void FUN_14d7a55d4(byte param_1,undefined8 param_2,char *param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte bVar4;
  undefined4 in_EAX;
  uint uVar5;
  char cVar6;
  undefined1 unaff_BL;
  undefined6 unaff_0000001a;
  undefined1 *unaff_RSI;
  longlong unaff_RDI;
  undefined8 uVar7;
  
  cVar6 = (char)param_2 << (param_1 & 0x1f);
  uVar7 = CONCAT71((int7)((ulonglong)param_2 >> 8),cVar6);
  out(*unaff_RSI,(short)uVar7);
  pbVar3 = (byte *)(unaff_RDI + 4);
  bVar4 = *pbVar3;
  *pbVar3 = *pbVar3 | (byte)((uint)in_EAX >> 8);
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(bVar4,unaff_BL)) + 0x3f + (longlong)pbVar3 * 4)
  ;
  *pcVar1 = *pcVar1 >> 1;
  LOCK();
  uVar2 = *(undefined4 *)(unaff_RSI + 0xd);
  *(undefined4 *)(unaff_RSI + 0xd) = in_EAX;
  UNLOCK();
  *(int *)pbVar3 = (int)uVar7;
  out((short)uVar2,cVar6);
  uVar5 = FUN_1405e98ed(param_1,uVar2);
  do {
    uVar5 = uVar5 + 0xa13113a0;
  } while ((POPCOUNT(uVar5 & 0xff) & 1U) == 0);
  *param_3 = *param_3 + (char)pbVar3 + '\x04';
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a55e0 FUN_14d7a55e0 body=2 status=ok
// SIG undefined FUN_14d7a55e0(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7a560e) */

void FUN_14d7a55e0(char param_1)

{
  byte bVar1;
  uint in_EAX;
  undefined4 unaff_EBX;
  longlong unaff_RDI;
  char in_SF;
  char in_OF;
  
  if (in_OF != in_SF) {
    bVar1 = *(byte *)(unaff_RDI * 3);
    *(char *)(unaff_RDI + -0x48) = *(char *)(unaff_RDI + -0x48) + param_1;
    *(uint *)((ulonglong)(in_EAX | 0x4ff93779) + 0x4d1acc6a) =
         CONCAT22((short)((uint)unaff_EBX >> 0x10),
                  CONCAT11((byte)((uint)unaff_EBX >> 8) | bVar1,(char)unaff_EBX));
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5606 FUN_14d7a5606 body=4 status=ok
// SIG undefined FUN_14d7a5606(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5606(void)

{
  in(0x30);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a560a FUN_14d7a560a body=8 status=ok
// SIG undefined FUN_14d7a560a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a560a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5628 FUN_14d7a5628 body=11 status=ok
// SIG undefined FUN_14d7a5628(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5628(void)

{
  undefined1 *unaff_RBX;
  float10 in_ST0;
  
  *unaff_RBX = 0x14;
  *(int *)(unaff_RBX + 0x6b) = (int)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5645 FUN_14d7a5645 body=8 status=ok
// SIG undefined FUN_14d7a5645(void)

void FUN_14d7a5645(void)

{
  int iVar1;
  code *pcVar2;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  
  iVar1 = *(int *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0xc);
  *(char *)(unaff_RBP + -0x12) = *(char *)(unaff_RBP + -0x12) + unaff_BH;
  pcVar2 = (code *)swi(1);
  (*pcVar2)(iVar1 * 0x6977e67c);
  return;
}



// FUNCTION 14d7a5656 FUN_14d7a5656 body=42 status=ok
// SIG undefined FUN_14d7a5656(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14d7a5656(longlong param_1,undefined2 param_2)

{
  uint *puVar1;
  char cVar2;
  undefined1 uVar3;
  short in_AX;
  byte bVar4;
  undefined1 *unaff_RBX;
  uint uVar5;
  longlong unaff_RBP;
  longlong unaff_RDI;
  byte *pbVar6;
  byte bVar7;
  float10 in_ST0;
  
  puVar1 = (uint *)(unaff_RBP + -0x7b);
  uVar5 = *puVar1;
  *puVar1 = *puVar1 + (uint)unaff_RDI;
  uVar5 = ((int)unaff_RBP - *(int *)(unaff_RDI + 0x23b881d5)) - (uint)CARRY4(uVar5,(uint)unaff_RDI);
  pbVar6 = (byte *)(unaff_RDI + -5);
  puVar1 = (uint *)(((ulonglong)uVar5 - 0x6b514760) + param_1 * 4);
  *puVar1 = *puVar1 & 0xfda2a8d3;
  out(_DAT_cc09b917,param_2);
  cVar2 = (char)((ushort)in_AX >> 8);
  if (-1 < (int)*puVar1) {
    uVar3 = in(param_2);
    *(undefined4 *)pbVar6 = _DAT_cc09b913;
    return CONCAT31((int3)cVar2,unaff_RBX[(ulonglong)CONCAT31((int3)cVar2,uVar3) & 0xff]);
  }
  if ((POPCOUNT(*puVar1 & 0xff) & 1U) == 0) {
    in(param_2);
    *unaff_RBX = 0x14;
    *(int *)(unaff_RBX + 0x6b) = (int)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRam60480cff243ded31 = (int)in_AX;
  *(char *)(ulonglong)(uint)(int)in_AX = cVar2;
  bVar4 = *pbVar6;
  *pbVar6 = *pbVar6 + 0x4f;
  if (bVar4 < 0xb1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar6 = unaff_RBX + -0xf51d216;
  bVar4 = (byte)((ushort)param_2 >> 8);
  bVar7 = CARRY1(*pbVar6,bVar4);
  *pbVar6 = *pbVar6 + bVar4;
  _DAT_0000009a = 0x14d7a569d;
  func_0x0001869c7b12();
  out(DAT_cc09b913,param_2);
  iRam00000000cc09b927 = iRam00000000cc09b927 + uVar5 + (uint)bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5686 FUN_14d7a5686 body=2 status=ok
// SIG undefined FUN_14d7a5686(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5686(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a568a FUN_14d7a568a body=38 status=ok
// SIG undefined FUN_14d7a568a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a568a(uint param_1,undefined2 param_2)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  longlong in_RAX;
  byte bVar4;
  longlong unaff_RBX;
  int unaff_EBP;
  undefined1 *unaff_RSI;
  byte bVar5;
  
  puVar1 = (uint *)(in_RAX + -0x4ed07fe0);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + param_1;
  if (!CARRY4(uVar3,param_1) && *puVar1 != 0) {
    pbVar2 = (byte *)(unaff_RBX + -0xf51d216);
    bVar4 = (byte)((ushort)param_2 >> 8);
    bVar5 = CARRY1(*pbVar2,bVar4);
    *pbVar2 = *pbVar2 + bVar4;
    func_0x0001869c7b12();
    out(*unaff_RSI,param_2);
    *(uint *)(unaff_RSI + 0x16) = *(int *)(unaff_RSI + 0x16) + unaff_EBP + (uint)bVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a56b3 FUN_14d7a56b3 body=6 status=ok
// SIG undefined FUN_14d7a56b3(void)

undefined1 FUN_14d7a56b3(undefined8 param_1,undefined2 param_2)

{
  byte bVar1;
  longlong unaff_RBX;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  bVar1 = in(param_2);
  *unaff_RDI = *unaff_RSI;
  return *(undefined1 *)(unaff_RBX + (ulonglong)bVar1);
}



// FUNCTION 14d7a56c4 FUN_14d7a56c4 body=2 status=ok
// SIG undefined FUN_14d7a56c4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a56c4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a56c8 FUN_14d7a56c8 body=7 status=ok
// SIG undefined FUN_14d7a56c8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a56c8(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  int in_EAX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  if (in_EAX != -0x72b782fb) {
    *(char *)(unaff_RDI + 0x5a) = *(char *)(unaff_RDI + 0x5a) << 1;
    pcVar2 = (code *)swi(1);
    (*pcVar2)();
    return;
  }
  puVar1 = (undefined4 *)(param_2 + -0x51dac542 + unaff_RSI * 8);
  *puVar1 = *puVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a56d0 FUN_14d7a56d0 body=2 status=ok
// SIG undefined FUN_14d7a56d0(void)

void FUN_14d7a56d0(undefined8 param_1)

{
  code *pcVar1;
  undefined8 unaff_RDI;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)(param_1,unaff_RDI);
  return;
}



// FUNCTION 14d7a56d5 FUN_14d7a56d5 body=1 status=ok
// SIG undefined FUN_14d7a56d5(void)

void FUN_14d7a56d5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7a56dd FUN_14d7a56dd body=8 status=ok
// SIG undefined FUN_14d7a56dd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a56dd(undefined4 param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 in_RAX;
  longlong lVar6;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  byte in_CF;
  char in_AF;
  byte bVar5;
  
  *unaff_RDI = *unaff_RSI;
  bVar5 = (byte)in_RAX;
  bVar2 = bVar5 - 0xd;
  bVar4 = bVar2 + in_CF;
  lVar6 = CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                   CONCAT11(((char)bVar4 < '\0') << 7 | (bVar4 == 0) << 6 | in_AF << 4 |
                            ((POPCOUNT(bVar4) & 1U) == 0) << 2 | 2U |
                            (0xc < bVar5 || CARRY1(bVar2,in_CF)),
                            *(undefined1 *)
                             (CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
                             (ulonglong)bVar4)));
  if (SCARRY1(bVar5,-0xd) != SCARRY1(bVar2,in_CF)) {
    pcVar1 = (char *)(lVar6 + 0xcabcd61 + param_2 * 2);
    *pcVar1 = *pcVar1 + unaff_BH;
    uVar3 = rdmsr(param_1);
    out(0x29,(int)uVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(0x31,(int)lVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a56ea FUN_14d7a56ea body=3 status=ok
// SIG undefined FUN_14d7a56ea(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a56ea(void)

{
  undefined4 in_EAX;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a56ee FUN_14d7a56ee body=4 status=ok
// SIG undefined FUN_14d7a56ee(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a56ee(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = rdmsr(param_1);
  out(0x29,(int)uVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a56f6 FUN_14d7a56f6 body=2 status=ok
// SIG undefined FUN_14d7a56f6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a56f6(void)

{
  undefined4 in_EAX;
  
  out(0x31,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a56ff FUN_14d7a56ff body=13 status=ok
// SIG undefined FUN_14d7a56ff(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a56ff(void)

{
  undefined1 in_AL;
  undefined4 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = in_AL;
  *(undefined4 *)(unaff_RDI + 1) = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5714 FUN_14d7a5714 body=3 status=ok
// SIG undefined FUN_14d7a5714(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5714(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a571c FUN_14d7a571c body=28 status=ok
// SIG undefined FUN_14d7a571c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a571c(ulonglong *param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBX;
  ulonglong unaff_retaddr;
  
  *param_1 = *param_1 ^ 0xffffffffffffff84;
  if (param_1 != (ulonglong *)&DAT_00000001) {
    if (*param_1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((byte)((byte)((uint)in_EAX >> 8) | (byte)((uint)unaff_EBX >> 8)) <
      *(byte *)(unaff_retaddr & 0xffffffff)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5738 FUN_14d7a5738 body=3 status=ok
// SIG undefined FUN_14d7a5738(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5738(undefined8 param_1,int param_2)

{
  code *pcVar1;
  int unaff_EBX;
  longlong unaff_RBP;
  float10 in_ST0;
  
  pcVar1 = (code *)swi(0x9e);
  (*pcVar1)(param_1,param_2 - *(int *)(unaff_RBP + -0x1c));
  *(short *)(longlong)(unaff_EBX + -0x4cdb1618) = (short)ROUND(in_ST0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a573c FUN_14d7a573c body=3 status=ok
// SIG undefined FUN_14d7a573c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a573c(void)

{
  int unaff_EBX;
  float10 in_ST0;
  
  *(short *)(longlong)(unaff_EBX + -0x4cdb1618) = (short)ROUND(in_ST0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5744 FUN_14d7a5744 body=2 status=ok
// SIG undefined FUN_14d7a5744(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5744(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5748 FUN_14d7a5748 body=15 status=ok
// SIG undefined FUN_14d7a5748(void)

void FUN_14d7a5748(void)

{
  char *pcVar1;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  
  pcVar1 = (char *)(unaff_RSI & 0xffffffff);
  *(char *)(unaff_RDI + 0x7f) = *(char *)(unaff_RDI + 0x7f) << 1;
  *pcVar1 = *pcVar1 - (char)pcVar1;
  FUN_14d7a571c();
  return;
}



// FUNCTION 14d7a575d FUN_14d7a575d body=36 status=ok
// SIG undefined FUN_14d7a575d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a5763) overlaps instruction at (ram,0x00014d7a5762)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a5861) */
/* WARNING: Removing unreachable block (ram,0x00014d7a586d) */
/* WARNING: Removing unreachable block (ram,0x00014d7a587b) */
/* WARNING: Removing unreachable block (ram,0x00014d7a587d) */
/* WARNING: Removing unreachable block (ram,0x00014d7a5889) */
/* WARNING: Removing unreachable block (ram,0x00014d7a58c8) */
/* WARNING: Removing unreachable block (ram,0x00014d7a581c) */

ulonglong FUN_14d7a575d(uint param_1,undefined2 param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  byte bVar8;
  longlong in_RAX;
  ulonglong uVar7;
  byte bVar9;
  ulonglong unaff_RBX;
  undefined1 *puVar10;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  byte *unaff_RDI;
  bool in_CF;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  byte *unaff_retaddr;
  undefined1 auStackX_8 [32];
  undefined8 auStack_18 [3];
  
  bVar8 = (byte)((ulonglong)in_RAX >> 8);
  if (in_CF) {
    uVar6 = *(uint *)(in_RAX + -0x21);
    bVar11 = param_1 < uVar6;
    bVar13 = SBORROW4(param_1,uVar6);
    bVar12 = (int)(param_1 - uVar6) < 0;
    out(*unaff_RSI,param_2);
  }
  else {
    bVar11 = false;
    puVar10 = auStackX_8;
    unaff_RDI = unaff_retaddr;
    while( true ) {
      *(undefined4 **)(puVar10 + -8) = unaff_RSI;
      if (!bVar11) {
        *(char *)(in_RAX + 0x59391a10) = *(char *)(in_RAX + 0x59391a10) + bVar8;
        uVar7 = FUN_14d7a579d();
        return uVar7;
      }
      bVar9 = (byte)(unaff_RBX >> 8);
      cVar5 = bVar9 * '\x02';
      unaff_RBX = CONCAT62((int6)(unaff_RBX >> 0x10),CONCAT11(cVar5,(char)unaff_RBX));
      if (CARRY1(bVar9,bVar9) || cVar5 == '\0') {
        *(int *)(unaff_RBP + -0x7b) = *(int *)(unaff_RBP + -0x7b) + (uint)unaff_RBP;
        *unaff_RDI = *unaff_RDI ^ ((byte)in_RAX | 0x7b);
        *(uint *)(unaff_RBP + -0x490d5560) = *(uint *)(unaff_RBP + -0x490d5560) & (uint)unaff_RBP;
        uVar6 = ((uint)in_RAX | 0xbeeccb7b) ^ 0x4d053b0e;
        if ((int)uVar6 < 0) {
          return (ulonglong)uVar6;
        }
        pcVar3 = (code *)swi(1);
        uVar7 = (*pcVar3)();
        return uVar7;
      }
      if (SCARRY1(bVar9,bVar9) != cVar5 < '\0') break;
      uVar2 = in(param_2);
      *(undefined4 *)unaff_RDI = uVar2;
      pbVar1 = (byte *)(unaff_RBX + 0x70a85f59);
      bVar4 = (byte)param_1 & 0x1f;
      bVar9 = *pbVar1;
      *pbVar1 = *pbVar1 >> bVar4;
      bVar11 = bVar4 == 1 && (char)bVar9 < '\0';
      puVar10 = puVar10 + -8;
      unaff_RDI = unaff_RDI + 4;
    }
    *(undefined1 **)(puVar10 + -0x10) = puVar10 + -8;
    pbVar1 = (byte *)(unaff_RBX + 0x40 + unaff_RBP * 4);
    bVar11 = false;
    bVar13 = false;
    *pbVar1 = *pbVar1 | (byte)in_RAX;
    if ((char)*pbVar1 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar12 = false;
  }
  if (bVar11) {
    unaff_RDI[0x34c23ff7] = bVar13 == bVar12;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (*(byte *)(unaff_RBX & 0xffffffff) <= bVar8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5779 FUN_14d7a5779 body=2 status=ok
// SIG undefined FUN_14d7a5779(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5779(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5781 FUN_14d7a5781 body=4 status=ok
// SIG undefined FUN_14d7a5781(void)

void FUN_14d7a5781(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7a5785 FUN_14d7a5785 body=3 status=ok
// SIG undefined FUN_14d7a5785(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5785(longlong param_1)

{
  bool in_ZF;
  
  if (param_1 != 1 && in_ZF != false) {
    return;
  }
  if (in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a578d FUN_14d7a578d body=4 status=ok
// SIG undefined FUN_14d7a578d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a578d(void)

{
  byte in_AH;
  byte *unaff_RSI;
  
  if (in_AH < *unaff_RSI) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5791 FUN_14d7a5791 body=11 status=ok
// SIG undefined FUN_14d7a5791(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5791(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a579d FUN_14d7a579d body=7 status=ok
// SIG undefined FUN_14d7a579d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a579d(void)

{
  bool in_PF;
  
  if (!in_PF) {
    in(0xf5);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_14d7a571c();
  return;
}



// FUNCTION 14d7a57a6 FUN_14d7a57a6 body=3 status=ok
// SIG undefined FUN_14d7a57a6(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a57aa) overlaps instruction at (ram,0x00014d7a57a9)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a576a) */
/* WARNING: Removing unreachable block (ram,0x00014d7a5771) */
/* WARNING: Removing unreachable block (ram,0x00014d7a5861) */
/* WARNING: Removing unreachable block (ram,0x00014d7a586d) */
/* WARNING: Removing unreachable block (ram,0x00014d7a587b) */
/* WARNING: Removing unreachable block (ram,0x00014d7a587d) */
/* WARNING: Removing unreachable block (ram,0x00014d7a5889) */
/* WARNING: Removing unreachable block (ram,0x00014d7a58c8) */
/* WARNING: Removing unreachable block (ram,0x00014d7a581c) */

ulonglong FUN_14d7a57a6(byte param_1,undefined2 param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  byte bVar3;
  code *pcVar4;
  uint uVar5;
  byte bVar7;
  longlong in_RAX;
  ulonglong uVar6;
  ulonglong unaff_RBX;
  undefined8 *puVar8;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  byte *unaff_RDI;
  byte unaff_R15B;
  bool bVar9;
  bool bVar10;
  
  while( true ) {
    bVar9 = CARRY1(unaff_R15B,unaff_R15B);
    bVar10 = SCARRY1(unaff_R15B,unaff_R15B);
    unaff_R15B = unaff_R15B * '\x02';
    if (bVar9 || unaff_R15B == 0) {
      *(int *)(unaff_RBP + -0x7b) = *(int *)(unaff_RBP + -0x7b) + (uint)unaff_RBP;
      *unaff_RDI = *unaff_RDI ^ ((byte)in_RAX | 0x7b);
      *(uint *)(unaff_RBP + -0x490d5560) = *(uint *)(unaff_RBP + -0x490d5560) & (uint)unaff_RBP;
      uVar5 = ((uint)in_RAX | 0xbeeccb7b) ^ 0x4d053b0e;
      if ((int)uVar5 < 0) {
        return (ulonglong)uVar5;
      }
      pcVar4 = (code *)swi(1);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
    bVar7 = (byte)((ulonglong)in_RAX >> 8);
    if (bVar10 != (char)unaff_R15B < '\0') break;
    uVar2 = in(param_2);
    *(undefined4 *)unaff_RDI = uVar2;
    pbVar1 = (byte *)(unaff_RBX + 0x70a85f59);
    bVar3 = *pbVar1;
    *pbVar1 = *pbVar1 >> (param_1 & 0x1f);
    puVar8 = (undefined8 *)((longlong)register0x00000020 + -8);
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
    *puVar8 = unaff_RSI;
    if ((param_1 & 0x1f) != 1 || -1 < (char)bVar3) {
      *(char *)(in_RAX + 0x59391a10) = *(char *)(in_RAX + 0x59391a10) + bVar7;
      uVar6 = FUN_14d7a579d();
      return uVar6;
    }
    unaff_RBX = CONCAT62((int6)(unaff_RBX >> 0x10),
                         CONCAT11((char)(unaff_RBX >> 8) * '\x02',(char)unaff_RBX));
    unaff_RDI = unaff_RDI + 4;
  }
  *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
  pbVar1 = (byte *)(unaff_RBX + 0x40 + unaff_RBP * 4);
  *pbVar1 = *pbVar1 | (byte)in_RAX;
  if ((char)*pbVar1 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(byte *)(unaff_RBX & 0xffffffff) <= bVar7) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a57bb FUN_14d7a57bb body=55 status=ok
// SIG undefined FUN_14d7a57bb(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a57bf) overlaps instruction at (ram,0x00014d7a57bb)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a576a) */
/* WARNING: Removing unreachable block (ram,0x00014d7a5771) */
/* WARNING: Removing unreachable block (ram,0x00014d7a5861) */
/* WARNING: Removing unreachable block (ram,0x00014d7a586d) */
/* WARNING: Removing unreachable block (ram,0x00014d7a587b) */
/* WARNING: Removing unreachable block (ram,0x00014d7a587d) */
/* WARNING: Removing unreachable block (ram,0x00014d7a5889) */
/* WARNING: Removing unreachable block (ram,0x00014d7a58c8) */
/* WARNING: Removing unreachable block (ram,0x00014d7a581c) */

ulonglong FUN_14d7a57bb(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  byte bVar7;
  longlong in_RAX;
  ulonglong uVar6;
  byte bVar8;
  ulonglong unaff_RBX;
  undefined1 *puVar9;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  uint *unaff_RDI;
  char in_CF;
  bool bVar10;
  byte unaff_retaddr;
  byte *pbStackX_8;
  undefined1 auStackX_10 [24];
  
  *unaff_RDI = (uint)in_RAX;
  bVar10 = false;
  puVar9 = auStackX_10;
  while( true ) {
    *(undefined8 *)(puVar9 + -8) = unaff_RSI;
    bVar7 = (byte)((ulonglong)in_RAX >> 8);
    if (!bVar10) {
      *(char *)(in_RAX + 0x59391a10) = *(char *)(in_RAX + 0x59391a10) + bVar7;
      uVar6 = FUN_14d7a579d();
      return uVar6;
    }
    bVar8 = (byte)(unaff_RBX >> 8);
    cVar4 = bVar8 * '\x02';
    unaff_RBX = CONCAT62((int6)(unaff_RBX >> 0x10),CONCAT11(cVar4,(char)unaff_RBX));
    if (CARRY1(bVar8,bVar8) || cVar4 == '\0') {
      *(int *)(unaff_RBP + -0x7b) = *(int *)(unaff_RBP + -0x7b) + (uint)unaff_RBP;
      *pbStackX_8 = *pbStackX_8 ^ ((byte)in_RAX | 0x7b);
      *(uint *)(unaff_RBP + -0x490d5560) = *(uint *)(unaff_RBP + -0x490d5560) & (uint)unaff_RBP;
      uVar5 = ((uint)in_RAX | 0xbeeccb7b) ^ 0x4d053b0e;
      if ((int)uVar5 < 0) {
        return (ulonglong)uVar5;
      }
      pcVar3 = (code *)swi(1);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
    if (SCARRY1(bVar8,bVar8) != cVar4 < '\0') break;
    uVar2 = in((short)CONCAT71((int7)((ulonglong)param_2 >> 8),-in_CF));
    *(undefined4 *)pbStackX_8 = uVar2;
    pbVar1 = (byte *)(unaff_RBX + 0x70a85f59);
    bVar7 = *pbVar1;
    *pbVar1 = *pbVar1 >> (unaff_retaddr & 0x1f);
    bVar10 = (unaff_retaddr & 0x1f) == 1 && (char)bVar7 < '\0';
    puVar9 = puVar9 + -8;
    pbStackX_8 = pbStackX_8 + 4;
  }
  *(undefined1 **)(puVar9 + -0x10) = puVar9 + -8;
  pbVar1 = (byte *)(unaff_RBX + 0x40 + unaff_RBP * 4);
  *pbVar1 = *pbVar1 | (byte)in_RAX;
  if ((char)*pbVar1 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(byte *)(unaff_RBX & 0xffffffff) <= bVar7) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a57dc FUN_14d7a57dc body=4 status=ok
// SIG undefined FUN_14d7a57dc(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a57e3) overlaps instruction at (ram,0x00014d7a57e0)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a5861) */
/* WARNING: Removing unreachable block (ram,0x00014d7a586d) */
/* WARNING: Removing unreachable block (ram,0x00014d7a587b) */
/* WARNING: Removing unreachable block (ram,0x00014d7a587d) */
/* WARNING: Removing unreachable block (ram,0x00014d7a5889) */
/* WARNING: Removing unreachable block (ram,0x00014d7a58c8) */
/* WARNING: Removing unreachable block (ram,0x00014d7a581c) */

ulonglong FUN_14d7a57dc(byte param_1)

{
  code *pcVar1;
  uint in_EAX;
  uint uVar2;
  ulonglong uVar3;
  longlong unaff_RBP;
  longlong unaff_RSI;
  byte *unaff_RDI;
  
  cRam000000010c672361 = cRam000000010c672361 + (param_1 ^ (byte)*(undefined4 *)(unaff_RSI + 0x43));
  *(int *)(unaff_RBP + -0x7b) = *(int *)(unaff_RBP + -0x7b) + (uint)unaff_RBP;
  *unaff_RDI = *unaff_RDI ^ (byte)in_EAX;
  *(uint *)(unaff_RBP + -0x490d5560) = *(uint *)(unaff_RBP + -0x490d5560) & (uint)unaff_RBP;
  uVar2 = (in_EAX | 0x20) ^ 0x4d053b0e;
  if ((int)uVar2 < 0) {
    return (ulonglong)uVar2;
  }
  pcVar1 = (code *)swi(1);
  uVar3 = (*pcVar1)();
  return uVar3;
}



// FUNCTION 14d7a580f FUN_14d7a580f body=4 status=ok
// SIG undefined FUN_14d7a580f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a580f(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  longlong unaff_RBX;
  byte unaff_BPL;
  byte bVar2;
  undefined4 *unaff_RDI;
  
  bVar2 = unaff_BPL & *(byte *)(unaff_RBX + -0x56);
  if (('\0' < (char)bVar2) && ((POPCOUNT(bVar2) & 1U) != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  return;
}



// FUNCTION 14d7a5813 FUN_14d7a5813 body=15 status=ok
// SIG undefined FUN_14d7a5813(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5813(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RDI;
  bool in_PF;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if ((!in_ZF && in_OF == in_SF) && (!in_PF)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  return;
}



// FUNCTION 14d7a5827 FUN_14d7a5827 body=11 status=ok
// SIG undefined FUN_14d7a5827(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5827(void)

{
  uint in_EAX;
  
  if ((in_EAX & 0x6e) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a583c FUN_14d7a583c body=2 status=ok
// SIG undefined FUN_14d7a583c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a583c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a584c FUN_14d7a584c body=17 status=ok
// SIG undefined FUN_14d7a584c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a584c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5865 FUN_14d7a5865 body=53 status=ok
// SIG undefined FUN_14d7a5865(void)

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_14d7a5865(longlong param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  uint in_EAX;
  uint uVar4;
  int iVar5;
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  undefined4 *unaff_RDI;
  char in_AF;
  undefined1 auStack_8 [8];
  
  uVar4 = in_EAX + 0x2c2483;
  if (uVar4 == 0 || (int)in_EAX < -0x2c2483) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 != 0) {
    uVar3 = CONCAT31((int3)(uVar4 >> 8),(char)unaff_EBX);
    iVar5 = uVar3 + 0xb0801528;
    if (param_1 == 1 || (int)auStack_8 - iVar5 != (uint)(uVar3 < 0x4f7fead8)) {
      return CONCAT22((short)((uint)iVar5 >> 0x10),CONCAT11(0xb8,DAT_bd7911108bf1dd3a));
    }
    pcVar1 = (char *)(CONCAT44(unaff_0000001c,CONCAT31((int3)((uint)unaff_EBX >> 8),(char)uVar4)) +
                     -0x44);
    *pcVar1 = *pcVar1 + (char)((ushort)param_2 >> 8);
    in(0x57);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = in(param_2);
  *unaff_RDI = uVar2;
  return CONCAT22((short)(uVar4 >> 0x10),
                  CONCAT11(((int)uVar4 < 0) << 7 | (uVar4 == 0) << 6 | in_AF << 4 |
                           ((POPCOUNT(uVar4 & 0xff) & 1U) == 0) << 2 | 2U | 0xffd3db7c < in_EAX,
                           (char)uVar4));
}



// FUNCTION 14d7a589d FUN_14d7a589d body=7 status=ok
// SIG undefined FUN_14d7a589d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a58c8) overlaps instruction at (ram,0x00014d7a58c7)
    */

undefined8 FUN_14d7a589d(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 auVar2 [32];
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  uint *puVar9;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  ulonglong *puVar11;
  uint unaff_EBP;
  uint *unaff_RSI;
  byte *unaff_RDI;
  uint *puVar12;
  bool in_CF;
  bool bVar13;
  byte in_AF;
  bool bVar14;
  bool bVar15;
  byte in_TF;
  byte in_IF;
  bool bVar16;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined1 in_YMM7 [32];
  undefined7 uVar10;
  
  if (in_CF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar6 = in((short)param_2);
  *unaff_RSI = *unaff_RSI | unaff_EBP;
  bVar3 = *unaff_RDI;
  bVar4 = (byte)*unaff_RSI;
  bVar13 = bVar4 < bVar3;
  bVar16 = SBORROW1(bVar4,bVar3);
  cVar5 = bVar4 - bVar3;
  bVar15 = cVar5 < '\0';
  bVar14 = cVar5 == '\0';
  bVar4 = POPCOUNT(cVar5);
  piVar7 = (int *)(ulonglong)uVar6;
  puVar12 = (uint *)(unaff_RDI + 1);
  while( true ) {
    puVar11 = (ulonglong *)((longlong)register0x00000020 + -8);
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
    *puVar11 = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)bVar16 * 0x800 |
               (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
               (ulonglong)bVar15 * 0x80 | (ulonglong)bVar14 * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
               (ulonglong)((bVar4 & 1) == 0) * 4 | (ulonglong)bVar13 |
               (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
               (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
    *(char *)(param_2 + 0x4119c257) = (*(char *)(param_2 + 0x4119c257) + -0x2c) - bVar13;
    *piVar7 = (int)piVar7;
    cVar5 = (char)piVar7 + '\x1e';
    uVar10 = (undefined7)((ulonglong)piVar7 >> 8);
    piVar8 = (int *)CONCAT71(uVar10,cVar5);
    *piVar8 = *piVar8 >> 1;
    LOCK();
    pcVar1 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)))
                     + 0xd);
    *pcVar1 = *pcVar1 + 'S';
    UNLOCK();
    if (*pcVar1 != '\0') break;
    iRam0000000094480088 = iRam0000000094480088 << 0x10;
    auVar2 = vmovntps_avx(in_YMM7);
    *(undefined1 (*) [32])
     (CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) + -0x4172bfba) =
         auVar2;
    uVar6 = (uint)piVar8;
    bVar13 = uVar6 < *puVar12;
    bVar16 = SBORROW4(uVar6,*puVar12);
    uVar6 = uVar6 - *puVar12;
    bVar15 = (int)uVar6 < 0;
    bVar14 = uVar6 == 0;
    bVar4 = POPCOUNT(uVar6 & 0xff);
    piVar7 = piVar8;
    puVar12 = puVar12 + 1;
    if (bVar13 || bVar14) {
      *piVar8 = *piVar8 + -0x705a8a5c;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  puVar9 = (uint *)(CONCAT71(uVar10,cVar5) & 0xffffffffffffffea);
  puVar12[0x15] = puVar12[0x15] - (int)param_2;
  uVar6 = *puVar9;
  *puVar9 = *puVar9 - (uint)puVar9;
  if ((uint)puVar9 <= uVar6) {
    if (*puVar9 != 0) {
      return CONCAT62((int6)((ulonglong)piVar7 >> 0x10),CONCAT11(0xb8,DAT_bd7911108bf1dd3a));
    }
    pcVar1 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(0x11,unaff_BL))) +
                     -0x44);
    *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  }
  in(0x57);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a58a2 FUN_14d7a58a2 body=3 status=ok
// SIG undefined FUN_14d7a58a2(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a58c8) overlaps instruction at (ram,0x00014d7a58c7)
    */

undefined8 FUN_14d7a58a2(longlong param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 auVar2 [32];
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  undefined1 *in_RAX;
  int *piVar7;
  int *piVar8;
  uint *puVar9;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  ulonglong *puVar11;
  uint unaff_EBP;
  uint *unaff_RSI;
  byte *unaff_RDI;
  uint *puVar12;
  bool bVar13;
  byte in_AF;
  bool bVar14;
  bool bVar15;
  byte in_TF;
  byte in_IF;
  bool bVar16;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined1 in_YMM7 [32];
  undefined7 uVar10;
  
  uVar6 = in((short)param_2);
  *unaff_RSI = *unaff_RSI | unaff_EBP;
  bVar3 = *unaff_RDI;
  bVar4 = (byte)*unaff_RSI;
  bVar13 = bVar4 < bVar3;
  bVar16 = SBORROW1(bVar4,bVar3);
  cVar5 = bVar4 - bVar3;
  bVar15 = cVar5 < '\0';
  bVar14 = cVar5 == '\0';
  bVar4 = POPCOUNT(cVar5);
  piVar7 = (int *)(ulonglong)uVar6;
  puVar12 = (uint *)(unaff_RDI + 1);
  while( true ) {
    puVar11 = (ulonglong *)(in_RAX + -8);
    in_RAX = in_RAX + -8;
    *puVar11 = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)bVar16 * 0x800 |
               (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
               (ulonglong)bVar15 * 0x80 | (ulonglong)bVar14 * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
               (ulonglong)((bVar4 & 1) == 0) * 4 | (ulonglong)bVar13 |
               (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
               (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
    *(char *)(param_2 + 0x4119c257) = (*(char *)(param_2 + 0x4119c257) + -0x2c) - bVar13;
    *piVar7 = (int)piVar7;
    cVar5 = (char)piVar7 + '\x1e';
    uVar10 = (undefined7)((ulonglong)piVar7 >> 8);
    piVar8 = (int *)CONCAT71(uVar10,cVar5);
    *piVar8 = *piVar8 >> 1;
    LOCK();
    pcVar1 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)))
                     + 0xd);
    *pcVar1 = *pcVar1 + (char)param_1;
    UNLOCK();
    if (*pcVar1 != '\0') break;
    *(int *)(param_1 + 0x35) = *(int *)(param_1 + 0x35) << 0x10;
    auVar2 = vmovntps_avx(in_YMM7);
    *(undefined1 (*) [32])
     (CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) + -0x4172bfba) =
         auVar2;
    uVar6 = (uint)piVar8;
    bVar13 = uVar6 < *puVar12;
    bVar16 = SBORROW4(uVar6,*puVar12);
    uVar6 = uVar6 - *puVar12;
    bVar15 = (int)uVar6 < 0;
    bVar14 = uVar6 == 0;
    bVar4 = POPCOUNT(uVar6 & 0xff);
    piVar7 = piVar8;
    puVar12 = puVar12 + 1;
    if (bVar13 || bVar14) {
      *piVar8 = *piVar8 + -0x705a8a5c;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  puVar9 = (uint *)(CONCAT71(uVar10,cVar5) & 0xffffffffffffffea);
  puVar12[0x15] = puVar12[0x15] - (int)param_2;
  uVar6 = *puVar9;
  *puVar9 = *puVar9 - (uint)puVar9;
  if ((uint)puVar9 <= uVar6) {
    if (param_1 == 1 || *puVar9 != 0) {
      return CONCAT62((int6)((ulonglong)piVar7 >> 0x10),CONCAT11(0xb8,DAT_bd7911108bf1dd3a));
    }
    pcVar1 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(0x11,unaff_BL))) +
                     -0x44);
    *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  }
  in(0x57);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a58a6 FUN_14d7a58a6 body=20 status=ok
// SIG undefined FUN_14d7a58a6(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a58c8) overlaps instruction at (ram,0x00014d7a58c7)
    */

undefined2 FUN_14d7a58a6(longlong param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 auVar2 [32];
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  int *in_RAX;
  undefined7 uVar8;
  uint *puVar7;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  ulonglong *puVar9;
  byte *unaff_RSI;
  byte *unaff_RDI;
  uint *puVar10;
  bool bVar11;
  byte in_AF;
  bool bVar12;
  bool bVar13;
  byte in_TF;
  byte in_IF;
  bool bVar14;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined1 in_YMM7 [32];
  
  bVar4 = *unaff_RDI;
  bVar3 = *unaff_RSI;
  bVar11 = bVar3 < bVar4;
  bVar14 = SBORROW1(bVar3,bVar4);
  cVar5 = bVar3 - bVar4;
  bVar13 = cVar5 < '\0';
  bVar12 = cVar5 == '\0';
  bVar3 = POPCOUNT(cVar5);
  puVar10 = (uint *)(unaff_RDI + 1);
  while( true ) {
    puVar9 = (ulonglong *)((longlong)register0x00000020 + -8);
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
    *puVar9 = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)bVar14 * 0x800 |
              (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
              (ulonglong)bVar13 * 0x80 | (ulonglong)bVar12 * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
              (ulonglong)((bVar3 & 1) == 0) * 4 | (ulonglong)bVar11 |
              (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
              (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
    *(char *)(param_2 + 0x4119c257) = (*(char *)(param_2 + 0x4119c257) + -0x2c) - bVar11;
    *in_RAX = (int)in_RAX;
    cVar5 = (char)in_RAX + '\x1e';
    uVar8 = (undefined7)((ulonglong)in_RAX >> 8);
    in_RAX = (int *)CONCAT71(uVar8,cVar5);
    *in_RAX = *in_RAX >> 1;
    LOCK();
    pcVar1 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)))
                     + 0xd);
    *pcVar1 = *pcVar1 + (char)param_1;
    UNLOCK();
    if (*pcVar1 != '\0') break;
    *(int *)(param_1 + 0x35) = *(int *)(param_1 + 0x35) << 0x10;
    auVar2 = vmovntps_avx(in_YMM7);
    *(undefined1 (*) [32])
     (CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) + -0x4172bfba) =
         auVar2;
    uVar6 = (uint)in_RAX;
    bVar11 = uVar6 < *puVar10;
    bVar14 = SBORROW4(uVar6,*puVar10);
    uVar6 = uVar6 - *puVar10;
    bVar13 = (int)uVar6 < 0;
    bVar12 = uVar6 == 0;
    bVar3 = POPCOUNT(uVar6 & 0xff);
    puVar10 = puVar10 + 1;
    if (bVar11 || bVar12) {
      *in_RAX = *in_RAX + -0x705a8a5c;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  puVar7 = (uint *)(CONCAT71(uVar8,cVar5) & 0xffffffffffffffea);
  puVar10[0x15] = puVar10[0x15] - (int)param_2;
  uVar6 = *puVar7;
  *puVar7 = *puVar7 - (uint)puVar7;
  if ((uint)puVar7 <= uVar6) {
    if (param_1 == 1 || *puVar7 != 0) {
      return CONCAT11(0xb8,DAT_bd7911108bf1dd3a);
    }
    pcVar1 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(0x11,unaff_BL))) +
                     -0x44);
    *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  }
  in(0x57);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a58bc FUN_14d7a58bc body=11 status=ok
// SIG undefined FUN_14d7a58bc(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a58c8) overlaps instruction at (ram,0x00014d7a58c7)
    */

undefined8 FUN_14d7a58bc(longlong param_1,int param_2)

{
  char *pcVar1;
  uint uVar2;
  ulonglong in_RAX;
  uint *puVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RDI;
  
  puVar3 = (uint *)((in_RAX | 0x11b71474) & 0xffffffffffffffea);
  *(int *)(unaff_RDI + 0x54) = *(int *)(unaff_RDI + 0x54) - param_2;
  uVar2 = *puVar3;
  *puVar3 = *puVar3 - (uint)puVar3;
  if ((uint)puVar3 <= uVar2) {
    if (param_1 == 1 || *puVar3 != 0) {
      return CONCAT62((int6)((in_RAX | 0x11b71474) >> 0x10),CONCAT11(0xb8,DAT_bd7911108bf1dd3a));
    }
    pcVar1 = (char *)(CONCAT44(unaff_0000001c,unaff_EBX) + -0x44);
    *pcVar1 = *pcVar1 + (char)((uint)param_2 >> 8);
  }
  in(0x57);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a58e1 FUN_14d7a58e1 body=4 status=ok
// SIG undefined FUN_14d7a58e1(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a58c8) overlaps instruction at (ram,0x00014d7a58c7)
    */

undefined2 FUN_14d7a58e1(longlong param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 auVar2 [32];
  char cVar3;
  uint uVar4;
  undefined7 uVar6;
  uint *puVar5;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  ulonglong *puVar7;
  uint *unaff_RDI;
  undefined1 in_CF;
  byte in_PF;
  byte in_AF;
  undefined1 in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined1 in_YMM7 [32];
  
  while( true ) {
    if ((bool)in_CF || (bool)in_ZF) {
      *_uVar4 = *_uVar4 + -0x705a8a5c;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar7 = (ulonglong *)((longlong)register0x00000020 + -8);
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
    *puVar7 = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_OF & 1) * 0x800 |
              (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
              (ulonglong)(in_SF & 1) * 0x80 | (ulonglong)(in_ZF & 1) * 0x40 |
              (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)(in_PF & 1) * 4 | (ulonglong)(in_CF & 1) |
              (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
              (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
    *(char *)(param_2 + 0x4119c257) = (*(char *)(param_2 + 0x4119c257) + -0x2c) - in_CF;
    *_uVar4 = (int)_uVar4;
    cVar3 = (char)_uVar4 + '\x1e';
    uVar6 = (undefined7)((ulonglong)_uVar4 >> 8);
    _uVar4 = (int *)CONCAT71(uVar6,cVar3);
    *_uVar4 = *_uVar4 >> 1;
    LOCK();
    pcVar1 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)))
                     + 0xd);
    *pcVar1 = *pcVar1 + (char)param_1;
    UNLOCK();
    if (*pcVar1 != '\0') break;
    *(int *)(param_1 + 0x35) = *(int *)(param_1 + 0x35) << 0x10;
    auVar2 = vmovntps_avx(in_YMM7);
    *(undefined1 (*) [32])
     (CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) + -0x4172bfba) =
         auVar2;
    uVar4 = (uint)_uVar4;
    in_CF = uVar4 < *unaff_RDI;
    in_OF = SBORROW4(uVar4,*unaff_RDI);
    uVar4 = uVar4 - *unaff_RDI;
    in_SF = (int)uVar4 < 0;
    in_ZF = uVar4 == 0;
    in_PF = (POPCOUNT(uVar4 & 0xff) & 1U) == 0;
    unaff_RDI = unaff_RDI + 1;
  }
  puVar5 = (uint *)(CONCAT71(uVar6,cVar3) & 0xffffffffffffffea);
  unaff_RDI[0x15] = unaff_RDI[0x15] - (int)param_2;
  uVar4 = *puVar5;
  *puVar5 = *puVar5 - (uint)puVar5;
  if ((uint)puVar5 <= uVar4) {
    if (param_1 == 1 || *puVar5 != 0) {
      return CONCAT11(0xb8,DAT_bd7911108bf1dd3a);
    }
    pcVar1 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(0x11,unaff_BL))) +
                     -0x44);
    *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  }
  in(0x57);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a58e5 FUN_14d7a58e5 body=9 status=ok
// SIG undefined FUN_14d7a58e5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a58e5(void)

{
  undefined1 in_AL;
  undefined7 in_register_00000001;
  
  *(int *)CONCAT71(in_register_00000001,in_AL) =
       *(int *)CONCAT71(in_register_00000001,in_AL) + -0x705a8a5c;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a58f3 FUN_14d7a58f3 body=7 status=ok
// SIG undefined FUN_14d7a58f3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a58f3(void)

{
  int unaff_EBX;
  longlong unaff_RSI;
  byte in_CF;
  
  *(int *)(unaff_RSI + -0x36725dab) = *(int *)(unaff_RSI + -0x36725dab) + unaff_EBX + (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a58ff FUN_14d7a58ff body=13 status=ok
// SIG undefined FUN_14d7a58ff(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a58ff(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  char in_AL;
  longlong unaff_RDI;
  
  uVar1 = (longlong)(int)unaff_RDI * -0x6dc6ebb4;
  if ((longlong)(int)uVar1 == uVar1 && in_AL != -0x3c) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(unaff_RDI + 1) = *(undefined1 *)(uVar1 & 0xffffffff);
  *(char *)(param_2 + -0x50596414) = *(char *)(param_2 + -0x50596414) >> 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a590b FUN_14d7a590b body=3 status=ok
// SIG undefined FUN_14d7a590b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a590b(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5917 FUN_14d7a5917 body=2 status=ok
// SIG undefined FUN_14d7a5917(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5917(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5923 FUN_14d7a5923 body=1 status=ok
// SIG undefined FUN_14d7a5923(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5923(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5944 FUN_14d7a5944 body=6 status=ok
// SIG undefined FUN_14d7a5944(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5944(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5966 FUN_14d7a5966 body=3 status=ok
// SIG undefined FUN_14d7a5966(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5966(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a596a FUN_14d7a596a body=6 status=ok
// SIG undefined FUN_14d7a596a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a596a(undefined8 param_1,int param_2)

{
  byte *pbVar1;
  undefined8 in_RAX;
  undefined7 uVar2;
  byte bVar4;
  int iVar3;
  int *unaff_RBX;
  longlong unaff_RBP;
  undefined4 *unaff_RDI;
  
  uVar2 = (undefined7)((ulonglong)in_RAX >> 8);
  iVar3 = (param_2 - *unaff_RBX) - (uint)(4 < (byte)in_RAX);
  pbVar1 = (byte *)(CONCAT71(uVar2,(byte)in_RAX - 5) + 0x4231d2b5);
  bVar4 = (byte)((uint)iVar3 >> 8);
  *pbVar1 = *pbVar1 | bVar4;
  *unaff_RDI = (int)CONCAT71(uVar2,(cRam1659824689754764 + 'A') - CARRY1((byte)iVar3,bVar4));
  *(byte *)(unaff_RBP + -0x20c2a5e) =
       *(byte *)(unaff_RBP + -0x20c2a5e) | (byte)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5972 FUN_14d7a5972 body=5 status=ok
// SIG undefined FUN_14d7a5972(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5972(undefined8 param_1,longlong param_2)

{
  uint in_EAX;
  
  *(uint *)(param_2 + 2) = *(uint *)(param_2 + 2) ^ in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5986 FUN_14d7a5986 body=20 status=ok
// SIG undefined FUN_14d7a5986(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5986(void)

{
  undefined1 in_AL;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
  DAT_335c753c9cfdf3d5 = in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a599e FUN_14d7a599e body=2 status=ok
// SIG undefined FUN_14d7a599e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a599e(uint *param_1)

{
  char *pcVar1;
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  longlong in_FS_OFFSET;
  
  *param_1 = *param_1 >> 1;
  *(int *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x37 +
          CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL))) = (int)&stack0x00000000;
  if (param_1 == (uint *)&DAT_00000001) {
    pcVar1 = (char *)(in_FS_OFFSET + CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
    *pcVar1 = *pcVar1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a59a3 FUN_14d7a59a3 body=3 status=ok
// SIG undefined FUN_14d7a59a3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a59a3(longlong param_1)

{
  char *pcVar1;
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  longlong in_FS_OFFSET;
  
  if (param_1 == 1) {
    pcVar1 = (char *)(in_FS_OFFSET + CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
    *pcVar1 = *pcVar1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a59ac FUN_14d7a59ac body=3 status=ok
// SIG undefined FUN_14d7a59ac(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a59ac(void)

{
  longlong in_RAX;
  uint unaff_ESI;
  
  *(uint *)(in_RAX + -0x39) = *(uint *)(in_RAX + -0x39) ^ unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a59b5 FUN_14d7a59b5 body=3 status=ok
// SIG undefined FUN_14d7a59b5(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a59b6) overlaps instruction at (ram,0x00014d7a59b5)
    */

void FUN_14d7a59b5(void)

{
  longlong unaff_RBX;
  bool in_CF;
  
  if (in_CF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (**(code **)(unaff_RBX + -0x2c))();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a59bd FUN_14d7a59bd body=8 status=ok
// SIG undefined FUN_14d7a59bd(void)

void FUN_14d7a59bd(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  code *pcVar2;
  byte unaff_BL;
  undefined7 unaff_00000019;
  
  pbVar1 = (byte *)(CONCAT71(unaff_00000019,unaff_BL) + 0x15c949f2 + param_2);
  *pbVar1 = *pbVar1 | unaff_BL;
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



// FUNCTION 14d7a59c5 FUN_14d7a59c5 body=4 status=ok
// SIG undefined FUN_14d7a59c5(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a59cb) overlaps instruction at (ram,0x00014d7a59c9)
    */

void FUN_14d7a59c5(undefined8 param_1)

{
  char cVar1;
  uint unaff_EBX;
  undefined8 *puVar2;
  uint unaff_EBP;
  undefined8 *puVar3;
  longlong unaff_RSI;
  undefined8 auStack_10 [2];
  
  puVar3 = (undefined8 *)(ulonglong)(unaff_EBP ^ unaff_EBX);
  if ((int)(unaff_EBP ^ unaff_EBX) < 0) {
    puVar2 = auStack_10 + 1;
    cVar1 = '\x18';
    do {
      puVar3 = puVar3 + -1;
      puVar2 = puVar2 + -1;
      *puVar2 = *puVar3;
      cVar1 = cVar1 + -1;
    } while ('\0' < cVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RSI + -0x3a) = *(char *)(unaff_RSI + -0x3a) + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a59c9 FUN_14d7a59c9 body=5 status=ok
// SIG undefined FUN_14d7a59c9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a59c9(void)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  undefined8 uStack_10;
  
  puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x18';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a59e2 FUN_14d7a59e2 body=7 status=ok
// SIG undefined FUN_14d7a59e2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a59e2(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 in_RAX;
  longlong unaff_RBP;
  undefined4 *unaff_RDI;
  byte in_CF;
  char in_PF;
  char in_AF;
  char in_ZF;
  char in_SF;
  
  bVar2 = in_SF << 7 | in_ZF << 6 | in_AF << 4 | in_PF << 2 | 2U | in_CF;
  pbVar1 = (byte *)(unaff_RBP + -0x1d5529e2);
  *pbVar1 = *pbVar1 & (byte)((ulonglong)param_2 >> 8);
  if ((POPCOUNT(*pbVar1) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = (int)CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                             CONCAT11(bVar2,(char)in_RAX)) >> 8),(char)in_RAX + 'A')
  ;
  *(byte *)(unaff_RBP + -0x20c2a5e) = *(byte *)(unaff_RBP + -0x20c2a5e) | bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a59ea FUN_14d7a59ea body=1 status=ok
// SIG undefined FUN_14d7a59ea(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a59ea(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5a02 FUN_14d7a5a02 body=2 status=ok
// SIG undefined FUN_14d7a5a02(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5a02(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5a1b FUN_14d7a5a1b body=1 status=ok
// SIG undefined FUN_14d7a5a1b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5a1b(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5a20 FUN_14d7a5a20 body=14 status=ok
// SIG undefined FUN_14d7a5a20(void)

void FUN_14d7a5a20(void)

{
  return;
}



// FUNCTION 14d7a5a31 FUN_14d7a5a31 body=8 status=ok
// SIG undefined FUN_14d7a5a31(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5a31(void)

{
  char in_AL;
  longlong unaff_RBX;
  char in_CF;
  float10 in_ST0;
  
  *(longlong *)(unaff_RBX + -0x4933c5cc) = (longlong)in_ST0;
  if (-1 < (char)((in_AL + 'O') - in_CF)) {
    if (SBORROW1(in_AL,-0x4f) == SBORROW1(in_AL + 'O',in_CF)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    in(0x4b);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5a3d FUN_14d7a5a3d body=9 status=ok
// SIG undefined FUN_14d7a5a3d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5a3d(void)

{
  char in_AL;
  
  if (-1 < (char)(in_AL + 'O')) {
    if (-0x50 < in_AL) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    in(0x4b);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5a5a FUN_14d7a5a5a body=6 status=ok
// SIG undefined FUN_14d7a5a5a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5a5a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5a6b FUN_14d7a5a6b body=5 status=ok
// SIG undefined FUN_14d7a5a6b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5a6b(void)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  uint in_EAX;
  longlong unaff_RBX;
  byte in_CF;
  bool bVar4;
  float10 in_ST0;
  
  cVar3 = (char)(in_EAX + 0x47ac403f) + in_CF;
  puVar1 = (uint *)(unaff_RBX + 0x5f);
  uVar2 = (uint)(0xb853bfc0 < in_EAX || CARRY4(in_EAX + 0x47ac403f,(uint)in_CF));
  bVar4 = *puVar1 < 0xe695e700 || *puVar1 + 0x196a1900 < uVar2;
  *puVar1 = (*puVar1 + 0x196a1900) - uVar2;
  if ((POPCOUNT(*puVar1 & 0xff) & 1U) == 0) {
    cRamf400184287321d76 = cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(longlong *)(unaff_RBX + -0x4933c5cc) = (longlong)in_ST0;
  if (-1 < (char)((cVar3 + 'O') - bVar4)) {
    if (SBORROW1(cVar3,-0x4f) == SBORROW1(cVar3 + 'O',bVar4)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    in(0x4b);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5a80 FUN_14d7a5a80 body=15 status=ok
// SIG undefined FUN_14d7a5a80(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5a80(longlong param_1)

{
  char cVar1;
  char *in_RAX;
  longlong unaff_RBX;
  undefined1 *unaff_RDI;
  bool in_CF;
  bool in_ZF;
  float10 in_ST0;
  undefined1 *unaff_retaddr;
  
  if (param_1 == 0) {
    *(uint *)(unaff_RBX + -0x66354530) = *(uint *)(unaff_RBX + -0x66354530) | 0xc34a01b2;
    cVar1 = (char)in_RAX;
    *in_RAX = cVar1;
    *(longlong *)(unaff_RBX + -0x4933c5cc) = (longlong)in_ST0;
    if (-1 < (char)(cVar1 + 'O')) {
      if (-0x50 < cVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      in(0x4b);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_CF && !in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_retaddr;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5a95 FUN_14d7a5a95 body=1 status=ok
// SIG undefined FUN_14d7a5a95(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5a95(void)

{
  undefined1 unaff_BH;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  undefined1 *unaff_retaddr;
  
  *unaff_RDI = *unaff_RSI;
  LOCK();
  *(undefined1 *)(unaff_RBP + -0x3a03325c) = unaff_BH;
  UNLOCK();
  unaff_RDI[1] = *unaff_retaddr;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5aad FUN_14d7a5aad body=4 status=ok
// SIG undefined FUN_14d7a5aad(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5aad(undefined8 param_1,undefined2 param_2)

{
  char *pcVar1;
  byte *in_RAX;
  char unaff_BL;
  
  *in_RAX = *in_RAX << 1 | (char)*in_RAX < '\0';
  cRam00000000f6f4a296 = cRam00000000f6f4a296 + (char)param_2;
  in(param_2);
  pcVar1 = (char *)(((ulonglong)in_RAX & 0xffffffff) - 0x66);
  *pcVar1 = *pcVar1 + unaff_BL;
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5ab2 FUN_14d7a5ab2 body=20 status=ok
// SIG undefined FUN_14d7a5ab2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5ab2(undefined8 param_1,undefined2 param_2)

{
  char unaff_BL;
  longlong unaff_RBP;
  
  in(param_2);
  *(char *)(unaff_RBP + -0x66) = *(char *)(unaff_RBP + -0x66) + unaff_BL;
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5ac7 FUN_14d7a5ac7 body=1 status=ok
// SIG undefined FUN_14d7a5ac7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5ac7(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5ad7 FUN_14d7a5ad7 body=2 status=ok
// SIG undefined FUN_14d7a5ad7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5ad7(undefined8 param_1,undefined2 param_2)

{
  undefined4 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5adb FUN_14d7a5adb body=43 status=ok
// SIG undefined FUN_14d7a5adb(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a5b58) overlaps instruction at (ram,0x00014d7a5b57)
    */

undefined4 FUN_14d7a5adb(float *param_1,longlong param_2)

{
  int *piVar1;
  uint in_EAX;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_PF;
  bool in_ZF;
  bool bVar5;
  char in_SF;
  bool in_OF;
  float10 in_ST0;
  
  if (in_PF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_OF) {
    return *unaff_RSI;
  }
  if (in_OF) {
    if (!in_ZF && in_SF == '\x01') {
      out(*unaff_RSI,(short)param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_ZF) {
    *param_1 = (float)in_ST0;
    pcVar4 = (char *)((longlong)param_1 + -1);
    if (pcVar4 == (char *)0x0 || (char)in_EAX != -0x5d) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    piVar1 = (int *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x67);
    *piVar1 = *piVar1 + -1;
    uVar2 = in_EAX ^ 0x1b2523ad;
    bVar5 = uVar2 == 0x9bc516af;
    if ((int)(uVar2 + 0x643ae951) < 0) {
      uVar3 = in((short)param_2);
      *unaff_RDI = uVar3;
      do {
      } while ((int)uVar2 < -0x643ae950);
    }
    else {
      *pcVar4 = *pcVar4 + '\x01';
      *(byte *)((longlong)unaff_RSI + 0x719b53af) =
           *(byte *)((longlong)unaff_RSI + 0x719b53af) | (byte)param_2;
      uRam0000000029d00679 = 0;
      bVar5 = true;
    }
    if (bVar5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Could not recover jumptable at 0x00014d7a5b7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(ulonglong)*(uint *)(param_2 + 0x24))();
    return uVar3;
  }
  in(0xf);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5aef FUN_14d7a5aef body=4 status=ok
// SIG undefined FUN_14d7a5aef(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5aef(byte param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  byte *in_RAX;
  char unaff_BL;
  undefined1 in_CF;
  
  bVar1 = (param_1 & 0x1f) % 9;
  *in_RAX = *in_RAX << bVar1 | (byte)(CONCAT11(in_CF,*in_RAX) >> 9 - bVar1);
  *(char *)(param_4 + 0x6fa27e4c) = *(char *)(param_4 + 0x6fa27e4c) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5af4 FUN_14d7a5af4 body=6 status=ok
// SIG undefined FUN_14d7a5af4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5af4(undefined8 param_1,undefined2 param_2)

{
  undefined4 *unaff_RSI;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (!in_ZF && in_OF == in_SF) {
    out(*unaff_RSI,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5b0d FUN_14d7a5b0d body=2 status=ok
// SIG undefined FUN_14d7a5b0d(void)

void FUN_14d7a5b0d(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a5b11 FUN_14d7a5b11 body=2 status=ok
// SIG undefined FUN_14d7a5b11(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5b11(undefined8 param_1,undefined2 param_2)

{
  uint *puVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  char unaff_BL;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  bool in_ZF;
  
  if (in_ZF) {
    out(*unaff_RSI,CONCAT11((char)((ushort)param_2 >> 8),*(undefined1 *)(unaff_RDI + -6)));
    puVar1 = (uint *)(CONCAT44(in_register_00000004,in_EAX) + -0x75);
    *puVar1 = *puVar1 ^ 0x314e8045;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RBP + -0x66) = *(char *)(unaff_RBP + -0x66) + unaff_BL;
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5b15 FUN_14d7a5b15 body=3 status=ok
// SIG undefined FUN_14d7a5b15(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5b15(undefined8 param_1,undefined2 param_2)

{
  longlong in_RAX;
  undefined4 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
  *(uint *)(in_RAX + -0x75) = *(uint *)(in_RAX + -0x75) ^ 0x314e8045;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5b19 FUN_14d7a5b19 body=13 status=ok
// SIG undefined FUN_14d7a5b19(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5b19(void)

{
  longlong in_RAX;
  
  *(uint *)(in_RAX + -0x75) = *(uint *)(in_RAX + -0x75) ^ 0x314e8045;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5b2e FUN_14d7a5b2e body=13 status=ok
// SIG undefined FUN_14d7a5b2e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5b2e(void)

{
  unkbyte10 Var1;
  longlong unaff_RBX;
  unkbyte10 in_ST0;
  
  Var1 = to_bcd(in_ST0);
  *(unkbyte10 *)(unaff_RBX + -0x1ba14a35) = Var1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5b3e FUN_14d7a5b3e body=7 status=ok
// SIG undefined FUN_14d7a5b3e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5b3e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5b66 FUN_14d7a5b66 body=26 status=ok
// SIG undefined FUN_14d7a5b66(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a5b7b) overlaps instruction at (ram,0x00014d7a5b7a)
    */

void FUN_14d7a5b66(char *param_1,longlong param_2)

{
  undefined4 uVar1;
  int in_EAX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
  bool bVar2;
  
  bVar2 = in_EAX == -0x643ae951;
  if (in_EAX + 0x643ae951 < 0) {
    uVar1 = in((short)param_2);
    *unaff_RDI = uVar1;
    do {
    } while (in_EAX < -0x643ae950);
  }
  else {
    *param_1 = *param_1 + '\x01';
    *(byte *)(unaff_RSI + 0x719b53af) = *(byte *)(unaff_RSI + 0x719b53af) | (byte)param_2;
    *(char *)(unaff_RBP + 0x66) = '\0';
    bVar2 = *(char *)(unaff_RBP + 0x66) == '\0';
  }
  if (bVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Could not recover jumptable at 0x00014d7a5b7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulonglong)*(uint *)(param_2 + 0x24))();
  return;
}



// FUNCTION 14d7a5b83 FUN_14d7a5b83 body=8 status=ok
// SIG undefined FUN_14d7a5b83(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a5b89) overlaps instruction at (ram,0x00014d7a5b88)
    */

void FUN_14d7a5b83(char param_1,undefined8 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  undefined8 in_RAX;
  byte unaff_BL;
  byte unaff_BH;
  char cVar4;
  undefined6 unaff_0000001a;
  undefined4 unaff_EBP;
  undefined4 unaff_0000002c;
  bool bVar5;
  ulonglong unaff_retaddr;
  
  cVar3 = (char)in_RAX + '?';
  if (cVar3 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar5 = (unaff_retaddr & 1) != 0;
  cVar4 = unaff_BH + unaff_BL + bVar5;
  if ((CARRY1(unaff_BH,unaff_BL) || CARRY1(unaff_BH + unaff_BL,bVar5)) || cVar4 == '\0') {
    pcVar1 = (char *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar3) + -0x5984e5a8);
    *pcVar1 = *pcVar1 + param_1;
    in(0x7f);
    pbVar2 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(cVar4,unaff_BL)) +
                     CONCAT44(unaff_0000002c,unaff_EBP) * 2);
    *pbVar2 = *pbVar2 & (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5b8f FUN_14d7a5b8f body=14 status=ok
// SIG undefined FUN_14d7a5b8f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5b8f(void)

{
  undefined4 in_EAX;
  longlong unaff_RDI;
  
  *(uint *)(unaff_RDI + 0x4100c90b) = *(uint *)(unaff_RDI + 0x4100c90b) | 0x81bdc866;
  out(0x8d,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5bb5 FUN_14d7a5bb5 body=27 status=ok
// SIG undefined FUN_14d7a5bb5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5bb5(char param_1,undefined8 param_2)

{
  byte *pbVar1;
  unkbyte10 Var2;
  longlong in_RAX;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  longlong unaff_RDI;
  unkbyte10 in_ST0;
  
  Var2 = to_bcd(in_ST0);
  *(unkbyte10 *)(unaff_RDI + -0x2f) = Var2;
  *(char *)(in_RAX + -0x5984e5a8) = *(char *)(in_RAX + -0x5984e5a8) + param_1;
  in(0x7f);
  pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_RBP * 2);
  *pbVar1 = *pbVar1 & (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5bd2 FUN_14d7a5bd2 body=5 status=ok
// SIG undefined FUN_14d7a5bd2(void)

void FUN_14d7a5bd2(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a5bd9 FUN_14d7a5bd9 body=29 status=ok
// SIG undefined FUN_14d7a5bd9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5bd9(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RBP;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  bool in_ZF;
  bool in_OF;
  
  if ((in_OF) && (!in_ZF)) {
    *(char *)(unaff_RSI + -0x40) = *(char *)(unaff_RSI + -0x40) - (char)((ulonglong)param_2 >> 8);
    *(ulonglong *)(unaff_RBP + 8) = unaff_RDI & 0xffffffff;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5bfb FUN_14d7a5bfb body=4 status=ok
// SIG undefined FUN_14d7a5bfb(void)

void FUN_14d7a5bfb(void)

{
  uint *puVar1;
  uint uVar2;
  uint in_EAX;
  int unaff_EBP;
  uint unaff_ESI;
  int *unaff_RDI;
  byte in_CF;
  uint uVar3;
  
  out(0xda,in_EAX);
  puVar1 = (uint *)((ulonglong)in_EAX + 0x479801ae);
  uVar2 = *puVar1;
  uVar3 = *puVar1;
  *puVar1 = (uVar3 - unaff_ESI) - (uint)in_CF;
  *unaff_RDI = (*unaff_RDI - (int)unaff_RDI) -
               (uint)(uVar2 < unaff_ESI || uVar3 - unaff_ESI < (uint)in_CF);
  *unaff_RDI = unaff_EBP;
  FUN_14d7a5bd9();
  return;
}



// FUNCTION 14d7a5bff FUN_14d7a5bff body=22 status=ok
// SIG undefined FUN_14d7a5bff(void)

void FUN_14d7a5bff(void)

{
  uint *puVar1;
  uint uVar2;
  int in_EAX;
  longlong unaff_RBP;
  uint unaff_ESI;
  int *unaff_RDI;
  byte in_CF;
  uint uVar3;
  
  puVar1 = (uint *)(unaff_RBP + 0x479801ae);
  uVar2 = *puVar1;
  uVar3 = *puVar1;
  *puVar1 = (uVar3 - unaff_ESI) - (uint)in_CF;
  *unaff_RDI = (*unaff_RDI - (int)unaff_RDI) -
               (uint)(uVar2 < unaff_ESI || uVar3 - unaff_ESI < (uint)in_CF);
  *unaff_RDI = in_EAX;
  FUN_14d7a5bd9();
  return;
}



// FUNCTION 14d7a5c29 FUN_14d7a5c29 body=3 status=ok
// SIG undefined FUN_14d7a5c29(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5c29(void)

{
  longlong in_RAX;
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
  
  *(undefined2 *)(in_RAX + 0x6f) = in_FPUControlWord;
  *(undefined2 *)(in_RAX + 0x73) = in_FPUStatusWord;
  *(undefined2 *)(in_RAX + 0x77) = in_FPUTagWord;
  *(undefined8 *)(in_RAX + 0x83) = in_FPUDataPointer;
  *(undefined8 *)(in_RAX + 0x7b) = in_FPUInstructionPointer;
  *(undefined2 *)(in_RAX + 0x81) = in_FPULastInstructionOpcode;
  *(unkbyte10 *)(in_RAX + 0x8b) = in_ST0;
  *(unkbyte10 *)(in_RAX + 0x95) = in_ST1;
  *(unkbyte10 *)(in_RAX + 0x9f) = in_ST2;
  *(unkbyte10 *)(in_RAX + 0xa9) = in_ST3;
  *(unkbyte10 *)(in_RAX + 0xb3) = in_ST4;
  *(unkbyte10 *)(in_RAX + 0xbd) = in_ST5;
  *(unkbyte10 *)(in_RAX + 199) = in_ST6;
  *(unkbyte10 *)(in_RAX + 0xd1) = in_ST7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5c2d FUN_14d7a5c2d body=9 status=ok
// SIG undefined FUN_14d7a5c2d(void)

void FUN_14d7a5c2d(void)

{
  byte bVar1;
  longlong in_RAX;
  undefined1 in_CF;
  
  bVar1 = *(byte *)(in_RAX + 0x14);
  *(byte *)(in_RAX + 0x14) = bVar1 << 3 | (byte)(CONCAT11(in_CF,bVar1) >> 6);
  return;
}



// FUNCTION 14d7a5c39 FUN_14d7a5c39 body=15 status=ok
// SIG undefined FUN_14d7a5c39(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a5c39(void)

{
  undefined4 in_EAX;
  char *unaff_RDI;
  
  _DAT_604cf6cca33bca46 = in_EAX;
  if ((char)in_EAX < *unaff_RDI) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((POPCOUNT((char)in_EAX - *unaff_RDI) & 1U) != 0) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5c4e FUN_14d7a5c4e body=3 status=ok
// SIG undefined FUN_14d7a5c4e(void)

void FUN_14d7a5c4e(undefined8 param_1,int param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)(param_1,param_2 + -1);
  return;
}



// FUNCTION 14d7a5c52 FUN_14d7a5c52 body=7 status=ok
// SIG undefined FUN_14d7a5c52(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5c52(char param_1)

{
  longlong unaff_RBP;
  
  *(char *)(unaff_RBP + -0x2d827141) = *(char *)(unaff_RBP + -0x2d827141) - param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5c5a FUN_14d7a5c5a body=23 status=ok
// SIG undefined FUN_14d7a5c5a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5c5a(undefined8 param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  longlong unaff_RDI;
  undefined8 uStack_10;
  
  *(byte *)(unaff_RDI + 0x66) = *(byte *)(unaff_RDI + 0x66) & (byte)((ulonglong)param_1 >> 8);
  puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x06';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5c72 FUN_14d7a5c72 body=12 status=ok
// SIG undefined FUN_14d7a5c72(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5c72(undefined8 param_1,longlong param_2)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
  LOCK();
  *(int *)(param_2 + 0x74) = (int)unaff_RDI + 1;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5c83 FUN_14d7a5c83 body=1 status=ok
// SIG undefined FUN_14d7a5c83(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5c83(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5c8b FUN_14d7a5c8b body=12 status=ok
// SIG undefined FUN_14d7a5c8b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5c8b(void)

{
  longlong unaff_RDI;
  float10 in_ST0;
  
  *(float *)(unaff_RDI + -0x30) = (float)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5ca5 FUN_14d7a5ca5 body=26 status=ok
// SIG undefined FUN_14d7a5ca5(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7a5cad) */

void FUN_14d7a5ca5(longlong param_1,ulonglong param_2)

{
  longlong unaff_RDI;
  float10 in_ST0;
  
  if (param_1 == 1) {
    *(undefined1 *)(param_2 & 0xffffffff) = *(undefined1 *)(param_2 & 0xffffffff);
    *(float *)(unaff_RDI + -0x30) = (float)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5cc2 FUN_14d7a5cc2 body=7 status=ok
// SIG undefined FUN_14d7a5cc2(void)

undefined4 FUN_14d7a5cc2(ushort param_1,ushort param_2)

{
  char *pcVar1;
  uint in_EAX;
  undefined1 unaff_BL;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  
  pcVar1 = (char *)(unaff_RBP * 3 + -2);
  *pcVar1 = *pcVar1 << ((byte)param_1 & 0x1f);
  out(uRam000000003ef8027d,param_2 ^ param_1);
  return CONCAT31((int3)((in_EAX | 0xfa7fb94c) >> 8),
                  *(char *)(CONCAT62(unaff_0000001a,CONCAT11(0x8f,unaff_BL)) +
                           ((ulonglong)(in_EAX | 0xfa7fb94c) & 0xff)) + -0x21);
}



// FUNCTION 14d7a5cca FUN_14d7a5cca body=20 status=ok
// SIG undefined FUN_14d7a5cca(void)

/* WARNING: Instruction at (ram,0x00014d7a5cce) overlaps instruction at (ram,0x00014d7a5ccd)
    */

undefined4 FUN_14d7a5cca(ushort param_1,ushort param_2)

{
  uint in_EAX;
  longlong unaff_RBX;
  undefined4 *unaff_RSI;
  char in_SF;
  char in_OF;
  
  if (in_OF == in_SF) {
    param_2 = param_2 ^ param_1;
  }
  out(*unaff_RSI,param_2 ^ param_1);
  return CONCAT31((int3)((in_EAX | 0xfa7fb94c) >> 8),
                  *(char *)(unaff_RBX + ((ulonglong)(in_EAX | 0xfa7fb94c) & 0xff)) + -0x21);
}



// FUNCTION 14d7a5cdf FUN_14d7a5cdf body=14 status=ok
// SIG undefined FUN_14d7a5cdf(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a5cdf(void)

{
  _DAT_cbd61c75388b9690 = (int)&stack0x00000000;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5cf8 FUN_14d7a5cf8 body=3 status=ok
// SIG undefined FUN_14d7a5cf8(void)

void FUN_14d7a5cf8(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a5cfd FUN_14d7a5cfd body=4 status=ok
// SIG undefined FUN_14d7a5cfd(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: This function may have set the stack pointer */

void FUN_14d7a5cfd(byte param_1,undefined2 param_2)

{
  char *pcVar1;
  uint *puVar2;
  byte *pbVar3;
  uint uVar4;
  code *pcVar6;
  int in_EAX;
  undefined4 uVar7;
  uint *puVar8;
  undefined7 unaff_00000019;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  ulonglong unaff_RDI;
  uint uVar5;
  
  puVar8 = (uint *)(ulonglong)(in_EAX + 0x6fd62263);
  while( true ) {
    pcVar1 = (char *)(CONCAT71(unaff_00000019,0x88) + -0x27);
    *pcVar1 = *pcVar1 + -7;
    puVar2 = (uint *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x736ff777);
    *puVar2 = *puVar2 | unaff_EBP;
    uVar4 = *puVar2;
    uVar5 = *puVar2;
    if ((POPCOUNT(*puVar2 & 0xff) & 1U) == 0) {
      pbVar3 = (byte *)(CONCAT71((int7)((ulonglong)puVar8 >> 8),(byte)puVar8 ^ param_1) + 0x6c43c816
                       );
      *pbVar3 = *pbVar3 | param_1;
      pcVar6 = (code *)swi(1);
      (*pcVar6)();
      return;
    }
    uVar7 = in(param_2);
    *(uint *)(unaff_RDI - 0x4d2e4e0a) = unaff_EBP;
    puVar8 = (uint *)(ulonglong)CONCAT22((short)((uint)uVar7 >> 0x10),CONCAT11(0x9e,(char)uVar7));
    if ((int)uVar4 < 0) break;
    unaff_RDI = (ulonglong)*puVar8;
    if (uVar5 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5d01 FUN_14d7a5d01 body=6 status=ok
// SIG undefined FUN_14d7a5d01(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: This function may have set the stack pointer */

void FUN_14d7a5d01(byte param_1,undefined2 param_2)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  code *pcVar5;
  int in_EAX;
  undefined4 uVar6;
  uint *puVar7;
  longlong unaff_RBX;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  ulonglong unaff_RDI;
  byte in_CF;
  uint uVar4;
  
  puVar7 = (uint *)(ulonglong)(in_EAX + 0x6fd62263 + (uint)in_CF);
  while( true ) {
    *(char *)(unaff_RBX + -0x27) = *(char *)(unaff_RBX + -0x27) + -7;
    puVar1 = (uint *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x736ff777);
    *puVar1 = *puVar1 | unaff_EBP;
    uVar3 = *puVar1;
    uVar4 = *puVar1;
    if ((POPCOUNT(*puVar1 & 0xff) & 1U) == 0) {
      pbVar2 = (byte *)(CONCAT71((int7)((ulonglong)puVar7 >> 8),(byte)puVar7 ^ param_1) + 0x6c43c816
                       );
      *pbVar2 = *pbVar2 | param_1;
      pcVar5 = (code *)swi(1);
      (*pcVar5)();
      return;
    }
    uVar6 = in(param_2);
    *(uint *)(unaff_RDI - 0x4d2e4e0a) = unaff_EBP;
    puVar7 = (uint *)(ulonglong)CONCAT22((short)((uint)uVar6 >> 0x10),CONCAT11(0x9e,(char)uVar6));
    if ((int)uVar3 < 0) break;
    unaff_RDI = (ulonglong)*puVar7;
    if (uVar4 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5d12 FUN_14d7a5d12 body=15 status=ok
// SIG undefined FUN_14d7a5d12(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a5d16) overlaps instruction at (ram,0x00014d7a5d15)
    */

void FUN_14d7a5d12(byte param_1,byte *param_2)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  code *pcVar5;
  undefined4 uVar6;
  uint *in_RAX;
  longlong unaff_RBX;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  undefined4 *unaff_RSI;
  ulonglong unaff_RDI;
  bool in_CF;
  bool in_ZF;
  uint uVar4;
  
  if (!in_CF && !in_ZF) {
    out(0x4a,(int)in_RAX);
    *(char *)(unaff_RBX + -0x27) = *(char *)(unaff_RBX + -0x27) + (char)((ulonglong)in_RAX >> 8);
    while( true ) {
      puVar1 = (uint *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x736ff777);
      *puVar1 = *puVar1 | unaff_EBP;
      uVar3 = *puVar1;
      uVar4 = *puVar1;
      if ((POPCOUNT(*puVar1 & 0xff) & 1U) == 0) {
        pbVar2 = (byte *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX ^ param_1) +
                         0x6c43c816);
        *pbVar2 = *pbVar2 | param_1;
        pcVar5 = (code *)swi(1);
        (*pcVar5)();
        return;
      }
      uVar6 = in((short)param_2);
      *(uint *)(unaff_RDI - 0x4d2e4e0a) = unaff_EBP;
      in_RAX = (uint *)(ulonglong)CONCAT22((short)((uint)uVar6 >> 0x10),CONCAT11(0x9e,(char)uVar6));
      if ((int)uVar3 < 0) break;
      unaff_RDI = (ulonglong)*in_RAX;
      if (uVar4 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(char *)(unaff_RBX + -0x27) = *(char *)(unaff_RBX + -0x27) + -7;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*unaff_RSI,(short)param_2);
  if (!in_CF) {
    return;
  }
  *param_2 = *param_2 & (byte)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX >> 8 | *in_RAX << 0x18;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5d26 FUN_14d7a5d26 body=4 status=ok
// SIG undefined FUN_14d7a5d26(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a5d38) overlaps instruction at (ram,0x00014d7a5d37)
    */
/* WARNING: This function may have set the stack pointer */

void FUN_14d7a5d26(undefined8 param_1,ulonglong param_2)

{
  byte *pbVar1;
  uint *puVar2;
  uint uVar3;
  code *pcVar4;
  longlong lVar5;
  byte bVar6;
  ulonglong uVar7;
  byte bVar8;
  char cVar9;
  byte bVar11;
  ulonglong uVar10;
  longlong unaff_RBX;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  ulonglong unaff_RSI;
  undefined2 in_CS;
  bool bVar12;
  
  cVar9 = (char)((ulonglong)param_1 >> 8);
  bVar8 = (byte)param_1;
  while( true ) {
    *(undefined2 *)((longlong)register0x00000020 + -4) = in_CS;
    *(undefined4 *)((longlong)register0x00000020 + -8) = 0x4d7a5d29;
    uVar7 = (*(code *)(param_2 + unaff_RSI * 2))();
    lVar5 = *(longlong *)register0x00000020;
    pbVar1 = (byte *)(unaff_RSI - 0x38);
    bVar6 = *pbVar1;
    bVar11 = (byte)(param_2 >> 8);
    *pbVar1 = *pbVar1 + bVar11;
    out((short)param_2,(int)uVar7);
    uVar3 = *(uint *)(uVar7 + 0x3d);
    *(uint *)(uVar7 + 0x3d) =
         (uint)(CONCAT14(CARRY1(bVar6,bVar11),uVar3) >> (bVar8 & 0x1f)) |
         uVar3 << 0x21 - (bVar8 & 0x1f);
    out(0x22,(int)uVar7);
    uVar10 = unaff_RSI & 0xffffffff;
    bVar6 = *(byte *)(unaff_RBX + (param_2 & 0xff));
    *(ulonglong *)register0x00000020 = uVar10;
    bVar12 = SCARRY1(cVar9,cVar9);
    cVar9 = cVar9 * '\x02';
    *(uint *)(lVar5 + -0x4d2e4e0a) = unaff_EBP;
    if (bVar12 != cVar9 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (cVar9 == '\0') break;
    register0x00000020 = (BADSPACEBASE *)0xe7ece8f9;
    *(char *)(unaff_RBX + -0x27) = *(char *)(unaff_RBX + -0x27) + -7;
    puVar2 = (uint *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x736ff777);
    *puVar2 = *puVar2 | unaff_EBP;
    if ((POPCOUNT(*puVar2 & 0xff) & 1U) == 0) {
      pbVar1 = (byte *)((CONCAT71((int7)(CONCAT62((int6)(param_2 >> 0x10),CONCAT11(0x9e,bVar6)) >> 8
                                        ),bVar6 ^ bVar8) & 0xffffffff) + 0x6c43c816);
      *pbVar1 = *pbVar1 | bVar8;
      pcVar4 = (code *)swi(1);
      (*pcVar4)();
      return;
    }
    in((short)uVar10);
    param_2 = uVar10;
    unaff_RSI = uVar7 & 0xffffffff;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5d33 FUN_14d7a5d33 body=4 status=ok
// SIG undefined FUN_14d7a5d33(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a5d38) overlaps instruction at (ram,0x00014d7a5d37)
    */
/* WARNING: This function may have set the stack pointer */

void FUN_14d7a5d33(undefined8 param_1,ulonglong param_2)

{
  uint *puVar1;
  byte *pbVar2;
  code *pcVar3;
  byte bVar4;
  uint in_EAX;
  uint uVar5;
  uint *puVar6;
  char cVar7;
  longlong unaff_RBX;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  uint unaff_ESI;
  ulonglong unaff_RDI;
  bool bVar8;
  
  cVar7 = (char)((ulonglong)param_1 >> 8);
  while( true ) {
    uVar5 = in_EAX;
    bVar4 = *(byte *)(unaff_RBX + (param_2 & 0xff));
    *(ulonglong *)((longlong)register0x00000020 + -8) = (ulonglong)unaff_ESI;
    bVar8 = SCARRY1(cVar7,cVar7);
    cVar7 = cVar7 * '\x02';
    *(uint *)(unaff_RDI - 0x4d2e4e0a) = unaff_EBP;
    puVar6 = (uint *)(CONCAT62((int6)(param_2 >> 0x10),CONCAT11(0x9e,bVar4)) & 0xffffffff);
    if (bVar8 != cVar7 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_RDI = (ulonglong)*puVar6;
    if (cVar7 == '\0') break;
    register0x00000020 = (BADSPACEBASE *)0xe7ece8f9;
    *(char *)(unaff_RBX + -0x27) = *(char *)(unaff_RBX + -0x27) + -7;
    puVar1 = (uint *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x736ff777);
    *puVar1 = *puVar1 | unaff_EBP;
    if ((POPCOUNT(*puVar1 & 0xff) & 1U) == 0) {
      pbVar2 = (byte *)(CONCAT71((int7)((ulonglong)puVar6 >> 8),bVar4 ^ (byte)param_1) + 0x6c43c816)
      ;
      *pbVar2 = *pbVar2 | (byte)param_1;
      pcVar3 = (code *)swi(1);
      (*pcVar3)();
      return;
    }
    in_EAX = in((short)unaff_ESI);
    param_2 = (ulonglong)unaff_ESI;
    unaff_ESI = uVar5;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5d38 FUN_14d7a5d38 body=1 status=ok
// SIG undefined FUN_14d7a5d38(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: This function may have set the stack pointer */

void FUN_14d7a5d38(byte param_1,undefined2 param_2)

{
  uint *puVar1;
  byte *pbVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong unaff_RBX;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  ulonglong unaff_RDI;
  undefined1 in_ZF;
  char in_SF;
  char in_OF;
  
  while( true ) {
    uVar5 = in(param_2);
    *(uint *)(unaff_RDI - 0x4d2e4e0a) = unaff_EBP;
    uVar4 = CONCAT22((short)((uint)uVar5 >> 0x10),CONCAT11(0x9e,(byte)uVar5));
    if (in_OF != in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_RDI = (ulonglong)*(uint *)(ulonglong)uVar4;
    if ((bool)in_ZF) break;
    *(char *)(unaff_RBX + -0x27) = *(char *)(unaff_RBX + -0x27) + -7;
    puVar1 = (uint *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x736ff777);
    in_OF = '\0';
    *puVar1 = *puVar1 | unaff_EBP;
    in_SF = (int)*puVar1 < 0;
    in_ZF = *puVar1 == 0;
    if ((POPCOUNT(*puVar1 & 0xff) & 1U) == 0) {
      pbVar2 = (byte *)((ulonglong)CONCAT31((int3)(uVar4 >> 8),(byte)uVar5 ^ param_1) + 0x6c43c816);
      *pbVar2 = *pbVar2 | param_1;
      pcVar3 = (code *)swi(1);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5d3c FUN_14d7a5d3c body=10 status=ok
// SIG undefined FUN_14d7a5d3c(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a5d3f) overlaps instruction at (ram,0x00014d7a5d3e)
    */
/* WARNING: This function may have set the stack pointer */

void FUN_14d7a5d3c(undefined8 param_1,undefined2 param_2)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  code *pcVar4;
  undefined4 uVar5;
  uint *in_RAX;
  longlong unaff_RBX;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  bool bVar6;
  bool bVar7;
  char in_OF;
  
  bVar7 = ((ulonglong)in_RAX & 0x8000) != 0;
  bVar6 = ((ulonglong)in_RAX & 0x4000) != 0;
  while( true ) {
    if ((bool)in_OF != bVar7) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar3 = *in_RAX;
    if (bVar6) break;
    *(char *)(unaff_RBX + -0x27) = *(char *)(unaff_RBX + -0x27) + -7;
    puVar1 = (uint *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x736ff777);
    in_OF = '\0';
    *puVar1 = *puVar1 | unaff_EBP;
    bVar7 = (int)*puVar1 < 0;
    bVar6 = *puVar1 == 0;
    if ((POPCOUNT(*puVar1 & 0xff) & 1U) == 0) {
      pbVar2 = (byte *)(((ulonglong)in_RAX ^ 0xd1) + 0x6c43c816);
      *pbVar2 = *pbVar2 | 0xd1;
      pcVar4 = (code *)swi(1);
      (*pcVar4)();
      return;
    }
    uVar5 = in(CONCAT11((char)((ushort)param_2 >> 8),0xb4));
    *(uint *)((ulonglong)uVar3 - 0x4d2e4e0a) = unaff_EBP;
    in_RAX = (uint *)(ulonglong)CONCAT22((short)((uint)uVar5 >> 0x10),CONCAT11(0x9e,(char)uVar5));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5d50 FUN_14d7a5d50 body=2 status=ok
// SIG undefined FUN_14d7a5d50(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: This function may have set the stack pointer */

void FUN_14d7a5d50(longlong param_1,undefined2 param_2)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  uint *puVar6;
  ulonglong in_RAX;
  byte bVar7;
  longlong unaff_RBX;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  char in_ZF;
  char in_SF;
  char in_OF;
  
  if (param_1 + -1 == 0 || in_ZF == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while( true ) {
    puVar6 = (uint *)CONCAT62((int6)(in_RAX >> 0x10),CONCAT11(0x9e,(byte)in_RAX));
    if (in_OF != in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar3 = *puVar6;
    if ((bool)in_ZF) break;
    *(char *)(unaff_RBX + -0x27) = *(char *)(unaff_RBX + -0x27) + -7;
    puVar1 = (uint *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x736ff777);
    in_OF = '\0';
    *puVar1 = *puVar1 | unaff_EBP;
    in_SF = (int)*puVar1 < 0;
    in_ZF = *puVar1 == 0;
    if ((POPCOUNT(*puVar1 & 0xff) & 1U) == 0) {
      bVar7 = (byte)(param_1 + -1);
      pbVar2 = (byte *)(CONCAT71((int7)((ulonglong)puVar6 >> 8),(byte)in_RAX ^ bVar7) + 0x6c43c816);
      *pbVar2 = *pbVar2 | bVar7;
      pcVar4 = (code *)swi(1);
      (*pcVar4)();
      return;
    }
    uVar5 = in(param_2);
    in_RAX = (ulonglong)uVar5;
    *(uint *)((ulonglong)uVar3 - 0x4d2e4e0a) = unaff_EBP;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5d54 FUN_14d7a5d54 body=10 status=ok
// SIG undefined FUN_14d7a5d54(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5d54(undefined8 param_1,undefined2 param_2)

{
  longlong unaff_RBP;
  char *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI + '\x01';
  out(*unaff_RSI,param_2);
  LOCK();
  (&stack0x704cd82a)[unaff_RBP] = (char)param_2;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5d60 FUN_14d7a5d60 body=3 status=ok
// SIG undefined FUN_14d7a5d60(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5d60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5d68 FUN_14d7a5d68 body=27 status=ok
// SIG undefined FUN_14d7a5d68(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5d68(byte param_1)

{
  uint *puVar1;
  byte bVar2;
  char unaff_BL;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  puVar1 = (uint *)(unaff_RDI + 0x169d0b47);
  bVar2 = (param_1 << (param_1 & 7) | param_1 >> 8 - (param_1 & 7)) & 0x1f;
  *puVar1 = *puVar1 >> bVar2 | *puVar1 << 0x20 - bVar2;
  *(char *)(unaff_RSI + 0xd) = *(char *)(unaff_RSI + 0xd) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5db7 FUN_14d7a5db7 body=26 status=ok
// SIG undefined FUN_14d7a5db7(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a5dbd) overlaps instruction at (ram,0x00014d7a5db8)
    */

void FUN_14d7a5db7(undefined8 param_1,ulonglong param_2)

{
  byte *pbVar1;
  code *pcVar2;
  ulonglong *puVar3;
  uint in_EAX;
  ulonglong *puVar4;
  undefined8 unaff_RSI;
  
  DAT_191829f41 = DAT_191829f41 | 0x9b;
  puVar3 = (ulonglong *)register0x00000020;
  do {
    puVar4 = puVar3;
    if (((*puVar4 & 0x800) != 0) != ((param_2 & 0x8000) != 0)) {
      *puVar4 = (ulonglong)in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar3 = puVar4 + 1;
  } while ((*puVar4 & 0x800) != 0);
  pbVar1 = (byte *)((param_2 & 0xffffffff) + 0x18324c14);
  *pbVar1 = *pbVar1 | (byte)((param_2 & 0xffffffff) >> 8);
  *puVar4 = unaff_RSI;
  pcVar2 = (code *)swi(0xe);
  (*pcVar2)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5dd4 FUN_14d7a5dd4 body=7 status=ok
// SIG undefined FUN_14d7a5dd4(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a5dbd) overlaps instruction at (ram,0x00014d7a5db8)
    */

void FUN_14d7a5dd4(longlong param_1,ulonglong param_2)

{
  byte *pbVar1;
  code *pcVar2;
  ulonglong *puVar3;
  uint in_EAX;
  uint uVar4;
  ulonglong *puVar5;
  uint unaff_EBP;
  undefined8 unaff_RSI;
  
  uVar4 = (uint)&stack0x00000000 | unaff_EBP;
  if ((-1 < (int)uVar4) && (param_1 == 1 || uVar4 != 0)) {
    DAT_191829f41 = DAT_191829f41 | 0x9b;
    puVar3 = (ulonglong *)(ulonglong)uVar4;
    do {
      puVar5 = puVar3;
      if (((*puVar5 & 0x800) != 0) != ((param_2 & 0x8000) != 0)) {
        *puVar5 = (ulonglong)in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar3 = puVar5 + 1;
    } while ((*puVar5 & 0x800) != 0);
    pbVar1 = (byte *)((param_2 & 0xffffffff) + 0x18324c14);
    *pbVar1 = *pbVar1 | (byte)((param_2 & 0xffffffff) >> 8);
    *puVar5 = unaff_RSI;
    pcVar2 = (code *)swi(0xe);
    (*pcVar2)();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5de9 FUN_14d7a5de9 body=12 status=ok
// SIG undefined FUN_14d7a5de9(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a5def) overlaps instruction at (ram,0x00014d7a5dee)
    */

void FUN_14d7a5de9(undefined8 param_1,char *param_2)

{
  char in_AL;
  undefined4 *unaff_RDI;
  char in_CF;
  bool in_PF;
  
  if (in_PF) {
    *param_2 = *param_2 + in_AL + in_CF;
    *unaff_RDI = 0xb26bcf56;
    *(undefined1 *)(unaff_RDI + 1) = 0x56;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// FUNCTION 14d7a5e04 FUN_14d7a5e04 body=61 status=ok
// SIG undefined FUN_14d7a5e04(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a5e04(longlong param_1)

{
  uint *puVar1;
  byte *pbVar2;
  uint *puVar3;
  uint uVar4;
  byte bVar6;
  int iVar7;
  uint in_EAX;
  uint uVar8;
  uint uVar9;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  float10 in_ST0;
  uint uVar5;
  
  puVar3 = unaff_RSI + 1;
  *unaff_RDI = *unaff_RSI;
  *(uint *)(unaff_RBP + 0x451fcdd2) = *(uint *)(unaff_RBP + 0x451fcdd2) | 0xd0a4bab4;
  puVar1 = (uint *)((longlong)unaff_RDI + -0x67);
  uVar4 = *puVar1;
  uVar9 = (uint)&stack0x00000000;
  uVar5 = *puVar1;
  iVar7 = uVar9 - *puVar1;
  *(float *)((ulonglong)in_EAX + 0x14) = (float)in_ST0;
  uVar8 = in((short)in_EAX);
  if (iVar7 != 0 && (int)uVar5 <= (int)uVar9) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (uVar9 < uVar4 || iVar7 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar8 = uVar8 ^ 0xad225f81;
  uVar4 = *puVar3;
  *puVar3 = *puVar3 + uVar8;
  pbVar2 = (byte *)((longlong)unaff_RSI + param_1 * 4 + 0x4fec073b);
  bVar6 = (byte)in_EAX - *pbVar2;
  LOCK();
  *(int *)((longlong)unaff_RDI + -0x36f862d2) =
       *(int *)((longlong)unaff_RDI + -0x36f862d2) + iVar7 +
       (uint)((byte)in_EAX < *pbVar2 || bVar6 < CARRY4(uVar4,uVar8));
  UNLOCK();
  _DAT_f23ca8b4 = _DAT_f23ca8b4 >> 1;
  out(*(undefined4 *)(ulonglong)((uint)puVar3 ^ _DAT_1a56e79bf),
      (short)CONCAT31((int3)(in_EAX >> 8),bVar6 - CARRY4(uVar4,uVar8)));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5e2a FUN_14d7a5e2a body=12 status=ok
// SIG undefined FUN_14d7a5e2a(void)

int FUN_14d7a5e2a(void)

{
  byte bVar1;
  int in_EAX;
  byte unaff_BH;
  byte *unaff_RDI;
  byte in_CF;
  byte bVar2;
  
  bVar1 = *unaff_RDI;
  bVar2 = *unaff_RDI;
  *unaff_RDI = bVar2 + unaff_BH + in_CF;
  return in_EAX + 0x5c61eae6 + (uint)(CARRY1(bVar1,unaff_BH) || CARRY1(bVar2 + unaff_BH,in_CF));
}



// FUNCTION 14d7a5e36 FUN_14d7a5e36 body=3 status=ok
// SIG undefined FUN_14d7a5e36(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5e36(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5e3b FUN_14d7a5e3b body=20 status=ok
// SIG undefined FUN_14d7a5e3b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5e3b(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RDI;
  
  func_0x00018b978cd8();
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5e84 FUN_14d7a5e84 body=4 status=ok
// SIG undefined FUN_14d7a5e84(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5e84(void)

{
  in(0x8b);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5ece FUN_14d7a5ece body=1 status=ok
// SIG undefined FUN_14d7a5ece(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5ece(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5ed6 FUN_14d7a5ed6 body=43 status=ok
// SIG undefined FUN_14d7a5ed6(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7a5efa) */

void FUN_14d7a5ed6(undefined8 param_1,char *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  bool in_ZF;
  bool bVar3;
  bool bVar4;
  
  uVar1 = (longlong)*(int *)(unaff_RBP + -0x571cb373) * 0xc;
  if ((longlong)(int)uVar1 != uVar1 || in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar4 = (unaff_RSI & 0x800) != 0;
  bVar3 = (unaff_RSI & 0x80) != 0;
  if ((unaff_RSI & 0x40) == 0 && bVar4 == bVar3) {
    lVar2 = 0x67246b4e;
    while (*param_2 = *param_2 + (char)lVar2, lVar2 == 1) {
      lVar2 = 0;
    }
  }
  else {
    if (bVar4 == bVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(uint *)(uVar1 & 0xffffffff) = *(uint *)(uVar1 & 0xffffffff) ^ (uint)param_2;
    param_2[0x5d] = param_2[0x5d] + (char)param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5f15 FUN_14d7a5f15 body=18 status=ok
// SIG undefined FUN_14d7a5f15(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5f15(uint param_1,uint *param_2)

{
  char cVar1;
  uint *in_RAX;
  undefined8 *unaff_RBP;
  byte in_CF;
  
  *in_RAX = *in_RAX >> 1 | (uint)in_CF << 0x1f;
  *param_2 = *param_2 ^ param_1;
  cVar1 = '\x1c';
  do {
    unaff_RBP = unaff_RBP + -1;
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
    *(undefined8 *)register0x00000020 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5f2a FUN_14d7a5f2a body=3 status=ok
// SIG undefined FUN_14d7a5f2a(void)

void FUN_14d7a5f2a(longlong param_1,undefined2 param_2)

{
  undefined1 in_AL;
  ulonglong uVar1;
  byte bVar2;
  undefined1 unaff_BPL;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  char in_AF;
  
  *unaff_RDI = *unaff_RSI;
  out(param_2,in_AL);
  bVar2 = (byte)((ulonglong)(param_1 + -1) >> 8) & *(byte *)(param_1 + -1);
  uVar1 = (ulonglong)
          CONCAT31((int3)(char)(((char)bVar2 < '\0') << 7 | (bVar2 == 0) << 6 | in_AF << 4 |
                                ((POPCOUNT(bVar2) & 1U) == 0) << 2 | 2),unaff_BPL) ^ 0xa0;
  *(int *)(unaff_RDI + 1) = (int)uVar1;
  *(int *)(uVar1 + 0x13) = (int)(unaff_RDI + 1) + 4;
  return;
}



// FUNCTION 14d7a5f33 FUN_14d7a5f33 body=12 status=ok
// SIG undefined FUN_14d7a5f33(void)

void FUN_14d7a5f33(byte *param_1)

{
  ulonglong uVar1;
  byte bVar2;
  undefined1 unaff_BPL;
  undefined4 *unaff_RDI;
  char in_AF;
  
  bVar2 = (byte)((ulonglong)param_1 >> 8) & *param_1;
  uVar1 = (ulonglong)
          CONCAT31((int3)(char)(((char)bVar2 < '\0') << 7 | (bVar2 == 0) << 6 | in_AF << 4 |
                                ((POPCOUNT(bVar2) & 1U) == 0) << 2 | 2),unaff_BPL) ^ 0xa0;
  *unaff_RDI = (int)uVar1;
  *(int *)(uVar1 + 0x13) = (int)unaff_RDI + 4;
  return;
}



// FUNCTION 14d7a5f3f FUN_14d7a5f3f body=5 status=ok
// SIG undefined FUN_14d7a5f3f(void)

void FUN_14d7a5f3f(void)

{
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = in_EAX;
  *(int *)(CONCAT44(in_register_00000004,in_EAX) + 0x13) = (int)unaff_RDI + 4;
  return;
}



// FUNCTION 14d7a5f47 FUN_14d7a5f47 body=26 status=ok
// SIG undefined FUN_14d7a5f47(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a5f76) overlaps instruction at (ram,0x00014d7a5f74)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a5f76) */

void FUN_14d7a5f47(byte param_1,uint param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  byte *in_RAX;
  uint *unaff_RDI;
  byte in_CF;
  float10 in_ST0;
  
  do {
    uVar3 = ((int)in_RAX + -0x9b00c42) - (uint)in_CF;
    in_RAX = (byte *)(ulonglong)uVar3;
    *in_RAX = *in_RAX << (param_1 & 7) | *in_RAX >> 8 - (param_1 & 7);
    in_CF = param_2 < *(uint *)((longlong)unaff_RDI + -0x3f);
    param_2 = param_2 - *(uint *)((longlong)unaff_RDI + -0x3f);
    *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
  } while (param_2 != 0);
  *(byte *)unaff_RDI = (byte)*unaff_RDI >> (param_1 & 7) | (byte)*unaff_RDI << 8 - (param_1 & 7);
  cVar2 = ((byte)uVar3 | *(byte *)(ulonglong)(uint)(int)(short)uVar3) - 0xc;
  uVar3 = CONCAT22((char)(uVar3 >> 8) >> 7,CONCAT11(0x19,cVar2));
  *param_4 = *param_4 + param_1;
  *(short *)((ulonglong)uVar3 + 0x5cd6018b) = (short)ROUND(in_ST0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  if (!SBORROW1('\0',cVar2)) {
    *unaff_RDI = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)((ulonglong)uVar3 + 0x3b);
  *pcVar1 = *pcVar1 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5f64 FUN_14d7a5f64 body=4 status=ok
// SIG undefined FUN_14d7a5f64(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5f64(char param_1,int *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  undefined4 *unaff_RDI;
  float10 in_ST0;
  
  *unaff_RDI = in_EAX;
  *param_2 = *param_2 + -1;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + 0x19b4f4d0);
  *pcVar1 = *pcVar1 + (char)in_EAX;
  *param_4 = *param_4 + param_1;
  *(short *)(CONCAT44(in_register_00000004,in_EAX) + 0x5cd6018b) = (short)ROUND(in_ST0);
  if (SBORROW1((char)((ulonglong)param_2 >> 8),(char)in_EAX)) {
    pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + 0x3b);
    *pcVar1 = *pcVar1 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  unaff_RDI[1] = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5f69 FUN_14d7a5f69 body=29 status=ok
// SIG undefined FUN_14d7a5f69(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5f69(char param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char in_AL;
  char cVar2;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  undefined4 *unaff_RDI;
  char in_CF;
  float10 in_ST0;
  
  cVar2 = in_AL + -0xc + in_CF;
  *param_4 = *param_4 + param_1;
  *(short *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(0x19,cVar2))) +
            0x5cd6018b) = (short)ROUND(in_ST0);
  if (SBORROW1((char)((ulonglong)param_2 >> 8),cVar2)) {
    pcVar1 = (char *)(CONCAT44(in_register_00000004,
                               CONCAT22(in_register_00000002,CONCAT11(0x19,cVar2))) + 0x3b);
    *pcVar1 = *pcVar1 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = CONCAT22(in_register_00000002,CONCAT11(0x19,cVar2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5fa1 FUN_14d7a5fa1 body=3 status=ok
// SIG undefined FUN_14d7a5fa1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5fa1(undefined8 param_1,longlong param_2)

{
  undefined4 in_EAX;
  undefined4 unaff_EBX;
  longlong unaff_RBP;
  
  out((short)param_2,in_EAX);
  *(uint *)(param_2 + -0x25) = *(uint *)(param_2 + -0x25) >> 1;
  *(undefined4 *)(unaff_RBP + 0x430435c2) = unaff_EBX;
  func_0x0001861ba2e4(0x3e);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5fa5 FUN_14d7a5fa5 body=2 status=ok
// SIG undefined FUN_14d7a5fa5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5fa5(void)

{
  undefined4 unaff_EBX;
  longlong unaff_RBP;
  
  *(undefined4 *)(unaff_RBP + 0x430435c2) = unaff_EBX;
  func_0x0001861ba2e4();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5fb1 FUN_14d7a5fb1 body=13 status=ok
// SIG undefined FUN_14d7a5fb1(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a5fde) overlaps instruction at (ram,0x00014d7a5fd6)
    */

void FUN_14d7a5fb1(longlong param_1)

{
  uint uVar1;
  int iVar2;
  uint in_EAX;
  undefined8 *puVar3;
  uint *unaff_RDI;
  
  if ((in_EAX | 0xee6633d3) != 0xb9f5681e) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while (*unaff_RDI < 0x80000000) {
    puVar3 = (undefined8 *)((longlong)register0x00000020 + -8);
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
    *puVar3 = 0x2e75b9f5;
    unaff_RDI = unaff_RDI + 1;
  }
  iVar2 = *(int *)(param_1 + -0x219a9c41);
  uVar1 = in(0xb974);
  unaff_RDI[2] = uVar1;
  if (iVar2 * 0x758f3bc == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6002 FUN_14d7a6002 body=12 status=ok
// SIG undefined FUN_14d7a6002(void)

/* WARNING: Control flow encountered bad instruction data */

ulonglong FUN_14d7a6002(longlong param_1,undefined2 param_2)

{
  int *piVar1;
  char *pcVar2;
  uint in_EAX;
  ulonglong uVar3;
  char unaff_BL;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  
  out(*unaff_RSI,param_2);
  piVar1 = (int *)(unaff_RDI + 0x13aebf72);
  *piVar1 = *piVar1 + 0x34;
  if (param_1 == 1 || *piVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar2 = (char *)((ulonglong)in_EAX - 0x2484f12d);
  *pcVar2 = *pcVar2 + unaff_BL;
  if (param_1 + -2 == 0 || *pcVar2 != '\0') {
    uVar3 = FUN_14d7a60ca(param_1 + -2,0xd2);
    return uVar3;
  }
  return (ulonglong)(unaff_RSI + 1) & 0xffffffff;
}



// FUNCTION 14d7a600e FUN_14d7a600e body=29 status=ok
// SIG undefined FUN_14d7a600e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a600e(longlong param_1)

{
  char *pcVar1;
  char unaff_BL;
  longlong unaff_RSI;
  char in_ZF;
  
  if (param_1 == 1 || in_ZF != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(unaff_RSI + -0x2484f12d);
  *pcVar1 = *pcVar1 + unaff_BL;
  if (param_1 + -2 == 0 || *pcVar1 != '\0') {
    FUN_14d7a60ca(param_1 + -2,0xd2);
    return;
  }
  return;
}



// FUNCTION 14d7a6013 FUN_14d7a6013 body=3 status=ok
// SIG undefined FUN_14d7a6013(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6013(void)

{
  bool in_OF;
  
  if (in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6028 thunk_EXT_FUN_1268a0c0e body=5 status=ok
// SIG undefined thunk_EXT_FUN_1268a0c0e(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_1268a0c0e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6056 FUN_14d7a6056 body=13 status=ok
// SIG undefined FUN_14d7a6056(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6056(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  uint unaff_EBX;
  char *unaff_RSI;
  char *unaff_RDI;
  
  pcVar1 = unaff_RDI + param_1 + 0x3d;
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  if (-1 < *pcVar1) {
    *unaff_RDI = *unaff_RDI + '\x01';
    *unaff_RDI = *unaff_RSI;
    *(uint *)(unaff_RDI + -0x40) = *(uint *)(unaff_RDI + -0x40) ^ unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6063 FUN_14d7a6063 body=26 status=ok
// SIG undefined FUN_14d7a6063(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6063(void)

{
  uint unaff_EBX;
  char *unaff_RSI;
  char *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + '\x01';
  *unaff_RDI = *unaff_RSI;
  *(uint *)(unaff_RDI + -0x40) = *(uint *)(unaff_RDI + -0x40) ^ unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6080 FUN_14d7a6080 body=2 status=ok
// SIG undefined FUN_14d7a6080(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6080(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6084 FUN_14d7a6084 body=2 status=ok
// SIG undefined FUN_14d7a6084(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6084(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  uint unaff_EBX;
  char *unaff_RSI;
  char *unaff_RDI;
  char in_SF;
  char in_OF;
  
  if (in_OF != in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = unaff_RDI + param_1 + 0x3d;
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  if (-1 < *pcVar1) {
    *unaff_RDI = *unaff_RDI + '\x01';
    *unaff_RDI = *unaff_RSI;
    *(uint *)(unaff_RDI + -0x40) = *(uint *)(unaff_RDI + -0x40) ^ unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a608c FUN_14d7a608c body=8 status=ok
// SIG undefined FUN_14d7a608c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a608c(undefined8 param_1,undefined2 param_2)

{
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6098 FUN_14d7a6098 body=5 status=ok
// SIG undefined FUN_14d7a6098(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6098(longlong param_1,int param_2)

{
  char cVar1;
  undefined4 *in_RAX;
  int *piVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined8 *puVar4;
  int unaff_EBP;
  undefined4 *unaff_RDI;
  undefined4 *unaff_retaddr;
  undefined8 *puStackX_8;
  
  param_2 = param_2 * 2;
  *in_RAX = (int)in_RAX;
  if (param_1 == 1 || param_2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  in((short)param_2);
  if (param_2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar2 = (int *)CONCAT71((uint7)(uint3)((uint)param_2 >> 8),0x3a);
  do {
  } while ((int)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),
                         (byte)unaff_RBX ^
                         *(byte *)((ulonglong)(unaff_EBP + 0x35181f4b) + 0x16d00a0 +
                                  (longlong)piVar2 * 2)) == *piVar2);
  uVar3 = (ulonglong)unaff_RDI & 0xffffffff;
  *unaff_RDI = *unaff_retaddr;
  puVar4 = (undefined8 *)(uVar3 - 8);
  *(undefined8 **)(uVar3 - 8) = puStackX_8;
  cVar1 = '\x11';
  do {
    puStackX_8 = puStackX_8 + -1;
    puVar4 = puVar4 + -1;
    *puVar4 = *puStackX_8;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  *(ulonglong *)(uVar3 - 0x98) = uVar3 - 8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a609d FUN_14d7a609d body=23 status=ok
// SIG undefined FUN_14d7a609d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a609d(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined6 uVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined8 *puVar5;
  int unaff_EBP;
  undefined4 *unaff_RDI;
  bool in_ZF;
  undefined4 *unaff_retaddr;
  undefined8 *puStackX_8;
  
  uVar3 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar2 = (undefined1)((ulonglong)param_2 >> 8);
  if (param_1 == 1 || in_ZF != false) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  in((short)param_2);
  if (in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
  } while ((int)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),
                         (byte)unaff_RBX ^
                         *(byte *)((ulonglong)(unaff_EBP + 0x35181f4b) + 0x16d00a0 +
                                  CONCAT62(uVar3,CONCAT11(uVar2,0x3a)) * 2)) ==
           *(int *)CONCAT62(uVar3,CONCAT11(uVar2,0x3a)));
  uVar4 = (ulonglong)unaff_RDI & 0xffffffff;
  *unaff_RDI = *unaff_retaddr;
  puVar5 = (undefined8 *)(uVar4 - 8);
  *(undefined8 **)(uVar4 - 8) = puStackX_8;
  cVar1 = '\x11';
  do {
    puStackX_8 = puStackX_8 + -1;
    puVar5 = puVar5 + -1;
    *puVar5 = *puStackX_8;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  *(ulonglong *)(uVar4 - 0x98) = uVar4 - 8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a60b5 FUN_14d7a60b5 body=8 status=ok
// SIG undefined FUN_14d7a60b5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a60b5(void)

{
  in(0xd4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a60ca FUN_14d7a60ca body=53 status=ok
// SIG undefined FUN_14d7a60ca(void)

/* WARNING: Instruction at (ram,0x00014d7a60d3) overlaps instruction at (ram,0x00014d7a60d2)
    */
/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a60ca(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined6 uVar2;
  undefined1 uVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined8 *puVar5;
  int unaff_EBP;
  undefined4 *unaff_RDI;
  byte in_CF;
  bool in_PF;
  byte in_AF;
  bool in_ZF;
  bool in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined4 *unaff_retaddr;
  undefined8 *puStackX_8;
  
  uVar2 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar3 = (undefined1)((ulonglong)unaff_RBX >> 8);
  if (in_PF) {
    if (in_SF) {
      register0x00000020 = (BADSPACEBASE *)&stack0xfffffffffffffff8;
    }
    *(undefined8 *)((longlong)register0x00000020 + -8) = unaff_RBX;
    *(ulonglong *)((longlong)register0x00000020 + -0x10) =
         (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_OF & 1) * 0x800 |
         (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
         (ulonglong)(in_SF & 1) * 0x80 | (ulonglong)(in_ZF & 1) * 0x40 |
         (ulonglong)(in_AF & 1) * 0x10 | 4 | (ulonglong)(in_CF & 1) |
         (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
         (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  in(CONCAT11(uVar3,(char)param_2));
  if (in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
  } while ((int)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),
                         (byte)unaff_RBX ^
                         *(byte *)((ulonglong)(unaff_EBP + 0x35181f4b) + 0x16d00a0 +
                                  CONCAT62(uVar2,CONCAT11(uVar3,0x3a)) * 2)) ==
           *(int *)CONCAT62(uVar2,CONCAT11(uVar3,0x3a)));
  uVar4 = (ulonglong)unaff_RDI & 0xffffffff;
  *unaff_RDI = *unaff_retaddr;
  puVar5 = (undefined8 *)(uVar4 - 8);
  *(undefined8 **)(uVar4 - 8) = puStackX_8;
  cVar1 = '\x11';
  do {
    puStackX_8 = puStackX_8 + -1;
    puVar5 = puVar5 + -1;
    *puVar5 = *puStackX_8;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  *(ulonglong *)(uVar4 - 0x98) = uVar4 - 8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6107 FUN_14d7a6107 body=7 status=ok
// SIG undefined FUN_14d7a6107(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6107(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6118 FUN_14d7a6118 body=7 status=ok
// SIG undefined FUN_14d7a6118(void)

void FUN_14d7a6118(void)

{
  return;
}



// FUNCTION 14d7a6120 FUN_14d7a6120 body=9 status=ok
// SIG undefined FUN_14d7a6120(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6120(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a612d FUN_14d7a612d body=1 status=ok
// SIG undefined FUN_14d7a612d(void)

void FUN_14d7a612d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7a6131 FUN_14d7a6131 body=4 status=ok
// SIG undefined FUN_14d7a6131(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6131(void)

{
  undefined1 in_AL;
  
  out(0x56,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6139 FUN_14d7a6139 body=3 status=ok
// SIG undefined FUN_14d7a6139(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6139(void)

{
  code *pcVar1;
  bool in_OF;
  
  if (!in_OF) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a613d FUN_14d7a613d body=29 status=ok
// SIG undefined FUN_14d7a613d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a6144) overlaps instruction at (ram,0x00014d7a6143)
    */

void FUN_14d7a613d(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  longlong unaff_RBX;
  ulonglong *puVar2;
  longlong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar3;
  undefined8 uStack_8;
  
  param_1 = param_1 + -1;
  if (param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uStack_8 = param_2;
  puVar2 = &uStack_8;
  if (!CARRY4((uint)unaff_RBX,*(uint *)(unaff_RBX + -0x20))) {
    (*(code *)(unaff_RBP + -0x59567140))();
    puVar2 = (ulonglong *)register0x00000020;
  }
  uVar3 = *puVar2;
  pbVar1 = (byte *)(unaff_RSI + 0x655da6a9);
  *pbVar1 = *pbVar1 >> 5 | *pbVar1 << 3;
  if (param_1 == 1 || (uVar3 & 0x40) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6155 FUN_14d7a6155 body=2 status=ok
// SIG undefined FUN_14d7a6155(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6155(longlong param_1)

{
  longlong unaff_RBP;
  bool in_SF;
  
  if (!in_SF) {
    *(char *)(param_1 + 0x7e03a207) = (char)*(undefined4 *)(unaff_RBP + -0x29) * -0x3d;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6162 FUN_14d7a6162 body=31 status=ok
// SIG undefined FUN_14d7a6162(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6162(longlong param_1)

{
  int iVar1;
  undefined8 in_RAX;
  int *unaff_RDI;
  
  iVar1 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX + 0x3f) + 0x3c28ba97) -
          (uint)((byte)in_RAX < 0xc1);
  *unaff_RDI = iVar1;
  *(char *)(param_1 + 0x7e03a207) = (char)iVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6182 FUN_14d7a6182 body=10 status=ok
// SIG undefined FUN_14d7a6182(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6182(undefined8 param_1,uint *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RSI;
  
  *param_2 = ~*param_2;
  LOCK();
  puVar2 = (undefined4 *)(CONCAT44(in_register_00000004,in_EAX) + unaff_RSI);
  uVar3 = *puVar2;
  *puVar2 = in_EAX;
  UNLOCK();
  puVar1 = (undefined1 *)(CONCAT44(in_register_00000004,uVar3) + -0x23);
  *puVar1 = *puVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a619b FUN_14d7a619b body=1 status=ok
// SIG undefined FUN_14d7a619b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a619b(undefined8 param_1,undefined2 param_2)

{
  undefined1 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a61a3 FUN_14d7a61a3 body=8 status=ok
// SIG undefined FUN_14d7a61a3(void)

void FUN_14d7a61a3(char param_1)

{
  undefined1 in_AL;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = in_AL;
  func_0x00018934c18c();
  *(char *)(unaff_RSI + -0x1e0c5ebf) = *(char *)(unaff_RSI + -0x1e0c5ebf) + param_1;
  return;
}



// FUNCTION 14d7a61bd FUN_14d7a61bd body=1 status=ok
// SIG undefined FUN_14d7a61bd(void)

void FUN_14d7a61bd(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7a61c5 FUN_14d7a61c5 body=12 status=ok
// SIG undefined FUN_14d7a61c5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a61c5(byte param_1)

{
  char *pcVar1;
  longlong unaff_RBP;
  longlong unaff_RDI;
  bool in_PF;
  
  if (!in_PF) {
    pcVar1 = (char *)(unaff_RDI + 0x2a0507a2 + unaff_RBP);
    *pcVar1 = *pcVar1 + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RBP + -0x45) = *(char *)(unaff_RBP + -0x45) >> (param_1 & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a61d1 FUN_14d7a61d1 body=7 status=ok
// SIG undefined FUN_14d7a61d1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a61d1(void)

{
  char *pcVar1;
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  pcVar1 = (char *)(unaff_RDI + 0x2a0507a2 + unaff_RBP);
  *pcVar1 = *pcVar1 + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a61d9 FUN_14d7a61d9 body=4 status=ok
// SIG undefined FUN_14d7a61d9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a61d9(void)

{
  char in_SF;
  char in_OF;
  
  if (in_OF != in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a61e1 FUN_14d7a61e1 body=6 status=ok
// SIG undefined FUN_14d7a61e1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a61e1(void)

{
  in(0xe7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a61f5 FUN_14d7a61f5 body=14 status=ok
// SIG undefined FUN_14d7a61f5(void)

void FUN_14d7a61f5(undefined8 param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  undefined4 *unaff_RSI;
  char *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + (char)param_2;
  out(*unaff_RSI,param_2);
  out(param_2,in_EAX);
  uRam0bc4c3f90c008e6e = in_EAX;
  return;
}



// FUNCTION 14d7a620b FUN_14d7a620b body=2 status=ok
// SIG undefined FUN_14d7a620b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a620b(undefined4 param_1,longlong param_2)

{
  undefined4 in_EAX;
  
  out(0xee,CONCAT31((int3)((uint)in_EAX >> 8),uRamb2ecc22097c70004));
  *(char *)(param_2 + 0x2c) =
       *(char *)(param_2 + 0x2c) + ((byte)((uint)param_1 >> 8) | (byte)((ulonglong)param_2 >> 8));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6214 FUN_14d7a6214 body=4 status=ok
// SIG undefined FUN_14d7a6214(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6214(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  uVar3 = (undefined1)((ulonglong)param_2 >> 8);
  uVar2 = in((short)param_2);
  out(CONCAT11(uVar3,0xe7),uVar2);
  pcVar1 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(uVar3,0xe7)) + 0x2c);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6219 FUN_14d7a6219 body=5 status=ok
// SIG undefined FUN_14d7a6219(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6219(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6221 FUN_14d7a6221 body=3 status=ok
// SIG undefined FUN_14d7a6221(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00012fb83ed9) */

void FUN_14d7a6221(void)

{
  return;
}



// FUNCTION 14d7a6225 FUN_14d7a6225 body=5 status=ok
// SIG undefined FUN_14d7a6225(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00012fb83ed9) */

void FUN_14d7a6225(void)

{
  return;
}



// FUNCTION 14d7a622e FUN_14d7a622e body=43 status=ok
// SIG undefined FUN_14d7a622e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00012fb83ed9) */

void FUN_14d7a622e(void)

{
  return;
}



// FUNCTION 14d7a6267 FUN_14d7a6267 body=16 status=ok
// SIG undefined FUN_14d7a6267(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7a62ba) */

void FUN_14d7a6267(uint param_1,longlong param_2)

{
  char *pcVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined8 in_RAX;
  longlong lVar4;
  longlong lVar5;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  uint unaff_EBP;
  byte *unaff_RSI;
  byte *unaff_RDI;
  undefined1 auStackX_8 [32];
  
  if (*unaff_RSI <= *unaff_RDI) {
    out(0x6b,(char)in_RAX);
    *(char *)(param_2 + 0x67) = *(char *)(param_2 + 0x67) - unaff_BH;
    uVar3 = in((short)((ulonglong)in_RAX >> 0x10) >> 0xf);
    *(undefined4 *)(unaff_RDI + 1) = uVar3;
    return;
  }
  if (!SBORROW1(*unaff_RSI,*unaff_RDI)) {
    puVar2 = (uint *)((ulonglong)param_1 + 0x69855110);
    *puVar2 = *puVar2 | param_1;
    pcVar1 = (char *)((ulonglong)param_1 + 3);
    *pcVar1 = *pcVar1 + 'O';
    lVar5 = CONCAT62((uint6)((ulonglong)in_RAX >> 0x10) & 0xffff,0x8f00);
    uVar3 = in((short)param_2);
    *(undefined4 *)(unaff_RDI + 1) = uVar3;
    *(ulonglong *)((ulonglong)param_1 - 8) =
         CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
    LOCK();
    *(int *)((ulonglong)(uint)(int)(short)auStackX_8 - 0x2e3f9466) = (int)unaff_RSI + 1;
    UNLOCK();
    *(undefined8 *)((ulonglong)param_1 - 0x10) = 0x14d7a632d;
    lVar4 = func_0xd4423d58();
    *(int *)(lVar4 + -0x16) = *(int *)(lVar4 + -0x16) + -0x29;
    *(uint *)(lVar5 + -0x4a4ddbf1) = *(uint *)(lVar5 + -0x4a4ddbf1) | unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6280 FUN_14d7a6280 body=6 status=ok
// SIG undefined FUN_14d7a6280(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6280(int param_1)

{
  longlong unaff_RDI;
  
  *(int *)(unaff_RDI + -0x34be5361) = *(int *)(unaff_RDI + -0x34be5361) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a628d FUN_14d7a628d body=20 status=ok
// SIG undefined FUN_14d7a628d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a628d(void)

{
  int in_EAX;
  byte in_CF;
  
  if ((int)((in_EAX + 0x3a5623e4) - (uint)in_CF) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6299 FUN_14d7a6299 body=1 status=ok
// SIG undefined FUN_14d7a6299(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6299(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a62b2 FUN_14d7a62b2 body=11 status=ok
// SIG undefined FUN_14d7a62b2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a62b2(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  uint *puVar2;
  undefined4 uVar3;
  ulonglong in_RAX;
  longlong lVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined6 uVar7;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  undefined4 unaff_ESI;
  undefined4 *unaff_RDI;
  char in_CF;
  char in_SF;
  char in_OF;
  
  uVar7 = (undefined6)((ulonglong)param_1 >> 0x10);
  uVar5 = (undefined1)param_1;
  if (in_OF == in_SF) {
    *(undefined1 *)
     (CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) + -0x70) =
         unaff_BH;
    pcVar1 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + -0x37);
    *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8) + in_CF;
    *(int *)(in_RAX & 0xffffffff) = (int)unaff_RDI;
    return;
  }
  uVar6 = 0x8f;
  uVar3 = in((short)param_2);
  *unaff_RDI = uVar3;
  *(ulonglong *)((in_RAX & 0xffffffff) - 8) =
       CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  LOCK();
  *(undefined4 *)((ulonglong)(uint)(int)(short)&stack0x00000000 - 0x2e3f9466) = unaff_ESI;
  UNLOCK();
  *(undefined8 *)((in_RAX & 0xffffffff) - 0x10) = 0x14d7a632d;
  lVar4 = func_0xd4423d58();
  *(int *)(lVar4 + -0x16) = *(int *)(lVar4 + -0x16) + -0x29;
  puVar2 = (uint *)(CONCAT62(uVar7,CONCAT11(uVar6,uVar5)) + -0x4a4ddbf1);
  *puVar2 = *puVar2 | unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a62be FUN_14d7a62be body=8 status=ok
// SIG undefined FUN_14d7a62be(void)

void FUN_14d7a62be(void)

{
  undefined4 in_EAX;
  longlong unaff_RBX;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)(unaff_RBX + -0x68fffb4a));
  return;
}



// FUNCTION 14d7a62cb FUN_14d7a62cb body=1 status=ok
// SIG undefined FUN_14d7a62cb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a62cb(undefined8 param_1,undefined2 param_2)

{
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a62d0 FUN_14d7a62d0 body=35 status=ok
// SIG undefined FUN_14d7a62d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a62d0(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  longlong in_RAX;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined8 unaff_RBP;
  longlong unaff_RSI;
  char in_CF;
  undefined4 *puVar5;
  
  *(int *)(in_RAX + 0x4f5d74eb) = *(int *)(in_RAX + 0x4f5d74eb) + 1;
  uVar4 = CONCAT11(0x5a,(char)in_RAX);
  puVar5 = (undefined4 *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),uVar4);
  *puVar5 = (int)puVar5;
  iVar3 = _DAT_305e65048b15619d;
  cVar2 = *(char *)(unaff_RSI + 0x21);
  *(char *)(param_2 + -0x5d1d1490) = *(char *)(param_2 + -0x5d1d1490) + -0x5d;
  do {
  } while ((int)CONCAT62((int6)((ulonglong)unaff_RBP >> 0x10),uVar4) +
           *(int *)((ulonglong)(uint)(iVar3 >> 0x1f) - 0x38) != 0);
  pcVar1 = (char *)(CONCAT71(unaff_00000019,(unaff_BL - cVar2) - in_CF) + 0x6a);
  *pcVar1 = *pcVar1 << 1;
  return;
}



// FUNCTION 14d7a62f9 FUN_14d7a62f9 body=13 status=ok
// SIG undefined FUN_14d7a62f9(void)

void FUN_14d7a62f9(void)

{
  char *pcVar1;
  int in_EAX;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  int unaff_retaddr;
  
  do {
  } while (unaff_retaddr + *(int *)((ulonglong)(uint)(in_EAX >> 0x1f) - 0x38) != 0);
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 0x6a);
  *pcVar1 = *pcVar1 << 1;
  return;
}



// FUNCTION 14d7a6309 FUN_14d7a6309 body=38 status=ok
// SIG undefined FUN_14d7a6309(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6309(undefined8 param_1,undefined2 param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  ulonglong in_RAX;
  longlong lVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined6 uVar6;
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  uint unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 *unaff_RDI;
  undefined1 auStackX_8 [32];
  
  uVar6 = (undefined6)((ulonglong)param_1 >> 0x10);
  *(uint *)(in_RAX + 0x69855110) = *(uint *)(in_RAX + 0x69855110) | (uint)in_RAX;
  uVar4 = 0;
  *(char *)(in_RAX + 3) = *(char *)(in_RAX + 3) + 'O';
  uVar5 = 0x8f;
  uVar2 = in(param_2);
  *unaff_RDI = uVar2;
  *(ulonglong *)((in_RAX & 0xffffffff) - 8) = CONCAT44(unaff_0000001c,unaff_EBX);
  LOCK();
  *(undefined4 *)((ulonglong)(uint)(int)(short)auStackX_8 - 0x2e3f9466) = unaff_ESI;
  UNLOCK();
  *(undefined8 *)((in_RAX & 0xffffffff) - 0x10) = 0x14d7a632d;
  lVar3 = func_0xd4423d58();
  *(int *)(lVar3 + -0x16) = *(int *)(lVar3 + -0x16) + -0x29;
  puVar1 = (uint *)(CONCAT62(uVar6,CONCAT11(uVar5,uVar4)) + -0x4a4ddbf1);
  *puVar1 = *puVar1 | unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6342 FUN_14d7a6342 body=1 status=ok
// SIG undefined FUN_14d7a6342(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6342(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a634a FUN_14d7a634a body=10 status=ok
// SIG undefined FUN_14d7a634a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a634a(void)

{
  double *unaff_RSI;
  float10 in_ST0;
  
  *unaff_RSI = (double)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6356 FUN_14d7a6356 body=27 status=ok
// SIG undefined FUN_14d7a6356(void)

uint FUN_14d7a6356(int *param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  uint in_EAX;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  byte in_CF;
  float10 in_ST0;
  
  iVar1 = *param_1;
  iVar2 = *param_1 + (int)param_1;
  *param_1 = iVar2 + (uint)in_CF;
  if ((SCARRY4(iVar1,(int)param_1) != SCARRY4(iVar2,(uint)in_CF)) != *param_1 < 0) {
    sVar3 = (short)DAT_5cb1adae;
    *(longlong *)(unaff_RBP + -0x5ee8e2ee) = (longlong)ROUND(in_ST0);
    out(*unaff_RSI,param_2);
    return (uint)CONCAT11((char)((short)in_EAX % sVar3),(char)((short)in_EAX / sVar3));
  }
  out(param_2,in_EAX);
  return in_EAX;
}



// FUNCTION 14d7a6373 FUN_14d7a6373 body=2 status=ok
// SIG undefined FUN_14d7a6373(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6373(longlong param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  longlong lVar1;
  uint unaff_EBP;
  int unaff_ESI;
  bool in_CF;
  bool in_ZF;
  char in_SF;
  bool in_OF;
  short unaff_retaddr;
  
  if (!in_CF && !in_ZF) {
    out(param_2,in_EAX);
    return;
  }
  uRam8683208be83f115a = in_EAX;
  if (!in_ZF && in_OF == (bool)in_SF) {
    if (!in_OF) {
      uRam7df11dce8c94d5eb = 0xa0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  LOCK();
  *(int *)((ulonglong)(uint)(int)unaff_retaddr - 0x2e3f9466) =
       unaff_ESI + *(int *)(param_1 + 0x6d948fb5);
  UNLOCK();
  lVar1 = func_0xd4423d58();
  *(int *)(lVar1 + -0x16) = *(int *)(lVar1 + -0x16) + -0x29;
  *(uint *)(param_1 + -0x4a4ddbf1) = *(uint *)(param_1 + -0x4a4ddbf1) | unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a637b FUN_14d7a637b body=17 status=ok
// SIG undefined FUN_14d7a637b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7a6333) */

void FUN_14d7a637b(void)

{
  byte in_AL;
  longlong unaff_RBX;
  
  *(byte *)(unaff_RBX + 0x70937e86) = *(byte *)(unaff_RBX + 0x70937e86) & in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a63c1 FUN_14d7a63c1 body=2 status=ok
// SIG undefined FUN_14d7a63c1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a63c1(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined1 uVar3;
  uint in_EAX;
  uint uVar4;
  ulonglong uVar5;
  byte bVar6;
  undefined6 uVar7;
  longlong unaff_RBX;
  ulonglong unaff_RSI;
  bool bVar8;
  bool in_SF;
  bool in_OF;
  
  uVar7 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar6 = (byte)((ulonglong)param_2 >> 8);
  while( true ) {
    uVar5 = unaff_RSI & 0xffffffff;
    unaff_RSI = (ulonglong)in_EAX;
    if (in_OF) break;
    bVar6 = 99;
    in_EAX = 0xdb47fc45;
  }
  if (!in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar8 = CARRY1(bRam000000010e7c77ab,bVar6);
  bRam000000010e7c77ab = bRam000000010e7c77ab + bVar6;
  pcVar2 = (char *)(unaff_RBX + 0x19745330 + CONCAT62(uVar7,CONCAT11(bVar6,(char)param_2)) * 2);
  *pcVar2 = *pcVar2 + '\x01';
  uVar4 = (uint)CONCAT71((int7)(uVar5 >> 8),((char)uVar5 + '|') - bVar8) & 0x3b350ede;
  LOCK();
  puVar1 = (undefined1 *)(CONCAT62(uVar7,CONCAT11(bVar6,(char)param_2)) + 0x75);
  uVar3 = *puVar1;
  *puVar1 = (char)uVar4;
  UNLOCK();
  out(0x55,CONCAT31((int3)(uVar4 >> 8),uVar3));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a63ce FUN_14d7a63ce body=4 status=ok
// SIG undefined FUN_14d7a63ce(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a63ce(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  uint uVar2;
  longlong in_RAX;
  longlong unaff_RBX;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  undefined1 in_CF;
  
  uVar2 = *(uint *)(&stack0x00000000 + in_RAX * 4);
  *(uint *)(&stack0x00000000 + in_RAX * 4) = (uint)(CONCAT14(in_CF,uVar2) >> 0x1e) | uVar2 << 3;
  *unaff_RDI = *unaff_RSI;
  *(byte *)(unaff_RBX + 0x74) = *(byte *)(unaff_RBX + 0x74) ^ (byte)param_2;
  *(int *)((longlong)(unaff_RSI + 1) * 3) = *(int *)((longlong)(unaff_RSI + 1) * 3) - (int)param_2;
  uVar2 = (uint)in_RAX & 0x3b350ede;
  LOCK();
  uVar1 = *(undefined1 *)(param_2 + 0x75);
  *(undefined1 *)(param_2 + 0x75) = (char)uVar2;
  UNLOCK();
  out(0x55,CONCAT31((int3)(uVar2 >> 8),uVar1));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a63d2 FUN_14d7a63d2 body=24 status=ok
// SIG undefined FUN_14d7a63d2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a63d2(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  uint in_EAX;
  longlong unaff_RBX;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
  *(byte *)(unaff_RBX + 0x74) = *(byte *)(unaff_RBX + 0x74) ^ (byte)param_2;
  *(int *)((longlong)(unaff_RSI + 1) * 3) = *(int *)((longlong)(unaff_RSI + 1) * 3) - (int)param_2;
  LOCK();
  uVar1 = *(undefined1 *)(param_2 + 0x75);
  *(undefined1 *)(param_2 + 0x75) = (char)(in_EAX & 0x3b350ede);
  UNLOCK();
  out(0x55,CONCAT31((int3)((in_EAX & 0x3b350ede) >> 8),uVar1));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a63f3 FUN_14d7a63f3 body=9 status=ok
// SIG undefined FUN_14d7a63f3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a63f3(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  uint uVar5;
  undefined8 in_RAX;
  undefined1 *unaff_RDI;
  byte in_CF;
  bool bVar6;
  bool in_ZF;
  
  if (in_ZF) {
    out(0x55,(int)in_RAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar3 = (byte)in_RAX + 0xba;
  bVar6 = (byte)in_RAX < 0x46 || bVar3 < in_CF;
  uVar5 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3 - in_CF);
  uVar2 = uVar5 + 0x3c00da6e;
  if (0xc3ff2591 < uVar5 || CARRY4(uVar2,(uint)bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  if (!SCARRY2((short)uVar2 + (ushort)bVar6,-0x6c5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  cRam0000000014100612 = cRam0000000014100612 + '\x12';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6404 FUN_14d7a6404 body=8 status=ok
// SIG undefined FUN_14d7a6404(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6404(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6410 FUN_14d7a6410 body=5 status=ok
// SIG undefined FUN_14d7a6410(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7a6516) */

void FUN_14d7a6410(undefined8 param_1,int param_2)

{
  byte *pbVar1;
  uint in_EAX;
  uint uVar2;
  longlong unaff_RSI;
  int *unaff_RDI;
  longlong in_R11;
  longlong unaff_R14;
  
  uVar2 = in_EAX | 0x2f355fe4;
  pbVar1 = (byte *)(unaff_RSI + 0x301b627);
  *pbVar1 = *pbVar1 >> 1 | *pbVar1 << 7;
  if (-1 < (char)*pbVar1 && uVar2 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (uVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(longlong *)(in_R11 + 0x3f80005f) = *(longlong *)(in_R11 + 0x3f80005f) + unaff_R14;
  out((short)param_2,(char)uVar2);
  *unaff_RDI = *unaff_RDI - param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6418 FUN_14d7a6418 body=32 status=ok
// SIG undefined FUN_14d7a6418(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6418(uint *param_1,undefined4 param_2)

{
  undefined1 in_AL;
  undefined2 uVar1;
  uint unaff_ESI;
  int *unaff_RDI;
  longlong in_R11;
  longlong unaff_R14;
  bool bVar2;
  
  uVar1 = CONCAT11(1,(char)param_2);
  bVar2 = unaff_ESI + *param_1 != 0;
  if (!CARRY4(unaff_ESI,*param_1) && bVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar2) {
    *(longlong *)(in_R11 + 0x3f80005f) = *(longlong *)(in_R11 + 0x3f80005f) + unaff_R14;
    out(uVar1,in_AL);
    *unaff_RDI = *unaff_RDI - CONCAT22((short)((uint)param_2 >> 0x10),uVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!SCARRY4(unaff_ESI,*param_1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6439 FUN_14d7a6439 body=6 status=ok
// SIG undefined FUN_14d7a6439(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6439(byte param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined1 *unaff_RDI;
  
  *(int *)(unaff_RDI + 0x30) = *(int *)(unaff_RDI + 0x30) >> (param_1 & 0x1f);
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6442 FUN_14d7a6442 body=3 status=ok
// SIG undefined FUN_14d7a6442(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6442(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar4;
  code *pcVar5;
  uint uVar6;
  undefined8 in_RAX;
  undefined4 *unaff_RDI;
  byte in_CF;
  bool bVar7;
  
  uVar2 = in(param_2);
  *unaff_RDI = uVar2;
  bVar4 = (byte)in_RAX + 0xba;
  bVar7 = (byte)in_RAX < 0x46 || bVar4 < in_CF;
  uVar6 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar4 - in_CF);
  uVar3 = uVar6 + 0x3c00da6e;
  if (0xc3ff2591 < uVar6 || CARRY4(uVar3,(uint)bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar1 = in(param_2);
  *(undefined1 *)(unaff_RDI + 1) = uVar1;
  if (!SCARRY2((short)uVar3 + (ushort)bVar7,-0x6c5)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  cRam0000000014100612 = cRam0000000014100612 + '\x12';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6446 FUN_14d7a6446 body=30 status=ok
// SIG undefined FUN_14d7a6446(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6446(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  uint in_EAX;
  undefined1 *unaff_RDI;
  byte in_CF;
  
  if (0xc3ff2591 < in_EAX || CARRY4(in_EAX + 0x3c00da6e,(uint)in_CF)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  if (!SCARRY2((short)(in_EAX + 0x3c00da6e) + (ushort)in_CF,-0x6c5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  cRam0000000014100612 = cRam0000000014100612 + '\x12';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a645c FUN_14d7a645c body=5 status=ok
// SIG undefined FUN_14d7a645c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a645c(void)

{
  cRam0000000014100612 = cRam0000000014100612 + '\x12';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6464 FUN_14d7a6464 body=5 status=ok
// SIG undefined FUN_14d7a6464(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6464(void)

{
  char *pcVar1;
  char in_CF;
  
  pcVar1 = (char *)(CONCAT71((int7)((ulonglong)&stack0x00000000 >> 8),in_CF + 'R') & 0xffffffff);
  *pcVar1 = *pcVar1 + in_CF + 'R';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a646d FUN_14d7a646d body=12 status=ok
// SIG undefined FUN_14d7a646d(void)

void FUN_14d7a646d(void)

{
  code *pcVar1;
  undefined1 uVar2;
  ulonglong in_RAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int unaff_ESI;
  longlong unaff_RDI;
  
  uVar2 = *(undefined1 *)(unaff_RBX + (in_RAX & 0xff));
  *(int *)(unaff_RBP + -0x3fc04ec1) = unaff_ESI + 4;
  *(undefined1 *)(unaff_RDI + 4) = uVar2;
  *(char *)(unaff_RBX + 0x2600a99d) = *(char *)(unaff_RBX + 0x2600a99d) + '\x01';
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7a6486 FUN_14d7a6486 body=10 status=ok
// SIG undefined FUN_14d7a6486(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6486(void)

{
  bool in_OF;
  
  if (in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6492 FUN_14d7a6492 body=2 status=ok
// SIG undefined FUN_14d7a6492(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6492(undefined8 param_1,ulonglong param_2)

{
  longlong in_RAX;
  int unaff_ESI;
  
  *(int *)(in_RAX + 0x7f) = *(int *)(in_RAX + 0x7f) + unaff_ESI + (uint)((param_2 & 1) != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6496 FUN_14d7a6496 body=21 status=ok
// SIG undefined FUN_14d7a6496(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6496(void)

{
  code *pcVar1;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (in_ZF || in_OF != in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (code *)swi(100);
  (*pcVar1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a64af FUN_14d7a64af body=7 status=ok
// SIG undefined FUN_14d7a64af(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a64af(undefined1 param_1)

{
  undefined1 *unaff_RBX;
  
  LOCK();
  *unaff_RBX = param_1;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a64bb FUN_14d7a64bb body=6 status=ok
// SIG undefined FUN_14d7a64bb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a64bb(longlong param_1,byte *param_2)

{
  code *pcVar1;
  byte bVar2;
  undefined4 in_EAX;
  byte bVar3;
  longlong unaff_RBP;
  
  out(0xc1,in_EAX);
  bVar2 = (byte)uRam5fbbe51a05392550;
  *(char *)(unaff_RBP + 0x5d) = *(char *)(unaff_RBP + 0x5d) + bVar2;
  bVar3 = (byte)param_2 ^ *param_2;
  bVar2 = bVar2 | 0xca;
  out(CONCAT11((char)((ulonglong)param_2 >> 8),bVar3),bVar2);
  if (bVar2 == 0) {
    pcVar1 = (code *)swi(100);
    (*pcVar1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (SBORROW1(bVar3,*(char *)(param_1 + 0x42)) !=
      SBORROW1(bVar3 - *(char *)(param_1 + 0x42),bVar2 < 0x1a)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a64c3 FUN_14d7a64c3 body=1 status=ok
// SIG undefined FUN_14d7a64c3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a64c3(longlong param_1,byte *param_2)

{
  code *pcVar1;
  byte in_AL;
  byte bVar2;
  byte bVar3;
  
  bVar3 = (byte)param_2 ^ *param_2;
  bVar2 = in_AL & 0x39 | 0xca;
  out(CONCAT11((char)((ulonglong)param_2 >> 8),bVar3),bVar2);
  if (bVar2 == 0) {
    pcVar1 = (code *)swi(100);
    (*pcVar1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (SBORROW1(bVar3,*(char *)(param_1 + 0x42)) !=
      SBORROW1(bVar3 - *(char *)(param_1 + 0x42),bVar2 < 0x1a)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a64c7 FUN_14d7a64c7 body=2 status=ok
// SIG undefined FUN_14d7a64c7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a64c7(longlong param_1,byte *param_2)

{
  code *pcVar1;
  byte in_AL;
  byte bVar2;
  byte bVar3;
  
  bVar3 = (byte)param_2 ^ *param_2;
  bVar2 = in_AL | 0xca;
  out(CONCAT11((char)((ulonglong)param_2 >> 8),bVar3),bVar2);
  if (bVar2 == 0) {
    pcVar1 = (code *)swi(100);
    (*pcVar1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (SBORROW1(bVar3,*(char *)(param_1 + 0x42)) !=
      SBORROW1(bVar3 - *(char *)(param_1 + 0x42),bVar2 < 0x1a)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a64cc FUN_14d7a64cc body=9 status=ok
// SIG undefined FUN_14d7a64cc(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a64cc(longlong param_1,byte *param_2)

{
  code *pcVar1;
  byte in_AL;
  byte bVar2;
  byte bVar3;
  
  bVar3 = (byte)param_2 ^ *param_2;
  bVar2 = in_AL | 0xca;
  out(CONCAT11((char)((ulonglong)param_2 >> 8),bVar3),bVar2);
  if (bVar2 == 0) {
    pcVar1 = (code *)swi(100);
    (*pcVar1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (SBORROW1(bVar3,*(char *)(param_1 + 0x42)) !=
      SBORROW1(bVar3 - *(char *)(param_1 + 0x42),bVar2 < 0x1a)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a64ed FUN_14d7a64ed body=25 status=ok
// SIG undefined FUN_14d7a64ed(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a64ed(undefined8 param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(CONCAT71((int7)((ulonglong)param_1 >> 8),0x70) + -99);
  *puVar1 = *puVar1 ^ 0x976ddec6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a651a FUN_14d7a651a body=10 status=ok
// SIG undefined FUN_14d7a651a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a651a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6527 FUN_14d7a6527 body=16 status=ok
// SIG undefined FUN_14d7a6527(void)

uint FUN_14d7a6527(void)

{
  undefined1 uVar1;
  undefined8 in_RAX;
  uint *unaff_RBX;
  undefined1 *unaff_RSI;
  
  uVar1 = *unaff_RSI;
  *unaff_RBX = *unaff_RBX ^ 0x9ec7117b;
  return (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar1) & 0xf26f37f3;
}



// FUNCTION 14d7a653c FUN_14d7a653c body=8 status=ok
// SIG undefined FUN_14d7a653c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a653c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6549 FUN_14d7a6549 body=8 status=ok
// SIG undefined FUN_14d7a6549(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6549(undefined8 param_1,byte *param_2)

{
  *param_2 = *param_2 & (byte)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6555 FUN_14d7a6555 body=2 status=ok
// SIG undefined FUN_14d7a6555(void)

void FUN_14d7a6555(void)

{
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  float10 in_ST0;
  
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) >> 1;
  *(longlong *)(unaff_RSI + -0x18) = (longlong)in_ST0;
  return;
}



// FUNCTION 14d7a6559 FUN_14d7a6559 body=35 status=ok
// SIG undefined FUN_14d7a6559(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6559(uint param_1,longlong param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  int *unaff_RBX;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  uVar3 = func_0x00010b3b9eef();
  *(uint *)((longlong)unaff_RSI + 0x78126b71) =
       *(uint *)((longlong)unaff_RSI + 0x78126b71) & param_1;
  out(0xca,uVar3);
  *unaff_RDI = *unaff_RSI;
  iVar2 = *unaff_RBX;
  cVar5 = (char)(param_1 + iVar2);
  *(char *)(unaff_RBP + 0x49) = *(char *)(unaff_RBP + 0x49) + cVar5;
  if ((char)uVar3 == -100) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (SCARRY1(cVar5,'\x01')) {
    uVar3 = in((short)param_2);
    unaff_RDI[1] = uVar3;
    *(char *)(unaff_RBP + 0xfda7590) = *(char *)(unaff_RBP + 0xfda7590) + (char)unaff_RBX;
    out(*(undefined1 *)(unaff_RSI + 1),(short)param_2);
    iVar4 = *(int *)((longlong)unaff_RDI + 0xb) * 0x46;
    if (-1 < (char)((byte)iVar4 ^ *(byte *)(param_2 + -0x21434fb3))) {
      pcVar1 = (char *)((ulonglong)CONCAT31((int3)(param_1 + iVar2 >> 8),cVar5 + '\x01') - 0x39);
      *pcVar1 = *pcVar1 + cVar5 + '\x01';
      pcVar1 = (char *)((ulonglong)(uint)((int)(int3)((uint)iVar4 >> 8) >> 0x17) + 0x3283284c);
      *pcVar1 = *pcVar1 + 'd';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6577 FUN_14d7a6577 body=13 status=ok
// SIG undefined FUN_14d7a6577(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6577(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  int iVar2;
  byte *unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  float10 in_ST0;
  ulonglong unaff_retaddr;
  
  if ((unaff_retaddr & 0x40) == 0) {
    *unaff_RBX = *unaff_RBX >> 1;
    *(longlong *)(unaff_RSI + -0x18) = (longlong)in_ST0;
    return;
  }
  iVar2 = *(int *)(unaff_RDI + 3) * 0x46;
  if (-1 < (char)((byte)iVar2 ^ *(byte *)(param_2 + -0x21434fb3))) {
    pcVar1 = (char *)(CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                               CONCAT11((byte)((ulonglong)param_1 >> 8) & unaff_RBX[0x2a],
                                        (char)param_1)) + -0x39);
    *pcVar1 = *pcVar1 + (char)param_1;
    pcVar1 = (char *)((ulonglong)(uint)((int)(int3)((uint)iVar2 >> 8) >> 0x17) + 0x3283284c);
    *pcVar1 = *pcVar1 + 'd';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6586 FUN_14d7a6586 body=3 status=ok
// SIG undefined FUN_14d7a6586(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6586(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a658e FUN_14d7a658e body=20 status=ok
// SIG undefined FUN_14d7a658e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a658e(longlong param_1)

{
  char *pcVar1;
  int in_EAX;
  char in_SF;
  char in_OF;
  
  if (in_OF == in_SF) {
    *(char *)(param_1 + -0x39) = *(char *)(param_1 + -0x39) + (char)param_1;
    pcVar1 = (char *)((ulonglong)(uint)(in_EAX >> 0x1f) + 0x3283284c);
    *pcVar1 = *pcVar1 + 'd';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a65a3 FUN_14d7a65a3 body=7 status=ok
// SIG undefined FUN_14d7a65a3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a65a3(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a65b0 thunk_EXT_FUN_1aed6a4d0 body=5 status=ok
// SIG undefined thunk_EXT_FUN_1aed6a4d0(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_1aed6a4d0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a65b8 FUN_14d7a65b8 body=37 status=ok
// SIG undefined FUN_14d7a65b8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a65b8(void)

{
  char in_AL;
  undefined8 *unaff_RBP;
  byte *unaff_RSI;
  byte *unaff_RDI;
  
  *unaff_RDI = in_AL + 0x3aU;
  *unaff_RBP = 0x5b5909b4;
  out(0x7c,(in_AL - ((byte)(in_AL + 0x3aU) < 0xc5)) + '{' + (*unaff_RSI < unaff_RDI[1]));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a65ed FUN_14d7a65ed body=9 status=ok
// SIG undefined FUN_14d7a65ed(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a65ed(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a65fd FUN_14d7a65fd body=7 status=ok
// SIG undefined FUN_14d7a65fd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a65fd(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint unaff_EBP;
  byte *unaff_RSI;
  byte *pbVar5;
  byte *unaff_RDI;
  ulonglong unaff_retaddr;
  
  in(0x6d);
  bVar4 = (byte)((ulonglong)param_2 >> 8) | *unaff_RSI;
  if (bVar4 != 0) {
    out(0x7c,(char)unaff_EBP + '\x06' + (*unaff_RSI < *unaff_RDI));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = unaff_EBP + 0x8c595377;
  uVar2 = *(uint *)(unaff_RDI + -0x3ced0b33);
  *(uint *)(unaff_RDI + -0x3ced0b33) =
       uVar2 << 0x18 | (uint)(CONCAT14(unaff_EBP < 0x73a6ac89,uVar2) >> 9);
  *(byte *)(ulonglong)uVar3 = *(byte *)(ulonglong)uVar3 & (byte)uVar3;
  pcVar1 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(bVar4,(char)param_2)) +
                   -0xf);
  *pcVar1 = *pcVar1 + '\x01';
  if (*pcVar1 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar5 = unaff_RSI + (ulonglong)((unaff_retaddr & 0x400) != 0) * -2 + 1;
  *unaff_RDI = *unaff_RSI;
  *pbVar5 = *pbVar5 << 1 | (char)*pbVar5 < '\0';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6605 FUN_14d7a6605 body=1 status=ok
// SIG undefined FUN_14d7a6605(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6605(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6629 FUN_14d7a6629 body=5 status=ok
// SIG undefined FUN_14d7a6629(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6629(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6636 FUN_14d7a6636 body=34 status=ok
// SIG undefined FUN_14d7a6636(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6636(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6668 FUN_14d7a6668 body=76 status=ok
// SIG undefined FUN_14d7a6668(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a6668(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  code *pcVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  char unaff_BL;
  uint unaff_EBP;
  byte *unaff_RSI;
  byte *unaff_RDI;
  byte in_CF;
  byte bVar13;
  
  pcVar7 = (code *)swi(0x57);
  uVar11 = (*pcVar7)(0x18);
  bVar9 = (byte)uVar11;
  bVar4 = bVar9 + 6;
  bVar13 = 0xf9 < bVar9 || CARRY1(bVar4,in_CF);
  _DAT_e8eb284994b87767 = (undefined4)CONCAT71((int7)((ulonglong)uVar11 >> 8),bVar4 + in_CF);
  uVar12 = 0x8259c1d1;
  if (SCARRY1(bVar9,'\x06') == SCARRY1(bVar4,in_CF)) {
    func_0x0001b2e67109();
    bVar4 = *(byte *)(param_2 + -0x45);
    bVar5 = (byte)param_2 + *(byte *)(param_2 + -0x45);
    pbVar2 = unaff_RDI + uVar12 + 0xba51f13;
    bVar8 = (byte)uVar12 & 0x1f;
    bVar9 = *pbVar2;
    *pbVar2 = *pbVar2 << bVar8;
    bVar6 = (uVar12 & 0x1f) != 0;
    pcVar1 = (char *)(CONCAT71((int7)((ulonglong)param_2 >> 8),bVar5 + bVar13) + 0x65b2c42e);
    *pcVar1 = (*pcVar1 - unaff_BL) -
              (!bVar6 && (CARRY1((byte)param_2,bVar4) || CARRY1(bVar5,bVar13)) ||
              bVar6 && (char)(bVar9 << bVar8 - 1) < '\0');
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((0xf9 >= bVar9 && !CARRY1(bVar4,in_CF)) && (byte)(bVar4 + in_CF) != '\0') {
    out(0x7c,((char)unaff_EBP - bVar13) + '\x06' + (*unaff_RSI < *unaff_RDI));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar10 = (unaff_EBP + 0x8c595377) - (uint)bVar13;
  uVar3 = *(uint *)(unaff_RDI + -0x3ced0b33);
  *(uint *)(unaff_RDI + -0x3ced0b33) =
       uVar3 << 0x18 |
       (uint)(CONCAT14(unaff_EBP < 0x73a6ac89 || unaff_EBP + 0x8c595377 < (uint)bVar13,uVar3) >> 9);
  *(byte *)(ulonglong)uVar10 = *(byte *)(ulonglong)uVar10 & (byte)uVar10;
  pcVar1 = (char *)(param_2 + -0xf);
  *pcVar1 = *pcVar1 + '\x01';
  if (*pcVar1 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar2 = unaff_RSI + 1;
  *unaff_RDI = *unaff_RSI;
  *pbVar2 = *pbVar2 << 1 | (char)*pbVar2 < '\0';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a669c FUN_14d7a669c body=8 status=ok
// SIG undefined FUN_14d7a669c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a669c(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  byte unaff_BL;
  byte bVar8;
  longlong unaff_RDI;
  bool bVar9;
  
  *(uint *)(param_2 + -0x4a69b4a9) = *(uint *)(param_2 + -0x4a69b4a9) & (uint)unaff_RDI;
  uVar6 = in(0x286b);
  bVar8 = unaff_BL | (byte)uVar6;
  uVar7 = param_1 - 1;
  if (uVar7 == 0 || bVar8 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar9 = 0x94 < DAT_687f2826;
  cVar3 = DAT_687f2826 + 0x6b;
  pcVar1 = (char *)(param_1 + 0xba51f12 + unaff_RDI);
  bVar5 = (byte)uVar7 & 0x1f;
  cVar2 = *pcVar1;
  *pcVar1 = *pcVar1 << bVar5;
  bVar4 = (uVar7 & 0x1f) != 0;
  pcVar1 = (char *)((ulonglong)CONCAT31(0x687f28,cVar3) + 0x65b2c42e);
  *pcVar1 = (*pcVar1 - bVar8) - (!bVar4 && bVar9 || bVar4 && (char)(cVar2 << bVar5 - 1) < '\0');
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a66a4 FUN_14d7a66a4 body=25 status=ok
// SIG undefined FUN_14d7a66a4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a66a4(longlong param_1)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  byte unaff_BL;
  byte bVar8;
  longlong unaff_RDI;
  bool bVar9;
  
  uVar6 = in(0x286b);
  bVar8 = unaff_BL | (byte)uVar6;
  uVar7 = param_1 - 1;
  if (uVar7 == 0 || bVar8 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar9 = 0x94 < DAT_687f2826;
  cVar3 = DAT_687f2826 + 0x6b;
  pcVar1 = (char *)(param_1 + 0xba51f12 + unaff_RDI);
  bVar5 = (byte)uVar7 & 0x1f;
  cVar2 = *pcVar1;
  *pcVar1 = *pcVar1 << bVar5;
  bVar4 = (uVar7 & 0x1f) != 0;
  pcVar1 = (char *)((ulonglong)CONCAT31(0x687f28,cVar3) + 0x65b2c42e);
  *pcVar1 = (*pcVar1 - bVar8) - (!bVar4 && bVar9 || bVar4 && (char)(cVar2 << bVar5 - 1) < '\0');
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a66c0 FUN_14d7a66c0 body=4 status=ok
// SIG undefined FUN_14d7a66c0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a66c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a66cc FUN_14d7a66cc body=4 status=ok
// SIG undefined FUN_14d7a66cc(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a66cc(undefined8 param_1,byte param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  byte bVar3;
  char cVar5;
  uint in_EAX;
  uint uVar6;
  int iVar7;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  byte bVar4;
  
  uVar6 = in_EAX ^ 0xe;
  LOCK();
  uVar2 = *unaff_RSI;
  *unaff_RSI = (char)((ulonglong)unaff_RBX >> 8);
  UNLOCK();
  iVar7 = uVar6 + 0x1de0a765;
  pbVar1 = (byte *)(CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),CONCAT11(uVar2,(char)unaff_RBX)) +
                   0x3a90aa27);
  bVar3 = *pbVar1;
  bVar4 = *pbVar1;
  *pbVar1 = (bVar4 - param_2) - (0xe21f589a < uVar6);
  cVar5 = (char)iVar7 + -0x6b + (bVar3 < param_2 || (byte)(bVar4 - param_2) < (0xe21f589a < uVar6));
  uRam797bfa9e9587fca8 = CONCAT31((int3)((uint)iVar7 >> 8),cVar5);
  *(byte *)(unaff_RBP + -0x7b) = *(byte *)(unaff_RBP + -0x7b) | (byte)((uint)iVar7 >> 8);
  *(char *)((ulonglong)uRam797bfa9e9587fca8 - 0x47c9e9f9) =
       *(char *)((ulonglong)uRam797bfa9e9587fca8 - 0x47c9e9f9) + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a66d0 FUN_14d7a66d0 body=5 status=ok
// SIG undefined FUN_14d7a66d0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a66d0(undefined8 param_1,byte param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar4;
  uint in_EAX;
  int iVar5;
  longlong unaff_RBX;
  longlong unaff_RBP;
  byte bVar3;
  
  iVar5 = in_EAX + 0x1de0a765;
  pbVar1 = (byte *)(unaff_RBX + 0x3a90aa27);
  bVar2 = *pbVar1;
  bVar3 = *pbVar1;
  *pbVar1 = (bVar3 - param_2) - (0xe21f589a < in_EAX);
  cVar4 = (char)iVar5 + -0x6b + (bVar2 < param_2 || (byte)(bVar3 - param_2) < (0xe21f589a < in_EAX))
  ;
  uRam797bfa9e9587fca8 = CONCAT31((int3)((uint)iVar5 >> 8),cVar4);
  *(byte *)(unaff_RBP + -0x7b) = *(byte *)(unaff_RBP + -0x7b) | (byte)((uint)iVar5 >> 8);
  *(char *)((ulonglong)uRam797bfa9e9587fca8 - 0x47c9e9f9) =
       *(char *)((ulonglong)uRam797bfa9e9587fca8 - 0x47c9e9f9) + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a66d8 FUN_14d7a66d8 body=18 status=ok
// SIG undefined FUN_14d7a66d8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a66d8(void)

{
  uint in_EAX;
  uint unaff_EBP;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = (char)in_EAX;
  *(byte *)((ulonglong)in_EAX - 0x7b) = *(byte *)((ulonglong)in_EAX - 0x7b) | (byte)(unaff_EBP >> 8)
  ;
  uRam797bfa9e9587fca8 = unaff_EBP;
  *(char *)((ulonglong)unaff_EBP - 0x47c9e9f9) =
       *(char *)((ulonglong)unaff_EBP - 0x47c9e9f9) + (char)unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a66f1 FUN_14d7a66f1 body=19 status=ok
// SIG undefined FUN_14d7a66f1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a66f1(void)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  bool in_PF;
  
  if (in_PF) {
    pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + -0x47c9e9f9);
    *pcVar1 = *pcVar1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a66fa FUN_14d7a66fa body=17 status=ok
// SIG undefined FUN_14d7a66fa(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a66fa(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6712 FUN_14d7a6712 body=2 status=ok
// SIG undefined FUN_14d7a6712(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6712(void)

{
  bool in_CF;
  
  if (in_CF) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6717 FUN_14d7a6717 body=5 status=ok
// SIG undefined FUN_14d7a6717(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6717(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6730 FUN_14d7a6730 body=9 status=ok
// SIG undefined FUN_14d7a6730(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a6730(void)

{
  undefined8 in_RAX;
  longlong unaff_RSI;
  
  *(byte *)(unaff_RSI + -0x7c429031) =
       *(byte *)(unaff_RSI + -0x7c429031) & (byte)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a673d FUN_14d7a673d body=12 status=ok
// SIG undefined FUN_14d7a673d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a6761) overlaps instruction at (ram,0x00014d7a675d)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a6772) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a673d(int *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  longlong unaff_RBP;
  uint unaff_ESI;
  
  if ((POPCOUNT(unaff_ESI & 0x1c) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar3 = (byte)_DAT_ac8dd11fa7da8f43 + 10;
  uVar2 = CONCAT31((int3)((uint)_DAT_ac8dd11fa7da8f43 >> 8),cVar3);
  *param_2 = *param_2 >> 1 | (uint)(0xf5 < (byte)_DAT_ac8dd11fa7da8f43) << 0x1f;
  uVar4 = *(int *)((ulonglong)uVar2 + 0x3fdb2732) * 0x6001dab;
  if ((uVar2 & 0xa003df42) != 0) {
    puVar1 = (uint *)((ulonglong)uVar4 - 0x33);
    *puVar1 = *puVar1 & unaff_ESI & 0x1c;
    *(char *)(unaff_RBP + -0x33903a45) = *(char *)(unaff_RBP + -0x33903a45) + (char)uVar4;
    *param_1 = *param_1 - (int)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(0x42,cVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a6749 FUN_14d7a6749 body=4 status=ok
// SIG undefined FUN_14d7a6749(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a6761) overlaps instruction at (ram,0x00014d7a675d)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a6772) */

void FUN_14d7a6749(int *param_1,uint *param_2)

{
  uint *puVar1;
  char cVar2;
  undefined8 in_RAX;
  uint uVar4;
  longlong unaff_RBP;
  uint unaff_ESI;
  bool in_PF;
  ulonglong uVar3;
  
  if (in_PF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar2 = (byte)in_RAX + 10;
  uVar3 = CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2);
  *param_2 = *param_2 >> 1 | (uint)(0xf5 < (byte)in_RAX) << 0x1f;
  uVar4 = *(int *)(uVar3 + 0x3fdb2732) * 0x6001dab;
  if ((uVar3 & 0xa003df42) != 0) {
    puVar1 = (uint *)((ulonglong)uVar4 - 0x33);
    *puVar1 = *puVar1 & unaff_ESI;
    *(char *)(unaff_RBP + -0x33903a45) = *(char *)(unaff_RBP + -0x33903a45) + (char)uVar4;
    *param_1 = *param_1 - (int)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(0x42,cVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a674e FUN_14d7a674e body=39 status=ok
// SIG undefined FUN_14d7a674e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a674e(void)

{
  int iVar1;
  short in_AX;
  byte *unaff_RDI;
  unkbyte10 in_ST0;
  
  iVar1 = CONCAT22(in_AX >> 0xf,CONCAT11((byte)((ushort)in_AX >> 8) ^ *unaff_RDI,(char)in_AX));
  *(unkbyte10 *)unaff_RDI = in_ST0;
  *(int *)unaff_RDI = iVar1;
  if (SBORROW4(iVar1,-0x5607fa00)) {
    in(0xdf);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


