// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1414a8e8a FUN_1414a8e8a body=1156 status=ok
// SIG undefined FUN_1414a8e8a(void)

void FUN_1414a8e8a(void)

{
  longlong lVar1;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = 0xb0;
  do {
    *(undefined8 *)(lVar1 + 0x14cadc1c0) = 0;
    *(undefined8 *)(&DAT_14cadc1c8 + lVar1) = 0;
    *(undefined4 *)((longlong)&DAT_14cadc1d0 + lVar1) = 0;
    *(undefined4 *)((longlong)&DAT_14cadc1d0 + lVar1 + 4) = 0;
    *(undefined4 *)((longlong)&DAT_14cadc1d8 + lVar1) = 0;
    *(undefined4 *)((longlong)&DAT_14cadc1d8 + lVar1 + 4) = 0x3ff00000;
    *(undefined8 *)(&DAT_14cadc1e0 + lVar1) = 0;
    *(undefined8 *)((longlong)&DAT_14cadc1e8 + lVar1) = 0;
    *(undefined8 *)((longlong)&DAT_14cadc1f0 + lVar1) = 0;
    *(undefined8 *)(&DAT_14cadc1f8 + lVar1) = 0;
    *(undefined4 *)((longlong)&DAT_14cadc200 + lVar1) = 0;
    *(undefined4 *)((longlong)&DAT_14cadc200 + lVar1 + 4) = 0x3ff00000;
    *(undefined4 *)((longlong)&DAT_14cadc208 + lVar1) = 0;
    *(undefined4 *)((longlong)&DAT_14cadc208 + lVar1 + 4) = 0x3ff00000;
    *(undefined8 *)(&DAT_14cadc210 + lVar1) = 0x3ff0000000000000;
    *(undefined8 *)((longlong)&DAT_14cadc218 + lVar1) = 0;
    *(undefined8 *)((longlong)&DAT_14cadc220 + lVar1) = 0;
    *(undefined8 *)((longlong)&DAT_14cadc228 + lVar1) = 0;
    *(undefined4 *)((longlong)&DAT_14cadc230 + lVar1) = 0;
    *(undefined4 *)(lVar1 + 0x14cadc234) = 0;
    *(undefined4 *)((longlong)&DAT_14cadc238 + lVar1) = 0;
    *(undefined4 *)((longlong)&DAT_14cadc238 + lVar1 + 4) = 0x3ff00000;
    *(undefined8 *)((longlong)&DAT_14cadc240 + lVar1) = 0;
    *(undefined8 *)((longlong)&DAT_14cadc248 + lVar1) = 0;
    *(undefined8 *)((longlong)&DAT_14cadc250 + lVar1) = 0;
    *(undefined8 *)((longlong)&DAT_14cadc258 + lVar1) = 0;
    *(undefined4 *)((longlong)&DAT_14cadc260 + lVar1) = 0;
    *(undefined4 *)(lVar1 + 0x14cadc264) = 0x3ff00000;
    *(undefined4 *)(lVar1 + 0x14cadc268) = 0;
    *(undefined4 *)(lVar1 + 0x14cadc26c) = 0x3ff00000;
    *(undefined8 *)(&DAT_14cadc270 + lVar1) = 0x3ff0000000000000;
    *(undefined8 *)(lVar1 + 0x14cadc278) = 0;
    lVar1 = lVar1 + 0xc0;
  } while (lVar1 != 0x1bb0);
  local_c8 = 0xbfe6a09e6ecb41fe;
  uStack_c0 = 0x8000000000000000;
  uStack_b8 = 0x8000000000000000;
  uStack_b0 = 0x3fe6a09e5e333598;
  FUN_1414a9310(&DAT_14cadc330,&local_c8);
  local_c8 = 0x3fe6a09e6ecb41fe;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0x3fe6a09e5e333598;
  FUN_1414a9310(&DAT_14cadc570,&local_c8);
  local_c8 = 0x3feffffffffffff7;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0xbe6777a5cf72cecc;
  FUN_1414a9310(&DAT_14cadc630,&local_c8);
  local_c8 = 0x3fe000000bbbd2e8;
  uStack_c0 = 0x3fdffffffffffff7;
  uStack_b8 = 0x3fdffffffffffff7;
  uStack_b0 = 0x3fdfffffe8885a30;
  FUN_1414a9310(&DAT_14cadc6f0,&local_c8);
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0x3fe6a09e6ecb41fe;
  uStack_b0 = 0x3fe6a09e5e333598;
  FUN_1414a9310(&DAT_14cadc870,&local_c8);
  local_c8 = 0xbfe000000bbbd2e8;
  uStack_c0 = 0xbfdffffffffffff7;
  uStack_b8 = 0x3fdffffffffffff7;
  uStack_b0 = 0x3fdfffffe8885a30;
  FUN_1414a9310(&DAT_14cadc930,&local_c8);
  local_c8 = 0x3fe6a09e6ecb41f8;
  uStack_c0 = 0x3fe6a09e5e333592;
  uStack_b8 = 0xbe60980c6baf35df;
  uStack_b0 = 0xbe60980c5f83e18c;
  FUN_1414a9310(&DAT_14cadcab0,&local_c8);
  local_c8 = 0x3fe6a09e6ecb41f8;
  uStack_c0 = 0x3e60980c6baf35df;
  uStack_b8 = 0x3fe6a09e5e333592;
  uStack_b0 = 0xbe60980c5f83e18c;
  FUN_1414a9310(&DAT_14cadcb70,&local_c8);
  local_c8 = 0xbfe000000bbbd2e8;
  uStack_c0 = 0xbfdffffffffffff7;
  uStack_b8 = 0xbfdffffffffffff7;
  uStack_b0 = 0x3fdfffffe8885a30;
  FUN_1414a9310(&DAT_14cadcc30,&local_c8);
  local_c8 = 0x8000000000000000;
  uStack_c0 = 0xbfe6a09e6ecb41fe;
  uStack_b8 = 0x8000000000000000;
  uStack_b0 = 0x3fe6a09e5e333598;
  FUN_1414a9310(&DAT_14cadcdb0,&local_c8);
  local_c8 = 0x3fe000000bbbd2e8;
  uStack_c0 = 0xbfdffffffffffff7;
  uStack_b8 = 0x3fdffffffffffff7;
  uStack_b0 = 0x3fdfffffe8885a30;
  FUN_1414a9310(&DAT_14cadce70,&local_c8);
  local_c8 = 0x3e60980c6baf35df;
  uStack_c0 = 0x3fe6a09e6ecb41f8;
  uStack_b8 = 0x3fe6a09e5e333592;
  uStack_b0 = 0xbe60980c5f83e18c;
  FUN_1414a9310(&DAT_14cadd0b0,&local_c8);
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0x3feffffffffffff7;
  uStack_b0 = 0xbe6777a5cf72cecc;
  FUN_1414a9310(&DAT_14cadd170,&local_c8);
  local_c8 = 0xbe60980c6baf35df;
  uStack_c0 = 0xbfe6a09e6ecb41f8;
  uStack_b8 = 0x3fe6a09e5e333592;
  uStack_b0 = 0xbe60980c5f83e18c;
  FUN_1414a9310(&DAT_14cadd2f0,&local_c8);
  local_c8 = 0xbe6777a5cf72cec5;
  uStack_c0 = 0xbfefffffffffffee;
  uStack_b8 = 0xbe6777a5cf72cec5;
  uStack_b0 = 0x3ce135bdb6c717b8;
  FUN_1414a9310(&DAT_14cadd3b0,&local_c8);
  local_c8 = 0xbfe000000bbbd2e8;
  uStack_c0 = 0x3fdffffffffffff7;
  uStack_b8 = 0xbfdffffffffffff7;
  uStack_b0 = 0x3fdfffffe8885a30;
  FUN_1414a9310(&DAT_14cadd470,&local_c8);
  local_c8 = 0x8000000000000000;
  uStack_c0 = 0x8000000000000000;
  uStack_b8 = 0xbfe6a09e6ecb41fe;
  uStack_b0 = 0x3fe6a09e5e333598;
  FUN_1414a9310(&DAT_14cadd5f0,&local_c8);
  local_c8 = 0x3fe000000bbbd2e8;
  uStack_c0 = 0xbfdffffffffffff7;
  uStack_b8 = 0xbfdffffffffffff7;
  uStack_b0 = 0x3fdfffffe8885a30;
  FUN_1414a9310(&DAT_14cadd6b0,&local_c8);
  local_c8 = 0xbfe6a09e6ecb41f8;
  uStack_c0 = 0x3fe6a09e5e333592;
  uStack_b8 = 0x3e60980c6baf35df;
  uStack_b0 = 0xbe60980c5f83e18c;
  FUN_1414a9310(&DAT_14cadd830,&local_c8);
  local_c8 = 0;
  uStack_c0 = 0x3fe6a09e6ecb41fe;
  uStack_b8 = 0;
  uStack_b0 = 0x3fe6a09e5e333598;
  FUN_1414a9310(&DAT_14cadd8f0,&local_c8);
  local_c8 = 0xbfe000000bbbd2e8;
  uStack_c0 = 0x3fdffffffffffff7;
  uStack_b8 = 0x3fdffffffffffff7;
  uStack_b0 = 0x3fdfffffe8885a30;
  FUN_1414a9310(&DAT_14cadd9b0,&local_c8);
  local_c8 = 0xbfe6a09e6ecb41f8;
  uStack_c0 = 0xbe60980c6baf35df;
  uStack_b8 = 0x3fe6a09e5e333592;
  uStack_b0 = 0xbe60980c5f83e18c;
  FUN_1414a9310(&DAT_14caddb30,&local_c8);
  local_c8 = 0x3fe000000bbbd2e8;
  uStack_c0 = 0x3fdffffffffffff7;
  uStack_b8 = 0xbfdffffffffffff7;
  uStack_b0 = 0x3fdfffffe8885a30;
  FUN_1414a9310(&DAT_14caddbf0,&local_c8);
  if ((local_a0 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414a9310 FUN_1414a9310 body=383 status=ok
// SIG undefined FUN_1414a9310(void)

void FUN_1414a9310(double *param_1,double *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar4 = *param_2;
  dVar7 = param_2[1];
  dVar2 = param_2[2];
  dVar3 = param_2[3];
  *param_1 = dVar4;
  param_1[1] = dVar7;
  param_1[2] = dVar2;
  param_1[3] = dVar3;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[8] = 1.0;
  param_1[9] = 1.0;
  param_1[10] = 1.0;
  param_1[0xb] = 0.0;
  dVar8 = -dVar4;
  dVar9 = -dVar7;
  dVar2 = dVar2 * -1.0;
  dVar3 = dVar3 * 1.0;
  param_1[0xc] = dVar8;
  param_1[0xd] = dVar9;
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0xe) = auVar1;
  dVar5 = dVar4 * -0.0 - dVar9 * 0.0;
  dVar6 = dVar7 * -0.0 - dVar2 * 0.0;
  dVar7 = dVar2 * 0.0 - dVar8 * 0.0;
  dVar6 = dVar6 + dVar6;
  dVar7 = dVar7 + dVar7;
  dVar5 = dVar5 + dVar5;
  param_1[0x10] = 0.0 - ((dVar5 * dVar9 - dVar7 * dVar2) + dVar3 * dVar6 + 0.0);
  param_1[0x11] = 0.0 - (dVar5 * dVar4 + dVar2 * dVar6 + dVar3 * dVar7 + 0.0);
  param_1[0x12] = 0.0 - (dVar3 * dVar5 + 0.0 + (dVar7 * dVar8 - dVar6 * dVar9));
  param_1[0x13] = 0.0;
  param_1[0x14] = 1.0;
  param_1[0x15] = 1.0;
  param_1[0x16] = 1.0;
  param_1[0x17] = 0.0;
  return;
}



// FUNCTION 1414a94ec FUN_1414a94ec body=1340 status=ok
// SIG undefined FUN_1414a94ec(void)

void FUN_1414a94ec(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  char cVar18;
  int iVar19;
  longlong lVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  bool bVar26;
  ulonglong uVar27;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [8];
  undefined8 *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1414a9a2a();
  lVar20 = *(longlong *)(param_1 + 0x1720);
  if (lVar20 == 0) {
    FUN_1458ae6da(param_1,*(undefined1 *)(param_1 + 0x1728),0);
    goto LAB_1414a9686;
  }
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c();
    lVar20 = *(longlong *)(param_1 + 0x1720);
  }
  *(longlong *)(param_1 + 0x1710) = lVar20;
  FUN_1414a9a2a(param_1);
  if ((((*(longlong *)(param_1 + 0x1a08) != 0) && (*(longlong *)(param_1 + 0x1a00) != 0)) &&
      (*(longlong *)(param_1 + 0x428) != 0)) &&
     (((lVar20 = FUN_144a7954a(), lVar20 != 0 &&
       (*(longlong *)(*(longlong *)(param_1 + 0x1710) + 0x428) != 0)) &&
      ((lVar20 = FUN_144a7954a(), lVar20 != 0 &&
       (lVar20 = (**(code **)(*(longlong *)(param_1 + 0x4e8) + 0x58))
                           (param_1 + 0x4e8,&DAT_14cb8d438), lVar20 != 0)))))) {
    lVar25 = *(longlong *)(param_1 + 0x1710) + 0x10e0;
    lVar20 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x1710) + 0x10e0) + 0x58))
                       (lVar25,&DAT_14cb8d438);
    if (lVar20 != 0) {
      auVar14._8_8_ =
           -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x1778) - DAT_14c8464a8));
      auVar14._0_8_ =
           -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(param_1 + 6000) - DAT_14c8464a0));
      iVar19 = movmskpd((int)lVar20,auVar14);
      auVar12._8_8_ =
           -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x1788) - DAT_14c8464b8));
      auVar12._0_8_ =
           -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x1780) - DAT_14c8464b0));
      uVar23 = movmskpd((int)lVar25,auVar12);
      if ((uVar23 & 0x3fffffff) == 0 && iVar19 == 0) {
        lVar20 = -(ulonglong)
                  (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x1758) - DAT_14c846488));
        auVar17._8_4_ = (int)lVar20;
        auVar17._0_8_ =
             -(ulonglong)
              (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x1750) - DAT_14c846480));
        auVar17._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
        uVar23 = movmskpd(iVar19,auVar17);
        lVar20 = -(ulonglong)
                  (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x1768) - DAT_14c846498));
        auVar16._8_4_ = (int)lVar20;
        auVar16._0_8_ =
             -(ulonglong)
              (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x1760) - DAT_14c846490));
        auVar16._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
        iVar19 = movmskpd(0,auVar16);
        uVar24 = iVar19 << 2 | uVar23;
        if (uVar24 != 0) {
          auVar15._8_8_ =
               -(ulonglong)
                (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x1758) + DAT_14c846488));
          auVar15._0_8_ =
               -(ulonglong)
                (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x1750) + DAT_14c846480));
          uVar23 = movmskpd(uVar23,auVar15);
          auVar13._8_8_ =
               -(ulonglong)
                (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x1768) + DAT_14c846498));
          auVar13._0_8_ =
               -(ulonglong)
                (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x1760) + DAT_14c846490));
          uVar24 = movmskpd(uVar24,auVar13);
          if ((uVar24 & 0x3fffffff) != 0 || uVar23 != 0) goto LAB_1414a986a;
        }
        auVar11._8_8_ =
             -(ulonglong)
              (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x1798) - DAT_14c8464c8));
        auVar11._0_8_ =
             -(ulonglong)
              (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x1790) - DAT_14c8464c0));
        iVar19 = movmskpd(uVar23,auVar11);
        auVar10._8_8_ =
             -(ulonglong)
              (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x17a8) - dRam000000014c8464d8));
        auVar10._0_8_ =
             -(ulonglong)
              (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x17a0) - DAT_14c8464d0));
        uVar23 = movmskpd(0,auVar10);
        if ((uVar23 & 0x3fffffff) == 0 && iVar19 == 0) goto LAB_1414a9574;
      }
LAB_1414a986a:
      FUN_1414aa5b0(param_1);
      lVar20 = *(longlong *)(param_1 + 0x1a08);
      if ((lVar20 != 0) && (lVar25 = *(longlong *)(param_1 + 0x1700), lVar25 != 0)) {
        dVar1 = *(double *)(param_1 + 0x17c0);
        dVar2 = *(double *)(lVar20 + 0x670);
        dVar3 = *(double *)(param_1 + 0x17b0);
        dVar4 = *(double *)(param_1 + 0x17b8);
        dVar5 = *(double *)(lVar20 + 0x668);
        dVar6 = *(double *)(lVar20 + 0x660);
        *(undefined1 *)(lVar25 + 0x19c0) = 1;
        *(double *)(lVar25 + 0x19a8) = dVar3 * dVar6;
        *(double *)(lVar25 + 0x19b0) = dVar4 * dVar5;
        *(double *)(lVar25 + 0x19b8) = dVar1 * dVar2;
      }
      goto LAB_1414a9686;
    }
  }
LAB_1414a9574:
  lVar20 = FUN_1447210f0(param_1);
  if (lVar20 != 0) {
    if (*(longlong *)(param_1 + 0x1710) != 0) {
      FUN_1405e47c6(*(longlong *)(param_1 + 0x1710),0);
    }
    if (*(longlong *)(lVar20 + 0x1f0) == 0) {
      puVar21 = (undefined8 *)(lVar20 + 0x458);
    }
    else {
      puVar21 = (undefined8 *)(*(longlong *)(lVar20 + 0x1f0) + 0xf0);
    }
    uVar7 = *puVar21;
    local_c8 = (undefined8 *)0x0;
    local_c0 = 0;
    FUN_1446efa72(&local_c8,0,3,0x10);
    puVar21 = local_c8;
    local_c0 = 3;
    *local_c8 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar25 = DAT_14c758608 + 1;
    lVar20 = DAT_14c758608 + 1;
    if (lVar25 == 0) {
      LOCK();
      UNLOCK();
      lVar25 = DAT_14c758608 + 2;
      lVar20 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar20;
    local_c8[2] = lVar25;
    *local_c8 = &PTR_FUN_14b95e910;
    local_c8[3] = 0;
    FUN_14485c47a(local_c8 + 3,param_1);
    *(undefined4 *)(puVar21 + 5) = 0;
    puVar21[4] = FUN_1414a94ec;
    local_b8 = 0;
    local_b0 = 0;
    FUN_14487d8d8(&local_b8,&local_c8);
    local_78 = 1;
    FUN_14016fdb0(uVar7,local_d0,&local_b8);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
    FUN_1449db362(&local_c8);
  }
LAB_1414a9686:
  if (*(longlong *)(param_1 + 0x1720) == 0) {
    FUN_141418d4a(param_1);
  }
  else {
    FUN_1414a9acc(param_1);
  }
  iVar19 = *(int *)(param_1 + 0x1eb4);
  *(int *)(param_1 + 0x1eb4) = iVar19 + 1;
  uVar22 = (ulonglong)*(int *)(param_1 + 0x1ea8);
  if ((longlong)uVar22 < 1) {
    *(int *)(param_1 + 0x1eb4) = iVar19;
  }
  else {
    bVar26 = false;
    do {
      lVar20 = uVar22 * 0x10 + -8;
      uVar27 = uVar22;
      while (((lVar25 = *(longlong *)(param_1 + 0x1ea0), *(int *)(lVar25 + lVar20) != 0 &&
              (plVar8 = *(longlong **)(lVar25 + -8 + lVar20), plVar8 != (longlong *)0x0)) &&
             (cVar18 = (**(code **)(*plVar8 + 0x60))(), cVar18 != '\0'))) {
        lVar20 = lVar20 + -0x10;
        bVar9 = uVar27 < 2;
        uVar27 = uVar27 - 1;
        if (bVar9) {
          *(int *)(param_1 + 0x1eb4) = *(int *)(param_1 + 0x1eb4) + -1;
          if (bVar26) goto LAB_1414a98fc;
          goto LAB_1414a971c;
        }
      }
      uVar22 = uVar27 - 1;
      bVar26 = true;
    } while (1 < uVar27);
    *(int *)(param_1 + 0x1eb4) = *(int *)(param_1 + 0x1eb4) + -1;
LAB_1414a98fc:
    FUN_14474d06a((longlong *)(param_1 + 0x1ea0),0);
  }
LAB_1414a971c:
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414a9a2a FUN_1414a9a2a body=161 status=ok
// SIG undefined FUN_1414a9a2a(void)

void FUN_1414a9a2a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_1 + 0x1a08) = 0;
  if ((*(longlong *)(param_1 + 0x1710) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1710) + 0x3f70), lVar1 != 0)) {
    local_40 = *(undefined8 *)(lVar1 + 0xeb0);
    FUN_1446dcdd4(local_38);
    if (DAT_14cbe6df8 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_144815d88(DAT_14cbe6df8,local_38);
    }
    *(undefined8 *)(param_1 + 0x1a08) = uVar2;
    if (local_20 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414a9acc FUN_1414a9acc body=2066 status=ok
// SIG undefined FUN_1414a9acc(void)

void FUN_1414a9acc(ulonglong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  int iVar22;
  undefined1 auStack_1a8 [32];
  undefined8 *local_188;
  byte *local_180;
  uint local_178;
  ulonglong local_170;
  undefined2 *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  code **local_150;
  undefined1 *local_148;
  code *local_140;
  ulonglong local_130;
  uint local_128;
  int local_124;
  uint *local_120;
  longlong local_118;
  ulonglong local_110;
  longlong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  code *local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  byte local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  plVar10 = *(longlong **)(param_1 + 0x3c0);
  if (plVar10 == (longlong *)0x0) {
LAB_1414a9b2b:
    plVar10 = (longlong *)0x0;
  }
  else {
    if (DAT_14cbadd90 == 0) {
      local_150 = &local_78;
      local_78 = FUN_141030f22;
      local_140 = FUN_14081d0ea;
      local_148 = &LAB_1459f2e4c;
      local_158 = &LAB_148c39de3;
      local_160 = &LAB_1457a9eb2;
      local_168 = &DAT_149e063b2;
      local_170 = 0;
      local_178 = 0x10000004;
      local_180 = (byte *)CONCAT44(local_180._4_4_,0x10);
      local_188 = (undefined8 *)CONCAT44(local_188._4_4_,0x3de0);
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(plVar10[2] + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(plVar10[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) !=
        DAT_14cbadd90 + 0x30)) goto LAB_1414a9b2b;
  }
  if (((*(longlong *)(param_1 + 0x1710) == 0) || (*(longlong *)(param_1 + 0x1a00) == 0)) ||
     (*(char *)(param_1 + 0x17d0) != '\0')) goto LAB_1414aa1c9;
  lVar20 = *(longlong *)(param_1 + 0x1a08);
  *(undefined1 *)(param_1 + 0x17d0) = 1;
  local_130 = param_1;
  if (((plVar10 != (longlong *)0x0) && ((*(byte *)(plVar10 + 0x84) & 2) != 0)) &&
     ((cVar6 = (**(code **)(*plVar10 + 0x6c8))(), lVar20 != 0 && (cVar6 != '\0')))) {
    plVar2 = plVar10 + 300;
    local_78 = *(code **)(lVar20 + 0x738);
    local_68 = 0;
    local_178 = 0x3f800000;
    local_180._0_1_ = 1;
    local_188 = (undefined8 *)((ulonglong)local_188 & 0xffffffffffffff00);
    local_170 = param_1;
    local_70._0_4_ = *(undefined4 *)(lVar20 + 0x740);
    FUN_140cab31c(plVar10,&local_78,0xff,plVar2);
    local_78 = *(code **)(lVar20 + 0x750);
    local_70._0_4_ = *(undefined4 *)(lVar20 + 0x758);
    local_68 = 0;
    local_170 = local_130;
    local_178 = 0x3f800000;
    local_180._0_1_ = 1;
    local_188 = (undefined8 *)((ulonglong)local_188 & 0xffffffffffffff00);
    FUN_140cab31c(plVar10,&local_78,0xff,plVar2);
    local_78 = *(code **)(lVar20 + 0x768);
    local_70._0_4_ = *(undefined4 *)(lVar20 + 0x770);
    local_68 = 0;
    local_170 = local_130;
    local_178 = 0x3f800000;
    local_180._0_1_ = 1;
    local_188 = (undefined8 *)((ulonglong)local_188 & 0xffffffffffffff00);
    FUN_140cab31c(plVar10,&local_78,0xff,plVar2);
    param_1 = local_130;
    local_78 = *(code **)(lVar20 + 0x798);
    local_70 = (longlong *)CONCAT44(local_70._4_4_,*(undefined4 *)(lVar20 + 0x7a0));
    local_68 = 0;
    local_170 = local_130;
    local_178 = 0x3f800000;
    local_180 = (byte *)CONCAT71(local_180._1_7_,1);
    local_188 = (undefined8 *)((ulonglong)local_188 & 0xffffffffffffff00);
    FUN_140cab31c(plVar10,&local_78,0xff,plVar2);
  }
  lVar20 = *(longlong *)(param_1 + 0x1a00);
  iVar16 = *(int *)(lVar20 + 0x1158);
  if (iVar16 == 0) {
    uVar18 = 1;
    uVar19 = 0;
    iVar22 = 0;
    iVar12 = 0;
  }
  else {
    puVar17 = *(uint **)(lVar20 + 0x1150);
    if (*(uint **)(lVar20 + 0x1150) == (uint *)0x0) {
      puVar17 = (uint *)(lVar20 + 0x1140);
    }
    uVar21 = *puVar17;
    if (uVar21 == 0) {
      iVar22 = iVar16 + 0x1e;
      if (-1 < iVar16 + -1) {
        iVar22 = iVar16 + -1;
      }
      uVar19 = 0;
      uVar18 = (ulonglong)(uint)(iVar22 >> 5);
      if (iVar22 >> 5 < 1) {
        uVar18 = uVar19;
      }
      iVar22 = 0;
      do {
        if (uVar18 == uVar19) goto LAB_1414aa06e;
        iVar22 = iVar22 + 0x20;
        uVar21 = puVar17[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar21 == 0);
    }
    else {
      uVar19 = 0;
      iVar22 = 0;
    }
    uVar18 = (ulonglong)(-uVar21 & uVar21);
    uVar4 = uVar18 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar12 = (iVar22 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if (iVar16 <= iVar12) {
      iVar12 = iVar16;
    }
  }
  if (iVar12 < iVar16) {
    uVar21 = 0xffffffff;
    local_120 = (uint *)(lVar20 + 0x1140);
    local_118 = lVar20;
    do {
      puVar3 = (undefined8 *)(*(longlong *)(local_118 + 0x1130) + (longlong)iVar12 * 0xe0);
      lVar20 = *(longlong *)(local_118 + 0x1130) + (longlong)iVar12 * 0xe0;
      local_49 = 0;
      local_180 = &local_49;
      local_188 = (undefined8 *)((ulonglong)local_188 & 0xffffffff00000000);
      local_128 = uVar21;
      local_124 = iVar22;
      local_110 = uVar19;
      FUN_140aff8e8(param_1,&local_78,puVar3,lVar20 + 8);
      lVar7 = FUN_1402d1dc0(&local_78);
      if ((lVar7 != 0) && (iVar16 = *(int *)(lVar20 + 0x90), (longlong)iVar16 != 0)) {
        lVar20 = *(longlong *)(lVar20 + 0x88);
        local_108 = param_1 + 0x1a20;
        if ((local_49 & 1) != 0) {
          local_108 = param_1 + 0x1a70;
        }
        lVar7 = 0;
        do {
          local_88 = DAT_14c846508;
          local_98 = DAT_14c8464f8;
          uStack_90 = DAT_14c846500;
          local_b8 = (undefined4)DAT_14c8464e0;
          uStack_b4 = DAT_14c8464e0._4_4_;
          uStack_b0 = (undefined4)DAT_14c8464e8;
          uStack_ac = DAT_14c8464e8._4_4_;
          local_a8 = DAT_14c8464f0;
          uVar5 = *(undefined8 *)(lVar20 + lVar7);
          uVar11 = *(undefined8 *)(param_1 + 0x428);
          uVar8 = FUN_1402d1dc0();
          local_170 = local_170 & 0xffffffffffffff00;
          local_178 = local_178 & 0xffffff00;
          local_188 = &local_98;
          local_168 = (undefined2 *)CONCAT71(local_168._1_7_,1);
          local_180 = (byte *)CONCAT44(local_180._4_4_,2);
          lVar9 = FUN_140a44468(uVar8,uVar11,uVar5,&local_b8);
          if (lVar9 != 0) {
            FUN_140affd74(param_1,lVar9);
            uVar5 = *puVar3;
            uVar21 = (uint)((ulonglong)uVar5 >> 0x10);
            uVar13 = (uint)uVar5 & 0xffff;
            plVar10 = (longlong *)
                      FUN_140affefe(local_108,
                                    ((uint)uVar5 << 0x10 | uVar13) + (int)((ulonglong)uVar5 >> 0x20)
                                    + (uVar21 << 0x13 | uVar21 & 0xffff) + (uVar13 >> 4),puVar3);
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar9);
            }
            iVar22 = (int)plVar10[1];
            *(uint *)(plVar10 + 1) = iVar22 + 1U;
            if (*(uint *)((longlong)plVar10 + 0xc) < iVar22 + 1U) {
              FUN_140affc12(plVar10,iVar22);
            }
            param_1 = local_130;
            *(longlong *)(*plVar10 + (longlong)iVar22 * 8) = lVar9;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar9);
            }
          }
          lVar7 = lVar7 + 0x20;
        } while ((longlong)iVar16 * 0x20 != lVar7);
      }
      if (CONCAT44(uStack_5c,uStack_60) != 0) {
        FUN_1400020a8();
      }
      uVar21 = local_128 & ~(uint)uVar18;
      puVar17 = *(uint **)(local_118 + 0x1150);
      if (*(uint **)(local_118 + 0x1150) == (uint *)0x0) {
        puVar17 = local_120;
      }
      iVar16 = *(int *)(local_118 + 0x1158);
      iVar12 = (int)local_110;
      lVar20 = (longlong)iVar12;
      uVar13 = puVar17[lVar20] & uVar21;
      uVar19 = local_110;
      iVar22 = local_124;
      if (uVar13 == 0) {
        iVar14 = iVar16 + 0x1e;
        if (-1 < iVar16 + -1) {
          iVar14 = iVar16 + -1;
        }
        iVar14 = iVar14 >> 5;
        iVar15 = iVar14;
        if (iVar14 < iVar12) {
          iVar15 = iVar12;
        }
        if (iVar14 <= iVar12) break;
        lVar7 = 0;
        while( true ) {
          iVar22 = iVar22 + 0x20;
          uVar13 = puVar17[lVar20 + lVar7 + 1];
          if (uVar13 != 0) break;
          lVar7 = lVar7 + 1;
          if (iVar15 - lVar20 == lVar7) goto LAB_1414aa067;
        }
        uVar19 = (ulonglong)(iVar12 + (int)lVar7 + 1);
        uVar21 = 0xffffffff;
      }
      uVar18 = (ulonglong)(-uVar13 & uVar13);
      uVar4 = uVar18 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar12 = (iVar22 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar16);
LAB_1414aa067:
    lVar20 = *(longlong *)(param_1 + 0x1a00);
  }
LAB_1414aa06e:
  local_188 = (undefined8 *)0x0;
  FUN_140b32deb(&local_d0,param_1,lVar20 + 0x1528,*(undefined8 *)(lVar20 + 0x1588));
  local_d0 = 0;
  local_c8 = 0xffffffffffffffff;
  lVar20 = *(longlong *)(param_1 + 0x1a00);
  uVar5 = *(undefined8 *)(lVar20 + 0x1588);
  local_f8 = *(undefined4 *)(lVar20 + 0x1350);
  local_100 = *(undefined8 *)(lVar20 + 0x1348);
  local_f0 = *(undefined8 *)(lVar20 + 0x1358);
  uVar11 = FUN_14477b664(*(undefined8 *)(lVar20 + 0x1360));
  local_e8 = FUN_14477b664(uVar11);
  local_e0 = *(undefined8 *)(lVar20 + 0x1368);
  local_d8 = *(longlong *)(lVar20 + 0x1370);
  if ((local_d8 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    piVar1 = *(int **)(local_d8 + 0x50);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (DAT_14cb259f8 == 0) {
      iVar16 = 5;
    }
    else {
      if ((char)piVar1[1] != '\x01') {
        FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
        param_1 = local_130;
        goto LAB_1414aa126;
      }
      iVar16 = 2;
    }
    LOCK();
    piVar1[2] = iVar16;
    UNLOCK();
    param_1 = local_130;
  }
LAB_1414aa126:
  local_188 = (undefined8 *)0x0;
  FUN_140f7fb5b(&local_78,param_1,&local_100,uVar5);
  if ((code **)(param_1 + 0x1ae0) != &local_78) {
    *(code **)(param_1 + 0x1ae0) = local_78;
    local_78 = (code *)0x0;
    plVar10 = *(longlong **)(param_1 + 0x1ae8);
    *(longlong **)(param_1 + 0x1ae8) = local_70;
    local_70 = (longlong *)0x0;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
    }
  }
  *(undefined4 *)(param_1 + 0x1af0) = (undefined4)local_68;
  *(undefined4 *)(param_1 + 0x1af4) = local_68._4_4_;
  *(undefined4 *)(param_1 + 0x1af8) = uStack_60;
  *(undefined4 *)(param_1 + 0x1afc) = uStack_5c;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_70 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
LAB_1414aa1c9:
  if ((local_48 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414aa2e0 FUN_1414aa2e0 body=461 status=ok
// SIG undefined FUN_1414aa2e0(void)

longlong FUN_1414aa2e0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_2;
  if (lVar2 == DAT_14cb8d438) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_88);
  }
  if ((lVar2 == DAT_14cbc2c68) || (lVar2 == DAT_14cbc2c70)) {
    if (0 < *(int *)(param_1 + 0x1e60)) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1e58) + 0x20);
      goto LAB_1414aa35e;
    }
  }
  else if ((lVar2 == DAT_14cbc2c78) && (1 < *(int *)(param_1 + 0x1e60))) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1e58) + 400);
LAB_1414aa35e:
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar2);
    }
    else if (lVar2 == 0) goto LAB_1414aa40f;
    if (((0 < *(int *)(lVar2 + 0xd10)) && (**(longlong **)(lVar2 + 0xd08) != 0)) &&
       (lVar2 = *(longlong *)(**(longlong **)(lVar2 + 0xd08) + 0x48), lVar2 != 0)) {
      if (DAT_14cb63950 == 0) {
        local_30 = &local_18;
        local_18 = FUN_144a7958c;
        local_20 = FUN_14081d0ea;
        local_28 = &LAB_1464ec72a;
        local_38 = &LAB_1486f5f75;
        local_40 = &LAB_140945686;
        local_48 = L"Engine";
        local_50 = 0;
        local_58 = 0x10000004;
        local_60 = 0x10;
        local_68 = 0x19d0;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
      }
      if (*(int *)(DAT_14cb63950 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) {
        lVar1 = 0;
        if (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) == DAT_14cb63950 + 0x30) {
          lVar1 = lVar2;
        }
        goto LAB_1414aa3cb;
      }
    }
  }
LAB_1414aa40f:
  lVar1 = 0;
LAB_1414aa3cb:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414aa4be FUN_1414aa4be body=55 status=ok
// SIG undefined FUN_1414aa4be(void)

void FUN_1414aa4be(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x48) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    lVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x40) + 8 + lVar2) == param_3) {
        uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + lVar2);
        break;
      }
      lVar2 = lVar2 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x48) * 0x10 != lVar2);
  }
  *param_2 = uVar1;
  return;
}



// FUNCTION 1414aa4f6 FUN_1414aa4f6 body=56 status=ok
// SIG undefined FUN_1414aa4f6(void)

wchar_t * FUN_1414aa4f6(wchar_t *param_1)

{
  wchar_t *pwVar1;
  
  if (param_1 == (wchar_t *)0x0) {
    param_1 = (wchar_t *)0x0;
  }
  else {
    pwVar1 = wcsrchr(param_1,L':');
    if ((pwVar1 != (wchar_t *)0x0) && (pwVar1[1] != L'\0')) {
      param_1 = pwVar1 + 1;
    }
  }
  return param_1;
}



// FUNCTION 1414aa52e FUN_1414aa52e body=126 status=ok
// SIG undefined FUN_1414aa52e(void)

longlong * FUN_1414aa52e(longlong *param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((*(longlong *)(*param_1 + 0x3c) != 0) && ((char)param_1[1] <= *(char *)(*param_1 + 0x38))) {
    plVar3 = (longlong *)FUN_14027bf48(param_1);
    iVar1 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
      FUN_140eed74c(plVar3,iVar1);
    }
    lVar2 = *plVar3;
    lVar4 = (longlong)iVar1 * 0x30;
    *(longlong *)(lVar2 + lVar4) = (longlong)*param_3;
    *(undefined1 *)(lVar2 + 0x20 + lVar4) = 2;
    *(undefined8 *)(lVar2 + 0x28 + lVar4) = *param_2;
  }
  return param_1;
}



// FUNCTION 1414aa5b0 FUN_1414aa5b0 body=5313 status=ok
// SIG undefined FUN_1414aa5b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1414aa5b0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  void *pvVar6;
  code *pcVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  double *pdVar16;
  longlong lVar17;
  undefined *puVar18;
  uint *puVar19;
  int iVar20;
  ulonglong uVar21;
  longlong **pplVar22;
  longlong **pplVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  uint uVar26;
  undefined7 uVar27;
  longlong lVar28;
  int iVar29;
  bool bVar30;
  code *pcVar31;
  code *pcVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double _X;
  undefined4 uVar49;
  double _X_00;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double _X_01;
  undefined1 auStack_438 [32];
  code **local_418;
  undefined1 local_410;
  undefined1 local_408;
  double local_3f8;
  undefined8 *local_3e0;
  longlong *local_3d8;
  undefined8 local_3d0;
  longlong local_3c8;
  int local_3c0;
  longlong local_3b8;
  int local_3b0;
  longlong *local_3a8;
  undefined8 uStack_3a0;
  longlong *local_398 [13];
  undefined2 local_330 [2];
  undefined4 local_32c;
  code *local_328;
  undefined8 uStack_320;
  code *local_318;
  undefined **ppuStack_310;
  undefined *local_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined8 uStack_2f0;
  longlong local_2e8;
  ulonglong uStack_2e0;
  undefined4 local_2d8;
  undefined8 local_2d4;
  undefined4 local_2cc;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined4 local_2a0;
  undefined2 local_29c;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  void *pvStack_270;
  undefined8 local_268;
  undefined **local_260;
  undefined *local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_224;
  undefined4 local_21c;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined4 local_1f0;
  undefined2 local_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  void *pvStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1a8 [12];
  undefined8 local_148;
  longlong **pplStack_140;
  ulonglong local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  ulonglong local_108;
  ulonglong uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_438;
  lVar10 = param_1[0x2e2];
  if (((lVar10 == 0) ||
      (lVar10 = (**(code **)(*(longlong *)(lVar10 + 0x3c20) + 0x18))(lVar10 + 0x3c20), lVar10 == 0))
     || (param_1[0x2e2] == 0)) goto LAB_1414aa667;
  FUN_1412d65f2(lVar10,param_1);
  FUN_145897c1a(lVar10,1);
  lVar10 = (**(code **)(param_1[0x9d] + 0x58))(param_1 + 0x9d,&DAT_14cb8d438);
  if (lVar10 != 0) {
    local_308 = (undefined *)0x0;
    uStack_300 = 0;
    local_328 = (code *)0x0;
    uStack_320 = (code *)0x0;
    uStack_2fc = 0x80;
    uStack_2f8 = 0xffffffff;
    uStack_2f4 = 0;
    local_2e8 = 0;
    uStack_2e0 = uStack_2e0 & 0xffffffff00000000;
    if (param_1[0x2e2] == 0) {
      local_148._0_4_ = 0;
      iVar9 = 0;
      uVar26 = (uint)local_148;
    }
    else {
      uVar26 = *(uint *)(param_1[0x2e2] + 0xc);
      local_148 = (code *)(ulonglong)uVar26;
      if ((int)uVar26 < DAT_14c9647dc) {
        lVar28 = (ulonglong)((uVar26 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8);
      }
      else {
        lVar28 = 0;
      }
      iVar9 = *(int *)(lVar28 + 0x10);
      if (*(int *)(lVar28 + 0x10) == 0) {
        LOCK();
        iVar9 = DAT_14c964868 + 1;
        UNLOCK();
        iVar20 = DAT_14c964868 + 1;
        bVar30 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar9;
        if (bVar30) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar20);
        }
        LOCK();
        iVar9 = *(int *)(lVar28 + 0x10);
        bVar30 = iVar9 == 0;
        if (bVar30) {
          *(int *)(lVar28 + 0x10) = iVar20;
          iVar9 = 0;
        }
        UNLOCK();
        uVar26 = (uint)local_148;
        if (bVar30) {
          iVar9 = iVar20;
        }
      }
    }
    local_148._0_4_ = uVar26;
    local_398[1] = &local_148;
    local_148 = (code *)CONCAT44(iVar9,(uint)local_148);
    local_398[0] = &DAT_14c9a63f0;
    param_4 = 0;
    FUN_1406c57ae(&local_328,&local_3a8,local_398,0);
    FUN_140535930(lVar10 + 0x12b8,&local_328);
    FUN_1406c6e60(lVar10 + 0x1288);
    if (*(char *)(lVar10 + 0x1330) == '\x01') {
      FUN_1405ea3a2(lVar10 + 0x1288,lVar10 + 0x1358,0);
      *(undefined2 *)(lVar10 + 0x1330) = 0x100;
    }
    uStack_2e0 = uStack_2e0 & 0xffffffff00000000;
    if (local_2e8 != 0) {
      FUN_1400020a8();
    }
    FUN_140535736(&local_328);
  }
  lVar10 = param_1[0x341];
  param_1[0x3c6] = 0;
  plVar14 = (longlong *)param_1[0x3c7];
  if (plVar14 != (longlong *)0x0) {
    param_1[0x3c7] = 0;
    LOCK();
    plVar1 = plVar14 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  param_1[0x3c8] = 0;
  plVar14 = (longlong *)param_1[0x3c9];
  if (plVar14 != (longlong *)0x0) {
    param_1[0x3c9] = 0;
    LOCK();
    plVar1 = plVar14 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if (lVar10 == 0) {
    lVar28 = param_1[0x2e2];
    lVar17 = *(longlong *)(lVar28 + 0x1c8);
    puVar13 = &DAT_14c846480;
    if (lVar17 != 0) {
      puVar13 = (undefined8 *)(lVar17 + 0x240);
    }
    pplVar23 = local_398;
    for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
      *pplVar23 = (longlong *)*puVar13;
      puVar13 = puVar13 + 1;
      pplVar23 = pplVar23 + 1;
    }
    uVar24 = 0;
    FUN_1405e47c6(lVar28,0);
    uVar21 = 0;
  }
  else {
    lVar28 = FUN_140963a30(lVar10 + 0x1b0);
    if (lVar28 != 0) {
      uVar11 = (**(code **)(*(longlong *)(param_1[0x2e2] + 0x10e0) + 0x50))(param_1[0x2e2] + 0x10e0)
      ;
      local_308 = (undefined *)0x0;
      uStack_300 = 0;
      uStack_2f4 = 0;
      uStack_2f0 = 0;
      local_2e8 = 0;
      uStack_2e0 = 0;
      local_318 = (code *)0x0;
      ppuStack_310 = (undefined **)0x0;
      local_328 = (code *)0x0;
      uStack_320 = (code *)0x0;
      uStack_2fc = 0x80;
      uStack_2f8 = 0xffffffff;
      uVar12 = FUN_140963a30(lVar10 + 0x1b0);
      local_410 = 1;
      param_4 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
      local_418 = &local_328;
      FUN_14096dfee(uVar11,local_398,uVar12,param_4);
      plVar1 = local_398[1];
      param_1[0x3c6] = (longlong)local_398[0];
      local_398[0] = (longlong *)0x0;
      plVar14 = (longlong *)param_1[0x3c7];
      if (local_398[1] == plVar14) {
LAB_1414aa9e8:
        plVar14 = local_398[1];
        if (local_398[1] != (longlong *)0x0) {
          LOCK();
          plVar1 = local_398[1] + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_398[1])(local_398[1]);
            LOCK();
            piVar2 = (int *)((longlong)plVar14 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
        }
      }
      else {
        local_398[1] = (longlong *)0x0;
        param_1[0x3c7] = (longlong)plVar1;
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar14 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar2 = (int *)((longlong)plVar14 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
          goto LAB_1414aa9e8;
        }
      }
      uStack_2e0 = uStack_2e0 & 0xffffffff00000000;
      if (local_2e8 != 0) {
        FUN_1400020a8();
      }
      FUN_140333f4e(&local_328);
    }
    lVar28 = param_1[0x2e2];
    lVar17 = *(longlong *)(lVar28 + 0x1c8);
    puVar13 = &DAT_14c846480;
    if (lVar17 != 0) {
      puVar13 = (undefined8 *)(lVar17 + 0x240);
    }
    pplVar23 = local_398;
    for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
      *pplVar23 = (longlong *)*puVar13;
      puVar13 = puVar13 + 1;
      pplVar23 = pplVar23 + 1;
    }
    FUN_1405e47c6(lVar28,0);
    uVar24 = *(ulonglong *)(lVar10 + 0x178);
    uVar21 = uVar24 & 0xffffffff00000000;
  }
  lVar28 = param_1[0x2e2];
  uVar27 = (undefined7)((ulonglong)param_4 >> 8);
  pcVar31 = DAT_14c846520;
  pcVar32 = DAT_14c846510;
  pcVar7 = DAT_14c846518;
  if (param_1[0x341] != 0 && param_1[0x340] != 0) {
    pcVar31 = (code *)(double)(*(float *)(param_1[0x341] + 0x1a0) *
                              *(float *)(param_1[0x340] + 0x1110));
    pcVar32 = pcVar31;
    pcVar7 = pcVar31;
  }
  if (*(longlong *)(lVar28 + 0x1c8) != 0) {
    local_328 = pcVar32;
    uStack_320 = pcVar7;
    local_318 = pcVar31;
    FUN_141226a1c(*(longlong *)(lVar28 + 0x1c8));
    lVar28 = param_1[0x2e2];
  }
  local_408 = 0;
  local_410 = 1;
  local_418 = (code **)CONCAT71(local_418._1_7_,2);
  FUN_1459bb9a8(lVar28,param_1,uVar21 | uVar24 & 0xffffffff,CONCAT71(uVar27,2));
  lVar15 = param_1[0x2e2];
  lVar28 = *(longlong *)(lVar15 + 0x1c8);
  lVar17 = *(longlong *)(lVar15 + 0x32b8);
  if (lVar17 != 0 && lVar28 != 0) {
    uVar24 = *(ulonglong *)(lVar17 + 0x198);
    uVar21 = *(ulonglong *)(lVar17 + 0x1a0);
    uVar4 = *(ulonglong *)(lVar17 + 0x1a8);
    auVar37 = *(undefined1 (*) [16])(lVar28 + 0x1b0);
    dVar34 = auVar37._0_8_;
    dVar46 = auVar37._8_8_;
    dVar33 = *(double *)(lVar28 + 0x1c0);
    pdVar16 = *(double **)(lVar28 + 0x230);
    if (pdVar16 == (double *)0x0) {
      pdVar16 = (double *)FUN_14001cc68(0x40,0x10);
      dVar35 = DAT_14c8463d8;
      *pdVar16 = DAT_14c8463d0;
      pdVar16[1] = dVar35;
      dVar35 = DAT_14c8463e8;
      pdVar16[2] = DAT_14c8463e0;
      pdVar16[3] = dVar35;
      dVar35 = DAT_14c846500;
      pdVar16[4] = DAT_14c8464f8;
      pdVar16[5] = dVar35;
      pdVar16[6] = DAT_14c846508;
      *(double **)(lVar28 + 0x230) = pdVar16;
    }
    auVar41 = _DAT_1499387d0;
    if (((pdVar16[4] != dVar34) || (NAN(pdVar16[4]) || NAN(dVar34))) ||
       ((pdVar16[5] != dVar46 || (NAN(pdVar16[5]) || NAN(dVar46))))) {
LAB_1414aac25:
      auVar43._8_8_ = 0;
      auVar43._0_8_ = dVar33;
      dVar35 = (double)DAT_1499387d0;
      dVar36 = DAT_1499387d0._8_8_;
      auVar37 = divpd(auVar37,_DAT_1499387d0);
      auVar40 = divpd(auVar43,_DAT_1499387d0);
      auVar37 = roundpd(auVar37,auVar37,3);
      auVar40 = roundpd(auVar40,auVar40,3);
      auVar50._0_8_ = dVar34 - auVar37._0_8_ * dVar35;
      auVar50._8_8_ = dVar46 - auVar37._8_8_ * dVar36;
      auVar44._0_8_ = dVar33 - auVar40._0_8_ * dVar35;
      auVar44._8_8_ = 0.0 - auVar40._8_8_ * dVar36;
      auVar47._0_8_ = auVar50._0_8_ + dVar35;
      auVar47._8_8_ = auVar50._8_8_ + dVar36;
      auVar42._0_8_ = auVar44._0_8_ + dVar35;
      auVar42._8_8_ = auVar44._8_8_ + dVar36;
      auVar40._8_8_ = -(ulonglong)(0.0 <= auVar50._8_8_);
      auVar40._0_8_ = -(ulonglong)(0.0 <= auVar50._0_8_);
      auVar37 = blendvpd(auVar47,auVar50,auVar40);
      auVar48._8_8_ = -(ulonglong)(0.0 <= auVar44._8_8_);
      auVar48._0_8_ = -(ulonglong)(0.0 <= auVar44._0_8_);
      auVar40 = blendvpd(auVar42,auVar44,auVar48);
      auVar45._0_8_ = auVar37._0_8_ + -360.0;
      auVar45._8_8_ = auVar37._8_8_ + -360.0;
      auVar38._8_8_ = -(ulonglong)(180.0 < auVar37._8_8_);
      auVar38._0_8_ = -(ulonglong)(180.0 < auVar37._0_8_);
      auVar48 = blendvpd(auVar37,auVar45,auVar38);
      auVar39._8_8_ = -(ulonglong)(180.0 < auVar40._8_8_);
      auVar39._0_8_ = -(ulonglong)(180.0 < auVar40._0_8_);
      auVar37._8_8_ = auVar40._8_8_ + 0.0;
      auVar37._0_8_ = auVar40._0_8_ + -360.0;
      auVar37 = blendvpd(auVar40,auVar37,auVar39);
      *(undefined1 (*) [16])(pdVar16 + 4) = auVar48;
      dVar33 = auVar37._0_8_;
      pdVar16[6] = dVar33;
      auVar51._8_8_ = 0;
      auVar51._0_8_ = dVar33;
      auVar37 = divpd(auVar48,auVar41);
      auVar41 = divpd(auVar51,auVar41);
      auVar37 = roundpd(auVar37,auVar37,3);
      auVar41 = roundpd(auVar41,auVar41,3);
      dVar46 = (auVar48._0_8_ - auVar37._0_8_ * dVar35) * 0.008726646259971648;
      _X = (auVar48._8_8_ - auVar37._8_8_ * dVar36) * 0.008726646259971648;
      _X_00 = (dVar33 - auVar41._0_8_ * dVar35) * 0.008726646259971648;
      _X_01 = (0.0 - auVar41._8_8_ * dVar36) * 0.008726646259971648;
      local_3f8 = sin(dVar46);
      dVar33 = sin(_X);
      dVar34 = sin(_X_00);
      sin(_X_01);
      dVar46 = cos(dVar46);
      dVar35 = cos(_X);
      dVar36 = cos(_X_00);
      cos(_X_01);
      *pdVar16 = local_3f8 * dVar33 * dVar36 - dVar46 * dVar35 * dVar34;
      pdVar16[1] = -(local_3f8 * dVar35 * dVar36) - dVar46 * dVar33 * dVar34;
      pdVar16[2] = -(dVar35 * local_3f8 * dVar34) + dVar33 * dVar46 * dVar36;
      pdVar16[3] = dVar33 * local_3f8 * dVar34 + dVar35 * dVar46 * dVar36;
    }
    else if ((pdVar16[6] != dVar33) || (NAN(pdVar16[6]) || NAN(dVar33))) goto LAB_1414aac25;
    local_328 = (code *)*pdVar16;
    uStack_320 = (code *)pdVar16[1];
    local_318 = (code *)pdVar16[2];
    ppuStack_310 = (undefined **)pdVar16[3];
    local_148 = (code *)(uVar24 ^ 0x8000000000000000);
    pplStack_140 = (longlong **)(uVar21 ^ 0x8000000000000000);
    local_138 = uVar4 ^ 0x8000000000000000;
    local_410 = 0;
    local_418 = (code **)0x0;
    FUN_144927ad4(lVar28,&local_148,&local_328,0);
    param_1[0x382] = uVar24 ^ 0x8000000000000000;
    param_1[899] = uVar21 ^ 0x8000000000000000;
    param_1[900] = uVar4 ^ 0x8000000000000000;
    *(undefined1 *)(param_1 + 0x385) = 1;
    FUN_1406c6e60(lVar17 + 0x1288);
    lVar15 = param_1[0x2e2];
  }
  dVar33 = *(double *)(&DAT_00006850 + lVar15);
  if (((dVar33 != 0.0) && (param_1[0x85] != 0)) &&
     (plVar14 = (longlong *)param_1[0x3c6], plVar14 != (longlong *)0x0 && lVar10 != 0)) {
    local_3a8 = (longlong *)0x0;
    uStack_3a0 = 0;
    (**(code **)(*plVar14 + 8))(plVar14,&local_3a8,&DAT_14cb8d438);
    if (((int)uStack_3a0 < 1) || (pcVar31 = (code *)*local_3a8, pcVar31 == (code *)0x0)) {
LAB_1414aaf21:
      pcVar31 = (code *)0x0;
    }
    else {
      lVar28 = FUN_1402576f0();
      if ((*(int *)(*(longlong *)(pcVar31 + 0x10) + 0x38) < *(int *)(lVar28 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(pcVar31 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar28 + 0x38) * 8) != lVar28 + 0x30)) goto LAB_1414aaf21;
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(pcVar31);
      }
    }
    FUN_14129e194(&local_3b8,&local_3a8,0);
    FUN_14129e194(&local_3c8,&local_3a8,1);
    uVar49 = 0;
    if (0 < (longlong)local_3b0) {
      uVar49 = *(undefined4 *)(local_3b8 + -4 + (longlong)local_3b0 * 4);
    }
    if ((longlong)local_3c0 < 1) {
      uVar3 = *(undefined4 *)(lVar10 + 0x22c);
    }
    else {
      uVar3 = *(undefined4 *)(local_3c8 + -4 + (longlong)local_3c0 * 4);
    }
    if ((char)param_1[0x2f] == '\x03') {
      lVar28 = 0xc;
      pplVar22 = local_398;
      pplVar23 = (longlong **)(param_1 + 0x2ea);
    }
    else {
      pplVar23 = local_398;
      lVar28 = 0xc;
      pplVar22 = (longlong **)(param_1 + 0x2ea);
    }
    for (; lVar28 != 0; lVar28 = lVar28 + -1) {
      *pplVar23 = *pplVar22;
      pplVar22 = pplVar22 + 1;
      pplVar23 = pplVar23 + 1;
    }
    local_328 = (code *)0x0;
    uStack_320 = (code *)0xbf800000bf800000;
    local_318 = (code *)((ulonglong)local_318 & 0xffffffffffffff00);
    ppuStack_310 = &PTR_FUN_14b00bdf8;
    uStack_2e0 = 0;
    local_2d8 = 0;
    uStack_300 = 0;
    uStack_2fc = 0;
    uStack_2f8 = 0;
    uStack_2f4 = 0;
    local_2d4 = 0xffffffff00000080;
    local_2cc = 0;
    local_2c0 = 0;
    local_2b8 = 0;
    local_2b0 = 0;
    uStack_2a8 = 0;
    local_2a0 = 0x7f7fffff;
    local_29c = 0x404;
    local_308 = &DAT_14a176f00;
    local_298 = 0;
    uStack_290 = 0;
    local_288 = 0;
    uStack_280 = 0;
    local_278 = 0;
    pvStack_270 = (void *)0x0;
    local_268 = 0;
    local_260 = &PTR_FUN_14b00bdf8;
    local_230 = 0;
    local_228 = 0;
    local_250 = 0;
    uStack_248 = 0;
    local_224 = 0xffffffff00000080;
    local_21c = 0;
    local_210 = 0;
    local_208 = 0;
    local_200 = 0;
    uStack_1f8 = 0;
    local_1f0 = 0x7f7fffff;
    local_1ec = 0x404;
    local_258 = &DAT_14a176f00;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    pvStack_1c0 = (void *)0x0;
    local_1b8 = 0;
    puVar13 = &DAT_14c846480;
    puVar25 = local_1a8;
    for (lVar28 = 0xc; lVar28 != 0; lVar28 = lVar28 + -1) {
      *puVar25 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar25 = puVar25 + 1;
    }
    local_3f8 = dVar33;
    if ((pcVar31 != (code *)0x0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(pcVar31);
    }
    uStack_320 = (code *)CONCAT44(uVar49,uVar3);
    local_29c = *(undefined2 *)(lVar10 + 0x2a4);
    local_2a0 = *(undefined4 *)(lVar10 + 0x2a0);
    local_328 = pcVar31;
    FUN_14093c00e(&local_298,lVar10 + 0x2a8);
    local_288 = *(undefined8 *)(lVar10 + 0x2b8);
    uStack_280 = *(undefined8 *)(lVar10 + 0x2c0);
    local_278 = *(undefined8 *)(lVar10 + 0x2c8);
    if (&pvStack_270 != (void **)(lVar10 + 0x2d0)) {
      uVar26 = *(uint *)(lVar10 + 0x2d8);
      pvVar6 = *(void **)(lVar10 + 0x2d0);
      local_268 = CONCAT44(local_268._4_4_,uVar26);
      if (uVar26 == 0 && local_268._4_4_ == 0) {
        local_268 = (ulonglong)uVar26;
      }
      else {
        FUN_1446dd670(&pvStack_270,uVar26);
        if (uVar26 != 0) {
          memcpy(pvStack_270,pvVar6,(longlong)(int)uVar26 * 2);
        }
      }
    }
    local_1ec = *(undefined2 *)(lVar10 + 0x354);
    local_1f0 = *(undefined4 *)(lVar10 + 0x350);
    FUN_14093c00e(&local_1e8,lVar10 + 0x358);
    dVar33 = local_3f8;
    local_1d8 = *(undefined8 *)(lVar10 + 0x368);
    uStack_1d0 = *(undefined8 *)(lVar10 + 0x370);
    local_1c8 = *(undefined8 *)(lVar10 + 0x378);
    if (&pvStack_1c0 != (void **)(lVar10 + 0x380)) {
      uVar26 = *(uint *)(lVar10 + 0x388);
      pvVar6 = *(void **)(lVar10 + 0x380);
      local_1b8 = CONCAT44(local_1b8._4_4_,uVar26);
      if (uVar26 == 0 && local_1b8._4_4_ == 0) {
        local_1b8 = (ulonglong)uVar26;
      }
      else {
        FUN_1446dd670(&pvStack_1c0,uVar26);
        if (uVar26 != 0) {
          memcpy(pvStack_1c0,pvVar6,(longlong)(int)uVar26 * 2);
        }
      }
    }
    pplVar23 = local_398;
    puVar13 = local_1a8;
    for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
      *puVar13 = *pplVar23;
      pplVar23 = pplVar23 + 1;
      puVar13 = puVar13 + 1;
    }
    FUN_143cdf59a(dVar33,&local_328);
    lVar28 = FUN_1447210f0(param_1);
    lVar10 = param_1[0x340];
    if ((lVar28 != 0) && (*(char *)(lVar10 + 0x1114) == '\x01')) {
      local_3d0 = 0;
      lVar10 = param_1[0x2e2];
      if ((lVar10 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar10);
LAB_1414ab2fe:
        uVar26 = *(uint *)(lVar10 + 0xc);
        if ((int)uVar26 < DAT_14c9647dc) {
          lVar10 = (ulonglong)((uVar26 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        iVar9 = *(int *)(lVar10 + 0x10);
        if (*(int *)(lVar10 + 0x10) == 0) {
          LOCK();
          iVar9 = DAT_14c964868 + 1;
          UNLOCK();
          iVar20 = DAT_14c964868 + 1;
          bVar30 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar9;
          if (bVar30) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar20);
          }
          LOCK();
          iVar9 = *(int *)(lVar10 + 0x10);
          bVar30 = iVar9 == 0;
          if (bVar30) {
            *(int *)(lVar10 + 0x10) = iVar20;
            iVar9 = 0;
          }
          UNLOCK();
          if (bVar30) {
            iVar9 = iVar20;
          }
        }
      }
      else {
        if (lVar10 != 0) goto LAB_1414ab2fe;
        uVar26 = 0;
        iVar9 = 0;
      }
      if (*(longlong *)(lVar28 + 0x1f0) == 0) {
        puVar13 = (undefined8 *)(lVar28 + 0x458);
      }
      else {
        puVar13 = (undefined8 *)(*(longlong *)(lVar28 + 0x1f0) + 0xf0);
      }
      uVar11 = *puVar13;
      if (iVar9 == 0) {
LAB_1414ab940:
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        if ((-1 < (int)uVar26) && ((int)uVar26 < DAT_14c9647dc)) {
          plVar14 = (longlong *)
                    ((ulonglong)((uVar26 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8));
          if ((plVar14 == (longlong *)0x0) ||
             (((int)plVar14[2] != iVar9 || ((*(uint *)(plVar14 + 1) & 0x10200000) != 0))))
          goto LAB_1414ab940;
          lVar10 = *plVar14;
        }
      }
      local_3e0 = (undefined8 *)0x0;
      local_3d8 = (longlong *)((ulonglong)local_3d8 & 0xffffffff00000000);
      FUN_1446efa72(&local_3e0,0,3,0x10);
      puVar13 = local_3e0;
      local_3d8 = (longlong *)CONCAT44(local_3d8._4_4_,3);
      *local_3e0 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar17 = DAT_14c758608 + 1;
      lVar28 = DAT_14c758608 + 1;
      if (lVar17 == 0) {
        LOCK();
        UNLOCK();
        lVar17 = DAT_14c758608 + 2;
        lVar28 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar28;
      local_3e0[2] = lVar17;
      *local_3e0 = &PTR_FUN_14b95f660;
      local_3e0[3] = 0;
      iVar20 = 0;
      if (lVar10 != 0) {
        uVar5 = *(uint *)(lVar10 + 0xc);
        *(uint *)(local_3e0 + 3) = uVar5;
        if ((int)uVar5 < DAT_14c9647dc) {
          lVar10 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        iVar20 = *(int *)(lVar10 + 0x10);
        if (*(int *)(lVar10 + 0x10) == 0) {
          LOCK();
          iVar20 = DAT_14c964868 + 1;
          UNLOCK();
          iVar29 = DAT_14c964868 + 1;
          bVar30 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar20;
          if (bVar30) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar29);
          }
          LOCK();
          iVar20 = *(int *)(lVar10 + 0x10);
          bVar30 = iVar20 == 0;
          if (bVar30) {
            *(int *)(lVar10 + 0x10) = iVar29;
            iVar20 = 0;
          }
          UNLOCK();
          if (bVar30) {
            iVar20 = iVar29;
          }
        }
      }
      *(int *)((longlong)puVar13 + 0x1c) = iVar20;
      puVar13[4] = CONCAT44(iVar9,uVar26);
      local_148 = (code *)0x0;
      pplStack_140 = (longlong **)((ulonglong)pplStack_140 & 0xffffffff00000000);
      FUN_14487d8d8(&local_148,&local_3e0);
      local_108 = CONCAT71(local_108._1_7_,1);
      local_418 = (code **)local_330;
      local_330[0] = 0;
      local_32c = 0xbf800000;
      FUN_1406f4044(uVar11,&local_3d0,&local_148,uVar3);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_108 & 0xff])(&local_148);
      dVar33 = local_3f8;
      if ((int)local_3d8 == 0) {
LAB_1414ab50d:
        if (local_3e0 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_3e0 != (undefined8 *)0x0) {
        (**(code **)*local_3e0)(local_3e0,0);
        FUN_1446efa72(&local_3e0,0,0,0x10);
        local_3d8 = (longlong *)((ulonglong)local_3d8 & 0xffffffff00000000);
        goto LAB_1414ab50d;
      }
      lVar10 = param_1[0x340];
    }
    lVar10 = FUN_140963a30(lVar10 + 0x10c0);
    if (lVar10 != 0) {
      uVar11 = (**(code **)(*(longlong *)(param_1[0x2e2] + 0x10e0) + 0x50))(param_1[0x2e2] + 0x10e0)
      ;
      local_128 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_148 = (code *)0x0;
      pplStack_140 = (longlong **)0x0;
      uStack_120 = 0x8000000000;
      local_118 = 0xffffffff;
      uVar12 = FUN_140963a30(param_1[0x340] + 0x10c0);
      local_410 = 1;
      local_418 = (code **)&local_148;
      FUN_14096dfee(uVar11,&local_3e0,uVar12,1);
      plVar1 = local_3d8;
      param_1[0x3c8] = (longlong)local_3e0;
      local_3e0 = (undefined8 *)0x0;
      plVar14 = (longlong *)param_1[0x3c9];
      if (local_3d8 == plVar14) {
LAB_1414ab627:
        plVar14 = local_3d8;
        if (local_3d8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_3d8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_3d8)(local_3d8);
            LOCK();
            piVar2 = (int *)((longlong)plVar14 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
        }
      }
      else {
        local_3d8 = (longlong *)0x0;
        param_1[0x3c9] = (longlong)plVar1;
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar14 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar2 = (int *)((longlong)plVar14 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
          goto LAB_1414ab627;
        }
      }
      uStack_100 = uStack_100 & 0xffffffff00000000;
      if (local_108 != 0) {
        FUN_1400020a8();
      }
      FUN_140333f4e(&local_148);
    }
    FUN_14051f4c4(&local_260);
    FUN_14051f4c4(&ppuStack_310);
    if (local_3c8 != 0) {
      FUN_1400020a8();
    }
    if (local_3b8 != 0) {
      FUN_1400020a8();
    }
    if (local_3a8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    lVar15 = param_1[0x2e2];
  }
  local_328 = *(code **)(lVar15 + 0x8b8);
  local_318 = *(code **)(lVar15 + 0x8c8);
  uStack_320 = (code *)CONCAT62(uStack_320._2_6_,*(undefined2 *)(lVar15 + 0x8c0));
  FUN_140365c30(param_1 + 0x2a3);
  lVar10 = param_1[0x340];
  if (lVar10 != 0) {
    FUN_140355bf0(param_1 + 0x2a3,*(undefined1 *)(lVar10 + 0x1728),*(undefined1 *)(lVar10 + 0x1729))
    ;
    *(undefined1 *)((longlong)param_1 + 0x156a) = *(undefined1 *)(param_1[0x340] + 0x172a);
  }
  lVar10 = param_1[0x2e2];
  if (lVar10 == 0) {
    lVar10 = 0;
  }
  else {
    uVar11 = (**(code **)(*(longlong *)(lVar10 + 0x860) + 0x10))(lVar10 + 0x860);
    FUN_145d5f140(uVar11,param_1);
    lVar10 = param_1[0x2e2];
  }
  lVar10 = (**(code **)(*(longlong *)(lVar10 + 0x860) + 0x10))(lVar10 + 0x860);
  if (*(char *)(lVar10 + 0x18) == '\0') {
    FUN_1403663e2(lVar10);
  }
  FUN_1400bc96c(lVar10 + 0x18,&DAT_14cbc2c50);
  FUN_1400bc96c(lVar10 + 0x40,&DAT_14cbc2c50);
  pcVar31 = (code *)param_1[0x2b7];
  if (pcVar31 != (code *)0x0) {
    local_3a8 = (longlong *)param_1[0x2e2];
    pplStack_140 = &local_3a8;
    uStack_320 = (code *)&local_148;
    local_328 = FUN_1440d8074;
    local_148 = pcVar31;
    (**(code **)(*(longlong *)pcVar31 + 0x40))();
  }
  FUN_1459db89c(param_1,1);
  iVar9 = (**(code **)(*param_1 + 0x700))(param_1);
  FUN_14056a50a(param_1,iVar9 + 1);
  if ((dVar33 != 0.0) && (cVar8 = (**(code **)(*param_1 + 0x700))(), cVar8 != '\0')) {
    *(undefined1 *)((longlong)dVar33 + 0x422c) = 0;
    uVar24 = *(ulonglong *)((longlong)dVar33 + 0x38);
    if (uVar24 < 0xffffffff00000000) {
      plVar14 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar14 = (longlong *)0x0;
      }
      (**(code **)(*plVar14 + 0x58))(plVar14,dVar33,uVar24,0x11);
    }
    else {
      uVar26 = (uint)uVar24;
      if ((-1 < (int)uVar26) && ((int)uVar26 < DAT_14c998088)) {
        puVar18 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar18 = DAT_14c998080;
        }
        if ((*(uint *)(puVar18 + ((uint)(uVar24 >> 3) & 0xffffffc)) >> (uVar26 & 0x1f) & 1) != 0) {
          lVar10 = DAT_14c998060 + (ulonglong)(uVar26 & 0x7fffffff) * 0x68;
          puVar19 = *(uint **)(lVar10 + 0x18);
          if (*(uint **)(lVar10 + 0x18) == (uint *)0x0) {
            puVar19 = (uint *)(lVar10 + 8);
          }
          *puVar19 = *puVar19 | 0x20000;
          *(byte *)(lVar10 + 0x60) = *(byte *)(lVar10 + 0x60) | 1;
        }
      }
    }
  }
LAB_1414aa667:
  if ((local_f0 ^ (ulonglong)auStack_438) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414aba72 FUN_1414aba72 body=94 status=ok
// SIG undefined FUN_1414aba72(void)

void FUN_1414aba72(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b726930;
  param_1[6] = &PTR_FUN_14b726c68;
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x2b],*(undefined4 *)(param_1 + 0x2c));
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_1415d7218(param_1);
  return;
}



// FUNCTION 1414abad0 FUN_1414abad0 body=125 status=ok
// SIG undefined FUN_1414abad0(void)

void FUN_1414abad0(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar3 = FUN_14490d72a();
    if (iVar3 != 3) {
      lVar1 = FUN_14103c0a0(param_1);
      if (param_2 != 0) {
        lVar2 = FUN_14583c61c(param_2 + 0x40);
        if (lVar2 != 0 && lVar1 != 0) {
          FUN_140aecf5a(lVar2);
          FUN_1411ac4f8(lVar1,lVar2,param_3,param_4,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 1414abb4e FUN_1414abb4e body=515 status=ok
// SIG undefined FUN_1414abb4e(void)

void FUN_1414abb4e(void)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined4 *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caf6000 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14caf6000,0,0,4);
  }
  uVar7 = DAT_14caf6008;
  uVar2 = local_50;
  if (DAT_14caf6008 != 0) {
    uVar6 = 0;
    FUN_144a1cbf0(&DAT_14caf5ff8,0,DAT_14caf6008,4);
    if (0 < (int)uVar7) {
      do {
        puVar5 = DAT_14caf6000;
        if (DAT_14caf6000 == (undefined *)0x0) {
          puVar5 = &DAT_14caf5ff8;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14caf6008 + 0x7fffffff & uVar6) * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14caf5fd0;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14caf5fe8 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14caf5fc0;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < (int)local_38[6]) {
      iVar3 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar4 = (longlong)iVar3;
        uVar9 = *(ulonglong *)(lVar1 + lVar4 * 0x18);
        uVar7 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar9 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)(int)DAT_14caf6008 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar4 * 0x18) = iVar8;
        puVar5 = DAT_14caf6000;
        if (DAT_14caf6000 == (undefined *)0x0) {
          puVar5 = &DAT_14caf5ff8;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar4 * 0x18) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14caf6008 - 1U & uVar9) * 4);
        puVar5 = DAT_14caf6000;
        if (DAT_14caf6000 == (undefined *)0x0) {
          puVar5 = &DAT_14caf5ff8;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14caf6008 - 1U) * 4) = iVar3;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar3 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < (int)local_58[6]);
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414abd52 FUN_1414abd52 body=130 status=ok
// SIG undefined FUN_1414abd52(void)

undefined4
FUN_1414abd52(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_38 = *param_2;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_38 = uVar2;
    local_30 = uVar1;
    lVar4 = FUN_145c2e270(param_1,lVar4,param_3);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414abdd6 FUN_1414abdd6 body=164 status=ok
// SIG undefined FUN_1414abdd6(void)

undefined4
FUN_1414abdd6(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = (undefined4)param_5[1];
  lVar2 = *param_5;
  local_48 = *param_2;
  lVar1 = FUN_14063edce(&DAT_14cb91658,&local_48);
  uVar3 = 0;
  if (lVar1 != 0) {
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    local_58 = &local_48;
    local_48 = lVar2;
    local_40 = uVar4;
    lVar2 = FUN_145c8ff7c(param_1,lVar1,param_3,param_4);
    uVar3 = *(undefined4 *)(lVar2 + 8);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414abe7c FUN_1414abe7c body=1109 status=ok
// SIG undefined FUN_1414abe7c(void)

void FUN_1414abe7c(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined1 auStack_c8 [44];
  int local_9c;
  int local_98;
  uint local_94;
  ulonglong local_90;
  ulonglong local_88;
  longlong local_80;
  longlong local_78;
  uint *local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_80 = param_1 + 0xa8;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_80;
  if (*(int *)(param_1 + 0xc0) == 0) {
    uVar20 = 1;
    local_58._0_4_ = 0xffffffff;
    iVar18 = 0;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar20 = local_68 >> 0x20;
    iVar18 = *(int *)(param_1 + 0xc0);
  }
  lVar2 = local_60;
  iVar6 = (int)local_68;
  uVar19 = (uint)local_58;
  iVar5 = local_58._4_4_;
  iVar13 = local_50;
  iVar8 = iVar18;
  lVar17 = param_1;
  if (local_58._4_4_ != iVar18 || local_60 != local_80) {
    do {
      local_78 = lVar17;
      local_9c = iVar8;
      lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x10 + (longlong)iVar5 * 0x28);
      uVar10 = *(uint *)(lVar17 + 0x50);
      uVar11 = 1;
      iVar5 = 0;
      uVar12 = 0;
      uVar7 = 0;
      if (uVar10 != 0) {
        puVar4 = *(uint **)(lVar17 + 0x48);
        if (*(uint **)(lVar17 + 0x48) == (uint *)0x0) {
          puVar4 = (uint *)(lVar17 + 0x38);
        }
        uVar7 = *puVar4;
        if (uVar7 == 0) {
          iVar5 = uVar10 + 0x1e;
          if (-1 < (int)(uVar10 - 1)) {
            iVar5 = uVar10 - 1;
          }
          uVar12 = 0;
          uVar11 = (ulonglong)(uint)(iVar5 >> 5);
          if (iVar5 >> 5 < 1) {
            uVar11 = uVar12;
          }
          iVar5 = 0;
          do {
            if (uVar11 == uVar12) goto LAB_1414abf70;
            iVar5 = iVar5 + 0x20;
            uVar7 = puVar4[uVar12 + 1];
            uVar12 = uVar12 + 1;
          } while (uVar7 == 0);
        }
        else {
          local_90 = 0;
          uVar12 = local_90;
        }
        local_90 = uVar12;
        uVar11 = (ulonglong)(-uVar7 & uVar7);
        uVar12 = uVar11 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar7 = (iVar5 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        uVar12 = local_90;
        if ((int)uVar10 <= (int)uVar7) {
          uVar7 = uVar10;
        }
      }
      if (uVar7 != uVar10) {
        local_94 = 0xffffffff;
        uVar3 = (ulonglong)uVar10;
        local_90 = uVar12;
        local_98 = iVar5;
        local_70 = (uint *)(lVar17 + 0x38);
        do {
          iVar5 = *(int *)(*(longlong *)(lVar17 + 0x28) + 0x34 + (longlong)(int)uVar7 * 0x58);
          if ((((iVar5 != 0) &&
               (uVar7 = *(uint *)(*(longlong *)(lVar17 + 0x28) + 0x30 + (longlong)(int)uVar7 * 0x58)
               , -1 < (int)uVar7)) && ((int)uVar7 < DAT_14c9647dc)) &&
             (((plVar15 = (longlong *)
                          ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
               plVar15 != (longlong *)0x0 && ((int)plVar15[2] == iVar5)) &&
              (((*(uint *)(plVar15 + 1) >> 0x1c & 1) == 0 && (*plVar15 != 0)))))) {
            (**(code **)(**(longlong **)(lVar17 + 0x10) + 0x98))();
            uVar3 = (ulonglong)*(uint *)(lVar17 + 0x50);
            param_1 = local_78;
            iVar18 = local_9c;
          }
          local_94 = local_94 & ~(uint)uVar11;
          puVar4 = *(uint **)(lVar17 + 0x48);
          if (*(uint **)(lVar17 + 0x48) == (uint *)0x0) {
            puVar4 = local_70;
          }
          iVar5 = (int)local_90;
          lVar14 = (longlong)iVar5;
          uVar7 = puVar4[lVar14] & local_94;
          uVar1 = (uint)uVar3;
          if (uVar7 == 0) {
            iVar8 = uVar1 + 0x1e;
            if (-1 < (int)(uVar1 - 1)) {
              iVar8 = uVar1 - 1;
            }
            iVar8 = iVar8 >> 5;
            local_98 = local_98 + 0x20;
            iVar9 = iVar8;
            if (iVar8 < iVar5) {
              iVar9 = iVar5;
            }
            iVar18 = local_9c;
            if (iVar5 < iVar8) {
              lVar16 = 0;
              do {
                uVar7 = puVar4[lVar14 + lVar16 + 1];
                if (uVar7 != 0) {
                  local_90 = (ulonglong)(iVar5 + (int)lVar16 + 1);
                  local_94 = 0xffffffff;
                  goto LAB_1414ac1d4;
                }
                local_98 = local_98 + 0x20;
                lVar16 = lVar16 + 1;
              } while (iVar9 - lVar14 != lVar16);
              local_94 = 0xffffffff;
              lVar14 = (longlong)iVar9;
            }
            local_90 = lVar14 + 1;
            uVar7 = uVar1;
          }
          else {
LAB_1414ac1d4:
            uVar11 = (ulonglong)(-uVar7 & uVar7);
            uVar12 = uVar11 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar12 != 0) {
              for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            uVar7 = (local_98 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
            if ((int)uVar1 <= (int)uVar7) {
              uVar7 = uVar1;
            }
          }
          local_88 = uVar3;
        } while (uVar7 != uVar10);
      }
LAB_1414abf70:
      uVar19 = uVar19 & ~(uint)uVar20;
      lVar17 = *(longlong *)(lVar2 + 0x10);
      if (*(longlong *)(lVar2 + 0x10) == 0) {
        lVar17 = lVar2;
      }
      iVar8 = *(int *)(lVar2 + 0x18);
      lVar14 = (longlong)iVar6;
      uVar10 = *(uint *)(lVar17 + lVar14 * 4) & uVar19;
      if (uVar10 == 0) {
        iVar5 = iVar8 + 0x1e;
        if (-1 < iVar8 + -1) {
          iVar5 = iVar8 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar9 = iVar5;
        if (iVar5 < iVar6) {
          iVar9 = iVar6;
        }
        iVar18 = local_9c;
        if (iVar6 < iVar5) {
          lVar16 = 0;
          do {
            uVar10 = *(uint *)(lVar17 + lVar14 * 4 + 4 + lVar16 * 4);
            if (uVar10 != 0) {
              iVar6 = iVar6 + (int)lVar16 + 1;
              uVar19 = 0xffffffff;
              goto LAB_1414abfe3;
            }
            iVar13 = iVar13 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar9 - lVar14 != lVar16);
          uVar19 = 0xffffffff;
          iVar6 = iVar9;
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar8;
      }
      else {
LAB_1414abfe3:
        uVar20 = (ulonglong)(-uVar10 & uVar10);
        uVar12 = uVar20 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar5 = (iVar13 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (iVar8 <= iVar5) {
          iVar5 = iVar8;
        }
      }
      iVar8 = local_9c;
      lVar17 = local_78;
    } while (iVar5 != iVar18 || lVar2 != local_80);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414ac2f6 FUN_1414ac2f6 body=24 status=ok
// SIG undefined FUN_1414ac2f6(void)

undefined8 FUN_1414ac2f6(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  longlong lStack_18;
  ulonglong uStack_10;
  
  if ((param_1 == 0) || (lVar1 = *(longlong *)(param_1 + 0x1f0), lVar1 == 0)) {
    return 0;
  }
  uStack_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lStack_18 = FUN_1414ac3c4();
  if ((lStack_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lStack_18);
  }
  uVar2 = FUN_1414ac378(lVar1 + 0x100,&lStack_18);
  if ((uStack_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414ac30e FUN_1414ac30e body=105 status=ok
// SIG undefined FUN_1414ac30e(void)

void FUN_1414ac30e(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1414ac3c4();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_18);
  }
  FUN_1414ac378(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414ac378 FUN_1414ac378 body=76 status=ok
// SIG undefined FUN_1414ac378(void)

void FUN_1414ac378(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_1414ac3c4();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1414ac3b5;
    }
  }
  lVar2 = 0;
LAB_1414ac3b5:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 1414ac3c4 FUN_1414ac3c4 body=228 status=ok
// SIG undefined FUN_1414ac3c4(void)

longlong FUN_1414ac3c4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb99a30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad04a;
    local_28 = &LAB_14107a1fc;
    local_38 = &LAB_148ade8c5;
    local_40 = &LAB_145c5b792;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x160;
    FUN_14081cfa3(L"/Script/GbxDiscord",L"GbxDiscordManager",&DAT_14cb99a30,FUN_14658e8ec);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb99a30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414ac4aa FUN_1414ac4aa body=181 status=ok
// SIG undefined FUN_1414ac4aa(void)

void FUN_1414ac4aa(longlong *param_1)

{
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1414ac560 FUN_1414ac560 body=5918 status=ok
// SIG undefined FUN_1414ac560(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1414ac560(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_b38 [32];
  longlong local_b18 [2];
  longlong local_b08 [2];
  longlong local_af8 [2];
  longlong local_ae8 [2];
  longlong local_ad8 [2];
  longlong local_ac8 [2];
  longlong local_ab8 [2];
  longlong local_aa8 [2];
  longlong local_a98 [2];
  longlong local_a88 [2];
  longlong local_a78 [2];
  longlong local_a68 [2];
  longlong local_a58 [2];
  longlong local_a48 [2];
  longlong local_a38 [2];
  longlong local_a28 [2];
  longlong local_a18 [2];
  longlong local_a08 [2];
  longlong local_9f8 [2];
  longlong local_9e8 [2];
  longlong local_9d8 [2];
  longlong local_9c8 [2];
  longlong local_9b8 [2];
  longlong local_9a8 [2];
  longlong local_998 [2];
  longlong local_988 [2];
  longlong local_978 [2];
  longlong local_968 [2];
  longlong local_958 [2];
  longlong local_948 [2];
  longlong local_938 [2];
  longlong local_928 [2];
  longlong local_918 [2];
  longlong local_908 [2];
  longlong local_8f8 [2];
  longlong local_8e8 [2];
  longlong local_8d8 [2];
  longlong local_8c8 [2];
  longlong local_8b8 [2];
  longlong local_8a8 [2];
  longlong local_898 [2];
  longlong local_888 [2];
  longlong local_878 [2];
  longlong local_868 [2];
  longlong local_858 [2];
  longlong local_848 [2];
  longlong local_838 [2];
  longlong local_828 [2];
  longlong local_818 [2];
  longlong local_808 [2];
  longlong local_7f8 [2];
  longlong local_7e8 [2];
  longlong local_7d8 [2];
  longlong local_7c8 [2];
  longlong local_7b8 [2];
  longlong local_7a8 [2];
  longlong local_798 [2];
  longlong local_788 [2];
  longlong local_778 [2];
  longlong local_768 [2];
  longlong local_758 [2];
  longlong local_748 [2];
  longlong local_738 [2];
  longlong local_728 [2];
  longlong local_718 [2];
  longlong local_708 [2];
  longlong local_6f8 [2];
  longlong local_6e8 [2];
  longlong local_6d8 [2];
  longlong local_6c8 [2];
  longlong local_6b8 [2];
  longlong local_6a8 [2];
  longlong local_698 [2];
  longlong local_688 [2];
  longlong local_678 [2];
  longlong local_668 [2];
  longlong local_658 [2];
  longlong local_648 [2];
  longlong local_638 [2];
  longlong local_628 [2];
  longlong local_618 [2];
  longlong local_608 [2];
  longlong local_5f8 [2];
  longlong local_5e8 [2];
  longlong local_5d8 [2];
  longlong local_5c8 [2];
  longlong local_5b8 [2];
  longlong local_5a8 [2];
  longlong local_598 [2];
  longlong local_588 [2];
  longlong local_578 [2];
  longlong local_568 [2];
  longlong local_558 [2];
  longlong local_548 [2];
  longlong local_538 [2];
  longlong local_528 [2];
  longlong local_518 [2];
  longlong local_508 [2];
  longlong local_4f8 [2];
  longlong local_4e8 [2];
  longlong local_4d8 [2];
  longlong local_4c8 [2];
  longlong local_4b8 [2];
  longlong local_4a8 [2];
  longlong local_498 [2];
  longlong local_488 [2];
  longlong local_478 [2];
  longlong local_468 [2];
  longlong local_458 [2];
  longlong local_448 [2];
  longlong local_438 [2];
  longlong local_428 [2];
  longlong local_418 [2];
  longlong local_408 [2];
  longlong **local_3f8;
  ulonglong *local_3f0;
  longlong local_3e8 [2];
  longlong *local_3d8;
  longlong *local_3d0;
  longlong *local_3c8;
  longlong *local_3c0;
  longlong *local_3b8;
  longlong *local_3b0;
  longlong *local_3a8;
  longlong *local_3a0;
  longlong *local_398;
  longlong *local_390;
  longlong *local_388;
  longlong *local_380;
  longlong *local_378;
  longlong *local_370;
  longlong *local_368;
  longlong *local_360;
  longlong *local_358;
  longlong *local_350;
  longlong *local_348;
  longlong *local_340;
  longlong *local_338;
  longlong *local_330;
  longlong *local_328;
  longlong *local_320;
  longlong *local_318;
  longlong *local_310;
  longlong *local_308;
  longlong *local_300;
  longlong *local_2f8;
  longlong *local_2f0;
  longlong *local_2e8;
  longlong *local_2e0;
  longlong *local_2d8;
  longlong *local_2d0;
  longlong *local_2c8;
  longlong *local_2c0;
  longlong *local_2b8;
  longlong *local_2b0;
  longlong *local_2a8;
  longlong *local_2a0;
  longlong *local_298;
  longlong *local_290;
  longlong *local_288;
  longlong *local_280;
  longlong *local_278;
  longlong *local_270;
  longlong *local_268;
  longlong *local_260;
  longlong *local_258;
  longlong *local_250;
  longlong *local_248;
  longlong *local_240;
  longlong *local_238;
  longlong *local_230;
  longlong *local_228;
  longlong *local_220;
  longlong *local_218;
  longlong *local_210;
  longlong *local_208;
  longlong *local_200;
  longlong *local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  longlong *local_190;
  longlong *local_188;
  longlong *local_180;
  longlong *local_178;
  longlong *local_170;
  longlong *local_168;
  longlong *local_160;
  longlong *local_158;
  longlong *local_150;
  longlong *local_148;
  longlong *local_140;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b38;
  FUN_144a2b0a4(param_2,local_3e8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbcec80) && (FUN_144b3d300(&DAT_14cbcec80), DAT_14cbcec80 == -1)) {
    FUN_1400b22c2(local_408,"city_regiond");
    FUN_1400b22c2(local_418,&DAT_14b98dc95);
    local_3d8 = local_408;
    local_3d0 = local_418;
    FUN_1400b22c2(local_428,"city_regionc");
    FUN_1400b22c2(local_438,&DAT_14b98dc95);
    local_3c8 = local_428;
    local_3c0 = local_438;
    FUN_1400b22c2(local_448,"city_regionb");
    FUN_1400b22c2(local_458,&DAT_14b98dc95);
    local_3b8 = local_448;
    local_3b0 = local_458;
    FUN_1400b22c2(local_468,"city_regiona");
    FUN_1400b22c2(local_478,&DAT_14b98dc95);
    local_3a8 = local_468;
    local_3a0 = local_478;
    FUN_1400b22c2(local_488,"city_upper");
    FUN_1400b22c2(local_498,"uppercity");
    local_398 = local_488;
    local_390 = local_498;
    FUN_1400b22c2(local_4a8,"shatteredlands_fortress");
    FUN_1400b22c2(local_4b8,"shatterlandsfortress");
    local_388 = local_4a8;
    local_380 = local_4b8;
    FUN_1400b22c2(local_4c8,"mountains_fortress");
    FUN_1400b22c2(local_4d8,"mountainsfortress");
    local_378 = local_4c8;
    local_370 = local_4d8;
    FUN_1400b22c2(local_4e8,"grasslands_fortress");
    FUN_1400b22c2(local_4f8,"grasslandsfortress");
    local_368 = local_4e8;
    local_360 = local_4f8;
    FUN_1400b22c2(local_508,"elpis");
    FUN_1400b22c2(local_518,"elpis");
    local_358 = local_508;
    local_350 = local_518;
    FUN_1400b22c2(local_528,"elpis_elevator");
    FUN_1400b22c2(local_538,"elevator");
    local_348 = local_528;
    local_340 = local_538;
    FUN_1400b22c2(local_548,"shatteredlands_vault");
    FUN_1400b22c2(local_558,"vault");
    local_338 = local_548;
    local_330 = local_558;
    FUN_1400b22c2(local_568,"mountains_vault");
    FUN_1400b22c2(local_578,"vault");
    local_328 = local_568;
    local_320 = local_578;
    FUN_1400b22c2(local_588,"grasslands_vault");
    FUN_1400b22c2(local_598,"vault");
    local_318 = local_588;
    local_310 = local_598;
    FUN_1400b22c2(local_5a8,"grasslands_prison");
    FUN_1400b22c2(local_5b8,"prison");
    local_308 = local_5a8;
    local_300 = local_5b8;
    FUN_1400b22c2(local_5c8,"shatteredlands_regione");
    FUN_1400b22c2(local_5d8,"shatterlands");
    local_2f8 = local_5c8;
    local_2f0 = local_5d8;
    FUN_1400b22c2(local_5e8,"shatteredlands_regiond");
    FUN_1400b22c2(local_5f8,"shatterlands");
    local_2e8 = local_5e8;
    local_2e0 = local_5f8;
    FUN_1400b22c2(local_608,"shatteredlands_regionc");
    FUN_1400b22c2(local_618,"shatterlands");
    local_2d8 = local_608;
    local_2d0 = local_618;
    FUN_1400b22c2(local_628,"shatteredlands_regionb");
    FUN_1400b22c2(local_638,"shatterlands");
    local_2c8 = local_628;
    local_2c0 = local_638;
    FUN_1400b22c2(local_648,"shatteredlands_regiona");
    FUN_1400b22c2(local_658,"shatterlands");
    local_2b8 = local_648;
    local_2b0 = local_658;
    FUN_1400b22c2(local_668,"mountains_regione");
    FUN_1400b22c2(local_678,"mountains");
    local_2a8 = local_668;
    local_2a0 = local_678;
    FUN_1400b22c2(local_688,"mountains_regiond");
    FUN_1400b22c2(local_698,"mountains");
    local_298 = local_688;
    local_290 = local_698;
    FUN_1400b22c2(local_6a8,"mountains_regionc");
    FUN_1400b22c2(local_6b8,"mountains");
    local_288 = local_6a8;
    local_280 = local_6b8;
    FUN_1400b22c2(local_6c8,"mountains_regionb");
    FUN_1400b22c2(local_6d8,"mountains");
    local_278 = local_6c8;
    local_270 = local_6d8;
    FUN_1400b22c2(local_6e8,"mountains_regiona");
    FUN_1400b22c2(local_6f8,"mountains");
    local_268 = local_6e8;
    local_260 = local_6f8;
    FUN_1400b22c2(local_708,"grasslands_regione");
    FUN_1400b22c2(local_718,"grasslands");
    local_258 = local_708;
    local_250 = local_718;
    FUN_1400b22c2(local_728,"grasslands_regiond");
    FUN_1400b22c2(local_738,"grasslands");
    local_248 = local_728;
    local_240 = local_738;
    FUN_1400b22c2(local_748,"grasslands_regionc");
    FUN_1400b22c2(local_758,"grasslands");
    local_238 = local_748;
    local_230 = local_758;
    FUN_1400b22c2(local_768,"grasslands_regionb");
    FUN_1400b22c2(local_778,"grasslands");
    local_228 = local_768;
    local_220 = local_778;
    FUN_1400b22c2(local_788,"grasslands_regiona");
    FUN_1400b22c2(local_798,"grasslands");
    local_218 = local_788;
    local_210 = local_798;
    FUN_1400b22c2(local_7a8,"kairosgeneric");
    FUN_1400b22c2(local_7b8,"kairosgeneric");
    local_208 = local_7a8;
    local_200 = local_7b8;
    FUN_1400b22c2(local_7c8,&DAT_14b98dc95);
    FUN_1400b22c2(local_7d8,&DAT_14b98dc95);
    local_1f8 = local_7c8;
    local_1f0 = local_7d8;
    FUN_1400b22c2(local_7e8,"shatteredlands");
    FUN_1400b22c2(local_7f8,"shatterlands");
    local_1e8 = local_7e8;
    local_1e0 = local_7f8;
    FUN_1400b22c2(local_808,"mountains");
    FUN_1400b22c2(local_818,"mountains");
    local_1d8 = local_808;
    local_1d0 = local_818;
    FUN_1400b22c2(local_828,"grasslands");
    FUN_1400b22c2(local_838,"grasslands");
    local_1c8 = local_828;
    local_1c0 = local_838;
    FUN_1400b22c2(local_848,"raid1");
    FUN_1400b22c2(local_858,"raid1");
    local_1b8 = local_848;
    local_1b0 = local_858;
    FUN_1400b22c2(local_868,"banjo");
    FUN_1400b22c2(local_878,"banjo");
    local_1a8 = local_868;
    local_1a0 = local_878;
    FUN_1400b22c2(local_888,"cello");
    FUN_1400b22c2(local_898,"cello");
    local_198 = local_888;
    local_190 = local_898;
    FUN_1400b22c2(local_8a8,"cowbell");
    FUN_1400b22c2(local_8b8,"cowbell");
    local_188 = local_8a8;
    local_180 = local_8b8;
    FUN_1400b22c2(local_8c8,"cowbell_crookedteeth");
    FUN_1400b22c2(local_8d8,"cowbell");
    local_178 = local_8c8;
    local_170 = local_8d8;
    FUN_1400b22c2(local_8e8,"cowbell_bloodstainedhollow");
    FUN_1400b22c2(local_8f8,"cowbell");
    local_168 = local_8e8;
    local_160 = local_8f8;
    FUN_1400b22c2(local_908,"cowbell_windsweptwastes");
    FUN_1400b22c2(local_918,"cowbell");
    local_158 = local_908;
    local_150 = local_918;
    FUN_1400b22c2(local_928,"cowbell_feuermann");
    FUN_1400b22c2(local_938,"cowbell");
    local_148 = local_928;
    local_140 = local_938;
    FUN_1400b22c2(local_948,"cowbell_speakeasy");
    FUN_1400b22c2(local_958,"cowbell");
    local_138 = local_948;
    local_130 = local_958;
    FUN_1400b22c2(local_968,"vaultofthedamned");
    FUN_1400b22c2(local_978,"vaultofthedamned");
    local_128 = local_968;
    local_120 = local_978;
    FUN_1400b22c2(local_988,"raid2");
    FUN_1400b22c2(local_998,"raid2");
    local_118 = local_988;
    local_110 = local_998;
    FUN_1400b22c2(local_9a8,&DAT_14b98dfb9);
    FUN_1400b22c2(local_9b8,&DAT_14b98dfb9);
    local_108 = local_9a8;
    local_100 = local_9b8;
    FUN_1400b22c2(local_9c8,"mandolin");
    FUN_1400b22c2(local_9d8,"mandolin");
    local_f8 = local_9c8;
    local_f0 = local_9d8;
    FUN_1400b22c2(local_9e8,"mandolin_cos");
    FUN_1400b22c2(local_9f8,"mandolin_cos");
    local_e8 = local_9e8;
    local_e0 = local_9f8;
    FUN_1400b22c2(local_a08,&DAT_14b98dfd4);
    FUN_1400b22c2(local_a18,&DAT_14b98dfd4);
    local_d8 = local_a08;
    local_d0 = local_a18;
    FUN_1400b22c2(local_a28,"viola");
    FUN_1400b22c2(local_a38,"viola");
    local_c8 = local_a28;
    local_c0 = local_a38;
    FUN_1400b22c2(local_a48,"viola_elpisvile");
    FUN_1400b22c2(local_a58,"viola_elpisvile");
    local_b8 = local_a48;
    local_b0 = local_a58;
    FUN_1400b22c2(local_a68,"harmonica");
    FUN_1400b22c2(local_a78,"harmonica");
    local_a8 = local_a68;
    local_a0 = local_a78;
    FUN_1400b22c2(local_a88,"harmonica_vinechokedcanopy");
    FUN_1400b22c2(local_a98,"harmonica");
    local_98 = local_a88;
    local_90 = local_a98;
    FUN_1400b22c2(local_aa8,"harmonica_bagheerarange");
    FUN_1400b22c2(local_ab8,"harmonica");
    local_88 = local_aa8;
    local_80 = local_ab8;
    FUN_1400b22c2(local_ac8,"harmonica_uppercrust");
    FUN_1400b22c2(local_ad8,"harmonica");
    local_78 = local_ac8;
    local_70 = local_ad8;
    FUN_1400b22c2(local_ae8,"harmonica_lavafield");
    FUN_1400b22c2(local_af8,"harmonica");
    local_68 = local_ae8;
    local_60 = local_af8;
    FUN_1400b22c2(local_b08,"volcanofortress");
    FUN_1400b22c2(local_b18,"volcanofortress");
    local_3f0 = &local_48;
    local_3f8 = &local_3d8;
    local_58 = local_b08;
    local_50 = local_b18;
    FUN_140ac5b02(&DAT_14cbcec30);
    if (local_b18[0] != 0) {
      FUN_1400020a8();
    }
    if (local_b08[0] != 0) {
      FUN_1400020a8();
    }
    if (local_af8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_ae8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_ad8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_ac8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_ab8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_aa8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_a98[0] != 0) {
      FUN_1400020a8();
    }
    if (local_a88[0] != 0) {
      FUN_1400020a8();
    }
    if (local_a78[0] != 0) {
      FUN_1400020a8();
    }
    if (local_a68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_a58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_a48[0] != 0) {
      FUN_1400020a8();
    }
    if (local_a38[0] != 0) {
      FUN_1400020a8();
    }
    if (local_a28[0] != 0) {
      FUN_1400020a8();
    }
    if (local_a18[0] != 0) {
      FUN_1400020a8();
    }
    if (local_a08[0] != 0) {
      FUN_1400020a8();
    }
    if (local_9f8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_9e8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_9d8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_9c8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_9b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_9a8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_998[0] != 0) {
      FUN_1400020a8();
    }
    if (local_988[0] != 0) {
      FUN_1400020a8();
    }
    if (local_978[0] != 0) {
      FUN_1400020a8();
    }
    if (local_968[0] != 0) {
      FUN_1400020a8();
    }
    if (local_958[0] != 0) {
      FUN_1400020a8();
    }
    if (local_948[0] != 0) {
      FUN_1400020a8();
    }
    if (local_938[0] != 0) {
      FUN_1400020a8();
    }
    if (local_928[0] != 0) {
      FUN_1400020a8();
    }
    if (local_918[0] != 0) {
      FUN_1400020a8();
    }
    if (local_908[0] != 0) {
      FUN_1400020a8();
    }
    if (local_8f8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_8e8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_8d8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_8c8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_8b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_8a8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_898[0] != 0) {
      FUN_1400020a8();
    }
    if (local_888[0] != 0) {
      FUN_1400020a8();
    }
    if (local_878[0] != 0) {
      FUN_1400020a8();
    }
    if (local_868[0] != 0) {
      FUN_1400020a8();
    }
    if (local_858[0] != 0) {
      FUN_1400020a8();
    }
    if (local_848[0] != 0) {
      FUN_1400020a8();
    }
    if (local_838[0] != 0) {
      FUN_1400020a8();
    }
    if (local_828[0] != 0) {
      FUN_1400020a8();
    }
    if (local_818[0] != 0) {
      FUN_1400020a8();
    }
    if (local_808[0] != 0) {
      FUN_1400020a8();
    }
    if (local_7f8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_7e8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_7d8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_7c8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_7b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_7a8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_798[0] != 0) {
      FUN_1400020a8();
    }
    if (local_788[0] != 0) {
      FUN_1400020a8();
    }
    if (local_778[0] != 0) {
      FUN_1400020a8();
    }
    if (local_768[0] != 0) {
      FUN_1400020a8();
    }
    if (local_758[0] != 0) {
      FUN_1400020a8();
    }
    if (local_748[0] != 0) {
      FUN_1400020a8();
    }
    if (local_738[0] != 0) {
      FUN_1400020a8();
    }
    if (local_728[0] != 0) {
      FUN_1400020a8();
    }
    if (local_718[0] != 0) {
      FUN_1400020a8();
    }
    if (local_708[0] != 0) {
      FUN_1400020a8();
    }
    if (local_6f8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_6e8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_6d8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_6c8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_6b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_6a8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_698[0] != 0) {
      FUN_1400020a8();
    }
    if (local_688[0] != 0) {
      FUN_1400020a8();
    }
    if (local_678[0] != 0) {
      FUN_1400020a8();
    }
    if (local_668[0] != 0) {
      FUN_1400020a8();
    }
    if (local_658[0] != 0) {
      FUN_1400020a8();
    }
    if (local_648[0] != 0) {
      FUN_1400020a8();
    }
    if (local_638[0] != 0) {
      FUN_1400020a8();
    }
    if (local_628[0] != 0) {
      FUN_1400020a8();
    }
    if (local_618[0] != 0) {
      FUN_1400020a8();
    }
    if (local_608[0] != 0) {
      FUN_1400020a8();
    }
    if (local_5f8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_5e8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_5d8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_5c8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_5b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_5a8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_598[0] != 0) {
      FUN_1400020a8();
    }
    if (local_588[0] != 0) {
      FUN_1400020a8();
    }
    if (local_578[0] != 0) {
      FUN_1400020a8();
    }
    if (local_568[0] != 0) {
      FUN_1400020a8();
    }
    if (local_558[0] != 0) {
      FUN_1400020a8();
    }
    if (local_548[0] != 0) {
      FUN_1400020a8();
    }
    if (local_538[0] != 0) {
      FUN_1400020a8();
    }
    if (local_528[0] != 0) {
      FUN_1400020a8();
    }
    if (local_518[0] != 0) {
      FUN_1400020a8();
    }
    if (local_508[0] != 0) {
      FUN_1400020a8();
    }
    if (local_4f8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_4e8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_4d8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_4c8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_4b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_4a8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_498[0] != 0) {
      FUN_1400020a8();
    }
    if (local_488[0] != 0) {
      FUN_1400020a8();
    }
    if (local_478[0] != 0) {
      FUN_1400020a8();
    }
    if (local_468[0] != 0) {
      FUN_1400020a8();
    }
    if (local_458[0] != 0) {
      FUN_1400020a8();
    }
    if (local_448[0] != 0) {
      FUN_1400020a8();
    }
    if (local_438[0] != 0) {
      FUN_1400020a8();
    }
    if (local_428[0] != 0) {
      FUN_1400020a8();
    }
    if (local_418[0] != 0) {
      FUN_1400020a8();
    }
    if (local_408[0] != 0) {
      FUN_1400020a8();
    }
    atexit(FUN_1441de82d);
    _Init_thread_footer(&DAT_14cbcec80);
  }
  iVar2 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar2 = 0;
  }
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
    } while (iVar2 != iVar3);
  }
  iVar2 = FUN_1457511aa(&DAT_14cbcec30);
  if (iVar2 == -1) {
    FUN_140056680(param_1,L"kairosgeneric");
  }
  else {
    iVar2 = *(int *)(param_2 + 1);
    uVar4 = 0;
    iVar3 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    if (0 < iVar3) {
      if (iVar2 == 0) {
        puVar1 = &DAT_149dfb77a;
      }
      else {
        puVar1 = (undefined2 *)*param_2;
      }
      lVar6 = 0;
      uVar4 = 0;
      do {
        uVar5 = ((uint)(0x19 < (ushort)puVar1[lVar6] - 0x61) * 0x20 + (uint)(ushort)puVar1[lVar6]) -
                0x20;
        uVar7 = (uint)(uVar4 >> 8) ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar4 ^ uVar5) & 0xff) * 4);
        uVar4 = (ulonglong)
                (uVar7 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar7 & 0xff ^ uVar5 >> 8 & 0xff) * 4));
        lVar6 = lVar6 + 1;
      } while (iVar3 != (int)lVar6);
    }
    iVar2 = FUN_1457511aa(&DAT_14cbcec30,uVar4,param_2);
    lVar6 = (longlong)iVar2 * 0x28 + _DAT_14cbcec30;
    if (iVar2 == -1) {
      lVar6 = 0;
    }
    *param_1 = 0;
    iVar2 = *(int *)(lVar6 + 0x18);
    _Src = *(void **)(lVar6 + 0x10);
    *(int *)(param_1 + 1) = iVar2;
    if ((longlong)iVar2 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar2,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar2 * 2);
    }
  }
  if (local_3e8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414adc80 FUN_1414adc80 body=550 status=ok
// SIG undefined FUN_1414adc80(void)

longlong FUN_1414adc80(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = param_2[2];
  if (lVar5 == 0) {
    local_50 = (longlong *)*param_2;
    lVar5 = FUN_14050aea0();
    param_2[2] = lVar5;
    if (lVar5 != 0) goto LAB_1414adccd;
  }
  else {
LAB_1414adccd:
    lVar5 = FUN_141450d48(lVar5);
    if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x20) != 0)) {
      if ((longlong)*(int *)(param_1 + 0x210) != 0) {
        lVar10 = *(longlong *)(param_1 + 0x208);
        lVar8 = (longlong)*(int *)(param_1 + 0x210) * 0x188;
        do {
          if (*(longlong *)(lVar10 + 0x180) == *(longlong *)(lVar5 + 0x20)) {
            if (lVar10 != 0) goto LAB_1414ade49;
            break;
          }
          lVar10 = lVar10 + 0x188;
          lVar8 = lVar8 + -0x188;
        } while (lVar8 != 0);
      }
      if (DAT_14cbc8bb8 != 0) {
        FUN_1457206a4(DAT_14cbc8bb8,&local_50);
        if ((longlong)local_48 == 0) {
          lVar10 = 0;
          bVar3 = true;
        }
        else {
          plVar1 = local_50 + local_48;
          plVar9 = local_50;
          do {
            lVar10 = *plVar9;
            lVar8 = *(longlong *)(lVar10 + 0x160);
            if (lVar8 == 0) {
              uVar6 = FUN_144007384();
              lVar8 = FUN_14477b664(uVar6);
              *(longlong *)(lVar10 + 0x160) = lVar8;
            }
            lVar7 = *(longlong *)(lVar10 + 0x168);
            if (lVar7 == 0) {
              if ((lVar8 != 0) && (*(longlong *)(lVar10 + 0x158) != 0)) {
                plVar2 = *(longlong **)(lVar8 + 0xb8);
                if ((plVar2 == (longlong *)0x0) ||
                   (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
                  *(undefined8 *)(lVar10 + 0x168) = 0;
                }
                else {
                  uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
                  lVar7 = FUN_144aff482(uVar6,(longlong *)(lVar10 + 0x158));
                  *(longlong *)(lVar10 + 0x168) = lVar7;
                  if (lVar7 != 0) goto LAB_1414add89;
                }
              }
            }
            else {
LAB_1414add89:
              if ((longlong)*(int *)(lVar7 + 0x20) != 0) {
                lVar10 = *(longlong *)(lVar7 + 0x18);
                lVar8 = (longlong)*(int *)(lVar7 + 0x20) * 0x188;
                do {
                  if (*(longlong *)(lVar10 + 0x180) == *(longlong *)(lVar5 + 0x20)) {
                    if (lVar10 != 0) {
                      bVar3 = false;
                      goto LAB_1414ade86;
                    }
                    break;
                  }
                  lVar10 = lVar10 + 0x188;
                  lVar8 = lVar8 + -0x188;
                } while (lVar8 != 0);
              }
            }
            plVar9 = plVar9 + 1;
          } while (plVar9 != plVar1);
          bVar3 = true;
          lVar10 = 0;
        }
LAB_1414ade86:
        if (local_50 != (longlong *)0x0) {
          FUN_1400020a8(local_50);
        }
        if (bVar3) {
          lVar10 = param_1 + 0x88;
        }
        goto LAB_1414ade49;
      }
    }
  }
  lVar10 = param_1 + 0x88;
LAB_1414ade49:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar10;
}



// FUNCTION 1414adea7 FUN_1414adea7 body=40 status=ok
// SIG undefined FUN_1414adea7(void)

void FUN_1414adea7(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145711c9a(param_1);
    param_1 = param_1 + 0x60;
  }
  return;
}



// FUNCTION 1414aded0 FUN_1414aded0 body=210 status=ok
// SIG undefined FUN_1414aded0(void)

void FUN_1414aded0(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = (longlong)(int)uVar1;
  if (lVar3 != 0) {
    plVar2 = (longlong *)*param_1;
    uVar4 = 0;
    bVar10 = *plVar2 == *(longlong *)*param_2;
    uVar7 = 0;
    do {
      uVar5 = uVar7 + 1;
      if ((int)(uVar7 + 1) < (int)uVar1) {
        uVar5 = uVar1;
      }
      uVar8 = uVar7;
      uVar6 = (ulonglong)uVar7;
      do {
        uVar6 = uVar6 + 1;
        uVar9 = uVar5;
        if (lVar3 <= (longlong)uVar6) break;
        uVar8 = uVar8 + 1;
        uVar9 = uVar8;
      } while (bVar10 == (plVar2[uVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (uVar4 != uVar7) {
          memmove(plVar2 + (int)uVar4,plVar2 + uVar7,(longlong)(int)(uVar9 - uVar7) << 3);
        }
        uVar4 = uVar4 + (uVar9 - uVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      uVar7 = uVar9;
    } while ((longlong)uVar6 < lVar3);
    *(uint *)(param_1 + 1) = uVar4;
  }
  return;
}



// FUNCTION 1414adfa2 FUN_1414adfa2 body=517 status=ok
// SIG undefined FUN_1414adfa2(void)

void FUN_1414adfa2(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_74 = param_2;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar9 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar9 = local_68 >> 0x20;
  }
  plVar4 = local_60;
  iVar13 = (int)local_68;
  uVar12 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar10 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *param_1;
      if (*(longlong *)(lVar11 + 0x28 + (longlong)iVar6 * 0x40) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar11 + (longlong)iVar6 * 0x40) != 0) {
        FUN_1400020a8();
      }
      uVar12 = uVar12 & ~(uint)uVar9;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar11 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar12;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar13) {
          iVar3 = iVar13;
        }
        if (iVar6 <= iVar13) break;
        lVar8 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar8 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar3 - lVar11 == lVar8) goto LAB_1414ae0f6;
        }
        iVar13 = iVar13 + (int)lVar8 + 1;
        uVar12 = 0xffffffff;
      }
      uVar9 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1414ae0f6:
  iVar13 = local_74;
  if (local_74 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_74);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != local_74) {
    FUN_140b7ce44(param_1,local_74);
  }
  param_1[6] = 0xffffffff;
  uVar12 = iVar13 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar12) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar5 = uVar12;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414ae1a9 FUN_1414ae1a9 body=103 status=ok
// SIG undefined FUN_1414ae1a9(void)

longlong FUN_1414ae1a9(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144928b90(param_1,2);
  local_20 = DAT_14cbca650;
  local_18 = DAT_14cbca658;
  FUN_144928d62(param_1 + 0x10,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414ae211 FUN_1414ae211 body=103 status=ok
// SIG undefined FUN_1414ae211(void)

longlong FUN_1414ae211(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144928b90(param_1,2);
  local_20 = DAT_14cbca638;
  local_18 = DAT_14cbca640;
  FUN_144928d62(param_1 + 0x10,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414ae27a FUN_1414ae27a body=145 status=ok
// SIG undefined FUN_1414ae27a(void)

void FUN_1414ae27a(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)FUN_1401b2ade();
  if ((plVar2 != (longlong *)0x0) && (*(char *)(param_1 + 0x178) == '\x03')) {
    cVar1 = (**(code **)(*plVar2 + 0x6c8))(plVar2);
    if (cVar1 != '\0') {
      cVar1 = FUN_14016169c(plVar2,&local_1c);
      if ((cVar1 == '\0') || (local_1c == 0)) {
        FUN_1447210f0(param_1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414ae31c FUN_1414ae31c body=360 status=ok
// SIG undefined FUN_1414ae31c(void)

void FUN_1414ae31c(undefined8 *param_1,undefined8 param_2,uint *param_3,uint *param_4)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined8 local_54;
  uint local_4c;
  char local_48 [4];
  longlong local_44;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[0] = '\0';
  local_44 = 0;
  local_3c = 0;
  uVar4 = 0;
  lVar2 = FUN_140149a73(*(undefined8 *)*param_1,0);
  if (lVar2 == 0) {
    uVar3 = *param_4;
    cVar1 = '\0';
    uVar4 = 0;
  }
  else {
    FUN_14039fc7b(param_2,local_48,lVar2,0);
    uVar3 = *param_4;
    if (local_48[0] == '\x03') {
      uVar4 = (uint)(local_44 != 0);
      cVar1 = '\x03';
    }
    else if (local_48[0] == '\x02') {
      uVar4 = local_3c;
      cVar1 = '\x02';
    }
    else {
      cVar1 = local_48[0];
      if (local_48[0] == '\x01') {
        uVar4 = (uint)(local_3c != 0);
        cVar1 = '\x01';
      }
    }
  }
  if ((int)uVar4 < (int)uVar3) {
    uVar4 = uVar3;
  }
  *param_3 = uVar4;
  if (*(int *)param_1[1] < (int)uVar4) {
    *param_4 = uVar4;
    uVar4 = *(uint *)param_1[1];
    *param_3 = uVar4;
  }
  else {
    *param_4 = 0;
    uVar4 = *param_3;
  }
  if (cVar1 == '\x03') {
    bVar5 = local_44 == 0;
  }
  else {
    uVar3 = local_3c;
    if (cVar1 == '\x02') goto LAB_1414ae425;
    if (cVar1 != '\x01') {
      uVar3 = 0;
      goto LAB_1414ae425;
    }
    bVar5 = local_3c == 0;
  }
  uVar3 = (uint)!bVar5;
LAB_1414ae425:
  if (uVar4 != uVar3) {
    local_58[0] = 2;
    local_54 = 0;
    local_4c = uVar4;
    lVar2 = FUN_140149a73(*(undefined8 *)*param_1,0);
    if (lVar2 != 0) {
      FUN_140bc53f1(param_2,local_58,lVar2,0);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414ae486 FUN_1414ae486 body=1631 status=ok
// SIG undefined FUN_1414ae486(void)

void FUN_1414ae486(longlong *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_138 [40];
  uint local_110;
  undefined4 uStack_10c;
  int local_108;
  undefined4 local_104;
  undefined1 local_100;
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_80;
  undefined2 local_7f;
  undefined1 local_7d;
  undefined4 local_7c;
  longlong local_78 [5];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if (param_2 == 0 || lVar3 == 0) goto LAB_1414ae720;
  cVar2 = FUN_1441fe566(param_2);
  if ((cVar2 == '\0') &&
     (((plVar7 = param_1 + 0x5a, (int)param_1[0x5b] == 0 || ((longlong *)*plVar7 == (longlong *)0x0)
       ) || (cVar2 = (**(code **)(*(longlong *)*plVar7 + 0x30))(), cVar2 == '\0')))) {
    FUN_145bd9fc6(local_78);
    local_110 = 0;
    uStack_10c = 0;
    local_108 = 0;
    FUN_1446efa72(&local_110,0,3,0x10);
    local_108 = 3;
    puVar6 = (undefined8 *)CONCAT44(uStack_10c,local_110);
    *puVar6 = &PTR_LAB_14b3e6310;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    puVar6[2] = lVar5;
    *puVar6 = &PTR_FUN_14b9de860;
    puVar6[3] = 0;
    iVar9 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(puVar6 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      iVar9 = *(int *)(lVar4 + 0x10);
      if (*(int *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar9 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar9;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar9 = *(int *)(lVar4 + 0x10);
        bVar10 = iVar9 == 0;
        if (bVar10) {
          *(int *)(lVar4 + 0x10) = iVar8;
          iVar9 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar9 = iVar8;
        }
      }
    }
    iVar8 = local_108;
    *(int *)((longlong)puVar6 + 0x1c) = iVar9;
    puVar6[4] = param_1;
    lVar4 = CONCAT44(uStack_10c,local_110);
    local_110 = 0;
    uStack_10c = 0;
    local_108 = 0;
    if ((int)param_1[0x5b] == 0) {
LAB_1414ae839:
      if (*plVar7 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar6 = (undefined8 *)*plVar7;
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6,0);
        FUN_1446efa72(plVar7,0,0,0x10);
        *(undefined4 *)(param_1 + 0x5b) = 0;
        goto LAB_1414ae839;
      }
    }
    param_1[0x5a] = lVar4;
    *(int *)(param_1 + 0x5b) = iVar8;
    puVar6 = (undefined8 *)CONCAT44(uStack_10c,local_110);
    if (local_108 == 0) {
LAB_1414ae88d:
      if (puVar6 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6,0);
      FUN_1446efa72(&local_110,0,0,0x10);
      local_108 = 0;
      puVar6 = (undefined8 *)CONCAT44(uStack_10c,local_110);
      goto LAB_1414ae88d;
    }
    local_110 = local_110 & 0xffffff00;
    uStack_10c = 0;
    local_108 = 0;
    local_104 = 0;
    local_100 = 0;
    local_fc = 0;
    uStack_f4 = 0;
    local_ec = 0;
    local_e0 = 0xc69c4000;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    local_7f = 1;
    local_7d = 0;
    local_7c = 0;
    FUN_1401aa3da((longlong)&uStack_f4 + 4,plVar7);
    lVar3 = FUN_140149a73(lVar3,0);
    if (lVar3 == 0) {
      local_7c = 2;
    }
    else {
      FUN_140983ba6(local_78,lVar3,&local_110);
    }
    FUN_1409838b8(&local_110);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if (param_1[0x5c] != 0) goto LAB_1414ae720;
  local_110 = 0;
  uStack_10c = 0;
  local_108 = 0;
  FUN_1446efa72(&local_110,0,3,0x10);
  local_108 = 3;
  puVar6 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  *puVar6 = &PTR_LAB_14b961ce0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  puVar6[2] = lVar4;
  *puVar6 = &PTR_FUN_14b9de8d0;
  puVar6[3] = 0;
  iVar9 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(puVar6 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar9 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar9 = *(int *)(lVar3 + 0x10);
      bVar10 = iVar9 == 0;
      if (bVar10) {
        *(int *)(lVar3 + 0x10) = iVar8;
        iVar9 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar9 = iVar8;
      }
    }
  }
  *(int *)((longlong)puVar6 + 0x1c) = iVar9;
  puVar6[4] = param_1;
  plVar7 = (longlong *)CONCAT44(uStack_10c,local_110);
  if ((local_108 == 0) || (plVar7 == (longlong *)0x0)) {
LAB_1414aea2c:
    if (local_108 == 0) {
      lVar3 = 0;
      goto LAB_1414ae710;
    }
    if (plVar7 != (longlong *)0x0) {
      lVar3 = 0;
      (**(code **)*plVar7)(plVar7,0);
      FUN_1446efa72(&local_110,0,0,0x10);
      goto LAB_1414ae703;
    }
    lVar3 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar7 + 0x30))();
    uVar1 = DAT_14cbd0b80;
    if (cVar2 == '\0') {
      plVar7 = (longlong *)CONCAT44(uStack_10c,local_110);
      goto LAB_1414aea2c;
    }
    if ((DAT_14cbd0b8c < 1) &&
       (DAT_14cbd0b88 = DAT_14cbd0b88 + -1, DAT_14cbd0b88 <= (int)DAT_14cbd0b80)) {
      if (0 < (int)DAT_14cbd0b80) {
        iVar9 = 0;
        do {
          if (((*(int *)(DAT_14cbd0b78 + 8 + (longlong)iVar9 * 0x10) == 0) ||
              (plVar7 = *(longlong **)(DAT_14cbd0b78 + (longlong)iVar9 * 0x10),
              plVar7 == (longlong *)0x0)) ||
             (cVar2 = (**(code **)(*plVar7 + 0x28))(), cVar2 != '\0')) {
            FUN_14005b288(&DAT_14cbd0b78,iVar9);
            FUN_14005b248(&DAT_14cbd0b78);
          }
          else {
            iVar9 = iVar9 + 1;
          }
        } while (iVar9 < (int)DAT_14cbd0b80);
      }
      DAT_14cbd0b88 = 2;
      if (2 < (int)(DAT_14cbd0b80 * 2)) {
        DAT_14cbd0b88 = DAT_14cbd0b80 * 2;
      }
      if ((DAT_14cbd0b88 < (int)uVar1) && (DAT_14cbd0b84 != DAT_14cbd0b80)) {
        FUN_14045812c();
      }
    }
    lVar3 = 0;
    if ((local_108 != 0) &&
       (plVar7 = (longlong *)CONCAT44(uStack_10c,local_110), plVar7 != (longlong *)0x0)) {
      (**(code **)(*plVar7 + 0x38))(plVar7,local_78);
      lVar3 = local_78[0];
    }
    uVar1 = DAT_14cbd0b80;
    lVar4 = (longlong)(int)DAT_14cbd0b80;
    DAT_14cbd0b80 = DAT_14cbd0b80 + 1;
    if (DAT_14cbd0b84 < DAT_14cbd0b80) {
      FUN_1447a71f6(&DAT_14cbd0b78,uVar1);
    }
    lVar5 = DAT_14cbd0b78;
    lVar4 = lVar4 * 0x10;
    *(undefined8 *)(DAT_14cbd0b78 + lVar4) = 0;
    *(undefined4 *)(lVar5 + 8 + lVar4) = 0;
    *(ulonglong *)(lVar5 + lVar4) = CONCAT44(uStack_10c,local_110);
    local_110 = 0;
    uStack_10c = 0;
    *(int *)(lVar5 + 8 + lVar4) = local_108;
LAB_1414ae703:
    local_108 = 0;
    plVar7 = (longlong *)CONCAT44(uStack_10c,local_110);
LAB_1414ae710:
    if (plVar7 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  param_1[0x5c] = lVar3;
LAB_1414ae720:
  if ((local_40 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414aeae6 FUN_1414aeae6 body=8 status=ok
// SIG undefined FUN_1414aeae6(void)

void FUN_1414aeae6(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



// FUNCTION 1414aeaee FUN_1414aeaee body=1387 status=ok
// SIG undefined FUN_1414aeaee(void)

void FUN_1414aeaee(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_2e8 [32];
  undefined1 local_2c8;
  longlong local_2c0;
  longlong *local_2b8;
  longlong *local_2b0;
  int local_2a8;
  undefined4 uStack_2a4;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  lVar9 = (**(code **)(*param_1 + 0x30))();
  plVar3 = *(longlong **)(lVar9 + 0x70);
  if ((((((plVar3 == (longlong *)0x0) || (*(int *)(lVar9 + 0x6c) == 0)) ||
        (uVar2 = *(uint *)(lVar9 + 0x68), (int)uVar2 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar2 ||
        (lVar15 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar15 == 0)))) ||
      (*(int *)(lVar15 + 0x10) != *(int *)(lVar9 + 0x6c))) ||
     ((((*(uint *)(lVar15 + 8) & 0x10200000) != 0 || (*(char *)(lVar9 + 0xc4) != '\0')) ||
      (*(longlong *)(lVar9 + 0x340) != 0)))) goto LAB_1414aeeba;
  if (*(int *)(lVar9 + 100) == 0) {
LAB_1414aef6c:
    uVar10 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar9 + 0x60);
    uVar10 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar11 = (longlong *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar11 == (longlong *)0x0) ||
         ((((int)plVar11[2] != *(int *)(lVar9 + 100) || ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)
           ) || (*plVar11 == 0)))) goto LAB_1414aef6c;
      uVar10 = FUN_1447210f0(*plVar11,0);
    }
  }
  FUN_1409e0c66(&local_2b0,uVar10);
  plVar11 = (longlong *)CONCAT44(uStack_2a4,local_2a8);
  if (plVar11 == (longlong *)0x0) goto LAB_1414aeeba;
  iVar7 = (int)plVar11[1];
  do {
    if (iVar7 == 0) {
      plVar11 = (longlong *)0x0;
      break;
    }
    LOCK();
    iVar8 = (int)plVar11[1];
    bVar16 = iVar7 == iVar8;
    if (bVar16) {
      *(int *)(plVar11 + 1) = iVar7 + 1;
      iVar8 = iVar7;
    }
    iVar7 = iVar8;
    UNLOCK();
  } while (!bVar16);
  LOCK();
  piVar1 = (int *)((longlong)CONCAT44(uStack_2a4,local_2a8) + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*(longlong *)CONCAT44(uStack_2a4,local_2a8) + 0x10))();
  }
  plVar4 = local_2b0;
  if (plVar11 == (longlong *)0x0) goto LAB_1414aeeba;
  if ((local_2b0 != (longlong *)0x0) &&
     (lVar15 = (**(code **)(*plVar3 + 0x38))(plVar3), lVar15 != 0)) {
    FUN_140bc281a(&local_2b0,lVar15);
    if (*(int *)(lVar9 + 100) == 0) {
LAB_1414aef73:
      uVar10 = 0;
    }
    else {
      uVar2 = *(uint *)(lVar9 + 0x60);
      uVar10 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        puVar12 = (undefined8 *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((puVar12 == (undefined8 *)0x0) ||
           ((*(int *)(puVar12 + 2) != *(int *)(lVar9 + 100) ||
            ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_1414aef73;
        uVar10 = *puVar12;
      }
    }
    local_2c8 = 1;
    FUN_140a41f04(plVar4,&local_2c0,uVar10,&local_2b0);
    plVar3 = local_2b8;
    if ((longlong *)(lVar9 + 0x340) != &local_2c0) {
      *(longlong *)(lVar9 + 0x340) = local_2c0;
      local_2c0 = 0;
      plVar4 = *(longlong **)(lVar9 + 0x348);
      if (local_2b8 != plVar4) {
        local_2b8 = (longlong *)0x0;
        *(longlong **)(lVar9 + 0x348) = plVar3;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar4 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
      }
    }
    plVar3 = local_2b8;
    if (local_2b8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_2b8 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_2b8)(local_2b8);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    local_2b0 = (longlong *)0x0;
    FUN_14076ba36();
    lVar15 = *(longlong *)(lVar9 + 0x340);
    if (lVar15 != 0) {
      local_2b0 = (longlong *)0x0;
      local_2a8 = 0;
      FUN_1446efa72(&local_2b0,0,3,0x10);
      local_2a8 = 3;
      *local_2b0 = (longlong)&PTR_LAB_14ac8b4c0;
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar13 == 0) {
        LOCK();
        UNLOCK();
        lVar13 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      local_2b0[2] = lVar13;
      *local_2b0 = (longlong)&PTR_FUN_14ac8d810;
      local_2b0[3] = lVar9;
      local_2b0[4] = (longlong)FUN_140bf6ebc;
      if ((local_2b0 == (longlong *)0x0) ||
         (cVar6 = (**(code **)(*local_2b0 + 0x30))(), cVar6 == '\0')) {
        if (local_2a8 != 0) {
          if (local_2b0 == (longlong *)0x0) goto LAB_1414aeeb0;
          (**(code **)*local_2b0)(local_2b0,0);
          FUN_1446efa72(&local_2b0,0,0,0x10);
          goto LAB_1414aee9a;
        }
      }
      else {
        plVar3 = (longlong *)(lVar15 + 0x130);
        if (*(int *)(lVar15 + 0x144) < 1) {
          iVar7 = *(int *)(lVar15 + 0x138);
          iVar8 = *(int *)(lVar15 + 0x140) + -1;
          *(int *)(lVar15 + 0x140) = iVar8;
          if (iVar8 <= iVar7) {
            iVar8 = iVar7;
            if (0 < iVar7) {
              iVar14 = 0;
              do {
                if (((*(int *)(*plVar3 + 8 + (longlong)iVar14 * 0x10) == 0) ||
                    (plVar4 = *(longlong **)(*plVar3 + (longlong)iVar14 * 0x10),
                    plVar4 == (longlong *)0x0)) ||
                   (cVar6 = (**(code **)(*plVar4 + 0x28))(), cVar6 != '\0')) {
                  FUN_14005b288(plVar3,iVar14);
                  FUN_14005b248(plVar3);
                }
                else {
                  iVar14 = iVar14 + 1;
                }
                iVar8 = *(int *)(lVar15 + 0x138);
              } while (iVar14 < iVar8);
            }
            iVar14 = 2;
            if (2 < iVar8 * 2) {
              iVar14 = iVar8 * 2;
            }
            *(int *)(lVar15 + 0x140) = iVar14;
            if ((iVar14 < iVar7) && (*(int *)(lVar15 + 0x13c) != iVar8)) {
              FUN_14045812c();
            }
          }
        }
        if ((local_2a8 != 0) && (local_2b0 != (longlong *)0x0)) {
          (**(code **)(*local_2b0 + 0x38))(local_2b0,&local_2c0);
        }
        iVar7 = *(int *)(lVar15 + 0x138);
        *(uint *)(lVar15 + 0x138) = iVar7 + 1U;
        if (*(uint *)(lVar15 + 0x13c) < iVar7 + 1U) {
          FUN_1447a71f6(plVar3,iVar7);
        }
        lVar9 = *plVar3;
        lVar15 = (longlong)iVar7 * 0x10;
        *(undefined8 *)(lVar9 + lVar15) = 0;
        *(undefined4 *)(lVar9 + 8 + lVar15) = 0;
        *(longlong **)(lVar9 + lVar15) = local_2b0;
        local_2b0 = (longlong *)0x0;
        *(int *)(lVar9 + 8 + lVar15) = local_2a8;
LAB_1414aee9a:
        local_2a8 = 0;
      }
      if (local_2b0 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1414aeeb0:
  LOCK();
  plVar3 = plVar11 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar11)(plVar11);
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
LAB_1414aeeba:
  if ((local_38 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414af05e FUN_1414af05e body=665 status=ok
// SIG undefined FUN_1414af05e(void)

void FUN_1414af05e(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  short sVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != (longlong *)0x0) {
    uVar1 = *(ushort *)(param_2 + 0xa7);
    iVar4 = (int)(short)uVar1;
    plVar5 = (longlong *)(param_1 + 0x470);
    if ((short)uVar1 < 0) {
      local_48 = 0;
      if ((longlong)*(int *)(param_1 + 0x478) != 0) {
        lVar8 = *(longlong *)(param_1 + 0x470);
        lVar9 = (longlong)*(int *)(param_1 + 0x478) << 3;
        iVar4 = 0;
        do {
          cVar3 = FUN_1458efc46(lVar8,&local_48);
          if (cVar3 != '\0') {
            if ((short)iVar4 != -1) goto LAB_1414af1b4;
            break;
          }
          lVar8 = lVar8 + 8;
          iVar4 = iVar4 + 1;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
      iVar4 = *(int *)(param_1 + 0x478);
      *(uint *)(param_1 + 0x478) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x47c) < iVar4 + 1U) {
        FUN_1461ed868(plVar5,iVar4);
      }
      *(undefined8 *)(*plVar5 + (longlong)iVar4 * 8) = 0;
LAB_1414af1b4:
      lVar8 = *plVar5;
      sVar7 = (short)iVar4;
      uVar2 = *(uint *)((longlong)param_2 + 0xc);
      *(uint *)(lVar8 + (longlong)sVar7 * 8) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar4 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar4 = *(int *)(lVar9 + 0x10);
        bVar11 = iVar4 == 0;
        if (bVar11) {
          *(int *)(lVar9 + 0x10) = iVar6;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar4 = iVar6;
        }
      }
      *(int *)(lVar8 + 4 + (longlong)sVar7 * 8) = iVar4;
      *(short *)(param_2 + 0xa7) = sVar7;
      (**(code **)(*param_2 + 0x7d8))(param_2);
    }
    else {
      lVar8 = (longlong)iVar4;
      if (iVar4 < *(int *)(param_1 + 0x478)) {
        lVar9 = *plVar5;
        iVar4 = *(int *)(lVar9 + 4 + (ulonglong)uVar1 * 8);
        if ((((iVar4 != 0) && (uVar2 = *(uint *)(lVar9 + lVar8 * 8), -1 < (int)uVar2)) &&
            ((int)uVar2 < DAT_14c9647dc)) &&
           (((plVar5 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar5 != (longlong *)0x0 && ((int)plVar5[2] == iVar4)) &&
            (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))))) goto LAB_1414af208;
      }
      else {
        FUN_14654efc4(plVar5,iVar4 + 1);
        lVar9 = *plVar5;
      }
      uVar2 = *(uint *)((longlong)param_2 + 0xc);
      *(uint *)(lVar9 + lVar8 * 8) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      iVar4 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar4 = *(int *)(lVar10 + 0x10);
        bVar11 = iVar4 == 0;
        if (bVar11) {
          *(int *)(lVar10 + 0x10) = iVar6;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar4 = iVar6;
        }
      }
      *(int *)(lVar9 + 4 + lVar8 * 8) = iVar4;
    }
  }
LAB_1414af208:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414af2f8 FUN_1414af2f8 body=444 status=ok
// SIG undefined FUN_1414af2f8(void)

void FUN_1414af2f8(longlong *param_1,char param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  
  lVar2 = *param_1;
  plVar13 = (longlong *)(lVar2 + 0x1a20);
  if (param_2 != '\0') {
    plVar13 = (longlong *)(lVar2 + 0x1a70);
  }
  iVar3 = (int)plVar13[5];
  if (iVar3 == 0) {
    uVar16 = 1;
    uVar10 = 0;
    iVar11 = 0;
    iVar4 = 0;
  }
  else {
    puVar8 = (uint *)plVar13[4];
    if ((uint *)plVar13[4] == (uint *)0x0) {
      puVar8 = (uint *)(plVar13 + 2);
    }
    uVar14 = *puVar8;
    if (uVar14 == 0) {
      iVar4 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar4 = iVar3 + -1;
      }
      uVar10 = 0;
      uVar16 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar16 = uVar10;
      }
      iVar11 = 0;
      do {
        if (uVar16 == uVar10) {
          return;
        }
        iVar11 = iVar11 + 0x20;
        uVar14 = puVar8[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar10 = 0;
      iVar11 = 0;
    }
    uVar16 = (ulonglong)(-uVar14 & uVar14);
    uVar1 = uVar16 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar4 = (iVar11 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 < iVar3) {
    uVar14 = 0xffffffff;
    do {
      lVar15 = (longlong)*(int *)(*plVar13 + 0x10 + (longlong)iVar4 * 0x20);
      if (lVar15 != 0) {
        lVar9 = *(longlong *)(*plVar13 + 8 + (longlong)iVar4 * 0x20);
        lVar12 = 0;
        do {
          if (*(longlong *)(lVar9 + lVar12) != 0) {
            FUN_140affd74(lVar2);
          }
          lVar12 = lVar12 + 8;
        } while (lVar15 * 8 != lVar12);
        iVar3 = (int)plVar13[5];
      }
      uVar14 = uVar14 & ~(uint)uVar16;
      puVar8 = (uint *)plVar13[4];
      if ((uint *)plVar13[4] == (uint *)0x0) {
        puVar8 = (uint *)(plVar13 + 2);
      }
      iVar4 = (int)uVar10;
      lVar15 = (longlong)iVar4;
      uVar5 = puVar8[lVar15] & uVar14;
      if (uVar5 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar6 <= iVar4) {
          return;
        }
        lVar9 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar5 = puVar8[lVar15 + lVar9 + 1];
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar7 - lVar15 == lVar9) {
            return;
          }
        }
        uVar10 = (ulonglong)(iVar4 + (int)lVar9 + 1);
        uVar14 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar16 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar4 = (iVar11 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar3);
  }
  return;
}



// FUNCTION 1414af4b4 FUN_1414af4b4 body=1639 status=ok
// SIG undefined FUN_1414af4b4(void)

void FUN_1414af4b4(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  char *local_120;
  undefined1 local_118;
  undefined1 local_110;
  undefined1 local_108;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong *local_e0;
  int local_d4;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_78;
  longlong local_70;
  undefined8 local_68;
  int local_60;
  undefined4 uStack_5c;
  char local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar8 = *(longlong *)(param_1 + 0x1a00);
  if ((lVar8 != 0) && (local_c0 = *(longlong *)(param_1 + 0x1700), local_c0 != 0)) {
    local_70 = lVar8 + 0x1140;
    local_78 = 0x100000000;
    local_68 = 0xffffffff;
    local_60 = 0;
    if (*(int *)(lVar8 + 0x1158) == 0) {
      uVar20 = 1;
      local_68._0_4_ = 0xffffffff;
      local_68._4_4_ = 0;
      local_78._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_78);
      uVar20 = local_78 >> 0x20;
    }
    lVar7 = local_70;
    if (local_68._4_4_ < *(int *)(local_70 + 0x18)) {
      local_e0 = (longlong *)(param_1 + 0x1a70);
      iVar19 = (int)local_78;
      uVar14 = (uint)local_68;
      iVar12 = local_68._4_4_;
      iVar17 = local_60;
      do {
        plVar1 = (longlong *)(*(longlong *)(lVar8 + 0x1130) + (longlong)iVar12 * 0xe0);
        lVar18 = *(longlong *)(lVar8 + 0x1130) + (longlong)iVar12 * 0xe0;
        local_49 = '\0';
        local_120 = &local_49;
        local_128 = (undefined8 *)CONCAT44(local_128._4_4_,*(undefined4 *)(local_c0 + 0x1d00));
        local_d4 = iVar17;
        FUN_140aff8e8(param_1,&local_78,plVar1,lVar18 + 8);
        if (local_49 == '\x01') {
          local_f0 = param_1;
          local_e8 = lVar8;
          if (*(int *)(param_1 + 0x1a78) != *(int *)(param_1 + 0x1aa4)) {
            lVar8 = *plVar1;
            uVar11 = (uint)((ulonglong)lVar8 >> 0x10);
            uVar15 = (uint)lVar8 & 0xffff;
            lVar16 = param_1 + 0x1aa8;
            if (*(longlong *)(param_1 + 0x1ab0) != 0) {
              lVar16 = *(longlong *)(param_1 + 0x1ab0);
            }
            iVar17 = *(int *)(lVar16 + (ulonglong)
                                       (*(int *)(param_1 + 0x1ab8) - 1U &
                                       (int)((ulonglong)lVar8 >> 0x20) +
                                       ((uint)lVar8 << 0x10 | uVar15) +
                                       (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar15 >> 4)) * 4);
            if (iVar17 != -1) {
LAB_1414af90d:
              lVar16 = *local_e0 + (longlong)iVar17 * 0x20;
              if (*(longlong *)(*local_e0 + (longlong)iVar17 * 0x20) != lVar8) goto LAB_1414afa91;
              if (lVar16 == 0) goto LAB_1414af6bd;
              lVar13 = 0;
              if (lVar16 != -8) {
                iVar17 = *(int *)(lVar16 + 0x10);
                if ((longlong)iVar17 != 0) {
                  local_f8 = *(longlong *)(lVar16 + 8);
                  lVar8 = 0;
                  lVar13 = 0;
                  do {
                    if (*(longlong **)(local_f8 + lVar8) != (longlong *)0x0) {
                      lVar13 = (**(code **)(**(longlong **)(local_f8 + lVar8) + 0xa28))();
                    }
                    lVar8 = lVar8 + 8;
                  } while ((longlong)iVar17 * 8 != lVar8);
                  goto LAB_1414af6bf;
                }
                goto LAB_1414af6bd;
              }
              goto LAB_1414af6bf;
            }
          }
LAB_1414af6bd:
          lVar13 = 0;
LAB_1414af6bf:
          local_f8 = lVar13;
          lVar8 = FUN_1402d1dc0(&local_78);
          if (lVar8 == 0) {
            lVar16 = 0;
          }
          else {
            lVar16 = FUN_1402d1dc0(&local_78);
          }
          lVar8 = local_e8;
          param_1 = local_f0;
          if (local_f8 != lVar16) {
            if (*(int *)(local_f0 + 0x1a78) != *(int *)(local_f0 + 0x1aa4)) {
              lVar8 = *plVar1;
              uVar11 = (uint)((ulonglong)lVar8 >> 0x10);
              uVar15 = (uint)lVar8 & 0xffff;
              lVar16 = local_f0 + 0x1aa8;
              if (*(longlong *)(local_f0 + 0x1ab0) != 0) {
                lVar16 = *(longlong *)(local_f0 + 0x1ab0);
              }
              iVar17 = *(int *)(lVar16 + (ulonglong)
                                         (*(int *)(local_f0 + 0x1ab8) - 1U &
                                         (int)((ulonglong)lVar8 >> 0x20) +
                                         ((uint)lVar8 << 0x10 | uVar15) +
                                         (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar15 >> 4)) * 4);
              if (iVar17 != -1) {
                do {
                  lVar16 = *local_e0 + (longlong)iVar17 * 0x20;
                  if (*(longlong *)(*local_e0 + (longlong)iVar17 * 0x20) == lVar8) {
                    if ((lVar16 + 8U & 0xfffffffffffffff7) != 0) {
                      local_f8 = (longlong)*(int *)(lVar16 + 0x10);
                      if (local_f8 != 0) {
                        lVar8 = *(longlong *)(lVar16 + 8);
                        local_f8 = local_f8 << 3;
                        lVar16 = 0;
                        do {
                          plVar10 = *(longlong **)(lVar8 + lVar16);
                          if ((plVar10 != (longlong *)0x0) &&
                             ((*(byte *)((longlong)plVar10 + 0x9e) & 0x10) != 0)) {
                            (**(code **)(*plVar10 + 0x2b0))();
                          }
                          lVar16 = lVar16 + 8;
                        } while (local_f8 != lVar16);
                        lVar8 = *plVar1;
                      }
                      FUN_14576fa84(local_e0,lVar8);
                    }
                    break;
                  }
                  iVar17 = *(int *)(lVar16 + 0x18);
                } while (iVar17 != -1);
              }
            }
            lVar8 = local_e8;
            param_1 = local_f0;
            lVar16 = FUN_1402d1dc0(&local_78);
            if ((lVar16 != 0) && ((longlong)*(int *)(lVar18 + 0x90) != 0)) {
              local_d0 = *(longlong *)(lVar18 + 0x88);
              local_c8 = (longlong)*(int *)(lVar18 + 0x90) << 5;
              lVar18 = 0;
              do {
                local_88 = DAT_14c846508;
                local_98 = DAT_14c8464f8;
                uStack_90 = DAT_14c846500;
                local_b8 = (undefined4)DAT_14c8464e0;
                uStack_b4 = DAT_14c8464e0._4_4_;
                uStack_b0 = (undefined4)DAT_14c8464e8;
                uStack_ac = DAT_14c8464e8._4_4_;
                local_a8 = DAT_14c8464f0;
                uVar4 = *(undefined8 *)(local_d0 + lVar18);
                uVar5 = *(undefined8 *)(param_1 + 0x428);
                uVar9 = FUN_1402d1dc0();
                local_110 = 0;
                local_118 = 0;
                local_128 = &local_98;
                local_108 = 1;
                local_120 = (char *)CONCAT44(local_120._4_4_,2);
                lVar8 = FUN_140a44468(uVar9,uVar5,uVar4,&local_b8);
                if (lVar8 != 0) {
                  local_f8 = lVar8;
                  FUN_140affd74(local_f0,lVar8);
                  lVar8 = *plVar1;
                  uVar11 = (uint)((ulonglong)lVar8 >> 0x10);
                  uVar15 = (uint)lVar8 & 0xffff;
                  plVar10 = (longlong *)
                            FUN_140affefe(local_e0,((uint)lVar8 << 0x10 | uVar15) +
                                                   (int)((ulonglong)lVar8 >> 0x20) +
                                                   (uVar11 << 0x13 | uVar11 & 0xffff) +
                                                   (uVar15 >> 4),plVar1);
                  if (DAT_14c950c29 == '\x01') {
                    FUN_1456cec3c(local_f8);
                  }
                  iVar17 = (int)plVar10[1];
                  *(uint *)(plVar10 + 1) = iVar17 + 1U;
                  if (*(uint *)((longlong)plVar10 + 0xc) < iVar17 + 1U) {
                    FUN_140affc12(plVar10,iVar17);
                  }
                  *(longlong *)(*plVar10 + (longlong)iVar17 * 8) = local_f8;
                  if (DAT_14c950c29 == '\x01') {
                    FUN_1456cec3c();
                  }
                }
                lVar18 = lVar18 + 0x20;
                lVar8 = local_e8;
                param_1 = local_f0;
              } while (local_c8 != lVar18);
            }
          }
        }
        if (CONCAT44(uStack_5c,local_60) != 0) {
          FUN_1400020a8();
        }
        uVar14 = uVar14 & ~(uint)uVar20;
        lVar18 = *(longlong *)(lVar7 + 0x10);
        if (*(longlong *)(lVar7 + 0x10) == 0) {
          lVar18 = lVar7;
        }
        iVar3 = *(int *)(lVar7 + 0x18);
        lVar16 = (longlong)iVar19;
        uVar11 = *(uint *)(lVar18 + lVar16 * 4) & uVar14;
        iVar17 = local_d4;
        if (uVar11 == 0) {
          iVar12 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar12 = iVar3 + -1;
          }
          iVar12 = iVar12 >> 5;
          iVar6 = iVar12;
          if (iVar12 < iVar19) {
            iVar6 = iVar19;
          }
          if (iVar12 <= iVar19) break;
          lVar13 = 0;
          while( true ) {
            iVar17 = iVar17 + 0x20;
            uVar11 = *(uint *)(lVar18 + lVar16 * 4 + 4 + lVar13 * 4);
            if (uVar11 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar6 - lVar16 == lVar13) goto LAB_1414af99c;
          }
          iVar19 = iVar19 + (int)lVar13 + 1;
          uVar14 = 0xffffffff;
        }
        uVar20 = (ulonglong)(-uVar11 & uVar11);
        uVar2 = uVar20 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar12 = (iVar17 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
      } while (iVar12 < iVar3);
    }
  }
LAB_1414af99c:
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1414afa91:
  iVar17 = *(int *)(lVar16 + 0x18);
  lVar13 = 0;
  if (iVar17 == -1) goto LAB_1414af6bf;
  goto LAB_1414af90d;
}



// FUNCTION 1414afb1c FUN_1414afb1c body=409 status=ok
// SIG undefined FUN_1414afb1c(void)

void FUN_1414afb1c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1 + -0x398;
  FUN_140bfc8e6();
  if ((*(char *)(param_1 + 0x895) == '\x01') || (*(float *)(param_2 + 0x84) < 0.0)) {
    if (*(longlong *)(param_2 + 0x78) == DAT_14cbc1898) {
      local_58 = FUN_14079f750();
      if ((local_58 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(local_58);
      }
      FUN_1406ca43a(lVar1,&local_50,&local_58);
      lVar3 = local_50;
      if ((longlong)local_48 != 0) {
        lVar7 = 0;
        do {
          lVar2 = *(longlong *)(lVar3 + lVar7);
          if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
            if (lVar2 != 0) goto LAB_1414afc5c;
            plVar6 = (longlong *)0x0;
          }
          else {
            FUN_1456cec3c(lVar2);
LAB_1414afc5c:
            uVar5 = FUN_14079f750();
            plVar6 = (longlong *)FUN_144718840(lVar2,uVar5);
          }
          (**(code **)(*plVar6 + 0x68))();
          lVar7 = lVar7 + 8;
        } while ((longlong)local_48 * 8 != lVar7);
      }
      if (local_50 != 0) {
        FUN_1400020a8(local_50);
      }
    }
  }
  else {
    FUN_1414afcb6(lVar1);
  }
  if (*(longlong *)(param_2 + 0x68) == DAT_14cbc18a0) {
    FUN_140c822cc(lVar1);
    FUN_140dd0a3e(lVar1);
  }
  cVar4 = FUN_140c8232a(lVar1);
  uVar5 = (**(code **)(*(longlong *)(param_1 + 0xd0) + 0x10))(param_1 + 0xd0);
  FUN_140a82c6c(uVar5,&DAT_14cbc1890,
                CONCAT71((int7)((ulonglong)param_2 >> 8),cVar4 == '\x02') & 0xffffffff,1);
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414afcb6 FUN_1414afcb6 body=272 status=ok
// SIG undefined FUN_1414afcb6(void)

void FUN_1414afcb6(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = FUN_140c8232a();
  if (cVar3 == '\x02') {
    local_48 = FUN_14079f750();
    if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_48);
    }
    FUN_1406ca43a(param_1,&local_40,&local_48);
    lVar2 = local_40;
    if ((longlong)local_38 != 0) {
      lVar6 = 0;
      do {
        lVar1 = *(longlong *)(lVar2 + lVar6);
        if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
          if (lVar1 != 0) goto LAB_1414afd67;
        }
        else {
          FUN_1456cec3c(lVar1);
LAB_1414afd67:
          uVar4 = FUN_14079f750();
          plVar5 = (longlong *)FUN_144718840(lVar1,uVar4);
          if (plVar5 != (longlong *)0x0 && lVar1 != 0) {
            (**(code **)(*plVar5 + 0x58))(plVar5,1);
            (**(code **)(*plVar5 + 0x30))(plVar5);
          }
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)local_38 * 8 != lVar6);
    }
    if (local_40 != 0) {
      FUN_1400020a8(local_40);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414afdc8 FUN_1414afdc8 body=63 status=ok
// SIG undefined FUN_1414afdc8(void)

ulonglong FUN_1414afdc8(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x38))();
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else if (*param_3 == 0) {
    bVar1 = 0;
  }
  else {
    param_1 = (longlong *)(lVar2 + 0x48);
    bVar1 = FUN_14480f766(param_1);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 1414afe08 FUN_1414afe08 body=189 status=ok
// SIG undefined FUN_1414afe08(void)

void FUN_1414afe08(longlong param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((((param_3 & 1) != 0) && (*(longlong *)(param_1 + 0x40) != 0)) && (param_2 != 0)) &&
     (*(int *)(param_1 + 0x30) == 0)) {
    lVar1 = FUN_140227782();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      if (*(char *)(param_1 + 0x3c) == '\0') {
        FUN_1414afec6(param_1 + 0x40,local_30);
        FUN_145ae3bfc(param_2,local_30);
      }
      else if (*(char *)(param_1 + 0x3c) == '\x01') {
        FUN_145ae3c82(param_1 + 0x40,local_40);
        FUN_145ae3cd6(param_2,local_40);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414afec6 FUN_1414afec6 body=83 status=ok
// SIG undefined FUN_1414afec6(void)

longlong * FUN_1414afec6(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_14099aa66();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1414aff1a FUN_1414aff1a body=85 status=ok
// SIG undefined FUN_1414aff1a(void)

void FUN_1414aff1a(undefined8 param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  
  if (param_2 != 0 && (param_3 & 1) != 0) {
    lVar1 = FUN_1402566a4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_1414aff70(param_2,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1414aff70 FUN_1414aff70 body=377 status=ok
// SIG undefined FUN_1414aff70(void)

void FUN_1414aff70(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  
  if ((param_2 != 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
    iVar2 = *(int *)(param_2 + 0x38);
    if (((longlong)iVar2 != 0) &&
       ((iVar3 = *(int *)(param_2 + 0x40), iVar3 != 0 && (iVar2 <= iVar3)))) {
      lVar9 = *(longlong *)(param_2 + 0x30);
      lVar11 = (longlong)iVar2 * 0x20 + lVar9;
      plVar1 = (longlong *)(param_1 + 0x910);
      do {
        uVar8 = FUN_1401cd3fa(lVar9);
        iVar12 = *(int *)(param_1 + 0x918);
        lVar14 = (longlong)iVar12;
        *(uint *)(param_1 + 0x918) = iVar12 + 1U;
        if (*(uint *)(param_1 + 0x91c) < iVar12 + 1U) {
          FUN_14662afb2(plVar1,iVar12);
        }
        lVar4 = *plVar1;
        uVar5 = *(undefined8 *)(lVar9 + 0x18);
        *(undefined8 *)(lVar4 + lVar14 * 0x18) = uVar8;
        *(undefined8 *)(lVar4 + 8 + lVar14 * 0x18) = uVar5;
        *(undefined4 *)(lVar4 + 0x10 + lVar14 * 0x18) = 0;
        lVar9 = lVar9 + 0x20;
      } while (lVar9 != lVar11);
      iVar12 = 0;
      if (1 < iVar2) {
        iVar13 = iVar3 - iVar2;
        lVar9 = 0;
        iVar12 = 0;
        do {
          iVar10 = iVar13 - iVar12;
          iVar7 = 1;
          if (1 < iVar10 + 1) {
            uVar6 = rand();
            iVar7 = (int)((float)(iVar10 + 1) * ((float)(uVar6 & 0x7fff) / 32767.0));
            if (iVar10 <= iVar7) {
              iVar7 = iVar10;
            }
            iVar7 = iVar7 + 1;
          }
          iVar12 = iVar12 + iVar7;
          *(int *)(*plVar1 + 0x10 + lVar9) = iVar7;
          lVar9 = lVar9 + 0x18;
          iVar13 = iVar13 + 1;
        } while ((ulonglong)(iVar2 - 1) * 0x18 != lVar9);
      }
      *(int *)(*(longlong *)(param_1 + 0x910) + -8 + (longlong)*(int *)(param_1 + 0x918) * 0x18) =
           iVar3 - iVar12;
    }
  }
  return;
}



// FUNCTION 1414b00ea FUN_1414b00ea body=64 status=ok
// SIG undefined FUN_1414b00ea(void)

void FUN_1414b00ea(void)

{
  undefined8 uVar1;
  
  if (DAT_14c8407a8 != 0) {
    return;
  }
  uVar1 = FUN_14001cc68(0x1a0,0x10);
  FUN_14626990e(uVar1);
  DAT_14c8407a8 = uVar1;
  FUN_14275359b();
  return;
}



// FUNCTION 1414b012a FUN_1414b012a body=195 status=ok
// SIG undefined FUN_1414b012a(void)

int FUN_1414b012a(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_1414b016c:
      lVar10 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_1414b01e5;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1414b01e5;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1414b01cf;
    }
  }
  return -1;
LAB_1414b01e5:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1414b01cf:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1414b016c;
}



// FUNCTION 1414b01ee FUN_1414b01ee body=719 status=ok
// SIG undefined FUN_1414b01ee(void)

void FUN_1414b01ee(undefined8 *param_1,longlong param_2)

{
  void *_Src;
  undefined2 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  undefined2 *puVar9;
  float fVar10;
  undefined1 auStack_98 [32];
  uint local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = param_1[1];
  uVar6 = *(uint *)(param_2 + 0xb8);
  if ((int)uVar6 < 2) {
    FUN_1400021e4(param_2,&local_50);
  }
  else {
    local_50 = (undefined2 *)0x0;
    _Src = *(void **)(param_2 + 0xb0);
    local_48 = uVar6;
    FUN_1446dd670(&local_50,(ulonglong)uVar6,0);
    memcpy(local_50,_Src,(ulonglong)uVar6 * 2);
  }
  puVar1 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar1 = local_50;
  }
  local_60 = *(undefined2 **)(*(longlong *)*param_1 + 0x18);
  FUN_1400021e4(&local_60,&local_70);
  puVar9 = &DAT_149dfb77a;
  if (local_68 != 0) {
    puVar9 = local_70;
  }
  FUN_140002266(&local_60,L"gbx.LoadingRange.%s.%s",puVar9,puVar1);
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar5 = 0;
  iVar4 = local_58 + -1;
  if (local_58 == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    puVar1 = local_60;
    if (local_58 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    lVar7 = 0;
    uVar5 = 0;
    do {
      uVar6 = ((uint)(0x19 < (ushort)puVar1[lVar7] - 0x61) * 0x20 + (uint)(ushort)puVar1[lVar7]) -
              0x20;
      uVar8 = (uint)(uVar5 >> 8) ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar5 ^ uVar6) & 0xff) * 4);
      uVar5 = (ulonglong)
              (uVar8 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar8 & 0xff ^ uVar6 >> 8 & 0xff) * 4));
      lVar7 = lVar7 + 1;
    } while (iVar4 != (int)lVar7);
  }
  iVar4 = FUN_1414b012a((longlong *)(lVar2 + 0x30),uVar5,&local_60);
  if ((iVar4 != -1) &&
     (lVar2 = (longlong)iVar4 * 0x20 + *(longlong *)(lVar2 + 0x30),
     puVar3 = (undefined8 *)(lVar2 + 0x10), puVar3 != (undefined8 *)0x0 && lVar2 != 0)) {
    fVar10 = (float)(**(code **)(*(longlong *)*puVar3 + 0xb8))();
    local_78 = (uint)(0 < DAT_14c75f7d4);
    FUN_140002266(&local_70,
                  L"wp.Runtime.OverrideRuntimeSpatialHashLoadingRange -grid=%u -range=%f -serverexec=%i"
                  ,*(undefined4 *)param_1[2],(double)(fVar10 * *(float *)(param_2 + 0x24)));
    lVar2 = DAT_14cb0d2b0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
      FUN_1459825b0(&DAT_14c872ee0);
      atexit(FUN_1427868a5);
      _Init_thread_footer(&DAT_14c872ef8);
    }
    puVar1 = local_70;
    if (local_68 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    (**(code **)(*(longlong *)(lVar2 + 0x28) + 8))
              ((longlong *)(lVar2 + 0x28),*(undefined8 *)*param_1,puVar1,&DAT_14c872ee0);
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  *(int *)param_1[2] = *(int *)param_1[2] + 1;
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414b04be FUN_1414b04be body=477 status=ok
// SIG undefined FUN_1414b04be(void)

void FUN_1414b04be(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0x20;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414b069c FUN_1414b069c body=427 status=ok
// SIG undefined FUN_1414b069c(void)

void FUN_1414b069c(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_1446f4a44(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1447711aa(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x20 + lVar2 + -0x1c);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -8;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 1414b0848 FUN_1414b0848 body=323 status=ok
// SIG undefined FUN_1414b0848(void)

longlong FUN_1414b0848(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x558);
  if (lVar3 != 0) goto LAB_1414b086a;
  plVar4 = (longlong *)FUN_14001cc68(0x130,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b9717a0;
  plVar5 = plVar4 + 2;
  FUN_145ae6110(plVar5,param_1);
  local_30 = plVar5;
  local_28 = plVar4;
  FUN_145ae6070(&local_30,plVar5);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x558) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x560);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x560) = 0;
LAB_1414b093b:
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x0001414b0966:
        if (iVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x558) = plVar5;
    plVar5 = *(longlong **)(param_1 + 0x560);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar5 = plVar4;
        goto joined_r0x0001414b0966;
      }
    }
    else {
      *(longlong **)(param_1 + 0x560) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_1414b093b;
    }
  }
  plVar5 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x558);
LAB_1414b086a:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414b098c FUN_1414b098c body=2815 status=ok
// SIG undefined FUN_1414b098c(void)

void FUN_1414b098c(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  char param_5)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  uint uVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 *puVar18;
  int iVar19;
  bool bVar20;
  undefined1 auStack_188 [32];
  undefined8 **local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined8 local_150;
  wchar_t *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  code **local_130;
  undefined1 *local_128;
  code *local_120;
  char local_115;
  undefined4 local_114;
  code *local_110;
  undefined8 *local_108;
  longlong local_100;
  longlong local_f8;
  undefined8 *local_f0;
  int local_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  int local_d0;
  longlong local_c0;
  code *local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_f8 = param_3;
  if (((((*(int *)(param_1 + 0x14) == 0) || (uVar14 = *(uint *)(param_1 + 0x10), (int)uVar14 < 0))
       || (DAT_14c9647dc <= (int)uVar14)) ||
      ((plVar15 = (longlong *)
                  ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
       plVar15 == (longlong *)0x0 || ((int)plVar15[2] != *(int *)(param_1 + 0x14))))) ||
     ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)) goto LAB_1414b0a06;
  if ((*(uint *)(plVar15 + 1) & 0x10200000) == 0) {
    lVar17 = *plVar15;
  }
  else {
    lVar17 = 0;
  }
  if ((*(longlong *)(lVar17 + 0x30) == 0) ||
     (lVar17 = *(longlong *)(*(longlong *)(lVar17 + 0x30) + 0x360), lVar17 == 0))
  goto LAB_1414b0a06;
  FUN_1410d53f0(&local_b8,lVar17);
  plVar15 = (longlong *)CONCAT44(uStack_ac,local_b0);
  if (plVar15 == (longlong *)0x0) goto LAB_1414b0a06;
  iVar4 = (int)plVar15[1];
  do {
    if (iVar4 == 0) {
      plVar15 = (longlong *)0x0;
      break;
    }
    LOCK();
    iVar19 = (int)plVar15[1];
    bVar20 = iVar4 == iVar19;
    if (bVar20) {
      *(int *)(plVar15 + 1) = iVar4 + 1;
      iVar19 = iVar4;
    }
    iVar4 = iVar19;
    UNLOCK();
  } while (!bVar20);
  LOCK();
  piVar1 = (int *)((longlong)CONCAT44(uStack_ac,local_b0) + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*(longlong *)CONCAT44(uStack_ac,local_b0) + 0x10))();
  }
  if (plVar15 == (longlong *)0x0) goto LAB_1414b0a06;
  local_110 = local_b8;
  if (local_b8 != (code *)0x0) {
    if (*(int *)(param_1 + 0x14) == 0) {
LAB_1414b0e42:
      plVar13 = (longlong *)0x0;
    }
    else {
      uVar14 = *(uint *)(param_1 + 0x10);
      plVar13 = (longlong *)0x0;
      if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c9647dc)) {
        puVar12 = (undefined8 *)
                  ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
        if ((puVar12 == (undefined8 *)0x0) ||
           ((*(int *)(puVar12 + 2) != *(int *)(param_1 + 0x14) ||
            ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_1414b0e42;
        plVar13 = (longlong *)*puVar12;
      }
    }
    local_115 = (**(code **)(*plVar13 + 0x498))();
    if (*(int *)(param_1 + 0x14) == 0) {
LAB_1414b0e49:
      plVar13 = (longlong *)0x0;
    }
    else {
      uVar14 = *(uint *)(param_1 + 0x10);
      plVar13 = (longlong *)0x0;
      if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c9647dc)) {
        puVar12 = (undefined8 *)
                  ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
        if ((puVar12 == (undefined8 *)0x0) ||
           ((*(int *)(puVar12 + 2) != *(int *)(param_1 + 0x14) ||
            ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_1414b0e49;
        plVar13 = (longlong *)*puVar12;
      }
    }
    uVar8 = (**(code **)(*plVar13 + 0x498))();
    if ((((param_5 == '\0') && (local_115 == '\x05')) && ((char)uVar8 != '\x03')) &&
       (*(char *)(lVar17 + 0x152) != '\x03')) {
      local_114 = 0;
    }
    else {
      local_114 = (undefined4)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
    }
    lVar11 = *(longlong *)(param_1 + 0x108);
    *(longlong *)(param_1 + 0x108) = local_f8;
    lVar10 = DAT_14cbca428;
    local_100 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar4 = *(int *)(local_100 + 0xc60);
    if (iVar4 == 0x40000002) {
      uVar9 = 0;
    }
    else {
      bVar20 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar4 != 2)) {
        if (iVar4 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          bVar20 = DVar6 == DVar7;
        }
        else {
          bVar20 = false;
        }
      }
      uVar9 = (ulonglong)(bVar20 ^ 1);
    }
    if (*(char *)(lVar10 + uVar9) == '\x01') {
      if (local_f8 != lVar11) {
LAB_1414b0d59:
        if (*(int *)(param_1 + 0x14) == 0) {
LAB_1414b0f61:
          lVar11 = 0;
        }
        else {
          uVar14 = *(uint *)(param_1 + 0x10);
          lVar11 = 0;
          if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c9647dc)) {
            plVar13 = (longlong *)
                      ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
            if ((plVar13 == (longlong *)0x0) ||
               (((int)plVar13[2] != *(int *)(param_1 + 0x14) ||
                ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_1414b0f61;
            lVar11 = *plVar13;
          }
        }
        lVar11 = *(longlong *)(lVar11 + 0x48);
        if (lVar11 != 0) {
          lVar10 = FUN_140b6d0be();
          if ((((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) &&
              (cVar3 = FUN_14127c006(lVar11), cVar3 != '\0')) &&
             (*(longlong *)(lVar11 + 0x598) != 0)) {
            FUN_145a1f016(*(longlong *)(lVar11 + 0x598),&local_f8);
          }
        }
        if ((local_f8 != 0) && (lVar11 = FUN_14050aea0(&local_f8), lVar11 != 0)) {
          FUN_1460cffe0(param_1,lVar17);
          local_108 = (undefined8 *)(param_1 + 0x100);
          lVar10 = *(longlong *)(param_1 + 0x100);
          if (lVar10 != 0) {
            if (*(longlong *)(lVar17 + 0x1f0) == 0) {
              plVar13 = (longlong *)(lVar17 + 0x458);
            }
            else {
              plVar13 = (longlong *)(*(longlong *)(lVar17 + 0x1f0) + 0xf0);
            }
            lVar2 = *plVar13;
            uVar14 = (uint)lVar10;
            if ((int)(uVar14 & 0xffffff) < *(int *)(lVar2 + 0x10)) {
              lVar16 = lVar2 + 0x18;
              if (*(longlong *)(lVar2 + 0x28) != 0) {
                lVar16 = *(longlong *)(lVar2 + 0x28);
              }
              if ((*(uint *)(lVar16 + (ulonglong)((uVar14 & 0xffffff) >> 5) * 4) >> (uVar14 & 0x1f)
                  & 1) != 0) {
                lVar2 = *(longlong *)(lVar2 + 8);
                lVar16 = (ulonglong)(uVar14 & 0xffffff) * 0x70;
                if (((lVar2 + lVar16 != 0) && (*(longlong *)(lVar2 + 0x60 + lVar16) == lVar10)) &&
                   (*(char *)(lVar2 + 1 + lVar16) != '\x04')) {
                  FUN_1405a424c();
                }
              }
            }
            *local_108 = 0;
          }
          piVar1 = (int *)(local_100 + 0xc60);
          cVar3 = FUN_1413eb406(local_110,lVar11);
          lVar10 = DAT_14cbca428;
          if (cVar3 == '\0') {
            iVar4 = *piVar1;
            if (iVar4 == 0x40000002) {
              uVar9 = 0;
            }
            else {
              bVar20 = true;
              if ((DAT_14c86a9f8 == '\x01') && (iVar4 != 2)) {
                if (iVar4 == 1) {
                  uVar5 = FUN_140ad26c0();
                  local_110 = (code *)CONCAT44(local_110._4_4_,uVar5);
                  DVar6 = GetCurrentThreadId();
                  bVar20 = (DWORD)local_110 == DVar6;
                }
                else {
                  bVar20 = false;
                }
              }
              uVar9 = (ulonglong)(bVar20 ^ 1);
            }
            if (*(char *)(lVar10 + uVar9) == '\0') goto LAB_1414b104c;
            if (local_115 == '\x05') {
              if ((param_2 != 0) && (lVar17 = *(longlong *)(param_2 + 0x398), lVar17 != 0)) {
                if (DAT_14cbae3d8 == 0) {
                  local_b8 = FUN_141030f22;
                  local_120 = FUN_14081d0ea;
                  local_128 = &LAB_1464f5fc4;
                  local_138 = &LAB_148c3dd26;
                  local_140 = &LAB_1459673ba;
                  local_148 = L"Engine";
                  local_150 = 0;
                  local_158 = 0x10000004;
                  local_160 = 0x10;
                  local_168 = (undefined8 **)CONCAT44(local_168._4_4_,0x1360);
                  local_130 = &local_b8;
                  FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
                  lVar17 = *(longlong *)(param_2 + 0x398);
                  if (lVar17 == 0) goto LAB_1414b0fee;
                }
                if ((((DAT_14cbae3d8 != 0) && (lVar10 = *(longlong *)(lVar17 + 0x10), lVar10 != 0))
                    && (*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
                   ((*(longlong *)
                      (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8)
                     == DAT_14cbae3d8 + 0x30 && (*(char *)(lVar17 + 0x6b0) != '\0'))))
                goto LAB_1414b1053;
              }
LAB_1414b0fee:
              if (*(int *)(param_1 + 0x14) == 0) {
LAB_1414b1305:
                uVar8 = 0;
              }
              else {
                uVar14 = *(uint *)(param_1 + 0x10);
                uVar8 = 0;
                if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c9647dc)) {
                  puVar12 = (undefined8 *)
                            ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
                  if ((puVar12 == (undefined8 *)0x0) ||
                     ((*(int *)(puVar12 + 2) != *(int *)(param_1 + 0x14) ||
                      ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_1414b1305;
                  uVar8 = *puVar12;
                }
              }
              FUN_14572f778(uVar8,lVar11);
            }
          }
          else {
LAB_1414b104c:
            lVar11 = DAT_14cbca490;
            if ((char)local_114 == '\0') {
              iVar4 = *piVar1;
              if (iVar4 == 0x40000002) {
                uVar9 = 0;
              }
              else {
                bVar20 = true;
                if ((DAT_14c86a9f8 == '\x01') && (iVar4 != 2)) {
                  if (iVar4 == 1) {
                    DVar6 = FUN_140ad26c0();
                    DVar7 = GetCurrentThreadId();
                    bVar20 = DVar6 == DVar7;
                  }
                  else {
                    bVar20 = false;
                  }
                }
                uVar9 = (ulonglong)(bVar20 ^ 1);
              }
              uVar5 = *(undefined4 *)(lVar11 + uVar9 * 4);
              if (*(int *)(param_1 + 0x14) == 0) {
LAB_1414b12f6:
                uVar8 = 0;
              }
              else {
                uVar14 = *(uint *)(param_1 + 0x10);
                uVar8 = 0;
                if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c9647dc)) {
                  puVar12 = (undefined8 *)
                            ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
                  if ((puVar12 == (undefined8 *)0x0) ||
                     ((*(int *)(puVar12 + 2) != *(int *)(param_1 + 0x14) ||
                      ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_1414b12f6;
                  uVar8 = *puVar12;
                }
              }
              FUN_148d319c0(uVar8);
              if (*(longlong *)(lVar17 + 0x1f0) == 0) {
                puVar12 = (undefined8 *)(lVar17 + 0x458);
              }
              else {
                puVar12 = (undefined8 *)(*(longlong *)(lVar17 + 0x1f0) + 0xf0);
              }
              uVar8 = *puVar12;
              if (*(int *)(param_1 + 0x14) == 0) {
LAB_1414b12fd:
                lVar17 = 0;
              }
              else {
                uVar14 = *(uint *)(param_1 + 0x10);
                lVar17 = 0;
                if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c9647dc)) {
                  plVar13 = (longlong *)
                            ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
                  if ((plVar13 == (longlong *)0x0) ||
                     (((int)plVar13[2] != *(int *)(param_1 + 0x14) ||
                      ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_1414b12fd;
                  lVar17 = *plVar13;
                }
              }
              local_d8 = (undefined8 *)0x0;
              local_d0 = 0;
              FUN_1446efa72(&local_d8,0,3,0x10);
              puVar12 = local_d8;
              local_d0 = 3;
              *local_d8 = &PTR_LAB_14a1c8830;
              LOCK();
              UNLOCK();
              lVar10 = DAT_14c758608 + 1;
              lVar11 = DAT_14c758608 + 1;
              if (lVar10 == 0) {
                LOCK();
                UNLOCK();
                lVar10 = DAT_14c758608 + 2;
                lVar11 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar11;
              local_d8[2] = lVar10;
              *local_d8 = &PTR_FUN_14b971aa0;
              local_d8[3] = 0;
              iVar4 = 0;
              if (lVar17 != 0) {
                uVar14 = *(uint *)(lVar17 + 0xc);
                *(uint *)(local_d8 + 3) = uVar14;
                if ((int)uVar14 < DAT_14c9647dc) {
                  lVar17 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
                }
                else {
                  lVar17 = 0;
                }
                iVar4 = *(int *)(lVar17 + 0x10);
                if (*(int *)(lVar17 + 0x10) == 0) {
                  LOCK();
                  iVar4 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar19 = DAT_14c964868 + 1;
                  bVar20 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar4;
                  if (bVar20) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar19);
                  }
                  LOCK();
                  iVar4 = *(int *)(lVar17 + 0x10);
                  bVar20 = iVar4 == 0;
                  if (bVar20) {
                    *(int *)(lVar17 + 0x10) = iVar19;
                    iVar4 = 0;
                  }
                  UNLOCK();
                  if (bVar20) {
                    iVar4 = iVar19;
                  }
                }
              }
              *(int *)((longlong)puVar12 + 0x1c) = iVar4;
              puVar12[4] = param_1;
              local_b8 = (code *)0x0;
              local_b0 = 0;
              FUN_14487d8d8(&local_b8,&local_d8);
              local_78 = 1;
              local_168 = &local_f0;
              local_f0 = (undefined8 *)(CONCAT44(uVar5,(int)local_f0) & 0xffffffffffff0000);
              FUN_1406f4044(uVar8,local_108,&local_b8,0x3dcccccd);
              (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
              if (local_d0 != 0) {
                if (local_d8 == (undefined8 *)0x0) goto LAB_1414b1053;
                (**(code **)*local_d8)(local_d8,0);
                FUN_1446efa72(&local_d8,0,0,0x10);
                local_d0 = 0;
              }
              if (local_d8 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
          }
LAB_1414b1053:
          *(undefined1 *)(param_1 + 0x118) = 1;
        }
      }
    }
    else {
      local_f0 = (undefined8 *)0x0;
      local_e8 = 0x6000;
      local_e0 = 0;
      local_168 = &local_d8;
      local_c0 = lVar11;
      cVar3 = FUN_14145082c(local_110,&local_c0,&local_f0,&local_b8);
      puVar12 = (undefined8 *)0x0;
      iVar4 = 0x6000;
      if (cVar3 != '\0') {
        puVar12 = local_f0;
        iVar4 = local_e8;
      }
      local_c0 = *(longlong *)(param_1 + 0x108);
      local_f0 = (undefined8 *)0x0;
      local_e8 = 0x6000;
      local_e0 = 0;
      local_168 = &local_d8;
      cVar3 = FUN_14145082c();
      puVar18 = (undefined8 *)0x0;
      iVar19 = 0x6000;
      if (cVar3 != '\0') {
        puVar18 = local_f0;
        iVar19 = local_e8;
      }
      if ((puVar12 != puVar18) || (iVar4 != iVar19)) goto LAB_1414b0d59;
    }
  }
  LOCK();
  plVar13 = plVar15 + 1;
  *(int *)plVar13 = (int)*plVar13 + -1;
  UNLOCK();
  if ((int)*plVar13 == 0) {
    (**(code **)*plVar15)(plVar15);
    LOCK();
    piVar1 = (int *)((longlong)plVar15 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
LAB_1414b0a06:
  if ((local_60 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414b148c FUN_1414b148c body=386 status=ok
// SIG undefined FUN_1414b148c(void)

void FUN_1414b148c(longlong *param_1,undefined8 param_2)

{
  size_t sVar1;
  uint uVar2;
  longlong lVar3;
  wchar_t *_Str;
  undefined1 auStack_128 [32];
  longlong *local_108;
  longlong local_100;
  longlong local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar3 = (longlong)param_1 + 0x14;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      goto LAB_1414b159a;
    }
  }
  local_60 = (undefined1 *)0x0;
  local_f0 = lVar3;
  local_e8 = param_2;
  sVar1 = wcslen(_Str);
  local_50 = FUN_14475aa65(0,_Str,sVar1 & 0xffffffff);
  uVar2 = local_50 + 1;
  local_58 = (undefined1 *)0x0;
  if (0x80 < uVar2) {
    FUN_1446efa72(&local_60,0,uVar2,1);
    local_58 = local_60;
  }
  if (local_58 == (undefined1 *)0x0) {
    local_58 = local_e0;
  }
  FUN_14475a98a(local_58,uVar2,_Str,(int)sVar1 + 1);
  param_2 = local_e8;
  lVar3 = local_f0;
LAB_1414b159a:
  local_108 = param_1 + 3;
  local_100 = (longlong)param_1 + 0x1c;
  FUN_148e97da0(param_2,local_58,param_1 + 2,lVar3);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414b1610 FUN_1414b1610 body=107 status=ok
// SIG undefined FUN_1414b1610(void)

void FUN_1414b1610(longlong *param_1,undefined4 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *(undefined8 *)(param_2 + 4);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_20 = param_3;
  uVar1 = FUN_14477b072(local_38,DAT_14cad39e8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_38);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414b167c FUN_1414b167c body=830 status=ok
// SIG undefined FUN_1414b167c(void)

void FUN_1414b167c(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 auStack_148 [40];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong local_f8;
  longlong *local_f0 [2];
  longlong *local_e0 [2];
  ulonglong local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  wchar_t **local_78;
  ulonglong *local_70;
  longlong local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  longlong *local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (((*(byte *)(param_1 + 0x84) & 4) == 0) && ((char)param_1[0x2f] != '\x03')) {
    local_c8 = &DAT_14a492018;
    local_c0 = (undefined *)CONCAT35(local_c0._5_3_,3);
    uVar5 = FUN_14001a6c0(&local_c8,1);
    local_d0 = (ulonglong)uVar5;
    FUN_14276766e(&local_c8);
    local_f8 = param_1[3];
    FUN_145715fae(local_f0);
    local_58 = L"ControllerPossessAuthorityOnly";
    local_50 = 0x1e;
    FUN_1446e940c(local_11c,&local_58);
    local_58 = L"Controller";
    local_50 = 10;
    FUN_1446e940c(local_120,&local_58);
    local_58 = L"Possess function should only be used by the network authority for {0}";
    local_50 = 0x45;
    FUN_140208c1e(local_118,local_120,local_11c,&local_58);
    FUN_14023409e(&local_108,local_118,1);
    local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
    FUN_14023423e(local_48,local_f0);
    local_70 = &local_38;
    local_78 = &local_58;
    FUN_14010d304(&local_68);
    local_88 = local_108;
    local_80 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_e0,&local_88,&local_68);
    FUN_14007f2db(local_68,local_60);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_48[0] != (longlong *)0x0) {
      (**(code **)(*local_48[0] + 0x10))();
    }
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_100 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar2 = (int *)((longlong)local_100 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_100 + 0x10))(local_100);
        }
      }
    }
    if (local_f0[0] != (longlong *)0x0) {
      (**(code **)(*local_f0[0] + 0x10))();
    }
    FUN_1427679d4(&local_c8,local_98,local_e0);
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_90 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar2 = (int *)((longlong)local_90 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_90 + 0x10))(local_90);
        }
      }
    }
    if (local_e0[0] != (longlong *)0x0) {
      (**(code **)(*local_e0[0] + 0x10))();
    }
    if (local_118[0] != (longlong *)0x0) {
      (**(code **)(*local_118[0] + 0x10))();
    }
    FUN_1427678c0(&local_c8);
  }
  else {
    puVar3 = (undefined *)param_1[0x7a];
    if (puVar3 == (undefined *)0x0) {
      bVar7 = false;
    }
    else {
      bVar7 = *(longlong *)(puVar3 + 0x3c0) == 0;
    }
    (**(code **)(*param_1 + 0x6e8))(param_1);
    puVar4 = (undefined *)param_1[0x7a];
    if (!(bool)(~bVar7 & puVar4 == puVar3)) {
      local_c8 = puVar4;
      uVar6 = FUN_14477b072(param_1,DAT_14cad3a78);
      (**(code **)(*param_1 + 0x248))(param_1,uVar6,&local_c8);
      FUN_140c1abcc(param_1 + 0x7e,puVar4);
      local_c8 = puVar3;
      if (bVar7) {
        local_c8 = (undefined *)0x0;
      }
      local_c0 = puVar4;
      FUN_1447cd2ec(param_1 + 0x77,&local_c8);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414b19bc FUN_1414b19bc body=164 status=ok
// SIG undefined FUN_1414b19bc(void)

void FUN_1414b19bc(longlong param_1,byte param_2)

{
  byte bVar1;
  longlong lVar2;
  
  bVar1 = *(byte *)(*(longlong *)(&DAT_00001ce8 + param_1) + 0x550);
  FUN_1414b1a60();
  if ((((bVar1 ^ *(byte *)(*(longlong *)(&DAT_00001ce8 + param_1) + 0x550)) & 2) == 0 &
      (param_2 ^ 1)) == 0) {
    if (param_2 == 0) {
      FUN_14483674a(param_1 + 0x1288);
    }
    if ((longlong)*(int *)(param_1 + 0x41a0) != 0) {
      lVar2 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0x4198) + 8 + lVar2) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x4198) + lVar2) != 0)) {
          FUN_1404f44a8(param_1 + 0x4198,param_1);
          return;
        }
        lVar2 = lVar2 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x41a0) * 0x10 != lVar2);
    }
  }
  return;
}



// FUNCTION 1414b1a60 FUN_1414b1a60 body=3824 status=ok
// SIG undefined FUN_1414b1a60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1414b1a60(longlong *param_1,char param_2)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [32];
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  double dVar12;
  double dVar13;
  char cVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  undefined1 auStack_3b8 [32];
  double *local_398;
  ulonglong *local_390;
  undefined8 *local_388;
  ulonglong *local_380;
  wchar_t *local_378;
  code *local_370;
  undefined1 *local_368;
  undefined8 *local_360;
  code *local_358;
  code *local_350;
  double local_348;
  float local_33c;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  double local_318;
  double local_310;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  longlong lStack_2d0;
  undefined4 local_2c8;
  float local_2c4;
  float local_2c0;
  undefined8 local_2b8;
  longlong lStack_2b0;
  longlong local_2a8;
  longlong lStack_2a0;
  undefined4 local_214;
  byte local_20b;
  undefined4 local_1e8;
  undefined4 local_1b8;
  float local_1b4;
  float local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  ulonglong local_170;
  undefined8 local_168;
  undefined1 local_160;
  undefined2 local_15f;
  undefined1 local_15d;
  undefined2 local_15c;
  undefined1 local_15a;
  undefined2 local_159;
  undefined4 local_154;
  undefined1 local_150;
  undefined4 local_14c;
  undefined2 local_148;
  longlong local_120;
  undefined8 local_118;
  undefined4 local_110;
  longlong local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  cVar14 = (**(code **)(*param_1 + 0x600))();
  if (cVar14 == '\0') goto LAB_1414b27eb;
  lVar19 = ((longlong *)param_1[0x3e])[0x87];
  dVar12 = *(double *)(lVar19 + 0x280);
  dVar22 = *(double *)(lVar19 + 0x290);
  uVar1 = *(undefined8 *)(lVar19 + 0x288);
  fVar21 = (float)(**(code **)(*(longlong *)param_1[0x3e] + 0x678))();
  local_33c = (float)((double)fVar21 *
                     (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar22)) &
                             (ulonglong)(1.0 / dVar22)));
  plVar20 = (longlong *)param_1[0x3e];
  lVar19 = plVar20[0x87];
  fVar21 = *(float *)(lVar19 + 0x640);
  if ((fVar21 == local_33c) && (!NAN(fVar21) && !NAN(local_33c))) {
    if (param_2 == '\0') {
      *(byte *)(plVar20 + 0xaa) = *(byte *)(plVar20 + 0xaa) & 0xfd;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_3b8);
  }
  uStack_330 = 0;
  auVar24 = *(undefined1 (*) [16])(lVar19 + 0x280) & _DAT_149931180;
  auVar3 = *(undefined1 (*) [16])(lVar19 + 0x290);
  auVar25 = _DAT_149931180 & auVar3;
  auVar4._16_16_ = auVar25;
  auVar4._0_16_ = auVar24;
  auVar25._8_8_ = auVar24._0_8_;
  auVar24 = minpd(auVar24,auVar4._8_16_);
  auVar24 = minpd(auVar24,auVar25);
  local_33c = local_33c - fVar21;
  fVar26 = (float)auVar24._0_8_ * local_33c;
  lVar19 = param_1[0x22];
  dVar2 = *(double *)(lVar19 + 0x260);
  dVar22 = *(double *)(lVar19 + 0x268);
  local_188 = dVar2;
  dStack_180 = *(double *)(lVar19 + 0x268);
  dVar23 = *(double *)(lVar19 + 0x270);
  local_338 = uVar1;
  local_178 = dVar23;
  if (param_2 == '\0') {
    lVar19 = param_1[0x16];
    local_348 = dVar22;
    if (lVar19 == 0) {
      if ((param_1[0x15] != 0) && ((*(uint *)(param_1[0x15] + 8) & 0x10) == 0)) {
        lVar19 = FUN_1447210f0();
        if (lVar19 != 0) goto LAB_1414b1d1e;
      }
      lVar19 = param_1[4];
      if (lVar19 != 0) {
        if (DAT_14cb10130 == 0) {
          local_360 = &local_2b8;
          local_2b8 = FUN_140754f84;
          local_350 = FUN_14081d0ea;
          local_358 = FUN_14081d0ea;
          local_368 = &LAB_147da9a76;
          local_370 = FUN_1409f3105;
          local_378 = L"Engine";
          local_380 = (ulonglong *)0x0;
          local_388 = (undefined8 *)CONCAT44(local_388._4_4_,0x10000000);
          local_390 = (ulonglong *)CONCAT44(local_390._4_4_,8);
          local_398 = (double *)CONCAT44(local_398._4_4_,0x990);
          FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
        }
        if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar19 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30))
        goto LAB_1414b1d1e;
      }
      lVar19 = 0;
    }
LAB_1414b1d1e:
    lVar18 = param_1[0x3e];
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cad0dd0) {
      FUN_144b3d300();
      if (DAT_14cad0dd0 == -1) {
        local_2b8 = (code *)0x14a83aef8;
        lStack_2b0 = CONCAT35(lStack_2b0._5_3_,0xb);
        uVar17 = FUN_14001a6c0(&local_2b8,1);
        DAT_14cad0dc8 = (ulonglong)uVar17;
        _Init_thread_footer();
      }
    }
    local_14c = 0;
    local_168 = 0;
    local_148 = 0x101;
    local_120 = 0;
    local_118 = 0x800000000;
    local_100 = 0;
    local_f8 = 0x400000000;
    local_160 = 0;
    local_154 = 0;
    local_170 = DAT_14cad0dc8;
    local_15f = 1;
    local_15d = 0;
    local_150 = 0;
    local_15c = 0;
    local_15a = 0;
    if (lVar18 != 0) {
      local_110 = *(undefined4 *)(lVar18 + 0xc);
      local_f8 = 0x400000001;
      local_168 = *(undefined8 *)(lVar18 + 0x18);
    }
    local_159 = 0x101;
    local_198 = _DAT_14cad0ee0;
    uStack_190 = uRam000000014cad0ee8;
    local_1a8 = _DAT_14cad0ed0;
    uStack_1a0 = _DAT_14cad0ed8;
    lVar18 = 0;
    do {
      cVar14 = *(char *)((longlong)&uStack_1a0 + lVar18 + 7);
      bVar5 = *(char *)((longlong)&local_1a8 + lVar18) == DAT_149c360b0;
      bVar6 = *(char *)((longlong)&local_1a8 + lVar18 + 1) == DAT_149c360b0._1_1_;
      bVar7 = *(char *)((longlong)&local_1a8 + lVar18 + 2) == DAT_149c360b0._2_1_;
      bVar8 = *(char *)((longlong)&local_1a8 + lVar18 + 3) == DAT_149c360b0._3_1_;
      bVar9 = *(char *)((longlong)&local_1a8 + lVar18 + 4) == DAT_149c360b0._4_1_;
      bVar10 = *(char *)((longlong)&local_1a8 + lVar18 + 5) == DAT_149c360b0._5_1_;
      bVar11 = *(char *)((longlong)&local_1a8 + lVar18 + 6) == DAT_149c360b0._6_1_;
      if ((bool)(~bVar5 & 1)) {
        *(undefined1 *)((longlong)&local_1a8 + lVar18) = 2;
      }
      if ((bool)(~bVar6 & 1)) {
        *(undefined1 *)((longlong)&local_1a8 + lVar18 + 1) = 2;
      }
      if ((bool)(~bVar7 & 1)) {
        *(undefined1 *)((longlong)&local_1a8 + lVar18 + 2) = 2;
      }
      if ((bool)(~bVar8 & 1)) {
        *(undefined1 *)((longlong)&local_1a8 + lVar18 + 3) = 2;
      }
      if ((bool)(~bVar9 & 1)) {
        *(undefined1 *)((longlong)&local_1a8 + lVar18 + 4) = 2;
      }
      if ((bool)(~bVar10 & 1)) {
        *(undefined1 *)((longlong)&local_1a8 + lVar18 + 5) = 2;
      }
      if ((bool)(~bVar11 & 1)) {
        *(undefined1 *)((longlong)&local_1a8 + lVar18 + 6) = 2;
      }
      if ((bool)(~(*(char *)((longlong)&local_1a8 + lVar18 + 7) == DAT_149c360b0._7_1_) & 1)) {
        *(undefined1 *)((longlong)&local_1a8 + lVar18 + 7) = 2;
      }
      if ((bool)(~bVar5 & 1)) {
        *(undefined1 *)((longlong)&uStack_1a0 + lVar18) = 2;
      }
      if ((bool)(~bVar6 & 1)) {
        *(undefined1 *)((longlong)&uStack_1a0 + lVar18 + 1) = 2;
      }
      if ((bool)(~bVar7 & 1)) {
        *(undefined1 *)((longlong)&uStack_1a0 + lVar18 + 2) = 2;
      }
      if ((bool)(~bVar8 & 1)) {
        *(undefined1 *)((longlong)&uStack_1a0 + lVar18 + 3) = 2;
      }
      if ((bool)(~bVar9 & 1)) {
        *(undefined1 *)((longlong)&uStack_1a0 + lVar18 + 4) = 2;
      }
      if ((bool)(~bVar10 & 1)) {
        *(undefined1 *)((longlong)&uStack_1a0 + lVar18 + 5) = 2;
      }
      if ((bool)(~bVar11 & 1)) {
        *(undefined1 *)((longlong)&uStack_1a0 + lVar18 + 6) = 2;
      }
      if ((bool)(~(cVar14 == DAT_149c360b0._15_1_) & 1)) {
        *(undefined1 *)((longlong)&uStack_1a0 + lVar18 + 7) = 2;
      }
      lVar18 = lVar18 + 0x10;
    } while (lVar18 != 0x20);
    (**(code **)(*param_1 + 0x4d8))(param_1,&local_170,&local_1a8);
    lVar18 = *(longlong *)(param_1[0x3e] + 0x438);
    dVar22 = *(double *)(lVar18 + 0x280);
    if (*(double *)(lVar18 + 0x288) <= *(double *)(lVar18 + 0x280)) {
      dVar22 = *(double *)(lVar18 + 0x288);
    }
    local_1b4 = (float)dVar22 * *(float *)(lVar18 + 0x644);
    local_1b0 = (float)*(double *)(lVar18 + 0x290) * *(float *)(lVar18 + 0x640) -
                (-0.0009999999 - fVar26);
    if (local_1b0 <= 0.0009999999) {
      local_1b0 = 0.0009999999;
    }
    if (local_1b4 <= 0.0009999999) {
      local_1b4 = 0.0009999999;
    }
    local_1b8 = 3;
    uVar15 = (**(code **)(*(longlong *)param_1[0x22] + 0x580))();
    local_390 = &local_170;
    local_388 = &local_1a8;
    if ((*(byte *)((longlong)param_1 + 0x5b5) & 0x40) == 0) {
      local_2b8 = (code *)param_1[0x4a];
      lStack_2b0 = param_1[0x4b];
      local_2a8 = param_1[0x4c];
      lStack_2a0 = param_1[0x4d];
      local_380 = (ulonglong *)&DAT_14cad0f08;
      local_398 = (double *)CONCAT44(local_398._4_4_,uVar15);
      cVar14 = FUN_140ad65d6(lVar19,&local_1b8,&local_188);
      if ((fVar26 <= 0.0) || (cVar14 == '\0')) {
        if (cVar14 == '\0') goto LAB_1414b2634;
      }
      else {
        local_328 = CONCAT44((float)auVar24._8_8_,fVar26);
        uStack_320 = 0;
        lVar18 = *(longlong *)(param_1[0x3e] + 0x438);
        dVar22 = *(double *)(lVar18 + 0x280);
        if (*(double *)(lVar18 + 0x288) <= *(double *)(lVar18 + 0x280)) {
          dVar22 = *(double *)(lVar18 + 0x288);
        }
        fVar28 = (float)dVar22 * *(float *)(lVar18 + 0x644);
        fVar26 = (float)*(double *)(lVar18 + 0x290) * *(float *)(lVar18 + 0x640);
        fVar21 = fVar26 - (fVar26 - fVar28);
        local_348 = (double)CONCAT44(local_348._4_4_,fVar21);
        dVar13 = (double)fVar21;
        dVar22 = (double)param_1[0x48];
        dVar23 = (double)param_1[0x47];
        dVar2 = (double)param_1[0x46];
        memset(&local_2b8,0,0x100);
        local_1e8 = 0xffffffff;
        local_214 = 0xffffffff;
        local_2b8 = (code *)CONCAT44(0x3f800000,(undefined4)local_2b8);
        local_2c0 = fVar26 - (fVar26 - fVar28);
        if (local_2c0 <= 0.0009999999) {
          local_2c0 = 0.0009999999;
        }
        if (fVar28 <= 0.0009999999) {
          fVar28 = 0.0009999999;
        }
        local_388 = (undefined8 *)&local_2c8;
        local_2c8 = 3;
        local_2e8 = (double)param_1[0x4a];
        dStack_2e0 = (double)param_1[0x4b];
        local_2d8 = (double)param_1[0x4c];
        lStack_2d0 = param_1[0x4d];
        local_398 = &local_2e8;
        local_2f0 = dVar22 * dVar13 + local_178;
        local_2f8 = dVar23 * dVar13 + dStack_180;
        local_300 = dVar13 * dVar2 + local_188;
        local_378 = (wchar_t *)&DAT_14cad0f10;
        local_390 = (ulonglong *)CONCAT44(local_390._4_4_,uVar15);
        local_380 = &local_170;
        local_2c4 = fVar28;
        FUN_14021655c(lVar19,&local_2b8);
        if ((local_20b & 2) == 0) {
          dVar22 = (double)((local_1b0 - (local_348._0_4_ * local_2b8._4_4_ + local_2c0)) +
                            0.0009999999 + 0.95);
          local_2f0 = local_178 - (double)param_1[0x48] * dVar22;
          local_300 = local_188 - dVar22 * (double)param_1[0x46];
          local_2f8 = dStack_180 - (double)param_1[0x47] * dVar22;
          local_2e8 = (double)param_1[0x4a];
          dStack_2e0 = (double)param_1[0x4b];
          local_2d8 = (double)param_1[0x4c];
          lStack_2d0 = param_1[0x4d];
          local_380 = (ulonglong *)&DAT_14cad0f08;
          local_398 = (double *)CONCAT44(local_398._4_4_,uVar15);
          local_390 = &local_170;
          local_388 = &local_1a8;
          cVar14 = FUN_140ad65d6(lVar19);
          if (cVar14 == '\0') {
            plVar20 = (longlong *)param_1[0x22];
            local_2e8 = (double)plVar20[0x48];
            dStack_2e0 = (double)plVar20[0x49];
            local_2d8 = (double)plVar20[0x4a];
            lStack_2d0 = plVar20[0x4b];
            local_308 = local_2f0 - local_178;
            local_310 = local_2f8 - dStack_180;
            local_318 = local_300 - local_188;
            local_388 = (undefined8 *)CONCAT71(local_388._1_7_,1);
            local_390 = (ulonglong *)((ulonglong)local_390 & 0xffffffff00000000);
            local_398 = (double *)0x0;
            (**(code **)(*plVar20 + 0x510))(plVar20,&local_318,&local_2e8,0);
            fVar26 = (float)local_328;
            goto LAB_1414b2634;
          }
        }
      }
    }
    else {
      dVar22 = (double)(local_1b0 - fVar21 * (float)auVar3._0_8_);
      local_2d8 = dVar23 - (double)param_1[0x48] * dVar22;
      dStack_2e0 = local_348 - (double)param_1[0x47] * dVar22;
      local_2e8 = dVar2 - dVar22 * (double)param_1[0x46];
      local_2b8 = (code *)param_1[0x4a];
      lStack_2b0 = param_1[0x4b];
      local_2a8 = param_1[0x4c];
      lStack_2a0 = param_1[0x4d];
      local_380 = (ulonglong *)&DAT_14cad0f08;
      local_398 = (double *)CONCAT44(local_398._4_4_,uVar15);
      cVar14 = FUN_140ad65d6(lVar19);
      if (cVar14 == '\0') {
LAB_1414b2566:
        plVar20 = (longlong *)param_1[0x22];
        local_2b8 = (code *)plVar20[0x48];
        lStack_2b0 = plVar20[0x49];
        local_2a8 = plVar20[0x4a];
        lStack_2a0 = plVar20[0x4b];
        local_2f0 = local_2d8 - local_178;
        local_2f8 = dStack_2e0 - dStack_180;
        local_300 = local_2e8 - local_188;
        local_388 = (undefined8 *)CONCAT71(local_388._1_7_,1);
        local_390 = (ulonglong *)((ulonglong)local_390 & 0xffffffff00000000);
        local_398 = (double *)0x0;
        (**(code **)(*plVar20 + 0x510))(plVar20,&local_300,&local_2b8,0);
        *(byte *)((longlong)param_1 + 0x349) = *(byte *)((longlong)param_1 + 0x349) | 0x10;
LAB_1414b2634:
        *(byte *)(param_1[0x3e] + 0x550) = *(byte *)(param_1[0x3e] + 0x550) & 0xfd;
        if (local_100 != 0) {
          FUN_1400020a8();
        }
        uVar15 = (undefined4)local_338;
        uVar27 = local_338._4_4_;
        if (local_120 != 0) {
          FUN_1400020a8();
        }
        plVar20 = (longlong *)param_1[0x3e];
        goto LAB_1414b2677;
      }
      cVar14 = (**(code **)(param_1[0x2f] + 0xe0))(param_1 + 0x2f);
      if (((cVar14 != '\0') && ((*(byte *)(param_1 + 0x93) & 1) != 0)) &&
         (0.0009999999 < *(float *)((longlong)param_1 + 0x49c))) {
        dVar22 = (double)(*(float *)((longlong)param_1 + 0x49c) + -0.0009999999);
        local_2e8 = (double)param_1[0x46] * dVar22 + local_2e8;
        dStack_2e0 = (double)param_1[0x47] * dVar22 + dStack_2e0;
        local_2d8 = dVar22 * (double)param_1[0x48] + local_2d8;
        local_2b8 = (code *)param_1[0x4a];
        lStack_2b0 = param_1[0x4b];
        local_2a8 = param_1[0x4c];
        lStack_2a0 = param_1[0x4d];
        local_380 = (ulonglong *)&DAT_14cad0f08;
        local_398 = (double *)CONCAT44(local_398._4_4_,uVar15);
        local_390 = &local_170;
        local_388 = &local_1a8;
        cVar14 = FUN_140ad65d6(lVar19,&local_1b8);
        if (cVar14 == '\0') goto LAB_1414b2566;
      }
    }
    if (local_100 != 0) {
      FUN_1400020a8();
    }
    if (local_120 != 0) {
      FUN_1400020a8();
    }
    goto LAB_1414b27eb;
  }
  *(byte *)((longlong)param_1 + 0x349) = *(byte *)((longlong)param_1 + 0x349) | 0x20;
  local_338._0_4_ = (undefined4)uVar1;
  local_338._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uVar15 = (undefined4)local_338;
  uVar27 = local_338._4_4_;
LAB_1414b2677:
  dVar12 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar12)) & (ulonglong)(1.0 / dVar12));
  dVar22 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS((double)CONCAT44(uVar27,uVar15))) &
                   (ulonglong)(1.0 / (double)CONCAT44(uVar27,uVar15)));
  fVar21 = (float)(**(code **)(*plVar20 + 0x680))(plVar20);
  uVar15 = SUB84(dVar12,0);
  uVar27 = (int)((ulonglong)dVar12 >> 0x20);
  if (dVar12 <= dVar22) {
    uVar15 = SUB84(dVar22,0);
    uVar27 = (int)((ulonglong)dVar22 >> 0x20);
  }
  FUN_140d491fc(*(undefined8 *)(param_1[0x3e] + 0x438),
                (float)((double)CONCAT44(uVar27,uVar15) * (double)fVar21));
  (**(code **)(*param_1 + 0x950))(param_1);
  (**(code **)(*(longlong *)param_1[0x3e] + 0x878))();
  if ((param_2 == '\0') || (*(char *)(param_1[0x3e] + 0x178) != '\x01')) {
    if (param_1[0x15] == 0) goto LAB_1414b27eb;
    iVar16 = FUN_14487fd02();
    if ((iVar16 != 2) || (*(char *)(param_1[0x3e] + 0x68) != '\x02')) goto LAB_1414b27eb;
  }
  lVar19 = param_1[0x102];
  if (lVar19 == 0) {
    lVar19 = (**(code **)(param_1[0x3d] + 0x28))(param_1 + 0x3d);
    param_1[0x102] = lVar19;
    if (lVar19 == 0) goto LAB_1414b27eb;
  }
  dVar23 = (double)fVar26;
  dVar12 = (double)param_1[0x47];
  dVar22 = (double)param_1[0x48];
  *(double *)(lVar19 + 0x80) = *(double *)(lVar19 + 0x80) - (double)param_1[0x46] * dVar23;
  *(double *)(lVar19 + 0x88) = *(double *)(lVar19 + 0x88) - dVar12 * dVar23;
  *(double *)(lVar19 + 0x90) = *(double *)(lVar19 + 0x90) - dVar23 * dVar22;
  *(undefined8 *)(lVar19 + 0x68) = *(undefined8 *)(lVar19 + 0x80);
  *(undefined8 *)(lVar19 + 0x70) = *(undefined8 *)(lVar19 + 0x88);
  *(undefined8 *)(lVar19 + 0x78) = *(undefined8 *)(lVar19 + 0x90);
LAB_1414b27eb:
  if ((local_f0 ^ (ulonglong)auStack_3b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414b29cc FUN_1414b29cc body=473 status=ok
// SIG undefined FUN_1414b29cc(void)

void FUN_1414b29cc(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  double dVar10;
  undefined1 auStack_c8 [32];
  char local_a8;
  undefined8 local_98 [13];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x39c) == 0) {
LAB_1414b2a3f:
    puVar2 = (uint *)(param_1 + 0x390);
  }
  else {
    puVar2 = (uint *)(param_1 + 0x398);
    uVar1 = *puVar2;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1414b2a3f;
    lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar8 == 0) ||
       ((*(int *)(lVar8 + 0x10) != *(int *)(param_1 + 0x39c) ||
        ((*(uint *)(lVar8 + 8) & 0x10200000) != 0)))) goto LAB_1414b2a3f;
  }
  if (puVar2[1] == 0) {
LAB_1414b2b3a:
    lVar8 = 0;
  }
  else {
    uVar1 = *puVar2;
    lVar8 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar5 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar5 == (longlong *)0x0) ||
         ((*(uint *)(plVar5 + 2) != puVar2[1] || ((*(uint *)(plVar5 + 1) & 0x10200000) != 0))))
      goto LAB_1414b2b3a;
      lVar8 = *plVar5;
    }
  }
  if (*(char *)(param_1 + 0x4b0) != '\x01') goto LAB_1414b2aa3;
  dVar10 = (double)FUN_146559cb0(param_1);
  *(float *)(param_1 + 0x3d0) =
       (float)(dVar10 - *(double *)(param_1 + 0x3c8)) * *(float *)(param_1 + 0x4a8);
  puVar6 = (undefined8 *)(param_2 + 0x7c0);
  puVar7 = local_98;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  if (*(char *)(param_1 + 0x4a5) == '\x01') {
    lVar4 = param_2;
    FUN_143e00d7c(param_1,local_98,param_2);
  }
  else {
    lVar4 = param_2 + 0x6a8;
    FUN_1489286d0(param_1 + 0x3c0,local_98,lVar4);
  }
  if (lVar8 == 0) goto LAB_1414b2aa3;
  if (*(int *)(param_2 + 0x798) == 1) {
    lVar3 = 0x8e4;
LAB_1414b2b47:
    if (*(char *)(param_2 + lVar3) == '\x01') goto LAB_1414b2b4e;
LAB_1414b2b65:
    uVar9 = 0;
  }
  else {
    if (*(int *)(param_2 + 0x798) == 2) {
      lVar3 = 0x8e5;
      goto LAB_1414b2b47;
    }
LAB_1414b2b4e:
    if (*(char *)(param_2 + 0x785) != '\x01') goto LAB_1414b2b65;
    uVar9 = CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(param_1 + 0x4a4)) ^ 1;
  }
  local_a8 = *(char *)(param_1 + 0x4a4) * '\x02';
  FUN_1413d4c10(lVar8,local_98,uVar9,0);
LAB_1414b2aa3:
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414b2ba6 FUN_1414b2ba6 body=388 status=ok
// SIG undefined FUN_1414b2ba6(void)

void FUN_1414b2ba6(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_4c8 [32];
  undefined1 local_4a8 [536];
  undefined8 *local_290;
  int local_288;
  undefined1 local_278 [560];
  undefined1 local_48;
  undefined6 local_44;
  undefined2 uStack_3e;
  undefined6 uStack_3c;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  if ((*(longlong *)(param_1 + 0x12a8) != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
    lVar1 = (**(code **)(*(longlong *)*param_2 + 0x18))();
    if (*(longlong *)(param_1 + 0x12a8) == lVar1) {
      FUN_140e386ea(local_4a8);
      FUN_140e386ea(local_278);
      local_48 = 0;
      local_34 = 0;
      local_44 = 0;
      uStack_3e = 0;
      uStack_3c = 0;
      FUN_1414b2d2c(local_4a8,1);
      if ((char)param_2[1] == '\x01') {
        if (local_288 != 3) {
          FUN_1446efa72(&local_290,0,3,0x10);
          local_288 = 3;
        }
        *local_290 = &PTR_LAB_14b3e9b40;
        LOCK();
        UNLOCK();
        lVar2 = DAT_14c758608 + 1;
        lVar1 = DAT_14c758608 + 1;
        if (lVar2 == 0) {
          LOCK();
          UNLOCK();
          lVar2 = DAT_14c758608 + 2;
          lVar1 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar1;
        local_290[2] = lVar2;
        *local_290 = &PTR_FUN_14b95f480;
        local_290[3] = 0;
        FUN_14485c47a(local_290 + 3,param_1 + -0x460);
        local_290[4] = param_1 + -0x460;
      }
      FUN_140e386c4(param_3,local_4a8,0);
      FUN_144908ac8(local_278);
      FUN_144908ac8(local_4a8);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_4c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414b2d2c FUN_1414b2d2c body=7 status=ok
// SIG undefined FUN_1414b2d2c(void)

void FUN_1414b2d2c(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x228) = *(uint *)(param_1 + 0x228) | param_2;
  return;
}



// FUNCTION 1414b2d34 FUN_1414b2d34 body=468 status=ok
// SIG undefined FUN_1414b2d34(void)

void FUN_1414b2d34(void)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab26b8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cab26b8,0,0,4);
  }
  uVar7 = DAT_14cab26c0;
  uVar2 = local_50;
  if (DAT_14cab26c0 != 0) {
    uVar6 = 0;
    FUN_144a1cbf0(&DAT_14cab26b0,0,DAT_14cab26c0,4);
    if (0 < (int)uVar7) {
      do {
        puVar5 = DAT_14cab26b8;
        if (DAT_14cab26b8 == (undefined *)0x0) {
          puVar5 = &DAT_14cab26b0;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14cab26c0 + 0x7fffffff & uVar6) * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cab2688;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cab26a0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cab2678;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar3 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar4 = (longlong)iVar3;
        uVar7 = DAT_14cab26c0 - 1 & (uint)*(byte *)(lVar1 + lVar4 * 0x18);
        *(uint *)(lVar1 + 0x14 + lVar4 * 0x18) = uVar7;
        puVar5 = DAT_14cab26b8;
        if (DAT_14cab26b8 == (undefined *)0x0) {
          puVar5 = &DAT_14cab26b0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar4 * 0x18) =
             *(undefined4 *)(puVar5 + (ulonglong)(DAT_14cab26c0 - 1 & uVar7) * 4);
        puVar5 = DAT_14cab26b8;
        if (DAT_14cab26b8 == (undefined *)0x0) {
          puVar5 = &DAT_14cab26b0;
        }
        *(int *)(puVar5 + (ulonglong)(DAT_14cab26c0 - 1 & uVar7) * 4) = iVar3;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar3 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414b2f0a FUN_1414b2f0a body=98 status=ok
// SIG undefined FUN_1414b2f0a(void)

void FUN_1414b2f0a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2b5870;
  FUN_148741902(param_1 + 0x13);
  FUN_140882410(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_140882410(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1414b2f6c FUN_1414b2f6c body=218 status=ok
// SIG undefined FUN_1414b2f6c(void)

void FUN_1414b2f6c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1446f470e(&local_40,L"SHIFT",1);
    FUN_143f3e584(param_1);
    local_20 = local_40;
    plVar3 = (longlong *)FUN_1401e3228();
    if (plVar3 == (longlong *)0x0) {
      local_38 = (longlong *)0x0;
      plStack_30 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar3 + 0x80))(plVar3,&local_38);
      if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 0x30))(local_38,*(undefined4 *)(param_1 + 0x38),param_1 + 0x40);
        *(undefined8 *)(param_1 + 0x40) = 0;
      }
    }
    plVar3 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414b3048 FUN_1414b3048 body=100 status=ok
// SIG undefined FUN_1414b3048(void)

ulonglong FUN_1414b3048(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar6 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar6);
      if ((plVar3 != (longlong *)0x0) &&
         (cVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,param_2), cVar4 == (char)plVar3[1])) {
        uVar5 = 0;
        break;
      }
      lVar6 = lVar6 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar6);
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1414b30ac FUN_1414b30ac body=105 status=ok
// SIG undefined FUN_1414b30ac(void)

undefined1 FUN_1414b30ac(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 auStack_48 [40];
  char local_20 [12];
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = 0;
  }
  else {
    FUN_143d268e8(param_1,local_20,*(int *)(param_1 + 8) + -1,param_2);
    if (local_20[0] == '\x01') {
      uVar1 = local_14 != 0;
    }
    else {
      uVar1 = FUN_140321d1a(local_20);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414b3116 FUN_1414b3116 body=337 status=ok
// SIG undefined FUN_1414b3116(void)

undefined8 FUN_1414b3116(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ushort uVar9;
  
  iVar4 = (int)param_1[5];
  if (iVar4 == (int)param_2[5]) {
    if (1 < iVar4) {
      lVar7 = 0;
      while( true ) {
        uVar9 = *(ushort *)(param_1[4] + lVar7);
        uVar1 = (ulonglong)uVar9;
        uVar5 = *(ushort *)(param_2[4] + lVar7);
        if (uVar9 != uVar5) break;
        if (uVar9 == 0) goto LAB_1414b3184;
LAB_1414b3150:
        lVar7 = lVar7 + 2;
      }
      if ((uVar5 | uVar9) < 0x80) {
        uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar1];
        uVar6 = (ulonglong)uVar5;
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar6]) goto LAB_1414b3150;
      }
      if (uVar9 != uVar5) goto LAB_1414b31e5;
    }
LAB_1414b3184:
    iVar4 = (int)param_1[3];
    if (iVar4 == (int)param_2[3]) {
      if (1 < iVar4) {
        lVar7 = 0;
        while( true ) {
          uVar9 = *(ushort *)(param_1[2] + lVar7);
          uVar1 = (ulonglong)uVar9;
          uVar5 = *(ushort *)(param_2[2] + lVar7);
          if (uVar9 != uVar5) break;
          if (uVar9 == 0) goto LAB_1414b31f2;
LAB_1414b31bc:
          lVar7 = lVar7 + 2;
        }
        if ((uVar5 | uVar9) < 0x80) {
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar1];
          uVar6 = (ulonglong)uVar5;
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar6]) goto LAB_1414b31bc;
        }
        if (uVar9 != uVar5) goto LAB_1414b31e5;
      }
    }
    else if ((int)param_2[3] + iVar4 != 1) goto LAB_1414b31e5;
LAB_1414b31f2:
    uVar3 = *(uint *)(param_1 + 1);
    uVar1 = (ulonglong)uVar3;
    if (uVar3 == (uint)param_2[1]) {
      if ((int)uVar3 < 2) {
        return CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
      }
      uVar1 = *param_2;
      lVar7 = 0;
      while( true ) {
        uVar9 = *(ushort *)(*param_1 + lVar7);
        uVar3 = (uint)uVar9;
        uVar5 = *(ushort *)(uVar1 + lVar7);
        uVar8 = (uint)uVar5;
        if (uVar9 != uVar5) {
          if ((uVar5 | uVar9) < 0x80) {
            uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar9];
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar5];
            if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar5]) goto LAB_1414b3227;
          }
          iVar4 = uVar3 - uVar8;
          goto LAB_1414b3254;
        }
        if (uVar9 == 0) break;
LAB_1414b3227:
        lVar7 = lVar7 + 2;
      }
      iVar4 = 0;
    }
    else {
      iVar4 = (uint)param_2[1] + uVar3 + -1;
    }
LAB_1414b3254:
    uVar2 = CONCAT71((int7)(uVar1 >> 8),iVar4 == 0);
  }
  else {
    if ((int)param_2[5] + iVar4 == 1) goto LAB_1414b3184;
LAB_1414b31e5:
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1414b3267 FUN_1414b3267 body=421 status=ok
// SIG undefined FUN_1414b3267(void)

uint FUN_1414b3267(undefined8 *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  iVar1 = *(int *)(param_1 + 3);
  uVar6 = 0;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  uVar5 = 0;
  if (0 < iVar7) {
    if (iVar1 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)param_1[2];
    }
    lVar8 = 0;
    uVar5 = 0;
    do {
      uVar3 = ((uint)(0x19 < (ushort)puVar2[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar2[lVar8]) -
              0x20;
      uVar5 = uVar5 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar5 ^ uVar3) & 0xff) * 4);
      uVar5 = uVar5 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar5 & 0xff ^ uVar3 >> 8 & 0xff) * 4);
      lVar8 = lVar8 + 1;
    } while (iVar7 != (int)lVar8);
    uVar5 = uVar5 * 0x18d;
  }
  iVar1 = *(int *)(param_1 + 5);
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  if (0 < iVar7) {
    if (iVar1 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)param_1[4];
    }
    lVar8 = 0;
    uVar6 = 0;
    do {
      uVar3 = ((uint)(0x19 < (ushort)puVar2[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar2[lVar8]) -
              0x20;
      uVar6 = uVar6 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar6 ^ uVar3) & 0xff) * 4);
      uVar6 = uVar6 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar6 & 0xff ^ uVar3 >> 8 & 0xff) * 4);
      lVar8 = lVar8 + 1;
    } while (iVar7 != (int)lVar8);
  }
  iVar1 = *(int *)(param_1 + 1);
  uVar3 = 0;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  if (0 < iVar7) {
    if (iVar1 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_1;
    }
    lVar8 = 0;
    do {
      uVar4 = ((uint)(0x19 < (ushort)puVar2[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar2[lVar8]) -
              0x20;
      uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar3 ^ uVar4) & 0xff) * 4);
      uVar3 = uVar3 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar3 & 0xff ^ uVar4 >> 8 & 0xff) * 4);
      lVar8 = lVar8 + 1;
    } while (iVar7 != (int)lVar8);
  }
  return (uVar6 ^ uVar5) * 0x18d ^ uVar3;
}



// FUNCTION 1414b340c FUN_1414b340c body=694 status=ok
// SIG undefined FUN_1414b340c(void)

undefined8 * FUN_1414b340c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *_Dst;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  longlong local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_148ae39b4();
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *param_1 = &PTR_FUN_14b525c90;
  _Dst = param_1 + 0x18;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  memset(_Dst,0,0x90);
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x264) = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = param_2;
  param_1[0x5f] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x6a] = 0x5a00000a8c;
  param_1[0x6b] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  FUN_148ae3a22(param_1 + 0x6e,param_2);
  FUN_140d60302(param_3);
  FUN_145960ee8(_Dst,param_3);
  FUN_14588d72e(_Dst,local_70);
  FUN_140ba7826(&local_60,&DAT_14b525dc8,local_70);
  if (param_1 + 0x26 == &local_60) {
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x26] != 0) {
      FUN_1400020a8();
    }
    param_1[0x26] = local_60;
    local_60 = 0;
    *(undefined4 *)(param_1 + 0x27) = (undefined4)local_58;
    *(undefined4 *)((longlong)param_1 + 0x13c) = local_58._4_4_;
    local_58 = 0;
  }
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0;
  *(undefined1 *)((longlong)param_1 + 0x369) = 0;
  FUN_1461587c8(param_1);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414b36c4 FUN_1414b36c4 body=460 status=ok
// SIG undefined FUN_1414b36c4(void)

void FUN_1414b36c4(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  *(undefined4 *)(param_1 + 0x288) = 0;
  plVar1 = (longlong *)(param_1 + 600);
  *(undefined4 *)(param_1 + 0x260) = 0;
  if (*(int *)(param_1 + 0x264) < 0) {
    FUN_14690032e(plVar1,0);
  }
  lVar8 = *(longlong *)(param_1 + 0x50);
  if (lVar8 != 0) {
    lVar7 = *(longlong *)(lVar8 + 8);
    lVar4 = FUN_1446ddbd2();
    if (*(ulonglong *)(lVar4 + 8) == 0) {
      bVar9 = lVar7 != 0;
      if (lVar7 != lVar4 && bVar9) {
        do {
          lVar7 = *(longlong *)(lVar7 + 0x30);
          bVar9 = lVar7 != 0;
          if (lVar7 == lVar4) break;
        } while (lVar7 != 0);
      }
      if (bVar9) goto LAB_1414b371e;
    }
    else {
      uVar3 = *(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar4 + 8);
      while (uVar3 != 0) {
LAB_1414b371e:
        while( true ) {
          iVar2 = *(int *)(param_1 + 0x260);
          *(uint *)(param_1 + 0x260) = iVar2 + 1U;
          if (*(uint *)(param_1 + 0x264) < iVar2 + 1U) {
            FUN_14000e500(plVar1,iVar2);
          }
          *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar8;
          lVar8 = *(longlong *)(lVar8 + 0x18);
          if (lVar8 == 0) {
            return;
          }
          puVar6 = *(undefined **)(lVar8 + 8);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
            uVar5 = FUN_140342cba();
            FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar5,FUN_1468c7f1e);
            atexit(FUN_14280c819);
            _Init_thread_footer(&DAT_14c951a88);
          }
          if (DAT_14c951a40 != 0) break;
          bVar9 = puVar6 != (undefined *)0x0;
          if (puVar6 != &DAT_14c951a38 && bVar9) {
            do {
              puVar6 = *(undefined **)(puVar6 + 0x30);
              bVar9 = puVar6 != (undefined *)0x0;
              if (puVar6 == &DAT_14c951a38) break;
            } while (puVar6 != (undefined *)0x0);
          }
          if (!bVar9) {
            return;
          }
        }
        uVar3 = *(ulonglong *)(puVar6 + 0x18) & DAT_14c951a40;
      }
    }
  }
  return;
}



// FUNCTION 1414b3890 FUN_1414b3890 body=288 status=ok
// SIG undefined FUN_1414b3890(void)

void FUN_1414b3890(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    if (plVar1[0x19] != 0) {
      FUN_1400020a8();
    }
    if (plVar1[0x17] != 0) {
      FUN_1400020a8();
    }
    if (plVar1[0x15] != 0) {
      FUN_1400020a8();
    }
    if (plVar1[0x13] != 0) {
      FUN_1400020a8();
    }
    if (plVar1[0x11] != 0) {
      FUN_1400020a8();
    }
    if (plVar1[0xf] != 0) {
      FUN_1400020a8();
    }
    if (plVar1[0xd] != 0) {
      FUN_1400020a8();
    }
    if (plVar1[0xb] != 0) {
      FUN_1400020a8();
    }
    if (plVar1[9] != 0) {
      FUN_1400020a8();
    }
    if (plVar1[7] != 0) {
      FUN_1400020a8();
    }
    if (plVar1[5] != 0) {
      FUN_1400020a8();
    }
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    if (plVar1[1] != 0) {
      FUN_1400020a8();
    }
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    FUN_1400020a8(plVar1);
    return;
  }
  return;
}



// FUNCTION 1414b39b0 FUN_1414b39b0 body=184 status=ok
// SIG undefined FUN_1414b39b0(void)

void FUN_1414b39b0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x1b8);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  lVar2 = DAT_14c8445d0;
  if (DAT_14c8445d0 != 0) {
    FUN_145fd5870(DAT_14c8445d0);
    FUN_1400020a8(lVar2);
  }
  lVar2 = DAT_14c8443b8;
  DAT_14c8445d0 = 0;
  if (DAT_14c8443b8 != 0) {
    FUN_145f9fe78(DAT_14c8443b8);
    FUN_1400020a8(lVar2);
  }
  DAT_14c8443b8 = 0;
  FUN_14624351a(param_1 + 0x140);
  FUN_1424d65f0();
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x248));
  FUN_14620674e(param_1 + 0x1f8);
                    /* WARNING: Could not recover jumptable at 0x0001414b3a61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x248));
  return;
}



// FUNCTION 1414b3a68 FUN_1414b3a68 body=1266 status=ok
// SIG undefined FUN_1414b3a68(void)

void FUN_1414b3a68(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_149e17820;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x54));
  *(undefined4 *)(param_1 + 0x53) = 0;
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  plVar4 = param_1 + 0x4a;
  puVar3 = param_1 + 0x4c;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = puVar3;
  if (*(int *)(param_1 + 0x4f) != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = plVar4;
  if (iStack_34 < *(int *)(local_40 + 3)) {
    do {
      FUN_1467d7150((longlong)iStack_54 * 0x28 + *local_70);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < *(int *)(local_60 + 3));
  }
  *(undefined4 *)(param_1 + 0x4b) = 0;
  if (*(int *)((longlong)param_1 + 0x25c) != 0) {
    FUN_140549ad6(plVar4,0);
  }
  param_1[0x50] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x27c)) {
    *(undefined4 *)((longlong)param_1 + 0x27c) = 0x80;
    FUN_1446efbd8(puVar3,0);
  }
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  if (*plVar4 != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x45));
  plVar4 = (longlong *)param_1[0x44];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3e));
  plVar4 = (longlong *)param_1[0x3d];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x37));
  plVar4 = (longlong *)param_1[0x36];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[0x2e];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)param_1[0x2c];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)param_1[0x2a];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)param_1[0x28];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)param_1[0x26];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)param_1[0x24];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)param_1[0x22];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)param_1[0x20];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)param_1[0x1e];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1414b3f60(param_1 + 1);
  return;
}



// FUNCTION 1414b3f60 FUN_1414b3f60 body=86 status=ok
// SIG undefined FUN_1414b3f60(void)

void FUN_1414b3f60(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::Locale::vftable;
  puVar1 = (undefined8 *)param_1[0x1a];
  if (puVar1 != (undefined8 *)param_1[5]) {
    FUN_1424da110();
    puVar1 = (undefined8 *)param_1[5];
  }
  param_1[0x1a] = 0;
  if (puVar1 != param_1 + 6) {
    FUN_1424da110();
    param_1[5] = 0;
  }
  FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 1414b3fb6 FUN_1414b3fb6 body=525 status=ok
// SIG undefined FUN_1414b3fb6(void)

void FUN_1414b3fb6(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_74 = param_2;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar9 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar9 = local_68 >> 0x20;
  }
  plVar4 = local_60;
  iVar13 = (int)local_68;
  uVar12 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar10 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *param_1;
      if (*(longlong *)(lVar11 + 0x10 + (longlong)iVar6 * 0x28) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar11 + (longlong)iVar6 * 0x28) != 0) {
        FUN_1400020a8();
      }
      uVar12 = uVar12 & ~(uint)uVar9;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar11 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar12;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar13) {
          iVar3 = iVar13;
        }
        if (iVar6 <= iVar13) break;
        lVar8 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar8 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar3 - lVar11 == lVar8) goto LAB_1414b40fc;
        }
        iVar13 = iVar13 + (int)lVar8 + 1;
        uVar12 = 0xffffffff;
      }
      uVar9 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1414b40fc:
  iVar13 = local_74;
  if (local_74 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_74);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != local_74) {
    FUN_140549ad6(param_1,local_74);
  }
  param_1[6] = 0xffffffff;
  uVar12 = iVar13 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar12 || 0x80 < *(int *)((longlong)param_1 + 0x2c))
  {
    uVar5 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar5 = uVar12;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414b41c6 FUN_1414b41c6 body=147 status=ok
// SIG undefined FUN_1414b41c6(void)

void FUN_1414b41c6(longlong param_1,undefined8 *param_2,float param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0x30);
  lVar5 = (longlong)iVar2;
  *(uint *)(param_1 + 0x30) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar2 + 1U) {
    FUN_145ae9cbc((longlong *)(param_1 + 0x28),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar5 * 0x28);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + lVar5 * 0x28);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + 0x20 + lVar5 * 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar5 * 0x28) = 0xffffffffbf800000;
  uVar4 = param_2[1];
  puVar1 = (undefined8 *)(lVar3 + lVar5 * 0x28);
  *puVar1 = *param_2;
  puVar1[1] = uVar4;
  *(undefined8 *)(lVar3 + 0x10 + lVar5 * 0x28) = param_2[2];
  *(float *)(lVar3 + 0x18 + lVar5 * 0x28) = param_3 + 100.0;
  *(undefined4 *)(lVar3 + 0x1c + lVar5 * 0x28) = param_4;
  *(undefined1 *)(lVar3 + 0x24 + lVar5 * 0x28) = 0;
  return;
}



// FUNCTION 1414b425a FUN_1414b425a body=2095 status=ok
// SIG undefined FUN_1414b425a(void)

void FUN_1414b425a(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  code *pcVar4;
  uint uVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  undefined1 *puVar14;
  uint uVar15;
  undefined *puVar16;
  int iVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined8 ****ppppuVar20;
  longlong lVar21;
  undefined8 *puVar22;
  longlong *plVar23;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined1 *local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined1 auStack_df [23];
  ushort local_c8;
  byte local_c0;
  char local_a0 [16];
  longlong *local_90;
  int local_78 [2];
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e8 = 0;
  uVar7 = FUN_140c4800c();
  lVar8 = FUN_140c47e50(param_2,uVar7,&local_e8);
  if (lVar8 == 0) goto LAB_1414b4362;
  if (*(char *)(param_1 + 0x950) == '\x01') {
    cVar6 = *(char *)(param_1 + 0x951);
    if (cVar6 != '\x01') {
      if (cVar6 == '\x02') {
        FUN_140440628(&local_e8,&DAT_14cb7e528,0);
        FUN_1403719a4(lVar8 + 0x80,&local_e8);
        FUN_144a2da94(&local_e8);
        goto LAB_1414b431a;
      }
      param_3 = param_4;
      if (cVar6 == '\x03') {
        param_3 = param_1 + 0x958;
      }
    }
    FUN_144983130(lVar8 + 0x80,param_3);
  }
  else {
    FUN_140440628(&local_e8,&DAT_14cb7e4f8,5);
    FUN_1403719a4(lVar8 + 0x80,&local_e8);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c0 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (local_c8 < 0x19) {
        puVar14 = &local_e0;
      }
      else {
        puVar14 = (undefined1 *)CONCAT71(auStack_df._0_7_,local_e0);
      }
      (*pcVar4)(puVar14);
    }
    if (0x18 < local_c8) {
      FUN_1400020a8(CONCAT71(auStack_df._0_7_,local_e0));
    }
  }
LAB_1414b431a:
  *(undefined1 *)(lVar8 + 0x261) = 1;
  FUN_1411157dc(lVar8 + 0x2a8,param_1 + 0x990);
  local_f0 = auStack_df + 3;
  local_e8 = DAT_14cb72618;
  local_e0 = 1;
  local_f8 = &local_e8;
  FUN_140c482d4(lVar8);
LAB_1414b4362:
  local_e8 = 0;
  uVar7 = FUN_1414b4a8a();
  lVar8 = FUN_140c47e50(param_2,uVar7,&local_e8);
  if (lVar8 != 0) {
    puVar19 = (undefined8 *)(param_4 + 8);
    plVar23 = (longlong *)(lVar8 + 0x90);
    bVar2 = *(byte *)(lVar8 + 0xb0);
    if (bVar2 == *(byte *)(param_4 + 0x28)) {
      if (0x18 < *(ushort *)(param_4 + 0x20)) {
        puVar19 = *(undefined8 **)(param_4 + 8);
      }
      if (0x18 < *(ushort *)(lVar8 + 0xa8)) {
        plVar23 = (longlong *)*plVar23;
      }
      uVar9 = (ulonglong)((uint)bVar2 * 0x120);
      pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar9);
      if (pcVar4 == (code *)0x0) {
        memcpy(plVar23,puVar19,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar9));
      }
      else {
        (*pcVar4)(plVar23,puVar19);
      }
    }
    else {
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar2 * 0x120));
      if (pcVar4 != (code *)0x0) {
        plVar10 = plVar23;
        if (0x18 < *(ushort *)(lVar8 + 0xa8)) {
          plVar10 = (longlong *)*plVar23;
        }
        (*pcVar4)(plVar10);
      }
      if (0x18 < *(ushort *)(lVar8 + 0xa8)) {
        FUN_1400020a8(*plVar23);
      }
      bVar2 = *(byte *)(param_4 + 0x28);
      uVar3 = *(ushort *)(param_4 + 0x20);
      *(ushort *)(lVar8 + 0xa8) = uVar3;
      plVar10 = plVar23;
      if (0x18 < uVar3) {
        plVar10 = (longlong *)FUN_14001cc68(uVar3,0);
        *plVar23 = (longlong)plVar10;
        puVar19 = (undefined8 *)*puVar19;
      }
      uVar9 = (ulonglong)((uint)bVar2 * 0x120);
      pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + uVar9);
      if (pcVar4 == (code *)0x0) {
        memcpy(plVar10,puVar19,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar9));
      }
      else {
        (*pcVar4)(plVar10,puVar19);
      }
      *(undefined1 *)(lVar8 + 0xb0) = *(undefined1 *)(param_4 + 0x28);
    }
    *(undefined1 *)(lVar8 + 0xb8) = *(undefined1 *)(param_4 + 0x30);
    lVar13 = *(longlong *)(param_1 + 0x948);
    if (DAT_14c950c29 == '\x01') {
      if (lVar13 == 0) {
        lVar13 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar13 = *(longlong *)(param_1 + 0x948);
      }
    }
    *(longlong *)(lVar8 + 0x80) = lVar13;
    if (*(int *)(param_1 + 0x468) != *(int *)(param_1 + 0x494)) {
      uVar5 = (uint)((ulonglong)DAT_14cb7e4f0 >> 0x10);
      uVar15 = (uint)DAT_14cb7e4f0 & 0xffff;
      lVar13 = param_1 + 0x498;
      if (*(longlong *)(param_1 + 0x4a0) != 0) {
        lVar13 = *(longlong *)(param_1 + 0x4a0);
      }
      iVar17 = *(int *)(lVar13 + (ulonglong)
                                 (*(int *)(param_1 + 0x4a8) - 1U &
                                 (int)((ulonglong)DAT_14cb7e4f0 >> 0x20) +
                                 ((uint)DAT_14cb7e4f0 << 0x10 | uVar15) +
                                 (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar15 >> 4)) * 4);
      if (iVar17 != -1) {
        do {
          plVar23 = (longlong *)(*(longlong *)(param_1 + 0x460) + (longlong)iVar17 * 0x48);
          if (*plVar23 == DAT_14cb7e4f0) {
            if ((plVar23 != (longlong *)0x0) && (plVar23 + 1 != (longlong *)0x0)) {
              cVar6 = *(char *)(param_1 + 0x560);
              if (cVar6 == '\x01') {
                if (*(longlong *)(param_1 + 0x568) != 0) goto LAB_1414b46a4;
LAB_1414b4517:
                uVar7 = FUN_14030ac4c((longlong *)(param_1 + 0x460));
                local_a0[0] = '\0';
                local_78[0] = 0;
                FUN_1456bb102(local_a0,uVar7);
              }
              else {
                if (cVar6 == '\x02') {
                  cVar6 = FUN_144729dda(param_1 + 0x568);
                  if (cVar6 != '\0') goto LAB_1414b46a4;
                  goto LAB_1414b4517;
                }
                if ((((cVar6 != '\x03') || (*(longlong *)(param_1 + 0x568) == 0)) ||
                    (*(longlong *)(param_1 + 0x570) == 0)) ||
                   (*(int *)(*(longlong *)(param_1 + 0x570) + 8) < 1)) goto LAB_1414b4517;
LAB_1414b46a4:
                local_a0[0] = '\0';
                FUN_1447f8f6a(local_a0,param_1 + 0x560);
                FUN_1447f8ea6(local_78,param_1 + 0x588);
              }
              FUN_1447c3578(plVar23 + 1,local_70,local_a0);
              FUN_140a3ee12(local_70,&local_e8);
              pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
              if (pcVar4 != (code *)0x0) {
                ppppuVar20 = local_70;
                if (0x18 < local_58) {
                  ppppuVar20 = (undefined8 ****)local_70[0];
                }
                (*pcVar4)(ppppuVar20);
              }
              if (0x18 < local_58) {
                FUN_1400020a8(local_70[0]);
              }
              lVar13 = DAT_14c9a3da0;
              if ((longlong)local_78[0] != 0) {
                lVar18 = (longlong)local_78[0] + -1;
                lVar21 = lVar18 * 0x10;
                FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar21),
                              *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar21));
                if (*(longlong *)(lVar13 + lVar21) != 0) {
                  FUN_1400020a8();
                }
                lVar13 = DAT_14c9a3da0;
                iVar17 = (int)lVar18;
                if (DAT_14c9a3dd4 != 0) {
                  *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar17;
                }
                *(undefined4 *)(lVar13 + lVar21) = 0xffffffff;
                iVar12 = -1;
                if (0 < DAT_14c9a3dd4) {
                  iVar12 = DAT_14c9a3dd0;
                }
                *(int *)(lVar13 + 4 + lVar21) = iVar12;
                DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
                puVar16 = &DAT_14c9a3db0;
                if (DAT_14c9a3dc0 != (undefined *)0x0) {
                  puVar16 = DAT_14c9a3dc0;
                }
                iVar12 = iVar17 + 0x1f;
                if (-1 < iVar17) {
                  iVar12 = iVar17;
                }
                bVar2 = (byte)lVar18 & 0x1f;
                DAT_14c9a3dd0 = iVar17;
                *(uint *)(puVar16 + (longlong)(iVar12 >> 5) * 4) =
                     *(uint *)(puVar16 + (longlong)(iVar12 >> 5) * 4) &
                     (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
                local_78[0] = 0;
              }
              if ((local_a0[0] == '\x03') && (local_90 != (longlong *)0x0)) {
                LOCK();
                piVar1 = (int *)((longlong)local_90 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_90 + 0x10))();
                }
              }
              goto LAB_1414b45c6;
            }
            break;
          }
          iVar17 = (int)plVar23[8];
        } while (iVar17 != -1);
      }
    }
    puVar19 = &DAT_14c9ab1e0;
    puVar22 = &local_e8;
    for (lVar13 = 9; lVar13 != 0; lVar13 = lVar13 + -1) {
      *puVar22 = *puVar19;
      puVar19 = puVar19 + 1;
      puVar22 = puVar22 + 1;
    }
LAB_1414b45c6:
    puVar19 = &local_e8;
    puVar22 = (undefined8 *)(lVar8 + 0xc0);
    for (lVar13 = 9; lVar13 != 0; lVar13 = lVar13 + -1) {
      *puVar22 = *puVar19;
      puVar19 = puVar19 + 1;
      puVar22 = puVar22 + 1;
    }
    puVar19 = (undefined8 *)(param_1 + 0xa98);
    puVar22 = (undefined8 *)(lVar8 + 0x110);
    bVar2 = *(byte *)(lVar8 + 0x130);
    if (bVar2 == *(byte *)(param_1 + 0xab8)) {
      if (0x18 < *(ushort *)(param_1 + 0xab0)) {
        puVar19 = *(undefined8 **)(param_1 + 0xa98);
      }
      if (0x18 < *(ushort *)(lVar8 + 0x128)) {
        puVar22 = (undefined8 *)*puVar22;
      }
      uVar9 = (ulonglong)((uint)bVar2 * 0x120);
      pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar9);
      if (pcVar4 == (code *)0x0) {
        memcpy(puVar22,puVar19,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar9));
      }
      else {
        (*pcVar4)(puVar22,puVar19);
      }
    }
    else {
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar2 * 0x120));
      if (pcVar4 != (code *)0x0) {
        puVar11 = puVar22;
        if (0x18 < *(ushort *)(lVar8 + 0x128)) {
          puVar11 = (undefined8 *)*puVar22;
        }
        (*pcVar4)(puVar11);
      }
      if (0x18 < *(ushort *)(lVar8 + 0x128)) {
        FUN_1400020a8(*puVar22);
      }
      bVar2 = *(byte *)(param_1 + 0xab8);
      uVar3 = *(ushort *)(param_1 + 0xab0);
      *(ushort *)(lVar8 + 0x128) = uVar3;
      puVar11 = puVar22;
      if (0x18 < uVar3) {
        puVar11 = (undefined8 *)FUN_14001cc68(uVar3,0);
        *puVar22 = puVar11;
        puVar19 = (undefined8 *)*puVar19;
      }
      uVar9 = (ulonglong)((uint)bVar2 * 0x120);
      pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + uVar9);
      if (pcVar4 == (code *)0x0) {
        memcpy(puVar11,puVar19,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar9));
      }
      else {
        (*pcVar4)(puVar11,puVar19);
      }
      *(undefined1 *)(lVar8 + 0x130) = *(undefined1 *)(param_1 + 0xab8);
    }
    *(undefined1 *)(lVar8 + 0x138) = *(undefined1 *)(param_1 + 0xac0);
    *(undefined1 *)(lVar8 + 0x140) = *(undefined1 *)(param_1 + 0xac8);
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414b4a8a FUN_1414b4a8a body=57 status=ok
// SIG undefined FUN_1414b4a8a(void)

void FUN_1414b4a8a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5acc0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5acc0 = FUN_140002ddd(FUN_1464ccb55,uVar1,L"GbxBrainAspectSettings_Leap");
  }
  return;
}



// FUNCTION 1414b4ac4 FUN_1414b4ac4 body=84 status=ok
// SIG undefined FUN_1414b4ac4(void)

void FUN_1414b4ac4(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0x600,0);
    lVar4 = 0x1f;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 6;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x20;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 1414b4b18 FUN_1414b4b18 body=78 status=ok
// SIG undefined FUN_1414b4b18(void)

void FUN_1414b4b18(longlong param_1)

{
  FUN_14121ab90(param_1 + 0x3c8);
  FUN_14121ab90(param_1 + 0xb8);
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1414b4b66 FUN_1414b4b66 body=352 status=ok
// SIG undefined FUN_1414b4b66(void)

void FUN_1414b4b66(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  
  puVar11 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764890);
  iVar3 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar3 != 0) {
    plVar5 = (longlong *)*puVar11;
    lVar6 = *(longlong *)(param_1 + 0x38);
    lVar13 = 0;
    do {
      lVar7 = *(longlong *)(lVar6 + lVar13);
      plVar8 = *(longlong **)(lVar6 + 8 + lVar13);
      bVar9 = true;
      lVar12 = lVar7;
      if (plVar8 == (longlong *)0x0) {
LAB_1414b4c7d:
        plVar14 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        lVar12 = *(longlong *)(lVar6 + lVar13);
        plVar14 = *(longlong **)(lVar6 + 8 + lVar13);
        if (plVar14 == (longlong *)0x0) goto LAB_1414b4c7d;
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
        bVar9 = false;
      }
      uVar10 = (**(code **)(*plVar5 + 0x128))(plVar5,*(undefined8 *)(lVar12 + 0x18),0);
      if (!bVar9) {
        LOCK();
        plVar1 = plVar14 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar2 = (int *)((longlong)plVar14 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
      iVar4 = *(int *)(param_1 + 0x50);
      *(uint *)(param_1 + 0x50) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x54) < iVar4 + 1U) {
        FUN_145aea828((longlong *)(param_1 + 0x48),iVar4);
      }
      plVar14 = (longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar4 * 0x18);
      *plVar14 = lVar7;
      plVar14[1] = (longlong)plVar8;
      if (plVar8 == (longlong *)0x0) {
        *(undefined1 *)(plVar14 + 2) = uVar10;
      }
      else {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        *(undefined1 *)(plVar14 + 2) = uVar10;
        LOCK();
        plVar14 = plVar8 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      lVar13 = lVar13 + 0x10;
    } while ((longlong)iVar3 << 4 != lVar13);
  }
  return;
}



// FUNCTION 1414b4cc6 FUN_1414b4cc6 body=175 status=ok
// SIG undefined FUN_1414b4cc6(void)

void FUN_1414b4cc6(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [44];
  uint local_2c;
  uint *local_28;
  longlong *local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = *(uint *)(*param_2 + 8);
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar2 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x48);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & local_2c) * 4);
    if (iVar1 != -1) {
      lVar2 = *(longlong *)(param_1 + 8);
      do {
        if (*(uint *)(lVar2 + (longlong)iVar1 * 0x20) == local_2c) goto LAB_1414b4d59;
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = &local_2c;
  local_20 = param_2;
  FUN_145e3034c((longlong *)(param_1 + 8),local_14);
  (**(code **)(*(longlong *)*param_2 + 8))();
LAB_1414b4d59:
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414b4d76 FUN_1414b4d76 body=486 status=ok
// SIG undefined FUN_1414b4d76(void)

void FUN_1414b4d76(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x60;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414b4f68 FUN_1414b4f68 body=1474 status=ok
// SIG undefined FUN_1414b4f68(void)

undefined8 * FUN_1414b4f68(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_14064ffa8();
  *param_1 = &PTR_FUN_14b8ef2f0;
  param_1[0x72] = &PTR_FUN_14b8ef960;
  param_1[0x73] = &PTR_FUN_14b8ef980;
  param_1[0x74] = &PTR_FUN_14b8ef9b0;
  param_1[0x75] = &PTR_FUN_14b8ef9c0;
  param_1[0x76] = &PTR_FUN_14b8efa30;
  param_1[0x77] = &PTR_FUN_14b8efa60;
  param_1[0x78] = &PTR_FUN_14b8efa90;
  param_1[0x7f] = &PTR_FUN_14b8efb40;
  param_1[0x80] = &PTR_FUN_14b8efbb0;
  param_1[0x81] = &PTR_FUN_14b8efc20;
  param_1[0x82] = &PTR_FUN_14b8efc50;
  param_1[0x83] = &PTR_FUN_14b8efc90;
  param_1[0x84] = &PTR_FUN_14b8efd30;
  param_1[0x85] = &PTR_FUN_14b8efd50;
  param_1[0x89] = &PTR_FUN_14b8efd70;
  param_1[0x8a] = &PTR_FUN_14b8efe30;
  param_1[0x8b] = &PTR_FUN_14b8efeb0;
  param_1[0x8c] = &PTR_FUN_14b8eff00;
  param_1[0x8d] = &PTR_FUN_14b8eff40;
  param_1[0x8e] = &PTR_FUN_14b8eff60;
  param_1[0x8f] = &PTR_FUN_14b8eff80;
  param_1[0x90] = &PTR_FUN_14b8effa0;
  param_1[0x91] = &PTR_FUN_14b8effc0;
  param_1[0x92] = &PTR_FUN_14b8effe0;
  param_1[0x93] = &PTR_FUN_14b8f0000;
  param_1[0x94] = &PTR_FUN_14b8f0020;
  param_1[0x95] = &PTR_FUN_14b8f0040;
  param_1[0x96] = &PTR_FUN_14b8f0060;
  param_1[0x34b] = &PTR_FUN_14b8f0080;
  param_1[0x352] = &PTR_FUN_14b8f0090;
  param_1[0x353] = &PTR_FUN_14b8f00d0;
  param_1[0x354] = &PTR_FUN_14b8f0110;
  param_1[0x355] = &PTR_FUN_14b8f0160;
  param_1[0x356] = &PTR_FUN_14b8f0190;
  param_1[0x359] = &PTR_FUN_14b8f01d0;
  param_1[0x35a] = &PTR_FUN_14b8f01e0;
  param_1[0x35b] = &PTR_FUN_14b8f0210;
  param_1[0x35c] = &PTR_FUN_14b8f02b0;
  param_1[0x4bf] = &PTR_FUN_14b8f02d0;
  param_1[0x4c4] = 0;
  *(undefined4 *)(param_1 + 0x4c5) = 0;
  param_1[0x4c0] = 0;
  param_1[0x4c1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x262c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2634) = 0;
  param_1[0x4c8] = 0;
  *(undefined4 *)(param_1 + 0x4c9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2664) = 0;
  *(undefined4 *)((longlong)param_1 + 0x266c) = 0;
  *(undefined2 *)(param_1 + 0x4cc) = 0;
  param_1[0x4ca] = 0;
  param_1[0x4cb] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  param_1[0x4cf] = puVar1;
  param_1[0x4ce] = puVar1;
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar1 = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  param_1[0x4d1] = puVar1;
  param_1[0x4d0] = puVar1;
  puVar1 = (undefined8 *)FUN_14001cc68(0x28);
  *puVar1 = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  param_1[0x4d3] = puVar1;
  param_1[0x4d2] = puVar1;
  param_1[0x4dc] = 0;
  *(undefined4 *)(param_1 + 0x4dd) = 0;
  param_1[0x4d4] = 0;
  param_1[0x4d5] = 0;
  param_1[0x4d6] = 0;
  param_1[0x4d7] = 0;
  param_1[0x4d8] = 0;
  param_1[0x4d9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x26ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x26f4) = 0;
  param_1[0x4e0] = 0;
  *(undefined4 *)(param_1 + 0x4e1) = 0;
  param_1[0x4e2] = 0;
  param_1[0x4e3] = 0;
  param_1[0x4e4] = 0;
  param_1[0x4e5] = 0;
  *(undefined4 *)(param_1 + 0x4e6) = 2;
  param_1[0x505] = 0;
  *(undefined4 *)(param_1 + 0x506) = 0;
  memset((void *)((longlong)param_1 + 0x2734),0,0xe4);
  *(undefined8 *)((longlong)param_1 + 0x2834) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x283c) = 0;
  param_1[0x509] = 0;
  *(undefined4 *)(param_1 + 0x50a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x286c) = 0;
  param_1[0x50f] = 0;
  param_1[0x510] = 0;
  *(undefined4 *)(param_1 + 0x511) = 0;
  param_1[0x512] = 0;
  param_1[0x513] = 0;
  param_1[0x51c] = 0;
  *(undefined4 *)(param_1 + 0x51d) = 0;
  param_1[0x517] = 0;
  param_1[0x518] = 0;
  param_1[0x519] = 0;
  param_1[0x50c] = 0;
  *(undefined2 *)(param_1 + 0x50d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x28f4) = 0;
  param_1[0x520] = 0;
  *(undefined4 *)(param_1 + 0x521) = 0;
  *(undefined2 *)(param_1 + 0x522) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2912) = 0;
  param_1[0x527] = 0;
  *(undefined4 *)(param_1 + 0x528) = 0;
  param_1[0x523] = 0;
  param_1[0x524] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2944) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x294c) = 0;
  param_1[0x52b] = 0;
  *(undefined4 *)(param_1 + 0x52c) = 0;
  param_1[0x531] = 0;
  *(undefined4 *)(param_1 + 0x532) = 0;
  param_1[0x52d] = 0;
  param_1[0x52e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2994) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x299c) = 0;
  param_1[0x535] = 0;
  *(undefined4 *)(param_1 + 0x536) = 0;
  param_1[0x53b] = 0;
  *(undefined4 *)(param_1 + 0x53c) = 0;
  param_1[0x537] = 0;
  param_1[0x538] = 0;
  *(undefined8 *)((longlong)param_1 + 0x29e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x29ec) = 0;
  param_1[0x53f] = 0;
  *(undefined4 *)(param_1 + 0x540) = 0;
  param_1[0x543] = 0;
  param_1[0x544] = 0;
  param_1[0x541] = 0;
  param_1[0x542] = 0;
  *(undefined4 *)(param_1 + 0x545) = 2;
  *(undefined4 *)((longlong)param_1 + 0x2a3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a34) = 0;
  *(undefined4 *)(param_1 + 0x548) = 2;
  *(undefined4 *)((longlong)param_1 + 0x2a54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a4c) = 0;
  *(undefined4 *)(param_1 + 0x54b) = 2;
  *(undefined4 *)((longlong)param_1 + 0x2a6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a64) = 0;
  *(undefined4 *)(param_1 + 0x54e) = 2;
  *(undefined4 *)((longlong)param_1 + 0x2a84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a7c) = 0;
  *(undefined4 *)(param_1 + 0x551) = 2;
  *(undefined4 *)((longlong)param_1 + 0x2a9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a94) = 0;
  *(undefined4 *)(param_1 + 0x554) = 2;
  *(undefined4 *)((longlong)param_1 + 0x2ab4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2aa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2aac) = 0;
  param_1[0x557] = 2;
  *(undefined4 *)(param_1 + 0x558) = 0;
  param_1[0x559] = 0;
  param_1[0x55a] = 0;
  param_1[0x55b] = 2;
  *(undefined2 *)(param_1 + 0x55c) = 0;
  param_1[0x56d] = 0;
  *(undefined4 *)(param_1 + 0x56e) = 0;
  *(undefined1 *)(param_1 + 0x561) = 0;
  param_1[0x55f] = 0;
  param_1[0x560] = 0;
  param_1[0x55d] = 0;
  param_1[0x55e] = 0;
  *(undefined1 *)(param_1 + 0x566) = 0;
  param_1[0x564] = 0;
  param_1[0x565] = 0;
  param_1[0x562] = 0;
  param_1[0x563] = 0;
  param_1[0x569] = 0;
  param_1[0x56a] = 0;
  param_1[0x567] = 0;
  param_1[0x568] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2b7c) = 0;
  param_1[0x571] = 0;
  *(undefined4 *)(param_1 + 0x572) = 0;
  param_1[0x573] = 0;
  param_1[0x574] = 0;
  param_1[0x575] = 2;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  return param_1;
}



// FUNCTION 1414b552a FUN_1414b552a body=179 status=ok
// SIG undefined FUN_1414b552a(void)

void FUN_1414b552a(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1414b55ac;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1414b55ac:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1414b55de FUN_1414b55de body=136 status=ok
// SIG undefined FUN_1414b55de(void)

void FUN_1414b55de(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = 0;
  do {
    *(undefined8 *)(param_1 + 0x70 + lVar4) = 0;
    plVar3 = *(longlong **)(param_1 + 0x78 + lVar4);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x78 + lVar4) = 0;
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x80);
  FUN_145cb6bb0(param_1 + 0x28,0);
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_140ca8596(param_1 + 0x60,0);
    return;
  }
  return;
}



// FUNCTION 1414b5666 FUN_1414b5666 body=147 status=ok
// SIG undefined FUN_1414b5666(void)

void FUN_1414b5666(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_LAB_14b3fd640;
  plVar3 = (longlong *)param_1[0x1f];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  lVar4 = 0xe8;
  do {
    plVar3 = *(longlong **)((longlong)param_1 + lVar4);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != 0x68);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_145cb6b78(param_1 + 5);
  return;
}



// FUNCTION 1414b56fa FUN_1414b56fa body=81 status=ok
// SIG undefined FUN_1414b56fa(void)

void FUN_1414b56fa(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1414b5774(param_1 + 2);
  FUN_1414b574b(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1414b574b FUN_1414b574b body=40 status=ok
// SIG undefined FUN_1414b574b(void)

void FUN_1414b574b(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1449db362(param_1);
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 1414b5774 FUN_1414b5774 body=55 status=ok
// SIG undefined FUN_1414b5774(void)

void FUN_1414b5774(longlong *param_1)

{
  FUN_1414b57ac(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1414b57ac FUN_1414b57ac body=123 status=ok
// SIG undefined FUN_1414b57ac(void)

void FUN_1414b57ac(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1414b5828 FUN_1414b5828 body=4022 status=ok
// SIG undefined FUN_1414b5828(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1414b5828(longlong param_1,char param_2,char param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  uint uVar19;
  longlong *plVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 local_140;
  undefined1 local_138;
  undefined4 local_130;
  char local_11a;
  char local_119;
  longlong local_118;
  longlong *local_110;
  longlong *local_108;
  longlong *local_100;
  uint *local_f8;
  longlong local_f0;
  longlong local_e8;
  uint local_e0;
  longlong local_d8;
  uint local_d0;
  longlong local_c8;
  uint local_c0;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined2 uStack_96;
  undefined4 uStack_94;
  uint uStack_90;
  uint uStack_8c;
  undefined1 local_88 [24];
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_a8 = (longlong *)0x0;
  uStack_a0 = 0;
  local_b8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  local_100 = (longlong *)(param_1 + 0x1d0);
  local_98 = 0;
  uStack_97 = 0;
  uStack_96 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  iVar1 = *(int *)(param_1 + 0x1f8);
  local_11a = param_3;
  local_119 = param_2;
  local_118 = param_1;
  if (iVar1 == 0) {
    uVar24 = 1;
    uVar22 = 0;
    iVar16 = 0;
    iVar15 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0x1f0);
    if (*(uint **)(param_1 + 0x1f0) == (uint *)0x0) {
      puVar4 = (uint *)(param_1 + 0x1e0);
    }
    uVar19 = *puVar4;
    if (uVar19 == 0) {
      iVar16 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar16 = iVar1 + -1;
      }
      uVar22 = 0;
      uVar10 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar10 = uVar22;
      }
      iVar16 = 0;
      do {
        if (uVar10 == uVar22) goto LAB_1414b5aa2;
        iVar16 = iVar16 + 0x20;
        uVar19 = puVar4[uVar22 + 1];
        uVar22 = uVar22 + 1;
      } while (uVar19 == 0);
    }
    else {
      uVar22 = 0;
      iVar16 = 0;
    }
    uVar24 = (ulonglong)(-uVar19 & uVar19);
    uVar10 = uVar24 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar15 = (iVar16 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar15) {
      iVar15 = iVar1;
    }
  }
  if (iVar15 != iVar1) {
    uVar19 = 0xffffffff;
    iVar3 = iVar1;
    do {
      uVar7 = uStack_90;
      lVar13 = *(longlong *)(*local_100 + 0x10 + (longlong)iVar15 * 0x20);
      if (0 < *(int *)(lVar13 + 0x18)) {
        lVar23 = (longlong)(int)uStack_90;
        uStack_90 = uStack_90 + 1;
        if (uStack_8c < uStack_90) {
          FUN_1446dd912(&local_98,uVar7);
        }
        lVar21 = CONCAT44(uStack_94,CONCAT22(uStack_96,CONCAT11(uStack_97,local_98)));
        *(undefined4 *)(lVar21 + 8 + lVar23 * 0xc) = *(undefined4 *)(lVar13 + 0x18);
        *(undefined8 *)(lVar21 + lVar23 * 0xc) = *(undefined8 *)(lVar13 + 0x10);
        iVar3 = *(int *)(local_118 + 0x1f8);
      }
      lVar13 = local_118;
      uVar19 = uVar19 & ~(uint)uVar24;
      puVar4 = *(uint **)(local_118 + 0x1f0);
      if (*(uint **)(local_118 + 0x1f0) == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 0x1e0);
      }
      iVar15 = (int)uVar22;
      lVar23 = (longlong)iVar15;
      uVar7 = puVar4[lVar23] & uVar19;
      if (uVar7 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar16 = iVar16 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar15) {
          iVar9 = iVar15;
        }
        if (iVar15 < iVar8) {
          lVar21 = 0;
          do {
            uVar7 = (puVar4 + lVar23 + 1)[lVar21];
            if (uVar7 != 0) {
              uVar22 = (ulonglong)(iVar15 + (int)lVar21 + 1);
              uVar19 = 0xffffffff;
              goto LAB_1414b5a17;
            }
            iVar16 = iVar16 + 0x20;
            lVar21 = lVar21 + 1;
          } while (iVar9 - lVar23 != lVar21);
          uVar19 = 0xffffffff;
          lVar23 = (longlong)iVar9;
        }
        uVar22 = lVar23 + 1U & 0xffffffff;
        iVar15 = iVar3;
      }
      else {
LAB_1414b5a17:
        uVar24 = (ulonglong)(-uVar7 & uVar7);
        uVar10 = uVar24 * 2 + 1;
        lVar23 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        iVar15 = (iVar16 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar15) {
          iVar15 = iVar3;
        }
      }
    } while (iVar15 != iVar1);
    lVar23 = CONCAT44(uStack_94,CONCAT22(uStack_96,CONCAT11(uStack_97,local_98)));
    if ((longlong)(int)uStack_90 != 0) {
      lVar21 = (longlong)(int)uStack_90 * 0xc;
      do {
        FUN_140d58c30(lVar13,lVar23,0);
        lVar23 = lVar23 + 0xc;
        lVar21 = lVar21 + -0xc;
      } while (lVar21 != 0);
      lVar23 = CONCAT44(uStack_94,CONCAT22(uStack_96,CONCAT11(uStack_97,local_98)));
    }
    if (lVar23 != 0) {
      FUN_1400020a8(lVar23);
    }
  }
LAB_1414b5aa2:
  local_110 = (longlong *)(local_118 + 0x170);
  puVar4 = (uint *)(local_118 + 0x180);
  iVar1 = *(int *)(local_118 + 0x198);
  if (iVar1 == 0) {
    uVar24 = 1;
    uVar22 = 0;
    iVar16 = 0;
    iVar15 = 0;
  }
  else {
    puVar5 = *(uint **)(local_118 + 400);
    if (*(uint **)(local_118 + 400) == (uint *)0x0) {
      puVar5 = puVar4;
    }
    uVar19 = *puVar5;
    if (uVar19 == 0) {
      iVar16 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar16 = iVar1 + -1;
      }
      uVar22 = 0;
      uVar10 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar10 = uVar22;
      }
      iVar16 = 0;
      do {
        if (uVar10 == uVar22) goto LAB_1414b5b44;
        iVar16 = iVar16 + 0x20;
        uVar19 = puVar5[uVar22 + 1];
        uVar22 = uVar22 + 1;
      } while (uVar19 == 0);
    }
    else {
      uVar22 = 0;
      iVar16 = 0;
    }
    uVar24 = (ulonglong)(-uVar19 & uVar19);
    uVar10 = uVar24 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar15 = (iVar16 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar15) {
      iVar15 = iVar1;
    }
  }
  if (iVar15 != iVar1) {
    uVar19 = 0xffffffff;
    local_f8 = puVar4;
    do {
      lVar13 = (longlong)iVar15 * 0x18 + *local_110;
      if (local_11a != '\0') {
        lVar23 = (longlong)*(int *)(*(longlong *)(lVar13 + 8) + 0x50);
        if (0 < lVar23) {
          plVar17 = *(longlong **)(*(longlong *)(lVar13 + 8) + 0x48);
          plVar20 = plVar17 + lVar23 * 2;
          do {
            if ((((int)plVar17[1] != 0) && ((longlong *)*plVar17 != (longlong *)0x0)) &&
               (cVar2 = (**(code **)(*(longlong *)*plVar17 + 0x30))(), cVar2 != '\0')) break;
            plVar17 = plVar17 + 2;
          } while (plVar17 != plVar20);
          uVar10 = uStack_a0;
          lVar23 = (longlong)(int)uStack_a0;
          uVar7 = (int)uStack_a0 + 1;
          uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar7);
          if (uStack_a0._4_4_ < uVar7) {
            FUN_143d3fef8(&local_a8,uVar10 & 0xffffffff);
          }
          local_f0 = lVar23 * 9;
          local_108 = local_a8;
          plVar17 = local_a8 + lVar23 * 9;
          plVar17[8] = 0;
          plVar17[6] = 0;
          plVar17[7] = 0;
          plVar17[4] = 0;
          plVar17[5] = 0;
          plVar17[2] = 0;
          plVar17[3] = 0;
          *plVar17 = 0;
          plVar17[1] = 0;
          FUN_141883444(*(undefined8 *)(lVar13 + 8),&local_98);
          *(undefined1 *)plVar17 = local_98;
          local_98 = 0;
          *(ulonglong *)((longlong)plVar17 + 4) = CONCAT44(uStack_90,uStack_94);
          uStack_94 = 0;
          uStack_90 = 0;
          FUN_1404e49fa(plVar17 + 2,local_88);
          *(undefined1 *)((longlong)plVar17 + 1) = uStack_97;
          uStack_97 = 0;
          if (local_70 != 0) {
            FUN_1400020a8();
          }
          FUN_145840b9c(local_108 + local_f0 + 7,*(longlong *)(lVar13 + 8) + 0x48);
          puVar4 = local_f8;
        }
      }
      FUN_140d59baf(*(undefined8 *)(lVar13 + 8));
      uVar19 = uVar19 & ~(uint)uVar24;
      puVar5 = *(uint **)(local_118 + 400);
      if (*(uint **)(local_118 + 400) == (uint *)0x0) {
        puVar5 = puVar4;
      }
      iVar3 = *(int *)(local_118 + 0x198);
      iVar15 = (int)uVar22;
      lVar13 = (longlong)iVar15;
      uVar7 = puVar5[lVar13] & uVar19;
      if (uVar7 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar16 = iVar16 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar15) {
          iVar9 = iVar15;
        }
        if (iVar15 < iVar8) {
          lVar23 = 0;
          do {
            uVar7 = (puVar5 + lVar13 + 1)[lVar23];
            if (uVar7 != 0) {
              uVar22 = (ulonglong)(iVar15 + (int)lVar23 + 1);
              uVar19 = 0xffffffff;
              goto LAB_1414b6003;
            }
            iVar16 = iVar16 + 0x20;
            lVar23 = lVar23 + 1;
          } while (iVar9 - lVar13 != lVar23);
          uVar19 = 0xffffffff;
          iVar15 = iVar9;
        }
        uVar22 = (ulonglong)(iVar15 + 1);
        iVar15 = iVar3;
      }
      else {
LAB_1414b6003:
        uVar24 = (ulonglong)(-uVar7 & uVar7);
        uVar10 = uVar24 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar15 = (iVar16 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar15) {
          iVar15 = iVar3;
        }
      }
    } while (iVar15 != iVar1);
  }
LAB_1414b5b44:
  FUN_14586699a(local_110);
  if ((longlong)*(int *)(local_118 + 0x1c8) != 0) {
    plVar17 = *(longlong **)(local_118 + 0x1c0);
    local_108 = plVar17 + *(int *)(local_118 + 0x1c8);
    do {
      local_110 = (longlong *)*plVar17;
      if ((longlong)(int)local_110[0xd] != 0) {
        puVar18 = (undefined8 *)local_110[0xc];
        puVar14 = puVar18 + (int)local_110[0xd];
        do {
          uVar22 = uStack_b0;
          plVar20 = (longlong *)*puVar18;
          if ((local_11a != '\0') && ((longlong)(int)plVar20[0x38] != 0)) {
            lVar13 = 0;
            do {
              if ((*(int *)(plVar20[0x37] + 8 + lVar13) != 0) &&
                 (*(longlong *)(plVar20[0x37] + lVar13) != 0)) {
                lVar13 = (longlong)(int)uStack_b0;
                uVar19 = (int)uStack_b0 + 1;
                uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar19);
                if (uStack_b0._4_4_ < uVar19) {
                  FUN_143d40064(&local_b8,uVar22 & 0xffffffff);
                }
                plVar11 = local_b8 + lVar13 * 6;
                plVar11[2] = 0;
                plVar11[3] = 0;
                *plVar11 = 0;
                plVar11[1] = 0;
                plVar11[4] = 0;
                plVar11[5] = 2;
                lVar13 = plVar20[0xb];
                *(undefined4 *)((longlong)plVar11 + 0x14) = *(undefined4 *)(lVar13 + 0x18);
                *(undefined8 *)((longlong)plVar11 + 0xc) = *(undefined8 *)(lVar13 + 0x10);
                *plVar11 = plVar20[2];
                *(int *)(plVar11 + 1) = (int)plVar20[3];
                if (plVar20 + 0x37 != plVar11 + 3) {
                  FUN_1401b31d8();
                }
                break;
              }
              lVar13 = lVar13 + 0x10;
            } while ((longlong)(int)plVar20[0x38] * 0x10 != lVar13);
          }
          lVar13 = plVar20[0x10];
          if ((longlong)(int)lVar13 != 0) {
            lVar23 = plVar20[0xf];
            lVar21 = 0;
            do {
              plVar11 = *(longlong **)(lVar23 + lVar21);
              if (plVar11 != (longlong *)0x0) {
                if ((undefined1 *)plVar11[0xf] != (undefined1 *)0x0) {
                  *(undefined1 *)plVar11[0xf] = 0;
                }
                (**(code **)*plVar11)(plVar11);
                _DAT_14cb7c9dc = _DAT_14cb7c9dc + -1;
                *plVar11 = (longlong)DAT_14cb7c9d0;
                DAT_14cb7c9d0 = plVar11;
              }
              lVar21 = lVar21 + 8;
            } while ((longlong)(int)lVar13 * 8 != lVar21);
          }
          if (plVar20 != (longlong *)0x0) {
            if ((undefined1 *)plVar20[0x13] != (undefined1 *)0x0) {
              *(undefined1 *)plVar20[0x13] = 0;
            }
            (**(code **)*plVar20)(plVar20);
            _DAT_14cb7c9cc = _DAT_14cb7c9cc + -1;
            *plVar20 = (longlong)DAT_14cb7c9c0;
            DAT_14cb7c9c0 = plVar20;
          }
          puVar18 = puVar18 + 1;
        } while (puVar18 != puVar14);
      }
      plVar20 = local_110;
      if (local_110 != (longlong *)0x0) {
        if ((undefined1 *)local_110[0xe] != (undefined1 *)0x0) {
          *(undefined1 *)local_110[0xe] = 0;
        }
        (**(code **)*local_110)(local_110);
        _DAT_14cb7c9bc = _DAT_14cb7c9bc + -1;
        *plVar20 = (longlong)DAT_14cb7c9b0;
        DAT_14cb7c9b0 = plVar20;
      }
      plVar17 = plVar17 + 1;
    } while (plVar17 != local_108);
  }
  lVar13 = local_118;
  *(undefined4 *)(local_118 + 0x1c8) = 0;
  if (*(int *)(local_118 + 0x1cc) != 0) {
    FUN_14654e362(local_118 + 0x1c0);
  }
  *(undefined4 *)(lVar13 + 0x2a8) = 0;
  if (*(int *)(lVar13 + 0x2ac) != 0) {
    FUN_14884c9c8(lVar13 + 0x2a0);
  }
  FUN_1459005f4(lVar13 + 0x220);
  if (*(int *)(lVar13 + 0x28c) < 0) {
    *(undefined4 *)(lVar13 + 0x288) = 0;
    FUN_1446dda88(lVar13 + 0x280,0);
  }
  else {
    *(undefined4 *)(lVar13 + 0x288) = 0;
  }
  *(undefined4 *)(lVar13 + 0x298) = 0;
  if (*(int *)(lVar13 + 0x29c) != 0) {
    FUN_1446dda88(lVar13 + 0x290,0);
  }
  FUN_145c86556(local_100);
  *(undefined4 *)(lVar13 + 0x300) = 0;
  FUN_14068ded2(lVar13 + 0x308,0);
  *(undefined1 *)(lVar13 + 0x2b0) = 1;
  *(undefined4 *)(lVar13 + 0x2c0) = 0;
  if (*(int *)(lVar13 + 0x2c4) != 0) {
    FUN_1446dda88(lVar13 + 0x2b8,0);
  }
  *(undefined1 *)(lVar13 + 0x2e0) = 1;
  *(undefined4 *)(lVar13 + 0x2f0) = 0;
  if (*(int *)(lVar13 + 0x2f4) != 0) {
    FUN_1446dda88(lVar13 + 0x2e8,0);
  }
  *(undefined1 *)(lVar13 + 0x2c8) = 1;
  *(undefined4 *)(lVar13 + 0x2d8) = 0;
  if (*(int *)(lVar13 + 0x2dc) != 0) {
    FUN_1446dda88(lVar13 + 0x2d0,0);
  }
  FUN_1458c9fac(lVar13 + 0x360);
  FUN_1458ca13c(lVar13 + 0x3b0);
  *(undefined4 *)(lVar13 + 0x400) = 0;
  lVar23 = lVar13 + 0x408;
  iVar1 = *(int *)(lVar13 + 0x450);
  if (iVar1 < 2) {
    lVar21 = lVar13 + 0x440;
    if (*(longlong *)(lVar13 + 0x448) != 0) {
      lVar21 = *(longlong *)(lVar13 + 0x448);
    }
    iVar16 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar16 = iVar1;
    }
    if (*(int *)(lVar13 + 0x410) - *(int *)(lVar13 + 0x43c) < iVar16 >> 2) {
      iVar1 = *(int *)(lVar13 + 0x430);
      if (iVar1 == 0) {
        uVar24 = 1;
        iVar16 = 0;
        uVar22 = 0;
        iVar15 = 0;
      }
      else {
        puVar4 = *(uint **)(lVar13 + 0x428);
        if (*(uint **)(lVar13 + 0x428) == (uint *)0x0) {
          puVar4 = (uint *)(lVar13 + 0x418);
        }
        uVar19 = *puVar4;
        if (uVar19 == 0) {
          iVar16 = iVar1 + 0x1e;
          if (-1 < iVar1 + -1) {
            iVar16 = iVar1 + -1;
          }
          uVar22 = 0;
          uVar10 = (ulonglong)(uint)(iVar16 >> 5);
          if (iVar16 >> 5 < 1) {
            uVar10 = uVar22;
          }
          iVar16 = 0;
          do {
            if (uVar10 == uVar22) goto LAB_1414b6212;
            iVar16 = iVar16 + 0x20;
            uVar19 = puVar4[uVar22 + 1];
            uVar22 = uVar22 + 1;
          } while (uVar19 == 0);
        }
        else {
          iVar16 = 0;
          uVar22 = 0;
        }
        uVar24 = (ulonglong)(-uVar19 & uVar19);
        uVar10 = uVar24 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar15 = (iVar16 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
        if (iVar1 <= iVar15) {
          iVar15 = iVar1;
        }
      }
      if (iVar15 != iVar1) {
        uVar19 = 0xffffffff;
        do {
          *(undefined4 *)
           (lVar21 + (longlong)
                     *(int *)(*(longlong *)(local_118 + 0x408) + 0x1c + (longlong)iVar15 * 0x20) * 4
           ) = 0xffffffff;
          uVar19 = ~(uint)uVar24 & uVar19;
          puVar4 = *(uint **)(local_118 + 0x428);
          if (*(uint **)(local_118 + 0x428) == (uint *)0x0) {
            puVar4 = (uint *)(lVar13 + 0x418);
          }
          iVar3 = *(int *)(local_118 + 0x430);
          iVar15 = (int)uVar22;
          lVar6 = (longlong)iVar15;
          uVar7 = puVar4[lVar6] & uVar19;
          if (uVar7 == 0) {
            iVar8 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar8 = iVar3 + -1;
            }
            iVar8 = iVar8 >> 5;
            iVar16 = iVar16 + 0x20;
            iVar9 = iVar8;
            if (iVar8 < iVar15) {
              iVar9 = iVar15;
            }
            if (iVar15 < iVar8) {
              lVar25 = 0;
              do {
                uVar7 = puVar4[lVar6 + lVar25 + 1];
                if (uVar7 != 0) {
                  uVar22 = (ulonglong)(iVar15 + (int)lVar25 + 1);
                  uVar19 = 0xffffffff;
                  goto LAB_1414b676d;
                }
                iVar16 = iVar16 + 0x20;
                lVar25 = lVar25 + 1;
              } while (iVar9 - lVar6 != lVar25);
              uVar19 = 0xffffffff;
              iVar15 = iVar9;
            }
            uVar22 = (ulonglong)(iVar15 + 1);
            iVar15 = iVar3;
          }
          else {
LAB_1414b676d:
            uVar24 = (ulonglong)(-uVar7 & uVar7);
            uVar10 = uVar24 * 2 + 1;
            lVar6 = 0x3f;
            if (uVar10 != 0) {
              for (; uVar10 >> lVar6 == 0; lVar6 = lVar6 + -1) {
              }
            }
            iVar15 = (iVar16 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
            if (iVar3 <= iVar15) {
              iVar15 = iVar3;
            }
          }
        } while (iVar15 != iVar1);
      }
    }
    else if (iVar1 == 1) {
      lVar6 = 0;
      do {
        *(undefined4 *)(lVar21 + lVar6 * 4) = 0xffffffff;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(lVar13 + 0x450));
    }
LAB_1414b6212:
    FUN_143d3ead8(lVar23);
  }
  else {
    FUN_143d3ead8(lVar23);
    *(undefined4 *)(lVar13 + 0x450) = 1;
    FUN_143d3fb46(lVar23);
  }
  lVar13 = local_118;
  if (local_119 != '\0') {
    *(undefined1 *)(local_118 + 0x15c) = 1;
    if (*(int *)(local_118 + 0x16c) < 0) {
      *(undefined4 *)(local_118 + 0x168) = 0;
      FUN_1446dda88(local_118 + 0x160,0);
    }
    else {
      *(undefined4 *)(local_118 + 0x168) = 0;
    }
  }
  if (((((*(int *)(lVar13 + 0x144) != 0) && (uVar19 = *(uint *)(lVar13 + 0x140), -1 < (int)uVar19))
       && ((int)uVar19 < DAT_14c9647dc)) &&
      ((puVar14 = (undefined8 *)
                  ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8)),
       puVar14 != (undefined8 *)0x0 && (*(int *)(puVar14 + 2) == *(int *)(lVar13 + 0x144))))) &&
     ((*(uint *)(puVar14 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(puVar14 + 1) & 0x10200000) == 0) {
      uVar12 = *puVar14;
    }
    else {
      uVar12 = 0;
    }
    FUN_1405f658a(uVar12);
  }
  if (local_11a != '\0') {
    if (*(char *)(lVar13 + 0x150) != '\x03') {
      if ((longlong)(int)uStack_a0 != 0) {
        plVar20 = local_a8 + (longlong)(int)uStack_a0 * 9;
        plVar17 = local_a8;
        do {
          local_140 = *(undefined1 *)((longlong)plVar17 + 1);
          iVar1 = (int)plVar17[2];
          if (iVar1 == 0) {
            uStack_90 = DAT_14c948620;
            local_98 = (undefined1)DAT_14c948618;
            uStack_97 = (undefined1)((ulonglong)DAT_14c948618 >> 8);
            uStack_96 = (undefined2)((ulonglong)DAT_14c948618 >> 0x10);
            uStack_94 = (undefined4)((ulonglong)DAT_14c948618 >> 0x20);
            local_c0 = DAT_14c948620;
            local_c8 = DAT_14c948618;
            local_d0 = DAT_14c948620;
            local_d8 = DAT_14c948618;
LAB_1414b666a:
            local_e0 = DAT_14c948620;
            local_e8 = DAT_14c948618;
          }
          else {
            iVar16 = *(int *)((longlong)plVar17 + 0x14);
            if ((iVar16 == 0) || (iVar1 == DAT_14c948000)) {
LAB_1414b6683:
              uStack_90 = DAT_14c948620;
              lVar13 = DAT_14c948618;
            }
            else {
              if ((iVar16 < 2) && (*(int *)((longlong)plVar17 + 0x34) < 1)) {
                plVar11 = plVar17 + 3;
              }
              else {
                plVar11 = (longlong *)plVar17[5];
              }
              if ((iVar16 == 1) || (iVar16 < 5)) goto LAB_1414b6683;
              uStack_90 = *(uint *)(plVar11 + 7);
              lVar13 = plVar11[6];
            }
            local_98 = (undefined1)lVar13;
            uStack_97 = (undefined1)((ulonglong)lVar13 >> 8);
            uStack_96 = (undefined2)((ulonglong)lVar13 >> 0x10);
            uStack_94 = (undefined4)((ulonglong)lVar13 >> 0x20);
            iVar16 = *(int *)((longlong)plVar17 + 0x14);
            if ((iVar16 == 0) || (iVar1 == DAT_14c948000)) {
LAB_1414b669c:
              local_c0 = DAT_14c948620;
              local_c8 = DAT_14c948618;
            }
            else {
              if ((iVar16 < 2) && (*(int *)((longlong)plVar17 + 0x34) < 1)) {
                plVar11 = plVar17 + 3;
              }
              else {
                plVar11 = (longlong *)plVar17[5];
              }
              if ((iVar16 == 1) || (iVar16 < 4)) goto LAB_1414b669c;
              local_c0 = *(uint *)((longlong)plVar11 + 0x2c);
              local_c8 = *(longlong *)((longlong)plVar11 + 0x24);
            }
            iVar16 = *(int *)((longlong)plVar17 + 0x14);
            if ((iVar16 == 0) || (iVar1 == DAT_14c948000)) {
LAB_1414b66b5:
              local_d0 = DAT_14c948620;
              local_d8 = DAT_14c948618;
            }
            else {
              if ((iVar16 < 2) && (*(int *)((longlong)plVar17 + 0x34) < 1)) {
                plVar11 = plVar17 + 3;
              }
              else {
                plVar11 = (longlong *)plVar17[5];
              }
              if ((iVar16 == 1) || (iVar16 < 3)) goto LAB_1414b66b5;
              local_d0 = *(uint *)(plVar11 + 4);
              local_d8 = plVar11[3];
            }
            iVar16 = *(int *)((longlong)plVar17 + 0x14);
            if ((iVar16 == 0) || (iVar1 == DAT_14c948000)) goto LAB_1414b666a;
            if ((iVar16 < 2) && (*(int *)((longlong)plVar17 + 0x34) < 1)) {
              plVar11 = plVar17 + 3;
            }
            else {
              plVar11 = (longlong *)plVar17[5];
            }
            if ((iVar16 == 1) || (iVar16 < 2)) goto LAB_1414b666a;
            local_e0 = *(uint *)((longlong)plVar11 + 0x14);
            local_e8 = *(longlong *)((longlong)plVar11 + 0xc);
          }
          local_148 = &local_98;
          local_130 = 0;
          local_138 = 1;
          lVar13 = FUN_1403a0554(local_118,&local_e8,&local_d8,&local_c8);
          if (lVar13 != 0) {
            if ((longlong)(int)plVar17[8] != 0) {
              plVar11 = (longlong *)plVar17[7];
              lVar23 = (longlong)(int)plVar17[8] << 4;
              do {
                if ((((int)plVar11[1] != 0) && ((longlong *)*plVar11 != (longlong *)0x0)) &&
                   (cVar2 = (**(code **)(*(longlong *)*plVar11 + 0x30))(), cVar2 != '\0')) {
                  FUN_1409842e3(lVar13 + 0x48,plVar11);
                }
                plVar11 = plVar11 + 2;
                lVar23 = lVar23 + -0x10;
              } while (lVar23 != 0);
            }
            FUN_140bde2c8(local_118,lVar13,0);
          }
          plVar17 = plVar17 + 9;
        } while (plVar17 != plVar20);
      }
    }
    lVar13 = local_118;
    if ((longlong)(int)uStack_b0 != 0) {
      lVar23 = local_118 + 0x270;
      lVar21 = (longlong)(int)uStack_b0 * 0x30;
      puVar14 = local_b8;
      do {
        lVar6 = FUN_144976d68(lVar13,(longlong)puVar14 + 0xc,1);
        if ((lVar6 != 0) && (lVar6 = FUN_1403a09ea(lVar13,lVar6,puVar14,1), lVar6 != 0)) {
          if (puVar14 + 3 != (undefined8 *)(lVar6 + 0x1b8)) {
            FUN_1401b31d8((undefined8 *)(lVar6 + 0x1b8));
          }
          FUN_140bdf372(lVar23,puVar14);
        }
        puVar14 = puVar14 + 6;
        lVar21 = lVar21 + -0x30;
      } while (lVar21 != 0);
    }
  }
  FUN_14654da3a(lVar13);
  FUN_143d3febe(local_b8,uStack_b0 & 0xffffffff);
  if (local_b8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_143d3fe71(local_a8,uStack_a0 & 0xffffffff);
  if (local_a8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414b67e0 FUN_1414b67e0 body=529 status=ok
// SIG undefined FUN_1414b67e0(void)

void FUN_1414b67e0(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 0) {
    uVar14 = 1;
    uVar16 = 0;
    iVar13 = 0;
    iVar8 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar4 = (uint *)(param_1 + 0x18);
    }
    uVar15 = *puVar4;
    if (uVar15 == 0) {
      iVar13 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar13 = iVar1 + -1;
      }
      uVar16 = 0;
      uVar9 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar9 = uVar16;
      }
      iVar13 = 0;
      do {
        if (uVar9 == uVar16) goto LAB_1414b6884;
        iVar13 = iVar13 + 0x20;
        uVar15 = puVar4[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar16 = 0;
      iVar13 = 0;
    }
    uVar14 = (ulonglong)(-uVar15 & uVar15);
    uVar9 = uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar8 = (iVar13 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar8) {
      iVar8 = iVar1;
    }
  }
  if (iVar8 != iVar1) {
    uVar15 = 0xffffffff;
    iVar3 = iVar1;
    do {
      lVar12 = *(longlong *)(param_1 + 8);
      lVar11 = (longlong)*(int *)(lVar12 + 0x18 + (longlong)iVar8 * 0x80);
      if (lVar11 != 0) {
        plVar10 = *(longlong **)(lVar12 + 0x10 + (longlong)iVar8 * 0x80);
        lVar11 = lVar11 << 4;
        do {
          if (((int)plVar10[1] != 0) &&
             (puVar2 = (undefined8 *)*plVar10, puVar2 != (undefined8 *)0x0)) {
            (**(code **)*puVar2)(puVar2,0);
            FUN_1446efa72(plVar10,0,0,0x10);
            *(undefined4 *)(plVar10 + 1) = 0;
          }
          plVar10 = plVar10 + 2;
          lVar11 = lVar11 + -0x10;
        } while (lVar11 != 0);
        iVar3 = *(int *)(param_1 + 0x30);
      }
      uVar15 = uVar15 & ~(uint)uVar14;
      puVar4 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 0x18);
      }
      iVar8 = (int)uVar16;
      lVar12 = (longlong)iVar8;
      uVar5 = puVar4[lVar12] & uVar15;
      if (uVar5 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar8) {
          iVar7 = iVar8;
        }
        if (iVar8 < iVar6) {
          lVar11 = 0;
          do {
            uVar5 = puVar4[lVar12 + lVar11 + 1];
            if (uVar5 != 0) {
              uVar16 = (ulonglong)(iVar8 + (int)lVar11 + 1);
              uVar15 = 0xffffffff;
              goto LAB_1414b69a7;
            }
            iVar13 = iVar13 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar7 - lVar12 != lVar11);
          uVar15 = 0xffffffff;
          lVar12 = (longlong)iVar7;
        }
        uVar16 = lVar12 + 1U & 0xffffffff;
        iVar8 = iVar3;
      }
      else {
LAB_1414b69a7:
        uVar14 = (ulonglong)(-uVar5 & uVar5);
        uVar9 = uVar14 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar8 = (iVar13 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar8) {
          iVar8 = iVar3;
        }
      }
    } while (iVar8 != iVar1);
  }
LAB_1414b6884:
  FUN_14654e3b0((longlong *)(param_1 + 8));
  *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  return;
}



// FUNCTION 1414b69f1 FUN_1414b69f1 body=147 status=ok
// SIG undefined FUN_1414b69f1(void)

undefined8 * FUN_1414b69f1(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(200);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b3fd6f0;
  memset(puVar1 + 5,0,0xa0);
  puVar1[2] = &PTR_LAB_14b3fd710;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0xffffffff00000080;
  puVar1[0x11] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)(puVar1 + 0x17) = 0;
  *(undefined4 *)(puVar1 + 0x18) = 0xffffffff;
  return puVar1;
}



// FUNCTION 1414b6a84 FUN_1414b6a84 body=166 status=ok
// SIG undefined FUN_1414b6a84(void)

void FUN_1414b6a84(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  
  *(undefined4 *)(param_1 + 0xb0) = param_4;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0xa8) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0xa8) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar2 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar3 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar3 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar4;
      }
    }
  }
  *(int *)(param_1 + 0xac) = iVar2;
  return;
}



// FUNCTION 1414b6b2a FUN_1414b6b2a body=297 status=ok
// SIG undefined FUN_1414b6b2a(void)

undefined8 FUN_1414b6b2a(longlong param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  
  *param_3 = 0;
  if (param_2 != 0) {
    plVar7 = (longlong *)(param_1 + 0x70);
    uVar6 = 0;
    do {
      if (*plVar7 == param_2) {
        *param_3 = (char)(1 << ((byte)uVar6 & 0x1f));
        return CONCAT71((int7)(uVar6 >> 8),uVar6 < 8);
      }
      uVar6 = uVar6 + 1;
      plVar7 = plVar7 + 2;
    } while (uVar6 != 8);
    plVar7 = (longlong *)(param_1 + 0x78);
    lVar9 = 0;
    do {
      if (plVar7[-1] == 0) {
        plVar8 = *(longlong **)(param_2 + 0x10);
        bVar3 = true;
        if (plVar8 == (longlong *)0x0) goto LAB_1414b6bf4;
        iVar5 = (int)plVar8[1];
        goto LAB_1414b6b8c;
      }
      lVar9 = lVar9 + 1;
      plVar7 = plVar7 + 2;
    } while (lVar9 != 8);
  }
  return 0;
LAB_1414b6bf4:
  lVar10 = 0;
  plVar8 = (longlong *)0x0;
  goto LAB_1414b6ba6;
  while( true ) {
    LOCK();
    iVar4 = (int)plVar8[1];
    bVar11 = iVar5 == iVar4;
    if (bVar11) {
      *(int *)(plVar8 + 1) = iVar5 + 1;
      iVar4 = iVar5;
    }
    iVar5 = iVar4;
    UNLOCK();
    if (bVar11) break;
LAB_1414b6b8c:
    if (iVar5 == 0) goto LAB_1414b6bf4;
  }
  lVar10 = *(longlong *)(param_2 + 8);
  LOCK();
  *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
  UNLOCK();
  bVar3 = false;
LAB_1414b6ba6:
  plVar7[-1] = lVar10;
  plVar2 = (longlong *)*plVar7;
  if (plVar8 == plVar2) {
    if (plVar8 == (longlong *)0x0) goto LAB_1414b6bba;
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_1414b6bba;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar5 = *piVar1;
    UNLOCK();
    plVar2 = plVar8;
  }
  else {
    *plVar7 = (longlong)plVar8;
    if (plVar2 == (longlong *)0x0) goto LAB_1414b6bba;
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_1414b6bba;
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar5 = *piVar1;
    UNLOCK();
  }
  if (iVar5 == 0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
LAB_1414b6bba:
  if (!bVar3) {
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  iVar5 = 1 << ((byte)lVar9 & 0x1f);
  *param_3 = (char)iVar5;
  return CONCAT71((uint7)(uint3)((uint)iVar5 >> 8),1);
}



// FUNCTION 1414b6c54 FUN_1414b6c54 body=853 status=ok
// SIG undefined FUN_1414b6c54(void)

void FUN_1414b6c54(longlong param_1,undefined8 *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  undefined4 *local_1d0;
  undefined8 *local_1c8;
  ulonglong *local_1c0;
  longlong local_1b8;
  undefined1 *local_1b0;
  longlong *local_1a8;
  undefined8 *local_1a0;
  longlong local_198 [3];
  undefined8 local_180;
  undefined8 local_178;
  ulonglong local_170;
  uint local_168;
  code *local_160;
  ulonglong **local_158;
  undefined4 local_14c;
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  DAT_14cb7caa8 = 0;
  if (DAT_14cb7caac != 0) {
    FUN_1446dda88(&DAT_14cb7caa0);
  }
  memset(local_148,0,0xfc);
  if (((int)*param_3 == (int)DAT_14c948618) && ((int)param_3[1] == DAT_14c948620)) {
    plVar4 = (longlong *)(param_1 + 0x2e8);
  }
  else {
    local_168 = (uint)param_3[1];
    local_170 = *param_3;
    uVar13 = local_170;
    if (local_168 != 0) {
      uVar5 = local_168 >> 0xd ^ (int)local_170 - local_168;
      uVar6 = uVar5 << 8 ^ (-0x61c88647 - local_168) - uVar5;
      uVar10 = uVar6 >> 0xd ^ (local_168 - uVar5) - uVar6;
      uVar5 = uVar10 >> 0xc ^ (uVar5 - uVar6) - uVar10;
      uVar6 = uVar5 << 0x10 ^ (uVar6 - uVar10) - uVar5;
      uVar11 = uVar6 >> 5 ^ (uVar10 - uVar5) - uVar6;
      uVar10 = uVar11 >> 3 ^ (uVar5 - uVar6) - uVar11;
      uVar5 = uVar10 << 10 ^ (uVar6 - uVar11) - uVar10;
      uVar13 = (ulonglong)(uVar5 >> 0xf ^ uVar11 - (uVar10 + uVar5));
    }
    iVar3 = FUN_140e01bfc((longlong *)(param_1 + 0x300),uVar13,&local_170);
    if ((iVar3 == -1) ||
       (lVar12 = (longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0x300),
       plVar4 = (longlong *)(lVar12 + 0x10), plVar4 == (longlong *)0x0 || lVar12 == 0))
    goto LAB_1414b6f5b;
  }
  if (*plVar4 != 0) {
    local_180 = *param_2;
    local_1c8 = &local_180;
    local_178 = param_2[1];
    local_1d0 = &local_14c;
    local_14c = 0;
    local_1d8 = local_148;
    FUN_143d373dc(param_1,*plVar4,&DAT_14c948618,0xff);
    local_1a8 = local_198;
    local_198[0] = 0;
    local_198[1] = 0;
    iVar3 = *(int *)(param_1 + 0x2e4);
    *(int *)(param_1 + 0x2e4) = iVar3 + 1;
    lVar12 = (longlong)*(int *)(param_1 + 0x2d8);
    local_1c0 = param_3;
    local_1b8 = param_1;
    local_1b0 = local_148;
    local_1a0 = param_2;
    if (lVar12 < 1) {
      *(int *)(param_1 + 0x2e4) = iVar3;
    }
    else {
      plVar4 = (longlong *)(param_1 + 0x2d0);
      uVar13 = lVar12 + 1;
      lVar12 = lVar12 * 0x10 + -8;
      bVar9 = 0;
      do {
        if ((*(int *)(*plVar4 + lVar12) == 0) ||
           (plVar1 = *(longlong **)(*plVar4 + -8 + lVar12), plVar1 == (longlong *)0x0)) {
LAB_1414b6e98:
          bVar9 = 1;
        }
        else {
          local_160 = FUN_143d411c0;
          local_158 = &local_1c0;
          cVar2 = (**(code **)(*plVar1 + 0x60))(plVar1,&local_160);
          if (cVar2 == '\0') goto LAB_1414b6e98;
        }
        uVar13 = uVar13 - 1;
        lVar12 = lVar12 + -0x10;
      } while (1 < uVar13);
      iVar3 = *(int *)(param_1 + 0x2e4);
      *(int *)(param_1 + 0x2e4) = iVar3 + -1;
      if ((bool)(bVar9 & iVar3 < 2)) {
        iVar3 = *(int *)(param_1 + 0x2d8);
        iVar7 = iVar3;
        if (0 < iVar3) {
          iVar8 = 0;
          do {
            if (((*(int *)(*plVar4 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar1 = *(longlong **)(*plVar4 + (longlong)iVar8 * 0x10),
                plVar1 == (longlong *)0x0)) ||
               (cVar2 = (**(code **)(*plVar1 + 0x28))(), cVar2 != '\0')) {
              FUN_14005b288(plVar4,iVar8);
              FUN_14005b248(plVar4);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar7 = *(int *)(param_1 + 0x2d8);
          } while (iVar8 < iVar7);
        }
        iVar8 = 2;
        if (2 < iVar7 * 2) {
          iVar8 = iVar7 * 2;
        }
        *(int *)(param_1 + 0x2e0) = iVar8;
        if ((iVar8 < iVar3) && (*(int *)(param_1 + 0x2dc) != iVar7)) {
          FUN_14045812c(plVar4);
        }
      }
    }
    if (local_198[0] != 0) {
      FUN_1400020a8();
    }
  }
LAB_1414b6f5b:
  DAT_14cb7caa8 = 0;
  if (DAT_14cb7caac != 0) {
    FUN_1446dda88(&DAT_14cb7caa0,0);
  }
  if ((local_48 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414b6faa FUN_1414b6faa body=877 status=ok
// SIG undefined FUN_1414b6faa(void)

undefined8 FUN_1414b6faa(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong lVar18;
  uint *puVar19;
  longlong *plVar20;
  uint *puVar21;
  
  if (((param_1 != 0) && (lVar7 = FUN_1400f6f32(), lVar7 != 0)) &&
     (lVar7 = *(longlong *)(lVar7 + 0x68), lVar7 != 0)) {
    lVar8 = FUN_140d1732e(lVar7,param_2 + 0x18);
    iVar5 = FUN_143d9d0da(lVar7,param_2 + 0x18);
    iVar3 = DAT_14cb7c230;
    uVar16 = 0;
    if (iVar5 == -1 || lVar8 == 0) {
      return 0;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    if (DAT_14cb7c230 == 0) {
      uVar15 = 1;
      iVar13 = 0;
      iVar6 = 0;
    }
    else {
      puVar19 = &DAT_14cb7c218;
      if (DAT_14cb7c228 != (uint *)0x0) {
        puVar19 = DAT_14cb7c228;
      }
      uVar14 = *puVar19;
      if (uVar14 == 0) {
        iVar6 = DAT_14cb7c230 + 0x1e;
        if (-1 < DAT_14cb7c230 + -1) {
          iVar6 = DAT_14cb7c230 + -1;
        }
        uVar15 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar15 = 0;
        }
        uVar16 = 0;
        iVar13 = 0;
        do {
          if (uVar15 == uVar16) {
            return 0;
          }
          iVar13 = iVar13 + 0x20;
          uVar14 = puVar19[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar14 == 0);
        uVar16 = uVar16 & 0xffffffff;
      }
      else {
        uVar16 = 0;
        iVar13 = 0;
      }
      uVar15 = (ulonglong)(-uVar14 & uVar14);
      uVar1 = uVar15 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = (iVar13 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
      if (DAT_14cb7c230 <= iVar6) {
        iVar6 = DAT_14cb7c230;
      }
    }
    if (iVar6 != DAT_14cb7c230) {
      uVar14 = 0xffffffff;
      do {
        lVar7 = (longlong)iVar6 * 0x20 + DAT_14cb7c208;
        cVar4 = FUN_1405f6df2(lVar7,uVar2);
        iVar6 = (int)uVar16;
        if ((cVar4 != '\0') && ((longlong)*(int *)(lVar7 + 0x10) != 0)) {
          puVar21 = *(uint **)(lVar7 + 8);
          puVar19 = puVar21 + (longlong)*(int *)(lVar7 + 0x10) * 2;
          do {
            if (((puVar21[1] != 0) && (uVar11 = *puVar21, -1 < (int)uVar11)) &&
               (((int)uVar11 < DAT_14c9647dc &&
                (((plVar17 = (longlong *)
                             ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
                  plVar17 != (longlong *)0x0 && (*(uint *)(plVar17 + 2) == puVar21[1])) &&
                 ((*(uint *)(plVar17 + 1) & 0x10200000) == 0)))))) {
              if ((*(uint *)(plVar17 + 1) & 0x10200000) == 0) {
                lVar7 = *plVar17;
              }
              else {
                lVar7 = 0;
              }
              if (*(longlong *)(*(longlong *)(lVar7 + 0x28) + 0x30) == lVar8) {
LAB_1414b728f:
                if ((*(uint *)(plVar17 + 1) & 0x10200000) == 0) {
                  lVar7 = *plVar17;
                }
                else {
                  lVar7 = 0;
                }
                FUN_1461f34e8(lVar7,*(undefined4 *)(param_2 + 0x1c),iVar5);
                if (puVar21[1] == 0) {
                  return 0;
                }
                uVar14 = *puVar21;
                if ((int)uVar14 < 0) {
                  return 0;
                }
                if ((int)uVar14 < DAT_14c9647dc) {
                  puVar12 = (undefined8 *)
                            ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
                  if (puVar12 == (undefined8 *)0x0) {
                    return 0;
                  }
                  if (*(uint *)(puVar12 + 2) != puVar21[1]) {
                    return 0;
                  }
                  if ((*(uint *)(puVar12 + 1) & 0x10200000) != 0) {
                    return 0;
                  }
                  return *puVar12;
                }
                return 0;
              }
              if ((*(uint *)(plVar17 + 1) & 0x10200000) == 0) {
                lVar7 = *plVar17;
              }
              else {
                lVar7 = 0;
              }
              lVar18 = (longlong)*(int *)(*(longlong *)(lVar7 + 0x28) + 0x50);
              if (lVar18 != 0) {
                plVar20 = *(longlong **)(*(longlong *)(lVar7 + 0x28) + 0x48);
                lVar18 = lVar18 << 3;
                do {
                  if (*(longlong *)(*plVar20 + 0x30) == lVar8) {
                    if (plVar20 != (longlong *)0x0) goto LAB_1414b728f;
                    break;
                  }
                  plVar20 = plVar20 + 1;
                  lVar18 = lVar18 + -8;
                } while (lVar18 != 0);
              }
            }
            puVar21 = puVar21 + 2;
          } while (puVar21 != puVar19);
        }
        uVar14 = uVar14 & ~(uint)uVar15;
        puVar19 = DAT_14cb7c228;
        if (DAT_14cb7c228 == (uint *)0x0) {
          puVar19 = &DAT_14cb7c218;
        }
        lVar7 = (longlong)iVar6;
        uVar11 = puVar19[lVar7] & uVar14;
        if (uVar11 == 0) {
          iVar9 = DAT_14cb7c230 + 0x1e;
          if (-1 < DAT_14cb7c230 + -1) {
            iVar9 = DAT_14cb7c230 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar13 = iVar13 + 0x20;
          iVar10 = iVar9;
          if (iVar9 < iVar6) {
            iVar10 = iVar6;
          }
          if (iVar6 < iVar9) {
            lVar18 = 0;
            do {
              uVar11 = puVar19[lVar7 + lVar18 + 1];
              if (uVar11 != 0) {
                uVar16 = (ulonglong)(iVar6 + (int)lVar18 + 1);
                uVar14 = 0xffffffff;
                goto LAB_1414b724b;
              }
              iVar13 = iVar13 + 0x20;
              lVar18 = lVar18 + 1;
            } while (iVar10 - lVar7 != lVar18);
            uVar14 = 0xffffffff;
            iVar6 = iVar10;
          }
          uVar16 = (ulonglong)(iVar6 + 1);
          iVar6 = DAT_14cb7c230;
        }
        else {
LAB_1414b724b:
          uVar15 = (ulonglong)(-uVar11 & uVar11);
          uVar1 = uVar15 * 2 + 1;
          lVar7 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          iVar6 = (iVar13 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
          if (DAT_14cb7c230 <= iVar6) {
            iVar6 = DAT_14cb7c230;
          }
        }
      } while (iVar6 != iVar3);
    }
  }
  return 0;
}



// FUNCTION 1414b7318 FUN_1414b7318 body=30 status=ok
// SIG undefined FUN_1414b7318(void)

void FUN_1414b7318(longlong param_1)

{
  FUN_140af926c(param_1 + 0x38);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1414b7336 FUN_1414b7336 body=258 status=ok
// SIG undefined FUN_1414b7336(void)

void FUN_1414b7336(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d5390) {
    FUN_144b3d300(&DAT_14c9d5390);
    if (DAT_14c9d5390 == -1) {
      FUN_145712cfe(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FGPUSceneResourceParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x26;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d5310,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c4eeb3);
      _Init_thread_footer(&DAT_14c9d5390);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414b743a FUN_1414b743a body=4967 status=ok
// SIG undefined FUN_1414b743a(void)

void FUN_1414b743a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  ulonglong *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_3f8 [32];
  undefined8 local_3d8;
  undefined8 *local_3d0;
  ulonglong *local_3c8;
  code *local_3c0;
  undefined4 local_3b8;
  ulonglong *local_3b0;
  undefined8 *local_3a8;
  ulonglong *local_3a0;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  longlong local_388;
  undefined8 local_380;
  undefined4 local_378;
  undefined8 local_370;
  undefined8 local_368 [12];
  ulonglong local_308;
  undefined8 uStack_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8 [9];
  ulonglong local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  ulonglong local_270 [3];
  undefined4 local_254;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined1 local_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  ulonglong local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined8 uStack_1e4;
  undefined4 uStack_1dc;
  uint local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined2 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a4;
  undefined4 local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  longlong lStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  longlong local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined8 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined **local_80;
  undefined *local_78;
  longlong local_70;
  ulonglong uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  local_138 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_3c8 = (ulonglong *)FUN_1446ddbd2();
      local_3c0 = FUN_1468d96f0;
      local_3d0 = (undefined8 *)0x0;
      local_3d8 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar6 = *(byte **)(param_2 + 0x20);
  if (pbVar6 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_138);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_138);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_138);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_138 = *(undefined8 *)(pbVar6 + 1);
      *(byte **)(param_2 + 0x20) = pbVar6 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_138);
    }
  }
  local_150 = 0xffffffffffffffff;
  uStack_148 = 0;
  lStack_140 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_3c8 = (ulonglong *)FUN_1446ddbd2();
      local_3c0 = FUN_1403a682c;
      local_3d0 = (undefined8 *)0x0;
      local_3d8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar6 = *(byte **)(param_2 + 0x20);
  if (pbVar6 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_150);
LAB_1414b75bd:
    pbVar6 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_150);
      goto LAB_1414b75bd;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_150);
      goto LAB_1414b75bd;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,&local_150);
      goto LAB_1414b75bd;
    }
    local_150 = *(undefined8 *)(pbVar6 + 1);
    pbVar6 = pbVar6 + 9;
    *(byte **)(param_2 + 0x20) = pbVar6;
  }
  local_158 = 0;
  plVar1 = (longlong *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar6 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_158);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_158);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_158);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_158 = *(longlong *)(pbVar6 + 1);
      *(byte **)(param_2 + 0x20) = pbVar6 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_158);
    }
  }
  plVar8 = &local_158;
  if ((longlong *)*plVar1 != (longlong *)0x0) {
    plVar8 = (longlong *)*plVar1;
  }
  local_170 = 0;
  local_168 = 0x4000;
  local_160 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947e70) {
    FUN_144b3d300(&DAT_14c947e70);
    if (DAT_14c947e70 == -1) {
      local_3c8 = (ulonglong *)FUN_1446ddbd2();
      local_3c0 = FUN_14170fd90;
      local_3d0 = (undefined8 *)0x8000000000000000;
      local_3d8 = 0x8001;
      FUN_14000176a(&DAT_14c947e20,L"FGameDataHandleProperty",0);
      atexit(FUN_1427b4416);
      _Init_thread_footer(&DAT_14c947e70);
    }
  }
  pbVar6 = *(byte **)(param_2 + 0x20);
  if (pbVar6 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_170);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_170);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_170);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_170 = *(undefined8 *)(pbVar6 + 1);
      *(byte **)(param_2 + 0x20) = pbVar6 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_170);
    }
  }
  local_178 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_3c8 = (ulonglong *)FUN_1446ddbd2();
      local_3c0 = FUN_1468d96f0;
      local_3d0 = (undefined8 *)0x0;
      local_3d8 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar6 = *(byte **)(param_2 + 0x20);
  if (pbVar6 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_178);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_178);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_178);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_178 = *(undefined8 *)(pbVar6 + 1);
      *(byte **)(param_2 + 0x20) = pbVar6 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_178);
    }
  }
  local_1d8 = local_1d8 & 0xffffff00;
  uStack_1d4 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
  uStack_1b8 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
  local_1b0 = DAT_14c846508;
  local_1a8 = 0;
  local_1a4 = 0;
  local_198 = 0;
  local_190 = (undefined4)DAT_14c8464e0;
  uStack_18c = DAT_14c8464e0._4_4_;
  uStack_188 = (undefined4)DAT_14c8464e8;
  uStack_184 = DAT_14c8464e8._4_4_;
  local_180 = DAT_14c8464f0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_3c8 = (ulonglong *)FUN_1446ddbd2();
      local_3c0 = FUN_1403a682c;
      local_3d0 = (undefined8 *)0x0;
      local_3d8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar6 = *(byte **)(param_2 + 0x20);
  if (pbVar6 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1d8);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_1d8);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_1d8);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar6 + 1);
      *(byte **)(param_2 + 0x20) = pbVar6 + 9;
      local_1d8 = (uint)uVar2;
      uStack_1d4 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_1d8);
    }
  }
  local_208 = local_208 & 0xffffffffffff0000;
  uStack_200 = (undefined4)DAT_14c8464f8;
  uStack_1fc = DAT_14c8464f8._4_4_;
  uStack_1f8 = (undefined4)DAT_14c846500;
  uStack_1f4 = DAT_14c846500._4_4_;
  uStack_1f0 = DAT_14c846508;
  local_1e8 = 0;
  uStack_1e4 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_3c8 = (ulonglong *)FUN_1446ddbd2();
      local_3c0 = FUN_1403a682c;
      local_3d0 = (undefined8 *)0x0;
      local_3d8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar6 = *(byte **)(param_2 + 0x20);
  if (pbVar6 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_208);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_208);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_208);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_208 = *(ulonglong *)(pbVar6 + 1);
      *(byte **)(param_2 + 0x20) = pbVar6 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_208);
    }
  }
  uStack_250._0_4_ = 0;
  uStack_250._4_4_ = uStack_250._4_4_ & 0xffffff00;
  local_248 = 0xbf80000000000000;
  local_240 = 0xc4750000;
  local_23c = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_3c8 = (ulonglong *)FUN_1446ddbd2();
      local_3c0 = FUN_1403a682c;
      local_3d0 = (undefined8 *)0x0;
      local_3d8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar6 = *(byte **)(param_2 + 0x20);
  if (pbVar6 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_250);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_250);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_250);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar6 + 1);
      *(byte **)(param_2 + 0x20) = pbVar6 + 9;
      uStack_250._0_4_ = (undefined4)uVar2;
      uStack_250._4_4_ = (uint)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_250);
    }
  }
  local_254 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_3c0 = FUN_1408a629c;
      local_3c8 = (ulonglong *)&DAT_14c9520b8;
      local_3d0 = (undefined8 *)0x0;
      local_3d8 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar6 = *(byte **)(param_2 + 0x20);
  if (pbVar6 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_254);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_254);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_254);
    }
    else {
      if (pcVar3 == (code *)&LAB_1428293cc) {
        uVar2 = *(undefined8 *)(pbVar6 + 1);
        pbVar6 = pbVar6 + 9;
        *(byte **)(param_2 + 0x20) = pbVar6;
        local_254 = (undefined4)uVar2;
        uStack_250._0_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
        goto LAB_1414b7b21;
      }
      (*pcVar3)(uVar2,param_2,&local_254);
    }
  }
  pbVar6 = *(byte **)(param_2 + 0x20);
LAB_1414b7b21:
  local_270[0] = local_270[0] & 0xffffffffffffff00;
  local_270[1] = 0;
  local_270[2] = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar6 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_270);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_270);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_270);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_270[0] = *(ulonglong *)(pbVar6 + 1);
      *(byte **)(param_2 + 0x20) = pbVar6 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,local_270);
    }
  }
  puVar13 = local_270;
  if (*(ulonglong **)(param_2 + 0x38) != (ulonglong *)0x0) {
    puVar13 = *(ulonglong **)(param_2 + 0x38);
  }
  local_130 = (ulonglong)local_130._4_4_ << 0x20;
  local_128 = 0;
  local_120 = 0x3002;
  local_118 = 0;
  local_e0 = 0;
  local_d8 = 0x200000000;
  local_d0 = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0xf00000d0;
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  FUN_1405c5fa2();
  local_78 = &DAT_14cb769e8;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = &PTR_FUN_14b0394b0;
  *plVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar6 = *(byte **)(param_2 + 0x20);
  if (pbVar6 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_130);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_130);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_130);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_130 = *(longlong *)(pbVar6 + 1);
      *(byte **)(param_2 + 0x20) = pbVar6 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_130);
    }
  }
  puVar14 = &local_130;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar14 = *(undefined8 **)(param_2 + 0x38);
  }
  local_290 = local_290 & 0xffffffffffffff00;
  local_288 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_280 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_278 = DAT_14c8464f0;
  *plVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar6 = *(byte **)(param_2 + 0x20);
  if (pbVar6 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_290);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_290);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_290);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_290 = *(ulonglong *)(pbVar6 + 1);
      *(byte **)(param_2 + 0x20) = pbVar6 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_290);
    }
  }
  uVar5 = local_254;
  puVar9 = &local_290;
  if (*(ulonglong **)(param_2 + 0x38) != (ulonglong *)0x0) {
    puVar9 = *(ulonglong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar10 = &uStack_250;
  puVar12 = local_2d8;
  for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  uStack_300 = CONCAT44(uStack_1fc,uStack_200);
  local_2e8 = local_1e8;
  uStack_2e4 = (undefined4)uStack_1e4;
  uStack_2e0 = uStack_1e4._4_4_;
  uStack_2dc = uStack_1dc;
  local_2f8 = uStack_1f8;
  uStack_2f4 = uStack_1f4;
  uStack_2f0 = (undefined4)uStack_1f0;
  uStack_2ec = uStack_1f0._4_4_;
  local_308 = local_208;
  puVar11 = &local_1d8;
  puVar10 = local_368;
  for (lVar7 = 0xc; uVar2 = local_178, lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar10 = *(undefined8 *)puVar11;
    puVar11 = puVar11 + 2;
    puVar10 = puVar10 + 1;
  }
  local_380 = local_170;
  local_378 = local_168;
  local_370 = 0;
  local_398 = (undefined4)local_150;
  uStack_394 = local_150._4_4_;
  uStack_390 = (undefined4)uStack_148;
  uStack_38c = uStack_148._4_4_;
  local_388 = lStack_140;
  if ((lStack_140 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  local_3b8 = uVar5;
  local_3c8 = &local_308;
  local_3d8 = uVar2;
  local_3d0 = local_368;
  local_3c0 = (code *)local_2d8;
  local_3b0 = puVar13;
  local_3a8 = puVar14;
  local_3a0 = puVar9;
  FUN_1414b87a2(local_138,&local_398,plVar8,&local_380);
  if ((DAT_14c950c29 == 1) && (*plVar8 != 0)) {
    FUN_14689c22e();
  }
  local_80 = (undefined **)&DAT_14a171d50;
  uVar4 = uStack_68 >> 0x20;
  uStack_68 = uStack_68 & 0xffffffff00000000;
  if ((int)uVar4 != 0) {
    FUN_140115c12(&local_70,0);
  }
  local_78 = (undefined *)0x0;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_3f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414b87a2 FUN_1414b87a2 body=686 status=ok
// SIG undefined FUN_1414b87a2(void)

void FUN_1414b87a2(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 uStack_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_90 = param_10;
  uStack_88 = param_11;
  local_98 = param_9;
  local_a0 = param_8;
  local_a8 = param_12;
  local_b8 = param_6;
  uStack_b0 = param_7;
  FUN_1414b8a6e(&local_58,param_1,param_4,param_5);
  if ((param_1 != (longlong *)0x0) && (lVar6 = (**(code **)(*param_1 + 0x180))(param_1), lVar6 != 0)
     ) {
    if (local_58 == 0) {
      local_78 = *param_2;
      uStack_74 = param_2[1];
      uStack_70 = param_2[2];
      uStack_6c = param_2[3];
      local_68 = *(longlong *)(param_2 + 4);
      if ((local_68 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      FUN_1412eeba4(lVar6,&local_78);
    }
    else {
      if (*(longlong *)(lVar6 + 0x1f0) == 0) {
        lVar6 = lVar6 + 0x460;
      }
      else {
        lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x1f0) + 0xf8);
      }
      puVar7 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      uVar2 = *param_2;
      uVar4 = *(undefined8 *)(param_2 + 2);
      lVar9 = *(longlong *)(param_2 + 4);
      if ((lVar9 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar9);
      }
      *puVar7 = &PTR_FUN_14b422470;
      puVar7[1] = param_3;
      *(undefined4 *)(puVar7 + 2) = uVar2;
      *(undefined8 *)((longlong)puVar7 + 0x14) = uVar4;
      *(undefined4 *)(puVar7 + 4) = 0;
      if (lVar9 == 0) {
        *(undefined4 *)((longlong)puVar7 + 0x1c) = 0;
        iVar5 = 0;
      }
      else {
        uVar3 = *(uint *)(lVar9 + 0xc);
        *(uint *)((longlong)puVar7 + 0x1c) = uVar3;
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar5 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          iVar8 = DAT_14c964868 + 1;
          bVar10 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar10) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar8);
          }
          LOCK();
          iVar5 = *(int *)(lVar9 + 0x10);
          bVar10 = iVar5 == 0;
          if (bVar10) {
            *(int *)(lVar9 + 0x10) = iVar8;
            iVar5 = 0;
          }
          UNLOCK();
          if (bVar10) {
            iVar5 = iVar8;
          }
        }
      }
      *(int *)(puVar7 + 4) = iVar5;
      puVar7[5] = local_58;
      puVar7[6] = local_50;
      if (local_50 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = *(int *)(local_50 + 1) + 1;
        UNLOCK();
      }
      FUN_140b1330e(lVar6,*(undefined8 *)(param_2 + 4),param_2[1],puVar7);
    }
  }
  if (local_50 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_50 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414b8a6e FUN_1414b8a6e body=4199 status=ok
// SIG undefined FUN_1414b8a6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_1414b8a6e(longlong *param_1,longlong *param_2,double *param_3,code **param_4,undefined8 param_5,
             byte *param_6,undefined8 param_7,undefined8 *param_8,undefined8 param_9,byte *param_10,
             code **param_11)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  code *pcVar5;
  code *pcVar6;
  ulonglong uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  code **ppcVar13;
  longlong *plVar14;
  float *pfVar15;
  undefined4 uVar16;
  longlong lVar17;
  code *pcVar19;
  code **ppcVar20;
  code **ppcVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined4 uVar24;
  float extraout_XMM0_Da;
  float fVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  double dVar47;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar48;
  uint uVar49;
  undefined1 auStack_398 [32];
  code **local_378;
  code **local_370;
  code **local_368;
  uint *local_360;
  code **local_358;
  code **local_350;
  undefined1 *local_348;
  code **local_340;
  code *local_338;
  code *local_330;
  uint local_328;
  uint local_324;
  longlong local_320;
  longlong *local_318;
  double *local_310;
  code *local_308;
  code *pcStack_300;
  double local_2f8;
  code *local_2e8;
  code *pcStack_2e0;
  code *local_2d8;
  uint local_2c8;
  undefined4 uStack_2c4;
  undefined8 local_2c0;
  code *local_2b0;
  code *pcStack_2a8;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  code *local_298;
  code *pcStack_290;
  code *local_288;
  float local_280;
  float local_268 [2];
  code **local_260;
  undefined4 local_258;
  undefined4 local_250;
  code *local_248;
  undefined4 local_240;
  code *local_238;
  undefined4 local_230;
  undefined8 local_228;
  code *local_220;
  code *pcStack_218;
  code *local_210;
  code *pcStack_208;
  undefined **local_200;
  code *local_1f8;
  longlong local_1f0;
  ulonglong uStack_1e8;
  char local_1e0;
  code *local_1d8;
  code *pcStack_1d0;
  code *local_1c8;
  char local_1c0;
  code *local_1b8;
  code *pcStack_1b0;
  float local_1a8;
  char cStack_1a4;
  char local_1a0;
  code *local_168;
  code *pcStack_160;
  double local_158;
  code *pcStack_150;
  code *local_148;
  code *pcStack_140;
  double local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined4 local_108;
  code *local_100;
  undefined4 local_f8;
  code *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  code *local_d8;
  code *pcStack_d0;
  code *local_c8;
  code *pcStack_c0;
  undefined **local_b8;
  code *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  char local_98;
  ulonglong local_90;
  code **ppcVar18;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_398;
  if (((param_2 == (longlong *)0x0) ||
      (lVar11 = (**(code **)(*param_2 + 0x180))(param_2), lVar11 == 0)) || (param_4 == (code **)0x0)
     ) {
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_398);
  }
  local_2b0 = (code *)*param_3;
  FUN_1446dcdd4(&local_168,&local_2b0);
  lVar12 = FUN_140a4bd48(&local_168);
  if (pcStack_150 != (code *)0x0) {
    FUN_1400020a8();
  }
  if ((lVar12 == 0) ||
     (((*(byte *)(lVar12 + 0x590) & 1) != 0 && (iVar9 = FUN_14490d72a(lVar11), iVar9 == 3)))) {
    *param_1 = 0;
    param_1[1] = 0;
    goto LAB_1414b952d;
  }
  local_2e8 = (code *)0x0;
  pcStack_2e0 = (code *)0x0;
  local_2d8 = (code *)0x0;
  local_310 = param_3;
  FUN_140d4f03f(&local_308,param_4,param_5,param_7);
  if (DAT_14caf64b8 == 0) {
    local_168 = FUN_141030f22;
    local_330 = FUN_14081d0ea;
    local_338 = FUN_142b4754c;
    local_348 = &LAB_147c45ce0;
    local_350 = (code **)&LAB_1463f1ff4;
    local_358 = (code **)&DAT_149e063b2;
    local_360 = (uint *)&DAT_4000000000;
    local_368 = (code **)CONCAT44(local_368._4_4_,0x10000004);
    local_370 = (code **)CONCAT44(local_370._4_4_,8);
    local_378 = (code **)CONCAT44(local_378._4_4_,0x428);
    local_340 = &local_168;
    FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
  }
  pcVar19 = (code *)(longlong)*(int *)(DAT_14caf64b8 + 0x38);
  local_320 = lVar11;
  local_318 = param_1;
  if ((*(int *)(param_4[2] + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
     (*(longlong *)(*(longlong *)(param_4[2] + 0x30) + (longlong)pcVar19 * 8) !=
      DAT_14caf64b8 + 0x30)) {
LAB_1414b8cc3:
    bVar4 = *(byte *)(lVar12 + 0x175);
    ppcVar18 = &local_1b8;
    for (lVar17 = 9; lVar17 != 0; lVar17 = lVar17 + -1) {
      *ppcVar18 = (code *)*param_8;
      param_8 = param_8 + 1;
      ppcVar18 = ppcVar18 + 1;
    }
    if (cStack_1a4 == '\x01') {
      if (((local_1a8 == 0.0) && (!NAN(local_1a8))) && (pcStack_1b0._0_4_ <= 0.0)) {
        uVar24 = FUN_140b536be(lVar12);
        pcStack_1b0 = (code *)CONCAT44(pcStack_1b0._4_4_,uVar24);
      }
    }
    local_328 = (uint)CONCAT71((int7)((ulonglong)pcVar19 >> 8),~bVar4) & 0xffffff01;
    lVar17 = FUN_140519fd4(param_4);
    if ((lVar17 == 0) || (cVar8 = FUN_140b038fa(lVar17), cVar8 == '\0')) {
      FUN_14893fab0(&local_1d8,param_4);
      if (local_1c0 != '\x01') {
        dVar26 = (double)FUN_144719204(CONCAT44(uStack_2c4,local_2c8),0x4076800000000000);
        dVar27 = (double)FUN_144719204(local_2c0,0x4076800000000000);
        dVar28 = sin(dVar26 * 0.017453292519943295);
        dVar26 = cos(dVar26 * 0.017453292519943295);
        dVar29 = sin(dVar27 * 0.017453292519943295);
        dVar27 = cos(dVar27 * 0.017453292519943295);
        fVar25 = (float)FUN_140b536be(lVar12);
        dVar30 = (double)fVar25;
        local_2d8 = (code *)(dVar28 * dVar30);
        pcStack_2e0 = (code *)(dVar29 * dVar26 * dVar30);
        local_2e8 = (code *)(dVar27 * dVar26 * dVar30);
        uVar49 = 0x3f800000;
        goto LAB_1414b8e5a;
      }
      local_128 = 0;
      uStack_120 = 0;
      local_138 = 0.0;
      uStack_130 = 0;
      fVar25 = 0.0;
      if ((*(longlong *)(lVar11 + 0x30) != 0) &&
         (plVar14 = *(longlong **)(*(longlong *)(lVar11 + 0x30) + 0x2b0), plVar14 != (longlong *)0x0
         )) {
        if (*(code **)(*plVar14 + 0x660) == FUN_1449fb17e) {
          if ((*(byte *)((longlong)plVar14 + 0x39e) & 1) == 0) {
            if ((*(byte *)((longlong)plVar14 + 0x39e) & 2) == 0) {
              if (DAT_14caf84d0 == 0) {
                local_2b0 = FUN_1449e2820;
                local_330 = FUN_14081d0ea;
                local_338 = (code *)&LAB_145a62952;
                local_348 = &LAB_147c8cd45;
                local_350 = (code **)&LAB_1461468ae;
                local_358 = (code **)0x149e2b68a;
                local_360 = (uint *)0x0;
                local_368 = (code **)CONCAT44(local_368._4_4_,0x10000006);
                local_370 = (code **)CONCAT44(local_370._4_4_,8);
                local_378 = (code **)CONCAT44(local_378._4_4_,0x218);
                local_340 = &local_2b0;
                FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
              }
              lVar17 = DAT_14caf84d0;
              lVar11 = *(longlong *)(DAT_14caf84d0 + 0x110);
              if (lVar11 == 0) {
                FUN_140aa6c08(DAT_14caf84d0);
                lVar11 = *(longlong *)(lVar17 + 0x110);
              }
              pfVar15 = (float *)(lVar11 + 0x38);
            }
            else {
              pfVar15 = (float *)((longlong)plVar14 + 0x41c);
            }
            fVar25 = *pfVar15;
            *(float *)(plVar14 + 0x83) = fVar25;
          }
          else {
            fVar25 = *(float *)(plVar14 + 0x83);
          }
        }
        else {
          fVar25 = (float)(**(code **)(*plVar14 + 0x660))(plVar14);
        }
      }
      uStack_120 = CONCAT44(uStack_120._4_4_,fVar25);
      local_168 = local_308;
      pcStack_160 = pcStack_300;
      local_158 = local_2f8;
      pcStack_150 = local_1d8;
      local_148 = pcStack_1d0;
      pcStack_140 = local_1c8;
      FUN_14125d732(&local_1b8,&local_2b0);
      local_2d8 = local_288;
      local_2e8 = local_298;
      pcStack_2e0 = pcStack_290;
      if (cStack_1a4 != '\0') {
        fVar25 = local_1a8;
      }
      bVar23 = (*(byte *)(lVar12 + 0x175) & 1) == 0;
      uVar49 = 0x3f800000;
      if (bVar23) {
        uVar49 = ~-(uint)(fVar25 != 0.0) & 0x3f800000 |
                 (uint)(local_280 / fVar25) & -(uint)(fVar25 != 0.0);
      }
    }
    else {
      local_1d8 = (code *)FUN_1408a1fe2(lVar17);
      local_158 = 0.0;
      local_138 = 0.0;
      uStack_130 = 0;
      local_168 = (code *)0x0;
      pcStack_160 = (code *)0x0;
      local_128 = 0;
      pcStack_150 = DAT_14c8464f8;
      local_148 = DAT_14c846500;
      pcStack_140 = DAT_14c846508;
      uStack_120 = DAT_14c8464e0;
      uStack_118 = DAT_14c8464e8;
      local_110 = DAT_14c8464f0;
      local_378 = &local_168;
      FUN_14133f9d4(&local_2b0,param_4,&local_308);
      FUN_14125d732(&local_1b8,&local_168,&local_2b0);
      local_2d8 = pcStack_140;
      pfVar15 = local_268;
      if (cStack_1a4 != '\0') {
        pfVar15 = &local_1a8;
      }
      local_2e8 = pcStack_150;
      pcStack_2e0 = local_148;
      bVar23 = (*(byte *)(lVar12 + 0x175) & 1) == 0;
      uVar49 = 0x3f800000;
      if (bVar23) {
        uVar49 = -(uint)(*pfVar15 != 0.0);
        uVar49 = ~uVar49 & 0x3f800000 | (uint)(local_138._0_4_ / *pfVar15) & uVar49;
      }
    }
    uVar10 = local_328 & 0xff;
    local_328 = 1;
    if (!bVar23) {
      local_328 = uVar10;
    }
  }
  else {
    pcVar19 = *(code **)(*param_4 + 0x5e8);
    if (pcVar19 == FUN_140972dde) {
      if (param_4[0x76] == (code *)0x0) {
        pcVar5 = *(code **)(*param_4 + 0x5f8);
        if (pcVar5 == FUN_144784df4) {
          if (*(code **)(param_4[0x784] + 0x18) == (code *)&LAB_144904684) {
            if (((((*(int *)((longlong)param_4 + 0x75b4) == 0) ||
                  (uVar49 = *(uint *)(param_4 + 0xeb6), (int)uVar49 < 0)) ||
                 (DAT_14c9647dc <= (int)uVar49)) ||
                ((pcVar19 = (code *)((ulonglong)((uVar49 & 0xffff) * 0x18) +
                                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar49 >> 0x10) * 8)),
                 pcVar19 == (code *)0x0 ||
                 (*(int *)(pcVar19 + 0x10) != *(int *)((longlong)param_4 + 0x75b4))))) ||
               ((*(uint *)(pcVar19 + 8) & 0x10200000) != 0)) goto LAB_1414b8cc3;
            if ((*(uint *)(pcVar19 + 8) & 0x10200000) == 0) {
              lVar17 = *(longlong *)pcVar19;
            }
            else {
              lVar17 = 0;
            }
            lVar17 = lVar17 + 0x110;
          }
          else {
            lVar17 = (**(code **)(param_4[0x784] + 0x18))(param_4 + 0x784);
          }
          if (lVar17 == 0) goto LAB_1414b8cc3;
          lVar17 = *(longlong *)(lVar17 + 0x20);
        }
        else {
          lVar17 = (*pcVar5)(param_4);
        }
        if (lVar17 == 0) goto LAB_1414b8cc3;
        lVar17 = *(longlong *)(lVar17 + 0x3b0);
        goto LAB_1414b9659;
      }
    }
    else {
      lVar17 = (*pcVar19)(param_4);
LAB_1414b9659:
      lVar11 = local_320;
      if (lVar17 == 0) goto LAB_1414b8cc3;
    }
    local_1b8 = (code *)0x0;
    pcStack_1b0 = (code *)0x0;
    local_370 = (code **)((ulonglong)local_370 & 0xffffffffffffff00);
    local_378 = (code **)CONCAT44(local_378._4_4_,0xf);
    ppcVar18 = &local_168;
    uVar24 = FUN_143e0f36e(ppcVar18,param_4,&local_308);
    uVar16 = SUB84(ppcVar18,0);
    local_308 = local_148;
    pcStack_300 = pcStack_140;
    local_2f8 = local_138;
    dVar26 = (double)local_168 * 0.0 - (double)pcStack_160 * 1.0;
    dVar48 = (double)pcStack_160 * 0.0 - local_158 * 0.0;
    dVar27 = local_158 * 1.0 - (double)local_168 * 0.0;
    dVar48 = dVar48 + dVar48;
    dVar27 = dVar27 + dVar27;
    dVar26 = dVar26 + dVar26;
    dVar28 = dVar27 * (double)local_168;
    dVar29 = dVar26 * (double)pcStack_160;
    dVar38 = (double)local_168 * dVar26;
    dVar26 = dVar26 * (double)pcStack_150;
    dVar43 = (double)pcStack_150 * dVar48;
    dVar47 = (double)pcStack_150 * dVar27;
    dVar30 = local_158 * dVar48;
    dVar48 = dVar48 * (double)pcStack_160;
    dVar27 = dVar27 * local_158;
    fVar25 = *(float *)(param_8 + 1);
    if (fVar25 <= 0.0) {
      uVar24 = FUN_140b536be();
      uVar16 = (undefined4)lVar12;
      fVar25 = extraout_XMM0_Da;
    }
    dVar31 = (double)fVar25;
    local_2d8 = (code *)((dVar26 + 0.0 + (dVar28 - dVar48)) * dVar31);
    pcStack_2e0 = (code *)(((dVar30 - dVar38) + dVar47 + 0.0) * dVar31);
    local_2e8 = (code *)(((dVar29 - dVar27) + dVar43 + 1.0) * dVar31);
    uVar49 = (uint)local_2e8;
    auVar42 = *(undefined1 (*) [16])(param_8 + 3);
    dVar26 = (double)DAT_1499387d0;
    dVar27 = DAT_1499387d0._8_8_;
    auVar32 = divpd(auVar42,_DAT_1499387d0);
    auVar44._8_8_ = 0;
    auVar44._0_8_ = param_8[5];
    auVar45 = divpd(auVar44,_DAT_1499387d0);
    auVar32 = roundpd(auVar32,auVar32,3);
    auVar45 = roundpd(auVar45,auVar45,3);
    auVar39._0_8_ = auVar42._0_8_ - auVar32._0_8_ * dVar26;
    auVar39._8_8_ = auVar42._8_8_ - auVar32._8_8_ * dVar27;
    dVar28 = (double)param_8[5] - auVar45._0_8_ * dVar26;
    dVar29 = 0.0 - auVar45._8_8_ * dVar27;
    auVar46._0_8_ = auVar39._0_8_ + dVar26;
    auVar46._8_8_ = auVar39._8_8_ + dVar27;
    auVar41._0_8_ = dVar26 + dVar28;
    auVar41._8_8_ = dVar27 + dVar29;
    auVar33._8_8_ = -(ulonglong)(0.0 <= auVar39._8_8_);
    auVar33._0_8_ = -(ulonglong)(0.0 <= auVar39._0_8_);
    auVar32 = blendvpd(auVar46,auVar39,auVar33);
    auVar34._8_8_ = -(ulonglong)(0.0 <= dVar29);
    auVar34._0_8_ = -(ulonglong)(0.0 <= dVar28);
    auVar42._8_8_ = dVar29;
    auVar42._0_8_ = dVar28;
    auVar42 = blendvpd(auVar41,auVar42,auVar34);
    auVar35._8_8_ = -(ulonglong)(180.0 < auVar32._8_8_);
    auVar35._0_8_ = -(ulonglong)(180.0 < auVar32._0_8_);
    auVar45._8_8_ = auVar32._8_8_ + -360.0;
    auVar45._0_8_ = auVar32._0_8_ + -360.0;
    auVar45 = blendvpd(auVar32,auVar45,auVar35);
    auVar36._8_8_ = -(ulonglong)(180.0 < auVar42._8_8_);
    auVar36._0_8_ = -(ulonglong)(180.0 < auVar42._0_8_);
    auVar32._8_8_ = auVar42._8_8_ + -360.0;
    auVar32._0_8_ = auVar42._0_8_ + -360.0;
    auVar42 = blendvpd(auVar42,auVar32,auVar36);
    auVar40._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar45._8_8_));
    auVar40._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar45._0_8_));
    iVar9 = movmskpd(uVar24,auVar40);
    auVar37._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar42._8_8_));
    auVar37._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar42._0_8_));
    uVar10 = movmskpd(uVar16,auVar37);
    if ((uVar10 & 0x3fffffff) != 0 || iVar9 != 0) {
      FUN_1401c9a0e(param_8 + 3,&local_2b0,&local_2e8);
      local_2d8 = (code *)CONCAT44(uStack_29c,local_2a0);
      local_2e8 = local_2b0;
      pcStack_2e0 = pcStack_2a8;
    }
    local_328 = 0;
  }
LAB_1414b8e5a:
  if ((*param_6 & 0xfd) == 0) {
    uVar22 = 0;
  }
  else {
    FUN_140d0fb16(param_6,&local_1d8,param_4,0);
    uVar22 = CONCAT71((int7)((ulonglong)&local_168 >> 8),1);
  }
  local_1e0 = '\0';
  cVar8 = FUN_1418a5b2c(param_11);
  if (&local_2b0 != param_11 && cVar8 == '\x01') {
    if (local_1e0 == '\x01') {
      local_200 = (undefined **)&DAT_14a171d50;
      uVar7 = uStack_1e8 >> 0x20;
      uStack_1e8 = uStack_1e8 & 0xffffffff00000000;
      if ((int)uVar7 != 0) {
        FUN_140115c12(&local_1f0,0);
      }
      local_1f8 = (code *)0x0;
      if (local_1f0 != 0) {
        FUN_1400020a8();
      }
      if (local_260 != (code **)0x0) {
        FUN_1400020a8();
      }
    }
    local_2b0 = (code *)CONCAT44(local_2b0._4_4_,*(undefined4 *)param_11);
    pcStack_2a8 = param_11[1];
    local_2a0 = *(undefined4 *)(param_11 + 2);
    local_298 = (code *)0x0;
    local_260 = (code **)0x0;
    ppcVar18 = param_11 + 4;
    if ((code **)param_11[10] != (code **)0x0) {
      ppcVar18 = (code **)param_11[10];
    }
    FUN_1400709d4(&pcStack_290,ppcVar18,*(undefined4 *)(param_11 + 0xb),0);
    local_250 = *(undefined4 *)(param_11 + 0xc);
    local_248 = param_11[0xd];
    local_240 = *(undefined4 *)(param_11 + 0xe);
    local_238 = param_11[0xf];
    local_230 = *(undefined4 *)(param_11 + 0x10);
    local_228 = 0;
    local_220 = param_11[0x12];
    pcStack_218 = param_11[0x13];
    local_210 = param_11[0x14];
    pcStack_208 = param_11[0x15];
    local_200 = (undefined **)&DAT_14a171d50;
    local_1f0 = 0;
    uStack_1e8 = 0;
    local_1f8 = param_11[0x17];
    FUN_1406022fe(&local_1f0,param_11 + 0x18);
    local_200 = &PTR_FUN_14b0394b0;
    local_1e0 = '\x01';
  }
  ppcVar18 = param_4;
  if ((*param_10 | 2) == 3) {
    ppcVar18 = *(code ***)(param_10 + 8);
  }
  ppcVar13 = (code **)FUN_143e0f1c4(param_10,param_4);
  ppcVar21 = (code **)0x0;
  if (ppcVar13 != param_4) {
    ppcVar21 = param_4;
  }
  plVar14 = (longlong *)FUN_14001cc68(0x1e0,0x10);
  plVar14[1] = (longlong)&DAT_100000001;
  *plVar14 = (longlong)&PTR_FUN_14b4227d0;
  local_98 = local_1e0;
  if (local_1e0 == '\x01') {
    local_324 = (uint)uVar22;
    local_168 = (code *)CONCAT44(local_168._4_4_,local_2b0._0_4_);
    pcStack_160 = pcStack_2a8;
    local_158 = (double)CONCAT44(local_158._4_4_,local_2a0);
    pcStack_150 = (code *)0x0;
    uStack_118 = 0;
    ppcVar20 = local_260;
    if (local_260 == (code **)0x0) {
      ppcVar20 = &pcStack_290;
    }
    FUN_1400709d4(&local_148,ppcVar20,local_258,0);
    local_108 = local_250;
    local_100 = local_248;
    local_f8 = local_240;
    local_f0 = local_238;
    local_e8 = local_230;
    local_e0 = 0;
    local_d8 = local_220;
    pcStack_d0 = pcStack_218;
    local_c8 = local_210;
    pcStack_c0 = pcStack_208;
    local_b8 = (undefined **)&DAT_14a171d50;
    local_a8 = 0;
    uStack_a0 = 0;
    uVar22 = (ulonglong)local_324;
    local_b0 = local_1f8;
    FUN_1406022fe(&local_a8,&local_1f0);
    local_b8 = &PTR_FUN_14b0394b0;
  }
  param_1 = local_318;
  lVar11 = local_320;
  local_1a0 = (char)uVar22;
  if (local_1a0 != '\0') {
    local_1b8 = local_1d8;
    pcStack_1b0 = pcStack_1d0;
  }
  uStack_2c4 = CONCAT31(uStack_2c4._1_3_,(char)local_328);
  if ((char)local_328 != '\0') {
    local_2c8 = uVar49;
  }
  local_350 = &local_168;
  local_358 = &local_1b8;
  local_360 = &local_2c8;
  local_368 = &local_2e8;
  local_370 = &local_308;
  local_378 = ppcVar21;
  FUN_1415e3b80(plVar14 + 2,local_310,ppcVar18,ppcVar13);
  *param_1 = (longlong)(plVar14 + 2);
  param_1[1] = (longlong)plVar14;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar14 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  FUN_140e67fb0(&local_168,lVar11);
  if (pcStack_160 != (code *)0x0) {
    iVar9 = *(int *)(pcStack_160 + 8);
    do {
      if (iVar9 == 0) {
        pcVar19 = (code *)0x0;
        break;
      }
      LOCK();
      iVar3 = *(int *)(pcStack_160 + 8);
      bVar23 = iVar9 == iVar3;
      if (bVar23) {
        *(int *)(pcStack_160 + 8) = iVar9 + 1;
        iVar3 = iVar9;
      }
      iVar9 = iVar3;
      UNLOCK();
      pcVar19 = pcStack_160;
    } while (!bVar23);
    LOCK();
    pcVar5 = pcStack_160 + 0xc;
    *(int *)pcVar5 = *(int *)pcVar5 + -1;
    UNLOCK();
    if (*(int *)pcVar5 == 0) {
      (**(code **)(*(longlong *)pcStack_160 + 0x10))();
    }
    pcVar5 = local_168;
    if (pcVar19 != (code *)0x0) {
      if (local_168 != (code *)0x0) {
        local_168 = (code *)*param_1;
        pcVar6 = (code *)param_1[1];
        pcStack_160 = pcVar6;
        if (pcVar6 == (code *)0x0) {
          FUN_140e67c44(pcVar5,&local_168);
        }
        else {
          LOCK();
          *(int *)(pcVar6 + 8) = *(int *)(pcVar6 + 8) + 1;
          UNLOCK();
          FUN_140e67c44();
          if (pcVar6 != (code *)0x0) {
            LOCK();
            pcVar5 = pcVar6 + 8;
            *(int *)pcVar5 = *(int *)pcVar5 + -1;
            UNLOCK();
            if (*(int *)pcVar5 == 0) {
              (*(code *)**(undefined8 **)pcVar6)(pcVar6);
              LOCK();
              pcVar5 = pcVar6 + 0xc;
              *(int *)pcVar5 = *(int *)pcVar5 + -1;
              UNLOCK();
              if (*(int *)pcVar5 == 0) {
                (**(code **)(*(longlong *)pcVar6 + 0x10))(pcVar6);
              }
            }
          }
        }
      }
      LOCK();
      pcVar5 = pcVar19 + 8;
      *(int *)pcVar5 = *(int *)pcVar5 + -1;
      UNLOCK();
      if (*(int *)pcVar5 == 0) {
        (*(code *)**(undefined8 **)pcVar19)(pcVar19);
        LOCK();
        pcVar5 = pcVar19 + 0xc;
        *(int *)pcVar5 = *(int *)pcVar5 + -1;
        UNLOCK();
        if (*(int *)pcVar5 == 0) {
          (**(code **)(*(longlong *)pcVar19 + 0x10))(pcVar19);
        }
      }
    }
  }
  if (local_1e0 == '\x01') {
    local_200 = (undefined **)&DAT_14a171d50;
    uVar22 = uStack_1e8 >> 0x20;
    uStack_1e8 = uStack_1e8 & 0xffffffff00000000;
    if ((int)uVar22 != 0) {
      FUN_140115c12(&local_1f0,0);
    }
    local_1f8 = (code *)0x0;
    if (local_1f0 != 0) {
      FUN_1400020a8();
    }
    if (local_260 != (code **)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1414b952d:
  if ((local_90 ^ (ulonglong)auStack_398) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414b9ad6 FUN_1414b9ad6 body=154 status=ok
// SIG undefined FUN_1414b9ad6(void)

undefined4
FUN_1414b9ad6(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_5 + 1);
  uVar2 = *param_5;
  local_48 = *param_2;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_48);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_58 = &local_48;
    local_48 = uVar2;
    local_40 = uVar1;
    lVar4 = FUN_145acdc30(param_1,lVar4,param_3,param_4);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414b9b72 FUN_1414b9b72 body=109 status=ok
// SIG undefined FUN_1414b9b72(void)

longlong * FUN_1414b9b72(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 3),4000);
  *(int *)(param_1 + 2) = param_2;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1462b4548(param_1,iVar1);
  }
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + (longlong)iVar1 * 8) = 0;
  *(int *)(lVar2 + 4 + (longlong)iVar1 * 8) = param_2 + -1;
  return param_1;
}



// FUNCTION 1414b9be0 FUN_1414b9be0 body=95 status=ok
// SIG undefined FUN_1414b9be0(void)

int FUN_1414b9be0(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1;
        if ((*(int *)(lVar2 + lVar4 * 0x28) == *param_3) &&
           (*(int *)(lVar2 + lVar4 * 0x28 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x20 + lVar4 * 0x28);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1414b9c62 FUN_1414b9c62 body=428 status=ok
// SIG undefined FUN_1414b9c62(void)

void FUN_1414b9c62(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar6 = (longlong)iVar5;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x18);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414b9e10 FUN_1414b9e10 body=525 status=ok
// SIG undefined FUN_1414b9e10(void)

void FUN_1414b9e10(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  char param_5,undefined4 param_6,undefined4 param_7,char param_8)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14098f2e8(param_1,&local_48,param_2,1);
  lVar3 = FUN_1447210f0(param_1);
  if (((lVar3 == 0) || (*(longlong *)(lVar3 + 0x748) == 0)) ||
     (cVar2 = FUN_147db271a(*(longlong *)(lVar3 + 0x748),local_48), cVar2 == '\0')) {
    plVar4 = (longlong *)FUN_144a49150(lVar3,local_48);
    if (plVar4 == (longlong *)0x0) {
      if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
        lVar5 = 0;
        do {
          lVar1 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar5);
          if (*(longlong *)(lVar1 + 0x360) == lVar3) {
            if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x278) & 1) != 0)) goto LAB_1414ba003;
            break;
          }
          lVar5 = lVar5 + 8;
        } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar5);
      }
    }
    else {
      cVar2 = (**(code **)(*plVar4 + 0x2b8))(plVar4);
      if (cVar2 != '\0') {
        if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
          lVar5 = 0;
          do {
            lVar1 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar5);
            if (*(longlong *)(lVar1 + 0x360) == lVar3) {
              if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x278) & 1) != 0)) goto LAB_1414ba003;
              break;
            }
            lVar5 = lVar5 + 8;
          } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar5);
        }
        cVar2 = (**(code **)(*plVar4 + 0x2d8))(plVar4);
        if (cVar2 == '\x01' && (char)param_3 == '\0') {
          *(undefined1 *)(DAT_14cb0d2b0 + 0xf25) = 1;
        }
        (**(code **)(*plVar4 + 0x2c0))(plVar4,param_3);
        FUN_14039914a(plVar4,param_4);
        *(byte *)((longlong)plVar4 + 0x10a) =
             param_8 << 3 | param_5 << 2 | *(byte *)((longlong)plVar4 + 0x10a) & 0xf3;
        FUN_147b9824e(plVar4,param_6);
        FUN_14039bc3c(plVar4,param_4,param_7);
      }
    }
  }
LAB_1414b9f2a:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1414ba003:
  local_50 = param_6;
  local_58 = (undefined1)param_4;
  FUN_147d81e06(DAT_14cb0d2b0,lVar3,local_48,param_3);
  goto LAB_1414b9f2a;
}



// FUNCTION 1414ba05a FUN_1414ba05a body=179 status=ok
// SIG undefined FUN_1414ba05a(void)

void FUN_1414ba05a(longlong param_1)

{
  undefined4 uVar1;
  byte *pbVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [46];
  byte local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 0x240) & 1) != 0) {
    FUN_14654aa2c(*(longlong *)(param_1 + 0x238) + 0x4780);
    if ((*(byte *)(param_1 + 0x240) & 2) != 0) {
      FUN_146577c4a(*(undefined8 *)(param_1 + 0x238),100,1);
    }
  }
  uVar1 = FUN_140843f56(param_1);
  local_1a = *(byte *)(param_1 + 0x240) & 1;
  pbVar2 = &local_1a;
  local_19 = (undefined1)uVar1;
  FUN_1447cd2ec(param_1 + 0x110);
  uVar3 = CONCAT71((int7)((ulonglong)pbVar2 >> 8),*(undefined1 *)(param_1 + 0x240)) &
          0xffffffffffffff01;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_1440fd31a(param_1 + 0x120,uVar3,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48,uVar3);
}



// FUNCTION 1414ba10e FUN_1414ba10e body=628 status=ok
// SIG undefined FUN_1414ba10e(void)

void FUN_1414ba10e(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30 [24];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
     (bVar1 = *(byte *)(param_1 + 0x28), (bVar1 & 1) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    if (lVar3 == 0) {
      *(byte *)(param_1 + 0x28) = bVar1 & 0xfe;
    }
    else {
      if (*(char *)(lVar3 + 0x5d30) == '\x02') goto LAB_1414ba14f;
      *(byte *)(param_1 + 0x28) = bVar1 & 0xfe;
      if (*(char *)(*(longlong *)(param_1 + 8) + 0x178) == '\x03') {
        *(undefined1 *)(lVar3 + 0x9b58) = 0;
        uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x28);
        if (uVar2 < 0xffffffff00000000) {
          plVar4 = DAT_14c9980d0;
          if (DAT_14c9980d8 == 0) {
            plVar4 = (longlong *)0x0;
          }
          (**(code **)(*plVar4 + 0x58))();
        }
        else {
          uVar7 = (uint)uVar2;
          if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c998088)) {
            puVar6 = &DAT_14c998070;
            if (DAT_14c998080 != (undefined *)0x0) {
              puVar6 = DAT_14c998080;
            }
            if ((*(uint *)(puVar6 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar7 & 0x1f) & 1) != 0) {
              lVar5 = DAT_14c998060 + (ulonglong)(uVar7 & 0x7fffffff) * 0x68;
              lVar3 = *(longlong *)(lVar5 + 0x18);
              if (*(longlong *)(lVar5 + 0x18) == 0) {
                lVar3 = lVar5 + 8;
              }
              *(uint *)(lVar3 + 0xc) = *(uint *)(lVar3 + 0xc) | 0x20000;
              *(byte *)(lVar5 + 0x60) = *(byte *)(lVar5 + 0x60) | 1;
            }
          }
        }
      }
    }
    FUN_146635bec(param_1);
    plVar4 = *(longlong **)(param_1 + 200);
    if (plVar4 != (longlong *)0x0) {
      if ((*(byte *)((longlong)plVar4 + 0x2d3) & 8) != 0) {
        *(byte *)((longlong)plVar4 + 0x2d3) = *(byte *)((longlong)plVar4 + 0x2d3) & 0xf7;
        (**(code **)(*plVar4 + 0x958))();
        plVar4 = *(longlong **)(param_1 + 200);
      }
      (**(code **)(*plVar4 + 0x940))(plVar4,0);
    }
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0xfe;
    FUN_1415b3d3e(param_1,0);
    if (*(longlong *)(param_1 + 0x10) != 0) {
      if (*(longlong *)(param_1 + 0x50) != 0) {
        FUN_14480f766(*(longlong *)(param_1 + 0x10) + 0x11b8);
      }
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    FUN_140d92bea(param_1,0);
    lVar3 = *(longlong *)(param_1 + 0x10);
    if (lVar3 != 0) {
      lVar3 = (**(code **)(*(longlong *)(lVar3 + 0x10c8) + 0x10))(lVar3 + 0x10c8);
      if (lVar3 == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)FUN_140849bbe(lVar3);
      }
      (**(code **)(*plVar4 + 0x968))(plVar4,0);
      lVar3 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1118) + 0x20))
                        (*(longlong *)(param_1 + 0x10) + 0x1118);
      if (lVar3 != 0) {
        FUN_140ba2af2(lVar3,&DAT_14cbd4078);
      }
      lVar3 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x3c08) + 0x10))
                        (*(longlong *)(param_1 + 0x10) + 0x3c08);
      local_18 = DAT_14cbd4078;
      FUN_1400bc8c2(lVar3 + 0x310);
    }
    local_38 = 0;
    FUN_140b32deb(local_30,*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 0x30) + 0x3e0,0);
  }
LAB_1414ba14f:
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414ba383 FUN_1414ba383 body=54 status=ok
// SIG undefined FUN_1414ba383(void)

void FUN_1414ba383(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_141183afa(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1414ba3b9 FUN_1414ba3b9 body=75 status=ok
// SIG undefined FUN_1414ba3b9(void)

void FUN_1414ba3b9(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1414ba404 FUN_1414ba404 body=87 status=ok
// SIG undefined FUN_1414ba404(void)

void FUN_1414ba404(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1414ba45c FUN_1414ba45c body=437 status=ok
// SIG undefined FUN_1414ba45c(void)

undefined8 * FUN_1414ba45c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = param_2;
  puVar6 = param_1;
  for (lVar4 = 0xb; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0xd);
  pvVar3 = (void *)param_2[0xc];
  *(int *)(param_1 + 0xd) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xc,iVar1,0);
    memcpy((void *)param_1[0xc],pvVar3,(longlong)iVar1 * 2);
  }
  param_1[0xe] = 0;
  iVar1 = *(int *)(param_2 + 0xf);
  pvVar3 = (void *)param_2[0xe];
  *(int *)(param_1 + 0xf) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xe,iVar1,0);
    memcpy((void *)param_1[0xe],pvVar3,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x83) = *(undefined4 *)((longlong)param_2 + 0x83);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  param_1[0x11] = 0;
  iVar1 = *(int *)(param_2 + 0x12);
  pvVar3 = (void *)param_2[0x11];
  *(int *)(param_1 + 0x12) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x11,iVar1,0);
    memcpy((void *)param_1[0x11],pvVar3,(longlong)iVar1 * 2);
  }
  param_1[0x13] = 0;
  iVar1 = *(int *)(param_2 + 0x14);
  pvVar3 = (void *)param_2[0x13];
  *(int *)(param_1 + 0x14) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x13,iVar1,0);
    memcpy((void *)param_1[0x13],pvVar3,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  param_1[0x15] = param_2[0x15];
  return param_1;
}



// FUNCTION 1414ba612 FUN_1414ba612 body=323 status=ok
// SIG undefined FUN_1414ba612(void)

void FUN_1414ba612(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b06ae20;
  FUN_144760e21(param_1[0x30],*(undefined4 *)(param_1 + 0x31));
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  FUN_143c41687(param_1[0x2e],*(undefined4 *)(param_1 + 0x2f));
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x2d];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_1402d9776(param_1 + 0x1f);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe4fbe(param_1 + 0x15);
  FUN_145ae5bf7(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xe];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1414ba756 FUN_1414ba756 body=191 status=ok
// SIG undefined FUN_1414ba756(void)

void FUN_1414ba756(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1414ba7f8;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1414ba7f8:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1414ba816 FUN_1414ba816 body=413 status=ok
// SIG undefined FUN_1414ba816(void)

void FUN_1414ba816(double *param_1,double *param_2,double *param_3,float *param_4,float *param_5)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  
  dVar2 = param_1[2] - param_2[2];
  dVar4 = param_1[1] - param_2[1];
  dVar3 = *param_1 - *param_2;
  if (((9.999999747378752e-05 < ABS(dVar3)) || (9.999999747378752e-05 < ABS(dVar4))) ||
     (9.999999747378752e-05 < ABS(dVar2))) {
    dVar7 = param_3[2] - param_2[2];
    dVar5 = param_3[1] - param_2[1];
    dVar9 = *param_3 - *param_2;
    fVar11 = (float)SQRT(dVar7 * dVar7 + dVar9 * dVar9 + dVar5 * dVar5);
    dVar6 = DAT_14c8464e8;
    dVar8 = DAT_14c8464f0;
    dVar10 = DAT_14c8464e0;
    if (1e-08 < fVar11) {
      dVar10 = (double)(1.0 / fVar11);
      dVar6 = dVar5 * dVar10;
      dVar8 = dVar7 * dVar10;
      dVar10 = dVar9 * dVar10;
    }
    if (0.0 < fVar11) {
      fVar1 = (float)(dVar2 * dVar8 + dVar3 * dVar10 + dVar4 * dVar6);
      dVar2 = (double)fVar1;
      *param_4 = fVar1 / fVar11;
      dVar4 = dVar10 * dVar2 - *param_1;
      dVar3 = dVar6 * dVar2 - param_1[1];
      dVar2 = dVar8 * dVar2 - param_1[2];
      dVar2 = dVar2 * dVar2 + dVar3 * dVar3 + dVar4 * dVar4;
      goto LAB_1414ba997;
    }
  }
  *param_4 = 0.0;
  dVar2 = dVar2 * dVar2 + dVar3 * dVar3 + dVar4 * dVar4;
LAB_1414ba997:
  *param_5 = (float)dVar2;
  return;
}



// FUNCTION 1414ba9b4 FUN_1414ba9b4 body=228 status=ok
// SIG undefined FUN_1414ba9b4(void)

longlong FUN_1414ba9b4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba1520 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145885dac;
    local_38 = &LAB_148b9e173;
    local_40 = FUN_1465af2b8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xe0;
    FUN_14081cfa3(L"/Script/OakGame",L"GbxDiscoveryProviderObject_OakPlayer",&DAT_14cba1520,
                  &DAT_148b9e172);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba1520;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414baa9a FUN_1414baa9a body=486 status=ok
// SIG undefined FUN_1414baa9a(void)

void FUN_1414baa9a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x60;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414bac82 FUN_1414bac82 body=888 status=ok
// SIG undefined FUN_1414bac82(void)

void FUN_1414bac82(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 *local_b8;
  int local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *plStack_90;
  void *local_88;
  ulonglong uStack_80;
  longlong local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar6 = (longlong *)FUN_140a68038(1);
  if (plVar6 == (longlong *)0x0) {
    local_98 = (longlong *)0x0;
    plStack_90 = (longlong *)0x0;
    goto LAB_1414bad1c;
  }
  (**(code **)(*plVar6 + 0xe0))(plVar6,&local_98);
  if (local_98 == (longlong *)0x0) goto LAB_1414bad1c;
  FUN_148db679a(param_1,&local_a8);
  if (local_a8 != 0) {
    local_88 = (void *)0x0;
    uVar3 = *(uint *)(param_2 + 1);
    pvVar4 = (void *)*param_2;
    uStack_80 = CONCAT44(uStack_80._4_4_,uVar3);
    if ((longlong)(int)uVar3 == 0) {
      uStack_80 = (ulonglong)uVar3;
    }
    else {
      FUN_1446dd670(&local_88,uVar3,0);
      memcpy(local_88,pvVar4,(longlong)(int)uVar3 * 2);
    }
    local_b8 = (undefined8 *)0x0;
    local_b0 = 0;
    local_78 = param_1;
    FUN_1446efa72(&local_b8,0,4,0x10);
    puVar5 = local_b8;
    local_b0 = 4;
    *local_b8 = &PTR_LAB_14b4388e0;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_b8[2] = lVar7;
    *local_b8 = &PTR_FUN_14b994490;
    local_b8[3] = 0;
    iVar8 = 0;
    if (param_1 != 0) {
      uVar3 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_b8 + 3) = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      iVar8 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar9 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar9);
        }
        LOCK();
        iVar8 = *(int *)(lVar10 + 0x10);
        bVar11 = iVar8 == 0;
        if (bVar11) {
          *(int *)(lVar10 + 0x10) = iVar9;
          iVar8 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar8 = iVar9;
        }
      }
    }
    pvVar4 = local_88;
    *(int *)((longlong)puVar5 + 0x1c) = iVar8;
    puVar5[4] = 0;
    lVar10 = (longlong)(int)uStack_80;
    *(int *)(puVar5 + 5) = (int)uStack_80;
    if (lVar10 == 0) {
      *(undefined4 *)((longlong)puVar5 + 0x2c) = 0;
    }
    else {
      FUN_1446dd670(puVar5 + 4,uStack_80 & 0xffffffff,0);
      memcpy((void *)puVar5[4],pvVar4,lVar10 * 2);
    }
    puVar5[6] = local_78;
    if (local_88 != (void *)0x0) {
      FUN_1400020a8(local_88);
    }
    plVar6 = local_98;
    local_68 = 0;
    local_60 = 0;
    local_88 = (void *)0x0;
    uStack_80 = 0;
    local_5c = 0xffffffff00000080;
    local_54 = 0;
    local_48 = 0;
    local_c8 = 0;
    local_c0 = 0;
    FUN_148dbc940(&local_c8,&local_b8);
    local_d8 = &local_c8;
    (**(code **)(*plVar6 + 0x28))(plVar6,local_a8,param_2,1);
    local_40 = 0;
    FUN_1411632c2(&local_88);
    if (local_b0 != 0) {
      if (local_b8 == (undefined8 *)0x0) goto LAB_1414baceb;
      (**(code **)*local_b8)(local_b8,0);
      FUN_1446efa72(&local_b8,0,0,0x10);
      local_b0 = 0;
    }
    if (local_b8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1414baceb:
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_a0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)local_a0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_a0 + 0x10))(local_a0);
      }
    }
  }
LAB_1414bad1c:
  plVar6 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_90 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414baffc FUN_1414baffc body=22 status=ok
// SIG undefined FUN_1414baffc(void)

ulonglong FUN_1414baffc(uint *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  ulonglong *puVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 auStack_68 [40];
  ulonglong uStack_40;
  int iStack_38;
  ulonglong uStack_30;
  
  plVar3 = DAT_14cbc8bb8;
  if (DAT_14cbc8bb8 == (longlong *)0x0) {
    return 0;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(code **)(*DAT_14cbc8bb8 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cbc8bb8 + 0x154) & 1) != 0) &&
       (*(int *)((longlong)DAT_14cbc8bb8 + 0x1fc) < (int)DAT_14cbc8bb8[0x3a])) goto LAB_144815de0;
LAB_144815f6c:
    iVar6 = (int)plVar3[0x59];
    uVar14 = *param_1;
    if ((longlong)iVar6 == -1) {
      if (((uVar14 != 0) && (param_1[1] != 0)) && (uVar14 != DAT_14c948000)) {
        puVar7 = &DAT_14c948028;
        goto LAB_144815fa4;
      }
LAB_1448160f1:
      puVar7 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
      uVar14 = (uint)DAT_14c948618;
    }
    else {
      if (((uVar14 == 0) || (uVar5 = param_1[1], uVar5 == 0)) || (uVar14 == DAT_14c948000))
      goto LAB_1448160f1;
      puVar10 = param_1 + 2;
      if (0 < (int)param_1[9]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (1 < (int)uVar5) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (uVar5 == 1 && 0 < iVar6) {
        puVar8 = (uint *)&DAT_14c948618;
        if (*(int *)((longlong)plVar3 + 0x2cc) == 1) {
          puVar8 = puVar10;
        }
        uVar14 = *puVar8;
        puVar7 = (ulonglong *)(puVar8 + 1);
      }
      else {
        if ((int)uVar5 <= iVar6) goto LAB_1448160f1;
        puVar7 = (ulonglong *)(puVar10 + (longlong)iVar6 * 3 + 1);
        uVar14 = puVar10[(longlong)iVar6 * 3];
      }
    }
LAB_144815fa4:
    uVar2 = *puVar7;
    uVar15 = uVar2 >> 0x20;
    uVar5 = uVar14;
    if (uVar15 != 0) {
      uVar5 = FUN_144a78877(uVar14,uVar15);
    }
    if ((int)plVar3[0x50] != *(int *)((longlong)plVar3 + 0x2ac)) {
      plVar11 = plVar3 + 0x56;
      if ((longlong *)plVar3[0x57] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar3[0x57];
      }
      iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar3[0x58] - 1U & uVar5) * 4);
      if (iVar6 != -1) {
        plVar11 = plVar3 + 0x4f;
        lVar9 = *plVar11;
        uVar15 = 0;
LAB_144815ffc:
        lVar18 = (longlong)iVar6 * 0x20;
        if ((*(uint *)(lVar9 + lVar18) != uVar14) ||
           (lVar1 = lVar9 + lVar18, *(int *)(lVar1 + 8) != (int)(uVar2 >> 0x20)))
        goto LAB_144816008;
        uVar15 = 0;
        if ((lVar1 != 0) && ((longlong *)(lVar1 + 0x10) != (longlong *)0x0)) {
          lVar9 = *(longlong *)(lVar1 + 0x10);
          if (lVar9 != 0) {
            lVar18 = *(longlong *)(lVar9 + 0x60);
            if (lVar18 != 0) {
              do {
                FUN_144a62e5c(&uStack_40,lVar18 + 0x18,(int)plVar3[0x59],
                              *(undefined4 *)((longlong)plVar3 + 0x2cc));
                if (iStack_38 != 0) {
                  FUN_144a78877(uStack_40 & 0xffffffff,iStack_38);
                }
                iVar6 = FUN_144b0847a(plVar11);
                if (iVar6 == -1) {
                  lVar9 = 0;
                }
                else {
                  lVar9 = (longlong)iVar6 * 0x20 + *plVar11;
                }
                plVar12 = (longlong *)(lVar9 + 0x10);
                if (lVar9 == 0) {
                  plVar12 = (longlong *)0x0;
                }
                lVar9 = *plVar12;
                lVar18 = *(longlong *)(lVar9 + 0x60);
              } while (lVar18 != 0);
            }
            uVar15 = *(ulonglong *)(lVar9 + 0x30);
            uStack_40 = uVar15;
            if (uVar15 != 0) goto LAB_144815ea3;
            FUN_140e43bf0(plVar3,&uStack_40,lVar9);
            uVar15 = uStack_40;
            if (uStack_40 != 0) {
              *(ulonglong *)(lVar9 + 0x30) = uStack_40;
              if (lVar9 != 0) {
                FUN_1407d81de(uStack_40 + 8,lVar9);
              }
              goto LAB_144815ea3;
            }
          }
          goto LAB_144816103;
        }
        goto LAB_144815ea3;
      }
    }
  }
  else {
    cVar4 = (**(code **)(*DAT_14cbc8bb8 + 0x300))(DAT_14cbc8bb8);
    if (cVar4 == '\0') goto LAB_144815f6c;
LAB_144815de0:
    puVar10 = (uint *)&DAT_14c948618;
    if (((*param_1 != 0) && (0 < (int)param_1[1])) && (*param_1 != DAT_14c948000)) {
      puVar10 = param_1 + 2;
      if (0 < (int)param_1[9]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (1 < param_1[1]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
    }
    uVar14 = *puVar10;
    uVar5 = puVar10[2];
    uVar13 = uVar14;
    if (uVar5 != 0) {
      uVar13 = uVar5 >> 0xd ^ uVar14 - uVar5;
      uVar16 = uVar13 << 8 ^ (-0x61c88647 - uVar5) - uVar13;
      uVar17 = uVar16 >> 0xd ^ (uVar5 - uVar13) - uVar16;
      uVar13 = uVar17 >> 0xc ^ (uVar13 - uVar16) - uVar17;
      uVar19 = uVar13 << 0x10 ^ (uVar16 - uVar17) - uVar13;
      uVar16 = uVar19 >> 5 ^ (uVar17 - uVar13) - uVar19;
      uVar17 = uVar16 >> 3 ^ (uVar13 - uVar19) - uVar16;
      uVar13 = uVar17 << 10 ^ (uVar19 - uVar16) - uVar17;
      uVar13 = uVar13 >> 0xf ^ uVar16 - (uVar17 + uVar13);
    }
    if ((int)plVar3[0x3a] != *(int *)((longlong)plVar3 + 0x1fc)) {
      plVar11 = plVar3 + 0x40;
      if ((longlong *)plVar3[0x41] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar3[0x41];
      }
      iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar3[0x42] - 1U & uVar13) * 4);
      if (iVar6 != -1) {
        lVar9 = plVar3[0x39];
        uVar15 = 0;
        do {
          lVar18 = (longlong)iVar6 * 0x20;
          if ((*(uint *)(lVar9 + lVar18) == uVar14) &&
             (lVar1 = lVar9 + lVar18, *(uint *)(lVar1 + 8) == uVar5)) {
            uVar15 = 0;
            if ((lVar1 != 0) && ((ulonglong *)(lVar1 + 0x10) != (ulonglong *)0x0)) {
              uVar15 = *(ulonglong *)(lVar1 + 0x10);
            }
            break;
          }
          iVar6 = *(int *)(lVar9 + 0x18 + lVar18);
        } while (iVar6 != -1);
        goto LAB_144815ea3;
      }
    }
  }
LAB_144816103:
  uVar15 = 0;
LAB_144815ea3:
  if ((uStack_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_144816008:
  iVar6 = *(int *)(lVar9 + 0x18 + lVar18);
  if (iVar6 == -1) goto LAB_144815ea3;
  goto LAB_144815ffc;
}



// FUNCTION 1414bb012 FUN_1414bb012 body=481 status=ok
// SIG undefined FUN_1414bb012(void)

void FUN_1414bb012(uint *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((*(longlong *)(param_1 + 2) == 0) || (param_1[1] == 0)) ||
      (uVar4 = *param_1, (int)uVar4 < 0)) || (DAT_14c9647dc <= (int)uVar4)) goto LAB_1414bb1c1;
  plVar7 = (longlong *)
           ((ulonglong)((uVar4 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
  if (((plVar7 == (longlong *)0x0) || (*(uint *)(plVar7 + 2) != param_1[1])) ||
     (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || (*plVar7 == 0)))) goto LAB_1414bb1c1;
  lVar1 = FUN_1400796d0(*(undefined8 *)(*plVar7 + 0x10),*(longlong *)(param_1 + 2),1);
  if (lVar1 == 0) goto LAB_1414bb1c1;
  if (param_1[1] == 0) {
LAB_1414bb1df:
    uVar5 = 0;
  }
  else {
    uVar4 = *param_1;
    uVar5 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar6 + 2) != param_1[1] || ((*(uint *)(puVar6 + 1) & 0x10200000) != 0))))
      goto LAB_1414bb1df;
      uVar5 = *puVar6;
    }
  }
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,uVar5,1);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x1f0) == 0) {
      plVar7 = (longlong *)(lVar1 + 0x458);
    }
    else {
      plVar7 = (longlong *)(*(longlong *)(lVar1 + 0x1f0) + 0xf0);
    }
    lVar1 = *plVar7;
    local_30 = *(undefined8 *)param_1;
    local_28 = *(undefined8 *)(param_1 + 2);
    FUN_1437437dc(lVar1,&local_20);
    if (local_20 != 0) {
      uVar4 = (uint)local_20;
      if ((int)(uVar4 & 0xffffff) < *(int *)(lVar1 + 0x10)) {
        lVar2 = lVar1 + 0x18;
        if (*(longlong *)(lVar1 + 0x28) != 0) {
          lVar2 = *(longlong *)(lVar1 + 0x28);
        }
        if ((*(uint *)(lVar2 + (ulonglong)((uVar4 & 0xffffff) >> 5) * 4) >> (uVar4 & 0x1f) & 1) != 0
           ) {
          lVar2 = *(longlong *)(lVar1 + 8);
          lVar3 = (ulonglong)(uVar4 & 0xffffff) * 0x70;
          if (((lVar2 + lVar3 != 0) && (*(longlong *)(lVar2 + 0x60 + lVar3) == local_20)) &&
             (*(char *)(lVar2 + 1 + lVar3) != '\x04')) {
            FUN_1405a424c(lVar1);
          }
        }
      }
    }
  }
LAB_1414bb1c1:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414bb1f4 FUN_1414bb1f4 body=1657 status=ok
// SIG undefined FUN_1414bb1f4(void)

void FUN_1414bb1f4(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStack_a8 [44];
  int local_7c;
  longlong *local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar7 = *(int *)(param_1 + 0x550);
  if (iVar7 == 0) {
    uVar17 = 1;
    uVar18 = 0;
    iVar8 = 0;
    iVar10 = 0;
  }
  else {
    puVar1 = *(uint **)(param_1 + 0x548);
    if (*(uint **)(param_1 + 0x548) == (uint *)0x0) {
      puVar1 = (uint *)(param_1 + 0x538);
    }
    uVar2 = *puVar1;
    if (uVar2 == 0) {
      iVar8 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar8 = iVar7 + -1;
      }
      uVar18 = 0;
      uVar3 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar3 = uVar18;
      }
      iVar8 = 0;
      do {
        if (uVar3 == uVar18) goto LAB_1414bb315;
        iVar8 = iVar8 + 0x20;
        uVar2 = puVar1[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar2 == 0);
    }
    else {
      uVar18 = 0;
      iVar8 = 0;
    }
    uVar17 = (ulonglong)(-uVar2 & uVar2);
    uVar3 = uVar17 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar10 = (iVar8 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar10) {
      iVar10 = iVar7;
    }
  }
  if (iVar10 != iVar7) {
    uVar2 = 0xffffffff;
    do {
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x528) + 8 + (longlong)iVar10 * 0x20);
      (**(code **)(*plVar6 + 8))(plVar6,param_2);
      uVar2 = ~(uint)uVar17 & uVar2;
      puVar1 = *(uint **)(param_1 + 0x548);
      if (*(uint **)(param_1 + 0x548) == (uint *)0x0) {
        puVar1 = (uint *)(param_1 + 0x538);
      }
      iVar16 = *(int *)(param_1 + 0x550);
      iVar10 = (int)uVar18;
      lVar14 = (longlong)iVar10;
      uVar9 = puVar1[lVar14] & uVar2;
      if (uVar9 == 0) {
        iVar4 = iVar16 + 0x1e;
        if (-1 < iVar16 + -1) {
          iVar4 = iVar16 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar8 = iVar8 + 0x20;
        iVar5 = iVar4;
        if (iVar4 < iVar10) {
          iVar5 = iVar10;
        }
        if (iVar10 < iVar4) {
          lVar12 = 0;
          do {
            uVar9 = puVar1[lVar14 + lVar12 + 1];
            if (uVar9 != 0) {
              uVar18 = (ulonglong)(iVar10 + (int)lVar12 + 1);
              uVar2 = 0xffffffff;
              goto LAB_1414bb2dd;
            }
            iVar8 = iVar8 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar5 - lVar14 != lVar12);
          uVar2 = 0xffffffff;
          lVar14 = (longlong)iVar5;
        }
        uVar18 = lVar14 + 1U & 0xffffffff;
        iVar10 = iVar16;
      }
      else {
LAB_1414bb2dd:
        uVar17 = (ulonglong)(-uVar9 & uVar9);
        uVar3 = uVar17 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar10 = (iVar8 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar16 <= iVar10) {
          iVar10 = iVar16;
        }
      }
    } while (iVar10 != iVar7);
  }
LAB_1414bb315:
  iVar7 = *(int *)(param_1 + 0x698);
  if (iVar7 == 0) {
    uVar17 = 1;
    uVar18 = 0;
    iVar8 = 0;
    iVar10 = 0;
  }
  else {
    puVar1 = *(uint **)(param_1 + 0x690);
    if (*(uint **)(param_1 + 0x690) == (uint *)0x0) {
      puVar1 = (uint *)(param_1 + 0x680);
    }
    uVar2 = *puVar1;
    if (uVar2 == 0) {
      iVar8 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar8 = iVar7 + -1;
      }
      uVar18 = 0;
      uVar3 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar3 = uVar18;
      }
      iVar8 = 0;
      do {
        if (uVar3 == uVar18) goto LAB_1414bb555;
        iVar8 = iVar8 + 0x20;
        uVar2 = puVar1[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar2 == 0);
    }
    else {
      uVar18 = 0;
      iVar8 = 0;
    }
    uVar17 = (ulonglong)(-uVar2 & uVar2);
    uVar3 = uVar17 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar10 = (iVar8 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar10) {
      iVar10 = iVar7;
    }
  }
  if (iVar10 != iVar7) {
    local_78 = param_2 + 0x10;
    uVar2 = 0xffffffff;
    do {
      plVar6 = (longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x670) + (longlong)iVar10 * 0x10) + 0x40);
      if (*(code **)(*param_2 + 0x10) == (code *)&LAB_1448810c0) {
        if ((char)param_2[2] == '\0') {
          lVar14 = *plVar6;
          uVar9 = *(uint *)(param_2 + 0x9b0);
          iVar10 = uVar9 + 1;
          *(int *)(param_2 + 0x9b0) = iVar10;
          param_2[(ulonglong)uVar9 + 0x9b1] = lVar14;
          if (iVar10 == 0x20) {
            FUN_1447111de(param_2 + 0x938);
          }
        }
        else {
          uVar9 = *(uint *)(param_2 + 0x88);
          iVar10 = uVar9 + 1;
          *(int *)(param_2 + 0x88) = iVar10;
          param_2[(ulonglong)uVar9 + 0x89] = (longlong)plVar6;
          if (iVar10 == 0x20) {
            FUN_144710aee(local_78);
          }
        }
      }
      else {
        (**(code **)(*param_2 + 0x10))(param_2);
      }
      uVar2 = uVar2 & ~(uint)uVar17;
      puVar1 = *(uint **)(param_1 + 0x690);
      if (*(uint **)(param_1 + 0x690) == (uint *)0x0) {
        puVar1 = (uint *)(param_1 + 0x680);
      }
      iVar16 = *(int *)(param_1 + 0x698);
      iVar10 = (int)uVar18;
      lVar14 = (longlong)iVar10;
      uVar9 = puVar1[lVar14] & uVar2;
      if (uVar9 == 0) {
        iVar4 = iVar16 + 0x1e;
        if (-1 < iVar16 + -1) {
          iVar4 = iVar16 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar8 = iVar8 + 0x20;
        iVar5 = iVar4;
        if (iVar4 < iVar10) {
          iVar5 = iVar10;
        }
        if (iVar10 < iVar4) {
          lVar12 = 0;
          do {
            uVar9 = puVar1[lVar14 + lVar12 + 1];
            if (uVar9 != 0) {
              uVar18 = (ulonglong)(iVar10 + (int)lVar12 + 1);
              uVar2 = 0xffffffff;
              goto LAB_1414bb41c;
            }
            iVar8 = iVar8 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar5 - lVar14 != lVar12);
          uVar2 = 0xffffffff;
          iVar10 = iVar5;
        }
        uVar18 = (ulonglong)(iVar10 + 1);
        iVar10 = iVar16;
      }
      else {
LAB_1414bb41c:
        uVar17 = (ulonglong)(-uVar9 & uVar9);
        uVar3 = uVar17 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar10 = (iVar8 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar16 <= iVar10) {
          iVar10 = iVar16;
        }
      }
    } while (iVar10 != iVar7);
  }
LAB_1414bb555:
  lVar14 = param_1 + 0x118;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = lVar14;
  if (*(int *)(param_1 + 0x130) == 0) {
    uVar18 = 1;
    iVar7 = 0;
    local_58._4_4_ = 0;
    uVar2 = 0xffffffff;
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar18 = local_68 >> 0x20;
    iVar7 = *(int *)(param_1 + 0x130);
    uVar2 = (uint)local_58;
    iVar8 = (int)local_68;
  }
  lVar12 = local_60;
  if (local_58._4_4_ != iVar7 || local_60 != lVar14) {
    local_70 = param_2 + 0x938;
    local_78 = param_2 + 0x10;
    iVar10 = local_58._4_4_;
    iVar16 = local_50;
    do {
      plVar6 = (longlong *)(*(longlong *)(param_1 + 0x108) + (longlong)iVar10 * 0x20 + 0x10);
      if (*(code **)(*param_2 + 0x10) == (code *)&LAB_1448810c0) {
        if ((char)param_2[2] == '\0') {
          lVar15 = *plVar6;
          uVar9 = *(uint *)(param_2 + 0x9b0);
          iVar10 = uVar9 + 1;
          *(int *)(param_2 + 0x9b0) = iVar10;
          param_2[(ulonglong)uVar9 + 0x9b1] = lVar15;
          if (iVar10 == 0x20) {
            local_7c = iVar16;
            FUN_1447111de(local_70);
            iVar16 = local_7c;
          }
        }
        else {
          uVar9 = *(uint *)(param_2 + 0x88);
          iVar10 = uVar9 + 1;
          *(int *)(param_2 + 0x88) = iVar10;
          param_2[(ulonglong)uVar9 + 0x89] = (longlong)plVar6;
          if (iVar10 == 0x20) {
            local_7c = iVar16;
            FUN_144710aee(local_78);
            iVar16 = local_7c;
          }
        }
      }
      else {
        local_7c = iVar16;
        (**(code **)(*param_2 + 0x10))(param_2);
        iVar16 = local_7c;
      }
      uVar2 = uVar2 & ~(uint)uVar18;
      lVar15 = *(longlong *)(lVar12 + 0x10);
      if (*(longlong *)(lVar12 + 0x10) == 0) {
        lVar15 = lVar12;
      }
      iVar4 = *(int *)(lVar12 + 0x18);
      lVar11 = (longlong)iVar8;
      uVar9 = *(uint *)(lVar15 + lVar11 * 4) & uVar2;
      if (uVar9 == 0) {
        iVar10 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar10 = iVar4 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar16 = iVar16 + 0x20;
        iVar5 = iVar10;
        if (iVar10 < iVar8) {
          iVar5 = iVar8;
        }
        if (iVar8 < iVar10) {
          lVar13 = 0;
          do {
            uVar9 = *(uint *)(lVar15 + lVar11 * 4 + 4 + lVar13 * 4);
            if (uVar9 != 0) {
              iVar8 = iVar8 + (int)lVar13 + 1;
              uVar2 = 0xffffffff;
              goto LAB_1414bb6db;
            }
            iVar16 = iVar16 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar5 - lVar11 != lVar13);
          uVar2 = 0xffffffff;
          iVar8 = iVar5;
        }
        iVar8 = iVar8 + 1;
        iVar10 = iVar4;
      }
      else {
LAB_1414bb6db:
        uVar18 = (ulonglong)(-uVar9 & uVar9);
        uVar3 = uVar18 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar10 = (iVar16 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar10) {
          iVar10 = iVar4;
        }
      }
    } while ((iVar10 != iVar7) || (lVar12 != lVar14));
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FUN_1414bb86e(*(longlong *)(param_1 + 0x1b8),param_2);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414bb86e FUN_1414bb86e body=1085 status=ok
// SIG undefined FUN_1414bb86e(void)

void FUN_1414bb86e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  void *_Dst;
  uint *puVar14;
  int iVar15;
  longlong lVar16;
  byte bVar17;
  int iVar18;
  uint uVar19;
  uint *puVar20;
  longlong lVar21;
  undefined8 *puVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uint uVar26;
  int iVar27;
  undefined8 *puVar28;
  bool bVar29;
  
  plVar3 = (longlong *)(param_1 + 0x380);
  puVar20 = (uint *)(param_1 + 0x390);
  iVar10 = *(int *)(param_1 + 0x3a8);
  if (iVar10 == 0) {
    uVar25 = 1;
    uVar24 = 0;
    iVar18 = 0;
    iVar15 = 0;
  }
  else {
    puVar14 = *(uint **)(param_1 + 0x3a0);
    if (*(uint **)(param_1 + 0x3a0) == (uint *)0x0) {
      puVar14 = puVar20;
    }
    uVar26 = *puVar14;
    if (uVar26 == 0) {
      iVar15 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar15 = iVar10 + -1;
      }
      uVar24 = 0;
      uVar25 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar25 = uVar24;
      }
      iVar18 = 0;
      do {
        if (uVar25 == uVar24) goto LAB_1414bba69;
        iVar18 = iVar18 + 0x20;
        uVar26 = puVar14[uVar24 + 1];
        uVar24 = uVar24 + 1;
      } while (uVar26 == 0);
    }
    else {
      uVar24 = 0;
      iVar18 = 0;
    }
    uVar25 = (ulonglong)(-uVar26 & uVar26);
    uVar4 = uVar25 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    iVar15 = (iVar18 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
    if (iVar10 <= iVar15) {
      iVar15 = iVar10;
    }
  }
  if (iVar15 < iVar10) {
    uVar26 = 0xffffffff;
    do {
      lVar21 = *plVar3;
      plVar5 = *(longlong **)(lVar21 + 0x10 + (longlong)iVar15 * 0x20);
      if (plVar5 == (longlong *)0x0) {
LAB_1414bb9b2:
        FUN_147bf468c(plVar3);
      }
      else {
        iVar10 = (int)plVar5[1];
        do {
          if (iVar10 == 0) goto LAB_1414bb9b2;
          LOCK();
          iVar12 = (int)plVar5[1];
          bVar29 = iVar10 == iVar12;
          if (bVar29) {
            *(int *)(plVar5 + 1) = iVar10 + 1;
            iVar12 = iVar10;
          }
          iVar10 = iVar12;
          UNLOCK();
        } while (!bVar29);
        lVar21 = *(longlong *)((longlong)iVar15 * 0x20 + lVar21 + 8);
        if (lVar21 == 0) {
          FUN_147bf468c(plVar3);
        }
        else if (*(longlong *)(lVar21 + 8) != 0) {
          (**(code **)(*param_2 + 0x88))(param_2,lVar21 + 8,*(undefined8 *)(param_1 + 0x148),0);
        }
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      uVar26 = uVar26 & ~(uint)uVar25;
      puVar14 = *(uint **)(param_1 + 0x3a0);
      if (*(uint **)(param_1 + 0x3a0) == (uint *)0x0) {
        puVar14 = puVar20;
      }
      iVar10 = *(int *)(param_1 + 0x3a8);
      iVar15 = (int)uVar24;
      lVar21 = (longlong)iVar15;
      uVar11 = puVar14[lVar21] & uVar26;
      if (uVar11 == 0) {
        iVar12 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar12 = iVar10 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar13 = iVar12;
        if (iVar12 < iVar15) {
          iVar13 = iVar15;
        }
        if (iVar12 <= iVar15) break;
        lVar16 = 0;
        while( true ) {
          iVar18 = iVar18 + 0x20;
          uVar11 = puVar14[lVar21 + lVar16 + 1];
          if (uVar11 != 0) break;
          lVar16 = lVar16 + 1;
          if (iVar13 - lVar21 == lVar16) goto LAB_1414bba69;
        }
        uVar24 = (ulonglong)(iVar15 + (int)lVar16 + 1);
        uVar26 = 0xffffffff;
      }
      uVar25 = (ulonglong)(-uVar11 & uVar11);
      uVar4 = uVar25 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      iVar15 = (iVar18 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar10);
  }
LAB_1414bba69:
  iVar10 = *(int *)(param_1 + 0x3b4);
  if ((longlong)iVar10 != 0) {
    uVar26 = *(uint *)(param_1 + 0x388);
    iVar18 = uVar26 - iVar10;
    iVar15 = iVar18;
    if (*(int *)(param_1 + 0x3b0) == -1) {
      bVar29 = false;
    }
    else {
      lVar21 = *(longlong *)(param_1 + 0x380);
      bVar29 = false;
      iVar12 = *(int *)(param_1 + 0x3b0);
      uVar11 = uVar26;
      do {
        iVar13 = *(int *)(lVar21 + 4 + (longlong)iVar12 * 0x20);
        if (iVar12 < iVar18) {
          puVar22 = (undefined8 *)((longlong)iVar12 * 0x20 + lVar21);
          puVar14 = *(uint **)(param_1 + 0x3a0);
          if (*(uint **)(param_1 + 0x3a0) == (uint *)0x0) {
            puVar14 = puVar20;
          }
          puVar9 = (undefined8 *)((longlong)(int)(uVar11 - 1) * 0x20 + lVar21 + 0x20);
          uVar19 = uVar11;
          do {
            puVar28 = puVar9;
            uVar11 = uVar19 - 1;
            uVar23 = uVar19 + 0x1e;
            if (-1 < (int)uVar11) {
              uVar23 = uVar11;
            }
            puVar9 = puVar28 + -4;
            uVar19 = uVar11;
          } while ((puVar14[(int)uVar23 >> 5] >> (uVar11 & 0x1f) & 1) == 0);
          uVar6 = puVar28[-4];
          uVar7 = puVar28[-3];
          uVar8 = puVar28[-1];
          puVar22[2] = puVar28[-2];
          puVar22[3] = uVar8;
          *puVar22 = uVar6;
          puVar22[1] = uVar7;
          puVar14 = *(uint **)(param_1 + 0x3a0);
          if (*(uint **)(param_1 + 0x3a0) == (uint *)0x0) {
            puVar14 = puVar20;
          }
          iVar27 = iVar12 + 0x1f;
          if (-1 < iVar12) {
            iVar27 = iVar12;
          }
          puVar14[iVar27 >> 5] = puVar14[iVar27 >> 5] | 1 << ((byte)iVar12 & 0x1f);
          bVar29 = true;
        }
        iVar12 = iVar13;
      } while (iVar13 != -1);
      iVar12 = *(int *)(param_1 + 0x388) - uVar26;
      if (iVar12 != 0) {
        _Dst = (void *)((longlong)iVar18 * 0x20 + *(longlong *)(param_1 + 0x380));
        memmove(_Dst,(void *)((longlong)iVar10 * 0x20 + (longlong)_Dst),(longlong)iVar12 << 5);
        iVar15 = *(int *)(param_1 + 0x388) - iVar10;
      }
    }
    *(int *)(param_1 + 0x388) = iVar15;
    iVar15 = *(int *)(param_1 + 0x3a8) - uVar26;
    if (iVar15 != 0) {
      puVar14 = *(uint **)(param_1 + 0x3a0);
      if (*(uint **)(param_1 + 0x3a0) == (uint *)0x0) {
        puVar14 = puVar20;
      }
      FUN_14493566c(puVar14,iVar18,puVar14,uVar26,iVar15);
      iVar18 = *(int *)(param_1 + 0x3a8) - iVar10;
    }
    iVar10 = iVar18 + 0x1f;
    if (-1 < iVar18) {
      iVar10 = iVar18;
    }
    *(int *)(param_1 + 0x3a8) = iVar18;
    if (iVar18 % 0x20 != 0) {
      if (*(uint **)(param_1 + 0x3a0) != (uint *)0x0) {
        puVar20 = *(uint **)(param_1 + 0x3a0);
      }
      bVar17 = -(char)(iVar18 % 0x20);
      puVar20[iVar10 >> 5] = (puVar20[iVar10 >> 5] << (bVar17 & 0x1f)) >> (bVar17 & 0x1f);
    }
    *(undefined8 *)(param_1 + 0x3b0) = 0xffffffff;
    iVar10 = *(int *)(param_1 + 0x38c);
    if (iVar10 == *(int *)(param_1 + 0x388)) {
      if (bVar29) {
        iVar15 = 0;
LAB_1414bbc45:
        iVar18 = 1;
        if (3 < (uint)(iVar10 - iVar15)) {
          uVar24 = (ulonglong)(iVar10 - iVar15 & 0xfffffffe) + 0xf;
          lVar21 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          iVar18 = 1 << ((byte)lVar21 & 0x1f);
        }
        *(int *)(param_1 + 0x3c8) = iVar18;
        FUN_147bf44c8(plVar3);
        return;
      }
    }
    else {
      FUN_1446f4a44(plVar3);
      if (bVar29) {
        iVar10 = *(int *)(param_1 + 0x388);
        iVar15 = *(int *)(param_1 + 0x3b4);
        goto LAB_1414bbc45;
      }
    }
  }
  return;
}



// FUNCTION 1414bbcac FUN_1414bbcac body=523 status=ok
// SIG undefined FUN_1414bbcac(void)

void FUN_1414bbcac(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c949598 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c949598,0,0,4);
  }
  uVar3 = DAT_14c9495a0;
  uVar2 = local_50;
  if (DAT_14c9495a0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14c949590,0,DAT_14c9495a0,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14c949598;
        if (DAT_14c949598 == (undefined *)0x0) {
          puVar6 = &DAT_14c949590;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14c9495a0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14c949568;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14c949580 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14c949558;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x14);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14c9495a0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x10 + lVar5 * 0x14) = iVar8;
        puVar6 = DAT_14c949598;
        if (DAT_14c949598 == (undefined *)0x0) {
          puVar6 = &DAT_14c949590;
        }
        *(undefined4 *)(lVar1 + 0xc + lVar5 * 0x14) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14c9495a0 - 1U & uVar9) * 4);
        puVar6 = DAT_14c949598;
        if (DAT_14c949598 == (undefined *)0x0) {
          puVar6 = &DAT_14c949590;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14c9495a0 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414bbeb8 FUN_1414bbeb8 body=279 status=ok
// SIG undefined FUN_1414bbeb8(void)

undefined8 * FUN_1414bbeb8(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined1 local_38;
  char *local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = FUN_14007ca06();
  FUN_14587fe90(param_1,uVar2);
  *param_1 = &PTR_FUN_14b0f3420;
  FUN_1409e1656(param_1 + 0x11);
  *param_1 = &PTR_FUN_14b71ff60;
  param_1[0x11] = &PTR_LAB_14b7203c0;
  param_1[0x12] = 0;
  param_1[0x13] = &PTR_LAB_14b720410;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    local_30 = "OakDebugMenu";
    local_28 = 0xc;
    local_24 = 0;
    uVar1 = FUN_14001a6c0(&local_30,1);
    local_48 = FUN_1440410c4();
    local_38 = 1;
    local_40 = 1;
    lVar3 = FUN_140486aac(param_2,param_1,uVar1,local_48);
    if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar3);
    }
    param_1[0x12] = lVar3;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414bbfd0 FUN_1414bbfd0 body=63 status=ok
// SIG undefined FUN_1414bbfd0(void)

void FUN_1414bbfd0(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1414bc010 FUN_1414bc010 body=1229 status=ok
// SIG undefined FUN_1414bc010(void)

void FUN_1414bc010(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 == 0) goto LAB_1414bc103;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 == 2) goto LAB_1414bc434;
    if (iVar6 != 1) goto LAB_1414bc05b;
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    if (DVar7 == DVar8) goto LAB_1414bc434;
  }
  else {
LAB_1414bc05b:
    if (iVar6 == 0x10) goto LAB_1414bc434;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2)) {
LAB_1414bc434:
      FUN_145973e44(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
    if (iVar6 == 1) {
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_1414bc434;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar10 = (uint *)*puVar2;
    if (puVar10 != (uint *)0x0) goto LAB_1414bc1c5;
    while( true ) {
      uVar12 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar12 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar12 | 1;
        __tlregdtor(&LAB_144524619);
      }
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar9 = *(undefined4 **)(lVar4 + 0x310);
      *(undefined8 *)(lVar4 + 0x310) = 0;
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar9 = 0xffffffff;
      *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
      puVar9[0x12] = 0;
      *puVar2 = puVar9;
      FUN_140217a48(puVar2);
      puVar10 = (uint *)*puVar2;
LAB_1414bc1c5:
      puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar14 = (uint *)(puVar16 + 0x16);
      uVar12 = puVar10[0x12];
      if (puVar14 <= puVar10 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
        LOCK();
        uVar3 = *puVar10;
        *puVar10 = *puVar10 + uVar12 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar12) != 0xffffffff) break;
        puVar10 = (uint *)*puVar2;
        *puVar10 = 0xffffffff;
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar2 = puVar10;
        puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
        puVar14 = (uint *)(puVar16 + 0x16);
        uVar12 = 0;
        if (puVar14 <= puVar10 + 0x4000) {
          uVar12 = 1;
          goto LAB_1414bc245;
        }
      }
    }
    uVar12 = uVar12 + 1;
LAB_1414bc245:
    *(uint **)(puVar10 + 0x10) = puVar14;
    puVar10[0x12] = uVar12;
    iVar6 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14bcdce28;
    puVar16[0x15] = param_1;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar12 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
        uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
        iVar6 = 0;
      }
      else {
        uVar15 = 2;
      }
    }
    else {
      iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar15 = 5;
    }
    if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
    }
    puVar16[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar16[9] = puVar16;
    puVar16[10] = puVar16;
    lVar4 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar4 == 0) {
      uVar5 = 1;
      if ((char)uVar15 != '\x06') {
        uVar5 = uVar15;
      }
      uVar15 = uVar5;
      uVar11 = 0;
    }
    else {
      if ((char)uVar15 == '\x06') {
        uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
      }
      uVar11 = *(undefined8 *)(lVar4 + 0x30);
    }
    puVar16[0xf] = uVar11;
    puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar6;
    if (puVar16 == (undefined8 *)0x0) {
      local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(puVar16);
      LOCK();
      piVar1 = (int *)(puVar16 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar16)(puVar16,1);
      }
    }
  }
  else {
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14bcdcde0;
    local_68[0] = FUN_1445249d4;
    local_40 = param_1;
    FUN_14005a792(&DAT_14ca9a440,L"ReleaseRenderProxy",&DAT_14cc1ad20);
    if (local_68[0] != (code *)0x0) {
      pppuVar13 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar13 = &local_48;
      }
      (*(code *)(*pppuVar13)[2])();
    }
  }
LAB_1414bc103:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414bc4f0 FUN_1414bc4f0 body=49 status=ok
// SIG undefined FUN_1414bc4f0(void)

void FUN_1414bc4f0(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1414bc522 FUN_1414bc522 body=554 status=ok
// SIG undefined FUN_1414bc522(void)

undefined8 FUN_1414bc522(longlong *param_1,uint param_2,int param_3,undefined1 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  byte bVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  
  if (((int)param_2 < 0) || ((int)param_1[4] <= (int)param_2)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    if ((int)param_2 < (int)param_1[6]) {
      lVar2 = param_1[5];
      uVar11 = (ulonglong)param_2;
      if (param_3 < 1) {
        param_3 = 0;
      }
      iVar13 = *(int *)(lVar2 + uVar11 * 4);
      *(int *)(lVar2 + uVar11 * 4) = param_3;
      iVar13 = param_3 - iVar13;
      if (iVar13 != 0) {
        plVar1 = (longlong *)(param_1[3] + uVar11 * 0x30);
        lVar9 = *(longlong *)(param_1[3] + 8 + uVar11 * 0x30);
        if (lVar9 == 0) {
          uVar5 = FUN_145764ed6();
          lVar9 = FUN_14477b664(uVar5);
          plVar1[1] = lVar9;
        }
        lVar6 = plVar1[2];
        if (((lVar6 == 0) && (lVar6 = 0, lVar9 != 0)) && (*plVar1 != 0)) {
          plVar3 = *(longlong **)(lVar9 + 0xb8);
          if ((plVar3 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
            lVar6 = 0;
          }
          else {
            uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
            lVar6 = FUN_144aff482(uVar5,plVar1);
          }
          plVar1[2] = lVar6;
        }
        iVar7 = *(int *)((longlong)param_1 + 0x14);
        *(int *)((longlong)param_1 + 0x14) = iVar7 + 1;
        lVar9 = (longlong)(int)param_1[1];
        if (lVar9 < 1) {
          *(int *)((longlong)param_1 + 0x14) = iVar7;
        }
        else {
          uVar12 = lVar9 + 1;
          lVar9 = lVar9 * 0x10 + -8;
          bVar10 = 0;
          do {
            if (((*(int *)(*param_1 + lVar9) == 0) ||
                (plVar3 = *(longlong **)(*param_1 + -8 + lVar9), plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x60))(plVar3,lVar6,param_3,iVar13,param_4),
               cVar4 == '\0')) {
              bVar10 = 1;
            }
            uVar12 = uVar12 - 1;
            lVar9 = lVar9 + -0x10;
          } while (1 < uVar12);
          iVar13 = *(int *)((longlong)param_1 + 0x14);
          *(int *)((longlong)param_1 + 0x14) = iVar13 + -1;
          if ((bool)(bVar10 & iVar13 < 2)) {
            iVar13 = (int)param_1[1];
            iVar7 = iVar13;
            if (0 < iVar13) {
              iVar8 = 0;
              do {
                if (((*(int *)(*param_1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                    (plVar3 = *(longlong **)(*param_1 + (longlong)iVar8 * 0x10),
                    plVar3 == (longlong *)0x0)) ||
                   (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
                  FUN_14005b288(param_1,iVar8);
                  FUN_14005b248(param_1);
                }
                else {
                  iVar8 = iVar8 + 1;
                }
                iVar7 = (int)param_1[1];
              } while (iVar8 < iVar7);
            }
            iVar8 = 2;
            if (2 < iVar7 * 2) {
              iVar8 = iVar7 * 2;
            }
            *(int *)(param_1 + 2) = iVar8;
            if ((iVar8 < iVar13) && (*(int *)((longlong)param_1 + 0xc) != iVar7)) {
              FUN_14045812c(param_1);
            }
          }
        }
        FUN_1401861f4(plVar1 + 3,*(undefined4 *)(lVar2 + uVar11 * 4));
        uVar5 = 1;
      }
    }
  }
  return uVar5;
}



// FUNCTION 1414bc74c FUN_1414bc74c body=408 status=ok
// SIG undefined FUN_1414bc74c(void)

void FUN_1414bc74c(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  
  if (param_2 != 0) {
    lVar6 = FUN_140859b94();
    if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
       (lVar6 = *(longlong *)(param_2 + 0x990), lVar6 != 0)) {
      *(undefined8 *)(lVar6 + 0x180) = *(undefined8 *)(param_1 + 0x28);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(lVar6 + 0x170) = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(lVar6 + 0x178) = uVar5;
      lVar7 = *(longlong *)(lVar6 + 0x1a0);
      if (lVar7 != 0) {
        if (0 < *(int *)(lVar7 + 0x10)) {
          *(undefined4 *)(*(longlong *)(lVar7 + 8) + 0x28) = *(undefined4 *)(param_1 + 0xa0);
          lVar7 = *(longlong *)(lVar6 + 0x1a0);
        }
        iVar1 = *(int *)(lVar7 + 0x40);
        if (0 < (longlong)iVar1) {
          lVar7 = 0;
          lVar9 = 0x54;
          iVar10 = 0;
          do {
            lVar3 = *(longlong *)(*(longlong *)(lVar6 + 0x1a0) + 0x48);
            lVar4 = lVar7 * 0x88;
            *(undefined4 *)(lVar3 + 0x50 + lVar4) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0x60) + lVar7 * 4);
            *(undefined4 *)(lVar3 + 0xc + lVar4) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0x50) + lVar7 * 4);
            *(undefined4 *)(lVar3 + 0x7c + lVar4) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0x80) + lVar7 * 4);
            iVar2 = *(int *)(*(longlong *)(param_1 + 0x90) + lVar7 * 4);
            *(int *)(lVar3 + 0x80 + lVar4) = iVar2;
            if (0 < iVar2) {
              lVar8 = 0;
              do {
                *(undefined4 *)(lVar3 + lVar9 + lVar8 * 4) =
                     *(undefined4 *)
                      (*(longlong *)(param_1 + 0x70) + (longlong)iVar10 * 4 + lVar8 * 4);
                lVar8 = lVar8 + 1;
              } while (lVar8 < *(int *)(lVar4 + lVar3 + 0x80));
              iVar10 = iVar10 + (int)lVar8;
            }
            lVar3 = *(longlong *)(*(longlong *)(lVar6 + 0x1a0) + 0x38);
            *(undefined4 *)(lVar3 + 0x30 + lVar7 * 0xe8) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0x30) + lVar7 * 4);
            *(undefined4 *)(lVar3 + 0x60 + lVar7 * 0xe8) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0x40) + lVar7 * 4);
            lVar7 = lVar7 + 1;
            lVar9 = lVar9 + 0x88;
          } while (lVar7 != iVar1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1414bc8e4 FUN_1414bc8e4 body=68 status=ok
// SIG undefined FUN_1414bc8e4(void)

undefined8 *
FUN_1414bc8e4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  FUN_1448097c4(param_1,param_3,param_4,param_5);
  *param_2 = *param_1;
  *param_1 = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 1414bc928 FUN_1414bc928 body=82 status=ok
// SIG undefined FUN_1414bc928(void)

void FUN_1414bc928(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0x400,0);
    lVar4 = 0xf;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 8;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x10;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 1414bc97a FUN_1414bc97a body=1760 status=ok
// SIG undefined FUN_1414bc97a(void)

void FUN_1414bc97a(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  byte *pbVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  code *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_d8 = (undefined *)FUN_1446ddbd2();
      local_d0 = FUN_1403a682c;
      local_e0 = 0;
      local_e8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar6,param_2,&local_68);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar6,param_2,&local_68);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_68 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
    }
    else {
      (*pcVar3)(uVar6,param_2,&local_68);
    }
  }
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  local_78 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947f70) {
    FUN_144b3d300(&DAT_14c947f70);
    if (DAT_14c947f70 == -1) {
      local_d8 = (undefined *)FUN_1446ddbd2();
      local_d0 = FUN_141710108;
      local_e0 = 0x1000000000000000;
      local_e8 = 0x8001;
      FUN_14000176a(&DAT_14c947f20,L"FGbxDefPtrProperty",0);
      atexit(FUN_1427b4857);
      _Init_thread_footer(&DAT_14c947f70);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar6,param_2,&local_88);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar6,param_2,&local_88);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar6 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      local_88 = (undefined4)uVar6;
      uStack_84 = (undefined4)((ulonglong)uVar6 >> 0x20);
    }
    else {
      (*pcVar3)(uVar6,param_2,&local_88);
    }
  }
  uStack_8c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_d0 = FUN_1408a629c;
      local_d8 = &DAT_14c9520b8;
      local_e0 = 0;
      local_e8 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_8c);
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar6,param_2,&uStack_8c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar6,param_2,&uStack_8c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar6 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      uStack_8c = (undefined4)uVar6;
      local_88 = (undefined4)((ulonglong)uVar6 >> 0x20);
    }
    else {
      (*pcVar3)(uVar6,param_2,&uStack_8c);
    }
  }
  local_90 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_d0 = FUN_1408a629c;
      local_d8 = &DAT_14c9520b8;
      local_e0 = 0;
      local_e8 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar6,param_2,&local_90);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar6,param_2,&local_90);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar6 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      local_90 = (undefined4)uVar6;
      uStack_8c = (undefined4)((ulonglong)uVar6 >> 0x20);
    }
    else {
      (*pcVar3)(uVar6,param_2,&local_90);
    }
  }
  uVar5 = uStack_8c;
  uVar4 = local_90;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = CONCAT44(uStack_84,local_88);
  uVar6 = FUN_14477b664(uStack_80);
  local_a0 = FUN_14477b664(uVar6);
  local_98 = local_78;
  local_c8 = local_68;
  local_c0 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plStack_60 + 0xc) = *(int *)((longlong)plStack_60 + 0xc) + 1;
    UNLOCK();
  }
  local_b8 = (undefined4)local_58;
  uStack_b4 = local_58._4_4_;
  uStack_b0 = (undefined4)uStack_50;
  uStack_ac = uStack_50._4_4_;
  FUN_1414bd05c(&local_c8,&local_a8,uVar5,uVar4);
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_60 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_60 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414bd05c FUN_1414bd05c body=272 status=ok
// SIG undefined FUN_1414bd05c(void)

void FUN_1414bd05c(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  cVar3 = FUN_1404fa388();
  if (cVar3 == '\0') goto LAB_1414bd0ed;
  lVar6 = param_2[1];
  if (lVar6 == 0) {
    if (DAT_14cb256c8 == 0) {
      uVar4 = FUN_140cd185c();
      DAT_14cb256c8 = FUN_140002ddd(FUN_141819010,uVar4,L"WwiseGameParameterDef");
    }
    lVar6 = FUN_14477b664(DAT_14cb256c8);
    param_2[1] = lVar6;
  }
  lVar5 = param_2[2];
  if (((lVar5 == 0) && (lVar5 = 0, lVar6 != 0)) && (*param_2 != 0)) {
    plVar2 = *(longlong **)(lVar6 + 0xb8);
    if (plVar2 == (longlong *)0x0) {
LAB_1414bd10e:
      lVar5 = 0;
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 == '\0') goto LAB_1414bd10e;
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar5 = FUN_144aff482(uVar4,param_2);
    }
    param_2[2] = lVar5;
  }
  FUN_1404fa226(param_1,lVar5,param_3,param_4);
LAB_1414bd0ed:
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001414bd168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1414bd16c FUN_1414bd16c body=220 status=ok
// SIG undefined FUN_1414bd16c(void)

undefined4 FUN_1414bd16c(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined **local_68;
  undefined8 local_60;
  longlong local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)(int)param_1[1] == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = *param_1;
    lVar3 = (longlong)(int)param_1[1] * 0x20;
    do {
      lVar3 = lVar3 + -0x20;
      local_68 = &PTR_FUN_14a184370;
      local_60 = *param_2;
      local_58 = param_2[1];
      if (local_58 != 0) {
        LOCK();
        *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
        UNLOCK();
      }
      local_50 = 0;
      uVar1 = FUN_140ba41f1(lVar2,&local_68);
      local_68 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])(&local_60);
    } while (((char)uVar1 == '\0') && (lVar2 = lVar2 + 0x20, lVar3 != 0));
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414bd24a FUN_1414bd24a body=122 status=ok
// SIG undefined FUN_1414bd24a(void)

void FUN_1414bd24a(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    LOCK();
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    UNLOCK();
    pbVar1 = param_1 + 0x10;
    bVar2 = *param_1;
    while ((bVar2 & 1) != 0) {
      FUN_1400e427a(0);
      FUN_14000f986(0x3a83126f);
      bVar2 = *param_1;
    }
    plVar3 = *(longlong **)pbVar1;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,1);
    }
    plVar3 = *(longlong **)(param_1 + 0x18);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,1);
    }
    pbVar1[0] = 0;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    pbVar1[3] = 0;
    pbVar1[4] = 0;
    pbVar1[5] = 0;
    pbVar1[6] = 0;
    pbVar1[7] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
  }
  return;
}



// FUNCTION 1414bd2c4 FUN_1414bd2c4 body=150 status=ok
// SIG undefined FUN_1414bd2c4(void)

undefined8 FUN_1414bd2c4(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined1 *local_28;
  undefined8 **local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cb78540 == 0) {
    uVar2 = 0;
  }
  else {
    local_50 = *param_1;
    local_38 = &local_50;
    local_48 = *(undefined4 *)(param_1 + 1);
    local_40 = 0;
    local_30 = &local_18;
    local_18 = 0;
    local_20 = &local_38;
    local_28 = &LAB_143d190bc;
    cVar1 = FUN_14187e804(DAT_14cb78540,&local_28,0);
    uVar2 = 0;
    if (cVar1 != '\0') {
      uVar2 = local_18;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414bd35c FUN_1414bd35c body=311 status=ok
// SIG undefined FUN_1414bd35c(void)

void FUN_1414bd35c(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar5 = (**(code **)(*param_1 + 0x180))();
  FUN_14027ab42(&local_38,uVar5);
  if (plStack_30 != (longlong *)0x0) {
    iVar4 = (int)plStack_30[1];
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)plStack_30[1];
      bVar9 = iVar4 == iVar3;
      if (bVar9) {
        *(int *)(plStack_30 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar7 = plStack_30;
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)plStack_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_30 + 0x10))();
    }
    lVar6 = local_38;
    if (plVar7 != (longlong *)0x0) {
      if (local_38 != 0) {
        FUN_145b011cc(local_38 + 0x28,&local_38,param_1);
        local_38 = 0;
        plStack_30 = (longlong *)0x0;
        FUN_1404e8c3a(lVar6,&local_38);
        if ((longlong)(int)plStack_30 != 0) {
          lVar8 = (longlong)(int)plStack_30 << 4;
          lVar6 = local_38;
          do {
            FUN_140f8e940(param_1,lVar6,0);
            lVar6 = lVar6 + 0x10;
            lVar8 = lVar8 + -0x10;
          } while (lVar8 != 0);
        }
        if (local_38 != 0) {
          FUN_1400020a8(local_38);
        }
      }
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  FUN_145b010dc(&local_38,param_1);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414bd494 FUN_1414bd494 body=188 status=ok
// SIG undefined FUN_1414bd494(void)

void FUN_1414bd494(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x268) != 0) goto LAB_1414bd4b5;
  lVar1 = *(longlong *)(param_1 + 0x228);
  local_30 = lVar1;
  uVar4 = FUN_14073f72a();
  local_28 = FUN_14477b664(uVar4);
  local_20 = 0;
  uVar4 = 0;
  if ((lVar1 != 0) && (local_28 != 0)) {
    plVar2 = *(longlong **)(local_28 + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 != '\0') {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        uVar4 = FUN_144aff482(uVar4,&local_30);
        goto LAB_1414bd541;
      }
    }
    uVar4 = 0;
  }
LAB_1414bd541:
  *(undefined8 *)(param_1 + 0x268) = uVar4;
LAB_1414bd4b5:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414bd552 FUN_1414bd552 body=494 status=ok
// SIG undefined FUN_1414bd552(void)

void FUN_1414bd552(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined *puVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined4 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14caf15d8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14caf15d8,0,0,4);
  }
  uVar2 = DAT_14caf15e0;
  uVar3 = local_60;
  if (DAT_14caf15e0 != 0) {
    uVar8 = 0;
    FUN_144a1cbf0(&DAT_14caf15d0,0,DAT_14caf15e0,4);
    if (0 < (int)uVar2) {
      do {
        puVar7 = DAT_14caf15d8;
        if (DAT_14caf15d8 == (undefined *)0x0) {
          puVar7 = &DAT_14caf15d0;
        }
        *(undefined4 *)(puVar7 + (ulonglong)(DAT_14caf15e0 + 0x7fffffff & uVar8) * 4) = 0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_50 = 0x100000000;
    local_48 = &DAT_14caf15a8;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (DAT_14caf15c0 != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = &DAT_14caf1598;
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar3 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if (local_60._4_4_ < (int)local_48[6]) {
      iVar4 = local_60._4_4_;
      local_60 = uVar3;
      do {
        lVar1 = *local_78;
        lVar9 = (longlong)iVar4 * 0x20;
        iVar5 = FUN_1447addd0(lVar1 + lVar9,0x10);
        uVar6 = (longlong)iVar5 & (longlong)(int)DAT_14caf15e0 - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar1 + 0x1c + lVar9) = iVar5;
        puVar7 = DAT_14caf15d8;
        if (DAT_14caf15d8 == (undefined *)0x0) {
          puVar7 = &DAT_14caf15d0;
        }
        *(undefined4 *)(lVar1 + 0x18 + lVar9) =
             *(undefined4 *)(puVar7 + ((longlong)(int)DAT_14caf15e0 - 1U & uVar6) * 4);
        puVar7 = DAT_14caf15d8;
        if (DAT_14caf15d8 == (undefined *)0x0) {
          puVar7 = &DAT_14caf15d0;
        }
        *(int *)(puVar7 + ((longlong)iVar5 & (longlong)(int)DAT_14caf15e0 - 1U) * 4) = iVar4;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar3 = local_60;
      } while (local_60._4_4_ < (int)local_68[6]);
    }
  }
  local_60 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414bd742 FUN_1414bd742 body=323 status=ok
// SIG undefined FUN_1414bd742(void)

void FUN_1414bd742(longlong *param_1,undefined8 param_2)

{
  size_t sVar1;
  wchar_t *_Str;
  uint uVar2;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_58 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_50 = (undefined1 *)0x0;
      local_48 = 0;
      goto LAB_1414bd81d;
    }
  }
  local_58 = (undefined1 *)0x0;
  sVar1 = wcslen(_Str);
  local_48 = FUN_14475aa65(0,_Str,sVar1 & 0xffffffff);
  uVar2 = local_48 + 1;
  local_50 = (undefined1 *)0x0;
  if (0x80 < uVar2) {
    FUN_1446efa72(&local_58,0,uVar2,1);
    local_50 = local_58;
  }
  if (local_50 == (undefined1 *)0x0) {
    local_50 = local_d8;
  }
  FUN_14475a98a(local_50,uVar2,_Str,(int)sVar1 + 1);
LAB_1414bd81d:
  FUN_14597ea8e(param_2,local_50,param_1 + 2);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414bd886 FUN_1414bd886 body=94 status=ok
// SIG undefined FUN_1414bd886(void)

void FUN_1414bd886(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xe8) + 8 + (longlong)param_2 * 0x40);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    iVar1 = *(int *)(param_3 + 0x28);
    *(uint *)(param_3 + 0x28) = iVar1 + 1U;
    if (*(uint *)(param_3 + 0x2c) < iVar1 + 1U) {
      FUN_14476a5c8(param_3,iVar1);
    }
    lVar3 = *(longlong *)(param_3 + 0x20);
    if (*(longlong *)(param_3 + 0x20) == 0) {
      lVar3 = param_3;
    }
    *(longlong *)(lVar3 + (longlong)iVar1 * 8) = lVar2;
  }
  return;
}



// FUNCTION 1414bd8e4 FUN_1414bd8e4 body=367 status=ok
// SIG undefined FUN_1414bd8e4(void)

longlong FUN_1414bd8e4(longlong *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  short *psVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = (longlong)(int)param_1[1];
  if (lVar5 != 0) {
    uVar7 = 0;
    do {
      if (*(short *)(*param_1 + uVar7) == 0x2e) {
        if ((int)(~uVar7 >> 1) != 0) goto LAB_1414bd98a;
        break;
      }
      uVar7 = uVar7 + 2;
    } while (lVar5 * 2 != uVar7);
  }
  uVar7 = lVar5 * 2;
  do {
    if (uVar7 == 0) goto LAB_1414bd98a;
    uVar1 = uVar7 - 2;
    psVar2 = (short *)(*param_1 + -2 + uVar7);
    uVar7 = uVar1;
  } while (*psVar2 != 0x2f);
  iVar9 = (int)(uVar1 >> 1);
  if (iVar9 != -1) {
    FUN_144a49bb4(param_1,&local_30,iVar9 + 1);
    FUN_140002184(param_1,0x2e);
    iVar9 = local_28 + -1;
    if (local_28 == 0) {
      iVar9 = 0;
    }
    FUN_1400020e8(param_1,local_30,iVar9);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
LAB_1414bd98a:
  lVar5 = FUN_140259bea();
  if (*(longlong *)(lVar5 + 0x110) == 0) {
    FUN_140aa6c08();
  }
  if ((int)param_1[1] == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*param_1;
  }
  uVar4 = FUN_140259bea();
  local_40 = 0;
  local_50 = 0;
  local_48 = 1;
  local_58 = param_2;
  lVar5 = FUN_1412ecd05(uVar4,0,puVar8,0);
  if (lVar5 != 0) {
    uVar3 = *(uint *)(lVar5 + 0xc);
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    FUN_1447f71cc(lVar6,0x40000000);
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 1414bda5c FUN_1414bda5c body=1325 status=ok
// SIG undefined FUN_1414bda5c(void)

undefined8 * FUN_1414bda5c(undefined8 *param_1)

{
  void **ppvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *_Src;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_68;
  ulonglong uStack_60;
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140eb1504();
  *param_1 = &PTR_FUN_14b6778b0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf00000d0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x17) = 1;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0x3005;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0xf00000d0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xf00000d0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0x3f800000;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x3005;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0xf00000d0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0xf00000d0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0x3f800000;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0x3005;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0xf00000d0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0xf00000d0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5d) = 0x3f800000;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 100) = 0xf00000d0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0x3f800000;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0xc5daac38;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  memset(param_1 + 0x6e,0,0x8c);
  *(undefined4 *)(param_1 + 0x86) = 0xf00000d0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x89) = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0xf00000d0;
  param_1[0x91] = 0;
  *(undefined4 *)(param_1 + 0x92) = 0x3f800000;
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  *(undefined4 *)(param_1 + 0x9b) = 0xf00000d0;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x9e) = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  *(undefined4 *)(param_1 + 0xa5) = 0xf00000d0;
  param_1[0xa6] = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  *(undefined4 *)(param_1 + 0xaf) = 0xf00000d0;
  param_1[0xb0] = 0;
  *(undefined4 *)(param_1 + 0xb1) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb2) = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  *(undefined4 *)(param_1 + 0xb9) = 0xf00000d0;
  param_1[0xba] = 0;
  *(undefined4 *)(param_1 + 0xbb) = 0x3f800000;
  param_1[0xbc] = 0;
  *(undefined4 *)(param_1 + 0xbd) = 0x34002;
  param_1[0xbe] = 0;
  *(undefined4 *)(param_1 + 0xbf) = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  *(undefined4 *)(param_1 + 0xc6) = 0xf00000d0;
  param_1[199] = 0;
  *(undefined4 *)(param_1 + 200) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc9) = 0x3e800000;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0xf00000d0;
  param_1[0xd1] = 0;
  *(undefined4 *)(param_1 + 0xd2) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd3) = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  *(undefined4 *)(param_1 + 0xda) = 0xf00000d0;
  param_1[0xdb] = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xdd) = 0;
  param_1[0xde] = 0;
  *(undefined4 *)(param_1 + 0xdf) = 0x34001;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  *(undefined4 *)(param_1 + 0xe6) = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  *(undefined4 *)(param_1 + 0xed) = 0xf00000d0;
  param_1[0xee] = 0;
  *(undefined4 *)(param_1 + 0xef) = 0x3f800000;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  param_1[0xf3] = DAT_14c846508;
  uVar4 = DAT_14c846500._4_4_;
  uVar3 = (undefined4)DAT_14c846500;
  uVar2 = DAT_14c8464f8._4_4_;
  *(undefined4 *)(param_1 + 0xf1) = (undefined4)DAT_14c8464f8;
  *(undefined4 *)((longlong)param_1 + 0x78c) = uVar2;
  *(undefined4 *)(param_1 + 0xf2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x794) = uVar4;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7a4) = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  local_50 = L"/Script/OakGame.GrenadeBehavior_PayloadLingering";
  local_48 = 0x30;
  FUN_14475bf92(&local_78);
  _Src = local_68;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = (undefined4)local_78;
  *(undefined4 *)((longlong)param_1 + 0x14) = local_78._4_4_;
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_70._4_4_;
  ppvVar1 = (void **)(param_1 + 4);
  if (ppvVar1 != &local_68) {
    iVar5 = (int)uStack_60;
    lVar6 = (longlong)(int)uStack_60;
    *(int *)(param_1 + 5) = (int)uStack_60;
    if ((int)uStack_60 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,uStack_60 & 0xffffffff);
      if (iVar5 != 0) {
        memcpy(*ppvVar1,_Src,lVar6 * 2);
      }
    }
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414bdf8a FUN_1414bdf8a body=1621 status=ok
// SIG undefined FUN_1414bdf8a(void)

void FUN_1414bdf8a(longlong param_1)

{
  longlong *plVar1;
  PSRWLOCK SRWLock;
  longlong *plVar2;
  int *piVar3;
  undefined4 *puVar4;
  ushort uVar5;
  longlong lVar6;
  char *pcVar7;
  longlong lVar8;
  ushort *puVar9;
  undefined2 *puVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined2 *puVar16;
  byte bVar17;
  longlong lVar18;
  undefined1 auStack_108 [39];
  char local_e1;
  longlong local_e0;
  undefined2 *local_d8;
  undefined2 *local_d0;
  int local_c8;
  undefined2 *local_c0;
  int local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  puVar4 = (undefined4 *)(param_1 + 0x208);
  FUN_1448d5e3c(&local_70,puVar4);
  lVar6 = *(longlong *)(local_70 + 0x400);
  AcquireSRWLockShared((PSRWLOCK)(lVar6 + 0x58));
  if (*(char *)(param_1 + 0x301) == '\x01') {
    iVar12 = *(int *)(lVar6 + 0x50);
LAB_1414be203:
    *(int *)(param_1 + 0x2b0) = iVar12;
    if ((*(int *)(param_1 + 0x2c8) == 0) || (*(int *)(param_1 + 0x2c8) != *(int *)(lVar6 + 0x10))) {
      *(int *)(param_1 + 0x2c8) = *(int *)(lVar6 + 0x10);
      FUN_140dd8e34(param_1 + 0x2b8,lVar6);
      lVar8 = *(longlong *)(param_1 + 0x288);
      if (lVar8 == 0) goto LAB_1414be58d;
      bVar17 = *(byte *)(lVar8 + 0xb3) ^ 1;
      puVar9 = *(ushort **)(lVar8 + 0x80);
      if (puVar9 != (ushort *)0x0) {
        *puVar9 = *puVar9 | (ushort)(1L << (*(byte *)(lVar8 + 0x78) & 0x3f));
      }
    }
    else {
LAB_1414be58d:
      bVar17 = 0;
    }
    if ((*(int *)(param_1 + 0x2e0) == 0) || (*(int *)(param_1 + 0x2e0) != *(int *)(lVar6 + 0x28))) {
      *(int *)(param_1 + 0x2e0) = *(int *)(lVar6 + 0x28);
      FUN_145b05478(param_1 + 0x2d0,lVar6 + 0x18);
      lVar8 = *(longlong *)(param_1 + 0x288);
      if (lVar8 != 0) {
        lVar18 = *(longlong *)(param_1 + 0x2d0);
        *(int *)(param_1 + 0x2e0) = *(int *)(param_1 + 0x2e0) + 2;
        if ((longlong)*(int *)(param_1 + 0x2d8) != 0) {
          lVar15 = (longlong)*(int *)(param_1 + 0x2d8) * 0x80 + lVar18;
          local_e0 = lVar8 + 0x108;
          do {
            if (*(longlong *)(lVar18 + 0x70) != 0) {
              local_98 = 0;
              uStack_90 = 0;
              FUN_1400b2348(lVar18,&local_98,1);
              uVar13 = (int)uStack_90 - 1;
              if ((int)uStack_90 == 0) {
                uVar13 = 0;
              }
              if (0 < (int)uVar13) {
                uVar14 = 0;
                do {
                  uVar5 = *(ushort *)(local_98 + uVar14 * 2);
                  *(ushort *)(local_98 + uVar14 * 2) = (ushort)(uVar5 - 0x41 < 0x1a) * 0x20 + uVar5;
                  uVar14 = uVar14 + 1;
                } while (uVar13 != uVar14);
              }
              local_80 = local_98;
              local_78 = (int)uStack_90;
              local_74 = uStack_90._4_4_;
              local_b0 = *(undefined8 *)(lVar18 + 0x70);
              FUN_1400021e4(&local_b0,&local_a8);
              puVar10 = local_a8;
              uVar13 = (int)uStack_a0 - 1;
              if ((int)uStack_a0 == 0) {
                uVar13 = 0;
              }
              if (0 < (int)uVar13) {
                uVar14 = 0;
                do {
                  local_a8[uVar14] =
                       (ushort)((ushort)local_a8[uVar14] - 0x41 < 0x1a) * 0x20 + local_a8[uVar14];
                  uVar14 = uVar14 + 1;
                } while (uVar13 != uVar14);
              }
              local_d8 = local_a8;
              if ((int)uStack_a0 == 0) {
                local_d8 = &DAT_149dfb77a;
              }
              local_a8 = (undefined2 *)0x0;
              uStack_a0 = 0;
              local_e1 = *(char *)(lVar18 + 0x68);
              if (local_e1 == '\x01') {
                FUN_140056680(&local_c0,&DAT_14b9cdaf4);
                puVar16 = &DAT_149dfb77a;
                if (local_b8 != 0) {
                  puVar16 = local_c0;
                }
              }
              else {
                FUN_140056680(&local_d0,L"newgame");
                puVar16 = &DAT_149dfb77a;
                if (local_c8 != 0) {
                  puVar16 = local_d0;
                }
              }
              FUN_140002266(&local_98,L"profile.%s.%s",puVar16,local_d8);
              FUN_140d07d58(local_e0,&local_80,&local_98);
              if (local_98 != 0) {
                FUN_1400020a8();
              }
              puVar16 = local_c0;
              if (local_e1 == '\0') {
                puVar16 = local_d0;
              }
              if (puVar16 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              if (puVar10 != (undefined2 *)0x0) {
                FUN_1400020a8(puVar10);
              }
              if (local_a8 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              FUN_140714e1e(local_e0,&local_80,*puVar4);
              if (local_80 != 0) {
                FUN_1400020a8();
              }
            }
            lVar18 = lVar18 + 0x80;
          } while (lVar18 != lVar15);
        }
        puVar9 = *(ushort **)(lVar8 + 0x80);
        if (puVar9 != (ushort *)0x0) {
          *puVar9 = *puVar9 | (ushort)(1L << (*(byte *)(lVar8 + 0x78) & 0x3f));
        }
      }
    }
    if (*(char *)(param_1 + 0x301) == '\x01') {
      if (*(longlong *)(param_1 + 0x288) != 0) {
        *(bool *)(*(longlong *)(param_1 + 0x288) + 0xb3) = 1 < *(int *)(param_1 + 0x2d8);
      }
      *(undefined1 *)(param_1 + 0x301) = 0;
    }
    else if (bVar17 == 0) goto LAB_1414be008;
    FUN_145b0564c(param_1);
  }
  else {
    iVar12 = *(int *)(lVar6 + 0x50);
    if (*(int *)(param_1 + 0x2b0) != iVar12) goto LAB_1414be203;
  }
LAB_1414be008:
  ReleaseSRWLockShared((PSRWLOCK)(lVar6 + 0x58));
  plVar2 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  FUN_1448d5e3c(&local_70,puVar4);
  pcVar7 = *(char **)(local_70 + 0x380);
  AcquireSRWLockShared((PSRWLOCK)(pcVar7 + 0x6e0));
  if (*(int *)(param_1 + 0x2e8) == *(int *)(pcVar7 + 0x6d8)) {
    if (*(char *)(param_1 + 0x300) != '\0') goto LAB_1414be07e;
  }
  else {
    *(int *)(param_1 + 0x2e8) = *(int *)(pcVar7 + 0x6d8);
    if ((pcVar7[0x60] == '\x01') && (pcVar7[8] != '\x01')) {
      cVar11 = '\0';
    }
    else {
      cVar11 = *pcVar7;
    }
    lVar6 = *(longlong *)(param_1 + 0x288);
    if ((lVar6 == 0) || (*(char *)(lVar6 + 0xb0) == cVar11)) goto LAB_1414be07e;
    *(char *)(lVar6 + 0xb0) = cVar11;
    puVar9 = *(ushort **)(lVar6 + 0x80);
    if (puVar9 != (ushort *)0x0) {
      *puVar9 = *puVar9 | (ushort)(1L << (*(byte *)(lVar6 + 0x78) & 0x3f));
    }
  }
  if ((((*(byte *)(param_1 + 0x8c) & 0x80) != 0) && (*(longlong *)(param_1 + 0x288) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x288) + 0xb0) == '\0')) {
    FUN_148ebd45e(param_1);
  }
LAB_1414be07e:
  ReleaseSRWLockShared((PSRWLOCK)(pcVar7 + 0x6e0));
  plVar2 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x288);
  if (lVar6 != 0) {
    FUN_1448d5e3c(&local_70,puVar4);
    lVar8 = *(longlong *)(local_70 + 0x640);
    SRWLock = (PSRWLOCK)(lVar8 + 0x28);
    AcquireSRWLockShared(SRWLock);
    iVar12 = *(int *)(lVar8 + 0x20);
    if (*(int *)(param_1 + 0x2ec) != iVar12) {
      *(int *)(param_1 + 0x2ec) = iVar12;
      FUN_140714c1e(lVar6 + 0x108,*(undefined4 *)(param_1 + 0x208));
      puVar9 = *(ushort **)(lVar6 + 0x80);
      if (puVar9 != (ushort *)0x0) {
        *puVar9 = *puVar9 | (ushort)(1L << (*(byte *)(lVar6 + 0x78) & 0x3f));
      }
    }
    ReleaseSRWLockShared(SRWLock);
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_68 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar3 = (int *)((longlong)local_68 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_68 + 0x10))(local_68);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414be5e0 FUN_1414be5e0 body=63 status=ok
// SIG undefined FUN_1414be5e0(void)

void FUN_1414be5e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined1 *)(param_1 + 0x2c0) = 0;
  lVar1 = FUN_143e9d64a();
  if (lVar1 != 0) {
    uVar2 = FUN_146567c8e(lVar1);
    *(undefined4 *)(param_1 + 0x264) = uVar2;
  }
  return;
}



// FUNCTION 1414be620 FUN_1414be620 body=516 status=ok
// SIG undefined FUN_1414be620(void)

char * FUN_1414be620(longlong param_1,undefined2 *param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  undefined2 local_60 [4];
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_48 [4];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar2 = *(char *)(param_1 + 0x39);
  pcVar10 = (char *)FUN_140a51b6e(param_2);
  if (cVar2 != *pcVar10) {
    local_48[0] = *param_2;
    local_40 = 0;
    local_38 = 0;
    FUN_140fe25fc(&local_40,param_2 + 4);
    FUN_14117c91e(param_1,local_48);
    plVar5 = *(longlong **)(param_1 + 0x1c8);
    if (plVar5 == (longlong *)0x0) {
LAB_1414be6ed:
      uVar3 = *(uint *)(param_1 + 0x304);
      pcVar10 = (char *)(ulonglong)uVar3;
      if ((((uVar3 != 0) && (uVar4 = *(uint *)(param_1 + 0x300), -1 < (int)uVar4)) &&
          ((int)uVar4 < DAT_14c9647dc)) &&
         ((lVar11 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar11 != 0 &&
          (*(uint *)(lVar11 + 0x10) == uVar3)))) {
        pcVar10 = (char *)(ulonglong)*(uint *)(lVar11 + 8);
      }
    }
    else {
      iVar9 = (int)plVar5[1];
      do {
        if (iVar9 == 0) goto LAB_1414be6ed;
        LOCK();
        iVar8 = (int)plVar5[1];
        bVar12 = iVar9 == iVar8;
        if (bVar12) {
          *(int *)(plVar5 + 1) = iVar9 + 1;
          iVar8 = iVar9;
        }
        iVar9 = iVar8;
        UNLOCK();
      } while (!bVar12);
      plVar6 = *(longlong **)(param_1 + 0x1c0);
      if (plVar6 == (longlong *)0x0) {
        uVar3 = *(uint *)(param_1 + 0x304);
        pcVar10 = (char *)(ulonglong)uVar3;
        if (((uVar3 != 0) && (uVar4 = *(uint *)(param_1 + 0x300), -1 < (int)uVar4)) &&
           (((int)uVar4 < DAT_14c9647dc &&
            ((lVar11 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar11 != 0 &&
             (*(uint *)(lVar11 + 0x10) == uVar3)))))) {
          pcVar10 = (char *)(ulonglong)*(uint *)(lVar11 + 8);
        }
      }
      else {
        local_60[0] = *param_2;
        local_58 = 0;
        local_50 = 0;
        FUN_140fe25fc(&local_58,param_2 + 4);
        pcVar10 = (char *)(**(code **)(*plVar6 + 0x1c0))(plVar6,local_60);
      }
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        pcVar10 = (char *)(**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          pcVar10 = (char *)(**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  plVar5 = (longlong *)(param_2 + 4);
  if (*(int *)(param_2 + 8) != 0) {
    puVar7 = (undefined8 *)*plVar5;
    if (puVar7 == (undefined8 *)0x0) goto LAB_1414be7fb;
    if (*(code **)*puVar7 == FUN_145715146) {
      *puVar7 = &PTR_FUN_14b478da0;
      plVar6 = (longlong *)puVar7[4];
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
      }
    }
    else {
      (**(code **)*puVar7)(puVar7,0);
    }
    pcVar10 = (char *)FUN_1446efa72(plVar5,0,0,0x10);
    *(undefined4 *)(param_2 + 8) = 0;
  }
  if (*plVar5 != 0) {
    pcVar10 = (char *)FUN_1400020a8();
  }
LAB_1414be7fb:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pcVar10;
}



// FUNCTION 1414be826 FUN_1414be826 body=116 status=ok
// SIG undefined FUN_1414be826(void)

void FUN_1414be826(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1414be89a FUN_1414be89a body=482 status=ok
// SIG undefined FUN_1414be89a(void)

void FUN_1414be89a(longlong *param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar10 = 0;
    uVar13 = 1;
    iVar4 = 0;
    iVar11 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar14 = *puVar8;
    if (uVar14 == 0) {
      iVar4 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar4 = iVar3 + -1;
      }
      uVar10 = 0;
      uVar13 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar13 = uVar10;
      }
      iVar11 = 0;
      do {
        if (uVar13 == uVar10) goto LAB_1414be9d8;
        iVar11 = iVar11 + 0x20;
        uVar14 = puVar8[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar10 = 0;
      iVar11 = 0;
    }
    uVar13 = (ulonglong)(-uVar14 & uVar14);
    uVar2 = uVar13 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar4 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 < iVar3) {
    uVar14 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 0x20 + (longlong)iVar4 * 0x38) != 0) {
        FUN_1400020a8();
        iVar3 = (int)param_1[5];
      }
      uVar14 = uVar14 & ~(uint)uVar13;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar4 = (int)uVar10;
      lVar12 = (longlong)iVar4;
      uVar5 = puVar8[lVar12] & uVar14;
      if (uVar5 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar6 <= iVar4) break;
        lVar9 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar5 = puVar8[lVar12 + lVar9 + 1];
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar7 - lVar12 == lVar9) goto LAB_1414be9d8;
        }
        uVar10 = (ulonglong)(iVar4 + (int)lVar9 + 1);
        uVar14 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar5 & uVar5);
      uVar2 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar4 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar3);
  }
LAB_1414be9d8:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(puVar1,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1414bea7c FUN_1414bea7c body=446 status=ok
// SIG undefined FUN_1414bea7c(void)

void FUN_1414bea7c(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    local_50._4_4_ = 0;
    uVar11 = 0xffffffff;
    iVar14 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    uVar13 = local_60 >> 0x20;
    uVar11 = (uint)local_50;
    iVar14 = (int)local_60;
  }
  plVar4 = local_58;
  iVar5 = (int)local_58[3];
  iVar7 = local_50._4_4_;
  iVar10 = local_48;
  if (local_50._4_4_ < iVar5) {
    do {
      if (*(longlong *)(*param_1 + 0x20 + (longlong)iVar7 * 0x40) != 0) {
        FUN_1400020a8();
        iVar5 = (int)plVar4[3];
      }
      uVar11 = uVar11 & ~(uint)uVar13;
      plVar8 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar8 = plVar4;
      }
      lVar12 = (longlong)iVar14;
      uVar6 = *(uint *)((longlong)plVar8 + lVar12 * 4) & uVar11;
      if (uVar6 == 0) {
        iVar7 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar7 = iVar5 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar3 = iVar7;
        if (iVar7 < iVar14) {
          iVar3 = iVar14;
        }
        if (iVar7 <= iVar14) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar6 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar12 * 4 + 4);
          if (uVar6 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar3 - lVar12 == lVar9) goto LAB_1414beb98;
        }
        iVar14 = iVar14 + (int)lVar9 + 1;
        uVar11 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar7 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar5);
  }
LAB_1414beb98:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414bec3c FUN_1414bec3c body=286 status=ok
// SIG undefined FUN_1414bec3c(void)

undefined8 FUN_1414bec3c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1414bed54;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1414bed54;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1414bed54:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1414bed01;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_1414bed01;
    }
  }
  uVar6 = 0;
LAB_1414bed01:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414bed5c FUN_1414bed5c body=368 status=ok
// SIG undefined FUN_1414bed5c(void)

void FUN_1414bed5c(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  
  lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x48);
  if (lVar5 != 0) {
    lVar5 = lVar5 * 0x28;
    plVar8 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x40) + 8);
    do {
      plVar1 = plVar8 + -1;
      plVar6 = (longlong *)FUN_14479d2ce(plVar1);
      if (plVar6 == (longlong *)0x0) {
        if (*plVar8 != 0) {
          plVar6 = (longlong *)FUN_140007850();
          cVar4 = (*(code *)PTR_FUN_14c758760)();
          if ((plVar6 == (longlong *)0x0) || (cVar4 == '\0')) {
            FUN_14485c47a(plVar1,plVar6);
            if (plVar6 == (longlong *)0x0) goto LAB_1414bedce;
          }
          else {
            uVar2 = *(uint *)((longlong)plVar6 + 0xc);
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar7 = 0;
            }
            if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
              FUN_14485c47a(plVar1,plVar6);
            }
          }
          if ((*(uint *)(plVar6 + 1) >> 0x1e & 1) == 0) goto LAB_1414bedaa;
        }
      }
      else {
LAB_1414bedaa:
        lVar7 = FUN_144a797b2();
        if ((((*(int *)(lVar7 + 0x38) <= *(int *)(plVar6[2] + 0x38)) &&
             (*(longlong *)(*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
              == lVar7 + 0x30)) && (lVar7 = FUN_145a557f0(), lVar7 != 0)) &&
           ((*(int *)(lVar7 + 0x38) <= (int)plVar6[7] &&
            (*(longlong *)(plVar6[6] + (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)))) {
          lVar7 = plVar6[0x22];
          if (lVar7 == 0) {
            (**(code **)(*plVar6 + 1000))(plVar6);
            lVar7 = plVar6[0x22];
            if (lVar7 == 0) goto LAB_1414bedce;
          }
          uVar3 = *(undefined8 *)(lVar7 + 0x28);
          *(longlong *)(lVar7 + 0x28) = param_1;
          FUN_14876f694(lVar7,param_1,0);
          *(undefined8 *)(lVar7 + 0x28) = uVar3;
        }
      }
LAB_1414bedce:
      plVar8 = plVar8 + 5;
      lVar5 = lVar5 + -0x28;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 1414beecc FUN_1414beecc body=1362 status=ok
// SIG undefined FUN_1414beecc(void)

void FUN_1414beecc(longlong *param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  wchar_t *local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  code *local_60;
  undefined1 local_58 [8];
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((~*(uint *)(param_1 + 0x20) & 0x11) == 0) {
    FUN_14082bf0e();
    lVar5 = (longlong)*(int *)(param_1[0x10] + 0x48);
    if (lVar5 != 0) {
      plVar9 = (longlong *)(*(longlong *)(param_1[0x10] + 0x40) + 8);
      lVar5 = lVar5 * 0x28;
      do {
        if (((((*(int *)((longlong)plVar9 + -4) == 0) ||
              (uVar1 = *(uint *)(plVar9 + -1), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) ||
            ((plVar8 = (longlong *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
             plVar8 == (longlong *)0x0 || ((int)plVar8[2] != *(int *)((longlong)plVar9 + -4))))) ||
           (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 ||
            (plVar8 = (longlong *)*plVar8, plVar8 == (longlong *)0x0)))) {
          if (*plVar9 != 0) {
            plVar8 = (longlong *)FUN_140007850();
            cVar3 = (*(code *)PTR_FUN_14c758760)();
            if ((plVar8 == (longlong *)0x0) || (cVar3 == '\0')) {
              if (plVar8 != (longlong *)0x0) {
                uVar1 = *(uint *)((longlong)plVar8 + 0xc);
                *(uint *)(plVar9 + -1) = uVar1;
                if ((int)uVar1 < DAT_14c9647dc) {
                  lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
                }
                else {
                  lVar6 = 0;
                }
                iVar4 = *(int *)(lVar6 + 0x10);
                if (*(int *)(lVar6 + 0x10) == 0) {
                  LOCK();
                  iVar4 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar10 = DAT_14c964868 + 1;
                  bVar11 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar4;
                  if (bVar11) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar10);
                  }
                  LOCK();
                  iVar4 = *(int *)(lVar6 + 0x10);
                  bVar11 = iVar4 == 0;
                  if (bVar11) {
                    *(int *)(lVar6 + 0x10) = iVar10;
                    iVar4 = 0;
                  }
                  UNLOCK();
                  if (bVar11) {
                    iVar4 = iVar10;
                  }
                }
                goto LAB_1414bf134;
              }
              plVar9[-1] = 0;
            }
            else {
              uVar1 = *(uint *)((longlong)plVar8 + 0xc);
              if ((int)uVar1 < DAT_14c9647dc) {
                lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
              }
              else {
                lVar6 = 0;
              }
              if ((*(uint *)(lVar6 + 8) & 0x8400000) == 0) {
                *(uint *)(plVar9 + -1) = uVar1;
                if ((int)uVar1 < DAT_14c9647dc) {
                  lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
                }
                else {
                  lVar6 = 0;
                }
                iVar4 = *(int *)(lVar6 + 0x10);
                if (*(int *)(lVar6 + 0x10) == 0) {
                  LOCK();
                  iVar4 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar10 = DAT_14c964868 + 1;
                  bVar11 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar4;
                  if (bVar11) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar10);
                  }
                  LOCK();
                  iVar4 = *(int *)(lVar6 + 0x10);
                  bVar11 = iVar4 == 0;
                  if (bVar11) {
                    *(int *)(lVar6 + 0x10) = iVar10;
                    iVar4 = 0;
                  }
                  UNLOCK();
                  if (bVar11) {
                    iVar4 = iVar10;
                  }
                }
LAB_1414bf134:
                *(int *)((longlong)plVar9 + -4) = iVar4;
              }
              if ((*(uint *)(plVar8 + 1) >> 0x1e & 1) == 0) goto LAB_1414bef99;
            }
          }
        }
        else {
LAB_1414bef99:
          if (DAT_14c949118 == 0) {
            local_60 = FUN_140631fbe;
            lVar6 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
            DAT_14c949118 = lVar6;
            FUN_1446f470e(local_58,L"Class",1);
            local_80 = &local_60;
            local_88 = &LAB_146891e90;
            local_90 = (code *)&LAB_146273097;
            local_a0 = L"Engine";
            local_98 = (wchar_t *)CONCAT44(local_98._4_4_,199);
            local_a8 = 0x20;
            local_b0 = 0x10000000;
            local_b8._0_4_ = 8;
            FUN_14574b4b2(lVar6);
            DAT_14c949118 = lVar6;
            if (DAT_14c951858 == 0) {
              local_50 = FUN_1449e2820;
              local_70 = FUN_14081d0ea;
              local_78 = FUN_14081d0ea;
              local_80 = &local_50;
              local_88 = &LAB_1468c5283;
              local_90 = FUN_142809da0;
              local_98 = L"Engine";
              local_a0 = (wchar_t *)0x400000000;
              local_a8 = CONCAT44(local_a8._4_4_,0x10000000);
              local_b0 = 8;
              local_b8._0_4_ = 0x50;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
            }
            lVar2 = DAT_14c951858;
            lVar6 = DAT_14c949118;
            uVar7 = FUN_1449e2fb2();
            local_b8 = L"Class";
            FUN_14574b446(uVar7,lVar6,lVar2,L"/Script/CoreUObject");
          }
          if ((((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(plVar8[2] + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(plVar8[2] + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) ==
                DAT_14c949118 + 0x30)) && (lVar6 = FUN_145a557f0(), lVar6 != 0)) &&
             ((*(int *)(lVar6 + 0x38) <= (int)plVar8[7] &&
              (*(longlong *)(plVar8[6] + (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)))) {
            lVar6 = plVar8[0x22];
            if (lVar6 == 0) {
              (**(code **)(*plVar8 + 1000))(plVar8);
              lVar6 = plVar8[0x22];
              if (lVar6 == 0) goto LAB_1414bf144;
            }
            uVar7 = *(undefined8 *)(lVar6 + 0x28);
            *(longlong **)(lVar6 + 0x28) = param_1;
            FUN_14876f4a4(lVar6,param_1);
            *(undefined8 *)(lVar6 + 0x28) = uVar7;
          }
        }
LAB_1414bf144:
        plVar9 = plVar9 + 5;
        lVar5 = lVar5 + -0x28;
      } while (lVar5 != 0);
    }
    uVar1 = *(uint *)(param_1 + 0x20);
    if ((uVar1 & 0x20) == 0) {
      if (param_2 == '\0') {
        if ((param_1[0x10] != 0) &&
           ((cVar3 = *(char *)(param_1[0x10] + 0x5c1), cVar3 == '\x02' || (cVar3 == '\x01')))) {
          FUN_14163f334(param_1,0,1);
        }
      }
      else if ((uVar1 & 1) != 0) {
        if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
          lVar5 = param_1[4];
        }
        else {
          lVar5 = 0;
        }
        if (*(char *)(lVar5 + 0x178) == '\x03') {
          if ((uVar1 >> 0x1e & 1) == 0) {
            (**(code **)(*param_1 + 0x2e8))(param_1,1);
          }
          else {
            *(uint *)(param_1 + 0x20) = uVar1 | 0x60;
          }
        }
      }
    }
    *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xef;
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414bf41f FUN_1414bf41f body=47 status=ok
// SIG undefined FUN_1414bf41f(void)

void FUN_1414bf41f(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x50);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1414bf44e FUN_1414bf44e body=1180 status=ok
// SIG undefined FUN_1414bf44e(void)

void FUN_1414bf44e(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  undefined1 auStack_198 [44];
  int local_16c;
  longlong *local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong *local_148;
  longlong local_140;
  longlong local_138;
  ulonglong local_130;
  longlong local_128;
  undefined8 local_120;
  int local_118;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined1 local_98 [64];
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_140850e3c();
  if (*(char *)(param_2 + 0x10) == '\0') {
    iVar15 = *(int *)(param_1 + 0x110);
    if ((longlong)iVar15 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x108);
      lVar9 = 0;
      do {
        if ((*(longlong *)(lVar3 + lVar9) == 0) &&
           (lVar14 = *(longlong *)(lVar3 + 8 + lVar9), lVar14 != 0)) {
          *(longlong *)(lVar3 + lVar9) = lVar14;
        }
        lVar9 = lVar9 + 0x188;
      } while ((longlong)iVar15 * 0x188 - lVar9 != 0);
    }
    lVar3 = param_1 + 0x1140;
    local_130 = 0x100000000;
    local_120 = 0xffffffff;
    local_118 = 0;
    local_128 = lVar3;
    if (*(int *)(param_1 + 0x1158) == 0) {
      uVar10 = 1;
      local_120._0_4_ = 0xffffffff;
      iVar15 = 0;
      local_120._4_4_ = 0;
      local_130._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_130);
      uVar10 = local_130 >> 0x20;
      iVar15 = *(int *)(param_1 + 0x1158);
    }
    lVar9 = local_128;
    iVar7 = (int)local_130;
    uVar16 = (uint)local_120;
    iVar6 = local_120._4_4_;
    iVar11 = local_118;
    if (local_120._4_4_ != iVar15 || local_128 != lVar3) {
      do {
        lVar14 = *(longlong *)(param_1 + 0x1130) + (longlong)iVar6 * 0xe0;
        if (0 < *(int *)(lVar14 + 0xc0)) {
          local_168 = (longlong *)((longlong)iVar6 * 0xe0 + *(longlong *)(param_1 + 0x1130) + 0xb8);
          local_148 = (longlong *)(lVar14 + 200);
          local_16c = iVar15;
          FUN_148f0046c();
          if (0 < *(int *)(lVar14 + 0xc0)) {
            local_150 = 0x98;
            local_158 = 0;
            local_160 = 0;
            do {
              FUN_148f004da(&local_130,*local_168 + local_158);
              lVar12 = *local_148 + local_150;
              local_140 = lVar12 + -0x88;
              local_138 = *local_148 + local_150;
              *(ulonglong *)(lVar12 + -0x98) = local_130;
              *(undefined1 *)(lVar12 + -0x90) = (undefined1)local_128;
              FUN_140f85fd4(local_140,&local_120);
              *(undefined4 *)(local_140 + 0x50) = local_d0;
              *(undefined4 *)(local_140 + 0x54) = uStack_cc;
              *(undefined4 *)(local_140 + 0x58) = uStack_c8;
              *(undefined4 *)(local_140 + 0x5c) = uStack_c4;
              *(undefined4 *)(local_140 + 0x60) = local_c0;
              *(undefined4 *)(local_140 + 100) = uStack_bc;
              *(undefined4 *)(local_140 + 0x68) = uStack_b8;
              *(undefined4 *)(local_140 + 0x6c) = uStack_b4;
              *(undefined4 *)(local_140 + 0x70) = local_b0;
              *(undefined4 *)(local_140 + 0x74) = uStack_ac;
              *(undefined4 *)(local_140 + 0x78) = uStack_a8;
              *(undefined4 *)(local_140 + 0x7c) = uStack_a4;
              *(undefined8 *)(local_140 + 0x80) = local_a0;
              FUN_148f0255e(local_138,local_98);
              local_50 = 0;
              if (local_58 != 0) {
                FUN_1400020a8();
              }
              FUN_140bb61f0(local_98);
              local_160 = local_160 + 1;
              local_150 = local_150 + 0xe8;
              local_158 = local_158 + 0x278;
            } while (local_160 < *(int *)(lVar14 + 0xc0));
          }
          FUN_140bb617d(*(undefined8 *)(lVar14 + 0xb8));
          *(undefined4 *)(lVar14 + 0xc0) = 0;
          iVar15 = local_16c;
          if (*(int *)(lVar14 + 0xc4) != 0) {
            FUN_148f03f5e(local_168);
            iVar15 = local_16c;
          }
        }
        if ((*(int *)(lVar14 + 0x90) == 0) &&
           ((*(longlong *)(lVar14 + 0x98) != 0 ||
            ((*(longlong *)(lVar14 + 0xa0) != 0 && (*(int *)(lVar14 + 0xa8) - 1U < 0xfffffffe))))))
        {
          local_16c = iVar15;
          puVar5 = (undefined8 *)FUN_145b06e64(lVar14 + 0x88);
          *puVar5 = *(undefined8 *)(lVar14 + 0x98);
          lVar12 = *(longlong *)(lVar14 + 0xa0);
          if ((puVar5[1] != lVar12) || (*(int *)(puVar5 + 2) != *(int *)(lVar14 + 0xa8))) {
            puVar5[1] = lVar12;
            *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(lVar14 + 0xa8);
            puVar5[3] = 0;
            lVar12 = *(longlong *)(lVar14 + 0xa0);
          }
          *(undefined8 *)(lVar14 + 0x98) = 0;
          iVar15 = local_16c;
          if ((lVar12 != 0) || (*(int *)(lVar14 + 0xa8) != -0xfffff30)) {
            *(undefined8 *)(lVar14 + 0xa0) = 0;
            *(undefined4 *)(lVar14 + 0xa8) = 0xf00000d0;
            *(undefined8 *)(lVar14 + 0xb0) = 0;
          }
        }
        uVar16 = uVar16 & ~(uint)uVar10;
        lVar14 = *(longlong *)(lVar9 + 0x10);
        if (*(longlong *)(lVar9 + 0x10) == 0) {
          lVar14 = lVar9;
        }
        iVar2 = *(int *)(lVar9 + 0x18);
        lVar12 = (longlong)iVar7;
        uVar8 = *(uint *)(lVar14 + lVar12 * 4) & uVar16;
        if (uVar8 == 0) {
          iVar6 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar6 = iVar2 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar11 = iVar11 + 0x20;
          iVar4 = iVar6;
          if (iVar6 < iVar7) {
            iVar4 = iVar7;
          }
          if (iVar7 < iVar6) {
            lVar13 = 0;
            do {
              uVar8 = *(uint *)(lVar14 + lVar12 * 4 + 4 + lVar13 * 4);
              if (uVar8 != 0) {
                iVar7 = iVar7 + (int)lVar13 + 1;
                uVar16 = 0xffffffff;
                goto LAB_1414bf5d7;
              }
              iVar11 = iVar11 + 0x20;
              lVar13 = lVar13 + 1;
            } while (iVar4 - lVar12 != lVar13);
            uVar16 = 0xffffffff;
            iVar7 = iVar4;
          }
          iVar7 = iVar7 + 1;
          iVar6 = iVar2;
        }
        else {
LAB_1414bf5d7:
          uVar10 = (ulonglong)(-uVar8 & uVar8);
          uVar1 = uVar10 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar6 = (iVar11 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if (iVar2 <= iVar6) {
            iVar6 = iVar2;
          }
        }
      } while (iVar6 != iVar15 || lVar9 != lVar3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414bf8ec FUN_1414bf8ec body=364 status=ok
// SIG undefined FUN_1414bf8ec(void)

void FUN_1414bf8ec(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  FUN_14592bf29(*(undefined8 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 0x130));
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1400020a8();
  }
  FUN_14898ada7(*(undefined8 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x120));
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  FUN_14588793c(param_1 + 200);
  FUN_144760e21(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8));
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0xa8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_14588986a(param_1 + 0x50);
  plVar3 = (longlong *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x48) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1414bfa13;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_1414bfa13:
  FUN_141069f23(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001414bfa45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1414bfa58 FUN_1414bfa58 body=1885 status=ok
// SIG undefined FUN_1414bfa58(void)

void FUN_1414bfa58(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  undefined8 local_40;
  undefined1 local_31;
  undefined7 uStack_30;
  undefined1 uStack_29;
  int local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_20 = 0;
  uStack_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_20 = (undefined4)uVar2;
      uStack_1c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_20);
    }
  }
  local_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_14067a048;
      local_60 = 0;
      local_68 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_24 = (int)uVar2;
      uStack_20 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_24);
    }
  }
  iVar4 = local_24;
  uStack_30 = 0;
  uStack_29 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1409e12a0;
      local_60 = 0;
      local_68 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_30);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_30 = (undefined7)uVar2;
      uStack_29 = (undefined1)((ulonglong)uVar2 >> 0x38);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_30);
    }
  }
  local_31 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_140a4831c;
      local_68 = 0x1000000008001;
      local_60 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_31);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_31);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_31 = (undefined1)uVar2;
      uStack_30 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_31);
    }
  }
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_40);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_40);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_40 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_40);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_40;
  FUN_1414c01b6(CONCAT44(uStack_1c,uStack_20),iVar4 != 0,CONCAT17(uStack_29,uStack_30),local_31);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414c01b6 FUN_1414c01b6 body=539 status=ok
// SIG undefined FUN_1414c01b6(void)

void FUN_1414c01b6(longlong param_1,undefined1 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStack_88 [47];
  undefined1 local_59;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_59 = param_2;
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x268);
    local_58 = param_3;
    local_50 = param_4;
    if (iVar2 == 0) {
      uVar14 = 0;
      uVar16 = 1;
      iVar6 = 0;
      iVar13 = 0;
    }
    else {
      puVar7 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x250);
      }
      uVar12 = *puVar7;
      if (uVar12 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        uVar14 = 0;
        uVar16 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar16 = uVar14;
        }
        iVar13 = 0;
        do {
          if (uVar16 == uVar14) goto LAB_1414c0277;
          iVar13 = iVar13 + 0x20;
          uVar12 = puVar7[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar12 == 0);
      }
      else {
        uVar14 = 0;
        iVar13 = 0;
      }
      uVar16 = (ulonglong)(-uVar12 & uVar12);
      uVar1 = uVar16 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar6 = (iVar13 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar6) {
        iVar6 = iVar2;
      }
    }
    if (iVar6 != iVar2) {
      uVar12 = 0xffffffff;
      do {
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x240) + (longlong)iVar6 * 0x10);
        if (plVar4 != (longlong *)0x0) {
          lVar8 = FUN_1413d0a48();
          if ((*(int *)(lVar8 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
             (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
              == lVar8 + 0x30)) {
            cVar5 = FUN_143893b9e(plVar4,&local_58);
            if (cVar5 != '\0') {
              (**(code **)(*plVar4 + 0x650))(plVar4,local_59,param_5);
            }
          }
        }
        uVar12 = uVar12 & ~(uint)uVar16;
        puVar7 = *(uint **)(param_1 + 0x260);
        if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
          puVar7 = (uint *)(param_1 + 0x250);
        }
        iVar3 = *(int *)(param_1 + 0x268);
        iVar6 = (int)uVar14;
        lVar8 = (longlong)iVar6;
        uVar11 = puVar7[lVar8] & uVar12;
        if (uVar11 == 0) {
          iVar9 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar9 = iVar3 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar13 = iVar13 + 0x20;
          iVar10 = iVar9;
          if (iVar9 < iVar6) {
            iVar10 = iVar6;
          }
          if (iVar6 < iVar9) {
            lVar15 = 0;
            do {
              uVar11 = puVar7[lVar8 + lVar15 + 1];
              if (uVar11 != 0) {
                uVar14 = (ulonglong)(iVar6 + (int)lVar15 + 1);
                uVar12 = 0xffffffff;
                goto LAB_1414c037a;
              }
              iVar13 = iVar13 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar10 - lVar8 != lVar15);
            uVar12 = 0xffffffff;
            iVar6 = iVar10;
          }
          uVar14 = (ulonglong)(iVar6 + 1);
          iVar6 = iVar3;
        }
        else {
LAB_1414c037a:
          uVar16 = (ulonglong)(-uVar11 & uVar11);
          uVar1 = uVar16 * 2 + 1;
          lVar8 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          iVar6 = (iVar13 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar6) {
            iVar6 = iVar3;
          }
        }
      } while (iVar6 != iVar2);
    }
  }
LAB_1414c0277:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414c03d2 FUN_1414c03d2 body=365 status=ok
// SIG undefined FUN_1414c03d2(void)

void FUN_1414c03d2(longlong *param_1,undefined8 param_2)

{
  size_t sVar1;
  uint uVar2;
  wchar_t *_Str;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  undefined8 local_e8;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      goto LAB_1414c04cd;
    }
  }
  local_60 = (undefined1 *)0x0;
  local_e8 = param_2;
  sVar1 = wcslen(_Str);
  local_50 = FUN_14475aa65(0,_Str,sVar1 & 0xffffffff);
  uVar2 = local_50 + 1;
  local_58 = (undefined1 *)0x0;
  if (0x80 < uVar2) {
    FUN_1446efa72(&local_60,0,uVar2,1);
    local_58 = local_60;
  }
  if (local_58 == (undefined1 *)0x0) {
    local_58 = local_e0;
  }
  FUN_14475a98a(local_58,uVar2,_Str,(int)sVar1 + 1);
  param_2 = local_e8;
LAB_1414c04cd:
  local_f8 = param_1 + 5;
  FUN_1457db122(param_2,local_58,param_1 + 2,param_1 + 4);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414c0540 FUN_1414c0540 body=63 status=ok
// SIG undefined FUN_1414c0540(void)

void FUN_1414c0540(longlong *param_1)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = (int)param_1[1] - 1;
  if ((int)param_1[1] == 0) {
    uVar3 = 0;
  }
  if (0 < (int)uVar3) {
    lVar2 = *param_1;
    uVar4 = 0;
    do {
      uVar1 = *(ushort *)(lVar2 + uVar4 * 2);
      *(ushort *)(lVar2 + uVar4 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
      uVar4 = uVar4 + 1;
    } while (uVar3 != uVar4);
  }
  return;
}



// FUNCTION 1414c0580 FUN_1414c0580 body=73 status=ok
// SIG undefined FUN_1414c0580(void)

void FUN_1414c0580(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = param_1[1];
  cVar2 = FUN_14497f9ca(param_2 + 0x70,*(undefined8 *)*param_1);
  if (cVar2 != '\0') {
    return;
  }
  FUN_1410a406a(uVar1,param_2,param_1[2],*(undefined1 *)param_1[3]);
  return;
}



// FUNCTION 1414c05ca FUN_1414c05ca body=66 status=ok
// SIG undefined FUN_1414c05ca(void)

void FUN_1414c05ca(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f14760;
  FUN_145be1bc1(param_1[0x3f],*(undefined4 *)(param_1 + 0x40));
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 1414c060c FUN_1414c060c body=66 status=ok
// SIG undefined FUN_1414c060c(void)

void FUN_1414c060c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f1bc50;
  FUN_145af29ff(param_1[0x3f],*(undefined4 *)(param_1 + 0x40));
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 1414c064e FUN_1414c064e body=110 status=ok
// SIG undefined FUN_1414c064e(void)

void FUN_1414c064e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b374370;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  if (param_1[0x7d] != 0) {
    FUN_1400020a8();
  }
  FUN_14601fc64(param_1 + 0x75);
  FUN_144760e21(param_1[0x72],*(undefined4 *)(param_1 + 0x73));
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  FUN_140bd4d6a(param_1);
  return;
}



// FUNCTION 1414c06bc FUN_1414c06bc body=602 status=ok
// SIG undefined FUN_1414c06bc(void)

void FUN_1414c06bc(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar7 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar7 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar4 = local_70._4_4_;
      local_70 = uVar7;
      do {
        puVar3 = *(undefined8 **)(*local_88 + (longlong)iVar4 * 0x10);
        if (puVar3 == (undefined8 *)0x0) {
          uVar11 = 0;
          uVar7 = 0;
        }
        else {
          uVar7 = *puVar3;
          uVar11 = puVar3[2];
        }
        lVar5 = *local_88 + (longlong)iVar4 * 0x10;
        uVar2 = (uint)((ulonglong)uVar11 >> 0x10);
        uVar12 = (uint)uVar11 & 0xffff;
        uVar8 = (uint)((ulonglong)uVar7 >> 0x10);
        uVar13 = (uint)uVar7 & 0xffff;
        uVar8 = ((uint)uVar7 << 0x10 | uVar13) + (int)((ulonglong)uVar7 >> 0x20) +
                (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar13 >> 4);
        uVar10 = (longlong)
                 (int)((uint)uVar11 * 0x10000 + (int)((ulonglong)uVar11 >> 0x20) + uVar12 +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar12 >> 4) + uVar8 * 0x40 +
                       (uVar8 >> 2) + 0x9e3779b9 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar5 + 0xc) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar5 + 8) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar4 = local_70._4_4_;
        uVar7 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar7;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414c0918 FUN_1414c0918 body=1497 status=ok
// SIG undefined FUN_1414c0918(void)

bool FUN_1414c0918(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  longlong *plStack_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined4 local_180;
  longlong local_178;
  longlong *plStack_170;
  longlong local_168;
  longlong *plStack_160;
  longlong local_158;
  longlong *plStack_150;
  code *local_148;
  undefined8 local_138;
  undefined **local_128;
  undefined8 *local_120;
  longlong *local_118;
  code *local_108 [2];
  undefined8 local_f8;
  undefined **local_e8;
  uint *local_e0;
  longlong *local_d8;
  code *local_c8 [2];
  undefined8 local_b8;
  undefined **local_a8;
  longlong *local_a0;
  uint local_88 [6];
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if ((plVar6 == (longlong *)0x0) || (lVar7 = plVar6[7], lVar7 == 0)) {
LAB_1414c0ed1:
    bVar9 = false;
  }
  else {
    bVar9 = false;
    do {
      if (plVar6[5] != 0) {
        lVar5 = *(longlong *)(plVar6[5] + 0x30);
        if ((((lVar5 == 0) || (*(longlong *)(lVar5 + 0x360) == 0)) ||
            (lVar5 = FUN_1400f6f32(), lVar5 == 0)) ||
           ((*(longlong *)(lVar5 + 0x68) == 0 ||
            (lVar5 = FUN_140d1732e(*(longlong *)(lVar5 + 0x68),param_2 + 0x18), lVar5 == 0))))
        goto LAB_1414c0ed1;
        bVar9 = *(int *)(lVar7 + 0x48) != 0;
        if (bVar9) {
          FUN_14009b010(param_5,3,0);
          plVar6 = (longlong *)FUN_145b08b9a(lVar7);
          local_158 = 0;
          plStack_150 = (longlong *)0x0;
          FUN_14009b010(&local_158,2,0);
          if ((longlong)*(int *)(lVar7 + 0x48) != 0) {
            plVar8 = *(longlong **)(lVar7 + 0x40);
            lVar7 = (longlong)*(int *)(lVar7 + 0x48) << 3;
            do {
              lVar5 = *plVar8;
              local_88[0] = local_88[0] & 0xffffff00;
              local_88[1] = 0;
              local_88[2] = 0;
              local_88[3] = 0;
              FUN_144976b9c(local_88,DAT_14cb858b8);
              cVar4 = FUN_1403218c0(lVar5 + 0x30,local_88);
              if (cVar4 == '\0') {
                lVar5 = *plVar8;
                local_88[0] = local_88[0] & 0xffffff00;
                local_88[1] = 0;
                local_88[2] = 0;
                local_88[3] = 0;
                FUN_144976b9c(local_88,DAT_14cb858c0);
                cVar4 = FUN_1403218c0(lVar5 + 0x30,local_88);
                if (cVar4 == '\0') {
                  local_168 = 0;
                  plStack_160 = (longlong *)0x0;
                  FUN_14009b010(&local_168,3,0);
                  local_178 = 0;
                  plStack_170 = (longlong *)0x0;
                  FUN_14009b010(&local_178,1);
                  local_180 = *(undefined4 *)(*plVar8 + 0x20);
                  local_188 = *(undefined8 *)(*plVar8 + 0x18);
                  FUN_1448075d0(local_88,&local_188);
                  if (local_178 != 0) {
                    FUN_1402afb64(local_178,local_88);
                  }
                  if (local_70 != 0) {
                    FUN_1400020a8();
                  }
                  if (local_168 != 0) {
                    local_1d8 = 0;
                    FUN_140516f2a(local_168,&DAT_14cb85868,&local_178,0);
                  }
                  if (plVar6 != (longlong *)0x0) {
                    local_b8 = 0;
                    local_a8 = &PTR_LAB_14b4170d0;
                    local_c8[0] = FUN_143ddfc50;
                    local_190 = *(undefined4 *)(*plVar8 + 0x20);
                    local_198 = *(undefined8 *)(*plVar8 + 0x18);
                    local_a0 = &local_168;
                    (**(code **)(*plVar6 + 0x58))(plVar6,&local_198,local_c8);
                    local_88[0] = 0;
                    local_88[1] = 0;
                    local_88[2] = 0;
                    local_88[3] = 0;
                    FUN_14009b010(local_88,2,0);
                    local_f8 = 0;
                    local_e8 = &PTR_LAB_14b4170f0;
                    local_108[0] = FUN_143ddfe98;
                    local_1a0 = *(undefined4 *)(*plVar8 + 0x20);
                    local_1a8 = *(undefined8 *)(*plVar8 + 0x18);
                    local_e0 = local_88;
                    local_d8 = plVar8;
                    (**(code **)(*plVar6 + 0x60))(plVar6,&local_1a8,local_108);
                    if (local_168 != 0) {
                      local_1d8 = 0;
                      FUN_140516f2a(local_168,&DAT_14cb85870,local_88,0);
                    }
                    local_1b8 = 0;
                    plStack_1b0 = (longlong *)0x0;
                    FUN_14009b010(&local_1b8,2,0);
                    local_138 = 0;
                    local_128 = &PTR_LAB_14b417110;
                    local_148 = FUN_143de0290;
                    local_1c0 = *(undefined4 *)(*plVar8 + 0x20);
                    local_1c8 = *(undefined8 *)(*plVar8 + 0x18);
                    local_120 = &local_1b8;
                    local_118 = plVar8;
                    (**(code **)(*plVar6 + 0x68))(plVar6,&local_1c8);
                    if (local_168 != 0) {
                      local_1d8 = 0;
                      FUN_140516f2a(local_168,&DAT_14cb85878,&local_1b8,0);
                    }
                    plVar3 = plStack_1b0;
                    if (plStack_1b0 != (longlong *)0x0) {
                      LOCK();
                      plVar1 = plStack_1b0 + 1;
                      *(int *)plVar1 = (int)*plVar1 + -1;
                      UNLOCK();
                      if ((int)*plVar1 == 0) {
                        (**(code **)*plStack_1b0)(plStack_1b0);
                        LOCK();
                        piVar2 = (int *)((longlong)plVar3 + 0xc);
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (*piVar2 == 0) {
                          (**(code **)(*plVar3 + 0x10))(plVar3);
                        }
                      }
                    }
                    plVar3 = (longlong *)CONCAT44(local_88[3],local_88[2]);
                    if (plVar3 != (longlong *)0x0) {
                      LOCK();
                      plVar1 = plVar3 + 1;
                      *(int *)plVar1 = (int)*plVar1 + -1;
                      UNLOCK();
                      if ((int)*plVar1 == 0) {
                        (**(code **)*plVar3)(plVar3);
                        LOCK();
                        piVar2 = (int *)((longlong)plVar3 + 0xc);
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (*piVar2 == 0) {
                          (**(code **)(*plVar3 + 0x10))(plVar3);
                        }
                      }
                    }
                  }
                  if (local_158 != 0) {
                    local_1d8 = 0;
                    FUN_140141db6(local_158,&local_168);
                  }
                  plVar3 = plStack_170;
                  if (plStack_170 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = plStack_170 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)*plStack_170)(plStack_170);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar3 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        (**(code **)(*plVar3 + 0x10))(plVar3);
                      }
                    }
                  }
                  plVar3 = plStack_160;
                  if (plStack_160 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = plStack_160 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)*plStack_160)(plStack_160);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar3 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        (**(code **)(*plVar3 + 0x10))(plVar3);
                      }
                    }
                  }
                }
              }
              plVar8 = plVar8 + 1;
              lVar7 = lVar7 + -8;
            } while (lVar7 != 0);
          }
          local_88[0] = 0;
          local_88[1] = 0;
          local_88[2] = 0;
          local_88[3] = 0;
          local_88[4] = 0;
          local_70 = 0;
          uStack_68 = 0;
          FUN_1446ddda2(local_88,&DAT_14b417908,0);
          if (*param_5 != 0) {
            local_1d8 = 0;
            FUN_14014191c(*param_5,local_88,&local_158,0);
          }
          if (local_70 != 0) {
            FUN_1400020a8();
          }
          plVar6 = plStack_150;
          if (plStack_150 != (longlong *)0x0) {
            LOCK();
            plVar8 = plStack_150 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)*plStack_150)(plStack_150);
              LOCK();
              piVar2 = (int *)((longlong)plVar6 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
          }
        }
        break;
      }
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x2f0))(plVar6);
    } while (plVar6 != (longlong *)0x0);
  }
  if ((local_60 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar9;
}



// FUNCTION 1414c0ef2 FUN_1414c0ef2 body=421 status=ok
// SIG undefined FUN_1414c0ef2(void)

undefined4 * FUN_1414c0ef2(undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 == 0) {
    *param_2 = 0xffff;
  }
  else {
    FUN_1409845a0(param_1,&local_3c);
    uVar3 = local_3c;
    if (((short)local_3c < 0) &&
       (FUN_140ceec26(param_1,&local_40,*(undefined4 *)(param_3 + 0xe0)), uVar3 = local_40,
       (short)local_40 < 0)) {
      puVar5 = (uint *)FUN_14001cc68(0x10,0x10);
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[2] = 0xffffffff;
      uVar4 = *(uint *)(param_3 + 0xc);
      *puVar5 = uVar4;
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      uVar4 = *(uint *)(lVar8 + 0x10);
      if (*(uint *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        uVar7 = DAT_14c964868 + 1;
        bVar9 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar9) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar4 = *(uint *)(lVar8 + 0x10);
        bVar9 = uVar4 == 0;
        if (bVar9) {
          *(uint *)(lVar8 + 0x10) = uVar7;
          uVar4 = 0;
        }
        UNLOCK();
        if (bVar9) {
          uVar4 = uVar7;
        }
      }
      puVar5[1] = uVar4;
      puVar5[2] = *(uint *)(param_3 + 0xe0);
      lVar6 = FUN_143d9c092(param_1);
      lVar8 = *(longlong *)(lVar6 + 0x10);
      *(uint **)(lVar6 + 0x10) = puVar5;
      if (lVar8 != 0) {
        FUN_1400020a8();
      }
      FUN_1414f506e(param_1,lVar6);
      FUN_141323fc0(param_1,lVar6,1);
      FUN_141323fc0(param_1,lVar6,4);
      uVar1 = *(undefined2 *)(lVar6 + 8);
      *(undefined2 *)param_2 = *(undefined2 *)(lVar6 + 2);
      *(undefined2 *)((longlong)param_2 + 2) = uVar1;
    }
    else {
      *param_2 = uVar3;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1414c1098 FUN_1414c1098 body=825 status=ok
// SIG undefined FUN_1414c1098(void)

undefined2 *
FUN_1414c1098(longlong param_1,undefined2 *param_2,ushort *param_3,longlong param_4,char param_5)

{
  longlong *plVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  undefined2 uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined2 uVar11;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined1 local_70 [8];
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = *param_3;
  uVar11 = 0xffff;
  if ((-1 < (short)uVar2) && ((int)(short)uVar2 < *(int *)(param_1 + 0x10))) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar2 * 8);
    if ((lVar7 != 0) && (*(uint *)(lVar7 + 8) == (uint)param_3[1])) {
      if (-1 < *(short *)(lVar7 + 4)) {
        do {
          lVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar7 + 2) * 8);
        } while (-1 < *(short *)(lVar7 + 4));
        if (lVar7 == 0) goto LAB_1414c112c;
      }
      if ((&DAT_149fc1b6e)[*(byte *)(param_4 + 0x18)] == '\x01') {
        if ((*(longlong **)(param_4 + 8) != (longlong *)0x0) &&
           (cVar5 = (**(code **)(**(longlong **)(param_4 + 8) + 0x28))(), cVar5 != '\0')) {
LAB_1414c1167:
          FUN_140b6e764(param_1,&local_58,param_4);
          if ((-1 < (short)local_58) && ((int)(short)local_58 < *(int *)(param_1 + 0x10))) {
            lVar8 = *(longlong *)(*(longlong *)(param_1 + 8) + ((ulonglong)local_58 & 0xffff) * 8);
            if ((lVar8 != 0) && (*(uint *)(lVar8 + 8) == (uint)local_58._2_2_)) {
              for (; -1 < *(short *)(lVar8 + 4);
                  lVar8 = *(longlong *)
                           (*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar8 + 2) * 8)) {
              }
              if ((lVar8 != 0) && (lVar8 != lVar7)) {
                FUN_145da5dd4(param_4,&local_58);
                lVar7 = FUN_143d9c13a(param_1,lVar7,lVar8);
                if (local_58 != (undefined1 *)0x0) {
                  FUN_1400020a8();
                }
              }
            }
          }
          plVar1 = (longlong *)(lVar7 + 0x60);
          FUN_140b6e8c2(param_4,&local_60);
          if (*(int *)(lVar7 + 0x68) != *(int *)(lVar7 + 0x94)) {
            uVar3 = (uint)((ulonglong)local_60 >> 0x10);
            uVar9 = (uint)local_60 & 0xffff;
            lVar8 = *(longlong *)(lVar7 + 0xa0);
            if (*(longlong *)(lVar7 + 0xa0) == 0) {
              lVar8 = lVar7 + 0x98;
            }
            iVar10 = *(int *)(lVar8 + (ulonglong)
                                      (*(int *)(lVar7 + 0xa8) - 1U &
                                      (int)((ulonglong)local_60 >> 0x20) +
                                      ((uint)local_60 << 0x10 | uVar9) +
                                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4)) * 4);
            if (iVar10 != -1) {
              do {
                if (*(longlong *)(*plVar1 + (longlong)iVar10 * 0x30) == local_60) {
                  FUN_140b6e8c2(param_4,&local_68);
                  if (*(int *)(lVar7 + 0x68) == *(int *)(lVar7 + 0x94)) goto LAB_1414c1328;
                  uVar3 = (uint)((ulonglong)local_68 >> 0x10);
                  uVar9 = (uint)local_68 & 0xffff;
                  lVar8 = lVar7 + 0x98;
                  if (*(longlong *)(lVar7 + 0xa0) != 0) {
                    lVar8 = *(longlong *)(lVar7 + 0xa0);
                  }
                  iVar10 = *(int *)(lVar8 + (ulonglong)
                                            (*(int *)(lVar7 + 0xa8) - 1U &
                                            (int)((ulonglong)local_68 >> 0x20) +
                                            ((uint)local_68 << 0x10 | uVar9) +
                                            (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4)) * 4);
                  if (iVar10 == -1) goto LAB_1414c1328;
                  goto LAB_1414c130b;
                }
                iVar10 = *(int *)((longlong)iVar10 * 0x30 + *plVar1 + 0x28);
              } while (iVar10 != -1);
            }
          }
          goto LAB_1414c133f;
        }
      }
      else if ((*(uint *)(param_4 + 8) & 0xffffff) != 0) goto LAB_1414c1167;
    }
  }
LAB_1414c112c:
  uVar6 = 0;
  goto LAB_1414c112e;
  while (iVar10 = *(int *)(lVar8 + 0x28), iVar10 != -1) {
LAB_1414c130b:
    lVar8 = *plVar1 + (longlong)iVar10 * 0x30;
    if (*(longlong *)(*plVar1 + (longlong)iVar10 * 0x30) == local_68) goto LAB_1414c132a;
  }
LAB_1414c1328:
  lVar8 = 0;
LAB_1414c132a:
  cVar5 = FUN_140ba41f1(param_4,lVar8 + 8);
  if (cVar5 == '\0') {
LAB_1414c133f:
    FUN_140b6e8c2(param_4,local_70);
    local_58 = local_70;
    local_50 = param_4;
    FUN_145c5332e(plVar1,local_44);
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((param_5 == '\0') ||
     (FUN_140b6e8c2(param_4,&local_78), *(longlong *)(lVar7 + 0x58) == local_78)) {
    if (bVar4) goto LAB_1414c13a7;
  }
  else {
    FUN_140b6e8c2(param_4,&local_58);
    *(undefined1 **)(lVar7 + 0x58) = local_58;
LAB_1414c13a7:
    FUN_1414f506e(param_1,lVar7);
    FUN_141323fc0(param_1,lVar7,0x10);
  }
  uVar11 = *(undefined2 *)(lVar7 + 2);
  uVar6 = *(undefined2 *)(lVar7 + 8);
LAB_1414c112e:
  *param_2 = uVar11;
  param_2[1] = uVar6;
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1414c13d2 FUN_1414c13d2 body=4 status=ok
// SIG undefined FUN_1414c13d2(void)

void FUN_1414c13d2(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



// FUNCTION 1414c13d6 FUN_1414c13d6 body=60 status=ok
// SIG undefined FUN_1414c13d6(void)

void FUN_1414c13d6(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      FUN_148af258a(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1414c1412 FUN_1414c1412 body=1 status=ok
// SIG undefined FUN_1414c1412(void)

void FUN_1414c1412(void)

{
  return;
}



// FUNCTION 1414c1414 FUN_1414c1414 body=37 status=ok
// SIG undefined FUN_1414c1414(void)

void FUN_1414c1414(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14a3951f0;
  param_1[7] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  return;
}



// FUNCTION 1414c143a FUN_1414c143a body=539 status=ok
// SIG undefined FUN_1414c143a(void)

void FUN_1414c143a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined *puVar11;
  bool bVar12;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x4c);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    if ((*(byte *)(param_1 + 0x54) & 1) != 0) {
      uVar5 = 0x9b;
      if (DAT_14ca80058 != DAT_14ca80084) {
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58);
        uVar6 = (uint)((ulonglong)lVar8 >> 0x10);
        uVar10 = (uint)lVar8 & 0xffff;
        puVar11 = &DAT_14ca80088;
        if (DAT_14ca80090 != (undefined *)0x0) {
          puVar11 = DAT_14ca80090;
        }
        iVar3 = *(int *)(puVar11 +
                        (ulonglong)
                        (DAT_14ca80098 - 1U &
                        (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar10) +
                        (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar10 >> 4)) * 4);
        while (iVar3 != -1) {
          plVar2 = (longlong *)(DAT_14ca80050 + (longlong)iVar3 * 0x14);
          if (*plVar2 == lVar8) {
            if ((plVar2 != (longlong *)0x0) && ((ushort *)(plVar2 + 1) != (ushort *)0x0)) {
              uVar5 = (uint)*(ushort *)(plVar2 + 1);
            }
            break;
          }
          iVar3 = *(int *)((longlong)plVar2 + 0xc);
        }
      }
      FUN_14945c9fa(&DAT_14cc17770 + uVar5 * 0x50,*(longlong *)(param_1 + 0x28) + 0x70);
      *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) & 0xfe;
    }
    *(undefined1 *)(param_1 + 0x50) = 1;
    uVar5 = FUN_14493c560();
    if (uVar5 == 0) {
      uVar6 = 0;
      uVar9 = 0;
      lVar8 = 0;
    }
    else {
      uVar9 = (ulonglong)(uVar5 >> 0xe);
      uVar6 = uVar5 & 0x3fff;
      lVar8 = (ulonglong)(uVar6 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar9 * 8);
    }
    *(longlong *)(lVar8 + 8) = param_1 + 0x40;
    do {
      uVar4 = DAT_14ca96680;
      uVar7 = (DAT_14ca96680 & 0xfffffffffc000000) + 0x4000000;
      if (uVar7 >> 0x1a < DAT_14ca96680 >> 0x1a) {
        FUN_14000f986(0x3a83126f);
      }
      if (uVar5 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(longlong *)(&DAT_14c833b00 + uVar9 * 8) + (ulonglong)(uVar6 * 0x18);
      }
      *(uint *)(lVar8 + 0x10) = (uint)uVar4 & 0x3ffffff;
      LOCK();
      bVar12 = uVar4 != DAT_14ca96680;
      uVar4 = uVar7 | uVar5;
      if (bVar12) {
        uVar4 = DAT_14ca96680;
      }
      DAT_14ca96680 = uVar4;
      UNLOCK();
    } while (bVar12);
  }
  return;
}



// FUNCTION 1414c1656 FUN_1414c1656 body=661 status=ok
// SIG undefined FUN_1414c1656(void)

void FUN_1414c1656(longlong *param_1,longlong param_2,longlong *param_3,undefined4 param_4,
                  float param_5)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  uint local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((param_1 != (longlong *)0x0) && (param_2 != 0)) {
    if (DAT_14caf64b8 == 0) {
      local_70 = &local_58;
      local_58 = FUN_141030f22;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_142b4754c;
      local_78 = &LAB_147c45ce0;
      local_80 = &LAB_1463f1ff4;
      local_88 = &DAT_149e063b2;
      local_90 = 0x4000000000;
      local_98 = 0x10000004;
      local_a0 = 8;
      local_a8 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8);
    }
    if ((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) == DAT_14caf64b8 + 0x30)) {
      lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
      if ((DAT_14cb259f8 != 0) && (DAT_14cb25ab0 == '\x01')) {
        lVar6 = (longlong)*(int *)(*(longlong *)(DAT_14cb259f8 + 0x40) + 0x18);
        if (lVar6 != 0) {
          lVar7 = 0;
          do {
            lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(DAT_14cb259f8 + 0x40) + 0x10) + lVar7)
            ;
            if (((lVar1 != 0) && (*(longlong *)(lVar1 + 8) == lVar4)) &&
               (*(longlong *)(lVar1 + 0xf0) == *(longlong *)(param_2 + 0x3c0))) {
              lVar4 = param_3[1];
              if (lVar4 == 0) {
                if (DAT_14cb256c8 == 0) {
                  uVar5 = FUN_140cd185c();
                  DAT_14cb256c8 = FUN_140002ddd(FUN_141819010,uVar5,L"WwiseGameParameterDef");
                }
                lVar4 = FUN_14477b664(DAT_14cb256c8);
                param_3[1] = lVar4;
              }
              lVar6 = param_3[2];
              if (((lVar6 != 0) || (lVar6 = 0, lVar4 == 0)) || (*param_3 == 0)) goto LAB_1414c1769;
              plVar2 = *(longlong **)(lVar4 + 0xb8);
              if (plVar2 == (longlong *)0x0) {
LAB_1414c18e5:
                lVar6 = 0;
              }
              else {
                cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
                if (cVar3 == '\0') goto LAB_1414c18e5;
                uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
                lVar6 = FUN_144aff482(uVar5,param_3);
              }
              param_3[2] = lVar6;
LAB_1414c1769:
              local_a8 = local_a8 & 0xffffff00;
              FUN_1447997cc(lVar1,lVar6,param_4,(int)(param_5 * 1000.0));
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_c8);
            }
            lVar7 = lVar7 + 0x10;
          } while (lVar6 * 0x10 != lVar7);
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414c18ec FUN_1414c18ec body=1236 status=ok
// SIG undefined FUN_1414c18ec(void)

void FUN_1414c18ec(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  undefined1 local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  (**(code **)(*param_1 + 0x318))();
  if ((param_2 == 0) || (lVar7 = param_1[8], lVar7 == 0)) {
LAB_1414c19a2:
    if (((*(int *)((longlong)param_1 + 0x4c) != 0) &&
        (uVar1 = *(uint *)(param_1 + 9), -1 < (int)uVar1)) &&
       (((int)uVar1 < DAT_14c9647dc &&
        (((lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar7 != 0 &&
          (*(int *)(lVar7 + 0x10) == *(int *)((longlong)param_1 + 0x4c))) &&
         ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))))) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
    }
    goto LAB_1414c1af2;
  }
  if ((*(int *)((longlong)param_1 + 0x4c) != 0) &&
     ((((uVar1 = *(uint *)(param_1 + 9), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
       (plVar6 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar6 != (longlong *)0x0)) &&
      (((int)plVar6[2] == *(int *)((longlong)param_1 + 0x4c) &&
       ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))))) {
    if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
      lVar5 = *plVar6;
    }
    else {
      lVar5 = 0;
    }
    if (*(int *)(lVar5 + 0x48) < *(int *)(lVar5 + 0x40)) goto LAB_1414c19a2;
  }
  local_58 = 0;
  lVar5 = param_1[4];
  local_60 = param_2;
  if (lVar5 == 0) {
LAB_1414c1a7c:
    lVar5 = 0;
  }
  else {
    if (DAT_14cae9568 == 0) {
      local_90 = &local_50;
      local_50 = FUN_1417de738;
      local_80 = &LAB_145893408;
      local_88 = &LAB_1458cbbd2;
      local_98 = &LAB_147ba21f1;
      local_a0 = &LAB_1463e9233;
      local_a8 = L"Engine";
      local_b0 = 0;
      local_b8 = 0x1000000c;
      local_c0 = 8;
      local_c8 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
    }
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14cae9568 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) != DAT_14cae9568 + 0x30)) goto LAB_1414c1a7c;
  }
  local_70 = param_2;
  if ((longlong)*(int *)(lVar7 + 0x30) != 0) {
    plVar6 = *(longlong **)(lVar7 + 0x28);
    local_68 = plVar6 + *(int *)(lVar7 + 0x30);
    do {
      lVar7 = *plVar6;
      iVar4 = *(int *)(lVar7 + 0x30);
      if ((longlong)iVar4 == 0) {
LAB_1414c1aed:
        lVar5 = local_70;
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar7 + 0xc);
          *(uint *)(param_1 + 9) = uVar1;
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar7 = 0;
          }
          iVar4 = *(int *)(lVar7 + 0x10);
          if (iVar4 == 0) {
            LOCK();
            iVar4 = DAT_14c964868 + 1;
            UNLOCK();
            iVar8 = DAT_14c964868 + 1;
            bVar11 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar4;
            if (bVar11) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar8);
            }
            lVar10 = 0;
            LOCK();
            iVar4 = *(int *)(lVar7 + 0x10);
            bVar11 = iVar4 == 0;
            if (bVar11) {
              *(int *)(lVar7 + 0x10) = iVar8;
              iVar4 = 0;
            }
            UNLOCK();
            if (bVar11) {
              iVar4 = iVar8;
            }
            *(int *)((longlong)param_1 + 0x4c) = iVar4;
            if (iVar4 != 0) goto LAB_1414c1b60;
          }
          else {
            *(int *)((longlong)param_1 + 0x4c) = iVar4;
LAB_1414c1b60:
            uVar1 = *(uint *)(param_1 + 9);
            lVar10 = 0;
            if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
              plVar6 = (longlong *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
              if ((plVar6 == (longlong *)0x0) ||
                 (((int)plVar6[2] != iVar4 || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))) {
                lVar10 = 0;
              }
              else {
                lVar10 = *plVar6;
              }
            }
          }
          lVar7 = param_1[4];
          if (lVar7 == 0) {
LAB_1414c1bf9:
            *(undefined4 *)(lVar10 + 0x48) = 0;
            lVar7 = 0;
          }
          else {
            if (DAT_14cae9568 == 0) {
              local_90 = &local_50;
              local_50 = FUN_1417de738;
              local_80 = &LAB_145893408;
              local_88 = &LAB_1458cbbd2;
              local_98 = &LAB_147ba21f1;
              local_a0 = &LAB_1463e9233;
              local_a8 = L"Engine";
              local_b0 = 0;
              local_b8 = 0x1000000c;
              local_c0 = 8;
              local_c8 = 0x2b8;
              FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
            }
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cae9568 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) != DAT_14cae9568 + 0x30))
            goto LAB_1414c1bf9;
            *(undefined4 *)(lVar10 + 0x48) = 0;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar7);
            }
          }
          *(longlong *)(lVar10 + 0x50) = lVar7;
          FUN_148b66014(lVar5 + 0x7b8,&local_50,param_1);
        }
        break;
      }
      lVar10 = *(longlong *)(lVar7 + 0x28);
      lVar9 = 0;
      while (plVar2 = *(longlong **)(lVar10 + lVar9),
            cVar3 = (**(code **)(*plVar2 + 0x2a0))(plVar2,lVar5,&local_60), cVar3 != '\0') {
        lVar9 = lVar9 + 8;
        if ((longlong)iVar4 * 8 == lVar9) goto LAB_1414c1aed;
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != local_68);
  }
LAB_1414c1af2:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414c1de0 FUN_1414c1de0 body=221 status=ok
// SIG undefined FUN_1414c1de0(void)

longlong FUN_1414c1de0(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cabfbb0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147861671;
    local_40 = &LAB_145a19b26;
    local_48 = L"DeviceProfiles";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/Engine",L"DeviceProfileFragment",&DAT_14cabfbb0,&DAT_147861670);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabfbb0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414c1ebe FUN_1414c1ebe body=221 status=ok
// SIG undefined FUN_1414c1ebe(void)

longlong FUN_1414c1ebe(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb267e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147f86b33;
    local_40 = FUN_146449d9a;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/FaceFX",L"FaceFXConfig",&DAT_14cb267e8,&DAT_147f86b32);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb267e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414c1f9c FUN_1414c1f9c body=221 status=ok
// SIG undefined FUN_1414c1f9c(void)

longlong FUN_1414c1f9c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb51bc8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1485f2f1d;
    local_40 = FUN_1464a7e4e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000044;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/DLSS",L"DLSSOverrideSettings",&DAT_14cb51bc8,&DAT_1485f2f1c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb51bc8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414c207a FUN_1414c207a body=221 status=ok
// SIG undefined FUN_1414c207a(void)

longlong FUN_1414c207a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb51be0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1485f2f27;
    local_40 = &LAB_145c19c42;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/DLSS",L"DLSSSettings",&DAT_14cb51be0,&DAT_1485f2f26);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb51be0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414c2158 FUN_1414c2158 body=221 status=ok
// SIG undefined FUN_1414c2158(void)

longlong FUN_1414c2158(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba1b98 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148ba3359;
    local_40 = FUN_1465b1558;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/OakGame",L"GbxProgressEchoTokenIntegrityData",&DAT_14cba1b98,
                  &DAT_148ba3358);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba1b98;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414c2236 FUN_1414c2236 body=221 status=ok
// SIG undefined FUN_1414c2236(void)

longlong FUN_1414c2236(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbf9530 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14908d0ed;
    local_40 = FUN_14667bae8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/HairStrandsCore",L"GroomPluginSettings",&DAT_14cbf9530,&DAT_14908d0ec);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbf9530;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414c2314 FUN_1414c2314 body=221 status=ok
// SIG undefined FUN_1414c2314(void)

longlong FUN_1414c2314(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc268f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1497da315;
    local_40 = FUN_14675d583;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/GbxVegetation",L"GbxVegetationProjectSettings",&DAT_14cc268f0,
                  &DAT_1497da314);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc268f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414c23f2 FUN_1414c23f2 body=73 status=ok
// SIG undefined FUN_1414c23f2(void)

longlong FUN_1414c23f2(void)

{
  longlong lVar1;
  
  if (DAT_14c99d1e0 == 0) {
    lVar1 = FUN_14001cc68(0xf0,0x10);
    FUN_145b17e60(lVar1);
    DAT_14c99d1e0 = lVar1;
    FUN_145b17de0(lVar1);
  }
  return DAT_14c99d1e0;
}



// FUNCTION 1414c243c FUN_1414c243c body=392 status=ok
// SIG undefined FUN_1414c243c(void)

undefined4 * FUN_1414c243c(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  uVar1 = DAT_14c846508;
  local_18 = DAT_14c846508;
  local_28 = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
  uStack_20 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined ***)(param_1 + 2) = &PTR_FUN_14a1a0270;
  *(undefined8 *)(param_1 + 8) = local_28;
  *(undefined8 *)(param_1 + 10) = uStack_20;
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  *(undefined2 *)(param_1 + 0xe) = 0;
  uVar1 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
  *(ulonglong *)(param_1 + 0x10) = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
  *(undefined8 *)(param_1 + 0x12) = uVar1;
  *(undefined8 *)(param_1 + 0x14) = DAT_14c846508;
  param_1[0x16] = 0;
  *(undefined8 *)(param_1 + 0x17) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined ***)(param_1 + 0x1a) = &PTR_FUN_14a1a0a60;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x20) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x22) = uVar1;
  *(undefined8 *)(param_1 + 0x24) = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x27) = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  uVar1 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
  *(ulonglong *)(param_1 + 0x2c) = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
  *(undefined8 *)(param_1 + 0x2e) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = DAT_14c846508;
  param_1[0x32] = 0;
  *(undefined8 *)(param_1 + 0x33) = 0;
  param_1[0x36] = 0;
  *(undefined8 *)(param_1 + 0x3c) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x38) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x3a) = uVar1;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined ***)(param_1 + 0x40) = &PTR_FUN_14a1a0270;
  *(undefined8 *)(param_1 + 0x4a) = DAT_14c846508;
  uVar1 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
  *(ulonglong *)(param_1 + 0x46) = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined2 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x52) = DAT_14c846508;
  uVar4 = DAT_14c846500._4_4_;
  uVar3 = (undefined4)DAT_14c846500;
  uVar2 = DAT_14c8464f8._4_4_;
  param_1[0x4e] = (undefined4)DAT_14c8464f8;
  param_1[0x4f] = uVar2;
  param_1[0x50] = uVar3;
  param_1[0x51] = uVar4;
  param_1[0x54] = 0;
  *(undefined8 *)(param_1 + 0x55) = 0;
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_48);
}



// FUNCTION 1414c25c6 FUN_1414c25c6 body=568 status=ok
// SIG undefined FUN_1414c25c6(void)

void FUN_1414c25c6(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  *param_1 = &PTR_LAB_14adf8810;
  FUN_14480a1ec();
  lVar5 = (longlong)*(int *)(param_1[0x49] + 0x1e8);
  if (lVar5 != 0) {
    lVar2 = *(longlong *)(param_1[0x49] + 0x1e0);
    lVar6 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + lVar6) + 0x28))();
      lVar6 = lVar6 + 8;
    } while (lVar5 * 8 != lVar6);
  }
  if (0 < *(int *)(param_1 + 0x60)) {
    lVar5 = 0;
    iVar4 = 0;
    do {
      FUN_14811423e(*(undefined8 *)(param_1[0x5f] + lVar5),param_1);
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar4 < *(int *)(param_1 + 0x60));
  }
  FUN_1481cc320(param_1[0x5f]);
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)((longlong)param_1 + 0x304) != 0) {
    FUN_1481cc370(param_1 + 0x5f);
  }
  FUN_143a8ba88(param_1 + 0xb6);
  lVar5 = 0x418;
  do {
    FUN_142d62ffc(*(undefined8 *)((longlong)param_1 + lVar5),
                  *(undefined4 *)((longlong)param_1 + lVar5 + 8));
    if (*(longlong *)((longlong)param_1 + lVar5) != 0) {
      FUN_1400020a8();
    }
    lVar5 = lVar5 + -0x10;
  } while (lVar5 != 0x398);
  FUN_142d62ffc(param_1[0x72],*(undefined4 *)(param_1 + 0x73));
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6f] != 0) {
    FUN_1400020a8();
  }
  FUN_143a9bd63(param_1[0x6d],*(undefined4 *)(param_1 + 0x6e));
  if (param_1[0x6d] != 0) {
    FUN_1400020a8();
  }
  lVar5 = 0x360;
  do {
    FUN_14480a5bc(*(undefined8 *)((longlong)param_1 + lVar5 + -8),
                  *(undefined4 *)((longlong)param_1 + lVar5));
    if (*(longlong *)((longlong)param_1 + lVar5 + -8) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)((longlong)param_1 + lVar5 + -0x18) != 0) {
      FUN_1400020a8();
    }
    lVar5 = lVar5 + -0x20;
  } while (lVar5 != 0x300);
  FUN_1481cc320(param_1[0x5f],*(undefined4 *)(param_1 + 0x60));
  if (param_1[0x5f] != 0) {
    FUN_1400020a8();
  }
  lVar5 = 0x2e8;
  do {
    if (*(longlong *)((longlong)param_1 + lVar5) != 0) {
      FUN_1400020a8();
    }
    lVar5 = lVar5 + -0x10;
  } while (lVar5 != 0x2b8);
  FUN_14476820c(param_1 + 0x4d);
  lVar5 = param_1[0x49];
  if (lVar5 != 0) {
    FUN_143936fae(lVar5);
    FUN_1400020a8(lVar5);
  }
  FUN_144aef1bc(param_1[0x47],*(undefined4 *)(param_1 + 0x48));
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  puVar3 = (undefined8 *)param_1[0x46];
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  FUN_145748724(param_1);
  return;
}



// FUNCTION 1414c27fe FUN_1414c27fe body=1370 status=ok
// SIG undefined FUN_1414c27fe(void)

void FUN_1414c27fe(longlong param_1,undefined8 param_2,double *param_3,undefined4 *param_4,
                  undefined4 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  double dVar5;
  void *_Src;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  byte bVar14;
  undefined1 uVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  char cVar19;
  double *pdVar20;
  double *pdVar21;
  uint uVar22;
  bool bVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined4 uVar27;
  undefined1 auStack_128 [44];
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined1 local_d8 [40];
  longlong local_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar16 = FUN_14087dee0(param_2);
  uVar27 = 0xbf800000;
  if (lVar16 != 0) {
    cVar19 = *(char *)(lVar16 + 0x13c);
    lVar16 = FUN_140831778();
    if (cVar19 == '\0') {
      uVar27 = *(undefined4 *)(lVar16 + 0x20);
    }
    else if (cVar19 == '\x02') {
      uVar27 = *(undefined4 *)(lVar16 + 0x28);
    }
    else if (cVar19 == '\x01') {
      uVar27 = *(undefined4 *)(lVar16 + 0x24);
    }
  }
  if (*(char *)(param_3 + 0x16) != '\0') {
    uVar27 = 0xbf800000;
  }
  FUN_1407b25f0();
  *(undefined4 *)(param_1 + 0x50) = param_4[8];
  uVar7 = *param_4;
  uVar8 = param_4[1];
  uVar9 = param_4[2];
  uVar10 = param_4[3];
  uVar11 = param_4[5];
  uVar12 = param_4[6];
  uVar13 = param_4[7];
  *(undefined4 *)(param_1 + 0x40) = param_4[4];
  *(undefined4 *)(param_1 + 0x44) = uVar11;
  *(undefined4 *)(param_1 + 0x48) = uVar12;
  *(undefined4 *)(param_1 + 0x4c) = uVar13;
  *(undefined4 *)(param_1 + 0x30) = uVar7;
  *(undefined4 *)(param_1 + 0x34) = uVar8;
  *(undefined4 *)(param_1 + 0x38) = uVar9;
  *(undefined4 *)(param_1 + 0x3c) = uVar10;
  if (*(int *)((longlong)param_3 + 0x184) == 0) {
LAB_1414c2c18:
    cVar19 = '\0';
  }
  else {
    uVar22 = *(uint *)(param_3 + 0x30);
    cVar19 = '\0';
    if ((-1 < (int)uVar22) && ((int)uVar22 < DAT_14c9647dc)) {
      lVar16 = (ulonglong)((uVar22 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8);
      if (lVar16 == 0) goto LAB_1414c2c18;
      cVar19 = '\0';
      if ((*(int *)(lVar16 + 0x10) == *(int *)((longlong)param_3 + 0x184)) &&
         (cVar19 = '\0', (*(uint *)(lVar16 + 8) & 0x10200000) == 0)) {
        cVar19 = (char)*(undefined4 *)(param_3 + 0x31);
      }
    }
  }
  *(char *)(param_1 + 0x2c) = cVar19;
  dVar5 = param_3[0x30];
  *(double *)(param_1 + 0x24) = dVar5;
  if ((ulonglong)dVar5 >> 0x20 == 0) {
LAB_1414c2d17:
    plVar17 = (longlong *)0x0;
  }
  else {
    plVar17 = (longlong *)0x0;
    uVar22 = SUB84(dVar5,0);
    if ((-1 < (int)uVar22) && ((int)uVar22 < DAT_14c9647dc)) {
      puVar18 = (undefined8 *)
                ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0xd & 0x3fff8)));
      if ((puVar18 == (undefined8 *)0x0) ||
         ((*(int *)(puVar18 + 2) != (int)((ulonglong)dVar5 >> 0x20) ||
          ((*(uint *)(puVar18 + 1) & 0x10200000) != 0)))) goto LAB_1414c2d17;
      plVar17 = (longlong *)*puVar18;
    }
  }
  bVar14 = 2;
  if (cVar19 == '\x01') {
    if (plVar17 == (longlong *)0x0) {
      bVar14 = 0;
    }
    else {
      bVar14 = (**(code **)(*plVar17 + 0x6c8))();
      bVar14 = (bVar14 ^ 1) * '\x02';
    }
  }
  *(byte *)(param_1 + 0x2b1) = *(byte *)(param_1 + 0x2b1) & 0xfd | bVar14;
  dVar5 = param_3[0xd];
  *(double *)(param_1 + 0x280) = param_3[0xc];
  *(double *)(param_1 + 0x288) = dVar5;
  *(double *)(param_1 + 0x290) = param_3[0xe];
  dVar5 = *param_3;
  dVar1 = param_3[2];
  dVar2 = param_3[1];
  dVar3 = param_3[3];
  dVar25 = dVar1 - dVar5 * 0.0;
  dVar26 = dVar5 * 0.0 - dVar2;
  dVar6 = dVar2 * 0.0 + dVar1 * -0.0;
  dVar26 = dVar26 + dVar26;
  dVar25 = dVar25 + dVar25;
  dVar6 = dVar6 + dVar6;
  dVar24 = (double)*(float *)(param_3 + 0xf);
  *(double *)(param_1 + 0x268) = ((dVar2 * dVar26 - dVar25 * dVar1) + dVar3 * dVar6 + 1.0) * dVar24;
  *(double *)(param_1 + 0x270) = ((dVar1 * dVar6 - dVar26 * dVar5) + dVar3 * dVar25 + 0.0) * dVar24;
  *(double *)(param_1 + 0x278) = ((dVar5 * dVar25 - dVar6 * dVar2) + dVar3 * dVar26 + 0.0) * dVar24;
  *(undefined1 *)(param_1 + 0x298) = 1;
  pdVar20 = param_3;
  pdVar21 = (double *)(param_1 + 0x130);
  for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
    *pdVar21 = *pdVar20;
    pdVar20 = pdVar20 + 1;
    pdVar21 = pdVar21 + 1;
  }
  *(undefined4 *)(param_1 + 0x29c) = param_5;
  *(undefined4 *)(param_1 + 0x2a0) = uVar27;
  *(byte *)(param_1 + 0x2b0) =
       *(byte *)(param_1 + 0x2b0) & 0xfd | *(char *)((longlong)param_3 + 0xb1) * '\x02';
  *(double *)(param_1 + 0x2d0) = param_3[0x18];
  uVar27 = *(undefined4 *)((longlong)param_3 + 0xcc);
  uVar7 = *(undefined4 *)(param_3 + 0x1a);
  uVar8 = *(undefined4 *)((longlong)param_3 + 0xd4);
  *(undefined4 *)(param_1 + 0x2d8) = *(undefined4 *)(param_3 + 0x19);
  *(undefined4 *)(param_1 + 0x2dc) = uVar27;
  *(undefined4 *)(param_1 + 0x2e0) = uVar7;
  *(undefined4 *)(param_1 + 0x2e4) = uVar8;
  pdVar20 = (double *)(param_1 + 0x2e8);
  if (pdVar20 != param_3 + 0x1b) {
    iVar4 = *(int *)(param_3 + 0x1c);
    _Src = (void *)param_3[0x1b];
    *(int *)(param_1 + 0x2f0) = iVar4;
    if (iVar4 == 0 && *(int *)(param_1 + 0x2f4) == 0) {
      *(undefined4 *)(param_1 + 0x2f4) = 0;
    }
    else {
      FUN_1446dd670(pdVar20,iVar4);
      if (iVar4 != 0) {
        memcpy((void *)*pdVar20,_Src,(longlong)iVar4 * 2);
      }
    }
  }
  *(double *)(param_1 + 700) = param_3[0x2e];
  *(double *)(param_1 + 0x2c4) = param_3[0x2f];
  if (param_3[0x1f] == 0.0) goto LAB_1414c2b9f;
  *(undefined4 *)(param_1 + 0x2a0) = 0xbf800000;
  *(double *)(param_1 + 0x78) = param_3[0x1d];
  *(double *)(param_1 + 0x80) = param_3[0x1e];
  (**(code **)(*(longlong *)param_3[0x1f] + 0x50))((longlong *)param_3[0x1f],local_d8);
  FUN_140ac173c(&local_fc,local_d8);
  *(undefined4 *)(param_1 + 0x74) = local_dc;
  *(undefined4 *)(param_1 + 100) = local_ec;
  *(undefined4 *)(param_1 + 0x68) = uStack_e8;
  *(undefined4 *)(param_1 + 0x6c) = uStack_e4;
  *(undefined4 *)(param_1 + 0x70) = uStack_e0;
  *(undefined4 *)(param_1 + 0x54) = local_fc;
  *(undefined4 *)(param_1 + 0x58) = uStack_f8;
  *(undefined4 *)(param_1 + 0x5c) = uStack_f4;
  *(undefined4 *)(param_1 + 0x60) = uStack_f0;
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  if (param_3 + 0x20 != (double *)(param_1 + 0x90)) {
    if (*(char *)(param_3 + 0x2c) == '\x01') {
      pdVar20 = param_3 + 0x20;
      pdVar21 = (double *)(param_1 + 0x90);
      for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
        *pdVar21 = *pdVar20;
        pdVar20 = pdVar20 + 1;
        pdVar21 = pdVar21 + 1;
      }
      uVar15 = 1;
    }
    else {
      if (*(char *)(param_1 + 0xf0) != '\x01') goto LAB_1414c2cc9;
      uVar15 = 0;
    }
    *(undefined1 *)(param_1 + 0xf0) = uVar15;
  }
LAB_1414c2cc9:
  lVar16 = (**(code **)(*(longlong *)param_3[0x1f] + 0x10))();
  if (lVar16 == 0) {
    bVar23 = false;
  }
  else {
    bVar23 = *(int *)(lVar16 + 0x10) == 1;
  }
  *(byte *)(param_1 + 0x2b1) = *(byte *)(param_1 + 0x2b1) & 0xfe | bVar23;
  if (*(char *)((longlong)param_3 + 0xb3) == '\x01') {
    *(byte *)(param_1 + 0x2b0) = *(byte *)(param_1 + 0x2b0) & 0xf7;
  }
LAB_1414c2b9f:
  if ((local_a0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414c2d5a FUN_1414c2d5a body=51 status=ok
// SIG undefined FUN_1414c2d5a(void)

undefined8 FUN_1414c2d5a(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x10))();
  if (lVar1 == 0) {
    FUN_144928b90(param_2,1);
  }
  else {
    FUN_1406f1bc8(lVar1,param_2);
  }
  return param_2;
}



// FUNCTION 1414c2d8e FUN_1414c2d8e body=345 status=ok
// SIG undefined FUN_1414c2d8e(void)

undefined8 * FUN_1414c2d8e(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_14b4ce010;
  puVar3[3] = 0;
  iVar2 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(puVar3 + 4) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar3 + 3,iVar2,0);
    memcpy((void *)puVar3[3],_Src,(longlong)iVar2 * 2);
  }
  puVar3[5] = param_3;
  *param_1 = puVar3;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b4ce060;
  plVar4[2] = (longlong)puVar3;
  param_1[1] = plVar4;
  if (puVar3 == (undefined8 *)0x0) {
    return param_1;
  }
  if (((puVar3[1] != 0) && (puVar3[2] != 0)) && (0 < *(int *)(puVar3[2] + 8))) {
    return param_1;
  }
  if (plVar4 == (longlong *)0x0) {
    puVar3[1] = puVar3;
    plVar5 = (longlong *)puVar3[2];
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    puVar3[1] = puVar3;
    if ((longlong *)puVar3[2] == plVar4) goto LAB_1414c2e76;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    plVar5 = (longlong *)puVar3[2];
    if (plVar5 == (longlong *)0x0) {
      puVar3[2] = plVar4;
      goto LAB_1414c2e76;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar5 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar5 + 0x10))();
  }
  puVar3[2] = plVar4;
  if (plVar4 == (longlong *)0x0) {
    return param_1;
  }
LAB_1414c2e76:
  LOCK();
  plVar5 = plVar4 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  return param_1;
}



// FUNCTION 1414c2ee8 FUN_1414c2ee8 body=680 status=ok
// SIG undefined FUN_1414c2ee8(void)

void FUN_1414c2ee8(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  wchar_t *_Str;
  undefined8 *puVar8;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 *local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  FUN_1403de9f2(param_2,&local_38,&DAT_149e06196,0);
  if ((int)uStack_30 == 4) {
    if (*(int *)(local_38 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)*local_38;
    }
    uVar6 = _wtoi(_Str);
    bVar7 = (byte)uVar6;
    *(byte *)(param_3 + 0x38) = bVar7 & 1;
    *(byte *)(param_3 + 0x39) = bVar7 >> 1 & 1;
    *(byte *)(param_3 + 0x3a) = bVar7 >> 2 & 1;
    *(byte *)(param_3 + 0x3b) = bVar7 >> 3 & 1;
    *(byte *)(param_3 + 0x3c) = bVar7 >> 4 & 1;
    *(byte *)(param_3 + 0x3d) = bVar7 >> 5 & 1;
    *(byte *)(param_3 + 0x3e) = bVar7 >> 6 & 1;
    *(byte *)(param_3 + 0x3f) = bVar7 >> 7;
    *(byte *)(param_3 + 0x40) = (byte)(uVar6 >> 8) & 1;
    *(byte *)(param_3 + 0x41) = (byte)(uVar6 >> 9) & 1;
    if (1 < *(int *)(local_38 + 3)) {
      (**(code **)(**(longlong **)(param_1 + 0x288) + 0x80))
                (*(longlong **)(param_1 + 0x288),&local_58);
      (**(code **)(*local_58 + 0x120))(local_58,&local_48,local_38 + 2);
      plVar4 = local_40;
      if ((undefined8 *)(param_3 + 8) != &local_48) {
        *(undefined8 *)(param_3 + 8) = local_48;
        local_48 = 0;
        plVar2 = *(longlong **)(param_3 + 0x10);
        if (local_40 != plVar2) {
          local_40 = (longlong *)0x0;
          *(longlong **)(param_3 + 0x10) = plVar4;
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            plVar4 = plVar2 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*plVar2)(plVar2);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
              }
            }
          }
        }
      }
      plVar4 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_40 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_50 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_50 + 0x10))(local_50);
          }
        }
      }
    }
    if ((1 < *(int *)(local_38 + 5)) && (lVar3 = *(longlong *)(param_3 + 0x100), lVar3 != 0)) {
      plVar4 = *(longlong **)(param_3 + 0x108);
      if (plVar4 == (longlong *)0x0) {
        FUN_1402980a2(lVar3 + 0xa8,local_38[4],*(int *)(local_38 + 5) + -1);
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        iVar5 = *(int *)(local_38 + 5) + -1;
        if (*(int *)(local_38 + 5) == 0) {
          iVar5 = 0;
        }
        FUN_1402980a2(lVar3 + 0xa8,local_38[4],iVar5);
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
    }
    if (1 < *(int *)(local_38 + 7)) {
      puVar8 = local_38 + 6;
      FUN_1446f470e(&local_60,L"CUSTOMSEARCHINT2",1);
      FUN_145cba9f8(param_3 + 0x28,local_60,puVar8,2);
    }
  }
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414c3192 FUN_1414c3192 body=47 status=ok
// SIG undefined FUN_1414c3192(void)

void FUN_1414c3192(undefined8 param_1)

{
  char cVar1;
  
  do {
    cVar1 = FUN_14291de08(param_1,0x7fffffffffffffff);
  } while (cVar1 != '\0');
  return;
}



// FUNCTION 1414c31c2 FUN_1414c31c2 body=88 status=ok
// SIG undefined FUN_1414c31c2(void)

void FUN_1414c31c2(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_1[1] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[1] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*param_1 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_1 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 1414c321a FUN_1414c321a body=692 status=ok
// SIG undefined FUN_1414c321a(void)

void FUN_1414c321a(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ae4af00;
  param_1[5] = &PTR_FUN_14ae4b4a0;
  param_1[0x2d] = &PTR_FUN_14ae4b4e0;
  FUN_144760e21(param_1[0x272],*(undefined4 *)(param_1 + 0x273));
  if (param_1[0x272] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x26f],*(undefined4 *)(param_1 + 0x270));
  if (param_1[0x26f] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x26c],*(undefined4 *)(param_1 + 0x26d));
  if (param_1[0x26c] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x269],*(undefined4 *)(param_1 + 0x26a));
  if (param_1[0x269] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x266],*(undefined4 *)(param_1 + 0x267));
  if (param_1[0x266] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x263],*(undefined4 *)(param_1 + 0x264));
  if (param_1[0x263] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x260],*(undefined4 *)(param_1 + 0x261));
  if (param_1[0x260] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x25d],*(undefined4 *)(param_1 + 0x25e));
  if (param_1[0x25d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x25a],*(undefined4 *)(param_1 + 0x25b));
  if (param_1[0x25a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[599],*(undefined4 *)(param_1 + 600));
  if (param_1[599] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x254],*(undefined4 *)(param_1 + 0x255));
  if (param_1[0x254] != 0) {
    FUN_1400020a8();
  }
  FUN_140ffd6b6(param_1 + 0x1e4);
  FUN_140ffd6b6(param_1 + 0x176);
  FUN_140ffd6b6(param_1 + 0x108);
  FUN_140ffd6b6(param_1 + 0x9a);
  if ((longlong *)param_1[0x96] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x96] + 0x10))();
  }
  if ((longlong *)param_1[0x94] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x94] + 0x10))();
  }
  plVar2 = (longlong *)param_1[0x92];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = (longlong *)param_1[0x90];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_1[0x8a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x88] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x86] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x84] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x82] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x80] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
  }
  FUN_14117c118(param_1);
  return;
}



// FUNCTION 1414c34ce FUN_1414c34ce body=43 status=ok
// SIG undefined FUN_1414c34ce(void)

void FUN_1414c34ce(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f14520;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 1414c34fa FUN_1414c34fa body=295 status=ok
// SIG undefined FUN_1414c34fa(void)

undefined8 FUN_1414c34fa(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1414c361a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1414c361a;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_1414c361a:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1414c35c5;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_1414c35c5;
    }
  }
  uVar6 = 0;
LAB_1414c35c5:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414c3622 FUN_1414c3622 body=980 status=ok
// SIG undefined FUN_1414c3622(void)

void FUN_1414c3622(longlong param_1,byte param_2,int param_3)

{
  longlong *plVar1;
  PSRWLOCK SRWLock;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined *puVar9;
  ulonglong uVar10;
  int *piVar11;
  undefined4 *puVar12;
  void *_Dst;
  undefined1 auStack_a8 [44];
  int local_7c;
  PSRWLOCK local_78;
  ulonglong local_70;
  longlong local_68 [2];
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_7c = param_3;
  if (*(longlong *)(param_1 + 0x48) == 0) goto LAB_1414c389a;
  lVar4 = FUN_14011c349();
  uVar10 = (ulonglong)param_2;
  lVar4 = lVar4 + uVar10 * 0x18;
  lVar7 = *(longlong *)(lVar4 + 0x128);
  if (lVar7 == 0) {
    uVar5 = FUN_14042c486();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(lVar4 + 0x128) = lVar7;
  }
  lVar6 = *(longlong *)(lVar4 + 0x130);
  if (lVar6 == 0) {
    if ((lVar7 == 0) || (*(longlong *)(lVar4 + 0x120) == 0)) goto LAB_1414c389a;
    plVar1 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      *(undefined8 *)(lVar4 + 0x130) = 0;
      goto LAB_1414c389a;
    }
    uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 0x120));
    *(longlong *)(lVar4 + 0x130) = lVar6;
    if (lVar6 == 0) goto LAB_1414c389a;
  }
  FUN_1449027d0(param_1);
  lVar4 = local_58[4];
  local_78 = (PSRWLOCK)(lVar4 + 0x28);
  AcquireSRWLockExclusive(local_78);
  *(int *)(lVar4 + 0x20) = *(int *)(lVar4 + 0x20) + 1;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar11 = (int *)((longlong)local_50 + 0xc);
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (*piVar11 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
  iVar8 = *(int *)(lVar4 + 0x10);
  uVar3 = iVar8 + 1;
  *(uint *)(lVar4 + 0x10) = uVar3;
  local_70 = uVar10;
  if (*(uint *)(lVar4 + 0x14) < uVar3) {
    FUN_145b21cf0((longlong *)(lVar4 + 8));
  }
  _Dst = (void *)((longlong)iVar8 * 0xa0 + *(longlong *)(lVar4 + 8));
  memset(_Dst,0,0xa0);
  puVar12 = *(undefined4 **)(*(longlong *)(param_1 + 0x48) + 8);
  if (puVar12 == (undefined4 *)0x0) {
    puVar12 = &DAT_14c9485f0;
  }
  if (DAT_14c947fe0 == 0) {
    lVar4 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar4);
    DAT_14c947fe0 = lVar4;
  }
  FUN_140045924(DAT_14c947fe0,&local_58,puVar12,1);
  SRWLock = local_78;
  if (local_58 == *(longlong **)((longlong)_Dst + 0x48)) {
    if (*(int *)((longlong)_Dst + 0x50) == 0) {
      iVar8 = 1;
      goto LAB_1414c375b;
    }
  }
  else {
    iVar8 = *(int *)((longlong)_Dst + 0x50) + 1;
LAB_1414c375b:
    *(longlong **)((longlong)_Dst + 0x48) = local_58;
    *(int *)((longlong)_Dst + 0x50) = iVar8;
  }
  if (*(int *)((longlong)_Dst + 0x94) == local_7c) {
    if (*(int *)((longlong)_Dst + 0x98) == 0) {
      iVar8 = 1;
      goto LAB_1414c3779;
    }
  }
  else {
    iVar8 = *(int *)((longlong)_Dst + 0x98) + 1;
LAB_1414c3779:
    *(int *)((longlong)_Dst + 0x94) = local_7c;
    *(int *)((longlong)_Dst + 0x98) = iVar8;
  }
  piVar11 = &DAT_14c9485f0;
  if (*(int **)(lVar6 + 8) != (int *)0x0) {
    piVar11 = *(int **)(lVar6 + 8);
  }
  if ((*piVar11 != *(int *)((longlong)_Dst + 0x18)) || (*(int *)((longlong)_Dst + 0x40) == 0)) {
    FUN_1447715ec((longlong)_Dst + 0x18,piVar11);
    *(int *)((longlong)_Dst + 0x40) = *(int *)((longlong)_Dst + 0x40) + 1;
  }
  if (DAT_14cbb2760 != DAT_14cbb278c) {
    puVar9 = &DAT_14cbb2790;
    if (DAT_14cbb2798 != (undefined *)0x0) {
      puVar9 = DAT_14cbb2798;
    }
    iVar8 = *(int *)(puVar9 + (ulonglong)(DAT_14cbb27a0 - 1U & (uint)local_70) * 4);
    while (iVar8 != -1) {
      lVar4 = DAT_14cbb2758 + (longlong)iVar8 * 0x38;
      if (*(byte *)(DAT_14cbb2758 + (longlong)iVar8 * 0x38) == param_2) {
        if (lVar4 + 8 != 0 && lVar4 != 0) {
          *(int *)((longlong)_Dst + 0x10) = *(int *)((longlong)_Dst + 0x10) + 1;
          FUN_140ac6c96(lVar4 + 8,_Dst);
          goto LAB_1414c386b;
        }
        break;
      }
      iVar8 = *(int *)(lVar4 + 0x30);
    }
  }
  FUN_140baf24c(*(undefined8 *)(param_1 + 0x48),local_68);
  FUN_140233b1a(&local_58,local_68);
  FUN_14003c038(_Dst,&local_58);
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
LAB_1414c386b:
  if (*(char *)((longlong)_Dst + 0x8c) == '\0') {
    iVar8 = *(int *)((longlong)_Dst + 0x90) + 1;
LAB_1414c3882:
    *(undefined1 *)((longlong)_Dst + 0x8c) = 1;
    *(int *)((longlong)_Dst + 0x90) = iVar8;
  }
  else if (*(int *)((longlong)_Dst + 0x90) == 0) {
    iVar8 = 1;
    goto LAB_1414c3882;
  }
  ReleaseSRWLockExclusive(SRWLock);
LAB_1414c389a:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414c39f7 FUN_1414c39f7 body=14 status=ok
// SIG undefined FUN_1414c39f7(void)

bool FUN_1414c39f7(void)

{
  return DAT_14ca84df4 == 0x1002;
}



// FUNCTION 1414c3a06 FUN_1414c3a06 body=1224 status=ok
// SIG undefined FUN_1414c3a06(void)

undefined8 * FUN_1414c3a06(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  undefined **local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  undefined8 local_98 [10];
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_1 = &PTR_FUN_149ee31c0;
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_140ca8f8e(param_1 + 2);
  FUN_140ca8f8e(param_1 + 0x18);
  FUN_140ca8f8e(param_1 + 0x2e);
  FUN_140ca8f8e(param_1 + 0x44);
  FUN_140ca8f8e(param_1 + 0x5a);
  FUN_140ca8f8e(param_1 + 0x70);
  FUN_140ca8f8e(param_1 + 0x86);
  FUN_140ca8f8e(param_1 + 0x9c);
  FUN_140ca8f8e(param_1 + 0xb2);
  param_1[200] = 0x40000000;
  param_1[0xc9] = 0;
  local_e0 = DAT_14c84635c;
  FUN_1412ce202(&local_d8);
  param_1[0xca] = &PTR_FUN_149ed05f0;
  *(undefined4 *)(param_1 + 0xcb) = local_d0;
  *(undefined4 *)((longlong)param_1 + 0x65c) = uStack_cc;
  *(undefined4 *)(param_1 + 0xcc) = uStack_c8;
  *(undefined4 *)((longlong)param_1 + 0x664) = uStack_c4;
  *(undefined4 *)(param_1 + 0xcd) = local_c0;
  *(undefined4 *)((longlong)param_1 + 0x66c) = uStack_bc;
  *(undefined4 *)(param_1 + 0xce) = uStack_b8;
  *(undefined4 *)((longlong)param_1 + 0x674) = uStack_b4;
  *(undefined4 *)(param_1 + 0xcf) = local_b0;
  *(undefined4 *)((longlong)param_1 + 0x67c) = uStack_ac;
  *(undefined4 *)(param_1 + 0xd0) = uStack_a8;
  *(undefined4 *)((longlong)param_1 + 0x684) = uStack_a4;
  param_1[0xd1] = local_a0;
  if ((local_a0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  plVar2 = local_38;
  puVar5 = local_98;
  puVar6 = param_1 + 0xd2;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x6e4) = local_44;
  *(undefined4 *)(param_1 + 0xdc) = local_48;
  param_1[0xdd] = local_40;
  param_1[0xde] = local_38;
  if (local_38 == (longlong *)0x0) {
    param_1[0xdf] = local_30;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    param_1[0xdf] = local_30;
    local_d8 = &PTR_FUN_149ed05f0;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  local_e0 = DAT_14c84635c;
  FUN_1412ce202(&local_d8);
  param_1[0xe0] = &PTR_FUN_149ed05f0;
  *(undefined4 *)(param_1 + 0xe1) = local_d0;
  *(undefined4 *)((longlong)param_1 + 0x70c) = uStack_cc;
  *(undefined4 *)(param_1 + 0xe2) = uStack_c8;
  *(undefined4 *)((longlong)param_1 + 0x714) = uStack_c4;
  *(undefined4 *)(param_1 + 0xe3) = local_c0;
  *(undefined4 *)((longlong)param_1 + 0x71c) = uStack_bc;
  *(undefined4 *)(param_1 + 0xe4) = uStack_b8;
  *(undefined4 *)((longlong)param_1 + 0x724) = uStack_b4;
  *(undefined4 *)(param_1 + 0xe5) = local_b0;
  *(undefined4 *)((longlong)param_1 + 0x72c) = uStack_ac;
  *(undefined4 *)(param_1 + 0xe6) = uStack_a8;
  *(undefined4 *)((longlong)param_1 + 0x734) = uStack_a4;
  param_1[0xe7] = local_a0;
  if ((local_a0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  plVar2 = local_38;
  puVar5 = local_98;
  puVar6 = param_1 + 0xe8;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x794) = local_44;
  *(undefined4 *)(param_1 + 0xf2) = local_48;
  param_1[0xf3] = local_40;
  param_1[0xf4] = local_38;
  if (local_38 == (longlong *)0x0) {
    param_1[0xf5] = local_30;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    param_1[0xf5] = local_30;
    local_d8 = &PTR_FUN_149ed05f0;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  local_e0 = DAT_14c84635c;
  FUN_1412ce202(&local_d8);
  param_1[0xf6] = &PTR_FUN_149ed05f0;
  *(undefined4 *)(param_1 + 0xf7) = local_d0;
  *(undefined4 *)((longlong)param_1 + 0x7bc) = uStack_cc;
  *(undefined4 *)(param_1 + 0xf8) = uStack_c8;
  *(undefined4 *)((longlong)param_1 + 0x7c4) = uStack_c4;
  *(undefined4 *)(param_1 + 0xf9) = local_c0;
  *(undefined4 *)((longlong)param_1 + 0x7cc) = uStack_bc;
  *(undefined4 *)(param_1 + 0xfa) = uStack_b8;
  *(undefined4 *)((longlong)param_1 + 0x7d4) = uStack_b4;
  *(undefined4 *)(param_1 + 0xfb) = local_b0;
  *(undefined4 *)((longlong)param_1 + 0x7dc) = uStack_ac;
  *(undefined4 *)(param_1 + 0xfc) = uStack_a8;
  *(undefined4 *)((longlong)param_1 + 0x7e4) = uStack_a4;
  param_1[0xfd] = local_a0;
  if ((local_a0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar5 = local_98;
  puVar6 = param_1 + 0xfe;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x844) = local_44;
  *(undefined4 *)(param_1 + 0x108) = local_48;
  param_1[0x109] = local_40;
  param_1[0x10a] = local_38;
  if (local_38 == (longlong *)0x0) {
    param_1[0x10b] = local_30;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    param_1[0x10b] = local_30;
    local_d8 = &PTR_FUN_149ed05f0;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_38 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar3 = (int *)((longlong)local_38 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
  }
  param_1[0x10c] = 0x3f800000;
  param_1[0x10d] = &DAT_3f8000003f800000;
  *(undefined2 *)(param_1 + 0x10e) = 2;
  *(undefined8 *)((longlong)param_1 + 0x874) = 0x3f800000;
  *(undefined1 **)((longlong)param_1 + 0x87c) = &DAT_3f8000003f800000;
  *(undefined2 *)((longlong)param_1 + 0x884) = 2;
  param_1[0x111] = 0x3f800000;
  param_1[0x112] = &DAT_3f8000003f800000;
  *(undefined2 *)(param_1 + 0x113) = 2;
  *(undefined8 *)((longlong)param_1 + 0x89c) = 0x3f800000;
  *(undefined1 **)((longlong)param_1 + 0x8a4) = &DAT_3f8000003f800000;
  *(undefined2 *)((longlong)param_1 + 0x8ac) = 2;
  param_1[0x116] = 0x3f800000;
  param_1[0x117] = &DAT_3f8000003f800000;
  *(undefined2 *)(param_1 + 0x118) = 2;
  *(undefined8 *)((longlong)param_1 + 0x8c4) = 0x3f800000;
  *(undefined1 **)((longlong)param_1 + 0x8cc) = &DAT_3f8000003f800000;
  *(undefined2 *)((longlong)param_1 + 0x8d4) = 2;
  param_1[0x11b] = 0x3f800000;
  param_1[0x11c] = &DAT_3f8000003f800000;
  *(undefined2 *)(param_1 + 0x11d) = 2;
  *(undefined1 **)((longlong)param_1 + 0x8ec) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x8f4) = &DAT_3f8000003f800000;
  *(undefined1 *)((longlong)param_1 + 0x8fc) = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x128] = 0;
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414c3ed0 FUN_1414c3ed0 body=3533 status=ok
// SIG undefined FUN_1414c3ed0(void)

longlong FUN_1414c3ed0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  byte bVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  uVar6 = *(undefined4 *)(param_2 + 0x1c);
  uVar7 = *(undefined4 *)(param_2 + 0x20);
  uVar8 = *(undefined4 *)(param_2 + 0x24);
  uVar9 = *(undefined4 *)(param_2 + 0x28);
  uVar10 = *(undefined4 *)(param_2 + 0x2c);
  uVar11 = *(undefined4 *)(param_2 + 0x30);
  uVar12 = *(undefined4 *)(param_2 + 0x34);
  uVar13 = *(undefined4 *)(param_2 + 0x3c);
  uVar14 = *(undefined4 *)(param_2 + 0x40);
  uVar15 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar13;
  *(undefined4 *)(param_1 + 0x40) = uVar14;
  *(undefined4 *)(param_1 + 0x44) = uVar15;
  *(undefined4 *)(param_1 + 0x28) = uVar9;
  *(undefined4 *)(param_1 + 0x2c) = uVar10;
  *(undefined4 *)(param_1 + 0x30) = uVar11;
  *(undefined4 *)(param_1 + 0x34) = uVar12;
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  *(undefined4 *)(param_1 + 0x20) = uVar7;
  *(undefined4 *)(param_1 + 0x24) = uVar8;
  lVar17 = *(longlong *)(param_2 + 0x48);
  if (DAT_14c950c29 == 1) {
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar17 = *(longlong *)(param_2 + 0x48);
    }
  }
  *(longlong *)(param_1 + 0x48) = lVar17;
  puVar18 = (undefined8 *)(param_2 + 0x50);
  puVar19 = (undefined8 *)(param_1 + 0x50);
  for (lVar17 = 10; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar19 = *puVar18;
    puVar18 = puVar18 + 1;
    puVar19 = puVar19 + 1;
  }
  *(undefined1 *)(param_1 + 0xa4) = *(undefined1 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  uVar3 = *(undefined8 *)(param_2 + 0xa8);
  lVar17 = *(longlong *)(param_2 + 0xb0);
  if (lVar17 != 0) {
    LOCK();
    *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = uVar3;
  *(longlong *)(param_1 + 0xb0) = lVar17;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  uVar5 = *(undefined4 *)(param_2 + 200);
  uVar6 = *(undefined4 *)(param_2 + 0xcc);
  uVar7 = *(undefined4 *)(param_2 + 0xd0);
  uVar8 = *(undefined4 *)(param_2 + 0xd4);
  uVar9 = *(undefined4 *)(param_2 + 0xd8);
  uVar10 = *(undefined4 *)(param_2 + 0xdc);
  uVar11 = *(undefined4 *)(param_2 + 0xe0);
  uVar12 = *(undefined4 *)(param_2 + 0xe4);
  uVar13 = *(undefined4 *)(param_2 + 0xec);
  uVar14 = *(undefined4 *)(param_2 + 0xf0);
  uVar15 = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xec) = uVar13;
  *(undefined4 *)(param_1 + 0xf0) = uVar14;
  *(undefined4 *)(param_1 + 0xf4) = uVar15;
  *(undefined4 *)(param_1 + 0xd8) = uVar9;
  *(undefined4 *)(param_1 + 0xdc) = uVar10;
  *(undefined4 *)(param_1 + 0xe0) = uVar11;
  *(undefined4 *)(param_1 + 0xe4) = uVar12;
  *(undefined4 *)(param_1 + 200) = uVar5;
  *(undefined4 *)(param_1 + 0xcc) = uVar6;
  *(undefined4 *)(param_1 + 0xd0) = uVar7;
  *(undefined4 *)(param_1 + 0xd4) = uVar8;
  lVar17 = *(longlong *)(param_2 + 0xf8);
  if (DAT_14c950c29 == 1) {
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar17 = *(longlong *)(param_2 + 0xf8);
    }
  }
  *(longlong *)(param_1 + 0xf8) = lVar17;
  puVar18 = (undefined8 *)(param_2 + 0x100);
  puVar19 = (undefined8 *)(param_1 + 0x100);
  for (lVar17 = 10; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar19 = *puVar18;
    puVar18 = puVar18 + 1;
    puVar19 = puVar19 + 1;
  }
  *(undefined1 *)(param_1 + 0x154) = *(undefined1 *)(param_2 + 0x154);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  uVar3 = *(undefined8 *)(param_2 + 0x158);
  lVar17 = *(longlong *)(param_2 + 0x160);
  if (lVar17 != 0) {
    LOCK();
    *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x158) = uVar3;
  *(longlong *)(param_1 + 0x160) = lVar17;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  uVar5 = *(undefined4 *)(param_2 + 0x178);
  uVar6 = *(undefined4 *)(param_2 + 0x17c);
  uVar7 = *(undefined4 *)(param_2 + 0x180);
  uVar8 = *(undefined4 *)(param_2 + 0x184);
  uVar9 = *(undefined4 *)(param_2 + 0x188);
  uVar10 = *(undefined4 *)(param_2 + 0x18c);
  uVar11 = *(undefined4 *)(param_2 + 400);
  uVar12 = *(undefined4 *)(param_2 + 0x194);
  uVar13 = *(undefined4 *)(param_2 + 0x19c);
  uVar14 = *(undefined4 *)(param_2 + 0x1a0);
  uVar15 = *(undefined4 *)(param_2 + 0x1a4);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
  *(undefined4 *)(param_1 + 0x19c) = uVar13;
  *(undefined4 *)(param_1 + 0x1a0) = uVar14;
  *(undefined4 *)(param_1 + 0x1a4) = uVar15;
  *(undefined4 *)(param_1 + 0x188) = uVar9;
  *(undefined4 *)(param_1 + 0x18c) = uVar10;
  *(undefined4 *)(param_1 + 400) = uVar11;
  *(undefined4 *)(param_1 + 0x194) = uVar12;
  *(undefined4 *)(param_1 + 0x178) = uVar5;
  *(undefined4 *)(param_1 + 0x17c) = uVar6;
  *(undefined4 *)(param_1 + 0x180) = uVar7;
  *(undefined4 *)(param_1 + 0x184) = uVar8;
  lVar17 = *(longlong *)(param_2 + 0x1a8);
  if (DAT_14c950c29 == 1) {
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar17 = *(longlong *)(param_2 + 0x1a8);
    }
  }
  *(longlong *)(param_1 + 0x1a8) = lVar17;
  puVar18 = (undefined8 *)(param_2 + 0x1b0);
  puVar19 = (undefined8 *)(param_1 + 0x1b0);
  for (lVar17 = 10; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar19 = *puVar18;
    puVar18 = puVar18 + 1;
    puVar19 = puVar19 + 1;
  }
  *(undefined1 *)(param_1 + 0x204) = *(undefined1 *)(param_2 + 0x204);
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_2 + 0x200);
  uVar3 = *(undefined8 *)(param_2 + 0x208);
  lVar17 = *(longlong *)(param_2 + 0x210);
  if (lVar17 != 0) {
    LOCK();
    *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x208) = uVar3;
  *(longlong *)(param_1 + 0x210) = lVar17;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0x218);
  uVar5 = *(undefined4 *)(param_2 + 0x228);
  uVar6 = *(undefined4 *)(param_2 + 0x22c);
  uVar7 = *(undefined4 *)(param_2 + 0x230);
  uVar8 = *(undefined4 *)(param_2 + 0x234);
  uVar9 = *(undefined4 *)(param_2 + 0x238);
  uVar10 = *(undefined4 *)(param_2 + 0x23c);
  uVar11 = *(undefined4 *)(param_2 + 0x240);
  uVar12 = *(undefined4 *)(param_2 + 0x244);
  uVar13 = *(undefined4 *)(param_2 + 0x24c);
  uVar14 = *(undefined4 *)(param_2 + 0x250);
  uVar15 = *(undefined4 *)(param_2 + 0x254);
  *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_2 + 0x248);
  *(undefined4 *)(param_1 + 0x24c) = uVar13;
  *(undefined4 *)(param_1 + 0x250) = uVar14;
  *(undefined4 *)(param_1 + 0x254) = uVar15;
  *(undefined4 *)(param_1 + 0x238) = uVar9;
  *(undefined4 *)(param_1 + 0x23c) = uVar10;
  *(undefined4 *)(param_1 + 0x240) = uVar11;
  *(undefined4 *)(param_1 + 0x244) = uVar12;
  *(undefined4 *)(param_1 + 0x228) = uVar5;
  *(undefined4 *)(param_1 + 0x22c) = uVar6;
  *(undefined4 *)(param_1 + 0x230) = uVar7;
  *(undefined4 *)(param_1 + 0x234) = uVar8;
  lVar17 = *(longlong *)(param_2 + 600);
  if (DAT_14c950c29 == 1) {
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar17 = *(longlong *)(param_2 + 600);
    }
  }
  *(longlong *)(param_1 + 600) = lVar17;
  puVar18 = (undefined8 *)(param_2 + 0x260);
  puVar19 = (undefined8 *)(param_1 + 0x260);
  for (lVar17 = 10; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar19 = *puVar18;
    puVar18 = puVar18 + 1;
    puVar19 = puVar19 + 1;
  }
  *(undefined1 *)(param_1 + 0x2b4) = *(undefined1 *)(param_2 + 0x2b4);
  *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(param_2 + 0x2b0);
  uVar3 = *(undefined8 *)(param_2 + 0x2b8);
  lVar17 = *(longlong *)(param_2 + 0x2c0);
  if (lVar17 != 0) {
    LOCK();
    *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x2c0);
  *(undefined8 *)(param_1 + 0x2b8) = uVar3;
  *(longlong *)(param_1 + 0x2c0) = lVar17;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_2 + 0x2c8);
  uVar5 = *(undefined4 *)(param_2 + 0x2d8);
  uVar6 = *(undefined4 *)(param_2 + 0x2dc);
  uVar7 = *(undefined4 *)(param_2 + 0x2e0);
  uVar8 = *(undefined4 *)(param_2 + 0x2e4);
  uVar9 = *(undefined4 *)(param_2 + 0x2e8);
  uVar10 = *(undefined4 *)(param_2 + 0x2ec);
  uVar11 = *(undefined4 *)(param_2 + 0x2f0);
  uVar12 = *(undefined4 *)(param_2 + 0x2f4);
  uVar13 = *(undefined4 *)(param_2 + 0x2fc);
  uVar14 = *(undefined4 *)(param_2 + 0x300);
  uVar15 = *(undefined4 *)(param_2 + 0x304);
  *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(param_2 + 0x2f8);
  *(undefined4 *)(param_1 + 0x2fc) = uVar13;
  *(undefined4 *)(param_1 + 0x300) = uVar14;
  *(undefined4 *)(param_1 + 0x304) = uVar15;
  *(undefined4 *)(param_1 + 0x2e8) = uVar9;
  *(undefined4 *)(param_1 + 0x2ec) = uVar10;
  *(undefined4 *)(param_1 + 0x2f0) = uVar11;
  *(undefined4 *)(param_1 + 0x2f4) = uVar12;
  *(undefined4 *)(param_1 + 0x2d8) = uVar5;
  *(undefined4 *)(param_1 + 0x2dc) = uVar6;
  *(undefined4 *)(param_1 + 0x2e0) = uVar7;
  *(undefined4 *)(param_1 + 0x2e4) = uVar8;
  lVar17 = *(longlong *)(param_2 + 0x308);
  if (DAT_14c950c29 == 1) {
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar17 = *(longlong *)(param_2 + 0x308);
    }
  }
  *(longlong *)(param_1 + 0x308) = lVar17;
  puVar18 = (undefined8 *)(param_2 + 0x310);
  puVar19 = (undefined8 *)(param_1 + 0x310);
  for (lVar17 = 10; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar19 = *puVar18;
    puVar18 = puVar18 + 1;
    puVar19 = puVar19 + 1;
  }
  *(undefined1 *)(param_1 + 0x364) = *(undefined1 *)(param_2 + 0x364);
  *(undefined4 *)(param_1 + 0x360) = *(undefined4 *)(param_2 + 0x360);
  uVar3 = *(undefined8 *)(param_2 + 0x368);
  lVar17 = *(longlong *)(param_2 + 0x370);
  if (lVar17 != 0) {
    LOCK();
    *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x370);
  *(undefined8 *)(param_1 + 0x368) = uVar3;
  *(longlong *)(param_1 + 0x370) = lVar17;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x378) = *(undefined8 *)(param_2 + 0x378);
  uVar5 = *(undefined4 *)(param_2 + 0x388);
  uVar6 = *(undefined4 *)(param_2 + 0x38c);
  uVar7 = *(undefined4 *)(param_2 + 0x390);
  uVar8 = *(undefined4 *)(param_2 + 0x394);
  uVar9 = *(undefined4 *)(param_2 + 0x398);
  uVar10 = *(undefined4 *)(param_2 + 0x39c);
  uVar11 = *(undefined4 *)(param_2 + 0x3a0);
  uVar12 = *(undefined4 *)(param_2 + 0x3a4);
  uVar13 = *(undefined4 *)(param_2 + 0x3ac);
  uVar14 = *(undefined4 *)(param_2 + 0x3b0);
  uVar15 = *(undefined4 *)(param_2 + 0x3b4);
  *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_2 + 0x3a8);
  *(undefined4 *)(param_1 + 0x3ac) = uVar13;
  *(undefined4 *)(param_1 + 0x3b0) = uVar14;
  *(undefined4 *)(param_1 + 0x3b4) = uVar15;
  *(undefined4 *)(param_1 + 0x398) = uVar9;
  *(undefined4 *)(param_1 + 0x39c) = uVar10;
  *(undefined4 *)(param_1 + 0x3a0) = uVar11;
  *(undefined4 *)(param_1 + 0x3a4) = uVar12;
  *(undefined4 *)(param_1 + 0x388) = uVar5;
  *(undefined4 *)(param_1 + 0x38c) = uVar6;
  *(undefined4 *)(param_1 + 0x390) = uVar7;
  *(undefined4 *)(param_1 + 0x394) = uVar8;
  lVar17 = *(longlong *)(param_2 + 0x3b8);
  if (DAT_14c950c29 == 1) {
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar17 = *(longlong *)(param_2 + 0x3b8);
    }
  }
  *(longlong *)(param_1 + 0x3b8) = lVar17;
  puVar18 = (undefined8 *)(param_2 + 0x3c0);
  puVar19 = (undefined8 *)(param_1 + 0x3c0);
  for (lVar17 = 10; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar19 = *puVar18;
    puVar18 = puVar18 + 1;
    puVar19 = puVar19 + 1;
  }
  *(undefined1 *)(param_1 + 0x414) = *(undefined1 *)(param_2 + 0x414);
  *(undefined4 *)(param_1 + 0x410) = *(undefined4 *)(param_2 + 0x410);
  uVar3 = *(undefined8 *)(param_2 + 0x418);
  lVar17 = *(longlong *)(param_2 + 0x420);
  if (lVar17 != 0) {
    LOCK();
    *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x420);
  *(undefined8 *)(param_1 + 0x418) = uVar3;
  *(longlong *)(param_1 + 0x420) = lVar17;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x428) = *(undefined8 *)(param_2 + 0x428);
  uVar5 = *(undefined4 *)(param_2 + 0x438);
  uVar6 = *(undefined4 *)(param_2 + 0x43c);
  uVar7 = *(undefined4 *)(param_2 + 0x440);
  uVar8 = *(undefined4 *)(param_2 + 0x444);
  uVar9 = *(undefined4 *)(param_2 + 0x448);
  uVar10 = *(undefined4 *)(param_2 + 0x44c);
  uVar11 = *(undefined4 *)(param_2 + 0x450);
  uVar12 = *(undefined4 *)(param_2 + 0x454);
  uVar13 = *(undefined4 *)(param_2 + 0x45c);
  uVar14 = *(undefined4 *)(param_2 + 0x460);
  uVar15 = *(undefined4 *)(param_2 + 0x464);
  *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_2 + 0x458);
  *(undefined4 *)(param_1 + 0x45c) = uVar13;
  *(undefined4 *)(param_1 + 0x460) = uVar14;
  *(undefined4 *)(param_1 + 0x464) = uVar15;
  *(undefined4 *)(param_1 + 0x448) = uVar9;
  *(undefined4 *)(param_1 + 0x44c) = uVar10;
  *(undefined4 *)(param_1 + 0x450) = uVar11;
  *(undefined4 *)(param_1 + 0x454) = uVar12;
  *(undefined4 *)(param_1 + 0x438) = uVar5;
  *(undefined4 *)(param_1 + 0x43c) = uVar6;
  *(undefined4 *)(param_1 + 0x440) = uVar7;
  *(undefined4 *)(param_1 + 0x444) = uVar8;
  lVar17 = *(longlong *)(param_2 + 0x468);
  if (DAT_14c950c29 == 1) {
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar17 = *(longlong *)(param_2 + 0x468);
    }
  }
  *(longlong *)(param_1 + 0x468) = lVar17;
  puVar18 = (undefined8 *)(param_2 + 0x470);
  puVar19 = (undefined8 *)(param_1 + 0x470);
  for (lVar17 = 10; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar19 = *puVar18;
    puVar18 = puVar18 + 1;
    puVar19 = puVar19 + 1;
  }
  *(undefined1 *)(param_1 + 0x4c4) = *(undefined1 *)(param_2 + 0x4c4);
  *(undefined4 *)(param_1 + 0x4c0) = *(undefined4 *)(param_2 + 0x4c0);
  uVar3 = *(undefined8 *)(param_2 + 0x4c8);
  lVar17 = *(longlong *)(param_2 + 0x4d0);
  if (lVar17 != 0) {
    LOCK();
    *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x4d0);
  *(undefined8 *)(param_1 + 0x4c8) = uVar3;
  *(longlong *)(param_1 + 0x4d0) = lVar17;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x4d8) = *(undefined8 *)(param_2 + 0x4d8);
  uVar5 = *(undefined4 *)(param_2 + 0x4e8);
  uVar6 = *(undefined4 *)(param_2 + 0x4ec);
  uVar7 = *(undefined4 *)(param_2 + 0x4f0);
  uVar8 = *(undefined4 *)(param_2 + 0x4f4);
  uVar9 = *(undefined4 *)(param_2 + 0x4f8);
  uVar10 = *(undefined4 *)(param_2 + 0x4fc);
  uVar11 = *(undefined4 *)(param_2 + 0x500);
  uVar12 = *(undefined4 *)(param_2 + 0x504);
  uVar13 = *(undefined4 *)(param_2 + 0x50c);
  uVar14 = *(undefined4 *)(param_2 + 0x510);
  uVar15 = *(undefined4 *)(param_2 + 0x514);
  *(undefined4 *)(param_1 + 0x508) = *(undefined4 *)(param_2 + 0x508);
  *(undefined4 *)(param_1 + 0x50c) = uVar13;
  *(undefined4 *)(param_1 + 0x510) = uVar14;
  *(undefined4 *)(param_1 + 0x514) = uVar15;
  *(undefined4 *)(param_1 + 0x4f8) = uVar9;
  *(undefined4 *)(param_1 + 0x4fc) = uVar10;
  *(undefined4 *)(param_1 + 0x500) = uVar11;
  *(undefined4 *)(param_1 + 0x504) = uVar12;
  *(undefined4 *)(param_1 + 0x4e8) = uVar5;
  *(undefined4 *)(param_1 + 0x4ec) = uVar6;
  *(undefined4 *)(param_1 + 0x4f0) = uVar7;
  *(undefined4 *)(param_1 + 0x4f4) = uVar8;
  lVar17 = *(longlong *)(param_2 + 0x518);
  if (DAT_14c950c29 == 1) {
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar17 = *(longlong *)(param_2 + 0x518);
    }
  }
  *(longlong *)(param_1 + 0x518) = lVar17;
  puVar18 = (undefined8 *)(param_2 + 0x520);
  puVar19 = (undefined8 *)(param_1 + 0x520);
  for (lVar17 = 10; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar19 = *puVar18;
    puVar18 = puVar18 + 1;
    puVar19 = puVar19 + 1;
  }
  *(undefined1 *)(param_1 + 0x574) = *(undefined1 *)(param_2 + 0x574);
  *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(param_2 + 0x570);
  uVar3 = *(undefined8 *)(param_2 + 0x578);
  lVar17 = *(longlong *)(param_2 + 0x580);
  if (lVar17 != 0) {
    LOCK();
    *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x580);
  *(undefined8 *)(param_1 + 0x578) = uVar3;
  *(longlong *)(param_1 + 0x580) = lVar17;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x588) = *(undefined8 *)(param_2 + 0x588);
  uVar5 = *(undefined4 *)(param_2 + 0x598);
  uVar6 = *(undefined4 *)(param_2 + 0x59c);
  uVar7 = *(undefined4 *)(param_2 + 0x5a0);
  uVar8 = *(undefined4 *)(param_2 + 0x5a4);
  uVar9 = *(undefined4 *)(param_2 + 0x5a8);
  uVar10 = *(undefined4 *)(param_2 + 0x5ac);
  uVar11 = *(undefined4 *)(param_2 + 0x5b0);
  uVar12 = *(undefined4 *)(param_2 + 0x5b4);
  uVar13 = *(undefined4 *)(param_2 + 0x5bc);
  uVar14 = *(undefined4 *)(param_2 + 0x5c0);
  uVar15 = *(undefined4 *)(param_2 + 0x5c4);
  *(undefined4 *)(param_1 + 0x5b8) = *(undefined4 *)(param_2 + 0x5b8);
  *(undefined4 *)(param_1 + 0x5bc) = uVar13;
  *(undefined4 *)(param_1 + 0x5c0) = uVar14;
  *(undefined4 *)(param_1 + 0x5c4) = uVar15;
  *(undefined4 *)(param_1 + 0x5a8) = uVar9;
  *(undefined4 *)(param_1 + 0x5ac) = uVar10;
  *(undefined4 *)(param_1 + 0x5b0) = uVar11;
  *(undefined4 *)(param_1 + 0x5b4) = uVar12;
  *(undefined4 *)(param_1 + 0x598) = uVar5;
  *(undefined4 *)(param_1 + 0x59c) = uVar6;
  *(undefined4 *)(param_1 + 0x5a0) = uVar7;
  *(undefined4 *)(param_1 + 0x5a4) = uVar8;
  lVar17 = *(longlong *)(param_2 + 0x5c8);
  if (DAT_14c950c29 == 1) {
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar17 = *(longlong *)(param_2 + 0x5c8);
    }
  }
  *(longlong *)(param_1 + 0x5c8) = lVar17;
  puVar18 = (undefined8 *)(param_2 + 0x5d0);
  puVar19 = (undefined8 *)(param_1 + 0x5d0);
  for (lVar17 = 10; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar19 = *puVar18;
    puVar18 = puVar18 + 1;
    puVar19 = puVar19 + 1;
  }
  *(undefined1 *)(param_1 + 0x624) = *(undefined1 *)(param_2 + 0x624);
  *(undefined4 *)(param_1 + 0x620) = *(undefined4 *)(param_2 + 0x620);
  uVar3 = *(undefined8 *)(param_2 + 0x628);
  lVar17 = *(longlong *)(param_2 + 0x630);
  if (lVar17 != 0) {
    LOCK();
    *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x630);
  *(undefined8 *)(param_1 + 0x628) = uVar3;
  *(longlong *)(param_1 + 0x630) = lVar17;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x638) = *(undefined8 *)(param_2 + 0x638);
  uVar3 = *(undefined8 *)(param_2 + 0x648);
  *(undefined8 *)(param_1 + 0x640) = *(undefined8 *)(param_2 + 0x640);
  *(undefined8 *)(param_1 + 0x648) = uVar3;
  uVar5 = *(undefined4 *)(param_2 + 0x658);
  uVar6 = *(undefined4 *)(param_2 + 0x65c);
  uVar7 = *(undefined4 *)(param_2 + 0x660);
  uVar8 = *(undefined4 *)(param_2 + 0x664);
  uVar9 = *(undefined4 *)(param_2 + 0x668);
  uVar10 = *(undefined4 *)(param_2 + 0x66c);
  uVar11 = *(undefined4 *)(param_2 + 0x670);
  uVar12 = *(undefined4 *)(param_2 + 0x674);
  uVar13 = *(undefined4 *)(param_2 + 0x67c);
  uVar14 = *(undefined4 *)(param_2 + 0x680);
  uVar15 = *(undefined4 *)(param_2 + 0x684);
  *(undefined4 *)(param_1 + 0x678) = *(undefined4 *)(param_2 + 0x678);
  *(undefined4 *)(param_1 + 0x67c) = uVar13;
  *(undefined4 *)(param_1 + 0x680) = uVar14;
  *(undefined4 *)(param_1 + 0x684) = uVar15;
  *(undefined4 *)(param_1 + 0x668) = uVar9;
  *(undefined4 *)(param_1 + 0x66c) = uVar10;
  *(undefined4 *)(param_1 + 0x670) = uVar11;
  *(undefined4 *)(param_1 + 0x674) = uVar12;
  *(undefined4 *)(param_1 + 0x658) = uVar5;
  *(undefined4 *)(param_1 + 0x65c) = uVar6;
  *(undefined4 *)(param_1 + 0x660) = uVar7;
  *(undefined4 *)(param_1 + 0x664) = uVar8;
  lVar17 = *(longlong *)(param_2 + 0x688);
  if (DAT_14c950c29 == 1) {
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar17 = *(longlong *)(param_2 + 0x688);
    }
  }
  *(longlong *)(param_1 + 0x688) = lVar17;
  puVar18 = (undefined8 *)(param_2 + 0x690);
  puVar19 = (undefined8 *)(param_1 + 0x690);
  for (lVar17 = 10; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar19 = *puVar18;
    puVar18 = puVar18 + 1;
    puVar19 = puVar19 + 1;
  }
  *(undefined1 *)(param_1 + 0x6e4) = *(undefined1 *)(param_2 + 0x6e4);
  *(undefined4 *)(param_1 + 0x6e0) = *(undefined4 *)(param_2 + 0x6e0);
  uVar3 = *(undefined8 *)(param_2 + 0x6e8);
  lVar17 = *(longlong *)(param_2 + 0x6f0);
  if (lVar17 != 0) {
    LOCK();
    *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x6f0);
  *(undefined8 *)(param_1 + 0x6e8) = uVar3;
  *(longlong *)(param_1 + 0x6f0) = lVar17;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x6f8) = *(undefined8 *)(param_2 + 0x6f8);
  uVar5 = *(undefined4 *)(param_2 + 0x708);
  uVar6 = *(undefined4 *)(param_2 + 0x70c);
  uVar7 = *(undefined4 *)(param_2 + 0x710);
  uVar8 = *(undefined4 *)(param_2 + 0x714);
  uVar9 = *(undefined4 *)(param_2 + 0x718);
  uVar10 = *(undefined4 *)(param_2 + 0x71c);
  uVar11 = *(undefined4 *)(param_2 + 0x720);
  uVar12 = *(undefined4 *)(param_2 + 0x724);
  uVar13 = *(undefined4 *)(param_2 + 0x72c);
  uVar14 = *(undefined4 *)(param_2 + 0x730);
  uVar15 = *(undefined4 *)(param_2 + 0x734);
  *(undefined4 *)(param_1 + 0x728) = *(undefined4 *)(param_2 + 0x728);
  *(undefined4 *)(param_1 + 0x72c) = uVar13;
  *(undefined4 *)(param_1 + 0x730) = uVar14;
  *(undefined4 *)(param_1 + 0x734) = uVar15;
  *(undefined4 *)(param_1 + 0x718) = uVar9;
  *(undefined4 *)(param_1 + 0x71c) = uVar10;
  *(undefined4 *)(param_1 + 0x720) = uVar11;
  *(undefined4 *)(param_1 + 0x724) = uVar12;
  *(undefined4 *)(param_1 + 0x708) = uVar5;
  *(undefined4 *)(param_1 + 0x70c) = uVar6;
  *(undefined4 *)(param_1 + 0x710) = uVar7;
  *(undefined4 *)(param_1 + 0x714) = uVar8;
  lVar17 = *(longlong *)(param_2 + 0x738);
  if (DAT_14c950c29 == 1) {
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar17 = *(longlong *)(param_2 + 0x738);
    }
  }
  *(longlong *)(param_1 + 0x738) = lVar17;
  puVar18 = (undefined8 *)(param_2 + 0x740);
  puVar19 = (undefined8 *)(param_1 + 0x740);
  for (lVar17 = 10; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar19 = *puVar18;
    puVar18 = puVar18 + 1;
    puVar19 = puVar19 + 1;
  }
  *(undefined1 *)(param_1 + 0x794) = *(undefined1 *)(param_2 + 0x794);
  *(undefined4 *)(param_1 + 0x790) = *(undefined4 *)(param_2 + 0x790);
  uVar3 = *(undefined8 *)(param_2 + 0x798);
  lVar17 = *(longlong *)(param_2 + 0x7a0);
  if (lVar17 != 0) {
    LOCK();
    *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x7a0);
  *(undefined8 *)(param_1 + 0x798) = uVar3;
  *(longlong *)(param_1 + 0x7a0) = lVar17;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x7a8) = *(undefined8 *)(param_2 + 0x7a8);
  uVar5 = *(undefined4 *)(param_2 + 0x7b8);
  uVar6 = *(undefined4 *)(param_2 + 0x7bc);
  uVar7 = *(undefined4 *)(param_2 + 0x7c0);
  uVar8 = *(undefined4 *)(param_2 + 0x7c4);
  uVar9 = *(undefined4 *)(param_2 + 0x7c8);
  uVar10 = *(undefined4 *)(param_2 + 0x7cc);
  uVar11 = *(undefined4 *)(param_2 + 2000);
  uVar12 = *(undefined4 *)(param_2 + 0x7d4);
  uVar13 = *(undefined4 *)(param_2 + 0x7dc);
  uVar14 = *(undefined4 *)(param_2 + 0x7e0);
  uVar15 = *(undefined4 *)(param_2 + 0x7e4);
  *(undefined4 *)(param_1 + 0x7d8) = *(undefined4 *)(param_2 + 0x7d8);
  *(undefined4 *)(param_1 + 0x7dc) = uVar13;
  *(undefined4 *)(param_1 + 0x7e0) = uVar14;
  *(undefined4 *)(param_1 + 0x7e4) = uVar15;
  *(undefined4 *)(param_1 + 0x7c8) = uVar9;
  *(undefined4 *)(param_1 + 0x7cc) = uVar10;
  *(undefined4 *)(param_1 + 2000) = uVar11;
  *(undefined4 *)(param_1 + 0x7d4) = uVar12;
  *(undefined4 *)(param_1 + 0x7b8) = uVar5;
  *(undefined4 *)(param_1 + 0x7bc) = uVar6;
  *(undefined4 *)(param_1 + 0x7c0) = uVar7;
  *(undefined4 *)(param_1 + 0x7c4) = uVar8;
  lVar17 = *(longlong *)(param_2 + 0x7e8);
  if (DAT_14c950c29 == 1) {
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar17 = *(longlong *)(param_2 + 0x7e8);
    }
  }
  *(longlong *)(param_1 + 0x7e8) = lVar17;
  puVar18 = (undefined8 *)(param_2 + 0x7f0);
  puVar19 = (undefined8 *)(param_1 + 0x7f0);
  for (lVar17 = 10; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar19 = *puVar18;
    puVar18 = puVar18 + 1;
    puVar19 = puVar19 + 1;
  }
  *(undefined1 *)(param_1 + 0x844) = *(undefined1 *)(param_2 + 0x844);
  *(undefined4 *)(param_1 + 0x840) = *(undefined4 *)(param_2 + 0x840);
  uVar3 = *(undefined8 *)(param_2 + 0x848);
  lVar17 = *(longlong *)(param_2 + 0x850);
  if (lVar17 != 0) {
    LOCK();
    *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x850);
  *(undefined8 *)(param_1 + 0x848) = uVar3;
  *(longlong *)(param_1 + 0x850) = lVar17;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x858) = *(undefined8 *)(param_2 + 0x858);
  memcpy((void *)(param_1 + 0x860),(void *)(param_2 + 0x860),0xa0);
  lVar17 = *(longlong *)(param_2 + 0x900);
  if (DAT_14c950c29 == 1) {
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar17 = *(longlong *)(param_2 + 0x900);
    }
  }
  bVar16 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x900) = lVar17;
  *(undefined8 *)(param_1 + 0x908) = *(undefined8 *)(param_2 + 0x908);
  *(undefined8 *)(param_1 + 0x910) = *(undefined8 *)(param_2 + 0x910);
  lVar17 = *(longlong *)(param_2 + 0x918);
  if ((bVar16 & 1) != 0) {
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar17 = *(longlong *)(param_2 + 0x918);
      bVar16 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x918) = lVar17;
  *(undefined8 *)(param_1 + 0x920) = *(undefined8 *)(param_2 + 0x920);
  *(undefined8 *)(param_1 + 0x928) = *(undefined8 *)(param_2 + 0x928);
  lVar17 = *(longlong *)(param_2 + 0x930);
  if ((bVar16 & 1) != 0) {
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar17 = *(longlong *)(param_2 + 0x930);
    }
  }
  *(longlong *)(param_1 + 0x930) = lVar17;
  *(undefined8 *)(param_1 + 0x938) = *(undefined8 *)(param_2 + 0x938);
  *(undefined8 *)(param_1 + 0x940) = *(undefined8 *)(param_2 + 0x940);
  return param_1;
}



// FUNCTION 1414c4c9e FUN_1414c4c9e body=932 status=ok
// SIG undefined FUN_1414c4c9e(void)

ulonglong FUN_1414c4c9e(undefined8 param_1,uint *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  byte *pbVar4;
  longlong *plVar5;
  byte *pbVar6;
  uint uVar7;
  char cVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plVar13;
  int iVar14;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  uint local_60;
  undefined4 uStack_5c;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = DAT_14cb8dd60;
  local_68 = DAT_14cb8dd68;
  FUN_1448075d0(&local_60);
  uVar7 = local_60;
  uVar3 = *param_2;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  uVar12 = CONCAT71((int7)((ulonglong)&local_60 >> 8),1);
  if (uVar3 == uVar7) goto LAB_1414c4f4a;
  if (DAT_14cb80ee0 != '\0') {
    uVar12 = 0;
    goto LAB_1414c4f4a;
  }
  if (*param_3 == 0) {
    puVar9 = &DAT_14c9a1308;
  }
  else {
    puVar9 = (undefined8 *)FUN_1446e60f4(*param_3,&DAT_14cb895d0);
  }
  pbVar4 = (byte *)*puVar9;
  plVar5 = (longlong *)puVar9[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if ((pbVar4 == (byte *)0x0) || ((*pbVar4 & 0x6b) != 3)) {
    uVar12 = 0;
  }
  else {
    local_68 = DAT_14cbe7070;
    local_70 = DAT_14cbe7068;
    FUN_1448075d0(&local_60);
    if ((*pbVar4 & 2) == 0) {
      plVar10 = &DAT_14c9a1288;
    }
    else {
      plVar10 = (longlong *)(*(longlong *)(pbVar4 + 8) + 0x18);
    }
    if ((int)plVar10[2] != *(int *)((longlong)plVar10 + 0x3c)) {
      plVar11 = plVar10 + 8;
      if ((longlong *)plVar10[9] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar10[9];
      }
      iVar14 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar10[10] - 1U & local_60) * 4);
      if (iVar14 != -1) {
        do {
          lVar2 = *plVar10 + (longlong)iVar14 * 0x40;
          if (*(uint *)(*plVar10 + (longlong)iVar14 * 0x40) == local_60) {
            if ((((lVar2 != 0) &&
                 (puVar9 = (undefined8 *)(lVar2 + 0x28), puVar9 != (undefined8 *)0x0)) &&
                ((byte *)*puVar9 != (byte *)0x0)) && ((*(byte *)*puVar9 & 0x40) == 0))
            goto LAB_1414c4def;
            break;
          }
          iVar14 = *(int *)(lVar2 + 0x38);
        } while (iVar14 != -1);
      }
    }
    puVar9 = &DAT_14c9a1308;
LAB_1414c4def:
    pbVar6 = (byte *)*puVar9;
    plVar10 = (longlong *)puVar9[1];
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if ((pbVar6 == (byte *)0x0) || ((*pbVar6 & 3) == 0)) {
LAB_1414c4e1c:
      local_68 = DAT_14cbe66a0;
      local_70 = DAT_14cbe6698;
      FUN_1448075d0(&local_60);
      if ((*pbVar4 & 2) == 0) {
        plVar11 = &DAT_14c9a1288;
      }
      else {
        plVar11 = (longlong *)(*(longlong *)(pbVar4 + 8) + 0x18);
      }
      if ((int)plVar11[2] != *(int *)((longlong)plVar11 + 0x3c)) {
        plVar13 = plVar11 + 8;
        if ((longlong *)plVar11[9] != (longlong *)0x0) {
          plVar13 = (longlong *)plVar11[9];
        }
        iVar14 = *(int *)((longlong)plVar13 + (ulonglong)((int)plVar11[10] - 1U & local_60) * 4);
        if (iVar14 != -1) {
          do {
            lVar2 = *plVar11 + (longlong)iVar14 * 0x40;
            if (*(uint *)(*plVar11 + (longlong)iVar14 * 0x40) == local_60) {
              if (((lVar2 != 0) &&
                  (puVar9 = (undefined8 *)(lVar2 + 0x28), puVar9 != (undefined8 *)0x0)) &&
                 (((byte *)*puVar9 != (byte *)0x0 && ((*(byte *)*puVar9 & 0x40) == 0))))
              goto LAB_1414c4ec1;
              break;
            }
            iVar14 = *(int *)(lVar2 + 0x38);
          } while (iVar14 != -1);
        }
      }
      puVar9 = &DAT_14c9a1308;
LAB_1414c4ec1:
      pbVar4 = (byte *)*puVar9;
      plVar11 = (longlong *)puVar9[1];
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      if ((pbVar4 == (byte *)0x0) || ((*pbVar4 & 0x6b) != 1)) {
        uVar12 = 0;
      }
      else {
        local_70 = 0;
        FUN_1400bc2ec(pbVar4,&local_60);
        uVar12 = CONCAT71((int7)((ulonglong)pbVar4 >> 8),
                          CONCAT44(uStack_5c,local_60) != DAT_14cb71810 &&
                          CONCAT44(uStack_5c,local_60) != 0);
      }
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar11 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
    }
    else {
      uVar12 = 0;
      cVar8 = FUN_14000584e(pbVar6,0);
      if (cVar8 == '\0') goto LAB_1414c4e1c;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar10 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar5 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_1414c4f4a:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1414c5044 FUN_1414c5044 body=305 status=ok
// SIG undefined FUN_1414c5044(void)

void FUN_1414c5044(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = FUN_1405b657a();
  if ((lVar5 == 0) || (*(char *)(lVar5 + 0x178) != '\x03')) goto LAB_1414c514d;
  lVar5 = param_2[1];
  if (lVar5 == 0) {
    uVar6 = FUN_1406eea5e();
    lVar5 = FUN_14477b664(uVar6);
    param_2[1] = lVar5;
  }
  if (param_2[2] == 0) {
    if ((lVar5 == 0) || (*param_2 == 0)) goto LAB_1414c514d;
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 != '\0') {
        uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar5 = FUN_144aff482(uVar6,param_2);
        param_2[2] = lVar5;
        if (lVar5 == 0) goto LAB_1414c514d;
        goto LAB_1414c509c;
      }
    }
    param_2[2] = 0;
  }
  else {
LAB_1414c509c:
    FUN_1406eed88(param_1,&local_30,param_2,0);
    if (local_30 != (longlong *)0x0) {
      uVar4 = (**(code **)(*local_30 + 0x30))(local_30);
      cVar3 = FUN_140d4ce5c(local_30,uVar4);
      if (cVar3 != '\0') {
        FUN_140df6042(param_1);
      }
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_28 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)local_28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_28 + 0x10))(local_28);
        }
      }
    }
  }
LAB_1414c514d:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414c5176 FUN_1414c5176 body=1131 status=ok
// SIG undefined FUN_1414c5176(void)

void FUN_1414c5176(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined1 local_a0 [8];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74;
  longlong local_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar5 = (longlong *)FUN_1410d9680();
  if (plVar5 != (longlong *)0x0 && param_2 != 0) {
    lVar6 = FUN_1410d9708(param_2);
    if (lVar6 != 0) {
      FUN_1410d9770(param_1,&local_70);
      if (DAT_14c947fe0 == 0) {
        lVar8 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar8);
        DAT_14c947fe0 = lVar8;
      }
      FUN_140045924(DAT_14c947fe0,local_a0,&local_70,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if ((char)plVar5[9] == '\x01') {
        FUN_1400bc96c(lVar6 + 0xce0,local_a0);
      }
      if (*(char *)((longlong)plVar5 + 0x49) == '\x01') {
        FUN_1400bc96c(lVar6 + 0xcb8,local_a0);
      }
      if ((*(char *)((longlong)plVar5 + 0x4a) == '\x01') && (*(int *)((longlong)plVar5 + 0x4c) != 0)
         ) {
        FUN_141068b5c(param_1,&local_70,(longlong)plVar5 + 0x4c);
        cVar4 = FUN_1401144ce(&local_70);
        if (cVar4 != '\0') {
          FUN_140ac173c(&local_c8,&local_70);
          *(undefined4 *)(param_1 + 0x70) = local_b8;
          *(undefined4 *)(param_1 + 0x74) = uStack_b4;
          *(undefined4 *)(param_1 + 0x78) = uStack_b0;
          *(undefined4 *)(param_1 + 0x7c) = uStack_ac;
          *(undefined4 *)(param_1 + 0x60) = local_c8;
          *(undefined4 *)(param_1 + 100) = uStack_c4;
          *(undefined4 *)(param_1 + 0x68) = uStack_c0;
          *(undefined4 *)(param_1 + 0x6c) = uStack_bc;
          *(undefined4 *)(param_1 + 0x80) = local_a8;
          local_90 = *(undefined4 *)(param_1 + 0x68);
          local_98 = *(undefined8 *)(param_1 + 0x60);
          local_8c = *(undefined8 *)(param_1 + 0x6c);
          local_84 = *(undefined4 *)(param_1 + 0x74);
          local_80 = *(undefined8 *)(param_1 + 0x78);
          local_78 = *(undefined4 *)(param_1 + 0x80);
          local_74 = 1;
          FUN_1410d991c(lVar6);
        }
        if (local_48 != 0) {
          FUN_1400020a8();
        }
      }
      FUN_1410d9770(param_1,&local_70);
      uVar7 = FUN_141068cca(param_1);
      (**(code **)(*plVar5 + 0x38))(plVar5,&local_c8,uVar7,&local_70);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      lVar8 = CONCAT44(uStack_c4,local_c8);
      if (lVar8 != 0) {
        *(longlong *)(param_1 + 0x84) = lVar8;
        local_68 = (longlong *)0x0;
        uStack_60 = 0;
        local_70 = lVar8;
        FUN_1417ffa7c(lVar6,local_a0,&local_70,1);
      }
      lVar8 = plVar5[0xc];
      if (lVar8 != 0) {
        local_d0 = plVar5[0xd];
        if (local_d0 != 0) {
          LOCK();
          *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
          UNLOCK();
        }
        plVar9 = *(longlong **)(param_1 + 0x98);
        *(longlong *)(param_1 + 0x90) = lVar8;
        *(longlong *)(param_1 + 0x98) = local_d0;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar9 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
          lVar8 = *(longlong *)(param_1 + 0x90);
          local_d0 = *(longlong *)(param_1 + 0x98);
        }
        if (local_d0 != 0) {
          LOCK();
          *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
          UNLOCK();
        }
        local_d8 = lVar8;
        FUN_148994192(lVar6,&local_d8);
      }
      lVar8 = plVar5[0xe];
      if (lVar8 != 0) {
        plVar9 = (longlong *)plVar5[0xf];
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        plVar3 = *(longlong **)(lVar6 + 0xe48);
        *(longlong *)(lVar6 + 0xe40) = lVar8;
        *(longlong **)(lVar6 + 0xe48) = plVar9;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar9 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
      }
      if ((char)plVar5[0x7f] == '\x01') {
        lVar8 = FUN_14035fbb0(param_2);
        if (lVar8 != 0) {
          plVar9 = (longlong *)0x0;
          if ((char)plVar5[0x7f] != '\0') {
            plVar9 = plVar5 + 0x10;
          }
          FUN_147f586bc(lVar8,plVar9);
        }
      }
      if ((int)plVar5[0x86] != 0) {
        FUN_14180001c(lVar6,local_a0,plVar5 + 0x85);
      }
      if ((char)plVar5[0x84] == '\x01') {
        FUN_147e2457a(lVar6 + 0x870,&DAT_14cb8c1b8,plVar5 + 0x80);
      }
      FUN_1448c1924(lVar6,&local_70);
      if ((local_70 != 0) && (*(int *)(local_70 + 500) == 5)) {
        plVar5 = (longlong *)FUN_1400d690e(local_70 + 0x1f8);
        if (plVar5 != (longlong *)0x0) {
          cVar4 = (**(code **)(*plVar5 + 0x68))(plVar5);
          if (cVar4 == '\0') {
            FUN_140929af0(local_70);
          }
        }
      }
      plVar5 = local_68;
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_68 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414c55e2 FUN_1414c55e2 body=498 status=ok
// SIG undefined FUN_1414c55e2(void)

void FUN_1414c55e2(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined2 *puVar10;
  longlong lVar11;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  undefined2 *local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = (**(code **)(*param_1 + 0x180))();
  if ((((lVar7 != 0) && (*(longlong *)(lVar7 + 0x1f0) != 0)) &&
      (lVar7 = FUN_1400d6ce6(), param_3 != 0)) && (lVar7 != 0)) {
    local_70 = param_3;
    FUN_1449027d0(param_1,&local_58);
    plVar4 = *(longlong **)(local_58 + 0x230);
    AcquireSRWLockExclusive((PSRWLOCK)(plVar4 + 4));
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
        }
      }
    }
    *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
    if ((longlong)(int)plVar4[1] != 0) {
      lVar7 = *plVar4;
      iVar3 = *(int *)(param_2 + 1);
      lVar8 = (longlong)(int)plVar4[1] * -0x118;
      lVar9 = 0xe8;
      lVar11 = 0;
      do {
        iVar6 = *(int *)(lVar7 + lVar9);
        if (1 < iVar6) {
          if (iVar6 == iVar3) {
            local_78 = lVar8;
            iVar6 = wcscmp(*(wchar_t **)(lVar7 + -8 + lVar9),(wchar_t *)*param_2);
            lVar8 = local_78;
            if (iVar6 == 0) goto LAB_1414c5708;
          }
          else if (iVar6 + iVar3 == 1) {
LAB_1414c5708:
            if (lVar7 - lVar11 != 0) {
              local_68 = (undefined2 *)0x0;
              uStack_60 = 0;
              FUN_1401031ac(local_70,0,&local_68);
              puVar10 = local_68;
              if ((int)uStack_60 == 0) {
                puVar10 = &DAT_149dfb77a;
              }
              FUN_140002266(&local_58,L"TextureRenderTarget2D\'%s\'",puVar10);
              if (local_68 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              cVar5 = FUN_1449a0272((lVar7 - lVar11) + 0x38,&local_58);
              if (cVar5 != '\0') {
                *(int *)(plVar4 + 3) = (int)plVar4[3] + 1;
              }
              if (local_58 != 0) {
                FUN_1400020a8();
              }
            }
            break;
          }
        }
        lVar11 = lVar11 + -0x118;
        lVar9 = lVar9 + 0x118;
      } while (lVar8 != lVar11);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(plVar4 + 4));
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414c57d6 FUN_1414c57d6 body=14 status=ok
// SIG undefined FUN_1414c57d6(void)

undefined8 * FUN_1414c57d6(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0xa24);
  return param_2;
}



// FUNCTION 1414c57e4 FUN_1414c57e4 body=20 status=ok
// SIG undefined FUN_1414c57e4(void)

ulonglong FUN_1414c57e4(void)

{
  return CONCAT71((int7)((ulonglong)DAT_14c9ecd08 >> 8),(*(int *)(DAT_14c9ecd08 + 4) == 0) << 4) |
         10;
}



// FUNCTION 1414c57f8 FUN_1414c57f8 body=66 status=ok
// SIG undefined FUN_1414c57f8(void)

bool FUN_1414c57f8(undefined8 param_1)

{
  char cVar1;
  
  if (((0 < *(int *)(DAT_14c9f9800 + 4)) && (cVar1 = FUN_144a7ebcb(), cVar1 != '\0')) &&
     (cVar1 = FUN_141767a62(param_1), cVar1 != '\0')) {
    return *(int *)(DAT_14c9fa1e8 + 4) != 0;
  }
  return false;
}



// FUNCTION 1414c583a FUN_1414c583a body=334 status=ok
// SIG undefined FUN_1414c583a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1414c583a(uint param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca01e78) {
    FUN_144b3d300(&DAT_14ca01e78);
    if (DAT_14ca01e78 == -1) {
      _DAT_14ca01db0 = L"Depth";
      _DAT_14ca01db8 = 4;
      DAT_14ca01dba = 0;
      _DAT_14ca01dc0 = 0x3ff0000000000000;
      _DAT_14ca01dc8 = 0;
      uRam000000014ca01dd0 = 0;
      _DAT_14ca01dd8 = L"Albedo";
      _DAT_14ca01de0 = 0x3825;
      DAT_14ca01de2 = 0x30;
      _DAT_14ca01de8 = 0;
      uRam000000014ca01df0 = 0;
      _DAT_14ca01df8 = 0;
      _DAT_14ca01e00 = L"Opacity";
      _DAT_14ca01e08 = 3;
      DAT_14ca01e0a = 0;
      _DAT_14ca01e10 = 0x3ff0000000000000;
      _DAT_14ca01e18 = 0;
      uRam000000014ca01e20 = 0;
      _DAT_14ca01e28 = L"Normal";
      _DAT_14ca01e30 = 0x1728;
      DAT_14ca01e32 = 0x30;
      _DAT_14ca01e48 = 0;
      _DAT_14ca01e38 = 0;
      uRam000000014ca01e40 = 0;
      _DAT_14ca01e50 = L"Emissive";
      _DAT_14ca01e58 = 0x371a;
      DAT_14ca01e5a = 0x30;
      _DAT_14ca01e70 = 0;
      _DAT_14ca01e60 = 0;
      uRam000000014ca01e68 = 0;
      _Init_thread_footer(&DAT_14ca01e78);
    }
  }
  return &DAT_14ca01db0 + ((ulonglong)param_1 & 0xff) * 0x28;
}



// FUNCTION 1414c5988 FUN_1414c5988 body=312 status=ok
// SIG undefined FUN_1414c5988(void)

void FUN_1414c5988(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar6 = (uint)param_2 & 0xffff;
    lVar4 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x48);
    }
    iVar7 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar6) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar7 * 0x48);
        if (*plVar1 == param_2) {
          if ((plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) &&
             ((char)plVar1[7] == '\x04')) {
            puVar5 = &local_38;
            local_20 = 0x18;
            local_38 = *param_3;
            uStack_34 = param_3[1];
            uStack_30 = param_3[2];
            uStack_2c = param_3[3];
            local_28 = *(undefined8 *)(param_3 + 4);
            local_18 = 4;
            FUN_1414c5ac2(plVar1 + 1,puVar5);
            pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
            if (pcVar2 != (code *)0x0) {
              if (0x18 < local_20) {
                puVar5 = (undefined4 *)CONCAT44(uStack_34,local_38);
              }
              (*pcVar2)(puVar5);
            }
            if (0x18 < local_20) {
              FUN_1400020a8(CONCAT44(uStack_34,local_38));
            }
          }
          break;
        }
        iVar7 = (int)plVar1[8];
      } while (iVar7 != -1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414c5ac2 FUN_1414c5ac2 body=293 status=ok
// SIG undefined FUN_1414c5ac2(void)

void FUN_1414c5ac2(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort uVar2;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 *_Src;
  longlong *_Dst;
  
  _Dst = (longlong *)(param_1 + 8);
  bVar1 = *(byte *)(param_1 + 0x28);
  if (bVar1 != *(byte *)(param_2 + 4)) {
    UNRECOVERED_JUMPTABLE = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      plVar4 = _Dst;
      if (0x18 < *(ushort *)(param_1 + 0x20)) {
        plVar4 = (longlong *)*_Dst;
      }
      (*UNRECOVERED_JUMPTABLE)(plVar4);
    }
    if (0x18 < *(ushort *)(param_1 + 0x20)) {
      FUN_1400020a8(*_Dst);
    }
    bVar1 = *(byte *)(param_2 + 4);
    uVar2 = *(ushort *)(param_2 + 3);
    *(ushort *)(param_1 + 0x20) = uVar2;
    _Src = param_2;
    if (0x18 < uVar2) {
      plVar4 = (longlong *)FUN_14001cc68(uVar2,0);
      *_Dst = (longlong)plVar4;
      _Src = (undefined8 *)*param_2;
      _Dst = plVar4;
    }
    UNRECOVERED_JUMPTABLE = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      memcpy(_Dst,_Src,
             (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
    }
    else {
      (*UNRECOVERED_JUMPTABLE)(_Dst);
    }
    *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 4);
    return;
  }
  if (0x18 < *(ushort *)(param_2 + 3)) {
    param_2 = (undefined8 *)*param_2;
  }
  if (0x18 < *(ushort *)(param_1 + 0x20)) {
    _Dst = (longlong *)*_Dst;
  }
  uVar3 = (ulonglong)((uint)bVar1 * 0x120);
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)&DAT_14c9a85c0 + uVar3);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Jumptable at 0x0001414c5b3e did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(_Dst,param_2);
    return;
  }
  memcpy(_Dst,param_2,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar3));
  return;
}



// FUNCTION 1414c5be8 FUN_1414c5be8 body=359 status=ok
// SIG undefined FUN_1414c5be8(void)

void FUN_1414c5be8(longlong param_1)

{
  longlong lVar1;
  int in_stack_00000030;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x178) != '\x03') {
    if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  if ((in_stack_00000030 != -1) && (lVar1 = *(longlong *)(param_1 + 0x3c0), lVar1 != 0)) {
    if (DAT_14cbadd90 == 0) {
      local_50 = &local_38;
      local_38 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1459f2e4c;
      local_58 = &LAB_148c39de3;
      local_60 = &LAB_1457a9eb2;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      lVar1 = *(longlong *)(param_1 + 0x3c0);
      if (lVar1 == 0) goto LAB_1414c5c70;
    }
    if ((((DAT_14cbadd90 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
        DAT_14cbadd90 + 0x30)) {
      FUN_141020220(param_1,in_stack_00000030);
    }
  }
LAB_1414c5c70:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
}



// FUNCTION 1414c5d6e FUN_1414c5d6e body=1003 status=ok
// SIG undefined FUN_1414c5d6e(void)

undefined4 *
FUN_1414c5d6e(longlong param_1,undefined4 *param_2,double *param_3,float param_4,undefined8 *param_5
             )

{
  undefined4 *puVar1;
  undefined8 uVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  longlong lVar13;
  uint *puVar14;
  double *pdVar15;
  longlong lVar16;
  longlong lVar17;
  double dVar18;
  undefined1 auStack_4c8 [40];
  undefined4 *local_4a0;
  uint *local_498;
  undefined4 local_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  double local_480;
  undefined4 local_474;
  undefined1 local_470 [1024];
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  local_4a0 = param_2;
  if ((longlong)*(int *)(param_1 + 0xf0) == 0) {
    *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
    uVar6 = DAT_14c8464e8._4_4_;
    uVar5 = (undefined4)DAT_14c8464e8;
    uVar4 = DAT_14c8464e0._4_4_;
    *param_2 = (undefined4)DAT_14c8464e0;
    param_2[1] = uVar4;
    param_2[2] = uVar5;
    param_2[3] = uVar6;
    param_2[6] = 0xffffffff;
  }
  else {
    local_70 = (undefined1 *)0x0;
    local_68 = 0x2000000000;
    puVar14 = *(uint **)(param_1 + 0xe8);
    local_498 = puVar14 + (longlong)*(int *)(param_1 + 0xf0) * 10;
    do {
      if (((((puVar14[1] == 0) || (uVar11 = *puVar14, (int)uVar11 < 0)) ||
           (DAT_14c9647dc <= (int)uVar11)) ||
          ((lVar13 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8), lVar13 == 0 ||
           (*(uint *)(lVar13 + 0x10) != puVar14[1])))) ||
         (((*(uint *)(lVar13 + 8) & 0x10200000) != 0 || ((longlong)(int)puVar14[4] == 0))))
      goto LAB_1414c5ffd;
      pdVar15 = *(double **)(puVar14 + 2);
      lVar13 = (longlong)(int)puVar14[4] << 5;
      do {
        iVar10 = *(int *)(pdVar15 + 3);
        if ((-1 < iVar10) && (iVar10 < *(int *)(param_1 + 0x90))) {
          if ((param_3[2] - pdVar15[2]) * (param_3[2] - pdVar15[2]) +
              (param_3[1] - pdVar15[1]) * (param_3[1] - pdVar15[1]) +
              (*param_3 - *pdVar15) * (*param_3 - *pdVar15) <= (double)(param_4 * param_4)) {
            cVar9 = (*(code *)*param_5)(param_5[1],pdVar15);
            uVar8 = local_68;
            if (cVar9 != '\0') {
              lVar17 = (longlong)(int)local_68;
              uVar11 = (int)local_68 + 1;
              local_68 = CONCAT44(local_68._4_4_,uVar11);
              if (local_68._4_4_ < uVar11) {
                FUN_1461b4d02(local_470,uVar8 & 0xffffffff);
              }
              puVar12 = local_70;
              if (local_70 == (undefined1 *)0x0) {
                puVar12 = local_470;
              }
              uVar4 = *(undefined4 *)pdVar15;
              uVar5 = *(undefined4 *)((longlong)pdVar15 + 4);
              uVar6 = *(undefined4 *)(pdVar15 + 1);
              uVar7 = *(undefined4 *)((longlong)pdVar15 + 0xc);
              dVar3 = pdVar15[3];
              *(double *)(puVar12 + lVar17 * 0x20 + 0x10) = pdVar15[2];
              *(double *)((longlong)(puVar12 + lVar17 * 0x20 + 0x10) + 8) = dVar3;
              puVar1 = (undefined4 *)(puVar12 + lVar17 * 0x20);
              *puVar1 = uVar4;
              puVar1[1] = uVar5;
              puVar1[2] = uVar6;
              puVar1[3] = uVar7;
              goto LAB_1414c5f41;
            }
            iVar10 = *(int *)(pdVar15 + 3);
          }
          local_474 = 0x7f7fffff;
          lVar17 = *(longlong *)(param_1 + 0xa8) + (longlong)iVar10 * 0x78;
          lVar16 = lVar17 + 0x30;
          uVar2 = FUN_14040e062(lVar16,param_3,&local_474,&local_490);
          FUN_140703ce0(lVar16,&local_490,uVar2,*(undefined8 *)(lVar17 + 0x58));
          dVar3 = *param_3 - (double)CONCAT44(uStack_48c,local_490);
          dVar18 = param_3[1] - (double)CONCAT44(uStack_484,uStack_488);
          if ((param_3[2] - local_480) * (param_3[2] - local_480) + dVar18 * dVar18 + dVar3 * dVar3
              <= (double)(param_4 * param_4)) {
            cVar9 = (*(code *)*param_5)(param_5[1],pdVar15);
            uVar8 = local_68;
            if (cVar9 != '\0') {
              lVar17 = (longlong)(int)local_68;
              uVar11 = (int)local_68 + 1;
              local_68 = CONCAT44(local_68._4_4_,uVar11);
              if (local_68._4_4_ < uVar11) {
                FUN_1461b4d02(local_470,uVar8 & 0xffffffff);
              }
              puVar12 = local_70;
              if (local_70 == (undefined1 *)0x0) {
                puVar12 = local_470;
              }
              lVar17 = lVar17 * 0x20;
              *(double *)(puVar12 + lVar17 + 0x10) = local_480;
              puVar1 = (undefined4 *)(puVar12 + lVar17);
              *puVar1 = local_490;
              puVar1[1] = uStack_48c;
              puVar1[2] = uStack_488;
              puVar1[3] = uStack_484;
              *(undefined4 *)(puVar12 + lVar17 + 0x18) = *(undefined4 *)(pdVar15 + 3);
            }
          }
        }
LAB_1414c5f41:
        pdVar15 = pdVar15 + 4;
        lVar13 = lVar13 + -0x20;
      } while (lVar13 != 0);
      puVar14 = puVar14 + 10;
    } while (puVar14 != local_498);
    if ((int)local_68 == 0) {
LAB_1414c5ffd:
      *(undefined8 *)(local_4a0 + 4) = DAT_14c8464f0;
      uVar6 = DAT_14c8464e8._4_4_;
      uVar5 = (undefined4)DAT_14c8464e8;
      uVar4 = DAT_14c8464e0._4_4_;
      *local_4a0 = (undefined4)DAT_14c8464e0;
      local_4a0[1] = uVar4;
      local_4a0[2] = uVar5;
      local_4a0[3] = uVar6;
      local_4a0[6] = 0xffffffff;
    }
    else {
      iVar10 = rand();
      puVar12 = local_470;
      if (local_70 != (undefined1 *)0x0) {
        puVar12 = local_70;
      }
      lVar13 = (longlong)(iVar10 % (int)local_68) * 0x20;
      puVar1 = (undefined4 *)(puVar12 + lVar13);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      uVar2 = *(undefined8 *)((longlong)(puVar12 + lVar13 + 0x10) + 8);
      *(undefined8 *)(local_4a0 + 4) = *(undefined8 *)(puVar12 + lVar13 + 0x10);
      *(undefined8 *)(local_4a0 + 6) = uVar2;
      *local_4a0 = uVar4;
      local_4a0[1] = uVar5;
      local_4a0[2] = uVar6;
      local_4a0[3] = uVar7;
    }
    param_2 = local_4a0;
    if (local_70 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_4c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414c615a FUN_1414c615a body=226 status=ok
// SIG undefined FUN_1414c615a(void)

longlong * FUN_1414c615a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1463fead6;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414c623e FUN_1414c623e body=18 status=ok
// SIG undefined FUN_1414c623e(void)

ulonglong FUN_1414c623e(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x10));
  }
  return uVar2 & 0xffffffffffffff01;
}



// FUNCTION 1414c6250 FUN_1414c6250 body=120 status=ok
// SIG undefined FUN_1414c6250(void)

void FUN_1414c6250(void)

{
  HRESULT HVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  if (((DAT_14c872bf0 & 1) == 0) && (uVar2 = FUN_14593c384(0), (uVar2 & 1) != 0)) {
    HVar1 = CoCreateInstance((IID *)&DAT_1499d7690,(LPUNKNOWN)0x0,0x17,(IID *)&DAT_1499d7680,
                             (LPVOID *)&DAT_14c967960);
    if (HVar1 < 0) {
      DAT_14c967960 = 0;
      CoUninitialize();
    }
    else {
      uVar2 = FUN_140215930();
      uVar3 = 3;
      if ((uVar2 & 1) == 0) {
        uVar3 = 1;
      }
      FUN_140215904(uVar3);
    }
  }
  return;
}



// FUNCTION 1414c62c8 FUN_1414c62c8 body=438 status=ok
// SIG undefined FUN_1414c62c8(void)

void FUN_1414c62c8(longlong *param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  longlong local_58;
  undefined8 uStack_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = 0;
  uStack_50 = 0;
  (**(code **)(*param_1 + 0x798))(0,&local_58,4);
  lVar2 = local_58;
  lVar3 = (longlong)(int)uStack_50;
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(lVar2 + lVar4);
      if (plVar1 != (longlong *)0x0) {
        if (DAT_14cb0b4f0 == 0) {
          local_70 = &local_48;
          local_48 = FUN_1449e2820;
          local_60 = FUN_14081d0ea;
          local_68 = &LAB_14580b774;
          local_78 = &LAB_147d6e27b;
          local_80 = &LAB_140307be8;
          local_88 = L"Engine";
          local_90 = 0;
          local_98 = 0x10000000;
          local_a0 = 8;
          local_a8 = 0x158;
          FUN_14081cfa3(L"/Script/Engine",L"Texture2D",&DAT_14cb0b4f0,FUN_1464082aa);
        }
        if ((*(int *)(DAT_14cb0b4f0 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(DAT_14cb0b4f0 + 0x38) * 8) ==
            DAT_14cb0b4f0 + 0x30)) {
          (**(code **)(*plVar1 + 0x2a0))(plVar1);
          plVar1[8] = (longlong)(DAT_14c866ff8 + -1.0);
          *(byte *)((longlong)plVar1 + 0xbc) =
               *(byte *)((longlong)plVar1 + 0xbc) & 0xd7 | param_2 << 3;
        }
      }
      lVar4 = lVar4 + 8;
    } while (lVar3 * 8 != lVar4);
  }
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414c6480 FUN_1414c6480 body=465 status=ok
// SIG undefined FUN_1414c6480(void)

void FUN_1414c6480(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_b8 [32];
  uint local_98;
  undefined1 local_90;
  longlong local_88;
  ulonglong uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = 0;
  uStack_70 = 0;
  (**(code **)(*param_1 + 0x790))(param_1,&local_78,0);
  local_88 = 0;
  uStack_80 = 0;
  if (0 < (int)uStack_70) {
    lVar8 = 0;
    do {
      if (*(longlong *)(local_78 + lVar8 * 8) != 0) {
        lVar7 = param_1[0x16];
        if (lVar7 == 0) {
          lVar7 = FUN_1448abda6(param_1);
        }
        bVar10 = (longlong)uStack_80 < 0;
        uStack_80 = uStack_80 & 0xffffffff00000000;
        if (bVar10) {
          FUN_1400821c8(&local_88,0);
        }
        plVar1 = *(longlong **)(local_78 + lVar8 * 8);
        local_98 = DAT_14c760db4;
        if (lVar7 != 0) {
          local_98 = (uint)*(byte *)(lVar7 + 0x150);
        }
        local_90 = 0;
        (**(code **)(*plVar1 + 0x310))(plVar1,&local_88,param_3,0);
        if (0 < (int)uStack_80) {
          lVar7 = 0;
          iVar3 = (int)uStack_80;
          do {
            lVar2 = local_88;
            lVar5 = *param_2;
            lVar9 = (longlong)(int)param_2[1];
            if (lVar9 != 0) {
              uVar6 = 0;
              do {
                if (*(longlong *)(lVar5 + uVar6) == *(longlong *)(local_88 + lVar7 * 8)) {
                  if ((~uVar6 & 0x7fffffff8) != 0) goto LAB_1414c6599;
                  break;
                }
                uVar6 = uVar6 + 8;
              } while (lVar9 * 8 - uVar6 != 0);
            }
            uVar4 = (int)param_2[1] + 1;
            *(uint *)(param_2 + 1) = uVar4;
            if (*(uint *)((longlong)param_2 + 0xc) < uVar4) {
              FUN_14473b392(param_2);
              lVar5 = *param_2;
            }
            *(undefined8 *)(lVar5 + lVar9 * 8) = *(undefined8 *)(lVar2 + lVar7 * 8);
            iVar3 = (int)uStack_80;
LAB_1414c6599:
            lVar7 = lVar7 + 1;
          } while (lVar7 < iVar3);
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)uStack_70);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414c6652 FUN_1414c6652 body=187 status=ok
// SIG undefined FUN_1414c6652(void)

longlong * FUN_1414c6652(undefined8 param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = (int)param_4[1];
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_1466222c0(param_2);
    lVar3 = param_4[1];
    if ((longlong)(int)lVar3 != 0) {
      lVar2 = *param_4;
      lVar5 = 0;
      do {
        iVar1 = *(int *)(lVar2 + lVar5);
        if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_3 + 0x38))) &&
           (lVar4 = FUN_1408d7900((longlong)iVar1 * 0x18 + *(longlong *)(param_3 + 0x30)),
           lVar4 != 0)) {
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_140623d92(param_2,iVar1);
          }
          *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
        }
        lVar5 = lVar5 + 4;
      } while ((longlong)(int)lVar3 * 4 != lVar5);
    }
  }
  return param_2;
}



// FUNCTION 1414c670e FUN_1414c670e body=1081 status=ok
// SIG undefined FUN_1414c670e(void)

void FUN_1414c670e(ulonglong param_1,ulonglong param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined *puVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  ulonglong *puVar16;
  int iVar17;
  bool bVar18;
  
  iVar15 = DAT_14c950cf8;
  iVar7 = DAT_14c950cd0;
  uVar5 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if (DAT_14c950cd0 != DAT_14c950cfc) {
    puVar9 = &DAT_14c950d00;
    if (DAT_14c950d08 != (undefined *)0x0) {
      puVar9 = DAT_14c950d08;
    }
    iVar6 = *(int *)(puVar9 + (ulonglong)(DAT_14c950d10 - 1U & uVar5) * 4);
    while (iVar6 != -1) {
      puVar16 = (ulonglong *)(DAT_14c950cc8 + (longlong)iVar6 * 0x18);
      if (*puVar16 == param_1) {
        if (puVar16 != (ulonglong *)0x0) goto LAB_1414c697b;
        break;
      }
      iVar6 = (int)puVar16[2];
    }
  }
  if (DAT_14c950cfc == 0) {
    iVar15 = DAT_14c950cd0 + 1;
    bVar18 = DAT_14c950cd4 == DAT_14c950cd0;
    DAT_14c950cd0 = iVar15;
    if (bVar18) {
      FUN_14482b872(&DAT_14c950cc8,iVar7);
    }
    iVar15 = DAT_14c950cf0;
    if (DAT_14c950cf0 == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = DAT_14c950cf0 + 0x1e;
      if (-1 < DAT_14c950cf0 + -1) {
        iVar6 = DAT_14c950cf0 + -1;
      }
      iVar6 = iVar6 >> 5;
    }
    iVar12 = DAT_14c950cf0 + 1;
    iVar17 = DAT_14c950cf0 + 0x1f;
    if (-1 < DAT_14c950cf0) {
      iVar17 = DAT_14c950cf0;
    }
    if (iVar17 >> 5 != iVar6) {
      if (DAT_14c950cf4 <= DAT_14c950cf0) {
        if (DAT_14c950cf0 + 0x20U < 0xa0) {
          DAT_14c950cf4 = 0x80;
        }
        else {
          uVar13 = DAT_14c950cf0 + 0x20U >> 5;
          if (DAT_14c950cf4 + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar13) {
              uVar11 = uVar13;
            }
          }
          else {
            uVar11 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar8 = FUN_144a3809e(uVar11 << 2,0);
          iVar6 = (int)(uVar8 >> 2);
          DAT_14c950cf4 = -0x20;
          if ((int)uVar13 <= iVar6) {
            DAT_14c950cf4 = iVar6 << 5;
          }
        }
        FUN_1446efbd8(&DAT_14c950cd8,DAT_14c950cf0);
        iVar12 = DAT_14c950cf0 + 1;
      }
      iVar6 = iVar12 + 0x1f;
      if (-1 < iVar12) {
        iVar6 = iVar12;
      }
      if (iVar12 % 0x20 != 0) {
        puVar9 = &DAT_14c950cd8;
        if (DAT_14c950ce8 != (undefined *)0x0) {
          puVar9 = DAT_14c950ce8;
        }
        bVar10 = -(char)(iVar12 % 0x20);
        DAT_14c950cf0 = iVar12;
        *(uint *)(puVar9 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)(puVar9 + (longlong)(iVar6 >> 5) * 4) << (bVar10 & 0x1f)) >>
             (bVar10 & 0x1f);
        iVar12 = DAT_14c950cf0;
      }
    }
    DAT_14c950cf0 = iVar12;
    lVar14 = (longlong)iVar7;
    puVar9 = &DAT_14c950cd8;
    if (DAT_14c950ce8 != (undefined *)0x0) {
      puVar9 = DAT_14c950ce8;
    }
    bVar10 = (byte)iVar15 & 0x1f;
    *(uint *)(puVar9 + (longlong)(iVar17 >> 5) * 4) =
         *(uint *)(puVar9 + (longlong)(iVar17 >> 5) * 4) &
         (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
    iVar15 = iVar7;
  }
  else {
    lVar14 = (longlong)DAT_14c950cf8;
    DAT_14c950cf8 = *(int *)(DAT_14c950cc8 + 4 + lVar14 * 0x18);
    DAT_14c950cfc = DAT_14c950cfc + -1;
    if (DAT_14c950cfc != 0) {
      *(undefined4 *)(DAT_14c950cc8 + (longlong)DAT_14c950cf8 * 0x18) = 0xffffffff;
    }
  }
  iVar7 = 1;
  puVar9 = &DAT_14c950cd8;
  if (DAT_14c950ce8 != (undefined *)0x0) {
    puVar9 = DAT_14c950ce8;
  }
  iVar6 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar6 = iVar15;
  }
  *(uint *)(puVar9 + (longlong)(iVar6 >> 5) * 4) =
       *(uint *)(puVar9 + (longlong)(iVar6 >> 5) * 4) | 1 << ((byte)iVar15 & 0x1f);
  puVar16 = (ulonglong *)(DAT_14c950cc8 + lVar14 * 0x18);
  *puVar16 = param_1;
  puVar16[1] = 0;
  *(undefined4 *)(puVar16 + 2) = 0xffffffff;
  uVar13 = DAT_14c950cd0 - DAT_14c950cfc;
  if ((uVar13 != 0) && (uVar13 != 1)) {
    puVar9 = &DAT_14c950d00;
    if (DAT_14c950d08 != (undefined *)0x0) {
      puVar9 = DAT_14c950d08;
    }
    iVar6 = *(int *)(puVar9 + (ulonglong)(DAT_14c950d10 - 1U & uVar5) * 4);
    while (iVar6 != -1) {
      puVar2 = (ulonglong *)(DAT_14c950cc8 + (longlong)iVar6 * 0x18);
      if (*puVar2 == param_1) {
        if (1 < puVar2[1]) {
          FUN_14000ebb3();
        }
        puVar2[1] = 0;
        uVar3 = *(undefined4 *)((longlong)puVar16 + 4);
        uVar8 = puVar16[1];
        uVar4 = *(undefined4 *)((longlong)puVar16 + 0xc);
        *(int *)puVar2 = (int)*puVar16;
        *(undefined4 *)((longlong)puVar2 + 4) = uVar3;
        *(int *)(puVar2 + 1) = (int)uVar8;
        *(undefined4 *)((longlong)puVar2 + 0xc) = uVar4;
        FUN_1468b9598(iVar15);
        goto LAB_1414c6965;
      }
      iVar6 = (int)puVar2[2];
    }
  }
  if (3 < uVar13) {
    uVar8 = (ulonglong)(uVar13 & 0xfffffffe) + 0xf;
    lVar14 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar7 = 1 << ((byte)lVar14 & 0x1f);
  }
  if (((int)uVar13 < 1) || (iVar7 <= DAT_14c950d10)) {
    uVar5 = DAT_14c950d10 - 1U & uVar5;
    *(uint *)((longlong)puVar16 + 0x14) = uVar5;
    puVar9 = DAT_14c950d08;
    if (DAT_14c950d08 == (undefined *)0x0) {
      puVar9 = &DAT_14c950d00;
    }
    *(undefined4 *)(puVar16 + 2) =
         *(undefined4 *)(puVar9 + ((longlong)DAT_14c950d10 - 1U & (longlong)(int)uVar5) * 4);
    puVar9 = DAT_14c950d08;
    if (DAT_14c950d08 == (undefined *)0x0) {
      puVar9 = &DAT_14c950d00;
    }
    *(int *)(puVar9 + ((longlong)DAT_14c950d10 - 1U & (longlong)(int)uVar5) * 4) = iVar15;
  }
  else {
    DAT_14c950d10 = iVar7;
    FUN_1414c6b48();
  }
LAB_1414c6965:
  puVar16 = (ulonglong *)(DAT_14c950cc8 + (longlong)iVar15 * 0x18);
LAB_1414c697b:
  puVar16 = puVar16 + 1;
  uVar8 = *puVar16;
  if ((uVar8 & 0xfffffffffffffffe) != (param_2 & 0xfffffffffffffffe)) {
    if (1 < param_2) {
      LOCK();
      piVar1 = (int *)((param_2 & 0xfffffffffffffffe) - 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      uVar8 = *puVar16;
    }
    if (1 < uVar8) {
      FUN_14000ebb3();
    }
    *puVar16 = param_2;
  }
  return;
}



// FUNCTION 1414c6b48 FUN_1414c6b48 body=616 status=ok
// SIG undefined FUN_1414c6b48(void)

void FUN_1414c6b48(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c950d08 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c950d08,0,0,4);
  }
  uVar4 = DAT_14c950d10;
  if (DAT_14c950d10 != 0) {
    FUN_144a1cbf0(&DAT_14c950d00,0,DAT_14c950d10,4);
    if (0 < (int)uVar4) {
      uVar2 = 0;
      do {
        puVar6 = DAT_14c950d08;
        if (DAT_14c950d08 == (undefined *)0x0) {
          puVar6 = &DAT_14c950d00;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14c950d10 + 0x7fffffff & uVar2) * 4) = 0xffffffff;
        uVar2 = uVar2 + 1;
      } while (uVar4 != uVar2);
    }
    local_58 = 0x100000000;
    local_50 = &DAT_14c950cd8;
    local_48 = 0xffffffff;
    local_40 = 0;
    if (DAT_14c950cf0 == 0) {
      uVar7 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar7 = local_58 >> 0x20;
    }
    iVar3 = (int)local_58;
    uVar4 = (uint)local_48;
    iVar5 = local_48._4_4_;
    iVar8 = local_40;
    if (local_48._4_4_ < *(int *)(local_50 + 0x18)) {
      do {
        lVar10 = DAT_14c950cc8;
        lVar9 = (longlong)iVar5;
        uVar12 = *(ulonglong *)(DAT_14c950cc8 + lVar9 * 0x18);
        uVar2 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
        uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
        uVar12 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)DAT_14c950d10 - 1U;
        iVar11 = (int)uVar12;
        *(int *)(DAT_14c950cc8 + 0x14 + lVar9 * 0x18) = iVar11;
        puVar6 = DAT_14c950d08;
        if (DAT_14c950d08 == (undefined *)0x0) {
          puVar6 = &DAT_14c950d00;
        }
        *(undefined4 *)(lVar10 + 0x10 + lVar9 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14c950d10 - 1U & uVar12) * 4);
        puVar6 = DAT_14c950d08;
        if (DAT_14c950d08 == (undefined *)0x0) {
          puVar6 = &DAT_14c950d00;
        }
        *(int *)(puVar6 + ((longlong)iVar11 & (longlong)(int)DAT_14c950d10 - 1U) * 4) = iVar5;
        uVar4 = ~(uint)uVar7 & uVar4;
        puVar6 = *(undefined **)(local_50 + 0x10);
        if (*(undefined **)(local_50 + 0x10) == (undefined *)0x0) {
          puVar6 = local_50;
        }
        iVar11 = *(int *)(local_50 + 0x18);
        lVar10 = (longlong)iVar3;
        uVar2 = *(uint *)(puVar6 + lVar10 * 4) & uVar4;
        if (uVar2 == 0) {
          iVar5 = iVar11 + 0x1e;
          if (-1 < iVar11 + -1) {
            iVar5 = iVar11 + -1;
          }
          iVar5 = iVar5 >> 5;
          iVar1 = iVar5;
          if (iVar5 < iVar3) {
            iVar1 = iVar3;
          }
          if (iVar5 <= iVar3) break;
          lVar9 = 0;
          while( true ) {
            iVar8 = iVar8 + 0x20;
            uVar2 = *(uint *)(puVar6 + lVar9 * 4 + lVar10 * 4 + 4);
            if (uVar2 != 0) break;
            lVar9 = lVar9 + 1;
            if (iVar1 - lVar10 == lVar9) goto LAB_1414c6d6b;
          }
          iVar3 = iVar3 + (int)lVar9 + 1;
          uVar4 = 0xffffffff;
        }
        uVar7 = (ulonglong)(-uVar2 & uVar2);
        uVar12 = uVar7 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar5 = (iVar8 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      } while (iVar5 < iVar11);
    }
  }
LAB_1414c6d6b:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414c6db2 FUN_1414c6db2 body=301 status=ok
// SIG undefined FUN_1414c6db2(void)

void FUN_1414c6db2(longlong param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14011ff66();
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c874a20) {
      FUN_144b3d300(&DAT_14c874a20);
      if (DAT_14c874a20 == -1) {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
    }
    local_20 = "Niagara";
    local_18 = 7;
    local_14 = 0;
    uVar3 = FUN_14001a6c0(&local_20,1);
    cVar2 = FUN_14011feae(&DAT_14c874628,uVar3);
    if (cVar2 == '\0') {
      local_20 = (char *)0x0;
      FUN_14485c47a(&local_20,param_1);
      uVar1 = DAT_14cb3de98;
      lVar4 = (longlong)(int)DAT_14cb3de98;
      DAT_14cb3de98 = DAT_14cb3de98 + 1;
      if (DAT_14cb3de9c < DAT_14cb3de98) {
        FUN_1481c5898(uVar1);
      }
      *(char **)(DAT_14cb3de90 + lVar4 * 8) = local_20;
    }
    else {
      FUN_1414c6ee0(param_1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414c6ee0 FUN_1414c6ee0 body=1090 status=ok
// SIG undefined FUN_1414c6ee0(void)

void FUN_1414c6ee0(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [16];
  longlong local_70;
  undefined8 local_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(longlong *)(param_1 + 0x104) == 0) ||
     (plVar1 = (longlong *)FUN_144741050(param_1 + 0x100), *plVar1 == 0)) {
    FUN_140120ed2(&local_60,&DAT_14cb41b58);
    *(undefined4 *)(param_1 + 0xe0) = local_58;
    *(undefined8 *)(param_1 + 0xd8) = local_60;
    if ((undefined8 *)(param_1 + 0xd8) != &local_60) {
      if (*(longlong *)(param_1 + 0xe8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0xe8) = local_50;
      local_50 = 0;
      *(undefined4 *)(param_1 + 0xf0) = (undefined4)local_48;
      *(undefined4 *)(param_1 + 0xf4) = local_48._4_4_;
      local_48 = 0;
    }
    *(undefined4 *)(param_1 + 0x108) = local_30;
    *(undefined4 *)(param_1 + 0xf8) = local_40;
    *(undefined4 *)(param_1 + 0xfc) = uStack_3c;
    *(undefined4 *)(param_1 + 0x100) = uStack_38;
    *(undefined4 *)(param_1 + 0x104) = uStack_34;
    *(undefined1 *)(param_1 + 0x10c) = local_2c;
    *(undefined1 *)(param_1 + 0x10d) = local_2b;
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    FUN_143a7d132(&local_60);
    FUN_143a7d132(local_80);
    FUN_140120fb8(param_1 + 0x110,local_80,&local_60,0);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    FUN_143a7d2b5(&local_60);
    FUN_143a7d2b5(local_80);
    FUN_140120fb8(param_1 + 0x148,local_80,&local_60,0);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    FUN_143a7d430(&local_60);
    FUN_143a7d430(local_80);
    FUN_140120fb8(param_1 + 0x180,local_80,&local_60,0);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_60,&DAT_14cb41bd8);
    *(undefined4 *)(param_1 + 0x1c0) = local_58;
    *(undefined8 *)(param_1 + 0x1b8) = local_60;
    if ((undefined8 *)(param_1 + 0x1b8) != &local_60) {
      if (*(longlong *)(param_1 + 0x1c8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x1c8) = local_50;
      local_50 = 0;
      *(undefined4 *)(param_1 + 0x1d0) = (undefined4)local_48;
      *(undefined4 *)(param_1 + 0x1d4) = local_48._4_4_;
      local_48 = 0;
    }
    *(undefined4 *)(param_1 + 0x1e8) = local_30;
    *(undefined4 *)(param_1 + 0x1d8) = local_40;
    *(undefined4 *)(param_1 + 0x1dc) = uStack_3c;
    *(undefined4 *)(param_1 + 0x1e0) = uStack_38;
    *(undefined4 *)(param_1 + 0x1e4) = uStack_34;
    *(undefined1 *)(param_1 + 0x1ec) = local_2c;
    *(undefined1 *)(param_1 + 0x1ed) = local_2b;
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_60,&DAT_14cb41c38);
    *(undefined4 *)(param_1 + 0x1f8) = local_58;
    *(undefined8 *)(param_1 + 0x1f0) = local_60;
    if ((undefined8 *)(param_1 + 0x1f0) != &local_60) {
      if (*(longlong *)(param_1 + 0x200) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x200) = local_50;
      local_50 = 0;
      *(undefined4 *)(param_1 + 0x208) = (undefined4)local_48;
      *(undefined4 *)(param_1 + 0x20c) = local_48._4_4_;
      local_48 = 0;
    }
    *(undefined4 *)(param_1 + 0x220) = local_30;
    *(undefined4 *)(param_1 + 0x210) = local_40;
    *(undefined4 *)(param_1 + 0x214) = uStack_3c;
    *(undefined4 *)(param_1 + 0x218) = uStack_38;
    *(undefined4 *)(param_1 + 0x21c) = uStack_34;
    *(undefined1 *)(param_1 + 0x224) = local_2c;
    *(undefined1 *)(param_1 + 0x225) = local_2b;
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    FUN_143a7d59d(&local_60);
    FUN_143a7d59d(local_80);
    FUN_140120fb8(param_1 + 0x228,local_80,&local_60,0);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_60,&DAT_14cb413f8);
    *(undefined4 *)(param_1 + 0x268) = local_58;
    *(undefined8 *)(param_1 + 0x260) = local_60;
    if ((undefined8 *)(param_1 + 0x260) != &local_60) {
      if (*(longlong *)(param_1 + 0x270) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x270) = local_50;
      local_50 = 0;
      *(undefined4 *)(param_1 + 0x278) = (undefined4)local_48;
      *(undefined4 *)(param_1 + 0x27c) = local_48._4_4_;
      local_48 = 0;
    }
    *(undefined4 *)(param_1 + 0x290) = local_30;
    *(undefined4 *)(param_1 + 0x280) = local_40;
    *(undefined4 *)(param_1 + 0x284) = uStack_3c;
    *(undefined4 *)(param_1 + 0x288) = uStack_38;
    *(undefined4 *)(param_1 + 0x28c) = uStack_34;
    *(undefined1 *)(param_1 + 0x294) = local_2c;
    *(undefined1 *)(param_1 + 0x295) = local_2b;
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414c7324 FUN_1414c7324 body=4513 status=ok
// SIG undefined FUN_1414c7324(void)

ulonglong FUN_1414c7324(ulonglong *param_1,ulonglong param_2,longlong param_3,byte param_4,
                       char param_5)

{
  int *piVar1;
  undefined8 uVar2;
  DWORD DVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 uVar7;
  DWORD DVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  RTL_SRWLOCK RVar13;
  undefined8 uVar14;
  PSRWLOCK pRVar15;
  ulonglong uVar16;
  PSRWLOCK pRVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_168 [32];
  wchar_t *local_148;
  PSRWLOCK *local_140;
  undefined8 local_138;
  code *local_130;
  wchar_t *local_128;
  code *local_120;
  undefined1 *local_118;
  PSRWLOCK *local_110;
  code *local_108;
  code *local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  PSRWLOCK local_d8;
  int local_d0;
  longlong local_c8 [2];
  PSRWLOCK local_b8;
  undefined8 uStack_b0;
  RTL_SRWLOCK local_a8;
  longlong lStack_a0;
  longlong local_98 [2];
  PSRWLOCK local_88;
  longlong local_80;
  longlong local_78;
  PSRWLOCK local_70;
  int iStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (1 < (int)param_1[2]) {
    FUN_1446f470e(&local_88,param_1[1],0);
    lVar9 = FUN_147bd04a3(param_2,local_88);
    uVar10 = param_1[3];
LAB_1414c7c91:
    uVar12 = FUN_1412964e9(lVar9,uVar10,7);
    goto LAB_1414c7c9c;
  }
  uVar10 = param_2;
  if ((char)param_1[6] == '\0') {
    uVar10 = *param_1;
    if (uVar10 != 0) {
      if (DAT_14c949118 == 0) {
        local_70 = (PSRWLOCK)FUN_140631fbe;
        lVar9 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c949118 = lVar9;
        FUN_1446f470e(&local_a8,L"Class",1);
        local_118 = &LAB_146891e90;
        local_120 = (code *)&LAB_146273097;
        local_130 = (code *)0x149e2b68a;
        local_128 = (wchar_t *)CONCAT44(local_128._4_4_,199);
        local_138 = 0x20;
        local_140 = (PSRWLOCK *)CONCAT44(local_140._4_4_,0x10000000);
        local_148._0_4_ = 8;
        local_110 = &local_70;
        FUN_14574b4b2(lVar9);
        DAT_14c949118 = lVar9;
        if (DAT_14c951858 == 0) {
          local_110 = &local_88;
          local_88 = (PSRWLOCK)FUN_1449e2820;
          local_100 = FUN_14081d0ea;
          local_108 = FUN_14081d0ea;
          local_118 = &LAB_1468c5283;
          local_120 = FUN_142809da0;
          local_128 = L"Engine";
          local_130 = (code *)0x400000000;
          local_138 = CONCAT44(local_138._4_4_,0x10000000);
          local_140 = (PSRWLOCK *)CONCAT44(local_140._4_4_,8);
          local_148._0_4_ = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar18 = DAT_14c951858;
        lVar9 = DAT_14c949118;
        uVar14 = FUN_1449e2fb2();
        local_148 = L"Class";
        FUN_14574b446(uVar14,lVar9,lVar18,L"/Script/CoreUObject");
        uVar10 = *param_1;
        if (uVar10 == 0) goto LAB_1414c73fd;
      }
      if ((((DAT_14c949118 != 0) && (lVar9 = *(longlong *)(uVar10 + 0x10), lVar9 != 0)) &&
          (*(int *)(DAT_14c949118 + 0x38) <= *(int *)(lVar9 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8)
          == DAT_14c949118 + 0x30)) goto LAB_1414c73b1;
    }
  }
  else {
LAB_1414c73b1:
    if ((uVar10 != 0 & param_4) != 0) {
      pRVar15 = (PSRWLOCK)param_1[3];
      uVar14 = *(undefined8 *)(param_3 + 0x18);
LAB_1414c73c4:
      lVar18 = param_3;
      lVar9 = lVar18;
      if (*(longlong *)(lVar18 + 0x20) != 0) goto code_r0x0001414c73d3;
      goto LAB_1414c73e5;
    }
    if (uVar10 != 0) goto LAB_1414c74b8;
  }
LAB_1414c73fd:
  lVar9 = FUN_147bd044a(param_1);
  if (lVar9 != 0) {
    uVar12 = FUN_147bd05fd(lVar9,param_1[3]);
    goto LAB_1414c7c9c;
  }
  FUN_1400021e4(param_1 + 3,&local_88);
  cVar6 = FUN_144a38768(&local_88,L"__DelegateSignature",0x13,1);
  if (local_88 != (PSRWLOCK)0x0) {
    FUN_1400020a8();
  }
  if ((cVar6 != '\0') && (uVar12 = FUN_147bd0687(param_1[3]), uVar10 = uVar12, uVar12 != 0)) {
LAB_1414c746b:
    uVar11 = uVar10;
    uVar10 = uVar11;
    if (*(ulonglong *)(uVar11 + 0x20) != 0) goto code_r0x0001414c747a;
    goto LAB_1414c748e;
  }
  goto LAB_1414c757c;
code_r0x0001414c747a:
  uVar10 = *(ulonglong *)(uVar11 + 0x20);
  if ((*(uint *)(uVar11 + 8) >> 0x1c & 1) == 0) goto LAB_1414c746b;
  uVar10 = FUN_142840154(uVar11);
LAB_1414c748e:
  if (uVar10 == 0) {
    uVar10 = *(ulonglong *)(uVar11 + 0x20);
    goto LAB_1414c746b;
  }
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(uVar10);
  }
  *param_1 = uVar10;
  goto LAB_1414c7c9c;
code_r0x0001414c73d3:
  param_3 = *(longlong *)(lVar18 + 0x20);
  if ((*(uint *)(lVar18 + 8) >> 0x1c & 1) == 0) goto LAB_1414c73c4;
  lVar9 = FUN_142840154(lVar18);
LAB_1414c73e5:
  if (lVar9 == 0) {
    param_3 = *(longlong *)(lVar18 + 0x20);
    goto LAB_1414c73c4;
  }
  uVar2 = *(undefined8 *)(lVar9 + 0x18);
  lVar9 = FUN_14105c83b(uVar10,pRVar15,3);
  uVar11 = uVar10;
  uVar4 = uVar2;
  uVar5 = uVar14;
  uVar16 = uVar10;
  if (lVar9 == 0) {
LAB_1414c759d:
    do {
      local_e0 = uVar5;
      local_e8 = uVar4;
      uVar12 = uVar11;
      uVar11 = uVar12;
      if (*(ulonglong *)(uVar12 + 0x20) != 0) {
        uVar11 = *(ulonglong *)(uVar12 + 0x20);
        uVar4 = local_e8;
        uVar5 = local_e0;
        if ((*(uint *)(uVar12 + 8) >> 0x1c & 1) == 0) goto LAB_1414c759d;
        uVar11 = FUN_142840154(uVar12);
      }
      if (uVar11 == 0) {
        uVar11 = *(ulonglong *)(uVar12 + 0x20);
        uVar4 = local_e8;
        uVar5 = local_e0;
      }
      else {
        local_78 = *(longlong *)(uVar11 + 0x18);
        local_80 = *(longlong *)(uVar16 + 0x18);
        local_88 = pRVar15;
        uVar7 = FUN_146899d82(uVar2,uVar14);
        DVar3 = DAT_14c949610;
        local_70 = (PSRWLOCK)&DAT_14c949608;
        iStack_68 = CONCAT31(iStack_68._1_3_,1);
        if ((DAT_14c949610 == 0) || (DVar8 = GetCurrentThreadId(), DVar3 != DVar8)) {
          AcquireSRWLockShared((PSRWLOCK)&DAT_14c949608);
        }
        else {
          DAT_14c949614 = DAT_14c949614 + 1;
        }
        local_a8.Ptr = (PSRWLOCK)0x0;
        lStack_a0 = 0;
        local_98[0] = 0;
        local_140 = &local_70;
        local_148 = (wchar_t *)((ulonglong)local_148 & 0xffffffff00000000);
        FUN_140159c68(uVar7,&local_88,&local_a8,0);
        pRVar17 = local_70;
        if ((char)iStack_68 == '\x01') {
          if (*(int *)((longlong)&local_70[1].Ptr + 4) < 1) {
            ReleaseSRWLockShared(local_70);
          }
          else {
            GetCurrentThreadId();
            piVar1 = (int *)((longlong)&pRVar17[1].Ptr + 4);
            *piVar1 = *piVar1 + -1;
          }
        }
        RVar13.Ptr = local_a8.Ptr;
        uVar11 = uVar16;
        if ((local_a8.Ptr == local_88) && (lStack_a0 == local_80)) {
          uVar12 = (ulonglong)local_88 >> 0x20;
          RVar13.Ptr = local_88;
          if (local_98[0] == local_78) {
            RVar13.Ptr = (PSRWLOCK)0x0;
            uVar12 = 0;
          }
        }
        else {
          uVar12 = (ulonglong)local_a8.Ptr >> 0x20;
          if (local_80 != lStack_a0) {
            FUN_1400021e4(&lStack_a0,&local_70);
            if (local_98[0] == 0) {
              pRVar17 = (PSRWLOCK)&DAT_149dfb77a;
              if (iStack_68 != 0) {
                pRVar17 = local_70;
              }
              if (DAT_14c949118 == 0) {
                local_d8 = (PSRWLOCK)FUN_140631fbe;
                DAT_14c949118 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                local_f8 = DAT_14c949118;
                FUN_1446f470e(local_c8,L"Class",1);
                local_110 = &local_d8;
                local_118 = &LAB_146891e90;
                local_120 = (code *)&LAB_146273097;
                local_130 = (code *)0x149e2b68a;
                local_128 = (wchar_t *)CONCAT44(local_128._4_4_,199);
                local_138 = 0x20;
                local_140 = (PSRWLOCK *)CONCAT44(local_140._4_4_,0x10000000);
                local_148._0_4_ = 8;
                FUN_14574b4b2(local_f8);
                DAT_14c949118 = local_f8;
                local_f0 = DAT_14c951858;
                if (DAT_14c951858 == 0) {
                  local_b8 = (PSRWLOCK)FUN_1449e2820;
                  local_100 = FUN_14081d0ea;
                  local_108 = FUN_14081d0ea;
                  local_110 = &local_b8;
                  local_118 = &LAB_1468c5283;
                  local_120 = FUN_142809da0;
                  local_128 = L"Engine";
                  local_130 = (code *)0x400000000;
                  local_138 = CONCAT44(local_138._4_4_,0x10000000);
                  local_140 = (PSRWLOCK *)CONCAT44(local_140._4_4_,8);
                  local_148._0_4_ = 0x50;
                  FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
                  local_f8 = DAT_14c949118;
                }
                DAT_14c949118 = local_f8;
                local_f0 = DAT_14c951858;
                uVar14 = FUN_1449e2fb2();
                local_148 = L"Class";
                FUN_14574b446(uVar14,local_f8,local_f0,L"/Script/CoreUObject");
              }
              local_148 = L"FindRemappedFieldImpl";
              uVar11 = FUN_140277cc4(DAT_14c949118,pRVar17,0);
            }
            else {
              FUN_1400021e4(&lStack_a0,local_c8);
              FUN_1400021e4(local_98,&local_d8);
              pRVar17 = (PSRWLOCK)&DAT_149dfb77a;
              if (local_d0 != 0) {
                pRVar17 = local_d8;
              }
              FUN_140002266(&local_b8,L"%s.%s",pRVar17);
              if (local_70 != (PSRWLOCK)0x0) {
                FUN_1400020a8();
              }
              local_70 = local_b8;
              iStack_68 = (int)uStack_b0;
              uStack_64 = uStack_b0._4_4_;
              local_b8 = (PSRWLOCK)0x0;
              uStack_b0 = 0;
              if (local_d8 != (PSRWLOCK)0x0) {
                FUN_1400020a8();
              }
              if (local_c8[0] != 0) {
                FUN_1400020a8();
              }
              pRVar17 = (PSRWLOCK)&DAT_149dfb77a;
              if (iStack_68 != 0) {
                pRVar17 = local_70;
              }
              if (DAT_14c949118 == 0) {
                local_d8 = (PSRWLOCK)FUN_140631fbe;
                DAT_14c949118 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                local_f8 = DAT_14c949118;
                FUN_1446f470e(local_c8,L"Class",1);
                local_110 = &local_d8;
                local_118 = &LAB_146891e90;
                local_120 = (code *)&LAB_146273097;
                local_130 = (code *)0x149e2b68a;
                local_128 = (wchar_t *)CONCAT44(local_128._4_4_,199);
                local_138 = 0x20;
                local_140 = (PSRWLOCK *)CONCAT44(local_140._4_4_,0x10000000);
                local_148._0_4_ = 8;
                FUN_14574b4b2(local_f8);
                DAT_14c949118 = local_f8;
                local_f0 = DAT_14c951858;
                if (DAT_14c951858 == 0) {
                  local_b8 = (PSRWLOCK)FUN_1449e2820;
                  local_100 = FUN_14081d0ea;
                  local_108 = FUN_14081d0ea;
                  local_110 = &local_b8;
                  local_118 = &LAB_1468c5283;
                  local_120 = FUN_142809da0;
                  local_128 = L"Engine";
                  local_130 = (code *)0x400000000;
                  local_138 = CONCAT44(local_138._4_4_,0x10000000);
                  local_140 = (PSRWLOCK *)CONCAT44(local_140._4_4_,8);
                  local_148._0_4_ = 0x50;
                  FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
                  local_f8 = DAT_14c949118;
                }
                DAT_14c949118 = local_f8;
                local_f0 = DAT_14c951858;
                uVar14 = FUN_1449e2fb2();
                local_148 = L"Class";
                FUN_14574b446(uVar14,local_f8,local_f0);
              }
              uVar11 = FUN_140277b32(DAT_14c949118,0,pRVar17);
            }
            if (local_70 != (PSRWLOCK)0x0) {
              FUN_1400020a8();
            }
            if (uVar11 == 0) break;
          }
        }
        uVar12 = (ulonglong)RVar13.Ptr & 0xffffffff | uVar12 << 0x20;
        if (uVar12 != 0) {
          uVar12 = FUN_14105c83b(uVar11,uVar12,3);
          if ((uVar12 != 0) &&
             ((uVar16 == uVar10 ||
              ((*(int *)(uVar11 + 0x38) <= *(int *)(uVar10 + 0x38) &&
               (*(longlong *)(*(longlong *)(uVar10 + 0x30) + (longlong)*(int *)(uVar11 + 0x38) * 8)
                == uVar11 + 0x30)))))) {
            param_1[3] = *(ulonglong *)(uVar12 + 0x18);
            uVar10 = *(ulonglong *)(uVar12 + 0x20);
            if (uVar10 != 0) {
              if (DAT_14c949118 == 0) {
                local_70 = (PSRWLOCK)FUN_140631fbe;
                lVar9 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                DAT_14c949118 = lVar9;
                FUN_1446f470e(&local_a8,L"Class",1);
                local_110 = &local_70;
                local_118 = &LAB_146891e90;
                local_120 = (code *)&LAB_146273097;
                local_130 = (code *)0x149e2b68a;
                local_128 = (wchar_t *)CONCAT44(local_128._4_4_,199);
                local_138 = 0x20;
                local_140 = (PSRWLOCK *)CONCAT44(local_140._4_4_,0x10000000);
                local_148._0_4_ = 8;
                FUN_14574b4b2(lVar9);
                DAT_14c949118 = lVar9;
                if (DAT_14c951858 == 0) {
                  local_88 = (PSRWLOCK)FUN_1449e2820;
                  local_100 = FUN_14081d0ea;
                  local_108 = FUN_14081d0ea;
                  local_110 = &local_88;
                  local_118 = &LAB_1468c5283;
                  local_120 = FUN_142809da0;
                  local_128 = L"Engine";
                  local_130 = (code *)0x400000000;
                  local_138 = CONCAT44(local_138._4_4_,0x10000000);
                  local_140 = (PSRWLOCK *)CONCAT44(local_140._4_4_,8);
                  local_148._0_4_ = 0x50;
                  FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
                }
                lVar18 = DAT_14c951858;
                lVar9 = DAT_14c949118;
                uVar14 = FUN_1449e2fb2();
                local_148 = L"Class";
                FUN_14574b446(uVar14,lVar9,lVar18,L"/Script/CoreUObject");
              }
              if ((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(uVar10 + 0x10) + 0x38))
                 && (*(longlong *)
                      (*(longlong *)(*(longlong *)(uVar10 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) {
                if (DAT_14c950c29 == '\x01') {
                  FUN_1456cec3c(uVar10);
                }
                *param_1 = uVar10;
                param_1[4] = 0;
                param_1[5] = 0;
                if (DAT_14c949118 == 0) {
                  local_70 = (PSRWLOCK)FUN_140631fbe;
                  lVar9 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                  DAT_14c949118 = lVar9;
                  FUN_1446f470e(&local_a8,L"Class",1);
                  local_110 = &local_70;
                  local_118 = &LAB_146891e90;
                  local_120 = (code *)&LAB_146273097;
                  local_130 = (code *)0x149e2b68a;
                  local_128 = (wchar_t *)CONCAT44(local_128._4_4_,199);
                  local_138 = 0x20;
                  local_140 = (PSRWLOCK *)CONCAT44(local_140._4_4_,0x10000000);
                  local_148._0_4_ = 8;
                  FUN_14574b4b2(lVar9);
                  DAT_14c949118 = lVar9;
                  if (DAT_14c951858 == 0) {
                    local_88 = (PSRWLOCK)FUN_1449e2820;
                    local_100 = FUN_14081d0ea;
                    local_108 = FUN_14081d0ea;
                    local_110 = &local_88;
                    local_118 = &LAB_1468c5283;
                    local_120 = FUN_142809da0;
                    local_128 = L"Engine";
                    local_130 = (code *)0x400000000;
                    local_138 = CONCAT44(local_138._4_4_,0x10000000);
                    local_140 = (PSRWLOCK *)CONCAT44(local_140._4_4_,8);
                    local_148._0_4_ = 0x50;
                    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
                  }
                  lVar18 = DAT_14c951858;
                  lVar9 = DAT_14c949118;
                  uVar14 = FUN_1449e2fb2();
                  local_148 = L"Class";
                  FUN_14574b446(uVar14,lVar9,lVar18,L"/Script/CoreUObject");
                  uVar10 = *param_1;
                  if (uVar10 == 0) goto LAB_1414c7c9c;
                }
                if ((((DAT_14c949118 != 0) && (lVar9 = *(longlong *)(uVar10 + 0x10), lVar9 != 0)) &&
                    (*(int *)(DAT_14c949118 + 0x38) <= *(int *)(lVar9 + 0x38))) &&
                   (*(longlong *)
                     (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) ==
                    DAT_14c949118 + 0x30)) {
                  if (DAT_14c950c29 == '\x01') {
                    FUN_1456cec3c(uVar10);
                  }
                  *param_1 = uVar10;
                  if ((param_2 != 0) && ((param_5 == '\0' || ((char)param_1[6] != '\0')))) {
                    if (*(int *)(param_2 + 0x38) < *(int *)(uVar10 + 0x38)) {
                      *(undefined1 *)(param_1 + 6) = 0;
                    }
                    else {
                      bVar19 = *(longlong *)
                                (*(longlong *)(param_2 + 0x30) +
                                (longlong)*(int *)(uVar10 + 0x38) * 8) == uVar10 + 0x30;
                      *(bool *)(param_1 + 6) = bVar19;
                      if (bVar19) {
                        *param_1 = 0;
                      }
                    }
                  }
                }
                goto LAB_1414c7c9c;
              }
            }
            *param_1 = 0;
            param_1[4] = 0;
            param_1[5] = 0;
            goto LAB_1414c7c9c;
          }
          break;
        }
        uVar11 = *(ulonglong *)(uVar16 + 0x40);
        uVar4 = local_e8;
        uVar5 = local_e0;
        uVar14 = local_e0;
        uVar2 = local_e8;
        uVar16 = uVar11;
        if (uVar11 == 0) break;
      }
    } while( true );
  }
LAB_1414c74b8:
  uVar11 = FUN_1412964e9(uVar10,param_1[3],7);
  if (uVar11 != 0) {
    pRVar15 = (PSRWLOCK)(uVar11 | 1);
    local_88 = pRVar15;
    if (((uVar11 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
      FUN_1456cec3c();
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
      local_138 = FUN_140342cba();
      local_130 = FUN_1468c7f1e;
      local_140 = (PSRWLOCK *)0x0;
      local_148 = (wchar_t *)0x8001;
      FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
      atexit(FUN_14280c819);
      _Init_thread_footer(&DAT_14c951a88);
    }
    cVar6 = FUN_1400164de(&local_88,&DAT_14c951a38);
    if ((((cVar6 == '\0') || (((ulonglong)pRVar15[7].Ptr & 0x20000000) == 0)) ||
        (*(longlong *)(uVar10 + 0x120) == 0)) ||
       (uVar12 = FUN_1412964e9(*(longlong *)(uVar10 + 0x120),param_1[3],7), uVar12 == 0)) {
      uVar12 = uVar11;
    }
    goto LAB_1414c7c9c;
  }
  lVar9 = *(longlong *)(uVar10 + 0x120);
  if (lVar9 != 0) {
    uVar10 = param_1[3];
    goto LAB_1414c7c91;
  }
LAB_1414c757c:
  uVar12 = 0;
LAB_1414c7c9c:
  pRVar15 = (PSRWLOCK)(uVar12 | 1);
  local_88 = pRVar15;
  if (((uVar12 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
    local_138 = FUN_140342cba();
    local_130 = FUN_1468c7f1e;
    local_140 = (PSRWLOCK *)0x0;
    local_148 = (wchar_t *)0x8001;
    FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
    atexit(FUN_14280c819);
    _Init_thread_footer(&DAT_14c951a88);
  }
  cVar6 = FUN_1400164de(&local_88,&DAT_14c951a38);
  if (cVar6 != '\0') {
    *(byte *)((longlong)param_1 + 0x31) = (byte)((uint)*(undefined4 *)&pRVar15[7].Ptr >> 0x1d) & 1;
  }
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414c84c6 FUN_1414c84c6 body=531 status=ok
// SIG undefined FUN_1414c84c6(void)

void FUN_1414c84c6(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar7 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar7 = (longlong *)param_1[8];
  }
  iVar5 = (int)param_1[9];
  iVar11 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar11 = iVar5;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar11 >> 2) {
    plVar1 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = plVar1;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_58._0_4_ = 0xffffffff;
      iVar5 = 0;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar9 = local_68 >> 0x20;
      iVar5 = (int)param_1[5];
    }
    iVar15 = (int)local_68;
    uVar8 = (uint)local_58;
    iVar11 = local_58._4_4_;
    iVar6 = local_50;
    if (local_58._4_4_ != iVar5 || local_60 != plVar1) {
      do {
        *(undefined4 *)
         ((longlong)plVar7 + (longlong)*(int *)(*param_1 + 0x14 + (longlong)iVar11 * 0x18) * 4) =
             0xffffffff;
        uVar8 = ~(uint)uVar9 & uVar8;
        plVar14 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar14 = local_60;
        }
        iVar3 = (int)local_60[3];
        lVar12 = (longlong)iVar15;
        uVar10 = *(uint *)((longlong)plVar14 + lVar12 * 4) & uVar8;
        if (uVar10 == 0) {
          iVar11 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar11 = iVar3 + -1;
          }
          iVar11 = iVar11 >> 5;
          iVar6 = iVar6 + 0x20;
          iVar4 = iVar11;
          if (iVar11 < iVar15) {
            iVar4 = iVar15;
          }
          if (iVar15 < iVar11) {
            lVar13 = 0;
            do {
              uVar10 = *(uint *)((longlong)plVar14 + lVar13 * 4 + lVar12 * 4 + 4);
              if (uVar10 != 0) {
                iVar15 = iVar15 + (int)lVar13 + 1;
                uVar8 = 0xffffffff;
                goto LAB_1414c8610;
              }
              iVar6 = iVar6 + 0x20;
              lVar13 = lVar13 + 1;
            } while (iVar4 - lVar12 != lVar13);
            uVar8 = 0xffffffff;
            iVar15 = iVar4;
          }
          iVar15 = iVar15 + 1;
          iVar11 = iVar3;
        }
        else {
LAB_1414c8610:
          uVar9 = (ulonglong)(-uVar10 & uVar10);
          uVar2 = uVar9 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          iVar11 = (iVar6 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar11) {
            iVar11 = iVar3;
          }
        }
      } while (iVar11 != iVar5 || local_60 != plVar1);
    }
  }
  else if (0 < iVar5) {
    lVar12 = 0;
    do {
      *(undefined4 *)((longlong)plVar7 + lVar12 * 4) = 0xffffffff;
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)param_1[9]);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414c86da FUN_1414c86da body=84 status=ok
// SIG undefined FUN_1414c86da(void)

void FUN_1414c86da(void)

{
  FUN_145cf99dc(&DAT_14cb0dca0,L"/Engine/EngineResources/WhiteSquareTexture");
  FUN_145ee1bde(&DAT_14cb0dcb8,L"/Engine/EngineResources/WhiteSquareTexture.");
  FUN_145cf99dc(&DAT_14cb0dcd0,L"/Engine/EngineResources/GradientTexture0");
  FUN_145ee1bde(&DAT_14cb0dce8,L"/Engine/EngineResources/GradientTexture0.");
  return;
}



// FUNCTION 1414c872e thunk_FUN_140277b32 body=5 status=ok
// SIG undefined thunk_FUN_140277b32(void)

undefined8
thunk_FUN_140277b32(undefined8 param_1,longlong param_2,wchar_t *param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  size_t sVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_4a8 [32];
  undefined4 uStack_488;
  ulonglong uStack_480;
  undefined4 uStack_478;
  longlong lStack_470;
  undefined8 uStack_468;
  undefined1 *puStack_460;
  undefined1 *puStack_458;
  ulonglong *puStack_450;
  char cStack_448;
  undefined1 auStack_440 [1024];
  ulonglong uStack_40;
  
  uStack_40 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  lStack_470 = 0;
  if (param_2 != -1) {
    lStack_470 = param_2;
  }
  cStack_448 = '\0';
  puStack_450 = &uStack_40;
  puStack_460 = auStack_440;
  puStack_458 = auStack_440;
  if (param_3 != (wchar_t *)0x0) {
    sVar3 = wcslen(param_3);
    iVar5 = (int)sVar3;
    if (iVar5 < 0x200) {
      if (iVar5 == 0) goto LAB_140277bd5;
    }
    else {
      FUN_140213274(&puStack_460,(longlong)iVar5);
    }
    puVar1 = puStack_458;
    memcpy(puStack_458,param_3,(longlong)(sVar3 << 0x20) >> 0x1f);
    puStack_458 = puVar1 + (longlong)iVar5 * 2;
  }
LAB_140277bd5:
  if (param_2 == -1) {
    FUN_146900bf9(&puStack_460,0);
    lVar6 = 0;
  }
  else {
    uStack_480 = 0;
    uStack_488 = 0;
    uVar4 = 0;
    cVar2 = FUN_144922754(&lStack_470,&puStack_460,0,0);
    lVar6 = lStack_470;
    if (cVar2 == '\0') goto LAB_140277c68;
  }
  FUN_1446f82e2(&uStack_468,(ulonglong)((longlong)puStack_458 - (longlong)puStack_460) >> 1,
                puStack_460,1);
  uStack_478 = 0;
  uStack_480 = uStack_480 & 0xffffffff00000000;
  uStack_488 = CONCAT31(uStack_488._1_3_,param_2 == -1);
  uVar4 = FUN_14486e220(param_1,lVar6,uStack_468,param_4);
LAB_140277c68:
  if (cStack_448 == '\x01') {
    FUN_1400020a8(puStack_460);
  }
  if ((uStack_40 ^ (ulonglong)auStack_4a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1414c8733 FUN_1414c8733 body=57 status=ok
// SIG undefined FUN_1414c8733(void)

void FUN_1414c8733(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43c48 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43c48 = FUN_14171c317(FUN_14647b332,uVar1,L"ENiagaraExecutionState");
  }
  return;
}



// FUNCTION 1414c876c FUN_1414c876c body=486 status=ok
// SIG undefined FUN_1414c876c(void)

void FUN_1414c876c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414c8954 FUN_1414c8954 body=486 status=ok
// SIG undefined FUN_1414c8954(void)

void FUN_1414c8954(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414c8b3b FUN_1414c8b3b body=45 status=ok
// SIG undefined FUN_1414c8b3b(void)

void FUN_1414c8b3b(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1414c8b68 FUN_1414c8b68 body=471 status=ok
// SIG undefined FUN_1414c8b68(void)

void FUN_1414c8b68(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_98 [44];
  undefined4 local_6c;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1 + 0x88;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_6c = param_2;
  local_60 = lVar1;
  if (*(int *)(param_1 + 0xa0) == 0) {
    uVar15 = 1;
    local_58._0_4_ = 0xffffffff;
    iVar9 = 0;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar15 = local_68 >> 0x20;
    iVar9 = *(int *)(param_1 + 0xa0);
  }
  lVar5 = local_60;
  iVar8 = (int)local_68;
  uVar6 = (uint)local_58;
  iVar7 = local_58._4_4_;
  iVar10 = local_50;
  if (local_58._4_4_ != iVar9 || local_60 != lVar1) {
    do {
      FUN_1414c8d40(param_1,*(longlong *)(param_1 + 0x78) + (longlong)iVar7 * 0x180 + 0x10,local_6c)
      ;
      uVar6 = ~(uint)uVar15 & uVar6;
      lVar14 = *(longlong *)(lVar5 + 0x10);
      if (*(longlong *)(lVar5 + 0x10) == 0) {
        lVar14 = lVar5;
      }
      iVar3 = *(int *)(lVar5 + 0x18);
      lVar12 = (longlong)iVar8;
      uVar11 = *(uint *)(lVar14 + lVar12 * 4) & uVar6;
      if (uVar11 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar4 = iVar7;
        if (iVar7 < iVar8) {
          iVar4 = iVar8;
        }
        if (iVar8 < iVar7) {
          lVar13 = 0;
          do {
            uVar11 = *(uint *)(lVar14 + lVar12 * 4 + 4 + lVar13 * 4);
            if (uVar11 != 0) {
              iVar8 = iVar8 + (int)lVar13 + 1;
              uVar6 = 0xffffffff;
              goto LAB_1414c8c98;
            }
            iVar10 = iVar10 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar4 - lVar12 != lVar13);
          uVar6 = 0xffffffff;
          iVar8 = iVar4;
        }
        iVar8 = iVar8 + 1;
        iVar7 = iVar3;
      }
      else {
LAB_1414c8c98:
        uVar15 = (ulonglong)(-uVar11 & uVar11);
        uVar2 = uVar15 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar7) {
          iVar7 = iVar3;
        }
      }
    } while (iVar7 != iVar9 || lVar5 != lVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414c8d40 FUN_1414c8d40 body=11662 status=ok
// SIG undefined FUN_1414c8d40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1414c8d40(longlong param_1,undefined8 *param_2,int param_3)

{
  uint uVar1;
  ulonglong uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  byte bVar19;
  byte bVar20;
  bool bVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_1e8 [32];
  wchar_t *local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  wchar_t *local_1b0;
  wchar_t *local_1a8;
  code *local_1a0;
  undefined1 *local_198;
  code **local_190;
  code *local_188;
  code *local_180;
  longlong local_170;
  longlong *local_168;
  longlong *local_160;
  char local_155;
  int local_154;
  code *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined2 local_b8;
  byte bStack_b6;
  undefined1 uStack_b5;
  undefined4 uStack_b4;
  longlong local_a8;
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if ((((*(int *)(param_1 + 0x14) == 0) || (uVar16 = *(uint *)(param_1 + 0x10), (int)uVar16 < 0)) ||
      (DAT_14c9647dc <= (int)uVar16)) ||
     (((lVar18 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8), lVar18 == 0 ||
       (*(int *)(lVar18 + 0x10) != *(int *)(param_1 + 0x14))) ||
      ((*(uint *)(lVar18 + 8) & 0x10200000) != 0)))) goto LAB_1414c9a4b;
  bVar19 = *(byte *)((longlong)param_2 + 0x81);
  if (*(int *)((longlong)param_2 + 0xc) == 0) {
    iVar5 = 0;
    bVar20 = 0;
  }
  else {
    uVar16 = *(uint *)(param_2 + 1);
    bVar20 = 0;
    if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
      plVar13 = (longlong *)
                ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
      if ((plVar13 == (longlong *)0x0) ||
         (((int)plVar13[2] != *(int *)((longlong)param_2 + 0xc) ||
          ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) {
        bVar20 = 0;
      }
      else {
        if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
          lVar18 = *plVar13;
        }
        else {
          lVar18 = 0;
        }
        lVar14 = FUN_1414ba9b4();
        iVar5 = 0;
        bVar20 = false;
        if (*(int *)(lVar14 + 0x38) <= *(int *)(*(longlong *)(lVar18 + 0x10) + 0x38)) {
          bVar20 = *(longlong *)
                    (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) +
                    (longlong)*(int *)(lVar14 + 0x38) * 8) == lVar14 + 0x30;
        }
        if (*(int *)((longlong)param_2 + 0xc) == 0) goto LAB_1414c900b;
        uVar16 = *(uint *)(param_2 + 1);
        if (((((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) &&
             (plVar13 = (longlong *)
                        ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
             plVar13 != (longlong *)0x0)) &&
            (((int)plVar13[2] == *(int *)((longlong)param_2 + 0xc) &&
             ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)))) && (lVar18 = *plVar13, lVar18 != 0)) {
          lVar14 = FUN_14116e48a();
          if ((*(int *)(lVar14 + 0x38) <= *(int *)(*(longlong *)(lVar18 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar14 + 0x38) * 8) == lVar14 + 0x30)) {
            lVar14 = FUN_14187eb96(lVar18);
            if (*(int *)(lVar18 + 0xcc) == 0) {
LAB_1414caa6b:
              lVar11 = 0;
            }
            else {
              uVar16 = *(uint *)(lVar18 + 200);
              lVar11 = 0;
              if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
                plVar13 = (longlong *)
                          ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
                if ((plVar13 == (longlong *)0x0) ||
                   (((int)plVar13[2] != *(int *)(lVar18 + 0xcc) ||
                    ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_1414caa6b;
                lVar11 = *plVar13;
              }
            }
            bVar20 = bVar20 | lVar14 == lVar11;
          }
        }
        if (*(int *)((longlong)param_2 + 0xc) == 0) goto LAB_1414c900b;
        uVar16 = *(uint *)(param_2 + 1);
        if ((((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) &&
            (plVar13 = (longlong *)
                       ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
            plVar13 != (longlong *)0x0)) &&
           ((((int)plVar13[2] == *(int *)((longlong)param_2 + 0xc) &&
             ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)) && (lVar18 = *plVar13, lVar18 != 0)))) {
          if (DAT_14cba14f0 == 0) {
            local_190 = (code **)&local_e8;
            local_e8 = FUN_1449e2820;
            local_180 = FUN_14081d0ea;
            local_188 = (code *)&LAB_145885dac;
            local_198 = &LAB_148b9e16b;
            local_1a0 = FUN_140f505de;
            local_1a8 = L"Engine";
            local_1b0 = (wchar_t *)0x0;
            local_1b8 = CONCAT44(local_1b8._4_4_,0x10000000);
            local_1c0 = 8;
            local_1c8 = (wchar_t *)CONCAT44(local_1c8._4_4_,0x110);
            FUN_14081cfa3(L"/Script/OakGame",L"GbxDiscoveryProviderObject_OakMissionWaypoint",
                          &DAT_14cba14f0,&DAT_148b9e16a);
          }
          if ((*(int *)(DAT_14cba14f0 + 0x38) <= *(int *)(*(longlong *)(lVar18 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cba14f0 + 0x38) * 8) == DAT_14cba14f0 + 0x30)) {
            bVar20 = bVar20 | *(byte *)(lVar18 + 0xd8);
          }
        }
      }
    }
    iVar5 = *(int *)((longlong)param_2 + 0xc);
  }
LAB_1414c900b:
  bVar19 = param_3 != 0 & (bVar19 ^ 1);
  uVar16 = 0;
  if ((*(char *)((longlong)param_2 + 0x83) == '\0') && ((bVar20 & 1) == 0)) {
    if (((iVar5 != 0) &&
        (((uVar16 = *(uint *)(param_2 + 1), -1 < (int)uVar16 && ((int)uVar16 < DAT_14c9647dc)) &&
         (puVar6 = (undefined8 *)
                   ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
         puVar6 != (undefined8 *)0x0)))) &&
       ((*(int *)(puVar6 + 2) == iVar5 && ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)))) {
      if (*(int *)(param_1 + 0x14) == 0) {
LAB_1414ca8e8:
        lVar18 = 0;
      }
      else {
        uVar16 = *(uint *)(param_1 + 0x10);
        lVar18 = 0;
        if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
          plVar13 = (longlong *)
                    ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
          if ((plVar13 == (longlong *)0x0) ||
             (((int)plVar13[2] != *(int *)(param_1 + 0x14) ||
              ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_1414ca8e8;
          lVar18 = *plVar13;
        }
      }
      lVar14 = param_2[2];
      if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
        plVar13 = (longlong *)*puVar6;
      }
      else {
        plVar13 = (longlong *)0x0;
      }
      lVar11 = (**(code **)(*plVar13 + 0x2b8))();
      if ((longlong)*(int *)(lVar18 + 0x9c0) != 0) {
        lVar9 = *(longlong *)(lVar18 + 0x9b8);
        lVar18 = (longlong)*(int *)(lVar18 + 0x9c0) * 0x78 + lVar9;
        plVar13 = (longlong *)(lVar11 + 0x18);
        do {
          if (*(char *)(lVar9 + 0x70) == '\x01') {
            if (lVar11 != 0) {
              if ((longlong)*(int *)(lVar9 + 0x48) != 0) {
                local_160 = *(longlong **)(lVar9 + 0x40);
                local_170 = (longlong)*(int *)(lVar9 + 0x48) * 0x18;
                do {
                  lVar7 = local_160[1];
                  if (lVar7 == 0) {
                    uVar12 = FUN_14050c9fe();
                    lVar7 = FUN_14477b664(uVar12);
                    local_160[1] = lVar7;
                  }
                  lVar15 = local_160[2];
                  if (lVar15 == 0) {
                    if (lVar7 == 0) {
                      lVar15 = 0;
                    }
                    else {
                      lVar15 = 0;
                      if (*local_160 != 0) {
                        local_168 = *(longlong **)(lVar7 + 0xb8);
                        if ((local_168 == (longlong *)0x0) ||
                           (cVar3 = (**(code **)(*local_168 + 0x108))(), cVar3 == '\0')) {
                          lVar15 = 0;
                        }
                        else {
                          uVar12 = (**(code **)(*local_168 + 0x110))();
                          lVar15 = FUN_144aff482(uVar12,local_160);
                        }
                        local_160[2] = lVar15;
                      }
                    }
                  }
                  if (lVar15 == lVar11) {
                    if (local_160 != (longlong *)0x0) goto LAB_1414cb3e3;
                    break;
                  }
                  local_160 = local_160 + 3;
                  local_170 = local_170 + -0x18;
                } while (local_170 != 0);
              }
              lVar7 = *(longlong *)(lVar11 + 0x20);
              if (lVar7 == 0) {
                FUN_145d88524();
                lVar7 = FUN_14477b664();
                *(longlong *)(lVar11 + 0x20) = lVar7;
              }
              if (*(longlong *)(lVar11 + 0x28) == 0) {
                if ((lVar7 != 0) && (*plVar13 != 0)) {
                  local_160 = *(longlong **)(lVar7 + 0xb8);
                  if ((local_160 == (longlong *)0x0) ||
                     (cVar3 = (**(code **)(*local_160 + 0x108))(), cVar3 == '\0')) {
                    *(undefined8 *)(lVar11 + 0x28) = 0;
                  }
                  else {
                    uVar12 = (**(code **)(*local_160 + 0x110))();
                    lVar7 = FUN_144aff482(uVar12,plVar13);
                    *(longlong *)(lVar11 + 0x28) = lVar7;
                    if (lVar7 != 0) goto LAB_1414c92b8;
                  }
                }
              }
              else {
LAB_1414c92b8:
                if ((longlong)*(int *)(lVar9 + 0x58) != 0) {
                  plVar8 = *(longlong **)(lVar9 + 0x50);
                  lVar7 = (longlong)*(int *)(lVar9 + 0x58) * 0x18;
                  do {
                    if (*plVar13 == *plVar8) {
                      if (plVar8 != (longlong *)0x0) goto LAB_1414cb3e3;
                      break;
                    }
                    plVar8 = plVar8 + 3;
                    lVar7 = lVar7 + -0x18;
                  } while (lVar7 != 0);
                }
              }
            }
            if ((lVar14 != 0) && ((longlong)*(int *)(lVar9 + 0x68) != 0)) {
              local_160 = *(longlong **)(lVar9 + 0x60);
              local_170 = (longlong)*(int *)(lVar9 + 0x68) * 0x18;
              do {
                lVar7 = local_160[1];
                if (lVar7 == 0) {
                  uVar12 = FUN_140bd9786();
                  lVar7 = FUN_14477b664(uVar12);
                  local_160[1] = lVar7;
                }
                lVar15 = local_160[2];
                if (lVar15 == 0) {
                  if (lVar7 == 0) {
                    lVar15 = 0;
                  }
                  else {
                    lVar15 = 0;
                    if (*local_160 != 0) {
                      local_168 = *(longlong **)(lVar7 + 0xb8);
                      if ((local_168 == (longlong *)0x0) ||
                         (cVar3 = (**(code **)(*local_168 + 0x108))(), cVar3 == '\0')) {
                        lVar15 = 0;
                      }
                      else {
                        uVar12 = (**(code **)(*local_168 + 0x110))();
                        lVar15 = FUN_144aff482(uVar12,local_160);
                      }
                      local_160[2] = lVar15;
                    }
                  }
                }
                if (lVar15 == lVar14) {
                  if (local_160 != (longlong *)0x0) goto LAB_1414cb3e3;
                  break;
                }
                local_160 = local_160 + 3;
                local_170 = local_170 + -0x18;
              } while (local_170 != 0);
            }
          }
          lVar9 = lVar9 + 0x78;
        } while (lVar9 != lVar18);
      }
    }
    goto LAB_1414c906f;
  }
LAB_1414c949c:
  if (iVar5 != 0) {
LAB_1414c94a1:
    uVar1 = *(uint *)(param_2 + 1);
    if ((((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) &&
        (plVar13 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar13 != (longlong *)0x0)) &&
       (((int)plVar13[2] == iVar5 && ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
        lVar18 = *plVar13;
      }
      else {
        lVar18 = 0;
      }
      if ((*(char *)(lVar18 + 0x60) == '\x01') &&
         (lVar18 = *(longlong *)(lVar18 + 0x50), lVar18 != 0)) {
        uVar12 = FUN_140390f40();
        cVar3 = FUN_1448093f4(lVar18,uVar12);
        if ((cVar3 != '\0') &&
           ((*(char *)(lVar18 + 0x18e) == '\x01' && (*(char *)((longlong)param_2 + 0x82) == '\0'))))
        {
          if (*(int *)((longlong)param_2 + 0xc) == 0) {
LAB_1414ca85f:
            plVar13 = (longlong *)0x0;
          }
          else {
            uVar1 = *(uint *)(param_2 + 1);
            if ((((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) &&
                (puVar6 = (undefined8 *)
                          ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                puVar6 != (undefined8 *)0x0)) &&
               ((*(int *)(puVar6 + 2) == *(int *)((longlong)param_2 + 0xc) &&
                ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)))) {
              if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
                plVar13 = (longlong *)*puVar6;
              }
              else {
                plVar13 = (longlong *)0x0;
              }
              lVar18 = (**(code **)(*plVar13 + 0x2b8))();
              if ((lVar18 != 0) && (*(char *)(lVar18 + 0x96) == '\x01')) {
                if (*(int *)((longlong)param_2 + 0xc) == 0) goto LAB_1414ca85f;
                uVar1 = *(uint *)(param_2 + 1);
                if ((((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) &&
                    (plVar13 = (longlong *)
                               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                    plVar13 != (longlong *)0x0)) &&
                   ((((int)plVar13[2] == *(int *)((longlong)param_2 + 0xc) &&
                     ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)) &&
                    (plVar13 = (longlong *)*plVar13, plVar13 != (longlong *)0x0)))) {
                  if (DAT_14cb5d278 == 0) {
                    local_190 = (code **)&local_e8;
                    local_e8 = FUN_1449e2820;
                    local_180 = FUN_14081d0ea;
                    local_188 = (code *)&LAB_145885dac;
                    local_198 = &LAB_1486962c5;
                    local_1a0 = FUN_1464da8ae;
                    local_1a8 = L"Engine";
                    local_1b0 = (wchar_t *)0x0;
                    local_1b8 = CONCAT44(local_1b8._4_4_,0x10000000);
                    local_1c0 = 8;
                    local_1c8 = (wchar_t *)CONCAT44(local_1c8._4_4_,0x118);
                    FUN_14081cfa3(L"/Script/GbxGame",L"GbxDiscoveryProviderObject_DiscoveryLocation"
                                  ,&DAT_14cb5d278,&DAT_1486962c4);
                  }
                  if ((*(int *)(DAT_14cb5d278 + 0x38) <= *(int *)(plVar13[2] + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(plVar13[2] + 0x30) +
                       (longlong)*(int *)(DAT_14cb5d278 + 0x38) * 8) == DAT_14cb5d278 + 0x30)) {
                    uVar12 = FUN_14073fae1();
                    uVar10 = (**(code **)(*plVar13 + 0x180))(plVar13);
                    cVar3 = FUN_14073fcba(uVar12,plVar13[0x19],uVar10);
                    if ((cVar3 != '\0') &&
                       (cVar3 = (**(code **)(*plVar13 + 0x388))(plVar13,plVar13[0x19]),
                       cVar3 != '\0')) goto LAB_1414c94de;
                  }
                }
              }
            }
            if (*(int *)((longlong)param_2 + 0xc) == 0) goto LAB_1414ca85f;
            uVar1 = *(uint *)(param_2 + 1);
            plVar13 = (longlong *)0x0;
            if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
              puVar6 = (undefined8 *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
              if ((puVar6 == (undefined8 *)0x0) ||
                 ((*(int *)(puVar6 + 2) != *(int *)((longlong)param_2 + 0xc) ||
                  ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_1414ca85f;
              plVar13 = (longlong *)*puVar6;
            }
          }
          (**(code **)(*plVar13 + 0x2b0))(plVar13,&local_e8);
          local_148 = local_c8;
          uStack_140 = uStack_c0;
          if (*(longlong *)(param_1 + 0x60) != 0) {
            fVar22 = (float)FUN_140e0ad52(*(longlong *)(param_1 + 0x60),&local_148);
            bVar19 = fVar22 < 0.25 & bVar19;
          }
        }
      }
    }
  }
LAB_1414c94de:
  if (*(int *)(param_1 + 0x14) == 0) {
LAB_1414c9c2d:
    lVar18 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x10);
    lVar18 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar13 = (longlong *)
                ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar13 == (longlong *)0x0) ||
         (((int)plVar13[2] != *(int *)(param_1 + 0x14) ||
          ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_1414c9c2d;
      lVar18 = *plVar13;
    }
  }
  iVar5 = *(int *)(param_2 + 0x1c);
  if (iVar5 == 0) {
LAB_1414c9696:
    bVar21 = false;
  }
  else {
    uVar1 = *(uint *)((longlong)param_2 + 0xdc);
    bVar21 = false;
    if ((-1 < (int)uVar1) && (bVar21 = false, (int)uVar1 < DAT_14c9647dc)) {
      lVar14 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar14 == 0) || (*(int *)(lVar14 + 0x10) != iVar5)) goto LAB_1414c9696;
      bVar21 = (*(uint *)(lVar14 + 8) & 0x10200000) == 0;
    }
  }
  if (bVar19 == 0) {
    if (bVar21) {
      FUN_1413ed2ca(param_2);
    }
  }
  else if (!bVar21) {
    if (((((iVar5 != 0) && (uVar1 = *(uint *)((longlong)param_2 + 0xdc), -1 < (int)uVar1)) &&
         ((int)uVar1 < DAT_14c9647dc)) &&
        ((puVar6 = (undefined8 *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         puVar6 != (undefined8 *)0x0 && (*(int *)(puVar6 + 2) == iVar5)))) &&
       ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
        uVar12 = *puVar6;
      }
      else {
        uVar12 = 0;
      }
      FUN_140aeefbc(uVar12,0,1);
      *(undefined8 *)((longlong)param_2 + 0xdc) = 0;
    }
    if (*(char *)(lVar18 + 0x68c) == '\x01') {
      uVar4 = *(undefined4 *)(lVar18 + 0x690);
    }
    else {
      uVar4 = FUN_1441947f2(lVar18);
    }
    FUN_140f076f6(param_2,uVar4);
    local_160 = (longlong *)FUN_1447210f0(lVar18);
    lVar14 = FUN_1410ac07e(lVar18);
    if (lVar14 == 0) {
LAB_1414c9c55:
      lVar7 = 0;
    }
    else {
      if ((((*(int *)(lVar14 + 0x5c) == 0) || (uVar1 = *(uint *)(lVar14 + 0x58), (int)uVar1 < 0)) ||
          ((DAT_14c9647dc <= (int)uVar1 ||
           (((plVar13 = (longlong *)
                        ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
             plVar13 == (longlong *)0x0 || ((int)plVar13[2] != *(int *)(lVar14 + 0x5c))) ||
            ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))))) || (lVar11 = *plVar13, lVar11 == 0)) {
        if (*(longlong *)(lVar14 + 0x60) != 0) {
          lVar11 = FUN_140007850(lVar14 + 0x60);
          cVar3 = (*(code *)PTR_FUN_14c758760)();
          lVar9 = DAT_14c9647c8;
          if ((lVar11 == 0) || (cVar3 == '\0')) {
            if (lVar11 != 0) {
              uVar1 = *(uint *)(lVar11 + 0xc);
              *(uint *)(lVar14 + 0x58) = uVar1;
              if (DAT_14c9647dc <= (int)uVar1) goto LAB_1414ca6b0;
              lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
              goto LAB_1414c9c1b;
            }
            *(undefined8 *)(lVar14 + 0x58) = 0;
          }
          else {
            uVar1 = *(uint *)(lVar11 + 0xc);
            if ((int)uVar1 < DAT_14c9647dc) {
              if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8) +
                            ((ulonglong)(uVar1 & 0xffff) * 3 + 1) * 8) & 0x8400000) == 0) {
                *(uint *)(lVar14 + 0x58) = uVar1;
                lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                        *(longlong *)(lVar9 + (ulonglong)(uVar1 >> 0x10) * 8);
LAB_1414c9c1b:
                iVar5 = *(int *)(lVar9 + 0x10);
                if (iVar5 == 0) {
                  local_170 = CONCAT44(local_170._4_4_,uVar16);
                  LOCK();
                  iVar5 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar17 = DAT_14c964868 + 1;
                  bVar21 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar5;
                  if (bVar21) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar17);
                  }
                  LOCK();
                  iVar5 = *(int *)(lVar9 + 0x10);
                  bVar21 = iVar5 == 0;
                  if (bVar21) {
                    *(int *)(lVar9 + 0x10) = iVar17;
                    iVar5 = 0;
                  }
                  UNLOCK();
                  if (bVar21) {
                    iVar5 = iVar17;
                  }
                  uVar16 = (uint)local_170;
                }
                *(int *)(lVar14 + 0x5c) = iVar5;
              }
            }
            else if ((_DAT_00000008 & 0x8400000) == 0) {
              *(uint *)(lVar14 + 0x58) = uVar1;
LAB_1414ca6b0:
              lVar9 = 0;
              goto LAB_1414c9c1b;
            }
            if ((*(uint *)(lVar11 + 8) >> 0x1e & 1) == 0) goto LAB_1414c9b0d;
          }
        }
        goto LAB_1414c9c55;
      }
LAB_1414c9b0d:
      if (DAT_14c949118 == 0) {
        local_170 = CONCAT44(local_170._4_4_,uVar16);
        local_150 = FUN_140631fbe;
        lVar9 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c949118 = lVar9;
        FUN_1446f470e(&local_148,L"Class",1);
        local_198 = &LAB_146891e90;
        local_1a0 = (code *)&LAB_146273097;
        local_1b0 = L"Engine";
        local_1a8 = (wchar_t *)CONCAT44(local_1a8._4_4_,199);
        local_1b8 = 0x20;
        local_1c0 = 0x10000000;
        local_1c8._0_4_ = 8;
        local_190 = &local_150;
        FUN_14574b4b2(lVar9);
        DAT_14c949118 = lVar9;
        if (DAT_14c951858 == (longlong *)0x0) {
          local_190 = (code **)&local_e8;
          local_e8 = FUN_1449e2820;
          local_180 = FUN_14081d0ea;
          local_188 = FUN_14081d0ea;
          local_198 = &LAB_1468c5283;
          local_1a0 = FUN_142809da0;
          local_1a8 = L"Engine";
          local_1b0 = (wchar_t *)0x400000000;
          local_1b8 = CONCAT44(local_1b8._4_4_,0x10000000);
          local_1c0 = 8;
          local_1c8._0_4_ = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        plVar13 = DAT_14c951858;
        lVar9 = DAT_14c949118;
        uVar12 = FUN_1449e2fb2();
        local_1c8 = L"Class";
        FUN_14574b446(uVar12,lVar9,plVar13,L"/Script/CoreUObject");
        uVar16 = (uint)local_170;
      }
      if (((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
         ((lVar9 = FUN_14090b288(), lVar9 == 0 || (*(int *)(lVar11 + 0x38) < *(int *)(lVar9 + 0x38))
          ))) goto LAB_1414c9c55;
      lVar7 = 0;
      if (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
          lVar9 + 0x30) {
        lVar7 = lVar11;
      }
    }
    if ((((*(int *)((longlong)param_2 + 0xc) != 0) &&
         (uVar1 = *(uint *)(param_2 + 1), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) &&
       (((puVar6 = (undefined8 *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         puVar6 != (undefined8 *)0x0 && (*(int *)(puVar6 + 2) == *(int *)((longlong)param_2 + 0xc)))
        && ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
        plVar13 = (longlong *)*puVar6;
      }
      else {
        plVar13 = (longlong *)0x0;
      }
      fVar22 = (float)(**(code **)(*plVar13 + 0x2c0))();
      if ((lVar14 != 0) && (0.0001 < fVar22)) {
        if (((*(int *)(lVar14 + 0x84) == 0) ||
            ((((uVar1 = *(uint *)(lVar14 + 0x80), (int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1))
              || (plVar13 = (longlong *)
                            ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                 plVar13 == (longlong *)0x0)) ||
             (((int)plVar13[2] != *(int *)(lVar14 + 0x84) ||
              ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))))) || (lVar11 = *plVar13, lVar11 == 0))
        {
          if (*(longlong *)(lVar14 + 0x88) != 0) {
            lVar11 = FUN_140007850(lVar14 + 0x88);
            cVar3 = (*(code *)PTR_FUN_14c758760)();
            lVar9 = DAT_14c9647c8;
            local_170 = CONCAT44(local_170._4_4_,uVar16);
            if ((lVar11 == 0) || (cVar3 == '\0')) {
              if (lVar11 != 0) {
                uVar16 = *(uint *)(lVar11 + 0xc);
                *(uint *)(lVar14 + 0x80) = uVar16;
                if (DAT_14c9647dc <= (int)uVar16) goto LAB_1414ca981;
                lVar9 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
                goto LAB_1414ca695;
              }
              *(undefined8 *)(lVar14 + 0x80) = 0;
            }
            else {
              uVar16 = *(uint *)(lVar11 + 0xc);
              if ((int)uVar16 < DAT_14c9647dc) {
                if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8) +
                              ((ulonglong)(uVar16 & 0xffff) * 3 + 1) * 8) & 0x8400000) == 0) {
                  *(uint *)(lVar14 + 0x80) = uVar16;
                  lVar9 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                          *(longlong *)(lVar9 + (ulonglong)(uVar16 >> 0x10) * 8);
LAB_1414ca695:
                  iVar5 = *(int *)(lVar9 + 0x10);
                  if (*(int *)(lVar9 + 0x10) == 0) {
                    LOCK();
                    iVar5 = DAT_14c964868 + 1;
                    UNLOCK();
                    iVar17 = DAT_14c964868 + 1;
                    local_168 = (longlong *)CONCAT44(local_168._4_4_,iVar17);
                    bVar21 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar5;
                    if (bVar21) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,iVar17);
                    }
                    LOCK();
                    iVar5 = *(int *)(lVar9 + 0x10);
                    bVar21 = iVar5 == 0;
                    if (bVar21) {
                      *(int *)(lVar9 + 0x10) = (int)local_168;
                      iVar5 = 0;
                    }
                    UNLOCK();
                    if (bVar21) {
                      iVar5 = (int)local_168;
                    }
                  }
                  *(int *)(lVar14 + 0x84) = iVar5;
                }
              }
              else if ((_DAT_00000008 & 0x8400000) == 0) {
                *(uint *)(lVar14 + 0x80) = uVar16;
LAB_1414ca981:
                lVar9 = 0;
                goto LAB_1414ca695;
              }
              uVar16 = (uint)local_170;
              if ((*(uint *)(lVar11 + 8) >> 0x1e & 1) == 0) goto LAB_1414c9ee9;
            }
          }
        }
        else {
LAB_1414c9ee9:
          if (DAT_14c949118 == 0) {
            local_170 = CONCAT44(local_170._4_4_,uVar16);
            local_150 = FUN_140631fbe;
            lVar9 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
            DAT_14c949118 = lVar9;
            FUN_1446f470e(&local_148,L"Class",1);
            local_190 = &local_150;
            local_198 = &LAB_146891e90;
            local_1a0 = (code *)&LAB_146273097;
            local_1b0 = L"Engine";
            local_1a8 = (wchar_t *)CONCAT44(local_1a8._4_4_,199);
            local_1b8 = 0x20;
            local_1c0 = 0x10000000;
            local_1c8._0_4_ = 8;
            FUN_14574b4b2(lVar9);
            local_168 = DAT_14c951858;
            DAT_14c949118 = lVar9;
            if (DAT_14c951858 == (longlong *)0x0) {
              local_190 = (code **)&local_e8;
              local_e8 = FUN_1449e2820;
              local_180 = FUN_14081d0ea;
              local_188 = FUN_14081d0ea;
              local_198 = &LAB_1468c5283;
              local_1a0 = FUN_142809da0;
              local_1a8 = L"Engine";
              local_1b0 = (wchar_t *)0x400000000;
              local_1b8 = CONCAT44(local_1b8._4_4_,0x10000000);
              local_1c0 = 8;
              local_1c8._0_4_ = 0x50;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
            }
            lVar9 = DAT_14c949118;
            local_168 = DAT_14c951858;
            uVar12 = FUN_1449e2fb2();
            local_1c8 = L"Class";
            FUN_14574b446(uVar12,lVar9,local_168,L"/Script/CoreUObject");
            uVar16 = (uint)local_170;
          }
          if ((((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) &&
              (lVar9 = FUN_14090b288(), lVar9 != 0)) &&
             ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar11 + 0x38) &&
              (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
               lVar9 + 0x30)))) {
            if (((*(int *)(lVar14 + 0x84) == 0) ||
                ((uVar1 = *(uint *)(lVar14 + 0x80), (int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1))
                )) || ((plVar13 = (longlong *)
                                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                       plVar13 == (longlong *)0x0 ||
                       ((((int)plVar13[2] != *(int *)(lVar14 + 0x84) ||
                         ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)) ||
                        (lVar11 = *plVar13, lVar11 == 0)))))) {
              if (*(longlong *)(lVar14 + 0x88) != 0) {
                lVar11 = FUN_140007850(lVar14 + 0x88);
                cVar3 = (*(code *)PTR_FUN_14c758760)();
                lVar9 = DAT_14c9647c8;
                if ((lVar11 == 0) || (cVar3 == '\0')) {
                  if (lVar11 != 0) {
                    uVar1 = *(uint *)(lVar11 + 0xc);
                    *(uint *)(lVar14 + 0x80) = uVar1;
                    if (DAT_14c9647dc <= (int)uVar1) goto LAB_1414cad25;
                    lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
                    goto LAB_1414caca5;
                  }
                  *(undefined8 *)(lVar14 + 0x80) = 0;
                }
                else {
                  uVar1 = *(uint *)(lVar11 + 0xc);
                  if ((int)uVar1 < DAT_14c9647dc) {
                    if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8) +
                                  ((ulonglong)(uVar1 & 0xffff) * 3 + 1) * 8) & 0x8400000) == 0) {
                      *(uint *)(lVar14 + 0x80) = uVar1;
                      lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                              *(longlong *)(lVar9 + (ulonglong)(uVar1 >> 0x10) * 8);
LAB_1414caca5:
                      iVar5 = *(int *)(lVar9 + 0x10);
                      if (*(int *)(lVar9 + 0x10) == 0) {
                        LOCK();
                        iVar5 = DAT_14c964868 + 1;
                        UNLOCK();
                        iVar17 = DAT_14c964868 + 1;
                        local_168 = (longlong *)CONCAT44(local_168._4_4_,iVar17);
                        bVar21 = DAT_14c964868 < 1000;
                        DAT_14c964868 = iVar5;
                        if (bVar21) {
                          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                        0x23d,
                                        L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                        ,iVar17);
                        }
                        LOCK();
                        iVar5 = *(int *)(lVar9 + 0x10);
                        bVar21 = iVar5 == 0;
                        if (bVar21) {
                          *(int *)(lVar9 + 0x10) = (int)local_168;
                          iVar5 = 0;
                        }
                        UNLOCK();
                        if (bVar21) {
                          iVar5 = (int)local_168;
                        }
                      }
                      *(int *)(lVar14 + 0x84) = iVar5;
                    }
                  }
                  else if ((_DAT_00000008 & 0x8400000) == 0) {
                    *(uint *)(lVar14 + 0x80) = uVar1;
LAB_1414cad25:
                    lVar9 = 0;
                    goto LAB_1414caca5;
                  }
                  if ((*(uint *)(lVar11 + 8) >> 0x1e & 1) == 0) goto LAB_1414c9fb5;
                }
              }
            }
            else {
LAB_1414c9fb5:
              if (DAT_14c949118 == 0) {
                local_170 = CONCAT44(local_170._4_4_,uVar16);
                local_150 = FUN_140631fbe;
                lVar14 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                DAT_14c949118 = lVar14;
                FUN_1446f470e(&local_148,L"Class",1);
                local_198 = &LAB_146891e90;
                local_1a0 = (code *)&LAB_146273097;
                local_1b0 = L"Engine";
                local_1a8 = (wchar_t *)CONCAT44(local_1a8._4_4_,199);
                local_1b8 = 0x20;
                local_1c0 = 0x10000000;
                local_1c8._0_4_ = 8;
                local_190 = &local_150;
                FUN_14574b4b2(lVar14);
                DAT_14c949118 = lVar14;
                if (DAT_14c951858 == (longlong *)0x0) {
                  local_190 = (code **)&local_e8;
                  local_e8 = FUN_1449e2820;
                  local_180 = FUN_14081d0ea;
                  local_188 = FUN_14081d0ea;
                  local_198 = &LAB_1468c5283;
                  local_1a0 = FUN_142809da0;
                  local_1a8 = L"Engine";
                  local_1b0 = (wchar_t *)0x400000000;
                  local_1b8 = CONCAT44(local_1b8._4_4_,0x10000000);
                  local_1c0 = 8;
                  local_1c8._0_4_ = 0x50;
                  FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
                }
                plVar13 = DAT_14c951858;
                lVar14 = DAT_14c949118;
                uVar12 = FUN_1449e2fb2();
                local_1c8 = L"Class";
                FUN_14574b446(uVar12,lVar14,plVar13,L"/Script/CoreUObject");
                uVar16 = (uint)local_170;
              }
              if (((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38))
                  && (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
                       (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) &&
                 ((lVar14 = FUN_14090b288(), lVar14 != 0 &&
                  (*(int *)(lVar14 + 0x38) <= *(int *)(lVar11 + 0x38))))) {
                lVar7 = 0;
                if (*(longlong *)
                     (*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) ==
                    lVar14 + 0x30) {
                  lVar7 = lVar11;
                }
                goto LAB_1414c9c9b;
              }
            }
            lVar7 = 0;
          }
        }
      }
    }
LAB_1414c9c9b:
    lVar14 = param_2[2];
    if (lVar14 != 0) {
      if (((((*(int *)(lVar14 + 0xec) == 0) || (uVar1 = *(uint *)(lVar14 + 0xe8), (int)uVar1 < 0))
           || (DAT_14c9647dc <= (int)uVar1)) ||
          ((plVar13 = (longlong *)
                      ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           plVar13 == (longlong *)0x0 || ((int)plVar13[2] != *(int *)(lVar14 + 0xec))))) ||
         (((*(uint *)(plVar13 + 1) & 0x10200000) != 0 || (lVar11 = *plVar13, lVar11 == 0)))) {
        if (*(longlong *)(lVar14 + 0xf0) != 0) {
          lVar11 = FUN_140007850(lVar14 + 0xf0);
          cVar3 = (*(code *)PTR_FUN_14c758760)();
          lVar9 = DAT_14c9647c8;
          local_170 = CONCAT44(local_170._4_4_,uVar16);
          if ((lVar11 == 0) || (cVar3 == '\0')) {
            if (lVar11 != 0) {
              uVar16 = *(uint *)(lVar11 + 0xc);
              *(uint *)(lVar14 + 0xe8) = uVar16;
              if (DAT_14c9647dc <= (int)uVar16) goto LAB_1414ca6bf;
              lVar9 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
              goto LAB_1414ca0ce;
            }
            *(undefined8 *)(lVar14 + 0xe8) = 0;
          }
          else {
            uVar16 = *(uint *)(lVar11 + 0xc);
            if ((int)uVar16 < DAT_14c9647dc) {
              if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8) +
                            ((ulonglong)(uVar16 & 0xffff) * 3 + 1) * 8) & 0x8400000) == 0) {
                *(uint *)(lVar14 + 0xe8) = uVar16;
                lVar9 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                        *(longlong *)(lVar9 + (ulonglong)(uVar16 >> 0x10) * 8);
LAB_1414ca0ce:
                iVar5 = *(int *)(lVar9 + 0x10);
                if (*(int *)(lVar9 + 0x10) == 0) {
                  LOCK();
                  iVar5 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar17 = DAT_14c964868 + 1;
                  local_168 = (longlong *)CONCAT44(local_168._4_4_,iVar17);
                  bVar21 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar5;
                  if (bVar21) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar17);
                  }
                  LOCK();
                  iVar5 = *(int *)(lVar9 + 0x10);
                  bVar21 = iVar5 == 0;
                  if (bVar21) {
                    *(int *)(lVar9 + 0x10) = (int)local_168;
                    iVar5 = 0;
                  }
                  UNLOCK();
                  if (bVar21) {
                    iVar5 = (int)local_168;
                  }
                }
                *(int *)(lVar14 + 0xec) = iVar5;
              }
            }
            else if ((_DAT_00000008 & 0x8400000) == 0) {
              *(uint *)(lVar14 + 0xe8) = uVar16;
LAB_1414ca6bf:
              lVar9 = 0;
              goto LAB_1414ca0ce;
            }
            uVar16 = (uint)local_170;
            if ((*(uint *)(lVar11 + 8) >> 0x1e & 1) == 0) goto LAB_1414c9d13;
          }
        }
      }
      else {
LAB_1414c9d13:
        if (DAT_14c949118 == 0) {
          local_170 = CONCAT44(local_170._4_4_,uVar16);
          local_150 = FUN_140631fbe;
          lVar14 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          DAT_14c949118 = lVar14;
          FUN_1446f470e(&local_148,L"Class",1);
          local_198 = &LAB_146891e90;
          local_1a0 = (code *)&LAB_146273097;
          local_1b0 = L"Engine";
          local_1a8 = (wchar_t *)CONCAT44(local_1a8._4_4_,199);
          local_1b8 = 0x20;
          local_1c0 = 0x10000000;
          local_1c8._0_4_ = 8;
          local_190 = &local_150;
          FUN_14574b4b2(lVar14);
          DAT_14c949118 = lVar14;
          if (DAT_14c951858 == (longlong *)0x0) {
            local_190 = (code **)&local_e8;
            local_e8 = FUN_1449e2820;
            local_180 = FUN_14081d0ea;
            local_188 = FUN_14081d0ea;
            local_198 = &LAB_1468c5283;
            local_1a0 = FUN_142809da0;
            local_1a8 = L"Engine";
            local_1b0 = (wchar_t *)0x400000000;
            local_1b8 = CONCAT44(local_1b8._4_4_,0x10000000);
            local_1c0 = 8;
            local_1c8._0_4_ = 0x50;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
          }
          plVar13 = DAT_14c951858;
          lVar14 = DAT_14c949118;
          uVar12 = FUN_1449e2fb2();
          local_1c8 = L"Class";
          FUN_14574b446(uVar12,lVar14,plVar13,L"/Script/CoreUObject");
          uVar16 = (uint)local_170;
        }
        if ((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) {
          if (DAT_14cac9ca8 == 0) {
            local_190 = (code **)&local_e8;
            local_e8 = FUN_141030f22;
            local_180 = FUN_14081d0ea;
            local_188 = FUN_14081d0ea;
            local_198 = &LAB_1478c0a72;
            local_1a0 = (code *)&LAB_1417b2375;
            local_1a8 = L"Engine";
            local_1b0 = (wchar_t *)0x1000000000;
            local_1b8 = CONCAT44(local_1b8._4_4_,0x10000004);
            local_1c0 = 8;
            local_1c8 = (wchar_t *)CONCAT44(local_1c8._4_4_,0x390);
            FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
            if (DAT_14cac9ca8 == 0) goto LAB_1414ca18f;
          }
          if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(lVar11 + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) ==
              DAT_14cac9ca8 + 0x30)) {
            lVar14 = param_2[2];
            if (((*(int *)(lVar14 + 0xec) == 0) ||
                (((uVar1 = *(uint *)(lVar14 + 0xe8), (int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1)
                  ) || (plVar13 = (longlong *)
                                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                       plVar13 == (longlong *)0x0)))) ||
               ((((int)plVar13[2] != *(int *)(lVar14 + 0xec) ||
                 ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)) || (lVar11 = *plVar13, lVar11 == 0)))
               ) {
              if (*(longlong *)(lVar14 + 0xf0) != 0) {
                lVar11 = FUN_140007850(lVar14 + 0xf0);
                cVar3 = (*(code *)PTR_FUN_14c758760)();
                lVar9 = DAT_14c9647c8;
                if ((lVar11 == 0) || (cVar3 == '\0')) {
                  if (lVar11 != 0) {
                    uVar1 = *(uint *)(lVar11 + 0xc);
                    *(uint *)(lVar14 + 0xe8) = uVar1;
                    if (DAT_14c9647dc <= (int)uVar1) goto LAB_1414cac54;
                    lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
                    goto LAB_1414caa56;
                  }
                  *(undefined8 *)(lVar14 + 0xe8) = 0;
                }
                else {
                  uVar1 = *(uint *)(lVar11 + 0xc);
                  if ((int)uVar1 < DAT_14c9647dc) {
                    if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8) +
                                  ((ulonglong)(uVar1 & 0xffff) * 3 + 1) * 8) & 0x8400000) == 0) {
                      *(uint *)(lVar14 + 0xe8) = uVar1;
                      lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                              *(longlong *)(lVar9 + (ulonglong)(uVar1 >> 0x10) * 8);
LAB_1414caa56:
                      iVar5 = *(int *)(lVar9 + 0x10);
                      if (iVar5 == 0) {
                        local_170 = CONCAT44(local_170._4_4_,uVar16);
                        LOCK();
                        iVar5 = DAT_14c964868 + 1;
                        UNLOCK();
                        iVar17 = DAT_14c964868 + 1;
                        bVar21 = DAT_14c964868 < 1000;
                        DAT_14c964868 = iVar5;
                        if (bVar21) {
                          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                        0x23d,
                                        L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                        ,iVar17);
                        }
                        LOCK();
                        iVar5 = *(int *)(lVar9 + 0x10);
                        bVar21 = iVar5 == 0;
                        if (bVar21) {
                          *(int *)(lVar9 + 0x10) = iVar17;
                          iVar5 = 0;
                        }
                        UNLOCK();
                        if (bVar21) {
                          iVar5 = iVar17;
                        }
                        uVar16 = (uint)local_170;
                      }
                      *(int *)(lVar14 + 0xec) = iVar5;
                    }
                  }
                  else if ((_DAT_00000008 & 0x8400000) == 0) {
                    *(uint *)(lVar14 + 0xe8) = uVar1;
LAB_1414cac54:
                    lVar9 = 0;
                    goto LAB_1414caa56;
                  }
                  if ((*(uint *)(lVar11 + 8) >> 0x1e & 1) == 0) goto LAB_1414c9de5;
                }
              }
            }
            else {
LAB_1414c9de5:
              if (DAT_14c949118 == 0) {
                local_170 = CONCAT44(local_170._4_4_,uVar16);
                local_150 = FUN_140631fbe;
                lVar14 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                DAT_14c949118 = lVar14;
                FUN_1446f470e(&local_148,L"Class",1);
                local_198 = &LAB_146891e90;
                local_1a0 = (code *)&LAB_146273097;
                local_1b0 = L"Engine";
                local_1a8 = (wchar_t *)CONCAT44(local_1a8._4_4_,199);
                local_1b8 = 0x20;
                local_1c0 = 0x10000000;
                local_1c8._0_4_ = 8;
                local_190 = &local_150;
                FUN_14574b4b2(lVar14);
                DAT_14c949118 = lVar14;
                if (DAT_14c951858 == (longlong *)0x0) {
                  local_190 = (code **)&local_e8;
                  local_e8 = FUN_1449e2820;
                  local_180 = FUN_14081d0ea;
                  local_188 = FUN_14081d0ea;
                  local_198 = &LAB_1468c5283;
                  local_1a0 = FUN_142809da0;
                  local_1a8 = L"Engine";
                  local_1b0 = (wchar_t *)0x400000000;
                  local_1b8 = CONCAT44(local_1b8._4_4_,0x10000000);
                  local_1c0 = 8;
                  local_1c8._0_4_ = 0x50;
                  FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
                }
                plVar13 = DAT_14c951858;
                lVar14 = DAT_14c949118;
                uVar12 = FUN_1449e2fb2();
                local_1c8 = L"Class";
                FUN_14574b446(uVar12,lVar14,plVar13,L"/Script/CoreUObject");
                uVar16 = (uint)local_170;
              }
              if ((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38))
                 && (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) {
                if (DAT_14cac9ca8 == 0) {
                  local_190 = (code **)&local_e8;
                  local_e8 = FUN_141030f22;
                  local_180 = FUN_14081d0ea;
                  local_188 = FUN_14081d0ea;
                  local_198 = &LAB_1478c0a72;
                  local_1a0 = (code *)&LAB_1417b2375;
                  local_1a8 = L"Engine";
                  local_1b0 = (wchar_t *)0x1000000000;
                  local_1b8 = CONCAT44(local_1b8._4_4_,0x10000004);
                  local_1c0 = 8;
                  local_1c8 = (wchar_t *)CONCAT44(local_1c8._4_4_,0x390);
                  FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
                  if (DAT_14cac9ca8 == 0) goto LAB_1414c9734;
                }
                if (*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(lVar11 + 0x38)) {
                  lVar7 = 0;
                  if (*(longlong *)
                       (*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
                      == DAT_14cac9ca8 + 0x30) {
                    lVar7 = lVar11;
                  }
                  goto LAB_1414ca18f;
                }
              }
            }
            goto LAB_1414c9734;
          }
        }
      }
    }
LAB_1414ca18f:
    if ((local_160 != (longlong *)0x0) && (lVar7 != 0)) {
      local_170 = CONCAT44(local_170._4_4_,uVar16);
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = (code *)0x0;
      uStack_e0 = 0;
      local_b8 = 0x100;
      bStack_b6 = bStack_b6 & 0xe0;
      uStack_b5 = 0;
      uStack_b4 = 8;
      local_a8 = 0;
      local_98 = (longlong *)0x0;
      FUN_1413d4d42(param_2,&local_148,lVar18);
      lVar14 = FUN_141037e38(local_160,lVar7,&local_148,&local_e8);
      if (lVar14 == 0) {
        *(undefined4 *)((longlong)param_2 + 0xdc) = 0;
        iVar5 = 0;
LAB_1414ca5f4:
        uVar16 = (uint)local_170;
      }
      else {
        uVar16 = *(uint *)(lVar14 + 0xc);
        *(uint *)((longlong)param_2 + 0xdc) = uVar16;
        if ((int)uVar16 < DAT_14c9647dc) {
          lVar14 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
        }
        else {
          lVar14 = 0;
        }
        iVar5 = *(int *)(lVar14 + 0x10);
        uVar16 = (uint)local_170;
        if (iVar5 == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          iVar17 = DAT_14c964868 + 1;
          bVar21 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar21) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar17);
          }
          LOCK();
          iVar5 = *(int *)(lVar14 + 0x10);
          bVar21 = iVar5 == 0;
          if (bVar21) {
            *(int *)(lVar14 + 0x10) = iVar17;
            iVar5 = 0;
          }
          UNLOCK();
          if (bVar21) {
            iVar5 = iVar17;
          }
          goto LAB_1414ca5f4;
        }
      }
      *(int *)(param_2 + 0x1c) = iVar5;
      if (local_a8 != 0) {
        plVar13 = local_98;
        if (local_98 == (longlong *)0x0) {
          plVar13 = local_88;
        }
        (**(code **)(*plVar13 + 0x10))();
        iVar5 = *(int *)(param_2 + 0x1c);
      }
      iVar17 = DAT_14c9647dc;
      lVar14 = DAT_14c9647c8;
      if ((((iVar5 != 0) && (uVar1 = *(uint *)((longlong)param_2 + 0xdc), -1 < (int)uVar1)) &&
          ((int)uVar1 < DAT_14c9647dc)) &&
         (((plVar13 = (longlong *)
                      ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           plVar13 != (longlong *)0x0 && ((int)plVar13[2] == iVar5)) &&
          ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)))) {
        cVar3 = *(char *)((longlong)param_2 + 0x84);
        uVar2 = (ulonglong)local_160 >> 0x20;
        local_160 = (longlong *)((ulonglong)local_160 & 0xffffffff00000000);
        if (((*(char *)((longlong)param_2 + 0x85) == '\0') && (cVar3 == '\0')) &&
           ((*(char *)((longlong)param_2 + 0x82) == '\0' &&
            (*(char *)((longlong)param_2 + 0xec) == '\x01')))) {
          local_160 = (longlong *)CONCAT44((int)uVar2,*(undefined4 *)(param_2 + 0x1d));
        }
        uVar4 = *(undefined4 *)((longlong)param_2 + 0xe4);
        uVar23 = *(undefined4 *)(param_2 + 0x14);
        if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
          lVar11 = *plVar13;
        }
        else {
          lVar11 = 0;
        }
        if (*(int *)((longlong)param_2 + 0xc) == 0) {
LAB_1414ca972:
          lVar9 = 0;
        }
        else {
          uVar16 = *(uint *)(param_2 + 1);
          lVar9 = 0;
          if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
            plVar13 = (longlong *)
                      ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
            if ((plVar13 == (longlong *)0x0) ||
               (((int)plVar13[2] != *(int *)((longlong)param_2 + 0xc) ||
                ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_1414ca972;
            lVar9 = *plVar13;
          }
        }
        uVar12 = param_2[0x11];
        if (lVar18 == 0) {
          *(undefined4 *)(lVar11 + 0x390) = 0;
          iVar5 = 0;
        }
        else {
          uVar16 = *(uint *)(lVar18 + 0xc);
          *(uint *)(lVar11 + 0x390) = uVar16;
          if ((int)uVar16 < iVar17) {
            lVar14 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                     *(longlong *)(lVar14 + (ulonglong)(uVar16 >> 0x10) * 8);
          }
          else {
            lVar14 = 0;
          }
          iVar5 = *(int *)(lVar14 + 0x10);
          if (*(int *)(lVar14 + 0x10) == 0) {
            LOCK();
            iVar5 = DAT_14c964868 + 1;
            UNLOCK();
            iVar17 = DAT_14c964868 + 1;
            bVar21 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar5;
            if (bVar21) {
              local_168 = (longlong *)CONCAT44(local_168._4_4_,uVar23);
              local_155 = cVar3;
              local_154 = iVar17;
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar17);
              cVar3 = local_155;
              uVar23 = (int)local_168;
              iVar17 = local_154;
            }
            LOCK();
            iVar5 = *(int *)(lVar14 + 0x10);
            bVar21 = iVar5 == 0;
            if (bVar21) {
              *(int *)(lVar14 + 0x10) = iVar17;
              iVar5 = 0;
            }
            UNLOCK();
            if (bVar21) {
              iVar5 = iVar17;
            }
          }
        }
        *(int *)(lVar11 + 0x394) = iVar5;
        *(undefined8 *)(lVar11 + 0x398) = uVar12;
        uVar16 = (uint)local_170;
        if (lVar9 == 0) {
          *(undefined4 *)(lVar11 + 0x3a0) = 0;
          iVar5 = 0;
        }
        else {
          uVar1 = *(uint *)(lVar9 + 0xc);
          *(uint *)(lVar11 + 0x3a0) = uVar1;
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar14 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar14 = 0;
          }
          iVar5 = *(int *)(lVar14 + 0x10);
          if (*(int *)(lVar14 + 0x10) == 0) {
            LOCK();
            iVar5 = DAT_14c964868 + 1;
            UNLOCK();
            iVar17 = DAT_14c964868 + 1;
            bVar21 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar5;
            if (bVar21) {
              local_168 = (longlong *)CONCAT44(local_168._4_4_,uVar23);
              local_154 = iVar17;
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                           );
              uVar23 = (int)local_168;
              iVar17 = local_154;
            }
            LOCK();
            iVar5 = *(int *)(lVar14 + 0x10);
            bVar21 = iVar5 == 0;
            if (bVar21) {
              *(int *)(lVar14 + 0x10) = iVar17;
              iVar5 = 0;
            }
            UNLOCK();
            if (bVar21) {
              iVar5 = iVar17;
            }
          }
        }
        *(int *)(lVar11 + 0x3a4) = iVar5;
        *(undefined4 *)(lVar11 + 0x3a8) = uVar4;
        *(char *)(lVar11 + 0x3ac) = cVar3;
        *(undefined2 *)(lVar11 + 0x3ad) = (undefined2)local_148;
        *(undefined1 *)(lVar11 + 0x3af) = local_148._2_1_;
        *(undefined4 *)(lVar11 + 0x3b0) = local_160._0_4_;
        *(undefined4 *)(lVar11 + 0x3b4) = uVar23;
        lVar14 = FUN_141021bd4(lVar11,0);
        if (lVar14 == 0) {
          *(undefined8 *)(lVar11 + 0x3b8) = 0;
LAB_1414ca630:
          local_d8 = DAT_14c8464f0;
          uVar4 = (undefined4)DAT_14c8464e0;
          uVar23 = DAT_14c8464e0._4_4_;
          uVar24 = (undefined4)DAT_14c8464e8;
          uVar25 = DAT_14c8464e8._4_4_;
        }
        else {
          uVar1 = *(uint *)(lVar14 + 0xc);
          *(uint *)(lVar11 + 0x3b8) = uVar1;
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar14 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar14 = 0;
          }
          iVar5 = *(int *)(lVar14 + 0x10);
          if (iVar5 == 0) {
            LOCK();
            iVar5 = DAT_14c964868 + 1;
            UNLOCK();
            iVar17 = DAT_14c964868 + 1;
            bVar21 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar5;
            if (bVar21) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar17);
            }
            LOCK();
            iVar5 = *(int *)(lVar14 + 0x10);
            bVar21 = iVar5 == 0;
            if (bVar21) {
              *(int *)(lVar14 + 0x10) = iVar17;
              iVar5 = 0;
            }
            UNLOCK();
            if (bVar21) {
              iVar5 = iVar17;
            }
            *(int *)(lVar11 + 0x3bc) = iVar5;
            uVar16 = (uint)local_170;
            if (iVar5 == 0) goto LAB_1414ca630;
          }
          else {
            *(int *)(lVar11 + 0x3bc) = iVar5;
          }
          uVar1 = *(uint *)(lVar11 + 0x3b8);
          if (((((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) ||
              (plVar13 = (longlong *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
              plVar13 == (longlong *)0x0)) ||
             (((int)plVar13[2] != iVar5 || ((*(uint *)(plVar13 + 1) & 0x10200000) != 0))))
          goto LAB_1414ca630;
          if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
            lVar14 = *plVar13;
          }
          else {
            lVar14 = 0;
          }
          local_d8 = *(undefined8 *)(lVar14 + 0x1a8);
          uVar4 = *(undefined4 *)(lVar14 + 0x198);
          uVar23 = *(undefined4 *)(lVar14 + 0x19c);
          uVar24 = *(undefined4 *)(lVar14 + 0x1a0);
          uVar25 = *(undefined4 *)(lVar14 + 0x1a4);
        }
        local_e8 = (code *)CONCAT44(uVar23,uVar4);
        uStack_e0 = CONCAT44(uVar25,uVar24);
        *(undefined8 *)(lVar11 + 0x3d0) = local_d8;
        *(undefined4 *)(lVar11 + 0x3c0) = uVar4;
        *(undefined4 *)(lVar11 + 0x3c4) = uVar23;
        *(undefined4 *)(lVar11 + 0x3c8) = uVar24;
        *(undefined4 *)(lVar11 + 0x3cc) = uVar25;
        lVar14 = FUN_141021bd4(lVar11,1);
        if (lVar14 == 0) {
          *(undefined4 *)(lVar11 + 0x3d8) = 0;
          iVar5 = 0;
        }
        else {
          uVar1 = *(uint *)(lVar14 + 0xc);
          *(uint *)(lVar11 + 0x3d8) = uVar1;
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar14 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar14 = 0;
          }
          iVar5 = *(int *)(lVar14 + 0x10);
          if (iVar5 == 0) {
            LOCK();
            iVar5 = DAT_14c964868 + 1;
            UNLOCK();
            iVar17 = DAT_14c964868 + 1;
            bVar21 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar5;
            if (bVar21) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar17);
            }
            LOCK();
            iVar5 = *(int *)(lVar14 + 0x10);
            bVar21 = iVar5 == 0;
            if (bVar21) {
              *(int *)(lVar14 + 0x10) = iVar17;
              iVar5 = 0;
            }
            UNLOCK();
            if (bVar21) {
              iVar5 = iVar17;
            }
            uVar16 = (uint)local_170;
          }
        }
        *(int *)(lVar11 + 0x3dc) = iVar5;
        FUN_1411e3072(lVar11);
        FUN_1413d3b4c(param_2,lVar18);
      }
    }
  }
LAB_1414c9734:
  *(char *)((longlong)param_2 + 0x85) = (char)uVar16;
  if (((*(int *)(param_2 + 0x1c) != 0) &&
      (uVar1 = *(uint *)((longlong)param_2 + 0xdc), -1 < (int)uVar1)) &&
     (((int)uVar1 < DAT_14c9647dc &&
      (((plVar13 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar13 != (longlong *)0x0 && ((int)plVar13[2] == *(int *)(param_2 + 0x1c))) &&
       ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)))))) {
    uVar4 = 0;
    if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
      lVar18 = *plVar13;
    }
    else {
      lVar18 = 0;
    }
    if ((((char)uVar16 == '\0') && (*(char *)((longlong)param_2 + 0x84) == '\0')) &&
       ((*(char *)((longlong)param_2 + 0x82) == '\0' &&
        (uVar4 = 0, *(char *)((longlong)param_2 + 0xec) == '\x01')))) {
      uVar4 = *(undefined4 *)(param_2 + 0x1d);
    }
    *(undefined4 *)(lVar18 + 0x3b0) = uVar4;
    FUN_1411e3072();
  }
  if (bVar19 == 0) {
    if (*(char *)((longlong)param_2 + 0xac) == '\0') goto LAB_1414c9a4b;
    *(undefined1 *)((longlong)param_2 + 0xac) = 0;
    if (*(int *)(param_1 + 0x14) == 0) {
LAB_1414ca727:
      lVar18 = 0;
    }
    else {
      uVar16 = *(uint *)(param_1 + 0x10);
      lVar18 = 0;
      if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
        plVar13 = (longlong *)
                  ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
        if ((plVar13 == (longlong *)0x0) ||
           (((int)plVar13[2] != *(int *)(param_1 + 0x14) ||
            ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_1414ca727;
        lVar18 = *plVar13;
      }
    }
    if ((((*(int *)((longlong)param_2 + 0xc) == 0) ||
         (uVar16 = *(uint *)(param_2 + 1), (int)uVar16 < 0)) || (DAT_14c9647dc <= (int)uVar16)) ||
       (((plVar13 = (longlong *)
                    ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
         plVar13 == (longlong *)0x0 || ((int)plVar13[2] != *(int *)((longlong)param_2 + 0xc))) ||
        ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) {
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      local_e8 = (code *)*param_2;
LAB_1414ca70e:
      uStack_e0._0_4_ = 0;
      iVar5 = 0;
      uVar16 = (uint)uStack_e0;
    }
    else {
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      local_e8 = (code *)*param_2;
      if (*plVar13 == 0) goto LAB_1414ca70e;
      uVar16 = *(uint *)(*plVar13 + 0xc);
      uStack_e0 = (ulonglong)uVar16;
      if ((int)uVar16 < DAT_14c9647dc) {
        lVar14 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
      }
      else {
        lVar14 = 0;
      }
      iVar5 = *(int *)(lVar14 + 0x10);
      if (*(int *)(lVar14 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar17 = DAT_14c964868 + 1;
        bVar21 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar21) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar17);
        }
        LOCK();
        iVar5 = *(int *)(lVar14 + 0x10);
        bVar21 = iVar5 == 0;
        if (bVar21) {
          *(int *)(lVar14 + 0x10) = iVar17;
          iVar5 = 0;
        }
        UNLOCK();
        uVar16 = (uint)uStack_e0;
        if (bVar21) {
          iVar5 = iVar17;
        }
      }
    }
    uStack_e0._0_4_ = uVar16;
    uStack_e0 = CONCAT44(iVar5,(uint)uStack_e0);
    lVar18 = lVar18 + 0x450;
    local_d8 = uVar12;
  }
  else {
    if (*(char *)((longlong)param_2 + 0xac) != '\0') goto LAB_1414c9a4b;
    *(undefined1 *)((longlong)param_2 + 0xac) = 1;
    if (*(int *)(param_1 + 0x14) == 0) {
LAB_1414ca720:
      lVar18 = 0;
    }
    else {
      uVar16 = *(uint *)(param_1 + 0x10);
      lVar18 = 0;
      if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
        plVar13 = (longlong *)
                  ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
        if ((plVar13 == (longlong *)0x0) ||
           (((int)plVar13[2] != *(int *)(param_1 + 0x14) ||
            ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_1414ca720;
        lVar18 = *plVar13;
      }
    }
    if (((((*(int *)((longlong)param_2 + 0xc) == 0) ||
          (uVar16 = *(uint *)(param_2 + 1), (int)uVar16 < 0)) || (DAT_14c9647dc <= (int)uVar16)) ||
        ((plVar13 = (longlong *)
                    ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
         plVar13 == (longlong *)0x0 || ((int)plVar13[2] != *(int *)((longlong)param_2 + 0xc))))) ||
       ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)) {
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      local_e8 = (code *)*param_2;
LAB_1414ca6e1:
      uStack_e0._0_4_ = 0;
      iVar5 = 0;
      uVar16 = (uint)uStack_e0;
    }
    else {
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      local_e8 = (code *)*param_2;
      if (*plVar13 == 0) goto LAB_1414ca6e1;
      uVar16 = *(uint *)(*plVar13 + 0xc);
      uStack_e0 = (ulonglong)uVar16;
      if ((int)uVar16 < DAT_14c9647dc) {
        lVar14 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
      }
      else {
        lVar14 = 0;
      }
      iVar5 = *(int *)(lVar14 + 0x10);
      if (*(int *)(lVar14 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar17 = DAT_14c964868 + 1;
        bVar21 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar21) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar17);
        }
        LOCK();
        iVar5 = *(int *)(lVar14 + 0x10);
        bVar21 = iVar5 == 0;
        if (bVar21) {
          *(int *)(lVar14 + 0x10) = iVar17;
          iVar5 = 0;
        }
        UNLOCK();
        uVar16 = (uint)uStack_e0;
        if (bVar21) {
          iVar5 = iVar17;
        }
      }
    }
    uStack_e0._0_4_ = uVar16;
    uStack_e0 = CONCAT44(iVar5,(uint)uStack_e0);
    lVar18 = lVar18 + 0x438;
    local_d8 = uVar12;
  }
  FUN_14419d86a(lVar18);
LAB_1414c9a4b:
  if ((local_60 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1414cb3e3:
  bVar19 = 0;
LAB_1414c906f:
  lVar18 = *(longlong *)(param_1 + 0x168);
  iVar5 = *(int *)((longlong)param_2 + 0xc);
  if (lVar18 == 0) {
    uVar16 = 0;
    goto LAB_1414c949c;
  }
  if (iVar5 != 0) {
    uVar1 = *(uint *)(param_2 + 1);
    uVar16 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar14 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar14 != 0) &&
         ((*(int *)(lVar14 + 0x10) == iVar5 && ((*(uint *)(lVar14 + 8) & 0x10200000) == 0)))) {
        lVar14 = FUN_14116e62e();
        uVar16 = (uint)(lVar18 == lVar14);
        bVar19 = bVar19 & lVar18 == lVar14;
        iVar5 = *(int *)((longlong)param_2 + 0xc);
        goto LAB_1414c949c;
      }
      uVar16 = 0;
    }
    goto LAB_1414c94a1;
  }
  uVar16 = 0;
  goto LAB_1414c94de;
}



// FUNCTION 1414cbad0 FUN_1414cbad0 body=228 status=ok
// SIG undefined FUN_1414cbad0(void)

longlong FUN_1414cbad0(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa14a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144b223ce;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458bb756;
    local_38 = &LAB_147447bdb;
    local_40 = &LAB_1408fc0dd;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0xcb0;
    FUN_14081cfa3(L"/Script/Foliage",L"GrassInstancedStaticMeshComponent",&DAT_14caa14a8,
                  &DAT_147447bda);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa14a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414cbbb6 FUN_1414cbbb6 body=228 status=ok
// SIG undefined FUN_1414cbbb6(void)

longlong FUN_1414cbbb6(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cabe848 == 0) {
    local_30 = &local_10;
    local_10 = &DAT_1434b1090;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411827ec;
    local_38 = &LAB_147856ecd;
    local_40 = &LAB_140edf39d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x2a8;
    FUN_14081cfa3(L"/Script/Engine",L"ActorChannel",&DAT_14cabe848,&DAT_147856ecc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabe848;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414cbc9c FUN_1414cbc9c body=228 status=ok
// SIG undefined FUN_1414cbc9c(void)

longlong FUN_1414cbc9c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac2450 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_14787fbf1;
    local_40 = &LAB_145b04024;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x3f8;
    FUN_14081cfa3(L"/Script/Engine",L"MapBuildDataActor",&DAT_14cac2450,&DAT_14787fbf0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac2450;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414cbd82 FUN_1414cbd82 body=228 status=ok
// SIG undefined FUN_1414cbd82(void)

longlong FUN_1414cbd82(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac8ed0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14639a42e;
    local_38 = &LAB_1478adcd5;
    local_40 = &LAB_145ce0724;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xa8;
    FUN_14081cfa3(L"/Script/Engine",L"VectorFieldAnimated",&DAT_14cac8ed0,&DAT_1478adcd4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac8ed0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414cbe68 FUN_1414cbe68 body=228 status=ok
// SIG undefined FUN_1414cbe68(void)

longlong FUN_1414cbe68(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cad40f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140fe7df2;
    local_38 = &LAB_147a3c7b5;
    local_40 = &LAB_145f977ed;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x3e0;
    FUN_14081cfa3(L"/Script/Engine",L"CullDistanceVolume",&DAT_14cad40f0,&DAT_147a3c7b4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad40f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414cbf4e FUN_1414cbf4e body=228 status=ok
// SIG undefined FUN_1414cbf4e(void)

longlong FUN_1414cbf4e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cae8e78 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1457dfdaa;
    local_28 = &LAB_14637debc;
    local_38 = &LAB_147b97a51;
    local_40 = FUN_1417ddfba;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 0x10;
    local_68 = 0x1f0;
    FUN_14081cfa3(L"/Script/Engine",L"LevelStreamingLevelInstance",&DAT_14cae8e78,&DAT_147b97a50);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cae8e78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414cc034 FUN_1414cc034 body=228 status=ok
// SIG undefined FUN_1414cc034(void)

longlong FUN_1414cc034(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caf2878 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458e6bb2;
    local_38 = &LAB_147be3c69;
    local_40 = FUN_1417e49ff;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/Engine",L"NetworkMetricsStats",&DAT_14caf2878,&DAT_147be3c68);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caf2878;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414cc11a FUN_1414cc11a body=228 status=ok
// SIG undefined FUN_1414cc11a(void)

longlong FUN_1414cc11a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caf2a48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141737a50;
    local_38 = &LAB_147be6891;
    local_40 = FUN_1463edd1b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/Engine",L"ObjectTraceWorldSubsystem",&DAT_14caf2a48,&DAT_147be6890);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caf2a48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414cc200 FUN_1414cc200 body=228 status=ok
// SIG undefined FUN_1414cc200(void)

longlong FUN_1414cc200(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb0db70 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1462713b0;
    local_38 = &LAB_147d8a72f;
    local_40 = FUN_1417f70a7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xb8;
    FUN_14081cfa3(L"/Script/Engine",L"UserDefinedEnum",&DAT_14cb0db70,&DAT_147d8a72e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0db70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414cc2e6 FUN_1414cc2e6 body=228 status=ok
// SIG undefined FUN_1414cc2e6(void)

longlong FUN_1414cc2e6(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb128d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1462935c6;
    local_38 = &LAB_147def3b1;
    local_40 = FUN_140f76128;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xe8;
    FUN_14081cfa3(L"/Script/ClothingSystemRuntimeCommon",L"ClothingAssetCommon",&DAT_14cb128d0,
                  &DAT_147def3b0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb128d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414cc3cc FUN_1414cc3cc body=228 status=ok
// SIG undefined FUN_1414cc3cc(void)

longlong FUN_1414cc3cc(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb27318 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14181c830;
    local_38 = &LAB_147f9e87d;
    local_40 = FUN_1438bf438;
    local_48 = L"Input";
    local_50 = 0;
    local_58 = 0x10000002;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/EnhancedInput",L"InputModifierScalar",&DAT_14cb27318,&DAT_147f9e87c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb27318;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414cc4b2 FUN_1414cc4b2 body=228 status=ok
// SIG undefined FUN_1414cc4b2(void)

longlong FUN_1414cc4b2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb27598 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a77886;
    local_38 = &LAB_147f9f9f5;
    local_40 = FUN_1438bff56;
    local_48 = L"Input";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/EnhancedInput",L"InputTriggerChordBlocker",&DAT_14cb27598,&DAT_147f9f9f4
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb27598;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414cc598 FUN_1414cc598 body=228 status=ok
// SIG undefined FUN_1414cc598(void)

longlong FUN_1414cc598(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb63968 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1486f5f79;
    local_40 = FUN_1464fe91a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshOwnerInterface",&DAT_14cb63968,&DAT_1486f5f78)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb63968;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414cc67e FUN_1414cc67e body=228 status=ok
// SIG undefined FUN_1414cc67e(void)

longlong FUN_1414cc67e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb67c78 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14105c5ba;
    local_38 = &LAB_14873f9f7;
    local_40 = FUN_14185a111;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/GbxGame",L"AnimNotify_Trick",&DAT_14cb67c78,&DAT_14873f9f6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb67c78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414cc764 FUN_1414cc764 body=228 status=ok
// SIG undefined FUN_1414cc764(void)

longlong FUN_1414cc764(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb67c90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141116c3a;
    local_38 = &LAB_14873f9fb;
    local_40 = FUN_14185a13f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/GbxGame",L"AnimNotifyState_Trick",&DAT_14cb67c90,&DAT_14873f9fa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb67c90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414cc84a FUN_1414cc84a body=228 status=ok
// SIG undefined FUN_1414cc84a(void)

longlong FUN_1414cc84a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb93ef8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145840f42;
    local_38 = &LAB_148a11c27;
    local_40 = &LAB_140b63a34;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xc0;
    FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponBehavior_DamageModifier",&DAT_14cb93ef8,
                  &DAT_148a11c26);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb93ef8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414cc930 FUN_1414cc930 body=228 status=ok
// SIG undefined FUN_1414cc930(void)

longlong FUN_1414cc930(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb93ff0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145840f42;
    local_38 = &LAB_148a11c3f;
    local_40 = &LAB_140ce0111;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 200;
    FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponBehavior_Heat",&DAT_14cb93ff0,&DAT_148a11c3e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb93ff0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414cca16 FUN_1414cca16 body=228 status=ok
// SIG undefined FUN_1414cca16(void)

longlong FUN_1414cca16(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbaca60 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14635a396;
    local_38 = &LAB_148c2ec5d;
    local_40 = &LAB_14603479a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x810;
    FUN_14081cfa3(L"/Script/OakGame",L"OakMapViewerLabelComponent",&DAT_14cbaca60,&DAT_148c2ec5c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaca60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414ccafc FUN_1414ccafc body=228 status=ok
// SIG undefined FUN_1414ccafc(void)

longlong FUN_1414ccafc(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbacd40 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_148c31a9d;
    local_40 = &LAB_140c3b1d2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x4e0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakMigrationEventPoint",&DAT_14cbacd40,&DAT_148c31a9c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbacd40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414ccbe2 FUN_1414ccbe2 body=228 status=ok
// SIG undefined FUN_1414ccbe2(void)

longlong FUN_1414ccbe2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc26f40 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145993166;
    local_38 = &LAB_1497e7f8b;
    local_40 = FUN_14190aef8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x148;
    FUN_14081cfa3(L"/Script/ChaosCloth",L"ChaosClothConfig",&DAT_14cc26f40,&DAT_1497e7f8a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc26f40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414cccc8 FUN_1414cccc8 body=228 status=ok
// SIG undefined FUN_1414cccc8(void)

longlong FUN_1414cccc8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc26f58 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a73ba8;
    local_38 = &LAB_1497e80b3;
    local_40 = FUN_14190b11f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/ChaosCloth",L"ChaosClothSharedSimConfig",&DAT_14cc26f58,&DAT_1497e80b2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc26f58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414ccdae FUN_1414ccdae body=228 status=ok
// SIG undefined FUN_1414ccdae(void)

longlong FUN_1414ccdae(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc28918 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_14980f42b;
    local_40 = FUN_146761010;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0xa0;
    FUN_14081cfa3(L"/Script/GbxPackedLevelStreamingCell",L"GbxPackedLevelStreamingSettings",
                  &DAT_14cc28918,&DAT_14980f42a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc28918;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


