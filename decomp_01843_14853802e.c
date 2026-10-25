// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14853802e FUN_14853802e body=801 status=ok
// SIG undefined FUN_14853802e(void)

void FUN_14853802e(longlong param_1,uint param_2,undefined8 *param_3,double *param_4,
                  undefined4 *param_5,longlong param_6)

{
  undefined4 uVar1;
  code *pcVar2;
  double *pdVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_188 [32];
  undefined4 *local_168;
  longlong local_160;
  double *local_158;
  undefined8 *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130 [15];
  undefined8 local_b8 [3];
  undefined1 local_a0 [24];
  undefined4 local_88 [6];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  local_158 = param_4;
  local_150 = param_3;
  while (puVar9 = local_150, *(int *)(param_1 + 200) <= (int)uVar10) {
    uVar8 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 >> 9) * 8) +
                     (ulonglong)(uVar10 & 0x1ff) * 4);
    if ((int)uVar8 < 0) {
      dVar13 = (double)FUN_148538350(param_1,~uVar8,local_150);
      uVar8 = ~uVar8;
      if (*local_158 < dVar13) goto LAB_148538312;
    }
    else {
      uVar8 = uVar8 - 1;
      uVar10 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 + 1 >> 9) * 8) +
                       (ulonglong)(uVar10 + 1 & 0x1ff) * 4) - 1;
      dVar13 = (double)FUN_148538350(param_1,uVar8,local_150);
      dVar14 = (double)FUN_148538350(param_1,uVar10,puVar9);
      pdVar3 = local_158;
      if (dVar14 <= dVar13) {
        if (*local_158 <= dVar14) goto LAB_148538312;
        local_160 = param_6;
        local_168 = param_5;
        FUN_14853802e(param_1,uVar10,local_150,local_158);
        if (*pdVar3 <= dVar13) goto LAB_148538312;
      }
      else {
        if (*local_158 <= dVar13) goto LAB_148538312;
        local_160 = param_6;
        local_168 = param_5;
        FUN_14853802e(param_1,uVar8,local_150,local_158);
        uVar8 = uVar10;
        if (*pdVar3 <= dVar14) goto LAB_148538312;
      }
    }
    uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(uVar8 >> 9) * 8) +
                      (ulonglong)(uVar8 & 0x1ff) * 4);
  }
  iVar12 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 >> 9) * 8) +
                   (ulonglong)(uVar10 & 0x1ff) * 4);
  if (0 < iVar12) {
    do {
      uVar10 = uVar10 + 1;
      uVar1 = *(undefined4 *)
               (*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 >> 9) * 8) +
               (ulonglong)(uVar10 & 0x1ff) * 4);
      pcVar2 = *(code **)(param_6 + 0x10);
      if (pcVar2 == (code *)0x0) {
LAB_148538289:
        local_168 = local_88;
        FUN_14853745c(*(undefined8 *)(param_1 + 8),uVar1,local_b8,local_a0);
        local_138 = local_150[2];
        local_148 = *local_150;
        uStack_140 = local_150[1];
        puVar9 = local_b8;
        puVar11 = local_130;
        for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        dVar13 = (double)FUN_146bd2a7a(&local_148);
        if (dVar13 < *local_158) {
          *local_158 = dVar13;
          *param_5 = uVar1;
        }
      }
      else {
        local_148 = CONCAT44(local_148._4_4_,uVar1);
        plVar6 = *(longlong **)(param_6 + 0x20);
        if (*(longlong **)(param_6 + 0x20) == (longlong *)0x0) {
          plVar6 = (longlong *)(param_6 + 0x30);
        }
        uVar5 = (**(code **)(*plVar6 + 8))();
        cVar4 = (*pcVar2)(uVar5,&local_148);
        if (cVar4 != '\0') goto LAB_148538289;
      }
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
LAB_148538312:
  if ((local_70 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148538350 FUN_148538350 body=150 status=ok
// SIG undefined FUN_148538350(void)

double FUN_148538350(longlong param_1,uint param_2,double *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_2 >> 9) * 8);
  lVar3 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 >> 9) * 8);
  dVar5 = ABS(*param_3 - *(double *)(lVar1 + lVar3)) - *(double *)(lVar2 + lVar3);
  dVar6 = ABS(param_3[1] - *(double *)(lVar1 + 8 + lVar3)) - *(double *)(lVar2 + 8 + lVar3);
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  dVar4 = ABS(param_3[2] - *(double *)(lVar1 + 0x10 + lVar3)) - *(double *)(lVar2 + 0x10 + lVar3);
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  return dVar4 * dVar4 + dVar5 * dVar5 + dVar6 * dVar6;
}



// FUNCTION 1485383e6 FUN_1485383e6 body=871 status=ok
// SIG undefined FUN_1485383e6(void)

void FUN_1485383e6(longlong param_1,uint param_2,undefined8 *param_3,double *param_4,
                  undefined4 *param_5,undefined8 *param_6,longlong param_7)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  int iVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_1b8 [32];
  undefined4 *local_198;
  undefined8 *local_190;
  longlong local_188;
  undefined8 *local_178;
  double *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138 [9];
  double local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [3];
  undefined1 local_b0 [24];
  undefined4 local_98 [6];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  uVar7 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                   (ulonglong)(param_2 & 0x1ff) * 4);
  local_178 = param_3;
  if (*(int *)(param_1 + 200) <= (int)uVar7) {
    do {
      uVar8 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8) +
                       (ulonglong)(uVar7 & 0x1ff) * 4);
      if ((int)uVar8 < 0) {
        uVar8 = ~uVar8;
        dVar14 = (double)FUN_14853874e(param_1,uVar8,local_178);
        bVar13 = *param_4 + 1e-08 < dVar14;
LAB_148538605:
        uVar11 = (ulonglong)uVar8;
        if (bVar13) goto LAB_148538707;
      }
      else {
        uVar8 = uVar8 - 1;
        uVar7 = *(int *)(*(longlong *)
                          (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                        (ulonglong)(uVar7 + 1 & 0x1ff) * 4) - 1;
        uVar11 = (ulonglong)uVar7;
        dVar14 = (double)FUN_14853874e(param_1,uVar8,param_3);
        dVar15 = (double)FUN_14853874e(param_1,uVar11,param_3);
        if (dVar15 <= dVar14) {
          if (dVar15 <= *param_4 + 1e-08) {
            local_188 = param_7;
            local_190 = param_6;
            local_198 = param_5;
            FUN_1485383e6(param_1,uVar7,local_178,param_4);
            bVar13 = *param_4 + 1e-08 < dVar14;
            goto LAB_148538605;
          }
          goto LAB_148538707;
        }
        if (*param_4 + 1e-08 < dVar14) goto LAB_148538707;
        local_188 = param_7;
        local_190 = param_6;
        local_198 = param_5;
        FUN_1485383e6(param_1,uVar8,local_178,param_4);
        if (*param_4 + 1e-08 < dVar15) goto LAB_148538707;
      }
      uVar7 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (uVar11 >> 9) * 8) +
                       (ulonglong)((uint)uVar11 & 0x1ff) * 4);
    } while (*(int *)(param_1 + 200) <= (int)uVar7);
  }
  iVar12 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8) +
                   (ulonglong)(uVar7 & 0x1ff) * 4);
  local_170 = param_4;
  if (0 < iVar12) {
    do {
      uVar7 = uVar7 + 1;
      uVar1 = *(undefined4 *)
               (*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8) +
               (ulonglong)(uVar7 & 0x1ff) * 4);
      pcVar2 = *(code **)(param_7 + 0x10);
      if (pcVar2 == (code *)0x0) {
LAB_1485384f5:
        local_198 = local_98;
        FUN_14853745c(*(undefined8 *)(param_1 + 8),uVar1,local_c8,local_b0);
        local_168 = *local_178;
        uStack_160 = local_178[1];
        local_158 = local_178[2];
        uStack_150 = local_178[3];
        local_148 = *(undefined4 *)(local_178 + 4);
        uStack_144 = *(undefined4 *)((longlong)local_178 + 0x24);
        uStack_140 = *(undefined4 *)(local_178 + 5);
        uStack_13c = *(undefined4 *)((longlong)local_178 + 0x2c);
        puVar9 = local_c8;
        puVar10 = local_138;
        for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        cVar3 = FUN_146bd80f0(&local_168);
        if ((cVar3 != '\0') && (local_f0 < *local_170)) {
          *local_170 = local_f0;
          *param_5 = uVar1;
          param_6[2] = local_d8;
          *param_6 = local_e8;
          param_6[1] = uStack_e0;
        }
      }
      else {
        local_168 = CONCAT44(local_168._4_4_,uVar1);
        plVar5 = *(longlong **)(param_7 + 0x20);
        if (*(longlong **)(param_7 + 0x20) == (longlong *)0x0) {
          plVar5 = (longlong *)(param_7 + 0x30);
        }
        uVar4 = (**(code **)(*plVar5 + 8))();
        cVar3 = (*pcVar2)(uVar4,&local_168);
        if (cVar3 != '\0') goto LAB_1485384f5;
      }
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
LAB_148538707:
  if ((local_80 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14853874e FUN_14853874e body=307 status=ok
// SIG undefined FUN_14853874e(void)

void FUN_14853874e(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_2 >> 9) * 8);
  lVar3 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 >> 9) * 8);
  local_70 = *(double *)(param_1 + 0x60);
  dVar6 = *(double *)(lVar2 + 0x10 + lVar3) + local_70;
  dVar7 = *(double *)(lVar2 + 8 + lVar3) + local_70;
  local_70 = local_70 + *(double *)(lVar2 + lVar3);
  local_60 = *(double *)(lVar1 + 0x10 + lVar3);
  local_48 = dVar6 + local_60;
  local_68 = *(double *)(lVar1 + 8 + lVar3);
  local_50 = dVar7 + local_68;
  local_58 = local_70 + *(double *)(lVar1 + lVar3);
  local_60 = local_60 - dVar6;
  local_68 = local_68 - dVar7;
  local_70 = *(double *)(lVar1 + lVar3) - local_70;
  local_78 = 0x7fefffffffffffff;
  cVar4 = FUN_146bd8472(param_3);
  uVar5 = local_78;
  if (cVar4 == '\0') {
    uVar5 = 0x7fefffffffffffff;
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(uVar5);
  }
  return;
}



// FUNCTION 148538882 FUN_148538882 body=940 status=ok
// SIG undefined FUN_148538882(void)

void FUN_148538882(longlong param_1,uint param_2,undefined4 *param_3,longlong *param_4,
                  double *param_5)

{
  undefined4 *puVar1;
  double dVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  undefined8 uVar9;
  double *pdVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  int iVar17;
  bool bVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_1e8 [32];
  double *local_1c8;
  undefined4 *local_1b8;
  longlong *local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158 [9];
  double local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8 [3];
  undefined1 local_d0 [24];
  double local_b8 [3];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  dVar2 = *param_5;
  uVar21 = SUB84(dVar2,0);
  uVar22 = (undefined4)((ulonglong)dVar2 >> 0x20);
  if (3.4028234663852886e+38 <= dVar2) {
    uVar21 = 0xe0000000;
    uVar22 = 0x47efffff;
  }
  uVar12 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  local_1b8 = param_3;
  if (*(int *)(param_1 + 200) <= (int)uVar12) {
    do {
      uVar13 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar12 >> 9) * 8)
                        + (ulonglong)(uVar12 & 0x1ff) * 4);
      if ((int)uVar13 < 0) {
        uVar13 = ~uVar13;
        dVar2 = (double)FUN_14853874e(param_1,uVar13,local_1b8);
        bVar18 = (double)CONCAT44(uVar22,uVar21) + 1e-08 < dVar2;
LAB_148538ade:
        uVar16 = (ulonglong)uVar13;
        if (bVar18) goto LAB_148538bc7;
      }
      else {
        uVar13 = uVar13 - 1;
        uVar12 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar12 + 1 >> 9) * 8) +
                         (ulonglong)(uVar12 + 1 & 0x1ff) * 4) - 1;
        uVar16 = (ulonglong)uVar12;
        dVar19 = (double)FUN_14853874e(param_1,uVar13,param_3);
        dVar20 = (double)FUN_14853874e(param_1,uVar16,param_3);
        dVar2 = (double)CONCAT44(uVar22,uVar21) + 1e-08;
        if (dVar20 <= dVar19) {
          if (dVar20 <= dVar2) {
            local_1c8 = param_5;
            FUN_148538882(param_1,uVar12,local_1b8,param_4);
            bVar18 = dVar2 < dVar19;
            goto LAB_148538ade;
          }
          goto LAB_148538bc7;
        }
        if (dVar2 < dVar19) goto LAB_148538bc7;
        local_1c8 = param_5;
        FUN_148538882(param_1,uVar13,local_1b8,param_4);
        if (dVar2 < dVar20) goto LAB_148538bc7;
      }
      dVar2 = *param_5;
      uVar21 = SUB84(dVar2,0);
      uVar22 = (int)((ulonglong)dVar2 >> 0x20);
      if (3.4028234663852886e+38 <= dVar2) {
        uVar21 = 0xe0000000;
        uVar22 = 0x47efffff;
      }
      uVar12 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (uVar16 >> 9) * 8) +
                        (ulonglong)((uint)uVar16 & 0x1ff) * 4);
    } while (*(int *)(param_1 + 200) <= (int)uVar12);
  }
  iVar17 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar12 >> 9) * 8) +
                   (ulonglong)(uVar12 & 0x1ff) * 4);
  local_1b0 = param_4;
  if (0 < iVar17) {
    do {
      uVar12 = uVar12 + 1;
      uVar3 = *(undefined4 *)
               (*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar12 >> 9) * 8) +
               (ulonglong)(uVar12 & 0x1ff) * 4);
      pcVar5 = (code *)param_5[2];
      if (pcVar5 == (code *)0x0) {
LAB_1485389ab:
        local_1c8 = local_b8;
        FUN_14853745c(*(undefined8 *)(param_1 + 8),uVar3,local_e8,local_d0);
        local_188 = *local_1b8;
        uStack_184 = local_1b8[1];
        uStack_180 = local_1b8[2];
        uStack_17c = local_1b8[3];
        local_178 = local_1b8[4];
        uStack_174 = local_1b8[5];
        uStack_170 = local_1b8[6];
        uStack_16c = local_1b8[7];
        local_168 = local_1b8[8];
        uStack_164 = local_1b8[9];
        uStack_160 = local_1b8[10];
        uStack_15c = local_1b8[0xb];
        puVar14 = local_e8;
        puVar15 = local_158;
        for (lVar11 = 9; lVar11 != 0; lVar11 = lVar11 + -1) {
          *puVar15 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar15 = puVar15 + 1;
        }
        cVar8 = FUN_146bd80f0(&local_188);
        dVar2 = local_110;
        plVar7 = local_1b0;
        if ((cVar8 != '\0') && (local_110 <= (double)CONCAT44(uVar22,uVar21) + 1e-08)) {
          local_198 = local_f8;
          local_1a8 = local_108;
          uStack_1a4 = uStack_104;
          uStack_1a0 = uStack_100;
          uStack_19c = uStack_fc;
          iVar4 = (int)local_1b0[1];
          lVar11 = (longlong)iVar4;
          *(uint *)(local_1b0 + 1) = iVar4 + 1U;
          if (*(uint *)((longlong)local_1b0 + 0xc) < iVar4 + 1U) {
            FUN_146bd88d8(local_1b0,iVar4);
          }
          lVar6 = *plVar7;
          *(undefined4 *)(lVar6 + lVar11 * 0x28) = uVar3;
          *(double *)(lVar6 + 8 + lVar11 * 0x28) = dVar2;
          puVar1 = (undefined4 *)(lVar6 + 0x10 + lVar11 * 0x28);
          *puVar1 = local_1a8;
          puVar1[1] = uStack_1a4;
          puVar1[2] = uStack_1a0;
          puVar1[3] = uStack_19c;
          *(undefined8 *)(lVar6 + 0x20 + lVar11 * 0x28) = local_198;
        }
      }
      else {
        pdVar10 = (double *)param_5[4];
        if ((double *)param_5[4] == (double *)0x0) {
          pdVar10 = param_5 + 6;
        }
        local_188 = uVar3;
        uVar9 = (**(code **)((longlong)*pdVar10 + 8))();
        cVar8 = (*pcVar5)(uVar9,&local_188);
        if (cVar8 != '\0') goto LAB_1485389ab;
      }
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
  }
LAB_148538bc7:
  if ((local_a0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148538c2f FUN_148538c2f body=946 status=ok
// SIG undefined FUN_148538c2f(void)

void FUN_148538c2f(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  float fVar24;
  undefined1 auStack_388 [32];
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (1 < (int)param_2) {
    memset(local_358,0,0x2f0);
    local_360 = param_1 + (ulonglong)param_2 * 0x28 + -0x28;
    local_368 = param_1;
    fVar24 = logf((float)(int)param_2);
    local_358[0] = (int)(longlong)(fVar24 + fVar24);
    plVar17 = &local_368;
    do {
      puVar10 = (undefined8 *)*plVar17;
      puVar18 = (undefined8 *)plVar17[1];
      iVar20 = (int)plVar17[2];
      iVar11 = (int)((ulonglong)((longlong)puVar18 - (longlong)puVar10) >> 3);
      puVar21 = puVar18;
      puVar22 = puVar10;
      if (iVar20 != 0) {
LAB_148538cf8:
        uVar13 = iVar11 * -0x33333333 + 1;
        if (8 < (int)uVar13) {
          uVar14 = (ulonglong)(uVar13 >> 1);
          uVar1 = puVar10[uVar14 * 5 + 4];
          uVar2 = puVar10[uVar14 * 5];
          uVar3 = (puVar10 + uVar14 * 5)[1];
          uVar4 = puVar10[uVar14 * 5 + 2];
          uVar5 = (puVar10 + uVar14 * 5 + 2)[1];
          puVar10[uVar14 * 5 + 4] = puVar10[4];
          uVar6 = *puVar10;
          uVar7 = puVar10[1];
          uVar8 = puVar10[3];
          puVar10[uVar14 * 5 + 2] = puVar10[2];
          (puVar10 + uVar14 * 5 + 2)[1] = uVar8;
          puVar10[uVar14 * 5] = uVar6;
          (puVar10 + uVar14 * 5)[1] = uVar7;
          puVar10[4] = uVar1;
          puVar10[2] = uVar4;
          puVar10[3] = uVar5;
          *puVar10 = uVar2;
          puVar10[1] = uVar3;
          puVar15 = puVar18 + 5;
          puVar12 = puVar10;
          do {
            puVar9 = puVar12 + 5;
            puVar19 = puVar12 + 5;
            do {
              puVar12 = puVar19;
              puVar16 = puVar9;
              if (puVar18 < puVar12) break;
              puVar9 = puVar16 + 5;
              puVar19 = puVar12 + 5;
            } while ((double)puVar12[1] < (double)puVar10[1] ||
                     (double)puVar12[1] == (double)puVar10[1]);
            puVar9 = puVar15 + -10;
            do {
              puVar19 = puVar15;
              puVar23 = puVar9;
              puVar15 = puVar19 + -5;
              if (puVar15 <= puVar10) break;
              puVar9 = puVar23 + -5;
            } while ((double)puVar10[1] < (double)puVar19[-4] ||
                     (double)puVar10[1] == (double)puVar19[-4]);
            if (puVar15 < puVar12) goto LAB_148538e2b;
            uVar1 = puVar12[4];
            uVar2 = *puVar12;
            uVar3 = puVar12[1];
            uVar4 = puVar12[2];
            uVar5 = puVar12[3];
            puVar12[4] = puVar19[-1];
            uVar6 = *puVar15;
            uVar7 = puVar19[-4];
            uVar8 = puVar19[-2];
            puVar12[2] = puVar19[-3];
            puVar12[3] = uVar8;
            *puVar12 = uVar6;
            puVar12[1] = uVar7;
            puVar19[-1] = uVar1;
            puVar19[-3] = uVar4;
            puVar19[-2] = uVar5;
            *puVar15 = uVar2;
            puVar19[-4] = uVar3;
          } while( true );
        }
        for (; puVar22 = puVar10, puVar21 = puVar10, puVar10 < puVar18; puVar18 = puVar18 + -5) {
          while (puVar15 = puVar22, puVar21 = puVar21 + 5, puVar21 <= puVar18) {
            puVar22 = puVar21;
            if ((double)puVar21[1] < (double)puVar15[1] || (double)puVar21[1] == (double)puVar15[1])
            {
              puVar22 = puVar15;
            }
          }
          local_48 = puVar15[4];
          local_68 = *puVar15;
          uStack_60 = puVar15[1];
          local_58 = puVar15[2];
          uStack_50 = puVar15[3];
          uVar4 = local_68;
          uVar5 = uStack_60;
          puVar15[4] = puVar18[4];
          uVar1 = *puVar18;
          uVar2 = puVar18[1];
          uVar3 = puVar18[3];
          puVar15[2] = puVar18[2];
          puVar15[3] = uVar3;
          *puVar15 = uVar1;
          puVar15[1] = uVar2;
          puVar18[4] = local_48;
          local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
          uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
          puVar18[2] = local_58;
          puVar18[3] = uStack_50;
          *(undefined4 *)puVar18 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar18 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar18 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar18 + 0xc) = uStack_60._4_4_;
          local_68 = uVar4;
          uStack_60 = uVar5;
        }
        goto LAB_148538fc0;
      }
LAB_148538fd5:
      FUN_148538fe2(puVar10);
LAB_148538fc0:
      plVar17 = plVar17 + -3;
    } while (&local_368 <= plVar17);
  }
  if ((local_38 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_148538e2b:
  local_48 = puVar10[4];
  local_68 = *puVar10;
  uStack_60 = puVar10[1];
  local_58 = puVar10[2];
  uStack_50 = puVar10[3];
  uVar4 = local_68;
  uVar5 = uStack_60;
  puVar10[4] = puVar19[-1];
  uVar1 = *puVar15;
  uVar2 = puVar19[-4];
  uVar3 = puVar19[-2];
  puVar10[2] = puVar19[-3];
  puVar10[3] = uVar3;
  *puVar10 = uVar1;
  puVar10[1] = uVar2;
  puVar19[-1] = local_48;
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  puVar19[-3] = local_58;
  puVar19[-2] = uStack_50;
  *(undefined4 *)puVar15 = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar19 + -0x24) = local_68._4_4_;
  *(undefined4 *)(puVar19 + -4) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar19 + -0x1c) = uStack_60._4_4_;
  iVar20 = iVar20 + -1;
  puVar19 = puVar19 + -10;
  local_68 = uVar4;
  uStack_60 = uVar5;
  if ((longlong)puVar23 - (longlong)puVar22 < (longlong)puVar21 - (longlong)puVar16) {
    if (puVar12 < puVar18) {
      *plVar17 = (longlong)puVar12;
      plVar17[1] = (longlong)puVar18;
      *(int *)(plVar17 + 2) = iVar20;
      plVar17 = plVar17 + 3;
    }
    puVar16 = puVar10;
    if (puVar15 <= puVar10 + 5) goto LAB_148538fc0;
  }
  else {
    if (puVar10 + 5 < puVar15) {
      *plVar17 = (longlong)puVar10;
      plVar17[1] = (longlong)puVar19;
      *(int *)(plVar17 + 2) = iVar20;
      plVar17 = plVar17 + 3;
    }
    puVar10 = puVar12;
    puVar19 = puVar18;
    puVar23 = puVar18;
    if (puVar18 <= puVar12) goto LAB_148538fc0;
  }
  iVar11 = (int)((ulonglong)((longlong)puVar23 - (longlong)puVar16) >> 3);
  puVar18 = puVar19;
  puVar21 = puVar23;
  puVar22 = puVar16;
  if (iVar20 == 0) goto LAB_148538fd5;
  goto LAB_148538cf8;
}



// FUNCTION 148538fe2 FUN_148538fe2 body=717 status=ok
// SIG undefined FUN_148538fe2(void)

void FUN_148538fe2(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    iVar12 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar16 = iVar12;
joined_r0x000148539016:
    do {
      iVar14 = iVar12 * 2 + 1;
      if (iVar14 < (int)param_2) {
        iVar15 = iVar12 * 2 + 2;
        if ((iVar15 < (int)param_2) &&
           ((double)param_1[(longlong)iVar14 * 5 + 1] < (double)param_1[(longlong)iVar15 * 5 + 1] ||
            (double)param_1[(longlong)iVar14 * 5 + 1] == (double)param_1[(longlong)iVar15 * 5 + 1]))
        {
          iVar14 = iVar15;
        }
        if ((double)param_1[(longlong)iVar12 * 5 + 1] <= (double)param_1[(longlong)iVar14 * 5 + 1]
            && (double)param_1[(longlong)iVar14 * 5 + 1] !=
               (double)param_1[(longlong)iVar12 * 5 + 1]) {
          puVar2 = param_1 + (longlong)iVar12 * 5;
          puVar3 = param_1 + (longlong)iVar14 * 5;
          local_18 = puVar2[4];
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          puVar2[4] = puVar3[4];
          uVar8 = *puVar3;
          uVar9 = puVar3[1];
          uVar10 = puVar3[3];
          puVar2[2] = puVar3[2];
          puVar2[3] = uVar10;
          *puVar2 = uVar8;
          puVar2[1] = uVar9;
          puVar3[4] = local_18;
          local_38._0_4_ = (undefined4)uVar4;
          local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar5;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_28._0_4_ = (undefined4)uVar6;
          local_28._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar7;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          *(undefined4 *)(puVar3 + 2) = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar3 + 0x14) = local_28._4_4_;
          *(undefined4 *)(puVar3 + 3) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_20._4_4_;
          *(undefined4 *)puVar3 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar3 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_30._4_4_;
          iVar12 = iVar14;
          local_38 = uVar4;
          uStack_30 = uVar5;
          local_28 = uVar6;
          uStack_20 = uVar7;
          goto joined_r0x000148539016;
        }
      }
      bVar17 = iVar16 != 0;
      iVar12 = iVar16 + -1;
      iVar16 = iVar12;
    } while (bVar17);
    if (1 < (int)param_2) {
      uVar13 = (ulonglong)param_2 - 1;
      local_18 = param_1[4];
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar6 = param_1[2];
      uVar7 = param_1[3];
      param_1[4] = param_1[uVar13 * 5 + 4];
      uVar8 = param_1[uVar13 * 5];
      uVar9 = (param_1 + uVar13 * 5)[1];
      uVar10 = (param_1 + uVar13 * 5 + 2)[1];
      param_1[2] = param_1[uVar13 * 5 + 2];
      param_1[3] = uVar10;
      *param_1 = uVar8;
      param_1[1] = uVar9;
      param_1[uVar13 * 5 + 4] = local_18;
      local_38._0_4_ = (undefined4)uVar4;
      local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar5;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_28._0_4_ = (undefined4)uVar6;
      local_28._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar7;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = param_1 + uVar13 * 5 + 2;
      *(undefined4 *)puVar2 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
      puVar2 = param_1 + uVar13 * 5;
      *(undefined4 *)puVar2 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar2 + 4) = local_38._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_30._4_4_;
      local_38 = uVar4;
      uStack_30 = uVar5;
      local_28 = uVar6;
      uStack_20 = uVar7;
      if (param_2 != 2) {
        do {
          iVar12 = 0;
          iVar14 = 1;
          iVar16 = 0;
          do {
            iVar12 = iVar12 + 2;
            iVar15 = iVar14;
            if (((longlong)iVar12 < (longlong)uVar13) &&
               ((double)param_1[(longlong)iVar14 * 5 + 1] <
                (double)param_1[(longlong)iVar12 * 5 + 1] ||
                (double)param_1[(longlong)iVar14 * 5 + 1] ==
                (double)param_1[(longlong)iVar12 * 5 + 1])) {
              iVar15 = iVar12;
            }
            if ((double)param_1[(longlong)iVar15 * 5 + 1] <
                (double)param_1[(longlong)iVar16 * 5 + 1] ||
                (double)param_1[(longlong)iVar15 * 5 + 1] ==
                (double)param_1[(longlong)iVar16 * 5 + 1]) break;
            puVar2 = param_1 + (longlong)iVar16 * 5;
            puVar3 = param_1 + (longlong)iVar15 * 5;
            uVar4 = puVar2[4];
            uVar5 = *puVar2;
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            puVar2[4] = puVar3[4];
            uVar9 = *puVar3;
            uVar10 = puVar3[1];
            uVar11 = puVar3[3];
            puVar2[2] = puVar3[2];
            puVar2[3] = uVar11;
            *puVar2 = uVar9;
            puVar2[1] = uVar10;
            puVar3[4] = uVar4;
            puVar3[2] = uVar7;
            puVar3[3] = uVar8;
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            iVar12 = iVar15 * 2;
            iVar14 = iVar15 * 2 + 1;
            iVar16 = iVar15;
          } while ((longlong)iVar14 < (longlong)uVar13);
          uVar1 = uVar13 - 1;
          local_18 = param_1[4];
          uVar4 = *param_1;
          uVar5 = param_1[1];
          uVar6 = param_1[2];
          uVar7 = param_1[3];
          param_1[4] = param_1[uVar1 * 5 + 4];
          uVar8 = param_1[uVar1 * 5];
          uVar9 = (param_1 + uVar1 * 5)[1];
          uVar10 = (param_1 + uVar1 * 5 + 2)[1];
          param_1[2] = param_1[uVar1 * 5 + 2];
          param_1[3] = uVar10;
          *param_1 = uVar8;
          param_1[1] = uVar9;
          param_1[uVar1 * 5 + 4] = local_18;
          local_38._0_4_ = (undefined4)uVar4;
          local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar5;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_28._0_4_ = (undefined4)uVar6;
          local_28._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar7;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          puVar2 = param_1 + uVar1 * 5 + 2;
          *(undefined4 *)puVar2 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
          puVar2 = param_1 + uVar1 * 5;
          *(undefined4 *)puVar2 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar2 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_30._4_4_;
          bVar17 = 2 < uVar13;
          uVar13 = uVar1;
          local_38 = uVar4;
          uStack_30 = uVar5;
          local_28 = uVar6;
          uStack_20 = uVar7;
        } while (bVar17);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1485392b0 FUN_1485392b0 body=866 status=ok
// SIG undefined FUN_1485392b0(void)

ulonglong FUN_1485392b0(longlong param_1,uint param_2,undefined8 *param_3,double *param_4,
                       undefined4 *param_5,longlong param_6)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined7 uVar12;
  int iVar13;
  undefined8 *puVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_188 [32];
  undefined4 *local_168;
  longlong local_160;
  undefined8 *local_158;
  double *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130 [15];
  undefined8 local_b8 [3];
  undefined1 local_a0 [24];
  undefined4 local_88 [6];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar7 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                   (ulonglong)(param_2 & 0x1ff) * 4);
  uVar8 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8) +
                   (ulonglong)(uVar7 & 0x1ff) * 4);
  local_158 = param_3;
  if ((int)uVar7 < *(int *)(param_1 + 200)) {
    local_150 = param_4;
    if (0 < (int)uVar8) {
      do {
        uVar7 = uVar7 + 1;
        uVar1 = *(undefined4 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8) +
                 (ulonglong)(uVar7 & 0x1ff) * 4);
        pcVar2 = *(code **)(param_6 + 0x10);
        if (pcVar2 == (code *)0x0) {
LAB_1485393a9:
          local_168 = local_88;
          FUN_14853745c(*(undefined8 *)(param_1 + 8),uVar1,local_b8,local_a0);
          local_138 = local_158[2];
          local_148 = *local_158;
          uStack_140 = local_158[1];
          puVar10 = local_b8;
          puVar14 = local_130;
          for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar14 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar14 = puVar14 + 1;
          }
          dVar15 = (double)FUN_146bd2a7a(&local_148);
          if (dVar15 < *local_150) {
            *local_150 = dVar15;
            *param_5 = uVar1;
            uVar11 = CONCAT71((int7)((ulonglong)puVar10 >> 8),1);
            goto LAB_14853945f;
          }
        }
        else {
          local_148 = CONCAT44(local_148._4_4_,uVar1);
          plVar5 = *(longlong **)(param_6 + 0x20);
          if (*(longlong **)(param_6 + 0x20) == (longlong *)0x0) {
            plVar5 = (longlong *)(param_6 + 0x30);
          }
          uVar4 = (**(code **)(*plVar5 + 8))();
          cVar3 = (*pcVar2)(uVar4,&local_148);
          if (cVar3 != '\0') goto LAB_1485393a9;
        }
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  else {
    uVar12 = (undefined7)((ulonglong)param_4 >> 8);
    if ((int)uVar8 < 0) {
      dVar15 = (double)FUN_148538350(param_1,~uVar8,param_3);
      if (dVar15 <= *param_4) {
        local_160 = param_6;
        local_168 = param_5;
        cVar3 = FUN_1485392b0(param_1,~uVar8,local_158,param_4);
LAB_148539606:
        uVar11 = CONCAT71(uVar12,1);
        if (cVar3 != '\0') goto LAB_14853945f;
      }
    }
    else {
      iVar9 = uVar8 - 1;
      iVar13 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                       (ulonglong)(uVar7 + 1 & 0x1ff) * 4) + -1;
      dVar15 = (double)FUN_148538350(param_1,iVar9,param_3);
      dVar16 = (double)FUN_148538350(param_1,iVar13,param_3);
      if (dVar16 <= dVar15) {
        if (dVar16 < *param_4) {
          local_160 = param_6;
          local_168 = param_5;
          cVar3 = FUN_1485392b0(param_1,iVar13,local_158,param_4);
          uVar11 = CONCAT71(uVar12,1);
          if (cVar3 != '\0') goto LAB_14853945f;
          iVar13 = iVar9;
          if (dVar15 < *param_4) goto LAB_1485395d0;
        }
      }
      else if (dVar15 < *param_4) {
        local_160 = param_6;
        local_168 = param_5;
        cVar3 = FUN_1485392b0(param_1,iVar9,local_158,param_4);
        uVar11 = CONCAT71(uVar12,1);
        if (cVar3 != '\0') goto LAB_14853945f;
        if (dVar16 < *param_4) {
LAB_1485395d0:
          local_160 = param_6;
          local_168 = param_5;
          cVar3 = FUN_1485392b0(param_1,iVar13,local_158,param_4);
          goto LAB_148539606;
        }
      }
    }
  }
  uVar11 = 0;
LAB_14853945f:
  if ((local_70 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 148539614 FUN_148539614 body=824 status=ok
// SIG undefined FUN_148539614(void)

void FUN_148539614(longlong param_1,uint param_2,double *param_3,double *param_4,int *param_5,
                  longlong param_6)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_b8 [32];
  int *local_98;
  longlong local_90;
  longlong *local_88;
  int local_7c [3];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar11 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  while (*(int *)(param_1 + 200) <= (int)uVar11) {
    uVar9 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar11 >> 9) * 8) +
                     (ulonglong)(uVar11 & 0x1ff) * 4);
    if ((int)uVar9 < 0) {
      dVar14 = (double)FUN_148538350(param_1,~uVar9,param_3);
      uVar9 = ~uVar9;
      if (*param_4 < dVar14) goto LAB_14853991b;
    }
    else {
      uVar9 = uVar9 - 1;
      uVar11 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar11 + 1 >> 9) * 8) +
                       (ulonglong)(uVar11 + 1 & 0x1ff) * 4) - 1;
      dVar14 = (double)FUN_148538350(param_1,uVar9,param_3);
      dVar15 = (double)FUN_148538350(param_1,uVar11,param_3);
      if (dVar15 <= dVar14) {
        if (*param_4 <= dVar15) goto LAB_14853991b;
        local_90 = param_6;
        local_98 = param_5;
        FUN_148539614(param_1,uVar11,param_3,param_4);
        if (*param_4 <= dVar14) goto LAB_14853991b;
      }
      else {
        if (*param_4 <= dVar14) goto LAB_14853991b;
        local_90 = param_6;
        local_98 = param_5;
        FUN_148539614(param_1,uVar9,param_3,param_4);
        uVar9 = uVar11;
        if (*param_4 <= dVar15) goto LAB_14853991b;
      }
    }
    uVar11 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(uVar9 >> 9) * 8) +
                      (ulonglong)(uVar9 & 0x1ff) * 4);
  }
  iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar11 >> 9) * 8) +
                  (ulonglong)(uVar11 & 0x1ff) * 4);
  if (0 < iVar1) {
    local_88 = (longlong *)(param_6 + 0x30);
    iVar12 = 1;
    do {
      iVar2 = *(int *)(*(longlong *)
                        (*(longlong *)(param_1 + 0xb8) + (ulonglong)(iVar12 + uVar11 >> 9) * 8) +
                      (ulonglong)(iVar12 + uVar11 & 0x1ff) * 4);
      pcVar3 = *(code **)(param_6 + 0x10);
      if (pcVar3 == (code *)0x0) {
LAB_14853985e:
        FUN_1484ac0ae(*(undefined8 *)(param_1 + 8),local_7c,iVar2);
        lVar7 = 0;
        do {
          plVar8 = *(longlong **)(param_1 + 8);
          iVar2 = local_7c[lVar7];
          lVar4 = *(longlong *)(*plVar8 + 0x140);
          uVar10 = (ulonglong)(uint)(*(int *)(*plVar8 + 0x148) * iVar2);
          dVar16 = *param_3 - (double)*(float *)(lVar4 + uVar10) * (double)plVar8[1];
          dVar15 = param_3[1] - (double)*(float *)(lVar4 + 4 + uVar10) * (double)plVar8[2];
          dVar14 = param_3[2] - (double)*(float *)(lVar4 + 8 + uVar10) * (double)plVar8[3];
          dVar14 = dVar14 * dVar14 + dVar16 * dVar16 + dVar15 * dVar15;
          if (dVar14 < *param_4) {
            *param_4 = dVar14;
            *param_5 = iVar2;
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 != 3);
      }
      else {
        plVar8 = *(longlong **)(param_6 + 0x20);
        if (*(longlong **)(param_6 + 0x20) == (longlong *)0x0) {
          plVar8 = local_88;
        }
        local_7c[0] = iVar2;
        uVar6 = (**(code **)(*plVar8 + 8))();
        cVar5 = (*pcVar3)(uVar6,local_7c);
        if (cVar5 != '\0') goto LAB_14853985e;
      }
      bVar13 = iVar12 != iVar1;
      iVar12 = iVar12 + 1;
    } while (bVar13);
  }
LAB_14853991b:
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14853994e FUN_14853994e body=991 status=ok
// SIG undefined FUN_14853994e(void)

ulonglong FUN_14853994e(longlong param_1,uint param_2,undefined4 *param_3,double param_4,
                       double *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  code *pcVar3;
  double dVar4;
  char cVar5;
  undefined8 uVar6;
  double *pdVar7;
  longlong lVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 unaff_RDI;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined7 uVar13;
  uint uVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_208 [32];
  double *local_1e8;
  undefined4 *local_1e0;
  undefined4 *local_1d8;
  double local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188 [4];
  undefined8 uStack_168;
  undefined8 local_160;
  double local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108 [9];
  double local_c0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_208;
  uVar14 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  local_1e0 = param_3;
  if ((int)uVar14 < *(int *)(param_1 + 200)) {
    iVar15 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar14 >> 9) * 8) +
                     (ulonglong)(uVar14 & 0x1ff) * 4);
    if (0 < iVar15) {
      local_1d8 = param_3 + 6;
      do {
        uVar14 = uVar14 + 1;
        uVar1 = *(undefined4 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar14 >> 9) * 8) +
                 (ulonglong)(uVar14 & 0x1ff) * 4);
        pcVar3 = (code *)param_5[2];
        if (pcVar3 == (code *)0x0) {
LAB_148539a68:
          local_1e8 = &local_1d0;
          FUN_14853745c(*(undefined8 *)(param_1 + 8),uVar1,&local_1a0,&local_1b8);
          local_1e8 = &local_1d0;
          cVar5 = FUN_146bd896c(local_1e0,local_1d8,&local_1a0,&local_1b8);
          if (cVar5 != '\0') {
            local_188[2] = local_190;
            local_188[0] = local_1a0;
            local_188[1] = uStack_198;
            local_188[3] = local_1b8;
            uStack_168 = uStack_1b0;
            local_160 = local_1a8;
            local_158 = local_1d0;
            uStack_150 = uStack_1c8;
            local_148 = local_1c0;
            local_138 = *local_1e0;
            uStack_134 = local_1e0[1];
            uStack_130 = local_1e0[2];
            uStack_12c = local_1e0[3];
            local_128 = *(undefined8 *)(local_1e0 + 4);
            uStack_120 = *(undefined8 *)(local_1e0 + 6);
            local_118 = local_1e0[8];
            uStack_114 = local_1e0[9];
            uStack_110 = local_1e0[10];
            uStack_10c = local_1e0[0xb];
            puVar10 = local_188;
            puVar11 = local_108;
            for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
              *puVar11 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar11 = puVar11 + 1;
            }
            cVar5 = FUN_146bd80f0(&local_138);
            if ((cVar5 != '\0') && (local_c0 < *param_5)) {
              uVar12 = CONCAT71((int7)((ulonglong)puVar11 >> 8),1);
              goto LAB_148539bc4;
            }
          }
        }
        else {
          pdVar7 = (double *)param_5[4];
          if ((double *)param_5[4] == (double *)0x0) {
            pdVar7 = param_5 + 6;
          }
          local_138 = uVar1;
          uVar6 = (**(code **)((longlong)*pdVar7 + 8))();
          cVar5 = (*pcVar3)(uVar6,&local_138);
          if (cVar5 != '\0') goto LAB_148539a68;
        }
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
  }
  else {
    uVar2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar14 >> 9) * 8) +
                     (ulonglong)(uVar14 & 0x1ff) * 4);
    if ((int)uVar2 < 0) {
      dVar4 = (double)FUN_14853874e(param_1,~uVar2,param_3);
      if (dVar4 <= param_4 + 1e-08) {
        local_1e8 = param_5;
        cVar5 = FUN_14853994e(param_1,~uVar2,local_1e0,param_4);
        uVar13 = (undefined7)((ulonglong)unaff_RDI >> 8);
LAB_148539d21:
        uVar12 = CONCAT71(uVar13,1);
        if (cVar5 != '\0') goto LAB_148539bc4;
      }
    }
    else {
      iVar9 = uVar2 - 1;
      iVar15 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                       (ulonglong)(uVar14 + 1 & 0x1ff) * 4) + -1;
      dVar16 = (double)FUN_14853874e(param_1,iVar9,param_3);
      dVar17 = (double)FUN_14853874e(param_1,iVar15,param_3);
      dVar4 = param_4 + 1e-08;
      uVar13 = (undefined7)((ulonglong)param_3 >> 8);
      if (dVar17 <= dVar16) {
        if (dVar17 <= dVar4) {
          local_1e8 = param_5;
          cVar5 = FUN_14853994e(param_1,iVar15,local_1e0,param_4);
          iVar15 = iVar9;
          dVar17 = dVar16;
          goto joined_r0x000148539cdb;
        }
      }
      else if (dVar16 <= dVar4) {
        local_1e8 = param_5;
        cVar5 = FUN_14853994e(param_1,iVar9,local_1e0,param_4);
joined_r0x000148539cdb:
        uVar12 = CONCAT71(uVar13,1);
        if (cVar5 != '\0') goto LAB_148539bc4;
        if (dVar17 <= dVar4) {
          local_1e8 = param_5;
          cVar5 = FUN_14853994e(param_1,iVar15,local_1e0,param_4);
          goto LAB_148539d21;
        }
      }
    }
  }
  uVar12 = 0;
LAB_148539bc4:
  if ((local_90 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return uVar12 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148539d2e FUN_148539d2e body=2503 status=ok
// SIG undefined FUN_148539d2e(void)

void FUN_148539d2e(longlong *param_1,uint param_2,longlong param_3,undefined8 *param_4,uint param_5,
                  uint param_6,double *param_7,undefined8 *param_8,longlong param_9,
                  longlong param_10)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  undefined4 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  undefined1 auStack_2c8 [32];
  undefined4 *local_2a8;
  int local_2a0;
  double *local_298;
  undefined8 *local_290;
  longlong local_288;
  longlong local_280;
  longlong local_270;
  longlong *local_268;
  int local_25c;
  ulonglong local_258;
  int local_24c;
  undefined8 *local_248;
  longlong *local_240;
  longlong *local_238;
  ulonglong local_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  undefined8 local_1a8 [9];
  undefined8 local_160 [9];
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8 [3];
  undefined1 local_b0 [24];
  undefined4 local_98 [6];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  uVar5 = *(uint *)(*(longlong *)(param_1[0xe] + (ulonglong)(param_2 >> 9) * 8) +
                   (ulonglong)(param_2 & 0x1ff) * 4);
  uVar11 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0x70) + (ulonglong)(param_5 >> 9) * 8) +
                    (ulonglong)(param_5 & 0x1ff) * 4);
  iVar13 = (int)param_1[0x19];
  local_270 = param_3;
  if (((int)uVar5 < iVar13) && ((int)uVar11 < *(int *)(param_3 + 200))) {
    local_25c = *(int *)(*(longlong *)(param_1[0x17] + (ulonglong)(uVar5 >> 9) * 8) +
                        (ulonglong)(uVar5 & 0x1ff) * 4);
    local_24c = *(int *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar11 >> 9) * 8)
                        + (ulonglong)(uVar11 & 0x1ff) * 4);
    local_210 = -1.0;
    local_258 = (ulonglong)uVar5;
    local_248 = param_4;
    if (0 < local_24c) {
      local_238 = (longlong *)(param_10 + 0x30);
      local_240 = param_4 + 4;
      local_268 = (longlong *)(param_9 + 0x30);
      local_258 = (ulonglong)(uVar5 + 1);
      iVar13 = 1;
      local_230 = (ulonglong)uVar11;
      do {
        uVar5 = iVar13 + (int)local_230;
        uVar18 = *(undefined4 *)
                  (*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar5 >> 9) * 8) +
                  (ulonglong)(uVar5 & 0x1ff) * 4);
        pcVar1 = *(code **)(param_10 + 0x10);
        if (pcVar1 == (code *)0x0) {
LAB_148539f10:
          local_2a8 = &local_e8;
          FUN_14853745c(*(undefined8 *)(param_3 + 8),uVar18,&local_118,&local_100);
          plVar10 = local_240;
          puVar12 = local_248;
          pcVar1 = (code *)*local_248;
          if (pcVar1 != (code *)0x0) {
            plVar8 = (longlong *)local_248[2];
            if ((longlong *)local_248[2] == (longlong *)0x0) {
              plVar8 = local_240;
            }
            uVar6 = (**(code **)(*plVar8 + 8))();
            (*pcVar1)(&local_228,uVar6,&local_118);
            local_108 = local_218;
            local_118._0_4_ = local_228;
            local_118._4_4_ = uStack_224;
            uStack_110 = uStack_220;
            uStack_10c = uStack_21c;
            pcVar1 = (code *)*puVar12;
            plVar8 = (longlong *)puVar12[2];
            if ((longlong *)puVar12[2] == (longlong *)0x0) {
              plVar8 = plVar10;
            }
            uVar6 = (**(code **)(*plVar8 + 8))();
            (*pcVar1)(&local_228,uVar6,&local_100);
            local_f0 = local_218;
            local_100 = local_228;
            uStack_fc = uStack_224;
            uStack_f8 = uStack_220;
            uStack_f4 = uStack_21c;
            pcVar1 = (code *)*puVar12;
            plVar8 = (longlong *)puVar12[2];
            if ((longlong *)puVar12[2] == (longlong *)0x0) {
              plVar8 = plVar10;
            }
            uVar6 = (**(code **)(*plVar8 + 8))();
            (*pcVar1)(&local_228,uVar6,&local_e8);
            local_d8 = local_218;
            local_e8 = local_228;
            uStack_e4 = uStack_224;
            uStack_e0 = uStack_220;
            uStack_dc = uStack_21c;
          }
          puVar12 = &local_118;
          puVar14 = local_1a8;
          for (lVar9 = 9; lVar9 != 0; lVar9 = lVar9 + -1) {
            *puVar14 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar14 = puVar14 + 1;
          }
          local_210 = -1.0;
          param_3 = local_270;
          if (0 < local_25c) {
            uVar7 = local_258 & 0xffffffff;
            iVar15 = local_25c;
            do {
              uVar22 = *(undefined4 *)
                        (*(longlong *)(param_1[0x17] + (uVar7 >> 9) * 8) +
                        (ulonglong)((uint)uVar7 & 0x1ff) * 4);
              pcVar1 = *(code **)(param_9 + 0x10);
              if (pcVar1 == (code *)0x0) {
LAB_14853a0e5:
                local_2a8 = local_98;
                FUN_14853745c(param_1[1],uVar22,local_c8,local_b0);
                param_3 = local_270;
                puVar12 = local_c8;
                puVar14 = local_160;
                for (lVar9 = 9; lVar9 != 0; lVar9 = lVar9 + -1) {
                  *puVar14 = *puVar12;
                  puVar12 = puVar12 + 1;
                  puVar14 = puVar14 + 1;
                }
                local_210 = -1.0;
                dVar19 = (double)FUN_146bd8e44(&local_210);
                if (dVar19 < *param_7) {
                  *param_7 = dVar19;
                  *param_8 = CONCAT44(uVar18,uVar22);
                }
              }
              else {
                plVar10 = *(longlong **)(param_9 + 0x20);
                if (*(longlong **)(param_9 + 0x20) == (longlong *)0x0) {
                  plVar10 = local_268;
                }
                local_228 = uVar22;
                uVar6 = (**(code **)(*plVar10 + 8))();
                cVar4 = (*pcVar1)(uVar6,&local_228);
                if (cVar4 != '\0') goto LAB_14853a0e5;
              }
              uVar7 = (ulonglong)((uint)uVar7 + 1);
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
          }
        }
        else {
          plVar10 = *(longlong **)(param_10 + 0x20);
          if (*(longlong **)(param_10 + 0x20) == (longlong *)0x0) {
            plVar10 = local_238;
          }
          local_228 = uVar18;
          uVar6 = (**(code **)(*plVar10 + 8))();
          cVar4 = (*pcVar1)(uVar6,&local_228);
          if (cVar4 != '\0') goto LAB_148539f10;
        }
        bVar17 = iVar13 != local_24c;
        iVar13 = iVar13 + 1;
      } while (bVar17);
    }
    goto LAB_14853a4a4;
  }
  bVar17 = (param_6 & 1) == 0;
  if ((bVar17 || (int)uVar5 < iVar13) &&
      (*(int *)(param_3 + 200) <= (int)uVar11 || !bVar17 && (int)uVar5 >= iVar13)) {
    uVar7 = (ulonglong)((param_2 >> 9) << 3);
    lVar9 = *(longlong *)(param_1[0x11] + uVar7);
    lVar3 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
    lVar2 = *(longlong *)(param_1[0x14] + uVar7);
    local_1e8 = *(double *)(lVar9 + 0x10 + lVar3);
    dVar19 = *(double *)(lVar2 + 0x10 + lVar3);
    local_200 = local_1e8 - dVar19;
    local_1f0 = *(double *)(lVar9 + 8 + lVar3);
    dVar20 = *(double *)(lVar2 + 8 + lVar3);
    local_208 = local_1f0 - dVar20;
    local_210 = *(double *)(lVar9 + lVar3) - *(double *)(lVar2 + lVar3);
    local_1e8 = local_1e8 + dVar19;
    local_1f0 = local_1f0 + dVar20;
    local_1f8 = *(double *)(lVar9 + lVar3) + *(double *)(lVar2 + lVar3);
    uVar5 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar11 >> 9) * 8) +
                     (ulonglong)(uVar11 & 0x1ff) * 4);
    local_268 = param_1;
    if ((int)uVar5 < 0) {
      FUN_14853a6f6(param_3,local_c8,~uVar5,param_4);
      dVar19 = (double)FUN_146bd8cba(local_c8,&local_210);
      if (*param_7 <= dVar19) goto LAB_14853a4a4;
      local_280 = param_10;
      local_288 = param_9;
      local_290 = param_8;
      local_2a8 = (undefined4 *)CONCAT44(local_2a8._4_4_,~uVar5);
      plVar10 = local_268;
    }
    else {
      iVar13 = uVar5 - 1;
      iVar15 = *(int *)(*(longlong *)
                         (*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar11 + 1 >> 9) * 8) +
                       (ulonglong)(uVar11 + 1 & 0x1ff) * 4) + -1;
      FUN_14853a6f6(param_3,local_c8,iVar13,param_4);
      FUN_14853a6f6(param_3,&local_118,iVar15,param_4);
      dVar20 = (double)FUN_146bd8cba(local_c8,&local_210);
      dVar21 = (double)FUN_146bd8cba(&local_118,&local_210);
      dVar19 = *param_7;
      uVar18 = SUB84(dVar19,0);
      uVar22 = (undefined4)((ulonglong)dVar19 >> 0x20);
      if (dVar20 <= dVar21) {
        if (dVar20 < dVar19) {
          local_2a0 = param_6 + 1;
          local_280 = param_10;
          local_288 = param_9;
          local_290 = param_8;
          local_298 = param_7;
          local_2a8 = (undefined4 *)CONCAT44(local_2a8._4_4_,iVar13);
          FUN_148539d2e(local_268,param_2,local_270,param_4);
          uVar18 = SUB84(*param_7,0);
          uVar22 = (undefined4)((ulonglong)*param_7 >> 0x20);
        }
        iVar13 = iVar15;
        if ((double)CONCAT44(uVar22,uVar18) < dVar21 || (double)CONCAT44(uVar22,uVar18) == dVar21)
        goto LAB_14853a4a4;
      }
      else {
        if (dVar21 < dVar19) {
          local_2a0 = param_6 + 1;
          local_280 = param_10;
          local_288 = param_9;
          local_290 = param_8;
          local_298 = param_7;
          local_2a8 = (undefined4 *)CONCAT44(local_2a8._4_4_,iVar15);
          FUN_148539d2e(local_268,param_2,local_270,param_4);
          uVar18 = SUB84(*param_7,0);
          uVar22 = (undefined4)((ulonglong)*param_7 >> 0x20);
        }
        if ((double)CONCAT44(uVar22,uVar18) < dVar20 || (double)CONCAT44(uVar22,uVar18) == dVar20)
        goto LAB_14853a4a4;
      }
      local_2a8 = (undefined4 *)CONCAT44(local_2a8._4_4_,iVar13);
      plVar10 = local_268;
      param_3 = local_270;
      local_290 = param_8;
      local_288 = param_9;
      local_280 = param_10;
    }
  }
  else {
    FUN_14853a6f6(param_3,&local_210,param_5,param_4);
    param_2 = *(uint *)(*(longlong *)(param_1[0x17] + (ulonglong)(uVar5 >> 9) * 8) +
                       (ulonglong)(uVar5 & 0x1ff) * 4);
    if ((int)param_2 < 0) {
      param_2 = ~param_2;
      dVar19 = (double)FUN_14853a8dc(param_1,param_2,&local_210);
      if (*param_7 <= dVar19) goto LAB_14853a4a4;
    }
    else {
      uVar11 = param_2 - 1;
      param_2 = *(int *)(*(longlong *)(param_1[0x17] + (ulonglong)(uVar5 + 1 >> 9) * 8) +
                        (ulonglong)(uVar5 + 1 & 0x1ff) * 4) - 1;
      dVar20 = (double)FUN_14853a8dc(param_1,uVar11,&local_210);
      dVar21 = (double)FUN_14853a8dc(param_1,param_2,&local_210);
      dVar19 = *param_7;
      uVar18 = SUB84(dVar19,0);
      uVar22 = (undefined4)((ulonglong)dVar19 >> 0x20);
      if (dVar20 <= dVar21) {
        if (dVar20 < dVar19) {
          local_2a0 = param_6 + 1;
          local_280 = param_10;
          local_288 = param_9;
          local_290 = param_8;
          local_298 = param_7;
          local_2a8 = (undefined4 *)CONCAT44(local_2a8._4_4_,param_5);
          FUN_148539d2e(param_1,uVar11,local_270,param_4);
          uVar18 = SUB84(*param_7,0);
          uVar22 = (undefined4)((ulonglong)*param_7 >> 0x20);
        }
        bVar17 = (double)CONCAT44(uVar22,uVar18) == dVar21;
        bVar16 = (double)CONCAT44(uVar22,uVar18) < dVar21;
      }
      else {
        if (dVar21 < dVar19) {
          local_2a0 = param_6 + 1;
          local_280 = param_10;
          local_288 = param_9;
          local_290 = param_8;
          local_298 = param_7;
          local_2a8 = (undefined4 *)CONCAT44(local_2a8._4_4_,param_5);
          FUN_148539d2e(param_1,param_2,local_270,param_4);
          uVar18 = SUB84(*param_7,0);
          uVar22 = (undefined4)((ulonglong)*param_7 >> 0x20);
        }
        bVar17 = (double)CONCAT44(uVar22,uVar18) == dVar20;
        bVar16 = (double)CONCAT44(uVar22,uVar18) < dVar20;
        param_2 = uVar11;
      }
      if (bVar16 || bVar17) goto LAB_14853a4a4;
    }
    local_288 = param_9;
    local_2a8 = (undefined4 *)CONCAT44(local_2a8._4_4_,param_5);
    plVar10 = param_1;
    param_3 = local_270;
    local_290 = param_8;
    local_280 = param_10;
  }
  local_2a0 = param_6 + 1;
  local_298 = param_7;
  FUN_148539d2e(plVar10,param_2,param_3,param_4);
LAB_14853a4a4:
  if ((local_80 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14853a6f6 FUN_14853a6f6 body=484 status=ok
// SIG undefined FUN_14853a6f6(void)

double * FUN_14853a6f6(longlong param_1,double *param_2,uint param_3,longlong *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*param_4 == 0) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_3 >> 9) * 8);
    lVar9 = (ulonglong)((param_3 & 0x1ff) << 3) * 3;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_3 >> 9) * 8);
    dVar1 = *(double *)(lVar7 + 0x10 + lVar9);
    dVar2 = *(double *)(lVar8 + 0x10 + lVar9);
    dVar3 = *(double *)(lVar7 + lVar9);
    dVar4 = *(double *)(lVar7 + 8 + lVar9);
    dVar5 = *(double *)(lVar8 + lVar9);
    dVar6 = *(double *)(lVar8 + 8 + lVar9);
    *param_2 = dVar3 - dVar5;
    param_2[1] = dVar4 - dVar6;
    param_2[2] = dVar1 - dVar2;
    param_2[3] = dVar3 + dVar5;
    param_2[4] = dVar4 + dVar6;
    param_2[5] = dVar1 + dVar2;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_3 >> 9) * 8);
    lVar9 = (ulonglong)((param_3 & 0x1ff) << 3) * 3;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_3 >> 9) * 8);
    local_90 = *(double *)(lVar7 + 0x10 + lVar9);
    dVar1 = *(double *)(lVar8 + 0x10 + lVar9);
    local_a8 = local_90 - dVar1;
    local_98 = *(double *)(lVar7 + 8 + lVar9);
    dVar2 = *(double *)(lVar8 + 8 + lVar9);
    local_b0 = local_98 - dVar2;
    local_b8 = *(double *)(lVar7 + lVar9) - *(double *)(lVar8 + lVar9);
    local_90 = local_90 + dVar1;
    local_98 = local_98 + dVar2;
    local_a0 = *(double *)(lVar7 + lVar9) + *(double *)(lVar8 + lVar9);
    local_78 = 0;
    local_68 = &PTR_LAB_14af172f0;
    local_88 = FUN_14853a9e2;
    local_60 = param_4;
    FUN_146bda188(param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14853a8dc FUN_14853a8dc body=260 status=ok
// SIG undefined FUN_14853a8dc(void)

void FUN_14853a8dc(longlong param_1,uint param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [40];
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = *(double *)(param_1 + 0x60);
  lVar4 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 >> 9) * 8);
  local_58 = *(double *)(lVar3 + lVar4) + local_48;
  local_50 = *(double *)(lVar3 + 8 + lVar4) + local_48;
  local_48 = local_48 + *(double *)(lVar3 + 0x10 + lVar4);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_2 >> 9) * 8);
  dVar1 = *(double *)(lVar3 + 0x10 + lVar4);
  local_60 = dVar1 - local_48;
  dVar2 = *(double *)(lVar3 + 8 + lVar4);
  local_68 = dVar2 - local_50;
  local_70 = *(double *)(lVar3 + lVar4) - local_58;
  local_48 = local_48 + dVar1;
  local_50 = local_50 + dVar2;
  local_58 = local_58 + *(double *)(lVar3 + lVar4);
  FUN_146bd8cba(&local_70,param_3);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14853a9e2 FUN_14853a9e2 body=62 status=ok
// SIG undefined FUN_14853a9e2(void)

undefined8 FUN_14853a9e2(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  puVar1 = (undefined8 *)*param_2;
  pcVar2 = (code *)*puVar1;
  plVar4 = puVar1 + 4;
  if ((longlong *)puVar1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)puVar1[2];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(param_1,uVar3,param_3);
  return param_1;
}



// FUNCTION 14853aa4a FUN_14853aa4a body=29 status=ok
// SIG undefined FUN_14853aa4a(void)

undefined8 FUN_14853aa4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14853aa68 FUN_14853aa68 body=659 status=ok
// SIG undefined FUN_14853aa68(void)

int FUN_14853aa68(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,longlong param_6)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  longlong local_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  int local_94;
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined8 local_60 [3];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar7 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                   (ulonglong)(param_2 & 0x1ff) * 4);
  local_d0 = param_3;
  if ((int)uVar7 < *(int *)(param_1 + 200)) {
    iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8) +
                    (ulonglong)(uVar7 & 0x1ff) * 4);
    if (0 < iVar6) {
      do {
        uVar7 = uVar7 + 1;
        iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8)
                        + (ulonglong)(uVar7 & 0x1ff) * 4);
        pcVar1 = *(code **)(param_6 + 0x10);
        if (pcVar1 == (code *)0x0) {
LAB_14853ab46:
          local_e8 = local_60;
          FUN_14853745c(*(undefined8 *)(param_1 + 8),iVar3,local_90,local_78);
          cVar2 = (*(code *)*param_5)(param_5[1],local_d0,local_90);
          if (cVar2 != '\0') goto LAB_14853ab8f;
        }
        else {
          plVar5 = *(longlong **)(param_6 + 0x20);
          if (*(longlong **)(param_6 + 0x20) == (longlong *)0x0) {
            plVar5 = (longlong *)(param_6 + 0x30);
          }
          local_94 = iVar3;
          uVar4 = (**(code **)(*plVar5 + 8))();
          cVar2 = (*pcVar1)(uVar4,&local_94);
          if (cVar2 != '\0') goto LAB_14853ab46;
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar3 = -1;
  }
  else {
    uVar8 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8) +
                     (ulonglong)(uVar7 & 0x1ff) * 4);
    if ((int)uVar8 < 0) {
      uVar8 = ~uVar8;
      cVar2 = FUN_14853acfc(param_1,uVar8,param_4);
      iVar3 = -1;
      if (cVar2 == '\0') goto LAB_14853ab8f;
      local_a8 = *param_5;
      local_e8 = &local_a8;
      local_a0 = param_5[1];
    }
    else {
      iVar6 = *(int *)(*(longlong *)
                        (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                      (ulonglong)(uVar7 + 1 & 0x1ff) * 4);
      cVar2 = FUN_14853acfc(param_1,uVar8 - 1,param_4);
      if (cVar2 != '\0') {
        local_b8 = *param_5;
        local_e8 = &local_b8;
        local_b0 = param_5[1];
        local_e0 = param_6;
        iVar3 = FUN_14853aa68(param_1,uVar8 - 1,local_d0,param_4);
        if (iVar3 != -1) goto LAB_14853ab8f;
      }
      uVar8 = iVar6 - 1;
      cVar2 = FUN_14853acfc(param_1,uVar8,param_4);
      iVar3 = -1;
      if (cVar2 == '\0') goto LAB_14853ab8f;
      local_c8 = *param_5;
      local_e8 = &local_c8;
      local_c0 = param_5[1];
    }
    local_e0 = param_6;
    iVar3 = FUN_14853aa68(param_1,uVar8,local_d0,param_4);
  }
LAB_14853ab8f:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 14853acfc FUN_14853acfc body=191 status=ok
// SIG undefined FUN_14853acfc(void)

bool FUN_14853acfc(longlong param_1,uint param_2,double *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = *(double *)(param_1 + 0x60);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_2 >> 9) * 8);
  lVar3 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 >> 9) * 8);
  dVar6 = *(double *)(lVar2 + lVar3) + dVar5;
  bVar4 = false;
  if ((*(double *)(lVar1 + lVar3) - dVar6 < param_3[3]) &&
     (*param_3 < dVar6 + *(double *)(lVar1 + lVar3))) {
    dVar7 = *(double *)(lVar2 + 8 + lVar3) + dVar5;
    dVar6 = *(double *)(lVar1 + 8 + lVar3);
    if ((dVar6 - dVar7 < param_3[4]) && (bVar4 = false, param_3[1] < dVar7 + dVar6)) {
      dVar5 = dVar5 + *(double *)(lVar2 + 0x10 + lVar3);
      dVar6 = *(double *)(lVar1 + 0x10 + lVar3);
      if (dVar6 - dVar5 < param_3[5]) {
        bVar4 = param_3[2] < dVar6 + dVar5;
      }
    }
  }
  return bVar4;
}



// FUNCTION 14853add0 FUN_14853add0 body=2254 status=ok
// SIG undefined FUN_14853add0(void)

ulonglong FUN_14853add0(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4,
                       uint param_5,uint param_6,undefined8 *param_7,longlong param_8,
                       longlong param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  undefined4 uVar6;
  code *pcVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong lVar13;
  undefined8 *puVar14;
  char cVar15;
  uint uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong *plVar20;
  undefined8 unaff_RBP;
  ulonglong uVar21;
  int iVar22;
  int iVar23;
  bool bVar24;
  undefined1 auStack_248 [32];
  undefined4 *local_228;
  int local_220;
  undefined8 *local_218;
  longlong local_210;
  longlong local_208;
  int local_1f8;
  int local_1f4;
  longlong *local_1f0;
  ulonglong local_1e8;
  undefined8 *local_1e0;
  longlong *local_1d8;
  ulonglong local_1d0;
  longlong *local_1c8;
  undefined8 local_1c0 [2];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190 [2];
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170 [2];
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  double local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  double local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  double local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  double local_108;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined4 local_c8 [6];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  uVar16 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  uVar5 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0x70) + (ulonglong)(param_5 >> 9) * 8) +
                   (ulonglong)(param_5 & 0x1ff) * 4);
  iVar23 = *(int *)(param_1 + 200);
  if (((int)uVar16 < iVar23) && ((int)uVar5 < *(int *)(param_3 + 200))) {
    local_1f4 = *(int *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar5 >> 9) * 8)
                        + (ulonglong)(uVar5 & 0x1ff) * 4);
    if (0 < local_1f4) {
      local_1f8 = *(int *)(*(longlong *)
                            (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar16 >> 9) * 8) +
                          (ulonglong)(uVar16 & 0x1ff) * 4);
      local_1d8 = (longlong *)(param_9 + 0x30);
      local_1f0 = param_4 + 4;
      local_1c8 = (longlong *)(param_8 + 0x30);
      local_1e8 = (ulonglong)(uVar16 + 1);
      uVar18 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
      iVar23 = 1;
      local_1e0 = param_4;
      local_1d0 = (ulonglong)uVar5;
      do {
        uVar16 = iVar23 + (int)local_1d0;
        uVar6 = *(undefined4 *)
                 (*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar16 >> 9) * 8) +
                 (ulonglong)(uVar16 & 0x1ff) * 4);
        pcVar7 = *(code **)(param_9 + 0x10);
        if (pcVar7 == (code *)0x0) {
LAB_14853afa6:
          local_228 = &local_118;
          FUN_14853745c(*(undefined8 *)(param_3 + 8),uVar6,&local_148,&local_130);
          puVar14 = local_1e0;
          plVar20 = local_1f0;
          pcVar7 = (code *)*local_1e0;
          if (pcVar7 != (code *)0x0) {
            plVar19 = (longlong *)local_1e0[2];
            if ((longlong *)local_1e0[2] == (longlong *)0x0) {
              plVar19 = local_1f0;
            }
            uVar17 = (**(code **)(*plVar19 + 8))();
            (*pcVar7)(&local_160,uVar17,&local_148);
            local_138 = local_150;
            local_148 = local_160;
            uStack_144 = uStack_15c;
            uStack_140 = uStack_158;
            uStack_13c = uStack_154;
            pcVar7 = (code *)*puVar14;
            plVar19 = (longlong *)puVar14[2];
            if ((longlong *)puVar14[2] == (longlong *)0x0) {
              plVar19 = plVar20;
            }
            uVar17 = (**(code **)(*plVar19 + 8))();
            (*pcVar7)(&local_160,uVar17,&local_130);
            local_120 = local_150;
            local_130 = local_160;
            uStack_12c = uStack_15c;
            uStack_128 = uStack_158;
            uStack_124 = uStack_154;
            pcVar7 = (code *)*puVar14;
            plVar19 = (longlong *)puVar14[2];
            if ((longlong *)puVar14[2] == (longlong *)0x0) {
              plVar19 = plVar20;
            }
            uVar17 = (**(code **)(*plVar19 + 8))();
            (*pcVar7)(&local_160,uVar17,&local_118);
            local_108 = local_150;
            local_118 = local_160;
            uStack_114 = uStack_15c;
            uStack_110 = uStack_158;
            uStack_10c = uStack_154;
          }
          if (0 < local_1f8) {
            uVar21 = local_1e8 & 0xffffffff;
            iVar22 = local_1f8;
            do {
              uVar6 = *(undefined4 *)
                       (*(longlong *)(*(longlong *)(param_1 + 0xb8) + (uVar21 >> 9) * 8) +
                       (ulonglong)((uint)uVar21 & 0x1ff) * 4);
              pcVar7 = *(code **)(param_8 + 0x10);
              if (pcVar7 == (code *)0x0) {
LAB_14853b13b:
                local_228 = local_c8;
                FUN_14853745c(*(undefined8 *)(param_1 + 8),uVar6,&local_f8,&local_e0);
                cVar15 = (*(code *)*param_7)(param_7[1],&local_148,&local_f8);
                if (cVar15 != '\0') goto LAB_14853b218;
              }
              else {
                plVar20 = *(longlong **)(param_8 + 0x20);
                if (*(longlong **)(param_8 + 0x20) == (longlong *)0x0) {
                  plVar20 = local_1c8;
                }
                local_160 = uVar6;
                uVar17 = (**(code **)(*plVar20 + 8))();
                cVar15 = (*pcVar7)(uVar17,&local_160);
                if (cVar15 != '\0') goto LAB_14853b13b;
              }
              uVar21 = (ulonglong)((uint)uVar21 + 1);
              iVar22 = iVar22 + -1;
            } while (iVar22 != 0);
          }
        }
        else {
          plVar20 = *(longlong **)(param_9 + 0x20);
          if (*(longlong **)(param_9 + 0x20) == (longlong *)0x0) {
            plVar20 = local_1d8;
          }
          local_160 = uVar6;
          uVar17 = (**(code **)(*plVar20 + 8))();
          cVar15 = (*pcVar7)(uVar17,&local_160);
          if (cVar15 != '\0') goto LAB_14853afa6;
        }
        bVar24 = iVar23 != local_1f4;
        uVar18 = CONCAT71((int7)(uVar18 >> 8),iVar23 < local_1f4);
        iVar23 = iVar23 + 1;
      } while (bVar24);
      goto LAB_14853b218;
    }
  }
  else {
    bVar24 = (param_6 & 1) == 0;
    if ((bVar24 || (int)uVar16 < iVar23) &&
        (*(int *)(param_3 + 200) <= (int)uVar5 || !bVar24 && (int)uVar16 >= iVar23)) {
      uVar18 = (ulonglong)((param_2 >> 9) << 3);
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x88) + uVar18);
      lVar13 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + uVar18);
      dVar1 = *(double *)(lVar8 + 0x10 + lVar13);
      dVar2 = *(double *)(lVar9 + 0x10 + lVar13);
      dVar10 = dVar1 - dVar2;
      dVar3 = *(double *)(lVar8 + 8 + lVar13);
      dVar4 = *(double *)(lVar9 + 8 + lVar13);
      dVar11 = dVar3 - dVar4;
      dVar12 = *(double *)(lVar8 + lVar13) - *(double *)(lVar9 + lVar13);
      dVar1 = dVar1 + dVar2;
      dVar3 = dVar3 + dVar4;
      dVar2 = *(double *)(lVar8 + lVar13) + *(double *)(lVar9 + lVar13);
      uVar16 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar5 >> 9) * 8)
                        + (ulonglong)(uVar5 & 0x1ff) * 4);
      if ((int)uVar16 < 0) {
        FUN_14853a6f6(param_3,&local_f8,~uVar16,param_4);
        if ((((dVar2 <= local_f8) || (local_e0 <= dVar12)) ||
            ((dVar3 <= local_f0 || ((local_d8 <= dVar11 || (dVar1 <= local_e8)))))) ||
           (local_d0 <= dVar10)) goto LAB_14853b216;
        uVar17 = *param_7;
        local_218 = local_170;
      }
      else {
        iVar22 = uVar16 - 1;
        iVar23 = *(int *)(*(longlong *)
                           (*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar5 + 1 >> 9) * 8) +
                         (ulonglong)(uVar5 + 1 & 0x1ff) * 4);
        FUN_14853a6f6(param_3,&local_f8,iVar22,param_4);
        if (((((local_f8 < dVar2) && (dVar12 < local_e0)) && (local_f0 < dVar3)) &&
            ((dVar11 < local_d8 && (local_e8 < dVar1)))) && (dVar10 < local_d0)) {
          local_180 = *param_7;
          local_218 = &local_180;
          local_178 = param_7[1];
          local_220 = param_6 + 1;
          local_208 = param_9;
          local_210 = param_8;
          local_228 = (undefined4 *)CONCAT44(local_228._4_4_,iVar22);
          cVar15 = FUN_14853add0(param_1,param_2,param_3,param_4);
          uVar18 = CONCAT71((uint7)(uint3)((uint)iVar22 >> 8),1);
          if (cVar15 != '\0') goto LAB_14853b218;
        }
        param_5 = iVar23 - 1;
        FUN_14853a6f6(param_3,&local_148,param_5,param_4);
        uVar21 = 0;
        uVar18 = 0;
        if (((dVar2 <= (double)CONCAT44(uStack_144,local_148)) ||
            ((double)CONCAT44(uStack_12c,local_130) <= dVar12)) ||
           ((uVar18 = uVar21, dVar3 <= (double)CONCAT44(uStack_13c,uStack_140) ||
            ((((double)CONCAT44(uStack_124,uStack_128) <= dVar11 || (dVar1 <= local_138)) ||
             (local_120 <= dVar10)))))) goto LAB_14853b218;
        uVar17 = *param_7;
        local_218 = local_190;
      }
LAB_14853b3a8:
      *local_218 = uVar17;
      local_218[1] = param_7[1];
      local_228 = (undefined4 *)CONCAT44(local_228._4_4_,param_5);
LAB_14853b3e3:
      local_220 = param_6 + 1;
      local_208 = param_9;
      local_210 = param_8;
      uVar16 = FUN_14853add0(param_1,param_2,param_3,param_4);
      uVar18 = (ulonglong)uVar16;
      goto LAB_14853b218;
    }
    FUN_14853a6f6(param_3,&local_f8,param_5,param_4);
    param_2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar16 >> 9) * 8)
                       + (ulonglong)(uVar16 & 0x1ff) * 4);
    if ((int)param_2 < 0) {
      param_2 = ~param_2;
      cVar15 = FUN_14853acfc(param_1,param_2,&local_f8);
      if (cVar15 != '\0') {
        local_1a0 = *param_7;
        local_218 = &local_1a0;
        local_198 = param_7[1];
        local_228 = (undefined4 *)CONCAT44(local_228._4_4_,param_5);
        goto LAB_14853b3e3;
      }
    }
    else {
      iVar22 = param_2 - 1;
      iVar23 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar16 + 1 >> 9) * 8) +
                       (ulonglong)(uVar16 + 1 & 0x1ff) * 4);
      cVar15 = FUN_14853acfc(param_1,iVar22,&local_f8);
      if (cVar15 != '\0') {
        local_1b0 = *param_7;
        local_218 = &local_1b0;
        local_1a8 = param_7[1];
        local_220 = param_6 + 1;
        local_208 = param_9;
        local_210 = param_8;
        local_228 = (undefined4 *)CONCAT44(local_228._4_4_,param_5);
        cVar15 = FUN_14853add0(param_1,iVar22,param_3,param_4);
        uVar18 = CONCAT71((uint7)(uint3)((uint)iVar22 >> 8),1);
        if (cVar15 != '\0') goto LAB_14853b218;
      }
      param_2 = iVar23 - 1;
      cVar15 = FUN_14853acfc(param_1,param_2,&local_f8);
      if (cVar15 != '\0') {
        uVar17 = *param_7;
        local_218 = local_1c0;
        goto LAB_14853b3a8;
      }
    }
  }
LAB_14853b216:
  uVar18 = 0;
LAB_14853b218:
  if ((local_b0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar18 & 0xffffff01;
}



// FUNCTION 14853b6b4 FUN_14853b6b4 body=62 status=ok
// SIG undefined FUN_14853b6b4(void)

undefined8 FUN_14853b6b4(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  puVar1 = (undefined8 *)*param_2;
  pcVar2 = (code *)*puVar1;
  plVar4 = puVar1 + 4;
  if ((longlong *)puVar1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)puVar1[2];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(param_1,uVar3,param_3);
  return param_1;
}



// FUNCTION 14853b71c FUN_14853b71c body=29 status=ok
// SIG undefined FUN_14853b71c(void)

undefined8 FUN_14853b71c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14853b73a FUN_14853b73a body=2393 status=ok
// SIG undefined FUN_14853b73a(void)

void FUN_14853b73a(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4,uint param_5,
                  uint param_6,undefined8 param_7,undefined8 *param_8,longlong param_9,
                  longlong param_10)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong lVar14;
  char cVar15;
  uint uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong *plVar21;
  int iVar22;
  undefined8 *puVar23;
  double *pdVar24;
  undefined8 *puVar25;
  double *pdVar26;
  int iVar27;
  bool bVar28;
  undefined1 auStack_388 [32];
  undefined4 *local_368;
  int local_360;
  undefined8 local_358;
  undefined8 *local_350;
  longlong local_348;
  longlong local_340;
  longlong local_330;
  int local_328;
  int local_324;
  undefined8 *local_320;
  longlong *local_318;
  ulonglong local_310;
  longlong *local_308;
  ulonglong local_300;
  longlong *local_2f8;
  undefined8 local_2f0 [2];
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0 [2];
  undefined8 local_2c0 [2];
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0 [2];
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  double local_280;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  double local_268;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  double local_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  double local_238;
  double local_230 [4];
  double local_210;
  double local_208;
  undefined4 local_200 [6];
  undefined8 local_1e8 [9];
  double local_1a0 [9];
  undefined8 local_158;
  undefined1 local_150;
  ulonglong local_14c;
  undefined4 local_144;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_388;
  uVar16 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  uVar4 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0x70) + (ulonglong)(param_5 >> 9) * 8) +
                   (ulonglong)(param_5 & 0x1ff) * 4);
  local_158 = 0x3e45798ee2308c3a;
  local_150 = 0;
  local_14c = 0;
  local_144 = 0;
  iVar27 = *(int *)(param_1 + 200);
  local_330 = param_3;
  if (((int)uVar16 < iVar27) && ((int)uVar4 < *(int *)(param_3 + 200))) {
    local_324 = *(int *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar4 >> 9) * 8)
                        + (ulonglong)(uVar4 & 0x1ff) * 4);
    local_320 = param_4;
    if (0 < local_324) {
      local_328 = *(int *)(*(longlong *)
                            (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar16 >> 9) * 8) +
                          (ulonglong)(uVar16 & 0x1ff) * 4);
      local_308 = (longlong *)(param_10 + 0x30);
      local_318 = param_4 + 4;
      local_2f8 = (longlong *)(param_9 + 0x30);
      local_310 = (ulonglong)(uVar16 + 1);
      iVar27 = 1;
      local_300 = (ulonglong)uVar4;
      do {
        uVar16 = iVar27 + (int)local_300;
        uVar5 = *(undefined4 *)
                 (*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar16 >> 9) * 8) +
                 (ulonglong)(uVar16 & 0x1ff) * 4);
        pcVar7 = *(code **)(param_10 + 0x10);
        if (pcVar7 == (code *)0x0) {
LAB_14853b946:
          local_368 = &local_248;
          FUN_14853745c(*(undefined8 *)(param_3 + 8),uVar5,&local_278,&local_260);
          plVar21 = local_318;
          puVar23 = local_320;
          pcVar7 = (code *)*local_320;
          if (pcVar7 != (code *)0x0) {
            plVar19 = (longlong *)local_320[2];
            if ((longlong *)local_320[2] == (longlong *)0x0) {
              plVar19 = local_318;
            }
            uVar17 = (**(code **)(*plVar19 + 8))();
            (*pcVar7)(&local_290,uVar17,&local_278);
            local_268 = local_280;
            local_278._0_4_ = local_290;
            local_278._4_4_ = uStack_28c;
            uStack_270 = uStack_288;
            uStack_26c = uStack_284;
            pcVar7 = (code *)*puVar23;
            plVar19 = (longlong *)puVar23[2];
            if ((longlong *)puVar23[2] == (longlong *)0x0) {
              plVar19 = plVar21;
            }
            uVar17 = (**(code **)(*plVar19 + 8))();
            (*pcVar7)(&local_290,uVar17,&local_260);
            local_250 = local_280;
            local_260 = local_290;
            uStack_25c = uStack_28c;
            uStack_258 = uStack_288;
            uStack_254 = uStack_284;
            pcVar7 = (code *)*puVar23;
            plVar19 = (longlong *)puVar23[2];
            if ((longlong *)puVar23[2] == (longlong *)0x0) {
              plVar19 = plVar21;
            }
            uVar17 = (**(code **)(*plVar19 + 8))();
            (*pcVar7)(&local_290,uVar17,&local_248);
            local_238 = local_280;
            local_248 = local_290;
            uStack_244 = uStack_28c;
            uStack_240 = uStack_288;
            uStack_23c = uStack_284;
          }
          local_14c = local_14c & 0xffffffff00000000;
          puVar23 = &local_278;
          puVar25 = local_1e8;
          for (lVar20 = 9; lVar20 != 0; lVar20 = lVar20 + -1) {
            *puVar25 = *puVar23;
            puVar23 = puVar23 + 1;
            puVar25 = puVar25 + 1;
          }
          param_3 = local_330;
          if (0 < local_328) {
            uVar18 = local_310 & 0xffffffff;
            iVar22 = local_328;
            do {
              uVar6 = *(undefined4 *)
                       (*(longlong *)(*(longlong *)(param_1 + 0xb8) + (uVar18 >> 9) * 8) +
                       (ulonglong)((uint)uVar18 & 0x1ff) * 4);
              pcVar7 = *(code **)(param_9 + 0x10);
              if (pcVar7 == (code *)0x0) {
LAB_14853bb0c:
                local_368 = local_200;
                FUN_14853745c(*(undefined8 *)(param_1 + 8),uVar6,local_230,local_230 + 3);
                param_3 = local_330;
                local_14c = local_14c & 0xffffffff00000000;
                pdVar24 = local_230;
                pdVar26 = local_1a0;
                for (lVar20 = 9; lVar20 != 0; lVar20 = lVar20 + -1) {
                  *pdVar26 = *pdVar24;
                  pdVar24 = pdVar24 + 1;
                  pdVar26 = pdVar26 + 1;
                }
                cVar15 = (*(code *)*param_8)(param_8[1],local_1e8);
                if (cVar15 != '\0') {
                  FUN_14853c0c2(local_1e8,uVar6,uVar5,param_7);
                }
              }
              else {
                plVar21 = *(longlong **)(param_9 + 0x20);
                if (*(longlong **)(param_9 + 0x20) == (longlong *)0x0) {
                  plVar21 = local_2f8;
                }
                local_290 = uVar6;
                uVar17 = (**(code **)(*plVar21 + 8))();
                cVar15 = (*pcVar7)(uVar17,&local_290);
                if (cVar15 != '\0') goto LAB_14853bb0c;
              }
              uVar18 = (ulonglong)((uint)uVar18 + 1);
              iVar22 = iVar22 + -1;
            } while (iVar22 != 0);
          }
        }
        else {
          plVar21 = *(longlong **)(param_10 + 0x20);
          if (*(longlong **)(param_10 + 0x20) == (longlong *)0x0) {
            plVar21 = local_308;
          }
          local_290 = uVar5;
          uVar17 = (**(code **)(*plVar21 + 8))();
          cVar15 = (*pcVar7)(uVar17,&local_290);
          if (cVar15 != '\0') goto LAB_14853b946;
        }
        bVar28 = iVar27 != local_324;
        iVar27 = iVar27 + 1;
      } while (bVar28);
    }
    goto LAB_14853be34;
  }
  bVar28 = (param_6 & 1) == 0;
  if ((bVar28 || (int)uVar16 < iVar27) &&
      (*(int *)(param_3 + 200) <= (int)uVar4 || !bVar28 && (int)uVar16 >= iVar27)) {
    dVar1 = *(double *)(param_1 + 0x60);
    uVar18 = (ulonglong)((param_2 >> 9) << 3);
    lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x88) + uVar18);
    lVar14 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + uVar18);
    dVar12 = *(double *)(lVar8 + lVar14) + dVar1;
    dVar10 = *(double *)(lVar8 + 8 + lVar14) + dVar1;
    dVar1 = dVar1 + *(double *)(lVar8 + 0x10 + lVar14);
    dVar2 = *(double *)(lVar20 + 0x10 + lVar14);
    dVar9 = dVar2 - dVar1;
    dVar3 = *(double *)(lVar20 + 8 + lVar14);
    dVar11 = dVar3 - dVar10;
    dVar13 = *(double *)(lVar20 + lVar14) - dVar12;
    dVar1 = dVar1 + dVar2;
    dVar10 = dVar10 + dVar3;
    dVar12 = dVar12 + *(double *)(lVar20 + lVar14);
    param_5 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar4 >> 9) * 8) +
                       (ulonglong)(uVar4 & 0x1ff) * 4);
    if ((int)param_5 < 0) {
      param_5 = ~param_5;
      FUN_14853a6f6(param_3,local_230,param_5,param_4);
      if ((((dVar12 <= local_230[0]) || (local_230[3] <= dVar13)) ||
          ((dVar10 <= local_230[1] || ((local_210 <= dVar11 || (dVar1 <= local_230[2])))))) ||
         (local_208 <= dVar9)) goto LAB_14853be34;
      uVar17 = *param_8;
      local_350 = local_2a0;
    }
    else {
      FUN_14853a6f6(param_3,local_230,param_5 - 1,param_4);
      if (((((local_230[0] < dVar12) && (dVar13 < local_230[3])) && (local_230[1] < dVar10)) &&
          ((dVar11 < local_210 && (local_230[2] < dVar1)))) && (dVar9 < local_208)) {
        local_2b0 = *param_8;
        local_350 = &local_2b0;
        local_2a8 = param_8[1];
        local_360 = param_6 + 1;
        local_340 = param_10;
        local_348 = param_9;
        local_358 = param_7;
        local_368 = (undefined4 *)CONCAT44(local_368._4_4_,param_5 - 1);
        FUN_14853b73a(param_1,param_2,local_330,param_4);
      }
      param_5 = *(int *)(*(longlong *)
                          (*(longlong *)(local_330 + 0xb8) + (ulonglong)(uVar4 + 1 >> 9) * 8) +
                        (ulonglong)(uVar4 + 1 & 0x1ff) * 4) - 1;
      FUN_14853a6f6(local_330,&local_278,param_5,param_4);
      if (((dVar12 <= (double)CONCAT44(local_278._4_4_,(undefined4)local_278)) ||
          ((double)CONCAT44(uStack_25c,local_260) <= dVar13)) ||
         ((dVar10 <= (double)CONCAT44(uStack_26c,uStack_270) ||
          ((((double)CONCAT44(uStack_254,uStack_258) <= dVar11 || (dVar1 <= local_268)) ||
           (local_250 <= dVar9)))))) goto LAB_14853be34;
      uVar17 = *param_8;
      local_350 = local_2c0;
    }
  }
  else {
    FUN_14853a6f6(param_3,local_230,param_5,param_4);
    lVar20 = *(longlong *)(param_1 + 0xb8);
    param_2 = *(uint *)(*(longlong *)(lVar20 + (ulonglong)(uVar16 >> 9) * 8) +
                       (ulonglong)(uVar16 & 0x1ff) * 4);
    if ((int)param_2 < 0) {
      param_2 = ~param_2;
      cVar15 = FUN_14853acfc(param_1,param_2,local_230);
      if (cVar15 == '\0') goto LAB_14853be34;
      uVar17 = *param_8;
      local_350 = local_2d0;
    }
    else {
      cVar15 = FUN_14853acfc(param_1,param_2 - 1,local_230);
      if (cVar15 != '\0') {
        local_2e0 = *param_8;
        local_350 = &local_2e0;
        local_2d8 = param_8[1];
        local_360 = param_6 + 1;
        local_340 = param_10;
        local_348 = param_9;
        local_358 = param_7;
        local_368 = (undefined4 *)CONCAT44(local_368._4_4_,param_5);
        FUN_14853b73a(param_1,param_2 - 1,local_330,param_4);
        lVar20 = *(longlong *)(param_1 + 0xb8);
      }
      param_2 = *(int *)(*(longlong *)(lVar20 + (ulonglong)(uVar16 + 1 >> 9) * 8) +
                        (ulonglong)(uVar16 + 1 & 0x1ff) * 4) - 1;
      cVar15 = FUN_14853acfc(param_1,param_2,local_230);
      if (cVar15 == '\0') goto LAB_14853be34;
      uVar17 = *param_8;
      local_350 = local_2f0;
    }
  }
  *local_350 = uVar17;
  local_350[1] = param_8[1];
  local_360 = param_6 + 1;
  local_340 = param_10;
  local_348 = param_9;
  local_358 = param_7;
  local_368 = (undefined4 *)CONCAT44(local_368._4_4_,param_5);
  FUN_14853b73a(param_1,param_2,local_330,param_4);
LAB_14853be34:
  if ((local_b0 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14853c094 FUN_14853c094 body=45 status=ok
// SIG undefined FUN_14853c094(void)

bool FUN_14853c094(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_146bdafb2();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    FUN_146bdb916(param_1);
    bVar2 = *(int *)(param_1 + 0x9c) == 1;
  }
  return bVar2;
}



// FUNCTION 14853c0c2 FUN_14853c0c2 body=1201 status=ok
// SIG undefined FUN_14853c0c2(void)

void FUN_14853c0c2(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar4 = *(int *)(param_1 + 0xa4);
  if (iVar4 == 2) {
    local_48 = *(undefined8 *)(param_1 + 0xb8);
    local_58 = *(undefined8 *)(param_1 + 0xa8);
    uStack_50 = *(undefined8 *)(param_1 + 0xb0);
    local_78 = *(undefined8 *)(param_1 + 0xc0);
    uStack_70 = *(undefined8 *)(param_1 + 200);
    local_68 = *(undefined8 *)(param_1 + 0xd0);
  }
  else {
    if (iVar4 == 1) {
      local_48 = *(undefined8 *)(param_1 + 0xb8);
      local_58 = *(undefined8 *)(param_1 + 0xa8);
      uStack_50 = *(undefined8 *)(param_1 + 0xb0);
      iVar4 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar4 + 1U) {
        FUN_146bddb72(param_4,iVar4);
      }
      lVar6 = *param_4;
      lVar7 = (longlong)iVar4 * 0x20;
      *(undefined4 *)(lVar6 + lVar7) = param_2;
      *(undefined4 *)(lVar6 + 4 + lVar7) = param_3;
      puVar2 = (undefined4 *)(lVar6 + 8 + lVar7);
      *puVar2 = (undefined4)local_58;
      puVar2[1] = local_58._4_4_;
      puVar2[2] = (undefined4)uStack_50;
      puVar2[3] = uStack_50._4_4_;
      *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_48;
      goto LAB_14853c1ff;
    }
    if (iVar4 < 3) goto LAB_14853c1ff;
    if (*(int *)(param_1 + 0xa0) != 6) {
      local_48 = *(undefined8 *)(param_1 + 0xb8);
      local_58 = *(undefined8 *)(param_1 + 0xa8);
      uStack_50 = *(undefined8 *)(param_1 + 0xb0);
      local_68 = *(undefined8 *)(param_1 + 0xd0);
      local_78 = *(undefined8 *)(param_1 + 0xc0);
      uStack_70 = *(undefined8 *)(param_1 + 200);
      local_88 = *(undefined8 *)(param_1 + 0xe8);
      local_98 = *(undefined8 *)(param_1 + 0xd8);
      uStack_90 = *(undefined8 *)(param_1 + 0xe0);
      local_a8 = *(undefined8 *)(param_1 + 0x100);
      local_b8 = *(undefined8 *)(param_1 + 0xf0);
      uStack_b0 = *(undefined8 *)(param_1 + 0xf8);
      local_c8 = *(undefined8 *)(param_1 + 0x118);
      local_d8 = *(undefined8 *)(param_1 + 0x108);
      uStack_d0 = *(undefined8 *)(param_1 + 0x110);
      local_e8 = *(undefined8 *)(param_1 + 0x130);
      local_f8 = *(undefined4 *)(param_1 + 0x120);
      uStack_f4 = *(undefined4 *)(param_1 + 0x124);
      uStack_f0 = *(undefined4 *)(param_1 + 0x128);
      uStack_ec = *(undefined4 *)(param_1 + 300);
      iVar5 = (int)param_4[5];
      *(uint *)(param_4 + 5) = iVar5 + 1U;
      if (*(uint *)((longlong)param_4 + 0x2c) < iVar5 + 1U) {
        FUN_146bddc88(param_4 + 4,iVar5);
      }
      lVar6 = param_4[4];
      lVar7 = (longlong)iVar5 * 0xa0;
      *(undefined4 *)(lVar6 + lVar7) = param_2;
      *(undefined4 *)(lVar6 + 4 + lVar7) = param_3;
      *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_48;
      puVar3 = (undefined8 *)(lVar6 + 8 + lVar7);
      *puVar3 = local_58;
      puVar3[1] = uStack_50;
      *(undefined8 *)(lVar6 + 0x30 + lVar7) = local_68;
      puVar3 = (undefined8 *)(lVar6 + 0x20 + lVar7);
      *puVar3 = local_78;
      puVar3[1] = uStack_70;
      *(undefined8 *)(lVar6 + 0x48 + lVar7) = local_88;
      puVar3 = (undefined8 *)(lVar6 + 0x38 + lVar7);
      *puVar3 = local_98;
      puVar3[1] = uStack_90;
      *(undefined8 *)(lVar6 + 0x60 + lVar7) = local_a8;
      puVar3 = (undefined8 *)(lVar6 + 0x50 + lVar7);
      *puVar3 = local_b8;
      puVar3[1] = uStack_b0;
      puVar3 = (undefined8 *)(lVar6 + 0x68 + lVar7);
      *puVar3 = local_d8;
      puVar3[1] = uStack_d0;
      *(undefined8 *)(lVar6 + 0x78 + lVar7) = local_c8;
      puVar2 = (undefined4 *)(lVar6 + 0x80 + lVar7);
      *puVar2 = local_f8;
      puVar2[1] = uStack_f4;
      puVar2[2] = uStack_f0;
      puVar2[3] = uStack_ec;
      *(undefined8 *)(lVar6 + 0x90 + lVar7) = local_e8;
      *(int *)(lVar6 + 0x98 + lVar7) = iVar4;
      goto LAB_14853c1ff;
    }
    plVar1 = param_4 + 2;
    local_48 = *(undefined8 *)(param_1 + 0xb8);
    local_58 = *(undefined8 *)(param_1 + 0xa8);
    uStack_50 = *(undefined8 *)(param_1 + 0xb0);
    local_78 = *(undefined8 *)(param_1 + 0xc0);
    uStack_70 = *(undefined8 *)(param_1 + 200);
    local_68 = *(undefined8 *)(param_1 + 0xd0);
    iVar4 = (int)param_4[3];
    *(uint *)(param_4 + 3) = iVar4 + 1U;
    if (*(uint *)((longlong)param_4 + 0x1c) < iVar4 + 1U) {
      FUN_146bddbf8(plVar1,iVar4);
    }
    lVar6 = param_4[2];
    lVar7 = (longlong)iVar4 * 0x38;
    *(undefined4 *)(lVar6 + lVar7) = param_2;
    *(undefined4 *)(lVar6 + 4 + lVar7) = param_3;
    puVar3 = (undefined8 *)(lVar6 + 8 + lVar7);
    *puVar3 = local_58;
    puVar3[1] = uStack_50;
    *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_48;
    puVar3 = (undefined8 *)(lVar6 + 0x20 + lVar7);
    *puVar3 = local_78;
    puVar3[1] = uStack_70;
    *(undefined8 *)(lVar6 + 0x30 + lVar7) = local_68;
    local_48 = *(undefined8 *)(param_1 + 0xe8);
    local_58 = *(undefined8 *)(param_1 + 0xd8);
    uStack_50 = *(undefined8 *)(param_1 + 0xe0);
    local_78 = *(undefined8 *)(param_1 + 0xf0);
    uStack_70 = *(undefined8 *)(param_1 + 0xf8);
    local_68 = *(undefined8 *)(param_1 + 0x100);
    iVar4 = (int)param_4[3];
    *(uint *)(param_4 + 3) = iVar4 + 1U;
    if (*(uint *)((longlong)param_4 + 0x1c) < iVar4 + 1U) {
      FUN_146bddbf8(plVar1,iVar4);
    }
    lVar6 = *plVar1;
    lVar7 = (longlong)iVar4 * 0x38;
    *(undefined4 *)(lVar6 + lVar7) = param_2;
    *(undefined4 *)(lVar6 + 4 + lVar7) = param_3;
    puVar3 = (undefined8 *)(lVar6 + 8 + lVar7);
    *puVar3 = local_58;
    puVar3[1] = uStack_50;
    *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_48;
    puVar2 = (undefined4 *)(lVar6 + 0x20 + lVar7);
    *puVar2 = (undefined4)local_78;
    puVar2[1] = local_78._4_4_;
    puVar2[2] = (undefined4)uStack_70;
    puVar2[3] = uStack_70._4_4_;
    *(undefined8 *)(lVar6 + 0x30 + lVar7) = local_68;
    if (*(int *)(param_1 + 0xa4) < 5) goto LAB_14853c1ff;
    local_48 = *(undefined8 *)(param_1 + 0x118);
    local_58 = *(undefined8 *)(param_1 + 0x108);
    uStack_50 = *(undefined8 *)(param_1 + 0x110);
    local_78 = *(undefined8 *)(param_1 + 0x120);
    uStack_70 = *(undefined8 *)(param_1 + 0x128);
    local_68 = *(undefined8 *)(param_1 + 0x130);
  }
  iVar4 = (int)param_4[3];
  *(uint *)(param_4 + 3) = iVar4 + 1U;
  if (*(uint *)((longlong)param_4 + 0x1c) < iVar4 + 1U) {
    FUN_146bddbf8(param_4 + 2,iVar4);
  }
  lVar6 = param_4[2];
  lVar7 = (longlong)iVar4 * 0x38;
  *(undefined4 *)(lVar6 + lVar7) = param_2;
  *(undefined4 *)(lVar6 + 4 + lVar7) = param_3;
  puVar3 = (undefined8 *)(lVar6 + 8 + lVar7);
  *puVar3 = local_58;
  puVar3[1] = uStack_50;
  *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_48;
  puVar2 = (undefined4 *)(lVar6 + 0x20 + lVar7);
  *puVar2 = (undefined4)local_78;
  puVar2[1] = local_78._4_4_;
  puVar2[2] = (undefined4)uStack_70;
  puVar2[3] = uStack_70._4_4_;
  *(undefined8 *)(lVar6 + 0x30 + lVar7) = local_68;
LAB_14853c1ff:
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14853c574 FUN_14853c574 body=362 status=ok
// SIG undefined FUN_14853c574(void)

ulonglong FUN_14853c574(longlong param_1,longlong param_2,undefined1 param_3,undefined8 *param_4,
                       undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined7 uVar6;
  undefined8 uVar5;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar9 = 0;
  if (0 < *(int *)(param_1 + 200)) {
    uVar7 = uVar9;
    uVar9 = 0;
    do {
      iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8) +
                      (ulonglong)(uVar7 & 0x1ff) * 4);
      uVar8 = iVar2 + uVar7 + 1;
      iVar10 = uVar7 + 2;
      while (uVar1 = iVar10 - 1, (int)uVar1 < (int)(iVar2 + uVar7)) {
        local_58 = *param_4;
        local_50 = param_4[1];
        local_70 = param_5;
        local_78 = &local_58;
        local_80 = CONCAT31(local_80._1_3_,param_3);
        local_88 = param_2;
        uVar4 = FUN_14853c70e(param_1,*(undefined4 *)
                                       (*(longlong *)
                                         (*(longlong *)(param_1 + 0xb8) +
                                         (ulonglong)(uVar1 >> 9) * 8) +
                                       (ulonglong)(uVar1 & 0x1ff) * 4),iVar10,uVar8);
        uVar6 = (undefined7)(uVar4 >> 8);
        bVar3 = (byte)uVar9;
        uVar9 = (uint)((byte)uVar4 & 1 | bVar3);
        iVar10 = iVar10 + 1;
        if ((param_2 == 0) && ((uVar4 & 1) != 0 || bVar3 != 0)) {
          bVar3 = 1;
          goto LAB_14853c6b5;
        }
      }
      uVar7 = uVar8;
    } while ((int)uVar8 < *(int *)(param_1 + 200));
  }
  local_68 = *param_4;
  local_78 = &local_68;
  local_60 = param_4[1];
  local_70 = param_5;
  local_88 = CONCAT71(local_88._1_7_,param_3);
  local_80 = 0;
  uVar5 = FUN_14853c962(param_1,*(undefined4 *)(param_1 + 0xcc),0xffffffff,param_2);
  uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
  bVar3 = (byte)uVar5 | (byte)uVar9;
LAB_14853c6b5:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar6,bVar3) & 0xffffffffffffff01;
}



// FUNCTION 14853c6e0 FUN_14853c6e0 body=45 status=ok
// SIG undefined FUN_14853c6e0(void)

bool FUN_14853c6e0(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_146bdafb2();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    FUN_146bdb916(param_1);
    bVar2 = *(int *)(param_1 + 0x9c) == 1;
  }
  return bVar2;
}



// FUNCTION 14853c70e FUN_14853c70e body=594 status=ok
// SIG undefined FUN_14853c70e(void)

ulonglong FUN_14853c70e(longlong param_1,undefined4 param_2,uint param_3,uint param_4,
                       longlong param_5,char param_6,undefined8 *param_7,longlong param_8)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined1 auStack_268 [32];
  undefined1 *local_248;
  undefined4 local_234;
  longlong *local_230;
  int local_228 [6];
  undefined8 local_210 [9];
  undefined8 local_1c8 [9];
  undefined8 local_180;
  undefined1 local_178;
  ulonglong local_174;
  undefined4 local_16c;
  undefined8 local_d8 [3];
  undefined1 local_c0 [24];
  undefined1 local_a8 [24];
  undefined8 local_90 [3];
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_268;
  pcVar2 = *(code **)(param_8 + 0x10);
  if (pcVar2 == (code *)0x0) {
LAB_14853c7af:
    local_248 = local_60;
    FUN_14853745c(*(undefined8 *)(param_1 + 8),param_2,local_90,local_78);
    local_180 = 0x3e45798ee2308c3a;
    local_178 = 0;
    local_174 = 0;
    local_16c = 0;
    puVar9 = local_90;
    puVar11 = local_210;
    for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    FUN_1484ac0ae(*(undefined8 *)(param_1 + 8),local_228 + 3,param_2);
    if ((int)param_3 < (int)param_4) {
      local_230 = (longlong *)(param_8 + 0x30);
      uVar10 = 0;
      local_234 = param_2;
      do {
        iVar1 = *(int *)(*(longlong *)
                          (*(longlong *)(param_1 + 0xb8) + (ulonglong)(param_3 >> 9) * 8) +
                        (ulonglong)(param_3 & 0x1ff) * 4);
        pcVar2 = *(code **)(param_8 + 0x10);
        if (pcVar2 == (code *)0x0) {
LAB_14853c89c:
          FUN_1484ac0ae(*(undefined8 *)(param_1 + 8),local_228,iVar1);
          if (param_6 != '\0') {
            lVar6 = 0;
            do {
              lVar8 = 0;
              do {
                if (local_228[lVar6 + 3] == local_228[lVar8]) goto LAB_14853c891;
                lVar8 = lVar8 + 1;
              } while (lVar8 != 3);
              lVar6 = lVar6 + 1;
            } while (lVar6 != 3);
          }
          local_248 = local_a8;
          FUN_14853745c(*(undefined8 *)(param_1 + 8),iVar1,local_d8,local_c0);
          local_174 = local_174 & 0xffffffff00000000;
          puVar9 = local_d8;
          puVar11 = local_1c8;
          for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar11 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar11 = puVar11 + 1;
          }
          uVar4 = (*(code *)*param_7)(param_7[1],local_210);
          uVar10 = (ulonglong)uVar4;
          if ((char)uVar4 != '\0') {
            if (param_5 == 0) {
              uVar10 = CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
              break;
            }
            FUN_14853c0c2(local_210,local_234,iVar1,param_5);
          }
        }
        else {
          plVar7 = *(longlong **)(param_8 + 0x20);
          if (*(longlong **)(param_8 + 0x20) == (longlong *)0x0) {
            plVar7 = local_230;
          }
          local_228[0] = iVar1;
          uVar5 = (**(code **)(*plVar7 + 8))();
          cVar3 = (*pcVar2)(uVar5,local_228);
          if (cVar3 != '\0') goto LAB_14853c89c;
        }
LAB_14853c891:
        param_3 = param_3 + 1;
      } while (param_3 != param_4);
      goto LAB_14853c77b;
    }
  }
  else {
    plVar7 = (longlong *)(param_8 + 0x30);
    if (*(longlong **)(param_8 + 0x20) != (longlong *)0x0) {
      plVar7 = *(longlong **)(param_8 + 0x20);
    }
    local_210[0]._0_4_ = param_2;
    uVar5 = (**(code **)(*plVar7 + 8))();
    cVar3 = (*pcVar2)(uVar5,local_210);
    if (cVar3 != '\0') goto LAB_14853c7af;
  }
  uVar10 = 0;
LAB_14853c77b:
  if ((local_48 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffffffffff01;
}



// FUNCTION 14853c962 FUN_14853c962 body=1887 status=ok
// SIG undefined FUN_14853c962(void)

ulonglong FUN_14853c962(longlong param_1,uint param_2,uint param_3,longlong param_4,
                       undefined1 param_5,uint param_6,undefined8 *param_7,undefined8 param_8)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  undefined3 uVar5;
  longlong lVar6;
  char cVar7;
  byte bVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  uint7 uVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  bool bVar22;
  undefined1 auStack_178 [32];
  longlong local_158;
  int local_150;
  undefined8 *local_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  undefined8 local_90;
  undefined8 local_88;
  ulonglong local_80;
  ulonglong uVar15;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (-1 < (int)param_2) {
    uVar15 = (ulonglong)param_2;
    uVar12 = param_2 >> 9;
    uVar13 = param_2 & 0x1ff;
    uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)uVar12 * 8) +
                      (ulonglong)uVar13 * 4);
    if ((int)param_3 < 0) {
      uVar21 = 0xffffffff;
    }
    else {
      uVar21 = *(uint *)(*(longlong *)
                          (*(longlong *)(param_1 + 0x70) + (ulonglong)(param_3 >> 9) * 8) +
                        (ulonglong)(param_3 & 0x1ff) * 4);
    }
    iVar19 = *(int *)(param_1 + 200);
    if ((iVar19 <= (int)uVar10) || (iVar19 <= (int)uVar21)) {
      if (iVar19 <= (int)uVar10) {
        bVar22 = (param_6 & 0x80000001) == 1;
        if ((-1 < (int)param_3) || (bVar22 && iVar19 <= (int)uVar21)) {
          if (!bVar22 || iVar19 > (int)uVar21) {
            uVar15 = (ulonglong)param_3;
            uVar21 = uVar10;
          }
          uVar12 = (uint)(uVar15 >> 9);
          uVar13 = (uint)uVar15 & 0x1ff;
          goto LAB_14853cb5f;
        }
        uVar12 = *(uint *)(*(longlong *)
                            (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 >> 9) * 8) +
                          (ulonglong)(uVar10 & 0x1ff) * 4);
        uVar16 = (uint7)(uint3)(param_2 >> 8);
        if ((int)uVar12 < 0) {
          local_100 = *param_7;
          local_148 = &local_100;
          local_f8 = param_7[1];
          local_150 = param_6 + 1;
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          uVar10 = FUN_14853c962(param_1,~uVar12,0xffffffff,param_4);
joined_r0x00014853d04b:
          uVar17 = (ulonglong)uVar10;
          if ((param_4 == 0) && (uVar15 = CONCAT71(uVar16,1), (char)uVar10 != '\0'))
          goto LAB_14853caf7;
        }
        else {
          iVar20 = uVar12 - 1;
          iVar19 = *(int *)(*(longlong *)
                             (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 + 1 >> 9) * 8) +
                           (ulonglong)(uVar10 + 1 & 0x1ff) * 4);
          local_110 = *param_7;
          local_148 = &local_110;
          local_108 = param_7[1];
          iVar18 = param_6 + 1;
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          local_150 = iVar18;
          uVar9 = FUN_14853c962(param_1,iVar20,0xffffffff,param_4);
          uVar15 = CONCAT71(uVar16,1);
          if ((param_4 == 0) && ((byte)uVar9 != 0)) goto LAB_14853caf7;
          uVar10 = iVar19 - 1;
          local_120 = *param_7;
          local_148 = &local_120;
          local_118 = param_7[1];
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          local_150 = iVar18;
          bVar14 = FUN_14853c962(param_1,uVar10,0xffffffff,param_4);
          uVar5 = (undefined3)((uint)uVar9 >> 8);
          bVar14 = (byte)uVar9 | bVar14;
          if ((param_4 == 0) && (bVar14 != 0)) goto LAB_14853caf7;
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(uVar10 >> 9) * 8);
          lVar6 = (ulonglong)((uVar10 & 0x1ff) << 3) * 3;
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(uVar10 >> 9) * 8);
          local_98 = *(double *)(lVar3 + 0x10 + lVar6);
          dVar1 = *(double *)(lVar4 + 0x10 + lVar6);
          local_b0 = local_98 - dVar1;
          local_a0 = *(double *)(lVar3 + 8 + lVar6);
          dVar2 = *(double *)(lVar4 + 8 + lVar6);
          local_b8 = local_a0 - dVar2;
          local_c0 = *(double *)(lVar3 + lVar6) - *(double *)(lVar4 + lVar6);
          local_98 = local_98 + dVar1;
          local_a0 = local_a0 + dVar2;
          local_a8 = *(double *)(lVar3 + lVar6) + *(double *)(lVar4 + lVar6);
          cVar7 = FUN_14853acfc(param_1,iVar20);
          uVar17 = (ulonglong)CONCAT31(uVar5,bVar14);
          if (cVar7 != '\0') {
            local_130 = *param_7;
            local_148 = &local_130;
            local_128 = param_7[1];
            local_140 = param_8;
            local_158 = CONCAT71(local_158._1_7_,param_5);
            local_150 = iVar18;
            bVar8 = FUN_14853c962(param_1,iVar20,uVar10,param_4);
            uVar10 = CONCAT31(uVar5,bVar14 | bVar8);
            goto joined_r0x00014853d04b;
          }
        }
        goto LAB_14853cc44;
      }
LAB_14853cb5f:
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(uVar12 << 3));
      lVar6 = (ulonglong)(uVar13 << 3) * 3;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(uVar12 << 3));
      local_98 = *(double *)(lVar3 + 0x10 + lVar6);
      dVar1 = *(double *)(lVar4 + 0x10 + lVar6);
      local_b0 = local_98 - dVar1;
      local_a0 = *(double *)(lVar3 + 8 + lVar6);
      dVar2 = *(double *)(lVar4 + 8 + lVar6);
      local_b8 = local_a0 - dVar2;
      local_c0 = *(double *)(lVar3 + lVar6) - *(double *)(lVar4 + lVar6);
      local_98 = local_98 + dVar1;
      local_a0 = local_a0 + dVar2;
      local_a8 = *(double *)(lVar3 + lVar6) + *(double *)(lVar4 + lVar6);
      uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar21 >> 9) * 8)
                        + (ulonglong)(uVar21 & 0x1ff) * 4);
      if ((int)uVar10 < 0) {
        cVar7 = FUN_14853acfc(param_1,~uVar10,&local_c0);
        if (cVar7 == '\0') {
          uVar17 = 0;
        }
        else {
          local_d0 = *param_7;
          local_148 = &local_d0;
          local_c8 = param_7[1];
          local_150 = param_6 + 1;
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          uVar10 = FUN_14853c962(param_1,~uVar10,uVar15,param_4);
          uVar17 = (ulonglong)uVar10;
          if (param_4 == 0) {
            bVar14 = (byte)uVar10;
joined_r0x00014853ce4d:
            if (bVar14 != 0) goto LAB_14853cda2;
          }
        }
      }
      else {
        iVar19 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar21 + 1 >> 9) * 8) +
                         (ulonglong)(uVar21 + 1 & 0x1ff) * 4);
        cVar7 = FUN_14853acfc(param_1,uVar10 - 1,&local_c0);
        if (cVar7 != '\0') {
          local_e0 = *param_7;
          local_148 = &local_e0;
          local_d8 = param_7[1];
          local_150 = param_6 + 1;
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          uVar10 = FUN_14853c962(param_1,uVar10 - 1,uVar15,param_4);
          uVar17 = (ulonglong)uVar10;
          if ((param_4 != 0) || ((char)uVar10 == '\0')) goto LAB_14853cdc7;
LAB_14853cda2:
          uVar15 = CONCAT71((int7)(uVar15 >> 8),1);
          goto LAB_14853caf7;
        }
        uVar17 = 0;
LAB_14853cdc7:
        iVar19 = iVar19 + -1;
        cVar7 = FUN_14853acfc(param_1,iVar19,&local_c0);
        if (cVar7 != '\0') {
          local_f0 = *param_7;
          local_148 = &local_f0;
          local_e8 = param_7[1];
          local_150 = param_6 + 1;
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          uVar11 = FUN_14853c962(param_1,iVar19,uVar15,param_4);
          bVar14 = (byte)uVar11 | (byte)uVar17;
          uVar17 = CONCAT71((int7)((ulonglong)uVar11 >> 8),bVar14) & 0xffffff01;
          if (param_4 == 0) {
            bVar14 = bVar14 & 1;
            goto joined_r0x00014853ce4d;
          }
        }
      }
LAB_14853cc44:
      uVar15 = uVar17;
      goto LAB_14853caf7;
    }
    if ((param_3 != 0xffffffff) &&
       (iVar19 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 >> 9) * 8) +
                         (ulonglong)(uVar10 & 0x1ff) * 4), 0 < iVar19)) {
      uVar12 = uVar10 + 1;
      uVar15 = 0;
      do {
        local_90 = *param_7;
        local_88 = param_7[1];
        local_140 = param_8;
        local_148 = &local_90;
        local_150 = CONCAT31(local_150._1_3_,param_5);
        local_158 = param_4;
        uVar9 = FUN_14853c70e(param_1,*(undefined4 *)
                                       (*(longlong *)
                                         (*(longlong *)(param_1 + 0xb8) +
                                         (ulonglong)(uVar12 >> 9) * 8) +
                                       (ulonglong)(uVar12 & 0x1ff) * 4),uVar21 + 1,
                              *(int *)(*(longlong *)
                                        (*(longlong *)(param_1 + 0xb8) +
                                        (ulonglong)(uVar21 >> 9) * 8) +
                                      (ulonglong)(uVar21 & 0x1ff) * 4) + uVar21 + 1);
        bVar14 = (byte)uVar9 | (byte)uVar15;
        uVar15 = (ulonglong)CONCAT31((int3)((uint)uVar9 >> 8),bVar14);
        if ((param_4 == 0) && ((bVar14 & 1) != 0)) goto LAB_14853cda2;
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)(iVar19 + uVar10 + 1));
      goto LAB_14853caf7;
    }
  }
  uVar15 = 0;
LAB_14853caf7:
  if ((local_80 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15 & 0xffffffffffffff01;
}



// FUNCTION 14853d0c2 FUN_14853d0c2 body=162 status=ok
// SIG undefined FUN_14853d0c2(void)

void FUN_14853d0c2(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_d8 [40];
  undefined8 local_b0 [9];
  undefined8 local_68 [9];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar4 = param_2 + 9;
  puVar5 = local_68;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = param_2;
  puVar5 = local_b0;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  bVar1 = FUN_146bda4f4(local_b0,local_68,0x3e45798ee2308c3a);
  *(uint *)((longlong)param_2 + 0x9c) = 2 - (uint)bVar1;
  uVar3 = 7;
  if (bVar1 == 0) {
    uVar3 = 0;
  }
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0xa4) = 0;
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14853d166 FUN_14853d166 body=95 status=ok
// SIG undefined FUN_14853d166(void)

void FUN_14853d166(longlong *param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if ((*(int *)(lVar1 + 0xcc) < 0) || (*(longlong *)(lVar1 + 0x10) != 1)) {
    FUN_148536e0e(lVar1);
    *(undefined8 *)(lVar1 + 0x10) = 1;
  }
  if ((param_2 != '\0') || (param_1[0xb] != *(longlong *)(*param_1 + 0x10))) {
    FUN_14853d1c6(param_1);
    param_1[0xb] = *(longlong *)(*param_1 + 0x10);
  }
  return;
}



// FUNCTION 14853d1c6 FUN_14853d1c6 body=190 status=ok
// SIG undefined FUN_14853d1c6(void)

void FUN_14853d1c6(longlong *param_1)

{
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined1 local_b8 [72];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_14853d286(local_b8,*(undefined8 *)(*param_1 + 8));
  FUN_14853d744(param_1 + 1);
  local_70 = 0;
  local_68 = 0xffffffff00000000;
  local_50 = 0;
  local_48 = 0;
  uStack_44 = 0x80;
  uStack_40 = 0xffffffff;
  uStack_3c = 0;
  local_30 = 0;
  local_28 = 0;
  local_c8 = local_b8;
  FUN_14853d370(param_1,*(undefined4 *)(*param_1 + 0xcc),0,&local_70);
  FUN_145a22d80(&local_70);
  FUN_146bee452(local_b8);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14853d286 FUN_14853d286 body=232 status=ok
// SIG undefined FUN_14853d286(void)

longlong FUN_14853d286(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined8 *local_78;
  longlong *local_68;
  longlong local_60;
  undefined1 *local_58;
  longlong **local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_141040be6();
  FUN_141040be6(param_1 + 0x18);
  FUN_146bee4b2(param_1 + 0x30);
  uVar1 = 0;
  if ((*param_2 != 0) && (*(char *)(*param_2 + 0x1c8) == '\x01')) {
    uVar1 = (undefined4)param_2[0xc];
  }
  FUN_146bee1a4(param_1,uVar1);
  FUN_146bee1a4(param_1 + 0x18,uVar1);
  FUN_146b9c0e2(param_1 + 0x30,uVar1);
  local_50 = &local_68;
  local_78 = &local_48;
  local_48 = 0;
  local_40 = 0;
  local_58 = &LAB_14853d5c4;
  local_80 = 0;
  local_68 = param_2;
  local_60 = param_1;
  FUN_1401f8d10(L"ParallelFor Task",uVar1,1);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14853d370 FUN_14853d370 body=595 status=ok
// SIG undefined FUN_14853d370(void)

int FUN_14853d370(longlong *param_1,uint param_2,int param_3,undefined8 *param_4,undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  int local_a0;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_145a22d80(param_4);
  lVar3 = *param_1;
  uVar2 = *(uint *)(*(longlong *)(*(longlong *)(lVar3 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                   (ulonglong)(param_2 & 0x1ff) * 4);
  if ((int)uVar2 < *(int *)(lVar3 + 200)) {
LAB_14853d3cb:
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(lVar3 + 0xb8) + (ulonglong)(uVar2 >> 9) * 8) +
                    (ulonglong)(uVar2 & 0x1ff) * 4);
    goto LAB_14853d3e4;
  }
  while( true ) {
    uVar1 = *(uint *)(*(longlong *)(*(longlong *)(lVar3 + 0xb8) + (ulonglong)(uVar2 >> 9) * 8) +
                     (ulonglong)(uVar2 & 0x1ff) * 4);
    if (-1 < (int)uVar1) break;
    param_2 = ~uVar1;
    FUN_145a22d80(param_4);
    lVar3 = *param_1;
    uVar2 = *(uint *)(*(longlong *)(*(longlong *)(lVar3 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                     (ulonglong)(param_2 & 0x1ff) * 4);
    if ((int)uVar2 < *(int *)(lVar3 + 200)) goto LAB_14853d3cb;
    param_3 = param_3 + 1;
  }
  iVar4 = uVar1 - 1;
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(lVar3 + 0xb8) + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                  (ulonglong)(uVar2 + 1 & 0x1ff) * 4) + -1;
  local_98 = 0;
  local_90 = 0xffffffff00000000;
  local_78 = 0;
  local_70 = 0;
  uStack_6c = 0x80;
  uStack_68 = 0xffffffff;
  uStack_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_a8 = param_5;
  local_9c = FUN_14853d370(param_1,iVar4,param_3 + 1,param_4);
  local_a8 = param_5;
  local_a0 = iVar5;
  iVar5 = FUN_14853d370(param_1,iVar5,param_3 + 1,&local_98);
  iVar5 = iVar5 + local_9c;
  if (param_3 != 0) {
    if (*(int *)((longlong)param_4 + 0xc) == -1) {
      if ((local_90._4_4_ == -1) && (iVar5 < 2)) goto LAB_14853d512;
      if (local_90._4_4_ == -1) {
        FUN_146bee514(param_4);
        FUN_14853da80(param_1,iVar4,param_4);
        goto LAB_14853d550;
      }
      FUN_14853da80(param_1,iVar4,&local_98);
      if (&local_98 != param_4) {
        if (local_90._4_4_ == -1) {
          FUN_145a22d80(param_4);
        }
        else {
          FUN_146bee56a(param_4,&local_98);
        }
      }
    }
    else {
LAB_14853d550:
      if (local_90._4_4_ == -1) {
        FUN_14853da80(param_1,local_a0,param_4);
      }
      else {
        FUN_1468b3f6e(param_4,&local_98);
      }
    }
    if (1 < iVar5) {
      FUN_14853db9e(param_1,param_2,param_4,param_5);
    }
  }
LAB_14853d512:
  FUN_145a22d80(&local_98);
LAB_14853d3e4:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14853d5cc FUN_14853d5cc body=119 status=ok
// SIG undefined FUN_14853d5cc(void)

void FUN_14853d5cc(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (-1 < (int)param_2) {
    plVar1 = (longlong *)*param_1;
    iVar4 = 0;
    if ((*plVar1 != 0) && (iVar4 = 0, *(char *)(*plVar1 + 0x1c8) == '\x01')) {
      iVar4 = (int)plVar1[0xc];
    }
    if ((int)param_2 < iVar4) {
      lVar2 = param_1[1];
      uVar6 = (ulonglong)(param_2 >> 9);
      uVar5 = (ulonglong)((param_2 & 0x1ff) << 3);
      lVar3 = uVar5 * 3;
      FUN_14853d644(plVar1,param_2,lVar3 + *(longlong *)(*(longlong *)(lVar2 + 0x20) + uVar6 * 8),
                    uVar5 + *(longlong *)(*(longlong *)(lVar2 + 0x38) + uVar6 * 8),
                    *(longlong *)(*(longlong *)(lVar2 + 8) + uVar6 * 8) + lVar3);
    }
  }
  return;
}



// FUNCTION 14853d644 FUN_14853d644 body=255 status=ok
// SIG undefined FUN_14853d644(void)

void FUN_14853d644(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  double *param_5)

{
  undefined1 auStack_c8 [32];
  double *local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = &local_50;
  FUN_14853745c(param_1,param_2,&local_80,&local_68);
  *param_5 = (local_80 + local_68 + local_50) * 0.3333333333333333;
  param_5[1] = (local_78 + local_60 + local_48) * 0.3333333333333333;
  param_5[2] = (local_70 + local_58 + local_40) * 0.3333333333333333;
  local_a8 = (double *)param_4;
  FUN_146b9cae0(&local_98,&local_80,&local_68,&local_50);
  *(undefined8 *)(param_3 + 4) = local_88;
  *param_3 = local_98;
  param_3[1] = uStack_94;
  param_3[2] = uStack_90;
  param_3[3] = uStack_8c;
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14853d744 FUN_14853d744 body=63 status=ok
// SIG undefined FUN_14853d744(void)

void FUN_14853d744(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1485356cc(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_14853d8ce(param_1);
    return;
  }
  FUN_14853d784(param_1);
  FUN_1485356cc(param_1);
  return;
}



// FUNCTION 14853d784 FUN_14853d784 body=329 status=ok
// SIG undefined FUN_14853d784(void)

void FUN_14853d784(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x8c + (longlong)iVar4 * 0x90) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14853d8ce FUN_14853d8ce body=433 status=ok
// SIG undefined FUN_14853d8ce(void)

void FUN_14853d8ce(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x90;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x8c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x88 + lVar7) =
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



// FUNCTION 14853da80 FUN_14853da80 body=285 status=ok
// SIG undefined FUN_14853da80(void)

void FUN_14853da80(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  while (uVar3 = *(uint *)(*(longlong *)
                            (*(longlong *)(lVar1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                          (ulonglong)(param_2 & 0x1ff) * 4), *(int *)(lVar1 + 200) <= (int)uVar3) {
    param_2 = *(uint *)(*(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)(uVar3 >> 9) * 8) +
                       (ulonglong)(uVar3 & 0x1ff) * 4);
    if ((int)param_2 < 0) {
      param_2 = ~param_2;
    }
    else {
      FUN_14853da80(param_1,param_2 - 1,param_3);
      lVar1 = *param_1;
      param_2 = *(int *)(*(longlong *)
                          (*(longlong *)(lVar1 + 0xb8) + (ulonglong)(uVar3 + 1 >> 9) * 8) +
                        (ulonglong)(uVar3 + 1 & 0x1ff) * 4) - 1;
    }
  }
  iVar2 = *(int *)(*(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)(uVar3 >> 9) * 8) +
                  (ulonglong)(uVar3 & 0x1ff) * 4);
  if (0 < iVar2) {
    do {
      uVar3 = uVar3 + 1;
      FUN_1447cbafe(param_3,local_34,
                    (ulonglong)((uVar3 & 0x1ff) << 2) +
                    *(longlong *)(*(longlong *)(*param_1 + 0xb8) + (ulonglong)(uVar3 >> 9) * 8),0);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14853db9e FUN_14853db9e body=168 status=ok
// SIG undefined FUN_14853db9e(void)

void FUN_14853db9e(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 local_c0 [24];
  undefined1 local_a8 [8];
  undefined1 local_a0 [24];
  undefined1 local_88 [76];
  undefined4 local_3c;
  undefined4 *local_38;
  undefined1 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c8 = local_88;
  local_d0 = local_a0;
  local_d8 = local_a8;
  local_3c = param_2;
  FUN_14853dc47(*(undefined8 *)(*param_1 + 8),param_3,param_4,local_c0);
  local_38 = &local_3c;
  local_30 = local_c0;
  FUN_14853f220(param_1 + 1,local_24);
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14853dc47 FUN_14853dc47 body=514 status=ok
// SIG undefined FUN_14853dc47(void)

void FUN_14853dc47(undefined8 param_1,longlong param_2,undefined8 param_3,double *param_4,
                  double *param_5,undefined4 *param_6,undefined8 *param_7)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  double local_128;
  double dStack_120;
  double local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_e0 [9];
  double local_98;
  longlong *local_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (*(int *)(param_2 + 8) - *(int *)(param_2 + 0x34) < 3000) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1b8);
  }
  FUN_140619b9c(param_2,&local_58);
  local_e8 = DAT_14c8464f0;
  local_f8 = (undefined4)DAT_14c8464e0;
  uStack_f4 = DAT_14c8464e0._4_4_;
  uStack_f0 = (undefined4)DAT_14c8464e8;
  uStack_ec = DAT_14c8464e8._4_4_;
  local_e0[0] = 0;
  local_88 = &local_58;
  local_80 = param_3;
  FUN_14853e4e7(&local_78,local_50);
  local_60 = 1.0 / local_60;
  local_128 = local_78 * local_60;
  dStack_120 = dStack_70 * local_60;
  local_118 = local_60 * local_68;
  local_188 = DAT_14c8464f0;
  local_198 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_190 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_110 = &local_58;
  local_108 = param_1;
  local_100 = param_3;
  local_78 = local_128;
  dStack_70 = dStack_120;
  local_68 = local_118;
  FUN_14853e660(&local_f8,local_50);
  param_4[2] = local_68;
  *param_4 = local_78;
  param_4[1] = dStack_70;
  if (local_98 < 0.0) {
    local_98 = sqrt(local_98);
  }
  else {
    local_98 = SQRT(local_98);
  }
  *param_5 = local_98;
  *(undefined8 *)(param_6 + 4) = local_e8;
  *param_6 = local_f8;
  param_6[1] = uStack_f4;
  param_6[2] = uStack_f0;
  param_6[3] = uStack_ec;
  puVar2 = local_e0;
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_7 = *puVar2;
    puVar2 = puVar2 + 1;
    param_7 = param_7 + 1;
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14853e4e7 FUN_14853e4e7 body=376 status=ok
// SIG undefined FUN_14853e4e7(void)

double * FUN_14853e4e7(double *param_1,int param_2,double *param_3,undefined8 param_4)

{
  longlong lVar1;
  double dVar2;
  undefined1 in_XMM0 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_e8 [40];
  undefined4 local_c0;
  undefined8 *local_b8;
  double *local_a8;
  int *local_a0;
  int *local_98;
  undefined8 local_90;
  undefined1 *local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 uStack_70;
  int local_64;
  int local_60;
  undefined1 local_59;
  undefined1 *local_58;
  double **local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  auVar3._4_12_ = in_XMM0._4_12_;
  auVar3._0_4_ = (float)param_2 * 0.0625;
  auVar3 = roundss(auVar3,auVar3,10);
  local_64 = (int)auVar3._0_4_;
  local_78 = 0;
  uStack_70 = 0;
  local_60 = param_2;
  FUN_14853e7c6(&local_78);
  local_50 = &local_a8;
  local_88 = &local_59;
  local_b8 = &local_48;
  local_48 = 0;
  local_40 = 0;
  local_58 = &LAB_14853e922;
  local_c0 = 0;
  local_a8 = param_3;
  local_a0 = &local_64;
  local_98 = &local_60;
  local_90 = param_4;
  local_80 = &local_78;
  FUN_1401f8d10(L"ParallelFor Task",0x10,1);
  dVar4 = *param_3;
  dVar6 = param_3[1];
  dVar2 = param_3[3];
  param_1[2] = param_3[2];
  param_1[3] = dVar2;
  *param_1 = dVar4;
  param_1[1] = dVar6;
  dVar2 = *param_1;
  if ((longlong)(int)uStack_70 != 0) {
    dVar4 = param_1[1];
    dVar6 = param_1[2];
    dVar5 = param_1[3];
    lVar1 = 0;
    do {
      dVar6 = dVar6 + *(double *)(local_78 + 0x10 + lVar1);
      dVar4 = dVar4 + *(double *)(local_78 + 8 + lVar1);
      dVar2 = dVar2 + *(double *)(local_78 + lVar1);
      dVar5 = dVar5 + *(double *)(local_78 + 0x18 + lVar1);
      lVar1 = lVar1 + 0x20;
    } while ((longlong)(int)uStack_70 * 0x20 != lVar1);
    param_1[2] = dVar6;
    param_1[1] = dVar4;
    param_1[3] = dVar5;
  }
  *param_1 = dVar2;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14853e660 FUN_14853e660 body=356 status=ok
// SIG undefined FUN_14853e660(void)

undefined8 * FUN_14853e660(undefined8 *param_1,int param_2,int *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int **ppiVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 in_XMM0 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_128 [40];
  undefined4 local_100;
  undefined8 *local_f8;
  int *local_f0 [4];
  undefined1 *local_d0;
  longlong *local_c8;
  longlong local_88;
  undefined8 uStack_80;
  int local_6c;
  int local_68;
  undefined1 local_61;
  undefined1 *local_60;
  int **local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  auVar7._4_12_ = in_XMM0._4_12_;
  auVar7._0_4_ = (float)param_2 * 0.0625;
  auVar7 = roundss(auVar7,auVar7,10);
  local_6c = (int)auVar7._0_4_;
  local_88 = 0;
  uStack_80 = 0;
  local_68 = param_2;
  FUN_14853ea04(&local_88);
  local_58 = local_f0;
  local_d0 = &local_61;
  local_f8 = &local_50;
  local_50 = 0;
  local_48 = 0;
  local_60 = &LAB_14853ec6e;
  local_100 = 0;
  local_f0[0] = param_3;
  local_f0[1] = &local_6c;
  local_f0[2] = &local_68;
  local_f0[3] = (int *)param_4;
  local_c8 = &local_88;
  FUN_1401f8d10(L"ParallelFor Task",0x10,1);
  lVar1 = local_88;
  puVar5 = param_1;
  for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *(undefined8 *)param_3;
    param_3 = param_3 + 2;
    puVar5 = puVar5 + 1;
  }
  if ((longlong)(int)uStack_80 != 0) {
    lVar6 = (longlong)(int)uStack_80 * 0x68;
    lVar2 = local_88;
    do {
      FUN_14853ea3e(local_f0,lVar2,param_1);
      ppiVar4 = local_f0;
      puVar5 = param_1;
      for (lVar3 = 0xd; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *ppiVar4;
        ppiVar4 = ppiVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      lVar2 = lVar2 + 0x68;
      lVar6 = lVar6 + -0x68;
    } while (lVar6 != 0);
  }
  if (lVar1 != 0) {
    FUN_1400020a8(lVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14853e7c6 FUN_14853e7c6 body=57 status=ok
// SIG undefined FUN_14853e7c6(void)

void FUN_14853e7c6(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < 0x10) {
    *(undefined4 *)(param_1 + 8) = 0x10;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < 0x10U - iVar1) {
      FUN_14853e800();
      return;
    }
  }
  else if (iVar1 != 0x10) {
    *(undefined4 *)(param_1 + 8) = 0x10;
    FUN_14853e886();
    return;
  }
  return;
}



// FUNCTION 14853e800 FUN_14853e800 body=132 status=ok
// SIG undefined FUN_14853e800(void)

void FUN_14853e800(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14853e886 FUN_14853e886 body=62 status=ok
// SIG undefined FUN_14853e886(void)

void FUN_14853e886(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14853e8c4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 14853e8c4 FUN_14853e8c4 body=93 status=ok
// SIG undefined FUN_14853e8c4(void)

ulonglong FUN_14853e8c4(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 14853e92a FUN_14853e92a body=217 status=ok
// SIG undefined FUN_14853e92a(void)

void FUN_14853e92a(undefined8 *param_1,int param_2)

{
  double dVar1;
  double *pdVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  ulonglong uVar7;
  
  pdVar2 = (double *)*param_1;
  dVar10 = *pdVar2;
  dVar11 = pdVar2[1];
  dVar12 = pdVar2[2];
  dVar13 = pdVar2[3];
  iVar4 = (param_2 + 1) * *(int *)param_1[1];
  if (*(int *)param_1[2] <= iVar4) {
    iVar4 = *(int *)param_1[2];
  }
  iVar9 = *(int *)param_1[1] * param_2;
  if (iVar9 < iVar4) {
    lVar3 = ((undefined8 *)param_1[3])[1];
    do {
      uVar6 = *(uint *)(**(longlong **)param_1[3] + (longlong)iVar9 * 4);
      uVar8 = (ulonglong)(uVar6 >> 9);
      uVar6 = uVar6 & 0x1ff;
      uVar7 = (ulonglong)uVar6;
      dVar1 = *(double *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x38) + uVar8 * 8) + (ulonglong)uVar6 * 8);
      lVar5 = *(longlong *)(*(longlong *)(lVar3 + 8) + uVar8 * 8);
      dVar12 = dVar12 + *(double *)(lVar5 + 0x10 + uVar7 * 0x18) * dVar1;
      dVar13 = dVar13 + dVar1;
      dVar11 = dVar11 + *(double *)(lVar5 + 8 + uVar7 * 0x18) * dVar1;
      dVar10 = dVar10 + dVar1 * *(double *)(lVar5 + uVar7 * 0x18);
      iVar9 = iVar9 + 1;
    } while (iVar4 != iVar9);
  }
  lVar3 = *(longlong *)param_1[5];
  lVar5 = (longlong)param_2 * 0x20;
  *(double *)(lVar3 + lVar5) = dVar10;
  *(double *)(lVar3 + 8 + lVar5) = dVar11;
  *(double *)(lVar3 + 0x10 + lVar5) = dVar12;
  *(double *)(lVar3 + 0x18 + lVar5) = dVar13;
  return;
}



// FUNCTION 14853ea04 FUN_14853ea04 body=57 status=ok
// SIG undefined FUN_14853ea04(void)

void FUN_14853ea04(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < 0x10) {
    *(undefined4 *)(param_1 + 8) = 0x10;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < 0x10U - iVar1) {
      FUN_14853eb38();
      return;
    }
  }
  else if (iVar1 != 0x10) {
    *(undefined4 *)(param_1 + 8) = 0x10;
    FUN_14853ebc8();
    return;
  }
  return;
}



// FUNCTION 14853ea3e FUN_14853ea3e body=249 status=ok
// SIG undefined FUN_14853ea3e(void)

double * FUN_14853ea3e(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  dVar16 = param_2[2];
  dVar1 = param_3[2];
  dVar2 = param_2[1];
  dVar3 = param_3[1];
  *param_1 = *param_2 + *param_3;
  param_1[1] = dVar2 + dVar3;
  param_1[2] = dVar16 + dVar1;
  dVar16 = param_2[0xb];
  dVar1 = param_3[0xb];
  dVar2 = param_2[10];
  dVar3 = param_3[10];
  dVar4 = param_2[9];
  dVar5 = param_3[9];
  dVar6 = param_2[8];
  dVar7 = param_3[8];
  dVar8 = param_2[7];
  dVar9 = param_3[7];
  dVar10 = param_2[6];
  dVar11 = param_3[6];
  dVar12 = param_2[5];
  dVar13 = param_3[5];
  dVar14 = param_2[4];
  dVar15 = param_3[4];
  param_1[3] = param_2[3] + param_3[3];
  param_1[4] = dVar14 + dVar15;
  param_1[5] = dVar12 + dVar13;
  param_1[6] = dVar10 + dVar11;
  param_1[7] = dVar8 + dVar9;
  param_1[8] = dVar6 + dVar7;
  param_1[9] = dVar4 + dVar5;
  param_1[10] = dVar2 + dVar3;
  param_1[0xb] = dVar16 + dVar1;
  dVar16 = param_2[0xc];
  if (param_2[0xc] <= param_3[0xc]) {
    dVar16 = param_3[0xc];
  }
  param_1[0xc] = dVar16;
  return param_1;
}



// FUNCTION 14853eb38 FUN_14853eb38 body=143 status=ok
// SIG undefined FUN_14853eb38(void)

void FUN_14853eb38(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x68,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x68)) {
      uVar5 = uVar4 / 0x68 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x68,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14853ebc8 FUN_14853ebc8 body=62 status=ok
// SIG undefined FUN_14853ebc8(void)

void FUN_14853ebc8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14853ec06(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x68,8);
  }
  return;
}



// FUNCTION 14853ec06 FUN_14853ec06 body=104 status=ok
// SIG undefined FUN_14853ec06(void)

ulonglong FUN_14853ec06(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x68) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14853ec3c;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x68,8);
      param_2 = param_2 / 0x68;
    }
  }
LAB_14853ec3c:
  return param_2 & 0xffffffff;
}



// FUNCTION 14853ec76 FUN_14853ec76 body=713 status=ok
// SIG undefined FUN_14853ec76(void)

void FUN_14853ec76(undefined8 *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_178 [40];
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  pdVar8 = (double *)*param_1;
  dVar15 = *pdVar8;
  dVar16 = pdVar8[1];
  dVar17 = pdVar8[2];
  dVar18 = pdVar8[3];
  dVar1 = pdVar8[4];
  dVar2 = pdVar8[5];
  dVar3 = pdVar8[6];
  dVar4 = pdVar8[7];
  dVar5 = pdVar8[8];
  dVar6 = pdVar8[9];
  dVar14 = pdVar8[10];
  dVar7 = pdVar8[0xb];
  dVar13 = pdVar8[0xc];
  uVar19 = SUB84(dVar13,0);
  uVar20 = (undefined4)((ulonglong)dVar13 >> 0x20);
  iVar12 = (param_2 + 1) * *(int *)param_1[1];
  if (*(int *)param_1[2] <= iVar12) {
    iVar12 = *(int *)param_1[2];
  }
  iVar11 = *(int *)param_1[1] * param_2;
  if (iVar11 < iVar12) {
    do {
      local_150 = (double)CONCAT44(uVar20,uVar19);
      local_148 = dVar7;
      local_140 = dVar6;
      FUN_14853ef40(param_1[3],&local_138,iVar11);
      dVar17 = dVar17 + local_128;
      dVar16 = dVar16 + local_130;
      dVar15 = dVar15 + local_138;
      dVar7 = local_148 + local_e0;
      dVar14 = dVar14 + local_e8;
      dVar6 = local_140 + local_f0;
      dVar5 = dVar5 + local_f8;
      dVar4 = dVar4 + local_100;
      dVar3 = dVar3 + local_108;
      dVar2 = dVar2 + local_110;
      dVar1 = dVar1 + local_118;
      dVar18 = dVar18 + local_120;
      dVar13 = local_d8;
      if (local_d8 <= local_150) {
        dVar13 = local_150;
      }
      iVar11 = iVar11 + 1;
      uVar19 = SUB84(dVar13,0);
      uVar20 = (undefined4)((ulonglong)dVar13 >> 0x20);
    } while (iVar12 != iVar11);
  }
  lVar9 = *(longlong *)param_1[5];
  lVar10 = (longlong)param_2 * 0x68;
  *(double *)(lVar9 + lVar10) = dVar15;
  *(double *)(lVar9 + 8 + lVar10) = dVar16;
  *(double *)(lVar9 + 0x10 + lVar10) = dVar17;
  *(double *)(lVar9 + 0x18 + lVar10) = dVar18;
  *(double *)(lVar9 + 0x20 + lVar10) = dVar1;
  *(double *)(lVar9 + 0x28 + lVar10) = dVar2;
  *(double *)(lVar9 + 0x30 + lVar10) = dVar3;
  *(double *)(lVar9 + 0x38 + lVar10) = dVar4;
  *(double *)(lVar9 + 0x40 + lVar10) = dVar5;
  *(double *)(lVar9 + 0x48 + lVar10) = dVar6;
  *(double *)(lVar9 + 0x50 + lVar10) = dVar14;
  *(double *)(lVar9 + 0x58 + lVar10) = dVar7;
  *(double *)(lVar9 + 0x60 + lVar10) = dVar13;
  if ((local_d0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14853ef40 FUN_14853ef40 body=735 status=ok
// SIG undefined FUN_14853ef40(void)

double * FUN_14853ef40(double *param_1,double *param_2,int param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  double dVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_138 [32];
  double *local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar7 = *(uint *)(*(longlong *)param_1[3] + (longlong)param_3 * 4);
  local_118 = &local_108;
  FUN_14853745c(param_1[4],uVar7,&local_d8,&local_f0);
  dVar8 = param_1[5];
  uVar11 = (ulonglong)(uVar7 >> 9);
  lVar9 = *(longlong *)(*(longlong *)((longlong)dVar8 + 0x20) + uVar11 * 8);
  uVar12 = (ulonglong)((uVar7 & 0x1ff) << 3);
  lVar10 = uVar12 * 3;
  dVar1 = *(double *)(lVar9 + lVar10);
  dVar13 = *(double *)(lVar9 + 8 + lVar10);
  dVar14 = *(double *)(lVar9 + 0x10 + lVar10);
  dVar2 = *(double *)(*(longlong *)(*(longlong *)((longlong)dVar8 + 0x38) + uVar11 * 8) + uVar12);
  lVar9 = *(longlong *)(*(longlong *)((longlong)dVar8 + 8) + uVar11 * 8);
  dVar8 = *(double *)(lVar9 + lVar10);
  dVar3 = *(double *)(lVar9 + 8 + lVar10);
  dVar15 = *(double *)(lVar9 + 0x10 + lVar10);
  *param_2 = dVar1 * dVar2;
  param_2[1] = dVar13 * dVar2;
  param_2[2] = dVar14 * dVar2;
  dVar4 = param_1[2];
  dVar15 = dVar15 - dVar4;
  dVar5 = *param_1;
  dVar6 = param_1[1];
  dVar3 = dVar3 - dVar6;
  dVar8 = dVar8 - dVar5;
  param_2[3] = dVar8 * dVar1 * dVar2;
  param_2[4] = dVar13 * dVar8 * dVar2;
  param_2[5] = dVar14 * dVar8 * dVar2;
  param_2[6] = dVar3 * dVar1 * dVar2;
  param_2[7] = dVar13 * dVar3 * dVar2;
  param_2[8] = dVar14 * dVar3 * dVar2;
  param_2[9] = dVar15 * dVar1 * dVar2;
  param_2[10] = dVar13 * dVar15 * dVar2;
  param_2[0xb] = dVar14 * dVar15 * dVar2;
  dVar14 = (dVar4 - local_f8) * (dVar4 - local_f8) +
           (dVar5 - local_108) * (dVar5 - local_108) + (dVar6 - local_100) * (dVar6 - local_100);
  dVar1 = (dVar4 - local_e0) * (dVar4 - local_e0) +
          (dVar5 - local_f0) * (dVar5 - local_f0) + (dVar6 - local_e8) * (dVar6 - local_e8);
  dVar13 = (dVar4 - local_c8) * (dVar4 - local_c8) +
           (dVar5 - local_d8) * (dVar5 - local_d8) + (dVar6 - local_d0) * (dVar6 - local_d0);
  if (dVar13 <= dVar1) {
    dVar13 = dVar1;
  }
  if (dVar13 <= dVar14) {
    dVar13 = dVar14;
  }
  param_2[0xc] = dVar13;
  if ((local_c0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14853f220 FUN_14853f220 body=311 status=ok
// SIG undefined FUN_14853f220(void)

undefined4 * FUN_14853f220(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 *puVar8;
  uint *puVar9;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14853f358(param_1,local_50);
  puVar8 = (undefined8 *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_48 = uVar4;
  puVar9 = local_48;
  for (lVar5 = 0x10; puVar9 = puVar9 + 2, lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
  }
  local_48[0x22] = 0xffffffff;
  local_54 = local_50[0];
  cVar2 = FUN_14853f446(param_1,uVar4,local_48,&local_54);
  uVar1 = local_54;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar3) {
      uVar6 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_48[0x23] = uVar4;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_48[0x22] =
           *(uint *)(lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14853d8ce(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14853f358 FUN_14853f358 body=238 status=ok
// SIG undefined FUN_14853f358(void)

int * FUN_14853f358(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_140f20a84(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x90);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x90) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x90 + *param_1;
  return param_2;
}



// FUNCTION 14853f446 FUN_14853f446 body=151 status=ok
// SIG undefined FUN_14853f446(void)

undefined8 FUN_14853f446(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x90);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x90) == *param_3) {
          memmove(_Dst,param_3,0x88);
          FUN_14853f4de(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x88);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14853f4de FUN_14853f4de body=122 status=ok
// SIG undefined FUN_14853f4de(void)

void FUN_14853f4de(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x90) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x90) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x90 + 4) = uVar4;
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



// FUNCTION 14853f558 FUN_14853f558 body=335 status=ok
// SIG undefined FUN_14853f558(void)

undefined8 * FUN_14853f558(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_98 [40];
  double local_70;
  double local_68;
  double local_60;
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = 0x7fefffffffffffff;
  param_1[1] = 0x7fefffffffffffff;
  param_1[2] = 0x7fefffffffffffff;
  param_1[3] = 0xffefffffffffffff;
  param_1[4] = 0xffefffffffffffff;
  param_1[5] = 0xffefffffffffffff;
  if (((*param_2 != 0) && (cVar2 = FUN_1461c3a34(*param_2 + 0x118), cVar2 != '\0')) &&
     (iVar3 = FUN_144b2ab14(*param_2), 0 < iVar3)) {
    iVar6 = 0;
    do {
      if (((*param_2 != 0) && (cVar2 = FUN_1461c3a34(*param_2 + 0x118), cVar2 != '\0')) &&
         (iVar4 = FUN_144b2ab14(*param_2), iVar6 < iVar4)) {
        lVar1 = *(longlong *)(*param_2 + 0x140);
        uVar5 = (ulonglong)(uint)(*(int *)(*param_2 + 0x148) * iVar6);
        local_60 = (double)*(float *)(lVar1 + 8 + uVar5) * (double)param_2[3];
        local_68 = (double)*(float *)(lVar1 + 4 + uVar5) * (double)param_2[2];
        local_70 = (double)*(float *)(lVar1 + uVar5) * (double)param_2[1];
        (*(code *)*param_3)(local_58,param_3[1],&local_70);
        FUN_146ba5262(param_1,local_58);
      }
      iVar6 = iVar6 + 1;
    } while (iVar3 != iVar6);
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14853f6a8 FUN_14853f6a8 body=744 status=ok
// SIG undefined FUN_14853f6a8(void)

double FUN_14853f6a8(longlong *param_1,uint param_2,undefined4 *param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_1a8 [32];
  undefined8 *local_188;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar1 = *param_1;
  uVar6 = *(uint *)(*(longlong *)(*(longlong *)(lVar1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                   (ulonglong)(param_2 & 0x1ff) * 4);
  uVar3 = *(uint *)(*(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)(uVar6 >> 9) * 8) +
                   (ulonglong)(uVar6 & 0x1ff) * 4);
  if ((int)uVar6 < *(int *)(lVar1 + 200)) {
    if ((int)uVar3 < 1) {
      dVar8 = 0.0;
    }
    else {
      dVar8 = 0.0;
      do {
        uVar6 = uVar6 + 1;
        local_188 = &local_b8;
        FUN_14853745c(*(undefined8 *)(*param_1 + 8),
                      *(undefined4 *)
                       (*(longlong *)(*(longlong *)(*param_1 + 0xb8) + (ulonglong)(uVar6 >> 9) * 8)
                       + (ulonglong)(uVar6 & 0x1ff) * 4),&local_88,&local_a0);
        local_c8 = local_a8;
        local_d8 = local_b8;
        uStack_d0 = uStack_b0;
        local_f8 = local_a0;
        uStack_f0 = uStack_98;
        local_e8 = local_90;
        local_118 = local_88;
        uStack_114 = uStack_84;
        uStack_110 = uStack_80;
        uStack_10c = uStack_7c;
        local_108 = local_78;
        dVar7 = (double)FUN_146bed793(&local_118,&local_f8,&local_d8,param_3);
        dVar8 = dVar8 + dVar7 / 12.566370614359172;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  else {
    if ((int)uVar3 < 0) {
      uVar3 = ~uVar3;
      cVar2 = FUN_14853f992(lVar1,uVar3,param_3);
      if ((cVar2 == '\0') && (cVar2 = FUN_14853fa82(param_1,uVar3,param_3), cVar2 != '\0')) {
        dVar7 = (double)FUN_14853fb32(param_1,uVar3,param_3);
      }
      else {
        local_128 = *(undefined8 *)(param_3 + 4);
        local_138 = *param_3;
        uStack_134 = param_3[1];
        uStack_130 = param_3[2];
        uStack_12c = param_3[3];
        dVar7 = (double)FUN_14853f6a8(param_1,uVar3);
      }
      dVar8 = 0.0;
    }
    else {
      iVar4 = uVar3 - 1;
      iVar5 = *(int *)(*(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)(uVar6 + 1 >> 9) * 8)
                      + (ulonglong)(uVar6 + 1 & 0x1ff) * 4) + -1;
      cVar2 = FUN_14853f992(lVar1,iVar4,param_3);
      if ((cVar2 == '\0') && (cVar2 = FUN_14853fa82(param_1,iVar4,param_3), cVar2 != '\0')) {
        dVar8 = (double)FUN_14853fb32(param_1,iVar4,param_3);
      }
      else {
        local_148 = *(undefined8 *)(param_3 + 4);
        local_158 = *param_3;
        uStack_154 = param_3[1];
        uStack_150 = param_3[2];
        uStack_14c = param_3[3];
        dVar8 = (double)FUN_14853f6a8(param_1,iVar4);
      }
      dVar8 = dVar8 + 0.0;
      cVar2 = FUN_14853f992(*param_1,iVar5,param_3);
      if ((cVar2 == '\0') && (cVar2 = FUN_14853fa82(param_1,iVar5,param_3), cVar2 != '\0')) {
        dVar7 = (double)FUN_14853fb32(param_1,iVar5,param_3);
      }
      else {
        local_168 = *(undefined8 *)(param_3 + 4);
        local_178 = *param_3;
        uStack_174 = param_3[1];
        uStack_170 = param_3[2];
        uStack_16c = param_3[3];
        dVar7 = (double)FUN_14853f6a8(param_1,iVar5);
      }
    }
    dVar8 = dVar8 + dVar7;
  }
  if ((local_70 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar8;
}



// FUNCTION 14853f992 FUN_14853f992 body=239 status=ok
// SIG undefined FUN_14853f992(void)

undefined8 FUN_14853f992(longlong param_1,uint param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar6 = *(double *)(param_1 + 0x60);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_2 >> 9) * 8);
  lVar5 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 >> 9) * 8);
  dVar7 = *(double *)(lVar4 + lVar5) + dVar6;
  if (*(double *)(lVar3 + lVar5) - dVar7 <= *param_3) {
    dVar8 = *(double *)(lVar4 + 8 + lVar5) + dVar6;
    dVar1 = *(double *)(lVar3 + 8 + lVar5);
    if (dVar1 - dVar8 <= param_3[1]) {
      dVar6 = dVar6 + *(double *)(lVar4 + 0x10 + lVar5);
      dVar2 = *(double *)(lVar3 + 0x10 + lVar5);
      return CONCAT71((int7)((ulonglong)lVar3 >> 8),
                      (param_3[2] <= dVar6 + dVar2 && dVar2 - dVar6 <= param_3[2]) &
                      -(*param_3 <= dVar7 + *(double *)(lVar3 + lVar5)) &
                      -(param_3[1] <= dVar8 + dVar1));
    }
  }
  return 0;
}



// FUNCTION 14853fa82 FUN_14853fa82 body=176 status=ok
// SIG undefined FUN_14853fa82(void)

undefined8 FUN_14853fa82(longlong param_1,uint param_2,double *param_3)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar2 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x48);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 8) + (longlong)iVar1 * 0x90;
        if (*(uint *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 0x90) == param_2) {
          if ((lVar2 + 8U & 0xfffffffffffffff7) == 0) {
            return 0;
          }
          dVar3 = *param_3 - *(double *)(lVar2 + 8);
          dVar4 = param_3[1] - *(double *)(lVar2 + 0x10);
          dVar5 = param_3[2] - *(double *)(lVar2 + 0x18);
          return CONCAT71((int7)((ulonglong)lVar2 >> 8),
                          *(double *)(param_1 + 0x60) * *(double *)(lVar2 + 0x20) <
                          SQRT(dVar5 * dVar5 + dVar3 * dVar3 + dVar4 * dVar4));
        }
        iVar1 = *(int *)(lVar2 + 0x88);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 14853fb32 FUN_14853fb32 body=265 status=ok
// SIG undefined FUN_14853fb32(void)

double FUN_14853fb32(longlong param_1,uint param_2,double *param_3)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar2 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x48);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 8) + (longlong)iVar1 * 0x90;
        if (*(uint *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 0x90) == param_2)
        goto LAB_14853fb45;
        iVar1 = *(int *)(lVar2 + 0x88);
      } while (iVar1 != -1);
    }
  }
  lVar2 = 0;
LAB_14853fb45:
  if (*(int *)(param_1 + 0x68) == 2) {
    dVar3 = (double)FUN_146bedd25(lVar2 + 8,lVar2 + 0x28,lVar2 + 0x40);
    return dVar3;
  }
  dVar3 = *(double *)(lVar2 + 0x18) - param_3[2];
  dVar4 = *(double *)(lVar2 + 0x10) - param_3[1];
  dVar5 = *(double *)(lVar2 + 8) - *param_3;
  dVar6 = SQRT(dVar3 * dVar3 + dVar5 * dVar5 + dVar4 * dVar4);
  dVar6 = 1.0 / (dVar6 * dVar6 * dVar6);
  return (dVar3 * dVar6 * *(double *)(lVar2 + 0x38) +
         dVar6 * dVar5 * *(double *)(lVar2 + 0x28) + dVar4 * dVar6 * *(double *)(lVar2 + 0x30)) *
         0.07957747154594767;
}



// FUNCTION 14853fc3b FUN_14853fc3b body=355 status=ok
// SIG undefined FUN_14853fc3b(void)

void FUN_14853fc3b(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar10 [16];
  undefined1 auStack_98 [32];
  double local_78;
  double local_70;
  double local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar5 = 0;
  if (*param_1 != 0) {
    cVar4 = FUN_1461c3a34(*param_1 + 0x118);
    if (cVar4 != '\0') {
      iVar5 = FUN_144b2ab14(*param_1);
    }
  }
  auVar10._0_8_ = log((double)iVar5);
  auVar10._8_8_ = extraout_XMM0_Qb;
  auVar10 = roundsd(auVar10,auVar10,10);
  iVar7 = 1;
  if (1 < (int)auVar10._0_8_) {
    iVar7 = (int)auVar10._0_8_;
  }
  uVar8 = 500;
  if ((uint)(iVar7 * 10) < 500) {
    uVar8 = iVar7 * 10;
  }
  iVar7 = 2;
  if (2 < iVar5 / (int)uVar8) {
    iVar7 = iVar5 / (int)uVar8;
  }
  uVar6 = (longlong)iVar5 % (longlong)(int)uVar8 & 0xffffffff;
  if (0 < iVar5) {
    iVar9 = 0;
    do {
      lVar3 = *(longlong *)(*param_1 + 0x140);
      uVar6 = (ulonglong)(uint)(*(int *)(*param_1 + 0x148) * iVar9);
      local_68 = (double)*(float *)(lVar3 + 8 + uVar6) * (double)param_1[3];
      local_70 = (double)*(float *)(lVar3 + 4 + uVar6) * (double)param_1[2];
      local_78 = (double)*(float *)(lVar3 + uVar6) * (double)param_1[1];
      (*(code *)*param_2)(&local_60,param_2[1],&local_78);
      iVar2 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
        FUN_1403e3958(param_3,iVar2);
      }
      lVar3 = *param_3;
      *(ulonglong *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) = local_50;
      puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x18);
      *puVar1 = local_60;
      puVar1[1] = uStack_58;
      iVar9 = iVar9 + iVar7;
      uVar6 = local_50;
    } while (iVar9 < iVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98,uVar6);
}



// FUNCTION 14853fda0 FUN_14853fda0 body=2094 status=ok
// SIG undefined FUN_14853fda0(void)

longlong * FUN_14853fda0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong lStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  longlong local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  param_1[0x30] = 0;
  param_1[0x32] = 0;
  param_1[0x38] = 0;
  param_1[0x3a] = 0;
  param_1[0x40] = 0;
  param_1[0x42] = 0;
  param_1[0x48] = param_2;
  local_a8 = *param_1;
  uStack_60 = param_1[1];
  local_98 = (longlong *)param_1[2];
  uStack_50 = param_1[3];
  local_48 = param_1[4];
  lStack_40 = param_1[5];
  local_38 = param_1[6];
  uStack_30 = param_1[7];
  lVar3 = local_38;
  lVar4 = uStack_30;
  local_58 = local_98;
  lVar2 = uStack_50;
  local_68 = local_a8;
  lVar1 = uStack_60;
  param_1[6] = CONCAT44(uStack_74,local_78);
  param_1[7] = CONCAT44(uStack_6c,uStack_70);
  param_1[4] = (longlong)&PTR_LAB_14af17330;
  param_1[5] = (longlong)param_1;
  param_1[2] = 0;
  param_1[3] = CONCAT44(uStack_8c,uStack_90);
  *param_1 = (longlong)&LAB_1485405d0;
  param_1[1] = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = local_48;
  lStack_80 = lStack_40;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  if (local_a8 != 0) {
    plVar5 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar5 = &local_88;
    }
    uStack_60 = lVar1;
    uStack_50 = lVar2;
    local_38 = lVar3;
    uStack_30 = lVar4;
    (**(code **)(*plVar5 + 0x10))();
  }
  local_a8 = param_1[8];
  uStack_60 = param_1[9];
  local_98 = (longlong *)param_1[10];
  uStack_50 = param_1[0xb];
  local_48 = param_1[0xc];
  lStack_40 = param_1[0xd];
  local_38 = param_1[0xe];
  uStack_30 = param_1[0xf];
  lVar3 = local_38;
  lVar4 = uStack_30;
  local_58 = local_98;
  lVar2 = uStack_50;
  local_68 = local_a8;
  lVar1 = uStack_60;
  param_1[0xe] = CONCAT44(uStack_74,local_78);
  param_1[0xf] = CONCAT44(uStack_6c,uStack_70);
  param_1[0xc] = (longlong)&PTR_LAB_14af17350;
  param_1[0xd] = (longlong)param_1;
  param_1[10] = 0;
  param_1[0xb] = CONCAT44(uStack_8c,uStack_90);
  param_1[8] = (longlong)&LAB_148540646;
  param_1[9] = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = local_48;
  lStack_80 = lStack_40;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  if (local_a8 != 0) {
    plVar5 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar5 = &local_88;
    }
    uStack_60 = lVar1;
    uStack_50 = lVar2;
    local_38 = lVar3;
    uStack_30 = lVar4;
    (**(code **)(*plVar5 + 0x10))();
  }
  local_a8 = param_1[0x10];
  uStack_60 = param_1[0x11];
  local_98 = (longlong *)param_1[0x12];
  uStack_50 = param_1[0x13];
  local_48 = param_1[0x14];
  lStack_40 = param_1[0x15];
  local_38 = param_1[0x16];
  uStack_30 = param_1[0x17];
  lVar3 = local_38;
  lVar4 = uStack_30;
  local_58 = local_98;
  lVar2 = uStack_50;
  local_68 = local_a8;
  lVar1 = uStack_60;
  param_1[0x16] = CONCAT44(uStack_74,local_78);
  param_1[0x17] = CONCAT44(uStack_6c,uStack_70);
  param_1[0x14] = (longlong)&PTR_LAB_14af17370;
  param_1[0x15] = (longlong)param_1;
  param_1[0x12] = 0;
  param_1[0x13] = CONCAT44(uStack_8c,uStack_90);
  param_1[0x10] = (longlong)&LAB_1485406e2;
  param_1[0x11] = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = local_48;
  lStack_80 = lStack_40;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  if (local_a8 != 0) {
    plVar5 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar5 = &local_88;
    }
    uStack_60 = lVar1;
    uStack_50 = lVar2;
    local_38 = lVar3;
    uStack_30 = lVar4;
    (**(code **)(*plVar5 + 0x10))();
  }
  local_a8 = param_1[0x18];
  uStack_60 = param_1[0x19];
  local_98 = (longlong *)param_1[0x1a];
  uStack_50 = param_1[0x1b];
  local_48 = param_1[0x1c];
  lStack_40 = param_1[0x1d];
  local_38 = param_1[0x1e];
  uStack_30 = param_1[0x1f];
  lVar3 = local_38;
  lVar4 = uStack_30;
  local_58 = local_98;
  lVar2 = uStack_50;
  local_68 = local_a8;
  lVar1 = uStack_60;
  param_1[0x1e] = CONCAT44(uStack_74,local_78);
  param_1[0x1f] = CONCAT44(uStack_6c,uStack_70);
  param_1[0x1c] = (longlong)&PTR_LAB_14af17390;
  param_1[0x1d] = (longlong)param_1;
  param_1[0x1a] = 0;
  param_1[0x1b] = CONCAT44(uStack_8c,uStack_90);
  param_1[0x18] = (longlong)FUN_14854074c;
  param_1[0x19] = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = local_48;
  lStack_80 = lStack_40;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  if (local_a8 != 0) {
    plVar5 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar5 = &local_88;
    }
    uStack_60 = lVar1;
    uStack_50 = lVar2;
    local_38 = lVar3;
    uStack_30 = lVar4;
    (**(code **)(*plVar5 + 0x10))();
  }
  local_a8 = param_1[0x20];
  uStack_60 = param_1[0x21];
  local_98 = (longlong *)param_1[0x22];
  uStack_50 = param_1[0x23];
  local_48 = param_1[0x24];
  lStack_40 = param_1[0x25];
  local_38 = param_1[0x26];
  uStack_30 = param_1[0x27];
  lVar3 = local_38;
  lVar4 = uStack_30;
  local_58 = local_98;
  lVar2 = uStack_50;
  local_68 = local_a8;
  lVar1 = uStack_60;
  param_1[0x26] = CONCAT44(uStack_74,local_78);
  param_1[0x27] = CONCAT44(uStack_6c,uStack_70);
  param_1[0x24] = (longlong)&PTR_LAB_14af173b0;
  param_1[0x25] = (longlong)param_1;
  param_1[0x22] = 0;
  param_1[0x23] = CONCAT44(uStack_8c,uStack_90);
  param_1[0x20] = (longlong)&LAB_1485407d0;
  param_1[0x21] = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = local_48;
  lStack_80 = lStack_40;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  if (local_a8 != 0) {
    plVar5 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar5 = &local_88;
    }
    uStack_60 = lVar1;
    uStack_50 = lVar2;
    local_38 = lVar3;
    uStack_30 = lVar4;
    (**(code **)(*plVar5 + 0x10))();
  }
  local_a8 = param_1[0x28];
  uStack_60 = param_1[0x29];
  local_98 = (longlong *)param_1[0x2a];
  uStack_50 = param_1[0x2b];
  local_48 = param_1[0x2c];
  lStack_40 = param_1[0x2d];
  local_38 = param_1[0x2e];
  uStack_30 = param_1[0x2f];
  lVar3 = local_38;
  lVar4 = uStack_30;
  local_58 = local_98;
  lVar2 = uStack_50;
  local_68 = local_a8;
  lVar1 = uStack_60;
  param_1[0x2e] = CONCAT44(uStack_74,local_78);
  param_1[0x2f] = CONCAT44(uStack_6c,uStack_70);
  param_1[0x2c] = (longlong)&PTR_LAB_14af173d0;
  param_1[0x2d] = (longlong)param_1;
  param_1[0x2a] = 0;
  param_1[0x2b] = CONCAT44(uStack_8c,uStack_90);
  param_1[0x28] = (longlong)FUN_14854083a;
  param_1[0x29] = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = local_48;
  lStack_80 = lStack_40;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  if (local_a8 != 0) {
    plVar5 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar5 = &local_88;
    }
    uStack_60 = lVar1;
    uStack_50 = lVar2;
    local_38 = lVar3;
    uStack_30 = lVar4;
    (**(code **)(*plVar5 + 0x10))();
  }
  local_a8 = param_1[0x30];
  uStack_60 = param_1[0x31];
  local_98 = (longlong *)param_1[0x32];
  uStack_50 = param_1[0x33];
  local_48 = param_1[0x34];
  lStack_40 = param_1[0x35];
  local_38 = param_1[0x36];
  uStack_30 = param_1[0x37];
  lVar3 = local_38;
  lVar4 = uStack_30;
  local_58 = local_98;
  lVar2 = uStack_50;
  local_68 = local_a8;
  lVar1 = uStack_60;
  param_1[0x36] = CONCAT44(uStack_74,local_78);
  param_1[0x37] = CONCAT44(uStack_6c,uStack_70);
  param_1[0x34] = (longlong)&PTR_LAB_14af173f0;
  param_1[0x35] = (longlong)param_1;
  param_1[0x32] = 0;
  param_1[0x33] = CONCAT44(uStack_8c,uStack_90);
  param_1[0x30] = (longlong)&LAB_1485408be;
  param_1[0x31] = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = local_48;
  lStack_80 = lStack_40;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  if (local_a8 != 0) {
    plVar5 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar5 = &local_88;
    }
    uStack_60 = lVar1;
    uStack_50 = lVar2;
    local_38 = lVar3;
    uStack_30 = lVar4;
    (**(code **)(*plVar5 + 0x10))();
  }
  local_a8 = param_1[0x38];
  uStack_60 = param_1[0x39];
  local_98 = (longlong *)param_1[0x3a];
  uStack_50 = param_1[0x3b];
  local_48 = param_1[0x3c];
  lStack_40 = param_1[0x3d];
  local_38 = param_1[0x3e];
  uStack_30 = param_1[0x3f];
  lVar3 = local_38;
  lVar4 = uStack_30;
  local_58 = local_98;
  lVar2 = uStack_50;
  local_68 = local_a8;
  lVar1 = uStack_60;
  param_1[0x3e] = CONCAT44(uStack_74,local_78);
  param_1[0x3f] = CONCAT44(uStack_6c,uStack_70);
  param_1[0x3c] = (longlong)&PTR_LAB_14af17410;
  param_1[0x3d] = (longlong)param_1;
  param_1[0x3a] = 0;
  param_1[0x3b] = CONCAT44(uStack_8c,uStack_90);
  param_1[0x38] = (longlong)FUN_14854090c;
  param_1[0x39] = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = local_48;
  lStack_80 = lStack_40;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  if (local_a8 != 0) {
    plVar5 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar5 = &local_88;
    }
    uStack_60 = lVar1;
    uStack_50 = lVar2;
    local_38 = lVar3;
    uStack_30 = lVar4;
    (**(code **)(*plVar5 + 0x10))();
  }
  local_a8 = param_1[0x40];
  uStack_60 = param_1[0x41];
  local_98 = (longlong *)param_1[0x42];
  uStack_50 = param_1[0x43];
  local_48 = param_1[0x44];
  lStack_40 = param_1[0x45];
  local_38 = param_1[0x46];
  uStack_30 = param_1[0x47];
  lVar3 = local_38;
  lVar4 = uStack_30;
  local_58 = local_98;
  lVar2 = uStack_50;
  local_68 = local_a8;
  lVar1 = uStack_60;
  param_1[0x46] = CONCAT44(uStack_74,local_78);
  param_1[0x47] = CONCAT44(uStack_6c,uStack_70);
  param_1[0x44] = (longlong)&PTR_LAB_14af17430;
  param_1[0x45] = (longlong)param_1;
  param_1[0x42] = 0;
  param_1[0x43] = CONCAT44(uStack_8c,uStack_90);
  param_1[0x40] = (longlong)&LAB_14854097a;
  param_1[0x41] = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = local_48;
  lStack_80 = lStack_40;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_60 = lVar1;
  uStack_50 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  if (local_a8 != 0) {
    plVar5 = &local_88;
    if (local_98 != (longlong *)0x0) {
      plVar5 = local_98;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148540628 FUN_148540628 body=29 status=ok
// SIG undefined FUN_148540628(void)

undefined8 FUN_148540628(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148540678 FUN_148540678 body=29 status=ok
// SIG undefined FUN_148540678(void)

undefined8 FUN_148540678(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148540696 FUN_148540696 body=75 status=ok
// SIG undefined FUN_148540696(void)

ulonglong FUN_148540696(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  if (-1 < param_2) {
    plVar1 = *(longlong **)(*param_1 + 0x240);
    lVar2 = *plVar1;
    if (lVar2 != 0) {
      cVar3 = FUN_1461c3a34(lVar2 + 0x118);
      if (cVar3 != '\0') {
        uVar4 = FUN_144b2ab14(*plVar1);
        uVar5 = (ulonglong)uVar4;
      }
    }
    uVar5 = CONCAT71((int7)(uVar5 >> 8),param_2 < (int)uVar5);
  }
  return uVar5;
}



// FUNCTION 14854072e FUN_14854072e body=29 status=ok
// SIG undefined FUN_14854072e(void)

undefined8 FUN_14854072e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14854074c FUN_14854074c body=60 status=ok
// SIG undefined FUN_14854074c(void)

undefined8 FUN_14854074c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  
  plVar1 = *(longlong **)(*param_1 + 0x240);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    cVar3 = FUN_1461c3a34(lVar2 + 0x118);
    if (cVar3 != '\0') {
      uVar4 = FUN_144b2ab14(*plVar1);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 1485407b2 FUN_1485407b2 body=29 status=ok
// SIG undefined FUN_1485407b2(void)

undefined8 FUN_1485407b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14854081c FUN_14854081c body=29 status=ok
// SIG undefined FUN_14854081c(void)

undefined8 FUN_14854081c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14854083a FUN_14854083a body=60 status=ok
// SIG undefined FUN_14854083a(void)

undefined8 FUN_14854083a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  
  plVar1 = *(longlong **)(*param_1 + 0x240);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    cVar3 = FUN_1461c3a34(lVar2 + 0x118);
    if (cVar3 != '\0') {
      uVar4 = FUN_144b2ab14(*plVar1);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 1485408a0 FUN_1485408a0 body=29 status=ok
// SIG undefined FUN_1485408a0(void)

undefined8 FUN_1485408a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485408ee FUN_1485408ee body=29 status=ok
// SIG undefined FUN_1485408ee(void)

undefined8 FUN_1485408ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14854090c FUN_14854090c body=38 status=ok
// SIG undefined FUN_14854090c(void)

undefined8 FUN_14854090c(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  FUN_1484ac0ae(*(undefined8 *)(*param_2 + 0x240),param_1,*param_3);
  return param_1;
}



// FUNCTION 14854095c FUN_14854095c body=29 status=ok
// SIG undefined FUN_14854095c(void)

undefined8 FUN_14854095c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485409f8 FUN_1485409f8 body=29 status=ok
// SIG undefined FUN_1485409f8(void)

undefined8 FUN_1485409f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148540a16 FUN_148540a16 body=31 status=ok
// SIG undefined FUN_148540a16(void)

undefined8
FUN_148540a16(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_148540a7e(param_2,param_1,param_4);
  return param_1;
}



// FUNCTION 148540a60 FUN_148540a60 body=29 status=ok
// SIG undefined FUN_148540a60(void)

undefined8 FUN_148540a60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148540a7e FUN_148540a7e body=234 status=ok
// SIG undefined FUN_148540a7e(void)

double * FUN_148540a7e(longlong *param_1,double *param_2,double *param_3)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_1;
  dVar4 = *param_3;
  dVar5 = param_3[1];
  dVar3 = param_3[2];
  lVar1 = *(longlong *)(lVar2 + 0xa0);
  if (*(longlong *)(lVar2 + 0xa0) == 0) {
    lVar1 = lVar2;
  }
  if ((longlong)*(int *)(lVar2 + 0xa8) != 0) {
    lVar2 = (longlong)*(int *)(lVar2 + 0xa8) * 0x50;
    do {
      local_50 = dVar3 * *(double *)(lVar1 + 0x48);
      local_58 = dVar5 * *(double *)(lVar1 + 0x40);
      local_60 = dVar4 * *(double *)(lVar1 + 0x38);
      FUN_146bed047(&local_48,lVar1,&local_60);
      dVar3 = local_38 + *(double *)(lVar1 + 0x30);
      dVar5 = local_40 + *(double *)(lVar1 + 0x28);
      dVar4 = local_48 + *(double *)(lVar1 + 0x20);
      lVar1 = lVar1 + 0x50;
      lVar2 = lVar2 + -0x50;
    } while (lVar2 != 0);
  }
  *param_2 = dVar4;
  param_2[1] = dVar5;
  param_2[2] = dVar3;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148540b6a FUN_148540b6a body=91 status=ok
// SIG undefined FUN_148540b6a(void)

undefined8 FUN_148540b6a(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *param_1;
  if ((((lVar1 != 0) && (*(longlong **)(lVar1 + 0xd0) != (longlong *)0x0)) &&
      (*(longlong *)(lVar1 + 0xe0) != 0)) &&
     ((cVar2 = (**(code **)(**(longlong **)(lVar1 + 0xd0) + 0x58))(), cVar2 != '\0' &&
      (cVar2 = (**(code **)(**(longlong **)(lVar1 + 0xe0) + 0x58))(), cVar2 != '\0')))) {
    return CONCAT71((int7)((ulonglong)*param_1 >> 8),*(longlong *)(*param_1 + 0xf0) != 0);
  }
  return 0;
}



// FUNCTION 148540bc6 FUN_148540bc6 body=196 status=ok
// SIG undefined FUN_148540bc6(void)

void FUN_148540bc6(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1484ac0ae(param_1,&local_44,param_2);
  FUN_148540c8c(param_1,&local_50,local_44);
  *(undefined4 *)(param_3 + 1) = local_48;
  *param_3 = local_50;
  FUN_148540c8c(param_1,&local_50,local_40);
  *(undefined4 *)(param_4 + 1) = local_48;
  *param_4 = local_50;
  FUN_148540c8c(param_1,&local_50,local_3c);
  *(undefined4 *)(param_5 + 1) = local_48;
  *param_5 = local_50;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148540c8c FUN_148540c8c body=241 status=ok
// SIG undefined FUN_148540c8c(void)

void FUN_148540c8c(longlong *param_1,float *param_2,uint param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar4;
  float fVar5;
  undefined1 in_XMM0 [16];
  undefined1 auVar3 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar1 = *(longlong *)(*param_1 + 0xf0);
  if (*(char *)(*param_1 + 0x111) == '\x01') {
    auVar3 = pmovsxwd(in_XMM0,*(undefined8 *)(lVar1 + 8 + (ulonglong)param_3 * 0x10));
    fVar2 = (float)auVar3._0_4_ * 3.051851e-05;
    fVar4 = (float)auVar3._4_4_ * 3.051851e-05;
    fVar5 = (float)auVar3._8_4_ * 3.051851e-05;
  }
  else {
    auVar3 = pmovsxbd(in_XMM0,*(undefined4 *)(lVar1 + 4 + (ulonglong)param_3 * 8));
    fVar2 = (float)auVar3._0_4_ * 0.007874016;
    fVar4 = (float)auVar3._4_4_ * 0.007874016;
    fVar5 = (float)auVar3._8_4_ * 0.007874016;
  }
  if ((char)param_1[7] != '\0') {
    fVar6 = (float)((double)fVar5 * (double)param_1[6]);
    fVar7 = (float)((double)fVar4 * (double)param_1[5]);
    fVar8 = (float)((double)fVar2 * (double)param_1[4]);
    fVar9 = SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7);
    fVar2 = 0.0;
    fVar4 = 0.0;
    fVar5 = 0.0;
    if (0.0 < fVar9) {
      fVar9 = 1.0 / fVar9;
      fVar5 = fVar6 * fVar9;
      fVar4 = fVar7 * fVar9;
      fVar2 = fVar9 * fVar8;
    }
  }
  *param_2 = fVar2;
  param_2[1] = fVar4;
  param_2[2] = fVar5;
  return;
}



// FUNCTION 148540d7e FUN_148540d7e body=197 status=ok
// SIG undefined FUN_148540d7e(void)

void FUN_148540d7e(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1484ac0ae(param_1,&local_4c,param_2);
  FUN_1484acab8(param_1,&local_58,local_4c,param_3);
  *param_4 = local_58;
  FUN_1484acab8(param_1,&local_58,local_48,param_3);
  *param_5 = local_58;
  FUN_1484acab8(param_1,&local_58,local_44,param_3);
  *param_6 = local_58;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148540e44 FUN_148540e44 body=473 status=ok
// SIG undefined FUN_148540e44(void)

longlong * FUN_148540e44(longlong *param_1,longlong param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = 0;
  lVar7 = DAT_14c846518;
  param_1[1] = DAT_14c846510;
  param_1[2] = lVar7;
  param_1[3] = DAT_14c846520;
  lVar7 = DAT_14c846518;
  param_1[4] = DAT_14c846510;
  param_1[5] = lVar7;
  param_1[6] = DAT_14c846520;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar2 = *(int *)(param_2 + 0x38);
  iVar5 = iVar2 + 1;
  if (-2 < iVar2) {
    if (iVar2 < 0) {
      iVar5 = -1;
    }
    else {
      local_78 = param_1 + 10;
      FUN_14481578e();
      iVar5 = *(int *)(param_2 + 0x38);
      if (-1 < iVar5) {
        plVar1 = param_1 + 8;
        if (*(int *)((longlong)param_1 + 0x4c) < iVar5) {
          FUN_1484ac818(plVar1);
          iVar5 = *(int *)(param_2 + 0x38);
        }
        puVar6 = (undefined4 *)(param_2 + 0x10);
        if (*(undefined4 **)(param_2 + 0x30) != (undefined4 *)0x0) {
          puVar6 = *(undefined4 **)(param_2 + 0x30);
        }
        if (iVar5 != 0) {
          lVar7 = (longlong)iVar5 * 0x1c;
          do {
            local_68 = *puVar6;
            uStack_64 = puVar6[1];
            uStack_60 = puVar6[2];
            uStack_5c = puVar6[3];
            uStack_58 = puVar6[4];
            uStack_54 = puVar6[5];
            uStack_50 = puVar6[6];
            local_70 = param_3;
            if ((param_4 == '\0') || (cVar4 = FUN_148541020(&local_70), cVar4 != '\0')) {
              iVar5 = (int)param_1[0xb];
              *(uint *)(param_1 + 0xb) = iVar5 + 1U;
              if (*(uint *)((longlong)param_1 + 0x5c) < iVar5 + 1U) {
                FUN_1446f48e2(local_78,iVar5);
              }
              lVar3 = param_1[0xc];
              *(int *)(param_1[10] + (longlong)iVar5 * 4) = (int)lVar3;
              *(int *)(param_1 + 0xc) = (int)lVar3 + puVar6[2];
              iVar5 = (int)param_1[9];
              *(uint *)(param_1 + 9) = iVar5 + 1U;
              if (*(uint *)((longlong)param_1 + 0x4c) < iVar5 + 1U) {
                FUN_1484ac878(plVar1,iVar5);
              }
              *(undefined4 **)(*plVar1 + (longlong)iVar5 * 8) = puVar6;
            }
            puVar6 = puVar6 + 7;
            lVar7 = lVar7 + -0x1c;
          } while (lVar7 != 0);
        }
        iVar5 = (int)param_1[0xb];
        *(uint *)(param_1 + 0xb) = iVar5 + 1U;
        if (*(uint *)((longlong)param_1 + 0x5c) < iVar5 + 1U) {
          FUN_1446f48e2(local_78,iVar5);
        }
        *(int *)(param_1[10] + (longlong)iVar5 * 4) = (int)param_1[0xc];
        if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return param_1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar5);
}



// FUNCTION 148541020 FUN_148541020 body=108 status=ok
// SIG undefined FUN_148541020(void)

bool FUN_148541020(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  plVar1 = (longlong *)FUN_144b2ab82(*param_1,*(undefined4 *)(param_1 + 1));
  if (plVar1 != (longlong *)0x0) {
    local_18 = 0;
    uStack_10 = 0;
    lVar2 = (**(code **)(*plVar1 + 0x2c0))(plVar1);
    if (lVar2 != 0) {
      bVar3 = *(char *)(lVar2 + 0x128) == '\0';
      goto LAB_148541071;
    }
  }
  bVar3 = false;
LAB_148541071:
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14854108e FUN_14854108e body=84 status=ok
// SIG undefined FUN_14854108e(void)

void FUN_14854108e(longlong *param_1)

{
  FUN_146c4750e(param_1 + 10);
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
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



// FUNCTION 1485410e2 FUN_1485410e2 body=62 status=ok
// SIG undefined FUN_1485410e2(void)

void FUN_1485410e2(longlong param_1)

{
  if (param_1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_148541120(param_1 + 8);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 148541120 FUN_148541120 body=52 status=ok
// SIG undefined FUN_148541120(void)

void FUN_148541120(longlong *param_1)

{
  FUN_148541154();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148541154 FUN_148541154 body=89 status=ok
// SIG undefined FUN_148541154(void)

void FUN_148541154(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140d97c6c(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1485411ae FUN_1485411ae body=97 status=ok
// SIG undefined FUN_1485411ae(void)

void FUN_1485411ae(longlong *param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if ((*(int *)(lVar1 + 0xcc) < 0) || (*(longlong *)(lVar1 + 0x10) != 0)) {
    FUN_146c4c43a(lVar1,0);
    *(undefined8 *)(lVar1 + 0x10) = 0;
  }
  if ((param_2 != '\0') || (param_1[0xb] != *(longlong *)(*param_1 + 0x10))) {
    FUN_148541210(param_1);
    param_1[0xb] = *(longlong *)(*param_1 + 0x10);
  }
  return;
}



// FUNCTION 148541210 FUN_148541210 body=190 status=ok
// SIG undefined FUN_148541210(void)

void FUN_148541210(longlong *param_1)

{
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined1 local_b8 [72];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1485412d0(local_b8,*(undefined8 *)(*param_1 + 8));
  FUN_14854178e(param_1 + 1);
  local_70 = 0;
  local_68 = 0xffffffff00000000;
  local_50 = 0;
  local_48 = 0;
  uStack_44 = 0x80;
  uStack_40 = 0xffffffff;
  uStack_3c = 0;
  local_30 = 0;
  local_28 = 0;
  local_c8 = local_b8;
  FUN_1485413a2(param_1,*(undefined4 *)(*param_1 + 0xcc),0,&local_70);
  FUN_145a22d80(&local_70);
  FUN_146bee452(local_b8);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485412d0 FUN_1485412d0 body=208 status=ok
// SIG undefined FUN_1485412d0(void)

longlong FUN_1485412d0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined8 *local_68;
  longlong local_60;
  longlong local_58;
  undefined1 *local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_141040be6();
  FUN_141040be6(param_1 + 0x18);
  FUN_146bee4b2(param_1 + 0x30);
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  FUN_146bee1a4(param_1,uVar1);
  FUN_146bee1a4(param_1 + 0x18,uVar1);
  FUN_146b9c0e2(param_1 + 0x30);
  local_48 = &local_60;
  local_68 = &local_40;
  local_40 = 0;
  local_38 = 0;
  local_50 = &LAB_1485415f6;
  local_70 = 0;
  local_60 = param_2;
  local_58 = param_1;
  FUN_1401f8d10(L"ParallelFor Task",uVar1,1);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485413a2 FUN_1485413a2 body=595 status=ok
// SIG undefined FUN_1485413a2(void)

int FUN_1485413a2(longlong *param_1,uint param_2,int param_3,undefined8 *param_4,undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  int local_a0;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_145a22d80(param_4);
  lVar3 = *param_1;
  uVar2 = *(uint *)(*(longlong *)(*(longlong *)(lVar3 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                   (ulonglong)(param_2 & 0x1ff) * 4);
  if ((int)uVar2 < *(int *)(lVar3 + 200)) {
LAB_1485413fd:
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(lVar3 + 0xb8) + (ulonglong)(uVar2 >> 9) * 8) +
                    (ulonglong)(uVar2 & 0x1ff) * 4);
    goto LAB_148541416;
  }
  while( true ) {
    uVar1 = *(uint *)(*(longlong *)(*(longlong *)(lVar3 + 0xb8) + (ulonglong)(uVar2 >> 9) * 8) +
                     (ulonglong)(uVar2 & 0x1ff) * 4);
    if (-1 < (int)uVar1) break;
    param_2 = ~uVar1;
    FUN_145a22d80(param_4);
    lVar3 = *param_1;
    uVar2 = *(uint *)(*(longlong *)(*(longlong *)(lVar3 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                     (ulonglong)(param_2 & 0x1ff) * 4);
    if ((int)uVar2 < *(int *)(lVar3 + 200)) goto LAB_1485413fd;
    param_3 = param_3 + 1;
  }
  iVar4 = uVar1 - 1;
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(lVar3 + 0xb8) + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                  (ulonglong)(uVar2 + 1 & 0x1ff) * 4) + -1;
  local_98 = 0;
  local_90 = 0xffffffff00000000;
  local_78 = 0;
  local_70 = 0;
  uStack_6c = 0x80;
  uStack_68 = 0xffffffff;
  uStack_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_a8 = param_5;
  local_9c = FUN_1485413a2(param_1,iVar4,param_3 + 1,param_4);
  local_a8 = param_5;
  local_a0 = iVar5;
  iVar5 = FUN_1485413a2(param_1,iVar5,param_3 + 1,&local_98);
  iVar5 = iVar5 + local_9c;
  if (param_3 != 0) {
    if (*(int *)((longlong)param_4 + 0xc) == -1) {
      if ((local_90._4_4_ == -1) && (iVar5 < 2)) goto LAB_148541544;
      if (local_90._4_4_ == -1) {
        FUN_146bee514(param_4);
        FUN_148541aca(param_1,iVar4,param_4);
        goto LAB_148541582;
      }
      FUN_148541aca(param_1,iVar4,&local_98);
      if (&local_98 != param_4) {
        if (local_90._4_4_ == -1) {
          FUN_145a22d80(param_4);
        }
        else {
          FUN_146bee56a(param_4,&local_98);
        }
      }
    }
    else {
LAB_148541582:
      if (local_90._4_4_ == -1) {
        FUN_148541aca(param_1,local_a0,param_4);
      }
      else {
        FUN_1468b3f6e(param_4,&local_98);
      }
    }
    if (1 < iVar5) {
      FUN_148541be8(param_1,param_2,param_4,param_5);
    }
  }
LAB_148541544:
  FUN_145a22d80(&local_98);
LAB_148541416:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485415fe FUN_1485415fe body=94 status=ok
// SIG undefined FUN_1485415fe(void)

void FUN_1485415fe(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(*param_1 + 0x18))) {
    lVar1 = param_1[1];
    uVar4 = (ulonglong)(param_2 >> 9);
    uVar3 = (ulonglong)((param_2 & 0x1ff) << 3);
    lVar2 = uVar3 * 3;
    FUN_14854165c(*param_1,param_2,lVar2 + *(longlong *)(*(longlong *)(lVar1 + 0x20) + uVar4 * 8),
                  uVar3 + *(longlong *)(*(longlong *)(lVar1 + 0x38) + uVar4 * 8),
                  *(longlong *)(*(longlong *)(lVar1 + 8) + uVar4 * 8) + lVar2);
  }
  return;
}



// FUNCTION 14854165c FUN_14854165c body=305 status=ok
// SIG undefined FUN_14854165c(void)

void FUN_14854165c(longlong *param_1,uint param_2,undefined4 *param_3,undefined8 param_4,
                  double *param_5)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  double dStack_48;
  double local_40;
  double local_38;
  double dStack_30;
  double local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *param_1;
  lVar3 = param_1[2];
  uVar4 = (ulonglong)param_2;
  lVar6 = (longlong)*(int *)(lVar3 + uVar4 * 0xc);
  lVar5 = (longlong)*(int *)(lVar3 + 4 + uVar4 * 0xc);
  lVar3 = (longlong)*(int *)(lVar3 + 8 + uVar4 * 0xc);
  local_58 = *(double *)(lVar2 + 0x10 + lVar6 * 0x18);
  pdVar1 = (double *)(lVar2 + lVar6 * 0x18);
  local_68 = *pdVar1;
  dStack_60 = pdVar1[1];
  pdVar1 = (double *)(lVar2 + lVar5 * 0x18);
  local_50 = *pdVar1;
  dStack_48 = pdVar1[1];
  local_40 = *(double *)(lVar2 + 0x10 + lVar5 * 0x18);
  pdVar1 = (double *)(lVar2 + lVar3 * 0x18);
  local_38 = *pdVar1;
  dStack_30 = pdVar1[1];
  local_28 = *(double *)(lVar2 + 0x10 + lVar3 * 0x18);
  *param_5 = (local_68 + local_50 + local_38) * 0.3333333333333333;
  param_5[1] = (dStack_60 + dStack_48 + dStack_30) * 0.3333333333333333;
  param_5[2] = (local_58 + local_40 + local_28) * 0.3333333333333333;
  local_88 = param_4;
  FUN_146b9cae0(&local_80,&local_68,&local_50,&local_38);
  *(undefined8 *)(param_3 + 4) = local_70;
  *param_3 = local_80;
  param_3[1] = uStack_7c;
  param_3[2] = uStack_78;
  param_3[3] = uStack_74;
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14854178e FUN_14854178e body=63 status=ok
// SIG undefined FUN_14854178e(void)

void FUN_14854178e(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_148541154(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_148541918(param_1);
    return;
  }
  FUN_1485417ce(param_1);
  FUN_148541154(param_1);
  return;
}



// FUNCTION 1485417ce FUN_1485417ce body=329 status=ok
// SIG undefined FUN_1485417ce(void)

void FUN_1485417ce(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x8c + (longlong)iVar4 * 0x90) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148541918 FUN_148541918 body=433 status=ok
// SIG undefined FUN_148541918(void)

void FUN_148541918(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x90;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x8c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x88 + lVar7) =
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



// FUNCTION 148541aca FUN_148541aca body=285 status=ok
// SIG undefined FUN_148541aca(void)

void FUN_148541aca(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  while (uVar3 = *(uint *)(*(longlong *)
                            (*(longlong *)(lVar1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                          (ulonglong)(param_2 & 0x1ff) * 4), *(int *)(lVar1 + 200) <= (int)uVar3) {
    param_2 = *(uint *)(*(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)(uVar3 >> 9) * 8) +
                       (ulonglong)(uVar3 & 0x1ff) * 4);
    if ((int)param_2 < 0) {
      param_2 = ~param_2;
    }
    else {
      FUN_148541aca(param_1,param_2 - 1,param_3);
      lVar1 = *param_1;
      param_2 = *(int *)(*(longlong *)
                          (*(longlong *)(lVar1 + 0xb8) + (ulonglong)(uVar3 + 1 >> 9) * 8) +
                        (ulonglong)(uVar3 + 1 & 0x1ff) * 4) - 1;
    }
  }
  iVar2 = *(int *)(*(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)(uVar3 >> 9) * 8) +
                  (ulonglong)(uVar3 & 0x1ff) * 4);
  if (0 < iVar2) {
    do {
      uVar3 = uVar3 + 1;
      FUN_1447cbafe(param_3,local_34,
                    (ulonglong)((uVar3 & 0x1ff) << 2) +
                    *(longlong *)(*(longlong *)(*param_1 + 0xb8) + (ulonglong)(uVar3 >> 9) * 8),0);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148541be8 FUN_148541be8 body=168 status=ok
// SIG undefined FUN_148541be8(void)

void FUN_148541be8(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 local_c0 [24];
  undefined1 local_a8 [8];
  undefined1 local_a0 [24];
  undefined1 local_88 [76];
  undefined4 local_3c;
  undefined4 *local_38;
  undefined1 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c8 = local_88;
  local_d0 = local_a0;
  local_d8 = local_a8;
  local_3c = param_2;
  FUN_148541c91(*(undefined8 *)(*param_1 + 8),param_3,param_4,local_c0);
  local_38 = &local_3c;
  local_30 = local_c0;
  FUN_1485432fa(param_1 + 1,local_24);
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148541c91 FUN_148541c91 body=514 status=ok
// SIG undefined FUN_148541c91(void)

void FUN_148541c91(undefined8 param_1,longlong param_2,undefined8 param_3,double *param_4,
                  double *param_5,undefined4 *param_6,undefined8 *param_7)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  double local_128;
  double dStack_120;
  double local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_e0 [9];
  double local_98;
  longlong *local_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (*(int *)(param_2 + 8) - *(int *)(param_2 + 0x34) < 3000) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1b8);
  }
  FUN_140619b9c(param_2,&local_58);
  local_e8 = DAT_14c8464f0;
  local_f8 = (undefined4)DAT_14c8464e0;
  uStack_f4 = DAT_14c8464e0._4_4_;
  uStack_f0 = (undefined4)DAT_14c8464e8;
  uStack_ec = DAT_14c8464e8._4_4_;
  local_e0[0] = 0;
  local_88 = &local_58;
  local_80 = param_3;
  FUN_148542574(&local_78,local_50);
  local_60 = 1.0 / local_60;
  local_128 = local_78 * local_60;
  dStack_120 = dStack_70 * local_60;
  local_118 = local_60 * local_68;
  local_188 = DAT_14c8464f0;
  local_198 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_190 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_110 = &local_58;
  local_108 = param_1;
  local_100 = param_3;
  local_78 = local_128;
  dStack_70 = dStack_120;
  local_68 = local_118;
  FUN_1485426ed(&local_f8,local_50);
  param_4[2] = local_68;
  *param_4 = local_78;
  param_4[1] = dStack_70;
  if (local_98 < 0.0) {
    local_98 = sqrt(local_98);
  }
  else {
    local_98 = SQRT(local_98);
  }
  *param_5 = local_98;
  *(undefined8 *)(param_6 + 4) = local_e8;
  *param_6 = local_f8;
  param_6[1] = uStack_f4;
  param_6[2] = uStack_f0;
  param_6[3] = uStack_ec;
  puVar2 = local_e0;
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_7 = *puVar2;
    puVar2 = puVar2 + 1;
    param_7 = param_7 + 1;
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148542574 FUN_148542574 body=376 status=ok
// SIG undefined FUN_148542574(void)

double * FUN_148542574(double *param_1,int param_2,double *param_3,undefined8 param_4)

{
  longlong lVar1;
  double dVar2;
  undefined1 in_XMM0 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_e8 [40];
  undefined4 local_c0;
  undefined8 *local_b8;
  double *local_a8;
  int *local_a0;
  int *local_98;
  undefined8 local_90;
  undefined1 *local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 uStack_70;
  int local_64;
  int local_60;
  undefined1 local_59;
  undefined1 *local_58;
  double **local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  auVar3._4_12_ = in_XMM0._4_12_;
  auVar3._0_4_ = (float)param_2 * 0.0625;
  auVar3 = roundss(auVar3,auVar3,10);
  local_64 = (int)auVar3._0_4_;
  local_78 = 0;
  uStack_70 = 0;
  local_60 = param_2;
  FUN_148542852(&local_78);
  local_50 = &local_a8;
  local_88 = &local_59;
  local_b8 = &local_48;
  local_48 = 0;
  local_40 = 0;
  local_58 = &LAB_1485429ae;
  local_c0 = 0;
  local_a8 = param_3;
  local_a0 = &local_64;
  local_98 = &local_60;
  local_90 = param_4;
  local_80 = &local_78;
  FUN_1401f8d10(L"ParallelFor Task",0x10,1);
  dVar4 = *param_3;
  dVar6 = param_3[1];
  dVar2 = param_3[3];
  param_1[2] = param_3[2];
  param_1[3] = dVar2;
  *param_1 = dVar4;
  param_1[1] = dVar6;
  dVar2 = *param_1;
  if ((longlong)(int)uStack_70 != 0) {
    dVar4 = param_1[1];
    dVar6 = param_1[2];
    dVar5 = param_1[3];
    lVar1 = 0;
    do {
      dVar6 = dVar6 + *(double *)(local_78 + 0x10 + lVar1);
      dVar4 = dVar4 + *(double *)(local_78 + 8 + lVar1);
      dVar2 = dVar2 + *(double *)(local_78 + lVar1);
      dVar5 = dVar5 + *(double *)(local_78 + 0x18 + lVar1);
      lVar1 = lVar1 + 0x20;
    } while ((longlong)(int)uStack_70 * 0x20 != lVar1);
    param_1[2] = dVar6;
    param_1[1] = dVar4;
    param_1[3] = dVar5;
  }
  *param_1 = dVar2;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485426ed FUN_1485426ed body=356 status=ok
// SIG undefined FUN_1485426ed(void)

undefined8 * FUN_1485426ed(undefined8 *param_1,int param_2,int *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int **ppiVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 in_XMM0 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_128 [40];
  undefined4 local_100;
  undefined8 *local_f8;
  int *local_f0 [4];
  undefined1 *local_d0;
  longlong *local_c8;
  longlong local_88;
  undefined8 uStack_80;
  int local_6c;
  int local_68;
  undefined1 local_61;
  undefined1 *local_60;
  int **local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  auVar7._4_12_ = in_XMM0._4_12_;
  auVar7._0_4_ = (float)param_2 * 0.0625;
  auVar7 = roundss(auVar7,auVar7,10);
  local_6c = (int)auVar7._0_4_;
  local_88 = 0;
  uStack_80 = 0;
  local_68 = param_2;
  FUN_148542a90(&local_88);
  local_58 = local_f0;
  local_d0 = &local_61;
  local_f8 = &local_50;
  local_50 = 0;
  local_48 = 0;
  local_60 = &LAB_148542cfa;
  local_100 = 0;
  local_f0[0] = param_3;
  local_f0[1] = &local_6c;
  local_f0[2] = &local_68;
  local_f0[3] = (int *)param_4;
  local_c8 = &local_88;
  FUN_1401f8d10(L"ParallelFor Task",0x10,1);
  lVar1 = local_88;
  puVar5 = param_1;
  for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *(undefined8 *)param_3;
    param_3 = param_3 + 2;
    puVar5 = puVar5 + 1;
  }
  if ((longlong)(int)uStack_80 != 0) {
    lVar6 = (longlong)(int)uStack_80 * 0x68;
    lVar2 = local_88;
    do {
      FUN_148542aca(local_f0,lVar2,param_1);
      ppiVar4 = local_f0;
      puVar5 = param_1;
      for (lVar3 = 0xd; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *ppiVar4;
        ppiVar4 = ppiVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      lVar2 = lVar2 + 0x68;
      lVar6 = lVar6 + -0x68;
    } while (lVar6 != 0);
  }
  if (lVar1 != 0) {
    FUN_1400020a8(lVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148542852 FUN_148542852 body=57 status=ok
// SIG undefined FUN_148542852(void)

void FUN_148542852(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < 0x10) {
    *(undefined4 *)(param_1 + 8) = 0x10;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < 0x10U - iVar1) {
      FUN_14854288c();
      return;
    }
  }
  else if (iVar1 != 0x10) {
    *(undefined4 *)(param_1 + 8) = 0x10;
    FUN_148542912();
    return;
  }
  return;
}



// FUNCTION 14854288c FUN_14854288c body=132 status=ok
// SIG undefined FUN_14854288c(void)

void FUN_14854288c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148542912 FUN_148542912 body=62 status=ok
// SIG undefined FUN_148542912(void)

void FUN_148542912(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148542950(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 148542950 FUN_148542950 body=93 status=ok
// SIG undefined FUN_148542950(void)

ulonglong FUN_148542950(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 1485429b6 FUN_1485429b6 body=217 status=ok
// SIG undefined FUN_1485429b6(void)

void FUN_1485429b6(undefined8 *param_1,int param_2)

{
  double dVar1;
  double *pdVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  ulonglong uVar7;
  
  pdVar2 = (double *)*param_1;
  dVar10 = *pdVar2;
  dVar11 = pdVar2[1];
  dVar12 = pdVar2[2];
  dVar13 = pdVar2[3];
  iVar4 = (param_2 + 1) * *(int *)param_1[1];
  if (*(int *)param_1[2] <= iVar4) {
    iVar4 = *(int *)param_1[2];
  }
  iVar9 = *(int *)param_1[1] * param_2;
  if (iVar9 < iVar4) {
    lVar3 = ((undefined8 *)param_1[3])[1];
    do {
      uVar6 = *(uint *)(**(longlong **)param_1[3] + (longlong)iVar9 * 4);
      uVar8 = (ulonglong)(uVar6 >> 9);
      uVar6 = uVar6 & 0x1ff;
      uVar7 = (ulonglong)uVar6;
      dVar1 = *(double *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x38) + uVar8 * 8) + (ulonglong)uVar6 * 8);
      lVar5 = *(longlong *)(*(longlong *)(lVar3 + 8) + uVar8 * 8);
      dVar12 = dVar12 + *(double *)(lVar5 + 0x10 + uVar7 * 0x18) * dVar1;
      dVar13 = dVar13 + dVar1;
      dVar11 = dVar11 + *(double *)(lVar5 + 8 + uVar7 * 0x18) * dVar1;
      dVar10 = dVar10 + dVar1 * *(double *)(lVar5 + uVar7 * 0x18);
      iVar9 = iVar9 + 1;
    } while (iVar4 != iVar9);
  }
  lVar3 = *(longlong *)param_1[5];
  lVar5 = (longlong)param_2 * 0x20;
  *(double *)(lVar3 + lVar5) = dVar10;
  *(double *)(lVar3 + 8 + lVar5) = dVar11;
  *(double *)(lVar3 + 0x10 + lVar5) = dVar12;
  *(double *)(lVar3 + 0x18 + lVar5) = dVar13;
  return;
}



// FUNCTION 148542a90 FUN_148542a90 body=57 status=ok
// SIG undefined FUN_148542a90(void)

void FUN_148542a90(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < 0x10) {
    *(undefined4 *)(param_1 + 8) = 0x10;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < 0x10U - iVar1) {
      FUN_148542bc4();
      return;
    }
  }
  else if (iVar1 != 0x10) {
    *(undefined4 *)(param_1 + 8) = 0x10;
    FUN_148542c54();
    return;
  }
  return;
}



// FUNCTION 148542aca FUN_148542aca body=249 status=ok
// SIG undefined FUN_148542aca(void)

double * FUN_148542aca(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  dVar16 = param_2[2];
  dVar1 = param_3[2];
  dVar2 = param_2[1];
  dVar3 = param_3[1];
  *param_1 = *param_2 + *param_3;
  param_1[1] = dVar2 + dVar3;
  param_1[2] = dVar16 + dVar1;
  dVar16 = param_2[0xb];
  dVar1 = param_3[0xb];
  dVar2 = param_2[10];
  dVar3 = param_3[10];
  dVar4 = param_2[9];
  dVar5 = param_3[9];
  dVar6 = param_2[8];
  dVar7 = param_3[8];
  dVar8 = param_2[7];
  dVar9 = param_3[7];
  dVar10 = param_2[6];
  dVar11 = param_3[6];
  dVar12 = param_2[5];
  dVar13 = param_3[5];
  dVar14 = param_2[4];
  dVar15 = param_3[4];
  param_1[3] = param_2[3] + param_3[3];
  param_1[4] = dVar14 + dVar15;
  param_1[5] = dVar12 + dVar13;
  param_1[6] = dVar10 + dVar11;
  param_1[7] = dVar8 + dVar9;
  param_1[8] = dVar6 + dVar7;
  param_1[9] = dVar4 + dVar5;
  param_1[10] = dVar2 + dVar3;
  param_1[0xb] = dVar16 + dVar1;
  dVar16 = param_2[0xc];
  if (param_2[0xc] <= param_3[0xc]) {
    dVar16 = param_3[0xc];
  }
  param_1[0xc] = dVar16;
  return param_1;
}



// FUNCTION 148542bc4 FUN_148542bc4 body=143 status=ok
// SIG undefined FUN_148542bc4(void)

void FUN_148542bc4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x68,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x68)) {
      uVar5 = uVar4 / 0x68 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x68,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148542c54 FUN_148542c54 body=62 status=ok
// SIG undefined FUN_148542c54(void)

void FUN_148542c54(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148542c92(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x68,8);
  }
  return;
}



// FUNCTION 148542c92 FUN_148542c92 body=104 status=ok
// SIG undefined FUN_148542c92(void)

ulonglong FUN_148542c92(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x68) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148542cc8;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x68,8);
      param_2 = param_2 / 0x68;
    }
  }
LAB_148542cc8:
  return param_2 & 0xffffffff;
}



// FUNCTION 148542d02 FUN_148542d02 body=720 status=ok
// SIG undefined FUN_148542d02(void)

void FUN_148542d02(undefined8 *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_188 [40];
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  pdVar8 = (double *)*param_1;
  dVar16 = *pdVar8;
  dVar17 = pdVar8[1];
  dVar18 = pdVar8[2];
  dVar19 = pdVar8[3];
  dVar1 = pdVar8[4];
  dVar2 = pdVar8[5];
  dVar3 = pdVar8[6];
  dVar4 = pdVar8[7];
  dVar5 = pdVar8[8];
  dVar6 = pdVar8[9];
  dVar15 = pdVar8[10];
  dVar7 = pdVar8[0xb];
  dVar14 = pdVar8[0xc];
  uVar20 = SUB84(dVar14,0);
  uVar21 = (undefined4)((ulonglong)dVar14 >> 0x20);
  iVar13 = (param_2 + 1) * *(int *)param_1[1];
  if (*(int *)param_1[2] <= iVar13) {
    iVar13 = *(int *)param_1[2];
  }
  iVar12 = *(int *)param_1[1] * param_2;
  if (iVar12 < iVar13) {
    uVar9 = param_1[3];
    do {
      local_160 = (double)CONCAT44(uVar21,uVar20);
      local_158 = dVar7;
      local_150 = dVar6;
      FUN_148542fd4(uVar9,&local_148,iVar12);
      dVar18 = dVar18 + local_138;
      dVar17 = dVar17 + local_140;
      dVar16 = dVar16 + local_148;
      dVar7 = local_158 + local_f0;
      dVar15 = dVar15 + local_f8;
      dVar6 = local_150 + local_100;
      dVar5 = dVar5 + local_108;
      dVar4 = dVar4 + local_110;
      dVar3 = dVar3 + local_118;
      dVar2 = dVar2 + local_120;
      dVar1 = dVar1 + local_128;
      dVar19 = dVar19 + local_130;
      dVar14 = local_e8;
      if (local_e8 <= local_160) {
        dVar14 = local_160;
      }
      iVar12 = iVar12 + 1;
      uVar20 = SUB84(dVar14,0);
      uVar21 = (undefined4)((ulonglong)dVar14 >> 0x20);
    } while (iVar13 != iVar12);
  }
  lVar10 = *(longlong *)param_1[5];
  lVar11 = (longlong)param_2 * 0x68;
  *(double *)(lVar10 + lVar11) = dVar16;
  *(double *)(lVar10 + 8 + lVar11) = dVar17;
  *(double *)(lVar10 + 0x10 + lVar11) = dVar18;
  *(double *)(lVar10 + 0x18 + lVar11) = dVar19;
  *(double *)(lVar10 + 0x20 + lVar11) = dVar1;
  *(double *)(lVar10 + 0x28 + lVar11) = dVar2;
  *(double *)(lVar10 + 0x30 + lVar11) = dVar3;
  *(double *)(lVar10 + 0x38 + lVar11) = dVar4;
  *(double *)(lVar10 + 0x40 + lVar11) = dVar5;
  *(double *)(lVar10 + 0x48 + lVar11) = dVar6;
  *(double *)(lVar10 + 0x50 + lVar11) = dVar15;
  *(double *)(lVar10 + 0x58 + lVar11) = dVar7;
  *(double *)(lVar10 + 0x60 + lVar11) = dVar14;
  if ((local_e0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148542fd4 FUN_148542fd4 body=806 status=ok
// SIG undefined FUN_148542fd4(void)

void FUN_148542fd4(double *param_1,double *param_2,int param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  
  uVar12 = *(uint *)(*(longlong *)param_1[3] + (longlong)param_3 * 4);
  lVar13 = *(longlong *)param_1[4];
  lVar17 = ((longlong *)param_1[4])[2];
  lVar14 = (longlong)(int)uVar12;
  lVar18 = (longlong)*(int *)(lVar17 + lVar14 * 0xc);
  lVar16 = (longlong)*(int *)(lVar17 + 4 + lVar14 * 0xc);
  lVar17 = (longlong)*(int *)(lVar17 + 8 + lVar14 * 0xc);
  dVar1 = *(double *)(lVar13 + lVar18 * 0x18);
  dVar2 = *(double *)(lVar13 + 8 + lVar18 * 0x18);
  dVar3 = *(double *)(lVar13 + 0x10 + lVar18 * 0x18);
  dVar24 = *(double *)(lVar13 + lVar16 * 0x18);
  dVar26 = *(double *)(lVar13 + 8 + lVar16 * 0x18);
  dVar27 = *(double *)(lVar13 + 0x10 + lVar16 * 0x18);
  dVar23 = *(double *)(lVar13 + lVar17 * 0x18);
  dVar25 = *(double *)(lVar13 + 8 + lVar17 * 0x18);
  dVar21 = *(double *)(lVar13 + 0x10 + lVar17 * 0x18);
  dVar22 = param_1[5];
  uVar19 = (ulonglong)(uVar12 >> 9);
  lVar13 = *(longlong *)(*(longlong *)((longlong)dVar22 + 0x20) + uVar19 * 8);
  uVar15 = (ulonglong)((uVar12 & 0x1ff) << 3);
  lVar17 = uVar15 * 3;
  dVar4 = *(double *)(lVar13 + lVar17);
  dVar5 = *(double *)(lVar13 + 8 + lVar17);
  dVar6 = *(double *)(lVar13 + 0x10 + lVar17);
  dVar7 = *(double *)(*(longlong *)(*(longlong *)((longlong)dVar22 + 0x38) + uVar19 * 8) + uVar15);
  lVar13 = *(longlong *)(*(longlong *)((longlong)dVar22 + 8) + uVar19 * 8);
  dVar22 = *(double *)(lVar13 + lVar17);
  dVar8 = *(double *)(lVar13 + 8 + lVar17);
  dVar20 = *(double *)(lVar13 + 0x10 + lVar17);
  *param_2 = dVar4 * dVar7;
  param_2[1] = dVar5 * dVar7;
  param_2[2] = dVar6 * dVar7;
  dVar9 = param_1[2];
  dVar20 = dVar20 - dVar9;
  dVar10 = param_1[1];
  dVar8 = dVar8 - dVar10;
  dVar11 = *param_1;
  dVar22 = dVar22 - dVar11;
  param_2[3] = dVar22 * dVar4 * dVar7;
  param_2[4] = dVar5 * dVar22 * dVar7;
  param_2[5] = dVar6 * dVar22 * dVar7;
  param_2[6] = dVar8 * dVar4 * dVar7;
  param_2[7] = dVar5 * dVar8 * dVar7;
  param_2[8] = dVar6 * dVar8 * dVar7;
  param_2[9] = dVar20 * dVar4 * dVar7;
  param_2[10] = dVar5 * dVar20 * dVar7;
  param_2[0xb] = dVar6 * dVar20 * dVar7;
  dVar23 = dVar11 - dVar23;
  dVar25 = dVar10 - dVar25;
  dVar21 = dVar9 - dVar21;
  dVar23 = dVar21 * dVar21 + dVar23 * dVar23 + dVar25 * dVar25;
  dVar24 = dVar11 - dVar24;
  dVar26 = dVar10 - dVar26;
  dVar27 = dVar9 - dVar27;
  dVar24 = dVar27 * dVar27 + dVar24 * dVar24 + dVar26 * dVar26;
  dVar11 = dVar11 - dVar1;
  dVar10 = dVar10 - dVar2;
  dVar9 = dVar9 - dVar3;
  dVar1 = dVar9 * dVar9 + dVar11 * dVar11 + dVar10 * dVar10;
  if (dVar1 <= dVar24) {
    dVar1 = dVar24;
  }
  if (dVar1 <= dVar23) {
    dVar1 = dVar23;
  }
  param_2[0xc] = dVar1;
  return;
}



// FUNCTION 1485432fa FUN_1485432fa body=311 status=ok
// SIG undefined FUN_1485432fa(void)

undefined4 * FUN_1485432fa(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 *puVar8;
  uint *puVar9;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148543432(param_1,local_50);
  puVar8 = (undefined8 *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_48 = uVar4;
  puVar9 = local_48;
  for (lVar5 = 0x10; puVar9 = puVar9 + 2, lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
  }
  local_48[0x22] = 0xffffffff;
  local_54 = local_50[0];
  cVar2 = FUN_148543520(param_1,uVar4,local_48,&local_54);
  uVar1 = local_54;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar3) {
      uVar6 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_48[0x23] = uVar4;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_48[0x22] =
           *(uint *)(lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_148541918(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148543432 FUN_148543432 body=238 status=ok
// SIG undefined FUN_148543432(void)

int * FUN_148543432(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_140f20a84(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x90);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x90) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x90 + *param_1;
  return param_2;
}



// FUNCTION 148543520 FUN_148543520 body=151 status=ok
// SIG undefined FUN_148543520(void)

undefined8 FUN_148543520(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x90);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x90) == *param_3) {
          memmove(_Dst,param_3,0x88);
          FUN_1485435b8(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x88);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1485435b8 FUN_1485435b8 body=122 status=ok
// SIG undefined FUN_1485435b8(void)

void FUN_1485435b8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x90) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x90) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x90 + 4) = uVar4;
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



// FUNCTION 148543632 FUN_148543632 body=228 status=ok
// SIG undefined FUN_148543632(void)

undefined8 * FUN_148543632(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined1 local_60 [24];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = 0x7fefffffffffffff;
  param_1[1] = 0x7fefffffffffffff;
  param_1[2] = 0x7fefffffffffffff;
  param_1[3] = 0xffefffffffffffff;
  param_1[4] = 0xffefffffffffffff;
  param_1[5] = 0xffefffffffffffff;
  lVar2 = param_2[1];
  if (0 < (longlong)(int)lVar2) {
    lVar4 = 0;
    lVar3 = 0;
    do {
      if (lVar3 < (int)param_2[1]) {
        local_68 = *(undefined8 *)(*param_2 + 0x10 + lVar4);
        puVar1 = (undefined4 *)(*param_2 + lVar4);
        local_78 = *puVar1;
        uStack_74 = puVar1[1];
        uStack_70 = puVar1[2];
        uStack_6c = puVar1[3];
        (*(code *)*param_3)(local_60,param_3[1],&local_78);
        FUN_146ba5262(param_1,local_60);
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x18;
    } while ((longlong)(int)lVar2 * 0x18 != lVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148543718 FUN_148543718 body=795 status=ok
// SIG undefined FUN_148543718(void)

double FUN_148543718(longlong *param_1,uint param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar2 = *param_1;
  uVar14 = *(uint *)(*(longlong *)(*(longlong *)(lVar2 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  uVar9 = *(uint *)(*(longlong *)(*(longlong *)(lVar2 + 0xb8) + (ulonglong)(uVar14 >> 9) * 8) +
                   (ulonglong)(uVar14 & 0x1ff) * 4);
  if ((int)uVar14 < *(int *)(lVar2 + 200)) {
    if ((int)uVar9 < 1) {
      dVar16 = 0.0;
    }
    else {
      dVar16 = 0.0;
      do {
        uVar14 = uVar14 + 1;
        plVar3 = *(longlong **)(*param_1 + 8);
        lVar7 = (longlong)
                *(int *)(*(longlong *)
                          (*(longlong *)(*param_1 + 0xb8) + (ulonglong)(uVar14 >> 9) * 8) +
                        (ulonglong)(uVar14 & 0x1ff) * 4);
        lVar2 = *plVar3;
        lVar8 = plVar3[2];
        lVar12 = (longlong)*(int *)(lVar8 + lVar7 * 0xc);
        lVar13 = (longlong)*(int *)(lVar8 + 4 + lVar7 * 0xc);
        lVar8 = (longlong)*(int *)(lVar8 + 8 + lVar7 * 0xc);
        local_f8 = *(undefined8 *)(lVar2 + 0x10 + lVar12 * 0x18);
        puVar1 = (undefined8 *)(lVar2 + lVar12 * 0x18);
        uVar4 = *puVar1;
        uVar5 = puVar1[1];
        puVar1 = (undefined8 *)(lVar2 + lVar13 * 0x18);
        local_e8 = *puVar1;
        uStack_e0 = puVar1[1];
        local_d8 = *(undefined8 *)(lVar2 + 0x10 + lVar13 * 0x18);
        puVar1 = (undefined8 *)(lVar2 + lVar8 * 0x18);
        local_c8 = *puVar1;
        uStack_c0 = puVar1[1];
        local_b8 = *(undefined8 *)(lVar2 + 0x10 + lVar8 * 0x18);
        local_88._0_4_ = (undefined4)uVar4;
        local_88._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
        uStack_80._0_4_ = (undefined4)uVar5;
        uStack_80._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
        local_108 = (undefined4)local_88;
        uStack_104 = local_88._4_4_;
        uStack_100 = (undefined4)uStack_80;
        uStack_fc = uStack_80._4_4_;
        local_a8 = local_e8;
        uStack_a0 = uStack_e0;
        local_98 = local_d8;
        local_88 = uVar4;
        uStack_80 = uVar5;
        local_78 = local_f8;
        dVar15 = (double)FUN_146bed793(&local_108,&local_e8,&local_c8,param_3);
        dVar16 = dVar16 + dVar15 / 12.566370614359172;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  else {
    if ((int)uVar9 < 0) {
      uVar9 = ~uVar9;
      cVar6 = FUN_148543a34(lVar2,uVar9,param_3);
      if ((cVar6 == '\0') && (cVar6 = FUN_148543b24(param_1,uVar9,param_3), cVar6 != '\0')) {
        dVar15 = (double)FUN_148543bd4(param_1,uVar9,param_3);
      }
      else {
        local_118 = *(undefined8 *)(param_3 + 4);
        local_128 = *param_3;
        uStack_124 = param_3[1];
        uStack_120 = param_3[2];
        uStack_11c = param_3[3];
        dVar15 = (double)FUN_148543718(param_1,uVar9);
      }
      dVar16 = 0.0;
    }
    else {
      iVar10 = uVar9 - 1;
      iVar11 = *(int *)(*(longlong *)
                         (*(longlong *)(lVar2 + 0xb8) + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                       (ulonglong)(uVar14 + 1 & 0x1ff) * 4) + -1;
      cVar6 = FUN_148543a34(lVar2,iVar10,param_3);
      if ((cVar6 == '\0') && (cVar6 = FUN_148543b24(param_1,iVar10,param_3), cVar6 != '\0')) {
        dVar16 = (double)FUN_148543bd4(param_1,iVar10,param_3);
      }
      else {
        local_138 = *(undefined8 *)(param_3 + 4);
        local_148 = *param_3;
        uStack_144 = param_3[1];
        uStack_140 = param_3[2];
        uStack_13c = param_3[3];
        dVar16 = (double)FUN_148543718(param_1,iVar10);
      }
      dVar16 = dVar16 + 0.0;
      cVar6 = FUN_148543a34(*param_1,iVar11,param_3);
      if ((cVar6 == '\0') && (cVar6 = FUN_148543b24(param_1,iVar11,param_3), cVar6 != '\0')) {
        dVar15 = (double)FUN_148543bd4(param_1,iVar11,param_3);
      }
      else {
        local_158 = *(undefined8 *)(param_3 + 4);
        local_168 = *param_3;
        uStack_164 = param_3[1];
        uStack_160 = param_3[2];
        uStack_15c = param_3[3];
        dVar15 = (double)FUN_148543718(param_1,iVar11);
      }
    }
    dVar16 = dVar16 + dVar15;
  }
  if ((local_70 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar16;
}



// FUNCTION 148543a34 FUN_148543a34 body=239 status=ok
// SIG undefined FUN_148543a34(void)

undefined8 FUN_148543a34(longlong param_1,uint param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar6 = *(double *)(param_1 + 0x60);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_2 >> 9) * 8);
  lVar5 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 >> 9) * 8);
  dVar7 = *(double *)(lVar4 + lVar5) + dVar6;
  if (*(double *)(lVar3 + lVar5) - dVar7 <= *param_3) {
    dVar8 = *(double *)(lVar4 + 8 + lVar5) + dVar6;
    dVar1 = *(double *)(lVar3 + 8 + lVar5);
    if (dVar1 - dVar8 <= param_3[1]) {
      dVar6 = dVar6 + *(double *)(lVar4 + 0x10 + lVar5);
      dVar2 = *(double *)(lVar3 + 0x10 + lVar5);
      return CONCAT71((int7)((ulonglong)lVar3 >> 8),
                      (param_3[2] <= dVar6 + dVar2 && dVar2 - dVar6 <= param_3[2]) &
                      -(*param_3 <= dVar7 + *(double *)(lVar3 + lVar5)) &
                      -(param_3[1] <= dVar8 + dVar1));
    }
  }
  return 0;
}



// FUNCTION 148543b24 FUN_148543b24 body=176 status=ok
// SIG undefined FUN_148543b24(void)

undefined8 FUN_148543b24(longlong param_1,uint param_2,double *param_3)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar2 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x48);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 8) + (longlong)iVar1 * 0x90;
        if (*(uint *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 0x90) == param_2) {
          if ((lVar2 + 8U & 0xfffffffffffffff7) == 0) {
            return 0;
          }
          dVar3 = *param_3 - *(double *)(lVar2 + 8);
          dVar4 = param_3[1] - *(double *)(lVar2 + 0x10);
          dVar5 = param_3[2] - *(double *)(lVar2 + 0x18);
          return CONCAT71((int7)((ulonglong)lVar2 >> 8),
                          *(double *)(param_1 + 0x60) * *(double *)(lVar2 + 0x20) <
                          SQRT(dVar5 * dVar5 + dVar3 * dVar3 + dVar4 * dVar4));
        }
        iVar1 = *(int *)(lVar2 + 0x88);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 148543bd4 FUN_148543bd4 body=265 status=ok
// SIG undefined FUN_148543bd4(void)

double FUN_148543bd4(longlong param_1,uint param_2,double *param_3)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar2 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x48);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 8) + (longlong)iVar1 * 0x90;
        if (*(uint *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 0x90) == param_2)
        goto LAB_148543be7;
        iVar1 = *(int *)(lVar2 + 0x88);
      } while (iVar1 != -1);
    }
  }
  lVar2 = 0;
LAB_148543be7:
  if (*(int *)(param_1 + 0x68) == 2) {
    dVar3 = (double)FUN_146bedd25(lVar2 + 8,lVar2 + 0x28,lVar2 + 0x40);
    return dVar3;
  }
  dVar3 = *(double *)(lVar2 + 0x18) - param_3[2];
  dVar4 = *(double *)(lVar2 + 0x10) - param_3[1];
  dVar5 = *(double *)(lVar2 + 8) - *param_3;
  dVar6 = SQRT(dVar3 * dVar3 + dVar5 * dVar5 + dVar4 * dVar4);
  dVar6 = 1.0 / (dVar6 * dVar6 * dVar6);
  return (dVar3 * dVar6 * *(double *)(lVar2 + 0x38) +
         dVar6 * dVar5 * *(double *)(lVar2 + 0x28) + dVar4 * dVar6 * *(double *)(lVar2 + 0x30)) *
         0.07957747154594767;
}



// FUNCTION 148543cdd FUN_148543cdd body=283 status=ok
// SIG undefined FUN_148543cdd(void)

void FUN_148543cdd(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar9 [16];
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(uint *)(param_1 + 1);
  local_80 = param_1;
  auVar9._0_8_ = log((double)(int)uVar2);
  auVar9._8_8_ = extraout_XMM0_Qb;
  if (0 < (int)uVar2) {
    auVar9 = roundsd(auVar9,auVar9,10);
    iVar6 = 1;
    if (1 < (int)auVar9._0_8_) {
      iVar6 = (int)auVar9._0_8_;
    }
    uVar5 = 500;
    if ((uint)(iVar6 * 10) < 500) {
      uVar5 = iVar6 * 10;
    }
    lVar7 = 0;
    uVar8 = 2;
    if (2 < (uint)((ulonglong)uVar2 / (ulonglong)uVar5)) {
      uVar8 = (ulonglong)uVar2 / (ulonglong)uVar5;
    }
    iVar6 = 0;
    do {
      local_68 = *(undefined8 *)(*local_80 + 0x10 + lVar7);
      puVar1 = (undefined8 *)(*local_80 + lVar7);
      local_78 = *puVar1;
      uStack_70 = puVar1[1];
      (*(code *)*param_2)(&local_60,param_2[1],&local_78);
      iVar3 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
        FUN_1403e3958(param_3,iVar3);
      }
      lVar4 = *param_3;
      *(undefined8 *)(lVar4 + 0x10 + (longlong)iVar3 * 0x18) = local_50;
      puVar1 = (undefined8 *)(lVar4 + (longlong)iVar3 * 0x18);
      *puVar1 = local_60;
      puVar1[1] = uStack_58;
      iVar6 = iVar6 + (int)uVar8;
      lVar7 = lVar7 + uVar8 * 0x18;
    } while (iVar6 < (int)uVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148543dfa FUN_148543dfa body=123 status=ok
// SIG undefined FUN_148543dfa(void)

void * FUN_148543dfa(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0xa0);
    if (*(void **)((longlong)param_2 + 0xa0) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0xa8);
    *(int *)((longlong)param_1 + 0xa8) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xac) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xac) = 2;
    }
    else {
      FUN_1482fdec4(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0xa0);
        if (*(void **)((longlong)param_1 + 0xa0) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 * 0x50);
      }
    }
  }
  return param_1;
}



// FUNCTION 148543e76 FUN_148543e76 body=52 status=ok
// SIG undefined FUN_148543e76(void)

void FUN_148543e76(longlong *param_1)

{
  FUN_148543eaa();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148543eaa FUN_148543eaa body=343 status=ok
// SIG undefined FUN_148543eaa(void)

void FUN_148543eaa(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148544002 FUN_148544002 body=52 status=ok
// SIG undefined FUN_148544002(void)

void FUN_148544002(longlong *param_1)

{
  FUN_148544036();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148544036 FUN_148544036 body=89 status=ok
// SIG undefined FUN_148544036(void)

void FUN_148544036(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 148544090 FUN_148544090 body=131 status=ok
// SIG undefined FUN_148544090(void)

void FUN_148544090(int *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  int3 iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar1 = *param_1;
  iVar4 = (int)param_2;
  lVar5 = param_2 >> 0x20;
  iVar3 = (int3)((ulonglong)param_2 >> 8);
  if (iVar1 == 2) {
    plVar2 = *(longlong **)(param_1 + 6);
    *plVar2 = param_2;
    plVar2[4] = (longlong)iVar4;
    plVar2[5] = lVar5;
    FUN_1483b251e(plVar2 + 1,lVar5 * iVar4,CONCAT71((int7)iVar3,1));
    return;
  }
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return;
    }
    plVar2 = *(longlong **)(param_1 + 2);
    *plVar2 = param_2;
    plVar2[4] = (longlong)iVar4;
    plVar2[5] = lVar5;
    FUN_148544114(plVar2 + 1,lVar5 * iVar4,CONCAT71((int7)iVar3,1));
    return;
  }
  plVar2 = *(longlong **)(param_1 + 4);
  *plVar2 = param_2;
  plVar2[4] = (longlong)iVar4;
  plVar2[5] = lVar5;
  FUN_1483b2366(plVar2 + 1,lVar5 * iVar4,CONCAT71((int7)iVar3,1));
  return;
}



// FUNCTION 148544114 FUN_148544114 body=87 status=ok
// SIG undefined FUN_148544114(void)

void FUN_148544114(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 < param_2) {
    *(longlong *)(param_1 + 8) = param_2;
    if ((ulonglong)(*(longlong *)(param_1 + 0x10) - lVar1) < (ulonglong)(param_2 - lVar1)) {
      FUN_1484a3374();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < lVar1) && (*(longlong *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_1484a3402();
      return;
    }
  }
  return;
}



// FUNCTION 14854416c FUN_14854416c body=153 status=ok
// SIG undefined FUN_14854416c(void)

void FUN_14854416c(int *param_1,int *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar3 = *param_1;
  if (iVar3 == 2) {
    uVar4 = param_3[1];
    puVar1 = (undefined8 *)
             ((longlong)*param_2 * 0x10 +
             (longlong)**(int **)(param_1 + 6) * (longlong)param_2[1] * 0x10 +
             *(longlong *)(*(int **)(param_1 + 6) + 2));
    *puVar1 = *param_3;
    puVar1[1] = uVar4;
  }
  else {
    if (iVar3 == 1) {
      uVar2 = *(undefined4 *)(param_3 + 1);
      lVar5 = (longlong)**(int **)(param_1 + 4) * (longlong)param_2[1] * 0xc +
              *(longlong *)(*(int **)(param_1 + 4) + 2);
      iVar3 = *param_2;
      *(undefined8 *)(lVar5 + (longlong)iVar3 * 0xc) = *param_3;
      *(undefined4 *)(lVar5 + 8 + (longlong)iVar3 * 0xc) = uVar2;
      return;
    }
    if (iVar3 == 0) {
      *(undefined4 *)
       ((longlong)**(int **)(param_1 + 2) * (longlong)param_2[1] * 4 +
        *(longlong *)(*(int **)(param_1 + 2) + 2) + (longlong)*param_2 * 4) = *(undefined4 *)param_3
      ;
      return;
    }
  }
  return;
}



// FUNCTION 148544206 FUN_148544206 body=82 status=ok
// SIG undefined FUN_148544206(void)

undefined8 FUN_148544206(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (((*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x84) ==
        *(int *)(param_2 + 0x58) - *(int *)(param_2 + 0x84)) &&
      (*(int *)(param_1 + 0xa8) - *(int *)(param_1 + 0xd4) ==
       *(int *)(param_2 + 0xa8) - *(int *)(param_2 + 0xd4))) &&
     (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34) ==
      *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34))) {
    cVar1 = FUN_1484e701c(param_1 + 0x50,param_2 + 0x50);
    if (cVar1 != '\0') {
      cVar1 = FUN_1484e701c(param_1 + 0xa0,param_2 + 0xa0);
      if (cVar1 != '\0') {
        uVar2 = FUN_1484e701c(param_1,param_2);
        return uVar2;
      }
    }
    return 0;
  }
  return 0;
}



// FUNCTION 148544298 FUN_148544298 body=42 status=ok
// SIG undefined FUN_148544298(void)

void FUN_148544298(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0x30;
  do {
    if (*(longlong *)(param_2 + -0x10 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1485442d8 FUN_1485442d8 body=54 status=ok
// SIG undefined FUN_1485442d8(void)

undefined1 FUN_1485442d8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1485443fe(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 148544336 FUN_148544336 body=59 status=ok
// SIG undefined FUN_148544336(void)

undefined8 FUN_148544336(longlong *param_1)

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



// FUNCTION 14854437c FUN_14854437c body=52 status=ok
// SIG undefined FUN_14854437c(void)

void FUN_14854437c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_2 + 0x48) == '\x01') {
    lVar1 = 0x30;
    do {
      if (*(longlong *)(param_2 + -0x10 + lVar1) != 0) {
        FUN_1400020a8();
      }
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1485443fe FUN_1485443fe body=92 status=ok
// SIG undefined FUN_1485443fe(void)

longlong FUN_1485443fe(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  lVar4 = 0;
  do {
    FUN_144a787a6(param_1 + lVar4,param_2 + lVar4);
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x30);
  uVar1 = *(undefined4 *)(param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  lVar4 = *(longlong *)(param_2 + 0x40);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_2 + 0x40);
    }
  }
  *(longlong *)(param_1 + 0x40) = lVar4;
  return param_1;
}



// FUNCTION 14854445c FUN_14854445c body=48 status=ok
// SIG undefined FUN_14854445c(void)

void FUN_14854445c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x58,8);
  }
  return;
}



// FUNCTION 14854448c FUN_14854448c body=48 status=ok
// SIG undefined FUN_14854448c(void)

void FUN_14854448c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x38,8);
  }
  return;
}



// FUNCTION 1485444bc FUN_1485444bc body=132 status=ok
// SIG undefined FUN_1485444bc(void)

void FUN_1485444bc(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148544542 FUN_148544542 body=58 status=ok
// SIG undefined FUN_148544542(void)

void FUN_148544542(undefined8 param_1,longlong param_2)

{
  if (param_2 == 0) {
    return;
  }
  FUN_14854457c(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(param_2);
  return;
}



// FUNCTION 14854457c FUN_14854457c body=73 status=ok
// SIG undefined FUN_14854457c(void)

void FUN_14854457c(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + lVar2 * 8);
      if (lVar1 != 0) {
        if (*(longlong *)(lVar1 + 0xc0) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 1485445c6 FUN_1485445c6 body=132 status=ok
// SIG undefined FUN_1485445c6(void)

void FUN_1485445c6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14854464c FUN_14854464c body=132 status=ok
// SIG undefined FUN_14854464c(void)

void FUN_14854464c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1485446d2 FUN_1485446d2 body=53 status=ok
// SIG undefined FUN_1485446d2(void)

void FUN_1485446d2(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148544708 FUN_148544708 body=29 status=ok
// SIG undefined FUN_148544708(void)

undefined8 FUN_148544708(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148544726 FUN_148544726 body=343 status=ok
// SIG undefined FUN_148544726(void)

undefined4 * FUN_148544726(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14854487e(param_1,local_40);
  puVar1 = (ulonglong *)param_3[1];
  uVar7 = *(ulonglong *)*param_3;
  *local_38 = uVar7;
  local_38[1] = *puVar1;
  uVar2 = puVar1[1];
  local_38[2] = uVar2;
  if (uVar2 != 0) {
    LOCK();
    *(int *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1;
    UNLOCK();
    uVar7 = *local_38;
  }
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  cVar4 = FUN_148544964(param_1,uVar5,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_38 + 0x1c) = uVar5;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_148544a96(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14854487e FUN_14854487e body=229 status=ok
// SIG undefined FUN_14854487e(void)

int * FUN_14854487e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 148544964 FUN_148544964 body=191 status=ok
// SIG undefined FUN_148544964(void)

undefined8 FUN_148544964(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(puVar3 + 4);
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar8 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
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
          lVar6 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar3 + 4) = param_3[2];
          *puVar3 = (int)lVar6;
          puVar3[1] = uVar4;
          puVar3[2] = (int)lVar7;
          puVar3[3] = uVar5;
          FUN_148544a24(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = puVar3[6];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 148544a24 FUN_148544a24 body=114 status=ok
// SIG undefined FUN_148544a24(void)

void FUN_148544a24(longlong *param_1,int param_2)

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



// FUNCTION 148544a96 FUN_148544a96 body=477 status=ok
// SIG undefined FUN_148544a96(void)

void FUN_148544a96(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
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



// FUNCTION 148544c74 FUN_148544c74 body=132 status=ok
// SIG undefined FUN_148544c74(void)

void FUN_148544c74(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148544cfa FUN_148544cfa body=132 status=ok
// SIG undefined FUN_148544cfa(void)

void FUN_148544cfa(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148544d7f FUN_148544d7f body=53 status=ok
// SIG undefined FUN_148544d7f(void)

void FUN_148544d7f(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0xa0);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148544db4 FUN_148544db4 body=48 status=ok
// SIG undefined FUN_148544db4(void)

void FUN_148544db4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xb0,8);
  }
  return;
}



// FUNCTION 148544de4 FUN_148544de4 body=146 status=ok
// SIG undefined FUN_148544de4(void)

void FUN_148544de4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0xb0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xb0)) {
      uVar5 = uVar4 / 0xb0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xb0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148544e78 FUN_148544e78 body=119 status=ok
// SIG undefined FUN_148544e78(void)

void FUN_148544e78(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148545096(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (iVar1 <= param_2) {
    return;
  }
  FUN_14854511c(param_1,param_2,iVar1 - param_2);
  FUN_148545176(param_1);
  return;
}



// FUNCTION 148544eef FUN_148544eef body=332 status=ok
// SIG undefined FUN_148544eef(void)

void FUN_148544eef(longlong param_1,double *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [16];
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(uint *)(param_1 + 0x50);
  if ((int)uVar1 < 1) {
    dVar6 = -INFINITY;
  }
  else {
    uVar9 = 0xffffffff;
    uVar10 = 0x7fefffff;
    uVar7 = 0xffffffff;
    uVar8 = 0xffefffff;
    uVar4 = 0;
    do {
      if ((int)uVar4 < *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24)) {
        uVar3 = (ulonglong)(uVar4 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar4 >> 9) * 8) +
                               uVar3 * 2) - 1U) < 0xfffe) {
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar4 >> 9) * 8);
          local_68 = *(double *)(lVar2 + 0x10 + uVar3 * 0x18) - param_2[2];
          local_70 = *(double *)(lVar2 + 8 + uVar3 * 0x18) - param_2[1];
          local_78 = *(double *)(lVar2 + uVar3 * 0x18) - *param_2;
          FUN_146bf2028(param_2 + 3,local_90,&local_78);
          dVar6 = local_80;
          if ((double)CONCAT44(uVar10,uVar9) <= local_80) {
            dVar6 = (double)CONCAT44(uVar10,uVar9);
          }
          dVar5 = local_80;
          if (local_80 <= (double)CONCAT44(uVar8,uVar7)) {
            dVar5 = (double)CONCAT44(uVar8,uVar7);
          }
          uVar9 = SUB84(dVar6,0);
          uVar10 = (undefined4)((ulonglong)dVar6 >> 0x20);
          uVar7 = SUB84(dVar5,0);
          uVar8 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
    dVar6 = (double)CONCAT44(uVar8,uVar7) - (double)CONCAT44(uVar10,uVar9);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(-(ulonglong)(0.0 <= dVar6) & (ulonglong)dVar6);
}



// FUNCTION 14854503c FUN_14854503c body=89 status=ok
// SIG undefined FUN_14854503c(void)

void FUN_14854503c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 148545096 FUN_148545096 body=132 status=ok
// SIG undefined FUN_148545096(void)

void FUN_148545096(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14854511c FUN_14854511c body=89 status=ok
// SIG undefined FUN_14854511c(void)

void FUN_14854511c(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_1485451b4(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148545176 FUN_148545176 body=62 status=ok
// SIG undefined FUN_148545176(void)

void FUN_148545176(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1485451e0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1485451b4 FUN_1485451b4 body=43 status=ok
// SIG undefined FUN_1485451b4(void)

void FUN_1485451b4(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1485451e0 FUN_1485451e0 body=93 status=ok
// SIG undefined FUN_1485451e0(void)

ulonglong FUN_1485451e0(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 14854523d FUN_14854523d body=2865 status=ok
// SIG undefined FUN_14854523d(void)

undefined8
FUN_14854523d(longlong param_1,longlong *param_2,longlong param_3,double param_4,double *param_5)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  double *pdVar15;
  double *pdVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  double *pdVar28;
  double *pdVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double *pdVar33;
  double dVar34;
  double dVar35;
  double *pdVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined1 auStack_258 [32];
  double *local_238;
  double *local_228;
  double local_220;
  double local_218;
  double *local_210;
  double *local_208;
  double *local_200;
  double *local_1f8;
  double *local_1f0;
  double local_1e8;
  double *local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  double local_1c0;
  double *local_1b8 [4];
  double *local_198;
  double *pdStack_190;
  double *local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  double *local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  double *local_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  undefined1 *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  lVar22 = *(longlong *)(param_3 + 0xa0);
  if (*(longlong *)(param_3 + 0xa0) == 0) {
    lVar22 = param_3;
  }
  dVar43 = DAT_14c846520;
  dVar40 = DAT_14c846518;
  dVar11 = DAT_14c846510;
  if ((longlong)*(int *)(param_3 + 0xa8) != 0) {
    lVar18 = 0;
    do {
      dVar43 = dVar43 * *(double *)(lVar22 + 0x48 + lVar18);
      dVar40 = dVar40 * *(double *)(lVar22 + 0x40 + lVar18);
      dVar11 = dVar11 * *(double *)(lVar22 + 0x38 + lVar18);
      lVar18 = lVar18 + 0x50;
    } while ((longlong)*(int *)(param_3 + 0xa8) * 0x50 != lVar18);
  }
  lVar22 = param_2[1];
  lVar18 = (longlong)(int)lVar22;
  local_220 = param_4;
  if (lVar18 < 1) {
    pdVar33 = (double *)0xffefffffffffffff;
    uVar25 = 0xffffffff;
    uVar27 = 0x7fefffff;
    pdVar36 = (double *)0x7fefffffffffffff;
    uVar24 = uVar25;
    uVar26 = uVar27;
    pdVar28 = pdVar33;
    pdVar4 = pdVar33;
  }
  else {
    uVar25 = 0xffffffff;
    uVar27 = 0x7fefffff;
    pdVar36 = (double *)0x7fefffffffffffff;
    pdVar33 = (double *)0xffefffffffffffff;
    local_218 = 0.0;
    lVar19 = 0;
    uVar24 = uVar25;
    uVar26 = uVar27;
    pdVar28 = pdVar33;
    pdVar4 = pdVar33;
    do {
      uVar6 = *(uint *)(*param_2 + lVar19 * 4);
      if ((-1 < (int)uVar6) &&
         ((int)uVar6 < *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144))) {
        uVar23 = (ulonglong)(uVar6 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(param_1 + 0x148) + (ulonglong)(uVar6 >> 9) * 8) +
                               uVar23 * 2) - 1U) < 0xfffe) {
          local_1e8 = (double)CONCAT44(uVar26,uVar24);
          local_228 = (double *)CONCAT44(uVar27,uVar25);
          lVar9 = *(longlong *)(param_1 + 0x10);
          lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar6 >> 9) * 8);
          uVar6 = *(uint *)(lVar10 + uVar23 * 0xc);
          lVar7 = *(longlong *)(lVar9 + (ulonglong)(uVar6 >> 9) * 8);
          uVar21 = (ulonglong)uVar6 & 0x1ff;
          pdVar1 = (double *)(lVar7 + uVar21 * 0x18);
          uVar6 = *(uint *)(lVar10 + 4 + uVar23 * 0xc);
          lVar8 = *(longlong *)(lVar9 + (ulonglong)(uVar6 >> 9) * 8);
          uVar20 = (ulonglong)uVar6 & 0x1ff;
          pdVar2 = (double *)(lVar8 + uVar20 * 0x18);
          uVar6 = *(uint *)(lVar10 + 8 + uVar23 * 0xc);
          lVar9 = *(longlong *)(lVar9 + (ulonglong)(uVar6 >> 9) * 8);
          uVar23 = (ulonglong)uVar6 & 0x1ff;
          pdVar3 = (double *)(lVar9 + uVar23 * 0x18);
          local_208 = (double *)(*pdVar1 * dVar11);
          pdVar29 = (double *)(pdVar1[1] * dVar40);
          pdVar14 = (double *)(*(double *)(lVar7 + 0x10 + uVar21 * 0x18) * dVar43);
          local_210 = (double *)(*pdVar2 * dVar11);
          pdVar12 = (double *)(pdVar2[1] * dVar40);
          pdVar13 = (double *)(*(double *)(lVar8 + 0x10 + uVar20 * 0x18) * dVar43);
          pdVar15 = (double *)(*pdVar3 * dVar11);
          pdVar1 = (double *)(pdVar3[1] * dVar40);
          pdVar2 = (double *)(*(double *)(lVar9 + 0x10 + uVar23 * 0x18) * dVar43);
          local_238 = &local_1c0;
          local_200 = pdVar28;
          local_1f8 = pdVar4;
          local_1f0 = pdVar33;
          local_1e0 = pdVar36;
          local_1b8[0] = pdVar15;
          local_1b8[1] = pdVar1;
          local_1b8[2] = pdVar2;
          local_158 = local_210;
          uStack_150 = pdVar12;
          local_148 = pdVar13;
          local_138 = local_208;
          uStack_130 = pdVar29;
          local_128 = pdVar14;
          FUN_146b9cae0(&local_1d8,&local_138,&local_158,local_1b8);
          if (local_218 < local_1c0) {
            local_168 = local_1c8;
            local_178 = local_1d8;
            uStack_170 = uStack_1d0;
            local_198 = local_138;
            pdStack_190 = uStack_130;
            local_188 = local_128;
            local_218 = local_1c0;
          }
          uVar24 = SUB84(local_208,0);
          uVar26 = (undefined4)((ulonglong)local_208 >> 0x20);
          if (local_1e8 <= (double)local_208) {
            uVar24 = SUB84(local_1e8,0);
            uVar26 = (undefined4)((ulonglong)local_1e8 >> 0x20);
          }
          pdVar4 = local_208;
          if ((double)local_208 <= (double)local_1f8) {
            pdVar4 = local_1f8;
          }
          pdVar28 = pdVar29;
          if ((double)local_1e0 <= (double)pdVar29) {
            pdVar28 = local_1e0;
          }
          if ((double)pdVar29 <= (double)local_200) {
            pdVar29 = local_200;
          }
          pdVar33 = pdVar14;
          if ((double)local_228 <= (double)pdVar14) {
            pdVar33 = local_228;
          }
          if ((double)pdVar14 <= (double)local_1f0) {
            pdVar14 = local_1f0;
          }
          pdVar36 = local_210;
          if ((double)CONCAT44(uVar26,uVar24) <= (double)local_210) {
            pdVar36 = (double *)CONCAT44(uVar26,uVar24);
          }
          pdVar3 = local_210;
          if ((double)local_210 <= (double)pdVar4) {
            pdVar3 = pdVar4;
          }
          pdVar16 = pdVar12;
          if ((double)pdVar28 <= (double)pdVar12) {
            pdVar16 = pdVar28;
          }
          if ((double)pdVar12 <= (double)pdVar29) {
            pdVar12 = pdVar29;
          }
          pdVar29 = pdVar13;
          if ((double)pdVar33 <= (double)pdVar13) {
            pdVar29 = pdVar33;
          }
          if ((double)pdVar13 <= (double)pdVar14) {
            pdVar13 = pdVar14;
          }
          uVar24 = SUB84(pdVar15,0);
          uVar26 = (undefined4)((ulonglong)pdVar15 >> 0x20);
          if ((double)pdVar36 <= (double)pdVar15) {
            uVar24 = SUB84(pdVar36,0);
            uVar26 = (undefined4)((ulonglong)pdVar36 >> 0x20);
          }
          pdVar4 = pdVar15;
          if ((double)pdVar15 <= (double)pdVar3) {
            pdVar4 = pdVar3;
          }
          pdVar36 = pdVar1;
          if ((double)pdVar16 <= (double)pdVar1) {
            pdVar36 = pdVar16;
          }
          pdVar28 = pdVar1;
          if ((double)pdVar1 <= (double)pdVar12) {
            pdVar28 = pdVar12;
          }
          uVar25 = SUB84(pdVar2,0);
          uVar27 = (undefined4)((ulonglong)pdVar2 >> 0x20);
          if ((double)pdVar29 <= (double)pdVar2) {
            uVar25 = SUB84(pdVar29,0);
            uVar27 = (undefined4)((ulonglong)pdVar29 >> 0x20);
          }
          pdVar33 = pdVar2;
          if ((double)pdVar2 <= (double)pdVar13) {
            pdVar33 = pdVar13;
          }
        }
      }
      lVar19 = lVar19 + 1;
    } while (lVar18 != lVar19);
  }
  dVar34 = (double)pdVar33 - (double)CONCAT44(uVar27,uVar25);
  dVar30 = (double)pdVar28 - (double)pdVar36;
  dVar42 = (double)pdVar4 - (double)CONCAT44(uVar26,uVar24);
  dVar37 = ABS(dVar42);
  if (ABS(dVar30) <= ABS(dVar42)) {
    dVar37 = ABS(dVar30);
  }
  if (ABS(dVar34) <= dVar37) {
    dVar37 = ABS(dVar34);
  }
  if (local_220 <= dVar37) {
    dStack_120 = 0.0;
    dStack_118 = 0.0;
    dStack_110 = 0.0;
    local_108 = &DAT_3ff0000000000000;
    local_138 = local_198;
    uStack_130 = pdStack_190;
    local_128 = local_188;
    local_148 = (double *)DAT_14c8463c8;
    local_158 = (double *)CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
    uStack_150 = (double *)CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
    FUN_146bfb7f2(&dStack_120,&local_158,&local_178);
    param_5[6] = (double)local_108;
    param_5[4] = dStack_118;
    param_5[5] = dStack_110;
    param_5[2] = (double)local_128;
    param_5[3] = dStack_120;
    *param_5 = (double)local_138;
    param_5[1] = (double)uStack_130;
    if ((int)lVar22 < 1) {
      dVar11 = 0.0;
      dVar40 = 0.0;
      dVar43 = 0.0;
    }
    else {
      local_228 = param_5 + 3;
      uVar24 = 0xffffffff;
      uVar26 = 0x7fefffff;
      dVar30 = -1.79769313486232e+308;
      lVar22 = 0;
      dVar37 = -1.79769313486232e+308;
      dVar42 = -1.79769313486232e+308;
      dVar32 = 1.79769313486232e+308;
      dVar34 = 1.79769313486232e+308;
      do {
        uVar6 = *(uint *)(*param_2 + lVar22 * 4);
        if ((-1 < (int)uVar6) &&
           ((int)uVar6 < *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144))) {
          uVar23 = (ulonglong)(uVar6 & 0x1ff);
          if ((ushort)(*(short *)(*(longlong *)
                                   (*(longlong *)(param_1 + 0x148) + (ulonglong)(uVar6 >> 9) * 8) +
                                 uVar23 * 2) - 1U) < 0xfffe) {
            lVar19 = *(longlong *)(param_1 + 0x10);
            lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar6 >> 9) * 8);
            uVar6 = *(uint *)(lVar9 + uVar23 * 0xc);
            lVar10 = *(longlong *)(lVar19 + (ulonglong)(uVar6 >> 9) * 8);
            uVar21 = (ulonglong)uVar6 & 0x1ff;
            local_128 = *(double **)(lVar10 + 0x10 + uVar21 * 0x18);
            pdVar4 = (double *)(lVar10 + uVar21 * 0x18);
            local_138 = (double *)*pdVar4;
            uStack_130 = (double *)pdVar4[1];
            uVar6 = *(uint *)(lVar9 + 4 + uVar23 * 0xc);
            lVar10 = *(longlong *)(lVar19 + (ulonglong)(uVar6 >> 9) * 8);
            uVar21 = (ulonglong)uVar6 & 0x1ff;
            dStack_110 = *(double *)(lVar10 + 0x10 + uVar21 * 0x18);
            pdVar4 = (double *)(lVar10 + uVar21 * 0x18);
            dStack_120 = *pdVar4;
            dStack_118 = pdVar4[1];
            uVar6 = *(uint *)(lVar9 + 8 + uVar23 * 0xc);
            lVar19 = *(longlong *)(lVar19 + (ulonglong)(uVar6 >> 9) * 8);
            uVar23 = (ulonglong)uVar6 & 0x1ff;
            local_f8 = *(undefined8 *)(lVar19 + 0x10 + uVar23 * 0x18);
            puVar5 = (undefined8 *)(lVar19 + uVar23 * 0x18);
            local_108 = (undefined1 *)*puVar5;
            uStack_100 = puVar5[1];
            lVar19 = 0;
            uVar25 = uVar24;
            uVar27 = uVar26;
            dVar35 = dVar34;
            dVar38 = dVar30;
            dVar39 = dVar37;
            dVar31 = dVar32;
            dVar41 = dVar42;
            do {
              local_148 = (double *)
                          (*(double *)((longlong)&local_128 + lVar19) * dVar43 - param_5[2]);
              uStack_150 = (double *)
                           (*(double *)((longlong)&uStack_130 + lVar19) * dVar40 - param_5[1]);
              local_158 = (double *)(*(double *)((longlong)&local_138 + lVar19) * dVar11 - *param_5)
              ;
              FUN_146bf2028(local_228,local_1b8,&local_158);
              *(double **)((longlong)&local_128 + lVar19) = local_1b8[2];
              *(double **)((longlong)&local_138 + lVar19) = local_1b8[0];
              *(double **)((longlong)&uStack_130 + lVar19) = local_1b8[1];
              dVar42 = *(double *)((longlong)&local_138 + lVar19);
              dVar37 = *(double *)((longlong)&uStack_130 + lVar19);
              dVar34 = dVar42;
              if (dVar35 <= dVar42) {
                dVar34 = dVar35;
              }
              if (dVar42 <= dVar41) {
                dVar42 = dVar41;
              }
              dVar32 = dVar37;
              if (dVar31 <= dVar37) {
                dVar32 = dVar31;
              }
              if (dVar37 <= dVar39) {
                dVar37 = dVar39;
              }
              dVar30 = *(double *)((longlong)&local_128 + lVar19);
              uVar24 = SUB84(dVar30,0);
              uVar26 = (int)((ulonglong)dVar30 >> 0x20);
              if ((double)CONCAT44(uVar27,uVar25) <= dVar30) {
                uVar24 = uVar25;
                uVar26 = uVar27;
              }
              if (dVar30 <= dVar38) {
                dVar30 = dVar38;
              }
              lVar19 = lVar19 + 0x18;
              uVar25 = uVar24;
              uVar27 = uVar26;
              dVar35 = dVar34;
              dVar38 = dVar30;
              dVar39 = dVar37;
              dVar31 = dVar32;
              dVar41 = dVar42;
            } while (lVar19 != 0x48);
          }
        }
        dVar35 = dVar30 - (double)CONCAT44(uVar26,uVar24);
        if (local_220 < (double)(-(ulonglong)(0.0 <= dVar35) & (ulonglong)dVar35)) {
          uVar17 = 0;
          goto LAB_148545868;
        }
        lVar22 = lVar22 + 1;
      } while (lVar22 != lVar18);
      dVar11 = ((double)CONCAT44(uVar26,uVar24) + dVar30) * 0.5;
      dVar40 = (dVar32 + dVar37) * 0.5;
      dVar43 = (dVar34 + dVar42) * 0.5;
    }
    dVar42 = param_5[3];
    dVar37 = param_5[4];
    dVar30 = param_5[5];
    dVar39 = dVar30 + dVar30;
    dVar35 = dVar37 + dVar37;
    dVar34 = param_5[6];
    local_228 = (double *)(dVar37 * dVar35);
    dVar38 = dVar34 * (dVar42 + dVar42);
    dVar32 = (dVar42 + dVar42) * dVar42;
    *param_5 = (dVar39 * dVar42 + dVar35 * dVar34) * dVar11 +
               (dVar35 * dVar42 - dVar39 * dVar34) * dVar40 +
               (1.0 - ((double)local_228 + dVar30 * dVar39)) * dVar43 + *param_5;
    param_5[1] = (dVar39 * dVar37 - dVar38) * dVar11 +
                 (1.0 - (dVar30 * dVar39 + dVar32)) * dVar40 +
                 (dVar39 * dVar34 + dVar35 * dVar42) * dVar43 + param_5[1];
    param_5[2] = (1.0 - (dVar32 + (double)local_228)) * dVar11 +
                 (dVar39 * dVar37 + dVar38) * dVar40 + (dVar39 * dVar42 - dVar35 * dVar34) * dVar43
                 + param_5[2];
  }
  else {
    uVar23 = -(ulonglong)(-dVar34 <= dVar34);
    dVar43 = (double)(uVar23 & (ulonglong)dVar34 | ~uVar23 & (ulonglong)-dVar34);
    uVar23 = -(ulonglong)(-dVar30 <= dVar30);
    dVar40 = (double)(uVar23 & (ulonglong)dVar30 | ~uVar23 & (ulonglong)-dVar30);
    uVar23 = -(ulonglong)(-dVar42 <= dVar42);
    dVar11 = (double)(uVar23 & (ulonglong)dVar42 | ~uVar23 & (ulonglong)-dVar42);
    local_1b8[2] = DAT_14c8464f0;
    local_1b8[0] = DAT_14c8464e0;
    local_1b8[1] = DAT_14c8464e8;
    uVar6 = (uint)(dVar43 < dVar11) * 2;
    if (dVar40 < dVar11) {
      uVar6 = (dVar43 < dVar40) + 1;
    }
    local_1b8[uVar6] = (double *)0x3ff0000000000000;
    local_128 = (double *)(((double)CONCAT44(uVar27,uVar25) + (double)pdVar33) * 0.5);
    uStack_130 = (double *)(((double)pdVar36 + (double)pdVar28) * 0.5);
    local_138 = (double *)(((double)CONCAT44(uVar26,uVar24) + (double)pdVar4) * 0.5);
    dStack_120 = 0.0;
    dStack_118 = 0.0;
    dStack_110 = 0.0;
    local_108 = &DAT_3ff0000000000000;
    local_148 = (double *)DAT_14c8463c8;
    local_158 = (double *)CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
    uStack_150 = (double *)CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
    FUN_146bfb7f2(&dStack_120);
    param_5[6] = (double)local_108;
    param_5[4] = dStack_118;
    param_5[5] = dStack_110;
    param_5[2] = (double)local_128;
    param_5[3] = dStack_120;
    *(undefined4 *)param_5 = (undefined4)local_138;
    *(undefined4 *)((longlong)param_5 + 4) = local_138._4_4_;
    *(undefined4 *)(param_5 + 1) = (undefined4)uStack_130;
    *(undefined4 *)((longlong)param_5 + 0xc) = uStack_130._4_4_;
  }
  uVar17 = 1;
LAB_148545868:
  if ((local_f0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17;
}



// FUNCTION 148545d70 FUN_148545d70 body=125 status=ok
// SIG undefined FUN_148545d70(void)

undefined8 * FUN_148545d70(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 1;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_14af177e0;
  FUN_1411b354a(param_1 + 6,0,0,0,0);
  FUN_146bfe9b8(param_1 + 0x4a);
  param_1[0x6e] = 0;
  FUN_146c00942(param_1 + 6,param_2);
  return param_1;
}



// FUNCTION 148545dee FUN_148545dee body=76 status=ok
// SIG undefined FUN_148545dee(void)

undefined8 * FUN_148545dee(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14af177e0;
  FUN_1485410e2(param_1[0x6e]);
  FUN_14854108e(param_1 + 0x4a);
  FUN_141082778(param_1 + 6);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148545e42 FUN_148545e42 body=221 status=ok
// SIG undefined FUN_148545e42(void)

double * FUN_148545e42(longlong param_1,double *param_2,undefined8 *param_3)

{
  double dVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_29;
  undefined1 *local_28;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    local_20 = &local_29;
    local_28 = &LAB_148546dca;
  }
  else {
    local_40 = *param_3;
    local_38 = param_3[1];
  }
  FUN_148543632(param_2,param_1 + 0x250);
  if (*(char *)(param_1 + 0x1a) == '\x01') {
    dVar1 = *(double *)(param_1 + 0x20);
    param_2[3] = param_2[3] + dVar1;
    param_2[4] = param_2[4] + dVar1;
    param_2[5] = param_2[5] + dVar1;
    *param_2 = *param_2 - dVar1;
    param_2[1] = param_2[1] - dVar1;
    param_2[2] = param_2[2] - dVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148545f20 FUN_148545f20 body=1184 status=ok
// SIG undefined FUN_148545f20(void)

void FUN_148545f20(longlong param_1,undefined4 *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong **pplVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  double dVar12;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  longlong local_1d8;
  undefined1 local_1d0 [8];
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  longlong local_1b8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong local_198;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong local_158;
  longlong *local_150 [3];
  longlong local_138 [12];
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if (*(char *)(param_1 + 0x1a) != '\x01') {
    plVar1 = *(longlong **)(param_1 + 0x370);
    if (*(char *)(param_1 + 0x18) == '\x01') {
      FUN_1485411ae(plVar1,0);
      local_158 = *(longlong *)(param_2 + 4);
      local_168 = *param_2;
      uStack_164 = param_2[1];
      uStack_160 = param_2[2];
      uStack_15c = param_2[3];
    }
    else {
      local_1d8 = *(longlong *)(param_2 + 4);
      local_1e8 = *param_2;
      uStack_1e4 = param_2[1];
      uStack_1e0 = param_2[2];
      uStack_1dc = param_2[3];
      lVar9 = (longlong)*(int *)(param_3 + 0xa8);
      if (0 < lVar9) {
        uVar10 = lVar9 + 1;
        lVar9 = lVar9 * 0x50;
        do {
          lVar9 = lVar9 + -0x50;
          lVar3 = *(longlong *)(param_3 + 0xa0);
          if (*(longlong *)(param_3 + 0xa0) == 0) {
            lVar3 = param_3;
          }
          FUN_146ba22f0(lVar3 + lVar9,&local_168,&local_1e8);
          local_1d8 = local_158;
          local_1e8 = local_168;
          uStack_1e4 = uStack_164;
          uStack_1e0 = uStack_160;
          uStack_1dc = uStack_15c;
          uVar10 = uVar10 - 1;
        } while (1 < uVar10);
      }
      local_88 = local_1d8;
      local_98 = CONCAT44(uStack_1e4,local_1e8);
      uStack_90 = CONCAT44(uStack_1dc,uStack_1e0);
      FUN_1485411ae(plVar1,0);
      local_158 = local_88;
      local_168 = (undefined4)local_98;
      uStack_164 = local_98._4_4_;
      uStack_160 = (undefined4)uStack_90;
      uStack_15c = uStack_90._4_4_;
    }
    uVar11 = FUN_148543718(plVar1,*(undefined4 *)(*plVar1 + 0xcc));
    goto LAB_148545f72;
  }
  if (*(char *)(param_1 + 0x28) == '\x01') {
    plVar1 = *(longlong **)(param_1 + 0x370);
    if (*(char *)(param_1 + 0x18) == '\x01') {
      FUN_1485411ae(plVar1,0);
      local_158 = *(longlong *)(param_2 + 4);
      local_168 = *param_2;
      uStack_164 = param_2[1];
      uStack_160 = param_2[2];
      uStack_15c = param_2[3];
    }
    else {
      local_178 = *(longlong *)(param_2 + 4);
      local_188 = *param_2;
      uStack_184 = param_2[1];
      uStack_180 = param_2[2];
      uStack_17c = param_2[3];
      lVar9 = (longlong)*(int *)(param_3 + 0xa8);
      if (0 < lVar9) {
        uVar10 = lVar9 + 1;
        lVar9 = lVar9 * 0x50;
        do {
          lVar9 = lVar9 + -0x50;
          lVar3 = *(longlong *)(param_3 + 0xa0);
          if (*(longlong *)(param_3 + 0xa0) == 0) {
            lVar3 = param_3;
          }
          FUN_146ba22f0(lVar3 + lVar9,&local_168,&local_188);
          local_178 = local_158;
          local_188 = local_168;
          uStack_184 = uStack_164;
          uStack_180 = uStack_160;
          uStack_17c = uStack_15c;
          uVar10 = uVar10 - 1;
        } while (1 < uVar10);
      }
      local_88 = local_178;
      local_98 = CONCAT44(uStack_184,local_188);
      uStack_90 = CONCAT44(uStack_17c,uStack_180);
      FUN_1485411ae(plVar1,0);
      local_158 = local_88;
      local_168 = (undefined4)local_98;
      uStack_164 = local_98._4_4_;
      uStack_160 = (undefined4)uStack_90;
      uStack_15c = uStack_90._4_4_;
    }
    dVar12 = (double)FUN_148543718(plVar1,*(undefined4 *)(*plVar1 + 0xcc));
    if (dVar12 <= 0.99) goto LAB_148545f5a;
LAB_1485462f7:
    uVar11 = 0;
  }
  else {
LAB_148545f5a:
    if (*(char *)(param_1 + 0x18) == '\0') {
      uVar11 = 0;
      if (*(char *)(param_1 + 0x19) == '\0') goto LAB_148545f72;
      local_1b8 = *(longlong *)(param_2 + 4);
      local_1c8 = *param_2;
      uStack_1c4 = param_2[1];
      uStack_1c0 = param_2[2];
      uStack_1bc = param_2[3];
      lVar9 = (longlong)*(int *)(param_3 + 0xa8);
      if (0 < lVar9) {
        uVar10 = lVar9 + 1;
        lVar9 = lVar9 * 0x50;
        do {
          lVar9 = lVar9 + -0x50;
          lVar3 = *(longlong *)(param_3 + 0xa0);
          if (*(longlong *)(param_3 + 0xa0) == 0) {
            lVar3 = param_3;
          }
          FUN_146ba22f0(lVar3 + lVar9,&local_168,&local_1c8);
          local_1b8 = local_158;
          local_1c8 = local_168;
          uStack_1c4 = uStack_164;
          uStack_1c0 = uStack_160;
          uStack_1bc = uStack_15c;
          uVar10 = uVar10 - 1;
        } while (1 < uVar10);
      }
      local_198 = local_1b8;
      local_1a8 = local_1c8;
      uStack_1a4 = uStack_1c4;
      uStack_1a0 = uStack_1c0;
      uStack_19c = uStack_1bc;
    }
    else {
      local_198 = *(longlong *)(param_2 + 4);
      local_1a8 = *param_2;
      uStack_1a4 = param_2[1];
      uStack_1a0 = param_2[2];
      uStack_19c = param_2[3];
    }
    local_d8 = 0;
    local_c8 = 0;
    FUN_146bee698(&local_168,*(undefined8 *)(param_1 + 0x20));
    iVar2 = FUN_146bfec34(param_1 + 0x250,&local_1a8,local_1d0,&local_168);
    if (local_158 != 0) {
      if (local_150[1] == (longlong *)0x0) {
        local_150[1] = local_138;
      }
      (**(code **)(*local_150[1] + 0x10))();
    }
    if (iVar2 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x250);
      lVar3 = *(longlong *)(param_1 + 0x260);
      lVar4 = (longlong)iVar2;
      lVar7 = (longlong)*(int *)(lVar3 + lVar4 * 0xc);
      lVar8 = (longlong)*(int *)(lVar3 + 4 + lVar4 * 0xc);
      lVar3 = (longlong)*(int *)(lVar3 + 8 + lVar4 * 0xc);
      local_88 = *(longlong *)(lVar9 + 0x10 + lVar7 * 0x18);
      puVar5 = (undefined8 *)(lVar9 + lVar7 * 0x18);
      local_98 = *puVar5;
      uStack_90 = puVar5[1];
      local_70 = *(undefined8 *)(lVar9 + 0x10 + lVar8 * 0x18);
      puVar5 = (undefined8 *)(lVar9 + lVar8 * 0x18);
      local_80 = *puVar5;
      uStack_78 = puVar5[1];
      local_58 = *(undefined8 *)(lVar9 + 0x10 + lVar3 * 0x18);
      puVar5 = (undefined8 *)(lVar9 + lVar3 * 0x18);
      local_68 = *puVar5;
      uStack_60 = puVar5[1];
      local_158 = local_198;
      local_168 = local_1a8;
      uStack_164 = uStack_1a4;
      uStack_160 = uStack_1a0;
      uStack_15c = uStack_19c;
      puVar5 = &local_98;
      pplVar6 = local_150;
      for (lVar9 = 9; lVar9 != 0; lVar9 = lVar9 + -1) {
        *pplVar6 = (longlong *)*puVar5;
        puVar5 = puVar5 + 1;
        pplVar6 = pplVar6 + 1;
      }
      FUN_146bd2a7a(&local_168);
      dVar12 = (double)FUN_146bd2a7a(&local_168);
      if (dVar12 < *(double *)(param_1 + 0x20) * *(double *)(param_1 + 0x20)) goto LAB_1485462f7;
    }
    uVar11 = 0;
  }
LAB_148545f72:
  if ((local_48 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(uVar11);
  }
  return;
}



// FUNCTION 1485463c2 FUN_1485463c2 body=1191 status=ok
// SIG undefined FUN_1485463c2(void)

undefined4 FUN_1485463c2(longlong param_1,double *param_2,longlong param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_198 [32];
  undefined4 *local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined4 local_154;
  double local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_108 = *param_2;
  dStack_100 = param_2[1];
  local_f8 = param_2[2];
  dStack_f0 = param_2[3];
  local_e8 = param_2[4];
  dStack_e0 = param_2[5];
  if (*(char *)(param_1 + 0x18) == '\0') {
    local_118 = param_2[2];
    local_128 = *(undefined4 *)param_2;
    uStack_124 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_120 = *(undefined4 *)(param_2 + 1);
    uStack_11c = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar5 = *(uint *)(param_3 + 0xa8);
    lVar7 = (longlong)(int)uVar5;
    if (0 < lVar7) {
      uVar6 = lVar7 + 1;
      lVar7 = lVar7 * 0x50;
      do {
        lVar7 = lVar7 + -0x50;
        lVar4 = *(longlong *)(param_3 + 0xa0);
        if (*(longlong *)(param_3 + 0xa0) == 0) {
          lVar4 = param_3;
        }
        FUN_146ba22f0(lVar4 + lVar7,&local_b8,&local_128);
        local_118 = local_a8;
        local_128 = local_b8;
        uStack_124 = uStack_b4;
        uStack_120 = uStack_b0;
        uStack_11c = uStack_ac;
        uVar6 = uVar6 - 1;
      } while (1 < uVar6);
      uVar5 = *(uint *)(param_3 + 0xa8);
    }
    dVar9 = local_118;
    dVar1 = (double)CONCAT44(uStack_124,local_128);
    dVar8 = (double)CONCAT44(uStack_11c,uStack_120);
    local_138 = param_2[5] + param_2[2];
    uStack_140 = param_2[4] + param_2[1];
    local_148 = param_2[3] + *param_2;
    if (0 < (int)uVar5) {
      uVar6 = (ulonglong)uVar5 + 1;
      lVar7 = (ulonglong)uVar5 * 0x50;
      do {
        lVar7 = lVar7 + -0x50;
        lVar4 = *(longlong *)(param_3 + 0xa0);
        if (*(longlong *)(param_3 + 0xa0) == 0) {
          lVar4 = param_3;
        }
        FUN_146ba22f0(lVar4 + lVar7,&local_b8,&local_148);
        local_138 = local_a8;
        local_148 = (double)CONCAT44(uStack_b4,local_b8);
        uStack_140 = (double)CONCAT44(uStack_ac,uStack_b0);
        uVar6 = uVar6 - 1;
      } while (1 < uVar6);
    }
    dStack_e0 = local_138 - dVar9;
    dVar10 = uStack_140 - dVar8;
    dVar12 = local_148 - dVar1;
    dVar2 = SQRT(dStack_e0 * dStack_e0 + dVar12 * dVar12 + dVar10 * dVar10);
    local_e8 = 0.0;
    dVar11 = 1.0 / dVar2;
    dStack_f0 = (double)(-(ulonglong)(0.0 < dVar2) & (ulonglong)(dVar12 * dVar11));
    if (0.0 < dVar2) {
      dStack_e0 = dStack_e0 * dVar11;
      local_e8 = dVar10 * dVar11;
    }
    else {
      dStack_e0 = 0.0;
    }
    dVar11 = dStack_e0 * dStack_e0 + dStack_f0 * dStack_f0 + local_e8 * local_e8;
    if (9.99999993922529e-09 < dVar11) {
      dVar11 = 1.0 / SQRT(dVar11);
      dStack_f0 = dStack_f0 * dVar11;
      local_e8 = local_e8 * dVar11;
      dStack_e0 = dStack_e0 * dVar11;
    }
    local_f8 = dVar9;
    local_108 = dVar1;
    dStack_100 = dVar8;
  }
  local_178 = &local_170;
  uVar3 = FUN_146bfeafa(param_1 + 0x250,&local_108,&local_150,&local_154);
  if ((char)uVar3 != '\0') {
    *(undefined4 *)(param_4 + 0x4c) = local_154;
    *(longlong *)(param_4 + 0x68) = param_1;
    if (*(char *)(param_1 + 0x18) == '\0') {
      dVar8 = dStack_e0 * local_150 + local_f8;
      dVar9 = local_e8 * local_150 + dStack_100;
      dVar1 = local_150 * dStack_f0 + local_108;
      lVar7 = *(longlong *)(param_3 + 0xa0);
      if (*(longlong *)(param_3 + 0xa0) == 0) {
        lVar7 = param_3;
      }
      if ((longlong)*(int *)(param_3 + 0xa8) != 0) {
        lVar4 = (longlong)*(int *)(param_3 + 0xa8) * 0x50;
        do {
          local_c0 = dVar8 * *(double *)(lVar7 + 0x48);
          local_c8 = dVar9 * *(double *)(lVar7 + 0x40);
          local_d0 = dVar1 * *(double *)(lVar7 + 0x38);
          FUN_146bed047(&local_b8,lVar7,&local_d0);
          dVar8 = local_a8 + *(double *)(lVar7 + 0x30);
          dVar9 = (double)CONCAT44(uStack_ac,uStack_b0) + *(double *)(lVar7 + 0x28);
          dVar1 = (double)CONCAT44(uStack_b4,local_b8) + *(double *)(lVar7 + 0x20);
          lVar7 = lVar7 + 0x50;
          lVar4 = lVar4 + -0x50;
        } while (lVar4 != 0);
      }
      local_150 = (dVar1 - *param_2) * param_2[3] + (dVar9 - param_2[1]) * param_2[4] +
                  (dVar8 - param_2[2]) * param_2[5];
    }
    *(double *)(param_4 + 0x30) = local_150;
    *(undefined4 *)(param_4 + 0x50) = local_170;
    *(undefined4 *)(param_4 + 0x54) = uStack_16c;
    *(undefined4 *)(param_4 + 0x58) = uStack_168;
    *(undefined4 *)(param_4 + 0x5c) = uStack_164;
    *(undefined8 *)(param_4 + 0x60) = local_160;
  }
  if ((local_a0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14854686a FUN_14854686a body=115 status=ok
// SIG undefined FUN_14854686a(void)

void FUN_14854686a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 **ppuVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  undefined1 local_19;
  undefined1 *local_18;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    local_10 = &local_19;
    ppuVar1 = &local_18;
    local_18 = &LAB_148546dde;
  }
  else {
    local_30 = (undefined1 *)*param_3;
    ppuVar1 = &local_30;
    local_28 = param_3[1];
  }
  FUN_148543cdd(param_1 + 0x250,ppuVar1,param_2);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485468de FUN_1485468de body=426 status=ok
// SIG undefined FUN_1485468de(void)

undefined8 FUN_1485468de(longlong param_1,undefined8 *param_2,longlong param_3)

{
  double *pdVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_a8 [40];
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double dStack_60;
  double local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar2 = *(int *)(param_1 + 600);
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (0 < iVar2) {
      lVar5 = 0;
      do {
        lVar6 = *(longlong *)(param_1 + 0x250);
        dVar8 = *(double *)(lVar6 + lVar5 * 0x18);
        dVar9 = *(double *)(lVar6 + 8 + lVar5 * 0x18);
        dVar7 = *(double *)(lVar6 + 0x10 + lVar5 * 0x18);
        lVar6 = *(longlong *)(param_3 + 0xa0);
        if (*(longlong *)(param_3 + 0xa0) == 0) {
          lVar6 = param_3;
        }
        if ((longlong)*(int *)(param_3 + 0xa8) != 0) {
          lVar4 = (longlong)*(int *)(param_3 + 0xa8) * 0x50;
          do {
            local_70 = dVar7 * *(double *)(lVar6 + 0x48);
            local_78 = dVar9 * *(double *)(lVar6 + 0x40);
            local_80 = dVar8 * *(double *)(lVar6 + 0x38);
            FUN_146bed047(&local_68,lVar6,&local_80);
            dVar7 = local_58 + *(double *)(lVar6 + 0x30);
            dVar9 = dStack_60 + *(double *)(lVar6 + 0x28);
            dVar8 = local_68 + *(double *)(lVar6 + 0x20);
            lVar6 = lVar6 + 0x50;
            lVar4 = lVar4 + -0x50;
          } while (lVar4 != 0);
        }
        local_68 = dVar8;
        dStack_60 = dVar9;
        local_58 = dVar7;
        uVar3 = (*(code *)*param_2)(param_2[1],&local_68);
      } while (((char)uVar3 != '\0') && (lVar5 = lVar5 + 1, lVar5 < *(int *)(param_1 + 600)));
      goto LAB_148546a61;
    }
  }
  else if (0 < iVar2) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      local_58 = *(double *)(*(longlong *)(param_1 + 0x250) + 0x10 + lVar5);
      pdVar1 = (double *)(*(longlong *)(param_1 + 0x250) + lVar5);
      local_68 = *pdVar1;
      dStack_60 = pdVar1[1];
      uVar3 = (*(code *)*param_2)(param_2[1],&local_68);
      if ((char)uVar3 == '\0') break;
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x18;
    } while (lVar6 < *(int *)(param_1 + 600));
    goto LAB_148546a61;
  }
  uVar3 = CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
LAB_148546a61:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 148546a8a FUN_148546a8a body=736 status=ok
// SIG undefined FUN_148546a8a(void)

void FUN_148546a8a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 auStack_5e8 [40];
  undefined8 local_5c0;
  undefined8 local_5b8 [2];
  undefined8 local_5a8;
  undefined **local_598;
  undefined8 local_590;
  undefined8 local_578 [2];
  undefined8 local_568;
  undefined **local_558;
  undefined1 *local_550;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_518;
  undefined4 local_510;
  undefined8 local_50c;
  undefined4 local_504;
  undefined8 local_4f8;
  undefined4 local_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4c8;
  undefined4 local_4c0;
  undefined8 local_4bc;
  undefined4 local_4b4;
  undefined8 local_4a8;
  undefined4 local_4a0;
  undefined2 local_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_470;
  undefined4 local_468;
  undefined8 local_464;
  undefined4 local_45c;
  undefined8 local_450;
  undefined4 local_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_420;
  undefined4 local_418;
  undefined8 local_414;
  undefined4 local_40c;
  undefined8 local_400;
  undefined4 local_3f8;
  undefined2 local_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3c8;
  undefined4 local_3c0;
  undefined8 local_3bc;
  undefined4 local_3b4;
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_378;
  undefined4 local_370;
  undefined8 local_36c;
  undefined4 local_364;
  undefined8 local_358;
  undefined4 local_350;
  undefined1 local_348;
  undefined1 local_347;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_320;
  undefined4 local_318;
  undefined8 local_314;
  undefined4 local_30c;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined8 local_2c4;
  undefined4 local_2bc;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined2 local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_278 [600];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_5e8;
  FUN_148546df2(local_278,param_1 + 0x250);
  local_518 = 0;
  local_510 = 0;
  local_538 = 0;
  uStack_530 = 0;
  local_50c = 0xffffffff00000080;
  local_504 = 0;
  local_4f8 = 0;
  local_4f0 = 0;
  local_4c8 = 0;
  local_4c0 = 0;
  local_4e8 = 0;
  uStack_4e0 = 0;
  local_4bc = 0xffffffff00000080;
  local_4b4 = 0;
  local_4a8 = 0;
  local_4a0 = 0;
  local_498 = 0x101;
  local_470 = 0;
  local_468 = 0;
  local_490 = 0;
  uStack_488 = 0;
  local_464 = 0xffffffff00000080;
  local_45c = 0;
  local_450 = 0;
  local_448 = 0;
  local_420 = 0;
  local_418 = 0;
  local_440 = 0;
  uStack_438 = 0;
  local_414 = 0xffffffff00000080;
  local_40c = 0;
  local_400 = 0;
  local_3f8 = 0;
  local_3f0 = 0x101;
  local_3c8 = 0;
  local_3c0 = 0;
  local_3e8 = 0;
  uStack_3e0 = 0;
  local_3bc = 0xffffffff00000080;
  local_3b4 = 0;
  local_3a8 = 0;
  local_3a0 = 0;
  local_378 = 0;
  local_370 = 0;
  local_398 = 0;
  uStack_390 = 0;
  local_36c = 0xffffffff00000080;
  local_364 = 0;
  local_358 = 0;
  local_350 = 0;
  local_347 = 1;
  local_348 = 1;
  local_320 = 0;
  local_318 = 0;
  local_340 = 0;
  uStack_338 = 0;
  local_314 = 0xffffffff00000080;
  local_30c = 0;
  local_300 = 0;
  local_2f8 = 0;
  local_2d0 = 0;
  local_2c8 = 0;
  local_2f0 = 0;
  uStack_2e8 = 0;
  local_2c4 = 0xffffffff00000080;
  local_2bc = 0;
  local_2b0 = 0;
  local_2a8 = 0;
  local_2a0 = 0x101;
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    puVar2 = local_578;
    local_568 = 0;
    local_558 = &PTR_LAB_14af17980;
    local_550 = &LAB_148547abe;
    pcVar1 = FUN_148547ad2;
  }
  else {
    puVar2 = local_5b8;
    local_5a8 = 0;
    local_598 = &PTR_LAB_14af179a0;
    pcVar1 = FUN_148547b36;
    local_590 = param_3;
  }
  *puVar2 = pcVar1;
  local_5c0 = param_2;
  FUN_146bce488(&local_5c0,local_278,&local_538);
  FUN_146bfdcfe(&local_538);
  FUN_148547622(local_278);
  if ((local_20 ^ (ulonglong)auStack_5e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148546df2 FUN_148546df2 body=2094 status=ok
// SIG undefined FUN_148546df2(void)

longlong * FUN_148546df2(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong lStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  longlong local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  param_1[0x30] = 0;
  param_1[0x32] = 0;
  param_1[0x38] = 0;
  param_1[0x3a] = 0;
  param_1[0x40] = 0;
  param_1[0x42] = 0;
  param_1[0x48] = param_2;
  local_a8 = *param_1;
  uStack_60 = param_1[1];
  local_98 = (longlong *)param_1[2];
  uStack_50 = param_1[3];
  local_48 = param_1[4];
  lStack_40 = param_1[5];
  local_38 = param_1[6];
  uStack_30 = param_1[7];
  lVar3 = local_38;
  lVar4 = uStack_30;
  local_58 = local_98;
  lVar2 = uStack_50;
  local_68 = local_a8;
  lVar1 = uStack_60;
  param_1[6] = CONCAT44(uStack_74,local_78);
  param_1[7] = CONCAT44(uStack_6c,uStack_70);
  param_1[4] = (longlong)&PTR_LAB_14af17860;
  param_1[5] = (longlong)param_1;
  param_1[2] = 0;
  param_1[3] = CONCAT44(uStack_8c,uStack_90);
  *param_1 = (longlong)&LAB_148547774;
  param_1[1] = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = local_48;
  lStack_80 = lStack_40;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  if (local_a8 != 0) {
    plVar5 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar5 = &local_88;
    }
    uStack_60 = lVar1;
    uStack_50 = lVar2;
    local_38 = lVar3;
    uStack_30 = lVar4;
    (**(code **)(*plVar5 + 0x10))();
  }
  local_a8 = param_1[8];
  uStack_60 = param_1[9];
  local_98 = (longlong *)param_1[10];
  uStack_50 = param_1[0xb];
  local_48 = param_1[0xc];
  lStack_40 = param_1[0xd];
  local_38 = param_1[0xe];
  uStack_30 = param_1[0xf];
  lVar3 = local_38;
  lVar4 = uStack_30;
  local_58 = local_98;
  lVar2 = uStack_50;
  local_68 = local_a8;
  lVar1 = uStack_60;
  param_1[0xe] = CONCAT44(uStack_74,local_78);
  param_1[0xf] = CONCAT44(uStack_6c,uStack_70);
  param_1[0xc] = (longlong)&PTR_LAB_14af17880;
  param_1[0xd] = (longlong)param_1;
  param_1[10] = 0;
  param_1[0xb] = CONCAT44(uStack_8c,uStack_90);
  param_1[8] = (longlong)&LAB_1485477d6;
  param_1[9] = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = local_48;
  lStack_80 = lStack_40;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  if (local_a8 != 0) {
    plVar5 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar5 = &local_88;
    }
    uStack_60 = lVar1;
    uStack_50 = lVar2;
    local_38 = lVar3;
    uStack_30 = lVar4;
    (**(code **)(*plVar5 + 0x10))();
  }
  local_a8 = param_1[0x10];
  uStack_60 = param_1[0x11];
  local_98 = (longlong *)param_1[0x12];
  uStack_50 = param_1[0x13];
  local_48 = param_1[0x14];
  lStack_40 = param_1[0x15];
  local_38 = param_1[0x16];
  uStack_30 = param_1[0x17];
  lVar3 = local_38;
  lVar4 = uStack_30;
  local_58 = local_98;
  lVar2 = uStack_50;
  local_68 = local_a8;
  lVar1 = uStack_60;
  param_1[0x16] = CONCAT44(uStack_74,local_78);
  param_1[0x17] = CONCAT44(uStack_6c,uStack_70);
  param_1[0x14] = (longlong)&PTR_LAB_14af178a0;
  param_1[0x15] = (longlong)param_1;
  param_1[0x12] = 0;
  param_1[0x13] = CONCAT44(uStack_8c,uStack_90);
  param_1[0x10] = (longlong)&LAB_148547838;
  param_1[0x11] = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = local_48;
  lStack_80 = lStack_40;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  if (local_a8 != 0) {
    plVar5 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar5 = &local_88;
    }
    uStack_60 = lVar1;
    uStack_50 = lVar2;
    local_38 = lVar3;
    uStack_30 = lVar4;
    (**(code **)(*plVar5 + 0x10))();
  }
  local_a8 = param_1[0x18];
  uStack_60 = param_1[0x19];
  local_98 = (longlong *)param_1[0x1a];
  uStack_50 = param_1[0x1b];
  local_48 = param_1[0x1c];
  lStack_40 = param_1[0x1d];
  local_38 = param_1[0x1e];
  uStack_30 = param_1[0x1f];
  lVar3 = local_38;
  lVar4 = uStack_30;
  local_58 = local_98;
  lVar2 = uStack_50;
  local_68 = local_a8;
  lVar1 = uStack_60;
  param_1[0x1e] = CONCAT44(uStack_74,local_78);
  param_1[0x1f] = CONCAT44(uStack_6c,uStack_70);
  param_1[0x1c] = (longlong)&PTR_LAB_14af178c0;
  param_1[0x1d] = (longlong)param_1;
  param_1[0x1a] = 0;
  param_1[0x1b] = CONCAT44(uStack_8c,uStack_90);
  param_1[0x18] = (longlong)&LAB_14854788e;
  param_1[0x19] = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = local_48;
  lStack_80 = lStack_40;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  if (local_a8 != 0) {
    plVar5 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar5 = &local_88;
    }
    uStack_60 = lVar1;
    uStack_50 = lVar2;
    local_38 = lVar3;
    uStack_30 = lVar4;
    (**(code **)(*plVar5 + 0x10))();
  }
  local_a8 = param_1[0x20];
  uStack_60 = param_1[0x21];
  local_98 = (longlong *)param_1[0x22];
  uStack_50 = param_1[0x23];
  local_48 = param_1[0x24];
  lStack_40 = param_1[0x25];
  local_38 = param_1[0x26];
  uStack_30 = param_1[0x27];
  lVar3 = local_38;
  lVar4 = uStack_30;
  local_58 = local_98;
  lVar2 = uStack_50;
  local_68 = local_a8;
  lVar1 = uStack_60;
  param_1[0x26] = CONCAT44(uStack_74,local_78);
  param_1[0x27] = CONCAT44(uStack_6c,uStack_70);
  param_1[0x24] = (longlong)&PTR_LAB_14af178e0;
  param_1[0x25] = (longlong)param_1;
  param_1[0x22] = 0;
  param_1[0x23] = CONCAT44(uStack_8c,uStack_90);
  param_1[0x20] = (longlong)&LAB_1485478e4;
  param_1[0x21] = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = local_48;
  lStack_80 = lStack_40;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  if (local_a8 != 0) {
    plVar5 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar5 = &local_88;
    }
    uStack_60 = lVar1;
    uStack_50 = lVar2;
    local_38 = lVar3;
    uStack_30 = lVar4;
    (**(code **)(*plVar5 + 0x10))();
  }
  local_a8 = param_1[0x28];
  uStack_60 = param_1[0x29];
  local_98 = (longlong *)param_1[0x2a];
  uStack_50 = param_1[0x2b];
  local_48 = param_1[0x2c];
  lStack_40 = param_1[0x2d];
  local_38 = param_1[0x2e];
  uStack_30 = param_1[0x2f];
  lVar3 = local_38;
  lVar4 = uStack_30;
  local_58 = local_98;
  lVar2 = uStack_50;
  local_68 = local_a8;
  lVar1 = uStack_60;
  param_1[0x2e] = CONCAT44(uStack_74,local_78);
  param_1[0x2f] = CONCAT44(uStack_6c,uStack_70);
  param_1[0x2c] = (longlong)&PTR_LAB_14af17900;
  param_1[0x2d] = (longlong)param_1;
  param_1[0x2a] = 0;
  param_1[0x2b] = CONCAT44(uStack_8c,uStack_90);
  param_1[0x28] = (longlong)&LAB_14854793a;
  param_1[0x29] = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = local_48;
  lStack_80 = lStack_40;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  if (local_a8 != 0) {
    plVar5 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar5 = &local_88;
    }
    uStack_60 = lVar1;
    uStack_50 = lVar2;
    local_38 = lVar3;
    uStack_30 = lVar4;
    (**(code **)(*plVar5 + 0x10))();
  }
  local_a8 = param_1[0x30];
  uStack_60 = param_1[0x31];
  local_98 = (longlong *)param_1[0x32];
  uStack_50 = param_1[0x33];
  local_48 = param_1[0x34];
  lStack_40 = param_1[0x35];
  local_38 = param_1[0x36];
  uStack_30 = param_1[0x37];
  lVar3 = local_38;
  lVar4 = uStack_30;
  local_58 = local_98;
  lVar2 = uStack_50;
  local_68 = local_a8;
  lVar1 = uStack_60;
  param_1[0x36] = CONCAT44(uStack_74,local_78);
  param_1[0x37] = CONCAT44(uStack_6c,uStack_70);
  param_1[0x34] = (longlong)&PTR_LAB_14af17920;
  param_1[0x35] = (longlong)param_1;
  param_1[0x32] = 0;
  param_1[0x33] = CONCAT44(uStack_8c,uStack_90);
  param_1[0x30] = (longlong)&LAB_148547990;
  param_1[0x31] = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = local_48;
  lStack_80 = lStack_40;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  if (local_a8 != 0) {
    plVar5 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar5 = &local_88;
    }
    uStack_60 = lVar1;
    uStack_50 = lVar2;
    local_38 = lVar3;
    uStack_30 = lVar4;
    (**(code **)(*plVar5 + 0x10))();
  }
  local_a8 = param_1[0x38];
  uStack_60 = param_1[0x39];
  local_98 = (longlong *)param_1[0x3a];
  uStack_50 = param_1[0x3b];
  local_48 = param_1[0x3c];
  lStack_40 = param_1[0x3d];
  local_38 = param_1[0x3e];
  uStack_30 = param_1[0x3f];
  lVar3 = local_38;
  lVar4 = uStack_30;
  local_58 = local_98;
  lVar2 = uStack_50;
  local_68 = local_a8;
  lVar1 = uStack_60;
  param_1[0x3e] = CONCAT44(uStack_74,local_78);
  param_1[0x3f] = CONCAT44(uStack_6c,uStack_70);
  param_1[0x3c] = (longlong)&PTR_LAB_14af17940;
  param_1[0x3d] = (longlong)param_1;
  param_1[0x3a] = 0;
  param_1[0x3b] = CONCAT44(uStack_8c,uStack_90);
  param_1[0x38] = (longlong)&LAB_1485479dc;
  param_1[0x39] = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = local_48;
  lStack_80 = lStack_40;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  if (local_a8 != 0) {
    plVar5 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar5 = &local_88;
    }
    uStack_60 = lVar1;
    uStack_50 = lVar2;
    local_38 = lVar3;
    uStack_30 = lVar4;
    (**(code **)(*plVar5 + 0x10))();
  }
  local_a8 = param_1[0x40];
  uStack_60 = param_1[0x41];
  local_98 = (longlong *)param_1[0x42];
  uStack_50 = param_1[0x43];
  local_48 = param_1[0x44];
  lStack_40 = param_1[0x45];
  local_38 = param_1[0x46];
  uStack_30 = param_1[0x47];
  lVar3 = local_38;
  lVar4 = uStack_30;
  local_58 = local_98;
  lVar2 = uStack_50;
  local_68 = local_a8;
  lVar1 = uStack_60;
  param_1[0x46] = CONCAT44(uStack_74,local_78);
  param_1[0x47] = CONCAT44(uStack_6c,uStack_70);
  param_1[0x44] = (longlong)&PTR_LAB_14af17960;
  param_1[0x45] = (longlong)param_1;
  param_1[0x42] = 0;
  param_1[0x43] = CONCAT44(uStack_8c,uStack_90);
  param_1[0x40] = (longlong)&LAB_148547a4e;
  param_1[0x41] = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = local_48;
  lStack_80 = lStack_40;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_60 = lVar1;
  uStack_50 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  if (local_a8 != 0) {
    plVar5 = &local_88;
    if (local_98 != (longlong *)0x0) {
      plVar5 = local_98;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148547622 FUN_148547622 body=338 status=ok
// SIG undefined FUN_148547622(void)

void FUN_148547622(longlong *param_1)

{
  longlong *plVar1;
  
  if (param_1[0x40] != 0) {
    plVar1 = param_1 + 0x44;
    if ((longlong *)param_1[0x42] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x42];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x38] != 0) {
    plVar1 = param_1 + 0x3c;
    if ((longlong *)param_1[0x3a] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x3a];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x30] != 0) {
    plVar1 = param_1 + 0x34;
    if ((longlong *)param_1[0x32] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x32];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x28] != 0) {
    plVar1 = param_1 + 0x2c;
    if ((longlong *)param_1[0x2a] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x2a];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x20] != 0) {
    plVar1 = param_1 + 0x24;
    if ((longlong *)param_1[0x22] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x22];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x18] != 0) {
    plVar1 = param_1 + 0x1c;
    if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x1a];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x10] != 0) {
    plVar1 = param_1 + 0x14;
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x12];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[8] != 0) {
    plVar1 = param_1 + 0xc;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[10];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*param_1 != 0) {
    plVar1 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000148547769. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1485477b8 FUN_1485477b8 body=29 status=ok
// SIG undefined FUN_1485477b8(void)

undefined8 FUN_1485477b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14854781a FUN_14854781a body=29 status=ok
// SIG undefined FUN_14854781a(void)

undefined8 FUN_14854781a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148547870 FUN_148547870 body=29 status=ok
// SIG undefined FUN_148547870(void)

undefined8 FUN_148547870(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485478c6 FUN_1485478c6 body=29 status=ok
// SIG undefined FUN_1485478c6(void)

undefined8 FUN_1485478c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14854791c FUN_14854791c body=29 status=ok
// SIG undefined FUN_14854791c(void)

undefined8 FUN_14854791c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148547972 FUN_148547972 body=29 status=ok
// SIG undefined FUN_148547972(void)

undefined8 FUN_148547972(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485479be FUN_1485479be body=29 status=ok
// SIG undefined FUN_1485479be(void)

undefined8 FUN_1485479be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148547a30 FUN_148547a30 body=29 status=ok
// SIG undefined FUN_148547a30(void)

undefined8 FUN_148547a30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148547aa0 FUN_148547aa0 body=29 status=ok
// SIG undefined FUN_148547aa0(void)

undefined8 FUN_148547aa0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148547ad2 FUN_148547ad2 body=28 status=ok
// SIG undefined FUN_148547ad2(void)

undefined8
FUN_148547ad2(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4)

{
  (*(code *)*param_2)(param_1,*param_3,param_4);
  return param_1;
}



// FUNCTION 148547b18 FUN_148547b18 body=29 status=ok
// SIG undefined FUN_148547b18(void)

undefined8 FUN_148547b18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148547b36 FUN_148547b36 body=31 status=ok
// SIG undefined FUN_148547b36(void)

undefined8
FUN_148547b36(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_148547b9e(param_2,param_1,param_4);
  return param_1;
}



// FUNCTION 148547b80 FUN_148547b80 body=29 status=ok
// SIG undefined FUN_148547b80(void)

undefined8 FUN_148547b80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148547b9e FUN_148547b9e body=234 status=ok
// SIG undefined FUN_148547b9e(void)

double * FUN_148547b9e(longlong *param_1,double *param_2,double *param_3)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_1;
  dVar4 = *param_3;
  dVar5 = param_3[1];
  dVar3 = param_3[2];
  lVar1 = *(longlong *)(lVar2 + 0xa0);
  if (*(longlong *)(lVar2 + 0xa0) == 0) {
    lVar1 = lVar2;
  }
  if ((longlong)*(int *)(lVar2 + 0xa8) != 0) {
    lVar2 = (longlong)*(int *)(lVar2 + 0xa8) * 0x50;
    do {
      local_50 = dVar3 * *(double *)(lVar1 + 0x48);
      local_58 = dVar5 * *(double *)(lVar1 + 0x40);
      local_60 = dVar4 * *(double *)(lVar1 + 0x38);
      FUN_146bed047(&local_48,lVar1,&local_60);
      dVar3 = local_38 + *(double *)(lVar1 + 0x30);
      dVar5 = local_40 + *(double *)(lVar1 + 0x28);
      dVar4 = local_48 + *(double *)(lVar1 + 0x20);
      lVar1 = lVar1 + 0x50;
      lVar2 = lVar2 + -0x50;
    } while (lVar2 != 0);
  }
  *param_2 = dVar4;
  param_2[1] = dVar5;
  param_2[2] = dVar3;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148547c8a FUN_148547c8a body=108 status=ok
// SIG undefined FUN_148547c8a(void)

undefined8 * FUN_148547c8a(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 1;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_14af179c0;
  FUN_1411b354a(param_1 + 6,0,0,0,0);
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  FUN_146c00942(param_1 + 6,param_2);
  return param_1;
}



// FUNCTION 148547cf6 FUN_148547cf6 body=38 status=ok
// SIG undefined FUN_148547cf6(void)

undefined8 FUN_148547cf6(undefined8 param_1,int param_2)

{
  FUN_1485490ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148547d24 FUN_148547d24 body=218 status=ok
// SIG undefined FUN_148547d24(void)

double * FUN_148547d24(longlong param_1,double *param_2,undefined8 *param_3)

{
  double dVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_29;
  undefined1 *local_28;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    local_20 = &local_29;
    local_28 = &LAB_148549236;
  }
  else {
    local_40 = *param_3;
    local_38 = param_3[1];
  }
  FUN_148549130(param_2,param_1 + 0x30);
  if (*(char *)(param_1 + 0x1a) == '\x01') {
    dVar1 = *(double *)(param_1 + 0x20);
    param_2[3] = param_2[3] + dVar1;
    param_2[4] = param_2[4] + dVar1;
    param_2[5] = param_2[5] + dVar1;
    *param_2 = *param_2 - dVar1;
    param_2[1] = param_2[1] - dVar1;
    param_2[2] = param_2[2] - dVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148547e00 FUN_148547e00 body=1091 status=ok
// SIG undefined FUN_148547e00(void)

void FUN_148547e00(longlong param_1,undefined4 *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  double dVar7;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  longlong local_1a8;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong local_188;
  undefined1 local_180 [8];
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  longlong *local_f8;
  longlong local_e8 [12];
  undefined8 local_88;
  undefined8 local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (*(char *)(param_1 + 0x1a) != '\x01') {
    plVar1 = *(longlong **)(param_1 + 600);
    if (*(char *)(param_1 + 0x18) == '\x01') {
      FUN_146bef8a8(plVar1,0);
      local_108 = *(longlong *)(param_2 + 4);
      local_118 = *param_2;
      uStack_114 = param_2[1];
      uStack_110 = param_2[2];
      uStack_10c = param_2[3];
    }
    else {
      local_1a8 = *(longlong *)(param_2 + 4);
      local_1b8 = *param_2;
      uStack_1b4 = param_2[1];
      uStack_1b0 = param_2[2];
      uStack_1ac = param_2[3];
      lVar4 = (longlong)*(int *)(param_3 + 0xa8);
      if (0 < lVar4) {
        uVar5 = lVar4 + 1;
        lVar4 = lVar4 * 0x50;
        do {
          lVar4 = lVar4 + -0x50;
          lVar3 = *(longlong *)(param_3 + 0xa0);
          if (*(longlong *)(param_3 + 0xa0) == 0) {
            lVar3 = param_3;
          }
          FUN_146ba22f0(lVar3 + lVar4,&local_118,&local_1b8);
          local_1a8 = local_108;
          local_1b8 = local_118;
          uStack_1b4 = uStack_114;
          uStack_1b0 = uStack_110;
          uStack_1ac = uStack_10c;
          uVar5 = uVar5 - 1;
        } while (1 < uVar5);
      }
      local_128 = local_1a8;
      local_138 = local_1b8;
      uStack_134 = uStack_1b4;
      uStack_130 = uStack_1b0;
      uStack_12c = uStack_1ac;
      FUN_146bef8a8(plVar1,0);
      local_108 = local_128;
      local_118 = local_138;
      uStack_114 = uStack_134;
      uStack_110 = uStack_130;
      uStack_10c = uStack_12c;
    }
    uVar6 = FUN_146bed438(plVar1,*(undefined4 *)(*plVar1 + 0xcc));
    goto LAB_148547e52;
  }
  if (*(char *)(param_1 + 0x28) == '\x01') {
    plVar1 = *(longlong **)(param_1 + 600);
    if (*(char *)(param_1 + 0x18) == '\x01') {
      FUN_146bef8a8(plVar1,0);
      local_108 = *(longlong *)(param_2 + 4);
      local_118 = *param_2;
      uStack_114 = param_2[1];
      uStack_110 = param_2[2];
      uStack_10c = param_2[3];
    }
    else {
      local_148 = *(longlong *)(param_2 + 4);
      local_158 = *param_2;
      uStack_154 = param_2[1];
      uStack_150 = param_2[2];
      uStack_14c = param_2[3];
      lVar4 = (longlong)*(int *)(param_3 + 0xa8);
      if (0 < lVar4) {
        uVar5 = lVar4 + 1;
        lVar4 = lVar4 * 0x50;
        do {
          lVar4 = lVar4 + -0x50;
          lVar3 = *(longlong *)(param_3 + 0xa0);
          if (*(longlong *)(param_3 + 0xa0) == 0) {
            lVar3 = param_3;
          }
          FUN_146ba22f0(lVar3 + lVar4,&local_118,&local_158);
          local_148 = local_108;
          local_158 = local_118;
          uStack_154 = uStack_114;
          uStack_150 = uStack_110;
          uStack_14c = uStack_10c;
          uVar5 = uVar5 - 1;
        } while (1 < uVar5);
      }
      local_128 = local_148;
      local_138 = local_158;
      uStack_134 = uStack_154;
      uStack_130 = uStack_150;
      uStack_12c = uStack_14c;
      FUN_146bef8a8(plVar1,0);
      local_108 = local_128;
      local_118 = local_138;
      uStack_114 = uStack_134;
      uStack_110 = uStack_130;
      uStack_10c = uStack_12c;
    }
    dVar7 = (double)FUN_146bed438(plVar1,*(undefined4 *)(*plVar1 + 0xcc));
    if (dVar7 <= 0.99) goto LAB_148547e3a;
LAB_1485481e4:
    uVar6 = 0;
  }
  else {
LAB_148547e3a:
    if (*(char *)(param_1 + 0x18) == '\0') {
      uVar6 = 0;
      if (*(char *)(param_1 + 0x19) == '\0') goto LAB_148547e52;
      local_168 = *(longlong *)(param_2 + 4);
      local_178 = *param_2;
      uStack_174 = param_2[1];
      uStack_170 = param_2[2];
      uStack_16c = param_2[3];
      lVar4 = (longlong)*(int *)(param_3 + 0xa8);
      if (0 < lVar4) {
        uVar5 = lVar4 + 1;
        lVar4 = lVar4 * 0x50;
        do {
          lVar4 = lVar4 + -0x50;
          lVar3 = *(longlong *)(param_3 + 0xa0);
          if (*(longlong *)(param_3 + 0xa0) == 0) {
            lVar3 = param_3;
          }
          FUN_146ba22f0(lVar3 + lVar4,&local_118,&local_178);
          local_168 = local_108;
          local_178 = local_118;
          uStack_174 = uStack_114;
          uStack_170 = uStack_110;
          uStack_16c = uStack_10c;
          uVar5 = uVar5 - 1;
        } while (1 < uVar5);
      }
      local_128 = local_168;
      local_138 = local_178;
      uStack_134 = uStack_174;
      uStack_130 = uStack_170;
      uStack_12c = uStack_16c;
    }
    else {
      local_128 = *(longlong *)(param_2 + 4);
      local_138 = *param_2;
      uStack_134 = param_2[1];
      uStack_130 = param_2[2];
      uStack_12c = param_2[3];
    }
    plVar1 = *(longlong **)(param_1 + 0x250);
    local_88 = 0;
    local_78 = 0;
    FUN_146bee698(&local_118,*(undefined8 *)(param_1 + 0x20));
    iVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,&local_138,local_180,&local_118);
    if (local_108 != 0) {
      if (local_f8 == (longlong *)0x0) {
        local_f8 = local_e8;
      }
      (**(code **)(*local_f8 + 0x10))();
    }
    if (iVar2 != -1) {
      local_198 = local_138;
      uStack_194 = uStack_134;
      uStack_190 = uStack_130;
      uStack_18c = uStack_12c;
      local_188 = local_128;
      FUN_146bd7ec2(&local_118,param_1 + 0x30,iVar2);
      dVar7 = (double)FUN_146bd2a7a(&local_118);
      if (dVar7 < *(double *)(param_1 + 0x20) * *(double *)(param_1 + 0x20)) goto LAB_1485481e4;
    }
    uVar6 = 0;
  }
LAB_148547e52:
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(uVar6);
  }
  return;
}



// FUNCTION 148548244 FUN_148548244 body=1281 status=ok
// SIG undefined FUN_148548244(void)

undefined4 FUN_148548244(longlong param_1,double *param_2,longlong param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_1f8 [32];
  undefined4 *local_1d8;
  undefined8 *local_1d0;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined4 local_1a4;
  double local_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  double local_168;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_120;
  double local_118;
  double local_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  longlong *local_e8;
  longlong local_d8 [4];
  undefined1 local_b8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_158 = *param_2;
  dStack_150 = param_2[1];
  local_148 = param_2[2];
  dStack_140 = param_2[3];
  local_138 = param_2[4];
  dStack_130 = param_2[5];
  if (*(char *)(param_1 + 0x18) == '\0') {
    local_168 = param_2[2];
    local_178 = *(undefined4 *)param_2;
    uStack_174 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_170 = *(undefined4 *)(param_2 + 1);
    uStack_16c = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar6 = *(uint *)(param_3 + 0xa8);
    lVar8 = (longlong)(int)uVar6;
    if (0 < lVar8) {
      uVar7 = lVar8 + 1;
      lVar8 = lVar8 * 0x50;
      do {
        lVar8 = lVar8 + -0x50;
        lVar5 = *(longlong *)(param_3 + 0xa0);
        if (*(longlong *)(param_3 + 0xa0) == 0) {
          lVar5 = param_3;
        }
        FUN_146ba22f0(lVar5 + lVar8,&local_108,&local_178);
        local_168 = local_f8;
        local_178 = (undefined4)local_108;
        uStack_174 = local_108._4_4_;
        uStack_170 = uStack_100;
        uStack_16c = uStack_fc;
        uVar7 = uVar7 - 1;
      } while (1 < uVar7);
      uVar6 = *(uint *)(param_3 + 0xa8);
    }
    dVar10 = local_168;
    dVar1 = (double)CONCAT44(uStack_174,local_178);
    dVar9 = (double)CONCAT44(uStack_16c,uStack_170);
    local_188 = param_2[5] + param_2[2];
    uStack_190 = param_2[4] + param_2[1];
    local_198 = param_2[3] + *param_2;
    if (0 < (int)uVar6) {
      uVar7 = (ulonglong)uVar6 + 1;
      lVar8 = (ulonglong)uVar6 * 0x50;
      do {
        lVar8 = lVar8 + -0x50;
        lVar5 = *(longlong *)(param_3 + 0xa0);
        if (*(longlong *)(param_3 + 0xa0) == 0) {
          lVar5 = param_3;
        }
        FUN_146ba22f0(lVar5 + lVar8,&local_108,&local_198);
        local_188 = local_f8;
        local_198 = local_108;
        uStack_190 = (double)CONCAT44(uStack_fc,uStack_100);
        uVar7 = uVar7 - 1;
      } while (1 < uVar7);
    }
    dStack_130 = local_188 - dVar10;
    dVar11 = uStack_190 - dVar9;
    dVar13 = local_198 - dVar1;
    dVar2 = SQRT(dStack_130 * dStack_130 + dVar13 * dVar13 + dVar11 * dVar11);
    local_138 = 0.0;
    dVar12 = 1.0 / dVar2;
    dStack_140 = (double)(-(ulonglong)(0.0 < dVar2) & (ulonglong)(dVar13 * dVar12));
    if (0.0 < dVar2) {
      dStack_130 = dStack_130 * dVar12;
      local_138 = dVar11 * dVar12;
    }
    else {
      dStack_130 = 0.0;
    }
    dVar12 = dStack_130 * dStack_130 + dStack_140 * dStack_140 + local_138 * local_138;
    if (9.99999993922529e-09 < dVar12) {
      dVar12 = 1.0 / SQRT(dVar12);
      dStack_140 = dStack_140 * dVar12;
      local_138 = local_138 * dVar12;
      dStack_130 = dStack_130 * dVar12;
    }
    local_148 = dVar10;
    local_158 = dVar1;
    dStack_150 = dVar9;
  }
  local_1d0 = &local_108;
  local_108 = 1.79769313486232e+308;
  local_f8 = 0.0;
  local_e8 = (longlong *)0x0;
  local_b8 = 0;
  local_1d8 = &local_1c0;
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x250) + 0x30))
                    (*(longlong **)(param_1 + 0x250),&local_158,&local_1a0,&local_1a4);
  if (local_f8 != 0.0) {
    plVar4 = local_e8;
    if (local_e8 == (longlong *)0x0) {
      plVar4 = local_d8;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if ((char)uVar3 != '\0') {
    *(undefined4 *)(param_4 + 0x4c) = local_1a4;
    *(longlong *)(param_4 + 0x68) = param_1;
    if (*(char *)(param_1 + 0x18) == '\0') {
      dVar9 = dStack_130 * local_1a0 + local_148;
      dVar10 = local_138 * local_1a0 + dStack_150;
      dVar1 = local_1a0 * dStack_140 + local_158;
      lVar8 = *(longlong *)(param_3 + 0xa0);
      if (*(longlong *)(param_3 + 0xa0) == 0) {
        lVar8 = param_3;
      }
      if ((longlong)*(int *)(param_3 + 0xa8) != 0) {
        lVar5 = (longlong)*(int *)(param_3 + 0xa8) * 0x50;
        do {
          local_110 = dVar9 * *(double *)(lVar8 + 0x48);
          local_118 = dVar10 * *(double *)(lVar8 + 0x40);
          local_120 = dVar1 * *(double *)(lVar8 + 0x38);
          FUN_146bed047(&local_108,lVar8,&local_120);
          dVar9 = local_f8 + *(double *)(lVar8 + 0x30);
          dVar10 = (double)CONCAT44(uStack_fc,uStack_100) + *(double *)(lVar8 + 0x28);
          dVar1 = local_108 + *(double *)(lVar8 + 0x20);
          lVar8 = lVar8 + 0x50;
          lVar5 = lVar5 + -0x50;
        } while (lVar5 != 0);
      }
      local_1a0 = (dVar1 - *param_2) * param_2[3] + (dVar10 - param_2[1]) * param_2[4] +
                  (dVar9 - param_2[2]) * param_2[5];
    }
    *(double *)(param_4 + 0x30) = local_1a0;
    *(undefined4 *)(param_4 + 0x50) = local_1c0;
    *(undefined4 *)(param_4 + 0x54) = uStack_1bc;
    *(undefined4 *)(param_4 + 0x58) = uStack_1b8;
    *(undefined4 *)(param_4 + 0x5c) = uStack_1b4;
    *(undefined8 *)(param_4 + 0x60) = local_1b0;
  }
  if ((local_a0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 148548746 FUN_148548746 body=117 status=ok
// SIG undefined FUN_148548746(void)

void FUN_148548746(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 **ppuVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  undefined1 local_19;
  undefined1 *local_18;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    local_10 = &local_19;
    ppuVar1 = &local_18;
    local_18 = &LAB_14854924a;
  }
  else {
    local_30 = (undefined1 *)*param_3;
    ppuVar1 = &local_30;
    local_28 = param_3[1];
  }
  FUN_14851e069(param_1 + 0x30,ppuVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485487bc FUN_1485487bc body=1026 status=ok
// SIG undefined FUN_1485487bc(void)

ulonglong FUN_1485487bc(longlong param_1,undefined8 *param_2,longlong param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined **ppuVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_1a8 [40];
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  int *local_138;
  uint local_130;
  uint local_12c;
  longlong local_128 [2];
  longlong *local_118;
  longlong local_108 [4];
  undefined *local_e8;
  uint local_e0;
  int local_dc;
  code *local_d8;
  undefined **local_c8;
  longlong local_c0;
  undefined *local_b8 [4];
  longlong local_98 [2];
  longlong *local_88;
  longlong local_78 [4];
  int *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_c0 = param_1 + 0x30;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    local_d8 = (code *)0x0;
    local_c8 = &PTR_DAT_149f363e0;
    local_e8 = &DAT_146be727e;
    FUN_146be708e(param_1 + 0x50,local_98);
    FUN_146be6fec(local_98,&local_e8);
    local_130 = *local_58 * 0x200 + local_58[1];
    local_118 = (longlong *)0x0;
    local_128[0] = 0;
    local_138 = local_58;
    local_12c = local_130;
    FUN_146be715a(local_128,local_98);
    uVar7 = CONCAT71((int7)((ulonglong)local_98 >> 8),1);
    if (local_e0 != local_130) {
      do {
        pcVar1 = local_d8;
        local_168 = (double)CONCAT44(local_168._4_4_,local_e0);
        ppuVar5 = local_c8;
        if (local_c8 == (undefined **)0x0) {
          ppuVar5 = local_b8;
        }
        uVar3 = (**(code **)(*ppuVar5 + 8))();
        (*pcVar1)(&local_150,uVar3,&local_168);
        uVar2 = (*(code *)*param_2)(param_2[1],&local_150);
        if ((char)uVar2 == '\0') goto LAB_148548b21;
        uVar7 = (ulonglong)uVar2;
        do {
          local_e0 = local_e0 + 1;
          if (local_dc <= (int)local_e0) break;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(local_e8 + 8) +
                                               (ulonglong)(local_e0 >> 9) * 8) +
                                             (ulonglong)(local_e0 & 0x1ff) * 2) - 1U));
      } while (local_130 != local_e0);
    }
  }
  else {
    local_d8 = (code *)0x0;
    local_c8 = &PTR_DAT_149f363e0;
    local_e8 = &DAT_146be727e;
    FUN_146be708e(param_1 + 0x50,local_98);
    FUN_146be6fec(local_98,&local_e8);
    local_130 = *local_58 * 0x200 + local_58[1];
    local_118 = (longlong *)0x0;
    local_128[0] = 0;
    local_138 = local_58;
    local_12c = local_130;
    FUN_146be715a(local_128,local_98);
    uVar7 = CONCAT71((int7)((ulonglong)local_98 >> 8),1);
    if (local_e0 != local_130) {
      do {
        pcVar1 = local_d8;
        local_150 = (double)CONCAT44(local_150._4_4_,local_e0);
        ppuVar5 = local_c8;
        if (local_c8 == (undefined **)0x0) {
          ppuVar5 = local_b8;
        }
        uVar3 = (**(code **)(*ppuVar5 + 8))();
        (*pcVar1)(&local_180,uVar3,&local_150);
        lVar8 = *(longlong *)(param_3 + 0xa0);
        if (*(longlong *)(param_3 + 0xa0) == 0) {
          lVar8 = param_3;
        }
        dVar9 = local_170;
        dVar10 = local_180;
        dVar11 = local_178;
        if ((longlong)*(int *)(param_3 + 0xa8) != 0) {
          lVar6 = (longlong)*(int *)(param_3 + 0xa8) * 0x50;
          do {
            local_158 = dVar9 * *(double *)(lVar8 + 0x48);
            local_160 = dVar11 * *(double *)(lVar8 + 0x40);
            local_168 = dVar10 * *(double *)(lVar8 + 0x38);
            FUN_146bed047(&local_150,lVar8,&local_168);
            dVar9 = local_140 + *(double *)(lVar8 + 0x30);
            dVar11 = local_148 + *(double *)(lVar8 + 0x28);
            dVar10 = local_150 + *(double *)(lVar8 + 0x20);
            lVar8 = lVar8 + 0x50;
            lVar6 = lVar6 + -0x50;
          } while (lVar6 != 0);
        }
        local_150 = dVar10;
        local_148 = dVar11;
        local_140 = dVar9;
        uVar2 = (*(code *)*param_2)(param_2[1],&local_150);
        if ((char)uVar2 == '\0') goto LAB_148548b21;
        uVar7 = (ulonglong)uVar2;
        do {
          local_e0 = local_e0 + 1;
          if (local_dc <= (int)local_e0) break;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(local_e8 + 8) +
                                               (ulonglong)(local_e0 >> 9) * 8) +
                                             (ulonglong)(local_e0 & 0x1ff) * 2) - 1U));
      } while (local_130 != local_e0);
    }
  }
LAB_148548b23:
  if (local_128[0] != 0) {
    plVar4 = local_118;
    if (local_118 == (longlong *)0x0) {
      plVar4 = local_108;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (local_d8 != (code *)0x0) {
    ppuVar5 = local_c8;
    if (local_c8 == (undefined **)0x0) {
      ppuVar5 = local_b8;
    }
    (**(code **)(*ppuVar5 + 0x10))();
  }
  if (local_98[0] != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
LAB_148548b21:
  uVar7 = 0;
  goto LAB_148548b23;
}



// FUNCTION 148548bc0 FUN_148548bc0 body=766 status=ok
// SIG undefined FUN_148548bc0(void)

void FUN_148548bc0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 auStack_408 [32];
  code **local_3e8;
  undefined1 local_3e0;
  undefined8 local_3d0;
  undefined8 local_3c8 [2];
  undefined8 local_3b8;
  undefined **local_3a8;
  undefined8 local_3a0;
  code *local_388 [2];
  undefined8 local_378;
  undefined **local_368;
  undefined8 local_360;
  undefined8 local_348 [2];
  undefined8 local_338;
  undefined **local_328;
  code *local_308 [2];
  undefined8 local_2f8;
  undefined **local_2e8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_29c;
  undefined4 local_294;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_258;
  undefined4 local_250;
  undefined8 local_24c;
  undefined4 local_244;
  undefined8 local_238;
  undefined4 local_230;
  undefined2 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f4;
  undefined4 local_1ec;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a4;
  undefined4 local_19c;
  undefined8 local_190;
  undefined4 local_188;
  undefined2 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_40;
  undefined4 local_38;
  undefined2 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_408;
  local_2a8 = 0;
  local_2a0 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_29c = 0xffffffff00000080;
  local_294 = 0;
  local_288 = 0;
  local_280 = 0;
  local_258 = 0;
  local_250 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_24c = 0xffffffff00000080;
  local_244 = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0x101;
  local_200 = 0;
  local_1f8 = 0;
  local_220 = 0;
  uStack_218 = 0;
  local_1f4 = 0xffffffff00000080;
  local_1ec = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1a4 = 0xffffffff00000080;
  local_19c = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0x101;
  local_158 = 0;
  local_150 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_14c = 0xffffffff00000080;
  local_144 = 0;
  local_138 = 0;
  local_130 = 0;
  local_108 = 0;
  local_100 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_fc = 0xffffffff00000080;
  local_f4 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d7 = 1;
  local_d8 = 1;
  local_b0 = 0;
  local_a8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_a4 = 0xffffffff00000080;
  local_9c = 0;
  local_90 = 0;
  local_88 = 0;
  local_60 = 0;
  local_58 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_54 = 0xffffffff00000080;
  local_4c = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0x101;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    local_3e8 = local_308;
    local_2f8 = 0;
    local_2e8 = &PTR_LAB_14af17a40;
    local_308[0] = (code *)&LAB_14854925e;
    puVar2 = local_348;
    local_338 = 0;
    local_328 = &PTR_LAB_14af17a60;
    pcVar1 = (code *)&LAB_1485492b2;
  }
  else {
    local_3e8 = local_388;
    local_378 = 0;
    local_368 = &PTR_LAB_14af17a80;
    local_388[0] = FUN_148549306;
    puVar2 = local_3c8;
    local_3b8 = 0;
    local_3a8 = &PTR_LAB_14af17aa0;
    pcVar1 = FUN_148549410;
    local_3a0 = param_3;
    local_360 = param_3;
  }
  *puVar2 = pcVar1;
  local_3e0 = 0;
  local_3d0 = param_2;
  FUN_146bcbbdc(&local_3d0,param_1 + 0x30,&local_2c8);
  FUN_146bfdcfe(&local_2c8);
  if ((local_8 ^ (ulonglong)auStack_408) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148548f78 FUN_148548f78 body=41 status=ok
// SIG undefined FUN_148548f78(void)

undefined8 FUN_148548f78(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  FUN_146c148ec(param_1 + 0x30,param_2,param_3,*param_4,*(undefined4 *)(param_4 + 1),
                *(undefined4 *)(param_4 + 2));
  return param_2;
}



// FUNCTION 148548fa2 FUN_148548fa2 body=130 status=ok
// SIG undefined FUN_148548fa2(void)

undefined8 FUN_148548fa2(longlong param_1,undefined4 param_2,undefined4 param_3,float *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x238);
  if (((lVar1 == 0) || (*(int *)(lVar1 + 0x38) < 1)) || (**(longlong **)(lVar1 + 0x30) == 0)) {
    uVar2 = 0;
  }
  else {
    FUN_1483b2fbe(**(longlong **)(lVar1 + 0x30),param_2,param_3,&local_30);
    *param_4 = (float)local_30;
    param_4[1] = (float)local_28;
    param_4[2] = (float)local_20;
    uVar2 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148549026 FUN_148549026 body=133 status=ok
// SIG undefined FUN_148549026(void)

undefined8
FUN_148549026(longlong param_1,undefined4 param_2,undefined8 param_3,uint param_4,float *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x238);
  if (lVar1 != 0) {
    uVar2 = 0;
    if (((int)param_4 < 0) || (*(int *)(lVar1 + 0x28) <= (int)param_4)) goto LAB_148549066;
    lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x20) + (ulonglong)param_4 * 8);
    if (lVar1 != 0) {
      FUN_1483b6602(lVar1,param_2,param_3,&local_28);
      *param_5 = (float)local_28;
      param_5[1] = (float)local_20;
      uVar2 = 1;
      goto LAB_148549066;
    }
  }
  uVar2 = 0;
LAB_148549066:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485490ac FUN_1485490ac body=69 status=ok
// SIG undefined FUN_1485490ac(void)

void FUN_1485490ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14af179c0;
  FUN_1485490f2(param_1[0x4b]);
  puVar1 = (undefined8 *)param_1[0x4a];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_141082778(param_1 + 6);
  return;
}



// FUNCTION 1485490f2 FUN_1485490f2 body=62 status=ok
// SIG undefined FUN_1485490f2(void)

void FUN_1485490f2(longlong param_1)

{
  if (param_1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_146bddd50(param_1 + 8);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 148549130 FUN_148549130 body=260 status=ok
// SIG undefined FUN_148549130(void)

undefined8 * FUN_148549130(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = 0x7fefffffffffffff;
  param_1[1] = 0x7fefffffffffffff;
  param_1[2] = 0x7fefffffffffffff;
  param_1[3] = 0xffefffffffffffff;
  param_1[4] = 0xffefffffffffffff;
  param_1[5] = 0xffefffffffffffff;
  uVar2 = *(uint *)(param_2 + 0x50);
  if (0 < (int)uVar2) {
    uVar5 = 0;
    do {
      if ((int)uVar5 < *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24)) {
        uVar4 = (ulonglong)(uVar5 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(param_2 + 0x28) + (ulonglong)(uVar5 >> 9) * 8) +
                               uVar4 * 2) - 1U) < 0xfffe) {
          lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar5 >> 9) * 8);
          local_68 = *(undefined8 *)(lVar3 + 0x10 + uVar4 * 0x18);
          puVar1 = (undefined4 *)(lVar3 + uVar4 * 0x18);
          local_78 = *puVar1;
          uStack_74 = puVar1[1];
          uStack_70 = puVar1[2];
          uStack_6c = puVar1[3];
          (*(code *)*param_3)(local_58,param_3[1],&local_78);
          FUN_146ba5262(param_1,local_58);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar2 != uVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148549294 FUN_148549294 body=29 status=ok
// SIG undefined FUN_148549294(void)

undefined8 FUN_148549294(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485492e8 FUN_1485492e8 body=29 status=ok
// SIG undefined FUN_1485492e8(void)

undefined8 FUN_1485492e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148549306 FUN_148549306 body=192 status=ok
// SIG undefined FUN_148549306(void)

undefined4 *
FUN_148549306(undefined4 *param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_2;
  local_58 = *(undefined8 *)(param_4 + 4);
  local_68 = *param_4;
  uStack_64 = param_4[1];
  uStack_60 = param_4[2];
  uStack_5c = param_4[3];
  lVar1 = *(longlong *)(lVar2 + 0xa0);
  if (*(longlong *)(lVar2 + 0xa0) == 0) {
    lVar1 = lVar2;
  }
  if ((longlong)*(int *)(lVar2 + 0xa8) != 0) {
    lVar2 = (longlong)*(int *)(lVar2 + 0xa8) * 0x50;
    do {
      FUN_146c5cfa8(lVar1,&local_48,&local_68);
      local_58 = local_38;
      local_68 = local_48;
      uStack_64 = uStack_44;
      uStack_60 = uStack_40;
      uStack_5c = uStack_3c;
      lVar1 = lVar1 + 0x50;
      lVar2 = lVar2 + -0x50;
    } while (lVar2 != 0);
  }
  *(undefined8 *)(param_1 + 4) = local_58;
  *param_1 = local_68;
  param_1[1] = uStack_64;
  param_1[2] = uStack_60;
  param_1[3] = uStack_5c;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485493f2 FUN_1485493f2 body=29 status=ok
// SIG undefined FUN_1485493f2(void)

undefined8 FUN_1485493f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148549410 FUN_148549410 body=31 status=ok
// SIG undefined FUN_148549410(void)

undefined8
FUN_148549410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_148549478(param_2,param_1,param_4);
  return param_1;
}



// FUNCTION 14854945a FUN_14854945a body=29 status=ok
// SIG undefined FUN_14854945a(void)

undefined8 FUN_14854945a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148549478 FUN_148549478 body=234 status=ok
// SIG undefined FUN_148549478(void)

double * FUN_148549478(longlong *param_1,double *param_2,double *param_3)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_1;
  dVar4 = *param_3;
  dVar5 = param_3[1];
  dVar3 = param_3[2];
  lVar1 = *(longlong *)(lVar2 + 0xa0);
  if (*(longlong *)(lVar2 + 0xa0) == 0) {
    lVar1 = lVar2;
  }
  if ((longlong)*(int *)(lVar2 + 0xa8) != 0) {
    lVar2 = (longlong)*(int *)(lVar2 + 0xa8) * 0x50;
    do {
      local_50 = dVar3 * *(double *)(lVar1 + 0x48);
      local_58 = dVar5 * *(double *)(lVar1 + 0x40);
      local_60 = dVar4 * *(double *)(lVar1 + 0x38);
      FUN_146bed047(&local_48,lVar1,&local_60);
      dVar3 = local_38 + *(double *)(lVar1 + 0x30);
      dVar5 = local_40 + *(double *)(lVar1 + 0x28);
      dVar4 = local_48 + *(double *)(lVar1 + 0x20);
      lVar1 = lVar1 + 0x50;
      lVar2 = lVar2 + -0x50;
    } while (lVar2 != 0);
  }
  *param_2 = dVar4;
  param_2[1] = dVar5;
  param_2[2] = dVar3;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148549564 FUN_148549564 body=48 status=ok
// SIG undefined FUN_148549564(void)

void FUN_148549564(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148549594 FUN_148549594 body=48 status=ok
// SIG undefined FUN_148549594(void)

void FUN_148549594(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x48,8);
  }
  return;
}



// FUNCTION 1485495c4 FUN_1485495c4 body=147 status=ok
// SIG undefined FUN_1485495c4(void)

void FUN_1485495c4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148549658 FUN_148549658 body=9 status=ok
// SIG undefined FUN_148549658(void)

void FUN_148549658(longlong param_1)

{
  FUN_145820e5c(param_1 + 0x10);
  return;
}



// FUNCTION 148549662 FUN_148549662 body=29 status=ok
// SIG undefined FUN_148549662(void)

undefined8 FUN_148549662(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148549680 FUN_148549680 body=48 status=ok
// SIG undefined FUN_148549680(void)

void FUN_148549680(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x50,8);
  }
  return;
}



// FUNCTION 1485496b0 FUN_1485496b0 body=68 status=ok
// SIG undefined FUN_1485496b0(void)

char FUN_1485496b0(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  
  if (param_3 == 0) {
    cVar1 = '\x01';
  }
  else {
    do {
      param_3 = param_3 + -1;
      cVar1 = FUN_1485496f4(param_1,param_2);
      if (cVar1 == '\0') {
        return '\0';
      }
      param_1 = param_1 + 0x50;
      param_2 = param_2 + 0x50;
    } while (param_3 != 0);
  }
  return cVar1;
}



// FUNCTION 1485496f4 FUN_1485496f4 body=156 status=ok
// SIG undefined FUN_1485496f4(void)

undefined4 FUN_1485496f4(double *param_1,double *param_2)

{
  if ((*param_1 == *param_2) && (!NAN(*param_1) && !NAN(*param_2))) {
    if ((param_1[1] == param_2[1]) && (!NAN(param_1[1]) && !NAN(param_2[1]))) {
      if ((param_1[2] == param_2[2]) && (!NAN(param_1[2]) && !NAN(param_2[2]))) {
        if (param_1[3] != param_2[3]) {
          return 0;
        }
        if (NAN(param_1[3]) || NAN(param_2[3])) {
          return 0;
        }
        if (param_1[4] != param_2[4]) {
          return 0;
        }
        if (NAN(param_1[4]) || NAN(param_2[4])) {
          return 0;
        }
        if (param_1[5] != param_2[5]) {
          return 0;
        }
        if (NAN(param_1[5]) || NAN(param_2[5])) {
          return 0;
        }
        if (param_1[6] != param_2[6]) {
          return 0;
        }
        if (NAN(param_1[6]) || NAN(param_2[6])) {
          return 0;
        }
        if ((param_1[7] == param_2[7]) && (!NAN(param_1[7]) && !NAN(param_2[7]))) {
          if ((param_1[8] == param_2[8]) &&
             ((!NAN(param_1[8]) && !NAN(param_2[8]) &&
              (*(int *)(param_1 + 9) == *(int *)(param_2 + 9))))) {
            return CONCAT31((int3)((uint)*(int *)((longlong)param_1 + 0x4c) >> 8),
                            *(int *)((longlong)param_1 + 0x4c) == *(int *)((longlong)param_2 + 0x4c)
                           );
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 148549790 FUN_148549790 body=196 status=ok
// SIG undefined FUN_148549790(void)

void FUN_148549790(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar1 = (int)param_2[1];
  uVar3 = uVar2 + iVar1;
  if (uVar2 < uVar3) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_140d0b674(param_1,uVar3);
    iVar1 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar1)) {
      *(int *)(param_1 + 0x48) = iVar1;
      FUN_140d0b828(param_1);
    }
    iVar1 = (int)param_2[1];
  }
  if (iVar1 != 0) {
    lVar4 = *param_2;
    lVar5 = (longlong)iVar1 << 3;
    do {
      FUN_140d0b320(param_1,local_2c,lVar4,0);
      lVar4 = lVar4 + 8;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148549856 FUN_148549856 body=296 status=ok
// SIG undefined FUN_148549856(void)

void FUN_148549856(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar5 = (longlong *)FUN_14001cc68(0x90,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14af17ae0;
  plVar7 = param_2;
  plVar8 = plVar5 + 2;
  for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *plVar8 = *plVar7;
    plVar7 = plVar7 + 1;
    plVar8 = plVar8 + 1;
  }
  plVar5[0xc] = param_2[10];
  plVar5[0xd] = param_2[0xb];
  param_2[0xb] = 0;
  plVar5[0xe] = param_2[0xc];
  plVar5[0xf] = param_2[0xd];
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x74);
  lVar6 = param_2[0xf];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x7c);
  *(int *)(plVar5 + 0x10) = (int)param_2[0xe];
  *(undefined4 *)((longlong)plVar5 + 0x84) = uVar3;
  *(int *)(plVar5 + 0x11) = (int)lVar6;
  *(undefined4 *)((longlong)plVar5 + 0x8c) = uVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar5 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1485499aa(param_1,iVar2);
  }
  lVar6 = *param_1;
  *(longlong **)(lVar6 + (longlong)iVar2 * 0x10) = plVar5 + 2;
  *(longlong **)(lVar6 + 8 + (longlong)iVar2 * 0x10) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar5 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14854997e FUN_14854997e body=14 status=ok
// SIG undefined FUN_14854997e(void)

void FUN_14854997e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 14854998c FUN_14854998c body=29 status=ok
// SIG undefined FUN_14854998c(void)

undefined8 FUN_14854998c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485499aa FUN_1485499aa body=132 status=ok
// SIG undefined FUN_1485499aa(void)

void FUN_1485499aa(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148549a30 FUN_148549a30 body=296 status=ok
// SIG undefined FUN_148549a30(void)

void FUN_148549a30(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar5 = (longlong *)FUN_14001cc68(0x90,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14af17b00;
  plVar7 = param_2;
  plVar8 = plVar5 + 2;
  for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *plVar8 = *plVar7;
    plVar7 = plVar7 + 1;
    plVar8 = plVar8 + 1;
  }
  plVar5[0xc] = param_2[10];
  plVar5[0xd] = param_2[0xb];
  param_2[0xb] = 0;
  plVar5[0xe] = param_2[0xc];
  plVar5[0xf] = param_2[0xd];
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x74);
  lVar6 = param_2[0xf];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x7c);
  *(int *)(plVar5 + 0x10) = (int)param_2[0xe];
  *(undefined4 *)((longlong)plVar5 + 0x84) = uVar3;
  *(int *)(plVar5 + 0x11) = (int)lVar6;
  *(undefined4 *)((longlong)plVar5 + 0x8c) = uVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar5 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_148549b84(param_1,iVar2);
  }
  lVar6 = *param_1;
  *(longlong **)(lVar6 + (longlong)iVar2 * 0x10) = plVar5 + 2;
  *(longlong **)(lVar6 + 8 + (longlong)iVar2 * 0x10) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar5 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148549b58 FUN_148549b58 body=14 status=ok
// SIG undefined FUN_148549b58(void)

void FUN_148549b58(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 148549b66 FUN_148549b66 body=29 status=ok
// SIG undefined FUN_148549b66(void)

undefined8 FUN_148549b66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148549b84 FUN_148549b84 body=132 status=ok
// SIG undefined FUN_148549b84(void)

void FUN_148549b84(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148549c0a FUN_148549c0a body=157 status=ok
// SIG undefined FUN_148549c0a(void)

void FUN_148549c0a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x1c,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1c)) {
      uVar5 = uVar4 / 0x1c & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1c,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148549ca8 FUN_148549ca8 body=73 status=ok
// SIG undefined FUN_148549ca8(void)

void FUN_148549ca8(longlong param_1,int param_2)

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



// FUNCTION 148549cf2 FUN_148549cf2 body=48 status=ok
// SIG undefined FUN_148549cf2(void)

void FUN_148549cf2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 148549d22 FUN_148549d22 body=73 status=ok
// SIG undefined FUN_148549d22(void)

void FUN_148549d22(longlong param_1,int param_2)

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



// FUNCTION 148549d6c FUN_148549d6c body=48 status=ok
// SIG undefined FUN_148549d6c(void)

void FUN_148549d6c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 148549d9c FUN_148549d9c body=147 status=ok
// SIG undefined FUN_148549d9c(void)

void FUN_148549d9c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148549e30 FUN_148549e30 body=199 status=ok
// SIG undefined FUN_148549e30(void)

undefined8 * FUN_148549e30(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  *param_1 = &PTR_LAB_14af15ec0;
  *(undefined4 *)(param_1 + 1) = 0;
  LOCK();
  UNLOCK();
  iVar5 = DAT_14c763028 + 1;
  *(int *)(param_1 + 1) = DAT_14c763028;
  DAT_14c763028 = iVar5;
  *param_1 = &PTR_FUN_14af17b40;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  param_1[3] = 0x7fefffffffffffff;
  param_1[4] = 0x7fefffffffffffff;
  param_1[5] = 0x7fefffffffffffff;
  param_1[6] = 0xffefffffffffffff;
  param_1[7] = 0xffefffffffffffff;
  param_1[8] = 0xffefffffffffffff;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x3ff0000000000000;
  uVar1 = DAT_14c8464e8;
  param_1[0xd] = DAT_14c8464e0;
  param_1[0xe] = uVar1;
  param_1[0xf] = DAT_14c8464f0;
  uVar4 = DAT_14c846518._4_4_;
  uVar3 = (undefined4)DAT_14c846518;
  uVar2 = DAT_14c846510._4_4_;
  *(undefined4 *)(param_1 + 0x10) = (undefined4)DAT_14c846510;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar2;
  *(undefined4 *)(param_1 + 0x11) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  param_1[0x12] = DAT_14c846520;
  FUN_146bfe9b8(param_1 + 0x14);
  return param_1;
}



// FUNCTION 148549ef8 FUN_148549ef8 body=23 status=ok
// SIG undefined FUN_148549ef8(void)

void FUN_148549ef8(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14af17b40;
  FUN_14854108e(param_1 + 0xb0);
  return;
}



// FUNCTION 148549f10 FUN_148549f10 body=29 status=ok
// SIG undefined FUN_148549f10(void)

undefined8 FUN_148549f10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148549f2e FUN_148549f2e body=55 status=ok
// SIG undefined FUN_148549f2e(void)

undefined8 * FUN_148549f2e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14af17b40;
  FUN_14854108e(param_1 + 0x14);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148549f66 FUN_148549f66 body=199 status=ok
// SIG undefined FUN_148549f66(void)

undefined8 * FUN_148549f66(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  *param_1 = &PTR_LAB_14af15ec0;
  *(undefined4 *)(param_1 + 1) = 0;
  LOCK();
  UNLOCK();
  iVar5 = DAT_14c763028 + 1;
  *(int *)(param_1 + 1) = DAT_14c763028;
  DAT_14c763028 = iVar5;
  *param_1 = &PTR_FUN_14af17bb0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  param_1[3] = 0x7fefffffffffffff;
  param_1[4] = 0x7fefffffffffffff;
  param_1[5] = 0x7fefffffffffffff;
  param_1[6] = 0xffefffffffffffff;
  param_1[7] = 0xffefffffffffffff;
  param_1[8] = 0xffefffffffffffff;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x3ff0000000000000;
  uVar1 = DAT_14c8464e8;
  param_1[0xd] = DAT_14c8464e0;
  param_1[0xe] = uVar1;
  param_1[0xf] = DAT_14c8464f0;
  uVar4 = DAT_14c846518._4_4_;
  uVar3 = (undefined4)DAT_14c846518;
  uVar2 = DAT_14c846510._4_4_;
  *(undefined4 *)(param_1 + 0x10) = (undefined4)DAT_14c846510;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar2;
  *(undefined4 *)(param_1 + 0x11) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  param_1[0x12] = DAT_14c846520;
  FUN_1457e37e0(param_1 + 0x14);
  return param_1;
}



// FUNCTION 14854a02e FUN_14854a02e body=23 status=ok
// SIG undefined FUN_14854a02e(void)

void FUN_14854a02e(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14af17bb0;
  FUN_1457e5b52(param_1 + 0xb0);
  return;
}



// FUNCTION 14854a046 FUN_14854a046 body=29 status=ok
// SIG undefined FUN_14854a046(void)

undefined8 FUN_14854a046(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14854a064 FUN_14854a064 body=55 status=ok
// SIG undefined FUN_14854a064(void)

undefined8 * FUN_14854a064(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14af17bb0;
  FUN_1457e5b52(param_1 + 0x14);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14854a09c FUN_14854a09c body=324 status=ok
// SIG undefined FUN_14854a09c(void)

undefined4 * FUN_14854a09c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14854a1e2(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_14854a2c8(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14854a3ba(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14854a1e2 FUN_14854a1e2 body=230 status=ok
// SIG undefined FUN_14854a1e2(void)

int * FUN_14854a1e2(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14482b872(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 14854a2c8 FUN_14854a2c8 body=128 status=ok
// SIG undefined FUN_14854a2c8(void)

undefined8 FUN_14854a2c8(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_14854a348((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 14854a348 FUN_14854a348 body=114 status=ok
// SIG undefined FUN_14854a348(void)

void FUN_14854a348(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 14854a3ba FUN_14854a3ba body=474 status=ok
// SIG undefined FUN_14854a3ba(void)

void FUN_14854a3ba(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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


