// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14d7beb56 FUN_14d7beb56 body=6 status=ok
// SIG undefined FUN_14d7beb56(void)

void FUN_14d7beb56(longlong param_1)

{
  code *pcVar1;
  undefined4 unaff_EBP;
  
  *(undefined4 *)(param_1 + 0x4a) = unaff_EBP;
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7beb66 FUN_14d7beb66 body=2 status=ok
// SIG undefined FUN_14d7beb66(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7beb66(byte param_1)

{
  longlong unaff_RBP;
  
  *(int *)(unaff_RBP + 0x23823d00) = *(int *)(unaff_RBP + 0x23823d00) >> (param_1 & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7beb7b FUN_14d7beb7b body=35 status=ok
// SIG undefined FUN_14d7beb7b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7beadd) overlaps instruction at (ram,0x00014d7beadb)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7beb61) */

void FUN_14d7beb7b(longlong param_1,byte *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  code *pcVar4;
  ulonglong uVar5;
  char cVar6;
  byte bVar7;
  int in_EAX;
  uint uVar8;
  int *piVar10;
  byte bVar11;
  ulonglong unaff_RBX;
  ulonglong *puVar12;
  undefined1 *puVar13;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  uint *unaff_RDI;
  bool bVar14;
  bool bVar15;
  bool in_OF;
  byte *pbVar9;
  
  puVar13 = (undefined1 *)((ulonglong)&stack0x00000000 & 0xffffffff);
  if (!in_OF) {
    if (param_1 != 1) {
      return;
    }
    *(longlong *)(puVar13 + -8) = unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 + -1 != 0) {
    *(int *)(param_1 + 0x49) = (int)unaff_RBP;
    pcVar4 = (code *)swi(1);
    (*pcVar4)(param_1 + -1,in_EAX >> 0x1f);
    return;
  }
  uVar8 = in_EAX + (int)unaff_RSI;
  pbVar9 = (byte *)(ulonglong)uVar8;
  piVar10 = (int *)(param_1 + -2);
  puVar12 = (ulonglong *)puVar13;
  if (piVar10 == (int *)0x0) {
    param_2 = (byte *)CONCAT71((int7)((ulonglong)param_2 >> 8),(char)param_2 + (byte)uVar8);
    out((short)param_2,uVar8 | 0xb2);
    *(undefined8 *)(puVar13 + -8) = 0;
    *unaff_RDI = uVar8 | 0xb2;
    if ((byte)((byte)uVar8 | 0xb2) != 0) {
      *(undefined8 *)(puVar13 + -0x10) = 0x14d7beb9e;
      FUN_149384ca2();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    piVar10 = (int *)0x0;
  }
  else {
    do {
      bVar3 = *pbVar9;
      bVar7 = (byte)pbVar9;
      bVar14 = bVar7 < bVar3;
      bVar15 = bVar7 == bVar3;
      pbVar9 = (byte *)(unaff_RBP & 0xffffffff);
      bVar11 = (byte)((ulonglong)param_2 >> 8);
      *param_2 = bVar11;
      if (!SBORROW1(bVar7,bVar3)) {
code_r0x00014d7beb19:
        if (!bVar14 && !bVar15) {
          *piVar10 = *piVar10 + -0x3bffc05e;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
LAB_14d7bead4_7:
        pbVar9[0x54] = bVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pbVar9 = param_2 + 0xb227ca;
      bVar3 = *pbVar9;
      bVar7 = (byte)((ulonglong)piVar10 >> 8);
      *pbVar9 = *pbVar9 + bVar7;
      cVar6 = ((char)unaff_RBP + '&') - CARRY1(bVar3,bVar7);
      uVar8 = CONCAT31((int3)(unaff_RBP >> 8),cVar6);
      pbVar9 = (byte *)(ulonglong)uVar8;
      uVar5 = *puVar12;
      pbVar1 = (byte *)(param_1 + -0x25);
      bVar3 = *pbVar1;
      bVar7 = (byte)(unaff_RBX >> 8);
      *pbVar1 = *pbVar1 + bVar7;
      if (!CARRY1(bVar3,bVar7)) {
        if (-1 < (char)*pbVar1) {
          DAT_30dfc2106d9198d9 = cVar6;
          *(uint *)pbVar9 = *(int *)pbVar9 - uVar8;
          pbVar9 = (byte *)(unaff_RBX & 0xffffffff);
          DAT_708817943644dc84 = SUB81(pbVar9,0);
          *puVar12 = (ulonglong)(puVar12 + 1);
          goto LAB_14d7bead4_7;
        }
        pcVar2 = (char *)(uVar5 + 0x70903288);
        *pcVar2 = *pcVar2 + (char)param_2;
        bVar15 = (unaff_RBP & 0x4000) != 0;
        bVar14 = (unaff_RBP & 0x100) != 0;
        goto code_r0x00014d7beb19;
      }
      unaff_RBX = 0xfbc408b4;
      puVar12 = puVar12 + 1;
      unaff_RBP = uVar5;
    } while (-1 >= (char)*pbVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014d7beb46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulonglong)*(uint *)(unaff_RSI + 0x12c248f2))(piVar10,param_2);
  return;
}



// FUNCTION 14d7beba4 FUN_14d7beba4 body=11 status=ok
// SIG undefined FUN_14d7beba4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7beba4(longlong param_1)

{
  byte *pbVar1;
  char *pcVar2;
  unkbyte10 Var3;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  byte unaff_BL;
  longlong unaff_RBP;
  bool in_CF;
  bool in_ZF;
  unkbyte10 in_ST0;
  
  if (in_CF || in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar1 = (byte *)(param_1 + -0x24ad2d35);
  *pbVar1 = *pbVar1 & unaff_BL;
  if (-1 < (char)*pbVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar2 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x5bf96ea7);
  *pcVar2 = *pcVar2 + (char)param_1;
  Var3 = to_bcd(in_ST0);
  *(unkbyte10 *)(unaff_RBP + -0x7f) = Var3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bebbc FUN_14d7bebbc body=5 status=ok
// SIG undefined FUN_14d7bebbc(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bebbc(char param_1)

{
  char *pcVar1;
  unkbyte10 Var2;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RBP;
  char in_SF;
  char in_OF;
  unkbyte10 in_ST0;
  
  if (in_OF == in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x5bf96ea7);
  *pcVar1 = *pcVar1 + param_1;
  Var2 = to_bcd(in_ST0);
  *(unkbyte10 *)(unaff_RBP + -0x7f) = Var2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bebd0 FUN_14d7bebd0 body=4 status=ok
// SIG undefined FUN_14d7bebd0(void)

/* WARNING: Instruction at (ram,0x00014d7bebda) overlaps instruction at (ram,0x00014d7bebd9)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bebd0(void)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  byte in_CF;
  char in_ZF;
  undefined1 in_OF;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  
  while( true ) {
    _DAT_71643d3ab8dfe9e1 = in_EAX;
    if (!(bool)in_OF) break;
    if (*(longlong *)register0x00000020 == 1 || in_ZF == '\0') {
      *(longlong *)(CONCAT44(in_register_00000004,in_EAX) + 0x71643d3a) = (longlong)ROUND(in_ST0);
      register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + 8);
      in_ST0 = in_ST1;
      in_ST1 = in_ST2;
      in_ST2 = in_ST3;
      in_ST3 = in_ST4;
      in_ST4 = in_ST5;
      in_ST5 = in_ST6;
      in_ST6 = in_ST7;
    }
    else {
      bVar2 = (byte)in_EAX;
      bVar1 = bVar2 + 0xa4;
      in_OF = SCARRY1(bVar2,-0x5c) != SCARRY1(bVar1,in_CF);
      in_ZF = (byte)(bVar1 + in_CF) == '\0';
      in_EAX = CONCAT31((int3)((uint)in_EAX >> 8),
                        *(undefined1 *)(*(longlong *)register0x00000020 + 0x4036b184));
      register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + 0x10);
      in_CF = 0x5b < bVar2 || CARRY1(bVar1,in_CF);
    }
  }
  return;
}



// FUNCTION 14d7bebd4 FUN_14d7bebd4 body=21 status=ok
// SIG undefined FUN_14d7bebd4(void)

/* WARNING: Instruction at (ram,0x00014d7bebda) overlaps instruction at (ram,0x00014d7bebd9)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bebd4(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  byte in_CF;
  char in_ZF;
  undefined1 in_OF;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  longlong alStackX_8 [4];
  
  while (_DAT_71643d3ab8dfe9e1 = in_EAX, (bool)in_OF) {
    if (param_1 + -1 == 0 || in_ZF == '\0') {
      *(longlong *)(CONCAT44(in_register_00000004,in_EAX) + 0x71643d3a) = (longlong)ROUND(in_ST0);
      param_1 = param_1 + -1;
      in_ST0 = in_ST1;
      in_ST1 = in_ST2;
      in_ST2 = in_ST3;
      in_ST3 = in_ST4;
      in_ST4 = in_ST5;
      in_ST5 = in_ST6;
      in_ST6 = in_ST7;
    }
    else {
      bVar2 = (byte)in_EAX;
      bVar1 = bVar2 + 0xa4;
      in_OF = SCARRY1(bVar2,-0x5c) != SCARRY1(bVar1,in_CF);
      in_ZF = (byte)(bVar1 + in_CF) == '\0';
      in_EAX = CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)(param_1 + 0x4036b184));
      param_1 = *(longlong *)((longlong)register0x00000020 + 8);
      register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + 0x10);
      in_CF = 0x5b < bVar2 || CARRY1(bVar1,in_CF);
    }
  }
  return;
}



// FUNCTION 14d7bebf0 FUN_14d7bebf0 body=5 status=ok
// SIG undefined FUN_14d7bebf0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bebf0(void)

{
  longlong unaff_R13;
  bool in_CF;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (in_OF == in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_CF && !in_ZF) {
                    /* WARNING: Could not recover jumptable at 0x00014d7bebf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_R13 + 0x1d))();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bebf8 FUN_14d7bebf8 body=8 status=ok
// SIG undefined FUN_14d7bebf8(void)

int FUN_14d7bebf8(void)

{
  int in_EAX;
  byte in_CF;
  
  return (in_EAX + 0x30011a2c) - (uint)in_CF;
}



// FUNCTION 14d7bec04 FUN_14d7bec04 body=4 status=ok
// SIG undefined FUN_14d7bec04(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bec04(char param_1)

{
  char *pcVar1;
  unkbyte10 Var2;
  undefined7 in_register_00000001;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  unkbyte10 in_ST0;
  
  in(0xf6);
  *unaff_RDI = *unaff_RSI;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,0x61) + 0x5bf96ea7);
  *pcVar1 = *pcVar1 + param_1;
  Var2 = to_bcd(in_ST0);
  *(unkbyte10 *)(unaff_RBP + -0x7f) = Var2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bec08 FUN_14d7bec08 body=24 status=ok
// SIG undefined FUN_14d7bec08(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bec08(char param_1)

{
  char *pcVar1;
  unkbyte10 Var2;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  unkbyte10 in_ST0;
  
  *unaff_RDI = *unaff_RSI;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x5bf96ea7);
  *pcVar1 = *pcVar1 + param_1;
  Var2 = to_bcd(in_ST0);
  *(unkbyte10 *)(unaff_RBP + -0x7f) = Var2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bec2d FUN_14d7bec2d body=46 status=ok
// SIG undefined FUN_14d7bec2d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bec2d(byte param_1,undefined2 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint in_EAX;
  uint uVar5;
  undefined1 unaff_BL;
  byte unaff_BH;
  byte bVar6;
  undefined6 unaff_0000001a;
  undefined8 *puVar7;
  longlong unaff_RBP;
  longlong unaff_RSI;
  int *unaff_RDI;
  bool bVar8;
  
  piVar1 = (int *)(unaff_RSI + -0x5a05749b + unaff_RBP);
  *piVar1 = *piVar1 + (int)unaff_RBP + (uint)(in_EAX < 0xee432c02);
  do {
    bVar6 = unaff_BH;
    *(undefined8 *)((longlong)unaff_RDI + 0x6a) = *(undefined8 *)register0x00000020;
    uVar5 = in(param_2);
    *(undefined1 *)((ulonglong)uVar5 + 0x6441d611) = *(undefined1 *)((ulonglong)uVar5 + 0x6441d611);
    puVar7 = (undefined8 *)((longlong)register0x00000020 + 0x10);
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + 0x10);
    *(char *)(CONCAT62(unaff_0000001a,CONCAT11(bVar6,unaff_BL)) + -0x17) = (char)param_2;
    iVar2 = *unaff_RDI;
    uVar4 = (longlong)(int)puVar7 * -0x2a;
    unaff_RDI = (int *)(uVar4 & 0xffffffff);
    bVar8 = (longlong)(int)uVar4 != uVar4;
    uVar3 = *(uint *)((longlong)unaff_RDI + -0x62fb356b);
    *(uint *)((longlong)unaff_RDI + -0x62fb356b) =
         (uint)(CONCAT14(bVar8,uVar3) >> (bVar6 & 0x1f)) | uVar3 << 0x21 - (bVar6 & 0x1f);
    unaff_BH = param_1;
    param_1 = bVar6;
  } while (bVar8 == (int)(uVar5 - iVar2) < 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bec80 FUN_14d7bec80 body=2 status=ok
// SIG undefined FUN_14d7bec80(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bec80(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bec84 FUN_14d7bec84 body=4 status=ok
// SIG undefined FUN_14d7bec84(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bec84(byte param_1)

{
  uint uVar1;
  uint in_EAX;
  longlong unaff_RBX;
  
  uVar1 = *(uint *)(unaff_RBX + -0x28);
  *(uint *)(unaff_RBX + -0x28) =
       (uint)(CONCAT14(0x56b64a8c < in_EAX,uVar1) >> (param_1 & 0x1f)) |
       uVar1 << 0x21 - (param_1 & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bec8c FUN_14d7bec8c body=25 status=ok
// SIG undefined FUN_14d7bec8c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bec8c(void)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  char *unaff_RBX;
  undefined8 *puVar4;
  undefined8 *unaff_RBP;
  undefined8 uStack_10;
  
  puVar4 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\r';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar4 = puVar4 + -1;
    *puVar4 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  pcVar2 = (code *)swi(0xbb);
  uVar3 = (*pcVar2)();
  out(0x50,uVar3);
  out(0xc6,uVar3);
  *unaff_RBX = *unaff_RBX + -0x66;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7beca6 FUN_14d7beca6 body=25 status=ok
// SIG undefined FUN_14d7beca6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7beca6(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  uint in_EAX;
  uint uVar2;
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  uVar2 = in_EAX & *(uint *)(unaff_RBP + 0x47);
  out(param_2,(char)uVar2);
  uVar1 = in(0xd2);
  *(char *)(unaff_RDI + 0x7fd8bdd) = (*(char *)(unaff_RDI + 0x7fd8bdd) + -1) - (uVar2 < 0xffffff96);
  (&stack0x00000000)[(ulonglong)CONCAT31((int3)(uVar2 >> 8),uVar1) * 2] =
       (&stack0x00000000)[(ulonglong)CONCAT31((int3)(uVar2 >> 8),uVar1) * 2] + (char)unaff_RDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7becbf FUN_14d7becbf body=6 status=ok
// SIG undefined FUN_14d7becbf(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7becbf(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7becc8 FUN_14d7becc8 body=6 status=ok
// SIG undefined FUN_14d7becc8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7becc8(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined1 *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  float10 in_ST0;
  
  uVar1 = in(param_2);
  *(short *)(unaff_RBP + 0x79 + unaff_RDI * 2) = (short)in_ST0;
  out(param_2,uVar1);
  *unaff_RBX = *unaff_RBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7becd0 FUN_14d7becd0 body=3 status=ok
// SIG undefined FUN_14d7becd0(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bed57) overlaps instruction at (ram,0x00014d7bed56)
    */

void FUN_14d7becd0(longlong param_1,undefined2 param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 in_AL;
  undefined1 *unaff_RBX;
  undefined4 *unaff_RSI;
  bool in_SF;
  char in_OF;
  
  if ((bool)in_OF != in_SF) {
    out(param_2,in_AL);
    *unaff_RBX = *unaff_RBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar1 = (byte *)((longlong)unaff_RSI + -0x25);
  bVar2 = (byte)param_1 & 7;
  *pbVar1 = *pbVar1 >> bVar2 | *pbVar1 << 8 - bVar2;
  if (in_SF) {
    out(*unaff_RSI,param_2);
    DAT_d1273dd7 = DAT_d1273dd7 >> 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((POPCOUNT((uRam96062633d6e39948 | *(uint *)((ulonglong)uRam96062633d6e39948 - 0x2cfff98d)) &
                0xff) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// FUNCTION 14d7becd5 FUN_14d7becd5 body=6 status=ok
// SIG undefined FUN_14d7becd5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7becd5(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7becdd FUN_14d7becdd body=6 status=ok
// SIG undefined FUN_14d7becdd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7becdd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7becfe FUN_14d7becfe body=2 status=ok
// SIG undefined FUN_14d7becfe(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7becfe(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_AL;
  ulonglong uVar1;
  longlong unaff_RBP;
  undefined2 in_FS;
  
  out(0xb6,in_AL);
  uVar1 = (ulonglong)uRam11664d89d3c1faec;
  *(undefined2 *)(unaff_RBP + -0x3c) = in_FS;
  *(char *)(uVar1 - 0x7636e28e) = *(char *)(uVar1 - 0x7636e28e) + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bed3b FUN_14d7bed3b body=2 status=ok
// SIG undefined FUN_14d7bed3b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bed3b(longlong param_1)

{
  char *pcVar1;
  longlong unaff_RDI;
  
  pcVar1 = (char *)(unaff_RDI + 0xd5cdf + param_1);
  *pcVar1 = *pcVar1 + 't';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bed3f FUN_14d7bed3f body=39 status=ok
// SIG undefined FUN_14d7bed3f(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bed57) overlaps instruction at (ram,0x00014d7bed56)
    */

void FUN_14d7bed3f(longlong param_1,undefined2 param_2)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong in_RAX;
  undefined8 unaff_RSI;
  undefined4 *puVar3;
  undefined2 in_ES;
  
  puVar3 = (undefined4 *)CONCAT62((int6)((ulonglong)unaff_RSI >> 0x10),in_ES);
  pbVar1 = (byte *)((longlong)puVar3 + -0x25);
  bVar2 = (byte)param_1 & 7;
  *pbVar1 = *pbVar1 >> bVar2 | *pbVar1 << 8 - bVar2;
  if ((longlong)(in_RAX ^ 0xffffffff90a9bb89) < 0) {
    out(*puVar3,param_2);
    DAT_d1273dd7 = DAT_d1273dd7 >> 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((POPCOUNT((uRam96062633d6e39948 | *(uint *)((ulonglong)uRam96062633d6e39948 - 0x2cfff98d)) &
                0xff) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// FUNCTION 14d7bed68 FUN_14d7bed68 body=55 status=ok
// SIG undefined FUN_14d7bed68(void)

/* WARNING: Control flow encountered bad instruction data */

ulonglong FUN_14d7bed68(longlong param_1,longlong param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  longlong unaff_RBP;
  byte in_CF;
  bool in_PF;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  bVar1 = (byte)param_1 & 0x1f;
  uVar2 = (ulonglong)in_CF << 0x20 | in_RAX & 0xffffffff;
  uVar2 = uVar2 >> bVar1 | uVar2 << 0x21 - bVar1;
  if (in_ZF || in_OF != in_SF) {
    *(int *)(unaff_RBP + 0xc718c4) =
         *(int *)(unaff_RBP + 0xc718c4) + (int)param_1 + (uint)((uVar2 & 0x100000000) != 0);
    *(uint *)(param_2 + -0x315bde10) = *(uint *)(param_2 + -0x315bde10) ^ 1;
    *(undefined1 *)(unaff_RBP + 0x62) = 100;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_PF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 14d7bed75 FUN_14d7bed75 body=14 status=ok
// SIG undefined FUN_14d7bed75(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bed75(uint *param_1,undefined8 param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar5;
  undefined8 in_RAX;
  uint unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_0000002c;
  uint uVar4;
  
  uVar5 = (uint)(0x1b315680 <
                (uint)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(0x79,(char)in_RAX)));
  uVar3 = *param_1;
  uVar4 = *param_1;
  *param_1 = (uVar4 - unaff_EBX) - uVar5;
  if ((int)*param_1 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x66) = (int)param_1;
  piVar2 = (int *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0xc718c4);
  *piVar2 = *piVar2 + (int)param_1 + (uint)(uVar3 < unaff_EBX || uVar4 - unaff_EBX < uVar5);
  puVar1 = (uint *)(CONCAT71((int7)((ulonglong)param_2 >> 8),(byte)param_2 & (byte)(unaff_EBX >> 8))
                   + -0x315bde10);
  *puVar1 = *puVar1 ^ 1;
  *(undefined1 *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x62) = 100;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bed85 FUN_14d7bed85 body=5 status=ok
// SIG undefined FUN_14d7bed85(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bed85(void)

{
  byte *pbVar1;
  byte unaff_BL;
  undefined4 unaff_EBP;
  undefined4 unaff_0000002c;
  
  pbVar1 = (byte *)(CONCAT44(unaff_0000002c,unaff_EBP) + -0x17);
  *pbVar1 = *pbVar1 | unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bedb1 FUN_14d7bedb1 body=12 status=ok
// SIG undefined FUN_14d7bedb1(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7bedbc) */

void FUN_14d7bedb1(undefined8 param_1,undefined2 param_2)

{
  in(param_2);
  (*(code *)&LAB_161943e2f)();
  return;
}



// FUNCTION 14d7bedce FUN_14d7bedce body=20 status=ok
// SIG undefined FUN_14d7bedce(void)

void FUN_14d7bedce(char param_1)

{
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  (*(code *)&LAB_161943e2f)
            (param_1 + *(char *)(unaff_RSI + 7),*(int *)(unaff_RDI + 0x2e) * -0x2bc87e5);
  return;
}



// FUNCTION 14d7bedff FUN_14d7bedff body=3 status=ok
// SIG undefined FUN_14d7bedff(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bedff(void)

{
  longlong unaff_RBP;
  longlong unaff_RDI;
  float10 in_ST0;
  
  *(longlong *)(unaff_RBP + 0x6cc3f80b + unaff_RDI * 4) = (longlong)ROUND(in_ST0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bee03 FUN_14d7bee03 body=6 status=ok
// SIG undefined FUN_14d7bee03(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bee03(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined1 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bee0c FUN_14d7bee0c body=16 status=ok
// SIG undefined FUN_14d7bee0c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bee0c(void)

{
  undefined1 in_AL;
  
  DAT_f97f11d0 = in_AL;
  func_0xf995cbb6();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bee26 FUN_14d7bee26 body=2 status=ok
// SIG undefined FUN_14d7bee26(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bee26(void)

{
  bool in_CF;
  bool in_ZF;
  
  if (in_CF || in_ZF) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bee2e FUN_14d7bee2e body=20 status=ok
// SIG undefined FUN_14d7bee2e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bee2e(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  byte unaff_BH;
  longlong unaff_RBP;
  byte *unaff_RSI;
  bool bVar4;
  undefined1 in_CF;
  undefined1 in_ZF;
  char in_SF;
  char in_OF;
  undefined8 unaff_retaddr;
  byte bVar3;
  
  if (in_OF != in_SF) {
    while ((bool)in_CF || (bool)in_ZF) {
      bVar4 = *unaff_RSI < (byte)((ulonglong)param_2 >> 8);
      pbVar1 = (byte *)(unaff_RBP + -0x12);
      bVar2 = *pbVar1;
      bVar3 = *pbVar1;
      *pbVar1 = (bVar3 - unaff_BH) - bVar4;
      in_ZF = *pbVar1 == 0;
      in_CF = bVar2 < unaff_BH || (byte)(bVar3 - unaff_BH) < bVar4;
    }
    pbVar1 = (byte *)(CONCAT44(in_register_00000004,in_EAX) + -0x6ad1872b);
    *pbVar1 = *pbVar1 >> 1 | in_CF << 7;
    (*(code *)&LAB_161943e2f)(unaff_retaddr);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bee4b FUN_14d7bee4b body=3 status=ok
// SIG undefined FUN_14d7bee4b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bee4b(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bee53 FUN_14d7bee53 body=16 status=ok
// SIG undefined FUN_14d7bee53(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bee53(longlong param_1,longlong param_2)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  byte unaff_BH;
  uint *unaff_RDI;
  bool bVar3;
  
  iVar2 = in_EAX + -0x16e7ce88;
  if (in_EAX < 0x16e7ce88) {
    uVar1 = CONCAT22((short)((uint)iVar2 >> 0x10),
                     CONCAT11((char)((uint)iVar2 >> 8) +
                              *(char *)(param_1 + -0x516032aa + param_2 * 4),(char)iVar2));
    bVar3 = CARRY1(unaff_BH,unaff_BH);
    if (!SCARRY1(unaff_BH,unaff_BH)) {
      if (!bVar3 && (unaff_BH & 0x7f) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (param_1 == 1 ||
          (bool)(((char)(uVar1 + 0x810f7973) - bVar3) + -0x6a) !=
          (uVar1 < 0x7ef0868d || uVar1 + 0x810f7973 < (uint)bVar3)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *unaff_RDI = uVar1;
  }
  return;
}



// FUNCTION 14d7bee63 FUN_14d7bee63 body=21 status=ok
// SIG undefined FUN_14d7bee63(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bee63(longlong param_1)

{
  uint in_EAX;
  uint *unaff_RDI;
  bool in_CF;
  bool in_ZF;
  bool in_OF;
  
  if (in_OF) {
    *unaff_RDI = in_EAX;
    return;
  }
  if (in_CF || in_ZF) {
    if (param_1 == 1 ||
        (bool)(((char)(in_EAX + 0x810f7973) - in_CF) + -0x6a) !=
        (in_EAX < 0x7ef0868d || in_EAX + 0x810f7973 < (uint)in_CF)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bee73 FUN_14d7bee73 body=3 status=ok
// SIG undefined FUN_14d7bee73(void)

void FUN_14d7bee73(void)

{
  return;
}



// FUNCTION 14d7bee77 FUN_14d7bee77 body=3 status=ok
// SIG undefined FUN_14d7bee77(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bee77(longlong param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bee83 FUN_14d7bee83 body=1 status=ok
// SIG undefined FUN_14d7bee83(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bee83(undefined8 param_1,undefined2 param_2)

{
  undefined1 in_AL;
  
  out(param_2,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bee8f FUN_14d7bee8f body=3 status=ok
// SIG undefined FUN_14d7bee8f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bee8f(uint *param_1)

{
  undefined8 unaff_RDI;
  
  *(undefined8 *)((ulonglong)((uint)&stack0x00000000 & *param_1) - 8) = unaff_RDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bee94 FUN_14d7bee94 body=3 status=ok
// SIG undefined FUN_14d7bee94(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bee94(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bee98 FUN_14d7bee98 body=5 status=ok
// SIG undefined FUN_14d7bee98(void)

void FUN_14d7bee98(void)

{
  uint uVar1;
  byte in_CF;
  
  uVar1 = in(199);
  *(int *)((ulonglong)uVar1 + 0x5de28669) =
       (*(int *)((ulonglong)uVar1 + 0x5de28669) - (int)&stack0xfffffffffffffff8) - (uint)in_CF;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7beea0 FUN_14d7beea0 body=6 status=ok
// SIG undefined FUN_14d7beea0(void)

void FUN_14d7beea0(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7beea8 FUN_14d7beea8 body=8 status=ok
// SIG undefined FUN_14d7beea8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7beea8(undefined4 param_1)

{
  uint in_EAX;
  
  out(0x65,param_1);
  *(int *)(ulonglong)in_EAX = *(int *)(ulonglong)in_EAX >> 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7beeb0 FUN_14d7beeb0 body=2 status=ok
// SIG undefined FUN_14d7beeb0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7beeb0(int *param_1)

{
  *param_1 = *param_1 >> 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7beeb8 FUN_14d7beeb8 body=2 status=ok
// SIG undefined FUN_14d7beeb8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7beeb8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7beebd FUN_14d7beebd body=6 status=ok
// SIG undefined FUN_14d7beebd(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7beebd(void)

{
  uint unaff_EDI;
  
  _DAT_d70f4c8e = _DAT_d70f4c8e | unaff_EDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7beecd FUN_14d7beecd body=9 status=ok
// SIG undefined FUN_14d7beecd(void)

undefined8 FUN_14d7beecd(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  
  uVar1 = in(param_2);
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),0x16);
}



// FUNCTION 14d7beee2 FUN_14d7beee2 body=6 status=ok
// SIG undefined FUN_14d7beee2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7beee2(void)

{
  bool in_SF;
  
  if (in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7beeea FUN_14d7beeea body=66 status=ok
// SIG undefined FUN_14d7beeea(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7beeeb) overlaps instruction at (ram,0x00014d7beeea)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7bef08) */
/* WARNING: Removing unreachable block (ram,0x00014d7beed9) */
/* WARNING: Removing unreachable block (ram,0x00014d7beee8) */
/* WARNING: Removing unreachable block (ram,0x00014d7bef0b) */
/* WARNING: Removing unreachable block (ram,0x00014d7bef26) */

void FUN_14d7beeea(undefined8 param_1,undefined1 param_2)

{
  byte in_AL;
  byte *unaff_RSI;
  uint *unaff_RDI;
  byte in_CF;
  
  *unaff_RDI = *unaff_RDI << 1 | (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* WARNING: Read-only address (ram,0x00014130556f) is written */
  bRam000000014130556f = in_AL & *unaff_RSI & 0x4d;
  out(*(undefined4 *)unaff_RSI,CONCAT11(0xe6,param_2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bef3c FUN_14d7bef3c body=26 status=ok
// SIG undefined FUN_14d7bef3c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bef3c(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  uint unaff_EBX;
  undefined4 unaff_EBP;
  uint *unaff_RSI;
  longlong unaff_RDI;
  float10 in_ST0;
  
  *(undefined4 *)(param_2 + 0x35c07207) = unaff_EBP;
  in((short)param_2);
  *(byte *)(ulonglong)unaff_EBX = *(byte *)(ulonglong)unaff_EBX ^ 0xb8;
  piVar1 = (int *)((ulonglong)(unaff_EBX | *unaff_RSI) - 0x58);
  *piVar1 = *piVar1 + (int)&stack0xfffffffffffffff8;
  *(longlong *)(unaff_RDI + 0x72 + (longlong)unaff_RSI * 8) = (longlong)ROUND(in_ST0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bef58 FUN_14d7bef58 body=10 status=ok
// SIG undefined FUN_14d7bef58(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bef58(void)

{
  undefined4 in_EAX;
  longlong unaff_RBP;
  
  *(undefined4 *)(unaff_RBP + 0x61ec805f) = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bef65 FUN_14d7bef65 body=6 status=ok
// SIG undefined FUN_14d7bef65(void)

void FUN_14d7bef65(byte param_1)

{
  longlong in_RAX;
  
  *(char *)(in_RAX + 0x54) = *(char *)(in_RAX + 0x54) >> (param_1 & 0x1f);
  return;
}



// FUNCTION 14d7bef79 FUN_14d7bef79 body=32 status=ok
// SIG undefined FUN_14d7bef79(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bef79(undefined8 param_1,longlong param_2,undefined8 param_3,byte *param_4)

{
  int *piVar1;
  byte *pbVar2;
  uint in_EAX;
  uint uVar3;
  byte bVar4;
  char cVar5;
  undefined6 uVar6;
  byte unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  uint unaff_ESP;
  longlong unaff_RSI;
  undefined4 unaff_EDI;
  undefined4 unaff_0000003c;
  byte unaff_R14B;
  undefined2 in_GS;
  float10 in_ST0;
  
  uVar6 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar4 = (byte)param_1;
  *(int *)(unaff_RSI + 0x11) = *(int *)(unaff_RSI + 0x11) + 1;
  *(undefined4 *)
   (CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) + -0x52) =
       unaff_EDI;
  out(0x2c,(char)in_EAX);
  *(int *)(unaff_RSI + -0x32) = *(int *)(unaff_RSI + -0x32) + -1;
  cVar5 = ((char)((ulonglong)param_1 >> 8) - (char)((ulonglong)param_2 >> 8)) -
          (in_EAX < 0x2389f6a3);
  if (unaff_BH ==
      *(char *)(CONCAT62(uVar6,CONCAT11(cVar5,bVar4)) + -0x77 +
               CONCAT44(unaff_0000003c,unaff_EDI) * 2)) {
    uVar3 = in_EAX + 0xdc76095d & 0xffffff52;
    *(char *)(param_2 + 0x4b) = *(char *)(param_2 + 0x4b) + (char)uVar3;
    *param_4 = *param_4 ^ unaff_R14B;
    pbVar2 = (byte *)(CONCAT62(uVar6,CONCAT11(cVar5,bVar4)) + -0x1677c9f2);
    *pbVar2 = *pbVar2 ^ (byte)(uVar3 >> 8);
    pbVar2 = (byte *)(param_2 + -0x1db33d65);
    *pbVar2 = *pbVar2 >> (bVar4 & 7) | *pbVar2 << 8 - (bVar4 & 7);
    *(undefined2 *)(CONCAT62(uVar6,CONCAT11(cVar5,bVar4)) + 0x158fb0a0) = in_GS;
    *(int *)(ulonglong)(unaff_ESP & 0xc68528e3) =
         *(int *)(ulonglong)(unaff_ESP & 0xc68528e3) - CONCAT22(unaff_0000001a,(ushort)unaff_BL);
    pbVar2 = (byte *)(CONCAT44(unaff_0000003c,unaff_EDI) + 0x1809f2c2);
    *pbVar2 = ~*pbVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar1 = (int *)((ulonglong)(in_EAX + 0xdc76095d) - 0x58);
  *piVar1 = *piVar1 + unaff_ESP;
  *(longlong *)(CONCAT44(unaff_0000003c,unaff_EDI) + 0x63429478a) = (longlong)ROUND(in_ST0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7befb2 FUN_14d7befb2 body=11 status=ok
// SIG undefined FUN_14d7befb2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7befb2(void)

{
  longlong unaff_RDI;
  
  *(byte *)(unaff_RDI + 0x1809f2c2) = ~*(byte *)(unaff_RDI + 0x1809f2c2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7befc7 FUN_14d7befc7 body=4 status=ok
// SIG undefined FUN_14d7befc7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7befc7(byte param_1)

{
  char in_AL;
  uint unaff_EBX;
  undefined4 unaff_EBP;
  byte *unaff_RSI;
  longlong unaff_RDI;
  
  *unaff_RSI = *unaff_RSI << (param_1 & 7) | *unaff_RSI >> 8 - (param_1 & 7);
  *unaff_RSI = *unaff_RSI - (in_AL + -0x39);
  *(undefined4 *)((ulonglong)(unaff_EBX & (uint)(undefined4 *)(unaff_RDI + 4)) - 0x18) = unaff_EBP;
  *(undefined4 *)(unaff_RDI + 4) = *(undefined4 *)unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7befcb FUN_14d7befcb body=11 status=ok
// SIG undefined FUN_14d7befcb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7befcb(void)

{
  char in_AL;
  uint unaff_EBX;
  undefined4 unaff_EBP;
  char *unaff_RSI;
  longlong unaff_RDI;
  
  *unaff_RSI = *unaff_RSI - in_AL;
  *(undefined4 *)((ulonglong)(unaff_EBX & (uint)(undefined4 *)(unaff_RDI + 4)) - 0x18) = unaff_EBP;
  *(undefined4 *)(unaff_RDI + 4) = *(undefined4 *)unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7befd7 FUN_14d7befd7 body=15 status=ok
// SIG undefined FUN_14d7befd7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7befd7(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7beff3 FUN_14d7beff3 body=14 status=ok
// SIG undefined FUN_14d7beff3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7beff3(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf007 FUN_14d7bf007 body=12 status=ok
// SIG undefined FUN_14d7bf007(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf007(void)

{
  char *pcVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  undefined1 unaff_BH;
  longlong unaff_RSI;
  
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x3a);
  *pcVar1 = *pcVar1 + -0xe;
  LOCK();
  *(undefined1 *)(unaff_RSI + -0x561f6876) = unaff_BH;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf01b FUN_14d7bf01b body=8 status=ok
// SIG undefined FUN_14d7bf01b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf01b(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  byte unaff_BL;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  
  out(*unaff_RSI,(short)param_2);
  pcVar1 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(0x8c,(char)param_2)) +
                   -0x23718fd);
  *pcVar1 = *pcVar1 + unaff_BL;
  *(byte *)(unaff_RBP + 0x50) = *(byte *)(unaff_RBP + 0x50) | unaff_BL;
  out(0xb1,unaff_RSI[1]);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf025 FUN_14d7bf025 body=21 status=ok
// SIG undefined FUN_14d7bf025(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf025(void)

{
  char cVar1;
  byte unaff_BL;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RBP;
  undefined1 *unaff_RSI;
  int unaff_EDI;
  
  uVar2 = (ulonglong)(uint)((int)&stack0x00000000 + unaff_EDI);
  puVar3 = (undefined8 *)(uVar2 - 8);
  *(undefined8 **)(uVar2 - 8) = unaff_RBP;
  cVar1 = '\x16';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar3 = puVar3 + -1;
    *puVar3 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  *(ulonglong *)(uVar2 - 0xc0) = uVar2 - 8;
  *(byte *)(uVar2 + 0x48) = *(byte *)(uVar2 + 0x48) | unaff_BL;
  out(0xb1,*unaff_RSI);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf03d FUN_14d7bf03d body=20 status=ok
// SIG undefined FUN_14d7bf03d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bf091) overlaps instruction at (ram,0x00014d7bf090)
    */

void FUN_14d7bf03d(longlong param_1,char *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined1 in_AL;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *unaff_RDI;
  char in_CF;
  char in_ZF;
  bool in_SF;
  char in_OF;
  
  *unaff_RDI = in_AL;
  if (param_1 + -1 != 0 && in_ZF != '\0') {
    uVar2 = in((short)param_2);
    *(undefined4 *)(unaff_RDI + 1) = uVar2;
    *param_2 = *param_2 + (char)((ulonglong)(param_1 + -1) >> 8) + in_CF;
    return;
  }
  if (!in_SF) {
    if (in_OF != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return;
  }
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x6d);
  *pcVar1 = *pcVar1 + '\x10';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf049 FUN_14d7bf049 body=33 status=ok
// SIG undefined FUN_14d7bf049(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf049(undefined8 param_1,undefined2 param_2)

{
  code *pcVar1;
  uint *puVar2;
  byte bVar3;
  int unaff_ESI;
  int *unaff_RDI;
  
  pcVar1 = (code *)swi(0xd);
  puVar2 = (uint *)(*pcVar1)();
  *puVar2 = *puVar2 & (uint)puVar2;
  bVar3 = (byte)((ushort)param_2 >> 8);
  out(CONCAT11(bVar3 - *(byte *)(unaff_RDI + -0x91d2c23),(char)param_2),(uint)puVar2);
  *unaff_RDI = *unaff_RDI + unaff_ESI + (uint)(bVar3 < *(byte *)(unaff_RDI + -0x91d2c23));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf06b FUN_14d7bf06b body=1 status=ok
// SIG undefined FUN_14d7bf06b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf06b(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf080 FUN_14d7bf080 body=3 status=ok
// SIG undefined FUN_14d7bf080(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7bf0c8) */
/* WARNING: Removing unreachable block (ram,0x00014d7bf0d3) */
/* WARNING: Removing unreachable block (ram,0x00014d7bf0d5) */

uint FUN_14d7bf080(undefined8 param_1,char *param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 in_RAX;
  int *piVar4;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
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
  ulonglong uVar5;
  
  piVar4 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + -0x59);
  uVar3 = (int)piVar4 + *piVar4;
  uVar5 = (ulonglong)uVar3;
  if (SCARRY4((int)piVar4,*piVar4)) {
    *(char *)(unaff_RSI + 0x2d) = *(char *)(unaff_RSI + 0x2d) + unaff_BL;
    param_2[0xc] = param_2[0xc] << 1;
    *(undefined2 *)(uVar5 + 0x44f8f58a) = in_FPUControlWord;
    *(undefined2 *)(uVar5 + 0x44f8f58e) = in_FPUStatusWord;
    *(undefined2 *)(uVar5 + 0x44f8f592) = in_FPUTagWord;
    *(undefined8 *)(uVar5 + 0x44f8f59e) = in_FPUDataPointer;
    *(undefined8 *)(uVar5 + 0x44f8f596) = in_FPUInstructionPointer;
    *(undefined2 *)(uVar5 + 0x44f8f59c) = in_FPULastInstructionOpcode;
    *(unkbyte10 *)(uVar5 + 0x44f8f5a6) = in_ST0;
    *(unkbyte10 *)(uVar5 + 0x44f8f5b0) = in_ST1;
    *(unkbyte10 *)(uVar5 + 0x44f8f5ba) = in_ST2;
    *(unkbyte10 *)(uVar5 + 0x44f8f5c4) = in_ST3;
    *(unkbyte10 *)(uVar5 + 0x44f8f5ce) = in_ST4;
    *(unkbyte10 *)(uVar5 + 0x44f8f5d8) = in_ST5;
    *(unkbyte10 *)(uVar5 + 0x44f8f5e2) = in_ST6;
    *(unkbyte10 *)(uVar5 + 0x44f8f5ec) = in_ST7;
    pbVar1 = (byte *)(CONCAT71(unaff_00000019,unaff_BL) + 99);
    *pbVar1 = *pbVar1 ^ (byte)param_1;
    do {
    } while( true );
  }
  uVar2 = in((short)param_2);
  *unaff_RDI = uVar2;
  *param_2 = *param_2 + (char)((ulonglong)param_1 >> 8);
  return (uint)CONCAT71((uint7)(uint3)(uVar3 >> 8),0xa9) | 0x80e02bc4;
}



// FUNCTION 14d7bf09e FUN_14d7bf09e body=7 status=ok
// SIG undefined FUN_14d7bf09e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7bf0c8) */
/* WARNING: Removing unreachable block (ram,0x00014d7bf0d3) */
/* WARNING: Removing unreachable block (ram,0x00014d7bf0d5) */

void FUN_14d7bf09e(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  code *pcVar3;
  int in_EAX;
  uint *puVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  byte bVar7;
  char cVar8;
  undefined8 unaff_RBX;
  int *unaff_RSI;
  undefined1 *unaff_RDI;
  char in_R11B;
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
  
  bVar7 = (byte)((ulonglong)param_2 >> 8);
  uVar6 = (undefined1)param_2;
  *unaff_RDI = (char)in_EAX;
  cVar8 = (byte)unaff_RBX + unaff_RDI[0x6c4ecfe3];
  if (-1 < cVar8) {
    pcVar3 = (code *)swi(0xd);
    puVar4 = (uint *)(*pcVar3)();
    *puVar4 = *puVar4 & (uint)puVar4;
    out(CONCAT11(bVar7 - unaff_RDI[-0x2474b08b],uVar6),(uint)puVar4);
    *(uint *)(unaff_RDI + 1) =
         *(int *)(unaff_RDI + 1) + (int)unaff_RSI + (uint)(bVar7 < (byte)unaff_RDI[-0x2474b08b]);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(0x22,(char)in_EAX);
  for (; param_1 != 0; param_1 = param_1 + -1) {
    in_EAX = *unaff_RSI;
    unaff_RSI = unaff_RSI + 1;
  }
  uVar5 = (ulonglong)((in_EAX + 0x331b4671) - (uint)CARRY1((byte)unaff_RBX,unaff_RDI[0x6c4ecfe3]));
  *(char *)((longlong)unaff_RSI + 0x2d) = *(char *)((longlong)unaff_RSI + 0x2d) + in_R11B;
  pcVar1 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(bVar7 - DAT_00000040,uVar6)
                            ) + 0xc);
  *pcVar1 = *pcVar1 << 1;
  *(undefined2 *)(uVar5 + 0x44f8f58a) = in_FPUControlWord;
  *(undefined2 *)(uVar5 + 0x44f8f58e) = in_FPUStatusWord;
  *(undefined2 *)(uVar5 + 0x44f8f592) = in_FPUTagWord;
  *(undefined8 *)(uVar5 + 0x44f8f59e) = in_FPUDataPointer;
  *(undefined8 *)(uVar5 + 0x44f8f596) = in_FPUInstructionPointer;
  *(undefined2 *)(uVar5 + 0x44f8f59c) = in_FPULastInstructionOpcode;
  *(unkbyte10 *)(uVar5 + 0x44f8f5a6) = in_ST0;
  *(unkbyte10 *)(uVar5 + 0x44f8f5b0) = in_ST1;
  *(unkbyte10 *)(uVar5 + 0x44f8f5ba) = in_ST2;
  *(unkbyte10 *)(uVar5 + 0x44f8f5c4) = in_ST3;
  *(unkbyte10 *)(uVar5 + 0x44f8f5ce) = in_ST4;
  *(unkbyte10 *)(uVar5 + 0x44f8f5d8) = in_ST5;
  *(unkbyte10 *)(uVar5 + 0x44f8f5e2) = in_ST6;
  *(unkbyte10 *)(uVar5 + 0x44f8f5ec) = in_ST7;
  puVar2 = (undefined1 *)(CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar8) + 99);
  *puVar2 = *puVar2;
  do {
  } while( true );
}



// FUNCTION 14d7bf0a6 FUN_14d7bf0a6 body=7 status=ok
// SIG undefined FUN_14d7bf0a6(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7bf0c8) */
/* WARNING: Removing unreachable block (ram,0x00014d7bf0d3) */
/* WARNING: Removing unreachable block (ram,0x00014d7bf0d5) */

void FUN_14d7bf0a6(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  int in_EAX;
  ulonglong uVar2;
  longlong unaff_RBX;
  int *unaff_RSI;
  char in_R11B;
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
  
  for (; param_1 != 0; param_1 = param_1 + -1) {
    in_EAX = *unaff_RSI;
    unaff_RSI = unaff_RSI + 1;
  }
  uVar2 = (ulonglong)(in_EAX + 0x331b4671);
  *(char *)((longlong)unaff_RSI + 0x2d) = *(char *)((longlong)unaff_RSI + 0x2d) + in_R11B;
  pcVar1 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                             CONCAT11((char)((ulonglong)param_2 >> 8) - DAT_00000040,(char)param_2))
                   + 0xc);
  *pcVar1 = *pcVar1 << 1;
  *(undefined2 *)(uVar2 + 0x44f8f58a) = in_FPUControlWord;
  *(undefined2 *)(uVar2 + 0x44f8f58e) = in_FPUStatusWord;
  *(undefined2 *)(uVar2 + 0x44f8f592) = in_FPUTagWord;
  *(undefined8 *)(uVar2 + 0x44f8f59e) = in_FPUDataPointer;
  *(undefined8 *)(uVar2 + 0x44f8f596) = in_FPUInstructionPointer;
  *(undefined2 *)(uVar2 + 0x44f8f59c) = in_FPULastInstructionOpcode;
  *(unkbyte10 *)(uVar2 + 0x44f8f5a6) = in_ST0;
  *(unkbyte10 *)(uVar2 + 0x44f8f5b0) = in_ST1;
  *(unkbyte10 *)(uVar2 + 0x44f8f5ba) = in_ST2;
  *(unkbyte10 *)(uVar2 + 0x44f8f5c4) = in_ST3;
  *(unkbyte10 *)(uVar2 + 0x44f8f5ce) = in_ST4;
  *(unkbyte10 *)(uVar2 + 0x44f8f5d8) = in_ST5;
  *(unkbyte10 *)(uVar2 + 0x44f8f5e2) = in_ST6;
  *(unkbyte10 *)(uVar2 + 0x44f8f5ec) = in_ST7;
  *(undefined1 *)(unaff_RBX + 99) = *(undefined1 *)(unaff_RBX + 99);
  do {
  } while( true );
}



// FUNCTION 14d7bf0b2 FUN_14d7bf0b2 body=3 status=ok
// SIG undefined FUN_14d7bf0b2(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7bf0c8) */
/* WARNING: Removing unreachable block (ram,0x00014d7bf0d3) */
/* WARNING: Removing unreachable block (ram,0x00014d7bf0d5) */

void FUN_14d7bf0b2(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  longlong unaff_RSI;
  char in_R11B;
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
  
  cVar2 = *(char *)(param_1 + 0x40);
  *(char *)(unaff_RSI + 0x2d) = *(char *)(unaff_RSI + 0x2d) + in_R11B;
  pcVar1 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                             CONCAT11((char)((ulonglong)param_2 >> 8) - cVar2,(char)param_2)) + 0xc)
  ;
  *pcVar1 = *pcVar1 << 1;
  lVar3 = CONCAT44(in_register_00000004,in_EAX);
  *(undefined2 *)(lVar3 + 0x44f8f58a) = in_FPUControlWord;
  *(undefined2 *)(lVar3 + 0x44f8f58e) = in_FPUStatusWord;
  *(undefined2 *)(lVar3 + 0x44f8f592) = in_FPUTagWord;
  *(undefined8 *)(lVar3 + 0x44f8f59e) = in_FPUDataPointer;
  *(undefined8 *)(lVar3 + 0x44f8f596) = in_FPUInstructionPointer;
  *(undefined2 *)(lVar3 + 0x44f8f59c) = in_FPULastInstructionOpcode;
  *(unkbyte10 *)(lVar3 + 0x44f8f5a6) = in_ST0;
  *(unkbyte10 *)(lVar3 + 0x44f8f5b0) = in_ST1;
  *(unkbyte10 *)(lVar3 + 0x44f8f5ba) = in_ST2;
  *(unkbyte10 *)(lVar3 + 0x44f8f5c4) = in_ST3;
  *(unkbyte10 *)(lVar3 + 0x44f8f5ce) = in_ST4;
  *(unkbyte10 *)(lVar3 + 0x44f8f5d8) = in_ST5;
  *(unkbyte10 *)(lVar3 + 0x44f8f5e2) = in_ST6;
  *(unkbyte10 *)(lVar3 + 0x44f8f5ec) = in_ST7;
  *(byte *)(unaff_RBX + 99) = *(byte *)(unaff_RBX + 99) ^ (byte)param_1;
  do {
  } while( true );
}



// FUNCTION 14d7bf0b7 FUN_14d7bf0b7 body=1 status=ok
// SIG undefined FUN_14d7bf0b7(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7bf0c8) */
/* WARNING: Removing unreachable block (ram,0x00014d7bf0d3) */
/* WARNING: Removing unreachable block (ram,0x00014d7bf0d5) */

void FUN_14d7bf0b7(void)

{
  longlong unaff_RBX;
  byte in_R9B;
  
  *(byte *)(unaff_RBX + 99) = *(byte *)(unaff_RBX + 99) ^ in_R9B;
  do {
  } while( true );
}



// FUNCTION 14d7bf0bb FUN_14d7bf0bb body=6 status=ok
// SIG undefined FUN_14d7bf0bb(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7bf0c8) */
/* WARNING: Removing unreachable block (ram,0x00014d7bf0d3) */
/* WARNING: Removing unreachable block (ram,0x00014d7bf0d5) */

void FUN_14d7bf0bb(void)

{
  longlong unaff_RBX;
  byte in_R9B;
  
  *(byte *)(unaff_RBX + 99) = *(byte *)(unaff_RBX + 99) ^ in_R9B;
  do {
  } while( true );
}



// FUNCTION 14d7bf0c3 FUN_14d7bf0c3 body=18 status=ok
// SIG undefined FUN_14d7bf0c3(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bf0c3(void)

{
  longlong unaff_R13;
  char in_CF;
  
  _DAT_130b137e29a9158b =
       (int)CONCAT71((int7)(int3)((uint)*(undefined4 *)(unaff_R13 + 0x73) >> 8),
                     (char)*(undefined4 *)(unaff_R13 + 0x73) + -0x5f + in_CF);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf0d7 FUN_14d7bf0d7 body=4 status=ok
// SIG undefined FUN_14d7bf0d7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf0d7(void)

{
  undefined2 *unaff_RSI;
  longlong unaff_RDI;
  undefined2 in_DS;
  
  *(uint *)(unaff_RDI + 0x1a) = *(uint *)(unaff_RDI + 0x1a) & (uint)unaff_RSI;
  *unaff_RSI = in_DS;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf0db FUN_14d7bf0db body=15 status=ok
// SIG undefined FUN_14d7bf0db(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf0db(void)

{
  undefined2 *unaff_RSI;
  longlong unaff_RDI;
  undefined2 in_DS;
  
  *(uint *)(unaff_RDI + 0x1a) = *(uint *)(unaff_RDI + 0x1a) & (uint)unaff_RSI;
  *unaff_RSI = in_DS;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf0ef FUN_14d7bf0ef body=21 status=ok
// SIG undefined FUN_14d7bf0ef(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bf0ef(undefined8 param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  uint in_EAX;
  undefined4 unaff_ESI;
  byte *unaff_RDI;
  undefined1 auStackX_8 [32];
  
  out(*(undefined1 *)(ulonglong)in_EAX,(short)param_2);
  bVar3 = *unaff_RDI;
  bVar2 = ((undefined1 *)(ulonglong)in_EAX)[1];
  if ((POPCOUNT(bVar2 - bVar3) & 1U) == 0) {
    if (bVar2 < bVar3 || (byte)(bVar2 - bVar3) == '\0') {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar1 = (uint *)((ulonglong)
                      (uint)(param_2 + *(int *)CONCAT71((int7)((ulonglong)param_1 >> 8),0x8c)) +
                     0x3856199a);
    *puVar1 = *puVar1 & (uint)auStackX_8;
    if ((int)*puVar1 < 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    _DAT_130b137e29a9158b =
         CONCAT31((int3)((uint)unaff_ESI >> 8),(char)unaff_ESI + -0x5f + (bVar2 < bVar3));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf10b FUN_14d7bf10b body=9 status=ok
// SIG undefined FUN_14d7bf10b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7bf0c8) */
/* WARNING: Removing unreachable block (ram,0x00014d7bf0d3) */
/* WARNING: Removing unreachable block (ram,0x00014d7bf0d5) */

void FUN_14d7bf10b(void)

{
  byte *pbVar1;
  char cVar2;
  byte in_AL;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  undefined8 *puVar3;
  undefined8 *unaff_RBP;
  byte in_R9B;
  byte in_CF;
  bool in_ZF;
  char in_SF;
  char in_OF;
  undefined8 uStack_10;
  
  if (!in_ZF && in_OF == in_SF) {
    pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 99);
    *pbVar1 = *pbVar1 ^ in_R9B;
    do {
    } while( true );
  }
  if (in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(ulonglong *)((longlong)unaff_RBP + -0x4064b267) =
       CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  puVar3 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar2 = '\n';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar3 = puVar3 + -1;
    *puVar3 = *unaff_RBP;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
  if ((0x4a < in_AL || CARRY1(in_AL + 0xb5,in_CF)) || (byte)(in_AL + 0xb5 + in_CF) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT62(unaff_0000001a,0xc526) = *(char *)CONCAT62(unaff_0000001a,0xc526) + -0x3b;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf117 FUN_14d7bf117 body=37 status=ok
// SIG undefined FUN_14d7bf117(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf117(void)

{
  undefined1 unaff_BL;
  undefined6 unaff_0000001a;
  bool in_CF;
  bool in_ZF;
  
  if (!in_CF && !in_ZF) {
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(0xc5,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(0xc5,unaff_BL)) + -0x3b;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf166 FUN_14d7bf166 body=8 status=ok
// SIG undefined FUN_14d7bf166(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf166(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf176 FUN_14d7bf176 body=2 status=ok
// SIG undefined FUN_14d7bf176(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf176(int *param_1,undefined2 param_2)

{
  undefined8 in_RAX;
  int unaff_EBX;
  byte in_CF;
  
  *param_1 = *param_1 + unaff_EBX + (uint)in_CF;
  out(param_2,(int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + ':'));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf17a FUN_14d7bf17a body=23 status=ok
// SIG undefined FUN_14d7bf17a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf17a(void)

{
  uint *puVar1;
  uint in_EAX;
  undefined4 unaff_ESP;
  undefined4 unaff_00000024;
  char in_SF;
  char in_OF;
  
  if (in_OF != in_SF) {
    puVar1 = (uint *)(CONCAT44(unaff_00000024,unaff_ESP) + 0x1506a42);
    *puVar1 = *puVar1 ^ (in_EAX | 0xef533a04);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// FUNCTION 14d7bf197 FUN_14d7bf197 body=9 status=ok
// SIG undefined FUN_14d7bf197(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bf197(void)

{
  undefined4 in_EAX;
  
  _DAT_f9ec0e0f09aec5e = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf1ab FUN_14d7bf1ab body=10 status=ok
// SIG undefined FUN_14d7bf1ab(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf1ab(void)

{
  longlong in_RAX;
  longlong unaff_RBP;
  unkbyte10 in_ST1;
  
  *(unkbyte10 *)(unaff_RBP + 0x16 + in_RAX * 8) = in_ST1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf1bf FUN_14d7bf1bf body=2 status=ok
// SIG undefined FUN_14d7bf1bf(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf1bf(void)

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



// FUNCTION 14d7bf1c7 FUN_14d7bf1c7 body=1 status=ok
// SIG undefined FUN_14d7bf1c7(void)

void FUN_14d7bf1c7(undefined8 param_1,undefined2 param_2)

{
  byte unaff_BL;
  int unaff_ESP;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  
  out(*unaff_RSI,param_2);
  unaff_RSI[1] = (unaff_RSI[1] - unaff_ESP) - (uint)(unaff_BL < *(byte *)(unaff_RDI + 0x4a777399));
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7bf1cb FUN_14d7bf1cb body=5 status=ok
// SIG undefined FUN_14d7bf1cb(void)

void FUN_14d7bf1cb(void)

{
  longlong *unaff_RSI;
  bool in_CF;
  
  if (in_CF) {
    *unaff_RSI = (*unaff_RSI - (longlong)&stack0x00000000) + -1;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  return;
}



// FUNCTION 14d7bf1e5 FUN_14d7bf1e5 body=6 status=ok
// SIG undefined FUN_14d7bf1e5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf1e5(void)

{
  undefined4 in_EAX;
  undefined1 *unaff_RSI;
  undefined4 *unaff_RDI;
  char in_CF;
  
  *unaff_RDI = CONCAT31((int3)((uint)in_EAX >> 8),((char)in_EAX + -0x45) - in_CF);
  *(undefined1 *)(unaff_RDI + 1) = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf1f1 FUN_14d7bf1f1 body=7 status=ok
// SIG undefined FUN_14d7bf1f1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf1f1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf1fd FUN_14d7bf1fd body=2 status=ok
// SIG undefined FUN_14d7bf1fd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf1fd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf205 FUN_14d7bf205 body=8 status=ok
// SIG undefined FUN_14d7bf205(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf205(void)

{
  undefined1 in_AL;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf216 FUN_14d7bf216 body=6 status=ok
// SIG undefined FUN_14d7bf216(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf216(byte param_1)

{
  byte bVar1;
  byte in_AL;
  int unaff_EBX;
  
  bVar1 = param_1 & 0x1f;
  if (bVar1 == 0 && param_1 < in_AL || bVar1 != 0 && (unaff_EBX >> bVar1 - 1 & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf233 FUN_14d7bf233 body=11 status=ok
// SIG undefined FUN_14d7bf233(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf233(longlong param_1)

{
  char cVar1;
  undefined4 in_EAX;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  undefined1 *unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_CF;
  bool in_ZF;
  undefined8 uStack_10;
  
  if (param_1 != 1) {
    puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
    cVar1 = '\n';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar2 = puVar2 + -1;
      *puVar2 = *unaff_RBP;
      cVar1 = cVar1 + -1;
    } while ('\0' < cVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_CF && !in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = in_EAX;
  *(undefined1 *)(unaff_RDI + 1) = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf240 FUN_14d7bf240 body=5 status=ok
// SIG undefined FUN_14d7bf240(void)

void FUN_14d7bf240(undefined8 param_1,char param_2)

{
  char *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI - param_2;
  return;
}



// FUNCTION 14d7bf28e FUN_14d7bf28e body=20 status=ok
// SIG undefined FUN_14d7bf28e(void)

void FUN_14d7bf28e(undefined8 *param_1,undefined2 param_2)

{
  undefined1 *unaff_RSI;
  
  (*(code *)*param_1)();
  out(*unaff_RSI,param_2);
  return;
}



// FUNCTION 14d7bf2af FUN_14d7bf2af body=3 status=ok
// SIG undefined FUN_14d7bf2af(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf2af(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf2b7 FUN_14d7bf2b7 body=6 status=ok
// SIG undefined FUN_14d7bf2b7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf2b7(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf2fc FUN_14d7bf2fc body=23 status=ok
// SIG undefined FUN_14d7bf2fc(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bf347) overlaps instruction at (ram,0x00014d7bf344)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7bf319) */

void FUN_14d7bf2fc(int param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  byte *in_RAX;
  byte *pbVar7;
  byte bVar8;
  byte bVar11;
  undefined2 uVar10;
  uint uVar12;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined2 *unaff_RDI;
  char in_CF;
  char in_SF;
  char in_OF;
  undefined2 in_FPUControlWord;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  char cVar9;
  
  if (in_OF != in_SF) {
    *in_RAX = *in_RAX ^ (byte)param_1;
    bVar11 = *in_RAX;
    bVar6 = ((byte)param_1 & 0x1f) % 9;
    bVar8 = *(byte *)(param_2 + -9);
    *(byte *)(param_2 + -9) = bVar8 >> bVar6 | bVar8 << 9 - bVar6;
    if ((char)bVar11 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(*unaff_RSI,(short)param_2);
    *(int *)(in_RAX + 0x2d) = param_1;
    *unaff_RDI = in_FPUControlWord;
    return;
  }
  bVar11 = (byte)((ulonglong)param_2 >> 8);
  in_RAX[param_2] = bVar11;
  *(char *)((longlong)unaff_RSI + 0x2f) = *(char *)((longlong)unaff_RSI + 0x2f) + bVar11 + in_CF;
  do {
    bVar11 = DAT_94e34dd641d149b4;
    pbVar7 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),DAT_94e34dd641d149b4);
    if (param_1 != unaff_RSI[-0x11]) {
      DAT_46cccb3fd92d4889 = DAT_94e34dd641d149b4 ^ 0x6f;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(float *)(unaff_RBP + 0x5c) = (float)in_ST0;
    puVar1 = (uint *)((longlong)unaff_RSI + 0x21);
    uVar2 = *puVar1;
    uVar12 = (uint)unaff_RBX;
    *puVar1 = *puVar1 + uVar12;
    cVar9 = (char)((ulonglong)in_RAX >> 0x18) >> 7;
    cVar5 = cVar9 - bVar11;
    bVar8 = cVar5 - CARRY4(uVar2,uVar12);
    if (bVar8 != 0 &&
        (SBORROW1(cVar9,bVar11) != SBORROW1(cVar5,CARRY4(uVar2,uVar12))) == (char)bVar8 < '\0') {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if ((char)bVar8 >= '\0') {
      uVar10 = (undefined2)CONCAT31((int3)((ulonglong)in_RAX >> 8) >> 0x17,bVar8);
      uVar3 = in(uVar10);
      *(undefined1 *)unaff_RDI = uVar3;
      uVar4 = in(uVar10);
      *(undefined4 *)((longlong)unaff_RDI + 1) = uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_RDI = (undefined2 *)&DAT_7d23a164;
    unaff_RBX = CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),(ushort)(byte)unaff_RBX);
    bVar11 = *pbVar7;
    *pbVar7 = *pbVar7 + bVar8;
    param_1 = 0;
    in_RAX = pbVar7;
    in_ST0 = in_ST1;
    in_ST1 = in_ST2;
    in_ST2 = in_ST3;
    in_ST3 = in_ST4;
    in_ST4 = in_ST5;
    in_ST5 = in_ST6;
    in_ST6 = in_ST7;
  } while (!CARRY1(bVar11,bVar8) && *pbVar7 != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf314 FUN_14d7bf314 body=104 status=ok
// SIG undefined FUN_14d7bf314(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bf32b) overlaps instruction at (ram,0x00014d7bf329)
    */

void FUN_14d7bf314(uint param_1,ulonglong param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  byte *in_RAX;
  byte *pbVar8;
  byte bVar9;
  char cVar10;
  undefined2 uVar12;
  uint uVar13;
  byte bVar14;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  char cVar11;
  
  while( true ) {
    bVar14 = (byte)((ulonglong)unaff_RBX >> 8) & (byte)param_1;
    unaff_RBX = CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),CONCAT11(bVar14,(char)unaff_RBX));
    bVar9 = (byte)param_2;
    if ((char)bVar14 < '\0') {
      pbVar8 = (byte *)(unaff_RBX + 0xd);
      bVar2 = *pbVar8;
      *pbVar8 = *pbVar8 + bVar14;
      unaff_RBP = *(longlong *)register0x00000020;
      register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + 8);
      pbVar8 = (byte *)CONCAT71((uint7)(uint3)(int3)(char)((ulonglong)in_RAX >> 8),0xb5);
      unaff_RBX = 0x4060e2f6;
      pbVar8[CONCAT62((int6)(param_2 >> 0x10),CONCAT11(1,bVar9))] = 1;
      *(char *)(unaff_RSI + 0x2f) = *(char *)(unaff_RSI + 0x2f) + '\x01' + CARRY1(bVar2,bVar14);
    }
    else {
      bVar14 = *in_RAX;
      *in_RAX = *in_RAX + bVar9;
      pbVar8 = in_RAX;
      if (CARRY1(bVar14,bVar9) || *in_RAX == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    bVar9 = DAT_94e34dd641d149b4;
    in_RAX = (byte *)CONCAT71((int7)((ulonglong)pbVar8 >> 8),DAT_94e34dd641d149b4);
    param_1 = param_1 ^ *(uint *)(unaff_RSI + -0x44);
    if (param_1 != 0) {
      *(ulonglong *)((longlong)register0x00000020 + -8) =
           (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
           (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((int)param_1 < 0) * 0x80 |
           (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(param_1 & 0xff) & 1U) == 0) * 4 |
           (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
           (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
      DAT_46cccb3fd92d4889 = DAT_94e34dd641d149b4 ^ 0x6f;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(float *)(unaff_RBP + 0x5c) = (float)in_ST0;
    puVar1 = (uint *)(unaff_RSI + 0x21);
    uVar3 = *puVar1;
    uVar13 = (uint)unaff_RBX;
    *puVar1 = *puVar1 + uVar13;
    cVar11 = (char)((ulonglong)pbVar8 >> 0x18) >> 7;
    cVar6 = cVar11 - bVar9;
    cVar10 = cVar6 - CARRY4(uVar3,uVar13);
    uVar7 = CONCAT31((int3)((ulonglong)pbVar8 >> 8) >> 0x17,cVar10);
    param_2 = (ulonglong)uVar7;
    if (cVar10 != '\0' &&
        (SBORROW1(cVar11,bVar9) != SBORROW1(cVar6,CARRY4(uVar3,uVar13))) == cVar10 < '\0') {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (cVar10 >= '\0') break;
    unaff_RDI = &DAT_7d23a164;
    param_1 = 0;
    in_ST0 = in_ST1;
    in_ST1 = in_ST2;
    in_ST2 = in_ST3;
    in_ST3 = in_ST4;
    in_ST4 = in_ST5;
    in_ST5 = in_ST6;
    in_ST6 = in_ST7;
  }
  uVar12 = (undefined2)uVar7;
  uVar4 = in(uVar12);
  *unaff_RDI = uVar4;
  uVar5 = in(uVar12);
  *(undefined4 *)(unaff_RDI + 1) = uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf362 FUN_14d7bf362 body=14 status=ok
// SIG undefined FUN_14d7bf362(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bf3a1) overlaps instruction at (ram,0x00014d7bf3a0)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bf362(longlong param_1,int *param_2,longlong param_3)

{
  byte *pbVar1;
  uint *puVar2;
  ulonglong *puVar3;
  byte bVar4;
  undefined1 uVar5;
  char cVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  undefined8 in_RAX;
  uint uVar10;
  byte bVar11;
  undefined2 uVar13;
  byte bVar15;
  ulonglong uVar14;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  undefined1 *unaff_RDI;
  bool bVar16;
  bool bVar17;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  int unaff_retaddr;
  char cVar12;
  
  bVar11 = (byte)((ulonglong)in_RAX >> 8);
  if (0x16 < bVar11) {
    param_2 = (int *)((longlong)param_2 +
                     CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(0x2b,(char)param_1)) * 8 +
                     -0x61);
    *param_2 = *param_2 + unaff_retaddr + (uint)(bVar11 < 0x16);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar7 = (longlong)*param_2 * -0x7c91d4e1;
  uVar14 = uVar7 & 0xffffffff;
  bVar16 = (longlong)(int)uVar7 != uVar7;
  pbVar9 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),0x67);
  uVar8 = SUB84(pbVar9,0);
  while( true ) {
    *(float *)(unaff_RBP + 0x5c) = (float)in_ST0;
    puVar2 = (uint *)(unaff_RSI + 0x21);
    uVar10 = *puVar2 + (uint)uVar14;
    bVar17 = CARRY4(*puVar2,(uint)uVar14) || CARRY4(uVar10,(uint)bVar16);
    *puVar2 = uVar10 + bVar16;
    cVar12 = (char)((int)uVar8 >> 0x1f);
    cVar6 = cVar12 - (char)pbVar9;
    bVar11 = cVar6 - bVar17;
    if (bVar11 != 0 &&
        (SBORROW1(cVar12,(char)pbVar9) != SBORROW1(cVar6,bVar17)) == (char)bVar11 < '\0') {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if ((char)bVar11 >= '\0') {
      bVar15 = *(byte *)(param_1 + -0x24);
      uVar13 = (undefined2)CONCAT31((int3)((int)uVar8 >> 0x1f),bVar11);
      uVar5 = in(uVar13);
      *unaff_RDI = uVar5;
      uVar8 = in(uVar13);
      *(undefined4 *)(unaff_RDI + -1) = uVar8;
      puVar3 = (ulonglong *)(param_3 * 2 + -0x50);
      bVar11 = ((byte)param_1 & 0x1f) % 9;
      bRam00000000f940615c =
           (byte)(CONCAT11(unaff_RSI < *puVar3 ||
                           unaff_RSI - *puVar3 <
                           (ulonglong)(bVar15 < (byte)((ulonglong)param_1 >> 8)),
                           bRam00000000f940615c) >> bVar11) | bRam00000000f940615c << 9 - bVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_RDI = &DAT_7d23a164;
    bVar15 = (byte)(uVar14 >> 8) & (byte)param_1;
    uVar14 = CONCAT62((int6)(uVar14 >> 0x10),CONCAT11(bVar15,(char)uVar14));
    if ((char)bVar15 < '\0') {
      pbVar1 = (byte *)(uVar14 + 0xd);
      bVar4 = *pbVar1;
      *pbVar1 = *pbVar1 + bVar15;
      unaff_RBP = *(longlong *)register0x00000020;
      register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + 8);
      pbVar9 = (byte *)CONCAT71((uint7)(uint3)(int3)(char)((ulonglong)pbVar9 >> 8),0xb5);
      uVar14 = 0x4060e2f6;
      pbVar9[CONCAT22((short)((int)uVar8 >> 0x1f),CONCAT11(1,bVar11))] = 1;
      *(char *)(unaff_RSI + 0x2f) = *(char *)(unaff_RSI + 0x2f) + '\x01' + CARRY1(bVar4,bVar15);
    }
    else {
      bVar15 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar11;
      if (CARRY1(bVar15,bVar11) || *pbVar9 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    pbVar9 = (byte *)CONCAT71((int7)((ulonglong)pbVar9 >> 8),DAT_94e34dd641d149b4);
    bVar16 = false;
    uVar10 = (uint)param_1 ^ *(uint *)(unaff_RSI - 0x44);
    uVar8 = SUB84(pbVar9,0);
    if (uVar10 != 0) break;
    param_1 = 0;
    in_ST0 = in_ST1;
    in_ST1 = in_ST2;
    in_ST2 = in_ST3;
    in_ST3 = in_ST4;
    in_ST4 = in_ST5;
    in_ST5 = in_ST6;
    in_ST6 = in_ST7;
  }
  *(ulonglong *)((longlong)register0x00000020 + -8) =
       (ulonglong)(in_NT & 1) * 0x4000 | 0x400 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((int)uVar10 < 0) * 0x80 |
       (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar10 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  DAT_46cccb3fd92d4889 = DAT_94e34dd641d149b4 ^ 0x6f;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf36a FUN_14d7bf36a body=8 status=ok
// SIG undefined FUN_14d7bf36a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf36a(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  int unaff_EBX;
  byte in_CF;
  
  piVar1 = (int *)(param_2 + -0x61 +
                  CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(0x2b,(char)param_1)) * 8);
  *piVar1 = *piVar1 + unaff_EBX + (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf376 FUN_14d7bf376 body=2 status=ok
// SIG undefined FUN_14d7bf376(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf376(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf37e FUN_14d7bf37e body=5 status=ok
// SIG undefined FUN_14d7bf37e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf37e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf383 thunk_EXT_FUN_ce7f68a4 body=5 status=ok
// SIG undefined thunk_EXT_FUN_ce7f68a4(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_ce7f68a4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf3bb FUN_14d7bf3bb body=9 status=ok
// SIG undefined FUN_14d7bf3bb(void)

void FUN_14d7bf3bb(void)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
  return;
}



// FUNCTION 14d7bf3d8 FUN_14d7bf3d8 body=3 status=ok
// SIG undefined FUN_14d7bf3d8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf3d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf3dc FUN_14d7bf3dc body=8 status=ok
// SIG undefined FUN_14d7bf3dc(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf3dc(byte param_1)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  
  pbVar1 = (byte *)(CONCAT44(unaff_0000001c,unaff_EBX) + 8);
  bVar2 = (param_1 & 0x1f) % 9;
  uVar3 = *pbVar1 | 0x100;
  *pbVar1 = (byte)(uVar3 >> bVar2) | (byte)(uVar3 << 9 - bVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf3e8 FUN_14d7bf3e8 body=4 status=ok
// SIG undefined FUN_14d7bf3e8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf3e8(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined1 in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RDI;
  
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) | in_AH;
  uVar1 = in(param_2);
  *(undefined4 *)(unaff_RDI + 1) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf3ec FUN_14d7bf3ec body=7 status=ok
// SIG undefined FUN_14d7bf3ec(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf3ec(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf3f4 FUN_14d7bf3f4 body=28 status=ok
// SIG undefined FUN_14d7bf3f4(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bf414) overlaps instruction at (ram,0x00014d7bf411)
    */

void FUN_14d7bf3f4(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 *unaff_RSI;
  char in_ZF;
  
  if (param_1 == 1 || in_ZF != '\0') {
    out(*unaff_RSI,(short)param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = (char)((ulonglong)param_2 >> 8) != '\0';
  bVar2 = (char)param_2 != '\0';
  if (bVar1 || bVar2) {
    if (!bVar1 && !bVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf404 FUN_14d7bf404 body=2 status=ok
// SIG undefined FUN_14d7bf404(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bf414) overlaps instruction at (ram,0x00014d7bf411)
    */

void FUN_14d7bf404(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf410 FUN_14d7bf410 body=12 status=ok
// SIG undefined FUN_14d7bf410(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf410(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf41c FUN_14d7bf41c body=8 status=ok
// SIG undefined FUN_14d7bf41c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf41c(undefined8 param_1,undefined2 *param_2)

{
  uint in_EAX;
  undefined1 *unaff_RDI;
  undefined2 in_FS;
  
  *unaff_RDI = *(undefined1 *)(ulonglong)in_EAX;
  *param_2 = in_FS;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf424 FUN_14d7bf424 body=5 status=ok
// SIG undefined FUN_14d7bf424(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf424(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf42c FUN_14d7bf42c body=6 status=ok
// SIG undefined FUN_14d7bf42c(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bf3d1) overlaps instruction at (ram,0x00014d7bf3cd)
    */

void FUN_14d7bf42c(longlong param_1,undefined2 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  undefined8 in_RAX;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  longlong in_R10;
  ulonglong uVar8;
  longlong unaff_R12;
  undefined2 in_FPUStatusWord;
  char *pcVar7;
  
  bVar6 = (byte)in_RAX;
  pcVar7 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar6 + 0x10);
  if (-0x11 < (char)bVar6) {
    *pcVar7 = *pcVar7 + bVar6 + 0x10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  lVar4 = unaff_R12 + *(longlong *)(in_R10 + -0x34fd305c);
  uVar8 = lVar4 + (ulonglong)(bVar6 < 0xf0);
  if ((SCARRY8(unaff_R12,*(longlong *)(in_R10 + -0x34fd305c)) !=
      SCARRY8(lVar4,(ulonglong)(bVar6 < 0xf0))) == (longlong)uVar8 < 0) {
    if ((POPCOUNT(uVar8 & 0xff) & 1U) == 0) {
      unaff_RDI = (undefined1 *)((ulonglong)pcVar7 & 0xffffffff);
    }
    bVar6 = *(byte *)(param_1 + -0x24);
    uVar2 = in(param_2);
    *unaff_RDI = uVar2;
    uVar3 = in(param_2);
    *(undefined4 *)(unaff_RDI + 1) = uVar3;
    plVar1 = (longlong *)(param_3 * 2 + -0x50);
    bVar5 = ((byte)param_1 & 0x1f) % 9;
    bRam00000000f940615c =
         (byte)(CONCAT11(unaff_RSI < (undefined1 *)*plVar1 ||
                         (ulonglong)((longlong)unaff_RSI - *plVar1) <
                         (ulonglong)(bVar6 < (byte)((ulonglong)param_1 >> 8)),bRam00000000f940615c)
               >> bVar5) | bRam00000000f940615c << 9 - bVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(unaff_RBP + -0x5decb07d) = in_FPUStatusWord;
  *unaff_RDI = *unaff_RSI;
  return;
}



// FUNCTION 14d7bf435 FUN_14d7bf435 body=4 status=ok
// SIG undefined FUN_14d7bf435(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf435(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf43d FUN_14d7bf43d body=11 status=ok
// SIG undefined FUN_14d7bf43d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7bf448) */

void FUN_14d7bf43d(longlong param_1,int param_2)

{
  ushort uVar1;
  undefined4 *unaff_RSI;
  
  uVar1 = (ushort)(param_2 << 3) | (ushort)((uint)param_2 >> 0x1d);
  in(uVar1);
  out(*unaff_RSI,uVar1);
  if (param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf462 FUN_14d7bf462 body=11 status=ok
// SIG undefined FUN_14d7bf462(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf462(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf476 FUN_14d7bf476 body=1 status=ok
// SIG undefined FUN_14d7bf476(void)

void FUN_14d7bf476(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7bf49f FUN_14d7bf49f body=41 status=ok
// SIG undefined FUN_14d7bf49f(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bf49f(byte param_1)

{
  undefined1 uVar1;
  undefined8 in_RAX;
  byte *pbVar2;
  
  uVar1 = in(0x9c);
  pbVar2 = (byte *)(ulonglong)(CONCAT31((int3)((ulonglong)in_RAX >> 8),uVar1) ^ 0x54230000);
  *pbVar2 = *pbVar2 ^ param_1 & (byte)_DAT_ca4ad531;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf4e3 FUN_14d7bf4e3 body=18 status=ok
// SIG undefined FUN_14d7bf4e3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf4e3(void)

{
  int iVar1;
  undefined8 in_RAX;
  uint *puVar2;
  
  puVar2 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                            ((byte)in_RAX + 0x89) - ((byte)in_RAX < 0xa2));
  iVar1 = 0x1f;
  if (*puVar2 != 0) {
    for (; *puVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf4f7 FUN_14d7bf4f7 body=3 status=ok
// SIG undefined FUN_14d7bf4f7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf4f7(undefined8 param_1,longlong param_2)

{
  char unaff_BH;
  char in_CF;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (!in_ZF && in_OF == in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(param_2 + -0x56) = (*(char *)(param_2 + -0x56) - unaff_BH) - in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf519 FUN_14d7bf519 body=5 status=ok
// SIG undefined FUN_14d7bf519(void)

void FUN_14d7bf519(undefined8 param_1,undefined2 param_2)

{
  code *pcVar1;
  undefined1 in_AL;
  undefined1 *unaff_RDI;
  undefined8 unaff_retaddr;
  
  *unaff_RDI = in_AL;
  out(0x1e,in_AL);
  *(undefined8 *)(unaff_RDI + -0x5594ff7d) = unaff_retaddr;
  in(param_2);
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7bf522 FUN_14d7bf522 body=13 status=ok
// SIG undefined FUN_14d7bf522(void)

void FUN_14d7bf522(char param_1,longlong param_2)

{
  longlong lVar1;
  char in_AL;
  
  lVar1 = (longlong)*(int *)(param_2 + -0xe619914) * -0x28;
  FUN_14d7bf54e(param_1 + in_AL + ((int)lVar1 != lVar1));
  return;
}



// FUNCTION 14d7bf532 FUN_14d7bf532 body=7 status=ok
// SIG undefined FUN_14d7bf532(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf532(void)

{
  char in_AL;
  longlong unaff_RBP;
  
  *(char *)(unaff_RBP + -0x34) = *(char *)(unaff_RBP + -0x34) - in_AL;
  cRamdcb3e5a8e8000c58 = in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf53a FUN_14d7bf53a body=8 status=ok
// SIG undefined FUN_14d7bf53a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf53a(longlong param_1,undefined2 param_2)

{
  char cVar1;
  code *pcVar2;
  char in_AL;
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  longlong unaff_RDI;
  char in_CF;
  bool in_PF;
  
  if (!in_PF) {
    *(char *)(unaff_RBP + -0x34) = *(char *)(unaff_RBP + -0x34) - in_AL;
    cRamdcb3e5a8e8000c58 = in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 == 1) {
    cVar1 = *(char *)(unaff_RDI + -0x4f + unaff_RBP * 8);
    out(*unaff_RSI,param_2);
    *(undefined4 *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x13) = unaff_EBX;
    unaff_RSI[0x29] = unaff_RSI[0x29] + cVar1 + in_CF;
    *(undefined1 *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x53) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



// FUNCTION 14d7bf547 FUN_14d7bf547 body=7 status=ok
// SIG undefined FUN_14d7bf547(void)

void FUN_14d7bf547(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined1 uVar2;
  ulonglong in_RAX;
  longlong unaff_RDI;
  
  uVar1 = (ulonglong)param_2 << 0x20 | in_RAX & 0xffffffff;
  uVar2 = in(0x8d);
  out((short)((longlong)uVar1 % (longlong)*(int *)(unaff_RDI + -0x39)),
      (int)CONCAT71((int7)((ulonglong)((longlong)uVar1 / (longlong)*(int *)(unaff_RDI + -0x39)) >> 8
                          ),uVar2));
  FUN_14d7bf522();
  return;
}



// FUNCTION 14d7bf54e FUN_14d7bf54e body=10 status=ok
// SIG undefined FUN_14d7bf54e(void)

void FUN_14d7bf54e(undefined8 param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  
  out(param_2,in_EAX);
  FUN_14d7bf522();
  return;
}



// FUNCTION 14d7bf55b FUN_14d7bf55b body=27 status=ok
// SIG undefined FUN_14d7bf55b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf55b(undefined8 param_1,undefined2 param_2)

{
  byte *pbVar1;
  char cVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  longlong unaff_RDI;
  char in_CF;
  
  cVar2 = *(char *)(unaff_RDI + -0x4f + unaff_RBP * 8);
  out(*unaff_RSI,param_2);
  *(undefined4 *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x13) = unaff_EBX;
  unaff_RSI[0x29] = unaff_RSI[0x29] + (char)param_1 + cVar2 + in_CF;
  pbVar1 = (byte *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x53);
  *pbVar1 = *pbVar1 & (byte)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf57c FUN_14d7bf57c body=24 status=ok
// SIG undefined FUN_14d7bf57c(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bf5e4) overlaps instruction at (ram,0x00014d7bf5e2)
    */

void FUN_14d7bf57c(byte *param_1,longlong param_2)

{
  uint *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong in_RAX;
  byte bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  byte bVar11;
  longlong unaff_RBX;
  undefined1 *puVar12;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined4 *unaff_RDI;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  float10 in_ST0;
  unkbyte10 in_ST1;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 in_ST5;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  int unaff_retaddr;
  undefined1 auStackX_8 [32];
  
  uVar10 = (undefined1)((ulonglong)param_2 >> 8);
  uVar9 = (undefined1)param_2;
  bVar5 = (byte)param_1;
  bVar11 = bVar5 * '\x02';
  bVar15 = CARRY1(bVar11,bVar5 < *param_1);
  bVar13 = CARRY1(bVar5,bVar5) || bVar15;
  cVar6 = bVar11 + (bVar5 < *param_1);
  bVar14 = cVar6 == '\0';
  if (CARRY1(bVar5,bVar5) || bVar15) {
    puVar12 = &stack0xfffffffffffffff8;
    lVar8 = CONCAT71((int7)((ulonglong)param_1 >> 8),cVar6) + -1;
    unaff_RBP = unaff_RBX;
    if (lVar8 == 0 || !bVar14) {
      uVar7 = (uint)lVar8 | (uint)unaff_RBX;
      out(*unaff_RSI,(short)param_2);
      *(uint *)(unaff_RBX + 0x13) = (uint)unaff_RBX;
      unaff_RSI[0x29] = unaff_RSI[0x29] + (char)uVar7;
      *(byte *)(unaff_RBX + 0x53) = *(byte *)(unaff_RBX + 0x53) & (byte)(uVar7 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    puVar12 = auStackX_8;
    uVar3 = unaff_retaddr + 0x9c0ba5b9;
    puVar1 = (uint *)((ulonglong)uVar3 + 0x793bb9b2);
    uVar7 = *puVar1;
    *puVar1 = *puVar1 << 1 | (uint)((int)uVar7 < 0);
    uVar7 = (uint)((int)uVar7 < 0);
    uVar4 = unaff_retaddr + 0xce14b804;
    bVar13 = 0xcdf6edb4 < uVar3 || CARRY4(uVar4,uVar7);
    bVar16 = SCARRY4(uVar3,0x3209124b) != SCARRY4(uVar4,uVar7);
    uVar4 = uVar4 + uVar7;
    in_RAX = (ulonglong)uVar4;
    bVar15 = (int)uVar4 < 0;
    bVar14 = uVar4 == 0;
    if (bVar14 || bVar16 != bVar15) {
      puVar2 = (undefined2 *)((longlong)unaff_RDI + param_2 + -0x60);
      *puVar2 = in_FPUControlWord;
      puVar2[2] = in_FPUStatusWord;
      puVar2[4] = in_FPUTagWord;
      *(undefined8 *)(puVar2 + 10) = in_FPUDataPointer;
      *(undefined8 *)(puVar2 + 6) = in_FPUInstructionPointer;
      puVar2[9] = in_FPULastInstructionOpcode;
      *(float10 *)(puVar2 + 0xe) = in_ST0;
      *(unkbyte10 *)(puVar2 + 0x13) = in_ST1;
      *(unkbyte10 *)(puVar2 + 0x18) = in_ST2;
      *(unkbyte10 *)(puVar2 + 0x1d) = in_ST3;
      *(unkbyte10 *)(puVar2 + 0x22) = in_ST4;
      *(unkbyte10 *)(puVar2 + 0x27) = in_ST5;
      *(unkbyte10 *)(puVar2 + 0x2c) = in_ST6;
      *(unkbyte10 *)(puVar2 + 0x31) = in_ST7;
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    while (bVar14 || bVar16 != bVar15) {
      uVar9 = 0xb9;
      bVar13 = false;
      bVar16 = false;
      bVar11 = (byte)((ulonglong)unaff_RBP >> 8) ^ unaff_RSI[0xe];
      unaff_RBP = CONCAT62((int6)((ulonglong)unaff_RBP >> 0x10),CONCAT11(bVar11,(char)unaff_RBP));
      bVar15 = (char)bVar11 < '\0';
      bVar14 = bVar11 == 0;
    }
    out(CONCAT11(uVar10,uVar9),uVar4);
    *(float *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(uVar10,uVar9)) +
              (longlong)unaff_RSI * 4) = (float)in_ST0;
  }
  *(longlong *)(puVar12 + -8) = unaff_RBP;
  if (bVar13 || bVar14) {
    *(undefined8 *)(puVar12 + -0x10) = 0x14d7bf5ff;
    func_0x0001c259ec26();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(ulonglong *)(puVar12 + -0x10) = in_RAX;
  uVar7 = (uint)unaff_RSI;
  *unaff_RDI = *(undefined4 *)
                (ulonglong)
                (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf595 FUN_14d7bf595 body=63 status=ok
// SIG undefined FUN_14d7bf595(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bf5e9) overlaps instruction at (ram,0x00014d7bf5e8)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7bf55b) */

void FUN_14d7bf595(longlong param_1,undefined4 *param_2)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  undefined2 uVar6;
  byte bVar7;
  undefined1 uVar8;
  int iVar9;
  undefined8 in_RAX;
  undefined7 uVar11;
  undefined1 uVar12;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  uint uVar13;
  undefined1 *unaff_RSI;
  undefined4 *unaff_RDI;
  bool bVar14;
  char in_ZF;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  float10 in_ST0;
  unkbyte10 in_ST1;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 in_ST5;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  longlong unaff_retaddr;
  undefined8 uStack_8;
  uint uVar10;
  
  uVar12 = (undefined1)((ulonglong)param_2 >> 8);
  uVar8 = SUB81(param_2,0);
  param_1 = param_1 + -1;
  uVar6 = SUB82(param_2,0);
  if (param_1 != 0 && in_ZF == '\0') {
    out(*unaff_RSI,uVar6);
    *(uint *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) + 0x13)
         = CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
    unaff_RSI[0x29] = unaff_RSI[0x29] + (char)param_1;
    pbVar1 = (byte *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)))
                     + 0x53);
    *pbVar1 = *pbVar1 & (byte)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar7 = (byte)in_RAX;
  uVar11 = (undefined7)((ulonglong)in_RAX >> 8);
  if (SCARRY1(bVar7,-0x61)) {
    if (unaff_retaddr == 0) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar8 = in(uVar6);
    uVar3 = in(uVar6);
    *(undefined4 *)(CONCAT71(uVar11,uVar8) & 0xffffffff) = uVar3;
    *param_2 = (int)&uStack_8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar13 = (uint)(0x60 < bVar7);
  uVar10 = (uint)CONCAT71(uVar11,bVar7 + 0x9f);
  uVar4 = uVar10 + 0x3209124b;
  bVar14 = 0xcdf6edb4 < uVar10 || CARRY4(uVar4,uVar13);
  bVar17 = SCARRY4(uVar10,0x3209124b) != SCARRY4(uVar4,uVar13);
  iVar9 = uVar4 + uVar13;
  bVar16 = iVar9 < 0;
  bVar15 = iVar9 == 0;
  if (bVar15 || bVar17 != bVar16) {
    puVar2 = (undefined2 *)((longlong)unaff_RDI + (longlong)(param_2 + -0x18));
    *puVar2 = in_FPUControlWord;
    puVar2[2] = in_FPUStatusWord;
    puVar2[4] = in_FPUTagWord;
    *(undefined8 *)(puVar2 + 10) = in_FPUDataPointer;
    *(undefined8 *)(puVar2 + 6) = in_FPUInstructionPointer;
    puVar2[9] = in_FPULastInstructionOpcode;
    *(float10 *)(puVar2 + 0xe) = in_ST0;
    *(unkbyte10 *)(puVar2 + 0x13) = in_ST1;
    *(unkbyte10 *)(puVar2 + 0x18) = in_ST2;
    *(unkbyte10 *)(puVar2 + 0x1d) = in_ST3;
    *(unkbyte10 *)(puVar2 + 0x22) = in_ST4;
    *(unkbyte10 *)(puVar2 + 0x27) = in_ST5;
    *(unkbyte10 *)(puVar2 + 0x2c) = in_ST6;
    *(unkbyte10 *)(puVar2 + 0x31) = in_ST7;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  while (bVar15 || bVar17 != bVar16) {
    uVar8 = 0xb9;
    bVar14 = false;
    bVar17 = false;
    unaff_BH = unaff_BH ^ unaff_RSI[0xe];
    bVar16 = (char)unaff_BH < '\0';
    bVar15 = unaff_BH == 0;
  }
  out(CONCAT11(uVar12,uVar8),iVar9);
  *(float *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(uVar12,uVar8)) +
            (longlong)unaff_RSI * 4) = (float)in_ST0;
  uStack_8 = CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  if (!bVar14 && !bVar15) {
    uVar13 = (uint)unaff_RSI;
    *unaff_RDI = *(undefined4 *)
                  (ulonglong)
                  (uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                  uVar13 << 0x18);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x0001c259ec26();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf5a5 FUN_14d7bf5a5 body=4 status=ok
// SIG undefined FUN_14d7bf5a5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf5a5(void)

{
  undefined4 *in_RAX;
  undefined4 unaff_ESP;
  
  *in_RAX = unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf5c6 FUN_14d7bf5c6 body=6 status=ok
// SIG undefined FUN_14d7bf5c6(void)

/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_14d7bf5c6(void)

{
  bool in_PF;
  bool in_OF;
  undefined8 unaff_retaddr;
  
  if (!in_PF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_OF) {
    return unaff_retaddr;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf5ce FUN_14d7bf5ce body=1 status=ok
// SIG undefined FUN_14d7bf5ce(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf5ce(undefined8 param_1,undefined4 *param_2)

{
  undefined1 *unaff_RSI;
  
  out(*unaff_RSI,(short)param_2);
  *param_2 = 0x6e3c0f69;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf606 FUN_14d7bf606 body=1 status=ok
// SIG undefined FUN_14d7bf606(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf606(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf60a FUN_14d7bf60a body=16 status=ok
// SIG undefined FUN_14d7bf60a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf60a(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  int unaff_EBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  bool in_PF;
  
  if (in_PF) {
    unaff_RDI[param_4 * 8] = unaff_RDI[param_4 * 8] | (byte)unaff_RDI;
    *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_2 - unaff_EBP < 0) {
    uVar1 = in((short)param_2);
    *(undefined4 *)(unaff_RDI + -4) = uVar1;
    return;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7bf622 thunk_FUN_14d7bf606 body=2 status=ok
// SIG undefined thunk_FUN_14d7bf606(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_FUN_14d7bf606(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf626 FUN_14d7bf626 body=5 status=ok
// SIG undefined FUN_14d7bf626(void)

void FUN_14d7bf626(void)

{
  return;
}



// FUNCTION 14d7bf62f FUN_14d7bf62f body=5 status=ok
// SIG undefined FUN_14d7bf62f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf62f(undefined8 param_1,int *param_2,char *param_3)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = (longlong)*param_2 * -0x5a;
  cVar2 = (char)lVar1;
  out((short)param_2,cVar2);
  if (SBORROW1(cVar2,*param_3) != SBORROW1(cVar2 - *param_3,(int)lVar1 != lVar1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf638 FUN_14d7bf638 body=12 status=ok
// SIG undefined FUN_14d7bf638(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf638(void)

{
  bool in_OF;
  
  if (in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf644 FUN_14d7bf644 body=6 status=ok
// SIG undefined FUN_14d7bf644(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf644(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf64d FUN_14d7bf64d body=3 status=ok
// SIG undefined FUN_14d7bf64d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf64d(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  longlong unaff_RBP;
  undefined1 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  *(char *)(unaff_RBP + -0x33b15049) = *(char *)(unaff_RBP + -0x33b15049) >> 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf662 FUN_14d7bf662 body=11 status=ok
// SIG undefined FUN_14d7bf662(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bf680) overlaps instruction at (ram,0x00014d7bf67f)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7bf680) */

void FUN_14d7bf662(longlong param_1,undefined8 param_2)

{
  uint in_EAX;
  uint uVar1;
  byte bVar2;
  undefined2 uVar3;
  longlong unaff_RBX;
  ulonglong *puVar5;
  longlong unaff_RBP;
  undefined4 *puVar6;
  undefined8 *unaff_RSI;
  undefined1 *unaff_RDI;
  undefined2 in_CS;
  byte bVar8;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 in_MM7;
  undefined8 uVar4;
  char *pcVar7;
  
  bVar2 = (byte)param_1;
  puVar5 = (ulonglong *)(ulonglong)in_EAX;
  uVar4 = *puVar5;
  *(uint *)(unaff_RBP + -0x34) = *(uint *)(unaff_RBP + -0x34) & 0x36;
  bVar8 = (byte)uVar4 < 0x1c;
  if (-1 < (char)((byte)uVar4 - 0x1c)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar4 = CONCAT71((int7)((ulonglong)param_2 >> 8),0x46);
  uVar3 = (undefined2)uVar4;
  *(undefined2 *)((longlong)puVar5 + 4) = in_CS;
  *(undefined4 *)puVar5 = 0x4d7bf672;
  (*(code *)(param_1 + 0x55))(bVar2,uVar4);
  uVar1 = in(0xf3);
  paddusb(in_MM7,*unaff_RSI);
  bVar2 = (bVar2 >> 1 | (uVar1 < 0x8f8ecf7e || uVar1 + 0x70713082 < (uint)bVar8) << 7) ^
          *(byte *)((longlong)puVar5 + unaff_RBX * 2 + 0x3d);
  *unaff_RDI = *(undefined1 *)unaff_RSI;
  *puVar5 = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
            (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((char)bVar2 < '\0') * 0x80 |
            (ulonglong)(bVar2 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
            (ulonglong)((POPCOUNT(bVar2) & 1U) == 0) * 4 | (ulonglong)(in_ID & 1) * 0x200000 |
            (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
            (ulonglong)(in_AC & 1) * 0x40000;
  puVar6 = (undefined4 *)((longlong)unaff_RSI + 1);
  pcVar7 = (char *)CONCAT44((int)((ulonglong)((longlong)unaff_RSI + 1) >> 0x20),puVar6 + 1);
  out(*puVar6,uVar3);
  *pcVar7 = *pcVar7 + '\x01';
  *(undefined1 *)
   (((ulonglong)(uint)(int)(short)((short)(uVar1 + 0x70713082) - (ushort)bVar8) - 0x727ecf42) +
   unaff_RBX) = 0x80;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf66e FUN_14d7bf66e body=17 status=ok
// SIG undefined FUN_14d7bf66e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bf680) overlaps instruction at (ram,0x00014d7bf67f)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7bf680) */

void FUN_14d7bf66e(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong unaff_RBX;
  undefined4 *puVar2;
  undefined8 *unaff_RSI;
  undefined1 *unaff_RDI;
  byte in_CF;
  undefined8 in_MM7;
  char *pcVar3;
  
  (*(code *)(param_1 + 0x55))((char)param_1,param_2);
  uVar1 = in(0xf3);
  paddusb(in_MM7,*unaff_RSI);
  *unaff_RDI = *(undefined1 *)unaff_RSI;
  puVar2 = (undefined4 *)((longlong)unaff_RSI + 1);
  pcVar3 = (char *)CONCAT44((int)((ulonglong)((longlong)unaff_RSI + 1) >> 0x20),puVar2 + 1);
  out(*puVar2,(short)param_2);
  *pcVar3 = *pcVar3 + '\x01';
  *(undefined1 *)
   (((ulonglong)(uint)(int)(short)(((short)uVar1 + 0x3082) - (ushort)in_CF) - 0x727ecf42) +
   unaff_RBX) = 0x80;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf6b2 FUN_14d7bf6b2 body=14 status=ok
// SIG undefined FUN_14d7bf6b2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf6b2(void)

{
  uint uVar1;
  uint unaff_EBP;
  
  uVar1 = in(0xeb);
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 ^ unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf6c2 FUN_14d7bf6c2 body=17 status=ok
// SIG undefined FUN_14d7bf6c2(void)

void FUN_14d7bf6c2(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  uint in_EAX;
  float10 in_ST0;
  
  *(double *)(param_2 + 0x70) = (double)in_ST0;
  piVar1 = (int *)((ulonglong)(in_EAX & 0x9bf90015) + 0x4e);
  *piVar1 = *piVar1 << 0x1e;
  FUN_14d7bf6f5();
  return;
}



// FUNCTION 14d7bf6dc FUN_14d7bf6dc body=4 status=ok
// SIG undefined FUN_14d7bf6dc(void)

void FUN_14d7bf6dc(void)

{
  char unaff_BH;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  *(int *)(unaff_RBP + 0x3e) = *(int *)(unaff_RBP + 0x3e) + 0x52;
  *(byte *)(unaff_RSI + 0x722d3c1e) = *(byte *)(unaff_RSI + 0x722d3c1e) >> 1;
  *(char *)(unaff_RSI + -0x6eb873c3) = *(char *)(unaff_RSI + -0x6eb873c3) + unaff_BH;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7bf6e0 FUN_14d7bf6e0 body=12 status=ok
// SIG undefined FUN_14d7bf6e0(void)

void FUN_14d7bf6e0(void)

{
  char unaff_BH;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  *(int *)(unaff_RBP + 0x3e) = *(int *)(unaff_RBP + 0x3e) + 0x52;
  *(byte *)(unaff_RSI + 0x722d3c1e) = *(byte *)(unaff_RSI + 0x722d3c1e) >> 1;
  *(char *)(unaff_RSI + -0x6eb873c3) = *(char *)(unaff_RSI + -0x6eb873c3) + unaff_BH;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7bf6ed FUN_14d7bf6ed body=5 status=ok
// SIG undefined FUN_14d7bf6ed(void)

void FUN_14d7bf6ed(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7bf6f5 FUN_14d7bf6f5 body=31 status=ok
// SIG undefined FUN_14d7bf6f5(void)

ulonglong FUN_14d7bf6f5(void)

{
  int iVar1;
  ulonglong in_RAX;
  int unaff_EBX;
  longlong unaff_RDI;
  byte in_CF;
  bool in_OF;
  
  if (in_OF) {
    *(int *)(unaff_RDI + -0x4b) = (*(int *)(unaff_RDI + -0x4b) - unaff_EBX) - (uint)in_CF;
    return in_RAX;
  }
  iVar1 = (int)in_RAX + -0x3c7e6cb4 + (uint)in_CF;
  return (ulonglong)CONCAT31((int3)((uint)iVar1 >> 8),(char)iVar1 + -0x59);
}



// FUNCTION 14d7bf70a FUN_14d7bf70a body=3 status=ok
// SIG undefined FUN_14d7bf70a(void)

undefined4 FUN_14d7bf70a(void)

{
  int iVar1;
  undefined8 in_RAX;
  
  iVar1 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),uRamfad81e2655ce3692) + -0x3c7e6cb4;
  return CONCAT31((int3)((uint)iVar1 >> 8),(char)iVar1 + -0x59);
}



// FUNCTION 14d7bf727 FUN_14d7bf727 body=6 status=ok
// SIG undefined FUN_14d7bf727(void)

byte FUN_14d7bf727(void)

{
  byte in_AL;
  
  return in_AL ^ 0xab;
}



// FUNCTION 14d7bf72f thunk_EXT_FUN_1b62f6c04 body=5 status=ok
// SIG undefined thunk_EXT_FUN_1b62f6c04(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_1b62f6c04(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf737 FUN_14d7bf737 body=2 status=ok
// SIG undefined FUN_14d7bf737(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf737(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf73f FUN_14d7bf73f body=3 status=ok
// SIG undefined FUN_14d7bf73f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf73f(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf743 FUN_14d7bf743 body=15 status=ok
// SIG undefined FUN_14d7bf743(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf743(void)

{
  undefined1 in_AL;
  longlong unaff_RBX;
  
  DAT_5a4483518a0f4ec = in_AL;
  *(char *)(unaff_RBX + 0x47) = *(char *)(unaff_RBX + 0x47) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf753 FUN_14d7bf753 body=6 status=ok
// SIG undefined FUN_14d7bf753(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf753(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf75b FUN_14d7bf75b body=1 status=ok
// SIG undefined FUN_14d7bf75b(void)

void FUN_14d7bf75b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7bf75f FUN_14d7bf75f body=1 status=ok
// SIG undefined FUN_14d7bf75f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf75f(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined1 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf764 FUN_14d7bf764 body=1 status=ok
// SIG undefined FUN_14d7bf764(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf764(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf775 FUN_14d7bf775 body=4 status=ok
// SIG undefined FUN_14d7bf775(void)

void FUN_14d7bf775(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014d7bf776. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0xff00000000))();
  return;
}



// FUNCTION 14d7bf77d FUN_14d7bf77d body=6 status=ok
// SIG undefined FUN_14d7bf77d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf77d(undefined8 param_1,undefined2 param_2)

{
  int in_EAX;
  undefined1 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
  if (in_EAX < -0x7bd4e2d9) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf792 FUN_14d7bf792 body=3 status=ok
// SIG undefined FUN_14d7bf792(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf792(char param_1)

{
  longlong unaff_RSI;
  char in_CF;
  
  *(char *)(unaff_RSI + -0x75) = (*(char *)(unaff_RSI + -0x75) - param_1) - in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf796 FUN_14d7bf796 body=3 status=ok
// SIG undefined FUN_14d7bf796(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7bf7b8) */
/* WARNING: Removing unreachable block (ram,0x00014d7bf76a) */
/* WARNING: Removing unreachable block (ram,0x00014d7bf76b) */
/* WARNING: Removing unreachable block (ram,0x00014d7bf76d) */

void FUN_14d7bf796(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  code *pcVar2;
  uint in_EAX;
  undefined2 uVar3;
  undefined6 uVar4;
  int *unaff_RBX;
  longlong unaff_RSI;
  
  uVar4 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar3 = (undefined2)param_2;
  out(uVar3,in_EAX & 0xc5f6f700);
  if (param_1 != 1 && (in_EAX & 0xc5f6f700) == 0) {
    *unaff_RBX = *unaff_RBX - (int)&stack0x00000000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar2 = (code *)swi(0xad);
  (*pcVar2)();
  puVar1 = (uint *)(unaff_RSI + -0x4e69c2bb + CONCAT62(uVar4,uVar3));
  *puVar1 = *puVar1 | (uint)unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf79f FUN_14d7bf79f body=19 status=ok
// SIG undefined FUN_14d7bf79f(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7bf7b8) */

void FUN_14d7bf79f(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  code *pcVar2;
  undefined1 in_AL;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  undefined2 uVar3;
  undefined6 uVar4;
  int *unaff_RBX;
  uint unaff_ESI;
  uint uVar5;
  undefined1 auStackX_8 [32];
  
  uVar4 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar3 = (undefined2)param_2;
  uVar5 = unaff_ESI &
          *(uint *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + -0x39);
  out(uVar3,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  if (param_1 == 1 || uVar5 != 0) {
    pcVar2 = (code *)swi(0xad);
    (*pcVar2)();
    puVar1 = (uint *)(((ulonglong)uVar5 - 0x4e69c2bb) + CONCAT62(uVar4,uVar3));
    *puVar1 = *puVar1 | uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RBX = *unaff_RBX - (int)auStackX_8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf7af FUN_14d7bf7af body=2 status=ok
// SIG undefined FUN_14d7bf7af(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf7af(byte param_1)

{
  ulonglong uVar1;
  undefined1 in_AL;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte unaff_BL;
  char cVar2;
  byte unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  ulonglong unaff_RBP;
  bool bVar3;
  
  uVar1 = (ulonglong)(CONCAT22(in_register_00000002,CONCAT11(0x16,in_AL)) < 0x73fab196) << 0x20 |
          unaff_RBP & 0xffffffff;
  uVar1 = uVar1 << (param_1 & 0x1f) | uVar1 >> 0x21 - (param_1 & 0x1f);
  bVar3 = (uVar1 & 0x100000000) != 0;
  cVar2 = (unaff_BL - unaff_BH) - bVar3;
  *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,cVar2))) =
       (*(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,cVar2))) + -0x55)
       - (unaff_BL < unaff_BH || (byte)(unaff_BL - unaff_BH) < bVar3);
  LOCK();
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(0x16,in_AL))) =
       CONCAT22(in_register_00000002,CONCAT11(0x16,in_AL));
  UNLOCK();
  from_bcd(*(unkbyte10 *)((uVar1 & 0xffffffff) + 0x73));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf7b3 FUN_14d7bf7b3 body=7 status=ok
// SIG undefined FUN_14d7bf7b3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf7b3(void)

{
  bool in_CF;
  
  if (in_CF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf7bb FUN_14d7bf7bb body=31 status=ok
// SIG undefined FUN_14d7bf7bb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf7bb(void)

{
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  char in_CF;
  
  *(char *)CONCAT44(unaff_0000001c,unaff_EBX) =
       (*(char *)CONCAT44(unaff_0000001c,unaff_EBX) + -0x55) - in_CF;
  LOCK();
  *(undefined4 *)CONCAT44(in_register_00000004,in_EAX) = in_EAX;
  UNLOCK();
  from_bcd(*(unkbyte10 *)(unaff_RBP + 0x73));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf7e4 FUN_14d7bf7e4 body=4 status=ok
// SIG undefined FUN_14d7bf7e4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf7e4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf7f9 FUN_14d7bf7f9 body=8 status=ok
// SIG undefined FUN_14d7bf7f9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf7f9(undefined8 param_1,int *param_2)

{
  char in_AL;
  int *unaff_RBX;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  bool in_CF;
  
  if (in_CF) {
    *param_2 = *param_2 + -0x37f6c000;
    out(0x23,in_AL + 'g');
    DAT_b34cd7d08df62b4f = in_AL;
    *unaff_RBX = *unaff_RBX + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_RSI;
  *(int *)((longlong)unaff_RBX + 0x61) = *(int *)((longlong)unaff_RBX + 0x61) + -0x58;
  out(unaff_RSI[1],(short)param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf7fe FUN_14d7bf7fe body=41 status=ok
// SIG undefined FUN_14d7bf7fe(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf7fe(void)

{
  char in_AL;
  int *unaff_RBX;
  
  out(0x23,in_AL + 'g');
  DAT_b34cd7d08df62b4f = in_AL;
  *unaff_RBX = *unaff_RBX + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf84b FUN_14d7bf84b body=4 status=ok
// SIG undefined FUN_14d7bf84b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bf84b(longlong param_1)

{
  char *pcVar1;
  undefined1 in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  byte unaff_BH;
  int unaff_EBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x26805f7d);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  if (param_1 == 1 || *pcVar1 != '\0') {
    uRamc8e486b1124a178f = in_AL;
    *unaff_RDI = in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (SCARRY1(in_AH,unaff_BH) == (char)(in_AH + unaff_BH) < '\0') {
    _DAT_1a3e18f72 = _DAT_1a3e18f72 + unaff_EBP + (uint)CARRY1(in_AH,unaff_BH);
  }
  *unaff_RDI = *unaff_RSI;
  return;
}



// FUNCTION 14d7bf850 FUN_14d7bf850 body=11 status=ok
// SIG undefined FUN_14d7bf850(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf850(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf864 FUN_14d7bf864 body=4 status=ok
// SIG undefined FUN_14d7bf864(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf864(void)

{
  undefined1 in_AL;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf879 FUN_14d7bf879 body=11 status=ok
// SIG undefined FUN_14d7bf879(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf879(undefined8 param_1,undefined2 param_2)

{
  undefined4 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf89f FUN_14d7bf89f body=3 status=ok
// SIG undefined FUN_14d7bf89f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bf89f(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined4 in_EAX;
  byte unaff_BH;
  undefined8 *unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  byte in_CF;
  
  out((short)param_2,in_EAX);
  uVar1 = *param_2;
  uVar2 = *param_2 + (uint)unaff_RDI;
  *param_2 = uVar2 + in_CF;
  *(uint *)(unaff_RSI + -0x2d) =
       *(uint *)(unaff_RSI + -0x2d) << 1 |
       (uint)(CARRY4(uVar1,(uint)unaff_RDI) || CARRY4(uVar2,(uint)in_CF));
  bVar3 = (byte)((uint)in_EAX >> 8);
  if (SCARRY1(bVar3,unaff_BH) == (char)(bVar3 + unaff_BH) < '\0') {
    _DAT_1a3e18f72 = _DAT_1a3e18f72 + (int)*unaff_RBP + (uint)CARRY1(bVar3,unaff_BH);
  }
  *unaff_RDI = *unaff_RSI;
  return;
}



// FUNCTION 14d7bf8a3 FUN_14d7bf8a3 body=3 status=ok
// SIG undefined FUN_14d7bf8a3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bf8a3(void)

{
  byte in_AH;
  byte unaff_BH;
  int unaff_EBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  if (SCARRY1(in_AH,unaff_BH) == (char)(in_AH + unaff_BH) < '\0') {
    _DAT_1a3e18f72 = _DAT_1a3e18f72 + unaff_EBP + (uint)CARRY1(in_AH,unaff_BH);
  }
  *unaff_RDI = *unaff_RSI;
  return;
}



// FUNCTION 14d7bf8a8 FUN_14d7bf8a8 body=16 status=ok
// SIG undefined FUN_14d7bf8a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bf8a8(void)

{
  int unaff_EBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  byte in_CF;
  char in_SF;
  char in_OF;
  
  if (in_OF == in_SF) {
    _DAT_1a3e18f72 = _DAT_1a3e18f72 + unaff_EBP + (uint)in_CF;
  }
  *unaff_RDI = *unaff_RSI;
  return;
}



// FUNCTION 14d7bf8b8 FUN_14d7bf8b8 body=1 status=ok
// SIG undefined FUN_14d7bf8b8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf8b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf8c4 FUN_14d7bf8c4 body=5 status=FAIL
// SIG undefined FUN_14d7bf8c4(void)
/* DECOMPILE FAILED */

// FUNCTION 14d7bf8c9 FUN_14d7bf8c9 body=25 status=FAIL
// SIG undefined FUN_14d7bf8c9(void)
/* DECOMPILE FAILED */

// FUNCTION 14d7bf8d5 FUN_14d7bf8d5 body=23 status=ok
// SIG undefined FUN_14d7bf8d5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf8d5(undefined8 param_1)

{
  uint uVar1;
  undefined2 in_AX;
  byte bVar2;
  ulonglong *unaff_RBP;
  longlong unaff_RDI;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint unaff_retaddr;
  
  bVar2 = (byte)((ulonglong)param_1 >> 8) & *(byte *)(unaff_RDI + -0x340f8e07);
  *unaff_RBP = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
               (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((char)bVar2 < '\0') * 0x80 |
               (ulonglong)(bVar2 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
               (ulonglong)((POPCOUNT(bVar2) & 1U) == 0) * 4 | (ulonglong)(in_ID & 1) * 0x200000 |
               (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
               (ulonglong)(in_AC & 1) * 0x40000;
  uVar1 = CONCAT31((int3)((unaff_retaddr ^ 0x9d72dbdd) >> 8),
                   (char)(unaff_retaddr ^ 0x9d72dbdd) + -0x19);
  *unaff_RBP = (ulonglong)uVar1;
  out(in_AX,uVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf903 FUN_14d7bf903 body=6 status=ok
// SIG undefined FUN_14d7bf903(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf903(void)

{
  undefined1 in_AL;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf922 FUN_14d7bf922 body=9 status=ok
// SIG undefined FUN_14d7bf922(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf922(void)

{
  int *piVar1;
  longlong unaff_RDI;
  
  piVar1 = (int *)((ulonglong)*(uint *)(unaff_RDI + 0x17) + 0x78);
  *piVar1 = *piVar1 >> 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf932 FUN_14d7bf932 body=16 status=ok
// SIG undefined FUN_14d7bf932(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf932(void)

{
  undefined1 in_AL;
  
  DAT_c1dd0c86761ef780 = in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf94a FUN_14d7bf94a body=8 status=ok
// SIG undefined FUN_14d7bf94a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf94a(undefined8 param_1,int param_2)

{
  byte in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RSI;
  undefined2 in_ES;
  bool bVar1;
  
  *(undefined2 *)(CONCAT71(in_register_00000001,in_AL) + -0x6d32ffa0) = in_ES;
  bVar1 = CARRY1(bRam000000014f44ca82,in_AL);
  bRam000000014f44ca82 = bRam000000014f44ca82 + in_AL;
  *(int *)(unaff_RSI * 3) = (*(int *)(unaff_RSI * 3) - param_2) - (uint)bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf956 FUN_14d7bf956 body=4 status=ok
// SIG undefined FUN_14d7bf956(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf956(undefined8 param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  longlong unaff_RSI;
  bool bVar3;
  
  pcVar1 = (code *)swi(0x92);
  bVar2 = (*pcVar1)();
  bVar3 = CARRY1(bRam000000014f44ca82,bVar2);
  bRam000000014f44ca82 = bRam000000014f44ca82 + bVar2;
  *(int *)(unaff_RSI * 3) = (*(int *)(unaff_RSI * 3) - param_2) - (uint)bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf95f FUN_14d7bf95f body=13 status=ok
// SIG undefined FUN_14d7bf95f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf95f(int *param_1)

{
  int unaff_EBX;
  
  *param_1 = *param_1 + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf973 FUN_14d7bf973 body=1 status=ok
// SIG undefined FUN_14d7bf973(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bf96b) overlaps instruction at (ram,0x00014d7bf96a)
    */

void FUN_14d7bf973(longlong param_1,int param_2)

{
  byte unaff_BL;
  
  if (param_2 - *(int *)(param_1 + -0x42) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_2 != *(int *)(param_1 + -0x42)) {
    if (((byte)param_2 & unaff_BL) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf978 FUN_14d7bf978 body=11 status=ok
// SIG undefined FUN_14d7bf978(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf978(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf98c FUN_14d7bf98c body=2 status=ok
// SIG undefined FUN_14d7bf98c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf98c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf995 FUN_14d7bf995 body=41 status=ok
// SIG undefined FUN_14d7bf995(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bf995(undefined8 param_1)

{
  byte *pbVar1;
  int *piVar2;
  uint uVar3;
  longlong in_RAX;
  byte bVar4;
  int unaff_EBX;
  
  bVar4 = (byte)((uint)unaff_EBX >> 8);
  uVar3 = *(uint *)CONCAT71((int7)((ulonglong)param_1 >> 8),bVar4);
  pbVar1 = (byte *)((ulonglong)uVar3 - 0x68);
  *pbVar1 = *pbVar1 & (byte)uVar3;
  *(byte *)(in_RAX + 0x642b002a) = *(byte *)(in_RAX + 0x642b002a) | bVar4;
  piVar2 = (int *)((ulonglong)uVar3 + 0x559de89);
  *piVar2 = *piVar2 - unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bf9c7 FUN_14d7bf9c7 body=97 status=ok
// SIG undefined FUN_14d7bf9c7(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bfa08) overlaps instruction at (ram,0x00014d7bfa07)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bf9c7(ulonglong param_1,longlong param_2)

{
  byte *pbVar1;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined8 in_RAX;
  ulonglong uVar6;
  longlong lVar7;
  uint *puVar8;
  ulonglong uVar9;
  byte bVar10;
  int unaff_EBX;
  ulonglong unaff_RSI;
  uint unaff_EDI;
  char in_AF;
  char in_ZF;
  bool in_SF;
  undefined1 in_XMM3 [16];
  undefined1 unaff_XMM7 [16];
  undefined8 unaff_retaddr;
  undefined1 auStackX_8 [32];
  byte bVar11;
  
  if (!in_SF) {
    lVar7 = CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(0x42,(char)in_RAX));
    if (param_1 != 1 && in_ZF == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar3 = (char *)(lVar7 + -0x52);
    *pcVar3 = *pcVar3 + (char)param_2;
    if ((POPCOUNT(*pcVar3) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _DAT_8e12c93d05d670fd = (undefined4)lVar7;
    out((short)param_2,_DAT_8e12c93d05d670fd);
    vsubpd_avx(in_XMM3,unaff_XMM7);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar8 = (uint *)(param_1 + 0x4486380f);
  *puVar8 = *puVar8 - (int)unaff_RSI;
  lVar7 = *(longlong *)(ulonglong)unaff_EDI;
  if ((POPCOUNT(*puVar8 & 0xff) & 1U) == 0) {
    bVar11 = (byte)((ulonglong)param_2 >> 8);
    bVar10 = bVar11 + *(byte *)(unaff_RSI + 0x42305602);
    param_2 = (ulonglong)bVar10 << 8;
    uVar6 = unaff_RSI & 0xffffffff;
    puVar8 = (uint *)(param_1 - 1);
    uVar9 = 0;
    unaff_RSI = CONCAT62((int6)(((ulonglong)auStackX_8 & 0xffffffff) >> 0x10),
                         CONCAT11(((short)((ushort)bVar10 << 8) < 0) << 7 | (bVar10 == 0) << 6 |
                                  in_AF << 4 | ((POPCOUNT(bVar10) & 1U) == 0) << 2 | 2U |
                                  CARRY1(bVar11,*(byte *)(unaff_RSI + 0x42305602)),
                                  (char)((ulonglong)auStackX_8 & 0xffffffff)));
    if (puVar8 != (uint *)0x0) {
      uVar4 = *puVar8;
      pbVar1 = (byte *)((ulonglong)uVar4 - 0x68);
      *pbVar1 = *pbVar1 & (byte)uVar4;
      *(byte *)(uVar6 + 0x642b002a) = *(byte *)(uVar6 + 0x642b002a) | (byte)puVar8;
      piVar2 = (int *)((ulonglong)uVar4 + 0x559de89);
      *piVar2 = *piVar2 - unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    uVar6 = param_1 & 0xffffffff;
    uVar9 = (ulonglong)auStackX_8 & 0xffffffff;
  }
  out(0x49,(int)uVar6);
  *(char *)(uVar6 + 0x58) = *(char *)(uVar6 + 0x58) + (char)uVar6;
  *(ulonglong *)(lVar7 + -8) = uVar6;
  iVar5 = _DAT_134b5009c;
  _DAT_134b5009c = _DAT_134b5009c + 1;
  if (_DAT_134b5009c != 0 && -2 < iVar5) {
    pcVar3 = (char *)((uVar6 - 0x1127ead6) + unaff_RSI * 2);
    *pcVar3 = *pcVar3 + (char)uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
    *(undefined8 *)(lVar7 + -0x10) = unaff_retaddr;
    if ((*(ulonglong *)(lVar7 + -0x10) & 0x80) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while (uVar9 != 0);
  if (-1 < (char)((char)((ulonglong)param_2 >> 8) + (char)((uint)unaff_EBX >> 8))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfa1a FUN_14d7bfa1a body=14 status=ok
// SIG undefined FUN_14d7bfa1a(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bfa1a(longlong param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined1 in_AL;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char in_ZF;
  undefined1 in_XMM3 [16];
  undefined1 unaff_XMM7 [16];
  
  if (param_1 != 1 && in_ZF == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(0x42,in_AL))) + -0x52);
  *pcVar1 = *pcVar1 + (char)param_2;
  if ((POPCOUNT(*pcVar1) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(param_2,CONCAT22(in_register_00000002,CONCAT11(0x42,in_AL)));
  _DAT_8e12c93d05d670fd = CONCAT22(in_register_00000002,CONCAT11(0x42,in_AL));
  vsubpd_avx(in_XMM3,unaff_XMM7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfa34 FUN_14d7bfa34 body=6 status=ok
// SIG undefined FUN_14d7bfa34(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bfa34(undefined8 param_1,uint param_2)

{
  undefined4 in_EAX;
  int unaff_EBX;
  uint uVar1;
  undefined1 in_XMM3 [16];
  undefined1 unaff_XMM7 [16];
  
  uVar1 = unaff_EBX + param_2;
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 | (byte)(uVar1 >> 8);
  uRam00000001857ed695 = uRam00000001857ed695 & param_2;
  out((short)param_2,in_EAX);
  _DAT_8e12c93d05d670fd = in_EAX;
  vsubpd_avx(in_XMM3,unaff_XMM7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfa3d FUN_14d7bfa3d body=23 status=ok
// SIG undefined FUN_14d7bfa3d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bfa3d(undefined8 param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  undefined1 in_XMM3 [16];
  undefined1 unaff_XMM7 [16];
  
  out(param_2,in_EAX);
  _DAT_8e12c93d05d670fd = in_EAX;
  vsubpd_avx(in_XMM3,unaff_XMM7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfa55 FUN_14d7bfa55 body=22 status=ok
// SIG undefined FUN_14d7bfa55(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bfa55(int param_1,longlong param_2)

{
  char *pcVar1;
  uint uVar2;
  char in_AL;
  char cVar3;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  int unaff_EDI;
  bool in_SF;
  unkbyte10 in_ST0;
  
  if (in_SF) {
    *(unkbyte10 *)(param_2 + 0x14e7abe5) = in_ST0;
    _DAT_8e3f0054 = (ulonglong)(uint)(param_1 - unaff_EDI);
    return;
  }
  cVar3 = in_AL + *(char *)(CONCAT71((int7)((ulonglong)param_2 >> 8),0x50) + 0x5137c68c);
  uVar2 = *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  if (cVar3 < '\0') {
    out((short)uVar2,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3)));
    pcVar1 = (char *)((ulonglong)uVar2 + 0x27);
    *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3)))
       + cVar3;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7bfa66 FUN_14d7bfa66 body=1 status=ok
// SIG undefined FUN_14d7bfa66(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bfa66(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfa6a FUN_14d7bfa6a body=3 status=ok
// SIG undefined FUN_14d7bfa6a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bfa6a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfa7f FUN_14d7bfa7f body=2 status=ok
// SIG undefined FUN_14d7bfa7f(void)

void FUN_14d7bfa7f(void)

{
  return;
}



// FUNCTION 14d7bfa98 FUN_14d7bfa98 body=3 status=ok
// SIG undefined FUN_14d7bfa98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bfa98(int param_1,undefined8 param_2)

{
  undefined4 in_EAX;
  undefined4 uVar1;
  undefined4 *unaff_RDI;
  
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),
                   CONCAT11((char)((uint)in_EAX >> 8) + (char)((ulonglong)param_2 >> 8),(char)in_EAX
                           ));
  *unaff_RDI = uVar1;
  out(0x14,uVar1);
  _DAT_8e3f0054 = (ulonglong)(uint)(param_1 - ((int)unaff_RDI + 4));
  return;
}



// FUNCTION 14d7bfaa4 FUN_14d7bfaa4 body=13 status=ok
// SIG undefined FUN_14d7bfaa4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bfaa4(int param_1)

{
  int unaff_EDI;
  
  _DAT_8e3f0054 = (ulonglong)(uint)(param_1 - unaff_EDI);
  return;
}



// FUNCTION 14d7bfab1 FUN_14d7bfab1 body=6 status=ok
// SIG undefined FUN_14d7bfab1(void)

void FUN_14d7bfab1(void)

{
  return;
}



// FUNCTION 14d7bfaba FUN_14d7bfaba body=3 status=ok
// SIG undefined FUN_14d7bfaba(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bfaba(void)

{
  longlong in_RAX;
  
  *(char *)(in_RAX + -0x7b) = *(char *)(in_RAX + -0x7b) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfac6 FUN_14d7bfac6 body=5 status=ok
// SIG undefined FUN_14d7bfac6(void)

void FUN_14d7bfac6(undefined8 param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong *puVar3;
  int unaff_ESI;
  undefined4 unaff_R12D;
  ulonglong unaff_R15;
  int unaff_retaddr;
  
  puVar3 = (ulonglong *)(ulonglong)(uint)(unaff_retaddr + unaff_ESI);
  *(undefined4 *)puVar3 = unaff_R12D;
  *(undefined4 *)((longlong)puVar3 + 4) = 0xffffffff;
  uVar1 = *(ulonglong *)((longlong)puVar3 + (0x8409b1d - (~*puVar3 + 2)));
  puVar3[1] = puVar3[1];
  uVar2 = puVar3[1];
  puVar3[1] = -~unaff_R15 - (~uVar1 + 2);
  *puVar3 = 0x4600ceeb;
  puVar3[3] = -puVar3[3];
  puVar3[3] = puVar3[3] - 1;
  puVar3[-1] = uVar2;
  puVar3[-2] = param_1;
  FUN_14e119038(8);
  return;
}



// FUNCTION 14d7bfad3 FUN_14d7bfad3 body=11 status=ok
// SIG undefined FUN_14d7bfad3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bfad3(longlong param_1,undefined2 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined1 in_AL;
  undefined8 unaff_RBX;
  ulonglong *puVar3;
  char *unaff_RSI;
  char *unaff_RDI;
  undefined4 unaff_R12D;
  ulonglong unaff_R15;
  unkbyte10 in_ST0;
  int unaff_retaddr;
  
  if (param_1 + -1 == 0 || *unaff_RSI != *unaff_RDI) {
    puVar3 = (ulonglong *)(ulonglong)(uint)(unaff_retaddr + (int)(unaff_RSI + 1));
    *(undefined4 *)puVar3 = unaff_R12D;
    *(undefined4 *)((longlong)puVar3 + 4) = 0xffffffff;
    uVar1 = *(ulonglong *)((longlong)puVar3 + (0x8409b1d - (~*puVar3 + 2)));
    puVar3[1] = puVar3[1];
    uVar2 = puVar3[1];
    puVar3[1] = -~unaff_R15 - (~uVar1 + 2);
    *puVar3 = unaff_RBX;
    puVar3[3] = -puVar3[3];
    puVar3[3] = puVar3[3] - 1;
    puVar3[-1] = uVar2;
    puVar3[-2] = param_1 + -1;
    FUN_14e119038(8);
    return;
  }
  *(unkbyte10 *)(unaff_RDI + 1) = in_ST0;
  *(undefined4 *)(unaff_RDI + 1) = *(undefined4 *)(unaff_RSI + 1);
  out(param_2,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfadf FUN_14d7bfadf body=2 status=ok
// SIG undefined FUN_14d7bfadf(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bfadf(void)

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



// FUNCTION 14d7bfae3 FUN_14d7bfae3 body=15 status=ok
// SIG undefined FUN_14d7bfae3(void)

void FUN_14d7bfae3(void)

{
  char in_AL;
  undefined7 in_register_00000001;
  bool in_OF;
  
  if (in_OF) {
    return;
  }
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7bfaff FUN_14d7bfaff body=2 status=ok
// SIG undefined FUN_14d7bfaff(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bfaff(void)

{
  bool in_CF;
  
  if (!in_CF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfb07 FUN_14d7bfb07 body=4 status=ok
// SIG undefined FUN_14d7bfb07(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bfb07(void)

{
  longlong in_RAX;
  
  *(ulonglong *)(in_RAX + -0x3b) = ~*(ulonglong *)(in_RAX + -0x3b);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfb14 FUN_14d7bfb14 body=8 status=ok
// SIG undefined FUN_14d7bfb14(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bfb14(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfb24 FUN_14d7bfb24 body=7 status=ok
// SIG undefined FUN_14d7bfb24(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bfb24(undefined8 param_1,undefined1 param_2)

{
  undefined1 *in_RAX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  undefined2 in_SS;
  
  *(int *)(unaff_RDI + -0x2c) = *(int *)(unaff_RDI + -0x2c) >> 0x19;
  *in_RAX = param_2;
  *(undefined2 *)(unaff_RBP + 0x5e) = in_SS;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfb2c FUN_14d7bfb2c body=22 status=ok
// SIG undefined FUN_14d7bfb2c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bfb2c(void)

{
  undefined2 unaff_BP;
  undefined6 unaff_0000002a;
  undefined2 in_SS;
  
  *(undefined2 *)(CONCAT62(unaff_0000002a,unaff_BP) + 0x5e) = in_SS;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfb45 FUN_14d7bfb45 body=2 status=ok
// SIG undefined FUN_14d7bfb45(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bfb45(void)

{
  undefined4 unaff_EDI;
  undefined4 unaff_0000003c;
  
  LOCK();
  *(undefined4 *)CONCAT44(unaff_0000003c,unaff_EDI) = unaff_EDI;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfb61 FUN_14d7bfb61 body=3 status=ok
// SIG undefined FUN_14d7bfb61(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bfb61(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfb6e FUN_14d7bfb6e body=26 status=ok
// SIG undefined FUN_14d7bfb6e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bfb6e(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char in_AL;
  byte bVar2;
  longlong unaff_RBX;
  undefined4 unaff_ESP;
  undefined4 unaff_00000024;
  longlong unaff_R15;
  
  bVar2 = *(byte *)(unaff_RBX + (ulonglong)(byte)(in_AL + 0x85U | 0x6f));
  pcVar1 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + param_2 * 8);
  *pcVar1 = *pcVar1 + '\x01';
  *(char *)(unaff_R15 + 0x45) = *(char *)(unaff_R15 + 0x45) + (bVar2 | 0x3c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfb8b thunk_EXT_FUN_f54c0e09 body=5 status=ok
// SIG undefined thunk_EXT_FUN_f54c0e09(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_f54c0e09(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfb9b FUN_14d7bfb9b body=5 status=ok
// SIG undefined FUN_14d7bfb9b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bfb9b(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfba3 FUN_14d7bfba3 body=3 status=ok
// SIG undefined FUN_14d7bfba3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bfba3(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 in_RAX;
  longlong lVar4;
  char cVar5;
  longlong unaff_RBX;
  int unaff_EDI;
  undefined4 unaff_0000003c;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  iVar2 = *(int *)CONCAT44(unaff_0000003c,unaff_EDI);
  if (iVar2 < unaff_EDI) {
    *(byte *)CONCAT44(unaff_0000003c,unaff_EDI) =
         *(byte *)CONCAT44(unaff_0000003c,unaff_EDI) & (byte)unaff_RBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  LOCK();
  puVar1 = (uint *)(CONCAT44(unaff_0000003c,unaff_EDI) + -0x3c24d8ab);
  uVar3 = *puVar1;
  *puVar1 = (uint)in_RAX;
  lVar4 = CONCAT44((int)((ulonglong)in_RAX >> 0x20),uVar3);
  UNLOCK();
  if (param_1 == 1 || unaff_EDI == iVar2) {
    lVar4 = (**(code **)((ulonglong)(uVar3 ^ 0x709776a5) - 0x714b8b57))();
    *(uint *)(unaff_RBX + -0x75c6863d) = *(uint *)(unaff_RBX + -0x75c6863d) | (uint)unaff_RBX;
    *(char *)(lVar4 + 0x571d76bd) = *(char *)(lVar4 + 0x571d76bd) + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(lVar4 + 0x11fccbda) = in_FPUControlWord;
  *(undefined2 *)(lVar4 + 0x11fccbde) = in_FPUStatusWord;
  *(undefined2 *)(lVar4 + 0x11fccbe2) = in_FPUTagWord;
  *(undefined8 *)(lVar4 + 0x11fccbee) = in_FPUDataPointer;
  *(undefined8 *)(lVar4 + 0x11fccbe6) = in_FPUInstructionPointer;
  *(undefined2 *)(lVar4 + 0x11fccbec) = in_FPULastInstructionOpcode;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfba7 FUN_14d7bfba7 body=18 status=ok
// SIG undefined FUN_14d7bfba7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bfba7(undefined8 param_1,undefined2 param_2)

{
  undefined1 in_AL;
  byte unaff_BL;
  undefined4 *unaff_RSI;
  byte *unaff_RDI;
  bool in_ZF;
  unkbyte10 in_ST0;
  
  if (!in_ZF) {
    *unaff_RDI = *unaff_RDI & unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(unkbyte10 *)unaff_RDI = in_ST0;
  *(undefined4 *)unaff_RDI = *unaff_RSI;
  out(param_2,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfbb3 FUN_14d7bfbb3 body=11 status=ok
// SIG undefined FUN_14d7bfbb3(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bfbbc) overlaps instruction at (ram,0x00014d7bfbbb)
    */

void FUN_14d7bfbb3(int *param_1)

{
  char *pcVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int *in_RAX;
  longlong unaff_RBX;
  longlong unaff_RSI;
  bool bVar8;
  
  pcVar1 = (char *)(unaff_RBX + -0x2b + (longlong)param_1);
  *pcVar1 = *pcVar1 + '\x01';
  *param_1 = *param_1 + -0x40;
  iVar6 = (int)in_RAX;
  lVar4 = (longlong)*in_RAX * -0x5d;
  bVar8 = (int)lVar4 != lVar4;
  bVar5 = (byte)param_1 & 0x1f;
  uVar7 = iVar6 << bVar5;
  bVar3 = ((ulonglong)param_1 & 0x1f) != 0;
  bVar2 = ((ulonglong)param_1 & 0x1f) != 0;
  if (bVar5 != 1 && bVar8 ||
      bVar5 == 1 && (!bVar3 && bVar8 || bVar3 && iVar6 << bVar5 - 1 < 0) != (int)uVar7 < 0) {
    *(int *)((ulonglong)uVar7 + 0x3d) = *(int *)((ulonglong)uVar7 + 0x3d) - uVar7;
    *(char *)(unaff_RSI + 0x2d) = *(char *)(unaff_RSI + 0x2d) + (char)((ulonglong)lVar4 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bVar2 || -1 < iVar6 + 0x41d28a00) && (!bVar2 || -1 < (int)uVar7)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfbc0 FUN_14d7bfbc0 body=7 status=ok
// SIG undefined FUN_14d7bfbc0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bfbc0(void)

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



// FUNCTION 14d7bfbd4 FUN_14d7bfbd4 body=4 status=ok
// SIG undefined FUN_14d7bfbd4(void)

undefined4 FUN_14d7bfbd4(undefined4 param_1)

{
  return param_1;
}



// FUNCTION 14d7bfbd8 FUN_14d7bfbd8 body=12 status=ok
// SIG undefined FUN_14d7bfbd8(void)

/* WARNING: Control flow encountered bad instruction data */

ulonglong FUN_14d7bfbd8(ulonglong param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined8 in_RAX;
  longlong lVar4;
  longlong unaff_RBX;
  undefined4 *unaff_RSI;
  bool in_SF;
  
  if (in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = *unaff_RSI;
  lVar4 = CONCAT44((int)((ulonglong)in_RAX >> 0x20),uVar3);
  pcVar2 = (char *)(param_1 * 2 + 0x18f658d6);
  *pcVar2 = *pcVar2 + (char)((uint)uVar3 >> 8);
  if ((POPCOUNT(*pcVar2) & 1U) != 0) {
    if (-1 < *pcVar2) {
      pbVar1 = (byte *)(lVar4 + 0x6f475cc7);
      *pbVar1 = *pbVar1 | (byte)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return param_1 & 0xffffffff;
  }
  *(uint *)(unaff_RBX + -0x75c6863d) = *(uint *)(unaff_RBX + -0x75c6863d) | (uint)unaff_RBX;
  pcVar2 = (char *)(CONCAT62((int6)((ulonglong)lVar4 >> 0x10),CONCAT11(0x8e,(byte)uVar3)) +
                   0x571d76bd);
  *pcVar2 = *pcVar2 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfbdd FUN_14d7bfbdd body=2 status=ok
// SIG undefined FUN_14d7bfbdd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bfbdd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfbe1 FUN_14d7bfbe1 body=2 status=ok
// SIG undefined FUN_14d7bfbe1(void)

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_14d7bfbe1(undefined4 param_1,undefined8 param_2)

{
  char *pcVar1;
  char *in_RAX;
  longlong unaff_RBX;
  
  *in_RAX = -*in_RAX;
  if ((POPCOUNT(*in_RAX) & 1U) == 0) {
    *(uint *)(unaff_RBX + -0x75c6863d) = *(uint *)(unaff_RBX + -0x75c6863d) | (uint)unaff_RBX;
    pcVar1 = (char *)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(0x8e,(byte)in_RAX)) +
                     0x571d76bd);
    *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (-1 < *in_RAX) {
    in_RAX[0x6f475cc7] = in_RAX[0x6f475cc7] | (byte)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return param_1;
}



// FUNCTION 14d7bfbe9 FUN_14d7bfbe9 body=19 status=ok
// SIG undefined FUN_14d7bfbe9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bfbe9(void)

{
  longlong in_RAX;
  
  *(byte *)(in_RAX + 0x6f475cc7) = *(byte *)(in_RAX + 0x6f475cc7) | (byte)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfc27 FUN_14d7bfc27 body=4 status=ok
// SIG undefined FUN_14d7bfc27(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bfc27(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  longlong unaff_RBX;
  ulonglong unaff_RDI;
  bool in_OF;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  
  cVar3 = (char)((ulonglong)param_2 >> 8);
  uVar1 = unaff_RDI & 0xffffffff;
  if (!in_OF) {
    lVar2 = (**(code **)(uVar1 - 0x714b8b57))();
    *(uint *)(unaff_RBX + -0x75c6863d) = *(uint *)(unaff_RBX + -0x75c6863d) | (uint)unaff_RBX;
    *(char *)(lVar2 + 0x571d76bd) = *(char *)(lVar2 + 0x571d76bd) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(uVar1 + 0x11fccbda) = in_FPUControlWord;
  *(undefined2 *)(uVar1 + 0x11fccbde) = in_FPUStatusWord;
  *(undefined2 *)(uVar1 + 0x11fccbe2) = in_FPUTagWord;
  *(undefined8 *)(uVar1 + 0x11fccbee) = in_FPUDataPointer;
  *(undefined8 *)(uVar1 + 0x11fccbe6) = in_FPUInstructionPointer;
  *(undefined2 *)(uVar1 + 0x11fccbec) = in_FPULastInstructionOpcode;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfc37 FUN_14d7bfc37 body=22 status=ok
// SIG undefined FUN_14d7bfc37(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bfc37(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfc54 FUN_14d7bfc54 body=27 status=ok
// SIG undefined FUN_14d7bfc54(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bfc6e) overlaps instruction at (ram,0x00014d7bfc6d)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7bfc16) */
/* WARNING: Removing unreachable block (ram,0x00014d7bfc18) */

ulonglong FUN_14d7bfc54(longlong param_1,char *param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined1 uVar6;
  longlong lVar7;
  ulonglong in_RAX;
  undefined7 uVar8;
  char cVar9;
  ulonglong uVar11;
  longlong unaff_RBX;
  longlong unaff_RBP;
  char *unaff_RSI;
  char *pcVar12;
  char *unaff_RDI;
  undefined1 *puVar13;
  char *pcVar14;
  char in_ZF;
  bool bVar15;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  ulonglong unaff_retaddr;
  char *pcStackX_8;
  char cVar10;
  
  bVar15 = false;
  uVar11 = param_1 - 1;
  uVar8 = (undefined7)(in_RAX >> 8);
  if (uVar11 != 0 && in_ZF == '\0') {
    bVar15 = (unaff_retaddr & 0x400) != 0;
    pcVar12 = unaff_RSI + (ulonglong)bVar15 * -2 + 1;
    piVar1 = (int *)(CONCAT71(uVar8,*unaff_RSI) + 0x7906222f);
    *piVar1 = *piVar1 << ((byte)uVar11 & 0x1f);
    pcVar14 = unaff_RDI;
    pcVar5 = pcStackX_8;
    goto LAB_14d7bfc6d_1;
  }
  uVar11 = param_1 - 2;
  if (uVar11 != 0 && (in_RAX & 0xa8) != 0) {
    cVar9 = (char)in_RAX + 'y';
    lVar7 = CONCAT71(uVar8,cVar9);
    LOCK();
    uVar3 = *(uint *)(unaff_RBP + 0x27);
    *(uint *)(unaff_RBP + 0x27) =
         (uint)CONCAT71((int7)((ulonglong)param_2 >> 8),(char)param_2 - unaff_RDI[-0x438249ba]);
    param_2 = (char *)(ulonglong)uVar3;
    UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
    if (param_1 != 3 && cVar9 != '\0') {
      *(undefined2 *)(lVar7 + 0x11fccbda) = in_FPUControlWord;
      *(undefined2 *)(lVar7 + 0x11fccbde) = in_FPUStatusWord;
      *(undefined2 *)(lVar7 + 0x11fccbe2) = in_FPUTagWord;
      *(undefined8 *)(lVar7 + 0x11fccbee) = in_FPUDataPointer;
      *(undefined8 *)(lVar7 + 0x11fccbe6) = 0x14d7bfc20;
      *(undefined2 *)(lVar7 + 0x11fccbec) = in_FPULastInstructionOpcode;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
code_r0x00014d7bfc24:
    cVar9 = (char)((ulonglong)param_2 >> 8);
    lVar7 = (**(code **)((ulonglong)((uint)lVar7 ^ 0x709776a5) - 0x714b8b57))();
    *(uint *)(unaff_RBX + -0x75c6863d) = *(uint *)(unaff_RBX + -0x75c6863d) | (uint)unaff_RBX;
    *(char *)(lVar7 + 0x571d76bd) = *(char *)(lVar7 + 0x571d76bd) + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar14 = unaff_RDI + 1;
  if ((char)in_RAX == *unaff_RDI) {
    lVar7 = func_0x000138f44463();
  }
  else {
    puVar2 = (uint *)(unaff_RBX + 0x6222fb0 + (longlong)param_2 * 8);
    *puVar2 = *puVar2 & (uint)unaff_RBP;
    if ((int)*puVar2 < 0) {
      pcVar5 = pcStackX_8;
      if (*puVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      while( true ) {
        do {
          pcStackX_8 = pcVar5;
          puVar13 = (undefined1 *)(ulonglong)(uint)((int)pcVar14 - (int)uVar11);
          uVar6 = in((short)param_2);
          pcVar14 = puVar13 + (ulonglong)bVar15 * -2 + 1;
          *puVar13 = uVar6;
          pcVar12 = unaff_RSI + (ulonglong)bVar15 * -2 + 1;
          cVar10 = (char)uVar11;
          cVar9 = cVar10 + *unaff_RSI;
          uVar11 = CONCAT71((int7)(uVar11 >> 8),cVar9);
          if (cVar9 == '\0' || SCARRY1(cVar10,*unaff_RSI) != cVar9 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          param_2 = pcStackX_8;
          unaff_RSI = pcVar12;
          pcVar5 = pcVar14;
        } while (cVar9 == '\0');
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) break;
LAB_14d7bfc6d_1:
        pcStackX_8 = pcVar5;
        puVar2 = (uint *)(unaff_RBX + 0x76 + (longlong)pcVar14 * 8);
        *puVar2 = *puVar2 ^ 0x44f92ba3;
        in((short)param_2);
        unaff_RSI = pcVar12;
        pcVar5 = pcStackX_8;
      }
      uVar4 = in((short)pcStackX_8);
      *(undefined4 *)pcVar14 = uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((POPCOUNT(*puVar2 & 0xff) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar4 = *(undefined4 *)unaff_RSI;
    lVar7 = CONCAT44((int)(in_RAX >> 0x20),uVar4);
    pcVar14 = (char *)(uVar11 * 2 + 0x18f658d6);
    *pcVar14 = *pcVar14 + (char)((uint)uVar4 >> 8);
    if ((POPCOUNT(*pcVar14) & 1U) == 0) {
      lVar7 = CONCAT62((int6)((ulonglong)lVar7 >> 0x10),CONCAT11(0x8e,(char)uVar4));
      goto code_r0x00014d7bfc24;
    }
    if (*pcVar14 < '\0') {
      return uVar11 & 0xffffffff;
    }
  }
  *(byte *)(lVar7 + 0x6f475cc7) = *(byte *)(lVar7 + 0x6f475cc7) | (byte)lVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfc70 FUN_14d7bfc70 body=26 status=ok
// SIG undefined FUN_14d7bfc70(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bfc76) overlaps instruction at (ram,0x00014d7bfc75)
    */

void FUN_14d7bfc70(longlong param_1,undefined4 *param_2)

{
  uint *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  char cVar5;
  longlong unaff_RBX;
  char *unaff_RSI;
  undefined4 *unaff_RDI;
  undefined1 *puVar7;
  bool in_CF;
  bool in_ZF;
  undefined4 *unaff_retaddr;
  undefined4 *puVar8;
  char cVar6;
  
  if (in_CF || in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while( true ) {
    do {
      puVar8 = unaff_retaddr;
      puVar7 = (undefined1 *)(ulonglong)(uint)((int)unaff_RDI - (int)param_1);
      uVar4 = in((short)param_2);
      unaff_RDI = (undefined4 *)(puVar7 + 1);
      *puVar7 = uVar4;
      pcVar2 = unaff_RSI + 1;
      cVar6 = (char)param_1;
      cVar5 = cVar6 + *unaff_RSI;
      param_1 = CONCAT71((int7)((ulonglong)param_1 >> 8),cVar5);
      if (cVar5 == '\0' || SCARRY1(cVar6,*unaff_RSI) != cVar5 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      param_2 = puVar8;
      unaff_RSI = pcVar2;
      unaff_retaddr = unaff_RDI;
    } while (cVar5 == '\0');
    param_1 = param_1 + -1;
    if (param_1 == 0) break;
    puVar1 = (uint *)(unaff_RBX + 0x76 + (longlong)unaff_RDI * 8);
    *puVar1 = *puVar1 ^ 0x44f92ba3;
    in((short)puVar8);
  }
  uVar3 = in((short)puVar8);
  *unaff_RDI = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfc9a FUN_14d7bfc9a body=61 status=ok
// SIG undefined FUN_14d7bfc9a(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bfcab) overlaps instruction at (ram,0x00014d7bfca6)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7bfcbd) */
/* WARNING: Removing unreachable block (ram,0x00014d7bfd0b) */
/* WARNING: Removing unreachable block (ram,0x00014d7bfcc6) */

ulonglong FUN_14d7bfc9a(longlong param_1,ushort param_2)

{
  int *piVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint in_EAX;
  ulonglong unaff_RBX;
  longlong *plVar5;
  ushort unaff_BP;
  undefined1 *unaff_RSI;
  undefined1 *puVar6;
  char *unaff_RDI;
  byte in_CF;
  bool in_SF;
  
  if (in_SF) {
    out(*unaff_RSI,param_2);
    puVar6 = unaff_RSI;
    while( true ) {
      unaff_RSI = puVar6 + 1;
      uVar3 = (uint)in_CF;
      uVar4 = in_EAX + *(uint *)(unaff_RDI + -0x6c);
      in_CF = CARRY4(in_EAX,*(uint *)(unaff_RDI + -0x6c)) || CARRY4(uVar4,uVar3);
      in_EAX = uVar4 + uVar3;
      param_1 = param_1 + -1;
      if (param_1 == 0 || in_EAX == 0) break;
      *(uint *)(unaff_RDI + -0x7a) = *(uint *)(unaff_RDI + -0x7a) | in_EAX;
      plVar5 = (longlong *)((longlong)register0x00000020 + -8);
      register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
      *plVar5 = (longlong)unaff_RSI;
      unaff_BP = unaff_BP & 0x521c;
      *unaff_RDI = *unaff_RDI + (char)((ulonglong)param_1 >> 8);
      unaff_RDI = (char *)0x8b299f99;
      puVar6[-0x3e] = (char)unaff_BP;
      out(*unaff_RSI,param_2);
      piVar1 = (int *)(unaff_RBX + 0x6e117995);
      in_CF = *piVar1 != 0;
      *piVar1 = -*piVar1;
      puVar6 = unaff_RSI;
    }
    unaff_BP = param_2;
    if (-1 < (int)in_EAX) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  while( true ) {
    piVar1 = (int *)(unaff_RSI + -0x4fff035);
    *piVar1 = (*piVar1 - (int)unaff_RSI) - (uint)in_CF;
    in(unaff_BP);
    if (*piVar1 < 0) break;
    pcVar2 = (char *)(((ulonglong)unaff_RSI & 0xffffffff) + 0x56043831 + (longlong)unaff_RDI * 2);
    in_CF = *pcVar2 != '\0';
    *pcVar2 = -*pcVar2;
  }
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 14d7bfced FUN_14d7bfced body=2 status=ok
// SIG undefined FUN_14d7bfced(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bfced(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfcf9 FUN_14d7bfcf9 body=6 status=ok
// SIG undefined FUN_14d7bfcf9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bfcf9(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RDI;
  
  func_0xd15b70ce();
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfd09 FUN_14d7bfd09 body=2 status=ok
// SIG undefined FUN_14d7bfd09(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bfd09(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfd12 FUN_14d7bfd12 body=10 status=ok
// SIG undefined FUN_14d7bfd12(void)

undefined4 FUN_14d7bfd12(void)

{
  longlong unaff_RSI;
  undefined4 unaff_EDI;
  undefined2 in_FS;
  float10 in_ST0;
  
  *(float *)(unaff_RSI + 0x47) = (float)in_ST0;
  *(undefined2 *)(unaff_RSI + 0x7e79200) = in_FS;
  return unaff_EDI;
}



// FUNCTION 14d7bfd1f FUN_14d7bfd1f body=5 status=ok
// SIG undefined FUN_14d7bfd1f(void)

undefined4 FUN_14d7bfd1f(undefined8 param_1,undefined4 param_2)

{
  undefined4 unaff_EDI;
  
  out(7,param_2);
  return unaff_EDI;
}



// FUNCTION 14d7bfd27 FUN_14d7bfd27 body=27 status=ok
// SIG undefined FUN_14d7bfd27(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7bfdaa) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bfd27(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 *puVar4;
  undefined4 uVar5;
  longlong lVar6;
  char *in_RAX;
  undefined2 uVar7;
  longlong lVar8;
  char *unaff_RBX;
  undefined1 *unaff_RSI;
  undefined4 *puVar11;
  undefined4 *unaff_RDI;
  undefined4 *puVar12;
  float10 in_ST0;
  undefined8 uStack_8;
  byte bVar3;
  char cVar9;
  char cVar10;
  
  cVar10 = (char)((ulonglong)param_2 >> 8);
  cVar9 = cVar10 + *in_RAX;
  uVar7 = CONCAT11(cVar9,(char)param_2);
  lVar8 = CONCAT62((int6)((ulonglong)param_2 >> 0x10),uVar7);
  if (SCARRY1(cVar10,*in_RAX)) {
    puVar11 = (undefined4 *)(unaff_RSI + 1);
    out(*unaff_RSI,uVar7);
    if (cVar9 == '\0' || SCARRY1(cVar10,*in_RAX) != cVar9 < '\0') {
      *(short *)(unaff_RSI + -0x3e) = (short)ROUND(in_ST0);
      *(undefined1 *)unaff_RDI = *(undefined1 *)puVar11;
      _DAT_6b77e33d = 0xffffffffffffffca;
      out(unaff_RSI[2],uVar7);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((POPCOUNT(0xc5dffa07U - (int)puVar11 & 0xff) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(int *)(lVar8 + 0x5c) =
         *(int *)(lVar8 + 0x5c) -
         (int)CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),
                       CONCAT11((char)((ulonglong)unaff_RBX >> 8) + (char)in_RAX,(char)unaff_RBX));
    register0x00000020 = (BADSPACEBASE *)&uStack_8;
    uStack_8 = *(undefined8 *)((longlong)unaff_RDI + -0x59);
    puVar12 = unaff_RDI;
  }
  else {
    *unaff_RBX = *unaff_RBX + 't';
    puVar12 = unaff_RDI + 1;
    uVar5 = in(uVar7);
    *unaff_RDI = uVar5;
    puVar11 = (undefined4 *)&DAT_30720d0a;
    lVar8 = 0x193ec734;
  }
  lVar6 = *(longlong *)register0x00000020;
  puVar4 = puVar12 + 1;
  *puVar12 = *puVar11;
  *(char *)(puVar4 + lVar6 * 2) = *(char *)(puVar4 + lVar6 * 2) >> 1;
  *(undefined4 **)register0x00000020 = puVar11 + 1;
  pbVar1 = (byte *)(lVar8 + -0x50);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + (byte)lVar8;
  bVar3 = *pbVar1;
  *(undefined1 *)puVar4 = *(undefined1 *)(puVar11 + 1);
  if (!CARRY1(bVar2,(byte)lVar8) && bVar3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfd4d FUN_14d7bfd4d body=52 status=ok
// SIG undefined FUN_14d7bfd4d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bfd70) overlaps instruction at (ram,0x00014d7bfd6f)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7bfd42) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bfd4d(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined4 *puVar4;
  char cVar5;
  longlong unaff_RBX;
  char unaff_SIL;
  undefined4 *unaff_RDI;
  char in_CF;
  bool bVar6;
  float10 in_ST0;
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  bVar6 = SBORROW1(DAT_10052fd5c,cVar5);
  cVar5 = DAT_10052fd5c - cVar5;
  DAT_10052fd5c = cVar5 - in_CF;
  DAT_357094560e632726 = 0x92;
  if ((POPCOUNT(DAT_10052fd5c) & 1U) == 0) {
    if (DAT_10052fd5c == '\0' || (bVar6 != SBORROW1(cVar5,in_CF)) != DAT_10052fd5c < '\0') {
      _DAT_d59bb753 = (short)ROUND(in_ST0);
      *(undefined1 *)unaff_RDI = DAT_d59bb792;
      _DAT_6b77e33d = 0xffffffffffffffca;
      out(DAT_d59bb792_1,(short)param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(int *)(param_2 + 0x5c) =
         *(int *)(param_2 + 0x5c) -
         (int)CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),
                       CONCAT11((char)((ulonglong)unaff_RBX >> 8) + unaff_SIL,(char)unaff_RBX));
    puVar4 = unaff_RDI + 1;
    *unaff_RDI = _DAT_d59bb792;
    *(char *)(puVar4 + *(longlong *)((longlong)unaff_RDI + -0x59) * 2) =
         *(char *)(puVar4 + *(longlong *)((longlong)unaff_RDI + -0x59) * 2) >> 1;
    pbVar1 = (byte *)(param_2 + -0x50);
    bVar2 = *pbVar1;
    *pbVar1 = *pbVar1 + (byte)param_2;
    bVar3 = *pbVar1;
    *(undefined1 *)puVar4 = uRam00000000d59bb796;
    if (!CARRY1(bVar2,(byte)param_2) && bVar3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  in(0x7b);
  pbVar1 = (byte *)(unaff_RBX + 0x6acddbc90);
  *pbVar1 = *pbVar1 | 0x75;
  bVar2 = *pbVar1;
  *(uint *)(unaff_RBX * 3) = ~*(uint *)(unaff_RBX * 3);
  if (bVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((char)bVar2 < '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfd87 FUN_14d7bfd87 body=40 status=ok
// SIG undefined FUN_14d7bfd87(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7bfd87(longlong param_1,undefined2 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  undefined4 uVar3;
  code *pcVar4;
  byte bVar5;
  undefined1 unaff_BL;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  longlong unaff_RSI;
  longlong unaff_RDI;
  bool bVar6;
  bool bVar7;
  longlong lStackX_8;
  
  pcVar4 = (code *)swi(0x90);
  bVar5 = (*pcVar4)();
  pbVar2 = (byte *)(param_1 + -0x7cf24389 + unaff_RSI * 8);
  *pbVar2 = *pbVar2 | bVar5;
  *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(0x8d,unaff_BL))) =
       *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(0x8d,unaff_BL))) +
       (char)((ulonglong)param_1 >> 8);
  uVar3 = in(param_2);
  *(undefined4 *)(unaff_RDI + 1) = uVar3;
  if (param_1 == 1) {
    func_0xd8e788cf();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(unaff_RDI + 5) = _DAT_30720d0a;
  pcVar1 = (undefined1 *)(unaff_RDI + 9) + lStackX_8 * 8;
  *pcVar1 = *pcVar1 >> 1;
  bVar6 = 0xcb < DAT_193ec6e4;
  DAT_193ec6e4 = DAT_193ec6e4 + 0x34;
  bVar7 = DAT_193ec6e4 == '\0';
  *(undefined1 *)(unaff_RDI + 9) = DAT_30720d0e;
  if (bVar6 || bVar7) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfdbc FUN_14d7bfdbc body=35 status=ok
// SIG undefined FUN_14d7bfdbc(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bfdbc(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 *puVar4;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  int unaff_retaddr;
  byte bVar3;
  
  *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) - unaff_retaddr;
  puVar4 = unaff_RDI + 1;
  *unaff_RDI = *unaff_RSI;
  *(char *)(puVar4 + *(longlong *)((longlong)unaff_RDI + -0x59) * 2) =
       *(char *)(puVar4 + *(longlong *)((longlong)unaff_RDI + -0x59) * 2) >> 1;
  pbVar1 = (byte *)(param_2 + -0x50);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + (byte)param_2;
  bVar3 = *pbVar1;
  *(undefined1 *)puVar4 = *(undefined1 *)(unaff_RSI + 1);
  if (CARRY1(bVar2,(byte)param_2) || bVar3 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfde1 FUN_14d7bfde1 body=16 status=ok
// SIG undefined FUN_14d7bfde1(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7bfe04) */

void FUN_14d7bfde1(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong unaff_RBP;
  int unaff_EDI;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  longlong *unaff_retaddr;
  
  unaff_retaddr[-1] =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)(in_AF & 1) * 0x10 | 4 |
       (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  *(byte *)(unaff_RBP + -0x2f) = *(byte *)(unaff_RBP + -0x2f) ^ 0x44;
  uRam0000000100000808 = unaff_retaddr[-1];
  *(undefined4 *)((longlong)(param_2 << 0x20 | 0x8000045fU) / (longlong)unaff_EDI & 0xffffffff) =
       0xca2bd09c;
  if (param_1 != 1) {
    plVar3 = (longlong *)*unaff_retaddr;
    *unaff_retaddr = (longlong)plVar3;
    cVar2 = '\n';
    plVar1 = unaff_retaddr;
    do {
      plVar3 = plVar3 + -1;
      plVar1 = plVar1 + -1;
      *plVar1 = *plVar3;
      cVar2 = cVar2 + -1;
    } while ('\0' < cVar2);
    unaff_retaddr[-0xb] = (longlong)unaff_retaddr;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uRam0000000062530ecb = uRam0000000062530ecb >> 1 | (uint)((uRam0000000062530ecb & 1) != 0) << 0x1f
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfdf1 FUN_14d7bfdf1 body=14 status=ok
// SIG undefined FUN_14d7bfdf1(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7bfe04) */

void FUN_14d7bfdf1(longlong param_1,longlong param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  char cVar3;
  uint in_EAX;
  uint uVar4;
  undefined8 **ppuVar5;
  longlong unaff_RBP;
  longlong unaff_RSI;
  int unaff_EDI;
  undefined8 unaff_retaddr;
  undefined8 *apuStackX_8 [4];
  
  *(byte *)(unaff_RBP + -0x2f) = *(byte *)(unaff_RBP + -0x2f) ^ (byte)in_EAX;
  uVar4 = in_EAX & 0x8c090404;
  *(undefined8 *)((ulonglong)uVar4 * 2) = unaff_retaddr;
  *(undefined4 *)
   ((longlong)(param_2 << 0x20 | (ulonglong)CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + '[')) /
    (longlong)unaff_EDI & 0xffffffff) = 0xca2bd09c;
  if (param_1 == 1) {
    puVar1 = (uint *)(unaff_RSI + -0x16bb3814);
    *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  ppuVar5 = apuStackX_8;
  cVar3 = '\n';
  puVar2 = apuStackX_8[0];
  do {
    puVar2 = puVar2 + -1;
    ppuVar5 = ppuVar5 + -1;
    *ppuVar5 = (undefined8 *)*puVar2;
    cVar3 = cVar3 + -1;
  } while ('\0' < cVar3);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7bfe02 FUN_14d7bfe02 body=4 status=ok
// SIG undefined FUN_14d7bfe02(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bfe02(longlong param_1,longlong param_2)

{
  uint *puVar1;
  char cVar2;
  code *pcVar3;
  undefined8 in_RAX;
  longlong unaff_RSI;
  int unaff_EDI;
  char in_CF;
  bool in_OF;
  undefined8 *unaff_retaddr;
  
  if (in_OF) {
    pcVar3 = (code *)swi(0xaf);
    (*pcVar3)();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)
   ((longlong)
    (param_2 << 0x20 |
    CONCAT71((int7)((ulonglong)in_RAX >> 8),((char)in_RAX + '[') - in_CF) & 0xffffffff) /
    (longlong)unaff_EDI & 0xffffffff) = 0xca2bd09c;
  if (param_1 != 1) {
    cVar2 = '\n';
    do {
      unaff_retaddr = unaff_retaddr + -1;
      register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
      *(undefined8 *)register0x00000020 = *unaff_retaddr;
      cVar2 = cVar2 + -1;
    } while ('\0' < cVar2);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  puVar1 = (uint *)(unaff_RSI + -0x16bb3814);
  *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfe06 FUN_14d7bfe06 body=8 status=ok
// SIG undefined FUN_14d7bfe06(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bfe06(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfe2c FUN_14d7bfe2c body=9 status=ok
// SIG undefined FUN_14d7bfe2c(void)

void FUN_14d7bfe2c(void)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 **ppuVar3;
  longlong unaff_RSI;
  undefined8 *apuStackX_8 [4];
  
  *(byte *)(unaff_RSI + 0x4d3f9b7e) = *(byte *)(unaff_RSI + 0x4d3f9b7e) | 0xea;
  ppuVar3 = apuStackX_8;
  cVar2 = '\n';
  puVar1 = apuStackX_8[0];
  do {
    puVar1 = puVar1 + -1;
    ppuVar3 = ppuVar3 + -1;
    *ppuVar3 = (undefined8 *)*puVar1;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7bfe3d FUN_14d7bfe3d body=7 status=ok
// SIG undefined FUN_14d7bfe3d(void)

void FUN_14d7bfe3d(void)

{
  char cVar1;
  undefined8 *unaff_retaddr;
  
  cVar1 = '\n';
  do {
    unaff_retaddr = unaff_retaddr + -1;
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
    *(undefined8 *)register0x00000020 = *unaff_retaddr;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7bfe49 FUN_14d7bfe49 body=11 status=ok
// SIG undefined FUN_14d7bfe49(void)

/* WARNING: Control flow encountered bad instruction data */

uint FUN_14d7bfe49(void)

{
  char cVar1;
  char cVar2;
  int in_EAX;
  char unaff_BL;
  byte bVar3;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RDI;
  
  bVar3 = unaff_BL + unaff_BH;
  if (bVar3 != 0 && SCARRY1(unaff_BL,unaff_BH) == (char)bVar3 < '\0') {
    cVar2 = (char)((uint)(in_EAX + 0x30230e4d) >> 8);
    cVar1 = *unaff_RDI;
    *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,bVar3 | bRam0000000000c7fff7)) =
         *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,bVar3 | bRam0000000000c7fff7)) >> 1;
    return CONCAT22(cVar2 >> 7,CONCAT11(cVar2 + cVar1,(char)(in_EAX + 0x30230e4d))) | 0x4a;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7bfe55 FUN_14d7bfe55 body=3 status=ok
// SIG undefined FUN_14d7bfe55(void)

void FUN_14d7bfe55(void)

{
  byte unaff_BL;
  byte bVar1;
  undefined7 unaff_00000019;
  char *unaff_RDI;
  char in_CF;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  
  bVar1 = unaff_BL | bRam0000000000c7fff7;
  *(ulonglong *)(CONCAT71((int7)((ulonglong)&stack0x00000000 >> 8),*unaff_RDI + in_CF) + -8) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((char)bVar1 < '\0') * 0x80 |
       (ulonglong)(bVar1 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
       (ulonglong)((POPCOUNT(bVar1) & 1U) == 0) * 4 | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  *(byte *)CONCAT71(unaff_00000019,bVar1) = *(byte *)CONCAT71(unaff_00000019,bVar1) >> 1;
  return;
}



// FUNCTION 14d7bfe59 FUN_14d7bfe59 body=2 status=ok
// SIG undefined FUN_14d7bfe59(void)

void FUN_14d7bfe59(void)

{
  byte unaff_BL;
  undefined7 unaff_00000019;
  
  *(byte *)CONCAT71(unaff_00000019,unaff_BL | bRam0000000000c7fff7) =
       *(byte *)CONCAT71(unaff_00000019,unaff_BL | bRam0000000000c7fff7) >> 1;
  return;
}



// FUNCTION 14d7bfe5d FUN_14d7bfe5d body=17 status=ok
// SIG undefined FUN_14d7bfe5d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7bfe5d(longlong param_1,uint param_2)

{
  uint *puVar1;
  char cVar2;
  ulonglong in_RAX;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  undefined8 *unaff_retaddr;
  
  *unaff_RDI = *unaff_RSI;
  *(undefined4 *)
   ((longlong)((ulonglong)param_2 << 0x20 | in_RAX & 0xffffffff) / (longlong)((int)unaff_RDI + 4) &
   0xffffffff) = 0xca2bd09c;
  if (param_1 != 1) {
    cVar2 = '\n';
    do {
      unaff_retaddr = unaff_retaddr + -1;
      register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
      *(undefined8 *)register0x00000020 = *unaff_retaddr;
      cVar2 = cVar2 + -1;
    } while ('\0' < cVar2);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  puVar1 = unaff_RSI + -0x5aece04;
  *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


