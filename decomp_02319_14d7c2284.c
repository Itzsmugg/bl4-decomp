// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14d7c2284 FUN_14d7c2284 body=8 status=ok
// SIG undefined FUN_14d7c2284(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c22a4) overlaps instruction at (ram,0x00014d7c229f)
    */

undefined4 FUN_14d7c2284(longlong param_1,undefined2 param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined8 in_RAX;
  undefined1 *unaff_RSI;
  char in_CF;
  bool in_SF;
  
  iVar3 = (int)in_RAX;
  if (in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 == 0) {
    cVar2 = ((char)in_RAX + -0x47) - in_CF;
    iVar3 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2);
    register0x00000020 = (BADSPACEBASE *)&stack0xfffffffffffffff8;
    if (cVar2 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(*unaff_RSI,param_2);
  }
  uVar1 = in((short)*(undefined8 *)register0x00000020);
  return CONCAT31((int3)((uint)(iVar3 + 0x5c3cb8cc) >> 8),uVar1);
}



// FUNCTION 14d7c2288 FUN_14d7c2288 body=5 status=ok
// SIG undefined FUN_14d7c2288(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2288(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c229d FUN_14d7c229d body=2 status=ok
// SIG undefined FUN_14d7c229d(void)

undefined1 FUN_14d7c229d(void)

{
  undefined1 uVar1;
  undefined2 unaff_retaddr;
  
  uVar1 = in(unaff_retaddr);
  return uVar1;
}



// FUNCTION 14d7c22aa FUN_14d7c22aa body=12 status=ok
// SIG undefined FUN_14d7c22aa(void)

undefined8 FUN_14d7c22aa(ulonglong param_1,undefined2 param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  char *pcVar3;
  undefined1 *unaff_RDI;
  
  uVar2 = in(param_2);
  *unaff_RDI = uVar2;
  pcVar3 = (char *)(param_1 & 0xffffffff);
  pbVar1 = (byte *)(pcVar3 + 0x69);
  *pbVar1 = *pbVar1 << 1 | (char)*pbVar1 < '\0';
  *pcVar3 = *pcVar3 + (char)((ulonglong)pcVar3 >> 8);
  return CONCAT71((int7)((ulonglong)pcVar3 >> 8),(char)pcVar3 + '@');
}



// FUNCTION 14d7c22b7 FUN_14d7c22b7 body=6 status=ok
// SIG undefined FUN_14d7c22b7(void)

void FUN_14d7c22b7(void)

{
  byte *pbVar1;
  byte in_AL;
  undefined7 in_register_00000001;
  
  pbVar1 = (byte *)(CONCAT71(in_register_00000001,in_AL) + CONCAT71(in_register_00000001,in_AL) * 2)
  ;
  *pbVar1 = *pbVar1 & in_AL;
  return;
}



// FUNCTION 14d7c22d5 FUN_14d7c22d5 body=1 status=ok
// SIG undefined FUN_14d7c22d5(void)

void FUN_14d7c22d5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7c22e7 FUN_14d7c22e7 body=17 status=ok
// SIG undefined FUN_14d7c22e7(void)

/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_14d7c22e7(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  uint unaff_ESI;
  uint *unaff_RDI;
  char cVar5;
  
  uVar1 = *unaff_RDI;
  cVar5 = '\0';
  pcVar2 = (code *)swi(0x45);
  uVar4 = (*pcVar2)();
  if (param_1 == 1 || (char)((char)(param_2 & 0xffffffff) + -0x47) != cVar5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*(undefined1 *)(ulonglong)(unaff_ESI | uVar1),uVar4);
  uVar3 = in((short)(unaff_ESI | uVar1));
  return CONCAT71((int7)((param_2 & 0xffffffff) >> 8),uVar3);
}



// FUNCTION 14d7c22ff FUN_14d7c22ff body=4 status=ok
// SIG undefined FUN_14d7c22ff(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c22ff(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2303 FUN_14d7c2303 body=23 status=ok
// SIG undefined FUN_14d7c2303(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2303(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2327 FUN_14d7c2327 body=13 status=ok
// SIG undefined FUN_14d7c2327(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2327(undefined8 param_1,longlong param_2)

{
  int in_EAX;
  longlong unaff_RDI;
  
  *(byte *)(unaff_RDI + -0x1b) =
       *(byte *)(unaff_RDI + -0x1b) ^ (byte)((uint)(in_EAX + 0x6e2d2b) >> 8);
  *(char *)(param_2 + -0x6ef091a9) =
       *(char *)(param_2 + -0x6ef091a9) - (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2334 FUN_14d7c2334 body=7 status=ok
// SIG undefined FUN_14d7c2334(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2334(undefined8 param_1,longlong param_2)

{
  char in_CF;
  
  *(char *)(param_2 + -0x6ef091a9) =
       (*(char *)(param_2 + -0x6ef091a9) - (char)((ulonglong)param_1 >> 8)) - in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2349 FUN_14d7c2349 body=16 status=ok
// SIG undefined FUN_14d7c2349(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c2349(void)

{
  undefined4 in_EAX;
  
  _DAT_4ad2a9ef0529b89d = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2366 FUN_14d7c2366 body=27 status=ok
// SIG undefined FUN_14d7c2366(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2366(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c23a5 FUN_14d7c23a5 body=14 status=ok
// SIG undefined FUN_14d7c23a5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c23a5(void)

{
  int in_EAX;
  undefined1 *unaff_RDI;
  
  if (in_EAX != 0x49a9b1cd) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c23b5 FUN_14d7c23b5 body=1 status=ok
// SIG undefined FUN_14d7c23b5(void)

void FUN_14d7c23b5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7c23c2 FUN_14d7c23c2 body=9 status=ok
// SIG undefined FUN_14d7c23c2(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c23c3) overlaps instruction at (ram,0x00014d7c23c2)
    */

void FUN_14d7c23c2(longlong param_1,int param_2)

{
  undefined1 *puVar1;
  int in_EAX;
  int *unaff_RBX;
  ulonglong uVar2;
  int unaff_EBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  uVar2 = (ulonglong)(uint)((int)&stack0x00000000 - in_EAX);
  if (param_2 == 0 && *unaff_RBX == 0) {
    *(ulonglong *)(uVar2 - 8) = uVar2;
    if (param_1 != 1 && *unaff_RBX != unaff_EBP) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(int **)(uVar2 - 0x10) = unaff_RBX;
    puVar1 = (undefined1 *)(unaff_RDI + -0x5a + unaff_RSI * 8);
    *puVar1 = *puVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c23d0 FUN_14d7c23d0 body=5 status=ok
// SIG undefined FUN_14d7c23d0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c23d0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c23d8 FUN_14d7c23d8 body=2 status=ok
// SIG undefined FUN_14d7c23d8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c23d8(undefined8 param_1,undefined2 param_2)

{
  undefined1 *unaff_ESI;
  
  out(*unaff_ESI,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c23e9 FUN_14d7c23e9 body=1 status=ok
// SIG undefined FUN_14d7c23e9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c23e9(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c241f FUN_14d7c241f body=1 status=ok
// SIG undefined FUN_14d7c241f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c241f(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2423 FUN_14d7c2423 body=12 status=ok
// SIG undefined FUN_14d7c2423(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2423(undefined8 param_1,char *param_2)

{
  char in_AL;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte in_CF;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       (*(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       - CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) - (uint)in_CF;
  out((short)param_2,in_AL * *param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c243c FUN_14d7c243c body=27 status=ok
// SIG undefined FUN_14d7c243c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c243c(undefined8 param_1,longlong param_2)

{
  byte *in_RAX;
  longlong unaff_RSI;
  
  *in_RAX = *in_RAX ^ (byte)in_RAX;
  *(int *)(unaff_RSI + 0xda45109) = *(int *)(unaff_RSI + 0xda45109) + 0x120be7d7;
  in_RAX[0x777010] = in_RAX[0x777010] + (char)param_1;
  *(char *)(param_2 + -0x10) = *(char *)(param_2 + -0x10) + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2458 FUN_14d7c2458 body=2 status=ok
// SIG undefined FUN_14d7c2458(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2458(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c245c FUN_14d7c245c body=9 status=ok
// SIG undefined FUN_14d7c245c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c245c(longlong param_1)

{
  uint uVar1;
  uint in_EAX;
  longlong unaff_RDI;
  
  *(char *)(unaff_RDI + 0x612da6dc) = (char)in_EAX;
  uVar1 = CONCAT31((int3)((in_EAX & 0x8e92d930) >> 8),
                   (char)(in_EAX & 0x8e92d930) - *(char *)(param_1 + -0x3c));
  *(int *)(ulonglong)uVar1 = *(int *)(ulonglong)uVar1 + uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2468 FUN_14d7c2468 body=3 status=ok
// SIG undefined FUN_14d7c2468(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2468(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2471 FUN_14d7c2471 body=4 status=ok
// SIG undefined FUN_14d7c2471(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2471(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2475 FUN_14d7c2475 body=1 status=ok
// SIG undefined FUN_14d7c2475(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2475(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2479 FUN_14d7c2479 body=3 status=ok
// SIG undefined FUN_14d7c2479(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c23fc) overlaps instruction at (ram,0x00014d7c23fb)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c2479(ulonglong param_1,ulonglong param_2)

{
  int iVar1;
  byte bVar2;
  code *pcVar3;
  char *pcVar4;
  uint uVar5;
  int *unaff_RBX;
  undefined8 *puVar6;
  longlong unaff_RBP;
  int *piVar7;
  int *unaff_RSI;
  int *unaff_RDI;
  bool in_CF;
  bool in_ZF;
  char *unaff_retaddr;
  byte *in_stack_00000008;
  
  puVar6 = (undefined8 *)&stack0x00000008;
  if (!in_CF && !in_ZF) {
    in(0xa2);
    *(int *)(param_2 + 0x4b3f53e9) = *(int *)(param_2 + 0x4b3f53e9) - (int)unaff_RDI;
    DAT_1029e590e = DAT_1029e590e & ((byte)((ulonglong)unaff_retaddr >> 8) ^ 0x13);
    *in_stack_00000008 = *in_stack_00000008 ^ (byte)((ulonglong)in_stack_00000008 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while( true ) {
    while( true ) {
      piVar7 = unaff_RSI;
      uVar5 = (int)param_2 + _DAT_1a69df603;
      param_2 = (ulonglong)uVar5;
      puVar6 = (undefined8 *)*puVar6;
      unaff_RSI = piVar7 + 1;
      if (-1 < *piVar7 - *unaff_RDI) break;
      *unaff_retaddr = *unaff_retaddr + (char)unaff_retaddr;
      unaff_RDI = (int *)*puVar6;
      iVar1 = (int)puVar6;
      puVar6 = puVar6 + 1;
      *(int *)((longlong)piVar7 + 0x7ef02895) = iVar1 + 8;
      LOCK();
      iVar1 = *unaff_RBX;
      *unaff_RBX = (int)unaff_retaddr;
      UNLOCK();
      unaff_retaddr = (char *)(ulonglong)(iVar1 + 0x5921d200);
    }
    bVar2 = unaff_retaddr[-0x24];
    *unaff_retaddr = *unaff_retaddr + (char)unaff_retaddr;
    *(int *)(unaff_RBP + -0x3eab9fc3) = *(int *)(unaff_RBP + -0x3eab9fc3) + -1;
    if (uVar5 + (int)unaff_retaddr != 0) break;
    pcVar4 = (char *)(CONCAT62((int6)(param_1 >> 0x10),
                               CONCAT11((byte)(param_1 >> 8) | bVar2,(char)param_1)) & 0xffffffff);
    param_1 = (ulonglong)unaff_retaddr & 0xffffffff;
    param_2 = 0;
    unaff_retaddr = pcVar4;
    unaff_RDI = unaff_RDI + 1;
    if ((char)pcVar4 < '\x01') {
      *(char *)(piVar7 + -0x12) = (char)piVar7[-0x12];
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



// FUNCTION 14d7c2482 FUN_14d7c2482 body=25 status=ok
// SIG undefined FUN_14d7c2482(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2482(undefined8 param_1,longlong param_2)

{
  undefined8 in_RAX;
  int unaff_EDI;
  byte *unaff_retaddr;
  
  in(0xa2);
  *(int *)(param_2 + 0x4b3f53e9) = *(int *)(param_2 + 0x4b3f53e9) - unaff_EDI;
  DAT_1029e590e = DAT_1029e590e & (byte)((ulonglong)in_RAX >> 8);
  *unaff_retaddr = *unaff_retaddr ^ (byte)((ulonglong)unaff_retaddr >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c249e FUN_14d7c249e body=15 status=ok
// SIG undefined FUN_14d7c249e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c249e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c24ae FUN_14d7c24ae body=10 status=ok
// SIG undefined FUN_14d7c24ae(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c24ae(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  longlong in_RAX;
  uint unaff_EDI;
  longlong in_FS_OFFSET;
  
  *(uint *)(in_RAX + 0x2a) = *(uint *)(in_RAX + 0x2a) ^ unaff_EDI;
  pcVar1 = (char *)(in_FS_OFFSET + param_1 + 0x1e9bd632);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c24d0 FUN_14d7c24d0 body=18 status=ok
// SIG undefined FUN_14d7c24d0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c24d0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  longlong unaff_RSI;
  char in_SF;
  char in_OF;
  undefined8 in_MM6;
  undefined8 uStack_10;
  
  if (in_OF != in_SF) {
    puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
    cVar1 = '\a';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar2 = puVar2 + -1;
      *puVar2 = *unaff_RBP;
      cVar1 = cVar1 + -1;
    } while ('\0' < cVar1);
    paddsw(in_MM6,*(undefined8 *)(param_2 + unaff_RSI));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c24fd FUN_14d7c24fd body=6 status=ok
// SIG undefined FUN_14d7c24fd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c24fd(longlong param_1,undefined2 param_2)

{
  undefined4 uVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 in_EAX;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined1 *unaff_RDI;
  
                    /* WARNING: Read-only address (ram,0x00014078c84c) is written */
  uRam000000014078c84c = (uint)unaff_RSI | 0x288e8d48;
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x28dd1f24);
  *(undefined4 *)(param_1 + 0x28dd1f24) = in_EAX;
  UNLOCK();
  pbVar2 = unaff_RDI + 1;
  *unaff_RDI = (char)uVar1;
  bVar3 = func_0xdf846e53();
  *(char *)(unaff_RBP + 0x15) = *(char *)(unaff_RBP + 0x15) + '\x01';
  out(0xf2,(int)param_1);
  if (-0x73a5a1bb < (int)param_1) {
    *pbVar2 = *pbVar2 | bVar3;
    in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  DAT_c602231961003eb0 = (char)param_1 + -0x46;
  *(undefined4 *)pbVar2 = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2505 FUN_14d7c2505 body=2 status=ok
// SIG undefined FUN_14d7c2505(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2505(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2509 FUN_14d7c2509 body=1 status=ok
// SIG undefined FUN_14d7c2509(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2509(int param_1,undefined2 param_2)

{
  byte *pbVar1;
  undefined1 in_AL;
  byte bVar2;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  pbVar1 = unaff_RDI + 1;
  *unaff_RDI = in_AL;
  bVar2 = func_0xdf846e53();
  *(char *)(unaff_RBP + 0x15) = *(char *)(unaff_RBP + 0x15) + '\x01';
  out(0xf2,param_1);
  if (-0x73a5a1bb < param_1) {
    *pbVar1 = *pbVar1 | bVar2;
    in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  DAT_c602231961003eb0 = (char)param_1 + -0x46;
  *(undefined4 *)pbVar1 = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c250d FUN_14d7c250d body=36 status=ok
// SIG undefined FUN_14d7c250d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c250d(uint *param_1,longlong param_2)

{
  uint uVar1;
  byte in_AL;
  int iVar2;
  int iVar3;
  undefined4 *unaff_RSI;
  byte *unaff_RDI;
  
  *(byte *)(param_2 + 0x231565fe) = *(byte *)(param_2 + 0x231565fe) | (byte)param_2;
  uVar1 = *param_1;
  *param_1 = *param_1 - (uint)unaff_RDI;
  iVar2 = (int)param_1;
  out(0xf2,iVar2);
  uVar1 = (uint)(uVar1 < (uint)unaff_RDI);
  iVar3 = iVar2 + 0x73a5a1ba + uVar1;
  if ((SCARRY4(iVar2,0x73a5a1ba) != SCARRY4(iVar2 + 0x73a5a1ba,uVar1)) != iVar3 < 0) {
    DAT_c602231961003eb0 = (undefined1)iVar3;
    *(undefined4 *)unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_RDI | in_AL;
  in((short)param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2551 FUN_14d7c2551 body=13 status=ok
// SIG undefined FUN_14d7c2551(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2551(void)

{
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) | unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c257c FUN_14d7c257c body=3 status=ok
// SIG undefined FUN_14d7c257c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c257c(longlong param_1,uint param_2)

{
  code *pcVar1;
  ulonglong in_RAX;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  char in_CF;
  char in_ZF;
  
  param_1 = param_1 + -1;
  if (param_1 == 0 || in_ZF != '\0') {
    pcVar1 = (code *)swi(1);
    (*pcVar1)(CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                       CONCAT11((char)((ulonglong)param_1 >> 8) + (char)(param_2 >> 8) + in_CF,
                                (char)param_1)),
              ((ulonglong)param_2 << 0x20 | in_RAX & 0xffffffff) %
              (ulonglong)*(uint *)(in_RAX + 0x704100d4));
    return;
  }
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2581 FUN_14d7c2581 body=2 status=ok
// SIG undefined FUN_14d7c2581(void)

void FUN_14d7c2581(undefined4 param_1,uint param_2)

{
  code *pcVar1;
  ulonglong in_RAX;
  char in_CF;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)(CONCAT11((char)((uint)param_1 >> 8) + (char)(param_2 >> 8) + in_CF,(char)param_1),
            ((ulonglong)param_2 << 0x20 | in_RAX & 0xffffffff) %
            (ulonglong)*(uint *)(in_RAX + 0x704100d4));
  return;
}



// FUNCTION 14d7c2585 FUN_14d7c2585 body=4 status=ok
// SIG undefined FUN_14d7c2585(void)

void FUN_14d7c2585(longlong param_1)

{
  code *pcVar1;
  
  *(char *)(param_1 + 0x70) = *(char *)(param_1 + 0x70) + -0x2c;
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7c258a FUN_14d7c258a body=4 status=ok
// SIG undefined FUN_14d7c258a(void)

void FUN_14d7c258a(char param_1,undefined8 param_2,longlong param_3,byte param_4)

{
  code *pcVar1;
  char *in_RAX;
  bool in_OF;
  undefined8 *unaff_retaddr;
  longlong in_stack_00000050;
  longlong in_stack_00000060;
  longlong in_stack_00000070;
  longlong in_stack_00000080;
  longlong in_stack_00000090;
  longlong in_stack_000000a0;
  undefined8 *in_stack_000000c0;
  undefined8 *in_stack_000000c8;
  ulonglong in_stack_000000d0;
  
  if (!in_OF) {
    pcVar1 = (code *)swi(1);
    (*pcVar1)();
    return;
  }
  *in_RAX = *in_RAX + (char)in_RAX;
  in_RAX[-0x77] = in_RAX[-0x77] + param_1;
  *(byte *)(param_3 + -0x73) = *(byte *)(param_3 + -0x73) | param_4;
  FUN_1494d8b8c();
  *unaff_retaddr = &DAT_14cc27360;
  unaff_retaddr[1] = &stack0x00000090;
  FUN_1494d8b8c();
  in_stack_000000c0 = &DAT_14cc27368;
  in_stack_000000c8 = &stack0x00000080;
  FUN_1494d8b8c();
  in_stack_000000c0 = &DAT_14cc27370;
  in_stack_000000c8 = &stack0x00000070;
  FUN_1494d8b8c();
  in_stack_000000c0 = &DAT_14cc27378;
  in_stack_000000c8 = &stack0x00000060;
  FUN_1494d8b8c();
  in_stack_000000c0 = &DAT_14cc27380;
  in_stack_000000c8 = &stack0x00000050;
  FUN_1494d8b8c();
  if (in_stack_00000050 != 0) {
    FUN_1400020a8();
  }
  if (in_stack_00000060 != 0) {
    FUN_1400020a8();
  }
  if (in_stack_00000070 != 0) {
    FUN_1400020a8();
  }
  if (in_stack_00000080 != 0) {
    FUN_1400020a8();
  }
  if (in_stack_00000090 != 0) {
    FUN_1400020a8();
  }
  if (in_stack_000000a0 != 0) {
    FUN_1400020a8();
  }
  if ((in_stack_000000d0 ^ (ulonglong)&stack0x00000000) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14d7c25b7 FUN_14d7c25b7 body=29 status=ok
// SIG undefined FUN_14d7c25b7(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c25b7(undefined8 param_1,char *param_2)

{
  uint *puVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  uint uVar6;
  undefined1 uVar7;
  int *piVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined2 uVar11;
  uint uVar12;
  uint in_EAX;
  uint uVar13;
  char *unaff_RBX;
  ulonglong uVar14;
  undefined1 *puVar15;
  undefined1 *unaff_RSI;
  undefined4 *unaff_RDI;
  uint uVar5;
  
  piVar8 = unaff_RDI + 1;
  uVar11 = SUB82(param_2,0);
  uVar9 = in(uVar11);
  *unaff_RDI = uVar9;
  *unaff_RBX = *unaff_RBX - (char)param_2;
  unaff_RBX[(longlong)unaff_RSI * 4 + -0x1794d66c] =
       unaff_RBX[(longlong)unaff_RSI * 4 + -0x1794d66c] + (char)unaff_RBX;
  uVar13 = *(int *)(param_2 + 0x31) * -0x433d7d09;
  out(uVar11,(char)in_EAX);
  uVar14 = (ulonglong)in_EAX;
  pcVar2 = unaff_RBX + uVar13;
  *pcVar2 = *pcVar2 + (char)(uVar13 >> 8);
  cVar3 = *pcVar2;
  puVar15 = (undefined1 *)(uVar14 - 8);
  *(ulonglong *)(uVar14 - 8) = (ulonglong)uVar13;
  if ((POPCOUNT(cVar3) & 1U) == 0) {
    LOCK();
    uVar13 = *(uint *)(param_2 + 0x7a);
    *(uint *)(param_2 + 0x7a) = (uint)unaff_RBX;
    UNLOCK();
    uVar12 = CONCAT31(0x8e5250,*unaff_RSI) & 0x62e6e3ff;
    lVar10 = *(longlong *)(uVar14 - 8);
    puVar1 = (uint *)(lVar10 + -0x4a);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 + in_EAX;
    uVar5 = *puVar1;
    LOCK();
    uVar6 = *(uint *)((ulonglong)uVar12 + 3);
    *(uint *)((ulonglong)uVar12 + 3) = in_EAX;
    puVar15 = (undefined1 *)(ulonglong)uVar6;
    UNLOCK();
    if (CARRY4(uVar4,in_EAX) || uVar5 == 0) {
      uVar13 = (uint)(uVar13 < 0x61aa96);
      uVar4 = uVar12 - *piVar8;
      if (uVar4 == uVar13 ||
          (SBORROW4(uVar12,*piVar8) != SBORROW4(uVar4,uVar13)) != (int)(uVar4 - uVar13) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(int *)(ulonglong)uRam9313008c56da223c = *(int *)(ulonglong)uRam9313008c56da223c + 1;
      *param_2 = *param_2 + (char)((ulonglong)lVar10 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar7 = in(uVar11);
    *(undefined1 *)piVar8 = uVar7;
  }
  *(undefined1 **)(puVar15 + 8) = puVar15 + 0x10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c25d5 FUN_14d7c25d5 body=10 status=ok
// SIG undefined FUN_14d7c25d5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c25d5(longlong param_1,char *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar5;
  undefined1 uVar6;
  uint uVar7;
  undefined8 in_RAX;
  uint unaff_EBX;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 *unaff_RSI;
  int *unaff_RDI;
  undefined1 auStack_8 [8];
  uint uVar4;
  
  puVar9 = auStack_8;
  if ((POPCOUNT((char)in_RAX + -0x19) & 1U) == 0) {
    LOCK();
    uVar2 = *(uint *)(param_2 + 0x7a);
    *(uint *)(param_2 + 0x7a) = unaff_EBX;
    UNLOCK();
    uVar7 = CONCAT31((int3)((ulonglong)in_RAX >> 8),*unaff_RSI) & 0x62e6e3ff;
    puVar1 = (uint *)(param_1 + -0x4a);
    uVar3 = *puVar1;
    uVar8 = (uint)&stack0x00000000;
    *puVar1 = *puVar1 + uVar8;
    uVar4 = *puVar1;
    LOCK();
    uVar5 = *(uint *)((ulonglong)uVar7 + 3);
    *(uint *)((ulonglong)uVar7 + 3) = uVar8;
    puVar9 = (undefined1 *)CONCAT44((int)((ulonglong)&stack0x00000000 >> 0x20),uVar5);
    UNLOCK();
    if (CARRY4(uVar3,uVar8) || uVar4 == 0) {
      uVar2 = (uint)(uVar2 < 0x61aa96);
      uVar3 = uVar7 - *unaff_RDI;
      if (uVar3 == uVar2 ||
          (SBORROW4(uVar7,*unaff_RDI) != SBORROW4(uVar3,uVar2)) != (int)(uVar3 - uVar2) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(int *)(ulonglong)uRam9313008c56da223c = *(int *)(ulonglong)uRam9313008c56da223c + 1;
      *param_2 = *param_2 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar6 = in((short)param_2);
    *(undefined1 *)unaff_RDI = uVar6;
  }
  *(undefined1 **)(puVar9 + 8) = puVar9 + 0x10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c25e1 FUN_14d7c25e1 body=20 status=ok
// SIG undefined FUN_14d7c25e1(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c2595) overlaps instruction at (ram,0x00014d7c2590)
    */

void FUN_14d7c25e1(ulonglong param_1,char *param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar6;
  undefined1 uVar7;
  bool bVar8;
  byte bVar9;
  undefined2 *in_RAX;
  int iVar10;
  longlong unaff_RBX;
  uint uVar11;
  longlong lVar12;
  int *unaff_RDI;
  undefined2 in_ES;
  byte in_CF;
  bool in_PF;
  longlong unaff_retaddr;
  undefined1 auStackX_8 [32];
  uint uVar4;
  uint uVar5;
  
  if (in_PF) {
    piVar2 = (int *)(param_1 + 0x56da223c);
    bVar9 = (byte)param_1 & 0x1f;
    iVar10 = *piVar2;
    *piVar2 = *piVar2 << bVar9;
    bVar8 = (param_1 & 0x1f) != 0;
    *in_RAX = in_ES;
    iVar10 = (int)param_2 + *(int *)(unaff_RBX + 0x40ff) +
             (uint)(byte)(!bVar8 & in_CF | (bVar8 && iVar10 << bVar9 - 1 < 0));
    *(char *)unaff_RDI = (char)in_RAX;
    cRam000000005fb231b5 =
         (cRam000000005fb231b5 - (byte)param_1) - ((byte)iVar10 < (byte)((uint)iVar10 >> 8));
    if ((POPCOUNT(cRam000000005fb231b5) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    in(0x729c);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar1 = (uint *)(unaff_retaddr + -0x4a);
  uVar3 = *puVar1;
  uVar11 = (uint)auStackX_8;
  uVar4 = *puVar1;
  *puVar1 = uVar4 + uVar11 + (uint)in_CF;
  uVar5 = *puVar1;
  LOCK();
  uVar6 = *(uint *)((longlong)in_RAX + 3);
  *(uint *)((longlong)in_RAX + 3) = uVar11;
  lVar12 = CONCAT44((int)((ulonglong)auStackX_8 >> 0x20),uVar6);
  UNLOCK();
  if ((CARRY4(uVar3,uVar11) || CARRY4(uVar4 + uVar11,(uint)in_CF)) || uVar5 == 0) {
    uVar3 = (uint)((uint)unaff_RBX < 0x61aa96);
    uVar4 = (int)in_RAX - *unaff_RDI;
    if (uVar4 == uVar3 ||
        (SBORROW4((int)in_RAX,*unaff_RDI) != SBORROW4(uVar4,uVar3)) != (int)(uVar4 - uVar3) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(int *)(ulonglong)uRam9313008c56da223c = *(int *)(ulonglong)uRam9313008c56da223c + 1;
    *param_2 = *param_2 + (char)((ulonglong)unaff_retaddr >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar7 = in((short)param_2);
  *(undefined1 *)unaff_RDI = uVar7;
  *(longlong *)(lVar12 + 8) = lVar12 + 0x10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c25ff FUN_14d7c25ff body=6 status=ok
// SIG undefined FUN_14d7c25ff(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c25ff(undefined8 param_1,char *param_2)

{
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (in_ZF || in_OF != in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(ulonglong)uRam9313008c56da223c = *(int *)(ulonglong)uRam9313008c56da223c + 1;
  *param_2 = *param_2 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c260c FUN_14d7c260c body=2 status=ok
// SIG undefined FUN_14d7c260c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c260c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2611 FUN_14d7c2611 body=4 status=ok
// SIG undefined FUN_14d7c2611(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2611(void)

{
  longlong unaff_RSI;
  byte in_CF;
  
  *(int *)(unaff_RSI + -0x3a) = *(int *)(unaff_RSI + -0x3a) + 0x14 + (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c261a FUN_14d7c261a body=4 status=ok
// SIG undefined FUN_14d7c261a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c261a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2633 FUN_14d7c2633 body=5 status=ok
// SIG undefined FUN_14d7c2633(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2633(byte param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  bool bVar3;
  char cVar4;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *unaff_RDI;
  byte in_CF;
  
  cVar4 = cRam00000001c2073842;
  cRam00000001c2073842 = cRam00000001c2073842 << (param_1 & 0x1f);
  bVar3 = (param_1 & 0x1f) != 0;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x53);
  *pcVar1 = *pcVar1 + param_1 +
            (!bVar3 & in_CF | (bVar3 && (char)(cVar4 << (param_1 & 0x1f) - 1) < '\0'));
  uVar2 = in(param_2);
  *unaff_RDI = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c263b FUN_14d7c263b body=26 status=ok
// SIG undefined FUN_14d7c263b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c263b(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined1 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2658 FUN_14d7c2658 body=2 status=ok
// SIG undefined FUN_14d7c2658(void)

/* WARNING: Instruction at (ram,0x00014d7c265f) overlaps instruction at (ram,0x00014d7c265a)
    */
/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2658(void)

{
  bool in_CF;
  
  if (!in_CF) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c265c FUN_14d7c265c body=6 status=ok
// SIG undefined FUN_14d7c265c(void)

void FUN_14d7c265c(void)

{
  return;
}



// FUNCTION 14d7c2676 FUN_14d7c2676 body=6 status=ok
// SIG undefined FUN_14d7c2676(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c265f) overlaps instruction at (ram,0x00014d7c265a)
    */

ulonglong FUN_14d7c2676(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  
  if ((POPCOUNT((byte)in_RAX ^ 0xa8) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = (longlong)*(int *)(in_RAX ^ 0xa8) * 0x6bd54ad9;
  if ((longlong)(int)uVar1 == uVar1) {
    return uVar1 & 0xffffffff;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2682 FUN_14d7c2682 body=23 status=ok
// SIG undefined FUN_14d7c2682(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2682(longlong param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  ulonglong in_RAX;
  byte bVar3;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  
  bVar3 = (byte)((ushort)param_2 >> 8);
  *(byte *)(in_RAX - 0x257558d) = *(byte *)(in_RAX - 0x257558d) ^ bVar3;
  if (param_1 == 1 || (in_RAX & 0xe8) != 0) {
    pcVar1 = (char *)(unaff_RSI + 0x37 + unaff_RBP * 4);
    *pcVar1 = *pcVar1 - (char)in_RAX;
    pcVar1 = (char *)((CONCAT71((int7)((unaff_RBX & 0xffffffff) >> 8),
                                (char)(unaff_RBX & 0xffffffff) + '\x12') | 0xe) + 0x5b);
    *pcVar1 = *pcVar1 + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = in(param_2);
  *unaff_RDI = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c269f FUN_14d7c269f body=8 status=ok
// SIG undefined FUN_14d7c269f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c269f(void)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  undefined8 uStack_10;
  
  puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\v';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c26ab FUN_14d7c26ab body=14 status=ok
// SIG undefined FUN_14d7c26ab(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c264f) overlaps instruction at (ram,0x00014d7c264c)
    */

undefined8 FUN_14d7c26ab(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int in_EAX;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined8 unaff_RDI;
  bool bVar3;
  
  out(*unaff_RSI,(short)param_2);
  bVar3 = in_EAX != *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  LOCK();
  uVar1 = *(undefined4 *)(param_2 + -0x47);
  *(undefined4 *)(param_2 + -0x47) = (int)unaff_RDI;
  UNLOCK();
  if (!bVar3) {
    return *(undefined8 *)(unaff_RBP + 8);
  }
  if (bVar3) {
    uVar2 = in((short)param_2);
    *(undefined1 *)CONCAT44((int)((ulonglong)unaff_RDI >> 0x20),uVar1) = uVar2;
    *(longlong *)(unaff_RBP + 0x18) = unaff_RBP + 0x20;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c26bb FUN_14d7c26bb body=2 status=ok
// SIG undefined FUN_14d7c26bb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c26bb(short *param_1)

{
  float10 in_ST0;
  
  *param_1 = (short)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c26e1 FUN_14d7c26e1 body=15 status=ok
// SIG undefined FUN_14d7c26e1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c26e1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c26fa FUN_14d7c26fa body=3 status=ok
// SIG undefined FUN_14d7c26fa(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c26fa(undefined8 param_1,undefined2 param_2)

{
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2706 FUN_14d7c2706 body=1 status=ok
// SIG undefined FUN_14d7c2706(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2706(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2723 FUN_14d7c2723 body=7 status=ok
// SIG undefined FUN_14d7c2723(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2723(void)

{
  undefined4 *unaff_RDI;
  
  *unaff_RDI = 0x6ab6e04a;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c272c FUN_14d7c272c body=4 status=ok
// SIG undefined FUN_14d7c272c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c272c(undefined8 param_1)

{
  char cVar1;
  undefined1 *puVar2;
  char *in_RAX;
  int *piVar3;
  byte bVar4;
  undefined1 *puVar5;
  longlong unaff_RSI;
  char in_AF;
  
  bVar4 = (byte)((ulonglong)param_1 >> 8);
  puVar2 = (undefined1 *)register0x00000020;
  do {
    puVar5 = puVar2;
    cVar1 = *in_RAX;
    *in_RAX = *in_RAX + '\x7f';
    *(undefined8 *)(puVar5 + -8) = 0x18;
    puVar2 = puVar5 + -8;
  } while (!SCARRY1(cVar1,'\x7f'));
  cVar1 = bVar4 - *(byte *)(unaff_RSI + -0x4c);
  piVar3 = (int *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                           CONCAT11((cVar1 < '\0') << 7 | (cVar1 == '\0') << 6 | in_AF << 4 |
                                    ((POPCOUNT(cVar1) & 1U) == 0) << 2 | 2U |
                                    bVar4 < *(byte *)(unaff_RSI + -0x4c),(char)in_RAX));
  *(ulonglong *)(puVar5 + -0x10) = (ulonglong)(uint)((int)piVar3 - *piVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c274b FUN_14d7c274b body=3 status=ok
// SIG undefined FUN_14d7c274b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c2790) overlaps instruction at (ram,0x00014d7c278e)
    */

void FUN_14d7c274b(undefined8 param_1,byte *param_2,longlong param_3,longlong param_4)

{
  byte *pbVar1;
  undefined1 uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  code *pcVar6;
  char *pcVar7;
  undefined8 in_RAX;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined7 uVar11;
  char cVar12;
  byte bVar16;
  longlong lVar14;
  longlong lVar15;
  short sVar17;
  ulonglong unaff_RBX;
  ulonglong uVar18;
  undefined1 *puVar19;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  uint *unaff_RDI;
  uint *puVar20;
  uint *puVar21;
  undefined2 in_CS;
  bool bVar22;
  byte in_AF;
  bool bVar23;
  bool bVar24;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  byte bVar13;
  
  lVar14 = CONCAT71((int7)((ulonglong)param_1 >> 8),(byte)param_1 & *param_2);
  uVar8 = CONCAT71((int7)(CONCAT44((int)((ulonglong)in_RAX >> 0x20),*unaff_RSI) >> 8),199);
  puVar20 = unaff_RDI + 1;
  bVar22 = (uint)unaff_RSI[1] < *unaff_RDI;
  uVar5 = unaff_RSI[1] - *unaff_RDI;
  bVar24 = (int)uVar5 < 0;
  bVar23 = uVar5 == 0;
  bVar16 = POPCOUNT(uVar5 & 0xff);
  do {
    pcVar9 = (char *)CONCAT62((int6)((ulonglong)uVar8 >> 0x10),
                              CONCAT11(bVar24 << 7 | bVar23 << 6 | in_AF << 4 |
                                       ((bVar16 & 1) == 0) << 2 | 2 | bVar22,(char)uVar8));
    *(undefined8 *)((longlong)register0x00000020 + -8) = 0x5f40c5cc;
    if (!bVar22) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar14 = lVar14 + -1;
    if (lVar14 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar7 = *(char **)((longlong)register0x00000020 + -8);
    pcVar10 = (char *)(CONCAT62((int6)(unaff_RBX >> 0x10),
                                CONCAT11((char)(unaff_RBX >> 8) - *pcVar9,(char)unaff_RBX)) &
                      0xffffffff);
    uVar18 = (ulonglong)pcVar9 & 0xffffffff;
    *pcVar10 = *pcVar10 + (char)pcVar10;
    sVar17 = (short)param_2;
    lVar15 = lVar14;
    puVar19 = (undefined1 *)register0x00000020;
    puVar21 = puVar20;
    if ((POPCOUNT(*pcVar10) & 1U) == 0) {
      pbVar1 = (byte *)(pcVar10 + param_4 + -0x5823ab11);
      bVar16 = *pbVar1;
      bVar13 = (byte)lVar14;
      bVar4 = *pbVar1;
      cVar12 = bVar13 - *pbVar1;
      lVar15 = CONCAT71((int7)((ulonglong)lVar14 >> 8),cVar12);
      if (cVar12 < '\0') {
        *(int *)(param_2 + 0x3e) = *(int *)(param_2 + 0x3e) << 1;
        out(sVar17,(char)pcVar10);
        return;
      }
      puVar21 = (uint *)((longlong)puVar20 + 1);
      cVar3 = in(sVar17);
      *(char *)puVar20 = cVar3;
      unaff_RBP = 0x8649aeac;
      puVar19 = (undefined1 *)((longlong)register0x00000020 + -8);
      *(ulonglong *)((longlong)register0x00000020 + -8) =
           (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW1(bVar13,bVar4) * 0x800 |
           (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
           (ulonglong)(cVar12 == '\0') * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
           (ulonglong)((POPCOUNT(cVar12) & 1U) == 0) * 4 | (ulonglong)(bVar13 < bVar16) |
           (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
           (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
      param_2[-0x5f7d1e2b] = param_2[-0x5f7d1e2b] + (char)((ulonglong)lVar14 >> 8);
      cVar12 = in(sVar17);
      if ((unaff_RBX & 0x9b) != 0) {
        out(sVar17 + (short)*(undefined4 *)(lVar15 + 0x35155fee),cVar12);
        *(short *)((longlong)register0x00000020 + -10) = (short)puVar21;
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      pcVar10 = (char *)CONCAT71((int7)((ulonglong)pcVar10 >> 8),cVar12 + param_2[0x2a]);
    }
    *(undefined2 *)pcVar10 = in_CS;
    out(sVar17,(int)pcVar10);
    register0x00000020 = (BADSPACEBASE *)(puVar19 + -8);
    *(undefined1 **)(puVar19 + -8) = puVar19;
    cVar12 = *pcVar7;
    uVar11 = (undefined7)((ulonglong)pcVar10 >> 8);
    uVar5 = *puVar21;
    LOCK();
    puVar19 = (undefined1 *)(param_3 + -0x7d1e2a56 + CONCAT71(uVar11,cVar12));
    uVar2 = *puVar19;
    *puVar19 = (char)uVar18;
    unaff_RBX = CONCAT71((int7)(uVar18 >> 8),uVar2);
    UNLOCK();
    uVar8 = CONCAT71(uVar11,cRam0312dce374ec9b24);
    puVar20 = (uint *)((longlong)puVar21 + 2);
    *(char *)((longlong)puVar21 + 1) = cRam0312dce374ec9b24;
    lVar15 = lVar15 + -1;
    if (lVar15 == 0 || cVar12 == (char)uVar5) {
      return;
    }
    *param_2 = *param_2 + (char)((ulonglong)pcVar10 >> 8);
    bVar22 = false;
    bVar16 = (byte)((ulonglong)lVar15 >> 8) | *(byte *)(unaff_RBP + -0x58384fbe);
    lVar14 = CONCAT62((int6)((ulonglong)lVar15 >> 0x10),CONCAT11(bVar16,(char)lVar15));
    bVar24 = (char)bVar16 < '\0';
    bVar23 = bVar16 == 0;
    bVar16 = POPCOUNT(bVar16);
  } while( true );
}



// FUNCTION 14d7c274f FUN_14d7c274f body=4 status=ok
// SIG undefined FUN_14d7c274f(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c2790) overlaps instruction at (ram,0x00014d7c278e)
    */

void FUN_14d7c274f(longlong param_1,char *param_2,longlong param_3,longlong param_4)

{
  byte *pbVar1;
  undefined1 uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  code *pcVar6;
  char *pcVar7;
  undefined8 in_RAX;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined7 uVar11;
  char cVar12;
  byte bVar15;
  longlong lVar14;
  short sVar16;
  ulonglong unaff_RBX;
  ulonglong uVar17;
  undefined1 *puVar18;
  longlong unaff_RBP;
  uint *unaff_RSI;
  uint *unaff_RDI;
  uint *puVar19;
  uint *puVar20;
  undefined2 in_CS;
  bool bVar21;
  byte in_AF;
  bool bVar22;
  bool bVar23;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  byte bVar13;
  
  uVar8 = CONCAT71((int7)((ulonglong)in_RAX >> 8),199);
  puVar19 = unaff_RDI + 1;
  bVar21 = *unaff_RSI < *unaff_RDI;
  uVar5 = *unaff_RSI - *unaff_RDI;
  bVar23 = (int)uVar5 < 0;
  bVar22 = uVar5 == 0;
  bVar15 = POPCOUNT(uVar5 & 0xff);
  do {
    pcVar9 = (char *)CONCAT62((int6)((ulonglong)uVar8 >> 0x10),
                              CONCAT11(bVar23 << 7 | bVar22 << 6 | in_AF << 4 |
                                       ((bVar15 & 1) == 0) << 2 | 2 | bVar21,(char)uVar8));
    *(undefined8 *)((longlong)register0x00000020 + -8) = 0x5f40c5cc;
    if (!bVar21) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    param_1 = param_1 + -1;
    if (param_1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar7 = *(char **)((longlong)register0x00000020 + -8);
    pcVar10 = (char *)(CONCAT62((int6)(unaff_RBX >> 0x10),
                                CONCAT11((char)(unaff_RBX >> 8) - *pcVar9,(char)unaff_RBX)) &
                      0xffffffff);
    uVar17 = (ulonglong)pcVar9 & 0xffffffff;
    *pcVar10 = *pcVar10 + (char)pcVar10;
    sVar16 = (short)param_2;
    lVar14 = param_1;
    puVar18 = (undefined1 *)register0x00000020;
    puVar20 = puVar19;
    if ((POPCOUNT(*pcVar10) & 1U) == 0) {
      pbVar1 = (byte *)(pcVar10 + param_4 + -0x5823ab11);
      bVar15 = *pbVar1;
      bVar13 = (byte)param_1;
      bVar4 = *pbVar1;
      cVar12 = bVar13 - *pbVar1;
      lVar14 = CONCAT71((int7)((ulonglong)param_1 >> 8),cVar12);
      if (cVar12 < '\0') {
        *(int *)(param_2 + 0x3e) = *(int *)(param_2 + 0x3e) << 1;
        out(sVar16,(char)pcVar10);
        return;
      }
      puVar20 = (uint *)((longlong)puVar19 + 1);
      cVar3 = in(sVar16);
      *(char *)puVar19 = cVar3;
      unaff_RBP = 0x8649aeac;
      puVar18 = (undefined1 *)((longlong)register0x00000020 + -8);
      *(ulonglong *)((longlong)register0x00000020 + -8) =
           (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW1(bVar13,bVar4) * 0x800 |
           (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
           (ulonglong)(cVar12 == '\0') * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
           (ulonglong)((POPCOUNT(cVar12) & 1U) == 0) * 4 | (ulonglong)(bVar13 < bVar15) |
           (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
           (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
      param_2[-0x5f7d1e2b] = param_2[-0x5f7d1e2b] + (char)((ulonglong)param_1 >> 8);
      cVar12 = in(sVar16);
      if ((unaff_RBX & 0x9b) != 0) {
        out(sVar16 + (short)*(undefined4 *)(lVar14 + 0x35155fee),cVar12);
        *(short *)((longlong)register0x00000020 + -10) = (short)puVar20;
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      pcVar10 = (char *)CONCAT71((int7)((ulonglong)pcVar10 >> 8),cVar12 + param_2[0x2a]);
    }
    *(undefined2 *)pcVar10 = in_CS;
    out(sVar16,(int)pcVar10);
    register0x00000020 = (BADSPACEBASE *)(puVar18 + -8);
    *(undefined1 **)(puVar18 + -8) = puVar18;
    cVar12 = *pcVar7;
    uVar11 = (undefined7)((ulonglong)pcVar10 >> 8);
    uVar5 = *puVar20;
    LOCK();
    puVar18 = (undefined1 *)(param_3 + -0x7d1e2a56 + CONCAT71(uVar11,cVar12));
    uVar2 = *puVar18;
    *puVar18 = (char)uVar17;
    unaff_RBX = CONCAT71((int7)(uVar17 >> 8),uVar2);
    UNLOCK();
    uVar8 = CONCAT71(uVar11,cRam0312dce374ec9b24);
    puVar19 = (uint *)((longlong)puVar20 + 2);
    *(char *)((longlong)puVar20 + 1) = cRam0312dce374ec9b24;
    lVar14 = lVar14 + -1;
    if (lVar14 == 0 || cVar12 == (char)uVar5) {
      return;
    }
    *param_2 = *param_2 + (char)((ulonglong)pcVar10 >> 8);
    bVar21 = false;
    bVar15 = (byte)((ulonglong)lVar14 >> 8) | *(byte *)(unaff_RBP + -0x58384fbe);
    param_1 = CONCAT62((int6)((ulonglong)lVar14 >> 0x10),CONCAT11(bVar15,(char)lVar14));
    bVar23 = (char)bVar15 < '\0';
    bVar22 = bVar15 == 0;
    bVar15 = POPCOUNT(bVar15);
  } while( true );
}



// FUNCTION 14d7c2757 FUN_14d7c2757 body=8 status=ok
// SIG undefined FUN_14d7c2757(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c2790) overlaps instruction at (ram,0x00014d7c278e)
    */

void FUN_14d7c2757(longlong param_1,char *param_2,longlong param_3,longlong param_4)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  char cVar4;
  byte bVar5;
  code *pcVar6;
  char *pcVar7;
  char cVar8;
  char *in_RAX;
  char *pcVar9;
  char cVar10;
  byte bVar13;
  longlong lVar12;
  short sVar14;
  ulonglong unaff_RBX;
  ulonglong *puVar15;
  ulonglong *puVar16;
  longlong unaff_RBP;
  char *pcVar17;
  undefined2 in_CS;
  undefined1 in_CF;
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
  byte bVar11;
  
  puVar15 = (ulonglong *)auStackX_8;
  do {
    if (!(bool)in_CF) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    param_1 = param_1 + -1;
    if (param_1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar7 = (char *)*puVar15;
    pcVar9 = (char *)(CONCAT62((int6)(unaff_RBX >> 0x10),
                               CONCAT11((char)(unaff_RBX >> 8) - *in_RAX,(char)unaff_RBX)) &
                     0xffffffff);
    *pcVar9 = *pcVar9 + (char)pcVar9;
    sVar14 = (short)param_2;
    lVar12 = param_1;
    puVar16 = puVar15 + 1;
    pcVar17 = unaff_retaddr;
    if ((POPCOUNT(*pcVar9) & 1U) == 0) {
      pbVar1 = (byte *)(pcVar9 + param_4 + -0x5823ab11);
      bVar13 = *pbVar1;
      bVar11 = (byte)param_1;
      bVar5 = *pbVar1;
      cVar10 = bVar11 - *pbVar1;
      lVar12 = CONCAT71((int7)((ulonglong)param_1 >> 8),cVar10);
      if (cVar10 < '\0') {
        *(int *)(param_2 + 0x3e) = *(int *)(param_2 + 0x3e) << 1;
        out(sVar14,(char)pcVar9);
        return;
      }
      pcVar17 = unaff_retaddr + 1;
      cVar4 = in(sVar14);
      *unaff_retaddr = cVar4;
      unaff_RBP = 0x8649aeac;
      *puVar15 = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW1(bVar11,bVar5) * 0x800 |
                 (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
                 (ulonglong)(cVar10 == '\0') * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
                 (ulonglong)((POPCOUNT(cVar10) & 1U) == 0) * 4 | (ulonglong)(bVar11 < bVar13) |
                 (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
                 (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
      param_2[-0x5f7d1e2b] = param_2[-0x5f7d1e2b] + (char)((ulonglong)param_1 >> 8);
      cVar10 = in(sVar14);
      if ((unaff_RBX & 0x9b) != 0) {
        out(sVar14 + (short)*(undefined4 *)(lVar12 + 0x35155fee),cVar10);
        *(short *)((longlong)puVar15 + -2) = (short)pcVar17;
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      pcVar9 = (char *)CONCAT71((int7)((ulonglong)pcVar9 >> 8),cVar10 + param_2[0x2a]);
      puVar16 = puVar15;
    }
    *(undefined2 *)pcVar9 = in_CS;
    out(sVar14,(int)pcVar9);
    *(ulonglong **)((longlong)puVar16 + -8) = puVar16;
    cVar10 = *pcVar7;
    cVar4 = *pcVar17;
    LOCK();
    puVar2 = (undefined1 *)(param_3 + -0x7d1e2a56 + CONCAT71((int7)((ulonglong)pcVar9 >> 8),cVar10))
    ;
    uVar3 = *puVar2;
    *puVar2 = (char)((ulonglong)in_RAX & 0xffffffff);
    cVar8 = cRam0312dce374ec9b24;
    unaff_RBX = CONCAT71((int7)(((ulonglong)in_RAX & 0xffffffff) >> 8),uVar3);
    UNLOCK();
    unaff_retaddr = pcVar17 + 2;
    pcVar17[1] = cRam0312dce374ec9b24;
    lVar12 = lVar12 + -1;
    if (lVar12 == 0 || cVar10 == cVar4) {
      return;
    }
    *param_2 = *param_2 + (char)((ulonglong)pcVar9 >> 8);
    in_CF = false;
    bVar13 = (byte)((ulonglong)lVar12 >> 8) | *(byte *)(unaff_RBP + -0x58384fbe);
    param_1 = CONCAT62((int6)((ulonglong)lVar12 >> 0x10),CONCAT11(bVar13,(char)lVar12));
    in_RAX = (char *)(CONCAT62((int6)((ulonglong)pcVar9 >> 0x10),
                               CONCAT11(((char)bVar13 < '\0') << 7 | (bVar13 == 0) << 6 | in_AF << 4
                                        | ((POPCOUNT(bVar13) & 1U) == 0) << 2,cVar8)) | 0x200);
    puVar15 = (ulonglong *)((longlong)puVar16 + -0x10);
    *(undefined8 *)((longlong)puVar16 + -0x10) = 0x5f40c5cc;
  } while( true );
}



// FUNCTION 14d7c2768 FUN_14d7c2768 body=4 status=ok
// SIG undefined FUN_14d7c2768(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2768(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2770 FUN_14d7c2770 body=5 status=ok
// SIG undefined FUN_14d7c2770(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2770(void)

{
  undefined1 in_AL;
  longlong unaff_RBX;
  
  *(byte *)(unaff_RBX + 2) = *(byte *)(unaff_RBX + 2) >> 1;
  out(0x53,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2780 FUN_14d7c2780 body=1 status=ok
// SIG undefined FUN_14d7c2780(void)

/* WARNING: Instruction at (ram,0x00014d7c2790) overlaps instruction at (ram,0x00014d7c278e)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c275a) */
/* WARNING: Removing unreachable block (ram,0x00014d7c275c) */
/* WARNING: Removing unreachable block (ram,0x00014d7c2788) */

void FUN_14d7c2780(longlong param_1,char *param_2,longlong param_3,longlong param_4)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  code *pcVar5;
  char *in_RAX;
  char *pcVar6;
  char cVar7;
  short sVar10;
  ulonglong unaff_RBX;
  char *unaff_RSI;
  undefined4 *unaff_RDI;
  char *pcVar11;
  undefined2 in_CS;
  char in_CF;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uStack_8;
  byte bVar4;
  byte bVar8;
  longlong lVar9;
  
  *unaff_RDI = (int)in_RAX;
  param_2[0x5e] = param_2[0x5e] + (char)param_2 + in_CF;
  pcVar6 = (char *)(CONCAT62((int6)(unaff_RBX >> 0x10),
                             CONCAT11((char)(unaff_RBX >> 8) - *in_RAX,(char)unaff_RBX)) &
                   0xffffffff);
  *pcVar6 = *pcVar6 + (char)pcVar6;
  sVar10 = (short)param_2;
  lVar9 = param_1;
  pcVar11 = (char *)(unaff_RDI + 1);
  if ((POPCOUNT(*pcVar6) & 1U) == 0) {
    pbVar1 = (byte *)(pcVar6 + param_4 + -0x5823ab11);
    bVar3 = *pbVar1;
    bVar8 = (byte)param_1;
    bVar4 = *pbVar1;
    cVar7 = bVar8 - *pbVar1;
    lVar9 = CONCAT71((int7)((ulonglong)param_1 >> 8),cVar7);
    if (cVar7 < '\0') {
      *(int *)(param_2 + 0x3e) = *(int *)(param_2 + 0x3e) << 1;
      out(sVar10,(char)pcVar6);
      return;
    }
    pcVar11 = (char *)((longlong)unaff_RDI + 5);
    cVar2 = in(sVar10);
    *(char *)(unaff_RDI + 1) = cVar2;
    uStack_8 = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW1(bVar8,bVar4) * 0x800 |
               (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
               (ulonglong)(cVar7 == '\0') * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
               (ulonglong)((POPCOUNT(cVar7) & 1U) == 0) * 4 | (ulonglong)(bVar8 < bVar3) |
               (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
               (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
    register0x00000020 = (BADSPACEBASE *)&uStack_8;
    param_2[-0x5f7d1e2b] = param_2[-0x5f7d1e2b] + (char)((ulonglong)param_1 >> 8);
    cVar7 = in(sVar10);
    if ((unaff_RBX & 0x9b) != 0) {
      out(sVar10 + (short)*(undefined4 *)(lVar9 + 0x35155fee),cVar7);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    pcVar6 = (char *)CONCAT71((int7)((ulonglong)pcVar6 >> 8),cVar7 + param_2[0x2a]);
  }
  *(undefined2 *)pcVar6 = in_CS;
  out(sVar10,(int)pcVar6);
  *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
  cVar7 = *unaff_RSI;
  cVar2 = *pcVar11;
  LOCK();
  *(char *)(param_3 + -0x7d1e2a56 + CONCAT71((int7)((ulonglong)pcVar6 >> 8),cVar7)) = (char)in_RAX;
  UNLOCK();
  pcVar11[1] = cRam0312dce374ec9b24;
  if (lVar9 != 1 && cVar7 != cVar2) {
    *param_2 = *param_2 + (char)((ulonglong)pcVar6 >> 8);
    *(undefined8 *)((longlong)register0x00000020 + -0x10) = 0x5f40c5cc;
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  return;
}



// FUNCTION 14d7c2784 FUN_14d7c2784 body=80 status=ok
// SIG undefined FUN_14d7c2784(void)

/* WARNING: Instruction at (ram,0x00014d7c2790) overlaps instruction at (ram,0x00014d7c278e)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c275a) */
/* WARNING: Removing unreachable block (ram,0x00014d7c275c) */
/* WARNING: Removing unreachable block (ram,0x00014d7c2788) */

void FUN_14d7c2784(longlong param_1,char *param_2,longlong param_3,longlong param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  code *pcVar4;
  byte *in_RAX;
  char *pcVar5;
  char cVar6;
  short sVar9;
  byte bVar10;
  ulonglong unaff_RBX;
  char *unaff_RSI;
  char *unaff_RDI;
  char *pcVar11;
  undefined2 in_CS;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uStack_8;
  byte bVar7;
  longlong lVar8;
  
  bVar2 = *in_RAX;
  bVar10 = (byte)(unaff_RBX >> 8);
  *in_RAX = *in_RAX + bVar10;
  param_2[0x5e] = param_2[0x5e] + (char)param_2 + CARRY1(bVar2,bVar10);
  pcVar5 = (char *)(CONCAT62((int6)(unaff_RBX >> 0x10),CONCAT11(bVar10 - *in_RAX,(char)unaff_RBX)) &
                   0xffffffff);
  *pcVar5 = *pcVar5 + (char)pcVar5;
  sVar9 = (short)param_2;
  lVar8 = param_1;
  pcVar11 = unaff_RDI;
  if ((POPCOUNT(*pcVar5) & 1U) == 0) {
    pbVar1 = (byte *)(pcVar5 + param_4 + -0x5823ab11);
    bVar2 = *pbVar1;
    bVar7 = (byte)param_1;
    bVar10 = *pbVar1;
    cVar6 = bVar7 - *pbVar1;
    lVar8 = CONCAT71((int7)((ulonglong)param_1 >> 8),cVar6);
    if (cVar6 < '\0') {
      *(int *)(param_2 + 0x3e) = *(int *)(param_2 + 0x3e) << 1;
      out(sVar9,(char)pcVar5);
      return;
    }
    pcVar11 = unaff_RDI + 1;
    cVar3 = in(sVar9);
    *unaff_RDI = cVar3;
    uStack_8 = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW1(bVar7,bVar10) * 0x800 |
               (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
               (ulonglong)(cVar6 == '\0') * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
               (ulonglong)((POPCOUNT(cVar6) & 1U) == 0) * 4 | (ulonglong)(bVar7 < bVar2) |
               (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
               (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
    register0x00000020 = (BADSPACEBASE *)&uStack_8;
    param_2[-0x5f7d1e2b] = param_2[-0x5f7d1e2b] + (char)((ulonglong)param_1 >> 8);
    cVar6 = in(sVar9);
    if ((unaff_RBX & 0x9b) != 0) {
      out(sVar9 + (short)*(undefined4 *)(lVar8 + 0x35155fee),cVar6);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    pcVar5 = (char *)CONCAT71((int7)((ulonglong)pcVar5 >> 8),cVar6 + param_2[0x2a]);
  }
  *(undefined2 *)pcVar5 = in_CS;
  out(sVar9,(int)pcVar5);
  *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
  cVar6 = *unaff_RSI;
  cVar3 = *pcVar11;
  LOCK();
  *(char *)(param_3 + -0x7d1e2a56 + CONCAT71((int7)((ulonglong)pcVar5 >> 8),cVar6)) = (char)in_RAX;
  UNLOCK();
  pcVar11[1] = cRam0312dce374ec9b24;
  if (lVar8 != 1 && cVar6 != cVar3) {
    *param_2 = *param_2 + (char)((ulonglong)pcVar5 >> 8);
    *(undefined8 *)((longlong)register0x00000020 + -0x10) = 0x5f40c5cc;
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}



// FUNCTION 14d7c27d4 FUN_14d7c27d4 body=1 status=ok
// SIG undefined FUN_14d7c27d4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c27d4(undefined8 param_1,undefined2 param_2)

{
  undefined4 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c27d8 FUN_14d7c27d8 body=29 status=ok
// SIG undefined FUN_14d7c27d8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c27d8(char param_1,undefined2 param_2)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  char in_AH;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (in_ZF || in_OF != in_SF) {
    DAT_f90e7bb4 = DAT_f90e7bb4 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = in(param_2);
  *unaff_RDI = uVar3;
  *(char *)(unaff_RDI + -0x13) = *(char *)(unaff_RDI + -0x13) >> 0xf;
  pcVar1 = (char *)(unaff_RSI + 0x5c);
  cVar2 = *pcVar1;
  *pcVar1 = *pcVar1 + in_AH;
  if (SCARRY1(cVar2,in_AH)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c27e5 FUN_14d7c27e5 body=6 status=ok
// SIG undefined FUN_14d7c27e5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c27e5(void)

{
  bool in_OF;
  
  if (in_OF) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2800 FUN_14d7c2800 body=3 status=ok
// SIG undefined FUN_14d7c2800(void)

/* WARNING: Instruction at (ram,0x00014d7c2793) overlaps instruction at (ram,0x00014d7c2792)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c275a) */
/* WARNING: Removing unreachable block (ram,0x00014d7c275c) */
/* WARNING: Removing unreachable block (ram,0x00014d7c2788) */
/* WARNING: Removing unreachable block (ram,0x00014d7c2791) */

void FUN_14d7c2800(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 uVar1;
  char cVar2;
  code *pcVar3;
  undefined7 uVar4;
  undefined2 *puVar5;
  ulonglong in_RAX;
  char cVar6;
  short sVar8;
  char *pcVar9;
  undefined1 unaff_BL;
  char *unaff_RSI;
  int *unaff_RDI;
  undefined2 in_CS;
  longlong lVar7;
  
  pcVar9 = (char *)(ulonglong)(uint)(*unaff_RDI * -0x24);
  cVar6 = (char)param_1 - *(char *)((in_RAX - 0x5823ab11) + param_1);
  lVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),cVar6);
  sVar8 = (short)(*unaff_RDI * -0x24);
  if (cVar6 < '\0') {
    *(int *)(pcVar9 + 0x3e) = *(int *)(pcVar9 + 0x3e) << 1;
    out(sVar8,(char)in_RAX);
    return;
  }
  uVar1 = in(sVar8);
  *(undefined1 *)unaff_RDI = uVar1;
  pcVar9[-0x5f7d1e2b] = pcVar9[-0x5f7d1e2b] + (char)((ulonglong)param_1 >> 8);
  uVar4 = (undefined7)(in_RAX >> 8);
  cVar6 = in(sVar8);
  if ((in_RAX & 0x9b) == 0) {
    puVar5 = (undefined2 *)CONCAT71(uVar4,cVar6 + pcVar9[0x2a]);
    *puVar5 = in_CS;
    out(sVar8,(int)puVar5);
    cVar6 = *unaff_RSI;
    cVar2 = *(char *)((longlong)unaff_RDI + 1);
    LOCK();
    *(undefined1 *)(param_3 + -0x7d1e2a56 + CONCAT71(uVar4,cVar6)) = unaff_BL;
    UNLOCK();
    *(undefined1 *)((longlong)unaff_RDI + 2) = uRam0312dce374ec9b24;
    if (lVar7 != 1 && cVar6 != cVar2) {
      *pcVar9 = *pcVar9 + (char)(in_RAX >> 8);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    return;
  }
  out(sVar8 + (short)*(undefined4 *)(lVar7 + 0x35155fee),cVar6);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7c2804 FUN_14d7c2804 body=5 status=ok
// SIG undefined FUN_14d7c2804(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2804(void)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2815 FUN_14d7c2815 body=3 status=ok
// SIG undefined FUN_14d7c2815(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2815(longlong param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int *in_RAX;
  undefined8 *puVar5;
  byte unaff_BL;
  uint *unaff_RSI;
  undefined1 *unaff_RDI;
  undefined8 unaff_retaddr;
  
  if (param_1 != 0) {
    uVar4 = (int)in_RAX - *in_RAX;
    pbVar1 = (byte *)((ulonglong)uVar4 - 0x26);
    bVar2 = *pbVar1;
    *pbVar1 = *pbVar1 + unaff_BL;
    if (-1 < (int)((uVar4 + 0x27574c62) - (uint)CARRY1(bVar2,unaff_BL))) {
      bVar3 = (byte)param_1 & 0x1f;
      *unaff_RSI = (uint)(CONCAT14(uVar4 < 0xd8a8b39e ||
                                   uVar4 + 0x27574c62 < (uint)CARRY1(bVar2,unaff_BL),*unaff_RSI) >>
                         bVar3) | *unaff_RSI << 0x21 - bVar3;
      puVar5 = (undefined8 *)func_0x000114b7e772();
      *puVar5 = unaff_retaddr;
      DAT_f90e7bb4 = DAT_f90e7bb4 + (char)param_1 + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *unaff_RDI = (char)*unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c281b FUN_14d7c281b body=7 status=ok
// SIG undefined FUN_14d7c281b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c281b(byte param_1)

{
  undefined8 *puVar1;
  uint *unaff_RSI;
  undefined1 *unaff_RDI;
  undefined1 in_CF;
  bool in_SF;
  undefined8 uStackX_8;
  
  if (!in_SF) {
    *unaff_RSI = (uint)(CONCAT14(in_CF,*unaff_RSI) >> (param_1 & 0x1f)) |
                 *unaff_RSI << 0x21 - (param_1 & 0x1f);
    puVar1 = (undefined8 *)func_0x000114b7e772();
    *puVar1 = uStackX_8;
    DAT_f90e7bb4 = DAT_f90e7bb4 + (param_1 - 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = (char)*unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2823 FUN_14d7c2823 body=8 status=ok
// SIG undefined FUN_14d7c2823(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2823(longlong param_1)

{
  uint *puVar1;
  undefined1 in_AL;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char in_ZF;
  
  if (param_1 + -1 == 0 || in_ZF != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar1 = (uint *)(param_1 + -1 +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))));
  *puVar1 = *puVar1 & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2859 FUN_14d7c2859 body=4 status=ok
// SIG undefined FUN_14d7c2859(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2859(undefined8 param_1,undefined2 param_2)

{
  undefined4 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2861 FUN_14d7c2861 body=5 status=ok
// SIG undefined FUN_14d7c2861(void)

/* WARNING: Control flow encountered bad instruction data */

byte FUN_14d7c2861(undefined4 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  char *pcVar2;
  byte in_AL;
  longlong unaff_RBX;
  undefined1 *unaff_RDI;
  
  pcVar2 = (char *)(unaff_RBX * 5);
  *pcVar2 = *pcVar2 + '\x01';
  if ((POPCOUNT(*pcVar2) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  *(undefined4 *)(unaff_RDI + 0x93aa42) = param_1;
  return in_AL ^ 0x9f;
}



// FUNCTION 14d7c2872 FUN_14d7c2872 body=2 status=ok
// SIG undefined FUN_14d7c2872(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c28c4) overlaps instruction at (ram,0x00014d7c28c1)
    */

void FUN_14d7c2872(longlong param_1)

{
  char *pcVar1;
  char in_AL;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 unaff_00000034;
  char *unaff_R14;
  
  if (param_1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + -0x74a8f018);
  *pcVar1 = *pcVar1 + in_AL;
  if (unaff_ESI < unaff_EBP) {
    *unaff_R14 = *unaff_R14 + (char)unaff_ESI + '\x14';
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  cRamc8f1a7771eea2e55 = in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c287a FUN_14d7c287a body=7 status=ok
// SIG undefined FUN_14d7c287a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c287a(undefined8 param_1)

{
  int unaff_EBP;
  int unaff_ESI;
  char unaff_DIL;
  char *unaff_R14;
  
  if (unaff_ESI < unaff_EBP) {
    *unaff_R14 = *unaff_R14 + unaff_DIL;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uRamc8f1a7771eea2e55 = (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c288c FUN_14d7c288c body=9 status=ok
// SIG undefined FUN_14d7c288c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c288c(void)

{
  undefined1 in_AL;
  char unaff_DIL;
  char *unaff_R14;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (!in_ZF && in_OF == in_SF) {
    *unaff_R14 = *unaff_R14 + unaff_DIL;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uRamc8f1a7771eea2e55 = in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c28aa FUN_14d7c28aa body=3 status=ok
// SIG undefined FUN_14d7c28aa(void)

byte FUN_14d7c28aa(undefined4 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  byte in_AL;
  undefined1 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  *(undefined4 *)(unaff_RDI + 0x93aa42) = param_1;
  return in_AL ^ 0x9f;
}



// FUNCTION 14d7c28ae FUN_14d7c28ae body=4 status=ok
// SIG undefined FUN_14d7c28ae(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c28ae(longlong param_1)

{
  char *pcVar1;
  ulonglong unaff_RBX;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  undefined8 unaff_retaddr;
  
  *(undefined8 *)(param_1 + -0x56) = unaff_retaddr;
  pcVar1 = (char *)(unaff_RBX & 0xffffffff);
  *unaff_RDI = *unaff_RSI;
  *pcVar1 = *pcVar1 + (char)pcVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c28bd FUN_14d7c28bd body=14 status=ok
// SIG undefined FUN_14d7c28bd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c28bd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c28d5 FUN_14d7c28d5 body=4 status=ok
// SIG undefined FUN_14d7c28d5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c28d5(longlong param_1,undefined8 param_2)

{
  short sVar1;
  undefined4 in_EAX;
  longlong unaff_RSI;
  
  sVar1 = (short)*(char *)(unaff_RSI + 0x3c) * (short)(char)((ulonglong)param_2 >> 8);
  _DAT_561c6dcbdce2fc79 = CONCAT22((short)((uint)in_EAX >> 0x10),sVar1);
  *(char *)(param_1 + 0x28) = *(char *)(param_1 + 0x28) + (char)sVar1;
  return;
}



// FUNCTION 14d7c28d9 FUN_14d7c28d9 body=16 status=ok
// SIG undefined FUN_14d7c28d9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c28d9(longlong param_1,undefined8 param_2)

{
  short sVar1;
  undefined4 in_EAX;
  
  sVar1 = (short)(char)in_EAX * (short)(char)((ulonglong)param_2 >> 8);
  _DAT_561c6dcbdce2fc79 = CONCAT22((short)((uint)in_EAX >> 0x10),sVar1);
  *(char *)(param_1 + 0x28) = *(char *)(param_1 + 0x28) + (char)sVar1;
  return;
}



// FUNCTION 14d7c2900 FUN_14d7c2900 body=6 status=ok
// SIG undefined FUN_14d7c2900(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2900(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c290a FUN_14d7c290a body=6 status=ok
// SIG undefined FUN_14d7c290a(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c290a(longlong param_1)

{
  char *pcVar1;
  undefined4 in_EAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong *unaff_RSI;
  ulonglong *unaff_RDI;
  bool in_CF;
  bool in_ZF;
  bool in_SF;
  bool in_OF;
  
  if (!in_SF) {
    *(undefined4 *)unaff_RDI = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 != 1 && in_ZF != false) {
    _DAT_561c6dcbdce2fc79 = in_EAX;
    *(char *)(param_1 + 0x27) = *(char *)(param_1 + 0x27) + (char)in_EAX;
    return;
  }
  if (in_CF || in_ZF) {
    *(char *)(unaff_RBX + 0x713c00f4) =
         *(char *)(unaff_RBX + 0x713c00f4) + (char)((uint)in_EAX >> 8) + (*unaff_RSI < *unaff_RDI);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_ZF) {
    if (!in_OF) {
      pcVar1 = (char *)((longlong)unaff_RSI + (longlong)unaff_RDI * 2 + 9);
      *pcVar1 = *pcVar1 + (char)(int)*unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RBP + 0x6ec63580) =
       *(char *)(unaff_RBP + 0x6ec63580) + (char)((ulonglong)unaff_RBX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c290e FUN_14d7c290e body=34 status=ok
// SIG undefined FUN_14d7c290e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c290e(void)

{
  char *pcVar1;
  undefined8 in_RAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong *unaff_RSI;
  ulonglong *unaff_RDI;
  bool in_CF;
  bool in_ZF;
  bool in_OF;
  
  if (in_CF || in_ZF) {
    *(char *)(unaff_RBX + 0x713c00f4) =
         *(char *)(unaff_RBX + 0x713c00f4) + (char)((ulonglong)in_RAX >> 8) +
         (*unaff_RSI < *unaff_RDI);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_ZF) {
    if (!in_OF) {
      pcVar1 = (char *)((longlong)unaff_RSI + (longlong)unaff_RDI * 2 + 9);
      *pcVar1 = *pcVar1 + (char)(int)*unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RBP + 0x6ec63580) =
       *(char *)(unaff_RBP + 0x6ec63580) + (char)((ulonglong)unaff_RBX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2933 FUN_14d7c2933 body=9 status=ok
// SIG undefined FUN_14d7c2933(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2933(void)

{
  undefined1 in_AL;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = in_AL;
  unaff_RDI[1] = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c294b FUN_14d7c294b body=17 status=ok
// SIG undefined FUN_14d7c294b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c294b(void)

{
  char *pcVar1;
  code *pcVar2;
  byte in_AL;
  undefined7 in_register_00000001;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char in_CF;
  char cVar3;
  
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + -0x68);
  *pcVar1 = *pcVar1 + unaff_BH + in_CF;
  _DAT_e5d202f0 = CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  cVar3 = in_AL < 0xf3;
  pcVar2 = (code *)swi(0xcf);
  (*pcVar2)();
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x46);
  *pcVar1 = *pcVar1 - cVar3;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -8);
  *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2965 FUN_14d7c2965 body=6 status=ok
// SIG undefined FUN_14d7c2965(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2965(void)

{
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  int *unaff_RDI;
  longlong unaff_retaddr;
  
  LOCK();
  *unaff_RDI = *unaff_RDI + -1;
  UNLOCK();
  *(longlong *)(unaff_retaddr + -8) = unaff_RBP;
  *(char *)(unaff_RBP + 0x6ec63580) =
       *(char *)(unaff_RBP + 0x6ec63580) + (char)((ulonglong)unaff_RBX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2975 FUN_14d7c2975 body=19 status=ok
// SIG undefined FUN_14d7c2975(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2975(void)

{
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  
  *(char *)(unaff_RBP + 0x6ec63580) =
       *(char *)(unaff_RBP + 0x6ec63580) + (char)((ulonglong)unaff_RBX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c298e FUN_14d7c298e body=12 status=ok
// SIG undefined FUN_14d7c298e(void)

/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_14d7c298e(undefined8 param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  code *pcVar3;
  byte bVar4;
  char unaff_BL;
  undefined7 unaff_00000019;
  uint *unaff_RDI;
  undefined1 *puVar5;
  char in_CF;
  char cVar6;
  undefined8 uStackX_8;
  
  puVar5 = (undefined1 *)(ulonglong)*unaff_RDI;
  puVar5[-0x3e] = (byte)puVar5[-0x3e] >> 1 | in_CF << 7;
  uVar2 = in(param_2);
  *puVar5 = uVar2;
  bVar4 = (byte)((ulonglong)(puVar5 + 1) >> 8);
  cVar6 = CARRY1((byte)param_2,bVar4);
  if (!(bool)cVar6 && (byte)((byte)param_2 + bVar4) != '\0') {
    return uStackX_8;
  }
  pcVar3 = (code *)swi(0xcf);
  (*pcVar3)();
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -0x46);
  *pcVar1 = *pcVar1 - cVar6;
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -8);
  *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c29a3 FUN_14d7c29a3 body=1 status=ok
// SIG undefined FUN_14d7c29a3(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c29b5) overlaps instruction at (ram,0x00014d7c29b4)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7c29c0) */
/* WARNING: Removing unreachable block (ram,0x00014d7c29c2) */
/* WARNING: Removing unreachable block (ram,0x00014d7c29b5) */
/* WARNING: Removing unreachable block (ram,0x00014d7c29b6) */
/* WARNING: Removing unreachable block (ram,0x00014d7c2a1e) */
/* WARNING: Removing unreachable block (ram,0x00014d7c2a33) */
/* WARNING: Removing unreachable block (ram,0x00014d7c2a35) */
/* WARNING: Removing unreachable block (ram,0x00014d7c2a44) */
/* WARNING: Removing unreachable block (ram,0x00014d7c29df) */
/* WARNING: Removing unreachable block (ram,0x00014d7c29e1) */
/* WARNING: Removing unreachable block (ram,0x00014d7c29c5) */
/* WARNING: Removing unreachable block (ram,0x00014d7c29c7) */
/* WARNING: Removing unreachable block (ram,0x00014d7c29cc) */
/* WARNING: Removing unreachable block (ram,0x00014d7c29f2) */
/* WARNING: Removing unreachable block (ram,0x00014d7c29ce) */
/* WARNING: Removing unreachable block (ram,0x00014d7c29d0) */
/* WARNING: Removing unreachable block (ram,0x00014d7c29a9) */
/* WARNING: Removing unreachable block (ram,0x00014d7c29cd) */
/* WARNING: Removing unreachable block (ram,0x00014d7c29e4) */
/* WARNING: Removing unreachable block (ram,0x00014d7c29c6) */
/* WARNING: Removing unreachable block (ram,0x00014d7c29b0) */
/* WARNING: Removing unreachable block (ram,0x00014d7c29bc) */
/* WARNING: Removing unreachable block (ram,0x00014d7c295e) */

void FUN_14d7c29a3(undefined8 *param_1)

{
  undefined1 in_AL;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  undefined8 in_MM5;
  
  pmulhw(in_MM5,*param_1);
  *unaff_RDI = in_AL;
  unaff_RDI[1] = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c29c5 FUN_14d7c29c5 body=94 status=ok
// SIG undefined FUN_14d7c29c5(void)

/* WARNING: Instruction at (ram,0x00014d7c29c8) overlaps instruction at (ram,0x00014d7c29c7)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c29c0) */
/* WARNING: Removing unreachable block (ram,0x00014d7c29c2) */
/* WARNING: Removing unreachable block (ram,0x00014d7c29b5) */

void FUN_14d7c29c5(char *param_1,ulonglong param_2)

{
  uint *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  char cVar5;
  byte bVar6;
  undefined1 uVar7;
  ulonglong in_RAX;
  char *pcVar8;
  uint uVar9;
  ulonglong *puVar10;
  undefined8 *puVar11;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined4 *unaff_RDI;
  bool bVar12;
  bool bVar13;
  
code_r0x00014d7c29c5:
  bVar6 = (byte)in_RAX;
  if ((char)bVar6 < 'R') {
    LOCK();
    uVar7 = unaff_RSI[0x31];
    unaff_RSI[0x31] = (char)(param_2 >> 8);
    UNLOCK();
    unaff_RSI[(longlong)param_1 * 4 + 0x42] =
         unaff_RSI[(longlong)param_1 * 4 + 0x42] & (byte)param_2;
    uVar3 = in(CONCAT11(uVar7,(byte)param_2));
    *unaff_RDI = uVar3;
    DAT_c1ebc01933f56ea3 = (char)(char *)(in_RAX & 0xffffffff) - *(char *)(in_RAX & 0xffffffff);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((POPCOUNT(bVar6 + 0xae) & 1U) != 0) {
    *(undefined1 *)unaff_RDI = *unaff_RSI;
    *(int *)((longlong)unaff_RDI + 0x6c03adc2) =
         *(int *)((longlong)unaff_RDI + 0x6c03adc2) + 0x7a + (uint)(bVar6 < 0x52);
    return;
  }
  cVar5 = bVar6 + 0x7f + (bVar6 < 0x52);
  pcVar2 = (char *)((longlong)register0x00000020 + 0x159f6773c);
  *pcVar2 = *pcVar2 + cVar5;
  pcVar8 = param_1 + -1;
  if (pcVar8 == (char *)0x0 || *pcVar2 != '\0') goto LAB_14d7c29b6;
  uVar4 = (ulonglong)unaff_RDI >> 8;
  unaff_RDI = (undefined4 *)(ulonglong)((uint)CONCAT71((int7)(in_RAX >> 8),cVar5) & 0xffffff7a);
  puVar1 = (uint *)(unaff_RBP + -0x3c8593fd);
  *puVar1 = *puVar1 >> 0x16;
  uVar7 = in(0x4a);
  in_RAX = CONCAT71((int7)uVar4,uVar7) & 0xffffffff;
  param_1 = param_1 + -2;
  if (param_1 == (char *)0x0 || *puVar1 != 0) {
    halt_baddata();
  }
  goto FUN_14d7c29c5_1;
LAB_14d7c29b6:
  puVar1 = unaff_RDI + 1;
  uVar3 = in((short)param_2);
  *unaff_RDI = uVar3;
  *pcVar8 = *pcVar8 + (char)(in_RAX >> 8);
  if ((POPCOUNT(*pcVar8) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_2 = (ulonglong)(uint)((int)param_2 * -0x12);
  *pcVar8 = *pcVar8 + cVar5;
  puVar11 = (undefined8 *)((longlong)register0x00000020 + 8);
  unaff_RDI = unaff_RDI + 2;
  bVar12 = (uint)*(undefined8 *)register0x00000020 < *puVar1;
  uVar9 = (uint)*(undefined8 *)register0x00000020 - *puVar1;
  cVar5 = uVar9 == 0;
  bVar13 = (POPCOUNT(uVar9 & 0xff) & 1U) == 0;
  *(undefined8 *)register0x00000020 = 0x14d7c2a31;
  in_RAX = func_0x000175f95fea();
  if (!bVar13) {
    if (bVar12) {
      LOCK();
      unaff_RSI[0x1a] = 0x5f;
      UNLOCK();
      uVar9 = ~(uint)param_2;
      *(int *)(ulonglong)uVar9 = *(int *)(ulonglong)uVar9 - uVar9;
      *(int *)(unaff_RBP + 0x1f829d) = (int)pcVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_1 = pcVar8 + -1;
  register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + 8);
  if (param_1 == (char *)0x0 || cVar5 == '\0') {
    param_1 = pcVar8 + -2;
    register0x00000020 = (BADSPACEBASE *)puVar11;
    if (param_1 == (char *)0x0 || cVar5 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
FUN_14d7c29c5_1:
    puVar10 = (ulonglong *)((longlong)register0x00000020 + -8);
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
    *puVar10 = param_2;
  }
  goto code_r0x00014d7c29c5;
}



// FUNCTION 14d7c29e9 FUN_14d7c29e9 body=3 status=ok
// SIG undefined FUN_14d7c29e9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c29e9(void)

{
  longlong unaff_RSI;
  float10 in_ST0;
  
  *(short *)(unaff_RSI * 5) = (short)ROUND(in_ST0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c29ed FUN_14d7c29ed body=3 status=ok
// SIG undefined FUN_14d7c29ed(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c29ed(longlong param_1,undefined2 param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  uint in_EAX;
  undefined4 *unaff_RDI;
  
  pbVar1 = (byte *)(param_1 * 4 + 0x31768677);
  *pbVar1 = *pbVar1 & (byte)param_2;
  uVar2 = in(param_2);
  *unaff_RDI = uVar2;
  DAT_c1ebc01933f56ea3 = (char)in_EAX - *(char *)(ulonglong)in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2a55 FUN_14d7c2a55 body=8 status=ok
// SIG undefined FUN_14d7c2a55(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2a55(void)

{
  undefined4 in_EAX;
  bool in_CF;
  bool in_ZF;
  
  if (in_CF || in_ZF) {
    out(0x2e,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x0001977bcfda();
  if (!in_CF && !in_ZF) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2a5d FUN_14d7c2a5d body=14 status=ok
// SIG undefined FUN_14d7c2a5d(void)

void FUN_14d7c2a5d(void)

{
  func_0x00013ad2762b();
  return;
}



// FUNCTION 14d7c2a6d FUN_14d7c2a6d body=3 status=ok
// SIG undefined FUN_14d7c2a6d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2a6d(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2a79 FUN_14d7c2a79 body=75 status=ok
// SIG undefined FUN_14d7c2a79(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2a79(undefined8 param_1,uint param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined2 uVar4;
  longlong unaff_RBX;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  
  uVar2 = *unaff_RSI;
  pbVar1 = (byte *)(unaff_RBX + 0x25c89008 + unaff_RDI * 4);
  *pbVar1 = *pbVar1 >> 1 | *pbVar1 << 7;
  out(*(undefined1 *)(unaff_RSI + 1),(short)param_2);
  out((short)param_2,(char)uVar2);
  if (((*pbVar1 & 0x40) != 0) == (char)*pbVar1 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = func_0x000194a8d517();
  *(char *)(unaff_RBX + -0x47) = *(char *)(unaff_RBX + -0x47) + (char)((ushort)uVar4 >> 8);
  pbVar1 = (byte *)((longlong)unaff_RSI + 0x25af575b);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 << 1 | param_2 < *(uint *)((longlong)unaff_RSI + 0x6d2a2aa5);
  DAT_6449ffa521e84580 = (char)uVar4;
  if (-1 < (char)bVar3 && param_2 != *(uint *)((longlong)unaff_RSI + 0x6d2a2aa5)) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2ac7 FUN_14d7c2ac7 body=20 status=ok
// SIG undefined FUN_14d7c2ac7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2ac7(undefined8 param_1,uint param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  char in_AL;
  undefined2 uVar5;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined1 *unaff_RSI;
  
  cVar4 = *(char *)(CONCAT71(unaff_00000019,unaff_BL) + 0x5ee27a93);
  if (unaff_BL <= cVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*unaff_RSI,(short)param_2);
  out((short)param_2,in_AL + 0x3cU | 0x18);
  if (SBORROW1(unaff_BL,cVar4)) {
    uVar5 = func_0x000194a8d517();
    pcVar2 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -0x47);
    *pcVar2 = *pcVar2 + (char)((ushort)uVar5 >> 8);
    pbVar1 = unaff_RSI + 0x25af5757;
    bVar3 = *pbVar1;
    *pbVar1 = *pbVar1 << 1 | param_2 < *(uint *)(unaff_RSI + 0x6d2a2aa1);
    DAT_6449ffa521e84580 = (char)uVar5;
    if (-1 < (char)bVar3 && param_2 != *(uint *)(unaff_RSI + 0x6d2a2aa1)) {
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2ae4 FUN_14d7c2ae4 body=18 status=ok
// SIG undefined FUN_14d7c2ae4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2ae4(void)

{
  longlong unaff_R12;
  longlong unaff_R14;
  
  *(undefined8 *)(unaff_R14 + unaff_R12 * 2) = 0xffffffffd700832f;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2afc FUN_14d7c2afc body=6 status=ok
// SIG undefined FUN_14d7c2afc(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2afc(undefined8 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 *unaff_RDI;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (in_ZF || in_OF != in_SF) {
    uVar1 = in(param_2);
    *unaff_RDI = uVar1;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2b11 FUN_14d7c2b11 body=3 status=ok
// SIG undefined FUN_14d7c2b11(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2b11(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2b26 FUN_14d7c2b26 body=13 status=ok
// SIG undefined FUN_14d7c2b26(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2b26(longlong param_1)

{
  char in_ZF;
  
  if (param_1 == 1 || in_ZF != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2b48 FUN_14d7c2b48 body=2 status=ok
// SIG undefined FUN_14d7c2b48(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2b48(undefined8 param_1,byte *param_2)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 in_EAX;
  byte bVar3;
  longlong unaff_RBP;
  uint unaff_ESI;
  byte *unaff_RDI;
  
  bVar3 = (byte)param_1;
  *param_2 = *param_2 | (byte)((ulonglong)param_1 >> 8);
  uVar2 = *(uint *)(unaff_RBP + 0xb);
  if (uVar2 < unaff_ESI) {
    func_0x000193f3f6ca();
    *unaff_RDI = *unaff_RDI | bVar3;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(undefined4 *)unaff_RDI = in_EAX;
  if ((int)uVar2 <= (int)unaff_ESI) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((int)uVar2 <= (int)unaff_ESI) {
    uVar1 = in((short)param_2);
    *(undefined2 *)(unaff_RDI + 4) = uVar1;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2b58 FUN_14d7c2b58 body=106 status=ok
// SIG undefined FUN_14d7c2b58(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c2b2b) overlaps instruction at (ram,0x00014d7c2b28)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7c2ba8) */
/* WARNING: Removing unreachable block (ram,0x00014d7c2afd) */
/* WARNING: Removing unreachable block (ram,0x00014d7c2aff) */
/* WARNING: Removing unreachable block (ram,0x00014d7c2add) */

void FUN_14d7c2b58(longlong param_1,char *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar4;
  char cVar5;
  undefined1 *puVar6;
  ulonglong in_RAX;
  byte bVar7;
  byte bVar8;
  undefined8 unaff_RBX;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined8 *unaff_RBP;
  uint *unaff_RSI;
  uint uVar13;
  byte *unaff_RDI;
  char unaff_R13B;
  char in_ZF;
  byte bVar3;
  
  bVar7 = (byte)((ulonglong)param_2 >> 8);
  puVar6 = (undefined1 *)register0x00000020;
  do {
    puVar12 = puVar6;
    param_1 = param_1 + -1;
    if (param_1 != 0 && in_ZF != '\0') goto LAB_14d7c2bca;
    *(undefined1 **)(puVar12 + -8) = puVar12;
    uVar10 = in_RAX & 0xffffffff;
    *(char **)(uVar10 - 8) = param_2;
    pbVar4 = unaff_RDI + 4;
    puVar11 = (undefined8 *)(uVar10 - 0x10);
    *(undefined8 **)(uVar10 - 0x10) = unaff_RBP;
    cVar5 = '\x01';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar11 = puVar11 + -1;
      *puVar11 = *unaff_RBP;
      cVar5 = cVar5 + -1;
    } while ('\0' < cVar5);
    *(ulonglong *)(uVar10 - 0x20) = uVar10 - 0x10;
    uVar13 = (uint)CONCAT71((int7)(((ulonglong)(puVar12 + -8) & 0xffffff1b) >> 8),
                            (char)((ulonglong)(puVar12 + -8) & 0xffffff1b) + 'd');
    pbVar1 = (byte *)(param_2 + -0x57);
    bVar2 = *pbVar1;
    bVar8 = (byte)unaff_RBX;
    bVar3 = *pbVar1;
    *pbVar1 = bVar3 + bVar8 + (0x44c477b8 < uVar13);
    if ((POPCOUNT(*pbVar1) & 1U) != 0) {
      if ((char)(unaff_R13B + *(char *)((longlong)unaff_RSI + -0x4d) +
                (CARRY1(bVar2,bVar8) || CARRY1(bVar3 + bVar8,0x44c477b8 < uVar13))) != '\0') {
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pbVar4 = *pbVar4 + (char)(uVar13 + 0xbb3b8847 >> 8);
    uVar13 = (uint)pbVar4 & *(uint *)(param_1 * 3 + -0xc);
    if ((int)uVar13 < 1) {
      out((short)param_2,uRam1e0062742ebbaf04);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar9 = CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),CONCAT11(0xe,bVar8));
    in_RAX = 0xb4874bb2;
    pbVar4 = (byte *)((ulonglong)uVar13 + 1);
    unaff_RSI = (uint *)((longlong)unaff_RSI + 1);
    puVar12 = (undefined1 *)(uVar10 - 0x9728);
    *(byte **)(uVar10 - 0x9728) = pbVar4;
    unaff_RBX = CONCAT71((int7)((ulonglong)uVar9 >> 8),
                         bVar8 + *param_2 + ((uint)(uVar10 - 0x9720) < (uint)uVar9));
    unaff_RDI = (byte *)((ulonglong)uVar13 + 2);
    in_ZF = *pbVar4 == 0xb2;
    if (*pbVar4 < 0xb2) {
      if ((bool)in_ZF) {
        *unaff_RSI = *unaff_RSI | 0xa091b3f5;
        halt_baddata();
      }
      if (param_1 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar6 = (undefined1 *)(uVar10 - 0x9728);
    unaff_RBP = (undefined8 *)(uVar10 - 0x10);
  } while (!(bool)in_ZF);
  if (*pbVar4 < 0xb3) {
    unaff_RDI[0] = 0xb2;
    unaff_RDI[1] = 0x4b;
    unaff_RDI[2] = 0x87;
    unaff_RDI[3] = 0xb4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined8 *)(uVar10 - 0x9730) = 0x14d7c2bc5;
  func_0x000193f3f6ca();
  bVar7 = (byte)param_1;
LAB_14d7c2bca:
  *unaff_RDI = *unaff_RDI | bVar7;
  *(undefined1 **)(puVar12 + -8) = puVar12;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7c2bac FUN_14d7c2bac body=12 status=ok
// SIG undefined FUN_14d7c2bac(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2bac(void)

{
  longlong unaff_RDI;
  undefined1 auStack_8 [8];
  
  LOCK();
  *(int *)(unaff_RDI + -0x2fa658f2) = (int)auStack_8;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2bf6 FUN_14d7c2bf6 body=2 status=ok
// SIG undefined FUN_14d7c2bf6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2bf6(void)

{
  in(200);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2bfa FUN_14d7c2bfa body=2 status=ok
// SIG undefined FUN_14d7c2bfa(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c2bfa(longlong param_1)

{
  in(0x53);
  if (param_1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014d7c2c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulonglong)_DAT_00000074)();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2c03 FUN_14d7c2c03 body=4 status=ok
// SIG undefined FUN_14d7c2c03(void)

void FUN_14d7c2c03(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014d7c2c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulonglong)*(uint *)(param_1 + 0x74))();
  return;
}



// FUNCTION 14d7c2c0c FUN_14d7c2c0c body=11 status=ok
// SIG undefined FUN_14d7c2c0c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2c0c(undefined8 param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 in_RAX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  uVar3 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + -8) + 0x5dc3630c;
  *(char *)(unaff_RDI + 0x2b) = *(char *)(unaff_RDI + 0x2b) + (char)((ulonglong)param_2 >> 8);
  puVar1 = (uint *)((ulonglong)uVar3 + 3);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + (uint)&stack0x00000000;
  if ((char)((char)uVar3 + 'Z' + CARRY4(uVar2,(uint)&stack0x00000000)) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*(undefined4 *)(unaff_RSI + 1),(short)param_2);
  *(int *)(unaff_RDI + -0x4830cdc3) = *(int *)(unaff_RDI + -0x4830cdc3) + 0x7d;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2c18 FUN_14d7c2c18 body=3 status=ok
// SIG undefined FUN_14d7c2c18(void)

byte FUN_14d7c2c18(void)

{
  byte in_AL;
  
  return in_AL | 99;
}



// FUNCTION 14d7c2c24 FUN_14d7c2c24 body=4 status=ok
// SIG undefined FUN_14d7c2c24(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2c24(undefined8 param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  char in_AL;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_retaddr;
  undefined1 auStackX_8 [32];
  
  *(char *)(unaff_RDI + 0x2a) = *(char *)(unaff_RDI + 0x2a) + (char)((ulonglong)param_2 >> 8);
  puVar1 = (uint *)(unaff_retaddr + 3);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + (uint)auStackX_8;
  if ((char)(in_AL + '|' + CARRY4(uVar2,(uint)auStackX_8)) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*unaff_RSI,(short)param_2);
  *(int *)(unaff_RDI + -0x4830cdc4) = *(int *)(unaff_RDI + -0x4830cdc4) + 0x7d;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2c42 FUN_14d7c2c42 body=4 status=ok
// SIG undefined FUN_14d7c2c42(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2c42(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  char *pcVar2;
  uint uVar3;
  longlong in_RAX;
  uint unaff_EBX;
  uint uVar4;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_retaddr;
  
  uVar4 = unaff_EBX & *(uint *)(unaff_RBP + -0x77 + in_RAX);
  if (uVar4 == 0) {
    *(int *)(unaff_retaddr + -0x4830cdc4) = *(int *)(unaff_retaddr + -0x4830cdc4) + 0x7d;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar2 = (char *)(unaff_RBP + -0x55b2c18e + (ulonglong)uVar4 * 2);
  *pcVar2 = *pcVar2 + (char)param_2;
  XACQUIRE();
  LOCK();
  puVar1 = (uint *)((ulonglong)uVar4 + 0x17);
  uVar3 = *puVar1;
  *puVar1 = uVar4;
  UNLOCK();
  pcVar2 = (char *)(unaff_RSI + param_2 * 4);
  *pcVar2 = *pcVar2 + (char)(uVar3 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2c46 FUN_14d7c2c46 body=22 status=ok
// SIG undefined FUN_14d7c2c46(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2c46(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  longlong unaff_RSI;
  bool in_ZF;
  longlong unaff_retaddr;
  
  if (in_ZF) {
    *(int *)(unaff_retaddr + -0x4830cdc4) = *(int *)(unaff_retaddr + -0x4830cdc4) + 0x7d;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar2 = (char *)(unaff_RBP + -0x55b2c18e +
                   CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) * 2
                   );
  *pcVar2 = *pcVar2 + (char)param_2;
  XACQUIRE();
  LOCK();
  puVar1 = (undefined4 *)
           (CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) + 0x17);
  uVar3 = *puVar1;
  *puVar1 = CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  UNLOCK();
  pcVar2 = (char *)(unaff_RSI + param_2 * 4);
  *pcVar2 = *pcVar2 + (char)((uint)uVar3 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2c62 FUN_14d7c2c62 body=2 status=ok
// SIG undefined FUN_14d7c2c62(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2c62(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2c72 FUN_14d7c2c72 body=9 status=ok
// SIG undefined FUN_14d7c2c72(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2c72(byte param_1,byte param_2)

{
  byte *pbVar1;
  undefined1 in_AL;
  byte bVar2;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte *unaff_RSI;
  undefined4 *unaff_RDI;
  byte in_CF;
  char in_PF;
  char in_AF;
  char in_ZF;
  char in_SF;
  
  bVar2 = in_SF << 7 | in_ZF << 6 | in_AF << 4 | in_PF << 2 | 2U | in_CF;
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL))) + 0x56);
  *pbVar1 = *pbVar1 & param_1;
  *unaff_RSI = *unaff_RSI | param_2;
  *unaff_RDI = CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2c90 FUN_14d7c2c90 body=1 status=ok
// SIG undefined FUN_14d7c2c90(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2c90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2c95 FUN_14d7c2c95 body=10 status=ok
// SIG undefined FUN_14d7c2c95(void)

undefined1 FUN_14d7c2c95(void)

{
  int *piVar1;
  undefined1 uVar2;
  int unaff_EDI;
  undefined4 unaff_0000003c;
  bool in_PF;
  
  uVar2 = in(0x44);
  if (!in_PF) {
    piVar1 = (int *)(CONCAT44(unaff_0000003c,unaff_EDI) + -0x73);
    *piVar1 = *piVar1 - unaff_EDI;
    return uVar2;
  }
  return uVar2;
}



// FUNCTION 14d7c2ca1 FUN_14d7c2ca1 body=16 status=ok
// SIG undefined FUN_14d7c2ca1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2ca1(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  code *pcVar4;
  ushort in_AX;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  bool in_CF;
  bool in_PF;
  bool in_ZF;
  
  if (in_PF) {
    if (in_CF || in_ZF) {
      *(int *)(unaff_RDI + -0x4830cdc4) = *(int *)(unaff_RDI + -0x4830cdc4) + 0x7d;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar2 = (char *)(unaff_RBP + -0x55b2c18e +
                     CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) *
                     2);
    *pcVar2 = *pcVar2 + (char)param_2;
    XACQUIRE();
    LOCK();
    puVar1 = (undefined4 *)
             (CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) + 0x17);
    uVar3 = *puVar1;
    *puVar1 = CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
    UNLOCK();
    pcVar2 = (char *)(unaff_RSI + param_2 * 4);
    *pcVar2 = *pcVar2 + (char)((uint)uVar3 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar2 = (char *)(param_1 + 0x59daaebf);
  *pcVar2 = *pcVar2 + (char)param_1;
  if (param_1 == 1 || *pcVar2 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)(unaff_RSI + 0x6d) = *(byte *)(unaff_RSI + 0x6d) & (byte)(in_AX / unaff_BH);
  pcVar4 = (code *)swi(1);
  (*pcVar4)();
  return;
}



// FUNCTION 14d7c2cb3 FUN_14d7c2cb3 body=5 status=ok
// SIG undefined FUN_14d7c2cb3(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0xf67c08aa) */

void FUN_14d7c2cb3(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  byte in_AL;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  longlong unaff_RSI;
  byte *unaff_RDI;
  
  *(uint *)(param_2 + -0x32) = *(uint *)(param_2 + -0x32) >> 1;
  *unaff_RDI = in_AL & 0x96;
  XACQUIRE();
  LOCK();
  puVar1 = (undefined4 *)
           (CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) + 0x17);
  uVar3 = *puVar1;
  *puVar1 = CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  UNLOCK();
  pcVar2 = (char *)(unaff_RSI + param_2 * 4);
  *pcVar2 = *pcVar2 + (char)((uint)uVar3 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2cbb FUN_14d7c2cbb body=33 status=ok
// SIG undefined FUN_14d7c2cbb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2cbb(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  bool in_CF;
  
  if (!in_CF) {
    *unaff_RDI = 0;
    XACQUIRE();
    LOCK();
    puVar1 = (undefined4 *)
             (CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) + 0x17);
    uVar3 = *puVar1;
    *puVar1 = CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
    UNLOCK();
    pcVar2 = (char *)(unaff_RSI + param_2 * 4);
    *pcVar2 = *pcVar2 + (char)((uint)uVar3 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2cd1 FUN_14d7c2cd1 body=19 status=ok
// SIG undefined FUN_14d7c2cd1(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0xf67c08aa) */

void FUN_14d7c2cd1(longlong param_1,float10 *param_2)

{
  undefined4 *puVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  undefined4 uVar5;
  double dVar6;
  byte bVar7;
  code *pcVar8;
  byte in_AL;
  byte unaff_BL;
  undefined1 unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  longlong unaff_RSI;
  byte bVar9;
  byte *unaff_RDI;
  bool bVar10;
  byte bVar11;
  float10 in_ST0;
  
  bVar10 = unaff_BL < 0x2a;
  dVar6 = *(double *)
           (CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
           -0x522ae9ea);
  if (param_1 == 0) {
    *(uint *)((longlong)param_2 + -0x32) = *(uint *)((longlong)param_2 + -0x32) >> 1;
    *unaff_RDI = in_AL & 0x96;
    XACQUIRE();
    LOCK();
    puVar1 = (undefined4 *)
             (CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) + 0x17);
    uVar5 = *puVar1;
    *puVar1 = CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
    UNLOCK();
    pcVar3 = (char *)(unaff_RSI + (longlong)param_2 * 4);
    *pcVar3 = *pcVar3 + (char)((uint)uVar5 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar2 = (byte *)(param_1 + 0x28);
  bVar9 = (byte)unaff_RDI;
  bVar4 = *pbVar2;
  bVar7 = *pbVar2 + bVar9;
  bVar11 = CARRY1(*pbVar2,bVar9) || CARRY1(bVar7,bVar10);
  *pbVar2 = bVar7 + bVar10;
  if (SCARRY1(bVar4,bVar9) == SCARRY1(bVar7,bVar10)) {
    *param_2 = (float10)dVar6 - in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00011d4908d5();
  pcVar8 = (code *)swi(3);
  (*pcVar8)(((int)param_1 - *(int *)(param_1 + -0x1fd2acb0)) - (uint)bVar11);
  return;
}



// FUNCTION 14d7c2ce5 FUN_14d7c2ce5 body=4 status=ok
// SIG undefined FUN_14d7c2ce5(void)

undefined1 FUN_14d7c2ce5(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  
  uVar1 = in(param_2);
  return uVar1;
}



// FUNCTION 14d7c2ced FUN_14d7c2ced body=34 status=ok
// SIG undefined FUN_14d7c2ced(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c2d18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c2ced(ulonglong param_1,undefined2 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  code *pcVar3;
  uint in_EAX;
  byte bVar4;
  char *unaff_RSI;
  undefined4 *unaff_RDI;
  
  bVar4 = (byte)param_1 & 7;
  bVar4 = (byte)param_2 >> bVar4 | (byte)param_2 << 8 - bVar4;
  bVar2 = (param_1 & 0x1f) != 0;
  if ((bVar2 || 0x65f8ccdf < in_EAX) && (!bVar2 || -1 < (char)bVar4)) {
    uVar1 = in(CONCAT11((char)((ushort)param_2 >> 8),bVar4));
    *unaff_RDI = uVar1;
    pcVar3 = (code *)swi(1);
    (*pcVar3)();
    return;
  }
  *unaff_RSI = (*unaff_RSI - (byte)param_1) + -1;
  *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) & (byte)(param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2d33 FUN_14d7c2d33 body=30 status=ok
// SIG undefined FUN_14d7c2d33(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c2d4f) overlaps instruction at (ram,0x00014d7c2d4e)
    */

void FUN_14d7c2d33(undefined8 param_1,char param_2)

{
  byte *pbVar1;
  char *pcVar2;
  longlong in_RAX;
  longlong unaff_RBP;
  short unaff_SI;
  
  if (-1 < *(int *)(in_RAX + 0xfd24b09) - (int)in_RAX) {
    pbVar1 = (byte *)((ulonglong)(uint)(int)unaff_SI * 5 + 0x4e);
    *pbVar1 = *pbVar1 << 1 | (byte)unaff_SI < 0xf9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar2 = (char *)(unaff_RBP + 0x3e4a04b4 + (ulonglong)(uint)(int)unaff_SI * 8);
  *pcVar2 = *pcVar2 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2d79 FUN_14d7c2d79 body=3 status=ok
// SIG undefined FUN_14d7c2d79(void)

void FUN_14d7c2d79(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7c2d8d FUN_14d7c2d8d body=5 status=ok
// SIG undefined FUN_14d7c2d8d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2d8d(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2d9e FUN_14d7c2d9e body=1 status=ok
// SIG undefined FUN_14d7c2d9e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2d9e(char *param_1,undefined2 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined8 in_RAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  uVar1 = in(param_2);
  uVar2 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar1);
  *param_1 = *param_1 + unaff_BH + (uVar2 < 0xb79233d3);
  LOCK();
  *(uint *)(unaff_RDI + 0xf450029) = CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  UNLOCK();
  *(int *)(unaff_RBP + 0x54cbe7a4) = *(int *)(unaff_RBP + 0x54cbe7a4) + uVar2 + 0x486dcc2d;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2da2 thunk_EXT_FUN_ecf2bbe2 body=7 status=ok
// SIG undefined thunk_EXT_FUN_ecf2bbe2(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_ecf2bbe2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2dae FUN_14d7c2dae body=1 status=ok
// SIG undefined FUN_14d7c2dae(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2dae(void)

{
  int in_EAX;
  undefined4 unaff_EBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  LOCK();
  *(undefined4 *)(unaff_RDI + 0xf450029) = unaff_EBX;
  UNLOCK();
  *(int *)(unaff_RBP + 0x54cbe7a4) = *(int *)(unaff_RBP + 0x54cbe7a4) + in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2dc3 FUN_14d7c2dc3 body=5 status=ok
// SIG undefined FUN_14d7c2dc3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2dc3(void)

{
  int in_EAX;
  longlong unaff_RBP;
  byte in_CF;
  
  *(int *)(unaff_RBP + 0x54cbe7a4) = *(int *)(unaff_RBP + 0x54cbe7a4) + in_EAX + (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2dc8 FUN_14d7c2dc8 body=6 status=ok
// SIG undefined FUN_14d7c2dc8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2dc8(void)

{
  int in_EAX;
  longlong unaff_RBP;
  byte in_CF;
  
  *(int *)(unaff_RBP + 0x54cbe7a4) = *(int *)(unaff_RBP + 0x54cbe7a4) + in_EAX + (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2ddc FUN_14d7c2ddc body=1 status=ok
// SIG undefined FUN_14d7c2ddc(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2ddc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2de0 FUN_14d7c2de0 body=32 status=ok
// SIG undefined FUN_14d7c2de0(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c2e08) overlaps instruction at (ram,0x00014d7c2e07)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7c2de9) */
/* WARNING: Removing unreachable block (ram,0x00014d7c2e08) */
/* WARNING: Removing unreachable block (ram,0x00014d7c2df2) */
/* WARNING: Removing unreachable block (ram,0x00014d7c2e02) */
/* WARNING: Removing unreachable block (ram,0x00014d7c2e65) */
/* WARNING: Removing unreachable block (ram,0x00014d7c2e09) */

void FUN_14d7c2de0(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined1 in_AL;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = in_AL;
  *(int *)(unaff_RSI + -0x72ff8443) = *(int *)(unaff_RSI + -0x72ff8443) + 0x5b;
  uVar1 = in(param_2);
  *(undefined4 *)(unaff_RDI + 1) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2df5 FUN_14d7c2df5 body=11 status=ok
// SIG undefined FUN_14d7c2df5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2df5(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong unaff_RSI;
  
  iVar3 = *(int *)(unaff_RSI + -0x6320619f) * -0x59;
  in(0x26);
  puVar1 = (uint *)((ulonglong)
                    CONCAT22((short)((uint)iVar3 >> 0x10),
                             CONCAT11((byte)((uint)iVar3 >> 8) & (byte)param_1,(char)iVar3)) + 0x18)
  ;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + param_1;
  if (CARRY4(uVar2,param_1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2e0a FUN_14d7c2e0a body=4 status=ok
// SIG undefined FUN_14d7c2e0a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2e0a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2e0e FUN_14d7c2e0e body=7 status=ok
// SIG undefined FUN_14d7c2e0e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2e0e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2e17 FUN_14d7c2e17 body=2 status=ok
// SIG undefined FUN_14d7c2e17(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2e17(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2e34 FUN_14d7c2e34 body=1 status=ok
// SIG undefined FUN_14d7c2e34(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c2e72) overlaps instruction at (ram,0x00014d7c2e71)
    */

void FUN_14d7c2e34(longlong param_1)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  undefined4 in_EAX;
  char cVar6;
  int iVar5;
  longlong unaff_RBP;
  char *unaff_RDI;
  
  iVar5 = iRam00000001b64cb2f0 * 0x2c;
  uRam234d52b434774639 = (undefined1)in_EAX;
  uRam791537cda15117e7 = in_EAX;
  do {
    *(uint *)(param_1 + 0x18130082) = *(uint *)(param_1 + 0x18130082) >> 1;
    pcVar1 = (char *)(param_1 + 0x21);
    *pcVar1 = *pcVar1 + '\x01';
    cVar3 = *pcVar1;
  } while (*pcVar1 != '\0');
  cVar6 = (char)((uint)iVar5 >> 8);
  if (param_1 + -1 != 0 && *pcVar1 == '\0') {
    *unaff_RDI = *unaff_RDI + cVar6;
  }
  else {
    pbVar2 = (byte *)((ulonglong)(uint)(int)(short)in_EAX + unaff_RBP * 2);
    bVar4 = (byte)(param_1 + -1) & 7;
    *pbVar2 = *pbVar2 << bVar4 | *pbVar2 >> 8 - bVar4;
    if ((POPCOUNT(cVar3) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  LOCK();
  *unaff_RDI = *unaff_RDI + cVar6;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2e38 FUN_14d7c2e38 body=27 status=ok
// SIG undefined FUN_14d7c2e38(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2e38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2e59 FUN_14d7c2e59 body=3 status=ok
// SIG undefined FUN_14d7c2e59(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c2e72) overlaps instruction at (ram,0x00014d7c2e71)
    */

void FUN_14d7c2e59(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  longlong in_RAX;
  char cVar5;
  longlong unaff_RBP;
  uint unaff_ESI;
  char *unaff_RDI;
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  puVar1 = (uint *)(unaff_RBP + -0xd);
  *puVar1 = *puVar1 & unaff_ESI;
  uVar3 = *puVar1;
  if (param_1 + -1 == 0 || *puVar1 != 0) {
    pbVar2 = (byte *)(in_RAX + unaff_RBP * 2);
    bVar4 = (byte)(param_1 + -1) & 7;
    *pbVar2 = *pbVar2 << bVar4 | *pbVar2 >> 8 - bVar4;
    if ((POPCOUNT(uVar3 & 0xff) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *unaff_RDI = *unaff_RDI + cVar5;
  }
  LOCK();
  *unaff_RDI = *unaff_RDI + cVar5;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2e62 FUN_14d7c2e62 body=8 status=ok
// SIG undefined FUN_14d7c2e62(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2e62(void)

{
  longlong unaff_RBX;
  uint unaff_EBP;
  
  *(uint *)(unaff_RBX + 0x77) = *(uint *)(unaff_RBX + 0x77) | unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2e6a FUN_14d7c2e6a body=1 status=ok
// SIG undefined FUN_14d7c2e6a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2e6a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2e6e FUN_14d7c2e6e body=12 status=ok
// SIG undefined FUN_14d7c2e6e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2e6e(undefined8 param_1,undefined8 param_2)

{
  char *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2e8c FUN_14d7c2e8c body=8 status=ok
// SIG undefined FUN_14d7c2e8c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2e8c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2e98 FUN_14d7c2e98 body=57 status=ok
// SIG undefined FUN_14d7c2e98(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2e98(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined8 in_RAX;
  byte unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  
  uVar2 = in(0x6a);
  iVar4 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar2) - *(int *)(unaff_RSI + -0x2238ea00))
          - (uint)(*(uint *)(unaff_RDI + -0x10) < (uint)&stack0x00000000);
  uVar2 = in((short)param_2);
  *unaff_RDI = uVar2;
  cVar3 = (char)iVar4;
  out((short)param_2,CONCAT22((short)((uint)iVar4 >> 0x10),CONCAT11(DAT_137c03eaa,cVar3)));
  piVar1 = (int *)(param_2 + CONCAT71((int7)((ulonglong)param_1 >> 8),(byte)param_1 & unaff_BL) * 4)
  ;
  iVar4 = *piVar1;
  *piVar1 = *piVar1 >> 7;
  DAT_f50008e474559dac = (cVar3 + -0x6e) - ((iVar4 >> 6 & 1U) != 0);
  *(ulonglong *)(unaff_RBP + 8) = CONCAT71(unaff_00000019,unaff_BL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2ed2 FUN_14d7c2ed2 body=3 status=ok
// SIG undefined FUN_14d7c2ed2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2ed2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x76);
  (*pcVar1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2eda FUN_14d7c2eda body=1 status=ok
// SIG undefined FUN_14d7c2eda(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2eda(void)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2ede FUN_14d7c2ede body=2 status=ok
// SIG undefined FUN_14d7c2ede(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2ede(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2ee2 FUN_14d7c2ee2 body=3 status=ok
// SIG undefined FUN_14d7c2ee2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2ee2(undefined8 param_1,undefined2 param_2)

{
  undefined1 *unaff_RSI;
  bool in_SF;
  
  if (!in_SF) {
    out(*unaff_RSI,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2ee6 FUN_14d7c2ee6 body=14 status=ok
// SIG undefined FUN_14d7c2ee6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2ee6(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 in_EAX;
  int unaff_EBX;
  uint uVar5;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  undefined1 *unaff_RDI;
  float10 in_ST0;
  
  uVar5 = unaff_EBX - *(int *)(param_2 + -0x6f858d00);
  *unaff_RSI = (longlong)in_ST0;
  puVar1 = (uint *)((ulonglong)uVar5 - 0x7f);
  *puVar1 = *puVar1 & 0x5b;
  if ((int)*puVar1 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = in((short)param_2);
  *unaff_RDI = uVar3;
  out((short)param_2,CONCAT22((short)((uint)in_EAX >> 0x10),CONCAT11(DAT_137c03eaa,(char)in_EAX)));
  piVar2 = (int *)(param_2 +
                  CONCAT71((int7)((ulonglong)param_1 >> 8),(byte)param_1 & (byte)uVar5) * 4);
  iVar4 = *piVar2;
  *piVar2 = *piVar2 >> 7;
  DAT_f50008e474559dac = ((char)in_EAX + -0x6e) - ((iVar4 >> 6 & 1U) != 0);
  *(ulonglong *)(unaff_RBP + 8) = (ulonglong)uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2ef6 FUN_14d7c2ef6 body=4 status=ok
// SIG undefined FUN_14d7c2ef6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2ef6(int param_1)

{
  bool in_ZF;
  
  if (param_1 != 1 && in_ZF != false) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_ZF) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2efa FUN_14d7c2efa body=10 status=ok
// SIG undefined FUN_14d7c2efa(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2efa(void)

{
  bool in_ZF;
  
  if (in_ZF) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2f18 FUN_14d7c2f18 body=24 status=ok
// SIG undefined FUN_14d7c2f18(void)

/* WARNING: Control flow encountered bad instruction data */

undefined2 FUN_14d7c2f18(void)

{
  char *pcVar1;
  char cVar2;
  longlong in_RAX;
  char unaff_BH;
  undefined1 unaff_BPL;
  longlong unaff_RDI;
  undefined1 *in_R11;
  char in_AF;
  bool in_ZF;
  unkbyte10 in_ST0;
  longlong unaff_retaddr;
  
  LOCK();
  *in_R11 = unaff_BPL;
  UNLOCK();
  if (!in_ZF) {
    *(int *)(in_RAX + -0x65) = *(int *)(in_RAX + -0x65) << ((byte)unaff_retaddr & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (unaff_retaddr + -1 == 0 || in_ZF == false) {
    log2(in_ST0);
    *(int *)(in_RAX + -0x3c972b00) = (int)(unaff_retaddr + -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(unaff_RDI * 9 + -0x4b605d64);
  *pcVar1 = *pcVar1 + unaff_BH;
  cVar2 = (byte)in_RAX - 2;
  return CONCAT11((cVar2 < '\0') << 7 | (cVar2 == '\0') << 6 | in_AF << 4 |
                  ((POPCOUNT(cVar2) & 1U) == 0) << 2 | 2U | (byte)in_RAX < 2,cVar2);
}



// FUNCTION 14d7c2f31 FUN_14d7c2f31 body=14 status=ok
// SIG undefined FUN_14d7c2f31(void)

/* WARNING: Control flow encountered bad instruction data */

undefined2 FUN_14d7c2f31(uint *param_1,longlong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint *in_RAX;
  byte bVar8;
  char unaff_BH;
  undefined1 unaff_BPL;
  undefined4 *unaff_RSI;
  byte *unaff_RDI;
  undefined1 *in_R11;
  undefined2 in_DS;
  bool in_CF;
  char in_AF;
  bool in_ZF;
  unkbyte10 in_ST0;
  
  *(undefined2 *)((longlong)unaff_RSI + 0x3a6c360b + (longlong)in_RAX) = in_DS;
  if (in_CF) {
    out(*unaff_RSI,(short)param_2);
    pbVar1 = (byte *)(param_2 + 0x44);
    bVar8 = (byte)param_1;
    *pbVar1 = *pbVar1 >> (bVar8 & 7) | *pbVar1 << 8 - (bVar8 & 7);
    bVar5 = ((ulonglong)param_1 & 0x1f) != 0;
    bVar3 = *pbVar1;
    bVar4 = *unaff_RDI;
    *unaff_RDI = *unaff_RDI >> (bVar8 & 0x1f);
    bVar6 = ((ulonglong)param_1 & 0x1f) != 0;
    *param_1 = *param_1 << (bVar8 & 0x1f) |
               (uint)(CONCAT14(!bVar6 & (!bVar5 & in_CF | (bVar5 && (char)bVar3 < '\0')) |
                               (bVar6 && (bVar4 >> (bVar8 & 0x1f) - 1 & 1) != 0),*param_1) >>
                     0x21 - (bVar8 & 0x1f));
  }
  else {
    LOCK();
    *in_R11 = unaff_BPL;
    UNLOCK();
    param_1 = in_RAX;
    if (in_ZF) {
      if (in_RAX != (uint *)&DAT_00000001) {
        pcVar2 = (char *)((longlong)unaff_RDI * 9 + -0x4b605d64);
        *pcVar2 = *pcVar2 + unaff_BH;
        cVar7 = (byte)in_RAX - 2;
        return CONCAT11((cVar7 < '\0') << 7 | (cVar7 == '\0') << 6 | in_AF << 4 |
                        ((POPCOUNT(cVar7) & 1U) == 0) << 2 | 2U | (byte)in_RAX < 2,cVar7);
      }
      log2(in_ST0);
      uRamffffffffc368d501 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(int *)((longlong)in_RAX + -0x65) = *(int *)((longlong)in_RAX + -0x65) << ((byte)param_1 & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2f42 FUN_14d7c2f42 body=6 status=ok
// SIG undefined FUN_14d7c2f42(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2f42(uint *param_1)

{
  int *piVar1;
  byte bVar2;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  undefined1 in_CF;
  
  bVar2 = (byte)param_1 & 0x1f;
  *param_1 = *param_1 << bVar2 | (uint)(CONCAT14(in_CF,*param_1) >> 0x21 - bVar2);
  piVar1 = (int *)(CONCAT71(in_register_00000001,in_AL) + -0x65);
  *piVar1 = *piVar1 << ((byte)param_1 & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2f56 FUN_14d7c2f56 body=2 status=ok
// SIG undefined FUN_14d7c2f56(void)

void FUN_14d7c2f56(void)

{
  char *pcVar1;
  undefined1 in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  byte unaff_BH;
  longlong unaff_RDI;
  
  pcVar1 = (char *)(unaff_RDI * 9 + 0xfeb49fa29c);
  *pcVar1 = *pcVar1 + (unaff_BH | *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  return;
}



// FUNCTION 14d7c2f5b FUN_14d7c2f5b body=7 status=ok
// SIG undefined FUN_14d7c2f5b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2f5b(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong unaff_RBP;
  
  piVar1 = (int *)(unaff_RBP + -0x2f9c3bcd + param_2 * 4);
  *piVar1 = *piVar1 - (int)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2f6b FUN_14d7c2f6b body=7 status=ok
// SIG undefined FUN_14d7c2f6b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2f6b(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2f7f FUN_14d7c2f7f body=27 status=ok
// SIG undefined FUN_14d7c2f7f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2f7f(void)

{
  char in_AL;
  
  out(0x74,in_AL + -0x29);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2f9b FUN_14d7c2f9b body=1 status=ok
// SIG undefined FUN_14d7c2f9b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2f9b(undefined8 param_1,undefined2 param_2)

{
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2f9f FUN_14d7c2f9f body=14 status=ok
// SIG undefined FUN_14d7c2f9f(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c2fbe) overlaps instruction at (ram,0x00014d7c2fbc)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c2f9f(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  int *piVar1;
  byte *pbVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined4 *puVar5;
  code *pcVar6;
  undefined1 in_AL;
  int iVar7;
  longlong lVar8;
  byte bVar9;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  uint uVar10;
  int *in_R10;
  float10 in_ST0;
  
  pcVar6 = (code *)swi(0x20);
  DAT_a3e636b3008d7845 = in_AL;
  (*pcVar6)();
  *unaff_RDI = *unaff_RSI;
  iVar7 = in(0x88);
  LOCK();
  uVar3 = *(undefined1 *)(ulonglong)(iVar7 + 0x1e131555);
  *(undefined1 *)(ulonglong)(iVar7 + 0x1e131555) = (char)((ulonglong)param_1 >> 8);
  lVar8 = CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(uVar3,(char)param_1));
  UNLOCK();
  do {
    pbVar2 = (byte *)((longlong)unaff_RDI + 0x422e4c95);
    bVar4 = *pbVar2;
    bVar9 = (byte)(unaff_RBX >> 8);
    *pbVar2 = *pbVar2 + bVar9;
    uVar10 = (int)param_4 + *in_R10 + (uint)CARRY1(bVar4,bVar9);
    param_4 = (ulonglong)uVar10;
    unaff_RBX = unaff_RBX & 0xffffffffffffff00;
  } while ((POPCOUNT(uVar10 & 0xff) & 1U) == 0);
  while( true ) {
    unaff_RDI = unaff_RDI + 1;
    puVar5 = unaff_RSI + 1;
    if (lVar8 == 0) break;
    lVar8 = lVar8 + -1;
    *unaff_RDI = *puVar5;
    unaff_RSI = puVar5;
  }
  out(0x5ce3,((char)iVar7 + 0x28U | 0xd9) << 1);
  _DAT_bb493cde = _DAT_bb493cde | (uint)unaff_RBP;
  cRamffffffffcbc75f2f = cRamffffffffcbc75f2f + -0x1d;
  piVar1 = (int *)(unaff_RBP + 0x29);
  *piVar1 = *piVar1;
  uRam000000005e4a1ddf = *puVar5;
  if (-1 < *piVar1) {
    uVar10 = in(0x61);
    *(float *)(ulonglong)uVar10 = (float)in_ST0;
    *(int *)((longlong)unaff_RSI + unaff_RBP * 4 + 0x282890b6) = (int)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2fb5 FUN_14d7c2fb5 body=7 status=ok
// SIG undefined FUN_14d7c2fb5(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c2fbe) overlaps instruction at (ram,0x00014d7c2fbc)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c2fb5(undefined8 param_1,undefined4 param_2,undefined8 param_3,uint param_4)

{
  int *piVar1;
  byte *pbVar2;
  undefined1 uVar3;
  byte bVar4;
  int in_EAX;
  uint uVar5;
  longlong lVar6;
  char cVar7;
  byte bVar8;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  int *in_R10;
  float10 in_ST0;
  
  LOCK();
  uVar3 = *(undefined1 *)(ulonglong)(in_EAX + 0x1e131555);
  *(undefined1 *)(ulonglong)(in_EAX + 0x1e131555) = (char)((ulonglong)param_1 >> 8);
  lVar6 = CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(uVar3,(char)param_1));
  UNLOCK();
  do {
    pbVar2 = (byte *)((longlong)unaff_RDI + 0x422e4c91);
    bVar4 = *pbVar2;
    bVar8 = (byte)(unaff_RBX >> 8);
    *pbVar2 = *pbVar2 + bVar8;
    param_4 = param_4 + *in_R10 + (uint)CARRY1(bVar4,bVar8);
    unaff_RBX = unaff_RBX & 0xffffffffffffff00;
  } while ((POPCOUNT(param_4 & 0xff) & 1U) == 0);
  for (; lVar6 != 0; lVar6 = lVar6 + -1) {
    *unaff_RDI = *unaff_RSI;
    unaff_RSI = unaff_RSI + 1;
    unaff_RDI = unaff_RDI + 1;
  }
  cVar7 = (char)param_2;
  out(CONCAT11((char)((uint)param_2 >> 8) + cVar7,cVar7),((char)in_EAX + 0x28U | 0xd9) << 1);
  _DAT_bb493cde = _DAT_bb493cde | (uint)unaff_RBP;
  cRamffffffffcbc75f2f = cRamffffffffcbc75f2f + cVar7;
  piVar1 = (int *)(unaff_RBP + 0x29);
  *piVar1 = *piVar1;
  uRam000000005e4a1ddf = *unaff_RSI;
  if (-1 < *piVar1) {
    uVar5 = in(0x61);
    *(float *)(ulonglong)uVar5 = (float)in_ST0;
    *(int *)((longlong)unaff_RSI + unaff_RBP * 4 + 0x282890b2) = (int)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2feb FUN_14d7c2feb body=1 status=ok
// SIG undefined FUN_14d7c2feb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2feb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2ff7 FUN_14d7c2ff7 body=26 status=ok
// SIG undefined FUN_14d7c2ff7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2ff7(void)

{
  uint uVar1;
  longlong unaff_RBP;
  undefined4 *unaff_RDI;
  char in_SF;
  char in_OF;
  float10 in_ST0;
  undefined4 *unaff_retaddr;
  
  *unaff_RDI = *unaff_retaddr;
  if (in_OF != in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = in(0x61);
  *(float *)(ulonglong)uVar1 = (float)in_ST0;
  *(int *)((longlong)unaff_retaddr + unaff_RBP * 4 + 0x282890ba) = (int)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3018 FUN_14d7c3018 body=3 status=ok
// SIG undefined FUN_14d7c3018(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3018(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c301c FUN_14d7c301c body=6 status=ok
// SIG undefined FUN_14d7c301c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c301c(void)

{
  undefined4 in_EAX;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = in_EAX;
  in(0xf4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3024 FUN_14d7c3024 body=3 status=ok
// SIG undefined FUN_14d7c3024(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3024(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3028 FUN_14d7c3028 body=13 status=ok
// SIG undefined FUN_14d7c3028(void)

ushort FUN_14d7c3028(longlong param_1,undefined2 param_2)

{
  char cVar1;
  char in_AL;
  char unaff_BH;
  undefined8 *unaff_RBP;
  undefined1 *unaff_RSI;
  byte in_CF;
  char in_PF;
  char in_AF;
  char in_ZF;
  char in_SF;
  
  *(char *)(param_1 + -0x59) = *(char *)(param_1 + -0x59) + unaff_BH;
  cVar1 = in_AL - DAT_d7d928d5;
  *unaff_RBP = 0xd7d928d6;
  if ((POPCOUNT(cVar1) & 1U) != 0) {
    return (short)in_AL * (short)(char)param_2;
  }
  uRam00000000d7d928d6 = in(param_2);
  return CONCAT11(in_SF << 7 | in_ZF << 6 | in_AF << 4 | in_PF << 2 | 2U | in_CF,*unaff_RSI) |
         0x8f00;
}



// FUNCTION 14d7c3035 FUN_14d7c3035 body=21 status=ok
// SIG undefined FUN_14d7c3035(void)

uint FUN_14d7c3035(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined8 in_RAX;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  bool in_PF;
  
  if (!in_PF) {
    return (uint)(ushort)((short)(char)in_RAX * (short)(char)param_2);
  }
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  return (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),*unaff_RSI) | 0x85b48f00;
}



// FUNCTION 14d7c3049 FUN_14d7c3049 body=2 status=ok
// SIG undefined FUN_14d7c3049(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c3064) overlaps instruction at (ram,0x00014d7c305f)
    */

void FUN_14d7c3049(undefined8 param_1)

{
  code *pcVar1;
  uint uVar2;
  char *pcVar3;
  char cVar4;
  int *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  byte in_CF;
  float10 in_ST0;
  undefined1 auStackX_8 [32];
  
  cVar4 = (char)((ulonglong)param_1 >> 8);
  pcVar1 = (code *)swi(0xf4);
  pcVar3 = (char *)(*pcVar1)();
  *unaff_RBX = *unaff_RBX + (int)auStackX_8 + (uint)in_CF;
  if (-1 < *unaff_RBX) {
    *pcVar3 = *pcVar3 - cVar4;
  }
  uVar2 = in(0x61);
  *(float *)(ulonglong)uVar2 = (float)in_ST0;
  *(int *)(unaff_RSI + 0x282890b6 + unaff_RBP * 4) = (int)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3056 FUN_14d7c3056 body=22 status=ok
// SIG undefined FUN_14d7c3056(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3056(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong unaff_RSI;
  float10 in_ST0;
  
  uVar1 = in(0x61);
  *(float *)(ulonglong)uVar1 = (float)in_ST0;
  *(int *)(unaff_RSI + 0x282890b6 + unaff_RBP * 4) = (int)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3083 FUN_14d7c3083 body=5 status=ok
// SIG undefined FUN_14d7c3083(void)

/* WARNING: Control flow encountered bad instruction data */

uint FUN_14d7c3083(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined8 in_RAX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char in_SF;
  char in_OF;
  
  if (in_OF != in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((POPCOUNT((char)in_RAX - *(char *)(unaff_RDI + 4)) & 1U) != 0) {
    return (uint)(ushort)((short)(char)in_RAX * (short)(char)param_2);
  }
  uVar1 = in(param_2);
  *(undefined1 *)(unaff_RDI + 5) = uVar1;
  return (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),*(undefined1 *)(unaff_RSI + 4)) | 0x85b48f00;
}



// FUNCTION 14d7c309b FUN_14d7c309b body=16 status=ok
// SIG undefined FUN_14d7c309b(void)

void FUN_14d7c309b(void)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong unaff_RBX;
  longlong *unaff_RBP;
  ulonglong unaff_RSI;
  
  bVar3 = (byte)(unaff_RSI & 0xffffffff);
  uVar4 = CONCAT62((int6)((unaff_RSI & 0xffffffff) >> 0x10),CONCAT11(0x75,bVar3));
  bVar2 = (&stack0x5527eba7)[uVar4 * 8];
  if (bVar3 == bVar2) {
    (&stack0x5527eba7)[uVar4 * 8] = (byte)((ulonglong)unaff_RBX >> 8);
  }
  else {
    uVar4 = (ulonglong)bVar2;
  }
  *(char *)(unaff_RBX + 0x4d) = *(char *)(unaff_RBX + 0x4d) + '\x01';
  pbVar1 = (byte *)(unaff_RBX + 0x4c);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + (byte)uVar4;
  bVar3 = *pbVar1;
  *unaff_RBP = unaff_RBX;
  if (CARRY1(bVar2,(byte)uVar4) || bVar3 == 0) {
    return;
  }
  return;
}



// FUNCTION 14d7c30b0 FUN_14d7c30b0 body=4 status=ok
// SIG undefined FUN_14d7c30b0(void)

void FUN_14d7c30b0(void)

{
  bool in_CF;
  bool in_ZF;
  
  if (in_CF || in_ZF) {
    return;
  }
  return;
}



// FUNCTION 14d7c30b4 FUN_14d7c30b4 body=6 status=ok
// SIG undefined FUN_14d7c30b4(void)

void FUN_14d7c30b4(void)

{
  return;
}



// FUNCTION 14d7c30c5 FUN_14d7c30c5 body=8 status=ok
// SIG undefined FUN_14d7c30c5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c30c5(void)

{
  longlong in_RAX;
  
  *(char *)(in_RAX + -0x2ea2fd32) = *(char *)(in_RAX + -0x2ea2fd32) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c30dd FUN_14d7c30dd body=2 status=ok
// SIG undefined FUN_14d7c30dd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c30dd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c30e9 FUN_14d7c30e9 body=12 status=ok
// SIG undefined FUN_14d7c30e9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c30e9(void)

{
  uRam00000000199c8063 = 10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c30f5 FUN_14d7c30f5 body=2 status=ok
// SIG undefined FUN_14d7c30f5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c30f5(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3102 FUN_14d7c3102 body=14 status=ok
// SIG undefined FUN_14d7c3102(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3102(longlong param_1,undefined2 param_2)

{
  if (param_1 == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c310a FUN_14d7c310a body=21 status=ok
// SIG undefined FUN_14d7c310a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c310a(byte param_1,uint *param_2)

{
  char *pcVar1;
  bool bVar2;
  int in_EAX;
  int iVar3;
  uint uVar4;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *unaff_RDI;
  byte in_CF;
  ulonglong unaff_retaddr;
  
  iVar3 = (in_EAX + -0x2b9d4) - (uint)in_CF;
  *unaff_RDI = (char)iVar3;
  *param_2 = *param_2 >> (param_1 & 0x1f);
  bVar2 = (param_1 & 0x1f) == 0;
  if (bVar2 && iVar3 == 0 || !bVar2 && *param_2 == 0) {
    uVar4 = in((short)param_2);
    *(int *)(ulonglong)uVar4 = *(int *)(ulonglong)uVar4 + 9;
    pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x603f1bc8);
    *pcVar1 = (*pcVar1 - unaff_BH) - ((unaff_retaddr & 1) != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3124 FUN_14d7c3124 body=13 status=ok
// SIG undefined FUN_14d7c3124(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3124(void)

{
  char *pcVar1;
  int *in_RAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  ulonglong unaff_retaddr;
  
  *in_RAX = *in_RAX + 9;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x603f1bc8);
  *pcVar1 = (*pcVar1 - unaff_BH) - ((unaff_retaddr & 1) != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3134 FUN_14d7c3134 body=4 status=ok
// SIG undefined FUN_14d7c3134(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3134(void)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3138 FUN_14d7c3138 body=1 status=ok
// SIG undefined FUN_14d7c3138(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3138(void)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c313d FUN_14d7c313d body=20 status=ok
// SIG undefined FUN_14d7c313d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c313d(undefined8 param_1,undefined2 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  longlong unaff_RDI;
  undefined7 uVar3;
  
  uVar2 = FUN_161ec2f49();
  uVar3 = (undefined7)((ulonglong)uVar2 >> 8);
  *(int *)(unaff_RDI + -0x67b5d4ff) = *(int *)(unaff_RDI + -0x67b5d4ff) + -1;
  out(*unaff_RSI,param_2);
  *(uint *)(unaff_RBP + -0x6b8d445e) = *(uint *)(unaff_RBP + -0x6b8d445e) & (uint)&stack0x00000000;
  cVar1 = (char)uVar2 + -0x7b;
  *(char *)CONCAT71(uVar3,cVar1) = *(char *)CONCAT71(uVar3,cVar1) + '1';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3151 FUN_14d7c3151 body=16 status=ok
// SIG undefined FUN_14d7c3151(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3151(void)

{
  char in_AL;
  char cVar1;
  undefined7 in_register_00000001;
  char in_CF;
  
  cVar1 = (in_AL + -0x7b) - in_CF;
  *(char *)CONCAT71(in_register_00000001,cVar1) =
       *(char *)CONCAT71(in_register_00000001,cVar1) + '1';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3167 FUN_14d7c3167 body=4 status=ok
// SIG undefined FUN_14d7c3167(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3167(undefined8 param_1,longlong param_2)

{
  char cVar1;
  uint7 uVar2;
  uint uVar3;
  undefined1 uVar4;
  ulonglong in_RAX;
  undefined8 *puVar5;
  undefined8 *unaff_RBP;
  ulonglong unaff_RDI;
  undefined1 in_CF;
  undefined1 in_ZF;
  undefined8 *puVar6;
  
  while( true ) {
    if (!(bool)in_CF) {
      *(int *)(param_2 + 10) = (*(int *)(param_2 + 10) - (int)unaff_RBP) - (uint)(byte)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((bool)in_CF || (bool)in_ZF) break;
    uVar2 = (uint7)(unaff_RDI >> 8);
    unaff_RDI = in_RAX & 0xffffffff;
    uVar4 = in(0x29);
    uVar3 = (uint)CONCAT71(uVar2,uVar4);
    in_CF = uVar3 < 0x863e5fb9;
    in_ZF = uVar3 == 0x863e5fb9;
    puVar5 = (undefined8 *)((longlong)register0x00000020 + -8);
    puVar6 = (undefined8 *)((longlong)register0x00000020 + -8);
    *(undefined8 **)((longlong)register0x00000020 + -8) = unaff_RBP;
    cVar1 = '\x1c';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar5 = puVar5 + -1;
      *puVar5 = *unaff_RBP;
      cVar1 = cVar1 + -1;
    } while ('\0' < cVar1);
    *(undefined1 **)((longlong)register0x00000020 + -0xf0) =
         (undefined1 *)((longlong)register0x00000020 + -8);
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -0x10e);
    in(0x6a);
    in_RAX = (ulonglong)(uVar2 & 0xffffff) << 8;
    unaff_RBP = puVar6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c316b FUN_14d7c316b body=2 status=ok
// SIG undefined FUN_14d7c316b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c316b(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3181 FUN_14d7c3181 body=4 status=ok
// SIG undefined FUN_14d7c3181(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3181(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0xd7);
  (*pcVar1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3185 FUN_14d7c3185 body=2 status=ok
// SIG undefined FUN_14d7c3185(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3185(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0xd7);
  (*pcVar1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c318e FUN_14d7c318e body=5 status=ok
// SIG undefined FUN_14d7c318e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c318e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3196 FUN_14d7c3196 body=4 status=ok
// SIG undefined FUN_14d7c3196(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c31a8) */

void FUN_14d7c3196(void)

{
  byte *pbVar1;
  code *pcVar2;
  undefined8 in_RAX;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  
  in(0x16);
  pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x7fb200ed);
  *pbVar1 = *pbVar1 & (byte)((ulonglong)in_RAX >> 8);
  pcVar2 = (code *)swi(1);
  (*pcVar2)();
  return;
}



// FUNCTION 14d7c31ab FUN_14d7c31ab body=3 status=ok
// SIG undefined FUN_14d7c31ab(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c31ab(int param_1)

{
  longlong in_RAX;
  byte in_CF;
  
  *(int *)(in_RAX + 0x58) = *(int *)(in_RAX + 0x58) + param_1 + (uint)in_CF;
  LOCK();
  *(char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + -0x1c) = (char)param_1;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c31af FUN_14d7c31af body=20 status=ok
// SIG undefined FUN_14d7c31af(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c31af(undefined1 param_1)

{
  uint in_EAX;
  
  LOCK();
  *(undefined1 *)
   (ulonglong)CONCAT31((int3)((in_EAX ^ 0x85b8d59b) >> 8),(char)(in_EAX ^ 0x85b8d59b) + -0x1c) =
       param_1;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c31c7 FUN_14d7c31c7 body=10 status=ok
// SIG undefined FUN_14d7c31c7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c31c7(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c31e7 FUN_14d7c31e7 body=1 status=ok
// SIG undefined FUN_14d7c31e7(void)

void FUN_14d7c31e7(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7c3214 FUN_14d7c3214 body=5 status=ok
// SIG undefined FUN_14d7c3214(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3214(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3220 FUN_14d7c3220 body=9 status=ok
// SIG undefined FUN_14d7c3220(void)

void FUN_14d7c3220(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7c322c thunk_EXT_FUN_7378f210 body=7 status=ok
// SIG undefined thunk_EXT_FUN_7378f210(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_7378f210(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3234 FUN_14d7c3234 body=4 status=ok
// SIG undefined FUN_14d7c3234(void)

void FUN_14d7c3234(void)

{
  return;
}



// FUNCTION 14d7c3238 FUN_14d7c3238 body=6 status=ok
// SIG undefined FUN_14d7c3238(void)

void FUN_14d7c3238(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7c3244 FUN_14d7c3244 body=1 status=ok
// SIG undefined FUN_14d7c3244(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3244(undefined8 param_1,undefined2 param_2)

{
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3248 FUN_14d7c3248 body=11 status=ok
// SIG undefined FUN_14d7c3248(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3248(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3268 FUN_14d7c3268 body=2 status=ok
// SIG undefined FUN_14d7c3268(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3268(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3270 FUN_14d7c3270 body=25 status=ok
// SIG undefined FUN_14d7c3270(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c319f) */
/* WARNING: Removing unreachable block (ram,0x00014d7c3220) */
/* WARNING: Removing unreachable block (ram,0x00014d7c31a8) */
/* WARNING: Removing unreachable block (ram,0x00014d7c3266) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c3270(short *param_1)

{
  int *in_RAX;
  undefined8 unaff_RBP;
  longlong unaff_RDI;
  float10 in_ST0;
  
  if ((int)in_RAX == 0 && *in_RAX == 0) {
    *(byte *)(unaff_RDI + 0x7b) = *(byte *)(unaff_RDI + 0x7b) ^ 0xb9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RDI + -0x194c88ef) = *(char *)(unaff_RDI + -0x194c88ef) + '\x01';
  _DAT_b314c381 = unaff_RBP;
  *param_1 = (short)ROUND(in_ST0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c328d FUN_14d7c328d body=9 status=ok
// SIG undefined FUN_14d7c328d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c3231) overlaps instruction at (ram,0x00014d7c322a)
    */

ulonglong FUN_14d7c328d(longlong param_1)

{
  char *pcVar1;
  code *pcVar2;
  short sVar3;
  longlong in_RAX;
  ulonglong uVar4;
  char unaff_BH;
  char cVar5;
  undefined1 auStackX_8 [32];
  
  pcVar1 = (char *)(in_RAX + -0x12);
  *pcVar1 = *pcVar1 - unaff_BH;
  cVar5 = *pcVar1 == '\0';
  pcVar2 = (code *)swi(0x2a);
  sVar3 = (*pcVar2)();
  if (param_1 == 1 || cVar5 == '\0') {
    return (ulonglong)(uint)(int)sVar3;
  }
  if ((int)auStackX_8 < 0) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c32b9 FUN_14d7c32b9 body=1 status=ok
// SIG undefined FUN_14d7c32b9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c32b9(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c32c1 FUN_14d7c32c1 body=32 status=ok
// SIG undefined FUN_14d7c32c1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c32c1(undefined8 param_1,undefined2 param_2)

{
  int *piVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  undefined8 uStackX_8;
  
  out(param_2,in_AL);
  piVar1 = (int *)(CONCAT71(in_register_00000001,DAT_3513d245469fdb54) + -0x4587cb08);
  *piVar1 = *piVar1 + 4 + (uint)((uStackX_8 & 1) != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c32ed FUN_14d7c32ed body=5 status=ok
// SIG undefined FUN_14d7c32ed(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c32ed(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c32fa FUN_14d7c32fa body=1 status=ok
// SIG undefined FUN_14d7c32fa(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c32fa(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c32fe FUN_14d7c32fe body=3 status=ok
// SIG undefined FUN_14d7c32fe(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c32fe(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  undefined4 unaff_EBP;
  undefined4 unaff_0000002c;
  longlong unaff_RSI;
  uint in_R10D;
  
  puVar1 = (uint *)(unaff_RSI + 0xde10041 + CONCAT44(unaff_0000002c,unaff_EBP) * 4);
  *puVar1 = *puVar1 & in_R10D;
  *(char *)(param_2 + -0x66) = *(char *)(param_2 + -0x66) + 'w';
  func_0xff95692c();
  func_0x00017bb8beb4();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c330f FUN_14d7c330f body=3 status=ok
// SIG undefined FUN_14d7c330f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c330f(void)

{
  uint *puVar1;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_EBP;
  longlong in_R10;
  char unaff_R12B;
  
  puVar1 = (uint *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x40);
  *puVar1 = *puVar1 | unaff_EBP;
  *(char *)(in_R10 + -0x66) = *(char *)(in_R10 + -0x66) + unaff_R12B;
  func_0xff95692c();
  func_0x00017bb8beb4();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3324 FUN_14d7c3324 body=4 status=ok
// SIG undefined FUN_14d7c3324(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3324(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3328 FUN_14d7c3328 body=7 status=ok
// SIG undefined FUN_14d7c3328(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3328(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3338 FUN_14d7c3338 body=10 status=ok
// SIG undefined FUN_14d7c3338(void)

void FUN_14d7c3338(undefined8 param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  
  out(param_2,in_EAX);
  return;
}



// FUNCTION 14d7c3343 FUN_14d7c3343 body=34 status=ok
// SIG undefined FUN_14d7c3343(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c3343(undefined1 param_1,undefined2 param_2)

{
  char cVar1;
  undefined4 uVar2;
  char cVar3;
  char *unaff_RBX;
  undefined4 *unaff_RDI;
  uint *unaff_retaddr;
  
  *unaff_retaddr = *unaff_retaddr ^ (uint)unaff_retaddr;
  uVar2 = in(param_2);
  *unaff_RDI = uVar2;
  cVar3 = (char)_DAT_cc73e3fb4ded2b2f + -0x19;
  if (cVar3 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(0xfa,param_1);
  cVar1 = *unaff_RBX;
  *unaff_RBX = *unaff_RBX + cVar3;
  if (SCARRY1(cVar1,cVar3) != *unaff_RBX < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c337c FUN_14d7c337c body=4 status=ok
// SIG undefined FUN_14d7c337c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c337c(void)

{
  int *piVar1;
  longlong unaff_RBX;
  longlong unaff_RSI;
  int unaff_EDI;
  byte in_CF;
  
  piVar1 = (int *)(unaff_RBX + -0x60 + unaff_RSI);
  *piVar1 = (*piVar1 - unaff_EDI) - (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3384 FUN_14d7c3384 body=8 status=ok
// SIG undefined FUN_14d7c3384(void)

void FUN_14d7c3384(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  longlong unaff_RBX;
  
  *(int *)(unaff_RBX + 0x59175768) =
       *(int *)(unaff_RBX + 0x59175768) - CONCAT31((int3)((uint)param_2 >> 8),0x5f);
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7c338c FUN_14d7c338c body=1 status=ok
// SIG undefined FUN_14d7c338c(void)

void FUN_14d7c338c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7c33b9 FUN_14d7c33b9 body=6 status=ok
// SIG undefined FUN_14d7c33b9(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c3437) overlaps instruction at (ram,0x00014d7c3435)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7c339b) */
/* WARNING: Removing unreachable block (ram,0x00014d7c33a2) */
/* WARNING: Removing unreachable block (ram,0x00014d7c33ab) */

void FUN_14d7c33b9(longlong param_1,uint param_2)

{
  int *piVar1;
  char *pcVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  byte in_AL;
  undefined2 uVar6;
  uint uVar7;
  char unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_EBP;
  undefined4 *unaff_RSI;
  float10 in_ST0;
  undefined1 *unaff_retaddr;
  
  *(float *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x5b) = (float)in_ST0;
  if (param_1 != 1 && in_AL == 10) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = (uint)(in_AL < 10);
  uVar5 = param_2 + unaff_EBP;
  uVar7 = uVar5 + uVar4;
  pcVar2 = (char *)(unaff_RSI + 1);
  uVar6 = (undefined2)uVar7;
  out(*unaff_RSI,uVar6);
  if ((int)uVar7 < 0) {
    *(uint *)(param_1 + 0x1c00dd22) = ~*(uint *)(param_1 + 0x1c00dd22);
    if (SCARRY4(param_2,unaff_EBP) != SCARRY4(uVar5,uVar4)) {
      out(*pcVar2,uVar6);
      *(char *)((longlong)unaff_RSI + 3) = *(char *)((longlong)unaff_RSI + 3) + '\x01';
      in(uVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(uVar6,(char)unaff_EBP);
  out(uVar6,unaff_EBP);
  piVar1 = (int *)(CONCAT62(unaff_0000001a,
                            CONCAT11(unaff_BH,(unaff_BL - *(char *)(ulonglong)uVar7) -
                                              (CARRY4(param_2,unaff_EBP) || CARRY4(uVar5,uVar4)))) +
                  -0x2f10c83f);
  *piVar1 = *piVar1 + (unaff_EBP & 0xc993004a);
  *pcVar2 = *pcVar2 + (char)uVar7;
  uVar3 = in(0xbae3);
  *unaff_retaddr = uVar3;
  *(int *)(unaff_retaddr + 1) = *(int *)(unaff_retaddr + 1) + (int)pcVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c33c2 FUN_14d7c33c2 body=2 status=ok
// SIG undefined FUN_14d7c33c2(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c3437) overlaps instruction at (ram,0x00014d7c3435)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7c339b) */
/* WARNING: Removing unreachable block (ram,0x00014d7c33a2) */
/* WARNING: Removing unreachable block (ram,0x00014d7c33ab) */

void FUN_14d7c33c2(longlong param_1,uint param_2)

{
  int *piVar1;
  char *pcVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  byte in_AL;
  undefined2 uVar6;
  uint uVar7;
  char unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_EBP;
  undefined4 *unaff_RSI;
  float10 in_ST0;
  undefined1 *unaff_retaddr;
  
  *(float *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x5b) = (float)in_ST0;
  if (param_1 != 1 && in_AL == 10) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = (uint)(in_AL < 10);
  uVar5 = param_2 + unaff_EBP;
  uVar7 = uVar5 + uVar4;
  pcVar2 = (char *)(unaff_RSI + 1);
  uVar6 = (undefined2)uVar7;
  out(*unaff_RSI,uVar6);
  if ((int)uVar7 < 0) {
    *(uint *)(param_1 + 0x1c00dd22) = ~*(uint *)(param_1 + 0x1c00dd22);
    if (SCARRY4(param_2,unaff_EBP) != SCARRY4(uVar5,uVar4)) {
      out(*pcVar2,uVar6);
      *(char *)((longlong)unaff_RSI + 3) = *(char *)((longlong)unaff_RSI + 3) + '\x01';
      in(uVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(uVar6,(char)unaff_EBP);
  out(uVar6,unaff_EBP);
  piVar1 = (int *)(CONCAT62(unaff_0000001a,
                            CONCAT11(unaff_BH,(unaff_BL - *(char *)(ulonglong)uVar7) -
                                              (CARRY4(param_2,unaff_EBP) || CARRY4(uVar5,uVar4)))) +
                  -0x2f10c83f);
  *piVar1 = *piVar1 + (unaff_EBP & 0xc993004a);
  *pcVar2 = *pcVar2 + (char)uVar7;
  uVar3 = in(0xbae3);
  *unaff_retaddr = uVar3;
  *(int *)(unaff_retaddr + 1) = *(int *)(unaff_retaddr + 1) + (int)pcVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c33c6 FUN_14d7c33c6 body=69 status=ok
// SIG undefined FUN_14d7c33c6(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c3437) overlaps instruction at (ram,0x00014d7c3435)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7c339b) */
/* WARNING: Removing unreachable block (ram,0x00014d7c33a2) */
/* WARNING: Removing unreachable block (ram,0x00014d7c33ab) */

void FUN_14d7c33c6(longlong param_1,uint param_2)

{
  int *piVar1;
  char *pcVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  uint uVar7;
  char unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_EBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  byte in_CF;
  char in_ZF;
  undefined1 *unaff_retaddr;
  
  *unaff_RDI = *unaff_RSI;
  if (param_1 != 1 && in_ZF != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = (uint)in_CF;
  uVar5 = param_2 + unaff_EBP;
  uVar7 = uVar5 + uVar4;
  pcVar2 = (char *)(unaff_RSI + 2);
  uVar6 = (undefined2)uVar7;
  out(unaff_RSI[1],uVar6);
  if ((int)uVar7 < 0) {
    *(uint *)(param_1 + 0x1c00dd22) = ~*(uint *)(param_1 + 0x1c00dd22);
    if (SCARRY4(param_2,unaff_EBP) != SCARRY4(uVar5,uVar4)) {
      out(*pcVar2,uVar6);
      *(char *)((longlong)unaff_RSI + 7) = *(char *)((longlong)unaff_RSI + 7) + '\x01';
      in(uVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(uVar6,(char)unaff_EBP);
  out(uVar6,unaff_EBP);
  piVar1 = (int *)(CONCAT62(unaff_0000001a,
                            CONCAT11(unaff_BH,(unaff_BL - *(char *)(ulonglong)uVar7) -
                                              (CARRY4(param_2,unaff_EBP) || CARRY4(uVar5,uVar4)))) +
                  -0x2f10c83f);
  *piVar1 = *piVar1 + (unaff_EBP & 0xc993004a);
  *pcVar2 = *pcVar2 + (char)uVar7;
  uVar3 = in(0xbae3);
  *unaff_retaddr = uVar3;
  *(int *)(unaff_retaddr + 1) = *(int *)(unaff_retaddr + 1) + (int)pcVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c341b FUN_14d7c341b body=14 status=ok
// SIG undefined FUN_14d7c341b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c341b(undefined8 param_1,undefined2 param_2)

{
  char unaff_BH;
  undefined1 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
  unaff_RSI[1] = unaff_RSI[1] + unaff_BH;
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c342c FUN_14d7c342c body=11 status=ok
// SIG undefined FUN_14d7c342c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c342c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3438 FUN_14d7c3438 body=12 status=ok
// SIG undefined FUN_14d7c3438(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3438(byte *param_1,uint param_2)

{
  int *piVar1;
  int unaff_EBP;
  undefined4 unaff_0000002c;
  longlong unaff_RSI;
  
  *(uint *)(unaff_RSI + -0x5c) = *(uint *)(unaff_RSI + -0x5c) ^ param_2;
  piVar1 = (int *)(CONCAT44(unaff_0000002c,unaff_EBP) + -0x6b330e00);
  *piVar1 = (*piVar1 - unaff_EBP) - (uint)((byte)(param_2 >> 8) < *param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3445 FUN_14d7c3445 body=19 status=ok
// SIG undefined FUN_14d7c3445(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3445(longlong param_1,longlong param_2)

{
  char *pcVar1;
  uint unaff_ESI;
  int unaff_EDI;
  
  *(int *)(param_2 + 0x33988f6d) = *(int *)(param_2 + 0x33988f6d) - unaff_EDI;
  if (unaff_ESI < 0xb1aa4a46) {
    pcVar1 = (char *)(param_2 + 0x4d + param_1 * 2);
    *pcVar1 = *pcVar1 << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c345d FUN_14d7c345d body=16 status=ok
// SIG undefined FUN_14d7c345d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c345d(longlong param_1,longlong param_2)

{
  char *pcVar1;
  bool in_CF;
  bool in_ZF;
  
  if (!in_CF && !in_ZF) {
    pcVar1 = (char *)(param_2 + 0x4d + param_1 * 2);
    *pcVar1 = *pcVar1 << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3476 FUN_14d7c3476 body=13 status=ok
// SIG undefined FUN_14d7c3476(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3476(void)

{
  char cVar1;
  undefined4 in_EAX;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  undefined8 uStack_10;
  
  puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x16';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  out(0x26,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c348f FUN_14d7c348f body=1 status=ok
// SIG undefined FUN_14d7c348f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c348f(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3497 FUN_14d7c3497 body=6 status=ok
// SIG undefined FUN_14d7c3497(void)

/* WARNING: Control flow encountered bad instruction data */

uint FUN_14d7c3497(undefined8 param_1,byte *param_2)

{
  int *piVar1;
  char *in_RAX;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  int *unaff_RSI;
  longlong unaff_RDI;
  char in_SF;
  char in_OF;
  
  if (in_OF == in_SF) {
    *in_RAX = *in_RAX + -0x59;
    *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) =
         *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) | (byte)param_2;
    *unaff_RSI = *unaff_RSI + (int)param_2;
    return (uint)in_RAX ^ 0xfd03e0d6;
  }
  *param_2 = *param_2 | (byte)((ulonglong)param_2 >> 8);
  piVar1 = (int *)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) + (char)unaff_EBX,(char)in_RAX))
                   + -0x7e + unaff_RDI);
  *piVar1 = *piVar1 + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c34a0 FUN_14d7c34a0 body=16 status=ok
// SIG undefined FUN_14d7c34a0(void)

uint FUN_14d7c34a0(undefined8 param_1,int param_2)

{
  uint in_EAX;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RSI;
  
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
       *(byte *)CONCAT71(unaff_00000019,unaff_BL) | (byte)param_2;
  *(int *)(unaff_RSI + 4) = *(int *)(unaff_RSI + 4) + param_2;
  return in_EAX ^ 0xfd03e0d6;
}



// FUNCTION 14d7c34b1 FUN_14d7c34b1 body=10 status=ok
// SIG undefined FUN_14d7c34b1(void)

void FUN_14d7c34b1(void)

{
  byte *pbVar1;
  byte unaff_BH;
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  pbVar1 = (byte *)(unaff_RDI + -0x30 + unaff_RBP);
  *pbVar1 = *pbVar1 & unaff_BH;
  return;
}



// FUNCTION 14d7c34bd FUN_14d7c34bd body=5 status=ok
// SIG undefined FUN_14d7c34bd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c34bd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c34c6 FUN_14d7c34c6 body=7 status=ok
// SIG undefined FUN_14d7c34c6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c34c6(void)

{
  undefined1 in_AL;
  
  out(0x82,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c34da FUN_14d7c34da body=8 status=ok
// SIG undefined FUN_14d7c34da(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c34da(undefined8 param_1,byte *param_2)

{
  int *piVar1;
  undefined1 in_AL;
  undefined1 uVar2;
  undefined1 in_AH;
  char cVar3;
  undefined6 in_register_00000002;
  byte bVar4;
  int unaff_EBX;
  longlong unaff_RDI;
  
  bVar4 = (byte)unaff_EBX;
  uVar2 = (undefined1)(CONCAT11(in_AH,in_AL) / (ushort)bVar4);
  cVar3 = (char)(CONCAT11(in_AH,in_AL) % (ushort)bVar4);
  *(int *)(CONCAT62(in_register_00000002,CONCAT11(cVar3,uVar2)) + 0x2d) = (int)param_2;
  *param_2 = *param_2 | (byte)((ulonglong)param_2 >> 8);
  piVar1 = (int *)(CONCAT62(in_register_00000002,CONCAT11(cVar3 + bVar4,uVar2)) + -0x7e + unaff_RDI)
  ;
  *piVar1 = *piVar1 + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c34e2 FUN_14d7c34e2 body=4 status=ok
// SIG undefined FUN_14d7c34e2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c34e2(undefined8 param_1,byte *param_2)

{
  int *piVar1;
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  int unaff_EBX;
  longlong unaff_RDI;
  
  *(int *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x2d) = (int)param_2;
  *param_2 = *param_2 | (byte)((ulonglong)param_2 >> 8);
  piVar1 = (int *)(CONCAT62(in_register_00000002,CONCAT11(in_AH + (char)unaff_EBX,in_AL)) + -0x7e +
                  unaff_RDI);
  *piVar1 = *piVar1 + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c34e6 FUN_14d7c34e6 body=19 status=ok
// SIG undefined FUN_14d7c34e6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c34e6(undefined8 param_1,byte *param_2)

{
  int *piVar1;
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  int unaff_EBX;
  longlong unaff_RDI;
  
  *param_2 = *param_2 | (byte)((ulonglong)param_2 >> 8);
  piVar1 = (int *)(CONCAT62(in_register_00000002,CONCAT11(in_AH + (char)unaff_EBX,in_AL)) + -0x7e +
                  unaff_RDI);
  *piVar1 = *piVar1 + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3508 FUN_14d7c3508 body=10 status=ok
// SIG undefined FUN_14d7c3508(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3508(undefined8 param_1,undefined4 param_2)

{
  undefined1 in_AL;
  longlong unaff_RBP;
  
  LOCK();
  *(undefined4 *)(unaff_RBP + -0x5f) = param_2;
  UNLOCK();
  out(0xfd,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3518 FUN_14d7c3518 body=32 status=ok
// SIG undefined FUN_14d7c3518(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c351e) */
/* WARNING: Removing unreachable block (ram,0x00014d7c3521) */
/* WARNING: Removing unreachable block (ram,0x00014d7c352c) */

uint FUN_14d7c3518(undefined8 param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_RSI;
  
  pcVar1 = (code *)swi(0x23);
  uVar2 = (*pcVar1)();
  *unaff_RSI = *unaff_RSI + param_2;
  return (uVar2 | 0x6c) ^ 0xfd03e094;
}



// FUNCTION 14d7c3545 FUN_14d7c3545 body=12 status=ok
// SIG undefined FUN_14d7c3545(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c356c) */

void FUN_14d7c3545(void)

{
  undefined1 unaff_BL;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  int *unaff_retaddr;
  
  *(undefined1 *)((longlong)unaff_retaddr + (longlong)unaff_RDI * 2) = unaff_BL;
  *unaff_retaddr = *unaff_retaddr + -0x3dbc948c;
  in(0);
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3555 FUN_14d7c3555 body=11 status=ok
// SIG undefined FUN_14d7c3555(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c356c) */

void FUN_14d7c3555(void)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  in(0);
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3566 FUN_14d7c3566 body=10 status=ok
// SIG undefined FUN_14d7c3566(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c3566(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c3582 FUN_14d7c3582 body=9 status=ok
// SIG undefined FUN_14d7c3582(void)

void FUN_14d7c3582(longlong param_1)

{
  uint *puVar1;
  longlong in_RAX;
  uint unaff_ESI;
  
  puVar1 = (uint *)(in_RAX + -0x204edff0 + param_1 * 2);
  *puVar1 = *puVar1 ^ unaff_ESI;
  return;
}



// FUNCTION 14d7c35a3 FUN_14d7c35a3 body=14 status=ok
// SIG undefined FUN_14d7c35a3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c35a3(ulonglong param_1,longlong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar8;
  code *pcVar9;
  char cVar10;
  undefined8 in_RAX;
  longlong lVar11;
  byte bVar12;
  longlong unaff_RBX;
  undefined1 *unaff_RSI;
  ulonglong uVar13;
  undefined4 *unaff_RDI;
  undefined2 in_FS;
  byte in_CF;
  undefined1 in_ZF;
  bool in_OF;
  char cVar7;
  
  bVar12 = (byte)(param_1 >> 8);
  if (in_OF) {
    uVar4 = *unaff_RSI;
    uVar5 = in((short)param_2);
    *unaff_RDI = uVar5;
    bVar8 = (param_1 & 0x1f) != 0;
    if (!(bool)(!bVar8 & in_CF |
               (bVar8 && ((char)(byte)param_1 >> ((byte)param_1 & 0x1f) - 1 & 1U) != 0))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar13 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar4) & 0xffffffff;
    pbVar1 = (byte *)(((ulonglong)(unaff_RSI + 1) & 0xffffffff) - 0x7f);
    bVar3 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar12;
    in(0x2a);
    pcVar2 = (char *)(((ulonglong)(unaff_RSI + 1) & 0xffffffff) + 0xeb3104d);
    cVar6 = *pcVar2;
    cVar10 = (char)uVar13;
    cVar7 = *pcVar2;
    LOCK();
    *(char *)(param_2 + -0x3f052843) = (char)(uVar13 >> 8);
    UNLOCK();
    do {
    } while (SBORROW1(cVar10,cVar6) != SBORROW1(cVar10 - cVar7,CARRY1(bVar3,bVar12)));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar9 = (code *)swi(0x2a);
  lVar11 = (*pcVar9)();
  if (!(bool)in_CF && !(bool)in_ZF) {
    out(0x4f,(int)lVar11);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(lVar11 + unaff_RBX * 8) = in_FS;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


