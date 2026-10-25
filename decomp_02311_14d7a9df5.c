// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14d7a9df5 FUN_14d7a9df5 body=19 status=ok
// SIG undefined FUN_14d7a9df5(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a9dcc) overlaps instruction at (ram,0x00014d7a9dc5)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a9da6) */
/* WARNING: Removing unreachable block (ram,0x00014d7a9dcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a9df5(undefined8 param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong in_RAX;
  undefined8 *unaff_RBP;
  int *unaff_RSI;
  longlong unaff_RDI;
  undefined2 in_ES;
  bool in_PF;
  
  if (!in_PF) {
    *unaff_RSI = *unaff_RSI + 0x31d1147d;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = *param_2 + 1;
  *(int **)(unaff_RDI + -0x14) = unaff_RSI;
  *(undefined2 *)(in_RAX ^ 0xfd) = in_ES;
  uVar2 = _DAT_3d8e5f5057a46bdc;
  if ((char)in_RAX != -3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    *(int *)(ulonglong)_DAT_3d8e5f5057a46bdc =
         (*(int *)(ulonglong)_DAT_3d8e5f5057a46bdc - _DAT_3d8e5f5057a46bdc) -
         (uint)((int)param_2 < 0);
    out(uRam0000000003591e00,(short)unaff_RDI);
    out(0x28,(char)uVar2 + '_');
    cVar1 = '\a';
    do {
      unaff_RBP = unaff_RBP + -1;
      register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
      *(undefined8 *)register0x00000020 = *unaff_RBP;
      cVar1 = cVar1 + -1;
    } while ('\0' < cVar1);
    in(0x95);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9e01 FUN_14d7a9e01 body=13 status=ok
// SIG undefined FUN_14d7a9e01(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14d7a9e01(ulonglong param_1)

{
  char in_AL;
  uint unaff_EBP;
  char in_CF;
  
  if ((char)(in_AL + 'V') == in_CF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_1375b6c85 = _DAT_1375b6c85 | unaff_EBP;
  return param_1 & 0xffffff10;
}



// FUNCTION 14d7a9e16 FUN_14d7a9e16 body=3 status=ok
// SIG undefined FUN_14d7a9e16(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9e16(longlong param_1)

{
  int iVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RSI;
  byte in_CF;
  float10 in_ST0;
  
  iVar1 = *(int *)(param_1 + 0xf);
  *(longlong *)(unaff_RSI + -0x18) =
       (longlong)
       ROUND(in_ST0 / (float10)*(double *)
                                (param_1 + 0x52 + CONCAT71(in_register_00000001,in_AL) * 8));
  *(longlong *)((ulonglong)((int)&stack0x00000000 + iVar1 + (uint)in_CF) - 8) = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9e2e FUN_14d7a9e2e body=11 status=ok
// SIG undefined FUN_14d7a9e2e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9e2e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9e3e FUN_14d7a9e3e body=26 status=ok
// SIG undefined FUN_14d7a9e3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14d7a9e3e(ulonglong param_1,undefined8 param_2)

{
  uint unaff_EBP;
  longlong unaff_RDI;
  
  *(byte *)(unaff_RDI + -0x24945656) =
       *(byte *)(unaff_RDI + -0x24945656) ^ (byte)((ulonglong)param_2 >> 8);
  _DAT_1375b6c85 = _DAT_1375b6c85 | unaff_EBP;
  return param_1 & 0xffffff10;
}



// FUNCTION 14d7a9e5a FUN_14d7a9e5a body=15 status=ok
// SIG undefined FUN_14d7a9e5a(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a9ebc) overlaps instruction at (ram,0x00014d7a9eb8)
    */

uint FUN_14d7a9e5a(longlong param_1,uint param_2)

{
  uint *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  longlong lVar4;
  undefined2 uVar5;
  uint uVar6;
  ulonglong *puVar7;
  uint in_EAX;
  uint uVar8;
  byte bVar9;
  char *pcVar10;
  char cVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  uint unaff_EBP;
  uint uVar14;
  char *unaff_RSI;
  uint *unaff_RDI;
  bool bVar15;
  bool bVar16;
  
  uVar14 = unaff_EBP | *unaff_RDI;
  if ((POPCOUNT(uVar14 & 0xff) & 1U) == 0) {
    return in_EAX & 0xffffff10;
  }
  *(char *)unaff_RDI = (char)(in_EAX | 0xa26a5f86);
  uVar8 = (in_EAX | 0xa26a5f86) + 0x8d09301a ^ 0xc968eb98;
  if ((POPCOUNT(uVar8 & 0xff) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar8 = uVar8 - uVar14;
  pbVar3 = (byte *)(unaff_RSI + 1);
  param_1 = param_1 + -1;
  if (param_1 == 0 || *unaff_RSI == *(char *)((longlong)unaff_RDI + 1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar15 = false;
  param_2 = param_2 ^ uVar8;
  uVar12 = (ulonglong)param_2;
  bVar16 = param_2 == 0;
  if (param_1 == 0) {
    *(int *)((longlong)unaff_RDI + -0x198e572e) = (int)&stack0x00000000;
    puVar1 = (uint *)(uVar12 + 0x40160030);
    uVar14 = *puVar1;
    *puVar1 = *puVar1 + 0x1c;
    pcVar10 = (char *)0x0;
    if (0xffffffe3 < uVar14) {
      *(char *)((longlong)unaff_RDI + 0x388e9c9d) = (char)(uVar8 >> 8);
      return (uint)*pbVar3;
    }
  }
  else {
    uVar5 = (undefined2)(param_2 >> 0x10);
    cVar11 = (char)param_2;
    uVar6 = CONCAT22(uVar5,CONCAT11(0x89,cVar11));
    uVar12 = (ulonglong)uVar6;
    puVar7 = (ulonglong *)register0x00000020;
    do {
      puVar13 = puVar7;
      lVar4 = *puVar13;
      if (!bVar15 && !bVar16) {
        pcVar10 = (char *)0x78875770;
        if ((int)(uVar8 + 0xc99c8e54) < 0) goto code_r0x00014d7a9ecd;
        *pbVar3 = *pbVar3 - cVar11;
        *(char *)((longlong)unaff_RDI + 2) = (char)(uVar8 + 0xc99c8e54);
        goto LAB_14d7a9ed7;
      }
      pbVar2 = (byte *)((longlong)puVar13 + param_1 * 2 + -0x3579a70f);
      bVar15 = CARRY1(*pbVar2,(byte)uVar8);
      *pbVar2 = *pbVar2 + (byte)uVar8;
      bVar16 = *pbVar2 == 0;
      if (-1 < (char)*pbVar2) {
        if ((*(uint *)(lVar4 + 0x5e662adf) & (uint)pbVar3) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar7 = puVar13 + 1;
    } while (!bVar15 && !bVar16);
    bVar9 = (char)param_1 - *(char *)((ulonglong)uVar14 + 0xf);
    pcVar10 = (char *)CONCAT71((int7)((ulonglong)param_1 >> 8),bVar9);
    if (bVar9 != 0 && *(char *)((ulonglong)uVar14 + 0xf) <= (char)param_1) {
      *puVar13 = (ulonglong)CONCAT22(uVar5,CONCAT11(-0x77 >> (bVar9 & 0x1f),cVar11));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
code_r0x00014d7a9ecd:
    *puVar13 = (ulonglong)(puVar13 + 1);
    uVar12 = CONCAT71((uint7)(uint3)(uVar6 >> 8),0xd2);
  }
LAB_14d7a9ed7:
  *(char *)(uVar12 + 0x1e) = *(char *)(uVar12 + 0x1e) + '\x01';
  *pcVar10 = *pcVar10 + (char)((ulonglong)pcVar10 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9e6a FUN_14d7a9e6a body=5 status=ok
// SIG undefined FUN_14d7a9e6a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9e6a(void)

{
  undefined1 in_AL;
  
  out(0xcf,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9e7a FUN_14d7a9e7a body=12 status=ok
// SIG undefined FUN_14d7a9e7a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9e7a(undefined8 param_1)

{
  longlong unaff_RBP;
  
  *(byte *)(unaff_RBP + -0x628b0edc) =
       *(byte *)(unaff_RBP + -0x628b0edc) ^ (byte)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9e8a FUN_14d7a9e8a body=4 status=ok
// SIG undefined FUN_14d7a9e8a(void)

void FUN_14d7a9e8a(void)

{
  return;
}



// FUNCTION 14d7a9e9b FUN_14d7a9e9b body=3 status=ok
// SIG undefined FUN_14d7a9e9b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a9ebc) overlaps instruction at (ram,0x00014d7a9eb8)
    */

void FUN_14d7a9e9b(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong *plVar4;
  int in_EAX;
  byte bVar5;
  char *pcVar6;
  longlong *plVar7;
  longlong unaff_RBP;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  undefined1 *unaff_RDI;
  undefined1 in_CF;
  undefined1 in_ZF;
  
  plVar4 = (longlong *)register0x00000020;
  do {
    plVar7 = plVar4;
    lVar3 = *plVar7;
    if (!(bool)in_CF && !(bool)in_ZF) {
      pcVar6 = (char *)0x78875770;
      if (-1 < in_EAX + -0x366371ac) {
        *(char *)CONCAT44(unaff_00000034,unaff_ESI) =
             *(char *)CONCAT44(unaff_00000034,unaff_ESI) - (char)param_2;
        *unaff_RDI = (char)(in_EAX + -0x366371ac);
      }
      goto code_r0x00014d7a9ecd;
    }
    pbVar2 = (byte *)((longlong)plVar7 + param_1 * 2 + -0x3579a70f);
    in_CF = CARRY1(*pbVar2,(byte)in_EAX);
    *pbVar2 = *pbVar2 + (byte)in_EAX;
    in_ZF = *pbVar2 == 0;
    if (-1 < (char)*pbVar2) {
      if ((*(uint *)(lVar3 + 0x5e662adf) & unaff_ESI) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    plVar4 = plVar7 + 1;
  } while (!(bool)in_CF && !(bool)in_ZF);
  bVar5 = (char)param_1 - *(char *)(unaff_RBP + 0xf);
  pcVar6 = (char *)CONCAT71((int7)((ulonglong)param_1 >> 8),bVar5);
  if (bVar5 != 0 && *(char *)(unaff_RBP + 0xf) <= (char)param_1) {
    *plVar7 = CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                       CONCAT11((char)((ulonglong)param_2 >> 8) >> (bVar5 & 0x1f),(char)param_2));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00014d7a9ecd:
  *plVar7 = (longlong)(plVar7 + 1);
  pcVar1 = (char *)(CONCAT71((int7)((ulonglong)param_2 >> 8),0xd2) + 0x1e);
  *pcVar1 = *pcVar1 + '\x01';
  *pcVar6 = *pcVar6 + (char)((ulonglong)pcVar6 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9ea0 FUN_14d7a9ea0 body=4 status=ok
// SIG undefined FUN_14d7a9ea0(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a9ebc) overlaps instruction at (ram,0x00014d7a9eb8)
    */

void FUN_14d7a9ea0(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  int in_EAX;
  byte bVar3;
  byte bVar4;
  undefined7 uVar6;
  char *pcVar5;
  char cVar7;
  longlong unaff_RBX;
  longlong *plVar8;
  longlong *plVar9;
  longlong unaff_RBP;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  undefined1 *unaff_RDI;
  bool bVar10;
  longlong lStack_8;
  
  bVar10 = false;
  bVar3 = (byte)param_1;
  bVar4 = *(byte *)(param_1 + 0x58 + unaff_RBP * 8) & bVar3;
  cVar7 = (char)param_2;
  uVar6 = (undefined7)((ulonglong)param_1 >> 8);
  plVar9 = (longlong *)register0x00000020;
  while( true ) {
    if (-1 < (char)bVar4) {
      if ((*(uint *)(unaff_RBX + 0x5e662adf) & unaff_ESI) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar10 || bVar4 == 0) break;
    unaff_RBX = *plVar9;
    plVar8 = plVar9 + 1;
    if (!bVar10 && bVar4 != 0) {
      pcVar5 = (char *)0x78875770;
      plVar9 = plVar9 + 1;
      if (-1 < in_EAX + -0x366371ac) {
        *(byte *)CONCAT44(unaff_00000034,unaff_ESI) =
             *(char *)CONCAT44(unaff_00000034,unaff_ESI) - bVar3;
        *unaff_RDI = (char)(in_EAX + -0x366371ac);
        plVar9 = plVar8;
      }
      goto code_r0x00014d7a9ecd;
    }
    pbVar2 = (byte *)((longlong)plVar9 + CONCAT71(uVar6,cVar7) * 2 + -0x3579a70f);
    bVar10 = CARRY1(*pbVar2,(byte)in_EAX);
    *pbVar2 = *pbVar2 + (byte)in_EAX;
    bVar4 = *pbVar2;
    plVar9 = plVar9 + 1;
  }
  bVar4 = cVar7 - *(char *)(unaff_RBP + 0xf);
  pcVar5 = (char *)CONCAT71(uVar6,bVar4);
  if (bVar4 != 0 && *(char *)(unaff_RBP + 0xf) <= cVar7) {
    plVar9[-1] = CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                          CONCAT11((char)((ulonglong)param_2 >> 8) >> (bVar4 & 0x1f),bVar3));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00014d7a9ecd:
  *(longlong **)((longlong)plVar9 + -8) = plVar9;
  pcVar1 = (char *)(CONCAT71((int7)((ulonglong)param_2 >> 8),0xd2) + 0x1e);
  *pcVar1 = *pcVar1 + '\x01';
  *pcVar5 = *pcVar5 + (char)((ulonglong)pcVar5 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9ea4 FUN_14d7a9ea4 body=28 status=ok
// SIG undefined FUN_14d7a9ea4(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a9ebc) overlaps instruction at (ram,0x00014d7a9eb8)
    */

void FUN_14d7a9ea4(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  int in_EAX;
  byte bVar3;
  undefined7 uVar5;
  char *pcVar4;
  char cVar6;
  longlong unaff_RBX;
  longlong *plVar7;
  longlong *plVar8;
  longlong unaff_RBP;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  undefined1 *unaff_RDI;
  undefined1 in_CF;
  undefined1 in_ZF;
  undefined1 in_SF;
  longlong lStack_8;
  
  cVar6 = (char)param_2;
  uVar5 = (undefined7)((ulonglong)param_1 >> 8);
  plVar8 = (longlong *)register0x00000020;
  while( true ) {
    if (!(bool)in_SF) {
      if ((*(uint *)(unaff_RBX + 0x5e662adf) & unaff_ESI) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((bool)in_CF || (bool)in_ZF) break;
    unaff_RBX = *plVar8;
    plVar7 = plVar8 + 1;
    if (!(bool)in_CF && !(bool)in_ZF) {
      pcVar4 = (char *)0x78875770;
      plVar8 = plVar8 + 1;
      if (-1 < in_EAX + -0x366371ac) {
        *(char *)CONCAT44(unaff_00000034,unaff_ESI) =
             *(char *)CONCAT44(unaff_00000034,unaff_ESI) - (char)param_1;
        *unaff_RDI = (char)(in_EAX + -0x366371ac);
        plVar8 = plVar7;
      }
      goto code_r0x00014d7a9ecd;
    }
    pbVar2 = (byte *)((longlong)plVar8 + CONCAT71(uVar5,cVar6) * 2 + -0x3579a70f);
    in_CF = CARRY1(*pbVar2,(byte)in_EAX);
    *pbVar2 = *pbVar2 + (byte)in_EAX;
    in_SF = (char)*pbVar2 < '\0';
    in_ZF = *pbVar2 == 0;
    plVar8 = plVar8 + 1;
  }
  bVar3 = cVar6 - *(char *)(unaff_RBP + 0xf);
  pcVar4 = (char *)CONCAT71(uVar5,bVar3);
  if (bVar3 != 0 && *(char *)(unaff_RBP + 0xf) <= cVar6) {
    plVar8[-1] = CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                          CONCAT11((char)((ulonglong)param_2 >> 8) >> (bVar3 & 0x1f),(char)param_1))
    ;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00014d7a9ecd:
  *(longlong **)((longlong)plVar8 + -8) = plVar8;
  pcVar1 = (char *)(CONCAT71((int7)((ulonglong)param_2 >> 8),0xd2) + 0x1e);
  *pcVar1 = *pcVar1 + '\x01';
  *pcVar4 = *pcVar4 + (char)((ulonglong)pcVar4 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9ec5 FUN_14d7a9ec5 body=30 status=ok
// SIG undefined FUN_14d7a9ec5(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a9ed2) overlaps instruction at (ram,0x00014d7a9ece)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a9edc) */

void FUN_14d7a9ec5(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  char unaff_BL;
  char in_CF;
  
  DAT_d4d20f84 = DAT_d4d20f84 + unaff_BL + in_CF;
  pcVar1 = (char *)(CONCAT71((int7)((ulonglong)param_2 >> 8),0xd2) + 0x1e);
  *pcVar1 = *pcVar1 + '\x01';
  *param_1 = *param_1 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9ee6 FUN_14d7a9ee6 body=7 status=ok
// SIG undefined FUN_14d7a9ee6(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a9ebc) overlaps instruction at (ram,0x00014d7a9eb8)
    */

char FUN_14d7a9ee6(longlong param_1,uint param_2)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  char *pcVar4;
  longlong lVar5;
  undefined2 uVar6;
  ulonglong *puVar7;
  int in_EAX;
  uint uVar8;
  byte bVar9;
  char *pcVar10;
  char cVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  int unaff_EBP;
  undefined4 unaff_0000002c;
  char *unaff_RSI;
  char *unaff_RDI;
  bool bVar14;
  byte in_CF;
  bool bVar15;
  
  uVar8 = (in_EAX - unaff_EBP) - (uint)in_CF;
  pcVar4 = unaff_RSI + 1;
  param_1 = param_1 + -1;
  if (param_1 == 0 || *unaff_RSI == *unaff_RDI) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar14 = false;
  param_2 = param_2 ^ uVar8;
  uVar12 = (ulonglong)param_2;
  bVar15 = param_2 == 0;
  if (param_1 == 0) {
    *(int *)(unaff_RDI + -0x198e572f) = (int)&stack0x00000000;
    puVar1 = (uint *)(uVar12 + 0x40160030);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 + 0x1c;
    pcVar10 = (char *)0x0;
    if (0xffffffe3 < uVar3) {
      unaff_RDI[0x388e9c9c] = (char)(uVar8 >> 8);
      return *pcVar4;
    }
  }
  else {
    uVar6 = (undefined2)(param_2 >> 0x10);
    cVar11 = (char)param_2;
    uVar3 = CONCAT22(uVar6,CONCAT11(0x89,cVar11));
    uVar12 = (ulonglong)uVar3;
    puVar7 = (ulonglong *)register0x00000020;
    do {
      puVar13 = puVar7;
      lVar5 = *puVar13;
      if (!bVar14 && !bVar15) {
        pcVar10 = (char *)0x78875770;
        if ((int)(uVar8 + 0xc99c8e54) < 0) goto code_r0x00014d7a9ecd;
        *pcVar4 = *pcVar4 - cVar11;
        unaff_RDI[1] = (char)(uVar8 + 0xc99c8e54);
        goto LAB_14d7a9ed7;
      }
      pbVar2 = (byte *)((longlong)puVar13 + param_1 * 2 + -0x3579a70f);
      bVar14 = CARRY1(*pbVar2,(byte)uVar8);
      *pbVar2 = *pbVar2 + (byte)uVar8;
      bVar15 = *pbVar2 == 0;
      if (-1 < (char)*pbVar2) {
        if ((*(uint *)(lVar5 + 0x5e662adf) & (uint)pcVar4) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar7 = puVar13 + 1;
    } while (!bVar14 && !bVar15);
    pcVar4 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0xf);
    bVar9 = (char)param_1 - *pcVar4;
    pcVar10 = (char *)CONCAT71((int7)((ulonglong)param_1 >> 8),bVar9);
    if (bVar9 != 0 && *pcVar4 <= (char)param_1) {
      *puVar13 = (ulonglong)CONCAT22(uVar6,CONCAT11(-0x77 >> (bVar9 & 0x1f),cVar11));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
code_r0x00014d7a9ecd:
    *puVar13 = (ulonglong)(puVar13 + 1);
    uVar12 = CONCAT71((uint7)(uint3)(uVar3 >> 8),0xd2);
  }
LAB_14d7a9ed7:
  *(char *)(uVar12 + 0x1e) = *(char *)(uVar12 + 0x1e) + '\x01';
  *pcVar10 = *pcVar10 + (char)((ulonglong)pcVar10 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9ef3 FUN_14d7a9ef3 body=25 status=ok
// SIG undefined FUN_14d7a9ef3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9ef3(void)

{
  char cVar1;
  undefined2 in_AX;
  uint uVar2;
  undefined8 *puVar4;
  undefined8 *unaff_RBP;
  undefined8 uStack_10;
  byte *pbVar3;
  
  puVar4 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x1a';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar4 = puVar4 + -1;
    *puVar4 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  uVar2 = (CONCAT31((int3)(char)((ushort)in_AX >> 8),(char)in_AX) & 0xffffff1f) + 0xf7137dd7;
  pbVar3 = (byte *)(ulonglong)uVar2;
  pbVar3[-0x6d7c198f] = pbVar3[-0x6d7c198f] >> 1;
  *pbVar3 = *pbVar3 ^ (byte)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9f18 FUN_14d7a9f18 body=8 status=ok
// SIG undefined FUN_14d7a9f18(void)

undefined1 FUN_14d7a9f18(void)

{
  undefined1 *unaff_RSI;
  
  return *unaff_RSI;
}



// FUNCTION 14d7a9f29 FUN_14d7a9f29 body=2 status=ok
// SIG undefined FUN_14d7a9f29(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9f29(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9f2d FUN_14d7a9f2d body=48 status=ok
// SIG undefined FUN_14d7a9f2d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9f2d(undefined8 param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  ulonglong unaff_RBP;
  byte *unaff_RSI;
  
  in((short)param_2);
  param_2 = param_2 ^ *(uint *)(CONCAT44(unaff_0000001c,unaff_EBX) + -0x790cf63b);
  uVar2 = in((short)param_2);
  uVar3 = unaff_RBP & 0xffffffff;
  unaff_RSI[uVar3 * 2 + -0x40] =
       (unaff_RSI[uVar3 * 2 + -0x40] + (char)(param_2 >> 8) * -0x10) - ((uVar2 & 0x100) != 0);
  *(char *)(uVar3 - 0x3b) = *(char *)(uVar3 - 0x3b) + (char)((ulonglong)param_1 >> 8);
  cVar1 = (char)uVar3 + '^' + (*unaff_RSI < DAT_2fa2d2f2);
  out(8,cVar1);
  if ((uint)CONCAT71((int7)(uVar3 >> 8),cVar1) < 0x8330e638) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9f5e FUN_14d7a9f5e body=20 status=ok
// SIG undefined FUN_14d7a9f5e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7a9f5a) */

void FUN_14d7a9f5e(longlong param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar5;
  undefined8 *unaff_RBP;
  undefined4 *unaff_RSI;
  unkbyte10 in_ST6;
  undefined8 uStack_18;
  byte *pbVar4;
  
  cVar1 = *(char *)((longlong)unaff_RSI + -0x52edff3d);
  ffree(in_ST6);
  if (cVar1 == (char)param_1) {
    puVar5 = (undefined8 *)&stack0xfffffffffffffff0;
    cVar1 = '\x1b';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar5 = puVar5 + -1;
      *puVar5 = *unaff_RBP;
      cVar1 = cVar1 + -1;
    } while ('\0' < cVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 == 0) {
    uVar3 = (CONCAT31((int3)(char)((uint)*unaff_RSI >> 8),(char)*unaff_RSI) & 0xffffff1f) +
            0xf7137dd7;
    pbVar4 = (byte *)(ulonglong)uVar3;
    pbVar4[-0x6d7c198f] = pbVar4[-0x6d7c198f] >> 1;
    *pbVar4 = *pbVar4 ^ (byte)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar5 = (undefined8 *)&stack0xfffffffffffffff0;
  cVar2 = '\b';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar5 = puVar5 + -1;
    *puVar5 = *unaff_RBP;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
  if (SBORROW1(cVar1,(char)param_1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a9f77 FUN_14d7a9f77 body=1 status=ok
// SIG undefined FUN_14d7a9f77(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9f77(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9f8b FUN_14d7a9f8b body=15 status=ok
// SIG undefined FUN_14d7a9f8b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9f8b(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9f9f FUN_14d7a9f9f body=12 status=ok
// SIG undefined FUN_14d7a9f9f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9f9f(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  code *pcVar3;
  uint uVar4;
  undefined1 in_AL;
  undefined8 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint unaff_EBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  char in_CF;
  char in_AF;
  undefined1 in_ZF;
  char in_SF;
  char in_OF;
  undefined8 uStackX_8;
  
  uVar7 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar6 = (uint)param_1;
  *unaff_RDI = in_AL;
  pcVar3 = (code *)swi(0x78);
  uVar5 = (*pcVar3)();
  lVar1 = *(longlong *)CONCAT44(uVar7,uVar6);
  if (!(bool)in_ZF && in_OF == in_SF) {
    unaff_RSI[-0x12] = unaff_RSI[-0x12] + (char)((ulonglong)uStackX_8 >> 8) + in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(param_2 + -0x3b07061e) = *(int *)(param_2 + -0x3b07061e) + unaff_EBP;
  uVar2 = *unaff_RSI;
  uVar4 = uVar6 & unaff_EBP;
  *(short *)(CONCAT44(uVar7,uVar6) + CONCAT71((int7)((ulonglong)(unaff_RSI + 1) >> 8),0x8b) * 2) =
       (short)ROUND((float10)lVar1);
  out((short)((ulonglong)uVar5 >> 0x10) >> 0xf,
      (int)CONCAT62((int6)((ulonglong)uVar5 >> 0x10),
                    CONCAT11(((int)uVar4 < 0) << 7 | (uVar4 == 0) << 6 | in_AF << 4 |
                             ((POPCOUNT(uVar4 & 0xff) & 1U) == 0) << 2,uVar2)));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9fab FUN_14d7a9fab body=3 status=ok
// SIG undefined FUN_14d7a9fab(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9fab(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9fbc FUN_14d7a9fbc body=2 status=ok
// SIG undefined FUN_14d7a9fbc(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a9f5c) overlaps instruction at (ram,0x00014d7a9f5b)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a9f5a) */

void FUN_14d7a9fbc(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  undefined1 unaff_BH;
  undefined8 *puVar6;
  undefined8 *unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_ZF;
  char in_SF;
  char in_OF;
  unkbyte10 in_ST6;
  undefined8 uStack_18;
  byte *pbVar5;
  
  if (!in_ZF && in_OF == in_SF) {
    *(undefined1 *)(param_2 + 0x2b) = unaff_BH;
    uVar1 = in((short)param_2);
    *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  cVar2 = *(char *)((longlong)unaff_RSI + -0x52edff3d);
  ffree(in_ST6);
  if (cVar2 == (char)param_1) {
    puVar6 = (undefined8 *)&stack0xfffffffffffffff0;
    cVar2 = '\x1b';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *unaff_RBP;
      cVar2 = cVar2 + -1;
    } while ('\0' < cVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 == 0) {
    uVar4 = (CONCAT31((int3)(char)((uint)*unaff_RSI >> 8),(char)*unaff_RSI) & 0xffffff1f) +
            0xf7137dd7;
    pbVar5 = (byte *)(ulonglong)uVar4;
    pbVar5[-0x6d7c198f] = pbVar5[-0x6d7c198f] >> 1;
    *pbVar5 = *pbVar5 ^ (byte)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar6 = (undefined8 *)&stack0xfffffffffffffff0;
  cVar3 = '\b';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar6 = puVar6 + -1;
    *puVar6 = *unaff_RBP;
    cVar3 = cVar3 + -1;
  } while ('\0' < cVar3);
  if (SBORROW1(cVar2,(char)param_1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a9fc0 FUN_14d7a9fc0 body=7 status=ok
// SIG undefined FUN_14d7a9fc0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9fc0(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9fcd FUN_14d7a9fcd body=8 status=ok
// SIG undefined FUN_14d7a9fcd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9fcd(longlong param_1)

{
  do {
    param_1 = param_1 + -1;
  } while (param_1 != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9fdd FUN_14d7a9fdd body=12 status=ok
// SIG undefined FUN_14d7a9fdd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9fdd(longlong param_1)

{
  uint uVar1;
  undefined4 in_EAX;
  short sVar2;
  uint unaff_EBP;
  undefined7 unaff_00000031;
  char in_AF;
  float10 in_ST0;
  
  uVar1 = (uint)param_1 & unaff_EBP;
  sVar2 = (short)((uint)in_EAX >> 0x10);
  *(short *)(param_1 + CONCAT71(unaff_00000031,0x8b) * 2) = (short)ROUND(in_ST0);
  out(sVar2 >> 0xf,
      CONCAT22(sVar2,CONCAT11(((int)uVar1 < 0) << 7 | (uVar1 == 0) << 6 | in_AF << 4 |
                              ((POPCOUNT(uVar1 & 0xff) & 1U) == 0) << 2,(char)in_EAX)) | 0x200);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9fee FUN_14d7a9fee body=6 status=ok
// SIG undefined FUN_14d7a9fee(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9fee(longlong param_1)

{
  int in_EAX;
  
  if (param_1 == 1 || (int)&stack0x00000000 + in_EAX != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9ffa FUN_14d7a9ffa body=2 status=ok
// SIG undefined FUN_14d7a9ffa(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9ffa(undefined8 param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  
  out(param_2,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a9ffe FUN_14d7a9ffe body=9 status=ok
// SIG undefined FUN_14d7a9ffe(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a9ffe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa00b FUN_14d7aa00b body=42 status=ok
// SIG undefined FUN_14d7aa00b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14d7aa00b(void)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int in_EAX;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  byte in_CF;
  undefined2 unaff_retaddr;
  
  uVar2 = in(unaff_retaddr);
  uVar1 = CONCAT31((int3)((in_EAX + 0x5c83abc0) - (uint)in_CF >> 8),uVar2);
  out(0xb2,uVar1);
  *(uint *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(uint *)CONCAT44(unaff_0000001c,unaff_EBX) & unaff_EBX;
  return uVar1;
}



// FUNCTION 14d7aa038 FUN_14d7aa038 body=15 status=ok
// SIG undefined FUN_14d7aa038(void)

void FUN_14d7aa038(undefined8 param_1,byte *param_2)

{
  undefined1 in_AL;
  undefined1 *unaff_RDI;
  
  *param_2 = *param_2 | 0xc2;
  *unaff_RDI = in_AL;
  return;
}



// FUNCTION 14d7aa056 FUN_14d7aa056 body=6 status=ok
// SIG undefined FUN_14d7aa056(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa056(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa05e FUN_14d7aa05e body=8 status=ok
// SIG undefined FUN_14d7aa05e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa05e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa066 FUN_14d7aa066 body=6 status=ok
// SIG undefined FUN_14d7aa066(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa066(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa076 FUN_14d7aa076 body=1 status=ok
// SIG undefined FUN_14d7aa076(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa076(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa08a FUN_14d7aa08a body=3 status=ok
// SIG undefined FUN_14d7aa08a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa08a(void)

{
  bool in_ZF;
  bool in_OF;
  
  do {
  } while (in_ZF);
  if (in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa08e FUN_14d7aa08e body=6 status=ok
// SIG undefined FUN_14d7aa08e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa08e(longlong param_1)

{
  *(char *)(param_1 + 0x6e) = *(char *)(param_1 + 0x6e) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa09a FUN_14d7aa09a body=16 status=ok
// SIG undefined FUN_14d7aa09a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa09a(uint param_1,uint *param_2)

{
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  int unaff_EBP;
  longlong unaff_RDI;
  
  *param_2 = *param_2 | param_1;
  pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x3d0046c8);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + unaff_BH;
  piVar2 = (int *)(unaff_RDI + -0x2333ee3e + (longlong)param_2 * 8);
  *piVar2 = *piVar2 + unaff_EBP + (uint)CARRY1(bVar3,unaff_BH);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa0ab FUN_14d7aa0ab body=12 status=ok
// SIG undefined FUN_14d7aa0ab(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa0ab(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  int unaff_EBP;
  longlong unaff_RDI;
  byte in_CF;
  
  piVar1 = (int *)(unaff_RDI + -0x2333ee3e + param_2 * 8);
  *piVar1 = *piVar1 + unaff_EBP + (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa0c3 FUN_14d7aa0c3 body=34 status=ok
// SIG undefined FUN_14d7aa0c3(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7aa0d8) overlaps instruction at (ram,0x00014d7aa0d5)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7aa0c3(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  ulonglong in_RAX;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  ulonglong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  longlong in_FS_OFFSET;
  ulonglong unaff_retaddr;
  
  do {
    unaff_RBP = (ulonglong)*(uint *)(unaff_RBP - 0x6d59e200);
    *(uint *)(in_FS_OFFSET + 0x65abacfc614593af) = (uint)in_RAX ^ 0x46;
    puVar2 = unaff_RDI + 1;
    puVar1 = unaff_RSI + 1;
    *unaff_RDI = *unaff_RSI;
    in_RAX = (ulonglong)_DAT_88cbfdf235607879;
    uVar3 = unaff_retaddr >> 8;
    unaff_RSI = puVar1;
    unaff_RDI = puVar2;
    unaff_retaddr = unaff_RBP;
  } while ((POPCOUNT((byte)uVar3 & *(byte *)(in_RAX - 0x542ea7ce)) & 1U) == 0);
  *(undefined1 *)puVar2 = *(undefined1 *)puVar1;
  *(undefined1 *)(CONCAT71(unaff_00000019,unaff_BL) + 0x50) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa0e5 FUN_14d7aa0e5 body=1 status=ok
// SIG undefined FUN_14d7aa0e5(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7aa0e5(undefined8 param_1)

{
  ulonglong in_RAX;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  undefined8 unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  while( true ) {
    if ((POPCOUNT((byte)((ulonglong)param_1 >> 8) & *(byte *)(in_RAX - 0x542ea7ce)) & 1U) != 0)
    break;
    *unaff_RDI = *unaff_RSI;
    in_RAX = (ulonglong)_DAT_88cbfdf235607879;
    param_1 = unaff_RBP;
    unaff_RSI = unaff_RSI + 1;
    unaff_RDI = unaff_RDI + 1;
  }
  *(undefined1 *)unaff_RDI = *(undefined1 *)unaff_RSI;
  *(undefined1 *)(CONCAT71(unaff_00000019,unaff_BL) + 0x50) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa0e9 FUN_14d7aa0e9 body=11 status=ok
// SIG undefined FUN_14d7aa0e9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa0e9(void)

{
  longlong unaff_RBX;
  
  *(uint *)(unaff_RBX + -0x3f5b1586) = *(uint *)(unaff_RBX + -0x3f5b1586) >> 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa0f5 FUN_14d7aa0f5 body=4 status=ok
// SIG undefined FUN_14d7aa0f5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa0f5(int param_1)

{
  longlong unaff_RBX;
  int unaff_EDI;
  
  if (param_1 != unaff_EDI) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)(unaff_RBX + -0x3f5b1586) = *(uint *)(unaff_RBX + -0x3f5b1586) >> 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa0fd FUN_14d7aa0fd body=1 status=ok
// SIG undefined FUN_14d7aa0fd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa0fd(undefined8 param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  
  out(param_2,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa10e FUN_14d7aa10e body=14 status=ok
// SIG undefined FUN_14d7aa10e(void)

/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_14d7aa10e(void)

{
  ushort uVar1;
  undefined8 in_RAX;
  longlong unaff_RBX;
  bool in_PF;
  
  if (in_PF) {
    uVar1 = CONCAT11((char)((ulonglong)in_RAX >> 8) + -0x40,(char)in_RAX);
    return CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),uVar1) >> 8),
                    *(undefined1 *)(unaff_RBX + ((ulonglong)uVar1 & 0xff)));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa128 FUN_14d7aa128 body=1 status=ok
// SIG undefined FUN_14d7aa128(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa128(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa138 FUN_14d7aa138 body=7 status=ok
// SIG undefined FUN_14d7aa138(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa138(undefined8 param_1,char *param_2)

{
  char in_CF;
  
  *param_2 = *param_2 + -0x79 + in_CF;
  uRam0000000095037087 = 0x72c66200;
  in((short)param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa140 FUN_14d7aa140 body=16 status=ok
// SIG undefined FUN_14d7aa140(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa140(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *in_RAX;
  undefined4 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  *in_RAX = 0x72c66200;
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa151 FUN_14d7aa151 body=4 status=ok
// SIG undefined FUN_14d7aa151(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa151(longlong param_1)

{
  undefined8 in_RAX;
  byte in_CF;
  char in_PF;
  char in_AF;
  char in_ZF;
  char in_SF;
  
  if (param_1 == 1 || in_ZF != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRamf7a5c3d74a9e34aa =
       (int)CONCAT71(CONCAT61((int6)((ulonglong)in_RAX >> 0x10),
                              in_SF << 7 | in_ZF << 6 | in_AF << 4 | in_PF << 2 | 2U | in_CF),
                     uRamdb3d02b6f127f624);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa159 FUN_14d7aa159 body=1 status=ok
// SIG undefined FUN_14d7aa159(void)

void FUN_14d7aa159(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7aa15d FUN_14d7aa15d body=8 status=ok
// SIG undefined FUN_14d7aa15d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7aa19b) */
/* WARNING: Removing unreachable block (ram,0x00014d7aa19d) */

void FUN_14d7aa15d(uint param_1)

{
  char *pcVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint in_EAX;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_EDI;
  undefined4 unaff_0000003c;
  
  uVar3 = CONCAT31((int3)((in_EAX & 0xdfb2ebdf) >> 8),uRamc067305eab877b63);
  if ((int)(in_EAX & 0xdfb2ebdf) < 0) {
    pcVar1 = (char *)(CONCAT44(unaff_0000003c,unaff_EDI) + 5);
    *pcVar1 = *pcVar1 + 'T';
    out(0x2e,uVar3);
    in(0x5416);
    cRam00000000390a9062 = cRam00000000390a9062 + 'T';
    uRam00000000109253cd = uRam00000000109253cd ^ param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 == unaff_EDI) {
    puVar2 = (uint *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x3f5b1586);
    *puVar2 = *puVar2 >> 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa169 FUN_14d7aa169 body=65 status=ok
// SIG undefined FUN_14d7aa169(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7aa19b) */
/* WARNING: Removing unreachable block (ram,0x00014d7aa19d) */

void FUN_14d7aa169(uint param_1,longlong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  uint *puVar3;
  longlong in_RAX;
  char cVar4;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_EDI;
  undefined4 unaff_0000003c;
  
  from_bcd(*(unkbyte10 *)(in_RAX + -0x5478849d));
  pbVar1 = (byte *)(CONCAT44(unaff_0000003c,unaff_EDI) + -0x40);
  *pbVar1 = *pbVar1 ^ (byte)((ulonglong)in_RAX >> 8);
  if ((char)*pbVar1 < '\0') {
    pcVar2 = (char *)(CONCAT44(unaff_0000003c,unaff_EDI) + 5);
    cVar4 = (char)((ulonglong)param_2 >> 8);
    *pcVar2 = *pcVar2 + cVar4;
    *(uint *)(param_2 + -0x49) = *(uint *)(param_2 + -0x49) ^ param_1;
    out(0x2e,(int)in_RAX);
    in((short)param_2);
    *(char *)(param_2 + 0x28783c4c) = *(char *)(param_2 + 0x28783c4c) + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 == unaff_EDI) {
    puVar3 = (uint *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x3f5b1586);
    *puVar3 = *puVar3 >> 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa1b4 FUN_14d7aa1b4 body=14 status=ok
// SIG undefined FUN_14d7aa1b4(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7aa1b5) overlaps instruction at (ram,0x00014d7aa1b4)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7aa175) */
/* WARNING: Removing unreachable block (ram,0x00014d7aa19b) */
/* WARNING: Removing unreachable block (ram,0x00014d7aa19d) */
/* WARNING: Removing unreachable block (ram,0x00014d7aa18b) */

void FUN_14d7aa1b4(int param_1)

{
  uint *puVar1;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  int unaff_EDI;
  undefined4 unaff_0000003c;
  bool in_CF;
  bool in_PF;
  
  if ((!in_PF) && (in_CF)) {
    if (param_1 != unaff_EDI) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar1 = (uint *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x3f5b1586);
    *puVar1 = *puVar1 >> 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)CONCAT44(unaff_0000003c,unaff_EDI) = *(uint *)CONCAT44(unaff_0000003c,unaff_EDI) | 0x65;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa1cd FUN_14d7aa1cd body=12 status=ok
// SIG undefined FUN_14d7aa1cd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa1cd(longlong param_1)

{
  int *unaff_RDI;
  char in_ZF;
  
  param_1 = param_1 + -1;
  if (param_1 == 0 || in_ZF != '\0') {
    *unaff_RDI = *unaff_RDI -
                 (int)CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                               CONCAT11((byte)((ulonglong)param_1 >> 8) & DAT_1a11f041d,
                                        (char)param_1));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa1dd FUN_14d7aa1dd body=8 status=ok
// SIG undefined FUN_14d7aa1dd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa1dd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa20b FUN_14d7aa20b body=11 status=ok
// SIG undefined FUN_14d7aa20b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7aa211) */

void FUN_14d7aa20b(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa214 FUN_14d7aa214 body=16 status=ok
// SIG undefined FUN_14d7aa214(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa214(void)

{
  uint uVar1;
  byte bVar3;
  undefined8 in_RAX;
  byte *unaff_RDI;
  char in_SF;
  char in_OF;
  byte *pbVar2;
  
  if (in_OF != in_SF) {
    in(0x9d);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar3 = (byte)((ulonglong)in_RAX >> 8);
  uVar1 = ((int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar3 + *unaff_RDI,(char)in_RAX)
                        ) + -0x638998e5) - (uint)CARRY1(bVar3,*unaff_RDI);
  pbVar2 = (byte *)(ulonglong)uVar1;
  *pbVar2 = *pbVar2 - 0x2c;
  *pbVar2 = *pbVar2 ^ (byte)uVar1;
  func_0xd2788693();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa229 FUN_14d7aa229 body=18 status=ok
// SIG undefined FUN_14d7aa229(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa229(undefined8 param_1,undefined8 param_2)

{
  byte in_AL;
  undefined7 in_register_00000001;
  undefined8 *unaff_RBP;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + (char)((ulonglong)param_2 >> 8);
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) ^ in_AL;
  *unaff_RBP = 0x14d7aa23b;
  func_0xd2788693();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa23e FUN_14d7aa23e body=35 status=ok
// SIG undefined FUN_14d7aa23e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa23e(byte param_1,int *param_2)

{
  uint *puVar1;
  int in_EAX;
  byte *unaff_RBX;
  longlong unaff_RBP;
  byte *unaff_RSI;
  byte *unaff_RDI;
  bool in_CF;
  bool in_ZF;
  char unaff_retaddr;
  
  if (in_CF) {
    *param_2 = *param_2 + -0x2b;
    *(int *)((ulonglong)*unaff_RBX + 0x23854830) =
         *(int *)((ulonglong)*unaff_RBX + 0x23854830) + -0x74953bb3;
    if (param_1 < *unaff_RSI) {
      unaff_RDI[1] = unaff_RDI[1] + unaff_retaddr;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_ZF) {
    *(int *)(unaff_RBP + -0xdffcd73) = *(int *)(unaff_RBP + -0xdffcd73) - (int)unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_RSI;
  puVar1 = (uint *)((ulonglong)(uint)(in_EAX >> 0x1f) - 0x61);
  *puVar1 = *puVar1 & 0x16e9e074;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa253 FUN_14d7aa253 body=6 status=ok
// SIG undefined FUN_14d7aa253(void)

void FUN_14d7aa253(undefined8 param_1,longlong param_2)

{
  *(int *)(param_2 + -0x4e) = *(int *)(param_2 + -0x4e) + 1;
  return;
}



// FUNCTION 14d7aa25f FUN_14d7aa25f body=1 status=ok
// SIG undefined FUN_14d7aa25f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa25f(int param_1)

{
  uint *puVar1;
  undefined1 *unaff_RDI;
  undefined1 *unaff_retaddr;
  
  *unaff_RDI = *unaff_retaddr;
  puVar1 = (uint *)((ulonglong)(uint)(param_1 >> 0x1f) - 0x61);
  *puVar1 = *puVar1 & 0x16e9e074;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa277 FUN_14d7aa277 body=6 status=ok
// SIG undefined FUN_14d7aa277(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa277(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa283 FUN_14d7aa283 body=11 status=ok
// SIG undefined FUN_14d7aa283(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa283(byte param_1,int *param_2)

{
  byte *unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  byte in_CF;
  char unaff_retaddr;
  
  *param_2 = (*param_2 + -0x2a) - (uint)in_CF;
  *(int *)((ulonglong)*unaff_RBX + 0x23854830) =
       *(int *)((ulonglong)*unaff_RBX + 0x23854830) + -0x74953bb3;
  if (param_1 < *(byte *)(unaff_RSI + 8)) {
    *(char *)(unaff_RDI + 1) = *(char *)(unaff_RDI + 1) + unaff_retaddr;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa28f FUN_14d7aa28f body=4 status=ok
// SIG undefined FUN_14d7aa28f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa28f(byte param_1)

{
  byte *pbVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  char unaff_BL;
  undefined7 unaff_00000019;
  uint unaff_ESI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = in_AL;
  pbVar1 = (byte *)(CONCAT71(in_register_00000001,in_AL) + -0x7b);
  *pbVar1 = *pbVar1 ^ param_1;
  if (param_1 < *(byte *)(ulonglong)
                         (unaff_ESI & *(uint *)(CONCAT71(unaff_00000019,unaff_BL) + 0x5b74953b))) {
    unaff_RDI[2] = unaff_RDI[2] + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa2d9 FUN_14d7aa2d9 body=1 status=ok
// SIG undefined FUN_14d7aa2d9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa2d9(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa2dd FUN_14d7aa2dd body=8 status=ok
// SIG undefined FUN_14d7aa2dd(void)

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_14d7aa2dd(void)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined7 unaff_00000019;
  undefined4 unaff_EBP;
  byte *unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_ZF;
  
  uVar2 = (longlong)(int)unaff_RSI * -0x44060718;
  uVar3 = in(0x3c);
  *unaff_RDI = uVar3;
  if ((longlong)(int)uVar2 == uVar2 && !in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_ZF) {
    if ((byte)uVar2 < *unaff_RSI) {
      *(char *)((longlong)unaff_RDI + 5) = *(char *)((longlong)unaff_RDI + 5) + ';';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((uVar2 & 0xffffffff) == 1) {
    puVar1 = (undefined4 *)(CONCAT71(unaff_00000019,0x3b) + -0x71);
    *puVar1 = *puVar1;
    return unaff_EBP;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa2e5 FUN_14d7aa2e5 body=27 status=ok
// SIG undefined FUN_14d7aa2e5(void)

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_14d7aa2e5(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 in_EAX;
  undefined7 unaff_00000019;
  undefined4 unaff_EBP;
  byte *unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_CF;
  bool in_ZF;
  
  *unaff_RDI = in_EAX;
  if (!in_CF && !in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_ZF) {
    if ((byte)param_1 < *unaff_RSI) {
      *(char *)((longlong)unaff_RDI + 5) = *(char *)((longlong)unaff_RDI + 5) + ';';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 == 1) {
    puVar1 = (uint *)(CONCAT71(unaff_00000019,0x3b) + -0x71);
    uVar2 = *puVar1;
    *puVar1 = uVar2 | (uint)(CONCAT14(in_CF,uVar2) >> 0x21);
    return unaff_EBP;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa2fe FUN_14d7aa2fe body=1 status=ok
// SIG undefined FUN_14d7aa2fe(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa2fe(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa302 FUN_14d7aa302 body=1 status=ok
// SIG undefined FUN_14d7aa302(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa302(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa30b FUN_14d7aa30b body=6 status=ok
// SIG undefined FUN_14d7aa30b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa30b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x9d);
  (*pcVar1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa313 FUN_14d7aa313 body=5 status=ok
// SIG undefined FUN_14d7aa313(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa313(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa31b FUN_14d7aa31b body=12 status=ok
// SIG undefined FUN_14d7aa31b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa31b(byte param_1,undefined2 param_2)

{
  undefined1 uVar1;
  longlong in_RAX;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  
  *(byte *)(unaff_RSI + -0x105fbc87) = *(byte *)(unaff_RSI + -0x105fbc87) ^ param_1;
  *(byte *)(in_RAX + -0x2d) = param_1;
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa32b FUN_14d7aa32b body=3 status=ok
// SIG undefined FUN_14d7aa32b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7aa340) overlaps instruction at (ram,0x00014d7aa33c)
    */

void FUN_14d7aa32b(longlong param_1,longlong param_2)

{
  char cVar1;
  uint *puVar2;
  undefined8 unaff_RBP;
  uint unaff_ESI;
  char unaff_R12B;
  ushort in_GS;
  uint *unaff_retaddr;
  
  puVar2 = (uint *)(CONCAT62((int6)((ulonglong)unaff_RBP >> 0x10),in_GS) & 0xffffffff);
  if ((int)(*puVar2 & unaff_ESI) < 1) {
    cRam00000001aea4efad = (cRam00000001aea4efad + '>') - ((in_GS & 0x100) != 0);
    cVar1 = cRam00000001aea4efad;
  }
  else {
    *(char *)(param_2 + -0x7f615054) = *(char *)(param_2 + -0x7f615054) + -0x1d;
    puVar2 = unaff_retaddr;
    cVar1 = unaff_R12B - *(char *)(param_1 + 0xfeffffffc2);
  }
  if (-1 < cVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  DAT_97b61008e93a155f = (char)puVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa32f FUN_14d7aa32f body=28 status=ok
// SIG undefined FUN_14d7aa32f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa32f(longlong param_1,longlong param_2)

{
  byte unaff_BH;
  longlong unaff_RSI;
  char unaff_R12B;
  undefined1 unaff_retaddr;
  
  *(byte *)(unaff_RSI + 0xe) = *(byte *)(unaff_RSI + 0xe) ^ unaff_BH;
  *(char *)(param_2 + -0x7f615054) = *(char *)(param_2 + -0x7f615054) + -0x1d;
  if (-1 < (char)(unaff_R12B - *(char *)(param_1 + 0xfeffffffc2))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  DAT_97b61008e93a155f = unaff_retaddr;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa357 FUN_14d7aa357 body=8 status=ok
// SIG undefined FUN_14d7aa357(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa357(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa361 FUN_14d7aa361 body=6 status=ok
// SIG undefined FUN_14d7aa361(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa361(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa37e FUN_14d7aa37e body=3 status=ok
// SIG undefined FUN_14d7aa37e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa37e(void)

{
  longlong unaff_RBP;
  
  *(int *)(unaff_RBP + 0x71) = -*(int *)(unaff_RBP + 0x71);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa38f FUN_14d7aa38f body=16 status=ok
// SIG undefined FUN_14d7aa38f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa38f(void)

{
  char in_AL;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
  DAT_97b61008e93a155f = in_AL + -0x42;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa3a7 FUN_14d7aa3a7 body=8 status=ok
// SIG undefined FUN_14d7aa3a7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa3a7(void)

{
  byte *pbVar1;
  byte bVar2;
  short in_AX;
  byte unaff_BL;
  int unaff_ESI;
  undefined4 unaff_00000034;
  
  pbVar1 = (byte *)(((ulonglong)(uint)(int)in_AX - 100) + CONCAT44(unaff_00000034,unaff_ESI) * 2);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + unaff_BL;
  iRam0000000078226cfc = (iRam0000000078226cfc - unaff_ESI) - (uint)CARRY1(bVar2,unaff_BL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa3b4 FUN_14d7aa3b4 body=5 status=ok
// SIG undefined FUN_14d7aa3b4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa3b4(longlong param_1)

{
  char in_ZF;
  
  if (param_1 == 1 || in_ZF != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa3c0 FUN_14d7aa3c0 body=7 status=ok
// SIG undefined FUN_14d7aa3c0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa3c0(void)

{
  longlong unaff_RBP;
  byte in_CF;
  
  *(int *)(unaff_RBP + 0x65cbc165) = *(int *)(unaff_RBP + 0x65cbc165) + -0x7c + (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa3d0 FUN_14d7aa3d0 body=1 status=ok
// SIG undefined FUN_14d7aa3d0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa3d0(char *param_1,longlong param_2,undefined8 param_3,byte param_4)

{
  longlong unaff_RBX;
  undefined2 in_SS;
  
  *(byte *)(param_2 + 0xd7553aa) = *(byte *)(param_2 + 0xd7553aa) & param_4;
  *param_1 = *param_1 - (char)((ulonglong)param_1 >> 8);
  *(undefined2 *)(unaff_RBX + -0x2b7640c9) = in_SS;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa3d4 FUN_14d7aa3d4 body=8 status=ok
// SIG undefined FUN_14d7aa3d4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa3d4(char *param_1,int param_2)

{
  longlong lVar1;
  int in_EAX;
  char cVar2;
  longlong unaff_RBX;
  undefined1 *unaff_RDI;
  undefined2 in_SS;
  bool in_ZF;
  
  cVar2 = (char)((ulonglong)param_1 >> 8);
  *unaff_RDI = (char)in_EAX;
  if (in_ZF) {
    *param_1 = *param_1 - cVar2;
    *(undefined2 *)(unaff_RBX + -0x2b7640c9) = in_SS;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  lVar1 = (longlong)in_EAX * (longlong)param_2;
  unaff_RDI[1] = (unaff_RDI[1] - (char)lVar1) - ((int)lVar1 != lVar1);
  *(char *)((longlong)param_1 * 9) = *(char *)((longlong)param_1 * 9) + cVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7aa3d8 FUN_14d7aa3d8 body=10 status=ok
// SIG undefined FUN_14d7aa3d8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa3d8(char *param_1)

{
  longlong unaff_RBX;
  undefined2 in_SS;
  
  *param_1 = *param_1 - (char)((ulonglong)param_1 >> 8);
  *(undefined2 *)(unaff_RBX + -0x2b7640c9) = in_SS;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa3ec FUN_14d7aa3ec body=3 status=ok
// SIG undefined FUN_14d7aa3ec(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa3ec(void)

{
  undefined4 in_EAX;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa3f5 FUN_14d7aa3f5 body=1 status=ok
// SIG undefined FUN_14d7aa3f5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa3f5(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa415 FUN_14d7aa415 body=36 status=ok
// SIG undefined FUN_14d7aa415(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7aa445) overlaps instruction at (ram,0x00014d7aa43d)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7aa415(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  short sVar5;
  uint in_EAX;
  byte *pbVar6;
  longlong unaff_RBX;
  longlong *plVar7;
  longlong *plVar8;
  uint unaff_EBP;
  uint uVar9;
  uint *unaff_RSI;
  byte *unaff_RDI;
  undefined8 in_MM0;
  longlong alStackX_8 [4];
  
  _DAT_3051a60c00d3b2f7 = in_EAX;
  plVar7 = (longlong *)register0x00000020;
  if (-1 < (int)(in_EAX + 0xc781b620)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
    uVar9 = unaff_EBP;
    DAT_959481e5e91eb2e0 = (char)in_EAX;
    sVar5 = CONCAT11(0x70,DAT_959481e5e91eb2e0);
    *(uint *)(unaff_RBX + -0x74b5c16) = *(uint *)(unaff_RBX + -0x74b5c16) ^ (int)sVar5;
    lVar3 = *plVar7;
    plVar8 = plVar7 + 1;
    *(char *)(param_1 + -0x10) = *(char *)(param_1 + -0x10) + DAT_959481e5e91eb2e0;
    plVar7 = plVar7 + 1;
    in_EAX = uVar9;
    unaff_EBP = (int)sVar5;
  } while ((*unaff_RDI & (byte)lVar3) != 0);
  uVar2 = *unaff_RSI;
  *unaff_RDI = (byte)uVar2;
  psllw(in_MM0,*(undefined8 *)(param_1 + 0x23));
  out(unaff_RSI[1],(short)lVar3);
  out((short)lVar3,(char)uVar9);
  pbVar6 = (byte *)(ulonglong)uVar2;
  *(int *)((longlong)unaff_RSI + -0x331fed73) = *(int *)((longlong)unaff_RSI + -0x331fed73) + 0x4f;
  if (param_1 + -1 == 0 || *(char *)(lVar3 + 0x2de113b2) == (char)(uVar2 >> 8)) {
    *pbVar6 = *pbVar6 ^ (byte)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  lVar4 = *plVar8;
  *(uint *)(pbVar6 + 0x36007a68) = *(uint *)(pbVar6 + 0x36007a68) | (uint)(param_1 + -1);
  *(longlong *)(lVar4 + -8) = lVar3;
  *(undefined8 *)((ulonglong)((int)lVar4 + 0xe1045760) - 8) = 0x46;
  puVar1 = (uint *)(lVar3 * 5 + 0x5b584f00);
  *puVar1 = *puVar1 & 0x1efba898;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa43b FUN_14d7aa43b body=63 status=ok
// SIG undefined FUN_14d7aa43b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7aa445) overlaps instruction at (ram,0x00014d7aa43d)
    */

void FUN_14d7aa43b(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  char in_AL;
  byte *pbVar5;
  longlong *plVar6;
  longlong *plVar7;
  char unaff_BPL;
  char cVar8;
  uint *unaff_RSI;
  byte *unaff_RDI;
  char in_CF;
  undefined8 in_MM0;
  longlong alStackX_8 [4];
  
  plVar6 = (longlong *)register0x00000020;
  do {
    cVar8 = unaff_BPL;
    unaff_BPL = in_AL;
    lVar3 = *plVar6;
    plVar7 = plVar6 + 1;
    DAT_959481e5e91eb2e0 = unaff_BPL;
    *(char *)(param_1 + -0x10) = *(char *)(param_1 + -0x10) + unaff_BPL + in_CF;
    in_CF = '\0';
    plVar6 = plVar6 + 1;
    in_AL = cVar8;
  } while ((*unaff_RDI & (byte)lVar3) != 0);
  uVar2 = *unaff_RSI;
  *unaff_RDI = (byte)uVar2;
  psllw(in_MM0,*(undefined8 *)(param_1 + 0x23));
  out(unaff_RSI[1],(short)lVar3);
  out((short)lVar3,cVar8);
  pbVar5 = (byte *)(ulonglong)uVar2;
  *(int *)((longlong)unaff_RSI + -0x331fed73) = *(int *)((longlong)unaff_RSI + -0x331fed73) + 0x4f;
  if (param_1 + -1 == 0 || *(char *)(lVar3 + 0x2de113b2) == (char)(uVar2 >> 8)) {
    *pbVar5 = *pbVar5 ^ (byte)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  lVar4 = *plVar7;
  *(uint *)(pbVar5 + 0x36007a68) = *(uint *)(pbVar5 + 0x36007a68) | (uint)(param_1 + -1);
  *(longlong *)(lVar4 + -8) = lVar3;
  *(undefined8 *)((ulonglong)((int)lVar4 + 0xe1045760) - 8) = 0x46;
  puVar1 = (uint *)(lVar3 * 5 + 0x5b584f00);
  *puVar1 = *puVar1 & 0x1efba898;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa47e FUN_14d7aa47e body=8 status=ok
// SIG undefined FUN_14d7aa47e(void)

void FUN_14d7aa47e(void)

{
  undefined1 in_AL;
  undefined2 in_register_00000002;
  byte in_CF;
  char in_PF;
  char in_AF;
  char in_ZF;
  char in_SF;
  
  out(0x8c,CONCAT22(in_register_00000002,
                    CONCAT11(in_SF << 7 | in_ZF << 6 | in_AF << 4 | in_PF << 2 | 2U | in_CF,in_AL)))
  ;
  return;
}



// FUNCTION 14d7aa497 FUN_14d7aa497 body=6 status=ok
// SIG undefined FUN_14d7aa497(void)

void FUN_14d7aa497(undefined8 param_1,longlong param_2)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Could not recover jumptable at 0x00014d7aa49a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x4c))();
  return;
}



// FUNCTION 14d7aa4a7 FUN_14d7aa4a7 body=3 status=ok
// SIG undefined FUN_14d7aa4a7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa4a7(void)

{
  uint *in_RAX;
  
  *in_RAX = *in_RAX << 1 | (uint)((int)*in_RAX < 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa4ab FUN_14d7aa4ab body=2 status=ok
// SIG undefined FUN_14d7aa4ab(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa4ab(void)

{
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa4af FUN_14d7aa4af body=7 status=ok
// SIG undefined FUN_14d7aa4af(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7aa4b7) overlaps instruction at (ram,0x00014d7aa4b6)
    */

void FUN_14d7aa4af(uint param_1,ulonglong param_2)

{
  uint *puVar1;
  uint in_EAX;
  byte *pbVar2;
  ulonglong uVar3;
  uint unaff_EBX;
  undefined1 *puVar4;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  bool in_PF;
  bool in_ZF;
  char in_SF;
  char in_OF;
  undefined1 *unaff_retaddr;
  
  pbVar2 = (byte *)(ulonglong)param_1;
  uVar3 = (ulonglong)in_EAX;
  if (in_ZF || in_OF != in_SF) {
    param_2 = (ulonglong)
              ((uint)((ulonglong)
                      ((longlong)(int)param_1 * (longlong)*(int *)(unaff_RBP + 0x41f10faa)) >> 0x20)
              & *(uint *)(unaff_RBP - 0x11104891));
    pbVar2 = (byte *)(unaff_RBP & 0xffffffff);
    *(int *)(unaff_RSI + -0x331fed7b) = *(int *)(unaff_RSI + -0x331fed7b) + 0x4f;
    uVar3 = uVar3 - 1;
    if (uVar3 == 0 || *(char *)(param_2 + 0x2de113b2) == (char)((ulonglong)pbVar2 >> 8)) {
      *pbVar2 = *pbVar2 ^ (byte)pbVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    puVar4 = (undefined1 *)register0x00000020;
    if (in_PF) goto LAB_14d7aa4c7;
  }
  in_EAX = (uint)uVar3;
  unaff_EBX = 0x1efba898;
  puVar4 = unaff_retaddr;
LAB_14d7aa4c7:
  *(uint *)(pbVar2 + 0x36007a68) = *(uint *)(pbVar2 + 0x36007a68) | in_EAX;
  *(ulonglong *)(puVar4 + -8) = param_2;
  *(undefined8 *)((ulonglong)((int)(puVar4 + -8) - unaff_EBX) - 8) = 0x46;
  puVar1 = (uint *)(param_2 * 5 + 0x5b584f00);
  *puVar1 = *puVar1 & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa4b7 FUN_14d7aa4b7 body=8 status=ok
// SIG undefined FUN_14d7aa4b7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa4b7(uint param_1,longlong param_2)

{
  uint *puVar1;
  longlong in_RAX;
  longlong unaff_retaddr;
  
  *(uint *)(in_RAX + 0x36007a68) = *(uint *)(in_RAX + 0x36007a68) | param_1;
  *(longlong *)(unaff_retaddr + -8) = param_2;
  *(undefined8 *)((ulonglong)((int)unaff_retaddr + 0xe1045760) - 8) = 0x46;
  puVar1 = (uint *)(param_2 * 5 + 0x5b584f00);
  *puVar1 = *puVar1 & 0x1efba898;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa4bf FUN_14d7aa4bf body=36 status=ok
// SIG undefined FUN_14d7aa4bf(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa4bf(uint param_1,longlong param_2)

{
  uint *puVar1;
  longlong in_RAX;
  uint unaff_EBX;
  undefined1 auStack_8 [8];
  
  *(uint *)(in_RAX + 0x36007a68) = *(uint *)(in_RAX + 0x36007a68) | param_1;
  *(undefined8 *)((ulonglong)((int)auStack_8 - unaff_EBX) - 8) = 0x46;
  puVar1 = (uint *)(param_2 * 5 + 0x5b584f00);
  *puVar1 = *puVar1 & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa4e9 FUN_14d7aa4e9 body=6 status=ok
// SIG undefined FUN_14d7aa4e9(void)

void FUN_14d7aa4e9(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014d7aa4e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulonglong)*(uint *)(param_2 + -0x5b296625))();
  return;
}



// FUNCTION 14d7aa4fd FUN_14d7aa4fd body=5 status=ok
// SIG undefined FUN_14d7aa4fd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa4fd(void)

{
  in(0xd404);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa505 FUN_14d7aa505 body=3 status=ok
// SIG undefined FUN_14d7aa505(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa505(undefined8 param_1,undefined2 param_2)

{
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa50d FUN_14d7aa50d body=1 status=ok
// SIG undefined FUN_14d7aa50d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa50d(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa511 FUN_14d7aa511 body=18 status=ok
// SIG undefined FUN_14d7aa511(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa511(undefined8 param_1,char param_2)

{
  char *pcVar1;
  char cVar2;
  undefined7 in_register_00000001;
  undefined1 *unaff_RSI;
  char in_CF;
  char cVar3;
  
  pcVar1 = (char *)(CONCAT71(in_register_00000001,*unaff_RSI) + 0x139a8cc6);
  cVar2 = *pcVar1;
  cVar3 = *pcVar1;
  *pcVar1 = cVar3 + param_2 + in_CF;
  if ((SCARRY1(cVar2,param_2) != SCARRY1(cVar3 + param_2,in_CF)) == *pcVar1 < '\0') {
    *(int *)(unaff_RSI + -0x74) = -*(int *)(unaff_RSI + -0x74);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa525 FUN_14d7aa525 body=37 status=ok
// SIG undefined FUN_14d7aa525(void)

int FUN_14d7aa525(void)

{
  undefined1 uVar1;
  ulonglong in_RAX;
  byte bVar3;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *unaff_RDI;
  longlong unaff_retaddr;
  int *piVar2;
  
  uVar1 = *(undefined1 *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (in_RAX & 0xff));
  piVar2 = (int *)CONCAT71((int7)(in_RAX >> 8),uVar1);
  *unaff_RDI = uVar1;
  *piVar2 = *piVar2 + -0x65;
  bVar3 = (char)(in_RAX >> 0x18) >> 7;
  out(CONCAT11(bVar3 ^ unaff_BH,bVar3),(int)piVar2);
  unaff_RDI[5] = unaff_RDI[5] | (byte)(in_RAX >> 8);
  *(undefined8 *)(unaff_retaddr + -8) = 0xfffffffffc0da929;
  return (int)piVar2 + *(int *)(unaff_RDI + -0x7948da40);
}



// FUNCTION 14d7aa54a FUN_14d7aa54a body=3 status=ok
// SIG undefined FUN_14d7aa54a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa54a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa553 FUN_14d7aa553 body=9 status=ok
// SIG undefined FUN_14d7aa553(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7aa556) overlaps instruction at (ram,0x00014d7aa555)
    */

void FUN_14d7aa553(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa570 FUN_14d7aa570 body=25 status=ok
// SIG undefined FUN_14d7aa570(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa570(undefined1 *param_1)

{
  longlong *plVar1;
  byte *pbVar2;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  undefined1 unaff_BH;
  longlong unaff_RSI;
  byte in_CF;
  byte *unaff_retaddr;
  undefined8 uStackX_8;
  
  *unaff_retaddr = (byte)in_EAX;
  *param_1 = unaff_BH;
  plVar1 = (longlong *)(CONCAT44(in_register_00000004,in_EAX) + -0x66);
  *plVar1 = *plVar1 + 0x4e + (ulonglong)in_CF;
  pbVar2 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT31((int3)((uint)in_EAX >> 8),
                                      (byte)in_EAX | (byte)((ulonglong)*uStackX_8 >> 8))) +
                    -0x3c724c90 + unaff_RSI * 8);
  *pbVar2 = *pbVar2 & (byte)*uStackX_8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa59d FUN_14d7aa59d body=11 status=ok
// SIG undefined FUN_14d7aa59d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7aa59f) overlaps instruction at (ram,0x00014d7aa59d)
    */

void FUN_14d7aa59d(void)

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



// FUNCTION 14d7aa5c3 FUN_14d7aa5c3 body=1 status=ok
// SIG undefined FUN_14d7aa5c3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa5c3(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa5c7 FUN_14d7aa5c7 body=13 status=ok
// SIG undefined FUN_14d7aa5c7(void)

/* WARNING: Instruction at (ram,0x00014d7aa5cc) overlaps instruction at (ram,0x00014d7aa5ca)
    */

void FUN_14d7aa5c7(void)

{
  int *piVar1;
  char in_AL;
  undefined7 in_register_00000001;
  char in_CF;
  
  if (SCARRY1(in_AL,'&') == SCARRY1(in_AL + '&',in_CF)) {
    piVar1 = (int *)(CONCAT71(in_register_00000001,in_AL + '&' + in_CF) + 0x3f469b00);
    *piVar1 = *piVar1 << 1;
  }
  return;
}



// FUNCTION 14d7aa5d3 FUN_14d7aa5d3 body=16 status=ok
// SIG undefined FUN_14d7aa5d3(void)

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_14d7aa5d3(undefined8 param_1,undefined2 param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar4;
  undefined4 in_EAX;
  undefined3 uVar5;
  undefined4 in_register_00000004;
  byte unaff_BL;
  byte bVar6;
  undefined1 unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
  undefined2 in_SS;
  bool in_PF;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  
  if (!in_PF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = in(param_2);
  *unaff_RDI = uVar2;
  bVar6 = unaff_BL | *(byte *)(CONCAT44(in_register_00000004,in_EAX) + 0x2d);
  *(undefined2 *)(unaff_RSI + -0x6c70c113) = in_SS;
  if ((POPCOUNT(bVar6) & 1U) == 0) {
    uVar3 = *(uint *)(unaff_RSI + -0x60f1c32f);
    *(uint *)(unaff_RSI + -0x60f1c32f) = uVar3 << 0x19 | uVar3 >> 8;
    uVar5 = (undefined3)((uint)in_EAX >> 8);
    bVar4 = (byte)in_EAX &
            *(byte *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,bVar6))) +
                     0xc);
    *(ulonglong *)((ulonglong)(uint)unaff_RDI[-1] - 8) =
         (ulonglong)(in_NT & 1) * 0x4000 | 0x400 | (ulonglong)(in_IF & 1) * 0x200 |
         (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((char)bVar4 < '\0') * 0x80 |
         (ulonglong)(bVar4 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
         (ulonglong)((POPCOUNT(bVar4) & 1U) == 0) * 4 | (ulonglong)(in_ID & 1) * 0x200000 |
         (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
         (ulonglong)(in_AC & 1) * 0x40000;
    LOCK();
    pbVar1 = (byte *)(longlong)(CONCAT31(uVar5,bVar4) + 0x73);
    bVar6 = *pbVar1;
    *pbVar1 = bVar4;
    UNLOCK();
    return CONCAT31(uVar5,bVar6);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa5e3 FUN_14d7aa5e3 body=19 status=ok
// SIG undefined FUN_14d7aa5e3(void)

undefined4 FUN_14d7aa5e3(void)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  undefined4 in_EAX;
  undefined3 uVar5;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  longlong unaff_RSI;
  uint *unaff_RDI;
  undefined1 in_CF;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  
  uVar3 = *(uint *)(unaff_RSI + -0x60f1c32f);
  *(uint *)(unaff_RSI + -0x60f1c32f) = uVar3 << 0x19 | (uint)(CONCAT14(in_CF,uVar3) >> 8);
  uVar5 = (undefined3)((uint)in_EAX >> 8);
  bVar4 = (byte)in_EAX &
          *(byte *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                   0xc);
  *(ulonglong *)((ulonglong)*unaff_RDI - 8) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((char)bVar4 < '\0') * 0x80 |
       (ulonglong)(bVar4 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
       (ulonglong)((POPCOUNT(bVar4) & 1U) == 0) * 4 | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  LOCK();
  pbVar1 = (byte *)(longlong)(CONCAT31(uVar5,bVar4) + 0x73);
  bVar2 = *pbVar1;
  *pbVar1 = bVar4;
  UNLOCK();
  return CONCAT31(uVar5,bVar2);
}



// FUNCTION 14d7aa5f7 FUN_14d7aa5f7 body=10 status=ok
// SIG undefined FUN_14d7aa5f7(void)

undefined1 FUN_14d7aa5f7(void)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  uint in_EAX;
  
  LOCK();
  puVar1 = (undefined1 *)(longlong)(int)((in_EAX | 0x9c) + 0x73);
  uVar2 = *puVar1;
  *puVar1 = (char)(in_EAX | 0x9c);
  UNLOCK();
  return uVar2;
}



// FUNCTION 14d7aa603 FUN_14d7aa603 body=15 status=ok
// SIG undefined FUN_14d7aa603(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa603(void)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  undefined8 uStack_10;
  
  *(int *)((longlong)unaff_RBP + 0x36) =
       *(int *)((longlong)unaff_RBP + 0x36) - (int)&stack0x00000000;
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



// FUNCTION 14d7aa619 FUN_14d7aa619 body=3 status=ok
// SIG undefined FUN_14d7aa619(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7aa6ff) overlaps instruction at (ram,0x00014d7aa6fe)
    */

void FUN_14d7aa619(longlong param_1,undefined2 param_2)

{
  char *pcVar1;
  char cVar2;
  code *pcVar3;
  undefined1 uVar4;
  uint in_EAX;
  uint uVar5;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  byte bVar6;
  bool bVar7;
  int unaff_retaddr;
  undefined1 auStackX_10 [24];
  
  uVar5 = (in_EAX + 0x3d3c41e3) - (uint)((in_EAX & 0x100) != 0);
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 0x6d);
  cVar2 = *pcVar1;
  *pcVar1 = *pcVar1 - unaff_BL;
  out(*unaff_RSI,param_2);
  if (!SBORROW1(cVar2,unaff_BL)) {
    *(int *)(unaff_RBP + -0x7d) = *(int *)(unaff_RBP + -0x7d) + uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  LOCK();
  *(uint *)(ulonglong)uVar5 = uVar5;
  UNLOCK();
  uVar4 = (undefined1)unaff_RBP;
  bVar6 = (uint)unaff_RBP < 0x1b44cd9b;
  bVar7 = SBORROW4((uint)unaff_RBP,0x1b44cd9b);
  if (param_1 != 1) {
    pcVar3 = (code *)swi(0x44);
    uVar4 = (*pcVar3)();
    bVar7 = SBORROW4((int)auStackX_10,unaff_retaddr) !=
            SBORROW4((int)auStackX_10 - unaff_retaddr,(uint)bVar6);
  }
  if (bVar7) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(0,uVar4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7aa61d FUN_14d7aa61d body=18 status=ok
// SIG undefined FUN_14d7aa61d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7aa6ff) overlaps instruction at (ram,0x00014d7aa6fe)
    */

void FUN_14d7aa61d(longlong param_1,undefined2 param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined1 uVar3;
  int in_EAX;
  uint uVar4;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined4 *unaff_RDI;
  byte in_CF;
  byte bVar5;
  bool bVar6;
  int iStackX_8;
  undefined1 auStackX_18 [16];
  
  uVar4 = (in_EAX + -0x28c2c3be) - (uint)in_CF;
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  out(*unaff_RSI,param_2);
  if (SBORROW4(in_EAX,0x28c2c3be) == SBORROW4(in_EAX + -0x28c2c3be,(uint)in_CF)) {
    *(int *)(unaff_RBP + -0x7d) = *(int *)(unaff_RBP + -0x7d) + uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  LOCK();
  *(uint *)(ulonglong)uVar4 = uVar4;
  UNLOCK();
  uVar3 = (undefined1)unaff_RBP;
  bVar5 = (uint)unaff_RBP < 0x1b44cd9b;
  bVar6 = SBORROW4((uint)unaff_RBP,0x1b44cd9b);
  if (param_1 != 1) {
    pcVar2 = (code *)swi(0x44);
    uVar3 = (*pcVar2)();
    bVar6 = SBORROW4((int)auStackX_18,iStackX_8) !=
            SBORROW4((int)auStackX_18 - iStackX_8,(uint)bVar5);
  }
  if (bVar6) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(0,uVar3);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7aa632 FUN_14d7aa632 body=2 status=ok
// SIG undefined FUN_14d7aa632(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa632(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa63e FUN_14d7aa63e body=31 status=ok
// SIG undefined FUN_14d7aa63e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7aa63e(void)

{
  undefined4 in_EAX;
  undefined1 *unaff_RDI;
  char in_SF;
  char in_OF;
  
  if (in_OF == in_SF) {
    _DAT_302a97da801493e8 = CONCAT31((int3)((uint)in_EAX >> 8),DAT_44f783b3b339c3d4);
    *unaff_RDI = 0xe6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa65e FUN_14d7aa65e body=1 status=ok
// SIG undefined FUN_14d7aa65e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa65e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa662 FUN_14d7aa662 body=6 status=ok
// SIG undefined FUN_14d7aa662(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa662(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RDI;
  bool in_CF;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (in_OF == in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = in(param_2);
  if (!in_CF && !in_ZF) {
    *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa66a FUN_14d7aa66a body=14 status=ok
// SIG undefined FUN_14d7aa66a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa66a(void)

{
  uint *puVar1;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
  puVar1 = (uint *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0xd7f0400);
  *puVar1 = *puVar1 | unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa67b FUN_14d7aa67b body=6 status=ok
// SIG undefined FUN_14d7aa67b(void)

void FUN_14d7aa67b(void)

{
  code *pcVar1;
  
  func_0x0001ad60f734();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7aa688 FUN_14d7aa688 body=4 status=ok
// SIG undefined FUN_14d7aa688(void)

void FUN_14d7aa688(void)

{
  return;
}



// FUNCTION 14d7aa68c FUN_14d7aa68c body=13 status=ok
// SIG undefined FUN_14d7aa68c(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7aa6ff) overlaps instruction at (ram,0x00014d7aa6fe)
    */

void FUN_14d7aa68c(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  uint unaff_EBP;
  byte bVar3;
  bool bVar4;
  undefined4 *unaff_retaddr;
  int iStackX_10;
  undefined1 auStackX_20 [8];
  
  LOCK();
  *unaff_retaddr = (int)unaff_retaddr;
  UNLOCK();
  uVar2 = (undefined1)unaff_EBP;
  bVar3 = unaff_EBP < 0x1b44cd9b;
  bVar4 = SBORROW4(unaff_EBP,0x1b44cd9b);
  if (param_1 != 1) {
    pcVar1 = (code *)swi(0x44);
    uVar2 = (*pcVar1)();
    bVar4 = SBORROW4((int)auStackX_20,iStackX_10) !=
            SBORROW4((int)auStackX_20 - iStackX_10,(uint)bVar3);
  }
  if (bVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(0,uVar2);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7aa699 thunk_FUN_14d7aa6fb body=2 status=ok
// SIG undefined thunk_FUN_14d7aa6fb(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7aa6ff) overlaps instruction at (ram,0x00014d7aa6fe)
    */

void thunk_FUN_14d7aa6fb(longlong param_1,int param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  uint unaff_EBP;
  byte bVar3;
  bool bVar4;
  undefined1 auStackX_8 [32];
  
  uVar2 = (undefined1)unaff_EBP;
  bVar3 = unaff_EBP < 0x1b44cd9b;
  bVar4 = SBORROW4(unaff_EBP,0x1b44cd9b);
  if (param_1 != 1) {
    pcVar1 = (code *)swi(0x44);
    uVar2 = (*pcVar1)();
    bVar4 = SBORROW4((int)auStackX_8,param_2) != SBORROW4((int)auStackX_8 - param_2,(uint)bVar3);
  }
  if (bVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(0,uVar2);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7aa6a5 FUN_14d7aa6a5 body=8 status=ok
// SIG undefined FUN_14d7aa6a5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa6a5(longlong param_1,undefined2 param_2)

{
  undefined1 in_AL;
  
  out(param_2,in_AL);
  if (param_1 == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa6ba FUN_14d7aa6ba body=19 status=ok
// SIG undefined FUN_14d7aa6ba(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa6ba(void)

{
  undefined1 in_AL;
  
  out(0x78,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa6e9 FUN_14d7aa6e9 body=17 status=ok
// SIG undefined FUN_14d7aa6e9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa6e9(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  ulonglong in_RAX;
  char cVar3;
  byte bVar4;
  byte unaff_BL;
  int iVar6;
  longlong unaff_RBP;
  byte bVar7;
  bool bVar8;
  undefined1 auStackX_8 [32];
  int iVar5;
  
  iVar6 = (int)&stack0x00000000;
  bVar8 = (byte)((byte)in_RAX | 0x97) == 0;
  from_bcd(*(unkbyte10 *)(((in_RAX | 0x97) - 0x79) + param_2 * 2));
  if (param_1 == 1 || bVar8) {
    if (bVar8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar4 = (char)(in_RAX >> 0x18) >> 7;
    bVar7 = bVar4 < *(byte *)(unaff_RBP + -0x64c23ac6);
    iVar5 = CONCAT31((int3)(in_RAX >> 8) >> 0x17,bVar4 - *(byte *)(unaff_RBP + -0x64c23ac6));
    pcVar1 = (code *)swi(0x44);
    uVar2 = (*pcVar1)();
    iVar6 = (int)auStackX_8;
  }
  else {
    uVar2 = (undefined1)(in_RAX | 0x97);
    bVar7 = CARRY1((byte)param_2,unaff_BL);
    cVar3 = (byte)param_2 + unaff_BL;
    iVar5 = (int)CONCAT71((int7)((ulonglong)param_2 >> 8),cVar3);
    if (cVar3 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if (SBORROW4(iVar6,iVar5) != SBORROW4(iVar6 - iVar5,(uint)bVar7)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(0,uVar2);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7aa6fb FUN_14d7aa6fb body=39 status=ok
// SIG undefined FUN_14d7aa6fb(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7aa6ff) overlaps instruction at (ram,0x00014d7aa6fe)
    */

void FUN_14d7aa6fb(longlong param_1,int param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  uint unaff_EBP;
  byte bVar3;
  bool bVar4;
  undefined1 auStackX_8 [32];
  
  uVar2 = (undefined1)unaff_EBP;
  bVar3 = unaff_EBP < 0x1b44cd9b;
  bVar4 = SBORROW4(unaff_EBP,0x1b44cd9b);
  if (param_1 != 1) {
    pcVar1 = (code *)swi(0x44);
    uVar2 = (*pcVar1)();
    bVar4 = SBORROW4((int)auStackX_8,param_2) != SBORROW4((int)auStackX_8 - param_2,(uint)bVar3);
  }
  if (bVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(0,uVar2);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7aa71d FUN_14d7aa71d body=59 status=ok
// SIG undefined FUN_14d7aa71d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa71d(char param_1,undefined8 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  undefined8 in_RAX;
  longlong unaff_RBP;
  uint *unaff_RSI;
  char *unaff_RDI;
  byte in_CF;
  bool in_ZF;
  
  uVar2 = *unaff_RSI;
  if (in_ZF) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)(param_1,(int)param_2 + *(int *)(CONCAT44((int)((ulonglong)in_RAX >> 0x20),uVar2) + -5)
                      + (uint)in_CF);
    return;
  }
  do {
  } while (uVar2 < 0x1f528e1e && !CARRY4(uVar2 + 0xe0ad71e2,(uint)in_CF));
  bVar3 = unaff_RDI[unaff_RBP * 2 + 0x54];
  uVar1 = **(undefined1 **)((ulonglong)(uVar2 + 0xe0ad71e2 + (uint)in_CF) + 8);
  *unaff_RDI = *unaff_RDI + (char)((ulonglong)param_2 >> 8);
  out((short)CONCAT71((int7)((ulonglong)param_2 >> 8),(byte)param_2 ^ bVar3),uVar1);
  if (!SCARRY1(param_1,-0x20)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa769 FUN_14d7aa769 body=26 status=ok
// SIG undefined FUN_14d7aa769(void)

void FUN_14d7aa769(undefined8 param_1,int param_2)

{
  byte bVar1;
  code *pcVar2;
  int in_EAX;
  uint uVar3;
  longlong unaff_RBX;
  uint *unaff_RDI;
  undefined8 unaff_retaddr;
  
  uVar3 = in_EAX + 0x309fed67;
  unaff_RDI[1] = uVar3;
  bVar1 = (byte)uVar3 + *(byte *)(unaff_RBX + -0x321654ca);
  pcVar2 = (code *)swi(3);
  (*pcVar2)(unaff_retaddr,
            param_2 + *(int *)((ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar1 + (uVar3 < *unaff_RDI))
                              - 5) +
            (uint)(CARRY1((byte)uVar3,*(byte *)(unaff_RBX + -0x321654ca)) ||
                  CARRY1(bVar1,uVar3 < *unaff_RDI)));
  return;
}



// FUNCTION 14d7aa787 FUN_14d7aa787 body=3 status=ok
// SIG undefined FUN_14d7aa787(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa787(longlong param_1)

{
  char in_ZF;
  
  if (param_1 == 1 || in_ZF != '\0') {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa797 FUN_14d7aa797 body=10 status=ok
// SIG undefined FUN_14d7aa797(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa797(longlong param_1)

{
  byte *pbVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  
  pbVar1 = (byte *)(param_1 + 0x4d6200d5 + CONCAT71(in_register_00000001,in_AL) * 2);
  *pbVar1 = *pbVar1 ^ 0xfa;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa7ac FUN_14d7aa7ac body=12 status=ok
// SIG undefined FUN_14d7aa7ac(void)

undefined2 FUN_14d7aa7ac(undefined8 param_1,char param_2)

{
  undefined1 in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  undefined1 *unaff_RSI;
  byte in_CF;
  char in_PF;
  char in_AF;
  char in_ZF;
  char in_SF;
  float10 in_ST0;
  
  *(longlong *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) = (longlong)in_ST0;
  cRam0000000046042c1a = cRam0000000046042c1a + param_2;
  return CONCAT11(in_SF << 7 | in_ZF << 6 | in_AF << 4 | in_PF << 2 | 2U | in_CF,*unaff_RSI);
}



// FUNCTION 14d7aa7b9 FUN_14d7aa7b9 body=1 status=ok
// SIG undefined FUN_14d7aa7b9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa7b9(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa7bd FUN_14d7aa7bd body=2 status=ok
// SIG undefined FUN_14d7aa7bd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa7bd(void)

{
  unkbyte10 in_ST2;
  
  ffree(in_ST2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa7c5 FUN_14d7aa7c5 body=4 status=ok
// SIG undefined FUN_14d7aa7c5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa7c5(void)

{
  in(0xd4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa7e2 FUN_14d7aa7e2 body=15 status=ok
// SIG undefined FUN_14d7aa7e2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa7e2(longlong param_1)

{
  longlong unaff_RBP;
  bool in_CF;
  bool in_ZF;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  
  if (in_CF || in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 == 1 || in_ZF == false) {
    *(undefined2 *)(unaff_RBP + 0x4d) = in_FPUControlWord;
    *(undefined2 *)(unaff_RBP + 0x51) = in_FPUStatusWord;
    *(undefined2 *)(unaff_RBP + 0x55) = in_FPUTagWord;
    *(undefined8 *)(unaff_RBP + 0x61) = in_FPUDataPointer;
    *(undefined8 *)(unaff_RBP + 0x59) = in_FPUInstructionPointer;
    *(undefined2 *)(unaff_RBP + 0x5f) = in_FPULastInstructionOpcode;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa7f2 FUN_14d7aa7f2 body=2 status=ok
// SIG undefined FUN_14d7aa7f2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa7f2(longlong param_1,undefined2 param_2)

{
  undefined4 uVar1;
  uint in_EAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined4 *unaff_RDI;
  float10 in_ST0;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  *(int *)(unaff_RBP + -0x26211e1e + param_1 * 4) = (int)ROUND(in_ST0);
  if ((in_EAX & 0x4000) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RBX + 0x77) = *(char *)(unaff_RBX + 0x77) + (char)param_2;
  uRamc022ada9d1c5a7ab = (char)in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa80a FUN_14d7aa80a body=12 status=ok
// SIG undefined FUN_14d7aa80a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa80a(longlong param_1)

{
  char in_ZF;
  
  if (param_1 == 1 || in_ZF == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa824 FUN_14d7aa824 body=2 status=ok
// SIG undefined FUN_14d7aa824(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa824(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa828 FUN_14d7aa828 body=1 status=ok
// SIG undefined FUN_14d7aa828(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa828(void)

{
  undefined1 in_AL;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa82c FUN_14d7aa82c body=10 status=ok
// SIG undefined FUN_14d7aa82c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa82c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa839 FUN_14d7aa839 body=3 status=ok
// SIG undefined FUN_14d7aa839(void)

undefined4 FUN_14d7aa839(void)

{
  undefined4 uVar1;
  
  uVar1 = in(0x9a);
  return uVar1;
}



// FUNCTION 14d7aa83e FUN_14d7aa83e body=4 status=ok
// SIG undefined FUN_14d7aa83e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa83e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa846 FUN_14d7aa846 body=3 status=ok
// SIG undefined FUN_14d7aa846(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa846(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 *in_RAX;
  int *unaff_RBX;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  bool in_CF;
  bool in_ZF;
  float10 in_ST0;
  
  uVar1 = *in_RAX;
  if (in_CF || in_ZF) {
    *(undefined1 *)(param_2 + -0x2e3a5855) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(float10 *)(unaff_RSI + -0x1e688060 + param_2 * 2) = in_ST0 * (float10)*unaff_RBX;
  *unaff_RDI = (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa853 FUN_14d7aa853 body=2 status=ok
// SIG undefined FUN_14d7aa853(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa853(void)

{
  undefined4 in_EAX;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa863 FUN_14d7aa863 body=4 status=ok
// SIG undefined FUN_14d7aa863(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa863(void)

{
  char *pcVar1;
  byte in_AL;
  longlong unaff_RBX;
  longlong unaff_retaddr;
  
  pcVar1 = (char *)(unaff_retaddr + -0xc403684 + unaff_RBX * 4);
  *pcVar1 = *pcVar1 + (in_AL ^ 0x1f);
  out(0xb4,(uint)unaff_retaddr ^ 0x2973fd);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa868 FUN_14d7aa868 body=12 status=ok
// SIG undefined FUN_14d7aa868(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa868(void)

{
  uint unaff_ESI;
  
  out(0xb4,unaff_ESI ^ 0x2973fd);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa879 FUN_14d7aa879 body=2 status=ok
// SIG undefined FUN_14d7aa879(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa879(void)

{
  undefined4 in_EAX;
  
  out(0xb4,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa87d FUN_14d7aa87d body=64 status=ok
// SIG undefined FUN_14d7aa87d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7aa8a1) overlaps instruction at (ram,0x00014d7aa8a0)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7aa87d(byte param_1)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  uint in_EAX;
  ulonglong uVar4;
  int iVar5;
  byte unaff_BL;
  char cVar6;
  undefined7 unaff_00000019;
  int *unaff_RSI;
  longlong unaff_RDI;
  float10 in_ST0;
  
  if ((POPCOUNT(DAT_8f9754e5) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 0x42127152);
  cVar2 = *pcVar1;
  *pcVar1 = -*pcVar1;
  out(0xd,0);
  cVar6 = (unaff_BL + 0xac) - (cVar2 != '\0');
  if ((POPCOUNT(cVar6) & 1U) == 0) {
    bVar3 = (param_1 & 0x1f) % 9;
    *(byte *)CONCAT71(unaff_00000019,cVar6) =
         (byte)(CONCAT11(unaff_BL < 0x54 || (byte)(unaff_BL + 0xac) < (cVar2 != '\0'),
                         *(char *)CONCAT71(unaff_00000019,cVar6)) >> bVar3) |
         *(char *)CONCAT71(unaff_00000019,cVar6) << 9 - bVar3;
    *(undefined8 *)((ulonglong)in_EAX - 8) = 0x8f9754ae;
    out(*unaff_RSI,0x54ae);
    iVar5 = (int)CONCAT62((uint6)((ulonglong)&stack0x00000000 >> 0x10) & 0xffff,0x9d00);
    *(undefined8 *)((ulonglong)in_EAX - 0x10) = 0x14d7aa8ae;
    uVar4 = func_0x0001178607ae();
    *(float *)(unaff_RDI + 0x23) = (float)in_ST0;
    unaff_RSI[-1] = (unaff_RSI[-1] - iVar5) - (uint)((uVar4 & 0x100) != 0);
    _DAT_005d39de = 0x6f;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RSI = *unaff_RSI + -0x7068ab52 + (uint)(in_EAX < _DAT_8f9754d3);
  FUN_14d7aa9a5();
  return;
}



// FUNCTION 14d7aa8b8 FUN_14d7aa8b8 body=4 status=ok
// SIG undefined FUN_14d7aa8b8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa8b8(undefined8 param_1,int param_2)

{
  int *unaff_RSI;
  byte in_CF;
  
  *unaff_RSI = (*unaff_RSI - param_2) - (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa8d5 FUN_14d7aa8d5 body=3 status=ok
// SIG undefined FUN_14d7aa8d5(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7aa964) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7aa8d5(undefined8 param_1,undefined2 param_2)

{
  uint *puVar1;
  byte in_AL;
  byte in_AH;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined2 unaff_0000001a;
  int *unaff_RSI;
  longlong unaff_RDI;
  byte unaff_R12B;
  byte unaff_R15B;
  float10 in_ST0;
  
  out(param_2,in_AL | 0xa0);
  if (!CARRY1(unaff_R12B,unaff_R15B)) {
    puVar1 = (uint *)((ulonglong)((int)unaff_RDI + 0x9711710) + 0x3100b578);
    *puVar1 = *puVar1 & CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(float *)(unaff_RDI + 0x23) = (float)in_ST0;
  *unaff_RSI = (*unaff_RSI + 0x9711710) - (uint)((in_AH & 1) != 0);
  _DAT_005d39de = 0x6f;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa8f0 FUN_14d7aa8f0 body=13 status=ok
// SIG undefined FUN_14d7aa8f0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa8f0(undefined4 param_1,int param_2)

{
  uint *puVar1;
  undefined4 in_EAX;
  uint unaff_EBX;
  longlong unaff_RBP;
  int unaff_EDI;
  bool in_ZF;
  
  if (in_ZF) {
    puVar1 = (uint *)((ulonglong)(uint)(unaff_EDI - param_2) + 0x3100b578);
    *puVar1 = *puVar1 & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RBP + 0x5b3a7a1e) =
       *(char *)(unaff_RBP + 0x5b3a7a1e) + ((byte)((uint)param_1 >> 8) | (byte)((uint)in_EAX >> 8));
  return;
}



// FUNCTION 14d7aa909 FUN_14d7aa909 body=5 status=ok
// SIG undefined FUN_14d7aa909(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa909(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa922 FUN_14d7aa922 body=17 status=ok
// SIG undefined FUN_14d7aa922(void)

void FUN_14d7aa922(void)

{
  FUN_14d7aa9a5();
  return;
}



// FUNCTION 14d7aa93b FUN_14d7aa93b body=1 status=ok
// SIG undefined FUN_14d7aa93b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa93b(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa958 FUN_14d7aa958 body=6 status=ok
// SIG undefined FUN_14d7aa958(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa958(void)

{
  longlong unaff_RBP;
  float10 in_ST0;
  
  *(double *)(unaff_RBP + -0x2d3dbdcd) = (double)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa971 FUN_14d7aa971 body=16 status=ok
// SIG undefined FUN_14d7aa971(void)

void FUN_14d7aa971(undefined8 param_1,uint param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined4 unaff_EBP;
  longlong unaff_RSI;
  
  uVar2 = (ulonglong)((uint)&stack0x00000000 & param_2);
  in((short)param_2);
  *(undefined4 *)(unaff_RSI + 1) = unaff_EBP;
  *(ulonglong *)(uVar2 - 8) = uVar2;
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7aa982 FUN_14d7aa982 body=1 status=ok
// SIG undefined FUN_14d7aa982(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa982(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa986 FUN_14d7aa986 body=5 status=ok
// SIG undefined FUN_14d7aa986(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa986(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa993 FUN_14d7aa993 body=15 status=ok
// SIG undefined FUN_14d7aa993(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa993(void)

{
  undefined1 in_AL;
  longlong in_FS_OFFSET;
  
  *(undefined1 *)(in_FS_OFFSET + 0x39ac881cd4cb26c9) = in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa9a5 FUN_14d7aa9a5 body=2 status=ok
// SIG undefined FUN_14d7aa9a5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa9a5(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa9af FUN_14d7aa9af body=7 status=ok
// SIG undefined FUN_14d7aa9af(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa9af(longlong param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined1 in_AL;
  undefined1 *unaff_RDI;
  
  out(param_2,in_AL);
  *(byte *)(param_1 + -0x1119f9dd) = *(byte *)(param_1 + -0x1119f9dd) >> 1;
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa9b8 FUN_14d7aa9b8 body=12 status=ok
// SIG undefined FUN_14d7aa9b8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aa9b8(byte param_1,undefined2 param_2)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  undefined1 in_CF;
  
  bVar3 = (param_1 & 0x1f) % 9;
  bVar2 = unaff_RDI[unaff_RSI * 4];
  unaff_RDI[unaff_RSI * 4] = (byte)(CONCAT11(in_CF,bVar2) >> bVar3) | bVar2 << 9 - bVar3;
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa9cd FUN_14d7aa9cd body=3 status=ok
// SIG undefined FUN_14d7aa9cd(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7aa9cd(undefined8 param_1,uint *param_2)

{
  uint *puVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 in_RAX;
  ulonglong uVar6;
  uint uVar7;
  char unaff_BL;
  undefined8 *puVar8;
  ulonglong unaff_RBP;
  undefined1 *unaff_RSI;
  int unaff_EDI;
  undefined4 unaff_0000003c;
  undefined2 in_CS;
  undefined1 in_CF;
  bool bVar9;
  undefined1 in_ZF;
  
  uVar6 = CONCAT71((int7)((ulonglong)in_RAX >> 8),*unaff_RSI);
  out(0x27,*unaff_RSI);
  do {
    if (!(bool)in_CF && !(bool)in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar1 = (uint *)(uVar6 - 0x36);
    bVar9 = (*puVar1 & 1) != 0;
    *puVar1 = *puVar1 >> 1 | (uint)bVar9 << 0x1f;
    *(ulonglong *)((longlong)register0x00000020 + -8) = uVar6;
    uVar4 = (uint)bVar9;
    uVar3 = *param_2;
    uVar7 = (uint)param_1;
    uVar5 = *param_2 + uVar7;
    *param_2 = uVar5 + uVar4;
    _DAT_a22387237bfd8946 = (undefined4)uVar6;
    param_1 = *(undefined8 *)((longlong)register0x00000020 + -8);
    puVar8 = (undefined8 *)((longlong)register0x00000020 + -8);
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
    *puVar8 = 0xffffffffffffffbd;
    unaff_RBP = (ulonglong)
                ((int)unaff_RBP + unaff_EDI + (uint)(CARRY4(uVar3,uVar7) || CARRY4(uVar5,uVar4)));
    pcVar2 = (char *)(CONCAT44(unaff_0000003c,unaff_EDI) + 0x1d02417a);
    *pcVar2 = *pcVar2 + unaff_BL;
    *(undefined2 *)(unaff_RBP + 100) = in_CS;
    in_CF = false;
    in_ZF = (*(byte *)(uVar6 | 0xd5) & 6) == 0;
    _DAT_d7b3b245a576217d = in(0x7c);
    uVar6 = (ulonglong)_DAT_d7b3b245a576217d;
  } while (!(bool)in_ZF);
  *(char *)(uVar6 - 0x74e76f56) = *(char *)(uVar6 - 0x74e76f56) + (char)(_DAT_d7b3b245a576217d >> 8)
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aa9d1 FUN_14d7aa9d1 body=70 status=ok
// SIG undefined FUN_14d7aa9d1(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7aa9d1(uint param_1,uint *param_2)

{
  uint *puVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar5;
  ulonglong in_RAX;
  char unaff_BL;
  int unaff_EBP;
  int unaff_EDI;
  undefined4 unaff_0000003c;
  undefined2 in_CS;
  bool in_CF;
  bool bVar6;
  bool in_ZF;
  uint uVar4;
  
  if (in_CF || in_ZF) {
    puVar1 = (uint *)(in_RAX - 0x36);
    bVar6 = (*puVar1 & 1) != 0;
    *puVar1 = *puVar1 >> 1 | (uint)bVar6 << 0x1f;
    uVar5 = (uint)bVar6;
    uVar3 = *param_2;
    uVar4 = *param_2;
    *param_2 = uVar4 + param_1 + uVar5;
    _DAT_a22387237bfd8946 = (undefined4)in_RAX;
    pcVar2 = (char *)(CONCAT44(unaff_0000003c,unaff_EDI) + 0x1d02417a);
    *pcVar2 = *pcVar2 + unaff_BL;
    *(undefined2 *)
     ((ulonglong)
      (unaff_EBP + unaff_EDI + (uint)(CARRY4(uVar3,param_1) || CARRY4(uVar4 + param_1,uVar5))) + 100
     ) = in_CS;
    _DAT_d7b3b245a576217d = in(0x7c);
    if ((*(byte *)(in_RAX | 0xd5) & 6) == 0) {
      *(char *)((ulonglong)_DAT_d7b3b245a576217d - 0x74e76f56) =
           *(char *)((ulonglong)_DAT_d7b3b245a576217d - 0x74e76f56) +
           (char)(_DAT_d7b3b245a576217d >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aaa1c FUN_14d7aaa1c body=6 status=ok
// SIG undefined FUN_14d7aaa1c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aaa1c(void)

{
  undefined4 in_EAX;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
  undefined8 unaff_retaddr;
  
  *(undefined8 *)(unaff_RSI + -0x4035b916) = unaff_retaddr;
  uRambf8106c4e6c016dd = (undefined1)in_EAX;
  *unaff_RDI = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aaa42 FUN_14d7aaa42 body=7 status=ok
// SIG undefined FUN_14d7aaa42(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aaa42(char param_1)

{
  longlong unaff_RDI;
  
  *(char *)(unaff_RDI + -0x1b) = *(char *)(unaff_RDI + -0x1b) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aaa4b FUN_14d7aaa4b body=11 status=ok
// SIG undefined FUN_14d7aaa4b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aaa4b(longlong param_1)

{
  undefined1 uVar1;
  ulonglong in_RAX;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  int *unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_ZF;
  
  if (in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = *(undefined1 *)(CONCAT71(unaff_00000019,unaff_BL) + (in_RAX & 0xff));
  *unaff_RSI = *unaff_RSI + 3;
  if (param_1 == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (*(code *)CONCAT71(unaff_00000019,unaff_BL))();
  *unaff_RDI = *(undefined4 *)(CONCAT71((int7)(in_RAX >> 8),uVar1) & 0xffffffff);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aaa53 FUN_14d7aaa53 body=8 status=ok
// SIG undefined FUN_14d7aaa53(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7aaafd) overlaps instruction at (ram,0x00014d7aaafc)
    */

void FUN_14d7aaa53(longlong param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  char cVar3;
  uint3 uVar4;
  undefined8 in_RAX;
  uint uVar5;
  uint uVar6;
  byte bVar8;
  undefined1 *puVar9;
  undefined8 *unaff_RBP;
  char *unaff_RSI;
  uint uVar10;
  uint *unaff_RDI;
  undefined1 in_CF;
  undefined1 *unaff_retaddr;
  undefined1 auStackX_8 [32];
  undefined1 auStack_1041 [3977];
  uint uVar7;
  
  while( true ) {
    bVar8 = unaff_RSI[-0x5f07811b];
    unaff_RSI[-0x5f07811b] = (byte)(CONCAT11(in_CF,bVar8) >> 2) | bVar8 << 7;
    *(char *)((longlong)unaff_RSI * 9) = *(char *)((longlong)unaff_RSI * 9) + (char)param_1;
    uVar4 = (int3)((ulonglong)in_RAX >> 8) >> 0x17;
    puVar1 = (uint *)(param_1 + -0x44);
    uVar6 = *puVar1;
    uVar10 = (uint)unaff_RDI;
    uVar5 = *puVar1;
    *puVar1 = *puVar1 - uVar10;
    uVar7 = *puVar1;
    bVar8 = (byte)in_RAX;
    if ((POPCOUNT(*puVar1 & 0xff) & 1U) != 0) break;
    in_CF = 0x80 < bVar8 || (byte)(0x80 - bVar8) < (uVar6 < uVar10);
  }
  if (SBORROW4(uVar5,uVar10) == (int)*puVar1 < 0) {
    return;
  }
  puVar9 = auStackX_8;
  if (param_1 + -1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (uVar6 < uVar10) {
    uVar5 = (uint)(param_1 + -1);
    uVar7 = (uint)CONCAT71((uint7)uVar4,0x80);
    uVar6 = uVar7 - uVar5;
    bVar8 = (byte)unaff_retaddr;
    *unaff_RSI = *unaff_RSI + bVar8 + (uVar7 < uVar5);
    unaff_retaddr = (undefined1 *)((ulonglong)unaff_RBP & 0xffffffff);
    if ((char)(bVar8 ^ *(byte *)((longlong)unaff_RBP + -1)) < '\0') {
      return;
    }
    *unaff_retaddr = *unaff_retaddr;
    cVar3 = '\x16';
    puVar2 = (undefined8 *)register0x00000020;
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar2 = puVar2 + -1;
      *puVar2 = *unaff_RBP;
      cVar3 = cVar3 + -1;
    } while ('\0' < cVar3);
    puVar9 = auStack_1041;
  }
  else {
    *(byte *)unaff_RDI = bVar8;
    if (param_1 + -2 == 0 || uVar7 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar6 = (uint)uVar4 << 8;
    *(uint *)((longlong)unaff_RDI + 1) =
         (uint)(param_1 + -2) &
         (uint)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(0x3c,bVar8));
    unaff_RDI = (uint *)((longlong)unaff_RDI + 1);
  }
  *(ulonglong *)(puVar9 + -8) = (ulonglong)uVar6;
  *(undefined8 *)(puVar9 + -0x10) = 0x14d7aab16;
  (*(code *)CONCAT71((int7)((ulonglong)unaff_retaddr >> 8),0x12))();
  *(undefined4 *)((longlong)unaff_RDI + 1) = *(undefined4 *)unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aaa60 FUN_14d7aaa60 body=3 status=ok
// SIG undefined FUN_14d7aaa60(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7aaafd) overlaps instruction at (ram,0x00014d7aaafc)
    */

void FUN_14d7aaa60(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 in_RAX;
  uint uVar7;
  byte bVar8;
  ulonglong uVar9;
  byte bVar10;
  undefined1 *puVar11;
  undefined8 *unaff_RBP;
  char *unaff_RSI;
  uint uVar12;
  uint *unaff_RDI;
  undefined1 *unaff_retaddr;
  undefined1 auStackX_8 [32];
  undefined1 auStack_1041 [3977];
  uint uVar3;
  
  while( true ) {
    puVar1 = (uint *)(param_1 + -0x44);
    uVar7 = *puVar1;
    uVar12 = (uint)unaff_RDI;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - uVar12;
    uVar3 = *puVar1;
    bVar10 = (byte)in_RAX;
    bVar8 = (byte)param_2;
    if ((POPCOUNT(*puVar1 & 0xff) & 1U) != 0) break;
    bVar4 = unaff_RSI[-0x5f07811b];
    unaff_RSI[-0x5f07811b] =
         (byte)(CONCAT11(bVar8 < bVar10 || (byte)(bVar8 - bVar10) < (uVar7 < uVar12),bVar4) >> 2) |
         bVar4 << 7;
    *(char *)((longlong)unaff_RSI * 9) = *(char *)((longlong)unaff_RSI * 9) + (char)param_1;
    param_2 = CONCAT71((uint7)(uint3)((int3)((ulonglong)in_RAX >> 8) >> 0x17),0x80);
  }
  if (SBORROW4(uVar2,uVar12) == (int)*puVar1 < 0) {
    return;
  }
  puVar11 = auStackX_8;
  if (param_1 + -1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (uVar7 < uVar12) {
    uVar7 = (uint)(param_1 + -1);
    uVar9 = (ulonglong)((uint)param_2 - uVar7);
    bVar10 = (byte)unaff_retaddr;
    *unaff_RSI = *unaff_RSI + bVar10 + ((uint)param_2 < uVar7);
    unaff_retaddr = (undefined1 *)((ulonglong)unaff_RBP & 0xffffffff);
    if ((char)(bVar10 ^ *(byte *)((longlong)unaff_RBP + -1)) < '\0') {
      return;
    }
    *unaff_retaddr = *unaff_retaddr;
    cVar6 = '\x16';
    puVar5 = (undefined8 *)register0x00000020;
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar5 = puVar5 + -1;
      *puVar5 = *unaff_RBP;
      cVar6 = cVar6 + -1;
    } while ('\0' < cVar6);
    puVar11 = auStack_1041;
  }
  else {
    *(byte *)unaff_RDI = bVar10;
    if (param_1 + -2 == 0 || uVar3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar9 = CONCAT71((int7)((ulonglong)param_2 >> 8),bVar8 * '\x02');
    *(uint *)((longlong)unaff_RDI + 1) =
         (uint)(param_1 + -2) &
         (uint)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(0x3c,bVar10));
    unaff_RDI = (uint *)((longlong)unaff_RDI + 1);
  }
  *(ulonglong *)(puVar11 + -8) = uVar9;
  *(undefined8 *)(puVar11 + -0x10) = 0x14d7aab16;
  (*(code *)CONCAT71((int7)((ulonglong)unaff_retaddr >> 8),0x12))();
  *(undefined4 *)((longlong)unaff_RDI + 1) = *(undefined4 *)unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aaa64 FUN_14d7aaa64 body=39 status=ok
// SIG undefined FUN_14d7aaa64(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7aaafd) overlaps instruction at (ram,0x00014d7aaafc)
    */

void FUN_14d7aaa64(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 in_RAX;
  uint uVar4;
  ulonglong uVar5;
  byte bVar6;
  undefined1 *puVar7;
  undefined8 *unaff_RBP;
  char *unaff_RSI;
  uint *unaff_RDI;
  bool in_CF;
  char in_ZF;
  char in_SF;
  char in_OF;
  undefined1 *unaff_retaddr;
  undefined1 auStackX_8 [32];
  undefined1 auStack_1041 [3977];
  
  uVar3 = in((short)param_2);
  if (in_OF == in_SF) {
    return;
  }
  puVar7 = auStackX_8;
  if (param_1 + -1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_CF) {
    uVar4 = (uint)(param_1 + -1);
    uVar5 = (ulonglong)((uint)param_2 - uVar4);
    bVar6 = (byte)unaff_retaddr;
    *unaff_RSI = *unaff_RSI + bVar6 + ((uint)param_2 < uVar4);
    unaff_retaddr = (undefined1 *)((ulonglong)unaff_RBP & 0xffffffff);
    if ((char)(bVar6 ^ *(byte *)((longlong)unaff_RBP + -1)) < '\0') {
      return;
    }
    *unaff_retaddr = *unaff_retaddr;
    cVar2 = '\x16';
    puVar1 = (undefined8 *)register0x00000020;
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar1 = puVar1 + -1;
      *puVar1 = *unaff_RBP;
      cVar2 = cVar2 + -1;
    } while ('\0' < cVar2);
    puVar7 = auStack_1041;
  }
  else {
    *(undefined1 *)unaff_RDI = uVar3;
    if (param_1 + -2 == 0 || in_ZF == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar5 = CONCAT71((int7)((ulonglong)param_2 >> 8),(char)param_2 * '\x02');
    *(uint *)((longlong)unaff_RDI + 1) =
         (uint)(param_1 + -2) &
         (uint)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(0x3c,uVar3));
    unaff_RDI = (uint *)((longlong)unaff_RDI + 1);
  }
  *(ulonglong *)(puVar7 + -8) = uVar5;
  *(undefined8 *)(puVar7 + -0x10) = 0x14d7aab16;
  (*(code *)CONCAT71((int7)((ulonglong)unaff_retaddr >> 8),0x12))();
  *(undefined4 *)((longlong)unaff_RDI + 1) = *(undefined4 *)unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aaa71 FUN_14d7aaa71 body=8 status=ok
// SIG undefined FUN_14d7aaa71(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aaa71(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aaa85 FUN_14d7aaa85 body=2 status=ok
// SIG undefined FUN_14d7aaa85(void)

undefined4 FUN_14d7aaa85(void)

{
  uint *puVar1;
  undefined4 uVar2;
  longlong unaff_RBP;
  
  uVar2 = in(0x2a);
  puVar1 = (uint *)(unaff_RBP + 0xff00cac151);
  *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
  return uVar2;
}



// FUNCTION 14d7aaa92 FUN_14d7aaa92 body=4 status=ok
// SIG undefined FUN_14d7aaa92(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aaa92(undefined8 param_1,ulonglong param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  undefined1 *unaff_RDI;
  
  uVar2 = param_2 & 0xffffffff | 0x41;
  pcVar1 = (char *)(uVar2 + 0x666d2573);
  *pcVar1 = *pcVar1 + (char)((param_2 & 0xffffffff) >> 8);
  *unaff_RDI = (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aaa96 FUN_14d7aaa96 body=16 status=ok
// SIG undefined FUN_14d7aaa96(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aaa96(void)

{
  char *pcVar1;
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  byte *unaff_RDI;
  
  pcVar1 = (char *)((CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) | 0x41) + 0x666d2573);
  *pcVar1 = *pcVar1 + in_AH;
  *unaff_RDI = in_AL | 0x41;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aaaae FUN_14d7aaaae body=3 status=ok
// SIG undefined FUN_14d7aaaae(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aaaae(longlong param_1)

{
  uint in_EAX;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  undefined4 *unaff_RDI;
  
  if (param_1 == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (*(code *)CONCAT71(unaff_00000019,unaff_BL))();
  *unaff_RDI = *(undefined4 *)(ulonglong)in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aaaba thunk_EXT_FUN_b01d5fc0 body=7 status=ok
// SIG undefined thunk_EXT_FUN_b01d5fc0(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_b01d5fc0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aaac2 FUN_14d7aaac2 body=21 status=ok
// SIG undefined FUN_14d7aaac2(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7aaafd) overlaps instruction at (ram,0x00014d7aaafc)
    */

void FUN_14d7aaac2(undefined8 param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong in_RAX;
  uint uVar4;
  longlong lVar5;
  byte bVar7;
  ulonglong uVar8;
  longlong unaff_RBX;
  undefined1 *puVar9;
  undefined8 *unaff_RBP;
  uint *unaff_RSI;
  uint *unaff_RDI;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined1 *unaff_retaddr;
  undefined1 auStackX_8 [32];
  undefined1 auStack_1041 [3977];
  byte bVar6;
  
  puVar1 = (uint *)(in_RAX + 0x51);
  *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
  bVar10 = false;
  bVar13 = false;
  bVar6 = (byte)((ulonglong)param_1 >> 8) | *(byte *)(unaff_RBX + 0x5b4d78a);
  lVar5 = CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(bVar6,(char)param_1));
  bVar12 = (char)bVar6 < '\0';
  bVar11 = bVar6 == 0;
  bVar6 = POPCOUNT(bVar6);
  if (lVar5 + -1 == 0 || !bVar11) {
    *unaff_RDI = *unaff_RSI;
    *(int *)(unaff_RBP + -0xeb328c0) = *(int *)(unaff_RBP + -0xeb328c0) - (int)&stack0x00000000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while (bVar7 = (byte)param_2, (bVar6 & 1) == 0) {
    bVar6 = *(byte *)((longlong)unaff_RSI + -0x5f07811b);
    *(byte *)((longlong)unaff_RSI + -0x5f07811b) =
         (byte)(CONCAT11(bVar7 < 0xfd || (byte)(bVar7 + 3) < bVar10,bVar6) >> 2) | bVar6 << 7;
    *(char *)((longlong)unaff_RSI * 9) = *(char *)((longlong)unaff_RSI * 9) + (char)(lVar5 + -1);
    param_2 = CONCAT71((uint7)(uint3)((int3)((ulonglong)in_RAX >> 8) >> 0x17),0x80);
    puVar1 = (uint *)(lVar5 + -0x45);
    uVar4 = (uint)unaff_RDI;
    bVar10 = *puVar1 < uVar4;
    bVar13 = SBORROW4(*puVar1,uVar4);
    *puVar1 = *puVar1 - uVar4;
    bVar12 = (int)*puVar1 < 0;
    bVar11 = *puVar1 == 0;
    bVar6 = POPCOUNT(*puVar1 & 0xff);
  }
  if (bVar13 == bVar12) {
    return;
  }
  puVar9 = auStackX_8;
  if (lVar5 + -2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar10) {
    uVar4 = (uint)(lVar5 + -2);
    uVar8 = (ulonglong)((uint)param_2 - uVar4);
    bVar6 = (byte)unaff_retaddr;
    *(byte *)unaff_RSI = (char)*unaff_RSI + bVar6 + ((uint)param_2 < uVar4);
    unaff_retaddr = (undefined1 *)((ulonglong)unaff_RBP & 0xffffffff);
    if ((char)(bVar6 ^ *(byte *)((longlong)unaff_RBP + -1)) < '\0') {
      return;
    }
    *unaff_retaddr = *unaff_retaddr;
    cVar3 = '\x16';
    puVar2 = (undefined8 *)register0x00000020;
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar2 = puVar2 + -1;
      *puVar2 = *unaff_RBP;
      cVar3 = cVar3 + -1;
    } while ('\0' < cVar3);
    puVar9 = auStack_1041;
  }
  else {
    *(undefined1 *)unaff_RDI = 0xfd;
    if (lVar5 + -3 == 0 || !bVar11) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar8 = CONCAT71((int7)((ulonglong)param_2 >> 8),bVar7 * '\x02');
    *(uint *)((longlong)unaff_RDI + 1) =
         (uint)(lVar5 + -3) & (uint)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),0x3cfd);
    unaff_RDI = (uint *)((longlong)unaff_RDI + 1);
  }
  *(ulonglong *)(puVar9 + -8) = uVar8;
  *(undefined8 *)(puVar9 + -0x10) = 0x14d7aab16;
  (*(code *)CONCAT71((int7)((ulonglong)unaff_retaddr >> 8),0x12))();
  *(uint *)((longlong)unaff_RDI + 1) = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aaaf8 FUN_14d7aaaf8 body=11 status=ok
// SIG undefined FUN_14d7aaaf8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aaaf8(byte param_1)

{
  char cVar1;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  char in_SF;
  char in_OF;
  undefined8 uStack_10;
  
  if (in_OF == in_SF) {
    *(char *)CONCAT71(unaff_00000019,unaff_BL) =
         *(char *)CONCAT71(unaff_00000019,unaff_BL) << (param_1 & 0x1f);
    puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
    cVar1 = '\x16';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar2 = puVar2 + -1;
      *puVar2 = *unaff_RBP;
      cVar1 = cVar1 + -1;
    } while ('\0' < cVar1);
    (*(code *)CONCAT71(unaff_00000019,0x12))();
    *(undefined4 *)(unaff_RDI + 1) = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// FUNCTION 14d7aab05 FUN_14d7aab05 body=22 status=ok
// SIG undefined FUN_14d7aab05(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7aab05(byte param_1)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  
  *(undefined4 *)(unaff_RBX + 0x24522e29) = unaff_ESI;
  _DAT_b812b3ae = _DAT_b812b3ae + 1;
  *(int *)(unaff_RBP + 0x7f29ded5) = *(int *)(unaff_RBP + 0x7f29ded5) << (param_1 & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aab1d FUN_14d7aab1d body=16 status=ok
// SIG undefined FUN_14d7aab1d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aab1d(longlong param_1)

{
  char cVar1;
  undefined8 in_RAX;
  char *pcVar2;
  undefined8 unaff_RBX;
  undefined8 *puVar3;
  undefined8 *unaff_RBP;
  undefined4 *unaff_RSI;
  undefined1 *unaff_RDI;
  byte in_CF;
  char in_PF;
  char in_AF;
  char in_ZF;
  char in_SF;
  bool in_OF;
  undefined1 auStack_69bd [26989];
  undefined1 *puStack_50;
  undefined8 uStack_20;
  
  *unaff_RDI = (char)in_RAX;
  puStack_50 = &stack0xffffffffffffffe8;
  puVar3 = (undefined8 *)&stack0xffffffffffffffe8;
  cVar1 = '\x06';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar3 = puVar3 + -1;
    *puVar3 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  if (in_OF) {
    out(0x12,0x18);
    pcVar2 = (char *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(0x38,(char)param_1));
    LOCK();
    *(char *)(((ulonglong)auStack_69bd & 0xffffffff) - 0x7eb0ffc3) =
         (char)(((ulonglong)auStack_69bd & 0xffffffff) >> 8);
    UNLOCK();
    *pcVar2 = *pcVar2 + 'f';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 + -1 == 0 || in_ZF == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)(unaff_RDI + 1) =
       (uint)(param_1 + -1) &
       (uint)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                      CONCAT11(in_SF << 7 | in_ZF << 6 | in_AF << 4 | in_PF << 2 | 2U | in_CF,
                               (char)in_RAX));
  (*(code *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),0x12))();
  *(undefined4 *)(unaff_RDI + 2) = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aab2d FUN_14d7aab2d body=13 status=ok
// SIG undefined FUN_14d7aab2d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aab2d(undefined8 param_1)

{
  undefined6 uVar1;
  longlong unaff_RBX;
  
  uVar1 = (undefined6)((ulonglong)param_1 >> 0x10);
  out(0x12,0);
  LOCK();
  *(char *)(unaff_RBX + -0x7eb0ffc3) = (char)((ulonglong)unaff_RBX >> 8);
  UNLOCK();
  *(char *)CONCAT62(uVar1,CONCAT11(0x38,(char)param_1)) =
       *(char *)CONCAT62(uVar1,CONCAT11(0x38,(char)param_1)) + 'f';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aab3d FUN_14d7aab3d body=9 status=ok
// SIG undefined FUN_14d7aab3d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aab3d(char *param_1)

{
  longlong unaff_RBX;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  char in_CF;
  
  *unaff_RDI = *unaff_RSI;
  *(char *)((longlong)unaff_RSI + 0x6638b5a3) =
       *(char *)((longlong)unaff_RSI + 0x6638b5a3) + (char)((ulonglong)param_1 >> 8) + in_CF;
  LOCK();
  *(char *)(unaff_RBX + -0x7eb0ffc3) = (char)((ulonglong)unaff_RBX >> 8);
  UNLOCK();
  *param_1 = *param_1 + 'f';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aab4a FUN_14d7aab4a body=7 status=ok
// SIG undefined FUN_14d7aab4a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aab4a(void)

{
  ulonglong *in_R11;
  
  *in_R11 = *in_R11 | 0x1180715d;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aab5b FUN_14d7aab5b body=9 status=ok
// SIG undefined FUN_14d7aab5b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aab5b(undefined8 param_1,longlong param_2)

{
  char in_CF;
  
  *(char *)(param_2 + -0x1ab9f8cb) =
       *(char *)(param_2 + -0x1ab9f8cb) + (char)((ulonglong)param_1 >> 8) + in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aab6c FUN_14d7aab6c body=2 status=ok
// SIG undefined FUN_14d7aab6c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aab6c(void)

{
  undefined4 in_EAX;
  char in_SF;
  char in_OF;
  
  if (in_OF != in_SF) {
    uRame20f1ecfb6226840 = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aab70 FUN_14d7aab70 body=5 status=ok
// SIG undefined FUN_14d7aab70(void)

/* WARNING: Instruction at (ram,0x00014d7aab79) overlaps instruction at (ram,0x00014d7aab75)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7aabc2) */

void FUN_14d7aab70(undefined8 param_1,undefined2 param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar4;
  char *pcVar5;
  longlong unaff_RBX;
  uint uVar8;
  undefined4 *unaff_RSI;
  undefined2 in_FPUControlWord;
  uint uVar3;
  char cVar6;
  undefined6 uVar7;
  
  in(0x28);
  func_0xfd169f48();
  func_0xf5030e80();
  uVar7 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar6 = (char)((ulonglong)param_1 >> 8) + '\x01';
  pcVar5 = (char *)CONCAT62(uVar7,CONCAT11(cVar6,(char)param_1));
  puVar1 = (uint *)(unaff_RBX + -0x28);
  uVar2 = *puVar1;
  uVar8 = (uint)unaff_RSI;
  uVar3 = *puVar1;
  *puVar1 = *puVar1 - uVar8;
  uVar4 = in(param_2);
  if (SBORROW4(uVar3,uVar8)) {
    *(char *)((longlong)unaff_RSI + 0x6638b59f) =
         *(char *)((longlong)unaff_RSI + 0x6638b59f) + cVar6 + (uVar2 < uVar8);
    LOCK();
    *(char *)(unaff_RBX + -0x7eb0ffc3) = (char)((ulonglong)unaff_RBX >> 8);
    UNLOCK();
    *pcVar5 = *pcVar5 + 'f';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(ulonglong)(uVar4 + 0xea65071d) = in_FPUControlWord;
  if (CONCAT62(uVar7,CONCAT11(cVar6 + (char)((int)uVar4 >> 0x1f),(char)param_1)) != 1) {
    (*(code *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),
                       ((char)unaff_RBX - *(char *)((longlong)pcVar5 * 2)) - (uVar4 < 0x159af8e3)))
              ();
    uRam000000008bbcaadf = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aab9e FUN_14d7aab9e body=39 status=ok
// SIG undefined FUN_14d7aab9e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7aab7c) */
/* WARNING: Removing unreachable block (ram,0x00014d7aabc2) */

void FUN_14d7aab9e(undefined8 param_1,undefined2 param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar4;
  char *pcVar5;
  longlong unaff_RBX;
  uint uVar8;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined2 in_FPUControlWord;
  uint uVar3;
  char cVar6;
  undefined6 uVar7;
  
  uVar7 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar6 = (char)((ulonglong)param_1 >> 8) + '\x01';
  pcVar5 = (char *)CONCAT62(uVar7,CONCAT11(cVar6,(char)param_1));
  puVar1 = (uint *)(unaff_RBX + -0x28);
  uVar2 = *puVar1;
  uVar8 = (uint)(undefined4 *)(unaff_RSI + 4);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 - uVar8;
  uVar4 = in(param_2);
  if (SBORROW4(uVar3,uVar8)) {
    *(char *)(unaff_RSI + 0x6638b5a3) = *(char *)(unaff_RSI + 0x6638b5a3) + cVar6 + (uVar2 < uVar8);
    LOCK();
    *(char *)(unaff_RBX + -0x7eb0ffc3) = (char)((ulonglong)unaff_RBX >> 8);
    UNLOCK();
    *pcVar5 = *pcVar5 + 'f';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(ulonglong)(uVar4 + 0xea65071d) = in_FPUControlWord;
  if (CONCAT62(uVar7,CONCAT11(cVar6 + (char)((int)uVar4 >> 0x1f),(char)param_1)) != 1) {
    (*(code *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),
                       ((char)unaff_RBX - *(char *)((longlong)pcVar5 * 2)) - (uVar4 < 0x159af8e3)))
              ();
    *(undefined4 *)(unaff_RDI + 4) = *(undefined4 *)(unaff_RSI + 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aabd4 FUN_14d7aabd4 body=8 status=ok
// SIG undefined FUN_14d7aabd4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aabd4(int param_1,undefined2 param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 in_RAX;
  longlong lVar4;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *unaff_RSI;
  undefined4 *unaff_RDI;
  longlong *in_R10;
  float10 in_ST0;
  byte bVar5;
  
  *in_R10 = (longlong)in_ST0;
  uVar3 = in(0xc2);
                    /* WARNING: Read-only address (ram,0x0001427153af) is written */
  uRam00000001427153af = 0x4866c26d;
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  bVar5 = (byte)((ulonglong)in_RAX >> 8);
  lVar4 = CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar5 << 4 | bVar5 >> 4,uVar3));
  lVar4 = (longlong)(int)lVar4 * (longlong)*(int *)(lVar4 + 0x16a0ac74);
  LOCK();
  uVar3 = *unaff_RSI;
  *unaff_RSI = (char)((ulonglong)lVar4 >> 0x20);
  UNLOCK();
  uVar1 = in((short)CONCAT71((uint7)((ulonglong)lVar4 >> 0x28),uVar3));
  unaff_RDI[1] = uVar1;
  pcVar2 = (code *)swi(0xcf);
  (*pcVar2)();
  *(int *)(unaff_RSI + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 8 + 7) =
       *(int *)(unaff_RSI + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 8 + 7) - param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aabdc FUN_14d7aabdc body=38 status=ok
// SIG undefined FUN_14d7aabdc(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aabdc(int param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 in_RAX;
  longlong lVar4;
  longlong unaff_RBX;
  undefined1 *unaff_RSI;
  undefined4 *unaff_RDI;
  byte bVar5;
  
                    /* WARNING: Read-only address (ram,0x0001427153af) is written */
  uRam00000001427153af = 0x4866c26d;
  uVar2 = in(param_2);
  *unaff_RDI = uVar2;
  bVar5 = (byte)((ulonglong)in_RAX >> 8);
  lVar4 = CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar5 << 4 | bVar5 >> 4,(char)in_RAX))
  ;
  lVar4 = (longlong)(int)lVar4 * (longlong)*(int *)(lVar4 + 0x16a0ac74);
  LOCK();
  uVar1 = *unaff_RSI;
  *unaff_RSI = (char)((ulonglong)lVar4 >> 0x20);
  UNLOCK();
  uVar2 = in((short)CONCAT71((uint7)((ulonglong)lVar4 >> 0x28),uVar1));
  unaff_RDI[1] = uVar2;
  pcVar3 = (code *)swi(0xcf);
  (*pcVar3)();
  *(int *)(unaff_RSI + unaff_RBX * 8 + 7) = *(int *)(unaff_RSI + unaff_RBX * 8 + 7) - param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aac05 FUN_14d7aac05 body=22 status=ok
// SIG undefined FUN_14d7aac05(void)

int FUN_14d7aac05(void)

{
  char in_AL;
  char *unaff_RSI;
  int unaff_retaddr;
  
  *unaff_RSI = *unaff_RSI + in_AL;
  out(0x86,unaff_retaddr);
  return unaff_retaddr + -0x1466e0a1;
}



// FUNCTION 14d7aac27 FUN_14d7aac27 body=22 status=ok
// SIG undefined FUN_14d7aac27(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aac27(undefined8 param_1,undefined2 param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  code *pcVar4;
  uint in_EAX;
  char *unaff_RSI;
  char *unaff_RDI;
  bool in_CF;
  
  if (in_CF) {
    out(param_2,(int)&stack0xfffffffffffffff8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar3 = *unaff_RDI;
  cVar2 = *unaff_RSI;
  *(char **)((ulonglong)in_EAX - 8) = unaff_RDI + 1;
  if (cVar2 == cVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)((ulonglong)(uint)((int)&stack0xfffffffffffffff8 >> 0x1f) - 0x78203ba4);
  *pcVar1 = *pcVar1 + '\x01';
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}



// FUNCTION 14d7aac59 FUN_14d7aac59 body=2 status=ok
// SIG undefined FUN_14d7aac59(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aac59(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aac5d FUN_14d7aac5d body=3 status=ok
// SIG undefined FUN_14d7aac5d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aac5d(uint param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined1 *in_RAX;
  longlong lVar3;
  longlong unaff_RBX;
  longlong unaff_RSI;
  
  *in_RAX = 0x58;
  *(uint *)(unaff_RSI + -0x5080f4bc) = CONCAT31((int3)((uint)param_2 >> 8),0xc4);
  lVar3 = (ulonglong)param_1 - 1;
  if (lVar3 == 0 || param_1 == 0) {
    *(char *)(unaff_RSI + 0x5d) = *(char *)(unaff_RSI + 0x5d) + -0x3c;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar2 = (code *)swi(0xcf);
  (*pcVar2)();
  piVar1 = (int *)(unaff_RSI + 8 + unaff_RBX * 8);
  *piVar1 = *piVar1 - (int)lVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aac6a FUN_14d7aac6a body=17 status=ok
// SIG undefined FUN_14d7aac6a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aac6a(longlong param_1,char param_2)

{
  int *piVar1;
  code *pcVar2;
  longlong unaff_RBX;
  longlong unaff_RSI;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (!in_ZF && in_OF == in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_1 = param_1 + -1;
  if (param_1 == 0 || in_ZF != false) {
    *(char *)(unaff_RSI + 0x5c) = *(char *)(unaff_RSI + 0x5c) + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar2 = (code *)swi(0xcf);
  (*pcVar2)();
  piVar1 = (int *)(unaff_RSI + 7 + unaff_RBX * 8);
  *piVar1 = *piVar1 - (int)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aac7f FUN_14d7aac7f body=14 status=ok
// SIG undefined FUN_14d7aac7f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aac7f(longlong param_1)

{
  uint *puVar1;
  char cVar2;
  undefined8 in_RAX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  puVar1 = (uint *)(unaff_RDI + 4 + unaff_RSI * 2);
  *puVar1 = *puVar1 | (uint)unaff_RSI;
  *(char *)(unaff_RSI + 0x1fad64d) = *(char *)(unaff_RSI + 0x1fad64d) - (char)in_RAX;
  cVar2 = (char)in_RAX + '\x7f';
  cRam0000000196c5f82c = cRam0000000196c5f82c + cVar2;
  *(uint *)((ulonglong)&stack0x00000000 & 0xffffffff) =
       *(uint *)((ulonglong)&stack0x00000000 & 0xffffffff) & 0x6b;
  *(ulonglong *)((CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2) & 0xffffffff) - 8) =
       (ulonglong)(uint)(*(int *)(param_1 + -0x3b) * -0x6d);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aac8f FUN_14d7aac8f body=8 status=ok
// SIG undefined FUN_14d7aac8f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aac8f(longlong param_1)

{
  uint in_EAX;
  char *unaff_RDI;
  undefined1 auStack_8 [8];
  
  *unaff_RDI = (char)in_EAX;
  cRam0000000196c5f82c = cRam0000000196c5f82c + (char)in_EAX;
  *(uint *)((ulonglong)auStack_8 & 0xffffffff) = *(uint *)((ulonglong)auStack_8 & 0xffffffff) & 0x6b
  ;
  *(ulonglong *)((ulonglong)in_EAX - 8) = (ulonglong)(uint)(*(int *)(param_1 + -0x3b) * -0x6d);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aac9c FUN_14d7aac9c body=15 status=ok
// SIG undefined FUN_14d7aac9c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aac9c(void)

{
  uint *unaff_R12;
  
  *unaff_R12 = *unaff_R12 & 0x6b;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aacbf thunk_EXT_FUN_125bee041 body=5 status=ok
// SIG undefined thunk_EXT_FUN_125bee041(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_125bee041(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aaccf FUN_14d7aaccf body=15 status=ok
// SIG undefined FUN_14d7aaccf(void)

int FUN_14d7aaccf(byte param_1)

{
  int in_EAX;
  longlong unaff_RBP;
  
  return (in_EAX + 0x48717b56) - (uint)CARRY1(param_1,*(byte *)(unaff_RBP + 0x35a54786));
}



// FUNCTION 14d7aacdf thunk_EXT_FUN_efeb9b29 body=7 status=ok
// SIG undefined thunk_EXT_FUN_efeb9b29(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_efeb9b29(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aaceb FUN_14d7aaceb body=2 status=ok
// SIG undefined FUN_14d7aaceb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aaceb(void)

{
  undefined4 in_EAX;
  
  out(0xd1,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aacef FUN_14d7aacef body=6 status=ok
// SIG undefined FUN_14d7aacef(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aacef(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aacff FUN_14d7aacff body=4 status=ok
// SIG undefined FUN_14d7aacff(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aacff(void)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RBP;
  int *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI << 1;
  uVar2 = (ulonglong)(uint)((int)&stack0x00000000 - *unaff_RSI);
  if (SBORROW4((int)&stack0x00000000,*unaff_RSI)) {
    puVar3 = (undefined8 *)(uVar2 - 8);
    *(undefined8 **)(uVar2 - 8) = unaff_RBP;
    cVar1 = '\x1d';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar3 = puVar3 + -1;
      *puVar3 = *unaff_RBP;
      cVar1 = cVar1 + -1;
    } while ('\0' < cVar1);
    *(ulonglong *)(uVar2 - 0xf8) = uVar2 - 8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aad03 FUN_14d7aad03 body=8 status=ok
// SIG undefined FUN_14d7aad03(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aad03(void)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RBP;
  int *unaff_RSI;
  
  uVar2 = (ulonglong)(uint)((int)&stack0x00000000 - *unaff_RSI);
  if (SBORROW4((int)&stack0x00000000,*unaff_RSI)) {
    puVar3 = (undefined8 *)(uVar2 - 8);
    *(undefined8 **)(uVar2 - 8) = unaff_RBP;
    cVar1 = '\x1d';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar3 = puVar3 + -1;
      *puVar3 = *unaff_RBP;
      cVar1 = cVar1 + -1;
    } while ('\0' < cVar1);
    *(ulonglong *)(uVar2 - 0xf8) = uVar2 - 8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aad24 FUN_14d7aad24 body=37 status=ok
// SIG undefined FUN_14d7aad24(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7aad24(void)

{
  uint *puVar1;
  undefined8 in_RAX;
  int *unaff_RBX;
  undefined1 auStack_8 [8];
  
  _DAT_4f800af4bed14c4f = (undefined4)in_RAX;
  puVar1 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),DAT_a1bd315a3d0062f1);
  *puVar1 = *puVar1 << 1 | (uint)((int)*puVar1 < 0);
  *unaff_RBX = *unaff_RBX + (int)auStack_8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aad56 FUN_14d7aad56 body=18 status=ok
// SIG undefined FUN_14d7aad56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7aad56(char param_1,undefined2 param_2)

{
  uint uVar1;
  int unaff_EBP;
  char *unaff_RSI;
  byte in_CF;
  
  in(param_2);
  uVar1 = (unaff_EBP + 0x4512f1e3) - (uint)in_CF;
  _DAT_16e525b04 = _DAT_16e525b04 - uVar1;
  *unaff_RSI = *unaff_RSI + param_1;
                    /* WARNING: Could not recover jumptable at 0x00014d7aad66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(ulonglong)uVar1)();
  return;
}



// FUNCTION 14d7aad6a FUN_14d7aad6a body=3 status=ok
// SIG undefined FUN_14d7aad6a(void)

void FUN_14d7aad6a(void)

{
  return;
}



// FUNCTION 14d7aad6f FUN_14d7aad6f body=16 status=ok
// SIG undefined FUN_14d7aad6f(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7aada0) overlaps instruction at (ram,0x00014d7aad9e)
    */

void FUN_14d7aad6f(undefined8 param_1,uint param_2)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  undefined8 in_RAX;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  char *unaff_RSI;
  char *unaff_RDI;
  undefined4 in_R10D;
  
  if (-1 < (char)(*unaff_RSI - *unaff_RDI)) {
    if (*unaff_RSI <= *unaff_RDI) {
      FUN_14d7aadb0();
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar5 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + '6') & 0x112f8241;
  pbVar2 = (byte *)((ulonglong)uVar5 +
                   CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) * 8
                   );
  bVar3 = *pbVar2;
  bVar6 = (byte)(uVar5 >> 8);
  *pbVar2 = *pbVar2 + bVar6;
  if (CARRY1(bVar3,bVar6) || *pbVar2 == 0) {
    iVar4 = *(int *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
    puVar1 = (uint *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)))
                     + -0x19);
    *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
    *(undefined4 *)
     ((ulonglong)((int)unaff_RDI + 1U | CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
     0x7a7373e2) = in_R10D;
    puVar1 = (uint *)((ulonglong)(((param_2 ^ 0xedf5f8e6) - iVar4) + 0xc0f73100) - 0x5d3b72cc);
    *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aad7c FUN_14d7aad7c body=23 status=ok
// SIG undefined FUN_14d7aad7c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aad7c(undefined8 param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  byte in_AL;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RDI;
  undefined4 in_R10D;
  
  if ((in_AL & 0xd8) == 0) {
    iVar2 = *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
    puVar1 = (uint *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x19);
    *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
    *(undefined4 *)(unaff_RDI + 0x7a7373e2) = in_R10D;
    puVar1 = (uint *)((ulonglong)(((param_2 ^ 0xedf5f8e6) - iVar2) + 0xc0f73100) - 0x5d3b72cc);
    *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aad95 FUN_14d7aad95 body=16 status=ok
// SIG undefined FUN_14d7aad95(void)

/* WARNING: Control flow encountered bad instruction data */

int FUN_14d7aad95(longlong param_1)

{
  uint *puVar1;
  int in_EAX;
  byte bVar2;
  byte unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_EDI;
  bool in_CF;
  char in_ZF;
  undefined1 in_SF;
  
  if (param_1 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_CF) {
    puVar1 = (uint *)((ulonglong)unaff_EDI - 0x5d3b72cc);
    *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar2 = 0xff;
  if (in_ZF == '\0') {
    *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -1 +
         (uint)(0xff9bb185 < unaff_EDI);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while (!(bool)in_SF) {
    bVar2 = bVar2 | unaff_BL;
    in_SF = (short)((ushort)bVar2 << 8) < 0;
    in(0xc3);
  }
  return in_EAX + 0x7b35ffe3;
}



// FUNCTION 14d7aadb0 FUN_14d7aadb0 body=5 status=ok
// SIG undefined FUN_14d7aadb0(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7aadb0(byte *param_1,byte param_2)

{
  byte bVar1;
  int iVar3;
  uint *puVar4;
  byte bVar5;
  undefined8 in_RAX;
  undefined8 uVar6;
  longlong lVar7;
  uint unaff_EBX;
  uint uVar8;
  undefined8 unaff_RBP;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  char in_CF;
  longlong unaff_retaddr;
  byte bVar2;
  int *piVar9;
  
  uVar6 = CONCAT44((int)((ulonglong)in_RAX >> 0x20),*unaff_RSI);
  bVar5 = ((char)*unaff_RSI + -0x6b) - in_CF;
  uVar8 = unaff_EBX & (uint)CONCAT71((int7)((ulonglong)uVar6 >> 8),bVar5);
  piVar9 = (int *)(ulonglong)uVar8;
  bVar1 = *param_1;
  bVar2 = *param_1;
  *param_1 = *param_1 + param_2;
  if (SCARRY1(bVar2,param_2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  lVar7 = CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(0x5e,(char)param_1)) + -1;
  if (lVar7 == 0 || *param_1 != 0) {
    uVar8 = ((int)unaff_RBP + 0x4512f1e3) -
            (uint)(0xbb < bVar5 || CARRY1(bVar5 + 0x44,CARRY1(bVar1,param_2)));
    _DAT_16e525b04 = _DAT_16e525b04 - uVar8;
    *(char *)(unaff_RSI + 1) = *(char *)(unaff_RSI + 1) + (char)lVar7;
                    /* WARNING: Could not recover jumptable at 0x00014d7aad66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(ulonglong)uVar8)();
    return;
  }
  *(char *)(unaff_RDI + 0x32047ebd) = *(char *)(unaff_RDI + 0x32047ebd) + (char)(uVar8 >> 8);
  *(undefined8 *)(unaff_retaddr + -8) = unaff_RBP;
  iVar3 = *(int *)((longlong)piVar9 + -0x412eb3b1);
  puVar4 = (uint *)CONCAT71((int7)(CONCAT62((int6)((ulonglong)uVar6 >> 0x10),0x9100) >> 8),
                            DAT_a1bd315a3d0062f1);
  *puVar4 = *puVar4 << 1 | (uint)((int)*puVar4 < 0);
  *piVar9 = *piVar9 + iVar3 * -0xc;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aadb6 FUN_14d7aadb6 body=6 status=ok
// SIG undefined FUN_14d7aadb6(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7aadb6(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 in_RAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  char *unaff_RSI;
  longlong unaff_RDI;
  byte in_CF;
  
  puVar1 = (uint *)(unaff_RBP + 0x5e + (longlong)unaff_RSI * 4);
  uVar4 = (uint)in_CF;
  uVar6 = *puVar1;
  uVar2 = *puVar1;
  uVar5 = *puVar1 + CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *puVar1 = uVar5 + uVar4;
  if (SCARRY4(uVar2,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) != SCARRY4(uVar5,uVar4)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 + -1 == 0 || *puVar1 != 0) {
    uVar6 = ((int)unaff_RBP + 0x4512f1e3) -
            (uint)(0xbb < (byte)in_RAX ||
                  CARRY1((byte)in_RAX + 0x44,
                         CARRY4(uVar6,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) ||
                         CARRY4(uVar5,uVar4)));
    _DAT_16e525b04 = _DAT_16e525b04 - uVar6;
    *unaff_RSI = *unaff_RSI + (char)(param_1 + -1);
                    /* WARNING: Could not recover jumptable at 0x00014d7aad66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(ulonglong)uVar6)();
    return;
  }
  *(char *)(unaff_RDI + 0x32047ebd) = *(char *)(unaff_RDI + 0x32047ebd) + unaff_BH;
  iVar3 = *(int *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                  -0x412eb3b1);
  puVar1 = (uint *)CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),0x9100) >> 8),
                            DAT_a1bd315a3d0062f1);
  *puVar1 = *puVar1 << 1 | (uint)((int)*puVar1 < 0);
  *(int *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
       *(int *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
       iVar3 * -0xc;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aadc2 FUN_14d7aadc2 body=4 status=ok
// SIG undefined FUN_14d7aadc2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aadc2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aaddb FUN_14d7aaddb body=1 status=ok
// SIG undefined FUN_14d7aaddb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aaddb(undefined8 param_1,undefined2 param_2)

{
  undefined4 *unaff_RSI;
  char in_SF;
  char in_OF;
  
  out(*unaff_RSI,param_2);
  if (in_OF == in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aade7 FUN_14d7aade7 body=3 status=ok
// SIG undefined FUN_14d7aade7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aade7(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aae05 FUN_14d7aae05 body=16 status=ok
// SIG undefined FUN_14d7aae05(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aae05(void)

{
  func_0x0001ac541a03();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aae15 FUN_14d7aae15 body=20 status=ok
// SIG undefined FUN_14d7aae15(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aae15(longlong param_1,char param_2,longlong param_3)

{
  char unaff_BPL;
  longlong in_FS_OFFSET;
  bool in_PF;
  
  in(5);
  if (!in_PF) {
    *(char *)(in_FS_OFFSET + param_1) = *(char *)(in_FS_OFFSET + param_1) + param_2;
    *(char *)(param_3 + -0x3d) = *(char *)(param_3 + -0x3d) + unaff_BPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aae2a FUN_14d7aae2a body=39 status=ok
// SIG undefined FUN_14d7aae2a(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7aae50) overlaps instruction at (ram,0x00014d7aae4c)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7aae45) */
/* WARNING: Removing unreachable block (ram,0x0001145c314f) */
/* WARNING: Removing unreachable block (ram,0x00014d7aaeae) */

void FUN_14d7aae2a(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined1 uVar4;
  ulonglong in_RAX;
  uint uVar5;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  bool in_CF;
  bool in_ZF;
  
  if (in_CF || in_ZF) {
    param_1[0xbadd5] = param_1[0xbadd5] - (char)((ulonglong)param_2 >> 8);
  }
  else {
    pbVar1 = (byte *)(unaff_RBP + -0x961d7ff);
    bVar2 = *pbVar1;
    *pbVar1 = *pbVar1 + (byte)in_RAX;
    uVar3 = (uint)in_RAX;
    out(0x15,uVar3);
    if (CARRY1(bVar2,(byte)in_RAX) || *pbVar1 == 0) {
      uVar4 = (undefined1)(in_RAX >> 8);
      uVar5 = (int)uVar3 >> 0x1f & *(uint *)(ulonglong)(uint)((int)uVar3 >> 0x1f);
      in((short)uVar5);
      uVar3 = *(uint *)((ulonglong)uVar5 + 0x7fce9c66);
      vpmovzxbw_avx512vl(*(undefined1 (*) [16])CONCAT71(unaff_00000019,uVar4));
      *(char *)CONCAT71(unaff_00000019,uVar4) =
           *(char *)CONCAT71(unaff_00000019,uVar4) + (char)uVar5;
      *(undefined1 *)(ulonglong)(uint)(unaff_EDI + 4 + (int)&stack0x00000000) =
           *(undefined1 *)(ulonglong)(unaff_ESI + 4U | uVar3);
      DAT_00170f6c = DAT_00170f6c + -0x26;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    in_RAX = (ulonglong)(uVar3 | 0xf55000a3);
    *param_1 = *param_1 + '\x01';
    if (*param_1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(int *)(in_RAX + 0x48c9be60) = *(int *)(in_RAX + 0x48c9be60) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aae3c FUN_14d7aae3c body=16 status=ok
// SIG undefined FUN_14d7aae3c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aae3c(char *param_1)

{
  int *piVar1;
  char cVar2;
  code *pcVar3;
  char in_AL;
  undefined7 in_register_00000001;
  undefined1 *unaff_RSI;
  char in_CF;
  
  cVar2 = *param_1;
  *param_1 = *param_1 + '\x01';
  if (in_CF != '\0') {
    if (*param_1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    piVar1 = (int *)(CONCAT71(in_register_00000001,in_AL) + 0x48c9be60);
    *piVar1 = *piVar1 + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*param_1 == '\0' || SCARRY1(cVar2,'\x01') != *param_1 < '\0') {
    pcVar3 = (code *)swi(0xc4);
    (*pcVar3)();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)CONCAT71(in_register_00000001,in_AL) = *unaff_RSI;
  DAT_00170f6c = DAT_00170f6c + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aae59 FUN_14d7aae59 body=14 status=ok
// SIG undefined FUN_14d7aae59(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aae59(void)

{
  longlong in_RAX;
  
  *(int *)(in_RAX + 0x48c9be60) = *(int *)(in_RAX + 0x48c9be60) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aae6d FUN_14d7aae6d body=1 status=ok
// SIG undefined FUN_14d7aae6d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aae6d(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aae8e FUN_14d7aae8e body=58 status=ok
// SIG undefined FUN_14d7aae8e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aae8e(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  uint unaff_ESI;
  int unaff_EDI;
  
  uVar2 = (uint)param_2 & *param_2;
  in((short)uVar2);
  uVar1 = *(uint *)((ulonglong)uVar2 + 0x7fce9c66);
  vpmovzxbw_avx512vl(*(undefined1 (*) [16])CONCAT71(unaff_00000019,unaff_BL));
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)uVar2;
  *(undefined1 *)(ulonglong)(uint)(unaff_EDI + (int)&stack0x00000000) =
       *(undefined1 *)(ulonglong)(unaff_ESI | uVar1);
  DAT_00170f6c = DAT_00170f6c + -0x26;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aaecb FUN_14d7aaecb body=10 status=ok
// SIG undefined FUN_14d7aaecb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aaecb(undefined8 param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  char in_CF;
  
  uRam8f687457bc05df60 = CONCAT31((int3)((uint)in_EAX >> 8),((char)in_EAX + 'm') - in_CF);
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aaedb FUN_14d7aaedb body=25 status=ok
// SIG undefined FUN_14d7aaedb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aaedb(ulonglong param_1,undefined8 param_2)

{
  bool bVar1;
  ulonglong uVar2;
  byte bVar3;
  int iVar4;
  longlong in_RAX;
  byte *unaff_RBX;
  uint uVar5;
  longlong unaff_RDI;
  bool in_ZF;
  ulonglong *puVar6;
  
  iVar4 = iRam000000011c2e1b7e;
  if (!in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar5 = (int)&stack0xfffffffffffffff8 - *(int *)(in_RAX + 0x10);
  puVar6 = (ulonglong *)(ulonglong)uVar5;
  uVar2 = *puVar6;
  DAT_cd6185b30424b9f3 = unaff_RBX[uVar2 & 0xff];
  bVar3 = (byte)param_1 & 0x1f;
  iRam000000011c2e1b7e = iRam000000011c2e1b7e >> bVar3;
  bVar1 = (param_1 & 0x1f) != 0;
  *unaff_RBX = *unaff_RBX << 2 |
               (byte)(CONCAT11(!bVar1 || bVar1 && (iVar4 >> bVar3 - 1 & 1U) != 0,*unaff_RBX) >> 7);
  if (param_1 - 1 != 0 && (int)CONCAT71((int7)(uVar2 >> 8),DAT_cd6185b30424b9f3) != 0x3ec3601f) {
    *puVar6 = param_2;
    LOCK();
    *(uint *)(unaff_RDI + 0x2a9670a5) = uVar5;
    UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar6 = param_1 - 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aaedf FUN_14d7aaedf body=5 status=ok
// SIG undefined FUN_14d7aaedf(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aaedf(undefined8 param_1,undefined2 param_2)

{
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aaef8 FUN_14d7aaef8 body=12 status=ok
// SIG undefined FUN_14d7aaef8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aaef8(void)

{
  code *pcVar1;
  undefined4 in_EAX;
  longlong unaff_RBX;
  uint unaff_EBP;
  
  pcVar1 = (code *)swi(0xc4);
  (*pcVar1)(in_EAX);
  *(uint *)(unaff_RBX + -0x20c6a202) = *(uint *)(unaff_RBX + -0x20c6a202) ^ unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aaf0d FUN_14d7aaf0d body=3 status=ok
// SIG undefined FUN_14d7aaf0d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aaf0d(longlong param_1)

{
  *(int *)(param_1 + -0x1b) = (int)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aaf11 FUN_14d7aaf11 body=15 status=ok
// SIG undefined FUN_14d7aaf11(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aaf11(undefined8 param_1,char param_2)

{
  longlong unaff_RSI;
  
  in(0x69);
  *(char *)(unaff_RSI + 0xb) = *(char *)(unaff_RSI + 0xb) + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aaf60 FUN_14d7aaf60 body=40 status=ok
// SIG undefined FUN_14d7aaf60(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aaf60(longlong param_1)

{
  int in_EAX;
  undefined7 unaff_00000019;
  longlong unaff_RDI;
  undefined1 in_CF;
  undefined1 auStack_8 [8];
  
  *(byte *)CONCAT71(unaff_00000019,0xce) =
       *(char *)CONCAT71(unaff_00000019,0xce) << 2 |
       (byte)(CONCAT11(in_CF,*(char *)CONCAT71(unaff_00000019,0xce)) >> 7);
  DAT_cd6185b30424b9f3 = (undefined1)in_EAX;
  if (param_1 != 1 && in_EAX != 0x3ec3601f) {
    LOCK();
    *(int *)(unaff_RDI + 0x2a9670a5) = (int)auStack_8;
    UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aaf81 FUN_14d7aaf81 body=11 status=ok
// SIG undefined FUN_14d7aaf81(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aaf81(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aaf92 FUN_14d7aaf92 body=7 status=ok
// SIG undefined FUN_14d7aaf92(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aaf92(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aaf9b FUN_14d7aaf9b body=1 status=ok
// SIG undefined FUN_14d7aaf9b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aaf9b(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aaf9f FUN_14d7aaf9f body=3 status=ok
// SIG undefined FUN_14d7aaf9f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aaf9f(void)

{
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aafa3 FUN_14d7aafa3 body=18 status=ok
// SIG undefined FUN_14d7aafa3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aafa3(undefined8 param_1)

{
  longlong in_RAX;
  
  LOCK();
  *(char *)(in_RAX + 0x92feb62) = (char)((ulonglong)param_1 >> 8);
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aafd4 FUN_14d7aafd4 body=1 status=ok
// SIG undefined FUN_14d7aafd4(void)

uint FUN_14d7aafd4(undefined8 param_1,byte param_2)

{
  byte unaff_BL;
  longlong unaff_RSI;
  undefined4 unaff_EDI;
  undefined1 auStack_8 [8];
  
  LOCK();
  UNLOCK();
  uRam000000018092b058 = unaff_EDI;
  *(char *)(unaff_RSI + 0x303a7160) = -*(char *)(unaff_RSI + 0x303a7160);
  return (int)auStack_8 + *(int *)((ulonglong)auStack_8 & 0xffffffff) + (uint)(param_2 < unaff_BL) |
         0x8d;
}



// FUNCTION 14d7aafd9 FUN_14d7aafd9 body=21 status=ok
// SIG undefined FUN_14d7aafd9(void)

uint FUN_14d7aafd9(undefined8 param_1,undefined8 param_2)

{
  byte unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RSI;
  char in_CF;
  
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       (*(char *)CONCAT71(unaff_00000019,unaff_BL) - (char)((ulonglong)param_2 >> 8)) - in_CF;
  *(char *)(unaff_RSI + 0x303a7160) = -*(char *)(unaff_RSI + 0x303a7160);
  return (int)&stack0x00000000 + *(int *)((ulonglong)&stack0x00000000 & 0xffffffff) +
         (uint)((byte)param_2 < unaff_BL) | 0x8d;
}



// FUNCTION 14d7aafef FUN_14d7aafef body=6 status=ok
// SIG undefined FUN_14d7aafef(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aafef(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7aafff FUN_14d7aafff body=4 status=ok
// SIG undefined FUN_14d7aafff(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7aafff(void)

{
  byte in_AL;
  longlong unaff_RBP;
  
  if ((in_AL | 0x35) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RBP + -0x685a1a02) = -*(char *)(unaff_RBP + -0x685a1a02);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab008 FUN_14d7ab008 body=24 status=ok
// SIG undefined FUN_14d7ab008(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7ab036) overlaps instruction at (ram,0x00014d7ab035)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7ab008(longlong param_1,undefined2 param_2)

{
  code *pcVar1;
  undefined1 in_AL;
  undefined1 uVar2;
  undefined1 unaff_BL;
  undefined6 unaff_0000001a;
  undefined8 unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  bool in_PF;
  char in_ZF;
  
  if (param_1 + -1 == 0 || in_ZF != '\0') {
    if (in_PF) {
      out(param_2,in_AL);
      _DAT_68a85db7 = unaff_RBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((char)((ulonglong)(param_1 + -1) >> 8) <=
        *(char *)(CONCAT62(unaff_0000001a,CONCAT11(0xa4,unaff_BL)) + 0x2963d49a)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    unaff_RSI = unaff_RSI + 1;
  }
  *unaff_RDI = *unaff_RSI;
  uVar2 = in(param_2);
  out(param_2,uVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)((int)unaff_RBP + 0x32);
  return;
}



// FUNCTION 14d7ab014 FUN_14d7ab014 body=1 status=ok
// SIG undefined FUN_14d7ab014(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab014(void)

{
  undefined4 in_EAX;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab01c FUN_14d7ab01c body=7 status=ok
// SIG undefined FUN_14d7ab01c(void)

void FUN_14d7ab01c(undefined8 param_1,undefined2 param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  
  uVar2 = in(param_2);
  out(param_2,uVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7ab028 FUN_14d7ab028 body=7 status=ok
// SIG undefined FUN_14d7ab028(void)

void FUN_14d7ab028(undefined8 param_1,undefined2 param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  
  uVar2 = in(param_2);
  out(param_2,uVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7ab040 FUN_14d7ab040 body=4 status=ok
// SIG undefined FUN_14d7ab040(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab040(longlong param_1)

{
  byte *pbVar1;
  uint *puVar2;
  byte bVar3;
  byte in_AL;
  longlong unaff_RSI;
  undefined8 in_R11;
  longlong unaff_R13;
  
  pbVar1 = (byte *)(param_1 + -0x3b);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + in_AL;
  *(undefined8 *)(unaff_RSI + 0x62) = in_R11;
  puVar2 = (uint *)(unaff_R13 + 0x44ebb6d8);
  *puVar2 = (*puVar2 - 0x18) + (uint)CARRY1(bVar3,in_AL);
  if ((POPCOUNT(*puVar2 & 0xff) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab044 FUN_14d7ab044 body=24 status=ok
// SIG undefined FUN_14d7ab044(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab044(void)

{
  uint *puVar1;
  longlong unaff_RSI;
  undefined8 in_R11;
  longlong unaff_R13;
  byte in_CF;
  
  *(undefined8 *)(unaff_RSI + 0x62) = in_R11;
  puVar1 = (uint *)(unaff_R13 + 0x44ebb6d8);
  *puVar1 = (*puVar1 - 0x18) + (uint)in_CF;
  if ((POPCOUNT(*puVar1 & 0xff) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab06c thunk_FUN_14d7ab0a9 body=2 status=ok
// SIG undefined thunk_FUN_14d7ab0a9(void)

void thunk_FUN_14d7ab0a9(void)

{
  FUN_14d7ab0a9();
  return;
}



// FUNCTION 14d7ab074 FUN_14d7ab074 body=8 status=ok
// SIG undefined FUN_14d7ab074(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab074(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  char *pcVar2;
  undefined1 in_AL;
  uint uVar3;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  uVar3 = in((short)CONCAT71((int7)((ulonglong)param_2 >> 8),in_AL));
  piVar1 = (int *)((ulonglong)uVar3 - 0x23f6f970);
  *piVar1 = *piVar1 + uVar3;
  *(int *)(unaff_RSI + -0x4709c94c) = *(int *)(unaff_RSI + -0x4709c94c) + 0x7351c22b;
  *(char *)(unaff_RDI + -0x8fc305d) =
       *(char *)(unaff_RDI + -0x8fc305d) - (char)((ulonglong)param_1 >> 8);
  pcVar2 = (char *)((ulonglong)uVar3 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 4);
  *pcVar2 = *pcVar2 + (char)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab07c FUN_14d7ab07c body=4 status=ok
// SIG undefined FUN_14d7ab07c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab07c(undefined8 param_1)

{
  int *piVar1;
  char *pcVar2;
  uint in_EAX;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  piVar1 = (int *)((ulonglong)in_EAX - 0x23f6f970);
  *piVar1 = *piVar1 + in_EAX;
  *(int *)(unaff_RSI + -0x4709c94c) = *(int *)(unaff_RSI + -0x4709c94c) + 0x7351c22b;
  *(char *)(unaff_RDI + -0x8fc305d) =
       *(char *)(unaff_RDI + -0x8fc305d) - (char)((ulonglong)param_1 >> 8);
  pcVar2 = (char *)((ulonglong)in_EAX + CONCAT71(unaff_00000019,unaff_BL) * 4);
  *pcVar2 = *pcVar2 + (char)in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab080 FUN_14d7ab080 body=7 status=ok
// SIG undefined FUN_14d7ab080(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab080(undefined8 param_1)

{
  int *piVar1;
  char *pcVar2;
  uint in_EAX;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  piVar1 = (int *)((ulonglong)in_EAX - 0x23f6f970);
  *piVar1 = *piVar1 + in_EAX;
  *(int *)(unaff_RSI + -0x4709c94c) = *(int *)(unaff_RSI + -0x4709c94c) + 0x7351c22b;
  *(char *)(unaff_RDI + -0x8fc305d) =
       *(char *)(unaff_RDI + -0x8fc305d) - (char)((ulonglong)param_1 >> 8);
  pcVar2 = (char *)((ulonglong)in_EAX + CONCAT71(unaff_00000019,unaff_BL) * 4);
  *pcVar2 = *pcVar2 + (char)in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7ab088 FUN_14d7ab088 body=3 status=ok
// SIG undefined FUN_14d7ab088(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7ab088(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RDI;
  
  *(char *)(unaff_RDI + -0x8fc305c) =
       *(char *)(unaff_RDI + -0x8fc305c) - (char)((ulonglong)param_1 >> 8);
  pcVar1 = (char *)(param_2 + CONCAT71(unaff_00000019,unaff_BL) * 4);
  *pcVar1 = *pcVar1 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


