// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14a7b26b8 FUN_14a7b26b8 body=358 status=ok
// SIG undefined FUN_14a7b26b8(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014a7b2841) overlaps instruction at (ram,0x00014a7b2840)
    */
/* WARNING: Removing unreachable block (ram,0x00014a7b27d0) */

void FUN_14a7b26b8(char *param_1,char *param_2,char *param_3)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  byte *in_RAX;
  byte *pbVar10;
  char cVar11;
  char cVar12;
  undefined6 uVar13;
  char cVar14;
  undefined1 uVar15;
  undefined6 uVar16;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *puVar17;
  undefined1 *puVar18;
  uint *unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *puVar19;
  byte *unaff_RDI;
  byte *pbVar20;
  int iVar21;
  undefined4 uVar22;
  longlong unaff_GS_OFFSET;
  bool in_PF;
  
  uVar22 = (undefined4)((ulonglong)param_3 >> 0x20);
  iVar21 = (int)param_3;
  uVar16 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar15 = (undefined1)((ulonglong)param_2 >> 8);
  cVar14 = (char)param_2;
  uVar13 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar12 = (char)((ulonglong)param_1 >> 8);
  cVar11 = (char)param_1;
  if (in_PF) {
    iVar9 = (int)in_RAX;
    *(int *)in_RAX = *(int *)in_RAX + iVar9;
    cVar6 = (char)in_RAX;
    *in_RAX = *in_RAX + cVar6;
    *in_RAX = *in_RAX + cVar6;
    *in_RAX = *in_RAX + cVar6;
    *in_RAX = *in_RAX + cVar6;
    *in_RAX = *in_RAX + cVar6;
    *in_RAX = *in_RAX + cVar6;
    *in_RAX = *in_RAX + cVar6;
    *in_RAX = *in_RAX + cVar6;
    *in_RAX = *in_RAX + cVar6;
    bVar8 = *in_RAX;
    *unaff_RSI = (char)((ulonglong)in_RAX >> 8);
    if ((POPCOUNT(bVar8) & 1U) == 0) {
      *(int *)in_RAX = *(int *)in_RAX + iVar9;
      *in_RAX = *in_RAX + cVar6;
      *(int *)in_RAX = *(int *)in_RAX + iVar9;
      *param_3 = *param_3 + (char)param_3;
      *param_1 = *param_1 + cVar6;
      bVar7 = cVar6 + 2;
      in_RAX = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar7);
      register0x00000020 = (BADSPACEBASE *)&stack0xfffffffffffffff8;
      *in_RAX = *in_RAX + bVar7;
      bVar8 = *in_RAX;
      *in_RAX = *in_RAX + bVar7;
      unaff_RDI[(longlong)unaff_RBP * 8 + 0x49] =
           unaff_RDI[(longlong)unaff_RBP * 8 + 0x49] + cVar11 + CARRY1(bVar8,bVar7);
      *(int *)in_RAX = *(int *)in_RAX + (int)in_RAX;
      *in_RAX = *in_RAX + bVar7;
      *in_RAX = *in_RAX + bVar7;
      *in_RAX = *in_RAX + bVar7;
      *in_RAX = *in_RAX + bVar7;
      *in_RAX = *in_RAX + bVar7;
                    /* WARNING: Read-only address (ram,0x00014a7b26ff) is written */
      uRam000000014a7b26ff = 0x10;
      *param_2 = *param_2 + cVar14;
      *in_RAX = *in_RAX + bVar7;
      *(byte *)unaff_RBP = (char)*unaff_RBP + bVar7;
      goto LAB_14a7b2706;
    }
  }
  else {
LAB_14a7b2706:
    cVar6 = (char)in_RAX;
    *in_RAX = *in_RAX + cVar6;
    *in_RAX = *in_RAX + cVar6;
    *in_RAX = *in_RAX + cVar6;
    *in_RAX = *in_RAX + cVar6;
    *in_RAX = *in_RAX + cVar6;
    *in_RAX = *in_RAX + cVar6;
    *in_RAX = *in_RAX + cVar6;
    *in_RAX = *in_RAX + cVar6;
    *in_RAX = *in_RAX + cVar6;
    *(int *)in_RAX = *(int *)in_RAX + (int)in_RAX;
    *in_RAX = *in_RAX + cVar6;
    *in_RAX = *in_RAX + cVar6;
  }
  cVar6 = (char)in_RAX;
  *in_RAX = *in_RAX + cVar6;
  if ((POPCOUNT(*in_RAX) & 1U) == 0) {
    *in_RAX = *in_RAX + cVar6;
    *in_RAX = *in_RAX + cVar6;
    *in_RAX = *in_RAX + cVar6;
    *in_RAX = *in_RAX + cVar6;
    *in_RAX = *in_RAX + cVar6;
    *in_RAX = *in_RAX + cVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)in_RAX = *(int *)in_RAX + (int)in_RAX;
  *in_RAX = *in_RAX + cVar6;
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0x14a7b272d;
  pbVar10 = (byte *)FUN_14bc5a253();
  bVar8 = (byte)pbVar10;
  *pbVar10 = *pbVar10 + bVar8;
  pbVar1 = unaff_RDI + 0x65;
  *pbVar1 = *pbVar1 + bVar8;
  pbVar20 = unaff_RDI;
  if (*pbVar1 == 0) {
LAB_14a7b277a:
    *pbVar10 = *pbVar10 | bVar8;
    *(char *)CONCAT44(uVar22,iVar21) = *(char *)CONCAT44(uVar22,iVar21) + (char)iVar21;
    *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,200)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,200)) + bVar8;
    bVar8 = bVar8 + 2;
    pbVar10 = (byte *)CONCAT71((int7)((ulonglong)pbVar10 >> 8),bVar8);
    *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
    *pbVar10 = *pbVar10 + bVar8;
    bVar7 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar8;
    pbVar20[(longlong)unaff_RBP * 8 + 0x49] =
         pbVar20[(longlong)unaff_RBP * 8 + 0x49] + cVar11 + CARRY1(bVar7,bVar8);
    *(int *)pbVar10 = *(int *)pbVar10 + (int)pbVar10;
    *pbVar10 = *pbVar10 + bVar8;
    *pbVar10 = *pbVar10 + bVar8;
    *pbVar10 = *pbVar10 + bVar8;
    *pbVar10 = *pbVar10 + bVar8;
    *pbVar10 = *pbVar10 + bVar8;
                    /* WARNING: Read-only address (ram,0x00014a7b279f) is written */
    uRam000000014a7b279f = 0x10;
    *(char *)((longlong)pbVar10 * 2) = *(char *)((longlong)pbVar10 * 2) + cVar14;
    *pbVar10 = *pbVar10 + bVar8;
    *(char *)CONCAT44(uVar22,iVar21) = *(char *)CONCAT44(uVar22,iVar21) + (char)iVar21;
    puVar17 = (undefined1 *)register0x00000020;
LAB_14a7b27a7:
    register0x00000020 = (BADSPACEBASE *)(puVar17 + -8);
    puVar18 = puVar17 + -8;
    bVar7 = (byte)pbVar10;
    *pbVar10 = *pbVar10 + bVar7;
    *pbVar10 = *pbVar10 + bVar7;
    *pbVar10 = *pbVar10 + bVar7;
    *pbVar10 = *pbVar10 + bVar7;
    *pbVar10 = *pbVar10 + bVar7;
    *pbVar10 = *pbVar10 + bVar7;
    *pbVar10 = *pbVar10 + bVar7;
    *pbVar10 = *pbVar10 + bVar7;
    *(byte *)CONCAT62(uVar13,CONCAT11(cVar12,cVar11)) =
         *(char *)CONCAT62(uVar13,CONCAT11(cVar12,cVar11)) + bVar7;
    *pbVar10 = *pbVar10 + bVar7;
    *pbVar10 = *pbVar10 + bVar7;
    *pbVar10 = *pbVar10 + bVar7;
    pbVar10[0x14a7b27] = pbVar10[0x14a7b27] + cVar11;
    *pbVar10 = *pbVar10 + bVar7;
    pbVar1 = pbVar20 + 0x65;
    bVar8 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar7;
    if (*pbVar1 == 0) goto LAB_14a7b2813;
    if (CARRY1(bVar8,bVar7)) {
      *pbVar10 = *pbVar10 + bVar7;
      *pbVar10 = *pbVar10 + bVar7;
      *pbVar10 = *pbVar10 + bVar7;
      *pbVar10 = *pbVar10 + bVar7;
      *pbVar10 = *pbVar10 + bVar7;
      *(byte *)CONCAT62(uVar13,CONCAT11(cVar12,cVar11)) =
           *(char *)CONCAT62(uVar13,CONCAT11(cVar12,cVar11)) + bVar7;
      *pbVar10 = *pbVar10 + bVar7;
      *pbVar10 = *pbVar10 + bVar7;
      *pbVar10 = *pbVar10 + bVar7;
      *pbVar10 = *pbVar10 - 0x38;
      pcVar2 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,200)) + 0x4a);
      *pcVar2 = *pcVar2 - unaff_BH;
      goto code_r0x00014a7b2854;
    }
  }
  else {
    uVar5 = (longlong)*(int *)(CONCAT62(uVar16,CONCAT11(uVar15,cVar14)) + 0x73) * 0x696e4174;
    puVar19 = (undefined1 *)(uVar5 & 0xffffffff);
    pbVar20 = unaff_RDI + 4;
    uVar4 = in(CONCAT11(uVar15,cVar14));
    *(undefined4 *)unaff_RDI = uVar4;
    *(ulonglong *)((longlong)register0x00000020 + -8) = CONCAT62(uVar16,CONCAT11(uVar15,cVar14));
    unaff_RSI = puVar19;
    puVar17 = (undefined1 *)register0x00000020;
    if ((longlong)(int)uVar5 != uVar5) goto LAB_14a7b27a7;
    unaff_RSI = puVar19 + 1;
    out(*puVar19,CONCAT11(uVar15,cVar14));
    register0x00000020 = (BADSPACEBASE *)(ulonglong)*unaff_RBP;
    *pbVar10 = *pbVar10 + bVar8;
    *(int *)pbVar10 = *(int *)pbVar10 + iVar21;
    *pbVar10 = *pbVar10 + bVar8;
    *pbVar10 = *pbVar10 + bVar8;
    *pbVar10 = *pbVar10 + bVar8;
    *pbVar10 = *pbVar10 + bVar8;
    *pbVar10 = *pbVar10 + bVar8;
    bVar7 = (byte)((ulonglong)pbVar10 >> 8);
    *pbVar20 = *pbVar20 ^ bVar7;
    iVar9 = (int)pbVar10;
    if ((POPCOUNT(*pbVar20) & 1U) == 0) {
      *(int *)pbVar10 = *(int *)pbVar10 + iVar9;
      *pbVar10 = *pbVar10 + bVar8;
      *pbVar10 = *pbVar10 + bVar8;
      *pbVar10 = *pbVar10 + bVar8;
      *pbVar10 = *pbVar10 + bVar8;
      *pbVar10 = *pbVar10 + bVar8;
      *pbVar10 = *pbVar10 + bVar8;
      *pbVar10 = *pbVar10 + bVar8;
      *pbVar10 = *pbVar10 + bVar8;
      *pbVar10 = *pbVar10 + bVar8;
      *pbVar20 = *pbVar20 - bVar7;
      if ((POPCOUNT(*pbVar20) & 1U) == 0) {
        *(int *)pbVar10 = *(int *)pbVar10 + iVar9;
        *pbVar10 = *pbVar10 + bVar8;
        *(int *)pbVar10 = *(int *)pbVar10 + iVar9;
        goto LAB_14a7b277a;
      }
    }
    else {
      *pbVar10 = *pbVar10 + bVar8;
      *pbVar10 = *pbVar10 + bVar8;
      *pbVar10 = *pbVar10 + bVar8;
      *pbVar10 = *pbVar10 + bVar8;
      *pbVar10 = *pbVar10 + bVar8;
      *pbVar10 = *pbVar10 + bVar8;
      *pbVar10 = *pbVar10 + bVar8;
      *pbVar10 = *pbVar10 + bVar8;
      *pbVar10 = *pbVar10 + bVar8;
      *(int *)pbVar10 = *(int *)pbVar10 + iVar9;
      *pbVar10 = *pbVar10 + bVar8;
      *pbVar10 = *pbVar10 + bVar8;
    }
    *pbVar10 = *pbVar10 + bVar8;
    bVar3 = *pbVar10;
    *pbVar20 = bVar7;
    if ((POPCOUNT(bVar3) & 1U) == 0) {
      *(int *)pbVar10 = *(int *)pbVar10 + iVar9;
      *pbVar10 = *pbVar10 + bVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pbVar10 = *pbVar10 + bVar8;
    pbVar10 = (byte *)(ulonglong)
                      (uint)(iVar9 + *(int *)(pbVar10 + CONCAT62(uVar16,CONCAT11(uVar15,cVar14))));
LAB_14a7b2813:
    puVar18 = (undefined1 *)((longlong)register0x00000020 + -8);
    *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
    bVar7 = (byte)pbVar10;
    *pbVar10 = *pbVar10 + bVar7;
    bVar8 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar7;
    pbVar20[(longlong)unaff_RBP * 8 + 0x49] =
         pbVar20[(longlong)unaff_RBP * 8 + 0x49] + cVar11 + CARRY1(bVar8,bVar7);
    *(int *)pbVar10 = *(int *)pbVar10 + (int)pbVar10;
    *pbVar10 = *pbVar10 + bVar7;
    *pbVar10 = *pbVar10 + bVar7;
    *pbVar10 = *pbVar10 + bVar7;
    *pbVar10 = *pbVar10 + bVar7;
    *pbVar10 = *pbVar10 + bVar7;
                    /* WARNING: Read-only address (ram,0x00014a7b282f) is written */
    uRam000000014a7b282f = 0x10;
    *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,200)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,200)) + bVar7;
    *pbVar10 = *pbVar10 + bVar7;
    *(byte *)unaff_RBP = (char)*unaff_RBP + bVar7;
    *pbVar10 = *pbVar10 + bVar7;
    *pbVar10 = *pbVar10 + bVar7;
    *pbVar10 = *pbVar10 + bVar7;
    *pbVar10 = *pbVar10 + bVar7;
    *pbVar10 = *pbVar10 + bVar7;
  }
  bVar7 = (byte)pbVar10;
  *pbVar10 = *pbVar10 + bVar7;
  *pbVar10 = *pbVar10 + bVar7;
  *pbVar10 = *pbVar10 + bVar7;
  *pbVar10 = *pbVar10 + bVar7;
  *(int *)pbVar10 = *(int *)pbVar10 + (int)pbVar10;
  *pbVar10 = *pbVar10 + bVar7;
  *pbVar10 = *pbVar10 + bVar7;
  bVar8 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar7;
  *pbVar10 = (*pbVar10 - cVar12) - CARRY1(bVar8,bVar7);
  if ((POPCOUNT(*pbVar10) & 1U) != 0) {
    *pbVar10 = *pbVar10 + bVar7;
    *(int *)(pbVar10 + CONCAT62(uVar16,CONCAT11(uVar15,cVar14))) =
         *(int *)(pbVar10 + CONCAT62(uVar16,CONCAT11(uVar15,cVar14))) + (int)pbVar10;
    *(undefined1 **)(puVar18 + -8) = puVar18;
    *pbVar10 = *pbVar10 + bVar7;
    *pbVar10 = *pbVar10 + bVar7;
    out(*unaff_RSI,CONCAT11(uVar15,cVar14));
    *(ulonglong *)(puVar18 + -0x10) = CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,200));
    out(*(undefined1 *)
         (ulonglong)
         *(uint *)(unaff_GS_OFFSET +
                  CONCAT62(uVar13,CONCAT11(cVar12,cVar11)) + 0x6f + (longlong)unaff_RBP * 2),
        CONCAT11(uVar15,cVar14));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00014a7b2854:
  *(int *)pbVar10 = *(int *)pbVar10 + (int)pbVar10;
  *pbVar10 = *pbVar10 + (char)pbVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14a7f481b FUN_14a7f481b body=5 status=ok
// SIG undefined FUN_14a7f481b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14a7f481b(undefined8 param_1)

{
  char in_AL;
  char *unaff_RSI;
  char *unaff_RDI;
  
  *unaff_RSI = *unaff_RSI + (char)((ulonglong)param_1 >> 8);
  *unaff_RDI = *unaff_RDI + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14a7f4d24 FUN_14a7f4d24 body=527 status=ok
// SIG undefined FUN_14a7f4d24(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014a7f4e59) overlaps instruction at (ram,0x00014a7f4e57)
    */

void FUN_14a7f4d24(char *param_1,longlong param_2,int *param_3)

{
  byte bVar1;
  double dVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *in_RAX;
  byte *pbVar11;
  undefined7 uVar17;
  int *piVar13;
  int *piVar14;
  byte *pbVar15;
  uint *puVar16;
  char cVar18;
  undefined6 uVar19;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  byte *pbVar20;
  char *unaff_RBP;
  byte *unaff_RSI;
  byte *unaff_RDI;
  int iVar21;
  undefined2 in_FS;
  float10 in_ST0;
  byte bVar2;
  char *pcVar12;
  
  iVar21 = (int)param_3;
  iVar8 = (int)in_RAX;
  *in_RAX = *in_RAX + iVar8;
  iVar9 = *in_RAX;
  bVar6 = (byte)in_RAX;
  *(byte *)in_RAX = (char)*in_RAX + bVar6;
  if ((char)*in_RAX == '\0' || SCARRY1((char)iVar9,bVar6) != (char)*in_RAX < '\0') {
    *in_RAX = *in_RAX + iVar21;
    *(byte *)in_RAX = (char)*in_RAX + bVar6;
    *unaff_RDI = bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(0x8b,iVar8);
  *in_RAX = *in_RAX + iVar21;
  *(byte *)in_RAX = (char)*in_RAX + bVar6;
  unaff_RBP[(longlong)in_RAX * 4 + 0x46] = (char)((ulonglong)in_RAX >> 8);
  *in_RAX = *in_RAX + iVar8;
  *(byte *)in_RAX = (char)*in_RAX + bVar6;
  bVar4 = unaff_RBP[(longlong)in_RAX * 4 + 0x46];
  pbVar11 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar4,bVar6));
  iVar9 = (int)pbVar11;
  *(int *)pbVar11 = *(int *)pbVar11 + iVar9;
  *pbVar11 = *pbVar11 + bVar6;
  *(undefined2 *)(unaff_RBP + (longlong)pbVar11 * 4 + 0x46) = in_FS;
  *(int *)pbVar11 = *(int *)pbVar11 + iVar9;
  *pbVar11 = *pbVar11 + bVar6;
  *(int *)pbVar11 = *(int *)pbVar11 + iVar9;
  *pbVar11 = *pbVar11 + bVar6;
  *pbVar11 = *pbVar11 + bVar6;
  cVar7 = (char)((ulonglong)param_1 >> 8);
  unaff_RSI[0x140b37c] = unaff_RSI[0x140b37c] + cVar7;
  *pbVar11 = *pbVar11 + bVar6;
  *(char *)(param_2 + 0x1468564) = *(char *)(param_2 + 0x1468564) + (char)param_2;
  *pbVar11 = *pbVar11 + bVar6;
  pbVar15 = unaff_RSI + -0x14;
  *pbVar15 = *pbVar15 + unaff_BH;
  pbVar20 = &stack0xfffffffffffffff8;
  if (*pbVar15 == 0) {
    *(int *)pbVar11 = *(int *)pbVar11 + iVar9;
    *pbVar11 = *pbVar11 + bVar6;
    *pbVar11 = *pbVar11 + bVar6;
    uVar19 = (undefined6)((ulonglong)param_2 >> 0x10);
    cVar18 = (char)((ulonglong)param_2 >> 8) * '\x02';
    param_2 = CONCAT62(uVar19,CONCAT11(cVar18,100));
    if (cVar18 == '\0') {
      pbVar11[(longlong)unaff_RBP * 8 + 0x1468b] =
           pbVar11[(longlong)unaff_RBP * 8 + 0x1468b] + bVar4;
      pbVar20 = &stack0xfffffffffffffff8;
      pbVar15 = unaff_RDI;
      goto code_r0x00014a7f4e2e;
    }
    *(int *)pbVar11 = *(int *)pbVar11 + iVar9;
    *pbVar11 = *pbVar11 + bVar6;
    param_2 = CONCAT62(uVar19,0x6464);
    *pbVar11 = *pbVar11 + bVar6;
    pcVar12 = (char *)(param_2 * 2 + 0x1427b);
    *pcVar12 = *pcVar12 + cVar7;
    *pbVar11 = *pbVar11 + bVar6;
    dVar3 = *(double *)(unaff_RBP + (longlong)pbVar11 * 4 + 0x46);
    *(int *)pbVar11 = *(int *)pbVar11 + iVar9;
    *pbVar11 = *pbVar11 + bVar6;
    if (*pbVar11 == 0) {
      *(short *)pbVar11 = (short)(in_ST0 - (float10)dVar3);
      *(int *)pbVar11 = *(int *)pbVar11 + iVar9;
      bVar1 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar6;
      bVar2 = *pbVar11;
      pbVar15 = unaff_RDI + 1;
      *unaff_RDI = bVar6;
      uVar17 = (undefined7)((ulonglong)pbVar11 >> 8);
      if (CARRY1(bVar1,bVar6) || bVar2 == 0) {
        *param_3 = *param_3 + iVar9;
        *pbVar11 = *pbVar11 + bVar6;
        param_1 = param_1 + -1;
        pbVar20 = unaff_RSI;
        if (param_1 == (char *)0x0 || *pbVar11 == 0) goto code_r0x00014a7f4e2e;
        bVar1 = *pbVar11;
        *pbVar11 = *pbVar11 + bVar6;
        param_2 = CONCAT62(uVar19,0x1264);
        if ((POPCOUNT(*pbVar11) & 1U) == 0) goto LAB_14a7f4ed4;
        bVar4 = *pbVar11;
        bVar2 = *pbVar11;
        *pbVar11 = bVar2 + bVar6 + CARRY1(bVar1,bVar6);
        puVar16 = (uint *)CONCAT71(uVar17,bVar6 + (CARRY1(bVar4,bVar6) ||
                                                  CARRY1(bVar2 + bVar6,CARRY1(bVar1,bVar6))));
      }
      else {
LAB_14a7f4ed4:
        *(int *)pbVar11 = *(int *)pbVar11 + iVar9;
        *pbVar11 = *pbVar11 + bVar6;
        out(100,bVar6);
        *pbVar11 = *pbVar11 + bVar6;
        cVar7 = bVar6 + (char)((ulonglong)param_1 >> 8);
        pbVar15 = (byte *)CONCAT71(uVar17,cVar7);
        *pbVar15 = *pbVar15 + cVar7;
        bVar6 = *pbVar15;
        *pbVar15 = *pbVar15 + bVar4;
        iVar9 = (int)pbVar15 + *(int *)(param_1 + 0x144) + (uint)CARRY1(bVar6,bVar4);
        cVar18 = (char)((ulonglong)param_2 >> 8);
        cVar7 = (char)iVar9 + cVar18;
        pcVar12 = (char *)(ulonglong)CONCAT31((int3)((uint)iVar9 >> 8),cVar7);
        *pcVar12 = *pcVar12 + cVar7;
        puVar16 = (uint *)(ulonglong)
                          CONCAT22((short)((uint)iVar9 >> 0x10),
                                   CONCAT11((char)((uint)iVar9 >> 8) + cVar18,cVar7));
        *(byte *)puVar16 = (byte)*puVar16 + cVar7;
        pcVar12 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x34);
        *pcVar12 = *pcVar12 + (char)param_2;
        if (param_1 == (char *)0x0) {
          *(byte *)puVar16 = (byte)*puVar16 + cVar7;
          *(undefined1 *)((longlong)puVar16 * 2) = *(undefined1 *)((longlong)puVar16 * 2);
          goto code_r0x00014a7f4f53;
        }
      }
      *puVar16 = *puVar16 + (int)puVar16;
      cVar7 = (char)puVar16;
      *(byte *)puVar16 = (byte)*puVar16 + cVar7;
      *(byte *)puVar16 = (byte)*puVar16 + cVar7;
      *(byte *)puVar16 = (byte)*puVar16 + cVar7;
      *(byte *)puVar16 = (byte)*puVar16 + cVar7;
      *(byte *)puVar16 = (byte)*puVar16 + cVar7;
      *(byte *)puVar16 = (byte)*puVar16;
      *(byte *)puVar16 = (byte)*puVar16 + cVar7;
      cVar18 = (char)param_2;
      *(byte *)puVar16 = (byte)*puVar16 + cVar18;
      *(char *)((longlong)puVar16 * 2) = *(char *)((longlong)puVar16 * 2) + cVar18;
      *(byte *)puVar16 = (byte)*puVar16 + cVar7;
      *(char *)param_3 = (char)*param_3 + (char)param_3;
      *(byte *)puVar16 = (byte)*puVar16 + cVar7;
      *(byte *)puVar16 = (byte)*puVar16 + cVar7;
      *(byte *)puVar16 = (byte)*puVar16 + cVar7;
      *(byte *)puVar16 = (byte)*puVar16 + cVar7;
      *(byte *)puVar16 = (byte)*puVar16 + cVar7;
      *(byte *)puVar16 = (byte)*puVar16 + cVar7;
      *(byte *)puVar16 = (byte)*puVar16 + cVar7;
      *(byte *)puVar16 = (byte)*puVar16 + cVar7;
      *param_1 = *param_1 + cVar7;
      *(byte *)puVar16 = (byte)*puVar16 + cVar7;
      *(byte *)puVar16 = (byte)*puVar16 + cVar7;
      *(byte *)puVar16 = (byte)*puVar16 + cVar7;
      cVar7 = cVar7 + cVar18;
      puVar16 = (uint *)CONCAT71((int7)((ulonglong)puVar16 >> 8),cVar7);
      *(char *)(param_2 + 0x4a) = (char)param_1;
      *puVar16 = *puVar16 + (int)puVar16;
      *(byte *)puVar16 = (byte)*puVar16 + cVar7;
      *(byte *)puVar16 = (byte)*puVar16 + cVar7;
      *(byte *)puVar16 = (byte)*puVar16 + cVar7;
      *(byte *)puVar16 = (byte)*puVar16 + cVar7;
      *(byte *)puVar16 = (byte)*puVar16 + cVar7;
      *(byte *)puVar16 = (byte)*puVar16 + cVar7;
      *(byte *)puVar16 = (byte)*puVar16 + cVar7;
      *(byte *)puVar16 = (byte)*puVar16 + cVar7;
      *(byte *)puVar16 = (byte)*puVar16 + cVar7;
      *(byte *)puVar16 = (byte)*puVar16 + (char)param_3;
code_r0x00014a7f4f53:
      bVar6 = (byte)puVar16;
      *unaff_RBP = *unaff_RBP + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      uVar10 = (uint)puVar16;
      *puVar16 = *puVar16 + uVar10;
      *puVar16 = *puVar16 + uVar10;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      pbVar15 = (byte *)((longlong)puVar16 + 0x14a4a);
      *pbVar15 = *pbVar15 >> 1 | *pbVar15 << 7;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + (char)param_2;
      *unaff_RSI = *unaff_RSI + (char)param_2;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *unaff_RBP = *unaff_RBP + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *puVar16 = *puVar16 + uVar10;
      *(byte *)puVar16 = (byte)*puVar16 | bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      uVar5 = *puVar16;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      unaff_RDI[(longlong)unaff_RBP * 8 + 0x4a] =
           unaff_RDI[(longlong)unaff_RBP * 8 + 0x4a] + (char)param_1 + CARRY1((byte)uVar5,bVar6);
      *puVar16 = *puVar16 + uVar10;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
                    /* WARNING: Read-only address (ram,0x00014a7f4fc7) is written */
      uRam000000014a7f4fc7 = 0x10;
      *param_1 = *param_1 + unaff_BL;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *unaff_RBP = *unaff_RBP + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      uVar5 = *puVar16;
      *puVar16 = *puVar16 + uVar10;
      *(byte *)puVar16 = ((byte)*puVar16 - bVar6) - CARRY4(uVar5,uVar10);
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(int *)pbVar11 = *(int *)pbVar11 + iVar9;
    *pbVar11 = *pbVar11 + bVar6;
    pbVar11[0x7c] = pbVar11[0x7c] | bVar4;
    *(int *)pbVar11 = *(int *)pbVar11 + iVar9;
    *pbVar11 = *pbVar11 + bVar6;
    unaff_RDI = unaff_RDI + 4;
    *(int *)pbVar11 = *(int *)pbVar11 + iVar21;
    *pbVar11 = *pbVar11 + bVar6;
    pbVar20 = unaff_RSI;
  }
  *unaff_RDI = *unaff_RSI;
  pbVar20[-8] = 0x2e;
  pbVar20[-7] = 0x4e;
  pbVar20[-6] = 0x7f;
  pbVar20[-5] = 0x4a;
  pbVar20[-4] = 1;
  pbVar20[-3] = 0;
  pbVar20[-2] = 0;
  pbVar20[-1] = 0;
  pbVar11 = (byte *)FUN_14a8094b9();
  unaff_RSI = unaff_RSI + 1;
  pbVar15 = unaff_RDI + 1;
code_r0x00014a7f4e2e:
  *pbVar11 = *pbVar11 + (char)pbVar11;
  bVar6 = in((short)param_2);
  *pbVar15 = bVar6;
  cVar18 = (char)((ulonglong)param_1 >> 8);
  param_1[(longlong)unaff_RBP * 8] = param_1[(longlong)unaff_RBP * 8] + cVar18;
  uVar5 = *(uint *)(unaff_RSI + 1);
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)uVar5;
  *(char *)(param_2 + 0x60) = *(char *)(param_2 + 0x60) + unaff_BH;
  cVar7 = (char)uVar5 - param_1[1];
  pcVar12 = (char *)(ulonglong)CONCAT31((int3)(uVar5 >> 8),cVar7);
  *pcVar12 = *pcVar12 + cVar7;
  pcVar12[0x140201f] = pcVar12[0x140201f] + (char)param_2;
  *pcVar12 = *pcVar12 + cVar7;
  unaff_RSI[(longlong)unaff_RBP * 8] = unaff_RSI[(longlong)unaff_RBP * 8] + (char)param_1;
  uVar5 = *(uint *)(unaff_RSI + 1);
  pcVar12 = (char *)(ulonglong)uVar5;
  bVar6 = (byte)uVar5;
  *pcVar12 = *pcVar12 + bVar6;
  *(char *)(param_2 + -0x21) = *(char *)(param_2 + -0x21) + bVar6;
  pcVar12[1] = pcVar12[1] | bVar6;
  *pcVar12 = *pcVar12 + bVar6;
  *(char *)(param_2 + 0x1417177) = *(char *)(param_2 + 0x1417177) + cVar18;
  *pcVar12 = *pcVar12 + bVar6;
  cVar7 = bVar6 + (char)(uVar5 >> 8);
  piVar13 = (int *)(ulonglong)CONCAT31((int3)(uVar5 >> 8),cVar7);
  *(char *)piVar13 = (char)*piVar13 + cVar7;
  *(char *)(piVar13 + -0x1b) = (char)piVar13[-0x1b] + unaff_BL;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_2 + 1);
  pbVar15 = pbVar20;
  do {
    piVar14 = piVar13;
    *(char *)piVar14 = (char)*piVar14 + (char)piVar14;
    piVar13 = (int *)((ulonglong)((longlong)pbVar15 + 8) & 0xffffffff);
    *(undefined1 *)(*(longlong *)pbVar15 + 1) = *(undefined1 *)(*(longlong *)pbVar15 + 1);
    iVar9 = *piVar13;
    cVar7 = (char)piVar13;
    *(char *)piVar13 = (char)*piVar13 + cVar7;
    pbVar15 = (byte *)piVar14;
  } while (SCARRY1((char)iVar9,cVar7) != (char)*piVar13 < '\0');
  *piVar13 = *piVar13 + iVar21;
  *(char *)piVar13 = (char)*piVar13 + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14a8094b9 FUN_14a8094b9 body=1 status=ok
// SIG undefined FUN_14a8094b9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14a8094b9(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14adf3f4c FUN_14adf3f4c body=102 status=ok
// SIG undefined FUN_14adf3f4c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14adf3f4c(undefined8 param_1,undefined8 param_2,int param_3)

{
  byte *pbVar1;
  int3 iVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  longlong in_RAX;
  int *piVar7;
  undefined7 unaff_00000019;
  longlong unaff_RDI;
  undefined2 in_FS;
  longlong unaff_GS_OFFSET;
  int *piVar6;
  
  bVar4 = (byte)in_RAX;
  *(char *)(unaff_GS_OFFSET + in_RAX) = *(char *)(unaff_GS_OFFSET + in_RAX) + bVar4;
  iVar2 = (int3)(char)((ulonglong)in_RAX >> 8);
  cVar5 = (bVar4 * '\x02' + -0x48) - CARRY1(bVar4,bVar4);
  uVar3 = CONCAT31(iVar2,cVar5);
  piVar6 = (int *)(ulonglong)uVar3;
  *piVar6 = *piVar6 + uVar3;
  *(char *)piVar6 = (char)*piVar6 + cVar5;
  if (-1 < (char)*piVar6) {
    *piVar6 = *piVar6 + uVar3;
    *(char *)piVar6 = (char)*piVar6 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)piVar6 = (char)*piVar6 + cVar5;
  *(char *)piVar6 = (char)*piVar6 + cVar5;
  cVar5 = cVar5 + (char)param_1;
  uVar3 = CONCAT31(iVar2,cVar5);
  piVar6 = (int *)(ulonglong)uVar3;
  *(byte *)(unaff_RDI + 0x144) = *(byte *)(unaff_RDI + 0x144) ^ 0x3a;
  piVar7 = (int *)CONCAT62(0x143,CONCAT11((char)((ulonglong)param_1 >> 8) + -0x58,0x3a));
  *piVar6 = *piVar6 + uVar3;
  *(char *)piVar6 = (char)*piVar6 + cVar5;
  *piVar6 = *piVar6 + uVar3;
  *(char *)piVar6 = (char)*piVar6 + cVar5;
  *piVar7 = *piVar7 + (int)piVar7;
  *(char *)piVar7 = (char)*piVar7 + ':';
  *piVar7 = *piVar7 + param_3;
  *(char *)piVar7 = (char)*piVar7 + ':';
  *(undefined2 *)(unaff_RDI + 0x143a9) = in_FS;
  *(char *)piVar7 = (char)*piVar7 + ':';
  pbVar1 = (byte *)(CONCAT71(unaff_00000019,0x44) + 0x14476);
  *pbVar1 = *pbVar1 ^ 0x44;
  *(char *)piVar7 = (char)*piVar7 + ':';
  *(char *)piVar7 = (char)*piVar7 + ':';
  DAT_01481c98 = DAT_01481c98 + ':';
  *piVar7 = *piVar7 + (int)piVar7;
  *(char *)piVar7 = (char)*piVar7 + ':';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14b69b4c4 FUN_14b69b4c4 body=284 status=ok
// SIG undefined FUN_14b69b4c4(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014b69b5c7) */

void FUN_14b69b4c4(char *param_1,longlong param_2,longlong *param_3,char *param_4)

{
  char *pcVar1;
  undefined2 uVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  byte *in_RAX;
  char *pcVar10;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RBP;
  char *unaff_RSI;
  longlong unaff_RDI;
  char *in_R11;
  char unaff_R12B;
  char unaff_R13B;
  char *unaff_R14;
  longlong in_FS_OFFSET;
  longlong unaff_GS_OFFSET;
  longlong *plVar9;
  byte *pbVar11;
  
  iVar7 = (int)in_RAX;
  *(int *)in_RAX = *(int *)in_RAX + iVar7;
  bVar4 = (byte)in_RAX;
  *in_RAX = *in_RAX + bVar4;
  *in_RAX = *in_RAX + bVar4;
  *in_RAX = *in_RAX + bVar4;
  *in_RAX = *in_RAX + bVar4;
  *in_RAX = *in_RAX + bVar4;
  *(int *)in_RAX = *(int *)in_RAX + iVar7;
  *in_RAX = *in_RAX + bVar4;
  bVar6 = *in_RAX;
  *in_RAX = *in_RAX + bVar4;
  *in_RAX = *in_RAX + bVar4 + CARRY1(bVar6,bVar4);
  uVar8 = iVar7 + *(int *)in_RAX;
  plVar9 = (longlong *)(ulonglong)uVar8;
  cVar5 = (char)uVar8;
  *(char *)plVar9 = (char)*plVar9 + cVar5;
  *(char *)param_3 = (char)*param_3 + (char)param_3;
  *(char *)plVar9 = (char)*plVar9 + cVar5;
  *(char *)plVar9 = (char)*plVar9 + cVar5;
  *(char *)plVar9 = (char)*plVar9 + cVar5;
  *(char *)plVar9 = (char)*plVar9 + cVar5;
  *(char *)plVar9 = (char)*plVar9 + cVar5;
  *(char *)plVar9 = (char)*plVar9 + cVar5;
  *(char *)plVar9 = (char)*plVar9 + cVar5;
  *(char *)plVar9 = (char)*plVar9 + cVar5;
  *param_1 = *param_1 + cVar5;
  *(char *)plVar9 = (char)*plVar9 + unaff_BH;
  *(char *)plVar9 = (char)*plVar9 + cVar5;
  *(char *)plVar9 = (char)*plVar9 + cVar5;
  uVar2 = (undefined2)param_2;
  pbVar11 = (byte *)(param_2 + 0x52);
  bVar6 = *pbVar11;
  bVar4 = (byte)(uVar8 >> 8);
  *pbVar11 = *pbVar11 + bVar4;
  if (*pbVar11 == 0) {
    out(*unaff_RSI,uVar2);
    out(*(undefined4 *)(unaff_RSI + 1),uVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (CARRY1(bVar6,bVar4)) {
    unaff_RBP = (char *)(ulonglong)(uint)(*(int *)(unaff_RDI + 0x6e) * 0x69746341);
    pcVar1 = unaff_RSI + 4;
    out(*(undefined4 *)unaff_RSI,uVar2);
    unaff_RSI = unaff_RSI + 5;
    out(*pcVar1,uVar2);
    register0x00000020 = (BADSPACEBASE *)&stack0xfffffffffffffff8;
    if ((char)*pbVar11 < '\0') {
      out(*unaff_RSI,uVar2);
      in(uVar2);
      out(*(undefined1 *)(ulonglong)*(uint *)(param_2 + 0x65),uVar2);
      out(((undefined1 *)(ulonglong)*(uint *)(param_2 + 0x65))[1],uVar2);
      *(char *)(unaff_GS_OFFSET + (int)uVar8) = *(char *)(unaff_GS_OFFSET + (int)uVar8) + cVar5;
      *(char *)plVar9 = (char)*plVar9 + cVar5;
      *(int *)(in_FS_OFFSET + (longlong)plVar9) = *(int *)(in_FS_OFFSET + (longlong)plVar9) + uVar8;
      *(char *)plVar9 = (char)*plVar9 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *(char *)plVar9 = (char)*plVar9 + unaff_BL;
    plVar9 = (longlong *)(ulonglong)CONCAT22((short)(uVar8 >> 0x10),CONCAT11(0x69,cVar5));
    *param_3 = (longlong)(*param_3 + (longlong)plVar9);
    *(char *)plVar9 = (char)*plVar9 + cVar5;
  }
  *(byte *)(unaff_RDI + -0x46) = *(byte *)(unaff_RDI + -0x46) ^ (byte)param_2;
  *plVar9 = (longlong)(*plVar9 + (longlong)param_3);
  cVar5 = (char)plVar9;
  *(char *)plVar9 = (char)*plVar9 + cVar5;
  *(char *)plVar9 = (char)*plVar9 + cVar5;
  *(char *)plVar9 = (char)*plVar9 + cVar5;
  *(char *)plVar9 = (char)*plVar9 + cVar5;
  *(char *)plVar9 = (char)*plVar9 + cVar5;
  *param_4 = *param_4 + unaff_R13B;
  lVar3 = *plVar9;
  *in_R11 = *in_R11 + (char)register0x00000020;
  iVar7 = *(int *)(ulonglong)(uint)((int)lVar3 * 0x6e006f);
  *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
  *param_1 = *param_1 + unaff_BH;
  *(char *)(unaff_GS_OFFSET + unaff_RDI) = *(char *)(unaff_GS_OFFSET + unaff_RDI) + unaff_BL;
  *unaff_R14 = *unaff_R14 + (char)unaff_RBP;
  uVar8 = *(uint *)(ulonglong)(uint)(iVar7 * 0x6e006f);
  pcVar10 = (char *)(ulonglong)uVar8;
  cVar5 = (char)((ulonglong)param_1 >> 8);
  unaff_RBP[unaff_GS_OFFSET] = unaff_RBP[unaff_GS_OFFSET] + cVar5;
  unaff_RSI[unaff_GS_OFFSET] = unaff_RSI[unaff_GS_OFFSET] + cVar5;
  *param_4 = *param_4 + unaff_R12B;
  *(undefined8 *)((longlong)register0x00000020 + -0x10) = 0x6d006500;
  pcVar1 = (char *)((longlong)pcVar10 * 2 + 0x65);
  *pcVar1 = *pcVar1 + (char)param_1;
  *unaff_RSI = *unaff_RSI + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(unaff_GS_OFFSET + (longlong)pcVar10 * 2);
  *pcVar1 = *pcVar1 + cVar5;
  *pcVar10 = *pcVar10 + (char)uVar8;
  bVar6 = (char)uVar8 + unaff_BH;
  uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar6);
  pbVar11 = (byte *)(ulonglong)uVar8;
  *pbVar11 = *pbVar11 + bVar6;
  *pbVar11 = *pbVar11 + bVar6;
  *pbVar11 = *pbVar11 + bVar6;
  DAT_00000000 = DAT_00000000 + bVar6;
  *pbVar11 = *pbVar11 + bVar6;
  *pbVar11 = *pbVar11 + bVar6;
  *pbVar11 = *pbVar11 + (byte)param_2;
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + bVar6;
  *pbVar11 = *pbVar11 + bVar6;
  *unaff_RBP = *unaff_RBP + bVar6;
  *pbVar11 = *pbVar11 + bVar6;
  *pbVar11 = *pbVar11 + bVar6;
  *pbVar11 = *pbVar11 + bVar6;
  *pbVar11 = *pbVar11 + bVar6;
  *pbVar11 = *pbVar11 + bVar6;
  *pbVar11 = *pbVar11 + bVar6;
  *pbVar11 = *pbVar11 + bVar6;
  *pbVar11 = *pbVar11 + bVar6;
  *pbVar11 = *pbVar11 + bVar6;
  *(uint *)pbVar11 = *(int *)pbVar11 + uVar8;
  *pbVar11 = *pbVar11 & bVar6;
  *pbVar11 = *pbVar11 + bVar6;
  *pbVar11 = *pbVar11 + bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14bbe3d67 FUN_14bbe3d67 body=74 status=ok
// SIG undefined FUN_14bbe3d67(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14bbe3d67(longlong param_1,longlong param_2,longlong *param_3)

{
  char *pcVar1;
  char cVar2;
  undefined1 uVar3;
  char in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char cVar4;
  char unaff_BL;
  undefined7 unaff_00000019;
  char *unaff_RBP;
  undefined1 *unaff_RDI;
  char unaff_R12B;
  char unaff_R14B;
  
  cVar4 = (char)((ulonglong)param_1 >> 8);
  *(char *)(param_1 + 0x29) = *(char *)(param_1 + 0x29) + unaff_BL;
  *param_3 = *param_3 +
             CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  *unaff_RBP = *unaff_RBP + unaff_R12B;
  *unaff_RBP = *unaff_RBP + unaff_R14B;
  uVar3 = in((short)param_2);
  *unaff_RDI = uVar3;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))));
  *pcVar1 = *pcVar1 + cVar4;
  pcVar1 = (char *)(param_2 + CONCAT71(unaff_00000019,unaff_BL));
  cVar2 = *pcVar1;
  *pcVar1 = *pcVar1 + in_AH;
  if (!SCARRY1(cVar2,in_AH)) {
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) - (int)param_1;
    *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) + in_AL;
    pcVar1 = (char *)(CONCAT44(in_register_00000004,
                               CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + 0x14929a1);
    *pcVar1 = *pcVar1 + cVar4;
    *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) + in_AL;
    *(char *)(param_2 + 0x14929a1) = *(char *)(param_2 + 0x14929a1) + cVar4;
    *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) + in_AL;
    *(char *)(param_1 + 0x14929) = *(char *)(param_1 + 0x14929) + cVar4;
    *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) + in_AL;
    return;
  }
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
       CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14bc5a253 FUN_14bc5a253 body=365 status=ok
// SIG undefined FUN_14bc5a253(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014bc5a339) overlaps instruction at (ram,0x00014bc5a337)
    */

void FUN_14bc5a253(longlong param_1,char *param_2,int *param_3)

{
  byte bVar1;
  double dVar3;
  byte bVar4;
  longlong *plVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  char cVar16;
  int *in_RAX;
  byte *pbVar11;
  int *piVar13;
  int *piVar14;
  byte *pbVar15;
  char cVar17;
  undefined6 uVar18;
  char unaff_BL;
  char unaff_BH;
  longlong *plVar19;
  longlong *unaff_RBP;
  longlong lVar20;
  byte *unaff_RSI;
  longlong unaff_RDI;
  byte *pbVar21;
  int iVar22;
  undefined2 in_FS;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  float10 in_ST0;
  byte bVar2;
  char *pcVar12;
  
  iVar22 = (int)param_3;
  *in_RAX = *in_RAX + iVar22;
  bVar6 = (byte)in_RAX;
  *(byte *)in_RAX = (char)*in_RAX + bVar6;
  pbVar15 = (byte *)((longlong)unaff_RBP + (longlong)in_RAX * 4 + 0x46);
  *pbVar15 = *pbVar15 & 1;
  *(byte *)in_RAX = (char)*in_RAX + bVar6;
  param_2[0x52] = param_2[0x52] + bVar6;
  iVar10 = (int)in_RAX;
  *(int *)(longlong)iVar10 = *(int *)(longlong)iVar10 + iVar10;
  do {
    *(byte *)in_RAX = (char)*in_RAX + bVar6;
    *in_RAX = *in_RAX + iVar10;
    *(byte *)in_RAX = (char)*in_RAX + bVar6;
  } while ((char)*in_RAX < '\0');
  *in_RAX = *in_RAX + iVar22;
  *(byte *)in_RAX = (char)*in_RAX + bVar6;
  pbVar21 = (byte *)(unaff_RDI + 5);
  lVar20 = *unaff_RBP;
  plVar19 = unaff_RBP + 1;
  *(int *)(unaff_RSI + 1) = iVar10;
  *(byte *)in_RAX = (char)*in_RAX + bVar6;
  cVar7 = (char)((ulonglong)param_1 >> 8);
  *unaff_RSI = *unaff_RSI + cVar7;
  out(0x8b,iVar10);
  *in_RAX = *in_RAX + iVar22;
  *(byte *)in_RAX = (char)*in_RAX + bVar6;
  *(char *)(lVar20 + 0x46 + (longlong)in_RAX * 4) = (char)((ulonglong)in_RAX >> 8);
  *in_RAX = *in_RAX + iVar10;
  *(byte *)in_RAX = (char)*in_RAX + bVar6;
  bVar4 = *(byte *)(lVar20 + 0x46 + (longlong)in_RAX * 4);
  pbVar11 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar4,bVar6));
  uVar9 = (uint)pbVar11;
  *(uint *)pbVar11 = *(int *)pbVar11 + uVar9;
  *pbVar11 = *pbVar11 + bVar6;
  *(undefined2 *)(lVar20 + 0x46 + (longlong)pbVar11 * 4) = in_FS;
  *(uint *)pbVar11 = *(int *)pbVar11 + uVar9;
  *pbVar11 = *pbVar11 + bVar6;
  *(uint *)pbVar11 = *(int *)pbVar11 + uVar9;
  *pbVar11 = *pbVar11 + bVar6;
  *pbVar11 = *pbVar11 + bVar6;
  unaff_RSI[0x140b37c] = unaff_RSI[0x140b37c] + cVar7;
  *pbVar11 = *pbVar11 + bVar6;
  param_2[0x1468564] = param_2[0x1468564] + (char)param_2;
  *pbVar11 = *pbVar11 + bVar6;
  pbVar15 = unaff_RSI + -0x14;
  *pbVar15 = *pbVar15 + unaff_BH;
  plVar5 = unaff_RBP + 1;
  if (*pbVar15 == 0) {
    *(uint *)pbVar11 = *(int *)pbVar11 + uVar9;
    *pbVar11 = *pbVar11 + bVar6;
    *pbVar11 = *pbVar11 + bVar6;
    uVar18 = (undefined6)((ulonglong)param_2 >> 0x10);
    cVar8 = (char)((ulonglong)param_2 >> 8) * '\x02';
    param_2 = (char *)CONCAT62(uVar18,CONCAT11(cVar8,100));
    if (cVar8 == '\0') {
      pbVar11[lVar20 * 8 + 0x1468b] = pbVar11[lVar20 * 8 + 0x1468b] + bVar4;
      pbVar15 = pbVar21;
      goto code_r0x00014bc5a30e;
    }
    *(uint *)pbVar11 = *(int *)pbVar11 + uVar9;
    *pbVar11 = *pbVar11 + bVar6;
    param_2 = (char *)CONCAT62(uVar18,0x6464);
    *pbVar11 = *pbVar11 + bVar6;
    pcVar12 = (char *)((longlong)param_2 * 2 + 0x1427b);
    *pcVar12 = *pcVar12 + cVar7;
    *pbVar11 = *pbVar11 + bVar6;
    dVar3 = *(double *)(lVar20 + 0x46 + (longlong)pbVar11 * 4);
    *(uint *)pbVar11 = *(int *)pbVar11 + uVar9;
    *pbVar11 = *pbVar11 + bVar6;
    plVar19 = (longlong *)unaff_RBP[1];
    if (*pbVar11 == 0) {
      *(short *)pbVar11 = (short)(in_ST0 - (float10)dVar3);
      *(uint *)pbVar11 = *(int *)pbVar11 + uVar9;
      bVar1 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar6;
      bVar2 = *pbVar11;
      pbVar15 = (byte *)(unaff_RDI + 6);
      *pbVar21 = bVar6;
      if (CARRY1(bVar1,bVar6) || bVar2 == 0) {
        *param_3 = *param_3 + uVar9;
        *pbVar11 = *pbVar11 + bVar6;
        param_1 = param_1 + -1;
        if (param_1 == 0 || *pbVar11 == 0) goto code_r0x00014bc5a30e;
        *pbVar11 = *pbVar11 + bVar6;
        param_2 = (char *)CONCAT62(uVar18,0x1264);
        if ((POPCOUNT(*pbVar11) & 1U) != 0) {
          bVar2 = *pbVar11;
          bVar4 = *pbVar11;
          *pbVar11 = *pbVar11 + bVar6;
          *(ulonglong *)((longlong)plVar19 + -8) =
               (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SCARRY1(bVar4,bVar6) * 0x800 |
               (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
               (ulonglong)((char)*pbVar11 < '\0') * 0x80 | (ulonglong)(*pbVar11 == 0) * 0x40 |
               (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(*pbVar11) & 1U) == 0) * 4 |
               (ulonglong)CARRY1(bVar2,bVar6) | (ulonglong)(in_ID & 1) * 0x200000 |
               (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
               (ulonglong)(in_AC & 1) * 0x40000;
          DAT_14bc5a548 = DAT_14bc5a548 ^ 0x12;
          unaff_RSI[0x49] = unaff_RSI[0x49] + bVar6;
          pcVar12 = (char *)((ulonglong)(uVar9 ^ 0x149) + 0x49);
          bVar6 = (byte)(uVar9 ^ 0x149);
          *pcVar12 = *pcVar12 + bVar6;
          *unaff_RSI = *unaff_RSI + (bVar6 ^ 0x49);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      *(uint *)pbVar11 = *(int *)pbVar11 + uVar9;
      *pbVar11 = *pbVar11 + bVar6;
      out(100,bVar6);
      *pbVar11 = *pbVar11 + bVar6;
      cVar7 = bVar6 + (char)((ulonglong)param_1 >> 8);
      pbVar15 = (byte *)CONCAT71((int7)((ulonglong)pbVar11 >> 8),cVar7);
      *pbVar15 = *pbVar15 + cVar7;
      bVar6 = *pbVar15;
      *pbVar15 = *pbVar15 + bVar4;
      iVar10 = (int)pbVar15 + *(int *)(param_1 + 0x144) + (uint)CARRY1(bVar6,bVar4);
      cVar17 = (char)((ulonglong)param_2 >> 8);
      cVar8 = (char)iVar10 + cVar17;
      pcVar12 = (char *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),cVar8);
      *pcVar12 = *pcVar12 + cVar8;
      cVar16 = (char)((uint)iVar10 >> 8) + cVar17;
      piVar13 = (int *)(ulonglong)CONCAT22((short)((uint)iVar10 >> 0x10),CONCAT11(cVar16,cVar8));
      *(char *)piVar13 = (char)*piVar13 + cVar8;
      cVar7 = *param_2;
      *param_2 = *param_2 + cVar17;
      if (!SCARRY1(cVar7,cVar17)) {
        *(char *)((longlong)piVar13 + -99) = *(char *)((longlong)piVar13 + -99) + cVar16;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *piVar13 = *piVar13 + iVar22;
      *(char *)piVar13 = (char)*piVar13 + cVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(uint *)pbVar11 = *(int *)pbVar11 + uVar9;
    *pbVar11 = *pbVar11 + bVar6;
    pbVar11[0x7c] = pbVar11[0x7c] | bVar4;
    *(uint *)pbVar11 = *(int *)pbVar11 + uVar9;
    *pbVar11 = *pbVar11 + bVar6;
    pbVar21 = (byte *)(unaff_RDI + 9);
    *(int *)pbVar11 = *(int *)pbVar11 + iVar22;
    *pbVar11 = *pbVar11 + bVar6;
    plVar5 = plVar19;
  }
  plVar19 = plVar5;
  *pbVar21 = *unaff_RSI;
  *(undefined8 *)((longlong)plVar19 + -8) = 0x14bc5a30e;
  pbVar11 = (byte *)FUN_14bc6e999();
  unaff_RSI = unaff_RSI + 1;
  pbVar15 = pbVar21 + 1;
code_r0x00014bc5a30e:
  *pbVar11 = *pbVar11 + (char)pbVar11;
  bVar6 = in((short)param_2);
  *pbVar15 = bVar6;
  pcVar12 = (char *)(param_1 + lVar20 * 8);
  cVar8 = (char)((ulonglong)param_1 >> 8);
  *pcVar12 = *pcVar12 + cVar8;
  uVar9 = *(uint *)(unaff_RSI + 1);
  *(char *)(ulonglong)uVar9 = *(char *)(ulonglong)uVar9 + (char)uVar9;
  param_2[0x60] = param_2[0x60] + unaff_BH;
  cVar7 = (char)uVar9 - *(char *)(param_1 + 1);
  pcVar12 = (char *)(ulonglong)CONCAT31((int3)(uVar9 >> 8),cVar7);
  *pcVar12 = *pcVar12 + cVar7;
  pcVar12[0x140201f] = pcVar12[0x140201f] + (char)param_2;
  *pcVar12 = *pcVar12 + cVar7;
  unaff_RSI[lVar20 * 8] = unaff_RSI[lVar20 * 8] + (char)param_1;
  uVar9 = *(uint *)(unaff_RSI + 1);
  pcVar12 = (char *)(ulonglong)uVar9;
  bVar6 = (byte)uVar9;
  *pcVar12 = *pcVar12 + bVar6;
  param_2[-0x21] = param_2[-0x21] + bVar6;
  pcVar12[1] = pcVar12[1] | bVar6;
  *pcVar12 = *pcVar12 + bVar6;
  param_2[0x1417177] = param_2[0x1417177] + cVar8;
  *pcVar12 = *pcVar12 + bVar6;
  cVar7 = bVar6 + (char)(uVar9 >> 8);
  piVar13 = (int *)(ulonglong)CONCAT31((int3)(uVar9 >> 8),cVar7);
  *(char *)piVar13 = (char)*piVar13 + cVar7;
  *(char *)(piVar13 + -0x1b) = (char)piVar13[-0x1b] + unaff_BL;
  param_2[1] = param_2[1];
  do {
    piVar14 = piVar13;
    *(char *)piVar14 = (char)*piVar14 + (char)piVar14;
    piVar13 = (int *)((ulonglong)(plVar19 + 1) & 0xffffffff);
    *(undefined1 *)(*plVar19 + 1) = *(undefined1 *)(*plVar19 + 1);
    iVar10 = *piVar13;
    cVar7 = (char)piVar13;
    *(char *)piVar13 = (char)*piVar13 + cVar7;
    plVar19 = (longlong *)piVar14;
  } while (SCARRY1((char)iVar10,cVar7) != (char)*piVar13 < '\0');
  *piVar13 = *piVar13 + iVar22;
  *(char *)piVar13 = (char)*piVar13 + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14bc6e999 FUN_14bc6e999 body=161 status=ok
// SIG undefined FUN_14bc6e999(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014bc6ea74) overlaps instruction at (ram,0x00014bc6ea73)
    */

void FUN_14bc6e999(char *param_1,char *param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  char cVar6;
  uint *in_RAX;
  byte *pbVar5;
  undefined2 uVar7;
  int *unaff_RBX;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  char *unaff_RDI;
  char unaff_R12B;
  char unaff_R13B;
  longlong in_FS_OFFSET;
  longlong unaff_GS_OFFSET;
  
  cVar6 = (char)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + cVar6;
  uVar7 = SUB82(param_2,0);
  out(*unaff_RSI,uVar7);
  *(char *)unaff_RBX = (char)*unaff_RBX + cVar6;
  param_1[unaff_GS_OFFSET] = param_1[unaff_GS_OFFSET] + (char)in_RAX;
  uVar4 = *in_RAX;
  out(*(undefined4 *)(unaff_RSI + 1),uVar7);
  cVar6 = (char)((ulonglong)param_2 >> 8);
  *param_2 = *param_2 + cVar6;
  *param_1 = *param_1 + unaff_R12B;
  uVar4 = *(uint *)(ulonglong)uVar4;
  pbVar5 = (byte *)(ulonglong)uVar4;
  out(*(undefined4 *)(unaff_RSI + 5),uVar7);
  *param_2 = *param_2 + cVar6;
  *unaff_RDI = *unaff_RDI + unaff_R13B;
  *(char *)(in_FS_OFFSET + unaff_RBP) = *(char *)(in_FS_OFFSET + unaff_RBP) + (char)(uVar4 >> 8);
  bVar3 = (byte)uVar4;
  *pbVar5 = *pbVar5 + bVar3;
  *pbVar5 = *pbVar5 + bVar3;
  *pbVar5 = *pbVar5 + bVar3;
  *pbVar5 = *pbVar5 + bVar3;
  *pbVar5 = *pbVar5 + bVar3;
  *pbVar5 = *pbVar5 + bVar3;
  bVar1 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar3;
  out(unaff_RSI[9],uVar7);
  if (CARRY1(bVar1,bVar3)) {
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    if (param_1 != &DAT_00000001 && *pbVar5 != 0) {
      *param_3 = (longlong)(pbVar5 + *param_3);
      *pbVar5 = *pbVar5 + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)pbVar5 = *(int *)pbVar5 + uVar4;
  *pbVar5 = *pbVar5 + bVar3;
  if (param_1 == &DAT_00000001) {
    *(uint *)param_3 = (int)*param_3 + uVar4;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    *(int *)pbVar5 = *(int *)pbVar5 + (int)param_3;
    *pbVar5 = *pbVar5 + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar5[0x1d] = pbVar5[0x1d] + bVar3;
  *(undefined1 *)(unaff_RBP + 1) = 0;
  *pbVar5 = *pbVar5 + bVar3;
  *(char *)unaff_RBX = (char)*unaff_RBX + (char)unaff_RBX;
  *unaff_RBX = *unaff_RBX + (int)unaff_RBX;
  do {
    iVar2 = *unaff_RBX;
    *(char *)unaff_RBX = (char)*unaff_RBX + (char)unaff_RBX;
    if (SCARRY1((char)iVar2,(char)unaff_RBX)) {
      *unaff_RBX = *unaff_RBX + (int)unaff_RBX;
      break;
    }
    unaff_RBX = (int *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),0x44);
    *unaff_RBX = *unaff_RBX + (int)unaff_RBX;
    iVar2 = *unaff_RBX;
    *(char *)unaff_RBX = (char)*unaff_RBX + 'D';
  } while (SCARRY1((char)iVar2,'D'));
  *unaff_RBX = *unaff_RBX + (int)param_3;
  *(char *)unaff_RBX = (char)*unaff_RBX + (char)unaff_RBX;
  uVar4 = (uint)unaff_RBX | 0x144b0;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a1000 entry body=5 status=ok
// SIG undefined entry(void)

void entry(void)

{
  FUN_156ef2e17();
  FUN_166867046();
  return;
}



// FUNCTION 14d7a45d2 thunk_FUN_15b642ca5 body=5 status=ok
// SIG undefined thunk_FUN_15b642ca5(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void thunk_FUN_15b642ca5(void)

{
  return;
}



// FUNCTION 14d7a4612 FUN_14d7a4612 body=18 status=ok
// SIG undefined FUN_14d7a4612(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4612(undefined8 param_1,undefined2 param_2)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  char *pcVar4;
  undefined8 in_RAX;
  longlong unaff_RBX;
  uint *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar5;
  
  uVar3 = in(param_2);
  uVar5 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar3);
  if ((uVar5 & 0xe77fbb4d) != 0 && -1 < (int)uVar5) {
    uVar1 = *(uint *)(unaff_RBX + -0x16);
    *(uint *)(unaff_RBX + -0x16) =
         uVar1 << 3 | (uint)(CONCAT14((*unaff_RSI & 0xe8fc2414) < 0xecf405a5,uVar1) >> 0x1e);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(0xe9,uVar3);
  pcVar4 = (char *)(uVar5 & 0xffffffff);
  cVar2 = (char)pcVar4;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *(char *)(unaff_RDI + 0x27b40384) =
       *(char *)(unaff_RDI + 0x27b40384) + (char)((ulonglong)pcVar4 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4625 FUN_14d7a4625 body=6 status=ok
// SIG undefined FUN_14d7a4625(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4625(void)

{
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4631 FUN_14d7a4631 body=15 status=ok
// SIG undefined FUN_14d7a4631(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4631(void)

{
  char *pcVar1;
  char in_AH;
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  pcVar1 = (char *)(unaff_RDI + 0x586e2fd0 + unaff_RBP);
  *pcVar1 = *pcVar1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4643 FUN_14d7a4643 body=8 status=ok
// SIG undefined FUN_14d7a4643(void)

byte FUN_14d7a4643(undefined8 param_1,undefined2 param_2)

{
  char cVar1;
  longlong unaff_RDI;
  char in_CF;
  
  cVar1 = in(param_2);
  return (cVar1 - *(char *)(unaff_RDI + -0x31)) - in_CF & 0xac;
}



// FUNCTION 14d7a464b FUN_14d7a464b body=8 status=ok
// SIG undefined FUN_14d7a464b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a464b(longlong param_1,longlong param_2)

{
  char *pcVar1;
  double dVar2;
  char cVar3;
  double *in_RAX;
  undefined4 unaff_EBX;
  undefined8 *puVar4;
  undefined8 *unaff_RBP;
  undefined4 unaff_EDI;
  undefined4 unaff_0000003c;
  char in_SF;
  char in_OF;
  float10 in_ST0;
  undefined1 auStack_dfa9 [57241];
  undefined8 uStack_10;
  
  puVar4 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar3 = '\x0e';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar4 = puVar4 + -1;
    *puVar4 = *unaff_RBP;
    cVar3 = cVar3 + -1;
  } while ('\0' < cVar3);
  dVar2 = *in_RAX;
  if (in_OF == in_SF) {
    pcVar1 = (char *)(CONCAT44(unaff_0000003c,unaff_EDI) + -0x76185637);
    *pcVar1 = *pcVar1 + ((byte)param_2 | (byte)unaff_EDI);
    *(longlong *)((longlong)in_RAX + -0x4a508264) = (longlong)ROUND(in_ST0 / (float10)dVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(param_1 + -0x1248b522) = unaff_EBX;
  *(char *)(param_1 + -0x6c) = *(char *)(param_1 + -0x6c) >> 0x13;
  *(byte *)(param_2 + 0x68) = *(byte *)(param_2 + 0x68) | (byte)unaff_EBX;
  *(short *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(0x79,(char)param_1)) =
       (short)ROUND(in_ST0 / (float10)dVar2);
  LOCK();
  *(int *)in_RAX = (int)auStack_dfa9 + -0x70;
  UNLOCK();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a4653 FUN_14d7a4653 body=52 status=ok
// SIG undefined FUN_14d7a4653(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4653(longlong param_1,longlong param_2)

{
  char *pcVar1;
  undefined4 *in_RAX;
  undefined4 unaff_EBX;
  undefined4 unaff_ESP;
  undefined4 unaff_EDI;
  undefined4 unaff_0000003c;
  char in_SF;
  char in_OF;
  float10 in_ST0;
  
  if (in_OF == in_SF) {
    pcVar1 = (char *)(CONCAT44(unaff_0000003c,unaff_EDI) + -0x76185637);
    *pcVar1 = *pcVar1 + ((byte)param_2 | (byte)unaff_EDI);
    *(longlong *)(in_RAX + -0x12942099) = (longlong)ROUND(in_ST0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(param_1 + -0x1248b522) = unaff_EBX;
  *(char *)(param_1 + -0x6c) = *(char *)(param_1 + -0x6c) >> 0x13;
  *(byte *)(param_2 + 0x68) = *(byte *)(param_2 + 0x68) | (byte)unaff_EBX;
  *(short *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(0x79,(char)param_1)) =
       (short)ROUND(in_ST0);
  LOCK();
  *in_RAX = unaff_ESP;
  UNLOCK();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a4668 FUN_14d7a4668 body=2 status=ok
// SIG undefined FUN_14d7a4668(void)

void FUN_14d7a4668(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a4686 FUN_14d7a4686 body=2 status=ok
// SIG undefined FUN_14d7a4686(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4686(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined1 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a468a FUN_14d7a468a body=17 status=ok
// SIG undefined FUN_14d7a468a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a468a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a46c6 FUN_14d7a46c6 body=11 status=ok
// SIG undefined FUN_14d7a46c6(void)

void FUN_14d7a46c6(undefined8 param_1,byte param_2)

{
  byte *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI & param_2;
  FUN_14d7a46fb();
  return;
}



// FUNCTION 14d7a46d2 FUN_14d7a46d2 body=4 status=ok
// SIG undefined FUN_14d7a46d2(void)

void FUN_14d7a46d2(void)

{
  return;
}



// FUNCTION 14d7a46d6 FUN_14d7a46d6 body=17 status=ok
// SIG undefined FUN_14d7a46d6(void)

int FUN_14d7a46d6(void)

{
  longlong lVar1;
  int in_EAX;
  longlong in_FS_OFFSET;
  
  lVar1 = (longlong)*(int *)(in_FS_OFFSET + 0x1c2d9efa0) * -0x1b7bf8f0;
  return (in_EAX + 0xcbae367) - (uint)((int)lVar1 != lVar1);
}



// FUNCTION 14d7a46fb FUN_14d7a46fb body=68 status=ok
// SIG undefined FUN_14d7a46fb(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a478b) overlaps instruction at (ram,0x00014d7a4785)
    */

void FUN_14d7a46fb(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  short sVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  undefined1 in_AL;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar6;
  byte bVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  ulonglong unaff_RBX;
  longlong lVar10;
  int *piVar11;
  longlong unaff_RBP;
  uint *unaff_RSI;
  undefined1 *unaff_RDI;
  char in_OF;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 in_ST5;
  unkbyte10 in_ST6;
  byte abStackX_a [30];
  
  uVar9 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar8 = (undefined2)((ulonglong)param_2 >> 0x10);
  bVar7 = (byte)((ulonglong)param_2 >> 8);
  sVar2 = *(short *)(unaff_RBX * 2 + -0xf);
  if ((in_AH & 0x40) == 0 && (bool)in_OF == ((in_AH & 0x80) != 0)) {
    bVar6 = unaff_RDI[-0x352eeab5];
    lVar10 = CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
    *(undefined2 *)(lVar10 + -0x123f800) = in_FPUControlWord;
    *(undefined2 *)(lVar10 + -0x123f7fc) = in_FPUStatusWord;
    *(undefined2 *)(lVar10 + -0x123f7f8) = in_FPUTagWord;
    *(undefined8 *)(lVar10 + -0x123f7ec) = in_FPUDataPointer;
    *(code **)(lVar10 + -0x123f7f4) = FUN_14d7a46fb;
    *(undefined2 *)(lVar10 + -0x123f7ee) = in_FPULastInstructionOpcode;
    *(float10 *)(lVar10 + -0x123f7e4) = (float10)sVar2;
    *(unkbyte10 *)(lVar10 + -0x123f7da) = in_ST0;
    *(unkbyte10 *)(lVar10 + -0x123f7d0) = in_ST1;
    *(unkbyte10 *)(lVar10 + -0x123f7c6) = in_ST2;
    *(unkbyte10 *)(lVar10 + -0x123f7bc) = in_ST3;
    *(unkbyte10 *)(lVar10 + -0x123f7b2) = in_ST4;
    *(unkbyte10 *)(lVar10 + -0x123f7a8) = in_ST5;
    *(unkbyte10 *)(lVar10 + -0x123f79e) = in_ST6;
    if (bVar7 <= bVar6) {
      uVar4 = in((short)param_2);
      *unaff_RDI = uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(int *)(param_2 + -0x6f) = *(int *)(param_2 + -0x6f) + (int)unaff_RDI;
  }
  else {
    unaff_RBX = (ulonglong)*unaff_RSI;
    if (param_1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(uint *)(unaff_RDI + -0x6e85fec2) = *(uint *)(unaff_RDI + -0x6e85fec2) | (uint)param_2;
  }
  iVar3 = *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          );
  iVar5 = CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  do {
  } while (iVar5 != iVar3 &&
           SBORROW4(CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)),iVar3) == iVar5 - iVar3 < 0
          );
  lVar10 = CONCAT62((int6)(unaff_RBX >> 0x10),
                    CONCAT11((byte)(unaff_RBX >> 8) ^ abStackX_a[param_1 * 8],(char)unaff_RBX));
  bVar6 = (byte)param_2 ^ *(byte *)((ulonglong)((int)unaff_RDI - (uint)param_2) - 0x1e);
  if ((char)bVar6 < '\0') {
    if ((char)bVar6 < '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    pbVar1 = (byte *)(lVar10 + 0x7e6cb36d + unaff_RBP * 2);
    *pbVar1 = *pbVar1 ^ 0xcb;
  }
  *(uint *)CONCAT44(uVar9,CONCAT22(uVar8,CONCAT11(bVar7,bVar6))) =
       *(uint *)CONCAT44(uVar9,CONCAT22(uVar8,CONCAT11(bVar7,bVar6))) | 0x7d;
  piVar11 = (int *)CONCAT71((int7)((ulonglong)lVar10 >> 8),0x21);
  *piVar11 = *piVar11 + -0x1e;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4749 FUN_14d7a4749 body=18 status=ok
// SIG undefined FUN_14d7a4749(void)

void FUN_14d7a4749(undefined8 param_1,longlong param_2)

{
  byte in_AL;
  byte bVar1;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char in_AF;
  uint *unaff_retaddr;
  
  bVar1 = in_AL ^ 0x53;
  bVar1 = ((char)bVar1 < '\0') << 7 | (bVar1 == 0) << 6 | in_AF << 4 |
          ((POPCOUNT(bVar1) & 1U) == 0) << 2;
  *(uint *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar1,in_AL))) ^
            0x53 | 0x200) = CONCAT22(in_register_00000002,CONCAT11(bVar1,in_AL)) ^ 0x53 | 0x200;
  *unaff_retaddr = *unaff_retaddr >> 1;
  *(int *)(param_2 + -0x110f3272) =
       *(int *)(param_2 + -0x110f3272) -
       (CONCAT22(in_register_00000002,CONCAT11(bVar1,in_AL)) ^ 0x53 | 0x200);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a4788 FUN_14d7a4788 body=18 status=ok
// SIG undefined FUN_14d7a4788(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4788(undefined8 param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined7 unaff_00000019;
  undefined4 *unaff_RDI;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  uVar1 = in((short)param_2);
  *unaff_RDI = uVar1;
  if (!in_ZF && in_OF == in_SF) {
    *param_2 = *param_2 | 0x7d;
    *(int *)CONCAT71(unaff_00000019,0x21) = *(int *)CONCAT71(unaff_00000019,0x21) + -0x1e;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a479c FUN_14d7a479c body=3 status=ok
// SIG undefined FUN_14d7a479c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a479c(undefined8 param_1,undefined2 param_2)

{
  undefined1 in_AL;
  
  out(param_2,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a47ad FUN_14d7a47ad body=4 status=ok
// SIG undefined FUN_14d7a47ad(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a47ad(void)

{
  undefined4 in_EAX;
  undefined4 *unaff_RDI;
  bool in_SF;
  
  if (in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a47b5 FUN_14d7a47b5 body=8 status=ok
// SIG undefined FUN_14d7a47b5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a47b5(void)

{
  undefined1 in_XMM3 [16];
  undefined1 in_XMM5 [16];
  
  vandps_avx(in_XMM5,in_XMM3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a47bd FUN_14d7a47bd body=10 status=ok
// SIG undefined FUN_14d7a47bd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a47bd(void)

{
  undefined1 in_XMM3 [16];
  undefined1 in_XMM5 [16];
  
  vandps_avx(in_XMM5,in_XMM3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a47ce FUN_14d7a47ce body=11 status=ok
// SIG undefined FUN_14d7a47ce(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a47e2) overlaps instruction at (ram,0x00014d7a47e1)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a47ce(undefined8 param_1,int param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  longlong in_RAX;
  char cVar5;
  longlong lVar6;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  ulonglong *unaff_RDI;
  ulonglong *puVar7;
  bool in_CF;
  
  if (in_CF) {
    out(*unaff_RSI,(short)param_2);
    *(char *)((ulonglong)_DAT_d6c2003b4e01f49c - 0x6b) =
         *(char *)((ulonglong)_DAT_d6c2003b4e01f49c - 0x6b) + (char)(_DAT_d6c2003b4e01f49c >> 8);
    *(int *)(unaff_RBX - 0x7d38dcaf) = *(int *)(unaff_RBX - 0x7d38dcaf) + (int)unaff_RBX;
    pbVar1 = (byte *)(longlong)(param_2 + 0x10a16f6b);
    bVar3 = (byte)param_1 & 7;
    *pbVar1 = *pbVar1 << bVar3 | *pbVar1 >> 8 - bVar3;
    pbVar1 = (byte *)(unaff_RBP + -0x3ed3f16c);
    *pbVar1 = *pbVar1 << 1 | (char)*pbVar1 < '\0';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar5 = (byte)param_1 - (char)in_RAX;
  lVar6 = CONCAT71((int7)((ulonglong)param_1 >> 8),cVar5) + -1;
  puVar7 = unaff_RDI;
  if (lVar6 != 0 && cVar5 != '\0') {
    uVar4 = (int)unaff_RSI + *(int *)(unaff_RBP + 0x76ed60d3);
    unaff_RSI = (undefined4 *)(ulonglong)uVar4;
    LOCK();
    uVar2 = *(undefined4 *)(in_RAX + -0x7d);
    *(undefined4 *)(in_RAX + -0x7d) = (int)in_RAX;
    UNLOCK();
    if ((int)uVar4 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar7 = (ulonglong *)((longlong)unaff_RDI + 4);
    *(undefined4 *)unaff_RDI = uVar2;
  }
  uVar4 = func_0x00016a32780e();
  unaff_RSI[-0x1c] = (int)lVar6;
  *puVar7 = CONCAT71((int7)(unaff_RBX >> 8),*(undefined1 *)((ulonglong)uVar4 + (unaff_RBX & 0xff)))
            & 0xffffffff;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a47da FUN_14d7a47da body=11 status=ok
// SIG undefined FUN_14d7a47da(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a47da(void)

{
  uint in_EAX;
  ulonglong unaff_RBX;
  ulonglong *unaff_RDI;
  
  *unaff_RDI = CONCAT71((int7)(unaff_RBX >> 8),
                        *(undefined1 *)((ulonglong)in_EAX + (unaff_RBX & 0xff))) & 0xffffffff;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a47ea FUN_14d7a47ea body=6 status=ok
// SIG undefined FUN_14d7a47ea(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a47ea(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a47f2 FUN_14d7a47f2 body=8 status=ok
// SIG undefined FUN_14d7a47f2(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a47f2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a47fa FUN_14d7a47fa body=4 status=ok
// SIG undefined FUN_14d7a47fa(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a47fa(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4806 FUN_14d7a4806 body=1 status=ok
// SIG undefined FUN_14d7a4806(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4806(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4812 FUN_14d7a4812 body=11 status=ok
// SIG undefined FUN_14d7a4812(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4812(longlong param_1)

{
  undefined4 in_EAX;
  undefined4 *unaff_RDI;
  char in_ZF;
  bool in_SF;
  
  if (param_1 == 1 || in_ZF == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4823 FUN_14d7a4823 body=41 status=ok
// SIG undefined FUN_14d7a4823(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a4823(longlong param_1,undefined4 param_2)

{
  byte *pbVar1;
  int *piVar2;
  code *pcVar3;
  undefined8 in_RAX;
  int iVar4;
  undefined1 unaff_BL;
  byte unaff_BH;
  byte bVar5;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  uint unaff_EDI;
  
  if (param_1 != 0) {
    out((short)param_2,(int)CONCAT71((int7)((ulonglong)in_RAX >> 8),0xa5));
    iVar4 = CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + (char)((uint)param_2 >> 8));
    bVar5 = unaff_BH | *(byte *)((ulonglong)(unaff_EDI ^ (uint)&stack0x00000000) + 0x6a);
    in((short)iVar4);
    *(char *)((ulonglong)_DAT_d6c2003b4e01f49c - 0x6b) =
         *(char *)((ulonglong)_DAT_d6c2003b4e01f49c - 0x6b) + (char)(_DAT_d6c2003b4e01f49c >> 8);
    piVar2 = (int *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(bVar5,unaff_BL))) +
                    -0x7d38dcaf);
    *piVar2 = *piVar2 + CONCAT22(unaff_0000001a,CONCAT11(bVar5,unaff_BL));
    pbVar1 = (byte *)(longlong)(iVar4 + 0x10a16f6b);
    bVar5 = (byte)param_1 & 7;
    *pbVar1 = *pbVar1 << bVar5 | *pbVar1 >> 8 - bVar5;
    pbVar1 = (byte *)(unaff_RBP + -0x3ed3f16c);
    *pbVar1 = *pbVar1 << 1 | (char)*pbVar1 < '\0';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar3 = (code *)swi(1);
  (*pcVar3)();
  return;
}



// FUNCTION 14d7a4851 FUN_14d7a4851 body=7 status=ok
// SIG undefined FUN_14d7a4851(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a4853) overlaps instruction at (ram,0x00014d7a4851)
    */

void FUN_14d7a4851(void)

{
  int *in_RAX;
  
  *in_RAX = *in_RAX >> 0x1b;
  if ((*in_RAX < 0) && (*in_RAX != 0)) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a485d FUN_14d7a485d body=10 status=ok
// SIG undefined FUN_14d7a485d(void)

undefined4 FUN_14d7a485d(undefined8 param_1,undefined2 param_2)

{
  uint uVar1;
  longlong in_RAX;
  undefined8 *unaff_RBP;
  undefined2 in_FPUStatusWord;
  
  *(undefined2 *)(in_RAX + 0x3b) = in_FPUStatusWord;
  func_0x00019788086e();
  *unaff_RBP = 0x3cf5a0c5;
  uVar1 = in(param_2);
  return CONCAT31((int3)(uVar1 >> 8),(byte)uVar1 | *(byte *)(ulonglong)uVar1);
}



// FUNCTION 14d7a4869 FUN_14d7a4869 body=3 status=ok
// SIG undefined FUN_14d7a4869(void)

void FUN_14d7a4869(longlong param_1)

{
  uint *puVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  uint unaff_EBP;
  float10 in_ST0;
  
  puVar1 = (uint *)(CONCAT44(in_register_00000004,in_EAX) + -0x3b);
  *puVar1 = *puVar1 ^ unaff_EBP;
  uRam87cd432ecb9b653c = CONCAT31((int3)((uint)in_EAX >> 8),uRam08c5052a2953628a);
  *(float *)(param_1 + -0x408bf9ed) = (float)in_ST0;
  return;
}



// FUNCTION 14d7a487e FUN_14d7a487e body=7 status=ok
// SIG undefined FUN_14d7a487e(void)

void FUN_14d7a487e(longlong param_1)

{
  undefined4 in_EAX;
  float10 in_ST0;
  
  uRam87cd432ecb9b653c = in_EAX;
  *(float *)(param_1 + -0x408bf9ed) = (float)in_ST0;
  return;
}



// FUNCTION 14d7a4886 FUN_14d7a4886 body=4 status=ok
// SIG undefined FUN_14d7a4886(void)

void FUN_14d7a4886(void)

{
  return;
}



// FUNCTION 14d7a4892 FUN_14d7a4892 body=3 status=ok
// SIG undefined FUN_14d7a4892(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4892(void)

{
  bool in_ZF;
  
  if (!in_ZF) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4897 FUN_14d7a4897 body=2 status=ok
// SIG undefined FUN_14d7a4897(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14d7a4897(undefined4 param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  longlong unaff_RBX;
  undefined8 *unaff_RBP;
  byte *unaff_RSI;
  byte in_CF;
  
  uVar5 = CONCAT31((int3)((uint)param_1 >> 8),0x73);
  puVar1 = (uint *)(unaff_RBX + 0x5802d1b4);
  uVar2 = *puVar1;
  uVar4 = *puVar1 - uVar5;
  *puVar1 = uVar4 - in_CF;
  unaff_RSI[0x7e] = unaff_RSI[0x7e] + (char)((uint)param_1 >> 8) + (uVar2 < uVar5 || uVar4 < in_CF);
  *unaff_RSI = *unaff_RSI >> 5 | *unaff_RSI << 3;
  bVar3 = *unaff_RSI;
  *unaff_RBP = 0x49;
  return CONCAT31(0x2c092,*(undefined1 *)
                           ((ulonglong)
                            ((int)unaff_RBX + _DAT_12227165d + (uint)((char)bVar3 < '\0')) + 0x46));
}



// FUNCTION 14d7a489b FUN_14d7a489b body=2 status=ok
// SIG undefined FUN_14d7a489b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a489b(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a48cc FUN_14d7a48cc body=4 status=ok
// SIG undefined FUN_14d7a48cc(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14d7a48cc(longlong param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  char in_AL;
  ulonglong uVar4;
  longlong lVar5;
  byte bVar6;
  int unaff_EBX;
  undefined8 *unaff_RBP;
  byte *unaff_RSI;
  float10 in_ST0;
  
  lVar5 = param_1 + -1;
  if (lVar5 != 0 && in_AL != -0x29) {
    *(char *)(param_1 + -0x4b74e68e) =
         *(char *)(param_1 + -0x4b74e68e) + (char)((ulonglong)param_2 >> 8);
    uVar2 = *param_2;
    *param_2 = *param_2 << 1 | (uint)((int)uVar2 < 0);
    unaff_RSI[0x7e] = unaff_RSI[0x7e] + (char)((ulonglong)lVar5 >> 8) + ((int)uVar2 < 0);
    *unaff_RSI = *unaff_RSI >> 5 | *unaff_RSI << 3;
    bVar1 = *unaff_RSI;
    *unaff_RBP = 0x49;
    return (ulonglong)
           CONCAT31(0x2c092,*(undefined1 *)
                             ((ulonglong)(unaff_EBX + _DAT_12227165d + (uint)((char)bVar1 < '\0')) +
                             0x46));
  }
  bVar1 = *unaff_RSI;
  bVar6 = (byte)((uint)unaff_EBX >> 8);
  *unaff_RSI = *unaff_RSI + bVar6;
  if (!CARRY1(bVar1,bVar6)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar3 = (code *)swi(0x87);
  uVar4 = (*pcVar3)();
  *(float *)(lVar5 + -0x408bf9ed) = (float)in_ST0;
  return uVar4;
}



// FUNCTION 14d7a48da FUN_14d7a48da body=4 status=ok
// SIG undefined FUN_14d7a48da(void)

void FUN_14d7a48da(uint param_1)

{
  uint *in_RAX;
  
  *in_RAX = *in_RAX & param_1;
  return;
}



// FUNCTION 14d7a48e2 FUN_14d7a48e2 body=6 status=ok
// SIG undefined FUN_14d7a48e2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a48e2(void)

{
  undefined4 uVar1;
  
  uVar1 = in(99);
  uRamf208008c12b27cd5 = (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a48ea FUN_14d7a48ea body=45 status=ok
// SIG undefined FUN_14d7a48ea(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14d7a48ea(undefined8 param_1)

{
  byte bVar1;
  int unaff_EBX;
  undefined8 *unaff_RBP;
  byte *unaff_RSI;
  char in_CF;
  char in_SF;
  char in_OF;
  
  if (in_OF == in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  unaff_RSI[0x7e] = unaff_RSI[0x7e] + (char)((ulonglong)param_1 >> 8) + in_CF;
  *unaff_RSI = *unaff_RSI >> 5 | *unaff_RSI << 3;
  bVar1 = *unaff_RSI;
  *unaff_RBP = 0x49;
  return CONCAT31(0x2c092,*(undefined1 *)
                           ((ulonglong)(unaff_EBX + _DAT_12227165d + (uint)((char)bVar1 < '\0')) +
                           0x46));
}



// FUNCTION 14d7a48ef FUN_14d7a48ef body=15 status=ok
// SIG undefined FUN_14d7a48ef(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a48ef(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a490b FUN_14d7a490b body=2 status=ok
// SIG undefined FUN_14d7a490b(void)

void FUN_14d7a490b(void)

{
  undefined1 in_AL;
  undefined8 unaff_RBX;
  longlong unaff_retaddr;
  
  *(undefined8 *)(unaff_retaddr + -8) = unaff_RBX;
  uRame11a00f1a886bf5b = in_AL;
  return;
}



// FUNCTION 14d7a490f FUN_14d7a490f body=10 status=ok
// SIG undefined FUN_14d7a490f(void)

void FUN_14d7a490f(void)

{
  return;
}



// FUNCTION 14d7a4921 FUN_14d7a4921 body=5 status=ok
// SIG undefined FUN_14d7a4921(void)

/* WARNING: Instruction at (ram,0x00014d7a493d) overlaps instruction at (ram,0x00014d7a4935)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7a4925) */
/* WARNING: Removing unreachable block (ram,0x00014d7a4912) */
/* WARNING: Removing unreachable block (ram,0x00014d7a492c) */
/* WARNING: Removing unreachable block (ram,0x00014d7a48b3) */
/* WARNING: Removing unreachable block (ram,0x00014d7a4933) */
/* WARNING: Removing unreachable block (ram,0x00014d7a499c) */

void FUN_14d7a4921(undefined8 param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  int *unaff_RSI;
  byte in_CF;
  bool in_ZF;
  
  if (!in_ZF) {
    *unaff_RSI = (*unaff_RSI + -0x7a9ae3f4) - (uint)in_CF;
    puVar1 = (uint *)(CONCAT71(unaff_00000019,unaff_BL) + 0x35a8ec55 +
                     CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(0xd8,(char)param_2)) * 4);
    *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4929 FUN_14d7a4929 body=5 status=ok
// SIG undefined FUN_14d7a4929(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4929(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4955 FUN_14d7a4955 body=38 status=ok
// SIG undefined FUN_14d7a4955(void)

/* WARNING: Instruction at (ram,0x00014d7a4975) overlaps instruction at (ram,0x00014d7a4974)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14d7a4955(ulonglong param_1,longlong param_2)

{
  byte *pbVar1;
  uint *puVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  bool bVar6;
  longlong lVar7;
  undefined1 uVar8;
  longlong in_RAX;
  byte bVar9;
  byte bVar10;
  undefined6 uVar12;
  undefined8 unaff_RBX;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined8 *unaff_RBP;
  byte *unaff_RSI;
  byte in_CF;
  bool bVar15;
  longlong *unaff_retaddr;
  byte bVar11;
  
  uVar12 = (undefined6)(param_1 >> 0x10);
  bVar11 = (byte)(param_1 >> 8);
  bVar9 = (byte)param_1;
  pbVar1 = unaff_RSI + 0x71468b32;
  bVar3 = *pbVar1;
  bVar5 = bVar11 + *pbVar1;
  bVar15 = SCARRY1(bVar11,*pbVar1) != SCARRY1(bVar5,in_CF);
  bVar10 = bVar5 + in_CF;
  LOCK();
  *(char *)(CONCAT62(uVar12,CONCAT11(bVar10,bVar9)) + -0x220569bd + in_RAX * 8) = (char)in_RAX;
  UNLOCK();
  uVar8 = in((short)param_2);
  lVar7 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar8);
  cVar4 = (&stack0x00000000)[CONCAT62(uVar12,CONCAT11(bVar10,bVar9)) * 8];
  if (bVar15 != (char)bVar10 < '\0') {
    *unaff_RSI = *unaff_RSI ^ (byte)((ulonglong)unaff_RBX >> 8);
    *(char *)(*unaff_retaddr + 0x11) = *(char *)(*unaff_retaddr + 0x11) + cVar4;
    out(0x6a,(int)lVar7);
    plVar14 = unaff_retaddr + 2;
    while( true ) {
      bVar10 = bVar10 ^ *(byte *)(CONCAT62(uVar12,CONCAT11(bVar10,bVar9)) + 0x6e);
      if (CONCAT62(uVar12,CONCAT11(bVar10,bVar9)) == 0) break;
      LOCK();
      bVar3 = *(byte *)((longlong)plVar14 + -0x31e7dd66);
      *(byte *)((longlong)plVar14 + -0x31e7dd66) = (byte)((ulonglong)param_2 >> 8);
      param_2 = (ulonglong)bVar3 << 8;
      UNLOCK();
      puVar2 = (uint *)(lVar7 + -0x591efddd);
      *puVar2 = *puVar2 | (uint)*plVar14;
      bVar15 = (POPCOUNT(*puVar2 & 0xff) & 1U) == 0;
      do {
        puVar2 = (uint *)(CONCAT62(uVar12,CONCAT11(bVar10,bVar9)) + 0x45c39ed3);
        *puVar2 = *puVar2 << (bVar9 & 0x1f);
        bVar6 = (param_1 & 0x1f) != 0;
        bVar3 = !bVar6 & bVar15;
        bVar15 = true;
      } while ((bool)(bVar3 | (bVar6 && (POPCOUNT(*puVar2 & 0xff) & 1U) == 0)));
      puVar13 = plVar14 + 1;
      plVar14 = plVar14 + 1;
      *puVar13 = 0x5b;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar15 == (char)bVar10 < '\0') {
    unaff_retaddr[-1] = (longlong)unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  unaff_RSI[0x7e] = unaff_RSI[0x7e] + bVar10 + (CARRY1(bVar11,bVar3) || CARRY1(bVar5,in_CF));
  *unaff_RSI = *unaff_RSI >> 5 | *unaff_RSI << 3;
  bVar3 = *unaff_RSI;
  *unaff_RBP = 0x49;
  return CONCAT31(0x2c092,*(undefined1 *)
                           ((ulonglong)
                            ((int)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar4) + _DAT_12227165d
                            + (uint)((char)bVar3 < '\0')) + 0x46));
}



// FUNCTION 14d7a497f FUN_14d7a497f body=12 status=ok
// SIG undefined FUN_14d7a497f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a497f(ulonglong param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined1 uVar2;
  bool bVar3;
  byte bVar4;
  undefined2 in_AX;
  undefined6 in_register_00000002;
  byte bVar5;
  byte bVar6;
  undefined6 uVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  undefined8 unaff_RDI;
  bool bVar10;
  
  uVar7 = (undefined6)(param_1 >> 0x10);
  bVar5 = (byte)param_1;
  uVar8 = (char)((ulonglong)param_2 >> 8);
  puVar9 = (undefined8 *)register0x00000020;
  for (bVar6 = 0x33; CONCAT62(uVar7,CONCAT11(bVar6,bVar5)) != 0;
      bVar6 = bVar6 ^ *(byte *)(CONCAT62(uVar7,CONCAT11(bVar6,bVar5)) + 0x6e)) {
    LOCK();
    uVar2 = *(undefined1 *)((longlong)puVar9 + -0x31e7dd6e);
    *(undefined1 *)((longlong)puVar9 + -0x31e7dd6e) = uVar8;
    UNLOCK();
    puVar1 = (uint *)(CONCAT62(in_register_00000002,in_AX) + -0x591efddd);
    *puVar1 = *puVar1 | (uint)unaff_RDI;
    bVar10 = (POPCOUNT(*puVar1 & 0xff) & 1U) == 0;
    do {
      puVar1 = (uint *)(CONCAT62(uVar7,CONCAT11(bVar6,bVar5)) + 0x45c39ed3);
      *puVar1 = *puVar1 << (bVar5 & 0x1f);
      bVar3 = (param_1 & 0x1f) != 0;
      bVar4 = !bVar3 & bVar10;
      bVar10 = true;
    } while ((bool)(bVar4 | (bVar3 && (POPCOUNT(*puVar1 & 0xff) & 1U) == 0)));
    *puVar9 = 0x5b;
    unaff_RDI = *puVar9;
    uVar8 = uVar2;
    puVar9 = puVar9 + 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a498f FUN_14d7a498f body=2 status=ok
// SIG undefined FUN_14d7a498f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a498f(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4997 FUN_14d7a4997 body=24 status=ok
// SIG undefined FUN_14d7a4997(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4997(longlong param_1,longlong param_2)

{
  uint *puVar1;
  undefined1 uVar2;
  bool bVar3;
  byte bVar4;
  undefined2 in_AX;
  undefined6 in_register_00000002;
  ulonglong uVar5;
  undefined1 uVar6;
  longlong unaff_RBX;
  undefined8 *puVar7;
  int *unaff_RSI;
  byte in_CF;
  byte in_PF;
  char in_ZF;
  
  uVar5 = param_1 - 1;
  uVar6 = (char)((ulonglong)param_2 >> 8);
  puVar7 = (undefined8 *)register0x00000020;
  if (uVar5 == 0 || in_ZF == '\0') {
    while( true ) {
      do {
        puVar1 = (uint *)(uVar5 + 0x45c39ed3);
        *puVar1 = *puVar1 << ((byte)uVar5 & 0x1f);
        bVar3 = (uVar5 & 0x1f) != 0;
        bVar4 = !bVar3 & in_PF;
        in_PF = 1;
      } while ((bool)(bVar4 | (bVar3 && (POPCOUNT(*puVar1 & 0xff) & 1U) == 0)));
      *puVar7 = 0x5b;
      uVar5 = CONCAT62((int6)(uVar5 >> 0x10),
                       CONCAT11((byte)(uVar5 >> 8) ^ *(byte *)(uVar5 + 0x6e),(byte)uVar5));
      if (uVar5 == 0) break;
      LOCK();
      uVar2 = *(undefined1 *)((longlong)puVar7 + -0x31e7dd66);
      *(undefined1 *)((longlong)puVar7 + -0x31e7dd66) = uVar6;
      UNLOCK();
      puVar1 = (uint *)(CONCAT62(in_register_00000002,in_AX) + -0x591efddd);
      *puVar1 = *puVar1 | (uint)*puVar7;
      in_PF = (POPCOUNT(*puVar1 & 0xff) & 1U) == 0;
      uVar6 = uVar2;
      puVar7 = puVar7 + 1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RSI = (*unaff_RSI + -0x7a9ae3f4) - (uint)in_CF;
  puVar1 = (uint *)(unaff_RBX + 0x35a8ec55 + param_2 * 4);
  *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a499b FUN_14d7a499b body=12 status=ok
// SIG undefined FUN_14d7a499b(void)

/* WARNING: Instruction at (ram,0x00014d7a499f) overlaps instruction at (ram,0x00014d7a499b)
    */
/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a499b(ulonglong param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  uint5 uVar5;
  undefined2 in_AX;
  undefined6 in_register_00000002;
  byte bVar6;
  byte bVar7;
  undefined6 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined8 *puVar11;
  longlong unaff_RSI;
  byte in_CF;
  bool bVar12;
  byte in_PF;
  
  uVar10 = (undefined1)((ulonglong)param_2 >> 8);
  uVar8 = (undefined6)(param_1 >> 0x10);
  bVar7 = (byte)(param_1 >> 8);
  bVar6 = (byte)param_1;
  do {
    uVar5 = CONCAT14(in_CF,*(undefined4 *)(unaff_RSI + 0x7d945c3));
    uVar4 = (ulonglong)(uVar5 >> (bVar6 & 0x1f)) | (ulonglong)uVar5 << 0x21 - (bVar6 & 0x1f);
    *(undefined4 *)(unaff_RSI + 0x7d945c3) = (int)uVar4;
    bVar12 = (uVar4 & 0x100000000) != 0;
    uVar9 = uVar10;
    puVar11 = (undefined8 *)register0x00000020;
    if (!(bool)in_PF) {
      puVar11 = (undefined8 *)((longlong)register0x00000020 + 8);
      *(undefined8 *)register0x00000020 = 0x5b;
      bVar7 = bVar7 ^ *(byte *)(CONCAT62(uVar8,CONCAT11(bVar7,bVar6)) + 0x6e);
      if (CONCAT62(uVar8,CONCAT11(bVar7,bVar6)) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      LOCK();
      uVar9 = *(undefined1 *)((longlong)register0x00000020 + -0x31e7dd66);
      *(undefined1 *)((longlong)register0x00000020 + -0x31e7dd66) = uVar10;
      UNLOCK();
      puVar1 = (uint *)(CONCAT62(in_register_00000002,in_AX) + -0x591efddd);
      bVar12 = false;
      *puVar1 = *puVar1 | (uint)*(undefined8 *)register0x00000020;
      in_PF = (POPCOUNT(*puVar1 & 0xff) & 1U) == 0;
    }
    puVar1 = (uint *)(CONCAT62(uVar8,CONCAT11(bVar7,bVar6)) + 0x45c39ed3);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 << (bVar6 & 0x1f);
    bVar3 = (param_1 & 0x1f) != 0;
    in_CF = !bVar3 & bVar12 | (bVar3 && (int)(uVar2 << (bVar6 & 0x1f) - 1) < 0);
    bVar12 = (param_1 & 0x1f) != 0;
    in_PF = !bVar12 & in_PF | (bVar12 && (POPCOUNT(*puVar1 & 0xff) & 1U) == 0);
    uVar10 = uVar9;
    register0x00000020 = (BADSPACEBASE *)puVar11;
  } while( true );
}



// FUNCTION 14d7a49ab FUN_14d7a49ab body=3 status=ok
// SIG undefined FUN_14d7a49ab(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a49ab(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a49af FUN_14d7a49af body=12 status=ok
// SIG undefined FUN_14d7a49af(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a49af(char *param_1)

{
  char unaff_BH;
  
  in(0x81);
  *param_1 = *param_1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a49bc FUN_14d7a49bc body=12 status=ok
// SIG undefined FUN_14d7a49bc(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a49bc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a49e9 FUN_14d7a49e9 body=3 status=ok
// SIG undefined FUN_14d7a49e9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a49e9(longlong param_1,undefined8 param_2)

{
  char cVar1;
  byte in_AL;
  int *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  *(char *)(unaff_RDI + param_1) = *(char *)(unaff_RDI + param_1) << 1;
  cVar1 = *(char *)(unaff_RBP + -100);
  *unaff_RBX = *unaff_RBX - (int)param_1;
  *(char *)((longlong)unaff_RBX + 0x30e0471e) = *(char *)((longlong)unaff_RBX + 0x30e0471e) + in_AL;
  out(CONCAT11((char)((ulonglong)param_2 >> 8) + cVar1,(char)param_2),in_AL ^ 0xb9);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a49ed FUN_14d7a49ed body=4 status=ok
// SIG undefined FUN_14d7a49ed(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a49ed(ulonglong param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined1 uVar2;
  bool bVar3;
  byte bVar4;
  byte in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  byte bVar5;
  byte bVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  int *unaff_RBX;
  undefined8 *puVar10;
  undefined8 unaff_RDI;
  bool bVar11;
  bool in_ZF;
  
  uVar8 = (undefined4)(param_1 >> 0x20);
  uVar7 = (undefined2)(param_1 >> 0x10);
  bVar6 = (byte)(param_1 >> 8);
  bVar5 = (byte)param_1;
  uVar9 = (char)((ulonglong)param_2 >> 8);
  puVar10 = (undefined8 *)register0x00000020;
  if (!in_ZF) {
    do {
      LOCK();
      uVar2 = *(undefined1 *)((longlong)puVar10 + -0x31e7dd6e);
      *(undefined1 *)((longlong)puVar10 + -0x31e7dd6e) = uVar9;
      UNLOCK();
      puVar1 = (uint *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x591efddd);
      *puVar1 = *puVar1 | (uint)unaff_RDI;
      bVar11 = (POPCOUNT(*puVar1 & 0xff) & 1U) == 0;
      do {
        puVar1 = (uint *)(CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(bVar6,bVar5))) + 0x45c39ed3);
        *puVar1 = *puVar1 << (bVar5 & 0x1f);
        bVar3 = (param_1 & 0x1f) != 0;
        bVar4 = !bVar3 & bVar11;
        bVar11 = true;
      } while ((bool)(bVar4 | (bVar3 && (POPCOUNT(*puVar1 & 0xff) & 1U) == 0)));
      *puVar10 = 0x5b;
      unaff_RDI = *puVar10;
      bVar6 = bVar6 ^ *(byte *)(CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(bVar6,bVar5))) + 0x6e);
      uVar9 = uVar2;
      puVar10 = puVar10 + 1;
    } while (CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(bVar6,bVar5))) != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RBX = *unaff_RBX - (int)param_1;
  *(char *)((longlong)unaff_RBX + 0x30e0471e) = *(char *)((longlong)unaff_RBX + 0x30e0471e) + in_AL;
  out((short)param_2,in_AL ^ 0xb9);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a49f2 FUN_14d7a49f2 body=3 status=ok
// SIG undefined FUN_14d7a49f2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a49f2(longlong param_1,undefined2 param_2)

{
  byte in_AL;
  int *unaff_RSI;
  byte in_CF;
  
  *unaff_RSI = (*unaff_RSI + -0x47) - (uint)in_CF;
  if (param_1 == 1 || *unaff_RSI == 0) {
    out(param_2,in_AL ^ 0xb9);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a49f6 FUN_14d7a49f6 body=10 status=ok
// SIG undefined FUN_14d7a49f6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a49f6(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  undefined1 in_AL;
  longlong unaff_RDI;
  
  pbVar1 = (byte *)(param_1 + unaff_RDI * 4);
  *pbVar1 = *pbVar1 ^ (byte)((ulonglong)param_2 >> 8);
  out((short)param_2,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4a06 FUN_14d7a4a06 body=7 status=ok
// SIG undefined FUN_14d7a4a06(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4a06(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4a12 FUN_14d7a4a12 body=17 status=ok
// SIG undefined FUN_14d7a4a12(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4a12(longlong param_1)

{
  longlong in_RAX;
  char unaff_BH;
  longlong unaff_RDI;
  
  *(char *)(in_RAX + 0x60) = *(char *)(in_RAX + 0x60) - unaff_BH;
  if (param_1 != 0) {
    *(char *)(unaff_RDI + -0x3663993b) =
         *(char *)(unaff_RDI + -0x3663993b) - (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4a23 FUN_14d7a4a23 body=9 status=ok
// SIG undefined FUN_14d7a4a23(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4a23(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4a33 FUN_14d7a4a33 body=2 status=ok
// SIG undefined FUN_14d7a4a33(void)

void FUN_14d7a4a33(void)

{
  char cVar1;
  code *pcVar2;
  undefined4 in_EAX;
  undefined8 *puVar3;
  undefined8 *unaff_RBP;
  undefined8 uStack_10;
  
  puVar3 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x1e';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar3 = puVar3 + -1;
    *puVar3 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  pcVar2 = (code *)swi(1);
  uRam6a4e893f72330013 = in_EAX;
  (*pcVar2)();
  return;
}



// FUNCTION 14d7a4a38 FUN_14d7a4a38 body=10 status=ok
// SIG undefined FUN_14d7a4a38(void)

void FUN_14d7a4a38(undefined4 param_1,longlong param_2)

{
  char cVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RBP;
  uint unaff_ESI;
  undefined8 uStack_10;
  
  *(undefined4 *)((ulonglong)(unaff_ESI ^ *(uint *)(param_2 + 0x3f)) + 0x6a) = param_1;
  puVar3 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x1e';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar3 = puVar3 + -1;
    *puVar3 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  pcVar2 = (code *)swi(1);
  (*pcVar2)();
  return;
}



// FUNCTION 14d7a4a44 FUN_14d7a4a44 body=38 status=ok
// SIG undefined FUN_14d7a4a44(void)

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_14d7a4a44(undefined4 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 unaff_EBX;
  undefined4 *unaff_RSI;
  undefined1 *unaff_RDI;
  bool in_CF;
  
  if (!in_CF) {
    unaff_RDI[-0x5c] = unaff_RDI[-0x5c] + (char)((uint)param_1 >> 8);
    uVar3 = *unaff_RSI;
    unaff_RDI[0x6050e88f] = unaff_RDI[0x6050e88f] + (char)param_1;
    uVar2 = *(uint *)(unaff_RDI + 0x12740c9a);
    *(uint *)(unaff_RDI + 0x12740c9a) =
         (uint)(CONCAT14((byte)uVar3 < 0x70,uVar2) >> 0x16) | uVar2 << 0xb;
    uVar3 = in(param_2);
    return uVar3;
  }
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  *unaff_RSI = unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4a6a FUN_14d7a4a6a body=7 status=ok
// SIG undefined FUN_14d7a4a6a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4a6a(void)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4a72 FUN_14d7a4a72 body=8 status=ok
// SIG undefined FUN_14d7a4a72(void)

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_14d7a4a72(longlong param_1,undefined2 param_2)

{
  undefined4 uVar1;
  char in_ZF;
  
  if (param_1 == 1 || in_ZF != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = in(param_2);
  return uVar1;
}



// FUNCTION 14d7a4a8f FUN_14d7a4a8f body=4 status=ok
// SIG undefined FUN_14d7a4a8f(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a4a8f(undefined4 param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  char cVar3;
  code *pcVar4;
  longlong unaff_RBX;
  undefined8 *puVar5;
  undefined8 *unaff_RBP;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_ZF;
  
  if (in_ZF) {
    uVar2 = in(param_2);
    *unaff_RDI = uVar2;
    _DAT_123504643 = _DAT_123504643 & (uint)&stack0x00000000;
    pcVar1 = (char *)(unaff_RBX * 9 + 0x36a3ba37);
    *pcVar1 = *pcVar1 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(unaff_RSI + 0x6a) = param_1;
  puVar5 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar3 = '\x1e';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar5 = puVar5 + -1;
    *puVar5 = *unaff_RBP;
    cVar3 = cVar3 + -1;
  } while ('\0' < cVar3);
  pcVar4 = (code *)swi(1);
  (*pcVar4)();
  return;
}



// FUNCTION 14d7a4a93 FUN_14d7a4a93 body=19 status=ok
// SIG undefined FUN_14d7a4a93(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a4a93(char param_1)

{
  char *pcVar1;
  longlong unaff_RBX;
  
  _DAT_123504643 = _DAT_123504643 & (uint)&stack0x00000000;
  pcVar1 = (char *)(unaff_RBX * 9 + 0x36a3ba37);
  *pcVar1 = *pcVar1 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4aa8 FUN_14d7a4aa8 body=3 status=ok
// SIG undefined FUN_14d7a4aa8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4aa8(undefined8 param_1,int param_2)

{
  longlong unaff_RDI;
  byte in_CF;
  
  *(int *)(unaff_RDI + 0x62) = *(int *)(unaff_RDI + 0x62) + param_2 + (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4aac FUN_14d7a4aac body=2 status=ok
// SIG undefined FUN_14d7a4aac(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4aac(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4ab0 FUN_14d7a4ab0 body=11 status=ok
// SIG undefined FUN_14d7a4ab0(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a4ab0(void)

{
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  
  *(undefined4 *)CONCAT44(in_register_00000004,in_EAX) = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4ac5 FUN_14d7a4ac5 body=9 status=ok
// SIG undefined FUN_14d7a4ac5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4ac5(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4ad2 FUN_14d7a4ad2 body=6 status=ok
// SIG undefined FUN_14d7a4ad2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4ad2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4ada FUN_14d7a4ada body=8 status=ok
// SIG undefined FUN_14d7a4ada(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4ada(void)

{
  longlong unaff_RBP;
  
  *(char *)(unaff_RBP + 0x10) = *(char *)(unaff_RBP + 0x10) + -0xe;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4ae3 FUN_14d7a4ae3 body=6 status=ok
// SIG undefined FUN_14d7a4ae3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4ae3(void)

{
  undefined1 in_AL;
  undefined7 in_register_00000001;
  int unaff_ESP;
  byte in_CF;
  bool in_ZF;
  
  if (in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)CONCAT71(in_register_00000001,in_AL) =
       (*(int *)CONCAT71(in_register_00000001,in_AL) - unaff_ESP) - (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4aeb FUN_14d7a4aeb body=6 status=ok
// SIG undefined FUN_14d7a4aeb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4aeb(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RBX;
  
  *(byte *)(unaff_RBX + 0x65a53be3) =
       *(byte *)(unaff_RBX + 0x65a53be3) | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4af7 FUN_14d7a4af7 body=12 status=ok
// SIG undefined FUN_14d7a4af7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4af7(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4b07 FUN_14d7a4b07 body=8 status=ok
// SIG undefined FUN_14d7a4b07(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4b07(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4b13 FUN_14d7a4b13 body=2 status=ok
// SIG undefined FUN_14d7a4b13(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4b13(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4b24 FUN_14d7a4b24 body=7 status=ok
// SIG undefined FUN_14d7a4b24(void)

void FUN_14d7a4b24(void)

{
  return;
}



// FUNCTION 14d7a4b2d FUN_14d7a4b2d body=3 status=ok
// SIG undefined FUN_14d7a4b2d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4b2d(byte param_1,undefined4 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong in_RAX;
  undefined8 unaff_RBX;
  longlong in_R10;
  char unaff_R15B;
  
  *param_3 = unaff_RBX;
  piVar1 = (int *)(in_RAX * 5 + -0x175889ce);
  *piVar1 = *piVar1 - CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 >> (param_1 & 0x1f));
  *(char *)(in_R10 + 0x3ee0abcb) = *(char *)(in_R10 + 0x3ee0abcb) + unaff_R15B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4b31 FUN_14d7a4b31 body=1 status=ok
// SIG undefined FUN_14d7a4b31(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4b31(undefined8 param_1,int param_2)

{
  int *piVar1;
  longlong in_RAX;
  longlong in_R10;
  char unaff_R15B;
  
  piVar1 = (int *)(in_RAX * 5 + -0x175889ce);
  *piVar1 = *piVar1 - param_2;
  *(char *)(in_R10 + 0x3ee0abcb) = *(char *)(in_R10 + 0x3ee0abcb) + unaff_R15B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4b35 FUN_14d7a4b35 body=8 status=ok
// SIG undefined FUN_14d7a4b35(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4b35(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined6 uVar4;
  char unaff_BH;
  longlong unaff_RSI;
  
  uVar4 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar2 = (undefined1)param_2;
  bVar3 = (byte)((ulonglong)param_2 >> 8) ^ *(byte *)(unaff_RSI + -0x59);
  func_0x000195101e0f();
  pcVar1 = (char *)(CONCAT62(uVar4,CONCAT11(bVar3,uVar2)) + 0x3ee0abcb);
  *pcVar1 = *pcVar1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4b3e FUN_14d7a4b3e body=5 status=ok
// SIG undefined FUN_14d7a4b3e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4b3e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4b47 FUN_14d7a4b47 body=48 status=ok
// SIG undefined FUN_14d7a4b47(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4b47(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  int *piVar2;
  undefined4 in_EAX;
  undefined1 uVar3;
  byte bVar4;
  undefined6 uVar5;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  byte in_R10B;
  bool in_ZF;
  ulonglong unaff_retaddr;
  
  uVar5 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar3 = (undefined1)param_2;
  if (!in_ZF) {
    piVar2 = (int *)((ulonglong)(uint)((int)unaff_RSI + *(int *)(unaff_RSI + -0x3e72b824)) + 1);
    *piVar2 = *piVar2 << 1;
    *(int *)(unaff_RBP + 2) = *(int *)(unaff_RBP + 2) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(0x48,in_EAX);
  in((short)param_2);
  in((short)param_2);
  if ((unaff_retaddr & 1) != 0) {
    DAT_3ee9ea7f = DAT_3ee9ea7f & in_R10B;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar4 = (byte)((ulonglong)param_2 >> 8) ^ *(byte *)(unaff_RSI + -0x59);
  func_0x000195101e0f();
  pcVar1 = (char *)(CONCAT62(uVar5,CONCAT11(bVar4,uVar3)) + 0x3ee0abcb);
  *pcVar1 = *pcVar1 + (char)((ulonglong)unaff_RBX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4b5f FUN_14d7a4b5f body=4 status=ok
// SIG undefined FUN_14d7a4b5f(void)

void FUN_14d7a4b5f(void)

{
  longlong unaff_RDI;
  undefined2 in_CS;
  
  *(undefined2 *)(unaff_RDI + 0xf) = in_CS;
  return;
}



// FUNCTION 14d7a4b6b FUN_14d7a4b6b body=7 status=ok
// SIG undefined FUN_14d7a4b6b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4b6b(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  uint in_EAX;
  undefined4 *unaff_RDI;
  bool in_CF;
  
  if (!in_CF) {
    uVar1 = in(param_2);
    *unaff_RDI = uVar1;
    out(0x34,in_EAX ^ 0xd);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4b7c FUN_14d7a4b7c body=3 status=ok
// SIG undefined FUN_14d7a4b7c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4b7c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4b8d FUN_14d7a4b8d body=14 status=ok
// SIG undefined FUN_14d7a4b8d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a4b8e) overlaps instruction at (ram,0x00014d7a4b8d)
    */

void FUN_14d7a4b8d(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4bbf FUN_14d7a4bbf body=10 status=ok
// SIG undefined FUN_14d7a4bbf(void)

int FUN_14d7a4bbf(void)

{
  int in_EAX;
  
  return in_EAX + 0x695ae36c;
}



// FUNCTION 14d7a4bd0 FUN_14d7a4bd0 body=8 status=ok
// SIG undefined FUN_14d7a4bd0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4bd0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4bd8 FUN_14d7a4bd8 body=7 status=ok
// SIG undefined FUN_14d7a4bd8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4bd8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4be1 FUN_14d7a4be1 body=8 status=ok
// SIG undefined FUN_14d7a4be1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4be1(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  char *pcVar3;
  byte in_AL;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  byte in_CF;
  
  piVar1 = (int *)(CONCAT71(unaff_00000019,unaff_BL) + 0x2a0c6611);
  *piVar1 = (*piVar1 - CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) - (uint)in_CF;
  DAT_58a46b0e1a6ab396 = in_AL | 0x79;
  *(uint *)(param_1 + 0x19) = *(uint *)(param_1 + 0x19) | 0xe08c0015;
  pcVar3 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) | 0x79);
  *pcVar3 = *pcVar3 + DAT_58a46b0e1a6ab396;
  out(0xd5,DAT_58a46b0e1a6ab396);
  puVar2 = (uint *)((((ulonglong)&stack0x00000000 & 0xffffffff) - 0x1d683aa3) + unaff_RBP * 4);
  *puVar2 = *puVar2 ^ 0x31;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4be9 FUN_14d7a4be9 body=25 status=ok
// SIG undefined FUN_14d7a4be9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4be9(longlong param_1)

{
  uint *puVar1;
  char *pcVar2;
  char in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RBP;
  
  *(uint *)(param_1 + 0x19) = *(uint *)(param_1 + 0x19) | 0xe08c0015;
  pcVar2 = (char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  *pcVar2 = *pcVar2 + in_AL;
  out(0xd5,in_AL);
  puVar1 = (uint *)((((ulonglong)&stack0x00000000 & 0xffffffff) - 0x1d683aa3) + unaff_RBP * 4);
  DAT_58a46b0e1a6ab396 = in_AL;
  *puVar1 = *puVar1 ^ 0x31;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4c03 FUN_14d7a4c03 body=3 status=ok
// SIG undefined FUN_14d7a4c03(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4c03(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4c07 FUN_14d7a4c07 body=17 status=ok
// SIG undefined FUN_14d7a4c07(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4c07(longlong param_1)

{
  byte *pbVar1;
  uint in_EAX;
  byte unaff_DIL;
  
  if (param_1 == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar1 = (byte *)((ulonglong)in_EAX - 0x64badac2);
  *pbVar1 = *pbVar1 | unaff_DIL;
  if (param_1 == 2 || *pbVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4c0f FUN_14d7a4c0f body=7 status=ok
// SIG undefined FUN_14d7a4c0f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4c0f(void)

{
  longlong unaff_RBP;
  longlong unaff_RSI;
  float10 in_ST0;
  
  *(int *)(unaff_RSI + -0x6e1272f6 + unaff_RBP * 4) = (int)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4c18 FUN_14d7a4c18 body=4 status=ok
// SIG undefined FUN_14d7a4c18(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4c18(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4c20 FUN_14d7a4c20 body=11 status=ok
// SIG undefined FUN_14d7a4c20(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4c20(undefined8 param_1,char *param_2)

{
  byte in_AL;
  byte bVar1;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte in_CF;
  char in_PF;
  char in_AF;
  char in_ZF;
  char in_SF;
  
  bVar1 = in_SF << 7 | in_ZF << 6 | in_AF << 4 | in_PF << 2 | 2U | in_CF;
  *param_2 = *param_2 + '\x01';
  *(uint *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar1,in_AL))) |
           0xa4) =
       (*(int *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar1,in_AL)))
                | 0xa4) - (CONCAT22(in_register_00000002,CONCAT11(bVar1,in_AL)) | 0xa4)) -
       (uint)((in_AL | 0xa4) < 0xa5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4c4d FUN_14d7a4c4d body=3 status=ok
// SIG undefined FUN_14d7a4c4d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4c4d(void)

{
  undefined4 in_register_00000004;
  undefined4 *unaff_RSI;
  
  LOCK();
  *(undefined4 *)CONCAT44(in_register_00000004,*unaff_RSI) = *unaff_RSI;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4c51 FUN_14d7a4c51 body=5 status=ok
// SIG undefined FUN_14d7a4c51(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4c51(void)

{
  undefined4 in_register_00000004;
  undefined4 *unaff_RSI;
  
  LOCK();
  *(undefined4 *)CONCAT44(in_register_00000004,*unaff_RSI) = *unaff_RSI;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4c63 FUN_14d7a4c63 body=4 status=ok
// SIG undefined FUN_14d7a4c63(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4c63(longlong param_1)

{
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_ZF;
  float10 in_ST0;
  float10 in_ST3;
  
  if (in_ZF) {
    in_ST0 = in_ST3;
  }
  *unaff_RDI = *unaff_RSI;
  *(int *)(param_1 + -0x26) = (int)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4c67 FUN_14d7a4c67 body=3 status=ok
// SIG undefined FUN_14d7a4c67(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4c67(longlong param_1)

{
  float10 in_ST0;
  
  *(int *)(param_1 + -0x26) = (int)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4c80 FUN_14d7a4c80 body=4 status=ok
// SIG undefined FUN_14d7a4c80(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4c80(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4c84 FUN_14d7a4c84 body=1 status=ok
// SIG undefined FUN_14d7a4c84(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4c84(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4c9d FUN_14d7a4c9d body=6 status=ok
// SIG undefined FUN_14d7a4c9d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4c9d(void)

{
  int unaff_EDI;
  undefined4 unaff_0000003c;
  
  *(byte *)CONCAT44(unaff_0000003c,unaff_EDI) =
       *(char *)CONCAT44(unaff_0000003c,unaff_EDI) << 3 |
       (byte)(CONCAT11((longlong)(int)((longlong)unaff_EDI * -0x71) != (longlong)unaff_EDI * -0x71,
                       *(char *)CONCAT44(unaff_0000003c,unaff_EDI)) >> 6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4ca9 FUN_14d7a4ca9 body=11 status=ok
// SIG undefined FUN_14d7a4ca9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4ca9(undefined8 param_1,longlong param_2)

{
  longlong in_RAX;
  float10 in_ST0;
  
  *(char *)(param_2 * 2) = *(char *)(param_2 * 2) + 'c';
  *(longlong *)(in_RAX + -0x32) = (longlong)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4cd2 FUN_14d7a4cd2 body=8 status=ok
// SIG undefined FUN_14d7a4cd2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4cd2(void)

{
  undefined4 in_EAX;
  longlong unaff_RBP;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  
  out(0x8d,in_EAX);
  *(undefined2 *)(unaff_RBP + -0x2e695ac2) = in_FPUControlWord;
  *(undefined2 *)(unaff_RBP + -0x2e695abe) = in_FPUStatusWord;
  *(undefined2 *)(unaff_RBP + -0x2e695aba) = in_FPUTagWord;
  *(undefined8 *)(unaff_RBP + -0x2e695aae) = in_FPUDataPointer;
  *(undefined8 *)(unaff_RBP + -0x2e695ab6) = in_FPUInstructionPointer;
  *(undefined2 *)(unaff_RBP + -0x2e695ab0) = in_FPULastInstructionOpcode;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4cda FUN_14d7a4cda body=11 status=ok
// SIG undefined FUN_14d7a4cda(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4cda(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4cfa FUN_14d7a4cfa body=11 status=ok
// SIG undefined FUN_14d7a4cfa(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4cfa(byte param_1)

{
  byte *pbVar1;
  longlong unaff_RDI;
  
  pbVar1 = (byte *)(unaff_RDI * 2 + -0x36);
  *pbVar1 = *pbVar1 ^ param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4d20 FUN_14d7a4d20 body=18 status=ok
// SIG undefined FUN_14d7a4d20(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4d20(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined1 in_AL;
  int *unaff_RBX;
  undefined4 *unaff_RDI;
  
  out(8,in_AL);
  if (SBORROW4(*unaff_RBX,0x7e)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4d30 FUN_14d7a4d30 body=9 status=ok
// SIG undefined FUN_14d7a4d30(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7a4ccb) */

void FUN_14d7a4d30(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  bool in_PF;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  undefined8 uStack_10;
  
  if (in_PF) {
    *(undefined2 *)(param_1 + -0x4d) = in_FPUControlWord;
    *(undefined2 *)(param_1 + -0x49) = in_FPUStatusWord;
    *(undefined2 *)(param_1 + -0x45) = in_FPUTagWord;
    *(undefined8 *)(param_1 + -0x39) = in_FPUDataPointer;
    *(undefined8 *)(param_1 + -0x41) = in_FPUInstructionPointer;
    *(undefined2 *)(param_1 + -0x3b) = in_FPULastInstructionOpcode;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
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



// FUNCTION 14d7a4d40 FUN_14d7a4d40 body=15 status=ok
// SIG undefined FUN_14d7a4d40(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7a4ccb) */

void FUN_14d7a4d40(longlong param_1)

{
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  
  *(undefined2 *)(param_1 + -0x4d) = in_FPUControlWord;
  *(undefined2 *)(param_1 + -0x49) = in_FPUStatusWord;
  *(undefined2 *)(param_1 + -0x45) = in_FPUTagWord;
  *(undefined8 *)(param_1 + -0x39) = in_FPUDataPointer;
  *(undefined8 *)(param_1 + -0x41) = in_FPUInstructionPointer;
  *(undefined2 *)(param_1 + -0x3b) = in_FPULastInstructionOpcode;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4d50 FUN_14d7a4d50 body=8 status=ok
// SIG undefined FUN_14d7a4d50(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4d50(char *param_1,ushort param_2)

{
  char unaff_BH;
  ushort unaff_DI;
  float10 in_ST0;
  
  *(int *)(param_1 + -0x4d) = (int)in_ST0;
  *param_1 = *param_1 + unaff_BH;
  out(param_2 & unaff_DI,0x14109711);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4d61 FUN_14d7a4d61 body=29 status=ok
// SIG undefined FUN_14d7a4d61(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a4d64) overlaps instruction at (ram,0x00014d7a4d61)
    */

void FUN_14d7a4d61(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  int in_EAX;
  undefined4 uVar3;
  longlong unaff_RDI;
  byte in_CF;
  float10 in_ST0;
  
  *(byte *)(unaff_RDI * 2) = *(byte *)(unaff_RDI * 2) >> 1;
  pcVar1 = (char *)(param_2 + 0x33c87546);
  *pcVar1 = *pcVar1 + (char)(in_EAX + 0x37ef0d9f + (uint)in_CF >> 8);
  cVar2 = *pcVar1;
  *(longlong *)(param_1 + -0x4c29eac8) = (longlong)ROUND(in_ST0);
  uVar3 = in(0x70);
  if (cVar2 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out((short)param_2,uVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4d7f FUN_14d7a4d7f body=2 status=ok
// SIG undefined FUN_14d7a4d7f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4d7f(void)

{
  int *unaff_RBX;
  int unaff_ESP;
  
  *unaff_RBX = *unaff_RBX - unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4d87 FUN_14d7a4d87 body=9 status=ok
// SIG undefined FUN_14d7a4d87(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4d87(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4d9c FUN_14d7a4d9c body=2 status=ok
// SIG undefined FUN_14d7a4d9c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4d9c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4db8 FUN_14d7a4db8 body=4 status=ok
// SIG undefined FUN_14d7a4db8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4db8(undefined4 *param_1,undefined2 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined8 in_RAX;
  undefined2 uVar2;
  char unaff_BL;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined4 *unaff_RDI;
  undefined2 in_GS;
  
  out(*unaff_RSI,param_2);
  *(char *)(unaff_RBP + -0x672f3e4b) = *(char *)(unaff_RBP + -0x672f3e4b) + (char)param_2;
  uVar2 = CONCAT11((char)((ushort)param_2 >> 8),0xba);
  uVar1 = in(uVar2);
  *unaff_RDI = uVar1;
  out(0xdb,(char)in_RAX);
  *(uint *)(unaff_RSI + 1) =
       (*(int *)(unaff_RSI + 1) - (int)param_1) -
       (uint)((byte)unaff_RSI[-0x2805c97] < (byte)(unaff_BL + (char)*param_1));
  if ((char)((byte)((ulonglong)in_RAX >> 8) ^ (byte)param_1) < '\0') {
    *(undefined2 *)(param_3 + 0x16d67c00) = in_GS;
    in(0x81);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  in(uVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4dbd FUN_14d7a4dbd body=46 status=ok
// SIG undefined FUN_14d7a4dbd(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a4dc2) overlaps instruction at (ram,0x00014d7a4dc0)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a4dc2) */

void FUN_14d7a4dbd(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  byte bVar3;
  undefined2 uVar4;
  char unaff_BL;
  ulonglong unaff_RBP;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  undefined4 *unaff_RDI;
  undefined2 in_GS;
  char in_CF;
  
  uVar4 = (undefined2)((ulonglong)param_1 >> 0x10);
  bVar3 = (byte)param_1;
  uVar2 = unaff_RBP & 0xffffffff;
  *(byte *)(uVar2 - 0x4d914db7) = *(byte *)(uVar2 - 0x4d914db7) >> 1 | in_CF << 7;
  DAT_fc16af18 = DAT_fc16af18 | 0xd8;
  uVar1 = in(0xaed8);
  *unaff_RDI = uVar1;
  out(0xdb,(char)uVar2);
  *(uint *)CONCAT44(unaff_00000034,unaff_ESI) =
       (*(int *)CONCAT44(unaff_00000034,unaff_ESI) - CONCAT22(uVar4,CONCAT11(0xc1,bVar3))) -
       (uint)(*(byte *)(CONCAT44(unaff_00000034,unaff_ESI) + -0x2805c98) <
             (byte)(unaff_BL +
                   (char)*(undefined4 *)
                          CONCAT44((int)((ulonglong)param_1 >> 0x20),
                                   CONCAT22(uVar4,CONCAT11(0xc1,bVar3)))));
  if ((char)((byte)(uVar2 >> 8) ^ bVar3) < '\0') {
    *(undefined2 *)(param_3 + 0x16d67c00) = in_GS;
    in(0x81);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  in(0xaed8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4ded FUN_14d7a4ded body=41 status=ok
// SIG undefined FUN_14d7a4ded(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4ded(longlong param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  int unaff_EBX;
  undefined8 *puVar6;
  undefined8 unaff_RBP;
  undefined8 *puVar7;
  undefined8 auStack_10 [2];
  
  iVar4 = *(int *)(param_1 + -0x668aa65);
  LOCK();
  puVar1 = (undefined4 *)(CONCAT71(in_register_00000001,in_AL) + -0x4e321ec1);
  uVar3 = *puVar1;
  *puVar1 = (int)unaff_RBP;
  puVar7 = (undefined8 *)CONCAT44((int)((ulonglong)unaff_RBP >> 0x20),uVar3);
  UNLOCK();
  pcVar2 = (char *)((ulonglong)(uint)(unaff_EBX - iVar4) - 0x4c);
  *pcVar2 = *pcVar2 + (char)((uint)param_2 >> 8);
  puVar6 = auStack_10 + 1;
  cVar5 = '\x15';
  do {
    puVar7 = puVar7 + -1;
    puVar6 = puVar6 + -1;
    *puVar6 = *puVar7;
    cVar5 = cVar5 + -1;
  } while ('\0' < cVar5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4e17 FUN_14d7a4e17 body=19 status=ok
// SIG undefined FUN_14d7a4e17(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4e17(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 in_RAX;
  longlong lVar1;
  undefined4 *unaff_RDI;
  undefined2 in_GS;
  
  lVar1 = 0;
  if (param_1 == 1) {
    for (; lVar1 != 0; lVar1 = lVar1 + -1) {
      *unaff_RDI = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),DAT_6454628200204806);
      unaff_RDI = unaff_RDI + 1;
    }
    *(undefined2 *)(param_3 + 0x16d67c00) = in_GS;
    in(0x81);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4e2c FUN_14d7a4e2c body=5 status=ok
// SIG undefined FUN_14d7a4e2c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4e2c(void)

{
  FUN_1610cc795();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4e39 FUN_14d7a4e39 body=2 status=ok
// SIG undefined FUN_14d7a4e39(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4e39(undefined8 param_1,int param_2)

{
  longlong unaff_RBP;
  char in_SF;
  char in_OF;
  
  if (in_OF == in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(unaff_RBP + 0x7d) = *(int *)(unaff_RBP + 0x7d) - param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4e41 FUN_14d7a4e41 body=3 status=ok
// SIG undefined FUN_14d7a4e41(void)

void FUN_14d7a4e41(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a4e45 FUN_14d7a4e45 body=32 status=ok
// SIG undefined FUN_14d7a4e45(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a4e45(ulonglong param_1,undefined2 param_2)

{
  uint *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  uint *in_RAX;
  undefined1 *unaff_RDI;
  
  *in_RAX = *in_RAX << 0x1f | *in_RAX >> 1;
  DAT_dc5c617179e26508 = SUB81(in_RAX,0);
  out(param_2,(int)in_RAX);
  out(0x40,(char)(param_1 & 0xffffffff));
  puVar1 = (uint *)((param_1 & 0xffffffff) - 0x8912c49);
  _DAT_f430e2bd = unaff_RDI;
  *puVar1 = *puVar1 ^ (uint)unaff_RDI;
  uVar2 = in(param_2);
  *unaff_RDI = uVar2;
  puVar3 = _DAT_f430e2bd;
  _DAT_f430e2bd = (undefined1 *)0x14d7a4e75;
  func_0x00014357d298((ulonglong)in_RAX & 0xffffffff);
  puVar3[0x398cbcb9] = puVar3[0x398cbcb9] + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4e65 FUN_14d7a4e65 body=11 status=ok
// SIG undefined FUN_14d7a4e65(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4e65(undefined8 param_1,undefined2 param_2)

{
  uint *puVar1;
  undefined1 uVar2;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  undefined1 *unaff_RDI;
  longlong unaff_retaddr;
  
  out(0x40,in_AL);
  puVar1 = (uint *)(CONCAT71(in_register_00000001,in_AL) + -0x8912c49);
  *puVar1 = *puVar1 ^ (uint)unaff_RDI;
  uVar2 = in(param_2);
  *unaff_RDI = uVar2;
  func_0x00014357d298();
  *(char *)(unaff_retaddr + 0x398cbcb9) = *(char *)(unaff_retaddr + 0x398cbcb9) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4e71 FUN_14d7a4e71 body=12 status=ok
// SIG undefined FUN_14d7a4e71(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4e71(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4e7e FUN_14d7a4e7e body=11 status=ok
// SIG undefined FUN_14d7a4e7e(void)

void FUN_14d7a4e7e(void)

{
  undefined1 in_AL;
  int *unaff_RSI;
  
  out(0x84,in_AL);
  *unaff_RSI = *unaff_RSI >> 1;
  return;
}



// FUNCTION 14d7a4e8e FUN_14d7a4e8e body=4 status=ok
// SIG undefined FUN_14d7a4e8e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4e8e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4e92 FUN_14d7a4e92 body=2 status=ok
// SIG undefined FUN_14d7a4e92(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4e92(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4e96 FUN_14d7a4e96 body=8 status=ok
// SIG undefined FUN_14d7a4e96(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4e96(void)

{
  bool in_SF;
  
  if (!in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4e9e FUN_14d7a4e9e body=2 status=ok
// SIG undefined FUN_14d7a4e9e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4e9e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4eab FUN_14d7a4eab body=3 status=ok
// SIG undefined FUN_14d7a4eab(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4eab(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined1 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4eb7 FUN_14d7a4eb7 body=2 status=ok
// SIG undefined FUN_14d7a4eb7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4eb7(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4ec7 FUN_14d7a4ec7 body=1 status=ok
// SIG undefined FUN_14d7a4ec7(void)

void FUN_14d7a4ec7(void)

{
  char *pcVar1;
  undefined1 in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RBX;
  undefined8 *unaff_RDI;
  
  pcVar1 = (char *)(unaff_RBX * 8 + 0x4a705d00);
  *pcVar1 = *pcVar1 + '\x01';
  *unaff_RDI = CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  return;
}



// FUNCTION 14d7a4ecc FUN_14d7a4ecc body=13 status=ok
// SIG undefined FUN_14d7a4ecc(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4ecc(void)

{
  undefined8 in_RAX;
  char unaff_BH;
  uint uVar1;
  char *unaff_RSI;
  uint uVar2;
  undefined8 *unaff_RDI;
  longlong unaff_R13;
  bool in_OF;
  undefined1 auStackX_8 [32];
  
  if (!in_OF) {
    *unaff_RDI = in_RAX;
    return;
  }
  uVar1 = (uint)auStackX_8;
  uVar2 = (uint)unaff_RDI;
  if (SCARRY4(uVar2,uVar1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (CARRY4(uVar2,uVar1) || uVar2 + uVar1 == 0) {
    *(undefined1 *)(unaff_R13 + 0x58) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RSI = *unaff_RSI - unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4ef5 FUN_14d7a4ef5 body=1 status=ok
// SIG undefined FUN_14d7a4ef5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4ef5(void)

{
  longlong unaff_RBP;
  byte in_CF;
  
  *(byte *)(unaff_RBP + 0x6dbbf981) = *(byte *)(unaff_RBP + 0x6dbbf981) << 1 | in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4ef9 FUN_14d7a4ef9 body=6 status=ok
// SIG undefined FUN_14d7a4ef9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4ef9(undefined8 param_1,undefined1 param_2)

{
  out(0x53,0x1bc200fe);
  func_0x0001a1ec3620(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4f12 FUN_14d7a4f12 body=7 status=ok
// SIG undefined FUN_14d7a4f12(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4f12(void)

{
  uint *puVar1;
  undefined8 in_RAX;
  char unaff_BH;
  uint unaff_ESP;
  char *unaff_RSI;
  uint unaff_EDI;
  longlong unaff_R13;
  
  puVar1 = (uint *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + 'x') + 0x58);
  *puVar1 = *puVar1 >> 1;
  if (SCARRY4(unaff_EDI,unaff_ESP)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (CARRY4(unaff_EDI,unaff_ESP) || unaff_EDI + unaff_ESP == 0) {
    *(undefined1 *)(unaff_R13 + 0x58) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RSI = *unaff_RSI - unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4f26 FUN_14d7a4f26 body=1 status=ok
// SIG undefined FUN_14d7a4f26(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4f26(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4f33 FUN_14d7a4f33 body=1 status=ok
// SIG undefined FUN_14d7a4f33(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4f33(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4f37 FUN_14d7a4f37 body=9 status=ok
// SIG undefined FUN_14d7a4f37(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4f37(byte param_1,undefined1 param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar4;
  char cVar5;
  undefined8 in_RAX;
  ulonglong uVar6;
  byte bVar7;
  undefined4 unaff_EBX;
  longlong unaff_RBP;
  undefined1 *unaff_RDI;
  longlong unaff_R13;
  byte in_CF;
  char in_PF;
  byte in_AF;
  bool in_ZF;
  char in_SF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  char *pcVar8;
  byte bVar3;
  
  cVar5 = in(0x3c);
  if (!in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar6 = CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                   CONCAT11(in_SF << 7 | in_ZF << 6 | in_AF << 4 | in_PF << 2 | 2 |
                                            in_CF,cVar5)) >> 8),cVar5 - *(char *)(unaff_RBP + 0x4f))
          ^ 0xd1;
  param_1 = param_1 ^ (byte)unaff_EBX;
  LOCK();
  cRamade6e850cf236539 = cVar5;
  *unaff_RDI = param_2;
  UNLOCK();
  pcVar8 = (char *)((ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
                    (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((char)param_1 < '\0') * 0x80 |
                    (ulonglong)(param_1 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
                    (ulonglong)((POPCOUNT(param_1) & 1U) == 0) * 4 |
                    (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
                    (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000);
  pbVar1 = (byte *)(uVar6 + 0x58);
  bVar2 = *pbVar1;
  bVar7 = (char)((ulonglong)in_RAX >> 0x18) >> 7;
  *pbVar1 = *pbVar1 + bVar7;
  bVar3 = *pbVar1;
  pbVar1 = (byte *)(uVar6 - 0x60);
  bVar4 = *pbVar1;
  *pbVar1 = (byte)(CONCAT11(CARRY1(bVar2,bVar7),bVar4) >> 1);
  if ((bVar4 & 1) != 0 || bVar3 == 0) {
    *(undefined1 *)(unaff_R13 + 0x58) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar8 = *pcVar8 - (char)((uint)unaff_EBX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4f54 FUN_14d7a4f54 body=5 status=ok
// SIG undefined FUN_14d7a4f54(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4f54(byte param_1,undefined1 param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  longlong in_RAX;
  byte bVar4;
  byte unaff_BL;
  char unaff_BH;
  undefined1 *unaff_RDI;
  longlong unaff_R13;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  char *pcVar5;
  
  param_1 = param_1 ^ unaff_BL;
  LOCK();
  *unaff_RDI = param_2;
  UNLOCK();
  pcVar5 = (char *)((ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
                    (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((char)param_1 < '\0') * 0x80 |
                    (ulonglong)(param_1 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
                    (ulonglong)((POPCOUNT(param_1) & 1U) == 0) * 4 |
                    (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
                    (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000);
  pbVar1 = (byte *)(in_RAX + 0x58);
  bVar2 = *pbVar1;
  bVar4 = (char)((ulonglong)in_RAX >> 0x18) >> 7;
  *pbVar1 = *pbVar1 + bVar4;
  bVar3 = *(byte *)(in_RAX + -0x60);
  *(byte *)(in_RAX + -0x60) = (byte)(CONCAT11(CARRY1(bVar2,bVar4),bVar3) >> 1);
  if ((bVar3 & 1) != 0 || *pbVar1 == 0) {
    *(undefined1 *)(unaff_R13 + 0x58) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar5 = *pcVar5 - unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4f71 FUN_14d7a4f71 body=21 status=ok
// SIG undefined FUN_14d7a4f71(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4f71(void)

{
  longlong unaff_R13;
  
  *(undefined1 *)(unaff_R13 + 0x58) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4f8e FUN_14d7a4f8e body=10 status=ok
// SIG undefined FUN_14d7a4f8e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4f8e(void)

{
  uint *puVar1;
  longlong unaff_RBX;
  longlong unaff_RSI;
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
  
  *(undefined2 *)(unaff_RSI + -0x4697ca9f) = in_FPUControlWord;
  *(undefined2 *)(unaff_RSI + -0x4697ca9b) = in_FPUStatusWord;
  *(undefined2 *)(unaff_RSI + -0x4697ca97) = in_FPUTagWord;
  *(undefined8 *)(unaff_RSI + -0x4697ca8b) = in_FPUDataPointer;
  *(undefined8 *)(unaff_RSI + -0x4697ca93) = in_FPUInstructionPointer;
  *(undefined2 *)(unaff_RSI + -0x4697ca8d) = in_FPULastInstructionOpcode;
  *(unkbyte10 *)(unaff_RSI + -0x4697ca83) = in_ST0;
  *(unkbyte10 *)(unaff_RSI + -0x4697ca79) = in_ST1;
  *(unkbyte10 *)(unaff_RSI + -0x4697ca6f) = in_ST2;
  *(unkbyte10 *)(unaff_RSI + -0x4697ca65) = in_ST3;
  *(unkbyte10 *)(unaff_RSI + -0x4697ca5b) = in_ST4;
  *(unkbyte10 *)(unaff_RSI + -0x4697ca51) = in_ST5;
  *(unkbyte10 *)(unaff_RSI + -0x4697ca47) = in_ST6;
  *(unkbyte10 *)(unaff_RSI + -0x4697ca3d) = in_ST7;
  puVar1 = (uint *)(unaff_RBX + 0x69);
  *puVar1 = *puVar1 >> 5 | *puVar1 << 0x1b;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4fa6 FUN_14d7a4fa6 body=5 status=ok
// SIG undefined FUN_14d7a4fa6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4fa6(void)

{
  char unaff_BH;
  char *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI - unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4fb4 FUN_14d7a4fb4 body=22 status=ok
// SIG undefined FUN_14d7a4fb4(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a4fb4(int param_1)

{
  uint *puVar1;
  byte *pbVar2;
  undefined8 in_RAX;
  longlong unaff_RBP;
  undefined4 *puVar3;
  undefined4 *unaff_RDI;
  char in_SF;
  char in_OF;
  undefined1 auStack_8 [8];
  
  if (in_OF == in_SF) {
    puVar3 = (undefined4 *)(ulonglong)_DAT_366bbafe322ff0be;
    *unaff_RDI = *puVar3;
    pbVar2 = (byte *)((longlong)(puVar3 + 1) * 9 + -0x69);
    *pbVar2 = *pbVar2 >> 7 | *pbVar2 << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar1 = (uint *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),0xe0) + -0x4e6d05ab);
  *puVar1 = *puVar1 ^ (uint)auStack_8;
  *(uint *)(unaff_RBP + -0x6c) = *(uint *)(unaff_RBP + -0x6c) ^ (uint)auStack_8;
  *(int *)((longlong)unaff_RDI + 0x2e) = *(int *)((longlong)unaff_RDI + 0x2e) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4fc1 FUN_14d7a4fc1 body=3 status=ok
// SIG undefined FUN_14d7a4fc1(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a4fc1(void)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined4 *unaff_RDI;
  
  puVar2 = (undefined4 *)(ulonglong)_DAT_366bbafe322ff0be;
  *unaff_RDI = *puVar2;
  pbVar1 = (byte *)((longlong)(puVar2 + 1) * 9 + -0x69);
  *pbVar1 = *pbVar1 >> 7 | *pbVar1 << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4fc5 FUN_14d7a4fc5 body=34 status=ok
// SIG undefined FUN_14d7a4fc5(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a4fc5(void)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined4 *unaff_RDI;
  
  puVar2 = (undefined4 *)(ulonglong)_DAT_366bbafe322ff0be;
  *unaff_RDI = *puVar2;
  pbVar1 = (byte *)((longlong)(puVar2 + 1) * 9 + -0x69);
  *pbVar1 = *pbVar1 >> 7 | *pbVar1 << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a4fe9 FUN_14d7a4fe9 body=6 status=ok
// SIG undefined FUN_14d7a4fe9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a4fe9(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5002 FUN_14d7a5002 body=1 status=ok
// SIG undefined FUN_14d7a5002(void)

void FUN_14d7a5002(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7a5023 FUN_14d7a5023 body=7 status=ok
// SIG undefined FUN_14d7a5023(void)

void FUN_14d7a5023(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  undefined2 in_FPUStatusWord;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  *(undefined2 *)(unaff_RSI + 0x7c) = in_FPUStatusWord;
  return;
}



// FUNCTION 14d7a502c FUN_14d7a502c body=6 status=ok
// SIG undefined FUN_14d7a502c(void)

void FUN_14d7a502c(void)

{
  longlong unaff_RSI;
  undefined2 in_FPUStatusWord;
  
  *(undefined2 *)(unaff_RSI + 0x7c) = in_FPUStatusWord;
  return;
}



// FUNCTION 14d7a5045 FUN_14d7a5045 body=9 status=ok
// SIG undefined FUN_14d7a5045(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5045(undefined4 param_1)

{
  longlong unaff_RDI;
  
  *(int *)(unaff_RDI + 0x2e) =
       *(int *)(unaff_RDI + 0x2e) + CONCAT31((int3)((uint)param_1 >> 8),0x31);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5059 FUN_14d7a5059 body=1 status=ok
// SIG undefined FUN_14d7a5059(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5059(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a505d FUN_14d7a505d body=1 status=ok
// SIG undefined FUN_14d7a505d(void)

void FUN_14d7a505d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7a506a FUN_14d7a506a body=5 status=ok
// SIG undefined FUN_14d7a506a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a506a(void)

{
  undefined1 in_AL;
  undefined7 in_register_00000001;
  
  *(undefined1 *)(CONCAT71(in_register_00000001,in_AL) + 0x68) = in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5073 FUN_14d7a5073 body=2 status=ok
// SIG undefined FUN_14d7a5073(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5073(undefined8 param_1,undefined2 param_2)

{
  out(param_2,0x38f00078);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a508d FUN_14d7a508d body=4 status=ok
// SIG undefined FUN_14d7a508d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a508d(longlong param_1)

{
  char *pcVar1;
  longlong unaff_RBP;
  longlong unaff_RDI;
  float10 in_ST0;
  
  pcVar1 = (char *)(unaff_RDI + -0x7c624320 + unaff_RBP * 8);
  *pcVar1 = *pcVar1 + '3';
  if (param_1 != 0) {
    _DAT_4ac2794e = (int)ROUND(in_ST0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_14d7a518e();
  return;
}



// FUNCTION 14d7a5091 FUN_14d7a5091 body=29 status=ok
// SIG undefined FUN_14d7a5091(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a5091(longlong param_1)

{
  char *pcVar1;
  longlong unaff_RBP;
  longlong unaff_RDI;
  float10 in_ST0;
  
  pcVar1 = (char *)(unaff_RDI + -0x7c624320 + unaff_RBP * 8);
  *pcVar1 = *pcVar1 + '3';
  if (param_1 != 0) {
    _DAT_4ac2794e = (int)ROUND(in_ST0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_14d7a518e();
  return;
}



// FUNCTION 14d7a50b1 FUN_14d7a50b1 body=3 status=ok
// SIG undefined FUN_14d7a50b1(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7a50d5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a50b1(longlong param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RDI;
  char in_ZF;
  
  if (param_1 == 1 || in_ZF == '\0') {
    uVar1 = in(param_2);
    *unaff_RDI = uVar1;
    in(99);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a50b5 FUN_14d7a50b5 body=24 status=ok
// SIG undefined FUN_14d7a50b5(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7a50d5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a50b5(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  in(99);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a50cd FUN_14d7a50cd body=1 status=ok
// SIG undefined FUN_14d7a50cd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a50cd(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RDI;
  bool in_OF;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  if (in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  in(99);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a50d2 FUN_14d7a50d2 body=3 status=ok
// SIG undefined FUN_14d7a50d2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a50d2(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint in_EAX;
  longlong unaff_RBX;
  ulonglong *unaff_RBP;
  undefined4 *unaff_RDI;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  bool in_OF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  if (in_OF) {
    uVar2 = *(uint *)(unaff_RBX + 0x49) & in_EAX & *(uint *)((longlong)unaff_RBP + 0x7cc4b779);
    *unaff_RBP = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
                 (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((int)uVar2 < 0) * 0x80 |
                 (ulonglong)(uVar2 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
                 (ulonglong)((POPCOUNT(uVar2 & 0xff) & 1U) == 0) * 4 |
                 (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
                 (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  in(99);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a50d6 FUN_14d7a50d6 body=3 status=ok
// SIG undefined FUN_14d7a50d6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a50d6(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a50da FUN_14d7a50da body=2 status=ok
// SIG undefined FUN_14d7a50da(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a50da(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RSI;
  char in_SF;
  char in_OF;
  
  if (in_OF == in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RSI + -0x6f9fe70f) =
       *(char *)(unaff_RSI + -0x6f9fe70f) + (char)((ulonglong)param_2 >> 8);
  out((short)param_2,0x38f00078);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a50de FUN_14d7a50de body=6 status=ok
// SIG undefined FUN_14d7a50de(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a50de(void)

{
  ulonglong *unaff_RBP;
  byte in_CF;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  
  *unaff_RBP = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_OF & 1) * 0x800 |
               (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
               (ulonglong)(in_SF & 1) * 0x80 | (ulonglong)(in_ZF & 1) * 0x40 |
               (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)(in_PF & 1) * 4 | (ulonglong)(in_CF & 1) |
               (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
               (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a50e6 FUN_14d7a50e6 body=13 status=ok
// SIG undefined FUN_14d7a50e6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a50e6(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a50f6 FUN_14d7a50f6 body=4 status=ok
// SIG undefined FUN_14d7a50f6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a50f6(void)

{
  in(99);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a50fa FUN_14d7a50fa body=1 status=ok
// SIG undefined FUN_14d7a50fa(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a50fa(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a50ff FUN_14d7a50ff body=7 status=ok
// SIG undefined FUN_14d7a50ff(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a50ff(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5107 FUN_14d7a5107 body=3 status=ok
// SIG undefined FUN_14d7a5107(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5107(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5114 FUN_14d7a5114 body=9 status=ok
// SIG undefined FUN_14d7a5114(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5114(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5120 thunk_FUN_14d7a518e body=2 status=ok
// SIG undefined thunk_FUN_14d7a518e(void)

void thunk_FUN_14d7a518e(void)

{
  FUN_14d7a518e();
  return;
}



// FUNCTION 14d7a512c FUN_14d7a512c body=4 status=ok
// SIG undefined FUN_14d7a512c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a512c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5131 FUN_14d7a5131 body=1 status=ok
// SIG undefined FUN_14d7a5131(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5131(undefined8 param_1,undefined2 param_2)

{
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5139 FUN_14d7a5139 body=6 status=ok
// SIG undefined FUN_14d7a5139(void)

/* WARNING: This function may have set the stack pointer */

void FUN_14d7a5139(longlong param_1)

{
  code *pcVar1;
  undefined8 unaff_RBX;
  int unaff_ESI;
  undefined4 unaff_00000034;
  longlong unaff_RDI;
  
  *(char *)(param_1 + -0x19) = *(char *)(param_1 + -0x19) - (char)param_1;
  uRam000000003c74d244 = (ulonglong)(uint)(unaff_ESI * 0x3f);
  *(char *)(unaff_RDI + -0x4913dd63) =
       *(char *)(unaff_RDI + -0x4913dd63) + (char)((ulonglong)unaff_RBX >> 8);
  *(char *)(CONCAT44(unaff_00000034,unaff_ESI) + -0x71) = (char)param_1;
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7a5141 FUN_14d7a5141 body=12 status=ok
// SIG undefined FUN_14d7a5141(void)

/* WARNING: This function may have set the stack pointer */

void FUN_14d7a5141(undefined1 param_1,longlong param_2)

{
  code *pcVar1;
  int unaff_ESI;
  undefined4 unaff_00000034;
  longlong unaff_RDI;
  
  uRam000000003c74d244 = (ulonglong)(uint)(unaff_ESI * 0x3f);
  *(char *)(unaff_RDI + -0x4913dd63) =
       *(char *)(unaff_RDI + -0x4913dd63) + *(char *)(param_2 + 0x5f);
  *(undefined1 *)(CONCAT44(unaff_00000034,unaff_ESI) + -0x71) = param_1;
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7a5152 FUN_14d7a5152 body=5 status=ok
// SIG undefined FUN_14d7a5152(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5152(undefined8 param_1,undefined1 param_2)

{
  undefined4 in_EAX;
  
  out(CONCAT11(0xbb,param_2),in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a515a FUN_14d7a515a body=4 status=ok
// SIG undefined FUN_14d7a515a(void)

void FUN_14d7a515a(byte param_1)

{
  code *pcVar1;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  (&stack0x00000052)[unaff_RDI] = (&stack0x00000052)[unaff_RDI] << (param_1 & 0x1f);
  *(byte *)(unaff_RSI + -0x71) = param_1;
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7a515e FUN_14d7a515e body=4 status=ok
// SIG undefined FUN_14d7a515e(void)

void FUN_14d7a515e(undefined1 param_1)

{
  code *pcVar1;
  longlong unaff_RSI;
  
  *(undefined1 *)(unaff_RSI + -0x71) = param_1;
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7a516e FUN_14d7a516e body=5 status=ok
// SIG undefined FUN_14d7a516e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a516e(void)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  undefined8 uStack_10;
  
  puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x0f';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5182 FUN_14d7a5182 body=7 status=ok
// SIG undefined FUN_14d7a5182(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5182(undefined8 param_1,undefined8 param_2)

{
  undefined6 uVar1;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  undefined8 *unaff_RBP;
  
  uVar1 = (undefined6)((ulonglong)param_2 >> 0x10);
  *(byte *)CONCAT62(uVar1,CONCAT11(0xcc,(char)param_2)) =
       *(byte *)CONCAT62(uVar1,CONCAT11(0xcc,(char)param_2)) ^ unaff_BH;
  *unaff_RBP = CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a518e FUN_14d7a518e body=40 status=ok
// SIG undefined FUN_14d7a518e(void)

/* WARNING: Instruction at (ram,0x00014d7a518f) overlaps instruction at (ram,0x00014d7a518e)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14d7a518e(undefined8 param_1,char *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined2 uVar3;
  undefined8 in_RAX;
  ulonglong uVar4;
  int *unaff_RSI;
  
  *param_2 = *param_2 + (char)((ulonglong)param_1 >> 8);
  if ((*param_2 < '\0') &&
     (iVar1 = *unaff_RSI, *unaff_RSI = -*unaff_RSI, SBORROW4(0,iVar1) == *unaff_RSI < 0)) {
    _DAT_1ba5e81b4 = _DAT_1ba5e81b4 + 0x3dfeb149;
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  uVar3 = in((short)param_2);
  syscall();
  return CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),uVar3) >> 8),(char)uVar3) |
         0x6f5400b9;
}



// FUNCTION 14d7a51a8 FUN_14d7a51a8 body=1 status=ok
// SIG undefined FUN_14d7a51a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14d7a51a8(undefined8 param_1,undefined2 param_2)

{
  int iVar1;
  code *pcVar2;
  undefined2 uVar3;
  undefined8 in_RAX;
  ulonglong uVar4;
  int *unaff_R14;
  
  iVar1 = *unaff_R14;
  *unaff_R14 = -*unaff_R14;
  if (SBORROW4(0,iVar1) != *unaff_R14 < 0) {
    uVar3 = in(param_2);
    syscall();
    return CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),uVar3) >> 8),(char)uVar3) |
           0x6f5400b9;
  }
  _DAT_1ba5e81b4 = _DAT_1ba5e81b4 + 0x3dfeb149;
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return uVar4;
}



// FUNCTION 14d7a51c1 FUN_14d7a51c1 body=10 status=ok
// SIG undefined FUN_14d7a51c1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a51c1(void)

{
  in(0x60);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a51cd FUN_14d7a51cd body=5 status=ok
// SIG undefined FUN_14d7a51cd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a51cd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a51d5 thunk_FUN_1523d718d body=5 status=ok
// SIG undefined thunk_FUN_1523d718d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_1523d718d(longlong param_1,int *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  byte bVar4;
  ulonglong uVar5;
  undefined2 uVar6;
  uint uVar7;
  int iVar8;
  undefined8 in_RAX;
  int iVar9;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  ulonglong uVar10;
  undefined4 *puVar11;
  longlong unaff_retaddr;
  
  iVar9 = (int)param_1;
  uVar6 = SUB82(param_2,0);
  param_2[-0x19a4c9a5] = param_2[-0x19a4c9a5] + iVar9;
  uVar5 = (longlong)*(int *)((longlong)param_2 + 0x4a) * 0x1cb2cda;
  puVar11 = (undefined4 *)(uVar5 & 0xffffffff);
  if ((longlong)(int)(undefined1 *)uVar5 != uVar5) {
    uVar2 = in(uVar6);
    *(undefined1 *)uVar5 = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar4 = *(byte *)(unaff_retaddr + 0x6cc188c7);
  uVar3 = in(uVar6);
  *puVar11 = uVar3;
  if ((char)(bVar4 & (byte)param_2) < '\0') {
    piVar1 = (int *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x7e + param_1 * 4);
    *piVar1 = *piVar1 + (int)unaff_retaddr;
    uVar3 = in(uVar6);
    puVar11[1] = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_15daf9984 = _DAT_15daf9984 + iVar9;
  uVar2 = in(uVar6);
  *(undefined1 *)(puVar11 + 1) = uVar2;
  *(char *)(param_2 + 0x11987dca) = (char)param_2[0x11987dca] + -0x26;
  *(int *)(param_1 + 0x297d274b) = *(int *)(param_1 + 0x297d274b) + iVar9;
  uVar2 = in(uVar6);
  *(undefined1 *)((longlong)puVar11 + 5) = uVar2;
  iVar8 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + '5') + -0x25b58596;
  uVar7 = CONCAT31((int3)((uint)iVar8 >> 8),(char)iVar8 + '5');
  uVar10 = (ulonglong)(uint)(*(int *)((ulonglong)(uint)((int)unaff_retaddr + iVar9) - 0x7e) * 0x21);
  *(undefined8 *)(uVar10 - 8) = 0x7a;
  *param_2 = *param_2 + uVar7;
  *(ulonglong *)(uVar10 - 0x10) = (ulonglong)uVar7;
  *(undefined8 *)(uVar10 - 0x18) = 0x50867f7f;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a51de FUN_14d7a51de body=8 status=ok
// SIG undefined FUN_14d7a51de(void)

/* WARNING: Control flow encountered bad instruction data */

uint FUN_14d7a51de(longlong param_1)

{
  uint uVar1;
  longlong unaff_RBX;
  bool in_CF;
  bool in_ZF;
  float10 in_ST0;
  
  uVar1 = in(0x5c);
  if (in_CF || in_ZF) {
    *(longlong *)(param_1 + 0x1c + unaff_RBX * 2) = (longlong)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  syscall();
  return uVar1 | 0xb9;
}



// FUNCTION 14d7a51e6 thunk_EXT_FUN_e70f690c body=7 status=ok
// SIG undefined thunk_EXT_FUN_e70f690c(void)

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_e70f690c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a51ef FUN_14d7a51ef body=12 status=ok
// SIG undefined FUN_14d7a51ef(void)

int FUN_14d7a51ef(void)

{
  short in_AX;
  
  return (int)in_AX;
}



// FUNCTION 14d7a5208 FUN_14d7a5208 body=8 status=ok
// SIG undefined FUN_14d7a5208(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: This function may have set the stack pointer */

void FUN_14d7a5208(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  uint in_EAX;
  uint uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined8 unaff_RBX;
  longlong unaff_RSI;
  char in_CF;
  bool in_ZF;
  bool bVar5;
  bool in_SF;
  char in_OF;
  
  if (!in_SF) {
    uVar4 = CONCAT31((int3)((uint)param_2 >> 8),
                     ((char)param_2 - *(char *)(unaff_RSI + -0x15efeac)) - in_CF);
    uVar3 = (undefined2)uVar4;
    uVar2 = in(uVar3);
    *(uint *)(ulonglong)uVar2 = uVar2;
    lRam00000000c0d43c34 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),0xff);
    *(undefined4 *)(lRam00000000c0d43c34 + 0x1e5c3d00 + (longlong)(ulonglong)uVar2 * 8) = uVar4;
    in(uVar3);
    bVar5 = (int)lRam00000000c0d43c34 == 0 && *(int *)((ulonglong)in_EAX + 0x13) == 0;
    pcVar1 = (code *)swi(0x11);
    (*pcVar1)();
    if (!bVar5) {
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_ZF || (bool)in_OF != in_SF) {
    *(char *)(unaff_RSI + -0x4a216b0b) = *(char *)(unaff_RSI + -0x4a216b0b) + (char)in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7a520d FUN_14d7a520d body=3 status=ok
// SIG undefined FUN_14d7a520d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a520d(void)

{
  uint in_EAX;
  undefined8 unaff_RBX;
  
  *(undefined8 *)((ulonglong)in_EAX - 8) = unaff_RBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5211 FUN_14d7a5211 body=11 status=ok
// SIG undefined FUN_14d7a5211(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5211(void)

{
  uint in_EAX;
  longlong unaff_RSI;
  
  *(uint *)(unaff_RSI + 0x24) = *(uint *)(unaff_RSI + 0x24) & in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5236 FUN_14d7a5236 body=39 status=ok
// SIG undefined FUN_14d7a5236(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a5236(char param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined8 unaff_RBX;
  longlong lVar2;
  longlong unaff_RDI;
  bool bVar3;
  
  lVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),0xff);
  *(undefined4 *)(lVar2 + 0x1e5c3d00 + (ulonglong)_DAT_24c0d43c3cbca6fe * 8) = param_2;
  in((short)param_2);
  bVar3 = (int)lVar2 == 0 && *(int *)(unaff_RDI + 0x12) == 0;
  pcVar1 = (code *)swi(0x11);
  (*pcVar1)(param_1 + (char)((ulonglong)unaff_RBX >> 8));
  if (!bVar3) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a527f FUN_14d7a527f body=2 status=ok
// SIG undefined FUN_14d7a527f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a527f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x42);
  (*pcVar1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5283 FUN_14d7a5283 body=40 status=ok
// SIG undefined FUN_14d7a5283(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a5283(char param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  iVar3 = unaff_EBX + _DAT_e61de480;
  iVar2 = *(int *)(unaff_RSI + 0x5c12ae77);
  *(uint *)(unaff_RBP + -0x19b742f5) = *(uint *)(unaff_RBP + -0x19b742f5) & 0xffffff92;
  pcVar1 = (char *)((ulonglong)(uint)(iVar3 - iVar2) - 0x28b5a91a);
  *pcVar1 = *pcVar1 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a52ac FUN_14d7a52ac body=38 status=ok
// SIG undefined FUN_14d7a52ac(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a52ac(ulonglong param_1,longlong param_2,ulonglong *param_3)

{
  char *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint in_EAX;
  byte bVar4;
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_ZF;
  char in_SF;
  char in_OF;
  undefined1 auStackX_8 [32];
  
  if (in_ZF || in_OF != in_SF) {
    LOCK();
    *(int *)((longlong)unaff_RDI + -0x42) = (int)unaff_RDI;
    UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar4 = (byte)param_1;
  bVar2 = (param_1 & 0x1f) == 0;
  *unaff_RDI = *unaff_RSI;
  out(*(undefined1 *)(unaff_RSI + 1),(short)param_2);
  puVar3 = (undefined4 *)((longlong)unaff_RSI + 5);
  while (param_1 != 0) {
    param_1 = param_1 - 1;
    out(*puVar3,(short)param_2);
    puVar3 = puVar3 + 1;
  }
  out(2,in_EAX);
  if ((bVar2 & in_ZF) == 0 &&
      (bVar2 || (char)((char)((ulonglong)unaff_RBX >> 8) << (bVar4 & 0x1f)) != '\0')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(param_2 + 0x71fb0117);
  *pcVar1 = *pcVar1 + '1';
  if (-1 < *pcVar1) {
    *(undefined8 *)((ulonglong)((int)auStackX_8 + (in_EAX & 0x45114a83)) - 8) = 0x420e3100;
    *param_3 = *param_3 & unaff_RBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a52c0 FUN_14d7a52c0 body=42 status=ok
// SIG undefined FUN_14d7a52c0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a52c0(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  undefined4 *unaff_RSI;
  byte *unaff_RDI;
  undefined2 in_CS;
  float10 in_ST0;
  
  uVar4 = in(0x4e);
  out(*unaff_RSI,(short)param_2);
  *(char *)(unaff_RSI + -0x17) =
       (*(char *)(unaff_RSI + -0x17) - (char)((ulonglong)unaff_RBX >> 8)) -
       ((byte)uVar4 < *unaff_RDI);
  *(int *)(param_1 + -0x67) = (int)in_ST0;
  uVar5 = (ulonglong)
          (uint)((int)&stack0x00000000 + CONCAT31((int3)((uint)uVar4 >> 8),(byte)uVar4 + 0x90));
  LOCK();
  puVar1 = (undefined4 *)
           (CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(0x62,(char)param_2)) + -0x22);
  uVar4 = *puVar1;
  *puVar1 = (int)param_1;
  UNLOCK();
  pcVar2 = (char *)(CONCAT44((int)((ulonglong)param_1 >> 0x20),uVar4) + 0x535f90e2);
  *pcVar2 = *pcVar2 + (char)uVar4;
  unaff_RDI[1] = *(byte *)(unaff_RSI + 1);
  uVar3 = *(uint *)((longlong)unaff_RSI + 5);
  *(ulonglong *)(uVar5 - 8) = uVar5;
  *(undefined2 *)(uVar5 - 0xc) = in_CS;
  *(undefined4 *)(uVar5 - 0x10) = 0x4d7a52ea;
  (*(code *)((ulonglong)uVar3 - 0xb))(uVar4,(int)uVar3 >> 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a52ef FUN_14d7a52ef body=3 status=ok
// SIG undefined FUN_14d7a52ef(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a52ef(char param_1)

{
  code *pcVar1;
  longlong unaff_RBX;
  longlong unaff_RBP;
  bool in_PF;
  
  if (!in_PF) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(uint *)(unaff_RBP + -0x19b742f5) = *(uint *)(unaff_RBP + -0x19b742f5) & 0xffffff92;
  *(char *)(unaff_RBX + -0x28b5a91a) = *(char *)(unaff_RBX + -0x28b5a91a) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a52f7 FUN_14d7a52f7 body=41 status=ok
// SIG undefined FUN_14d7a52f7(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a53d4) overlaps instruction at (ram,0x00014d7a53d2)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7a5367) */
/* WARNING: Removing unreachable block (ram,0x00014d7a53d4) */
/* WARNING: Removing unreachable block (ram,0x00014d7a536c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a52f7(longlong param_1,ulonglong param_2,ulonglong *param_3)

{
  char *pcVar1;
  int *piVar2;
  byte bVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined8 in_RAX;
  byte bVar6;
  ulonglong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 unaff_R12B;
  undefined1 auStackX_10 [24];
  
  bVar6 = (byte)(param_2 >> 8);
  *(undefined1 *)(unaff_RBP + 0x22ba00a9) = unaff_R12B;
  piVar2 = (int *)(param_1 * 3 + -0x57);
  *piVar2 = *piVar2 + (int)unaff_RSI;
  bVar3 = (byte)param_1 & 0x1f;
  _DAT_13867087b = _DAT_13867087b << bVar3 | _DAT_13867087b >> 0x20 - bVar3;
  cRamffffffffebe4f3a7 = cRamffffffffebe4f3a7 + (byte)param_1;
  uVar5 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),0xd2);
  out(0xa5,uVar5);
  out(*unaff_RSI,(ushort)bVar6 << 8);
  puVar4 = (undefined4 *)(unaff_RSI + 1);
  while (param_1 != 0) {
    param_1 = param_1 + -1;
    out(*puVar4,(ushort)bVar6 << 8);
    puVar4 = puVar4 + 1;
  }
  out(2,uVar5);
  if (cRamffffffffebe4f3a7 == '\0') {
    pcVar1 = (char *)((param_2 & 0xffffffffffffff00) + 0x71fb0117);
    *pcVar1 = *pcVar1 + '1';
    if (*pcVar1 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined8 *)((ulonglong)((int)auStackX_10 + (uVar5 & 0x45114a83)) - 8) = 0x420e3100;
    *param_3 = *param_3 & unaff_RBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a532f FUN_14d7a532f body=8 status=ok
// SIG undefined FUN_14d7a532f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a532f(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  longlong in_RAX;
  
  puVar1 = (uint *)(param_2 + 0x2e + in_RAX * 4);
  *puVar1 = *puVar1 ^ 0x998e1d65;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a533f FUN_14d7a533f body=6 status=ok
// SIG undefined FUN_14d7a533f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a533f(void)

{
  undefined4 in_EAX;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5353 FUN_14d7a5353 body=10 status=ok
// SIG undefined FUN_14d7a5353(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5353(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  longlong unaff_RBP;
  
  pcVar1 = (char *)(param_2 + -0x12077b91 + unaff_RBP * 4);
  *pcVar1 = *pcVar1 << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5363 FUN_14d7a5363 body=4 status=ok
// SIG undefined FUN_14d7a5363(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d7a5363(longlong param_1,longlong param_2,ulonglong *param_3)

{
  char *pcVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined8 in_RAX;
  undefined2 uVar5;
  char unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  ulonglong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined4 unaff_EDI;
  undefined4 unaff_0000003c;
  bool in_CF;
  bool in_ZF;
  bool in_OF;
  undefined1 auStackX_8 [32];
  
  uVar5 = (undefined2)param_2;
  out(*unaff_RSI,uVar5);
  if (in_CF || in_ZF) {
    if (in_OF) {
      return;
    }
    FUN_14d7a53b0();
    return;
  }
  pcVar1 = (char *)(CONCAT44(unaff_0000003c,unaff_EDI) + 1);
  *pcVar1 = *pcVar1 + unaff_BL;
  if (*pcVar1 == '\0') {
    pcVar1 = (char *)(param_2 + -0x12077b91 + unaff_RBP * 4);
    *pcVar1 = *pcVar1 << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar2 = (byte)param_1 & 0x1f;
  _DAT_13867087b = _DAT_13867087b << bVar2 | _DAT_13867087b >> 0x20 - bVar2;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x14641766);
  *pcVar1 = *pcVar1 + (byte)param_1;
  uVar4 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),0xd2);
  out(0xa5,uVar4);
  out(unaff_RSI[1],uVar5);
  puVar3 = (undefined4 *)(unaff_RSI + 2);
  while (param_1 != 0) {
    param_1 = param_1 + -1;
    out(*puVar3,uVar5);
    puVar3 = puVar3 + 1;
  }
  out(2,uVar4);
  if (*pcVar1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(param_2 + 0x71fb0117);
  *pcVar1 = *pcVar1 + '1';
  if (-1 < *pcVar1) {
    *(undefined8 *)((ulonglong)((int)auStackX_8 + (uVar4 & 0x45114a83)) - 8) = 0x420e3100;
    *param_3 = *param_3 & unaff_RBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5367 FUN_14d7a5367 body=12 status=ok
// SIG undefined FUN_14d7a5367(void)

void FUN_14d7a5367(void)

{
  bool in_OF;
  
  if (in_OF) {
    return;
  }
  FUN_14d7a53b0();
  return;
}



// FUNCTION 14d7a5389 FUN_14d7a5389 body=1 status=ok
// SIG undefined FUN_14d7a5389(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5389(void)

{
  undefined1 in_AL;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a538d FUN_14d7a538d body=19 status=ok
// SIG undefined FUN_14d7a538d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a538d(undefined8 param_1,undefined8 param_2,ulonglong *param_3)

{
  int in_EAX;
  ulonglong unaff_RBP;
  bool in_OF;
  
  if (in_OF) {
    *(undefined8 *)((ulonglong)(uint)((int)&stack0x00000000 + in_EAX) - 8) = param_1;
    *param_3 = *param_3 & unaff_RBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a53a1 FUN_14d7a53a1 body=9 status=ok
// SIG undefined FUN_14d7a53a1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a53a1(void)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  undefined8 uStack_10;
  
  puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x1a';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a53b0 FUN_14d7a53b0 body=10 status=ok
// SIG undefined FUN_14d7a53b0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a53b0(longlong param_1)

{
  longlong unaff_RBP;
  int unaff_ESI;
  byte in_CF;
  char in_ZF;
  
  if (param_1 == 1 || in_ZF == '\0') {
    *(int *)(param_1 + -0x75) = (*(int *)(param_1 + -0x75) - unaff_ESI) - (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Could not recover jumptable at 0x00014d7a534c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_RBP + -0x2e6f2570))();
  return;
}



// FUNCTION 14d7a53c2 FUN_14d7a53c2 body=43 status=ok
// SIG undefined FUN_14d7a53c2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a53c2(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte in_AL;
  uint unaff_EBX;
  longlong unaff_RBP;
  byte in_CF;
  
  puVar3 = *(undefined4 **)(unaff_RBP + 8);
  if (!CARRY4(unaff_EBX,(uint)&stack0x00000000) &&
      !CARRY4(unaff_EBX + (uint)&stack0x00000000,(uint)in_CF)) {
    uVar1 = in(param_2);
    *(undefined1 *)puVar3 = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = in(param_2);
  *puVar3 = uVar2;
  *(byte *)(puVar3 + 1) = in_AL & 0x94;
  FUN_14d7a545c();
  return;
}



// FUNCTION 14d7a53d6 FUN_14d7a53d6 body=8 status=ok
// SIG undefined FUN_14d7a53d6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a53d6(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a53de FUN_14d7a53de body=6 status=ok
// SIG undefined FUN_14d7a53de(void)

void FUN_14d7a53de(undefined8 param_1,int *param_2)

{
  code *pcVar1;
  undefined4 in_EAX;
  
  out(0x78,in_EAX);
  pcVar1 = (code *)swi(1);
  (*pcVar1)(param_1,(int)param_2 + *param_2);
  return;
}



// FUNCTION 14d7a53f2 FUN_14d7a53f2 body=10 status=ok
// SIG undefined FUN_14d7a53f2(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a53f2(uint param_1,undefined2 param_2)

{
  byte *pbVar1;
  char cVar2;
  undefined8 in_RAX;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  ulonglong unaff_RSI;
  
  pbVar1 = (byte *)((unaff_RSI & 0xffffffff) - 100);
  *pbVar1 = *pbVar1 ^ (byte)((ulonglong)in_RAX >> 8);
  cVar2 = unaff_BL - (char)((ushort)param_2 >> 8);
  pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar2)) + 0x39);
  *pbVar1 = *pbVar1 & (byte)param_2;
  out(*(undefined1 *)(ulonglong)param_1,param_2);
                    /* WARNING: Read-only address (ram,0x000148904fb6) is written */
  cRam0000000148904fb6 = unaff_BH + -0x40;
  *(undefined8 *)
   ((ulonglong)(uint)(*(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar2)) * -0x31227b5f) - 8)
       = 0x316919ff;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a540e FUN_14d7a540e body=12 status=ok
// SIG undefined FUN_14d7a540e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a540e(byte param_1)

{
  undefined7 unaff_00000019;
  
  in(0xd7);
  *(int *)CONCAT71(unaff_00000019,0xe1) = *(int *)CONCAT71(unaff_00000019,0xe1) << (param_1 & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a541a FUN_14d7a541a body=2 status=ok
// SIG undefined FUN_14d7a541a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a541a(byte param_1)

{
  int *unaff_RBX;
  
  *unaff_RBX = *unaff_RBX << (param_1 & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5443 FUN_14d7a5443 body=11 status=ok
// SIG undefined FUN_14d7a5443(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5443(char *param_1,undefined8 param_2)

{
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  char in_CF;
  
  *unaff_RDI = *unaff_RSI;
  *param_1 = (*param_1 - (char)((ulonglong)param_2 >> 8)) - in_CF;
  if (param_1 == &DAT_00000001) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a5454 FUN_14d7a5454 body=2 status=ok
// SIG undefined FUN_14d7a5454(void)

void FUN_14d7a5454(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d7a545c FUN_14d7a545c body=8 status=ok
// SIG undefined FUN_14d7a545c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a545c(undefined8 param_1,undefined2 param_2)

{
  byte *pbVar1;
  undefined8 in_RAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char in_CF;
  
  uRam9f00a323446bf2b9 =
       (undefined4)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX >> 1 | in_CF << 7);
  pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x39);
  *pbVar1 = *pbVar1 & (byte)param_2;
  out(uRam000000002c5b8541,param_2);
                    /* WARNING: Read-only address (ram,0x000148904fb6) is written */
  cRam0000000148904fb6 = unaff_BH + -0x40;
  *(undefined8 *)
   ((ulonglong)(uint)(*(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * -0x31227b5f) -
   8) = 0x316919ff;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5468 FUN_14d7a5468 body=21 status=ok
// SIG undefined FUN_14d7a5468(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5468(undefined8 param_1,undefined2 param_2)

{
  byte *pbVar1;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *unaff_RSI;
  
  pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x39);
  *pbVar1 = *pbVar1 & (byte)param_2;
  out(*unaff_RSI,param_2);
                    /* WARNING: Read-only address (ram,0x000148904fb6) is written */
  cRam0000000148904fb6 = unaff_BH + -0x40;
  *(undefined8 *)
   ((ulonglong)(uint)(*(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * -0x31227b5f) -
   8) = 0x316919ff;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a547e FUN_14d7a547e body=16 status=ok
// SIG undefined FUN_14d7a547e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a547e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5493 FUN_14d7a5493 body=5 status=ok
// SIG undefined FUN_14d7a5493(void)

void FUN_14d7a5493(byte param_1)

{
  byte *in_RAX;
  
  *in_RAX = *in_RAX | param_1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a54a7 FUN_14d7a54a7 body=8 status=ok
// SIG undefined FUN_14d7a54a7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a54a7(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined1 in_AL;
  int unaff_EDI;
  
  uVar1 = in(param_2);
  *(undefined4 *)(ulonglong)(uint)-unaff_EDI = uVar1;
  out(param_2,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a54af FUN_14d7a54af body=6 status=ok
// SIG undefined FUN_14d7a54af(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a54af(undefined8 param_1,undefined2 param_2)

{
  undefined1 in_AL;
  
  out(param_2,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a54b7 FUN_14d7a54b7 body=9 status=ok
// SIG undefined FUN_14d7a54b7(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a54b7(void)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  undefined8 uStack_10;
  
  puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x0e';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a54c3 FUN_14d7a54c3 body=6 status=ok
// SIG undefined FUN_14d7a54c3(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a54c3(void)

{
  undefined1 in_AL;
  
  out(0xd9,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a54cb FUN_14d7a54cb body=4 status=ok
// SIG undefined FUN_14d7a54cb(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a54cb(longlong param_1,undefined2 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  byte bVar7;
  int *unaff_RBX;
  undefined1 *unaff_RSI;
  bool bVar8;
  bool in_PF;
  char in_AF;
  bool bVar9;
  ushort uVar6;
  
  bVar3 = (byte)param_1;
  uVar2 = in(0x1c);
  bVar4 = (byte)param_2;
  if (in_PF) {
    uRam9f00a323446bf2b9 = uVar2;
    *(byte *)((longlong)unaff_RBX + 0x39) = *(byte *)((longlong)unaff_RBX + 0x39) & bVar4;
    out(*unaff_RSI,param_2);
                    /* WARNING: Read-only address (ram,0x000148904fb6) is written */
    cRam0000000148904fb6 = (char)((ulonglong)unaff_RBX >> 8) + -0x40;
    *(undefined8 *)((ulonglong)(uint)(*unaff_RBX * -0x31227b5f) - 8) = 0x316919ff;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = (byte)uVar2;
  cVar5 = bVar4 + bVar1;
  uVar6 = CONCAT11((char)((ushort)param_2 >> 8),cVar5);
  bVar7 = (byte)unaff_RBX ^ (byte)*unaff_RBX;
  out(uVar6,CONCAT22((short)((uint)uVar2 >> 0x10),
                     CONCAT11((cVar5 < '\0') << 7 | (cVar5 == '\0') << 6 | in_AF << 4 |
                              ((POPCOUNT(cVar5) & 1U) == 0) << 2 | 2U | CARRY1(bVar4,bVar1),bVar1)))
  ;
  bVar4 = *(byte *)(param_1 + 0x1dd7358e);
  bVar8 = bVar7 < bVar4;
  bVar9 = bVar7 == bVar4;
  if ((char)bVar7 < (char)bVar4) {
    cRam0000000148904fb6 = 0xc0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00014aff4825(bVar3,uVar6);
  if (bVar8 || bVar9) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar3 = (bVar3 & 0x1f) % 9;
  in(CONCAT11((char)(uVar6 >> 8),
              (byte)((uVar6 & 0xff) >> bVar3) | (byte)((uVar6 & 0xff) << 9 - bVar3)));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a54d8 FUN_14d7a54d8 body=1 status=ok
// SIG undefined FUN_14d7a54d8(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a54d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a54e0 FUN_14d7a54e0 body=6 status=ok
// SIG undefined FUN_14d7a54e0(void)

/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_14d7a54e0(void)

{
  byte bVar1;
  ulonglong in_RAX;
  undefined6 uVar6;
  byte *pbVar5;
  undefined8 uVar7;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
  bool bVar8;
  char in_AF;
  bool in_ZF;
  bool bVar9;
  char in_SF;
  char in_OF;
  float10 in_ST0;
  undefined8 unaff_retaddr;
  undefined4 *puStackX_8;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  if (in_ZF || in_OF != in_SF) {
    return *(undefined8 *)(in_RAX & 0xffffffff);
  }
  pbVar5 = (byte *)(unaff_RSI + 0x18);
  bVar1 = *pbVar5;
  *pbVar5 = *pbVar5 + unaff_BH;
  bVar2 = *pbVar5;
  bVar3 = *pbVar5;
  bVar4 = *pbVar5;
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = (int)ROUND(in_ST0);
  uVar6 = (undefined6)(in_RAX >> 0x10);
  *(uint *)(unaff_RBP + 0x73) = *(uint *)(unaff_RBP + 0x73) | (uint)unaff_RSI;
  uVar7 = CONCAT71((uint7)(uint3)((uint)*(undefined4 *)(unaff_RBP + 0x7a) >> 8),0x28);
  *unaff_RDI = (int)CONCAT62(uVar6,CONCAT11(((char)bVar2 < '\0') << 7 | (bVar3 == 0) << 6 |
                                            in_AF << 4 | ((POPCOUNT(bVar4) & 1U) == 0) << 2 | 2U |
                                            CARRY1(bVar1,unaff_BH),(char)in_RAX));
  pbVar5 = (byte *)CONCAT62(uVar6,CONCAT11(0x62,(char)in_RAX));
  unaff_RDI[1] = *puStackX_8;
  bVar8 = CARRY1(*pbVar5,(byte)unaff_retaddr);
  *pbVar5 = *pbVar5 + (byte)unaff_retaddr;
  bVar9 = *pbVar5 == 0;
  func_0x00014aff4825(unaff_retaddr,uVar7);
  if (bVar8 || bVar9) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = ((byte)unaff_retaddr & 0x1f) % 9;
  in((short)CONCAT71((int7)((ulonglong)uVar7 >> 8),(byte)uVar7 >> bVar1 | (byte)uVar7 << 9 - bVar1))
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a54ec FUN_14d7a54ec body=4 status=ok
// SIG undefined FUN_14d7a54ec(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a54ec(undefined8 param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined4 in_EAX;
  char unaff_BL;
  undefined7 unaff_00000019;
  
  out(param_2,in_EAX);
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 0x24);
  *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a54f4 FUN_14d7a54f4 body=4 status=ok
// SIG undefined FUN_14d7a54f4(void)

undefined4 FUN_14d7a54f4(longlong param_1,undefined2 param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  undefined4 uVar2;
  uint *unaff_RBX;
  ulonglong unaff_RBP;
  byte *unaff_RSI;
  byte *unaff_RDI;
  
  if ((longlong)(unaff_RBP | *(ulonglong *)(param_4 + -0x4c)) < 0) {
    bVar1 = in(CONCAT11((char)((ushort)param_2 >> 8),
                        (char)param_2 + *(char *)(param_1 + 0x22251ea) +
                        (CARRY4((uint)unaff_RBX,*unaff_RBX) ||
                        CARRY4((uint)unaff_RBX + *unaff_RBX,(uint)(*unaff_RSI < *unaff_RDI)))));
    unaff_RDI[1] = bVar1;
    uVar2 = in(10);
    return uVar2;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a54f8 FUN_14d7a54f8 body=22 status=ok
// SIG undefined FUN_14d7a54f8(void)

undefined4 FUN_14d7a54f8(longlong param_1,undefined2 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint *unaff_RBX;
  byte *unaff_RSI;
  byte *unaff_RDI;
  char in_SF;
  char in_OF;
  
  if (in_OF != in_SF) {
    bVar1 = in(CONCAT11((char)((ushort)param_2 >> 8),
                        (char)param_2 + *(char *)(param_1 + 0x22251ea) +
                        (CARRY4((uint)unaff_RBX,*unaff_RBX) ||
                        CARRY4((uint)unaff_RBX + *unaff_RBX,(uint)(*unaff_RSI < *unaff_RDI)))));
    unaff_RDI[1] = bVar1;
    uVar2 = in(10);
    return uVar2;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d7a5514 FUN_14d7a5514 body=3 status=ok
// SIG undefined FUN_14d7a5514(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5514(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a551d FUN_14d7a551d body=15 status=ok
// SIG undefined FUN_14d7a551d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a551d(byte param_1,ushort param_2)

{
  byte bVar1;
  
  bVar1 = (param_1 & 0x1f) % 9;
  in(CONCAT11((char)(param_2 >> 8),
              (byte)((param_2 & 0xff) >> bVar1) | (byte)((param_2 & 0xff) << 9 - bVar1)));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a552e FUN_14d7a552e body=9 status=ok
// SIG undefined FUN_14d7a552e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a552e(void)

{
  byte bVar1;
  undefined2 uVar5;
  undefined1 uVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
  bool bVar10;
  char in_AF;
  bool bVar11;
  float10 in_ST0;
  undefined8 unaff_retaddr;
  undefined4 *puStackX_8;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  iVar7 = *(int *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x22) * 0xe;
  pbVar8 = (byte *)(unaff_RSI + 0x18);
  bVar1 = *pbVar8;
  *pbVar8 = *pbVar8 + unaff_BH;
  bVar2 = *pbVar8;
  bVar3 = *pbVar8;
  bVar4 = *pbVar8;
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = (int)ROUND(in_ST0);
  uVar5 = (undefined2)((uint)iVar7 >> 0x10);
  uVar6 = (undefined1)iVar7;
  *(uint *)(unaff_RBP + 0x73) = *(uint *)(unaff_RBP + 0x73) | (uint)unaff_RSI;
  uVar9 = CONCAT71((uint7)(uint3)((uint)*(undefined4 *)(unaff_RBP + 0x7a) >> 8),0x28);
  *unaff_RDI = CONCAT22(uVar5,CONCAT11(((char)bVar2 < '\0') << 7 | (bVar3 == 0) << 6 | in_AF << 4 |
                                       ((POPCOUNT(bVar4) & 1U) == 0) << 2 | 2U |
                                       CARRY1(bVar1,unaff_BH),uVar6));
  pbVar8 = (byte *)(ulonglong)CONCAT22(uVar5,CONCAT11(0x62,uVar6));
  unaff_RDI[1] = *puStackX_8;
  bVar10 = CARRY1(*pbVar8,(byte)unaff_retaddr);
  *pbVar8 = *pbVar8 + (byte)unaff_retaddr;
  bVar11 = *pbVar8 == 0;
  func_0x00014aff4825(unaff_retaddr,uVar9);
  if (bVar10 || bVar11) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = ((byte)unaff_retaddr & 0x1f) % 9;
  in((short)CONCAT71((int7)((ulonglong)uVar9 >> 8),(byte)uVar9 >> bVar1 | (byte)uVar9 << 9 - bVar1))
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5537 FUN_14d7a5537 body=24 status=ok
// SIG undefined FUN_14d7a5537(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5537(void)

{
  byte bVar1;
  undefined1 in_AL;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  undefined8 uVar2;
  longlong unaff_RBP;
  uint unaff_ESI;
  undefined4 *unaff_RDI;
  byte in_CF;
  bool bVar3;
  char in_PF;
  char in_AF;
  char in_ZF;
  bool bVar4;
  char in_SF;
  undefined8 unaff_retaddr;
  undefined4 *puStackX_8;
  
  *(uint *)(unaff_RBP + 0x73) = *(uint *)(unaff_RBP + 0x73) | unaff_ESI;
  uVar2 = CONCAT71((uint7)(uint3)((uint)*(undefined4 *)(unaff_RBP + 0x7a) >> 8),0x28);
  *unaff_RDI = CONCAT22(in_register_00000002,
                        CONCAT11(in_SF << 7 | in_ZF << 6 | in_AF << 4 | in_PF << 2 | 2U | in_CF,
                                 in_AL));
  unaff_RDI[1] = *puStackX_8;
  bVar3 = CARRY1(*(byte *)CONCAT44(in_register_00000004,
                                   CONCAT22(in_register_00000002,CONCAT11(0x62,in_AL))),
                 (byte)unaff_retaddr);
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(0x62,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(0x62,in_AL))) +
       (byte)unaff_retaddr;
  bVar4 = *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(0x62,in_AL))
                           ) == '\0';
  func_0x00014aff4825(unaff_retaddr,uVar2);
  if (bVar3 || bVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = ((byte)unaff_retaddr & 0x1f) % 9;
  in((short)CONCAT71((int7)((ulonglong)uVar2 >> 8),(byte)uVar2 >> bVar1 | (byte)uVar2 << 9 - bVar1))
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5550 FUN_14d7a5550 body=12 status=ok
// SIG undefined FUN_14d7a5550(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5550(undefined8 param_1,ushort param_2)

{
  byte bVar1;
  byte bVar2;
  byte unaff_BH;
  longlong unaff_RDI;
  
  bVar2 = (byte)(param_2 >> 8);
  *(byte *)(unaff_RDI + -0xd3217ad) = *(byte *)(unaff_RDI + -0xd3217ad) | bVar2;
  if (((byte)((ulonglong)param_1 >> 8) & unaff_BH) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = ((byte)param_1 & 0x1f) % 9;
  in(CONCAT11(bVar2,(byte)((param_2 & 0xff) >> bVar1) | (byte)((param_2 & 0xff) << 9 - bVar1)));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a5560 FUN_14d7a5560 body=8 status=ok
// SIG undefined FUN_14d7a5560(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a5560(void)

{
  undefined1 in_AL;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a556c FUN_14d7a556c body=11 status=ok
// SIG undefined FUN_14d7a556c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d7a556c(undefined8 param_1,longlong param_2)

{
  undefined8 unaff_R13;
  
  LOCK();
  *(undefined8 *)(param_2 + -0x57) = unaff_R13;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d7a558c FUN_14d7a558c body=11 status=ok
// SIG undefined FUN_14d7a558c(void)

void FUN_14d7a558c(void)

{
  uint *puVar1;
  uint unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  
  puVar1 = (uint *)(CONCAT44(unaff_00000034,unaff_ESI) + -9);
  *puVar1 = *puVar1 & unaff_EBP;
  return;
}


