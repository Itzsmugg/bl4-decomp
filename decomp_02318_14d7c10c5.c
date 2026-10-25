// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14d7c10c5 FUN_14d7c10c5 body=27 status=ok
// SIG undefined FUN_14d7c10c5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c10c5(undefined8 param_1,undefined2 param_2)

{
  byte *pbVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  
  out(param_2,in_EAX);
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,in_EAX) + -0x3c);
  *pbVar1 = *pbVar1 >> 6 | *pbVar1 << 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c10e1 FUN_14d7c10e1 body=7 status=ok
// SIG undefined FUN_14d7c10e1(void)

void FUN_14d7c10e1(byte *param_1)

{
  byte in_AL;
  
  *param_1 = *param_1 & in_AL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7c10e9 FUN_14d7c10e9 body=4 status=ok
// SIG undefined FUN_14d7c10e9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c10e9(void)

{
  longlong in_RAX;
  
  *(undefined1 *)(in_RAX + -4) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1105 FUN_14d7c1105 body=4 status=ok
// SIG undefined FUN_14d7c1105(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1105(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1115 FUN_14d7c1115 body=4 status=ok
// SIG undefined FUN_14d7c1115(void)

int FUN_14d7c1115(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  out(*unaff_RSI,param_2);
  return (int)&stack0x00000000 + 0x2ec91d;
}



// FUNCTION 14d7c112d FUN_14d7c112d body=27 status=ok
// SIG undefined FUN_14d7c112d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c112d(ulonglong param_1,ulonglong param_2)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  code *pcVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  char *pcVar13;
  char cVar14;
  undefined2 uVar15;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  uint *unaff_RDI;
  bool bVar16;
  unkbyte10 in_ST0;
  float10 in_ST1;
  undefined1 unaff_XMM15 [16];
  byte *pbVar12;
  
  for (; param_1 != 0; param_1 = param_1 - 1) {
    unaff_RSI = unaff_RSI + 1;
  }
  *(unkbyte10 *)(param_2 + 0x24) = in_ST0;
  pbVar5 = (byte *)(unaff_RSI + 4);
  bVar16 = false;
  *pbVar5 = *pbVar5 | (byte)param_2;
  vminps_avx(unaff_XMM15,
             *(undefined1 (*) [16])(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x44));
  pcVar6 = (code *)swi(0x8e);
  lVar11 = (*pcVar6)();
  iVar9 = (int)lVar11;
  uVar15 = (undefined2)param_2;
  if (bVar16) {
    out(*(undefined4 *)pbVar5,uVar15);
    out(uVar15,iVar9);
    pbVar5 = (byte *)(lVar11 + -0x3c);
    *pbVar5 = *pbVar5 >> 6 | *pbVar5 << 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(0xe1,iVar9);
  puVar1 = (uint *)(pbVar5 + param_1 * 8);
  uVar4 = *puVar1;
  *puVar1 = *puVar1 - 0x1a;
  uVar10 = (iVar9 + 0x403de677) - (uint)(uVar4 < 0x1a);
  pbVar12 = (byte *)(ulonglong)uVar10;
  bVar8 = (byte)uVar10;
  if ((SBORROW4(iVar9,-0x403de677) != SBORROW4(iVar9 + 0x403de677,(uint)(uVar4 < 0x1a))) !=
      (int)uVar10 < 0) {
    bVar3 = *pbVar12;
    *pbVar12 = *pbVar12 + bVar8;
    bVar7 = (byte)param_1 & 7;
    bRam00000001ba00706d = bRam00000001ba00706d << bVar7 | bRam00000001ba00706d >> 8 - bVar7;
    bVar16 = (param_1 & 0x1f) != 0;
    pcVar13 = (char *)(param_2 & 0xffffffff);
    cRam4400f09151c2cedd = (char)pcVar13;
    *(char *)((ulonglong)uVar10 + 0x1b81f86b) =
         (*(char *)((ulonglong)uVar10 + 0x1b81f86b) - unaff_BH) -
         (!bVar16 && CARRY1(bVar3,bVar8) || bVar16 && (bRam00000001ba00706d & 1) != 0);
    *pcVar13 = *pcVar13 + (char)pcVar13;
    return;
  }
  *unaff_RDI = uVar10;
  pbVar12 = (byte *)(ulonglong)
                    CONCAT22((short)(uVar10 >> 0x10),
                             CONCAT11((char)(uVar10 >> 8) +
                                      *(char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))
                                                + 0x3b + (longlong)pbVar5 * 2),bVar8));
  out(*pbVar5,uVar15);
  lVar11 = 0x22a0061;
  *pbVar12 = bVar8;
  cRamffffffffac6f83cc = unaff_BH;
  *(longlong *)((longlong)unaff_RDI + 0x76) = (longlong)ROUND(in_ST1);
  do {
    pcVar13 = (char *)(lVar11 + -0x4e);
    cVar2 = *pcVar13;
    cVar14 = (char)lVar11;
    *pcVar13 = *pcVar13 + cVar14;
    lVar11 = CONCAT71((int7)((ulonglong)lVar11 >> 8),0xca);
  } while (!SCARRY1(cVar2,cVar14));
  pbVar12 = pbVar12 + -0x2293fbaf;
  *pbVar12 = *pbVar12;
  in(99);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c114a FUN_14d7c114a body=2 status=ok
// SIG undefined FUN_14d7c114a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c114a(undefined8 param_1,short param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 *in_RAX;
  char cVar4;
  longlong lVar5;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *unaff_RSI;
  byte in_CF;
  float10 in_ST0;
  
  LOCK();
  *(char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x3b736412) =
       (char)((ulonglong)param_1 >> 8);
  UNLOCK();
  out(*unaff_RSI,(param_2 - (short)in_RAX) - (ushort)in_CF);
  lVar5 = 0x22a0061;
  *in_RAX = (char)in_RAX;
  lRam0000000069224cee = (longlong)ROUND(in_ST0);
  uRamffffffffac6f83cc = unaff_BH;
  do {
    pcVar1 = (char *)(lVar5 + -0x4e);
    cVar3 = *pcVar1;
    cVar4 = (char)lVar5;
    *pcVar1 = *pcVar1 + cVar4;
    lVar5 = CONCAT71((int7)((ulonglong)lVar5 >> 8),0xca);
  } while (!SCARRY1(cVar3,cVar4));
  puVar2 = (undefined1 *)(((ulonglong)in_RAX & 0xffffffff) - 0x2293fbaf);
  *puVar2 = *puVar2;
  in(99);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c114e FUN_14d7c114e body=5 status=ok
// SIG undefined FUN_14d7c114e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c114e(undefined8 param_1,undefined2 param_2)

{
  char *pcVar1;
  char cVar2;
  undefined8 in_RAX;
  undefined1 *puVar3;
  char cVar4;
  longlong lVar5;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *unaff_RSI;
  undefined4 *unaff_RDI;
  float10 in_ST0;
  
  *unaff_RDI = (int)in_RAX;
  puVar3 = (undefined1 *)
           CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                    CONCAT11((char)((ulonglong)in_RAX >> 8) +
                             *(char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x3b +
                                      (longlong)unaff_RSI * 2),(char)in_RAX));
  out(*unaff_RSI,param_2);
  lVar5 = 0x22a0061;
  *puVar3 = (char)in_RAX;
  uRamffffffffac6f83cc = unaff_BH;
  *(longlong *)((longlong)unaff_RDI + 0x76) = (longlong)ROUND(in_ST0);
  do {
    pcVar1 = (char *)(lVar5 + -0x4e);
    cVar2 = *pcVar1;
    cVar4 = (char)lVar5;
    *pcVar1 = *pcVar1 + cVar4;
    lVar5 = CONCAT71((int7)((ulonglong)lVar5 >> 8),0xca);
  } while (!SCARRY1(cVar2,cVar4));
  puVar3 = (undefined1 *)(((ulonglong)puVar3 & 0xffffffff) - 0x2293fbaf);
  *puVar3 = *puVar3;
  in(99);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1156 FUN_14d7c1156 body=3 status=ok
// SIG undefined FUN_14d7c1156(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1156(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1175 FUN_14d7c1175 body=43 status=ok
// SIG undefined FUN_14d7c1175(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c1157) */

void FUN_14d7c1175(undefined8 param_1)

{
  char *pcVar1;
  char cVar2;
  ulonglong in_RAX;
  undefined1 in_OF;
  
  while (!(bool)in_OF) {
    pcVar1 = (char *)(CONCAT71((int7)((ulonglong)param_1 >> 8),0xca) + -0x4e);
    cVar2 = *pcVar1;
    *pcVar1 = *pcVar1 + -0x36;
    in_OF = SCARRY1(cVar2,-0x36);
  }
  pcVar1 = (char *)((in_RAX & 0xffffffff) - 0x2293fbaf);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  in(99);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c11a1 FUN_14d7c11a1 body=4 status=ok
// SIG undefined FUN_14d7c11a1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c11a1(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char unaff_BL;
  
  pcVar1 = (char *)(param_2 * 5 + -0x5dc90727);
  *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c11b7 FUN_14d7c11b7 body=7 status=ok
// SIG undefined FUN_14d7c11b7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c11b7(void)

{
  undefined1 in_AL;
  undefined7 in_register_00000001;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  
  *(int *)CONCAT71(unaff_00000019,unaff_BL) = *(int *)CONCAT71(unaff_00000019,unaff_BL) + 0x729ed942
  ;
  *(uint *)CONCAT71(in_register_00000001,in_AL) =
       *(int *)CONCAT71(in_register_00000001,in_AL) << 1 |
       (uint)(*(int *)CONCAT71(in_register_00000001,in_AL) < 0);
  *(char *)(unaff_RBP + 0x44a318cf) = *(char *)(unaff_RBP + 0x44a318cf) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c11c1 FUN_14d7c11c1 body=2 status=ok
// SIG undefined FUN_14d7c11c1(void)

void FUN_14d7c11c1(void)

{
  return;
}



// FUNCTION 14d7c11ce FUN_14d7c11ce body=32 status=ok
// SIG undefined FUN_14d7c11ce(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c115d) overlaps instruction at (ram,0x00014d7c115c)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7c1157) */

void FUN_14d7c11ce(longlong param_1,char *param_2)

{
  char *pcVar1;
  uint *puVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 *in_RAX;
  longlong lVar5;
  char cVar7;
  longlong lVar6;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  undefined8 unaff_RBX;
  undefined1 *unaff_RDI;
  float10 in_ST0;
  
  uVar10 = (undefined2)((ulonglong)param_2 >> 0x10);
  uVar9 = (undefined1)((ulonglong)param_2 >> 8);
  uVar8 = SUB81(param_2,0);
  puVar2 = (uint *)(param_1 + -0x3c);
  uVar3 = *puVar2;
  *puVar2 = *puVar2 + (uint)in_RAX;
  if (CARRY4(uVar3,(uint)in_RAX)) {
    cVar7 = (char)((ulonglong)param_1 >> 8);
    *param_2 = *param_2 + cVar7;
    lVar5 = CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                     CONCAT11(cVar7 + *(char *)(param_1 + -0x56ac2343),(char)param_1));
    *in_RAX = (char)in_RAX;
    *(char *)(lVar5 + -0x55ba7c95) = (char)((ulonglong)unaff_RBX >> 8);
    *(longlong *)(unaff_RDI + 0x72) = (longlong)ROUND(in_ST0);
    do {
      lVar6 = lVar5;
      pcVar1 = (char *)(lVar6 + -0x4e);
      cVar7 = *pcVar1;
      *pcVar1 = *pcVar1 + (char)lVar6;
      lVar5 = CONCAT71((int7)((ulonglong)lVar6 >> 8),0xca);
    } while (!SCARRY1(cVar7,(char)lVar6));
    pcVar1 = (char *)(((ulonglong)in_RAX & 0xffffffff) - 0x2293fbaf);
    *pcVar1 = *pcVar1 + (char)((ulonglong)lVar6 >> 8);
    in(99);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar4 = (code *)swi(0x34);
  lVar5 = (*pcVar4)();
  LOCK();
  uVar3 = *(uint *)(lVar5 + -0x1aff39a2);
  *(uint *)(lVar5 + -0x1aff39a2) = CONCAT22(uVar10,CONCAT11(uVar9,uVar8));
  UNLOCK();
  uVar8 = in((short)uVar3);
  *unaff_RDI = uVar8;
  *(uint *)(unaff_RDI + -0x16c83f88) = *(uint *)(unaff_RDI + -0x16c83f88) | uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c11ef FUN_14d7c11ef body=3 status=ok
// SIG undefined FUN_14d7c11ef(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c11ef(void)

{
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1204 FUN_14d7c1204 body=4 status=ok
// SIG undefined FUN_14d7c1204(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1204(longlong param_1)

{
  if (param_1 == 1) {
    FUN_14d7c1229();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1208 FUN_14d7c1208 body=15 status=ok
// SIG undefined FUN_14d7c1208(void)

void FUN_14d7c1208(void)

{
  FUN_14d7c1229();
  return;
}



// FUNCTION 14d7c121a FUN_14d7c121a body=6 status=ok
// SIG undefined FUN_14d7c121a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c121a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1229 FUN_14d7c1229 body=102 status=ok
// SIG undefined FUN_14d7c1229(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c12ac) overlaps instruction at (ram,0x00014d7c12aa)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7c12e5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14d7c1229(byte *param_1,undefined8 param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined2 in_AX;
  byte bVar10;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined2 uVar11;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined8 *unaff_RBP;
  byte *pbVar15;
  longlong unaff_RSI;
  char unaff_R13B;
  char unaff_R14B;
  longlong unaff_R15;
  undefined2 in_DS;
  bool bVar16;
  undefined2 in_FPUControlWord;
  byte in_stack_28499b32;
  undefined8 uStack_10;
  char *pcVar12;
  
  uVar5 = _DAT_9f00fdb07e6abc94;
  puVar13 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar3 = '\x04';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar13 = puVar13 + -1;
    *puVar13 = *unaff_RBP;
    cVar3 = cVar3 + -1;
  } while ('\0' < cVar3);
  puVar14 = &stack0xffffffffffffeb22;
  bVar6 = (byte)((ulonglong)param_2 >> 8);
  uVar11 = CONCAT11(bVar6 * '\x02',(char)param_2);
  pcVar12 = (char *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),uVar11);
  piVar1 = (int *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x4411d94b);
  *piVar1 = (*piVar1 + 0x47) - (uint)CARRY1(bVar6,bVar6);
  bVar6 = (byte)uVar5;
  bVar10 = (byte)((uint)uVar5 >> 8);
  uVar4 = CONCAT22((short)((uint)uVar5 >> 0x10),CONCAT11(bVar10 + bVar6,bVar6));
  uVar8 = (uint)CARRY1(bVar10,bVar6);
  uVar2 = uVar4 + 0xf11286e8;
  iVar7 = uVar2 - uVar8;
  pbVar15 = (byte *)(ulonglong)
                    (((int)&stack0xfffffffffffffff8 + -0x10666bb5) -
                    (uint)CARRY1(in_stack_28499b32,(byte)((ushort)in_AX >> 8)));
  if (uVar4 < 0xeed7918 || uVar2 < uVar8) {
    pbVar15 = (byte *)((ulonglong)&stack0xffffffffffffeb22 & 0xffffffff);
  }
  bVar6 = (byte)iVar7 & *param_1;
  uVar8 = CONCAT31((int3)((uint)iVar7 >> 8),bVar6);
  bVar16 = bVar6 == 0;
  if ((char)bVar6 < '\0') {
    *pbVar15 = *pbVar15 | unaff_BH;
    puVar14 = (undefined1 *)((ulonglong)uVar8 + 8);
    uVar8 = in(uVar11);
    if (*pbVar15 == 0) {
      *(undefined2 *)(unaff_RSI + -0x71) = in_FPUControlWord;
      uVar9 = (ulonglong)_DAT_6142a7457dbf055b;
      *pcVar12 = *pcVar12 + unaff_R13B;
      return uVar9;
    }
    uVar8 = uVar8 | 0xb9d480d5;
    bVar16 = uVar8 == 0;
  }
  if (!bVar16) {
    return (ulonglong)uVar8;
  }
  *(char **)(puVar14 + -8) = pcVar12;
  *(char *)(unaff_R15 + -0x6c) = *(char *)(unaff_R15 + -0x6c) - unaff_R14B;
  *(undefined2 *)((ulonglong)uVar8 - 0x712f6d3e) = in_DS;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c127b FUN_14d7c127b body=4 status=ok
// SIG undefined FUN_14d7c127b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c12ac) overlaps instruction at (ram,0x00014d7c12aa)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7c12e5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14d7c127b(float *param_1,undefined8 param_2)

{
  char cVar1;
  code *pcVar3;
  byte bVar4;
  byte bVar11;
  int iVar5;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined2 uVar12;
  char *pcVar13;
  longlong unaff_RBX;
  uint uVar14;
  undefined8 *puVar15;
  byte *pbVar16;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  char unaff_R13B;
  char unaff_R14B;
  longlong unaff_R15;
  undefined2 in_DS;
  bool bVar17;
  undefined2 in_FPUControlWord;
  float10 in_ST0;
  undefined8 *unaff_retaddr;
  char cVar2;
  uint uVar6;
  
  pcVar3 = (code *)swi(0xb2);
  uVar10 = (*pcVar3)();
  puVar15 = unaff_retaddr + 1;
  cVar1 = *(char *)param_1;
  *(char *)param_1 = *(char *)param_1 + (char)unaff_RBX;
  cVar2 = *(char *)param_1;
  if (SCARRY1(cVar1,(char)unaff_RBX) == cVar2 < '\0') {
    *unaff_retaddr = FUN_14d7c1288;
    uVar7 = func_0xe329da0e();
    uVar8 = (uint)param_2;
    pcVar13 = (char *)(ulonglong)(uVar7 | *(uint *)(unaff_RBX + -0x77));
    out(0x45,uVar8);
  }
  else {
    *param_1 = (float)in_ST0;
    if (cVar2 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar14 = *(int *)(unaff_RSI + 0x10) * 0x56;
    puVar15 = (undefined8 *)(ulonglong)uVar14;
    bVar4 = (byte)((ulonglong)param_2 >> 8);
    uVar12 = CONCAT11(bVar4 * '\x02',(char)param_2);
    pcVar13 = (char *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),uVar12);
    *(int *)(unaff_RBX + 0x4411d94b) =
         (*(int *)(unaff_RBX + 0x4411d94b) + 0x47) - (uint)CARRY1(bVar4,bVar4);
    bVar4 = (byte)uVar10;
    bVar11 = (byte)((ulonglong)uVar10 >> 8);
    uVar8 = (uint)CARRY1(bVar11,bVar4);
    uVar6 = (uint)CONCAT62((int6)((ulonglong)uVar10 >> 0x10),CONCAT11(bVar11 + bVar4,bVar4));
    uVar7 = uVar6 + 0xf11286e8;
    iVar5 = uVar7 - uVar8;
    pbVar16 = (byte *)(unaff_RBP & 0xffffffff);
    if (uVar6 < 0xeed7918 || uVar7 < uVar8) {
      pbVar16 = (byte *)(ulonglong)uVar14;
    }
    bVar4 = (byte)iVar5 & bRam00000000181dc400;
    uVar8 = CONCAT31((int3)((uint)iVar5 >> 8),bVar4);
    bVar17 = bVar4 == 0;
    if (-1 < (char)bVar4) goto LAB_14d7c12a3;
    *pbVar16 = *pbVar16 | (byte)((ulonglong)unaff_RBX >> 8);
    puVar15 = (undefined8 *)((ulonglong)uVar8 + 8);
    uVar8 = in(uVar12);
    if (*pbVar16 == 0) {
      *(undefined2 *)(unaff_RSI + -0x71) = in_FPUControlWord;
      uVar9 = (ulonglong)_DAT_6142a7457dbf055b;
      *pcVar13 = *pcVar13 + unaff_R13B;
      return uVar9;
    }
  }
  uVar8 = uVar8 | 0xb9d480d5;
  bVar17 = uVar8 == 0;
LAB_14d7c12a3:
  if (bVar17) {
    *(char **)((longlong)puVar15 + -8) = pcVar13;
    *(char *)(unaff_R15 + -0x6c) = *(char *)(unaff_R15 + -0x6c) - unaff_R14B;
    *(undefined2 *)((ulonglong)uVar8 - 0x712f6d3e) = in_DS;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return (ulonglong)uVar8;
}



// FUNCTION 14d7c1288 FUN_14d7c1288 body=13 status=ok
// SIG undefined FUN_14d7c1288(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c12ac) overlaps instruction at (ram,0x00014d7c12aa)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7c12e5) */

void FUN_14d7c1288(undefined8 param_1,uint param_2)

{
  char unaff_R14B;
  longlong unaff_R15;
  undefined2 in_DS;
  
  out(0x45,param_2);
  if ((param_2 | 0xb9d480d5) != 0) {
    return;
  }
  *(char *)(unaff_R15 + -0x6c) = *(char *)(unaff_R15 + -0x6c) - unaff_R14B;
  uRamffffffff8ed092c2 = in_DS;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c12c5 FUN_14d7c12c5 body=4 status=ok
// SIG undefined FUN_14d7c12c5(void)

void FUN_14d7c12c5(void)

{
  return;
}



// FUNCTION 14d7c12c9 FUN_14d7c12c9 body=3 status=ok
// SIG undefined FUN_14d7c12c9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c12c9(void)

{
  bool in_OF;
  
  if (in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c12d9 FUN_14d7c12d9 body=25 status=ok
// SIG undefined FUN_14d7c12d9(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c12ac) overlaps instruction at (ram,0x00014d7c12aa)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7c12e5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_14d7c12d9(uint param_1,char *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_EAX;
  byte *pbVar3;
  byte unaff_BL;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  char unaff_R13B;
  char unaff_R14B;
  undefined7 unaff_000000b1;
  longlong unaff_R15;
  undefined2 in_DS;
  undefined2 in_FPUControlWord;
  
  pbVar3 = (byte *)(ulonglong)param_1;
  bVar1 = *pbVar3;
  *pbVar3 = *pbVar3 >> 1;
  if (-1 < (char)*pbVar3) {
    out(*unaff_RSI,
        CONCAT11((char)((ulonglong)param_2 >> 8) + *(char *)(unaff_RBP + 0x30396100) +
                 (param_1 < 0x6a3859c1),(char)param_2));
    *(int *)(unaff_RDI + 4) = (int)(short)((short)param_1 + -0x59c1);
    pbVar3 = (byte *)((ulonglong)
                      CONCAT22((short)((uint)in_EAX >> 0x10),
                               CONCAT11((char)((uint)in_EAX >> 8) * '\x02',(byte)in_EAX | bVar1)) -
                     0x53);
    *(char *)(CONCAT71(unaff_000000b1,unaff_R14B) + 0x72) =
         (char)param_2 + -0x80 +
         (CARRY1(unaff_BL,*pbVar3) || CARRY1(unaff_BL + *pbVar3,(uint)unaff_RBP < 0x8811f7fb));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = in((short)param_2);
  if (*pbVar3 != 0) {
    if ((uVar2 | 0xb9d480d5) != 0) {
      return uVar2 | 0xb9d480d5;
    }
    *(char *)(unaff_R15 + -0x6c) = *(char *)(unaff_R15 + -0x6c) - unaff_R14B;
    uRamffffffff8ed092c2 = in_DS;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)((longlong)unaff_RSI + -0x71) = in_FPUControlWord;
  uVar2 = _DAT_6142a7457dbf055b;
  *param_2 = *param_2 + unaff_R13B;
  return uVar2;
}



// FUNCTION 14d7c12f7 FUN_14d7c12f7 body=8 status=ok
// SIG undefined FUN_14d7c12f7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c12f7(longlong param_1,undefined2 param_2)

{
  uint uVar1;
  byte unaff_BL;
  longlong unaff_R14;
  
  uVar1 = in(param_2);
  *(char *)(unaff_R14 + 0x72) =
       (char)param_2 + -0x80 +
       (CARRY1(unaff_BL,*(byte *)(param_1 + -0x53)) ||
       CARRY1(unaff_BL + *(byte *)(param_1 + -0x53),uVar1 < 0x8811f7fb));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c12ff FUN_14d7c12ff body=17 status=ok
// SIG undefined FUN_14d7c12ff(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c12ff(longlong param_1)

{
  char in_AL;
  byte unaff_BL;
  longlong unaff_R14;
  byte in_CF;
  
  *(char *)(unaff_R14 + 0x72) =
       in_AL + -0x80 +
       (CARRY1(unaff_BL,*(byte *)(param_1 + -0x53)) ||
       CARRY1(unaff_BL + *(byte *)(param_1 + -0x53),in_CF));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c131d FUN_14d7c131d body=3 status=ok
// SIG undefined FUN_14d7c131d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c131d(char param_1)

{
  char in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RBX;
  longlong unaff_RBP;
  char *unaff_RDI;
  
  *(char *)(unaff_RBX + 0x4e) = *(char *)(unaff_RBX + 0x4e) + param_1;
  *(uint *)CONCAT71(in_register_00000001,in_AL) =
       *(int *)CONCAT71(in_register_00000001,in_AL) << 0x1c |
       *(uint *)CONCAT71(in_register_00000001,in_AL) >> 4;
  if (SCARRY1(param_1,*unaff_RDI) !=
      SCARRY1(param_1 + *unaff_RDI,(*(uint *)CONCAT71(in_register_00000001,in_AL) & 1) != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = '\0';
  *(char *)(unaff_RBP + 0x72d707ef) = *(char *)(unaff_RBP + 0x72d707ef) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1326 FUN_14d7c1326 body=2 status=ok
// SIG undefined FUN_14d7c1326(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1326(void)

{
  char in_AL;
  longlong unaff_RBP;
  undefined1 *unaff_RDI;
  bool in_OF;
  
  if (in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = 0;
  *(char *)(unaff_RBP + 0x72d707ef) = *(char *)(unaff_RBP + 0x72d707ef) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c132a FUN_14d7c132a body=4 status=ok
// SIG undefined FUN_14d7c132a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c132a(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char *pcVar2;
  char cVar3;
  uint in_EAX;
  longlong lVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  undefined6 uVar7;
  int unaff_EBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  
  uVar7 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar6 = (undefined2)param_2;
  out(0x66,(char)in_EAX);
  if (unaff_EBX == 0) {
    puVar5 = (undefined4 *)(ulonglong)in_EAX;
    lVar4 = func_0x0001a68250c3();
    *(char *)(lVar4 + -0x7c) = *(char *)(lVar4 + -0x7c) >> 1;
    pcVar2 = unaff_RDI + 4;
    *pcVar2 = *pcVar2 + (char)*puVar5;
    lVar4 = CONCAT62(uVar7,uVar6);
    *(undefined2 *)(lVar4 + -0x19e17f28) = in_FPUControlWord;
    *(undefined2 *)(lVar4 + -0x19e17f24) = in_FPUStatusWord;
    *(undefined2 *)(lVar4 + -0x19e17f20) = in_FPUTagWord;
    *(undefined8 *)(lVar4 + -0x19e17f14) = in_FPUDataPointer;
    *(undefined8 *)(lVar4 + -0x19e17f1c) = in_FPUInstructionPointer;
    *(undefined2 *)(lVar4 + -0x19e17f16) = in_FPULastInstructionOpcode;
    cVar3 = in(0xfb);
    LOCK();
    *(char *)(unaff_RSI + 0x70) = (char)puVar5;
    UNLOCK();
    out(uVar6,cVar3);
    *pcVar2 = '\0';
    *(char *)(unaff_RBP + 0x72d707ef) = *(char *)(unaff_RBP + 0x72d707ef) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = in(uVar6);
  *unaff_RDI = uVar1;
  return;
}



// FUNCTION 14d7c132e FUN_14d7c132e body=20 status=ok
// SIG undefined FUN_14d7c132e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c132e(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char *pcVar2;
  char cVar3;
  uint in_EAX;
  longlong lVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  undefined6 uVar7;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  bool in_ZF;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  
  uVar7 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar6 = (undefined2)param_2;
  if (in_ZF) {
    puVar5 = (undefined4 *)(ulonglong)in_EAX;
    lVar4 = func_0x0001a68250c3();
    *(char *)(lVar4 + -0x7c) = *(char *)(lVar4 + -0x7c) >> 1;
    pcVar2 = unaff_RDI + 4;
    *pcVar2 = *pcVar2 + (char)*puVar5;
    lVar4 = CONCAT62(uVar7,uVar6);
    *(undefined2 *)(lVar4 + -0x19e17f28) = in_FPUControlWord;
    *(undefined2 *)(lVar4 + -0x19e17f24) = in_FPUStatusWord;
    *(undefined2 *)(lVar4 + -0x19e17f20) = in_FPUTagWord;
    *(undefined8 *)(lVar4 + -0x19e17f14) = in_FPUDataPointer;
    *(undefined8 *)(lVar4 + -0x19e17f1c) = in_FPUInstructionPointer;
    *(undefined2 *)(lVar4 + -0x19e17f16) = in_FPULastInstructionOpcode;
    cVar3 = in(0xfb);
    LOCK();
    *(char *)(unaff_RSI + 0x70) = (char)puVar5;
    UNLOCK();
    out(uVar6,cVar3);
    *pcVar2 = '\0';
    *(char *)(unaff_RBP + 0x72d707ef) = *(char *)(unaff_RBP + 0x72d707ef) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = in(uVar6);
  *unaff_RDI = uVar1;
  return;
}



// FUNCTION 14d7c1347 FUN_14d7c1347 body=16 status=ok
// SIG undefined FUN_14d7c1347(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1347(char param_1,undefined2 param_2)

{
  char cVar1;
  longlong unaff_RBP;
  char *unaff_RSI;
  undefined1 *unaff_RDI;
  char in_CF;
  
  *unaff_RSI = (*unaff_RSI + '\x1a') - in_CF;
  cVar1 = in(0xfb);
  LOCK();
  unaff_RSI[0x70] = param_1;
  UNLOCK();
  out(param_2,cVar1);
  *unaff_RDI = 0;
  *(char *)(unaff_RBP + 0x72d707ef) = *(char *)(unaff_RBP + 0x72d707ef) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1358 FUN_14d7c1358 body=2 status=ok
// SIG undefined FUN_14d7c1358(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1358(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c136c FUN_14d7c136c body=4 status=ok
// SIG undefined FUN_14d7c136c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c136c(void)

{
  char *pcVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  char in_CF;
  
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + -0x22);
  *pcVar1 = (*pcVar1 - (char)in_EAX) - in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1370 FUN_14d7c1370 body=6 status=ok
// SIG undefined FUN_14d7c1370(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1370(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1381 FUN_14d7c1381 body=14 status=ok
// SIG undefined FUN_14d7c1381(void)

undefined1 FUN_14d7c1381(byte param_1,undefined2 param_2)

{
  undefined1 uVar1;
  
  uVar1 = in(param_2);
  DAT_1b980f2d6 = DAT_1b980f2d6 ^ param_1;
  return uVar1;
}



// FUNCTION 14d7c1392 FUN_14d7c1392 body=37 status=ok
// SIG undefined FUN_14d7c1392(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1392(void)

{
  char *pcVar1;
  uint in_EAX;
  uint unaff_EBP;
  undefined1 *unaff_RSI;
  ulonglong unaff_RDI;
  
  DAT_42000a66dd55f254 = (undefined1)(unaff_RDI & 0xffffffff);
  pcVar1 = (char *)(((ulonglong)
                     (uint)(int)(short)CONCAT31((int3)((uint)((int)CONCAT71((int7)((unaff_RDI &
                                                                                   0xffffffff) >> 8)
                                                                            ,0xa2) + 0x34df45e9) >>
                                                      8),*unaff_RSI) - 0x1f) +
                   (ulonglong)(unaff_EBP & *(uint *)((ulonglong)in_EAX - 0x2c)));
  *pcVar1 = *pcVar1 + -0x35;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c13c1 FUN_14d7c13c1 body=5 status=ok
// SIG undefined FUN_14d7c13c1(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: This function may have set the stack pointer */

void FUN_14d7c13c1(undefined8 param_1,undefined2 param_2,undefined1 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  longlong unaff_RDI;
  char cVar4;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  float10 in_ST0;
  
  lVar3 = 0x9ca9bc95;
  in(param_2);
  out(*unaff_RSI,param_2);
  cVar4 = '\0';
  *(uint *)(unaff_RDI + 0x1a) = *(uint *)(unaff_RDI + 0x1a) & 0x9f0b6b71;
  *(undefined1 *)(unaff_RBP + -0x75) = param_3;
  uRam00000000ffffffd1 = 0x14d7c13e1;
  uVar1 = func_0x0001059db9bd();
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL * '\x02')) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL * '\x02')) + unaff_BH + cVar4;
  *(double *)(unaff_RBP + -1) = (double)in_ST0;
  *(char *)(lVar3 + 0x14ba2af3) = *(char *)(lVar3 + 0x14ba2af3) + (char)uVar1;
  uVar2 = (ulonglong)(uVar1 & 0xffffff6d);
  *(undefined2 *)(uVar2 - 0x71) = in_FPUControlWord;
  *(undefined2 *)(uVar2 - 0x6d) = in_FPUStatusWord;
  *(undefined2 *)(uVar2 - 0x69) = in_FPUTagWord;
  *(undefined8 *)(uVar2 - 0x5d) = in_FPUDataPointer;
  *(undefined8 *)(uVar2 - 0x65) = 0x14d7c13e4;
  *(undefined2 *)(uVar2 - 0x5f) = in_FPULastInstructionOpcode;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c13ca FUN_14d7c13ca body=18 status=ok
// SIG undefined FUN_14d7c13ca(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c13ca(undefined8 param_1)

{
  char *pcVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint unaff_EBX;
  uint uVar6;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char cVar7;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  float10 fVar8;
  
  uVar5 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar4 = (undefined4)param_1;
  fVar8 = *(float10 *)(unaff_RSI + -0x7f);
  cVar7 = '\0';
  uVar6 = unaff_EBX | *(uint *)(unaff_RDI + -0x74ba77b2);
  uVar2 = func_0x0001059db9bd();
  *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + (char)(uVar6 >> 8) + cVar7;
  *(double *)(unaff_RBP + -1) = (double)fVar8;
  pcVar1 = (char *)(CONCAT44(uVar5,uVar4) + 0x14ba2af3);
  *pcVar1 = *pcVar1 + (char)uVar2;
  uVar3 = (ulonglong)(uVar2 & 0xffffff6d);
  *(undefined2 *)(uVar3 - 0x71) = in_FPUControlWord;
  *(undefined2 *)(uVar3 - 0x6d) = in_FPUStatusWord;
  *(undefined2 *)(uVar3 - 0x69) = in_FPUTagWord;
  *(undefined8 *)(uVar3 - 0x5d) = in_FPUDataPointer;
  *(undefined8 *)(uVar3 - 0x65) = 0x14d7c13e4;
  *(undefined2 *)(uVar3 - 0x5f) = in_FPULastInstructionOpcode;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c13df FUN_14d7c13df body=38 status=ok
// SIG undefined FUN_14d7c13df(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c13df(longlong param_1,longlong param_2)

{
  longlong in_RAX;
  ulonglong uVar1;
  uint unaff_EDI;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  
  *(uint *)(in_RAX + -0x22ff84f0) = *(uint *)(in_RAX + -0x22ff84f0) & unaff_EDI;
  *(int *)(param_2 + -0x4c6849ff) = *(int *)(param_2 + -0x4c6849ff) + 1;
  *(char *)(param_1 + 0x14ba2af3) = *(char *)(param_1 + 0x14ba2af3) + (char)in_RAX;
  uVar1 = (ulonglong)((uint)in_RAX & 0xffffff6d);
  *(undefined2 *)(uVar1 - 0x71) = in_FPUControlWord;
  *(undefined2 *)(uVar1 - 0x6d) = in_FPUStatusWord;
  *(undefined2 *)(uVar1 - 0x69) = in_FPUTagWord;
  *(undefined8 *)(uVar1 - 0x5d) = in_FPUDataPointer;
  *(undefined8 *)(uVar1 - 0x65) = in_FPUInstructionPointer;
  *(undefined2 *)(uVar1 - 0x5f) = in_FPULastInstructionOpcode;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c140b FUN_14d7c140b body=3 status=ok
// SIG undefined FUN_14d7c140b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c140b(longlong param_1,undefined8 param_2)

{
  LOCK();
  *(char *)(param_1 + -0x11) = (char)((ulonglong)param_2 >> 8);
  UNLOCK();
                    /* WARNING: Read-only address (ram,0x000140752ed6) is written */
  cRam0000000140752ed6 = (char)param_2 + -0x77;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1415 FUN_14d7c1415 body=7 status=ok
// SIG undefined FUN_14d7c1415(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1415(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1422 FUN_14d7c1422 body=2 status=ok
// SIG undefined FUN_14d7c1422(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1422(void)

{
  bool in_PF;
  
  if (!in_PF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1444 FUN_14d7c1444 body=8 status=ok
// SIG undefined FUN_14d7c1444(void)

void FUN_14d7c1444(void)

{
  longlong unaff_RDI;
  
                    /* WARNING: Could not recover jumptable at 0x00014d7c1446. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulonglong)*(uint *)(unaff_RDI + 0x463739f6))();
  return;
}



// FUNCTION 14d7c145e thunk_EXT_FUN_00bc5723 body=7 status=ok
// SIG undefined thunk_EXT_FUN_00bc5723(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_00bc5723(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1478 FUN_14d7c1478 body=73 status=ok
// SIG undefined FUN_14d7c1478(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1478(uint *param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  char *in_RAX;
  char cVar3;
  byte unaff_SIL;
  undefined8 unaff_retaddr;
  
  cVar3 = (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Read-only address (ram,0x0001423da8d2) is written */
  iRam00000001423da8d2 = (int)&stack0x00000000 + -0x3116efdc;
  *in_RAX = *in_RAX + '\x01';
  *param_1 = *param_1 | 0xffffffd8;
  *(char *)(param_2 + -0x7e4b00f2) = *(char *)(param_2 + -0x7e4b00f2) + cVar3;
  *(byte *)param_1 = (byte)*param_1 ^ unaff_SIL;
  if ((POPCOUNT((byte)*param_1) & 1U) != 0) {
    uVar2 = in(0xe6);
    pcVar1 = (char *)(CONCAT71((int7)((ulonglong)unaff_retaddr >> 8),uVar2) + 0x5350d671);
    *pcVar1 = *pcVar1 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c14b0 FUN_14d7c14b0 body=21 status=ok
// SIG undefined FUN_14d7c14b0(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c14b0(void)

{
  undefined4 in_EAX;
  
  _DAT_944c9b86db6ad1 = in_EAX;
  DAT_1ca667853 = DAT_1ca667853 >> 0x12;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c14cf FUN_14d7c14cf body=10 status=ok
// SIG undefined FUN_14d7c14cf(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c14cf(longlong param_1)

{
  char *in_RAX;
  
  *(int *)(param_1 + -0x2a) = *(int *)(param_1 + -0x2a) << 1;
  *in_RAX = *in_RAX + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c14fa FUN_14d7c14fa body=3 status=ok
// SIG undefined FUN_14d7c14fa(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c1504) overlaps instruction at (ram,0x00014d7c1503)
    */

void FUN_14d7c14fa(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined7 uVar4;
  longlong unaff_RDI;
  
  uVar4 = (undefined7)((ulonglong)param_2 >> 8);
  cVar3 = (char)param_2;
  pcVar2 = (code *)swi(0xd6);
  (*pcVar2)();
  if (param_1 != 0) {
    pcVar1 = (char *)(unaff_RDI + 0x44 + CONCAT71(uVar4,cVar3) * 8);
    *pcVar1 = *pcVar1 + cVar3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c14fe FUN_14d7c14fe body=15 status=ok
// SIG undefined FUN_14d7c14fe(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c14fe(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  longlong unaff_RDI;
  
  pcVar1 = (char *)(unaff_RDI + 0x44 + param_2 * 8);
  *pcVar1 = *pcVar1 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1511 FUN_14d7c1511 body=2 status=ok
// SIG undefined FUN_14d7c1511(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1511(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1521 FUN_14d7c1521 body=4 status=ok
// SIG undefined FUN_14d7c1521(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1521(undefined8 param_1,undefined2 param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 in_RAX;
  undefined1 *unaff_RSI;
  undefined2 in_DS;
  bool in_ZF;
  int *piVar3;
  
  out(*unaff_RSI,param_2);
  uVar2 = in(0x11);
  piVar3 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar2);
  if (!in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *piVar3 = *piVar3 + -0x18;
  *(undefined4 *)(CONCAT62((int6)((ulonglong)(unaff_RSI + 1) >> 0x10),in_DS) & 0xffffffff) =
       0x72f3c3e2;
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7c1525 FUN_14d7c1525 body=6 status=ok
// SIG undefined FUN_14d7c1525(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1525(void)

{
  code *pcVar1;
  int *in_RAX;
  undefined8 unaff_RSI;
  undefined2 in_DS;
  bool in_ZF;
  
  if (!in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = *in_RAX + -0x18;
  *(undefined4 *)(CONCAT62((int6)((ulonglong)unaff_RSI >> 0x10),in_DS) & 0xffffffff) = 0x72f3c3e2;
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7c152d FUN_14d7c152d body=4 status=ok
// SIG undefined FUN_14d7c152d(void)

void FUN_14d7c152d(void)

{
  return;
}



// FUNCTION 14d7c153a FUN_14d7c153a body=4 status=ok
// SIG undefined FUN_14d7c153a(void)

void FUN_14d7c153a(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014d7c153b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)();
  return;
}



// FUNCTION 14d7c1543 FUN_14d7c1543 body=5 status=ok
// SIG undefined FUN_14d7c1543(void)

void FUN_14d7c1543(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7c154b FUN_14d7c154b body=3 status=ok
// SIG undefined FUN_14d7c154b(void)

void FUN_14d7c154b(void)

{
  undefined4 uVar1;
  code *pcVar2;
  int *in_RAX;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  undefined2 in_DS;
  
  uVar1 = *(undefined4 *)(unaff_RDI + -3);
  *in_RAX = *in_RAX + -0x18;
  *(undefined4 *)(CONCAT62((int6)((ulonglong)unaff_RSI >> 0x10),in_DS) & 0xffffffff) = 0x72f3c3e2;
  pcVar2 = (code *)swi(1);
  (*pcVar2)(uVar1);
  return;
}



// FUNCTION 14d7c1550 FUN_14d7c1550 body=23 status=ok
// SIG undefined FUN_14d7c1550(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1550(longlong param_1,byte param_2)

{
  byte *pbVar1;
  byte bVar2;
  char unaff_BH;
  undefined4 unaff_EBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  func_0x00017b5aa1aa();
  *unaff_RDI = *unaff_RSI;
  do {
    pbVar1 = (byte *)((longlong)unaff_RSI + 0x3d8abf2a);
    bVar2 = *pbVar1;
    *pbVar1 = *pbVar1 + param_2;
    *(undefined4 *)(param_1 + -0x3c1dff39) = unaff_EBP;
  } while (CARRY1(bVar2,param_2));
  *(char *)((longlong)unaff_RDI + 0x4a8e0007) =
       *(char *)((longlong)unaff_RDI + 0x4a8e0007) - unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c156b FUN_14d7c156b body=22 status=ok
// SIG undefined FUN_14d7c156b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c156b(undefined8 param_1)

{
  uint unaff_EBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  uint *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI ^ unaff_EBX;
  *(char *)(unaff_RBP + -0x210e3fbc) =
       *(char *)(unaff_RBP + -0x210e3fbc) + (char)((ulonglong)param_1 >> 8);
  *(char *)(unaff_RSI + -0x1b) = *(char *)(unaff_RSI + -0x1b) << 6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1584 FUN_14d7c1584 body=11 status=ok
// SIG undefined FUN_14d7c1584(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c15c8) */

void FUN_14d7c1584(longlong param_1)

{
  code *pcVar1;
  longlong unaff_RSI;
  undefined2 in_DS;
  
  if (param_1 == 0) {
    *(undefined4 *)(CONCAT62((int6)((ulonglong)(unaff_RSI + 1) >> 0x10),in_DS) & 0xffffffff) =
         0x72f3c3e2;
    pcVar1 = (code *)swi(1);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1590 FUN_14d7c1590 body=6 status=ok
// SIG undefined FUN_14d7c1590(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1590(undefined8 param_1,uint *param_2)

{
  uint in_EAX;
  char *unaff_RSI;
  
  if ((POPCOUNT((in_EAX | *param_2) & 0xff) & 1U) == 0) {
    *unaff_RSI = *unaff_RSI + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  in(0x4d);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1599 FUN_14d7c1599 body=2 status=ok
// SIG undefined FUN_14d7c1599(void)

void FUN_14d7c1599(void)

{
  return;
}



// FUNCTION 14d7c159e FUN_14d7c159e body=11 status=ok
// SIG undefined FUN_14d7c159e(void)

/* WARNING: Instruction at (ram,0x00014d7c159f) overlaps instruction at (ram,0x00014d7c159e)
    */

void FUN_14d7c159e(void)

{
  return;
}



// FUNCTION 14d7c15bb FUN_14d7c15bb body=8 status=ok
// SIG undefined FUN_14d7c15bb(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c15c8) */

void FUN_14d7c15bb(undefined8 param_1,int *param_2)

{
  code *pcVar1;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined8 unaff_RSI;
  undefined2 in_DS;
  byte in_CF;
  longlong unaff_retaddr;
  
  *(ulonglong *)(unaff_retaddr + -8) =
       CONCAT71(unaff_00000019,unaff_BL + (char)((int)param_2 + *param_2 + (uint)in_CF >> 8));
  *(undefined4 *)(CONCAT62((int6)((ulonglong)unaff_RSI >> 0x10),in_DS) & 0xffffffff) = 0x72f3c3e2;
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7c15d1 FUN_14d7c15d1 body=2 status=ok
// SIG undefined FUN_14d7c15d1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c15d1(longlong param_1)

{
  byte *pbVar1;
  char *in_RAX;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  bool in_OF;
  
  if (!in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar1 = (byte *)(param_1 + 0x78 + (longlong)in_RAX * 8);
  *pbVar1 = *pbVar1 ^ (byte)((ulonglong)in_RAX >> 8);
  out(0x83,(int)in_RAX);
  *in_RAX = *in_RAX + (char)in_RAX;
  *(undefined1 *)CONCAT44(unaff_00000034,unaff_ESI) = 0;
  in(0xd1);
  if (-1 < (int)in_RAX + -0x53dfc6f7) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c15d5 FUN_14d7c15d5 body=4 status=ok
// SIG undefined FUN_14d7c15d5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c15d5(void)

{
  char *in_RAX;
  undefined1 *unaff_RSI;
  
  *(int *)(in_RAX + -0x19) = *(int *)(in_RAX + -0x19) >> 3;
  *in_RAX = *in_RAX + (char)in_RAX;
  *unaff_RSI = 0;
  in(0xd1);
  if (-1 < (int)in_RAX + -0x53dfc6f7) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c15e3 FUN_14d7c15e3 body=6 status=ok
// SIG undefined FUN_14d7c15e3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c15e3(void)

{
  bool in_SF;
  
  in(0xd1);
  if (!in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c15f4 FUN_14d7c15f4 body=2 status=ok
// SIG undefined FUN_14d7c15f4(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c15f4(undefined8 param_1,ulonglong param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  char unaff_BL;
  longlong unaff_RBP;
  char *unaff_RDI;
  undefined4 *unaff_retaddr;
  
  uVar5 = (undefined4)((ulonglong)param_1 >> 0x20);
  iVar4 = (int)param_1;
  out(*unaff_retaddr,(short)param_2);
  *unaff_RDI = *unaff_RDI << ((byte)param_1 & 0x1f);
  param_2 = param_2 & 0xffffffffffffff00;
  unaff_retaddr[9] = unaff_retaddr[9] - iVar4;
  pcVar3 = (char *)func_0x0001948e04d5();
  *(int *)(param_2 - 0x58ff2f6a) = *(int *)(param_2 - 0x58ff2f6a) << 0xc;
  if ((int)pcVar3 + -0x2072fe < 0) {
    *pcVar3 = *pcVar3 + (char)pcVar3;
    uVar2 = unaff_retaddr[1];
    puVar1 = (uint *)(CONCAT44(uVar5,iVar4) + -0x2c);
    *puVar1 = *puVar1 >> ((byte)iVar4 & 0x1f);
    *unaff_RDI = (char)uVar2;
    *(char *)(unaff_RBP + 10) = *(char *)(unaff_RBP + 10) + (char)((uint)uVar2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((int)pcVar3 < 0x2072fe) {
    unaff_RDI[-0x5f] = unaff_RDI[-0x5f] + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1601 FUN_14d7c1601 body=4 status=ok
// SIG undefined FUN_14d7c1601(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c1601(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *in_RAX;
  char unaff_BL;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined1 *unaff_RDI;
  byte in_CF;
  
  out((short)param_2,(char)in_RAX);
  iVar2 = (int)in_RAX;
  *(uint *)(unaff_RDI + 0x2e) = *(int *)(unaff_RDI + 0x2e) + iVar2 + (uint)in_CF;
  *(int *)(param_2 + -0x58ff2f6a) = *(int *)(param_2 + -0x58ff2f6a) << 0xc;
  if (iVar2 + -0x2072fe < 0) {
    *in_RAX = *in_RAX + (char)in_RAX;
    uVar1 = *unaff_RSI;
    *(uint *)(param_1 + -0x2c) = *(uint *)(param_1 + -0x2c) >> ((byte)param_1 & 0x1f);
    *unaff_RDI = (char)uVar1;
    *(char *)(unaff_RBP + 10) = *(char *)(unaff_RBP + 10) + (char)((uint)uVar1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (iVar2 < 0x2072fe) {
    unaff_RDI[-0x5f] = unaff_RDI[-0x5f] + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1613 FUN_14d7c1613 body=22 status=ok
// SIG undefined FUN_14d7c1613(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c1613(longlong param_1)

{
  undefined4 uVar1;
  char *in_RAX;
  char unaff_BL;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined1 *unaff_RDI;
  bool in_SF;
  char in_OF;
  
  if (in_SF) {
    *in_RAX = *in_RAX + (char)in_RAX;
    uVar1 = *unaff_RSI;
    *(uint *)(param_1 + -0x2c) = *(uint *)(param_1 + -0x2c) >> ((byte)param_1 & 0x1f);
    *unaff_RDI = (char)uVar1;
    *(char *)(unaff_RBP + 10) = *(char *)(unaff_RBP + 10) + (char)((uint)uVar1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_OF != '\0') {
    unaff_RDI[-0x5f] = unaff_RDI[-0x5f] + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c162a FUN_14d7c162a body=1 status=ok
// SIG undefined FUN_14d7c162a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c162a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c163a FUN_14d7c163a body=2 status=ok
// SIG undefined FUN_14d7c163a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c163a(void)

{
  undefined1 in_AL;
  
  out(0x32,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c164e FUN_14d7c164e body=11 status=ok
// SIG undefined FUN_14d7c164e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c1650) overlaps instruction at (ram,0x00014d7c164e)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c164e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  byte bVar2;
  char *pcVar3;
  byte *in_RAX;
  longlong lVar4;
  byte unaff_BL;
  longlong unaff_RBP;
  char *unaff_RSI;
  undefined1 *unaff_RDI;
  
  bVar2 = *(byte *)(param_2 + 0xfeffffffa1);
  lVar4 = param_1 + -1;
  if (lVar4 == 0) {
    lVar4 = param_1 + -2;
    if (lVar4 == 0) {
      return;
    }
    *in_RAX = *in_RAX << 1 | (char)*in_RAX < '\0';
    unaff_RDI = unaff_RDI + 4;
    unaff_RSI = unaff_RSI + 4;
  }
  pcVar3 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),*unaff_RSI);
  if (-1 < (int)pcVar3 + -0x2072fe) {
    if ((int)pcVar3 < 0x2072fe) {
      unaff_RDI[-0x5f] = unaff_RDI[-0x5f] + (unaff_BL | bVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar3 = *pcVar3 + *unaff_RSI;
  uVar1 = *(undefined4 *)(unaff_RSI + 1);
  *(uint *)(lVar4 + -0x2c) = *(uint *)(lVar4 + -0x2c) >> ((byte)lVar4 & 0x1f);
  *unaff_RDI = (char)uVar1;
  *(char *)(unaff_RBP + 10) = *(char *)(unaff_RBP + 10) + (char)((uint)uVar1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c165a FUN_14d7c165a body=6 status=ok
// SIG undefined FUN_14d7c165a(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c165a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c166c FUN_14d7c166c body=81 status=ok
// SIG undefined FUN_14d7c166c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c166c(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined8 in_RAX;
  undefined1 uVar4;
  byte bVar5;
  undefined6 uVar6;
  byte *pbVar7;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong *plVar8;
  byte *unaff_RDI;
  longlong unaff_R13;
  undefined2 in_DS;
  longlong in_FS_OFFSET;
  
  uVar6 = (undefined6)((ulonglong)param_1 >> 0x10);
  uVar4 = (undefined1)param_1;
  bVar5 = (byte)in_RAX;
  out(0x2b,bVar5);
  plVar8 = (longlong *)
           (ulonglong)
           ((uint)&stack0x00000000 & *(uint *)(CONCAT71(unaff_00000019,unaff_BL) + -0x2d6b8a7));
  pbVar7 = (byte *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                            CONCAT11((byte)((ulonglong)param_2 >> 8) | *unaff_RDI,(char)param_2));
  *unaff_RDI = bVar5;
  uVar2 = *(uint *)(pbVar7 + in_FS_OFFSET + CONCAT71(unaff_00000019,unaff_BL) * 4 + -3);
  _DAT_a8d64be50600a5db =
       (undefined4)
       CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                CONCAT11((byte)((ulonglong)in_RAX >> 8) | *pbVar7,bVar5));
  bVar5 = (byte)((ulonglong)param_1 >> 8) ^ 0x62;
  uVar3 = in(0x75);
  *(char *)(*plVar8 + -0x26) = *(char *)(*plVar8 + -0x26) + unaff_BL;
  *(undefined2 *)((ulonglong)uVar3 - 0x53) = in_DS;
  *plVar8 = 0x14d7c16a1;
  func_0xfb20becc();
  *plVar8 = (longlong)pbVar7;
  pcVar1 = (char *)(CONCAT62(uVar6,CONCAT11(bVar5,uVar4)) + (ulonglong)uVar3 * 2);
  *pcVar1 = *pcVar1 + bVar5;
  *(char *)((longlong)&LastErrorValue + unaff_R13 + 3) = (char)((ulonglong)pbVar7 >> 0x18) >> 7;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + bVar5;
  FUN_14d7c172b();
  return;
}



// FUNCTION 14d7c16c1 FUN_14d7c16c1 body=2 status=ok
// SIG undefined FUN_14d7c16c1(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c16c6) overlaps instruction at (ram,0x00014d7c16c3)
    */

void FUN_14d7c16c1(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  uint in_EAX;
  uint uVar2;
  undefined1 uVar3;
  char cVar4;
  undefined6 uVar5;
  char cVar6;
  char *unaff_RSI;
  longlong unaff_R13;
  undefined2 in_DS;
  
  uVar5 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar4 = (char)((ulonglong)param_1 >> 8);
  uVar3 = (undefined1)param_1;
  cVar6 = (char)((ulonglong)param_2 >> 0x18);
  uVar2 = in_EAX & 0x25220010;
  if (uVar2 == 0) {
    return;
  }
  if (POPCOUNT(in_EAX & 0x10) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)((ulonglong)uVar2 - 0x53) = in_DS;
  func_0xfb20becc();
  pcVar1 = (char *)(CONCAT62(uVar5,CONCAT11(cVar4,uVar3)) + (ulonglong)uVar2 * 2);
  *pcVar1 = *pcVar1 + cVar4;
  *(char *)((longlong)&LastErrorValue + unaff_R13 + 3) = cVar6 >> 7;
  *unaff_RSI = *unaff_RSI + cVar4;
  FUN_14d7c172b();
  return;
}



// FUNCTION 14d7c16d3 FUN_14d7c16d3 body=38 status=ok
// SIG undefined FUN_14d7c16d3(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14d7c16d3(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  undefined8 in_RAX;
  undefined7 uVar5;
  char cVar6;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  int unaff_EDI;
  uint uVar7;
  longlong unaff_R13;
  undefined2 in_DS;
  
  uVar5 = (undefined7)((ulonglong)in_RAX >> 8);
  uVar4 = CONCAT71(uVar5,(char)in_RAX + -0x49);
  uVar7 = unaff_EDI - *(int *)(unaff_RBP + -0x31);
  if (uVar7 != 0) {
    if ((POPCOUNT(uVar7 & 0xff) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(uVar4 - 0x53) = in_DS;
    func_0xfb20becc();
    pcVar2 = (char *)(param_1 + (uVar4 & 0xffffffff) * 2);
    cVar6 = (char)((ulonglong)param_1 >> 8);
    *pcVar2 = *pcVar2 + cVar6;
    *(char *)((longlong)&LastErrorValue + unaff_R13 + 3) = (char)((ulonglong)param_2 >> 0x18) >> 7;
    *(char *)CONCAT44(unaff_00000034,unaff_ESI) =
         *(char *)CONCAT44(unaff_00000034,unaff_ESI) + cVar6;
    uVar4 = FUN_14d7c172b();
    return uVar4;
  }
  pbVar1 = (byte *)(unaff_RBX + 0x1d181900);
  *pbVar1 = *pbVar1 | 0x78;
  if (*pbVar1 != 0) {
    _DAT_00000000 = _DAT_00000000 >> 0xb | _DAT_00000000 << 0x15;
    return (ulonglong)((int)uVar4 + -0x6ccf90c1 + (uint)((int)_DAT_00000000 < 0));
  }
  pbVar1 = (byte *)(param_2 + -0x43);
  *pbVar1 = *pbVar1 << 1 | (char)*pbVar1 < '\0';
  *(uint *)(uVar4 - 0x69) = *(uint *)(uVar4 - 0x69) ^ (uint)unaff_RBP;
  uVar3 = in((short)param_2);
  return CONCAT71(uVar5,uVar3);
}



// FUNCTION 14d7c1708 FUN_14d7c1708 body=14 status=ok
// SIG undefined FUN_14d7c1708(void)

undefined1 FUN_14d7c1708(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  uint *puVar2;
  undefined1 in_AL;
  undefined1 uVar3;
  undefined7 in_register_00000001;
  uint unaff_EBP;
  
  pbVar1 = (byte *)(param_2 + -0x43);
  *pbVar1 = *pbVar1 << 1 | (char)*pbVar1 < '\0';
  puVar2 = (uint *)(CONCAT71(in_register_00000001,in_AL) + -0x69);
  *puVar2 = *puVar2 ^ unaff_EBP;
  uVar3 = in((short)param_2);
  return uVar3;
}



// FUNCTION 14d7c1726 FUN_14d7c1726 body=1 status=ok
// SIG undefined FUN_14d7c1726(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1726(uint param_1)

{
  byte *pbVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  bool bVar7;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  uint *unaff_RSI;
  longlong unaff_RDI;
  undefined1 auStack_8 [8];
  
  uVar4 = *unaff_RSI;
  uVar5 = *(uint *)(unaff_RDI + 0x23b74cb1);
  puVar2 = (uint *)(CONCAT44(in_register_00000004,uVar4) + unaff_RBX * 8);
  uVar3 = *puVar2;
  *puVar2 = *puVar2 + (uint)auStack_8;
  bVar7 = !CARRY4(uVar3,(uint)auStack_8);
  pbVar1 = (byte *)((ulonglong)(param_1 ^ uVar5) + 6);
  bVar6 = (byte)uVar4 + *pbVar1;
  if (!CARRY1((byte)uVar4,*pbVar1) && !CARRY1(bVar6,bVar7)) {
    *(byte *)(unaff_RBX + -0x6aa2b617) =
         *(byte *)(unaff_RBX + -0x6aa2b617) >> 1 | ((uVar4 & 0x100) != 0) << 7;
    out(4,bVar6 + bVar7);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c172b FUN_14d7c172b body=2 status=ok
// SIG undefined FUN_14d7c172b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c172b(longlong param_1)

{
  byte *pbVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  byte in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  undefined8 unaff_RBX;
  longlong lVar6;
  byte in_CF;
  bool bVar7;
  undefined1 auStack_8 [8];
  
  lVar6 = CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),CONCAT11(0x23,(char)unaff_RBX));
  puVar2 = (uint *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + lVar6 * 8);
  uVar3 = *puVar2;
  uVar5 = *puVar2 + (uint)auStack_8;
  *puVar2 = uVar5 + in_CF;
  bVar7 = !CARRY4(uVar3,(uint)auStack_8) && !CARRY4(uVar5,(uint)in_CF);
  bVar4 = in_AL + *(byte *)(param_1 + 6);
  if (!CARRY1(in_AL,*(byte *)(param_1 + 6)) && !CARRY1(bVar4,bVar7)) {
    pbVar1 = (byte *)(lVar6 + -0x6aa2b617);
    *pbVar1 = *pbVar1 >> 1 | ((in_AH & 1) != 0) << 7;
    out(4,bVar4 + bVar7);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c172f FUN_14d7c172f body=31 status=ok
// SIG undefined FUN_14d7c172f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c172f(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  byte in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RBX;
  byte in_CF;
  bool bVar5;
  undefined1 auStack_8 [8];
  
  puVar1 = (uint *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + unaff_RBX * 8);
  uVar2 = *puVar1;
  uVar4 = *puVar1 + (uint)auStack_8;
  *puVar1 = uVar4 + in_CF;
  bVar5 = !CARRY4(uVar2,(uint)auStack_8) && !CARRY4(uVar4,(uint)in_CF);
  bVar3 = in_AL + *(byte *)(param_1 + 6);
  if (CARRY1(in_AL,*(byte *)(param_1 + 6)) || CARRY1(bVar3,bVar5)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)(unaff_RBX + -0x6aa2b617) =
       *(byte *)(unaff_RBX + -0x6aa2b617) >> 1 | ((in_AH & 1) != 0) << 7;
  out(4,bVar3 + bVar5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c174f FUN_14d7c174f body=17 status=ok
// SIG undefined FUN_14d7c174f(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c174f(longlong param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined4 in_EAX;
  longlong unaff_RBX;
  longlong unaff_RDI;
  
  *(uint *)(param_1 + -0x16ff063d) = *(uint *)(param_1 + -0x16ff063d) >> ((byte)param_1 & 0x1f);
  pbVar1 = (byte *)(unaff_RDI + 0x6b);
  bVar2 = *pbVar1;
  bVar3 = (byte)((uint)in_EAX >> 8);
  _DAT_85b2556f78304309 = in_EAX;
  *pbVar1 = *pbVar1 + bVar3;
  *(byte *)(unaff_RBX + -0x6aa2b617) =
       *(byte *)(unaff_RBX + -0x6aa2b617) >> 1 | CARRY1(bVar2,bVar3) << 7;
  out(4,(char)in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1765 FUN_14d7c1765 body=13 status=ok
// SIG undefined FUN_14d7c1765(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1765(void)

{
  undefined1 in_AL;
  longlong unaff_RBX;
  char in_CF;
  
  *(byte *)(unaff_RBX + -0x6aa2b617) = *(byte *)(unaff_RBX + -0x6aa2b617) >> 1 | in_CF << 7;
  out(4,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1775 FUN_14d7c1775 body=5 status=ok
// SIG undefined FUN_14d7c1775(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1775(byte param_1)

{
  int *piVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  
  piVar1 = (int *)(CONCAT71(in_register_00000001,in_AL) + -0x73);
  *piVar1 = *piVar1 << (param_1 & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1789 FUN_14d7c1789 body=3 status=ok
// SIG undefined FUN_14d7c1789(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1789(byte param_1)

{
  longlong unaff_RBP;
  longlong in_R11;
  char unaff_R13B;
  
  uRam000000016c64deda = uRam000000016c64deda >> 1 | (uint)((uRam000000016c64deda & 1) != 0) << 0x1f
  ;
  *(byte *)(unaff_RBP + -0x6d8889b1) = *(byte *)(unaff_RBP + -0x6d8889b1) | param_1;
  *(char *)(in_R11 + 0x10669fac) = *(char *)(in_R11 + 0x10669fac) + unaff_R13B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c178d FUN_14d7c178d body=5 status=ok
// SIG undefined FUN_14d7c178d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c178d(byte param_1)

{
  longlong unaff_RBP;
  longlong in_R11;
  char unaff_R13B;
  
  *(byte *)(unaff_RBP + -0x6d8889b1) = *(byte *)(unaff_RBP + -0x6d8889b1) | param_1;
  *(char *)(in_R11 + 0x10669fac) = *(char *)(in_R11 + 0x10669fac) + unaff_R13B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1795 FUN_14d7c1795 body=9 status=ok
// SIG undefined FUN_14d7c1795(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1795(void)

{
  longlong in_R11;
  char unaff_R13B;
  bool in_CF;
  bool in_ZF;
  
  if (!in_CF && !in_ZF) {
    *(char *)(in_R11 + 0x10669fac) = *(char *)(in_R11 + 0x10669fac) + unaff_R13B;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c17aa FUN_14d7c17aa body=8 status=ok
// SIG undefined FUN_14d7c17aa(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c17aa(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 in_AL;
  uint *unaff_RSI;
  undefined1 *unaff_RDI;
  byte in_CF;
  bool in_OF;
  
  if (!in_OF) {
    *unaff_RDI = in_AL;
    func_0x000165591906();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = *param_2;
  *(uint *)(unaff_RDI + -0x124ac5f7) =
       (*(int *)(unaff_RDI + -0x124ac5f7) + 0x12ffaa16) - (uint)in_CF;
  *unaff_RSI = *unaff_RSI | 0x8c232717;
  LOCK();
  *param_2 = CONCAT22((short)((uint)uVar1 >> 0x10),
                      CONCAT11((byte)((uint)uVar1 >> 8) | (byte)uVar1,(byte)uVar1));
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c17c7 FUN_14d7c17c7 body=4 status=ok
// SIG undefined FUN_14d7c17c7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c17c7(undefined8 param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  byte unaff_BL;
  undefined7 unaff_00000019;
  
  *(int *)CONCAT71(unaff_00000019,unaff_BL) = *(int *)CONCAT71(unaff_00000019,unaff_BL) >> 1;
  out((short)CONCAT31((uint3)(byte)((byte)((uint)param_2 >> 8) ^ unaff_BL),0xd),in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c17cb FUN_14d7c17cb body=7 status=ok
// SIG undefined FUN_14d7c17cb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c17cb(undefined8 param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  int *unaff_RBX;
  
  *unaff_RBX = *unaff_RBX >> 1;
  out(param_2,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c17d4 FUN_14d7c17d4 body=36 status=ok
// SIG undefined FUN_14d7c17d4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c17d4(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint *unaff_RSI;
  longlong unaff_RDI;
  undefined2 in_CS;
  byte in_CF;
  
  *(undefined2 *)unaff_RSI = in_CS;
  uVar1 = *param_2;
  *(int *)(unaff_RDI + -0x124ac5f7) = (*(int *)(unaff_RDI + -0x124ac5f7) + 0x12ffaa16) - (uint)in_CF
  ;
  *unaff_RSI = *unaff_RSI | 0x8c232717;
  LOCK();
  *param_2 = CONCAT22((short)((uint)uVar1 >> 0x10),
                      CONCAT11((byte)((uint)uVar1 >> 8) | (byte)uVar1,(byte)uVar1));
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c17fa FUN_14d7c17fa body=14 status=ok
// SIG undefined FUN_14d7c17fa(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c17fa(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c181b FUN_14d7c181b body=12 status=ok
// SIG undefined FUN_14d7c181b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c181b(void)

{
  in(0x6d3a);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1827 FUN_14d7c1827 body=31 status=ok
// SIG undefined FUN_14d7c1827(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1827(undefined8 param_1,undefined2 param_2)

{
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1848 FUN_14d7c1848 body=2 status=ok
// SIG undefined FUN_14d7c1848(void)

undefined8 FUN_14d7c1848(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  longlong in_RAX;
  char unaff_BL;
  uint unaff_ESI;
  undefined1 *unaff_RDI;
  bool bVar4;
  
  bVar4 = CARRY4(unaff_ESI,(uint)unaff_RDI);
  pbVar1 = (byte *)(CONCAT71((int7)((ulonglong)param_2 >> 8),(byte)param_2 - bVar4) + -0x1e36c0a1 +
                   in_RAX * 2);
  bVar3 = ((byte)param_1 & 0x1f) % 9;
  bVar2 = *pbVar1;
  *pbVar1 = (byte)(CONCAT11((byte)param_2 < bVar4,bVar2) >> bVar3) | bVar2 << 9 - bVar3;
  *unaff_RDI = (char)in_RAX;
  *param_1 = *param_1 + unaff_BL;
  return 0x6328efae;
}



// FUNCTION 14d7c185a FUN_14d7c185a body=11 status=ok
// SIG undefined FUN_14d7c185a(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c186d) */
/* WARNING: Removing unreachable block (ram,0x00014d7c187b) */
/* WARNING: Removing unreachable block (ram,0x00014d7c18a6) */

void FUN_14d7c185a(undefined8 param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 in_RAX;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *unaff_RDI;
  undefined1 *puVar4;
  undefined1 unaff_R14B;
  undefined7 unaff_000000b1;
  bool in_PF;
  bool in_ZF;
  char in_SF;
  char in_OF;
  float10 in_ST0;
  
  if (in_PF) {
    uVar3 = (undefined4)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(0xb8,(char)in_RAX));
    out(param_2,uVar3);
    pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x13);
    *pcVar1 = *pcVar1 + 'H';
    out(param_2,uVar3);
    return;
  }
  LOCK();
  *(undefined8 *)CONCAT71(unaff_000000b1,unaff_R14B) = param_1;
  UNLOCK();
  if (in_ZF || in_OF != in_SF) {
    puVar4 = unaff_RDI;
    if (in_OF == in_SF) {
      puVar4 = unaff_RDI + 1;
      *(int *)(unaff_RDI + -0x69) = (int)ROUND(in_ST0);
    }
    uVar2 = in(param_2);
    *puVar4 = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1862 FUN_14d7c1862 body=5 status=ok
// SIG undefined FUN_14d7c1862(void)

void FUN_14d7c1862(void)

{
  return;
}



// FUNCTION 14d7c186e FUN_14d7c186e body=8 status=ok
// SIG undefined FUN_14d7c186e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c186e(undefined8 param_1,undefined2 param_2)

{
  int iVar1;
  undefined8 in_RAX;
  int *piVar2;
  undefined4 *unaff_RSI;
  
  piVar2 = (int *)CONCAT44((int)((ulonglong)in_RAX >> 0x20),*unaff_RSI);
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + 0x7f;
  if (SCARRY4(iVar1,0x7f) == *piVar2 < 0) {
    DAT_fb79d2cc = DAT_fb79d2cc + -0x60;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*(undefined1 *)(unaff_RSI + 1),param_2);
  return;
}



// FUNCTION 14d7c1878 FUN_14d7c1878 body=4 status=ok
// SIG undefined FUN_14d7c1878(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1878(undefined8 param_1,undefined2 param_2)

{
  undefined1 *unaff_RSI;
  char in_SF;
  char in_OF;
  
  if (in_OF == in_SF) {
    DAT_fb79d2cc = DAT_fb79d2cc + -0x60;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*unaff_RSI,param_2);
  return;
}



// FUNCTION 14d7c187c FUN_14d7c187c body=7 status=ok
// SIG undefined FUN_14d7c187c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c187c(void)

{
  DAT_fb79d2cc = DAT_fb79d2cc + -0x60;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1888 FUN_14d7c1888 body=15 status=ok
// SIG undefined FUN_14d7c1888(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1888(undefined8 param_1,undefined2 param_2)

{
  in(param_2);
  DAT_fb79d2cc = DAT_fb79d2cc + -0x60;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c18a5 FUN_14d7c18a5 body=10 status=ok
// SIG undefined FUN_14d7c18a5(void)

void FUN_14d7c18a5(undefined8 param_1,undefined2 param_2)

{
  undefined1 in_AL;
  undefined1 *unaff_RSI;
  
  out(0xaf,in_AL);
  out(*unaff_RSI,param_2);
  return;
}



// FUNCTION 14d7c18b6 FUN_14d7c18b6 body=29 status=ok
// SIG undefined FUN_14d7c18b6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c18b6(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined1 *unaff_RDI;
  undefined1 *puVar2;
  char in_SF;
  char in_OF;
  float10 in_ST0;
  
  puVar2 = unaff_RDI;
  if (in_OF == in_SF) {
    puVar2 = unaff_RDI + 1;
    *(int *)(unaff_RDI + -0x69) = (int)ROUND(in_ST0);
  }
  uVar1 = in(param_2);
  *puVar2 = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c18d4 FUN_14d7c18d4 body=2 status=ok
// SIG undefined FUN_14d7c18d4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c18d4(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *unaff_RDI;
  bool in_ZF;
  char in_SF;
  char in_OF;
  float10 in_ST0;
  
  if (!in_ZF && in_OF == in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar2 = unaff_RDI;
  if (in_OF == in_SF) {
    puVar2 = unaff_RDI + 1;
    *(int *)(unaff_RDI + -0x69) = (int)ROUND(in_ST0);
  }
  uVar1 = in(param_2);
  *puVar2 = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c18dc FUN_14d7c18dc body=50 status=ok
// SIG undefined FUN_14d7c18dc(void)

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_14d7c18dc(undefined8 param_1,undefined2 param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined8 in_RAX;
  undefined1 *unaff_RDI;
  
  cVar4 = (char)in_RAX + -0xe;
  uVar2 = in(param_2);
  *unaff_RDI = uVar2;
  uVar5 = (int)(unaff_RDI + 1) + -0x2c51ac51 +
          (uint)((byte)(cVar4 - *(char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar4)) <
                (byte)unaff_RDI[1]);
  iVar6 = uVar5 + 0x7d6b21;
  if (uVar5 < 0xff8294df) {
    pbVar1 = (byte *)(CONCAT44((int)((ulonglong)param_1 >> 0x20),
                               CONCAT22((short)((ulonglong)param_1 >> 0x10),(ushort)(byte)param_1))
                     + 0xa0dab9);
    bVar3 = (byte)param_1 & 7;
    *pbVar1 = *pbVar1 >> bVar3 | *pbVar1 << 8 - bVar3;
    LOCK();
    uVar2 = *(undefined1 *)(longlong)iVar6;
    *(undefined1 *)(longlong)iVar6 = (char)iVar6;
    UNLOCK();
    return CONCAT31((int3)((uint)iVar6 >> 8),uVar2);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1910 FUN_14d7c1910 body=9 status=ok
// SIG undefined FUN_14d7c1910(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1910(void)

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



// FUNCTION 14d7c192d FUN_14d7c192d body=2 status=ok
// SIG undefined FUN_14d7c192d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c192d(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1936 FUN_14d7c1936 body=6 status=ok
// SIG undefined FUN_14d7c1936(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1936(byte param_1,undefined8 param_2)

{
  byte *pbVar1;
  int unaff_EBP;
  longlong unaff_RDI;
  
  in((short)param_2);
  pbVar1 = (byte *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                             CONCAT11((char)((ulonglong)param_2 >> 8),0xaa)) + 0x37758500);
  *pbVar1 = *pbVar1 | param_1;
  *(int *)(unaff_RDI + 0xd716c3) = *(int *)(unaff_RDI + 0xd716c3) - unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c193f FUN_14d7c193f body=9 status=ok
// SIG undefined FUN_14d7c193f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c193f(void)

{
  int unaff_EBP;
  longlong unaff_RDI;
  
  *(int *)(unaff_RDI + 0xd716c3) = *(int *)(unaff_RDI + 0xd716c3) - unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1965 FUN_14d7c1965 body=4 status=ok
// SIG undefined FUN_14d7c1965(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1965(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c196d FUN_14d7c196d body=6 status=ok
// SIG undefined FUN_14d7c196d(void)

void FUN_14d7c196d(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7c1975 FUN_14d7c1975 body=22 status=ok
// SIG undefined FUN_14d7c1975(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c1929) overlaps instruction at (ram,0x00014d7c1928)
    */

void FUN_14d7c1975(undefined8 param_1,byte param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  byte bVar3;
  code *pcVar4;
  char cVar5;
  undefined8 in_RAX;
  short sVar7;
  ulonglong uVar8;
  char cVar9;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined2 in_CS;
  bool bVar10;
  bool in_ZF;
  char in_SF;
  char in_OF;
  ulonglong unaff_retaddr;
  byte bVar6;
  
  cVar9 = (char)((ulonglong)unaff_RBX >> 8);
  if (in_ZF || in_OF != in_SF) {
    pcVar1 = (char *)(unaff_RSI + 4);
    cVar9 = -0x10;
    bVar10 = CARRY1(param_2,(byte)in_RAX);
    *(undefined2 *)(unaff_RBP + 0x17) = in_CS;
    uVar8 = (ulonglong)(uint)((int)in_RAX >> 0x1f);
    bVar6 = (byte)(unaff_retaddr & 0xffffffff);
    bVar3 = bVar6 + 0x46;
    cVar5 = bVar3 - bVar10;
    sVar7 = (short)((ulonglong)in_RAX >> 0x10) >> 0xf;
    out(sVar7,(int)CONCAT71((int7)((unaff_retaddr & 0xffffffff) >> 8),cVar5));
    *pcVar1 = (*pcVar1 - cVar5) - (bVar6 < 0xba || bVar3 < bVar10);
    if ((POPCOUNT(*pcVar1) & 1U) == 0) {
      uVar2 = in(sVar7);
      *(undefined4 *)(unaff_RDI + 4) = uVar2;
      pcVar4 = (code *)swi(1);
      (*pcVar4)();
      return;
    }
  }
  else {
    uVar8 = 0x95cd1d3c;
  }
  *(char *)(uVar8 - 0x6a32e2c4) = *(char *)(uVar8 - 0x6a32e2c4) + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c198a FUN_14d7c198a body=7 status=ok
// SIG undefined FUN_14d7c198a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c198a(void)

{
  char *pcVar1;
  undefined4 uVar2;
  byte bVar3;
  code *pcVar4;
  char cVar5;
  int in_EAX;
  short sVar7;
  char unaff_BH;
  ulonglong unaff_RBP;
  char *unaff_RSI;
  undefined4 *unaff_RDI;
  byte in_CF;
  byte bVar6;
  
  bVar6 = (byte)(unaff_RBP & 0xffffffff);
  bVar3 = bVar6 + 0x46;
  cVar5 = bVar3 - in_CF;
  sVar7 = (short)(in_EAX >> 0x1f);
  out(sVar7,(int)CONCAT71((int7)((unaff_RBP & 0xffffffff) >> 8),cVar5));
  *unaff_RSI = (*unaff_RSI - cVar5) - (bVar6 < 0xba || bVar3 < in_CF);
  if ((POPCOUNT(*unaff_RSI) & 1U) == 0) {
    uVar2 = in(sVar7);
    *unaff_RDI = uVar2;
    pcVar4 = (code *)swi(1);
    (*pcVar4)();
    return;
  }
  pcVar1 = (char *)((ulonglong)(uint)(in_EAX >> 0x1f) - 0x6a32e2c4);
  *pcVar1 = *pcVar1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1992 FUN_14d7c1992 body=3 status=ok
// SIG undefined FUN_14d7c1992(void)

void FUN_14d7c1992(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  pcVar2 = (code *)swi(1);
  (*pcVar2)();
  return;
}



// FUNCTION 14d7c19a5 FUN_14d7c19a5 body=6 status=ok
// SIG undefined FUN_14d7c19a5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c19a5(void)

{
  undefined8 uVar1;
  undefined1 in_AL;
  longlong unaff_RBX;
  int *unaff_RDI;
  float10 in_ST0;
  
  *unaff_RDI = (int)ROUND(in_ST0);
  uVar1 = InterruptDescriptorTableRegister();
  *(undefined8 *)(unaff_RBX + 0x7f) = uVar1;
  *(undefined1 *)unaff_RDI = in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c19ad FUN_14d7c19ad body=19 status=ok
// SIG undefined FUN_14d7c19ad(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c19ad(void)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  bool in_ZF;
  char in_SF;
  char in_OF;
  undefined8 uStack_18;
  
  if (in_ZF || in_OF != in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar2 = (undefined8 *)&stack0xfffffffffffffff0;
  cVar1 = '\v';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c19cf FUN_14d7c19cf body=7 status=ok
// SIG undefined FUN_14d7c19cf(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c19cf(void)

{
  longlong unaff_R15;
  float10 in_ST0;
  
  *(short *)(unaff_R15 + 0x3b) = (short)ROUND(in_ST0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c19d8 FUN_14d7c19d8 body=15 status=ok
// SIG undefined FUN_14d7c19d8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c19d8(void)

{
  byte *pbVar1;
  longlong in_RAX;
  longlong unaff_RBX;
  
  pbVar1 = (byte *)(unaff_RBX + -0x34 + in_RAX * 2);
  *pbVar1 = *pbVar1 ^ (byte)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1a4a FUN_14d7c1a4a body=2 status=ok
// SIG undefined FUN_14d7c1a4a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1a4a(char param_1)

{
  char *pcVar1;
  byte *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  pcVar1 = (char *)(unaff_RSI + unaff_RBP * 4);
  *pcVar1 = *pcVar1 - param_1;
  *unaff_RBX = *unaff_RBX << 7 | *unaff_RBX >> 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1a4e FUN_14d7c1a4e body=4 status=ok
// SIG undefined FUN_14d7c1a4e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1a4e(void)

{
  byte *unaff_RBX;
  
  *unaff_RBX = *unaff_RBX << 7 | *unaff_RBX >> 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1a75 FUN_14d7c1a75 body=12 status=ok
// SIG undefined FUN_14d7c1a75(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1a75(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  ushort *puVar2;
  uint uVar3;
  code *pcVar5;
  byte bVar6;
  uint in_EAX;
  uint uVar7;
  byte bVar8;
  longlong lVar9;
  int unaff_EBX;
  char *pcVar10;
  undefined4 unaff_EBP;
  undefined4 unaff_0000002c;
  undefined1 *unaff_RSI;
  longlong unaff_RDI;
  undefined8 in_MM1;
  uint uVar4;
  
  uVar7 = in_EAX ^ 0x296b8fda;
  if (0 < (int)uVar7) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar10 = (char *)(ulonglong)(uint)(unaff_EBX - *(int *)(&stack0x0000005c + unaff_RDI * 4));
  bVar6 = (char)uVar7 + (char)((ulonglong)param_2 >> 8);
  *(uint *)(unaff_RSI + -0x4f) = *(uint *)(unaff_RSI + -0x4f) ^ (uint)unaff_RDI;
  bVar8 = (byte)param_1;
  if ((bVar6 & 0x46) == 0) {
    lVar9 = CONCAT71((int7)(CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(0xf6,bVar8)) >> 8),
                     bVar8 * '\x02');
    if (-1 < (char)(bVar8 * '\x02')) {
      *(undefined1 *)CONCAT44(unaff_0000002c,unaff_EBP) = *unaff_RSI;
      pmaddwd(in_MM1,*(undefined8 *)(unaff_RSI + 0x26c08297));
      pcVar5 = (code *)swi(1);
      (*pcVar5)(lVar9,(int)param_2 + *(int *)(param_2 + -0x1e + lVar9) + (uint)CARRY1(bVar8,bVar8));
      return;
    }
    LOCK();
    pbVar1 = (byte *)(pcVar10 + -0x28087631);
    bVar8 = *pbVar1;
    *pbVar1 = *pbVar1 - 10;
    UNLOCK();
    uVar3 = *(uint *)(param_2 + 0x72);
    uVar4 = *(uint *)(param_2 + 0x72);
    out((short)param_2,0);
    puVar2 = (ushort *)
             (((ulonglong)CONCAT31((int3)(uVar7 >> 8),bVar6) & 0xffffffffffffff46) * 3 + -0x13ff3e64
             );
    *puVar2 = ~*puVar2;
    *pcVar10 = (*pcVar10 - (char)param_2) -
               (CARRY4((uint)lVar9,uVar3) || CARRY4((uint)lVar9 + uVar4,(uint)(9 < bVar8)));
    *pcVar10 = *pcVar10 + (char)param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1a8a FUN_14d7c1a8a body=57 status=ok
// SIG undefined FUN_14d7c1a8a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1a8a(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  ushort *puVar2;
  uint uVar3;
  code *pcVar5;
  longlong in_RAX;
  byte bVar6;
  longlong lVar7;
  char *unaff_RBX;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  bool in_ZF;
  undefined8 in_MM1;
  uint uVar4;
  
  bVar6 = (byte)param_1;
  if (in_ZF) {
    lVar7 = CONCAT71((int7)(CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(0xf6,bVar6)) >> 8),
                     bVar6 * '\x02');
    if (-1 < (char)(bVar6 * '\x02')) {
      *unaff_RDI = *unaff_RSI;
      pmaddwd(in_MM1,*(undefined8 *)(unaff_RSI + 0x26c08297));
      pcVar5 = (code *)swi(1);
      (*pcVar5)(lVar7,(int)param_2 + *(int *)(param_2 + -0x1e + lVar7) + (uint)CARRY1(bVar6,bVar6));
      return;
    }
    LOCK();
    pbVar1 = (byte *)(unaff_RBX + -0x28087631);
    bVar6 = *pbVar1;
    *pbVar1 = *pbVar1 - 10;
    UNLOCK();
    uVar3 = *(uint *)(param_2 + 0x72);
    uVar4 = *(uint *)(param_2 + 0x72);
    out((short)param_2,(char)in_RAX);
    puVar2 = (ushort *)(in_RAX * 3 + -0x13ff3e64);
    *puVar2 = ~*puVar2;
    *unaff_RBX = (*unaff_RBX - (char)param_2) -
                 (CARRY4((uint)lVar7,uVar3) || CARRY4((uint)lVar7 + uVar4,(uint)(9 < bVar6)));
    *unaff_RBX = *unaff_RBX + (char)param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1ad2 FUN_14d7c1ad2 body=8 status=ok
// SIG undefined FUN_14d7c1ad2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1ad2(void)

{
  char in_AL;
  undefined4 unaff_EBP;
  longlong unaff_RDI;
  bool in_ZF;
  
  if (!in_ZF) {
    func_0x00017adb758f(unaff_EBP);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RDI + 0x5b) = *(char *)(unaff_RDI + 0x5b) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1ad6 FUN_14d7c1ad6 body=2 status=ok
// SIG undefined FUN_14d7c1ad6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1ad6(void)

{
  func_0x00017adb758f();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1ada FUN_14d7c1ada body=2 status=ok
// SIG undefined FUN_14d7c1ada(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1ada(void)

{
  func_0x00017adb758f();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1af8 FUN_14d7c1af8 body=8 status=ok
// SIG undefined FUN_14d7c1af8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1af8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1b04 FUN_14d7c1b04 body=2 status=ok
// SIG undefined FUN_14d7c1b04(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1b04(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1b08 FUN_14d7c1b08 body=3 status=ok
// SIG undefined FUN_14d7c1b08(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1b08(undefined8 param_1,undefined2 param_2)

{
  char in_AL;
  char cVar1;
  undefined7 in_register_00000001;
  char unaff_BL;
  bool in_CF;
  
  if (in_CF) {
    in_AL = -0x20;
  }
  cVar1 = (in_AL + -0x59) - in_CF;
  if (cVar1 < '\0') {
    out(param_2,cVar1);
    *(char *)CONCAT71(in_register_00000001,cVar1) =
         *(char *)CONCAT71(in_register_00000001,cVar1) + unaff_BL;
    out(param_2,cVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1b0c FUN_14d7c1b0c body=15 status=ok
// SIG undefined FUN_14d7c1b0c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1b0c(longlong param_1,undefined2 param_2)

{
  byte bVar1;
  char *in_RAX;
  byte bVar2;
  char unaff_BL;
  char *unaff_RSI;
  char in_ZF;
  bool in_SF;
  
  if (param_1 + -1 != 0 && in_ZF == '\0') {
    bVar1 = (byte)((ulonglong)in_RAX >> 8);
    bVar2 = (byte)(param_1 + -1);
    if (!CARRY1(bVar2,bVar1) && (byte)(bVar2 + bVar1) != '\0') {
      *unaff_RSI = *unaff_RSI + '\v';
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_SF) {
    out(param_2,(char)in_RAX);
    *in_RAX = *in_RAX + unaff_BL;
    out(param_2,(char)in_RAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1b26 FUN_14d7c1b26 body=5 status=ok
// SIG undefined FUN_14d7c1b26(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1b26(longlong param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  char *in_RAX;
  longlong unaff_RBX;
  uint *unaff_RSI;
  
  if (param_1 != 1 && (char)in_RAX == *in_RAX) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = (uint)in_RAX | *unaff_RSI;
  pbVar1 = (byte *)(unaff_RBX + -0x2b);
  bVar2 = *pbVar1;
  bVar4 = (byte)(uVar3 >> 8);
  *pbVar1 = *pbVar1 + bVar4;
  if (!CARRY1(bVar2,bVar4) && *pbVar1 != 0) {
    *(char *)unaff_RSI = (char)*unaff_RSI + (char)uVar3;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1b2b FUN_14d7c1b2b body=19 status=ok
// SIG undefined FUN_14d7c1b2b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1b2b(longlong param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  uint in_EAX;
  longlong unaff_RBX;
  uint *unaff_RSI;
  char in_ZF;
  
  if (param_1 != 1 && in_ZF != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = *unaff_RSI;
  pbVar1 = (byte *)(unaff_RBX + -0x2b);
  bVar2 = *pbVar1;
  bVar4 = (byte)((in_EAX | uVar3) >> 8);
  *pbVar1 = *pbVar1 + bVar4;
  if (!CARRY1(bVar2,bVar4) && *pbVar1 != 0) {
    *(char *)unaff_RSI = (char)*unaff_RSI + (char)(in_EAX | uVar3);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1b40 FUN_14d7c1b40 body=6 status=ok
// SIG undefined FUN_14d7c1b40(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1b40(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  longlong unaff_RDI;
  
  uVar1 = in(param_2);
  *(undefined1 *)(unaff_RDI + 1) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1b4d FUN_14d7c1b4d body=10 status=ok
// SIG undefined FUN_14d7c1b4d(void)

void FUN_14d7c1b4d(char param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  int *in_RAX;
  undefined8 unaff_RBX;
  longlong unaff_RSI;
  undefined8 unaff_R14;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 uStack0000000000000034;
  ulonglong in_stack_00000038;
  
  *(byte *)((longlong)in_RAX + -2) =
       *(byte *)((longlong)in_RAX + -2) ^ (byte)((ulonglong)unaff_RBX >> 8);
  *in_RAX = *in_RAX + (int)in_RAX;
  pcVar2 = (char *)(CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),CONCAT11(0xf2,(char)unaff_RBX)) +
                   0x209e8801);
  *pcVar2 = *pcVar2 + '\x10';
  *in_RAX = *in_RAX + (int)in_RAX;
  *(char *)((longlong)in_RAX + -0x73) = *(char *)((longlong)in_RAX + -0x73) + param_1;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  FUN_147035484();
  FUN_147035822(unaff_RSI + 400);
  *(undefined4 *)(unaff_RSI + 0x1d8) = unaff_XMM6_Da;
  *(undefined4 *)(unaff_RSI + 0x1dc) = unaff_XMM6_Db;
  *(undefined4 *)(unaff_RSI + 0x1e0) = unaff_XMM6_Dc;
  *(undefined4 *)(unaff_RSI + 0x1e4) = unaff_XMM6_Dd;
  *(undefined4 *)(unaff_RSI + 0x1e8) = unaff_XMM6_Da;
  *(undefined4 *)(unaff_RSI + 0x1ec) = unaff_XMM6_Db;
  *(undefined4 *)(unaff_RSI + 0x1f0) = unaff_XMM6_Dc;
  *(undefined4 *)(unaff_RSI + 500) = unaff_XMM6_Dd;
  *(undefined4 *)(unaff_RSI + 0x200) = unaff_XMM6_Da;
  *(undefined4 *)(unaff_RSI + 0x204) = unaff_XMM6_Db;
  *(undefined4 *)(unaff_RSI + 0x208) = unaff_XMM6_Dc;
  *(undefined4 *)(unaff_RSI + 0x20c) = unaff_XMM6_Dd;
  *(undefined8 *)(unaff_RSI + 0x230) = DAT_14c8464f0;
  uVar3 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(unaff_RSI + 0x220) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(unaff_RSI + 0x228) = uVar3;
  uVar3 = DAT_14c8463e8;
  *(undefined8 *)(unaff_RSI + 0x250) = DAT_14c8463e0;
  *(undefined8 *)(unaff_RSI + 600) = uVar3;
  uVar3 = DAT_14c8463d8;
  *(undefined8 *)(unaff_RSI + 0x240) = DAT_14c8463d0;
  *(undefined8 *)(unaff_RSI + 0x248) = uVar3;
  *(undefined8 *)(unaff_RSI + 0x270) = DAT_14c8464f0;
  uVar3 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(unaff_RSI + 0x260) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(unaff_RSI + 0x268) = uVar3;
  *(undefined8 *)(unaff_RSI + 0x288) = DAT_14c8464f0;
  uVar3 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(unaff_RSI + 0x278) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(unaff_RSI + 0x280) = uVar3;
  uVar3 = DAT_14c8463e8;
  *(undefined8 *)(unaff_RSI + 0x2a0) = DAT_14c8463e0;
  *(undefined8 *)(unaff_RSI + 0x2a8) = uVar3;
  uVar3 = DAT_14c8463d8;
  *(undefined8 *)(unaff_RSI + 0x290) = DAT_14c8463d0;
  *(undefined8 *)(unaff_RSI + 0x298) = uVar3;
  uVar3 = DAT_14c8463e8;
  *(undefined8 *)(unaff_RSI + 0x2c0) = DAT_14c8463e0;
  *(undefined8 *)(unaff_RSI + 0x2c8) = uVar3;
  uVar3 = DAT_14c8463d8;
  *(undefined8 *)(unaff_RSI + 0x2b0) = DAT_14c8463d0;
  *(undefined8 *)(unaff_RSI + 0x2b8) = uVar3;
  *(undefined8 *)(unaff_RSI + 0x2e0) = DAT_14c8464f0;
  uVar3 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(unaff_RSI + 0x2d0) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(unaff_RSI + 0x2d8) = uVar3;
  *(undefined8 *)(unaff_RSI + 0x2f8) = DAT_14c8464f0;
  uVar6 = DAT_14c8464e8._4_4_;
  uVar5 = (undefined4)DAT_14c8464e8;
  uVar4 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(unaff_RSI + 0x2e8) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(unaff_RSI + 0x2ec) = uVar4;
  *(undefined4 *)(unaff_RSI + 0x2f0) = uVar5;
  *(undefined4 *)(unaff_RSI + 0x2f4) = uVar6;
  *(undefined8 *)(unaff_RSI + 800) = unaff_R14;
  *(int *)(unaff_RSI + 0x328) = (int)unaff_R14;
  *(undefined8 *)(unaff_RSI + 0x310) = unaff_R14;
  *(undefined4 *)(unaff_RSI + 0x300) = unaff_XMM6_Da;
  *(undefined4 *)(unaff_RSI + 0x304) = unaff_XMM6_Db;
  *(undefined4 *)(unaff_RSI + 0x308) = unaff_XMM6_Dc;
  *(undefined4 *)(unaff_RSI + 0x30c) = unaff_XMM6_Dd;
  *(undefined4 *)(unaff_RSI + 0x330) = unaff_XMM6_Da;
  *(undefined4 *)(unaff_RSI + 0x334) = unaff_XMM6_Db;
  *(undefined4 *)(unaff_RSI + 0x338) = unaff_XMM6_Dc;
  *(undefined4 *)(unaff_RSI + 0x33c) = unaff_XMM6_Dd;
  uStack0000000000000034 = 0x40a00000;
  FUN_147034930(unaff_RSI + 0x340);
  puVar7 = (undefined8 *)FUN_14001cc68(400);
  puVar7[1] = &DAT_100000001;
  *puVar7 = &PTR_FUN_14a5713d0;
  puVar1 = puVar7 + 2;
  memset(puVar1,0,0x180);
  FUN_1477cafba(puVar1);
  *(undefined8 **)(unaff_RSI + 0x378) = puVar1;
  *(undefined8 **)(unaff_RSI + 0x380) = puVar7;
  puVar7 = (undefined8 *)FUN_14001cc68(400);
  puVar7[1] = &DAT_100000001;
  *puVar7 = &PTR_FUN_14a5713d0;
  puVar1 = puVar7 + 2;
  memset(puVar1,0,0x180);
  FUN_1477cafba(puVar1);
  *(undefined8 **)(unaff_RSI + 0x388) = puVar1;
  *(undefined8 **)(unaff_RSI + 0x390) = puVar7;
  puVar7 = (undefined8 *)FUN_14001cc68(400);
  puVar7[1] = &DAT_100000001;
  *puVar7 = &PTR_FUN_14a5713d0;
  puVar1 = puVar7 + 2;
  memset(puVar1,0,0x180);
  FUN_1477cafba(puVar1);
  *(undefined8 **)(unaff_RSI + 0x398) = puVar1;
  *(undefined8 **)(unaff_RSI + 0x3a0) = puVar7;
  puVar7 = (undefined8 *)FUN_14001cc68(400);
  puVar7[1] = &DAT_100000001;
  *puVar7 = &PTR_FUN_14a5713d0;
  puVar1 = puVar7 + 2;
  memset(puVar1,0,0x180);
  FUN_1477cafba(puVar1);
  *(undefined8 **)(unaff_RSI + 0x3a8) = puVar1;
  *(undefined8 **)(unaff_RSI + 0x3b0) = puVar7;
  *(undefined8 *)(unaff_RSI + 0x3e0) = DAT_14c8464f0;
  uVar3 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(unaff_RSI + 0x3d0) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(unaff_RSI + 0x3d8) = uVar3;
  uVar3 = DAT_14c8463e8;
  *(undefined8 *)(unaff_RSI + 0x400) = DAT_14c8463e0;
  *(undefined8 *)(unaff_RSI + 0x408) = uVar3;
  uVar3 = DAT_14c8463d8;
  *(undefined8 *)(unaff_RSI + 0x3f0) = DAT_14c8463d0;
  *(undefined8 *)(unaff_RSI + 0x3f8) = uVar3;
  *(undefined8 *)(unaff_RSI + 0x420) = DAT_14c8464f0;
  uVar3 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(unaff_RSI + 0x410) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(unaff_RSI + 0x418) = uVar3;
  *(undefined8 *)(unaff_RSI + 0x438) = DAT_14c8464f0;
  uVar3 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(unaff_RSI + 0x428) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(unaff_RSI + 0x430) = uVar3;
  uVar3 = DAT_14c8463e8;
  *(undefined8 *)(unaff_RSI + 0x450) = DAT_14c8463e0;
  *(undefined8 *)(unaff_RSI + 0x458) = uVar3;
  uVar3 = DAT_14c8463d8;
  *(undefined8 *)(unaff_RSI + 0x440) = DAT_14c8463d0;
  *(undefined8 *)(unaff_RSI + 0x448) = uVar3;
  uVar3 = DAT_14c8463e8;
  *(undefined8 *)(unaff_RSI + 0x470) = DAT_14c8463e0;
  *(undefined8 *)(unaff_RSI + 0x478) = uVar3;
  uVar3 = DAT_14c8463d8;
  *(undefined8 *)(unaff_RSI + 0x460) = DAT_14c8463d0;
  *(undefined8 *)(unaff_RSI + 0x468) = uVar3;
  *(undefined8 *)(unaff_RSI + 0x490) = DAT_14c8464f0;
  uVar3 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(unaff_RSI + 0x480) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(unaff_RSI + 0x488) = uVar3;
  *(undefined8 *)(unaff_RSI + 0x4a8) = DAT_14c8464f0;
  uVar6 = DAT_14c8464e8._4_4_;
  uVar5 = (undefined4)DAT_14c8464e8;
  uVar4 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(unaff_RSI + 0x498) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(unaff_RSI + 0x49c) = uVar4;
  *(undefined4 *)(unaff_RSI + 0x4a0) = uVar5;
  *(undefined4 *)(unaff_RSI + 0x4a4) = uVar6;
  *(undefined8 *)(unaff_RSI + 0x4c0) = unaff_R14;
  *(undefined4 *)(unaff_RSI + 0x4b0) = unaff_XMM6_Da;
  *(undefined4 *)(unaff_RSI + 0x4b4) = unaff_XMM6_Db;
  *(undefined4 *)(unaff_RSI + 0x4b8) = unaff_XMM6_Dc;
  *(undefined4 *)(unaff_RSI + 0x4bc) = unaff_XMM6_Dd;
  *(undefined4 *)(unaff_RSI + 0x510) = unaff_XMM6_Da;
  *(undefined4 *)(unaff_RSI + 0x514) = unaff_XMM6_Db;
  *(undefined4 *)(unaff_RSI + 0x518) = unaff_XMM6_Dc;
  *(undefined4 *)(unaff_RSI + 0x51c) = unaff_XMM6_Dd;
  *(undefined4 *)(unaff_RSI + 0x500) = unaff_XMM6_Da;
  *(undefined4 *)(unaff_RSI + 0x504) = unaff_XMM6_Db;
  *(undefined4 *)(unaff_RSI + 0x508) = unaff_XMM6_Dc;
  *(undefined4 *)(unaff_RSI + 0x50c) = unaff_XMM6_Dd;
  *(undefined4 *)(unaff_RSI + 0x4f0) = unaff_XMM6_Da;
  *(undefined4 *)(unaff_RSI + 0x4f4) = unaff_XMM6_Db;
  *(undefined4 *)(unaff_RSI + 0x4f8) = unaff_XMM6_Dc;
  *(undefined4 *)(unaff_RSI + 0x4fc) = unaff_XMM6_Dd;
  *(undefined4 *)(unaff_RSI + 0x4e0) = unaff_XMM6_Da;
  *(undefined4 *)(unaff_RSI + 0x4e4) = unaff_XMM6_Db;
  *(undefined4 *)(unaff_RSI + 0x4e8) = unaff_XMM6_Dc;
  *(undefined4 *)(unaff_RSI + 0x4ec) = unaff_XMM6_Dd;
  *(undefined4 *)(unaff_RSI + 0x4d0) = unaff_XMM6_Da;
  *(undefined4 *)(unaff_RSI + 0x4d4) = unaff_XMM6_Db;
  *(undefined4 *)(unaff_RSI + 0x4d8) = unaff_XMM6_Dc;
  *(undefined4 *)(unaff_RSI + 0x4dc) = unaff_XMM6_Dd;
  if ((in_stack_00000038 ^ (ulonglong)&stack0x00000000) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14d7c1b5e FUN_14d7c1b5e body=32 status=ok
// SIG undefined FUN_14d7c1b5e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1b5e(longlong param_1,undefined2 param_2)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  byte bVar7;
  int *in_RAX;
  longlong *plVar9;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  undefined4 *puVar10;
  char unaff_R14B;
  byte *pbVar8;
  
  *unaff_RDI = *unaff_RSI;
  if (param_1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = *in_RAX + 0x5b78bc42;
  bVar7 = (byte)in_RAX;
  pbVar8 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) +
                                     (char)((ulonglong)param_1 >> 8),bVar7));
  plVar5 = (longlong *)register0x00000020;
  puVar6 = (undefined4 *)(unaff_RDI + 1);
  do {
    puVar10 = puVar6;
    plVar9 = plVar5;
    param_2 = CONCAT11(0xb8,(char)param_2);
    uVar4 = in(param_2);
    *puVar10 = uVar4;
    pcVar1 = unaff_RSI + 0x5c216735;
    cVar2 = *pcVar1;
    *pcVar1 = *pcVar1 + unaff_R14B;
    plVar5 = plVar9 + 1;
    puVar6 = puVar10 + 1;
  } while (*pcVar1 != '\0' && SCARRY1(cVar2,unaff_R14B) == *pcVar1 < '\0');
  if (*pcVar1 < '\0') {
    *pbVar8 = *pbVar8 + bVar7;
    bVar3 = *pbVar8;
    *pbVar8 = *pbVar8 + bVar7;
    *(byte *)(puVar10 + -0xd) = *(byte *)(puVar10 + -0xd) >> 1 | CARRY1(bVar3,bVar7) << 7;
    *plVar9 = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 == 1 || (int)pbVar8 != 0x19d1e700) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1b80 FUN_14d7c1b80 body=17 status=ok
// SIG undefined FUN_14d7c1b80(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1b80(void)

{
  byte bVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RDI;
  
  bVar1 = *(byte *)CONCAT44(in_register_00000004,in_EAX);
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (byte)in_EAX;
  *(byte *)(unaff_RDI + -0x38) = *(byte *)(unaff_RDI + -0x38) >> 1 | CARRY1(bVar1,(byte)in_EAX) << 7
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1b93 FUN_14d7c1b93 body=25 status=ok
// SIG undefined FUN_14d7c1b93(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1b93(int param_1,ulonglong param_2)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  byte in_AL;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong lVar5;
  ushort uVar6;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  char unaff_R14B;
  longlong lStack_8;
  
  lVar5 = (ulonglong)(uint)(param_1 << 10) - 1;
  if (lVar5 == 0 || param_1 << 10 == 0) {
    out(*unaff_RSI,(short)param_2);
    *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
         + (int)lVar5;
    *(char *)(param_2 - 0x44) = *(char *)(param_2 - 0x44) >> ((byte)lVar5 & 0x1f);
    uRam598924e82f70f6e2 = CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL + 0x34));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while( true ) {
    pcVar1 = (char *)(unaff_RSI + 0x170859cd);
    cVar2 = *pcVar1;
    *pcVar1 = *pcVar1 + unaff_R14B;
    if (*pcVar1 == '\0' || SCARRY1(cVar2,unaff_R14B) != *pcVar1 < '\0') break;
    uVar6 = CONCAT11(0xb8,(char)param_2);
    param_2 = (ulonglong)uVar6;
    uVar4 = in(uVar6);
    *unaff_RDI = uVar4;
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + 8);
    unaff_RDI = unaff_RDI + 1;
  }
  if (*pcVar1 < '\0') {
    *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) + in_AL;
    bVar3 = *(byte *)CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
    *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) + in_AL;
    *(byte *)(unaff_RDI + -0xe) = *(byte *)(unaff_RDI + -0xe) >> 1 | CARRY1(bVar3,in_AL) << 7;
    *(longlong *)((longlong)register0x00000020 + -8) = lVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (lVar5 == 1 || CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)) != 0x19d1e700) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1b9b FUN_14d7c1b9b body=8 status=ok
// SIG undefined FUN_14d7c1b9b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1b9b(int param_1,longlong param_2)

{
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  undefined4 *unaff_RSI;
  
  out(*unaff_RSI,(short)param_2);
  *(int *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + param_1;
  *(char *)(param_2 + -0x44) = *(char *)(param_2 + -0x44) >> ((byte)param_1 & 0x1f);
  uRam598924e82f70f6e2 = CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + '4');
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1bab FUN_14d7c1bab body=1 status=ok
// SIG undefined FUN_14d7c1bab(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1bab(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1bb3 FUN_14d7c1bb3 body=8 status=ok
// SIG undefined FUN_14d7c1bb3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1bb3(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1bbc FUN_14d7c1bbc body=2 status=ok
// SIG undefined FUN_14d7c1bbc(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1bbc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1bc0 FUN_14d7c1bc0 body=27 status=ok
// SIG undefined FUN_14d7c1bc0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1bc0(undefined8 param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint in_EAX;
  longlong unaff_RSI;
  longlong in_R10;
  
  LOCK();
  *(char *)(unaff_RSI + -0x23) = (char)((ulonglong)param_1 >> 8);
  UNLOCK();
  pbVar1 = (byte *)(CONCAT71((uint7)(uint3)((in_EAX & 0x7b9187f2) + 0xa94806a5 >> 8),0xd0) +
                   in_R10 * 4);
  bVar2 = *pbVar1;
  *pbVar1 = (in_EAX & 0x7b9187f2) < 0x56b7f95b | bVar2 << 1;
  if ((bVar2 & 0x80) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1bdc FUN_14d7c1bdc body=2 status=ok
// SIG undefined FUN_14d7c1bdc(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1bdc(longlong param_1)

{
  int in_EAX;
  undefined4 unaff_EDI;
  undefined4 unaff_0000003c;
  char in_CF;
  
  *(char *)CONCAT44(unaff_0000003c,unaff_EDI) =
       (*(char *)CONCAT44(unaff_0000003c,unaff_EDI) - (char)((ulonglong)param_1 >> 8)) - in_CF;
  if (param_1 == 1 || in_EAX != 0x19d1e700) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1bf6 FUN_14d7c1bf6 body=2 status=ok
// SIG undefined FUN_14d7c1bf6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1bf6(longlong param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1bfa FUN_14d7c1bfa body=4 status=ok
// SIG undefined FUN_14d7c1bfa(void)

void FUN_14d7c1bfa(void)

{
  code *pcVar1;
  longlong unaff_RSI;
  
  *(int *)(unaff_RSI + 0x52) = *(int *)(unaff_RSI + 0x52) << 1;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7c1bfe FUN_14d7c1bfe body=4 status=ok
// SIG undefined FUN_14d7c1bfe(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1bfe(longlong param_1,ulonglong param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  byte bVar6;
  byte *in_RAX;
  ushort uVar7;
  longlong unaff_RBX;
  undefined4 *unaff_RSI;
  int *unaff_RDI;
  char unaff_R14B;
  bool in_CF;
  bool in_ZF;
  char in_SF;
  char in_OF;
  longlong lStack_8;
  
  bVar6 = (byte)in_RAX;
  if (in_ZF || in_OF != in_SF) {
    if (in_CF || in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    in_RAX[-0x23] = in_RAX[-0x23] + (char)(param_2 >> 8);
    puVar2 = (undefined1 *)((longlong)unaff_RSI + unaff_RBX + 0x403f5d9b);
    *puVar2 = *puVar2;
    *unaff_RDI = (int)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_1 = param_1 + -1;
  if (param_1 != 0 && in_ZF == false) {
    while( true ) {
      pcVar1 = (char *)(unaff_RSI + 0x170859cd);
      cVar3 = *pcVar1;
      *pcVar1 = *pcVar1 + unaff_R14B;
      if (*pcVar1 == '\0' || SCARRY1(cVar3,unaff_R14B) != *pcVar1 < '\0') break;
      uVar7 = CONCAT11(0xb8,(char)param_2);
      param_2 = (ulonglong)uVar7;
      iVar5 = in(uVar7);
      *unaff_RDI = iVar5;
      register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + 8);
      unaff_RDI = unaff_RDI + 1;
    }
    if (*pcVar1 >= '\0') {
      if (param_1 != 1 && (int)in_RAX == 0x19d1e700) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *in_RAX = *in_RAX + bVar6;
    bVar4 = *in_RAX;
    *in_RAX = *in_RAX + bVar6;
    *(byte *)(unaff_RDI + -0xe) = *(byte *)(unaff_RDI + -0xe) >> 1 | CARRY1(bVar4,bVar6) << 7;
    *(longlong *)((longlong)register0x00000020 + -8) = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*unaff_RSI,(short)param_2);
  *(int *)in_RAX = *(int *)in_RAX + (int)param_1;
  *(char *)(param_2 - 0x44) = *(char *)(param_2 - 0x44) >> ((byte)param_1 & 0x1f);
  uRam598924e82f70f6e2 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar6 + 0x34);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1c03 FUN_14d7c1c03 body=14 status=ok
// SIG undefined FUN_14d7c1c03(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1c03(longlong param_1)

{
  undefined1 *puVar1;
  int in_EAX;
  longlong unaff_RBX;
  longlong unaff_RSI;
  int *unaff_RDI;
  bool in_OF;
  
  if (!in_OF) {
    puVar1 = (undefined1 *)(unaff_RSI + 0x403f5d9b + unaff_RBX);
    *puVar1 = *puVar1;
    *unaff_RDI = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 != 1 && in_EAX == 0x19d1e700) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1c14 FUN_14d7c1c14 body=2 status=ok
// SIG undefined FUN_14d7c1c14(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1c14(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1c1d FUN_14d7c1c1d body=8 status=ok
// SIG undefined FUN_14d7c1c1d(void)

void FUN_14d7c1c1d(undefined8 param_1)

{
  longlong unaff_RBX;
  
  *(char *)(unaff_RBX + -0x622fe1af) =
       *(char *)(unaff_RBX + -0x622fe1af) + (char)((ulonglong)param_1 >> 8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7c1c26 FUN_14d7c1c26 body=2 status=ok
// SIG undefined FUN_14d7c1c26(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1c26(undefined8 param_1,undefined2 param_2)

{
  undefined4 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1c2e FUN_14d7c1c2e body=2 status=ok
// SIG undefined FUN_14d7c1c2e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1c2e(longlong param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined7 in_register_00000001;
  longlong unaff_RSI;
  longlong in_R10;
  byte in_CF;
  
  if (param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  LOCK();
  *(undefined1 *)(unaff_RSI + -0x23) = 0;
  UNLOCK();
  pbVar1 = (byte *)(CONCAT71(in_register_00000001,0xd0) + in_R10 * 4);
  bVar2 = *pbVar1;
  *pbVar1 = in_CF | bVar2 << 1;
  if ((bVar2 & 0x80) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1c3b FUN_14d7c1c3b body=2 status=ok
// SIG undefined FUN_14d7c1c3b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1c3b(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1c40 FUN_14d7c1c40 body=23 status=ok
// SIG undefined FUN_14d7c1c40(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c1c40(longlong param_1)

{
  longlong lVar1;
  undefined4 in_EAX;
  undefined4 *unaff_RDI;
  bool bVar2;
  bool in_ZF;
  
  lVar1 = (longlong)*(int *)(param_1 + 0x5e942d88) * -0x4d;
  bVar2 = (int)lVar1 == lVar1;
  if (!bVar2 || in_ZF) {
    FUN_14d7c1c1d();
    return;
  }
  if (bVar2) {
    _DAT_1c061b3c3 = SUB84(unaff_RDI,0);
    *unaff_RDI = in_EAX;
    if (!in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1c54 FUN_14d7c1c54 body=2 status=ok
// SIG undefined FUN_14d7c1c54(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1c54(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1c61 FUN_14d7c1c61 body=2 status=ok
// SIG undefined FUN_14d7c1c61(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1c61(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1c6d FUN_14d7c1c6d body=2 status=ok
// SIG undefined FUN_14d7c1c6d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1c6d(undefined8 param_1,undefined2 param_2)

{
  undefined1 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1c75 FUN_14d7c1c75 body=4 status=ok
// SIG undefined FUN_14d7c1c75(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c1c75(undefined4 param_1)

{
  byte *pbVar1;
  byte bVar2;
  char in_AL;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  undefined4 *unaff_RDI;
  byte in_CF;
  byte in_PF;
  byte in_AF;
  bool in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  float10 in_ST0;
  longlong unaff_retaddr;
  byte bVar3;
  
  if (!in_ZF && in_OF == in_SF) {
    *(ulonglong *)(unaff_retaddr + -8) =
         (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_OF & 1) * 0x800 |
         (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
         (ulonglong)(in_SF & 1) * 0x80 | (ulonglong)(in_ZF & 1) * 0x40 |
         (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)(in_PF & 1) * 4 | (ulonglong)(in_CF & 1) |
         (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
         (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
    *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) + in_AL;
    pbVar1 = (byte *)(CONCAT44(in_register_00000004,
                               CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + -0x23);
    *pbVar1 = *pbVar1 ^ (byte)param_1;
    *(int *)((longlong)unaff_RDI + unaff_RBX * 8 + 0x35) = (int)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar1 = (byte *)(unaff_RBX + -0x5f);
  bVar2 = *pbVar1;
  bRam00000001962f7adc = (byte)((uint)param_1 >> 8);
  *pbVar1 = *pbVar1 + bRam00000001962f7adc;
  bVar3 = *pbVar1;
  if (CARRY1(bVar2,bRam00000001962f7adc) || bVar3 == 0) {
    FUN_14d7c1c1d();
    return;
  }
  if (CARRY1(bVar2,bRam00000001962f7adc)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_1c061b3c3 = SUB84(unaff_RDI,0);
  *unaff_RDI = CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  if (bVar3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// FUNCTION 14d7c1c7b FUN_14d7c1c7b body=7 status=ok
// SIG undefined FUN_14d7c1c7b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1c7b(byte param_1)

{
  byte *pbVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RBX;
  longlong unaff_RDI;
  float10 in_ST0;
  
  pbVar1 = (byte *)(CONCAT71(in_register_00000001,in_AL) + -0x23);
  *pbVar1 = *pbVar1 ^ param_1;
  *(int *)(unaff_RDI + 0x35 + unaff_RBX * 8) = (int)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1c88 FUN_14d7c1c88 body=10 status=ok
// SIG undefined FUN_14d7c1c88(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1c88(void)

{
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1c94 FUN_14d7c1c94 body=4 status=ok
// SIG undefined FUN_14d7c1c94(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1c94(longlong param_1,ushort param_2)

{
  undefined1 uVar1;
  short sVar2;
  ulonglong unaff_RBX;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  
  uVar1 = in(param_2);
  *(undefined1 *)(unaff_RDI + 1) = uVar1;
  if (param_1 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar2 = (ushort)(byte)(unaff_RBX & 0xffffffff) * (param_2 & 0xff);
  out(*unaff_RSI,param_2);
  if ((int)CONCAT71((int7)(CONCAT62((int6)((unaff_RBX & 0xffffffff) >> 0x10),sVar2) >> 8),
                    DAT_8822a1fb2f8f4b63) + 0x6405f942 + (uint)((char)((ushort)sVar2 >> 8) != '\0')
      != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1c98 FUN_14d7c1c98 body=32 status=ok
// SIG undefined FUN_14d7c1c98(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1c98(undefined8 param_1,ushort param_2)

{
  short sVar1;
  ulonglong unaff_RBX;
  undefined4 *unaff_RSI;
  
  sVar1 = (ushort)(byte)(unaff_RBX & 0xffffffff) * (param_2 & 0xff);
  out(*unaff_RSI,param_2);
  if ((int)CONCAT71((int7)(CONCAT62((int6)((unaff_RBX & 0xffffffff) >> 0x10),sVar1) >> 8),
                    DAT_8822a1fb2f8f4b63) + 0x6405f942 + (uint)((char)((ushort)sVar1 >> 8) != '\0')
      != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1ccc FUN_14d7c1ccc body=6 status=ok
// SIG undefined FUN_14d7c1ccc(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1ccc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1cd9 FUN_14d7c1cd9 body=16 status=ok
// SIG undefined FUN_14d7c1cd9(void)

void FUN_14d7c1cd9(byte param_1)

{
  uint *puVar1;
  longlong in_RAX;
  
  puVar1 = (uint *)(in_RAX + -0x54d2f96d);
  *puVar1 = *puVar1 << (param_1 & 0x1f) | *puVar1 >> 0x20 - (param_1 & 0x1f);
  return;
}



// FUNCTION 14d7c1ce9 FUN_14d7c1ce9 body=12 status=ok
// SIG undefined FUN_14d7c1ce9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1ce9(void)

{
  longlong unaff_retaddr;
  
  *(undefined **)(unaff_retaddr + -8) = &LAB_14d7c1cf5;
  func_0x00012fdf4457();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1cfd FUN_14d7c1cfd body=6 status=ok
// SIG undefined FUN_14d7c1cfd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1cfd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1d0d FUN_14d7c1d0d body=2 status=ok
// SIG undefined FUN_14d7c1d0d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c1d0d(void)

{
  byte in_AL;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  uint *unaff_RDI;
  
  if ((POPCOUNT(in_AL | 0x80) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_1c061b3c3 = SUB84(unaff_RDI,0);
  *unaff_RDI = CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)) | 0x80;
  if ((in_AL | 0x80) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// FUNCTION 14d7c1d11 FUN_14d7c1d11 body=5 status=ok
// SIG undefined FUN_14d7c1d11(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1d11(void)

{
  undefined4 in_EAX;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1d17 FUN_14d7c1d17 body=16 status=ok
// SIG undefined FUN_14d7c1d17(void)

undefined4 FUN_14d7c1d17(byte param_1)

{
  int iVar1;
  undefined8 in_RAX;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = 0x2b;
  iVar1 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                        (byte)in_RAX << (param_1 & 7) | (byte)in_RAX >> 8 - (param_1 & 7)) +
          0x7748b229;
  return CONCAT22((short)((uint)iVar1 >> 0x10),CONCAT11(0xd8,(char)iVar1));
}



// FUNCTION 14d7c1d36 FUN_14d7c1d36 body=35 status=ok
// SIG undefined FUN_14d7c1d36(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c1d54) overlaps instruction at (ram,0x00014d7c1d53)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7c1d5b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7c1d36(char *param_1)

{
  longlong in_RAX;
  byte in_R10B;
  longlong unaff_R13;
  bool in_PF;
  
  out(0x20,(int)in_RAX);
  if (in_PF) {
    *(byte *)(unaff_R13 + 0xf) = *(byte *)(unaff_R13 + 0xf) | in_R10B;
    do {
    } while( true );
  }
  LOCK();
  *(char *)(in_RAX + 0x7132ddd5) = (char)((ulonglong)in_RAX >> 8);
  UNLOCK();
                    /* WARNING: Do nothing block with infinite loop */
  *param_1 = *param_1 + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1d5a FUN_14d7c1d5a body=11 status=ok
// SIG undefined FUN_14d7c1d5a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1d5a(char *param_1)

{
  *param_1 = *param_1 + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1d81 FUN_14d7c1d81 body=1 status=ok
// SIG undefined FUN_14d7c1d81(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1d81(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1d89 FUN_14d7c1d89 body=6 status=ok
// SIG undefined FUN_14d7c1d89(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1d89(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1d9d FUN_14d7c1d9d body=8 status=ok
// SIG undefined FUN_14d7c1d9d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1d9d(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  byte bVar6;
  undefined1 *unaff_RDI;
  
  in(0x37);
  pbVar2 = unaff_RDI + 0xaa56b9;
  bVar3 = *pbVar2;
  bVar6 = (byte)((ulonglong)param_2 >> 8);
  *pbVar2 = *pbVar2 + bVar6;
  uVar4 = in((short)param_2);
  *unaff_RDI = uVar4;
  if (CARRY1(bVar3,bVar6)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar5 = CONCAT11(bVar6 ^ *(byte *)(param_1 + -2),(char)param_2);
  piVar1 = (int *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),uVar5) + 0x24);
  *piVar1 = *piVar1 + (int)param_1;
  in(uVar5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1da6 FUN_14d7c1da6 body=8 status=ok
// SIG undefined FUN_14d7c1da6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1da6(undefined8 param_1)

{
  char *pcVar1;
  undefined1 in_AL;
  undefined1 unaff_BL;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = in_AL;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(0xb9,unaff_BL)) + -0x56 + unaff_RSI * 2);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1dbf FUN_14d7c1dbf body=9 status=ok
// SIG undefined FUN_14d7c1dbf(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1dbf(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1dcb FUN_14d7c1dcb body=2 status=ok
// SIG undefined FUN_14d7c1dcb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1dcb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1de1 FUN_14d7c1de1 body=2 status=ok
// SIG undefined FUN_14d7c1de1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1de1(longlong param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RSI;
  longlong *unaff_RDI;
  float10 in_ST0;
  
  uVar1 = in(param_2);
  out(*unaff_RSI,param_2);
  out(param_2,(char)uVar1);
  *unaff_RDI = (longlong)(in_ST0 / (float10)*(short *)(param_1 + 0x67));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1de5 FUN_14d7c1de5 body=14 status=ok
// SIG undefined FUN_14d7c1de5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1de5(longlong param_1,undefined2 param_2)

{
  undefined1 in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RBP;
  longlong *unaff_RDI;
  float10 in_ST0;
  
  LOCK();
  *(int *)(unaff_RBP + 0x48 + CONCAT71(in_register_00000001,in_AL)) = (int)&stack0x00000000;
  UNLOCK();
  out(param_2,in_AL);
  *unaff_RDI = (longlong)(in_ST0 / (float10)*(short *)(param_1 + 0x67));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1dff thunk_EXT_FUN_be4ef352 body=7 status=ok
// SIG undefined thunk_EXT_FUN_be4ef352(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_be4ef352(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1e10 FUN_14d7c1e10 body=18 status=ok
// SIG undefined FUN_14d7c1e10(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1e10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1e2d FUN_14d7c1e2d body=11 status=ok
// SIG undefined FUN_14d7c1e2d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1e2d(void)

{
  in(0x9e);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1e39 FUN_14d7c1e39 body=3 status=ok
// SIG undefined FUN_14d7c1e39(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c1efc) overlaps instruction at (ram,0x00014d7c1efa)
    */

void FUN_14d7c1e39(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char cVar6;
  uint in_EAX;
  uint uVar7;
  byte bVar9;
  ulonglong uVar8;
  uint *unaff_RSI;
  undefined4 *unaff_RDI;
  byte in_CF;
  
  uVar5 = in_EAX + *(uint *)(param_1 + 0x37);
  uVar7 = uVar5 + in_CF;
  cVar6 = (char)uVar7 + *(char *)(ulonglong)uVar7 +
          (CARRY4(in_EAX,*(uint *)(param_1 + 0x37)) || CARRY4(uVar5,(uint)in_CF));
  *unaff_RSI = *unaff_RSI - (int)unaff_RDI;
  if ((POPCOUNT(*unaff_RSI & 0xff) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = CONCAT31((int3)(uVar7 >> 8),cVar6);
  pbVar1 = (byte *)(param_1 + -0x3a);
  bVar2 = *pbVar1;
  bVar9 = (byte)((ulonglong)param_1 >> 8);
  *pbVar1 = *pbVar1 + bVar9;
  if ((POPCOUNT(*pbVar1) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar8 = param_1 - 1;
  if (uVar8 != 0 && *pbVar1 != 0) {
    *(char *)(unaff_RDI + -0x1b5d567f) = *(char *)(unaff_RDI + -0x1b5d567f) + (char)param_2;
    LOCK();
    *(char *)(param_1 + 0x301a0d9ab) = (cVar6 - (char)unaff_RDI[1]) - CARRY1(bVar2,bVar9);
    UNLOCK();
  }
  else {
    if (!CARRY1(bVar2,bVar9) && *pbVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar3 = *(int *)(param_2 + -0x5ee1ff69);
    uVar4 = in((short)param_2);
    unaff_RDI[1] = uVar4;
    uVar4 = in((short)param_2);
    unaff_RDI[2] = uVar4;
    if ((POPCOUNT((int)uVar8 - iVar3 & 0xff) & 1U) != 0) {
      uRam00000001237fb5b6 = uRam00000001237fb5b6 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1e42 FUN_14d7c1e42 body=3 status=ok
// SIG undefined FUN_14d7c1e42(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c1efc) overlaps instruction at (ram,0x00014d7c1efa)
    */

void FUN_14d7c1e42(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_EAX;
  byte bVar6;
  ulonglong uVar5;
  undefined4 *unaff_RDI;
  bool in_PF;
  
  if (!in_PF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = in_EAX;
  pbVar1 = (byte *)(param_1 + -0x3a);
  bVar2 = *pbVar1;
  bVar6 = (byte)((ulonglong)param_1 >> 8);
  *pbVar1 = *pbVar1 + bVar6;
  if ((POPCOUNT(*pbVar1) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar5 = param_1 - 1;
  if (uVar5 != 0 && *pbVar1 != 0) {
    *(char *)(unaff_RDI + -0x1b5d567f) = *(char *)(unaff_RDI + -0x1b5d567f) + (char)param_2;
    LOCK();
    *(char *)(param_1 + 0x301a0d9ab) = ((char)in_EAX - (char)unaff_RDI[1]) - CARRY1(bVar2,bVar6);
    UNLOCK();
  }
  else {
    if (!CARRY1(bVar2,bVar6) && *pbVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar3 = *(int *)(param_2 + -0x5ee1ff69);
    uVar4 = in((short)param_2);
    unaff_RDI[1] = uVar4;
    uVar4 = in((short)param_2);
    unaff_RDI[2] = uVar4;
    if ((POPCOUNT((int)uVar5 - iVar3 & 0xff) & 1U) != 0) {
      uRam00000001237fb5b6 = uRam00000001237fb5b6 >> 1 | (uint)((uVar5 & 1) != 0) << 0x1f;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1e4b FUN_14d7c1e4b body=8 status=ok
// SIG undefined FUN_14d7c1e4b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1e4b(undefined8 param_1,undefined2 param_2)

{
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1e57 FUN_14d7c1e57 body=7 status=ok
// SIG undefined FUN_14d7c1e57(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1e57(undefined8 param_1,char *param_2)

{
  char in_AL;
  char in_CF;
  
  *param_2 = (*param_2 - in_AL) - in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1e5f FUN_14d7c1e5f body=4 status=ok
// SIG undefined FUN_14d7c1e5f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1e5f(undefined4 param_1,undefined2 param_2)

{
  char *pcVar1;
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  in(param_2);
  out(0xf6,param_1);
  pcVar1 = (char *)(unaff_RBX + 0x2b + unaff_RBP * 4);
  *pcVar1 = *pcVar1 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1e63 FUN_14d7c1e63 body=11 status=ok
// SIG undefined FUN_14d7c1e63(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1e63(undefined8 param_1,char param_2)

{
  char *pcVar1;
  undefined4 in_EAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  out(0xf6,in_EAX);
  pcVar1 = (char *)(unaff_RBX + 0x2b + unaff_RBP * 4);
  *pcVar1 = *pcVar1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1e9b FUN_14d7c1e9b body=13 status=ok
// SIG undefined FUN_14d7c1e9b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c1efc) overlaps instruction at (ram,0x00014d7c1efa)
    */

void FUN_14d7c1e9b(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_EAX;
  byte bVar7;
  ulonglong uVar6;
  int unaff_EBX;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
  byte in_CF;
  
  out(0x92,(char)in_EAX);
  pcVar2 = (char *)((ulonglong)(unaff_EBX << 1 | (uint)in_CF) + unaff_RSI * 4);
  *pcVar2 = *pcVar2 + (char)((ulonglong)param_2 >> 8);
  *unaff_RDI = in_EAX;
  pbVar1 = (byte *)(param_1 + -0x3a);
  bVar3 = *pbVar1;
  bVar7 = (byte)((ulonglong)param_1 >> 8);
  *pbVar1 = *pbVar1 + bVar7;
  if ((POPCOUNT(*pbVar1) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar6 = param_1 - 1;
  if (uVar6 != 0 && *pbVar1 != 0) {
    *(char *)(unaff_RDI + -0x1b5d567f) = *(char *)(unaff_RDI + -0x1b5d567f) + (char)param_2;
    LOCK();
    *(char *)(param_1 + 0x301a0d9ab) = ((char)in_EAX - (char)unaff_RDI[1]) - CARRY1(bVar3,bVar7);
    UNLOCK();
  }
  else {
    if (!CARRY1(bVar3,bVar7) && *pbVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar4 = *(int *)(param_2 + -0x5ee1ff69);
    uVar5 = in((short)param_2);
    unaff_RDI[1] = uVar5;
    uVar5 = in((short)param_2);
    unaff_RDI[2] = uVar5;
    if ((POPCOUNT((int)uVar6 - iVar4 & 0xff) & 1U) != 0) {
      uRam00000001237fb5b6 = uRam00000001237fb5b6 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1ea9 FUN_14d7c1ea9 body=6 status=ok
// SIG undefined FUN_14d7c1ea9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1ea9(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1eba FUN_14d7c1eba body=1 status=ok
// SIG undefined FUN_14d7c1eba(void)

void FUN_14d7c1eba(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7c1ec3 FUN_14d7c1ec3 body=3 status=ok
// SIG undefined FUN_14d7c1ec3(void)

ulonglong FUN_14d7c1ec3(char *param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  byte *in_RAX;
  undefined1 *unaff_RSI;
  int unaff_EDI;
  
  iVar1 = *(int *)(param_2 + 0x69);
  *in_RAX = *in_RAX | (byte)in_RAX;
  uVar3 = (int)in_RAX - 0x9d1977;
  *(uint *)(ulonglong)(uint)(unaff_EDI + iVar1) = uVar3;
  uVar2 = (ulonglong)uVar3 *
          (CONCAT71((int7)((ulonglong)param_2 >> 8),(char)param_2 - *param_1) & 0xffffffff);
  out(*unaff_RSI,(short)(uVar2 >> 0x20));
  return uVar2 & 0xffffffff;
}



// FUNCTION 14d7c1ecd FUN_14d7c1ecd body=7 status=ok
// SIG undefined FUN_14d7c1ecd(void)

ulonglong FUN_14d7c1ecd(char *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  uint in_EAX;
  undefined1 *unaff_RSI;
  uint *unaff_RDI;
  
  *unaff_RDI = in_EAX;
  uVar1 = (ulonglong)in_EAX *
          (CONCAT71((int7)((ulonglong)param_2 >> 8),(char)param_2 - *param_1) & 0xffffffff);
  out(*unaff_RSI,(short)(uVar1 >> 0x20));
  return uVar1 & 0xffffffff;
}



// FUNCTION 14d7c1ee4 FUN_14d7c1ee4 body=5 status=ok
// SIG undefined FUN_14d7c1ee4(void)

void FUN_14d7c1ee4(void)

{
  return;
}



// FUNCTION 14d7c1efd FUN_14d7c1efd body=4 status=ok
// SIG undefined FUN_14d7c1efd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1efd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1f09 FUN_14d7c1f09 body=32 status=ok
// SIG undefined FUN_14d7c1f09(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c1f1c) */

void FUN_14d7c1f09(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int in_EAX;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
  
  if (in_EAX == -0x77e6e071) {
    uVar2 = in((short)CONCAT71((int7)((ulonglong)param_2 >> 8),
                               *(undefined1 *)(unaff_RDI + 0x1b684780)));
    *unaff_RDI = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(unaff_RSI + 0x1dd2162a);
  *pcVar1 = *pcVar1 + (char)param_2;
  if (*pcVar1 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1f38 FUN_14d7c1f38 body=2 status=ok
// SIG undefined FUN_14d7c1f38(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1f38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1f5f FUN_14d7c1f5f body=13 status=ok
// SIG undefined FUN_14d7c1f5f(void)

/* WARNING: Instruction at (ram,0x00014d7c1f62) overlaps instruction at (ram,0x00014d7c1f5f)
    */

void FUN_14d7c1f5f(undefined8 param_1,undefined2 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  char cVar3;
  uint in_EAX;
  ulonglong uVar4;
  longlong unaff_RBX;
  undefined4 unaff_ESP;
  undefined4 unaff_00000024;
  undefined4 unaff_EBP;
  undefined2 in_FPUStatusWord;
  
  while( true ) {
    uVar4 = (ulonglong)(in_EAX & 0x25a9ad8b) | 0x50;
    *param_2 = in_FPUStatusWord;
    pcVar1 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + uVar4 * 8);
    cVar3 = (char)uVar4;
    *pcVar1 = *pcVar1 + cVar3;
    if ((POPCOUNT(*pcVar1) & 1U) == 0) break;
    LOCK();
    uVar2 = *(undefined4 *)(unaff_RBX + -0x5274da45);
    *(undefined4 *)(unaff_RBX + -0x5274da45) = unaff_EBP;
    UNLOCK();
    in_EAX = CONCAT31((int3)((in_EAX & 0x25a9ad8b) >> 8),cVar3 + -0x3b);
    unaff_EBP = uVar2;
  }
  return;
}



// FUNCTION 14d7c1f71 FUN_14d7c1f71 body=9 status=ok
// SIG undefined FUN_14d7c1f71(void)

void FUN_14d7c1f71(undefined8 param_1,undefined2 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  undefined4 unaff_ESP;
  undefined4 unaff_00000024;
  undefined4 unaff_EBP;
  undefined2 in_FPUStatusWord;
  
  cVar3 = (char)in_EAX + -0x3c;
  uVar4 = CONCAT31((int3)((uint)in_EAX >> 8),cVar3);
  while ((POPCOUNT(cVar3) & 1U) != 0) {
    LOCK();
    uVar2 = *(undefined4 *)(unaff_RBX + -0x5274da45);
    *(undefined4 *)(unaff_RBX + -0x5274da45) = unaff_EBP;
    UNLOCK();
    cVar3 = (char)uVar4 + -0x3b;
    uVar4 = CONCAT31((int3)((uint)uVar4 >> 8),cVar3);
    *param_2 = in_FPUStatusWord;
    pcVar1 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + CONCAT44(in_register_00000004,uVar4) * 8)
    ;
    *pcVar1 = *pcVar1 + cVar3;
    unaff_EBP = uVar2;
    cVar3 = *pcVar1;
  }
  return;
}



// FUNCTION 14d7c1f86 FUN_14d7c1f86 body=10 status=ok
// SIG undefined FUN_14d7c1f86(void)

void FUN_14d7c1f86(void)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
  return;
}



// FUNCTION 14d7c1f93 FUN_14d7c1f93 body=10 status=ok
// SIG undefined FUN_14d7c1f93(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1f93(void)

{
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  char in_R9B;
  char in_CF;
  
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       (*(char *)CONCAT71(unaff_00000019,unaff_BL) - in_R9B) - in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1f9f FUN_14d7c1f9f body=2 status=ok
// SIG undefined FUN_14d7c1f9f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1f9f(longlong param_1)

{
  char unaff_DIL;
  
  *(char *)(param_1 + 0x54f161e1) = *(char *)(param_1 + 0x54f161e1) - unaff_DIL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1fa3 FUN_14d7c1fa3 body=10 status=ok
// SIG undefined FUN_14d7c1fa3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1fa3(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1fbd FUN_14d7c1fbd body=16 status=ok
// SIG undefined FUN_14d7c1fbd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1fbd(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 in_AL;
  char cVar2;
  char cVar3;
  
  cVar3 = (char)((ulonglong)param_1 >> 8);
  out(0xb5,in_AL);
  cVar1 = (char)((uint)param_2 >> 8);
  cVar2 = cVar1 + cVar3;
  if (cVar2 != '\0' && SCARRY1(cVar1,cVar3) == cVar2 < '\0') {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1fce FUN_14d7c1fce body=6 status=ok
// SIG undefined FUN_14d7c1fce(void)

/* WARNING: Control flow encountered bad instruction data */

undefined1 FUN_14d7c1fce(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  uVar1 = in(param_2);
  if (!in_ZF && in_OF == in_SF) {
    return uVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1fd6 FUN_14d7c1fd6 body=7 status=ok
// SIG undefined FUN_14d7c1fd6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1fd6(void)

{
  undefined1 in_AL;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  ulonglong unaff_retaddr;
  
  *unaff_RDI = *unaff_RSI;
  *(undefined1 *)(unaff_RDI + (ulonglong)((unaff_retaddr & 0x400) != 0) * -2 + 1) = in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1fde thunk_EXT_FUN_17bc9cdee body=5 status=ok
// SIG undefined thunk_EXT_FUN_17bc9cdee(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_17bc9cdee(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1fe6 FUN_14d7c1fe6 body=6 status=ok
// SIG undefined FUN_14d7c1fe6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c1fe6(void)

{
  undefined1 in_AL;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c1ff3 FUN_14d7c1ff3 body=29 status=ok
// SIG undefined FUN_14d7c1ff3(void)

void FUN_14d7c1ff3(char *param_1,uint *param_2)

{
  undefined8 in_RAX;
  char unaff_BL;
  undefined4 *unaff_RSI;
  uint unaff_EDI;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(ulonglong)(unaff_EDI & *param_2);
  *puVar1 = *unaff_RSI;
  *(byte *)((longlong)puVar1 + 0xb) =
       *(byte *)((longlong)puVar1 + 0xb) | (byte)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + unaff_BL;
  *param_2 = (*param_2 - (uint)&stack0x00000000) -
             (uint)((uint)&stack0x00000000 < *(uint *)((longlong)puVar1 + 0x21));
  FUN_150fb4110();
  return;
}



// FUNCTION 14d7c201a FUN_14d7c201a body=3 status=ok
// SIG undefined FUN_14d7c201a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c201a(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2047 FUN_14d7c2047 body=11 status=ok
// SIG undefined FUN_14d7c2047(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2047(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2057 FUN_14d7c2057 body=1 status=ok
// SIG undefined FUN_14d7c2057(void)

void FUN_14d7c2057(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7c205c FUN_14d7c205c body=7 status=ok
// SIG undefined FUN_14d7c205c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c205c(byte param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 in_RAX;
  longlong unaff_RBX;
  uint *unaff_RSI;
  uint *unaff_RDI;
  char unaff_R15B;
  
  uVar2 = *unaff_RDI;
  uVar1 = *unaff_RSI;
  *(byte *)(unaff_RBX + -0x35) = *(byte *)(unaff_RBX + -0x35) >> (param_1 & 0x1f);
  out(0x29,(int)CONCAT71((int7)((ulonglong)in_RAX >> 8),((char)in_RAX + -0x80) - (uVar1 < uVar2)));
  *(char *)(param_4 + 0x4e4a3039) = *(char *)(param_4 + 0x4e4a3039) + unaff_R15B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2064 FUN_14d7c2064 body=7 status=ok
// SIG undefined FUN_14d7c2064(void)

void FUN_14d7c2064(undefined8 param_1,int param_2)

{
  longlong unaff_RDI;
  
  *(int *)(unaff_RDI + 0x439a89bb) = *(int *)(unaff_RDI + 0x439a89bb) - param_2;
  return;
}



// FUNCTION 14d7c206d FUN_14d7c206d body=15 status=ok
// SIG undefined FUN_14d7c206d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c206d(void)

{
  longlong in_R9;
  char unaff_R15B;
  
  *(char *)(in_R9 + 0x4e4a3039) = *(char *)(in_R9 + 0x4e4a3039) + unaff_R15B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2086 FUN_14d7c2086 body=24 status=ok
// SIG undefined FUN_14d7c2086(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2086(longlong param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  uint uVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 in_RAX;
  ulonglong uVar9;
  undefined2 uVar10;
  uint uVar11;
  ulonglong unaff_RBX;
  undefined8 *puVar12;
  undefined8 unaff_RBP;
  uint uVar13;
  undefined1 *unaff_RSI;
  undefined4 *unaff_RDI;
  byte unaff_R12B;
  char unaff_R15B;
  byte in_CF;
  char cVar14;
  
  *(undefined1 *)unaff_RDI = *unaff_RSI;
  puVar12 = (undefined8 *)register0x00000020;
  while( true ) {
    puVar3 = (undefined4 *)((longlong)unaff_RDI + 1);
    uVar6 = (uint)in_RAX;
    out(0x8e,uVar6);
    uVar10 = (undefined2)param_2;
    if (0x4742796 < uVar6 && (uint)in_CF <= uVar6 + 0xfb8bd869) {
      uVar4 = in(uVar10);
      *puVar3 = uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar9 = (ulonglong)((uVar6 + 0xfb8bd869) - (uint)in_CF & *(uint *)((longlong)unaff_RDI + 0x2a));
    if ((int)unaff_RBP != *(int *)(unaff_RSI + 5)) break;
    uVar9 = uVar9 * *(uint *)((longlong)puVar12 + (uVar9 - 0x28ace313));
    uVar11 = (uint)(uVar9 >> 0x20);
    param_2 = (ulonglong)uVar11;
    puVar1 = (uint *)((uVar9 & 0xffffffff) - 0x2f34ffc9);
    uVar13 = (uint)(unaff_RSI + 1);
    uVar6 = uVar13 + *puVar1;
    unaff_RBP = *puVar12;
    uVar6 = ((uVar6 + (uVar11 != 0)) - uVar11) -
            (uint)(CARRY4(uVar13,*puVar1) || CARRY4(uVar6,(uint)(uVar11 != 0)));
    unaff_RSI = (undefined1 *)(ulonglong)uVar6;
    cVar14 = uVar6 == 0;
    in(0xab);
    *(undefined1 *)puVar3 = *unaff_RSI;
    pcVar5 = (code *)swi(0x34);
    uVar7 = (*pcVar5)();
    param_1 = param_1 + -1;
    if (param_1 == 0 || cVar14 == '\0') {
      piVar8 = (int *)(unaff_RBX & 0xffffffff);
      iVar2 = *piVar8;
      *piVar8 = *piVar8 + (int)(puVar12 + 2);
      if (SCARRY4(iVar2,(int)(puVar12 + 2)) == *piVar8 < 0) {
        pcVar5 = (code *)swi(1);
        (*pcVar5)();
        return;
      }
      *(char *)(param_4 + 0x4e4a3039) = *(char *)(param_4 + 0x4e4a3039) + unaff_R15B;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    in_CF = 0;
    in_RAX = CONCAT71((int7)((ulonglong)uVar7 >> 8),
                      *(undefined1 *)(unaff_RBX + ((byte)uVar7 & unaff_R12B)));
    puVar12 = puVar12 + 2;
    unaff_RDI = puVar3;
  }
  uVar6 = in(uVar10);
  *(longlong *)(param_3 + 0x60) = *(longlong *)(param_3 + 0x60) + (ulonglong)uVar6;
  out(*(undefined4 *)(unaff_RSI + 1),uVar10);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c20ab FUN_14d7c20ab body=1 status=ok
// SIG undefined FUN_14d7c20ab(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c20ab(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c20b0 FUN_14d7c20b0 body=5 status=ok
// SIG undefined FUN_14d7c20b0(void)

void FUN_14d7c20b0(void)

{
  code *pcVar1;
  
  in(0xd1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7c20b9 FUN_14d7c20b9 body=8 status=ok
// SIG undefined FUN_14d7c20b9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c20b9(char *param_1)

{
  uint *puVar1;
  undefined4 in_EAX;
  undefined2 unaff_DI;
  undefined6 unaff_0000003a;
  
  puVar1 = (uint *)(CONCAT62(unaff_0000003a,unaff_DI) + 0x5a81f325);
  *puVar1 = *puVar1 ^ CONCAT22((short)((uint)in_EAX >> 0x10),CONCAT11(0xb2,(char)in_EAX));
  *param_1 = *param_1 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c20dc FUN_14d7c20dc body=8 status=ok
// SIG undefined FUN_14d7c20dc(void)

void FUN_14d7c20dc(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7c20e4 FUN_14d7c20e4 body=10 status=ok
// SIG undefined FUN_14d7c20e4(void)

void FUN_14d7c20e4(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7c20fc FUN_14d7c20fc body=29 status=ok
// SIG undefined FUN_14d7c20fc(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c2103) overlaps instruction at (ram,0x00014d7c20fc)
    */

void FUN_14d7c20fc(ulonglong param_1,undefined2 param_2)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  longlong in_RAX;
  int *unaff_RDI;
  int *piVar5;
  byte in_ZF;
  byte in_OF;
  
  do {
    puVar1 = (uint *)(unaff_RDI + 0x179bec30);
    bVar4 = (byte)param_1 & 0x1f;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 >> bVar4;
    in_OF = bVar4 != 1 & in_OF | (bVar4 == 1 && (int)uVar2 < 0);
    bVar3 = (param_1 & 0x1f) != 0;
    bVar4 = !bVar3 & in_ZF;
    out(param_2,(char)in_RAX);
    in_ZF = false;
    piVar5 = unaff_RDI;
    if ((bool)(bVar4 | (bVar3 && *puVar1 == 0))) {
      cRam6d009ef0f01f4ee1 = cRam6d009ef0f01f4ee1 + (char)(param_1 >> 8);
      piVar5 = unaff_RDI + 1;
      in_OF = SBORROW4((int)in_RAX,*unaff_RDI);
      *(char *)(in_RAX + 0x74ee5e6f) = '\0';
      in_ZF = *(char *)(in_RAX + 0x74ee5e6f) == '\0';
    }
    unaff_RDI = piVar5;
  } while (!(bool)in_OF);
  out(0x14,(int)in_RAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c211d FUN_14d7c211d body=13 status=ok
// SIG undefined FUN_14d7c211d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c211d(undefined8 param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  undefined1 uVar3;
  byte *unaff_RSI;
  int unaff_EDI;
  char in_CF;
  
  uVar3 = (undefined1)((ulonglong)param_2 >> 8);
  bVar2 = (byte)param_2;
  iVar1 = *param_2;
  FUN_151892718();
  uVar3 = in(CONCAT11(uVar3,bVar2));
  *(undefined1 *)(ulonglong)((unaff_EDI - iVar1) - (uint)(in_CF == '\0')) = uVar3;
  *unaff_RSI = *unaff_RSI & bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2137 FUN_14d7c2137 body=12 status=ok
// SIG undefined FUN_14d7c2137(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2137(undefined8 param_1,char param_2)

{
  uint *puVar1;
  int in_EAX;
  char *unaff_RBX;
  undefined1 unaff_BPL;
  
  *unaff_RBX = *unaff_RBX + '\x01';
  cRam00000001a08f2879 = cRam00000001a08f2879 + param_2;
  out(0xd5,unaff_BPL);
  puVar1 = (uint *)(&stack0x00000000 + (ulonglong)(in_EAX + 0x74ebabbd) * 2);
  *puVar1 = *puVar1 << 0x1b | *puVar1 >> 5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2144 FUN_14d7c2144 body=9 status=ok
// SIG undefined FUN_14d7c2144(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2144(void)

{
  uint *puVar1;
  int in_EAX;
  undefined1 unaff_BPL;
  byte in_CF;
  
  out(0xd5,unaff_BPL);
  puVar1 = (uint *)(&stack0x00000000 + (ulonglong)(in_EAX + 0x53130730 + (uint)in_CF) * 2);
  *puVar1 = *puVar1 << 0x1b | *puVar1 >> 5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2150 FUN_14d7c2150 body=11 status=ok
// SIG undefined FUN_14d7c2150(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2150(undefined8 param_1,char param_2)

{
  longlong in_RAX;
  
  *(char *)(in_RAX + 0x75d60c18) = *(char *)(in_RAX + 0x75d60c18) + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c216b FUN_14d7c216b body=12 status=ok
// SIG undefined FUN_14d7c216b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c218c) */

void FUN_14d7c216b(byte param_1,longlong param_2)

{
  byte *pbVar1;
  int *piVar2;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  undefined1 *unaff_RSI;
  
  pbVar1 = (byte *)(param_2 + -0x6452bc81);
  *pbVar1 = *pbVar1 << (param_1 & 7) | *pbVar1 >> 8 - (param_1 & 7);
  out(*unaff_RSI,(short)param_2);
                    /* WARNING: Read-only address (ram,0x00014d193899) is written */
  _IMAGE_RUNTIME_FUNCTION_ENTRY_14d193898._1_4_ = unaff_EBX & 0xa8087101;
  piVar2 = (int *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x4db389e2);
  *piVar2 = *piVar2 - (int)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c217b FUN_14d7c217b body=3 status=ok
// SIG undefined FUN_14d7c217b(void)

void FUN_14d7c217b(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00014d7c217c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14d7c2183 FUN_14d7c2183 body=3 status=ok
// SIG undefined FUN_14d7c2183(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2183(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c218c FUN_14d7c218c body=1 status=ok
// SIG undefined FUN_14d7c218c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c218c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2191 FUN_14d7c2191 body=2 status=ok
// SIG undefined FUN_14d7c2191(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2191(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2195 FUN_14d7c2195 body=5 status=ok
// SIG undefined FUN_14d7c2195(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2195(longlong param_1)

{
  code *pcVar1;
  char in_ZF;
  
  if (param_1 == 1 || in_ZF == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7c219d FUN_14d7c219d body=3 status=ok
// SIG undefined FUN_14d7c219d(void)

void FUN_14d7c219d(undefined8 param_1,undefined2 param_2)

{
  code *pcVar1;
  
  in(param_2);
  in(param_2);
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7c21b3 FUN_14d7c21b3 body=1 status=ok
// SIG undefined FUN_14d7c21b3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c21b3(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c21c3 FUN_14d7c21c3 body=2 status=ok
// SIG undefined FUN_14d7c21c3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c21c3(longlong param_1,char param_2)

{
  byte *pbVar1;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  longlong unaff_RDI;
  bool in_OF;
  
  if (in_OF) {
    *(uint *)(param_1 + -0x9a5fa15) = *(uint *)(param_1 + -0x9a5fa15) ^ unaff_EBP;
  }
  pbVar1 = (byte *)(CONCAT44(unaff_0000002c,unaff_EBP) + -0x40);
  *pbVar1 = *pbVar1 >> 1 | *pbVar1 << 7;
  *(char *)(unaff_RDI + -0x3e64dff) = *(char *)(unaff_RDI + -0x3e64dff) + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c21c8 FUN_14d7c21c8 body=2 status=ok
// SIG undefined FUN_14d7c21c8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c21c8(undefined8 param_1,char param_2)

{
  byte *pbVar1;
  longlong unaff_RBP;
  longlong unaff_RDI;
  char in_SF;
  char in_OF;
  
  if (in_OF != in_SF) {
    pbVar1 = (byte *)(unaff_RBP + -0x40);
    *pbVar1 = *pbVar1 >> 1 | *pbVar1 << 7;
    *(char *)(unaff_RDI + -0x3e64dff) = *(char *)(unaff_RDI + -0x3e64dff) + param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c21cc FUN_14d7c21cc body=5 status=ok
// SIG undefined FUN_14d7c21cc(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c21cc(void)

{
  byte *pbVar1;
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  pbVar1 = (byte *)(unaff_RBP + -0x40);
  *pbVar1 = *pbVar1 >> 1 | *pbVar1 << 7;
  *(char *)(unaff_RDI + -0x3e64dff) = *(char *)(unaff_RDI + -0x3e64dff) + -0x3f;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c21d4 FUN_14d7c21d4 body=4 status=ok
// SIG undefined FUN_14d7c21d4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c21d4(undefined8 param_1,char param_2)

{
  byte *pbVar1;
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  pbVar1 = (byte *)(unaff_RBP + -0x40);
  *pbVar1 = *pbVar1 >> 1 | *pbVar1 << 7;
  *(char *)(unaff_RDI + -0x3e64dff) = *(char *)(unaff_RDI + -0x3e64dff) + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c21d9 thunk_FUN_14e3c6fae body=5 status=ok
// SIG undefined thunk_FUN_14e3c6fae(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_FUN_14e3c6fae(int param_1,longlong param_2)

{
  int *piVar1;
  char cVar2;
  char in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RBX;
  int unaff_EBP;
  
  *(int *)(unaff_RBX + 0x8abd52) = *(int *)(unaff_RBX + 0x8abd52) + param_1;
  LOCK();
  cVar2 = *(char *)(param_2 + 0xfeffffffda);
  *(char *)(param_2 + 0xfeffffffda) = in_AL + '5';
  UNLOCK();
  piVar1 = (int *)(CONCAT71(in_register_00000001,cVar2 + '5') + 0x6977060);
  *piVar1 = *piVar1 + unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c21e6 thunk_FUN_14d7c216b body=2 status=ok
// SIG undefined thunk_FUN_14d7c216b(void)

void thunk_FUN_14d7c216b(void)

{
  FUN_14d7c216b();
  return;
}



// FUNCTION 14d7c21f0 FUN_14d7c21f0 body=8 status=ok
// SIG undefined FUN_14d7c21f0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c21f0(undefined8 param_1,undefined2 param_2)

{
  undefined1 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c21f9 FUN_14d7c21f9 body=5 status=ok
// SIG undefined FUN_14d7c21f9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c21f9(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2201 FUN_14d7c2201 body=4 status=ok
// SIG undefined FUN_14d7c2201(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c22a4) overlaps instruction at (ram,0x00014d7c229f)
    */

int FUN_14d7c2201(longlong param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  ulonglong in_RAX;
  byte bVar5;
  int iVar6;
  longlong unaff_RBX;
  undefined8 *puVar7;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_retaddr;
  
  iVar6 = param_2 + (int)&stack0x00000000;
  if (iVar6 != 0 && SCARRY4(param_2,(int)&stack0x00000000) == iVar6 < 0) {
    if ((in_RAX & 0x4000) != 0) {
      return ((int)in_RAX + -0x173a882e) - (uint)(*(byte *)(unaff_RBP + 0x54) < (byte)unaff_RBX);
    }
    register0x00000020 = (BADSPACEBASE *)(unaff_RBP + 8);
    out(0xb8,(int)CONCAT71((int7)(in_RAX >> 8),(char)in_RAX + -0xf));
    param_1 = unaff_retaddr;
  }
  puVar7 = (undefined8 *)((longlong)register0x00000020 + -8);
  *(longlong *)((longlong)register0x00000020 + -8) = param_1;
  pbVar1 = (byte *)(unaff_RDI + 0x6b + unaff_RBX * 2);
  bVar2 = *pbVar1;
  bVar5 = (byte)((ulonglong)param_1 >> 8);
  *pbVar1 = *pbVar1 + bVar5;
  iVar4 = 0x3786c442;
  if ((POPCOUNT(*pbVar1) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((char)*pbVar1 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 == 0) {
    puVar7 = (undefined8 *)((longlong)register0x00000020 + -0x10);
    *(undefined1 **)((longlong)register0x00000020 + -0x10) = unaff_RSI;
    if (CARRY1(bVar2,bVar5) != true) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(*unaff_RSI,(short)iVar6);
    iVar4 = 0x3786c400;
  }
  uVar3 = in((short)*puVar7);
  return CONCAT31((int3)((uint)(iVar4 + 0x5c3cb8cc) >> 8),uVar3);
}



// FUNCTION 14d7c2205 FUN_14d7c2205 body=12 status=ok
// SIG undefined FUN_14d7c2205(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c22a4) overlaps instruction at (ram,0x00014d7c229f)
    */

int FUN_14d7c2205(undefined8 param_1,undefined2 param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  ulonglong in_RAX;
  byte bVar5;
  longlong unaff_RBX;
  longlong *plVar6;
  longlong *unaff_RBP;
  undefined1 *unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_retaddr;
  
  if ((in_RAX & 0x4000) != 0) {
    return ((int)in_RAX + -0x173a882e) -
           (uint)(*(byte *)((longlong)unaff_RBP + 0x54) < (byte)unaff_RBX);
  }
  out(0xb8,(int)CONCAT71((int7)(in_RAX >> 8),(char)in_RAX + -0xf));
  *unaff_RBP = unaff_retaddr;
  pbVar1 = (byte *)(unaff_RDI + 0x6b + unaff_RBX * 2);
  bVar2 = *pbVar1;
  bVar5 = (byte)((ulonglong)unaff_retaddr >> 8);
  *pbVar1 = *pbVar1 + bVar5;
  iVar4 = 0x3786c442;
  if ((POPCOUNT(*pbVar1) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((char)*pbVar1 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (unaff_retaddr == 0) {
    plVar6 = unaff_RBP + -1;
    unaff_RBP = unaff_RBP + -1;
    *plVar6 = (longlong)unaff_RSI;
    if (CARRY1(bVar2,bVar5) != true) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(*unaff_RSI,param_2);
    iVar4 = 0x3786c400;
  }
  uVar3 = in((short)*unaff_RBP);
  return CONCAT31((int3)((uint)(iVar4 + 0x5c3cb8cc) >> 8),uVar3);
}



// FUNCTION 14d7c2212 FUN_14d7c2212 body=9 status=ok
// SIG undefined FUN_14d7c2212(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2212(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined1 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c221e FUN_14d7c221e body=1 status=ok
// SIG undefined FUN_14d7c221e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c221e(byte param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong unaff_RBX;
  ulonglong *unaff_RBP;
  uint unaff_ESI;
  longlong unaff_RDI;
  byte in_AF;
  byte in_TF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined2 unaff_retaddr;
  
  uVar2 = *(uint *)(unaff_RDI + 0x1e);
  uVar3 = uVar2 - unaff_ESI;
  uVar4 = (ulonglong)(uVar2 < unaff_ESI) << 0x20 | unaff_RBX & 0xffffffff;
  if ((int)uVar3 < 0) {
    uVar1 = in(unaff_retaddr);
    *(undefined4 *)(unaff_RDI + 1) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RBP = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW4(uVar2,unaff_ESI) * 0x800 |
               (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)(uVar3 == 0) * 0x40 |
               (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar3 & 0xff) & 1U) == 0) * 4 |
               (ulonglong)
               (((uVar4 << (param_1 & 0x1f) | uVar4 >> 0x21 - (param_1 & 0x1f)) & 0x100000000) != 0)
               | (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
               (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7c2222 FUN_14d7c2222 body=18 status=ok
// SIG undefined FUN_14d7c2222(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2222(byte param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong unaff_RBX;
  ulonglong *unaff_RBP;
  uint unaff_ESI;
  undefined4 *unaff_RDI;
  byte in_AF;
  byte in_TF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined2 unaff_retaddr;
  
  uVar2 = *(uint *)((longlong)unaff_RDI + 0x1d);
  uVar3 = uVar2 - unaff_ESI;
  uVar4 = (ulonglong)(uVar2 < unaff_ESI) << 0x20 | unaff_RBX & 0xffffffff;
  if ((int)uVar3 < 0) {
    uVar1 = in(unaff_retaddr);
    *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RBP = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW4(uVar2,unaff_ESI) * 0x800 |
               (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)(uVar3 == 0) * 0x40 |
               (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar3 & 0xff) & 1U) == 0) * 4 |
               (ulonglong)
               (((uVar4 << (param_1 & 0x1f) | uVar4 >> 0x21 - (param_1 & 0x1f)) & 0x100000000) != 0)
               | (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
               (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7c2232 FUN_14d7c2232 body=2 status=ok
// SIG undefined FUN_14d7c2232(void)

void FUN_14d7c2232(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7c2240 FUN_14d7c2240 body=2 status=ok
// SIG undefined FUN_14d7c2240(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2240(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c224e FUN_14d7c224e body=12 status=ok
// SIG undefined FUN_14d7c224e(void)

int FUN_14d7c224e(void)

{
  uint in_EAX;
  
  return (in_EAX | 0x545d38d7) + 0xe8c577d2;
}



// FUNCTION 14d7c225f FUN_14d7c225f body=3 status=ok
// SIG undefined FUN_14d7c225f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c225f(void)

{
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (!in_ZF && in_OF == in_SF) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c2263 FUN_14d7c2263 body=10 status=ok
// SIG undefined FUN_14d7c2263(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c2263(void)

{
  longlong unaff_RSI;
  unkbyte10 in_ST0;
  
  *(unkbyte10 *)(unaff_RSI + -0x4e) = in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7c227f FUN_14d7c227f body=4 status=ok
// SIG undefined FUN_14d7c227f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7c227f(longlong param_1)

{
  char *pcVar1;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x42);
  *pcVar1 = *pcVar1 + (char)param_1;
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


