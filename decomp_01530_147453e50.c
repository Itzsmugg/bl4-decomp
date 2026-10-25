// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147453e50 FUN_147453e50 body=3398 status=ok
// SIG undefined FUN_147453e50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_147453e50(longlong param_1,double *param_2,double *param_3,longlong param_4,ulonglong *param_5)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  double dVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  double *pdVar9;
  undefined8 uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  bool bVar18;
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
  undefined1 auVar30 [16];
  double dVar32;
  undefined1 auVar31 [16];
  undefined1 auStack_2c8 [40];
  longlong local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  undefined1 local_218 [16];
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  int local_1b0;
  uint uStack_1ac;
  ulonglong *local_1a8;
  double dStack_1a0;
  double local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  double local_188;
  int *local_170;
  longlong *local_168;
  undefined1 local_15c [4];
  longlong *local_158;
  undefined8 uStack_150;
  double local_148;
  undefined8 local_140;
  double dStack_138;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double dStack_108;
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  cVar4 = FUN_144729dda(param_1 + 0x28);
  if (cVar4 != '\0') {
    local_2a0 = param_4;
    if (*(char *)(param_3 + 4) == '\0') {
      uVar17 = (longlong)*(int *)(param_1 + 0x58) - (longlong)*(int *)(param_1 + 0x84);
      uVar13 = (uint)uVar17;
      if ((uint)(*(int *)(param_4 + 8) - *(int *)(param_4 + 0x34)) < uVar13) {
        if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456acd4b(uVar17);
        }
        FUN_14745a016(param_4,uVar17 & 0xffffffff);
        iVar5 = 1;
        if (3 < uVar13) {
          uVar13 = (uVar13 | 1) + 0xe;
          iVar5 = 0x1f;
          if (uVar13 != 0) {
            for (; uVar13 >> iVar5 == 0; iVar5 = iVar5 + -1) {
            }
          }
          iVar5 = 1 << ((byte)iVar5 & 0x1f);
        }
        if ((*(int *)(param_4 + 0x48) == 0) || (*(int *)(param_4 + 0x48) < iVar5)) {
          *(int *)(param_4 + 0x48) = iVar5;
          FUN_140c0119a(param_4);
        }
      }
      plVar1 = (longlong *)(param_1 + 0x50);
      dVar21 = (double)(param_1 + 0x60);
      local_1a8 = (ulonglong *)&DAT_100000000;
      local_198 = 2.12199579047121e-314;
      uStack_190 = 0;
      dStack_1a0 = dVar21;
      if (*(int *)(param_1 + 0x78) == 0) {
        iVar5 = 0;
      }
      else {
        FUN_1449c0562(&local_1a8);
        iVar5 = *(int *)(param_1 + 0x78);
      }
      lVar8 = local_2a0;
      dStack_138 = (double)CONCAT44(uStack_18c,uStack_190);
      local_140 = local_198;
      dVar20 = local_140;
      uStack_150 = local_1a8;
      local_148 = dStack_1a0;
      local_140._4_4_ = (int)((ulonglong)local_198 >> 0x20);
      local_158 = plVar1;
      if ((local_140._4_4_ == iVar5) && (dStack_1a0 == dVar21)) goto LAB_1474549a4;
      uVar16 = 0;
      uVar17 = 0;
      iVar6 = local_140._4_4_;
      local_140 = dVar20;
      do {
        local_1a8 = (ulonglong *)(*local_158 + (longlong)iVar6 * 0x18);
        uVar12 = *local_1a8;
        uVar15 = uVar12 >> 0x20;
        iVar11 = (int)(uVar12 >> 0x20);
        uVar13 = iVar11 + 1;
        uVar7 = (int)uVar12 + 1;
        if ((int)uVar17 < (int)uVar12) {
          uVar12 = uVar17;
        }
        uVar14 = (uint)(uVar17 >> 0x20);
        if ((int)uVar14 < iVar11) {
          uVar15 = (ulonglong)uVar14;
        }
        uVar17 = uVar15 << 0x20 | uVar12 & 0xffffffff;
        uVar12 = (ulonglong)uVar7;
        if ((int)uVar7 <= (int)uVar16) {
          uVar12 = uVar16 & 0xffffffff;
        }
        uVar15 = uVar16 >> 0x20;
        if ((int)(uVar16 >> 0x20) < (int)uVar13) {
          uVar15 = (ulonglong)uVar13;
        }
        uVar16 = uVar15 << 0x20 | uVar12;
        dStack_1a0 = (double)(*local_158 + (longlong)iVar6 * 0x18 + 8);
        FUN_140cb7e30(lVar8,&local_170,&local_1a8);
        local_140 = (double)CONCAT44(local_140._4_4_,(uint)local_140 & ~uStack_150._4_4_);
        FUN_1449c0562(&uStack_150);
        iVar6 = local_140._4_4_;
      } while (local_158 != plVar1 || (local_148 != dVar21 || local_140._4_4_ != iVar5));
    }
    else {
      lVar8 = FUN_14479d2ce(param_1 + 0x28);
      pdVar9 = (double *)&DAT_14c846480;
      if (*(longlong *)(lVar8 + 0x1c8) != 0) {
        pdVar9 = (double *)(*(longlong *)(lVar8 + 0x1c8) + 0x240);
      }
      local_1c8 = param_3[1];
      uStack_1c0 = 0;
      local_278 = param_2[8];
      dStack_270 = param_2[9];
      dVar3 = param_2[10] * 0.0;
      dVar19 = *param_3 * local_278;
      dVar22 = local_1c8 * dStack_270;
      dVar21 = param_2[3];
      dVar20 = param_2[3];
      local_1f8 = *param_2;
      local_258 = param_2[1];
      dStack_250 = param_2[2];
      dStack_230 = param_2[3];
      local_288 = param_2[4];
      dStack_280 = param_2[5];
      local_228 = param_2[6];
      dStack_220 = param_2[7];
      dVar24 = dVar22 * local_1f8 - dVar19 * local_258;
      dVar25 = dVar3 * local_258 - dVar22 * dStack_250;
      local_298 = local_1f8 * dVar3;
      dStack_290 = dStack_230 * param_2[0xb] * 0.0;
      dVar26 = dVar19 * dStack_250 - local_298;
      dVar25 = dVar25 + dVar25;
      dVar26 = dVar26 + dVar26;
      dVar24 = dVar24 + dVar24;
      local_248 = *pdVar9;
      dStack_240 = pdVar9[1];
      local_1e8 = pdVar9[4];
      dStack_1e0 = pdVar9[5];
      dVar28 = pdVar9[6];
      dVar23 = ((dVar24 * local_258 - dVar26 * dStack_250) + dVar21 * dVar25 + dVar19 + local_288) -
               local_1e8;
      dVar29 = ((dStack_250 * dVar25 - dVar24 * local_1f8) + dVar20 * dVar26 + dVar22 + dStack_280)
               - dStack_1e0;
      dVar22 = (dVar21 * dVar24 + dVar3 + (dVar26 * local_1f8 - dVar25 * local_258) + local_228) -
               dVar28;
      local_208 = -local_248;
      dStack_200 = -dStack_240;
      dVar25 = pdVar9[2] * -1.0;
      dVar26 = pdVar9[3] * 1.0;
      dVar24 = dVar29 * local_208 - dStack_200 * dVar23;
      dVar32 = dVar22 * dStack_200 - dVar25 * dVar29;
      dVar27 = dVar23 * dVar25 - dVar22 * local_208;
      dVar32 = dVar32 + dVar32;
      dVar27 = dVar27 + dVar27;
      dVar24 = dVar24 + dVar24;
      auVar31 = divpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(pdVar9 + 10));
      auVar2 = *(undefined1 (*) [16])(pdVar9 + 8);
      auVar30 = divpd(_DAT_149934d80,auVar2);
      local_110 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar30._0_8_);
      dVar19 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar30._8_8_);
      local_218._8_4_ = SUB84(dVar19,0);
      local_218._0_8_ = local_110;
      local_218._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
      local_100 = (double)(-(ulonglong)
                            (9.99999993922529e-09 <
                            ABS(SUB168(*(undefined1 (*) [16])(pdVar9 + 10),0))) & auVar31._0_8_);
      local_158 = (longlong *)
                  (((dVar24 * dStack_200 - dVar27 * dVar25) + dVar26 * dVar32 + dVar23) * local_110)
      ;
      uStack_150 = (ulonglong *)
                   ((local_248 * dVar24 + dVar25 * dVar32 + dVar26 * dVar27 + dVar29) * dVar19);
      local_148 = (dVar24 * dVar26 + dVar22 + (dVar27 * local_208 - dVar32 * dStack_200)) *
                  local_100;
      local_1d8 = param_3[3];
      uStack_1d0 = 0;
      dVar19 = *param_3 * local_278;
      dVar23 = local_1d8 * dStack_270;
      dVar29 = dVar23 * local_1f8 - local_258 * dVar19;
      dVar24 = dVar3 * local_258 - dStack_250 * dVar23;
      dVar27 = dVar19 * dStack_250 - local_298;
      dVar24 = dVar24 + dVar24;
      dVar27 = dVar27 + dVar27;
      dVar29 = dVar29 + dVar29;
      dVar22 = ((dVar29 * local_258 - dVar27 * dStack_250) + dVar21 * dVar24 + dVar19 + local_288) -
               local_1e8;
      dVar23 = ((dStack_250 * dVar24 - dVar29 * local_1f8) + dVar20 * dVar27 + dVar23 + dStack_280)
               - dStack_1e0;
      dVar19 = (dVar21 * dVar29 + dVar3 + (dVar27 * local_1f8 - dVar24 * local_258) + local_228) -
               dVar28;
      dVar29 = dVar23 * local_208 - dStack_200 * dVar22;
      dVar24 = dVar19 * dStack_200 - dVar25 * dVar23;
      dVar27 = dVar22 * dVar25 - dVar19 * local_208;
      dVar24 = dVar24 + dVar24;
      dVar27 = dVar27 + dVar27;
      dVar29 = dVar29 + dVar29;
      local_140 = ((dVar29 * dStack_200 - dVar27 * dVar25) + dVar26 * dVar24 + dVar22) * local_110;
      dStack_138 = (local_248 * dVar29 + dVar25 * dVar24 + dVar26 * dVar27 + dVar23) *
                   (double)local_218._8_8_;
      local_130 = (dVar29 * dVar26 + dVar19 + (dVar27 * local_208 - dVar24 * dStack_200)) *
                  local_100;
      dVar29 = param_3[2] * local_278;
      dVar24 = local_1c8 * dStack_270;
      dVar19 = dVar24 * local_1f8 - local_258 * dVar29;
      dVar22 = dVar3 * local_258 - dStack_250 * dVar24;
      dVar23 = dVar29 * dStack_250 - local_298;
      dVar22 = dVar22 + dVar22;
      dVar23 = dVar23 + dVar23;
      dVar19 = dVar19 + dVar19;
      dVar28 = (dVar21 * dVar19 + dVar3 + (dVar23 * local_1f8 - dVar22 * local_258) + local_228) -
               dVar28;
      local_268 = pdVar9[4];
      dStack_260 = pdVar9[5];
      dVar26 = ((dVar19 * local_258 - dVar23 * dStack_250) + dVar21 * dVar22 + dVar29 + local_288) -
               local_268;
      dVar24 = ((dStack_250 * dVar22 - dVar19 * local_1f8) + dVar20 * dVar23 + dVar24 + dStack_280)
               - dStack_260;
      dVar23 = pdVar9[2] * -1.0;
      dVar25 = pdVar9[3] * 1.0;
      dVar19 = dVar24 * local_208 - dStack_200 * dVar26;
      dVar22 = dVar28 * dStack_200 - dVar23 * dVar24;
      dVar29 = dVar26 * dVar23 - dVar28 * local_208;
      dVar22 = dVar22 + dVar22;
      dVar29 = dVar29 + dVar29;
      dVar19 = dVar19 + dVar19;
      local_128 = ((dVar19 * dStack_200 - dVar29 * dVar23) + dVar25 * dVar22 + dVar26) * local_110;
      dStack_120 = (local_248 * dVar19 + dVar23 * dVar22 + dVar25 * dVar29 + dVar24) *
                   (double)local_218._8_8_;
      local_118 = (dVar19 * dVar25 + dVar28 + (dVar29 * local_208 - dVar22 * dStack_200)) *
                  local_100;
      dVar19 = param_3[2] * local_278;
      dVar22 = local_1d8 * dStack_270;
      dVar29 = dVar22 * local_1f8 - local_258 * dVar19;
      dVar24 = dVar3 * local_258 - dStack_250 * dVar22;
      dVar28 = dVar19 * dStack_250 - local_298;
      dVar24 = dVar24 + dVar24;
      dVar28 = dVar28 + dVar28;
      dVar29 = dVar29 + dVar29;
      dVar26 = ((dVar29 * local_258 - dVar28 * dStack_250) + dVar21 * dVar24 + dVar19 + local_288) -
               local_268;
      dVar27 = ((dStack_250 * dVar24 - dVar29 * local_1f8) + dVar20 * dVar28 + dVar22 + dStack_280)
               - dStack_260;
      dVar21 = (dVar21 * dVar29 + dVar3 + (dVar28 * local_1f8 - dVar24 * local_258) + local_228) -
               pdVar9[6];
      dVar20 = dVar27 * local_208 - dStack_200 * dVar26;
      dVar19 = dVar21 * dStack_200 - dVar23 * dVar27;
      dVar22 = dVar26 * dVar23 - dVar21 * local_208;
      dVar19 = dVar19 + dVar19;
      dVar22 = dVar22 + dVar22;
      dVar20 = dVar20 + dVar20;
      local_110 = ((dVar20 * dStack_200 - dVar22 * dVar23) + dVar25 * dVar19 + dVar26) * local_110;
      dStack_108 = (local_248 * dVar20 + dVar23 * dVar19 + dVar25 * dVar22 + dVar27) *
                   (double)local_218._8_8_;
      local_100 = (dVar20 * dVar25 + dVar21 + (dVar22 * local_208 - dVar19 * dStack_200)) *
                  local_100;
      local_238 = dStack_250;
      dStack_1f0 = local_258;
      FUN_144b0bd4e(&local_1a8,&local_158,4);
      dVar21 = (double)*(int *)(param_1 + 0x40);
      uVar13 = (int)ROUND(dStack_1a0 / dVar21 + dStack_1a0 / dVar21 + -0.5) >> 1;
      iVar5 = (int)ROUND(local_188 / dVar21 + local_188 / dVar21 + -0.5) >> 1;
      local_278 = (double)CONCAT44(local_278._4_4_,iVar5);
      dVar20 = local_140;
      if (iVar5 < (int)uVar13) {
LAB_1474549a4:
        local_140 = dVar20;
        uVar17 = 0;
        uVar16 = 0;
      }
      else {
        iVar6 = (int)ROUND((double)local_1a8 / dVar21 + (double)local_1a8 / dVar21 + -0.5) >> 1;
        dVar21 = (double)CONCAT44(uStack_18c,uStack_190) / dVar21;
        iVar5 = (int)ROUND(dVar21 + dVar21 + -0.5) >> 1;
        local_298 = (double)CONCAT44(local_298._4_4_,iVar5);
        local_288 = (double)CONCAT44(local_288._4_4_,iVar6);
        if (iVar5 < iVar6) {
          iVar5 = iVar6;
        }
        uVar16 = 0;
        uVar17 = 0;
        do {
          iVar6 = local_288._0_4_;
          if (local_288._0_4_ <= local_298._0_4_) {
            do {
              local_1b0 = iVar6;
              uStack_1ac = uVar13;
              uVar7 = FUN_144a78877(iVar6,uVar13);
              if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
                lVar8 = *(longlong *)(param_1 + 0x90);
                if (*(longlong *)(param_1 + 0x90) == 0) {
                  lVar8 = param_1 + 0x88;
                }
                iVar11 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x98) - 1U & uVar7) * 4);
                if (iVar11 != -1) {
                  do {
                    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar11 * 0x18);
                    if (*plVar1 == CONCAT44(uVar13,iVar6)) {
                      if ((plVar1 != (longlong *)0x0) && (local_1b8 = plVar1[1], local_1b8 != 0)) {
                        uVar12 = CONCAT44(uStack_1ac,local_1b0);
                        if ((int)uVar17 < local_1b0) {
                          uVar12 = uVar17;
                        }
                        uVar14 = (uint)(uVar17 >> 0x20);
                        uVar7 = uStack_1ac;
                        if ((int)uVar14 < (int)uStack_1ac) {
                          uVar7 = uVar14;
                        }
                        uVar17 = (ulonglong)uVar7 << 0x20 | uVar12 & 0xffffffff;
                        uVar12 = (ulonglong)(local_1b0 + 1U);
                        if ((int)(local_1b0 + 1U) <= (int)uVar16) {
                          uVar12 = uVar16 & 0xffffffff;
                        }
                        uVar15 = uVar16 >> 0x20;
                        if ((int)(uVar16 >> 0x20) < (int)(uStack_1ac + 1)) {
                          uVar15 = (ulonglong)(uStack_1ac + 1);
                        }
                        uVar16 = uVar15 << 0x20 | uVar12;
                        local_170 = &local_1b0;
                        local_168 = &local_1b8;
                        FUN_140cb7e30(local_2a0,local_15c,&local_170);
                      }
                      break;
                    }
                    iVar11 = (int)plVar1[2];
                  } while (iVar11 != -1);
                }
              }
              bVar18 = iVar6 != iVar5;
              iVar6 = iVar6 + 1;
            } while (bVar18);
          }
          bVar18 = uVar13 != local_278._0_4_;
          uVar13 = uVar13 + 1;
        } while (bVar18);
      }
    }
    if (*(int *)(local_2a0 + 8) != *(int *)(local_2a0 + 0x34)) {
      *param_5 = uVar17;
      param_5[1] = uVar16;
      uVar10 = 1;
      goto LAB_1474549bd;
    }
  }
  uVar10 = 0;
LAB_1474549bd:
  if ((local_f0 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 147454b98 FUN_147454b98 body=70 status=ok
// SIG undefined FUN_147454b98(void)

void FUN_147454b98(void)

{
  undefined8 in_R9;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  uStack_10 = 0;
  local_28 = in_R9;
  FUN_143244f94();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147454be0 FUN_147454be0 body=165 status=ok
// SIG undefined FUN_147454be0(void)

undefined4
FUN_147454be0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined8 *)0x0;
  local_40 = 1;
  FUN_1401b309e(&local_48,1,0);
  *local_48 = param_4;
  local_58 = param_5;
  uVar1 = FUN_143244f94(param_1,param_2,param_3,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147454c86 thunk_FUN_143244f94 body=5 status=ok
// SIG undefined thunk_FUN_143244f94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong thunk_FUN_143244f94(longlong param_1,double *param_2,undefined1 (*param_3) [16],
                             longlong *param_4,longlong *param_5)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  byte bVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar23;
  longlong *plVar24;
  ulonglong uVar25;
  uint *puVar26;
  code **ppcVar27;
  undefined8 *puVar28;
  double *pdVar29;
  undefined8 *puVar30;
  double *pdVar31;
  ulonglong uVar32;
  double *pdVar33;
  longlong lVar34;
  int iVar35;
  double dVar36;
  double dVar38;
  undefined1 auVar37 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  double dVar52;
  undefined1 auStack_538 [32];
  code **ppcStack_518;
  undefined4 uStack_510;
  undefined4 uStack_508;
  undefined8 uStack_500;
  wchar_t *pwStack_4f8;
  undefined1 *puStack_4f0;
  undefined1 *puStack_4e8;
  code **ppcStack_4e0;
  undefined1 *puStack_4d8;
  code *pcStack_4d0;
  byte bStack_4c2;
  undefined1 uStack_4c1;
  int iStack_4c0;
  undefined4 uStack_4bc;
  double dStack_4b8;
  double dStack_4b0;
  double dStack_4a8;
  double dStack_4a0;
  undefined4 uStack_48c;
  longlong *plStack_488;
  ulonglong uStack_480;
  longlong *plStack_478;
  double *pdStack_470;
  undefined8 *puStack_468;
  ulonglong uStack_460;
  ulonglong uStack_458;
  longlong lStack_450;
  ulonglong uStack_448;
  longlong lStack_440;
  double *pdStack_438;
  code **ppcStack_430;
  double dStack_428;
  undefined8 uStack_420;
  double dStack_418;
  undefined8 uStack_410;
  double dStack_408;
  undefined8 uStack_400;
  double dStack_3f8;
  double dStack_3f0;
  double dStack_3e8;
  double dStack_3e0;
  double dStack_3d8;
  double dStack_3d0;
  undefined1 auStack_3c8 [16];
  longlong lStack_3b0;
  longlong lStack_3a8;
  undefined8 uStack_3a0;
  undefined1 auStack_390 [24];
  code *pcStack_378;
  undefined8 uStack_370;
  undefined1 auStack_368 [16];
  double dStack_358;
  double dStack_350;
  undefined8 uStack_348;
  double adStack_338 [4];
  double dStack_318;
  double dStack_310;
  double dStack_308;
  double dStack_2f8;
  double dStack_2f0;
  double dStack_2e8;
  double dStack_2e0;
  undefined1 auStack_2cc [4];
  double adStack_2c8 [16];
  double *pdStack_248;
  undefined8 uStack_240;
  double dStack_238;
  undefined8 uStack_230;
  double dStack_228;
  double dStack_220;
  double dStack_218;
  undefined8 uStack_210;
  double dStack_208;
  double dStack_200;
  double dStack_1f8;
  undefined8 uStack_1f0;
  double dStack_1e8;
  double dStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  longlong alStack_1c8 [2];
  uint auStack_1b8 [4];
  uint *puStack_1a8;
  int iStack_1a0;
  undefined8 uStack_19c;
  undefined4 uStack_194;
  longlong lStack_188;
  undefined4 uStack_180;
  code *pcStack_178;
  double dStack_170;
  double *pdStack_168;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double dStack_148;
  undefined8 uStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  undefined8 uStack_120;
  double dStack_118;
  double dStack_110;
  undefined1 auStack_108 [16];
  ulonglong uStack_f0;
  
  uStack_f0 = DAT_14c707940 ^ (ulonglong)auStack_538;
  lVar9 = (**(code **)(*(longlong *)(param_1 + 0x390) + 0x18))(param_1 + 0x390);
  if (param_5 == (longlong *)0x0 || lVar9 == 0) {
LAB_143245058:
    uVar23 = 0;
    goto LAB_14324505a;
  }
  iStack_4c0 = (int)param_4[1];
  uStack_4c1 = iStack_4c0 == 0;
  if (DAT_14cb0b9a0 == 0) {
    ppcStack_4e0 = &pcStack_178;
    pcStack_178 = FUN_1449e2820;
    pcStack_4d0 = FUN_14081d0ea;
    puStack_4d8 = &LAB_146408884;
    puStack_4e8 = &LAB_147d719e1;
    puStack_4f0 = &LAB_140fb41fe;
    pwStack_4f8 = L"Engine";
    uStack_500 = 0;
    uStack_508 = 0x10000000;
    uStack_510 = 8;
    ppcStack_518 = (code **)CONCAT44(ppcStack_518._4_4_,0x168);
    FUN_14081cfa3(L"/Script/Engine",L"TextureRenderTarget2D",&DAT_14cb0b9a0,&DAT_147d719e0);
  }
  if ((*(int *)(param_5[2] + 0x38) < *(int *)(DAT_14cb0b9a0 + 0x38)) ||
     (plVar24 = param_5,
     *(longlong *)(*(longlong *)(param_5[2] + 0x30) + (longlong)*(int *)(DAT_14cb0b9a0 + 0x38) * 8)
     != DAT_14cb0b9a0 + 0x30)) {
    plVar24 = (longlong *)0x0;
  }
  lVar10 = FUN_1458bbce6();
  if ((*(int *)(param_5[2] + 0x38) < *(int *)(lVar10 + 0x38)) ||
     (*(longlong *)(*(longlong *)(param_5[2] + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
      lVar10 + 0x30)) {
    if (plVar24 == (longlong *)0x0) goto LAB_143245058;
    uVar11 = (**(code **)(*plVar24 + 0x3b8))();
    bVar2 = true;
    plVar12 = (longlong *)0x0;
  }
  else {
    uVar11 = (**(code **)(*param_5 + 0x3b8))(param_5);
    bVar2 = false;
    plVar12 = param_5;
  }
  bVar16 = (byte)uVar11;
  if (iStack_4c0 == 0) {
    if (plVar24 == (longlong *)0x0) goto LAB_143245058;
    uVar23 = 0;
    if (0x28 < bVar16) goto LAB_14324505a;
    if ((0x16000000004U >> (uVar11 & 0x3f) & 1) == 0) {
      uVar23 = 0;
      uVar3 = 0;
      if ((uVar11 & 0xff) != 4) goto LAB_14324505a;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar23 = 0;
    if (0x28 < bVar16) goto LAB_14324505a;
    uVar23 = 0;
    if ((0x1600800000cU >> (uVar11 & 0x3f) & 1) == 0) goto LAB_14324505a;
    iVar6 = (int)param_4[1];
    if (1 < iVar6) {
      if ((plVar24 != (longlong *)0x0) &&
         (*(int *)(&DAT_14c87342c + ((uint)uVar11 & 0xff) * 0x30) < iVar6)) goto LAB_143245058;
      if (!bVar2) {
        uVar23 = 0;
        uVar3 = 0;
        if (*(int *)(&DAT_14c87342c + ((uint)uVar11 & 0xff) * 0x30) * (int)plVar12[0x29] < iVar6)
        goto LAB_14324505a;
        goto LAB_143245220;
      }
    }
    uVar3 = 0;
  }
LAB_143245220:
  uStack_48c = uVar3;
  pdVar33 = (double *)&DAT_14c846480;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    pdVar33 = (double *)(*(longlong *)(param_1 + 0x1c8) + 0x240);
  }
  pdVar31 = adStack_338;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *pdVar31 = *param_2;
    param_2 = param_2 + 1;
    pdVar31 = pdVar31 + 1;
  }
  uStack_348 = *(undefined8 *)param_3[2];
  auStack_368 = *param_3;
  dStack_358 = *(double *)param_3[1];
  dStack_350 = *(double *)(param_3[1] + 8);
  bStack_4c2 = bVar16;
  pdStack_470 = pdVar33;
  if ((param_3[2][0] != '\x01') ||
     ((((dVar39 = (*(double *)param_3[1] - *(double *)*param_3) * 0.5, dVar39 == 0.0 &&
        (!NAN(dVar39))) &&
       (dVar39 = (*(double *)(param_3[1] + 8) - *(double *)(*param_3 + 8)) * 0.5, dVar39 == 0.0)) &&
      (!NAN(dVar39))))) {
    pdVar31 = pdVar33;
    pdVar29 = adStack_338;
    for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
      *pdVar29 = *pdVar31;
      pdVar31 = pdVar31 + 1;
      pdVar29 = pdVar29 + 1;
    }
    FUN_1474538ac(lVar9,&pcStack_178);
    dVar43 = *pdVar33;
    dVar42 = dStack_160 - pdVar33[4];
    dVar44 = dStack_158 - pdVar33[5];
    dVar39 = dStack_150 - pdVar33[6];
    dVar40 = -dVar43;
    dVar41 = -pdVar33[1];
    dVar36 = pdVar33[2] * -1.0;
    dVar38 = pdVar33[3] * 1.0;
    dVar47 = dVar44 * dVar40 - dVar42 * dVar41;
    dVar50 = dVar39 * dVar41 - dVar44 * dVar36;
    dVar52 = dVar42 * dVar36 - dVar39 * dVar40;
    dVar50 = dVar50 + dVar50;
    dVar52 = dVar52 + dVar52;
    dVar47 = dVar47 + dVar47;
    auVar37 = *(undefined1 (*) [16])(pdVar33 + 8);
    auVar51 = divpd(_DAT_149934d80,auVar37);
    dVar48 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar37._0_8_)) & auVar51._0_8_);
    dVar39 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar37._8_8_)) & auVar51._8_8_);
    dStack_358 = ((dVar47 * dVar41 - dVar52 * dVar36) + dVar38 * dVar50 + dVar42) * dVar48;
    dStack_350 = (dVar47 * dVar43 + dVar36 * dVar50 + dVar38 * dVar52 + dVar44) * dVar39;
    dVar47 = (double)pcStack_178 - pdVar33[4];
    dVar50 = dStack_170 - pdVar33[5];
    dVar52 = (double)pdStack_168 - pdVar33[6];
    dVar42 = dVar50 * dVar40 - dVar41 * dVar47;
    dVar44 = dVar52 * dVar41 - dVar36 * dVar50;
    dVar40 = dVar47 * dVar36 - dVar52 * dVar40;
    dVar44 = dVar44 + dVar44;
    dVar40 = dVar40 + dVar40;
    dVar42 = dVar42 + dVar42;
    dVar39 = (dVar42 * dVar43 + dVar36 * dVar44 + dVar38 * dVar40 + dVar50) * dVar39;
    auStack_368._8_4_ = SUB84(dVar39,0);
    auStack_368._0_8_ = ((dVar42 * dVar41 - dVar40 * dVar36) + dVar38 * dVar44 + dVar47) * dVar48;
    auStack_368._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
    uStack_348 = CONCAT71(uStack_348._1_7_,1);
  }
  puStack_1a8 = (uint *)0x0;
  iStack_1a0 = 0;
  alStack_1c8[0] = 0;
  alStack_1c8[1] = 0;
  uStack_19c = 0xffffffff00000080;
  uStack_194 = 0;
  lStack_188 = 0;
  uStack_180 = 0;
  ppcStack_518 = &pcStack_378;
  pcStack_378 = (code *)0x0;
  uStack_370 = 0;
  pdVar33 = adStack_338;
  cVar4 = FUN_147453e50(lVar9,pdVar33,auStack_368);
  if (cVar4 != '\0') {
    FUN_143203394(auStack_390,DAT_14caa1e08 != 0,L"LandscapeRenderMergedTextureCapture",0);
    uVar21 = 1;
    if (DAT_14caa1e08 < 2) {
      DAT_14caa1e08 = 1;
    }
    DAT_14caa1e08 = DAT_14caa1e08 + -1;
    if (iStack_4c0 != 0) {
      uVar21 = *(uint *)(param_4 + 1);
    }
    lStack_3a8 = 0;
    uStack_3a0 = 0;
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar21);
    }
    if (uVar21 != 0) {
      FUN_14745948e(&lStack_3a8);
      dStack_4a8 = dStack_2f8;
      dStack_4a0 = dStack_2f0;
      dStack_4b8 = dStack_2e8;
      dStack_4b0 = dStack_2e0;
      dVar38 = (double)auStack_368._0_8_ * dStack_2f8;
      dVar40 = (double)auStack_368._8_8_ * dStack_2f0;
      dVar36 = dStack_2e8 * 0.0;
      dVar43 = dVar40 * adStack_338[0] - dVar38 * adStack_338[1];
      dVar41 = dVar36 * adStack_338[1] - dVar40 * adStack_338[2];
      dVar42 = dVar38 * adStack_338[2] - adStack_338[0] * dVar36;
      dVar39 = dStack_2e0 * 0.0 * adStack_338[3] - adStack_338[3] * dStack_2e0 * 0.0;
      dVar41 = dVar41 + dVar41;
      dVar42 = dVar42 + dVar42;
      dVar43 = dVar43 + dVar43;
      auVar37._8_8_ = dVar39 + dVar39;
      dVar39 = adStack_338[1] + adStack_338[1];
      dVar44 = adStack_338[2] + adStack_338[2];
      dVar50 = adStack_338[0] * (adStack_338[0] + adStack_338[0]);
      dVar47 = (adStack_338[0] + adStack_338[0]) * adStack_338[3];
      dStack_3e8 = (dVar43 * adStack_338[1] - dVar42 * adStack_338[2]) +
                   adStack_338[3] * dVar41 + dVar38 + dStack_318;
      dStack_3e0 = (adStack_338[2] * dVar41 - adStack_338[0] * dVar43) +
                   adStack_338[3] * dVar42 + dVar40 + dStack_310;
      auVar37._0_8_ =
           dVar43 * adStack_338[3] + dVar36 + (dVar42 * adStack_338[0] - dVar41 * adStack_338[1]) +
           dStack_308;
      uStack_448 = (ulonglong)uVar21;
      dStack_2f0 = (dStack_350 - (double)auStack_368._8_8_) * dStack_2f0;
      dStack_2f8 = (dStack_358 - (double)auStack_368._0_8_) * dStack_2f8;
      dStack_428 = (adStack_338[0] * dVar44 - dVar39 * adStack_338[3]) * dStack_2f8;
      pdStack_438 = (double *)
                    ((1.0 - (adStack_338[2] * dVar44 + adStack_338[1] * dVar39)) * dStack_2f8);
      dStack_3f0 = (1.0 - (adStack_338[2] * dVar44 + dVar50)) * dStack_2f0;
      dStack_418 = (1.0 - (dVar50 + adStack_338[1] * dVar39)) * dStack_2e8;
      ppcStack_430 = (code **)((dVar39 * adStack_338[0] + dVar44 * adStack_338[3]) * dStack_2f8);
      dStack_408 = (dVar44 * adStack_338[1] + dVar47) * dStack_2f0;
      dStack_3d8 = (adStack_338[0] * dVar44 + dVar39 * adStack_338[3]) * dStack_2e8;
      dStack_3f8 = (dVar39 * adStack_338[0] - dVar44 * adStack_338[3]) * dStack_2f0;
      dStack_3d0 = (dVar44 * adStack_338[1] - dVar47) * dStack_2e8;
      uStack_410 = 0;
      uStack_420 = 0;
      uStack_400 = 0;
      auStack_3c8 = blendpd(auVar37,_DAT_149935300,2);
      uVar11 = 0;
      plStack_488 = param_4;
      lStack_440 = param_1;
      do {
        if (iStack_4c0 == 0) {
          FUN_1446f470e(&lStack_3b0,L"Heightmap",1);
        }
        else {
          lStack_3b0 = *(longlong *)(*param_4 + uVar11 * 8);
        }
        lVar9 = (longlong)(int)uStack_3a0;
        uVar21 = (int)uStack_3a0 + 1;
        uStack_3a0 = CONCAT44(uStack_3a0._4_4_,uVar21);
        uStack_460 = uVar11;
        if (uStack_3a0._4_4_ < uVar21) {
          FUN_1474594f4(&lStack_3a8);
        }
        lVar10 = lStack_3a8;
        lVar9 = lVar9 * 0xf0;
        puStack_468 = (undefined8 *)(lStack_3a8 + lVar9);
        uVar11 = 0;
        memset(puStack_468,0,0xf0);
        iVar6 = iStack_1a0;
        *(undefined4 *)(lVar10 + 0x88 + lVar9) = 1;
        *(undefined1 *)(lVar10 + 0x8c + lVar9) = 1;
        puVar30 = (undefined8 *)(lVar10 + 0x90 + lVar9);
        *puVar30 = 0;
        puVar30[1] = 0;
        *(undefined8 *)(lVar10 + 0xa0 + lVar9) = 0;
        *(undefined8 *)(lVar10 + 0xc4 + lVar9) = 0xffffffff00000080;
        *(ulonglong *)(lVar10 + 0x80 + lVar9) =
             CONCAT44(*(undefined4 *)(param_1 + 0x840),*(undefined4 *)(param_1 + 0x840));
        *(undefined4 *)(lVar10 + 0x88 + lVar9) = *(undefined4 *)(param_1 + 0x844);
        *(undefined1 *)(lVar10 + 0x8c + lVar9) = uStack_4c1;
        *(char *)(lVar10 + 0x8d + lVar9) = (char)uStack_48c;
        *(longlong *)(lVar10 + 0x90 + lVar9) = lStack_3b0;
        if (iStack_1a0 == 0) {
          uVar23 = 1;
          iVar35 = 0;
          iVar17 = 0;
        }
        else {
          puVar14 = puStack_1a8;
          if (puStack_1a8 == (uint *)0x0) {
            puVar14 = auStack_1b8;
          }
          uVar21 = *puVar14;
          if (uVar21 == 0) {
            iVar17 = iStack_1a0 + 0x1e;
            if (-1 < iStack_1a0 + -1) {
              iVar17 = iStack_1a0 + -1;
            }
            uVar11 = 0;
            uVar23 = (ulonglong)(uint)(iVar17 >> 5);
            if (iVar17 >> 5 < 1) {
              uVar23 = uVar11;
            }
            iVar35 = 0;
            do {
              if (uVar23 == uVar11) goto LAB_143245a68;
              iVar35 = iVar35 + 0x20;
              uVar21 = puVar14[uVar11 + 1];
              uVar11 = uVar11 + 1;
            } while (uVar21 == 0);
          }
          else {
            uVar11 = 0;
            iVar35 = 0;
          }
          uVar23 = (ulonglong)(-uVar21 & uVar21);
          uVar32 = uVar23 * 2 + 1;
          lVar34 = 0x3f;
          if (uVar32 != 0) {
            for (; uVar32 >> lVar34 == 0; lVar34 = lVar34 + -1) {
            }
          }
          iVar17 = (iVar35 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
          if (iStack_1a0 <= iVar17) {
            iVar17 = iStack_1a0;
          }
        }
        if (iVar17 == iStack_1a0) {
LAB_143245a68:
          dStack_4a8 = 0.0;
          dStack_4b8 = 0.0;
        }
        else {
          lStack_450 = lVar10 + lVar9 + 0x98;
          uVar21 = 0xffffffff;
          dStack_4b8 = 0.0;
          dStack_4a8 = 0.0;
          iVar22 = iStack_1a0;
          do {
            adStack_2c8[0] = *(double *)(alStack_1c8[0] + (longlong)iVar17 * 0x18);
            lVar9 = *(longlong *)(alStack_1c8[0] + 8 + (longlong)iVar17 * 0x18);
            if (iStack_4c0 == 0) {
              plVar24 = (longlong *)(lVar9 + 0x728);
              pdVar33 = (double *)(lVar9 + 0x6c8);
              pdVar31 = (double *)(lVar9 + 0x6c0);
              uVar18 = 0xffffffff;
LAB_143245f55:
              plVar24 = (longlong *)*plVar24;
              if (plVar24 != (longlong *)0x0) {
                dVar39 = *pdVar33;
                dVar43 = *pdVar31;
                uStack_458 = (ulonglong)
                             (uint)((*(int *)(lVar9 + 0x62c) + 1) * *(int *)(lVar9 + 0x630));
                plVar12 = (longlong *)FUN_1447b4020(plVar24);
                uStack_4bc = 0;
                iVar17 = 0;
                uStack_480 = 0;
                plStack_478 = plVar12;
                if (plVar12 != (longlong *)0x0) {
                  uVar5 = (**(code **)(*plVar12 + 0x38))(plVar12);
                  uStack_480 = (ulonglong)
                               (uint)((int)ROUND(dVar39 * (double)uVar5 + dVar39 * (double)uVar5 +
                                                 -0.5) >> 1);
                  uVar5 = (**(code **)(*plVar12 + 0x30))(plVar12);
                  iVar17 = (int)ROUND(dVar43 * (double)uVar5 + dVar43 * (double)uVar5 + -0.5) >> 1;
                }
                lVar9 = plVar24[0x29];
                if (lVar9 != 0) {
                  if (*(code **)(*plVar24 + 0x330) == (code *)&LAB_14014d366) {
                    if (((*(byte *)((longlong)plVar24 + 0xfe) & 4) == 0) ||
                       (lVar10 = *(longlong *)(lVar9 + 0x28), lVar10 == 0)) {
LAB_143246127:
                      uStack_4bc = *(undefined4 *)(lVar9 + 0x20);
                      goto LAB_14324612e;
                    }
                  }
                  else {
                    cVar4 = (**(code **)(*plVar24 + 0x330))(plVar24);
                    lVar9 = plVar24[0x29];
                    if (cVar4 == '\0') goto LAB_143246127;
                    lVar10 = *(longlong *)(lVar9 + 0x28);
                  }
                  uStack_4bc = *(undefined4 *)(lVar10 + 4);
                }
LAB_14324612e:
                cVar4 = FUN_1417f3e5c(plVar24);
                bVar16 = (char)uStack_4bc - cVar4;
                iVar17 = iVar17 >> (bVar16 & 0x1f);
                iVar19 = (int)uStack_480 >> (bVar16 & 0x1f);
                iVar22 = (int)uStack_458 >> (bVar16 & 0x1f);
                pcStack_178 = (code *)(**(code **)(*plStack_478 + 0x58))();
                dStack_160 = (double)CONCAT44(dStack_160._4_4_,uVar18);
                pdStack_248 = adStack_2c8;
                uStack_240 = &pcStack_178;
                dStack_170 = (double)CONCAT44(iVar19,iVar17);
                pdStack_168 = (double *)CONCAT44(iVar22 + iVar19,iVar17 + iVar22);
                FUN_147459588(lStack_450,auStack_2cc,&pdStack_248);
                iVar17 = (int)((ulonglong)adStack_2c8[0] >> 0x20);
                uVar18 = iVar17 + 1;
                uVar5 = SUB84(adStack_2c8[0],0) + 1;
                dVar39 = adStack_2c8[0];
                if (SUB84(dStack_4a8,0) < SUB84(adStack_2c8[0],0)) {
                  dVar39 = dStack_4a8;
                }
                dVar43 = adStack_2c8[0];
                if ((int)((ulonglong)dStack_4a8 >> 0x20) < iVar17) {
                  dVar43 = dStack_4a8;
                }
                dStack_4a8 = (double)((ulonglong)dVar43 & 0xffffffff00000000 |
                                     (ulonglong)dVar39 & 0xffffffff);
                uVar32 = (ulonglong)uVar5;
                if ((int)uVar5 <= SUB84(dStack_4b8,0)) {
                  uVar32 = (ulonglong)dStack_4b8 & 0xffffffff;
                }
                uVar25 = (ulonglong)dStack_4b8 >> 0x20;
                if ((int)((ulonglong)dStack_4b8 >> 0x20) < (int)uVar18) {
                  uVar25 = (ulonglong)uVar18;
                }
                dStack_4b8 = (double)(uVar25 << 0x20 | uVar32);
                iVar22 = iStack_1a0;
              }
            }
            else if ((longlong)*(int *)(lVar9 + 0x738) != 0) {
              plVar24 = *(longlong **)(lVar9 + 0x730);
              lVar10 = (longlong)*(int *)(lVar9 + 0x738) << 4;
              do {
                uVar18 = (uint)*(byte *)((longlong)plVar24 + 9);
                if (*(byte *)(plVar24 + 1) != 0xff && *(byte *)((longlong)plVar24 + 9) != 0xff) {
                  if (*plVar24 == 0) {
                    lVar34 = 0;
                  }
                  else {
                    lVar34 = *(longlong *)(*plVar24 + 0x28);
                  }
                  if (lVar34 == lStack_3b0) {
                    if (plVar24 != (longlong *)0x0) {
                      plVar24 = (longlong *)
                                ((ulonglong)*(byte *)(plVar24 + 1) * 8 +
                                *(longlong *)(lVar9 + 0x740));
                      pdVar31 = (double *)&DAT_14c8463f0;
                      pdVar33 = (double *)&DAT_14c8463f8;
                      goto LAB_143245f55;
                    }
                    break;
                  }
                }
                plVar24 = plVar24 + 2;
                lVar10 = lVar10 + -0x10;
              } while (lVar10 != 0);
            }
            uVar21 = uVar21 & ~(uint)uVar23;
            puVar14 = puStack_1a8;
            if (puStack_1a8 == (uint *)0x0) {
              puVar14 = auStack_1b8;
            }
            iVar17 = (int)uVar11;
            lVar9 = (longlong)iVar17;
            uVar18 = puVar14[lVar9] & uVar21;
            if (uVar18 == 0) {
              iVar19 = iVar22 + 0x1e;
              if (-1 < iVar22 + -1) {
                iVar19 = iVar22 + -1;
              }
              iVar19 = iVar19 >> 5;
              iVar35 = iVar35 + 0x20;
              iVar20 = iVar19;
              if (iVar19 < iVar17) {
                iVar20 = iVar17;
              }
              if (iVar17 < iVar19) {
                lVar10 = 0;
                do {
                  uVar18 = puVar14[lVar9 + lVar10 + 1];
                  if (uVar18 != 0) {
                    uVar11 = (ulonglong)(iVar17 + (int)lVar10 + 1);
                    uVar21 = 0xffffffff;
                    goto LAB_143245fe7;
                  }
                  iVar35 = iVar35 + 0x20;
                  lVar10 = lVar10 + 1;
                } while (iVar20 - lVar9 != lVar10);
                uVar21 = 0xffffffff;
                iVar17 = iVar20;
              }
              uVar11 = (ulonglong)(iVar17 + 1);
              iVar17 = iVar22;
            }
            else {
LAB_143245fe7:
              uVar23 = (ulonglong)(-uVar18 & uVar18);
              uVar32 = uVar23 * 2 + 1;
              lVar9 = 0x3f;
              if (uVar32 != 0) {
                for (; uVar32 >> lVar9 == 0; lVar9 = lVar9 + -1) {
                }
              }
              iVar17 = (iVar35 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
              if (iVar22 <= iVar17) {
                iVar17 = iVar22;
              }
            }
          } while (iVar17 != iVar6);
        }
        param_1 = lStack_440;
        iVar17 = SUB84(dStack_4b8,0);
        uVar11 = (ulonglong)dStack_4b8 >> 0x20;
        iVar6 = (int)((ulonglong)dStack_4a8 >> 0x20);
        dVar44 = (double)*(int *)(lStack_440 + 0x83c);
        dVar42 = *pdStack_470;
        dStack_4b8 = pdStack_470[1];
        dStack_4b0 = pdStack_470[2];
        dVar52 = ((double)(iVar17 - SUB84(dStack_4a8,0)) * dVar44 + 1.0) * pdStack_470[8];
        dVar36 = ((double)SUB84(dStack_4a8,0) * dVar44 + -0.5) * pdStack_470[8];
        dVar38 = ((double)iVar6 * dVar44 + -0.5) * pdStack_470[9];
        dVar49 = (double)((ulonglong)dVar44 & 0x8000000000000000) * pdStack_470[10];
        dVar43 = pdStack_470[3];
        dVar39 = pdStack_470[3];
        dVar47 = dVar38 * dVar42 - dStack_4b8 * dVar36;
        dVar48 = dVar49 * dStack_4b8 - dStack_4b0 * dVar38;
        dVar50 = dVar36 * dStack_4b0 - dVar42 * dVar49;
        dVar40 = pdStack_470[0xb] * 0.0 * pdStack_470[3] - pdStack_470[3] * pdStack_470[0xb] * 0.0;
        dVar48 = dVar48 + dVar48;
        dVar50 = dVar50 + dVar50;
        dVar47 = dVar47 + dVar47;
        auVar51._8_8_ = dVar40 + dVar40;
        dVar40 = dStack_4b8 + dStack_4b8;
        dVar45 = dStack_4b0 + dStack_4b0;
        dVar41 = dVar42 * (dVar42 + dVar42);
        dVar46 = (dVar42 + dVar42) * dVar39;
        dStack_128 = 1.0 - (dVar41 + dStack_4b8 * dVar40);
        dStack_148 = ((double)((int)uVar11 - iVar6) * dVar44 + 1.0) * pdStack_470[9];
        dStack_158 = (dVar40 * dVar42 - dVar45 * dVar43) * dStack_148;
        dStack_130 = (dVar45 * dStack_4b8 - dVar46) * 1.0;
        dStack_138 = *pdStack_470 * dVar45 + dVar40 * dVar43;
        dStack_118 = (dVar47 * dStack_4b8 - dVar50 * dStack_4b0) + dVar43 * dVar48 + dVar36 +
                     pdStack_470[4];
        dStack_110 = (dStack_4b0 * dVar48 - dVar42 * dVar47) + dVar39 * dVar50 + dVar38 +
                     pdStack_470[5];
        auVar51._0_8_ =
             dVar47 * dVar43 + dVar49 + (dVar50 * dVar42 - dVar48 * dStack_4b8) + pdStack_470[6];
        pcStack_178 = (code *)((1.0 - (dStack_4b0 * dVar45 + dStack_4b8 * dVar40)) * dVar52);
        dStack_150 = (1.0 - (dStack_4b0 * dVar45 + dVar41)) * dStack_148;
        dStack_170 = (dVar40 * dVar42 + dVar45 * dVar43) * dVar52;
        dStack_148 = (dVar45 * dStack_4b8 + dVar46) * dStack_148;
        pdStack_168 = (double *)((*pdStack_470 * dVar45 - dVar40 * dVar43) * dVar52);
        dStack_160 = 0.0;
        uStack_140 = 0;
        uStack_120 = 0;
        auStack_108 = blendpd(auVar51,_DAT_149935300,2);
        pdStack_248 = pdStack_438;
        uStack_240 = ppcStack_430;
        dStack_238 = dStack_428;
        uStack_230 = uStack_420;
        dStack_228 = dStack_3f8;
        dStack_220 = dStack_3f0;
        dStack_218 = dStack_408;
        uStack_210 = uStack_400;
        dStack_208 = dStack_3d8;
        dStack_200 = dStack_3d0;
        dStack_1f8 = dStack_418;
        uStack_1f0 = uStack_410;
        dStack_1e8 = dStack_3e8;
        dStack_1e0 = dStack_3e0;
        uStack_1d8 = auStack_3c8._0_8_;
        uStack_1d0 = auStack_3c8._8_8_;
        if (((((9.99999993922529e-09 < ABS((double)pcStack_178)) ||
              (9.99999993922529e-09 < ABS(dStack_170))) ||
             ((9.99999993922529e-09 < ABS((double)pdStack_168) ||
              (((9.99999993922529e-09 < ABS(dStack_158) || (9.99999993922529e-09 < ABS(dStack_150)))
               || (9.99999993922529e-09 < ABS(dStack_148))))))) ||
            ((9.99999993922529e-09 < ABS(dStack_138) || (9.99999993922529e-09 < ABS(dStack_130)))))
           || (9.99999993922529e-09 < ABS(dStack_128))) {
          FUN_14007522e(adStack_2c8,&pcStack_178);
        }
        else {
          pdVar33 = (double *)&DAT_14c846400;
          pdVar31 = adStack_2c8;
          for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
            *pdVar31 = *pdVar33;
            pdVar33 = pdVar33 + 1;
            pdVar31 = pdVar31 + 1;
          }
        }
        uVar11 = uStack_460;
        puVar30 = puStack_468;
        param_4 = plStack_488;
        FUN_1447fea8d(&pcStack_178,&pdStack_248,adStack_2c8);
        ppcVar27 = &pcStack_178;
        for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar30 = *ppcVar27;
          ppcVar27 = ppcVar27 + 1;
          puVar30 = puVar30 + 1;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != uStack_448);
    }
    dVar39 = (double)FUN_1447b4020(param_5);
    uVar11 = uStack_3a0;
    lVar9 = lStack_3a8;
    pdStack_248 = (double *)0x0;
    uStack_240 = (code **)CONCAT44(uStack_240._4_4_,(int)uStack_3a0);
    if ((int)uStack_3a0 == 0) {
      uStack_240 = (code **)(uStack_3a0 & 0xffffffff);
    }
    else {
      FUN_147459a94(&pdStack_248,uStack_3a0 & 0xffffffff);
      FUN_147459af9(pdStack_248,lVar9,uVar11 & 0xffffffff);
    }
    uStack_230._0_2_ = CONCAT11(bStack_4c2,uStack_4c1);
    lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar6 = *(int *)(lVar9 + 0xc60);
    dStack_238 = dVar39;
    if (DAT_14c86a9fc == 0) {
      if (iVar6 != 2) {
        if (iVar6 != 1) goto LAB_1432463b1;
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_1432463ba;
        goto LAB_14324644f;
      }
LAB_1432463ba:
      FUN_143249a1c(&pdStack_248,&DAT_14ca85100);
    }
    else {
LAB_1432463b1:
      if (iVar6 == 0x10) goto LAB_1432463ba;
LAB_14324644f:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar9 + 0xc60), iVar6 == 2))
        goto LAB_1432463ba;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_1432463ba;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar30 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar14 = (uint *)*puVar30;
        if (puVar14 != (uint *)0x0) goto LAB_143246535;
        while( true ) {
          uVar21 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar21 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar21 | 1;
            __tlregdtor(&LAB_14324ac23);
          }
          lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar13 = *(undefined4 **)(lVar9 + 0x310);
          *(undefined8 *)(lVar9 + 0x310) = 0;
          if (puVar13 == (undefined4 *)0x0) {
            puVar13 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar13 = 0xffffffff;
          *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar30 = puVar13;
          FUN_140217a48(puVar30);
          puVar14 = (uint *)*puVar30;
LAB_143246535:
          puVar28 = (undefined8 *)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar26 = (uint *)(puVar28 + 0x19);
          uVar21 = puVar14[0x12];
          if (puVar26 <= puVar14 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
            LOCK();
            uVar18 = *puVar14;
            *puVar14 = *puVar14 + uVar21 + 1;
            UNLOCK();
            if ((uVar18 ^ uVar21) != 0xffffffff) break;
            puVar14 = (uint *)*puVar30;
            *puVar14 = 0xffffffff;
            *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
            puVar14[0x12] = 0;
            *puVar30 = puVar14;
            puVar28 = (undefined8 *)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
            puVar26 = (uint *)(puVar28 + 0x19);
            uVar21 = 0;
            if (puVar26 <= puVar14 + 0x4000) {
              uVar21 = 1;
              goto LAB_1432465b5;
            }
          }
        }
        uVar21 = uVar21 + 1;
LAB_1432465b5:
        *(uint **)(puVar14 + 0x10) = puVar26;
        puVar14[0x12] = uVar21;
        iVar6 = 0;
        FUN_1447247dc(puVar28,0);
        *puVar28 = &PTR_FUN_14a3c1348;
        puVar28[0x15] = pdStack_248;
        pdStack_248 = (double *)0x0;
        *(undefined4 *)(puVar28 + 0x16) = (undefined4)uStack_240;
        *(undefined4 *)((longlong)puVar28 + 0xb4) = uStack_240._4_4_;
        uStack_240 = (code **)0x0;
        *(undefined2 *)(puVar28 + 0x18) = (undefined2)uStack_230;
        puVar28[0x17] = dStack_238;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar21 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar21 < 2) {
            uVar11 = (ulonglong)(byte)(&DAT_149e38edc)[uVar21];
          }
          else {
            uVar11 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar11 = 5;
        }
        if (*(code **)(puVar28[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar28[0xe] + 0x18))(puVar28 + 0xe,puVar28 + 9);
        }
        puVar28[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar28[9] = puVar28;
        puVar28[10] = puVar28;
        lVar9 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar9 == 0) {
          uVar23 = 1;
          if ((char)uVar11 != '\x06') {
            uVar23 = uVar11;
          }
          uVar11 = uVar23;
          uVar15 = 0;
        }
        else {
          if ((char)uVar11 == '\x06') {
            uVar11 = *(ulonglong *)(lVar9 + 0x38) >> 0x3b;
          }
          uVar15 = *(undefined8 *)(lVar9 + 0x30);
        }
        puVar28[0xf] = uVar15;
        puVar28[0x10] = uVar11 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar28 + 0x1c) = iVar6;
        if (puVar28 == (undefined8 *)0x0) {
          pcStack_178 = (code *)CONCAT71(pcStack_178._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar28 + 1) = *(int *)(puVar28 + 1) + 1;
          UNLOCK();
          pcStack_178 = (code *)CONCAT71(pcStack_178._1_7_,1);
          FUN_1447439e4(puVar28);
          LOCK();
          piVar1 = (int *)(puVar28 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar28)(puVar28,1);
          }
        }
      }
      else {
        pcStack_178 = (code *)0x0;
        pdStack_168 = (double *)FUN_14001cc68(0x28,8);
        *pdStack_168 = (double)&PTR_LAB_14a3c1300;
        pdStack_168[1] = (double)pdStack_248;
        pdStack_248 = (double *)0x0;
        *(undefined4 *)(pdStack_168 + 2) = (undefined4)uStack_240;
        *(undefined4 *)((longlong)pdStack_168 + 0x14) = uStack_240._4_4_;
        uStack_240 = (code **)0x0;
        *(undefined2 *)(pdStack_168 + 4) = (undefined2)uStack_230;
        pdStack_168[3] = dStack_238;
        if (pdStack_168 + 1 != (double *)0x0) {
          pcStack_178 = (code *)&LAB_14324abb0;
        }
        ppcStack_518 = &pcStack_178;
        FUN_14005a792(&DAT_14ca9a440,L"RenderMergedTexture",&DAT_14caa2560);
        if (pcStack_178 != (code *)0x0) {
          pdVar33 = pdStack_168;
          if (pdStack_168 == (double *)0x0) {
            pdVar33 = &dStack_158;
          }
          (**(code **)((longlong)*pdVar33 + 0x10))();
        }
      }
    }
    FUN_147459391(pdStack_248,(ulonglong)uStack_240 & 0xffffffff);
    if (pdStack_248 != (double *)0x0) {
      FUN_1400020a8();
    }
    pdVar33 = (double *)(uStack_3a0 & 0xffffffff);
    FUN_147459391(lStack_3a8,pdVar33);
    if (lStack_3a8 != 0) {
      FUN_1400020a8();
    }
    FUN_140460f52(auStack_390);
  }
  uStack_180 = 0;
  if (lStack_188 != 0) {
    FUN_1400020a8();
  }
  FUN_140f0de4e(alStack_1c8);
  uVar23 = CONCAT71((int7)((ulonglong)pdVar33 >> 8),1);
LAB_14324505a:
  if ((uStack_f0 ^ (ulonglong)auStack_538) == DAT_14c707940) {
    return uVar23 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147454c8c FUN_147454c8c body=68 status=ok
// SIG undefined FUN_147454c8c(void)

void FUN_147454c8c(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_1478b6d68();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147454cd2 FUN_147454cd2 body=86 status=ok
// SIG undefined FUN_147454cd2(void)

longlong * FUN_147454cd2(longlong *param_1)

{
  FUN_144869430();
  *param_1 = (longlong)&PTR_FUN_14a3c1520;
  FUN_145c422f6(param_1 + 0x12);
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  (**(code **)(*param_1 + 0xc0))(param_1,1);
  (**(code **)(*param_1 + 0xf0))(param_1,0);
  return param_1;
}



// FUNCTION 147454d28 FUN_147454d28 body=96 status=ok
// SIG undefined FUN_147454d28(void)

undefined8 FUN_147454d28(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4(param_2,local_28);
  FUN_14021219d(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147454d8a FUN_147454d8a body=156 status=ok
// SIG undefined FUN_147454d8a(void)

longlong FUN_147454d8a(longlong param_1,char param_2)

{
  longlong lVar1;
  int *piVar2;
  
  if (((param_2 != -1) && (lVar1 = FUN_1447210f0(param_1), lVar1 != 0)) &&
     ((longlong)*(int *)(param_1 + 0x3d0) != 0)) {
    piVar2 = *(int **)(param_1 + 0x3c8);
    lVar1 = (longlong)*(int *)(param_1 + 0x3d0) << 4;
    do {
      if (*piVar2 == (int)param_2 && *(longlong *)(piVar2 + 2) != 0) {
        if (piVar2 != (int *)0x0) {
          return *(longlong *)(piVar2 + 2);
        }
        break;
      }
      piVar2 = piVar2 + 4;
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
  }
  lVar1 = *(longlong *)(param_1 + 0x558);
  if (((*(longlong *)(param_1 + 0x558) != 0) ||
      (FUN_14003fbd6(), lVar1 = DAT_14caea080, DAT_14caea080 != 0)) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return lVar1;
}



// FUNCTION 147454e2e FUN_147454e2e body=170 status=ok
// SIG undefined FUN_147454e2e(void)

longlong FUN_147454e2e(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  
  if ((((char)param_2 != -1) && (lVar1 = FUN_1447210f0(param_1), lVar1 != 0)) &&
     ((longlong)(int)param_1[0x7a] != 0)) {
    piVar3 = (int *)param_1[0x79];
    lVar1 = (longlong)(int)param_1[0x7a] << 4;
    do {
      if (*piVar3 == (int)(char)param_2 && *(longlong *)(piVar3 + 2) != 0) {
        if (piVar3 != (int *)0x0) {
          return *(longlong *)(piVar3 + 2);
        }
        break;
      }
      piVar3 = piVar3 + 4;
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
  }
  lVar1 = param_1[0xab];
  if (param_1[0xab] == 0) {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x648))(param_1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147454ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar1 = (**(code **)(*plVar2 + 0x658))(plVar2,param_2,*(code **)(*plVar2 + 0x658));
      return lVar1;
    }
    FUN_14003fbd6();
    lVar1 = DAT_14caea080;
  }
  return lVar1;
}



// FUNCTION 147454ed8 FUN_147454ed8 body=56 status=ok
// SIG undefined FUN_147454ed8(void)

longlong FUN_147454ed8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = param_1[0xac];
  if (lVar2 == 0) {
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x648))();
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147454f05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar2 = (**(code **)(*plVar1 + 0x660))(plVar1);
      return lVar2;
    }
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 147454f10 FUN_147454f10 body=372 status=ok
// SIG undefined FUN_147454f10(void)

void FUN_147454f10(longlong *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  (**(code **)(*param_1 + 800))(param_1,0,&local_68,&local_80);
  if ((((local_80 != DAT_14c8464e0) || (NAN(local_80) || NAN(DAT_14c8464e0))) ||
      (local_78 != DAT_14c8464e8)) ||
     (((NAN(local_78) || NAN(DAT_14c8464e8) || (local_70 != DAT_14c8464f0)) ||
      (NAN(local_70) || NAN(DAT_14c8464f0))))) {
    dVar1 = local_70 + local_58;
    dVar2 = local_78 + local_60;
    dVar4 = local_80 + local_68;
    local_58 = local_58 - local_70;
    local_60 = local_60 - local_78;
    local_68 = local_68 - local_80;
    if (*(char *)(param_2 + 6) == '\0') {
      *param_2 = local_68;
      param_2[1] = local_60;
      param_2[2] = local_58;
      param_2[3] = dVar4;
      param_2[4] = dVar2;
      param_2[5] = dVar1;
      *(undefined1 *)(param_2 + 6) = 1;
    }
    else {
      dVar3 = *param_2;
      if (local_68 <= *param_2) {
        dVar3 = local_68;
      }
      *param_2 = dVar3;
      dVar3 = param_2[1];
      if (local_60 <= param_2[1]) {
        dVar3 = local_60;
      }
      param_2[1] = dVar3;
      dVar3 = param_2[2];
      if (local_58 <= param_2[2]) {
        dVar3 = local_58;
      }
      param_2[2] = dVar3;
      dVar3 = param_2[3];
      if (param_2[3] <= dVar4) {
        dVar3 = dVar4;
      }
      param_2[3] = dVar3;
      dVar4 = param_2[4];
      if (param_2[4] <= dVar2) {
        dVar4 = dVar2;
      }
      param_2[4] = dVar4;
      dVar2 = param_2[5];
      if (param_2[5] <= dVar1) {
        dVar2 = dVar1;
      }
      param_2[5] = dVar2;
    }
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147455086 FUN_147455086 body=33 status=ok
// SIG undefined FUN_147455086(void)

void FUN_147455086(longlong param_1)

{
  FUN_140bd5ce8();
  FUN_141791dc6(param_1 + 0x718,param_1);
  return;
}



// FUNCTION 1474550a8 FUN_1474550a8 body=203 status=ok
// SIG undefined FUN_1474550a8(void)

undefined8 FUN_1474550a8(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = FUN_14001cc68(0x58,0x10);
  FUN_1446f470e(&local_38,L"LandscapeGrassReadback",1);
  FUN_145ad21dc(uVar3,local_38);
  lVar2 = *(longlong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar3;
  if (lVar2 != 0) {
    FUN_145bf0f7a(lVar2);
    FUN_1400020a8(lVar2);
    uVar3 = *(undefined8 *)(param_1 + 8);
  }
  local_48 = 0xffffffff;
  uStack_44 = 0xffffffff;
  uStack_40 = 0xffffffff;
  uStack_3c = 0xffffffff;
  FUN_14321397a(param_2,uVar3,param_3);
  uVar3 = *(undefined8 *)(param_3 + 0x84);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  LOCK();
  uVar1 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = 1;
  UNLOCK();
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)uVar3 >> 8),uVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147455174 FUN_147455174 body=398 status=ok
// SIG undefined FUN_147455174(void)

undefined1 FUN_147455174(longlong param_1)

{
  undefined1 uVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 *_Src;
  undefined1 *puVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  void *_Dst;
  int iVar8;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  local_30 = 0;
  _Src = (undefined1 *)FUN_1431ed846(*(undefined8 *)(param_1 + 8));
  if (*(char *)(param_1 + 1) == '\0') {
    FUN_14735b34c(param_1 + 0x18,*(int *)(param_1 + 0x14) * *(int *)(param_1 + 0x10),1);
    if (*(longlong *)(&DAT_14ca814b0 + (ulonglong)DAT_14ca85550 * 0x3c) == DAT_14ca81490) {
      iVar8 = *(int *)(param_1 + 0x14);
      if (0 < iVar8) {
        puVar4 = *(undefined1 **)(param_1 + 0x18);
        iVar7 = *(int *)(param_1 + 0x10);
        iVar6 = 0;
        do {
          if (0 < iVar7) {
            iVar8 = 0;
            do {
              *puVar4 = _Src[2];
              puVar4[1] = _Src[1];
              puVar4[2] = *_Src;
              puVar4[3] = _Src[3];
              puVar4 = puVar4 + 4;
              _Src = _Src + 4;
              iVar8 = iVar8 + 1;
              iVar7 = *(int *)(param_1 + 0x10);
            } while (iVar8 < iVar7);
            iVar8 = *(int *)(param_1 + 0x14);
          }
          _Src = _Src + ((longlong)(int)local_2c - (longlong)iVar7) * 4;
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar8);
      }
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x10);
      uVar5 = (ulonglong)uVar2;
      _Dst = *(void **)(param_1 + 0x18);
      if (uVar2 == local_2c) {
        memcpy(_Dst,_Src,(longlong)(int)(*(int *)(param_1 + 0x14) * uVar2) << 2);
      }
      else if (0 < *(int *)(param_1 + 0x14)) {
        iVar8 = 0;
        do {
          memcpy(_Dst,_Src,(longlong)(int)uVar5 << 2);
          uVar5 = (ulonglong)*(int *)(param_1 + 0x10);
          _Dst = (void *)((longlong)_Dst + uVar5 * 4);
          _Src = _Src + (longlong)(int)local_2c * 4;
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(param_1 + 0x14));
      }
    }
  }
  FUN_1431ed91e(*(undefined8 *)(param_1 + 8));
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_145bf0f7a(lVar3);
    FUN_1400020a8(lVar3);
  }
  LOCK();
  uVar1 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = 1;
  UNLOCK();
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 147455304 FUN_147455304 body=429 status=ok
// SIG undefined FUN_147455304(void)

void FUN_147455304(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a0);
  }
  puVar4 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  puVar3 = local_a0;
  if (puVar4 != (undefined1 *)0x0) {
    puVar3 = puVar4;
  }
  puVar2 = &local_98;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar4 = local_a8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x638))(param_1,puVar2,puVar3,puVar4);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474554b2 FUN_1474554b2 body=190 status=ok
// SIG undefined FUN_1474554b2(void)

void FUN_1474554b2(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_14477b072(param_1,DAT_14caa2200);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_40 = 0;
    local_58[0] = (undefined1)param_2;
    local_48 = *param_4;
    local_50 = param_3;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_58);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000147455578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x648))(param_1,param_2,param_3,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147455586 FUN_147455586 body=359 status=ok
// SIG undefined FUN_147455586(void)

void FUN_147455586(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  iVar1 = local_2c;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar3 = &local_40;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0x648))(param_1,iVar1 != 0,local_38,puVar3);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474556ee FUN_1474556ee body=282 status=ok
// SIG undefined FUN_1474556ee(void)

void FUN_1474556ee(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_34;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0x3ff00000;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0;
  local_48 = 0x7fffffff7fffffff;
  local_40 = 0;
  local_38 = 3;
  local_34 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  puVar2 = &local_a8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x640))(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14745580e FUN_14745580e body=137 status=ok
// SIG undefined FUN_14745580e(void)

void FUN_14745580e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474558f6 FUN_1474558f6 body=1 status=ok
// SIG undefined FUN_1474558f6(void)

void FUN_1474558f6(void)

{
  return;
}



// FUNCTION 1474558f8 FUN_1474558f8 body=136 status=ok
// SIG undefined FUN_1474558f8(void)

void FUN_1474558f8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((*(char *)(param_1 + 0x84d) == '\x01') && ((longlong)*(int *)(param_1 + 0x598) != 0)) {
    plVar4 = *(longlong **)(param_1 + 0x590);
    plVar1 = plVar4 + *(int *)(param_1 + 0x598);
    do {
      lVar6 = (longlong)*(int *)(*plVar4 + 0x660);
      if (lVar6 != 0) {
        lVar2 = *(longlong *)(*plVar4 + 0x658);
        lVar5 = 0;
        do {
          lVar3 = *(longlong *)(lVar2 + lVar5);
          if (lVar3 != 0) {
            FUN_14016d8b0(lVar3,param_2,param_3);
          }
          lVar5 = lVar5 + 8;
        } while (lVar6 * 8 != lVar5);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1);
  }
  return;
}



// FUNCTION 147455980 FUN_147455980 body=188 status=ok
// SIG undefined FUN_147455980(void)

void FUN_147455980(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(char *)(param_1 + 0x84d) == '\x01') && ((longlong)*(int *)(param_1 + 0x598) != 0)) {
    plVar6 = *(longlong **)(param_1 + 0x590);
    plVar1 = plVar6 + *(int *)(param_1 + 0x598);
    do {
      lVar5 = (longlong)*(int *)(*plVar6 + 0x660);
      if (lVar5 != 0) {
        lVar2 = *(longlong *)(*plVar6 + 0x658);
        lVar4 = 0;
        do {
          lVar3 = *(longlong *)(lVar2 + lVar4);
          if (lVar3 != 0) {
            local_58 = *param_3;
            uStack_54 = param_3[1];
            uStack_50 = param_3[2];
            uStack_4c = param_3[3];
            FUN_144a9d3f0(lVar3,param_2,&local_58);
          }
          lVar4 = lVar4 + 8;
        } while (lVar5 * 8 != lVar4);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147455a3e FUN_147455a3e body=142 status=ok
// SIG undefined FUN_147455a3e(void)

void FUN_147455a3e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((*(char *)(param_1 + 0x84d) == '\x01') && ((longlong)*(int *)(param_1 + 0x598) != 0)) {
    plVar4 = *(longlong **)(param_1 + 0x590);
    plVar1 = plVar4 + *(int *)(param_1 + 0x598);
    do {
      lVar6 = (longlong)*(int *)(*plVar4 + 0x660);
      if (lVar6 != 0) {
        lVar2 = *(longlong *)(*plVar4 + 0x658);
        lVar5 = 0;
        do {
          lVar3 = *(longlong *)(lVar2 + lVar5);
          if (lVar3 != 0) {
            FUN_14472da24(lVar3,param_2,param_3);
          }
          lVar5 = lVar5 + 8;
        } while (lVar6 * 8 != lVar5);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1);
  }
  return;
}



// FUNCTION 147455acc FUN_147455acc body=1 status=ok
// SIG undefined FUN_147455acc(void)

void FUN_147455acc(void)

{
  return;
}



// FUNCTION 147455ace FUN_147455ace body=4 status=ok
// SIG undefined FUN_147455ace(void)

undefined8 FUN_147455ace(void)

{
  return 0;
}



// FUNCTION 147455ad2 FUN_147455ad2 body=4 status=ok
// SIG undefined FUN_147455ad2(void)

undefined8 FUN_147455ad2(void)

{
  return 0;
}



// FUNCTION 147455ad6 FUN_147455ad6 body=77 status=ok
// SIG undefined FUN_147455ad6(void)

void FUN_147455ad6(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x584) != param_2) {
    *(char *)(param_1 + 0x584) = param_2;
    iVar1 = *(int *)(param_1 + 0x598);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x590);
      lVar3 = 0;
      do {
        if (*(longlong *)(lVar2 + lVar3) != 0) {
          FUN_1448215fa();
        }
        lVar3 = lVar3 + 8;
      } while ((longlong)iVar1 * 8 != lVar3);
    }
  }
  return;
}



// FUNCTION 147455b24 FUN_147455b24 body=649 status=ok
// SIG undefined FUN_147455b24(void)

void FUN_147455b24(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_1b8 [40];
  undefined **local_190 [17];
  undefined ***local_108;
  undefined ***local_100;
  undefined8 local_f8;
  undefined **local_f0 [17];
  undefined ***local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_14484255c(param_2,0x50);
  FUN_14484255c(param_2);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    local_48 = 0;
    uStack_40 = 0;
    memset(local_f0,0,0x90);
    FUN_144869430(local_f0);
    local_60 = 0;
    local_f0[0] = &PTR_FUN_149e1e590;
    local_50 = 0;
    local_58 = &local_48;
    FUN_144a69558(local_f0,1);
    (*(code *)local_f0[0][0x1e])(local_f0,0);
    local_f0[0] = &PTR_FUN_149e1e330;
    FUN_1407134c4(local_190,local_f0);
    local_108 = local_68;
    local_190[0] = &PTR_FUN_149f52ef0;
    local_100 = local_f0;
    local_68 = local_190;
    uVar1 = FUN_14001cc68(0x158,0x10);
    FUN_140dffb3a(uVar1);
    local_f8 = uVar1;
    FUN_140d039f0(*(undefined8 *)(param_1 + 0x30),local_190);
    FUN_14484255c(param_2);
    FUN_14041e0ac(local_190);
    FUN_144a7fc42(local_f0);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    local_48 = 0;
    uStack_40 = 0;
    memset(local_f0,0,0x90);
    FUN_144869430(local_f0);
    local_60 = 0;
    local_f0[0] = &PTR_FUN_149e1e590;
    local_50 = 0;
    local_58 = &local_48;
    FUN_144a69558(local_f0,1);
    (*(code *)local_f0[0][0x1e])(local_f0,0);
    local_f0[0] = &PTR_FUN_149e1e330;
    FUN_1407134c4(local_190,local_f0);
    local_108 = local_68;
    local_190[0] = &PTR_FUN_149f52ef0;
    local_100 = local_f0;
    local_68 = local_190;
    uVar1 = FUN_14001cc68(0x158,0x10);
    FUN_140dffb3a(uVar1);
    local_f8 = uVar1;
    FUN_140d039f0(*(undefined8 *)(param_1 + 0x38),local_190);
    FUN_14484255c(param_2,(longlong)(int)uStack_40);
    FUN_14041e0ac(local_190);
    FUN_144a7fc42(local_f0);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147455dae FUN_147455dae body=115 status=ok
// SIG undefined FUN_147455dae(void)

void FUN_147455dae(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14a3c02b8;
  FUN_14745aa5e(param_1 + 2);
  lVar2 = param_1[7];
  if (lVar2 != 0) {
    FUN_140dcca88(lVar2);
    FUN_1400020a8(lVar2);
  }
  puVar3 = (undefined8 *)param_1[6];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149e38530;
  return;
}



// FUNCTION 147455e22 FUN_147455e22 body=380 status=ok
// SIG undefined FUN_147455e22(void)

void FUN_147455e22(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_1b8 [40];
  undefined **local_190 [17];
  undefined ***local_108;
  undefined ***local_100;
  undefined8 local_f8;
  undefined **local_f0 [17];
  undefined ***local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_14484255c(param_2,0x40);
  FUN_14484255c(param_2);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    local_48 = 0;
    uStack_40 = 0;
    memset(local_f0,0,0x90);
    FUN_144869430(local_f0);
    local_60 = 0;
    local_f0[0] = &PTR_FUN_149e1e590;
    local_50 = 0;
    local_58 = &local_48;
    FUN_144a69558(local_f0,1);
    (*(code *)local_f0[0][0x1e])(local_f0,0);
    local_f0[0] = &PTR_FUN_149e1e330;
    FUN_1407134c4(local_190,local_f0);
    local_108 = local_68;
    local_190[0] = &PTR_FUN_149f52ef0;
    local_100 = local_f0;
    local_68 = local_190;
    uVar1 = FUN_14001cc68(0x158,0x10);
    FUN_140dffb3a(uVar1);
    local_f8 = uVar1;
    FUN_14172c4ee(*(undefined8 *)(param_1 + 0x30),local_190);
    FUN_14484255c(param_2,(longlong)(int)uStack_40);
    FUN_14041e0ac(local_190);
    FUN_144a7fc42(local_f0);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147455fa0 FUN_147455fa0 body=51 status=ok
// SIG undefined FUN_147455fa0(void)

void FUN_147455fa0(undefined8 param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  
  FUN_147a00b08();
  if (param_3 != '\0') {
    cVar1 = FUN_147c69bd4();
    if (cVar1 != '\0') {
      return;
    }
  }
  FUN_1406cc378(param_1);
  return;
}



// FUNCTION 147455fd4 FUN_147455fd4 body=1244 status=ok
// SIG undefined FUN_147455fd4(void)

void FUN_147455fd4(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_130;
  undefined8 local_128 [2];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 uStack_a0;
  longlong local_90;
  undefined1 local_88 [8];
  undefined1 *local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_80 = (undefined1 *)0x0;
  local_78 = 0x100000000;
  local_a8 = (longlong *)0x0;
  uStack_a0 = 0;
  local_b4 = 0x100;
  local_b0 = 0;
  local_118 = *param_1;
  uStack_110 = param_1[1];
  local_108 = param_1[2];
  uStack_100 = param_1[3];
  local_f8 = *(undefined4 *)(param_1 + 4);
  uStack_f4 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_f0 = *(undefined4 *)(param_1 + 5);
  uStack_ec = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_e8 = *(undefined4 *)(param_1 + 6);
  uStack_e4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_e0 = *(undefined4 *)(param_1 + 7);
  uStack_dc = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_d8 = (undefined4)DAT_14c846510;
  uStack_d4 = DAT_14c846510._4_4_;
  uStack_d0 = (undefined4)DAT_14c846518;
  uStack_cc = DAT_14c846518._4_4_;
  local_c8 = DAT_14c846520;
  uStack_c0 = 0;
  local_b8 = 1;
  local_128[0] = param_1[0x11];
  plVar2 = param_1 + 0x1b;
  FUN_1407125d4(local_128,plVar2);
  uVar17 = param_1[0xe];
  fVar3 = *(float *)(param_1 + 0xf);
  dVar4 = (double)param_1[0xd];
  dVar5 = (double)param_1[0xc];
  lVar19 = param_1[0x10];
  local_130 = FUN_14001cc68(0x90,0x10);
  local_198._8_8_ = dVar4 * (double)fVar3;
  local_198._0_8_ = (double)fVar3 * dVar5;
  local_188._0_8_ = uVar17;
  local_90 = *(longlong *)(lVar19 + 0x30);
  if (local_90 != 0) {
    LOCK();
    *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
    UNLOCK();
  }
  FUN_140fa714a(local_130,&local_90,local_198,0);
  uVar13 = local_78;
  if (local_130 != 0) {
    LOCK();
    *(int *)(local_130 + 8) = *(int *)(local_130 + 8) + 1;
    UNLOCK();
  }
  iVar12 = (int)local_78;
  FUN_140711c7e(local_198,local_78 & 0xffffffff,&local_130);
  uVar17 = local_198._0_8_;
  uVar14 = *(uint *)(local_198._0_8_ + 8);
  if ((uVar14 & 3) == 0) {
    FUN_144b03742(local_198._0_8_);
    uVar14 = *(uint *)(uVar17 + 8);
  }
  else {
    uVar7 = *(undefined4 *)((longlong)param_1 + 0x94);
    uVar8 = *(undefined4 *)(param_1 + 0x13);
    uVar9 = *(undefined4 *)((longlong)param_1 + 0x9c);
    *(undefined4 *)(local_198._0_8_ + 0x48) = *(undefined4 *)(param_1 + 0x12);
    *(undefined4 *)(local_198._0_8_ + 0x4c) = uVar7;
    *(undefined4 *)(local_198._0_8_ + 0x50) = uVar8;
    *(undefined4 *)(local_198._0_8_ + 0x54) = uVar9;
  }
  if ((uVar14 & 3) == 0) {
    FUN_144aa44d4(uVar17);
    uVar14 = *(uint *)(uVar17 + 8);
  }
  else {
    uVar7 = *(undefined4 *)((longlong)param_1 + 0xa4);
    uVar8 = *(undefined4 *)(param_1 + 0x15);
    uVar9 = *(undefined4 *)((longlong)param_1 + 0xac);
    *(undefined4 *)(uVar17 + 0x58) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(uVar17 + 0x5c) = uVar7;
    *(undefined4 *)(uVar17 + 0x60) = uVar8;
    *(undefined4 *)(uVar17 + 100) = uVar9;
  }
  if ((uVar14 & 3) == 0) {
    FUN_1429b8506(uVar17,3);
  }
  else {
    *(undefined1 *)(uVar17 + 0x70) = 3;
  }
  local_198._0_8_ = param_1[0x10] + 0x20;
  FUN_140a4b800(uVar17);
  uVar11 = uStack_a0;
  lVar19 = (longlong)(int)uStack_a0;
  uVar14 = (int)uStack_a0 + 1;
  uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar14);
  if (uStack_a0._4_4_ < uVar14) {
    FUN_140619960(&local_a8,uVar11 & 0xffffffff);
  }
  local_a8[lVar19] = local_130;
  uVar14 = iVar12 + 1;
  local_78 = CONCAT44(local_78._4_4_,uVar14);
  if (local_78._4_4_ < uVar14) {
    FUN_14745abde(local_88,uVar13 & 0xffffffff);
  }
  puVar15 = local_80;
  if (local_80 == (undefined1 *)0x0) {
    puVar15 = local_88;
  }
  *(undefined8 *)(puVar15 + (longlong)iVar12 * 8) = uVar17;
  lVar19 = *plVar2;
  if ((int)uStack_a0 == 1) {
    uVar17 = *(undefined8 *)(lVar19 + 0x40);
    lVar19 = *local_a8;
    local_198._0_8_ = lVar19;
    if (lVar19 != 0) {
      LOCK();
      *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
      UNLOCK();
    }
  }
  else {
    puVar16 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    FUN_14014f414(puVar16,&local_a8);
    if (puVar16 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      uVar17 = *(undefined8 *)(lVar19 + 0x40);
      local_198._0_8_ = puVar16;
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      FUN_1406188f0(uVar17);
      LOCK();
      piVar1 = (int *)(puVar16 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (*(int *)((longlong)puVar16 + 0xc) == 0)) {
        (**(code **)*puVar16)(puVar16,1);
      }
      goto LAB_14745624f;
    }
    uVar17 = *(undefined8 *)(lVar19 + 0x40);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = local_198._8_8_;
    local_198 = auVar10 << 0x40;
  }
  FUN_1406188f0(uVar17,local_198);
LAB_14745624f:
  puVar15 = local_88;
  if (local_80 != (undefined1 *)0x0) {
    puVar15 = local_80;
  }
  lVar19 = (longlong)(int)local_78;
  if (lVar19 != 0) {
    lVar18 = 0;
    do {
      lVar6 = *(longlong *)(*plVar2 + 0x40);
      local_198._8_4_ = SUB84((double)*(float *)(lVar6 + 0x44),0);
      local_198._0_8_ = (double)*(float *)(lVar6 + 0x40);
      local_198._12_4_ = (int)((ulonglong)(double)*(float *)(lVar6 + 0x44) >> 0x20);
      local_188._8_4_ = SUB84((double)*(float *)(lVar6 + 0x4c),0);
      local_188._0_8_ = (double)*(float *)(lVar6 + 0x48);
      local_188._12_4_ = (int)((ulonglong)(double)*(float *)(lVar6 + 0x4c) >> 0x20);
      local_178 = *(undefined4 *)(lVar6 + 0x20);
      uStack_174 = *(undefined4 *)(lVar6 + 0x24);
      uStack_170 = *(undefined4 *)(lVar6 + 0x28);
      uStack_16c = *(undefined4 *)(lVar6 + 0x2c);
      local_168 = *(undefined8 *)(lVar6 + 0x30);
      uStack_160 = 0;
      local_158 = 0x3ff0000000000000;
      uStack_150 = 0x3ff0000000000000;
      local_148 = 0x3ff0000000000000;
      uStack_140 = 0;
      lVar6 = *(longlong *)(puVar15 + lVar18);
      if ((*(byte *)(lVar6 + 8) & 3) == 0) {
        FUN_14484a332(lVar6,local_198);
      }
      else {
        FUN_146e226b0(lVar6,local_198);
      }
      lVar18 = lVar18 + 8;
    } while (lVar19 * 8 != lVar18);
  }
  FUN_140711be6(*(undefined8 *)(param_1[0x1b] + 0x40),local_88);
  lVar19 = param_1[0x1a];
  *(undefined4 *)(lVar19 + 0x160) = 1;
  *(longlong *)(lVar19 + 0x168) = lVar19;
  FUN_14485c47a(param_1[0x1a] + 0x140,param_1[0x19]);
  lVar19 = param_1[0x1b];
  *(longlong *)(param_1[0x1a] + 0x138) = lVar19;
  *(longlong *)(*(longlong *)(lVar19 + 0x40) + 0x70) = param_1[0x1a] + 0x160;
  FUN_144756766(local_a8,uStack_a0 & 0xffffffff);
  if (local_a8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_140711b04(local_88);
  if ((local_70 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474564b2 FUN_1474564b2 body=210 status=ok
// SIG undefined FUN_1474564b2(void)

void FUN_1474564b2(longlong param_1)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 **local_40;
  undefined1 *local_38;
  longlong *local_30;
  undefined8 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = (undefined8 *)0x0;
  uStack_20 = 1;
  FUN_140711e5c(&local_28,0);
  *local_28 = *(undefined8 *)(param_1 + 0xd8);
  local_30 = &local_48;
  local_38 = &LAB_147457ed2;
  local_48 = param_1;
  local_40 = &local_28;
  FUN_140711b6e(*(undefined8 *)(param_1 + 0x88));
  FUN_14075bef6(*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 200),
                *(undefined8 *)(param_1 + 0xd8));
  if ((*(byte *)(*(longlong *)(param_1 + 0xd0) + 0x3b) & 0x20) != 0) {
    FUN_1409e98c6(*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 200));
  }
  if (local_28 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147456586 FUN_147456586 body=51 status=ok
// SIG undefined FUN_147456586(void)

void FUN_147456586(undefined8 param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  
  FUN_147455fa0();
  if (param_3 != '\0') {
    cVar1 = FUN_147c69bd4();
    if (cVar1 != '\0') {
      return;
    }
  }
  FUN_1406cc378(param_1);
  return;
}



// FUNCTION 1474565ba FUN_1474565ba body=131 status=ok
// SIG undefined FUN_1474565ba(void)

void FUN_1474565ba(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    local_30 = param_1;
    if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_1);
    }
    local_28 = &local_30;
    FUN_14745b176(lVar1 + 0x5a0);
  }
  FUN_14745663e(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14745663e FUN_14745663e body=133 status=ok
// SIG undefined FUN_14745663e(void)

void FUN_14745663e(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    local_30 = param_1;
    if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_1);
    }
    local_28 = &local_30;
    FUN_14745b176(lVar1 + 0x5a0);
  }
  FUN_14067484e(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474566c4 FUN_1474566c4 body=268 status=ok
// SIG undefined FUN_1474566c4(void)

undefined8 FUN_1474566c4(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  code *local_30;
  longlong *local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) goto LAB_147456746;
  puVar2 = *(undefined8 **)(param_1 + 0x6c8);
  if (puVar2 != (undefined8 *)0x0) {
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
  }
  lVar4 = *(longlong *)(param_1 + 0xb0);
  local_20 = puVar2;
  if (lVar4 == 0) {
    lVar4 = FUN_1448abda6(param_1);
    if (lVar4 != 0) goto LAB_147456703;
LAB_147456773:
    puVar3 = *(undefined8 **)(param_1 + 0x6c8);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x6c8) = 0;
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    *(undefined8 *)(param_1 + 0x658) = 0;
    *(undefined8 *)(param_1 + 0x660) = 0;
    FUN_140ad68d4(param_1 + 0x6e8);
    FUN_1406cc378(param_1);
    FUN_140ad6926(param_1,&local_20);
    FUN_1448215fa(param_1);
  }
  else {
LAB_147456703:
    if (*(longlong *)(lVar4 + 0x260) == 0) goto LAB_147456773;
    local_28 = &local_38;
    local_30 = FUN_14324b378;
    local_38 = param_1;
    FUN_140711b6e();
  }
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
LAB_147456746:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474567d2 FUN_1474567d2 body=158 status=ok
// SIG undefined FUN_1474567d2(void)

undefined8 FUN_1474567d2(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x728);
    if (puVar2 != (undefined8 *)0x0) {
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      puVar3 = *(undefined8 **)(param_1 + 0x728);
      if (puVar3 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x728) = 0;
        piVar1 = (int *)(puVar3 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
      *(undefined8 *)(param_1 + 0x718) = 0;
      *(undefined8 *)(param_1 + 0x720) = 0;
      FUN_140ad68d4(param_1 + 0x6e8);
      FUN_1474566c4(param_1);
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return 1;
      }
      (**(code **)*puVar2)(puVar2,1);
      return 1;
    }
    *(undefined8 *)(param_1 + 0x718) = 0;
    *(undefined8 *)(param_1 + 0x720) = 0;
    FUN_140ad68d4(param_1 + 0x6e8);
  }
  FUN_1474566c4(param_1);
  return 1;
}



// FUNCTION 14745687a FUN_14745687a body=219 status=ok
// SIG undefined FUN_14745687a(void)

undefined8 FUN_14745687a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78 [8];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x420);
  if ((lVar1 != 0) && (lVar4 = *(longlong *)(lVar1 + 0x30), lVar4 != 0)) {
    puVar6 = (undefined8 *)(param_1 + -0x68);
    puVar7 = local_78;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    fVar8 = *(float *)(param_1 + 0x394);
    if (*(longlong *)(lVar1 + 0x38) != 0) {
      fVar8 = (fVar8 * (float)*(int *)(param_1 + 0x390)) / (float)*(int *)(param_1 + 0x398);
      lVar4 = *(longlong *)(lVar1 + 0x38);
    }
    dVar2 = (double)fVar8 * (double)local_38._8_8_;
    dVar3 = (double)local_28._8_8_ * 0.0;
    local_38._8_4_ = SUB84(dVar2,0);
    local_38._0_8_ = (double)fVar8 * (double)local_38._0_8_;
    local_38._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    local_28._8_4_ = SUB84(dVar3,0);
    local_28._0_8_ = (double)local_28._0_8_ * 0.0078125;
    local_28._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    (**(code **)(*param_2 + 0x18))(param_2,lVar4);
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 147456956 FUN_147456956 body=201 status=ok
// SIG undefined FUN_147456956(void)

void FUN_147456956(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88 [8];
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(int *)(param_1 + 0x448) != 0) || (*(int *)(param_1 + 0x468) != 0)) {
    local_98 = local_88;
    puVar2 = (undefined8 *)(param_1 + -0x68);
    puVar3 = local_98;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    local_48 = (double)*(float *)(param_1 + 0x394) * local_48;
    dStack_40 = (double)*(float *)(param_1 + 0x394) * dStack_40;
    local_38 = local_38 * 0.0078125;
    dStack_30 = dStack_30 * 0.0;
    local_90 = param_3;
    (**(code **)(*param_2 + 0x20))
              (param_2,param_1 + 0x440,*(undefined4 *)(param_1 + 0x438),
               *(undefined4 *)(param_1 + 0x43c));
  }
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147456a36 FUN_147456a36 body=77 status=ok
// SIG undefined FUN_147456a36(void)

void FUN_147456a36(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1405b572a();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_146cb447a();
      return;
    }
  }
  return;
}



// FUNCTION 147456a84 FUN_147456a84 body=165 status=ok
// SIG undefined FUN_147456a84(void)

undefined8 FUN_147456a84(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78 [8];
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x480);
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + -0x68);
    puVar4 = local_78;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    local_38 = (double)*(float *)(param_1 + 0x394) * local_38;
    dStack_30 = (double)*(float *)(param_1 + 0x394) * dStack_30;
    local_28 = local_28 * 1.0;
    dStack_20 = dStack_20 * 0.0;
    lVar1 = *(longlong *)(lVar1 + 0x30);
    if (lVar1 != 0) {
      (**(code **)(*param_2 + 8))(param_2,lVar1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147456b2a FUN_147456b2a body=68 status=ok
// SIG undefined FUN_147456b2a(void)

void FUN_147456b2a(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_1468be722();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147456b70 FUN_147456b70 body=8 status=ok
// SIG undefined FUN_147456b70(void)

undefined8 FUN_147456b70(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x6a0);
}



// FUNCTION 147456b78 FUN_147456b78 body=195 status=ok
// SIG undefined FUN_147456b78(void)

undefined8 FUN_147456b78(longlong param_1,float param_2,float param_3,int param_4)

{
  int *piVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  double local_20;
  double local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x6c8) != 0) {
    if (param_4 == 1) {
      lVar4 = 0x38;
    }
    else {
      if (param_4 != 2) goto LAB_147456c1d;
      lVar4 = 0x30;
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0x6c8) + lVar4) != 0) {
      local_20 = (double)param_2;
      local_18 = (double)param_3;
      bVar2 = FUN_146d9023e();
      if (bVar2 != 0xff) {
        if ((int)(uint)bVar2 < *(int *)(*(longlong *)(param_1 + 0x6c8) + 0x28)) {
          local_20 = (double)CONCAT44(local_20._4_4_,
                                      *(undefined4 *)
                                       (*(longlong *)(*(longlong *)(param_1 + 0x6c8) + 0x20) +
                                       (ulonglong)bVar2 * 4));
          lVar4 = FUN_14484244a();
          if (((lVar4 != 0) && (piVar1 = *(int **)(lVar4 + 0x58), piVar1 != (int *)0x0)) &&
             (*piVar1 == 2)) {
            uVar3 = *(undefined8 *)(piVar1 + 2);
            goto LAB_147456c1f;
          }
        }
      }
    }
  }
LAB_147456c1d:
  uVar3 = 0;
LAB_147456c1f:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147456c3c FUN_147456c3c body=446 status=ok
// SIG undefined FUN_147456c3c(void)

undefined8 FUN_147456c3c(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  double dVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  lVar2 = *(longlong *)(param_1 + 0x6c8);
  uVar5 = 0;
  if (lVar2 != 0) {
    lVar4 = *(longlong *)(lVar2 + 0x30);
    uVar6 = 0;
    if (lVar4 != 0) {
      uVar5 = (uint)*(ushort *)(lVar4 + 0x92);
      uVar6 = (uint)*(ushort *)(lVar4 + 0x90);
    }
    iVar3 = uVar5 + (uVar5 == 0) + param_3 + ((uVar6 - 1) + (uint)(uVar6 == 0)) * param_4 + -1;
    if ((-1 < iVar3) && (iVar3 < (int)param_2[1])) {
      if (uVar6 == 0) {
        return 1;
      }
      dVar1 = *(double *)(param_1 + 0x290);
      lVar4 = (longlong)param_3 << 2;
      uVar7 = 0;
      do {
        if (uVar5 != 0) {
          uVar8 = 0;
          do {
            dVar9 = (double)FUN_144b04808(*(undefined8 *)(lVar2 + 0x30),uVar8 & 0xffffffff,
                                          uVar7 & 0xffffffff);
            dVar12 = (double)((float)dVar9 * (float)(dVar1 * 0.0078125));
            dVar9 = *(double *)(param_1 + 0x240);
            dVar10 = dVar9 * 0.0 - *(double *)(param_1 + 0x248) * 0.0;
            dVar11 = dVar12 * *(double *)(param_1 + 0x248) - *(double *)(param_1 + 0x250) * 0.0;
            dVar13 = *(double *)(param_1 + 0x250) * 0.0 - dVar9 * dVar12;
            *(float *)(*param_2 + lVar4 + uVar8 * 4) =
                 (float)(((dVar13 + dVar13) * dVar9 -
                         *(double *)(param_1 + 0x248) * (dVar11 + dVar11)) +
                         (dVar10 + dVar10) * *(double *)(param_1 + 600) + dVar12 +
                        *(double *)(param_1 + 0x270));
            uVar8 = uVar8 + 1;
          } while (uVar5 != uVar8);
        }
        uVar7 = uVar7 + 1;
        lVar4 = lVar4 + (longlong)param_4 * 4;
      } while (uVar7 != uVar6);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 147456dfa FUN_147456dfa body=205 status=ok
// SIG undefined FUN_147456dfa(void)

undefined8 FUN_147456dfa(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x6c8);
  uVar5 = 0;
  if (lVar1 != 0) {
    lVar7 = *(longlong *)(lVar1 + 0x30);
    uVar6 = 0;
    if (lVar7 != 0) {
      uVar5 = (uint)*(ushort *)(lVar7 + 0x92);
      uVar6 = (uint)*(ushort *)(lVar7 + 0x90);
    }
    iVar3 = uVar5 + (uVar5 == 0) + param_3 + ((uVar6 - 1) + (uint)(uVar6 == 0)) * param_4 + -1;
    if ((-1 < iVar3) && (iVar3 < (int)param_2[1])) {
      if (uVar6 == 0) {
        return 1;
      }
      lVar7 = (longlong)param_3;
      uVar4 = 0;
      do {
        if (uVar5 != 0) {
          uVar8 = 0;
          do {
            uVar2 = FUN_146d9030a(*(undefined8 *)(lVar1 + 0x30),uVar8 & 0xffffffff,
                                  uVar4 & 0xffffffff);
            *(undefined1 *)(uVar8 + *param_2 + lVar7) = uVar2;
            uVar8 = uVar8 + 1;
          } while (uVar5 != uVar8);
        }
        uVar4 = uVar4 + 1;
        lVar7 = lVar7 + param_4;
      } while (uVar4 != uVar6);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 147456ec8 FUN_147456ec8 body=82 status=ok
// SIG undefined FUN_147456ec8(void)

void FUN_147456ec8(longlong param_1,undefined8 param_2)

{
  FUN_1479f20c4();
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x6b4) + 0x18);
  if (*(longlong *)(param_1 + 0x6c8) != 0) {
    FUN_147455b24(*(longlong *)(param_1 + 0x6c8),param_2);
  }
  FUN_1478cddb6(param_1 + 0x6e8,param_2);
  return;
}



// FUNCTION 147456f1a FUN_147456f1a body=50 status=ok
// SIG undefined FUN_147456f1a(void)

void FUN_147456f1a(longlong param_1,undefined8 param_2)

{
  FUN_147456ec8();
  if (*(longlong *)(param_1 + 0x728) == 0) {
    return;
  }
  FUN_147455e22(*(longlong *)(param_1 + 0x728),param_2);
  return;
}



// FUNCTION 147456f4c FUN_147456f4c body=976 status=ok
// SIG undefined FUN_147456f4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_147456f4c(longlong param_1,double *param_2,undefined4 param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar17;
  undefined1 auVar16 [16];
  double dVar18;
  undefined1 auStack_118 [32];
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined1 local_b8 [16];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar3 = (**(code **)(*(longlong *)(param_1 + 0x390) + 0x18))(param_1 + 0x390);
  if (lVar3 != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x390) + 0x20))(param_1 + 0x390,&local_f8);
    auVar16 = _DAT_149934d80;
    local_d8 = *param_2 - local_d8;
    dStack_d0 = param_2[1] - dStack_d0;
    local_e8 = local_e8 * -1.0;
    dStack_f0 = -dStack_f0;
    dVar18 = local_d8 * local_e8 - -local_f8 * (param_2[2] - local_c8);
    dVar15 = dStack_d0 * -local_f8 - local_d8 * dStack_f0;
    dVar17 = (param_2[2] - local_c8) * dStack_f0 - dStack_d0 * local_e8;
    dVar17 = dVar17 + dVar17;
    dVar18 = dVar18 + dVar18;
    dVar15 = dVar15 + dVar15;
    auVar10 = divpd(_DAT_149934d80,local_b8);
    dVar9 = ((double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_b8._8_8_)) & auVar10._8_8_) *
            (dVar15 * local_f8 + local_e8 * dVar17 + dStack_e0 * 1.0 * dVar18 + dStack_d0)) /
            (double)*(int *)(param_1 + 0x83c);
    iVar8 = (int)ROUND(dVar9 + dVar9 + -0.5) >> 1;
    dVar15 = ((double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_b8._0_8_)) & auVar10._0_8_) *
             ((dVar15 * dStack_f0 - dVar18 * local_e8) + dStack_e0 * 1.0 * dVar17 + local_d8)) /
             (double)*(int *)(param_1 + 0x83c);
    iVar7 = (int)ROUND(dVar15 + dVar15 + -0.5) >> 1;
    uVar2 = FUN_144a78877(iVar7,iVar8);
    if (*(int *)(lVar3 + 0xa8) != *(int *)(lVar3 + 0xd4)) {
      lVar6 = lVar3 + 0xd8;
      if (*(longlong *)(lVar3 + 0xe0) != 0) {
        lVar6 = *(longlong *)(lVar3 + 0xe0);
      }
      iVar5 = *(int *)(lVar6 + (ulonglong)(*(int *)(lVar3 + 0xe8) - 1U & uVar2) * 4);
      if (iVar5 != -1) {
        uVar4 = 0;
        do {
          plVar1 = (longlong *)(*(longlong *)(lVar3 + 0xa0) + (longlong)iVar5 * 0x18);
          if (*plVar1 == CONCAT44(iVar8,iVar7)) {
            if ((plVar1 == (longlong *)0x0) || (lVar3 = plVar1[1], lVar3 == 0)) goto LAB_147457134;
            dVar12 = *param_2 - *(double *)(lVar3 + 0x260);
            dVar13 = param_2[1] - *(double *)(lVar3 + 0x268);
            dVar9 = param_2[2] - *(double *)(lVar3 + 0x270);
            auVar10 = *(undefined1 (*) [16])(lVar3 + 0x280);
            dVar15 = -*(double *)(lVar3 + 0x240);
            dVar14 = -*(double *)(lVar3 + 0x248);
            dVar18 = *(double *)(lVar3 + 0x250) * -1.0;
            dVar11 = *(double *)(lVar3 + 600) * 1.0;
            dVar17 = dVar12 * dVar18 - dVar15 * dVar9;
            dVar15 = dVar13 * dVar15 - dVar12 * dVar14;
            dVar9 = dVar9 * dVar14 - dVar13 * dVar18;
            dVar9 = dVar9 + dVar9;
            dVar17 = dVar17 + dVar17;
            dVar15 = dVar15 + dVar15;
            auVar16 = divpd(auVar16,auVar10);
            uVar4 = FUN_147456b78(lVar3,(float)((double)(-(ulonglong)
                                                          (9.99999993922529e-09 < ABS(auVar10._0_8_)
                                                          ) & auVar16._0_8_) *
                                               ((dVar15 * dVar14 - dVar17 * dVar18) +
                                               dVar11 * dVar9 + dVar12)),
                                  (float)((double)(-(ulonglong)
                                                    (9.99999993922529e-09 < ABS(auVar10._8_8_)) &
                                                  auVar16._8_8_) *
                                         (dVar15 * *(double *)(lVar3 + 0x240) + dVar18 * dVar9 +
                                         dVar11 * dVar17 + dVar13)),param_3);
            break;
          }
          iVar5 = (int)plVar1[2];
        } while (iVar5 != -1);
        goto LAB_147457136;
      }
    }
  }
LAB_147457134:
  uVar4 = 0;
LAB_147457136:
  if ((local_90 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14745731e FUN_14745731e body=42 status=ok
// SIG undefined FUN_14745731e(void)

undefined8 FUN_14745731e(void)

{
  FUN_140033559("Runtime\\Landscape\\Classes\\LandscapeProxy.h",0x457,
                L"Pure virtual not implemented (%s)",L"GetLandscapeActor");
  return 0;
}



// FUNCTION 147457348 FUN_147457348 body=42 status=ok
// SIG undefined FUN_147457348(void)

undefined8 FUN_147457348(void)

{
  FUN_140033559("Runtime\\Landscape\\Classes\\LandscapeProxy.h",0x456,
                L"Pure virtual not implemented (%s)",L"GetLandscapeActor");
  return 0;
}



// FUNCTION 147457374 FUN_147457374 body=38 status=ok
// SIG undefined FUN_147457374(void)

undefined8 FUN_147457374(undefined8 param_1,int param_2)

{
  FUN_147455dae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14745739a FUN_14745739a body=45 status=ok
// SIG undefined FUN_14745739a(void)

longlong FUN_14745739a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140c06c4c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474573c8 FUN_1474573c8 body=48 status=ok
// SIG undefined FUN_1474573c8(void)

longlong FUN_1474573c8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_140c06c4c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474573fc FUN_1474573fc body=48 status=ok
// SIG undefined FUN_1474573fc(void)

longlong FUN_1474573fc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_140c06c4c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14745742c FUN_14745742c body=48 status=ok
// SIG undefined FUN_14745742c(void)

longlong FUN_14745742c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_140c06c4c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14745745c FUN_14745745c body=117 status=ok
// SIG undefined FUN_14745745c(void)

undefined4 FUN_14745745c(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x20) == *(int *)(param_1 + 0x4c))) {
    puVar3 = (undefined4 *)(param_1 + 0x10);
  }
  else {
    lVar1 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x58);
    }
    iVar4 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x60) + 0x7fffffffU & param_2) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x18) + (longlong)iVar4 * 0x10;
        if (*(uint *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar4 * 0x10) == param_2)
        goto LAB_1474574b0;
        iVar4 = *(int *)(lVar1 + 8);
      } while (iVar4 != -1);
    }
    lVar1 = 0;
LAB_1474574b0:
    puVar2 = (undefined4 *)(lVar1 + 4);
    if (lVar1 == 0) {
      puVar2 = (undefined4 *)0x0;
    }
    puVar3 = (undefined4 *)(param_1 + 0x10);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = puVar2;
    }
  }
  return *puVar3;
}



// FUNCTION 1474574d2 FUN_1474574d2 body=138 status=ok
// SIG undefined FUN_1474574d2(void)

code * FUN_1474574d2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InSourceTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000b86;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e99340;
}



// FUNCTION 14745755c FUN_14745755c body=138 status=ok
// SIG undefined FUN_14745755c(void)

code * FUN_14745755c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InMergedTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000bc1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f0a852;
}



// FUNCTION 1474575ea FUN_1474575ea body=230 status=ok
// SIG undefined FUN_1474575ea(void)

void FUN_1474575ea(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_145e990c8();
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1448f70da(*param_4,&DAT_14caa2338,param_5,&local_a8);
  local_a8 = param_5;
  local_98 = *(undefined4 *)param_4;
  uStack_94 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_90 = *(undefined4 *)(param_4 + 1);
  uStack_8c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_88 = *param_6;
  local_80 = param_6[1];
  local_78 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_a0 = param_2;
  FUN_145e990c8();
  FUN_1474576d2(param_1,param_3,param_5,&local_a8);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474576d2 FUN_1474576d2 body=377 status=ok
// SIG undefined FUN_1474576d2(void)

void FUN_1474576d2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar12 = FUN_14321180c(param_2);
  puVar1 = (ulonglong *)(param_1 + 0x70);
  uVar11 = FUN_144a8b328(uVar12,1);
  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar14 + 0x41;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x210);
    puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar14 + 0x41;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14caa2380;
  if (DAT_14caa2380 != 0) {
    LOCK();
    *(int *)(DAT_14caa2380 + 8) = *(int *)(DAT_14caa2380 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14caa2338;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar14,param_2,&local_58,uVar11);
  *puVar14 = &PTR_FUN_14a3c1090;
  uVar12 = param_4[1];
  uVar9 = param_4[2];
  uVar10 = param_4[3];
  puVar14[0x37] = *param_4;
  puVar14[0x38] = uVar12;
  puVar14[0x39] = uVar9;
  puVar14[0x3a] = uVar10;
  puVar14[0x3b] = param_4[4];
  puVar14[0x3c] = param_4[5];
  uVar11 = *(undefined4 *)(param_4 + 6);
  uVar3 = *(undefined4 *)((longlong)param_4 + 0x34);
  uVar4 = *(undefined4 *)(param_4 + 7);
  uVar5 = *(undefined4 *)((longlong)param_4 + 0x3c);
  uVar6 = *(undefined4 *)(param_4 + 8);
  uVar7 = *(undefined4 *)((longlong)param_4 + 0x44);
  uVar8 = *(undefined4 *)(param_4 + 9);
  *(undefined4 *)((longlong)puVar14 + 500) = *(undefined4 *)((longlong)param_4 + 0x3c);
  *(undefined4 *)(puVar14 + 0x3f) = uVar6;
  *(undefined4 *)((longlong)puVar14 + 0x1fc) = uVar7;
  *(undefined4 *)(puVar14 + 0x40) = uVar8;
  *(undefined4 *)(puVar14 + 0x3d) = uVar11;
  *(undefined4 *)((longlong)puVar14 + 0x1ec) = uVar3;
  *(undefined4 *)(puVar14 + 0x3e) = uVar4;
  *(undefined4 *)((longlong)puVar14 + 500) = uVar5;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar14);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14745784c FUN_14745784c body=38 status=ok
// SIG undefined FUN_14745784c(void)

undefined8 FUN_14745784c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147457872 FUN_147457872 body=230 status=ok
// SIG undefined FUN_147457872(void)

void FUN_147457872(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_145f0a5e6();
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1448f70da(*param_4,&DAT_14caa23c0,param_5,&local_a8);
  local_a8 = param_5;
  local_98 = *(undefined4 *)param_4;
  uStack_94 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_90 = *(undefined4 *)(param_4 + 1);
  uStack_8c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_88 = *param_6;
  local_80 = param_6[1];
  local_78 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_a0 = param_2;
  FUN_145f0a5e6();
  FUN_14745795a(param_1,param_3,param_5,&local_a8);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14745795a FUN_14745795a body=377 status=ok
// SIG undefined FUN_14745795a(void)

void FUN_14745795a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar12 = FUN_14321180c(param_2);
  puVar1 = (ulonglong *)(param_1 + 0x70);
  uVar11 = FUN_144a8b328(uVar12,1);
  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar14 + 0x41;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x210);
    puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar14 + 0x41;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14caa2408;
  if (DAT_14caa2408 != 0) {
    LOCK();
    *(int *)(DAT_14caa2408 + 8) = *(int *)(DAT_14caa2408 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14caa23c0;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar14,param_2,&local_58,uVar11);
  *puVar14 = &PTR_FUN_14a3c10b0;
  uVar12 = param_4[1];
  uVar9 = param_4[2];
  uVar10 = param_4[3];
  puVar14[0x37] = *param_4;
  puVar14[0x38] = uVar12;
  puVar14[0x39] = uVar9;
  puVar14[0x3a] = uVar10;
  puVar14[0x3b] = param_4[4];
  puVar14[0x3c] = param_4[5];
  uVar11 = *(undefined4 *)(param_4 + 6);
  uVar3 = *(undefined4 *)((longlong)param_4 + 0x34);
  uVar4 = *(undefined4 *)(param_4 + 7);
  uVar5 = *(undefined4 *)((longlong)param_4 + 0x3c);
  uVar6 = *(undefined4 *)(param_4 + 8);
  uVar7 = *(undefined4 *)((longlong)param_4 + 0x44);
  uVar8 = *(undefined4 *)(param_4 + 9);
  *(undefined4 *)((longlong)puVar14 + 500) = *(undefined4 *)((longlong)param_4 + 0x3c);
  *(undefined4 *)(puVar14 + 0x3f) = uVar6;
  *(undefined4 *)((longlong)puVar14 + 0x1fc) = uVar7;
  *(undefined4 *)(puVar14 + 0x40) = uVar8;
  *(undefined4 *)(puVar14 + 0x3d) = uVar11;
  *(undefined4 *)((longlong)puVar14 + 0x1ec) = uVar3;
  *(undefined4 *)(puVar14 + 0x3e) = uVar4;
  *(undefined4 *)((longlong)puVar14 + 500) = uVar5;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar14);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147457ad4 FUN_147457ad4 body=38 status=ok
// SIG undefined FUN_147457ad4(void)

undefined8 FUN_147457ad4(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147457afa FUN_147457afa body=52 status=ok
// SIG undefined FUN_147457afa(void)

void FUN_147457afa(longlong *param_1)

{
  FUN_147457b2e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147457b2e FUN_147457b2e body=89 status=ok
// SIG undefined FUN_147457b2e(void)

void FUN_147457b2e(longlong param_1)

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



// FUNCTION 147457b88 FUN_147457b88 body=63 status=ok
// SIG undefined FUN_147457b88(void)

undefined8 * FUN_147457b88(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3c1520;
  FUN_145c422f4(param_1 + 0x12);
  FUN_144a7fc42(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147457bc8 FUN_147457bc8 body=104 status=ok
// SIG undefined FUN_147457bc8(void)

void FUN_147457bc8(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78 [22];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1460d8f18();
  FUN_145c422f6(local_78);
  puVar2 = local_78;
  puVar3 = (undefined4 *)(param_1 + 0x90);
  for (lVar1 = 0x16; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_145c422f4(local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147457cf6 FUN_147457cf6 body=154 status=ok
// SIG undefined FUN_147457cf6(void)

undefined8 FUN_147457cf6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar3 = param_3 + 0x70 + lVar7;
      puVar1 = (undefined8 *)(param_2 + lVar7);
      puVar5 = (undefined8 *)(lVar3 + -0x70);
      puVar6 = puVar1;
      for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      lVar3 = *(longlong *)(lVar3 + -8);
      if ((bVar4 & 1) != 0) {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar3 = *(longlong *)(param_3 + 0x68 + lVar7);
          bVar4 = DAT_14c950c29;
        }
      }
      puVar1[0xd] = lVar3;
      puVar1[0xe] = *(undefined8 *)(param_3 + 0x70 + lVar7);
      *(undefined4 *)(puVar1 + 0xf) = *(undefined4 *)(param_3 + 0x78 + lVar7);
      lVar7 = lVar7 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147457db8 FUN_147457db8 body=59 status=ok
// SIG undefined FUN_147457db8(void)

undefined8 FUN_147457db8(longlong *param_1)

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



// FUNCTION 147457e66 FUN_147457e66 body=107 status=ok
// SIG undefined FUN_147457e66(void)

longlong * FUN_147457e66(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_1401f7e9a();
  FUN_14123d74c(uVar2,param_1,1,0x30,uVar1 | 0x90200000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 147457ee8 FUN_147457ee8 body=123 status=ok
// SIG undefined FUN_147457ee8(void)

void FUN_147457ee8(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (longlong *)*param_1;
  FUN_147b9b1ea(param_2);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    plVar2 = (longlong *)*param_1;
    if (plVar2 != local_20) {
      *param_1 = (longlong)local_20;
      if (local_20 != (longlong *)0x0) {
        *(int *)((longlong)local_20 + 0x1c) = *(int *)((longlong)local_20 + 0x1c) + 1;
      }
      if (plVar2 != (longlong *)0x0) {
        piVar1 = (int *)((longlong)plVar2 + 0x1c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x38))();
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147457f64 FUN_147457f64 body=123 status=ok
// SIG undefined FUN_147457f64(void)

void FUN_147457f64(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (longlong *)*param_1;
  FUN_147d117c7(param_2);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    plVar2 = (longlong *)*param_1;
    if (plVar2 != local_20) {
      *param_1 = (longlong)local_20;
      if (local_20 != (longlong *)0x0) {
        *(int *)(local_20 + 3) = (int)local_20[3] + 1;
      }
      if (plVar2 != (longlong *)0x0) {
        plVar1 = plVar2 + 3;
        *(int *)plVar1 = (int)*plVar1 + -1;
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar2 + 0x30))();
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147457fe0 FUN_147457fe0 body=147 status=ok
// SIG undefined FUN_147457fe0(void)

void FUN_147457fe0(longlong param_1,int param_2)

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



// FUNCTION 147458074 FUN_147458074 body=285 status=ok
// SIG undefined FUN_147458074(void)

void FUN_147458074(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  int local_68;
  int local_64;
  longlong local_60;
  longlong local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_3;
  *param_3 = 0;
  lVar3 = param_3[1];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  if ((int)lVar3 == 0) {
    FUN_1474581aa(param_1,param_2);
    if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
    }
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    local_64 = *(int *)(param_1 + 0x10);
    local_68 = *(int *)(param_1 + 0x3c);
    local_60 = param_1 + 0x80;
    *(undefined8 *)(param_1 + 0x80) = param_2;
    local_58 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x88) = lVar2;
    *(int *)(param_1 + 0x90) = (int)lVar3;
    *(undefined4 *)(param_1 + 0x94) = uVar1;
    FUN_147458428(param_1 + 8,local_4c,&local_60,0);
    if (local_64 == local_68) {
      FUN_140f9708a(&DAT_14c9647b8,param_1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474581aa FUN_1474581aa body=161 status=ok
// SIG undefined FUN_1474581aa(void)

void FUN_1474581aa(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x80) = param_2;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
    param_2 = *(undefined8 *)(param_1 + 0x80);
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x3c);
  FUN_14745824c(param_1 + 8,param_2);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x3c);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if ((iVar2 < iVar1) && (iVar3 == iVar4)) {
    FUN_140f93338(&DAT_14c9647b8,param_1);
    return;
  }
  return;
}



// FUNCTION 14745824c FUN_14745824c body=154 status=ok
// SIG undefined FUN_14745824c(void)

undefined8 FUN_14745824c(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_1474582e6(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1474582e6 FUN_1474582e6 body=96 status=ok
// SIG undefined FUN_1474582e6(void)

void FUN_1474582e6(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_147458346(param_1,param_2,1);
  return;
}



// FUNCTION 147458346 FUN_147458346 body=87 status=ok
// SIG undefined FUN_147458346(void)

void FUN_147458346(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)((longlong)param_2 * 0x20 + *param_1 + 8);
    iVar1 = param_3;
    do {
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      plVar2 = plVar2 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_14745839e(param_1,param_2,param_3);
  return;
}



// FUNCTION 14745839e FUN_14745839e body=138 status=ok
// SIG undefined FUN_14745839e(void)

void FUN_14745839e(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147458428 FUN_147458428 body=340 status=ok
// SIG undefined FUN_147458428(void)

undefined4 *
FUN_147458428(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14745857e(param_1,local_50);
  FUN_147458720(param_3,local_48);
  *(undefined4 *)(local_48 + 3) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = ((uint)(*local_48 >> 0x14) & 0xffff ^ (uint)(*local_48 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_68 = param_4;
  cVar1 = FUN_147458664(param_1,uVar2,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_48 + 0x1c) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 3) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_147458802(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14745857e FUN_14745857e body=229 status=ok
// SIG undefined FUN_14745857e(void)

int * FUN_14745857e(longlong *param_1,int *param_2)

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



// FUNCTION 147458664 FUN_147458664 body=187 status=ok
// SIG undefined FUN_147458664(void)

void FUN_147458664(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_14745839e(param_1,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_1474586d7;
        }
        iVar8 = puVar1[6];
      } while (iVar8 != -1);
    }
  }
  uVar6 = 0;
LAB_1474586d7:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 147458720 FUN_147458720 body=109 status=ok
// SIG undefined FUN_147458720(void)

undefined8 * FUN_147458720(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  puVar2 = (undefined8 *)param_1[1];
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  }
  else {
    FUN_14745878e(param_2 + 1,iVar1,0);
    memcpy((void *)param_2[1],_Src,(longlong)iVar1 * 0x18);
  }
  return param_2;
}



// FUNCTION 14745878e FUN_14745878e body=115 status=ok
// SIG undefined FUN_14745878e(void)

void FUN_14745878e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147458802 FUN_147458802 body=477 status=ok
// SIG undefined FUN_147458802(void)

void FUN_147458802(longlong *param_1)

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



// FUNCTION 1474589e0 FUN_1474589e0 body=307 status=ok
// SIG undefined FUN_1474589e0(void)

void FUN_1474589e0(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar12 = (longlong)(int)uVar1;
  if (lVar12 != 0) {
    plVar2 = (longlong *)*param_1;
    lVar3 = *(longlong *)*param_2;
    if ((lVar3 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar3);
    }
    iVar9 = 0;
    uVar10 = 0;
    bVar5 = *plVar2 == lVar3;
    do {
      iVar4 = (int)uVar10;
      uVar11 = uVar10;
      uVar7 = uVar10;
      uVar6 = iVar4 + 1U;
      if ((int)(iVar4 + 1U) < (int)uVar1) {
        uVar6 = uVar1;
      }
      do {
        uVar7 = uVar7 + 1;
        if (lVar12 <= (longlong)uVar7) {
          uVar11 = (ulonglong)uVar6;
          break;
        }
        lVar3 = *(longlong *)*param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
        }
        uVar11 = (ulonglong)((int)uVar11 + 1);
      } while (bVar5 == (plVar2[uVar7] == lVar3));
      if (bVar5 == false) {
        iVar8 = (int)uVar11 - iVar4;
        if (iVar9 != iVar4) {
          memmove(plVar2 + iVar9,plVar2 + uVar10,(longlong)iVar8 << 3);
        }
        iVar9 = iVar9 + iVar8;
      }
      uVar10 = uVar11;
      bVar5 = (bool)(bVar5 ^ 1);
    } while ((longlong)uVar7 < lVar12);
    *(int *)(param_1 + 1) = iVar9;
  }
  return;
}



// FUNCTION 147458b13 FUN_147458b13 body=82 status=ok
// SIG undefined FUN_147458b13(void)

void FUN_147458b13(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if ((lVar1 != 0) && ((bVar2 & 1) != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 147458b66 FUN_147458b66 body=229 status=ok
// SIG undefined FUN_147458b66(void)

int * FUN_147458b66(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 147458c4c FUN_147458c4c body=477 status=ok
// SIG undefined FUN_147458c4c(void)

void FUN_147458c4c(longlong *param_1)

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



// FUNCTION 147458e2a FUN_147458e2a body=47 status=ok
// SIG undefined FUN_147458e2a(void)

longlong FUN_147458e2a(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147458e5a FUN_147458e5a body=326 status=ok
// SIG undefined FUN_147458e5a(void)

undefined4 * FUN_147458e5a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
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
  FUN_147458fa2(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_147459088(param_1,uVar4,local_40,&local_4c);
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
      FUN_14745917a(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147458fa2 FUN_147458fa2 body=230 status=ok
// SIG undefined FUN_147458fa2(void)

int * FUN_147458fa2(longlong *param_1,int *param_2)

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



// FUNCTION 147459088 FUN_147459088 body=128 status=ok
// SIG undefined FUN_147459088(void)

undefined8 FUN_147459088(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_147459108((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 147459108 FUN_147459108 body=114 status=ok
// SIG undefined FUN_147459108(void)

void FUN_147459108(longlong *param_1,int param_2)

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



// FUNCTION 14745917a FUN_14745917a body=474 status=ok
// SIG undefined FUN_14745917a(void)

void FUN_14745917a(longlong *param_1)

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



// FUNCTION 147459356 FUN_147459356 body=29 status=ok
// SIG undefined FUN_147459356(void)

undefined8 FUN_147459356(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147459374 FUN_147459374 body=29 status=ok
// SIG undefined FUN_147459374(void)

undefined8 FUN_147459374(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147459391 FUN_147459391 body=69 status=ok
// SIG undefined FUN_147459391(void)

void FUN_147459391(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x98;
    do {
      *(undefined4 *)(param_1 + 0x48) = 0;
      if (*(longlong *)(param_1 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_1474593d6(param_1);
      param_1 = param_1 + 0xf0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1474593d6 FUN_1474593d6 body=54 status=ok
// SIG undefined FUN_1474593d6(void)

void FUN_1474593d6(longlong *param_1)

{
  FUN_14745940c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14745940c FUN_14745940c body=128 status=ok
// SIG undefined FUN_14745940c(void)

void FUN_14745940c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14494313c(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 14745948e FUN_14745948e body=102 status=ok
// SIG undefined FUN_14745948e(void)

undefined8 FUN_14745948e(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0xf0,0x10);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0x8888888888888889),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0xf0)) {
    uVar4 = uVar2 / 0xf0 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0xf0,0x10);
  }
  return uVar3;
}



// FUNCTION 1474594f4 FUN_1474594f4 body=146 status=ok
// SIG undefined FUN_1474594f4(void)

void FUN_1474594f4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xf0,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xf0)) {
      uVar5 = uVar4 / 0xf0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xf0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147459588 FUN_147459588 body=325 status=ok
// SIG undefined FUN_147459588(void)

undefined4 * FUN_147459588(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
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
  FUN_1474596ce(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  local_40[2] = puVar1[1];
  local_40[3] = puVar1[2];
  *(int *)(local_40 + 4) = (int)puVar1[3];
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = FUN_144a78877(uVar6,uVar6 >> 0x20);
  cVar3 = FUN_1474597bc(param_1,uVar4,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x2c) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 5) =
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
      FUN_1474598ce(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474596ce FUN_1474596ce body=238 status=ok
// SIG undefined FUN_1474596ce(void)

int * FUN_1474596ce(longlong *param_1,int *param_2)

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
      FUN_140044672(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x30) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 1474597bc FUN_1474597bc body=151 status=ok
// SIG undefined FUN_1474597bc(void)

undefined8 FUN_1474597bc(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar11 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar11 * 0x30);
        if (*(longlong *)(*param_1 + (longlong)iVar11 * 0x30) == *param_3) {
          lVar6 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar8 = param_3[2];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar9 = param_3[3];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(longlong *)(puVar1 + 8) = param_3[4];
          puVar1[4] = (int)lVar8;
          puVar1[5] = uVar4;
          puVar1[6] = (int)lVar9;
          puVar1[7] = uVar5;
          *puVar1 = (int)lVar6;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar7;
          puVar1[3] = uVar3;
          FUN_147459854((int)lVar6,*param_4);
          *param_4 = iVar11;
          return 1;
        }
        iVar11 = puVar1[10];
      } while (iVar11 != -1);
    }
  }
  return 0;
}



// FUNCTION 147459854 FUN_147459854 body=122 status=ok
// SIG undefined FUN_147459854(void)

void FUN_147459854(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
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



// FUNCTION 1474598ce FUN_1474598ce body=452 status=ok
// SIG undefined FUN_1474598ce(void)

void FUN_1474598ce(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
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
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
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
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x30;
        iVar6 = FUN_144a78877(*(ulonglong *)(lVar3 + lVar10),*(ulonglong *)(lVar3 + lVar10) >> 0x20)
        ;
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x2c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147459a94 FUN_147459a94 body=101 status=ok
// SIG undefined FUN_147459a94(void)

undefined8 FUN_147459a94(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0xf0,0x10);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0x8888888888888889),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0xf0)) {
    uVar5 = uVar2 / 0xf0 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0xf0,0x10);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 147459af9 FUN_147459af9 body=157 status=ok
// SIG undefined FUN_147459af9(void)

void FUN_147459af9(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x98);
  param_2 = param_2 + 0x98;
  do {
    memcpy(puVar1 + -0x13,(void *)(param_2 + -0x98),0x98);
    puVar1[4] = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x2c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    FUN_147459b96(puVar1,param_2);
    puVar1 = puVar1 + 0x1e;
    param_2 = param_2 + 0xf0;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 147459b96 FUN_147459b96 body=122 status=ok
// SIG undefined FUN_147459b96(void)

longlong FUN_147459b96(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_147459c10(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147459c10 FUN_147459c10 body=238 status=ok
// SIG undefined FUN_147459c10(void)

longlong * FUN_147459c10(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14745940c(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_140044672(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar4 = 0;
      uVar5 = 0;
      do {
        plVar6 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar6 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar6 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar4) = *(undefined4 *)(lVar2 + lVar4);
          *(undefined4 *)(lVar3 + 4 + lVar4) = *(undefined4 *)(lVar2 + 4 + lVar4);
        }
        else {
          *(undefined8 *)(lVar3 + lVar4) = *(undefined8 *)(lVar2 + lVar4);
          *(undefined8 *)(lVar3 + 8 + lVar4) = *(undefined8 *)(lVar2 + 8 + lVar4);
          *(undefined8 *)(lVar3 + 0x10 + lVar4) = *(undefined8 *)(lVar2 + 0x10 + lVar4);
          *(undefined8 *)(lVar3 + 0x18 + lVar4) = *(undefined8 *)(lVar2 + 0x18 + lVar4);
          *(undefined4 *)(lVar3 + 0x20 + lVar4) = *(undefined4 *)(lVar2 + 0x20 + lVar4);
          *(undefined8 *)(lVar3 + 0x28 + lVar4) = *(undefined8 *)(lVar2 + 0x28 + lVar4);
        }
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x30;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 147459cfe FUN_147459cfe body=29 status=ok
// SIG undefined FUN_147459cfe(void)

undefined8 FUN_147459cfe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147459d1c FUN_147459d1c body=230 status=ok
// SIG undefined FUN_147459d1c(void)

void FUN_147459d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_145e604fa();
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1448f70da(*param_4,&DAT_14caa2448,param_5,&local_a8);
  local_a8 = param_5;
  local_98 = *(undefined4 *)param_4;
  uStack_94 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_90 = *(undefined4 *)(param_4 + 1);
  uStack_8c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_88 = *param_6;
  local_80 = param_6[1];
  local_78 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_a0 = param_2;
  FUN_145e604fa();
  FUN_147459e04(param_1,param_3,param_5,&local_a8);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147459e04 FUN_147459e04 body=377 status=ok
// SIG undefined FUN_147459e04(void)

void FUN_147459e04(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar12 = FUN_14321180c(param_2);
  puVar1 = (ulonglong *)(param_1 + 0x70);
  uVar11 = FUN_144a8b328(uVar12,1);
  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar14 + 0x41;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x210);
    puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar14 + 0x41;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14caa2490;
  if (DAT_14caa2490 != 0) {
    LOCK();
    *(int *)(DAT_14caa2490 + 8) = *(int *)(DAT_14caa2490 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14caa2448;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar14,param_2,&local_58,uVar11);
  *puVar14 = &PTR_FUN_14a3c12e0;
  uVar12 = param_4[1];
  uVar9 = param_4[2];
  uVar10 = param_4[3];
  puVar14[0x37] = *param_4;
  puVar14[0x38] = uVar12;
  puVar14[0x39] = uVar9;
  puVar14[0x3a] = uVar10;
  puVar14[0x3b] = param_4[4];
  puVar14[0x3c] = param_4[5];
  uVar11 = *(undefined4 *)(param_4 + 6);
  uVar3 = *(undefined4 *)((longlong)param_4 + 0x34);
  uVar4 = *(undefined4 *)(param_4 + 7);
  uVar5 = *(undefined4 *)((longlong)param_4 + 0x3c);
  uVar6 = *(undefined4 *)(param_4 + 8);
  uVar7 = *(undefined4 *)((longlong)param_4 + 0x44);
  uVar8 = *(undefined4 *)(param_4 + 9);
  *(undefined4 *)((longlong)puVar14 + 500) = *(undefined4 *)((longlong)param_4 + 0x3c);
  *(undefined4 *)(puVar14 + 0x3f) = uVar6;
  *(undefined4 *)((longlong)puVar14 + 0x1fc) = uVar7;
  *(undefined4 *)(puVar14 + 0x40) = uVar8;
  *(undefined4 *)(puVar14 + 0x3d) = uVar11;
  *(undefined4 *)((longlong)puVar14 + 0x1ec) = uVar3;
  *(undefined4 *)(puVar14 + 0x3e) = uVar4;
  *(undefined4 *)((longlong)puVar14 + 500) = uVar5;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar14);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147459f7e FUN_147459f7e body=38 status=ok
// SIG undefined FUN_147459f7e(void)

undefined8 FUN_147459f7e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147459fa4 FUN_147459fa4 body=114 status=ok
// SIG undefined FUN_147459fa4(void)

void FUN_147459fa4(longlong *param_1,int param_2)

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



// FUNCTION 14745a016 FUN_14745a016 body=411 status=ok
// SIG undefined FUN_14745a016(void)

void FUN_14745a016(longlong *param_1,uint param_2)

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
      FUN_144727cd0(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_14482b872(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0x18 + -0x14);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar8 + -1;
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
        puVar5 = puVar5 + -6;
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



// FUNCTION 14745a1b2 FUN_14745a1b2 body=96 status=ok
// SIG undefined FUN_14745a1b2(void)

void FUN_14745a1b2(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_14745a212(param_1,param_2,1);
  return;
}



// FUNCTION 14745a212 FUN_14745a212 body=138 status=ok
// SIG undefined FUN_14745a212(void)

void FUN_14745a212(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14745a29c FUN_14745a29c body=52 status=ok
// SIG undefined FUN_14745a29c(void)

void FUN_14745a29c(longlong *param_1)

{
  FUN_14745a2d0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14745a2d0 FUN_14745a2d0 body=89 status=ok
// SIG undefined FUN_14745a2d0(void)

void FUN_14745a2d0(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
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



// FUNCTION 14745a32a FUN_14745a32a body=312 status=ok
// SIG undefined FUN_14745a32a(void)

undefined4 * FUN_14745a32a(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14745a464(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_14745a54a(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14745a638(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14745a464 FUN_14745a464 body=229 status=ok
// SIG undefined FUN_14745a464(void)

int * FUN_14745a464(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 14745a54a FUN_14745a54a body=124 status=ok
// SIG undefined FUN_14745a54a(void)

undefined8 FUN_14745a54a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
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
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_14745a5c6(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14745a5c6 FUN_14745a5c6 body=114 status=ok
// SIG undefined FUN_14745a5c6(void)

void FUN_14745a5c6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 14745a638 FUN_14745a638 body=477 status=ok
// SIG undefined FUN_14745a638(void)

void FUN_14745a638(longlong *param_1)

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



// FUNCTION 14745a816 FUN_14745a816 body=48 status=ok
// SIG undefined FUN_14745a816(void)

void FUN_14745a816(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14745a846 FUN_14745a846 body=332 status=ok
// SIG undefined FUN_14745a846(void)

undefined4 *
FUN_14745a846(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147458b66(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_68 = param_4;
  cVar1 = FUN_14745a994(param_1,uVar2,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_48 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_147458c4c(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14745a994 FUN_14745a994 body=144 status=ok
// SIG undefined FUN_14745a994(void)

void FUN_14745a994(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *plVar2 = *param_3;
          FUN_14745a212(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_14745a9ff;
        }
        iVar3 = (int)plVar2[1];
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_14745a9ff:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 14745aa24 FUN_14745aa24 body=58 status=ok
// SIG undefined FUN_14745aa24(void)

void FUN_14745aa24(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    return;
  }
  FUN_145bf0f7a(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 14745aa5e FUN_14745aa5e body=255 status=ok
// SIG undefined FUN_14745aa5e(void)

void FUN_14745aa5e(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  longlong lVar5;
  
  if (DAT_14caa22f0 != DAT_14caa231c) {
    iVar1 = FUN_1447addd0(param_1,0x10);
    puVar3 = &DAT_14caa2320;
    if (DAT_14caa2328 != (undefined *)0x0) {
      puVar3 = DAT_14caa2328;
    }
    iVar1 = *(int *)(puVar3 + ((longlong)iVar1 & (longlong)DAT_14caa2330 - 1U) * 4);
    if (iVar1 != -1) {
      do {
        lVar5 = (longlong)iVar1 * 0x20;
        if ((((*(int *)(DAT_14caa22e8 + lVar5) == *param_1) &&
             (*(int *)(DAT_14caa22e8 + 4 + lVar5) == param_1[1])) &&
            (*(int *)(DAT_14caa22e8 + 8 + lVar5) == param_1[2])) &&
           (*(int *)(DAT_14caa22e8 + 0xc + lVar5) == param_1[3])) {
          puVar3 = &DAT_14caa2320;
          if (DAT_14caa2328 != (undefined *)0x0) {
            puVar3 = DAT_14caa2328;
          }
          lVar5 = (longlong)*(int *)(DAT_14caa22e8 + 0x1c + (longlong)iVar1 * 0x20);
          iVar4 = *(int *)(puVar3 + lVar5 * 4);
          if (iVar4 == iVar1) {
            puVar2 = (undefined4 *)(puVar3 + lVar5 * 4);
          }
          else {
            do {
              lVar5 = (longlong)iVar4;
              iVar4 = *(int *)(DAT_14caa22e8 + 0x18 + lVar5 * 0x20);
            } while (iVar4 != iVar1);
            puVar2 = (undefined4 *)(DAT_14caa22e8 + lVar5 * 0x20 + 0x18);
          }
          *puVar2 = *(undefined4 *)(DAT_14caa22e8 + (longlong)iVar1 * 0x20 + 0x18);
          FUN_14745ab5e();
          return;
        }
        iVar1 = *(int *)(lVar5 + DAT_14caa22e8 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14745ab5e FUN_14745ab5e body=128 status=ok
// SIG undefined FUN_14745ab5e(void)

void FUN_14745ab5e(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14caa22e8;
  if (DAT_14caa231c != 0) {
    *(int *)(DAT_14caa22e8 + (longlong)DAT_14caa2318 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14caa231c) {
    iVar4 = DAT_14caa2318;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x20) = iVar4;
  DAT_14caa231c = DAT_14caa231c + 1;
  puVar3 = &DAT_14caa22f8;
  if (DAT_14caa2308 != (undefined *)0x0) {
    puVar3 = DAT_14caa2308;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14caa2318 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 14745abde FUN_14745abde body=130 status=ok
// SIG undefined FUN_14745abde(void)

void FUN_14745abde(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (param_2 <= (int)uVar1) {
    uVar5 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x14) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar4 = (longlong)(int)uVar2;
      }
      else {
        lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 >> 3)) {
        uVar5 = uVar3 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x14) = (int)uVar5;
    FUN_14032472c(param_1,param_2,uVar5,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14745ac62 FUN_14745ac62 body=130 status=ok
// SIG undefined FUN_14745ac62(void)

int FUN_14745ac62(uint param_1,int *param_2)

{
  int iVar1;
  undefined *puVar2;
  longlong lVar3;
  
  if (DAT_14caa22f0 != DAT_14caa231c) {
    puVar2 = &DAT_14caa2320;
    if (DAT_14caa2328 != (undefined *)0x0) {
      puVar2 = DAT_14caa2328;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)(DAT_14caa2330 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = (longlong)iVar1 * 0x20;
        if ((((*(int *)(DAT_14caa22e8 + lVar3) == *param_2) &&
             (*(int *)(DAT_14caa22e8 + 4 + lVar3) == param_2[1])) &&
            (*(int *)(DAT_14caa22e8 + 8 + lVar3) == param_2[2])) &&
           (*(int *)(DAT_14caa22e8 + 0xc + lVar3) == param_2[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar3 + DAT_14caa22e8 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 14745ace4 FUN_14745ace4 body=317 status=ok
// SIG undefined FUN_14745ace4(void)

undefined4 * FUN_14745ace4(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined4 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14745ae22(local_40);
  puVar1 = (undefined4 *)*param_2;
  puVar2 = (undefined8 *)param_2[1];
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  *local_38 = *puVar1;
  local_38[1] = uVar4;
  local_38[2] = uVar5;
  local_38[3] = uVar6;
  *(undefined8 *)(local_38 + 4) = *puVar2;
  local_38[6] = 0xffffffff;
  local_44 = local_40[0];
  uVar8 = FUN_1447addd0(local_38,0x10);
  cVar7 = FUN_14745af30(uVar8,local_38,&local_44);
  uVar4 = local_44;
  if (cVar7 == '\0') {
    uVar9 = DAT_14caa22f0 - DAT_14caa231c;
    iVar12 = 1;
    if (3 < uVar9) {
      uVar11 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar12 <= DAT_14caa2330)) {
      uVar8 = DAT_14caa2330 - 1U & uVar8;
      local_38[7] = uVar8;
      puVar10 = DAT_14caa2328;
      if (DAT_14caa2328 == (undefined *)0x0) {
        puVar10 = &DAT_14caa2320;
      }
      local_38[6] = *(undefined4 *)
                     (puVar10 + ((longlong)DAT_14caa2330 - 1U & (longlong)(int)uVar8) * 4);
      puVar10 = DAT_14caa2328;
      if (DAT_14caa2328 == (undefined *)0x0) {
        puVar10 = &DAT_14caa2320;
      }
      *(undefined4 *)(puVar10 + ((longlong)DAT_14caa2330 - 1U & (longlong)(int)uVar8) * 4) =
           local_44;
    }
    else {
      DAT_14caa2330 = iVar12;
      FUN_14745af90();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14745ae22 FUN_14745ae22 body=269 status=ok
// SIG undefined FUN_14745ae22(void)

int * FUN_14745ae22(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14caa2318;
  iVar4 = DAT_14caa22f0;
  if (DAT_14caa231c == 0) {
    iVar2 = DAT_14caa22f0 + 1;
    bVar7 = DAT_14caa22f4 == DAT_14caa22f0;
    DAT_14caa22f0 = iVar2;
    if (bVar7) {
      FUN_1447711aa(&DAT_14caa22e8,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14caa22f8,1);
    puVar3 = DAT_14caa2308;
    if (DAT_14caa2308 == (undefined *)0x0) {
      puVar3 = &DAT_14caa22f8;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14caa2318;
    DAT_14caa2318 = *(int *)(DAT_14caa22e8 + 4 + lVar6 * 0x20);
    DAT_14caa231c = DAT_14caa231c + -1;
    iVar4 = iVar2;
    if (DAT_14caa231c != 0) {
      *(undefined4 *)(DAT_14caa22e8 + (longlong)DAT_14caa2318 * 0x20) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14caa22f8;
  if (DAT_14caa2308 != (undefined *)0x0) {
    puVar3 = DAT_14caa2308;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x20 + DAT_14caa22e8;
  return param_1;
}



// FUNCTION 14745af30 FUN_14745af30 body=95 status=ok
// SIG undefined FUN_14745af30(void)

undefined8 FUN_14745af30(undefined8 param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  
  if ((DAT_14caa22f0 - DAT_14caa231c != 1) &&
     (iVar7 = FUN_14745ac62(), lVar6 = DAT_14caa22e8, iVar7 != -1)) {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *(undefined8 *)(DAT_14caa22e8 + 0x10 + (longlong)iVar7 * 0x20) = *(undefined8 *)(param_2 + 4);
    puVar1 = (undefined4 *)(lVar6 + (longlong)iVar7 * 0x20);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_14745ab5e(*param_3);
    *param_3 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 14745af90 FUN_14745af90 body=485 status=ok
// SIG undefined FUN_14745af90(void)

void FUN_14745af90(void)

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
  undefined *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14caa2328 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14caa2328,0,0,4);
  }
  uVar2 = DAT_14caa2330;
  uVar3 = local_60;
  if (DAT_14caa2330 != 0) {
    uVar8 = 0;
    FUN_144a1cbf0(&DAT_14caa2320,0,DAT_14caa2330,4);
    if (0 < (int)uVar2) {
      do {
        puVar7 = DAT_14caa2328;
        if (DAT_14caa2328 == (undefined *)0x0) {
          puVar7 = &DAT_14caa2320;
        }
        *(undefined4 *)(puVar7 + (ulonglong)(DAT_14caa2330 + 0x7fffffff & uVar8) * 4) = 0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_50 = 0x100000000;
    local_48 = &DAT_14caa22f8;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (DAT_14caa2310 != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = &DAT_14caa22e8;
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar3 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if (local_60._4_4_ < *(int *)(local_48 + 0x18)) {
      iVar4 = local_60._4_4_;
      local_60 = uVar3;
      do {
        lVar1 = *local_78;
        lVar9 = (longlong)iVar4 * 0x20;
        iVar5 = FUN_1447addd0(lVar1 + lVar9,0x10);
        uVar6 = (longlong)iVar5 & (longlong)(int)DAT_14caa2330 - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar1 + 0x1c + lVar9) = iVar5;
        puVar7 = DAT_14caa2328;
        if (DAT_14caa2328 == (undefined *)0x0) {
          puVar7 = &DAT_14caa2320;
        }
        *(undefined4 *)(lVar1 + 0x18 + lVar9) =
             *(undefined4 *)(puVar7 + ((longlong)(int)DAT_14caa2330 - 1U & uVar6) * 4);
        puVar7 = DAT_14caa2328;
        if (DAT_14caa2328 == (undefined *)0x0) {
          puVar7 = &DAT_14caa2320;
        }
        *(int *)(puVar7 + ((longlong)iVar5 & (longlong)(int)DAT_14caa2330 - 1U) * 4) = iVar4;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar3 = local_60;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
    }
  }
  local_60 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14745b176 FUN_14745b176 body=307 status=ok
// SIG undefined FUN_14745b176(void)

void FUN_14745b176(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar12 = (longlong)(int)uVar1;
  if (lVar12 != 0) {
    plVar2 = (longlong *)*param_1;
    lVar3 = *(longlong *)*param_2;
    if ((lVar3 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar3);
    }
    iVar9 = 0;
    uVar10 = 0;
    bVar5 = *plVar2 == lVar3;
    do {
      iVar4 = (int)uVar10;
      uVar11 = uVar10;
      uVar7 = uVar10;
      uVar6 = iVar4 + 1U;
      if ((int)(iVar4 + 1U) < (int)uVar1) {
        uVar6 = uVar1;
      }
      do {
        uVar7 = uVar7 + 1;
        if (lVar12 <= (longlong)uVar7) {
          uVar11 = (ulonglong)uVar6;
          break;
        }
        lVar3 = *(longlong *)*param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
        }
        uVar11 = (ulonglong)((int)uVar11 + 1);
      } while (bVar5 == (plVar2[uVar7] == lVar3));
      if (bVar5 == false) {
        iVar8 = (int)uVar11 - iVar4;
        if (iVar9 != iVar4) {
          memmove(plVar2 + iVar9,plVar2 + uVar10,(longlong)iVar8 << 3);
        }
        iVar9 = iVar9 + iVar8;
      }
      uVar10 = uVar11;
      bVar5 = (bool)(bVar5 ^ 1);
    } while ((longlong)uVar7 < lVar12);
    *(int *)(param_1 + 1) = iVar9;
  }
  return;
}



// FUNCTION 14745b2aa FUN_14745b2aa body=73 status=ok
// SIG undefined FUN_14745b2aa(void)

void FUN_14745b2aa(ulonglong *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = ((uint)(*param_1 >> 0x14) & 0xffff ^ (uint)(*param_1 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar2 = FUN_144a78877((char)param_1[1],uVar1 >> 0x10 ^ uVar1);
  FUN_144a78877(*(undefined1 *)((longlong)param_1 + 9),uVar2);
  return;
}



// FUNCTION 14745b2f4 FUN_14745b2f4 body=25 status=ok
// SIG undefined FUN_14745b2f4(void)

char FUN_14745b2f4(void)

{
  char cVar1;
  
  cVar1 = FUN_1448e5c9e();
  return (cVar1 != '\x02') + '\x01';
}



// FUNCTION 14745b30e FUN_14745b30e body=392 status=ok
// SIG undefined FUN_14745b30e(void)

void FUN_14745b30e(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  undefined1 auStack_118 [32];
  longlong local_f8;
  ulonglong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  longlong local_d0;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_4c = 0x11;
  local_f8 = param_1 + 0x10;
  local_e8 = *(undefined8 *)(param_1 + 0x140);
  bVar1 = *(byte *)(param_1 + 0x14d);
  bVar2 = *(byte *)(param_1 + 0x14f);
  local_e0._0_6_ = (uint6)CONCAT14(bVar1,*(undefined4 *)(param_1 + 0x148));
  local_e0._0_7_ = CONCAT16(bVar2,(uint6)local_e0);
  local_e0 = (ulonglong)(uint7)local_e0;
  bVar3 = *(byte *)(param_1 + 0x14e);
  bVar4 = *(byte *)(param_1 + 0x14c);
  uVar8 = FUN_14472dff0();
  bVar5 = *(byte *)(param_1 + 0x15d);
  bVar6 = *(byte *)(param_1 + 0x15f);
  bVar7 = *(byte *)(param_1 + 0x15e);
  local_f0 = (ulonglong)*(byte *)(param_1 + 0x15c);
  local_e8 = *(undefined8 *)(param_1 + 0x150);
  local_d8 = (ulonglong)(uVar8 & 0xff) |
             (ulonglong)bVar4 << 8 |
             (ulonglong)bVar3 << 0x10 | (ulonglong)bVar1 << 0x20 | (ulonglong)(bVar2 & 1) << 0x30;
  local_e0._0_6_ = (uint6)CONCAT14(bVar5,*(undefined4 *)(param_1 + 0x158));
  local_e0._0_7_ = CONCAT16(bVar6,(uint6)local_e0);
  local_e0 = (ulonglong)(uint7)local_e0;
  uVar8 = FUN_14472dff0(local_f8,&local_e8);
  local_50 = 2;
  local_d0 = (ulonglong)(uVar8 & 0xff) +
             ((ulonglong)(uint)((int)local_f0 << 8) |
             (ulonglong)bVar7 << 0x10 | (ulonglong)bVar5 << 0x20 | (ulonglong)(bVar6 & 1) << 0x30) +
             0x1000000;
  FUN_1447f9616(param_1,&local_d8,0);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14745b4a0 FUN_14745b4a0 body=81 status=ok
// SIG undefined FUN_14745b4a0(void)

bool FUN_14745b4a0(longlong *param_1)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  bool bVar4;
  
  if (((char)param_1[1] == '\x01') && (lVar1 = *param_1, lVar1 != 0)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar3 = 0;
    }
    else {
      bVar2 = FUN_144a61b4f();
      uVar3 = (ulonglong)(bVar2 ^ 1);
    }
    bVar4 = *(int *)(lVar1 + uVar3 * 4) != 0;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}



// FUNCTION 14745b4f2 FUN_14745b4f2 body=50 status=ok
// SIG undefined FUN_14745b4f2(void)

void FUN_14745b4f2(longlong param_1,undefined8 param_2)

{
  FUN_14006bf18();
  FUN_14006bf18(param_1 + 0x10,param_2);
  FUN_14006bf18(param_1 + 0x28,param_2);
  return;
}



// FUNCTION 14745b524 FUN_14745b524 body=39 status=ok
// SIG undefined FUN_14745b524(void)

void FUN_14745b524(longlong param_1)

{
  FUN_144725486();
  FUN_144725486(param_1 + 0x10);
  FUN_144725486(param_1 + 0x28);
  return;
}



// FUNCTION 14745b54c FUN_14745b54c body=1216 status=ok
// SIG undefined FUN_14745b54c(void)

void FUN_14745b54c(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  undefined1 *puVar8;
  short *psVar9;
  int iVar10;
  short sVar11;
  int iVar12;
  longlong *plVar13;
  short sVar14;
  int iVar15;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_58 = L"FLandscapeTileMeshVertexBuffer";
  local_50 = 0;
  uStack_48 = 0;
  local_94 = 0x400000064;
  local_8c = 0x4001;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_1446f970a(param_2,1);
    local_b0 = &local_88;
    local_b8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_94);
    *(undefined4 *)(local_a0 + 0x18) = 8;
    FUN_1446f970a(param_2,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_94);
    *(undefined4 *)(local_a0 + 0x18) = 8;
  }
  plVar13 = (longlong *)(param_1 + 0x20);
  if (plVar13 == &local_a0) {
LAB_14745b65b:
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    lVar4 = *plVar13;
    *plVar13 = local_a0;
    local_a0 = 0;
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      goto LAB_14745b65b;
    }
  }
  lVar4 = *plVar13;
  cVar3 = *(char *)(param_2 + 0x69);
  if (cVar3 == '\0') {
    FUN_1446f970a(param_2,1);
  }
  local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,1);
  local_b8 = 100;
  puVar8 = (undefined1 *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar4,0);
  iVar15 = 0;
  if (cVar3 == '\0') {
    FUN_1446f970a(param_2,0);
    iVar15 = 0;
  }
  do {
    iVar7 = 0;
    do {
      *puVar8 = (char)iVar7;
      puVar8[1] = (char)iVar15;
      *(undefined2 *)(puVar8 + 2) = 0;
      puVar8 = puVar8 + 4;
      iVar7 = iVar7 + 1;
    } while (iVar7 != 5);
    iVar15 = iVar15 + 1;
  } while (iVar15 != 5);
  lVar4 = *plVar13;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_1446f970a(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar4);
    FUN_1446f970a(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar4);
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_58 = L"FLandscapeTileMeshIndexBuffer";
  local_50 = 0;
  uStack_48 = 0;
  local_94 = 0x2000000c0;
  local_8c = 0x8001;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_1446f970a(param_2,1);
    local_b0 = &local_88;
    local_b8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_94);
    *(undefined4 *)(local_a0 + 0x18) = 8;
    FUN_1446f970a(param_2,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_94);
    *(undefined4 *)(local_a0 + 0x18) = 8;
  }
  plVar13 = (longlong *)(param_1 + 0x38);
  if (plVar13 != &local_a0) {
    lVar4 = *plVar13;
    *plVar13 = local_a0;
    local_a0 = 0;
    if (lVar4 == 0) goto LAB_14745b81c;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14745b81c:
  lVar4 = *plVar13;
  cVar3 = *(char *)(param_2 + 0x69);
  if (cVar3 == '\0') {
    FUN_1446f970a(param_2,1);
  }
  local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,1);
  local_b8 = 0xc0;
  iVar15 = 0;
  psVar9 = (short *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar4,0);
  if (cVar3 == '\0') {
    FUN_1446f970a(param_2,0);
  }
  iVar7 = 0;
  do {
    iVar10 = -4;
    do {
      sVar5 = (short)iVar15;
      sVar6 = (short)iVar10;
      sVar11 = sVar5 + sVar6 + 4;
      *psVar9 = sVar11;
      sVar14 = sVar5 + 10 + sVar6;
      psVar9[1] = sVar14;
      psVar9[2] = sVar5 + 5 + sVar6;
      psVar9[3] = sVar11;
      iVar12 = iVar15 + iVar10 + 9;
      psVar9[4] = (short)iVar12;
      psVar9[5] = sVar14;
      psVar9 = psVar9 + 6;
      iVar10 = iVar10 + 1;
    } while (iVar10 != 0);
    iVar7 = iVar7 + 1;
    iVar15 = iVar15 + 5;
  } while (iVar7 != 4);
  lVar4 = *plVar13;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_1446f970a(param_2,CONCAT71((uint7)(uint3)((uint)iVar12 >> 8),1));
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar4);
    FUN_1446f970a(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14745ba0e FUN_14745ba0e body=752 status=ok
// SIG undefined FUN_14745ba0e(void)

void FUN_14745ba0e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_e8 [32];
  int local_c8;
  undefined8 *local_c0;
  longlong local_b0;
  int local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  uint local_74;
  undefined1 local_70;
  undefined4 local_6c;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar9 = *(int *)(param_1 + 0x1c) + 3;
  uVar14 = uVar9 >> 2;
  iVar12 = *(int *)(param_1 + 0x18) * uVar14;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 1;
  local_84 = 0;
  uStack_7c = 0;
  local_74 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_70 = 0;
  local_6c = 0;
  local_68 = L"FLandscapeTileVertexBuffer";
  local_60 = 0;
  uStack_58 = 0;
  uVar13 = iVar12 * iVar12;
  iVar12 = uVar13 * 4;
  local_a0 = 0x400100000004;
  local_a4 = iVar12;
  if ((uVar13 & 0x3fffffff) == 0) {
    FUN_14570b4be(param_2,&local_98,0x4001,4);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_1446f970a(param_2,1);
    local_c0 = &local_98;
    local_c8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2);
    *(undefined4 *)(local_b0 + 0x18) = 8;
    FUN_1446f970a(param_2,0);
  }
  else {
    local_c0 = &local_98;
    local_c8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2);
    *(undefined4 *)(local_b0 + 0x18) = 8;
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  if (plVar1 != &local_b0) {
    lVar4 = *plVar1;
    *plVar1 = local_b0;
    local_b0 = 0;
    if (lVar4 == 0) goto LAB_14745bb7d;
    LOCK();
    puVar2 = (uint *)(lVar4 + 8);
    uVar13 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar13 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_b0 != 0) {
    LOCK();
    puVar2 = (uint *)(local_b0 + 8);
    uVar13 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar13 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14745bb7d:
  lVar4 = *plVar1;
  cVar3 = *(char *)(param_2 + 0x69);
  if (cVar3 == '\0') {
    FUN_1446f970a(param_2,1);
  }
  local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,1);
  local_c8 = iVar12;
  lVar4 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar4);
  if (cVar3 == '\0') {
    FUN_1446f970a(param_2,0);
  }
  uVar7 = (ulonglong)*(uint *)(param_1 + 0x18);
  if (*(uint *)(param_1 + 0x18) != 0) {
    uVar13 = 0;
    do {
      uVar5 = 0;
      do {
        if (3 < uVar9) {
          uVar6 = 0;
          do {
            lVar8 = lVar4;
            lVar10 = 0;
            uVar11 = uVar14;
            do {
              *(char *)(lVar8 + lVar10) = (char)lVar10;
              *(char *)(lVar8 + 1 + lVar10) = (char)uVar6 * '\x04';
              *(char *)(lVar8 + 2 + lVar10) = (char)uVar5;
              *(char *)(lVar8 + 3 + lVar10) = (char)uVar13;
              lVar10 = lVar10 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
            uVar6 = uVar6 + 1;
            lVar4 = lVar8 + lVar10;
          } while (uVar6 != uVar14);
          uVar7 = (ulonglong)*(uint *)(param_1 + 0x18);
          lVar4 = lVar8 + lVar10;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < (uint)uVar7);
      uVar13 = uVar13 + 1;
    } while (uVar13 < (uint)uVar7);
  }
  lVar4 = *plVar1;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_1446f970a(param_2,CONCAT71((int7)(uVar7 >> 8),1));
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar4);
    FUN_1446f970a(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14745bd00 FUN_14745bd00 body=42 status=ok
// SIG undefined FUN_14745bd00(void)

void FUN_14745bd00(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14745bd32 FUN_14745bd32 body=96 status=ok
// SIG undefined FUN_14745bd32(void)

undefined8 FUN_14745bd32(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f0abd4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14caa2828,1);
  return uVar3;
}



// FUNCTION 14745bd92 FUN_14745bd92 body=52 status=ok
// SIG undefined FUN_14745bd92(void)

void FUN_14745bd92(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14745bdc6 FUN_14745bdc6 body=85 status=ok
// SIG undefined FUN_14745bdc6(void)

void FUN_14745bdc6(ulonglong *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = ((uint)(*param_1 >> 0x14) & 0xffff ^ (uint)(*param_1 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar2 = FUN_144a78877((int)param_1[1],*(undefined4 *)((longlong)param_1 + 0xc));
  uVar2 = FUN_144a78877(uVar1 >> 0x10 ^ uVar1,uVar2);
  FUN_144a78877(uVar2,(int)param_1[2]);
  return;
}



// FUNCTION 14745be1b FUN_14745be1b body=258 status=ok
// SIG undefined FUN_14745be1b(void)

void FUN_14745be1b(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (*(longlong *)(param_2 + 0x48) == 0) {
    iVar1 = *(int *)(param_2 + 0x1c);
    lVar3 = FUN_14001cc68(0x40,0x10);
    FUN_14745bf1e(lVar3,param_1);
    puVar4 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    uVar2 = *(undefined4 *)(param_2 + 0x20);
    FUN_144a34e6c(puVar4);
    *puVar4 = &PTR_FUN_14a3c2ae0;
    *(undefined4 *)(puVar4 + 3) = uVar2;
    *(int *)((longlong)puVar4 + 0x1c) = iVar1 + -1;
    FUN_14006bf18(puVar4,param_1);
    puVar5 = (undefined8 *)FUN_14001cc68(0x160,0x10);
    FUN_14746bea8(puVar5,param_3);
    *puVar5 = &PTR_FUN_14a3c2b10;
    puVar5[0x28] = lVar3 + 0x10;
    puVar5[0x29] = 0x6040000000000;
    puVar5[0x2a] = puVar4;
    puVar5[0x2b] = 0x106040000000000;
    FUN_14006bf18(puVar5,param_1);
    *(longlong *)(param_2 + 0x40) = lVar3;
    *(undefined8 **)(param_2 + 0x48) = puVar5;
    *(undefined8 **)(param_2 + 0x50) = puVar4;
  }
  return;
}



// FUNCTION 14745bf1e FUN_14745bf1e body=100 status=ok
// SIG undefined FUN_14745bf1e(void)

undefined8 * FUN_14745bf1e(undefined8 *param_1,undefined8 param_2)

{
  FUN_144a7f8ec();
  *param_1 = &PTR_FUN_14a3c2ab0;
  FUN_144a34e6c(param_1 + 2);
  FUN_14322417a(param_1 + 5);
  FUN_14006bf18(param_1,param_2);
  FUN_14006bf18(param_1 + 2,param_2);
  FUN_14006bf18(param_1 + 5,param_2);
  return param_1;
}



// FUNCTION 14745bf82 FUN_14745bf82 body=126 status=ok
// SIG undefined FUN_14745bf82(void)

void FUN_14745bf82(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (((0x1e < (uint)((iVar1 + -1) * *(int *)(param_1 + 0x20))) &&
      (*(char *)(param_2 + 0xde) == '\0')) && (*(longlong *)(param_1 + 0x48) != 0)) {
    *(byte *)(param_2 + 0xe7) = *(byte *)(param_2 + 0xe7) | 0x80;
    *(undefined8 *)(param_2 + 0xb8) = *(undefined8 *)(param_1 + 0x48);
    lVar2 = *(longlong *)(param_2 + 0xa8);
    if (*(longlong *)(param_2 + 0xa8) == 0) {
      lVar2 = param_2;
    }
    *(longlong *)(lVar2 + 0x18) = *(longlong *)(param_1 + 0x40) + 0x28;
    *(undefined4 *)(lVar2 + 0x5c) = 0x20;
    iVar1 = (iVar1 + 2U >> 2) * *(int *)(param_1 + 0x20);
    *(int *)(lVar2 + 0x60) = iVar1 * iVar1;
    *(undefined4 *)(lVar2 + 0x58) = 0;
    *(undefined8 *)(lVar2 + 0x68) = 0x1800000000;
  }
  return;
}



// FUNCTION 14745c000 FUN_14745c000 body=127 status=ok
// SIG undefined FUN_14745c000(void)

void FUN_14745c000(void)

{
  int *piVar1;
  longlong lVar2;
  int in_R9D;
  int in_stack_00000028;
  int in_stack_00000030;
  
  if (0x1e < (uint)((in_stack_00000028 + -1) * in_stack_00000030)) {
    FUN_14745be1b();
    if ((longlong)DAT_14caa27e0 != 0) {
      lVar2 = (longlong)DAT_14caa27e0 * 0x150;
      piVar1 = DAT_14caa27d8;
      do {
        if (*piVar1 == in_R9D) {
          if (piVar1 != (int *)0x0) {
            piVar1[1] = piVar1[1] + 1;
            return;
          }
          break;
        }
        piVar1 = piVar1 + 0x54;
        lVar2 = lVar2 + -0x150;
      } while (lVar2 != 0);
    }
    piVar1 = (int *)FUN_14745c080(&DAT_14caa27d8);
    *piVar1 = in_R9D;
    piVar1[2] = in_stack_00000030;
    piVar1[3] = in_stack_00000028 + -1;
    piVar1[1] = 1;
  }
  return;
}



// FUNCTION 14745c080 FUN_14745c080 body=62 status=ok
// SIG undefined FUN_14745c080(void)

longlong FUN_14745c080(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14745e1fa(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x150 + *param_1;
  FUN_14745e196(lVar2);
  return lVar2;
}



// FUNCTION 14745c0be FUN_14745c0be body=282 status=ok
// SIG undefined FUN_14745c0be(void)

undefined8
FUN_14745c0be(longlong param_1,int param_2,undefined8 param_3,int param_4,undefined4 *param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((param_4 == 0) && ((longlong)DAT_14caa27e0 != 0)) && (*(int *)(DAT_14caa25c8 + 4) != 0)) {
    plVar9 = (longlong *)(DAT_14caa27d8 + 0x100);
    lVar6 = (longlong)DAT_14caa27e0 * 0x150;
    do {
      if ((int)plVar9[-0x20] == param_2) {
        uVar7 = 0;
        uVar4 = 0;
        if (plVar9 != (longlong *)&DAT_00000100) {
          plVar1 = *(longlong **)(param_1 + 0x10);
          local_38 = param_1;
          local_30 = param_3;
          if (plVar1 != (longlong *)0x0) {
            if (*(code **)(*plVar1 + 0x58) == (code *)&LAB_144b15db2) {
              uVar4 = (undefined4)plVar1[4];
            }
            else {
              uVar4 = (**(code **)(*plVar1 + 0x58))();
            }
          }
          local_28 = uVar4;
          uVar4 = FUN_14745bdc6(&local_38);
          iVar5 = FUN_14745def2(plVar9,uVar4,&local_38);
          if (iVar5 == -1) {
            lVar6 = 0;
          }
          else {
            lVar6 = (longlong)iVar5 * 0x38 + *plVar9;
          }
          puVar8 = (undefined4 *)(lVar6 + 0x18);
          if (lVar6 == 0) {
            puVar8 = (undefined4 *)0x0;
          }
          uVar7 = CONCAT71((int7)((ulonglong)lVar6 >> 8),puVar8 != (undefined4 *)0x0);
          if (puVar8 != (undefined4 *)0x0) {
            *(undefined8 *)(param_5 + 4) = *(undefined8 *)(puVar8 + 4);
            uVar4 = puVar8[1];
            uVar2 = puVar8[2];
            uVar3 = puVar8[3];
            *param_5 = *puVar8;
            param_5[1] = uVar4;
            param_5[2] = uVar2;
            param_5[3] = uVar3;
          }
        }
        goto LAB_14745c0db;
      }
      plVar9 = plVar9 + 0x2a;
      lVar6 = lVar6 + -0x150;
    } while (lVar6 != 0);
  }
  uVar7 = 0;
LAB_14745c0db:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14745c1da FUN_14745c1da body=3 status=ok
// SIG undefined FUN_14745c1da(void)

undefined1 FUN_14745c1da(void)

{
  return 1;
}



// FUNCTION 14745c1de FUN_14745c1de body=308 status=ok
// SIG undefined FUN_14745c1de(void)

undefined8 * FUN_14745c1de(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  undefined1 local_88 [8];
  undefined1 local_80 [48];
  undefined1 local_50 [8];
  longlong *local_48;
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1446ddc76(local_88,"Blueprint",1);
  FUN_14276766e(local_80,local_88);
  local_40 = L"GetTargetLayerNames_Runtime.";
  local_38 = 0x1c;
  FUN_1446e940c(local_8c,&local_40);
  local_40 = L"Landscape";
  local_38 = 9;
  FUN_1446e940c(local_90,&local_40);
  FUN_140208bae(&local_40,local_90,local_8c,
                L"GetTargetLayerNames_EditorOnly: this cannot be called at runtime");
  FUN_142767974(local_80,local_50,&local_40);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if (local_40 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_40 + 0x10))();
  }
  FUN_1427678c0(local_80);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14745c314 FUN_14745c314 body=138 status=ok
// SIG undefined FUN_14745c314(void)

code * FUN_14745c314(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumSubsections";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c0000018f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14745c39e;
}



// FUNCTION 14745c39e FUN_14745c39e body=138 status=ok
// SIG undefined FUN_14745c39e(void)

code * FUN_14745c39e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SubsectionSizeTiles";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000018e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14745c428;
}



// FUNCTION 14745c428 FUN_14745c428 body=138 status=ok
// SIG undefined FUN_14745c428(void)

code * FUN_14745c428(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumLandscapeViews";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x240000018d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f0ae42;
}



// FUNCTION 14745c4b2 FUN_14745c4b2 body=138 status=ok
// SIG undefined FUN_14745c4b2(void)

code * FUN_14745c4b2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LandscapeSections";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FLandscapeSection>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000018b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14745c53c;
}



// FUNCTION 14745c53c FUN_14745c53c body=138 status=ok
// SIG undefined FUN_14745c53c(void)

code * FUN_14745c53c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LandscapeViews";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FLandscapeView>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000018a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f0aeca;
}



// FUNCTION 14745c5ca FUN_14745c5ca body=76 status=ok
// SIG undefined FUN_14745c5ca(void)

void FUN_14745c5ca(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1400020a8();
  }
  FUN_14745c68a(param_1 + 0x100);
  FUN_14745c616(param_1 + 0xd0);
  FUN_14745c64c(param_1 + 0x10);
  return;
}



// FUNCTION 14745c616 FUN_14745c616 body=53 status=ok
// SIG undefined FUN_14745c616(void)

void FUN_14745c616(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar1 = param_1;
  }
  FUN_14745c717(lVar1,*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14745c64c FUN_14745c64c body=62 status=ok
// SIG undefined FUN_14745c64c(void)

void FUN_14745c64c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    lVar1 = param_1;
  }
  FUN_14745c787(lVar1,*(undefined4 *)(param_1 + 0xb8));
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14745c68a FUN_14745c68a body=52 status=ok
// SIG undefined FUN_14745c68a(void)

void FUN_14745c68a(longlong *param_1)

{
  FUN_14745c6be();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14745c6be FUN_14745c6be body=89 status=ok
// SIG undefined FUN_14745c6be(void)

void FUN_14745c6be(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
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



// FUNCTION 14745c717 FUN_14745c717 body=38 status=ok
// SIG undefined FUN_14745c717(void)

void FUN_14745c717(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14745c73e(param_1);
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 14745c73e FUN_14745c73e body=73 status=ok
// SIG undefined FUN_14745c73e(void)

void FUN_14745c73e(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014745c77d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 14745c787 FUN_14745c787 body=47 status=ok
// SIG undefined FUN_14745c787(void)

void FUN_14745c787(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x48);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14745c7b6 FUN_14745c7b6 body=81 status=ok
// SIG undefined FUN_14745c7b6(void)

void FUN_14745c7b6(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)(param_1 + 0xbc) < param_2) {
    FUN_14745c84e(param_1);
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    lVar1 = param_1;
  }
  FUN_14745c787(lVar1,*(undefined4 *)(param_1 + 0xb8));
  *(undefined4 *)(param_1 + 0xb8) = 0;
  return;
}



// FUNCTION 14745c808 FUN_14745c808 body=69 status=ok
// SIG undefined FUN_14745c808(void)

void FUN_14745c808(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)(param_1 + 0x2c) < param_2) {
    FUN_14745c99e(param_1);
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar1 = param_1;
  }
  FUN_14745c717(lVar1,*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 14745c84e FUN_14745c84e body=77 status=ok
// SIG undefined FUN_14745c84e(void)

void FUN_14745c84e(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    lVar1 = param_1;
  }
  FUN_14745c787(lVar1,*(undefined4 *)(param_1 + 0xb8));
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(int *)(param_1 + 0xbc) == param_2) {
    return;
  }
  FUN_14745c89c(param_1,param_2);
  return;
}



// FUNCTION 14745c89c FUN_14745c89c body=116 status=ok
// SIG undefined FUN_14745c89c(void)

void FUN_14745c89c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 2;
    if (2 < param_2) {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x58,0);
      iVar2 = (int)(uVar1 / 0x58);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0xbc)) {
    *(int *)(param_1 + 0xbc) = iVar3;
    FUN_14745c910(param_1,*(undefined4 *)(param_1 + 0xb8));
    return;
  }
  return;
}



// FUNCTION 14745c910 FUN_14745c910 body=141 status=ok
// SIG undefined FUN_14745c910(void)

void FUN_14745c910(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xb0);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x58);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xb0,0,param_3,0x58);
    memmove(*(void **)((longlong)param_1 + 0xb0),param_1,(longlong)param_2 * 0x58);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xb0,param_2,param_3,0x58);
  return;
}



// FUNCTION 14745c99e FUN_14745c99e body=65 status=ok
// SIG undefined FUN_14745c99e(void)

void FUN_14745c99e(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar1 = param_1;
  }
  FUN_14745c717(lVar1,*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) == param_2) {
    return;
  }
  FUN_14745c9e0(param_1,param_2);
  return;
}



// FUNCTION 14745c9e0 FUN_14745c9e0 body=94 status=ok
// SIG undefined FUN_14745c9e0(void)

void FUN_14745c9e0(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 2;
    if (2 < param_2) {
      uVar2 = FUN_144a3809e((ulonglong)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x2c) = iVar3;
    FUN_14745ca3e(param_1,*(undefined4 *)(param_1 + 0x28));
    return;
  }
  return;
}



// FUNCTION 14745ca3e FUN_14745ca3e body=132 status=ok
// SIG undefined FUN_14745ca3e(void)

void FUN_14745ca3e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,0x10);
  return;
}



// FUNCTION 14745cac2 FUN_14745cac2 body=68 status=ok
// SIG undefined FUN_14745cac2(void)

void FUN_14745cac2(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14745cb06();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144748838(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14745cb06 FUN_14745cb06 body=322 status=ok
// SIG undefined FUN_14745cb06(void)

void FUN_14745cb06(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x34 + (longlong)iVar4 * 0x38) * 4) =
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



// FUNCTION 14745cc4a FUN_14745cc4a body=101 status=ok
// SIG undefined FUN_14745cc4a(void)

void FUN_14745cc4a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
    if (2 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 3)) {
        uVar2 = uVar1 >> 3 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x1c)) {
    *(int *)(param_1 + 0x1c) = (int)uVar2;
    FUN_14745ccb0(param_1,*(undefined4 *)(param_1 + 0x18),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 14745ccb0 FUN_14745ccb0 body=133 status=ok
// SIG undefined FUN_14745ccb0(void)

void FUN_14745ccb0(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,param_4);
  return;
}



// FUNCTION 14745cd36 FUN_14745cd36 body=38 status=ok
// SIG undefined FUN_14745cd36(void)

undefined8 FUN_14745cd36(undefined8 param_1,int param_2)

{
  FUN_14745cd5c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14745cd5c FUN_14745cd5c body=70 status=ok
// SIG undefined FUN_14745cd5c(void)

void FUN_14745cd5c(longlong param_1)

{
  FUN_144725486();
  FUN_144725486(param_1 + 0x10);
  FUN_144725486(param_1 + 0x28);
  FUN_14003f39a(param_1 + 0x28);
  FUN_144a80d50(param_1 + 0x10);
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 14745cda2 FUN_14745cda2 body=46 status=ok
// SIG undefined FUN_14745cda2(void)

undefined8 FUN_14745cda2(undefined8 param_1,int param_2)

{
  FUN_144725486();
  FUN_144a80d50(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14745cdd0 FUN_14745cdd0 body=56 status=ok
// SIG undefined FUN_14745cdd0(void)

undefined8 * FUN_14745cdd0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3c2d50;
  FUN_144725486();
  FUN_1447259a8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14745ce0e FUN_14745ce0e body=82 status=ok
// SIG undefined FUN_14745ce0e(void)

longlong FUN_14745ce0e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0xb8);
  *(uint *)(param_1 + 0xb8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xbc) < iVar1 + 1U) {
    FUN_14745cf48(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    lVar2 = param_1;
  }
  lVar2 = (longlong)iVar1 * 0x58 + lVar2;
  FUN_14745cf31(lVar2);
  return lVar2;
}



// FUNCTION 14745ce60 FUN_14745ce60 body=77 status=ok
// SIG undefined FUN_14745ce60(void)

longlong FUN_14745ce60(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x610);
  *(uint *)(param_1 + 0x610) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x614) < iVar1 + 1U) {
    FUN_14745cfda(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x600);
  if (*(longlong *)(param_1 + 0x600) == 0) {
    lVar2 = param_1;
  }
  return (longlong)iVar1 * 0x60 + lVar2;
}



// FUNCTION 14745ceae FUN_14745ceae body=130 status=ok
// SIG undefined FUN_14745ceae(void)

void FUN_14745ceae(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    uVar5 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar4 = (longlong)(int)uVar2;
      }
      else {
        lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 >> 3)) {
        uVar5 = uVar3 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x1c) = (int)uVar5;
    FUN_14745ccb0(param_1,param_2,uVar5,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14745cf31 FUN_14745cf31 body=23 status=ok
// SIG undefined FUN_14745cf31(void)

void FUN_14745cf31(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0x800000000;
  return;
}



// FUNCTION 14745cf48 FUN_14745cf48 body=144 status=ok
// SIG undefined FUN_14745cf48(void)

void FUN_14745cf48(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0xb8);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0xbc) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x58,0);
      iVar5 = (int)(uVar4 / 0x58);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0xbc) = iVar6;
    FUN_14745c910(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14745cfda FUN_14745cfda body=136 status=ok
// SIG undefined FUN_14745cfda(void)

void FUN_14745cfda(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x610);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x614)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x60,0);
      iVar4 = (int)(uVar3 / 0x60);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x614) = iVar5;
    FUN_14745d064(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14745d064 FUN_14745d064 body=149 status=ok
// SIG undefined FUN_14745d064(void)

void FUN_14745d064(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x600);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x60);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x600,0,param_3,0x60);
    memmove(*(void **)((longlong)param_1 + 0x600),param_1,(longlong)param_2 * 0x60);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x600,param_2,param_3,0x60);
  return;
}



// FUNCTION 14745d0fa FUN_14745d0fa body=110 status=ok
// SIG undefined FUN_14745d0fa(void)

void FUN_14745d0fa(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_14745d16a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14745d16a FUN_14745d16a body=132 status=ok
// SIG undefined FUN_14745d16a(void)

void FUN_14745d16a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,8);
  return;
}



// FUNCTION 14745d1ee FUN_14745d1ee body=94 status=ok
// SIG undefined FUN_14745d1ee(void)

void FUN_14745d1ee(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x614) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x614) = 0;
    if (*(void **)((longlong)param_1 + 0x600) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x600),
              (longlong)*(int *)((longlong)param_1 + 0x610) * 0x60);
      FUN_1446efa72((longlong)param_1 + 0x600,0,0,0x60);
      return;
    }
  }
  return;
}



// FUNCTION 14745d24c FUN_14745d24c body=77 status=ok
// SIG undefined FUN_14745d24c(void)

longlong FUN_14745d24c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x510);
  *(uint *)(param_1 + 0x510) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x514) < iVar1 + 1U) {
    FUN_14745d6b0(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x500);
  if (*(longlong *)(param_1 + 0x500) == 0) {
    lVar2 = param_1;
  }
  return (longlong)iVar1 * 0xa0 + lVar2;
}



// FUNCTION 14745d29a FUN_14745d29a body=118 status=ok
// SIG undefined FUN_14745d29a(void)

void FUN_14745d29a(longlong *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (-1 < param_3) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_3) {
      FUN_14745d73a(param_1,param_3);
    }
    do {
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_14745d7a2(param_1,iVar2);
      }
      lVar3 = *param_1;
      *(undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x14) = param_2[4];
      uVar4 = param_2[1];
      uVar5 = param_2[2];
      uVar6 = param_2[3];
      puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x14);
      *puVar1 = *param_2;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_3);
}



// FUNCTION 14745d312 FUN_14745d312 body=108 status=ok
// SIG undefined FUN_14745d312(void)

undefined4 * FUN_14745d312(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145f0a966();
  FUN_145f0a966();
  FUN_1448e935e(param_1,&local_30,&DAT_14caa2718,0);
  FUN_145f0a966();
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14745d37f FUN_14745d37f body=177 status=ok
// SIG undefined FUN_14745d37f(void)

void FUN_14745d37f(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145f0abd4();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14caa2828,param_4);
  local_78 = &DAT_14caa2828;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_14745d854(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14745d432 FUN_14745d432 body=70 status=ok
// SIG undefined FUN_14745d432(void)

longlong FUN_14745d432(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
    FUN_14745dbf4(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar2 = param_1;
  }
  lVar2 = (longlong)iVar1 * 0x10 + lVar2;
  FUN_14745dbed(lVar2);
  return lVar2;
}



// FUNCTION 14745d478 FUN_14745d478 body=100 status=ok
// SIG undefined FUN_14745d478(void)

undefined8 FUN_14745d478(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0xa0,0);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  iVar4 = (int)(uVar2 / 0xa0);
  iVar5 = 0x7fffffff;
  if ((int)param_2 <= iVar4) {
    iVar5 = iVar4;
  }
  if (iVar5 == *(int *)(param_1 + 0x514)) {
    return SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),0);
  }
  *(int *)(param_1 + 0x514) = iVar5;
  uVar3 = FUN_14745d4dc(param_1,*(undefined4 *)(param_1 + 0x510));
  return uVar3;
}



// FUNCTION 14745d4dc FUN_14745d4dc body=149 status=ok
// SIG undefined FUN_14745d4dc(void)

void FUN_14745d4dc(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x500);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xa0);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x500,0,param_3,0xa0);
    memmove(*(void **)((longlong)param_1 + 0x500),param_1,(longlong)param_2 * 0xa0);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x500,param_2,param_3,0xa0);
  return;
}



// FUNCTION 14745d572 FUN_14745d572 body=74 status=ok
// SIG undefined FUN_14745d572(void)

void FUN_14745d572(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 << 3,0);
  iVar1 = (int)(uVar2 >> 3);
  iVar3 = 0x7fffffff;
  if ((int)param_2 <= iVar1) {
    iVar3 = iVar1;
  }
  if (iVar3 == *(int *)(param_1 + 0x4c)) {
    return;
  }
  *(int *)(param_1 + 0x4c) = iVar3;
  FUN_14745d5bc(param_1,*(undefined4 *)(param_1 + 0x48));
  return;
}



// FUNCTION 14745d5bc FUN_14745d5bc body=132 status=ok
// SIG undefined FUN_14745d5bc(void)

void FUN_14745d5bc(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,8);
  return;
}



// FUNCTION 14745d640 FUN_14745d640 body=110 status=ok
// SIG undefined FUN_14745d640(void)

void FUN_14745d640(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_14745d5bc(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14745d6b0 FUN_14745d6b0 body=136 status=ok
// SIG undefined FUN_14745d6b0(void)

void FUN_14745d6b0(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x510);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x514)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0xa0,0);
      iVar4 = (int)(uVar3 / 0xa0);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x514) = iVar5;
    FUN_14745d4dc(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14745d73a FUN_14745d73a body=103 status=ok
// SIG undefined FUN_14745d73a(void)

undefined8 FUN_14745d73a(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x14,4);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0x14)) {
    uVar4 = uVar2 / 0x14 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x14,4);
  }
  return uVar3;
}



// FUNCTION 14745d7a2 FUN_14745d7a2 body=147 status=ok
// SIG undefined FUN_14745d7a2(void)

void FUN_14745d7a2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x14,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x14)) {
      uVar5 = uVar4 / 0x14 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x14,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14745d836 FUN_14745d836 body=29 status=ok
// SIG undefined FUN_14745d836(void)

undefined8 FUN_14745d836(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14745d854 FUN_14745d854 body=344 status=ok
// SIG undefined FUN_14745d854(void)

void FUN_14745d854(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar14 = FUN_14321180c(param_2);
  puVar1 = (ulonglong *)(param_1 + 0x70);
  uVar13 = FUN_144a8b328(uVar14,2);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar15;
  local_50 = DAT_14caa2870;
  if (DAT_14caa2870 != 0) {
    LOCK();
    *(int *)(DAT_14caa2870 + 8) = *(int *)(DAT_14caa2870 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14caa2828;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar13);
  *puVar16 = &PTR_FUN_14a3c2d30;
  uVar13 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar13;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar16);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14745d9ae FUN_14745d9ae body=38 status=ok
// SIG undefined FUN_14745d9ae(void)

undefined8 FUN_14745d9ae(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14745d9d4 FUN_14745d9d4 body=163 status=ok
// SIG undefined FUN_14745d9d4(void)

void FUN_14745d9d4(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_14324dc54();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_14324dd3c(param_1,param_2);
  return;
}



// FUNCTION 14745da77 FUN_14745da77 body=374 status=ok
// SIG undefined FUN_14745da77(void)

void FUN_14745da77(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14745dbed FUN_14745dbed body=7 status=ok
// SIG undefined FUN_14745dbed(void)

void FUN_14745dbed(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 14745dbf4 FUN_14745dbf4 body=124 status=ok
// SIG undefined FUN_14745dbf4(void)

void FUN_14745dbf4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x2c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 4,0);
      iVar3 = (int)(uVar4 >> 4);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar6;
    FUN_14745ca3e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14745dc72 FUN_14745dc72 body=311 status=ok
// SIG undefined FUN_14745dc72(void)

undefined4 * FUN_14745dc72(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14745ddaa(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  local_40[2] = puVar1[2];
  uVar2 = puVar1[1];
  *local_40 = *puVar1;
  local_40[1] = uVar2;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  *(undefined4 *)(local_40 + 6) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = FUN_14745bdc6(local_40);
  cVar4 = FUN_14745de8c(param_1,uVar5,local_40,&local_4c);
  uVar3 = local_4c;
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
      *(uint *)((longlong)local_40 + 0x34) = uVar5;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 6) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_14745dfdc(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14745ddaa FUN_14745ddaa body=226 status=ok
// SIG undefined FUN_14745ddaa(void)

int * FUN_14745ddaa(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 14745de8c FUN_14745de8c body=102 status=ok
// SIG undefined FUN_14745de8c(void)

undefined8 FUN_14745de8c(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  longlong lVar15;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar14 = FUN_14745def2(), iVar14 != -1)) {
    lVar2 = *param_1;
    lVar15 = (longlong)iVar14 * 0x38;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    uVar9 = param_3[6];
    uVar10 = param_3[7];
    uVar11 = param_3[9];
    uVar12 = param_3[10];
    uVar13 = param_3[0xb];
    puVar1 = (undefined4 *)(lVar2 + 0x20 + lVar15);
    *puVar1 = param_3[8];
    puVar1[1] = uVar11;
    puVar1[2] = uVar12;
    puVar1[3] = uVar13;
    puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar15);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    puVar1 = (undefined4 *)(lVar2 + lVar15);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_14745df68(param_1,*param_4);
    *param_4 = iVar14;
    return 1;
  }
  return 0;
}



// FUNCTION 14745def2 FUN_14745def2 body=117 status=ok
// SIG undefined FUN_14745def2(void)

int FUN_14745def2(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar2 * 0x38;
        if ((((*(longlong *)(lVar3 + lVar5) == *param_3) &&
             (lVar1 = lVar3 + lVar5, *(int *)(lVar1 + 8) == (int)param_3[1])) &&
            (*(int *)(lVar1 + 0xc) == *(int *)((longlong)param_3 + 0xc))) &&
           (*(int *)(lVar1 + 0x10) == (int)param_3[2])) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar3 + 0x30 + lVar5);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 14745df68 FUN_14745df68 body=116 status=ok
// SIG undefined FUN_14745df68(void)

void FUN_14745df68(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14745dfdc FUN_14745dfdc body=441 status=ok
// SIG undefined FUN_14745dfdc(void)

void FUN_14745dfdc(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
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
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
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
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x38;
        iVar6 = FUN_14745bdc6(lVar3 + lVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x34 + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14745e196 FUN_14745e196 body=100 status=ok
// SIG undefined FUN_14745e196(void)

void FUN_14745e196(longlong param_1)

{
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0x200000000;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0x200000000;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 300) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  return;
}



// FUNCTION 14745e1fa FUN_14745e1fa body=146 status=ok
// SIG undefined FUN_14745e1fa(void)

void FUN_14745e1fa(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x150,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0xc30c30c30c30c31),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x150,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14745e28e FUN_14745e28e body=112 status=ok
// SIG undefined FUN_14745e28e(void)

void FUN_14745e28e(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x150 + lVar1);
  FUN_14745c5ca(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x150),(longlong)iVar3 * 0x150);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 14745e2fe FUN_14745e2fe body=62 status=ok
// SIG undefined FUN_14745e2fe(void)

void FUN_14745e2fe(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14745e33c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x150,8);
  }
  return;
}



// FUNCTION 14745e33c FUN_14745e33c body=110 status=ok
// SIG undefined FUN_14745e33c(void)

ulonglong FUN_14745e33c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x150) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14745e375;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x150,8);
      param_2 = param_2 / 0x150;
    }
  }
LAB_14745e375:
  return param_2 & 0xffffffff;
}



// FUNCTION 14745e3aa FUN_14745e3aa body=138 status=ok
// SIG undefined FUN_14745e3aa(void)

void FUN_14745e3aa(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x2e90);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2e94)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0xba0,0);
      iVar4 = (int)(uVar3 / 0xba0);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x2e94) = iVar5;
    FUN_14745e436(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14745e436 FUN_14745e436 body=147 status=ok
// SIG undefined FUN_14745e436(void)

void FUN_14745e436(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x2e80);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xba0);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x2e80,0,param_3,0xba0);
    memmove(*(void **)((longlong)param_1 + 0x2e80),param_1,(longlong)param_2 * 0xba0);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x2e80,param_2,param_3,0xba0);
  return;
}



// FUNCTION 14745e4ca FUN_14745e4ca body=31 status=ok
// SIG undefined FUN_14745e4ca(void)

void FUN_14745e4ca(undefined8 param_1)

{
  FUN_1446e0b6e();
  FUN_144757f48(param_1,8);
  return;
}



// FUNCTION 14745e50a FUN_14745e50a body=42 status=ok
// SIG undefined FUN_14745e50a(void)

void FUN_14745e50a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14745e53c FUN_14745e53c body=91 status=ok
// SIG undefined FUN_14745e53c(void)

undefined8 FUN_14745e53c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14494321d(0xe0);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_146046cc2();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14caa4750,1);
  return uVar3;
}



// FUNCTION 14745e598 FUN_14745e598 body=47 status=ok
// SIG undefined FUN_14745e598(void)

void FUN_14745e598(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14494321d(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14745e5c8 FUN_14745e5c8 body=42 status=ok
// SIG undefined FUN_14745e5c8(void)

void FUN_14745e5c8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14745e5fa FUN_14745e5fa body=91 status=ok
// SIG undefined FUN_14745e5fa(void)

undefined8 FUN_14745e5fa(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14494321d(0xe0);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145edf740();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14caa47d8,1);
  return uVar3;
}



// FUNCTION 14745e656 FUN_14745e656 body=47 status=ok
// SIG undefined FUN_14745e656(void)

void FUN_14745e656(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14494321d(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14745e686 FUN_14745e686 body=42 status=ok
// SIG undefined FUN_14745e686(void)

void FUN_14745e686(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 14745e6b8 FUN_14745e6b8 body=91 status=ok
// SIG undefined FUN_14745e6b8(void)

longlong FUN_14745e6b8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14494321d(0xe8);
  thunk_FUN_147432e9e(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  *(undefined2 *)(lVar1 + 0xe4) = 0;
  FUN_1474409b8(lVar1 + 0xe0,*(undefined8 *)(param_1 + 0x28),L"Transform",1);
  return lVar1;
}



// FUNCTION 14745e714 FUN_14745e714 body=54 status=ok
// SIG undefined FUN_14745e714(void)

longlong FUN_14745e714(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14494321d(0xe8);
  FUN_147432e26(lVar1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  *(undefined2 *)(lVar1 + 0xe4) = 0;
  return lVar1;
}



// FUNCTION 14745e74a FUN_14745e74a body=42 status=ok
// SIG undefined FUN_14745e74a(void)

void FUN_14745e74a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14745e77c FUN_14745e77c body=34 status=ok
// SIG undefined FUN_14745e77c(void)

void FUN_14745e77c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14494321d(0x110);
  FUN_14745f6ae(uVar1,param_1);
  return;
}



// FUNCTION 14745e79e FUN_14745e79e body=59 status=ok
// SIG undefined FUN_14745e79e(void)

longlong FUN_14745e79e(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14494321d(0x110);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0xfe) = 0;
  *(undefined8 *)(lVar1 + 0x106) = 0;
  return lVar1;
}



// FUNCTION 14745e7da FUN_14745e7da body=42 status=ok
// SIG undefined FUN_14745e7da(void)

void FUN_14745e7da(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 14745e80c FUN_14745e80c body=34 status=ok
// SIG undefined FUN_14745e80c(void)

void FUN_14745e80c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14494321d(0x100);
  FUN_14745f806(uVar1,param_1);
  return;
}



// FUNCTION 14745e82e FUN_14745e82e body=52 status=ok
// SIG undefined FUN_14745e82e(void)

longlong FUN_14745e82e(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14494321d(0x100);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xea) = 0;
  *(undefined8 *)(lVar1 + 0xf2) = 0;
  return lVar1;
}


