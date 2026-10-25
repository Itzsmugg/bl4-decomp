// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146daadee FUN_146daadee body=532 status=ok
// SIG undefined FUN_146daadee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146daadee(undefined8 *param_1,undefined8 param_2,undefined8 param_3,double *param_4,
                  undefined8 *param_5,double *param_6,double param_7,undefined8 param_8,
                  undefined8 param_9)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined8 *puVar6;
  float fVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  
  *param_1 = 0x7fefffffffffffff;
  param_1[1] = 0x7fefffffffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  param_1[9] = param_2;
  puVar6 = param_1 + 10;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *param_5;
    param_5 = param_5 + 1;
    puVar6 = puVar6 + 1;
  }
  param_1[0x16] = param_3;
  param_1[0x17] = param_8;
  param_1[0x18] = param_9;
  dVar8 = (param_4[5] - param_4[2]) * 0.5;
  dVar10 = (param_4[4] - param_4[1]) * 0.5;
  dVar1 = (param_4[3] - *param_4) * 0.5;
  auVar2._4_4_ = (float)(param_4[1] + dVar10 + (double)param_1[0xf]);
  auVar2._0_4_ = (float)(*param_4 + dVar1 + (double)param_1[0xe]);
  auVar2._8_4_ = (float)(param_4[2] + dVar8 + (double)param_1[0x10]);
  auVar2._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x1a) = auVar2;
  fVar11 = (float)(double)param_1[0x10];
  fVar7 = (float)(double)param_1[0xe];
  auVar15._4_4_ = (float)(double)param_1[0xf];
  auVar15._0_4_ = fVar7;
  auVar15._8_4_ = fVar11;
  auVar15._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x1c) = auVar15;
  fVar14 = (float)param_6[2];
  fVar17 = (float)*param_6;
  fVar18 = (float)param_6[1];
  auVar3._4_4_ = fVar18;
  auVar3._0_4_ = fVar17;
  auVar3._8_4_ = fVar14;
  auVar3._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x22) = auVar3;
  *(float *)(param_1 + 0x1e) = (float)param_7 * fVar17 + fVar7;
  *(float *)((longlong)param_1 + 0xf4) = (float)param_7 * fVar18 + (float)(double)param_1[0xf];
  *(float *)(param_1 + 0x1f) = (float)param_7 * fVar14 + fVar11;
  *(float *)((longlong)param_1 + 0xfc) = (float)param_7 * 0.0 + 0.0;
  fVar7 = (float)(double)param_1[0xc];
  fVar11 = (float)(double)param_1[0xd];
  fVar12 = (float)(double)param_1[10];
  fVar13 = (float)(double)param_1[0xb];
  *(uint *)(param_1 + 0x26) = -(uint)(ABS(fVar17) < 1e-08);
  *(uint *)((longlong)param_1 + 0x134) = -(uint)(ABS(fVar18) < 1e-08);
  *(uint *)(param_1 + 0x27) = -(uint)(ABS(fVar14) < 1e-08);
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0xffffffff;
  auVar15 = _DAT_1499314a0;
  auVar4._4_4_ = fVar18;
  auVar4._0_4_ = fVar17;
  auVar4._8_4_ = fVar14;
  auVar4._12_4_ = 0;
  auVar19 = divps(_DAT_1499314a0,auVar4);
  *(uint *)(param_1 + 0x20) = ~-(uint)(ABS(fVar17) < 1e-08) & auVar19._0_4_;
  *(uint *)((longlong)param_1 + 0x104) = ~-(uint)(ABS(fVar18) < 1e-08) & auVar19._4_4_;
  *(uint *)(param_1 + 0x21) = ~-(uint)(ABS(fVar14) < 1e-08) & auVar19._8_4_;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  fVar14 = fVar12 * fVar12 + fVar13 * fVar13;
  fVar17 = fVar7 * fVar7 + fVar11 * fVar11;
  *(float *)(param_1 + 0x28) = (float)ABS(dVar1);
  *(float *)((longlong)param_1 + 0x144) = (float)ABS(dVar10);
  *(float *)(param_1 + 0x29) = (float)ABS(dVar8);
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  auVar9._0_4_ = fVar17 + fVar14;
  auVar9._4_4_ = fVar17 + fVar14;
  auVar9._8_4_ = fVar14 + fVar17;
  auVar9._12_4_ = fVar14 + fVar17;
  auVar19 = sqrtps(auVar9,auVar9);
  auVar15 = divps(auVar15,auVar19);
  auVar16._0_4_ = auVar15._0_4_ * fVar12;
  auVar16._4_4_ = auVar15._4_4_ * fVar13;
  auVar16._8_4_ = auVar15._8_4_ * fVar7;
  auVar16._12_4_ = auVar15._12_4_ * fVar11;
  auVar19._4_4_ = -(uint)(1e-08 <= auVar9._4_4_);
  auVar19._0_4_ = -(uint)(1e-08 <= auVar9._0_4_);
  auVar19._8_4_ = -(uint)(1e-08 <= auVar9._8_4_);
  auVar19._12_4_ = -(uint)(1e-08 <= auVar9._12_4_);
  auVar15 = blendvps(_DAT_149932320,auVar16,auVar19);
  *(undefined1 (*) [16])(param_1 + 0x24) = auVar15;
  return;
}



// FUNCTION 146dab002 FUN_146dab002 body=2375 status=ok
// SIG undefined FUN_146dab002(void)

void FUN_146dab002(double param_1,double *param_2,double *param_3,double param_4,double *param_5,
                  undefined8 param_6)

{
  byte *pbVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  byte bVar8;
  double dVar9;
  char cVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  size_t _Size;
  undefined8 uVar25;
  longlong lVar26;
  uint uVar27;
  bool bVar28;
  double dVar29;
  undefined1 auVar30 [16];
  double *pdVar31;
  double dVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStack_1e8 [32];
  double local_1c8;
  uint local_1bc;
  ulonglong local_1b8;
  double *local_1b0;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  ulonglong local_198;
  int local_18c;
  int local_188;
  int local_184;
  uint local_180;
  uint local_17c;
  longlong local_178;
  double local_170;
  double *local_168;
  undefined8 **local_160;
  undefined8 *local_158;
  undefined8 uStack_150;
  double local_140;
  double *local_138;
  int local_130;
  uint local_128;
  uint local_124;
  double local_120;
  double local_118 [4];
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  dVar29 = *param_5;
  dVar2 = param_5[1];
  local_118[3] = *(double *)((longlong)param_1 + 0x138) - dVar29;
  local_f0 = *(double *)((longlong)param_1 + 0x150) + dVar29;
  local_e8 = *(double *)((longlong)param_1 + 0x158) + dVar2;
  local_f8 = *(double *)((longlong)param_1 + 0x140) - dVar2;
  dVar3 = *param_3;
  dVar4 = param_3[1];
  dVar5 = *(double *)((longlong)param_1 + 0x50);
  dVar6 = *(double *)((longlong)param_1 + 0x58);
  dVar32 = (double)(-(ulonglong)(0.0 < dVar4) & 0x3ff0000000000000 |
                   (ulonglong)
                   (~(uint)(-(ulonglong)(0.0 < dVar4) >> 0x20) &
                   (uint)(-(ulonglong)(dVar4 < 0.0) >> 0x20) & 0xbff00000) << 0x20) * dVar2;
  local_170 = (double)(-(ulonglong)(0.0 < dVar3) & 0x3ff0000000000000 |
                      (ulonglong)
                      (~(uint)(-(ulonglong)(0.0 < dVar3) >> 0x20) &
                      (uint)(-(ulonglong)(dVar3 < 0.0) >> 0x20) & 0xbff00000) << 0x20) * dVar29;
  local_138 = (double *)(param_2[1] - dVar32);
  local_140 = *param_2 - local_170;
  local_168 = (double *)(dVar4 * param_4 + param_2[1] + dVar32);
  local_170 = dVar3 * param_4 + *param_2 + local_170;
  local_118[0] = dVar29;
  local_118[1] = dVar2;
  cVar10 = FUN_1448596be();
  if (cVar10 != '\0') {
    dVar3 = *(double *)((longlong)param_1 + 0xb0);
    dVar4 = *(double *)((longlong)param_1 + 0xb8);
    dVar32 = *(double *)((longlong)param_1 + 0xe0);
    dVar7 = *(double *)((longlong)param_1 + 0xd8);
    uVar15 = (uint)((local_140 / dVar5 - dVar3) / dVar7);
    uVar20 = (uint)(((double)local_138 / dVar6 - dVar4) / dVar32);
    iVar13 = *(int *)((longlong)param_1 + 0xd0);
    uVar16 = iVar13 - 1;
    uVar23 = 0;
    if (0 < (int)uVar15) {
      uVar23 = uVar15;
    }
    if (iVar13 <= (int)uVar15) {
      uVar23 = uVar16;
    }
    iVar11 = *(int *)((longlong)param_1 + 0xd4);
    uVar15 = 0;
    if (0 < (int)uVar20) {
      uVar15 = uVar20;
    }
    uVar27 = iVar11 - 1;
    if (iVar11 <= (int)uVar20) {
      uVar15 = uVar27;
    }
    uVar21 = (uint)((local_170 / dVar5 - dVar3) / dVar7);
    uVar22 = (uint)(((double)local_168 / dVar6 - dVar4) / dVar32);
    uVar20 = 0;
    if (0 < (int)uVar21) {
      uVar20 = uVar21;
    }
    if (iVar13 <= (int)uVar21) {
      uVar20 = uVar16;
    }
    uVar21 = 0;
    if (0 < (int)uVar22) {
      uVar21 = uVar22;
    }
    if (iVar11 <= (int)uVar22) {
      uVar21 = uVar27;
    }
    uVar22 = -(uVar20 - uVar23);
    if ((int)uVar22 < 0) {
      uVar22 = uVar20 - uVar23;
    }
    uVar18 = -(uVar21 - uVar15);
    if ((int)uVar18 < 0) {
      uVar18 = uVar21 - uVar15;
    }
    local_120 = param_4;
    if (uVar18 == 0 && uVar22 == 0) {
      uVar33 = SUB84(local_140,0);
      uVar34 = (int)((ulonglong)local_140 >> 0x20);
      if (local_170 <= local_140) {
        uVar33 = SUB84(local_170,0);
        uVar34 = (int)((ulonglong)local_170 >> 0x20);
      }
      uVar35 = SUB84(local_138,0);
      uVar36 = (undefined4)((ulonglong)local_138 >> 0x20);
      if ((double)local_168 <= (double)local_138) {
        uVar35 = SUB84(local_168,0);
        uVar36 = (undefined4)((ulonglong)local_168 >> 0x20);
      }
      uVar15 = (uint)((((double)CONCAT44(uVar34,uVar33) - dVar29) / dVar5 - dVar3) / dVar7);
      uVar20 = (uint)((((double)CONCAT44(uVar36,uVar35) - dVar2) / dVar6 - dVar4) / dVar32);
      uVar23 = 0;
      if (0 < (int)uVar15) {
        uVar23 = uVar15;
      }
      dVar9 = local_140;
      if (local_140 <= local_170) {
        dVar9 = local_170;
      }
      if (iVar13 <= (int)uVar15) {
        uVar23 = uVar16;
      }
      uVar15 = 0;
      if (0 < (int)uVar20) {
        uVar15 = uVar20;
      }
      if (iVar11 <= (int)uVar20) {
        uVar15 = uVar27;
      }
      pdVar31 = local_138;
      if ((double)local_138 <= (double)local_168) {
        pdVar31 = local_168;
      }
      uVar21 = (uint)(((dVar9 + dVar29) / dVar5 - dVar3) / dVar7);
      uVar22 = (uint)((((double)pdVar31 + dVar2) / dVar6 - dVar4) / dVar32);
      uVar20 = 0;
      if (0 < (int)uVar21) {
        uVar20 = uVar21;
      }
      if (iVar13 <= (int)uVar21) {
        uVar20 = uVar16;
      }
      uVar16 = 0;
      if (0 < (int)uVar22) {
        uVar16 = uVar22;
      }
      if (iVar11 <= (int)uVar22) {
        uVar16 = uVar27;
      }
      if ((int)uVar15 <= (int)uVar16) {
        do {
          uVar27 = uVar23;
          if ((int)uVar23 <= (int)uVar20) {
            do {
              cVar10 = FUN_146dab94a(param_6,(*(ushort *)((longlong)param_1 + 0x92) - 1) * uVar15 +
                                             uVar27,&local_120);
              if (cVar10 == '\0') goto LAB_146dab3d4;
              uVar27 = uVar27 + 1;
            } while (uVar20 + 1 != uVar27);
          }
          bVar28 = uVar15 != uVar16;
          uVar15 = uVar15 + 1;
        } while (bVar28);
      }
    }
    else {
      local_1bc = CONCAT31(local_1bc._1_3_,(int)uVar23 < (int)uVar20);
      local_1a4 = CONCAT31(local_1a4._1_3_,(int)uVar15 < (int)uVar21);
      uVar16 = uVar22 - uVar18;
      local_198 = (ulonglong)uVar16;
      local_19c = (uint)(uVar22 < uVar18 || uVar16 == 0);
      local_1a0 = (uint)(uVar22 >= uVar18 && uVar16 != 0);
      local_1c8 = *(double *)((longlong)param_1 + 0xd0);
      iVar11 = (int)((ulonglong)local_1c8 >> 0x20) * SUB84(local_1c8,0);
      iVar13 = iVar11 + 7;
      if (-1 < iVar11) {
        iVar13 = iVar11;
      }
      local_130 = (iVar13 >> 3) + 1;
      _Size = (size_t)local_130;
      local_1b8 = (ulonglong)uVar23;
      local_140 = local_1c8;
      local_128 = local_19c;
      local_124 = local_1a0;
      local_1b0 = (double *)FUN_14001cc68(_Size + (_Size == 0));
      lVar19 = 0;
      local_138 = local_1b0;
      memset(local_1b0,0,_Size);
      local_158 = (undefined8 *)0x0;
      uVar25 = CONCAT44(uVar15,(undefined4)local_1b8);
      uStack_150 = 1;
      FUN_146dac2c2(&local_158,0);
      *local_158 = uVar25;
      uVar16 = (uint)local_1b8;
      iVar11 = uVar15 * local_1c8._0_4_ + uVar16;
      iVar13 = uVar15 * local_1c8._0_4_ + uVar16 + 7;
      if (-1 < iVar11) {
        iVar13 = iVar11;
      }
      local_158[1] = 0xbff0000000000000;
      pbVar1 = (byte *)((longlong)local_1b0 + (longlong)(iVar13 >> 3));
      *pbVar1 = *pbVar1 | (byte)(1 << ((byte)iVar11 & 7));
      if (0 < (int)uStack_150) {
        local_184 = -uVar18;
        local_188 = (local_1bc & 0xff) * 2 + -1;
        local_18c = (local_1a4 & 0xff) * 2 + -1;
        local_19c = -local_19c;
        local_1a0 = -local_1a0;
        lVar26 = 8;
        local_1c8 = (double)(local_1b8 & 0xffffffff);
        local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar15);
        uVar24 = local_1b8;
        iVar13 = (int)uStack_150;
        local_1bc = uVar15;
        local_1a8 = uVar16;
        do {
          dVar29 = *(double *)((longlong)local_158 + lVar26);
          if (dVar29 <= local_120) {
            local_178 = *(longlong *)((longlong)local_158 + lVar26 + -8);
            local_168 = &local_140;
            local_160 = &local_158;
            iVar11 = (int)local_178;
            iVar13 = 0;
            if (0 < iVar11) {
              iVar13 = iVar11;
            }
            if (*(int *)((longlong)param_1 + 0xd0) <= iVar11) {
              iVar13 = *(int *)((longlong)param_1 + 0xd0) + -1;
            }
            iVar14 = (int)((ulonglong)local_178 >> 0x20);
            iVar17 = 0;
            if (iVar14 != 0 && -1 < local_178) {
              iVar17 = iVar14;
            }
            if (*(int *)((longlong)param_1 + 0xd4) <= iVar14) {
              iVar17 = *(int *)((longlong)param_1 + 0xd4) + -1;
            }
            local_170 = param_1;
            if (((iVar13 == iVar11) && (iVar17 == iVar14)) &&
               (local_1b8 = uVar24,
               cVar10 = FUN_146dab94a(param_6,(*(ushort *)((longlong)param_1 + 0x92) - 1) * iVar14 +
                                              iVar11,&local_120), uVar24 = local_1b8, cVar10 == '\0'
               )) break;
            if (dVar29 < 0.0) {
              uVar12 = (ulonglong)((local_1a0 & 1) << 3);
              auVar30._0_8_ =
                   *(double *)((longlong)local_118 + uVar12) /
                   ABS(*(double *)((longlong)param_1 + 0x50 + uVar12));
              auVar30._8_8_ = 0;
              if (0.0 <= auVar30._0_8_) {
                auVar30 = roundpd(auVar30,auVar30,2);
                dVar29 = auVar30._0_8_;
              }
              else {
                auVar30 = roundpd(auVar30,auVar30,1);
                dVar29 = auVar30._0_8_;
              }
              local_1a4 = (uint)dVar29;
              local_1b8 = uVar24;
              FUN_146dabc7c(&local_170,&local_178,&local_128);
              local_180 = local_19c;
              local_17c = local_1a0;
              FUN_146dabc7c(&local_170,&local_178,&local_180,local_1a4);
              uVar24 = local_1b8;
              if ((local_1c8._0_4_ == uVar20) && ((uint)local_1b0 == uVar21)) {
                local_1c8 = (double)(ulonglong)uVar20;
                local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar21);
              }
              else {
                iVar13 = (int)local_198 * 2;
                if (local_184 <= iVar13) {
                  local_198 = (ulonglong)((int)local_198 - uVar18);
                  local_1a8 = local_1c8._0_4_ + local_188;
                  local_1c8 = (double)(ulonglong)local_1a8;
                  uVar24 = (ulonglong)local_1a8;
                }
                uVar16 = local_1bc;
                if (iVar13 <= (int)uVar22) {
                  local_198 = (ulonglong)((int)local_198 + uVar22);
                  uVar15 = (uint)local_1b0 + local_18c;
                  local_1c8 = (double)(ulonglong)local_1a8;
                  uVar16 = uVar15;
                }
                uVar27 = local_140._0_4_ * uVar16 + SUB84(local_1c8,0);
                uVar23 = local_140._0_4_ * uVar16 + SUB84(local_1c8,0) + 7;
                if (-1 < (int)uVar27) {
                  uVar23 = uVar27;
                }
                bVar8 = *(byte *)((longlong)local_138 + (longlong)((int)uVar23 >> 3));
                if ((bVar8 >> (uVar27 & 7) & 1) == 0) {
                  *(byte *)((longlong)local_138 + (longlong)((int)uVar23 >> 3)) =
                       (byte)(1 << ((byte)uVar27 & 7)) | bVar8;
                  local_1c8 = (double)(longlong)(int)uStack_150;
                  uVar16 = (int)uStack_150 + 1;
                  uStack_150 = CONCAT44(uStack_150._4_4_,uVar16);
                  if (uStack_150._4_4_ < uVar16) {
                    local_1b8 = uVar24;
                    FUN_146dac2c2(&local_158,local_1c8);
                    uVar24 = local_1b8;
                  }
                  local_1a8 = (uint)uVar24;
                  local_158[(longlong)local_1c8 * 2] =
                       uVar24 & 0xffffffff | (ulonglong)uVar15 << 0x20;
                  local_158[(longlong)local_1c8 * 2 + 1] = 0xbff0000000000000;
                  local_1c8 = (double)(uVar24 & 0xffffffff);
                  local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar15);
                  local_1bc = uVar15;
                }
                else {
                  local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar16);
                  local_1bc = uVar16;
                }
              }
            }
            iVar13 = (int)uStack_150;
          }
          lVar19 = lVar19 + 1;
          lVar26 = lVar26 + 0x10;
        } while (lVar19 < iVar13);
      }
      if (local_158 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (local_138 != (double *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_146dab3d4:
  if ((local_e0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146dab94a FUN_146dab94a body=817 status=ok
// SIG undefined FUN_146dab94a(void)

undefined8 FUN_146dab94a(longlong param_1,uint param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar22;
  float fVar23;
  undefined1 auVar18 [16];
  float fVar24;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar36;
  float fVar37;
  undefined1 auVar34 [16];
  float fVar38;
  undefined1 auVar35 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar46 [16];
  float fVar47;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  float fVar48;
  undefined1 auStack_118 [32];
  float *local_f8;
  longlong local_e8;
  double *local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar4 = *(longlong **)(param_1 + 0x48);
  if ((((int)param_2 < 0) || ((int)plVar4[5] <= (int)param_2)) ||
     (*(char *)(plVar4[4] + (ulonglong)param_2) != -1)) {
    uVar3 = *(ushort *)((longlong)plVar4 + 0x72);
    iVar13 = (int)param_2 / (int)(uVar3 - 1) + param_2;
    dVar1 = (double)plVar4[0xc];
    lVar5 = *plVar4;
    lVar15 = (longlong)iVar13;
    dVar2 = (double)plVar4[0x10];
    iVar14 = iVar13 / (int)(uint)uVar3;
    auVar27._8_8_ = in_XMM2._8_8_;
    auVar27._0_8_ = (double)*(ushort *)(lVar5 + lVar15 * 2) * dVar2 + dVar1;
    auVar28._4_12_ = auVar27._4_12_;
    auVar28._0_4_ = (float)auVar27._0_8_;
    auVar39._4_12_ = in_XMM4._4_12_;
    auVar39._0_4_ = (float)((double)*(ushort *)(lVar5 + 2 + lVar15 * 2) * dVar2 + dVar1);
    auVar42._4_12_ = in_XMM5._4_12_;
    auVar42._0_4_ =
         (float)((double)*(ushort *)(lVar5 + ((ulonglong)uVar3 + lVar15) * 2) * dVar2 + dVar1);
    auVar25._4_12_ = unaff_XMM8._4_12_;
    auVar25._0_4_ = (float)iVar14;
    fVar32 = (float)(iVar13 % (int)(uint)uVar3);
    fVar47 = (float)((double)*(ushort *)(lVar5 + 2 + ((ulonglong)uVar3 + lVar15) * 2) * dVar2 +
                    dVar1);
    auVar18 = insertps(ZEXT416((uint)fVar32),auVar25,0x1c);
    auVar43 = insertps(auVar18,auVar28,0x20);
    auVar44 = insertps(ZEXT416((uint)(fVar32 + 1.0)),auVar25,0x1c);
    auVar45 = insertps(auVar44,auVar39,0x20);
    auVar46._0_4_ = auVar25._0_4_ + 1.0;
    auVar46._4_12_ = auVar25._4_12_;
    auVar44 = insertps(ZEXT416((uint)fVar32),auVar46,0x1c);
    auVar34 = insertps(auVar44,auVar42,0x20);
    auVar25 = insertps(ZEXT416((uint)(fVar32 + 1.0)),auVar46,0x1c);
    auVar44._4_4_ = unaff_XMM9_Db;
    auVar44._0_4_ = fVar47;
    auVar44._8_4_ = unaff_XMM9_Dc;
    auVar44._12_4_ = unaff_XMM9_Dd;
    auVar44 = insertps(auVar25,auVar44,0x20);
    fVar32 = auVar42._0_4_;
    if (fVar47 <= auVar42._0_4_) {
      fVar32 = fVar47;
    }
    fVar48 = auVar39._0_4_;
    if (fVar32 <= auVar39._0_4_) {
      fVar48 = fVar32;
    }
    fVar32 = auVar28._0_4_;
    if (fVar48 <= auVar28._0_4_) {
      fVar32 = fVar48;
    }
    if (auVar42._0_4_ <= fVar47) {
      auVar42._0_4_ = fVar47;
    }
    if (auVar39._0_4_ <= auVar42._0_4_) {
      auVar39._0_4_ = auVar42._0_4_;
    }
    if (auVar28._0_4_ <= auVar39._0_4_) {
      auVar28._0_4_ = auVar39._0_4_;
    }
    auVar25 = insertps(auVar25,auVar28,0x20);
    auVar6._4_4_ = (int)((ulonglong)auVar27._0_8_ >> 0x20);
    auVar6._0_4_ = fVar32;
    auVar6._8_4_ = in_XMM2._8_4_;
    auVar6._12_4_ = in_XMM2._12_4_;
    auVar18 = insertps(auVar18,auVar6,0x20);
    fVar32 = *(float *)(plVar4 + 10);
    fVar47 = *(float *)((longlong)plVar4 + 0x54);
    fVar48 = *(float *)(plVar4 + 0xb);
    fVar7 = *(float *)((longlong)plVar4 + 0x5c);
    local_d8 = auVar43._0_4_ * fVar32;
    fStack_d4 = auVar43._4_4_ * fVar47;
    fStack_d0 = auVar43._8_4_ * fVar48;
    fStack_cc = auVar43._12_4_ * fVar7;
    local_c8 = auVar45._0_4_ * fVar32;
    fStack_c4 = auVar45._4_4_ * fVar47;
    fStack_c0 = auVar45._8_4_ * fVar48;
    fStack_bc = auVar45._12_4_ * fVar7;
    local_b8 = auVar34._0_4_ * fVar32;
    fStack_b4 = auVar34._4_4_ * fVar47;
    fStack_b0 = auVar34._8_4_ * fVar48;
    fStack_ac = auVar34._12_4_ * fVar7;
    local_a8 = auVar44._0_4_ * fVar32;
    fStack_a4 = auVar44._4_4_ * fVar47;
    fStack_a0 = auVar44._8_4_ * fVar48;
    fStack_9c = auVar44._12_4_ * fVar7;
    auVar34._0_8_ = CONCAT44(auVar18._4_4_ * fVar47,auVar18._0_4_ * fVar32);
    auVar34._8_4_ = auVar18._8_4_ * fVar48;
    auVar34._12_4_ = auVar18._12_4_ * fVar7;
    auVar18._0_4_ = auVar25._0_4_ * fVar32;
    auVar18._4_4_ = auVar25._4_4_ * fVar47;
    auVar18._8_4_ = auVar25._8_4_ * fVar48;
    auVar18._12_4_ = auVar25._12_4_ * fVar7;
    auVar43._8_4_ = auVar34._8_4_;
    auVar43._0_8_ = auVar34._0_8_;
    auVar43._12_4_ = auVar34._12_4_;
    auVar25 = minps(auVar43,auVar18);
    auVar44 = maxps(auVar34,auVar18);
    fVar32 = *(float *)(param_1 + 0xd0);
    fVar47 = *(float *)(param_1 + 0xd4);
    fVar48 = *(float *)(param_1 + 0xd8);
    fVar7 = *(float *)(param_1 + 0xdc);
    uVar8 = *(uint *)(param_1 + 0x130);
    uVar9 = *(uint *)(param_1 + 0x134);
    uVar10 = *(uint *)(param_1 + 0x138);
    uVar11 = *(uint *)(param_1 + 0x13c);
    fVar33 = auVar25._0_4_ - *(float *)(param_1 + 0x140);
    fVar36 = auVar25._4_4_ - *(float *)(param_1 + 0x144);
    fVar37 = auVar25._8_4_ - *(float *)(param_1 + 0x148);
    fVar38 = auVar25._12_4_ - *(float *)(param_1 + 0x14c);
    fVar17 = auVar44._0_4_ + *(float *)(param_1 + 0x140);
    fVar22 = auVar44._4_4_ + *(float *)(param_1 + 0x144);
    fVar23 = auVar44._8_4_ + *(float *)(param_1 + 0x148);
    fVar24 = auVar44._12_4_ + *(float *)(param_1 + 0x14c);
    auVar45._0_4_ = -(uint)(fVar17 < fVar32 || fVar32 < fVar33) & uVar8;
    auVar45._4_4_ = -(uint)(fVar22 < fVar47 || fVar47 < fVar36) & uVar9;
    auVar45._8_4_ = -(uint)(fVar23 < fVar48 || fVar48 < fVar37) & uVar10;
    auVar45._12_4_ = -(uint)(fVar24 < fVar7 || fVar7 < fVar38) & uVar11;
    iVar13 = movmskps(iVar14,auVar45);
    local_e8 = param_1;
    local_e0 = param_3;
    if (iVar13 == 0) {
      auVar26._0_4_ = (float)*param_3;
      auVar26._4_4_ = auVar26._0_4_;
      auVar26._8_4_ = auVar26._0_4_;
      auVar26._12_4_ = auVar26._0_4_;
      auVar40._0_8_ =
           CONCAT44(~uVar9 & (uint)((fVar36 - fVar47) * *(float *)(param_1 + 0x104)),
                    ~uVar8 & (uint)((fVar33 - fVar32) * *(float *)(param_1 + 0x100)));
      auVar40._8_4_ = ~uVar10 & (uint)((fVar37 - fVar48) * *(float *)(param_1 + 0x108));
      auVar40._12_4_ = ~uVar11 & (uint)((fVar38 - fVar7) * *(float *)(param_1 + 0x10c));
      auVar35._0_4_ = ~uVar8 & (uint)((fVar17 - fVar32) * *(float *)(param_1 + 0x100));
      auVar35._4_4_ = ~uVar9 & (uint)((fVar22 - fVar47) * *(float *)(param_1 + 0x104));
      auVar35._8_4_ = ~uVar10 & (uint)((fVar23 - fVar48) * *(float *)(param_1 + 0x108));
      auVar35._12_4_ = ~uVar11 & (uint)((fVar24 - fVar7) * *(float *)(param_1 + 0x10c));
      auVar29._0_4_ = uVar8 & (uint)auVar26._0_4_;
      auVar29._4_4_ = uVar9 & (uint)auVar26._0_4_;
      auVar29._8_4_ = uVar10 & (uint)auVar26._0_4_;
      auVar29._12_4_ = uVar11 & (uint)auVar26._0_4_;
      auVar19._8_4_ = auVar40._8_4_;
      auVar19._0_8_ = auVar40._0_8_;
      auVar19._12_4_ = auVar40._12_4_;
      auVar44 = minps(auVar19,auVar29 | auVar35);
      auVar25 = maxps(auVar40,auVar29 | auVar35);
      auVar20._12_4_ = auVar44._12_4_;
      auVar30._0_8_ = auVar44._4_8_;
      auVar30._8_4_ = auVar44._0_4_;
      auVar30._12_4_ = auVar20._12_4_;
      auVar18 = maxps(auVar44,auVar30);
      auVar20._4_4_ = auVar44._0_4_;
      auVar20._0_4_ = auVar44._8_4_;
      auVar20._8_4_ = auVar44._4_4_;
      auVar44 = maxps(auVar18,auVar20);
      auVar18 = maxps(auVar44,ZEXT816(0));
      auVar41._12_4_ = auVar25._12_4_;
      auVar21._0_8_ = auVar25._4_8_;
      auVar21._8_4_ = auVar25._0_4_;
      auVar21._12_4_ = auVar41._12_4_;
      auVar44 = minps(auVar25,auVar21);
      auVar41._4_4_ = auVar25._0_4_;
      auVar41._0_4_ = auVar25._8_4_;
      auVar41._8_4_ = auVar25._4_4_;
      auVar44 = minps(auVar44,auVar41);
      auVar44 = minps(auVar44,auVar26);
      auVar31._4_4_ = -(uint)(auVar44._4_4_ < auVar18._4_4_);
      auVar31._0_4_ = -(uint)(auVar44._0_4_ < auVar18._0_4_);
      auVar31._8_4_ = -(uint)(auVar44._8_4_ < auVar18._8_4_);
      auVar31._12_4_ = -(uint)(auVar44._12_4_ < auVar18._12_4_);
      iVar13 = movmskps(0,auVar31);
      if (iVar13 == 0) {
        local_f8 = &local_a8;
        cVar12 = FUN_146dabd7e(&local_e8,param_2 * 2,&local_d8,&local_c8);
        if (cVar12 != '\0') {
          local_f8 = &local_b8;
          cVar12 = FUN_146dabd7e(&local_e8,param_2 * 2 | 1,&local_d8,&local_a8);
          if (cVar12 != '\0') goto LAB_146dabbc8;
        }
        uVar16 = 0;
        goto LAB_146dabbca;
      }
    }
  }
LAB_146dabbc8:
  uVar16 = 1;
LAB_146dabbca:
  if ((local_90 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16;
}



// FUNCTION 146dabc7c FUN_146dabc7c body=257 status=ok
// SIG undefined FUN_146dabc7c(void)

void FUN_146dabc7c(longlong *param_1,ulonglong *param_2,int *param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  if (0 < param_4) {
    lVar2 = *param_1;
    uVar11 = *param_2;
    uVar8 = uVar11 >> 0x20;
    while( true ) {
      uVar10 = (int)uVar11 + *param_3;
      uVar11 = (ulonglong)uVar10;
      if ((int)uVar10 < 0) break;
      uVar7 = (int)uVar8 + param_3[1];
      uVar8 = (ulonglong)uVar7;
      if ((int)uVar7 < 0) {
        return;
      }
      if (*(int *)(lVar2 + 0xd0) <= (int)uVar10) {
        return;
      }
      if (*(int *)(lVar2 + 0xd4) <= (int)uVar7) {
        return;
      }
      iVar5 = *(int *)param_1[1] * uVar7;
      uVar9 = iVar5 + uVar10;
      uVar6 = iVar5 + uVar10 + 7;
      if (-1 < (int)uVar9) {
        uVar6 = uVar9;
      }
      lVar3 = *(longlong *)((int *)param_1[1] + 2);
      bVar1 = *(byte *)(lVar3 + ((int)uVar6 >> 3));
      if ((bVar1 >> (uVar9 & 7) & 1) == 0) {
        *(byte *)(lVar3 + ((int)uVar6 >> 3)) = (byte)(1 << ((byte)uVar9 & 7)) | bVar1;
        plVar4 = (longlong *)param_1[2];
        iVar5 = (int)plVar4[1];
        *(uint *)(plVar4 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)plVar4 + 0xc) < iVar5 + 1U) {
          FUN_146dac2c2(plVar4,iVar5);
        }
        lVar3 = *plVar4;
        *(ulonglong *)(lVar3 + (longlong)iVar5 * 0x10) = CONCAT44(uVar7,uVar10);
        *(undefined8 *)(lVar3 + 8 + (longlong)iVar5 * 0x10) = 0;
      }
      param_4 = param_4 + -1;
      if (param_4 == 0) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 146dabd7e FUN_146dabd7e body=1347 status=ok
// SIG undefined FUN_146dabd7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_146dabd7e(longlong *param_1,undefined4 param_2,float *param_3,float *param_4,float *param_5
                  )

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  double dVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  char cVar11;
  int iVar12;
  double *pdVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar20;
  float fVar21;
  undefined1 auVar19 [16];
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
  undefined1 auStack_1b8 [32];
  double *local_198;
  double *local_190;
  undefined8 **local_188;
  float *local_180;
  float *local_178;
  undefined1 local_170;
  undefined *local_168;
  undefined8 *local_158;
  undefined8 local_150;
  code *local_148;
  double local_140;
  float local_138;
  float local_134;
  code *local_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  pdVar4 = (double *)*param_1;
  fVar16 = *param_3;
  fVar17 = param_3[1];
  fVar18 = param_3[2];
  local_c8 = *param_5 - fVar16;
  fStack_c4 = param_5[1] - fVar17;
  fStack_c0 = param_5[2] - fVar18;
  fStack_bc = param_5[3] - param_3[3];
  local_d8 = *param_4 - fVar16;
  fStack_d4 = param_4[1] - fVar17;
  fStack_d0 = param_4[2] - fVar18;
  fStack_cc = param_4[3] - param_3[3];
  local_e8 = 0;
  uStack_e0 = 0;
  fStack_f0 = (float)(pdVar4[0x10] - (double)(float)*(undefined8 *)(param_3 + 2));
  fStack_ec = (float)(pdVar4[0x11] -
                     (double)(float)((ulonglong)*(undefined8 *)(param_3 + 2) >> 0x20));
  local_f8 = (float)(pdVar4[0xe] - (double)fVar16);
  fStack_f4 = (float)(pdVar4[0xf] - (double)fVar17);
  dVar5 = pdVar4[0x16];
  lVar6 = *(longlong *)((longlong)dVar5 + 0x88);
  uVar14 = 0;
  uVar15 = 0;
  if (0.0 < *(double *)(lVar6 + 0x10)) {
    uVar14 = (undefined4)*(undefined8 *)((longlong)dVar5 + 0x10);
    uVar15 = (undefined4)((ulonglong)*(undefined8 *)((longlong)dVar5 + 0x10) >> 0x20);
  }
  fVar22 = (float)pdVar4[0x17] - (float)(double)CONCAT44(uVar15,uVar14);
  fVar25 = (float)pdVar4[0x17] - (float)(double)CONCAT44(uVar15,uVar14);
  fVar23 = fStack_c4 * local_d8 - fStack_d4 * local_c8;
  fVar26 = fStack_c0 * fStack_d4 - fStack_d0 * fStack_c4;
  fVar28 = local_c8 * fStack_d0 - local_d8 * fStack_c0;
  fVar30 = fStack_bc * fStack_cc - fStack_cc * fStack_bc;
  fVar30 = fVar30 * fVar30;
  fVar24 = fVar28 * fVar28 + fVar26 * fVar26;
  fVar27 = fVar26 * fVar26 + fVar28 * fVar28;
  fVar29 = fVar30 + fVar23 * fVar23;
  fVar30 = fVar23 * fVar23 + fVar30;
  auVar19._0_4_ = fVar29 + fVar24;
  auVar19._4_4_ = fVar30 + fVar27;
  auVar19._8_4_ = fVar24 + fVar29;
  auVar19._12_4_ = fVar27 + fVar30;
  auVar19 = sqrtps(auVar19,auVar19);
  auVar19 = divps(_DAT_1499314a0,auVar19);
  fVar26 = auVar19._0_4_ * fVar26;
  fVar28 = auVar19._4_4_ * fVar28;
  fVar23 = auVar19._8_4_ * fVar23;
  fVar31 = *(float *)(pdVar4 + 0x24) * -1.0;
  fVar32 = *(float *)((longlong)pdVar4 + 0x124) * -1.0;
  fVar33 = *(float *)(pdVar4 + 0x25) * -1.0;
  fVar34 = *(float *)((longlong)pdVar4 + 300) * 1.0;
  fVar24 = fVar28 * fVar31 - fVar26 * fVar32;
  fVar27 = fVar23 * fVar32 - fVar28 * fVar33;
  fVar29 = fVar26 * fVar33 - fVar23 * fVar31;
  fVar24 = fVar24 + fVar24;
  fVar27 = fVar27 + fVar27;
  fVar29 = fVar29 + fVar29;
  fVar16 = fVar16 - *(float *)(pdVar4 + 0x1e);
  fVar17 = fVar17 - *(float *)((longlong)pdVar4 + 0xf4);
  fVar18 = fVar18 - *(float *)(pdVar4 + 0x1f);
  fVar30 = fVar17 * fVar31 - fVar32 * fVar16;
  fVar20 = fVar18 * fVar32 - fVar33 * fVar17;
  fVar21 = fVar16 * fVar33 - fVar31 * fVar18;
  fVar30 = fVar30 + fVar30;
  fVar20 = fVar20 + fVar20;
  fVar21 = fVar21 + fVar21;
  fVar26 = (fVar24 * fVar32 - fVar29 * fVar33) + fVar34 * fVar27 + fVar26;
  fVar28 = (fVar27 * fVar33 - fVar24 * fVar31) + fVar34 * fVar29 + fVar28;
  fVar24 = (fVar29 * fVar31 - fVar27 * fVar32) + fVar34 * fVar24 + fVar23;
  if (0.0 <= (double)(0.0 - fVar24) * *(double *)((longlong)dVar5 + 0x30) *
             *(double *)(lVar6 + 0x48) +
             *(double *)((longlong)dVar5 + 0x20) * (double)(0.0 - fVar26) *
             *(double *)(lVar6 + 0x38) +
             (double)(0.0 - fVar28) * *(double *)((longlong)dVar5 + 0x28) *
             *(double *)(lVar6 + 0x40)) {
    dVar1 = *(double *)(lVar6 + 0x50);
    dVar3 = *(double *)(lVar6 + 0x48) * dVar1 + *(double *)(lVar6 + 0x30);
    dVar2 = *(double *)(lVar6 + 0x40) * dVar1 + *(double *)(lVar6 + 0x28);
    dVar1 = *(double *)(lVar6 + 0x38) * dVar1 + *(double *)(lVar6 + 0x20);
  }
  else {
    dVar1 = *(double *)(lVar6 + 0x20);
    dVar2 = *(double *)(lVar6 + 0x28);
    dVar3 = *(double *)(lVar6 + 0x30);
  }
  fVar16 = fVar24 * (((fVar21 * fVar31 - fVar20 * fVar32) + fVar34 * fVar30 + fVar18) -
                    (float)(*(double *)((longlong)dVar5 + 0x30) * dVar3)) +
           fVar26 * (((fVar30 * fVar32 - fVar21 * fVar33) + fVar34 * fVar20 + fVar16) -
                    (float)(*(double *)((longlong)dVar5 + 0x20) * dVar1)) +
           fVar28 * (((fVar20 * fVar33 - fVar30 * fVar31) + fVar34 * fVar21 + fVar17) -
                    (float)(*(double *)((longlong)dVar5 + 0x28) * dVar2));
  auVar9._4_4_ = -(uint)(fVar16 < fVar25);
  auVar9._0_4_ = -(uint)(fVar16 < fVar22);
  auVar9._8_4_ = -(uint)(fVar16 < fVar22);
  auVar9._12_4_ = -(uint)(fVar16 < fVar25);
  iVar12 = movmskps(param_2,auVar9);
  bVar10 = true;
  if (iVar12 == 0) {
    local_198 = pdVar4 + 0x22;
    local_138 = (float)*(double *)((longlong)dVar5 + 0x10);
    local_134 = (float)(double)(-(ulonglong)(0.0 < *(double *)(lVar6 + 0x10)) &
                               (ulonglong)*(double *)((longlong)dVar5 + 0x10));
    local_130 = FUN_146cc5596;
    local_158 = &local_e8;
    local_150 = 0;
    local_148 = FUN_14014b546;
    local_168 = &DAT_149f52c20;
    local_178 = &local_128;
    local_180 = &local_118;
    local_188 = (undefined8 **)&local_fc;
    local_190 = (double *)CONCAT44(local_190._4_4_,(float)*(double *)param_1[1]);
    local_170 = 1;
    local_140 = dVar5;
    cVar11 = FUN_1448541f8(&local_158,&local_140,pdVar4 + 0x24,&local_f8);
    pdVar13 = (double *)param_1[1];
    if (cVar11 != '\0') {
      local_118 = *param_3 + local_118;
      fStack_114 = param_3[1] + fStack_114;
      fStack_110 = param_3[2] + fStack_110;
      fStack_10c = param_3[3] + fStack_10c;
      local_198 = (double *)pdVar4[0x18];
      dVar5 = *pdVar13;
      local_190 = &local_140;
      local_188 = &local_158;
      FUN_1408d1e72(SUB84((double)(fStack_120 * *(float *)(pdVar4 + 0x23) +
                                  local_128 * *(float *)(pdVar4 + 0x22) +
                                  fStack_124 * *(float *)((longlong)pdVar4 + 0x114)),0),
                    SUB84(dVar5,0),SUB84((double)local_fc,0),pdVar4[0x17]);
      dVar1 = local_140 * dVar5;
      if (dVar1 < dVar5) {
        *pdVar13 = dVar1;
        auVar7._8_4_ = SUB84((double)fStack_124,0);
        auVar7._0_8_ = (double)local_128;
        auVar7._12_4_ = (int)((ulonglong)(double)fStack_124 >> 0x20);
        *(undefined1 (*) [16])(pdVar4 + 5) = auVar7;
        pdVar4[7] = (double)fStack_120;
        auVar8._8_4_ = SUB84((double)fStack_114,0);
        auVar8._0_8_ = (double)local_118;
        auVar8._12_4_ = (int)((ulonglong)(double)fStack_114 >> 0x20);
        *(undefined1 (*) [16])(pdVar4 + 2) = auVar8;
        pdVar4[4] = (double)fStack_110;
        *pdVar4 = dVar1;
        pdVar4[1] = (double)local_158;
        *(undefined4 *)(pdVar4 + 8) = param_2;
        pdVar13 = (double *)param_1[1];
      }
    }
    bVar10 = 0.0 < *pdVar13;
  }
  if ((local_b0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return bVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dac2c2 FUN_146dac2c2 body=132 status=ok
// SIG undefined FUN_146dac2c2(void)

void FUN_146dac2c2(longlong param_1,int param_2)

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



// FUNCTION 146dac348 FUN_146dac348 body=532 status=ok
// SIG undefined FUN_146dac348(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146dac348(undefined8 *param_1,undefined8 param_2,undefined8 param_3,double *param_4,
                  undefined8 *param_5,double *param_6,double param_7,undefined8 param_8,
                  undefined8 param_9)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined8 *puVar6;
  float fVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  
  *param_1 = 0x7fefffffffffffff;
  param_1[1] = 0x7fefffffffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  param_1[9] = param_2;
  puVar6 = param_1 + 10;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *param_5;
    param_5 = param_5 + 1;
    puVar6 = puVar6 + 1;
  }
  param_1[0x16] = param_3;
  param_1[0x17] = param_8;
  param_1[0x18] = param_9;
  dVar8 = (param_4[5] - param_4[2]) * 0.5;
  dVar10 = (param_4[4] - param_4[1]) * 0.5;
  dVar1 = (param_4[3] - *param_4) * 0.5;
  auVar2._4_4_ = (float)(param_4[1] + dVar10 + (double)param_1[0xf]);
  auVar2._0_4_ = (float)(*param_4 + dVar1 + (double)param_1[0xe]);
  auVar2._8_4_ = (float)(param_4[2] + dVar8 + (double)param_1[0x10]);
  auVar2._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x1a) = auVar2;
  fVar11 = (float)(double)param_1[0x10];
  fVar7 = (float)(double)param_1[0xe];
  auVar15._4_4_ = (float)(double)param_1[0xf];
  auVar15._0_4_ = fVar7;
  auVar15._8_4_ = fVar11;
  auVar15._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x1c) = auVar15;
  fVar14 = (float)param_6[2];
  fVar17 = (float)*param_6;
  fVar18 = (float)param_6[1];
  auVar3._4_4_ = fVar18;
  auVar3._0_4_ = fVar17;
  auVar3._8_4_ = fVar14;
  auVar3._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x22) = auVar3;
  *(float *)(param_1 + 0x1e) = (float)param_7 * fVar17 + fVar7;
  *(float *)((longlong)param_1 + 0xf4) = (float)param_7 * fVar18 + (float)(double)param_1[0xf];
  *(float *)(param_1 + 0x1f) = (float)param_7 * fVar14 + fVar11;
  *(float *)((longlong)param_1 + 0xfc) = (float)param_7 * 0.0 + 0.0;
  fVar7 = (float)(double)param_1[0xc];
  fVar11 = (float)(double)param_1[0xd];
  fVar12 = (float)(double)param_1[10];
  fVar13 = (float)(double)param_1[0xb];
  *(uint *)(param_1 + 0x26) = -(uint)(ABS(fVar17) < 1e-08);
  *(uint *)((longlong)param_1 + 0x134) = -(uint)(ABS(fVar18) < 1e-08);
  *(uint *)(param_1 + 0x27) = -(uint)(ABS(fVar14) < 1e-08);
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0xffffffff;
  auVar15 = _DAT_1499314a0;
  auVar4._4_4_ = fVar18;
  auVar4._0_4_ = fVar17;
  auVar4._8_4_ = fVar14;
  auVar4._12_4_ = 0;
  auVar19 = divps(_DAT_1499314a0,auVar4);
  *(uint *)(param_1 + 0x20) = ~-(uint)(ABS(fVar17) < 1e-08) & auVar19._0_4_;
  *(uint *)((longlong)param_1 + 0x104) = ~-(uint)(ABS(fVar18) < 1e-08) & auVar19._4_4_;
  *(uint *)(param_1 + 0x21) = ~-(uint)(ABS(fVar14) < 1e-08) & auVar19._8_4_;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  fVar14 = fVar12 * fVar12 + fVar13 * fVar13;
  fVar17 = fVar7 * fVar7 + fVar11 * fVar11;
  *(float *)(param_1 + 0x28) = (float)ABS(dVar1);
  *(float *)((longlong)param_1 + 0x144) = (float)ABS(dVar10);
  *(float *)(param_1 + 0x29) = (float)ABS(dVar8);
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  auVar9._0_4_ = fVar17 + fVar14;
  auVar9._4_4_ = fVar17 + fVar14;
  auVar9._8_4_ = fVar14 + fVar17;
  auVar9._12_4_ = fVar14 + fVar17;
  auVar19 = sqrtps(auVar9,auVar9);
  auVar15 = divps(auVar15,auVar19);
  auVar16._0_4_ = auVar15._0_4_ * fVar12;
  auVar16._4_4_ = auVar15._4_4_ * fVar13;
  auVar16._8_4_ = auVar15._8_4_ * fVar7;
  auVar16._12_4_ = auVar15._12_4_ * fVar11;
  auVar19._4_4_ = -(uint)(1e-08 <= auVar9._4_4_);
  auVar19._0_4_ = -(uint)(1e-08 <= auVar9._0_4_);
  auVar19._8_4_ = -(uint)(1e-08 <= auVar9._8_4_);
  auVar19._12_4_ = -(uint)(1e-08 <= auVar9._12_4_);
  auVar15 = blendvps(_DAT_149932320,auVar16,auVar19);
  *(undefined1 (*) [16])(param_1 + 0x24) = auVar15;
  return;
}



// FUNCTION 146dac55c FUN_146dac55c body=2375 status=ok
// SIG undefined FUN_146dac55c(void)

void FUN_146dac55c(double param_1,double *param_2,double *param_3,double param_4,double *param_5,
                  undefined8 param_6)

{
  byte *pbVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  byte bVar8;
  double dVar9;
  char cVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  size_t _Size;
  undefined8 uVar25;
  longlong lVar26;
  uint uVar27;
  bool bVar28;
  double dVar29;
  undefined1 auVar30 [16];
  double *pdVar31;
  double dVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStack_1e8 [32];
  double local_1c8;
  uint local_1bc;
  ulonglong local_1b8;
  double *local_1b0;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  ulonglong local_198;
  int local_18c;
  int local_188;
  int local_184;
  uint local_180;
  uint local_17c;
  longlong local_178;
  double local_170;
  double *local_168;
  undefined8 **local_160;
  undefined8 *local_158;
  undefined8 uStack_150;
  double local_140;
  double *local_138;
  int local_130;
  uint local_128;
  uint local_124;
  double local_120;
  double local_118 [4];
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  dVar29 = *param_5;
  dVar2 = param_5[1];
  local_118[3] = *(double *)((longlong)param_1 + 0x138) - dVar29;
  local_f0 = *(double *)((longlong)param_1 + 0x150) + dVar29;
  local_e8 = *(double *)((longlong)param_1 + 0x158) + dVar2;
  local_f8 = *(double *)((longlong)param_1 + 0x140) - dVar2;
  dVar3 = *param_3;
  dVar4 = param_3[1];
  dVar5 = *(double *)((longlong)param_1 + 0x50);
  dVar6 = *(double *)((longlong)param_1 + 0x58);
  dVar32 = (double)(-(ulonglong)(0.0 < dVar4) & 0x3ff0000000000000 |
                   (ulonglong)
                   (~(uint)(-(ulonglong)(0.0 < dVar4) >> 0x20) &
                   (uint)(-(ulonglong)(dVar4 < 0.0) >> 0x20) & 0xbff00000) << 0x20) * dVar2;
  local_170 = (double)(-(ulonglong)(0.0 < dVar3) & 0x3ff0000000000000 |
                      (ulonglong)
                      (~(uint)(-(ulonglong)(0.0 < dVar3) >> 0x20) &
                      (uint)(-(ulonglong)(dVar3 < 0.0) >> 0x20) & 0xbff00000) << 0x20) * dVar29;
  local_138 = (double *)(param_2[1] - dVar32);
  local_140 = *param_2 - local_170;
  local_168 = (double *)(dVar4 * param_4 + param_2[1] + dVar32);
  local_170 = dVar3 * param_4 + *param_2 + local_170;
  local_118[0] = dVar29;
  local_118[1] = dVar2;
  cVar10 = FUN_1448596be();
  if (cVar10 != '\0') {
    dVar3 = *(double *)((longlong)param_1 + 0xb0);
    dVar4 = *(double *)((longlong)param_1 + 0xb8);
    dVar32 = *(double *)((longlong)param_1 + 0xe0);
    dVar7 = *(double *)((longlong)param_1 + 0xd8);
    uVar15 = (uint)((local_140 / dVar5 - dVar3) / dVar7);
    uVar20 = (uint)(((double)local_138 / dVar6 - dVar4) / dVar32);
    iVar13 = *(int *)((longlong)param_1 + 0xd0);
    uVar16 = iVar13 - 1;
    uVar23 = 0;
    if (0 < (int)uVar15) {
      uVar23 = uVar15;
    }
    if (iVar13 <= (int)uVar15) {
      uVar23 = uVar16;
    }
    iVar11 = *(int *)((longlong)param_1 + 0xd4);
    uVar15 = 0;
    if (0 < (int)uVar20) {
      uVar15 = uVar20;
    }
    uVar27 = iVar11 - 1;
    if (iVar11 <= (int)uVar20) {
      uVar15 = uVar27;
    }
    uVar21 = (uint)((local_170 / dVar5 - dVar3) / dVar7);
    uVar22 = (uint)(((double)local_168 / dVar6 - dVar4) / dVar32);
    uVar20 = 0;
    if (0 < (int)uVar21) {
      uVar20 = uVar21;
    }
    if (iVar13 <= (int)uVar21) {
      uVar20 = uVar16;
    }
    uVar21 = 0;
    if (0 < (int)uVar22) {
      uVar21 = uVar22;
    }
    if (iVar11 <= (int)uVar22) {
      uVar21 = uVar27;
    }
    uVar22 = -(uVar20 - uVar23);
    if ((int)uVar22 < 0) {
      uVar22 = uVar20 - uVar23;
    }
    uVar18 = -(uVar21 - uVar15);
    if ((int)uVar18 < 0) {
      uVar18 = uVar21 - uVar15;
    }
    local_120 = param_4;
    if (uVar18 == 0 && uVar22 == 0) {
      uVar33 = SUB84(local_140,0);
      uVar34 = (int)((ulonglong)local_140 >> 0x20);
      if (local_170 <= local_140) {
        uVar33 = SUB84(local_170,0);
        uVar34 = (int)((ulonglong)local_170 >> 0x20);
      }
      uVar35 = SUB84(local_138,0);
      uVar36 = (undefined4)((ulonglong)local_138 >> 0x20);
      if ((double)local_168 <= (double)local_138) {
        uVar35 = SUB84(local_168,0);
        uVar36 = (undefined4)((ulonglong)local_168 >> 0x20);
      }
      uVar15 = (uint)((((double)CONCAT44(uVar34,uVar33) - dVar29) / dVar5 - dVar3) / dVar7);
      uVar20 = (uint)((((double)CONCAT44(uVar36,uVar35) - dVar2) / dVar6 - dVar4) / dVar32);
      uVar23 = 0;
      if (0 < (int)uVar15) {
        uVar23 = uVar15;
      }
      dVar9 = local_140;
      if (local_140 <= local_170) {
        dVar9 = local_170;
      }
      if (iVar13 <= (int)uVar15) {
        uVar23 = uVar16;
      }
      uVar15 = 0;
      if (0 < (int)uVar20) {
        uVar15 = uVar20;
      }
      if (iVar11 <= (int)uVar20) {
        uVar15 = uVar27;
      }
      pdVar31 = local_138;
      if ((double)local_138 <= (double)local_168) {
        pdVar31 = local_168;
      }
      uVar21 = (uint)(((dVar9 + dVar29) / dVar5 - dVar3) / dVar7);
      uVar22 = (uint)((((double)pdVar31 + dVar2) / dVar6 - dVar4) / dVar32);
      uVar20 = 0;
      if (0 < (int)uVar21) {
        uVar20 = uVar21;
      }
      if (iVar13 <= (int)uVar21) {
        uVar20 = uVar16;
      }
      uVar16 = 0;
      if (0 < (int)uVar22) {
        uVar16 = uVar22;
      }
      if (iVar11 <= (int)uVar22) {
        uVar16 = uVar27;
      }
      if ((int)uVar15 <= (int)uVar16) {
        do {
          uVar27 = uVar23;
          if ((int)uVar23 <= (int)uVar20) {
            do {
              cVar10 = FUN_146dacea4(param_6,(*(ushort *)((longlong)param_1 + 0x92) - 1) * uVar15 +
                                             uVar27,&local_120);
              if (cVar10 == '\0') goto LAB_146dac92e;
              uVar27 = uVar27 + 1;
            } while (uVar20 + 1 != uVar27);
          }
          bVar28 = uVar15 != uVar16;
          uVar15 = uVar15 + 1;
        } while (bVar28);
      }
    }
    else {
      local_1bc = CONCAT31(local_1bc._1_3_,(int)uVar23 < (int)uVar20);
      local_1a4 = CONCAT31(local_1a4._1_3_,(int)uVar15 < (int)uVar21);
      uVar16 = uVar22 - uVar18;
      local_198 = (ulonglong)uVar16;
      local_19c = (uint)(uVar22 < uVar18 || uVar16 == 0);
      local_1a0 = (uint)(uVar22 >= uVar18 && uVar16 != 0);
      local_1c8 = *(double *)((longlong)param_1 + 0xd0);
      iVar11 = (int)((ulonglong)local_1c8 >> 0x20) * SUB84(local_1c8,0);
      iVar13 = iVar11 + 7;
      if (-1 < iVar11) {
        iVar13 = iVar11;
      }
      local_130 = (iVar13 >> 3) + 1;
      _Size = (size_t)local_130;
      local_1b8 = (ulonglong)uVar23;
      local_140 = local_1c8;
      local_128 = local_19c;
      local_124 = local_1a0;
      local_1b0 = (double *)FUN_14001cc68(_Size + (_Size == 0));
      lVar19 = 0;
      local_138 = local_1b0;
      memset(local_1b0,0,_Size);
      local_158 = (undefined8 *)0x0;
      uVar25 = CONCAT44(uVar15,(undefined4)local_1b8);
      uStack_150 = 1;
      FUN_146dad772(&local_158,0);
      *local_158 = uVar25;
      uVar16 = (uint)local_1b8;
      iVar11 = uVar15 * local_1c8._0_4_ + uVar16;
      iVar13 = uVar15 * local_1c8._0_4_ + uVar16 + 7;
      if (-1 < iVar11) {
        iVar13 = iVar11;
      }
      local_158[1] = 0xbff0000000000000;
      pbVar1 = (byte *)((longlong)local_1b0 + (longlong)(iVar13 >> 3));
      *pbVar1 = *pbVar1 | (byte)(1 << ((byte)iVar11 & 7));
      if (0 < (int)uStack_150) {
        local_184 = -uVar18;
        local_188 = (local_1bc & 0xff) * 2 + -1;
        local_18c = (local_1a4 & 0xff) * 2 + -1;
        local_19c = -local_19c;
        local_1a0 = -local_1a0;
        lVar26 = 8;
        local_1c8 = (double)(local_1b8 & 0xffffffff);
        local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar15);
        uVar24 = local_1b8;
        iVar13 = (int)uStack_150;
        local_1bc = uVar15;
        local_1a8 = uVar16;
        do {
          dVar29 = *(double *)((longlong)local_158 + lVar26);
          if (dVar29 <= local_120) {
            local_178 = *(longlong *)((longlong)local_158 + lVar26 + -8);
            local_168 = &local_140;
            local_160 = &local_158;
            iVar11 = (int)local_178;
            iVar13 = 0;
            if (0 < iVar11) {
              iVar13 = iVar11;
            }
            if (*(int *)((longlong)param_1 + 0xd0) <= iVar11) {
              iVar13 = *(int *)((longlong)param_1 + 0xd0) + -1;
            }
            iVar14 = (int)((ulonglong)local_178 >> 0x20);
            iVar17 = 0;
            if (iVar14 != 0 && -1 < local_178) {
              iVar17 = iVar14;
            }
            if (*(int *)((longlong)param_1 + 0xd4) <= iVar14) {
              iVar17 = *(int *)((longlong)param_1 + 0xd4) + -1;
            }
            local_170 = param_1;
            if (((iVar13 == iVar11) && (iVar17 == iVar14)) &&
               (local_1b8 = uVar24,
               cVar10 = FUN_146dacea4(param_6,(*(ushort *)((longlong)param_1 + 0x92) - 1) * iVar14 +
                                              iVar11,&local_120), uVar24 = local_1b8, cVar10 == '\0'
               )) break;
            if (dVar29 < 0.0) {
              uVar12 = (ulonglong)((local_1a0 & 1) << 3);
              auVar30._0_8_ =
                   *(double *)((longlong)local_118 + uVar12) /
                   ABS(*(double *)((longlong)param_1 + 0x50 + uVar12));
              auVar30._8_8_ = 0;
              if (0.0 <= auVar30._0_8_) {
                auVar30 = roundpd(auVar30,auVar30,2);
                dVar29 = auVar30._0_8_;
              }
              else {
                auVar30 = roundpd(auVar30,auVar30,1);
                dVar29 = auVar30._0_8_;
              }
              local_1a4 = (uint)dVar29;
              local_1b8 = uVar24;
              FUN_146dad1d6(&local_170,&local_178,&local_128);
              local_180 = local_19c;
              local_17c = local_1a0;
              FUN_146dad1d6(&local_170,&local_178,&local_180,local_1a4);
              uVar24 = local_1b8;
              if ((local_1c8._0_4_ == uVar20) && ((uint)local_1b0 == uVar21)) {
                local_1c8 = (double)(ulonglong)uVar20;
                local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar21);
              }
              else {
                iVar13 = (int)local_198 * 2;
                if (local_184 <= iVar13) {
                  local_198 = (ulonglong)((int)local_198 - uVar18);
                  local_1a8 = local_1c8._0_4_ + local_188;
                  local_1c8 = (double)(ulonglong)local_1a8;
                  uVar24 = (ulonglong)local_1a8;
                }
                uVar16 = local_1bc;
                if (iVar13 <= (int)uVar22) {
                  local_198 = (ulonglong)((int)local_198 + uVar22);
                  uVar15 = (uint)local_1b0 + local_18c;
                  local_1c8 = (double)(ulonglong)local_1a8;
                  uVar16 = uVar15;
                }
                uVar27 = local_140._0_4_ * uVar16 + SUB84(local_1c8,0);
                uVar23 = local_140._0_4_ * uVar16 + SUB84(local_1c8,0) + 7;
                if (-1 < (int)uVar27) {
                  uVar23 = uVar27;
                }
                bVar8 = *(byte *)((longlong)local_138 + (longlong)((int)uVar23 >> 3));
                if ((bVar8 >> (uVar27 & 7) & 1) == 0) {
                  *(byte *)((longlong)local_138 + (longlong)((int)uVar23 >> 3)) =
                       (byte)(1 << ((byte)uVar27 & 7)) | bVar8;
                  local_1c8 = (double)(longlong)(int)uStack_150;
                  uVar16 = (int)uStack_150 + 1;
                  uStack_150 = CONCAT44(uStack_150._4_4_,uVar16);
                  if (uStack_150._4_4_ < uVar16) {
                    local_1b8 = uVar24;
                    FUN_146dad772(&local_158,local_1c8);
                    uVar24 = local_1b8;
                  }
                  local_1a8 = (uint)uVar24;
                  local_158[(longlong)local_1c8 * 2] =
                       uVar24 & 0xffffffff | (ulonglong)uVar15 << 0x20;
                  local_158[(longlong)local_1c8 * 2 + 1] = 0xbff0000000000000;
                  local_1c8 = (double)(uVar24 & 0xffffffff);
                  local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar15);
                  local_1bc = uVar15;
                }
                else {
                  local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar16);
                  local_1bc = uVar16;
                }
              }
            }
            iVar13 = (int)uStack_150;
          }
          lVar19 = lVar19 + 1;
          lVar26 = lVar26 + 0x10;
        } while (lVar19 < iVar13);
      }
      if (local_158 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (local_138 != (double *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_146dac92e:
  if ((local_e0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146dacea4 FUN_146dacea4 body=817 status=ok
// SIG undefined FUN_146dacea4(void)

undefined8 FUN_146dacea4(longlong param_1,uint param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar22;
  float fVar23;
  undefined1 auVar18 [16];
  float fVar24;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar36;
  float fVar37;
  undefined1 auVar34 [16];
  float fVar38;
  undefined1 auVar35 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar46 [16];
  float fVar47;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  float fVar48;
  undefined1 auStack_118 [32];
  float *local_f8;
  longlong local_e8;
  double *local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar4 = *(longlong **)(param_1 + 0x48);
  if ((((int)param_2 < 0) || ((int)plVar4[5] <= (int)param_2)) ||
     (*(char *)(plVar4[4] + (ulonglong)param_2) != -1)) {
    uVar3 = *(ushort *)((longlong)plVar4 + 0x72);
    iVar13 = (int)param_2 / (int)(uVar3 - 1) + param_2;
    dVar1 = (double)plVar4[0xc];
    lVar5 = *plVar4;
    lVar15 = (longlong)iVar13;
    dVar2 = (double)plVar4[0x10];
    iVar14 = iVar13 / (int)(uint)uVar3;
    auVar27._8_8_ = in_XMM2._8_8_;
    auVar27._0_8_ = (double)*(ushort *)(lVar5 + lVar15 * 2) * dVar2 + dVar1;
    auVar28._4_12_ = auVar27._4_12_;
    auVar28._0_4_ = (float)auVar27._0_8_;
    auVar39._4_12_ = in_XMM4._4_12_;
    auVar39._0_4_ = (float)((double)*(ushort *)(lVar5 + 2 + lVar15 * 2) * dVar2 + dVar1);
    auVar42._4_12_ = in_XMM5._4_12_;
    auVar42._0_4_ =
         (float)((double)*(ushort *)(lVar5 + ((ulonglong)uVar3 + lVar15) * 2) * dVar2 + dVar1);
    auVar25._4_12_ = unaff_XMM8._4_12_;
    auVar25._0_4_ = (float)iVar14;
    fVar32 = (float)(iVar13 % (int)(uint)uVar3);
    fVar47 = (float)((double)*(ushort *)(lVar5 + 2 + ((ulonglong)uVar3 + lVar15) * 2) * dVar2 +
                    dVar1);
    auVar18 = insertps(ZEXT416((uint)fVar32),auVar25,0x1c);
    auVar43 = insertps(auVar18,auVar28,0x20);
    auVar44 = insertps(ZEXT416((uint)(fVar32 + 1.0)),auVar25,0x1c);
    auVar45 = insertps(auVar44,auVar39,0x20);
    auVar46._0_4_ = auVar25._0_4_ + 1.0;
    auVar46._4_12_ = auVar25._4_12_;
    auVar44 = insertps(ZEXT416((uint)fVar32),auVar46,0x1c);
    auVar34 = insertps(auVar44,auVar42,0x20);
    auVar25 = insertps(ZEXT416((uint)(fVar32 + 1.0)),auVar46,0x1c);
    auVar44._4_4_ = unaff_XMM9_Db;
    auVar44._0_4_ = fVar47;
    auVar44._8_4_ = unaff_XMM9_Dc;
    auVar44._12_4_ = unaff_XMM9_Dd;
    auVar44 = insertps(auVar25,auVar44,0x20);
    fVar32 = auVar42._0_4_;
    if (fVar47 <= auVar42._0_4_) {
      fVar32 = fVar47;
    }
    fVar48 = auVar39._0_4_;
    if (fVar32 <= auVar39._0_4_) {
      fVar48 = fVar32;
    }
    fVar32 = auVar28._0_4_;
    if (fVar48 <= auVar28._0_4_) {
      fVar32 = fVar48;
    }
    if (auVar42._0_4_ <= fVar47) {
      auVar42._0_4_ = fVar47;
    }
    if (auVar39._0_4_ <= auVar42._0_4_) {
      auVar39._0_4_ = auVar42._0_4_;
    }
    if (auVar28._0_4_ <= auVar39._0_4_) {
      auVar28._0_4_ = auVar39._0_4_;
    }
    auVar25 = insertps(auVar25,auVar28,0x20);
    auVar6._4_4_ = (int)((ulonglong)auVar27._0_8_ >> 0x20);
    auVar6._0_4_ = fVar32;
    auVar6._8_4_ = in_XMM2._8_4_;
    auVar6._12_4_ = in_XMM2._12_4_;
    auVar18 = insertps(auVar18,auVar6,0x20);
    fVar32 = *(float *)(plVar4 + 10);
    fVar47 = *(float *)((longlong)plVar4 + 0x54);
    fVar48 = *(float *)(plVar4 + 0xb);
    fVar7 = *(float *)((longlong)plVar4 + 0x5c);
    local_d8 = auVar43._0_4_ * fVar32;
    fStack_d4 = auVar43._4_4_ * fVar47;
    fStack_d0 = auVar43._8_4_ * fVar48;
    fStack_cc = auVar43._12_4_ * fVar7;
    local_c8 = auVar45._0_4_ * fVar32;
    fStack_c4 = auVar45._4_4_ * fVar47;
    fStack_c0 = auVar45._8_4_ * fVar48;
    fStack_bc = auVar45._12_4_ * fVar7;
    local_b8 = auVar34._0_4_ * fVar32;
    fStack_b4 = auVar34._4_4_ * fVar47;
    fStack_b0 = auVar34._8_4_ * fVar48;
    fStack_ac = auVar34._12_4_ * fVar7;
    local_a8 = auVar44._0_4_ * fVar32;
    fStack_a4 = auVar44._4_4_ * fVar47;
    fStack_a0 = auVar44._8_4_ * fVar48;
    fStack_9c = auVar44._12_4_ * fVar7;
    auVar34._0_8_ = CONCAT44(auVar18._4_4_ * fVar47,auVar18._0_4_ * fVar32);
    auVar34._8_4_ = auVar18._8_4_ * fVar48;
    auVar34._12_4_ = auVar18._12_4_ * fVar7;
    auVar18._0_4_ = auVar25._0_4_ * fVar32;
    auVar18._4_4_ = auVar25._4_4_ * fVar47;
    auVar18._8_4_ = auVar25._8_4_ * fVar48;
    auVar18._12_4_ = auVar25._12_4_ * fVar7;
    auVar43._8_4_ = auVar34._8_4_;
    auVar43._0_8_ = auVar34._0_8_;
    auVar43._12_4_ = auVar34._12_4_;
    auVar25 = minps(auVar43,auVar18);
    auVar44 = maxps(auVar34,auVar18);
    fVar32 = *(float *)(param_1 + 0xd0);
    fVar47 = *(float *)(param_1 + 0xd4);
    fVar48 = *(float *)(param_1 + 0xd8);
    fVar7 = *(float *)(param_1 + 0xdc);
    uVar8 = *(uint *)(param_1 + 0x130);
    uVar9 = *(uint *)(param_1 + 0x134);
    uVar10 = *(uint *)(param_1 + 0x138);
    uVar11 = *(uint *)(param_1 + 0x13c);
    fVar33 = auVar25._0_4_ - *(float *)(param_1 + 0x140);
    fVar36 = auVar25._4_4_ - *(float *)(param_1 + 0x144);
    fVar37 = auVar25._8_4_ - *(float *)(param_1 + 0x148);
    fVar38 = auVar25._12_4_ - *(float *)(param_1 + 0x14c);
    fVar17 = auVar44._0_4_ + *(float *)(param_1 + 0x140);
    fVar22 = auVar44._4_4_ + *(float *)(param_1 + 0x144);
    fVar23 = auVar44._8_4_ + *(float *)(param_1 + 0x148);
    fVar24 = auVar44._12_4_ + *(float *)(param_1 + 0x14c);
    auVar45._0_4_ = -(uint)(fVar17 < fVar32 || fVar32 < fVar33) & uVar8;
    auVar45._4_4_ = -(uint)(fVar22 < fVar47 || fVar47 < fVar36) & uVar9;
    auVar45._8_4_ = -(uint)(fVar23 < fVar48 || fVar48 < fVar37) & uVar10;
    auVar45._12_4_ = -(uint)(fVar24 < fVar7 || fVar7 < fVar38) & uVar11;
    iVar13 = movmskps(iVar14,auVar45);
    local_e8 = param_1;
    local_e0 = param_3;
    if (iVar13 == 0) {
      auVar26._0_4_ = (float)*param_3;
      auVar26._4_4_ = auVar26._0_4_;
      auVar26._8_4_ = auVar26._0_4_;
      auVar26._12_4_ = auVar26._0_4_;
      auVar40._0_8_ =
           CONCAT44(~uVar9 & (uint)((fVar36 - fVar47) * *(float *)(param_1 + 0x104)),
                    ~uVar8 & (uint)((fVar33 - fVar32) * *(float *)(param_1 + 0x100)));
      auVar40._8_4_ = ~uVar10 & (uint)((fVar37 - fVar48) * *(float *)(param_1 + 0x108));
      auVar40._12_4_ = ~uVar11 & (uint)((fVar38 - fVar7) * *(float *)(param_1 + 0x10c));
      auVar35._0_4_ = ~uVar8 & (uint)((fVar17 - fVar32) * *(float *)(param_1 + 0x100));
      auVar35._4_4_ = ~uVar9 & (uint)((fVar22 - fVar47) * *(float *)(param_1 + 0x104));
      auVar35._8_4_ = ~uVar10 & (uint)((fVar23 - fVar48) * *(float *)(param_1 + 0x108));
      auVar35._12_4_ = ~uVar11 & (uint)((fVar24 - fVar7) * *(float *)(param_1 + 0x10c));
      auVar29._0_4_ = uVar8 & (uint)auVar26._0_4_;
      auVar29._4_4_ = uVar9 & (uint)auVar26._0_4_;
      auVar29._8_4_ = uVar10 & (uint)auVar26._0_4_;
      auVar29._12_4_ = uVar11 & (uint)auVar26._0_4_;
      auVar19._8_4_ = auVar40._8_4_;
      auVar19._0_8_ = auVar40._0_8_;
      auVar19._12_4_ = auVar40._12_4_;
      auVar44 = minps(auVar19,auVar29 | auVar35);
      auVar25 = maxps(auVar40,auVar29 | auVar35);
      auVar20._12_4_ = auVar44._12_4_;
      auVar30._0_8_ = auVar44._4_8_;
      auVar30._8_4_ = auVar44._0_4_;
      auVar30._12_4_ = auVar20._12_4_;
      auVar18 = maxps(auVar44,auVar30);
      auVar20._4_4_ = auVar44._0_4_;
      auVar20._0_4_ = auVar44._8_4_;
      auVar20._8_4_ = auVar44._4_4_;
      auVar44 = maxps(auVar18,auVar20);
      auVar18 = maxps(auVar44,ZEXT816(0));
      auVar41._12_4_ = auVar25._12_4_;
      auVar21._0_8_ = auVar25._4_8_;
      auVar21._8_4_ = auVar25._0_4_;
      auVar21._12_4_ = auVar41._12_4_;
      auVar44 = minps(auVar25,auVar21);
      auVar41._4_4_ = auVar25._0_4_;
      auVar41._0_4_ = auVar25._8_4_;
      auVar41._8_4_ = auVar25._4_4_;
      auVar44 = minps(auVar44,auVar41);
      auVar44 = minps(auVar44,auVar26);
      auVar31._4_4_ = -(uint)(auVar44._4_4_ < auVar18._4_4_);
      auVar31._0_4_ = -(uint)(auVar44._0_4_ < auVar18._0_4_);
      auVar31._8_4_ = -(uint)(auVar44._8_4_ < auVar18._8_4_);
      auVar31._12_4_ = -(uint)(auVar44._12_4_ < auVar18._12_4_);
      iVar13 = movmskps(0,auVar31);
      if (iVar13 == 0) {
        local_f8 = &local_a8;
        cVar12 = FUN_146dad2d8(&local_e8,param_2 * 2,&local_d8,&local_c8);
        if (cVar12 != '\0') {
          local_f8 = &local_b8;
          cVar12 = FUN_146dad2d8(&local_e8,param_2 * 2 | 1,&local_d8,&local_a8);
          if (cVar12 != '\0') goto LAB_146dad122;
        }
        uVar16 = 0;
        goto LAB_146dad124;
      }
    }
  }
LAB_146dad122:
  uVar16 = 1;
LAB_146dad124:
  if ((local_90 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16;
}



// FUNCTION 146dad1d6 FUN_146dad1d6 body=257 status=ok
// SIG undefined FUN_146dad1d6(void)

void FUN_146dad1d6(longlong *param_1,ulonglong *param_2,int *param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  if (0 < param_4) {
    lVar2 = *param_1;
    uVar11 = *param_2;
    uVar8 = uVar11 >> 0x20;
    while( true ) {
      uVar10 = (int)uVar11 + *param_3;
      uVar11 = (ulonglong)uVar10;
      if ((int)uVar10 < 0) break;
      uVar7 = (int)uVar8 + param_3[1];
      uVar8 = (ulonglong)uVar7;
      if ((int)uVar7 < 0) {
        return;
      }
      if (*(int *)(lVar2 + 0xd0) <= (int)uVar10) {
        return;
      }
      if (*(int *)(lVar2 + 0xd4) <= (int)uVar7) {
        return;
      }
      iVar5 = *(int *)param_1[1] * uVar7;
      uVar9 = iVar5 + uVar10;
      uVar6 = iVar5 + uVar10 + 7;
      if (-1 < (int)uVar9) {
        uVar6 = uVar9;
      }
      lVar3 = *(longlong *)((int *)param_1[1] + 2);
      bVar1 = *(byte *)(lVar3 + ((int)uVar6 >> 3));
      if ((bVar1 >> (uVar9 & 7) & 1) == 0) {
        *(byte *)(lVar3 + ((int)uVar6 >> 3)) = (byte)(1 << ((byte)uVar9 & 7)) | bVar1;
        plVar4 = (longlong *)param_1[2];
        iVar5 = (int)plVar4[1];
        *(uint *)(plVar4 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)plVar4 + 0xc) < iVar5 + 1U) {
          FUN_146dad772(plVar4,iVar5);
        }
        lVar3 = *plVar4;
        *(ulonglong *)(lVar3 + (longlong)iVar5 * 0x10) = CONCAT44(uVar7,uVar10);
        *(undefined8 *)(lVar3 + 8 + (longlong)iVar5 * 0x10) = 0;
      }
      param_4 = param_4 + -1;
      if (param_4 == 0) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 146dad2d8 FUN_146dad2d8 body=1176 status=ok
// SIG undefined FUN_146dad2d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_146dad2d8(longlong *param_1,undefined4 param_2,float *param_3,float *param_4,float *param_5
                  )

{
  double *pdVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  double *pdVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_1a8 [32];
  double *local_188;
  undefined1 *local_180;
  undefined8 **local_178;
  undefined8 **local_170;
  float *local_168;
  undefined1 local_160;
  undefined *local_158;
  float local_148;
  float fStack_144;
  float fStack_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined8 *local_d8;
  double dStack_d0;
  code *local_c8;
  undefined1 local_b8 [16];
  code *local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  pdVar1 = (double *)*param_1;
  fVar11 = *param_3;
  fVar12 = param_3[1];
  fVar13 = param_3[2];
  local_e8 = *param_5 - fVar11;
  fStack_e4 = param_5[1] - fVar12;
  fStack_e0 = param_5[2] - fVar13;
  fStack_dc = param_5[3] - param_3[3];
  local_f8 = *param_4 - fVar11;
  fStack_f4 = param_4[1] - fVar12;
  fStack_f0 = param_4[2] - fVar13;
  fStack_ec = param_4[3] - param_3[3];
  local_108 = 0;
  uStack_100 = 0;
  uStack_110 = CONCAT44((float)(pdVar1[0x11] -
                               (double)(float)((ulonglong)*(undefined8 *)(param_3 + 2) >> 0x20)),
                        (float)(pdVar1[0x10] - (double)(float)*(undefined8 *)(param_3 + 2)));
  local_118 = CONCAT44((float)(pdVar1[0xf] - (double)fVar12),(float)(pdVar1[0xe] - (double)fVar11));
  fVar14 = (float)pdVar1[0x17] - 0.0;
  fVar15 = (float)pdVar1[0x17] - 0.0;
  fVar17 = fStack_e4 * local_f8 - fStack_f4 * local_e8;
  fVar20 = fStack_e0 * fStack_f4 - fStack_f0 * fStack_e4;
  fVar22 = local_e8 * fStack_f0 - local_f8 * fStack_e0;
  fVar24 = fStack_dc * fStack_ec - fStack_ec * fStack_dc;
  fVar24 = fVar24 * fVar24;
  auVar18._0_4_ = fVar22 * fVar22 + fVar20 * fVar20;
  auVar18._4_4_ = fVar20 * fVar20 + fVar22 * fVar22;
  auVar18._8_4_ = fVar24 + fVar17 * fVar17;
  auVar18._12_4_ = fVar17 * fVar17 + fVar24;
  auVar16._0_4_ = auVar18._8_4_ + auVar18._0_4_;
  auVar16._4_4_ = auVar18._12_4_ + auVar18._4_4_;
  auVar16._8_4_ = auVar18._0_4_ + auVar18._8_4_;
  auVar16._12_4_ = auVar18._4_4_ + auVar18._12_4_;
  auVar19 = sqrtps(auVar18,auVar16);
  auVar19 = divps(_DAT_1499314a0,auVar19);
  fVar24 = *(float *)(pdVar1 + 0x24) * -1.0;
  fVar21 = *(float *)((longlong)pdVar1 + 0x124) * -1.0;
  fVar23 = *(float *)(pdVar1 + 0x25) * -1.0;
  fVar25 = *(float *)((longlong)pdVar1 + 300) * 1.0;
  fVar20 = auVar19._0_4_ * fVar20;
  fVar22 = auVar19._4_4_ * fVar22;
  fVar17 = auVar19._8_4_ * fVar17;
  fVar26 = fVar22 * fVar24 - fVar20 * fVar21;
  fVar27 = fVar17 * fVar21 - fVar22 * fVar23;
  fVar28 = fVar20 * fVar23 - fVar17 * fVar24;
  fVar26 = fVar26 + fVar26;
  fVar27 = fVar27 + fVar27;
  fVar28 = fVar28 + fVar28;
  fVar11 = fVar11 - *(float *)(pdVar1 + 0x1e);
  fVar12 = fVar12 - *(float *)((longlong)pdVar1 + 0xf4);
  fVar13 = fVar13 - *(float *)(pdVar1 + 0x1f);
  fVar29 = fVar12 * fVar24 - fVar21 * fVar11;
  fVar30 = fVar13 * fVar21 - fVar23 * fVar12;
  fVar31 = fVar11 * fVar23 - fVar24 * fVar13;
  fVar29 = fVar29 + fVar29;
  fVar30 = fVar30 + fVar30;
  fVar31 = fVar31 + fVar31;
  fVar20 = (fVar26 * fVar21 - fVar28 * fVar23) + fVar25 * fVar27 + fVar20;
  fVar22 = (fVar27 * fVar23 - fVar26 * fVar24) + fVar25 * fVar28 + fVar22;
  fVar17 = (fVar28 * fVar24 - fVar27 * fVar21) + fVar25 * fVar26 + fVar17;
  dVar5 = (double)(0.0 - fVar22);
  local_b8._8_4_ = SUB84(dVar5,0);
  local_b8._0_8_ = (double)(0.0 - fVar20);
  local_b8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_a8 = (code *)(double)(0.0 - fVar17);
  local_138 = -NAN;
  uVar9 = *(undefined8 *)((longlong)pdVar1[0x16] + 0x88);
  local_188 = (double *)((longlong)pdVar1[0x16] + 0x20);
  local_180 = (undefined1 *)0x0;
  local_178 = (undefined8 **)&local_138;
  FUN_144a94486(uVar9,&local_d8);
  fVar11 = (((fVar31 * fVar24 - fVar30 * fVar21) + fVar25 * fVar29 + fVar13) -
           (float)(double)local_c8) * fVar17 +
           (((fVar29 * fVar21 - fVar31 * fVar23) + fVar25 * fVar30 + fVar11) -
           (float)(double)local_d8) * fVar20 +
           (((fVar30 * fVar23 - fVar29 * fVar24) + fVar25 * fVar31 + fVar12) - (float)dStack_d0) *
           fVar22;
  auVar19._4_4_ = -(uint)(fVar11 < fVar15);
  auVar19._0_4_ = -(uint)(fVar11 < fVar14);
  auVar19._8_4_ = -(uint)(fVar11 < fVar14);
  auVar19._12_4_ = -(uint)(fVar11 < fVar15);
  iVar8 = movmskps((int)uVar9,auVar19);
  bVar6 = true;
  if (iVar8 == 0) {
    local_188 = pdVar1 + 0x22;
    local_b8._8_4_ = (float)*(double *)((longlong)pdVar1[0x16] + 0x10);
    local_b8._0_8_ = pdVar1[0x16];
    local_b8._12_4_ = 0;
    local_a8 = FUN_144a12d46;
    local_d8 = &local_108;
    dStack_d0 = 0.0;
    local_c8 = FUN_14014b546;
    local_158 = &DAT_149f52c20;
    local_168 = &local_148;
    local_178 = (undefined8 **)&local_11c;
    local_180 = (undefined1 *)CONCAT44(local_180._4_4_,(float)*(double *)param_1[1]);
    local_160 = 1;
    local_170 = (undefined8 **)&local_138;
    cVar7 = FUN_1448541f8(&local_d8,local_b8,pdVar1 + 0x24,&local_118);
    pdVar10 = (double *)param_1[1];
    if (cVar7 != '\0') {
      local_138 = *param_3 + local_138;
      fStack_134 = param_3[1] + fStack_134;
      fStack_130 = param_3[2] + fStack_130;
      fStack_12c = param_3[3] + fStack_12c;
      local_188 = (double *)pdVar1[0x18];
      dVar5 = *pdVar10;
      local_180 = local_b8;
      local_178 = &local_d8;
      FUN_1408d1e72(SUB84((double)(fStack_140 * *(float *)(pdVar1 + 0x23) +
                                  local_148 * *(float *)(pdVar1 + 0x22) +
                                  fStack_144 * *(float *)((longlong)pdVar1 + 0x114)),0),
                    SUB84(dVar5,0),(double)local_11c,pdVar1[0x17]);
      dVar2 = (double)local_b8._0_8_ * dVar5;
      if (dVar2 < dVar5) {
        *pdVar10 = dVar2;
        auVar3._8_4_ = SUB84((double)fStack_144,0);
        auVar3._0_8_ = (double)local_148;
        auVar3._12_4_ = (int)((ulonglong)(double)fStack_144 >> 0x20);
        *(undefined1 (*) [16])(pdVar1 + 5) = auVar3;
        pdVar1[7] = (double)fStack_140;
        auVar4._8_4_ = SUB84((double)fStack_134,0);
        auVar4._0_8_ = (double)local_138;
        auVar4._12_4_ = (int)((ulonglong)(double)fStack_134 >> 0x20);
        *(undefined1 (*) [16])(pdVar1 + 2) = auVar4;
        pdVar1[4] = (double)fStack_130;
        *pdVar1 = dVar2;
        pdVar1[1] = (double)local_d8;
        *(undefined4 *)(pdVar1 + 8) = param_2;
        pdVar10 = (double *)param_1[1];
      }
    }
    bVar6 = 0.0 < *pdVar10;
  }
  if ((local_a0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dad772 FUN_146dad772 body=132 status=ok
// SIG undefined FUN_146dad772(void)

void FUN_146dad772(longlong param_1,int param_2)

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



// FUNCTION 146dad7f7 FUN_146dad7f7 body=246 status=ok
// SIG undefined FUN_146dad7f7(void)

longlong * FUN_146dad7f7(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  local_24 = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_24);
    }
  }
  else {
    local_24 = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_24) {
    if (*(int *)((longlong)param_2 + 0xc) < local_24) {
      FUN_146dadafc(param_2);
    }
    FUN_146dada2c(param_2,local_24,1);
    if (0 < local_24) {
      lVar4 = 0;
      do {
        plVar3 = *(longlong **)(*param_2 + lVar4 * 8);
        (**(code **)(*plVar3 + 0xf8))(plVar3,param_1);
        lVar4 = lVar4 + 1;
      } while (lVar4 < local_24);
    }
    if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_24);
}



// FUNCTION 146dad8ef FUN_146dad8ef body=315 status=ok
// SIG undefined FUN_146dad8ef(void)

longlong * FUN_146dad8ef(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 2,(longlong)*(int *)((longlong)param_2 + 0xc) << 2
            );
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (local_2c < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_2c);
  }
  if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
    FUN_14482f6fa(param_2);
  }
  FUN_144a84024(param_2,local_2c,1);
  if (0 < local_2c) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      puVar3 = *(undefined4 **)param_1[1];
      if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(*param_2 + lVar4),4);
        }
        else {
          thunk_FUN_14572512c(param_1);
        }
      }
      else {
        *(undefined4 *)(*param_2 + lVar4) = *puVar3;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 4;
    } while (lVar5 < local_2c);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146dada2c FUN_146dada2c body=207 status=ok
// SIG undefined FUN_146dada2c(void)

void FUN_146dada2c(longlong *param_1,uint param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  
  iVar2 = (int)param_1[1];
  if (iVar2 < (int)param_2) {
    *(uint *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < param_2 - iVar2) {
      FUN_146dadbc2(param_1,iVar2);
    }
    FUN_146dadb5c((longlong)iVar2 * 8 + *param_1,param_2 - iVar2);
    return;
  }
  if (-1 < (int)param_2) {
    iVar3 = iVar2 - param_2;
    if (iVar3 != 0 && (int)param_2 <= iVar2) {
      _Dst = (void *)((ulonglong)param_2 * 8 + *param_1);
      FUN_146dae043(_Dst,iVar3);
      iVar1 = (int)param_1[1] - iVar2;
      if (iVar1 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar3 * 8),(longlong)iVar1 << 3);
        iVar2 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar2 - iVar3;
      if (param_3 == '\x01') {
        FUN_146dae004(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146dadafc FUN_146dadafc body=96 status=ok
// SIG undefined FUN_146dadafc(void)

void FUN_146dadafc(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 146dadb5c FUN_146dadb5c body=101 status=ok
// SIG undefined FUN_146dadb5c(void)

void FUN_146dadb5c(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(undefined2 *)(puVar1 + 3) = 0x101;
      *(undefined1 *)((longlong)puVar1 + 0x1a) = 1;
      *(undefined2 *)((longlong)puVar1 + 0x1c) = 0x101;
      *puVar1 = &PTR_FUN_149f52d80;
      *(undefined8 **)(param_1 + lVar2 * 8) = puVar1;
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 146dadbc2 FUN_146dadbc2 body=132 status=ok
// SIG undefined FUN_146dadbc2(void)

void FUN_146dadbc2(longlong param_1,int param_2)

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



// FUNCTION 146dadc48 FUN_146dadc48 body=42 status=ok
// SIG undefined FUN_146dadc48(void)

undefined8 * FUN_146dadc48(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f553e0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146dadc76 FUN_146dadc76 body=382 status=ok
// SIG undefined FUN_146dadc76(void)

ulonglong FUN_146dadc76(undefined8 param_1,double *param_2,double *param_3,double param_4,
                       undefined8 param_5,double *param_6,double *param_7,undefined8 *param_8,
                       undefined4 *param_9)

{
  double dVar1;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_78;
  char local_70;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_9 = 0xffffffff;
  local_58 = param_3[2] * param_4 + param_2[2];
  local_60 = param_3[1] * param_4 + param_2[1];
  local_68 = *param_3 * param_4 + *param_2;
  local_a8 = param_5;
  FUN_146dae232(param_1,&local_88,param_2);
  if (local_70 == '\x01') {
    param_7[2] = local_78;
    *(undefined4 *)param_7 = local_88;
    *(undefined4 *)((longlong)param_7 + 4) = uStack_84;
    *(undefined4 *)(param_7 + 1) = uStack_80;
    *(undefined4 *)((longlong)param_7 + 0xc) = uStack_7c;
    FUN_146dae152(param_1,&local_a0);
    param_8[2] = local_90;
    *param_8 = local_a0;
    param_8[1] = uStack_98;
    dVar1 = 0.0;
    if (0.0 < param_4) {
      dVar1 = SQRT((param_7[2] - param_2[2]) * (param_7[2] - param_2[2]) +
                   (*param_7 - *param_2) * (*param_7 - *param_2) +
                   (param_7[1] - param_2[1]) * (param_7[1] - param_2[1]));
    }
    *param_6 = dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)&local_88 >> 8),local_70) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146daddf6 FUN_146daddf6 body=222 status=ok
// SIG undefined FUN_146daddf6(void)

void FUN_146daddf6(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x108))(param_1,local_28);
  FUN_14004b8ea(param_1,param_2);
  uVar3 = FUN_144aa3513(param_2,param_1 + 4);
  FUN_144aa3513(uVar3,(longlong)param_1 + 0x2c);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e31250);
  iVar2 = FUN_1448332aa(param_2,&DAT_149e31250);
  if (0x24 < iVar2) {
    param_1 = param_1 + 2;
    plVar1 = *(longlong **)param_2[1];
    if ((longlong *)((undefined8 *)param_2[1])[1] < plVar1 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1,8);
      }
      else {
        thunk_FUN_146821949(param_2,param_1);
      }
    }
    else {
      *param_1 = *plVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146daded6 FUN_146daded6 body=179 status=ok
// SIG undefined FUN_146daded6(void)

void FUN_146daded6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  FUN_14004b8ea();
  uVar3 = FUN_144aa3513(param_2,param_1 + 0x20);
  FUN_144aa3513(uVar3,param_1 + 0x2c);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e31250);
  iVar2 = FUN_1448332aa(param_2,&DAT_149e31250);
  if (0x24 < iVar2) {
    puVar4 = (undefined8 *)(param_1 + 0x10);
    puVar1 = *(undefined8 **)param_2[1];
    if ((undefined8 *)((longlong *)param_2[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146dadf5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_2 + 0x170))(param_2,puVar4,8);
        return;
      }
      thunk_FUN_146821949(param_2,puVar4);
      return;
    }
    *puVar4 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
  }
  return;
}



// FUNCTION 146dae004 FUN_146dae004 body=63 status=ok
// SIG undefined FUN_146dae004(void)

void FUN_146dae004(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146dae078(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146dae043 FUN_146dae043 body=52 status=ok
// SIG undefined FUN_146dae043(void)

void FUN_146dae043(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 146dae078 FUN_146dae078 body=97 status=ok
// SIG undefined FUN_146dae078(void)

ulonglong FUN_146dae078(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146dae0da FUN_146dae0da body=38 status=ok
// SIG undefined FUN_146dae0da(void)

undefined8 FUN_146dae0da(undefined8 param_1,int param_2)

{
  FUN_14041e0ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146dae118 FUN_146dae118 body=57 status=ok
// SIG undefined FUN_146dae118(void)

void FUN_146dae118(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [24];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x70))(param_1,param_2,local_20);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dae152 FUN_146dae152 body=29 status=ok
// SIG undefined FUN_146dae152(void)

undefined8 FUN_146dae152(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0x70))(param_1,param_3,param_2);
  return param_2;
}



// FUNCTION 146dae170 FUN_146dae170 body=193 status=ok
// SIG undefined FUN_146dae170(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_146dae170(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c993888) {
    FUN_144b3d300(&DAT_14c993888);
    if (DAT_14c993888 == -1) {
      _DAT_14c993858 = 0xc7efffffe0000000;
      _DAT_14c993860 = 0xc7efffffe0000000;
      DAT_14c993868 = 0xc7efffffe0000000;
      _DAT_14c993870 = 0x47efffffe0000000;
      _DAT_14c993878 = 0x47efffffe0000000;
      DAT_14c993880 = 0x47efffffe0000000;
      _Init_thread_footer(&DAT_14c993888);
    }
  }
  param_2[2] = DAT_14c993868;
  uVar1 = _DAT_14c993860;
  *param_2 = _DAT_14c993858;
  param_2[1] = uVar1;
  uVar1 = _DAT_14c993878;
  param_2[3] = _DAT_14c993870;
  param_2[4] = uVar1;
  param_2[5] = DAT_14c993880;
  return param_2;
}



// FUNCTION 146dae232 FUN_146dae232 body=770 status=ok
// SIG undefined FUN_146dae232(void)

double * FUN_146dae232(longlong *param_1,double *param_2,double *param_3,double *param_4,
                      double param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_118 [32];
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_b8;
  double local_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  dVar4 = (double)(**(code **)(*param_1 + 0x70))(param_1,param_3,&local_b8);
  if (ABS(dVar4 - param_5) <= 0.0001) {
    dVar6 = param_3[2] - local_a8 * dVar4;
    dVar2 = *param_3 - local_b8 * dVar4;
    dVar5 = param_3[1];
LAB_146dae381:
    *param_2 = dVar2;
    param_2[1] = dVar5 - local_b0 * dVar4;
    param_2[2] = dVar6;
    *(undefined1 *)(param_2 + 3) = 1;
  }
  else {
    local_c8 = param_4[2];
    local_d8 = *param_4;
    dStack_d0 = param_4[1];
    dVar2 = param_4[2] - param_3[2];
    dVar3 = param_4[1] - param_3[1];
    dVar6 = *param_4 - *param_3;
    dVar5 = dVar2 * dVar2 + dVar6 * dVar6 + dVar3 * dVar3;
    if (dVar5 < 1e-08) {
      *(undefined8 *)((longlong)param_2 + 9) = 0;
      *(undefined8 *)((longlong)param_2 + 0x11) = 0;
      *param_2 = 0.0;
      param_2[1] = 0.0;
      goto LAB_146dae397;
    }
    dVar1 = (double)(**(code **)(*param_1 + 0x70))(param_1,param_4,&local_f0);
    if (ABS(dVar1 - param_5) <= 0.0001) {
      dVar5 = SQRT(dVar5);
      dVar5 = (dVar2 / dVar5) * local_e0 + (dVar6 / dVar5) * local_f0 + (dVar3 / dVar5) * local_e8;
      if (ABS(dVar5) <= 0.0001) {
        dVar6 = param_4[2] - local_a8 * dVar4;
        dVar2 = *param_4 - local_b8 * dVar4;
        dVar5 = param_4[1];
        goto LAB_146dae381;
      }
      dVar4 = (double)(-(ulonglong)(0.0 < dVar5) & 0x3f2a36e2eb1c432d |
                      ~-(ulonglong)(0.0 < dVar5) & -(ulonglong)(dVar5 < 0.0) & 0xbf2a36e2eb1c432d);
      local_c8 = local_e0 * dVar4 + param_4[2];
      dStack_d0 = local_e8 * dVar4 + param_4[1];
      local_d8 = local_f0 * dVar4 + *param_4;
    }
    local_f8 = param_5;
    (**(code **)(*param_1 + 0x148))(param_1,param_2,param_3,&local_d8);
  }
LAB_146dae397:
  if ((local_a0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dae536 FUN_146dae536 body=1050 status=ok
// SIG undefined FUN_146dae536(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_146dae536(longlong *param_1,double *param_2,double *param_3,double *param_4,
                      double param_5)

{
  bool bVar1;
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
  undefined1 auStack_178 [40];
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  dVar3 = param_4[2] - param_3[2];
  dVar4 = param_4[1] - param_3[1];
  dVar2 = *param_4 - *param_3;
  dVar5 = SQRT(dVar3 * dVar3 + dVar2 * dVar2 + dVar4 * dVar4);
  dVar6 = 1.0 / dVar5;
  local_150 = (double)(**(code **)(*param_1 + 0x70))(SUB84(dVar2,0),param_4,&local_f8);
  local_108 = param_3[2];
  local_118 = *param_3;
  uStack_110 = param_3[1];
  dVar8 = (double)(**(code **)(*param_1 + 0x70))(param_1,&local_118,&local_130);
  dVar7 = param_5 + 0.0001;
  local_138 = dVar3 * dVar6 * 0.01;
  local_140 = dVar4 * dVar6 * 0.01;
  local_148 = dVar6 * dVar2 * 0.01;
  do {
    if (dVar8 <= dVar7) {
      if (dVar8 < dVar7) {
        param_5 = param_5 - dVar8;
        local_118 = param_5 * local_130 + local_118;
        uStack_110 = local_128 * param_5 + uStack_110;
        local_108 = local_120 * param_5 + local_108;
      }
      param_2[2] = local_108;
      *(undefined4 *)param_2 = (undefined4)local_118;
      *(undefined4 *)((longlong)param_2 + 4) = local_118._4_4_;
      *(undefined4 *)(param_2 + 1) = (undefined4)uStack_110;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_110._4_4_;
      goto LAB_146dae84d;
    }
    dVar11 = dVar8 - param_5;
    dVar12 = (double)_DAT_14c75f154;
    local_118 = dVar6 * dVar2 * dVar11 * dVar12 + local_118;
    uStack_110 = dVar4 * dVar6 * dVar11 * dVar12 + uStack_110;
    local_108 = dVar3 * dVar6 * dVar11 * dVar12 + local_108;
    dVar12 = local_108 - param_3[2];
    dVar10 = uStack_110 - param_3[1];
    dVar9 = local_118 - *param_3;
    if (dVar5 < SQRT(dVar12 * dVar12 + dVar9 * dVar9 + dVar10 * dVar10)) break;
    if (dVar11 < 0.01) {
      local_118 = local_118 + local_148;
      uStack_110 = uStack_110 + local_140;
      local_108 = local_108 + local_138;
      dVar12 = local_108 - param_3[2];
      dVar10 = uStack_110 - param_3[1];
      dVar9 = local_118 - *param_3;
      if (dVar5 < SQRT(dVar12 * dVar12 + dVar9 * dVar9 + dVar10 * dVar10)) break;
    }
    dVar12 = (double)(**(code **)(*param_1 + 0x70))(param_1,&local_118,&local_130);
    bVar1 = dVar12 < dVar8;
    dVar8 = dVar12;
  } while (bVar1);
  if (dVar7 <= local_150) {
    *(undefined8 *)((longlong)param_2 + 9) = 0;
    *(undefined8 *)((longlong)param_2 + 0x11) = 0;
    *param_2 = 0.0;
    param_2[1] = 0.0;
  }
  else {
    param_5 = param_5 - local_150;
    dVar2 = param_4[2];
    dVar3 = param_4[1];
    *param_2 = param_5 * local_f8 + *param_4;
    param_2[1] = local_f0 * param_5 + dVar3;
    param_2[2] = local_e8 * param_5 + dVar2;
LAB_146dae84d:
    *(undefined1 *)(param_2 + 3) = 1;
  }
  if ((local_e0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dae952 FUN_146dae952 body=224 status=ok
// SIG undefined FUN_146dae952(void)

void FUN_146dae952(longlong *param_1,longlong *param_2,longlong param_3)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  double local_50 [6];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)((longlong)param_1 + 0x1a) == '\x01') {
    (**(code **)(*param_1 + 0x80))(param_1,local_50);
    lVar6 = 0;
    do {
      dVar4 = *(double *)(param_3 + lVar6 * 8);
      if ((local_50[lVar6 + 3] <= dVar4 && dVar4 != local_50[lVar6 + 3]) ||
         (pdVar1 = (double *)(param_3 + 0x18 + lVar6 * 8),
         *pdVar1 <= local_50[lVar6] && local_50[lVar6] != *pdVar1)) goto LAB_146daea08;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 3);
  }
  iVar5 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
    FUN_146ca5ba2(param_2,iVar5);
  }
  lVar6 = *param_2;
  lVar7 = (longlong)iVar5 * 0x70;
  *(longlong **)(lVar6 + lVar7) = param_1;
  puVar2 = (undefined8 *)(lVar6 + 0x10 + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar3 = (undefined4 *)(lVar6 + 0x20 + lVar7);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0x3ff00000;
  puVar2 = (undefined8 *)(lVar6 + 0x30 + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar6 + 0x40 + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar6 + 0x50 + lVar7);
  *puVar2 = 0x3ff0000000000000;
  puVar2[1] = 0x3ff0000000000000;
  puVar2 = (undefined8 *)(lVar6 + 0x60 + lVar7);
  *puVar2 = 0x3ff0000000000000;
  puVar2[1] = 0;
LAB_146daea08:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146daec88 FUN_146daec88 body=180 status=ok
// SIG undefined FUN_146daec88(void)

void FUN_146daec88(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x606;
  *param_1 = &PTR_FUN_149f553f0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0x7fefffffffffffff;
  param_1[0x18] = 0x7fefffffffffffff;
  param_1[0x19] = 0x7fefffffffffffff;
  param_1[0x1a] = 0xffefffffffffffff;
  param_1[0x1b] = 0xffefffffffffffff;
  param_1[0x1c] = 0xffefffffffffffff;
  param_1[0x1d] = 0x7fefffffffffffff;
  param_1[0x1e] = 0x7fefffffffffffff;
  param_1[0x1f] = 0x7fefffffffffffff;
  param_1[0x20] = 0xffefffffffffffff;
  param_1[0x21] = 0xffefffffffffffff;
  param_1[0x22] = 0xffefffffffffffff;
  return;
}



// FUNCTION 146daed42 FUN_146daed42 body=159 status=ok
// SIG undefined FUN_146daed42(void)

void FUN_146daed42(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x404;
  *param_1 = &PTR_FUN_149f4b940;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3ff00000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0x3ff0000000000000;
  param_1[0xf] = 0x3ff0000000000000;
  param_1[0x10] = 0x3ff0000000000000;
  param_1[0x11] = 0;
  param_1[0x12] = 0x7fefffffffffffff;
  param_1[0x13] = 0x7fefffffffffffff;
  param_1[0x14] = 0x7fefffffffffffff;
  param_1[0x15] = 0xffefffffffffffff;
  param_1[0x16] = 0xffefffffffffffff;
  param_1[0x17] = 0xffefffffffffffff;
  return;
}



// FUNCTION 146daede2 FUN_146daede2 body=121 status=ok
// SIG undefined FUN_146daede2(void)

void FUN_146daede2(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  *(undefined1 *)((longlong)param_1 + 0x1d) = 5;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x65) = 0;
  *param_1 = &PTR_FUN_149f55fb0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0xf;
  return;
}



// FUNCTION 146daee5c FUN_146daee5c body=142 status=ok
// SIG undefined FUN_146daee5c(void)

void FUN_146daee5c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x808;
  *param_1 = &PTR_FUN_149f51c30;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0x7f7fffff7f7fffff;
  param_1[9] = 0xff7fffff7f7fffff;
  param_1[10] = &DAT_ff7fffffff7fffff;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3ff0000000000000;
  param_1[0x10] = 0x3ff0000000000000;
  param_1[0x11] = 0x3ff0000000000000;
  uVar1 = DAT_14c8463d8;
  param_1[0x12] = DAT_14c8463d0;
  param_1[0x13] = uVar1;
  uVar1 = DAT_14c8463e8;
  param_1[0x14] = DAT_14c8463e0;
  param_1[0x15] = uVar1;
  return;
}



// FUNCTION 146daeeea FUN_146daeeea body=166 status=ok
// SIG undefined FUN_146daeeea(void)

void FUN_146daeeea(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0xa0a;
  *param_1 = &PTR_FUN_149f557e0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined2 *)((longlong)param_1 + 0x39) = 1;
  *(undefined2 *)((longlong)param_1 + 0x3c) = 0x202;
  param_1[4] = &PTR_FUN_149f48540;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined2 *)((longlong)param_1 + 0x89) = 1;
  *(undefined2 *)((longlong)param_1 + 0x8c) = 0x202;
  param_1[0xe] = &PTR_FUN_149f48540;
  param_1[0x1a] = 0x7fefffffffffffff;
  param_1[0x1b] = 0x7fefffffffffffff;
  param_1[0x1c] = 0x7fefffffffffffff;
  param_1[0x1d] = 0xffefffffffffffff;
  param_1[0x1e] = 0xffefffffffffffff;
  param_1[0x1f] = 0xffefffffffffffff;
  return;
}



// FUNCTION 146daef90 FUN_146daef90 body=111 status=ok
// SIG undefined FUN_146daef90(void)

undefined8 FUN_146daef90(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_118 [40];
  undefined1 local_f0 [216];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_146daf1a8(param_2,param_1);
  FUN_146ca197c(local_f0);
  FUN_146ca1b58(local_f0,param_2);
  FUN_146ca5afa(local_f0);
  if ((local_18 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146daf000 FUN_146daf000 body=424 status=ok
// SIG undefined FUN_146daf000(void)

longlong * FUN_146daf000(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  FUN_140a2860c(param_2,param_1 + 0xe);
  FUN_144aa3513(param_2,param_1 + 4);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
    }
    else {
      thunk_FUN_14572512c(param_2,param_1);
    }
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 1,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    param_1[1] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 2,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    param_1[2] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 3,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    param_1[3] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  param_1 = param_1 + 0xd;
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
    }
    else {
      thunk_FUN_14572512c(param_2,param_1);
    }
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  return param_2;
}



// FUNCTION 146daf1a8 FUN_146daf1a8 body=257 status=ok
// SIG undefined FUN_146daf1a8(void)

longlong * FUN_146daf1a8(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x48,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x48);
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_1401185b4(param_2);
    }
    FUN_146db6546(param_2,local_2c);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146daf000(*param_2 + lVar3,param_1);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x48;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146daf2ab FUN_146daf2ab body=270 status=ok
// SIG undefined FUN_146daf2ab(void)

double * FUN_146daf2ab(double *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((int)param_2[1] == 0) {
    param_1[4] = 0.0;
    param_1[5] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    *param_1 = 0.0;
    param_1[1] = 0.0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
  }
  (**(code **)(**(longlong **)*param_2 + 0x80))(*(longlong **)*param_2,param_1);
  if (1 < (int)param_2[1]) {
    lVar2 = 1;
    do {
      plVar1 = *(longlong **)(*param_2 + lVar2 * 8);
      (**(code **)(*plVar1 + 0x80))(plVar1,&local_58);
      dVar3 = param_1[2];
      if (local_48 <= param_1[2]) {
        dVar3 = local_48;
      }
      dVar5 = param_1[1];
      if (local_50 <= param_1[1]) {
        dVar5 = local_50;
      }
      dVar4 = *param_1;
      if (local_58 <= *param_1) {
        dVar4 = local_58;
      }
      *param_1 = dVar4;
      param_1[1] = dVar5;
      param_1[2] = dVar3;
      dVar3 = param_1[5];
      if (param_1[5] <= local_30) {
        dVar3 = local_30;
      }
      dVar5 = param_1[4];
      if (param_1[4] <= local_38) {
        dVar5 = local_38;
      }
      dVar4 = param_1[3];
      if (param_1[3] <= local_40) {
        dVar4 = local_40;
      }
      param_1[3] = dVar4;
      param_1[4] = dVar5;
      param_1[5] = dVar3;
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_2[1]);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146daf3bc FUN_146daf3bc body=408 status=ok
// SIG undefined FUN_146daf3bc(void)

void FUN_146daf3bc(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  undefined4 local_78;
  double local_70;
  double dStack_68;
  double local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = (undefined8 *)*param_2;
  local_78 = *(undefined4 *)(param_2 + 1);
  FUN_146daf2ab(&local_70);
  if (*(int *)(param_1 + 0x28) < 1) {
    *(double *)(param_1 + 0x40) = local_60;
    *(double *)(param_1 + 0x30) = local_70;
    *(double *)(param_1 + 0x38) = dStack_68;
    *(double *)(param_1 + 0x58) = local_48;
    *(undefined4 *)(param_1 + 0x48) = local_58;
    *(undefined4 *)(param_1 + 0x4c) = uStack_54;
    *(undefined4 *)(param_1 + 0x50) = uStack_50;
    *(undefined4 *)(param_1 + 0x54) = uStack_4c;
  }
  else {
    dVar8 = *(double *)(param_1 + 0x40);
    uVar5 = SUB84(dVar8,0);
    uVar6 = (undefined4)((ulonglong)dVar8 >> 0x20);
    if (local_60 <= dVar8) {
      uVar5 = SUB84(local_60,0);
      uVar6 = (undefined4)((ulonglong)local_60 >> 0x20);
    }
    dVar8 = *(double *)(param_1 + 0x38);
    if (dStack_68 <= *(double *)(param_1 + 0x38)) {
      dVar8 = dStack_68;
    }
    dVar7 = *(double *)(param_1 + 0x30);
    if (local_70 <= *(double *)(param_1 + 0x30)) {
      dVar7 = local_70;
    }
    *(double *)(param_1 + 0x30) = dVar7;
    *(double *)(param_1 + 0x38) = dVar8;
    *(ulonglong *)(param_1 + 0x40) = CONCAT44(uVar6,uVar5);
    dVar8 = *(double *)(param_1 + 0x58);
    uVar5 = SUB84(dVar8,0);
    uVar6 = (undefined4)((ulonglong)dVar8 >> 0x20);
    if (dVar8 <= local_48) {
      uVar5 = SUB84(local_48,0);
      uVar6 = (undefined4)((ulonglong)local_48 >> 0x20);
    }
    dVar8 = *(double *)(param_1 + 0x50);
    if (*(double *)(param_1 + 0x50) <= (double)CONCAT44(uStack_4c,uStack_50)) {
      dVar8 = (double)CONCAT44(uStack_4c,uStack_50);
    }
    dVar7 = *(double *)(param_1 + 0x48);
    if (*(double *)(param_1 + 0x48) <= (double)CONCAT44(uStack_54,local_58)) {
      dVar7 = (double)CONCAT44(uStack_54,local_58);
    }
    *(double *)(param_1 + 0x48) = dVar7;
    *(double *)(param_1 + 0x50) = dVar8;
    *(ulonglong *)(param_1 + 0x58) = CONCAT44(uVar6,uVar5);
  }
  iVar2 = *(int *)(param_2 + 1);
  iVar3 = *(int *)(param_1 + 0x28) + iVar2;
  if (-1 < iVar3) {
    plVar1 = (longlong *)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x2c) < iVar3) {
      FUN_140836c88(plVar1);
      iVar2 = *(int *)(param_2 + 1);
    }
    if (iVar2 != 0) {
      param_2 = (undefined8 *)*param_2;
      lVar4 = (longlong)iVar2 << 3;
      do {
        iVar2 = *(int *)(param_1 + 0x68);
        local_78 = 1;
        local_80 = param_2;
        iVar3 = FUN_14485a28c(&local_80);
        *(int *)(param_1 + 0x68) = iVar3 + iVar2;
        iVar2 = *(int *)(param_1 + 0x28);
        *(uint *)(param_1 + 0x28) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x2c) < iVar2 + 1U) {
          FUN_140619960(plVar1,iVar2);
        }
        *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = *param_2;
        *param_2 = 0;
        param_2 = param_2 + 1;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
    FUN_1401183f6(param_1);
    FUN_14011842e(param_1);
    if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar3);
}



// FUNCTION 146daf556 FUN_146daf556 body=177 status=ok
// SIG undefined FUN_146daf556(void)

void FUN_146daf556(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_2 + 8) != 0) {
    FUN_146daf608(param_1 + 0x20);
    local_48 = *(undefined8 *)(param_1 + 0x20);
    uStack_40 = *(undefined4 *)(param_1 + 0x28);
    uVar1 = FUN_14485a28c();
    *(undefined4 *)(param_1 + 0x68) = uVar1;
    local_58 = *(undefined8 *)(param_1 + 0x20);
    local_50 = *(undefined4 *)(param_1 + 0x28);
    FUN_146daf2ab(&local_48);
    *(undefined8 *)(param_1 + 0x40) = local_38;
    *(undefined8 *)(param_1 + 0x30) = local_48;
    *(ulonglong *)(param_1 + 0x38) = CONCAT44(uStack_3c,uStack_40);
    *(undefined4 *)(param_1 + 0x48) = local_30;
    *(undefined4 *)(param_1 + 0x4c) = uStack_2c;
    *(undefined4 *)(param_1 + 0x50) = uStack_28;
    *(undefined4 *)(param_1 + 0x54) = uStack_24;
    *(undefined8 *)(param_1 + 0x58) = local_20;
    FUN_1401183f6(param_1);
    FUN_14011842e(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146daf608 FUN_146daf608 body=153 status=ok
// SIG undefined FUN_146daf608(void)

void FUN_146daf608(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar2 = (int)param_2[1];
  if (iVar2 != 0) {
    iVar3 = *(int *)*param_2;
    iVar4 = 1;
    if (1 < iVar2) {
      lVar5 = 1;
      do {
        iVar1 = *(int *)(*param_2 + lVar5 * 4);
        if (iVar1 != iVar3) {
          FUN_146db6694(param_1,iVar3 + 1,iVar1,iVar4);
          iVar4 = iVar4 + 1;
          iVar2 = (int)param_2[1];
          iVar3 = iVar1;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar2);
    }
    FUN_146db6694(param_1,iVar3 + 1,*(undefined4 *)(param_1 + 8),iVar4);
    FUN_14008dbc8(param_1,*(int *)(param_1 + 8) - iVar4,0);
    return;
  }
  return;
}



// FUNCTION 146daf6a2 FUN_146daf6a2 body=1037 status=ok
// SIG undefined FUN_146daf6a2(void)

void FUN_146daf6a2(longlong param_1,longlong *param_2,double *param_3)

{
  float *pfVar1;
  double *pdVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  longlong lVar26;
  double dVar27;
  undefined1 auStack_158 [40];
  float local_130 [3];
  float local_124 [3];
  longlong local_118;
  undefined8 uStack_110;
  code *local_108;
  longlong *local_100;
  longlong local_f8;
  char local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar11 = *(longlong *)(param_1 + 0x60);
  if ((lVar11 == 0) || ((DAT_14c75f1a4 & 1) == 0)) {
    iVar25 = *(int *)(param_1 + 0x28);
    if ((longlong)iVar25 != 0) {
      lVar11 = *(longlong *)(param_1 + 0x20);
      lVar22 = 0;
      do {
        plVar12 = *(longlong **)(lVar11 + lVar22);
        (**(code **)(*plVar12 + 0xe0))(plVar12,param_2,param_3);
        lVar22 = lVar22 + 8;
      } while ((longlong)iVar25 * 8 != lVar22);
    }
  }
  else {
    local_130[2] = (float)param_3[2];
    local_130[1] = (float)param_3[1];
    local_130[0] = (float)*param_3;
    local_124[2] = (float)param_3[5];
    local_124[1] = (float)param_3[4];
    local_124[0] = (float)param_3[3];
    if (*(int *)(lVar11 + 0x28) != 0) {
      local_100 = &local_118;
      local_108 = FUN_140036a08;
      lVar22 = FUN_144a773aa(&local_108,&DAT_14c7585d0);
      local_108 = (code *)(lVar22 + 0x10);
      local_100 = *(longlong **)(lVar22 + 0x10);
      local_f8 = *(longlong *)(lVar22 + 0x20);
      local_f0 = '\0';
      local_e8 = *(undefined8 *)(lVar22 + 0x28);
      *(code ***)(lVar22 + 0x28) = &local_108;
      *(int *)(lVar22 + 0x30) = *(int *)(lVar22 + 0x30) + 1;
      local_118 = 0;
      uStack_110 = 0;
      iVar25 = *(int *)(lVar11 + 0x30);
      if (iVar25 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar25);
      }
      if (iVar25 != 0) {
        FUN_14595390e(&local_118);
      }
      iVar25 = 0;
      do {
        while( true ) {
          uVar20 = uStack_110;
          lVar22 = (longlong)iVar25;
          lVar26 = lVar22 * 0x28 + *(longlong *)(lVar11 + 0x20);
          lVar23 = -3;
          do {
            fVar4 = *(float *)(lVar26 + 0xc + lVar23 * 4);
            pfVar1 = (float *)((longlong)&local_118 + lVar23 * 4);
            if ((*pfVar1 <= fVar4 && fVar4 != *pfVar1) ||
               (pfVar1 = (float *)(lVar26 + 0x18 + lVar23 * 4),
               *pfVar1 <= local_124[lVar23] && local_124[lVar23] != *pfVar1)) goto LAB_146daf88e;
            lVar23 = lVar23 + 1;
          } while (lVar23 != 0);
          iVar25 = *(int *)(lVar26 + 0x20);
          if (iVar25 == -1) break;
          lVar22 = (longlong)(int)uStack_110;
          uVar21 = (int)uStack_110 + 1;
          uStack_110 = CONCAT44(uStack_110._4_4_,uVar21);
          if (uStack_110._4_4_ < uVar21) {
            FUN_14015d11a(&local_118,uVar20 & 0xffffffff);
          }
          *(undefined4 *)(local_118 + lVar22 * 4) = *(undefined4 *)(lVar26 + 0x24);
        }
        plVar12 = *(longlong **)(param_1 + 0x60);
        lVar23 = plVar12[4];
        if ((*(int *)(lVar23 + 0x20 + lVar22 * 0x28) == -1) &&
           (iVar25 = *(int *)(lVar23 + 0x18 + lVar22 * 0x28), lVar26 = (longlong)iVar25,
           iVar25 < *(int *)(lVar23 + 0x1c + lVar22 * 0x28))) {
          do {
            lVar13 = *plVar12;
            lVar24 = (longlong)*(int *)(plVar12[2] + lVar26 * 4);
            fVar4 = *(float *)(lVar13 + 0xc + lVar24 * 0x48);
            fVar5 = *(float *)(lVar13 + 8 + lVar24 * 0x48);
            fVar6 = *(float *)(lVar13 + lVar24 * 0x48);
            fVar7 = *(float *)(lVar13 + 4 + lVar24 * 0x48);
            fVar8 = *(float *)(lVar13 + 0x18 + lVar24 * 0x48);
            fVar9 = *(float *)(lVar13 + 0x14 + lVar24 * 0x48);
            fVar10 = *(float *)(lVar13 + 0x10 + lVar24 * 0x48);
            uVar14 = *(undefined8 *)(lVar13 + 0x38 + lVar24 * 0x48);
            iVar25 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar25 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar25 + 1U) {
              FUN_146ca5ba2(param_2,iVar25);
            }
            dVar17 = (double)fVar9;
            dVar19 = (double)fVar4;
            dVar27 = (double)fVar7;
            lVar13 = *param_2;
            lVar24 = (longlong)iVar25 * 0x70;
            *(undefined8 *)(lVar13 + lVar24) = uVar14;
            auVar18._8_4_ = SUB84(dVar27,0);
            auVar18._0_8_ = (double)fVar6;
            auVar18._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
            *(undefined1 (*) [16])(lVar13 + 0x10 + lVar24) = auVar18;
            auVar16._8_4_ = SUB84(dVar19,0);
            auVar16._0_8_ = (double)fVar5;
            auVar16._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
            *(undefined1 (*) [16])(lVar13 + 0x20 + lVar24) = auVar16;
            auVar15._8_4_ = SUB84(dVar17,0);
            auVar15._0_8_ = (double)fVar10;
            auVar15._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
            *(undefined1 (*) [16])(lVar13 + 0x30 + lVar24) = auVar15;
            pdVar2 = (double *)(lVar13 + 0x40 + lVar24);
            *pdVar2 = (double)fVar8;
            pdVar2[1] = 0.0;
            puVar3 = (undefined8 *)(lVar13 + 0x50 + lVar24);
            *puVar3 = 0x3ff0000000000000;
            puVar3[1] = 0x3ff0000000000000;
            puVar3 = (undefined8 *)(lVar13 + 0x60 + lVar24);
            *puVar3 = 0x3ff0000000000000;
            puVar3[1] = 0;
            lVar26 = lVar26 + 1;
          } while (lVar26 < *(int *)(lVar23 + lVar22 * 0x28 + 0x1c));
        }
LAB_146daf88e:
        if ((longlong)(int)uStack_110 == 0) goto LAB_146daf9e0;
        iVar25 = *(int *)(local_118 + -4 + (longlong)(int)uStack_110 * 4);
        uStack_110 = CONCAT44(uStack_110._4_4_,(int)uStack_110 + -1);
      } while( true );
    }
  }
LAB_146dafa1f:
  if ((local_e0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146daf9e0:
  if (local_f0 == '\0') {
    local_f0 = '\x01';
    *(int *)(local_108 + 0x20) = *(int *)(local_108 + 0x20) + -1;
    if (local_f8 != *(longlong *)(local_108 + 0x10)) {
      FUN_14004673c();
    }
    *(longlong **)local_108 = local_100;
    *(undefined8 *)(local_108 + 0x18) = local_e8;
  }
  goto LAB_146dafa1f;
}



// FUNCTION 146dafab2 FUN_146dafab2 body=77 status=ok
// SIG undefined FUN_146dafab2(void)

int FUN_146dafab2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 == 0) {
    iVar4 = 1;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x20);
    iVar4 = 1;
    lVar5 = 0;
    do {
      iVar3 = (**(code **)(**(longlong **)(lVar2 + lVar5) + 0x118))();
      iVar4 = iVar4 + iVar3;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return iVar4;
}



// FUNCTION 146dafb00 FUN_146dafb00 body=230 status=ok
// SIG undefined FUN_146dafb00(void)

void FUN_146dafb00(longlong param_1,undefined8 param_2,uint param_3,int *param_4,int *param_5,
                  undefined8 *param_6)

{
  longlong *plVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [32];
  int *local_68;
  undefined8 *local_60;
  longlong local_58;
  uint local_4c;
  int local_48;
  undefined1 local_44 [12];
  
  local_44._4_8_ = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *param_4;
  local_60 = (undefined8 *)local_44;
  local_44._0_4_ = 0xffffffff;
  local_68 = &local_48;
  local_58 = param_1;
  local_4c = param_3;
  cVar2 = (*(code *)*param_6)(param_6[1],&local_58,param_2);
  *param_4 = *param_4 + 1;
  if ((cVar2 != '\0') && (0 < *(int *)(param_1 + 0x28))) {
    uVar4 = 0;
    do {
      uVar3 = uVar4 & 0xffffffff;
      if (param_3 != 0xffffffff) {
        uVar3 = (ulonglong)param_3;
      }
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x20) + uVar4 * 8);
      local_60 = param_6;
      local_68 = param_5;
      cVar2 = (**(code **)(*plVar1 + 0x138))(plVar1,param_2,uVar3,param_4);
    } while ((cVar2 != '\0') &&
            (uVar4 = uVar4 + 1, (longlong)uVar4 < (longlong)*(int *)(param_1 + 0x28)));
  }
  if ((local_44._4_8_ ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dafbe8 FUN_146dafbe8 body=278 status=ok
// SIG undefined FUN_146dafbe8(void)

undefined8 FUN_146dafbe8(longlong *param_1,double *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  float local_50;
  float fStack_4c;
  float local_48;
  float local_44;
  double adStack_40 [3];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_1[0xc] == 0) || ((DAT_14c75f1a4 & 1) == 0)) {
    (**(code **)(*param_1 + 0x80))(param_1,&local_58);
    lVar2 = 0;
    do {
      if ((adStack_40[lVar2] <= param_2[lVar2] && param_2[lVar2] != adStack_40[lVar2]) ||
         (param_2[lVar2 + 3] <= (double)(&local_58)[lVar2] &&
          (double)(&local_58)[lVar2] != param_2[lVar2 + 3])) goto LAB_146dafc8d;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 3);
    lVar2 = param_1[5];
    if ((longlong)(int)lVar2 == 0) {
LAB_146dafc8d:
      uVar3 = 0;
    }
    else {
      lVar1 = param_1[4];
      lVar4 = 0;
      do {
        uVar3 = (**(code **)(**(longlong **)(lVar1 + lVar4) + 0x140))
                          (*(longlong **)(lVar1 + lVar4),param_2);
        if ((char)uVar3 != '\0') break;
        bVar5 = (longlong)(int)lVar2 * 8 + -8 != lVar4;
        lVar4 = lVar4 + 8;
      } while (bVar5);
    }
  }
  else {
    local_50 = (float)param_2[2];
    local_58._4_4_ = (float)param_2[1];
    local_58._0_4_ = (float)*param_2;
    local_44 = (float)param_2[5];
    local_48 = (float)param_2[4];
    fStack_4c = (float)param_2[3];
    uVar3 = FUN_146db4a8e();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 146dafd00 FUN_146dafd00 body=287 status=ok
// SIG undefined FUN_146dafd00(void)

longlong * FUN_146dafd00(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_140836c88(&local_58);
    iVar1 = *(int *)(param_1 + 0x28);
    if ((longlong)iVar1 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x20);
      lVar6 = 0;
      do {
        plVar2 = *(longlong **)(lVar5 + lVar6);
        (**(code **)(*plVar2 + 0x28))(plVar2,&local_60);
        uVar3 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_140619960(&local_58,uVar3 & 0xffffffff);
        }
        *(undefined8 *)(local_58 + lVar7 * 8) = local_60;
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
  }
  lVar5 = FUN_14001cc68(0x70,0x10);
  FUN_14014f414(lVar5,&local_58);
  *param_2 = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  FUN_144756766(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dafe22 FUN_146dafe22 body=295 status=ok
// SIG undefined FUN_146dafe22(void)

longlong * FUN_146dafe22(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_140836c88(&local_58);
    iVar1 = *(int *)(param_1 + 0x28);
    if ((longlong)iVar1 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x20);
      lVar6 = 0;
      do {
        plVar2 = *(longlong **)(lVar5 + lVar6);
        (**(code **)(*plVar2 + 0x30))(plVar2,&local_60,param_3);
        uVar3 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_140619960(&local_58,uVar3 & 0xffffffff);
        }
        *(undefined8 *)(local_58 + lVar7 * 8) = local_60;
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
  }
  lVar5 = FUN_14001cc68(0x70,0x10);
  FUN_14014f414(lVar5,&local_58);
  *param_2 = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  FUN_144756766(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146daff4c FUN_146daff4c body=287 status=ok
// SIG undefined FUN_146daff4c(void)

longlong * FUN_146daff4c(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_140836c88(&local_58);
    iVar1 = *(int *)(param_1 + 0x28);
    if ((longlong)iVar1 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x20);
      lVar6 = 0;
      do {
        plVar2 = *(longlong **)(lVar5 + lVar6);
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_60);
        uVar3 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_140619960(&local_58,uVar3 & 0xffffffff);
        }
        *(undefined8 *)(local_58 + lVar7 * 8) = local_60;
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
  }
  lVar5 = FUN_14001cc68(0x70,0x10);
  FUN_14014f414(lVar5,&local_58);
  *param_2 = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  FUN_144756766(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146db006e FUN_146db006e body=425 status=ok
// SIG undefined FUN_146db006e(void)

void FUN_146db006e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  undefined1 local_a8 [16];
  double local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar5 = *(longlong **)(param_1 + 0x60);
  if ((plVar5 == (longlong *)0x0) || ((DAT_14c75f1a4 & 1) == 0)) {
    if ((longlong)*(int *)(param_1 + 0x28) != 0) {
      plVar8 = *(longlong **)(param_1 + 0x20);
      plVar5 = plVar8 + *(int *)(param_1 + 0x28);
      do {
        if (*plVar8 != 0) {
          puVar6 = &DAT_14c846480;
          puVar7 = (undefined8 *)local_c8;
          for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          cVar4 = (*(code *)*param_2)(param_2[1],*plVar8,local_c8);
          if (cVar4 != '\0') break;
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar5);
    }
  }
  else if (0 < (int)plVar5[1]) {
    lVar9 = 0;
    lVar10 = 0;
    do {
      lVar1 = *plVar5;
      lVar2 = *(longlong *)(lVar1 + 0x38 + lVar9);
      if (lVar2 != 0) {
        dStack_b0 = (double)*(float *)(lVar1 + 0xc + lVar9);
        local_b8 = (double)*(float *)(lVar1 + 8 + lVar9);
        dVar3 = (double)*(float *)(lVar1 + 4 + lVar9);
        local_98 = (double)*(float *)(lVar1 + 0x18 + lVar9);
        dVar11 = (double)*(float *)(lVar1 + 0x14 + lVar9);
        local_c8._8_4_ = SUB84(dVar3,0);
        local_c8._0_8_ = (double)*(float *)(lVar1 + lVar9);
        local_c8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        local_a8._8_4_ = SUB84(dVar11,0);
        local_a8._0_8_ = (double)*(float *)(lVar1 + 0x10 + lVar9);
        local_a8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        uStack_90 = 0;
        local_88 = 0x3ff0000000000000;
        uStack_80 = 0x3ff0000000000000;
        local_78 = 0x3ff0000000000000;
        uStack_70 = 0;
        cVar4 = (*(code *)*param_2)(param_2[1],lVar2,local_c8);
        if (cVar4 != '\0') break;
        plVar5 = *(longlong **)(param_1 + 0x60);
      }
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0x48;
    } while (lVar10 < (int)plVar5[1]);
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146db0218 FUN_146db0218 body=842 status=ok
// SIG undefined FUN_146db0218(void)

void FUN_146db0218(longlong *param_1,longlong *param_2)

{
  double *pdVar1;
  uint *puVar2;
  byte *pbVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ulonglong *puVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined1 auStack_58 [32];
  uint local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cba8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cb70);
  (**(code **)(*param_1 + 0x108))(param_1,local_38);
  FUN_14004b8ea(param_1,param_2);
  FUN_140a28356(param_2,param_1 + 4);
  pdVar1 = (double *)(param_1 + 6);
  FUN_140d03e72(param_2,pdVar1);
  lVar5 = param_1[0xc];
  iVar9 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (iVar9 < 0x1d) {
    FUN_146db0564(param_1,param_2);
    puVar6 = (ulonglong *)param_2[1];
    if (puVar6[1] < *puVar6 + 4) {
      local_38[0] = (uint)(lVar5 != 0);
      (**(code **)(*param_2 + 0x170))(param_2,local_38,4);
      if (1 < local_38[0]) {
        FUN_14572541c(param_2);
      }
    }
    else {
      *puVar6 = *puVar6 + 4;
    }
  }
  else {
    iVar9 = FUN_1448332aa(param_2,&DAT_149e3cbb8);
    if (iVar9 < 0x5b) {
      puVar6 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar6 + 1;
      if ((uint *)puVar6[1] < puVar2) {
        local_38[0] = (uint)(lVar5 != 0);
        (**(code **)(*param_2 + 0x170))(param_2,local_38,4);
        uVar10 = local_38[0];
        if (1 < local_38[0]) {
          FUN_14572541c(param_2);
          uVar10 = local_38[0];
        }
      }
      else {
        uVar10 = *(uint *)*puVar6;
        *puVar6 = (ulonglong)puVar2;
      }
      if (uVar10 != 0) {
        FUN_146db0564(param_1,param_2);
      }
    }
    else {
      pbVar3 = (byte *)((longlong)param_1 + 0x6c);
      pbVar7 = *(byte **)param_2[1];
      if ((byte *)((undefined8 *)param_2[1])[1] < pbVar7 + 1) {
        (**(code **)(*param_2 + 0x170))(param_2,pbVar3,1);
      }
      else {
        *pbVar3 = *pbVar7;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
      }
      iVar9 = FUN_1448332aa(param_2,&DAT_149e3cb70);
      if (iVar9 < 0xc) {
        local_38[0] = CONCAT22(local_38[0]._2_2_,(short)param_1[0xd]);
        puVar6 = (ulonglong *)param_2[1];
        puVar4 = (undefined2 *)*puVar6 + 1;
        if ((undefined2 *)puVar6[1] < puVar4) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,local_38,2);
          }
          else {
            thunk_FUN_1457251a8(param_2,local_38);
          }
        }
        else {
          local_38[0] = CONCAT22(local_38[0]._2_2_,*(undefined2 *)*puVar6);
          *puVar6 = (ulonglong)puVar4;
        }
        *(uint *)(param_1 + 0xd) = local_38[0] & 0xffff;
      }
      else {
        puVar8 = *(undefined4 **)param_2[1];
        if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar8 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0xd,4);
          }
          else {
            thunk_FUN_14572512c(param_2);
          }
        }
        else {
          *(undefined4 *)(param_1 + 0xd) = *puVar8;
          *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
        }
      }
      if ((*pbVar3 & 2) != 0) {
        if ((*(byte *)(param_2 + 5) & 1) != 0) {
          puVar11 = (undefined8 *)FUN_14001cc68(0x38,0x10);
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11[2] = 0;
          puVar11[3] = 0;
          puVar11[4] = 0;
          puVar11[5] = 0;
          *(undefined4 *)(puVar11 + 6) = 0;
          lVar5 = param_1[0xc];
          param_1[0xc] = (longlong)puVar11;
          if (lVar5 != 0) {
            FUN_1400baf84(lVar5);
            FUN_1400020a8(lVar5);
          }
        }
        FUN_146daef90(param_1[0xc],param_2);
        if ((*(byte *)(param_2 + 5) & 1) != 0) {
          FUN_1401183f6(param_1);
          FUN_14011842e(param_1);
        }
      }
    }
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    if ((*pdVar1 == 1.79769313486232e+308) && (!NAN(*pdVar1))) {
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      *pdVar1 = 0.0;
      param_1[7] = 0;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146db0564 FUN_146db0564 body=188 status=ok
// SIG undefined FUN_146db0564(void)

void FUN_146db0564(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_398 [40];
  longlong local_370;
  undefined4 local_368;
  undefined1 local_100 [216];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_398;
  FUN_1411dabc2(&local_370);
  FUN_146ca14da(local_100);
  (**(code **)(local_370 + 8))(&local_370,param_2);
  FUN_146ca16b6(local_100,param_2);
  FUN_146ca5a52(local_100);
  FUN_14112425e(&local_370);
  local_370 = *(longlong *)(param_1 + 0x20);
  local_368 = *(undefined4 *)(param_1 + 0x28);
  uVar1 = FUN_14485a28c(&local_370);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) | 1;
  FUN_1401183f6(param_1);
  FUN_14011842e(param_1);
  if ((local_28 ^ (ulonglong)auStack_398) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146db0622 FUN_146db0622 body=357 status=ok
// SIG undefined FUN_146db0622(void)

ulonglong FUN_146db0622(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong *puVar4;
  int iVar5;
  
  if ((param_2 == 0) || (*(char *)(param_2 + 0x1c) != '\x04')) {
    if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
      uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      lVar3 = param_1 + 0xb8;
      if (*(longlong *)(param_1 + 0xc0) != 0) {
        lVar3 = *(longlong *)(param_1 + 0xc0);
      }
      iVar5 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 200) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                               4);
      if (iVar5 != -1) {
        while (puVar4 = (ulonglong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar5 * 0x18),
              *puVar4 != param_2) {
          iVar5 = (int)puVar4[2];
          if (iVar5 == -1) {
            return 0;
          }
        }
        goto LAB_146db076a;
      }
    }
  }
  else if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
    uVar1 = *(ulonglong *)(param_2 + 0x20);
    uVar2 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar3 = param_1 + 0xb8;
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xc0);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 200) - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4
                    );
    if (iVar5 != -1) {
      while (puVar4 = (ulonglong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar5 * 0x18),
            *puVar4 != uVar1) {
        iVar5 = (int)puVar4[2];
        if (iVar5 == -1) {
          return 0;
        }
      }
LAB_146db076a:
      if (puVar4 + 1 == (ulonglong *)0x0 || puVar4 == (ulonglong *)0x0) {
        return 0;
      }
      return puVar4[1];
    }
  }
  return 0;
}



// FUNCTION 146db07f6 FUN_146db07f6 body=199 status=ok
// SIG undefined FUN_146db07f6(void)

void FUN_146db07f6(longlong param_1,undefined2 *param_2)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  char cVar5;
  longlong lVar6;
  
  *(undefined1 *)(param_1 + 0xb2) = *(undefined1 *)(param_2 + 1);
  *(undefined2 *)(param_1 + 0xb0) = *param_2;
  if ((longlong)*(int *)(param_1 + 0xf8) != 0) {
    cVar2 = *(char *)(param_1 + 0xb2);
    uVar4 = (uint)*(byte *)(param_1 + 0xb0);
    cVar5 = *(char *)(param_1 + 0xb1);
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xf0) + lVar6);
      if (cVar2 < *(char *)(lVar1 + 0x96)) {
        cVar2 = *(char *)(lVar1 + 0x96);
      }
      if (cVar5 < *(char *)(lVar1 + 0x95)) {
        cVar5 = *(char *)(lVar1 + 0x95);
      }
      cVar3 = (char)uVar4;
      uVar4 = uVar4 & 0xff;
      if (cVar3 < (char)*(uint *)(lVar1 + 0x94)) {
        uVar4 = *(uint *)(lVar1 + 0x94);
      }
      if ((char)uVar4 < '\0') {
        uVar4 = 0xff;
      }
      if (cVar5 < '\0') {
        cVar5 = -1;
      }
      if (cVar2 < '\0') {
        cVar2 = -1;
      }
      *(char *)(param_1 + 0xb0) = (char)uVar4;
      *(char *)(param_1 + 0xb1) = cVar5;
      *(char *)(param_1 + 0xb2) = cVar2;
      lVar6 = lVar6 + 8;
    } while ((longlong)*(int *)(param_1 + 0xf8) * 8 != lVar6);
  }
  return;
}



// FUNCTION 146db08be FUN_146db08be body=135 status=ok
// SIG undefined FUN_146db08be(void)

void FUN_146db08be(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar1 = *(undefined4 *)(param_2 + 0x18);
    lVar2 = 0;
    do {
      local_30 = (undefined8 *)0x0;
      FUN_140f616d2(*(undefined8 *)(*(longlong *)(param_1 + 8) + lVar2 * 8),uVar1,&local_30);
      if (local_30 != (undefined8 *)0x0) {
        (**(code **)*local_30)(local_30,1);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x10));
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146db0946 FUN_146db0946 body=567 status=ok
// SIG undefined FUN_146db0946(void)

void FUN_146db0946(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_146db6904(param_2,0);
  }
  iVar6 = *(int *)(param_1 + 0x10);
  if (-1 < iVar6) {
    if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
      FUN_146db6904(param_2);
    }
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(int *)((longlong)param_3 + 0xc) < 0) {
      FUN_146db6904(param_3,0);
    }
    iVar6 = *(int *)(param_1 + 0x10);
    if (-1 < iVar6) {
      if (*(int *)((longlong)param_3 + 0xc) < iVar6) {
        FUN_146db6904(param_3);
      }
      if (0 < *(int *)(param_1 + 0x18)) {
        lVar7 = 0;
        do {
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + lVar7 * 8);
          iVar6 = *(int *)(lVar2 + 0x98);
          iVar8 = *(int *)(param_1 + 0x24);
          if (iVar6 < 0) {
            iVar5 = (iVar6 - iVar8 / 2) + 1;
          }
          else {
            iVar5 = iVar8 / 2 + iVar6;
          }
          iVar5 = iVar5 / iVar8;
          if (iVar5 < 2) {
            iVar5 = 1;
          }
          if (0 < iVar6) {
            iVar8 = 0;
            do {
              iVar9 = iVar8 + (iVar5 + iVar6 + -1) / iVar5;
              iVar4 = iVar6;
              if (iVar9 < iVar6) {
                iVar4 = iVar9;
              }
              iVar1 = (int)param_3[1];
              *(uint *)(param_3 + 1) = iVar1 + 1U;
              if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
                FUN_146db6964(param_3,iVar1);
              }
              lVar3 = *param_3;
              lVar10 = (longlong)iVar1 * 0x10;
              *(int *)(lVar3 + lVar10) = iVar8;
              *(int *)(lVar3 + 4 + lVar10) = iVar4;
              *(longlong *)(lVar3 + 8 + lVar10) = lVar2;
              iVar8 = iVar9;
            } while (iVar9 < iVar6);
          }
          iVar6 = *(int *)(lVar2 + 0x18);
          iVar8 = *(int *)(param_1 + 0x20);
          if (iVar6 < 0) {
            iVar5 = (iVar6 - iVar8 / 2) + 1;
          }
          else {
            iVar5 = iVar8 / 2 + iVar6;
          }
          iVar5 = iVar5 / iVar8;
          if (iVar5 < 2) {
            iVar5 = 1;
          }
          if (0 < iVar6) {
            iVar8 = 0;
            do {
              iVar9 = iVar8 + (iVar5 + iVar6 + -1) / iVar5;
              iVar4 = iVar6;
              if (iVar9 < iVar6) {
                iVar4 = iVar9;
              }
              iVar1 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar1 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
                FUN_146db6964(param_2,iVar1);
              }
              lVar3 = *param_2;
              lVar10 = (longlong)iVar1 * 0x10;
              *(int *)(lVar3 + lVar10) = iVar8;
              *(int *)(lVar3 + 4 + lVar10) = iVar4;
              *(longlong *)(lVar3 + 8 + lVar10) = lVar2;
              iVar8 = iVar9;
            } while (iVar9 < iVar6);
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < *(int *)(param_1 + 0x18));
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar6);
}



// FUNCTION 146db0bc0 FUN_146db0bc0 body=33 status=ok
// SIG undefined FUN_146db0bc0(void)

void FUN_146db0bc0(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  
  if ((param_2 != (longlong *)0x0) &&
     (lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x1e8) + (longlong)(int)param_2[1] * 8),
     lVar1 != 0)) {
    *(undefined4 *)(lVar1 + 0x48) = param_3;
  }
  return;
}



// FUNCTION 146db0be2 FUN_146db0be2 body=249 status=ok
// SIG undefined FUN_146db0be2(void)

void FUN_146db0be2(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = *(int *)((longlong)param_1 + 0x2c);
  FUN_146db6d75(param_1[4],(int)param_1[5]);
  *(undefined4 *)(param_1 + 5) = 0;
  if ((iVar2 < 0) && (*(int *)((longlong)param_1 + 0x2c) != 0)) {
    FUN_146db6da0(param_1 + 4);
  }
  if (0 < (int)param_1[1]) {
    lVar4 = 0x10;
    lVar3 = 0;
    do {
      iVar2 = FUN_146db0cdc(param_1 + 4);
      *(int *)(*param_1 + lVar4) = iVar2;
      plVar1 = (longlong *)(param_1[4] + (longlong)iVar2 * 0x18);
      iVar2 = (int)plVar1[1];
      *(uint *)(plVar1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar1 + 0xc) < iVar2 + 1U) {
        FUN_1446f48e2(plVar1,iVar2);
      }
      *(int *)(*plVar1 + (longlong)iVar2 * 4) = (int)lVar3;
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x20;
    } while (lVar3 < (int)param_1[1]);
  }
  iVar2 = (int)param_1[3];
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      if (*(int *)(*param_1 + 0x10 + (longlong)*(int *)(param_1[2] + lVar3 * 8) * 0x20) !=
          *(int *)(*param_1 + 0x10 + (longlong)*(int *)(param_1[2] + 4 + lVar3 * 8) * 0x20)) {
        FUN_146db0d1c(param_1);
        iVar2 = (int)param_1[3];
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  FUN_146db0e02(param_1);
  return;
}



// FUNCTION 146db0cdc FUN_146db0cdc body=64 status=ok
// SIG undefined FUN_146db0cdc(void)

int FUN_146db0cdc(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146db6dea(param_1,iVar1);
  }
  FUN_146db6dd0((longlong)iVar1 * 0x18 + *param_1,1);
  return iVar1;
}



// FUNCTION 146db0d1c FUN_146db0d1c body=229 status=ok
// SIG undefined FUN_146db0d1c(void)

void FUN_146db0d1c(longlong *param_1,int param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  plVar1 = (longlong *)(param_1[4] + (longlong)param_2 * 0x18);
  plVar2 = (longlong *)(param_1[4] + (longlong)param_3 * 0x18);
  plVar8 = plVar2;
  if ((int)plVar1[1] < (int)plVar2[1]) {
    plVar8 = plVar1;
    plVar1 = plVar2;
    param_2 = param_3;
  }
  uVar3 = *(uint *)(plVar8 + 1);
  if (0 < (longlong)(int)uVar3) {
    iVar4 = (int)plVar1[1];
    *(uint *)(plVar1 + 1) = iVar4 + uVar3;
    if ((uint)(*(int *)((longlong)plVar1 + 0xc) - iVar4) < uVar3) {
      FUN_1446f48e2(plVar1,iVar4);
    }
    memcpy((void *)((longlong)iVar4 * 4 + *plVar1),(void *)*plVar8,(longlong)(int)uVar3 << 2);
    lVar6 = plVar8[1];
    if ((longlong)(int)lVar6 != 0) {
      lVar5 = *plVar8;
      lVar7 = 0;
      do {
        *(int *)(*param_1 + 0x10 + (longlong)*(int *)(lVar5 + lVar7) * 0x20) = param_2;
        lVar7 = lVar7 + 4;
      } while ((longlong)(int)lVar6 * 4 != lVar7);
    }
    *(undefined4 *)(plVar8 + 1) = 0;
    if (*(int *)((longlong)plVar8 + 0xc) != 0) {
      FUN_14481578e(plVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 146db0e02 FUN_146db0e02 body=1489 status=ok
// SIG undefined FUN_146db0e02(void)

void FUN_146db0e02(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  undefined8 *puVar24;
  int iVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  bool bVar28;
  float fVar29;
  undefined1 auStack_388 [32];
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  plVar1 = param_1 + 4;
  iVar21 = (int)param_1[5];
  if (1 < (longlong)iVar21) {
    lVar13 = *plVar1;
    memset(local_358,0,0x2f0);
    local_360 = lVar13 + (longlong)iVar21 * 0x18 + -0x18;
    local_368 = lVar13;
    fVar29 = logf((float)iVar21);
    local_358[0] = (int)(longlong)(fVar29 + fVar29);
    plVar10 = &local_368;
    do {
      puVar12 = (undefined8 *)*plVar10;
      puVar15 = (undefined8 *)plVar10[1];
      iVar21 = (int)plVar10[2];
      iVar25 = (int)((ulonglong)((longlong)puVar15 - (longlong)puVar12) >> 3) * -0x55555555;
      uVar22 = iVar25 + 1;
      puVar19 = puVar15;
      puVar26 = puVar12;
      if (iVar21 != 0) {
LAB_146db0eb2:
        if (8 < (int)uVar22) {
          uVar17 = (ulonglong)(uVar22 >> 1);
          uVar3 = puVar12[uVar17 * 3 + 2];
          uVar5 = puVar12[uVar17 * 3];
          uVar6 = (puVar12 + uVar17 * 3)[1];
          puVar12[uVar17 * 3 + 2] = puVar12[2];
          uVar7 = puVar12[1];
          puVar12[uVar17 * 3] = *puVar12;
          (puVar12 + uVar17 * 3)[1] = uVar7;
          puVar12[2] = uVar3;
          *puVar12 = uVar5;
          puVar12[1] = uVar6;
          puVar24 = puVar19 + 3;
          puVar11 = puVar12;
          do {
            puVar8 = puVar11 + 3;
            puVar20 = puVar11 + 3;
            do {
              puVar11 = puVar20;
              puVar27 = puVar8;
              if (puVar19 < puVar11) break;
              puVar8 = puVar27 + 3;
              puVar20 = puVar11 + 3;
            } while (*(int *)(puVar12 + 1) <= *(int *)(puVar11 + 1));
            puVar8 = puVar24 + -6;
            do {
              puVar20 = puVar24;
              puVar16 = puVar8;
              puVar24 = puVar20 + -3;
              if (puVar24 <= puVar12) break;
              puVar8 = puVar16 + -3;
            } while (*(int *)(puVar20 + -2) <= *(int *)(puVar12 + 1));
            if (puVar24 < puVar11) goto LAB_146db0fa5;
            uVar3 = puVar11[2];
            uVar5 = *puVar11;
            uVar6 = puVar11[1];
            puVar11[2] = puVar20[-1];
            uVar7 = puVar20[-2];
            *puVar11 = *puVar24;
            puVar11[1] = uVar7;
            puVar20[-1] = uVar3;
            *puVar24 = uVar5;
            puVar20[-2] = uVar6;
          } while( true );
        }
        for (; puVar26 = puVar12, puVar15 = puVar12, puVar12 < puVar19; puVar19 = puVar19 + -3) {
          while (puVar24 = puVar26, puVar15 = puVar15 + 3, puVar15 <= puVar19) {
            puVar26 = puVar15;
            if (*(int *)(puVar24 + 1) <= *(int *)(puVar15 + 1)) {
              puVar26 = puVar24;
            }
          }
          local_58 = puVar24[2];
          local_68 = *puVar24;
          uStack_60 = puVar24[1];
          uVar5 = local_68;
          uVar6 = uStack_60;
          puVar24[2] = puVar19[2];
          uVar3 = puVar19[1];
          *puVar24 = *puVar19;
          puVar24[1] = uVar3;
          puVar19[2] = local_58;
          local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
          uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
          *(undefined4 *)puVar19 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar19 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_60._4_4_;
          local_68 = uVar5;
          uStack_60 = uVar6;
        }
        goto LAB_146db133b;
      }
LAB_146db1076:
      if (uVar22 != 0) {
        iVar21 = (iVar25 - (iVar25 + -1 >> 0x1f)) + -1 >> 1;
        iVar25 = iVar21;
joined_r0x000146db109d:
        do {
          iVar23 = iVar21 * 2 + 1;
          if (iVar23 < (int)uVar22) {
            iVar14 = iVar21 * 2 + 2;
            if ((iVar14 < (int)uVar22) &&
               (*(int *)(puVar12 + (longlong)iVar14 * 3 + 1) <=
                *(int *)(puVar12 + (longlong)iVar23 * 3 + 1))) {
              iVar23 = iVar14;
            }
            if (*(int *)(puVar12 + (longlong)iVar23 * 3 + 1) <
                *(int *)(puVar12 + (longlong)iVar21 * 3 + 1)) {
              puVar19 = puVar12 + (longlong)iVar21 * 3;
              puVar15 = puVar12 + (longlong)iVar23 * 3;
              local_58 = puVar19[2];
              local_68 = *puVar19;
              uStack_60 = puVar19[1];
              uVar5 = local_68;
              uVar6 = uStack_60;
              puVar19[2] = puVar15[2];
              uVar3 = puVar15[1];
              *puVar19 = *puVar15;
              puVar19[1] = uVar3;
              puVar15[2] = local_58;
              local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
              uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
              *(undefined4 *)puVar15 = (undefined4)local_68;
              *(undefined4 *)((longlong)puVar15 + 4) = local_68._4_4_;
              *(undefined4 *)(puVar15 + 1) = (undefined4)uStack_60;
              *(undefined4 *)((longlong)puVar15 + 0xc) = uStack_60._4_4_;
              iVar21 = iVar23;
              local_68 = uVar5;
              uStack_60 = uVar6;
              goto joined_r0x000146db109d;
            }
          }
          bVar28 = iVar25 != 0;
          iVar21 = iVar25 + -1;
          iVar25 = iVar21;
        } while (bVar28);
        if (1 < (int)uVar22) {
          uVar17 = (ulonglong)uVar22 - 1;
          local_58 = puVar12[2];
          local_68 = *puVar12;
          uStack_60 = puVar12[1];
          uVar5 = local_68;
          uVar6 = uStack_60;
          puVar12[2] = puVar12[uVar17 * 3 + 2];
          uVar3 = (puVar12 + uVar17 * 3)[1];
          *puVar12 = puVar12[uVar17 * 3];
          puVar12[1] = uVar3;
          puVar12[uVar17 * 3 + 2] = local_58;
          local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
          uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
          puVar19 = puVar12 + uVar17 * 3;
          *(undefined4 *)puVar19 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar19 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_60._4_4_;
          local_68 = uVar5;
          uStack_60 = uVar6;
          if (uVar22 != 2) {
            do {
              iVar21 = 0;
              iVar23 = 1;
              iVar25 = 0;
              do {
                iVar21 = iVar21 + 2;
                iVar14 = iVar23;
                if (((longlong)iVar21 < (longlong)uVar17) &&
                   (*(int *)(puVar12 + (longlong)iVar21 * 3 + 1) <=
                    *(int *)(puVar12 + (longlong)iVar23 * 3 + 1))) {
                  iVar14 = iVar21;
                }
                if (*(int *)(puVar12 + (longlong)iVar25 * 3 + 1) <=
                    *(int *)(puVar12 + (longlong)iVar14 * 3 + 1)) break;
                puVar19 = puVar12 + (longlong)iVar25 * 3;
                puVar15 = puVar12 + (longlong)iVar14 * 3;
                uVar3 = puVar19[2];
                uVar5 = *puVar19;
                uVar6 = puVar19[1];
                puVar19[2] = puVar15[2];
                uVar7 = puVar15[1];
                *puVar19 = *puVar15;
                puVar19[1] = uVar7;
                puVar15[2] = uVar3;
                *puVar15 = uVar5;
                puVar15[1] = uVar6;
                iVar21 = iVar14 * 2;
                iVar23 = iVar14 * 2 + 1;
                iVar25 = iVar14;
              } while ((longlong)iVar23 < (longlong)uVar17);
              uVar2 = uVar17 - 1;
              local_58 = puVar12[2];
              local_68 = *puVar12;
              uStack_60 = puVar12[1];
              uVar5 = local_68;
              uVar6 = uStack_60;
              puVar12[2] = puVar12[uVar2 * 3 + 2];
              uVar3 = (puVar12 + uVar2 * 3)[1];
              *puVar12 = puVar12[uVar2 * 3];
              puVar12[1] = uVar3;
              puVar12[uVar2 * 3 + 2] = local_58;
              local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
              uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
              puVar19 = puVar12 + uVar2 * 3;
              *(undefined4 *)puVar19 = (undefined4)local_68;
              *(undefined4 *)((longlong)puVar19 + 4) = local_68._4_4_;
              *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_60;
              *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_60._4_4_;
              bVar28 = 2 < uVar17;
              uVar17 = uVar2;
              local_68 = uVar5;
              uStack_60 = uVar6;
            } while (bVar28);
          }
        }
      }
LAB_146db133b:
      plVar10 = plVar10 + -3;
    } while (&local_368 <= plVar10);
    iVar21 = (int)param_1[5];
  }
  if (0 < iVar21) {
    lVar13 = 0;
    do {
      lVar9 = (longlong)*(int *)(*plVar1 + 8 + lVar13 * 0x18);
      if (lVar9 == 0) {
        FUN_146db1a5c(plVar1);
        break;
      }
      lVar4 = *(longlong *)(*plVar1 + lVar13 * 0x18);
      lVar18 = 0;
      do {
        *(int *)(*param_1 + 0x10 + (longlong)*(int *)(lVar4 + lVar18) * 0x20) = (int)lVar13;
        lVar18 = lVar18 + 4;
      } while (lVar9 * 4 != lVar18);
      lVar13 = lVar13 + 1;
    } while (lVar13 < (int)param_1[5]);
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146db0fa5:
  local_58 = puVar12[2];
  local_68 = *puVar12;
  uStack_60 = puVar12[1];
  uVar5 = local_68;
  uVar6 = uStack_60;
  puVar12[2] = puVar20[-1];
  uVar3 = puVar20[-2];
  *puVar12 = *puVar24;
  puVar12[1] = uVar3;
  puVar20[-1] = local_58;
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  *(undefined4 *)puVar24 = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar20 + -0x14) = local_68._4_4_;
  *(undefined4 *)(puVar20 + -2) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar20 + -0xc) = uStack_60._4_4_;
  iVar21 = iVar21 + -1;
  puVar20 = puVar20 + -6;
  local_68 = uVar5;
  uStack_60 = uVar6;
  if ((longlong)puVar16 - (longlong)puVar26 < (longlong)puVar15 - (longlong)puVar27) {
    if (puVar11 < puVar19) {
      *plVar10 = (longlong)puVar11;
      plVar10[1] = (longlong)puVar19;
      *(int *)(plVar10 + 2) = iVar21;
      plVar10 = plVar10 + 3;
    }
    puVar15 = puVar16;
    puVar27 = puVar12;
    if (puVar24 <= puVar12 + 3) goto LAB_146db133b;
  }
  else {
    if (puVar12 + 3 < puVar24) {
      *plVar10 = (longlong)puVar12;
      plVar10[1] = (longlong)puVar20;
      *(int *)(plVar10 + 2) = iVar21;
      plVar10 = plVar10 + 3;
    }
    puVar12 = puVar11;
    puVar20 = puVar19;
    puVar15 = puVar19;
    if (puVar19 <= puVar11) goto LAB_146db133b;
  }
  iVar25 = (int)((ulonglong)((longlong)puVar15 - (longlong)puVar27) >> 3) * -0x55555555;
  uVar22 = iVar25 + 1;
  puVar19 = puVar20;
  puVar26 = puVar27;
  if (iVar21 == 0) goto LAB_146db1076;
  goto LAB_146db0eb2;
}



// FUNCTION 146db13d4 FUN_146db13d4 body=474 status=ok
// SIG undefined FUN_146db13d4(void)

void FUN_146db13d4(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  iVar7 = (int)param_1[1];
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  if (iVar7 != 0) {
    FUN_14481578e(&local_58);
    iVar7 = (int)param_1[1];
    if (0 < iVar7) {
      lVar8 = 0x14;
      lVar9 = 0;
      do {
        uVar4 = uStack_50;
        if (*(int *)(*param_1 + lVar8) == 0) {
          lVar6 = (longlong)(int)uStack_50;
          uVar5 = (int)uStack_50 + 1;
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
          if (uStack_50._4_4_ < uVar5) {
            FUN_1446f48e2(&local_58,uVar4 & 0xffffffff);
          }
          *(int *)(local_58 + lVar6 * 4) = (int)lVar9;
          iVar7 = (int)param_1[1];
        }
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 0x20;
      } while (lVar9 < iVar7);
    }
  }
  if (0 < (int)uStack_50) {
    lVar8 = 0;
    iVar7 = (int)uStack_50;
    do {
      lVar9 = *param_1;
      lVar6 = (longlong)*(int *)(local_58 + lVar8 * 4) * 0x20;
      lVar10 = (longlong)*(int *)(lVar9 + 8 + lVar6);
      if (lVar10 != 0) {
        lVar3 = *(longlong *)(lVar9 + lVar6);
        iVar7 = *(int *)(lVar9 + lVar6 + 0x14) + 1;
        lVar9 = 0;
        local_60 = lVar8;
        do {
          uVar4 = uStack_50;
          lVar6 = (longlong)*(int *)(lVar3 + lVar9);
          lVar8 = *param_1;
          iVar1 = *(int *)(param_1[2] + lVar6 * 8);
          iVar2 = *(int *)(param_1[2] + 4 + lVar6 * 8);
          lVar6 = (longlong)iVar1 * 0x20;
          if (*(int *)(lVar8 + 0x14 + lVar6) == -1) {
            *(int *)(lVar8 + lVar6 + 0x14) = iVar7;
            lVar8 = (longlong)(int)uStack_50;
            uVar5 = (int)uStack_50 + 1;
            uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
            if (uStack_50._4_4_ < uVar5) {
              FUN_1446f48e2(&local_58,uVar4 & 0xffffffff);
            }
            *(int *)(local_58 + lVar8 * 4) = iVar1;
            lVar8 = *param_1;
          }
          uVar4 = uStack_50;
          lVar6 = (longlong)iVar2 * 0x20;
          if (*(int *)(lVar8 + 0x14 + lVar6) == -1) {
            *(int *)(lVar8 + lVar6 + 0x14) = iVar7;
            lVar8 = (longlong)(int)uStack_50;
            uVar5 = (int)uStack_50 + 1;
            uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
            if (uStack_50._4_4_ < uVar5) {
              FUN_1446f48e2(&local_58,uVar4 & 0xffffffff);
            }
            *(int *)(local_58 + lVar8 * 4) = iVar2;
          }
          lVar9 = lVar9 + 4;
        } while (lVar10 * 4 != lVar9);
        lVar8 = local_60;
        iVar7 = (int)uStack_50;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar7);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146db15b0 FUN_146db15b0 body=896 status=ok
// SIG undefined FUN_146db15b0(void)

void FUN_146db15b0(longlong *param_1)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  uint *puVar16;
  longlong lVar17;
  longlong lVar18;
  uint *puVar19;
  int iVar20;
  ulonglong uVar21;
  undefined1 auStack_c8 [32];
  uint local_a8;
  uint local_a4;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  ulonglong local_88;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = 0;
  uStack_50 = 0;
  iVar15 = (int)param_1[1];
  if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar15);
  }
  if ((iVar15 != 0) && (FUN_14481578e(&local_58), 0 < (int)param_1[1])) {
    iVar15 = 0;
    do {
      lVar14 = (longlong)(int)uStack_50;
      uVar4 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
      if (uStack_50._4_4_ < uVar4) {
        FUN_1446f48e2(&local_58);
      }
      *(int *)(local_58 + lVar14 * 4) = iVar15;
      iVar15 = iVar15 + 1;
    } while (iVar15 < (int)param_1[1]);
  }
  lVar14 = local_58;
  uVar21 = (ulonglong)(int)uStack_50;
  if (0 < (longlong)uVar21) {
    uVar6 = 1;
    do {
      if (uVar6 < uVar21) {
        iVar15 = *(int *)(local_58 + -4 + uVar6 * 4);
        iVar9 = *(int *)(local_58 + uVar6 * 4);
        if (*(int *)(*param_1 + 0x14 + (longlong)iVar9 * 0x20) <
            *(int *)(*param_1 + 0x14 + (longlong)iVar15 * 0x20)) {
          *(int *)(local_58 + -4 + uVar6 * 4) = iVar9;
          *(int *)(local_58 + uVar6 * 4) = iVar15;
        }
      }
      uVar7 = uVar6 + 1;
      uVar6 = uVar6 + 2;
    } while (uVar7 < uVar21);
    local_90 = local_58;
    if (2 < (int)uStack_50) {
      local_78 = local_58 + 4;
      uVar6 = 2;
      do {
        local_88 = uVar6;
        iVar15 = (int)local_88;
        local_a8 = iVar15 * 2;
        local_60 = (longlong)(int)local_a8;
        local_68 = local_60 * 4;
        lVar17 = 0;
        local_a0 = local_78;
        do {
          local_80 = lVar17;
          uVar4 = (int)uStack_50 - (int)local_80;
          if ((int)local_a8 <= (int)uVar4) {
            uVar4 = local_a8;
          }
          if (iVar15 < (int)uVar4 && 0 < iVar15) {
            local_98 = local_58 + local_80 * 4;
            iVar9 = 0;
            uVar6 = local_88;
            while( true ) {
              iVar20 = (int)uVar6;
              piVar1 = (int *)(local_98 + (longlong)iVar20 * 4);
              iVar13 = 0;
              uVar5 = iVar20 - iVar9;
              if (uVar5 != 0 && iVar9 <= iVar20) {
                iVar13 = 0;
                uVar7 = (ulonglong)uVar5;
                do {
                  uVar7 = uVar7 >> 1;
                  iVar12 = (uint)uVar7 + iVar13;
                  if (*(int *)(*param_1 + 0x14 +
                              (longlong)
                              *(int *)(local_98 + (longlong)iVar9 * 4 + (longlong)iVar12 * 4) * 0x20
                              ) <= *(int *)(*param_1 + 0x14 + (longlong)*piVar1 * 0x20)) {
                    iVar13 = iVar12 + (uVar5 & 1);
                  }
                  bVar3 = 1 < uVar5;
                  uVar5 = (uint)uVar7;
                } while (bVar3);
              }
              iVar13 = iVar13 + iVar9;
              local_a4 = uVar4;
              if (iVar20 - iVar13 == 0 || iVar20 < iVar13) break;
              uVar5 = uVar4 - iVar20;
              if (uVar5 == 0 || (int)uVar4 < iVar20) {
                iVar9 = 0;
              }
              else {
                piVar2 = (int *)(local_98 + (longlong)iVar13 * 4);
                uVar7 = (ulonglong)*piVar2;
                iVar9 = 0;
                uVar6 = (ulonglong)uVar5;
                do {
                  uVar6 = uVar6 >> 1;
                  uVar8 = (uint)uVar6 + iVar9;
                  if (*(int *)(*param_1 + 0x14 + (longlong)piVar1[uVar8] * 0x20) <
                      *(int *)(*param_1 + 0x14 + uVar7 * 0x20)) {
                    iVar9 = uVar8 + (uVar5 & 1);
                  }
                  bVar3 = 1 < uVar5;
                  uVar5 = (uint)uVar6;
                } while (bVar3);
                uVar6 = (ulonglong)(uint)(iVar20 + iVar9);
                if (0 < iVar9) {
                  puVar10 = (uint *)(piVar2 + (iVar20 - iVar13));
                  puVar19 = (uint *)(local_a0 + (longlong)iVar13 * 4);
                  puVar16 = puVar10;
                  do {
                    puVar11 = puVar16 + 1;
                    puVar19[-1] = *puVar16;
                    *puVar16 = (uint)uVar7;
                    if (puVar11 == (uint *)(piVar2 + ((iVar20 + iVar9) - iVar13))) {
                      puVar11 = puVar10;
                      if (puVar19 == puVar10) break;
                    }
                    else if (puVar19 == puVar10) {
                      puVar10 = puVar11;
                    }
                    uVar7 = (ulonglong)*puVar19;
                    puVar19 = puVar19 + 1;
                    puVar16 = puVar11;
                  } while( true );
                }
              }
              if (((int)uVar4 <= (int)uVar6) || (iVar9 = iVar13 + iVar9 + 1, (int)uVar6 <= iVar9))
              break;
            }
          }
          local_a0 = local_a0 + local_68;
          lVar17 = local_80 + local_60;
        } while (local_80 + local_60 < (longlong)uVar21);
        uVar6 = (ulonglong)local_a8;
        local_70 = uVar21;
      } while ((int)local_a8 < (int)uStack_50);
    }
  }
  if ((int)uStack_50 != 0) {
    lVar17 = (longlong)(int)uStack_50;
    lVar18 = 0;
    do {
      FUN_146db1932(param_1,*(undefined4 *)(lVar14 + lVar18));
      lVar18 = lVar18 + 4;
    } while (lVar17 * 4 != lVar18);
  }
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146db1932 FUN_146db1932 body=296 status=ok
// SIG undefined FUN_146db1932(void)

void FUN_146db1932(longlong *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar8 = (longlong)param_2 * 0x20;
  if (*(int *)(*param_1 + 0x18 + lVar8) != -1) goto LAB_146db195b;
  lVar4 = (longlong)*(int *)(*param_1 + lVar8 + 0x10);
  local_38 = 0;
  uStack_30 = 0;
  FUN_1403ed7b2();
  lVar5 = (longlong)*(int *)(*param_1 + 8 + lVar8);
  if (lVar5 != 0) {
    lVar2 = *(longlong *)(*param_1 + lVar8);
    lVar7 = 0;
    do {
      piVar1 = (int *)(param_1[2] + (longlong)*(int *)(lVar2 + lVar7) * 8);
      lVar9 = (longlong)*(int *)(*param_1 + 0x18 + (longlong)piVar1[*piVar1 == param_2] * 0x20);
      if (lVar9 != -1) {
        *(undefined1 *)(local_38 + lVar9) = 1;
      }
      lVar7 = lVar7 + 4;
    } while (lVar5 * 4 != lVar7);
  }
  if ((longlong)(int)uStack_30 < 1) {
LAB_146db1a2b:
    iVar3 = *(int *)(param_1[4] + 0x10 + lVar4 * 0x18);
    *(int *)(param_1[4] + 0x10 + lVar4 * 0x18) = iVar3 + 1;
  }
  else {
    uVar6 = 0xffffffff;
    uVar10 = 0;
    do {
      if (*(char *)(local_38 + uVar10) == '\0') {
        uVar6 = uVar10 & 0xffffffff;
      }
      iVar3 = (int)uVar6;
      uVar10 = uVar10 + 1;
    } while ((longlong)(int)uStack_30 != uVar10);
    if (iVar3 == -1) goto LAB_146db1a2b;
  }
  *(int *)(*param_1 + 0x18 + lVar8) = iVar3;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
LAB_146db195b:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146db1a5c FUN_146db1a5c body=122 status=ok
// SIG undefined FUN_146db1a5c(void)

void FUN_146db1a5c(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146db6dea(param_1,iVar1);
    }
    FUN_146db6dd0((longlong)iVar1 * 0x18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146db6e7e(param_1,param_2,iVar1 - param_2);
    FUN_146db6ee0(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146db1ad8 FUN_146db1ad8 body=359 status=ok
// SIG undefined FUN_146db1ad8(void)

undefined8 FUN_146db1ad8(longlong param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_88 [32];
  double local_68;
  double dStack_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar4 = *(int *)(param_1 + 0x28);
  if (iVar4 < 1) {
    uVar9 = 0xffffffff;
    uVar10 = 0x7fefffff;
  }
  else {
    uVar9 = 0xffffffff;
    uVar10 = 0x7fefffff;
    lVar6 = 0;
    bVar5 = false;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x20) + lVar6 * 8);
      if (plVar3 != (longlong *)0x0) {
        dVar7 = (double)(**(code **)(*plVar3 + 0x70))(plVar3,param_2,&local_68);
        if ((double)CONCAT44(uVar10,uVar9) < dVar7 || (double)CONCAT44(uVar10,uVar9) == dVar7) {
          if ((dVar7 == (double)CONCAT44(uVar10,uVar9)) &&
             (!NAN(dVar7) && !NAN((double)CONCAT44(uVar10,uVar9)))) {
            *param_3 = local_68 + *param_3;
            param_3[1] = dStack_60 + param_3[1];
            param_3[2] = local_58 + param_3[2];
            bVar5 = true;
          }
        }
        else {
          param_3[2] = local_58;
          *param_3 = local_68;
          param_3[1] = dStack_60;
          bVar5 = false;
          uVar9 = SUB84(dVar7,0);
          uVar10 = (undefined4)((ulonglong)dVar7 >> 0x20);
        }
        iVar4 = *(int *)(param_1 + 0x28);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar4);
    if (bVar5) {
      dVar7 = *param_3;
      dVar1 = param_3[1];
      dVar2 = param_3[2];
      dVar8 = dVar2 * dVar2 + dVar7 * dVar7 + dVar1 * dVar1;
      if (9.99999993922529e-09 < dVar8) {
        dVar8 = 1.0 / SQRT(dVar8);
        *param_3 = dVar7 * dVar8;
        param_3[1] = dVar1 * dVar8;
        param_3[2] = dVar2 * dVar8;
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return CONCAT44(uVar10,uVar9);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146db1c40 FUN_146db1c40 body=379 status=ok
// SIG undefined FUN_146db1c40(void)

longlong FUN_146db1c40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                      undefined8 param_5,double *param_6,undefined8 *param_7,undefined8 *param_8,
                      undefined4 *param_9)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  double *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined4 *local_c8;
  undefined4 local_bc;
  double local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x20);
    uVar7 = 0;
    uVar8 = 0;
    lVar6 = 0;
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar6);
      local_c8 = &local_bc;
      local_d0 = &local_b0;
      local_e8 = param_5;
      local_e0 = &local_b8;
      local_d8 = &local_98;
      cVar4 = (**(code **)(*plVar3 + 0xa0))(plVar3,param_2,param_3,param_4);
      if ((cVar4 != '\0') &&
         ((lVar5 == 0 ||
          (local_b8 <= (double)CONCAT44(uVar8,uVar7) && (double)CONCAT44(uVar8,uVar7) != local_b8)))
         ) {
        *param_6 = local_b8;
        param_7[2] = local_88;
        *param_7 = local_98;
        param_7[1] = uStack_90;
        param_8[2] = local_a0;
        *param_8 = local_b0;
        param_8[1] = uStack_a8;
        *param_9 = local_bc;
        lVar5 = 1;
        uVar7 = SUB84(local_b8,0);
        uVar8 = (undefined4)((ulonglong)local_b8 >> 0x20);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  if ((local_80 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146db1dbc FUN_146db1dbc body=98 status=ok
// SIG undefined FUN_146db1dbc(void)

undefined8 FUN_146db1dbc(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      uVar4 = (**(code **)(*plVar3 + 200))(plVar3,param_2,param_3);
      if ((char)uVar4 != '\0') {
        return uVar4;
      }
      bVar6 = (longlong)iVar1 * 8 + -8 != lVar5;
      lVar5 = lVar5 + 8;
    } while (bVar6);
  }
  return uVar4;
}



// FUNCTION 146db1e1e FUN_146db1e1e body=77 status=ok
// SIG undefined FUN_146db1e1e(void)

void FUN_146db1e1e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0xd0))(plVar3,param_2,param_3);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 146db1e6c FUN_146db1e6c body=80 status=ok
// SIG undefined FUN_146db1e6c(void)

undefined4 FUN_146db1e6c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar5 = 0;
    uVar4 = 0;
    do {
      uVar3 = (**(code **)(**(longlong **)(lVar2 + lVar5) + 0x100))();
      uVar4 = FUN_144a78877(uVar4,uVar3);
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return uVar4;
}



// FUNCTION 146db1ebc FUN_146db1ebc body=358 status=ok
// SIG undefined FUN_146db1ebc(void)

double * FUN_146db1ebc(longlong param_1,double *param_2,double *param_3,undefined8 param_4,
                      undefined8 param_5)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  double local_80;
  double dStack_78;
  double local_70;
  char cStack_68;
  undefined7 uStack_67;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = param_5;
  FUN_146dae232(**(undefined8 **)(param_1 + 0x20));
  dVar1 = 0.0;
  if (*(char *)(param_2 + 3) == '\x01') {
    dVar1 = SQRT((param_2[2] - param_3[2]) * (param_2[2] - param_3[2]) +
                 (*param_2 - *param_3) * (*param_2 - *param_3) +
                 (param_2[1] - param_3[1]) * (param_2[1] - param_3[1]));
  }
  if (1 < *(int *)(param_1 + 0x28)) {
    lVar2 = 1;
    do {
      local_88 = param_5;
      FUN_146dae232(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + lVar2 * 8),&local_80,param_3,
                    param_4);
      if ((cStack_68 == '\x01') &&
         ((dVar3 = SQRT((local_70 - param_3[2]) * (local_70 - param_3[2]) +
                        (local_80 - *param_3) * (local_80 - *param_3) +
                        (dStack_78 - param_3[1]) * (dStack_78 - param_3[1])),
          *(char *)(param_2 + 3) != '\x01' || (dVar3 < dVar1)))) {
        param_2[2] = local_70;
        param_2[3] = (double)CONCAT71(uStack_67,1);
        *param_2 = local_80;
        param_2[1] = dStack_78;
        dVar1 = dVar3;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x28));
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146db2024 FUN_146db2024 body=26 status=ok
// SIG undefined FUN_146db2024(void)

void FUN_146db2024(undefined8 param_1)

{
  FUN_1401183f6();
  FUN_14011842e(param_1);
  return;
}



// FUNCTION 146db203e FUN_146db203e body=42 status=ok
// SIG undefined FUN_146db203e(void)

undefined8 * FUN_146db203e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f553e0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146db2068 FUN_146db2068 body=38 status=ok
// SIG undefined FUN_146db2068(void)

undefined8 FUN_146db2068(undefined8 param_1,int param_2)

{
  FUN_146dd27ca();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146db20be FUN_146db20be body=183 status=ok
// SIG undefined FUN_146db20be(void)

void FUN_146db20be(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_14004b8ea();
  FUN_146caa7a6(param_1 + 0x20,param_2);
  FUN_146db2282(param_1 + 0x78,param_2);
  FUN_146db260c(param_1 + 0x98,param_2);
  FUN_140d03e72(param_2,param_1 + 0xb8);
  FUN_140d03e72(param_2,param_1 + 0xe8);
  puVar2 = (undefined4 *)(param_1 + 0x118);
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *puVar2 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146db214e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x170))(param_2,puVar2,4);
    return;
  }
  thunk_FUN_14572512c(param_2,puVar2);
  return;
}



// FUNCTION 146db2176 FUN_146db2176 body=183 status=ok
// SIG undefined FUN_146db2176(void)

void FUN_146db2176(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_14004b8ea();
  FUN_146caa7a6(param_1 + 0x20,param_2);
  FUN_146db2282(param_1 + 0x78,param_2);
  FUN_146db260c(param_1 + 0x98,param_2);
  FUN_140d03e72(param_2,param_1 + 0xb8);
  FUN_140d03e72(param_2,param_1 + 0xe8);
  puVar2 = (undefined4 *)(param_1 + 0x118);
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *puVar2 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146db2206. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x170))(param_2,puVar2,4);
    return;
  }
  thunk_FUN_14572512c(param_2,puVar2);
  return;
}



// FUNCTION 146db222e FUN_146db222e body=83 status=ok
// SIG undefined FUN_146db222e(void)

ulonglong FUN_146db222e(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x90);
  if ((longlong)iVar1 < 1) {
    uVar3 = 0;
  }
  else {
    lVar4 = 0;
    uVar3 = 0;
    do {
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + lVar4 * 8);
      uVar3 = FUN_144a78877(uVar3 & 0xffffffff,(int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2);
      lVar4 = lVar4 + 1;
    } while (iVar1 != lVar4);
  }
  return uVar3;
}



// FUNCTION 146db2282 FUN_146db2282 body=97 status=ok
// SIG undefined FUN_146db2282(void)

void FUN_146db2282(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  FUN_146caa7ea(param_2,param_1);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e3cc18);
  if (iVar1 < 8) {
    FUN_146db22e4();
    return;
  }
  FUN_146db2407(param_2,param_1 + 0x10);
  return;
}



// FUNCTION 146db22e4 FUN_146db22e4 body=290 status=ok
// SIG undefined FUN_146db22e4(void)

longlong * FUN_146db22e4(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 1) << 3,
             (longlong)*(int *)((longlong)param_2 + 0xc) << 3);
  local_1c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_1c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_1c);
    }
  }
  else {
    local_1c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_1c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_140cb0586(param_2,0);
    }
  }
  else if ((((int)local_1c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x200000 < local_1c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else {
    *(uint *)(param_2 + 1) = local_1c;
    uVar3 = local_1c;
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_1408fdf90(param_2,local_1c,*(undefined4 *)((longlong)param_2 + 0xc));
      uVar3 = *(uint *)(param_2 + 1);
    }
    (**(code **)(*param_1 + 0x170))(param_1,*param_2,(longlong)(int)uVar3 << 3);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146db2407 FUN_146db2407 body=224 status=ok
// SIG undefined FUN_146db2407(void)

void FUN_146db2407(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  if (((*(byte *)(param_1 + 0x28) & 4) != 0) &&
     (FUN_144a12820(&local_28,(int)param_2[1],1), 0 < (int)param_2[1])) {
    lVar1 = 0;
    do {
      *(float *)(local_28 + lVar1 * 4) = (float)*(double *)(*param_2 + lVar1 * 8);
      lVar1 = lVar1 + 1;
    } while (lVar1 < (int)param_2[1]);
  }
  FUN_140ec5f04(&local_28,param_1,0);
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    FUN_146bad8b2(param_2,uStack_20 & 0xffffffff,1);
    if (0 < (int)uStack_20) {
      lVar1 = 0;
      do {
        *(double *)(*param_2 + lVar1 * 8) = (double)*(float *)(local_28 + lVar1 * 4);
        lVar1 = lVar1 + 1;
      } while (lVar1 < (int)uStack_20);
    }
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146db24e8 FUN_146db24e8 body=290 status=ok
// SIG undefined FUN_146db24e8(void)

longlong * FUN_146db24e8(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 1) << 2,
             (longlong)*(int *)((longlong)param_2 + 0xc) << 2);
  local_1c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_1c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_1c);
    }
  }
  else {
    local_1c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_1c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_14482f6fa(param_2,0);
    }
  }
  else if ((((int)local_1c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x400000 < local_1c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else {
    *(uint *)(param_2 + 1) = local_1c;
    uVar3 = local_1c;
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_1447c510a(param_2,local_1c,*(undefined4 *)((longlong)param_2 + 0xc));
      uVar3 = *(uint *)(param_2 + 1);
    }
    (**(code **)(*param_1 + 0x170))(param_1,*param_2,(longlong)(int)uVar3 << 2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146db260c FUN_146db260c body=97 status=ok
// SIG undefined FUN_146db260c(void)

void FUN_146db260c(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  FUN_146caa7ea(param_2,param_1);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e3cc18);
  if (iVar1 < 8) {
    FUN_146cb470c();
    return;
  }
  FUN_146db266d(param_2,param_1 + 0x10);
  return;
}



// FUNCTION 146db266d FUN_146db266d body=305 status=ok
// SIG undefined FUN_146db266d(void)

void FUN_146db266d(longlong param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  if (((*(byte *)(param_1 + 0x28) & 4) != 0) &&
     (FUN_140aacae8(&local_28,(int)param_2[1],1), 0 < (int)param_2[1])) {
    lVar6 = 8;
    lVar7 = 0;
    do {
      lVar5 = *param_2;
      dVar3 = *(double *)(lVar5 + lVar6 * 2);
      dVar4 = *(double *)(lVar5 + -8 + lVar6 * 2);
      *(float *)(local_28 + -8 + lVar6) = (float)*(double *)(lVar5 + -0x10 + lVar6 * 2);
      *(float *)(local_28 + -4 + lVar6) = (float)dVar4;
      *(float *)(local_28 + lVar6) = (float)dVar3;
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0xc;
    } while (lVar7 < (int)param_2[1]);
  }
  FUN_146db27f0(&local_28,param_1,0);
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    FUN_146db27a0(param_2,uStack_20 & 0xffffffff,1);
    if (0 < (int)uStack_20) {
      lVar6 = 8;
      lVar7 = 0;
      do {
        fVar1 = *(float *)(local_28 + lVar6);
        fVar2 = *(float *)(local_28 + -4 + lVar6);
        lVar5 = *param_2;
        *(double *)(lVar5 + -0x10 + lVar6 * 2) = (double)*(float *)(local_28 + -8 + lVar6);
        *(double *)(lVar5 + -8 + lVar6 * 2) = (double)fVar2;
        *(double *)(lVar5 + lVar6 * 2) = (double)fVar1;
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + 0xc;
      } while (lVar7 < (int)uStack_20);
    }
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146db27a0 FUN_146db27a0 body=78 status=ok
// SIG undefined FUN_146db27a0(void)

void FUN_146db27a0(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14026a4e8();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_1411223a0();
      return;
    }
  }
  return;
}



// FUNCTION 146db27f0 FUN_146db27f0 body=567 status=ok
// SIG undefined FUN_146db27f0(void)

void FUN_146db27f0(undefined8 *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_48 [32];
  uint local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xc;
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_24);
    }
  }
  else {
    local_24 = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((param_3 != '\0') ||
     ((((*(byte *)(param_2 + 5) & 4) != 0 &&
       ((param_2[0xd] == 0 || (*(longlong *)(param_2[0xd] + 0x10) == 0)))) ||
      ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0)))) {
    FUN_1447396de(param_2,param_1);
    goto LAB_146db2863;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 1) * 0xc,
             (longlong)*(int *)((longlong)param_1 + 0xc) * 0xc);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_146db2863;
    local_28 = *(uint *)(param_1 + 1);
    puVar3 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_28);
      }
    }
    else {
      local_28 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
LAB_146db29ed:
    (**(code **)(*param_2 + 0x170))(param_2,*param_1,(longlong)(int)local_28 * 0xc);
  }
  else {
    if (local_24 == 0xc) {
      local_28 = 0;
      puVar3 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_28);
        }
      }
      else {
        local_28 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar2;
      }
      if (local_28 < 0xaaaaaab) {
        *(undefined4 *)(param_1 + 1) = 0;
        iVar4 = 0;
        uVar5 = local_28;
        if (*(uint *)((longlong)param_1 + 0xc) != local_28) {
          FUN_140163800(param_1);
          iVar4 = *(int *)(param_1 + 1);
          uVar5 = *(uint *)((longlong)param_1 + 0xc);
        }
        *(uint *)(param_1 + 1) = local_28 + iVar4;
        if (uVar5 - iVar4 < local_28) {
          FUN_140aacb36(param_1,iVar4);
        }
        goto LAB_146db29ed;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_146db2863:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146db2a28 FUN_146db2a28 body=42 status=ok
// SIG undefined FUN_146db2a28(void)

undefined8 * FUN_146db2a28(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f553e0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146db2a52 FUN_146db2a52 body=1567 status=ok
// SIG undefined FUN_146db2a52(void)

double FUN_146db2a52(longlong param_1,double *param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  uint uVar6;
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
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  dVar8 = *(double *)(param_1 + 0x38);
  uVar19 = SUB84(dVar8,0);
  uVar20 = (undefined4)((ulonglong)dVar8 >> 0x20);
  dVar9 = *(double *)(param_1 + 0x40);
  dVar17 = *(double *)(param_1 + 0x48);
  dVar7 = *(double *)(param_1 + 0x20);
  dVar16 = *(double *)(param_1 + 0x28);
  dVar15 = *(double *)(param_1 + 0x30);
  dVar14 = param_2[2];
  dVar12 = *param_2;
  dVar13 = param_2[1];
  dVar11 = (dVar14 - dVar15) * dVar17 + (dVar12 - dVar7) * dVar8 + (dVar13 - dVar16) * dVar9;
  uVar18 = SUB84(dVar9,0);
  uVar6 = (uint)((ulonglong)dVar9 >> 0x20);
  if (9.99999993922529e-09 <= dVar11) {
    dVar2 = *(double *)(param_1 + 0x80) - dVar11;
    if (9.99999993922529e-09 <= dVar2) {
      dVar14 = dVar14 - (dVar15 + dVar17 * dVar11);
      dVar13 = dVar13 - (dVar16 + dVar9 * dVar11);
      dVar12 = dVar12 - (dVar7 + dVar8 * dVar11);
      dVar8 = dVar14 * dVar14 + dVar12 * dVar12 + dVar13 * dVar13;
      dVar9 = dVar11 / *(double *)(param_1 + 0x80);
      dVar9 = SQRT(dVar8) -
              ((1.0 - dVar9) * *(double *)(param_1 + 0x88) + dVar9 * *(double *)(param_1 + 0x90));
      if (dVar9 < 0.0) {
        dVar7 = dVar11;
        if (dVar2 <= dVar11) {
          dVar7 = dVar2;
        }
        if (dVar7 < -dVar9) {
          if (dVar2 <= dVar11) {
            dVar17 = *(double *)(param_1 + 0x78);
            uVar6 = (uint)((ulonglong)*(undefined8 *)(param_1 + 0x70) >> 0x20);
            uVar18 = (undefined4)*(undefined8 *)(param_1 + 0x70);
            uVar19 = (undefined4)*(undefined8 *)(param_1 + 0x68);
            uVar20 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x68) >> 0x20);
          }
          *(ulonglong *)*param_3 = CONCAT44(uVar20,uVar19) ^ 0x8000000000000000;
          *(ulonglong *)(*param_3 + 8) = CONCAT44(uVar6,uVar18) ^ 0x8000000000000000;
          *(double *)param_3[1] = -dVar17;
          return -dVar7;
        }
      }
      if (((dVar8 != 1.0) || (dVar7 = dVar12, dVar16 = dVar13, dVar15 = dVar14, NAN(dVar8))) &&
         (dVar7 = DAT_14c8464e0, dVar16 = DAT_14c8464e8, dVar15 = DAT_14c8464f0,
         9.99999993922529e-09 <= dVar8)) {
        dVar8 = 1.0 / SQRT(dVar8);
        dVar7 = dVar12 * dVar8;
        dVar16 = dVar13 * dVar8;
        dVar15 = dVar14 * dVar8;
      }
      *(double *)*param_3 = dVar7;
      *(double *)(*param_3 + 8) = dVar16;
      *(double *)param_3[1] = dVar15;
      return dVar9;
    }
    dVar8 = *(double *)(param_1 + 0x78);
    dVar9 = *(double *)(param_1 + 0x70);
    dVar17 = dVar14 - (dVar2 * dVar8 + *(double *)(param_1 + 0x60));
    dVar15 = dVar13 - (dVar2 * dVar9 + *(double *)(param_1 + 0x58));
    dVar16 = dVar12 - (dVar2 * *(double *)(param_1 + 0x68) + *(double *)(param_1 + 0x50));
    dVar11 = dVar17 * dVar17 + dVar16 * dVar16 + dVar15 * dVar15;
    dVar7 = *(double *)(param_1 + 0x90);
    if (SQRT(dVar11) <= dVar7) {
      auVar5._8_4_ = SUB84(dVar9,0);
      auVar5._0_8_ = -*(double *)(param_1 + 0x68);
      auVar5._12_4_ = (uint)((ulonglong)dVar9 >> 0x20) ^ 0x80000000;
      *param_3 = auVar5;
      *(double *)param_3[1] = -dVar8;
      return -dVar2;
    }
    if (((dVar11 != 1.0) || (dVar8 = dVar17, dVar9 = dVar15, dVar2 = dVar16, NAN(dVar11))) &&
       (dVar8 = DAT_14c8464f0, dVar9 = DAT_14c8464e8, dVar2 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar11)) {
      dVar11 = 1.0 / SQRT(dVar11);
      dVar8 = dVar17 * dVar11;
      dVar9 = dVar15 * dVar11;
      dVar2 = dVar16 * dVar11;
    }
    dVar15 = *(double *)(param_1 + 0x60) + dVar8 * dVar7;
    dVar16 = *(double *)(param_1 + 0x58) + dVar9 * dVar7;
    dVar7 = *(double *)(param_1 + 0x50) + dVar2 * dVar7;
  }
  else {
    dVar10 = dVar14 - (dVar17 * dVar11 + dVar15);
    dVar3 = dVar13 - (dVar9 * dVar11 + dVar16);
    dVar2 = dVar12 - (dVar8 * dVar11 + dVar7);
    dVar4 = dVar10 * dVar10 + dVar2 * dVar2 + dVar3 * dVar3;
    dVar9 = *(double *)(param_1 + 0x88);
    if (SQRT(dVar4) <= dVar9) {
      auVar1._8_4_ = uVar18;
      auVar1._0_8_ = -dVar8;
      auVar1._12_4_ = uVar6 ^ 0x80000000;
      *param_3 = auVar1;
      *(double *)param_3[1] = -dVar17;
      return -dVar11;
    }
    if (((dVar4 != 1.0) || (dVar11 = dVar10, dVar8 = dVar3, dVar17 = dVar2, NAN(dVar4))) &&
       (dVar11 = DAT_14c8464f0, dVar8 = DAT_14c8464e8, dVar17 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar4)) {
      dVar17 = 1.0 / SQRT(dVar4);
      dVar11 = dVar10 * dVar17;
      dVar8 = dVar3 * dVar17;
      dVar17 = dVar2 * dVar17;
    }
    dVar15 = dVar15 + dVar11 * dVar9;
    dVar16 = dVar16 + dVar8 * dVar9;
    dVar7 = dVar7 + dVar17 * dVar9;
  }
  dVar14 = dVar14 - dVar15;
  dVar13 = dVar13 - dVar16;
  dVar12 = dVar12 - dVar7;
  dVar8 = dVar14 * dVar14 + dVar12 * dVar12 + dVar13 * dVar13;
  if (((dVar8 != 1.0) || (dVar9 = dVar12, dVar7 = dVar13, dVar16 = dVar14, NAN(dVar8))) &&
     (dVar9 = DAT_14c8464e0, dVar7 = DAT_14c8464e8, dVar16 = DAT_14c8464f0,
     9.99999993922529e-09 <= dVar8)) {
    dVar16 = 1.0 / SQRT(dVar8);
    dVar9 = dVar12 * dVar16;
    dVar7 = dVar13 * dVar16;
    dVar16 = dVar14 * dVar16;
  }
  *(double *)*param_3 = dVar9;
  *(double *)(*param_3 + 8) = dVar7;
  *(double *)param_3[1] = dVar16;
  return SQRT(dVar8);
}



// FUNCTION 146db30a2 FUN_146db30a2 body=227 status=ok
// SIG undefined FUN_146db30a2(void)

void FUN_146db30a2(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_1448eb174(param_1 + 0x68,0x18,0);
  uVar2 = FUN_1448eb174(param_1 + 0x50,0x18,0);
  uVar1 = FUN_144a78877(uVar2,uVar1);
  uVar2 = FUN_1448eb174(param_1 + 0x38,0x18,0);
  uVar3 = FUN_1448eb174(param_1 + 0x20,0x18,0);
  uVar2 = FUN_144a78877(uVar3,uVar2);
  uVar1 = FUN_144a78877(uVar2,uVar1);
  uVar2 = FUN_144a78877((int)((ulonglong)*(undefined8 *)(param_1 + 0x88) >> 0x20) * 0x17 +
                        (int)*(undefined8 *)(param_1 + 0x88),
                        (int)((ulonglong)*(undefined8 *)(param_1 + 0x90) >> 0x20) * 0x17 +
                        (int)*(undefined8 *)(param_1 + 0x90));
  uVar2 = FUN_144a78877((int)((ulonglong)*(undefined8 *)(param_1 + 0x80) >> 0x20) * 0x17 +
                        (int)*(undefined8 *)(param_1 + 0x80),uVar2);
  FUN_144a78877(uVar1,uVar2);
  return;
}



// FUNCTION 146db3186 FUN_146db3186 body=388 status=ok
// SIG undefined FUN_146db3186(void)

double FUN_146db3186(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  dVar1 = *(double *)(param_1 + 0x50);
  dVar4 = (param_2[2] - *(double *)(param_1 + 0x30)) * *(double *)(param_1 + 0x48) +
          (*param_2 - *(double *)(param_1 + 0x20)) * *(double *)(param_1 + 0x38) +
          (param_2[1] - *(double *)(param_1 + 0x28)) * *(double *)(param_1 + 0x40);
  if (dVar1 <= dVar4) {
    dVar4 = dVar1;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  dVar5 = *(double *)(param_1 + 0x58);
  uVar6 = SUB84(dVar5,0);
  uVar7 = (undefined4)((ulonglong)dVar5 >> 0x20);
  if (dVar1 <= 9.99999993922529e-09) {
    dVar1 = *(double *)(param_1 + 0x60);
    if (dVar5 <= dVar1) {
      uVar6 = SUB84(dVar1,0);
      uVar7 = (undefined4)((ulonglong)dVar1 >> 0x20);
    }
    dVar5 = (double)CONCAT44(uVar7,uVar6);
  }
  else {
    dVar5 = (*(double *)(param_1 + 0x60) - dVar5) * (dVar4 / dVar1) + dVar5;
  }
  dVar2 = param_2[2] - (*(double *)(param_1 + 0x48) * dVar4 + *(double *)(param_1 + 0x30));
  dVar3 = param_2[1] - (*(double *)(param_1 + 0x40) * dVar4 + *(double *)(param_1 + 0x28));
  dVar4 = *param_2 - (*(double *)(param_1 + 0x38) * dVar4 + *(double *)(param_1 + 0x20));
  dVar1 = dVar2 * dVar2 + dVar4 * dVar4 + dVar3 * dVar3;
  if (9.999999747378752e-05 <= dVar1) {
    dVar1 = SQRT(dVar1);
    dVar2 = dVar2 / dVar1;
    dVar3 = dVar3 / dVar1;
    dVar4 = dVar4 / dVar1;
  }
  else {
    dVar3 = 0.0;
    dVar4 = 1.0;
    dVar2 = 0.0;
    dVar1 = 0.0;
  }
  *param_3 = dVar4;
  param_3[1] = dVar3;
  param_3[2] = dVar2;
  return dVar1 - dVar5;
}



// FUNCTION 146db3334 FUN_146db3334 body=152 status=ok
// SIG undefined FUN_146db3334(void)

void FUN_146db3334(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_1448eb174(param_1 + 0x38,0x18,0);
  uVar2 = FUN_1448eb174(param_1 + 0x20,0x18,0);
  uVar1 = FUN_144a78877(uVar2,uVar1);
  uVar2 = FUN_144a78877((int)((ulonglong)*(undefined8 *)(param_1 + 0x58) >> 0x20) * 0x17 +
                        (int)*(undefined8 *)(param_1 + 0x58),
                        (int)((ulonglong)*(undefined8 *)(param_1 + 0x60) >> 0x20) * 0x17 +
                        (int)*(undefined8 *)(param_1 + 0x60));
  uVar2 = FUN_144a78877((int)((ulonglong)*(undefined8 *)(param_1 + 0x50) >> 0x20) * 0x17 +
                        (int)*(undefined8 *)(param_1 + 0x50),uVar2);
  FUN_144a78877(uVar1,uVar2);
  return;
}



// FUNCTION 146db33d0 FUN_146db33d0 body=32 status=ok
// SIG undefined FUN_146db33d0(void)

undefined8 FUN_146db33d0(undefined8 param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"TriangleMesh");
  return param_2;
}



// FUNCTION 146db33f0 FUN_146db33f0 body=56 status=ok
// SIG undefined FUN_146db33f0(void)

undefined8 * FUN_146db33f0(undefined8 *param_1,int param_2)

{
  param_1[0xe] = &PTR_FUN_149f553e0;
  param_1[4] = &PTR_FUN_149f553e0;
  *param_1 = &PTR_FUN_149f553e0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146db3432 FUN_146db3432 body=1831 status=ok
// SIG undefined FUN_146db3432(void)

double FUN_146db3432(longlong param_1,double *param_2,undefined1 (*param_3) [16])

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
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
  double dVar17;
  double dVar18;
  double dVar19;
  
  dVar15 = *(double *)(param_1 + 0x58);
  dVar14 = *(double *)(param_1 + 0x60);
  dVar18 = *(double *)(param_1 + 0x68);
  dVar12 = *(double *)(param_1 + 0x40);
  dVar1 = *(double *)(param_1 + 0x48);
  dVar2 = *(double *)(param_1 + 0x50);
  dVar13 = param_2[2];
  dVar19 = *param_2;
  dVar16 = param_2[1];
  dVar17 = (dVar13 - dVar2) * dVar18 + (dVar19 - dVar12) * dVar15 + (dVar16 - dVar1) * dVar14;
  if (0.0 <= dVar17) {
    dVar3 = *(double *)(param_1 + 0xa8);
    dVar5 = *(double *)(param_1 + 0xb0);
    dVar7 = *(double *)(param_1 + 0xb8);
    dVar8 = *(double *)(param_1 + 0x90);
    dVar10 = *(double *)(param_1 + 0x98);
    dVar4 = *(double *)(param_1 + 0xa0);
    dVar9 = (dVar13 - dVar4) * dVar7 + (dVar19 - dVar8) * dVar3 + (dVar16 - dVar10) * dVar5;
    dVar11 = *(double *)(param_1 + 200);
    if (0.0 <= dVar9) {
      dVar13 = dVar13 - (dVar2 + dVar18 * dVar17);
      dVar16 = dVar16 - (dVar1 + dVar14 * dVar17);
      dVar19 = dVar19 - (dVar12 + dVar15 * dVar17);
      dVar12 = dVar13 * dVar13 + dVar19 * dVar19 + dVar16 * dVar16;
      dVar11 = SQRT(dVar12) - dVar11;
      if (dVar11 < 0.0) {
        dVar1 = dVar17;
        if (dVar9 <= dVar17) {
          dVar1 = dVar9;
        }
        if (dVar1 < -dVar11) {
          if (dVar9 <= dVar17) {
            dVar14 = dVar5;
            dVar15 = dVar3;
          }
          *(double *)*param_3 = -dVar15;
          *(double *)(*param_3 + 8) = -dVar14;
          *(ulonglong *)param_3[1] =
               (~-(ulonglong)(dVar17 < dVar9) & (ulonglong)dVar7 |
               (ulonglong)dVar18 & -(ulonglong)(dVar17 < dVar9)) ^ 0x8000000000000000;
          return -dVar1;
        }
      }
      if (((dVar12 != 1.0) || (dVar18 = dVar13, dVar15 = dVar16, dVar14 = dVar19, NAN(dVar12))) &&
         (dVar18 = DAT_14c8464f0, dVar15 = DAT_14c8464e8, dVar14 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar12)) {
        dVar14 = 1.0 / SQRT(dVar12);
        dVar18 = dVar13 * dVar14;
        dVar15 = dVar16 * dVar14;
        dVar14 = dVar19 * dVar14;
      }
      *(double *)*param_3 = dVar14;
      *(double *)(*param_3 + 8) = dVar15;
      *(double *)param_3[1] = dVar18;
    }
    else {
      dVar18 = dVar13 - (dVar7 * dVar9 + dVar4);
      dVar14 = dVar16 - (dVar5 * dVar9 + dVar10);
      dVar12 = dVar19 - (dVar3 * dVar9 + dVar8);
      dVar15 = dVar18 * dVar18 + dVar12 * dVar12 + dVar14 * dVar14;
      if (SQRT(dVar15) <= dVar11) {
        auVar6._8_4_ = SUB84(dVar5,0);
        auVar6._0_8_ = -dVar3;
        auVar6._12_4_ = (uint)((ulonglong)dVar5 >> 0x20) ^ 0x80000000;
        *param_3 = auVar6;
        *(double *)param_3[1] = -dVar7;
        dVar11 = -dVar9;
      }
      else {
        if (((dVar15 != 1.0) || (dVar17 = dVar12, dVar1 = dVar18, dVar2 = dVar14, NAN(dVar15))) &&
           (dVar17 = DAT_14c8464e0, dVar1 = DAT_14c8464f0, dVar2 = DAT_14c8464e8,
           9.99999993922529e-09 <= dVar15)) {
          dVar15 = 1.0 / SQRT(dVar15);
          dVar17 = dVar12 * dVar15;
          dVar1 = dVar18 * dVar15;
          dVar2 = dVar14 * dVar15;
        }
        dVar13 = dVar13 - (dVar4 + dVar1 * dVar11);
        dVar16 = dVar16 - (dVar10 + dVar2 * dVar11);
        dVar19 = dVar19 - (dVar8 + dVar17 * dVar11);
        dVar11 = dVar13 * dVar13 + dVar19 * dVar19 + dVar16 * dVar16;
        if (9.999999747378752e-05 <= dVar11) {
          dVar11 = SQRT(dVar11);
          dVar13 = dVar13 / dVar11;
          dVar16 = dVar16 / dVar11;
          dVar19 = dVar19 / dVar11;
        }
        else {
          dVar16 = 0.0;
          dVar19 = 1.0;
          dVar13 = 0.0;
          dVar11 = 0.0;
        }
        *(double *)*param_3 = dVar19;
        *(double *)(*param_3 + 8) = dVar16;
        *(double *)param_3[1] = dVar13;
      }
    }
  }
  else {
    dVar8 = dVar13 - (dVar18 * dVar17 + dVar2);
    dVar7 = dVar16 - (dVar14 * dVar17 + dVar1);
    dVar5 = dVar19 - (dVar15 * dVar17 + dVar12);
    dVar10 = dVar8 * dVar8 + dVar5 * dVar5 + dVar7 * dVar7;
    dVar3 = *(double *)(param_1 + 200);
    if (SQRT(dVar10) <= dVar3) {
      *(double *)*param_3 = -dVar15;
      *(double *)(*param_3 + 8) = -dVar14;
      *(double *)param_3[1] = -dVar18;
      dVar11 = -dVar17;
    }
    else {
      if (((dVar10 != 1.0) || (dVar15 = dVar8, dVar14 = dVar7, dVar18 = dVar5, NAN(dVar10))) &&
         (dVar15 = DAT_14c8464f0, dVar14 = DAT_14c8464e8, dVar18 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar10)) {
        dVar18 = 1.0 / SQRT(dVar10);
        dVar15 = dVar8 * dVar18;
        dVar14 = dVar7 * dVar18;
        dVar18 = dVar5 * dVar18;
      }
      dVar13 = dVar13 - (dVar2 + dVar15 * dVar3);
      dVar16 = dVar16 - (dVar1 + dVar14 * dVar3);
      dVar19 = dVar19 - (dVar12 + dVar18 * dVar3);
      dVar11 = dVar13 * dVar13 + dVar19 * dVar19 + dVar16 * dVar16;
      if (9.999999747378752e-05 <= dVar11) {
        dVar11 = SQRT(dVar11);
        dVar13 = dVar13 / dVar11;
        dVar16 = dVar16 / dVar11;
        dVar19 = dVar19 / dVar11;
      }
      else {
        dVar16 = 0.0;
        dVar19 = 1.0;
        dVar13 = 0.0;
        dVar11 = 0.0;
      }
      *(double *)*param_3 = dVar19;
      *(double *)(*param_3 + 8) = dVar16;
      *(double *)param_3[1] = dVar13;
    }
  }
  return dVar11;
}



// FUNCTION 146db3b8a FUN_146db3b8a body=546 status=ok
// SIG undefined FUN_146db3b8a(void)

void FUN_146db3b8a(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  double *pdVar2;
  double *pdVar3;
  ulonglong *puVar4;
  undefined1 auStack_48 [32];
  float local_28 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14004c296(local_28,*(undefined1 *)(param_1 + 0x1c));
  FUN_14004b8ea(param_1,param_2);
  (**(code **)(*(longlong *)(param_1 + 0x20) + 0xf0))(param_1 + 0x20,param_2);
  (**(code **)(*(longlong *)(param_1 + 0x70) + 0xf0))(param_1 + 0x70,param_2);
  pdVar2 = (double *)(param_1 + 0xc0);
  if (*(int *)((longlong)param_2 + 0x44) < 0x3ec) {
    local_28[0] = (float)*pdVar2;
    puVar4 = (ulonglong *)param_2[1];
    pfVar1 = (float *)*puVar4 + 1;
    if ((float *)puVar4[1] < pfVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,local_28,4);
      }
      else {
        thunk_FUN_14572512c(param_2,local_28);
      }
    }
    else {
      local_28[0] = *(float *)*puVar4;
      *puVar4 = (ulonglong)pfVar1;
    }
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      *pdVar2 = (double)local_28[0];
    }
  }
  else {
    pdVar3 = *(double **)param_2[1];
    if ((double *)((undefined8 *)param_2[1])[1] < pdVar3 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,pdVar2,8);
      }
      else {
        thunk_FUN_146821949(param_2,pdVar2);
      }
    }
    else {
      *pdVar2 = *pdVar3;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
    }
  }
  pdVar2 = (double *)(param_1 + 200);
  if (*(int *)((longlong)param_2 + 0x44) < 0x3ec) {
    local_28[0] = (float)*pdVar2;
    puVar4 = (ulonglong *)param_2[1];
    pfVar1 = (float *)*puVar4 + 1;
    if ((float *)puVar4[1] < pfVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,local_28,4);
      }
      else {
        thunk_FUN_14572512c(param_2,local_28);
      }
    }
    else {
      local_28[0] = *(float *)*puVar4;
      *puVar4 = (ulonglong)pfVar1;
    }
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      *pdVar2 = (double)local_28[0];
    }
  }
  else {
    pdVar3 = *(double **)param_2[1];
    if ((double *)((undefined8 *)param_2[1])[1] < pdVar3 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,pdVar2,8);
      }
      else {
        thunk_FUN_146821949(param_2,pdVar2);
      }
    }
    else {
      *pdVar2 = *pdVar3;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
    }
  }
  FUN_140d03e72(param_2,param_1 + 0xd0);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146db3dae FUN_146db3dae body=200 status=ok
// SIG undefined FUN_146db3dae(void)

void FUN_146db3dae(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_1448eb174(param_1 + 0xa8,0x18,0);
  uVar2 = FUN_1448eb174(param_1 + 0x90,0x18,0);
  uVar1 = FUN_144a78877(uVar2,uVar1);
  uVar2 = FUN_1448eb174(param_1 + 0x58,0x18,0);
  uVar3 = FUN_1448eb174(param_1 + 0x40,0x18,0);
  uVar2 = FUN_144a78877(uVar3,uVar2);
  uVar1 = FUN_144a78877(uVar2,uVar1);
  uVar2 = FUN_144a78877((int)((ulonglong)*(undefined8 *)(param_1 + 0xc0) >> 0x20) * 0x17 +
                        (int)*(undefined8 *)(param_1 + 0xc0),
                        (int)((ulonglong)*(undefined8 *)(param_1 + 200) >> 0x20) * 0x17 +
                        (int)*(undefined8 *)(param_1 + 200));
  FUN_144a78877(uVar1,uVar2);
  return;
}



// FUNCTION 146db3e76 FUN_146db3e76 body=1685 status=ok
// SIG undefined FUN_146db3e76(void)

undefined8 *
FUN_146db3e76(longlong *param_1,undefined8 *param_2,double *param_3,double *param_4,double param_5)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_1f8 [32];
  double local_1d8;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  double local_1b8;
  char local_1b0;
  double local_1a0;
  double dStack_198;
  double local_190;
  char local_188;
  double local_180;
  double local_178;
  double local_170;
  longlong local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  double dStack_128;
  undefined2 local_120;
  undefined1 local_11e;
  undefined2 local_11c;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  undefined **local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined2 local_d0;
  undefined1 local_ce;
  undefined2 local_cc;
  double local_c8;
  double local_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_168 = 0;
  uStack_160 = 0;
  dVar1 = (double)param_1[0xb];
  dVar9 = (double)param_1[0xc];
  dVar10 = (double)param_1[0xd];
  dVar11 = (param_4[2] - param_3[2]) * dVar10 +
           (*param_4 - *param_3) * dVar1 + (param_4[1] - param_3[1]) * dVar9;
  local_170 = param_4[2] - dVar11 * dVar10;
  local_178 = param_4[1] - dVar9 * dVar11;
  local_180 = *param_4 - dVar1 * dVar11;
  dVar11 = ((double)param_1[10] - param_3[2]) * dVar10 +
           ((double)param_1[8] - *param_3) * dVar1 + ((double)param_1[9] - param_3[1]) * dVar9;
  local_b8 = (double)param_1[10] - dVar11 * dVar10;
  local_c0 = (double)param_1[9] - dVar9 * dVar11;
  local_c8 = (double)param_1[8] - dVar1 * dVar11;
  local_d8 = param_1[0x19];
  local_e0 = 0;
  local_d0 = 0x101;
  local_ce = 1;
  local_cc = 0;
  local_e8 = &PTR_FUN_149f48e60;
  local_1d8 = param_5;
  FUN_146dae232(&local_e8,&local_1a0);
  if (local_188 == '\x01') {
    dVar1 = param_3[2] - local_190;
    dVar10 = param_3[1] - dStack_198;
    dVar9 = *param_3 - local_1a0;
    dVar11 = dVar1 * dVar1 + dVar9 * dVar9 + dVar10 * dVar10;
    if (((dVar11 != 1.0) || (local_100 = dVar9, local_f8 = dVar10, local_f0 = dVar1, NAN(dVar11)))
       && (local_100 = DAT_14c8464e0, local_f8 = DAT_14c8464e8, local_f0 = DAT_14c8464f0,
          9.99999993922529e-09 <= dVar11)) {
      dVar11 = 1.0 / SQRT(dVar11);
      local_100 = dVar9 * dVar11;
      local_f8 = dVar10 * dVar11;
      local_f0 = dVar1 * dVar11;
    }
    uStack_130 = 0.0;
    dStack_128 = 0.0;
    local_120 = 0x100;
    local_11e = 0;
    local_11c = 0x202;
    local_138 = &PTR_FUN_149f48540;
    local_118 = local_1a0;
    dStack_110 = dStack_198;
    local_108 = local_190;
    local_1d8 = 0.0;
    FUN_146dae232(&local_138,&local_1c8,param_3,param_4);
    uVar5 = uStack_160;
    dVar1 = local_1b8 - param_3[2];
    dVar10 = (double)CONCAT44(uStack_1bc,uStack_1c0) - param_3[1];
    dVar9 = (double)CONCAT44(uStack_1c4,local_1c8) - *param_3;
    local_138 = (undefined **)CONCAT44(uStack_1c4,local_1c8);
    uStack_130 = (double)CONCAT44(uStack_1bc,uStack_1c0);
    dStack_128 = local_1b8;
    lVar8 = (longlong)(int)uStack_160;
    uVar6 = (int)uStack_160 + 1;
    uStack_160 = CONCAT44(uStack_160._4_4_,uVar6);
    if (uStack_160._4_4_ < uVar6) {
      FUN_146ca6182(&local_168,uVar5 & 0xffffffff);
    }
    lVar8 = lVar8 * 0x20;
    *(double *)(local_168 + lVar8) = SQRT(dVar1 * dVar1 + dVar9 * dVar9 + dVar10 * dVar10);
    puVar7 = (undefined4 *)(local_168 + 8 + lVar8);
    *puVar7 = (undefined4)local_138;
    puVar7[1] = local_138._4_4_;
    puVar7[2] = (undefined4)uStack_130;
    puVar7[3] = uStack_130._4_4_;
    *(double *)(local_168 + 0x18 + lVar8) = dStack_128;
  }
  local_1d8 = param_5;
  FUN_146dae232(param_1 + 4,&local_138,param_3,param_4);
  uVar5 = uStack_160;
  if ((char)local_120 == '\x01') {
    dVar10 = dStack_128 - param_3[2];
    dVar1 = param_3[1];
    dVar9 = *param_3;
    local_1c8 = (undefined4)local_138;
    uStack_1c4 = local_138._4_4_;
    uStack_1c0 = (undefined4)uStack_130;
    uStack_1bc = uStack_130._4_4_;
    local_1b8 = dStack_128;
    lVar8 = (longlong)(int)uStack_160;
    uVar6 = (int)uStack_160 + 1;
    uStack_160 = CONCAT44(uStack_160._4_4_,uVar6);
    if (uStack_160._4_4_ < uVar6) {
      FUN_146ca6182(&local_168,uVar5 & 0xffffffff);
    }
    lVar8 = lVar8 * 0x20;
    *(double *)(local_168 + lVar8) =
         SQRT(dVar10 * dVar10 +
              ((double)local_138 - dVar9) * ((double)local_138 - dVar9) +
              (uStack_130 - dVar1) * (uStack_130 - dVar1));
    puVar7 = (undefined4 *)(local_168 + 8 + lVar8);
    *puVar7 = local_1c8;
    puVar7[1] = uStack_1c4;
    puVar7[2] = uStack_1c0;
    puVar7[3] = uStack_1bc;
    *(double *)(local_168 + 0x18 + lVar8) = local_1b8;
  }
  local_1d8 = param_5;
  FUN_146dae232(param_1 + 0xe,&local_1c8,param_3,param_4);
  uVar5 = uStack_160;
  if (local_1b0 == '\x01') {
    dVar1 = local_1b8 - param_3[2];
    dVar10 = (double)CONCAT44(uStack_1bc,uStack_1c0) - param_3[1];
    dVar9 = (double)CONCAT44(uStack_1c4,local_1c8) - *param_3;
    local_158 = local_1c8;
    uStack_154 = uStack_1c4;
    uStack_150 = uStack_1c0;
    uStack_14c = uStack_1bc;
    local_148 = local_1b8;
    lVar8 = (longlong)(int)uStack_160;
    uVar6 = (int)uStack_160 + 1;
    uStack_160 = CONCAT44(uStack_160._4_4_,uVar6);
    if (uStack_160._4_4_ < uVar6) {
      FUN_146ca6182(&local_168,uVar5 & 0xffffffff);
    }
    lVar8 = lVar8 * 0x20;
    *(double *)(local_168 + lVar8) = SQRT(dVar1 * dVar1 + dVar9 * dVar9 + dVar10 * dVar10);
    puVar7 = (undefined4 *)(local_168 + 8 + lVar8);
    *puVar7 = local_158;
    puVar7[1] = uStack_154;
    puVar7[2] = uStack_150;
    puVar7[3] = uStack_14c;
    *(double *)(local_168 + 0x18 + lVar8) = local_148;
  }
  FUN_146db450c(local_168,uStack_160 & 0xffffffff);
  if ((longlong)(int)uStack_160 != 0) {
    puVar7 = (undefined4 *)(local_168 + 8);
    lVar8 = (longlong)(int)uStack_160 << 5;
    do {
      dVar1 = (double)(**(code **)(*param_1 + 0x70))(param_1,puVar7,&local_158);
      if (dVar1 <= param_5 + 0.0001) {
        param_2[2] = *(undefined8 *)(puVar7 + 4);
        uVar2 = puVar7[1];
        uVar3 = puVar7[2];
        uVar4 = puVar7[3];
        *(undefined4 *)param_2 = *puVar7;
        *(undefined4 *)((longlong)param_2 + 4) = uVar2;
        *(undefined4 *)(param_2 + 1) = uVar3;
        *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
        *(undefined1 *)(param_2 + 3) = 1;
        goto LAB_146db4414;
      }
      puVar7 = puVar7 + 8;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  *(undefined8 *)((longlong)param_2 + 9) = 0;
  *(undefined8 *)((longlong)param_2 + 0x11) = 0;
  *param_2 = 0;
  param_2[1] = 0;
LAB_146db4414:
  local_e8 = &PTR_FUN_149f553e0;
  if (local_168 != 0) {
    FUN_1400020a8();
  }
  if ((local_b0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146db450c FUN_146db450c body=805 status=ok
// SIG undefined FUN_146db450c(void)

void FUN_146db450c(longlong param_1,uint param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double *pdVar11;
  double *pdVar12;
  int iVar13;
  ulonglong uVar14;
  double *pdVar15;
  double *pdVar16;
  double *pdVar17;
  longlong *plVar18;
  double *pdVar19;
  double *pdVar20;
  int iVar21;
  double *pdVar22;
  double *pdVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = (ulonglong)param_2 * 0x20 + param_1 + -0x20;
    local_358 = param_1;
    fVar24 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar24 + fVar24);
    plVar18 = &local_358;
    do {
      pdVar11 = (double *)*plVar18;
      pdVar19 = (double *)plVar18[1];
      iVar21 = (int)plVar18[2];
      iVar13 = (int)((ulonglong)((longlong)pdVar19 - (longlong)pdVar11) >> 5);
      pdVar16 = pdVar19;
      pdVar22 = pdVar11;
      if (iVar21 != 0) {
LAB_146db45ce:
        if (8 < (int)(iVar13 + 1U)) {
          uVar14 = (ulonglong)(iVar13 + 1U >> 1);
          dVar1 = pdVar11[uVar14 * 4];
          dVar2 = (pdVar11 + uVar14 * 4)[1];
          dVar3 = pdVar11[uVar14 * 4 + 2];
          dVar4 = (pdVar11 + uVar14 * 4 + 2)[1];
          dVar5 = *pdVar11;
          dVar6 = pdVar11[1];
          dVar7 = pdVar11[3];
          pdVar11[uVar14 * 4 + 2] = pdVar11[2];
          (pdVar11 + uVar14 * 4 + 2)[1] = dVar7;
          pdVar11[uVar14 * 4] = dVar5;
          (pdVar11 + uVar14 * 4)[1] = dVar6;
          pdVar11[2] = dVar3;
          pdVar11[3] = dVar4;
          *pdVar11 = dVar1;
          pdVar11[1] = dVar2;
          pdVar15 = pdVar19 + 4;
          pdVar12 = pdVar11;
          do {
            pdVar8 = pdVar12 + 4;
            pdVar20 = pdVar12 + 4;
            do {
              pdVar12 = pdVar20;
              pdVar17 = pdVar8;
              if (pdVar19 < pdVar12) break;
              pdVar8 = pdVar17 + 4;
              pdVar20 = pdVar12 + 4;
            } while (*pdVar12 < *pdVar11 || *pdVar12 == *pdVar11);
            pdVar8 = pdVar15 + -8;
            do {
              pdVar20 = pdVar15;
              pdVar23 = pdVar8;
              pdVar15 = pdVar20 + -4;
              if (pdVar15 <= pdVar11) break;
              pdVar8 = pdVar23 + -4;
            } while (*pdVar11 < *pdVar15 || *pdVar11 == *pdVar15);
            if (pdVar15 < pdVar12) goto LAB_146db46bf;
            dVar1 = *pdVar12;
            dVar2 = pdVar12[1];
            dVar3 = pdVar12[2];
            dVar4 = pdVar12[3];
            dVar5 = *pdVar15;
            dVar6 = pdVar20[-3];
            dVar7 = pdVar20[-1];
            pdVar12[2] = pdVar20[-2];
            pdVar12[3] = dVar7;
            *pdVar12 = dVar5;
            pdVar12[1] = dVar6;
            pdVar20[-2] = dVar3;
            pdVar20[-1] = dVar4;
            *pdVar15 = dVar1;
            pdVar20[-3] = dVar2;
          } while( true );
        }
        if (pdVar11 < pdVar19) {
          do {
            pdVar16 = pdVar11;
            if (pdVar11 + 4 <= pdVar19) {
              uVar25 = SUB84(*pdVar11,0);
              uVar26 = (undefined4)((ulonglong)*pdVar11 >> 0x20);
              pdVar22 = pdVar11 + 4;
              do {
                dVar1 = *pdVar22;
                if ((double)CONCAT44(uVar26,uVar25) <= dVar1 &&
                    dVar1 != (double)CONCAT44(uVar26,uVar25)) {
                  pdVar16 = pdVar22;
                }
                uVar9 = SUB84(dVar1,0);
                uVar10 = (int)((ulonglong)dVar1 >> 0x20);
                if (dVar1 <= (double)CONCAT44(uVar26,uVar25)) {
                  uVar9 = uVar25;
                  uVar10 = uVar26;
                }
                uVar26 = uVar10;
                uVar25 = uVar9;
                pdVar22 = pdVar22 + 4;
              } while (pdVar22 <= pdVar19);
            }
            local_58 = *pdVar16;
            uStack_50 = pdVar16[1];
            local_48 = pdVar16[2];
            dStack_40 = pdVar16[3];
            dVar4 = local_58;
            dVar5 = uStack_50;
            dVar1 = *pdVar19;
            dVar2 = pdVar19[1];
            dVar3 = pdVar19[3];
            pdVar16[2] = pdVar19[2];
            pdVar16[3] = dVar3;
            *pdVar16 = dVar1;
            pdVar16[1] = dVar2;
            local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
            pdVar19[2] = local_48;
            pdVar19[3] = dStack_40;
            *(undefined4 *)pdVar19 = (undefined4)local_58;
            *(undefined4 *)((longlong)pdVar19 + 4) = local_58._4_4_;
            *(undefined4 *)(pdVar19 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)pdVar19 + 0xc) = uStack_50._4_4_;
            pdVar19 = pdVar19 + -4;
            local_58 = dVar4;
            uStack_50 = dVar5;
          } while (pdVar11 < pdVar19);
        }
        goto LAB_146db4810;
      }
LAB_146db4825:
      FUN_146db4832(pdVar11);
LAB_146db4810:
      plVar18 = plVar18 + -3;
    } while (&local_358 <= plVar18);
  }
  if ((local_38 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146db46bf:
  local_58 = *pdVar11;
  uStack_50 = pdVar11[1];
  local_48 = pdVar11[2];
  dStack_40 = pdVar11[3];
  dVar4 = local_58;
  dVar5 = uStack_50;
  dVar1 = *pdVar15;
  dVar2 = pdVar20[-3];
  dVar3 = pdVar20[-1];
  pdVar11[2] = pdVar20[-2];
  pdVar11[3] = dVar3;
  *pdVar11 = dVar1;
  pdVar11[1] = dVar2;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  pdVar20[-2] = local_48;
  pdVar20[-1] = dStack_40;
  *(undefined4 *)pdVar15 = (undefined4)local_58;
  *(undefined4 *)((longlong)pdVar20 + -0x1c) = local_58._4_4_;
  *(undefined4 *)(pdVar20 + -3) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)pdVar20 + -0x14) = uStack_50._4_4_;
  iVar21 = iVar21 + -1;
  pdVar20 = pdVar20 + -8;
  local_58 = dVar4;
  uStack_50 = dVar5;
  if ((longlong)pdVar23 - (longlong)pdVar22 < (longlong)pdVar16 - (longlong)pdVar17) {
    if (pdVar12 < pdVar19) {
      *plVar18 = (longlong)pdVar12;
      plVar18[1] = (longlong)pdVar19;
      *(int *)(plVar18 + 2) = iVar21;
      plVar18 = plVar18 + 3;
    }
    pdVar17 = pdVar11;
    if (pdVar15 <= pdVar11 + 4) goto LAB_146db4810;
  }
  else {
    if (pdVar11 + 4 < pdVar15) {
      *plVar18 = (longlong)pdVar11;
      plVar18[1] = (longlong)pdVar20;
      *(int *)(plVar18 + 2) = iVar21;
      plVar18 = plVar18 + 3;
    }
    pdVar11 = pdVar12;
    pdVar20 = pdVar19;
    pdVar23 = pdVar19;
    if (pdVar19 <= pdVar12) goto LAB_146db4810;
  }
  iVar13 = (int)((ulonglong)((longlong)pdVar23 - (longlong)pdVar17) >> 5);
  pdVar19 = pdVar20;
  pdVar16 = pdVar23;
  pdVar22 = pdVar17;
  if (iVar21 == 0) goto LAB_146db4825;
  goto LAB_146db45ce;
}



// FUNCTION 146db4832 FUN_146db4832 body=603 status=ok
// SIG undefined FUN_146db4832(void)

void FUN_146db4832(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  bool bVar16;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    iVar9 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar14 = iVar9;
joined_r0x000146db4866:
    do {
      iVar12 = iVar9 * 2 + 1;
      if (iVar12 < (int)param_2) {
        iVar13 = iVar9 * 2 + 2;
        if ((iVar13 < (int)param_2) &&
           ((double)param_1[(longlong)iVar12 * 4] < (double)param_1[(longlong)iVar13 * 4] ||
            (double)param_1[(longlong)iVar12 * 4] == (double)param_1[(longlong)iVar13 * 4])) {
          iVar12 = iVar13;
        }
        if ((double)param_1[(longlong)iVar9 * 4] <= (double)param_1[(longlong)iVar12 * 4] &&
            (double)param_1[(longlong)iVar12 * 4] != (double)param_1[(longlong)iVar9 * 4]) {
          puVar15 = param_1 + (longlong)iVar9 * 4;
          puVar11 = param_1 + (longlong)iVar12 * 4;
          uVar2 = *puVar15;
          uVar3 = puVar15[1];
          uVar4 = puVar15[2];
          uVar5 = puVar15[3];
          uVar6 = *puVar11;
          uVar7 = puVar11[1];
          uVar8 = puVar11[3];
          puVar15[2] = puVar11[2];
          puVar15[3] = uVar8;
          *puVar15 = uVar6;
          puVar15[1] = uVar7;
          local_38._0_4_ = (undefined4)uVar2;
          local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar3;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          *(undefined4 *)(puVar11 + 2) = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar11 + 0x14) = local_28._4_4_;
          *(undefined4 *)(puVar11 + 3) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar11 + 0x1c) = uStack_20._4_4_;
          *(undefined4 *)puVar11 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar11 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_30._4_4_;
          iVar9 = iVar12;
          local_38 = uVar2;
          uStack_30 = uVar3;
          local_28 = uVar4;
          uStack_20 = uVar5;
          goto joined_r0x000146db4866;
        }
      }
      bVar16 = iVar14 != 0;
      iVar9 = iVar14 + -1;
      iVar14 = iVar9;
    } while (bVar16);
    if (1 < (int)param_2) {
      uVar10 = (ulonglong)param_2 - 1;
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = param_1[2];
      uVar5 = param_1[3];
      uVar6 = param_1[uVar10 * 4];
      uVar7 = (param_1 + uVar10 * 4)[1];
      uVar8 = (param_1 + uVar10 * 4 + 2)[1];
      param_1[2] = param_1[uVar10 * 4 + 2];
      param_1[3] = uVar8;
      *param_1 = uVar6;
      param_1[1] = uVar7;
      local_38._0_4_ = (undefined4)uVar2;
      local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar3;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      local_28._0_4_ = (undefined4)uVar4;
      local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar5;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar11 = param_1 + uVar10 * 4 + 2;
      *(undefined4 *)puVar11 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar11 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_20._4_4_;
      puVar11 = param_1 + uVar10 * 4;
      *(undefined4 *)puVar11 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar11 + 4) = local_38._4_4_;
      *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_30._4_4_;
      local_38 = uVar2;
      uStack_30 = uVar3;
      local_28 = uVar4;
      uStack_20 = uVar5;
      if (param_2 != 2) {
        do {
          iVar9 = 0;
          iVar12 = 1;
          iVar14 = 0;
          do {
            iVar9 = iVar9 + 2;
            iVar13 = iVar12;
            if (((longlong)iVar9 < (longlong)uVar10) &&
               ((double)param_1[(longlong)iVar12 * 4] < (double)param_1[(longlong)iVar9 * 4] ||
                (double)param_1[(longlong)iVar12 * 4] == (double)param_1[(longlong)iVar9 * 4])) {
              iVar13 = iVar9;
            }
            if ((double)param_1[(longlong)iVar13 * 4] < (double)param_1[(longlong)iVar14 * 4] ||
                (double)param_1[(longlong)iVar13 * 4] == (double)param_1[(longlong)iVar14 * 4])
            break;
            puVar15 = param_1 + (longlong)iVar14 * 4;
            puVar11 = param_1 + (longlong)iVar13 * 4;
            uVar2 = *puVar15;
            uVar3 = puVar15[1];
            uVar4 = puVar15[2];
            uVar5 = puVar15[3];
            uVar6 = *puVar11;
            uVar7 = puVar11[1];
            uVar8 = puVar11[3];
            puVar15[2] = puVar11[2];
            puVar15[3] = uVar8;
            *puVar15 = uVar6;
            puVar15[1] = uVar7;
            puVar11[2] = uVar4;
            puVar11[3] = uVar5;
            *puVar11 = uVar2;
            puVar11[1] = uVar3;
            iVar9 = iVar13 * 2;
            iVar12 = iVar13 * 2 + 1;
            iVar14 = iVar13;
          } while ((longlong)iVar12 < (longlong)uVar10);
          uVar1 = uVar10 - 1;
          uVar2 = *param_1;
          uVar3 = param_1[1];
          uVar4 = param_1[2];
          uVar5 = param_1[3];
          uVar6 = param_1[uVar1 * 4];
          uVar7 = (param_1 + uVar1 * 4)[1];
          uVar8 = (param_1 + uVar1 * 4 + 2)[1];
          param_1[2] = param_1[uVar1 * 4 + 2];
          param_1[3] = uVar8;
          *param_1 = uVar6;
          param_1[1] = uVar7;
          local_38._0_4_ = (undefined4)uVar2;
          local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar3;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          puVar11 = param_1 + uVar1 * 4 + 2;
          *(undefined4 *)puVar11 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar11 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_20._4_4_;
          puVar11 = param_1 + uVar1 * 4;
          *(undefined4 *)puVar11 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar11 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_30._4_4_;
          bVar16 = 2 < uVar10;
          uVar10 = uVar1;
          local_38 = uVar2;
          uStack_30 = uVar3;
          local_28 = uVar4;
          uStack_20 = uVar5;
        } while (bVar16);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146db4a8e FUN_146db4a8e body=480 status=ok
// SIG undefined FUN_146db4a8e(void)

ulonglong FUN_146db4a8e(longlong param_1,float *param_2)

{
  longlong lVar1;
  float *pfVar2;
  float fVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong unaff_RBP;
  undefined7 uVar9;
  int iVar10;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  code *local_68;
  longlong *local_60;
  longlong local_58;
  char local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x28) != 0) {
    local_60 = &local_78;
    local_68 = FUN_140036a08;
    lVar6 = FUN_144a773aa(&local_68,&DAT_14c7585d0);
    local_68 = (code *)(lVar6 + 0x10);
    local_60 = *(longlong **)(lVar6 + 0x10);
    local_58 = *(longlong *)(lVar6 + 0x20);
    local_50 = '\0';
    local_48 = *(undefined8 *)(lVar6 + 0x28);
    *(code ***)(lVar6 + 0x28) = &local_68;
    *(int *)(lVar6 + 0x30) = *(int *)(lVar6 + 0x30) + 1;
    local_78 = 0;
    uStack_70 = 0;
    iVar10 = *(int *)(param_1 + 0x30);
    if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar10);
    }
    if (iVar10 != 0) {
      FUN_14595390e(&local_78);
    }
    iVar10 = 0;
LAB_146db4b2f:
    do {
      lVar6 = *(longlong *)(param_1 + 0x20);
      lVar7 = (longlong)iVar10;
      fVar3 = *(float *)(lVar6 + lVar7 * 0x28);
      if (param_2[3] <= fVar3 && fVar3 != param_2[3]) {
LAB_146db4b54:
        unaff_RBP = 0;
      }
      else {
        lVar1 = lVar6 + lVar7 * 0x28;
        if (*(float *)(lVar1 + 0xc) <= *param_2 && *param_2 != *(float *)(lVar1 + 0xc))
        goto LAB_146db4b54;
        lVar6 = lVar6 + lVar7 * 0x28;
        uVar4 = 0;
        do {
          uVar8 = uVar4;
          uVar9 = (undefined7)(unaff_RBP >> 8);
          if (uVar8 == 2) {
            iVar10 = *(int *)(lVar1 + 0x20);
            if (iVar10 == -1) {
              unaff_RBP = CONCAT71(uVar9,1);
              goto LAB_146db4c17;
            }
            lVar6 = (longlong)(int)uStack_70;
            uVar5 = (int)uStack_70 + 1;
            uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
            if (uStack_70._4_4_ < uVar5) {
              FUN_14015d11a(&local_78);
            }
            *(undefined4 *)(local_78 + lVar6 * 4) = *(undefined4 *)(lVar1 + 0x24);
            goto LAB_146db4b2f;
          }
          fVar3 = *(float *)(lVar6 + 4 + uVar8 * 4);
          if (param_2[uVar8 + 4] <= fVar3 && fVar3 != param_2[uVar8 + 4]) break;
          pfVar2 = (float *)(lVar6 + 0x10 + uVar8 * 4);
          uVar4 = uVar8 + 1;
        } while (param_2[uVar8 + 1] < *pfVar2 || param_2[uVar8 + 1] == *pfVar2);
        unaff_RBP = CONCAT71(uVar9,1 < uVar8);
      }
      if ((longlong)(int)uStack_70 == 0) goto LAB_146db4c17;
      iVar10 = *(int *)(local_78 + -4 + (longlong)(int)uStack_70 * 4);
      uStack_70 = CONCAT44(uStack_70._4_4_,(int)uStack_70 + -1);
    } while( true );
  }
  unaff_RBP = 0;
LAB_146db4bec:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return unaff_RBP & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_146db4c17:
  if (local_50 == '\0') {
    local_50 = '\x01';
    *(int *)(local_68 + 0x20) = *(int *)(local_68 + 0x20) + -1;
    if (local_58 != *(longlong *)(local_68 + 0x10)) {
      FUN_14004673c();
    }
    *(longlong **)local_68 = local_60;
    *(undefined8 *)(local_68 + 0x18) = local_48;
  }
  goto LAB_146db4bec;
}



// FUNCTION 146db4c70 FUN_146db4c70 body=507 status=ok
// SIG undefined FUN_146db4c70(void)

void FUN_146db4c70(double *param_1,double *param_2,double *param_3,double *param_4)

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
  
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = *param_3;
  dVar4 = param_3[4];
  dVar5 = param_3[5];
  dVar6 = *param_4;
  dVar7 = param_2[2];
  dVar8 = param_3[8];
  dVar16 = dVar3 * dVar7 - dVar8 * dVar1;
  dVar9 = param_3[9];
  dVar11 = dVar8 * dVar2 - dVar4 * dVar7;
  dVar10 = param_3[10];
  dVar13 = dVar10 * dVar2 - dVar9 * dVar7;
  dVar12 = (dVar4 * dVar7 - dVar9 * dVar1) * dVar1 - dVar2 * dVar16;
  dVar15 = dVar2 * dVar9 - dVar5 * dVar7;
  dVar14 = dVar1 * dVar15 - dVar2 * dVar11;
  dVar9 = dVar11 * dVar7 - dVar1 * dVar13;
  *param_1 = (dVar13 * dVar2 - dVar15 * dVar7) + dVar6;
  param_1[4] = dVar9;
  param_1[8] = dVar14;
  param_1[1] = dVar9;
  param_1[5] = (dVar16 * dVar7 - (dVar7 * dVar8 - dVar10 * dVar1) * dVar1) + dVar6;
  param_1[9] = dVar12;
  param_1[2] = dVar14;
  param_1[6] = dVar12;
  param_1[10] = ((dVar1 * dVar5 - dVar2 * dVar4) * dVar1 - (dVar1 * dVar4 - dVar2 * dVar3) * dVar2)
                + dVar6;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 1.0;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  return;
}



// FUNCTION 146db4e70 FUN_146db4e70 body=34 status=ok
// SIG undefined FUN_146db4e70(void)

longlong * FUN_146db4e70(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_146db5290();
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 146db4e92 FUN_146db4e92 body=137 status=ok
// SIG undefined FUN_146db4e92(void)

longlong * FUN_146db4e92(undefined8 param_1,longlong *param_2,double *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_146db5290();
  local_28 = *(double *)(lVar1 + 0x30) * param_3[2];
  local_30 = *(double *)(lVar1 + 0x28) * param_3[1];
  local_38 = *(double *)(lVar1 + 0x20) * *param_3;
  FUN_140fa723c(lVar1);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146db4f38 FUN_146db4f38 body=114 status=ok
// SIG undefined FUN_146db4f38(void)

void FUN_146db4f38(longlong param_1,double *param_2,double param_3)

{
  undefined1 auStack_48 [40];
  double local_20;
  double local_18;
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = *(double *)(param_1 + 0x48) * param_2[2];
  local_18 = *(double *)(param_1 + 0x40) * param_2[1];
  local_20 = *param_2 * *(double *)(param_1 + 0x38);
  FUN_146e3c1da(*(undefined8 *)(param_1 + 0x88),&local_20,param_3 * *(double *)(param_1 + 0x38));
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146db4fac FUN_146db4fac body=200 status=ok
// SIG undefined FUN_146db4fac(void)

undefined8 FUN_146db4fac(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined2 *local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_140002266(&local_60,L"TriangleMesh");
  puVar5 = local_60;
  if (local_58 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  local_78 = uVar3;
  uStack_70 = uVar4;
  local_68 = uVar1;
  FUN_140002266(param_2,L"Scaled %s, Scale: [%f, %f, %f], Margin: %f",puVar5,uVar2);
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146db5076 FUN_146db5076 body=186 status=ok
// SIG undefined FUN_146db5076(void)

void FUN_146db5076(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14004c296(local_28,*(undefined1 *)(param_1 + 0x1c));
  FUN_14004b8ea(param_1,param_2);
  FUN_140625eca(param_2,param_1 + 0x88);
  uVar2 = FUN_141724e7a(param_2,param_1 + 0x20);
  FUN_141724e7a(uVar2,param_1 + 0x38);
  FUN_140d03e72(param_2,param_1 + 0x58);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cba8);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (iVar1 < 0xc) {
    *(byte *)(param_1 + 0x1c) = *(byte *)(*(longlong *)(param_1 + 0x88) + 0x1c) | 0x80;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146db5132 FUN_146db5132 body=55 status=ok
// SIG undefined FUN_146db5132(void)

void FUN_146db5132(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_1448eb174(param_1 + 0x20,0x18,0);
  uVar2 = FUN_146e3fa52(*(undefined8 *)(param_1 + 0x88));
  FUN_144a78877(uVar2,uVar1);
  return;
}



// FUNCTION 146db5190 FUN_146db5190 body=240 status=ok
// SIG undefined FUN_146db5190(void)

double * FUN_146db5190(longlong param_1,double *param_2,double *param_3,double *param_4,
                      undefined8 param_5)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = param_3[2] * *(double *)(param_1 + 0x48);
  local_28 = param_3[1] * *(double *)(param_1 + 0x40);
  local_30 = *param_3 * *(double *)(param_1 + 0x38);
  local_38 = *(double *)(param_1 + 0x48) * param_4[2];
  local_40 = *(double *)(param_1 + 0x40) * param_4[1];
  local_48 = *(double *)(param_1 + 0x38) * *param_4;
  local_58 = param_5;
  FUN_146dae232(*(undefined8 *)(param_1 + 0x88));
  if (*(char *)(param_2 + 3) == '\x01') {
    dVar1 = *(double *)(param_1 + 0x30);
    dVar2 = *(double *)(param_1 + 0x28);
    *param_2 = *(double *)(param_1 + 0x20) * *param_2;
    param_2[1] = dVar2 * param_2[1];
    param_2[2] = dVar1 * param_2[2];
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146db5290 FUN_146db5290 body=120 status=ok
// SIG undefined FUN_146db5290(void)

undefined8 FUN_146db5290(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_14001cc68(0x90,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  local_20 = *(longlong *)(param_1 + 0x88);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_140fa714a(uVar2,&local_20,param_1 + 0x20,uVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146db530e FUN_146db530e body=72 status=ok
// SIG undefined FUN_146db530e(void)

longlong * FUN_146db530e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x30,0x10);
  FUN_1429b40a4(lVar1,param_1 + 0x28,0);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 146db5356 FUN_146db5356 body=135 status=ok
// SIG undefined FUN_146db5356(void)

longlong * FUN_146db5356(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14001cc68(0x90,0x10);
  local_30 = *(longlong *)(param_1 + 0x28);
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1405445a8(lVar1,&local_30,param_3,0);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146db53de FUN_146db53de body=82 status=ok
// SIG undefined FUN_146db53de(void)

bool FUN_146db53de(longlong param_1,undefined8 param_2,double param_3)

{
  double extraout_XMM0_Qa;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x70))
            (*(longlong **)(param_1 + 0x28),param_2,local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return extraout_XMM0_Qa <= param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146db5432 FUN_146db5432 body=147 status=ok
// SIG undefined FUN_146db5432(void)

undefined8 FUN_146db5432(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_146ccf42e(*(undefined8 *)(param_1 + 0x28),&local_40);
  puVar2 = local_40;
  if (local_38 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"Instanced %s, Margin %f",puVar2,uVar1);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146db54c6 FUN_146db54c6 body=94 status=ok
// SIG undefined FUN_146db54c6(void)

void FUN_146db54c6(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14004c296(local_20,*(undefined1 *)(param_1 + 0x1c));
  FUN_14004b8ea(param_1,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_14004952e(param_2,param_1 + 0x28);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146db5538 FUN_146db5538 body=72 status=ok
// SIG undefined FUN_146db5538(void)

longlong * FUN_146db5538(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x30,0x10);
  FUN_1429b41c6(lVar1,param_1 + 0x28,0);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 146db5580 FUN_146db5580 body=135 status=ok
// SIG undefined FUN_146db5580(void)

longlong * FUN_146db5580(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14001cc68(0x90,0x10);
  local_30 = *(longlong *)(param_1 + 0x28);
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_140fa714a(lVar1,&local_30,param_3,0);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146db561c FUN_146db561c body=150 status=ok
// SIG undefined FUN_146db561c(void)

undefined8 FUN_146db561c(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_140002266(&local_40,L"TriangleMesh");
  puVar2 = local_40;
  if (local_38 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"Instanced %s, Margin %f",puVar2,uVar1);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146db56b4 FUN_146db56b4 body=94 status=ok
// SIG undefined FUN_146db56b4(void)

void FUN_146db56b4(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14004c296(local_20,*(undefined1 *)(param_1 + 0x1c));
  FUN_14004b8ea(param_1,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_140625eca(param_2,param_1 + 0x28);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146db572c FUN_146db572c body=46 status=ok
// SIG undefined FUN_146db572c(void)

undefined8 FUN_146db572c(longlong param_1)

{
  double dVar1;
  undefined8 uVar2;
  
  dVar1 = (double)(**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))();
  uVar2 = 0;
  if (0.0 < dVar1) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  return uVar2;
}



// FUNCTION 146db575a FUN_146db575a body=34 status=ok
// SIG undefined FUN_146db575a(void)

longlong * FUN_146db575a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_146db6170();
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 146db577c FUN_146db577c body=137 status=ok
// SIG undefined FUN_146db577c(void)

longlong * FUN_146db577c(undefined8 param_1,longlong *param_2,double *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_146db6170();
  local_28 = *(double *)(lVar1 + 0x30) * param_3[2];
  local_30 = *(double *)(lVar1 + 0x28) * param_3[1];
  local_38 = *(double *)(lVar1 + 0x20) * *param_3;
  FUN_146db62da(lVar1);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146db5822 FUN_146db5822 body=752 status=ok
// SIG undefined FUN_146db5822(void)

undefined8
FUN_146db5822(longlong param_1,double *param_2,double *param_3,double param_4,double param_5,
             double *param_6,double *param_7,double *param_8,undefined8 param_9)

{
  double dVar1;
  char cVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_108 [32];
  double local_e8;
  double *local_e0;
  double *local_d8;
  double *local_d0;
  undefined8 local_c8;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_58 = param_2[2] * *(double *)(param_1 + 0x48);
  dVar7 = *(double *)(param_1 + 0x38);
  local_60 = param_2[1] * *(double *)(param_1 + 0x40);
  local_68 = *param_2 * dVar7;
  dVar4 = *(double *)(param_1 + 0x48) * param_3[2];
  dVar5 = *(double *)(param_1 + 0x40) * param_3[1];
  dVar8 = *param_3 * dVar7;
  dVar6 = SQRT(dVar4 * dVar4 + dVar8 * dVar8 + dVar5 * dVar5);
  if (2.2250738585072014e-308 < dVar6) {
    dVar1 = 1.0 / dVar6;
    local_70 = dVar4 * dVar1;
    local_78 = dVar5 * dVar1;
    local_80 = dVar8 * dVar1;
    local_e8 = dVar7 * param_5;
    local_c8 = param_9;
    local_d0 = &local_b0;
    local_d8 = &local_98;
    local_e0 = &local_b8;
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0xa0))
                      (*(longlong **)(param_1 + 0x88),&local_68,&local_80,dVar6 * param_4);
    if (cVar2 != '\0') {
      dVar1 = dVar1 * local_b8;
      if ((dVar1 != 0.0) || (NAN(dVar1))) {
        if (param_4 <= dVar1) goto LAB_146db5ab6;
        dVar7 = *(double *)(param_1 + 0x30);
        dVar4 = *(double *)(param_1 + 0x28);
        *param_7 = *(double *)(param_1 + 0x20) * local_98;
        param_7[1] = dVar4 * local_90;
        param_7[2] = dVar7 * local_88;
        local_a0 = *(double *)(param_1 + 0x48) * local_a0;
        local_a8 = *(double *)(param_1 + 0x40) * local_a8;
        local_b0 = *(double *)(param_1 + 0x38) * local_b0;
        dVar7 = local_a0 * local_a0 + local_b0 * local_b0 + local_a8 * local_a8;
        if (((dVar7 != 1.0) || (dVar5 = local_b0, dVar6 = local_a8, dVar4 = local_a0, NAN(dVar7)))
           && (dVar5 = DAT_14c8464e0, dVar6 = DAT_14c8464e8, dVar4 = DAT_14c8464f0,
              2.2250738585072014e-308 <= dVar7)) {
          dVar7 = 1.0 / SQRT(dVar7);
          dVar5 = local_b0 * dVar7;
          dVar6 = local_a8 * dVar7;
          dVar4 = local_a0 * dVar7;
        }
      }
      else {
        param_7[2] = param_2[2];
        dVar7 = param_2[1];
        *param_7 = *param_2;
        param_7[1] = dVar7;
        dVar5 = -*param_3;
        dVar6 = -param_3[1];
        dVar4 = -param_3[2];
      }
      *param_8 = dVar5;
      param_8[1] = dVar6;
      param_8[2] = dVar4;
      *param_6 = dVar1;
      uVar3 = 1;
      goto LAB_146db5ab8;
    }
  }
LAB_146db5ab6:
  uVar3 = 0;
LAB_146db5ab8:
  if ((local_50 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 146db5b14 FUN_146db5b14 body=51 status=ok
// SIG undefined FUN_146db5b14(void)

void FUN_146db5b14(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0xb0))(*(longlong **)(param_1 + 0x88));
  return;
}



// FUNCTION 146db5b48 FUN_146db5b48 body=287 status=ok
// SIG undefined FUN_146db5b48(void)

void FUN_146db5b48(longlong param_1,double *param_2,longlong *param_3,double param_4)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  double dVar7;
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  dVar1 = *(double *)(param_1 + 0x48);
  local_38 = param_2[2] * dVar1;
  dVar7 = *(double *)(param_1 + 0x38);
  dVar2 = *(double *)(param_1 + 0x40);
  local_40 = param_2[1] * dVar2;
  local_48 = *param_2 * dVar7;
  if ((dVar7 <= dVar2 || dVar7 <= dVar1) && (dVar7 = dVar2, dVar2 <= dVar1)) {
    dVar7 = dVar1;
  }
  iVar5 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0xb8))
                    (*(longlong **)(param_1 + 0x88),&local_48,param_3,dVar7 * param_4);
  if ((iVar5 != -1) && (lVar4 = param_3[1], (longlong)(int)lVar4 != 0)) {
    lVar3 = *param_3;
    lVar6 = 0;
    do {
      dVar1 = *(double *)(param_1 + 0x30);
      dVar7 = *(double *)(param_1 + 0x28);
      *(double *)(lVar3 + lVar6) = *(double *)(lVar3 + lVar6) * *(double *)(param_1 + 0x20);
      *(double *)(lVar3 + 8 + lVar6) = *(double *)(lVar3 + 8 + lVar6) * dVar7;
      *(double *)(lVar3 + 0x10 + lVar6) = *(double *)(lVar3 + 0x10 + lVar6) * dVar1;
      lVar6 = lVar6 + 0x18;
    } while ((longlong)(int)lVar4 * 0x18 != lVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146db5c68 FUN_146db5c68 body=436 status=ok
// SIG undefined FUN_146db5c68(void)

double * FUN_146db5c68(longlong param_1,double *param_2,double *param_3,undefined8 param_4,
                      double *param_5)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_98 [32];
  ulonglong *local_78;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = param_3[2] * *(double *)(param_1 + 0x30);
  local_30 = param_3[1] * *(double *)(param_1 + 0x28);
  local_38 = *param_3 * *(double *)(param_1 + 0x20);
  local_40 = *(double *)(param_1 + 0x30) * param_5[2];
  local_48 = *(double *)(param_1 + 0x28) * param_5[1];
  dVar1 = *(double *)(param_1 + 0x20) * *param_5;
  dVar2 = SQRT(local_40 * local_40 + dVar1 * dVar1 + local_48 * local_48);
  if (9.99999993922529e-09 < dVar2) {
    local_48 = local_48 / dVar2;
  }
  else {
    local_48 = 0.0;
  }
  local_50 = -(ulonglong)(9.99999993922529e-09 < dVar2) & (ulonglong)(dVar1 / dVar2);
  if (9.99999993922529e-09 < dVar2) {
    local_40 = local_40 / dVar2;
  }
  else {
    local_40 = 1.0;
  }
  local_78 = &local_50;
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0xc0))
            (*(longlong **)(param_1 + 0x88),&local_68,&local_38);
  local_58 = local_58 * *(double *)(param_1 + 0x48);
  local_60 = local_60 * *(double *)(param_1 + 0x40);
  local_68 = local_68 * *(double *)(param_1 + 0x38);
  dVar1 = local_58 * local_58 + local_68 * local_68 + local_60 * local_60;
  if (2.2250738585072014e-308 <= dVar1) {
    dVar1 = SQRT(dVar1);
    *param_2 = local_68 / dVar1;
    param_2[1] = local_60 / dVar1;
    param_2[2] = local_58 / dVar1;
    if ((dVar1 != 0.0) || (NAN(dVar1))) goto LAB_146db5df8;
  }
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 1.0;
LAB_146db5df8:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146db5e1e FUN_146db5e1e body=118 status=ok
// SIG undefined FUN_146db5e1e(void)

void FUN_146db5e1e(longlong param_1,double *param_2,double param_3)

{
  undefined1 auStack_48 [40];
  double local_20;
  double local_18;
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = *(double *)(param_1 + 0x48) * param_2[2];
  local_18 = *(double *)(param_1 + 0x40) * param_2[1];
  local_20 = *param_2 * *(double *)(param_1 + 0x38);
  (**(code **)(**(longlong **)(param_1 + 0x88) + 200))
            (*(longlong **)(param_1 + 0x88),&local_20,param_3 * *(double *)(param_1 + 0x38));
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146db5e96 FUN_146db5e96 body=204 status=ok
// SIG undefined FUN_146db5e96(void)

undefined8 FUN_146db5e96(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined2 *local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0xe8))(*(longlong **)(param_1 + 0x88),&local_60);
  puVar5 = local_60;
  if (local_58 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  local_78 = uVar3;
  uStack_70 = uVar4;
  local_68 = uVar1;
  FUN_140002266(param_2,L"Scaled %s, Scale: [%f, %f, %f], Margin: %f",puVar5,uVar2);
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146db5f64 FUN_146db5f64 body=186 status=ok
// SIG undefined FUN_146db5f64(void)

void FUN_146db5f64(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14004c296(local_28,*(undefined1 *)(param_1 + 0x1c));
  FUN_14004b8ea(param_1,param_2);
  FUN_140a2844e(param_2,param_1 + 0x88);
  uVar2 = FUN_141724e7a(param_2,param_1 + 0x20);
  FUN_141724e7a(uVar2,param_1 + 0x38);
  FUN_140d03e72(param_2,param_1 + 0x58);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cba8);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (iVar1 < 0xc) {
    *(byte *)(param_1 + 0x1c) = *(byte *)(*(longlong *)(param_1 + 0x88) + 0x1c) | 0x80;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146db6020 FUN_146db6020 body=59 status=ok
// SIG undefined FUN_146db6020(void)

void FUN_146db6020(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_1448eb174(param_1 + 0x20,0x18,0);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x100))();
  FUN_144a78877(uVar2,uVar1);
  return;
}



// FUNCTION 146db6070 FUN_146db6070 body=240 status=ok
// SIG undefined FUN_146db6070(void)

double * FUN_146db6070(longlong param_1,double *param_2,double *param_3,double *param_4,
                      undefined8 param_5)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = param_3[2] * *(double *)(param_1 + 0x48);
  local_28 = param_3[1] * *(double *)(param_1 + 0x40);
  local_30 = *param_3 * *(double *)(param_1 + 0x38);
  local_38 = *(double *)(param_1 + 0x48) * param_4[2];
  local_40 = *(double *)(param_1 + 0x40) * param_4[1];
  local_48 = *(double *)(param_1 + 0x38) * *param_4;
  local_58 = param_5;
  FUN_146dae232(*(undefined8 *)(param_1 + 0x88));
  if (*(char *)(param_2 + 3) == '\x01') {
    dVar1 = *(double *)(param_1 + 0x30);
    dVar2 = *(double *)(param_1 + 0x28);
    *param_2 = *(double *)(param_1 + 0x20) * *param_2;
    param_2[1] = dVar2 * param_2[1];
    param_2[2] = dVar1 * param_2[2];
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146db6170 FUN_146db6170 body=120 status=ok
// SIG undefined FUN_146db6170(void)

undefined8 FUN_146db6170(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_14001cc68(0x90,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  local_20 = *(longlong *)(param_1 + 0x88);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_146db61ea(uVar2,&local_20,param_1 + 0x20,uVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146db61ea FUN_146db61ea body=240 status=ok
// SIG undefined FUN_146db61ea(void)

undefined8 *
FUN_146db61ea(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  byte bVar3;
  longlong lVar4;
  
  bVar3 = *(byte *)(*param_2 + 0x1c) | 0x80;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  *(byte *)((longlong)param_1 + 0x1c) = bVar3;
  *(byte *)((longlong)param_1 + 0x1d) = bVar3;
  param_1[4] = 0x3ff0000000000000;
  param_1[5] = 0x3ff0000000000000;
  param_1[6] = 0x3ff0000000000000;
  param_1[7] = 0x3ff0000000000000;
  param_1[8] = 0x3ff0000000000000;
  param_1[9] = 0x3ff0000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0x7fefffffffffffff;
  param_1[0xc] = 0x7fefffffffffffff;
  param_1[0xd] = 0x7fefffffffffffff;
  param_1[0xe] = 0xffefffffffffffff;
  param_1[0xf] = 0xffefffffffffffff;
  param_1[0x10] = 0xffefffffffffffff;
  *param_1 = &PTR_FUN_149f55d90;
  lVar4 = *param_2;
  param_1[0x11] = lVar4;
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    lVar4 = param_1[0x11];
  }
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(lVar4 + 0x18);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)(lVar4 + 0x19);
  param_1[10] = param_4;
  FUN_146db62da(param_1,param_3);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return param_1;
}



// FUNCTION 146db62da FUN_146db62da body=173 status=ok
// SIG undefined FUN_146db62da(void)

void FUN_146db62da(longlong param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  ulonglong uVar4;
  double dVar5;
  
  lVar3 = 4;
  do {
    dVar1 = *(double *)(param_2 + -0x20 + lVar3 * 8);
    uVar4 = -(ulonglong)(ABS(dVar1) < 9.999999974752427e-07);
    dVar1 = (double)(uVar4 & 0x3eb0c6f7a0000000 | ~uVar4 & (ulonglong)dVar1);
    *(double *)(param_1 + lVar3 * 8) = dVar1;
    *(double *)(param_1 + 0x18 + lVar3 * 8) = 1.0 / dVar1;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 7);
  dVar1 = *(double *)(param_1 + 0x20);
  dVar2 = *(double *)(param_1 + 0x50);
  dVar5 = (double)(**(code **)(**(longlong **)(param_1 + 0x88) + 0x18))();
  *(double *)(param_1 + 0x10) = dVar5 * dVar1 + dVar2;
  FUN_146db6388(param_1);
  return;
}



// FUNCTION 146db6388 FUN_146db6388 body=249 status=ok
// SIG undefined FUN_146db6388(void)

void FUN_146db6388(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_a8 [40];
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x80))(*(longlong **)(param_1 + 0x88),&local_80);
  local_70 = local_70 * *(double *)(param_1 + 0x30);
  local_78 = local_78 * *(double *)(param_1 + 0x28);
  local_80 = local_80 * *(double *)(param_1 + 0x20);
  local_58 = *(double *)(param_1 + 0x30) * local_58;
  local_60 = *(double *)(param_1 + 0x28) * local_60;
  local_68 = *(double *)(param_1 + 0x20) * local_68;
  dVar1 = local_70;
  if (local_58 <= local_70) {
    dVar1 = local_58;
  }
  dVar2 = local_78;
  if (local_60 <= local_78) {
    dVar2 = local_60;
  }
  dVar3 = local_80;
  if (local_68 <= local_80) {
    dVar3 = local_68;
  }
  *(double *)(param_1 + 0x58) = dVar3;
  *(double *)(param_1 + 0x60) = dVar2;
  *(double *)(param_1 + 0x68) = dVar1;
  if (local_70 <= local_58) {
    local_70 = local_58;
  }
  if (local_78 <= local_60) {
    local_78 = local_60;
  }
  if (local_80 <= local_68) {
    local_80 = local_68;
  }
  *(double *)(param_1 + 0x70) = local_80;
  *(double *)(param_1 + 0x78) = local_78;
  *(double *)(param_1 + 0x80) = local_70;
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146db6482 FUN_146db6482 body=147 status=ok
// SIG undefined FUN_146db6482(void)

void FUN_146db6482(longlong param_1,int param_2)

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



// FUNCTION 146db6516 FUN_146db6516 body=48 status=ok
// SIG undefined FUN_146db6516(void)

void FUN_146db6516(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,4);
  }
  return;
}



// FUNCTION 146db6546 FUN_146db6546 body=159 status=ok
// SIG undefined FUN_146db6546(void)

void FUN_146db6546(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_146db6482(param_1,iVar1);
    }
    if (uVar3 != 0) {
      puVar2 = (undefined8 *)((longlong)iVar1 * 0x48 + *param_1 + 0x38);
      do {
        *(undefined8 *)((longlong)puVar2 + -0x1c) = 0x7f7fffff7f7fffff;
        *(undefined8 *)((longlong)puVar2 + -0x14) = 0xff7fffff7f7fffff;
        *(undefined1 **)((longlong)puVar2 + -0xc) = &DAT_ff7fffffff7fffff;
        *puVar2 = 0;
        puVar2 = puVar2 + 9;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_146db65e6(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146db65e6 FUN_146db65e6 body=62 status=ok
// SIG undefined FUN_146db65e6(void)

void FUN_146db65e6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146db6624(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x48,8);
  }
  return;
}



// FUNCTION 146db6624 FUN_146db6624 body=112 status=ok
// SIG undefined FUN_146db6624(void)

ulonglong FUN_146db6624(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x48) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146db665e;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x48,8);
      param_2 = param_2 / 0x48;
    }
  }
LAB_146db665e:
  return param_2 & 0xffffffff;
}



// FUNCTION 146db6694 FUN_146db6694 body=114 status=ok
// SIG undefined FUN_146db6694(void)

void FUN_146db6694(longlong *param_1,int param_2,int param_3,uint param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  
  iVar6 = param_3 - param_2;
  if ((iVar6 != 0 && param_2 <= param_3) && 0 < (int)param_4) {
    lVar5 = (longlong)param_2;
    do {
      lVar3 = *param_1;
      lVar2 = lVar3 + lVar5 * 8;
      puVar4 = *(undefined8 **)((ulonglong)param_4 * -8 + lVar2);
      *(undefined8 *)((ulonglong)param_4 * -8 + lVar2) = *(undefined8 *)(lVar3 + lVar5 * 8);
      *(undefined8 *)(lVar3 + lVar5 * 8) = 0;
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar4 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) && (*(int *)((longlong)puVar4 + 0xc) == 0)) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
      lVar5 = lVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}



// FUNCTION 146db6706 FUN_146db6706 body=114 status=ok
// SIG undefined FUN_146db6706(void)

void FUN_146db6706(longlong *param_1,int param_2)

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



// FUNCTION 146db6778 FUN_146db6778 body=59 status=ok
// SIG undefined FUN_146db6778(void)

void FUN_146db6778(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146db67b4(param_1,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  if (iVar1 == *(int *)(param_1 + 0x24)) {
    return;
  }
  *(int *)(param_1 + 0x24) = iVar1;
  FUN_1468202a0(param_1,*(undefined4 *)(param_1 + 0x20),iVar1,4);
  return;
}



// FUNCTION 146db67b4 FUN_146db67b4 body=105 status=ok
// SIG undefined FUN_146db67b4(void)

ulonglong FUN_146db67b4(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 5;
  if (5 < param_2) {
    iVar2 = param_3 - param_2;
    if (((longlong)iVar2 & 0x3ffffffffffff000U) == 0) {
      if (iVar2 < 0x41 || (int)(param_3 * 2) <= (int)(param_2 * 3)) {
        return (ulonglong)param_3;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_3;
    }
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,0);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 146db681e FUN_146db681e body=96 status=ok
// SIG undefined FUN_146db681e(void)

void FUN_146db681e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 146db687e FUN_146db687e body=132 status=ok
// SIG undefined FUN_146db687e(void)

void FUN_146db687e(longlong param_1,int param_2)

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



// FUNCTION 146db6904 FUN_146db6904 body=95 status=ok
// SIG undefined FUN_146db6904(void)

void FUN_146db6904(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 146db6964 FUN_146db6964 body=132 status=ok
// SIG undefined FUN_146db6964(void)

void FUN_146db6964(longlong param_1,int param_2)

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



// FUNCTION 146db69ea FUN_146db69ea body=62 status=ok
// SIG undefined FUN_146db69ea(void)

void FUN_146db69ea(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146db6a28(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146db6a28 FUN_146db6a28 body=93 status=ok
// SIG undefined FUN_146db6a28(void)

ulonglong FUN_146db6a28(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146db6a86 FUN_146db6a86 body=48 status=ok
// SIG undefined FUN_146db6a86(void)

void FUN_146db6a86(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 146db6ab6 FUN_146db6ab6 body=103 status=ok
// SIG undefined FUN_146db6ab6(void)

ulonglong FUN_146db6ab6(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = uVar4 * 8;
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3 * 8) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar4 = uVar3 & 0xffffffff;
          goto LAB_146db6b0a;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14091d212(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar4 * 8) = *param_2;
LAB_146db6b0a:
  return uVar4 & 0xffffffff;
}



// FUNCTION 146db6b1e FUN_146db6b1e body=110 status=ok
// SIG undefined FUN_146db6b1e(void)

void FUN_146db6b1e(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if (param_2 <= (int)uVar1) {
    iVar5 = 5;
    if (5 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (5 < *(uint *)(param_1 + 0x5c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x5c) = iVar5;
    FUN_146db6b8e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146db6b8e FUN_146db6b8e body=132 status=ok
// SIG undefined FUN_146db6b8e(void)

void FUN_146db6b8e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x50);
  if ((uint)param_3 < 6) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x50,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x50),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x50,param_2,param_3,0x10);
  return;
}



// FUNCTION 146db6c12 FUN_146db6c12 body=106 status=ok
// SIG undefined FUN_146db6c12(void)

void FUN_146db6c12(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  void *_Dst;
  
  lVar2 = *(longlong *)(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x50) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)((longlong)param_2 * 0x10 + lVar2);
  FUN_140d9d65b(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0x58);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar3 << 4);
    iVar1 = *(int *)(param_1 + 0x58);
  }
  *(int *)(param_1 + 0x58) = iVar1 - param_3;
  return;
}



// FUNCTION 146db6c7c FUN_146db6c7c body=52 status=ok
// SIG undefined FUN_146db6c7c(void)

void FUN_146db6c7c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146db6cb0(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
  if (iVar1 == *(int *)(param_1 + 0x5c)) {
    return;
  }
  *(int *)(param_1 + 0x5c) = iVar1;
  FUN_146db6b8e(param_1,*(undefined4 *)(param_1 + 0x58),iVar1);
  return;
}



// FUNCTION 146db6cb0 FUN_146db6cb0 body=108 status=ok
// SIG undefined FUN_146db6cb0(void)

ulonglong FUN_146db6cb0(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 5;
  if (5 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0xffffffffffffc00U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,0);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146db6d1c FUN_146db6d1c body=89 status=ok
// SIG undefined FUN_146db6d1c(void)

void FUN_146db6d1c(longlong param_1,int param_2)

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



// FUNCTION 146db6d75 FUN_146db6d75 body=43 status=ok
// SIG undefined FUN_146db6d75(void)

void FUN_146db6d75(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 146db6da0 FUN_146db6da0 body=48 status=ok
// SIG undefined FUN_146db6da0(void)

void FUN_146db6da0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 146db6dd0 FUN_146db6dd0 body=26 status=ok
// SIG undefined FUN_146db6dd0(void)

void FUN_146db6dd0(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 146db6dea FUN_146db6dea body=147 status=ok
// SIG undefined FUN_146db6dea(void)

void FUN_146db6dea(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146db6e7e FUN_146db6e7e body=98 status=ok
// SIG undefined FUN_146db6e7e(void)

void FUN_146db6e7e(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x18 + *param_1);
  FUN_146db6d75(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar2 * 0x18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146db6ee0 FUN_146db6ee0 body=62 status=ok
// SIG undefined FUN_146db6ee0(void)

void FUN_146db6ee0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146db6f1e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 146db6f1e FUN_146db6f1e body=112 status=ok
// SIG undefined FUN_146db6f1e(void)

ulonglong FUN_146db6f1e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146db6f58;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_146db6f58:
  return param_2 & 0xffffffff;
}



// FUNCTION 146db6f8e FUN_146db6f8e body=1548 status=ok
// SIG undefined FUN_146db6f8e(void)

void FUN_146db6f8e(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  ulonglong uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar7 = *param_1;
  lVar8 = param_1[3];
  dVar19 = *(double *)(lVar7 + 0xa0);
  dVar20 = *(double *)(lVar7 + 0xa8);
  dVar22 = *(double *)(lVar7 + 0xb0);
  dVar1 = *(double *)(lVar7 + 0xb8);
  dVar2 = (double)param_1[0xc];
  dVar3 = (double)param_1[0xb];
  dVar4 = (double)param_1[10];
  dVar25 = dVar20 * dVar2 - dVar3 * dVar22;
  dVar25 = dVar25 + dVar25;
  dVar13 = dVar19 * dVar3 - dVar4 * dVar20;
  dVar13 = dVar13 + dVar13;
  dVar21 = dVar22 * dVar4 - dVar2 * dVar19;
  dVar21 = dVar21 + dVar21;
  dVar5 = *(double *)(lVar7 + 0x108);
  dVar6 = *(double *)(lVar7 + 0x100);
  param_1[0x36] =
       (longlong)
       ((dVar20 * dVar13 - dVar21 * dVar22) + dVar1 * dVar25 + dVar4 + *(double *)(lVar7 + 0xf8));
  param_1[0x37] = (longlong)((dVar22 * dVar25 - dVar13 * dVar19) + dVar1 * dVar21 + dVar3 + dVar6);
  param_1[0x38] = (longlong)((dVar19 * dVar21 - dVar25 * dVar20) + dVar1 * dVar13 + dVar2 + dVar5);
  dVar19 = *(double *)(lVar8 + 0xa0);
  dVar20 = *(double *)(lVar8 + 0xa8);
  dVar22 = *(double *)(lVar8 + 0xb0);
  dVar1 = *(double *)(lVar8 + 0xb8);
  dVar2 = (double)param_1[0x18];
  dVar3 = (double)param_1[0x17];
  dVar4 = (double)param_1[0x16];
  dVar25 = dVar20 * dVar2 - dVar3 * dVar22;
  dVar25 = dVar25 + dVar25;
  dVar13 = dVar19 * dVar3 - dVar4 * dVar20;
  dVar13 = dVar13 + dVar13;
  dVar21 = dVar22 * dVar4 - dVar2 * dVar19;
  dVar21 = dVar21 + dVar21;
  dVar5 = *(double *)(lVar8 + 0x108);
  dVar6 = *(double *)(lVar8 + 0x100);
  param_1[0x39] =
       (longlong)
       ((dVar20 * dVar13 - dVar21 * dVar22) + dVar1 * dVar25 + dVar4 + *(double *)(lVar8 + 0xf8));
  param_1[0x3a] = (longlong)((dVar22 * dVar25 - dVar13 * dVar19) + dVar1 * dVar21 + dVar3 + dVar6);
  param_1[0x3b] = (longlong)((dVar19 * dVar21 - dVar25 * dVar20) + dVar1 * dVar13 + dVar2 + dVar5);
  dVar13 = (double)param_1[6];
  dVar14 = (double)param_1[7];
  dVar15 = (double)param_1[8];
  dVar16 = (double)param_1[9];
  dVar19 = *(double *)(lVar7 + 0xb8);
  dVar20 = *(double *)(lVar7 + 0xb8);
  dVar22 = *(double *)(lVar7 + 0xa8);
  dVar1 = *(double *)(lVar7 + 0xa8);
  dVar2 = *(double *)(lVar7 + 0xa0);
  dVar3 = *(double *)(lVar7 + 0xa0);
  dVar4 = *(double *)(lVar7 + 0xb0);
  dVar5 = *(double *)(lVar7 + 0xb0);
  dVar21 = dVar14 * dVar4 * -1.0 + dVar15 * dVar22 + dVar2 * dVar16 * 1.0 + dVar19 * dVar13;
  dVar25 = dVar13 * dVar5 * 1.0 + dVar16 * dVar1 + dVar3 * dVar15 * -1.0 + dVar20 * dVar14;
  dVar6 = dVar16 * dVar4 * 1.0 + ((dVar2 * dVar14 * 1.0 + dVar19 * dVar15) - dVar22 * dVar13);
  dVar13 = dVar15 * dVar5 * -1.0 + ((dVar3 * dVar13 * -1.0 + dVar20 * dVar16) - dVar1 * dVar14);
  auVar11._8_4_ = SUB84(dVar25,0);
  auVar11._0_8_ = dVar21;
  auVar11._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x3c) = auVar11;
  auVar9._8_4_ = SUB84(dVar13,0);
  auVar9._0_8_ = dVar6;
  auVar9._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x3e) = auVar9;
  dVar14 = (double)param_1[0x12];
  dVar15 = (double)param_1[0x13];
  dVar16 = (double)param_1[0x14];
  dVar17 = (double)param_1[0x15];
  dVar19 = *(double *)(lVar8 + 0xb8);
  dVar20 = *(double *)(lVar8 + 0xb8);
  dVar1 = *(double *)(lVar8 + 0xa8);
  dVar22 = *(double *)(lVar8 + 0xa8);
  dVar2 = *(double *)(lVar8 + 0xa0);
  dVar3 = *(double *)(lVar8 + 0xa0);
  dVar4 = *(double *)(lVar8 + 0xb0);
  dVar5 = *(double *)(lVar8 + 0xb0);
  dVar23 = dVar15 * dVar4 * -1.0 + dVar16 * dVar1 + dVar2 * dVar17 * 1.0 + dVar19 * dVar14;
  dVar24 = dVar14 * dVar5 * 1.0 + dVar17 * dVar22 + dVar3 * dVar16 * -1.0 + dVar20 * dVar15;
  dVar19 = dVar17 * dVar4 * 1.0 + ((dVar2 * dVar15 * 1.0 + dVar19 * dVar16) - dVar1 * dVar14);
  dVar20 = dVar16 * dVar5 * -1.0 + ((dVar3 * dVar14 * -1.0 + dVar20 * dVar17) - dVar22 * dVar15);
  uVar18 = -(ulonglong)(0.0 <= dVar13 * dVar20 + dVar6 * dVar19 + dVar21 * dVar23 + dVar25 * dVar24)
  ;
  dVar22 = (double)(~uVar18 & 0xbff0000000000000 |
                   (ulonglong)((uint)(uVar18 >> 0x20) & 0x3ff00000) << 0x20);
  param_1[0x40] = (longlong)(dVar23 * dVar22);
  param_1[0x41] = (longlong)(dVar24 * dVar22);
  param_1[0x42] = (longlong)(dVar19 * dVar22);
  param_1[0x43] = (longlong)(dVar22 * dVar20);
  FUN_146db759c(param_1,0);
  FUN_146db759c(param_1,1);
  uVar18 = -(ulonglong)
            (0.0 <= (double)param_1[0x27] * (double)param_1[0x2b] +
                    (double)param_1[0x26] * (double)param_1[0x2a] +
                    (double)param_1[0x24] * (double)param_1[0x28] +
                    (double)param_1[0x25] * (double)param_1[0x29]);
  dVar19 = (double)(~uVar18 & 0xbff0000000000000 | uVar18 & 0x3ff0000000000000);
  param_1[0x28] = (longlong)((double)param_1[0x28] * dVar19);
  param_1[0x29] = (longlong)((double)param_1[0x29] * dVar19);
  param_1[0x2a] = (longlong)((double)param_1[0x2a] * dVar19);
  param_1[0x2b] = (longlong)(dVar19 * (double)param_1[0x2b]);
  FUN_140185264(&local_a8,param_1 + 0x3c,param_1 + 0x24,0x3ff0000000000000);
  param_1[0x2e] = local_98;
  *(undefined4 *)(param_1 + 0x2c) = local_a8;
  *(undefined4 *)((longlong)param_1 + 0x164) = uStack_a4;
  *(undefined4 *)(param_1 + 0x2d) = uStack_a0;
  *(undefined4 *)((longlong)param_1 + 0x16c) = uStack_9c;
  FUN_140185264(&local_a8,param_1 + 0x40,param_1 + 0x28,0x3ff0000000000000);
  param_1[0x31] = local_98;
  param_1[0x2f] = CONCAT44(uStack_a4,local_a8);
  param_1[0x30] = CONCAT44(uStack_9c,uStack_a0);
  auVar12._4_4_ = (float)(double)param_1[0x2d];
  auVar12._0_4_ = (float)(double)param_1[0x2c];
  auVar12._8_4_ = (float)(double)param_1[0x2e];
  auVar12._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x32) = auVar12;
  auVar10._4_4_ = (float)(double)param_1[0x30];
  auVar10._0_4_ = (float)(double)param_1[0x2f];
  auVar10._8_4_ = (float)(double)param_1[0x31];
  auVar10._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x34) = auVar10;
  if ((local_90 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146db759c FUN_146db759c body=720 status=ok
// SIG undefined FUN_146db759c(void)

void FUN_146db759c(longlong param_1,uint param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float *pfVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  double dVar22;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar20 = (ulonglong)param_2;
  pfVar12 = *(float **)(param_1 + uVar20 * 0x18);
  fVar3 = pfVar12[2];
  fVar4 = pfVar12[1];
  dVar5 = *(double *)(pfVar12 + 0x48);
  dVar6 = *(double *)(pfVar12 + 0x46);
  *(double *)(param_1 + 0x3c8 + uVar20 * 0x18) = (double)*pfVar12 + *(double *)(pfVar12 + 0x44);
  *(double *)(param_1 + 0x3d0 + uVar20 * 0x18) = (double)fVar4 + dVar6;
  *(double *)(param_1 + 0x3d8 + uVar20 * 0x18) = (double)fVar3 + dVar5;
  FUN_14013713e(pfVar12,&local_a8);
  lVar21 = uVar20 * 0x20;
  puVar2 = (undefined8 *)(param_1 + 0x410 + lVar21);
  *puVar2 = local_98;
  puVar2[1] = uStack_90;
  puVar2 = (undefined8 *)(param_1 + 0x400 + lVar21);
  *puVar2 = local_a8;
  puVar2[1] = uStack_a0;
  lVar19 = uVar20 * 0x60;
  dVar5 = *(double *)(param_1 + 0x60 + lVar19);
  dVar6 = *(double *)(param_1 + 0x410 + lVar21);
  dVar7 = *(double *)(param_1 + 0x400 + lVar21);
  dVar8 = *(double *)(param_1 + 0x408 + lVar21);
  dVar9 = *(double *)(param_1 + 0x50 + lVar19);
  dVar10 = *(double *)(param_1 + 0x58 + lVar19);
  dVar14 = dVar8 * dVar5 - dVar10 * dVar6;
  dVar14 = dVar14 + dVar14;
  dVar11 = *(double *)(param_1 + 0x418 + lVar21);
  dVar15 = dVar7 * dVar10 - dVar9 * dVar8;
  dVar15 = dVar15 + dVar15;
  dVar22 = dVar6 * dVar9 - dVar5 * dVar7;
  dVar22 = dVar22 + dVar22;
  *(double *)(param_1 + 0xf0 + uVar20 * 0x18) =
       (dVar8 * dVar15 - dVar22 * dVar6) + dVar14 * dVar11 + dVar9 +
       *(double *)(param_1 + 0x3c8 + uVar20 * 0x18);
  *(double *)(param_1 + 0xf8 + uVar20 * 0x18) =
       (dVar6 * dVar14 - dVar15 * dVar7) + dVar11 * dVar22 + dVar10 +
       *(double *)(param_1 + 0x3d0 + uVar20 * 0x18);
  *(double *)(param_1 + 0x100 + uVar20 * 0x18) =
       (dVar7 * dVar22 - dVar14 * dVar8) + dVar11 * dVar15 + dVar5 +
       *(double *)(param_1 + 0x3d8 + uVar20 * 0x18);
  pdVar1 = (double *)(param_1 + 0x30 + lVar19);
  dVar22 = *pdVar1;
  dVar16 = pdVar1[1];
  pdVar1 = (double *)(param_1 + 0x40 + lVar19);
  dVar17 = *pdVar1;
  dVar18 = pdVar1[1];
  pdVar1 = (double *)(param_1 + 0x418 + lVar21);
  dVar5 = *pdVar1;
  dVar6 = *pdVar1;
  pdVar1 = (double *)(param_1 + 0x400 + lVar21);
  dVar8 = *pdVar1;
  dVar7 = *pdVar1;
  pdVar1 = (double *)(param_1 + 0x408 + lVar21);
  dVar9 = *pdVar1;
  dVar10 = *pdVar1;
  pdVar1 = (double *)(param_1 + 0x410 + lVar21);
  dVar11 = *pdVar1;
  dVar14 = *pdVar1;
  dVar15 = dVar22 * dVar14 * 1.0 + dVar18 * dVar10 + dVar17 * dVar7 * -1.0 + dVar16 * dVar6;
  auVar13._8_4_ = SUB84(dVar15,0);
  auVar13._0_8_ = dVar16 * dVar11 * -1.0 + dVar17 * dVar9 + dVar18 * dVar8 * 1.0 + dVar22 * dVar5;
  auVar13._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x120 + lVar21) = auVar13;
  pdVar1 = (double *)(param_1 + 0x130 + lVar21);
  *pdVar1 = dVar18 * dVar11 * 1.0 + ((dVar8 * dVar16 * 1.0 + dVar5 * dVar17) - dVar22 * dVar9);
  pdVar1[1] = dVar17 * dVar14 * -1.0 + ((dVar7 * dVar22 * -1.0 + dVar6 * dVar18) - dVar16 * dVar10);
  if ((local_80 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146db786e FUN_146db786e body=229 status=ok
// SIG undefined FUN_146db786e(void)

void FUN_146db786e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  longlong local_98 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(float *)(param_1 + 2) * *(float *)(param_1 + 1) * *(float *)(*param_1 + 0x134) <=
      1.1754944e-38) {
    param_1[0x47] = 0;
    param_1[0x4a] = 0;
    param_1[0x4b] = 0;
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    param_1[0x52] = 0;
    param_1[0x53] = 0;
    param_1[0x54] = 0;
    param_1[0x55] = 0;
    param_1[0x56] = 0;
    param_1[0x57] = 0;
    param_1[0x58] = 0;
    param_1[0x59] = 0x3ff0000000000000;
  }
  else {
    param_1[0x47] = *param_2;
    FUN_14093471c(local_98,param_1 + 0x80);
    plVar2 = local_98;
    plVar3 = param_1 + 0x4a;
    for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
      *plVar3 = *plVar2;
      plVar2 = plVar2 + 1;
      plVar3 = plVar3 + 1;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146db7954 FUN_146db7954 body=230 status=ok
// SIG undefined FUN_146db7954(void)

void FUN_146db7954(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x20) *
      *(float *)(*(longlong *)(param_1 + 0x18) + 0x134) <= 1.1754944e-38) {
    *(undefined8 *)(param_1 + 0x240) = 0;
    *(undefined8 *)(param_1 + 0x2d0) = 0;
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    *(undefined8 *)(param_1 + 0x2e0) = 0;
    *(undefined8 *)(param_1 + 0x2e8) = 0;
    *(undefined8 *)(param_1 + 0x2f0) = 0;
    *(undefined8 *)(param_1 + 0x2f8) = 0;
    *(undefined8 *)(param_1 + 0x300) = 0;
    *(undefined8 *)(param_1 + 0x308) = 0;
    *(undefined8 *)(param_1 + 0x310) = 0;
    *(undefined8 *)(param_1 + 0x318) = 0;
    *(undefined8 *)(param_1 + 800) = 0;
    *(undefined8 *)(param_1 + 0x328) = 0;
    *(undefined8 *)(param_1 + 0x330) = 0;
    *(undefined8 *)(param_1 + 0x338) = 0;
    *(undefined8 *)(param_1 + 0x340) = 0;
    *(undefined8 *)(param_1 + 0x348) = 0x3ff0000000000000;
  }
  else {
    *(undefined8 *)(param_1 + 0x240) = *param_2;
    FUN_14093471c(local_98,param_1 + 0x420);
    puVar2 = local_98;
    puVar3 = (undefined8 *)(param_1 + 0x2d0);
    for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146db7a3c FUN_146db7a3c body=772 status=ok
// SIG undefined FUN_146db7a3c(void)

void FUN_146db7a3c(longlong param_1,double param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  
  if (*(float *)(param_1 + 0x10) <= 0.0) {
LAB_146db7b6f:
    fVar3 = *(float *)(param_1 + 0x28);
    if (fVar3 <= 0.0) {
      return;
    }
    if ((fVar3 == 1.0) && (!NAN(fVar3))) {
      return;
    }
  }
  else {
    dVar4 = (double)*(float *)(param_1 + 0x10);
    if ((dVar4 == param_2) && (!NAN(dVar4) && !NAN(param_2))) goto LAB_146db7b6f;
    dVar4 = param_2 / dVar4;
    *(double *)(param_1 + 0x238) = *(double *)(param_1 + 0x238) * dVar4;
    *(double *)(param_1 + 0x250) = *(double *)(param_1 + 0x250) * dVar4;
    *(double *)(param_1 + 600) = *(double *)(param_1 + 600) * dVar4;
    *(double *)(param_1 + 0x260) = *(double *)(param_1 + 0x260) * dVar4;
    *(double *)(param_1 + 0x270) = *(double *)(param_1 + 0x270) * dVar4;
    *(double *)(param_1 + 0x278) = *(double *)(param_1 + 0x278) * dVar4;
    *(double *)(param_1 + 0x280) = *(double *)(param_1 + 0x280) * dVar4;
    *(double *)(param_1 + 0x290) = *(double *)(param_1 + 0x290) * dVar4;
    *(double *)(param_1 + 0x298) = *(double *)(param_1 + 0x298) * dVar4;
    *(double *)(param_1 + 0x2a0) = dVar4 * *(double *)(param_1 + 0x2a0);
    *(float *)(param_1 + 0x10) = (float)param_2;
    fVar3 = *(float *)(param_1 + 0x28);
    if ((fVar3 <= 0.0) || ((fVar3 == 1.0 && (!NAN(fVar3))))) goto LAB_146db7c6a;
  }
  dVar4 = 1.0 / (double)fVar3;
  *(double *)(param_1 + 0x240) = *(double *)(param_1 + 0x240) * dVar4;
  *(double *)(param_1 + 0x2d0) = *(double *)(param_1 + 0x2d0) * dVar4;
  *(double *)(param_1 + 0x2d8) = *(double *)(param_1 + 0x2d8) * dVar4;
  *(double *)(param_1 + 0x2e0) = *(double *)(param_1 + 0x2e0) * dVar4;
  *(double *)(param_1 + 0x2f0) = *(double *)(param_1 + 0x2f0) * dVar4;
  *(double *)(param_1 + 0x2f8) = *(double *)(param_1 + 0x2f8) * dVar4;
  *(double *)(param_1 + 0x300) = *(double *)(param_1 + 0x300) * dVar4;
  *(double *)(param_1 + 0x310) = *(double *)(param_1 + 0x310) * dVar4;
  *(double *)(param_1 + 0x318) = *(double *)(param_1 + 0x318) * dVar4;
  *(double *)(param_1 + 800) = dVar4 * *(double *)(param_1 + 800);
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
LAB_146db7c6a:
  iVar2 = 0;
  do {
    bVar1 = (char)iVar2 * '\b';
    if ((*(byte *)(param_1 + 0x740) & (byte)(0x40201 >> (bVar1 & 0x1f))) != 0) {
      FUN_146db7d40(param_1,param_1 + 0x480,iVar2,param_3);
    }
    if ((*(byte *)(param_1 + 0xa10) & (byte)(0x40201 >> (bVar1 & 0x1f))) != 0) {
      FUN_146db807c(param_1,param_1 + 0x750,iVar2,param_3);
    }
    if ((*(byte *)(param_1 + 0xce0) & (byte)(0x40201 >> (bVar1 & 0x1f))) != 0) {
      FUN_146db7d40(param_1,param_1 + 0xa20,iVar2,param_3);
    }
    if ((*(byte *)(param_1 + 0xfb0) & (byte)(0x40201 >> (bVar1 & 0x1f))) != 0) {
      FUN_146db807c(param_1,param_1 + 0xcf0,iVar2,param_3);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 3);
  return;
}



// FUNCTION 146db7d40 FUN_146db7d40 body=826 status=ok
// SIG undefined FUN_146db7d40(void)

void FUN_146db7d40(longlong param_1,longlong param_2,uint param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_f8 [32];
  double local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar6 = (ulonglong)param_3;
  dVar1 = *(double *)(param_2 + 0xd8 + uVar6 * 0x18);
  dVar2 = *(double *)(param_2 + 0xe0 + uVar6 * 0x18);
  dVar3 = *(double *)(param_2 + 0xe8 + uVar6 * 0x18);
  lVar7 = uVar6 * 0x30;
  dVar8 = *(double *)(param_2 + 0x48 + lVar7);
  dVar4 = *(double *)(param_2 + 0x50 + lVar7);
  dVar9 = dVar8 * dVar2 - dVar1 * dVar4;
  dVar5 = *(double *)(param_2 + 0x58 + lVar7);
  dVar12 = dVar5 * dVar1 - dVar8 * dVar3;
  dVar10 = dVar4 * dVar3 - dVar2 * dVar5;
  dVar8 = *(double *)(param_2 + 0x60 + lVar7);
  dVar4 = *(double *)(param_2 + 0x68 + lVar7);
  dVar11 = dVar8 * dVar2 - dVar1 * dVar4;
  dVar5 = *(double *)(param_2 + 0x70 + lVar7);
  dVar8 = dVar1 * dVar5 - dVar3 * dVar8;
  dVar1 = dVar4 * dVar3 - dVar2 * dVar5;
  local_98 = *(double *)(param_1 + 0x2a0) * dVar9 +
             *(double *)(param_1 + 0x260) * dVar10 + *(double *)(param_1 + 0x280) * dVar12;
  local_a0 = *(double *)(param_1 + 0x298) * dVar9 +
             *(double *)(param_1 + 600) * dVar10 + *(double *)(param_1 + 0x278) * dVar12;
  local_a8 = *(double *)(param_1 + 0x290) * dVar9 +
             *(double *)(param_1 + 0x250) * dVar10 + *(double *)(param_1 + 0x270) * dVar12;
  local_b0 = *(double *)(param_1 + 800) * dVar11 +
             *(double *)(param_1 + 0x2e0) * dVar1 + *(double *)(param_1 + 0x300) * dVar8;
  local_b8 = *(double *)(param_1 + 0x318) * dVar11 +
             *(double *)(param_1 + 0x2d8) * dVar1 + *(double *)(param_1 + 0x2f8) * dVar8;
  local_c0 = *(double *)(param_1 + 0x310) * dVar11 +
             *(double *)(param_1 + 0x2d0) * dVar1 + *(double *)(param_1 + 0x2f0) * dVar8;
  local_c8 = *(undefined1 *)(param_1 + 0x475);
  local_d8 = local_98 * dVar9 + local_a8 * dVar10 + local_a0 * dVar12 + *(double *)(param_1 + 0x238)
             + *(double *)(param_1 + 0x240) +
             local_b0 * dVar11 + local_c0 * dVar1 + local_b8 * dVar8;
  local_d0 = param_4;
  FUN_146dbb316(param_2,param_3);
  if ((local_90 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146db807c FUN_146db807c body=584 status=ok
// SIG undefined FUN_146db807c(void)

void FUN_146db807c(longlong param_1,longlong param_2,uint param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  undefined1 auStack_c8 [32];
  double local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar4 = (ulonglong)param_3;
  dVar1 = *(double *)(param_2 + 0xd8 + uVar4 * 0x18);
  dVar2 = *(double *)(param_2 + 0xe0 + uVar4 * 0x18);
  dVar3 = *(double *)(param_2 + 0xe8 + uVar4 * 0x18);
  local_68 = *(double *)(param_1 + 0x2a0) * dVar3 +
             *(double *)(param_1 + 0x260) * dVar1 + *(double *)(param_1 + 0x280) * dVar2;
  local_70 = *(double *)(param_1 + 0x298) * dVar3 +
             *(double *)(param_1 + 600) * dVar1 + *(double *)(param_1 + 0x278) * dVar2;
  local_78 = *(double *)(param_1 + 0x290) * dVar3 +
             *(double *)(param_1 + 0x250) * dVar1 + *(double *)(param_1 + 0x270) * dVar2;
  local_80 = *(double *)(param_1 + 800) * dVar3 +
             *(double *)(param_1 + 0x2e0) * dVar1 + *(double *)(param_1 + 0x300) * dVar2;
  local_88 = *(double *)(param_1 + 0x318) * dVar3 +
             *(double *)(param_1 + 0x2d8) * dVar1 + *(double *)(param_1 + 0x2f8) * dVar2;
  local_90 = *(double *)(param_1 + 0x310) * dVar3 +
             *(double *)(param_1 + 0x2d0) * dVar1 + *(double *)(param_1 + 0x2f0) * dVar2;
  local_a8 = local_80 * dVar3 + local_90 * dVar1 + local_88 * dVar2 +
             local_68 * dVar3 + local_78 * dVar1 + local_70 * dVar2;
  local_98 = *(undefined1 *)(param_1 + 0x475);
  local_a0 = param_4;
  FUN_146dbb316(param_2,param_3);
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146db82c6 FUN_146db82c6 body=898 status=ok
// SIG undefined FUN_146db82c6(void)

void FUN_146db82c6(longlong *param_1,double param_2,longlong param_3,longlong param_4,
                  longlong *param_5,longlong *param_6)

{
  longlong lVar1;
  double dVar2;
  longlong lVar3;
  longlong *plVar4;
  double dVar5;
  float fVar6;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 uStack_120;
  double *local_118;
  double *local_110;
  double *local_108;
  double *local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80 [2];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_148;
  plVar4 = param_1 + 6;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *plVar4 = *param_5;
    param_5 = param_5 + 1;
    plVar4 = plVar4 + 1;
  }
  plVar4 = param_1 + 0x12;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *plVar4 = *param_6;
    param_6 = param_6 + 1;
    plVar4 = plVar4 + 1;
  }
  *(float *)(param_1 + 1) = (float)*(double *)(param_4 + 0xf0);
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  *(float *)((longlong)param_1 + 0xc) = (float)*(double *)(param_4 + 0xf0);
  *(undefined1 **)((longlong)param_1 + 0x24) = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 2) = 0x3f800000;
  dVar2 = param_2 * 3600.0 * param_2;
  dVar5 = 1.0;
  if (dVar2 <= 1.0) {
    dVar5 = dVar2;
  }
  param_1[0x6b] = (longlong)(*(double *)(param_3 + 8) * dVar5);
  param_1[0x6c] = (longlong)(dVar5 * *(double *)(param_3 + 0x10));
  *(undefined4 *)(param_1 + 0x8e) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x474) = 1;
  *(undefined2 *)(param_1 + 0x1f8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xfc2) = *(undefined1 *)(param_3 + 0x41);
  *(undefined1 *)((longlong)param_1 + 0x475) = *(undefined1 *)(param_3 + 0x44);
  param_1[0x6a] = 0x3ff0000000000000;
  FUN_146db6f8e(param_1);
  lVar3 = *param_1;
  local_88 = (double)(*(float *)(param_1 + 1) * *(float *)(param_1 + 2) * *(float *)(lVar3 + 0x134))
  ;
  lVar1 = param_1[3];
  local_80[0] = (double)(*(float *)(param_1 + 4) * *(float *)(param_1 + 5) *
                        *(float *)(lVar1 + 0x134));
  fVar6 = *(float *)(param_1 + 2) * *(float *)((longlong)param_1 + 0xc);
  local_a8 = (double)(fVar6 * *(float *)(lVar3 + 0x130));
  local_b0 = (double)(*(float *)(lVar3 + 300) * fVar6);
  local_b8 = (double)(*(float *)(lVar3 + 0x128) * fVar6);
  fVar6 = *(float *)(param_1 + 5) * *(float *)((longlong)param_1 + 0x24);
  local_90 = (double)(fVar6 * *(float *)(lVar1 + 0x130));
  local_98 = (double)(*(float *)(lVar1 + 300) * fVar6);
  local_a0 = (double)(*(float *)(lVar1 + 0x128) * fVar6);
  if (*(char *)(param_4 + 0xfb) == '\x01') {
    local_128 = *(undefined8 *)(param_3 + 0x18);
    uStack_120 = *(undefined8 *)(param_3 + 0x20);
    local_108 = &local_b8;
    local_118 = &local_88;
    local_110 = local_80;
    local_100 = &local_a0;
    local_f8 = local_88;
    local_f0 = local_80[0];
    local_e8 = local_b8;
    local_e0 = local_b0;
    local_d8 = local_a8;
    local_d0 = local_a0;
    local_c8 = local_98;
    local_c0 = local_90;
    FUN_146decf72();
  }
  FUN_146db786e(param_1,&local_88,&local_b8);
  FUN_146db7954(param_1,local_80,&local_a0);
  local_128._0_1_ = 1;
  FUN_146db864a(param_1,param_2,param_3,param_4);
  local_128 = CONCAT71(local_128._1_7_,1);
  FUN_146db8a98(param_1,param_2,param_3,param_4);
  FUN_146db9354(param_1,param_2,param_3,param_4);
  FUN_146db999a(param_1,param_2,param_3,param_4);
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  if ((local_70 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146db864a FUN_146db864a body=806 status=ok
// SIG undefined FUN_146db864a(void)

void FUN_146db864a(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  char param_5)

{
  double dVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  char cVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  ulonglong local_c0;
  char local_b8;
  float *local_b0;
  char local_a3 [3];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(byte *)(param_1 + 0x740) = *(byte *)(param_1 + 0x740) & 0xf8;
  bVar6 = *(byte *)(param_1 + 0x741) & 0xfb;
  *(byte *)(param_1 + 0x741) = bVar6;
  iVar3 = *(int *)(param_4 + 0xfc);
  iVar4 = *(int *)(param_4 + 0x100);
  iVar5 = *(int *)(param_4 + 0x104);
  if ((iVar3 != 0 || iVar4 != 0) || iVar5 != 0) {
    local_a3[0] = iVar3 == 1;
    local_a3[1] = iVar4 == 1;
    local_a3[2] = iVar5 == 1;
    *(byte *)(param_1 + 0x741) =
         ((iVar5 == 2 && iVar4 == 2) & iVar3 == 2 & *(byte *)(param_1 + 0xfc2)) << 2 | bVar6;
    cVar7 = FUN_146decd04(param_3,param_4);
    bVar6 = *(byte *)(param_1 + 0x741);
    *(byte *)(param_1 + 0x741) = bVar6 & 0xfd | cVar7 * '\x02';
    if ((bVar6 & 4) == 0) {
      uVar9 = 0;
      local_b0 = (float *)(param_1 + 0x480);
      do {
        dVar1 = *(double *)(param_3 + 0x48);
        uVar2 = *(ulonglong *)(param_4 + 0xc0);
        uVar12 = FUN_146deca42(param_3,param_4);
        uVar13 = FUN_146deca1c(param_3,param_4);
        if (local_a3[uVar9] == '\x01') {
          uVar8 = FUN_146dec9ec(param_3,param_4);
        }
        else {
          uVar8 = 0;
        }
        uVar10 = -(ulonglong)(dVar1 < 0.0);
        local_c0 = ~uVar10 & (ulonglong)dVar1 | uVar2 & uVar10;
        local_b8 = param_5;
        local_c8 = uVar12;
        FUN_146dba192(local_b0,uVar9 & 0xffffffff,uVar8,uVar13);
        uVar9 = uVar9 + 1;
      } while (uVar9 != 3);
    }
    else {
      uVar9 = -(ulonglong)(*(double *)(param_3 + 0x48) < 0.0);
      fVar11 = (float)(double)(~uVar9 & (ulonglong)*(double *)(param_3 + 0x48) |
                              *(ulonglong *)(param_4 + 0xc0) & uVar9);
      *(float *)(param_1 + 0x480) = fVar11;
      *(float *)(param_1 + 0x484) = fVar11;
      *(float *)(param_1 + 0x488) = fVar11;
      *(float *)(param_1 + 0x48c) = fVar11;
      if (param_5 != '\0') {
        *(undefined8 *)(param_1 + 0x5a0) = 0;
        *(undefined8 *)(param_1 + 0x5a8) = 0;
      }
    }
    if (((iVar3 == 2) || (iVar4 == 2)) || (iVar5 == 2)) {
      if ((*(byte *)(param_1 + 0x741) & 4) == 0) {
        FUN_146dba854(param_1);
      }
      else {
        FUN_146dba342(param_1);
      }
    }
    if (iVar3 == 1) {
      if (iVar4 != 1) {
        if (iVar5 == 1) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_e8);
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_e8);
      }
      if (iVar5 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_e8);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_e8);
    }
    if (iVar4 == 1) {
      if (iVar5 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_e8);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_e8);
    }
    if (iVar5 == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_e8);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146db8a98 FUN_146db8a98 body=2122 status=ok
// SIG undefined FUN_146db8a98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146db8a98(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  char param_5)

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
  char cVar11;
  byte bVar12;
  ulonglong uVar13;
  undefined8 unaff_R12;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  longlong lVar20;
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auStack_158 [32];
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined1 local_109;
  char local_108;
  char local_107;
  char local_106;
  char local_105;
  char local_104;
  byte local_103;
  byte local_102;
  byte local_101;
  longlong local_100;
  undefined1 local_f8 [24];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *(byte *)(param_1 + 0xa10) = *(byte *)(param_1 + 0xa10) & 0xf8;
  *(byte *)(param_1 + 0xa11) = *(byte *)(param_1 + 0xa11) & 0xfb;
  cVar11 = FUN_146dbcd09(param_4,&local_103,&local_106,&local_109);
  if (cVar11 == '\0') goto LAB_146db8b4e;
  cVar11 = FUN_146decd10(param_3,param_4);
  bVar12 = *(byte *)(param_1 + 0xa11) & 0xfd | cVar11 * '\x02';
  *(byte *)(param_1 + 0xa11) = bVar12;
  if ((((*(char *)(param_1 + 0xfc2) == '\x01') && (local_106 == '\x01')) && (local_105 == '\x01'))
     && (local_104 == '\x01')) {
    cVar11 = FUN_146dec9fc(param_3,param_4);
    if (cVar11 == '\0') {
      bVar12 = *(byte *)(param_1 + 0xa11);
      goto LAB_146db8db7;
    }
    cVar11 = FUN_146deca0c(param_3,param_4);
    *(byte *)(param_1 + 0xa11) = *(byte *)(param_1 + 0xa11) & 0xfb | cVar11 * '\x04';
    if (cVar11 != '\0') {
      uVar14 = FUN_146decafc(param_3,param_4);
      uVar15 = FUN_146decafc(param_3,param_4);
      uVar16 = FUN_146deca8c(param_3,param_4);
      *(undefined8 *)(param_1 + 0x9b0) = uVar16;
      *(undefined8 *)(param_1 + 0x9b8) = uVar15;
      *(undefined8 *)(param_1 + 0x9c0) = uVar14;
      uVar14 = FUN_146decb22(param_3,param_4);
      uVar15 = FUN_146decb22(param_3,param_4);
      uVar16 = FUN_146decab2(param_3,param_4);
      *(undefined8 *)(param_1 + 0x998) = uVar16;
      *(undefined8 *)(param_1 + 0x9a0) = uVar15;
      *(undefined8 *)(param_1 + 0x9a8) = uVar14;
      if (param_5 != '\0') {
        *(undefined1 (*) [16])(param_1 + 0x870) = (undefined1  [16])0x0;
      }
      dVar17 = (double)FUN_146decad8(param_3,param_4);
      dVar18 = (double)FUN_146decad8(param_3,param_4);
      dVar19 = (double)FUN_146deca68(param_3,param_4);
      auVar21._0_4_ = (float)dVar19;
      auVar21._4_4_ = (float)dVar18;
      auVar21._8_4_ = (float)dVar17;
      auVar21._12_4_ = 0;
      *(undefined1 (*) [16])(param_1 + 0x750) = auVar21;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_e0 ^ (ulonglong)auStack_158);
    }
  }
  else {
LAB_146db8db7:
    *(byte *)(param_1 + 0xa11) = bVar12 & 0xfb;
  }
  uVar14 = FUN_146deca68(param_3,param_4);
  uVar15 = FUN_146decab2(param_3,param_4);
  uVar16 = FUN_146deca8c(param_3,param_4);
  bVar12 = FUN_146dec9fc(param_3,param_4);
  *(undefined8 *)(param_1 + 0x750) = uVar14;
  *(undefined8 *)(param_1 + 0x768) = uVar16;
  *(undefined8 *)(param_1 + 0x780) = uVar15;
  *(undefined8 *)(param_1 + 0x980) = 0;
  *(undefined8 *)(param_1 + 0x9b0) = uVar16;
  *(undefined8 *)(param_1 + 0x998) = uVar15;
  *(byte *)(param_1 + 0xa10) =
       *(byte *)(param_1 + 0xa10) & 0xb6 | ((local_103 ^ 1) & bVar12) << 6 | 8;
  *(byte *)(param_1 + 0xa11) = *(byte *)(param_1 + 0xa11) & 0xe7;
  if (param_5 != '\0') {
    *(undefined8 *)(param_1 + 0x970) = DAT_14c8464f0;
    uVar14 = DAT_14c8464e8;
    *(undefined8 *)(param_1 + 0x960) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0x968) = uVar14;
    uVar14 = DAT_14c8464e8;
    *(undefined8 *)(param_1 + 0x9f8) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0xa00) = uVar14;
    *(undefined8 *)(param_1 + 0xa08) = DAT_14c8464f0;
    uVar14 = DAT_14c8464e8;
    *(undefined8 *)(param_1 + 0x870) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0x878) = uVar14;
    *(undefined8 *)(param_1 + 0x880) = DAT_14c8464f0;
  }
  uVar14 = FUN_146decad8(param_3,param_4);
  lVar20 = FUN_146decb22(param_3,param_4);
  uVar15 = FUN_146decafc(param_3,param_4);
  bVar12 = FUN_146deca0c(param_3,param_4);
  uVar13 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),local_101) & 0xffffffff;
  local_128 = CONCAT71(local_128._1_7_,param_5);
  local_138 = lVar20;
  local_130 = uVar14;
  FUN_146dba192(param_1 + 0x750,2,CONCAT71((int7)(uVar13 >> 8),((byte)uVar13 ^ 1) & bVar12),uVar15);
  uVar14 = FUN_146decad8(param_3,param_4);
  uVar15 = FUN_146decb22(param_3,param_4);
  uVar16 = FUN_146decafc(param_3,param_4);
  bVar12 = FUN_146deca0c(param_3,param_4);
  *(undefined8 *)(param_1 + 0x758) = uVar14;
  *(undefined8 *)(param_1 + 0x770) = uVar16;
  *(undefined8 *)(param_1 + 0x788) = uVar15;
  *(undefined8 *)(param_1 + 0x988) = 0;
  *(undefined8 *)(param_1 + 0x9b8) = uVar16;
  *(undefined8 *)(param_1 + 0x9a0) = uVar15;
  *(byte *)(param_1 + 0xa10) = *(byte *)(param_1 + 0xa10) & 0x6d | (~local_102 & bVar12) << 7 | 0x10
  ;
  *(byte *)(param_1 + 0xa11) = *(byte *)(param_1 + 0xa11) & 0x9f;
  if (param_5 != '\0') {
    *(undefined8 *)(param_1 + 0x970) = DAT_14c8464f0;
    uVar14 = DAT_14c8464e8;
    *(undefined8 *)(param_1 + 0x960) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0x968) = uVar14;
    uVar14 = DAT_14c8464e8;
    *(undefined8 *)(param_1 + 0x9f8) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0xa00) = uVar14;
    *(undefined8 *)(param_1 + 0xa08) = DAT_14c8464f0;
    uVar14 = DAT_14c8464e8;
    *(undefined8 *)(param_1 + 0x870) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0x878) = uVar14;
    *(undefined8 *)(param_1 + 0x880) = DAT_14c8464f0;
  }
  dVar17 = *(double *)(param_1 + 0x130);
  dVar18 = *(double *)(param_1 + 0x120);
  dVar19 = *(double *)(param_1 + 0x128);
  dVar22 = dVar17 - dVar18 * 0.0;
  dVar6 = dVar18 * 0.0 - dVar19;
  dVar7 = dVar19 * 0.0 + dVar17 * -0.0;
  dVar6 = dVar6 + dVar6;
  dVar22 = dVar22 + dVar22;
  dVar7 = dVar7 + dVar7;
  dVar1 = *(double *)(param_1 + 0x138);
  dVar2 = *(double *)(param_1 + 0x150);
  dVar3 = *(double *)(param_1 + 0x148);
  dVar4 = *(double *)(param_1 + 0x140);
  dVar8 = dVar2 - dVar4 * 0.0;
  dVar9 = dVar4 * 0.0 - dVar3;
  dVar10 = dVar3 * 0.0 + dVar2 * -0.0;
  dVar9 = dVar9 + dVar9;
  dVar8 = dVar8 + dVar8;
  dVar10 = dVar10 + dVar10;
  dVar5 = *(double *)(param_1 + 0x158);
  dVar17 = ((dVar3 * dVar9 - dVar8 * dVar2) + dVar10 * dVar5 + 1.0) *
           ((dVar19 * dVar6 - dVar22 * dVar17) + dVar7 * dVar1 + 1.0) +
           ((dVar2 * dVar10 - dVar9 * dVar4) + dVar5 * dVar8 + 0.0) *
           ((dVar17 * dVar7 - dVar6 * dVar18) + dVar1 * dVar22 + 0.0) +
           ((dVar4 * dVar8 - dVar10 * dVar3) + dVar5 * dVar9 + 0.0) *
           ((dVar18 * dVar22 - dVar7 * dVar19) + dVar1 * dVar6 + 0.0);
  dVar18 = (double)_DAT_14c75f198;
  if (((*(char *)(param_3 + 0x45) == '\x01') && (local_106 == '\x01')) && (dVar18 <= dVar17)) {
    FUN_146deb7c0(param_1 + 0x120,param_1 + 0x140,local_f8,&local_100);
    local_130 = *(undefined8 *)(param_4 + 0x180);
    local_138 = local_100;
    local_120 = 1;
    local_128 = param_2;
    FUN_146dbdc8e(param_1,param_4,0,local_f8);
  }
  if (*(char *)(param_3 + 0x46) != '\x01') goto LAB_146db927f;
  if (local_104 == '\x01') {
    if (local_105 == '\x01') {
      local_138 = CONCAT71(local_138._1_7_,1);
    }
    else {
      if ((local_102 & 1) == 0) {
        if (local_108 != '\x01') goto LAB_146db923b;
        if (dVar17 < dVar18) goto LAB_146db927f;
        goto LAB_146db9349;
      }
      if (dVar17 < dVar18) goto LAB_146db927f;
      local_138 = (ulonglong)local_138._1_7_ << 8;
    }
LAB_146db932f:
    FUN_146dbd4f8(param_1,param_4);
  }
  else {
LAB_146db923b:
    if (((local_101 & 1) == 0) || (local_105 != '\x01')) {
      if ((local_107 == '\x01') && ((local_105 == '\x01' && (dVar18 <= dVar17)))) {
LAB_146db9349:
        FUN_146dbd936(param_1,param_4);
      }
    }
    else if (dVar18 <= dVar17) {
      local_138 = CONCAT71(local_138._1_7_,1);
      goto LAB_146db932f;
    }
  }
LAB_146db927f:
  local_101 = local_101 & *(byte *)(param_3 + 0x46);
  local_102 = local_102 & *(byte *)(param_3 + 0x46);
  if ((((local_103 & *(byte *)(param_3 + 0x45)) != 0) || (local_101 != 0)) || (local_102 != 0)) {
    local_130 = CONCAT71(local_130._1_7_,local_102);
    local_138 = CONCAT71(local_138._1_7_,local_101);
    FUN_146dbd9ec(param_1,param_4);
  }
LAB_146db8b4e:
  if ((local_e0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146db9354 FUN_146db9354 body=1604 status=ok
// SIG undefined FUN_146db9354(void)

void FUN_146db9354(longlong param_1,double param_2,longlong param_3,longlong param_4)

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
  undefined8 uVar11;
  double *pdVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  char cVar19;
  double *pdVar20;
  ulonglong uVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  undefined1 auStack_238 [32];
  double *local_218;
  double local_210;
  undefined1 local_208;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  char local_17b [3];
  double local_178 [17];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  *(byte *)(param_1 + 0xce0) = *(byte *)(param_1 + 0xce0) & 0xf8;
  *(byte *)(param_1 + 0xce1) = *(byte *)(param_1 + 0xce1) & 0xfb;
  if (*(char *)(param_3 + 0x47) == '\x01') {
    if ((*(char *)(param_4 + 0x1d8) == '\0') && (*(char *)(param_4 + 0x1db) != '\x01')) {
      bVar22 = false;
    }
    else {
      bVar22 = *(int *)(param_4 + 0xfc) != 2;
    }
    if ((*(char *)(param_4 + 0x1d9) == '\0') && (*(char *)(param_4 + 0x1dc) != '\x01')) {
      bVar23 = false;
    }
    else {
      bVar23 = *(int *)(param_4 + 0x100) != 2;
    }
    if ((*(char *)(param_4 + 0x1da) == '\0') && (*(char *)(param_4 + 0x1dd) != '\x01')) {
      bVar24 = false;
    }
    else {
      bVar24 = *(int *)(param_4 + 0x104) != 2;
    }
    local_17b[0] = bVar22;
    local_17b[1] = bVar23;
    local_17b[2] = bVar24;
    cVar19 = FUN_146decd1c(param_3,param_4);
    *(byte *)(param_1 + 0xce1) = *(byte *)(param_1 + 0xce1) & 0xfd | cVar19 * '\x02';
    if (((bVar22 != false) || (bVar23 != false)) || (bVar24 != false)) {
      pdVar20 = local_178 + 2;
      local_178[0xe] = 0.0;
      local_178[0xf] = 0.0;
      local_178[0xc] = 0.0;
      local_178[0xd] = 0.0;
      local_178[10] = 0.0;
      local_178[0xb] = 0.0;
      local_178[8] = 0.0;
      local_178[9] = 0.0;
      local_178[6] = 0.0;
      local_178[7] = 0.0;
      local_178[4] = 0.0;
      local_178[5] = 0.0;
      local_178[2] = 0.0;
      local_178[3] = 0.0;
      local_178[0] = 0.0;
      local_178[1] = 0.0;
      FUN_14076d742(param_1 + 0x120,local_178);
      dVar1 = *(double *)(param_4 + 0x1a8);
      dVar2 = *(double *)(param_4 + 0x1b0);
      dVar3 = *(double *)(param_4 + 0x1b8);
      dVar4 = *(double *)(param_1 + 0x130);
      dVar5 = *(double *)(param_1 + 0x120);
      dVar6 = *(double *)(param_1 + 0x128);
      dVar13 = dVar6 * dVar3 - dVar2 * dVar4;
      dVar13 = dVar13 + dVar13;
      dVar7 = *(double *)(param_1 + 0x138);
      dVar17 = dVar5 * dVar2 - dVar1 * dVar6;
      dVar17 = dVar17 + dVar17;
      dVar14 = dVar4 * dVar1 - dVar3 * dVar5;
      dVar14 = dVar14 + dVar14;
      dVar8 = *(double *)(param_4 + 0x1c0);
      dVar9 = *(double *)(param_4 + 0x1c8);
      dVar10 = *(double *)(param_4 + 0x1d0);
      dVar16 = dVar6 * dVar10 - dVar9 * dVar4;
      dVar16 = dVar16 + dVar16;
      dVar18 = dVar5 * dVar9 - dVar8 * dVar6;
      dVar18 = dVar18 + dVar18;
      dVar15 = dVar4 * dVar8 - dVar10 * dVar5;
      dVar15 = dVar15 + dVar15;
      local_188 = (dVar5 * dVar15 - dVar16 * dVar6) + dVar7 * dVar18 + dVar10;
      local_190 = (dVar4 * dVar16 - dVar18 * dVar5) + dVar7 * dVar15 + dVar9;
      local_198 = (dVar6 * dVar18 - dVar15 * dVar4) + dVar7 * dVar16 + dVar8;
      local_1d0 = *(double *)(param_1 + 0x118);
      dVar3 = local_1d0 -
              ((dVar5 * dVar14 - dVar13 * dVar6) + dVar7 * dVar17 + dVar3 +
              *(double *)(param_1 + 0x100));
      local_1e0 = *(double *)(param_1 + 0x108);
      local_1d8 = *(double *)(param_1 + 0x110);
      dVar2 = local_1d8 -
              ((dVar4 * dVar13 - dVar17 * dVar5) + dVar7 * dVar14 + dVar2 +
              *(double *)(param_1 + 0xf8));
      dVar1 = local_1e0 -
              ((dVar6 * dVar17 - dVar14 * dVar4) + dVar13 * dVar7 + dVar1 +
              *(double *)(param_1 + 0xf0));
      local_1b8 = local_1d0 - *(double *)(param_1 + 0x3d8);
      local_1c0 = local_1d8 - *(double *)(param_1 + 0x3d0);
      local_1c8 = local_1e0 - *(double *)(param_1 + 0x3c8);
      local_1d0 = local_1d0 - *(double *)(param_1 + 0x3f0);
      local_1d8 = local_1d8 - *(double *)(param_1 + 1000);
      local_1e0 = local_1e0 - *(double *)(param_1 + 0x3e0);
      local_1b0 = dVar1;
      local_1a8 = dVar2;
      local_1a0 = dVar3;
      FUN_146dbb41e(param_1);
      uVar21 = 0;
      do {
        if (local_17b[uVar21] == '\x01') {
          pdVar12 = (double *)FUN_146decb72(param_3,param_4,uVar21 & 0xffffffff);
          uVar11 = FUN_146decb48(param_3,param_4,uVar21 & 0xffffffff);
          local_208 = 1;
          local_210 = 0.0;
          local_218 = pdVar12;
          FUN_146dba192(param_1 + 0xa20,uVar21 & 0xffffffff,1,uVar11);
          local_1e8 = *pdVar20;
          local_1f8 = pdVar20[-2];
          local_1f0 = pdVar20[-1];
          dVar4 = ABS(local_1e8 * dVar3 + local_1f8 * dVar1 + local_1f0 * dVar2);
          if ((*(double *)(param_1 + 0x358) <= dVar4 && dVar4 != *(double *)(param_1 + 0x358)) ||
             (0.0 < *(double *)(param_1 + 0xa50 + uVar21 * 8))) {
            local_218 = &local_198;
            local_210 = param_2;
            FUN_146dbeb20(param_1,uVar21 & 0xffffffff,&local_1f8,&local_1b0);
          }
          dVar4 = *(double *)(param_4 + 0x218 + uVar21 * 8);
          *(undefined8 *)(param_1 + 0xc50 + uVar21 * 8) = 0;
          if ((0.0 < dVar4) && (dVar4 < 3.4028234663852886e+38)) {
            dVar4 = dVar4 * param_2 * param_2;
            if ((*(byte *)(param_1 + 0xce1) & 2) != 0) {
              dVar4 = dVar4 / *(double *)(param_1 + 0xb70 + uVar21 * 8);
            }
            *(double *)(param_1 + 0xc50 + uVar21 * 8) = dVar4;
          }
        }
        uVar21 = uVar21 + 1;
        pdVar20 = pdVar20 + 4;
      } while (uVar21 != 3);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146db999a FUN_146db999a body=320 status=ok
// SIG undefined FUN_146db999a(void)

void FUN_146db999a(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  bool bVar5;
  
  *(byte *)(param_1 + 0xfb0) = *(byte *)(param_1 + 0xfb0) & 0xf8;
  bVar4 = *(byte *)(param_1 + 0xfb1) & 0xfb;
  *(byte *)(param_1 + 0xfb1) = bVar4;
  if (((((*(char *)(param_4 + 0x26a) != '\0') || (*(char *)(param_4 + 0x26b) != '\0')) ||
       (*(char *)(param_4 + 0x26c) != '\0')) ||
      (((*(char *)(param_4 + 0x26d) != '\0' || (*(char *)(param_4 + 0x268) != '\0')) ||
       (*(char *)(param_4 + 0x269) == '\x01')))) && (*(char *)(param_3 + 0x47) == '\x01')) {
    iVar1 = *(int *)(param_4 + 0x110);
    iVar2 = *(int *)(param_4 + 0x114);
    iVar3 = *(int *)(param_4 + 0x118);
    bVar5 = iVar1 != 2;
    if (*(char *)(param_4 + 0x268) == '\0') {
      if (((iVar2 != 2) && (iVar3 != 2)) && ((iVar1 != 2 && (*(char *)(param_4 + 0x269) != '\0'))))
      goto LAB_146db9aa8;
    }
    else if ((iVar1 != 2 && iVar3 != 2) && iVar2 != 2) {
LAB_146db9aa8:
      *(byte *)(param_1 + 0xfb1) = *(char *)(param_1 + 0xfc2) << 2 | bVar4;
      FUN_146dc07d6();
      return;
    }
    if ((*(char *)(param_4 + 0x26a) == '\0') && (*(char *)(param_4 + 0x26b) != '\x01')) {
      bVar5 = false;
    }
    bVar4 = *(byte *)(param_4 + 0x26d) | *(byte *)(param_4 + 0x26c);
    if (((bVar5) || ((iVar3 != 2 & bVar4) != 0)) || ((bVar4 & iVar2 != 2) != 0)) {
      FUN_146dc1020();
    }
  }
  return;
}



// FUNCTION 146db9ada FUN_146db9ada body=676 status=ok
// SIG undefined FUN_146db9ada(void)

void FUN_146db9ada(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  dVar4 = (double)FUN_146deccbc(param_3,param_4);
  dVar5 = (double)FUN_146decce0(param_3,param_4);
  if (*(byte *)(param_4 + 0xf9) == 1) {
    if (0.0 < dVar4) {
      bVar3 = 0.0 < dVar5;
      bVar2 = true;
      goto LAB_146db9b78;
    }
    bVar2 = 0.0 < *(double *)(param_4 + 0xe0);
  }
  else {
    bVar2 = false;
  }
  bVar3 = (bool)(0.0 < dVar5 & *(byte *)(param_4 + 0xf9));
  if ((bVar3 == false) && (!bVar2)) {
    return;
  }
LAB_146db9b78:
  FUN_146db759c(param_1,0);
  FUN_146db759c(param_1,1);
  dVar4 = (double)(&DAT_149931160)
                  [0.0 <= *(double *)(param_1 + 0x138) * *(double *)(param_1 + 0x158) +
                          *(double *)(param_1 + 0x130) * *(double *)(param_1 + 0x150) +
                          *(double *)(param_1 + 0x120) * *(double *)(param_1 + 0x140) +
                          *(double *)(param_1 + 0x128) * *(double *)(param_1 + 0x148)];
  *(double *)(param_1 + 0x140) = *(double *)(param_1 + 0x140) * dVar4;
  *(double *)(param_1 + 0x148) = *(double *)(param_1 + 0x148) * dVar4;
  *(double *)(param_1 + 0x150) = *(double *)(param_1 + 0x150) * dVar4;
  *(double *)(param_1 + 0x158) = *(double *)(param_1 + 0x158) * dVar4;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0x3ff0000000000000;
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(double *)(param_1 + 0x240) =
       (double)(*(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x28) * *(float *)(lVar1 + 0x134))
  ;
  fVar6 = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x24);
  fVar7 = *(float *)(lVar1 + 0x128) * fVar6;
  fVar8 = *(float *)(lVar1 + 300) * fVar6;
  if (fVar8 <= fVar7) {
    fVar7 = fVar8;
  }
  fVar6 = fVar6 * *(float *)(lVar1 + 0x130);
  if (fVar6 <= fVar7) {
    fVar7 = fVar6;
  }
  dVar4 = (double)fVar7;
  *(double *)(param_1 + 0x2d0) = dVar4;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(double *)(param_1 + 0x2f8) = dVar4;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(double *)(param_1 + 800) = dVar4;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0x3ff0000000000000;
  if (bVar2) {
    FUN_146db864a(param_1,param_2,param_3,param_4,0);
  }
  if (bVar3 != false) {
    FUN_146db8a98(param_1,param_2,param_3,param_4,0);
  }
  return;
}



// FUNCTION 146db9d7e FUN_146db9d7e body=149 status=ok
// SIG undefined FUN_146db9d7e(void)

void FUN_146db9d7e(longlong param_1,undefined4 param_2,undefined8 param_3,longlong param_4)

{
  *(undefined4 *)(param_1 + 0x470) = 0;
  *(undefined8 *)(param_1 + 0x350) = param_3;
  if (*(char *)(param_4 + 0x43) == '\x01') {
    FUN_146db9e14(param_1,param_2);
    FUN_146db9e7e(param_1,param_2);
    FUN_146db9ee8(param_1,param_2);
    FUN_146db9f54(param_1,param_2);
    return;
  }
  FUN_146db9e7e(param_1,param_2);
  FUN_146db9e14(param_1,param_2);
  FUN_146db9f54(param_1,param_2);
  FUN_146db9ee8(param_1,param_2);
  return;
}



// FUNCTION 146db9e14 FUN_146db9e14 body=105 status=ok
// SIG undefined FUN_146db9e14(void)

void FUN_146db9e14(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0xa11) & 4) == 0) {
    iVar1 = 0;
    do {
      if ((*(byte *)(param_1 + 0xa10) & (byte)(0x40201 >> ((char)iVar1 * '\b' & 0x1fU))) != 0) {
        FUN_146dbe188(param_1,iVar1,param_2);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 3);
    return;
  }
  FUN_146dbdebc(param_1);
  return;
}



// FUNCTION 146db9e7e FUN_146db9e7e body=105 status=ok
// SIG undefined FUN_146db9e7e(void)

void FUN_146db9e7e(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x741) & 4) == 0) {
    iVar1 = 0;
    do {
      if ((*(byte *)(param_1 + 0x740) & (byte)(0x40201 >> ((char)iVar1 * '\b' & 0x1fU))) != 0) {
        FUN_146dbbc02(param_1,iVar1,param_2);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 3);
    return;
  }
  FUN_146dbb8c2(param_1);
  return;
}



// FUNCTION 146db9ee8 FUN_146db9ee8 body=108 status=ok
// SIG undefined FUN_146db9ee8(void)

void FUN_146db9ee8(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0xfb1) & 4) == 0) {
    iVar1 = 0;
    do {
      if ((*(byte *)(param_1 + 0xfb0) & (byte)(0x40201 >> ((char)iVar1 * '\b' & 0x1fU))) != 0) {
        FUN_146dc25c6(param_1,iVar1,param_2);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 3);
    return;
  }
  FUN_146dc22da(param_1,param_2);
  return;
}



// FUNCTION 146db9f54 FUN_146db9f54 body=77 status=ok
// SIG undefined FUN_146db9f54(void)

void FUN_146db9f54(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((*(byte *)(param_1 + 0xce0) & (byte)(0x40201 >> ((char)iVar1 * '\b' & 0x1fU))) != 0) {
      FUN_146dbffb0(param_1,iVar1,param_2);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 3);
  return;
}



// FUNCTION 146db9fa2 FUN_146db9fa2 body=127 status=ok
// SIG undefined FUN_146db9fa2(void)

void FUN_146db9fa2(longlong param_1,undefined4 param_2,undefined8 param_3,longlong param_4)

{
  *(undefined8 *)(param_1 + 0x350) = param_3;
  if (*(char *)(param_4 + 0x43) == '\x01') {
    FUN_146dba022(param_1);
    FUN_146dba076(param_1);
    FUN_146dba0e6(param_1,param_2);
    FUN_146dba13c(param_1,param_2);
    return;
  }
  FUN_146dba076(param_1);
  FUN_146dba022(param_1);
  FUN_146dba13c(param_1,param_2);
  FUN_146dba0e6(param_1,param_2);
  return;
}



// FUNCTION 146dba022 FUN_146dba022 body=84 status=ok
// SIG undefined FUN_146dba022(void)

void FUN_146dba022(longlong param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0xa11) & 4) == 0) {
    iVar1 = 0;
    do {
      if ((*(byte *)(param_1 + 0xa10) & (byte)(0x40201 >> ((char)iVar1 * '\b' & 0x1fU))) != 0) {
        FUN_146dbe8de(param_1,iVar1);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 3);
    return;
  }
  FUN_146dbe636(param_1);
  return;
}



// FUNCTION 146dba076 FUN_146dba076 body=112 status=ok
// SIG undefined FUN_146dba076(void)

void FUN_146dba076(longlong param_1)

{
  byte bVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 0x741) & 4) != 0) {
    FUN_146dbc440(param_1);
    return;
  }
  iVar2 = 0;
  do {
    bVar1 = *(byte *)(param_1 + 0x740);
    if ((bVar1 & (byte)(0x40201 >> ((char)iVar2 * '\b' & 0x1fU))) != 0) {
      if (iVar2 == 0) {
        if ((bVar1 & 0x40) != 0) goto LAB_146dba0ca;
      }
      else if (iVar2 == 2) {
        if ((*(byte *)(param_1 + 0x741) & 1) != 0) {
          return;
        }
      }
      else if ((char)bVar1 < '\0') goto LAB_146dba0ca;
      FUN_146dbc858(param_1,iVar2);
    }
LAB_146dba0ca:
    iVar2 = iVar2 + 1;
    if (iVar2 == 3) {
      return;
    }
  } while( true );
}



// FUNCTION 146dba0e6 FUN_146dba0e6 body=86 status=ok
// SIG undefined FUN_146dba0e6(void)

void FUN_146dba0e6(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x475) == '\0') {
    iVar1 = 0;
    do {
      if ((*(byte *)(param_1 + 0xfb0) & (byte)(0x40201 >> ((char)iVar1 * '\b' & 0x1fU))) != 0) {
        FUN_146dc27f4(param_1,iVar1,param_2);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 3);
  }
  return;
}



// FUNCTION 146dba13c FUN_146dba13c body=86 status=ok
// SIG undefined FUN_146dba13c(void)

void FUN_146dba13c(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x475) == '\0') {
    iVar1 = 0;
    do {
      if ((*(byte *)(param_1 + 0xce0) & (byte)(0x40201 >> ((char)iVar1 * '\b' & 0x1fU))) != 0) {
        FUN_146dc036e(param_1,iVar1,param_2);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 3);
  }
  return;
}



// FUNCTION 146dba192 FUN_146dba192 body=431 status=ok
// SIG undefined FUN_146dba192(void)

void FUN_146dba192(undefined8 *param_1,int param_2,byte param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,char param_7)

{
  undefined8 uVar1;
  
  if (param_2 == 2) {
    *(byte *)((longlong)param_1 + 0x2c1) = *(byte *)((longlong)param_1 + 0x2c1) & 0xfe | param_3;
    param_1[2] = param_6;
    param_1[5] = param_4;
    param_1[8] = param_5;
    param_1[0x48] = 0;
    param_1[0x4e] = param_4;
    param_1[0x4b] = param_5;
    *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xdb | 0x20;
    *(byte *)((longlong)param_1 + 0x2c2) = *(byte *)((longlong)param_1 + 0x2c2) & 0xfc;
  }
  else if (param_2 == 1) {
    param_1[1] = param_6;
    param_1[4] = param_4;
    param_1[7] = param_5;
    param_1[0x47] = 0;
    param_1[0x4d] = param_4;
    param_1[0x4a] = param_5;
    *(byte *)(param_1 + 0x58) = (~param_3 << 7 | *(byte *)(param_1 + 0x58) & 0x6d) + 0x90;
    *(byte *)((longlong)param_1 + 0x2c1) = *(byte *)((longlong)param_1 + 0x2c1) & 0x9f;
  }
  else if (param_2 == 0) {
    *param_1 = param_6;
    param_1[3] = param_4;
    param_1[6] = param_5;
    param_1[0x46] = 0;
    param_1[0x4c] = param_4;
    param_1[0x49] = param_5;
    *(byte *)(param_1 + 0x58) = param_3 << 6 | *(byte *)(param_1 + 0x58) & 0xb6 | 8;
    *(byte *)((longlong)param_1 + 0x2c1) = *(byte *)((longlong)param_1 + 0x2c1) & 0xe7;
  }
  else {
    param_1[param_2] = param_6;
    param_1[(longlong)param_2 + 3] = param_4;
    param_1[(longlong)param_2 + 6] = param_5;
    param_1[(longlong)param_2 + 0x46] = 0;
    param_1[(longlong)param_2 + 0x4c] = param_4;
    param_1[(longlong)param_2 + 0x49] = param_5;
  }
  if (param_7 != '\0') {
    param_1[0x44] = DAT_14c8464f0;
    uVar1 = DAT_14c8464e8;
    param_1[0x42] = DAT_14c8464e0;
    param_1[0x43] = uVar1;
    uVar1 = DAT_14c8464e8;
    param_1[0x55] = DAT_14c8464e0;
    param_1[0x56] = uVar1;
    param_1[0x57] = DAT_14c8464f0;
    uVar1 = DAT_14c8464e8;
    param_1[0x24] = DAT_14c8464e0;
    param_1[0x25] = uVar1;
    param_1[0x26] = DAT_14c8464f0;
  }
  return;
}



// FUNCTION 146dba342 FUN_146dba342 body=1296 status=ok
// SIG undefined FUN_146dba342(void)

void FUN_146dba342(longlong param_1)

{
  float *pfVar1;
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
  double dVar17;
  double dVar18;
  longlong lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar25 [16];
  float fVar26;
  double dVar27;
  uint uVar28;
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
  uint uVar41;
  undefined1 auStack_1a8 [40];
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  undefined8 uStack_160;
  ulonglong local_150;
  undefined4 local_148;
  float local_144 [3];
  double local_138 [17];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_168 = *(double *)(param_1 + 0x118);
  dVar10 = local_168 - *(double *)(param_1 + 0x3d8);
  dVar2 = *(double *)(param_1 + 0x110);
  dVar12 = dVar2 - *(double *)(param_1 + 0x3d0);
  dVar3 = *(double *)(param_1 + 0x108);
  dVar11 = dVar3 - *(double *)(param_1 + 0x3c8);
  uStack_160 = 0;
  dVar13 = local_168 - *(double *)(param_1 + 0x100);
  local_170 = *(double *)(param_1 + 0x3f0);
  dVar4 = *(double *)(param_1 + 0xf8);
  local_178 = *(double *)(param_1 + 1000);
  dVar5 = *(double *)(param_1 + 0xf0);
  local_180 = *(double *)(param_1 + 0x3e0);
  local_138[0xe] = 0.0;
  local_138[0xf] = 0.0;
  local_138[0xc] = 0.0;
  local_138[0xd] = 0.0;
  local_138[10] = 0.0;
  local_138[0xb] = 0.0;
  local_138[8] = 0.0;
  local_138[9] = 0.0;
  local_138[6] = 0.0;
  local_138[7] = 0.0;
  local_138[4] = 0.0;
  local_138[5] = 0.0;
  local_138[2] = 0.0;
  local_138[3] = 0.0;
  local_138[0] = 0.0;
  local_138[1] = 0.0;
  FUN_14076d742(param_1 + 0x120);
  local_144[0] = (float)(*(double *)(param_1 + 0x238) + *(double *)(param_1 + 0x240));
  local_144[1] = local_144[0];
  local_144[2] = local_144[0];
  lVar19 = -0xc;
  do {
    dVar6 = local_138[lVar19 + 0xe];
    dVar7 = local_138[lVar19 + 0xc];
    dVar8 = local_138[lVar19 + 0xd];
    dVar27 = dVar13 * dVar6 + (dVar3 - dVar5) * dVar7 + (dVar2 - dVar4) * dVar8;
    dVar9 = -dVar27;
    uVar41 = (uint)((ulonglong)dVar7 >> 0x20);
    uVar28 = (uint)((ulonglong)dVar8 >> 0x20);
    if (dVar27 < dVar9) {
      uVar28 = uVar28 ^ 0x80000000;
      uVar41 = uVar41 ^ 0x80000000;
    }
    dVar11 = dVar11 - dVar7 * dVar27;
    dVar12 = dVar12 - dVar8 * dVar27;
    dVar10 = dVar10 - dVar6 * dVar27;
    dVar14 = dVar9;
    if (dVar9 <= dVar27) {
      dVar14 = dVar27;
    }
    *(float *)((longlong)local_144 + lVar19) = (float)dVar14;
    auVar21._4_4_ = (float)(double)CONCAT44(uVar28,SUB84(dVar8,0));
    auVar21._0_4_ = (float)(double)CONCAT44(uVar41,SUB84(dVar7,0));
    auVar21._8_4_ =
         (float)(double)(~-(ulonglong)(dVar27 < dVar9) & (ulonglong)dVar6 |
                        (ulonglong)-dVar6 & -(ulonglong)(dVar27 < dVar9));
    auVar21._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0x500 + lVar19 * 4) = auVar21;
    lVar19 = lVar19 + 4;
  } while (lVar19 != 0);
  auVar20._8_8_ = 0;
  auVar20._0_8_ = local_150;
  auVar21 = insertps(auVar20,local_148,0x28);
  *(undefined1 (*) [16])(param_1 + 0x590) = auVar21;
  fVar24 = (float)dVar10;
  auVar22._0_4_ = (float)dVar11;
  auVar22._4_4_ = (float)dVar12;
  auVar22._8_4_ = fVar24;
  auVar22._12_4_ = 0;
  fVar26 = (float)(local_168 - local_170);
  *(undefined1 (*) [16])(param_1 + 0x4b0) = auVar22;
  auVar25._0_4_ = (float)(dVar3 - local_180);
  auVar25._4_4_ = (float)(dVar2 - local_178);
  auVar25._8_4_ = fVar26;
  auVar25._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x4c0) = auVar25;
  dVar2 = *(double *)(param_1 + 0x260);
  dVar3 = *(double *)(param_1 + 0x280);
  dVar4 = *(double *)(param_1 + 0x2a0);
  dVar5 = *(double *)(param_1 + 0x2e0);
  dVar12 = *(double *)(param_1 + 0x250);
  dVar13 = *(double *)(param_1 + 600);
  dVar6 = *(double *)(param_1 + 0x270);
  dVar7 = *(double *)(param_1 + 0x278);
  dVar8 = *(double *)(param_1 + 0x290);
  dVar9 = *(double *)(param_1 + 0x298);
  dVar27 = *(double *)(param_1 + 0x2d0);
  dVar14 = *(double *)(param_1 + 0x2d8);
  dVar10 = *(double *)(param_1 + 0x300);
  dVar15 = *(double *)(param_1 + 0x2f0);
  dVar16 = *(double *)(param_1 + 0x2f8);
  dVar11 = *(double *)(param_1 + 800);
  dVar17 = *(double *)(param_1 + 0x310);
  dVar18 = *(double *)(param_1 + 0x318);
  lVar19 = 0;
  do {
    pfVar1 = (float *)(param_1 + 0x4d0 + lVar19 * 4);
    fVar30 = *pfVar1;
    fVar31 = pfVar1[1];
    fVar32 = pfVar1[2];
    fVar35 = auVar22._0_4_ * fVar31 - auVar22._4_4_ * fVar30;
    fVar37 = auVar22._4_4_ * fVar32 - fVar24 * fVar31;
    fVar39 = fVar24 * fVar30 - auVar22._0_4_ * fVar32;
    fVar36 = fVar35 * (float)dVar8 + fVar39 * (float)dVar6 + fVar37 * (float)dVar12;
    fVar38 = fVar35 * (float)dVar9 + fVar39 * (float)dVar7 + fVar37 * (float)dVar13;
    fVar40 = fVar35 * (float)dVar4 + fVar39 * (float)dVar3 + fVar37 * (float)dVar2;
    fVar29 = fVar31 * auVar25._0_4_ - fVar30 * auVar25._4_4_;
    fVar31 = fVar32 * auVar25._4_4_ - fVar31 * fVar26;
    fVar33 = fVar30 * fVar26 - fVar32 * auVar25._0_4_;
    fVar30 = fVar29 * (float)dVar17 + fVar33 * (float)dVar15 + fVar31 * (float)dVar27;
    fVar32 = fVar29 * (float)dVar18 + fVar33 * (float)dVar16 + fVar31 * (float)dVar14;
    fVar34 = fVar29 * (float)dVar11 + fVar33 * (float)dVar10 + fVar31 * (float)dVar5;
    *(float *)((longlong)local_144 + lVar19) =
         fVar35 * fVar40 + fVar37 * fVar36 + fVar39 * fVar38 +
         fVar29 * fVar34 + fVar31 * fVar30 + fVar33 * fVar32 +
         *(float *)((longlong)local_144 + lVar19);
    pfVar1 = (float *)(param_1 + 0x530 + lVar19 * 8);
    *pfVar1 = fVar36;
    pfVar1[1] = fVar38;
    pfVar1[2] = fVar40;
    pfVar1[3] = fVar35 * 0.0 + fVar39 * 0.0 + fVar37 * 0.0;
    pfVar1 = (float *)(param_1 + 0x540 + lVar19 * 8);
    *pfVar1 = 0.0 - fVar30;
    pfVar1[1] = 0.0 - fVar32;
    pfVar1[2] = 0.0 - fVar34;
    pfVar1[3] = 0.0 - (fVar29 * 0.0 + fVar33 * 0.0 + fVar31 * 0.0);
    lVar19 = lVar19 + 4;
  } while (lVar19 != 0xc);
  auVar23._4_4_ = local_144[1];
  auVar23._0_4_ = local_144[0];
  auVar23._8_4_ = local_144[2];
  auVar23._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x520) = auVar23;
  if ((local_b0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146dba854 FUN_146dba854 body=748 status=ok
// SIG undefined FUN_146dba854(void)

void FUN_146dba854(longlong param_1,undefined8 param_2,longlong param_3)

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
  longlong lVar13;
  ulonglong uVar14;
  double dVar15;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  double *local_1c8;
  double *local_1c0;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  double local_198 [4];
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148 [17];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  dVar1 = *(double *)(param_1 + 0x118);
  dVar10 = dVar1 - *(double *)(param_1 + 0x3d8);
  dVar2 = *(double *)(param_1 + 0x110);
  dVar11 = dVar2 - *(double *)(param_1 + 0x3d0);
  dVar3 = *(double *)(param_1 + 0x108);
  dVar12 = dVar3 - *(double *)(param_1 + 0x3c8);
  local_168 = dVar1 - *(double *)(param_1 + 0x3f0);
  local_170 = dVar2 - *(double *)(param_1 + 1000);
  local_178 = dVar3 - *(double *)(param_1 + 0x3e0);
  dVar4 = *(double *)(param_1 + 0x100);
  dVar5 = *(double *)(param_1 + 0xf8);
  dVar6 = *(double *)(param_1 + 0xf0);
  local_148[0xe] = 0.0;
  local_148[0xf] = 0.0;
  local_148[0xc] = 0.0;
  local_148[0xd] = 0.0;
  local_148[10] = 0.0;
  local_148[0xb] = 0.0;
  local_148[8] = 0.0;
  local_148[9] = 0.0;
  local_148[6] = 0.0;
  local_148[7] = 0.0;
  local_148[4] = 0.0;
  local_148[5] = 0.0;
  local_148[2] = 0.0;
  local_148[3] = 0.0;
  local_148[0] = 0.0;
  local_148[1] = 0.0;
  FUN_14076d742(param_1 + 0x120);
  local_198[2] = (double)DAT_14c8464f0;
  local_198[0] = DAT_14c8464e0;
  local_198[1] = (double)DAT_14c8464e8;
  lVar13 = 0;
  do {
    if (*(int *)(param_3 + lVar13) == 2) {
      dVar7 = local_148[lVar13 + 2];
      dVar8 = local_148[lVar13];
      dVar9 = local_148[lVar13 + 1];
      dVar15 = (dVar1 - dVar4) * dVar7 + (dVar3 - dVar6) * dVar8 + (dVar2 - dVar5) * dVar9;
      *(double *)((longlong)local_198 + lVar13 * 2) = dVar15;
      dVar12 = dVar12 - dVar15 * dVar8;
      dVar11 = dVar11 - dVar9 * dVar15;
      dVar10 = dVar10 - dVar7 * dVar15;
    }
    lVar13 = lVar13 + 4;
  } while (lVar13 != 0xc);
  local_160 = dVar12;
  local_158 = dVar11;
  local_150 = dVar10;
  FUN_146dbb41e(param_1,&local_160,&local_178);
  lVar13 = 0;
  uVar14 = 0;
  do {
    if (*(int *)(param_3 + uVar14 * 4) == 2) {
      local_1a0 = *(undefined8 *)((longlong)local_148 + lVar13 * 4 + 0x10);
      local_1b0 = *(undefined8 *)((longlong)local_148 + lVar13 * 4);
      uStack_1a8 = *(undefined8 *)((longlong)local_148 + lVar13 * 4 + 8);
      local_1d8 = 0;
      local_1e8 = 0;
      local_1d0 = 2;
      local_1e0 = param_2;
      local_1c8 = &local_160;
      local_1c0 = &local_178;
      FUN_146dbb586(param_1,uVar14 & 0xffffffff,&local_1b0,(longlong)local_198 + lVar13);
    }
    uVar14 = uVar14 + 1;
    lVar13 = lVar13 + 8;
  } while (lVar13 != 0x18);
  if ((local_c0 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dbb316 FUN_146dbb316 body=263 status=ok
// SIG undefined FUN_146dbb316(void)

void FUN_146dbb316(longlong param_1,uint param_2,undefined8 *param_3,ulonglong *param_4,
                  double param_5,double param_6,char param_7)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  byte bVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  uVar7 = (ulonglong)param_2;
  *(double *)(param_1 + 0x150 + uVar7 * 8) = param_5;
  lVar8 = uVar7 * 0x30;
  *(undefined8 *)(param_1 + 0x178 + lVar8) = param_3[2];
  uVar6 = param_3[1];
  puVar1 = (undefined8 *)(param_1 + 0x168 + lVar8);
  *puVar1 = *param_3;
  puVar1[1] = uVar6;
  uVar3 = param_4[2];
  uVar5 = param_4[1];
  puVar2 = (ulonglong *)(param_1 + 0x180 + lVar8);
  *puVar2 = *param_4 ^ 0x8000000000000000;
  puVar2[1] = uVar5 ^ 0x8000000000000000;
  *(ulonglong *)(param_1 + 400 + lVar8) = uVar3 ^ 0x8000000000000000;
  if (param_2 == 0) {
    bVar4 = *(byte *)(param_1 + 0x2c0) & 0x40;
  }
  else {
    if (param_2 != 2) {
      if (-1 < *(char *)(param_1 + 0x2c0)) {
        return;
      }
      goto LAB_146dbb397;
    }
    bVar4 = *(byte *)(param_1 + 0x2c1) & 1;
  }
  if (bVar4 == 0) {
    return;
  }
LAB_146dbb397:
  dVar9 = 1.0;
  if ((*(byte *)(param_1 + 0x2c1) & 2) != 0) {
    dVar9 = 1.0 / param_5;
  }
  dVar10 = *(double *)(param_1 + 0x260 + uVar7 * 8) * dVar9 * param_6 * param_6;
  *(double *)(param_1 + 0x18 + uVar7 * 8) = dVar10;
  dVar11 = 0.0;
  if (param_7 != '\0') {
    dVar11 = dVar9 * *(double *)(param_1 + 0x248 + uVar7 * 8) * param_6;
  }
  *(double *)(param_1 + 0x30 + uVar7 * 8) = dVar11;
  *(double *)(param_1 + 0x138 + uVar7 * 8) = (dVar10 + dVar11) * param_5 + 1.0;
  return;
}



// FUNCTION 146dbb41e FUN_146dbb41e body=359 status=ok
// SIG undefined FUN_146dbb41e(void)

void FUN_146dbb41e(longlong *param_1,double *param_2,double *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  longlong lVar17;
  longlong lVar18;
  
  lVar17 = *param_1;
  lVar18 = param_1[3];
  fVar1 = *(float *)(lVar17 + 0x28);
  fVar2 = *(float *)(lVar17 + 0x24);
  fVar3 = *(float *)(lVar17 + 0x38);
  fVar4 = *(float *)(lVar17 + 0x34);
  fVar5 = *(float *)(lVar17 + 0x30);
  dVar11 = *param_2;
  dVar12 = param_2[1];
  dVar13 = param_2[2];
  fVar6 = *(float *)(lVar18 + 0x28);
  fVar7 = *(float *)(lVar18 + 0x24);
  fVar8 = *(float *)(lVar18 + 0x38);
  fVar9 = *(float *)(lVar18 + 0x34);
  fVar10 = *(float *)(lVar18 + 0x30);
  dVar14 = *param_3;
  dVar15 = param_3[1];
  dVar16 = param_3[2];
  param_1[0x44] =
       (longlong)
       ((((double)fVar9 * dVar16 - dVar15 * (double)fVar8) + (double)*(float *)(lVar18 + 0x20)) -
       (((double)fVar4 * dVar13 - dVar12 * (double)fVar3) + (double)*(float *)(lVar17 + 0x20)));
  param_1[0x45] =
       (longlong)
       ((((double)fVar8 * dVar14 - (double)fVar10 * dVar16) + (double)fVar7) -
       (((double)fVar3 * dVar11 - (double)fVar5 * dVar13) + (double)fVar2));
  param_1[0x46] =
       (longlong)
       ((((double)fVar10 * dVar15 - dVar14 * (double)fVar9) + (double)fVar6) -
       (((double)fVar5 * dVar12 - dVar11 * (double)fVar4) + (double)fVar1));
  return;
}



// FUNCTION 146dbb586 FUN_146dbb586 body=553 status=ok
// SIG undefined FUN_146dbb586(void)

void FUN_146dbb586(longlong param_1,uint param_2,undefined8 *param_3,double *param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,int param_8,
                  undefined8 *param_9,undefined4 *param_10)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  double dVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  byte bVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  dVar3 = *param_4;
  if (0.0 <= dVar3) {
    uVar9 = (undefined4)*param_3;
    uVar10 = (uint)((ulonglong)*param_3 >> 0x20);
    uVar13 = (undefined4)param_3[1];
    uVar14 = (uint)((ulonglong)param_3[1] >> 0x20);
    uVar11 = (undefined4)param_3[2];
    uVar12 = (uint)((ulonglong)param_3[2] >> 0x20);
  }
  else {
    uVar9 = *(undefined4 *)param_3;
    uVar13 = *(undefined4 *)(param_3 + 1);
    uVar11 = *(undefined4 *)(param_3 + 2);
    uVar12 = *(uint *)((longlong)param_3 + 0x14) ^ 0x80000000;
    uVar14 = *(uint *)((longlong)param_3 + 0xc) ^ 0x80000000;
    uVar10 = *(uint *)((longlong)param_3 + 4) ^ 0x80000000;
  }
  uVar15 = (undefined4)param_5;
  uVar16 = (undefined4)((ulonglong)param_5 >> 0x20);
  FUN_146dbb7b0(param_1 + 0x480,param_2,param_8);
  bVar6 = (char)param_2 * '\b';
  uVar5 = (ulonglong)param_2;
  if (param_8 == 2) {
    *(undefined8 *)(param_1 + 0x5a0 + uVar5 * 8) = 0;
    bVar6 = (byte)(0xdbedf6 >> (bVar6 & 0x1f)) & *(byte *)(param_1 + 0x740) |
            (byte)(0x40201 >> (bVar6 & 0x1f));
    uVar15 = 0;
    uVar16 = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x5a0 + uVar5 * 8) = param_7;
    bVar6 = (byte)(0x241209 >> (bVar6 & 0x1f)) | *(byte *)(param_1 + 0x740);
  }
  uVar8 = (int)((ulonglong)-dVar3 >> 0x20);
  if (-dVar3 <= dVar3) {
    uVar8 = (int)((ulonglong)dVar3 >> 0x20);
  }
  *(byte *)(param_1 + 0x740) = bVar6;
  *(ulonglong *)(param_1 + 0x678 + uVar5 * 8) = CONCAT44(uVar8,SUB84(dVar3,0));
  *(undefined8 *)(param_1 + 0x6f8 + uVar5 * 8) = 0;
  *(ulonglong *)(param_1 + 0x710 + uVar5 * 8) = CONCAT44(uVar16,uVar15);
  lVar7 = uVar5 * 0x30;
  *(undefined8 *)(param_1 + 0x4d8 + lVar7) = param_9[2];
  uVar4 = param_9[1];
  puVar1 = (undefined8 *)(param_1 + 0x4c8 + lVar7);
  *puVar1 = *param_9;
  puVar1[1] = uVar4;
  uVar15 = param_10[1];
  uVar16 = param_10[2];
  uVar8 = param_10[3];
  puVar2 = (undefined4 *)(param_1 + 0x4e0 + lVar7);
  *puVar2 = *param_10;
  puVar2[1] = uVar15;
  puVar2[2] = uVar16;
  puVar2[3] = uVar8;
  *(undefined8 *)(param_1 + 0x4f0 + lVar7) = *(undefined8 *)(param_10 + 4);
  *(ulonglong *)(param_1 + 0x558 + uVar5 * 0x18) = CONCAT44(uVar10,uVar9);
  *(ulonglong *)(param_1 + 0x560 + uVar5 * 0x18) = CONCAT44(uVar14,uVar13);
  *(ulonglong *)(param_1 + 0x568 + uVar5 * 0x18) = CONCAT44(uVar12,uVar11);
  *(double *)(param_1 + 0x440 + uVar5 * 8) =
       (double)CONCAT44(uVar12,uVar11) * *(double *)(param_1 + 0x230) +
       (double)CONCAT44(uVar10,uVar9) * *(double *)(param_1 + 0x220) +
       (double)CONCAT44(uVar14,uVar13) * *(double *)(param_1 + 0x228);
  FUN_146db7d40(param_1,param_1 + 0x480,param_2,param_6);
  return;
}



// FUNCTION 146dbb7b0 FUN_146dbb7b0 body=72 status=ok
// SIG undefined FUN_146dbb7b0(void)

void FUN_146dbb7b0(longlong param_1,int param_2,byte param_3)

{
  byte bVar1;
  
  if (param_2 != 2) {
    if (param_2 == 1) {
      param_3 = param_3 << 5;
      bVar1 = *(byte *)(param_1 + 0x2c1) & 0x9f;
    }
    else {
      param_3 = (param_3 & 3) << 3;
      bVar1 = *(byte *)(param_1 + 0x2c1) & 0xe7;
    }
    *(byte *)(param_1 + 0x2c1) = bVar1 | param_3;
    return;
  }
  *(byte *)(param_1 + 0x2c2) = *(byte *)(param_1 + 0x2c2) & 0xfc | param_3 & 3;
  return;
}



// FUNCTION 146dbb7f8 FUN_146dbb7f8 body=201 status=ok
// SIG undefined FUN_146dbb7f8(void)

void FUN_146dbb7f8(longlong param_1,uint param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,char param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  byte bVar4;
  longlong lVar5;
  
  bVar4 = *(byte *)(param_1 + 0x2c0);
  if (param_2 == 2) {
    bVar4 = param_6 << 5 | bVar4 & 0xdb | 4;
  }
  else if (param_2 == 1) {
    bVar4 = param_6 << 4 | bVar4 & 0xed | 2;
  }
  else {
    bVar4 = (param_6 << 3 | bVar4 & 0xf6) + 1;
  }
  *(byte *)(param_1 + 0x2c0) = bVar4;
  uVar3 = (ulonglong)param_2;
  *(undefined8 *)(param_1 + 0x1f8 + uVar3 * 8) = param_4;
  *(undefined8 *)(param_1 + 0x278 + uVar3 * 8) = param_9;
  *(undefined8 *)(param_1 + 0x290 + uVar3 * 8) = param_5;
  lVar5 = uVar3 * 0x30;
  *(undefined8 *)(param_1 + 0x58 + lVar5) = param_7[2];
  uVar2 = param_7[1];
  puVar1 = (undefined8 *)(param_1 + 0x48 + lVar5);
  *puVar1 = *param_7;
  puVar1[1] = uVar2;
  *(undefined8 *)(param_1 + 0x70 + lVar5) = param_8[2];
  uVar2 = param_8[1];
  puVar1 = (undefined8 *)(param_1 + 0x60 + lVar5);
  *puVar1 = *param_8;
  puVar1[1] = uVar2;
  *(undefined8 *)(param_1 + 0xe8 + uVar3 * 0x18) = param_3[2];
  uVar2 = param_3[1];
  puVar1 = (undefined8 *)(param_1 + 0xd8 + uVar3 * 0x18);
  *puVar1 = *param_3;
  puVar1[1] = uVar2;
  return;
}



// FUNCTION 146dbb8c2 FUN_146dbb8c2 body=831 status=ok
// SIG undefined FUN_146dbb8c2(void)

void FUN_146dbb8c2(longlong *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  float fVar7;
  float fVar8;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar9;
  float fVar10;
  float fVar12;
  float fVar13;
  undefined1 auVar11 [16];
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_d8 [32];
  float afStack_b8 [24];
  float local_58 [4];
  float local_48;
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  pfVar2 = (float *)*param_1;
  pfVar3 = (float *)param_1[3];
  auVar5 = insertps(ZEXT416((uint)*pfVar2),pfVar2[1],0x10);
  auVar6 = insertps(ZEXT416((uint)*pfVar3),pfVar3[1],0x10);
  auVar15 = insertps(ZEXT416((uint)pfVar2[4]),pfVar2[5],0x10);
  auVar16 = insertps(ZEXT416((uint)pfVar3[4]),pfVar3[5],0x10);
  auVar11._0_4_ =
       ((*(float *)(param_1 + 0x99) * auVar16._4_4_ -
        pfVar3[6] * *(float *)((longlong)param_1 + 0x4c4)) -
       (*(float *)(param_1 + 0x97) * auVar15._4_4_ -
       pfVar2[6] * *(float *)((longlong)param_1 + 0x4b4))) + (auVar6._0_4_ - auVar5._0_4_);
  auVar11._4_4_ =
       ((*(float *)(param_1 + 0x98) * pfVar3[6] - auVar16._0_4_ * *(float *)(param_1 + 0x99)) -
       (*(float *)(param_1 + 0x96) * pfVar2[6] - auVar15._0_4_ * *(float *)(param_1 + 0x97))) +
       (auVar6._4_4_ - auVar5._4_4_);
  auVar11._8_4_ =
       ((*(float *)((longlong)param_1 + 0x4c4) * auVar16._0_4_ -
        auVar16._4_4_ * *(float *)(param_1 + 0x98)) -
       (*(float *)((longlong)param_1 + 0x4b4) * auVar15._0_4_ -
       auVar15._4_4_ * *(float *)(param_1 + 0x96))) + (pfVar3[2] - pfVar2[2]);
  auVar11._12_4_ =
       ((*(float *)((longlong)param_1 + 0x4cc) * 0.0 - *(float *)((longlong)param_1 + 0x4cc) * 0.0)
       - (*(float *)((longlong)param_1 + 0x4bc) * 0.0 - *(float *)((longlong)param_1 + 0x4bc) * 0.0)
       ) + 0.0;
  lVar4 = 0;
  do {
    auVar5 = dpps(*(undefined1 (*) [16])((longlong)param_1 + lVar4 + 0x4d0),auVar11,0xff);
    *(undefined1 (*) [16])((longlong)local_58 + lVar4) = auVar5;
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x30);
  fVar9 = (float)(double)param_1[0x6a];
  auVar5._0_4_ = fVar9 * *(float *)(param_1 + 0x90) * (local_58[0] + *(float *)(param_1 + 0xb2));
  auVar5._4_4_ = fVar9 * *(float *)((longlong)param_1 + 0x484) *
                 (local_48 + *(float *)((longlong)param_1 + 0x594));
  auVar5._8_4_ = fVar9 * *(float *)(param_1 + 0x91) * ((float)local_38 + *(float *)(param_1 + 0xb3))
  ;
  auVar5._12_4_ =
       fVar9 * *(float *)((longlong)param_1 + 0x48c) *
       ((float)((ulonglong)local_38 >> 0x20) + *(float *)((longlong)param_1 + 0x59c));
  auVar5 = divps(auVar5,*(undefined1 (*) [16])(param_1 + 0xa4));
  afStack_b8[0xc] = auVar5._0_4_;
  afStack_b8[0x10] = auVar5._4_4_;
  afStack_b8[0x14] = auVar5._8_4_;
  *(float *)(param_1 + 0xb4) = *(float *)(param_1 + 0xb4) + afStack_b8[0xc];
  *(float *)((longlong)param_1 + 0x5a4) = *(float *)((longlong)param_1 + 0x5a4) + afStack_b8[0x10];
  *(float *)(param_1 + 0xb5) = *(float *)(param_1 + 0xb5) + afStack_b8[0x14];
  *(float *)((longlong)param_1 + 0x5ac) = *(float *)((longlong)param_1 + 0x5ac) + auVar5._12_4_;
  afStack_b8[0xd] = afStack_b8[0xc];
  afStack_b8[0xe] = afStack_b8[0xc];
  afStack_b8[0xf] = afStack_b8[0xc];
  afStack_b8[0x11] = afStack_b8[0x10];
  afStack_b8[0x12] = afStack_b8[0x10];
  afStack_b8[0x13] = afStack_b8[0x10];
  afStack_b8[0x15] = afStack_b8[0x14];
  afStack_b8[0x16] = afStack_b8[0x14];
  afStack_b8[0x17] = afStack_b8[0x14];
  lVar4 = 0;
  do {
    pfVar1 = (float *)((longlong)param_1 + lVar4 + 0x4d0);
    fVar9 = pfVar1[1];
    fVar7 = pfVar1[2];
    fVar8 = pfVar1[3];
    *(float *)((longlong)afStack_b8 + lVar4) =
         *(float *)((longlong)afStack_b8 + lVar4 + 0x30) * *pfVar1;
    *(float *)((longlong)afStack_b8 + lVar4 + 4) =
         *(float *)((longlong)afStack_b8 + lVar4 + 0x34) * fVar9;
    *(float *)((longlong)afStack_b8 + lVar4 + 8) =
         *(float *)((longlong)afStack_b8 + lVar4 + 0x38) * fVar7;
    *(float *)((longlong)afStack_b8 + lVar4 + 0xc) =
         *(float *)((longlong)afStack_b8 + lVar4 + 0x3c) * fVar8;
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x30);
  if (1.1754944e-38 < *(float *)(param_1 + 2) * *(float *)(param_1 + 1) * pfVar2[0x4d]) {
    fVar14 = (float)(double)param_1[0x47];
    fVar10 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    lVar4 = 0;
    fVar9 = 0.0;
    fVar7 = 0.0;
    fVar8 = 0.0;
    do {
      pfVar3 = (float *)((longlong)param_1 + lVar4 * 2 + 0x530);
      fVar10 = fVar10 + *(float *)((longlong)afStack_b8 + lVar4) * fVar14;
      fVar12 = fVar12 + *(float *)((longlong)afStack_b8 + lVar4 + 4) * fVar14;
      fVar13 = fVar13 + *(float *)((longlong)afStack_b8 + lVar4 + 8) * fVar14;
      fVar9 = fVar9 + *(float *)((longlong)afStack_b8 + lVar4 + 0x30) * *pfVar3;
      fVar7 = fVar7 + *(float *)((longlong)afStack_b8 + lVar4 + 0x34) * pfVar3[1];
      fVar8 = fVar8 + *(float *)((longlong)afStack_b8 + lVar4 + 0x38) * pfVar3[2];
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != 0x30);
    *pfVar2 = fVar10 + *pfVar2;
    pfVar2[1] = fVar12 + pfVar2[1];
    pfVar2[2] = fVar13 + pfVar2[2];
    lVar4 = *param_1;
    *(float *)(lVar4 + 0x10) = fVar9 + *(float *)(lVar4 + 0x10);
    *(float *)(lVar4 + 0x14) = fVar7 + *(float *)(lVar4 + 0x14);
    *(float *)(lVar4 + 0x18) = fVar8 + *(float *)(lVar4 + 0x18);
    pfVar3 = (float *)param_1[3];
  }
  if (1.1754944e-38 < *(float *)(param_1 + 5) * *(float *)(param_1 + 4) * pfVar3[0x4d]) {
    fVar10 = (float)(double)param_1[0x48];
    fVar9 = 0.0;
    fVar7 = 0.0;
    fVar8 = 0.0;
    lVar4 = 0;
    auVar5 = ZEXT816(0);
    do {
      pfVar2 = (float *)((longlong)param_1 + lVar4 * 2 + 0x540);
      fVar9 = fVar9 - *(float *)((longlong)afStack_b8 + lVar4) * fVar10;
      fVar7 = fVar7 - *(float *)((longlong)afStack_b8 + lVar4 + 4) * fVar10;
      fVar8 = fVar8 - *(float *)((longlong)afStack_b8 + lVar4 + 8) * fVar10;
      auVar6._0_4_ = auVar5._0_4_ + *(float *)((longlong)afStack_b8 + lVar4 + 0x30) * *pfVar2;
      auVar6._4_4_ = auVar5._4_4_ + *(float *)((longlong)afStack_b8 + lVar4 + 0x34) * pfVar2[1];
      auVar6._8_4_ = auVar5._8_4_ + *(float *)((longlong)afStack_b8 + lVar4 + 0x38) * pfVar2[2];
      auVar6._12_4_ = auVar5._12_4_ + *(float *)((longlong)afStack_b8 + lVar4 + 0x3c) * pfVar2[3];
      lVar4 = lVar4 + 0x10;
      auVar5 = auVar6;
    } while (lVar4 != 0x30);
    *pfVar3 = fVar9 + *pfVar3;
    pfVar3[1] = fVar7 + pfVar3[1];
    pfVar3[2] = fVar8 + pfVar3[2];
    lVar4 = param_1[3];
    *(float *)(lVar4 + 0x10) = auVar6._0_4_ + *(float *)(lVar4 + 0x10);
    *(float *)(lVar4 + 0x14) = auVar6._4_4_ + *(float *)(lVar4 + 0x14);
    *(float *)(lVar4 + 0x18) = auVar6._8_4_ + *(float *)(lVar4 + 0x18);
  }
  *(int *)(param_1 + 0x8e) = (int)param_1[0x8e] + 3;
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dbbc02 FUN_146dbbc02 body=862 status=ok
// SIG undefined FUN_146dbbc02(void)

void FUN_146dbbc02(undefined8 *param_1,uint param_2,undefined8 param_3)

{
  float *pfVar1;
  float *pfVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  
  pfVar1 = (float *)*param_1;
  pfVar2 = (float *)param_1[3];
  uVar6 = (ulonglong)param_2;
  dVar8 = (double)(((float)((double)param_1[uVar6 * 6 + 0x9c] * (double)pfVar2[6] -
                           (double)pfVar2[4] * (double)param_1[uVar6 * 6 + 0x9e]) +
                   (pfVar2[1] - pfVar1[1])) -
                  (float)((double)pfVar1[6] * (double)param_1[uVar6 * 6 + 0x99] -
                         (double)pfVar1[4] * (double)param_1[uVar6 * 6 + 0x9b])) *
          (double)param_1[uVar6 * 3 + 0xac];
  dVar7 = (double)(((float)((double)pfVar2[4] * (double)param_1[uVar6 * 6 + 0x9d] -
                           (double)param_1[uVar6 * 6 + 0x9c] * (double)pfVar2[5]) +
                   (pfVar2[2] - pfVar1[2])) -
                  (float)((double)pfVar1[4] * (double)param_1[uVar6 * 6 + 0x9a] -
                         (double)param_1[uVar6 * 6 + 0x99] * (double)pfVar1[5])) *
          (double)param_1[uVar6 * 3 + 0xad] +
          (double)(((float)((double)pfVar2[5] * (double)param_1[uVar6 * 6 + 0x9e] -
                           (double)param_1[uVar6 * 6 + 0x9d] * (double)pfVar2[6]) +
                   (*pfVar2 - *pfVar1)) -
                  (float)((double)pfVar1[5] * (double)param_1[uVar6 * 6 + 0x9b] -
                         (double)param_1[uVar6 * 6 + 0x9a] * (double)pfVar1[6])) *
          (double)param_1[uVar6 * 3 + 0xab] + dVar8 + (double)param_1[uVar6 + 0xcf];
  bVar4 = (char)param_2 * '\b';
  bVar5 = *(byte *)(param_1 + 0xe8);
  if ((bVar5 & (byte)(0x201008 >> (bVar4 & 0x1f))) == 0) {
LAB_146dbbdf6:
    bVar3 = false;
  }
  else {
    dVar8 = (double)param_1[uVar6 + 0xb4];
    if (dVar7 <= dVar8) {
      if (-dVar8 <= dVar7) goto LAB_146dbbdf6;
      dVar7 = dVar7 + dVar8;
    }
    else {
      dVar7 = dVar7 - dVar8;
    }
    bVar3 = true;
  }
  if ((bVar5 & (byte)(0x201008 >> (bVar4 & 0x1f))) != 0) {
    if (!bVar3 || (bVar5 & (byte)(0x201008 >> (bVar4 & 0x1f))) == 0) {
      return;
    }
    dVar8 = ABS(dVar7);
    if (dVar8 < (double)param_1[0x6b] || dVar8 == (double)param_1[0x6b]) {
      return;
    }
  }
  if (param_2 == 2) {
    bVar4 = *(byte *)((longlong)param_1 + 0x742);
  }
  else if (param_2 == 1) {
    bVar4 = *(byte *)((longlong)param_1 + 0x741) >> 5;
  }
  else {
    bVar4 = *(byte *)((longlong)param_1 + 0x741) >> 3;
  }
  if ((bVar4 & 3) == 1) {
    if (param_2 == 0) {
      if ((bVar5 & 0x40) != 0) goto LAB_146dbbecb;
LAB_146dbbe98:
      bVar5 = *(byte *)((longlong)param_1 + 0x741) >> 3;
      goto LAB_146dbbea1;
    }
    if (param_2 != 2) {
      if ((char)bVar5 < '\0') {
LAB_146dbbecb:
        FUN_146dbc164(param_1,dVar8,dVar7);
        return;
      }
LAB_146dbbe7f:
      bVar5 = *(byte *)((longlong)param_1 + 0x741) >> 5;
      goto LAB_146dbbea1;
    }
    if ((*(byte *)((longlong)param_1 + 0x741) & 1) != 0) goto LAB_146dbbecb;
  }
  else if (param_2 != 2) {
    if (param_2 == 1) goto LAB_146dbbe7f;
    goto LAB_146dbbe98;
  }
  bVar5 = *(byte *)((longlong)param_1 + 0x742);
LAB_146dbbea1:
  if ((bVar5 & 3) == 0) {
    return;
  }
  dVar8 = (dVar7 * (double)param_1[0x6a] * (double)param_1[uVar6 + 0x90]) /
          (double)param_1[uVar6 + 0xba];
  dVar7 = (double)param_1[uVar6 + 0xd2] + dVar8;
  param_1[uVar6 + 0xd2] = dVar7;
  FUN_146dbbf60(param_1,dVar7,dVar8,param_3);
  return;
}



// FUNCTION 146dbbf60 FUN_146dbbf60 body=515 status=ok
// SIG undefined FUN_146dbbf60(void)

void FUN_146dbbf60(longlong *param_1,ulonglong param_2,double param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float *pfVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  param_2 = param_2 & 0xffffffff;
  dVar7 = *(double *)(param_4 + 0xe8 + param_2 * 0x18) * param_3;
  dVar8 = *(double *)(param_4 + 0xe0 + param_2 * 0x18) * param_3;
  pfVar5 = (float *)*param_1;
  dVar9 = *(double *)(param_4 + 0xd8 + param_2 * 0x18) * param_3;
  if (1.1754944e-38 < *(float *)(param_1 + 2) * *(float *)(param_1 + 1) * pfVar5[0x4d]) {
    dVar1 = (double)param_1[0x47];
    lVar6 = param_2 * 0x30;
    dVar2 = *(double *)(param_4 + 0x178 + lVar6);
    dVar3 = *(double *)(param_4 + 0x170 + lVar6);
    dVar4 = *(double *)(param_4 + 0x168 + lVar6);
    *pfVar5 = (float)(dVar9 * dVar1) + *pfVar5;
    pfVar5[1] = (float)(dVar8 * dVar1) + pfVar5[1];
    pfVar5[2] = (float)(dVar1 * dVar7) + pfVar5[2];
    lVar6 = *param_1;
    *(float *)(lVar6 + 0x10) = (float)(dVar4 * param_3) + *(float *)(lVar6 + 0x10);
    *(float *)(lVar6 + 0x14) = (float)(dVar3 * param_3) + *(float *)(lVar6 + 0x14);
    *(float *)(lVar6 + 0x18) = (float)(dVar2 * param_3) + *(float *)(lVar6 + 0x18);
  }
  pfVar5 = (float *)param_1[3];
  if (1.1754944e-38 < *(float *)(param_1 + 5) * *(float *)(param_1 + 4) * pfVar5[0x4d]) {
    dVar1 = (double)param_1[0x48];
    lVar6 = param_2 * 0x30;
    dVar2 = *(double *)(param_4 + 400 + lVar6);
    dVar3 = *(double *)(param_4 + 0x188 + lVar6);
    dVar4 = *(double *)(param_4 + 0x180 + lVar6);
    *pfVar5 = *pfVar5 - (float)(dVar9 * dVar1);
    pfVar5[1] = pfVar5[1] - (float)(dVar8 * dVar1);
    pfVar5[2] = pfVar5[2] - (float)(dVar7 * dVar1);
    lVar6 = param_1[3];
    *(float *)(lVar6 + 0x10) = (float)(param_3 * dVar4) + *(float *)(lVar6 + 0x10);
    *(float *)(lVar6 + 0x14) = (float)(dVar3 * param_3) + *(float *)(lVar6 + 0x14);
    *(float *)(lVar6 + 0x18) = (float)(dVar2 * param_3) + *(float *)(lVar6 + 0x18);
  }
  *(int *)(param_1 + 0x8e) = (int)param_1[0x8e] + 1;
  return;
}



// FUNCTION 146dbc164 FUN_146dbc164 body=732 status=ok
// SIG undefined FUN_146dbc164(void)

void FUN_146dbc164(undefined8 *param_1,uint param_2,double param_3,double param_4)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  double dVar4;
  
  uVar3 = (ulonglong)param_2;
  dVar4 = 0.0;
  if (9.999999747378752e-05 < (double)param_1[uVar3 + 0x96]) {
    pfVar1 = (float *)*param_1;
    pfVar2 = (float *)param_1[3];
    dVar4 = param_4 * 0.0 +
            (((((double)pfVar1[4] * (double)param_1[uVar3 * 6 + 0x9a] -
               (double)param_1[uVar3 * 6 + 0x99] * (double)pfVar1[5]) +
              (double)pfVar1[2] + (double)param_1[0x20]) - (double)param_1[0x38]) -
            ((((double)pfVar2[4] * (double)param_1[uVar3 * 6 + 0x9d] -
              (double)param_1[uVar3 * 6 + 0x9c] * (double)pfVar2[5]) +
             (double)pfVar2[2] + (double)param_1[0x23]) - (double)param_1[0x3b])) *
            (double)param_1[uVar3 * 3 + 0xad] +
            (((((double)pfVar1[5] * (double)param_1[uVar3 * 6 + 0x9b] -
               (double)param_1[uVar3 * 6 + 0x9a] * (double)pfVar1[6]) +
              (double)*pfVar1 + (double)param_1[0x1e]) - (double)param_1[0x36]) -
            ((((double)pfVar2[5] * (double)param_1[uVar3 * 6 + 0x9e] -
              (double)param_1[uVar3 * 6 + 0x9d] * (double)pfVar2[6]) +
             (double)*pfVar2 + (double)param_1[0x21]) - (double)param_1[0x39])) *
            (double)param_1[uVar3 * 3 + 0xab] +
            (((((double)pfVar1[6] * (double)param_1[uVar3 * 6 + 0x99] -
               (double)pfVar1[4] * (double)param_1[uVar3 * 6 + 0x9b]) +
              (double)pfVar1[1] + (double)param_1[0x1f]) - (double)param_1[0x37]) -
            ((((double)param_1[uVar3 * 6 + 0x9c] * (double)pfVar2[6] -
              (double)pfVar2[4] * (double)param_1[uVar3 * 6 + 0x9e]) +
             (double)pfVar2[1] + (double)param_1[0x22]) - (double)param_1[0x3a])) *
            (double)param_1[uVar3 * 3 + 0xac];
  }
  param_1[uVar3 + 0xd2] =
       (double)param_1[uVar3 + 0xd2] +
       (((param_3 * (double)param_1[uVar3 + 0x93] - dVar4 * (double)param_1[uVar3 + 0x96]) -
        (double)param_1[uVar3 + 0xd2]) * (double)param_1[0x6a]) / (double)param_1[uVar3 + 0xb7];
  FUN_146dbbf60();
  return;
}



// FUNCTION 146dbc440 FUN_146dbc440 body=1046 status=ok
// SIG undefined FUN_146dbc440(void)

void FUN_146dbc440(longlong *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar31;
  float fVar32;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar33;
  float fVar34;
  undefined1 auStack_118 [32];
  float local_f8 [12];
  float local_c8 [4];
  float local_b8;
  undefined8 local_a8;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  auVar29._4_4_ = -(uint)(1e-08 < ABS(*(float *)((longlong)param_1 + 0x5a4)));
  auVar29._0_4_ = -(uint)(1e-08 < ABS(*(float *)(param_1 + 0xb4)));
  auVar29._8_4_ = -(uint)(1e-08 < ABS(*(float *)(param_1 + 0xb5)));
  auVar29._12_4_ = -(uint)(1e-08 < ABS(*(float *)((longlong)param_1 + 0x5ac)));
  iVar17 = movmskps((int)local_90,auVar29);
  if (iVar17 != 0) {
    lVar19 = *param_1;
    lVar18 = param_1[3];
    fVar21 = *(float *)(lVar19 + 0x28);
    fVar22 = *(float *)(lVar19 + 0x20);
    fVar23 = *(float *)(lVar19 + 0x24);
    fVar25 = *(float *)(lVar18 + 0x28);
    fVar26 = *(float *)(lVar18 + 0x24);
    fVar27 = *(float *)(lVar18 + 0x20);
    fVar24 = *(float *)(lVar19 + 0x38);
    fVar3 = *(float *)(lVar19 + 0x34);
    fVar4 = *(float *)(lVar19 + 0x30);
    fVar28 = *(float *)(lVar18 + 0x38);
    fVar31 = *(float *)(lVar18 + 0x34);
    fVar32 = *(float *)(lVar18 + 0x30);
    fVar33 = (float)(double)param_1[0x6a];
    fVar34 = *(float *)(param_1 + 0x90);
    fVar6 = *(float *)((longlong)param_1 + 0x484);
    fVar7 = *(float *)(param_1 + 0x91);
    fVar8 = *(float *)((longlong)param_1 + 0x48c);
    fVar9 = *(float *)(param_1 + 0x96);
    fVar10 = *(float *)((longlong)param_1 + 0x4b4);
    fVar11 = *(float *)(param_1 + 0x97);
    fVar12 = *(float *)((longlong)param_1 + 0x4bc);
    fVar13 = *(float *)(param_1 + 0x98);
    fVar14 = *(float *)((longlong)param_1 + 0x4c4);
    fVar15 = *(float *)(param_1 + 0x99);
    fVar16 = *(float *)((longlong)param_1 + 0x4cc);
    lVar20 = 0;
    do {
      auVar5._4_4_ = ((fVar13 * fVar28 - fVar32 * fVar15) + fVar26) -
                     ((fVar9 * fVar24 - fVar4 * fVar11) + fVar23);
      auVar5._0_4_ = ((fVar15 * fVar31 - fVar28 * fVar14) + fVar27) -
                     ((fVar11 * fVar3 - fVar24 * fVar10) + fVar22);
      auVar5._8_4_ = ((fVar14 * fVar32 - fVar31 * fVar13) + fVar25) -
                     ((fVar10 * fVar4 - fVar3 * fVar9) + fVar21);
      auVar5._12_4_ = ((fVar16 * 0.0 - fVar16 * 0.0) + 0.0) - ((fVar12 * 0.0 - fVar12 * 0.0) + 0.0);
      auVar29 = dpps(*(undefined1 (*) [16])((longlong)param_1 + lVar20 + 0x4d0),auVar5,0xff);
      *(undefined1 (*) [16])((longlong)local_c8 + lVar20) = auVar29;
      lVar20 = lVar20 + 0x10;
    } while (lVar20 != 0x30);
    auVar30._0_4_ = local_c8[0] * fVar34 * fVar33;
    auVar30._4_4_ = local_b8 * fVar6 * fVar33;
    auVar30._8_4_ = (float)local_a8 * fVar7 * fVar33;
    auVar30._12_4_ = (float)((ulonglong)local_a8 >> 0x20) * fVar8 * fVar33;
    auVar29 = divps(auVar30,*(undefined1 (*) [16])(param_1 + 0xa4));
    local_f8[0] = auVar29._0_4_;
    local_f8[4] = auVar29._4_4_;
    local_f8[8] = auVar29._8_4_;
    local_f8[1] = local_f8[0];
    local_f8[2] = local_f8[0];
    local_f8[3] = local_f8[0];
    local_f8[5] = local_f8[4];
    local_f8[6] = local_f8[4];
    local_f8[7] = local_f8[4];
    local_f8[9] = local_f8[8];
    local_f8[10] = local_f8[8];
    local_f8[0xb] = local_f8[8];
    if (1.1754944e-38 <
        *(float *)(param_1 + 2) * *(float *)(param_1 + 1) * *(float *)(lVar19 + 0x134)) {
      fVar34 = (float)(double)param_1[0x47];
      fVar28 = 0.0;
      fVar31 = 0.0;
      fVar32 = 0.0;
      lVar18 = 0;
      fVar25 = 0.0;
      fVar26 = 0.0;
      fVar27 = 0.0;
      do {
        fVar6 = *(float *)((longlong)local_f8 + lVar18 + 4);
        fVar7 = *(float *)((longlong)local_f8 + lVar18 + 8);
        pfVar1 = (float *)((longlong)param_1 + lVar18 + 0x4d0);
        pfVar2 = (float *)((longlong)param_1 + lVar18 * 2 + 0x530);
        fVar28 = fVar28 + *pfVar1 * *(float *)((longlong)local_f8 + lVar18) * fVar34;
        fVar31 = fVar31 + pfVar1[1] * fVar6 * fVar34;
        fVar32 = fVar32 + pfVar1[2] * fVar7 * fVar34;
        fVar25 = fVar25 + *(float *)((longlong)local_f8 + lVar18) * *pfVar2;
        fVar26 = fVar26 + fVar6 * pfVar2[1];
        fVar27 = fVar27 + fVar7 * pfVar2[2];
        lVar18 = lVar18 + 0x10;
      } while (lVar18 != 0x30);
      *(float *)(lVar19 + 0x20) = fVar22 + fVar28;
      *(float *)(lVar19 + 0x24) = fVar23 + fVar31;
      *(float *)(lVar19 + 0x28) = fVar21 + fVar32;
      *(float *)(lVar19 + 0x30) = fVar4 + fVar25;
      *(float *)(lVar19 + 0x34) = fVar3 + fVar26;
      *(float *)(lVar19 + 0x38) = fVar24 + fVar27;
      lVar18 = param_1[3];
    }
    if (1.1754944e-38 <
        *(float *)(param_1 + 5) * *(float *)(param_1 + 4) * *(float *)(lVar18 + 0x134)) {
      fVar24 = (float)(double)param_1[0x48];
      fVar25 = 0.0;
      fVar26 = 0.0;
      fVar27 = 0.0;
      lVar19 = 0;
      fVar21 = 0.0;
      fVar22 = 0.0;
      fVar23 = 0.0;
      do {
        fVar3 = *(float *)((longlong)local_f8 + lVar19 + 4);
        fVar4 = *(float *)((longlong)local_f8 + lVar19 + 8);
        pfVar1 = (float *)((longlong)param_1 + lVar19 + 0x4d0);
        pfVar2 = (float *)((longlong)param_1 + lVar19 * 2 + 0x540);
        fVar25 = fVar25 + *pfVar1 * *(float *)((longlong)local_f8 + lVar19) * -fVar24;
        fVar26 = fVar26 + pfVar1[1] * fVar3 * -fVar24;
        fVar27 = fVar27 + pfVar1[2] * fVar4 * -fVar24;
        fVar21 = fVar21 + *(float *)((longlong)local_f8 + lVar19) * *pfVar2;
        fVar22 = fVar22 + fVar3 * pfVar2[1];
        fVar23 = fVar23 + fVar4 * pfVar2[2];
        lVar19 = lVar19 + 0x10;
      } while (lVar19 != 0x30);
      *(float *)(lVar18 + 0x20) = fVar25 + *(float *)(lVar18 + 0x20);
      *(float *)(lVar18 + 0x24) = fVar26 + *(float *)(lVar18 + 0x24);
      *(float *)(lVar18 + 0x28) = fVar27 + *(float *)(lVar18 + 0x28);
      *(float *)(lVar18 + 0x30) = fVar21 + *(float *)(lVar18 + 0x30);
      *(float *)(lVar18 + 0x34) = fVar22 + *(float *)(lVar18 + 0x34);
      *(float *)(lVar18 + 0x38) = fVar23 + *(float *)(lVar18 + 0x38);
    }
  }
  if ((local_90 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dbc858 FUN_146dbc858 body=158 status=ok
// SIG undefined FUN_146dbc858(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146dbc858(longlong *param_1,uint param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  byte bVar9;
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  
  if (ABS((double)param_1[(ulonglong)param_2 + 0xd2]) <= 9.99999993922529e-09) {
    return;
  }
  if (param_2 == 2) {
    bVar9 = *(byte *)((longlong)param_1 + 0x742);
  }
  else if (param_2 == 1) {
    bVar9 = *(byte *)((longlong)param_1 + 0x741) >> 5;
  }
  else {
    bVar9 = *(byte *)((longlong)param_1 + 0x741) >> 3;
  }
  uVar12 = 0;
  if ((bVar9 & 3) == 1) {
    dVar10 = (double)param_1[(ulonglong)param_2 + 0xe2];
    dVar11 = 0.0;
    if ((dVar10 != 0.0) || (NAN(dVar10))) {
      dVar11 = (double)param_1[(ulonglong)param_2 + 0x88];
      dVar10 = -dVar10 * dVar11;
      uVar12 = -(ulonglong)((double)_DAT_14c75f194 < dVar11) & (ulonglong)dVar10;
    }
    FUN_146dbc8f6(dVar10,dVar11,uVar12);
    return;
  }
  lVar5 = *param_1;
  uVar12 = (ulonglong)param_2;
  dVar11 = (double)*(float *)(lVar5 + 0x38);
  dVar10 = (double)*(float *)(lVar5 + 0x34);
  dVar7 = (double)*(float *)(lVar5 + 0x30);
  lVar8 = param_1[3];
  dVar10 = (((((((double)*(float *)(lVar8 + 0x30) * (double)param_1[uVar12 * 6 + 0x9d] -
                (double)param_1[uVar12 * 6 + 0x9c] * (double)*(float *)(lVar8 + 0x34)) +
               (double)*(float *)(lVar8 + 0x28)) -
              ((dVar7 * (double)param_1[uVar12 * 6 + 0x9a] -
               (double)param_1[uVar12 * 6 + 0x99] * dVar10) + (double)*(float *)(lVar5 + 0x28))) *
              (double)param_1[uVar12 * 3 + 0xad] +
             ((((double)*(float *)(lVar8 + 0x34) * (double)param_1[uVar12 * 6 + 0x9e] -
               (double)param_1[uVar12 * 6 + 0x9d] * (double)*(float *)(lVar8 + 0x38)) +
              (double)*(float *)(lVar8 + 0x20)) -
             ((dVar10 * (double)param_1[uVar12 * 6 + 0x9b] -
              (double)param_1[uVar12 * 6 + 0x9a] * dVar11) + (double)*(float *)(lVar5 + 0x20))) *
             (double)param_1[uVar12 * 3 + 0xab] +
             ((((double)param_1[uVar12 * 6 + 0x9c] * (double)*(float *)(lVar8 + 0x38) -
               (double)*(float *)(lVar8 + 0x30) * (double)param_1[uVar12 * 6 + 0x9e]) +
              (double)*(float *)(lVar8 + 0x24)) -
             ((dVar11 * (double)param_1[uVar12 * 6 + 0x99] -
              dVar7 * (double)param_1[uVar12 * 6 + 0x9b]) + (double)*(float *)(lVar5 + 0x24))) *
             (double)param_1[uVar12 * 3 + 0xac]) - 0.0) *
           (double)param_1[0x6a] * (double)param_1[uVar12 + 0x90]) / (double)param_1[uVar12 + 0xba];
  dVar7 = (double)param_1[uVar12 * 3 + 0xab] * dVar10;
  dVar11 = (double)param_1[uVar12 * 3 + 0xac] * dVar10;
  dVar6 = (double)param_1[uVar12 * 3 + 0xad] * dVar10;
  if (1.1754944e-38 < *(float *)(param_1 + 2) * *(float *)(param_1 + 1) * *(float *)(lVar5 + 0x134))
  {
    dVar1 = (double)param_1[0x47];
    dVar2 = (double)param_1[uVar12 * 6 + 0xbf];
    dVar3 = (double)param_1[uVar12 * 6 + 0xbe];
    dVar4 = (double)param_1[uVar12 * 6 + 0xbd];
    *(float *)(lVar5 + 0x20) = *(float *)(lVar5 + 0x20) + (float)(dVar7 * dVar1);
    *(float *)(lVar5 + 0x24) = *(float *)(lVar5 + 0x24) + (float)(dVar11 * dVar1);
    *(float *)(lVar5 + 0x28) = *(float *)(lVar5 + 0x28) + (float)(dVar1 * dVar6);
    *(float *)(lVar5 + 0x30) = *(float *)(lVar5 + 0x30) + (float)(dVar4 * dVar10);
    *(float *)(lVar5 + 0x34) = *(float *)(lVar5 + 0x34) + (float)(dVar3 * dVar10);
    *(float *)(lVar5 + 0x38) = *(float *)(lVar5 + 0x38) + (float)(dVar2 * dVar10);
    lVar8 = param_1[3];
  }
  if (1.1754944e-38 < *(float *)(param_1 + 5) * *(float *)(param_1 + 4) * *(float *)(lVar8 + 0x134))
  {
    dVar1 = (double)param_1[0x48];
    dVar2 = (double)param_1[uVar12 * 6 + 0xc2];
    dVar3 = (double)param_1[uVar12 * 6 + 0xc1];
    dVar4 = (double)param_1[uVar12 * 6 + 0xc0];
    *(float *)(lVar8 + 0x20) = *(float *)(lVar8 + 0x20) - (float)(dVar7 * dVar1);
    *(float *)(lVar8 + 0x24) = *(float *)(lVar8 + 0x24) - (float)(dVar11 * dVar1);
    *(float *)(lVar8 + 0x28) = *(float *)(lVar8 + 0x28) - (float)(dVar6 * dVar1);
    *(float *)(lVar8 + 0x30) = (float)(dVar10 * dVar4) + *(float *)(lVar8 + 0x30);
    *(float *)(lVar8 + 0x34) = (float)(dVar3 * dVar10) + *(float *)(lVar8 + 0x34);
    *(float *)(lVar8 + 0x38) = (float)(dVar2 * dVar10) + *(float *)(lVar8 + 0x38);
  }
  return;
}



// FUNCTION 146dbc8f6 FUN_146dbc8f6 body=1043 status=ok
// SIG undefined FUN_146dbc8f6(void)

void FUN_146dbc8f6(longlong *param_1,uint param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  lVar5 = *param_1;
  uVar11 = (ulonglong)param_2;
  dVar8 = (double)*(float *)(lVar5 + 0x38);
  dVar6 = (double)*(float *)(lVar5 + 0x34);
  dVar9 = (double)*(float *)(lVar5 + 0x30);
  lVar10 = param_1[3];
  dVar6 = (((((((double)*(float *)(lVar10 + 0x30) * (double)param_1[uVar11 * 6 + 0x9d] -
               (double)param_1[uVar11 * 6 + 0x9c] * (double)*(float *)(lVar10 + 0x34)) +
              (double)*(float *)(lVar10 + 0x28)) -
             ((dVar9 * (double)param_1[uVar11 * 6 + 0x9a] -
              (double)param_1[uVar11 * 6 + 0x99] * dVar6) + (double)*(float *)(lVar5 + 0x28))) *
             (double)param_1[uVar11 * 3 + 0xad] +
            ((((double)*(float *)(lVar10 + 0x34) * (double)param_1[uVar11 * 6 + 0x9e] -
              (double)param_1[uVar11 * 6 + 0x9d] * (double)*(float *)(lVar10 + 0x38)) +
             (double)*(float *)(lVar10 + 0x20)) -
            ((dVar6 * (double)param_1[uVar11 * 6 + 0x9b] -
             (double)param_1[uVar11 * 6 + 0x9a] * dVar8) + (double)*(float *)(lVar5 + 0x20))) *
            (double)param_1[uVar11 * 3 + 0xab] +
            ((((double)param_1[uVar11 * 6 + 0x9c] * (double)*(float *)(lVar10 + 0x38) -
              (double)*(float *)(lVar10 + 0x30) * (double)param_1[uVar11 * 6 + 0x9e]) +
             (double)*(float *)(lVar10 + 0x24)) -
            ((dVar8 * (double)param_1[uVar11 * 6 + 0x99] -
             dVar9 * (double)param_1[uVar11 * 6 + 0x9b]) + (double)*(float *)(lVar5 + 0x24))) *
            (double)param_1[uVar11 * 3 + 0xac]) - param_3) *
          (double)param_1[0x6a] * (double)param_1[uVar11 + 0x90]) / (double)param_1[uVar11 + 0xba];
  dVar9 = (double)param_1[uVar11 * 3 + 0xab] * dVar6;
  dVar8 = (double)param_1[uVar11 * 3 + 0xac] * dVar6;
  dVar7 = (double)param_1[uVar11 * 3 + 0xad] * dVar6;
  if (1.1754944e-38 < *(float *)(param_1 + 2) * *(float *)(param_1 + 1) * *(float *)(lVar5 + 0x134))
  {
    dVar1 = (double)param_1[0x47];
    dVar2 = (double)param_1[uVar11 * 6 + 0xbf];
    dVar3 = (double)param_1[uVar11 * 6 + 0xbe];
    dVar4 = (double)param_1[uVar11 * 6 + 0xbd];
    *(float *)(lVar5 + 0x20) = *(float *)(lVar5 + 0x20) + (float)(dVar9 * dVar1);
    *(float *)(lVar5 + 0x24) = *(float *)(lVar5 + 0x24) + (float)(dVar8 * dVar1);
    *(float *)(lVar5 + 0x28) = *(float *)(lVar5 + 0x28) + (float)(dVar1 * dVar7);
    *(float *)(lVar5 + 0x30) = *(float *)(lVar5 + 0x30) + (float)(dVar4 * dVar6);
    *(float *)(lVar5 + 0x34) = *(float *)(lVar5 + 0x34) + (float)(dVar3 * dVar6);
    *(float *)(lVar5 + 0x38) = *(float *)(lVar5 + 0x38) + (float)(dVar2 * dVar6);
    lVar10 = param_1[3];
  }
  if (1.1754944e-38 < *(float *)(param_1 + 5) * *(float *)(param_1 + 4) * *(float *)(lVar10 + 0x134)
     ) {
    dVar1 = (double)param_1[0x48];
    dVar2 = (double)param_1[uVar11 * 6 + 0xc2];
    dVar3 = (double)param_1[uVar11 * 6 + 0xc1];
    dVar4 = (double)param_1[uVar11 * 6 + 0xc0];
    *(float *)(lVar10 + 0x20) = *(float *)(lVar10 + 0x20) - (float)(dVar9 * dVar1);
    *(float *)(lVar10 + 0x24) = *(float *)(lVar10 + 0x24) - (float)(dVar8 * dVar1);
    *(float *)(lVar10 + 0x28) = *(float *)(lVar10 + 0x28) - (float)(dVar7 * dVar1);
    *(float *)(lVar10 + 0x30) = (float)(dVar6 * dVar4) + *(float *)(lVar10 + 0x30);
    *(float *)(lVar10 + 0x34) = (float)(dVar3 * dVar6) + *(float *)(lVar10 + 0x34);
    *(float *)(lVar10 + 0x38) = (float)(dVar2 * dVar6) + *(float *)(lVar10 + 0x38);
  }
  return;
}



// FUNCTION 146dbcd09 FUN_146dbcd09 body=136 status=ok
// SIG undefined FUN_146dbcd09(void)

undefined4 FUN_146dbcd09(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x114);
  uVar2 = *(uint *)(param_1 + 0x118);
  uVar5 = *(uint *)(param_1 + 0x110) | uVar1 | uVar2;
  if (uVar5 != 0) {
    *(bool *)param_2 = *(uint *)(param_1 + 0x110) == 2;
    *(bool *)(param_2 + 1) = uVar1 == 2;
    *(bool *)(param_2 + 2) = uVar2 == 2;
    iVar3 = *(int *)(param_1 + 0x114);
    iVar4 = *(int *)(param_1 + 0x118);
    *(bool *)param_3 = *(int *)(param_1 + 0x110) == 1;
    *(bool *)(param_3 + 1) = iVar3 == 1;
    *(bool *)(param_3 + 2) = iVar4 == 1;
    iVar3 = *(int *)(param_1 + 0x114);
    iVar4 = *(int *)(param_1 + 0x118);
    *(bool *)param_4 = *(int *)(param_1 + 0x110) == 0;
    *(bool *)(param_4 + 1) = iVar3 == 0;
    *(bool *)(param_4 + 2) = iVar4 == 0;
  }
  return CONCAT31((int3)(uVar5 >> 8),uVar5 != 0);
}



// FUNCTION 146dbd4f8 FUN_146dbd4f8 body=1085 status=ok
// SIG undefined FUN_146dbd4f8(void)

void FUN_146dbd4f8(longlong param_1,longlong param_2,undefined8 param_3,char param_4,char param_5)

{
  double dVar1;
  double dVar3;
  double dVar4;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_168 [32];
  double local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_130;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  double dVar2;
  double dVar5;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0.0;
  dStack_f0 = 0.0;
  local_108 = 0.0;
  dStack_100 = 0.0;
  FUN_146deaca2(param_1 + 0x120,param_1 + 0x140,&local_108);
  dVar1 = *(double *)(param_1 + 0x138);
  dVar2 = *(double *)(param_1 + 0x138);
  dVar8 = *(double *)(param_1 + 0x120);
  dVar9 = *(double *)(param_1 + 0x120);
  dVar10 = *(double *)(param_1 + 0x128);
  dVar3 = *(double *)(param_1 + 0x128);
  dVar4 = *(double *)(param_1 + 0x130);
  dVar5 = *(double *)(param_1 + 0x130);
  dVar6 = dStack_100 * dVar4 * -1.0 +
          dVar10 * local_f8 + dVar8 * dStack_f0 * 1.0 + dVar1 * local_108;
  dVar7 = local_108 * dVar5 * 1.0 + dVar3 * dStack_f0 + dVar9 * local_f8 * -1.0 + dVar2 * dStack_100
  ;
  dVar1 = dStack_f0 * dVar4 * 1.0 +
          ((dVar8 * dStack_100 * 1.0 + dVar1 * local_f8) - dVar10 * local_108);
  dVar2 = local_f8 * dVar5 * -1.0 +
          ((dVar9 * local_108 * -1.0 + dVar2 * dStack_f0) - dVar3 * dStack_100);
  if (param_4 != '\0') {
    dVar10 = dVar6 * 0.0 + dVar7 * -0.0;
    dVar8 = dVar7 - dVar1 * 0.0;
    dVar9 = dVar1 * 0.0 - dVar6;
    dVar10 = dVar10 + dVar10;
    dVar9 = dVar9 + dVar9;
    dVar8 = dVar8 + dVar8;
    local_110 = (dVar6 * dVar9 - dVar8 * dVar7) + dVar2 * dVar10 + 1.0;
    local_118 = (dVar1 * dVar8 - dVar10 * dVar6) + dVar2 * dVar9 + 0.0;
    local_120 = (dVar7 * dVar10 - dVar9 * dVar1) + dVar2 * dVar8 + 0.0;
    local_148 = (double)FUN_144afd35e(SUB84(local_f8,0),dStack_f0 + 1.0);
    local_148 = local_148 * 4.0;
    local_140 = *(undefined8 *)(param_2 + 0x188);
    local_130 = 1;
    local_138 = param_3;
    FUN_146dbdc8e(param_1,param_2,2,&local_120);
  }
  if (param_5 != '\0') {
    dVar9 = dVar6 - dVar7 * 0.0;
    dVar8 = dVar1 * 0.0 + dVar6 * -0.0;
    dVar10 = dVar7 * 0.0 - dVar1;
    dVar9 = dVar9 + dVar9;
    dVar8 = dVar8 + dVar8;
    dVar10 = dVar10 + dVar10;
    local_110 = (dVar6 * dVar8 - dVar10 * dVar7) + dVar2 * dVar9 + 0.0;
    local_118 = (dVar1 * dVar10 - dVar9 * dVar6) + dVar2 * dVar8 + 1.0;
    local_120 = (dVar7 * dVar9 - dVar8 * dVar1) + dVar2 * dVar10 + 0.0;
    local_148 = (double)FUN_144afd35e(SUB84(dStack_100,0),dStack_f0 + 1.0);
    local_148 = local_148 * 4.0;
    local_140 = *(undefined8 *)(param_2 + 0x188);
    local_130 = 1;
    local_138 = param_3;
    FUN_146dbdc8e(param_1,param_2,1,&local_120);
  }
  if ((local_c0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dbd936 FUN_146dbd936 body=181 status=ok
// SIG undefined FUN_146dbd936(void)

void FUN_146dbd936(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_60;
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = &local_60;
  FUN_146dec22c(param_1 + 0x120,param_1 + 0x140,param_4,local_58);
  local_80 = *(undefined8 *)(param_2 + 0x188);
  local_88 = (undefined8 *)local_60;
  local_70 = 1;
  local_78 = param_3;
  FUN_146dbdc8e(param_1,param_2,param_4,local_58);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dbd9ec FUN_146dbd9ec body=672 status=ok
// SIG undefined FUN_146dbd9ec(void)

void FUN_146dbd9ec(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4,char param_5,
                  char param_6)

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
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined1 local_108 [24];
  undefined1 local_f0 [24];
  undefined1 local_d8 [24];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_128 = local_108;
  FUN_146dec78e(param_1 + 0x120,param_1 + 0x140,local_d8,local_f0);
  dVar9 = *(double *)(param_1 + 0x120);
  dVar10 = *(double *)(param_1 + 0x128);
  dVar3 = *(double *)(param_1 + 0x130) * -1.0;
  dVar4 = *(double *)(param_1 + 0x138) * 1.0;
  dVar5 = *(double *)(param_1 + 0x140);
  dVar6 = *(double *)(param_1 + 0x148);
  dVar7 = *(double *)(param_1 + 0x150);
  dVar8 = *(double *)(param_1 + 0x158);
  dVar1 = *(double *)(param_1 + 0x120);
  dVar2 = *(double *)(param_1 + 0x128);
  if (param_4 != '\0') {
    local_110 = 0;
    local_120 = 0;
    local_128 = (undefined1 *)
                (dVar3 * dVar6 * -1.0 +
                ((*(double *)(param_1 + 0x120) * dVar8 * -1.0 + dVar5 * dVar4) -
                *(double *)(param_1 + 0x128) * dVar7));
    local_118 = param_3;
    FUN_146dbdc8e(param_1,param_2,0,local_d8);
  }
  if (param_5 != '\0') {
    local_128 = (undefined1 *)(((-dVar9 * dVar6 + dVar4 * dVar7) - -dVar10 * dVar5) + dVar3 * dVar8)
    ;
    local_110 = 0;
    local_120 = 0;
    local_118 = param_3;
    FUN_146dbdc8e(param_1,param_2,2,local_108);
  }
  if (param_6 != '\0') {
    local_110 = 0;
    local_120 = 0;
    local_128 = (undefined1 *)
                (dVar3 * dVar5 * 1.0 + ((dVar1 * dVar7 * 1.0 + dVar6 * dVar4) - dVar2 * dVar8));
    local_118 = param_3;
    FUN_146dbdc8e(param_1,param_2,1,local_f0);
  }
  if ((local_c0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dbdc8e FUN_146dbdc8e body=556 status=ok
// SIG undefined FUN_146dbdc8e(void)

void FUN_146dbdc8e(longlong *param_1,longlong param_2,uint param_3,undefined4 *param_4,
                  double param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 local_f0;
  undefined4 *local_e8;
  undefined4 *local_e0;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  ulonglong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (0.0 <= param_5) {
    local_88 = *param_4;
    uVar7 = param_4[1];
    uStack_80 = param_4[2];
    uVar8 = param_4[3];
    local_78 = *(ulonglong *)(param_4 + 4);
    uVar9 = (undefined4)local_78;
    uVar10 = (uint)(local_78 >> 0x20);
  }
  else {
    local_88 = *param_4;
    uStack_80 = param_4[2];
    uVar9 = (undefined4)*(ulonglong *)(param_4 + 4);
    uVar10 = param_4[5] ^ 0x80000000;
    uVar8 = param_4[3] ^ 0x80000000;
    uVar7 = param_4[1] ^ 0x80000000;
    local_78 = *(ulonglong *)(param_4 + 4) ^ 0x8000000000000000;
  }
  uVar4 = uStack_80;
  uVar3 = local_88;
  dVar6 = -param_5;
  if (-param_5 <= param_5) {
    dVar6 = param_5;
  }
  local_e0 = &local_a8;
  local_98 = DAT_14c8464f0;
  local_a8 = (undefined4)DAT_14c8464e0;
  uStack_a4 = DAT_14c8464e0._4_4_;
  uStack_a0 = (undefined4)DAT_14c8464e8;
  uStack_9c = DAT_14c8464e8._4_4_;
  local_e8 = &local_c8;
  local_b8 = DAT_14c8464f0;
  local_c8 = (undefined4)DAT_14c8464e0;
  uStack_c4 = DAT_14c8464e0._4_4_;
  uStack_c0 = (undefined4)DAT_14c8464e8;
  uStack_bc = DAT_14c8464e8._4_4_;
  local_f0 = param_8;
  local_f8 = param_6;
  local_d8 = 0;
  uStack_84 = uVar7;
  uStack_7c = uVar8;
  FUN_146dbb7f8(param_1 + 0xea,param_3,&local_88,dVar6);
  uVar5 = (ulonglong)param_3;
  param_1[uVar5 + 0x10e] = *(longlong *)(param_2 + 0x120 + uVar5 * 8);
  lVar1 = param_1[3];
  lVar2 = *param_1;
  param_1[uVar5 + 0x8b] =
       (longlong)
       (((double)*(float *)(lVar1 + 0x30) - (double)*(float *)(lVar2 + 0x30)) *
        (double)CONCAT44(uVar7,uVar3) +
        ((double)*(float *)(lVar1 + 0x34) - (double)*(float *)(lVar2 + 0x34)) *
        (double)CONCAT44(uVar8,uVar4) +
       ((double)*(float *)(lVar1 + 0x38) - (double)*(float *)(lVar2 + 0x38)) *
       (double)CONCAT44(uVar10,uVar9));
  if ((local_70 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    FUN_146db807c(param_1,param_1 + 0xea,param_3,param_7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dbdebc FUN_146dbdebc body=715 status=ok
// SIG undefined FUN_146dbdebc(void)

void FUN_146dbdebc(longlong *param_1)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_e8 [32];
  float local_c8 [12];
  float local_98 [4];
  float local_88;
  undefined8 local_78;
  float local_68 [4];
  float local_58;
  undefined8 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar7 = *param_1;
  lVar6 = param_1[3];
  auVar12 = insertps(ZEXT416(*(uint *)(lVar7 + 0x10)),*(undefined4 *)(lVar7 + 0x14),0x10);
  auVar18 = insertps(ZEXT416(*(uint *)(lVar6 + 0x10)),*(undefined4 *)(lVar6 + 0x14),0x10);
  fVar22 = auVar18._0_4_ - auVar12._0_4_;
  fVar23 = auVar18._4_4_ - auVar12._4_4_;
  fVar24 = *(float *)(lVar6 + 0x18) - *(float *)(lVar7 + 0x18);
  lVar8 = 0;
  do {
    auVar12._4_4_ = fVar23;
    auVar12._0_4_ = fVar22;
    auVar12._8_4_ = fVar24;
    auVar12._12_4_ = 0;
    auVar12 = dpps(*(undefined1 (*) [16])((longlong)param_1 + lVar8 + 0x7a0),auVar12,0xff);
    *(undefined1 (*) [16])((longlong)local_68 + lVar8) = auVar12;
    lVar8 = lVar8 + 0x10;
  } while (lVar8 != 0x30);
  fVar25 = local_68[0] + *(float *)(param_1 + 0x10c);
  fVar26 = local_58 + *(float *)((longlong)param_1 + 0x864);
  fVar27 = (float)local_48 + *(float *)(param_1 + 0x10d);
  fVar28 = (float)((ulonglong)local_48 >> 0x20) + *(float *)((longlong)param_1 + 0x86c);
  fVar11 = *(float *)(param_1 + 0xfa);
  fVar3 = *(float *)((longlong)param_1 + 0x7d4);
  fVar4 = *(float *)(param_1 + 0xfb);
  fVar5 = *(float *)((longlong)param_1 + 0x7dc);
  auVar19._0_8_ = CONCAT44(-(uint)(fVar3 < fVar26),-(uint)(fVar11 < fVar25));
  auVar19._8_4_ = -(uint)(fVar4 < fVar27);
  auVar19._12_4_ = -(uint)(fVar5 < fVar28);
  iVar9 = -(uint)(fVar27 < 0.0 - fVar4);
  iVar10 = -(uint)(fVar28 < 0.0 - fVar5);
  auVar16._0_8_ = CONCAT44(-(uint)(fVar26 < 0.0 - fVar3),-(uint)(fVar25 < 0.0 - fVar11));
  auVar16._8_4_ = iVar9;
  auVar16._12_4_ = iVar10;
  auVar20._4_4_ = fVar26;
  auVar20._0_4_ = fVar25;
  auVar20._8_4_ = fVar27;
  auVar20._12_4_ = fVar28;
  auVar13._8_4_ = iVar9;
  auVar13._0_8_ = auVar16._0_8_;
  auVar13._12_4_ = iVar10;
  auVar2._4_4_ = fVar26 + fVar3;
  auVar2._0_4_ = fVar25 + fVar11;
  auVar2._8_4_ = fVar27 + fVar4;
  auVar2._12_4_ = fVar28 + fVar5;
  auVar12 = blendvps(auVar20,auVar2,auVar13);
  auVar14._8_4_ = -(uint)(fVar4 < fVar27);
  auVar14._0_8_ = auVar19._0_8_;
  auVar14._12_4_ = -(uint)(fVar5 < fVar28);
  auVar18._4_4_ = fVar26 - fVar3;
  auVar18._0_4_ = fVar25 - fVar11;
  auVar18._8_4_ = fVar27 - fVar4;
  auVar18._12_4_ = fVar28 - fVar5;
  auVar12 = blendvps(auVar12,auVar18,auVar14);
  fVar11 = (float)(double)param_1[0x6c];
  auVar16 = auVar16 | auVar19;
  auVar17._0_4_ = auVar16._0_4_ & -(uint)(fVar11 < ABS(auVar12._0_4_));
  auVar17._4_4_ = auVar16._4_4_ & -(uint)(fVar11 < ABS(auVar12._4_4_));
  auVar17._8_4_ = auVar16._8_4_ & -(uint)(fVar11 < ABS(auVar12._8_4_));
  auVar17._12_4_ = auVar16._12_4_ & -(uint)(fVar11 < ABS(auVar12._12_4_));
  iVar9 = movmskps(0x30,auVar17);
  if (iVar9 != 0) {
    auVar15._0_4_ = *(float *)(param_1 + 0x32) - (fVar22 + *(float *)(param_1 + 0x34));
    auVar15._4_4_ =
         *(float *)((longlong)param_1 + 0x194) - (fVar23 + *(float *)((longlong)param_1 + 0x1a4));
    auVar15._8_4_ = *(float *)(param_1 + 0x33) - (fVar24 + *(float *)(param_1 + 0x35));
    auVar15._12_4_ =
         *(float *)((longlong)param_1 + 0x19c) - (*(float *)((longlong)param_1 + 0x1ac) + 0.0);
    lVar8 = 0;
    do {
      auVar18 = dpps(*(undefined1 (*) [16])((longlong)param_1 + lVar8 + 0x7a0),auVar15,0xff);
      *(undefined1 (*) [16])((longlong)local_98 + lVar8) = auVar18;
      lVar8 = lVar8 + 0x10;
    } while (lVar8 != 0x30);
    fVar22 = (float)(double)param_1[0x6a];
    auVar21._0_4_ =
         auVar12._0_4_ * *(float *)(param_1 + 0xec) -
         (local_98[0] * *(float *)(param_1 + 0xee) + *(float *)(param_1 + 0x10e));
    auVar21._4_4_ =
         auVar12._4_4_ * *(float *)((longlong)param_1 + 0x764) -
         (local_88 * *(float *)((longlong)param_1 + 0x774) + *(float *)((longlong)param_1 + 0x874));
    auVar21._8_4_ =
         auVar12._8_4_ * *(float *)(param_1 + 0xed) -
         ((float)local_78 * *(float *)(param_1 + 0xef) + *(float *)(param_1 + 0x10f));
    auVar21._12_4_ =
         auVar12._12_4_ * *(float *)((longlong)param_1 + 0x76c) -
         ((float)((ulonglong)local_78 >> 0x20) * *(float *)((longlong)param_1 + 0x77c) +
         *(float *)((longlong)param_1 + 0x87c));
    auVar12 = divps(auVar21,*(undefined1 (*) [16])(param_1 + 0xfc));
    local_c8[0] = (float)(auVar17._0_4_ & (uint)(auVar12._0_4_ * fVar22));
    local_c8[4] = (float)(auVar17._4_4_ & (uint)(auVar12._4_4_ * fVar22));
    local_c8[8] = (float)(auVar17._8_4_ & (uint)(auVar12._8_4_ * fVar22));
    *(float *)(param_1 + 0x10e) = *(float *)(param_1 + 0x10e) + local_c8[0];
    *(float *)((longlong)param_1 + 0x874) = *(float *)((longlong)param_1 + 0x874) + local_c8[4];
    *(float *)(param_1 + 0x10f) = *(float *)(param_1 + 0x10f) + local_c8[8];
    *(float *)((longlong)param_1 + 0x87c) =
         *(float *)((longlong)param_1 + 0x87c) +
         (float)(auVar17._12_4_ & (uint)(auVar12._12_4_ * fVar22));
    local_c8[1] = local_c8[0];
    local_c8[2] = local_c8[0];
    local_c8[3] = local_c8[0];
    local_c8[5] = local_c8[4];
    local_c8[6] = local_c8[4];
    local_c8[7] = local_c8[4];
    local_c8[9] = local_c8[8];
    local_c8[10] = local_c8[8];
    local_c8[0xb] = local_c8[8];
    if (1.1754944e-38 <
        *(float *)(param_1 + 2) * *(float *)(param_1 + 1) * *(float *)(lVar7 + 0x134)) {
      fVar22 = 0.0;
      fVar23 = 0.0;
      fVar24 = 0.0;
      lVar6 = 0;
      do {
        pfVar1 = (float *)((longlong)param_1 + lVar6 * 2 + 0x800);
        fVar22 = fVar22 + *(float *)((longlong)local_c8 + lVar6) * *pfVar1;
        fVar23 = fVar23 + *(float *)((longlong)local_c8 + lVar6 + 4) * pfVar1[1];
        fVar24 = fVar24 + *(float *)((longlong)local_c8 + lVar6 + 8) * pfVar1[2];
        lVar6 = lVar6 + 0x10;
      } while (lVar6 != 0x30);
      *(float *)(lVar7 + 0x10) = fVar22 + *(float *)(lVar7 + 0x10);
      *(float *)(lVar7 + 0x14) = fVar23 + *(float *)(lVar7 + 0x14);
      *(float *)(lVar7 + 0x18) = fVar24 + *(float *)(lVar7 + 0x18);
      lVar6 = param_1[3];
    }
    if (1.1754944e-38 <
        *(float *)(param_1 + 5) * *(float *)(param_1 + 4) * *(float *)(lVar6 + 0x134)) {
      fVar22 = 0.0;
      fVar23 = 0.0;
      fVar24 = 0.0;
      lVar7 = 0;
      do {
        pfVar1 = (float *)((longlong)param_1 + lVar7 * 2 + 0x810);
        fVar22 = fVar22 + *(float *)((longlong)local_c8 + lVar7) * *pfVar1;
        fVar23 = fVar23 + *(float *)((longlong)local_c8 + lVar7 + 4) * pfVar1[1];
        fVar24 = fVar24 + *(float *)((longlong)local_c8 + lVar7 + 8) * pfVar1[2];
        lVar7 = lVar7 + 0x10;
      } while (lVar7 != 0x30);
      *(float *)(lVar6 + 0x10) = fVar22 + *(float *)(lVar6 + 0x10);
      *(float *)(lVar6 + 0x14) = fVar23 + *(float *)(lVar6 + 0x14);
      *(float *)(lVar6 + 0x18) = fVar24 + *(float *)(lVar6 + 0x18);
    }
    *(int *)(param_1 + 0x8e) = (int)param_1[0x8e] + 3;
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dbe188 FUN_146dbe188 body=392 status=ok
// SIG undefined FUN_146dbe188(void)

void FUN_146dbe188(longlong *param_1,uint param_2,undefined8 param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  byte bVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  
  uVar6 = (ulonglong)param_2;
  lVar2 = *param_1;
  lVar3 = param_1[3];
  dVar8 = (double)(*(float *)(lVar3 + 0x10) - *(float *)(lVar2 + 0x10)) *
          (double)param_1[uVar6 * 3 + 0x105] +
          (double)(*(float *)(lVar3 + 0x14) - *(float *)(lVar2 + 0x14)) *
          (double)param_1[uVar6 * 3 + 0x106];
  dVar7 = (double)(*(float *)(lVar3 + 0x18) - *(float *)(lVar2 + 0x18)) *
          (double)param_1[uVar6 * 3 + 0x107] + dVar8 + (double)param_1[uVar6 + 0x129];
  bVar5 = (char)param_2 * '\b';
  bVar1 = *(byte *)(param_1 + 0x142);
  if ((bVar1 & (byte)(0x201008 >> (bVar5 & 0x1f))) == 0) {
LAB_146dbe24e:
    bVar4 = false;
  }
  else {
    dVar8 = (double)param_1[uVar6 + 0x10e];
    if (dVar7 <= dVar8) {
      if (-dVar8 <= dVar7) goto LAB_146dbe24e;
      dVar7 = dVar7 + dVar8;
    }
    else {
      dVar7 = dVar7 - dVar8;
    }
    bVar4 = true;
  }
  if ((bVar1 & (byte)(0x201008 >> (bVar5 & 0x1f))) != 0) {
    if (!bVar4 || (bVar1 & (byte)(0x201008 >> (bVar5 & 0x1f))) == 0) {
      return;
    }
    dVar8 = ABS(dVar7);
    if (dVar8 < (double)param_1[0x6c] || dVar8 == (double)param_1[0x6c]) {
      return;
    }
  }
  if (param_2 == 0) {
    bVar1 = bVar1 & 0x40;
  }
  else {
    if (param_2 != 2) {
      if ((char)bVar1 < '\0') goto LAB_146dbe2f9;
      goto LAB_146dbe29e;
    }
    bVar1 = *(byte *)((longlong)param_1 + 0xa11) & 1;
  }
  if (bVar1 != 0) {
LAB_146dbe2f9:
    FUN_146dbe4ec(param_1,dVar8,dVar7,param_3);
    return;
  }
LAB_146dbe29e:
  dVar8 = (dVar7 * (double)param_1[0x6a] * (double)param_1[uVar6 + 0xea]) /
          (double)param_1[uVar6 + 0x114];
  dVar7 = (double)param_1[uVar6 + 300] + dVar8;
  param_1[uVar6 + 300] = (longlong)dVar7;
  FUN_146dbe310(param_1,dVar7,dVar8,0,param_1 + 0xea);
  return;
}



// FUNCTION 146dbe310 FUN_146dbe310 body=475 status=ok
// SIG undefined FUN_146dbe310(void)

void FUN_146dbe310(longlong *param_1,uint param_2,double param_3,char param_4,longlong param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  uVar2 = (ulonglong)param_2;
  dVar9 = *(double *)(param_5 + 0xe8 + uVar2 * 0x18);
  dVar4 = dVar9 * param_3;
  dVar7 = *(double *)(param_5 + 0xd8 + uVar2 * 0x18);
  dVar8 = *(double *)(param_5 + 0xe0 + uVar2 * 0x18);
  dVar5 = dVar8 * param_3;
  lVar1 = *param_1;
  dVar6 = dVar7 * param_3;
  if (1.1754944e-38 < *(float *)(param_1 + 2) * *(float *)(param_1 + 1) * *(float *)(lVar1 + 0x134))
  {
    lVar3 = uVar2 * 0x30 + param_5;
    if (param_4 == '\0') {
      dVar8 = *(double *)(lVar3 + 0x178) * param_3;
      dVar9 = *(double *)(lVar3 + 0x170) * param_3;
      dVar7 = *(double *)(lVar3 + 0x168) * param_3;
    }
    else {
      dVar7 = dVar9 * *(double *)(lVar3 + 0x178) +
              dVar7 * *(double *)(lVar3 + 0x168) + dVar8 * *(double *)(lVar3 + 0x170);
      dVar8 = dVar4 * dVar7;
      dVar9 = dVar5 * dVar7;
      dVar7 = dVar7 * dVar6;
    }
    *(float *)(lVar1 + 0x10) = (float)dVar7 + *(float *)(lVar1 + 0x10);
    *(float *)(lVar1 + 0x14) = (float)dVar9 + *(float *)(lVar1 + 0x14);
    *(float *)(lVar1 + 0x18) = (float)dVar8 + *(float *)(lVar1 + 0x18);
  }
  lVar1 = param_1[3];
  if (1.1754944e-38 < *(float *)(param_1 + 5) * *(float *)(param_1 + 4) * *(float *)(lVar1 + 0x134))
  {
    lVar3 = uVar2 * 0x30 + param_5;
    if (param_4 == '\0') {
      dVar4 = *(double *)(lVar3 + 400) * param_3;
      dVar5 = *(double *)(lVar3 + 0x188) * param_3;
      dVar6 = param_3 * *(double *)(lVar3 + 0x180);
    }
    else {
      param_5 = param_5 + uVar2 * 0x18;
      dVar9 = *(double *)(param_5 + 0xe8) * *(double *)(lVar3 + 400) +
              *(double *)(param_5 + 0xd8) * *(double *)(lVar3 + 0x180) +
              *(double *)(lVar3 + 0x188) * *(double *)(param_5 + 0xe0);
      dVar4 = dVar4 * dVar9;
      dVar5 = dVar5 * dVar9;
      dVar6 = dVar6 * dVar9;
    }
    *(float *)(lVar1 + 0x10) = (float)dVar6 + *(float *)(lVar1 + 0x10);
    *(float *)(lVar1 + 0x14) = (float)dVar5 + *(float *)(lVar1 + 0x14);
    *(float *)(lVar1 + 0x18) = (float)dVar4 + *(float *)(lVar1 + 0x18);
  }
  *(int *)(param_1 + 0x8e) = (int)param_1[0x8e] + 1;
  return;
}



// FUNCTION 146dbe4ec FUN_146dbe4ec body=329 status=ok
// SIG undefined FUN_146dbe4ec(void)

void FUN_146dbe4ec(longlong *param_1,uint param_2,double param_3,double param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  
  uVar3 = (ulonglong)param_2;
  dVar5 = 0.0;
  if (9.999999747378752e-05 < (double)param_1[uVar3 + 0xf0]) {
    lVar1 = *param_1;
    lVar2 = param_1[3];
    dVar5 = param_4 * 0.0 +
            (((double)*(float *)(lVar1 + 0x18) + (double)param_1[0x2e]) -
            ((double)*(float *)(lVar2 + 0x18) + (double)param_1[0x31])) *
            (double)param_1[uVar3 * 3 + 0x107] +
            (((double)*(float *)(lVar1 + 0x10) + (double)param_1[0x2c]) -
            ((double)*(float *)(lVar2 + 0x10) + (double)param_1[0x2f])) *
            (double)param_1[uVar3 * 3 + 0x105] +
            (((double)*(float *)(lVar1 + 0x14) + (double)param_1[0x2d]) -
            ((double)*(float *)(lVar2 + 0x14) + (double)param_1[0x30])) *
            (double)param_1[uVar3 * 3 + 0x106];
  }
  dVar5 = dVar5 * (double)param_1[uVar3 + 0xf0];
  dVar4 = (double)param_1[uVar3 + 300] +
          (((param_3 * (double)param_1[uVar3 + 0xed] - dVar5) - (double)param_1[uVar3 + 300]) *
          (double)param_1[0x6a]) / (double)param_1[uVar3 + 0x111];
  param_1[uVar3 + 300] = (longlong)dVar4;
  FUN_146dbe310(dVar4,dVar5,param_1 + 0xea,0,param_1 + 0xea);
  return;
}



// FUNCTION 146dbe636 FUN_146dbe636 body=678 status=ok
// SIG undefined FUN_146dbe636(void)

void FUN_146dbe636(longlong *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auStack_a8 [32];
  float local_88 [14];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  fVar15 = *(float *)(param_1 + 0x10e);
  fVar16 = *(float *)(param_1 + 0x10f);
  uVar14 = -(uint)(1e-08 < ABS(*(float *)((longlong)param_1 + 0x874)));
  auVar23._4_4_ = uVar14;
  auVar23._0_4_ = -(uint)(1e-08 < ABS(fVar15));
  auVar23._8_4_ = -(uint)(1e-08 < ABS(fVar16));
  auVar23._12_4_ = -(uint)(1e-08 < ABS(*(float *)((longlong)param_1 + 0x87c)));
  iVar10 = movmskps((int)local_50,auVar23);
  if (iVar10 != 0) {
    fVar17 = 0.0;
    fVar18 = 0.0;
    fVar19 = 0.0;
    auVar5._4_4_ = -(uint)((float)(double)param_1[0x13d] != 0.0);
    auVar5._0_4_ = -(uint)((float)(double)param_1[0x13c] != 0.0);
    auVar5._8_4_ = -(uint)((float)(double)param_1[0x13e] != 0.0);
    auVar5._12_4_ = 0;
    iVar10 = movmskps(iVar10,auVar5);
    if (iVar10 != 0) {
      fVar17 = (float)(-(uint)(DAT_14c75f19c < (float)(double)param_1[0x8b]) &
                      (uint)((0.0 - (float)(double)param_1[0x13c]) * (float)(double)param_1[0x8b]));
      fVar18 = (float)(-(uint)(DAT_14c75f19c < (float)(double)param_1[0x8c]) &
                      (uint)((0.0 - (float)(double)param_1[0x13d]) * (float)(double)param_1[0x8c]));
      fVar19 = (float)(-(uint)(DAT_14c75f19c < (float)(double)param_1[0x8d]) &
                      (uint)((0.0 - (float)(double)param_1[0x13e]) * (float)(double)param_1[0x8d]));
    }
    lVar12 = *param_1;
    lVar11 = param_1[3];
    fVar2 = *(float *)(lVar12 + 0x38);
    fVar3 = *(float *)(lVar12 + 0x30);
    fVar4 = *(float *)(lVar12 + 0x34);
    fVar22 = (float)(double)param_1[0x6a];
    auVar20._0_4_ = *(float *)(lVar11 + 0x30) - fVar3;
    auVar20._4_4_ = (float)((ulonglong)*(undefined8 *)(lVar11 + 0x30) >> 0x20) - fVar4;
    auVar20._8_4_ = *(float *)(lVar11 + 0x38) - fVar2;
    auVar20._12_4_ = 0;
    fVar6 = *(float *)(param_1 + 0xea);
    fVar7 = *(float *)((longlong)param_1 + 0x754);
    fVar8 = *(float *)(param_1 + 0xeb);
    fVar9 = *(float *)((longlong)param_1 + 0x75c);
    lVar13 = 0;
    do {
      auVar23 = dpps(*(undefined1 (*) [16])((longlong)param_1 + lVar13 + 0x7a0),auVar20,0xff);
      *(undefined1 (*) [16])((longlong)local_88 + lVar13) = auVar23;
      lVar13 = lVar13 + 0x10;
    } while (lVar13 != 0x30);
    auVar21._0_4_ = (local_88[0] - fVar17) * fVar6 * fVar22;
    auVar21._4_4_ = (local_88[4] - fVar18) * fVar7 * fVar22;
    auVar21._8_4_ = (local_88[8] - fVar19) * fVar8 * fVar22;
    auVar21._12_4_ = (local_88[9] - 0.0) * fVar9 * fVar22;
    auVar23 = divps(auVar21,*(undefined1 (*) [16])(param_1 + 0xfe));
    local_88[0] = (float)(-(uint)(1e-08 < ABS(fVar15)) & auVar23._0_4_);
    local_88[4] = (float)(uVar14 & auVar23._4_4_);
    local_88[8] = (float)(-(uint)(1e-08 < ABS(fVar16)) & auVar23._8_4_);
    local_88[1] = local_88[0];
    local_88[2] = local_88[0];
    local_88[3] = local_88[0];
    local_88[5] = local_88[4];
    local_88[6] = local_88[4];
    local_88[7] = local_88[4];
    local_88[9] = local_88[8];
    local_88[10] = local_88[8];
    local_88[0xb] = local_88[8];
    if (1.1754944e-38 <
        *(float *)(param_1 + 2) * *(float *)(param_1 + 1) * *(float *)(lVar12 + 0x134)) {
      fVar15 = 0.0;
      fVar16 = 0.0;
      fVar17 = 0.0;
      lVar11 = 0;
      do {
        pfVar1 = (float *)((longlong)param_1 + lVar11 * 2 + 0x800);
        fVar15 = fVar15 + *(float *)((longlong)local_88 + lVar11) * *pfVar1;
        fVar16 = fVar16 + *(float *)((longlong)local_88 + lVar11 + 4) * pfVar1[1];
        fVar17 = fVar17 + *(float *)((longlong)local_88 + lVar11 + 8) * pfVar1[2];
        lVar11 = lVar11 + 0x10;
      } while (lVar11 != 0x30);
      *(float *)(lVar12 + 0x30) = fVar3 + fVar15;
      *(float *)(lVar12 + 0x34) = fVar4 + fVar16;
      *(float *)(lVar12 + 0x38) = fVar2 + fVar17;
      lVar11 = param_1[3];
    }
    if (1.1754944e-38 <
        *(float *)(param_1 + 5) * *(float *)(param_1 + 4) * *(float *)(lVar11 + 0x134)) {
      fVar15 = 0.0;
      fVar16 = 0.0;
      fVar17 = 0.0;
      lVar12 = 0;
      do {
        pfVar1 = (float *)((longlong)param_1 + lVar12 * 2 + 0x810);
        fVar15 = fVar15 + *(float *)((longlong)local_88 + lVar12) * *pfVar1;
        fVar16 = fVar16 + *(float *)((longlong)local_88 + lVar12 + 4) * pfVar1[1];
        fVar17 = fVar17 + *(float *)((longlong)local_88 + lVar12 + 8) * pfVar1[2];
        lVar12 = lVar12 + 0x10;
      } while (lVar12 != 0x30);
      *(float *)(lVar11 + 0x30) = fVar15 + *(float *)(lVar11 + 0x30);
      *(float *)(lVar11 + 0x34) = fVar16 + *(float *)(lVar11 + 0x34);
      *(float *)(lVar11 + 0x38) = fVar17 + *(float *)(lVar11 + 0x38);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dbe8de FUN_146dbe8de body=156 status=ok
// SIG undefined FUN_146dbe8de(void)

void FUN_146dbe8de(longlong *param_1,double param_2)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  uint in_EDX;
  byte bVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  
  if (ABS((double)param_1[(ulonglong)in_EDX + 300]) <= 9.99999993922529e-09) {
    return;
  }
  if (in_EDX == 2) {
    bVar4 = *(byte *)((longlong)param_1 + 0xa12);
  }
  else if (in_EDX == 1) {
    bVar4 = *(byte *)((longlong)param_1 + 0xa11) >> 5;
  }
  else {
    bVar4 = *(byte *)((longlong)param_1 + 0xa11) >> 3;
  }
  if ((bVar4 & 3) == 1) {
    dVar6 = (double)param_1[(ulonglong)in_EDX + 0x13c];
    if ((dVar6 != 0.0) || (dVar7 = 0.0, NAN(dVar6))) {
      if ((double)param_1[(ulonglong)in_EDX + 0x8b] <= (double)DAT_14c75f19c)
      goto code_r0x000146dbe97a;
      dVar6 = -dVar6;
      param_2 = (double)param_1[(ulonglong)in_EDX + 0x8b] * dVar6;
      dVar7 = param_2;
    }
    FUN_146dbe97a(dVar6,param_2,dVar7);
    return;
  }
code_r0x000146dbe97a:
  lVar3 = param_1[3];
  lVar2 = *param_1;
  uVar5 = (ulonglong)in_EDX;
  dVar6 = (((((double)*(float *)(lVar3 + 0x38) - (double)*(float *)(lVar2 + 0x38)) *
             (double)param_1[uVar5 * 3 + 0x107] +
            ((double)*(float *)(lVar3 + 0x30) - (double)*(float *)(lVar2 + 0x30)) *
            (double)param_1[uVar5 * 3 + 0x105] +
            ((double)*(float *)(lVar3 + 0x34) - (double)*(float *)(lVar2 + 0x34)) *
            (double)param_1[uVar5 * 3 + 0x106]) - 0.0) *
          (double)param_1[0x6a] * (double)param_1[uVar5 + 0xea]) / (double)param_1[uVar5 + 0x114];
  if (1.1754944e-38 < *(float *)(param_1 + 2) * *(float *)(param_1 + 1) * *(float *)(lVar2 + 0x134))
  {
    dVar7 = (double)param_1[uVar5 * 6 + 0x119];
    dVar1 = (double)param_1[uVar5 * 6 + 0x118];
    *(float *)(lVar2 + 0x30) =
         *(float *)(lVar2 + 0x30) + (float)((double)param_1[uVar5 * 6 + 0x117] * dVar6);
    *(float *)(lVar2 + 0x34) = *(float *)(lVar2 + 0x34) + (float)(dVar1 * dVar6);
    *(float *)(lVar2 + 0x38) = *(float *)(lVar2 + 0x38) + (float)(dVar7 * dVar6);
    lVar3 = param_1[3];
  }
  if (1.1754944e-38 < *(float *)(param_1 + 5) * *(float *)(param_1 + 4) * *(float *)(lVar3 + 0x134))
  {
    dVar7 = (double)param_1[uVar5 * 6 + 0x11c];
    dVar1 = (double)param_1[uVar5 * 6 + 0x11b];
    *(float *)(lVar3 + 0x30) =
         (float)(dVar6 * (double)param_1[uVar5 * 6 + 0x11a]) + *(float *)(lVar3 + 0x30);
    *(float *)(lVar3 + 0x34) = (float)(dVar1 * dVar6) + *(float *)(lVar3 + 0x34);
    *(float *)(lVar3 + 0x38) = (float)(dVar7 * dVar6) + *(float *)(lVar3 + 0x38);
  }
  return;
}



// FUNCTION 146dbe97a FUN_146dbe97a body=421 status=ok
// SIG undefined FUN_146dbe97a(void)

void FUN_146dbe97a(longlong *param_1,uint param_2,double param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  double dVar6;
  
  lVar4 = param_1[3];
  lVar3 = *param_1;
  uVar5 = (ulonglong)param_2;
  dVar6 = (((((double)*(float *)(lVar4 + 0x38) - (double)*(float *)(lVar3 + 0x38)) *
             (double)param_1[uVar5 * 3 + 0x107] +
            ((double)*(float *)(lVar4 + 0x30) - (double)*(float *)(lVar3 + 0x30)) *
            (double)param_1[uVar5 * 3 + 0x105] +
            ((double)*(float *)(lVar4 + 0x34) - (double)*(float *)(lVar3 + 0x34)) *
            (double)param_1[uVar5 * 3 + 0x106]) - param_3) *
          (double)param_1[0x6a] * (double)param_1[uVar5 + 0xea]) / (double)param_1[uVar5 + 0x114];
  if (1.1754944e-38 < *(float *)(param_1 + 2) * *(float *)(param_1 + 1) * *(float *)(lVar3 + 0x134))
  {
    dVar1 = (double)param_1[uVar5 * 6 + 0x119];
    dVar2 = (double)param_1[uVar5 * 6 + 0x118];
    *(float *)(lVar3 + 0x30) =
         *(float *)(lVar3 + 0x30) + (float)((double)param_1[uVar5 * 6 + 0x117] * dVar6);
    *(float *)(lVar3 + 0x34) = *(float *)(lVar3 + 0x34) + (float)(dVar2 * dVar6);
    *(float *)(lVar3 + 0x38) = *(float *)(lVar3 + 0x38) + (float)(dVar1 * dVar6);
    lVar4 = param_1[3];
  }
  if (1.1754944e-38 < *(float *)(param_1 + 5) * *(float *)(param_1 + 4) * *(float *)(lVar4 + 0x134))
  {
    dVar1 = (double)param_1[uVar5 * 6 + 0x11c];
    dVar2 = (double)param_1[uVar5 * 6 + 0x11b];
    *(float *)(lVar4 + 0x30) =
         (float)(dVar6 * (double)param_1[uVar5 * 6 + 0x11a]) + *(float *)(lVar4 + 0x30);
    *(float *)(lVar4 + 0x34) = (float)(dVar2 * dVar6) + *(float *)(lVar4 + 0x34);
    *(float *)(lVar4 + 0x38) = (float)(dVar1 * dVar6) + *(float *)(lVar4 + 0x38);
  }
  return;
}



// FUNCTION 146dbeb20 FUN_146dbeb20 body=451 status=ok
// SIG undefined FUN_146dbeb20(void)

void FUN_146dbeb20(longlong param_1,uint param_2,double *param_3,double *param_4,double *param_5,
                  undefined8 param_6)

{
  undefined4 *puVar1;
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
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  longlong lVar26;
  ulonglong uVar27;
  
  uVar27 = (ulonglong)param_2;
  dVar2 = *(double *)(param_1 + 0x100);
  dVar3 = *(double *)(param_1 + 0xf0);
  dVar4 = *(double *)(param_1 + 0xf8);
  dVar5 = *(double *)(param_1 + 0x118);
  dVar6 = *(double *)(param_1 + 0x110);
  dVar7 = *(double *)(param_1 + 0x108);
  dVar8 = *param_3;
  dVar9 = param_3[1];
  dVar10 = param_3[2];
  dVar11 = param_4[1];
  dVar12 = *param_4;
  dVar13 = param_4[2];
  dVar14 = param_5[1];
  dVar15 = *param_5;
  dVar16 = param_5[2];
  dVar17 = *(double *)(param_1 + 0x3e0);
  dVar18 = *(double *)(param_1 + 1000);
  dVar19 = *(double *)(param_1 + 0x3f0);
  dVar20 = *(double *)(param_1 + 0x3c8);
  dVar21 = *(double *)(param_1 + 0x3d0);
  dVar22 = *(double *)(param_1 + 0x3d8);
  *(byte *)(param_1 + 0xce0) =
       *(byte *)(param_1 + 0xce0) | (byte)(0x241209 >> ((char)param_2 * '\b' & 0x1fU));
  *(double *)(param_1 + 0xc18 + uVar27 * 8) = dVar13 * dVar10 + dVar12 * dVar8 + dVar11 * dVar9;
  *(double *)(param_1 + 0xc98 + uVar27 * 8) = dVar10 * dVar16 + dVar8 * dVar15 + dVar9 * dVar14;
  *(undefined8 *)(param_1 + 0xcb0 + uVar27 * 8) = 0;
  lVar26 = uVar27 * 0x30;
  *(double *)(param_1 + 0xa68 + lVar26) = dVar3 - dVar20;
  *(double *)(param_1 + 0xa70 + lVar26) = dVar4 - dVar21;
  *(double *)(param_1 + 0xa78 + lVar26) = dVar2 - dVar22;
  *(double *)(param_1 + 0xa80 + lVar26) = dVar7 - dVar17;
  *(double *)(param_1 + 0xa88 + lVar26) = dVar6 - dVar18;
  *(double *)(param_1 + 0xa90 + lVar26) = dVar5 - dVar19;
  *(double *)(param_1 + 0xb08 + uVar27 * 0x18) = param_3[2];
  uVar23 = *(undefined4 *)((longlong)param_3 + 4);
  uVar24 = *(undefined4 *)(param_3 + 1);
  uVar25 = *(undefined4 *)((longlong)param_3 + 0xc);
  puVar1 = (undefined4 *)(param_1 + 0xaf8 + uVar27 * 0x18);
  *puVar1 = *(undefined4 *)param_3;
  puVar1[1] = uVar23;
  puVar1[2] = uVar24;
  puVar1[3] = uVar25;
  FUN_146db7d40(param_1,param_1 + 0xa20,param_2,param_6);
  return;
}



// FUNCTION 146dbece4 FUN_146dbece4 body=313 status=ok
// SIG undefined FUN_146dbece4(void)

void FUN_146dbece4(longlong param_1,double param_2,longlong param_3,longlong param_4,char param_5)

{
  float *pfVar1;
  float fVar2;
  
  if ((*(char *)(param_4 + 0xf9) == '\x01') && (0.0 < *(double *)(param_1 + 0x240))) {
    *(undefined8 *)(param_1 + 0x350) = 0x3ff0000000000000;
    if (*(char *)(param_3 + 0x43) == '\x01') {
      FUN_146dbee1e(param_1,param_3,param_4);
      FUN_146dbeeb8(param_1,param_3,param_4);
    }
    else {
      FUN_146dbeeb8(param_1,param_3,param_4);
      FUN_146dbee1e(param_1,param_3,param_4);
    }
    if ((param_5 != '\0') && (0.0 < DAT_14c75f1a0)) {
      fVar2 = DAT_14c75f1a0 / (float)param_2;
      pfVar1 = *(float **)(param_1 + 0x18);
      pfVar1[8] = *pfVar1 * fVar2 + pfVar1[8];
      pfVar1[9] = pfVar1[1] * fVar2 + pfVar1[9];
      pfVar1[10] = pfVar1[2] * fVar2 + pfVar1[10];
      pfVar1[0xc] = fVar2 * pfVar1[4] + pfVar1[0xc];
      pfVar1[0xd] = pfVar1[5] * fVar2 + pfVar1[0xd];
      pfVar1[0xe] = pfVar1[6] * fVar2 + pfVar1[0xe];
    }
  }
  return;
}



// FUNCTION 146dbee1e FUN_146dbee1e body=153 status=ok
// SIG undefined FUN_146dbee1e(void)

void FUN_146dbee1e(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  bool bVar2;
  double dVar3;
  
  dVar3 = (double)FUN_146decce0(param_2,param_3);
  if ((dVar3 != 0.0) || (NAN(dVar3))) {
    bVar2 = false;
    if ((*(int *)(param_3 + 0xfc) == 2) && (*(int *)(param_3 + 0x100) == 2)) {
      bVar2 = *(int *)(param_3 + 0x104) == 2;
    }
    if ((*(byte *)(param_1 + 0xa11) & 4) != 0) {
      FUN_146dbef28(param_1,(float)dVar3,bVar2);
      return;
    }
    iVar1 = 0;
    do {
      FUN_146dbf234(param_1,SUB84(dVar3,0),bVar2,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 != 3);
  }
  return;
}



// FUNCTION 146dbeeb8 FUN_146dbeeb8 body=111 status=ok
// SIG undefined FUN_146dbeeb8(void)

void FUN_146dbeeb8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  double dVar2;
  
  dVar2 = (double)FUN_146deccbc(param_2,param_3);
  if ((dVar2 != 0.0) || (NAN(dVar2))) {
    if ((*(byte *)(param_1 + 0x741) & 4) != 0) {
      FUN_146dbf548(param_1,dVar2);
      return;
    }
    iVar1 = 0;
    do {
      FUN_146dbf8de(param_1,dVar2,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 != 3);
  }
  return;
}



// FUNCTION 146dbef28 FUN_146dbef28 body=778 status=ok
// SIG undefined FUN_146dbef28(void)

void FUN_146dbef28(longlong *param_1,float param_2,char param_3)

{
  float *pfVar1;
  double *pdVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong lVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar16;
  float fVar17;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar18;
  float fVar21;
  float fVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_118 [32];
  float local_f8 [12];
  float local_c8 [4];
  float local_b8;
  undefined8 local_a8;
  float local_98 [4];
  float local_88;
  undefined8 local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar6 = *param_1;
  lVar3 = param_1[3];
  auVar11 = insertps(ZEXT416(*(uint *)(lVar6 + 0x10)),*(undefined4 *)(lVar6 + 0x14),0x10);
  fVar18 = *(float *)(lVar3 + 0x14);
  auVar12 = insertps(ZEXT416(*(uint *)(lVar3 + 0x10)),ZEXT416((uint)fVar18),0x10);
  fVar21 = *(float *)(lVar3 + 0x18);
  fVar22 = *(float *)(lVar3 + 0x10);
  auVar13._0_4_ = auVar12._0_4_ - auVar11._0_4_;
  auVar13._4_4_ = auVar12._4_4_ - auVar11._4_4_;
  auVar13._8_4_ = *(float *)(lVar3 + 0x18) - *(float *)(lVar6 + 0x18);
  auVar13._12_4_ = 0;
  lVar6 = 0;
  do {
    auVar11 = dpps(*(undefined1 (*) [16])((longlong)param_1 + lVar6 + 0x7a0),auVar13,0xff);
    *(undefined1 (*) [16])((longlong)local_98 + lVar6) = auVar11;
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0x30);
  fVar26 = local_98[0] + *(float *)(param_1 + 0x10c);
  fVar27 = local_88 + *(float *)((longlong)param_1 + 0x864);
  fVar28 = (float)local_78 + *(float *)(param_1 + 0x10d);
  fVar29 = (float)((ulonglong)local_78 >> 0x20) + *(float *)((longlong)param_1 + 0x86c);
  fVar10 = *(float *)(param_1 + 0xfa);
  fVar16 = *(float *)((longlong)param_1 + 0x7d4);
  fVar17 = *(float *)(param_1 + 0xfb);
  fVar23 = *(float *)((longlong)param_1 + 0x7dc);
  iVar7 = -(uint)(fVar28 < 0.0 - fVar17);
  iVar8 = -(uint)(fVar29 < 0.0 - fVar23);
  auVar19._0_8_ = CONCAT44(-(uint)(fVar27 < 0.0 - fVar16),-(uint)(fVar26 < 0.0 - fVar10));
  auVar19._8_4_ = iVar7;
  auVar19._12_4_ = iVar8;
  auVar24._4_4_ = fVar27;
  auVar24._0_4_ = fVar26;
  auVar24._8_4_ = fVar28;
  auVar24._12_4_ = fVar29;
  auVar14._8_4_ = iVar7;
  auVar14._0_8_ = auVar19._0_8_;
  auVar14._12_4_ = iVar8;
  auVar5._4_4_ = fVar27 + fVar16;
  auVar5._0_4_ = fVar26 + fVar10;
  auVar5._8_4_ = fVar28 + fVar17;
  auVar5._12_4_ = fVar29 + fVar23;
  auVar11 = blendvps(auVar24,auVar5,auVar14);
  auVar15._4_4_ = -(uint)(fVar16 < fVar27);
  auVar15._0_4_ = -(uint)(fVar10 < fVar26);
  auVar15._8_4_ = -(uint)(fVar17 < fVar28);
  auVar15._12_4_ = -(uint)(fVar23 < fVar29);
  auVar12._4_4_ = fVar27 - fVar16;
  auVar12._0_4_ = fVar26 - fVar10;
  auVar12._8_4_ = fVar28 - fVar17;
  auVar12._12_4_ = fVar29 - fVar23;
  auVar12 = blendvps(auVar11,auVar12,auVar15);
  fVar9 = (float)(double)param_1[0x6c];
  auVar11._4_4_ = -(uint)(fVar16 < fVar27);
  auVar11._0_4_ = -(uint)(fVar10 < fVar26);
  auVar11._8_4_ = -(uint)(fVar17 < fVar28);
  auVar11._12_4_ = -(uint)(fVar23 < fVar29);
  auVar19 = auVar19 | auVar11;
  auVar20._0_4_ = auVar19._0_4_ & -(uint)(fVar9 < ABS(auVar12._0_4_));
  auVar20._4_4_ = auVar19._4_4_ & -(uint)(fVar9 < ABS(auVar12._4_4_));
  auVar20._8_4_ = auVar19._8_4_ & -(uint)(fVar9 < ABS(auVar12._8_4_));
  auVar20._12_4_ = auVar19._12_4_ & -(uint)(fVar9 < ABS(auVar12._12_4_));
  iVar7 = movmskps(0x30,auVar20);
  if (iVar7 != 0) {
    lVar6 = 0;
    do {
      auVar11 = dpps(*(undefined1 (*) [16])((longlong)param_1 + lVar6 + 0x7a0),
                     *(undefined1 (*) [16])((longlong)param_1 + lVar6 * 2 + 0x810),0xff);
      *(undefined1 (*) [16])((longlong)local_c8 + lVar6) = auVar11;
      lVar6 = lVar6 + 0x10;
    } while (lVar6 != 0x30);
    fVar10 = 0.0;
    fVar16 = 0.0;
    fVar17 = 0.0;
    fVar23 = (float)(double)param_1[0x6a];
    auVar25._0_4_ = auVar12._0_4_ * fVar23 * *(float *)(param_1 + 0xea);
    auVar25._4_4_ = auVar12._4_4_ * fVar23 * *(float *)((longlong)param_1 + 0x754);
    auVar25._8_4_ = auVar12._8_4_ * fVar23 * *(float *)(param_1 + 0xeb);
    auVar25._12_4_ = auVar12._12_4_ * fVar23 * *(float *)((longlong)param_1 + 0x75c);
    auVar4._4_4_ = 0.0 - local_b8;
    auVar4._0_4_ = 0.0 - local_c8[0];
    auVar4._8_4_ = 0.0 - (float)local_a8;
    auVar4._12_4_ = 0.0 - (float)((ulonglong)local_a8 >> 0x20);
    auVar11 = divps(auVar25,auVar4);
    local_f8[0] = (float)(auVar20._0_4_ & auVar11._0_4_) * param_2;
    local_f8[4] = (float)(auVar20._4_4_ & auVar11._4_4_) * param_2;
    local_f8[8] = (float)(auVar20._8_4_ & auVar11._8_4_) * param_2;
    local_f8[1] = local_f8[0];
    local_f8[2] = local_f8[0];
    local_f8[3] = local_f8[0];
    local_f8[5] = local_f8[4];
    local_f8[6] = local_f8[4];
    local_f8[7] = local_f8[4];
    local_f8[9] = local_f8[8];
    local_f8[10] = local_f8[8];
    local_f8[0xb] = local_f8[8];
    lVar6 = 0;
    do {
      pfVar1 = (float *)((longlong)param_1 + lVar6 * 2 + 0x810);
      fVar10 = fVar10 + *(float *)((longlong)local_f8 + lVar6) * *pfVar1;
      fVar16 = fVar16 + *(float *)((longlong)local_f8 + lVar6 + 4) * pfVar1[1];
      fVar17 = fVar17 + *(float *)((longlong)local_f8 + lVar6 + 8) * pfVar1[2];
      lVar6 = lVar6 + 0x10;
    } while (lVar6 != 0x30);
    *(float *)(lVar3 + 0x10) = fVar22 + fVar10;
    *(float *)(lVar3 + 0x14) = fVar18 + fVar16;
    *(float *)(lVar3 + 0x18) = fVar21 + fVar17;
    if (param_3 != '\0') {
      fVar18 = 0.0;
      fVar21 = 0.0;
      fVar22 = 0.0;
      lVar6 = 0;
      do {
        if ((*(byte *)((longlong)param_1 + 0x741) & 4) == 0) {
          fVar26 = (float)*(double *)((longlong)param_1 + lVar6 + 0x4f0);
          pdVar2 = (double *)((longlong)param_1 + lVar6 + 0x4e0);
          fVar23 = (float)*pdVar2;
          fVar9 = (float)pdVar2[1];
        }
        else {
          fVar23 = *(float *)(param_1 + 0x98);
          fVar9 = *(float *)((longlong)param_1 + 0x4c4);
          fVar26 = *(float *)(param_1 + 0x99);
        }
        fVar18 = fVar18 + (fVar26 * fVar16 - fVar17 * fVar9) * (0.0 - param_2);
        fVar21 = fVar21 + (fVar23 * fVar17 - fVar10 * fVar26) * (0.0 - param_2);
        fVar22 = fVar22 + (fVar9 * fVar10 - fVar16 * fVar23) * (0.0 - param_2);
        lVar6 = lVar6 + 0x30;
      } while (lVar6 != 0x90);
      pfVar1 = (float *)param_1[3];
      *pfVar1 = fVar18 + *pfVar1;
      pfVar1[1] = fVar21 + pfVar1[1];
      pfVar1[2] = fVar22 + pfVar1[2];
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dbf234 FUN_146dbf234 body=788 status=ok
// SIG undefined FUN_146dbf234(void)

void FUN_146dbf234(longlong *param_1,double param_2,char param_3,uint param_4)

{
  double dVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  byte bVar6;
  bool bVar7;
  byte bVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  if (2 < param_4) {
    return;
  }
  bVar8 = (char)param_4 * '\b';
  bVar2 = *(byte *)(param_1 + 0x142);
  if ((bVar2 & (byte)(0x40201 >> (bVar8 & 0x1f))) == 0) {
    return;
  }
  if (param_4 == 0) {
    bVar6 = bVar2 & 0x40;
joined_r0x000146dbf29c:
    if (bVar6 != 0) {
      return;
    }
  }
  else {
    if (param_4 == 2) {
      bVar6 = *(byte *)((longlong)param_1 + 0xa11) & 1;
      goto joined_r0x000146dbf29c;
    }
    if ((char)bVar2 < '\0') {
      return;
    }
  }
  uVar9 = (ulonglong)param_4;
  lVar3 = *param_1;
  lVar4 = param_1[3];
  dVar13 = (double)(*(float *)(lVar4 + 0x18) - *(float *)(lVar3 + 0x18)) *
           (double)param_1[uVar9 * 3 + 0x107] +
           (double)(*(float *)(lVar4 + 0x10) - *(float *)(lVar3 + 0x10)) *
           (double)param_1[uVar9 * 3 + 0x105] +
           (double)(*(float *)(lVar4 + 0x14) - *(float *)(lVar3 + 0x14)) *
           (double)param_1[uVar9 * 3 + 0x106] + (double)param_1[uVar9 + 0x129];
  if ((bVar2 & (byte)(0x201008 >> (bVar8 & 0x1f))) == 0) {
LAB_146dbf379:
    bVar7 = false;
  }
  else {
    dVar1 = (double)param_1[uVar9 + 0x10e];
    if (dVar13 <= dVar1) {
      if (-dVar1 <= dVar13) goto LAB_146dbf379;
      dVar13 = dVar13 + dVar1;
    }
    else {
      dVar13 = dVar13 - dVar1;
    }
    bVar7 = true;
  }
  if (((bVar2 & (byte)(0x201008 >> (bVar8 & 0x1f))) == 0) ||
     ((bVar7 && (bVar2 & (byte)(0x201008 >> (bVar8 & 0x1f))) != 0 &&
      ((double)param_1[0x6c] <= ABS(dVar13) && ABS(dVar13) != (double)param_1[0x6c])))) {
    dVar14 = (dVar13 * (double)param_1[0x6a] * (double)param_1[uVar9 + 0xea]) /
             -((double)param_1[uVar9 * 3 + 0x107] * (double)param_1[uVar9 * 6 + 0x11c] +
              (double)param_1[uVar9 * 3 + 0x105] * (double)param_1[uVar9 * 6 + 0x11a] +
              (double)param_1[uVar9 * 3 + 0x106] * (double)param_1[uVar9 * 6 + 0x11b]);
    dVar13 = (double)param_1[uVar9 * 6 + 0x11c] * param_2 * dVar14;
    dVar1 = (double)param_1[uVar9 * 6 + 0x11b] * param_2 * dVar14;
    dVar14 = (double)param_1[uVar9 * 6 + 0x11a] * param_2 * dVar14;
    *(float *)(lVar4 + 0x10) = *(float *)(lVar4 + 0x10) + (float)dVar14;
    *(float *)(lVar4 + 0x14) = *(float *)(lVar4 + 0x14) + (float)dVar1;
    *(float *)(lVar4 + 0x18) = *(float *)(lVar4 + 0x18) + (float)dVar13;
    if (param_3 != '\0') {
      if ((*(byte *)((longlong)param_1 + 0x741) & 4) == 0) {
        dVar12 = (double)param_1[uVar9 * 6 + 0x9c];
        dVar10 = (double)param_1[uVar9 * 6 + 0x9d];
        dVar11 = (double)param_1[uVar9 * 6 + 0x9e];
      }
      else {
        dVar11 = (double)*(float *)(param_1 + 0x99);
        dVar10 = (double)*(float *)((longlong)param_1 + 0x4c4);
        dVar12 = (double)*(float *)(param_1 + 0x98);
      }
      pfVar5 = (float *)param_1[3];
      *pfVar5 = *pfVar5 - (float)((dVar1 * dVar11 - dVar10 * dVar13) * param_2);
      pfVar5[1] = pfVar5[1] - (float)((dVar13 * dVar12 - dVar11 * dVar14) * param_2);
      pfVar5[2] = pfVar5[2] - (float)((dVar14 * dVar10 - dVar12 * dVar1) * param_2);
    }
  }
  return;
}



// FUNCTION 146dbf548 FUN_146dbf548 body=917 status=ok
// SIG undefined FUN_146dbf548(void)

void FUN_146dbf548(undefined8 *param_1,double param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  uint *puVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  undefined1 auStack_168 [32];
  float local_148 [12];
  float local_118 [4];
  float local_108;
  undefined8 local_f8;
  float local_e8 [4];
  float local_d8;
  float local_c8;
  float fStack_c4;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  puVar6 = (uint *)*param_1;
  pfVar7 = (float *)param_1[3];
  fVar14 = (float)puVar6[2];
  auVar13 = insertps(ZEXT416(*puVar6),puVar6[1],0x10);
  fVar15 = (float)puVar6[6];
  fVar2 = pfVar7[2];
  fVar3 = *pfVar7;
  fVar4 = pfVar7[1];
  auVar24 = insertps(ZEXT416((uint)*pfVar7),ZEXT416((uint)fVar4),0x10);
  fVar16 = pfVar7[2];
  auVar18 = insertps(ZEXT416(puVar6[4]),puVar6[5],0x10);
  auVar19 = insertps(ZEXT416((uint)pfVar7[4]),pfVar7[5],0x10);
  fVar17 = pfVar7[6];
  fVar20 = *(float *)(param_1 + 0x98);
  fVar21 = *(float *)((longlong)param_1 + 0x4c4);
  fVar22 = *(float *)(param_1 + 0x99);
  fVar23 = *(float *)((longlong)param_1 + 0x4cc);
  fVar8 = *(float *)(param_1 + 0x96);
  fVar9 = *(float *)((longlong)param_1 + 0x4b4);
  fVar10 = *(float *)(param_1 + 0x97);
  fVar11 = *(float *)((longlong)param_1 + 0x4bc);
  lVar12 = 0;
  do {
    auVar25._4_4_ =
         ((fVar17 * fVar20 - auVar19._0_4_ * fVar22) - (fVar8 * fVar15 - auVar18._0_4_ * fVar10)) +
         (auVar24._4_4_ - auVar13._4_4_);
    auVar25._0_4_ =
         ((auVar19._4_4_ * fVar22 - fVar17 * fVar21) - (fVar10 * auVar18._4_4_ - fVar15 * fVar9)) +
         (auVar24._0_4_ - auVar13._0_4_);
    auVar25._8_4_ =
         ((auVar19._0_4_ * fVar21 - auVar19._4_4_ * fVar20) -
         (fVar9 * auVar18._0_4_ - auVar18._4_4_ * fVar8)) + (fVar16 - fVar14);
    auVar25._12_4_ = ((fVar23 * 0.0 - fVar23 * 0.0) - (fVar11 * 0.0 - fVar11 * 0.0)) + 0.0;
    auVar25 = dpps(*(undefined1 (*) [16])((longlong)param_1 + lVar12 + 0x4d0),auVar25,0xff);
    *(undefined1 (*) [16])((longlong)local_e8 + lVar12) = auVar25;
    lVar12 = lVar12 + 0x10;
  } while (lVar12 != 0x30);
  fVar14 = *(float *)(param_1 + 0xb2);
  fVar15 = *(float *)((longlong)param_1 + 0x594);
  fVar16 = *(float *)(param_1 + 0xb3);
  fVar17 = *(float *)((longlong)param_1 + 0x59c);
  fVar27 = (float)(double)param_1[0x6a];
  fVar8 = *(float *)(param_1 + 0x90);
  fVar9 = *(float *)((longlong)param_1 + 0x484);
  fVar10 = *(float *)(param_1 + 0x91);
  fVar11 = *(float *)((longlong)param_1 + 0x48c);
  dVar5 = (double)param_1[0x48];
  fVar26 = (float)dVar5;
  lVar12 = 0;
  do {
    pfVar1 = (float *)((longlong)param_1 + lVar12 + 0x4d0);
    auVar13._12_4_ = pfVar1[3] * fVar23 - pfVar1[3] * fVar23;
    auVar13._4_4_ = *pfVar1 * fVar22 - pfVar1[2] * fVar20;
    auVar13._0_4_ = pfVar1[2] * fVar21 - pfVar1[1] * fVar22;
    auVar13._8_4_ = pfVar1[1] * fVar20 - *pfVar1 * fVar21;
    auVar13 = dpps(auVar13,*(undefined1 (*) [16])((longlong)param_1 + lVar12 * 2 + 0x540),0xff);
    *(undefined1 (*) [16])((longlong)local_118 + lVar12) = auVar13;
    lVar12 = lVar12 + 0x10;
  } while (lVar12 != 0x30);
  auVar19._0_4_ = (local_e8[0] + fVar14) * fVar8 * fVar27;
  auVar19._4_4_ = (local_d8 + fVar15) * fVar9 * fVar27;
  auVar19._8_4_ = (local_c8 + fVar16) * fVar10 * fVar27;
  auVar19._12_4_ = (fStack_c4 + fVar17) * fVar11 * fVar27;
  auVar18._4_4_ = fVar26 - local_108;
  auVar18._0_4_ = fVar26 - local_118[0];
  auVar18._8_4_ = fVar26 - (float)local_f8;
  auVar18._12_4_ = fVar26 - (float)((ulonglong)local_f8 >> 0x20);
  auVar13 = divps(auVar19,auVar18);
  local_148[0] = auVar13._0_4_;
  local_148[4] = auVar13._4_4_;
  local_148[8] = auVar13._8_4_;
  local_148[1] = local_148[0];
  local_148[2] = local_148[0];
  local_148[3] = local_148[0];
  local_148[5] = local_148[4];
  local_148[6] = local_148[4];
  local_148[7] = local_148[4];
  local_148[9] = local_148[8];
  local_148[10] = local_148[8];
  local_148[0xb] = local_148[8];
  fVar17 = (float)(dVar5 * param_2);
  fVar23 = (float)param_2;
  fVar20 = 0.0;
  fVar21 = 0.0;
  fVar22 = 0.0;
  lVar12 = 0;
  fVar14 = 0.0;
  fVar15 = 0.0;
  fVar16 = 0.0;
  do {
    fVar8 = *(float *)((longlong)local_148 + lVar12 + 4);
    fVar9 = *(float *)((longlong)local_148 + lVar12 + 8);
    pfVar1 = (float *)((longlong)param_1 + lVar12 + 0x4d0);
    fVar20 = fVar20 + *pfVar1 * *(float *)((longlong)local_148 + lVar12) * -fVar17;
    fVar21 = fVar21 + pfVar1[1] * fVar8 * -fVar17;
    fVar22 = fVar22 + pfVar1[2] * fVar9 * -fVar17;
    pfVar1 = (float *)((longlong)param_1 + lVar12 * 2 + 0x540);
    fVar14 = fVar14 + *pfVar1 * fVar23 * *(float *)((longlong)local_148 + lVar12);
    fVar15 = fVar15 + pfVar1[1] * fVar23 * fVar8;
    fVar16 = fVar16 + pfVar1[2] * fVar23 * fVar9;
    lVar12 = lVar12 + 0x10;
  } while (lVar12 != 0x30);
  *pfVar7 = fVar3 + fVar20;
  pfVar7[1] = fVar4 + fVar21;
  pfVar7[2] = fVar2 + fVar22;
  lVar12 = param_1[3];
  *(float *)(lVar12 + 0x10) = fVar14 + *(float *)(lVar12 + 0x10);
  *(float *)(lVar12 + 0x14) = fVar15 + *(float *)(lVar12 + 0x14);
  *(float *)(lVar12 + 0x18) = fVar16 + *(float *)(lVar12 + 0x18);
  if ((local_b0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dbf8de FUN_146dbf8de body=1174 status=ok
// SIG undefined FUN_146dbf8de(void)

void FUN_146dbf8de(undefined8 *param_1,double param_2,uint param_3)

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
  byte bVar10;
  float *pfVar11;
  float *pfVar12;
  longlong lVar13;
  byte bVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  byte bVar18;
  ulonglong uVar19;
  
  if (2 < param_3) {
    return;
  }
  bVar18 = (char)param_3 * '\b';
  bVar10 = *(byte *)(param_1 + 0xe8);
  if ((bVar10 & (byte)(0x40201 >> (bVar18 & 0x1f))) == 0) {
    return;
  }
  if (param_3 == 0) {
    bVar14 = bVar10 & 0x40;
joined_r0x000146dbf978:
    if (bVar14 != 0) {
      return;
    }
  }
  else {
    if (param_3 == 2) {
      bVar14 = *(byte *)((longlong)param_1 + 0x741) & 1;
      goto joined_r0x000146dbf978;
    }
    if ((char)bVar10 < '\0') {
      return;
    }
  }
  pfVar11 = (float *)*param_1;
  pfVar12 = (float *)param_1[3];
  uVar19 = (ulonglong)param_3;
  dVar1 = (double)param_1[uVar19 * 3 + 0xab];
  dVar2 = (double)param_1[uVar19 * 6 + 0x9d];
  dVar3 = (double)param_1[uVar19 * 6 + 0x9c];
  dVar4 = (double)param_1[uVar19 * 6 + 0x9e];
  dVar5 = (double)param_1[uVar19 * 3 + 0xac];
  dVar6 = (double)param_1[uVar19 * 3 + 0xad];
  dVar15 = (double)(((float)((double)pfVar12[4] * dVar2 - dVar3 * (double)pfVar12[5]) +
                    (pfVar12[2] - pfVar11[2])) -
                   (float)((double)pfVar11[4] * (double)param_1[uVar19 * 6 + 0x9a] -
                          (double)param_1[uVar19 * 6 + 0x99] * (double)pfVar11[5])) * dVar6 +
           (double)(((float)((double)pfVar12[5] * dVar4 - dVar2 * (double)pfVar12[6]) +
                    (*pfVar12 - *pfVar11)) -
                   (float)((double)pfVar11[5] * (double)param_1[uVar19 * 6 + 0x9b] -
                          (double)param_1[uVar19 * 6 + 0x9a] * (double)pfVar11[6])) * dVar1 +
           (double)(((float)((double)pfVar12[6] * dVar3 - (double)pfVar12[4] * dVar4) +
                    (pfVar12[1] - pfVar11[1])) -
                   (float)((double)pfVar11[6] * (double)param_1[uVar19 * 6 + 0x99] -
                          (double)pfVar11[4] * (double)param_1[uVar19 * 6 + 0x9b])) * dVar5 +
           (double)param_1[uVar19 + 0xcf];
  if ((bVar10 & (byte)(0x201008 >> (bVar18 & 0x1f))) == 0) {
LAB_146dbfb92:
    bVar17 = false;
  }
  else {
    dVar7 = (double)param_1[uVar19 + 0xb4];
    if (dVar15 <= dVar7) {
      if (-dVar7 <= dVar15) goto LAB_146dbfb92;
      dVar15 = dVar15 + dVar7;
    }
    else {
      dVar15 = dVar15 - dVar7;
    }
    bVar17 = true;
  }
  if (((bVar10 & (byte)(0x201008 >> (bVar18 & 0x1f))) == 0) ||
     ((bVar17 && (bVar10 & (byte)(0x201008 >> (bVar18 & 0x1f))) != 0 &&
      ((double)param_1[0x6b] <= ABS(dVar15) && ABS(dVar15) != (double)param_1[0x6b])))) {
    dVar7 = (double)param_1[uVar19 * 6 + 0xc0];
    dVar8 = (double)param_1[uVar19 * 6 + 0xc1];
    dVar9 = (double)param_1[uVar19 * 6 + 0xc2];
    dVar16 = -param_2 * (double)param_1[0x48];
    dVar2 = (dVar15 * (double)param_1[0x6a] * (double)param_1[uVar19 + 0x90]) /
            ((double)param_1[0x48] -
            ((dVar3 * dVar5 - dVar1 * dVar2) * dVar9 +
            (dVar2 * dVar6 - dVar5 * dVar4) * dVar7 + (dVar4 * dVar1 - dVar6 * dVar3) * dVar8));
    *pfVar12 = *pfVar12 + (float)(dVar1 * dVar2 * dVar16);
    pfVar12[1] = pfVar12[1] + (float)(dVar5 * dVar2 * dVar16);
    pfVar12[2] = pfVar12[2] + (float)(dVar16 * dVar6 * dVar2);
    lVar13 = param_1[3];
    *(float *)(lVar13 + 0x10) = (float)(dVar7 * param_2 * dVar2) + *(float *)(lVar13 + 0x10);
    *(float *)(lVar13 + 0x14) = (float)(dVar8 * param_2 * dVar2) + *(float *)(lVar13 + 0x14);
    *(float *)(lVar13 + 0x18) = (float)(dVar9 * param_2 * dVar2) + *(float *)(lVar13 + 0x18);
  }
  return;
}



// FUNCTION 146dbfd74 FUN_146dbfd74 body=224 status=ok
// SIG undefined FUN_146dbfd74(void)

void FUN_146dbfd74(longlong param_1,longlong param_2)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 in_EAX;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if (0.0 < *(double *)(param_2 + 0xe0)) {
    if ((*(byte *)(param_1 + 0x741) & 4) != 0) {
      fVar12 = (float)*(double *)(param_2 + 0xe0);
      uVar9 = -(uint)(fVar12 < ABS(*(float *)(param_1 + 0x590)));
      uVar10 = -(uint)(fVar12 < ABS(*(float *)(param_1 + 0x594)));
      uVar11 = -(uint)(fVar12 < ABS(*(float *)(param_1 + 0x598)));
      auVar2._4_4_ = uVar10;
      auVar2._0_4_ = uVar9;
      auVar2._8_4_ = uVar11;
      auVar2._12_4_ = -(uint)(fVar12 < ABS(*(float *)(param_1 + 0x59c)));
      iVar8 = movmskps(in_EAX,auVar2);
      if (iVar8 != 0) {
        fVar13 = (float)(uVar9 & (uint)(0.0 - *(float *)(param_1 + 0x590)));
        fVar14 = (float)(uVar10 & (uint)(0.0 - *(float *)(param_1 + 0x594)));
        fVar15 = (float)(uVar11 & (uint)(0.0 - *(float *)(param_1 + 0x598)));
        fVar12 = *(float *)(param_1 + 0x4d4);
        fVar3 = *(float *)(param_1 + 0x4d8);
        fVar4 = *(float *)(param_1 + 0x4e4);
        fVar5 = *(float *)(param_1 + 0x4e8);
        fVar6 = *(float *)(param_1 + 0x4f4);
        fVar7 = *(float *)(param_1 + 0x4f8);
        pfVar1 = *(float **)(param_1 + 0x18);
        *pfVar1 = fVar15 * *(float *)(param_1 + 0x4f0) +
                  fVar14 * *(float *)(param_1 + 0x4e0) + fVar13 * *(float *)(param_1 + 0x4d0) +
                  *pfVar1;
        pfVar1[1] = fVar15 * fVar6 + fVar14 * fVar4 + fVar13 * fVar12 + pfVar1[1];
        pfVar1[2] = fVar15 * fVar7 + fVar14 * fVar5 + fVar13 * fVar3 + pfVar1[2];
      }
      return;
    }
    iVar8 = 0;
    do {
      FUN_146dbfe54(param_1,(int)*(undefined8 *)(param_2 + 0xe0),iVar8);
      iVar8 = iVar8 + 1;
    } while (iVar8 != 3);
  }
  return;
}



// FUNCTION 146dbfe54 FUN_146dbfe54 body=347 status=ok
// SIG undefined FUN_146dbfe54(void)

void FUN_146dbfe54(longlong param_1,double param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  byte bVar3;
  float *pfVar4;
  bool bVar5;
  byte bVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  double dVar10;
  
  if (2 < param_3) {
    return;
  }
  bVar6 = (char)param_3 * '\b';
  bVar3 = *(byte *)(param_1 + 0x740);
  if ((bVar3 & (byte)(0x40201 >> (bVar6 & 0x1f))) == 0) {
    return;
  }
  if (param_3 == 0) {
    if ((bVar3 & 0x40) != 0) {
      return;
    }
    bVar8 = 8;
    lVar9 = 0x678;
    lVar7 = 0;
  }
  else if (param_3 == 2) {
    if ((*(byte *)(param_1 + 0x741) & 1) != 0) {
      return;
    }
    lVar7 = 2;
    bVar8 = 0x20;
    lVar9 = 0x688;
  }
  else {
    if ((char)bVar3 < '\0') {
      return;
    }
    lVar7 = 1;
    bVar8 = 0x10;
    lVar9 = 0x680;
  }
  dVar10 = *(double *)(param_1 + lVar9);
  if ((bVar8 & bVar3) == 0) {
LAB_146dbff14:
    bVar5 = false;
  }
  else {
    dVar1 = *(double *)(param_1 + 0x5a0 + lVar7 * 8);
    if (dVar10 <= dVar1) {
      if (-dVar1 <= dVar10) goto LAB_146dbff14;
      dVar10 = dVar10 + dVar1;
    }
    else {
      dVar10 = dVar10 - dVar1;
    }
    bVar5 = true;
  }
  if ((((bVar3 & (byte)(0x201008 >> (bVar6 & 0x1f))) == 0) ||
      (bVar5 && (bVar3 & (byte)(0x201008 >> (bVar6 & 0x1f))) != 0)) && (param_2 < ABS(dVar10))) {
    dVar1 = *(double *)(param_1 + 0x560 + lVar7 * 0x18);
    dVar2 = *(double *)(param_1 + 0x568 + lVar7 * 0x18);
    pfVar4 = *(float **)(param_1 + 0x18);
    *pfVar4 = *pfVar4 - (float)(*(double *)(param_1 + 0x558 + lVar7 * 0x18) * dVar10);
    pfVar4[1] = pfVar4[1] - (float)(dVar1 * dVar10);
    pfVar4[2] = pfVar4[2] - (float)(dVar10 * dVar2);
  }
  return;
}



// FUNCTION 146dbffb0 FUN_146dbffb0 body=957 status=ok
// SIG undefined FUN_146dbffb0(void)

void FUN_146dbffb0(undefined8 *param_1,uint param_2,double param_3)

{
  double dVar1;
  float *pfVar2;
  float *pfVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  uVar7 = (ulonglong)param_2;
  pfVar2 = (float *)*param_1;
  pfVar3 = (float *)param_1[3];
  dVar8 = (double)((float)((double)pfVar2[4] * (double)param_1[uVar7 * 6 + 0x14e] -
                          (double)param_1[uVar7 * 6 + 0x14d] * (double)pfVar2[5]) + pfVar2[2]);
  dVar12 = (double)((float)((double)pfVar2[6] * (double)param_1[uVar7 * 6 + 0x14d] -
                           (double)pfVar2[4] * (double)param_1[uVar7 * 6 + 0x14f]) + pfVar2[1]);
  dVar11 = (double)((float)((double)pfVar2[5] * (double)param_1[uVar7 * 6 + 0x14f] -
                           (double)param_1[uVar7 * 6 + 0x14e] * (double)pfVar2[6]) + *pfVar2);
  dVar6 = (double)((float)((double)pfVar3[4] * (double)param_1[uVar7 * 6 + 0x151] -
                          (double)param_1[uVar7 * 6 + 0x150] * (double)pfVar3[5]) + pfVar3[2]);
  dVar5 = (double)((float)((double)param_1[uVar7 * 6 + 0x150] * (double)pfVar3[6] -
                          (double)pfVar3[4] * (double)param_1[uVar7 * 6 + 0x152]) + pfVar3[1]);
  dVar4 = (double)((float)((double)pfVar3[5] * (double)param_1[uVar7 * 6 + 0x152] -
                          (double)param_1[uVar7 * 6 + 0x151] * (double)pfVar3[6]) + *pfVar3);
  dVar9 = 0.0;
  if (9.999999747378752e-05 < (double)param_1[uVar7 + 0x14a]) {
    dVar9 = (((dVar8 + (double)param_1[0x20]) - (double)param_1[0x38]) -
            ((dVar6 + (double)param_1[0x23]) - (double)param_1[0x3b])) *
            (double)param_1[uVar7 * 3 + 0x161] +
            (((dVar11 + (double)param_1[0x1e]) - (double)param_1[0x36]) -
            ((dVar4 + (double)param_1[0x21]) - (double)param_1[0x39])) *
            (double)param_1[uVar7 * 3 + 0x15f] +
            (double)param_1[uVar7 * 3 + 0x160] *
            (((dVar12 + (double)param_1[0x1f]) - (double)param_1[0x37]) -
            ((dVar5 + (double)param_1[0x22]) - (double)param_1[0x3a])) +
            param_3 * (double)param_1[uVar7 + 0x193];
  }
  dVar1 = (double)param_1[uVar7 + 0x186];
  dVar10 = (double)param_1[uVar7 + 0x18a];
  dVar12 = ((((double)param_1[uVar7 + 0x147] *
              ((double)param_1[uVar7 + 0x183] +
              (dVar6 - dVar8) * (double)param_1[uVar7 * 3 + 0x161] +
              (dVar4 - dVar11) * (double)param_1[uVar7 * 3 + 0x15f] +
              (dVar5 - dVar12) * (double)param_1[uVar7 * 3 + 0x160]) -
             dVar9 * (double)param_1[uVar7 + 0x14a]) - dVar1) * (double)param_1[0x6a]) /
           (double)param_1[uVar7 + 0x16b];
  dVar11 = dVar1 + dVar12;
  if ((0.0 < dVar10) && ((dVar10 < dVar11 || (dVar10 = -dVar10, dVar11 < dVar10)))) {
    dVar12 = dVar10 - dVar1;
    dVar11 = dVar10;
  }
  param_1[uVar7 + 0x186] = dVar11;
  FUN_146dbbf60(dVar10,dVar11,dVar12,param_1 + 0x144);
  return;
}



// FUNCTION 146dc036e FUN_146dc036e body=1127 status=ok
// SIG undefined FUN_146dc036e(void)

void FUN_146dc036e(longlong *param_1,uint param_2,double param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  uVar9 = (ulonglong)param_2;
  if (9.99999993922529e-09 <= (double)param_1[uVar9 + 0x18d] * param_3) {
    dVar12 = 1.0;
    if ((*(byte *)((longlong)param_1 + 0xce1) & 2) != 0) {
      dVar12 = 1.0 / (double)param_1[uVar9 + 0x16e];
    }
    dVar12 = (double)param_1[uVar9 + 0x18d] * param_3 * dVar12;
    lVar7 = *param_1;
    lVar8 = param_1[3];
    pdVar1 = (double *)(param_1 + uVar9 * 3 + 0x15f);
    dVar10 = (((((((((double)*(float *)(lVar8 + 0x30) * (double)param_1[uVar9 * 6 + 0x151] -
                    (double)param_1[uVar9 * 6 + 0x150] * (double)*(float *)(lVar8 + 0x34)) +
                   (double)*(float *)(lVar8 + 0x28)) -
                  (((double)*(float *)(lVar7 + 0x30) * (double)param_1[uVar9 * 6 + 0x14e] -
                   (double)param_1[uVar9 * 6 + 0x14d] * (double)*(float *)(lVar7 + 0x34)) +
                  (double)*(float *)(lVar7 + 0x28))) * pdVar1[2] +
                 ((((double)*(float *)(lVar8 + 0x34) * (double)param_1[uVar9 * 6 + 0x152] -
                   (double)param_1[uVar9 * 6 + 0x151] * (double)*(float *)(lVar8 + 0x38)) +
                  (double)*(float *)(lVar8 + 0x20)) -
                 (((double)*(float *)(lVar7 + 0x34) * (double)param_1[uVar9 * 6 + 0x14f] -
                  (double)param_1[uVar9 * 6 + 0x14e] * (double)*(float *)(lVar7 + 0x38)) +
                 (double)*(float *)(lVar7 + 0x20))) * *pdVar1 +
                 ((((double)param_1[uVar9 * 6 + 0x150] * (double)*(float *)(lVar8 + 0x38) -
                   (double)*(float *)(lVar8 + 0x30) * (double)param_1[uVar9 * 6 + 0x152]) +
                  (double)*(float *)(lVar8 + 0x24)) -
                 (((double)*(float *)(lVar7 + 0x38) * (double)param_1[uVar9 * 6 + 0x14d] -
                  (double)*(float *)(lVar7 + 0x30) * (double)param_1[uVar9 * 6 + 0x14f]) +
                 (double)*(float *)(lVar7 + 0x24))) * pdVar1[1]) - (double)param_1[uVar9 + 0x193]) *
                dVar12 - (double)param_1[uVar9 + 0x199]) * (double)param_1[0x6a]) /
             ((double)param_1[uVar9 + 0x16e] * dVar12 + 1.0)) * param_3;
    dVar12 = (double)param_1[uVar9 + 0x18a];
    dVar11 = (double)param_1[uVar9 + 0x186] + dVar10;
    if ((0.0 < dVar12) && ((dVar2 = dVar12, dVar12 < dVar11 || (dVar2 = -dVar12, dVar11 < -dVar12)))
       ) {
      dVar11 = dVar2;
      dVar10 = dVar11 - (double)param_1[uVar9 + 0x186];
    }
    param_1[uVar9 + 0x186] = (longlong)dVar11;
    dVar10 = dVar10 / param_3;
    param_1[uVar9 + 0x199] = (longlong)((double)param_1[uVar9 + 0x199] + dVar10);
    dVar12 = *pdVar1;
    dVar11 = pdVar1[1];
    dVar2 = pdVar1[2];
    if (1.1754944e-38 <
        *(float *)(param_1 + 2) * *(float *)(param_1 + 1) * *(float *)(lVar7 + 0x134)) {
      dVar3 = (double)param_1[0x47];
      dVar4 = (double)param_1[uVar9 * 6 + 0x173];
      dVar5 = (double)param_1[uVar9 * 6 + 0x172];
      dVar6 = (double)param_1[uVar9 * 6 + 0x171];
      *(float *)(lVar7 + 0x20) = (float)(dVar12 * dVar10 * dVar3) + *(float *)(lVar7 + 0x20);
      *(float *)(lVar7 + 0x24) = (float)(dVar11 * dVar10 * dVar3) + *(float *)(lVar7 + 0x24);
      *(float *)(lVar7 + 0x28) = (float)(dVar3 * dVar2 * dVar10) + *(float *)(lVar7 + 0x28);
      *(float *)(lVar7 + 0x30) = (float)(dVar6 * dVar10) + *(float *)(lVar7 + 0x30);
      *(float *)(lVar7 + 0x34) = (float)(dVar5 * dVar10) + *(float *)(lVar7 + 0x34);
      *(float *)(lVar7 + 0x38) = (float)(dVar4 * dVar10) + *(float *)(lVar7 + 0x38);
      lVar8 = param_1[3];
    }
    if (1.1754944e-38 <
        *(float *)(param_1 + 5) * *(float *)(param_1 + 4) * *(float *)(lVar8 + 0x134)) {
      dVar3 = (double)param_1[0x48];
      dVar4 = (double)param_1[uVar9 * 6 + 0x176];
      dVar5 = (double)param_1[uVar9 * 6 + 0x175];
      dVar6 = (double)param_1[uVar9 * 6 + 0x174];
      *(float *)(lVar8 + 0x20) = *(float *)(lVar8 + 0x20) - (float)(dVar12 * dVar10 * dVar3);
      *(float *)(lVar8 + 0x24) = *(float *)(lVar8 + 0x24) - (float)(dVar11 * dVar10 * dVar3);
      *(float *)(lVar8 + 0x28) = *(float *)(lVar8 + 0x28) - (float)(dVar2 * dVar10 * dVar3);
      *(float *)(lVar8 + 0x30) = (float)(dVar10 * dVar6) + *(float *)(lVar8 + 0x30);
      *(float *)(lVar8 + 0x34) = (float)(dVar5 * dVar10) + *(float *)(lVar8 + 0x34);
      *(float *)(lVar8 + 0x38) = (float)(dVar4 * dVar10) + *(float *)(lVar8 + 0x38);
    }
  }
  return;
}



// FUNCTION 146dc07d6 FUN_146dc07d6 body=2120 status=ok
// SIG undefined FUN_146dc07d6(void)

void FUN_146dc07d6(longlong param_1,double param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_1a8 [32];
  double local_188;
  undefined8 local_180;
  undefined1 local_178;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  undefined8 uStack_140;
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
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  iVar4 = 0;
  local_168 = param_2;
  do {
    dVar6 = (double)FUN_146decc94(param_3,param_4);
    uVar7 = FUN_146decc6c(param_3,param_4);
    local_178 = 1;
    local_180 = 0;
    local_188 = dVar6;
    FUN_146dba192(param_1 + 0xcf0,iVar4,1,uVar7);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 3);
  cVar3 = FUN_146decd28(param_3,param_4);
  dVar8 = local_168;
  bVar1 = *(byte *)(param_1 + 0xfb1);
  *(byte *)(param_1 + 0xfb1) = bVar1 & 0xfd | cVar3 * '\x02';
  dVar11 = *(double *)(param_1 + 0x130) * -1.0;
  dVar14 = *(double *)(param_1 + 0x138) * 1.0;
  dVar15 = *(double *)(param_1 + 0x140);
  dVar17 = *(double *)(param_1 + 0x148);
  dVar16 = *(double *)(param_1 + 0x150);
  dVar2 = *(double *)(param_1 + 0x158);
  dVar9 = *(double *)(param_1 + 0x128);
  dVar6 = *(double *)(param_1 + 0x128);
  dVar12 = *(double *)(param_1 + 0x120);
  dVar21 = *(double *)(param_1 + 0x120);
  dVar10 = dVar17 * dVar11 * -1.0 + ((dVar15 * dVar14 - dVar12 * dVar2 * 1.0) - dVar16 * dVar9);
  dVar13 = dVar15 * dVar11 * 1.0 + ((dVar17 * dVar14 - dVar21 * dVar16 * -1.0) - dVar2 * dVar6);
  dVar12 = dVar2 * dVar11 * 1.0 + dVar9 * dVar15 + (dVar14 * dVar16 - dVar12 * dVar17 * 1.0);
  dVar15 = dVar16 * dVar11 * -1.0 + dVar6 * dVar17 + (dVar14 * dVar2 - dVar21 * dVar15 * -1.0);
  uVar5 = -(ulonglong)
           (0.0 <= dVar15 * *(double *)(param_4 + 0x248) +
                   dVar12 * *(double *)(param_4 + 0x240) +
                   dVar10 * *(double *)(param_4 + 0x230) + *(double *)(param_4 + 0x238) * dVar13);
  dVar21 = (double)(~uVar5 & 0xbff0000000000000 |
                   (ulonglong)((uint)(uVar5 >> 0x20) & 0x3ff00000) << 0x20);
  dVar17 = *(double *)(param_4 + 0x230) * dVar21;
  dVar6 = *(double *)(param_4 + 0x238) * dVar21;
  dVar9 = *(double *)(param_4 + 0x240) * dVar21 * -1.0;
  dVar21 = dVar21 * *(double *)(param_4 + 0x248) * 1.0;
  dVar11 = dVar9 * dVar13 * -1.0 + ((dVar10 * dVar21 - dVar15 * dVar17 * 1.0) - dVar6 * dVar12);
  dVar16 = dVar9 * dVar10 * 1.0 + ((dVar13 * dVar21 - dVar12 * dVar17 * -1.0) - dVar6 * dVar15);
  dVar11 = ((dVar11 * dVar11 * 0.075 + 0.16666666666666666) * dVar11 * dVar11 + 1.0) * dVar11;
  dVar16 = ((dVar16 * dVar16 * 0.075 + 0.16666666666666666) * dVar16 * dVar16 + 1.0) * dVar16;
  dVar10 = dVar9 * dVar15 + ((dVar21 * dVar12 + dVar13 * -dVar17) - -dVar6 * dVar10);
  dVar10 = ((dVar10 * dVar10 * 0.075 + 0.16666666666666666) * dVar10 * dVar10 + 1.0) * dVar10;
  dVar6 = *(double *)(param_1 + 0x140);
  dVar9 = *(double *)(param_1 + 0x148);
  dVar15 = dVar9 + dVar9;
  dVar21 = *(double *)(param_1 + 0x150);
  dVar18 = dVar21 + dVar21;
  dVar14 = dVar6 * (dVar6 + dVar6);
  dVar12 = *(double *)(param_1 + 0x158);
  dVar13 = (dVar6 + dVar6) * dVar12;
  dVar17 = 1.0 - (dVar9 * dVar15 + dVar21 * dVar18);
  dVar2 = 1.0 - (dVar21 * dVar18 + dVar14);
  local_158 = dVar6 * dVar15 + dVar18 * dVar12;
  dVar21 = dVar6 * dVar15 - dVar18 * dVar12;
  local_148 = 1.0 - (dVar9 * dVar15 + dVar14);
  local_150 = dVar9 * dVar18 + dVar13;
  dVar13 = dVar9 * dVar18 - dVar13;
  dVar9 = dVar6 * dVar18 - dVar15 * dVar12;
  dVar6 = dVar15 * dVar12 + dVar6 * dVar18;
  dVar11 = dVar11 + dVar11;
  dVar16 = dVar16 + dVar16;
  dVar10 = dVar10 + dVar10;
  uStack_140 = 0;
  local_118 = dVar17;
  local_110 = local_158;
  local_108 = dVar9;
  local_100 = dVar21;
  local_f8 = dVar2;
  local_f0 = local_150;
  local_e8 = dVar6;
  local_e0 = dVar13;
  local_d8 = local_148;
  if ((bVar1 & 4) == 0) {
    local_188 = dVar11;
    FUN_146dc1edc(param_1,0,&local_118,local_168);
    local_188 = dVar16;
    FUN_146dc1edc(param_1,1,&local_100,dVar8);
    local_188 = dVar10;
    FUN_146dc1edc(param_1,2,&local_e8,dVar8);
  }
  else {
    *(undefined8 *)(param_1 + 0xe10) = 0;
    *(undefined8 *)(param_1 + 0xe18) = 0;
    *(undefined8 *)(param_1 + 0xcf0) = 0;
    *(undefined8 *)(param_1 + 0xcf8) = 0;
    local_130 = dVar11;
    local_128 = dVar16;
    local_120 = dVar10;
    FUN_146dc1fde(param_1,&local_118,(float)local_168);
  }
  dVar12 = *(double *)(param_4 + 0x2a8);
  *(undefined8 *)(param_1 + 0xf20) = 0;
  if ((0.0 < dVar12) && (dVar12 < 3.4028234663852886e+38)) {
    dVar12 = dVar12 * dVar8 * dVar8;
    if ((*(byte *)(param_1 + 0xfb1) & 2) != 0) {
      dVar12 = dVar12 / *(double *)(param_1 + 0xe40);
    }
    *(double *)(param_1 + 0xf20) = dVar12;
  }
  dVar12 = *(double *)(param_4 + 0x2b0);
  *(undefined8 *)(param_1 + 0xf28) = 0;
  if ((0.0 < dVar12) && (dVar12 < 3.4028234663852886e+38)) {
    dVar12 = dVar12 * dVar8 * dVar8;
    if ((*(byte *)(param_1 + 0xfb1) & 2) != 0) {
      dVar12 = dVar12 / *(double *)(param_1 + 0xe48);
    }
    *(double *)(param_1 + 0xf28) = dVar12;
  }
  dVar12 = *(double *)(param_4 + 0x2b8);
  *(undefined8 *)(param_1 + 0xf30) = 0;
  if ((0.0 < dVar12) && (dVar12 < 3.4028234663852886e+38)) {
    dVar8 = dVar12 * dVar8 * dVar8;
    if ((*(byte *)(param_1 + 0xfb1) & 2) != 0) {
      dVar8 = dVar8 / *(double *)(param_1 + 0xe50);
    }
    *(double *)(param_1 + 0xf30) = dVar8;
  }
  dVar12 = *(double *)(param_4 + 0x250);
  dVar10 = *(double *)(param_4 + 600);
  dVar15 = *(double *)(param_4 + 0x260);
  if (((9.999999747378752e-05 < ABS(dVar12)) || (9.999999747378752e-05 < ABS(dVar10))) ||
     (9.999999747378752e-05 < ABS(dVar15))) {
    dVar16 = *(double *)(param_1 + 0x120);
    uStack_160 = 0;
    dVar8 = *(double *)(param_1 + 0x128);
    dVar19 = dVar16 * dVar10 - dVar12 * dVar8;
    dVar11 = *(double *)(param_1 + 0x130);
    dVar20 = dVar11 * dVar12 - dVar15 * dVar16;
    dVar18 = dVar8 * dVar15 - dVar10 * dVar11;
    dVar19 = dVar19 + dVar19;
    dVar14 = *(double *)(param_1 + 0x138);
    dVar20 = dVar20 + dVar20;
    dVar18 = dVar18 + dVar18;
    dVar15 = (dVar16 * dVar20 - dVar18 * dVar8) + dVar14 * dVar19 + dVar15;
    dVar10 = (dVar11 * dVar18 - dVar19 * dVar16) + dVar14 * dVar20 + dVar10;
    dVar12 = (dVar8 * dVar19 - dVar20 * dVar11) + dVar18 * dVar14 + dVar12;
    *(double *)(param_1 + 0xf68) = dVar9 * dVar15 + dVar17 * dVar12 + local_158 * dVar10;
    *(double *)(param_1 + 0xf70) = local_150 * dVar15 + dVar21 * dVar12 + dVar2 * dVar10;
    *(double *)(param_1 + 0xf78) = dVar15 * local_148 + dVar12 * dVar6 + dVar13 * dVar10;
    local_168 = dVar2;
  }
  if ((local_d0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dc1020 FUN_146dc1020 body=3771 status=ok
// SIG undefined FUN_146dc1020(void)

void FUN_146dc1020(longlong param_1,double param_2,undefined8 param_3,longlong param_4,char param_5,
                  char param_6,char param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  byte bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_188 [32];
  double local_168;
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
  dVar19 = *(double *)(param_4 + 0x230);
  dVar24 = *(double *)(param_4 + 0x238);
  dVar2 = *(double *)(param_4 + 0x240);
  dVar3 = *(double *)(param_4 + 0x248);
  dVar16 = *(double *)(param_1 + 0x138);
  dVar18 = *(double *)(param_1 + 0x138);
  dVar25 = *(double *)(param_1 + 0x128);
  dVar1 = *(double *)(param_1 + 0x128);
  dVar21 = *(double *)(param_1 + 0x120);
  dVar23 = *(double *)(param_1 + 0x120);
  dVar15 = *(double *)(param_1 + 0x130);
  dVar17 = *(double *)(param_1 + 0x130);
  dVar20 = dVar24 * dVar15 * -1.0 + dVar2 * dVar25 + dVar21 * dVar3 * 1.0 + dVar16 * dVar19;
  dVar22 = dVar19 * dVar17 * 1.0 + dVar3 * dVar1 + dVar23 * dVar2 * -1.0 + dVar18 * dVar24;
  dVar16 = dVar3 * dVar15 * 1.0 + ((dVar21 * dVar24 * 1.0 + dVar16 * dVar2) - dVar25 * dVar19);
  dVar18 = dVar2 * dVar17 * -1.0 + ((dVar23 * dVar19 * -1.0 + dVar18 * dVar3) - dVar1 * dVar24);
  uVar12 = -(ulonglong)
            (0.0 <= *(double *)(param_1 + 0x158) * dVar18 +
                    *(double *)(param_1 + 0x150) * dVar16 +
                    *(double *)(param_1 + 0x140) * dVar20 + *(double *)(param_1 + 0x148) * dVar22);
  dVar25 = (double)(~uVar12 & 0xbff0000000000000 |
                   (ulonglong)((uint)(uVar12 >> 0x20) & 0x3ff00000) << 0x20);
  dVar20 = dVar20 * dVar25;
  dVar22 = dVar22 * dVar25;
  dVar17 = dVar16 * dVar25 * -1.0;
  dVar19 = dVar25 * dVar18 * 1.0;
  dVar25 = *(double *)(param_1 + 0x140);
  dVar1 = *(double *)(param_1 + 0x148);
  dVar23 = *(double *)(param_1 + 0x150);
  dVar15 = *(double *)(param_1 + 0x158);
  dVar18 = dVar1 * dVar17 * -1.0 + ((dVar25 * dVar19 - dVar15 * dVar20 * 1.0) - dVar23 * dVar22);
  dVar16 = dVar25 * dVar17 * 1.0 + ((dVar1 * dVar19 - dVar23 * dVar20 * -1.0) - dVar15 * dVar22);
  dVar21 = dVar15 * dVar17 * 1.0 + dVar25 * dVar22 + (dVar19 * dVar23 - dVar20 * dVar1 * 1.0);
  dVar23 = dVar23 * dVar17 * -1.0 + dVar1 * dVar22 + (dVar19 * dVar15 - dVar20 * dVar25 * -1.0);
  dVar25 = dVar21 - dVar18 * 0.0;
  dVar15 = dVar18 * 0.0 - dVar16;
  dVar17 = dVar16 * 0.0 + dVar21 * -0.0;
  dVar15 = dVar15 + dVar15;
  dVar25 = dVar25 + dVar25;
  dVar17 = dVar17 + dVar17;
  dVar1 = (dVar25 * dVar18 - dVar16 * dVar17) + dVar23 * dVar15 + 0.0;
  dVar16 = dVar18 + dVar18;
  uVar13 = FUN_146decbc8(param_3,param_4);
  uVar14 = FUN_146decba0(param_3,param_4);
  bVar11 = false;
  *(undefined8 *)(param_1 + 0xcf0) = 0;
  *(undefined8 *)(param_1 + 0xd08) = uVar14;
  *(undefined8 *)(param_1 + 0xd20) = uVar13;
  *(undefined8 *)(param_1 + 0xf20) = 0;
  *(undefined8 *)(param_1 + 0xf50) = uVar14;
  *(undefined8 *)(param_1 + 0xf38) = uVar13;
  *(byte *)(param_1 + 0xfb0) = *(byte *)(param_1 + 0xfb0) & 0xb6 | 0x48;
  *(byte *)(param_1 + 0xfb1) = *(byte *)(param_1 + 0xfb1) & 0xe7;
  *(undefined8 *)(param_1 + 0xf10) = DAT_14c8464f0;
  uVar13 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0xf00) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0xf08) = uVar13;
  *(undefined8 *)(param_1 + 0xfa8) = DAT_14c8464f0;
  uVar13 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0xf98) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 4000) = uVar13;
  *(undefined8 *)(param_1 + 0xe20) = DAT_14c8464f0;
  uVar6 = DAT_14c8464e8._4_4_;
  uVar5 = (undefined4)DAT_14c8464e8;
  uVar4 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0xe10) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_1 + 0xe14) = uVar4;
  *(undefined4 *)(param_1 + 0xe18) = uVar5;
  *(undefined4 *)(param_1 + 0xe1c) = uVar6;
  uVar13 = FUN_146decc2e(param_3,param_4);
  uVar14 = FUN_146decc06(param_3,param_4);
  *(byte *)(param_1 + 0xfb1) = *(byte *)(param_1 + 0xfb1) | 1;
  *(undefined8 *)(param_1 + 0xd00) = 0;
  *(undefined8 *)(param_1 + 0xd18) = uVar14;
  *(undefined8 *)(param_1 + 0xd30) = uVar13;
  *(undefined8 *)(param_1 + 0xf30) = 0;
  *(undefined8 *)(param_1 + 0xf60) = uVar14;
  *(undefined8 *)(param_1 + 0xf48) = uVar13;
  *(byte *)(param_1 + 0xfb0) = *(byte *)(param_1 + 0xfb0) & 0xdb | 0x20;
  *(byte *)(param_1 + 0xfb2) = *(byte *)(param_1 + 0xfb2) & 0xfc;
  *(undefined8 *)(param_1 + 0xf10) = DAT_14c8464f0;
  uVar13 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0xf00) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0xf08) = uVar13;
  uVar13 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0xf98) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 4000) = uVar13;
  *(undefined8 *)(param_1 + 0xfa8) = DAT_14c8464f0;
  uVar6 = DAT_14c8464e8._4_4_;
  uVar5 = (undefined4)DAT_14c8464e8;
  uVar4 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0xe10) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_1 + 0xe14) = uVar4;
  *(undefined4 *)(param_1 + 0xe18) = uVar5;
  *(undefined4 *)(param_1 + 0xe1c) = uVar6;
  *(undefined8 *)(param_1 + 0xe20) = DAT_14c8464f0;
  uVar13 = FUN_146decc2e(param_3,param_4);
  uVar14 = FUN_146decc06(param_3,param_4);
  *(undefined8 *)(param_1 + 0xcf8) = 0;
  *(undefined8 *)(param_1 + 0xd10) = uVar14;
  *(undefined8 *)(param_1 + 0xd28) = uVar13;
  *(undefined8 *)(param_1 + 0xf28) = 0;
  *(undefined8 *)(param_1 + 0xf58) = uVar14;
  *(undefined8 *)(param_1 + 0xf40) = uVar13;
  *(byte *)(param_1 + 0xfb0) = *(byte *)(param_1 + 0xfb0) & 0x6d | 0x90;
  *(byte *)(param_1 + 0xfb1) = *(byte *)(param_1 + 0xfb1) & 0x9f;
  *(undefined8 *)(param_1 + 0xf10) = DAT_14c8464f0;
  uVar13 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0xf00) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0xf08) = uVar13;
  uVar13 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0xf98) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 4000) = uVar13;
  *(undefined8 *)(param_1 + 0xfa8) = DAT_14c8464f0;
  uVar6 = DAT_14c8464e8._4_4_;
  uVar5 = (undefined4)DAT_14c8464e8;
  uVar4 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0xe10) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_1 + 0xe14) = uVar4;
  *(undefined4 *)(param_1 + 0xe18) = uVar5;
  *(undefined4 *)(param_1 + 0xe1c) = uVar6;
  *(undefined8 *)(param_1 + 0xe20) = DAT_14c8464f0;
  cVar7 = FUN_146decd28(param_3,param_4);
  if ((param_5 != '\0') &&
     ((ABS(dVar16) < *(double *)(param_1 + 0x360) || ABS(dVar16) == *(double *)(param_1 + 0x360) ||
      (bVar11 = true, *(double *)(param_1 + 0xd08) <= 0.0)))) {
    bVar11 = 0.0 < *(double *)(param_1 + 0xd20);
  }
  dVar19 = -dVar1;
  dVar18 = (dVar17 * dVar21 - dVar15 * dVar18) + dVar23 * dVar25 + 0.0;
  if (param_6 == '\0') {
    bVar10 = false;
  }
  else if ((ABS(dVar18) < *(double *)(param_1 + 0x360) ||
            ABS(dVar18) == *(double *)(param_1 + 0x360)) ||
          (bVar10 = true, *(double *)(param_1 + 0xd18) <= 0.0)) {
    bVar10 = 0.0 < *(double *)(param_1 + 0xd30);
  }
  if (param_7 == '\0') {
    bVar9 = false;
  }
  else {
    dVar1 = ABS(dVar1);
    if ((dVar1 < *(double *)(param_1 + 0x360) || dVar1 == *(double *)(param_1 + 0x360)) ||
       (bVar9 = true, *(double *)(param_1 + 0xd10) <= 0.0)) {
      bVar9 = 0.0 < *(double *)(param_1 + 0xd28);
    }
  }
  bVar8 = bVar10 & bVar9 & *(byte *)(param_1 + 0xfc2) & bVar11;
  *(byte *)(param_1 + 0xfb1) = *(byte *)(param_1 + 0xfb1) & 0xf9 | cVar7 * '\x02' | bVar8 * '\x04';
  if (bVar8 == 1) {
    local_158 = *(double *)(param_1 + 0x150);
    dVar25 = *(double *)(param_1 + 0x140);
    dVar1 = *(double *)(param_1 + 0x148);
    local_150 = dVar25 * -0.0;
    dVar15 = dVar1 * 0.0 + local_158 * -0.0;
    dVar23 = local_158 + local_150 + local_158 + local_150;
    dVar15 = dVar15 + dVar15;
    dVar17 = dVar25 * 0.0 - dVar1;
    dVar17 = dVar17 + dVar17;
    dVar21 = *(double *)(param_1 + 0x158);
    local_118 = (dVar25 * dVar23 - dVar15 * dVar1) + dVar21 * dVar17 + 0.0;
    local_120 = (local_158 * dVar15 - dVar17 * dVar25) + dVar21 * dVar23 + 0.0;
    local_128 = (dVar1 * dVar17 - dVar23 * local_158) + dVar15 * dVar21 + 1.0;
    dVar23 = local_158 * 0.0 - dVar25;
    dVar15 = local_158 * -0.0 + dVar1;
    dVar23 = dVar23 + dVar23;
    dVar15 = dVar15 + dVar15;
    dVar17 = dVar25 * 0.0 + dVar1 * -0.0;
    dVar17 = dVar17 + dVar17;
    local_100 = (dVar25 * dVar23 - dVar15 * dVar1) + dVar21 * dVar17 + 1.0;
    local_108 = (local_158 * dVar15 - dVar17 * dVar25) + dVar21 * dVar23 + 0.0;
    local_110 = (dVar1 * dVar17 - dVar23 * local_158) + dVar15 * dVar21 + 0.0;
    dVar17 = dVar1 * -0.0 + dVar25;
    dVar15 = local_158 * 0.0 + local_150;
    dVar23 = dVar1 * 0.0 - local_158;
    dVar17 = dVar17 + dVar17;
    dVar15 = dVar15 + dVar15;
    dVar23 = dVar23 + dVar23;
    local_e8 = (dVar25 * dVar15 - dVar23 * dVar1) + dVar21 * dVar17 + 0.0;
    local_f0 = (local_158 * dVar23 - dVar17 * dVar25) + dVar21 * dVar15 + 1.0;
    local_f8 = (dVar1 * dVar17 - dVar15 * local_158) + dVar23 * dVar21 + 0.0;
    local_148 = param_2;
    local_140 = dVar16;
    local_138 = dVar18;
    local_130 = dVar19;
    FUN_146dc1fde(param_1);
    *(undefined8 *)(param_1 + 0xcf0) = 0;
    *(undefined8 *)(param_1 + 0xcf8) = 0;
    *(undefined8 *)(param_1 + 0xe10) = 0;
    *(undefined8 *)(param_1 + 0xe18) = 0;
    *(undefined8 *)(param_1 + 0xf68) = *(undefined8 *)(param_4 + 0x250);
    dVar18 = *(double *)(param_4 + 0x2a8);
    *(undefined8 *)(param_1 + 0xf20) = 0;
    if ((0.0 < dVar18) && (dVar18 < 3.4028234663852886e+38)) {
      dVar18 = dVar18 * param_2 * param_2;
      if ((*(byte *)(param_1 + 0xfb1) & 2) != 0) {
        dVar18 = dVar18 / *(double *)(param_1 + 0xe40);
      }
      *(double *)(param_1 + 0xf20) = dVar18;
    }
    *(undefined8 *)(param_1 + 0xf78) = *(undefined8 *)(param_4 + 0x260);
    dVar18 = *(double *)(param_4 + 0x2b8);
    *(undefined8 *)(param_1 + 0xf30) = 0;
    if ((0.0 < dVar18) && (dVar18 < 3.4028234663852886e+38)) {
      dVar18 = dVar18 * param_2 * param_2;
      if ((*(byte *)(param_1 + 0xfb1) & 2) != 0) {
        dVar18 = dVar18 / *(double *)(param_1 + 0xe50);
      }
      *(double *)(param_1 + 0xf30) = dVar18;
    }
    *(undefined8 *)(param_1 + 0xf70) = *(undefined8 *)(param_4 + 600);
    dVar18 = *(double *)(param_4 + 0x2b0);
    *(undefined8 *)(param_1 + 0xf28) = 0;
  }
  else {
    if (bVar11 != false) {
      dVar25 = *(double *)(param_1 + 0x150);
      dVar1 = *(double *)(param_1 + 0x140);
      dVar21 = *(double *)(param_1 + 0x148);
      dVar15 = dVar25 - dVar1 * 0.0;
      dVar17 = dVar1 * 0.0 - dVar21;
      dVar24 = dVar21 * 0.0 + dVar25 * -0.0;
      dVar17 = dVar17 + dVar17;
      dVar15 = dVar15 + dVar15;
      dVar24 = dVar24 + dVar24;
      dVar23 = *(double *)(param_1 + 0x158);
      local_118 = (dVar1 * dVar15 - dVar24 * dVar21) + dVar23 * dVar17 + 0.0;
      local_120 = (dVar25 * dVar24 - dVar17 * dVar1) + dVar23 * dVar15 + 0.0;
      local_128 = (dVar21 * dVar17 - dVar15 * dVar25) + dVar24 * dVar23 + 1.0;
      local_168 = dVar16;
      FUN_146dc1edc(param_1,0,&local_128,param_2);
      *(undefined8 *)(param_1 + 0xf68) = *(undefined8 *)(param_4 + 0x250);
      dVar16 = *(double *)(param_4 + 0x2a8);
      *(undefined8 *)(param_1 + 0xf20) = 0;
      if ((0.0 < dVar16) && (dVar16 < 3.4028234663852886e+38)) {
        dVar16 = dVar16 * param_2 * param_2;
        if ((*(byte *)(param_1 + 0xfb1) & 2) != 0) {
          dVar16 = dVar16 / *(double *)(param_1 + 0xe40);
        }
        *(double *)(param_1 + 0xf20) = dVar16;
      }
    }
    if (bVar10 != false) {
      dVar16 = *(double *)(param_1 + 0x150);
      dVar25 = *(double *)(param_1 + 0x140);
      dVar1 = *(double *)(param_1 + 0x148);
      dVar15 = dVar25 * 0.0 + dVar1 * -0.0;
      dVar17 = dVar1 - dVar16 * 0.0;
      dVar23 = dVar16 * 0.0 - dVar25;
      dVar15 = dVar15 + dVar15;
      dVar23 = dVar23 + dVar23;
      dVar17 = dVar17 + dVar17;
      dVar21 = *(double *)(param_1 + 0x158);
      local_118 = (dVar25 * dVar23 - dVar17 * dVar1) + dVar21 * dVar15 + 1.0;
      local_120 = (dVar16 * dVar17 - dVar15 * dVar25) + dVar21 * dVar23 + 0.0;
      local_128 = (dVar1 * dVar15 - dVar23 * dVar16) + dVar17 * dVar21 + 0.0;
      local_168 = dVar18;
      FUN_146dc1edc(param_1,2,&local_128,param_2);
      *(undefined8 *)(param_1 + 0xf78) = *(undefined8 *)(param_4 + 0x260);
      dVar18 = *(double *)(param_4 + 0x2b8);
      *(undefined8 *)(param_1 + 0xf30) = 0;
      if ((0.0 < dVar18) && (dVar18 < 3.4028234663852886e+38)) {
        dVar18 = dVar18 * param_2 * param_2;
        if ((*(byte *)(param_1 + 0xfb1) & 2) != 0) {
          dVar18 = dVar18 / *(double *)(param_1 + 0xe50);
        }
        *(double *)(param_1 + 0xf30) = dVar18;
      }
    }
    if (bVar9 == false) goto LAB_146dc1682;
    dVar18 = *(double *)(param_1 + 0x150);
    dVar16 = *(double *)(param_1 + 0x140);
    dVar25 = *(double *)(param_1 + 0x148);
    dVar23 = dVar16 - dVar25 * 0.0;
    dVar21 = dVar18 * 0.0 + dVar16 * -0.0;
    dVar15 = dVar25 * 0.0 - dVar18;
    dVar23 = dVar23 + dVar23;
    dVar21 = dVar21 + dVar21;
    dVar15 = dVar15 + dVar15;
    dVar1 = *(double *)(param_1 + 0x158);
    local_118 = (dVar16 * dVar21 - dVar15 * dVar25) + dVar1 * dVar23 + 0.0;
    local_120 = (dVar18 * dVar15 - dVar23 * dVar16) + dVar1 * dVar21 + 1.0;
    local_128 = (dVar25 * dVar23 - dVar21 * dVar18) + dVar15 * dVar1 + 0.0;
    local_168 = dVar19;
    FUN_146dc1edc(param_1,1,&local_128,param_2);
    *(undefined8 *)(param_1 + 0xf70) = *(undefined8 *)(param_4 + 600);
    dVar18 = *(double *)(param_4 + 0x2b0);
    *(undefined8 *)(param_1 + 0xf28) = 0;
  }
  if ((0.0 < dVar18) && (dVar18 < 3.4028234663852886e+38)) {
    param_2 = dVar18 * param_2 * param_2;
    if ((*(byte *)(param_1 + 0xfb1) & 2) != 0) {
      param_2 = param_2 / *(double *)(param_1 + 0xe48);
    }
    *(double *)(param_1 + 0xf28) = param_2;
  }
LAB_146dc1682:
  if ((local_e0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dc1edc FUN_146dc1edc body=256 status=ok
// SIG undefined FUN_146dc1edc(void)

void FUN_146dc1edc(longlong param_1,uint param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  uVar7 = DAT_14c8464f0;
  uVar6 = DAT_14c8464e8._4_4_;
  uVar5 = (undefined4)DAT_14c8464e8;
  uVar4 = DAT_14c8464e0._4_4_;
  uVar3 = (undefined4)DAT_14c8464e0;
  uVar8 = (ulonglong)param_2;
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = DAT_14c8464f0;
  local_28 = (undefined4)DAT_14c8464e0;
  uStack_24 = DAT_14c8464e0._4_4_;
  uStack_20 = (undefined4)DAT_14c8464e8;
  uStack_1c = DAT_14c8464e8._4_4_;
  local_38 = DAT_14c8464f0;
  local_48 = (undefined4)DAT_14c8464e0;
  uStack_44 = DAT_14c8464e0._4_4_;
  uStack_40 = (undefined4)DAT_14c8464e8;
  uStack_3c = DAT_14c8464e8._4_4_;
  *(byte *)(param_1 + 0xfb0) =
       *(byte *)(param_1 + 0xfb0) | (byte)(0x241209 >> ((char)param_2 * '\b' & 0x1fU));
  *(undefined8 *)(param_1 + 0xee8 + uVar8 * 8) = param_5;
  *(undefined8 *)(param_1 + 0xf68 + uVar8 * 8) = 0;
  *(undefined8 *)(param_1 + 0xf80 + uVar8 * 8) = 0;
  lVar9 = uVar8 * 0x30;
  *(undefined8 *)(param_1 + 0xd48 + lVar9) = uVar7;
  puVar1 = (undefined8 *)(param_1 + 0xd38 + lVar9);
  *puVar1 = CONCAT44(uVar4,uVar3);
  puVar1[1] = CONCAT44(uVar6,uVar5);
  *(undefined8 *)(param_1 + 0xd60 + lVar9) = uVar7;
  puVar1 = (undefined8 *)(param_1 + 0xd50 + lVar9);
  *puVar1 = CONCAT44(uVar4,uVar3);
  puVar1[1] = CONCAT44(uVar6,uVar5);
  *(undefined8 *)(param_1 + 0xdd8 + uVar8 * 0x18) = *(undefined8 *)(param_3 + 4);
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar2 = (undefined4 *)(param_1 + 0xdc8 + uVar8 * 0x18);
  *puVar2 = *param_3;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_146db807c(param_1,param_1 + 0xcf0,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_68,param_1 + 0xcf0);
}



// FUNCTION 146dc1fde FUN_146dc1fde body=762 status=ok
// SIG undefined FUN_146dc1fde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146dc1fde(longlong param_1,longlong param_2,float param_3,double *param_4)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  longlong lVar23;
  double *pdVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
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
  undefined1 auStack_b8 [32];
  double local_98 [3];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  auVar30._4_4_ = (float)param_4[1];
  auVar30._0_4_ = (float)*param_4;
  auVar30._8_4_ = (float)param_4[2];
  auVar30._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0xe00) = auVar30;
  dVar2 = *(double *)(param_1 + 0x260);
  dVar3 = *(double *)(param_1 + 0x280);
  dVar11 = *(double *)(param_1 + 0x250);
  dVar12 = *(double *)(param_1 + 600);
  dVar4 = *(double *)(param_1 + 0x2a0);
  dVar13 = *(double *)(param_1 + 0x270);
  dVar14 = *(double *)(param_1 + 0x278);
  dVar5 = *(double *)(param_1 + 0x2e0);
  dVar15 = *(double *)(param_1 + 0x290);
  dVar16 = *(double *)(param_1 + 0x298);
  dVar17 = *(double *)(param_1 + 0x2d0);
  dVar18 = *(double *)(param_1 + 0x2d8);
  dVar6 = *(double *)(param_1 + 0x300);
  dVar19 = *(double *)(param_1 + 0x2f0);
  dVar20 = *(double *)(param_1 + 0x2f8);
  dVar7 = *(double *)(param_1 + 800);
  dVar21 = *(double *)(param_1 + 0x310);
  dVar22 = *(double *)(param_1 + 0x318);
  pdVar24 = (double *)(param_2 + 0x10);
  lVar23 = 0;
  do {
    *(undefined8 *)(param_1 + 0xf68 + lVar23) = 0;
    fVar38 = (float)*pdVar24;
    fVar39 = (float)pdVar24[-2];
    fVar40 = (float)pdVar24[-1];
    auVar10._4_4_ = fVar40;
    auVar10._0_4_ = fVar39;
    auVar10._8_4_ = fVar38;
    auVar10._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0xd40 + lVar23 * 2) = auVar10;
    fVar31 = fVar39 * (float)dVar17 + fVar40 * (float)dVar19 + fVar38 * (float)dVar21;
    fVar33 = fVar39 * (float)dVar18 + fVar40 * (float)dVar20 + fVar38 * (float)dVar22;
    fVar34 = fVar39 * (float)dVar5 + fVar40 * (float)dVar6 + fVar38 * (float)dVar7;
    fVar35 = (float)dVar11 * fVar39 + (float)dVar13 * fVar40 + (float)dVar15 * fVar38;
    fVar36 = (float)dVar12 * fVar39 + (float)dVar14 * fVar40 + (float)dVar16 * fVar38;
    fVar37 = (float)dVar2 * fVar39 + (float)dVar3 * fVar40 + (float)dVar4 * fVar38;
    *(double *)((longlong)local_98 + lVar23) =
         (double)(fVar38 * fVar37 + fVar39 * fVar35 + fVar40 * fVar36 +
                 fVar38 * fVar34 + fVar39 * fVar31 + fVar40 * fVar33);
    pfVar1 = (float *)(param_1 + 0xda0 + lVar23 * 4);
    *pfVar1 = fVar35;
    pfVar1[1] = fVar36;
    pfVar1[2] = fVar37;
    pfVar1[3] = fVar39 * 0.0 + fVar40 * 0.0 + fVar38 * 0.0;
    pfVar1 = (float *)(param_1 + 0xdb0 + lVar23 * 4);
    *pfVar1 = 0.0 - fVar31;
    pfVar1[1] = 0.0 - fVar33;
    pfVar1[2] = 0.0 - fVar34;
    pfVar1[3] = 0.0 - (fVar39 * 0.0 + fVar40 * 0.0 + fVar38 * 0.0);
    lVar23 = lVar23 + 8;
    pdVar24 = pdVar24 + 3;
  } while (lVar23 != 0x18);
  fVar38 = (float)local_98[2];
  fVar36 = (float)local_98[0];
  fVar37 = (float)local_98[1];
  auVar8._4_4_ = fVar37;
  auVar8._0_4_ = fVar36;
  auVar8._8_4_ = fVar38;
  auVar8._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0xd90) = auVar8;
  fVar31 = (float)DAT_1499314a0;
  fVar33 = DAT_1499314a0._4_4_;
  fVar34 = DAT_1499314a0._8_4_;
  fVar35 = DAT_1499314a0._12_4_;
  auVar30 = _DAT_1499314a0;
  if ((*(byte *)(param_1 + 0xfb1) & 2) != 0) {
    auVar9._4_4_ = fVar37;
    auVar9._0_4_ = fVar36;
    auVar9._8_4_ = fVar38;
    auVar9._12_4_ = 0;
    auVar30 = divps(_DAT_1499314a0,auVar9);
  }
  fVar32 = param_3 * param_3;
  fVar39 = (float)*(double *)(param_1 + 0xf50) * auVar30._0_4_ * fVar32;
  fVar40 = (float)*(double *)(param_1 + 0xf58) * auVar30._4_4_ * fVar32;
  fVar25 = (float)*(double *)(param_1 + 0xf60) * auVar30._8_4_ * fVar32;
  fVar32 = auVar30._12_4_ * 0.0 * fVar32;
  *(float *)(param_1 + 0xd00) = fVar39;
  *(float *)(param_1 + 0xd04) = fVar40;
  *(float *)(param_1 + 0xd08) = fVar25;
  *(float *)(param_1 + 0xd0c) = fVar32;
  if (*(char *)(param_1 + 0x475) == '\0') {
    fVar26 = 0.0;
    fVar27 = 0.0;
    fVar28 = 0.0;
    fVar29 = 0.0;
  }
  else {
    fVar26 = param_3 * (float)*(double *)(param_1 + 0xf38) * auVar30._0_4_;
    fVar27 = param_3 * (float)*(double *)(param_1 + 0xf40) * auVar30._4_4_;
    fVar28 = param_3 * (float)*(double *)(param_1 + 0xf48) * auVar30._8_4_;
    fVar29 = param_3 * 0.0 * auVar30._12_4_;
  }
  *(float *)(param_1 + 0xd10) = fVar26;
  *(float *)(param_1 + 0xd14) = fVar27;
  *(float *)(param_1 + 0xd18) = fVar28;
  *(float *)(param_1 + 0xd1c) = fVar29;
  *(float *)(param_1 + 0xd80) = fVar36 * (fVar39 + fVar26) + fVar31;
  *(float *)(param_1 + 0xd84) = fVar37 * (fVar40 + fVar27) + fVar33;
  *(float *)(param_1 + 0xd88) = fVar38 * (fVar25 + fVar28) + fVar34;
  *(float *)(param_1 + 0xd8c) = (fVar32 + fVar29) * 0.0 + fVar35;
  if ((local_80 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dc22da FUN_146dc22da body=746 status=ok
// SIG undefined FUN_146dc22da(void)

void FUN_146dc22da(longlong *param_1,double param_2)

{
  float *pfVar1;
  float *pfVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar11;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_118 [32];
  float afStack_f8 [24];
  float local_98 [4];
  float local_88;
  undefined8 local_78;
  float local_68 [4];
  float local_58;
  undefined8 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar7 = *param_1;
  fVar12 = *(float *)(lVar7 + 0x18);
  auVar9 = insertps(ZEXT416(*(uint *)(lVar7 + 0x10)),*(undefined4 *)(lVar7 + 0x14),0x10);
  lVar6 = param_1[3];
  fVar15 = *(float *)(lVar6 + 0x18);
  auVar14 = insertps(ZEXT416(*(uint *)(lVar6 + 0x10)),*(undefined4 *)(lVar6 + 0x14),0x10);
  dVar3 = (double)param_1[0x1ee];
  dVar4 = (double)param_1[0x1ed];
  dVar5 = (double)param_1[0x1ef];
  auVar10._0_4_ =
       (auVar9._0_4_ + *(float *)(param_1 + 0x32)) - (auVar14._0_4_ + *(float *)(param_1 + 0x34));
  auVar10._4_4_ =
       (auVar9._4_4_ + *(float *)((longlong)param_1 + 0x194)) -
       (auVar14._4_4_ + *(float *)((longlong)param_1 + 0x1a4));
  auVar10._8_4_ = (fVar12 + *(float *)(param_1 + 0x33)) - (fVar15 + *(float *)(param_1 + 0x35));
  auVar10._12_4_ =
       (*(float *)((longlong)param_1 + 0x19c) + 0.0) - (*(float *)((longlong)param_1 + 0x1ac) + 0.0)
  ;
  lVar8 = 0;
  do {
    auVar16 = *(undefined1 (*) [16])((longlong)param_1 + lVar8 + 0xd40);
    auVar17._4_4_ = auVar14._4_4_ - auVar9._4_4_;
    auVar17._0_4_ = auVar14._0_4_ - auVar9._0_4_;
    auVar17._8_4_ = fVar15 - fVar12;
    auVar17._12_4_ = 0;
    auVar17 = dpps(auVar17,auVar16,0xff);
    auVar16 = dpps(auVar16,auVar10,0xff);
    *(undefined1 (*) [16])((longlong)local_68 + lVar8) = auVar17;
    *(undefined1 (*) [16])((longlong)local_98 + lVar8) = auVar16;
    lVar8 = lVar8 + 0x10;
  } while (lVar8 != 0x30);
  fVar12 = (float)param_2;
  fVar15 = (float)(double)param_1[0x6a];
  auVar9._0_4_ = (local_68[0] + *(float *)(param_1 + 0x1c0)) * *(float *)(param_1 + 0x1a0) -
                 ((fVar12 * (float)dVar4 + local_98[0]) * *(float *)(param_1 + 0x1a2) +
                 *(float *)(param_1 + 0x1c2));
  auVar9._4_4_ = (local_58 + *(float *)((longlong)param_1 + 0xe04)) *
                 *(float *)((longlong)param_1 + 0xd04) -
                 ((fVar12 * (float)dVar3 + local_88) * *(float *)((longlong)param_1 + 0xd14) +
                 *(float *)((longlong)param_1 + 0xe14));
  auVar9._8_4_ = ((float)local_48 + *(float *)(param_1 + 0x1c1)) * *(float *)(param_1 + 0x1a1) -
                 ((fVar12 * (float)dVar5 + (float)local_78) * *(float *)(param_1 + 0x1a3) +
                 *(float *)(param_1 + 0x1c3));
  auVar9._12_4_ =
       ((float)((ulonglong)local_48 >> 0x20) + *(float *)((longlong)param_1 + 0xe0c)) *
       *(float *)((longlong)param_1 + 0xd0c) -
       ((fVar12 * 0.0 + (float)((ulonglong)local_78 >> 0x20)) *
        *(float *)((longlong)param_1 + 0xd1c) + *(float *)((longlong)param_1 + 0xe1c));
  auVar9 = divps(auVar9,*(undefined1 (*) [16])(param_1 + 0x1b0));
  afStack_f8[0xc] = auVar9._0_4_ * fVar15;
  afStack_f8[0x10] = auVar9._4_4_ * fVar15;
  afStack_f8[0x14] = auVar9._8_4_ * fVar15;
  *(float *)(param_1 + 0x1c2) = *(float *)(param_1 + 0x1c2) + afStack_f8[0xc];
  *(float *)((longlong)param_1 + 0xe14) = *(float *)((longlong)param_1 + 0xe14) + afStack_f8[0x10];
  *(float *)(param_1 + 0x1c3) = *(float *)(param_1 + 0x1c3) + afStack_f8[0x14];
  *(float *)((longlong)param_1 + 0xe1c) =
       *(float *)((longlong)param_1 + 0xe1c) + auVar9._12_4_ * fVar15;
  afStack_f8[0xd] = afStack_f8[0xc];
  afStack_f8[0xe] = afStack_f8[0xc];
  afStack_f8[0xf] = afStack_f8[0xc];
  afStack_f8[0x11] = afStack_f8[0x10];
  afStack_f8[0x12] = afStack_f8[0x10];
  afStack_f8[0x13] = afStack_f8[0x10];
  afStack_f8[0x15] = afStack_f8[0x14];
  afStack_f8[0x16] = afStack_f8[0x14];
  afStack_f8[0x17] = afStack_f8[0x14];
  lVar8 = 0;
  do {
    pfVar1 = (float *)((longlong)param_1 + lVar8 + 0xd40);
    fVar12 = pfVar1[1];
    fVar15 = pfVar1[2];
    fVar11 = pfVar1[3];
    *(float *)((longlong)afStack_f8 + lVar8) =
         *(float *)((longlong)afStack_f8 + lVar8 + 0x30) * *pfVar1;
    *(float *)((longlong)afStack_f8 + lVar8 + 4) =
         *(float *)((longlong)afStack_f8 + lVar8 + 0x34) * fVar12;
    *(float *)((longlong)afStack_f8 + lVar8 + 8) =
         *(float *)((longlong)afStack_f8 + lVar8 + 0x38) * fVar15;
    *(float *)((longlong)afStack_f8 + lVar8 + 0xc) =
         *(float *)((longlong)afStack_f8 + lVar8 + 0x3c) * fVar11;
    lVar8 = lVar8 + 0x10;
  } while (lVar8 != 0x30);
  if (1.1754944e-38 < *(float *)(param_1 + 2) * *(float *)(param_1 + 1) * *(float *)(lVar7 + 0x134))
  {
    fVar12 = 0.0;
    fVar15 = 0.0;
    fVar11 = 0.0;
    lVar6 = 0;
    do {
      pfVar1 = (float *)((longlong)param_1 + lVar6 * 2 + 0xda0);
      pfVar2 = (float *)((longlong)param_1 + lVar6 + 0xd40);
      fVar13 = pfVar1[2] * pfVar2[2] + *pfVar1 * *pfVar2 + pfVar1[1] * pfVar2[1];
      fVar12 = fVar12 + fVar13 * *(float *)((longlong)afStack_f8 + lVar6);
      fVar15 = fVar15 + fVar13 * *(float *)((longlong)afStack_f8 + lVar6 + 4);
      fVar11 = fVar11 + fVar13 * *(float *)((longlong)afStack_f8 + lVar6 + 8);
      lVar6 = lVar6 + 0x10;
    } while (lVar6 != 0x30);
    *(float *)(lVar7 + 0x10) = fVar12 + *(float *)(lVar7 + 0x10);
    *(float *)(lVar7 + 0x14) = fVar15 + *(float *)(lVar7 + 0x14);
    *(float *)(lVar7 + 0x18) = fVar11 + *(float *)(lVar7 + 0x18);
    lVar6 = param_1[3];
  }
  if (1.1754944e-38 < *(float *)(param_1 + 5) * *(float *)(param_1 + 4) * *(float *)(lVar6 + 0x134))
  {
    lVar7 = 0;
    auVar9 = ZEXT816(0);
    do {
      pfVar1 = (float *)((longlong)param_1 + lVar7 * 2 + 0xdb0);
      pfVar2 = (float *)((longlong)param_1 + lVar7 + 0xd40);
      fVar12 = pfVar1[2] * pfVar2[2] + *pfVar1 * *pfVar2 + pfVar1[1] * pfVar2[1];
      auVar14._0_4_ = auVar9._0_4_ + fVar12 * *(float *)((longlong)afStack_f8 + lVar7);
      auVar14._4_4_ = auVar9._4_4_ + fVar12 * *(float *)((longlong)afStack_f8 + lVar7 + 4);
      auVar14._8_4_ = auVar9._8_4_ + fVar12 * *(float *)((longlong)afStack_f8 + lVar7 + 8);
      auVar14._12_4_ = auVar9._12_4_ + fVar12 * *(float *)((longlong)afStack_f8 + lVar7 + 0xc);
      lVar7 = lVar7 + 0x10;
      auVar9 = auVar14;
    } while (lVar7 != 0x30);
    *(float *)(lVar6 + 0x10) = auVar14._0_4_ + *(float *)(lVar6 + 0x10);
    *(float *)(lVar6 + 0x14) = auVar14._4_4_ + *(float *)(lVar6 + 0x14);
    *(float *)(lVar6 + 0x18) = auVar14._8_4_ + *(float *)(lVar6 + 0x18);
  }
  *(int *)(param_1 + 0x8e) = (int)param_1[0x8e] + 3;
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dc25c6 FUN_146dc25c6 body=557 status=ok
// SIG undefined FUN_146dc25c6(void)

void FUN_146dc25c6(longlong *param_1,uint param_2,double param_3)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  uVar4 = (ulonglong)param_2;
  dVar7 = 0.0;
  dVar6 = 0.0;
  if (9.999999747378752e-05 < (double)param_1[uVar4 + 0x1a1]) {
    lVar2 = *param_1;
    lVar3 = param_1[3];
    dVar6 = (double)(*(float *)(lVar3 + 0x18) - *(float *)(lVar2 + 0x18)) *
            (double)param_1[uVar4 * 3 + 0x1bb] +
            (double)(*(float *)(lVar3 + 0x10) - *(float *)(lVar2 + 0x10)) *
            (double)param_1[uVar4 * 3 + 0x1b9] +
            (double)(*(float *)(lVar3 + 0x14) - *(float *)(lVar2 + 0x14)) *
            (double)param_1[uVar4 * 3 + 0x1ba] + (double)param_1[uVar4 + 0x1dd];
  }
  if (9.999999747378752e-05 < (double)param_1[uVar4 + 0x1a4]) {
    lVar2 = *param_1;
    lVar3 = param_1[3];
    dVar7 = param_3 * (double)param_1[uVar4 + 0x1ed] +
            (((double)*(float *)(lVar2 + 0x18) + (double)param_1[0x2e]) -
            ((double)*(float *)(lVar3 + 0x18) + (double)param_1[0x31])) *
            (double)param_1[uVar4 * 3 + 0x1bb] +
            (((double)*(float *)(lVar2 + 0x10) + (double)param_1[0x2c]) -
            ((double)*(float *)(lVar3 + 0x10) + (double)param_1[0x2f])) *
            (double)param_1[uVar4 * 3 + 0x1b9] +
            (((double)*(float *)(lVar2 + 0x14) + (double)param_1[0x2d]) -
            ((double)*(float *)(lVar3 + 0x14) + (double)param_1[0x30])) *
            (double)param_1[uVar4 * 3 + 0x1ba];
  }
  dVar1 = (double)param_1[uVar4 + 0x1e0];
  dVar5 = (double)param_1[uVar4 + 0x1e4];
  dVar6 = ((((double)param_1[uVar4 + 0x1a1] * dVar6 - dVar7 * (double)param_1[uVar4 + 0x1a4]) -
           dVar1) * (double)param_1[0x6a]) / (double)param_1[uVar4 + 0x1c5];
  dVar7 = dVar1 + dVar6;
  if ((0.0 < dVar5) && ((dVar5 < dVar7 || (dVar5 = -dVar5, dVar7 < dVar5)))) {
    dVar6 = dVar5 - dVar1;
    dVar7 = dVar5;
  }
  param_1[uVar4 + 0x1e0] = (longlong)dVar7;
  FUN_146dbe310(dVar5,dVar7,dVar6,1,param_1 + 0x19e);
  return;
}



// FUNCTION 146dc27f4 FUN_146dc27f4 body=619 status=ok
// SIG undefined FUN_146dc27f4(void)

void FUN_146dc27f4(longlong *param_1,uint param_2,double param_3)

{
  longlong lVar1;
  double dVar2;
  longlong lVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  uVar4 = (ulonglong)param_2;
  if (9.99999993922529e-09 <= (double)param_1[uVar4 + 0x1e7] * param_3) {
    dVar5 = 1.0;
    if ((*(byte *)((longlong)param_1 + 0xfb1) & 2) != 0) {
      dVar5 = 1.0 / (double)param_1[uVar4 + 0x1c8];
    }
    dVar5 = (double)param_1[uVar4 + 0x1e7] * param_3 * dVar5;
    lVar1 = *param_1;
    lVar3 = param_1[3];
    dVar6 = (((((((double)*(float *)(lVar3 + 0x38) - (double)*(float *)(lVar1 + 0x38)) *
                 (double)param_1[uVar4 * 3 + 0x1bb] +
                ((double)*(float *)(lVar3 + 0x30) - (double)*(float *)(lVar1 + 0x30)) *
                (double)param_1[uVar4 * 3 + 0x1b9] +
                ((double)*(float *)(lVar3 + 0x34) - (double)*(float *)(lVar1 + 0x34)) *
                (double)param_1[uVar4 * 3 + 0x1ba]) - (double)param_1[uVar4 + 0x1ed]) * dVar5 -
              (double)param_1[uVar4 + 499]) * (double)param_1[0x6a]) /
            ((double)param_1[uVar4 + 0x1c8] * dVar5 + 1.0)) * param_3;
    dVar7 = (double)param_1[uVar4 + 0x1e0] + dVar6;
    dVar5 = (double)param_1[uVar4 + 0x1e4];
    if ((0.0 < dVar5) && ((dVar2 = dVar5, dVar5 < dVar7 || (dVar2 = -dVar5, dVar7 < -dVar5)))) {
      dVar7 = dVar2;
      dVar6 = dVar7 - (double)param_1[uVar4 + 0x1e0];
    }
    param_1[uVar4 + 0x1e0] = (longlong)dVar7;
    dVar6 = dVar6 / param_3;
    param_1[uVar4 + 499] = (longlong)((double)param_1[uVar4 + 499] + dVar6);
    if (1.1754944e-38 <
        *(float *)(param_1 + 2) * *(float *)(param_1 + 1) * *(float *)(lVar1 + 0x134)) {
      dVar5 = (double)param_1[uVar4 * 6 + 0x1cd];
      dVar7 = (double)param_1[uVar4 * 6 + 0x1cc];
      *(float *)(lVar1 + 0x30) =
           (float)((double)param_1[uVar4 * 6 + 0x1cb] * dVar6) + *(float *)(lVar1 + 0x30);
      *(float *)(lVar1 + 0x34) = (float)(dVar7 * dVar6) + *(float *)(lVar1 + 0x34);
      *(float *)(lVar1 + 0x38) = (float)(dVar5 * dVar6) + *(float *)(lVar1 + 0x38);
      lVar3 = param_1[3];
    }
    if (1.1754944e-38 <
        *(float *)(param_1 + 5) * *(float *)(param_1 + 4) * *(float *)(lVar3 + 0x134)) {
      dVar5 = (double)param_1[uVar4 * 6 + 0x1d0];
      dVar7 = (double)param_1[uVar4 * 6 + 0x1cf];
      *(float *)(lVar3 + 0x30) =
           (float)(dVar6 * (double)param_1[uVar4 * 6 + 0x1ce]) + *(float *)(lVar3 + 0x30);
      *(float *)(lVar3 + 0x34) = (float)(dVar7 * dVar6) + *(float *)(lVar3 + 0x34);
      *(float *)(lVar3 + 0x38) = (float)(dVar5 * dVar6) + *(float *)(lVar3 + 0x38);
    }
  }
  return;
}



// FUNCTION 146dc2a5f FUN_146dc2a5f body=104 status=ok
// SIG undefined FUN_146dc2a5f(void)

undefined8
FUN_146dc2a5f(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4,int param_5,
             int param_6)

{
  undefined8 uVar1;
  
  if ((((*(char *)(param_4 + 0xfa) == '\x01') && (param_6 - *(int *)(param_3 + 0x3c) <= param_5)) &&
      (1.1754944e-38 <
       *(float *)(param_1 + 2) * *(float *)(param_1 + 1) * *(float *)(*param_1 + 0x134))) &&
     (1.1754944e-38 <
      *(float *)(param_2 + 2) * *(float *)(param_2 + 1) * *(float *)(*param_2 + 0x134))) {
    uVar1 = FUN_146decd34(param_3,param_4);
    return uVar1;
  }
  return 0x3ff0000000000000;
}



// FUNCTION 146dc2ac7 FUN_146dc2ac7 body=182 status=ok
// SIG undefined FUN_146dc2ac7(void)

bool FUN_146dc2ac7(longlong param_1,double param_2,double *param_3,double *param_4)

{
  double dVar1;
  bool bVar2;
  
  dVar1 = *(double *)(param_1 + 0x2c0);
  if (((dVar1 == 3.4028234663852886e+38) && (!NAN(dVar1))) ||
     (bVar2 = true,
     (param_3[2] * param_3[2] + *param_3 * *param_3 + param_3[1] * param_3[1]) /
     (param_2 * param_2 * param_2 * param_2) <= dVar1 * dVar1)) {
    dVar1 = *(double *)(param_1 + 0x2e8);
    if ((dVar1 != 3.4028234663852886e+38) || (NAN(dVar1))) {
      bVar2 = dVar1 * dVar1 <
              (param_4[2] * param_4[2] + *param_4 * *param_4 + param_4[1] * param_4[1]) /
              (param_2 * param_2 * param_2 * param_2);
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}



// FUNCTION 146dc2b7e FUN_146dc2b7e body=115 status=ok
// SIG undefined FUN_146dc2b7e(void)

void FUN_146dc2b7e(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146dcfe5e(param_1,iVar1);
    }
    FUN_146dcfd48((longlong)iVar1 * 0x4b0 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146dcfef2(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146dc2bf2 FUN_146dc2bf2 body=94 status=ok
// SIG undefined FUN_146dc2bf2(void)

void FUN_146dc2bf2(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = FUN_1429bdee8(*(undefined8 *)(param_1 + 0x10));
  FUN_144aa5746(param_1,uVar2);
  iVar3 = FUN_1429bdee8(*(undefined8 *)(param_1 + 0x10));
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      cVar1 = FUN_146de9514(*(undefined8 *)(param_1 + 0x10),iVar3);
      if (cVar1 != '\0') {
        FUN_146dc2c50(param_1,iVar3);
      }
      iVar3 = iVar3 + 1;
      iVar4 = FUN_1429bdee8(*(undefined8 *)(param_1 + 0x10));
    } while (iVar3 < iVar4);
  }
  return;
}



// FUNCTION 146dc2c50 FUN_146dc2c50 body=179 status=ok
// SIG undefined FUN_146dc2c50(void)

void FUN_146dc2c50(longlong param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar4 = FUN_146de953c(*(undefined8 *)(param_1 + 0x10));
  plVar3 = *(longlong **)(lVar4 + 8);
  plVar5 = (longlong *)FUN_146de953c(*(undefined8 *)(param_1 + 0x10),param_2);
  plVar5 = (longlong *)*plVar5;
  if ((((plVar3 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar3 + 0xc))) &&
      ((cVar1 = *(char *)(*(longlong *)(*plVar3 + 0x2c0) + 0xb + (longlong)(int)plVar3[1] * 0x10),
       cVar1 == '\x01' || (cVar1 == '\x04')))) ||
     (((plVar5 != (longlong *)0x0 && (1 < *(byte *)((longlong)plVar5 + 0xc))) &&
      ((cVar1 = *(char *)(*(longlong *)(*plVar5 + 0x2c0) + 0xb + (longlong)(int)plVar5[1] * 0x10),
       cVar1 == '\x04' || (cVar1 == '\x01')))))) {
    iVar2 = *(int *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x20) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x24) < iVar2 + 1U) {
      FUN_1446f48e2((longlong *)(param_1 + 0x18),iVar2);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 4) = param_2;
  }
  return;
}



// FUNCTION 146dc2d10 FUN_146dc2d10 body=62 status=ok
// SIG undefined FUN_146dc2d10(void)

void FUN_146dc2d10(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x60) == '\x01') {
    FUN_146dc2d4e(param_1,param_1 + 0x28,param_2,param_3,param_4);
  }
  else {
    FUN_146dc2ebd(param_1,param_1 + 0x38,param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 146dc2d4e FUN_146dc2d4e body=366 status=ok
// SIG undefined FUN_146dc2d4e(void)

void FUN_146dc2d4e(longlong param_1,longlong *param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_188 [32];
  undefined1 *local_168;
  undefined1 *local_160;
  longlong local_150;
  longlong *local_148;
  undefined8 local_140;
  undefined1 local_138 [96];
  undefined1 local_d8 [104];
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  iVar8 = param_5 - param_4;
  local_148 = param_2;
  if (iVar8 != 0 && param_4 <= param_5) {
    local_150 = *(longlong *)(param_1 + 0x10) + 0x20;
    lVar7 = (longlong)param_4;
    lVar6 = lVar7 * 0xfd0;
    do {
      local_140 = FUN_146de952a(*(undefined8 *)(param_1 + 0x10),
                                *(undefined4 *)(*(longlong *)(param_1 + 0x18) + lVar7 * 4));
      uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + lVar7 * 4);
      lVar2 = FUN_146de953c(*(undefined8 *)(param_1 + 0x10),uVar1);
      local_68 = *(undefined8 *)(lVar2 + 8);
      puVar3 = (undefined8 *)FUN_146de953c(*(undefined8 *)(param_1 + 0x10),uVar1);
      local_70 = *puVar3;
      lVar4 = FUN_146de952a(*(undefined8 *)(param_1 + 0x10),uVar1);
      uVar5 = FUN_146de952a(*(undefined8 *)(param_1 + 0x10),uVar1);
      lVar2 = *local_148;
      FUN_146dcff9e(&local_70,local_d8,uVar5);
      FUN_146dcff9e(&local_68,local_138,lVar4 + 0x60);
      local_168 = local_138;
      local_160 = local_d8;
      FUN_146db82c6(lVar2 + lVar6,param_3,local_150,local_140);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0xfd0;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dc2ebd FUN_146dc2ebd body=366 status=ok
// SIG undefined FUN_146dc2ebd(void)

void FUN_146dc2ebd(longlong param_1,longlong *param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_188 [32];
  undefined1 *local_168;
  undefined1 *local_160;
  longlong local_150;
  longlong *local_148;
  undefined8 local_140;
  undefined1 local_138 [96];
  undefined1 local_d8 [104];
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  iVar8 = param_5 - param_4;
  local_148 = param_2;
  if (iVar8 != 0 && param_4 <= param_5) {
    local_150 = *(longlong *)(param_1 + 0x10) + 0x20;
    lVar7 = (longlong)param_4;
    lVar6 = lVar7 * 0x4b0;
    do {
      local_140 = FUN_146de952a(*(undefined8 *)(param_1 + 0x10),
                                *(undefined4 *)(*(longlong *)(param_1 + 0x18) + lVar7 * 4));
      uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + lVar7 * 4);
      lVar2 = FUN_146de953c(*(undefined8 *)(param_1 + 0x10),uVar1);
      local_68 = *(undefined8 *)(lVar2 + 8);
      puVar3 = (undefined8 *)FUN_146de953c(*(undefined8 *)(param_1 + 0x10),uVar1);
      local_70 = *puVar3;
      lVar4 = FUN_146de952a(*(undefined8 *)(param_1 + 0x10),uVar1);
      uVar5 = FUN_146de952a(*(undefined8 *)(param_1 + 0x10),uVar1);
      lVar2 = *local_148;
      FUN_146dcff9e(&local_70,local_d8,uVar5);
      FUN_146dcff9e(&local_68,local_138,lVar4 + 0x60);
      local_168 = local_138;
      local_160 = local_d8;
      FUN_146dc49e0(lVar2 + lVar6,param_3,local_150,local_140);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x4b0;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dc3038 FUN_146dc3038 body=62 status=ok
// SIG undefined FUN_146dc3038(void)

void FUN_146dc3038(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x60) == '\x01') {
    FUN_146dc3076(param_1,param_1 + 0x28,param_2,param_3,param_4);
  }
  else {
    FUN_146dc3349(param_1,param_1 + 0x38,param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 146dc3076 FUN_146dc3076 body=722 status=ok
// SIG undefined FUN_146dc3076(void)

void FUN_146dc3076(longlong param_1,longlong *param_2,double param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  undefined1 auStack_168 [32];
  float local_148;
  undefined4 local_140;
  undefined1 local_138;
  char local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_109;
  undefined8 local_108;
  undefined8 local_100;
  longlong *local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  iVar9 = param_5 - param_4;
  if (iVar9 != 0 && param_4 <= param_5) {
    lVar10 = (longlong)param_4;
    lVar7 = lVar10 * 0xfd0;
    local_f8 = param_2;
    do {
      uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + lVar10 * 4);
      if (9.99999993922529e-09 < param_3) {
        lVar4 = *param_2;
        FUN_146dd0348(lVar4 + lVar7,&local_d8);
        local_a8 = -local_c8 / param_3;
        dStack_b0 = -dStack_d0 / param_3;
        local_b8 = -local_d8 / param_3;
        FUN_146dd052e(lVar4 + lVar7,&local_f0);
        local_c8 = -local_e0 / param_3;
        dStack_d0 = -local_e8 / param_3;
        local_d8 = -local_f0 / param_3;
        uVar8 = *(undefined8 *)(lVar4 + 0x18 + lVar7);
        uVar1 = *(undefined1 *)(lVar4 + 0xfc0 + lVar7);
        cVar2 = *(char *)(lVar4 + 0xfc1 + lVar7);
        uVar6 = *(undefined8 *)(lVar4 + lVar7);
        fVar11 = 0.0;
        uVar5 = 0;
        if (cVar2 == '\x01') {
          local_109 = uVar1;
          local_108 = uVar8;
          local_100 = *(undefined8 *)(lVar4 + lVar7);
          fVar11 = sqrtf(-1.0);
          uVar6 = local_100;
          uVar8 = local_108;
          uVar1 = local_109;
          uVar5 = 0xbf800000;
        }
        local_140 = uVar5;
        local_148 = fVar11;
        local_138 = uVar1;
        local_130 = cVar2;
        local_128 = uVar6;
        uStack_120 = uVar8;
        FUN_146de9cf4(*(undefined8 *)(param_1 + 0x10),uVar3,&local_b8,&local_d8);
        *(undefined8 *)(lVar4 + lVar7) = 0;
        *(undefined8 *)(lVar4 + 0x18 + lVar7) = 0;
        param_2 = local_f8;
      }
      else {
        local_a8 = 0.0;
        local_b8 = 0.0;
        dStack_b0 = 0.0;
        local_c8 = 0.0;
        local_d8 = 0.0;
        dStack_d0 = 0.0;
        local_128 = 0;
        uStack_120 = 0;
        local_130 = '\0';
        local_138 = 0;
        local_140 = 0;
        local_148 = 0.0;
        FUN_146de9cf4(*(undefined8 *)(param_1 + 0x10),uVar3,&local_d8,&local_b8);
      }
      lVar10 = lVar10 + 1;
      lVar7 = lVar7 + 0xfd0;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if ((local_a0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146dc3349 FUN_146dc3349 body=705 status=ok
// SIG undefined FUN_146dc3349(void)

void FUN_146dc3349(longlong param_1,longlong *param_2,double param_3,int param_4,int param_5)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  float fVar11;
  undefined1 auStack_148 [32];
  float local_128;
  float local_120;
  undefined1 local_118;
  char local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_e9;
  longlong local_e8;
  longlong *local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  iVar10 = param_5 - param_4;
  local_e0 = param_2;
  if (iVar10 != 0 && param_4 <= param_5) {
    lVar8 = (longlong)param_4;
    lVar9 = lVar8 * 0x4b0;
    local_e8 = param_1;
    do {
      uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + lVar8 * 4);
      if (param_3 <= 9.99999993922529e-09) {
        local_a8 = 0.0;
        local_b8 = 0.0;
        dStack_b0 = 0.0;
        local_c8 = 0.0;
        local_d8 = 0.0;
        dStack_d0 = 0.0;
        local_108 = 0;
        uStack_100 = 0;
        local_110 = '\0';
        local_118 = 0;
        local_120 = 0.0;
        local_128 = 0.0;
        FUN_146de9cf4(*(undefined8 *)(param_1 + 0x10),uVar2,&local_d8,&local_b8);
      }
      else {
        lVar3 = *local_e0;
        local_a8 = -*(double *)(lVar3 + 0x340 + lVar9) / param_3;
        dStack_b0 = -*(double *)(lVar3 + 0x338 + lVar9) / param_3;
        local_b8 = -*(double *)(lVar3 + 0x330 + lVar9) / param_3;
        local_c8 = -*(double *)(lVar3 + 0x358 + lVar9) / param_3;
        dStack_d0 = -*(double *)(lVar3 + 0x350 + lVar9) / param_3;
        local_d8 = -*(double *)(lVar3 + 0x348 + lVar9) / param_3;
        uVar4 = *(undefined8 *)(lVar3 + lVar9);
        uVar5 = *(undefined8 *)(lVar3 + 0x18 + lVar9);
        uVar7 = *(undefined1 *)(lVar3 + 0x4a0 + lVar9);
        cVar1 = *(char *)(lVar3 + 0x4a1 + lVar9);
        fVar11 = 0.0;
        fVar6 = 0.0;
        if (cVar1 == '\x01') {
          fVar11 = (float)*(double *)(lVar3 + 0x360 + lVar9);
          if (fVar11 < 0.0) {
            local_e9 = uVar7;
            fVar11 = sqrtf(fVar11);
            uVar7 = local_e9;
          }
          else {
            fVar11 = SQRT(fVar11);
          }
          fVar6 = (float)*(double *)(lVar3 + 0x368 + lVar9);
        }
        local_120 = fVar6;
        local_128 = fVar11;
        local_118 = uVar7;
        param_1 = local_e8;
        local_110 = cVar1;
        local_108 = uVar4;
        uStack_100 = uVar5;
        FUN_146de9cf4(*(undefined8 *)(local_e8 + 0x10),uVar2,&local_b8,&local_d8);
        *(undefined8 *)(lVar3 + lVar9) = 0;
        *(undefined8 *)(lVar3 + 0x18 + lVar9) = 0;
      }
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 0x4b0;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  if ((local_a0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dc360c FUN_146dc360c body=475 status=ok
// SIG undefined FUN_146dc360c(void)

void FUN_146dc360c(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  char param_5)

{
  char cVar1;
  double dVar2;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (0.0 < *(double *)(param_1 + 0x228)) {
    *(undefined8 *)(param_1 + 1000) = 0x3ff0000000000000;
    local_68 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    local_98 = 0;
    uStack_90 = 0;
    if (*(char *)(param_3 + 0x43) == '\x01') {
      local_a8 = &local_98;
      FUN_146dc73e8(param_1,param_3,param_4,&local_78);
      local_a8 = &local_98;
      FUN_146dc6ac8(param_1,param_3,param_4,&local_78);
    }
    else {
      local_a8 = &local_98;
      FUN_146dc6ac8(param_1,param_3,param_4,&local_78);
      local_a8 = &local_98;
      FUN_146dc73e8(param_1,param_3,param_4,&local_78);
    }
    if ((((param_5 != '\0') && (*(int *)(param_4 + 0xfc) == 2)) && (*(int *)(param_4 + 0x100) == 2))
       && (*(int *)(param_4 + 0x104) == 2)) {
      dVar2 = (double)FUN_146deccbc(param_3,param_4);
      cVar1 = FUN_146dec9ec(param_3,param_4);
      if (((0.0 < dVar2) && (cVar1 == '\0')) && ((*(byte *)(param_4 + 0xf9) & 1) != 0)) {
        FUN_146dc8514(param_1,param_4,dVar2,&local_78);
      }
      if (0.0 < DAT_14c75f1a0) {
        local_a8 = &local_98;
        FUN_146dc8652(param_1,param_2,(double)DAT_14c75f1a0,&local_78);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dc37e8 FUN_146dc37e8 body=2359 status=ok
// SIG undefined FUN_146dc37e8(void)

void FUN_146dc37e8(undefined8 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float *pfVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  ulonglong uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auStack_138 [32];
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  dVar19 = (double)param_1[0xc];
  pfVar8 = (float *)*param_1;
  dVar22 = *(double *)(pfVar8 + 0x2c);
  dVar28 = *(double *)(pfVar8 + 0x28);
  dVar5 = *(double *)(pfVar8 + 0x2a);
  dVar23 = (double)param_1[0xb];
  dVar6 = (double)param_1[10];
  dVar29 = dVar5 * dVar19 - dVar23 * dVar22;
  dVar29 = dVar29 + dVar29;
  dVar21 = *(double *)(pfVar8 + 0x2e);
  dVar27 = dVar28 * dVar23 - dVar6 * dVar5;
  dVar27 = dVar27 + dVar27;
  dVar24 = dVar22 * dVar6 - dVar19 * dVar28;
  dVar24 = dVar24 + dVar24;
  dVar7 = *(double *)(pfVar8 + 0x42);
  dVar20 = *(double *)(pfVar8 + 0x40);
  lVar9 = param_1[3];
  param_1[0x2c] =
       (dVar5 * dVar27 - dVar24 * dVar22) + dVar29 * dVar21 + dVar6 + *(double *)(pfVar8 + 0x3e);
  param_1[0x2d] = (dVar22 * dVar29 - dVar27 * dVar28) + dVar21 * dVar24 + dVar23 + dVar20;
  param_1[0x2e] = (dVar28 * dVar24 - dVar29 * dVar5) + dVar21 * dVar27 + dVar19 + dVar7;
  dVar19 = (double)param_1[0x18];
  dVar22 = *(double *)(lVar9 + 0xb0);
  dVar28 = *(double *)(lVar9 + 0xa0);
  dVar5 = *(double *)(lVar9 + 0xa8);
  dVar23 = (double)param_1[0x17];
  dVar6 = (double)param_1[0x16];
  dVar29 = dVar5 * dVar19 - dVar23 * dVar22;
  dVar29 = dVar29 + dVar29;
  dVar21 = *(double *)(lVar9 + 0xb8);
  dVar27 = dVar28 * dVar23 - dVar6 * dVar5;
  dVar27 = dVar27 + dVar27;
  dVar24 = dVar22 * dVar6 - dVar19 * dVar28;
  dVar24 = dVar24 + dVar24;
  dVar7 = *(double *)(lVar9 + 0x108);
  dVar20 = *(double *)(lVar9 + 0x100);
  param_1[0x2f] =
       (dVar5 * dVar27 - dVar24 * dVar22) + dVar29 * dVar21 + dVar6 + *(double *)(lVar9 + 0xf8);
  param_1[0x30] = (dVar22 * dVar29 - dVar27 * dVar28) + dVar21 * dVar24 + dVar23 + dVar20;
  param_1[0x31] = (dVar28 * dVar24 - dVar29 * dVar5) + dVar21 * dVar27 + dVar19 + dVar7;
  dVar29 = (double)param_1[6];
  dVar14 = (double)param_1[7];
  dVar15 = (double)param_1[8];
  dVar16 = (double)param_1[9];
  dVar19 = *(double *)(pfVar8 + 0x2e);
  dVar22 = *(double *)(pfVar8 + 0x2e);
  dVar28 = *(double *)(pfVar8 + 0x28);
  dVar5 = *(double *)(pfVar8 + 0x28);
  dVar23 = *(double *)(pfVar8 + 0x2a);
  dVar6 = *(double *)(pfVar8 + 0x2a);
  dVar21 = *(double *)(pfVar8 + 0x2c);
  dVar7 = *(double *)(pfVar8 + 0x2c);
  dVar27 = dVar14 * dVar21 * -1.0 + dVar15 * dVar23 + dVar16 * dVar28 * 1.0 + dVar29 * dVar19;
  dVar24 = dVar29 * dVar7 * 1.0 + dVar16 * dVar6 + dVar15 * dVar5 * -1.0 + dVar14 * dVar22;
  dVar20 = dVar16 * dVar21 * 1.0 + ((dVar28 * dVar14 * 1.0 + dVar19 * dVar15) - dVar29 * dVar23);
  dVar29 = dVar15 * dVar7 * -1.0 + ((dVar5 * dVar29 * -1.0 + dVar22 * dVar16) - dVar14 * dVar6);
  auVar12._8_4_ = SUB84(dVar24,0);
  auVar12._0_8_ = dVar27;
  auVar12._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x32) = auVar12;
  auVar10._8_4_ = SUB84(dVar29,0);
  auVar10._0_8_ = dVar20;
  auVar10._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x34) = auVar10;
  dVar14 = (double)param_1[0x12];
  dVar15 = (double)param_1[0x13];
  dVar16 = (double)param_1[0x14];
  dVar17 = (double)param_1[0x15];
  dVar19 = *(double *)(lVar9 + 0xb8);
  dVar22 = *(double *)(lVar9 + 0xb8);
  dVar28 = *(double *)(lVar9 + 0xa0);
  dVar5 = *(double *)(lVar9 + 0xa0);
  dVar23 = *(double *)(lVar9 + 0xa8);
  dVar6 = *(double *)(lVar9 + 0xa8);
  dVar21 = *(double *)(lVar9 + 0xb0);
  dVar7 = *(double *)(lVar9 + 0xb0);
  dVar25 = dVar15 * dVar21 * -1.0 + dVar16 * dVar23 + dVar17 * dVar28 * 1.0 + dVar14 * dVar19;
  dVar26 = dVar14 * dVar7 * 1.0 + dVar17 * dVar6 + dVar16 * dVar5 * -1.0 + dVar15 * dVar22;
  dVar19 = dVar17 * dVar21 * 1.0 + ((dVar28 * dVar15 * 1.0 + dVar19 * dVar16) - dVar14 * dVar23);
  dVar22 = dVar16 * dVar7 * -1.0 + ((dVar5 * dVar14 * -1.0 + dVar22 * dVar17) - dVar15 * dVar6);
  uVar18 = -(ulonglong)
            (0.0 <= dVar29 * dVar22 + dVar20 * dVar19 + dVar27 * dVar25 + dVar24 * dVar26);
  dVar28 = (double)(~uVar18 & 0xbff0000000000000 |
                   (ulonglong)((uint)(uVar18 >> 0x20) & 0x3ff00000) << 0x20);
  param_1[0x36] = dVar25 * dVar28;
  param_1[0x37] = dVar26 * dVar28;
  param_1[0x38] = dVar19 * dVar28;
  param_1[0x39] = dVar28 * dVar22;
  fVar1 = pfVar8[2];
  fVar2 = pfVar8[1];
  fVar3 = *pfVar8;
  dVar19 = *(double *)(pfVar8 + 0x48);
  dVar22 = *(double *)(pfVar8 + 0x46);
  dVar28 = *(double *)(pfVar8 + 0x44);
  FUN_14013713e(pfVar8,&local_e8);
  pfVar8 = (float *)param_1[3];
  fVar4 = pfVar8[2];
  dVar5 = *(double *)(pfVar8 + 0x48);
  local_118 = (double)pfVar8[1] + *(double *)(pfVar8 + 0x46);
  local_110 = (double)*pfVar8 + *(double *)(pfVar8 + 0x44);
  FUN_14013713e(pfVar8,&local_108);
  dVar23 = (double)param_1[0xc];
  dVar6 = (double)param_1[0xb];
  dVar29 = local_e0 * dVar23 - dVar6 * local_d8;
  dVar21 = (double)param_1[10];
  dVar29 = dVar29 + dVar29;
  dVar7 = local_e8 * dVar6 - dVar21 * local_e0;
  dVar7 = dVar7 + dVar7;
  dVar20 = local_d8 * dVar21 - dVar23 * local_e8;
  dVar20 = dVar20 + dVar20;
  param_1[0x1e] =
       (local_e0 * dVar7 - dVar20 * local_d8) + dVar29 * local_d0 + dVar21 + (double)fVar3 + dVar28;
  param_1[0x1f] =
       (local_d8 * dVar29 - dVar7 * local_e8) + local_d0 * dVar20 + dVar6 + (double)fVar2 + dVar22;
  param_1[0x20] =
       (local_e8 * dVar20 - dVar29 * local_e0) + local_d0 * dVar7 + dVar23 + (double)fVar1 + dVar19;
  dVar19 = (double)param_1[0x18];
  dVar22 = (double)param_1[0x17];
  dVar28 = (double)param_1[0x16];
  dVar23 = local_100 * dVar19 - dVar22 * local_f8;
  dVar23 = dVar23 + dVar23;
  dVar6 = local_108 * dVar22 - dVar28 * local_100;
  dVar6 = dVar6 + dVar6;
  dVar21 = local_f8 * dVar28 - dVar19 * local_108;
  dVar21 = dVar21 + dVar21;
  param_1[0x21] = (local_100 * dVar6 - dVar21 * local_f8) + dVar23 * local_f0 + dVar28 + local_110;
  param_1[0x22] = (local_f8 * dVar23 - dVar6 * local_108) + local_f0 * dVar21 + dVar22 + local_118;
  param_1[0x23] =
       (local_108 * dVar21 - dVar23 * local_100) + local_f0 * dVar6 + dVar19 + (double)fVar4 + dVar5
  ;
  dVar22 = (double)param_1[6];
  dVar23 = (double)param_1[7];
  dVar6 = (double)param_1[8];
  dVar21 = (double)param_1[9];
  dVar28 = dVar23 * local_d8 * -1.0 + dVar6 * local_e0 + dVar21 * local_e8 * 1.0 + dVar22 * local_d0
  ;
  dVar5 = dVar22 * local_d8 * 1.0 + dVar21 * local_e0 + dVar6 * local_e8 * -1.0 + dVar23 * local_d0;
  dVar19 = dVar21 * local_d8 * 1.0 +
           ((local_e8 * dVar23 * 1.0 + local_d0 * dVar6) - dVar22 * local_e0);
  dVar22 = dVar6 * local_d8 * -1.0 +
           ((local_e8 * dVar22 * -1.0 + local_d0 * dVar21) - dVar23 * local_e0);
  auVar13._8_4_ = SUB84(dVar5,0);
  auVar13._0_8_ = dVar28;
  auVar13._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x24) = auVar13;
  auVar11._8_4_ = SUB84(dVar22,0);
  auVar11._0_8_ = dVar19;
  auVar11._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x26) = auVar11;
  dVar23 = (double)param_1[0x12];
  dVar6 = (double)param_1[0x13];
  dVar21 = (double)param_1[0x14];
  dVar7 = (double)param_1[0x15];
  dVar29 = dVar6 * local_f8 * -1.0 +
           dVar21 * local_100 + dVar7 * local_108 * 1.0 + dVar23 * local_f0;
  dVar27 = dVar23 * local_f8 * 1.0 +
           dVar7 * local_100 + dVar21 * local_108 * -1.0 + dVar6 * local_f0;
  dVar20 = dVar7 * local_f8 * 1.0 +
           ((local_108 * dVar6 * 1.0 + local_f0 * dVar21) - dVar23 * local_100);
  dVar23 = dVar21 * local_f8 * -1.0 +
           ((local_108 * dVar23 * -1.0 + local_f0 * dVar7) - dVar6 * local_100);
  uVar18 = -(ulonglong)(0.0 <= dVar22 * dVar23 + dVar19 * dVar20 + dVar28 * dVar29 + dVar5 * dVar27)
  ;
  dVar19 = (double)(~uVar18 & 0xbff0000000000000 |
                   (ulonglong)((uint)(uVar18 >> 0x20) & 0x3ff00000) << 0x20);
  param_1[0x28] = dVar29 * dVar19;
  param_1[0x29] = dVar27 * dVar19;
  param_1[0x2a] = dVar20 * dVar19;
  param_1[0x2b] = dVar19 * dVar23;
  if ((local_c0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dc4120 FUN_146dc4120 body=1366 status=ok
// SIG undefined FUN_146dc4120(void)

void FUN_146dc4120(undefined8 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  float *pfVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_e8 [32];
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (9.99999993922529e-09 < (double)param_1[0x44]) {
    pfVar6 = (float *)*param_1;
    fVar1 = pfVar6[2];
    fVar2 = pfVar6[1];
    fVar3 = *pfVar6;
    dVar11 = *(double *)(pfVar6 + 0x48);
    dVar12 = *(double *)(pfVar6 + 0x46);
    dVar9 = *(double *)(pfVar6 + 0x44);
    FUN_14013713e(pfVar6,&local_c8);
    dVar10 = (double)param_1[0xc];
    dVar4 = (double)param_1[0xb];
    dVar5 = (double)param_1[10];
    dVar7 = local_c0 * dVar10 - dVar4 * local_b8;
    dVar7 = dVar7 + dVar7;
    dVar8 = local_c8 * dVar4 - dVar5 * local_c0;
    dVar8 = dVar8 + dVar8;
    dVar13 = local_b8 * dVar5 - dVar10 * local_c8;
    dVar13 = dVar13 + dVar13;
    param_1[0x1e] =
         (local_c0 * dVar8 - dVar13 * local_b8) + dVar7 * local_b0 + dVar5 + (double)fVar3 + dVar9;
    param_1[0x1f] =
         (local_b8 * dVar7 - dVar8 * local_c8) + local_b0 * dVar13 + dVar4 + (double)fVar2 + dVar12;
    param_1[0x20] =
         (local_c8 * dVar13 - dVar7 * local_c0) + local_b0 * dVar8 + dVar10 + (double)fVar1 + dVar11
    ;
    dVar11 = (double)param_1[6];
    dVar12 = (double)param_1[7];
    dVar9 = (double)param_1[8];
    dVar10 = (double)param_1[9];
    param_1[0x24] =
         dVar12 * local_b8 * -1.0 + dVar9 * local_c0 + dVar10 * local_c8 * 1.0 + dVar11 * local_b0;
    param_1[0x25] =
         dVar11 * local_b8 * 1.0 + dVar10 * local_c0 + dVar9 * local_c8 * -1.0 + dVar12 * local_b0;
    param_1[0x26] =
         dVar10 * local_b8 * 1.0 +
         ((local_c8 * dVar12 * 1.0 + local_b0 * dVar9) - dVar11 * local_c0);
    param_1[0x27] =
         dVar9 * local_b8 * -1.0 +
         ((local_c8 * dVar11 * -1.0 + local_b0 * dVar10) - dVar12 * local_c0);
  }
  if ((double)param_1[0x45] <= 9.99999993922529e-09) {
    dVar11 = (double)param_1[0x28];
    dVar12 = (double)param_1[0x29];
    dVar9 = (double)param_1[0x2a];
    dVar10 = (double)param_1[0x2b];
  }
  else {
    pfVar6 = (float *)param_1[3];
    fVar1 = pfVar6[2];
    fVar2 = pfVar6[1];
    fVar3 = *pfVar6;
    dVar11 = *(double *)(pfVar6 + 0x48);
    dVar12 = *(double *)(pfVar6 + 0x46);
    dVar9 = *(double *)(pfVar6 + 0x44);
    FUN_14013713e(pfVar6,&local_c8);
    dVar10 = (double)param_1[0x18];
    dVar4 = (double)param_1[0x17];
    dVar5 = (double)param_1[0x16];
    dVar7 = local_c0 * dVar10 - dVar4 * local_b8;
    dVar7 = dVar7 + dVar7;
    dVar8 = local_c8 * dVar4 - dVar5 * local_c0;
    dVar8 = dVar8 + dVar8;
    dVar13 = local_b8 * dVar5 - dVar10 * local_c8;
    dVar13 = dVar13 + dVar13;
    param_1[0x21] =
         (local_c0 * dVar8 - dVar13 * local_b8) + dVar7 * local_b0 + dVar5 + (double)fVar3 + dVar9;
    param_1[0x22] =
         (local_b8 * dVar7 - dVar8 * local_c8) + local_b0 * dVar13 + dVar4 + (double)fVar2 + dVar12;
    param_1[0x23] =
         (local_c8 * dVar13 - dVar7 * local_c0) + local_b0 * dVar8 + dVar10 + (double)fVar1 + dVar11
    ;
    dVar10 = (double)param_1[0x12];
    dVar4 = (double)param_1[0x13];
    dVar5 = (double)param_1[0x14];
    dVar7 = (double)param_1[0x15];
    dVar11 = dVar4 * local_b8 * -1.0 + dVar5 * local_c0 + dVar7 * local_c8 * 1.0 + dVar10 * local_b0
    ;
    dVar12 = dVar10 * local_b8 * 1.0 + dVar7 * local_c0 + dVar5 * local_c8 * -1.0 + dVar4 * local_b0
    ;
    dVar9 = dVar7 * local_b8 * 1.0 +
            ((local_c8 * dVar4 * 1.0 + local_b0 * dVar5) - dVar10 * local_c0);
    dVar10 = dVar5 * local_b8 * -1.0 +
             ((local_c8 * dVar10 * -1.0 + local_b0 * dVar7) - dVar4 * local_c0);
  }
  dVar4 = (double)(&DAT_149931160)
                  [0.0 <= (double)param_1[0x27] * dVar10 +
                          (double)param_1[0x26] * dVar9 +
                          (double)param_1[0x24] * dVar11 + (double)param_1[0x25] * dVar12];
  param_1[0x28] = dVar11 * dVar4;
  param_1[0x29] = dVar12 * dVar4;
  param_1[0x2a] = dVar9 * dVar4;
  param_1[0x2b] = dVar10 * dVar4;
  if ((local_a0 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dc4678 FUN_146dc4678 body=870 status=ok
// SIG undefined FUN_146dc4678(void)

void FUN_146dc4678(longlong param_1,uint param_2)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float *pfVar11;
  double dVar12;
  double dVar13;
  longlong lVar14;
  ulonglong uVar15;
  double dVar16;
  undefined1 auStack_f8 [32];
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar15 = (ulonglong)param_2;
  pfVar11 = *(float **)(param_1 + uVar15 * 0x18);
  fVar2 = pfVar11[2];
  fVar3 = pfVar11[1];
  fVar4 = *pfVar11;
  dVar5 = *(double *)(pfVar11 + 0x48);
  dVar6 = *(double *)(pfVar11 + 0x46);
  dVar7 = *(double *)(pfVar11 + 0x44);
  FUN_14013713e(pfVar11,&local_d8);
  lVar14 = uVar15 * 0x60;
  dVar8 = *(double *)(param_1 + 0x60 + lVar14);
  dVar9 = *(double *)(param_1 + 0x50 + lVar14);
  dVar10 = *(double *)(param_1 + 0x58 + lVar14);
  dVar12 = local_d0 * dVar8 - dVar10 * local_c8;
  dVar12 = dVar12 + dVar12;
  dVar13 = local_d8 * dVar10 - dVar9 * local_d0;
  dVar13 = dVar13 + dVar13;
  dVar16 = local_c8 * dVar9 - dVar8 * local_d8;
  dVar16 = dVar16 + dVar16;
  *(double *)(param_1 + 0xf0 + uVar15 * 0x18) =
       (local_d0 * dVar13 - dVar16 * local_c8) + dVar12 * local_c0 + dVar9 + (double)fVar4 + dVar7;
  *(double *)(param_1 + 0xf8 + uVar15 * 0x18) =
       (local_c8 * dVar12 - dVar13 * local_d8) + local_c0 * dVar16 + dVar10 + (double)fVar3 + dVar6;
  *(double *)(param_1 + 0x100 + uVar15 * 0x18) =
       (local_d8 * dVar16 - dVar12 * local_d0) + local_c0 * dVar13 + dVar8 + (double)fVar2 + dVar5;
  pdVar1 = (double *)(param_1 + 0x30 + lVar14);
  dVar5 = *pdVar1;
  dVar6 = pdVar1[1];
  pdVar1 = (double *)(param_1 + 0x40 + lVar14);
  dVar7 = *pdVar1;
  dVar8 = pdVar1[1];
  pdVar1 = (double *)(param_1 + 0x120 + uVar15 * 0x20);
  *pdVar1 = dVar6 * local_c8 * -1.0 + dVar7 * local_d0 + dVar8 * local_d8 * 1.0 + dVar5 * local_c0;
  pdVar1[1] = dVar5 * local_c8 * 1.0 + dVar8 * local_d0 + dVar7 * local_d8 * -1.0 + dVar6 * local_c0
  ;
  pdVar1 = (double *)(param_1 + 0x130 + uVar15 * 0x20);
  *pdVar1 = dVar8 * local_c8 * 1.0 +
            ((local_d8 * dVar6 * 1.0 + local_c0 * dVar7) - dVar5 * local_d0);
  pdVar1[1] = dVar7 * local_c8 * -1.0 +
              ((local_d8 * dVar5 * -1.0 + local_c0 * dVar8) - dVar6 * local_d0);
  uVar15 = -(ulonglong)
            (0.0 <= *(double *)(param_1 + 0x138) * *(double *)(param_1 + 0x158) +
                    *(double *)(param_1 + 0x130) * *(double *)(param_1 + 0x150) +
                    *(double *)(param_1 + 0x120) * *(double *)(param_1 + 0x140) +
                    *(double *)(param_1 + 0x128) * *(double *)(param_1 + 0x148));
  dVar5 = (double)(~uVar15 & 0xbff0000000000000 | uVar15 & 0x3ff0000000000000);
  *(double *)(param_1 + 0x140) = *(double *)(param_1 + 0x140) * dVar5;
  *(double *)(param_1 + 0x148) = *(double *)(param_1 + 0x148) * dVar5;
  *(double *)(param_1 + 0x150) = *(double *)(param_1 + 0x150) * dVar5;
  *(double *)(param_1 + 0x158) = dVar5 * *(double *)(param_1 + 0x158);
  if ((local_b0 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dc49e0 FUN_146dc49e0 body=965 status=ok
// SIG undefined FUN_146dc49e0(void)

void FUN_146dc49e0(longlong *param_1,double param_2,longlong param_3,longlong param_4,
                  longlong *param_5,longlong *param_6)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  double dVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar6 = param_1 + 6;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *plVar6 = *param_5;
    param_5 = param_5 + 1;
    plVar6 = plVar6 + 1;
  }
  plVar6 = param_1 + 0x12;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *plVar6 = *param_6;
    param_6 = param_6 + 1;
    plVar6 = plVar6 + 1;
  }
  fVar7 = (float)*(double *)(param_4 + 0xf0);
  *(float *)(param_1 + 1) = fVar7;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  fVar8 = (float)*(double *)(param_4 + 0xf0);
  *(float *)((longlong)param_1 + 0xc) = fVar8;
  *(undefined1 **)((longlong)param_1 + 0x24) = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 2) = 0x3f800000;
  param_1[0x3a] = 0x3ff0000000000000;
  param_1[0x3b] = 0x3ff0000000000000;
  lVar5 = *param_1;
  lVar3 = param_1[3];
  param_1[0x3c] = (longlong)(double)(*(float *)(lVar5 + 0x134) * fVar7);
  param_1[0x3d] = (longlong)(double)*(float *)(lVar3 + 0x134);
  fVar1 = *(float *)(lVar5 + 300);
  fVar2 = *(float *)(lVar5 + 0x130);
  param_1[0x3e] = (longlong)(double)(*(float *)(lVar5 + 0x128) * fVar8);
  param_1[0x3f] = (longlong)(double)(fVar1 * fVar8);
  param_1[0x40] = (longlong)(double)(fVar2 * fVar8);
  fVar1 = *(float *)(lVar3 + 0x130);
  fVar2 = *(float *)(lVar3 + 300);
  param_1[0x41] = (longlong)(double)*(float *)(lVar3 + 0x128);
  param_1[0x42] = (longlong)(double)fVar2;
  param_1[0x43] = (longlong)(double)fVar1;
  if (*(char *)(param_4 + 0xfb) == '\x01') {
    local_a8 = param_1 + 0x3c;
    local_a0 = param_1 + 0x3d;
    local_98 = param_1 + 0x3e;
    local_48 = (double)*(float *)(lVar3 + 0x130);
    local_50 = (double)*(float *)(lVar3 + 300);
    local_58 = (double)*(float *)(lVar3 + 0x128);
    local_b8 = *(undefined4 *)(param_3 + 0x18);
    uStack_b4 = *(undefined4 *)(param_3 + 0x1c);
    uStack_b0 = *(undefined4 *)(param_3 + 0x20);
    uStack_ac = *(undefined4 *)(param_3 + 0x24);
    local_60 = (double)(fVar8 * *(float *)(lVar5 + 0x130));
    local_68 = (double)(*(float *)(lVar5 + 300) * fVar8);
    local_70 = (double)(*(float *)(lVar5 + 0x128) * fVar8);
    local_78 = (double)*(float *)(lVar3 + 0x134);
    local_90 = param_1 + 0x41;
    local_80 = (double)(fVar7 * *(float *)(lVar5 + 0x134));
    FUN_146decf72();
  }
  FUN_146dc4da6(param_1);
  FUN_146dc4ee6(param_1);
  param_2 = param_2 * 3600.0 * param_2;
  dVar4 = 1.0;
  if (param_2 <= 1.0) {
    dVar4 = param_2;
  }
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7e] = (longlong)(*(double *)(param_3 + 8) * dVar4);
  param_1[0x7f] = (longlong)(dVar4 * *(double *)(param_3 + 0x10));
  param_1[0x7d] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x94) = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  FUN_146dc37e8(param_1);
  if ((*(double *)(param_4 + 0x178) != 0.0) || (NAN(*(double *)(param_4 + 0x178)))) {
    FUN_146dc5026(param_1,param_4,param_1 + 0x8e);
  }
  if ((*(double *)(param_4 + 0x180) == 0.0) && (!NAN(*(double *)(param_4 + 0x180)))) {
    if ((*(double *)(param_4 + 0x188) == 0.0) && (!NAN(*(double *)(param_4 + 0x188))))
    goto LAB_146dc4d4a;
  }
  FUN_146dc5208(param_1,param_3,param_4,param_1 + 0x91);
LAB_146dc4d4a:
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


