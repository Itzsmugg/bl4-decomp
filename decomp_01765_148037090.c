// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148037090 FUN_148037090 body=261 status=ok
// SIG undefined FUN_148037090(void)

void FUN_148037090(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  int iVar5;
  undefined1 (*pauVar6) [16];
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  puVar2 = *(ushort **)(param_1 + 0x10);
  uVar1 = *puVar2;
  uVar4 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 1;
  iVar5 = **(int **)(param_1 + 0x20);
  lVar7 = 0;
  if (iVar5 <= (int)(uint)uVar1) {
    do {
      uVar4 = uVar4 - iVar5;
      iVar5 = (*(int **)(param_1 + 0x20))[lVar7 + 1];
      lVar7 = lVar7 + 1;
    } while (iVar5 <= (int)uVar4);
  }
  fVar11 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar7 * 8) +
                     (longlong)(int)uVar4);
  uVar1 = puVar2[1];
  *(ushort **)(param_1 + 0x10) = puVar2 + 2;
  iVar5 = *(int *)(param_1 + 0x44);
  if (0 < iVar5) {
    fVar8 = fVar11;
    if (1.0 <= fVar11) {
      fVar8 = 1.0;
    }
    fVar11 = (float)(~-(uint)(fVar11 < -1.0) & (uint)fVar8 | -(uint)(fVar11 < -1.0) & 0xbf800000);
    pauVar6 = (undefined1 (*) [16])
              ((ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) + *(longlong *)(param_1 + 0x70));
    do {
      fVar8 = acosf(fVar11);
      auVar12._4_4_ = extraout_XMM0_Db;
      auVar12._0_4_ = fVar8;
      auVar12._8_4_ = extraout_XMM0_Dc;
      auVar12._12_4_ = extraout_XMM0_Dd;
      fVar8 = acosf(fVar11);
      fVar9 = acosf(fVar11);
      fVar10 = acosf(fVar11);
      auVar14._4_4_ = extraout_XMM0_Db_00;
      auVar14._0_4_ = fVar8;
      auVar14._8_4_ = extraout_XMM0_Dc_00;
      auVar14._12_4_ = extraout_XMM0_Dd_00;
      auVar13 = insertps(auVar12,auVar14,0x10);
      auVar3._4_4_ = extraout_XMM0_Db_01;
      auVar3._0_4_ = fVar9;
      auVar3._8_4_ = extraout_XMM0_Dc_01;
      auVar3._12_4_ = extraout_XMM0_Dd_01;
      auVar14 = insertps(auVar13,auVar3,0x20);
      auVar13._4_4_ = extraout_XMM0_Db_02;
      auVar13._0_4_ = fVar10;
      auVar13._8_4_ = extraout_XMM0_Dc_02;
      auVar13._12_4_ = extraout_XMM0_Dd_02;
      auVar13 = insertps(auVar14,auVar13,0x30);
      *pauVar6 = auVar13;
      iVar5 = iVar5 + -1;
      pauVar6 = pauVar6 + 1;
    } while (iVar5 != 0);
  }
  return;
}



// FUNCTION 148037196 FUN_148037196 body=206 status=ok
// SIG undefined FUN_148037196(void)

void FUN_148037196(longlong param_1)

{
  float *pfVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  undefined1 auVar6 [16];
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  puVar5 = *(ushort **)(param_1 + 0x10);
  uVar2 = *puVar5;
  *(ushort **)(param_1 + 0x10) = puVar5 + 1;
  lVar9 = *(longlong *)(param_1 + 0x70);
  iVar4 = *(int *)(param_1 + 0x80);
  uVar3 = puVar5[1];
  *(ushort **)(param_1 + 0x10) = puVar5 + 2;
  iVar7 = *(int *)(param_1 + 0x44);
  if (0 < iVar7) {
    uVar8 = (ulonglong)((uint)uVar2 * iVar4);
    do {
      pfVar1 = (float *)(lVar9 + uVar8);
      fVar11 = pfVar1[1];
      fVar13 = pfVar1[3];
      fVar12 = *(float *)(lVar9 + 8 + uVar8);
      fVar10 = atanf(*pfVar1);
      auVar14._4_4_ = extraout_XMM0_Db;
      auVar14._0_4_ = fVar10;
      auVar14._8_4_ = extraout_XMM0_Dc;
      auVar14._12_4_ = extraout_XMM0_Dd;
      fVar11 = atanf(fVar11);
      fVar12 = atanf(fVar12);
      fVar13 = atanf(fVar13);
      auVar6._4_4_ = extraout_XMM0_Db_00;
      auVar6._0_4_ = fVar11;
      auVar6._8_4_ = extraout_XMM0_Dc_00;
      auVar6._12_4_ = extraout_XMM0_Dd_00;
      auVar15 = insertps(auVar14,auVar6,0x10);
      auVar16._4_4_ = extraout_XMM0_Db_01;
      auVar16._0_4_ = fVar12;
      auVar16._8_4_ = extraout_XMM0_Dc_01;
      auVar16._12_4_ = extraout_XMM0_Dd_01;
      auVar16 = insertps(auVar15,auVar16,0x20);
      auVar15._4_4_ = extraout_XMM0_Db_02;
      auVar15._0_4_ = fVar13;
      auVar15._8_4_ = extraout_XMM0_Dc_02;
      auVar15._12_4_ = extraout_XMM0_Dd_02;
      auVar15 = insertps(auVar16,auVar15,0x30);
      *(undefined1 (*) [16])(lVar9 + (ulonglong)((uint)uVar3 * iVar4)) = auVar15;
      lVar9 = lVar9 + 0x10;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}



// FUNCTION 148037264 FUN_148037264 body=228 status=ok
// SIG undefined FUN_148037264(void)

void FUN_148037264(longlong param_1)

{
  float _X;
  ushort uVar1;
  ushort *puVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  int iVar5;
  undefined1 (*pauVar6) [16];
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  puVar2 = *(ushort **)(param_1 + 0x10);
  uVar1 = *puVar2;
  uVar4 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 1;
  iVar5 = **(int **)(param_1 + 0x20);
  lVar7 = 0;
  if (iVar5 <= (int)(uint)uVar1) {
    do {
      uVar4 = uVar4 - iVar5;
      iVar5 = (*(int **)(param_1 + 0x20))[lVar7 + 1];
      lVar7 = lVar7 + 1;
    } while (iVar5 <= (int)uVar4);
  }
  _X = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar7 * 8) + (longlong)(int)uVar4);
  uVar1 = puVar2[1];
  *(ushort **)(param_1 + 0x10) = puVar2 + 2;
  iVar5 = *(int *)(param_1 + 0x44);
  if (0 < iVar5) {
    pauVar6 = (undefined1 (*) [16])
              ((ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) + *(longlong *)(param_1 + 0x70));
    do {
      fVar8 = atanf(_X);
      auVar11._4_4_ = extraout_XMM0_Db;
      auVar11._0_4_ = fVar8;
      auVar11._8_4_ = extraout_XMM0_Dc;
      auVar11._12_4_ = extraout_XMM0_Dd;
      fVar8 = atanf(_X);
      fVar9 = atanf(_X);
      fVar10 = atanf(_X);
      auVar13._4_4_ = extraout_XMM0_Db_00;
      auVar13._0_4_ = fVar8;
      auVar13._8_4_ = extraout_XMM0_Dc_00;
      auVar13._12_4_ = extraout_XMM0_Dd_00;
      auVar12 = insertps(auVar11,auVar13,0x10);
      auVar3._4_4_ = extraout_XMM0_Db_01;
      auVar3._0_4_ = fVar9;
      auVar3._8_4_ = extraout_XMM0_Dc_01;
      auVar3._12_4_ = extraout_XMM0_Dd_01;
      auVar13 = insertps(auVar12,auVar3,0x20);
      auVar12._4_4_ = extraout_XMM0_Db_02;
      auVar12._0_4_ = fVar10;
      auVar12._8_4_ = extraout_XMM0_Dc_02;
      auVar12._12_4_ = extraout_XMM0_Dd_02;
      auVar12 = insertps(auVar13,auVar12,0x30);
      *pauVar6 = auVar12;
      iVar5 = iVar5 + -1;
      pauVar6 = pauVar6 + 1;
    } while (iVar5 != 0);
  }
  return;
}



// FUNCTION 148037348 FUN_148037348 body=293 status=ok
// SIG undefined FUN_148037348(void)

void FUN_148037348(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  ushort *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  longlong lVar19;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  puVar9 = *(ushort **)(param_1 + 0x10);
  uVar5 = *puVar9;
  *(ushort **)(param_1 + 0x10) = puVar9 + 1;
  lVar19 = *(longlong *)(param_1 + 0x70);
  iVar8 = *(int *)(param_1 + 0x80);
  uVar6 = puVar9[1];
  *(ushort **)(param_1 + 0x10) = puVar9 + 2;
  uVar7 = puVar9[2];
  *(ushort **)(param_1 + 0x10) = puVar9 + 3;
  iVar18 = *(int *)(param_1 + 0x44);
  if (0 < iVar18) {
    do {
      puVar1 = (undefined4 *)(lVar19 + (ulonglong)((uint)uVar6 * iVar8));
      uVar14 = puVar1[1];
      uVar15 = puVar1[3];
      puVar2 = (undefined4 *)(lVar19 + (ulonglong)((uint)uVar5 * iVar8));
      uVar16 = puVar2[1];
      uVar17 = puVar2[3];
      uVar3 = *(undefined4 *)(lVar19 + 8 + (ulonglong)((uint)uVar6 * iVar8));
      uVar4 = *(undefined4 *)(lVar19 + 8 + (ulonglong)((uint)uVar5 * iVar8));
      auVar20._0_8_ = FUN_144a7ed88(*puVar2,*puVar1);
      auVar20._8_4_ = extraout_XMM0_Dc;
      auVar20._12_4_ = extraout_XMM0_Dd;
      uVar13 = FUN_144a7ed88(uVar16,uVar14);
      uVar11 = FUN_144a7ed88(uVar4,uVar3);
      uVar10 = FUN_144a7ed88(uVar17,uVar15);
      auVar12._8_4_ = extraout_XMM0_Dc_00;
      auVar12._0_8_ = uVar13;
      auVar12._12_4_ = extraout_XMM0_Dd_00;
      auVar21 = insertps(auVar20,auVar12,0x10);
      auVar22._8_4_ = extraout_XMM0_Dc_01;
      auVar22._0_8_ = uVar11;
      auVar22._12_4_ = extraout_XMM0_Dd_01;
      auVar22 = insertps(auVar21,auVar22,0x20);
      auVar21._8_4_ = extraout_XMM0_Dc_02;
      auVar21._0_8_ = uVar10;
      auVar21._12_4_ = extraout_XMM0_Dd_02;
      auVar21 = insertps(auVar22,auVar21,0x30);
      *(undefined1 (*) [16])(lVar19 + (ulonglong)((uint)uVar7 * iVar8)) = auVar21;
      lVar19 = lVar19 + 0x10;
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
  }
  return;
}



// FUNCTION 14803746e FUN_14803746e body=290 status=ok
// SIG undefined FUN_14803746e(void)

void FUN_14803746e(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar6;
  uVar13 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  iVar17 = **(int **)(param_1 + 0x20);
  lVar16 = 0;
  if (iVar17 <= (int)(uint)uVar4) {
    do {
      uVar13 = uVar13 - iVar17;
      iVar17 = (*(int **)(param_1 + 0x20))[lVar16 + 1];
      lVar16 = lVar16 + 1;
    } while (iVar17 <= (int)uVar13);
  }
  uVar2 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar16 * 8) + (longlong)(int)uVar13);
  uVar4 = puVar6[1];
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  lVar16 = *(longlong *)(param_1 + 0x70);
  iVar17 = *(int *)(param_1 + 0x80);
  uVar5 = puVar6[2];
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar14 = *(int *)(param_1 + 0x44);
  if (0 < iVar14) {
    uVar15 = (ulonglong)((uint)uVar4 * iVar17);
    do {
      puVar1 = (undefined4 *)(lVar16 + uVar15);
      uVar11 = puVar1[1];
      uVar12 = puVar1[3];
      uVar3 = *(undefined4 *)(lVar16 + 8 + uVar15);
      auVar18._0_8_ = FUN_144a7ed88(uVar2,*puVar1);
      auVar18._8_4_ = extraout_XMM0_Dc;
      auVar18._12_4_ = extraout_XMM0_Dd;
      uVar10 = FUN_144a7ed88(uVar2,uVar11);
      uVar8 = FUN_144a7ed88(uVar2,uVar3);
      uVar7 = FUN_144a7ed88(uVar2,uVar12);
      auVar9._8_4_ = extraout_XMM0_Dc_00;
      auVar9._0_8_ = uVar10;
      auVar9._12_4_ = extraout_XMM0_Dd_00;
      auVar19 = insertps(auVar18,auVar9,0x10);
      auVar20._8_4_ = extraout_XMM0_Dc_01;
      auVar20._0_8_ = uVar8;
      auVar20._12_4_ = extraout_XMM0_Dd_01;
      auVar20 = insertps(auVar19,auVar20,0x20);
      auVar19._8_4_ = extraout_XMM0_Dc_02;
      auVar19._0_8_ = uVar7;
      auVar19._12_4_ = extraout_XMM0_Dd_02;
      auVar19 = insertps(auVar20,auVar19,0x30);
      *(undefined1 (*) [16])(lVar16 + (ulonglong)((uint)uVar5 * iVar17)) = auVar19;
      lVar16 = lVar16 + 0x10;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  return;
}



// FUNCTION 148037590 FUN_148037590 body=291 status=ok
// SIG undefined FUN_148037590(void)

void FUN_148037590(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  ushort *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  puVar7 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar7;
  *(ushort **)(param_1 + 0x10) = puVar7 + 1;
  lVar16 = *(longlong *)(param_1 + 0x70);
  iVar6 = *(int *)(param_1 + 0x80);
  uVar5 = puVar7[1];
  uVar17 = (uint)uVar5;
  *(ushort **)(param_1 + 0x10) = puVar7 + 2;
  iVar14 = **(int **)(param_1 + 0x20);
  lVar18 = 0;
  if (iVar14 <= (int)(uint)uVar5) {
    do {
      uVar17 = uVar17 - iVar14;
      iVar14 = (*(int **)(param_1 + 0x20))[lVar18 + 1];
      lVar18 = lVar18 + 1;
    } while (iVar14 <= (int)uVar17);
  }
  uVar2 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar18 * 8) + (longlong)(int)uVar17);
  uVar5 = puVar7[2];
  *(ushort **)(param_1 + 0x10) = puVar7 + 3;
  iVar14 = *(int *)(param_1 + 0x44);
  if (0 < iVar14) {
    uVar15 = (ulonglong)((uint)uVar4 * iVar6);
    do {
      puVar1 = (undefined4 *)(lVar16 + uVar15);
      uVar12 = puVar1[1];
      uVar13 = puVar1[3];
      uVar3 = *(undefined4 *)(lVar16 + 8 + uVar15);
      auVar19._0_8_ = FUN_144a7ed88(*puVar1,uVar2);
      auVar19._8_4_ = extraout_XMM0_Dc;
      auVar19._12_4_ = extraout_XMM0_Dd;
      uVar11 = FUN_144a7ed88(uVar12,uVar2);
      uVar9 = FUN_144a7ed88(uVar3,uVar2);
      uVar8 = FUN_144a7ed88(uVar13,uVar2);
      auVar10._8_4_ = extraout_XMM0_Dc_00;
      auVar10._0_8_ = uVar11;
      auVar10._12_4_ = extraout_XMM0_Dd_00;
      auVar20 = insertps(auVar19,auVar10,0x10);
      auVar21._8_4_ = extraout_XMM0_Dc_01;
      auVar21._0_8_ = uVar9;
      auVar21._12_4_ = extraout_XMM0_Dd_01;
      auVar21 = insertps(auVar20,auVar21,0x20);
      auVar20._8_4_ = extraout_XMM0_Dc_02;
      auVar20._0_8_ = uVar8;
      auVar20._12_4_ = extraout_XMM0_Dd_02;
      auVar20 = insertps(auVar21,auVar20,0x30);
      *(undefined1 (*) [16])(lVar16 + (ulonglong)((uint)uVar5 * iVar6)) = auVar20;
      lVar16 = lVar16 + 0x10;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  return;
}



// FUNCTION 1480376b4 FUN_1480376b4 body=180 status=ok
// SIG undefined FUN_1480376b4(void)

void FUN_1480376b4(longlong param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined4 uVar9;
  
  puVar3 = *(ushort **)(param_1 + 0x10);
  piVar4 = *(int **)(param_1 + 0x20);
  uVar2 = *puVar3;
  uVar7 = (uint)uVar2;
  *(ushort **)(param_1 + 0x10) = puVar3 + 1;
  iVar6 = *piVar4;
  lVar8 = 0;
  if (iVar6 <= (int)(uint)uVar2) {
    do {
      uVar7 = uVar7 - iVar6;
      iVar6 = piVar4[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar6 <= (int)uVar7);
  }
  uVar9 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar7);
  uVar2 = puVar3[1];
  uVar7 = (uint)uVar2;
  *(ushort **)(param_1 + 0x10) = puVar3 + 2;
  iVar6 = *piVar4;
  lVar8 = 0;
  if (iVar6 <= (int)(uint)uVar2) {
    do {
      uVar7 = uVar7 - iVar6;
      iVar6 = piVar4[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar6 <= (int)uVar7);
  }
  uVar1 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar7);
  uVar2 = puVar3[2];
  *(ushort **)(param_1 + 0x10) = puVar3 + 3;
  iVar6 = *(int *)(param_1 + 0x44);
  if (0 < iVar6) {
    puVar5 = (undefined4 *)
             ((ulonglong)((uint)uVar2 * *(int *)(param_1 + 0x80)) + *(longlong *)(param_1 + 0x70));
    uVar9 = FUN_144a7ed88(uVar9,uVar1);
    do {
      *puVar5 = uVar9;
      puVar5[1] = uVar9;
      puVar5[2] = uVar9;
      puVar5[3] = uVar9;
      puVar5 = puVar5 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}



// FUNCTION 148037862 FUN_148037862 body=387 status=ok
// SIG undefined FUN_148037862(void)

void FUN_148037862(longlong param_1)

{
  float *pfVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  ushort *puVar7;
  undefined1 auVar8 [16];
  float _Y;
  float _Y_00;
  float fVar9;
  float _Y_01;
  float _X;
  int iVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  puVar7 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar7;
  *(ushort **)(param_1 + 0x10) = puVar7 + 1;
  lVar11 = *(longlong *)(param_1 + 0x70);
  iVar6 = *(int *)(param_1 + 0x80);
  uVar4 = puVar7[1];
  *(ushort **)(param_1 + 0x10) = puVar7 + 2;
  uVar5 = puVar7[2];
  *(ushort **)(param_1 + 0x10) = puVar7 + 3;
  iVar10 = *(int *)(param_1 + 0x44);
  if (0 < iVar10) {
    do {
      pfVar1 = (float *)(lVar11 + (ulonglong)((uint)uVar4 * iVar6));
      _Y = *pfVar1;
      _Y_00 = pfVar1[1];
      fVar9 = pfVar1[2];
      _Y_01 = pfVar1[3];
      pfVar1 = (float *)(lVar11 + (ulonglong)((uint)uVar3 * iVar6));
      fVar13 = pfVar1[1];
      _X = pfVar1[3];
      fVar14 = *(float *)(lVar11 + 8 + (ulonglong)((uint)uVar4 * iVar6));
      fVar15 = *(float *)(lVar11 + 8 + (ulonglong)((uint)uVar3 * iVar6));
      fVar12 = fmodf(*pfVar1,_Y);
      auVar16._4_4_ = extraout_XMM0_Db;
      auVar16._0_4_ = fVar12;
      auVar16._8_4_ = extraout_XMM0_Dc;
      auVar16._12_4_ = extraout_XMM0_Dd;
      fVar13 = fmodf(fVar13,_Y_00);
      fVar14 = fmodf(fVar15,fVar14);
      fVar15 = fmodf(_X,_Y_01);
      auVar8._4_4_ = extraout_XMM0_Db_00;
      auVar8._0_4_ = fVar13;
      auVar8._8_4_ = extraout_XMM0_Dc_00;
      auVar8._12_4_ = extraout_XMM0_Dd_00;
      auVar17 = insertps(auVar16,auVar8,0x10);
      auVar18._4_4_ = extraout_XMM0_Db_01;
      auVar18._0_4_ = fVar14;
      auVar18._8_4_ = extraout_XMM0_Dc_01;
      auVar18._12_4_ = extraout_XMM0_Dd_01;
      auVar18 = insertps(auVar17,auVar18,0x20);
      auVar17._4_4_ = extraout_XMM0_Db_02;
      auVar17._0_4_ = fVar15;
      auVar17._8_4_ = extraout_XMM0_Dc_02;
      auVar17._12_4_ = extraout_XMM0_Dd_02;
      auVar17 = insertps(auVar18,auVar17,0x30);
      puVar2 = (uint *)(lVar11 + (ulonglong)((uint)uVar5 * iVar6));
      *puVar2 = -(uint)(1e-08 < ABS(_Y)) & auVar17._0_4_;
      puVar2[1] = -(uint)(1e-08 < ABS(_Y_00)) & auVar17._4_4_;
      puVar2[2] = -(uint)(1e-08 < ABS(fVar9)) & auVar17._8_4_;
      puVar2[3] = -(uint)(1e-08 < ABS(_Y_01)) & auVar17._12_4_;
      lVar11 = lVar11 + 0x10;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}



// FUNCTION 1480379e6 FUN_1480379e6 body=387 status=ok
// SIG undefined FUN_1480379e6(void)

void FUN_1480379e6(longlong param_1)

{
  float *pfVar1;
  uint *puVar2;
  float _X;
  ushort uVar3;
  ushort uVar4;
  ushort *puVar5;
  undefined1 auVar6 [16];
  float _Y;
  float _Y_00;
  float fVar7;
  float _Y_01;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  puVar5 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar5;
  uVar8 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar5 + 1;
  iVar12 = **(int **)(param_1 + 0x20);
  lVar11 = 0;
  if (iVar12 <= (int)(uint)uVar3) {
    do {
      uVar8 = uVar8 - iVar12;
      iVar12 = (*(int **)(param_1 + 0x20))[lVar11 + 1];
      lVar11 = lVar11 + 1;
    } while (iVar12 <= (int)uVar8);
  }
  _X = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar11 * 8) + (longlong)(int)uVar8);
  uVar3 = puVar5[1];
  *(ushort **)(param_1 + 0x10) = puVar5 + 2;
  lVar11 = *(longlong *)(param_1 + 0x70);
  iVar12 = *(int *)(param_1 + 0x80);
  uVar4 = puVar5[2];
  *(ushort **)(param_1 + 0x10) = puVar5 + 3;
  iVar9 = *(int *)(param_1 + 0x44);
  if (0 < iVar9) {
    uVar10 = (ulonglong)((uint)uVar3 * iVar12);
    do {
      pfVar1 = (float *)(lVar11 + uVar10);
      _Y = *pfVar1;
      _Y_00 = pfVar1[1];
      fVar7 = pfVar1[2];
      _Y_01 = pfVar1[3];
      fVar14 = *(float *)(lVar11 + 8 + uVar10);
      fVar13 = fmodf(_X,_Y);
      auVar16._4_4_ = extraout_XMM0_Db;
      auVar16._0_4_ = fVar13;
      auVar16._8_4_ = extraout_XMM0_Dc;
      auVar16._12_4_ = extraout_XMM0_Dd;
      fVar13 = fmodf(_X,_Y_00);
      fVar14 = fmodf(_X,fVar14);
      fVar15 = fmodf(_X,_Y_01);
      auVar6._4_4_ = extraout_XMM0_Db_00;
      auVar6._0_4_ = fVar13;
      auVar6._8_4_ = extraout_XMM0_Dc_00;
      auVar6._12_4_ = extraout_XMM0_Dd_00;
      auVar17 = insertps(auVar16,auVar6,0x10);
      auVar18._4_4_ = extraout_XMM0_Db_01;
      auVar18._0_4_ = fVar14;
      auVar18._8_4_ = extraout_XMM0_Dc_01;
      auVar18._12_4_ = extraout_XMM0_Dd_01;
      auVar18 = insertps(auVar17,auVar18,0x20);
      auVar17._4_4_ = extraout_XMM0_Db_02;
      auVar17._0_4_ = fVar15;
      auVar17._8_4_ = extraout_XMM0_Dc_02;
      auVar17._12_4_ = extraout_XMM0_Dd_02;
      auVar17 = insertps(auVar18,auVar17,0x30);
      puVar2 = (uint *)(lVar11 + (ulonglong)((uint)uVar4 * iVar12));
      *puVar2 = -(uint)(1e-08 < ABS(_Y)) & auVar17._0_4_;
      puVar2[1] = -(uint)(1e-08 < ABS(_Y_00)) & auVar17._4_4_;
      puVar2[2] = -(uint)(1e-08 < ABS(fVar7)) & auVar17._8_4_;
      puVar2[3] = -(uint)(1e-08 < ABS(_Y_01)) & auVar17._12_4_;
      lVar11 = lVar11 + 0x10;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return;
}



// FUNCTION 148037c54 FUN_148037c54 body=118 status=ok
// SIG undefined FUN_148037c54(void)

void FUN_148037c54(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar1 = *puVar6;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  lVar8 = *(longlong *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  uVar2 = puVar6[1];
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  uVar3 = puVar6[2];
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  uVar4 = puVar6[3];
  *(ushort **)(param_1 + 0x10) = puVar6 + 4;
  iVar7 = *(int *)(param_1 + 0x44);
  if (0 < iVar7) {
    do {
      auVar9 = maxps(*(undefined1 (*) [16])(lVar8 + (ulonglong)((uint)uVar1 * iVar5)),
                     *(undefined1 (*) [16])(lVar8 + (ulonglong)((uint)uVar2 * iVar5)));
      auVar9 = minps(auVar9,*(undefined1 (*) [16])(lVar8 + (ulonglong)((uint)uVar3 * iVar5)));
      *(undefined1 (*) [16])(lVar8 + (ulonglong)((uint)uVar4 * iVar5)) = auVar9;
      lVar8 = lVar8 + 0x10;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}



// FUNCTION 148037cca FUN_148037cca body=162 status=ok
// SIG undefined FUN_148037cca(void)

void FUN_148037cca(longlong param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auVar10 [16];
  
  puVar5 = *(ushort **)(param_1 + 0x10);
  uVar2 = *puVar5;
  uVar7 = (uint)uVar2;
  *(ushort **)(param_1 + 0x10) = puVar5 + 1;
  iVar9 = **(int **)(param_1 + 0x20);
  lVar8 = 0;
  if (iVar9 <= (int)(uint)uVar2) {
    do {
      uVar7 = uVar7 - iVar9;
      iVar9 = (*(int **)(param_1 + 0x20))[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar9 <= (int)uVar7);
  }
  uVar1 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar7);
  uVar2 = puVar5[1];
  *(ushort **)(param_1 + 0x10) = puVar5 + 2;
  lVar8 = *(longlong *)(param_1 + 0x70);
  iVar9 = *(int *)(param_1 + 0x80);
  uVar3 = puVar5[2];
  *(ushort **)(param_1 + 0x10) = puVar5 + 3;
  uVar4 = puVar5[3];
  *(ushort **)(param_1 + 0x10) = puVar5 + 4;
  iVar6 = *(int *)(param_1 + 0x44);
  if (0 < iVar6) {
    do {
      auVar10._4_4_ = uVar1;
      auVar10._0_4_ = uVar1;
      auVar10._8_4_ = uVar1;
      auVar10._12_4_ = uVar1;
      auVar10 = maxps(auVar10,*(undefined1 (*) [16])(lVar8 + (ulonglong)((uint)uVar2 * iVar9)));
      auVar10 = minps(auVar10,*(undefined1 (*) [16])(lVar8 + (ulonglong)((uint)uVar3 * iVar9)));
      *(undefined1 (*) [16])(lVar8 + (ulonglong)((uint)uVar4 * iVar9)) = auVar10;
      lVar8 = lVar8 + 0x10;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}



// FUNCTION 148037d6c FUN_148037d6c body=201 status=ok
// SIG undefined FUN_148037d6c(void)

void FUN_148037d6c(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  puVar5 = *(ushort **)(param_1 + 0x10);
  piVar6 = *(int **)(param_1 + 0x20);
  uVar3 = *puVar5;
  uVar9 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar5 + 1;
  iVar8 = *piVar6;
  lVar10 = 0;
  if (iVar8 <= (int)(uint)uVar3) {
    do {
      uVar9 = uVar9 - iVar8;
      iVar8 = piVar6[lVar10 + 1];
      lVar10 = lVar10 + 1;
    } while (iVar8 <= (int)uVar9);
  }
  uVar1 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar10 * 8) + (longlong)(int)uVar9);
  uVar3 = puVar5[1];
  uVar9 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar5 + 2;
  iVar8 = *piVar6;
  lVar10 = 0;
  if (iVar8 <= (int)(uint)uVar3) {
    do {
      uVar9 = uVar9 - iVar8;
      iVar8 = piVar6[lVar10 + 1];
      lVar10 = lVar10 + 1;
    } while (iVar8 <= (int)uVar9);
  }
  uVar2 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar10 * 8) + (longlong)(int)uVar9);
  uVar3 = puVar5[2];
  *(ushort **)(param_1 + 0x10) = puVar5 + 3;
  lVar10 = *(longlong *)(param_1 + 0x70);
  iVar8 = *(int *)(param_1 + 0x80);
  uVar4 = puVar5[3];
  *(ushort **)(param_1 + 0x10) = puVar5 + 4;
  iVar7 = *(int *)(param_1 + 0x44);
  if (0 < iVar7) {
    auVar11._4_4_ = uVar1;
    auVar11._0_4_ = uVar1;
    auVar11._8_4_ = uVar1;
    auVar11._12_4_ = uVar1;
    auVar12._4_4_ = uVar2;
    auVar12._0_4_ = uVar2;
    auVar12._8_4_ = uVar2;
    auVar12._12_4_ = uVar2;
    auVar11 = maxps(auVar11,auVar12);
    do {
      auVar12 = minps(auVar11,*(undefined1 (*) [16])(lVar10 + (ulonglong)((uint)uVar3 * iVar8)));
      *(undefined1 (*) [16])(lVar10 + (ulonglong)((uint)uVar4 * iVar8)) = auVar12;
      lVar10 = lVar10 + 0x10;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}



// FUNCTION 148037e36 FUN_148037e36 body=166 status=ok
// SIG undefined FUN_148037e36(void)

void FUN_148037e36(longlong param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar2 = *puVar6;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  lVar8 = *(longlong *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  uVar3 = puVar6[1];
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  uVar4 = puVar6[2];
  uVar10 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar7 = **(int **)(param_1 + 0x20);
  lVar9 = 0;
  if (iVar7 <= (int)(uint)uVar4) {
    do {
      uVar10 = uVar10 - iVar7;
      iVar7 = (*(int **)(param_1 + 0x20))[lVar9 + 1];
      lVar9 = lVar9 + 1;
    } while (iVar7 <= (int)uVar10);
  }
  uVar1 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar9 * 8) + (longlong)(int)uVar10);
  uVar4 = puVar6[3];
  *(ushort **)(param_1 + 0x10) = puVar6 + 4;
  iVar7 = *(int *)(param_1 + 0x44);
  if (0 < iVar7) {
    do {
      auVar11 = maxps(*(undefined1 (*) [16])(lVar8 + (ulonglong)((uint)uVar2 * iVar5)),
                      *(undefined1 (*) [16])(lVar8 + (ulonglong)((uint)uVar3 * iVar5)));
      auVar12._4_4_ = uVar1;
      auVar12._0_4_ = uVar1;
      auVar12._8_4_ = uVar1;
      auVar12._12_4_ = uVar1;
      auVar12 = minps(auVar11,auVar12);
      *(undefined1 (*) [16])(lVar8 + (ulonglong)((uint)uVar4 * iVar5)) = auVar12;
      lVar8 = lVar8 + 0x10;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}



// FUNCTION 148037edc FUN_148037edc body=203 status=ok
// SIG undefined FUN_148037edc(void)

void FUN_148037edc(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  puVar5 = *(ushort **)(param_1 + 0x10);
  piVar6 = *(int **)(param_1 + 0x20);
  uVar3 = *puVar5;
  uVar10 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar5 + 1;
  iVar8 = *piVar6;
  lVar11 = 0;
  if (iVar8 <= (int)(uint)uVar3) {
    do {
      uVar10 = uVar10 - iVar8;
      iVar8 = piVar6[lVar11 + 1];
      lVar11 = lVar11 + 1;
    } while (iVar8 <= (int)uVar10);
  }
  lVar9 = *(longlong *)(param_1 + 0x70);
  uVar1 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar11 * 8) + (longlong)(int)uVar10);
  uVar3 = puVar5[1];
  *(ushort **)(param_1 + 0x10) = puVar5 + 2;
  iVar8 = *(int *)(param_1 + 0x80);
  uVar4 = puVar5[2];
  uVar10 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar5 + 3;
  iVar7 = *piVar6;
  lVar11 = 0;
  if (iVar7 <= (int)(uint)uVar4) {
    do {
      uVar10 = uVar10 - iVar7;
      iVar7 = piVar6[lVar11 + 1];
      lVar11 = lVar11 + 1;
    } while (iVar7 <= (int)uVar10);
  }
  uVar2 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar11 * 8) + (longlong)(int)uVar10);
  uVar4 = puVar5[3];
  *(ushort **)(param_1 + 0x10) = puVar5 + 4;
  iVar7 = *(int *)(param_1 + 0x44);
  if (0 < iVar7) {
    do {
      auVar12._4_4_ = uVar1;
      auVar12._0_4_ = uVar1;
      auVar12._8_4_ = uVar1;
      auVar12._12_4_ = uVar1;
      auVar12 = maxps(auVar12,*(undefined1 (*) [16])(lVar9 + (ulonglong)((uint)uVar3 * iVar8)));
      auVar13._4_4_ = uVar2;
      auVar13._0_4_ = uVar2;
      auVar13._8_4_ = uVar2;
      auVar13._12_4_ = uVar2;
      auVar13 = minps(auVar12,auVar13);
      *(undefined1 (*) [16])(lVar9 + (ulonglong)((uint)uVar4 * iVar8)) = auVar13;
      lVar9 = lVar9 + 0x10;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}



// FUNCTION 148037fa8 FUN_148037fa8 body=212 status=ok
// SIG undefined FUN_148037fa8(void)

void FUN_148037fa8(longlong param_1)

{
  float *pfVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  ushort *puVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  longlong lVar17;
  undefined8 uVar18;
  float extraout_XMM0_Dc;
  uint extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  uint extraout_XMM0_Dd_00;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  puVar7 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar7;
  *(ushort **)(param_1 + 0x10) = puVar7 + 1;
  lVar17 = *(longlong *)(param_1 + 0x70);
  iVar6 = *(int *)(param_1 + 0x80);
  uVar4 = puVar7[1];
  *(ushort **)(param_1 + 0x10) = puVar7 + 2;
  uVar5 = puVar7[2];
  *(ushort **)(param_1 + 0x10) = puVar7 + 3;
  iVar16 = *(int *)(param_1 + 0x44);
  if (0 < iVar16) {
    do {
      pfVar1 = (float *)(lVar17 + (ulonglong)((uint)uVar4 * iVar6));
      fVar12 = *pfVar1;
      fVar13 = pfVar1[1];
      fVar14 = pfVar1[2];
      fVar15 = pfVar1[3];
      pfVar1 = (float *)(lVar17 + (ulonglong)((uint)uVar3 * iVar6));
      local_78 = *pfVar1;
      fStack_74 = pfVar1[1];
      fStack_70 = pfVar1[2];
      fStack_6c = pfVar1[3];
      bVar8 = 1e-08 < local_78;
      bVar9 = 1e-08 < fStack_74;
      bVar10 = 1e-08 < fStack_70;
      bVar11 = 1e-08 < fStack_6c;
      uVar18 = FUN_14063caf8(&local_78);
      local_88 = (float)uVar18 * fVar12;
      fStack_84 = (float)((ulonglong)uVar18 >> 0x20) * fVar13;
      fStack_80 = extraout_XMM0_Dc * fVar14;
      fStack_7c = extraout_XMM0_Dd * fVar15;
      uVar18 = FUN_14276fd37(&local_88);
      puVar2 = (uint *)(lVar17 + (ulonglong)((uint)uVar5 * iVar6));
      *puVar2 = (uint)uVar18 & -(uint)bVar8;
      puVar2[1] = (uint)((ulonglong)uVar18 >> 0x20) & -(uint)bVar9;
      puVar2[2] = extraout_XMM0_Dc_00 & -(uint)bVar10;
      puVar2[3] = extraout_XMM0_Dd_00 & -(uint)bVar11;
      lVar17 = lVar17 + 0x10;
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
  }
  return;
}



// FUNCTION 14803807c FUN_14803807c body=240 status=ok
// SIG undefined FUN_14803807c(void)

void FUN_14803807c(longlong param_1)

{
  float *pfVar1;
  uint *puVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float extraout_XMM0_Dc;
  uint extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  uint extraout_XMM0_Dd_00;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar6;
  uVar7 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  iVar10 = **(int **)(param_1 + 0x20);
  lVar9 = 0;
  if (iVar10 <= (int)(uint)uVar4) {
    do {
      uVar7 = uVar7 - iVar10;
      iVar10 = (*(int **)(param_1 + 0x20))[lVar9 + 1];
      lVar9 = lVar9 + 1;
    } while (iVar10 <= (int)uVar7);
  }
  fVar3 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar9 * 8) + (longlong)(int)uVar7
                    );
  uVar4 = puVar6[1];
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  lVar9 = *(longlong *)(param_1 + 0x70);
  iVar10 = *(int *)(param_1 + 0x80);
  uVar5 = puVar6[2];
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar8 = *(int *)(param_1 + 0x44);
  if (0 < iVar8) {
    local_68 = fVar3;
    fStack_64 = fVar3;
    fStack_60 = fVar3;
    fStack_5c = fVar3;
    uVar11 = FUN_14063caf8();
    do {
      pfVar1 = (float *)(lVar9 + (ulonglong)((uint)uVar4 * iVar10));
      local_78 = *pfVar1 * (float)uVar11;
      fStack_74 = pfVar1[1] * (float)((ulonglong)uVar11 >> 0x20);
      fStack_70 = pfVar1[2] * extraout_XMM0_Dc;
      fStack_6c = pfVar1[3] * extraout_XMM0_Dd;
      uVar12 = FUN_14276fd37(&local_78);
      puVar2 = (uint *)(lVar9 + (ulonglong)((uint)uVar5 * iVar10));
      *puVar2 = (uint)uVar12 & -(uint)(1e-08 < fVar3);
      puVar2[1] = (uint)((ulonglong)uVar12 >> 0x20) & -(uint)(1e-08 < fVar3);
      puVar2[2] = extraout_XMM0_Dc_00 & -(uint)(1e-08 < fVar3);
      puVar2[3] = extraout_XMM0_Dd_00 & -(uint)(1e-08 < fVar3);
      lVar9 = lVar9 + 0x10;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return;
}



// FUNCTION 14803816c FUN_14803816c body=242 status=ok
// SIG undefined FUN_14803816c(void)

void FUN_14803816c(longlong param_1)

{
  float fVar1;
  ushort uVar2;
  ushort *puVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dd;
  
  puVar3 = *(ushort **)(param_1 + 0x10);
  piVar4 = *(int **)(param_1 + 0x20);
  uVar2 = *puVar3;
  uVar7 = (uint)uVar2;
  *(ushort **)(param_1 + 0x10) = puVar3 + 1;
  iVar6 = *piVar4;
  lVar8 = 0;
  if (iVar6 <= (int)(uint)uVar2) {
    do {
      uVar7 = uVar7 - iVar6;
      iVar6 = piVar4[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar6 <= (int)uVar7);
  }
  fVar1 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar7
                    );
  uVar2 = puVar3[1];
  uVar7 = (uint)uVar2;
  *(ushort **)(param_1 + 0x10) = puVar3 + 2;
  iVar6 = *piVar4;
  lVar8 = 0;
  if (iVar6 <= (int)(uint)uVar2) {
    do {
      uVar7 = uVar7 - iVar6;
      iVar6 = piVar4[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar6 <= (int)uVar7);
  }
  uVar2 = puVar3[2];
  *(ushort **)(param_1 + 0x10) = puVar3 + 3;
  iVar6 = *(int *)(param_1 + 0x44);
  if (0 < iVar6) {
    puVar5 = (uint *)((ulonglong)((uint)uVar2 * *(int *)(param_1 + 0x80)) +
                     *(longlong *)(param_1 + 0x70));
    FUN_14063caf8();
    uVar9 = FUN_14276fd37();
    do {
      *puVar5 = (uint)uVar9 & -(uint)(1e-08 < fVar1);
      puVar5[1] = (uint)((ulonglong)uVar9 >> 0x20) & -(uint)(1e-08 < fVar1);
      puVar5[2] = extraout_XMM0_Dc & -(uint)(1e-08 < fVar1);
      puVar5[3] = extraout_XMM0_Dd & -(uint)(1e-08 < fVar1);
      puVar5 = puVar5 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}



// FUNCTION 1480382e2 FUN_1480382e2 body=112 status=ok
// SIG undefined FUN_1480382e2(void)

void FUN_1480382e2(longlong param_1)

{
  float *pfVar1;
  float *pfVar2;
  uint *puVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  longlong lVar16;
  
  puVar8 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar8;
  *(ushort **)(param_1 + 0x10) = puVar8 + 1;
  lVar16 = *(longlong *)(param_1 + 0x70);
  iVar7 = *(int *)(param_1 + 0x80);
  uVar5 = puVar8[1];
  *(ushort **)(param_1 + 0x10) = puVar8 + 2;
  uVar6 = puVar8[2];
  *(ushort **)(param_1 + 0x10) = puVar8 + 3;
  iVar15 = *(int *)(param_1 + 0x44);
  if (0 < iVar15) {
    do {
      pfVar1 = (float *)(lVar16 + (ulonglong)((uint)uVar5 * iVar7));
      fVar9 = pfVar1[1];
      fVar10 = pfVar1[2];
      fVar11 = pfVar1[3];
      pfVar2 = (float *)(lVar16 + (ulonglong)((uint)uVar4 * iVar7));
      fVar12 = pfVar2[1];
      fVar13 = pfVar2[2];
      fVar14 = pfVar2[3];
      puVar3 = (uint *)(lVar16 + (ulonglong)((uint)uVar6 * iVar7));
      *puVar3 = -(uint)(0.0 <= *pfVar1 - *pfVar2) & 0x3f800000;
      puVar3[1] = -(uint)(0.0 <= fVar9 - fVar12) & 0x3f800000;
      puVar3[2] = -(uint)(0.0 <= fVar10 - fVar13) & 0x3f800000;
      puVar3[3] = -(uint)(0.0 <= fVar11 - fVar14) & 0x3f800000;
      lVar16 = lVar16 + 0x10;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  return;
}



// FUNCTION 148038352 FUN_148038352 body=157 status=ok
// SIG undefined FUN_148038352(void)

void FUN_148038352(longlong param_1)

{
  float *pfVar1;
  uint *puVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  ushort *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar6;
  uVar11 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  iVar13 = **(int **)(param_1 + 0x20);
  lVar12 = 0;
  if (iVar13 <= (int)(uint)uVar4) {
    do {
      uVar11 = uVar11 - iVar13;
      iVar13 = (*(int **)(param_1 + 0x20))[lVar12 + 1];
      lVar12 = lVar12 + 1;
    } while (iVar13 <= (int)uVar11);
  }
  fVar3 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar12 * 8) +
                    (longlong)(int)uVar11);
  uVar4 = puVar6[1];
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  lVar12 = *(longlong *)(param_1 + 0x70);
  iVar13 = *(int *)(param_1 + 0x80);
  uVar5 = puVar6[2];
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar10 = *(int *)(param_1 + 0x44);
  if (0 < iVar10) {
    do {
      pfVar1 = (float *)(lVar12 + (ulonglong)((uint)uVar4 * iVar13));
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      puVar2 = (uint *)(lVar12 + (ulonglong)((uint)uVar5 * iVar13));
      *puVar2 = -(uint)(0.0 <= *pfVar1 - fVar3) & 0x3f800000;
      puVar2[1] = -(uint)(0.0 <= fVar7 - fVar3) & 0x3f800000;
      puVar2[2] = -(uint)(0.0 <= fVar8 - fVar3) & 0x3f800000;
      puVar2[3] = -(uint)(0.0 <= fVar9 - fVar3) & 0x3f800000;
      lVar12 = lVar12 + 0x10;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}



// FUNCTION 1480383f0 FUN_1480383f0 body=161 status=ok
// SIG undefined FUN_1480383f0(void)

void FUN_1480383f0(longlong param_1)

{
  float *pfVar1;
  uint *puVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  ushort *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  
  puVar7 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar7;
  *(ushort **)(param_1 + 0x10) = puVar7 + 1;
  lVar12 = *(longlong *)(param_1 + 0x70);
  iVar6 = *(int *)(param_1 + 0x80);
  uVar5 = puVar7[1];
  uVar14 = (uint)uVar5;
  *(ushort **)(param_1 + 0x10) = puVar7 + 2;
  iVar11 = **(int **)(param_1 + 0x20);
  lVar13 = 0;
  if (iVar11 <= (int)(uint)uVar5) {
    do {
      uVar14 = uVar14 - iVar11;
      iVar11 = (*(int **)(param_1 + 0x20))[lVar13 + 1];
      lVar13 = lVar13 + 1;
    } while (iVar11 <= (int)uVar14);
  }
  fVar3 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar13 * 8) +
                    (longlong)(int)uVar14);
  uVar5 = puVar7[2];
  *(ushort **)(param_1 + 0x10) = puVar7 + 3;
  iVar11 = *(int *)(param_1 + 0x44);
  if (0 < iVar11) {
    do {
      pfVar1 = (float *)(lVar12 + (ulonglong)((uint)uVar4 * iVar6));
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      puVar2 = (uint *)(lVar12 + (ulonglong)((uint)uVar5 * iVar6));
      *puVar2 = -(uint)(0.0 <= fVar3 - *pfVar1) & 0x3f800000;
      puVar2[1] = -(uint)(0.0 <= fVar3 - fVar8) & 0x3f800000;
      puVar2[2] = -(uint)(0.0 <= fVar3 - fVar9) & 0x3f800000;
      puVar2[3] = -(uint)(0.0 <= fVar3 - fVar10) & 0x3f800000;
      lVar12 = lVar12 + 0x10;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  return;
}



// FUNCTION 148038492 FUN_148038492 body=202 status=ok
// SIG undefined FUN_148038492(void)

void FUN_148038492(longlong param_1)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  ushort *puVar4;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  longlong lVar9;
  
  puVar4 = *(ushort **)(param_1 + 0x10);
  piVar5 = *(int **)(param_1 + 0x20);
  uVar3 = *puVar4;
  uVar8 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar4 + 1;
  iVar6 = *piVar5;
  lVar9 = 0;
  if (iVar6 <= (int)(uint)uVar3) {
    do {
      uVar8 = uVar8 - iVar6;
      iVar6 = piVar5[lVar9 + 1];
      lVar9 = lVar9 + 1;
    } while (iVar6 <= (int)uVar8);
  }
  fVar1 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar9 * 8) + (longlong)(int)uVar8
                    );
  uVar3 = puVar4[1];
  uVar8 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar4 + 2;
  iVar6 = *piVar5;
  lVar9 = 0;
  if (iVar6 <= (int)(uint)uVar3) {
    do {
      uVar8 = uVar8 - iVar6;
      iVar6 = piVar5[lVar9 + 1];
      lVar9 = lVar9 + 1;
    } while (iVar6 <= (int)uVar8);
  }
  fVar2 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar9 * 8) + (longlong)(int)uVar8
                    );
  uVar3 = puVar4[2];
  *(ushort **)(param_1 + 0x10) = puVar4 + 3;
  iVar6 = *(int *)(param_1 + 0x44);
  if (0 < iVar6) {
    puVar7 = (uint *)((ulonglong)((uint)uVar3 * *(int *)(param_1 + 0x80)) +
                     *(longlong *)(param_1 + 0x70));
    uVar8 = (uint)(0.0 <= fVar2 - fVar1);
    do {
      *puVar7 = (int)(uVar8 << 0x1f) >> 0x1f & 0x3f800000;
      puVar7[1] = (int)(uVar8 << 0x1f) >> 0x1f & 0x3f800000;
      puVar7[2] = (int)(uVar8 << 0x1f) >> 0x1f & 0x3f800000;
      puVar7[3] = (int)(uVar8 << 0x1f) >> 0x1f & 0x3f800000;
      puVar7 = puVar7 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}



// FUNCTION 14803855c FUN_14803855c body=85 status=ok
// SIG undefined FUN_14803855c(void)

void FUN_14803855c(longlong param_1)

{
  ushort uVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar2 + 1;
  if ((*pcVar2 == '\x01') || (*pcVar2 == '\0')) {
    *(char **)(param_1 + 0x10) = pcVar2 + 3;
    uVar1 = *(ushort *)(pcVar2 + 3);
    *(char **)(param_1 + 0x10) = pcVar2 + 5;
    if (0 < (int)*(uint *)(param_1 + 0x40)) {
      memset((void *)((ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) +
                     *(longlong *)(param_1 + 0x70)),0,(ulonglong)*(uint *)(param_1 + 0x40) << 2);
      return;
    }
  }
  return;
}



// FUNCTION 14803862a FUN_14803862a body=96 status=ok
// SIG undefined FUN_14803862a(void)

void FUN_14803862a(longlong param_1)

{
  ushort uVar1;
  undefined1 *puVar2;
  
  puVar2 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar2 + 1;
  switch(*puVar2) {
  case 0:
  case 1:
  case 2:
  case 3:
    *(undefined1 **)(param_1 + 0x10) = puVar2 + 5;
    uVar1 = *(ushort *)(puVar2 + 5);
    *(undefined1 **)(param_1 + 0x10) = puVar2 + 7;
    if (0 < (int)*(uint *)(param_1 + 0x40)) {
      memset((void *)((ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) +
                     *(longlong *)(param_1 + 0x70)),0,(ulonglong)*(uint *)(param_1 + 0x40) << 2);
      return;
    }
  }
  return;
}



// FUNCTION 14803877a FUN_14803877a body=78 status=ok
// SIG undefined FUN_14803877a(void)

void FUN_14803877a(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_1480387c8();
    return;
  case 1:
    FUN_148038d92();
    return;
  case 2:
    FUN_1480393ce();
    return;
  case 3:
    FUN_1480399d4();
    return;
  case 4:
    FUN_14803a01c();
    return;
  case 5:
    FUN_14803a64e();
    return;
  case 6:
    FUN_14803ac9e();
    return;
  case 7:
    FUN_14803b2ea();
    return;
  default:
    return;
  }
}



// FUNCTION 1480387c8 FUN_1480387c8 body=1481 status=ok
// SIG undefined FUN_1480387c8(void)

void FUN_1480387c8(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  
  puVar8 = *(ushort **)(param_1 + 0x10);
  uVar1 = *puVar8;
  *(ushort **)(param_1 + 0x10) = puVar8 + 1;
  lVar9 = *(longlong *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  uVar2 = puVar8[1];
  *(ushort **)(param_1 + 0x10) = puVar8 + 2;
  uVar3 = puVar8[2];
  *(ushort **)(param_1 + 0x10) = puVar8 + 3;
  uVar4 = puVar8[3];
  *(ushort **)(param_1 + 0x10) = puVar8 + 4;
  iVar6 = *(int *)(param_1 + 0x40);
  if (0 < iVar6) {
    lVar13 = (ulonglong)((uint)uVar3 * iVar5) + lVar9;
    lVar11 = (ulonglong)((uint)uVar2 * iVar5) + lVar9;
    lVar10 = (ulonglong)((uint)uVar1 * iVar5) + lVar9;
    lVar14 = 0;
    do {
      auVar21 = ZEXT416(*(uint *)(lVar10 + lVar14 * 4));
      auVar21 = roundps(auVar21,auVar21,1);
      auVar25 = ZEXT416(*(uint *)(lVar11 + lVar14 * 4));
      auVar25 = roundps(auVar25,auVar25,1);
      auVar28 = ZEXT416(*(uint *)(lVar13 + lVar14 * 4));
      auVar28 = roundps(auVar28,auVar28,1);
      uVar16 = (ulonglong)((int)auVar21._0_4_ & 0xff);
      uVar17 = (ulonglong)((int)auVar25._0_4_ & 0xff);
      uVar12 = (ulonglong)((int)auVar28._0_4_ & 0xff);
      fVar39 = *(float *)(lVar10 + lVar14 * 4) - auVar21._0_4_;
      fVar40 = *(float *)(lVar13 + lVar14 * 4) - auVar28._0_4_;
      fVar33 = fVar39 + -1.0;
      fVar19 = fVar40 + -1.0;
      lVar15 = (longlong)*(int *)(&DAT_14ad40094 + uVar16 * 4) + uVar17;
      uVar7 = *(uint *)(&DAT_14ad40094 +
                       ((longlong)*(int *)(&DAT_14ad40094 + (longlong)(int)lVar15 * 4) + uVar12) * 4
                       );
      fVar32 = fVar33;
      if ((uVar7 & 0xd) != 0xc) {
        fVar32 = fVar19;
      }
      fVar36 = *(float *)(lVar11 + lVar14 * 4) - auVar25._0_4_;
      fVar34 = fVar36 + -1.0;
      fVar22 = fVar34;
      if (3 < (uVar7 & 0xf)) {
        fVar22 = fVar32;
      }
      fVar32 = fVar33;
      if (7 < (uVar7 & 0xf)) {
        fVar32 = fVar34;
      }
      if ((uVar7 & 1) != 0) {
        fVar32 = -fVar32;
      }
      if ((uVar7 & 2) != 0) {
        fVar22 = -fVar22;
      }
      lVar18 = uVar17 + (longlong)*(int *)(&DAT_14ad40090 + uVar16 * 4);
      uVar7 = *(uint *)(&DAT_14ad40094 +
                       ((longlong)*(int *)(&DAT_14ad40094 + (longlong)(int)lVar18 * 4) + uVar12) * 4
                       );
      fVar23 = fVar39;
      if ((uVar7 & 0xd) != 0xc) {
        fVar23 = fVar19;
      }
      fVar26 = fVar34;
      if (3 < (uVar7 & 0xf)) {
        fVar26 = fVar23;
      }
      fVar23 = fVar39;
      if (7 < (uVar7 & 0xf)) {
        fVar23 = fVar34;
      }
      if ((uVar7 & 1) != 0) {
        fVar23 = -fVar23;
      }
      if ((uVar7 & 2) != 0) {
        fVar26 = -fVar26;
      }
      uVar7 = *(uint *)(&DAT_14ad40094 +
                       ((longlong)*(int *)(&DAT_14ad40090 + lVar15 * 4) + uVar12) * 4);
      fVar38 = fVar33;
      if ((uVar7 & 0xd) != 0xc) {
        fVar38 = fVar19;
      }
      fVar29 = fVar36;
      if (3 < (uVar7 & 0xf)) {
        fVar29 = fVar38;
      }
      fVar38 = fVar33;
      if (7 < (uVar7 & 0xf)) {
        fVar38 = fVar36;
      }
      if ((uVar7 & 1) != 0) {
        fVar38 = -fVar38;
      }
      if ((uVar7 & 2) != 0) {
        fVar29 = -fVar29;
      }
      uVar7 = *(uint *)(&DAT_14ad40094 +
                       (uVar12 + (longlong)*(int *)(&DAT_14ad40090 + lVar18 * 4)) * 4);
      fVar20 = fVar39;
      if ((uVar7 & 0xd) != 0xc) {
        fVar20 = fVar19;
      }
      fVar19 = fVar36;
      if (3 < (uVar7 & 0xf)) {
        fVar19 = fVar20;
      }
      fVar20 = fVar39;
      if (7 < (uVar7 & 0xf)) {
        fVar20 = fVar36;
      }
      if ((uVar7 & 1) != 0) {
        fVar20 = -fVar20;
      }
      if ((uVar7 & 2) != 0) {
        fVar19 = -fVar19;
      }
      uVar7 = *(uint *)(&DAT_14ad40090 +
                       (longlong)
                       (int)((longlong)*(int *)(&DAT_14ad40094 + (longlong)(int)lVar15 * 4) + uVar12
                            ) * 4);
      fVar30 = fVar33;
      if ((uVar7 & 0xd) != 0xc) {
        fVar30 = fVar40;
      }
      fVar37 = fVar34;
      if (3 < (uVar7 & 0xf)) {
        fVar37 = fVar30;
      }
      fVar30 = fVar33;
      if (7 < (uVar7 & 0xf)) {
        fVar30 = fVar34;
      }
      if ((uVar7 & 1) != 0) {
        fVar30 = -fVar30;
      }
      if ((uVar7 & 2) != 0) {
        fVar37 = -fVar37;
      }
      uVar7 = *(uint *)(&DAT_14ad40090 +
                       (longlong)
                       (int)((longlong)*(int *)(&DAT_14ad40094 + (longlong)(int)lVar18 * 4) + uVar12
                            ) * 4);
      fVar24 = fVar39;
      if ((uVar7 & 0xd) != 0xc) {
        fVar24 = fVar40;
      }
      fVar31 = fVar34;
      if (3 < (uVar7 & 0xf)) {
        fVar31 = fVar24;
      }
      fVar24 = fVar39;
      if (7 < (uVar7 & 0xf)) {
        fVar24 = fVar34;
      }
      if ((uVar7 & 1) != 0) {
        fVar24 = -fVar24;
      }
      if ((uVar7 & 2) != 0) {
        fVar31 = -fVar31;
      }
      uVar7 = *(uint *)(&DAT_14ad40090 +
                       (longlong)(int)((longlong)*(int *)(&DAT_14ad40090 + lVar15 * 4) + uVar12) * 4
                       );
      fVar34 = fVar33;
      if ((uVar7 & 0xd) != 0xc) {
        fVar34 = fVar40;
      }
      fVar35 = fVar36;
      if (3 < (uVar7 & 0xf)) {
        fVar35 = fVar34;
      }
      if (7 < (uVar7 & 0xf)) {
        fVar33 = fVar36;
      }
      if ((uVar7 & 1) != 0) {
        fVar33 = -fVar33;
      }
      if ((uVar7 & 2) != 0) {
        fVar35 = -fVar35;
      }
      uVar7 = *(uint *)(&DAT_14ad40090 +
                       (longlong)(int)(uVar12 + (longlong)*(int *)(&DAT_14ad40090 + lVar18 * 4)) * 4
                       );
      fVar34 = fVar39;
      if ((uVar7 & 0xd) != 0xc) {
        fVar34 = fVar40;
      }
      fVar27 = fVar36;
      if (3 < (uVar7 & 0xf)) {
        fVar27 = fVar34;
      }
      fVar34 = fVar39;
      if (7 < (uVar7 & 0xf)) {
        fVar34 = fVar36;
      }
      if ((uVar7 & 1) != 0) {
        fVar34 = -fVar34;
      }
      if ((uVar7 & 2) != 0) {
        fVar27 = -fVar27;
      }
      fVar39 = ((fVar39 * 6.0 + -15.0) * fVar39 + 10.0) * fVar39 * fVar39 * fVar39;
      fVar36 = ((fVar36 * 6.0 + -15.0) * fVar36 + 10.0) * fVar36 * fVar36 * fVar36;
      fVar19 = ((fVar38 + fVar29) - (fVar20 + fVar19)) * fVar39 + fVar20 + fVar19;
      fVar33 = ((fVar33 + fVar35) - (fVar34 + fVar27)) * fVar39 + fVar34 + fVar27;
      fVar33 = ((((fVar30 + fVar37) - (fVar24 + fVar31)) * fVar39 + fVar24 + fVar31) - fVar33) *
               fVar36 + fVar33;
      *(float *)((ulonglong)((uint)uVar4 * iVar5) + lVar9 + lVar14 * 4) =
           ((((((fVar32 + fVar22) - (fVar23 + fVar26)) * fVar39 + fVar23 + fVar26) - fVar19) *
             fVar36 + fVar19) - fVar33) *
           ((fVar40 * 6.0 + -15.0) * fVar40 + 10.0) * fVar40 * fVar40 * fVar40 + fVar33;
      lVar14 = lVar14 + 1;
    } while (iVar6 != (int)lVar14);
  }
  return;
}



// FUNCTION 148038d92 FUN_148038d92 body=1595 status=ok
// SIG undefined FUN_148038d92(void)

void FUN_148038d92(longlong param_1)

{
  longlong lVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  
  puVar8 = *(ushort **)(param_1 + 0x10);
  uVar2 = *puVar8;
  uVar9 = (uint)uVar2;
  *(ushort **)(param_1 + 0x10) = puVar8 + 1;
  iVar15 = **(int **)(param_1 + 0x20);
  lVar11 = 0;
  if (iVar15 <= (int)(uint)uVar2) {
    do {
      uVar9 = uVar9 - iVar15;
      iVar15 = (*(int **)(param_1 + 0x20))[lVar11 + 1];
      lVar11 = lVar11 + 1;
    } while (iVar15 <= (int)uVar9);
  }
  fVar39 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar11 * 8) +
                     (longlong)(int)uVar9);
  uVar2 = puVar8[1];
  *(ushort **)(param_1 + 0x10) = puVar8 + 2;
  lVar11 = *(longlong *)(param_1 + 0x70);
  iVar15 = *(int *)(param_1 + 0x80);
  uVar3 = puVar8[2];
  *(ushort **)(param_1 + 0x10) = puVar8 + 3;
  uVar4 = puVar8[3];
  *(ushort **)(param_1 + 0x10) = puVar8 + 4;
  iVar5 = *(int *)(param_1 + 0x40);
  if (0 < iVar5) {
    lVar12 = (ulonglong)((uint)uVar3 * iVar15) + lVar11;
    lVar10 = (ulonglong)((uint)uVar2 * iVar15) + lVar11;
    auVar20 = roundps(ZEXT416((uint)fVar39),ZEXT416((uint)fVar39),1);
    uVar13 = (ulonglong)((int)auVar20._0_4_ & 0xff);
    fVar39 = fVar39 - auVar20._0_4_;
    fVar28 = fVar39 + -1.0;
    iVar6 = *(int *)(&DAT_14ad40090 + uVar13 * 4);
    iVar7 = *(int *)(&DAT_14ad40094 + uVar13 * 4);
    fVar21 = ((fVar39 * 6.0 + -15.0) * fVar39 + 10.0) * fVar39 * fVar39 * fVar39;
    auVar20 = ZEXT416((uint)fVar21);
    lVar14 = 0;
    do {
      auVar24 = roundps(auVar20,ZEXT416(*(uint *)(lVar10 + lVar14 * 4)),1);
      auVar20 = ZEXT416(*(uint *)(lVar12 + lVar14 * 4));
      auVar20 = roundps(auVar20,auVar20,1);
      uVar16 = (ulonglong)((int)auVar24._0_4_ & 0xff);
      uVar13 = (ulonglong)((int)auVar20._0_4_ & 0xff);
      fVar32 = *(float *)(lVar12 + lVar14 * 4) - auVar20._0_4_;
      fVar18 = fVar32 + -1.0;
      lVar1 = uVar16 + (longlong)iVar7;
      uVar9 = *(uint *)(&DAT_14ad40094 +
                       ((longlong)*(int *)(&DAT_14ad40094 + (longlong)(int)lVar1 * 4) + uVar13) * 4)
      ;
      fVar31 = fVar28;
      if ((uVar9 & 0xd) != 0xc) {
        fVar31 = fVar18;
      }
      fVar36 = *(float *)(lVar10 + lVar14 * 4) - auVar24._0_4_;
      fVar33 = fVar36 + -1.0;
      fVar22 = fVar33;
      if (3 < (uVar9 & 0xf)) {
        fVar22 = fVar31;
      }
      fVar31 = fVar28;
      if (7 < (uVar9 & 0xf)) {
        fVar31 = fVar33;
      }
      if ((uVar9 & 1) != 0) {
        fVar31 = -fVar31;
      }
      if ((uVar9 & 2) != 0) {
        fVar22 = -fVar22;
      }
      lVar17 = uVar16 + (longlong)iVar6;
      uVar9 = *(uint *)(&DAT_14ad40094 +
                       ((longlong)*(int *)(&DAT_14ad40094 + (longlong)(int)lVar17 * 4) + uVar13) * 4
                       );
      fVar23 = fVar39;
      if ((uVar9 & 0xd) != 0xc) {
        fVar23 = fVar18;
      }
      fVar37 = fVar33;
      if (3 < (uVar9 & 0xf)) {
        fVar37 = fVar23;
      }
      fVar23 = fVar39;
      if (7 < (uVar9 & 0xf)) {
        fVar23 = fVar33;
      }
      if ((uVar9 & 1) != 0) {
        fVar23 = -fVar23;
      }
      if ((uVar9 & 2) != 0) {
        fVar37 = -fVar37;
      }
      uVar9 = *(uint *)(&DAT_14ad40094 +
                       ((longlong)*(int *)(&DAT_14ad40090 + lVar1 * 4) + uVar13) * 4);
      fVar38 = fVar28;
      if ((uVar9 & 0xd) != 0xc) {
        fVar38 = fVar18;
      }
      fVar25 = fVar36;
      if (3 < (uVar9 & 0xf)) {
        fVar25 = fVar38;
      }
      fVar38 = fVar28;
      if (7 < (uVar9 & 0xf)) {
        fVar38 = fVar36;
      }
      if ((uVar9 & 1) != 0) {
        fVar38 = -fVar38;
      }
      if ((uVar9 & 2) != 0) {
        fVar25 = -fVar25;
      }
      uVar9 = *(uint *)(&DAT_14ad40094 +
                       (uVar13 + (longlong)*(int *)(&DAT_14ad40090 + lVar17 * 4)) * 4);
      fVar19 = fVar39;
      if ((uVar9 & 0xd) != 0xc) {
        fVar19 = fVar18;
      }
      fVar18 = fVar36;
      if (3 < (uVar9 & 0xf)) {
        fVar18 = fVar19;
      }
      fVar19 = fVar39;
      if (7 < (uVar9 & 0xf)) {
        fVar19 = fVar36;
      }
      if ((uVar9 & 1) != 0) {
        fVar19 = -fVar19;
      }
      if ((uVar9 & 2) != 0) {
        fVar18 = -fVar18;
      }
      uVar9 = *(uint *)(&DAT_14ad40090 +
                       (longlong)
                       (int)((longlong)*(int *)(&DAT_14ad40094 + (longlong)(int)lVar1 * 4) + uVar13)
                       * 4);
      fVar27 = fVar28;
      if ((uVar9 & 0xd) != 0xc) {
        fVar27 = fVar32;
      }
      fVar29 = fVar33;
      if (3 < (uVar9 & 0xf)) {
        fVar29 = fVar27;
      }
      fVar27 = fVar28;
      if (7 < (uVar9 & 0xf)) {
        fVar27 = fVar33;
      }
      auVar24 = ZEXT416((uint)fVar27);
      if ((uVar9 & 1) != 0) {
        auVar24._0_4_ = -fVar27;
        auVar24._4_4_ = 0x80000000;
        auVar24._8_4_ = 0x80000000;
        auVar24._12_4_ = 0x80000000;
      }
      if ((uVar9 & 2) != 0) {
        fVar29 = -fVar29;
      }
      uVar9 = *(uint *)(&DAT_14ad40090 +
                       (longlong)
                       (int)((longlong)*(int *)(&DAT_14ad40094 + (longlong)(int)lVar17 * 4) + uVar13
                            ) * 4);
      fVar27 = fVar39;
      if ((uVar9 & 0xd) != 0xc) {
        fVar27 = fVar32;
      }
      fVar34 = fVar33;
      if (3 < (uVar9 & 0xf)) {
        fVar34 = fVar27;
      }
      fVar27 = fVar39;
      if (7 < (uVar9 & 0xf)) {
        fVar27 = fVar33;
      }
      if ((uVar9 & 1) != 0) {
        fVar27 = -fVar27;
      }
      if ((uVar9 & 2) != 0) {
        fVar34 = -fVar34;
      }
      uVar9 = *(uint *)(&DAT_14ad40090 +
                       (longlong)(int)((longlong)*(int *)(&DAT_14ad40090 + lVar1 * 4) + uVar13) * 4)
      ;
      fVar33 = fVar28;
      if ((uVar9 & 0xd) != 0xc) {
        fVar33 = fVar32;
      }
      fVar30 = fVar36;
      if (3 < (uVar9 & 0xf)) {
        fVar30 = fVar33;
      }
      fVar33 = fVar28;
      if (7 < (uVar9 & 0xf)) {
        fVar33 = fVar36;
      }
      if ((uVar9 & 1) != 0) {
        fVar33 = -fVar33;
      }
      if ((uVar9 & 2) != 0) {
        fVar30 = -fVar30;
      }
      uVar9 = *(uint *)(&DAT_14ad40090 +
                       (longlong)(int)(uVar13 + (longlong)*(int *)(&DAT_14ad40090 + lVar17 * 4)) * 4
                       );
      fVar26 = fVar39;
      if ((uVar9 & 0xd) != 0xc) {
        fVar26 = fVar32;
      }
      fVar35 = fVar36;
      if (3 < (uVar9 & 0xf)) {
        fVar35 = fVar26;
      }
      fVar26 = fVar39;
      if (7 < (uVar9 & 0xf)) {
        fVar26 = fVar36;
      }
      if ((uVar9 & 1) != 0) {
        fVar26 = -fVar26;
      }
      if ((uVar9 & 2) != 0) {
        fVar35 = -fVar35;
      }
      fVar36 = ((fVar36 * 6.0 + -15.0) * fVar36 + 10.0) * fVar36 * fVar36 * fVar36;
      fVar38 = ((fVar38 + fVar25) - (fVar19 + fVar18)) * fVar21 + fVar19 + fVar18;
      auVar20._4_12_ = auVar24._4_12_;
      fVar18 = ((fVar33 + fVar30) - (fVar26 + fVar35)) * fVar21 + fVar26 + fVar35;
      auVar20._0_4_ =
           ((((auVar24._0_4_ + fVar29) - (fVar27 + fVar34)) * fVar21 + fVar27 + fVar34) - fVar18) *
           fVar36 + fVar18;
      *(float *)((ulonglong)((uint)uVar4 * iVar15) + lVar11 + lVar14 * 4) =
           ((((((fVar31 + fVar22) - (fVar23 + fVar37)) * fVar21 + fVar23 + fVar37) - fVar38) *
             fVar36 + fVar38) - auVar20._0_4_) *
           ((fVar32 * 6.0 + -15.0) * fVar32 + 10.0) * fVar32 * fVar32 * fVar32 + auVar20._0_4_;
      lVar14 = lVar14 + 1;
    } while (iVar5 != (int)lVar14);
  }
  return;
}



// FUNCTION 1480393ce FUN_1480393ce body=1542 status=ok
// SIG undefined FUN_1480393ce(void)

void FUN_1480393ce(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  
  puVar5 = *(ushort **)(param_1 + 0x10);
  uVar1 = *puVar5;
  *(ushort **)(param_1 + 0x10) = puVar5 + 1;
  lVar6 = *(longlong *)(param_1 + 0x70);
  iVar4 = *(int *)(param_1 + 0x80);
  uVar2 = puVar5[1];
  uVar7 = (uint)uVar2;
  *(ushort **)(param_1 + 0x10) = puVar5 + 2;
  iVar11 = **(int **)(param_1 + 0x20);
  lVar10 = 0;
  if (iVar11 <= (int)(uint)uVar2) {
    do {
      uVar7 = uVar7 - iVar11;
      iVar11 = (*(int **)(param_1 + 0x20))[lVar10 + 1];
      lVar10 = lVar10 + 1;
    } while (iVar11 <= (int)uVar7);
  }
  fVar30 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar10 * 8) +
                     (longlong)(int)uVar7);
  uVar2 = puVar5[2];
  *(ushort **)(param_1 + 0x10) = puVar5 + 3;
  uVar3 = puVar5[3];
  *(ushort **)(param_1 + 0x10) = puVar5 + 4;
  iVar11 = *(int *)(param_1 + 0x40);
  if (0 < iVar11) {
    lVar10 = (ulonglong)((uint)uVar1 * iVar4) + lVar6;
    lVar8 = (ulonglong)((uint)uVar2 * iVar4) + lVar6;
    auVar18 = roundps(ZEXT416((uint)fVar30),ZEXT416((uint)fVar30),1);
    uVar12 = (ulonglong)((int)auVar18._0_4_ & 0xff);
    fVar30 = fVar30 - auVar18._0_4_;
    fVar28 = fVar30 + -1.0;
    fVar19 = ((fVar30 * 6.0 + -15.0) * fVar30 + 10.0) * fVar30 * fVar30 * fVar30;
    lVar13 = 0;
    do {
      auVar18 = ZEXT416(*(uint *)(lVar10 + lVar13 * 4));
      auVar18 = roundps(auVar18,auVar18,1);
      auVar23 = ZEXT416(*(uint *)(lVar8 + lVar13 * 4));
      auVar23 = roundps(auVar23,auVar23,1);
      uVar16 = (ulonglong)((int)auVar18._0_4_ & 0xff);
      uVar9 = (ulonglong)((int)auVar23._0_4_ & 0xff);
      fVar37 = *(float *)(lVar10 + lVar13 * 4) - auVar18._0_4_;
      fVar34 = *(float *)(lVar8 + lVar13 * 4) - auVar23._0_4_;
      fVar35 = fVar37 + -1.0;
      fVar17 = fVar34 + -1.0;
      lVar14 = (longlong)*(int *)(&DAT_14ad40094 + uVar16 * 4) + uVar12;
      uVar7 = *(uint *)(&DAT_14ad40094 +
                       ((longlong)*(int *)(&DAT_14ad40094 + (longlong)(int)lVar14 * 4) + uVar9) * 4)
      ;
      fVar33 = fVar35;
      if ((uVar7 & 0xd) != 0xc) {
        fVar33 = fVar17;
      }
      fVar24 = fVar28;
      if (3 < (uVar7 & 0xf)) {
        fVar24 = fVar33;
      }
      fVar33 = fVar35;
      if (7 < (uVar7 & 0xf)) {
        fVar33 = fVar28;
      }
      if ((uVar7 & 1) != 0) {
        fVar33 = -fVar33;
      }
      if ((uVar7 & 2) != 0) {
        fVar24 = -fVar24;
      }
      lVar15 = (longlong)*(int *)(&DAT_14ad40090 + uVar16 * 4) + uVar12;
      uVar7 = *(uint *)(&DAT_14ad40094 +
                       ((longlong)*(int *)(&DAT_14ad40094 + (longlong)(int)lVar15 * 4) + uVar9) * 4)
      ;
      fVar20 = fVar37;
      if ((uVar7 & 0xd) != 0xc) {
        fVar20 = fVar17;
      }
      fVar26 = fVar28;
      if (3 < (uVar7 & 0xf)) {
        fVar26 = fVar20;
      }
      fVar20 = fVar37;
      if (7 < (uVar7 & 0xf)) {
        fVar20 = fVar28;
      }
      if ((uVar7 & 1) != 0) {
        fVar20 = -fVar20;
      }
      if ((uVar7 & 2) != 0) {
        fVar26 = -fVar26;
      }
      uVar7 = *(uint *)(&DAT_14ad40094 +
                       ((longlong)*(int *)(&DAT_14ad40090 + lVar14 * 4) + uVar9) * 4);
      fVar39 = fVar35;
      if ((uVar7 & 0xd) != 0xc) {
        fVar39 = fVar17;
      }
      fVar31 = fVar30;
      if (3 < (uVar7 & 0xf)) {
        fVar31 = fVar39;
      }
      fVar39 = fVar35;
      if (7 < (uVar7 & 0xf)) {
        fVar39 = fVar30;
      }
      if ((uVar7 & 1) != 0) {
        fVar39 = -fVar39;
      }
      if ((uVar7 & 2) != 0) {
        fVar31 = -fVar31;
      }
      uVar7 = *(uint *)(&DAT_14ad40094 +
                       (uVar9 + (longlong)*(int *)(&DAT_14ad40090 + lVar15 * 4)) * 4);
      fVar21 = fVar37;
      if ((uVar7 & 0xd) != 0xc) {
        fVar21 = fVar17;
      }
      fVar17 = fVar30;
      if (3 < (uVar7 & 0xf)) {
        fVar17 = fVar21;
      }
      fVar21 = fVar37;
      if (7 < (uVar7 & 0xf)) {
        fVar21 = fVar30;
      }
      if ((uVar7 & 1) != 0) {
        fVar21 = -fVar21;
      }
      if ((uVar7 & 2) != 0) {
        fVar17 = -fVar17;
      }
      uVar7 = *(uint *)(&DAT_14ad40090 +
                       (longlong)
                       (int)((longlong)*(int *)(&DAT_14ad40094 + (longlong)(int)lVar14 * 4) + uVar9)
                       * 4);
      fVar32 = fVar35;
      if ((uVar7 & 0xd) != 0xc) {
        fVar32 = fVar34;
      }
      fVar29 = fVar28;
      if (3 < (uVar7 & 0xf)) {
        fVar29 = fVar32;
      }
      fVar32 = fVar35;
      if (7 < (uVar7 & 0xf)) {
        fVar32 = fVar28;
      }
      if ((uVar7 & 1) != 0) {
        fVar32 = -fVar32;
      }
      if ((uVar7 & 2) != 0) {
        fVar29 = -fVar29;
      }
      uVar7 = *(uint *)(&DAT_14ad40090 +
                       (longlong)
                       (int)((longlong)*(int *)(&DAT_14ad40094 + (longlong)(int)lVar15 * 4) + uVar9)
                       * 4);
      fVar25 = fVar37;
      if ((uVar7 & 0xd) != 0xc) {
        fVar25 = fVar34;
      }
      fVar36 = fVar28;
      if (3 < (uVar7 & 0xf)) {
        fVar36 = fVar25;
      }
      fVar25 = fVar37;
      if (7 < (uVar7 & 0xf)) {
        fVar25 = fVar28;
      }
      if ((uVar7 & 1) != 0) {
        fVar25 = -fVar25;
      }
      if ((uVar7 & 2) != 0) {
        fVar36 = -fVar36;
      }
      uVar7 = *(uint *)(&DAT_14ad40090 +
                       (longlong)(int)((longlong)*(int *)(&DAT_14ad40090 + lVar14 * 4) + uVar9) * 4)
      ;
      fVar38 = fVar35;
      if ((uVar7 & 0xd) != 0xc) {
        fVar38 = fVar34;
      }
      fVar27 = fVar30;
      if (3 < (uVar7 & 0xf)) {
        fVar27 = fVar38;
      }
      if (7 < (uVar7 & 0xf)) {
        fVar35 = fVar30;
      }
      if ((uVar7 & 1) != 0) {
        fVar35 = -fVar35;
      }
      if ((uVar7 & 2) != 0) {
        fVar27 = -fVar27;
      }
      uVar7 = *(uint *)(&DAT_14ad40090 +
                       (longlong)(int)(uVar9 + (longlong)*(int *)(&DAT_14ad40090 + lVar15 * 4)) * 4)
      ;
      fVar38 = fVar37;
      if ((uVar7 & 0xd) != 0xc) {
        fVar38 = fVar34;
      }
      fVar22 = fVar30;
      if (3 < (uVar7 & 0xf)) {
        fVar22 = fVar38;
      }
      fVar38 = fVar37;
      if (7 < (uVar7 & 0xf)) {
        fVar38 = fVar30;
      }
      if ((uVar7 & 1) != 0) {
        fVar38 = -fVar38;
      }
      if ((uVar7 & 2) != 0) {
        fVar22 = -fVar22;
      }
      fVar37 = ((fVar37 * 6.0 + -15.0) * fVar37 + 10.0) * fVar37 * fVar37 * fVar37;
      fVar17 = ((fVar39 + fVar31) - (fVar21 + fVar17)) * fVar37 + fVar21 + fVar17;
      fVar35 = ((fVar35 + fVar27) - (fVar38 + fVar22)) * fVar37 + fVar38 + fVar22;
      fVar35 = ((((fVar32 + fVar29) - (fVar25 + fVar36)) * fVar37 + fVar25 + fVar36) - fVar35) *
               fVar19 + fVar35;
      *(float *)((ulonglong)((uint)uVar3 * iVar4) + lVar6 + lVar13 * 4) =
           ((((((fVar33 + fVar24) - (fVar20 + fVar26)) * fVar37 + fVar20 + fVar26) - fVar17) *
             fVar19 + fVar17) - fVar35) *
           ((fVar34 * 6.0 + -15.0) * fVar34 + 10.0) * fVar34 * fVar34 * fVar34 + fVar35;
      lVar13 = lVar13 + 1;
    } while (iVar11 != (int)lVar13);
  }
  return;
}



// FUNCTION 1480399d4 FUN_1480399d4 body=1608 status=ok
// SIG undefined FUN_1480399d4(void)

void FUN_1480399d4(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  int *piVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  
  puVar8 = *(ushort **)(param_1 + 0x10);
  piVar9 = *(int **)(param_1 + 0x20);
  uVar1 = *puVar8;
  uVar13 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar8 + 1;
  iVar11 = *piVar9;
  lVar14 = 0;
  if (iVar11 <= (int)(uint)uVar1) {
    do {
      uVar13 = uVar13 - iVar11;
      iVar11 = piVar9[lVar14 + 1];
      lVar14 = lVar14 + 1;
    } while (iVar11 <= (int)uVar13);
  }
  fVar33 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar14 * 8) +
                     (longlong)(int)uVar13);
  uVar1 = puVar8[1];
  uVar13 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar8 + 2;
  iVar11 = *piVar9;
  lVar14 = 0;
  if (iVar11 <= (int)(uint)uVar1) {
    do {
      uVar13 = uVar13 - iVar11;
      iVar11 = piVar9[lVar14 + 1];
      lVar14 = lVar14 + 1;
    } while (iVar11 <= (int)uVar13);
  }
  fVar39 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar14 * 8) +
                     (longlong)(int)uVar13);
  uVar1 = puVar8[2];
  *(ushort **)(param_1 + 0x10) = puVar8 + 3;
  lVar14 = *(longlong *)(param_1 + 0x70);
  iVar11 = *(int *)(param_1 + 0x80);
  uVar2 = puVar8[3];
  *(ushort **)(param_1 + 0x10) = puVar8 + 4;
  iVar3 = *(int *)(param_1 + 0x40);
  if (0 < iVar3) {
    lVar10 = (ulonglong)((uint)uVar1 * iVar11) + lVar14;
    auVar21 = roundps(ZEXT416((uint)fVar33),ZEXT416((uint)fVar33),1);
    auVar18 = roundps(ZEXT416((uint)fVar39),ZEXT416((uint)fVar39),1);
    uVar16 = (ulonglong)((int)auVar21._0_4_ & 0xff);
    uVar12 = (ulonglong)((int)auVar18._0_4_ & 0xff);
    fVar33 = fVar33 - auVar21._0_4_;
    fVar39 = fVar39 - auVar18._0_4_;
    fVar37 = fVar33 + -1.0;
    fVar30 = fVar39 + -1.0;
    lVar15 = (longlong)*(int *)(&DAT_14ad40090 + uVar16 * 4) + uVar12;
    iVar4 = *(int *)(&DAT_14ad40090 + lVar15 * 4);
    iVar5 = *(int *)(&DAT_14ad40094 + (longlong)(int)lVar15 * 4);
    lVar15 = (longlong)*(int *)(&DAT_14ad40094 + uVar16 * 4) + uVar12;
    iVar6 = *(int *)(&DAT_14ad40090 + lVar15 * 4);
    iVar7 = *(int *)(&DAT_14ad40094 + (longlong)(int)lVar15 * 4);
    fVar22 = ((fVar33 * 6.0 + -15.0) * fVar33 + 10.0) * fVar33 * fVar33 * fVar33;
    fVar23 = ((fVar39 * 6.0 + -15.0) * fVar39 + 10.0) * fVar39 * fVar39 * fVar39;
    lVar15 = 0;
    do {
      auVar18 = ZEXT416(*(uint *)(lVar10 + lVar15 * 4));
      auVar18 = roundps(auVar18,auVar18,1);
      uVar12 = (ulonglong)((int)auVar18._0_4_ & 0xff);
      fVar36 = *(float *)(lVar10 + lVar15 * 4) - auVar18._0_4_;
      fVar24 = fVar36 + -1.0;
      uVar13 = *(uint *)(&DAT_14ad40094 + (uVar12 + (longlong)iVar7) * 4);
      fVar38 = fVar37;
      if ((uVar13 & 0xd) != 0xc) {
        fVar38 = fVar24;
      }
      fVar19 = fVar30;
      if (3 < (uVar13 & 0xf)) {
        fVar19 = fVar38;
      }
      fVar38 = fVar37;
      if (7 < (uVar13 & 0xf)) {
        fVar38 = fVar30;
      }
      if ((uVar13 & 1) != 0) {
        fVar38 = -fVar38;
      }
      if ((uVar13 & 2) != 0) {
        fVar19 = -fVar19;
      }
      uVar13 = *(uint *)(&DAT_14ad40094 + (uVar12 + (longlong)iVar5) * 4);
      fVar17 = fVar33;
      if ((uVar13 & 0xd) != 0xc) {
        fVar17 = fVar24;
      }
      fVar26 = fVar30;
      if (3 < (uVar13 & 0xf)) {
        fVar26 = fVar17;
      }
      fVar17 = fVar33;
      if (7 < (uVar13 & 0xf)) {
        fVar17 = fVar30;
      }
      if ((uVar13 & 1) != 0) {
        fVar17 = -fVar17;
      }
      if ((uVar13 & 2) != 0) {
        fVar26 = -fVar26;
      }
      uVar13 = *(uint *)(&DAT_14ad40094 + (uVar12 + (longlong)iVar6) * 4);
      fVar27 = fVar37;
      if ((uVar13 & 0xd) != 0xc) {
        fVar27 = fVar24;
      }
      fVar28 = fVar39;
      if (3 < (uVar13 & 0xf)) {
        fVar28 = fVar27;
      }
      fVar27 = fVar37;
      if (7 < (uVar13 & 0xf)) {
        fVar27 = fVar39;
      }
      if ((uVar13 & 1) != 0) {
        fVar27 = -fVar27;
      }
      if ((uVar13 & 2) != 0) {
        fVar28 = -fVar28;
      }
      uVar13 = *(uint *)(&DAT_14ad40094 + (uVar12 + (longlong)iVar4) * 4);
      fVar25 = fVar33;
      if ((uVar13 & 0xd) != 0xc) {
        fVar25 = fVar24;
      }
      fVar24 = fVar39;
      if (3 < (uVar13 & 0xf)) {
        fVar24 = fVar25;
      }
      fVar25 = fVar33;
      if (7 < (uVar13 & 0xf)) {
        fVar25 = fVar39;
      }
      if ((uVar13 & 1) != 0) {
        fVar25 = -fVar25;
      }
      if ((uVar13 & 2) != 0) {
        fVar24 = -fVar24;
      }
      uVar13 = *(uint *)(&DAT_14ad40090 + (longlong)(int)(uVar12 + (longlong)iVar7) * 4);
      fVar32 = fVar37;
      if ((uVar13 & 0xd) != 0xc) {
        fVar32 = fVar36;
      }
      fVar29 = fVar30;
      if (3 < (uVar13 & 0xf)) {
        fVar29 = fVar32;
      }
      fVar32 = fVar37;
      if (7 < (uVar13 & 0xf)) {
        fVar32 = fVar30;
      }
      if ((uVar13 & 1) != 0) {
        fVar32 = -fVar32;
      }
      if ((uVar13 & 2) != 0) {
        fVar29 = -fVar29;
      }
      uVar13 = *(uint *)(&DAT_14ad40090 + (longlong)(int)(uVar12 + (longlong)iVar5) * 4);
      fVar35 = fVar33;
      if ((uVar13 & 0xd) != 0xc) {
        fVar35 = fVar36;
      }
      fVar41 = fVar30;
      if (3 < (uVar13 & 0xf)) {
        fVar41 = fVar35;
      }
      fVar35 = fVar33;
      if (7 < (uVar13 & 0xf)) {
        fVar35 = fVar30;
      }
      if ((uVar13 & 1) != 0) {
        fVar35 = -fVar35;
      }
      if ((uVar13 & 2) != 0) {
        fVar41 = -fVar41;
      }
      uVar13 = *(uint *)(&DAT_14ad40090 + (longlong)(int)(uVar12 + (longlong)iVar6) * 4);
      fVar31 = fVar37;
      if ((uVar13 & 0xd) != 0xc) {
        fVar31 = fVar36;
      }
      fVar20 = fVar39;
      if (3 < (uVar13 & 0xf)) {
        fVar20 = fVar31;
      }
      fVar31 = fVar37;
      if (7 < (uVar13 & 0xf)) {
        fVar31 = fVar39;
      }
      if ((uVar13 & 1) != 0) {
        fVar31 = -fVar31;
      }
      if ((uVar13 & 2) != 0) {
        fVar20 = -fVar20;
      }
      uVar13 = *(uint *)(&DAT_14ad40090 + (longlong)(int)(uVar12 + (longlong)iVar4) * 4);
      fVar34 = fVar33;
      if ((uVar13 & 0xd) != 0xc) {
        fVar34 = fVar36;
      }
      fVar40 = fVar39;
      if (3 < (uVar13 & 0xf)) {
        fVar40 = fVar34;
      }
      fVar34 = fVar33;
      if (7 < (uVar13 & 0xf)) {
        fVar34 = fVar39;
      }
      if ((uVar13 & 1) != 0) {
        fVar34 = -fVar34;
      }
      if ((uVar13 & 2) != 0) {
        fVar40 = -fVar40;
      }
      fVar24 = ((fVar27 + fVar28) - (fVar25 + fVar24)) * fVar22 + fVar25 + fVar24;
      fVar27 = ((fVar31 + fVar20) - (fVar34 + fVar40)) * fVar22 + fVar34 + fVar40;
      fVar27 = ((((fVar32 + fVar29) - (fVar35 + fVar41)) * fVar22 + fVar35 + fVar41) - fVar27) *
               fVar23 + fVar27;
      *(float *)((ulonglong)((uint)uVar2 * iVar11) + lVar14 + lVar15 * 4) =
           ((((((fVar38 + fVar19) - (fVar17 + fVar26)) * fVar22 + fVar17 + fVar26) - fVar24) *
             fVar23 + fVar24) - fVar27) *
           fVar36 * fVar36 * fVar36 * ((fVar36 * 6.0 + -15.0) * fVar36 + 10.0) + fVar27;
      lVar15 = lVar15 + 1;
    } while (iVar3 != (int)lVar15);
  }
  return;
}



// FUNCTION 14803a01c FUN_14803a01c body=1585 status=ok
// SIG undefined FUN_14803a01c(void)

void FUN_14803a01c(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  undefined1 auVar23 [12];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  
  puVar5 = *(ushort **)(param_1 + 0x10);
  uVar1 = *puVar5;
  *(ushort **)(param_1 + 0x10) = puVar5 + 1;
  lVar6 = *(longlong *)(param_1 + 0x70);
  iVar4 = *(int *)(param_1 + 0x80);
  uVar2 = puVar5[1];
  *(ushort **)(param_1 + 0x10) = puVar5 + 2;
  uVar3 = puVar5[2];
  uVar12 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar5 + 3;
  iVar8 = **(int **)(param_1 + 0x20);
  lVar11 = 0;
  if (iVar8 <= (int)(uint)uVar3) {
    do {
      uVar12 = uVar12 - iVar8;
      iVar8 = (*(int **)(param_1 + 0x20))[lVar11 + 1];
      lVar11 = lVar11 + 1;
    } while (iVar8 <= (int)uVar12);
  }
  fVar32 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar11 * 8) +
                     (longlong)(int)uVar12);
  uVar3 = puVar5[3];
  *(ushort **)(param_1 + 0x10) = puVar5 + 4;
  iVar8 = *(int *)(param_1 + 0x40);
  if (0 < iVar8) {
    lVar11 = (ulonglong)((uint)uVar1 * iVar4) + lVar6;
    lVar7 = (ulonglong)((uint)uVar2 * iVar4) + lVar6;
    auVar20 = roundps(ZEXT416((uint)fVar32),ZEXT416((uint)fVar32),1);
    uVar13 = (ulonglong)((int)auVar20._0_4_ & 0xff);
    fVar32 = fVar32 - auVar20._0_4_;
    fVar25 = fVar32 + -1.0;
    fVar21 = ((fVar32 * 6.0 + -15.0) * fVar32 + 10.0) * fVar32 * fVar32 * fVar32;
    auVar23._4_8_ = 0;
    auVar23._0_4_ = fVar21;
    lVar14 = 0;
    do {
      auVar20._12_4_ = 0;
      auVar20._0_12_ = auVar23;
      auVar24 = roundps(auVar20,ZEXT416(*(uint *)(lVar11 + lVar14 * 4)),1);
      auVar20 = ZEXT416(*(uint *)(lVar7 + lVar14 * 4));
      auVar20 = roundps(auVar20,auVar20,1);
      uVar16 = (ulonglong)((int)auVar24._0_4_ & 0xff);
      uVar9 = (ulonglong)((int)auVar20._0_4_ & 0xff);
      fVar39 = *(float *)(lVar11 + lVar14 * 4) - auVar24._0_4_;
      fVar35 = fVar39 + -1.0;
      lVar15 = (longlong)*(int *)(&DAT_14ad40094 + uVar16 * 4) + uVar9;
      uVar12 = *(uint *)(&DAT_14ad40094 +
                        ((longlong)*(int *)(&DAT_14ad40094 + (longlong)(int)lVar15 * 4) + uVar13) *
                        4);
      fVar34 = fVar35;
      if ((uVar12 & 0xd) != 0xc) {
        fVar34 = fVar25;
      }
      fVar36 = *(float *)(lVar7 + lVar14 * 4) - auVar20._0_4_;
      fVar29 = fVar36 + -1.0;
      fVar17 = fVar29;
      if (3 < (uVar12 & 0xf)) {
        fVar17 = fVar34;
      }
      fVar34 = fVar35;
      if (7 < (uVar12 & 0xf)) {
        fVar34 = fVar29;
      }
      if ((uVar12 & 1) != 0) {
        fVar34 = -fVar34;
      }
      if ((uVar12 & 2) != 0) {
        fVar17 = -fVar17;
      }
      lVar10 = uVar9 + (longlong)*(int *)(&DAT_14ad40090 + uVar16 * 4);
      uVar12 = *(uint *)(&DAT_14ad40094 +
                        ((longlong)*(int *)(&DAT_14ad40094 + (longlong)(int)lVar10 * 4) + uVar13) *
                        4);
      fVar18 = fVar39;
      if ((uVar12 & 0xd) != 0xc) {
        fVar18 = fVar25;
      }
      fVar22 = fVar29;
      if (3 < (uVar12 & 0xf)) {
        fVar22 = fVar18;
      }
      fVar18 = fVar39;
      if (7 < (uVar12 & 0xf)) {
        fVar18 = fVar29;
      }
      if ((uVar12 & 1) != 0) {
        fVar18 = -fVar18;
      }
      if ((uVar12 & 2) != 0) {
        fVar22 = -fVar22;
      }
      uVar12 = *(uint *)(&DAT_14ad40094 +
                        ((longlong)*(int *)(&DAT_14ad40090 + lVar15 * 4) + uVar13) * 4);
      fVar40 = fVar35;
      if ((uVar12 & 0xd) != 0xc) {
        fVar40 = fVar25;
      }
      fVar28 = fVar36;
      if (3 < (uVar12 & 0xf)) {
        fVar28 = fVar40;
      }
      fVar40 = fVar35;
      if (7 < (uVar12 & 0xf)) {
        fVar40 = fVar36;
      }
      if ((uVar12 & 1) != 0) {
        fVar40 = -fVar40;
      }
      if ((uVar12 & 2) != 0) {
        fVar28 = -fVar28;
      }
      uVar12 = *(uint *)(&DAT_14ad40094 +
                        ((longlong)*(int *)(&DAT_14ad40090 + lVar10 * 4) + uVar13) * 4);
      fVar19 = fVar39;
      if ((uVar12 & 0xd) != 0xc) {
        fVar19 = fVar25;
      }
      fVar26 = fVar36;
      if (3 < (uVar12 & 0xf)) {
        fVar26 = fVar19;
      }
      fVar19 = fVar39;
      if (7 < (uVar12 & 0xf)) {
        fVar19 = fVar36;
      }
      if ((uVar12 & 1) != 0) {
        fVar19 = -fVar19;
      }
      if ((uVar12 & 2) != 0) {
        fVar26 = -fVar26;
      }
      uVar12 = *(uint *)(&DAT_14ad40090 +
                        (longlong)
                        (int)((longlong)*(int *)(&DAT_14ad40094 + (longlong)(int)lVar15 * 4) +
                             uVar13) * 4);
      fVar33 = fVar35;
      if ((uVar12 & 0xd) != 0xc) {
        fVar33 = fVar32;
      }
      fVar37 = fVar29;
      if (3 < (uVar12 & 0xf)) {
        fVar37 = fVar33;
      }
      fVar33 = fVar35;
      if (7 < (uVar12 & 0xf)) {
        fVar33 = fVar29;
      }
      if ((uVar12 & 1) != 0) {
        fVar33 = -fVar33;
      }
      if ((uVar12 & 2) != 0) {
        fVar37 = -fVar37;
      }
      uVar12 = *(uint *)(&DAT_14ad40090 +
                        (longlong)
                        (int)((longlong)*(int *)(&DAT_14ad40094 + (longlong)(int)lVar10 * 4) +
                             uVar13) * 4);
      fVar38 = fVar39;
      if ((uVar12 & 0xd) != 0xc) {
        fVar38 = fVar32;
      }
      fVar31 = fVar29;
      if (3 < (uVar12 & 0xf)) {
        fVar31 = fVar38;
      }
      fVar38 = fVar39;
      if (7 < (uVar12 & 0xf)) {
        fVar38 = fVar29;
      }
      if ((uVar12 & 1) != 0) {
        fVar38 = -fVar38;
      }
      if ((uVar12 & 2) != 0) {
        fVar31 = -fVar31;
      }
      uVar12 = *(uint *)(&DAT_14ad40090 +
                        (longlong)(int)((longlong)*(int *)(&DAT_14ad40090 + lVar15 * 4) + uVar13) *
                        4);
      fVar29 = fVar35;
      if ((uVar12 & 0xd) != 0xc) {
        fVar29 = fVar32;
      }
      fVar30 = fVar36;
      if (3 < (uVar12 & 0xf)) {
        fVar30 = fVar29;
      }
      if (7 < (uVar12 & 0xf)) {
        fVar35 = fVar36;
      }
      if ((uVar12 & 1) != 0) {
        fVar35 = -fVar35;
      }
      if ((uVar12 & 2) != 0) {
        fVar30 = -fVar30;
      }
      uVar12 = *(uint *)(&DAT_14ad40090 +
                        (longlong)(int)((longlong)*(int *)(&DAT_14ad40090 + lVar10 * 4) + uVar13) *
                        4);
      fVar29 = fVar39;
      if ((uVar12 & 0xd) != 0xc) {
        fVar29 = fVar32;
      }
      fVar27 = fVar36;
      if (3 < (uVar12 & 0xf)) {
        fVar27 = fVar29;
      }
      fVar29 = fVar39;
      if (7 < (uVar12 & 0xf)) {
        fVar29 = fVar36;
      }
      if ((uVar12 & 1) != 0) {
        fVar29 = -fVar29;
      }
      if ((uVar12 & 2) != 0) {
        fVar27 = -fVar27;
      }
      auVar23 = ZEXT812(0xc1700000);
      fVar39 = ((fVar39 * 6.0 + -15.0) * fVar39 + 10.0) * fVar39 * fVar39 * fVar39;
      fVar36 = ((fVar36 * 6.0 + -15.0) * fVar36 + 10.0) * fVar36 * fVar36 * fVar36;
      fVar40 = ((fVar40 + fVar28) - (fVar19 + fVar26)) * fVar39 + fVar19 + fVar26;
      fVar35 = ((fVar35 + fVar30) - (fVar29 + fVar27)) * fVar39 + fVar29 + fVar27;
      fVar35 = ((((fVar33 + fVar37) - (fVar38 + fVar31)) * fVar39 + fVar38 + fVar31) - fVar35) *
               fVar36 + fVar35;
      *(float *)((ulonglong)((uint)uVar3 * iVar4) + lVar6 + lVar14 * 4) =
           ((((((fVar34 + fVar17) - (fVar18 + fVar22)) * fVar39 + fVar18 + fVar22) - fVar40) *
             fVar36 + fVar40) - fVar35) * fVar21 + fVar35;
      lVar14 = lVar14 + 1;
    } while (iVar8 != (int)lVar14);
  }
  return;
}



// FUNCTION 14803a64e FUN_14803a64e body=1616 status=ok
// SIG undefined FUN_14803a64e(void)

void FUN_14803a64e(longlong param_1)

{
  longlong lVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  int *piVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  piVar7 = *(int **)(param_1 + 0x20);
  uVar2 = *puVar6;
  uVar9 = (uint)uVar2;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  iVar15 = *piVar7;
  lVar16 = 0;
  if (iVar15 <= (int)(uint)uVar2) {
    do {
      uVar9 = uVar9 - iVar15;
      iVar15 = piVar7[lVar16 + 1];
      lVar16 = lVar16 + 1;
    } while (iVar15 <= (int)uVar9);
  }
  lVar8 = *(longlong *)(param_1 + 0x70);
  fVar29 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar16 * 8) +
                     (longlong)(int)uVar9);
  uVar2 = puVar6[1];
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  iVar15 = *(int *)(param_1 + 0x80);
  uVar3 = puVar6[2];
  uVar9 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar10 = *piVar7;
  lVar16 = 0;
  if (iVar10 <= (int)(uint)uVar3) {
    do {
      uVar9 = uVar9 - iVar10;
      iVar10 = piVar7[lVar16 + 1];
      lVar16 = lVar16 + 1;
    } while (iVar10 <= (int)uVar9);
  }
  fVar36 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar16 * 8) +
                     (longlong)(int)uVar9);
  uVar3 = puVar6[3];
  *(ushort **)(param_1 + 0x10) = puVar6 + 4;
  iVar10 = *(int *)(param_1 + 0x40);
  if (0 < iVar10) {
    lVar16 = (ulonglong)((uint)uVar2 * iVar15) + lVar8;
    auVar21 = roundps(ZEXT416((uint)fVar29),ZEXT416((uint)fVar29),1);
    auVar18 = roundps(ZEXT416((uint)fVar36),ZEXT416((uint)fVar36),1);
    uVar11 = (ulonglong)((int)auVar21._0_4_ & 0xff);
    uVar14 = (ulonglong)((int)auVar18._0_4_ & 0xff);
    fVar29 = fVar29 - auVar21._0_4_;
    fVar36 = fVar36 - auVar18._0_4_;
    fVar32 = fVar29 + -1.0;
    fVar22 = fVar36 + -1.0;
    iVar4 = *(int *)(&DAT_14ad40090 + uVar11 * 4);
    iVar5 = *(int *)(&DAT_14ad40094 + uVar11 * 4);
    fVar24 = ((fVar29 * 6.0 + -15.0) * fVar29 + 10.0) * fVar29 * fVar29 * fVar29;
    lVar13 = 0;
    do {
      auVar18 = ZEXT416(*(uint *)(lVar16 + lVar13 * 4));
      auVar18 = roundps(auVar18,auVar18,1);
      uVar11 = (ulonglong)((int)auVar18._0_4_ & 0xff);
      fVar39 = *(float *)(lVar16 + lVar13 * 4) - auVar18._0_4_;
      fVar40 = fVar39 + -1.0;
      lVar1 = uVar11 + (longlong)iVar5;
      uVar9 = *(uint *)(&DAT_14ad40094 +
                       ((longlong)*(int *)(&DAT_14ad40094 + (longlong)(int)lVar1 * 4) + uVar14) * 4)
      ;
      fVar35 = fVar32;
      if ((uVar9 & 0xd) != 0xc) {
        fVar35 = fVar22;
      }
      fVar19 = fVar40;
      if (3 < (uVar9 & 0xf)) {
        fVar19 = fVar35;
      }
      fVar35 = fVar32;
      if (7 < (uVar9 & 0xf)) {
        fVar35 = fVar40;
      }
      if ((uVar9 & 1) != 0) {
        fVar35 = -fVar35;
      }
      if ((uVar9 & 2) != 0) {
        fVar19 = -fVar19;
      }
      lVar12 = uVar11 + (longlong)iVar4;
      uVar9 = *(uint *)(&DAT_14ad40094 +
                       ((longlong)*(int *)(&DAT_14ad40094 + (longlong)(int)lVar12 * 4) + uVar14) * 4
                       );
      fVar17 = fVar29;
      if ((uVar9 & 0xd) != 0xc) {
        fVar17 = fVar22;
      }
      fVar25 = fVar40;
      if (3 < (uVar9 & 0xf)) {
        fVar25 = fVar17;
      }
      fVar17 = fVar29;
      if (7 < (uVar9 & 0xf)) {
        fVar17 = fVar40;
      }
      if ((uVar9 & 1) != 0) {
        fVar17 = -fVar17;
      }
      if ((uVar9 & 2) != 0) {
        fVar25 = -fVar25;
      }
      uVar9 = *(uint *)(&DAT_14ad40094 +
                       ((longlong)*(int *)(&DAT_14ad40090 + lVar1 * 4) + uVar14) * 4);
      fVar26 = fVar32;
      if ((uVar9 & 0xd) != 0xc) {
        fVar26 = fVar22;
      }
      fVar27 = fVar39;
      if (3 < (uVar9 & 0xf)) {
        fVar27 = fVar26;
      }
      fVar26 = fVar32;
      if (7 < (uVar9 & 0xf)) {
        fVar26 = fVar39;
      }
      if ((uVar9 & 1) != 0) {
        fVar26 = -fVar26;
      }
      if ((uVar9 & 2) != 0) {
        fVar27 = -fVar27;
      }
      uVar9 = *(uint *)(&DAT_14ad40094 +
                       ((longlong)*(int *)(&DAT_14ad40090 + lVar12 * 4) + uVar14) * 4);
      fVar23 = fVar29;
      if ((uVar9 & 0xd) != 0xc) {
        fVar23 = fVar22;
      }
      fVar30 = fVar39;
      if (3 < (uVar9 & 0xf)) {
        fVar30 = fVar23;
      }
      fVar23 = fVar29;
      if (7 < (uVar9 & 0xf)) {
        fVar23 = fVar39;
      }
      if ((uVar9 & 1) != 0) {
        fVar23 = -fVar23;
      }
      if ((uVar9 & 2) != 0) {
        fVar30 = -fVar30;
      }
      uVar9 = *(uint *)(&DAT_14ad40090 +
                       (longlong)
                       (int)((longlong)*(int *)(&DAT_14ad40094 + (longlong)(int)lVar1 * 4) + uVar14)
                       * 4);
      fVar31 = fVar32;
      if ((uVar9 & 0xd) != 0xc) {
        fVar31 = fVar36;
      }
      fVar34 = fVar40;
      if (3 < (uVar9 & 0xf)) {
        fVar34 = fVar31;
      }
      fVar31 = fVar32;
      if (7 < (uVar9 & 0xf)) {
        fVar31 = fVar40;
      }
      if ((uVar9 & 1) != 0) {
        fVar31 = -fVar31;
      }
      if ((uVar9 & 2) != 0) {
        fVar34 = -fVar34;
      }
      uVar9 = *(uint *)(&DAT_14ad40090 +
                       (longlong)
                       (int)((longlong)*(int *)(&DAT_14ad40094 + (longlong)(int)lVar12 * 4) + uVar14
                            ) * 4);
      fVar28 = fVar29;
      if ((uVar9 & 0xd) != 0xc) {
        fVar28 = fVar36;
      }
      fVar20 = fVar40;
      if (3 < (uVar9 & 0xf)) {
        fVar20 = fVar28;
      }
      fVar28 = fVar29;
      if (7 < (uVar9 & 0xf)) {
        fVar28 = fVar40;
      }
      if ((uVar9 & 1) != 0) {
        fVar28 = -fVar28;
      }
      if ((uVar9 & 2) != 0) {
        fVar20 = -fVar20;
      }
      uVar9 = *(uint *)(&DAT_14ad40090 +
                       (longlong)(int)((longlong)*(int *)(&DAT_14ad40090 + lVar1 * 4) + uVar14) * 4)
      ;
      fVar40 = fVar32;
      if ((uVar9 & 0xd) != 0xc) {
        fVar40 = fVar36;
      }
      fVar41 = fVar39;
      if (3 < (uVar9 & 0xf)) {
        fVar41 = fVar40;
      }
      fVar40 = fVar32;
      if (7 < (uVar9 & 0xf)) {
        fVar40 = fVar39;
      }
      if ((uVar9 & 1) != 0) {
        fVar40 = -fVar40;
      }
      if ((uVar9 & 2) != 0) {
        fVar41 = -fVar41;
      }
      uVar9 = *(uint *)(&DAT_14ad40090 +
                       (longlong)(int)((longlong)*(int *)(&DAT_14ad40090 + lVar12 * 4) + uVar14) * 4
                       );
      fVar33 = fVar29;
      if ((uVar9 & 0xd) != 0xc) {
        fVar33 = fVar36;
      }
      fVar37 = fVar39;
      if (3 < (uVar9 & 0xf)) {
        fVar37 = fVar33;
      }
      fVar33 = fVar29;
      if (7 < (uVar9 & 0xf)) {
        fVar33 = fVar39;
      }
      if ((uVar9 & 1) != 0) {
        fVar33 = -fVar33;
      }
      if ((uVar9 & 2) != 0) {
        fVar37 = -fVar37;
      }
      fVar38 = fVar39 * fVar39 * fVar39 * ((fVar39 * 6.0 + -15.0) * fVar39 + 10.0);
      fVar39 = ((fVar26 + fVar27) - (fVar23 + fVar30)) * fVar24 + fVar23 + fVar30;
      fVar40 = ((fVar40 + fVar41) - (fVar33 + fVar37)) * fVar24 + fVar33 + fVar37;
      fVar40 = ((((fVar31 + fVar34) - (fVar28 + fVar20)) * fVar24 + fVar28 + fVar20) - fVar40) *
               fVar38 + fVar40;
      *(float *)((ulonglong)((uint)uVar3 * iVar15) + lVar8 + lVar13 * 4) =
           ((((((fVar35 + fVar19) - (fVar17 + fVar25)) * fVar24 + fVar17 + fVar25) - fVar39) *
             fVar38 + fVar39) - fVar40) *
           ((fVar36 * 6.0 + -15.0) * fVar36 + 10.0) * fVar36 * fVar36 * fVar36 + fVar40;
      lVar13 = lVar13 + 1;
    } while (iVar10 != (int)lVar13);
  }
  return;
}



// FUNCTION 14803ac9e FUN_14803ac9e body=1611 status=ok
// SIG undefined FUN_14803ac9e(void)

void FUN_14803ac9e(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  int *piVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  
  puVar4 = *(ushort **)(param_1 + 0x10);
  piVar5 = *(int **)(param_1 + 0x20);
  uVar1 = *puVar4;
  *(ushort **)(param_1 + 0x10) = puVar4 + 1;
  lVar6 = *(longlong *)(param_1 + 0x70);
  iVar3 = *(int *)(param_1 + 0x80);
  uVar2 = puVar4[1];
  uVar9 = (uint)uVar2;
  *(ushort **)(param_1 + 0x10) = puVar4 + 2;
  iVar14 = *piVar5;
  lVar10 = 0;
  if (iVar14 <= (int)(uint)uVar2) {
    do {
      uVar9 = uVar9 - iVar14;
      iVar14 = piVar5[lVar10 + 1];
      lVar10 = lVar10 + 1;
    } while (iVar14 <= (int)uVar9);
  }
  fVar38 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar10 * 8) +
                     (longlong)(int)uVar9);
  uVar2 = puVar4[2];
  uVar9 = (uint)uVar2;
  *(ushort **)(param_1 + 0x10) = puVar4 + 3;
  iVar14 = *piVar5;
  lVar10 = 0;
  if (iVar14 <= (int)(uint)uVar2) {
    do {
      uVar9 = uVar9 - iVar14;
      iVar14 = piVar5[lVar10 + 1];
      lVar10 = lVar10 + 1;
    } while (iVar14 <= (int)uVar9);
  }
  fVar22 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar10 * 8) +
                     (longlong)(int)uVar9);
  uVar2 = puVar4[3];
  *(ushort **)(param_1 + 0x10) = puVar4 + 4;
  iVar14 = *(int *)(param_1 + 0x40);
  if (0 < iVar14) {
    lVar10 = (ulonglong)((uint)uVar1 * iVar3) + lVar6;
    auVar21 = roundps(ZEXT416((uint)fVar38),ZEXT416((uint)fVar38),1);
    auVar17 = roundps(ZEXT416((uint)fVar22),ZEXT416((uint)fVar22),1);
    uVar11 = (ulonglong)((int)auVar21._0_4_ & 0xff);
    uVar12 = (ulonglong)((int)auVar17._0_4_ & 0xff);
    fVar38 = fVar38 - auVar21._0_4_;
    fVar22 = fVar22 - auVar17._0_4_;
    fVar34 = fVar38 + -1.0;
    fVar26 = fVar22 + -1.0;
    fVar24 = ((fVar38 * 6.0 + -15.0) * fVar38 + 10.0) * fVar38 * fVar38 * fVar38;
    lVar13 = 0;
    do {
      auVar17 = ZEXT416(*(uint *)(lVar10 + lVar13 * 4));
      auVar17 = roundps(auVar17,auVar17,1);
      uVar7 = (ulonglong)((int)auVar17._0_4_ & 0xff);
      fVar23 = *(float *)(lVar10 + lVar13 * 4) - auVar17._0_4_;
      fVar37 = fVar23 + -1.0;
      lVar15 = (longlong)*(int *)(&DAT_14ad40094 + uVar7 * 4) + uVar11;
      uVar9 = *(uint *)(&DAT_14ad40094 +
                       ((longlong)*(int *)(&DAT_14ad40094 + (longlong)(int)lVar15 * 4) + uVar12) * 4
                       );
      fVar36 = fVar37;
      if ((uVar9 & 0xd) != 0xc) {
        fVar36 = fVar26;
      }
      fVar18 = fVar34;
      if (3 < (uVar9 & 0xf)) {
        fVar18 = fVar36;
      }
      fVar36 = fVar37;
      if (7 < (uVar9 & 0xf)) {
        fVar36 = fVar34;
      }
      if ((uVar9 & 1) != 0) {
        fVar36 = -fVar36;
      }
      if ((uVar9 & 2) != 0) {
        fVar18 = -fVar18;
      }
      lVar8 = (longlong)*(int *)(&DAT_14ad40090 + uVar7 * 4) + uVar11;
      uVar9 = *(uint *)(&DAT_14ad40094 +
                       ((longlong)*(int *)(&DAT_14ad40094 + (longlong)(int)lVar8 * 4) + uVar12) * 4)
      ;
      fVar25 = fVar23;
      if ((uVar9 & 0xd) != 0xc) {
        fVar25 = fVar26;
      }
      fVar28 = fVar34;
      if (3 < (uVar9 & 0xf)) {
        fVar28 = fVar25;
      }
      fVar25 = fVar23;
      if (7 < (uVar9 & 0xf)) {
        fVar25 = fVar34;
      }
      if ((uVar9 & 1) != 0) {
        fVar25 = -fVar25;
      }
      if ((uVar9 & 2) != 0) {
        fVar28 = -fVar28;
      }
      uVar9 = *(uint *)(&DAT_14ad40094 +
                       ((longlong)*(int *)(&DAT_14ad40090 + lVar15 * 4) + uVar12) * 4);
      fVar16 = fVar37;
      if ((uVar9 & 0xd) != 0xc) {
        fVar16 = fVar26;
      }
      fVar30 = fVar38;
      if (3 < (uVar9 & 0xf)) {
        fVar30 = fVar16;
      }
      fVar16 = fVar37;
      if (7 < (uVar9 & 0xf)) {
        fVar16 = fVar38;
      }
      if ((uVar9 & 1) != 0) {
        fVar16 = -fVar16;
      }
      if ((uVar9 & 2) != 0) {
        fVar30 = -fVar30;
      }
      uVar9 = *(uint *)(&DAT_14ad40094 +
                       ((longlong)*(int *)(&DAT_14ad40090 + lVar8 * 4) + uVar12) * 4);
      fVar32 = fVar23;
      if ((uVar9 & 0xd) != 0xc) {
        fVar32 = fVar26;
      }
      fVar31 = fVar38;
      if (3 < (uVar9 & 0xf)) {
        fVar31 = fVar32;
      }
      fVar32 = fVar23;
      if (7 < (uVar9 & 0xf)) {
        fVar32 = fVar38;
      }
      if ((uVar9 & 1) != 0) {
        fVar32 = -fVar32;
      }
      if ((uVar9 & 2) != 0) {
        fVar31 = -fVar31;
      }
      uVar9 = *(uint *)(&DAT_14ad40090 +
                       (longlong)
                       (int)((longlong)*(int *)(&DAT_14ad40094 + (longlong)(int)lVar15 * 4) + uVar12
                            ) * 4);
      fVar35 = fVar37;
      if ((uVar9 & 0xd) != 0xc) {
        fVar35 = fVar22;
      }
      fVar40 = fVar34;
      if (3 < (uVar9 & 0xf)) {
        fVar40 = fVar35;
      }
      fVar35 = fVar37;
      if (7 < (uVar9 & 0xf)) {
        fVar35 = fVar34;
      }
      if ((uVar9 & 1) != 0) {
        fVar35 = -fVar35;
      }
      if ((uVar9 & 2) != 0) {
        fVar40 = -fVar40;
      }
      uVar9 = *(uint *)(&DAT_14ad40090 +
                       (longlong)
                       (int)((longlong)*(int *)(&DAT_14ad40094 + (longlong)(int)lVar8 * 4) + uVar12)
                       * 4);
      fVar27 = fVar23;
      if ((uVar9 & 0xd) != 0xc) {
        fVar27 = fVar22;
      }
      fVar29 = fVar34;
      if (3 < (uVar9 & 0xf)) {
        fVar29 = fVar27;
      }
      fVar27 = fVar23;
      if (7 < (uVar9 & 0xf)) {
        fVar27 = fVar34;
      }
      if ((uVar9 & 1) != 0) {
        fVar27 = -fVar27;
      }
      if ((uVar9 & 2) != 0) {
        fVar29 = -fVar29;
      }
      uVar9 = *(uint *)(&DAT_14ad40090 +
                       (longlong)(int)((longlong)*(int *)(&DAT_14ad40090 + lVar15 * 4) + uVar12) * 4
                       );
      fVar39 = fVar37;
      if ((uVar9 & 0xd) != 0xc) {
        fVar39 = fVar22;
      }
      fVar33 = fVar38;
      if (3 < (uVar9 & 0xf)) {
        fVar33 = fVar39;
      }
      if (7 < (uVar9 & 0xf)) {
        fVar37 = fVar38;
      }
      if ((uVar9 & 1) != 0) {
        fVar37 = -fVar37;
      }
      if ((uVar9 & 2) != 0) {
        fVar33 = -fVar33;
      }
      uVar9 = *(uint *)(&DAT_14ad40090 +
                       (longlong)(int)((longlong)*(int *)(&DAT_14ad40090 + lVar8 * 4) + uVar12) * 4)
      ;
      fVar39 = fVar23;
      if ((uVar9 & 0xd) != 0xc) {
        fVar39 = fVar22;
      }
      fVar19 = fVar38;
      if (3 < (uVar9 & 0xf)) {
        fVar19 = fVar39;
      }
      fVar39 = fVar23;
      if (7 < (uVar9 & 0xf)) {
        fVar39 = fVar38;
      }
      if ((uVar9 & 1) != 0) {
        fVar39 = -fVar39;
      }
      if ((uVar9 & 2) != 0) {
        fVar19 = -fVar19;
      }
      fVar20 = fVar23 * fVar23 * fVar23 * ((fVar23 * 6.0 + -15.0) * fVar23 + 10.0);
      fVar23 = ((fVar16 + fVar30) - (fVar32 + fVar31)) * fVar20 + fVar32 + fVar31;
      fVar37 = ((fVar37 + fVar33) - (fVar39 + fVar19)) * fVar20 + fVar39 + fVar19;
      fVar37 = ((((fVar35 + fVar40) - (fVar27 + fVar29)) * fVar20 + fVar27 + fVar29) - fVar37) *
               fVar24 + fVar37;
      *(float *)((ulonglong)((uint)uVar2 * iVar3) + lVar6 + lVar13 * 4) =
           ((((((fVar36 + fVar18) - (fVar25 + fVar28)) * fVar20 + fVar25 + fVar28) - fVar23) *
             fVar24 + fVar23) - fVar37) *
           ((fVar22 * 6.0 + -15.0) * fVar22 + 10.0) * fVar22 * fVar22 * fVar22 + fVar37;
      lVar13 = lVar13 + 1;
    } while (iVar14 != (int)lVar13);
  }
  return;
}



// FUNCTION 14803b2ea FUN_14803b2ea body=1715 status=ok
// SIG undefined FUN_14803b2ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14803b2ea(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  longlong lVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  
  puVar2 = *(ushort **)(param_1 + 0x10);
  piVar3 = *(int **)(param_1 + 0x20);
  uVar1 = *puVar2;
  uVar7 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 1;
  iVar6 = *piVar3;
  lVar8 = 0;
  if (iVar6 <= (int)(uint)uVar1) {
    do {
      uVar7 = uVar7 - iVar6;
      iVar6 = piVar3[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar6 <= (int)uVar7);
  }
  lVar10 = *(longlong *)(param_1 + 0x18);
  fVar30 = *(float *)(*(longlong *)(lVar10 + lVar8 * 8) + (longlong)(int)uVar7);
  uVar1 = puVar2[1];
  uVar7 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 2;
  iVar6 = *piVar3;
  lVar8 = 0;
  if (iVar6 <= (int)(uint)uVar1) {
    do {
      uVar7 = uVar7 - iVar6;
      iVar6 = piVar3[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar6 <= (int)uVar7);
  }
  fVar31 = *(float *)(*(longlong *)(lVar10 + lVar8 * 8) + (longlong)(int)uVar7);
  uVar1 = puVar2[2];
  uVar7 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 3;
  iVar6 = *piVar3;
  lVar8 = 0;
  if (iVar6 <= (int)(uint)uVar1) {
    do {
      uVar7 = uVar7 - iVar6;
      iVar6 = piVar3[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar6 <= (int)uVar7);
  }
  fVar12 = *(float *)(*(longlong *)(lVar10 + lVar8 * 8) + (longlong)(int)uVar7);
  uVar1 = puVar2[3];
  *(ushort **)(param_1 + 0x10) = puVar2 + 4;
  auVar4 = _DAT_149931e80;
  iVar6 = *(int *)(param_1 + 0x40);
  if (0 < (longlong)iVar6) {
    auVar17 = roundps(ZEXT416((uint)fVar30),ZEXT416((uint)fVar30),1);
    auVar19 = roundps(ZEXT416((uint)fVar31),ZEXT416((uint)fVar31),1);
    auVar13 = roundps(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12),1);
    uVar9 = (ulonglong)((int)auVar17._0_4_ & 0xff);
    uVar11 = (ulonglong)((int)auVar19._0_4_ & 0xff);
    uVar5 = (ulonglong)((int)auVar13._0_4_ & 0xff);
    fVar30 = fVar30 - auVar17._0_4_;
    fVar31 = fVar31 - auVar19._0_4_;
    fVar12 = fVar12 - auVar13._0_4_;
    fVar18 = fVar30 + -1.0;
    fVar21 = fVar12 + -1.0;
    lVar8 = (longlong)*(int *)(&DAT_14ad40090 + uVar9 * 4) + uVar11;
    lVar10 = (longlong)*(int *)(&DAT_14ad40094 + uVar9 * 4) + uVar11;
    uVar7 = *(uint *)(&DAT_14ad40094 +
                     ((longlong)*(int *)(&DAT_14ad40094 + (longlong)(int)lVar10 * 4) + uVar5) * 4);
    fVar20 = fVar18;
    if ((uVar7 & 0xd) != 0xc) {
      fVar20 = fVar21;
    }
    fVar27 = fVar31 + -1.0;
    fVar15 = fVar27;
    if (3 < (uVar7 & 0xf)) {
      fVar15 = fVar20;
    }
    fVar20 = fVar18;
    if (7 < (uVar7 & 0xf)) {
      fVar20 = fVar27;
    }
    if ((uVar7 & 1) != 0) {
      fVar20 = -fVar20;
    }
    if ((uVar7 & 2) != 0) {
      fVar15 = -fVar15;
    }
    uVar7 = *(uint *)(&DAT_14ad40094 +
                     ((longlong)*(int *)(&DAT_14ad40094 + (longlong)(int)lVar8 * 4) + uVar5) * 4);
    fVar16 = fVar30;
    if ((uVar7 & 0xd) != 0xc) {
      fVar16 = fVar21;
    }
    fVar23 = fVar27;
    if (3 < (uVar7 & 0xf)) {
      fVar23 = fVar16;
    }
    fVar16 = fVar30;
    if (7 < (uVar7 & 0xf)) {
      fVar16 = fVar27;
    }
    if ((uVar7 & 1) != 0) {
      fVar16 = -fVar16;
    }
    if ((uVar7 & 2) != 0) {
      fVar23 = -fVar23;
    }
    uVar7 = *(uint *)(&DAT_14ad40094 + ((longlong)*(int *)(&DAT_14ad40090 + lVar10 * 4) + uVar5) * 4
                     );
    fVar24 = fVar18;
    if ((uVar7 & 0xd) != 0xc) {
      fVar24 = fVar21;
    }
    fVar26 = fVar31;
    if (3 < (uVar7 & 0xf)) {
      fVar26 = fVar24;
    }
    fVar24 = fVar18;
    if (7 < (uVar7 & 0xf)) {
      fVar24 = fVar31;
    }
    if ((uVar7 & 1) != 0) {
      fVar24 = -fVar24;
    }
    if ((uVar7 & 2) != 0) {
      fVar26 = -fVar26;
    }
    uVar7 = *(uint *)(&DAT_14ad40094 + (uVar5 + (longlong)*(int *)(&DAT_14ad40090 + lVar8 * 4)) * 4)
    ;
    fVar28 = fVar30;
    if ((uVar7 & 0xd) != 0xc) {
      fVar28 = fVar21;
    }
    fVar21 = fVar31;
    if (3 < (uVar7 & 0xf)) {
      fVar21 = fVar28;
    }
    fVar28 = fVar30;
    if (7 < (uVar7 & 0xf)) {
      fVar28 = fVar31;
    }
    if ((uVar7 & 1) != 0) {
      fVar28 = -fVar28;
    }
    if ((uVar7 & 2) != 0) {
      fVar21 = -fVar21;
    }
    uVar7 = *(uint *)(&DAT_14ad40090 +
                     (longlong)
                     (int)((longlong)*(int *)(&DAT_14ad40094 + (longlong)(int)lVar10 * 4) + uVar5) *
                     4);
    fVar29 = fVar18;
    if ((uVar7 & 0xd) != 0xc) {
      fVar29 = fVar12;
    }
    fVar22 = fVar27;
    if (3 < (uVar7 & 0xf)) {
      fVar22 = fVar29;
    }
    fVar29 = fVar18;
    if (7 < (uVar7 & 0xf)) {
      fVar29 = fVar27;
    }
    if ((uVar7 & 1) != 0) {
      fVar29 = -fVar29;
    }
    if ((uVar7 & 2) != 0) {
      fVar22 = -fVar22;
    }
    uVar7 = *(uint *)(&DAT_14ad40090 +
                     (longlong)
                     (int)((longlong)*(int *)(&DAT_14ad40094 + (longlong)(int)lVar8 * 4) + uVar5) *
                     4);
    fVar34 = fVar30;
    if ((uVar7 & 0xd) != 0xc) {
      fVar34 = fVar12;
    }
    fVar32 = fVar27;
    if (3 < (uVar7 & 0xf)) {
      fVar32 = fVar34;
    }
    fVar34 = fVar30;
    if (7 < (uVar7 & 0xf)) {
      fVar34 = fVar27;
    }
    if ((uVar7 & 1) != 0) {
      fVar34 = -fVar34;
    }
    if ((uVar7 & 2) != 0) {
      fVar32 = -fVar32;
    }
    uVar7 = *(uint *)(&DAT_14ad40090 +
                     (longlong)(int)((longlong)*(int *)(&DAT_14ad40090 + lVar10 * 4) + uVar5) * 4);
    fVar27 = fVar18;
    if ((uVar7 & 0xd) != 0xc) {
      fVar27 = fVar12;
    }
    fVar33 = fVar31;
    if (3 < (uVar7 & 0xf)) {
      fVar33 = fVar27;
    }
    if (7 < (uVar7 & 0xf)) {
      fVar18 = fVar31;
    }
    auVar13 = ZEXT416((uint)fVar18);
    if ((uVar7 & 1) != 0) {
      auVar13._0_4_ = -fVar18;
      auVar13._4_4_ = 0x80000000;
      auVar13._8_4_ = 0x80000000;
      auVar13._12_4_ = 0x80000000;
    }
    fVar18 = fVar30 * fVar30 * fVar30 * ((fVar30 * 6.0 + -15.0) * fVar30 + 10.0);
    if ((uVar7 & 2) != 0) {
      fVar33 = -fVar33;
    }
    uVar7 = *(uint *)(&DAT_14ad40090 +
                     (longlong)(int)(uVar5 + (longlong)*(int *)(&DAT_14ad40090 + lVar8 * 4)) * 4);
    fVar27 = fVar30;
    if ((uVar7 & 0xd) != 0xc) {
      fVar27 = fVar12;
    }
    fVar24 = ((fVar24 + fVar26) - (fVar28 + fVar21)) * fVar18 + fVar28 + fVar21;
    fVar21 = fVar31;
    if (3 < (uVar7 & 0xf)) {
      fVar21 = fVar27;
    }
    fVar27 = fVar31 * fVar31 * fVar31 * ((fVar31 * 6.0 + -15.0) * fVar31 + 10.0);
    if (7 < (uVar7 & 0xf)) {
      fVar30 = fVar31;
    }
    if ((uVar7 & 1) != 0) {
      fVar30 = (float)((uint)fVar30 ^ DAT_1499319e0);
    }
    auVar17._4_12_ = auVar13._4_12_;
    if ((uVar7 & 2) != 0) {
      fVar21 = (float)((uint)fVar21 ^ DAT_1499319e0);
    }
    auVar17._0_4_ = (auVar13._0_4_ + fVar33) - (fVar30 + fVar21);
    fVar30 = fVar18 * auVar17._0_4_ + fVar30 + fVar21;
    fVar30 = fVar27 * ((((fVar29 + fVar22) - (fVar34 + fVar32)) * fVar18 + fVar34 + fVar32) - fVar30
                      ) + fVar30;
    fVar30 = fVar12 * fVar12 * fVar12 * ((fVar12 * 6.0 + -15.0) * fVar12 + 10.0) *
             ((((((fVar20 + fVar15) - (fVar16 + fVar23)) * fVar18 + fVar16 + fVar23) - fVar24) *
               fVar27 + fVar24) - fVar30) + fVar30;
    lVar8 = (longlong)iVar6 + -1;
    auVar19._8_4_ = (int)lVar8;
    auVar19._0_8_ = lVar8;
    auVar19._12_4_ = (int)((ulonglong)lVar8 >> 0x20);
    lVar8 = (ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) + *(longlong *)(param_1 + 0x70);
    uVar5 = 0;
    auVar13 = pmovsxbq(_DAT_1499319e0,0x302);
    auVar17 = pmovsxbq(auVar17,0x100);
    auVar19 = auVar19 ^ _DAT_149931e80;
    do {
      lVar10 = auVar19._0_8_;
      lVar14 = auVar19._8_8_;
      if ((bool)(~(lVar10 < (longlong)(uVar5 ^ auVar4._0_8_)) & 1)) {
        *(float *)(lVar8 + uVar5 * 4) = fVar30;
      }
      auVar25._8_4_ = (int)uVar5;
      auVar25._0_8_ = uVar5;
      auVar25._12_4_ = (int)(uVar5 >> 0x20);
      if ((longlong)((auVar25._8_8_ | auVar17._8_8_) ^ auVar4._8_8_) <= lVar14) {
        *(float *)(lVar8 + 4 + uVar5 * 4) = fVar30;
      }
      auVar25 = (auVar25 | auVar13) ^ auVar4;
      if (auVar25._0_8_ <= lVar10) {
        *(float *)(lVar8 + 8 + uVar5 * 4) = fVar30;
      }
      if (auVar25._8_8_ <= lVar14) {
        *(float *)(lVar8 + 0xc + uVar5 * 4) = fVar30;
      }
      uVar5 = uVar5 + 4;
    } while ((iVar6 + 3U & 0xfffffffc) != uVar5);
  }
  return;
}



// FUNCTION 14803b99e FUN_14803b99e body=141 status=ok
// SIG undefined FUN_14803b99e(void)

void FUN_14803b99e(longlong param_1)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  ushort *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar6;
  uVar11 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  iVar13 = **(int **)(param_1 + 0x20);
  lVar12 = 0;
  if (iVar13 <= (int)(uint)uVar4) {
    do {
      uVar11 = uVar11 - iVar13;
      iVar13 = (*(int **)(param_1 + 0x20))[lVar12 + 1];
      lVar12 = lVar12 + 1;
    } while (iVar13 <= (int)uVar11);
  }
  fVar3 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar12 * 8) +
                    (longlong)(int)uVar11);
  uVar4 = puVar6[1];
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  lVar12 = *(longlong *)(param_1 + 0x70);
  iVar13 = *(int *)(param_1 + 0x80);
  uVar5 = puVar6[2];
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar10 = *(int *)(param_1 + 0x44);
  if (0 < iVar10) {
    do {
      pfVar1 = (float *)(lVar12 + (ulonglong)((uint)uVar4 * iVar13));
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      piVar2 = (int *)(lVar12 + (ulonglong)((uint)uVar5 * iVar13));
      *piVar2 = -(uint)(*pfVar1 <= fVar3);
      piVar2[1] = -(uint)(fVar7 <= fVar3);
      piVar2[2] = -(uint)(fVar8 <= fVar3);
      piVar2[3] = -(uint)(fVar9 <= fVar3);
      lVar12 = lVar12 + 0x10;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}



// FUNCTION 14803ba2c FUN_14803ba2c body=96 status=ok
// SIG undefined FUN_14803ba2c(void)

void FUN_14803ba2c(longlong param_1)

{
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  longlong lVar16;
  
  puVar8 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar8;
  *(ushort **)(param_1 + 0x10) = puVar8 + 1;
  lVar16 = *(longlong *)(param_1 + 0x70);
  iVar7 = *(int *)(param_1 + 0x80);
  uVar5 = puVar8[1];
  *(ushort **)(param_1 + 0x10) = puVar8 + 2;
  uVar6 = puVar8[2];
  *(ushort **)(param_1 + 0x10) = puVar8 + 3;
  iVar15 = *(int *)(param_1 + 0x44);
  if (0 < iVar15) {
    do {
      pfVar1 = (float *)(lVar16 + (ulonglong)((uint)uVar5 * iVar7));
      fVar9 = pfVar1[1];
      fVar10 = pfVar1[2];
      fVar11 = pfVar1[3];
      pfVar2 = (float *)(lVar16 + (ulonglong)((uint)uVar4 * iVar7));
      fVar12 = pfVar2[1];
      fVar13 = pfVar2[2];
      fVar14 = pfVar2[3];
      piVar3 = (int *)(lVar16 + (ulonglong)((uint)uVar6 * iVar7));
      *piVar3 = -(uint)(*pfVar1 == *pfVar2);
      piVar3[1] = -(uint)(fVar9 == fVar12);
      piVar3[2] = -(uint)(fVar10 == fVar13);
      piVar3[3] = -(uint)(fVar11 == fVar14);
      lVar16 = lVar16 + 0x10;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  return;
}



// FUNCTION 14803ba8c FUN_14803ba8c body=141 status=ok
// SIG undefined FUN_14803ba8c(void)

void FUN_14803ba8c(longlong param_1)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  ushort *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar6;
  uVar11 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  iVar13 = **(int **)(param_1 + 0x20);
  lVar12 = 0;
  if (iVar13 <= (int)(uint)uVar4) {
    do {
      uVar11 = uVar11 - iVar13;
      iVar13 = (*(int **)(param_1 + 0x20))[lVar12 + 1];
      lVar12 = lVar12 + 1;
    } while (iVar13 <= (int)uVar11);
  }
  fVar3 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar12 * 8) +
                    (longlong)(int)uVar11);
  uVar4 = puVar6[1];
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  lVar12 = *(longlong *)(param_1 + 0x70);
  iVar13 = *(int *)(param_1 + 0x80);
  uVar5 = puVar6[2];
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar10 = *(int *)(param_1 + 0x44);
  if (0 < iVar10) {
    do {
      pfVar1 = (float *)(lVar12 + (ulonglong)((uint)uVar4 * iVar13));
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      piVar2 = (int *)(lVar12 + (ulonglong)((uint)uVar5 * iVar13));
      *piVar2 = -(uint)(*pfVar1 == fVar3);
      piVar2[1] = -(uint)(fVar7 == fVar3);
      piVar2[2] = -(uint)(fVar8 == fVar3);
      piVar2[3] = -(uint)(fVar9 == fVar3);
      lVar12 = lVar12 + 0x10;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}



// FUNCTION 14803bb1a FUN_14803bb1a body=191 status=ok
// SIG undefined FUN_14803bb1a(void)

void FUN_14803bb1a(longlong param_1)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  ushort *puVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  longlong lVar8;
  
  puVar4 = *(ushort **)(param_1 + 0x10);
  piVar6 = *(int **)(param_1 + 0x20);
  uVar3 = *puVar4;
  uVar7 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar4 + 1;
  iVar5 = *piVar6;
  lVar8 = 0;
  if (iVar5 <= (int)(uint)uVar3) {
    do {
      uVar7 = uVar7 - iVar5;
      iVar5 = piVar6[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar5 <= (int)uVar7);
  }
  fVar1 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar7
                    );
  uVar3 = puVar4[1];
  uVar7 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar4 + 2;
  iVar5 = *piVar6;
  lVar8 = 0;
  if (iVar5 <= (int)(uint)uVar3) {
    do {
      uVar7 = uVar7 - iVar5;
      iVar5 = piVar6[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar5 <= (int)uVar7);
  }
  fVar2 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar7
                    );
  uVar3 = puVar4[2];
  *(ushort **)(param_1 + 0x10) = puVar4 + 3;
  iVar5 = *(int *)(param_1 + 0x44);
  if (0 < iVar5) {
    piVar6 = (int *)((ulonglong)((uint)uVar3 * *(int *)(param_1 + 0x80)) +
                    *(longlong *)(param_1 + 0x70));
    uVar7 = (uint)(fVar1 == fVar2);
    do {
      *piVar6 = (int)(uVar7 * -0x80000000) >> 0x1f;
      piVar6[1] = (int)(uVar7 * -0x80000000) >> 0x1f;
      piVar6[2] = (int)(uVar7 * -0x80000000) >> 0x1f;
      piVar6[3] = (int)(uVar7 * -0x80000000) >> 0x1f;
      piVar6 = piVar6 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}



// FUNCTION 14803bbda FUN_14803bbda body=191 status=ok
// SIG undefined FUN_14803bbda(void)

void FUN_14803bbda(longlong param_1)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  ushort *puVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  longlong lVar8;
  
  puVar4 = *(ushort **)(param_1 + 0x10);
  piVar6 = *(int **)(param_1 + 0x20);
  uVar3 = *puVar4;
  uVar7 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar4 + 1;
  iVar5 = *piVar6;
  lVar8 = 0;
  if (iVar5 <= (int)(uint)uVar3) {
    do {
      uVar7 = uVar7 - iVar5;
      iVar5 = piVar6[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar5 <= (int)uVar7);
  }
  fVar1 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar7
                    );
  uVar3 = puVar4[1];
  uVar7 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar4 + 2;
  iVar5 = *piVar6;
  lVar8 = 0;
  if (iVar5 <= (int)(uint)uVar3) {
    do {
      uVar7 = uVar7 - iVar5;
      iVar5 = piVar6[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar5 <= (int)uVar7);
  }
  fVar2 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar7
                    );
  uVar3 = puVar4[2];
  *(ushort **)(param_1 + 0x10) = puVar4 + 3;
  iVar5 = *(int *)(param_1 + 0x44);
  if (0 < iVar5) {
    piVar6 = (int *)((ulonglong)((uint)uVar3 * *(int *)(param_1 + 0x80)) +
                    *(longlong *)(param_1 + 0x70));
    uVar7 = (uint)(fVar1 != fVar2);
    do {
      *piVar6 = (int)(uVar7 * -0x80000000) >> 0x1f;
      piVar6[1] = (int)(uVar7 * -0x80000000) >> 0x1f;
      piVar6[2] = (int)(uVar7 * -0x80000000) >> 0x1f;
      piVar6[3] = (int)(uVar7 * -0x80000000) >> 0x1f;
      piVar6 = piVar6 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}



// FUNCTION 14803bc9a FUN_14803bc9a body=144 status=ok
// SIG undefined FUN_14803bc9a(void)

void FUN_14803bc9a(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar6;
  uVar11 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  iVar13 = **(int **)(param_1 + 0x20);
  lVar12 = 0;
  if (iVar13 <= (int)(uint)uVar3) {
    do {
      uVar11 = uVar11 - iVar13;
      iVar13 = (*(int **)(param_1 + 0x20))[lVar12 + 1];
      lVar12 = lVar12 + 1;
    } while (iVar13 <= (int)uVar11);
  }
  iVar13 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar12 * 8) +
                   (longlong)(int)uVar11);
  uVar3 = puVar6[1];
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  lVar12 = *(longlong *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  uVar4 = puVar6[2];
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar10 = *(int *)(param_1 + 0x44);
  if (0 < iVar10) {
    do {
      piVar1 = (int *)(lVar12 + (ulonglong)((uint)uVar3 * iVar5));
      iVar7 = piVar1[1];
      iVar8 = piVar1[2];
      iVar9 = piVar1[3];
      piVar2 = (int *)(lVar12 + (ulonglong)((uint)uVar4 * iVar5));
      *piVar2 = iVar13 - *piVar1;
      piVar2[1] = iVar13 - iVar7;
      piVar2[2] = iVar13 - iVar8;
      piVar2[3] = iVar13 - iVar9;
      lVar12 = lVar12 + 0x10;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}



// FUNCTION 14803bd2a FUN_14803bd2a body=361 status=ok
// SIG undefined FUN_14803bd2a(void)

ushort * FUN_14803bd2a(longlong param_1)

{
  ulonglong *puVar1;
  undefined1 auVar2 [16];
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar6;
  uVar10 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  iVar15 = **(int **)(param_1 + 0x20);
  lVar13 = 0;
  if (iVar15 <= (int)(uint)uVar3) {
    do {
      uVar10 = uVar10 - iVar15;
      iVar15 = (*(int **)(param_1 + 0x20))[lVar13 + 1];
      lVar13 = lVar13 + 1;
    } while (iVar15 <= (int)uVar10);
  }
  iVar15 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar13 * 8) +
                   (longlong)(int)uVar10);
  uVar3 = puVar6[1];
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  lVar13 = *(longlong *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  uVar4 = puVar6[2];
  puVar6 = puVar6 + 3;
  *(ushort **)(param_1 + 0x10) = puVar6;
  iVar11 = *(int *)(param_1 + 0x44);
  if (0 < iVar11) {
    uVar12 = (ulonglong)((uint)uVar3 * iVar5);
    do {
      auVar2 = *(undefined1 (*) [16])(lVar13 + uVar12);
      iVar7 = *(int *)(lVar13 + uVar12);
      uVar14 = 0;
      uVar10 = 0;
      if (iVar7 != 0) {
        puVar6 = (ushort *)(ulonglong)(uint)-iVar15;
        if ((SBORROW4(0,iVar15)) && (iVar7 == -1)) {
          uVar10 = 0x7fffffff;
        }
        else {
          puVar6 = (ushort *)((longlong)iVar15 / (longlong)iVar7 & 0xffffffff);
          uVar10 = (uint)((longlong)iVar15 / (longlong)iVar7);
        }
      }
      uVar8 = extractps(auVar2,1);
      iVar7 = (int)uVar8;
      if (iVar7 != 0) {
        puVar6 = (ushort *)(ulonglong)(uint)-iVar15;
        if ((SBORROW4(0,iVar15)) && (iVar7 == -1)) {
          uVar14 = 0x7fffffff;
        }
        else {
          puVar6 = (ushort *)((longlong)iVar15 / (longlong)iVar7 & 0xffffffff);
          uVar14 = (longlong)iVar15 / (longlong)iVar7 & 0xffffffff;
        }
      }
      uVar8 = extractps(auVar2,2);
      uVar9 = 0;
      uVar16 = 0;
      iVar7 = (int)uVar8;
      if (iVar7 != 0) {
        puVar6 = (ushort *)(ulonglong)(uint)-iVar15;
        if ((SBORROW4(0,iVar15)) && (iVar7 == -1)) {
          uVar16 = 0x7fffffff;
        }
        else {
          puVar6 = (ushort *)((longlong)iVar15 / (longlong)iVar7 & 0xffffffff);
          uVar16 = (longlong)iVar15 / (longlong)iVar7 & 0xffffffff;
        }
      }
      uVar8 = extractps(auVar2,3);
      iVar7 = (int)uVar8;
      if (iVar7 != 0) {
        puVar6 = (ushort *)(ulonglong)(uint)-iVar15;
        if ((SBORROW4(0,iVar15)) && (iVar7 == -1)) {
          uVar9 = 0x7fffffff;
        }
        else {
          puVar6 = (ushort *)((longlong)iVar15 / (longlong)iVar7 & 0xffffffff);
          uVar9 = (longlong)iVar15 / (longlong)iVar7 & 0xffffffff;
        }
      }
      puVar1 = (ulonglong *)(lVar13 + (ulonglong)((uint)uVar4 * iVar5));
      *puVar1 = (ulonglong)uVar10 | uVar14 << 0x20;
      puVar1[1] = uVar16 | uVar9 << 0x20;
      lVar13 = lVar13 + 0x10;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  return puVar6;
}



// FUNCTION 14803be94 FUN_14803be94 body=219 status=ok
// SIG undefined FUN_14803be94(void)

void FUN_14803be94(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  int iVar10;
  
  puVar2 = *(ushort **)(param_1 + 0x10);
  piVar9 = *(int **)(param_1 + 0x20);
  uVar1 = *puVar2;
  uVar6 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 1;
  iVar7 = *piVar9;
  lVar8 = 0;
  if (iVar7 <= (int)(uint)uVar1) {
    do {
      uVar6 = uVar6 - iVar7;
      iVar7 = piVar9[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar7 <= (int)uVar6);
  }
  iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar6);
  uVar1 = puVar2[1];
  uVar6 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 2;
  iVar4 = *piVar9;
  lVar8 = 0;
  if (iVar4 <= (int)(uint)uVar1) {
    do {
      uVar6 = uVar6 - iVar4;
      iVar4 = piVar9[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar4 <= (int)uVar6);
  }
  iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar6);
  uVar1 = puVar2[2];
  *(ushort **)(param_1 + 0x10) = puVar2 + 3;
  iVar10 = *(int *)(param_1 + 0x44);
  if (0 < iVar10) {
    piVar9 = (int *)((ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) +
                    *(longlong *)(param_1 + 0x70));
    iVar5 = 0x7fffffff;
    if (iVar4 == 0) {
      iVar5 = 0;
    }
    do {
      iVar3 = iVar5;
      if (iVar4 != 0 && (iVar7 != -0x80000000 || iVar4 != -1)) {
        iVar3 = iVar7 / iVar4;
      }
      *piVar9 = iVar3;
      piVar9[1] = iVar3;
      piVar9[2] = iVar3;
      piVar9[3] = iVar3;
      piVar9 = piVar9 + 4;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}



// FUNCTION 14803bf70 FUN_14803bf70 body=124 status=ok
// SIG undefined FUN_14803bf70(void)

void FUN_14803bf70(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  
  puVar8 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar8;
  *(ushort **)(param_1 + 0x10) = puVar8 + 1;
  lVar18 = *(longlong *)(param_1 + 0x70);
  iVar7 = *(int *)(param_1 + 0x80);
  uVar4 = puVar8[1];
  *(ushort **)(param_1 + 0x10) = puVar8 + 2;
  uVar5 = puVar8[2];
  *(ushort **)(param_1 + 0x10) = puVar8 + 3;
  uVar6 = puVar8[3];
  *(ushort **)(param_1 + 0x10) = puVar8 + 4;
  iVar17 = *(int *)(param_1 + 0x44);
  if (0 < iVar17) {
    do {
      piVar1 = (int *)(lVar18 + (ulonglong)((uint)uVar3 * iVar7));
      iVar9 = *piVar1;
      iVar10 = piVar1[1];
      iVar11 = piVar1[2];
      iVar12 = piVar1[3];
      piVar1 = (int *)(lVar18 + (ulonglong)((uint)uVar4 * iVar7));
      iVar13 = *piVar1;
      iVar14 = piVar1[1];
      iVar15 = piVar1[2];
      iVar16 = piVar1[3];
      uVar19 = (uint)(iVar9 < iVar13) * iVar13 | (uint)(iVar9 >= iVar13) * iVar9;
      uVar20 = (uint)(iVar10 < iVar14) * iVar14 | (uint)(iVar10 >= iVar14) * iVar10;
      uVar21 = (uint)(iVar11 < iVar15) * iVar15 | (uint)(iVar11 >= iVar15) * iVar11;
      uVar22 = (uint)(iVar12 < iVar16) * iVar16 | (uint)(iVar12 >= iVar16) * iVar12;
      piVar1 = (int *)(lVar18 + (ulonglong)((uint)uVar5 * iVar7));
      iVar9 = *piVar1;
      iVar10 = piVar1[1];
      iVar11 = piVar1[2];
      iVar12 = piVar1[3];
      puVar2 = (uint *)(lVar18 + (ulonglong)((uint)uVar6 * iVar7));
      *puVar2 = (uint)(iVar9 < (int)uVar19) * iVar9 | (iVar9 >= (int)uVar19) * uVar19;
      puVar2[1] = (uint)(iVar10 < (int)uVar20) * iVar10 | (iVar10 >= (int)uVar20) * uVar20;
      puVar2[2] = (uint)(iVar11 < (int)uVar21) * iVar11 | (iVar11 >= (int)uVar21) * uVar21;
      puVar2[3] = (uint)(iVar12 < (int)uVar22) * iVar12 | (iVar12 >= (int)uVar22) * uVar22;
      lVar18 = lVar18 + 0x10;
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
  }
  return;
}



// FUNCTION 14803bfec FUN_14803bfec body=169 status=ok
// SIG undefined FUN_14803bfec(void)

void FUN_14803bfec(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  
  puVar7 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar7;
  uVar13 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar7 + 1;
  iVar15 = **(int **)(param_1 + 0x20);
  lVar14 = 0;
  if (iVar15 <= (int)(uint)uVar3) {
    do {
      uVar13 = uVar13 - iVar15;
      iVar15 = (*(int **)(param_1 + 0x20))[lVar14 + 1];
      lVar14 = lVar14 + 1;
    } while (iVar15 <= (int)uVar13);
  }
  iVar15 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar14 * 8) +
                   (longlong)(int)uVar13);
  uVar3 = puVar7[1];
  *(ushort **)(param_1 + 0x10) = puVar7 + 2;
  lVar14 = *(longlong *)(param_1 + 0x70);
  iVar6 = *(int *)(param_1 + 0x80);
  uVar4 = puVar7[2];
  *(ushort **)(param_1 + 0x10) = puVar7 + 3;
  uVar5 = puVar7[3];
  *(ushort **)(param_1 + 0x10) = puVar7 + 4;
  iVar12 = *(int *)(param_1 + 0x44);
  if (0 < iVar12) {
    do {
      piVar1 = (int *)(lVar14 + (ulonglong)((uint)uVar3 * iVar6));
      iVar8 = *piVar1;
      iVar9 = piVar1[1];
      iVar10 = piVar1[2];
      iVar11 = piVar1[3];
      uVar13 = (uint)(iVar8 < iVar15) * iVar15 | (uint)(iVar8 >= iVar15) * iVar8;
      uVar16 = (uint)(iVar9 < iVar15) * iVar15 | (uint)(iVar9 >= iVar15) * iVar9;
      uVar17 = (uint)(iVar10 < iVar15) * iVar15 | (uint)(iVar10 >= iVar15) * iVar10;
      uVar18 = (uint)(iVar11 < iVar15) * iVar15 | (uint)(iVar11 >= iVar15) * iVar11;
      piVar1 = (int *)(lVar14 + (ulonglong)((uint)uVar4 * iVar6));
      iVar8 = *piVar1;
      iVar9 = piVar1[1];
      iVar10 = piVar1[2];
      iVar11 = piVar1[3];
      puVar2 = (uint *)(lVar14 + (ulonglong)((uint)uVar5 * iVar6));
      *puVar2 = (uint)(iVar8 < (int)uVar13) * iVar8 | (iVar8 >= (int)uVar13) * uVar13;
      puVar2[1] = (uint)(iVar9 < (int)uVar16) * iVar9 | (iVar9 >= (int)uVar16) * uVar16;
      puVar2[2] = (uint)(iVar10 < (int)uVar17) * iVar10 | (iVar10 >= (int)uVar17) * uVar17;
      puVar2[3] = (uint)(iVar11 < (int)uVar18) * iVar11 | (iVar11 >= (int)uVar18) * uVar18;
      lVar14 = lVar14 + 0x10;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  return;
}



// FUNCTION 14803c096 FUN_14803c096 body=207 status=ok
// SIG undefined FUN_14803c096(void)

void FUN_14803c096(longlong param_1)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  
  puVar5 = *(ushort **)(param_1 + 0x10);
  piVar6 = *(int **)(param_1 + 0x20);
  uVar2 = *puVar5;
  uVar11 = (uint)uVar2;
  *(ushort **)(param_1 + 0x10) = puVar5 + 1;
  iVar10 = *piVar6;
  lVar12 = 0;
  if (iVar10 <= (int)(uint)uVar2) {
    do {
      uVar11 = uVar11 - iVar10;
      iVar10 = piVar6[lVar12 + 1];
      lVar12 = lVar12 + 1;
    } while (iVar10 <= (int)uVar11);
  }
  iVar10 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar12 * 8) +
                   (longlong)(int)uVar11);
  uVar2 = puVar5[1];
  uVar11 = (uint)uVar2;
  *(ushort **)(param_1 + 0x10) = puVar5 + 2;
  iVar13 = *piVar6;
  lVar12 = 0;
  if (iVar13 <= (int)(uint)uVar2) {
    do {
      uVar11 = uVar11 - iVar13;
      iVar13 = piVar6[lVar12 + 1];
      lVar12 = lVar12 + 1;
    } while (iVar13 <= (int)uVar11);
  }
  iVar13 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar12 * 8) +
                   (longlong)(int)uVar11);
  uVar2 = puVar5[2];
  *(ushort **)(param_1 + 0x10) = puVar5 + 3;
  lVar12 = *(longlong *)(param_1 + 0x70);
  iVar4 = *(int *)(param_1 + 0x80);
  uVar3 = puVar5[3];
  *(ushort **)(param_1 + 0x10) = puVar5 + 4;
  iVar9 = *(int *)(param_1 + 0x44);
  if (0 < iVar9) {
    uVar11 = (uint)(iVar10 < iVar13) * iVar13 | (uint)(iVar10 >= iVar13) * iVar10;
    do {
      piVar6 = (int *)(lVar12 + (ulonglong)((uint)uVar2 * iVar4));
      iVar10 = *piVar6;
      iVar13 = piVar6[1];
      iVar7 = piVar6[2];
      iVar8 = piVar6[3];
      puVar1 = (uint *)(lVar12 + (ulonglong)((uint)uVar3 * iVar4));
      *puVar1 = ((int)uVar11 < iVar10) * uVar11 | (uint)((int)uVar11 >= iVar10) * iVar10;
      puVar1[1] = ((int)uVar11 < iVar13) * uVar11 | (uint)((int)uVar11 >= iVar13) * iVar13;
      puVar1[2] = ((int)uVar11 < iVar7) * uVar11 | (uint)((int)uVar11 >= iVar7) * iVar7;
      puVar1[3] = ((int)uVar11 < iVar8) * uVar11 | (uint)((int)uVar11 >= iVar8) * iVar8;
      lVar12 = lVar12 + 0x10;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return;
}



// FUNCTION 14803c166 FUN_14803c166 body=173 status=ok
// SIG undefined FUN_14803c166(void)

void FUN_14803c166(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  
  puVar7 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar7;
  *(ushort **)(param_1 + 0x10) = puVar7 + 1;
  lVar17 = *(longlong *)(param_1 + 0x70);
  iVar6 = *(int *)(param_1 + 0x80);
  uVar4 = puVar7[1];
  *(ushort **)(param_1 + 0x10) = puVar7 + 2;
  uVar5 = puVar7[2];
  uVar20 = (uint)uVar5;
  *(ushort **)(param_1 + 0x10) = puVar7 + 3;
  iVar18 = **(int **)(param_1 + 0x20);
  lVar19 = 0;
  if (iVar18 <= (int)(uint)uVar5) {
    do {
      uVar20 = uVar20 - iVar18;
      iVar18 = (*(int **)(param_1 + 0x20))[lVar19 + 1];
      lVar19 = lVar19 + 1;
    } while (iVar18 <= (int)uVar20);
  }
  iVar18 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar19 * 8) +
                   (longlong)(int)uVar20);
  uVar5 = puVar7[3];
  *(ushort **)(param_1 + 0x10) = puVar7 + 4;
  iVar16 = *(int *)(param_1 + 0x44);
  if (0 < iVar16) {
    do {
      piVar1 = (int *)(lVar17 + (ulonglong)((uint)uVar3 * iVar6));
      iVar8 = *piVar1;
      iVar9 = piVar1[1];
      iVar10 = piVar1[2];
      iVar11 = piVar1[3];
      piVar1 = (int *)(lVar17 + (ulonglong)((uint)uVar4 * iVar6));
      iVar12 = *piVar1;
      iVar13 = piVar1[1];
      iVar14 = piVar1[2];
      iVar15 = piVar1[3];
      uVar20 = (uint)(iVar8 < iVar12) * iVar12 | (uint)(iVar8 >= iVar12) * iVar8;
      uVar21 = (uint)(iVar9 < iVar13) * iVar13 | (uint)(iVar9 >= iVar13) * iVar9;
      uVar22 = (uint)(iVar10 < iVar14) * iVar14 | (uint)(iVar10 >= iVar14) * iVar10;
      uVar23 = (uint)(iVar11 < iVar15) * iVar15 | (uint)(iVar11 >= iVar15) * iVar11;
      puVar2 = (uint *)(lVar17 + (ulonglong)((uint)uVar5 * iVar6));
      *puVar2 = (uint)(iVar18 < (int)uVar20) * iVar18 | (iVar18 >= (int)uVar20) * uVar20;
      puVar2[1] = (uint)(iVar18 < (int)uVar21) * iVar18 | (iVar18 >= (int)uVar21) * uVar21;
      puVar2[2] = (uint)(iVar18 < (int)uVar22) * iVar18 | (iVar18 >= (int)uVar22) * uVar22;
      puVar2[3] = (uint)(iVar18 < (int)uVar23) * iVar18 | (iVar18 >= (int)uVar23) * uVar23;
      lVar17 = lVar17 + 0x10;
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
  }
  return;
}



// FUNCTION 14803c214 FUN_14803c214 body=211 status=ok
// SIG undefined FUN_14803c214(void)

void FUN_14803c214(longlong param_1)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  
  puVar5 = *(ushort **)(param_1 + 0x10);
  piVar6 = *(int **)(param_1 + 0x20);
  uVar2 = *puVar5;
  uVar15 = (uint)uVar2;
  *(ushort **)(param_1 + 0x10) = puVar5 + 1;
  iVar12 = *piVar6;
  lVar16 = 0;
  if (iVar12 <= (int)(uint)uVar2) {
    do {
      uVar15 = uVar15 - iVar12;
      iVar12 = piVar6[lVar16 + 1];
      lVar16 = lVar16 + 1;
    } while (iVar12 <= (int)uVar15);
  }
  lVar13 = *(longlong *)(param_1 + 0x70);
  iVar12 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar16 * 8) +
                   (longlong)(int)uVar15);
  uVar2 = puVar5[1];
  *(ushort **)(param_1 + 0x10) = puVar5 + 2;
  iVar4 = *(int *)(param_1 + 0x80);
  uVar3 = puVar5[2];
  uVar15 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar5 + 3;
  iVar14 = *piVar6;
  lVar16 = 0;
  if (iVar14 <= (int)(uint)uVar3) {
    do {
      uVar15 = uVar15 - iVar14;
      iVar14 = piVar6[lVar16 + 1];
      lVar16 = lVar16 + 1;
    } while (iVar14 <= (int)uVar15);
  }
  iVar14 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar16 * 8) +
                   (longlong)(int)uVar15);
  uVar3 = puVar5[3];
  *(ushort **)(param_1 + 0x10) = puVar5 + 4;
  iVar11 = *(int *)(param_1 + 0x44);
  if (0 < iVar11) {
    do {
      piVar6 = (int *)(lVar13 + (ulonglong)((uint)uVar2 * iVar4));
      iVar7 = *piVar6;
      iVar8 = piVar6[1];
      iVar9 = piVar6[2];
      iVar10 = piVar6[3];
      uVar15 = (uint)(iVar7 < iVar12) * iVar12 | (uint)(iVar7 >= iVar12) * iVar7;
      uVar17 = (uint)(iVar8 < iVar12) * iVar12 | (uint)(iVar8 >= iVar12) * iVar8;
      uVar18 = (uint)(iVar9 < iVar12) * iVar12 | (uint)(iVar9 >= iVar12) * iVar9;
      uVar19 = (uint)(iVar10 < iVar12) * iVar12 | (uint)(iVar10 >= iVar12) * iVar10;
      puVar1 = (uint *)(lVar13 + (ulonglong)((uint)uVar3 * iVar4));
      *puVar1 = (uint)(iVar14 < (int)uVar15) * iVar14 | (iVar14 >= (int)uVar15) * uVar15;
      puVar1[1] = (uint)(iVar14 < (int)uVar17) * iVar14 | (iVar14 >= (int)uVar17) * uVar17;
      puVar1[2] = (uint)(iVar14 < (int)uVar18) * iVar14 | (iVar14 >= (int)uVar18) * uVar18;
      puVar1[3] = (uint)(iVar14 < (int)uVar19) * iVar14 | (iVar14 >= (int)uVar19) * uVar19;
      lVar13 = lVar13 + 0x10;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  return;
}



// FUNCTION 14803c2e8 FUN_14803c2e8 body=231 status=ok
// SIG undefined FUN_14803c2e8(void)

void FUN_14803c2e8(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  
  puVar2 = *(ushort **)(param_1 + 0x10);
  piVar3 = *(int **)(param_1 + 0x20);
  uVar1 = *puVar2;
  uVar8 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 1;
  iVar7 = *piVar3;
  lVar9 = 0;
  if (iVar7 <= (int)(uint)uVar1) {
    do {
      uVar8 = uVar8 - iVar7;
      iVar7 = piVar3[lVar9 + 1];
      lVar9 = lVar9 + 1;
    } while (iVar7 <= (int)uVar8);
  }
  lVar4 = *(longlong *)(param_1 + 0x18);
  iVar7 = *(int *)(*(longlong *)(lVar4 + lVar9 * 8) + (longlong)(int)uVar8);
  uVar1 = puVar2[1];
  uVar8 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 2;
  iVar10 = *piVar3;
  lVar9 = 0;
  if (iVar10 <= (int)(uint)uVar1) {
    do {
      uVar8 = uVar8 - iVar10;
      iVar10 = piVar3[lVar9 + 1];
      lVar9 = lVar9 + 1;
    } while (iVar10 <= (int)uVar8);
  }
  iVar10 = *(int *)(*(longlong *)(lVar4 + lVar9 * 8) + (longlong)(int)uVar8);
  uVar1 = puVar2[2];
  uVar8 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 3;
  iVar11 = *piVar3;
  lVar9 = 0;
  if (iVar11 <= (int)(uint)uVar1) {
    do {
      uVar8 = uVar8 - iVar11;
      iVar11 = piVar3[lVar9 + 1];
      lVar9 = lVar9 + 1;
    } while (iVar11 <= (int)uVar8);
  }
  iVar11 = *(int *)(*(longlong *)(lVar4 + lVar9 * 8) + (longlong)(int)uVar8);
  uVar1 = puVar2[3];
  *(ushort **)(param_1 + 0x10) = puVar2 + 4;
  iVar5 = *(int *)(param_1 + 0x44);
  if (0 < iVar5) {
    puVar6 = (uint *)((ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) +
                     *(longlong *)(param_1 + 0x70));
    uVar8 = (uint)(iVar7 < iVar10) * iVar10 | (uint)(iVar7 >= iVar10) * iVar7;
    uVar8 = (uint)(iVar11 < (int)uVar8) * iVar11 | (iVar11 >= (int)uVar8) * uVar8;
    do {
      *puVar6 = uVar8;
      puVar6[1] = uVar8;
      puVar6[2] = uVar8;
      puVar6[3] = uVar8;
      puVar6 = puVar6 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}



// FUNCTION 14803c3d0 FUN_14803c3d0 body=99 status=ok
// SIG undefined FUN_14803c3d0(void)

void FUN_14803c3d0(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  
  puVar7 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar7;
  *(ushort **)(param_1 + 0x10) = puVar7 + 1;
  lVar17 = *(longlong *)(param_1 + 0x70);
  iVar6 = *(int *)(param_1 + 0x80);
  uVar4 = puVar7[1];
  *(ushort **)(param_1 + 0x10) = puVar7 + 2;
  uVar5 = puVar7[2];
  *(ushort **)(param_1 + 0x10) = puVar7 + 3;
  iVar16 = *(int *)(param_1 + 0x44);
  if (0 < iVar16) {
    do {
      piVar1 = (int *)(lVar17 + (ulonglong)((uint)uVar3 * iVar6));
      iVar8 = *piVar1;
      iVar9 = piVar1[1];
      iVar10 = piVar1[2];
      iVar11 = piVar1[3];
      piVar1 = (int *)(lVar17 + (ulonglong)((uint)uVar4 * iVar6));
      iVar12 = *piVar1;
      iVar13 = piVar1[1];
      iVar14 = piVar1[2];
      iVar15 = piVar1[3];
      puVar2 = (uint *)(lVar17 + (ulonglong)((uint)uVar5 * iVar6));
      *puVar2 = (uint)(iVar12 < iVar8) * iVar12 | (uint)(iVar12 >= iVar8) * iVar8;
      puVar2[1] = (uint)(iVar13 < iVar9) * iVar13 | (uint)(iVar13 >= iVar9) * iVar9;
      puVar2[2] = (uint)(iVar14 < iVar10) * iVar14 | (uint)(iVar14 >= iVar10) * iVar10;
      puVar2[3] = (uint)(iVar15 < iVar11) * iVar15 | (uint)(iVar15 >= iVar11) * iVar11;
      lVar17 = lVar17 + 0x10;
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
  }
  return;
}



// FUNCTION 14803c434 FUN_14803c434 body=145 status=ok
// SIG undefined FUN_14803c434(void)

void FUN_14803c434(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar6;
  uVar12 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  iVar14 = **(int **)(param_1 + 0x20);
  lVar13 = 0;
  if (iVar14 <= (int)(uint)uVar3) {
    do {
      uVar12 = uVar12 - iVar14;
      iVar14 = (*(int **)(param_1 + 0x20))[lVar13 + 1];
      lVar13 = lVar13 + 1;
    } while (iVar14 <= (int)uVar12);
  }
  iVar14 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar13 * 8) +
                   (longlong)(int)uVar12);
  uVar3 = puVar6[1];
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  lVar13 = *(longlong *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  uVar4 = puVar6[2];
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar11 = *(int *)(param_1 + 0x44);
  if (0 < iVar11) {
    do {
      piVar1 = (int *)(lVar13 + (ulonglong)((uint)uVar3 * iVar5));
      iVar7 = *piVar1;
      iVar8 = piVar1[1];
      iVar9 = piVar1[2];
      iVar10 = piVar1[3];
      puVar2 = (uint *)(lVar13 + (ulonglong)((uint)uVar4 * iVar5));
      *puVar2 = (uint)(iVar14 < iVar7) * iVar14 | (uint)(iVar14 >= iVar7) * iVar7;
      puVar2[1] = (uint)(iVar14 < iVar8) * iVar14 | (uint)(iVar14 >= iVar8) * iVar8;
      puVar2[2] = (uint)(iVar14 < iVar9) * iVar14 | (uint)(iVar14 >= iVar9) * iVar9;
      puVar2[3] = (uint)(iVar14 < iVar10) * iVar14 | (uint)(iVar14 >= iVar10) * iVar10;
      lVar13 = lVar13 + 0x10;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  return;
}



// FUNCTION 14803c4c6 FUN_14803c4c6 body=173 status=ok
// SIG undefined FUN_14803c4c6(void)

void FUN_14803c4c6(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  
  puVar2 = *(ushort **)(param_1 + 0x10);
  piVar3 = *(int **)(param_1 + 0x20);
  uVar1 = *puVar2;
  uVar7 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 1;
  iVar6 = *piVar3;
  lVar8 = 0;
  if (iVar6 <= (int)(uint)uVar1) {
    do {
      uVar7 = uVar7 - iVar6;
      iVar6 = piVar3[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar6 <= (int)uVar7);
  }
  iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar7);
  uVar1 = puVar2[1];
  uVar7 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 2;
  iVar9 = *piVar3;
  lVar8 = 0;
  if (iVar9 <= (int)(uint)uVar1) {
    do {
      uVar7 = uVar7 - iVar9;
      iVar9 = piVar3[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar9 <= (int)uVar7);
  }
  iVar9 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar7);
  uVar1 = puVar2[2];
  *(ushort **)(param_1 + 0x10) = puVar2 + 3;
  iVar4 = *(int *)(param_1 + 0x44);
  if (0 < iVar4) {
    puVar5 = (uint *)((ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) +
                     *(longlong *)(param_1 + 0x70));
    uVar7 = (uint)(iVar9 < iVar6) * iVar9 | (uint)(iVar9 >= iVar6) * iVar6;
    do {
      *puVar5 = uVar7;
      puVar5[1] = uVar7;
      puVar5[2] = uVar7;
      puVar5[3] = uVar7;
      puVar5 = puVar5 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}



// FUNCTION 14803c574 FUN_14803c574 body=99 status=ok
// SIG undefined FUN_14803c574(void)

void FUN_14803c574(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  
  puVar7 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar7;
  *(ushort **)(param_1 + 0x10) = puVar7 + 1;
  lVar17 = *(longlong *)(param_1 + 0x70);
  iVar6 = *(int *)(param_1 + 0x80);
  uVar4 = puVar7[1];
  *(ushort **)(param_1 + 0x10) = puVar7 + 2;
  uVar5 = puVar7[2];
  *(ushort **)(param_1 + 0x10) = puVar7 + 3;
  iVar16 = *(int *)(param_1 + 0x44);
  if (0 < iVar16) {
    do {
      piVar1 = (int *)(lVar17 + (ulonglong)((uint)uVar3 * iVar6));
      iVar8 = *piVar1;
      iVar9 = piVar1[1];
      iVar10 = piVar1[2];
      iVar11 = piVar1[3];
      piVar1 = (int *)(lVar17 + (ulonglong)((uint)uVar4 * iVar6));
      iVar12 = *piVar1;
      iVar13 = piVar1[1];
      iVar14 = piVar1[2];
      iVar15 = piVar1[3];
      puVar2 = (uint *)(lVar17 + (ulonglong)((uint)uVar5 * iVar6));
      *puVar2 = (uint)(iVar8 < iVar12) * iVar12 | (uint)(iVar8 >= iVar12) * iVar8;
      puVar2[1] = (uint)(iVar9 < iVar13) * iVar13 | (uint)(iVar9 >= iVar13) * iVar9;
      puVar2[2] = (uint)(iVar10 < iVar14) * iVar14 | (uint)(iVar10 >= iVar14) * iVar10;
      puVar2[3] = (uint)(iVar11 < iVar15) * iVar15 | (uint)(iVar11 >= iVar15) * iVar11;
      lVar17 = lVar17 + 0x10;
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
  }
  return;
}



// FUNCTION 14803c5d8 FUN_14803c5d8 body=145 status=ok
// SIG undefined FUN_14803c5d8(void)

void FUN_14803c5d8(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar6;
  uVar12 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  iVar14 = **(int **)(param_1 + 0x20);
  lVar13 = 0;
  if (iVar14 <= (int)(uint)uVar3) {
    do {
      uVar12 = uVar12 - iVar14;
      iVar14 = (*(int **)(param_1 + 0x20))[lVar13 + 1];
      lVar13 = lVar13 + 1;
    } while (iVar14 <= (int)uVar12);
  }
  iVar14 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar13 * 8) +
                   (longlong)(int)uVar12);
  uVar3 = puVar6[1];
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  lVar13 = *(longlong *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  uVar4 = puVar6[2];
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar11 = *(int *)(param_1 + 0x44);
  if (0 < iVar11) {
    do {
      piVar1 = (int *)(lVar13 + (ulonglong)((uint)uVar3 * iVar5));
      iVar7 = *piVar1;
      iVar8 = piVar1[1];
      iVar9 = piVar1[2];
      iVar10 = piVar1[3];
      puVar2 = (uint *)(lVar13 + (ulonglong)((uint)uVar4 * iVar5));
      *puVar2 = (uint)(iVar7 < iVar14) * iVar14 | (uint)(iVar7 >= iVar14) * iVar7;
      puVar2[1] = (uint)(iVar8 < iVar14) * iVar14 | (uint)(iVar8 >= iVar14) * iVar8;
      puVar2[2] = (uint)(iVar9 < iVar14) * iVar14 | (uint)(iVar9 >= iVar14) * iVar9;
      puVar2[3] = (uint)(iVar10 < iVar14) * iVar14 | (uint)(iVar10 >= iVar14) * iVar10;
      lVar13 = lVar13 + 0x10;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  return;
}



// FUNCTION 14803c9ae FUN_14803c9ae body=152 status=ok
// SIG undefined FUN_14803c9ae(void)

void FUN_14803c9ae(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar6;
  uVar11 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  iVar13 = **(int **)(param_1 + 0x20);
  lVar12 = 0;
  if (iVar13 <= (int)(uint)uVar3) {
    do {
      uVar11 = uVar11 - iVar13;
      iVar13 = (*(int **)(param_1 + 0x20))[lVar12 + 1];
      lVar12 = lVar12 + 1;
    } while (iVar13 <= (int)uVar11);
  }
  iVar13 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar12 * 8) +
                   (longlong)(int)uVar11);
  uVar3 = puVar6[1];
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  lVar12 = *(longlong *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  uVar4 = puVar6[2];
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar10 = *(int *)(param_1 + 0x44);
  if (0 < iVar10) {
    do {
      piVar1 = (int *)(lVar12 + (ulonglong)((uint)uVar3 * iVar5));
      iVar7 = piVar1[1];
      iVar8 = piVar1[2];
      iVar9 = piVar1[3];
      puVar2 = (uint *)(lVar12 + (ulonglong)((uint)uVar4 * iVar5));
      *puVar2 = -(uint)(*piVar1 < iVar13) ^ 0xffffffff;
      puVar2[1] = -(uint)(iVar7 < iVar13) ^ 0xffffffff;
      puVar2[2] = -(uint)(iVar8 < iVar13) ^ 0xffffffff;
      puVar2[3] = -(uint)(iVar9 < iVar13) ^ 0xffffffff;
      lVar12 = lVar12 + 0x10;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}



// FUNCTION 14803ca46 FUN_14803ca46 body=184 status=ok
// SIG undefined FUN_14803ca46(void)

void FUN_14803ca46(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  puVar2 = *(ushort **)(param_1 + 0x10);
  piVar4 = *(int **)(param_1 + 0x20);
  uVar1 = *puVar2;
  uVar6 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 1;
  iVar7 = *piVar4;
  lVar8 = 0;
  if (iVar7 <= (int)(uint)uVar1) {
    do {
      uVar6 = uVar6 - iVar7;
      iVar7 = piVar4[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar7 <= (int)uVar6);
  }
  iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar6);
  uVar1 = puVar2[1];
  uVar6 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 2;
  iVar5 = *piVar4;
  lVar8 = 0;
  if (iVar5 <= (int)(uint)uVar1) {
    do {
      uVar6 = uVar6 - iVar5;
      iVar5 = piVar4[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar5 <= (int)uVar6);
  }
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar6);
  uVar1 = puVar2[2];
  *(ushort **)(param_1 + 0x10) = puVar2 + 3;
  iVar3 = *(int *)(param_1 + 0x44);
  if (0 < iVar3) {
    piVar4 = (int *)((ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) +
                    *(longlong *)(param_1 + 0x70));
    uVar6 = (uint)(iVar7 <= iVar5);
    do {
      *piVar4 = (int)(uVar6 << 0x1f) >> 0x1f;
      piVar4[1] = (int)(uVar6 << 0x1f) >> 0x1f;
      piVar4[2] = (int)(uVar6 << 0x1f) >> 0x1f;
      piVar4[3] = (int)(uVar6 << 0x1f) >> 0x1f;
      piVar4 = piVar4 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}



// FUNCTION 14803cafe FUN_14803cafe body=152 status=ok
// SIG undefined FUN_14803cafe(void)

void FUN_14803cafe(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar6;
  uVar11 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  iVar13 = **(int **)(param_1 + 0x20);
  lVar12 = 0;
  if (iVar13 <= (int)(uint)uVar3) {
    do {
      uVar11 = uVar11 - iVar13;
      iVar13 = (*(int **)(param_1 + 0x20))[lVar12 + 1];
      lVar12 = lVar12 + 1;
    } while (iVar13 <= (int)uVar11);
  }
  iVar13 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar12 * 8) +
                   (longlong)(int)uVar11);
  uVar3 = puVar6[1];
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  lVar12 = *(longlong *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  uVar4 = puVar6[2];
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar10 = *(int *)(param_1 + 0x44);
  if (0 < iVar10) {
    do {
      piVar1 = (int *)(lVar12 + (ulonglong)((uint)uVar3 * iVar5));
      iVar7 = piVar1[1];
      iVar8 = piVar1[2];
      iVar9 = piVar1[3];
      puVar2 = (uint *)(lVar12 + (ulonglong)((uint)uVar4 * iVar5));
      *puVar2 = -(uint)(iVar13 < *piVar1) ^ 0xffffffff;
      puVar2[1] = -(uint)(iVar13 < iVar7) ^ 0xffffffff;
      puVar2[2] = -(uint)(iVar13 < iVar8) ^ 0xffffffff;
      puVar2[3] = -(uint)(iVar13 < iVar9) ^ 0xffffffff;
      lVar12 = lVar12 + 0x10;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}



// FUNCTION 14803cb96 FUN_14803cb96 body=184 status=ok
// SIG undefined FUN_14803cb96(void)

void FUN_14803cb96(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  puVar2 = *(ushort **)(param_1 + 0x10);
  piVar4 = *(int **)(param_1 + 0x20);
  uVar1 = *puVar2;
  uVar6 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 1;
  iVar7 = *piVar4;
  lVar8 = 0;
  if (iVar7 <= (int)(uint)uVar1) {
    do {
      uVar6 = uVar6 - iVar7;
      iVar7 = piVar4[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar7 <= (int)uVar6);
  }
  iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar6);
  uVar1 = puVar2[1];
  uVar6 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 2;
  iVar5 = *piVar4;
  lVar8 = 0;
  if (iVar5 <= (int)(uint)uVar1) {
    do {
      uVar6 = uVar6 - iVar5;
      iVar5 = piVar4[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar5 <= (int)uVar6);
  }
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar6);
  uVar1 = puVar2[2];
  *(ushort **)(param_1 + 0x10) = puVar2 + 3;
  iVar3 = *(int *)(param_1 + 0x44);
  if (0 < iVar3) {
    piVar4 = (int *)((ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) +
                    *(longlong *)(param_1 + 0x70));
    uVar6 = (uint)(iVar5 <= iVar7);
    do {
      *piVar4 = (int)(uVar6 << 0x1f) >> 0x1f;
      piVar4[1] = (int)(uVar6 << 0x1f) >> 0x1f;
      piVar4[2] = (int)(uVar6 << 0x1f) >> 0x1f;
      piVar4[3] = (int)(uVar6 << 0x1f) >> 0x1f;
      piVar4 = piVar4 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}



// FUNCTION 14803cc4e FUN_14803cc4e body=106 status=ok
// SIG undefined FUN_14803cc4e(void)

void FUN_14803cc4e(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  
  puVar8 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar8;
  *(ushort **)(param_1 + 0x10) = puVar8 + 1;
  lVar16 = *(longlong *)(param_1 + 0x70);
  iVar7 = *(int *)(param_1 + 0x80);
  uVar5 = puVar8[1];
  *(ushort **)(param_1 + 0x10) = puVar8 + 2;
  uVar6 = puVar8[2];
  *(ushort **)(param_1 + 0x10) = puVar8 + 3;
  iVar15 = *(int *)(param_1 + 0x44);
  if (0 < iVar15) {
    do {
      piVar1 = (int *)(lVar16 + (ulonglong)((uint)uVar4 * iVar7));
      iVar9 = piVar1[1];
      iVar10 = piVar1[2];
      iVar11 = piVar1[3];
      piVar2 = (int *)(lVar16 + (ulonglong)((uint)uVar5 * iVar7));
      iVar12 = piVar2[1];
      iVar13 = piVar2[2];
      iVar14 = piVar2[3];
      puVar3 = (uint *)(lVar16 + (ulonglong)((uint)uVar6 * iVar7));
      *puVar3 = -(uint)(*piVar1 == *piVar2) ^ 0xffffffff;
      puVar3[1] = -(uint)(iVar9 == iVar12) ^ 0xffffffff;
      puVar3[2] = -(uint)(iVar10 == iVar13) ^ 0xffffffff;
      puVar3[3] = -(uint)(iVar11 == iVar14) ^ 0xffffffff;
      lVar16 = lVar16 + 0x10;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  return;
}



// FUNCTION 14803ccb8 FUN_14803ccb8 body=152 status=ok
// SIG undefined FUN_14803ccb8(void)

void FUN_14803ccb8(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar6;
  uVar11 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  iVar13 = **(int **)(param_1 + 0x20);
  lVar12 = 0;
  if (iVar13 <= (int)(uint)uVar3) {
    do {
      uVar11 = uVar11 - iVar13;
      iVar13 = (*(int **)(param_1 + 0x20))[lVar12 + 1];
      lVar12 = lVar12 + 1;
    } while (iVar13 <= (int)uVar11);
  }
  iVar13 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar12 * 8) +
                   (longlong)(int)uVar11);
  uVar3 = puVar6[1];
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  lVar12 = *(longlong *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  uVar4 = puVar6[2];
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar10 = *(int *)(param_1 + 0x44);
  if (0 < iVar10) {
    do {
      piVar1 = (int *)(lVar12 + (ulonglong)((uint)uVar3 * iVar5));
      iVar7 = piVar1[1];
      iVar8 = piVar1[2];
      iVar9 = piVar1[3];
      puVar2 = (uint *)(lVar12 + (ulonglong)((uint)uVar4 * iVar5));
      *puVar2 = -(uint)(*piVar1 == iVar13) ^ 0xffffffff;
      puVar2[1] = -(uint)(iVar7 == iVar13) ^ 0xffffffff;
      puVar2[2] = -(uint)(iVar8 == iVar13) ^ 0xffffffff;
      puVar2[3] = -(uint)(iVar9 == iVar13) ^ 0xffffffff;
      lVar12 = lVar12 + 0x10;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}



// FUNCTION 14803cd50 FUN_14803cd50 body=95 status=ok
// SIG undefined FUN_14803cd50(void)

void FUN_14803cd50(longlong param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  
  puVar8 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar8;
  *(ushort **)(param_1 + 0x10) = puVar8 + 1;
  lVar16 = *(longlong *)(param_1 + 0x70);
  iVar7 = *(int *)(param_1 + 0x80);
  uVar5 = puVar8[1];
  *(ushort **)(param_1 + 0x10) = puVar8 + 2;
  uVar6 = puVar8[2];
  *(ushort **)(param_1 + 0x10) = puVar8 + 3;
  iVar15 = *(int *)(param_1 + 0x44);
  if (0 < iVar15) {
    do {
      puVar1 = (uint *)(lVar16 + (ulonglong)((uint)uVar4 * iVar7));
      uVar9 = puVar1[1];
      uVar10 = puVar1[2];
      uVar11 = puVar1[3];
      puVar2 = (uint *)(lVar16 + (ulonglong)((uint)uVar5 * iVar7));
      uVar12 = puVar2[1];
      uVar13 = puVar2[2];
      uVar14 = puVar2[3];
      puVar3 = (uint *)(lVar16 + (ulonglong)((uint)uVar6 * iVar7));
      *puVar3 = *puVar1 & *puVar2;
      puVar3[1] = uVar9 & uVar12;
      puVar3[2] = uVar10 & uVar13;
      puVar3[3] = uVar11 & uVar14;
      lVar16 = lVar16 + 0x10;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  return;
}



// FUNCTION 14803cdb0 FUN_14803cdb0 body=144 status=ok
// SIG undefined FUN_14803cdb0(void)

void FUN_14803cdb0(longlong param_1)

{
  uint *puVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  
  puVar5 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar5;
  uVar10 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar5 + 1;
  iVar12 = **(int **)(param_1 + 0x20);
  lVar11 = 0;
  if (iVar12 <= (int)(uint)uVar3) {
    do {
      uVar10 = uVar10 - iVar12;
      iVar12 = (*(int **)(param_1 + 0x20))[lVar11 + 1];
      lVar11 = lVar11 + 1;
    } while (iVar12 <= (int)uVar10);
  }
  uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar11 * 8) +
                    (longlong)(int)uVar10);
  uVar3 = puVar5[1];
  *(ushort **)(param_1 + 0x10) = puVar5 + 2;
  lVar11 = *(longlong *)(param_1 + 0x70);
  iVar12 = *(int *)(param_1 + 0x80);
  uVar4 = puVar5[2];
  *(ushort **)(param_1 + 0x10) = puVar5 + 3;
  iVar9 = *(int *)(param_1 + 0x44);
  if (0 < iVar9) {
    do {
      puVar1 = (uint *)(lVar11 + (ulonglong)((uint)uVar3 * iVar12));
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (uint *)(lVar11 + (ulonglong)((uint)uVar4 * iVar12));
      *puVar2 = *puVar1 & uVar10;
      puVar2[1] = uVar6 & uVar10;
      puVar2[2] = uVar7 & uVar10;
      puVar2[3] = uVar8 & uVar10;
      lVar11 = lVar11 + 0x10;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return;
}



// FUNCTION 14803ce40 FUN_14803ce40 body=170 status=ok
// SIG undefined FUN_14803ce40(void)

void FUN_14803ce40(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  puVar2 = *(ushort **)(param_1 + 0x10);
  piVar3 = *(int **)(param_1 + 0x20);
  uVar1 = *puVar2;
  uVar6 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 1;
  iVar4 = *piVar3;
  lVar8 = 0;
  if (iVar4 <= (int)(uint)uVar1) {
    do {
      uVar6 = uVar6 - iVar4;
      iVar4 = piVar3[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar4 <= (int)uVar6);
  }
  uVar6 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar6)
  ;
  uVar1 = puVar2[1];
  uVar7 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 2;
  iVar4 = *piVar3;
  lVar8 = 0;
  if (iVar4 <= (int)(uint)uVar1) {
    do {
      uVar7 = uVar7 - iVar4;
      iVar4 = piVar3[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar4 <= (int)uVar7);
  }
  uVar7 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar7)
  ;
  uVar1 = puVar2[2];
  *(ushort **)(param_1 + 0x10) = puVar2 + 3;
  iVar4 = *(int *)(param_1 + 0x44);
  if (0 < iVar4) {
    puVar5 = (uint *)((ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) +
                     *(longlong *)(param_1 + 0x70));
    uVar7 = uVar7 & uVar6;
    do {
      *puVar5 = uVar7;
      puVar5[1] = uVar7;
      puVar5[2] = uVar7;
      puVar5[3] = uVar7;
      puVar5 = puVar5 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}



// FUNCTION 14803ceea FUN_14803ceea body=95 status=ok
// SIG undefined FUN_14803ceea(void)

void FUN_14803ceea(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  
  puVar8 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar8;
  *(ushort **)(param_1 + 0x10) = puVar8 + 1;
  lVar12 = *(longlong *)(param_1 + 0x70);
  iVar7 = *(int *)(param_1 + 0x80);
  uVar5 = puVar8[1];
  *(ushort **)(param_1 + 0x10) = puVar8 + 2;
  uVar6 = puVar8[2];
  *(ushort **)(param_1 + 0x10) = puVar8 + 3;
  iVar11 = *(int *)(param_1 + 0x44);
  if (0 < iVar11) {
    do {
      puVar1 = (ulonglong *)(lVar12 + (ulonglong)((uint)uVar4 * iVar7));
      uVar9 = puVar1[1];
      puVar2 = (ulonglong *)(lVar12 + (ulonglong)((uint)uVar5 * iVar7));
      uVar10 = puVar2[1];
      puVar3 = (ulonglong *)(lVar12 + (ulonglong)((uint)uVar6 * iVar7));
      *puVar3 = *puVar1 | *puVar2;
      puVar3[1] = uVar9 | uVar10;
      lVar12 = lVar12 + 0x10;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  return;
}



// FUNCTION 14803cf4a FUN_14803cf4a body=148 status=ok
// SIG undefined FUN_14803cf4a(void)

void FUN_14803cf4a(longlong param_1)

{
  uint *puVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar6;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  lVar11 = *(longlong *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  uVar4 = puVar6[1];
  uVar13 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  iVar10 = **(int **)(param_1 + 0x20);
  lVar12 = 0;
  if (iVar10 <= (int)(uint)uVar4) {
    do {
      uVar13 = uVar13 - iVar10;
      iVar10 = (*(int **)(param_1 + 0x20))[lVar12 + 1];
      lVar12 = lVar12 + 1;
    } while (iVar10 <= (int)uVar13);
  }
  uVar13 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar12 * 8) +
                    (longlong)(int)uVar13);
  uVar4 = puVar6[2];
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar10 = *(int *)(param_1 + 0x44);
  if (0 < iVar10) {
    do {
      puVar1 = (uint *)(lVar11 + (ulonglong)((uint)uVar3 * iVar5));
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (uint *)(lVar11 + (ulonglong)((uint)uVar4 * iVar5));
      *puVar2 = *puVar1 | uVar13;
      puVar2[1] = uVar7 | uVar13;
      puVar2[2] = uVar8 | uVar13;
      puVar2[3] = uVar9 | uVar13;
      lVar11 = lVar11 + 0x10;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}



// FUNCTION 14803cfde FUN_14803cfde body=170 status=ok
// SIG undefined FUN_14803cfde(void)

void FUN_14803cfde(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  puVar2 = *(ushort **)(param_1 + 0x10);
  piVar3 = *(int **)(param_1 + 0x20);
  uVar1 = *puVar2;
  uVar6 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 1;
  iVar4 = *piVar3;
  lVar8 = 0;
  if (iVar4 <= (int)(uint)uVar1) {
    do {
      uVar6 = uVar6 - iVar4;
      iVar4 = piVar3[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar4 <= (int)uVar6);
  }
  uVar6 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar6)
  ;
  uVar1 = puVar2[1];
  uVar7 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 2;
  iVar4 = *piVar3;
  lVar8 = 0;
  if (iVar4 <= (int)(uint)uVar1) {
    do {
      uVar7 = uVar7 - iVar4;
      iVar4 = piVar3[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar4 <= (int)uVar7);
  }
  uVar7 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar7)
  ;
  uVar1 = puVar2[2];
  *(ushort **)(param_1 + 0x10) = puVar2 + 3;
  iVar4 = *(int *)(param_1 + 0x44);
  if (0 < iVar4) {
    puVar5 = (uint *)((ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) +
                     *(longlong *)(param_1 + 0x70));
    uVar7 = uVar7 | uVar6;
    do {
      *puVar5 = uVar7;
      puVar5[1] = uVar7;
      puVar5[2] = uVar7;
      puVar5[3] = uVar7;
      puVar5 = puVar5 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}



// FUNCTION 14803d088 FUN_14803d088 body=144 status=ok
// SIG undefined FUN_14803d088(void)

void FUN_14803d088(longlong param_1)

{
  uint *puVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  
  puVar5 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar5;
  uVar10 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar5 + 1;
  iVar12 = **(int **)(param_1 + 0x20);
  lVar11 = 0;
  if (iVar12 <= (int)(uint)uVar3) {
    do {
      uVar10 = uVar10 - iVar12;
      iVar12 = (*(int **)(param_1 + 0x20))[lVar11 + 1];
      lVar11 = lVar11 + 1;
    } while (iVar12 <= (int)uVar10);
  }
  uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar11 * 8) +
                    (longlong)(int)uVar10);
  uVar3 = puVar5[1];
  *(ushort **)(param_1 + 0x10) = puVar5 + 2;
  lVar11 = *(longlong *)(param_1 + 0x70);
  iVar12 = *(int *)(param_1 + 0x80);
  uVar4 = puVar5[2];
  *(ushort **)(param_1 + 0x10) = puVar5 + 3;
  iVar9 = *(int *)(param_1 + 0x44);
  if (0 < iVar9) {
    do {
      puVar1 = (uint *)(lVar11 + (ulonglong)((uint)uVar3 * iVar12));
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (uint *)(lVar11 + (ulonglong)((uint)uVar4 * iVar12));
      *puVar2 = *puVar1 ^ uVar10;
      puVar2[1] = uVar6 ^ uVar10;
      puVar2[2] = uVar7 ^ uVar10;
      puVar2[3] = uVar8 ^ uVar10;
      lVar11 = lVar11 + 0x10;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return;
}



// FUNCTION 14803d118 FUN_14803d118 body=170 status=ok
// SIG undefined FUN_14803d118(void)

void FUN_14803d118(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  puVar2 = *(ushort **)(param_1 + 0x10);
  piVar3 = *(int **)(param_1 + 0x20);
  uVar1 = *puVar2;
  uVar6 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 1;
  iVar4 = *piVar3;
  lVar8 = 0;
  if (iVar4 <= (int)(uint)uVar1) {
    do {
      uVar6 = uVar6 - iVar4;
      iVar4 = piVar3[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar4 <= (int)uVar6);
  }
  uVar6 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar6)
  ;
  uVar1 = puVar2[1];
  uVar7 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 2;
  iVar4 = *piVar3;
  lVar8 = 0;
  if (iVar4 <= (int)(uint)uVar1) {
    do {
      uVar7 = uVar7 - iVar4;
      iVar4 = piVar3[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar4 <= (int)uVar7);
  }
  uVar7 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar7)
  ;
  uVar1 = puVar2[2];
  *(ushort **)(param_1 + 0x10) = puVar2 + 3;
  iVar4 = *(int *)(param_1 + 0x44);
  if (0 < iVar4) {
    puVar5 = (uint *)((ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) +
                     *(longlong *)(param_1 + 0x70));
    uVar7 = uVar7 ^ uVar6;
    do {
      *puVar5 = uVar7;
      puVar5[1] = uVar7;
      puVar5[2] = uVar7;
      puVar5[3] = uVar7;
      puVar5 = puVar5 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}



// FUNCTION 14803d290 FUN_14803d290 body=164 status=ok
// SIG undefined FUN_14803d290(void)

void FUN_14803d290(longlong param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ushort *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  
  puVar10 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar10;
  *(ushort **)(param_1 + 0x10) = puVar10 + 1;
  lVar12 = *(longlong *)(param_1 + 0x70);
  iVar7 = *(int *)(param_1 + 0x80);
  uVar5 = puVar10[1];
  *(ushort **)(param_1 + 0x10) = puVar10 + 2;
  uVar6 = puVar10[2];
  *(ushort **)(param_1 + 0x10) = puVar10 + 3;
  iVar14 = *(int *)(param_1 + 0x44);
  if (0 < iVar14) {
    uVar13 = (ulonglong)((uint)uVar5 * iVar7);
    uVar11 = (ulonglong)((uint)uVar4 * iVar7);
    do {
      iVar8 = *(int *)(lVar12 + 8 + uVar11);
      bVar2 = *(byte *)(lVar12 + 8 + uVar13);
      iVar9 = *(int *)(lVar12 + 0xc + uVar11);
      bVar3 = *(byte *)(lVar12 + 0xc + uVar13);
      puVar1 = (undefined8 *)(lVar12 + (ulonglong)((uint)uVar6 * iVar7));
      *puVar1 = CONCAT44(*(int *)(lVar12 + 4 + uVar11) << (*(byte *)(lVar12 + 4 + uVar13) & 0x1f),
                         *(int *)(lVar12 + uVar11) << (*(byte *)(lVar12 + uVar13) & 0x1f));
      puVar1[1] = CONCAT44(iVar9 << (bVar3 & 0x1f),iVar8 << (bVar2 & 0x1f));
      lVar12 = lVar12 + 0x10;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  return;
}



// FUNCTION 14803d334 FUN_14803d334 body=195 status=ok
// SIG undefined FUN_14803d334(void)

void FUN_14803d334(longlong param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  ushort *puVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  
  puVar7 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar7;
  uVar8 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar7 + 1;
  iVar11 = **(int **)(param_1 + 0x20);
  lVar9 = 0;
  if (iVar11 <= (int)(uint)uVar4) {
    do {
      uVar8 = uVar8 - iVar11;
      iVar11 = (*(int **)(param_1 + 0x20))[lVar9 + 1];
      lVar9 = lVar9 + 1;
    } while (iVar11 <= (int)uVar8);
  }
  iVar11 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar9 * 8) + (longlong)(int)uVar8)
  ;
  uVar4 = puVar7[1];
  *(ushort **)(param_1 + 0x10) = puVar7 + 2;
  lVar9 = *(longlong *)(param_1 + 0x70);
  iVar6 = *(int *)(param_1 + 0x80);
  uVar5 = puVar7[2];
  *(ushort **)(param_1 + 0x10) = puVar7 + 3;
  iVar12 = *(int *)(param_1 + 0x44);
  if (0 < iVar12) {
    uVar10 = (ulonglong)((uint)uVar4 * iVar6);
    do {
      bVar2 = *(byte *)(lVar9 + 8 + uVar10);
      bVar3 = *(byte *)(lVar9 + 0xc + uVar10);
      puVar1 = (undefined8 *)(lVar9 + (ulonglong)((uint)uVar5 * iVar6));
      *puVar1 = CONCAT44(iVar11 << (*(byte *)(lVar9 + 4 + uVar10) & 0x1f),
                         iVar11 << (*(byte *)(lVar9 + uVar10) & 0x1f));
      puVar1[1] = CONCAT44(iVar11 << (bVar3 & 0x1f),iVar11 << (bVar2 & 0x1f));
      lVar9 = lVar9 + 0x10;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  return;
}



// FUNCTION 14803d3f8 FUN_14803d3f8 body=164 status=ok
// SIG undefined FUN_14803d3f8(void)

void FUN_14803d3f8(longlong param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ushort *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  
  puVar10 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar10;
  *(ushort **)(param_1 + 0x10) = puVar10 + 1;
  lVar12 = *(longlong *)(param_1 + 0x70);
  iVar7 = *(int *)(param_1 + 0x80);
  uVar5 = puVar10[1];
  *(ushort **)(param_1 + 0x10) = puVar10 + 2;
  uVar6 = puVar10[2];
  *(ushort **)(param_1 + 0x10) = puVar10 + 3;
  iVar14 = *(int *)(param_1 + 0x44);
  if (0 < iVar14) {
    uVar13 = (ulonglong)((uint)uVar5 * iVar7);
    uVar11 = (ulonglong)((uint)uVar4 * iVar7);
    do {
      iVar8 = *(int *)(lVar12 + 8 + uVar11);
      bVar2 = *(byte *)(lVar12 + 8 + uVar13);
      iVar9 = *(int *)(lVar12 + 0xc + uVar11);
      bVar3 = *(byte *)(lVar12 + 0xc + uVar13);
      puVar1 = (undefined8 *)(lVar12 + (ulonglong)((uint)uVar6 * iVar7));
      *puVar1 = CONCAT44(*(int *)(lVar12 + 4 + uVar11) >> (*(byte *)(lVar12 + 4 + uVar13) & 0x1f),
                         *(int *)(lVar12 + uVar11) >> (*(byte *)(lVar12 + uVar13) & 0x1f));
      puVar1[1] = CONCAT44(iVar9 >> (bVar3 & 0x1f),iVar8 >> (bVar2 & 0x1f));
      lVar12 = lVar12 + 0x10;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  return;
}



// FUNCTION 14803d49c FUN_14803d49c body=195 status=ok
// SIG undefined FUN_14803d49c(void)

void FUN_14803d49c(longlong param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  ushort *puVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  
  puVar7 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar7;
  uVar8 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar7 + 1;
  iVar11 = **(int **)(param_1 + 0x20);
  lVar9 = 0;
  if (iVar11 <= (int)(uint)uVar4) {
    do {
      uVar8 = uVar8 - iVar11;
      iVar11 = (*(int **)(param_1 + 0x20))[lVar9 + 1];
      lVar9 = lVar9 + 1;
    } while (iVar11 <= (int)uVar8);
  }
  iVar11 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar9 * 8) + (longlong)(int)uVar8)
  ;
  uVar4 = puVar7[1];
  *(ushort **)(param_1 + 0x10) = puVar7 + 2;
  lVar9 = *(longlong *)(param_1 + 0x70);
  iVar6 = *(int *)(param_1 + 0x80);
  uVar5 = puVar7[2];
  *(ushort **)(param_1 + 0x10) = puVar7 + 3;
  iVar12 = *(int *)(param_1 + 0x44);
  if (0 < iVar12) {
    uVar10 = (ulonglong)((uint)uVar4 * iVar6);
    do {
      bVar2 = *(byte *)(lVar9 + 8 + uVar10);
      bVar3 = *(byte *)(lVar9 + 0xc + uVar10);
      puVar1 = (undefined8 *)(lVar9 + (ulonglong)((uint)uVar5 * iVar6));
      *puVar1 = CONCAT44(iVar11 >> (*(byte *)(lVar9 + 4 + uVar10) & 0x1f),
                         iVar11 >> (*(byte *)(lVar9 + uVar10) & 0x1f));
      puVar1[1] = CONCAT44(iVar11 >> (bVar3 & 0x1f),iVar11 >> (bVar2 & 0x1f));
      lVar9 = lVar9 + 0x10;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  return;
}



// FUNCTION 14803d560 FUN_14803d560 body=176 status=ok
// SIG undefined FUN_14803d560(void)

void FUN_14803d560(longlong param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  
  puVar3 = *(ushort **)(param_1 + 0x10);
  piVar7 = *(int **)(param_1 + 0x20);
  uVar1 = *puVar3;
  uVar5 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar3 + 1;
  iVar6 = *piVar7;
  lVar8 = 0;
  if (iVar6 <= (int)(uint)uVar1) {
    do {
      uVar5 = uVar5 - iVar6;
      iVar6 = piVar7[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar6 <= (int)uVar5);
  }
  iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar5);
  uVar1 = puVar3[1];
  uVar5 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar3 + 2;
  iVar4 = *piVar7;
  lVar8 = 0;
  if (iVar4 <= (int)(uint)uVar1) {
    do {
      uVar5 = uVar5 - iVar4;
      iVar4 = piVar7[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar4 <= (int)uVar5);
  }
  uVar2 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar5);
  uVar1 = puVar3[2];
  *(ushort **)(param_1 + 0x10) = puVar3 + 3;
  iVar4 = *(int *)(param_1 + 0x44);
  if (0 < iVar4) {
    iVar6 = iVar6 >> ((byte)uVar2 & 0x1f);
    piVar7 = (int *)((ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) +
                    *(longlong *)(param_1 + 0x70));
    do {
      *piVar7 = iVar6;
      piVar7[1] = iVar6;
      piVar7[2] = iVar6;
      piVar7[3] = iVar6;
      piVar7 = piVar7 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}



// FUNCTION 14803d610 FUN_14803d610 body=170 status=ok
// SIG undefined FUN_14803d610(void)

void FUN_14803d610(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  puVar2 = *(ushort **)(param_1 + 0x10);
  piVar3 = *(int **)(param_1 + 0x20);
  uVar1 = *puVar2;
  uVar6 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 1;
  iVar4 = *piVar3;
  lVar8 = 0;
  if (iVar4 <= (int)(uint)uVar1) {
    do {
      uVar6 = uVar6 - iVar4;
      iVar4 = piVar3[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar4 <= (int)uVar6);
  }
  uVar6 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar6)
  ;
  uVar1 = puVar2[1];
  uVar7 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 2;
  iVar4 = *piVar3;
  lVar8 = 0;
  if (iVar4 <= (int)(uint)uVar1) {
    do {
      uVar7 = uVar7 - iVar4;
      iVar4 = piVar3[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar4 <= (int)uVar7);
  }
  uVar7 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar7)
  ;
  uVar1 = puVar2[2];
  *(ushort **)(param_1 + 0x10) = puVar2 + 3;
  iVar4 = *(int *)(param_1 + 0x44);
  if (0 < iVar4) {
    puVar5 = (uint *)((ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) +
                     *(longlong *)(param_1 + 0x70));
    uVar7 = uVar7 & uVar6;
    do {
      *puVar5 = uVar7;
      puVar5[1] = uVar7;
      puVar5[2] = uVar7;
      puVar5[3] = uVar7;
      puVar5 = puVar5 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}



// FUNCTION 14803d6ba FUN_14803d6ba body=144 status=ok
// SIG undefined FUN_14803d6ba(void)

void FUN_14803d6ba(longlong param_1)

{
  uint *puVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  
  puVar5 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar5;
  uVar10 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar5 + 1;
  iVar12 = **(int **)(param_1 + 0x20);
  lVar11 = 0;
  if (iVar12 <= (int)(uint)uVar3) {
    do {
      uVar10 = uVar10 - iVar12;
      iVar12 = (*(int **)(param_1 + 0x20))[lVar11 + 1];
      lVar11 = lVar11 + 1;
    } while (iVar12 <= (int)uVar10);
  }
  uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar11 * 8) +
                    (longlong)(int)uVar10);
  uVar3 = puVar5[1];
  *(ushort **)(param_1 + 0x10) = puVar5 + 2;
  lVar11 = *(longlong *)(param_1 + 0x70);
  iVar12 = *(int *)(param_1 + 0x80);
  uVar4 = puVar5[2];
  *(ushort **)(param_1 + 0x10) = puVar5 + 3;
  iVar9 = *(int *)(param_1 + 0x44);
  if (0 < iVar9) {
    do {
      puVar1 = (uint *)(lVar11 + (ulonglong)((uint)uVar3 * iVar12));
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (uint *)(lVar11 + (ulonglong)((uint)uVar4 * iVar12));
      *puVar2 = *puVar1 | uVar10;
      puVar2[1] = uVar6 | uVar10;
      puVar2[2] = uVar7 | uVar10;
      puVar2[3] = uVar8 | uVar10;
      lVar11 = lVar11 + 0x10;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return;
}



// FUNCTION 14803d74a FUN_14803d74a body=148 status=ok
// SIG undefined FUN_14803d74a(void)

void FUN_14803d74a(longlong param_1)

{
  uint *puVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar6;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  lVar11 = *(longlong *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  uVar4 = puVar6[1];
  uVar13 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  iVar10 = **(int **)(param_1 + 0x20);
  lVar12 = 0;
  if (iVar10 <= (int)(uint)uVar4) {
    do {
      uVar13 = uVar13 - iVar10;
      iVar10 = (*(int **)(param_1 + 0x20))[lVar12 + 1];
      lVar12 = lVar12 + 1;
    } while (iVar10 <= (int)uVar13);
  }
  uVar13 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar12 * 8) +
                    (longlong)(int)uVar13);
  uVar4 = puVar6[2];
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar10 = *(int *)(param_1 + 0x44);
  if (0 < iVar10) {
    do {
      puVar1 = (uint *)(lVar11 + (ulonglong)((uint)uVar3 * iVar5));
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (uint *)(lVar11 + (ulonglong)((uint)uVar4 * iVar5));
      *puVar2 = *puVar1 | uVar13;
      puVar2[1] = uVar7 | uVar13;
      puVar2[2] = uVar8 | uVar13;
      puVar2[3] = uVar9 | uVar13;
      lVar11 = lVar11 + 0x10;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}



// FUNCTION 14803d7de FUN_14803d7de body=170 status=ok
// SIG undefined FUN_14803d7de(void)

void FUN_14803d7de(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  puVar2 = *(ushort **)(param_1 + 0x10);
  piVar3 = *(int **)(param_1 + 0x20);
  uVar1 = *puVar2;
  uVar6 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 1;
  iVar4 = *piVar3;
  lVar8 = 0;
  if (iVar4 <= (int)(uint)uVar1) {
    do {
      uVar6 = uVar6 - iVar4;
      iVar4 = piVar3[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar4 <= (int)uVar6);
  }
  uVar6 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar6)
  ;
  uVar1 = puVar2[1];
  uVar7 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 2;
  iVar4 = *piVar3;
  lVar8 = 0;
  if (iVar4 <= (int)(uint)uVar1) {
    do {
      uVar7 = uVar7 - iVar4;
      iVar4 = piVar3[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar4 <= (int)uVar7);
  }
  uVar7 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar7)
  ;
  uVar1 = puVar2[2];
  *(ushort **)(param_1 + 0x10) = puVar2 + 3;
  iVar4 = *(int *)(param_1 + 0x44);
  if (0 < iVar4) {
    puVar5 = (uint *)((ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) +
                     *(longlong *)(param_1 + 0x70));
    uVar7 = uVar7 | uVar6;
    do {
      *puVar5 = uVar7;
      puVar5[1] = uVar7;
      puVar5[2] = uVar7;
      puVar5[3] = uVar7;
      puVar5 = puVar5 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}



// FUNCTION 14803d888 FUN_14803d888 body=95 status=ok
// SIG undefined FUN_14803d888(void)

void FUN_14803d888(longlong param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  
  puVar8 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar8;
  *(ushort **)(param_1 + 0x10) = puVar8 + 1;
  lVar16 = *(longlong *)(param_1 + 0x70);
  iVar7 = *(int *)(param_1 + 0x80);
  uVar5 = puVar8[1];
  *(ushort **)(param_1 + 0x10) = puVar8 + 2;
  uVar6 = puVar8[2];
  *(ushort **)(param_1 + 0x10) = puVar8 + 3;
  iVar15 = *(int *)(param_1 + 0x44);
  if (0 < iVar15) {
    do {
      puVar1 = (uint *)(lVar16 + (ulonglong)((uint)uVar4 * iVar7));
      uVar9 = puVar1[1];
      uVar10 = puVar1[2];
      uVar11 = puVar1[3];
      puVar2 = (uint *)(lVar16 + (ulonglong)((uint)uVar5 * iVar7));
      uVar12 = puVar2[1];
      uVar13 = puVar2[2];
      uVar14 = puVar2[3];
      puVar3 = (uint *)(lVar16 + (ulonglong)((uint)uVar6 * iVar7));
      *puVar3 = *puVar1 ^ *puVar2;
      puVar3[1] = uVar9 ^ uVar12;
      puVar3[2] = uVar10 ^ uVar13;
      puVar3[3] = uVar11 ^ uVar14;
      lVar16 = lVar16 + 0x10;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  return;
}



// FUNCTION 14803d8e8 FUN_14803d8e8 body=144 status=ok
// SIG undefined FUN_14803d8e8(void)

void FUN_14803d8e8(longlong param_1)

{
  uint *puVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  
  puVar5 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar5;
  uVar10 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar5 + 1;
  iVar12 = **(int **)(param_1 + 0x20);
  lVar11 = 0;
  if (iVar12 <= (int)(uint)uVar3) {
    do {
      uVar10 = uVar10 - iVar12;
      iVar12 = (*(int **)(param_1 + 0x20))[lVar11 + 1];
      lVar11 = lVar11 + 1;
    } while (iVar12 <= (int)uVar10);
  }
  uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar11 * 8) +
                    (longlong)(int)uVar10);
  uVar3 = puVar5[1];
  *(ushort **)(param_1 + 0x10) = puVar5 + 2;
  lVar11 = *(longlong *)(param_1 + 0x70);
  iVar12 = *(int *)(param_1 + 0x80);
  uVar4 = puVar5[2];
  *(ushort **)(param_1 + 0x10) = puVar5 + 3;
  iVar9 = *(int *)(param_1 + 0x44);
  if (0 < iVar9) {
    do {
      puVar1 = (uint *)(lVar11 + (ulonglong)((uint)uVar3 * iVar12));
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (uint *)(lVar11 + (ulonglong)((uint)uVar4 * iVar12));
      *puVar2 = *puVar1 ^ uVar10;
      puVar2[1] = uVar6 ^ uVar10;
      puVar2[2] = uVar7 ^ uVar10;
      puVar2[3] = uVar8 ^ uVar10;
      lVar11 = lVar11 + 0x10;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return;
}



// FUNCTION 14803d978 FUN_14803d978 body=148 status=ok
// SIG undefined FUN_14803d978(void)

void FUN_14803d978(longlong param_1)

{
  uint *puVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar6;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  lVar11 = *(longlong *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  uVar4 = puVar6[1];
  uVar13 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  iVar10 = **(int **)(param_1 + 0x20);
  lVar12 = 0;
  if (iVar10 <= (int)(uint)uVar4) {
    do {
      uVar13 = uVar13 - iVar10;
      iVar10 = (*(int **)(param_1 + 0x20))[lVar12 + 1];
      lVar12 = lVar12 + 1;
    } while (iVar10 <= (int)uVar13);
  }
  uVar13 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar12 * 8) +
                    (longlong)(int)uVar13);
  uVar4 = puVar6[2];
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar10 = *(int *)(param_1 + 0x44);
  if (0 < iVar10) {
    do {
      puVar1 = (uint *)(lVar11 + (ulonglong)((uint)uVar3 * iVar5));
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (uint *)(lVar11 + (ulonglong)((uint)uVar4 * iVar5));
      *puVar2 = *puVar1 ^ uVar13;
      puVar2[1] = uVar7 ^ uVar13;
      puVar2[2] = uVar8 ^ uVar13;
      puVar2[3] = uVar9 ^ uVar13;
      lVar11 = lVar11 + 0x10;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}



// FUNCTION 14803da0c FUN_14803da0c body=170 status=ok
// SIG undefined FUN_14803da0c(void)

void FUN_14803da0c(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  puVar2 = *(ushort **)(param_1 + 0x10);
  piVar3 = *(int **)(param_1 + 0x20);
  uVar1 = *puVar2;
  uVar6 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 1;
  iVar4 = *piVar3;
  lVar8 = 0;
  if (iVar4 <= (int)(uint)uVar1) {
    do {
      uVar6 = uVar6 - iVar4;
      iVar4 = piVar3[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar4 <= (int)uVar6);
  }
  uVar6 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar6)
  ;
  uVar1 = puVar2[1];
  uVar7 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 2;
  iVar4 = *piVar3;
  lVar8 = 0;
  if (iVar4 <= (int)(uint)uVar1) {
    do {
      uVar7 = uVar7 - iVar4;
      iVar4 = piVar3[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar4 <= (int)uVar7);
  }
  uVar7 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar7)
  ;
  uVar1 = puVar2[2];
  *(ushort **)(param_1 + 0x10) = puVar2 + 3;
  iVar4 = *(int *)(param_1 + 0x44);
  if (0 < iVar4) {
    puVar5 = (uint *)((ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) +
                     *(longlong *)(param_1 + 0x70));
    uVar7 = uVar7 ^ uVar6;
    do {
      *puVar5 = uVar7;
      puVar5[1] = uVar7;
      puVar5[2] = uVar7;
      puVar5[3] = uVar7;
      puVar5 = puVar5 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}



// FUNCTION 14803dea6 FUN_14803dea6 body=272 status=ok
// SIG undefined FUN_14803dea6(void)

void FUN_14803dea6(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  ushort *puVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  ulonglong uVar17;
  
  puVar9 = *(ushort **)(param_1 + 0x10);
  uVar1 = *puVar9;
  *(ushort **)(param_1 + 0x10) = puVar9 + 1;
  uVar2 = puVar9[1];
  *(ushort **)(param_1 + 0x10) = puVar9 + 2;
  lVar10 = *(longlong *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  uVar3 = puVar9[2];
  *(ushort **)(param_1 + 0x10) = puVar9 + 3;
  uVar4 = puVar9[3];
  *(ushort **)(param_1 + 0x10) = puVar9 + 4;
  iVar6 = *(int *)(param_1 + 0x40);
  if (0 < iVar6) {
    lVar11 = *(longlong *)(param_1 + 0x50);
    uVar17 = (ulonglong)((uint)uVar1 * 0xa0);
    iVar7 = *(int *)(lVar11 + 0x3c + uVar17);
    lVar11 = *(longlong *)
              (*(longlong *)(lVar11 + 0x10 + uVar17) +
              (longlong)(int)((uint)uVar4 + *(int *)(lVar11 + 0x34 + uVar17)) * 8);
    lVar14 = 0;
    do {
      lVar15 = (longlong)*(int *)((ulonglong)((uint)uVar2 * iVar5) + lVar10 + lVar14 * 4);
      if (lVar15 != -1) {
        fVar8 = *(float *)((ulonglong)((uint)uVar3 * iVar5) + lVar10 + lVar14 * 4);
        fVar12 = ABS(fVar8);
        if ((uint)fVar12 < 0x47800000) {
          if ((uint)fVar12 < 0x38800000) {
            fVar16 = fVar12 + 0.5;
          }
          else {
            fVar12 = (float)((int)fVar12 + 0x8000fff + (uint)(((uint)fVar12 >> 0xd & 1) != 0) >> 0xd
                            );
            fVar16 = fVar12;
          }
        }
        else {
          fVar16 = (float)((0x7f800000 < (uint)fVar12 | 0x3e) << 9);
        }
        iVar13 = movmskps(fVar12,ZEXT416((uint)fVar8));
        *(ushort *)((longlong)iVar7 * 2 + lVar11 + lVar15 * 2) =
             (ushort)(iVar13 << 0xf) | SUB42(fVar16,0);
      }
      lVar14 = lVar14 + 1;
    } while (iVar6 != (int)lVar14);
  }
  return;
}



// FUNCTION 14803dfb6 FUN_14803dfb6 body=286 status=ok
// SIG undefined FUN_14803dfb6(void)

void FUN_14803dfb6(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  longlong lVar6;
  int iVar7;
  ushort uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  
  puVar5 = *(ushort **)(param_1 + 0x10);
  uVar8 = *puVar5;
  *(ushort **)(param_1 + 0x10) = puVar5 + 1;
  uVar1 = puVar5[1];
  *(ushort **)(param_1 + 0x10) = puVar5 + 2;
  iVar3 = *(int *)(param_1 + 0x80);
  lVar6 = *(longlong *)(param_1 + 0x70);
  uVar2 = puVar5[2];
  uVar12 = (uint)uVar2;
  *(ushort **)(param_1 + 0x10) = puVar5 + 3;
  iVar7 = **(int **)(param_1 + 0x20);
  lVar14 = 0;
  if (iVar7 <= (int)(uint)uVar2) {
    do {
      uVar12 = uVar12 - iVar7;
      iVar7 = (*(int **)(param_1 + 0x20))[lVar14 + 1];
      lVar14 = lVar14 + 1;
    } while (iVar7 <= (int)uVar12);
  }
  fVar15 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar14 * 8) +
                     (longlong)(int)uVar12);
  uVar2 = puVar5[3];
  *(ushort **)(param_1 + 0x10) = puVar5 + 4;
  iVar7 = *(int *)(param_1 + 0x40);
  if (0 < iVar7) {
    lVar14 = *(longlong *)(param_1 + 0x50);
    uVar9 = (ulonglong)((uint)uVar8 * 0xa0);
    iVar10 = (uint)uVar2 + *(int *)(lVar14 + 0x34 + uVar9);
    iVar4 = *(int *)(lVar14 + 0x3c + uVar9);
    lVar14 = *(longlong *)(*(longlong *)(lVar14 + 0x10 + uVar9) + (longlong)iVar10 * 8);
    iVar10 = movmskps(iVar10,ZEXT416((uint)fVar15));
    fVar15 = ABS(fVar15);
    uVar8 = SUB42(fVar15 + 0.5,0);
    if (0x387fffff < (uint)fVar15) {
      uVar8 = (ushort)((int)fVar15 + 0x8000fff + (uint)(((uint)fVar15 >> 0xd & 1) != 0) >> 0xd);
    }
    if (0x477fffff < (uint)fVar15) {
      uVar8 = (0x7f800000 < (uint)fVar15 | 0x3e) << 9;
    }
    lVar11 = 0;
    do {
      lVar13 = (longlong)*(int *)((ulonglong)((uint)uVar1 * iVar3) + lVar6 + lVar11 * 4);
      if (lVar13 != -1) {
        *(ushort *)((longlong)iVar4 * 2 + lVar14 + lVar13 * 2) = uVar8 | (ushort)(iVar10 << 0xf);
      }
      lVar11 = lVar11 + 1;
    } while (iVar7 != (int)lVar11);
  }
  return;
}



// FUNCTION 14803e0d4 FUN_14803e0d4 body=140 status=ok
// SIG undefined FUN_14803e0d4(void)

void FUN_14803e0d4(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  int iVar10;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar1 = *puVar6;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  uVar2 = puVar6[1];
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  lVar7 = *(longlong *)(param_1 + 0x70);
  iVar4 = *(int *)(param_1 + 0x80);
  uVar3 = puVar6[2];
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar5 = *(int *)(param_1 + 0x40);
  if (0 < iVar5) {
    piVar8 = (int *)(*(longlong *)(param_1 + 0x50) + (ulonglong)((uint)uVar1 * 0xa0) + 0x38);
    lVar9 = 0;
    do {
      if (*(int *)((ulonglong)((uint)uVar2 * iVar4) + lVar7 + lVar9 * 4) == 0) {
        iVar10 = -1;
      }
      else {
        LOCK();
        iVar10 = *piVar8;
        *piVar8 = *piVar8 + 1;
        UNLOCK();
        iVar10 = iVar10 + 1;
      }
      *(int *)((ulonglong)((uint)uVar3 * iVar4) + lVar7 + lVar9 * 4) = iVar10;
      lVar9 = lVar9 + 1;
    } while (iVar5 != (int)lVar9);
  }
  return;
}



// FUNCTION 14803e160 FUN_14803e160 body=169 status=ok
// SIG undefined FUN_14803e160(void)

void FUN_14803e160(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int *piVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  
  puVar5 = *(ushort **)(param_1 + 0x10);
  uVar1 = *puVar5;
  *(ushort **)(param_1 + 0x10) = puVar5 + 1;
  uVar2 = puVar5[1];
  uVar10 = (uint)uVar2;
  *(ushort **)(param_1 + 0x10) = puVar5 + 2;
  iVar9 = **(int **)(param_1 + 0x20);
  lVar11 = 0;
  if (iVar9 <= (int)(uint)uVar2) {
    do {
      uVar10 = uVar10 - iVar9;
      iVar9 = (*(int **)(param_1 + 0x20))[lVar11 + 1];
      lVar11 = lVar11 + 1;
    } while (iVar9 <= (int)uVar10);
  }
  iVar9 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar11 * 8) + (longlong)(int)uVar10
                  );
  uVar2 = puVar5[2];
  *(ushort **)(param_1 + 0x10) = puVar5 + 3;
  iVar3 = *(int *)(param_1 + 0x40);
  if (0 < iVar3) {
    iVar4 = *(int *)(param_1 + 0x80);
    piVar6 = (int *)(*(longlong *)(param_1 + 0x50) + (ulonglong)((uint)uVar1 * 0xa0) + 0x38);
    lVar11 = *(longlong *)(param_1 + 0x70);
    lVar7 = 0;
    do {
      if (iVar9 == 0) {
        iVar8 = -1;
      }
      else {
        LOCK();
        iVar8 = *piVar6;
        *piVar6 = *piVar6 + 1;
        UNLOCK();
        iVar8 = iVar8 + 1;
      }
      *(int *)((ulonglong)((uint)uVar2 * iVar4) + lVar11 + lVar7 * 4) = iVar8;
      lVar7 = lVar7 + 1;
    } while (iVar3 != (int)lVar7);
  }
  return;
}



// FUNCTION 14803e20a FUN_14803e20a body=125 status=ok
// SIG undefined FUN_14803e20a(void)

void FUN_14803e20a(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x808);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x100;
    if (0x100 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x100 < *(uint *)(param_1 + 0x80c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x80c) = iVar5;
    FUN_14803e288(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14803e288 FUN_14803e288 body=144 status=ok
// SIG undefined FUN_14803e288(void)

void FUN_14803e288(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x800);
  if ((uint)param_3 < 0x101) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x800,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x800),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x800,param_2,param_3,8);
  return;
}



// FUNCTION 14803e318 FUN_14803e318 body=114 status=ok
// SIG undefined FUN_14803e318(void)

void FUN_14803e318(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14803e38a FUN_14803e38a body=948 status=ok
// SIG undefined FUN_14803e38a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14803e38a(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  float fVar3;
  ushort *puVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ushort uVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  uint *puVar19;
  undefined2 uVar20;
  uint uVar21;
  float fVar22;
  uint uVar23;
  uint uVar24;
  undefined1 in_XMM1 [16];
  undefined1 auVar25 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar26 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar27 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  longlong lVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 auVar37 [16];
  
  puVar4 = *(ushort **)(param_1 + 0x10);
  if (*(int *)(param_1 + 0xa8) == 0) {
    *(ushort **)(param_1 + 0x10) = puVar4 + 2;
    *(ushort **)(param_1 + 0x10) = puVar4 + (ulonglong)puVar4[2] * 2 + 3;
  }
  else {
    uVar1 = *puVar4;
    *(ushort **)(param_1 + 0x10) = puVar4 + 2;
    uVar2 = puVar4[2];
    *(ushort **)(param_1 + 0x10) = puVar4 + 3;
    auVar12 = _DAT_149931e80;
    if (uVar2 != 0) {
      uVar13 = 0;
      uVar18 = (ulonglong)((uint)uVar1 * 0xa0);
      auVar25 = pmovsxbq(in_XMM1,0x706);
      auVar26 = pmovsxbq(in_XMM2,0x504);
      auVar27 = pmovsxbq(in_XMM3,0x302);
      auVar28 = pmovsxbq(in_XMM4,0x100);
      do {
        puVar4 = *(ushort **)(param_1 + 0x10);
        uVar1 = *puVar4;
        uVar21 = (uint)uVar1;
        *(ushort **)(param_1 + 0x10) = puVar4 + 1;
        iVar16 = **(int **)(param_1 + 0x20);
        lVar14 = 0;
        if (iVar16 <= (int)(uint)uVar1) {
          do {
            uVar21 = uVar21 - iVar16;
            iVar16 = (*(int **)(param_1 + 0x20))[lVar14 + 1];
            lVar14 = lVar14 + 1;
          } while (iVar16 <= (int)uVar21);
        }
        lVar30 = *(longlong *)(param_1 + 0x50);
        fVar3 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar14 * 8) +
                          (longlong)(int)uVar21);
        uVar1 = puVar4[1];
        *(ushort **)(param_1 + 0x10) = puVar4 + 2;
        fVar22 = ABS(fVar3);
        if ((uint)fVar22 < 0x47800000) {
          if ((uint)fVar22 < 0x38800000) {
            fVar22 = fVar22 + 0.5;
          }
          else {
            fVar22 = (float)((int)fVar22 + 0x8000fff + (uint)(((uint)fVar22 >> 0xd & 1) != 0) >> 0xd
                            );
          }
        }
        else {
          fVar22 = (float)((0x7f800000 < (uint)fVar22 | 0x3e) << 9);
        }
        puVar19 = (uint *)((longlong)*(int *)(lVar30 + 0x3c + uVar18) * 2 +
                           *(longlong *)
                            (*(longlong *)(lVar30 + 0x10 + uVar18) +
                            (longlong)(int)((uint)uVar1 + *(int *)(lVar30 + 0x34 + uVar18)) * 8) +
                          (longlong)*(int *)(param_1 + 0xa4) * 2);
        uVar21 = *(uint *)(param_1 + 0xa8);
        uVar23 = movmskps(*(int *)(param_1 + 0xa4),ZEXT416((uint)fVar3));
        uVar23 = (uVar23 & 1) << 0xf;
        uVar24 = uVar23 | (uint)fVar22;
        if (7 < (int)uVar21) {
          uVar17 = uVar24 << 0x10 | uVar23 | (uint)fVar22 & 0xffff;
          uVar23 = uVar21;
          do {
            *puVar19 = uVar17;
            puVar19[1] = uVar17;
            puVar19[2] = uVar17;
            puVar19[3] = uVar17;
            puVar19 = puVar19 + 4;
            uVar21 = uVar23 - 8;
            bVar5 = 0xf < uVar23;
            uVar23 = uVar21;
          } while (bVar5);
        }
        if (0 < (int)uVar21) {
          lVar14 = (ulonglong)uVar21 - 1;
          auVar29._8_4_ = (int)lVar14;
          auVar29._0_8_ = lVar14;
          auVar29._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
          uVar15 = 0;
          do {
            auVar31._8_4_ = (int)uVar15;
            auVar31._0_8_ = uVar15;
            auVar31._12_4_ = (int)(uVar15 >> 0x20);
            auVar33 = (auVar31 | auVar28) ^ auVar12;
            lVar14 = SUB168(auVar29 ^ auVar12,0);
            auVar34._0_8_ = -(ulonglong)(lVar14 < auVar33._0_8_);
            lVar30 = SUB168(auVar29 ^ auVar12,8);
            auVar34._8_8_ = -(ulonglong)(lVar30 < auVar33._8_8_);
            auVar37 = pshuflw(unaff_XMM11,auVar34,0xe8);
            auVar33._8_4_ = 0xffffffff;
            auVar33._0_8_ = 0xffffffffffffffff;
            auVar33._12_4_ = 0xffffffff;
            auVar33 = packssdw(auVar37 ^ auVar33,auVar37 ^ auVar33);
            uVar20 = (undefined2)uVar24;
            if ((auVar33._0_4_ & 1) != 0) {
              *(undefined2 *)((longlong)puVar19 + uVar15 * 2) = uVar20;
            }
            auVar34 = packssdw(auVar34,auVar34);
            auVar37._8_4_ = 0xffffffff;
            auVar37._0_8_ = 0xffffffffffffffff;
            auVar37._12_4_ = 0xffffffff;
            auVar34 = packssdw(auVar34 ^ auVar37,auVar34 ^ auVar37);
            if ((auVar34[2] & 1) != 0) {
              *(undefined2 *)((longlong)puVar19 + uVar15 * 2 + 2) = uVar20;
            }
            auVar34 = (auVar31 | auVar27) ^ auVar12;
            auVar35._0_8_ = -(ulonglong)(lVar14 < auVar34._0_8_);
            auVar35._8_8_ = -(ulonglong)(lVar30 < auVar34._8_8_);
            auVar33 = packssdw(auVar33,auVar35);
            auVar6._8_4_ = 0xffffffff;
            auVar6._0_8_ = 0xffffffffffffffff;
            auVar6._12_4_ = 0xffffffff;
            auVar33 = packssdw(auVar33 ^ auVar6,auVar33 ^ auVar6);
            if ((auVar33[4] & 1) != 0) {
              *(undefined2 *)((longlong)puVar19 + uVar15 * 2 + 4) = uVar20;
            }
            auVar34 = pshufhw(auVar35,auVar35,0x84);
            auVar7._8_4_ = 0xffffffff;
            auVar7._0_8_ = 0xffffffffffffffff;
            auVar7._12_4_ = 0xffffffff;
            auVar34 = packssdw(auVar34 ^ auVar7,auVar34 ^ auVar7);
            if ((auVar34[6] & 1) != 0) {
              *(undefined2 *)((longlong)puVar19 + uVar15 * 2 + 6) = uVar20;
            }
            auVar34 = (auVar31 | auVar26) ^ auVar12;
            auVar36._0_8_ = -(ulonglong)(lVar14 < auVar34._0_8_);
            auVar36._8_8_ = -(ulonglong)(lVar30 < auVar34._8_8_);
            auVar33 = pshuflw(auVar33,auVar36,0xe8);
            auVar8._8_4_ = 0xffffffff;
            auVar8._0_8_ = 0xffffffffffffffff;
            auVar8._12_4_ = 0xffffffff;
            unaff_XMM11 = packssdw(auVar33 ^ auVar8,auVar33 ^ auVar8);
            if ((unaff_XMM11[8] & 1) != 0) {
              *(undefined2 *)((longlong)puVar19 + uVar15 * 2 + 8) = uVar20;
            }
            auVar33 = packssdw(auVar36,auVar36);
            auVar9._8_4_ = 0xffffffff;
            auVar9._0_8_ = 0xffffffffffffffff;
            auVar9._12_4_ = 0xffffffff;
            auVar33 = packssdw(auVar33 ^ auVar9,auVar33 ^ auVar9);
            if ((auVar33[10] & 1) != 0) {
              *(undefined2 *)((longlong)puVar19 + uVar15 * 2 + 10) = uVar20;
            }
            auVar31 = (auVar31 | auVar25) ^ auVar12;
            auVar32._0_8_ = -(ulonglong)(lVar14 < auVar31._0_8_);
            auVar32._8_8_ = -(ulonglong)(lVar30 < auVar31._8_8_);
            auVar33 = packssdw(auVar33,auVar32);
            auVar10._8_4_ = 0xffffffff;
            auVar10._0_8_ = 0xffffffffffffffff;
            auVar10._12_4_ = 0xffffffff;
            auVar33 = packssdw(auVar33 ^ auVar10,auVar33 ^ auVar10);
            if ((auVar33[0xc] & 1) != 0) {
              *(undefined2 *)((longlong)puVar19 + uVar15 * 2 + 0xc) = uVar20;
            }
            auVar33 = pshufhw(auVar32,auVar32,0x84);
            auVar11._8_4_ = 0xffffffff;
            auVar11._0_8_ = 0xffffffffffffffff;
            auVar11._12_4_ = 0xffffffff;
            auVar33 = packssdw(auVar33 ^ auVar11,auVar33 ^ auVar11);
            if ((auVar33[0xe] & 1) != 0) {
              *(undefined2 *)((longlong)puVar19 + uVar15 * 2 + 0xe) = uVar20;
            }
            uVar15 = uVar15 + 8;
          } while ((uVar21 + 7 & 0xfffffff8) != uVar15);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar2);
    }
  }
  return;
}



// FUNCTION 14803e73e FUN_14803e73e body=1708 status=ok
// SIG undefined FUN_14803e73e(void)

void FUN_14803e73e(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  float fVar4;
  ushort uVar5;
  float fVar6;
  int iVar7;
  longlong lVar8;
  float fVar9;
  int iVar10;
  float fVar11;
  ulonglong uVar12;
  float *pfVar13;
  ushort *puVar14;
  uint uVar15;
  uint uVar16;
  undefined1 in_XMM1 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar26;
  float fVar27;
  undefined1 in_XMM5 [16];
  undefined1 auVar25 [16];
  float fVar28;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar29 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar30 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  puVar14 = *(ushort **)(param_1 + 0x10);
  if (*(int *)(param_1 + 0xa8) == 0) {
    *(ushort **)(param_1 + 0x10) = puVar14 + 2;
    *(ushort **)(param_1 + 0x10) = puVar14 + (ulonglong)puVar14[2] * 2 + 3;
  }
  else {
    uVar1 = *puVar14;
    *(ushort **)(param_1 + 0x10) = puVar14 + 2;
    uVar2 = puVar14[2];
    *(ushort **)(param_1 + 0x10) = puVar14 + 3;
    if (uVar2 != 0) {
      uVar5 = 0;
      uVar12 = (ulonglong)((uint)uVar1 * 0xa0);
      auVar25 = pmovsxwd(in_XMM5,0x1ff01ff01ff01ff);
      auVar29 = pmovsxwd(unaff_XMM6,0x200020002000200);
      auVar30 = pmovsxwd(unaff_XMM7,0x7c007c007c007c00);
      auVar31 = pmovsxbd(unaff_XMM9,0x1010101);
      auVar17 = pmovsxwd(in_XMM1,0x8000800080008000);
      do {
        puVar14 = *(ushort **)(param_1 + 0x10);
        lVar8 = *(longlong *)(param_1 + 0x50);
        uVar1 = *puVar14;
        *(ushort **)(param_1 + 0x10) = puVar14 + 1;
        pfVar13 = (float *)((ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) +
                           *(longlong *)(param_1 + 0x70));
        uVar1 = puVar14[1];
        *(ushort **)(param_1 + 0x10) = puVar14 + 2;
        puVar14 = (ushort *)
                  ((longlong)*(int *)(lVar8 + 0x3c + uVar12) * 2 +
                   *(longlong *)
                    (*(longlong *)(lVar8 + 0x10 + uVar12) +
                    (longlong)(int)((uint)uVar1 + *(int *)(lVar8 + 0x34 + uVar12)) * 8) +
                  (longlong)*(int *)(param_1 + 0xa4) * 2);
        uVar16 = *(uint *)(param_1 + 0xa8);
        uVar15 = uVar16;
        if (7 < (int)uVar16) {
          do {
            fVar9 = ABS(*pfVar13);
            if ((uint)fVar9 < 0x47800000) {
              if ((uint)fVar9 < 0x38800000) {
                fVar6 = fVar9 + 0.5;
              }
              else {
                fVar9 = (float)((int)fVar9 + 0x8000fff + (uint)(((uint)fVar9 >> 0xd & 1) != 0) >>
                               0xd);
                fVar6 = fVar9;
              }
            }
            else {
              fVar6 = (float)((0x7f800000 < (uint)fVar9 | 0x3e) << 9);
            }
            iVar10 = movmskps(fVar9,ZEXT416((uint)*pfVar13));
            *puVar14 = (ushort)(iVar10 << 0xf) | SUB42(fVar6,0);
            fVar9 = ABS(pfVar13[1]);
            if ((uint)fVar9 < 0x47800000) {
              if ((uint)fVar9 < 0x38800000) {
                fVar6 = fVar9 + 0.5;
              }
              else {
                fVar9 = (float)((int)fVar9 + 0x8000fff + (uint)(((uint)fVar9 >> 0xd & 1) != 0) >>
                               0xd);
                fVar6 = fVar9;
              }
            }
            else {
              fVar6 = (float)((0x7f800000 < (uint)fVar9 | 0x3e) << 9);
            }
            iVar10 = movmskps(fVar9,ZEXT416((uint)pfVar13[1]));
            puVar14[1] = (ushort)(iVar10 << 0xf) | SUB42(fVar6,0);
            fVar9 = ABS(pfVar13[2]);
            if ((uint)fVar9 < 0x47800000) {
              if ((uint)fVar9 < 0x38800000) {
                fVar6 = fVar9 + 0.5;
              }
              else {
                fVar9 = (float)((int)fVar9 + 0x8000fff + (uint)(((uint)fVar9 >> 0xd & 1) != 0) >>
                               0xd);
                fVar6 = fVar9;
              }
            }
            else {
              fVar6 = (float)((0x7f800000 < (uint)fVar9 | 0x3e) << 9);
            }
            iVar10 = movmskps(fVar9,ZEXT416((uint)pfVar13[2]));
            puVar14[2] = (ushort)(iVar10 << 0xf) | SUB42(fVar6,0);
            fVar9 = ABS(pfVar13[3]);
            if ((uint)fVar9 < 0x47800000) {
              if ((uint)fVar9 < 0x38800000) {
                fVar6 = fVar9 + 0.5;
              }
              else {
                fVar9 = (float)((int)fVar9 + 0x8000fff + (uint)(((uint)fVar9 >> 0xd & 1) != 0) >>
                               0xd);
                fVar6 = fVar9;
              }
            }
            else {
              fVar6 = (float)((0x7f800000 < (uint)fVar9 | 0x3e) << 9);
            }
            iVar10 = movmskps(fVar9,ZEXT416((uint)pfVar13[3]));
            puVar14[3] = (ushort)(iVar10 << 0xf) | SUB42(fVar6,0);
            fVar9 = ABS(pfVar13[4]);
            if ((uint)fVar9 < 0x47800000) {
              if ((uint)fVar9 < 0x38800000) {
                fVar6 = fVar9 + 0.5;
              }
              else {
                fVar9 = (float)((int)fVar9 + 0x8000fff + (uint)(((uint)fVar9 >> 0xd & 1) != 0) >>
                               0xd);
                fVar6 = fVar9;
              }
            }
            else {
              fVar6 = (float)((0x7f800000 < (uint)fVar9 | 0x3e) << 9);
            }
            iVar10 = movmskps(fVar9,ZEXT416((uint)pfVar13[4]));
            puVar14[4] = (ushort)(iVar10 << 0xf) | SUB42(fVar6,0);
            fVar9 = ABS(pfVar13[5]);
            if ((uint)fVar9 < 0x47800000) {
              if ((uint)fVar9 < 0x38800000) {
                fVar6 = fVar9 + 0.5;
              }
              else {
                fVar9 = (float)((int)fVar9 + 0x8000fff + (uint)(((uint)fVar9 >> 0xd & 1) != 0) >>
                               0xd);
                fVar6 = fVar9;
              }
            }
            else {
              fVar6 = (float)((0x7f800000 < (uint)fVar9 | 0x3e) << 9);
            }
            iVar10 = movmskps(fVar9,ZEXT416((uint)pfVar13[5]));
            puVar14[5] = (ushort)(iVar10 << 0xf) | SUB42(fVar6,0);
            fVar9 = ABS(pfVar13[6]);
            if ((uint)fVar9 < 0x47800000) {
              if ((uint)fVar9 < 0x38800000) {
                fVar6 = fVar9 + 0.5;
              }
              else {
                fVar9 = (float)((int)fVar9 + 0x8000fff + (uint)(((uint)fVar9 >> 0xd & 1) != 0) >>
                               0xd);
                fVar6 = fVar9;
              }
            }
            else {
              fVar6 = (float)((0x7f800000 < (uint)fVar9 | 0x3e) << 9);
            }
            iVar10 = movmskps(fVar9,ZEXT416((uint)pfVar13[6]));
            puVar14[6] = (ushort)(iVar10 << 0xf) | SUB42(fVar6,0);
            fVar9 = ABS(pfVar13[7]);
            if ((uint)fVar9 < 0x47800000) {
              if ((uint)fVar9 < 0x38800000) {
                fVar6 = fVar9 + 0.5;
              }
              else {
                fVar9 = (float)((int)fVar9 + 0x8000fff + (uint)(((uint)fVar9 >> 0xd & 1) != 0) >>
                               0xd);
                fVar6 = fVar9;
              }
            }
            else {
              fVar6 = (float)((0x7f800000 < (uint)fVar9 | 0x3e) << 9);
            }
            iVar10 = movmskps(fVar9,ZEXT416((uint)pfVar13[7]));
            puVar14[7] = (ushort)(iVar10 << 0xf) | SUB42(fVar6,0);
            puVar14 = puVar14 + 8;
            pfVar13 = pfVar13 + 8;
            uVar16 = uVar15 - 8;
            bVar3 = 0xf < uVar15;
            uVar15 = uVar16;
          } while (bVar3);
        }
        uVar15 = uVar16;
        if (3 < (int)uVar16) {
          do {
            fVar9 = *pfVar13;
            fVar6 = pfVar13[1];
            fVar11 = pfVar13[2];
            fVar4 = pfVar13[3];
            fVar24 = ABS(fVar9);
            fVar26 = ABS(fVar6);
            fVar27 = ABS(fVar11);
            fVar28 = ABS(fVar4);
            auVar18._0_4_ = (uint)fVar24 >> 0xd;
            auVar18._4_4_ = (uint)fVar26 >> 0xd;
            auVar18._8_4_ = (uint)fVar27 >> 0xd;
            auVar18._12_4_ = (uint)fVar28 >> 0xd;
            auVar23._0_4_ =
                 -(uint)((float)((uint)((uint)fVar24 < 0x38800000) * 0x38800000 |
                                (uint)((uint)fVar24 >= 0x38800000) * (int)fVar24) == fVar24);
            auVar23._4_4_ =
                 -(uint)((float)((uint)((uint)fVar26 < 0x38800000) * 0x38800000 |
                                (uint)((uint)fVar26 >= 0x38800000) * (int)fVar26) == fVar26);
            auVar23._8_4_ =
                 -(uint)((float)((uint)((uint)fVar27 < 0x38800000) * 0x38800000 |
                                (uint)((uint)fVar27 >= 0x38800000) * (int)fVar27) == fVar27);
            auVar23._12_4_ =
                 -(uint)((float)((uint)((uint)fVar28 < 0x38800000) * 0x38800000 |
                                (uint)((uint)fVar28 >= 0x38800000) * (int)fVar28) == fVar28);
            auVar19 = auVar18 & auVar31;
            auVar22._0_4_ = (int)(fVar24 + 0.5) + -0x3f000000;
            auVar22._4_4_ = (int)(fVar26 + 0.5) + -0x3f000000;
            auVar22._8_4_ = (int)(fVar27 + 0.5) + -0x3f000000;
            auVar22._12_4_ = (int)(fVar28 + 0.5) + -0x3f000000;
            auVar20._0_4_ = auVar19._0_4_ + (int)fVar24 + 0xc8000fffU >> 0xd;
            auVar20._4_4_ = auVar19._4_4_ + (int)fVar26 + 0xc8000fffU >> 0xd;
            auVar20._8_4_ = auVar19._8_4_ + (int)fVar27 + 0xc8000fffU >> 0xd;
            auVar20._12_4_ = auVar19._12_4_ + (int)fVar28 + 0xc8000fffU >> 0xd;
            auVar23 = blendvps(auVar22,auVar20,auVar23);
            auVar19._0_4_ =
                 -(uint)((float)((uint)((uint)fVar24 < 0x47800000) * 0x47800000 |
                                (uint)((uint)fVar24 >= 0x47800000) * (int)fVar24) == fVar24);
            auVar19._4_4_ =
                 -(uint)((float)((uint)((uint)fVar26 < 0x47800000) * 0x47800000 |
                                (uint)((uint)fVar26 >= 0x47800000) * (int)fVar26) == fVar26);
            auVar19._8_4_ =
                 -(uint)((float)((uint)((uint)fVar27 < 0x47800000) * 0x47800000 |
                                (uint)((uint)fVar27 >= 0x47800000) * (int)fVar27) == fVar27);
            auVar19._12_4_ =
                 -(uint)((float)((uint)((uint)fVar28 < 0x47800000) * 0x47800000 |
                                (uint)((uint)fVar28 >= 0x47800000) * (int)fVar28) == fVar28);
            auVar21._4_4_ = -(uint)NAN(fVar6);
            auVar21._0_4_ = -(uint)NAN(fVar9);
            auVar21._8_4_ = -(uint)NAN(fVar11);
            auVar21._12_4_ = -(uint)NAN(fVar4);
            auVar32._0_4_ = (int)fVar9 >> 0x10;
            auVar32._4_4_ = (int)fVar6 >> 0x10;
            auVar32._8_4_ = (int)fVar11 >> 0x10;
            auVar32._12_4_ = (int)fVar4 >> 0x10;
            auVar23 = auVar32 & auVar17 |
                      ((auVar18 & auVar25 | auVar29) & auVar21 | auVar30) & auVar19 |
                      ~auVar19 & auVar23;
            auVar23 = packssdw(auVar23,auVar23);
            *(longlong *)puVar14 = auVar23._0_8_;
            puVar14 = puVar14 + 4;
            pfVar13 = pfVar13 + 4;
            uVar16 = uVar15 - 4;
            bVar3 = 7 < uVar15;
            uVar15 = uVar16;
          } while (bVar3);
        }
        if (0 < (int)uVar16) {
          iVar10 = uVar16 + 1;
          lVar8 = 0;
          do {
            fVar9 = *(float *)((longlong)pfVar13 + lVar8 * 2);
            fVar6 = ABS(fVar9);
            if ((uint)fVar6 < 0x47800000) {
              if ((uint)fVar6 < 0x38800000) {
                fVar11 = fVar6 + 0.5;
              }
              else {
                fVar6 = (float)((int)fVar6 + 0x8000fff + (uint)(((uint)fVar6 >> 0xd & 1) != 0) >>
                               0xd);
                fVar11 = fVar6;
              }
            }
            else {
              fVar11 = (float)((0x7f800000 < (uint)fVar6 | 0x3e) << 9);
            }
            iVar7 = movmskps(fVar6,ZEXT416((uint)fVar9));
            *(ushort *)((longlong)puVar14 + lVar8) = (ushort)(iVar7 << 0xf) | SUB42(fVar11,0);
            lVar8 = lVar8 + 2;
            iVar10 = iVar10 + -1;
          } while (1 < iVar10);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar2);
    }
  }
  return;
}



// FUNCTION 14803edea FUN_14803edea body=1324 status=ok
// SIG undefined FUN_14803edea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14803edea(longlong param_1)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  ushort uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 (*pauVar17) [16];
  float fVar18;
  int iVar19;
  ushort *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar28 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar31 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar32 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 auVar33 [16];
  undefined1 unaff_XMM12 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  
  if (*(int *)(param_1 + 0xa8) == 0) {
    lVar15 = *(longlong *)(param_1 + 0x10);
    *(longlong *)(param_1 + 0x10) = lVar15 + 4;
    *(ulonglong *)(param_1 + 0x10) = lVar15 + (ulonglong)*(ushort *)(lVar15 + 4) * 4 + 6;
  }
  else {
    if (*(char *)(param_1 + 0xac) == '\x01') {
      FUN_14803f316();
      return;
    }
    puVar20 = *(ushort **)(param_1 + 0x10);
    uVar2 = *puVar20;
    *(ushort **)(param_1 + 0x10) = puVar20 + 1;
    uVar14 = puVar20[1];
    *(ushort **)(param_1 + 0x10) = puVar20 + 2;
    uVar3 = puVar20[2];
    *(ushort **)(param_1 + 0x10) = puVar20 + 3;
    auVar6 = _DAT_1499319a0;
    if (uVar3 != 0) {
      lVar15 = (ulonglong)((uint)uVar14 * *(int *)(param_1 + 0x80)) + *(longlong *)(param_1 + 0x70);
      uVar14 = 0;
      uVar7 = (ulonglong)((uint)uVar2 * 0xa0);
      auVar29 = pmovsxwd(in_XMM4,0x1ff01ff01ff01ff);
      auVar31 = pmovsxwd(in_XMM5,0x200020002000200);
      auVar32 = pmovsxwd(unaff_XMM6,0x7c007c007c007c00);
      auVar33 = pmovsxbd(unaff_XMM11,0x1010101);
      auVar34 = pmovsxwd(unaff_XMM12,0x8000800080008000);
      do {
        puVar20 = *(ushort **)(param_1 + 0x10);
        lVar9 = *(longlong *)(param_1 + 0x50);
        uVar2 = *puVar20;
        *(ushort **)(param_1 + 0x10) = puVar20 + 1;
        uVar16 = (ulonglong)((uint)uVar2 * *(int *)(param_1 + 0x80));
        lVar5 = *(longlong *)(param_1 + 0x70);
        uVar2 = puVar20[1];
        *(ushort **)(param_1 + 0x10) = puVar20 + 2;
        puVar20 = (ushort *)
                  ((longlong)*(int *)(lVar9 + 0x3c + uVar7) * 2 +
                   *(longlong *)
                    (*(longlong *)(lVar9 + 0x10 + uVar7) +
                    (longlong)(int)((uint)uVar2 + *(int *)(lVar9 + 0x34 + uVar7)) * 8) +
                  (longlong)*(int *)(param_1 + 0xa4) * 2);
        iVar13 = *(int *)(param_1 + 0xa8);
        if (iVar13 < 4) {
          uVar11 = 0;
        }
        else {
          pauVar17 = (undefined1 (*) [16])(lVar5 + uVar16);
          uVar11 = 0;
          do {
            uVar8 = (ulonglong)*(char *)(lVar15 + uVar11);
            auVar35 = pshufb(*pauVar17,*(undefined1 (*) [16])(&DAT_14cb2bae0 + uVar8 * 0x10));
            auVar30 = auVar35 & auVar6;
            fVar18 = auVar30._0_4_;
            auVar21._0_4_ = (uint)fVar18 >> 0xd;
            fVar25 = auVar30._4_4_;
            auVar21._4_4_ = (uint)fVar25 >> 0xd;
            fVar26 = auVar30._8_4_;
            fVar27 = auVar30._12_4_;
            auVar21._8_4_ = (uint)fVar26 >> 0xd;
            auVar21._12_4_ = (uint)fVar27 >> 0xd;
            auVar30._0_4_ =
                 -(uint)((float)((uint)((uint)fVar18 < 0x38800000) * 0x38800000 |
                                (uint)((uint)fVar18 >= 0x38800000) * (int)fVar18) == fVar18);
            auVar30._4_4_ =
                 -(uint)((float)((uint)((uint)fVar25 < 0x38800000) * 0x38800000 |
                                (uint)((uint)fVar25 >= 0x38800000) * (int)fVar25) == fVar25);
            auVar30._8_4_ =
                 -(uint)((float)((uint)((uint)fVar26 < 0x38800000) * 0x38800000 |
                                (uint)((uint)fVar26 >= 0x38800000) * (int)fVar26) == fVar26);
            auVar30._12_4_ =
                 -(uint)((float)((uint)((uint)fVar27 < 0x38800000) * 0x38800000 |
                                (uint)((uint)fVar27 >= 0x38800000) * (int)fVar27) == fVar27);
            auVar22 = auVar21 & auVar33;
            auVar28._0_4_ = (int)(fVar18 + 0.5) + -0x3f000000;
            auVar28._4_4_ = (int)(fVar25 + 0.5) + -0x3f000000;
            auVar28._8_4_ = (int)(fVar26 + 0.5) + -0x3f000000;
            auVar28._12_4_ = (int)(fVar27 + 0.5) + -0x3f000000;
            auVar23._0_4_ = auVar22._0_4_ + (int)fVar18 + 0xc8000fffU >> 0xd;
            auVar23._4_4_ = auVar22._4_4_ + (int)fVar25 + 0xc8000fffU >> 0xd;
            auVar23._8_4_ = auVar22._8_4_ + (int)fVar26 + 0xc8000fffU >> 0xd;
            auVar23._12_4_ = auVar22._12_4_ + (int)fVar27 + 0xc8000fffU >> 0xd;
            auVar30 = blendvps(auVar28,auVar23,auVar30);
            auVar22._0_4_ =
                 -(uint)((float)((uint)((uint)fVar18 < 0x47800000) * 0x47800000 |
                                (uint)((uint)fVar18 >= 0x47800000) * (int)fVar18) == fVar18);
            auVar22._4_4_ =
                 -(uint)((float)((uint)((uint)fVar25 < 0x47800000) * 0x47800000 |
                                (uint)((uint)fVar25 >= 0x47800000) * (int)fVar25) == fVar25);
            auVar22._8_4_ =
                 -(uint)((float)((uint)((uint)fVar26 < 0x47800000) * 0x47800000 |
                                (uint)((uint)fVar26 >= 0x47800000) * (int)fVar26) == fVar26);
            auVar22._12_4_ =
                 -(uint)((float)((uint)((uint)fVar27 < 0x47800000) * 0x47800000 |
                                (uint)((uint)fVar27 >= 0x47800000) * (int)fVar27) == fVar27);
            auVar24._4_4_ = -(uint)NAN(auVar35._4_4_);
            auVar24._0_4_ = -(uint)NAN(auVar35._0_4_);
            auVar24._8_4_ = -(uint)NAN(auVar35._8_4_);
            auVar24._12_4_ = -(uint)NAN(auVar35._12_4_);
            auVar36._0_4_ = (int)auVar35._0_4_ >> 0x10;
            auVar36._4_4_ = (int)auVar35._4_4_ >> 0x10;
            auVar36._8_4_ = (int)auVar35._8_4_ >> 0x10;
            auVar36._12_4_ = (int)auVar35._12_4_ >> 0x10;
            auVar30 = auVar36 & auVar34 |
                      ((auVar21 & auVar29 | auVar31) & auVar24 | auVar32) & auVar22 |
                      ~auVar22 & auVar30;
            auVar30 = packssdw(auVar30,auVar30);
            *(longlong *)puVar20 = auVar30._0_8_;
            uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
            uVar8 = (uVar8 >> 2 & 0x3333333333333333) + (uVar8 & 0x3333333333333333);
            lVar9 = ((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
            puVar20 = puVar20 + (lVar9 >> 0x38);
            iVar13 = iVar13 - (char)((ulonglong)lVar9 >> 0x38);
            uVar11 = uVar11 + 1;
            pauVar17 = pauVar17 + 1;
          } while (3 < iVar13);
        }
        if (iVar13 != 0) {
          uVar12 = 0;
          lVar9 = 0;
          do {
            cVar1 = *(char *)((uVar11 & 0xffffffff) + lVar15 + lVar9);
            uVar8 = (longlong)cVar1 - ((ulonglong)(longlong)cVar1 >> 1 & 0x5555555555555555);
            uVar8 = (uVar8 >> 2 & 0x3333333333333333) + (uVar8 & 0x3333333333333333);
            uVar8 = ((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
            if (uVar8 >> 0x38 != 0) {
              lVar10 = 0;
              do {
                if (((uint)(int)cVar1 >> ((uint)lVar10 & 0x1f) & 1) != 0) {
                  uVar4 = *(uint *)((ulonglong)(uVar12 >> 2) * 0x10 +
                                    lVar5 + uVar16 + (ulonglong)(uint)((int)uVar11 << 2) * 4 +
                                   lVar10 * 4);
                  fVar18 = (float)(uVar4 & auVar6._0_4_);
                  if ((uint)fVar18 < 0x47800000) {
                    if ((uint)fVar18 < 0x38800000) {
                      fVar25 = fVar18 + 0.5;
                    }
                    else {
                      fVar18 = (float)((int)fVar18 + 0x8000fff +
                                       (uint)(((uint)fVar18 >> 0xd & 1) != 0) >> 0xd);
                      fVar25 = fVar18;
                    }
                  }
                  else {
                    fVar25 = (float)((0x7f800000 < (uint)fVar18 | 0x3e) << 9);
                  }
                  iVar19 = movmskps(fVar18,ZEXT416(uVar4));
                  *puVar20 = (ushort)(iVar19 << 0xf) | SUB42(fVar25,0);
                  puVar20 = puVar20 + 1;
                }
                lVar10 = lVar10 + 1;
              } while (lVar10 != 4);
              iVar13 = iVar13 - (char)(uVar8 >> 0x38);
            }
            lVar9 = lVar9 + 1;
            uVar12 = uVar12 + 4;
          } while (iVar13 != 0);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar3);
    }
  }
  return;
}



// FUNCTION 14803f316 FUN_14803f316 body=1669 status=ok
// SIG undefined FUN_14803f316(void)

void FUN_14803f316(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  float fVar4;
  ushort uVar5;
  float fVar6;
  int iVar7;
  longlong lVar8;
  float fVar9;
  int iVar10;
  float fVar11;
  ulonglong uVar12;
  float *pfVar13;
  ushort *puVar14;
  uint uVar15;
  uint uVar16;
  undefined1 in_XMM1 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar26;
  float fVar27;
  undefined1 in_XMM5 [16];
  undefined1 auVar25 [16];
  float fVar28;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar29 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar30 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  puVar14 = *(ushort **)(param_1 + 0x10);
  uVar1 = *puVar14;
  *(ushort **)(param_1 + 0x10) = puVar14 + 2;
  uVar2 = puVar14[2];
  *(ushort **)(param_1 + 0x10) = puVar14 + 3;
  if (uVar2 != 0) {
    uVar5 = 0;
    uVar12 = (ulonglong)((uint)uVar1 * 0xa0);
    auVar25 = pmovsxwd(in_XMM5,0x1ff01ff01ff01ff);
    auVar29 = pmovsxwd(unaff_XMM6,0x200020002000200);
    auVar30 = pmovsxwd(unaff_XMM7,0x7c007c007c007c00);
    auVar31 = pmovsxbd(unaff_XMM9,0x1010101);
    auVar17 = pmovsxwd(in_XMM1,0x8000800080008000);
    do {
      puVar14 = *(ushort **)(param_1 + 0x10);
      lVar8 = *(longlong *)(param_1 + 0x50);
      uVar1 = *puVar14;
      *(ushort **)(param_1 + 0x10) = puVar14 + 1;
      pfVar13 = (float *)((ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) +
                         *(longlong *)(param_1 + 0x70));
      uVar1 = puVar14[1];
      *(ushort **)(param_1 + 0x10) = puVar14 + 2;
      puVar14 = (ushort *)
                ((longlong)*(int *)(lVar8 + 0x3c + uVar12) * 2 +
                 *(longlong *)
                  (*(longlong *)(lVar8 + 0x10 + uVar12) +
                  (longlong)(int)((uint)uVar1 + *(int *)(lVar8 + 0x34 + uVar12)) * 8) +
                (longlong)*(int *)(param_1 + 0xa4) * 2);
      uVar16 = *(uint *)(param_1 + 0xa8);
      uVar15 = uVar16;
      if (7 < (int)uVar16) {
        do {
          fVar9 = ABS(*pfVar13);
          if ((uint)fVar9 < 0x47800000) {
            if ((uint)fVar9 < 0x38800000) {
              fVar6 = fVar9 + 0.5;
            }
            else {
              fVar9 = (float)((int)fVar9 + 0x8000fff + (uint)(((uint)fVar9 >> 0xd & 1) != 0) >> 0xd)
              ;
              fVar6 = fVar9;
            }
          }
          else {
            fVar6 = (float)((0x7f800000 < (uint)fVar9 | 0x3e) << 9);
          }
          iVar10 = movmskps(fVar9,ZEXT416((uint)*pfVar13));
          *puVar14 = (ushort)(iVar10 << 0xf) | SUB42(fVar6,0);
          fVar9 = ABS(pfVar13[1]);
          if ((uint)fVar9 < 0x47800000) {
            if ((uint)fVar9 < 0x38800000) {
              fVar6 = fVar9 + 0.5;
            }
            else {
              fVar9 = (float)((int)fVar9 + 0x8000fff + (uint)(((uint)fVar9 >> 0xd & 1) != 0) >> 0xd)
              ;
              fVar6 = fVar9;
            }
          }
          else {
            fVar6 = (float)((0x7f800000 < (uint)fVar9 | 0x3e) << 9);
          }
          iVar10 = movmskps(fVar9,ZEXT416((uint)pfVar13[1]));
          puVar14[1] = (ushort)(iVar10 << 0xf) | SUB42(fVar6,0);
          fVar9 = ABS(pfVar13[2]);
          if ((uint)fVar9 < 0x47800000) {
            if ((uint)fVar9 < 0x38800000) {
              fVar6 = fVar9 + 0.5;
            }
            else {
              fVar9 = (float)((int)fVar9 + 0x8000fff + (uint)(((uint)fVar9 >> 0xd & 1) != 0) >> 0xd)
              ;
              fVar6 = fVar9;
            }
          }
          else {
            fVar6 = (float)((0x7f800000 < (uint)fVar9 | 0x3e) << 9);
          }
          iVar10 = movmskps(fVar9,ZEXT416((uint)pfVar13[2]));
          puVar14[2] = (ushort)(iVar10 << 0xf) | SUB42(fVar6,0);
          fVar9 = ABS(pfVar13[3]);
          if ((uint)fVar9 < 0x47800000) {
            if ((uint)fVar9 < 0x38800000) {
              fVar6 = fVar9 + 0.5;
            }
            else {
              fVar9 = (float)((int)fVar9 + 0x8000fff + (uint)(((uint)fVar9 >> 0xd & 1) != 0) >> 0xd)
              ;
              fVar6 = fVar9;
            }
          }
          else {
            fVar6 = (float)((0x7f800000 < (uint)fVar9 | 0x3e) << 9);
          }
          iVar10 = movmskps(fVar9,ZEXT416((uint)pfVar13[3]));
          puVar14[3] = (ushort)(iVar10 << 0xf) | SUB42(fVar6,0);
          fVar9 = ABS(pfVar13[4]);
          if ((uint)fVar9 < 0x47800000) {
            if ((uint)fVar9 < 0x38800000) {
              fVar6 = fVar9 + 0.5;
            }
            else {
              fVar9 = (float)((int)fVar9 + 0x8000fff + (uint)(((uint)fVar9 >> 0xd & 1) != 0) >> 0xd)
              ;
              fVar6 = fVar9;
            }
          }
          else {
            fVar6 = (float)((0x7f800000 < (uint)fVar9 | 0x3e) << 9);
          }
          iVar10 = movmskps(fVar9,ZEXT416((uint)pfVar13[4]));
          puVar14[4] = (ushort)(iVar10 << 0xf) | SUB42(fVar6,0);
          fVar9 = ABS(pfVar13[5]);
          if ((uint)fVar9 < 0x47800000) {
            if ((uint)fVar9 < 0x38800000) {
              fVar6 = fVar9 + 0.5;
            }
            else {
              fVar9 = (float)((int)fVar9 + 0x8000fff + (uint)(((uint)fVar9 >> 0xd & 1) != 0) >> 0xd)
              ;
              fVar6 = fVar9;
            }
          }
          else {
            fVar6 = (float)((0x7f800000 < (uint)fVar9 | 0x3e) << 9);
          }
          iVar10 = movmskps(fVar9,ZEXT416((uint)pfVar13[5]));
          puVar14[5] = (ushort)(iVar10 << 0xf) | SUB42(fVar6,0);
          fVar9 = ABS(pfVar13[6]);
          if ((uint)fVar9 < 0x47800000) {
            if ((uint)fVar9 < 0x38800000) {
              fVar6 = fVar9 + 0.5;
            }
            else {
              fVar9 = (float)((int)fVar9 + 0x8000fff + (uint)(((uint)fVar9 >> 0xd & 1) != 0) >> 0xd)
              ;
              fVar6 = fVar9;
            }
          }
          else {
            fVar6 = (float)((0x7f800000 < (uint)fVar9 | 0x3e) << 9);
          }
          iVar10 = movmskps(fVar9,ZEXT416((uint)pfVar13[6]));
          puVar14[6] = (ushort)(iVar10 << 0xf) | SUB42(fVar6,0);
          fVar9 = ABS(pfVar13[7]);
          if ((uint)fVar9 < 0x47800000) {
            if ((uint)fVar9 < 0x38800000) {
              fVar6 = fVar9 + 0.5;
            }
            else {
              fVar9 = (float)((int)fVar9 + 0x8000fff + (uint)(((uint)fVar9 >> 0xd & 1) != 0) >> 0xd)
              ;
              fVar6 = fVar9;
            }
          }
          else {
            fVar6 = (float)((0x7f800000 < (uint)fVar9 | 0x3e) << 9);
          }
          iVar10 = movmskps(fVar9,ZEXT416((uint)pfVar13[7]));
          puVar14[7] = (ushort)(iVar10 << 0xf) | SUB42(fVar6,0);
          puVar14 = puVar14 + 8;
          pfVar13 = pfVar13 + 8;
          uVar16 = uVar15 - 8;
          bVar3 = 0xf < uVar15;
          uVar15 = uVar16;
        } while (bVar3);
      }
      uVar15 = uVar16;
      if (3 < (int)uVar16) {
        do {
          fVar9 = *pfVar13;
          fVar6 = pfVar13[1];
          fVar11 = pfVar13[2];
          fVar4 = pfVar13[3];
          fVar24 = ABS(fVar9);
          fVar26 = ABS(fVar6);
          fVar27 = ABS(fVar11);
          fVar28 = ABS(fVar4);
          auVar18._0_4_ = (uint)fVar24 >> 0xd;
          auVar18._4_4_ = (uint)fVar26 >> 0xd;
          auVar18._8_4_ = (uint)fVar27 >> 0xd;
          auVar18._12_4_ = (uint)fVar28 >> 0xd;
          auVar23._0_4_ =
               -(uint)((float)((uint)((uint)fVar24 < 0x38800000) * 0x38800000 |
                              (uint)((uint)fVar24 >= 0x38800000) * (int)fVar24) == fVar24);
          auVar23._4_4_ =
               -(uint)((float)((uint)((uint)fVar26 < 0x38800000) * 0x38800000 |
                              (uint)((uint)fVar26 >= 0x38800000) * (int)fVar26) == fVar26);
          auVar23._8_4_ =
               -(uint)((float)((uint)((uint)fVar27 < 0x38800000) * 0x38800000 |
                              (uint)((uint)fVar27 >= 0x38800000) * (int)fVar27) == fVar27);
          auVar23._12_4_ =
               -(uint)((float)((uint)((uint)fVar28 < 0x38800000) * 0x38800000 |
                              (uint)((uint)fVar28 >= 0x38800000) * (int)fVar28) == fVar28);
          auVar19 = auVar18 & auVar31;
          auVar22._0_4_ = (int)(fVar24 + 0.5) + -0x3f000000;
          auVar22._4_4_ = (int)(fVar26 + 0.5) + -0x3f000000;
          auVar22._8_4_ = (int)(fVar27 + 0.5) + -0x3f000000;
          auVar22._12_4_ = (int)(fVar28 + 0.5) + -0x3f000000;
          auVar20._0_4_ = auVar19._0_4_ + (int)fVar24 + 0xc8000fffU >> 0xd;
          auVar20._4_4_ = auVar19._4_4_ + (int)fVar26 + 0xc8000fffU >> 0xd;
          auVar20._8_4_ = auVar19._8_4_ + (int)fVar27 + 0xc8000fffU >> 0xd;
          auVar20._12_4_ = auVar19._12_4_ + (int)fVar28 + 0xc8000fffU >> 0xd;
          auVar23 = blendvps(auVar22,auVar20,auVar23);
          auVar19._0_4_ =
               -(uint)((float)((uint)((uint)fVar24 < 0x47800000) * 0x47800000 |
                              (uint)((uint)fVar24 >= 0x47800000) * (int)fVar24) == fVar24);
          auVar19._4_4_ =
               -(uint)((float)((uint)((uint)fVar26 < 0x47800000) * 0x47800000 |
                              (uint)((uint)fVar26 >= 0x47800000) * (int)fVar26) == fVar26);
          auVar19._8_4_ =
               -(uint)((float)((uint)((uint)fVar27 < 0x47800000) * 0x47800000 |
                              (uint)((uint)fVar27 >= 0x47800000) * (int)fVar27) == fVar27);
          auVar19._12_4_ =
               -(uint)((float)((uint)((uint)fVar28 < 0x47800000) * 0x47800000 |
                              (uint)((uint)fVar28 >= 0x47800000) * (int)fVar28) == fVar28);
          auVar21._4_4_ = -(uint)NAN(fVar6);
          auVar21._0_4_ = -(uint)NAN(fVar9);
          auVar21._8_4_ = -(uint)NAN(fVar11);
          auVar21._12_4_ = -(uint)NAN(fVar4);
          auVar32._0_4_ = (int)fVar9 >> 0x10;
          auVar32._4_4_ = (int)fVar6 >> 0x10;
          auVar32._8_4_ = (int)fVar11 >> 0x10;
          auVar32._12_4_ = (int)fVar4 >> 0x10;
          auVar23 = auVar32 & auVar17 |
                    ((auVar18 & auVar25 | auVar29) & auVar21 | auVar30) & auVar19 |
                    ~auVar19 & auVar23;
          auVar23 = packssdw(auVar23,auVar23);
          *(longlong *)puVar14 = auVar23._0_8_;
          puVar14 = puVar14 + 4;
          pfVar13 = pfVar13 + 4;
          uVar16 = uVar15 - 4;
          bVar3 = 7 < uVar15;
          uVar15 = uVar16;
        } while (bVar3);
      }
      if (0 < (int)uVar16) {
        iVar10 = uVar16 + 1;
        lVar8 = 0;
        do {
          fVar9 = *(float *)((longlong)pfVar13 + lVar8 * 2);
          fVar6 = ABS(fVar9);
          if ((uint)fVar6 < 0x47800000) {
            if ((uint)fVar6 < 0x38800000) {
              fVar11 = fVar6 + 0.5;
            }
            else {
              fVar6 = (float)((int)fVar6 + 0x8000fff + (uint)(((uint)fVar6 >> 0xd & 1) != 0) >> 0xd)
              ;
              fVar11 = fVar6;
            }
          }
          else {
            fVar11 = (float)((0x7f800000 < (uint)fVar6 | 0x3e) << 9);
          }
          iVar7 = movmskps(fVar6,ZEXT416((uint)fVar9));
          *(ushort *)((longlong)puVar14 + lVar8) = (ushort)(iVar7 << 0xf) | SUB42(fVar11,0);
          lVar8 = lVar8 + 2;
          iVar10 = iVar10 + -1;
        } while (1 < iVar10);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar2);
  }
  return;
}



// FUNCTION 14803f99c FUN_14803f99c body=155 status=ok
// SIG undefined FUN_14803f99c(void)

void FUN_14803f99c(longlong *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 auStack_38 [32];
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  pcVar2 = *(char **)(*param_1 + 0x10);
  *(char **)(*param_1 + 0x10) = pcVar2 + 1;
  cVar1 = *pcVar2;
  if (cVar1 == '\x01') {
    local_18 = &LAB_1480385ee;
    FUN_144a29c16(param_1);
    FUN_14074ef86(param_1);
  }
  else {
    if (cVar1 != '\0') {
      if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    local_18 = &LAB_1480385b2;
    FUN_144a29c16(param_1);
    FUN_1457655f4(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14803fa46 FUN_14803fa46 body=61 status=ok
// SIG undefined FUN_14803fa46(void)

void FUN_14803fa46(longlong *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(*param_1 + 0x10);
  *(undefined1 **)(*param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_14803fa84();
    return;
  case 1:
    FUN_14803fae4();
    return;
  case 2:
    FUN_14803fb44();
    return;
  case 3:
    FUN_14803fba4();
    return;
  default:
    return;
  }
}



// FUNCTION 14803fa84 FUN_14803fa84 body=94 status=ok
// SIG undefined FUN_14803fa84(void)

void FUN_14803fa84(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = &LAB_14803868a;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14803fae4 FUN_14803fae4 body=94 status=ok
// SIG undefined FUN_14803fae4(void)

void FUN_14803fae4(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = &LAB_1480386c6;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14803fb44 FUN_14803fb44 body=94 status=ok
// SIG undefined FUN_14803fb44(void)

void FUN_14803fb44(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = &LAB_148038702;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14803fba4 FUN_14803fba4 body=94 status=ok
// SIG undefined FUN_14803fba4(void)

void FUN_14803fba4(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = &LAB_14803873e;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14803fc04 FUN_14803fc04 body=81 status=ok
// SIG undefined FUN_14803fc04(void)

void FUN_14803fc04(longlong *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(*param_1 + 0x10);
  *(undefined1 **)(*param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_14803fc56();
    return;
  case 1:
    FUN_14803fcbe();
    return;
  case 2:
    FUN_14803fd26();
    return;
  case 3:
    FUN_14803fd8e();
    return;
  case 4:
    FUN_14803fdf6();
    return;
  case 5:
    FUN_14803fe5e();
    return;
  case 6:
    FUN_14803fec6();
    return;
  case 7:
    FUN_14803ff2e();
    return;
  default:
    return;
  }
}



// FUNCTION 14803fc56 FUN_14803fc56 body=102 status=ok
// SIG undefined FUN_14803fc56(void)

void FUN_14803fc56(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1480387c8;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_1457655f4(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14803fcbe FUN_14803fcbe body=102 status=ok
// SIG undefined FUN_14803fcbe(void)

void FUN_14803fcbe(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_148038d92;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_1457655f4(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14803fd26 FUN_14803fd26 body=102 status=ok
// SIG undefined FUN_14803fd26(void)

void FUN_14803fd26(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1480393ce;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_14074ef86(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14803fd8e FUN_14803fd8e body=102 status=ok
// SIG undefined FUN_14803fd8e(void)

void FUN_14803fd8e(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1480399d4;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_14074ef86(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14803fdf6 FUN_14803fdf6 body=102 status=ok
// SIG undefined FUN_14803fdf6(void)

void FUN_14803fdf6(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803a01c;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_1457655f4(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14803fe5e FUN_14803fe5e body=102 status=ok
// SIG undefined FUN_14803fe5e(void)

void FUN_14803fe5e(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803a64e;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_1457655f4(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14803fec6 FUN_14803fec6 body=102 status=ok
// SIG undefined FUN_14803fec6(void)

void FUN_14803fec6(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803ac9e;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_14074ef86(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14803ff2e FUN_14803ff2e body=102 status=ok
// SIG undefined FUN_14803ff2e(void)

void FUN_14803ff2e(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803b2ea;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_14074ef86(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14803ff96 FUN_14803ff96 body=74 status=ok
// SIG undefined FUN_14803ff96(void)

undefined8 * FUN_14803ff96(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14ad40d80;
  puVar1 = TlsGetValue(DAT_14c7627b4);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c7627b4,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14803ffe0 FUN_14803ffe0 body=94 status=ok
// SIG undefined FUN_14803ffe0(void)

void FUN_14803ffe0(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_148037fa8;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148040040 FUN_148040040 body=94 status=ok
// SIG undefined FUN_148040040(void)

void FUN_148040040(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803807c;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480400a0 FUN_1480400a0 body=94 status=ok
// SIG undefined FUN_1480400a0(void)

void FUN_1480400a0(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803816c;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148040100 FUN_148040100 body=94 status=ok
// SIG undefined FUN_148040100(void)

void FUN_148040100(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = &LAB_148040280;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148040160 FUN_148040160 body=94 status=ok
// SIG undefined FUN_148040160(void)

void FUN_148040160(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = &LAB_1480402e0;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480401c0 FUN_1480401c0 body=94 status=ok
// SIG undefined FUN_1480401c0(void)

void FUN_1480401c0(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14804036c;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148040220 FUN_148040220 body=94 status=ok
// SIG undefined FUN_148040220(void)

void FUN_148040220(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = &LAB_1480403fc;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14804036c FUN_14804036c body=144 status=ok
// SIG undefined FUN_14804036c(void)

void FUN_14804036c(longlong param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  
  puVar5 = *(ushort **)(param_1 + 0x10);
  uVar2 = *puVar5;
  *(ushort **)(param_1 + 0x10) = puVar5 + 1;
  lVar7 = *(longlong *)(param_1 + 0x70);
  iVar4 = *(int *)(param_1 + 0x80);
  uVar3 = puVar5[1];
  uVar9 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar5 + 2;
  iVar6 = **(int **)(param_1 + 0x20);
  lVar8 = 0;
  if (iVar6 <= (int)(uint)uVar3) {
    do {
      uVar9 = uVar9 - iVar6;
      iVar6 = (*(int **)(param_1 + 0x20))[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar6 <= (int)uVar9);
  }
  uVar1 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar9);
  uVar3 = puVar5[2];
  *(ushort **)(param_1 + 0x10) = puVar5 + 3;
  iVar6 = *(int *)(param_1 + 0x44);
  if (0 < iVar6) {
    do {
      auVar10._4_4_ = uVar1;
      auVar10._0_4_ = uVar1;
      auVar10._8_4_ = uVar1;
      auVar10._12_4_ = uVar1;
      auVar10 = divps(*(undefined1 (*) [16])(lVar7 + (ulonglong)((uint)uVar2 * iVar4)),auVar10);
      *(undefined1 (*) [16])(lVar7 + (ulonglong)((uint)uVar3 * iVar4)) = auVar10;
      lVar7 = lVar7 + 0x10;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}



// FUNCTION 1480404a4 FUN_1480404a4 body=102 status=ok
// SIG undefined FUN_1480404a4(void)

void FUN_1480404a4(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1480364a8;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_14074ef86(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148040786 FUN_148040786 body=108 status=ok
// SIG undefined FUN_148040786(void)

void FUN_148040786(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  longlong lVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar6;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  lVar7 = *(longlong *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  uVar4 = puVar6[1];
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  iVar8 = *(int *)(param_1 + 0x44);
  if (0 < iVar8) {
    do {
      puVar1 = (undefined4 *)(lVar7 + (ulonglong)((uint)uVar3 * iVar5));
      local_38 = *puVar1;
      uStack_34 = puVar1[1];
      uStack_30 = puVar1[2];
      uStack_2c = puVar1[3];
      uVar9 = FUN_14063caf8(&local_38);
      puVar2 = (undefined8 *)(lVar7 + (ulonglong)((uint)uVar4 * iVar5));
      *puVar2 = uVar9;
      *(undefined4 *)(puVar2 + 1) = extraout_XMM0_Dc;
      *(undefined4 *)((longlong)puVar2 + 0xc) = extraout_XMM0_Dd;
      lVar7 = lVar7 + 0x10;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return;
}



// FUNCTION 1480407f2 FUN_1480407f2 body=134 status=ok
// SIG undefined FUN_1480407f2(void)

void FUN_1480407f2(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  
  puVar2 = *(ushort **)(param_1 + 0x10);
  uVar1 = *puVar2;
  uVar3 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 1;
  iVar5 = **(int **)(param_1 + 0x20);
  lVar6 = 0;
  if (iVar5 <= (int)(uint)uVar1) {
    do {
      uVar3 = uVar3 - iVar5;
      iVar5 = (*(int **)(param_1 + 0x20))[lVar6 + 1];
      lVar6 = lVar6 + 1;
    } while (iVar5 <= (int)uVar3);
  }
  uVar1 = puVar2[1];
  *(ushort **)(param_1 + 0x10) = puVar2 + 2;
  iVar5 = *(int *)(param_1 + 0x44);
  if (0 < iVar5) {
    puVar4 = (undefined8 *)
             ((ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) + *(longlong *)(param_1 + 0x70));
    uVar7 = FUN_14063caf8();
    do {
      *puVar4 = uVar7;
      *(undefined4 *)(puVar4 + 1) = extraout_XMM0_Dc;
      *(undefined4 *)((longlong)puVar4 + 0xc) = extraout_XMM0_Dd;
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}



// FUNCTION 148040878 FUN_148040878 body=94 status=ok
// SIG undefined FUN_148040878(void)

void FUN_148040878(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_148037348;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480408d8 FUN_1480408d8 body=94 status=ok
// SIG undefined FUN_1480408d8(void)

void FUN_1480408d8(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803746e;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148040938 FUN_148040938 body=94 status=ok
// SIG undefined FUN_148040938(void)

void FUN_148040938(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_148037590;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148040998 FUN_148040998 body=94 status=ok
// SIG undefined FUN_148040998(void)

void FUN_148040998(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1480376b4;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480409f8 FUN_1480409f8 body=94 status=ok
// SIG undefined FUN_1480409f8(void)

void FUN_1480409f8(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_148037862;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148040a58 FUN_148040a58 body=94 status=ok
// SIG undefined FUN_148040a58(void)

void FUN_148040a58(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1480379e6;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148040ab8 FUN_148040ab8 body=102 status=ok
// SIG undefined FUN_148040ab8(void)

void FUN_148040ab8(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_148037c54;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_1457655f4(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148040b20 FUN_148040b20 body=102 status=ok
// SIG undefined FUN_148040b20(void)

void FUN_148040b20(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_148037cca;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_1457655f4(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148040b88 FUN_148040b88 body=102 status=ok
// SIG undefined FUN_148040b88(void)

void FUN_148040b88(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_148037d6c;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_14074ef86(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148040bf0 FUN_148040bf0 body=102 status=ok
// SIG undefined FUN_148040bf0(void)

void FUN_148040bf0(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_148037e36;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_1457655f4(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148040c58 FUN_148040c58 body=102 status=ok
// SIG undefined FUN_148040c58(void)

void FUN_148040c58(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_148037edc;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_1457655f4(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148040cc0 FUN_148040cc0 body=94 status=ok
// SIG undefined FUN_148040cc0(void)

void FUN_148040cc0(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_148040e40;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148040d20 FUN_148040d20 body=94 status=ok
// SIG undefined FUN_148040d20(void)

void FUN_148040d20(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_148040eea;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148040d80 FUN_148040d80 body=94 status=ok
// SIG undefined FUN_148040d80(void)

void FUN_148040d80(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_148040fb4;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148040de0 FUN_148040de0 body=94 status=ok
// SIG undefined FUN_148040de0(void)

void FUN_148040de0(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_148041086;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148040e40 FUN_148040e40 body=170 status=ok
// SIG undefined FUN_148040e40(void)

void FUN_148040e40(longlong param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  longlong lVar14;
  undefined8 uVar15;
  float extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  puVar8 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar8;
  *(ushort **)(param_1 + 0x10) = puVar8 + 1;
  lVar14 = *(longlong *)(param_1 + 0x70);
  iVar7 = *(int *)(param_1 + 0x80);
  uVar5 = puVar8[1];
  *(ushort **)(param_1 + 0x10) = puVar8 + 2;
  uVar6 = puVar8[2];
  *(ushort **)(param_1 + 0x10) = puVar8 + 3;
  iVar13 = *(int *)(param_1 + 0x44);
  if (0 < iVar13) {
    do {
      pfVar1 = (float *)(lVar14 + (ulonglong)((uint)uVar5 * iVar7));
      fVar9 = *pfVar1;
      fVar10 = pfVar1[1];
      fVar11 = pfVar1[2];
      fVar12 = pfVar1[3];
      puVar2 = (undefined4 *)(lVar14 + (ulonglong)((uint)uVar4 * iVar7));
      local_58 = *puVar2;
      uStack_54 = puVar2[1];
      uStack_50 = puVar2[2];
      uStack_4c = puVar2[3];
      uVar15 = FUN_14063caf8(&local_58);
      local_68 = (float)uVar15 * fVar9;
      fStack_64 = (float)((ulonglong)uVar15 >> 0x20) * fVar10;
      fStack_60 = extraout_XMM0_Dc * fVar11;
      fStack_5c = extraout_XMM0_Dd * fVar12;
      uVar15 = FUN_14276fd37(&local_68);
      puVar3 = (undefined8 *)(lVar14 + (ulonglong)((uint)uVar6 * iVar7));
      *puVar3 = uVar15;
      *(undefined4 *)(puVar3 + 1) = extraout_XMM0_Dc_00;
      *(undefined4 *)((longlong)puVar3 + 0xc) = extraout_XMM0_Dd_00;
      lVar14 = lVar14 + 0x10;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  return;
}



// FUNCTION 148040eea FUN_148040eea body=201 status=ok
// SIG undefined FUN_148040eea(void)

void FUN_148040eea(longlong param_1)

{
  float *pfVar1;
  undefined8 *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  puVar5 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar5;
  uVar6 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar5 + 1;
  iVar9 = **(int **)(param_1 + 0x20);
  lVar8 = 0;
  if (iVar9 <= (int)(uint)uVar3) {
    do {
      uVar6 = uVar6 - iVar9;
      iVar9 = (*(int **)(param_1 + 0x20))[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar9 <= (int)uVar6);
  }
  local_48 = *(undefined4 *)
              (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar6);
  uVar3 = puVar5[1];
  *(ushort **)(param_1 + 0x10) = puVar5 + 2;
  lVar8 = *(longlong *)(param_1 + 0x70);
  iVar9 = *(int *)(param_1 + 0x80);
  uVar4 = puVar5[2];
  *(ushort **)(param_1 + 0x10) = puVar5 + 3;
  iVar7 = *(int *)(param_1 + 0x44);
  if (0 < iVar7) {
    uStack_44 = local_48;
    uStack_40 = local_48;
    uStack_3c = local_48;
    uVar10 = FUN_14063caf8();
    do {
      pfVar1 = (float *)(lVar8 + (ulonglong)((uint)uVar3 * iVar9));
      local_58 = *pfVar1 * (float)uVar10;
      fStack_54 = pfVar1[1] * (float)((ulonglong)uVar10 >> 0x20);
      fStack_50 = pfVar1[2] * extraout_XMM0_Dc;
      fStack_4c = pfVar1[3] * extraout_XMM0_Dd;
      uVar11 = FUN_14276fd37(&local_58);
      puVar2 = (undefined8 *)(lVar8 + (ulonglong)((uint)uVar4 * iVar9));
      *puVar2 = uVar11;
      *(undefined4 *)(puVar2 + 1) = extraout_XMM0_Dc_00;
      *(undefined4 *)((longlong)puVar2 + 0xc) = extraout_XMM0_Dd_00;
      lVar8 = lVar8 + 0x10;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}



// FUNCTION 148040fb4 FUN_148040fb4 body=209 status=ok
// SIG undefined FUN_148040fb4(void)

void FUN_148040fb4(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  float extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  puVar7 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar7;
  *(ushort **)(param_1 + 0x10) = puVar7 + 1;
  lVar11 = *(longlong *)(param_1 + 0x70);
  iVar6 = *(int *)(param_1 + 0x80);
  uVar5 = puVar7[1];
  uVar9 = (uint)uVar5;
  *(ushort **)(param_1 + 0x10) = puVar7 + 2;
  iVar8 = **(int **)(param_1 + 0x20);
  lVar10 = 0;
  if (iVar8 <= (int)(uint)uVar5) {
    do {
      uVar9 = uVar9 - iVar8;
      iVar8 = (*(int **)(param_1 + 0x20))[lVar10 + 1];
      lVar10 = lVar10 + 1;
    } while (iVar8 <= (int)uVar9);
  }
  fVar3 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar10 * 8) +
                    (longlong)(int)uVar9);
  uVar5 = puVar7[2];
  *(ushort **)(param_1 + 0x10) = puVar7 + 3;
  iVar8 = *(int *)(param_1 + 0x44);
  if (0 < iVar8) {
    do {
      puVar1 = (undefined4 *)(lVar11 + (ulonglong)((uint)uVar4 * iVar6));
      local_58 = *puVar1;
      uStack_54 = puVar1[1];
      uStack_50 = puVar1[2];
      uStack_4c = puVar1[3];
      uVar12 = FUN_14063caf8(&local_58);
      local_68 = (float)uVar12 * fVar3;
      fStack_64 = (float)((ulonglong)uVar12 >> 0x20) * fVar3;
      fStack_60 = extraout_XMM0_Dc * fVar3;
      fStack_5c = extraout_XMM0_Dd * fVar3;
      uVar12 = FUN_14276fd37(&local_68);
      puVar2 = (undefined8 *)(lVar11 + (ulonglong)((uint)uVar5 * iVar6));
      *puVar2 = uVar12;
      *(undefined4 *)(puVar2 + 1) = extraout_XMM0_Dc_00;
      *(undefined4 *)((longlong)puVar2 + 0xc) = extraout_XMM0_Dd_00;
      lVar11 = lVar11 + 0x10;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return;
}



// FUNCTION 148041086 FUN_148041086 body=218 status=ok
// SIG undefined FUN_148041086(void)

void FUN_148041086(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  
  puVar2 = *(ushort **)(param_1 + 0x10);
  piVar3 = *(int **)(param_1 + 0x20);
  uVar1 = *puVar2;
  uVar6 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 1;
  iVar5 = *piVar3;
  lVar7 = 0;
  if (iVar5 <= (int)(uint)uVar1) {
    do {
      uVar6 = uVar6 - iVar5;
      iVar5 = piVar3[lVar7 + 1];
      lVar7 = lVar7 + 1;
    } while (iVar5 <= (int)uVar6);
  }
  uVar1 = puVar2[1];
  uVar6 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 2;
  iVar5 = *piVar3;
  lVar7 = 0;
  if (iVar5 <= (int)(uint)uVar1) {
    do {
      uVar6 = uVar6 - iVar5;
      iVar5 = piVar3[lVar7 + 1];
      lVar7 = lVar7 + 1;
    } while (iVar5 <= (int)uVar6);
  }
  uVar1 = puVar2[2];
  *(ushort **)(param_1 + 0x10) = puVar2 + 3;
  iVar5 = *(int *)(param_1 + 0x44);
  if (0 < iVar5) {
    puVar4 = (undefined8 *)
             ((ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) + *(longlong *)(param_1 + 0x70));
    FUN_14063caf8();
    uVar8 = FUN_14276fd37();
    do {
      *puVar4 = uVar8;
      *(undefined4 *)(puVar4 + 1) = extraout_XMM0_Dc;
      *(undefined4 *)((longlong)puVar4 + 0xc) = extraout_XMM0_Dd;
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}



// FUNCTION 148041160 FUN_148041160 body=94 status=ok
// SIG undefined FUN_148041160(void)

void FUN_148041160(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1480382e2;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480411c0 FUN_1480411c0 body=94 status=ok
// SIG undefined FUN_1480411c0(void)

void FUN_1480411c0(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_148038352;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148041220 FUN_148041220 body=94 status=ok
// SIG undefined FUN_148041220(void)

void FUN_148041220(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1480383f0;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148041280 FUN_148041280 body=94 status=ok
// SIG undefined FUN_148041280(void)

void FUN_148041280(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_148038492;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480412e0 FUN_1480412e0 body=94 status=ok
// SIG undefined FUN_1480412e0(void)

void FUN_1480412e0(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803b99e;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148041340 FUN_148041340 body=94 status=ok
// SIG undefined FUN_148041340(void)

void FUN_148041340(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803ba2c;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480413a0 FUN_1480413a0 body=94 status=ok
// SIG undefined FUN_1480413a0(void)

void FUN_1480413a0(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803ba8c;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148041400 FUN_148041400 body=94 status=ok
// SIG undefined FUN_148041400(void)

void FUN_148041400(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803bb1a;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148041460 FUN_148041460 body=94 status=ok
// SIG undefined FUN_148041460(void)

void FUN_148041460(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803bbda;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480414c0 FUN_1480414c0 body=94 status=ok
// SIG undefined FUN_1480414c0(void)

void FUN_1480414c0(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803bc9a;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148041520 FUN_148041520 body=94 status=ok
// SIG undefined FUN_148041520(void)

void FUN_148041520(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803be94;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148041580 FUN_148041580 body=102 status=ok
// SIG undefined FUN_148041580(void)

void FUN_148041580(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803bf70;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_1457655f4(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480415e8 FUN_1480415e8 body=102 status=ok
// SIG undefined FUN_1480415e8(void)

void FUN_1480415e8(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803bfec;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_1457655f4(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148041650 FUN_148041650 body=102 status=ok
// SIG undefined FUN_148041650(void)

void FUN_148041650(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803c096;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_14074ef86(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480416b8 FUN_1480416b8 body=102 status=ok
// SIG undefined FUN_1480416b8(void)

void FUN_1480416b8(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803c166;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_1457655f4(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148041720 FUN_148041720 body=102 status=ok
// SIG undefined FUN_148041720(void)

void FUN_148041720(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803c214;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_1457655f4(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148041788 FUN_148041788 body=102 status=ok
// SIG undefined FUN_148041788(void)

void FUN_148041788(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803c2e8;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_14074ef86(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480417f0 FUN_1480417f0 body=94 status=ok
// SIG undefined FUN_1480417f0(void)

void FUN_1480417f0(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803c3d0;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148041850 FUN_148041850 body=94 status=ok
// SIG undefined FUN_148041850(void)

void FUN_148041850(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803c434;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480418b0 FUN_1480418b0 body=94 status=ok
// SIG undefined FUN_1480418b0(void)

void FUN_1480418b0(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803c4c6;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148041910 FUN_148041910 body=94 status=ok
// SIG undefined FUN_148041910(void)

void FUN_148041910(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803c574;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148041970 FUN_148041970 body=94 status=ok
// SIG undefined FUN_148041970(void)

void FUN_148041970(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803c5d8;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480419d0 FUN_1480419d0 body=94 status=ok
// SIG undefined FUN_1480419d0(void)

void FUN_1480419d0(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803c9ae;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148041a30 FUN_148041a30 body=94 status=ok
// SIG undefined FUN_148041a30(void)

void FUN_148041a30(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803ca46;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148041a90 FUN_148041a90 body=94 status=ok
// SIG undefined FUN_148041a90(void)

void FUN_148041a90(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803cafe;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148041af0 FUN_148041af0 body=94 status=ok
// SIG undefined FUN_148041af0(void)

void FUN_148041af0(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803cb96;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148041b50 FUN_148041b50 body=94 status=ok
// SIG undefined FUN_148041b50(void)

void FUN_148041b50(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803cc4e;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148041bb0 FUN_148041bb0 body=94 status=ok
// SIG undefined FUN_148041bb0(void)

void FUN_148041bb0(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803ccb8;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148041c10 FUN_148041c10 body=94 status=ok
// SIG undefined FUN_148041c10(void)

void FUN_148041c10(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803cd50;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148041c70 FUN_148041c70 body=94 status=ok
// SIG undefined FUN_148041c70(void)

void FUN_148041c70(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803cdb0;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148041cd0 FUN_148041cd0 body=94 status=ok
// SIG undefined FUN_148041cd0(void)

void FUN_148041cd0(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803ce40;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148041d30 FUN_148041d30 body=94 status=ok
// SIG undefined FUN_148041d30(void)

void FUN_148041d30(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803ceea;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148041d90 FUN_148041d90 body=94 status=ok
// SIG undefined FUN_148041d90(void)

void FUN_148041d90(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803cf4a;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148041df0 FUN_148041df0 body=94 status=ok
// SIG undefined FUN_148041df0(void)

void FUN_148041df0(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803cfde;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148041e50 FUN_148041e50 body=94 status=ok
// SIG undefined FUN_148041e50(void)

void FUN_148041e50(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803d088;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148041eb0 FUN_148041eb0 body=94 status=ok
// SIG undefined FUN_148041eb0(void)

void FUN_148041eb0(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803d118;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148041f10 FUN_148041f10 body=94 status=ok
// SIG undefined FUN_148041f10(void)

void FUN_148041f10(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803d290;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148041f70 FUN_148041f70 body=94 status=ok
// SIG undefined FUN_148041f70(void)

void FUN_148041f70(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803d334;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148041fd0 FUN_148041fd0 body=94 status=ok
// SIG undefined FUN_148041fd0(void)

void FUN_148041fd0(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803d3f8;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148042030 FUN_148042030 body=94 status=ok
// SIG undefined FUN_148042030(void)

void FUN_148042030(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803d49c;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148042090 FUN_148042090 body=94 status=ok
// SIG undefined FUN_148042090(void)

void FUN_148042090(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803d560;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480420f0 FUN_1480420f0 body=94 status=ok
// SIG undefined FUN_1480420f0(void)

void FUN_1480420f0(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803d610;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148042150 FUN_148042150 body=94 status=ok
// SIG undefined FUN_148042150(void)

void FUN_148042150(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803d6ba;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480421b0 FUN_1480421b0 body=94 status=ok
// SIG undefined FUN_1480421b0(void)

void FUN_1480421b0(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803d74a;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148042210 FUN_148042210 body=94 status=ok
// SIG undefined FUN_148042210(void)

void FUN_148042210(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803d7de;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148042270 FUN_148042270 body=94 status=ok
// SIG undefined FUN_148042270(void)

void FUN_148042270(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803d888;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480422d0 FUN_1480422d0 body=94 status=ok
// SIG undefined FUN_1480422d0(void)

void FUN_1480422d0(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803d8e8;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148042330 FUN_148042330 body=94 status=ok
// SIG undefined FUN_148042330(void)

void FUN_148042330(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803d978;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148042390 FUN_148042390 body=94 status=ok
// SIG undefined FUN_148042390(void)

void FUN_148042390(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14803da0c;
  FUN_144a29c16();
  FUN_14074ef86(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480423ef FUN_1480423ef body=3 status=ok
// SIG undefined FUN_1480423ef(void)

undefined8 FUN_1480423ef(void)

{
  return 0;
}



// FUNCTION 1480423f2 FUN_1480423f2 body=3 status=ok
// SIG undefined FUN_1480423f2(void)

undefined8 FUN_1480423f2(void)

{
  return 0;
}



// FUNCTION 1480423fa FUN_1480423fa body=14 status=ok
// SIG undefined FUN_1480423fa(void)

undefined4 FUN_1480423fa(undefined8 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 1) == 0x14) {
    uVar1 = *(undefined4 *)*param_1;
  }
  return uVar1;
}



// FUNCTION 148042410 FUN_148042410 body=21 status=ok
// SIG undefined FUN_148042410(void)

undefined * FUN_148042410(void)

{
  FUN_145d493dc();
  return &DAT_14cb2bd60;
}



// FUNCTION 14804242b FUN_14804242b body=155 status=ok
// SIG undefined FUN_14804242b(void)

void FUN_14804242b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_146827ffc();
  lVar3 = FUN_148042980(param_2,uVar2);
  if (lVar3 == 0) {
    local_28 = 0;
  }
  else {
    plVar4 = (longlong *)FUN_146827ff0(param_1);
    uVar1 = (**(code **)(*plVar4 + 8))(plVar4,param_3,lVar3);
    local_28 = (ulonglong)uVar1 * 2 + 1;
  }
  FUN_146826a6c(param_1,&local_28,8);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480424c8 FUN_1480424c8 body=36 status=ok
// SIG undefined FUN_1480424c8(void)

undefined8
FUN_1480424c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_148042980(param_2,*param_1);
  *param_4 = uVar1;
  return 8;
}



// FUNCTION 14804251c FUN_14804251c body=55 status=ok
// SIG undefined FUN_14804251c(void)

undefined8 FUN_14804251c(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x160))(param_2,param_1);
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 8);
  return 1;
}



// FUNCTION 14804257c FUN_14804257c body=55 status=ok
// SIG undefined FUN_14804257c(void)

undefined8 FUN_14804257c(undefined8 param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x160))(param_2,param_3);
  (**(code **)(*param_2 + 0x138))(param_2,param_3 + 8);
  return 1;
}



// FUNCTION 1480425c2 FUN_1480425c2 body=101 status=ok
// SIG undefined FUN_1480425c2(void)

undefined1 FUN_1480425c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 8 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + 8 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 8 + lVar3) = lVar2;
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148042650 FUN_148042650 body=59 status=ok
// SIG undefined FUN_148042650(void)

undefined8 FUN_148042650(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148042726 FUN_148042726 body=54 status=ok
// SIG undefined FUN_148042726(void)

undefined1 FUN_148042726(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1447a122a(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148042784 FUN_148042784 body=75 status=ok
// SIG undefined FUN_148042784(void)

undefined4 FUN_148042784(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = 0;
  if (*(int *)(param_2 + 1) == 0x14) {
    uVar1 = *(undefined4 *)*param_2;
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480427da FUN_1480427da body=37 status=ok
// SIG undefined FUN_1480427da(void)

void FUN_1480427da(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 148042850 FUN_148042850 body=36 status=ok
// SIG undefined FUN_148042850(void)

undefined8 FUN_148042850(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148042890 FUN_148042890 body=93 status=ok
// SIG undefined FUN_148042890(void)

void FUN_148042890(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad42b60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1480428ee FUN_1480428ee body=123 status=ok
// SIG undefined FUN_1480428ee(void)

void FUN_1480428ee(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad42b60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14804296a FUN_14804296a body=21 status=ok
// SIG undefined FUN_14804296a(void)

undefined8 FUN_14804296a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148042980 FUN_148042980 body=200 status=ok
// SIG undefined FUN_148042980(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148042980(ulonglong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 & 1) == 0) {
    return;
  }
  if ((DAT_14cb2be37 & 2) == 0) {
    DAT_14cb2be37 = DAT_14cb2be37 | 3;
    _DAT_14cb2bdd8 = L"TIndexedPtr<UNiagaraDataInterfaceBase>";
    _DAT_14cb2bdf0 = &LAB_148042426;
    _DAT_14cb2bdf8 = FUN_1480424c8;
    _DAT_14cb2be00 = &LAB_1480424ec;
    _DAT_14cb2be08 = &LAB_1480424fa;
    _DAT_14cb2be10 = &LAB_148042508;
    _DAT_14cb2bde8 = &LAB_14804250e;
    _DAT_14cb2be28 = 0x800000008;
    _DAT_14cb2be30 = 8;
    DAT_14cb2be34 = 0;
    uVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x000148042a45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))
            (param_2,&DAT_14cb2bdd0,uVar1 >> 1 & 0xffffffff,*(code **)(*param_2 + 0x10));
  return;
}



// FUNCTION 148042a48 FUN_148042a48 body=42 status=ok
// SIG undefined FUN_148042a48(void)

void FUN_148042a48(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 148042a7e FUN_148042a7e body=89 status=ok
// SIG undefined FUN_148042a7e(void)

undefined8 FUN_148042a7e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  uVar4 = FUN_145eb2426();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,uVar4,1);
  return uVar3;
}



// FUNCTION 148042ad8 FUN_148042ad8 body=52 status=ok
// SIG undefined FUN_148042ad8(void)

void FUN_148042ad8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 148042b0c FUN_148042b0c body=42 status=ok
// SIG undefined FUN_148042b0c(void)

void FUN_148042b0c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 148042b42 FUN_148042b42 body=89 status=ok
// SIG undefined FUN_148042b42(void)

undefined8 FUN_148042b42(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  uVar4 = FUN_1415935ec();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,uVar4,1);
  return uVar3;
}



// FUNCTION 148042b9c FUN_148042b9c body=52 status=ok
// SIG undefined FUN_148042b9c(void)

void FUN_148042b9c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 148042bd0 FUN_148042bd0 body=42 status=ok
// SIG undefined FUN_148042bd0(void)

void FUN_148042bd0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 148042c06 FUN_148042c06 body=89 status=ok
// SIG undefined FUN_148042c06(void)

undefined8 FUN_148042c06(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  uVar4 = FUN_145e9b6d6();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,uVar4,1);
  return uVar3;
}



// FUNCTION 148042c60 FUN_148042c60 body=52 status=ok
// SIG undefined FUN_148042c60(void)

void FUN_148042c60(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 148042c94 FUN_148042c94 body=42 status=ok
// SIG undefined FUN_148042c94(void)

void FUN_148042c94(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 148042cca FUN_148042cca body=89 status=ok
// SIG undefined FUN_148042cca(void)

undefined8 FUN_148042cca(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  uVar4 = FUN_145e7d60c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,uVar4,1);
  return uVar3;
}



// FUNCTION 148042d24 FUN_148042d24 body=52 status=ok
// SIG undefined FUN_148042d24(void)

void FUN_148042d24(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 148042d58 FUN_148042d58 body=42 status=ok
// SIG undefined FUN_148042d58(void)

void FUN_148042d58(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 148042d8a FUN_148042d8a body=96 status=ok
// SIG undefined FUN_148042d8a(void)

undefined8 FUN_148042d8a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f384c6();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cb2cf78,1);
  return uVar3;
}



// FUNCTION 148042dea FUN_148042dea body=52 status=ok
// SIG undefined FUN_148042dea(void)

void FUN_148042dea(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 148042e36 FUN_148042e36 body=1577 status=ok
// SIG undefined FUN_148042e36(void)

void FUN_148042e36(char param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  byte *pbVar13;
  bool bVar14;
  ushort uVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar9 = *param_2;
  if (lVar9 != 0) {
    uVar15 = (ushort)*(byte *)((longlong)param_2 + 0xd);
    local_68 = (longlong *)CONCAT44(local_68._4_4_,(int)param_2[1]);
    bVar1 = *(byte *)((longlong)param_2 + 0xf);
    bVar2 = *(byte *)((longlong)param_2 + 0xe);
    bVar3 = *(byte *)((longlong)param_2 + 0xc);
    lVar10 = *(longlong *)(param_4 + 0x80);
    lVar11 = lVar10;
    if (lVar10 == 0) {
      lVar11 = param_4;
    }
    iVar17 = *(int *)(param_4 + 0x88);
    uVar18 = (ulonglong)iVar17;
    local_70 = param_2;
    if (uVar18 != 0) {
      lVar16 = 0;
      iVar12 = 0;
      do {
        if ((*(longlong *)(lVar11 + lVar16) == lVar9) &&
           (*(ushort *)(lVar11 + 0xc + lVar16) == uVar15)) {
          local_80 = CONCAT71(local_80._1_7_,param_1);
          if ((*(int *)(lVar11 + 8 + lVar16) == (int)param_2[1]) &&
             (*(byte *)(lVar11 + 0xe + lVar16) == bVar1)) {
            if (iVar12 != 1) {
              uVar18 = (ulonglong)(uint)-iVar12;
              goto LAB_148042f36;
            }
            break;
          }
        }
        iVar12 = iVar12 + -1;
        lVar16 = lVar16 + 0x10;
      } while (uVar18 << 4 != lVar16);
    }
    *(uint *)(param_4 + 0x88) = iVar17 + 1U;
    if (*(uint *)(param_4 + 0x8c) < iVar17 + 1U) {
      local_80 = param_3;
      local_78 = param_4;
      FUN_14472e0ae(param_4,iVar17);
      lVar10 = *(longlong *)(local_78 + 0x80);
      param_3 = local_80;
      param_4 = local_78;
    }
    if (lVar10 == 0) {
      lVar10 = param_4;
    }
    lVar11 = uVar18 * 0x10;
    *(longlong *)(lVar10 + lVar11) = lVar9;
    *(undefined4 *)(lVar10 + 8 + lVar11) = local_68._0_4_;
    *(ushort *)(lVar10 + 0xc + lVar11) = uVar15;
    *(byte *)(lVar10 + 0xe + lVar11) = bVar1;
    *(undefined1 *)(lVar10 + 0xf + lVar11) = 0;
LAB_148042f36:
    iVar17 = *(int *)(param_3 + 0x88);
    *(uint *)(param_3 + 0x88) = iVar17 + 1U;
    if (*(uint *)(param_3 + 0x8c) < iVar17 + 1U) {
      local_78 = param_4;
      FUN_14738ac8a(param_3,iVar17);
      param_4 = local_78;
    }
    *(ulonglong *)(param_3 + (longlong)iVar17 * 8) =
         uVar18 & 0xff |
         (ulonglong)bVar3 << 8 |
         (ulonglong)bVar2 << 0x10 | (ulonglong)uVar15 << 0x20 | (ulonglong)(bVar1 & 1) << 0x30;
    param_2 = local_70;
  }
  if (param_1 == '\0') {
    local_68 = param_2 + 2;
    lVar9 = 0;
    bVar6 = true;
    local_80 = param_3;
    local_78 = param_4;
    local_70 = param_2;
    do {
      bVar14 = bVar6;
      local_58 = (undefined8 *)local_68[lVar9 * 2];
      if (local_58 != (undefined8 *)0x0) {
        bVar1 = (&DAT_14ad430d8)[lVar9];
        bVar2 = *(byte *)((longlong)local_68 + lVar9 * 0x10 + 0xd);
        bVar3 = *(byte *)((longlong)local_68 + lVar9 * 0x10 + 0xf);
        local_50._0_7_ = CONCAT16(bVar3,(uint6)CONCAT14(bVar2,(int)local_68[lVar9 * 2 + 1]));
        local_50 = (ulonglong)(uint7)local_50;
        bVar4 = *(byte *)((longlong)local_68 + lVar9 * 0x10 + 0xe);
        bVar5 = *(byte *)((longlong)local_68 + lVar9 * 0x10 + 0xc);
        uVar7 = FUN_14472dff0(local_78,&local_58);
        iVar17 = *(int *)(local_80 + 0x88);
        *(uint *)(local_80 + 0x88) = iVar17 + 1U;
        if (*(uint *)(local_80 + 0x8c) < iVar17 + 1U) {
          FUN_14738ac8a(local_80,iVar17);
        }
        *(ulonglong *)(local_80 + (longlong)iVar17 * 8) =
             (ulonglong)uVar7 & 0xff |
             (ulonglong)bVar5 << 8 |
             (ulonglong)bVar4 << 0x10 |
             (ulonglong)bVar1 << 0x18 | (ulonglong)bVar2 << 0x20 | (ulonglong)(bVar3 & 1) << 0x30;
      }
      lVar9 = 1;
      bVar6 = false;
    } while (bVar14);
    if (local_70[0x16] == 0) {
      local_70[0x16] = DAT_14ca94db0;
      *(undefined4 *)(local_70 + 0x17) = 0;
    }
    local_58 = (undefined8 *)local_70[0x11];
    if (local_58 == (undefined8 *)0x0) {
      local_50 = 0x4000000000000;
      local_58 = &DAT_14ca94d98;
      uVar7 = FUN_14472dff0(local_78);
      iVar17 = *(int *)(local_80 + 0x88);
      *(uint *)(local_80 + 0x88) = iVar17 + 1U;
      if (*(uint *)(local_80 + 0x8c) < iVar17 + 1U) {
        FUN_14738ac8a(local_80,iVar17);
      }
      uVar18 = (ulonglong)(uVar7 & 0xff | 0x3080000);
    }
    else {
      bVar1 = *(byte *)((longlong)local_70 + 0x95);
      bVar2 = *(byte *)((longlong)local_70 + 0x97);
      local_50._0_7_ = CONCAT16(bVar2,(uint6)CONCAT14(bVar1,(int)local_70[0x12]));
      local_50 = (ulonglong)(uint7)local_50;
      bVar3 = *(byte *)((longlong)local_70 + 0x96);
      bVar4 = *(byte *)((longlong)local_70 + 0x94);
      uVar7 = FUN_14472dff0(local_78);
      iVar17 = *(int *)(local_80 + 0x88);
      *(uint *)(local_80 + 0x88) = iVar17 + 1U;
      if (*(uint *)(local_80 + 0x8c) < iVar17 + 1U) {
        FUN_14738ac8a(local_80,iVar17);
      }
      uVar18 = (ulonglong)uVar7 & 0xff |
               (ulonglong)bVar4 << 8 |
               (ulonglong)bVar3 << 0x10 | (ulonglong)bVar1 << 0x20 | (ulonglong)(bVar2 & 1) << 0x30
               | 0x3000000;
    }
    *(ulonglong *)(local_80 + (longlong)iVar17 * 8) = uVar18;
    local_60 = local_70 + 6;
    iVar17 = (int)local_70[0xe];
    if (iVar17 != 0) {
      if (0 < iVar17) {
        pbVar13 = (byte *)((longlong)local_70 + 0x3f);
        uVar7 = 0x4000000;
        lVar9 = 0;
        do {
          local_58 = *(undefined8 **)(pbVar13 + -0xf);
          bVar1 = pbVar13[-2];
          bVar2 = *pbVar13;
          local_50._0_7_ = CONCAT16(bVar2,(uint6)CONCAT14(bVar1,*(undefined4 *)(pbVar13 + -7)));
          local_50 = (ulonglong)(uint7)local_50;
          bVar3 = pbVar13[-1];
          bVar4 = pbVar13[-3];
          uVar8 = FUN_14472dff0(local_78,&local_58);
          local_68 = (longlong *)CONCAT44(local_68._4_4_,uVar8);
          iVar17 = *(int *)(local_80 + 0x88);
          *(uint *)(local_80 + 0x88) = iVar17 + 1U;
          if (*(uint *)(local_80 + 0x8c) < iVar17 + 1U) {
            FUN_14738ac8a(local_80,iVar17);
          }
          *(ulonglong *)(local_80 + (longlong)iVar17 * 8) =
               (ulonglong)local_68 & 0xff |
               (ulonglong)bVar4 << 8 |
               (ulonglong)bVar3 << 0x10 |
               (ulonglong)uVar7 | (ulonglong)bVar1 << 0x20 | (ulonglong)(bVar2 & 1) << 0x30;
          lVar9 = lVar9 + 1;
          iVar17 = (int)local_70[0xe];
          uVar7 = uVar7 + 0x1000000;
          pbVar13 = pbVar13 + 0x10;
        } while (lVar9 < iVar17);
        if (3 < iVar17) goto LAB_148042f86;
      }
      uVar7 = iVar17 * 0x1000000 + 0x4000000;
      iVar17 = iVar17 + -4;
      do {
        lVar9 = local_80;
        lVar10 = (longlong)(int)local_70[0xe];
        lVar11 = lVar10 * 0x10;
        local_58 = (undefined8 *)local_60[lVar10 * 2 + -2];
        bVar1 = *(byte *)((longlong)local_60 + lVar11 + -3);
        bVar2 = *(byte *)((longlong)local_60 + lVar11 + -1);
        local_50._0_7_ = CONCAT16(bVar2,(uint6)CONCAT14(bVar1,(int)local_60[lVar10 * 2 + -1]));
        local_50 = (ulonglong)(uint7)local_50;
        bVar3 = *(byte *)((longlong)local_60 + lVar11 + -2);
        bVar4 = *(byte *)((longlong)local_60 + lVar11 + -4);
        uVar8 = FUN_14472dff0(local_78,&local_58);
        local_68 = (longlong *)CONCAT44(local_68._4_4_,uVar8);
        iVar12 = *(int *)(lVar9 + 0x88);
        *(uint *)(lVar9 + 0x88) = iVar12 + 1U;
        if (*(uint *)(lVar9 + 0x8c) < iVar12 + 1U) {
          FUN_14738ac8a(local_80,iVar12);
        }
        *(ulonglong *)(local_80 + (longlong)iVar12 * 8) =
             (ulonglong)local_68 & 0xff | (ulonglong)bVar4 << 8 | (ulonglong)bVar3 << 0x10 |
             (ulonglong)uVar7 | (ulonglong)bVar1 << 0x20 | (ulonglong)(bVar2 & 1) << 0x30;
        uVar7 = uVar7 + 0x1000000;
        iVar17 = iVar17 + 1;
      } while (iVar17 != 0);
    }
  }
LAB_148042f86:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148043460 FUN_148043460 body=246 status=ok
// SIG undefined FUN_148043460(void)

void FUN_148043460(undefined8 param_1,undefined4 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 auStack_d8 [168];
  longlong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_30 = 0;
  local_28 = 0x800000000;
  FUN_148042e36(param_2,param_3,param_4);
  uVar4 = (uint)DAT_14ca85550;
  cVar2 = FUN_144a798df(uVar4,DAT_14c760db4);
  if ((cVar2 != '\0') &&
     (((&DAT_14ca814b8)[(ulonglong)uVar4 * 0xf] != 1 ||
      ((*(byte *)((longlong)&DAT_14ca814d8 + (ulonglong)uVar4 * 0x3c + 1) & 0x10) == 0)))) {
    uVar3 = local_28 & 0xff;
    iVar1 = *(int *)(param_4 + 0x88);
    *(uint *)(param_4 + 0x88) = iVar1 + 1U;
    if (*(uint *)(param_4 + 0x8c) < iVar1 + 1U) {
      FUN_14738ac8a(param_4,iVar1);
    }
    *(ulonglong *)(param_4 + (longlong)iVar1 * 8) = uVar3 | 0x100040d140000;
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148043570 FUN_148043570 body=42 status=ok
// SIG undefined FUN_148043570(void)

void FUN_148043570(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1480435a2 FUN_1480435a2 body=89 status=ok
// SIG undefined FUN_1480435a2(void)

undefined8 FUN_1480435a2(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  uVar4 = FUN_1449e2608();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,uVar4,1);
  return uVar3;
}



// FUNCTION 1480435fc FUN_1480435fc body=52 status=ok
// SIG undefined FUN_1480435fc(void)

void FUN_1480435fc(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 148043662 FUN_148043662 body=43 status=ok
// SIG undefined FUN_148043662(void)

undefined8 FUN_148043662(undefined8 param_1,int param_2)

{
  FUN_1438f6d6c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14804368e FUN_14804368e body=138 status=ok
// SIG undefined FUN_14804368e(void)

code * FUN_14804368e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumDispatchInfos";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000002a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14645f782;
}



// FUNCTION 148043718 FUN_148043718 body=138 status=ok
// SIG undefined FUN_148043718(void)

code * FUN_148043718(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CulledInstanceCounts";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000004e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f0e0f2;
}



// FUNCTION 1480437a6 FUN_1480437a6 body=138 status=ok
// SIG undefined FUN_1480437a6(void)

code * FUN_1480437a6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RelativePreViewTranslation";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1100000003f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f38654;
}



// FUNCTION 148043830 FUN_148043830 body=138 status=ok
// SIG undefined FUN_148043830(void)

code * FUN_148043830(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GPUInstanceCountBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf00000003c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14645fa24;
}



// FUNCTION 1480438ba FUN_1480438ba body=138 status=ok
// SIG undefined FUN_1480438ba(void)

code * FUN_1480438ba(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ParticleDataFloatBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe000000039;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148043944;
}



// FUNCTION 148043944 FUN_148043944 body=138 status=ok
// SIG undefined FUN_148043944(void)

code * FUN_148043944(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LocalTransformTile";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd000000037;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480439ce;
}



// FUNCTION 1480439ce FUN_1480439ce body=138 status=ok
// SIG undefined FUN_1480439ce(void)

code * FUN_1480439ce(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LocalTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000036;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148043a58;
}



// FUNCTION 148043a58 FUN_148043a58 body=138 status=ok
// SIG undefined FUN_148043a58(void)

code * FUN_148043a58(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MeshRotation";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000034;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148043ae2;
}



// FUNCTION 148043ae2 FUN_148043ae2 body=138 status=ok
// SIG undefined FUN_148043ae2(void)

code * FUN_148043ae2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MeshScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000033;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f386de;
}



// FUNCTION 148043b6c FUN_148043b6c body=138 status=ok
// SIG undefined FUN_148043b6c(void)

code * FUN_148043b6c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DefaultRotation";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000031;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148043bf6;
}



// FUNCTION 148043bf6 FUN_148043bf6 body=138 status=ok
// SIG undefined FUN_148043bf6(void)

code * FUN_148043bf6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DefaultPosition";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000030;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148043c80;
}



// FUNCTION 148043c80 FUN_148043c80 body=138 status=ok
// SIG undefined FUN_148043c80(void)

code * FUN_148043c80(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MeshIndexValue";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x380000002e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148043d0a;
}



// FUNCTION 148043d0a FUN_148043d0a body=138 status=ok
// SIG undefined FUN_148043d0a(void)

code * FUN_148043d0a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RenderVisibilityValue";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x340000002d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148043d94;
}



// FUNCTION 148043d94 FUN_148043d94 body=138 status=ok
// SIG undefined FUN_148043d94(void)

code * FUN_148043d94(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MeshIndexOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000002b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148043e1e;
}



// FUNCTION 148043e1e FUN_148043e1e body=138 status=ok
// SIG undefined FUN_148043e1e(void)

code * FUN_148043e1e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RenderVisibilityOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c0000002a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148043ea8;
}



// FUNCTION 148043ea8 FUN_148043ea8 body=138 status=ok
// SIG undefined FUN_148043ea8(void)

code * FUN_148043ea8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"bLocalSpace";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000029;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148043f32;
}



// FUNCTION 148043f32 FUN_148043f32 body=138 status=ok
// SIG undefined FUN_148043f32(void)

code * FUN_148043f32(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ScaleDataOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2400000028;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148043fbc;
}



// FUNCTION 148043fbc FUN_148043fbc body=138 status=ok
// SIG undefined FUN_148043fbc(void)

code * FUN_148043fbc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RotationDataOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000027;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148044046;
}



// FUNCTION 148044046 FUN_148044046 body=138 status=ok
// SIG undefined FUN_148044046(void)

code * FUN_148044046(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PositionDataOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c00000026;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480440d0;
}



// FUNCTION 1480440d0 FUN_1480440d0 body=138 status=ok
// SIG undefined FUN_1480440d0(void)

code * FUN_1480440d0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SystemLWCTile";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000024;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14804415a;
}



// FUNCTION 14804415a FUN_14804415a body=138 status=ok
// SIG undefined FUN_14804415a(void)

code * FUN_14804415a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceCountOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000022;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480441e4;
}



// FUNCTION 1480441e4 FUN_1480441e4 body=138 status=ok
// SIG undefined FUN_1480441e4(void)

code * FUN_1480441e4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CPUNumInstances";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000021;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f385cc;
}



// FUNCTION 14804426e FUN_14804426e body=132 status=ok
// SIG undefined FUN_14804426e(void)

undefined1 * FUN_14804426e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ParticleDataFloatStride";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1480442f2;
}



// FUNCTION 1480442f6 FUN_1480442f6 body=138 status=ok
// SIG undefined FUN_1480442f6(void)

code * FUN_1480442f6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DefaultDynamicMaterialParameter3";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2100000006f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148044380;
}



// FUNCTION 148044380 FUN_148044380 body=138 status=ok
// SIG undefined FUN_148044380(void)

code * FUN_148044380(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DefaultDynamicMaterialParameter2";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000006e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14612b83c;
}



// FUNCTION 14804440a FUN_14804440a body=138 status=ok
// SIG undefined FUN_14804440a(void)

code * FUN_14804440a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DefaultMatRandom";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c40000006a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148044494;
}



// FUNCTION 148044494 FUN_148044494 body=138 status=ok
// SIG undefined FUN_148044494(void)

code * FUN_148044494(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DefaultSubImage";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c000000069;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14804451e;
}


