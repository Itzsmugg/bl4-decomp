// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1485bcc40 FUN_1485bcc40 body=1323 status=ok
// SIG undefined FUN_1485bcc40(void)

bool FUN_1485bcc40(longlong param_1,double *param_2,double *param_3,longlong *param_4,double param_5
                  )

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_288 [44];
  int local_25c;
  longlong *local_258;
  longlong local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  ulonglong local_228;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_198 = DAT_14c8463f0;
  dStack_190 = DAT_14c8463f8;
  local_1a8 = DAT_14c8463f0;
  dStack_1a0 = DAT_14c8463f8;
  dVar4 = param_3[1] - param_2[1];
  dVar1 = *param_3 - *param_2;
  dVar2 = SQRT(dVar4 * dVar4 + dVar1 * dVar1);
  if (0.0 < dVar2) {
    dVar4 = dVar4 * (1.0 / dVar2);
  }
  else {
    dVar4 = 0.0;
  }
  uVar11 = *(int *)(param_1 + 0xb0) * 0x200 + *(int *)(param_1 + 0xb4);
  uVar13 = 0;
  if ((uVar11 != 0) &&
     (uVar13 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0xb8) - 1U))) {
    uVar14 = 1;
    uVar7 = 1;
    if (1 < (int)uVar11) {
      uVar14 = uVar11;
    }
    do {
      uVar13 = uVar14;
      if (uVar14 == uVar7) break;
      uVar6 = uVar7 >> 9;
      uVar12 = uVar7 & 0x1ff;
      uVar13 = uVar7;
      uVar7 = uVar7 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0xb8))[uVar6] +
                                         (ulonglong)uVar12 * 2) - 1U));
  }
  bVar10 = false;
  local_258 = param_4;
  if (uVar13 != uVar11) {
    dVar1 = (double)(-(ulonglong)(0.0 < dVar2) & (ulonglong)((1.0 / dVar2) * -dVar1));
    dVar2 = -param_5;
    local_25c = 0;
    do {
      FUN_1485bd8a8(param_1,uVar13,&local_198,&local_1a8);
      dVar15 = (local_198 - *param_2) * dVar4 + (dStack_190 - param_2[1]) * dVar1;
      dVar3 = (local_1a8 - *param_2) * dVar4 + (dStack_1a0 - param_2[1]) * dVar1;
      uVar14 = -(uint)(dVar15 < dVar2);
      if (param_5 < dVar15) {
        uVar14 = 1;
      }
      uVar7 = -(uint)(dVar3 < dVar2);
      if (param_5 < dVar3) {
        uVar7 = 1;
      }
      if ((dVar2 <= dVar15 && dVar15 <= param_5) || (uVar14 != uVar7)) {
        FUN_148279e70(&local_188,param_2,param_3);
        local_230 = dStack_1a0 - dStack_190;
        local_238 = local_1a8 - local_198;
        dVar15 = SQRT(local_238 * local_238 + local_230 * local_230);
        if (0.0 < dVar15) {
          local_238 = local_238 * (1.0 / dVar15);
          local_230 = local_230 * (1.0 / dVar15);
        }
        else {
          local_230 = 0.0;
          local_238 = 0.0;
        }
        uVar16 = SUB84(param_5,0);
        uVar17 = (undefined4)((ulonglong)param_5 >> 0x20);
        if (param_5 <= 0.0) {
          uVar16 = 0;
          uVar17 = 0;
        }
        local_240 = (dStack_190 + dStack_1a0) * 0.5;
        local_248 = (local_198 + local_1a8) * 0.5;
        local_228 = (ulonglong)(dVar15 * 0.5) & -(ulonglong)(0.0 < dVar15);
        local_220 = local_188;
        uStack_21c = uStack_184;
        uStack_218 = uStack_180;
        uStack_214 = uStack_17c;
        local_210 = local_178;
        uStack_20c = uStack_174;
        uStack_208 = uStack_170;
        uStack_204 = uStack_16c;
        local_200 = local_168;
        local_1e8 = 0;
        local_1e0 = 0;
        local_1f8 = CONCAT44(uVar17,uVar16);
        local_1f0 = 0x3f1a36e2eb1c432d;
        local_1e4 = 0;
        cVar5 = FUN_14850c2c4(&local_248);
        if (cVar5 != '\0') {
          memcpy(&uStack_184,&local_248,0xa0);
          lVar9 = (longlong)(int)local_258[1];
          uVar6 = (int)local_258[1] + 1;
          *(uint *)(local_258 + 1) = uVar6;
          if (*(uint *)((longlong)local_258 + 0xc) < uVar6) {
            local_250 = lVar9;
            FUN_1485bdb72(local_258,lVar9);
            lVar9 = local_250;
          }
          puVar8 = (uint *)(lVar9 * 0xb0 + *local_258);
          *puVar8 = uVar13;
          puVar8[1] = uVar14;
          puVar8[2] = uVar7;
          memcpy(puVar8 + 3,&local_188,0xa4);
          local_25c = local_25c + 1;
        }
      }
      uVar14 = uVar13 + 1;
      if ((int)(uVar13 + 1) < (int)uVar11) {
        uVar14 = uVar11;
      }
      do {
        uVar7 = uVar14;
        if (uVar14 - 1 == uVar13) break;
        uVar13 = uVar13 + 1;
        uVar7 = uVar13;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0xb8) +
                                             (ulonglong)(uVar13 >> 9) * 8) +
                                           (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
      uVar13 = uVar7;
    } while (uVar13 != uVar11);
    bVar10 = 0 < local_25c;
  }
  if ((local_e0 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar10;
}



// FUNCTION 1485bd16c FUN_1485bd16c body=469 status=ok
// SIG undefined FUN_1485bd16c(void)

ulonglong FUN_1485bd16c(longlong param_1,undefined8 param_2,uint param_3,uint param_4,
                       longlong *param_5,double param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar8 = *(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc);
  uVar9 = 0;
  if ((uVar8 != 0) &&
     (uVar9 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x10) - 1U))) {
    uVar10 = 1;
    uVar4 = 1;
    if (1 < (int)uVar8) {
      uVar10 = uVar8;
    }
    do {
      uVar9 = uVar10;
      if (uVar10 == uVar4) break;
      uVar5 = uVar4 >> 9;
      uVar7 = uVar4 & 0x1ff;
      uVar9 = uVar4;
      uVar4 = uVar4 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x10))[uVar5] +
                                         (ulonglong)uVar7 * 2) - 1U));
  }
  uVar6 = 0;
  if (uVar9 != uVar8) {
    do {
      iVar3 = FUN_1483bfda6(param_1,uVar9);
      if (((uVar9 != param_4) && (uVar9 != param_3)) && (iVar3 < 1)) {
        FUN_148266644(param_1,local_80,uVar9);
        dVar11 = (double)FUN_146c7f000(param_2,local_80,&local_88);
        uVar2 = local_88;
        if (dVar11 < param_6 * param_6) {
          iVar3 = (int)param_5[1];
          *(uint *)(param_5 + 1) = iVar3 + 1U;
          local_90 = param_2;
          if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
            FUN_1485bdf96(param_5,iVar3);
          }
          lVar1 = *param_5;
          *(undefined8 *)(lVar1 + (longlong)iVar3 * 0x10) = uVar2;
          *(uint *)(lVar1 + 8 + (longlong)iVar3 * 0x10) = uVar9;
          uVar6 = (ulonglong)((int)uVar6 + 1);
          param_2 = local_90;
        }
      }
      uVar10 = uVar9 + 1;
      if ((int)(uVar9 + 1) < (int)uVar8) {
        uVar10 = uVar8;
      }
      do {
        uVar4 = uVar10;
        if (uVar10 - 1 == uVar9) break;
        uVar9 = uVar9 + 1;
        uVar4 = uVar9;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x10) +
                                             (ulonglong)(uVar9 >> 9) * 8) +
                                           (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
      uVar9 = uVar4;
    } while (uVar9 != uVar8);
    uVar6 = CONCAT71((int7)(uVar6 >> 8),0 < (int)uVar6);
  }
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1485bd342 FUN_1485bd342 body=808 status=ok
// SIG undefined FUN_1485bd342(void)

undefined4 *
FUN_1485bd342(longlong param_1,undefined4 *param_2,uint param_3,double param_4,double param_5)

{
  longlong lVar1;
  double dVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined4 *puVar6;
  double dVar7;
  int iVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_118 [40];
  int *local_f0;
  undefined4 *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  int local_d8;
  int iStack_d4;
  double local_d0;
  int *local_c8;
  undefined4 *local_c0;
  undefined1 local_b4 [4];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar12 = 0xffffffff;
  if (((int)param_3 < 0) ||
     (*(int *)(param_1 + 0xb0) * 0x200 + *(int *)(param_1 + 0xb4) <= (int)param_3)) {
    uVar10 = 0xffffffff;
  }
  else {
    uVar9 = (ulonglong)(param_3 & 0x1ff);
    uVar10 = 0xffffffff;
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(param_1 + 0xb8) + (ulonglong)(param_3 >> 9) * 8) +
                           uVar9 * 2) - 1U) < 0xfffe) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xf0) + (ulonglong)(param_3 >> 9) * 8);
      uVar12 = *(undefined4 *)(lVar1 + uVar9 * 0xc);
      uVar10 = *(undefined4 *)(lVar1 + 4 + uVar9 * 0xc);
    }
  }
  FUN_148266644(param_1,&local_c8,uVar10);
  FUN_148266644(param_1,&local_d8,uVar12);
  dVar5 = (double)local_c0 - local_d0;
  dVar2 = (double)local_c8 - (double)CONCAT44(iStack_d4,local_d8);
  dVar7 = SQRT(dVar2 * dVar2 + dVar5 * dVar5);
  if (0.0 < dVar7) {
    dVar2 = dVar2 * (1.0 / dVar7);
    dVar5 = dVar5 * (1.0 / dVar7);
  }
  else {
    dVar2 = 0.0;
    dVar5 = 0.0;
  }
  param_5 = (double)(-(ulonglong)(0.0 < dVar7) & (ulonglong)(dVar7 * 0.5)) - param_5;
  uVar11 = 0xffffffff;
  if ((-param_5 <= param_4) && (uVar12 = uVar10, param_4 <= param_5)) {
    puVar6 = (undefined4 *)(dVar5 * param_4 + (local_d0 + (double)local_c0) * 0.5);
    piVar3 = (int *)(dVar2 * param_4 +
                    ((double)CONCAT44(iStack_d4,local_d8) + (double)local_c8) * 0.5);
    local_c8 = piVar3;
    local_c0 = puVar6;
    iVar8 = FUN_1485bd736(param_1,&local_c8,*(undefined8 *)(param_1 + 0x1d8),0xffffffff);
    if (iVar8 == -1) {
      FUN_1485bd986(param_1,param_3,&local_e0);
      local_f0 = piVar3;
      local_e8 = puVar6;
      FUN_1485bdaf4(param_1,local_e0);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (double)puVar6 / *(double *)(param_1 + 0x1c8);
      auVar13 = roundsd(ZEXT816(0),auVar4,9);
      iStack_d4 = (int)auVar13._0_8_;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (double)piVar3 / *(double *)(param_1 + 0x1c8);
      auVar13 = roundsd(ZEXT816(0),auVar13,9);
      local_d8 = (int)auVar13._0_8_;
      local_c8 = &local_d8;
      local_c0 = &local_e0;
      FUN_146bfb2fc(param_1 + 0x150,local_b4,&local_c8,0);
      uVar12 = local_e0;
      uVar11 = local_dc;
    }
    else {
      FUN_1485bdc06(param_1,param_3,iVar8,&local_e0);
      uVar12 = local_e0;
      uVar11 = local_dc;
    }
  }
  *param_2 = uVar12;
  param_2[1] = uVar11;
  if ((local_b0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1485bd66c FUN_1485bd66c body=200 status=ok
// SIG undefined FUN_1485bd66c(void)

undefined8 FUN_1485bd66c(longlong param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xf0) + (ulonglong)(param_3 >> 9) * 8);
  uVar1 = *(uint *)(lVar2 + 4 + (ulonglong)(param_3 & 0x1ff) * 0xc);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x140) + (ulonglong)(uVar1 >> 5 & 0x3fffff8));
  uVar4 = (ulonglong)((uVar1 & 0xff) << 4);
  local_20 = *(undefined8 *)(lVar3 + uVar4);
  local_18 = *(undefined8 *)(lVar3 + 8 + uVar4);
  uVar1 = *(uint *)(lVar2 + (ulonglong)(param_3 & 0x1ff) * 0xc);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x140) + (ulonglong)(uVar1 >> 5 & 0x3fffff8));
  uVar4 = (ulonglong)((uVar1 & 0xff) << 4);
  local_30 = *(undefined8 *)(lVar2 + uVar4);
  local_28 = *(undefined8 *)(lVar2 + 8 + uVar4);
  FUN_148279e70(param_2);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485bd736 FUN_1485bd736 body=248 status=ok
// SIG undefined FUN_1485bd736(void)

int FUN_1485bd736(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined1 **local_90;
  undefined8 local_88 [2];
  undefined1 *local_78;
  undefined4 **local_70;
  undefined8 local_68 [2];
  undefined1 local_51;
  undefined1 *local_50;
  undefined1 *local_48;
  int local_40 [4];
  int *local_30;
  undefined8 local_28;
  longlong local_20;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_30 = &local_14;
  if (param_4 == -1) {
    local_48 = &local_51;
    local_90 = &local_50;
    local_50 = &LAB_146bfbec0;
    local_98 = local_68;
  }
  else {
    local_70 = &local_30;
    local_90 = &local_78;
    local_78 = &LAB_1485bd89c;
    local_98 = local_88;
  }
  local_98[1] = &local_28;
  *local_98 = FUN_1485bd830;
  local_28 = param_2;
  local_20 = param_1;
  local_14 = param_4;
  FUN_146bb5ebe(param_1 + 0x150,local_40,param_2,param_3);
  iVar1 = -1;
  if (local_40[0] != *(int *)(param_1 + 0x1d0)) {
    iVar1 = local_40[0];
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485bd830 FUN_1485bd830 body=106 status=ok
// SIG undefined FUN_1485bd830(void)

void FUN_1485bd830(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148266644(param_1[1],&local_28,*param_2);
  local_28 = local_28 - *(double *)*param_1;
  local_20 = local_20 - ((double *)*param_1)[1];
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 * local_28 + local_20 * local_20);
}



// FUNCTION 1485bd8a8 FUN_1485bd8a8 body=221 status=ok
// SIG undefined FUN_1485bd8a8(void)

undefined8 FUN_1485bd8a8(longlong param_1,uint param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if ((-1 < (int)param_2) &&
     ((int)param_2 < *(int *)(param_1 + 0xb0) * 0x200 + *(int *)(param_1 + 0xb4))) {
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(param_1 + 0xb8) + (ulonglong)(param_2 >> 9) * 8) +
                           (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe) {
      uVar5 = (ulonglong)((param_2 >> 9) << 3);
      lVar4 = (ulonglong)((param_2 & 0x1ff) << 2) * 3;
      uVar2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xf0) + uVar5) + lVar4);
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x140) + (ulonglong)(uVar2 >> 5 & 0x3fffff8));
      uVar6 = (ulonglong)((uVar2 & 0xff) << 4);
      uVar1 = *(undefined8 *)(lVar3 + 8 + uVar6);
      *param_3 = *(undefined8 *)(lVar3 + uVar6);
      param_3[1] = uVar1;
      uVar2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xf0) + uVar5) + 4 + lVar4);
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x140) + (ulonglong)(uVar2 >> 5 & 0x3fffff8));
      uVar5 = (ulonglong)((uVar2 & 0xff) << 4);
      uVar1 = *(undefined8 *)(lVar3 + 8 + uVar5);
      *param_4 = *(undefined8 *)(lVar3 + uVar5);
      param_4[1] = uVar1;
      return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 1485bd986 FUN_1485bd986 body=365 status=ok
// SIG undefined FUN_1485bd986(void)

undefined8 FUN_1485bd986(longlong *param_1,uint param_2,uint *param_3)

{
  short *psVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  
  uVar8 = 3;
  if ((-1 < (int)param_2) &&
     ((int)param_2 < (int)param_1[0x16] * 0x200 + *(int *)((longlong)param_1 + 0xb4))) {
    uVar10 = param_2 >> 9;
    uVar11 = param_2 & 0x1ff;
    if ((ushort)(*(short *)(*(longlong *)(param_1[0x17] + (ulonglong)uVar10 * 8) +
                           (ulonglong)uVar11 * 2) - 1U) < 0xfffe) {
      lVar4 = *(longlong *)(param_1[0x1e] + (ulonglong)(uVar10 * 8));
      lVar5 = (ulonglong)(uVar11 * 4) * 3;
      uVar2 = *(uint *)(lVar4 + 4 + lVar5);
      uVar3 = *(undefined4 *)(lVar4 + 8 + lVar5);
      uVar6 = (**(code **)(*param_1 + 8))(param_1,*(undefined4 *)(lVar4 + lVar5),uVar2);
      lVar4 = *(longlong *)(param_1[0x1e] + (ulonglong)(uVar10 * 8));
      uVar7 = *(uint *)(lVar4 + 4 + lVar5);
      if ((*(uint *)(lVar4 + lVar5) == uVar2) ||
         (bVar12 = uVar7 == uVar2, uVar7 = *(uint *)(lVar4 + lVar5), bVar12)) {
        uVar9 = uVar6;
        if ((int)uVar7 < (int)uVar6) {
          uVar9 = uVar7;
        }
        *(uint *)(lVar4 + lVar5) = uVar9;
        if ((int)uVar7 < (int)uVar6) {
          uVar7 = uVar6;
        }
        *(uint *)(*(longlong *)(param_1[0x1e] + (ulonglong)uVar10 * 8) + 4 + (ulonglong)uVar11 * 0xc
                 ) = uVar7;
      }
      FUN_146c86f00(param_1 + 8,uVar2,param_2);
      FUN_146c86bd4(param_1 + 8,uVar6,param_2);
      uVar10 = FUN_1483a47f2(param_1,uVar6,uVar2,uVar3);
      psVar1 = (short *)(*(longlong *)(param_1[2] + (ulonglong)(uVar6 >> 9) * 8) +
                        (ulonglong)(uVar6 & 0x1ff) * 2);
      *psVar1 = *psVar1 + 2;
      *param_3 = uVar6;
      param_3[1] = uVar10;
      *(int *)(param_1 + 0x20) = (int)param_1[0x20] + 1;
      *(int *)((longlong)param_1 + 0x104) = *(int *)((longlong)param_1 + 0x104) + 1;
      uVar8 = 0;
    }
  }
  return uVar8;
}



// FUNCTION 1485bdaf4 FUN_1485bdaf4 body=125 status=ok
// SIG undefined FUN_1485bdaf4(void)

void FUN_1485bdaf4(longlong param_1,uint param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  
  if (((-1 < (int)param_2) &&
      ((int)param_2 < *(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(param_1 + 0x10) + (ulonglong)(param_2 >> 9) * 8) +
                         (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    uVar1 = (ulonglong)((param_2 & 0xff) << 4);
    *(undefined8 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x140) + (ulonglong)(param_2 >> 8) * 8) + uVar1) =
         *param_3;
    *(undefined8 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x140) + (ulonglong)(param_2 >> 8) * 8) + 8 + uVar1) =
         param_3[1];
    *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
    *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
  }
  return;
}



// FUNCTION 1485bdb72 FUN_1485bdb72 body=146 status=ok
// SIG undefined FUN_1485bdb72(void)

void FUN_1485bdb72(longlong param_1,int param_2)

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



// FUNCTION 1485bdc06 FUN_1485bdc06 body=615 status=ok
// SIG undefined FUN_1485bdc06(void)

undefined8 FUN_1485bdc06(longlong param_1,uint param_2,uint param_3,uint *param_4)

{
  short *psVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  short sVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  
  uVar9 = 3;
  if ((-1 < (int)param_2) &&
     ((int)param_2 < *(int *)(param_1 + 0xb0) * 0x200 + *(int *)(param_1 + 0xb4))) {
    uVar13 = (ulonglong)(param_2 >> 9);
    uVar10 = (ulonglong)(param_2 & 0x1ff);
    if (((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + uVar13 * 8) + uVar10 * 2)
                 - 1U) < 0xfffe) &&
       ((uVar9 = 1, -1 < (int)param_3 &&
        ((int)param_3 < *(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc))))) {
      uVar14 = (ulonglong)(param_3 >> 9);
      uVar11 = (ulonglong)(param_3 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar14 * 8) + uVar11 * 2
                             ) - 1U) < 0xfffe) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xf0) + uVar13 * 8);
        uVar2 = *(uint *)(lVar4 + 4 + uVar10 * 0xc);
        uVar3 = *(undefined4 *)(lVar4 + 8 + uVar10 * 0xc);
        uVar6 = FUN_1483a4254(param_1,*(undefined4 *)(lVar4 + uVar10 * 0xc),param_3);
        if (uVar6 == 0xffffffff) {
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xf0) + uVar13 * 8);
          uVar8 = *(uint *)(lVar4 + uVar10 * 0xc);
          uVar7 = *(uint *)(lVar4 + 4 + uVar10 * 0xc);
          if ((uVar8 == uVar2) || (bVar15 = uVar7 == uVar2, uVar7 = uVar8, bVar15)) {
            uVar8 = uVar7;
            uVar5 = param_3;
            if ((int)uVar7 < (int)param_3) {
              uVar8 = param_3;
              uVar5 = uVar7;
            }
            *(uint *)(lVar4 + uVar10 * 0xc) = uVar5;
            *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xf0) + uVar13 * 8) + 4 + uVar10 * 0xc)
                 = uVar8;
          }
          FUN_146c86f00(param_1 + 0x40,uVar2,param_2);
          FUN_146c86bd4(param_1 + 0x40,param_3,param_2);
          sVar12 = 1;
        }
        else {
          sVar12 = 0;
          FUN_1485bde6e(param_1,param_2,0);
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0xf0) + (ulonglong)(uVar6 >> 9) * 8) + 8 +
           (ulonglong)(uVar6 & 0x1ff) * 0xc) = uVar3;
        }
        uVar8 = FUN_1483a4254(param_1,param_3,uVar2);
        if (uVar8 == 0xffffffff) {
          uVar8 = FUN_1483a47f2(param_1,param_3,uVar2,uVar3);
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar14 * 8);
          *(short *)(lVar4 + uVar11 * 2) = sVar12 + *(short *)(lVar4 + uVar11 * 2) + 1;
          if (uVar6 != 0xffffffff) {
            psVar1 = (short *)(*(longlong *)
                                (*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar2 >> 9) * 8) +
                              (ulonglong)(uVar2 & 0x1ff) * 2);
            *psVar1 = *psVar1 + 1;
          }
        }
        else {
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0xf0) + (ulonglong)(uVar8 >> 9) * 8) + 8 +
           (ulonglong)(uVar8 & 0x1ff) * 0xc) = uVar3;
          psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar14 * 8) + uVar11 * 2)
          ;
          *psVar1 = *psVar1 + sVar12;
          if (uVar6 == 0xffffffff) {
            FUN_146c09a68(param_1 + 8,uVar2,1);
          }
        }
        *param_4 = param_3;
        param_4[1] = uVar8;
        *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
        *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
        uVar9 = 0;
      }
    }
  }
  return uVar9;
}



// FUNCTION 1485bde6e FUN_1485bde6e body=296 status=ok
// SIG undefined FUN_1485bde6e(void)

undefined8 FUN_1485bde6e(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar4 = 3;
  if ((-1 < (int)param_2) &&
     ((int)param_2 < *(int *)(param_1 + 0xb0) * 0x200 + *(int *)(param_1 + 0xb4))) {
    uVar5 = (ulonglong)(param_2 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(param_1 + 0xb8) + (ulonglong)(param_2 >> 9) * 8) +
                           uVar5 * 2) - 1U) < 0xfffe) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xf0) + (ulonglong)(param_2 >> 9) * 8);
      uVar6 = *(uint *)(lVar2 + uVar5 * 0xc);
      uVar1 = *(uint *)(lVar2 + 4 + uVar5 * 0xc);
      lVar2 = param_1 + 0x40;
      FUN_146c86f00(lVar2,uVar6,param_2);
      FUN_146c86f00(lVar2,uVar1,param_2);
      FUN_146c09a68(param_1 + 0xb0,param_2,1);
      bVar3 = true;
      do {
        bVar7 = bVar3;
        FUN_146c09a68(param_1 + 8,uVar6,1);
        if ((param_3 != '\0') &&
           (*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar6 >> 9) * 8) +
                      (ulonglong)(uVar6 & 0x1ff) * 2) == 1)) {
          FUN_146c09a68(param_1 + 8,uVar6,1);
          FUN_146c8b31e(lVar2,uVar6);
        }
        uVar4 = 0;
        uVar6 = uVar1;
        bVar3 = false;
      } while (bVar7);
      *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
      *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
    }
  }
  return uVar4;
}



// FUNCTION 1485bdf96 FUN_1485bdf96 body=132 status=ok
// SIG undefined FUN_1485bdf96(void)

void FUN_1485bdf96(longlong param_1,int param_2)

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



// FUNCTION 1485be01b FUN_1485be01b body=666 status=ok
// SIG undefined FUN_1485be01b(void)

void FUN_1485be01b(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  uint uVar6;
  double *pdVar7;
  double *pdVar8;
  longlong *plVar9;
  double *pdVar10;
  int iVar11;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  double *pdVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = (ulonglong)param_2 * 0x10 + param_1 + -0x10;
    local_358 = param_1;
    fVar16 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar16 + fVar16);
    plVar9 = &local_358;
    do {
      pdVar4 = (double *)*plVar9;
      pdVar10 = (double *)plVar9[1];
      iVar11 = (int)plVar9[2];
      uVar6 = (int)((ulonglong)((longlong)pdVar10 - (longlong)pdVar4) >> 4) + 1;
      pdVar8 = pdVar10;
      pdVar12 = pdVar10;
      pdVar13 = pdVar4;
      if (iVar11 != 0) {
LAB_1485be0e5:
        if (8 < (int)uVar6) {
          dVar19 = pdVar4[(ulonglong)(uVar6 >> 1) * 2];
          dVar1 = (pdVar4 + (ulonglong)(uVar6 >> 1) * 2)[1];
          dVar2 = pdVar4[1];
          pdVar4[(ulonglong)(uVar6 >> 1) * 2] = *pdVar4;
          (pdVar4 + (ulonglong)(uVar6 >> 1) * 2)[1] = dVar2;
          *pdVar4 = dVar19;
          pdVar4[1] = dVar1;
          pdVar7 = pdVar10 + 2;
          pdVar5 = pdVar4;
          do {
            pdVar8 = pdVar5 + 2;
            pdVar3 = pdVar5 + 2;
            do {
              pdVar14 = pdVar3;
              pdVar5 = pdVar8;
              if (pdVar10 < pdVar5) break;
              pdVar8 = pdVar5 + 2;
              pdVar3 = pdVar14 + 2;
            } while (*pdVar5 < *pdVar4 || *pdVar5 == *pdVar4);
            pdVar3 = pdVar7 + -4;
            do {
              pdVar8 = pdVar7;
              pdVar15 = pdVar3;
              pdVar7 = pdVar8 + -2;
              if (pdVar7 <= pdVar4) break;
              pdVar3 = pdVar15 + -2;
            } while (*pdVar4 < *pdVar7 || *pdVar4 == *pdVar7);
            if (pdVar7 < pdVar5) goto LAB_1485be18d;
            dVar19 = *pdVar5;
            dVar1 = pdVar5[1];
            dVar2 = pdVar8[-1];
            *pdVar5 = *pdVar7;
            pdVar5[1] = dVar2;
            *pdVar7 = dVar19;
            pdVar8[-1] = dVar1;
          } while( true );
        }
        if (pdVar4 < pdVar10) {
          do {
            pdVar8 = pdVar4;
            if (pdVar4 + 2 <= pdVar10) {
              uVar17 = SUB84(*pdVar4,0);
              uVar18 = (undefined4)((ulonglong)*pdVar4 >> 0x20);
              pdVar12 = pdVar4 + 2;
              do {
                dVar19 = *pdVar12;
                if ((double)CONCAT44(uVar18,uVar17) <= dVar19 &&
                    dVar19 != (double)CONCAT44(uVar18,uVar17)) {
                  pdVar8 = pdVar12;
                }
                if (dVar19 <= (double)CONCAT44(uVar18,uVar17)) {
                  dVar19 = (double)CONCAT44(uVar18,uVar17);
                }
                pdVar12 = pdVar12 + 2;
                uVar17 = SUB84(dVar19,0);
                uVar18 = (undefined4)((ulonglong)dVar19 >> 0x20);
              } while (pdVar12 <= pdVar10);
            }
            local_58 = *pdVar8;
            uStack_50 = pdVar8[1];
            dVar1 = local_58;
            dVar2 = uStack_50;
            dVar19 = pdVar10[1];
            *pdVar8 = *pdVar10;
            pdVar8[1] = dVar19;
            local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
            *(undefined4 *)pdVar10 = (undefined4)local_58;
            *(undefined4 *)((longlong)pdVar10 + 4) = local_58._4_4_;
            *(undefined4 *)(pdVar10 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)pdVar10 + 0xc) = uStack_50._4_4_;
            pdVar10 = pdVar10 + -2;
            local_58 = dVar1;
            uStack_50 = dVar2;
          } while (pdVar4 < pdVar10);
        }
        goto LAB_1485be291;
      }
LAB_1485be2a6:
      FUN_1485be2b6(pdVar4,uVar6,pdVar8,param_4);
LAB_1485be291:
      plVar9 = plVar9 + -3;
    } while (&local_358 <= plVar9);
  }
  if ((local_40 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1485be18d:
  local_58 = *pdVar4;
  uStack_50 = pdVar4[1];
  dVar1 = local_58;
  dVar2 = uStack_50;
  dVar19 = pdVar8[-1];
  *pdVar4 = *pdVar7;
  pdVar4[1] = dVar19;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)pdVar7 = (undefined4)local_58;
  *(undefined4 *)((longlong)pdVar8 + -0xc) = local_58._4_4_;
  *(undefined4 *)(pdVar8 + -1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)pdVar8 + -4) = uStack_50._4_4_;
  iVar11 = iVar11 + -1;
  pdVar8 = pdVar8 + -4;
  local_58 = dVar1;
  uStack_50 = dVar2;
  if ((longlong)pdVar15 - (longlong)pdVar13 < (longlong)pdVar12 - (longlong)pdVar14) {
    if (pdVar5 < pdVar10) {
      *plVar9 = (longlong)pdVar5;
      plVar9[1] = (longlong)pdVar10;
      *(int *)(plVar9 + 2) = iVar11;
      plVar9 = plVar9 + 3;
    }
    pdVar14 = pdVar4;
    if (pdVar7 <= pdVar4 + 2) goto LAB_1485be291;
  }
  else {
    if (pdVar4 + 2 < pdVar7) {
      *plVar9 = (longlong)pdVar4;
      plVar9[1] = (longlong)pdVar8;
      *(int *)(plVar9 + 2) = iVar11;
      plVar9 = plVar9 + 3;
    }
    pdVar4 = pdVar5;
    pdVar8 = pdVar10;
    pdVar15 = pdVar10;
    if (pdVar10 <= pdVar5) goto LAB_1485be291;
  }
  uVar6 = (int)((ulonglong)((longlong)pdVar15 - (longlong)pdVar14) >> 4) + 1;
  pdVar10 = pdVar8;
  pdVar12 = pdVar15;
  pdVar13 = pdVar14;
  if (iVar11 == 0) goto LAB_1485be2a6;
  goto LAB_1485be0e5;
}



// FUNCTION 1485be2b6 FUN_1485be2b6 body=471 status=ok
// SIG undefined FUN_1485be2b6(void)

void FUN_1485be2b6(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    iVar5 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar10 = iVar5;
joined_r0x0001485be2ea:
    do {
      iVar7 = iVar5 * 2 + 1;
      if (iVar7 < (int)param_2) {
        iVar9 = iVar5 * 2 + 2;
        if ((iVar9 < (int)param_2) &&
           ((double)param_1[(longlong)iVar7 * 2] < (double)param_1[(longlong)iVar9 * 2] ||
            (double)param_1[(longlong)iVar7 * 2] == (double)param_1[(longlong)iVar9 * 2])) {
          iVar7 = iVar9;
        }
        if ((double)param_1[(longlong)iVar5 * 2] <= (double)param_1[(longlong)iVar7 * 2] &&
            (double)param_1[(longlong)iVar7 * 2] != (double)param_1[(longlong)iVar5 * 2]) {
          puVar8 = param_1 + (longlong)iVar5 * 2;
          puVar11 = param_1 + (longlong)iVar7 * 2;
          uVar2 = *puVar8;
          uVar3 = puVar8[1];
          uVar4 = puVar11[1];
          *puVar8 = *puVar11;
          puVar8[1] = uVar4;
          local_28._0_4_ = (undefined4)uVar2;
          local_28._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar3;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          *(undefined4 *)puVar11 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar11 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_20._4_4_;
          iVar5 = iVar7;
          local_28 = uVar2;
          uStack_20 = uVar3;
          goto joined_r0x0001485be2ea;
        }
      }
      bVar12 = iVar10 != 0;
      iVar5 = iVar10 + -1;
      iVar10 = iVar5;
    } while (bVar12);
    if (1 < (int)param_2) {
      uVar6 = (ulonglong)param_2 - 1;
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = (param_1 + uVar6 * 2)[1];
      *param_1 = param_1[uVar6 * 2];
      param_1[1] = uVar4;
      local_28._0_4_ = (undefined4)uVar2;
      local_28._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar3;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      puVar8 = param_1 + uVar6 * 2;
      *(undefined4 *)puVar8 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar8 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar8 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar8 + 0xc) = uStack_20._4_4_;
      local_28 = uVar2;
      uStack_20 = uVar3;
      if (param_2 != 2) {
        do {
          iVar5 = 0;
          iVar7 = 1;
          iVar10 = 0;
          do {
            iVar5 = iVar5 + 2;
            iVar9 = iVar7;
            if (((longlong)iVar5 < (longlong)uVar6) &&
               ((double)param_1[(longlong)iVar7 * 2] < (double)param_1[(longlong)iVar5 * 2] ||
                (double)param_1[(longlong)iVar7 * 2] == (double)param_1[(longlong)iVar5 * 2])) {
              iVar9 = iVar5;
            }
            if ((double)param_1[(longlong)iVar9 * 2] < (double)param_1[(longlong)iVar10 * 2] ||
                (double)param_1[(longlong)iVar9 * 2] == (double)param_1[(longlong)iVar10 * 2])
            break;
            puVar8 = param_1 + (longlong)iVar10 * 2;
            puVar11 = param_1 + (longlong)iVar9 * 2;
            uVar2 = *puVar8;
            uVar3 = puVar8[1];
            uVar4 = puVar11[1];
            *puVar8 = *puVar11;
            puVar8[1] = uVar4;
            *puVar11 = uVar2;
            puVar11[1] = uVar3;
            iVar5 = iVar9 * 2;
            iVar7 = iVar9 * 2 + 1;
            iVar10 = iVar9;
          } while ((longlong)iVar7 < (longlong)uVar6);
          uVar1 = uVar6 - 1;
          uVar2 = *param_1;
          uVar3 = param_1[1];
          uVar4 = (param_1 + uVar1 * 2)[1];
          *param_1 = param_1[uVar1 * 2];
          param_1[1] = uVar4;
          local_28._0_4_ = (undefined4)uVar2;
          local_28._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar3;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          puVar8 = param_1 + uVar1 * 2;
          *(undefined4 *)puVar8 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar8 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar8 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar8 + 0xc) = uStack_20._4_4_;
          bVar12 = 2 < uVar6;
          uVar6 = uVar1;
          local_28 = uVar2;
          uStack_20 = uVar3;
        } while (bVar12);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1485be562 FUN_1485be562 body=59 status=ok
// SIG undefined FUN_1485be562(void)

undefined8 FUN_1485be562(longlong *param_1)

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



// FUNCTION 1485be690 FUN_1485be690 body=59 status=ok
// SIG undefined FUN_1485be690(void)

undefined8 FUN_1485be690(longlong *param_1)

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



// FUNCTION 1485be7ae FUN_1485be7ae body=59 status=ok
// SIG undefined FUN_1485be7ae(void)

undefined8 FUN_1485be7ae(longlong *param_1)

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



// FUNCTION 1485be8bc FUN_1485be8bc body=59 status=ok
// SIG undefined FUN_1485be8bc(void)

undefined8 FUN_1485be8bc(longlong *param_1)

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



// FUNCTION 1485be9ea FUN_1485be9ea body=59 status=ok
// SIG undefined FUN_1485be9ea(void)

undefined8 FUN_1485be9ea(longlong *param_1)

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



// FUNCTION 1485beaf6 FUN_1485beaf6 body=59 status=ok
// SIG undefined FUN_1485beaf6(void)

undefined8 FUN_1485beaf6(longlong *param_1)

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



// FUNCTION 1485bec28 FUN_1485bec28 body=59 status=ok
// SIG undefined FUN_1485bec28(void)

undefined8 FUN_1485bec28(longlong *param_1)

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



// FUNCTION 1485bed6a FUN_1485bed6a body=59 status=ok
// SIG undefined FUN_1485bed6a(void)

undefined8 FUN_1485bed6a(longlong *param_1)

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



// FUNCTION 1485beec6 FUN_1485beec6 body=59 status=ok
// SIG undefined FUN_1485beec6(void)

undefined8 FUN_1485beec6(longlong *param_1)

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



// FUNCTION 1485bef68 FUN_1485bef68 body=38 status=ok
// SIG undefined FUN_1485bef68(void)

undefined8 FUN_1485bef68(undefined8 param_1,int param_2)

{
  FUN_1485b3046();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485bf030 FUN_1485bf030 body=59 status=ok
// SIG undefined FUN_1485bf030(void)

undefined8 FUN_1485bf030(longlong *param_1)

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



// FUNCTION 1485bf17a FUN_1485bf17a body=59 status=ok
// SIG undefined FUN_1485bf17a(void)

undefined8 FUN_1485bf17a(longlong *param_1)

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



// FUNCTION 1485bf21c FUN_1485bf21c body=79 status=ok
// SIG undefined FUN_1485bf21c(void)

void FUN_1485bf21c(undefined8 *param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_2 + 0x208) != 0) {
    lVar2 = FUN_146bcdc68(*(longlong *)(param_2 + 0x208),*(undefined8 *)*param_1);
    if (lVar2 != 0) {
      *(undefined1 *)param_1[1] = 1;
      uVar1 = (**(code **)param_1[3])(((undefined8 *)param_1[3])[1],param_2,lVar2);
      *(undefined1 *)param_1[2] = uVar1;
    }
  }
  return;
}



// FUNCTION 1485bf26b FUN_1485bf26b body=19 status=ok
// SIG undefined FUN_1485bf26b(void)

void FUN_1485bf26b(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 1485bf27e FUN_1485bf27e body=132 status=ok
// SIG undefined FUN_1485bf27e(void)

void FUN_1485bf27e(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1485bf304 FUN_1485bf304 body=62 status=ok
// SIG undefined FUN_1485bf304(void)

void FUN_1485bf304(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1485bf342(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 1485bf342 FUN_1485bf342 body=93 status=ok
// SIG undefined FUN_1485bf342(void)

ulonglong FUN_1485bf342(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1485bf3a0 FUN_1485bf3a0 body=128 status=ok
// SIG undefined FUN_1485bf3a0(void)

void FUN_1485bf3a0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_2 + 0x208) != 0) {
    lVar1 = FUN_146bcdc68(*(longlong *)(param_2 + 0x208),*(undefined8 *)*param_1);
    if (lVar1 != 0) {
      *(undefined1 *)param_1[1] = 1;
      (**(code **)param_1[3])(&local_24,((undefined8 *)param_1[3])[1],param_2,lVar1);
      *(undefined4 *)param_1[2] = local_24;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485bf428 FUN_1485bf428 body=79 status=ok
// SIG undefined FUN_1485bf428(void)

void FUN_1485bf428(undefined8 *param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_2 + 0x208) != 0) {
    lVar2 = FUN_146bcdc68(*(longlong *)(param_2 + 0x208),*(undefined8 *)*param_1);
    if (lVar2 != 0) {
      *(undefined1 *)param_1[1] = 1;
      uVar1 = (**(code **)param_1[3])(((undefined8 *)param_1[3])[1],param_2,lVar2);
      *(undefined1 *)param_1[2] = uVar1;
    }
  }
  return;
}



// FUNCTION 1485bf478 FUN_1485bf478 body=196 status=ok
// SIG undefined FUN_1485bf478(void)

void FUN_1485bf478(longlong *param_1,short param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0x30);
  if (*(longlong *)(lVar1 + 0x30) == 0) {
    lVar2 = lVar1;
  }
  iVar3 = *(int *)(lVar1 + 0x38);
  if ((longlong)iVar3 != 0) {
    iVar5 = 1;
    lVar6 = 0;
    lVar4 = 0;
    do {
      if (*(short *)(lVar2 + lVar6) == param_2) {
        if (iVar5 == 0) {
          return;
        }
        if (iVar3 - iVar5 != 0) {
          memmove((void *)(lVar2 + (lVar4 >> 0x20) * 4),(void *)(lVar2 + (lVar4 >> 0x20) * 4 + 4),
                  (longlong)(iVar3 - iVar5) << 2);
          iVar3 = *(int *)(lVar1 + 0x38);
        }
        *(int *)(lVar1 + 0x38) = iVar3 + -1;
        FUN_146beb7e4(lVar1);
        FUN_146bfd9a4(param_1,param_3);
        if (*param_3 != 2) {
          return;
        }
        FUN_146bebfde(param_1,2);
        return;
      }
      lVar4 = lVar4 + 0x100000000;
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 4;
    } while ((longlong)iVar3 << 2 != lVar6);
  }
  return;
}



// FUNCTION 1485bf53c FUN_1485bf53c body=133 status=ok
// SIG undefined FUN_1485bf53c(void)

void FUN_1485bf53c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14af79df0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x12];
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
  *param_1 = &PTR_LAB_14aee4ae0;
  FUN_146c81a14(param_1 + 0xc);
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001485bf5b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 1485bf5c2 FUN_1485bf5c2 body=38 status=ok
// SIG undefined FUN_1485bf5c2(void)

undefined8 FUN_1485bf5c2(undefined8 param_1,int param_2)

{
  FUN_1485bf53c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485bf5e8 FUN_1485bf5e8 body=358 status=ok
// SIG undefined FUN_1485bf5e8(void)

void FUN_1485bf5e8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar4 = ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) + uVar2;
  if (uVar2 < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_1400bac10(param_1,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar2 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar3)) {
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_144a56d22(param_1);
    }
  }
  plVar1 = param_2 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = (int)param_2[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_2;
  if ((iStack_3c != iVar3) || (uStack_48 != plVar1)) {
    do {
      FUN_144984904(param_1,&local_50,(longlong)iStack_5c * 0xc + *local_78,0);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_2 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar3));
  }
  FUN_1402226aa(param_2);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485bf750 FUN_1485bf750 body=264 status=ok
// SIG undefined FUN_1485bf750(void)

undefined8 * FUN_1485bf750(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x1c);
  uVar8 = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  if (iVar1 * 0x200 + iVar2 != 0) {
    do {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar8 >> 9) * 8);
      uVar4 = (ulonglong)(((uint)uVar8 & 0x1ff) << 6);
      lVar3 = *(longlong *)(lVar6 + 0x30 + uVar4);
      lVar5 = lVar6 + uVar4;
      if (lVar3 != 0) {
        lVar5 = lVar3;
      }
      lVar6 = (longlong)*(int *)(lVar6 + 0x38 + uVar4);
      if (lVar6 != 0) {
        lVar3 = 0;
        do {
          local_4c = (uint)*(ushort *)(lVar5 + lVar3);
          FUN_144984904(param_2,local_50,&local_4c,0);
          lVar3 = lVar3 + 4;
        } while (lVar6 * 4 != lVar3);
        iVar1 = *(int *)(param_1 + 0x18);
        iVar2 = *(int *)(param_1 + 0x1c);
      }
      uVar7 = (uint)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < (uint)(iVar1 * 0x200 + iVar2));
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485bf85a FUN_1485bf85a body=91 status=ok
// SIG undefined FUN_1485bf85a(void)

longlong FUN_1485bf85a(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_14105a8f4(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 1485bf8b6 FUN_1485bf8b6 body=109 status=ok
// SIG undefined FUN_1485bf8b6(void)

void FUN_1485bf8b6(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1485bf9b2(param_1,iVar1);
    }
    FUN_1485bf954((longlong)iVar1 * 0xe0 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1485bfa46(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1485bf924 FUN_1485bf924 body=48 status=ok
// SIG undefined FUN_1485bf924(void)

void FUN_1485bf924(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xe0,0x10);
  }
  return;
}



// FUNCTION 1485bf954 FUN_1485bf954 body=94 status=ok
// SIG undefined FUN_1485bf954(void)

void FUN_1485bf954(undefined4 *param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0xffffffff;
    *(undefined8 *)(param_1 + 1) = 0;
    param_1[3] = 0xffffffff;
    puVar2 = &DAT_14c846480;
    puVar3 = (undefined8 *)(param_1 + 4);
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar2 = &DAT_14c846480;
    puVar3 = (undefined8 *)(param_1 + 0x1c);
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined1 **)(param_1 + 0x34) = &DAT_3f8000003f800000;
    *(undefined1 **)(param_1 + 0x36) = &DAT_3f8000003f800000;
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 1485bf9b2 FUN_1485bf9b2 body=146 status=ok
// SIG undefined FUN_1485bf9b2(void)

void FUN_1485bf9b2(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0xe0,0x10);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 5;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0xe0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1485bfa46 FUN_1485bfa46 body=62 status=ok
// SIG undefined FUN_1485bfa46(void)

void FUN_1485bfa46(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1485bfa84(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xe0,0x10);
  }
  return;
}



// FUNCTION 1485bfa84 FUN_1485bfa84 body=110 status=ok
// SIG undefined FUN_1485bfa84(void)

ulonglong FUN_1485bfa84(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xe0) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1485bfabd;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xe0,0x10);
      param_2 = param_2 / 0xe0;
    }
  }
LAB_1485bfabd:
  return param_2 & 0xffffffff;
}



// FUNCTION 1485bfaf2 FUN_1485bfaf2 body=465 status=ok
// SIG undefined FUN_1485bfaf2(void)

void FUN_1485bfaf2(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  char param_5,double *param_6,double *param_7,double *param_8,double *param_9)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  undefined1 auStack_98 [32];
  void *local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1485bfcc4();
  if ((param_4 != 0 && param_3 != 0) && param_5 == '\x01') {
    local_78 = (void *)0x0;
    uStack_70 = 0;
    FUN_1485bfcc4(param_3,param_4,&local_78);
    uVar2 = uStack_60;
    lVar3 = (longlong)(int)(uint)uStack_70;
    if (lVar3 != 0) {
      iVar1 = (int)uStack_60;
      lVar4 = (longlong)(int)uStack_60;
      uStack_60 = CONCAT44(uStack_60._4_4_,(int)uStack_60 + (uint)uStack_70);
      if ((uint)(uStack_60._4_4_ - iVar1) < (uint)uStack_70) {
        FUN_144941252(&local_68,uVar2 & 0xffffffff);
      }
      memcpy((void *)(lVar4 * 8 + local_68),local_78,lVar3 << 3);
    }
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  *param_6 = -3.3999999521443642e+38;
  *param_7 = 3.3999999521443642e+38;
  *param_8 = 0.0;
  if ((longlong)(int)uStack_60 == 0) {
    dVar5 = *param_9;
  }
  else {
    lVar3 = 0;
    do {
      dVar5 = *(double *)(local_68 + lVar3);
      if (*(double *)(local_68 + lVar3) <= *param_6) {
        dVar5 = *param_6;
      }
      *param_6 = dVar5;
      dVar5 = *(double *)(local_68 + lVar3);
      if (*param_7 <= *(double *)(local_68 + lVar3)) {
        dVar5 = *param_7;
      }
      *param_7 = dVar5;
      *param_8 = *(double *)(local_68 + lVar3) / (double)(int)uStack_60 + *param_8;
      dVar5 = *(double *)(local_68 + lVar3) * *(double *)(local_68 + lVar3) + *param_9;
      *param_9 = dVar5;
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)uStack_60 * 8 != lVar3);
  }
  dVar5 = dVar5 / (double)(int)uStack_60;
  if (dVar5 < 0.0) {
    dVar5 = sqrt(dVar5);
  }
  else {
    dVar5 = SQRT(dVar5);
  }
  *param_9 = dVar5;
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1485bfcc4 FUN_1485bfcc4 body=166 status=ok
// SIG undefined FUN_1485bfcc4(void)

void FUN_1485bfcc4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined8 *local_68;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_146be4e92(param_3,*(undefined4 *)(param_1 + 0x50));
  local_38 = &local_58;
  local_68 = &local_30;
  local_30 = 0;
  local_28 = 0;
  local_40 = &LAB_1485bfd6c;
  local_70 = 0;
  local_58 = param_1;
  local_50 = param_2;
  local_48 = param_3;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 0x50),1);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485bfd74 FUN_1485bfd74 body=297 status=ok
// SIG undefined FUN_1485bfd74(void)

void FUN_1485bfd74(longlong *param_1,uint param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 auStack_d8 [40];
  double local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88 [2];
  longlong local_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (-1 < (int)param_2) {
    lVar2 = *param_1;
    if ((int)param_2 < *(int *)(lVar2 + 0x20) * 0x200 + *(int *)(lVar2 + 0x24)) {
      uVar4 = (ulonglong)(param_2 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar2 + 0x28) + (ulonglong)(param_2 >> 9) * 8) +
                             uVar4 * 2) - 1U) < 0xfffe) {
        lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)(param_2 >> 9) * 8);
        local_98 = *(undefined8 *)(lVar2 + 0x10 + uVar4 * 0x18);
        puVar1 = (undefined4 *)(lVar2 + uVar4 * 0x18);
        local_a8 = *puVar1;
        uStack_a4 = puVar1[1];
        uStack_a0 = puVar1[2];
        uStack_9c = puVar1[3];
        local_88[0] = 0x7fefffffffffffff;
        local_78 = 0;
        local_68 = (longlong *)0x0;
        local_38 = 0;
        (**(code **)(*(longlong *)param_1[1] + 0x20))
                  ((longlong *)param_1[1],&local_a8,&local_b0,local_88);
        if (local_78 != 0) {
          plVar3 = local_68;
          if (local_68 == (longlong *)0x0) {
            plVar3 = local_58;
          }
          (**(code **)(*plVar3 + 0x10))();
        }
        if (local_b0 < 0.0) {
          local_b0 = sqrt(local_b0);
        }
        else {
          local_b0 = SQRT(local_b0);
        }
        *(double *)(*(longlong *)param_1[2] + (ulonglong)param_2 * 8) = local_b0;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485bfe9e FUN_1485bfe9e body=132 status=ok
// SIG undefined FUN_1485bfe9e(void)

void FUN_1485bfe9e(longlong param_1,int param_2)

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



// FUNCTION 1485bff24 FUN_1485bff24 body=62 status=ok
// SIG undefined FUN_1485bff24(void)

void FUN_1485bff24(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1485bff62(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1485bff62 FUN_1485bff62 body=93 status=ok
// SIG undefined FUN_1485bff62(void)

ulonglong FUN_1485bff62(uint param_1,uint param_2)

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



// FUNCTION 1485bffc0 FUN_1485bffc0 body=48 status=ok
// SIG undefined FUN_1485bffc0(void)

void FUN_1485bffc0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1485bfff0 FUN_1485bfff0 body=38 status=ok
// SIG undefined FUN_1485bfff0(void)

undefined8 FUN_1485bfff0(undefined8 param_1,int param_2)

{
  FUN_1485c0062();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485c0016 FUN_1485c0016 body=38 status=ok
// SIG undefined FUN_1485c0016(void)

undefined8 FUN_1485c0016(undefined8 param_1,int param_2)

{
  FUN_1485c0062();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485c003c FUN_1485c003c body=38 status=ok
// SIG undefined FUN_1485c003c(void)

undefined8 FUN_1485c003c(undefined8 param_1,int param_2)

{
  FUN_1485c0062();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485c0062 FUN_1485c0062 body=116 status=ok
// SIG undefined FUN_1485c0062(void)

void FUN_1485c0062(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14af7af50;
  plVar3 = (longlong *)param_1[0x12];
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
  *param_1 = &PTR_LAB_14aee4ae0;
  FUN_146c81a14(param_1 + 0xc);
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001485c00cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 1485c00d6 FUN_1485c00d6 body=38 status=ok
// SIG undefined FUN_1485c00d6(void)

undefined8 FUN_1485c00d6(undefined8 param_1,int param_2)

{
  FUN_1485c0062();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485c00fc FUN_1485c00fc body=252 status=ok
// SIG undefined FUN_1485c00fc(void)

float FUN_1485c00fc(longlong *param_1,float *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  
  fVar8 = (param_2[1] - *(float *)((longlong)param_1 + 0x2c)) / *(float *)((longlong)param_1 + 0x34)
  ;
  fVar9 = (*param_2 - *(float *)(param_1 + 5)) / *(float *)(param_1 + 6);
  lVar3 = (longlong)fVar9;
  lVar5 = (longlong)fVar8;
  lVar1 = param_1[3];
  lVar2 = lVar1 + -1;
  lVar4 = lVar3;
  if (lVar2 <= lVar3) {
    lVar4 = lVar2;
  }
  lVar7 = 0;
  if (lVar4 < 1) {
    lVar4 = lVar7;
  }
  if (lVar3 + 1 < lVar2) {
    lVar2 = lVar3 + 1;
  }
  if (lVar2 < 1) {
    lVar2 = lVar7;
  }
  lVar6 = param_1[4] + -1;
  lVar3 = lVar5;
  if (lVar6 <= lVar5) {
    lVar3 = lVar6;
  }
  if (lVar3 < 1) {
    lVar3 = lVar7;
  }
  if (lVar5 + 1 < lVar6) {
    lVar6 = lVar5 + 1;
  }
  if (lVar6 < 1) {
    lVar6 = lVar7;
  }
  fVar9 = fVar9 - (float)lVar4;
  if (1.0 <= fVar9) {
    fVar9 = 1.0;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  fVar8 = fVar8 - (float)lVar3;
  if (1.0 <= fVar8) {
    fVar8 = 1.0;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  lVar3 = *param_1 + lVar3 * lVar1 * 4;
  lVar1 = *param_1 + lVar6 * lVar1 * 4;
  return fVar8 * fVar9 * *(float *)(lVar1 + lVar2 * 4) +
         (1.0 - fVar8) * fVar9 * *(float *)(lVar3 + lVar2 * 4) +
         (1.0 - fVar9) * (1.0 - fVar8) * *(float *)(lVar3 + lVar4 * 4) +
         (1.0 - fVar9) * fVar8 * *(float *)(lVar1 + lVar4 * 4);
}



// FUNCTION 1485c01f8 FUN_1485c01f8 body=870 status=ok
// SIG undefined FUN_1485c01f8(void)

void FUN_1485c01f8(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 local_80;
  undefined1 local_69;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)(param_1 + 0x38);
  *(longlong *)(param_1 + 0x278) = lVar4;
  local_68 = 0;
  lStack_60 = 0;
  local_58 = 0;
  if (lVar4 == 0) {
    lVar8 = *(longlong *)(param_1 + 8);
  }
  else {
    lVar8 = *(longlong *)(param_1 + 8);
    if (*(int *)(lVar4 + 0x10) == *(int *)(lVar8 + 0x50)) goto LAB_1485c0265;
  }
  local_68 = lVar8;
  FUN_146c37e28(&local_68,CONCAT71((int7)((ulonglong)lVar8 >> 8),1),1);
  *(longlong **)(param_1 + 0x278) = &local_68;
  lVar8 = *(longlong *)(param_1 + 8);
LAB_1485c0265:
  local_80 = 1;
  local_88 = 1;
  FUN_146c005f0(param_1 + 0x40,lVar8,1,1);
  FUN_14051b394((longlong *)(param_1 + 0x268),
                *(int *)(param_1 + 0x60) * 0x200 + *(int *)(param_1 + 100),1);
  local_69 = 0;
  FUN_14475e60e((longlong *)(param_1 + 0x280),&local_69,
                *(int *)(param_1 + 0x60) * 0x200 + *(int *)(param_1 + 100));
  plVar1 = (longlong *)(param_1 + 0x290);
  *(undefined4 *)(param_1 + 0x298) = 0;
  if (*(int *)(param_1 + 0x29c) < 0) {
    FUN_14481578e(plVar1,0);
  }
  uVar10 = *(int *)(param_1 + 0x60) * 0x200 + *(int *)(param_1 + 100);
  uVar14 = 0;
  if ((uVar10 != 0) &&
     (uVar14 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x68) - 1U))) {
    uVar12 = 1;
    uVar13 = 1;
    if (1 < (int)uVar10) {
      uVar12 = uVar10;
    }
    do {
      uVar14 = uVar12;
      if (uVar12 == uVar13) break;
      uVar7 = uVar13 >> 9;
      uVar11 = uVar13 & 0x1ff;
      uVar14 = uVar13;
      uVar13 = uVar13 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x68))[uVar7] +
                                         (ulonglong)uVar11 * 2) - 1U));
  }
LAB_1485c03d5:
  if (uVar14 != uVar10) {
    cVar6 = FUN_146c0b51e(param_1 + 0x40,uVar14);
    *(char *)(*(longlong *)(param_1 + 0x280) + (longlong)(int)uVar14) = cVar6;
    if (cVar6 != '\0') {
      iVar3 = *(int *)(param_1 + 0x298);
      *(uint *)(param_1 + 0x298) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x29c) < iVar3 + 1U) {
        FUN_1446f48e2(plVar1,iVar3);
      }
      *(uint *)(*plVar1 + (longlong)iVar3 * 4) = uVar14;
    }
    uVar12 = uVar14 + 1;
    if ((int)(uVar14 + 1) < (int)uVar10) {
      uVar12 = uVar10;
    }
    uVar13 = uVar14;
    do {
      uVar14 = uVar12;
      if (uVar12 - 1 == uVar13) break;
      uVar14 = uVar13 + 1;
      uVar13 = uVar14;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(param_1 + 0x68) +
                                           (ulonglong)(uVar14 >> 9) * 8) +
                                         (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
    goto LAB_1485c03d5;
  }
  if ((*(int *)(param_1 + 0x10) < 2) || (*(double *)(param_1 + 0x18) <= 0.0)) {
    FUN_1485c0e9e(param_1);
  }
  else {
    FUN_1485c05dc(param_1);
  }
  uVar10 = *(int *)(param_1 + 0x60) * 0x200 + *(int *)(param_1 + 100);
  uVar14 = 0;
  if ((uVar10 != 0) &&
     (uVar14 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x68) - 1U))) {
    uVar12 = 1;
    uVar13 = 1;
    if (1 < (int)uVar10) {
      uVar12 = uVar10;
    }
    do {
      uVar14 = uVar12;
      if (uVar12 == uVar13) break;
      uVar7 = uVar13 >> 9;
      uVar11 = uVar13 & 0x1ff;
      uVar14 = uVar13;
      uVar13 = uVar13 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x68))[uVar7] +
                                         (ulonglong)uVar11 * 2) - 1U));
  }
  do {
    if (uVar14 == uVar10) {
      if (lStack_60 != 0) {
        FUN_1400020a8();
      }
      if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    puVar9 = (undefined8 *)((longlong)(int)uVar14 * 0x18 + *(longlong *)(param_1 + 0x268));
    cVar6 = FUN_146bfed03(puVar9);
    if (cVar6 != '\0') {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x50) + (ulonglong)(uVar14 >> 9) * 8);
      *(undefined8 *)(lVar4 + 0x10 + (ulonglong)(uVar14 & 0x1ff) * 0x18) = puVar9[2];
      uVar5 = puVar9[1];
      puVar2 = (undefined8 *)(lVar4 + (ulonglong)(uVar14 & 0x1ff) * 0x18);
      *puVar2 = *puVar9;
      puVar2[1] = uVar5;
      if (*(char *)(param_1 + 0x250) == '\x01') {
        LOCK();
        *(int *)(param_1 + 0x254) = *(int *)(param_1 + 0x254) + 1;
        UNLOCK();
      }
    }
    uVar12 = uVar14 + 1;
    if ((int)(uVar14 + 1) < (int)uVar10) {
      uVar12 = uVar10;
    }
    uVar13 = uVar14;
    do {
      uVar14 = uVar12;
      if (uVar12 - 1 == uVar13) break;
      uVar14 = uVar13 + 1;
      uVar13 = uVar14;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(param_1 + 0x68) +
                                           (ulonglong)(uVar14 >> 9) * 8) +
                                         (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 1485c0560 FUN_1485c0560 body=86 status=ok
// SIG undefined FUN_1485c0560(void)

void FUN_1485c0560(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14af7bb60;
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  FUN_141082778(param_1 + 8);
  return;
}



// FUNCTION 1485c05b6 FUN_1485c05b6 body=38 status=ok
// SIG undefined FUN_1485c05b6(void)

undefined8 FUN_1485c05b6(undefined8 param_1,int param_2)

{
  FUN_1485c0560();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485c05dc FUN_1485c05dc body=2240 status=ok
// SIG undefined FUN_1485c05dc(void)

void FUN_1485c05dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  double dVar2;
  void *_Src;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 **ppuVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *puVar18;
  int iVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_418 [32];
  undefined1 local_3f8;
  uint local_3f0;
  undefined8 **local_3e8;
  undefined8 *local_3d8;
  undefined8 **local_3d0;
  undefined1 *local_3c8;
  undefined8 *local_3c0;
  longlong local_3b8;
  undefined8 uStack_3b0;
  undefined8 *local_3a8;
  int local_3a0;
  undefined4 local_39c;
  undefined8 *local_398;
  undefined8 **local_390;
  undefined8 *local_388;
  undefined8 **local_380;
  undefined1 local_378 [8];
  undefined1 *local_370;
  ulonglong local_368;
  undefined1 local_2a0 [16];
  longlong local_290;
  char local_90;
  int local_8c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_418;
  iVar12 = 1;
  if (1 < *(int *)(param_1 + 2)) {
    iVar12 = *(int *)(param_1 + 2);
  }
  local_3a8 = (undefined8 *)0x0;
  local_3a0 = *(int *)(param_1 + 0x4e);
  lVar9 = (longlong)local_3a0;
  _Src = (void *)param_1[0x4d];
  if (lVar9 == 0) {
    local_39c = 0;
  }
  else {
    FUN_1405b70fe(&local_3a8,local_3a0,0);
    memcpy(local_3a8,_Src,lVar9 * 0x18);
  }
  dVar2 = (double)param_1[3];
  local_3f8 = 0;
  FUN_1411b354a(local_2a0,0,0,0);
  FUN_1457e37e0();
  if ((*(char *)(param_1 + 4) == '\x01') && (0.0 < dVar2)) {
    local_3f0 = local_3f0 & 0xffffff00;
    local_3f8 = 0;
    FUN_146c005f0(local_2a0,param_1 + 8,0,0);
    local_368 = 0;
    local_370 = local_2a0;
    FUN_146bee918(local_378,0);
    local_368 = (ulonglong)(uint)(*(int *)(local_370 + 0x214) + *(int *)(local_370 + 0x218));
  }
  local_3c0 = param_1 + 8;
  local_3b8 = 0;
  uStack_3b0 = 0;
  iVar19 = 0;
  do {
    ppuVar7 = &local_3c0;
    if (iVar19 == 0) {
      ppuVar7 = (undefined8 **)param_1[0x4f];
    }
    uVar10 = *(int *)(param_1 + 0xc) * 0x200 + *(int *)((longlong)param_1 + 100);
    uVar11 = 0;
    if ((uVar10 != 0) && (uVar11 = 0, 0xfffd < (ushort)(**(short **)param_1[0xd] - 1U))) {
      uVar14 = 1;
      uVar8 = 1;
      if (1 < (int)uVar10) {
        uVar8 = uVar10;
      }
      do {
        uVar13 = (uint)uVar14;
        uVar11 = uVar8;
        if (uVar8 == uVar13) break;
        uVar3 = uVar14 >> 9;
        uVar14 = (ulonglong)(uVar13 + 1);
        uVar11 = uVar13;
      } while (0xfffd < (ushort)(*(short *)(((undefined8 *)param_1[0xd])[uVar3] +
                                           (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
    }
LAB_1485c0896:
    if (uVar11 != uVar10) {
      lVar9 = *(longlong *)(param_1[10] + (ulonglong)(uVar11 >> 9) * 8);
      uVar14 = (ulonglong)(uVar11 & 0x1ff);
      dVar20 = *(double *)(lVar9 + uVar14 * 0x18);
      dVar21 = *(double *)(lVar9 + 8 + uVar14 * 0x18);
      dVar22 = *(double *)(lVar9 + 0x10 + uVar14 * 0x18);
      lVar9 = (longlong)(int)uVar11;
      if ((*(char *)(param_1 + 6) == '\0') || (*(char *)(param_1[0x50] + lVar9) == '\0')) {
        dVar23 = (double)param_1[0x4c] / (double)iVar12;
        puVar18 = ppuVar7[1];
        dVar20 = dVar20 + dVar23 * (double)puVar18[lVar9 * 3];
        dVar21 = dVar21 + (double)puVar18[lVar9 * 3 + 1] * dVar23;
        dVar22 = dVar22 + (double)puVar18[lVar9 * 3 + 2] * dVar23;
      }
      lVar15 = param_1[0x4d];
      *(double *)(lVar15 + lVar9 * 0x18) = dVar20;
      *(double *)(lVar15 + 8 + lVar9 * 0x18) = dVar21;
      *(double *)(lVar15 + 0x10 + lVar9 * 0x18) = dVar22;
      uVar8 = uVar11 + 1;
      if ((int)(uVar11 + 1) < (int)uVar10) {
        uVar8 = uVar10;
      }
      uVar13 = uVar11;
      do {
        uVar11 = uVar8;
        if (uVar8 - 1 == uVar13) break;
        uVar11 = uVar13 + 1;
        uVar13 = uVar11;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (param_1[0xd] + (ulonglong)(uVar11 >> 9) * 8) +
                                           (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
      goto LAB_1485c0896;
    }
    if ((*(char *)(param_1 + 4) == '\x01') && (0.0 < dVar2)) {
      uVar14 = 0;
      uVar11 = *(int *)(param_1 + 0xc) * 0x200 + *(int *)((longlong)param_1 + 100);
      if ((uVar11 != 0) && (0xfffd < (ushort)(**(short **)param_1[0xd] - 1U))) {
        uVar14 = 1;
        uVar8 = 1;
        if (1 < (int)uVar11) {
          uVar14 = (ulonglong)uVar11;
        }
        do {
          uVar13 = uVar8;
          if ((uint)uVar14 == uVar13) goto LAB_1485c0cea;
          uVar8 = uVar13 + 1;
        } while (0xfffd < (ushort)(*(short *)(((undefined8 *)param_1[0xd])[uVar13 >> 9] +
                                             (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
        uVar14 = (ulonglong)uVar13;
      }
LAB_1485c0cea:
      uVar8 = (uint)uVar14;
      if (uVar8 != uVar11) {
        puVar18 = (undefined8 *)((longlong)(int)uVar8 * 0x18 + param_1[0x4d]);
        cVar6 = FUN_146bfed03(puVar18);
        if (cVar6 != '\0') {
          lVar9 = *(longlong *)(local_290 + (uVar14 >> 9) * 8);
          *(undefined8 *)(lVar9 + 0x10 + (ulonglong)(uVar8 & 0x1ff) * 0x18) = puVar18[2];
          uVar4 = puVar18[1];
          puVar1 = (undefined8 *)(lVar9 + (ulonglong)(uVar8 & 0x1ff) * 0x18);
          *puVar1 = *puVar18;
          puVar1[1] = uVar4;
          if (local_90 == '\x01') {
            LOCK();
            local_8c = local_8c + 1;
            UNLOCK();
          }
        }
        uVar13 = uVar8 + 1;
        if ((int)(uVar8 + 1) < (int)uVar11) {
          uVar13 = uVar11;
        }
        do {
          if (uVar13 - 1 == (int)uVar14) {
            uVar14 = (ulonglong)uVar13;
            break;
          }
          uVar8 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar8;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (param_1[0xd] + (ulonglong)(uVar8 >> 9) * 8) +
                                             (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
        goto LAB_1485c0cea;
      }
      FUN_146bee918(local_378,0);
      local_368 = (ulonglong)(uint)(*(int *)(local_370 + 0x214) + *(int *)(local_370 + 0x218));
    }
    if (0.0 < dVar2) {
      local_3d0 = &local_3a8;
      local_3c8 = local_378;
      local_388 = (undefined8 *)0x0;
      local_380 = (undefined8 **)((ulonglong)local_380 & 0xffffffff00000000);
      local_398 = (undefined8 *)&LAB_1485c1444;
      local_390 = &local_3d8;
      local_3e8 = &local_388;
      local_3f0 = 0;
      local_3d8 = param_1;
      FUN_1401f8d10(L"ParallelFor Task",uVar10,1,&local_398);
      if (*(char *)(param_1 + 6) == '\0') {
        local_390 = &local_3a8;
        local_3d8 = (undefined8 *)0x0;
        local_3d0 = (undefined8 **)((ulonglong)local_3d0 & 0xffffffff00000000);
        local_388 = (undefined8 *)&LAB_1485c1676;
        local_380 = &local_398;
        local_3e8 = &local_3d8;
        local_3f0 = 0;
        local_398 = param_1;
        FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 0x53),1,&local_388);
      }
      uVar10 = *(int *)(param_1 + 0xc) * 0x200 + *(int *)((longlong)param_1 + 100);
      uVar11 = 0;
      if ((uVar10 != 0) && (uVar11 = 0, 0xfffd < (ushort)(**(short **)param_1[0xd] - 1U))) {
        uVar14 = 1;
        uVar8 = 1;
        if (1 < (int)uVar10) {
          uVar8 = uVar10;
        }
        do {
          uVar13 = (uint)uVar14;
          uVar11 = uVar8;
          if (uVar8 == uVar13) break;
          uVar3 = uVar14 >> 9;
          uVar14 = (ulonglong)(uVar13 + 1);
          uVar11 = uVar13;
        } while (0xfffd < (ushort)(*(short *)(((undefined8 *)param_1[0xd])[uVar3] +
                                             (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
      }
joined_r0x0001485c0b05:
      uVar8 = uVar11;
      if (uVar8 != uVar10) {
        lVar15 = (longlong)(int)uVar8;
        lVar9 = param_1[0x4d];
        *(undefined8 *)(lVar9 + 0x10 + lVar15 * 0x18) = local_3a8[lVar15 * 3 + 2];
        uVar4 = (local_3a8 + lVar15 * 3)[1];
        puVar18 = (undefined8 *)(lVar9 + lVar15 * 0x18);
        *puVar18 = local_3a8[lVar15 * 3];
        puVar18[1] = uVar4;
        uVar13 = uVar8 + 1;
        if ((int)(uVar8 + 1) < (int)uVar10) {
          uVar13 = uVar10;
        }
        do {
          uVar11 = uVar13;
          if (uVar13 - 1 == uVar8) break;
          uVar8 = uVar8 + 1;
          uVar11 = uVar8;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (param_1[0xd] + (ulonglong)(uVar8 >> 9) * 8) +
                                             (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
        goto joined_r0x0001485c0b05;
      }
    }
    uVar14 = 0;
    uVar11 = *(int *)(param_1 + 0xc) * 0x200 + *(int *)((longlong)param_1 + 100);
    if ((uVar11 != 0) && (0xfffd < (ushort)(**(short **)param_1[0xd] - 1U))) {
      uVar14 = 1;
      uVar10 = 1;
      if (1 < (int)uVar11) {
        uVar14 = (ulonglong)uVar11;
      }
      do {
        uVar8 = uVar10;
        if ((uint)uVar14 == uVar8) goto LAB_1485c09c5;
        uVar10 = uVar8 + 1;
      } while (0xfffd < (ushort)(*(short *)(((undefined8 *)param_1[0xd])[uVar8 >> 9] +
                                           (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
      uVar14 = (ulonglong)uVar8;
    }
LAB_1485c09c5:
    uVar10 = (uint)uVar14;
    if (uVar10 != uVar11) {
      puVar18 = (undefined8 *)((longlong)(int)uVar10 * 0x18 + param_1[0x4d]);
      cVar6 = FUN_146bfed03(puVar18);
      if (cVar6 != '\0') {
        lVar9 = *(longlong *)(param_1[10] + (uVar14 >> 9) * 8);
        *(undefined8 *)(lVar9 + 0x10 + (ulonglong)(uVar10 & 0x1ff) * 0x18) = puVar18[2];
        uVar4 = puVar18[1];
        puVar1 = (undefined8 *)(lVar9 + (ulonglong)(uVar10 & 0x1ff) * 0x18);
        *puVar1 = *puVar18;
        puVar1[1] = uVar4;
        if (*(char *)(param_1 + 0x4a) == '\x01') {
          LOCK();
          *(int *)((longlong)param_1 + 0x254) = *(int *)((longlong)param_1 + 0x254) + 1;
          UNLOCK();
        }
      }
      uVar8 = uVar10 + 1;
      if ((int)(uVar10 + 1) < (int)uVar11) {
        uVar8 = uVar11;
      }
      do {
        if (uVar8 - 1 == (int)uVar14) {
          uVar14 = (ulonglong)uVar8;
          break;
        }
        uVar10 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar10;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (param_1[0xd] + (ulonglong)(uVar10 >> 9) * 8) +
                                           (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
      goto LAB_1485c09c5;
    }
    FUN_146c37e28(&local_3c0,1,1);
    iVar19 = iVar19 + 1;
  } while (iVar19 != iVar12);
  uVar10 = *(int *)(param_1 + 0xc) * 0x200 + *(int *)((longlong)param_1 + 100);
  uVar11 = 0;
  if ((uVar10 != 0) && (uVar11 = 0, 0xfffd < (ushort)(**(short **)param_1[0xd] - 1U))) {
    uVar8 = 1;
    uVar13 = 1;
    if (1 < (int)uVar10) {
      uVar8 = uVar10;
    }
    do {
      uVar11 = uVar8;
      if (uVar8 == uVar13) break;
      uVar16 = uVar13 >> 9;
      uVar17 = uVar13 & 0x1ff;
      uVar11 = uVar13;
      uVar13 = uVar13 + 1;
    } while (0xfffd < (ushort)(*(short *)(((undefined8 *)param_1[0xd])[uVar16] +
                                         (ulonglong)uVar17 * 2) - 1U));
  }
  do {
    if (uVar11 == uVar10) {
      if (local_3b8 != 0) {
        FUN_1400020a8();
      }
      FUN_1457e5b52(local_378);
      FUN_141082778(local_2a0);
      if (local_3a8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if ((local_80 ^ (ulonglong)auStack_418) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    lVar9 = *(longlong *)(param_1[10] + (ulonglong)(uVar11 >> 9) * 8);
    lVar15 = param_1[0x4d];
    puVar18 = (undefined8 *)(lVar9 + (ulonglong)(uVar11 & 0x1ff) * 0x18);
    uVar4 = *puVar18;
    uVar5 = puVar18[1];
    *(undefined8 *)(lVar15 + 0x10 + (longlong)(int)uVar11 * 0x18) =
         *(undefined8 *)(lVar9 + 0x10 + (ulonglong)(uVar11 & 0x1ff) * 0x18);
    puVar18 = (undefined8 *)(lVar15 + (longlong)(int)uVar11 * 0x18);
    *puVar18 = uVar4;
    puVar18[1] = uVar5;
    uVar8 = uVar11 + 1;
    if ((int)(uVar11 + 1) < (int)uVar10) {
      uVar8 = uVar10;
    }
    uVar13 = uVar11;
    do {
      uVar11 = uVar8;
      if (uVar8 - 1 == uVar13) break;
      uVar11 = uVar13 + 1;
      uVar13 = uVar11;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)(param_1[0xd] + (ulonglong)(uVar11 >> 9) * 8)
                                         + (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 1485c0e9e FUN_1485c0e9e body=1445 status=ok
// SIG undefined FUN_1485c0e9e(void)

void FUN_1485c0e9e(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 < 2) {
    uVar8 = *(int *)(param_1 + 0x60) * 0x200 + *(int *)(param_1 + 100);
    uVar11 = 0;
    if ((uVar8 != 0) &&
       (uVar11 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x68) - 1U))) {
      uVar10 = 1;
      uVar14 = 1;
      if (1 < (int)uVar8) {
        uVar10 = uVar8;
      }
      do {
        uVar11 = uVar10;
        if (uVar10 == uVar14) break;
        uVar15 = uVar14 >> 9;
        uVar16 = uVar14 & 0x1ff;
        uVar11 = uVar14;
        uVar14 = uVar14 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x68))[uVar15] +
                                           (ulonglong)uVar16 * 2) - 1U));
    }
LAB_1485c102b:
    if (uVar11 != uVar8) {
      dVar20 = *(double *)(param_1 + 0x260);
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x50) + (ulonglong)(uVar11 >> 9) * 8);
      uVar17 = (ulonglong)(uVar11 & 0x1ff);
      dVar19 = *(double *)(lVar12 + uVar17 * 0x18);
      dVar21 = *(double *)(lVar12 + 8 + uVar17 * 0x18);
      dVar22 = *(double *)(lVar12 + 0x10 + uVar17 * 0x18);
      lVar12 = (longlong)(int)uVar11;
      if ((*(char *)(param_1 + 0x30) == '\0') ||
         (*(char *)(*(longlong *)(param_1 + 0x280) + lVar12) == '\0')) {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x278) + 8);
        dVar19 = dVar19 + dVar20 * *(double *)(lVar3 + lVar12 * 0x18);
        dVar21 = dVar21 + *(double *)(lVar3 + 8 + lVar12 * 0x18) * dVar20;
        dVar22 = dVar22 + *(double *)(lVar3 + 0x10 + lVar12 * 0x18) * dVar20;
      }
      lVar3 = *(longlong *)(param_1 + 0x268);
      *(double *)(lVar3 + lVar12 * 0x18) = dVar19;
      *(double *)(lVar3 + 8 + lVar12 * 0x18) = dVar21;
      *(double *)(lVar3 + 0x10 + lVar12 * 0x18) = dVar22;
      uVar10 = uVar11 + 1;
      if ((int)(uVar11 + 1) < (int)uVar8) {
        uVar10 = uVar8;
      }
      uVar14 = uVar11;
      do {
        uVar11 = uVar10;
        if (uVar10 - 1 == uVar14) break;
        uVar11 = uVar14 + 1;
        uVar14 = uVar11;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x68) +
                                             (ulonglong)(uVar11 >> 9) * 8) +
                                           (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
      goto LAB_1485c102b;
    }
  }
  else {
    local_68 = param_1 + 0x40;
    local_60 = 0;
    uStack_58 = 0;
    iVar18 = 0;
    do {
      plVar9 = &local_68;
      if (iVar18 == 0) {
        plVar9 = *(longlong **)(param_1 + 0x278);
      }
      uVar8 = *(int *)(param_1 + 0x60) * 0x200 + *(int *)(param_1 + 100);
      uVar11 = 0;
      if ((uVar8 != 0) &&
         (uVar11 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x68) - 1U))) {
        uVar17 = 1;
        uVar10 = 1;
        if (1 < (int)uVar8) {
          uVar10 = uVar8;
        }
        do {
          uVar14 = (uint)uVar17;
          uVar11 = uVar10;
          if (uVar10 == uVar14) break;
          uVar4 = uVar17 >> 9;
          uVar17 = (ulonglong)(uVar14 + 1);
          uVar11 = uVar14;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x68))[uVar4] +
                                             (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
      }
      if (uVar11 != uVar8) {
        do {
          lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x50) + (ulonglong)(uVar11 >> 9) * 8);
          uVar17 = (ulonglong)(uVar11 & 0x1ff);
          dVar20 = *(double *)(lVar12 + uVar17 * 0x18);
          dVar19 = *(double *)(lVar12 + 8 + uVar17 * 0x18);
          dVar21 = *(double *)(lVar12 + 0x10 + uVar17 * 0x18);
          lVar12 = (longlong)(int)uVar11;
          if ((*(char *)(param_1 + 0x30) == '\0') ||
             (*(char *)(*(longlong *)(param_1 + 0x280) + lVar12) == '\0')) {
            dVar22 = *(double *)(param_1 + 0x260) / (double)iVar2;
            lVar3 = plVar9[1];
            dVar20 = dVar20 + dVar22 * *(double *)(lVar3 + lVar12 * 0x18);
            dVar19 = dVar19 + *(double *)(lVar3 + 8 + lVar12 * 0x18) * dVar22;
            dVar21 = dVar21 + *(double *)(lVar3 + 0x10 + lVar12 * 0x18) * dVar22;
          }
          lVar3 = *(longlong *)(param_1 + 0x268);
          *(double *)(lVar3 + lVar12 * 0x18) = dVar20;
          *(double *)(lVar3 + 8 + lVar12 * 0x18) = dVar19;
          *(double *)(lVar3 + 0x10 + lVar12 * 0x18) = dVar21;
          uVar10 = uVar11 + 1;
          if ((int)(uVar11 + 1) < (int)uVar8) {
            uVar10 = uVar8;
          }
          do {
            uVar14 = uVar10;
            if (uVar10 - 1 == uVar11) break;
            uVar11 = uVar11 + 1;
            uVar14 = uVar11;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(param_1 + 0x68) +
                                                 (ulonglong)(uVar11 >> 9) * 8) +
                                               (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
          uVar11 = uVar14;
        } while (uVar11 != uVar8);
        uVar8 = *(int *)(param_1 + 0x60) * 0x200 + *(int *)(param_1 + 100);
      }
      uVar17 = 0;
      if ((uVar8 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x68) - 1U))) {
        uVar17 = 1;
        uVar11 = 1;
        if (1 < (int)uVar8) {
          uVar17 = (ulonglong)uVar8;
        }
        do {
          uVar10 = uVar11;
          if ((uint)uVar17 == uVar10) goto LAB_1485c12bc;
          uVar11 = uVar10 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x68))[uVar10 >> 9] +
                                             (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
        uVar17 = (ulonglong)uVar10;
      }
LAB_1485c12bc:
      uVar11 = (uint)uVar17;
      if (uVar11 != uVar8) {
        puVar13 = (undefined8 *)((longlong)(int)uVar11 * 0x18 + *(longlong *)(param_1 + 0x268));
        cVar7 = FUN_146bfed03(puVar13);
        if (cVar7 != '\0') {
          lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x50) + (uVar17 >> 9) * 8);
          *(undefined8 *)(lVar12 + 0x10 + (ulonglong)(uVar11 & 0x1ff) * 0x18) = puVar13[2];
          uVar5 = puVar13[1];
          puVar1 = (undefined8 *)(lVar12 + (ulonglong)(uVar11 & 0x1ff) * 0x18);
          *puVar1 = *puVar13;
          puVar1[1] = uVar5;
          if (*(char *)(param_1 + 0x250) == '\x01') {
            LOCK();
            *(int *)(param_1 + 0x254) = *(int *)(param_1 + 0x254) + 1;
            UNLOCK();
          }
        }
        uVar10 = uVar11 + 1;
        if ((int)(uVar11 + 1) < (int)uVar8) {
          uVar10 = uVar8;
        }
        do {
          if (uVar10 - 1 == (int)uVar17) {
            uVar17 = (ulonglong)uVar10;
            break;
          }
          uVar11 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar11;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_1 + 0x68) +
                                               (ulonglong)(uVar11 >> 9) * 8) +
                                             (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
        goto LAB_1485c12bc;
      }
      FUN_146c37e28(&local_68,1,1);
      iVar18 = iVar18 + 1;
    } while (iVar18 != iVar2);
    uVar8 = *(int *)(param_1 + 0x60) * 0x200 + *(int *)(param_1 + 100);
    uVar11 = 0;
    if ((uVar8 != 0) &&
       (uVar11 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x68) - 1U))) {
      uVar10 = 1;
      uVar14 = 1;
      if (1 < (int)uVar8) {
        uVar10 = uVar8;
      }
      do {
        uVar11 = uVar10;
        if (uVar10 == uVar14) break;
        uVar15 = uVar14 >> 9;
        uVar16 = uVar14 & 0x1ff;
        uVar11 = uVar14;
        uVar14 = uVar14 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x68))[uVar15] +
                                           (ulonglong)uVar16 * 2) - 1U));
    }
LAB_1485c1424:
    if (uVar11 != uVar8) {
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x50) + (ulonglong)(uVar11 >> 9) * 8);
      lVar3 = *(longlong *)(param_1 + 0x268);
      puVar13 = (undefined8 *)(lVar12 + (ulonglong)(uVar11 & 0x1ff) * 0x18);
      uVar5 = *puVar13;
      uVar6 = puVar13[1];
      *(undefined8 *)(lVar3 + 0x10 + (longlong)(int)uVar11 * 0x18) =
           *(undefined8 *)(lVar12 + 0x10 + (ulonglong)(uVar11 & 0x1ff) * 0x18);
      puVar13 = (undefined8 *)(lVar3 + (longlong)(int)uVar11 * 0x18);
      *puVar13 = uVar5;
      puVar13[1] = uVar6;
      uVar10 = uVar11 + 1;
      if ((int)(uVar11 + 1) < (int)uVar8) {
        uVar10 = uVar8;
      }
      uVar14 = uVar11;
      do {
        uVar11 = uVar10;
        if (uVar10 - 1 == uVar14) break;
        uVar11 = uVar14 + 1;
        uVar14 = uVar11;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x68) +
                                             (ulonglong)(uVar11 >> 9) * 8) +
                                           (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
      goto LAB_1485c1424;
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1485c144c FUN_1485c144c body=514 status=ok
// SIG undefined FUN_1485c144c(void)

void FUN_1485c144c(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  double dVar12;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  longlong *local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  longlong local_98 [2];
  longlong local_88;
  longlong *local_78;
  longlong local_68 [4];
  undefined1 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar6 = *param_1;
  if (((((int)param_2 < 0) ||
       (*(int *)(lVar6 + 0x60) * 0x200 + *(int *)(lVar6 + 100) <= (int)param_2)) ||
      (0xfffc < (ushort)(*(short *)(*(longlong *)
                                     (*(longlong *)(lVar6 + 0x68) + (ulonglong)(param_2 >> 9) * 8) +
                                   (ulonglong)(param_2 & 0x1ff) * 2) - 2U))) ||
     (*(char *)(*(longlong *)(lVar6 + 0x280) + (ulonglong)param_2) == '\x01')) {
    lVar6 = *(longlong *)(lVar6 + 0x268);
    lVar8 = (longlong)(int)param_2 * 0x18;
    lVar7 = *(longlong *)param_1[1];
    *(undefined8 *)(lVar7 + 0x10 + lVar8) = *(undefined8 *)(lVar6 + 0x10 + lVar8);
    puVar1 = (undefined8 *)(lVar6 + lVar8);
    uVar10 = puVar1[1];
    puVar2 = (undefined8 *)(lVar7 + lVar8);
    *puVar2 = *puVar1;
    puVar2[1] = uVar10;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_f8);
  }
  local_b8 = local_98;
  local_c0 = &LAB_1485c1650;
  local_98[0] = lVar6;
  FUN_1482cacfa(&local_b0,lVar6 + 0x40);
  dVar3 = *(double *)(lVar6 + 0x18);
  lVar7 = *(longlong *)(lVar6 + 0x268);
  lVar9 = (ulonglong)param_2 * 0x18;
  dVar12 = 1.0 - dVar3;
  dVar4 = *(double *)(lVar7 + 0x10 + lVar9);
  dVar5 = *(double *)(lVar7 + 8 + lVar9);
  lVar8 = *(longlong *)param_1[1];
  *(double *)(lVar8 + lVar9) = dVar12 * *(double *)(lVar7 + lVar9) + dVar3 * local_b0;
  *(double *)(lVar8 + 8 + lVar9) = dVar5 * dVar12 + local_a8 * dVar3;
  *(double *)(lVar8 + 0x10 + lVar9) = dVar4 * dVar12 + local_a0 * dVar3;
  if (*(char *)(lVar6 + 0x20) == '\x01') {
    local_98[0] = 0x7fefffffffffffff;
    local_88 = 0;
    local_78 = (longlong *)0x0;
    local_48 = 0;
    FUN_146ba2472(param_1[2],&local_d8,*(longlong *)param_1[1] + lVar9,local_98);
    lVar6 = *(longlong *)param_1[1];
    *(undefined8 *)(lVar6 + 0x10 + lVar9) = local_c8;
    puVar1 = (undefined8 *)(lVar6 + lVar9);
    *puVar1 = local_d8;
    puVar1[1] = uStack_d0;
    if (local_88 != 0) {
      plVar11 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar11 = local_68;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1485c167e FUN_1485c167e body=271 status=ok
// SIG undefined FUN_1485c167e(void)

void FUN_1485c167e(longlong *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  longlong local_70;
  undefined1 *local_68;
  longlong *local_60;
  longlong local_58;
  undefined1 *local_50;
  longlong *local_48;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *param_1;
  iVar4 = *(int *)(*(longlong *)(lVar5 + 0x290) + (longlong)param_2 * 4);
  local_48 = &local_58;
  local_78 = &local_50;
  local_50 = &LAB_1485c178e;
  local_60 = &local_70;
  local_68 = &LAB_1485c17a0;
  local_70 = lVar5;
  local_58 = lVar5;
  FUN_1482cafba(&local_40,lVar5 + 0x40,iVar4);
  dVar1 = *(double *)(lVar5 + 0x28);
  lVar5 = *(longlong *)(lVar5 + 0x268);
  lVar7 = (longlong)iVar4 * 0x18;
  dVar8 = 1.0 - dVar1;
  dVar2 = *(double *)(lVar5 + 0x10 + lVar7);
  dVar3 = *(double *)(lVar5 + 8 + lVar7);
  lVar6 = *(longlong *)param_1[1];
  *(double *)(lVar6 + lVar7) = dVar8 * *(double *)(lVar5 + lVar7) + dVar1 * local_40;
  *(double *)(lVar6 + 8 + lVar7) = dVar3 * dVar8 + local_38 * dVar1;
  *(double *)(lVar6 + 0x10 + lVar7) = dVar2 * dVar8 + local_30 * dVar1;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c17c6 FUN_1485c17c6 body=232 status=ok
// SIG undefined FUN_1485c17c6(void)

void FUN_1485c17c6(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 0xe0);
  FUN_1485c18ae(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd8));
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  FUN_1485c18d7(*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 200));
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  FUN_1485c1900(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8));
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 0x60);
  FUN_146c81a14(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1485c18ae FUN_1485c18ae body=41 status=ok
// SIG undefined FUN_1485c18ae(void)

void FUN_1485c18ae(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1482eb450(param_1);
    param_1 = param_1 + 0xe8;
  }
  return;
}



// FUNCTION 1485c18d7 FUN_1485c18d7 body=41 status=ok
// SIG undefined FUN_1485c18d7(void)

void FUN_1485c18d7(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1482e7f38(param_1);
    param_1 = param_1 + 0x100;
  }
  return;
}



// FUNCTION 1485c1900 FUN_1485c1900 body=41 status=ok
// SIG undefined FUN_1485c1900(void)

void FUN_1485c1900(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1482e7e90(param_1);
    param_1 = param_1 + 0xa8;
  }
  return;
}



// FUNCTION 1485c192a FUN_1485c192a body=177 status=ok
// SIG undefined FUN_1485c192a(void)

void FUN_1485c192a(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) goto LAB_1485c1965;
  uVar4 = (ulonglong)*(byte *)*param_1;
  uVar1 = *(uint *)((byte *)*param_1 + 4);
  if (uVar4 == 0) {
    if (((int)uVar1 < 0) || (*(longlong **)(param_2 + 0x208) == (longlong *)0x0))
    goto LAB_1485c1965;
    iVar2 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xc0))();
    if (iVar2 <= (int)uVar1) goto LAB_1485c1965;
  }
  else if (*(char *)(param_2 + 0x1a8) == '\0') goto LAB_1485c1965;
  FUN_148376c0e(local_40,param_2,(ulonglong)uVar1 << 0x20 | uVar4);
  *(undefined1 *)param_1[1] = 1;
  uVar3 = (**(code **)param_1[3])(((undefined8 *)param_1[3])[1],param_2,local_40);
  *(undefined4 *)param_1[2] = uVar3;
LAB_1485c1965:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c19dc FUN_1485c19dc body=162 status=ok
// SIG undefined FUN_1485c19dc(void)

undefined8 * FUN_1485c19dc(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  piVar1 = *(int **)(param_1 + 0x40);
  uVar3 = *piVar1 * 0x200 + piVar1[1];
  uVar4 = 0;
  if ((uVar3 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(piVar1 + 2) - 1U))) {
    uVar2 = 1;
    uVar5 = 1;
    if (1 < (int)uVar3) {
      uVar5 = uVar3;
    }
    do {
      uVar6 = uVar2;
      uVar4 = uVar5;
      if (uVar5 == uVar6) break;
      uVar2 = uVar6 + 1;
      uVar4 = uVar6;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(piVar1 + 2))[uVar6 >> 9] +
                                         (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
  }
  param_2[4] = 0;
  param_2[2] = 0;
  *param_2 = piVar1;
  *(uint *)(param_2 + 1) = uVar4;
  *(uint *)((longlong)param_2 + 0xc) = uVar3;
  FUN_1485c1b4a(param_2 + 2,param_1);
  return param_2;
}



// FUNCTION 1485c1a7e FUN_1485c1a7e body=202 status=ok
// SIG undefined FUN_1485c1a7e(void)

undefined8 * FUN_1485c1a7e(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong *local_58 [2];
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = *param_3;
  local_58[0] = (longlong *)0x0;
  if (local_68[0] != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
    (**(code **)*plVar1)(plVar1,local_58);
  }
  *param_2 = 0;
  param_2[2] = 0;
  param_2[8] = param_1;
  FUN_1485c1b4a(param_2,local_68);
  if (local_68[0] != 0) {
    plVar1 = local_58[0];
    if (local_58[0] == (longlong *)0x0) {
      plVar1 = local_48;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*param_3 != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c1b4a FUN_1485c1b4a body=290 status=ok
// SIG undefined FUN_1485c1b4a(void)

longlong * FUN_1485c1b4a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c1cce FUN_1485c1cce body=29 status=ok
// SIG undefined FUN_1485c1cce(void)

undefined8 FUN_1485c1cce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485c1cec FUN_1485c1cec body=167 status=ok
// SIG undefined FUN_1485c1cec(void)

byte FUN_1485c1cec(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_1;
  local_30 = *(undefined4 *)(param_1 + 1);
  cVar1 = FUN_148279d4f();
  if (cVar1 == '\0') {
    bVar2 = 0;
  }
  else if ((longlong)*(int *)(param_1 + 4) == 0) {
    bVar2 = 1;
  }
  else {
    puVar4 = (undefined8 *)param_1[3];
    puVar3 = puVar4 + (longlong)*(int *)(param_1 + 4) * 2;
    do {
      local_38 = *puVar4;
      local_30 = *(undefined4 *)(puVar4 + 1);
      bVar2 = FUN_148279d4f(&local_38,param_2);
      puVar4 = puVar4 + 2;
    } while ((puVar4 == puVar3 | bVar2) != 1);
    bVar2 = bVar2 ^ 1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c1d94 FUN_1485c1d94 body=38 status=ok
// SIG undefined FUN_1485c1d94(void)

undefined8 FUN_1485c1d94(undefined8 param_1,int param_2)

{
  FUN_146c6125e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485c1dba FUN_1485c1dba body=38 status=ok
// SIG undefined FUN_1485c1dba(void)

undefined8 FUN_1485c1dba(undefined8 param_1,int param_2)

{
  FUN_146c6125e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485c1de0 FUN_1485c1de0 body=38 status=ok
// SIG undefined FUN_1485c1de0(void)

undefined8 FUN_1485c1de0(undefined8 param_1,int param_2)

{
  FUN_146c6125e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485c1e06 FUN_1485c1e06 body=38 status=ok
// SIG undefined FUN_1485c1e06(void)

undefined8 FUN_1485c1e06(undefined8 param_1,int param_2)

{
  FUN_146c6125e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485c1e2c FUN_1485c1e2c body=134 status=ok
// SIG undefined FUN_1485c1e2c(void)

void FUN_1485c1e2c(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)param_1[1])(&local_28,((undefined8 *)param_1[1])[1],param_2);
  param_1 = (longlong *)*param_1;
  if (param_1 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_28;
    *(undefined4 *)(param_1 + 1) = local_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c1eb4 FUN_1485c1eb4 body=1215 status=ok
// SIG undefined FUN_1485c1eb4(void)

void FUN_1485c1eb4(double *param_1,longlong param_2,double *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double local_100;
  double local_f8;
  double local_f0;
  
  param_3[2] = DAT_14c8464f0;
  dVar24 = DAT_14c8464e8;
  *param_3 = DAT_14c8464e0;
  param_3[1] = dVar24;
  local_100 = DAT_14c8464e0;
  local_f8 = DAT_14c8464e8;
  local_f0 = DAT_14c8464f0;
  uVar15 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
  if (0 < (int)uVar15) {
    uVar18 = 0;
    do {
      uVar21 = (ulonglong)(uVar18 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(param_2 + 0x28) + (ulonglong)(uVar18 >> 9) * 8) +
                             uVar21 * 2) - 1U) < 0xfffe) {
        lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar18 >> 9) * 8);
        local_100 = *(double *)(lVar2 + uVar21 * 0x18);
        local_f8 = *(double *)(lVar2 + 8 + uVar21 * 0x18);
        local_f0 = *(double *)(lVar2 + 0x10 + uVar21 * 0x18);
        break;
      }
      uVar18 = uVar18 + 1;
    } while (uVar15 != uVar18);
  }
  iVar19 = *(int *)(param_2 + 0x140);
  iVar20 = *(int *)(param_2 + 0x144);
  if (iVar19 * 0x200 + iVar20 < 1) {
    dVar24 = *param_3;
    dVar22 = 0.0;
    dVar6 = 0.0;
  }
  else {
    dVar22 = 0.0;
    uVar15 = 0;
    dVar6 = 0.0;
    do {
      uVar21 = (ulonglong)(uVar15 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(param_2 + 0x148) + (ulonglong)(uVar15 >> 9) * 8) +
                             uVar21 * 2) - 1U) < 0xfffe) {
        lVar2 = *(longlong *)(param_2 + 0x10);
        lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(uVar15 >> 9) * 8);
        uVar18 = *(uint *)(lVar3 + uVar21 * 0xc);
        uVar1 = *(uint *)(lVar3 + 4 + uVar21 * 0xc);
        lVar4 = *(longlong *)(lVar2 + (ulonglong)(uVar18 >> 9) * 8);
        uVar17 = (ulonglong)uVar18 & 0x1ff;
        lVar5 = *(longlong *)(lVar2 + (ulonglong)(uVar1 >> 9) * 8);
        uVar16 = (ulonglong)uVar1 & 0x1ff;
        uVar18 = *(uint *)(lVar3 + 8 + uVar21 * 0xc);
        lVar2 = *(longlong *)(lVar2 + (ulonglong)(uVar18 >> 9) * 8);
        uVar21 = (ulonglong)uVar18 & 0x1ff;
        dVar27 = *(double *)(lVar4 + uVar17 * 0x18) - local_100;
        dVar8 = *(double *)(lVar4 + 8 + uVar17 * 0x18) - local_f8;
        dVar9 = *(double *)(lVar4 + 0x10 + uVar17 * 0x18) - local_f0;
        dVar10 = *(double *)(lVar5 + uVar16 * 0x18) - local_100;
        dVar14 = *(double *)(lVar5 + 8 + uVar16 * 0x18) - local_f8;
        dVar23 = *(double *)(lVar5 + 0x10 + uVar16 * 0x18) - local_f0;
        dVar25 = *(double *)(lVar2 + uVar21 * 0x18) - local_100;
        dVar11 = *(double *)(lVar2 + 8 + uVar21 * 0x18) - local_f8;
        dVar13 = *(double *)(lVar2 + 0x10 + uVar21 * 0x18) - local_f0;
        dVar7 = (dVar25 - dVar27) * (dVar14 - dVar8) - (dVar10 - dVar27) * (dVar11 - dVar8);
        dVar24 = (dVar13 - dVar9) * (dVar10 - dVar27) - (dVar23 - dVar9) * (dVar25 - dVar27);
        dVar12 = (dVar11 - dVar8) * (dVar23 - dVar9) - (dVar13 - dVar9) * (dVar14 - dVar8);
        dVar26 = dVar27 + dVar10 + dVar25;
        *param_3 = (dVar25 * dVar26 + dVar27 * dVar27 + (dVar27 + dVar10) * dVar10) * dVar12 +
                   *param_3;
        dVar22 = dVar22 + SQRT(dVar7 * dVar7 + dVar12 * dVar12 + dVar24 * dVar24);
        param_3[1] = ((dVar8 + dVar14 + dVar11) * dVar11 + dVar8 * dVar8 + dVar14 * (dVar8 + dVar14)
                     ) * dVar24 + param_3[1];
        dVar6 = dVar6 + dVar26 * dVar12;
        param_3[2] = ((dVar9 + dVar23 + dVar13) * dVar13 + dVar9 * dVar9 + dVar23 * (dVar9 + dVar23)
                     ) * dVar7 + param_3[2];
        iVar19 = *(int *)(param_2 + 0x140);
        iVar20 = *(int *)(param_2 + 0x144);
      }
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < iVar19 * 0x200 + iVar20);
    dVar22 = dVar22 * 0.5;
    dVar24 = *param_3;
    if ((dVar6 != 0.0) || (NAN(dVar6))) {
      dVar7 = 1.0 / (dVar6 * 4.0);
      dVar24 = dVar24 * dVar7;
      dVar26 = param_3[1] * dVar7;
      dVar7 = dVar7 * param_3[2];
      goto LAB_1485c22da;
    }
  }
  dVar26 = param_3[1];
  dVar7 = param_3[2];
LAB_1485c22da:
  *param_3 = local_100 + dVar24;
  param_3[1] = local_f8 + dVar26;
  param_3[2] = local_f0 + dVar7;
  *param_1 = dVar6 * 0.16666666666666666;
  param_1[1] = dVar22;
  return;
}



// FUNCTION 1485c2374 FUN_1485c2374 body=124 status=ok
// SIG undefined FUN_1485c2374(void)

void FUN_1485c2374(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_3) {
    FUN_146ea3024(param_1,param_3);
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_146ddc768(param_1,iVar1);
    }
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)(lVar2 + (longlong)iVar1 * 0xc) = *param_2;
  }
  return;
}



// FUNCTION 1485c23f2 FUN_1485c23f2 body=214 status=ok
// SIG undefined FUN_1485c23f2(void)

void FUN_1485c23f2(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_2 + 0x208) != (longlong *)0x0) {
    iVar1 = *(int *)*param_1;
    iVar3 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xa0))();
    if (iVar1 < iVar3) {
      iVar1 = *(int *)*param_1;
      if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(*(longlong *)(param_2 + 0x208) + 0x28))) &&
         (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x208) + 0x20) + (longlong)iVar1 * 8)
          != 0)) {
        *(undefined1 *)param_1[1] = 1;
        iVar1 = *(int *)*param_1;
        uVar4 = 0;
        if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(*(longlong *)(param_2 + 0x208) + 0x28))) {
          uVar4 = *(undefined8 *)
                   (*(longlong *)(*(longlong *)(param_2 + 0x208) + 0x20) + (longlong)iVar1 * 8);
        }
        (**(code **)param_1[3])(&local_48,((undefined8 *)param_1[3])[1],param_2,uVar4);
        puVar2 = (undefined4 *)param_1[2];
        *(undefined8 *)(puVar2 + 8) = local_28;
        *(undefined8 *)(puVar2 + 4) = local_38;
        *(undefined8 *)(puVar2 + 6) = uStack_30;
        *puVar2 = local_48;
        puVar2[1] = uStack_44;
        puVar2[2] = uStack_40;
        puVar2[3] = uStack_3c;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c24ca FUN_1485c24ca body=147 status=ok
// SIG undefined FUN_1485c24ca(void)

void FUN_1485c24ca(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(longlong **)(param_2 + 0x208) != (longlong *)0x0) {
    iVar1 = *(int *)*param_1;
    iVar2 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xa0))();
    if (iVar1 < iVar2) {
      iVar1 = *(int *)*param_1;
      if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(*(longlong *)(param_2 + 0x208) + 0x28))) &&
         (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x208) + 0x20) + (longlong)iVar1 * 8)
          != 0)) {
        *(undefined1 *)param_1[1] = 1;
        iVar1 = *(int *)*param_1;
        uVar3 = 0;
        if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(*(longlong *)(param_2 + 0x208) + 0x28))) {
          uVar3 = *(undefined8 *)
                   (*(longlong *)(*(longlong *)(param_2 + 0x208) + 0x20) + (longlong)iVar1 * 8);
        }
        uVar3 = (**(code **)param_1[3])(((undefined8 *)param_1[3])[1],param_2,uVar3);
        *(undefined8 *)param_1[2] = uVar3;
      }
    }
  }
  return;
}



// FUNCTION 1485c255e FUN_1485c255e body=145 status=ok
// SIG undefined FUN_1485c255e(void)

void FUN_1485c255e(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (*(longlong **)(param_2 + 0x208) != (longlong *)0x0) {
    iVar1 = *(int *)*param_1;
    iVar3 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xa0))();
    if (iVar1 < iVar3) {
      iVar1 = *(int *)*param_1;
      if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(*(longlong *)(param_2 + 0x208) + 0x28))) &&
         (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x208) + 0x20) + (longlong)iVar1 * 8)
          != 0)) {
        *(undefined1 *)param_1[1] = 1;
        iVar1 = *(int *)*param_1;
        uVar4 = 0;
        if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(*(longlong *)(param_2 + 0x208) + 0x28))) {
          uVar4 = *(undefined8 *)
                   (*(longlong *)(*(longlong *)(param_2 + 0x208) + 0x20) + (longlong)iVar1 * 8);
        }
        uVar2 = (**(code **)param_1[3])(((undefined8 *)param_1[3])[1],param_2,uVar4);
        *(undefined1 *)param_1[2] = uVar2;
      }
    }
  }
  return;
}



// FUNCTION 1485c25f0 FUN_1485c25f0 body=145 status=ok
// SIG undefined FUN_1485c25f0(void)

void FUN_1485c25f0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (*(longlong **)(param_2 + 0x208) != (longlong *)0x0) {
    iVar1 = *(int *)*param_1;
    iVar2 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xa0))();
    if (iVar1 < iVar2) {
      iVar1 = *(int *)*param_1;
      if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(*(longlong *)(param_2 + 0x208) + 0x28))) &&
         (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x208) + 0x20) + (longlong)iVar1 * 8)
          != 0)) {
        *(undefined1 *)param_1[1] = 1;
        iVar1 = *(int *)*param_1;
        uVar4 = 0;
        if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(*(longlong *)(param_2 + 0x208) + 0x28))) {
          uVar4 = *(undefined8 *)
                   (*(longlong *)(*(longlong *)(param_2 + 0x208) + 0x20) + (longlong)iVar1 * 8);
        }
        uVar3 = (**(code **)param_1[3])(((undefined8 *)param_1[3])[1],param_2,uVar4);
        *(undefined4 *)param_1[2] = uVar3;
      }
    }
  }
  return;
}



// FUNCTION 1485c2682 FUN_1485c2682 body=538 status=ok
// SIG undefined FUN_1485c2682(void)

undefined8 * FUN_1485c2682(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_14845abbc();
  *param_1 = &PTR_FUN_14af7ce00;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0x1400000014;
  param_1[0x17] = 0x3f847ae147ae147b;
  param_1[0x18] = 5;
  *(undefined4 *)(param_1 + 0x19) = 0x3e800000;
  param_1[0x1a] = 0x3ff0000000000000;
  *(undefined1 *)((longlong)param_1 + 0xd9) = 0;
  *(undefined4 *)((longlong)param_1 + 0xda) = 0x1010101;
  *(undefined4 *)((longlong)param_1 + 0xdd) = 0x1010101;
  *(undefined1 *)((longlong)param_1 + 0xe1) = 0;
  param_1[0x1d] = 0x4046800000000000;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x24] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x25] = 0x3ff0000000000000;
  uVar1 = DAT_14c8464e8;
  param_1[0x26] = DAT_14c8464e0;
  param_1[0x27] = uVar1;
  param_1[0x28] = DAT_14c8464f0;
  uVar1 = DAT_14c846518;
  param_1[0x29] = DAT_14c846510;
  param_1[0x2a] = uVar1;
  param_1[0x2b] = DAT_14c846520;
  param_1[0x2e] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2f] = 0x3ff0000000000000;
  uVar1 = DAT_14c8464e8;
  param_1[0x30] = DAT_14c8464e0;
  param_1[0x31] = uVar1;
  param_1[0x32] = DAT_14c8464f0;
  uVar1 = DAT_14c846518;
  param_1[0x33] = DAT_14c846510;
  param_1[0x34] = uVar1;
  param_1[0x35] = DAT_14c846520;
  *(undefined2 *)(param_1 + 0x36) = 0x100;
  param_1[0x38] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x40) = 1;
  param_1[0x41] = 0x3fc999999999999a;
  param_1[0x42] = 0x3fc999999999999a;
  *(undefined1 *)(param_1 + 0x43) = 1;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0x3e8000003e800000;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined8 *)((longlong)param_1 + 0x254) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  return param_1;
}



// FUNCTION 1485c289c FUN_1485c289c body=206 status=ok
// SIG undefined FUN_1485c289c(void)

void FUN_1485c289c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14af7ce00;
  FUN_1482f5f8c(param_1 + 0x45);
  if (param_1[0x38] != 0) {
    plVar4 = param_1 + 0x3c;
    if ((longlong *)param_1[0x3a] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x3a];
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  plVar4 = (longlong *)param_1[0x14];
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
  plVar4 = (longlong *)param_1[0x12];
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
  *param_1 = &PTR_LAB_14aee4ae0;
  FUN_146c81a14(param_1 + 0xc);
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001485c295f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,1);
    return;
  }
  return;
}



// FUNCTION 1485c296a FUN_1485c296a body=9 status=ok
// SIG undefined FUN_1485c296a(void)

void FUN_1485c296a(longlong param_1)

{
  FUN_1457e5b52(param_1 + 0x10);
  return;
}



// FUNCTION 1485c2974 FUN_1485c2974 body=29 status=ok
// SIG undefined FUN_1485c2974(void)

undefined8 FUN_1485c2974(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485c2992 FUN_1485c2992 body=38 status=ok
// SIG undefined FUN_1485c2992(void)

undefined8 FUN_1485c2992(undefined8 param_1,int param_2)

{
  FUN_1485c289c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485c29b8 FUN_1485c29b8 body=147 status=ok
// SIG undefined FUN_1485c29b8(void)

void FUN_1485c29b8(longlong param_1,int param_2)

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



// FUNCTION 1485c2a4c FUN_1485c2a4c body=147 status=ok
// SIG undefined FUN_1485c2a4c(void)

void FUN_1485c2a4c(longlong param_1,int param_2)

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



// FUNCTION 1485c2ae0 FUN_1485c2ae0 body=1035 status=ok
// SIG undefined FUN_1485c2ae0(void)

void FUN_1485c2ae0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_1e8 [36];
  int local_1c4;
  longlong *local_1c0;
  undefined4 local_1b8;
  uint uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  ulonglong uStack_1a0;
  longlong local_198;
  undefined8 uStack_190;
  undefined4 local_17c;
  undefined1 *local_178;
  int local_170;
  int local_160;
  int local_15c;
  longlong local_148;
  longlong *local_138;
  longlong local_128 [4];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined **local_e8;
  undefined4 local_e0;
  code *local_d8;
  longlong *local_c8;
  longlong local_b8 [4];
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_198 = 0;
  uStack_190 = 0;
  local_1c4 = param_2;
  if (0 < param_2) {
    plVar1 = param_1 + 1;
    plVar2 = param_1 + 3;
    iVar13 = 0;
    do {
      bVar14 = (longlong)uStack_190 < 0;
      uStack_190 = uStack_190 & 0xffffffff00000000;
      if (bVar14) {
        FUN_14481578e(&local_198,0);
      }
      local_108 = (undefined1 *)0x100000000;
      local_f8 = 0xffffffff;
      uStack_f0 = uStack_f0 & 0xffffffff00000000;
      uStack_100 = plVar2;
      if ((int)param_1[6] == 0) {
        iVar10 = 0;
      }
      else {
        FUN_1449c0562(&local_108);
        iVar10 = (int)param_1[6];
      }
      local_1a8 = local_f8;
      uVar8 = local_1a8;
      uStack_1a0 = uStack_f0;
      local_1b8 = (undefined4)local_108;
      uStack_1b4 = local_108._4_4_;
      uStack_1b0 = (int)uStack_100;
      uStack_1ac = uStack_100._4_4_;
      local_1a8._4_4_ = (int)((ulonglong)local_f8 >> 0x20);
      iVar6 = local_1a8._4_4_;
      local_1c0 = plVar1;
      if ((local_1a8._4_4_ != iVar10) || (local_1a8 = uVar8, uStack_100 != plVar2)) {
        do {
          local_1a8 = uVar8;
          uVar3 = *(undefined4 *)(*local_1c0 + (longlong)iVar6 * 0xc);
          local_d8 = (code *)*param_1;
          local_f8 = 0;
          local_e8 = &PTR_LAB_149f3b7b0;
          local_108 = &LAB_146c413d0;
          local_e0 = uVar3;
          FUN_146c41260(local_d8 + 0xb8,&local_98,uVar3,&local_108);
          FUN_146c41458(local_98,&local_108,local_90,local_88);
          FUN_146c41662(local_98,&local_178,local_90,local_88);
          while ((((pcVar5 = local_d8, local_108 != local_178 || ((int)uStack_100 != local_170)) ||
                  ((int)uStack_f0 != local_160)) || (uStack_f0._4_4_ != local_15c))) {
            local_17c = local_e8._0_4_;
            plVar9 = local_c8;
            if (local_c8 == (longlong *)0x0) {
              plVar9 = local_b8;
            }
            uVar8 = (**(code **)(*plVar9 + 8))();
            uVar7 = (*pcVar5)(uVar8,&local_17c);
            bVar14 = true;
            if ((int)param_1[2] == *(int *)((longlong)param_1 + 0x3c)) goto LAB_1485c2d74;
            plVar9 = (longlong *)param_1[9];
            if ((longlong *)param_1[9] == (longlong *)0x0) {
              plVar9 = param_1 + 8;
            }
            iVar6 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[10] - 1U & uVar7) * 4);
            if (iVar6 == -1) goto LAB_1485c2d74;
            while (*(uint *)(*plVar1 + (longlong)iVar6 * 0xc) != uVar7) {
              iVar6 = *(int *)(*plVar1 + (longlong)iVar6 * 0xc + 4);
              if (iVar6 == -1) goto LAB_1485c2d74;
            }
            if ((int)local_f8 == 0) {
              uStack_100 = (longlong *)CONCAT44(0xffffffff,(int)uStack_100);
              uStack_f0 = 0xffffffffffffffff;
            }
            else {
              FUN_146be9922(&local_108);
            }
          }
          bVar14 = false;
LAB_1485c2d74:
          if (local_148 != 0) {
            plVar9 = local_138;
            if (local_138 == (longlong *)0x0) {
              plVar9 = local_128;
            }
            (**(code **)(*plVar9 + 0x10))();
          }
          if (local_d8 != (code *)0x0) {
            plVar9 = local_c8;
            if (local_c8 == (longlong *)0x0) {
              plVar9 = local_b8;
            }
            (**(code **)(*plVar9 + 0x10))();
          }
          if (local_88[0] != 0) {
            plVar9 = local_78;
            if (local_78 == (longlong *)0x0) {
              plVar9 = local_68;
            }
            (**(code **)(*plVar9 + 0x10))();
          }
          uVar4 = uStack_190;
          if (bVar14) {
            lVar12 = (longlong)(int)uStack_190;
            uVar7 = (int)uStack_190 + 1;
            uStack_190 = CONCAT44(uStack_190._4_4_,uVar7);
            if (uStack_190._4_4_ < uVar7) {
              FUN_1446f48e2(&local_198,uVar4 & 0xffffffff);
            }
            *(undefined4 *)(local_198 + lVar12 * 4) = uVar3;
          }
          local_1a8 = CONCAT44(local_1a8._4_4_,(uint)local_1a8 & ~uStack_1b4);
          FUN_1449c0562(&local_1b8);
          iVar6 = local_1a8._4_4_;
          uVar8 = local_1a8;
        } while (local_1c0 != plVar1 ||
                 ((longlong *)CONCAT44(uStack_1ac,uStack_1b0) != plVar2 || local_1a8._4_4_ != iVar10
                 ));
      }
      lVar12 = (longlong)(int)uStack_190;
      if (lVar12 != 0) {
        lVar11 = 0;
        do {
          FUN_144a7cc9e(plVar1);
          lVar11 = lVar11 + 4;
        } while (lVar12 * 4 != lVar11);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 != local_1c4);
    if (local_198 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1485c2eec FUN_1485c2eec body=133 status=ok
// SIG undefined FUN_1485c2eec(void)

void FUN_1485c2eec(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [40];
  undefined1 local_10 [4];
  uint local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((-1 < (int)param_2) &&
      (lVar1 = *param_1, (int)param_2 < *(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24))) &&
     ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(param_2 >> 9) * 8)
                         + (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    local_c = param_2;
    FUN_1447cbafe(param_1 + 1,local_10,&local_c,0);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c2f72 FUN_1485c2f72 body=1103 status=ok
// SIG undefined FUN_1485c2f72(void)

void FUN_1485c2f72(longlong *param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  int local_1cc;
  longlong *local_1c8;
  longlong *local_1c0;
  undefined4 local_1b8;
  uint uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  uint local_1a8;
  int iStack_1a4;
  ulonglong uStack_1a0;
  longlong local_198;
  undefined8 uStack_190;
  uint local_17c;
  undefined1 *local_178;
  int local_170;
  int local_160;
  int local_15c;
  longlong local_148;
  longlong *local_138;
  longlong local_128 [4];
  undefined8 local_108;
  undefined8 uStack_100;
  uint local_f8;
  int iStack_f4;
  undefined8 uStack_f0;
  undefined **local_e8;
  undefined4 local_e0;
  code *local_d8;
  longlong *local_c8;
  longlong local_b8 [4];
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  plVar7 = param_1 + 1;
  local_198 = 0;
  uStack_190 = 0;
  local_1c8 = param_1 + 3;
  local_108 = (undefined1 *)0x100000000;
  local_f8 = 0xffffffff;
  iStack_f4 = 0;
  uStack_f0 = uStack_f0 & 0xffffffff00000000;
  uStack_100 = local_1c8;
  if ((int)param_1[6] == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_108);
    iVar8 = (int)param_1[6];
  }
  local_1a8 = local_f8;
  iStack_1a4 = iStack_f4;
  uStack_1a0 = uStack_f0;
  local_1b8 = (undefined4)local_108;
  uStack_1b4 = local_108._4_4_;
  uStack_1b0 = (int)uStack_100;
  uStack_1ac = uStack_100._4_4_;
  local_1d8 = plVar7;
  local_1c0 = plVar7;
  if ((iStack_f4 != iVar8) || (uStack_100 != local_1c8)) {
    local_1cc = iVar8;
    do {
      local_e0 = *(undefined4 *)(*local_1c0 + (longlong)iStack_1a4 * 0xc);
      local_d8 = (code *)*param_1;
      local_f8 = 0;
      iStack_f4 = 0;
      local_e8 = &PTR_LAB_149f3b7b0;
      local_108 = &LAB_146c413d0;
      FUN_146c41260(local_d8 + 0xb8,&local_98,local_e0,&local_108);
      FUN_146c41458(local_98,&local_108,local_90,local_88);
      FUN_146c41662(local_98,&local_178,local_90,local_88);
      while ((((pcVar1 = local_d8, local_108 != local_178 || ((int)uStack_100 != local_170)) ||
              ((int)uStack_f0 != local_160)) || (uStack_f0._4_4_ != local_15c))) {
        local_17c = (uint)local_e8;
        plVar7 = local_c8;
        if (local_c8 == (longlong *)0x0) {
          plVar7 = local_b8;
        }
        uVar6 = (**(code **)(*plVar7 + 8))();
        uVar4 = (*pcVar1)(uVar6,&local_17c);
        pcVar1 = (code *)*param_2;
        if (pcVar1 == (code *)0x0) {
LAB_1485c317a:
          uVar2 = uStack_190;
          if ((int)param_1[2] != *(int *)((longlong)param_1 + 0x3c)) {
            plVar7 = (longlong *)param_1[9];
            if ((longlong *)param_1[9] == (longlong *)0x0) {
              plVar7 = param_1 + 8;
            }
            iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[10] - 1U & uVar4) * 4);
            if (iVar8 != -1) {
              do {
                if (*(uint *)(*local_1d8 + (longlong)iVar8 * 0xc) == uVar4) goto LAB_1485c31af;
                iVar8 = *(int *)(*local_1d8 + (longlong)iVar8 * 0xc + 4);
              } while (iVar8 != -1);
            }
          }
          lVar10 = (longlong)(int)uStack_190;
          uVar5 = (int)uStack_190 + 1;
          uStack_190 = CONCAT44(uStack_190._4_4_,uVar5);
          if (uStack_190._4_4_ < uVar5) {
            FUN_1446f48e2(&local_198,uVar2 & 0xffffffff);
          }
          *(uint *)(local_198 + lVar10 * 4) = uVar4;
        }
        else {
          plVar7 = (longlong *)param_2[2];
          if ((longlong *)param_2[2] == (longlong *)0x0) {
            plVar7 = param_2 + 4;
          }
          local_17c = uVar4;
          uVar6 = (**(code **)(*plVar7 + 8))();
          cVar3 = (*pcVar1)(uVar6,&local_17c);
          if (cVar3 != '\0') goto LAB_1485c317a;
        }
LAB_1485c31af:
        if (local_f8 == 0) {
          uStack_100 = (longlong *)CONCAT44(0xffffffff,(int)uStack_100);
          uStack_f0 = 0xffffffffffffffff;
        }
        else {
          FUN_146be9922(&local_108);
        }
      }
      if (local_148 != 0) {
        plVar7 = local_138;
        if (local_138 == (longlong *)0x0) {
          plVar7 = local_128;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (local_d8 != (code *)0x0) {
        plVar7 = local_c8;
        if (local_c8 == (longlong *)0x0) {
          plVar7 = local_b8;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (local_88[0] != 0) {
        plVar7 = local_78;
        if (local_78 == (longlong *)0x0) {
          plVar7 = local_68;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      local_1a8 = local_1a8 & ~uStack_1b4;
      FUN_1449c0562(&local_1b8);
    } while (local_1c0 != local_1d8 ||
             ((longlong *)CONCAT44(uStack_1ac,uStack_1b0) != local_1c8 || iStack_1a4 != local_1cc));
  }
  lVar10 = local_198;
  plVar7 = local_1d8;
  lVar9 = (longlong)(int)uStack_190;
  if (lVar9 != 0) {
    lVar11 = 0;
    do {
      local_108 = (undefined1 *)CONCAT44(local_108._4_4_,*(undefined4 *)(lVar10 + lVar11));
      FUN_1447cbafe(plVar7,&local_178,&local_108,0);
      lVar11 = lVar11 + 4;
    } while (lVar9 * 4 != lVar11);
  }
  if (local_198 != 0) {
    FUN_1400020a8(local_198);
  }
  if ((local_48 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1485c33c2 FUN_1485c33c2 body=876 status=ok
// SIG undefined FUN_1485c33c2(void)

void FUN_1485c33c2(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  bool bVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  uint local_88;
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_58 = 0;
  uStack_50 = 0;
  local_b8 = param_2;
  if (0 < param_2) {
    plVar1 = param_1 + 1;
    local_c0 = param_1 + 3;
    iVar6 = 0;
    do {
      bVar13 = (longlong)uStack_50 < 0;
      uStack_50 = uStack_50 & 0xffffffff00000000;
      if (bVar13) {
        FUN_14481578e(&local_58,0);
      }
      local_a8 = 0x100000000;
      uStack_a0 = local_c0;
      local_98 = 0xffffffff;
      uStack_90 = uStack_90 & 0xffffffff00000000;
      local_b4 = iVar6;
      if ((int)param_1[6] == 0) {
        local_b0 = 0;
      }
      else {
        FUN_1449c0562(&local_a8);
        local_b0 = (int)param_1[6];
      }
      local_68 = local_98;
      uVar3 = local_68;
      uStack_60 = uStack_90;
      local_78 = (undefined4)local_a8;
      uStack_74 = local_a8._4_4_;
      uStack_70 = (int)uStack_a0;
      uStack_6c = uStack_a0._4_4_;
      local_68._4_4_ = (int)((ulonglong)local_98 >> 0x20);
      iVar6 = local_68._4_4_;
      local_80 = plVar1;
      if ((local_68._4_4_ != local_b0) || (local_68 = uVar3, uStack_a0 != local_c0)) {
        do {
          local_68 = uVar3;
          uVar2 = *(uint *)(*local_80 + (longlong)iVar6 * 0xc);
          lVar11 = *(longlong *)(*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(uVar2 >> 9) * 8);
          uVar5 = (ulonglong)((uVar2 & 0x1ff) << 4);
          iVar6 = *(int *)(lVar11 + uVar5);
          local_ac = *(int *)(lVar11 + 4 + uVar5);
          iVar12 = local_ac;
          bVar13 = true;
          do {
            bVar9 = bVar13;
            lVar11 = *param_1 + 0xb8;
            FUN_146be983e(&local_a8,lVar11,iVar6,0);
            if ((((local_a8 != lVar11) || ((int)uStack_a0 != iVar6)) || ((int)uStack_90 != -1)) ||
               (uStack_90._4_4_ != -1)) {
              bVar13 = false;
              lVar10 = local_a8;
              iVar12 = (int)uStack_a0;
              do {
                if (local_88 != uVar2) {
                  if ((int)param_1[2] != *(int *)((longlong)param_1 + 0x3c)) {
                    plVar7 = (longlong *)param_1[9];
                    if ((longlong *)param_1[9] == (longlong *)0x0) {
                      plVar7 = param_1 + 8;
                    }
                    iVar8 = *(int *)((longlong)plVar7 +
                                    (ulonglong)((int)param_1[10] - 1U & local_88) * 4);
                    if (iVar8 != -1) {
                      do {
                        if (*(uint *)(*plVar1 + (longlong)iVar8 * 0xc) == local_88)
                        goto LAB_1485c3588;
                        iVar8 = *(int *)(*plVar1 + (longlong)iVar8 * 0xc + 4);
                      } while (iVar8 != -1);
                    }
                  }
                  bVar13 = true;
                }
LAB_1485c3588:
                if ((int)local_98 == 0) {
                  uStack_a0 = (longlong *)CONCAT44(0xffffffff,(int)uStack_a0);
                  uStack_90 = 0xffffffffffffffff;
                  uStack_90._4_4_ = -1;
                  uStack_90._0_4_ = -1;
                }
                else {
                  FUN_146be9922(&local_a8);
                  lVar10 = local_a8;
                  iVar12 = (int)uStack_a0;
                }
                uVar5 = uStack_50;
              } while (((lVar10 != lVar11) || (iVar12 != iVar6)) ||
                      (((int)uStack_90 != -1 || (uStack_90._4_4_ != -1))));
              iVar12 = local_ac;
              if (bVar13) {
                lVar11 = (longlong)(int)uStack_50;
                uVar4 = (int)uStack_50 + 1;
                uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
                if (uStack_50._4_4_ < uVar4) {
                  FUN_1446f48e2(&local_58,uVar5 & 0xffffffff);
                }
                *(uint *)(local_58 + lVar11 * 4) = uVar2;
                break;
              }
            }
            iVar6 = iVar12;
            iVar12 = iVar6;
            bVar13 = false;
          } while (bVar9);
          local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
          FUN_1449c0562(&local_78);
          iVar6 = local_68._4_4_;
          uVar3 = local_68;
        } while (local_80 != plVar1 ||
                 ((longlong *)CONCAT44(uStack_6c,uStack_70) != local_c0 ||
                 local_68._4_4_ != local_b0));
      }
      lVar11 = (longlong)(int)uStack_50;
      if (lVar11 != 0) {
        lVar10 = 0;
        do {
          FUN_144a7cc9e(plVar1);
          lVar10 = lVar10 + 4;
        } while (lVar11 * 4 != lVar10);
      }
      iVar6 = local_b4 + 1;
    } while (iVar6 != local_b8);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1485c3730 FUN_1485c3730 body=142 status=ok
// SIG undefined FUN_1485c3730(void)

void FUN_1485c3730(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [40];
  undefined1 local_10 [4];
  uint local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((-1 < (int)param_2) &&
      (lVar1 = *param_1, (int)param_2 < *(int *)(lVar1 + 0x1d0) * 0x200 + *(int *)(lVar1 + 0x1d4)))
     && ((ushort)(*(short *)(*(longlong *)
                              (*(longlong *)(lVar1 + 0x1d8) + (ulonglong)(param_2 >> 9) * 8) +
                            (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    local_c = param_2;
    FUN_1447cbafe(param_1 + 1,local_10,&local_c,0);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c37c0 FUN_1485c37c0 body=346 status=ok
// SIG undefined FUN_1485c37c0(void)

void FUN_1485c37c0(longlong param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_b8 [32];
  longlong local_98;
  ulonglong uStack_90;
  longlong local_88;
  ulonglong uStack_80;
  longlong local_78;
  undefined1 local_6c [28];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (0 < param_2) {
    local_88 = 0;
    uStack_80 = 0;
    local_78 = param_1;
    FUN_1485c391c(param_1,param_1 + 8);
    lVar1 = local_88;
    if (param_2 == 1) {
      lVar4 = (longlong)(int)uStack_80;
      if (lVar4 != 0) {
        lVar3 = 0;
        do {
          local_98 = CONCAT44(local_98._4_4_,*(undefined4 *)(lVar1 + lVar3));
          FUN_1447cbafe(param_1 + 8,local_6c,&local_98,0);
          lVar3 = lVar3 + 4;
        } while (lVar4 * 4 != lVar3);
      }
    }
    else {
      FUN_1485c3b9e(&local_78,&local_88);
      local_98 = 0;
      uStack_90 = 0;
      param_2 = param_2 + -1;
      do {
        lVar1 = local_98;
        local_98 = local_88;
        uVar2 = uStack_80;
        bVar5 = (longlong)uStack_90 < 0;
        uStack_80 = uStack_90 & 0xffffffff00000000;
        uStack_90 = uVar2;
        local_88 = lVar1;
        if (bVar5) {
          FUN_14481578e(&local_88,0);
        }
        FUN_1485c3c6c(param_1,&local_98,&local_88);
        FUN_1485c3b9e(&local_78);
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      if (local_98 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_88 != 0) {
      FUN_1400020a8(local_88);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1485c391c FUN_1485c391c body=641 status=ok
// SIG undefined FUN_1485c391c(void)

void FUN_1485c391c(longlong *param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_d8 [40];
  int local_b0;
  int local_ac;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  uint local_88;
  int iStack_84;
  undefined8 uStack_80;
  uint local_78;
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  int iStack_54;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = param_2 + 2;
  local_98 = 0x100000000;
  local_88 = 0xffffffff;
  iStack_84 = 0;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  uStack_90 = local_a8;
  if ((int)param_2[5] == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_98);
    iVar6 = (int)param_2[5];
  }
  local_58 = local_88;
  iStack_54 = iStack_84;
  uStack_50 = uStack_80;
  local_68 = (undefined4)local_98;
  uStack_64 = local_98._4_4_;
  uStack_60 = (int)uStack_90;
  uStack_5c = uStack_90._4_4_;
  local_70 = param_2;
  if ((iStack_84 != iVar6) || (uStack_90 != local_a8)) {
    local_b0 = iVar6;
    local_a0 = param_2;
    do {
      uVar1 = *(uint *)(*local_70 + (longlong)iStack_54 * 0xc);
      lVar7 = *(longlong *)(*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(uVar1 >> 9) * 8);
      uVar3 = (ulonglong)((uVar1 & 0x1ff) << 4);
      local_ac = *(int *)(lVar7 + 4 + uVar3);
      iVar6 = *(int *)(lVar7 + uVar3);
      bVar2 = true;
      do {
        bVar8 = bVar2;
        lVar7 = *param_1 + 0xb8;
        FUN_146be983e(&local_98,lVar7,iVar6,0);
        if (local_98 != lVar7) goto LAB_1485c3a9a;
        if ((int)uStack_90 != iVar6) goto LAB_1485c3a9a;
        if ((int)uStack_80 != -1) goto LAB_1485c3a9a;
        iVar5 = uStack_80._4_4_;
        while (iVar5 != -1) {
LAB_1485c3a9a:
          do {
            uVar1 = local_78;
            if ((int)param_1[2] != *(int *)((longlong)param_1 + 0x3c)) {
              plVar4 = (longlong *)param_1[9];
              if ((longlong *)param_1[9] == (longlong *)0x0) {
                plVar4 = param_1 + 8;
              }
              iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[10] - 1U & local_78) * 4)
              ;
              if (iVar5 != -1) {
                do {
                  if (*(uint *)(param_1[1] + (longlong)iVar5 * 0xc) == local_78) goto LAB_1485c3ac8;
                  iVar5 = *(int *)(param_1[1] + (longlong)iVar5 * 0xc + 4);
                } while (iVar5 != -1);
              }
            }
            iVar5 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar5 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar5 + 1U) {
              FUN_1446f48e2(param_3,iVar5);
            }
            *(uint *)(*param_3 + (longlong)iVar5 * 4) = uVar1;
LAB_1485c3ac8:
            if (local_88 == 0) {
              uStack_90 = (longlong *)CONCAT44(0xffffffff,(int)uStack_90);
              uStack_80 = 0xffffffffffffffff;
              uStack_80._4_4_ = -1;
              uStack_80._0_4_ = -1;
            }
            else {
              FUN_146be9922(&local_98);
            }
          } while (((local_98 != lVar7) || ((int)uStack_90 != iVar6)) ||
                  (iVar5 = uStack_80._4_4_, (int)uStack_80 != -1));
        }
        iVar6 = local_ac;
        bVar2 = false;
      } while (bVar8);
      local_58 = local_58 & ~uStack_64;
      FUN_1449c0562(&local_68);
    } while (local_70 != local_a0 ||
             ((longlong *)CONCAT44(uStack_5c,uStack_60) != local_a8 || iStack_54 != local_b0));
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1485c3b9e FUN_1485c3b9e body=204 status=ok
// SIG undefined FUN_1485c3b9e(void)

void FUN_1485c3b9e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [7];
  char local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (0 < (int)param_2[1]) {
    lVar1 = *param_1;
    uVar3 = 0;
    do {
      FUN_1447cbafe(lVar1 + 8,local_48,(longlong)(int)uVar3 * 4 + *param_2,&local_41);
      iVar2 = (int)param_2[1];
      if (local_41 == '\x01') {
        iVar4 = ~uVar3 + iVar2;
        if (iVar4 != 0) {
          if (0 < iVar4) {
            iVar4 = 1;
          }
          memmove((void *)(*param_2 + (longlong)(int)uVar3 * 4),
                  (void *)(*param_2 + (longlong)(iVar2 - iVar4) * 4),(longlong)iVar4 << 2);
          iVar2 = (int)param_2[1];
        }
        iVar2 = iVar2 + -1;
        *(int *)(param_2 + 1) = iVar2;
        uVar3 = uVar3 - 1;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar2);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c3c6c FUN_1485c3c6c body=435 status=ok
// SIG undefined FUN_1485c3c6c(void)

void FUN_1485c3c6c(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  uint uVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong *plVar4;
  int iVar5;
  uint *puVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_a8 [36];
  int local_84;
  uint *local_80;
  uint *local_78;
  longlong local_70;
  int local_68;
  undefined4 local_64;
  int local_60;
  undefined8 local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puVar6 = (uint *)*param_2;
    local_80 = puVar6 + *(int *)(param_2 + 1);
    do {
      lVar9 = *(longlong *)(*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(*puVar6 >> 9) * 8);
      uVar3 = (ulonglong)((*puVar6 & 0x1ff) << 4);
      local_84 = *(int *)(lVar9 + 4 + uVar3);
      iVar8 = *(int *)(lVar9 + uVar3);
      bVar2 = true;
      local_78 = puVar6;
      do {
        bVar7 = bVar2;
        lVar9 = *param_1 + 0xb8;
        FUN_146be983e(&local_70,lVar9,iVar8,0);
        if (local_70 != lVar9) goto LAB_1485c3d6a;
        if (local_68 != iVar8) goto LAB_1485c3d6a;
        if ((int)local_58 != -1) goto LAB_1485c3d6a;
        iVar5 = local_58._4_4_;
        while (iVar5 != -1) {
LAB_1485c3d6a:
          do {
            uVar1 = local_50;
            if ((int)param_1[2] != *(int *)((longlong)param_1 + 0x3c)) {
              plVar4 = (longlong *)param_1[9];
              if ((longlong *)param_1[9] == (longlong *)0x0) {
                plVar4 = param_1 + 8;
              }
              iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[10] - 1U & local_50) * 4)
              ;
              if (iVar5 != -1) {
                do {
                  if (*(uint *)(param_1[1] + (longlong)iVar5 * 0xc) == local_50) goto LAB_1485c3d99;
                  iVar5 = *(int *)(param_1[1] + (longlong)iVar5 * 0xc + 4);
                } while (iVar5 != -1);
              }
            }
            iVar5 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar5 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar5 + 1U) {
              FUN_1446f48e2(param_3,iVar5);
            }
            *(uint *)(*param_3 + (longlong)iVar5 * 4) = uVar1;
LAB_1485c3d99:
            if (local_60 == 0) {
              local_64 = 0xffffffff;
              local_58 = 0xffffffffffffffff;
              local_58._4_4_ = -1;
              local_58._0_4_ = -1;
            }
            else {
              FUN_146be9922(&local_70);
            }
          } while (((local_70 != lVar9) || (local_68 != iVar8)) ||
                  (iVar5 = local_58._4_4_, (int)local_58 != -1));
        }
        iVar8 = local_84;
        bVar2 = false;
      } while (bVar7);
      puVar6 = local_78 + 1;
    } while (puVar6 != local_80);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1485c3e2a FUN_1485c3e2a body=862 status=ok
// SIG undefined FUN_1485c3e2a(void)

void FUN_1485c3e2a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined1 local_7d;
  undefined4 local_7c;
  longlong local_78;
  ulonglong uStack_70;
  longlong local_68;
  ulonglong uStack_60;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  FUN_148568536(&local_50);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar1 = (undefined8 *)(param_2 + 0x38);
  local_68 = 0;
  uStack_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  plVar4 = &local_68;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_78 = 0;
  uStack_70 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  plVar6 = &local_78;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x38);
  }
  local_7c = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  puVar5 = &local_7c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar5 = *(undefined4 **)(param_2 + 0x38);
  }
  local_7d = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7d);
  }
  puVar7 = &local_7d;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar7 = *(undefined1 **)(param_2 + 0x38);
  }
  local_88 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  uVar3 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = local_50;
  local_90 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  local_a8 = local_88;
  local_b8 = puVar5;
  local_b0 = puVar7;
  FUN_1485c418a(local_40,&local_98,plVar4,plVar6);
  *param_3 = uVar3;
  FUN_1485eab14(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1485eaacb(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c418a FUN_1485c418a body=327 status=ok
// SIG undefined FUN_1485c418a(void)

longlong FUN_1485c418a(longlong param_1,wchar_t *param_2,undefined8 param_3,undefined8 param_4,
                      undefined4 *param_5,undefined1 *param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  undefined1 *local_60;
  undefined4 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 == 0) {
    local_68 = L"GetMeshSelectionBoundaryLoops_InvalidInput";
    local_60._0_4_ = 0x2a;
    FUN_1446e940c(local_3c,&local_68);
    local_68 = L"UGeometryScriptLibrary_MeshSelectionQueryFunctions";
    local_60 = (undefined1 *)CONCAT44(local_60._4_4_,0x32);
    FUN_1446e940c(local_40,&local_68);
    FUN_140208bae(&local_68,local_40,local_3c,L"GetMeshSelectionBoundaryLoops: TargetMesh is Null");
    FUN_143ba90d7(param_7,2,&local_68);
    if (local_68 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_68 + 0x10))();
    }
  }
  else {
    *param_6 = 1;
    *param_5 = 0;
    local_60 = param_6;
    local_58 = param_5;
    local_68 = param_2;
    local_50 = param_3;
    local_48 = param_4;
    FUN_143be2a52(&local_68,*(undefined8 *)(param_1 + 0x98));
  }
  plVar3 = *(longlong **)(param_2 + 4);
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
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c42d8 FUN_1485c42d8 body=616 status=ok
// SIG undefined FUN_1485c42d8(void)

void FUN_1485c42d8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined1 local_79;
  undefined1 local_78 [48];
  undefined1 local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_148568536(&local_40);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  puVar4 = local_78;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  local_79 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_79);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_79);
  }
  puVar5 = &local_79;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  local_88 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  uVar3 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = local_40;
  local_90 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  local_a8 = local_88;
  FUN_1485c4542(local_30,&local_98,puVar4,puVar5);
  *param_3 = uVar3;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c4542 FUN_1485c4542 body=665 status=ok
// SIG undefined FUN_1485c4542(void)

longlong FUN_1485c4542(longlong param_1,wchar_t *param_2,undefined8 *param_3,undefined1 *param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  wchar_t **ppwStack_b0;
  double local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  wchar_t *local_88;
  wchar_t **ppwStack_80;
  double local_78;
  double local_70;
  double dStack_68;
  double local_60;
  undefined1 local_54 [4];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_1 == 0) {
    local_88 = L"GetMeshSelectionBoundingBox_InvalidInput";
    ppwStack_80._0_4_ = 0x28;
    FUN_1446e940c(&local_b8,&local_88);
    local_88 = L"UGeometryScriptLibrary_MeshSelectionQueryFunctions";
    ppwStack_80 = (wchar_t **)CONCAT44(ppwStack_80._4_4_,0x32);
    FUN_1446e940c(local_54,&local_88);
    FUN_140208bae(&local_88,local_54,&local_b8,L"GetMeshSelectionBoundingBox: TargetMesh is Null");
    FUN_143ba90d7(param_5,2,&local_88);
    if (local_88 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_88 + 0x10))();
    }
  }
  else {
    *param_4 = 1;
    ppwStack_b0 = &local_88;
    local_88 = (wchar_t *)0x7fefffffffffffff;
    ppwStack_80 = (wchar_t **)0x7fefffffffffffff;
    local_78 = 1.79769313486232e+308;
    local_70 = -1.79769313486232e+308;
    dStack_68 = -1.79769313486232e+308;
    local_60 = -1.79769313486232e+308;
    local_b8 = param_2;
    FUN_143be277c(&local_b8,*(undefined8 *)(param_1 + 0x98));
    if (((((local_70 != -1.79769313486232e+308) || (NAN(local_70))) ||
         (dStack_68 != -1.79769313486232e+308)) ||
        ((((NAN(dStack_68) || (local_60 != -1.79769313486232e+308)) ||
          ((NAN(local_60) ||
           (((double)local_88 != 1.79769313486232e+308 || (NAN((double)local_88))))))) ||
         ((double)ppwStack_80 != 1.79769313486232e+308)))) ||
       (((NAN((double)ppwStack_80) || (local_78 != 1.79769313486232e+308)) || (NAN(local_78))))) {
      *param_4 = 0;
      local_90 = local_60;
      local_a0 = local_70;
      dStack_98 = dStack_68;
      local_a8 = local_78;
      local_b8 = local_88;
      ppwStack_b0 = ppwStack_80;
      bVar4 = local_78 <= local_60 &
              -((double)local_88 <= local_70 && (double)ppwStack_80 <= dStack_68);
      *param_3 = local_88;
      param_3[1] = ppwStack_80;
      param_3[4] = dStack_68;
      param_3[5] = local_60;
      param_3[2] = local_78;
      param_3[3] = local_70;
    }
    else {
      param_3[4] = 0;
      param_3[5] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      *param_3 = 0;
      param_3[1] = 0;
      bVar4 = 0;
    }
    *(byte *)(param_3 + 6) = bVar4;
  }
  plVar3 = *(longlong **)(param_2 + 4);
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
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c4810 FUN_1485c4810 body=315 status=ok
// SIG undefined FUN_1485c4810(void)

void FUN_1485c4810(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0x3a83126f;
  uStack_24 = CONCAT31(uStack_24._1_3_,1);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485c494c(local_20,CONCAT44(uStack_24,local_28),local_30);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c494c FUN_1485c494c body=265 status=ok
// SIG undefined FUN_1485c494c(void)

longlong FUN_1485c494c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_88 [32];
  undefined1 local_68;
  code *local_60;
  wchar_t **local_58;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined8 local_48;
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = param_2;
  if (param_1 == 0) {
    local_40 = L"ApplySimplifyToPlanar_InvalidInput";
    local_38 = 0x22;
    FUN_1446e940c(local_4c,&local_40);
    local_40 = L"UGeometryScriptLibrary_MeshSimplifyFunctions";
    local_38 = 0x2c;
    FUN_1446e940c(local_50,&local_40);
    FUN_140208bae(&local_40,local_50,local_4c,L"ApplySimplifyToPlanar: TargetMesh is Null");
    FUN_143ba90d7(param_3,2,&local_40);
    if (local_40 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_40 + 0x10))();
    }
  }
  else {
    local_40 = (wchar_t *)&local_48;
    local_58 = &local_40;
    local_60 = FUN_143be2dfc;
    local_68 = 0;
    FUN_1484b20f8(param_1,&local_60,0,0);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c4a56 FUN_1485c4a56 body=395 status=ok
// SIG undefined FUN_1485c4a56(void)

void FUN_1485c4a56(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0x3a83126f;
  uStack_24 = CONCAT31(uStack_24._1_3_,1);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = CONCAT31(local_30._1_3_,1);
  uStack_2c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485c4be2(local_20,CONCAT44(uStack_24,local_28),CONCAT44(uStack_2c,local_30),local_38);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c4be2 FUN_1485c4be2 body=299 status=ok
// SIG undefined FUN_1485c4be2(void)

longlong FUN_1485c4be2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  wchar_t *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  code *local_60;
  wchar_t **local_58;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = param_4;
  local_40 = param_3;
  local_38 = param_2;
  if (param_1 == 0) {
    local_78 = L"ApplySimplifyToPolygroupTopology_InvalidInput";
    local_70._0_4_ = 0x2d;
    FUN_1446e940c(local_4c,&local_78);
    local_78 = L"UGeometryScriptLibrary_MeshSimplifyFunctions";
    local_70 = (undefined8 *)CONCAT44(local_70._4_4_,0x2c);
    FUN_1446e940c(local_50,&local_78);
    FUN_140208bae(&local_78,local_50,local_4c,
                  L"ApplySimplifyToPolygroupTopology: TargetMesh is Null");
    FUN_143ba90d7(param_4,2,&local_78);
    if (local_78 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_78 + 0x10))();
    }
  }
  else {
    local_78 = (wchar_t *)&local_40;
    local_58 = &local_78;
    local_70 = &local_48;
    local_68 = &local_38;
    local_60 = FUN_143be2eaa;
    local_88 = 0;
    FUN_1484b20f8(param_1,&local_60,0,0);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c4d0e FUN_1485c4d0e body=413 status=ok
// SIG undefined FUN_1485c4d0e(void)

void FUN_1485c4d0e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined3 uStack_3c;
  undefined8 local_38;
  undefined4 local_2b;
  undefined2 local_27;
  undefined1 local_25;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_2b = 0x1010102;
  local_27 = 0;
  local_25 = 1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2b);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2b);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uStack_3c = CONCAT12(local_25,local_27);
  local_40 = local_2b;
  FUN_1485c4eac(local_20,local_24,&local_40,local_38);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c4eac FUN_1485c4eac body=270 status=ok
// SIG undefined FUN_1485c4eac(void)

longlong FUN_1485c4eac(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_88 [32];
  undefined1 local_68;
  code *local_60;
  wchar_t **local_58;
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  undefined4 local_44;
  wchar_t *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_44 = param_2;
  if (param_1 == 0) {
    local_40 = L"ApplySimplifyToTolerance_InvalidInput";
    local_38._0_4_ = 0x25;
    FUN_1446e940c(local_48,&local_40);
    local_40 = L"UGeometryScriptLibrary_MeshSimplifyFunctions";
    local_38 = CONCAT44(local_38._4_4_,0x2c);
    FUN_1446e940c(local_4c,&local_40);
    FUN_140208bae(&local_40,local_4c,local_48,L"ApplySimplifyToTolerance: TargetMesh is Null");
    FUN_143ba90d7(param_4,2,&local_40);
    if (local_40 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_40 + 0x10))();
    }
  }
  else {
    local_40 = (wchar_t *)&local_44;
    local_58 = &local_40;
    local_60 = FUN_143be3256;
    local_68 = 0;
    local_38 = param_3;
    FUN_1484b20f8(param_1,&local_60,0,0);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c4fbc FUN_1485c4fbc body=411 status=ok
// SIG undefined FUN_1485c4fbc(void)

void FUN_1485c4fbc(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined3 uStack_3c;
  undefined8 local_38;
  undefined4 local_2b;
  undefined2 local_27;
  undefined1 local_25;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_2b = 0x1010102;
  local_27 = 0;
  local_25 = 1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2b);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2b);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uStack_3c = CONCAT12(local_25,local_27);
  local_40 = local_2b;
  FUN_1485c5158(local_20,local_24,&local_40,local_38);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c5158 FUN_1485c5158 body=268 status=ok
// SIG undefined FUN_1485c5158(void)

longlong FUN_1485c5158(longlong param_1,undefined4 param_2,wchar_t *param_3,undefined8 param_4)

{
  undefined1 auStack_88 [32];
  undefined1 local_68;
  code *local_60;
  wchar_t **local_58;
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  undefined4 local_44;
  wchar_t *local_40;
  undefined4 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_44 = param_2;
  if (param_1 == 0) {
    local_40 = L"ApplySimplifyToTriangleCount_InvalidInput";
    local_38._0_4_ = 0x29;
    FUN_1446e940c(local_48,&local_40);
    local_40 = L"UGeometryScriptLibrary_MeshSimplifyFunctions";
    local_38 = (undefined4 *)CONCAT44(local_38._4_4_,0x2c);
    FUN_1446e940c(local_4c,&local_40);
    FUN_140208bae(&local_40,local_4c,local_48,L"ApplySimplifyToTriangleCount: TargetMesh is Null");
    FUN_143ba90d7(param_4,2,&local_40);
    if (local_40 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_40 + 0x10))();
    }
  }
  else {
    local_58 = &local_40;
    local_38 = &local_44;
    local_60 = FUN_143be30e2;
    local_68 = 0;
    local_40 = param_3;
    FUN_1484b20f8(param_1,&local_60,0,0);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c5266 FUN_1485c5266 body=411 status=ok
// SIG undefined FUN_1485c5266(void)

void FUN_1485c5266(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined3 uStack_3c;
  undefined8 local_38;
  undefined4 local_2b;
  undefined2 local_27;
  undefined1 local_25;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_2b = 0x1010102;
  local_27 = 0;
  local_25 = 1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2b);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2b);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uStack_3c = CONCAT12(local_25,local_27);
  local_40 = local_2b;
  FUN_1485c5402(local_20,local_24,&local_40,local_38);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c5402 FUN_1485c5402 body=268 status=ok
// SIG undefined FUN_1485c5402(void)

longlong FUN_1485c5402(longlong param_1,undefined4 param_2,wchar_t *param_3,undefined8 param_4)

{
  undefined1 auStack_88 [32];
  undefined1 local_68;
  code *local_60;
  wchar_t **local_58;
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  undefined4 local_44;
  wchar_t *local_40;
  undefined4 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_44 = param_2;
  if (param_1 == 0) {
    local_40 = L"ApplySimplifyToVertexCount_InvalidInput";
    local_38._0_4_ = 0x27;
    FUN_1446e940c(local_48,&local_40);
    local_40 = L"UGeometryScriptLibrary_MeshSimplifyFunctions";
    local_38 = (undefined4 *)CONCAT44(local_38._4_4_,0x2c);
    FUN_1446e940c(local_4c,&local_40);
    FUN_140208bae(&local_40,local_4c,local_48,L"ApplySimplifyToVertexCount: TargetMesh is Null");
    FUN_143ba90d7(param_4,2,&local_40);
    if (local_40 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_40 + 0x10))();
    }
  }
  else {
    local_58 = &local_40;
    local_38 = &local_44;
    local_60 = FUN_143be319c;
    local_68 = 0;
    local_40 = param_3;
    FUN_1484b20f8(param_1,&local_60,0,0);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c551c FUN_1485c551c body=342 status=ok
// SIG undefined FUN_1485c551c(void)

void FUN_1485c551c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  uVar1 = local_30;
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = &local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485c5674(local_30,puVar2,local_60);
  *param_3 = uVar1;
  FUN_14855fa28(&local_58);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c5674 FUN_1485c5674 body=465 status=ok
// SIG undefined FUN_1485c5674(void)

longlong FUN_1485c5674(longlong param_1,wchar_t *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 == 0) {
    local_40 = L"BuildBVHForMesh_InvalidInput";
    local_38 = 0x1c;
    FUN_1446e940c(local_44,&local_40);
    local_40 = L"UGeometryScriptLibrary_MeshSpatial";
    local_38 = 0x22;
    FUN_1446e940c(local_48,&local_40);
    FUN_140208bae(&local_40,local_48,local_44,L"BuildBVHForMesh: TargetMesh is Null");
    FUN_143ba90d7(param_3,2,&local_40);
    if (local_40 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_40 + 0x10))();
    }
    goto LAB_1485c56b7;
  }
  if (*(longlong *)param_2 == 0) {
    plVar3 = (longlong *)FUN_14001cc68(0xe0,0x10);
    plVar3[1] = (longlong)&DAT_100000001;
    *plVar3 = (longlong)&PTR_FUN_14af7cde0;
    FUN_1457e37e0(plVar3 + 2);
    if (plVar3 == (longlong *)0x0) {
      param_2[0] = L'\x10';
      param_2[1] = L'\0';
      param_2[2] = L'\0';
      param_2[3] = L'\0';
      plVar4 = *(longlong **)(param_2 + 4);
      if (plVar4 != (longlong *)0x0) {
        param_2[4] = L'\0';
        param_2[5] = L'\0';
        param_2[6] = L'\0';
        param_2[7] = L'\0';
LAB_1485c57bb:
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
        if (plVar3 != (longlong *)0x0) goto LAB_1485c57e3;
      }
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *(longlong **)param_2 = plVar3 + 2;
      plVar4 = *(longlong **)(param_2 + 4);
      if (plVar3 == plVar4) {
        LOCK();
        plVar4 = plVar3 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      else {
        *(longlong **)(param_2 + 4) = plVar3;
        if (plVar4 != (longlong *)0x0) goto LAB_1485c57bb;
      }
LAB_1485c57e3:
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  local_40 = param_2;
  FUN_143be33d0(&local_40,*(undefined8 *)(param_1 + 0x98));
LAB_1485c56b7:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c5846 FUN_1485c5846 body=862 status=ok
// SIG undefined FUN_1485c5846(void)

void FUN_1485c5846(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  undefined1 *local_110;
  undefined8 local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined1 local_b9;
  undefined1 local_b8 [4];
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_7c;
  uint uStack_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_7c = 0;
  uStack_78 = uStack_78 & 0xffffff00;
  local_74 = 0x3f000000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  local_b8[0] = 0;
  local_b4 = 0xffffffff;
  local_b0 = DAT_14c8464e0;
  uStack_a8 = DAT_14c8464e8;
  local_a0 = DAT_14c8464f0;
  local_98 = DAT_14c8464e0;
  uStack_90 = DAT_14c8464e8;
  local_88 = DAT_14c8464f0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_b9 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b9);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_c8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  local_110 = &local_b9;
  if (puVar2 != (undefined1 *)0x0) {
    local_110 = puVar2;
  }
  local_118 = local_b8;
  if (puVar1 != (undefined1 *)0x0) {
    local_118 = puVar1;
  }
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = &local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_d8 = CONCAT44(uStack_78,local_7c);
  local_d0 = local_74;
  local_f8 = local_70;
  uStack_f4 = uStack_6c;
  uStack_f0 = uStack_68;
  uStack_ec = uStack_64;
  local_e8 = local_60;
  local_108 = local_c8;
  uVar3 = FUN_1485c5ba6(local_38,puVar4);
  *param_3 = uVar3;
  FUN_14855fa28(&local_58);
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c5ba6 FUN_1485c5ba6 body=420 status=ok
// SIG undefined FUN_1485c5ba6(void)

longlong FUN_1485c5ba6(longlong param_1,wchar_t *param_2,undefined8 param_3,undefined8 param_4,
                      undefined1 *param_5,undefined1 *param_6,undefined8 param_7)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  longlong *local_70;
  undefined8 local_68;
  char *local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  char local_39;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_6 = 1;
  *param_5 = 0;
  local_30 = param_1;
  if (param_1 == 0) {
    local_78 = L"FindNearestPointOnMesh_InvalidInput";
    local_70._0_4_ = 0x23;
    FUN_1446e940c(local_34,&local_78);
    local_78 = L"UGeometryScriptLibrary_MeshSpatial";
    local_70 = (longlong *)CONCAT44(local_70._4_4_,0x22);
    FUN_1446e940c(local_38,&local_78);
    FUN_140208bae(&local_78,local_38,local_34,L"FindNearestPointOnMesh: TargetMesh is Null");
    FUN_143ba90d7(param_7,2,&local_78);
    if (local_78 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_78 + 0x10))();
    }
    lVar1 = 0;
  }
  else {
    local_60 = &local_39;
    local_39 = '\0';
    local_70 = &local_30;
    local_50 = param_6;
    local_48 = param_5;
    local_78 = param_2;
    local_68 = param_4;
    local_58 = param_3;
    FUN_143be36c6();
    lVar1 = local_30;
    if (local_39 == '\0') {
      local_78 = L"FindNearestPointOnMesh_InvalidBVH";
      local_70._0_4_ = 0x21;
      FUN_1446e940c(local_34,&local_78);
      local_78 = L"UGeometryScriptLibrary_MeshSpatial";
      local_70 = (longlong *)CONCAT44(local_70._4_4_,0x22);
      FUN_1446e940c(local_38,&local_78);
      FUN_140208bae(&local_78,local_38,local_34,
                    L"FindNearestPointOnMesh: QueryBVH is Invalid for this TargetMesh");
      FUN_143ba90d7(param_7,2,&local_78);
      lVar1 = local_30;
      if (local_78 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_78 + 0x10))();
        lVar1 = local_30;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 1485c5d4c FUN_1485c5d4c body=998 status=ok
// SIG undefined FUN_1485c5d4c(void)

void FUN_1485c5d4c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined1 local_d9;
  undefined1 local_d8 [4];
  undefined8 local_d4;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_94;
  uint uStack_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_94 = 0;
  uStack_90 = uStack_90 & 0xffffff00;
  local_8c = 0x3f000000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_94);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_94);
  }
  local_d8[0] = 0;
  local_d4 = 0xffffffff00000000;
  local_c8 = DAT_14c8464e0;
  uStack_c0 = DAT_14c8464e8;
  local_b8 = DAT_14c8464f0;
  local_b0 = DAT_14c8464e0;
  uStack_a8 = DAT_14c8464e8;
  local_a0 = DAT_14c8464f0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_d9 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d9);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_e8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  local_148 = &local_d9;
  if (puVar2 != (undefined1 *)0x0) {
    local_148 = puVar2;
  }
  local_150 = local_d8;
  if (puVar1 != (undefined1 *)0x0) {
    local_150 = puVar1;
  }
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = &local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_f8 = CONCAT44(uStack_90,local_94);
  local_158 = &local_f8;
  local_f0 = local_8c;
  local_118 = local_88;
  uStack_110 = uStack_80;
  local_108 = local_78;
  local_138 = local_70;
  uStack_134 = uStack_6c;
  uStack_130 = uStack_68;
  uStack_12c = uStack_64;
  local_128 = local_60;
  local_140 = local_e8;
  uVar3 = FUN_1485c6134(local_38,puVar4);
  *param_3 = uVar3;
  FUN_14855fa28(&local_58);
  if ((local_30 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c6134 FUN_1485c6134 body=444 status=ok
// SIG undefined FUN_1485c6134(void)

longlong FUN_1485c6134(longlong param_1,wchar_t *param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined1 *param_6,undefined1 *param_7,undefined8 param_8)

{
  longlong lVar1;
  undefined1 auStack_a8 [40];
  wchar_t *local_80;
  longlong *local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  char local_39;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_7 = 1;
  *param_6 = 0;
  local_30 = param_1;
  if (param_1 == 0) {
    local_80 = L"FindNearestRayIntersectionWithMesh_InvalidInput";
    local_78._0_4_ = 0x2f;
    FUN_1446e940c(local_34,&local_80);
    local_80 = L"UGeometryScriptLibrary_MeshSpatial";
    local_78 = (longlong *)CONCAT44(local_78._4_4_,0x22);
    FUN_1446e940c(local_38,&local_80);
    FUN_140208bae(&local_80,local_38,local_34,
                  L"FindNearestRayIntersectionWithMesh: TargetMesh is Null");
    FUN_143ba90d7(param_8,2,&local_80);
    if (local_80 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_80 + 0x10))();
    }
    lVar1 = 0;
  }
  else {
    local_68 = &local_39;
    local_39 = '\0';
    local_78 = &local_30;
    local_70 = param_5;
    local_50 = param_7;
    local_48 = param_6;
    local_80 = param_2;
    local_60 = param_3;
    local_58 = param_4;
    FUN_143be386c();
    lVar1 = local_30;
    if (local_39 == '\0') {
      local_80 = L"FindNearestRayIntersectionWithMesh_InvalidBVH";
      local_78._0_4_ = 0x2d;
      FUN_1446e940c(local_34,&local_80);
      local_80 = L"UGeometryScriptLibrary_MeshSpatial";
      local_78 = (longlong *)CONCAT44(local_78._4_4_,0x22);
      FUN_1446e940c(local_38,&local_80);
      FUN_140208bae(&local_80,local_38,local_34,
                    L"FindNearestRayIntersectionWithMesh: QueryBVH is Invalid for this TargetMesh");
      FUN_143ba90d7(param_8,2,&local_80);
      lVar1 = local_30;
      if (local_80 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_80 + 0x10))();
        lVar1 = local_30;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 1485c62f8 FUN_1485c62f8 body=431 status=ok
// SIG undefined FUN_1485c62f8(void)

void FUN_1485c62f8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_59 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_59);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_59);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  uVar2 = local_30;
  puVar4 = &local_59;
  if (puVar1 != (undefined1 *)0x0) {
    puVar4 = puVar1;
  }
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = &local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485c64a8(local_30,puVar3,puVar4,local_68);
  *param_3 = uVar2;
  FUN_14855fa28(&local_58);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c64a8 FUN_1485c64a8 body=281 status=ok
// SIG undefined FUN_1485c64a8(void)

longlong FUN_1485c64a8(longlong param_1,longlong *param_2,undefined1 *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_3 = 0;
  if (param_1 == 0) {
    local_40 = L"IsBVHValidForMesh_InvalidInput";
    local_38 = 0x1e;
    FUN_1446e940c(local_44,&local_40);
    local_40 = L"UGeometryScriptLibrary_MeshSpatial";
    local_38 = 0x22;
    FUN_1446e940c(local_48,&local_40);
    FUN_140208bae(&local_40,local_48,local_44,L"IsBVHValidForMesh: TargetMesh is Null");
    FUN_143ba90d7(param_4,2,&local_40);
    if (local_40 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_40 + 0x10))();
    }
  }
  else {
    lVar1 = *param_2;
    if ((lVar1 != 0) && (lVar2 = *(longlong *)(lVar1 + 8), lVar2 == *(longlong *)(param_1 + 0x98)))
    {
      if (*(int *)(lVar1 + 0xcc) < 0) {
        bVar3 = false;
      }
      else {
        bVar3 = *(ulonglong *)(lVar1 + 0x10) ==
                (ulonglong)(uint)(*(int *)(lVar2 + 0x214) + *(int *)(lVar2 + 0x218));
      }
      *param_3 = bVar3;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c65c8 FUN_1485c65c8 body=781 status=ok
// SIG undefined FUN_1485c65c8(void)

void FUN_1485c65c8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 local_7c;
  uint uStack_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_7c = 0;
  uStack_78 = uStack_78 & 0xffffff00;
  local_74 = 0x3f000000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  local_7d = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7d);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_7e = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7e);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7e);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_88 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_d0 = &local_7e;
  if (puVar2 != (undefined1 *)0x0) {
    local_d0 = puVar2;
  }
  local_d8 = &local_7d;
  if (puVar1 != (undefined1 *)0x0) {
    local_d8 = puVar1;
  }
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = &local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = CONCAT44(uStack_78,local_7c);
  local_90 = local_74;
  local_b8 = local_70;
  uStack_b4 = uStack_6c;
  uStack_b0 = uStack_68;
  uStack_ac = uStack_64;
  local_a8 = local_60;
  local_c8 = local_88;
  uVar3 = FUN_1485c68d6(local_38,puVar4);
  *param_3 = uVar3;
  FUN_14855fa28(&local_58);
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c68d6 FUN_1485c68d6 body=420 status=ok
// SIG undefined FUN_1485c68d6(void)

longlong FUN_1485c68d6(longlong param_1,wchar_t *param_2,undefined8 param_3,undefined8 param_4,
                      undefined1 *param_5,undefined1 *param_6,undefined8 param_7)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  longlong *local_70;
  undefined8 local_68;
  char *local_60;
  undefined1 *local_58;
  undefined8 local_50;
  undefined1 *local_48;
  char local_39;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_6 = 1;
  *param_5 = 0;
  local_30 = param_1;
  if (param_1 == 0) {
    local_78 = L"IsPointInsideMesh_InvalidInput";
    local_70._0_4_ = 0x1e;
    FUN_1446e940c(local_34,&local_78);
    local_78 = L"UGeometryScriptLibrary_MeshSpatial";
    local_70 = (longlong *)CONCAT44(local_70._4_4_,0x22);
    FUN_1446e940c(local_38,&local_78);
    FUN_140208bae(&local_78,local_38,local_34,L"IsPointInsideMesh: TargetMesh is Null");
    FUN_143ba90d7(param_7,2,&local_78);
    if (local_78 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_78 + 0x10))();
    }
    lVar1 = 0;
  }
  else {
    local_60 = &local_39;
    local_39 = '\0';
    local_70 = &local_30;
    local_58 = param_5;
    local_48 = param_6;
    local_78 = param_2;
    local_68 = param_4;
    local_50 = param_3;
    FUN_143be3b4e();
    lVar1 = local_30;
    if (local_39 == '\0') {
      local_78 = L"IsPointInsideMesh_InvalidBVH";
      local_70._0_4_ = 0x1c;
      FUN_1446e940c(local_34,&local_78);
      local_78 = L"UGeometryScriptLibrary_MeshSpatial";
      local_70 = (longlong *)CONCAT44(local_70._4_4_,0x22);
      FUN_1446e940c(local_38,&local_78);
      FUN_140208bae(&local_78,local_38,local_34,
                    L"IsPointInsideMesh: QueryBVH is Invalid for this TargetMesh");
      FUN_143ba90d7(param_7,2,&local_78);
      lVar1 = local_30;
      if (local_78 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_78 + 0x10))();
        lVar1 = local_30;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 1485c6a82 FUN_1485c6a82 body=424 status=ok
// SIG undefined FUN_1485c6a82(void)

void FUN_1485c6a82(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  iVar1 = local_5c;
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  uVar2 = local_38;
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = &local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485c6c2c(local_38,puVar3,iVar1 != 0,local_68);
  *param_3 = uVar2;
  FUN_14855fa28(&local_58);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c6c2c FUN_1485c6c2c body=479 status=ok
// SIG undefined FUN_1485c6c2c(void)

longlong FUN_1485c6c2c(longlong param_1,longlong *param_2,undefined1 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [44];
  undefined1 local_4c [4];
  undefined1 local_48 [7];
  undefined1 local_41;
  wchar_t *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_41 = param_3;
  if (param_1 == 0) {
    local_40 = L"RebuildBVHForMesh_InvalidInput";
    local_38._0_4_ = 0x1e;
    FUN_1446e940c(local_48,&local_40);
    local_40 = L"UGeometryScriptLibrary_MeshSpatial";
    local_38 = (longlong *)CONCAT44(local_38._4_4_,0x22);
    FUN_1446e940c(local_4c,&local_40);
    FUN_140208bae(&local_40,local_4c,local_48,L"RebuildBVHForMesh: TargetMesh is Null");
    FUN_143ba90d7(param_4,2,&local_40);
    if (local_40 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_40 + 0x10))();
    }
    goto LAB_1485c6c7d;
  }
  if (*param_2 == 0) {
    plVar3 = (longlong *)FUN_14001cc68(0xe0,0x10);
    plVar3[1] = (longlong)&DAT_100000001;
    *plVar3 = (longlong)&PTR_FUN_14af7cde0;
    FUN_1457e37e0(plVar3 + 2);
    if (plVar3 == (longlong *)0x0) {
      *param_2 = 0x10;
      plVar4 = (longlong *)param_2[1];
      if (plVar4 != (longlong *)0x0) {
        param_2[1] = 0;
LAB_1485c6d81:
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
        if (plVar3 != (longlong *)0x0) goto LAB_1485c6da9;
      }
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *param_2 = (longlong)(plVar3 + 2);
      plVar4 = (longlong *)param_2[1];
      if (plVar3 == plVar4) {
        LOCK();
        plVar4 = plVar3 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      else {
        param_2[1] = (longlong)plVar3;
        if (plVar4 != (longlong *)0x0) goto LAB_1485c6d81;
      }
LAB_1485c6da9:
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  local_40 = (wchar_t *)&local_41;
  local_38 = param_2;
  FUN_143be352e(&local_40,*(undefined8 *)(param_1 + 0x98));
LAB_1485c6c7d:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c6e0c FUN_1485c6e0c body=172 status=ok
// SIG undefined FUN_1485c6e0c(void)

void FUN_1485c6e0c(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485c6eba(puVar1);
  FUN_14855fa28(&local_38);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c6eba FUN_1485c6eba body=131 status=ok
// SIG undefined FUN_1485c6eba(void)

void FUN_1485c6eba(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = 0;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    param_1[1] = 0;
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
  param_1[2] = 0;
  plVar3 = (longlong *)param_1[3];
  if (plVar3 != (longlong *)0x0) {
    param_1[3] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001485c6f31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1485c6f3e FUN_1485c6f3e body=987 status=ok
// SIG undefined FUN_1485c6f3e(void)

void FUN_1485c6f3e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  undefined1 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b1;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined4 local_9c;
  uint uStack_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60;
  undefined7 uStack_5f;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar4 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_60 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_9c = 0;
  uStack_98 = uStack_98 & 0xffffff00;
  local_94 = 0x3f000000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  FUN_148568536(local_b0);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b0);
  }
  puVar5 = local_b0;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  local_b1 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b1);
  }
  local_b8 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  local_c0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_d0 = CONCAT44(uStack_98,local_9c);
  local_c8 = local_94;
  local_108 = local_90;
  uStack_104 = uStack_8c;
  uStack_100 = uStack_88;
  uStack_fc = uStack_84;
  local_f8 = local_80;
  uStack_f4 = uStack_7c;
  uStack_f0 = uStack_78;
  uStack_ec = uStack_74;
  local_e8 = local_70;
  uStack_e4 = uStack_6c;
  uStack_e0 = uStack_68;
  uStack_dc = uStack_64;
  local_d8 = CONCAT71(uStack_5f,local_60);
  local_110 = local_c0;
  local_118 = local_b8;
  local_120 = local_b1;
  local_128 = puVar5;
  uVar3 = FUN_1485c731a(local_38,puVar4);
  *param_3 = uVar3;
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar2 = (int *)((longlong)local_a8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a8 + 0x10))(local_a8);
      }
    }
  }
  FUN_14855fa28(&local_58);
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c731a FUN_1485c731a body=856 status=ok
// SIG undefined FUN_1485c731a(void)

longlong FUN_1485c731a(longlong param_1,wchar_t *param_2,undefined8 *param_3,float *param_4,
                      undefined8 param_5,undefined8 param_6,int param_7,undefined8 param_8)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_1b8 [40];
  undefined1 local_190 [4];
  undefined1 local_18c [4];
  wchar_t *local_188;
  longlong *local_180;
  float *local_178;
  undefined1 *local_170;
  undefined1 **local_168;
  undefined8 *local_160;
  wchar_t **local_158;
  undefined1 *local_150;
  int *local_148;
  undefined1 local_139;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  longlong local_100;
  int local_f4;
  undefined1 *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  wchar_t *local_98;
  undefined4 local_90;
  longlong local_88;
  longlong *local_78;
  longlong local_68 [4];
  undefined1 local_48;
  ulonglong local_30;
  
  uVar1 = param_8;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  iVar4 = 3;
  if (param_7 < 3) {
    iVar4 = param_7;
  }
  local_f4 = 1;
  if (1 < iVar4) {
    local_f4 = iVar4;
  }
  local_100 = param_1;
  if (param_1 == 0) {
    local_98 = L"SelectMeshElementsInBoxWithBVH_InvalidInput";
    local_90 = 0x2b;
    FUN_1446e940c(&local_f0,&local_98);
    local_98 = L"UGeometryScriptLibrary_MeshSpatial";
    local_90 = 0x22;
    FUN_1446e940c(&local_188,&local_98);
    FUN_140208bae(&local_98,&local_188,&local_f0,
                  L"SelectMeshElementsInBoxWithBVH: TargetMesh is Null");
    FUN_143ba90d7(uVar1,2,&local_98);
    if (local_98 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_98 + 0x10))();
    }
    lVar3 = 0;
  }
  else {
    if (*(char *)(param_3 + 6) == '\0') {
      local_138 = 0x7fefffffffffffff;
      uStack_130 = 0x7fefffffffffffff;
      local_128 = 0x7fefffffffffffff;
      local_120 = 0xffefffffffffffff;
      uStack_118 = 0xffefffffffffffff;
      local_110 = 0xffefffffffffffff;
    }
    else {
      local_128 = param_3[2];
      local_138 = *param_3;
      uStack_130 = param_3[1];
      local_110 = param_3[5];
      local_120 = param_3[3];
      uStack_118 = param_3[4];
    }
    local_158 = &local_98;
    local_88 = 0;
    local_78 = (longlong *)0x0;
    local_48 = 0;
    uVar5 = -(uint)(*param_4 == 0.0);
    local_98 = (wchar_t *)(double)(float)(~uVar5 & (uint)*param_4 | uVar5 & 0x7f7fffff);
    local_168 = &local_f0;
    local_f0 = &DAT_100000004;
    local_c8 = 0;
    local_c0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_bc = 0xffffffff00000080;
    local_b4 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_180 = &local_100;
    local_170 = (undefined1 *)&param_6;
    local_160 = &local_138;
    local_150 = &local_139;
    local_148 = &local_f4;
    local_188 = param_2;
    local_178 = param_4;
    FUN_143be3c42(&local_188);
    local_188 = L"IsPointInsideMesh_InvalidBVH";
    local_180._0_4_ = 0x1c;
    FUN_1446e940c(local_18c,&local_188);
    local_188 = L"UGeometryScriptLibrary_MeshSpatial";
    local_180 = (longlong *)CONCAT44(local_180._4_4_,0x22);
    FUN_1446e940c(local_190,&local_188);
    FUN_140208bae(&local_188,local_190,local_18c,
                  L"IsPointInsideMesh: QueryBVH is Invalid for this TargetMesh");
    FUN_143ba90d7(uVar1,2,&local_188);
    if (local_188 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_188 + 0x10))();
    }
    FUN_148568e32(param_5,&local_f0);
    lVar3 = local_100;
    local_a0 = 0;
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    FUN_140345f8a(&local_e8);
    if (local_88 != 0) {
      plVar2 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar2 = local_68;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c767e FUN_1485c767e body=381 status=ok
// SIG undefined FUN_1485c767e(void)

void FUN_1485c767e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_21;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_21 = 1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  local_28 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485c77fc(local_20,local_21,local_28,local_30);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c77fc FUN_1485c77fc body=303 status=ok
// SIG undefined FUN_1485c77fc(void)

longlong FUN_1485c77fc(longlong param_1,undefined1 param_2,int param_3,undefined8 param_4)

{
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  code *local_60;
  wchar_t **local_58;
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  int local_44;
  undefined8 local_40;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_44 = param_3;
  local_40 = param_4;
  local_31 = param_2;
  if (param_1 == 0) {
    local_78 = L"ApplyPNTessellation_InvalidInput";
    local_70._0_4_ = 0x20;
    FUN_1446e940c(local_48,&local_78);
    local_78 = L"UGeometryScriptLibrary_MeshSubdivideFunctions";
    local_70 = (undefined1 *)CONCAT44(local_70._4_4_,0x2d);
    FUN_1446e940c(local_4c,&local_78);
    FUN_140208bae(&local_78,local_4c,local_48,L"ApplyPNTessellation: TargetMesh is Null");
    FUN_143ba90d7(param_4,2,&local_78);
    if (local_78 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_78 + 0x10))();
    }
  }
  else if (0 < param_3) {
    local_78 = (wchar_t *)&local_44;
    local_58 = &local_78;
    local_70 = &local_31;
    local_68 = &local_40;
    local_60 = FUN_143be570e;
    local_88 = 0;
    FUN_1484b20f8(param_1,&local_60,0,0);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c792c FUN_1485c792c body=610 status=ok
// SIG undefined FUN_1485c792c(void)

void FUN_1485c792c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined1 local_39;
  undefined4 local_38;
  undefined2 local_32;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_148568536(&local_30);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_32 = 1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_32);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_32);
  }
  local_38 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_39 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  uVar3 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_30;
  local_50 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_60 = local_48;
  local_68 = local_39;
  FUN_1485c7b90(local_20,&local_58,local_32,local_38);
  *param_3 = uVar3;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c7b90 FUN_1485c7b90 body=494 status=ok
// SIG undefined FUN_1485c7b90(void)

longlong FUN_1485c7b90(longlong param_1,wchar_t *param_2,ushort param_3,int param_4,char param_5,
                      undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  wchar_t *local_80;
  ushort *local_78;
  undefined1 *local_70;
  int *local_68;
  undefined8 *local_60;
  code *local_58;
  wchar_t **local_50;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  int local_40;
  ushort local_3a;
  ulonglong local_38;
  
  uVar4 = param_6;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_40 = param_4;
  local_3a = param_3;
  if (param_1 == 0) {
    local_80 = L"ApplyAdapativeTessellation_InvalidInput";
    local_78._0_4_ = 0x27;
    FUN_1446e940c(local_44,&local_80);
    local_80 = L"UGeometryScriptLibrary_MeshSubdivideFunctions";
    local_78 = (ushort *)CONCAT44(local_78._4_4_,0x2d);
    FUN_1446e940c(local_48,&local_80);
    pwVar5 = L"ApplyAdapativeTessellation: TargetMesh is Null";
  }
  else {
    if (param_4 < 1) goto LAB_1485c7cb7;
    if (param_5 == '\0') {
      if (*(int *)(*(longlong *)param_2 + 0x10) != *(int *)(*(longlong *)param_2 + 0x3c) ||
          param_3 < 0x100) {
        local_50 = &local_80;
        local_78 = &local_3a;
        local_70 = &param_5;
        local_68 = &local_40;
        local_60 = &param_6;
        local_58 = FUN_143be5af2;
        local_88 = 0;
        local_80 = param_2;
        FUN_1484b20f8(param_1,&local_58,0,0);
      }
      goto LAB_1485c7cb7;
    }
    local_80 = L"ApplyAdapativeTessellation_InvalidPatternTypeNew";
    local_78._0_4_ = 0x30;
    FUN_1446e940c(local_44,&local_80);
    local_80 = L"UGeometryScriptLibrary_MeshSubdivideFunctions";
    local_78 = (ushort *)CONCAT44(local_78._4_4_,0x2d);
    FUN_1446e940c(local_48,&local_80);
    pwVar5 = L"ApplyAdapativeTessellation: Only ConcentricRings pattern is currently supported";
  }
  FUN_140208bae(&local_80,local_48,local_44,pwVar5);
  FUN_143ba90d7(uVar4,2,&local_80);
  if (local_80 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_80 + 0x10))();
  }
LAB_1485c7cb7:
  plVar3 = *(longlong **)(param_2 + 4);
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
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c7d80 FUN_1485c7d80 body=309 status=ok
// SIG undefined FUN_1485c7d80(void)

void FUN_1485c7d80(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485c7eb6(local_20,local_24,local_30);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c7eb6 FUN_1485c7eb6 body=282 status=ok
// SIG undefined FUN_1485c7eb6(void)

longlong FUN_1485c7eb6(longlong param_1,int param_2,undefined8 param_3)

{
  undefined1 auStack_98 [32];
  undefined1 local_78;
  code *local_68;
  wchar_t **local_60;
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  int local_4c;
  undefined8 local_48;
  wchar_t *local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_4c = param_2;
  local_48 = param_3;
  if (param_1 == 0) {
    local_40 = L"ApplyUniformTessellation_InvalidInput";
    local_38._0_4_ = 0x25;
    FUN_1446e940c(local_50,&local_40);
    local_40 = L"UGeometryScriptLibrary_MeshSubdivideFunctions";
    local_38 = (undefined8 *)CONCAT44(local_38._4_4_,0x2d);
    FUN_1446e940c(local_54,&local_40);
    FUN_140208bae(&local_40,local_54,local_50,L"ApplyUniformTessellation: TargetMesh is Null");
    FUN_143ba90d7(param_3,2,&local_40);
    if (local_40 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_40 + 0x10))();
    }
  }
  else if (0 < param_2) {
    local_40 = (wchar_t *)&local_4c;
    local_60 = &local_40;
    local_38 = &local_48;
    local_68 = FUN_143be58b2;
    local_78 = 0;
    FUN_1484b20f8(param_1,&local_68,0,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c7fd4 FUN_1485c7fd4 body=440 status=ok
// SIG undefined FUN_1485c7fd4(void)

void FUN_1485c7fd4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_50;
  uStack_70 = uStack_48;
  local_68 = local_40;
  local_98 = local_38;
  uStack_94 = uStack_34;
  uStack_90 = uStack_30;
  uStack_8c = uStack_2c;
  local_88 = local_28;
  FUN_1485c818e(local_20,&local_98,&local_78,local_58);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c818e FUN_1485c818e body=259 status=ok
// SIG undefined FUN_1485c818e(void)

longlong FUN_1485c818e(longlong param_1,wchar_t *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 *local_58;
  wchar_t **local_50;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 == 0) {
    local_40 = L"RotateMesh_InvalidInput";
    local_38._0_4_ = 0x17;
    FUN_1446e940c(local_44,&local_40);
    local_40 = L"UGeometryScriptLibrary_MeshTransformFunctions";
    local_38 = CONCAT44(local_38._4_4_,0x2d);
    FUN_1446e940c(local_48,&local_40);
    FUN_140208bae(&local_40,local_48,local_44,L"RotateMesh: TargetMesh is Null");
    FUN_143ba90d7(param_4,2,&local_40);
    if (local_40 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_40 + 0x10))();
    }
  }
  else {
    local_50 = &local_40;
    local_58 = &LAB_143be5eb2;
    local_68 = 0;
    local_40 = param_2;
    local_38 = param_3;
    FUN_1484b20f8(param_1,&local_58,0,0);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c8292 FUN_1485c8292 body=637 status=ok
// SIG undefined FUN_1485c8292(void)

void FUN_1485c8292(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_148568536(&local_30);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  uVar3 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = local_60;
  uStack_80 = uStack_58;
  local_78 = local_50;
  local_a8 = local_48;
  uStack_a4 = uStack_44;
  uStack_a0 = uStack_40;
  uStack_9c = uStack_3c;
  local_98 = local_38;
  local_b8 = local_30;
  local_b0 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_c8 = local_68;
  FUN_1485c8510(local_20,&local_b8,&local_a8,&local_88);
  *param_3 = uVar3;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c8510 FUN_1485c8510 body=320 status=ok
// SIG undefined FUN_1485c8510(void)

longlong FUN_1485c8510(longlong param_1,wchar_t *param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  wchar_t **local_48;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 == 0) {
    local_68 = L"RotateMeshSelection_InvalidInput";
    local_60._0_4_ = 0x20;
    FUN_1446e940c(local_3c,&local_68);
    local_68 = L"UGeometryScriptLibrary_MeshTransformFunctions";
    local_60 = CONCAT44(local_60._4_4_,0x2d);
    FUN_1446e940c(local_40,&local_68);
    FUN_140208bae(&local_68,local_40,local_3c,L"RotateMeshSelection: TargetMesh is Null");
    FUN_143ba90d7(param_5,2,&local_68);
    if (local_68 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_68 + 0x10))();
    }
  }
  else {
    local_48 = &local_68;
    local_50 = FUN_143be62f0;
    local_78 = 0;
    local_68 = param_2;
    local_60 = param_3;
    local_58 = param_4;
    FUN_1484b20f8(param_1,&local_50,0,0);
  }
  plVar3 = *(longlong **)(param_2 + 4);
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
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c8658 FUN_1485c8658 body=539 status=ok
// SIG undefined FUN_1485c8658(void)

void FUN_1485c8658(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  int local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  iVar1 = local_5c;
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  uVar2 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = local_58;
  uStack_80 = uStack_50;
  local_78 = local_48;
  local_a8 = local_40;
  uStack_a4 = uStack_3c;
  uStack_a0 = uStack_38;
  uStack_9c = uStack_34;
  local_98 = local_30;
  local_b8 = local_68;
  FUN_1485c8874(local_28,&local_a8,&local_88,iVar1 != 0);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c8874 FUN_1485c8874 body=278 status=ok
// SIG undefined FUN_1485c8874(void)

longlong FUN_1485c8874(longlong param_1,wchar_t *param_2,undefined8 param_3,undefined1 param_4,
                      undefined8 param_5)

{
  undefined1 auStack_98 [32];
  undefined1 local_78;
  wchar_t *local_68;
  undefined8 local_60;
  undefined1 *local_58;
  code *local_50;
  wchar_t **local_48;
  undefined1 local_3c [4];
  undefined1 local_38 [7];
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_31 = param_4;
  if (param_1 == 0) {
    local_68 = L"ScaleMesh_InvalidInput";
    local_60._0_4_ = 0x16;
    FUN_1446e940c(local_38,&local_68);
    local_68 = L"UGeometryScriptLibrary_MeshTransformFunctions";
    local_60 = CONCAT44(local_60._4_4_,0x2d);
    FUN_1446e940c(local_3c,&local_68);
    FUN_140208bae(&local_68,local_3c,local_38,L"ScaleMesh: TargetMesh is Null");
    FUN_143ba90d7(param_5,2,&local_68);
    if (local_68 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_68 + 0x10))();
    }
  }
  else {
    local_48 = &local_68;
    local_58 = &local_31;
    local_50 = FUN_143be5ec4;
    local_78 = 0;
    local_68 = param_2;
    local_60 = param_3;
    FUN_1484b20f8(param_1,&local_50,0,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c898c FUN_1485c898c body=637 status=ok
// SIG undefined FUN_1485c898c(void)

void FUN_1485c898c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_148568536(&local_30);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  uVar3 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = local_60;
  uStack_80 = uStack_58;
  local_78 = local_50;
  local_a8 = local_48;
  uStack_a4 = uStack_44;
  uStack_a0 = uStack_40;
  uStack_9c = uStack_3c;
  local_98 = local_38;
  local_b8 = local_30;
  local_b0 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_c8 = local_68;
  FUN_1485c8c0a(local_20,&local_b8,&local_a8,&local_88);
  *param_3 = uVar3;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c8c0a FUN_1485c8c0a body=320 status=ok
// SIG undefined FUN_1485c8c0a(void)

longlong FUN_1485c8c0a(longlong param_1,wchar_t *param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  wchar_t **local_48;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 == 0) {
    local_68 = L"ScaleMeshSelection_InvalidInput";
    local_60._0_4_ = 0x1f;
    FUN_1446e940c(local_3c,&local_68);
    local_68 = L"UGeometryScriptLibrary_MeshTransformFunctions";
    local_60 = CONCAT44(local_60._4_4_,0x2d);
    FUN_1446e940c(local_40,&local_68);
    FUN_140208bae(&local_68,local_40,local_3c,L"ScaleMeshSelection: TargetMesh is Null");
    FUN_143ba90d7(param_5,2,&local_68);
    if (local_68 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_68 + 0x10))();
    }
  }
  else {
    local_48 = &local_68;
    local_50 = FUN_143be64ba;
    local_78 = 0;
    local_68 = param_2;
    local_60 = param_4;
    local_58 = param_3;
    FUN_1484b20f8(param_1,&local_50,0,0);
  }
  plVar3 = *(longlong **)(param_2 + 4);
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
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c8d52 FUN_1485c8d52 body=533 status=ok
// SIG undefined FUN_1485c8d52(void)

void FUN_1485c8d52(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_118 [32];
  undefined8 local_f8 [12];
  undefined8 local_98;
  int local_8c;
  undefined8 local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_88[0] = 0;
  local_88[1] = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_8c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  iVar2 = local_8c;
  local_98 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  uVar1 = local_98;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar5 = local_88;
  puVar6 = local_f8;
  for (lVar4 = 0xc; uVar3 = local_28, lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_1485c8f68(local_28,local_f8,iVar2 != 0,uVar1);
  *param_3 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c8f68 FUN_1485c8f68 body=269 status=ok
// SIG undefined FUN_1485c8f68(void)

longlong FUN_1485c8f68(longlong param_1,wchar_t *param_2,undefined1 param_3,undefined8 param_4)

{
  undefined1 auStack_88 [32];
  undefined1 local_68;
  code *local_60;
  wchar_t **local_58;
  undefined1 local_4c [4];
  undefined1 local_48 [7];
  undefined1 local_41;
  wchar_t *local_40;
  undefined1 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_41 = param_3;
  if (param_1 == 0) {
    local_40 = L"TransformMesh_InvalidInput";
    local_38._0_4_ = 0x1a;
    FUN_1446e940c(local_48,&local_40);
    local_40 = L"UGeometryScriptLibrary_MeshTransformFunctions";
    local_38 = (undefined1 *)CONCAT44(local_38._4_4_,0x2d);
    FUN_1446e940c(local_4c,&local_40);
    FUN_140208bae(&local_40,local_4c,local_48,L"TransformMesh: TargetMesh is Null");
    FUN_143ba90d7(param_4,2,&local_40);
    if (local_40 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_40 + 0x10))();
    }
  }
  else {
    local_58 = &local_40;
    local_38 = &local_41;
    local_60 = FUN_143be5de6;
    local_68 = 0;
    local_40 = param_2;
    FUN_1484b20f8(param_1,&local_60,0,0);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c9076 FUN_1485c9076 body=606 status=ok
// SIG undefined FUN_1485c9076(void)

void FUN_1485c9076(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong *local_110;
  undefined8 local_108 [13];
  undefined8 local_a0;
  undefined8 local_98 [2];
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
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_148568536(&local_38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_98[0] = 0;
  local_98[1] = 0;
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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  local_a0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  uVar3 = local_a0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar6 = local_98;
  puVar7 = local_108;
  for (lVar5 = 0xc; uVar4 = local_28, lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_118 = local_38;
  local_110 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  FUN_1485c92d6(local_28,&local_118,local_108,uVar3);
  *param_3 = uVar4;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c92d6 FUN_1485c92d6 body=311 status=ok
// SIG undefined FUN_1485c92d6(void)

longlong FUN_1485c92d6(longlong param_1,wchar_t *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  code *local_60;
  wchar_t **local_58;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  wchar_t *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 == 0) {
    local_48 = L"TransformMeshSelection_InvalidInput";
    local_40._0_4_ = 0x23;
    FUN_1446e940c(local_4c,&local_48);
    local_48 = L"UGeometryScriptLibrary_MeshTransformFunctions";
    local_40 = CONCAT44(local_40._4_4_,0x2d);
    FUN_1446e940c(local_50,&local_48);
    FUN_140208bae(&local_48,local_50,local_4c,L"TransformMeshSelection: TargetMesh is Null");
    FUN_143ba90d7(param_4,2,&local_48);
    if (local_48 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_48 + 0x10))();
    }
  }
  else {
    local_58 = &local_48;
    local_60 = FUN_143be5f38;
    local_68 = 0;
    local_48 = param_2;
    local_40 = param_3;
    FUN_1484b20f8(param_1,&local_60,0,0);
  }
  plVar3 = *(longlong **)(param_2 + 4);
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
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c940e FUN_1485c940e body=319 status=ok
// SIG undefined FUN_1485c940e(void)

void FUN_1485c940e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  uStack_54 = uStack_34;
  uStack_50 = uStack_30;
  uStack_4c = uStack_2c;
  local_48 = local_28;
  FUN_1485c954e(local_20,&local_58,local_40);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c954e FUN_1485c954e body=255 status=ok
// SIG undefined FUN_1485c954e(void)

longlong FUN_1485c954e(longlong param_1,wchar_t *param_2,undefined8 param_3)

{
  undefined1 auStack_88 [32];
  undefined1 local_68;
  code *local_58;
  wchar_t **local_50;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 == 0) {
    local_40 = L"TranslateMesh_InvalidInput";
    local_38 = 0x1a;
    FUN_1446e940c(local_44,&local_40);
    local_40 = L"UGeometryScriptLibrary_MeshTransformFunctions";
    local_38 = 0x2d;
    FUN_1446e940c(local_48,&local_40);
    FUN_140208bae(&local_40,local_48,local_44,L"TranslateMesh: TargetMesh is Null");
    FUN_143ba90d7(param_3,2,&local_40);
    if (local_40 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_40 + 0x10))();
    }
  }
  else {
    local_50 = &local_40;
    local_58 = FUN_143be5e62;
    local_68 = 0;
    local_40 = param_2;
    FUN_1484b20f8(param_1,&local_58,0,0);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c964e FUN_1485c964e body=479 status=ok
// SIG undefined FUN_1485c964e(void)

void FUN_1485c964e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_148568536(&local_30);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar3 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_48;
  uStack_64 = uStack_44;
  uStack_60 = uStack_40;
  uStack_5c = uStack_3c;
  local_58 = local_38;
  local_78 = local_30;
  local_70 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  FUN_1485c982e(local_20,&local_78,&local_68,local_50);
  *param_3 = uVar3;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c982e FUN_1485c982e body=311 status=ok
// SIG undefined FUN_1485c982e(void)

longlong FUN_1485c982e(longlong param_1,wchar_t *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  code *local_60;
  wchar_t **local_58;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  wchar_t *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 == 0) {
    local_48 = L"TranslateMeshSelection_InvalidInput";
    local_40._0_4_ = 0x23;
    FUN_1446e940c(local_4c,&local_48);
    local_48 = L"UGeometryScriptLibrary_MeshTransformFunctions";
    local_40 = CONCAT44(local_40._4_4_,0x2d);
    FUN_1446e940c(local_50,&local_48);
    FUN_140208bae(&local_48,local_50,local_4c,L"TranslateMeshSelection: TargetMesh is Null");
    FUN_143ba90d7(param_4,2,&local_48);
    if (local_48 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_48 + 0x10))();
    }
  }
  else {
    local_58 = &local_48;
    local_60 = FUN_143be6188;
    local_68 = 0;
    local_48 = param_2;
    local_40 = param_3;
    FUN_1484b20f8(param_1,&local_60,0,0);
  }
  plVar3 = *(longlong **)(param_2 + 4);
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
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c9966 FUN_1485c9966 body=333 status=ok
// SIG undefined FUN_1485c9966(void)

void FUN_1485c9966(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  uint uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  ulonglong local_40;
  undefined8 local_38;
  undefined4 local_30;
  uint uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  uVar1 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_20 = local_40 ^ 0x8000000000000000;
  uStack_2c = uStack_4c ^ 0x80000000;
  uStack_24 = uStack_44 ^ 0x80000000;
  local_30 = local_50;
  uStack_28 = uStack_48;
  FUN_1485c954e(local_38,&local_30,local_58);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c9afe FUN_1485c9afe body=706 status=ok
// SIG undefined FUN_1485c9afe(void)

void FUN_1485c9afe(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int local_8c;
  undefined1 local_85;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_6c;
  longlong local_68;
  undefined4 *local_60;
  undefined1 *local_58;
  undefined4 *local_50;
  undefined4 *local_48;
  code *local_40;
  undefined4 **local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_6c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_84 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_84);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  puVar2 = &local_84;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  local_85 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_85);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_85);
  }
  puVar3 = &local_85;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  local_8c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  lVar1 = local_68;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = local_80;
  uStack_a4 = uStack_7c;
  uStack_a0 = uStack_78;
  uStack_9c = uStack_74;
  local_2c = local_6c;
  *puVar3 = 0;
  *puVar2 = 0xffffffff;
  if (lVar1 != 0) {
    local_60 = &local_2c;
    local_38 = &local_60;
    local_48 = &local_a8;
    local_40 = FUN_143be69a6;
    local_b8 = local_8c != 0;
    local_58 = puVar3;
    local_50 = puVar2;
    FUN_1484b20f8(lVar1,&local_40,0,0);
  }
  *param_3 = lVar1;
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485c9dc2 FUN_1485c9dc2 body=773 status=ok
// SIG undefined FUN_1485c9dc2(void)

void FUN_1485c9dc2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 local_140;
  longlong *local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong *local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b0;
  undefined4 local_a8;
  uint local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_110 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_110);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_110);
  }
  local_114 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_114);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_114);
  }
  local_98 = local_98 & 0xffffff00;
  uStack_94 = 0x42c80000;
  uStack_90 = 0x44800000;
  uStack_8c = 0x44800000;
  local_88 = 0;
  local_60 = 0;
  local_58 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_54 = 0xffffffff00000080;
  local_4c = 0;
  local_40 = 0;
  local_38 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  FUN_148568536(&local_128);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_128);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_128);
  }
  local_130 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_130);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_130);
  }
  uVar3 = local_130;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_140 = local_128;
  local_138 = local_120;
  if (local_120 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_120 + 1) = (int)local_120[1] + 1;
    UNLOCK();
  }
  local_f8 = local_88;
  local_108 = CONCAT44(uStack_94,local_98);
  uStack_100 = CONCAT44(uStack_8c,uStack_90);
  local_d0 = 0;
  local_c8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_c4 = 0xffffffff00000080;
  local_bc = 0;
  local_b0 = 0;
  local_a8 = 0;
  FUN_140cae46a(&local_f0,&local_80);
  uVar4 = local_110;
  local_148 = uVar3;
  FUN_1485ca0c8(local_110,local_114,&local_108,&local_140);
  *param_3 = uVar4;
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_120 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar2 = (int *)((longlong)local_120 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_120 + 0x10))(local_120);
      }
    }
  }
  local_38 = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(&local_80);
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ca0c8 FUN_1485ca0c8 body=381 status=ok
// SIG undefined FUN_1485ca0c8(void)

longlong FUN_1485ca0c8(longlong param_1,undefined4 param_2,wchar_t *param_3,longlong param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  wchar_t *local_80;
  longlong local_78;
  undefined4 *local_70;
  undefined8 *local_68;
  code *local_60;
  wchar_t **local_58;
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  undefined4 local_44;
  ulonglong local_40;
  
  uVar4 = param_5;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_44 = param_2;
  if (param_1 == 0) {
    local_80 = L"ApplyTexelDensityUVScaling_InvalidInput";
    local_78._0_4_ = 0x27;
    FUN_1446e940c(local_48,&local_80);
    local_80 = L"UGeometryScriptLibrary_MeshUVFunctions";
    local_78 = CONCAT44(local_78._4_4_,0x26);
    FUN_1446e940c(local_4c,&local_80);
    FUN_140208bae(&local_80,local_4c,local_48,L"ApplyTexelDensityUVScaling: TargetMesh is Null");
    FUN_143ba90d7(uVar4,2,&local_80);
    if (local_80 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_80 + 0x10))();
    }
  }
  else {
    local_58 = &local_80;
    local_70 = &local_44;
    local_68 = &param_5;
    local_60 = FUN_143be77e0;
    local_88 = 0;
    local_80 = param_3;
    local_78 = param_4;
    FUN_1484b20f8(param_1,&local_60,5,0x10);
  }
  param_3[0x30] = L'\0';
  param_3[0x31] = L'\0';
  if (*(longlong *)(param_3 + 0x2c) != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_3 + 0xc);
  plVar3 = *(longlong **)(param_4 + 8);
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
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ca246 FUN_1485ca246 body=534 status=ok
// SIG undefined FUN_1485ca246(void)

void FUN_1485ca246(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_58 = 100;
  uStack_54 = 2;
  uStack_50 = 0x3f800000;
  uStack_4c = 0x3fc00000;
  local_48 = 0x42340000;
  uStack_40 = 0x3e800000;
  uStack_3c = uStack_3c & 0xffffff00;
  local_38 = CONCAT31(local_38._1_3_,1);
  uStack_34 = 0;
  uStack_30 = CONCAT31(uStack_30._1_3_,1);
  uStack_2c = 0x200;
  local_28 = CONCAT31(local_28._1_3_,1);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = local_58;
  uStack_94 = uStack_54;
  uStack_90 = uStack_50;
  uStack_8c = uStack_4c;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = uStack_40;
  uStack_7c = uStack_3c;
  local_78 = local_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  local_68 = local_28;
  FUN_1485ca45e(local_20,local_24,&local_98,local_60);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ca45e FUN_1485ca45e body=459 status=ok
// SIG undefined FUN_1485ca45e(void)

longlong FUN_1485ca45e(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  code *local_80;
  undefined8 **local_78;
  char local_69;
  undefined8 local_68;
  wchar_t *local_60;
  char *local_58;
  code **local_50;
  code *local_48;
  wchar_t **local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = param_4;
  if (param_1 == 0) {
    local_60 = L"AutoGeneratePatchBuilderMeshUVs_InvalidInput";
    local_58._0_4_ = 0x2c;
    FUN_1446e940c(&local_48,&local_60);
    local_60 = L"UGeometryScriptLibrary_MeshUVFunctions";
    local_58 = (char *)CONCAT44(local_58._4_4_,0x26);
    FUN_1446e940c(&local_90,&local_60);
    FUN_140208bae(&local_60,&local_90,&local_48,
                  L"AutoGeneratePatchBuilderMeshUVs: TargetMesh is Null");
    FUN_143ba90d7(param_4,2,&local_60);
  }
  else {
    local_90 = &local_68;
    local_78 = &local_90;
    local_50 = &local_80;
    local_80 = FUN_143be888a;
    local_60 = (wchar_t *)&local_34;
    local_58 = &local_69;
    local_69 = '\0';
    local_40 = &local_60;
    local_48 = FUN_143be6edc;
    local_98 = 0;
    local_88 = param_3;
    local_34 = param_2;
    FUN_1484b20f8(param_1,&local_48,0,0);
    if (local_69 != '\0') goto LAB_1485ca5fe;
    local_60 = L"AutoGeneratePatchBuilderMeshUVs_InvalidUVSet";
    local_58._0_4_ = 0x2c;
    FUN_1446e940c(&local_48,&local_60);
    local_60 = L"UGeometryScriptLibrary_MeshUVFunctions";
    local_58 = (char *)CONCAT44(local_58._4_4_,0x26);
    FUN_1446e940c(&local_90,&local_60);
    FUN_140208bae(&local_60,&local_90,&local_48,
                  L"AutoGeneratePatchBuilderMeshUVs: UVSetIndex does not exist on TargetMesh");
    FUN_143ba90d7(local_68,2,&local_60);
  }
  if (local_60 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_60 + 0x10))();
  }
LAB_1485ca5fe:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ca62a FUN_1485ca62a body=384 status=ok
// SIG undefined FUN_1485ca62a(void)

void FUN_1485ca62a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 2;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485ca7ac(local_20,local_24,local_28,local_30);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ca7ac FUN_1485ca7ac body=465 status=ok
// SIG undefined FUN_1485ca7ac(void)

longlong FUN_1485ca7ac(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 *local_a0;
  undefined4 *local_98;
  code *local_90;
  undefined8 **local_88;
  char local_79;
  undefined8 local_78;
  undefined4 local_6c;
  wchar_t *local_68;
  char *local_60;
  code **local_58;
  code *local_50;
  wchar_t **local_48;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = param_4;
  local_6c = param_3;
  if (param_1 == 0) {
    local_68 = L"AutoGenerateXAtlasMeshUVs_InvalidInput";
    local_60._0_4_ = 0x26;
    FUN_1446e940c(&local_50,&local_68);
    local_68 = L"UGeometryScriptLibrary_MeshUVFunctions";
    local_60 = (char *)CONCAT44(local_60._4_4_,0x26);
    FUN_1446e940c(&local_a0,&local_68);
    FUN_140208bae(&local_68,&local_a0,&local_50,L"AutoGenerateXAtlasMeshUVs: TargetMesh is Null");
    FUN_143ba90d7(param_4,2,&local_68);
  }
  else {
    local_a0 = &local_78;
    local_88 = &local_a0;
    local_98 = &local_6c;
    local_58 = &local_90;
    local_90 = FUN_143be8d02;
    local_68 = (wchar_t *)&local_3c;
    local_60 = &local_79;
    local_79 = '\0';
    local_48 = &local_68;
    local_50 = FUN_143be6edc;
    local_a8 = 0;
    local_3c = param_2;
    FUN_1484b20f8(param_1,&local_50,0,0);
    if (local_79 != '\0') goto LAB_1485ca951;
    local_68 = L"AutoGenerateXAtlasMeshUVs_InvalidUVSet";
    local_60._0_4_ = 0x26;
    FUN_1446e940c(&local_50,&local_68);
    local_68 = L"UGeometryScriptLibrary_MeshUVFunctions";
    local_60 = (char *)CONCAT44(local_60._4_4_,0x26);
    FUN_1446e940c(&local_a0,&local_68);
    FUN_140208bae(&local_68,&local_a0,&local_50,
                  L"AutoGenerateXAtlasMeshUVs: UVSetIndex does not exist on TargetMesh");
    FUN_143ba90d7(local_78,2,&local_68);
  }
  if (local_68 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_68 + 0x10))();
  }
LAB_1485ca951:
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ca984 FUN_1485ca984 body=1093 status=ok
// SIG undefined FUN_1485ca984(void)

void FUN_1485ca984(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_138 [32];
  longlong *local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  int local_84;
  undefined8 local_80;
  longlong local_78 [4];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  local_78[2] = 0;
  local_78[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 2);
  }
  plVar3 = local_78 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_78[0] = 0;
  local_78[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  plVar4 = local_78;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_80 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_84 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_84);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  iVar1 = local_84;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_a8 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_b0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  uVar2 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_100 = &local_c8;
  local_c8 = local_a0;
  uStack_c0 = uStack_98;
  local_b8 = local_90;
  local_e8 = local_50;
  uStack_e4 = uStack_4c;
  uStack_e0 = uStack_48;
  uStack_dc = uStack_44;
  local_d8 = local_40;
  local_108 = iVar1 != 0;
  local_f0 = local_b0;
  local_f8 = local_a8;
  local_110 = local_80;
  local_118 = plVar4;
  FUN_1485cadca(local_38,&local_e8,local_54,plVar3);
  *param_3 = uVar2;
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485cadca FUN_1485cadca body=342 status=ok
// SIG undefined FUN_1485cadca(void)

longlong FUN_1485cadca(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                      undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined4 local_38;
  undefined1 local_31;
  ulonglong local_30;
  
  uVar1 = param_10;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_31 = param_7;
  local_38 = param_3;
  if (param_1 == 0) {
    local_88 = L"ComputeMeshLocalUVParam_InvalidInput";
    local_80._0_4_ = 0x24;
    FUN_1446e940c(local_3c,&local_88);
    local_88 = L"UGeometryScriptLibrary_MeshUVFunctions";
    local_80 = (undefined8 *)CONCAT44(local_80._4_4_,0x26);
    FUN_1446e940c(local_40,&local_88);
    FUN_140208bae(&local_88,local_40,local_3c,L"ComputeMeshLocalUVParam: TargetMesh is Null");
    FUN_143ba90d7(uVar1,2,&local_88);
    if (local_88 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_88 + 0x10))();
    }
  }
  else {
    local_88 = (wchar_t *)&local_38;
    local_80 = &param_10;
    local_70 = &local_31;
    local_68 = param_8;
    local_60 = (undefined1 *)&param_9;
    local_58 = (undefined1 *)&param_6;
    local_48 = param_5;
    local_78 = param_2;
    local_50 = param_4;
    FUN_143bea732(&local_88,*(undefined8 *)(param_1 + 0x98));
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485caf34 FUN_1485caf34 body=807 status=ok
// SIG undefined FUN_1485caf34(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1485caf34(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_70;
  int local_68;
  undefined1 local_62;
  undefined1 local_61;
  longlong local_60 [2];
  undefined4 local_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_60[1] = 0;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60 + 1);
  }
  plVar6 = local_60 + 1;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x38);
  }
  local_60[0] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  plVar4 = local_60;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_61 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_61);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_61);
  }
  puVar7 = &local_61;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar7 = *(undefined1 **)(param_2 + 0x38);
  }
  local_62 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_62);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_62);
  }
  puVar5 = &local_62;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  local_68 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  iVar2 = local_68;
  local_70 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = iVar2 != 0;
  local_80 = local_70;
  local_98 = puVar7;
  local_90 = puVar5;
  uVar3 = FUN_1485cb25c(local_48,local_4c,*plVar6,plVar4);
  *param_3 = uVar3;
  if ((DAT_14c950c29 == '\x01') && (*plVar4 != 0)) {
    FUN_14689c22e();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485cb25c FUN_1485cb25c body=624 status=ok
// SIG undefined FUN_1485cb25c(void)

longlong FUN_1485cb25c(longlong param_1,undefined4 param_2,longlong param_3,longlong *param_4,
                      undefined1 *param_5,undefined1 *param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  wchar_t *local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  longlong *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  code *local_58;
  wchar_t **local_50;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  longlong local_40;
  undefined4 local_38;
  undefined1 local_31;
  ulonglong local_30;
  
  uVar1 = param_8;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_31 = param_7;
  local_40 = param_1;
  local_38 = param_2;
  if (param_1 == 0) {
    local_88 = L"CopyMeshToMeshUVLayer_InvalidInput";
    local_80._0_4_ = 0x22;
    FUN_1446e940c(local_44,&local_88);
    local_88 = L"UGeometryScriptLibrary_MeshUVFunctions";
    local_80 = (undefined8 *)CONCAT44(local_80._4_4_,0x26);
    FUN_1446e940c(local_48,&local_88);
    FUN_140208bae(&local_88,local_48,local_44,L"CopyMeshToMeshUVLayer: CopyFromUVMesh is Null");
    FUN_143ba90d7(uVar1,2,&local_88);
    if (local_88 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_88 + 0x10))();
    }
    param_1 = 0;
  }
  else {
    if (param_3 == 0) {
      local_88 = L"CopyMeshToMeshUVLayer_InvalidInput2";
      local_80._0_4_ = 0x23;
      FUN_1446e940c(local_44,&local_88);
      local_88 = L"UGeometryScriptLibrary_MeshUVFunctions";
      local_80 = (undefined8 *)CONCAT44(local_80._4_4_,0x26);
      FUN_1446e940c(local_48,&local_88);
      pwVar2 = L"CopyMeshToMeshUVLayer: CopyToUVMesh is Null";
    }
    else {
      if (param_1 != param_3) {
        *param_5 = 0;
        *param_6 = 0;
        local_88 = (wchar_t *)&local_38;
        local_50 = &local_88;
        local_80 = &param_8;
        local_78 = param_6;
        local_70 = &local_40;
        local_68 = &local_31;
        local_60 = param_5;
        local_58 = FUN_143bea1fc;
        local_98 = 0;
        FUN_1484b20f8(param_3,&local_58,0,0);
        *param_4 = param_3;
        param_1 = local_40;
        goto LAB_1485cb3c5;
      }
      local_88 = L"CopyMeshToMeshUVLayer_SameMeshes";
      local_80._0_4_ = 0x20;
      FUN_1446e940c(local_44,&local_88);
      local_88 = L"UGeometryScriptLibrary_MeshUVFunctions";
      local_80 = (undefined8 *)CONCAT44(local_80._4_4_,0x26);
      FUN_1446e940c(local_48,&local_88);
      pwVar2 = 
      L"CopyMeshToMeshUVLayer: CopyFromUVMesh and CopyToMesh are the same mesh, this is not supported"
      ;
    }
    FUN_140208bae(&local_88,local_48,local_44,pwVar2);
    FUN_143ba90d7(uVar1,2,&local_88);
    if (local_88 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_88 + 0x10))();
    }
  }
LAB_1485cb3c5:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485cb4da FUN_1485cb4da body=718 status=ok
// SIG undefined FUN_1485cb4da(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1485cb4da(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined1 local_5a;
  undefined1 local_59;
  longlong local_58 [2];
  undefined4 local_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_58[1] = 0;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 1);
  }
  plVar5 = local_58 + 1;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_58[0] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar3 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_59 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_59);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_59);
  }
  puVar4 = &local_59;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  local_5a = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5a);
  }
  puVar6 = &local_5a;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  uVar2 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_68;
  local_88 = puVar4;
  local_80 = puVar6;
  FUN_1485cb7aa(local_40,local_44,*plVar5,plVar3);
  *param_3 = uVar2;
  if ((DAT_14c950c29 == '\x01') && (*plVar3 != 0)) {
    FUN_14689c22e();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485cb7aa FUN_1485cb7aa body=587 status=ok
// SIG undefined FUN_1485cb7aa(void)

longlong FUN_1485cb7aa(longlong param_1,undefined4 param_2,longlong param_3,longlong *param_4,
                      undefined1 *param_5,undefined1 *param_6,undefined8 param_7)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  undefined1 auStack_2b8 [32];
  undefined1 local_298;
  undefined4 *local_290;
  undefined8 *local_288;
  undefined1 *local_280;
  wchar_t **local_278;
  undefined1 *local_270;
  undefined1 local_268 [4];
  undefined4 local_264;
  wchar_t *local_260;
  undefined4 local_258;
  longlong local_58;
  ulonglong local_40;
  
  uVar1 = param_7;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  local_264 = param_2;
  if (param_1 == 0) {
    local_260 = L"CopyMeshUVLayerToMesh_InvalidInput";
    local_258 = 0x22;
    FUN_1446e940c(&local_290,&local_260);
    local_260 = L"UGeometryScriptLibrary_MeshUVFunctions";
    local_258 = 0x26;
    FUN_1446e940c(local_268,&local_260);
    pwVar2 = L"CopyMeshUVLayerToMesh: CopyFromMesh is Null";
  }
  else if (param_3 == 0) {
    local_260 = L"CopyMeshUVLayerToMesh_InvalidInput2";
    local_258 = 0x23;
    FUN_1446e940c(&local_290,&local_260);
    local_260 = L"UGeometryScriptLibrary_MeshUVFunctions";
    local_258 = 0x26;
    FUN_1446e940c(local_268,&local_260);
    pwVar2 = L"CopyMeshUVLayerToMesh: CopyToUVMesh is Null";
  }
  else {
    if (param_1 != param_3) {
      uVar1 = 0;
      local_298 = 0;
      FUN_1411b354a(&local_260,0,0,0);
      *param_6 = 0;
      *param_5 = 0;
      local_290 = &local_264;
      local_288 = &param_7;
      local_280 = param_6;
      local_270 = param_5;
      local_278 = &local_260;
      FUN_143be9d52(&local_290,*(undefined8 *)(param_1 + 0x98));
      if (0 < *(int *)(local_58 + 0x38)) {
        uVar1 = **(undefined8 **)(local_58 + 0x30);
      }
      FUN_146c39810(uVar1,1);
      FUN_1484b1fb6(param_3,&local_260);
      *param_4 = param_3;
      FUN_141082778(&local_260);
      goto LAB_1485cb91c;
    }
    local_260 = L"CopyMeshToUVMesh_SameMeshes";
    local_258 = 0x1b;
    FUN_1446e940c(&local_290,&local_260);
    local_260 = L"UGeometryScriptLibrary_MeshUVFunctions";
    local_258 = 0x26;
    FUN_1446e940c(local_268,&local_260);
    pwVar2 = 
    L"CopyMeshUVLayerToMesh: CopyFromMesh and CopyToUVMesh are the same mesh, this is not supported"
    ;
  }
  FUN_140208bae(&local_260,local_268,&local_290,pwVar2);
  FUN_143ba90d7(uVar1,2,&local_260);
  if (local_260 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_260 + 0x10))();
  }
LAB_1485cb91c:
  if ((local_40 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485cb9f6 FUN_1485cb9f6 body=384 status=ok
// SIG undefined FUN_1485cb9f6(void)

void FUN_1485cb9f6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485cbb78(local_20,local_24,local_28,local_30);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485cbb78 FUN_1485cbb78 body=376 status=ok
// SIG undefined FUN_1485cbb78(void)

longlong FUN_1485cbb78(longlong param_1,int param_2,int param_3,undefined8 param_4)

{
  wchar_t *pwVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  wchar_t *local_70;
  int *local_68;
  undefined8 *local_60;
  code *local_58;
  wchar_t **local_50;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  int local_40;
  int local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = param_2;
  local_3c = param_3;
  local_38 = param_4;
  if (param_1 == 0) {
    local_70 = L"CopyUVSet_InvalidInput";
    local_68._0_4_ = 0x16;
    FUN_1446e940c(local_44,&local_70);
    local_70 = L"UGeometryScriptLibrary_MeshUVFunctions";
    local_68 = (int *)CONCAT44(local_68._4_4_,0x26);
    FUN_1446e940c(local_48,&local_70);
    pwVar1 = L"CopyUVSet: TargetMesh is Null";
  }
  else {
    if (param_3 != param_2) {
      local_70 = (wchar_t *)&local_40;
      local_50 = &local_70;
      local_68 = &local_3c;
      local_60 = &local_38;
      local_58 = FUN_143be66bc;
      local_78 = 0;
      FUN_1484b20f8(param_1,&local_58,0,0);
      goto LAB_1485cbc84;
    }
    local_70 = L"CopyUVSet_SameSet";
    local_68._0_4_ = 0x11;
    FUN_1446e940c(local_44,&local_70);
    local_70 = L"UGeometryScriptLibrary_MeshUVFunctions";
    local_68 = (int *)CONCAT44(local_68._4_4_,0x26);
    FUN_1446e940c(local_48,&local_70);
    pwVar1 = L"CopyUVSet: From and To UV Sets have the same Index";
  }
  FUN_140208bae(&local_70,local_48,local_44,pwVar1);
  FUN_143ba90d7(param_4,2,&local_70);
  if (local_70 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_70 + 0x10))();
  }
LAB_1485cbc84:
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485cbd04 FUN_1485cbd04 body=727 status=ok
// SIG undefined FUN_1485cbd04(void)

void FUN_1485cbd04(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined8 local_58;
  longlong *plStack_50;
  undefined4 local_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar1 = (undefined8 *)(param_2 + 0x38);
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar6 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_2 + 0x38);
  }
  local_59 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_59);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_59);
  }
  puVar8 = &local_59;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar8 = *(undefined1 **)(param_2 + 0x38);
  }
  local_5a = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5a);
  }
  puVar7 = &local_5a;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar7 = *(undefined1 **)(param_2 + 0x38);
  }
  local_5b = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5b);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5b);
  }
  puVar9 = &local_5b;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar9 = *(undefined1 **)(param_2 + 0x38);
  }
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  uVar5 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_68;
  local_88 = puVar7;
  local_80 = puVar9;
  FUN_1485cbfdc(local_40,local_44,puVar6,puVar8);
  plVar4 = plStack_50;
  *param_3 = uVar5;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485cbfdc FUN_1485cbfdc body=176 status=ok
// SIG undefined FUN_1485cbfdc(void)

longlong FUN_1485cbfdc(longlong param_1,undefined4 param_2,undefined8 *param_3,undefined1 *param_4,
                      undefined1 *param_5,undefined1 *param_6)

{
  undefined8 uVar1;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_3c = param_2;
  FUN_14856deea(param_3,0);
  uVar1 = *param_3;
  *param_5 = 0;
  *param_4 = 0;
  *param_6 = 0;
  if (param_1 != 0) {
    local_70 = &local_3c;
    local_68 = &stack0x00000038;
    local_60 = param_5;
    local_50 = param_6;
    local_58 = uVar1;
    local_48 = param_4;
    FUN_143be99e0(&local_70,*(undefined8 *)(param_1 + 0x98));
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485cc094 FUN_1485cc094 body=567 status=ok
// SIG undefined FUN_1485cc094(void)

void FUN_1485cc094(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_98 [43];
  undefined1 local_6d;
  undefined1 local_6c [12];
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined4 *local_50;
  undefined4 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_5c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  local_60 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_6c);
  }
  puVar3 = local_6c;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  local_6d = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6d);
  }
  lVar1 = local_58;
  puVar2 = &local_6d;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_2c = local_60;
  local_30 = local_5c;
  *puVar2 = 0;
  if (lVar1 != 0) {
    local_50 = &local_2c;
    local_48 = &local_30;
    local_40 = puVar2;
    local_38 = puVar3;
    FUN_143be6bce(&local_50,*(undefined8 *)(lVar1 + 0x98));
  }
  *param_3 = lVar1;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485cc2d2 FUN_1485cc2d2 body=567 status=ok
// SIG undefined FUN_1485cc2d2(void)

void FUN_1485cc2d2(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_98 [39];
  undefined1 local_71;
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined4 *local_50;
  undefined4 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_5c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  local_60 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  puVar3 = local_70;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  local_71 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_71);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_71);
  }
  lVar1 = local_58;
  puVar2 = &local_71;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_2c = local_60;
  local_30 = local_5c;
  *puVar2 = 0;
  if (lVar1 != 0) {
    local_50 = &local_30;
    local_48 = &local_2c;
    local_40 = puVar2;
    local_38 = puVar3;
    FUN_143be6d10(&local_50,*(undefined8 *)(lVar1 + 0x98));
  }
  *param_3 = lVar1;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485cc522 FUN_1485cc522 body=1216 status=ok
// SIG undefined FUN_1485cc522(void)

void FUN_1485cc522(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  int local_e0;
  undefined1 local_da;
  undefined1 local_d9;
  undefined1 local_d8 [40];
  undefined1 local_b0 [48];
  undefined1 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined4 local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_50 = 0;
  local_100 = param_3;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  FUN_148568536(&local_68);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_70 = 0;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  puVar6 = &local_70;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_2 + 0x38);
  }
  local_78 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar10 = &local_78;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar10 = *(undefined8 **)(param_2 + 0x38);
  }
  local_80 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b0);
  }
  puVar11 = local_b0;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar11 = *(undefined1 **)(param_2 + 0x38);
  }
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8);
  }
  puVar9 = local_d8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar9 = *(undefined1 **)(param_2 + 0x38);
  }
  local_d9 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d9);
  }
  puVar7 = &local_d9;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar7 = *(undefined1 **)(param_2 + 0x38);
  }
  local_da = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_da);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_da);
  }
  puVar8 = &local_da;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar8 = *(undefined1 **)(param_2 + 0x38);
  }
  local_e0 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  iVar4 = local_e0;
  local_e8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  uVar5 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_f8 = local_68;
  local_f0 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
  }
  local_110 = iVar4 != 0;
  local_108 = local_e8;
  local_138 = puVar10;
  local_130 = puVar11;
  local_128 = puVar9;
  local_120 = puVar7;
  local_118 = puVar8;
  FUN_1485cc9e4(local_50,local_54,&local_f8,puVar6);
  *local_100 = uVar5;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar3 = (int *)((longlong)local_60 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485cc9e4 FUN_1485cc9e4 body=767 status=ok
// SIG undefined FUN_1485cc9e4(void)

longlong FUN_1485cc9e4(longlong param_1,undefined4 param_2,longlong param_3,undefined8 *param_4,
                      undefined8 *param_5,undefined8 *param_6,double *param_7,undefined1 *param_8,
                      undefined1 *param_9,undefined1 param_10,undefined8 param_11)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 auStack_118 [32];
  wchar_t *local_f8;
  undefined8 *puStack_f0;
  undefined1 *local_e8;
  double dStack_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined8 *local_c8;
  wchar_t **local_c0;
  undefined8 *local_b8;
  float *local_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  wchar_t *local_98;
  double dStack_90;
  double local_88;
  double local_80;
  double dStack_78;
  double local_70;
  undefined4 local_68;
  undefined1 local_61;
  ulonglong local_60;
  
  uVar4 = param_11;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_61 = param_10;
  *param_5 = 0;
  *param_4 = 0;
  *param_8 = 0;
  *param_9 = 0;
  local_68 = param_2;
  if (param_1 == 0) {
    local_f8 = L"GetMeshUVSizeInfo_InvalidInput";
    puStack_f0._0_4_ = 0x1e;
    FUN_1446e940c(&local_98,&local_f8);
    local_f8 = L"UGeometryScriptLibrary_MeshUVFunctions";
    puStack_f0 = (undefined8 *)CONCAT44(puStack_f0._4_4_,0x26);
    FUN_1446e940c(&local_a8,&local_f8);
    FUN_140208bae(&local_f8,&local_a8,&local_98,L"GetMeshUVSizeInfo: TargetMesh is Null");
    FUN_143ba90d7(uVar4,2,&local_f8);
    if (local_f8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_f8 + 0x10))();
    }
  }
  else {
    local_c0 = &local_98;
    local_98 = (wchar_t *)0x7fefffffffffffff;
    dStack_90 = 1.79769313486232e+308;
    local_88 = 1.79769313486232e+308;
    local_80 = -1.79769313486232e+308;
    dStack_78 = -1.79769313486232e+308;
    local_70 = -1.79769313486232e+308;
    local_b0 = &local_a8;
    local_a8 = 3.4028235e+38;
    fStack_a4 = 3.4028235e+38;
    fStack_a0 = -3.4028235e+38;
    fStack_9c = -3.4028235e+38;
    local_f8 = (wchar_t *)&local_68;
    puStack_f0 = &param_11;
    local_e8 = param_8;
    puStack_d8 = param_9;
    puStack_d0 = &local_61;
    local_b8 = param_5;
    dStack_e0 = (double)param_3;
    local_c8 = param_4;
    FUN_143be949c(&local_f8,*(undefined8 *)(param_1 + 0x98));
    puStack_d0 = (undefined1 *)local_70;
    dStack_e0 = local_80;
    puStack_d8 = (undefined1 *)dStack_78;
    local_f8 = local_98;
    puStack_f0 = (undefined8 *)dStack_90;
    local_e8 = (undefined1 *)local_88;
    if ((local_80 < (double)local_98) || (dStack_78 < dStack_90)) {
      bVar5 = false;
    }
    else {
      bVar5 = local_88 <= local_70;
    }
    param_6[4] = dStack_78;
    param_6[5] = local_70;
    param_6[2] = local_88;
    param_6[3] = local_80;
    *param_6 = local_98;
    param_6[1] = dStack_90;
    *(bool *)(param_6 + 6) = bVar5;
    *param_7 = (double)local_a8;
    param_7[1] = (double)fStack_a4;
    param_7[2] = (double)fStack_a0;
    param_7[3] = (double)fStack_9c;
    *(byte *)(param_7 + 4) = -(fStack_a4 <= fStack_9c && local_a8 <= fStack_a0) & 1;
  }
  plVar3 = *(longlong **)(param_3 + 8);
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
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ccce4 FUN_1485ccce4 body=786 status=ok
// SIG undefined FUN_1485ccce4(void)

void FUN_1485ccce4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 local_160;
  longlong *local_158;
  undefined8 local_150;
  undefined8 local_148;
  longlong *local_140;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_130 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_130);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_130);
  }
  local_134 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_134);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_134);
  }
  local_a8 = CONCAT31(local_a8._1_3_,2);
  uStack_a4 = 0x400;
  uStack_a0 = 0x3f800000;
  local_60 = 0;
  local_58 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_54 = 0xffffffff00000080;
  local_4c = 0;
  local_40 = 0;
  local_38 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  FUN_148568536(&local_148);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_148);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_148);
  }
  local_150 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_150);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_150);
  }
  uVar3 = local_150;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_160 = local_148;
  local_158 = local_140;
  if (local_140 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_140 + 1) = (int)local_140[1] + 1;
    UNLOCK();
  }
  local_108 = local_88;
  local_128 = CONCAT44(uStack_a4,local_a8);
  uStack_120 = CONCAT44(uStack_9c,uStack_a0);
  local_118 = (undefined4)local_98;
  uStack_114 = local_98._4_4_;
  uStack_110 = (undefined4)uStack_90;
  uStack_10c = uStack_90._4_4_;
  local_e0 = 0;
  local_d8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_d4 = 0xffffffff00000080;
  local_cc = 0;
  local_c0 = 0;
  local_b8 = 0;
  FUN_140cae46a(&local_100,&local_80);
  uVar4 = local_130;
  local_168 = uVar3;
  FUN_1485ccff8(local_130,local_134,&local_128,&local_160);
  *param_3 = uVar4;
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_140 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar2 = (int *)((longlong)local_140 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_140 + 0x10))(local_140);
      }
    }
  }
  local_38 = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(&local_80);
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ccff8 FUN_1485ccff8 body=381 status=ok
// SIG undefined FUN_1485ccff8(void)

longlong FUN_1485ccff8(longlong param_1,undefined4 param_2,wchar_t *param_3,longlong param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  wchar_t *local_80;
  longlong local_78;
  undefined4 *local_70;
  undefined8 *local_68;
  code *local_60;
  wchar_t **local_58;
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  undefined4 local_44;
  ulonglong local_40;
  
  uVar4 = param_5;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_44 = param_2;
  if (param_1 == 0) {
    local_80 = L"LayoutMeshUVs_InvalidInput";
    local_78._0_4_ = 0x1a;
    FUN_1446e940c(local_48,&local_80);
    local_80 = L"UGeometryScriptLibrary_MeshUVFunctions";
    local_78 = CONCAT44(local_78._4_4_,0x26);
    FUN_1446e940c(local_4c,&local_80);
    FUN_140208bae(&local_80,local_4c,local_48,L"LayoutMeshUVs: TargetMesh is Null");
    FUN_143ba90d7(uVar4,2,&local_80);
    if (local_80 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_80 + 0x10))();
    }
  }
  else {
    local_58 = &local_80;
    local_70 = &local_44;
    local_68 = &param_5;
    local_60 = FUN_143be8400;
    local_88 = 0;
    local_80 = param_3;
    local_78 = param_4;
    FUN_1484b20f8(param_1,&local_60,5,0x10);
  }
  param_3[0x38] = L'\0';
  param_3[0x39] = L'\0';
  if (*(longlong *)(param_3 + 0x34) != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_3 + 0x14);
  plVar3 = *(longlong **)(param_4 + 8);
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
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485cd176 FUN_1485cd176 body=640 status=ok
// SIG undefined FUN_1485cd176(void)

void FUN_1485cd176(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_40 = CONCAT22(local_40._2_2_,0x102);
  uStack_3c = 0x3e80000000000000;
  uStack_34 = CONCAT31(uStack_34._1_3_,1);
  local_30 = CONCAT31(local_30._1_3_,1);
  local_2c = 0;
  local_28 = CONCAT31(local_28._1_3_,1);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  FUN_148568536(&local_50);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  uVar3 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_50;
  local_60 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  uStack_78 = local_30;
  uStack_74 = local_2c;
  uStack_70 = local_28;
  local_88 = local_40;
  uStack_84 = (undefined4)uStack_3c;
  uStack_80 = uStack_3c._4_4_;
  uStack_7c = uStack_34;
  local_98 = local_58;
  FUN_1485cd3f8(local_20,local_24,&local_88,&local_68);
  *param_3 = uVar3;
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
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485cd3f8 FUN_1485cd3f8 body=516 status=ok
// SIG undefined FUN_1485cd3f8(void)

longlong FUN_1485cd3f8(longlong param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_98;
  longlong local_90;
  undefined8 *local_88;
  code *local_80;
  undefined8 *local_78;
  char local_69;
  wchar_t *local_68;
  char *local_60;
  code **local_58;
  code *local_50;
  wchar_t **local_48;
  undefined4 local_3c;
  ulonglong local_38;
  
  uVar4 = param_5;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1 == 0) {
    local_68 = L"RecomputeMeshUVs_InvalidInput";
    local_60._0_4_ = 0x1d;
    FUN_1446e940c(&local_98,&local_68);
    local_68 = L"UGeometryScriptLibrary_MeshUVFunctions";
    local_60 = (char *)CONCAT44(local_60._4_4_,0x26);
    FUN_1446e940c(&local_50,&local_68);
    FUN_140208bae(&local_68,&local_50,&local_98,L"RecomputeMeshUVs: TargetMesh is Null");
    FUN_143ba90d7(uVar4,2,&local_68);
  }
  else {
    local_78 = &local_98;
    local_88 = &param_5;
    local_58 = &local_80;
    local_80 = FUN_143be7c32;
    local_68 = (wchar_t *)&local_3c;
    local_60 = &local_69;
    local_69 = '\0';
    local_48 = &local_68;
    local_50 = FUN_143be6edc;
    local_a8 = 0;
    local_98 = param_3;
    local_90 = param_4;
    local_3c = param_2;
    FUN_1484b20f8(param_1,&local_50,0,0);
    if (local_69 != '\0') goto LAB_1485cd5a9;
    local_68 = L"RecomputeMeshUVs_InvalidUVSet";
    local_60._0_4_ = 0x1d;
    FUN_1446e940c(&local_98,&local_68);
    local_68 = L"UGeometryScriptLibrary_MeshUVFunctions";
    local_60 = (char *)CONCAT44(local_60._4_4_,0x26);
    FUN_1446e940c(&local_50,&local_68);
    FUN_140208bae(&local_68,&local_50,&local_98,
                  L"RecomputeMeshUVs: UVSetIndex does not exist on TargetMesh");
    FUN_143ba90d7(param_5,2,&local_68);
  }
  if (local_68 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_68 + 0x10))();
  }
LAB_1485cd5a9:
  plVar3 = *(longlong **)(param_4 + 8);
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
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485cd5fe FUN_1485cd5fe body=389 status=ok
// SIG undefined FUN_1485cd5fe(void)

void FUN_1485cd5fe(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_30 = 0x200;
  uStack_2c = CONCAT31(uStack_2c._1_3_,1);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485cd784(local_20,local_24,CONCAT44(uStack_2c,local_30),local_38);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485cd784 FUN_1485cd784 body=417 status=ok
// SIG undefined FUN_1485cd784(void)

longlong FUN_1485cd784(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  wchar_t *pwVar1;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 *local_88;
  code *local_80;
  undefined8 **local_78;
  char local_69;
  undefined8 local_68;
  wchar_t *local_60;
  char *local_58;
  code **local_50;
  code *local_48;
  wchar_t **local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = param_3;
  if (param_1 == 0) {
    local_60 = L"RepackMeshUVs_InvalidInput";
    local_58._0_4_ = 0x1a;
    FUN_1446e940c(&local_48,&local_60);
    local_60 = L"UGeometryScriptLibrary_MeshUVFunctions";
    local_58 = (char *)CONCAT44(local_58._4_4_,0x26);
    FUN_1446e940c(&local_88,&local_60);
    pwVar1 = L"RepackMeshUVs: TargetMesh is Null";
  }
  else {
    local_88 = &local_68;
    local_78 = &local_88;
    local_50 = &local_80;
    local_80 = FUN_143be826a;
    local_60 = (wchar_t *)&local_34;
    local_58 = &local_69;
    local_69 = '\0';
    local_40 = &local_60;
    local_48 = FUN_143be6edc;
    local_98 = 0;
    local_34 = param_2;
    FUN_1484b20f8(param_1,&local_48,0,0);
    if (local_69 != '\0') goto LAB_1485cd8fa;
    local_60 = L"RepackMeshUVs_InvalidUVSet";
    local_58._0_4_ = 0x1a;
    FUN_1446e940c(&local_48,&local_60);
    local_60 = L"UGeometryScriptLibrary_MeshUVFunctions";
    local_58 = (char *)CONCAT44(local_58._4_4_,0x26);
    FUN_1446e940c(&local_88,&local_60);
    pwVar1 = L"RepackMeshUVs: UVSetIndex does not exist on TargetMesh";
  }
  FUN_140208bae(&local_60,&local_88,&local_48,pwVar1);
  FUN_143ba90d7(param_4,2,&local_60);
  if (local_60 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_60 + 0x10))();
  }
LAB_1485cd8fa:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485cd926 FUN_1485cd926 body=664 status=ok
// SIG undefined FUN_1485cd926(void)

void FUN_1485cd926(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_148568536(&local_48);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar3 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_48;
  local_58 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  local_78 = local_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  local_80 = local_50;
  local_88 = &local_60;
  FUN_1485cdbc0(local_20,local_24,local_28);
  *param_3 = uVar3;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485cdbc0 FUN_1485cdbc0 body=614 status=ok
// SIG undefined FUN_1485cdbc0(void)

longlong FUN_1485cdbc0(longlong param_1,undefined4 param_2,float param_3,double *param_4,
                      longlong param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  float fVar5;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  longlong local_d8;
  float *local_d0;
  float *local_c8;
  code *local_c0;
  longlong *local_b8;
  char local_a9;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  wchar_t *local_90;
  char *local_88;
  code **local_80;
  code *local_78;
  wchar_t **local_70;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_1 == 0) {
    local_90 = L"RotateMeshUVs_InvalidInput";
    local_88._0_4_ = 0x1a;
    FUN_1446e940c(&local_d8,&local_90);
    local_90 = L"UGeometryScriptLibrary_MeshUVFunctions";
    local_88 = (char *)CONCAT44(local_88._4_4_,0x26);
    FUN_1446e940c(&local_78,&local_90);
    pwVar4 = L"RotateMeshUVs: TargetMesh is Null";
  }
  else {
    fVar5 = cosf(param_3 * 0.017453292);
    local_98 = sinf(param_3 * 0.017453292);
    local_9c = -local_98;
    local_d0 = &local_a0;
    local_a4 = (float)param_4[1];
    local_a8 = (float)*param_4;
    local_c8 = &local_a8;
    local_b8 = &local_d8;
    local_d8 = param_5;
    local_80 = &local_c0;
    local_c0 = FUN_143be732a;
    local_90 = (wchar_t *)&local_64;
    local_88 = &local_a9;
    local_a9 = '\0';
    local_70 = &local_90;
    local_78 = FUN_143be6edc;
    local_e8 = 0;
    local_a0 = fVar5;
    local_94 = fVar5;
    local_64 = param_2;
    FUN_1484b20f8(param_1,&local_78,0,0);
    if (local_a9 != '\0') goto LAB_1485cddc2;
    local_90 = L"RotateMeshUVs_InvalidUVSet";
    local_88._0_4_ = 0x1a;
    FUN_1446e940c(&local_d8,&local_90);
    local_90 = L"UGeometryScriptLibrary_MeshUVFunctions";
    local_88 = (char *)CONCAT44(local_88._4_4_,0x26);
    FUN_1446e940c(&local_78,&local_90);
    pwVar4 = L"RotateMeshUVs: UVSetIndex does not exist on TargetMesh";
  }
  FUN_140208bae(&local_90,&local_78,&local_d8,pwVar4);
  FUN_143ba90d7(param_6,2,&local_90);
  if (local_90 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x10))();
  }
LAB_1485cddc2:
  plVar3 = *(longlong **)(param_5 + 8);
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
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485cde28 FUN_1485cde28 body=670 status=ok
// SIG undefined FUN_1485cde28(void)

void FUN_1485cde28(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  FUN_148568536(&local_58);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  uVar3 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_58;
  local_68 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
  }
  local_88 = local_48;
  uStack_80 = uStack_40;
  local_98 = local_38;
  uStack_94 = uStack_34;
  uStack_90 = uStack_30;
  uStack_8c = uStack_2c;
  local_a0 = local_60;
  local_a8 = &local_70;
  FUN_1485ce0c8(local_20,local_24);
  *param_3 = uVar3;
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
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ce0c8 FUN_1485ce0c8 body=588 status=ok
// SIG undefined FUN_1485ce0c8(void)

longlong FUN_1485ce0c8(longlong param_1,undefined4 param_2,double *param_3,double *param_4,
                      longlong param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  longlong local_a8;
  float *local_a0;
  undefined8 *local_98;
  code *local_90;
  longlong *local_88;
  char local_79;
  float local_78;
  float local_74;
  undefined8 local_70;
  wchar_t *local_68;
  char *local_60;
  code **local_58;
  code *local_50;
  wchar_t **local_48;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_1 == 0) {
    local_68 = L"ScaleMeshUVs_InvalidInput";
    local_60._0_4_ = 0x19;
    FUN_1446e940c(&local_a8,&local_68);
    local_68 = L"UGeometryScriptLibrary_MeshUVFunctions";
    local_60 = (char *)CONCAT44(local_60._4_4_,0x26);
    FUN_1446e940c(&local_50,&local_68);
    pwVar4 = L"ScaleMeshUVs: TargetMesh is Null";
  }
  else {
    fVar5 = (float)param_3[1];
    fVar6 = (float)*param_3;
    local_70 = CONCAT44(fVar5,fVar6);
    if (SQRT(fVar6 * fVar6 + fVar5 * fVar5) < 0.0001) {
      local_70 = DAT_14c8461b4;
    }
    local_74 = (float)param_4[1];
    local_78 = (float)*param_4;
    local_a0 = &local_78;
    local_88 = &local_a8;
    local_a8 = param_5;
    local_98 = &local_70;
    local_58 = &local_90;
    local_90 = FUN_143be7280;
    local_68 = (wchar_t *)&local_3c;
    local_60 = &local_79;
    local_79 = '\0';
    local_48 = &local_68;
    local_50 = FUN_143be6edc;
    local_b8 = 0;
    local_3c = param_2;
    FUN_1484b20f8(param_1,&local_50,0,0);
    if (local_79 != '\0') goto LAB_1485ce2c0;
    local_68 = L"ScaleMeshUVs_InvalidUVSet";
    local_60._0_4_ = 0x19;
    FUN_1446e940c(&local_a8,&local_68);
    local_68 = L"UGeometryScriptLibrary_MeshUVFunctions";
    local_60 = (char *)CONCAT44(local_60._4_4_,0x26);
    FUN_1446e940c(&local_50,&local_68);
    pwVar4 = L"ScaleMeshUVs: UVSetIndex does not exist on TargetMesh";
  }
  FUN_140208bae(&local_68,&local_50,&local_a8,pwVar4);
  FUN_143ba90d7(param_6,2,&local_68);
  if (local_68 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_68 + 0x10))();
  }
LAB_1485ce2c0:
  plVar3 = *(longlong **)(param_5 + 8);
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
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ce322 FUN_1485ce322 body=564 status=ok
// SIG undefined FUN_1485ce322(void)

void FUN_1485ce322(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 local_60;
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  undefined1 local_3d;
  undefined8 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_3d = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3d);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  uVar2 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_34;
  local_50 = local_3c;
  local_60 = local_44 != 0;
  local_68 = &local_3d;
  if (puVar1 != (undefined1 *)0x0) {
    local_68 = puVar1;
  }
  FUN_1485ce558(local_28,local_2c,local_30);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ce558 FUN_1485ce558 body=153 status=ok
// SIG undefined FUN_1485ce558(void)

longlong FUN_1485ce558(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                      undefined1 *param_5,undefined1 param_6)

{
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined4 *local_48;
  undefined4 *local_40;
  undefined8 local_38;
  undefined1 *local_30;
  code *local_28;
  undefined4 **local_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_5 = 0;
  local_18 = param_2;
  local_14 = param_3;
  if (param_1 != 0) {
    local_48 = &local_14;
    local_20 = &local_48;
    local_40 = &local_18;
    local_30 = param_5;
    local_28 = FUN_143be6a52;
    local_58 = param_6;
    local_38 = param_4;
    FUN_1484b20f8(param_1,&local_28,0,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ce5fe FUN_1485ce5fe body=659 status=ok
// SIG undefined FUN_1485ce5fe(void)

void FUN_1485ce5fe(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined1 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int local_70;
  undefined1 local_69;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_68 = (undefined4)DAT_14c8463f0;
  uStack_64 = DAT_14c8463f0._4_4_;
  uStack_60 = (undefined4)DAT_14c8463f8;
  uStack_5c = DAT_14c8463f8._4_4_;
  local_58 = (undefined4)DAT_14c8463f0;
  uStack_54 = DAT_14c8463f0._4_4_;
  uStack_50 = (undefined4)DAT_14c8463f8;
  uStack_4c = DAT_14c8463f8._4_4_;
  local_48 = (undefined4)DAT_14c8463f0;
  uStack_44 = DAT_14c8463f0._4_4_;
  uStack_40 = (undefined4)DAT_14c8463f8;
  uStack_3c = DAT_14c8463f8._4_4_;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_69 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_69);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_69);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_70 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  uVar2 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = local_48;
  uStack_84 = uStack_44;
  uStack_80 = uStack_40;
  uStack_7c = uStack_3c;
  local_98 = local_58;
  uStack_94 = uStack_54;
  uStack_90 = uStack_50;
  uStack_8c = uStack_4c;
  local_a8 = local_68;
  uStack_a4 = uStack_64;
  uStack_a0 = uStack_60;
  uStack_9c = uStack_5c;
  local_b0 = local_70 != 0;
  local_b8 = &local_69;
  if (puVar1 != (undefined1 *)0x0) {
    local_b8 = puVar1;
  }
  FUN_1485ce892(local_28,local_2c,local_30);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ce892 FUN_1485ce892 body=153 status=ok
// SIG undefined FUN_1485ce892(void)

longlong FUN_1485ce892(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                      undefined1 *param_5,undefined1 param_6)

{
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined4 *local_48;
  undefined4 *local_40;
  undefined1 *local_38;
  undefined8 local_30;
  code *local_28;
  undefined4 **local_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_5 = 0;
  local_18 = param_2;
  local_14 = param_3;
  if (param_1 != 0) {
    local_48 = &local_14;
    local_20 = &local_48;
    local_40 = &local_18;
    local_38 = param_5;
    local_28 = FUN_143be6834;
    local_58 = param_6;
    local_30 = param_4;
    FUN_1484b20f8(param_1,&local_28,0,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ce938 FUN_1485ce938 body=557 status=ok
// SIG undefined FUN_1485ce938(void)

void FUN_1485ce938(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int local_48;
  undefined1 local_41;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_41 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_48 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  uVar2 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_40;
  uStack_54 = uStack_3c;
  uStack_50 = uStack_38;
  uStack_4c = uStack_34;
  local_60 = local_48 != 0;
  local_68 = &local_41;
  if (puVar1 != (undefined1 *)0x0) {
    local_68 = puVar1;
  }
  FUN_1485ceb66(local_28,local_2c,local_30);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ceb66 FUN_1485ceb66 body=153 status=ok
// SIG undefined FUN_1485ceb66(void)

longlong FUN_1485ceb66(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                      undefined1 *param_5,undefined1 param_6)

{
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined4 *local_48;
  undefined4 *local_40;
  undefined1 *local_38;
  undefined8 local_30;
  code *local_28;
  undefined4 **local_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_5 = 0;
  local_18 = param_2;
  local_14 = param_3;
  if (param_1 != 0) {
    local_48 = &local_18;
    local_20 = &local_48;
    local_40 = &local_14;
    local_38 = param_5;
    local_28 = FUN_143be6df0;
    local_58 = param_6;
    local_30 = param_4;
    FUN_1484b20f8(param_1,&local_28,0,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485cec00 FUN_1485cec00 body=796 status=ok
// SIG undefined FUN_1485cec00(void)

void FUN_1485cec00(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined8 local_130;
  undefined8 local_128 [12];
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98 [2];
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
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_98[0] = 0;
  local_98[1] = 0;
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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  FUN_148568536(&local_a8);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_ac = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ac);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ac);
  }
  local_b8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  local_138 = local_ac;
  local_130 = local_b8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c8 = local_a8;
  local_c0 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
    UNLOCK();
  }
  puVar5 = local_98;
  puVar6 = local_128;
  for (lVar4 = 0xc; uVar3 = local_28, lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_1485cef1e(local_28,local_2c,local_128,&local_c8);
  *param_3 = uVar3;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)local_a0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a0 + 0x10))(local_a0);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485cef1e FUN_1485cef1e body=481 status=ok
// SIG undefined FUN_1485cef1e(void)

longlong FUN_1485cef1e(longlong param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
                      undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  code *local_88;
  longlong *local_80;
  char local_71;
  wchar_t *local_70;
  char *local_68;
  code **local_60;
  code *local_58;
  wchar_t **local_50;
  undefined4 local_44;
  ulonglong local_40;
  
  uVar4 = param_6;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1 == 0) {
    local_70 = L"SetMeshUVsFromBoxProjection_InvalidInput";
    local_68._0_4_ = 0x28;
    FUN_1446e940c(&local_a0,&local_70);
    local_70 = L"UGeometryScriptLibrary_MeshUVFunctions";
    local_68 = (char *)CONCAT44(local_68._4_4_,0x26);
    FUN_1446e940c(&local_58,&local_70);
    pwVar5 = L"SetMeshUVsFromBoxProjection: TargetMesh is Null";
  }
  else {
    local_80 = &local_a0;
    local_90 = (undefined1 *)&param_5;
    local_60 = &local_88;
    local_88 = FUN_143be7530;
    local_70 = (wchar_t *)&local_44;
    local_68 = &local_71;
    local_71 = '\0';
    local_50 = &local_70;
    local_58 = FUN_143be6edc;
    local_a8 = 0;
    local_a0 = param_4;
    local_98 = param_3;
    local_44 = param_2;
    FUN_1484b20f8(param_1,&local_58,0,0);
    if (local_71 != '\0') goto LAB_1485cf0ab;
    local_70 = L"SetMeshUVsFromBoxProjection_InvalidUVSet";
    local_68._0_4_ = 0x28;
    FUN_1446e940c(&local_a0,&local_70);
    local_70 = L"UGeometryScriptLibrary_MeshUVFunctions";
    local_68 = (char *)CONCAT44(local_68._4_4_,0x26);
    FUN_1446e940c(&local_58,&local_70);
    pwVar5 = L"SetMeshUVsFromBoxProjection: UVSetIndex does not exist on TargetMesh";
  }
  FUN_140208bae(&local_70,&local_58,&local_a0,pwVar5);
  FUN_143ba90d7(uVar4,2,&local_70);
  if (local_70 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_70 + 0x10))();
  }
LAB_1485cf0ab:
  plVar3 = *(longlong **)(param_4 + 8);
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
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485cf100 FUN_1485cf100 body=798 status=ok
// SIG undefined FUN_1485cf100(void)

void FUN_1485cf100(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined8 local_130;
  undefined8 local_128 [12];
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98 [2];
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
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_98[0] = 0;
  local_98[1] = 0;
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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  FUN_148568536(&local_a8);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_ac = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ac);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ac);
  }
  local_b8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  local_138 = local_ac;
  local_130 = local_b8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c8 = local_a8;
  local_c0 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
    UNLOCK();
  }
  puVar5 = local_98;
  puVar6 = local_128;
  for (lVar4 = 0xc; uVar3 = local_28, lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_1485cf420(local_28,local_2c,local_128,&local_c8);
  *param_3 = uVar3;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)local_a0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a0 + 0x10))(local_a0);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485cf420 FUN_1485cf420 body=481 status=ok
// SIG undefined FUN_1485cf420(void)

longlong FUN_1485cf420(longlong param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
                      undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  code *local_88;
  longlong *local_80;
  char local_71;
  wchar_t *local_70;
  char *local_68;
  code **local_60;
  code *local_58;
  wchar_t **local_50;
  undefined4 local_44;
  ulonglong local_40;
  
  uVar4 = param_6;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1 == 0) {
    local_70 = L"SetMeshUVsFromCylinderProjection_InvalidInput";
    local_68._0_4_ = 0x2d;
    FUN_1446e940c(&local_a0,&local_70);
    local_70 = L"UGeometryScriptLibrary_MeshUVFunctions";
    local_68 = (char *)CONCAT44(local_68._4_4_,0x26);
    FUN_1446e940c(&local_58,&local_70);
    pwVar5 = L"SetMeshUVsFromCylinderProjection: TargetMesh is Null";
  }
  else {
    local_80 = &local_a0;
    local_90 = (undefined1 *)&param_5;
    local_60 = &local_88;
    local_88 = FUN_143be7686;
    local_70 = (wchar_t *)&local_44;
    local_68 = &local_71;
    local_71 = '\0';
    local_50 = &local_70;
    local_58 = FUN_143be6edc;
    local_a8 = 0;
    local_a0 = param_4;
    local_98 = param_3;
    local_44 = param_2;
    FUN_1484b20f8(param_1,&local_58,0,0);
    if (local_71 != '\0') goto LAB_1485cf5ad;
    local_70 = L"SetMeshUVsFromCylinderProjection_InvalidUVSet";
    local_68._0_4_ = 0x2d;
    FUN_1446e940c(&local_a0,&local_70);
    local_70 = L"UGeometryScriptLibrary_MeshUVFunctions";
    local_68 = (char *)CONCAT44(local_68._4_4_,0x26);
    FUN_1446e940c(&local_58,&local_70);
    pwVar5 = L"SetMeshUVsFromCylinderProjection: UVSetIndex does not exist on TargetMesh";
  }
  FUN_140208bae(&local_70,&local_58,&local_a0,pwVar5);
  FUN_143ba90d7(uVar4,2,&local_70);
  if (local_70 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_70 + 0x10))();
  }
LAB_1485cf5ad:
  plVar3 = *(longlong **)(param_4 + 8);
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
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485cf602 FUN_1485cf602 body=704 status=ok
// SIG undefined FUN_1485cf602(void)

void FUN_1485cf602(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 local_128 [13];
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98 [2];
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
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_98[0] = 0;
  local_98[1] = 0;
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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  FUN_148568536(&local_a8);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_b0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  local_138 = local_b0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c0 = local_a8;
  local_b8 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
    UNLOCK();
  }
  puVar5 = local_98;
  puVar6 = local_128;
  for (lVar4 = 0xc; uVar3 = local_28, lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_1485cf8c4(local_28,local_2c,local_128,&local_c0);
  *param_3 = uVar3;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)local_a0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a0 + 0x10))(local_a0);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485cf8c4 FUN_1485cf8c4 body=469 status=ok
// SIG undefined FUN_1485cf8c4(void)

longlong FUN_1485cf8c4(longlong param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  longlong local_98;
  undefined8 local_90;
  code *local_88;
  longlong *local_80;
  char local_71;
  wchar_t *local_70;
  char *local_68;
  code **local_60;
  code *local_58;
  wchar_t **local_50;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1 == 0) {
    local_70 = L"SetMeshUVsFromPlanarProjection_InvalidInput";
    local_68._0_4_ = 0x2b;
    FUN_1446e940c(&local_58,&local_70);
    local_70 = L"UGeometryScriptLibrary_MeshUVFunctions";
    local_68 = (char *)CONCAT44(local_68._4_4_,0x26);
    FUN_1446e940c(&local_98,&local_70);
    pwVar4 = L"SetMeshUVsFromPlanarProjection: TargetMesh is Null";
  }
  else {
    local_80 = &local_98;
    local_60 = &local_88;
    local_88 = FUN_143be73ee;
    local_70 = (wchar_t *)&local_44;
    local_68 = &local_71;
    local_71 = '\0';
    local_50 = &local_70;
    local_58 = FUN_143be6edc;
    local_a8 = 0;
    local_98 = param_4;
    local_90 = param_3;
    local_44 = param_2;
    FUN_1484b20f8(param_1,&local_58,0,0);
    if (local_71 != '\0') goto LAB_1485cfa45;
    local_70 = L"SetMeshUVsFromPlanarProjection_InvalidUVSet";
    local_68._0_4_ = 0x2b;
    FUN_1446e940c(&local_58,&local_70);
    local_70 = L"UGeometryScriptLibrary_MeshUVFunctions";
    local_68 = (char *)CONCAT44(local_68._4_4_,0x26);
    FUN_1446e940c(&local_98,&local_70);
    pwVar4 = L"SetMeshUVsFromPlanarProjection: UVSetIndex does not exist on TargetMesh";
  }
  FUN_140208bae(&local_70,&local_98,&local_58,pwVar4);
  FUN_143ba90d7(param_5,2,&local_70);
  if (local_70 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_70 + 0x10))();
  }
LAB_1485cfa45:
  plVar3 = *(longlong **)(param_4 + 8);
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
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485cfa9a FUN_1485cfa9a body=309 status=ok
// SIG undefined FUN_1485cfa9a(void)

void FUN_1485cfa9a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485cfbd0(local_20,local_24,local_30);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485cfbd0 FUN_1485cfbd0 body=348 status=ok
// SIG undefined FUN_1485cfbd0(void)

longlong FUN_1485cfbd0(longlong param_1,int param_2,undefined8 param_3)

{
  wchar_t *pwVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  code *local_60;
  wchar_t **local_58;
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  int local_44;
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_44 = param_2;
  if (param_1 == 0) {
    local_40 = L"SetNumUVSets_InvalidInput";
    local_38 = 0x19;
    FUN_1446e940c(local_48,&local_40);
    local_40 = L"UGeometryScriptLibrary_MeshUVFunctions";
    local_38 = 0x26;
    FUN_1446e940c(local_4c,&local_40);
    pwVar1 = L"SetNumUVSets: TargetMesh is Null";
  }
  else {
    if (param_2 < 9) {
      local_40 = (wchar_t *)&local_44;
      local_58 = &local_40;
      local_60 = FUN_143be6658;
      local_68 = 0;
      FUN_1484b20f8(param_1,&local_60,0,0);
      goto LAB_1485cfcd2;
    }
    local_40 = L"SetNumUVSets_InvalidNumUVSets";
    local_38 = 0x1d;
    FUN_1446e940c(local_48,&local_40);
    local_40 = L"UGeometryScriptLibrary_MeshUVFunctions";
    local_38 = 0x26;
    FUN_1446e940c(local_4c,&local_40);
    pwVar1 = L"SetNumUVSets: Maximum of 8 UV Sets are supported";
  }
  FUN_140208bae(&local_40,local_4c,local_48,pwVar1);
  FUN_143ba90d7(param_3,2,&local_40);
  if (local_40 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_40 + 0x10))();
  }
LAB_1485cfcd2:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485cfd3a FUN_1485cfd3a body=624 status=ok
// SIG undefined FUN_1485cfd3a(void)

void FUN_1485cfd3a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  int local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  FUN_148568536(&local_48);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  iVar4 = local_4c;
  local_50 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  iVar3 = local_50;
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  uVar5 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_48;
  local_60 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  local_78 = iVar3 != 0;
  local_70 = local_58;
  FUN_1485cffac(local_30,local_34,&local_68,iVar4 != 0);
  *param_3 = uVar5;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485cffac FUN_1485cffac body=470 status=ok
// SIG undefined FUN_1485cffac(void)

longlong FUN_1485cffac(longlong param_1,undefined4 param_2,longlong param_3,undefined1 param_4,
                      undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  longlong local_90;
  undefined1 local_88;
  code *local_80;
  longlong *local_78;
  char local_69;
  wchar_t *local_68;
  char *local_60;
  code **local_58;
  code *local_50;
  wchar_t **local_48;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1 == 0) {
    local_68 = L"SetUVSeamsAlongSelectedEdges_InvalidInput";
    local_60._0_4_ = 0x29;
    FUN_1446e940c(&local_50,&local_68);
    local_68 = L"UGeometryScriptLibrary_MeshUVFunctions";
    local_60 = (char *)CONCAT44(local_60._4_4_,0x26);
    FUN_1446e940c(&local_90,&local_68);
    pwVar4 = L"SetUVSeamsAlongSelectedEdges: TargetMesh is Null";
  }
  else {
    local_78 = &local_90;
    local_58 = &local_80;
    local_80 = FUN_143be708e;
    local_68 = (wchar_t *)&local_3c;
    local_60 = &local_69;
    local_69 = '\0';
    local_48 = &local_68;
    local_50 = FUN_143be6edc;
    local_98 = param_5;
    local_90 = param_3;
    local_88 = param_4;
    local_3c = param_2;
    FUN_1484b20f8(param_1,&local_50,0,0);
    if (local_69 != '\0') goto LAB_1485d012f;
    local_68 = L"SetUVSeamsAlongSelectedEdges_InvalidUVSet";
    local_60._0_4_ = 0x29;
    FUN_1446e940c(&local_50,&local_68);
    local_68 = L"UGeometryScriptLibrary_MeshUVFunctions";
    local_60 = (char *)CONCAT44(local_60._4_4_,0x26);
    FUN_1446e940c(&local_90,&local_68);
    pwVar4 = L"SetUVSeamsAlongSelectedEdges: UV Channel does not exist on TargetMesh";
  }
  FUN_140208bae(&local_68,&local_90,&local_50,pwVar4);
  FUN_143ba90d7(param_6,2,&local_68);
  if (local_68 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_68 + 0x10))();
  }
LAB_1485d012f:
  plVar3 = *(longlong **)(param_3 + 8);
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
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d0184 FUN_1485d0184 body=571 status=ok
// SIG undefined FUN_1485d0184(void)

void FUN_1485d0184(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_148568536(&local_48);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar3 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_48;
  local_58 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  local_78 = local_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  local_88 = local_50;
  FUN_1485d03c0(local_20,local_24,&local_78,&local_60);
  *param_3 = uVar3;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d03c0 FUN_1485d03c0 body=469 status=ok
// SIG undefined FUN_1485d03c0(void)

longlong FUN_1485d03c0(longlong param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  longlong local_98;
  undefined8 local_90;
  code *local_88;
  longlong *local_80;
  char local_71;
  wchar_t *local_70;
  char *local_68;
  code **local_60;
  code *local_58;
  wchar_t **local_50;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1 == 0) {
    local_70 = L"TranslateMeshUVs_InvalidInput";
    local_68._0_4_ = 0x1d;
    FUN_1446e940c(&local_58,&local_70);
    local_70 = L"UGeometryScriptLibrary_MeshUVFunctions";
    local_68 = (char *)CONCAT44(local_68._4_4_,0x26);
    FUN_1446e940c(&local_98,&local_70);
    pwVar4 = L"TranslateMeshUVs: TargetMesh is Null";
  }
  else {
    local_80 = &local_98;
    local_60 = &local_88;
    local_88 = FUN_143be71fc;
    local_70 = (wchar_t *)&local_44;
    local_68 = &local_71;
    local_71 = '\0';
    local_50 = &local_70;
    local_58 = FUN_143be6edc;
    local_a8 = 0;
    local_98 = param_4;
    local_90 = param_3;
    local_44 = param_2;
    FUN_1484b20f8(param_1,&local_58,0,0);
    if (local_71 != '\0') goto LAB_1485d0541;
    local_70 = L"TranslateMeshUVs_InvalidUVSet";
    local_68._0_4_ = 0x1d;
    FUN_1446e940c(&local_58,&local_70);
    local_70 = L"UGeometryScriptLibrary_MeshUVFunctions";
    local_68 = (char *)CONCAT44(local_68._4_4_,0x26);
    FUN_1446e940c(&local_98,&local_70);
    pwVar4 = L"TranslateMeshUVs: UVSetIndex does not exist on TargetMesh";
  }
  FUN_140208bae(&local_70,&local_98,&local_58,pwVar4);
  FUN_143ba90d7(param_5,2,&local_70);
  if (local_70 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_70 + 0x10))();
  }
LAB_1485d0541:
  plVar3 = *(longlong **)(param_4 + 8);
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
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d0599 FUN_1485d0599 body=895 status=ok
// SIG undefined FUN_1485d0599(void)

void FUN_1485d0599(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(int *)(*param_3 + 0x10) == *(int *)(*param_3 + 0x3c)) {
    uVar6 = *(int *)(param_2 + 8) * 0x200 + *(int *)(param_2 + 0xc);
    uVar11 = 0;
    if ((uVar6 != 0) &&
       (uVar11 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x10) - 1U))) {
      uVar9 = 1;
      uVar4 = 1;
      if (1 < (int)uVar6) {
        uVar9 = uVar6;
      }
      do {
        uVar11 = uVar9;
        if (uVar9 == uVar4) break;
        uVar5 = uVar4 >> 9;
        uVar7 = uVar4 & 0x1ff;
        uVar11 = uVar4;
        uVar4 = uVar4 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x10))[uVar5] +
                                           (ulonglong)uVar7 * 2) - 1U));
    }
    if (uVar11 != uVar6) {
      do {
        uVar8 = (ulonglong)(uVar11 >> 5 & 0x3fffff8);
        lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x48) + uVar8);
        uVar9 = (uVar11 & 0xff) << 3;
        local_98 = CONCAT44(*(undefined4 *)(lVar1 + (ulonglong)(uVar9 | 4)),
                            *(undefined4 *)(lVar1 + (ulonglong)uVar9));
        (*(code *)*param_4)(&local_f0,param_4[1],&local_98);
        *(undefined4 *)(*(longlong *)(*(longlong *)(param_2 + 0x48) + uVar8) + (ulonglong)uVar9) =
             (undefined4)local_f0;
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_2 + 0x48) + uVar8) + (ulonglong)(uVar9 | 4)) =
             local_f0._4_4_;
        uVar9 = uVar11 + 1;
        if ((int)(uVar11 + 1) < (int)uVar6) {
          uVar9 = uVar6;
        }
        do {
          uVar4 = uVar9;
          if (uVar9 - 1 == uVar11) break;
          uVar11 = uVar11 + 1;
          uVar4 = uVar11;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_2 + 0x10) +
                                               (ulonglong)(uVar11 >> 9) * 8) +
                                             (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
        uVar11 = uVar4;
      } while (uVar11 != uVar6);
    }
  }
  else {
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_c0 = &local_f0;
    local_c8 = FUN_143be6fb0;
    local_f0 = (longlong *)param_2;
    local_e8 = &local_98;
    FUN_143bac7da(param_3,param_1,&local_c8,0);
    local_b8 = 0x100000000;
    local_a8 = 0xffffffff;
    local_a0 = 0;
    iVar10 = 0;
    local_b0 = local_88;
    if (local_70 != 0) {
      FUN_1449c0562(&local_b8);
      iVar10 = local_70;
    }
    local_d8 = local_a8;
    uVar2 = local_d8;
    local_d0 = local_a0;
    local_cc = local_9c;
    local_e8 = (longlong *)local_b8;
    local_e0 = local_b0;
    local_d8._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
    iVar3 = local_d8._4_4_;
    local_f0 = &local_98;
    if ((local_d8._4_4_ != iVar10) || (local_d8 = uVar2, local_b0 != local_88)) {
      do {
        local_d8 = uVar2;
        uVar11 = *(uint *)(*local_f0 + (longlong)iVar3 * 0xc);
        uVar8 = (ulonglong)(uVar11 >> 5 & 0x3fffff8);
        lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x48) + uVar8);
        uVar11 = (uVar11 & 0xff) << 3;
        local_b8 = CONCAT44(*(undefined4 *)(lVar1 + (ulonglong)(uVar11 | 4)),
                            *(undefined4 *)(lVar1 + (ulonglong)uVar11));
        (*(code *)*param_4)(&local_f8,param_4[1],&local_b8);
        *(undefined4 *)(*(longlong *)(*(longlong *)(param_2 + 0x48) + uVar8) + (ulonglong)uVar11) =
             local_f8;
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_2 + 0x48) + uVar8) + (ulonglong)(uVar11 | 4)) = local_f4
        ;
        local_d8 = CONCAT44(local_d8._4_4_,(uint)local_d8 & ~local_e8._4_4_);
        FUN_1449c0562(&local_e8);
        iVar3 = local_d8._4_4_;
        uVar2 = local_d8;
      } while (local_f0 != &local_98 || (local_e0 != local_88 || local_d8._4_4_ != iVar10));
    }
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(&local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1485d0930 FUN_1485d0930 body=703 status=ok
// SIG undefined FUN_1485d0930(void)

void FUN_1485d0930(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_41;
  undefined8 local_40;
  undefined4 local_34;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_148568536(&local_30);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_40 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_41 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  local_48 = 0x1010101;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar3 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_30;
  local_58 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_68 = local_50;
  local_70 = local_48;
  local_78 = local_41;
  FUN_1485d0bf0(local_20,&local_60,local_34,local_40);
  *param_3 = uVar3;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d0bf0 FUN_1485d0bf0 body=575 status=ok
// SIG undefined FUN_1485d0bf0(void)

longlong FUN_1485d0bf0(longlong param_1,longlong param_2,int param_3,double param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  wchar_t *local_90;
  double *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  longlong local_70;
  undefined8 *local_68;
  code *local_60;
  wchar_t **local_58;
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  int local_44;
  double local_40;
  ulonglong local_38;
  
  uVar4 = param_7;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_44 = param_3;
  local_40 = param_4;
  if (param_1 == 0) {
    local_90 = L"BlurMeshVertexColors_InvalidInput";
    local_88._0_4_ = 0x21;
    FUN_1446e940c(local_48,&local_90);
    local_90 = L"UGeometryScriptLibrary_MeshVertexColorFunctions";
    local_88 = (double *)CONCAT44(local_88._4_4_,0x2f);
    FUN_1446e940c(local_4c,&local_90);
    pwVar5 = L"BlurMeshVertexColors: TargetMesh is Null.";
  }
  else if (param_3 < 0) {
    local_90 = L"BlurMeshVertexColors_InvalidIterationNumber";
    local_88._0_4_ = 0x2b;
    FUN_1446e940c(local_48,&local_90);
    local_90 = L"UGeometryScriptLibrary_MeshVertexColorFunctions";
    local_88 = (double *)CONCAT44(local_88._4_4_,0x2f);
    FUN_1446e940c(local_4c,&local_90);
    pwVar5 = L"BlurMeshVertexColors: Number of iterations must be non-negative.";
  }
  else {
    if (0.0 <= param_4) {
      local_90 = (wchar_t *)&local_44;
      local_58 = &local_90;
      local_88 = &local_40;
      local_80 = (undefined1 *)&param_5;
      local_78 = (undefined1 *)&param_6;
      local_68 = &param_7;
      local_60 = FUN_143becca6;
      local_98 = 0;
      local_70 = param_2;
      FUN_1484b20f8(param_1,&local_60,0,0);
      goto LAB_1485d0d1c;
    }
    local_90 = L"BlurMeshVertexColors_InvalidStrength";
    local_88._0_4_ = 0x24;
    FUN_1446e940c(local_48,&local_90);
    local_90 = L"UGeometryScriptLibrary_MeshVertexColorFunctions";
    local_88 = (double *)CONCAT44(local_88._4_4_,0x2f);
    FUN_1446e940c(local_4c,&local_90);
    pwVar5 = L"BlurMeshVertexColors: Blur strength must be non-negative.";
  }
  FUN_140208bae(&local_90,local_4c,local_48,pwVar5);
  FUN_143ba90d7(uVar4,2,&local_90);
  if (local_90 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x10))();
  }
LAB_1485d0d1c:
  plVar3 = *(longlong **)(param_2 + 8);
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
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d0e30 FUN_1485d0e30 body=235 status=ok
// SIG undefined FUN_1485d0e30(void)

void FUN_1485d0e30(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485d0f1c(local_20,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d0f1c FUN_1485d0f1c body=252 status=ok
// SIG undefined FUN_1485d0f1c(void)

longlong FUN_1485d0f1c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68;
  code *local_58;
  wchar_t **local_50;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 == 0) {
    local_40 = L"ConvertMeshVertexColorsLinearToSRGB_InvalidInput";
    local_38 = 0x30;
    FUN_1446e940c(local_44,&local_40);
    local_40 = L"UGeometryScriptLibrary_MeshVertexColorFunctions";
    local_38 = 0x2f;
    FUN_1446e940c(local_48,&local_40);
    FUN_140208bae(&local_40,local_48,local_44,
                  L"ConvertMeshVertexColorsLinearToSRGB: TargetMesh is Null");
    FUN_143ba90d7(param_2,2,&local_40);
    if (local_40 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_40 + 0x10))();
    }
  }
  else {
    local_50 = &local_40;
    local_58 = FUN_143beca60;
    local_68 = 0;
    FUN_1484b20f8(param_1,&local_58,0,0);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d101a FUN_1485d101a body=235 status=ok
// SIG undefined FUN_1485d101a(void)

void FUN_1485d101a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485d1106(local_20,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d1106 FUN_1485d1106 body=252 status=ok
// SIG undefined FUN_1485d1106(void)

longlong FUN_1485d1106(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68;
  code *local_58;
  wchar_t **local_50;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 == 0) {
    local_40 = L"ConvertMeshVertexColorsSRGBToLinear_InvalidInput";
    local_38 = 0x30;
    FUN_1446e940c(local_44,&local_40);
    local_40 = L"UGeometryScriptLibrary_MeshVertexColorFunctions";
    local_38 = 0x2f;
    FUN_1446e940c(local_48,&local_40);
    FUN_140208bae(&local_40,local_48,local_44,
                  L"ConvertMeshVertexColorsSRGBToLinear: TargetMesh is Null");
    FUN_143ba90d7(param_2,2,&local_40);
    if (local_40 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_40 + 0x10))();
    }
  }
  else {
    local_50 = &local_40;
    local_58 = FUN_143bec81a;
    local_68 = 0;
    FUN_1484b20f8(param_1,&local_58,0,0);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d1216 FUN_1485d1216 body=557 status=ok
// SIG undefined FUN_1485d1216(void)

void FUN_1485d1216(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  int local_50;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar5 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  local_49 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  puVar6 = &local_49;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  local_4a = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4a);
  }
  puVar7 = &local_4a;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar7 = *(undefined1 **)(param_2 + 0x38);
  }
  local_50 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar4 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_50 != 0;
  FUN_1485d1444(local_38,puVar5,puVar6,puVar7);
  plVar3 = plStack_40;
  *param_3 = uVar4;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d1444 FUN_1485d1444 body=147 status=ok
// SIG undefined FUN_1485d1444(void)

longlong FUN_1485d1444(longlong param_1,undefined8 *param_2,undefined1 *param_3,undefined1 *param_4,
                      undefined1 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_31 = param_5;
  FUN_14856e04a(param_2,0);
  uVar1 = *param_2;
  *param_4 = 0;
  *param_3 = 0;
  if (param_1 != 0) {
    local_48 = &local_31;
    local_58 = uVar1;
    local_50 = param_4;
    local_40 = param_3;
    FUN_143bec278(&local_58,*(undefined8 *)(param_1 + 0x98));
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d14de FUN_1485d14de body=472 status=ok
// SIG undefined FUN_1485d14de(void)

void FUN_1485d14de(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0x1010101;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  iVar1 = local_40;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  uVar2 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  uStack_54 = uStack_34;
  uStack_50 = uStack_30;
  uStack_4c = uStack_2c;
  local_68 = local_48;
  FUN_1485d16b8(local_28,&local_58,local_3c,iVar1 != 0);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d16b8 FUN_1485d16b8 body=288 status=ok
// SIG undefined FUN_1485d16b8(void)

longlong FUN_1485d16b8(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                      undefined8 param_5)

{
  undefined1 auStack_98 [32];
  undefined1 local_78;
  wchar_t *local_68;
  undefined8 local_60;
  undefined4 *local_58;
  code *local_50;
  wchar_t **local_48;
  undefined1 local_40 [4];
  undefined1 local_3c [7];
  undefined1 local_35;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_35 = param_4;
  local_34 = param_3;
  if (param_1 == 0) {
    local_68 = L"SetMeshConstantVertexColor_InvalidInput";
    local_60._0_4_ = 0x27;
    FUN_1446e940c(local_3c,&local_68);
    local_68 = L"UGeometryScriptLibrary_MeshVertexColorFunctions";
    local_60 = CONCAT44(local_60._4_4_,0x2f);
    FUN_1446e940c(local_40,&local_68);
    FUN_140208bae(&local_68,local_40,local_3c,L"SetMeshConstantVertexColor: TargetMesh is Null");
    FUN_143ba90d7(param_5,2,&local_68);
    if (local_68 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_68 + 0x10))();
    }
  }
  else {
    local_68 = (wchar_t *)&local_35;
    local_48 = &local_68;
    local_58 = &local_34;
    local_50 = FUN_143beaed2;
    local_78 = 0;
    local_60 = param_2;
    FUN_1484b20f8(param_1,&local_50,0,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d17da FUN_1485d17da body=378 status=ok
// SIG undefined FUN_1485d17da(void)

void FUN_1485d17da(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  uVar4 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  local_48 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  FUN_1485d1956(local_20,&local_50,local_40);
  plVar3 = plStack_30;
  *param_3 = uVar4;
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
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d1956 FUN_1485d1956 body=415 status=ok
// SIG undefined FUN_1485d1956(void)

longlong FUN_1485d1956(longlong param_1,wchar_t *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  code *local_68;
  wchar_t **local_60;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined8 local_50;
  wchar_t *local_48;
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = param_3;
  if (param_1 == 0) {
    local_48 = L"SetMeshPerVertexColors_InvalidMesh";
    local_40._0_4_ = 0x22;
    FUN_1446e940c(local_54,&local_48);
    local_48 = L"UGeometryScriptLibrary_MeshVertexColorFunctions";
    local_40 = (undefined8 *)CONCAT44(local_40._4_4_,0x2f);
    FUN_1446e940c(local_58,&local_48);
    pwVar4 = L"SetMeshPerVertexColors: TargetMesh is Null";
  }
  else {
    if ((*(longlong *)param_2 != 0) && (*(int *)(*(longlong *)param_2 + 8) != 0)) {
      local_60 = &local_48;
      local_40 = &local_50;
      local_68 = FUN_143bebeee;
      local_78 = 0;
      local_48 = param_2;
      FUN_1484b20f8(param_1,&local_68,0,0);
      goto LAB_1485d1aa8;
    }
    local_48 = L"SetMeshPerVertexColors_InvalidList";
    local_40._0_4_ = 0x22;
    FUN_1446e940c(local_54,&local_48);
    local_48 = L"UGeometryScriptLibrary_MeshVertexColorFunctions";
    local_40 = (undefined8 *)CONCAT44(local_40._4_4_,0x2f);
    FUN_1446e940c(local_58,&local_48);
    pwVar4 = L"SetMeshPerVertexColors: List is empty";
  }
  FUN_140208bae(&local_48,local_58,local_54,pwVar4);
  FUN_143ba90d7(param_3,2,&local_48);
  if (local_48 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_48 + 0x10))();
  }
LAB_1485d1aa8:
  plVar3 = *(longlong **)(param_2 + 4);
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
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d1afc FUN_1485d1afc body=644 status=ok
// SIG undefined FUN_1485d1afc(void)

void FUN_1485d1afc(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_148568536(&local_38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0x1010101;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_50 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  iVar3 = local_50;
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  uVar4 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_48;
  uStack_64 = uStack_44;
  uStack_60 = uStack_40;
  uStack_5c = uStack_3c;
  local_78 = local_38;
  local_70 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  local_88 = iVar3 != 0;
  local_80 = local_58;
  FUN_1485d1d82(local_28,&local_78,&local_68,local_4c);
  *param_3 = uVar4;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d1d82 FUN_1485d1d82 body=350 status=ok
// SIG undefined FUN_1485d1d82(void)

longlong FUN_1485d1d82(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                      undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  wchar_t *local_78;
  undefined8 local_70;
  undefined4 *local_68;
  longlong local_60;
  code *local_58;
  wchar_t **local_50;
  undefined1 local_48 [4];
  undefined1 local_44 [7];
  undefined1 local_3d;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_3d = param_5;
  local_3c = param_4;
  if (param_1 == 0) {
    local_78 = L"SetMeshSelectionVertexColor_InvalidInput";
    local_70._0_4_ = 0x28;
    FUN_1446e940c(local_44,&local_78);
    local_78 = L"UGeometryScriptLibrary_MeshVertexColorFunctions";
    local_70 = CONCAT44(local_70._4_4_,0x2f);
    FUN_1446e940c(local_48,&local_78);
    FUN_140208bae(&local_78,local_48,local_44,L"SetMeshSelectionVertexColor: TargetMesh is Null");
    FUN_143ba90d7(param_6,2,&local_78);
    if (local_78 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_78 + 0x10))();
    }
  }
  else {
    local_78 = (wchar_t *)&local_3d;
    local_50 = &local_78;
    local_68 = &local_3c;
    local_58 = FUN_143beb33a;
    local_88 = 0;
    local_70 = param_3;
    local_60 = param_2;
    FUN_1484b20f8(param_1,&local_58,0,0);
  }
  plVar3 = *(longlong **)(param_2 + 8);
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
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d1ef6 FUN_1485d1ef6 body=386 status=ok
// SIG undefined FUN_1485d1ef6(void)

void FUN_1485d1ef6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_44;
  undefined8 uStack_40;
  uint uStack_38;
  undefined4 local_34;
  undefined8 uStack_30;
  uint uStack_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_44 = CONCAT31(local_44._1_3_,1);
  uStack_40 = 0x403f000000;
  uStack_38 = uStack_38 & 0xffffff00;
  local_34 = CONCAT31(local_34._1_3_,1);
  uStack_30 = 0x403f000000;
  uStack_28 = uStack_28 & 0xffffff00;
  local_24 = 0x3f800000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_44;
  uStack_74 = (undefined4)uStack_40;
  uStack_70 = uStack_40._4_4_;
  uStack_6c = uStack_38;
  local_68 = local_34;
  uStack_64 = (undefined4)uStack_30;
  uStack_60 = uStack_30._4_4_;
  uStack_5c = uStack_28;
  local_58 = local_24;
  FUN_1485d207a(local_20,&local_78,local_50);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d207a FUN_1485d207a body=269 status=ok
// SIG undefined FUN_1485d207a(void)

longlong FUN_1485d207a(longlong param_1,wchar_t *param_2,undefined8 param_3)

{
  undefined1 auStack_88 [32];
  undefined1 local_68;
  code *local_60;
  wchar_t **local_58;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined8 local_48;
  wchar_t *local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = param_3;
  if (param_1 == 0) {
    local_40 = L"ApplyMeshMorphology_InvalidInput";
    local_38._0_4_ = 0x20;
    FUN_1446e940c(local_4c,&local_40);
    local_40 = L"UGeometryScriptLibrary_MeshVoxelFunctions";
    local_38 = (undefined8 *)CONCAT44(local_38._4_4_,0x29);
    FUN_1446e940c(local_50,&local_40);
    FUN_140208bae(&local_40,local_50,local_4c,L"ApplyMeshMorphology: TargetMesh is Null");
    FUN_143ba90d7(param_3,2,&local_40);
    if (local_40 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_40 + 0x10))();
    }
  }
  else {
    local_58 = &local_40;
    local_38 = &local_48;
    local_60 = FUN_143bedd38;
    local_68 = 0;
    local_40 = param_2;
    FUN_1484b20f8(param_1,&local_60,0,0);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d2188 FUN_1485d2188 body=408 status=ok
// SIG undefined FUN_1485d2188(void)

void FUN_1485d2188(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 uStack_44;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined8 uStack_34;
  uint uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_48 = CONCAT31(local_48._1_3_,1);
  uStack_44 = 0x403f000000;
  uStack_3c = 0x3f000000;
  local_38 = CONCAT31(local_38._1_3_,1);
  uStack_34 = 0x33f800000;
  uStack_2c = uStack_2c & 0xffffff00;
  local_28 = 0x3ff0000000000000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_48;
  uStack_74 = (undefined4)uStack_44;
  uStack_70 = uStack_44._4_4_;
  uStack_6c = uStack_3c;
  local_68 = local_38;
  uStack_64 = (undefined4)uStack_34;
  uStack_60 = uStack_34._4_4_;
  uStack_5c = uStack_2c;
  local_58 = local_28;
  FUN_1485d2322(local_20,&local_78,local_50);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d2322 FUN_1485d2322 body=269 status=ok
// SIG undefined FUN_1485d2322(void)

longlong FUN_1485d2322(longlong param_1,wchar_t *param_2,undefined8 param_3)

{
  undefined1 auStack_88 [32];
  undefined1 local_68;
  code *local_60;
  wchar_t **local_58;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined8 local_48;
  wchar_t *local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = param_3;
  if (param_1 == 0) {
    local_40 = L"ApplyMeshSolidify_InvalidInput";
    local_38._0_4_ = 0x1e;
    FUN_1446e940c(local_4c,&local_40);
    local_40 = L"UGeometryScriptLibrary_MeshVoxelFunctions";
    local_38 = (undefined8 *)CONCAT44(local_38._4_4_,0x29);
    FUN_1446e940c(local_50,&local_40);
    FUN_140208bae(&local_40,local_50,local_4c,L"ApplyMeshSolidify: TargetMesh is Null");
    FUN_143ba90d7(param_3,2,&local_40);
    if (local_40 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_40 + 0x10))();
    }
  }
  else {
    local_58 = &local_40;
    local_38 = &local_48;
    local_60 = FUN_143becffe;
    local_68 = 0;
    local_40 = param_2;
    FUN_1484b20f8(param_1,&local_60,0,0);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d243a FUN_1485d243a body=595 status=ok
// SIG undefined FUN_1485d243a(void)

void FUN_1485d243a(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined1 local_70 [8];
  undefined8 local_68;
  longlong *plStack_60;
  longlong local_58 [2];
  undefined1 local_48;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar3 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  local_48 = 1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar2 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_70[0] = 0;
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  puVar4 = local_70;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  local_74 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  local_80 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = local_80;
  FUN_1485d268e(plVar3,plVar2,puVar4,local_74);
  plVar3 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_60 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d268e FUN_1485d268e body=953 status=ok
// SIG undefined FUN_1485d268e(void)

void FUN_1485d268e(undefined8 *param_1,undefined8 *param_2,longlong param_3,uint param_4,
                  undefined8 param_5)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  uint local_13c;
  longlong local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  uint local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  longlong *local_e8 [2];
  undefined8 local_d8;
  longlong *local_d0;
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  uint local_90;
  wchar_t *local_88;
  longlong local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar7 = 0;
  FUN_14856da48(param_3,0,0);
  uVar2 = *(uint *)(param_2 + 1);
  uVar3 = *(uint *)(param_1 + 1);
  uVar5 = uVar3;
  if (0 < (int)uVar2 && (int)uVar2 < (int)uVar3) {
    local_138 = (longlong)(int)uVar3;
    local_88 = L"DownsamplePointsMissingWeights";
    local_80._0_4_ = 0x1e;
    local_13c = param_4;
    local_130 = param_2;
    local_128 = param_1;
    FUN_1446e940c(local_ec,&local_88);
    local_88 = L"UGeometryScriptLibrary_PointSetFunctions";
    local_80 = CONCAT44(local_80._4_4_,0x28);
    FUN_1446e940c(local_f0,&local_88);
    FUN_140208bae(local_e8,local_f0,local_ec,
                  L"DownsamplePoints: Found {0} points but only {1} PriorityWeights");
    FUN_14023409e(&local_d8,local_e8,1);
    local_88 = (wchar_t *)((ulonglong)local_88 & 0xffffffff00000000);
    uStack_78 = 0;
    local_70 = 0;
    local_80 = local_138;
    local_68 = 0;
    local_58 = 0;
    local_50 = 0;
    local_a0 = &local_48;
    local_a8 = &local_88;
    local_60 = (ulonglong)uVar2;
    FUN_14010d304(&local_98);
    local_b8 = local_d8;
    local_b0 = local_d0;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    uVar8 = (ulonglong)local_90;
    FUN_14007f2db(local_98,uVar8);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    param_2 = local_130;
    param_4 = local_13c;
    lVar9 = 0x30;
    do {
      if (*(longlong **)((longlong)&local_88 + lVar9) != (longlong *)0x0) {
        (**(code **)(**(longlong **)((longlong)&local_88 + lVar9) + 0x10))();
        *(undefined8 *)((longlong)&local_88 + lVar9) = 0;
        *(undefined4 *)((longlong)&local_80 + lVar9) = 0;
      }
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != -0x10);
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_d0 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar1 = (int *)((longlong)local_d0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_d0 + 0x10))(local_d0);
        }
      }
    }
    uVar7 = CONCAT71((int7)(uVar8 >> 8),2);
    FUN_143ba9449(param_5,uVar7,local_c8);
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
    param_1 = local_128;
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    uVar5 = *(uint *)(param_1 + 1);
  }
  if ((int)uVar5 < (int)param_4) {
    param_4 = uVar5;
  }
  uVar8 = (ulonglong)param_4;
  uVar6 = CONCAT71((int7)((ulonglong)uVar7 >> 8),*(char *)(param_2 + 2)) & 0xffffffff;
  if (((int)uVar2 < (int)uVar3 & ((byte)uVar6 ^ 1)) == 0) {
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,10);
    local_80 = 0;
    uStack_78 = 0;
    uVar7 = *param_2;
    if (*(char *)(param_2 + 2) == '\0') {
      local_118 = *(undefined4 *)(param_2 + 1);
      local_120 = uVar7;
      FUN_146c861d0(&local_88);
    }
    else {
      if ((int)uVar2 < (int)uVar3) {
        uVar7 = 0;
        local_f8 = 0;
      }
      else {
        local_f8 = *(undefined4 *)(param_2 + 1);
      }
      local_110 = *param_1;
      local_148 = 4;
      local_108 = uVar5;
      local_100 = uVar7;
      FUN_146c85058(&local_88,&local_110,&local_100,uVar8);
    }
    FUN_144a1a59e(&local_80,uVar8,1);
    plVar4 = *(longlong **)(param_3 + 8);
    if (plVar4 != &local_80) {
      if (*plVar4 != 0) {
        FUN_1400020a8();
      }
      *plVar4 = local_80;
      local_80 = 0;
      *(undefined4 *)(plVar4 + 1) = (undefined4)uStack_78;
      *(undefined4 *)((longlong)plVar4 + 0xc) = uStack_78._4_4_;
      uStack_78 = 0;
    }
    if (local_80 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_144a127d2(*(undefined8 *)(param_3 + 8),uVar8,CONCAT71((int7)(uVar6 >> 8),1));
    if (0 < (int)param_4) {
      uVar6 = 0;
      do {
        *(int *)(**(longlong **)(param_3 + 8) + uVar6 * 4) = (int)uVar6;
        uVar6 = uVar6 + 1;
      } while (uVar8 != uVar6);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1485d2a48 FUN_1485d2a48 body=423 status=ok
// SIG undefined FUN_1485d2a48(void)

void FUN_1485d2a48(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_f8 [32];
  longlong local_d8 [16];
  undefined1 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8[2] = 0;
  local_d8[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8 + 2);
  }
  plVar4 = local_d8 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_d8[0] = 0;
  local_d8[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8);
  }
  plVar5 = local_d8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  plVar2 = &DAT_14c846480;
  plVar3 = local_d8 + 4;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *plVar3 = *plVar2;
    plVar2 = plVar2 + 1;
    plVar3 = plVar3 + 1;
  }
  local_58 = 2;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8 + 4);
  }
  plVar2 = local_d8 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485d2bf0(plVar4,plVar5,plVar2);
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_d8[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d2bf0 FUN_1485d2bf0 body=727 status=ok
// SIG undefined FUN_1485d2bf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1485d2bf0(longlong *param_1,longlong *param_2,double *param_3)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  char cVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [16];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1482113de(param_2,(int)param_1[1]);
  auVar11 = _DAT_149934d80;
  if (0 < (int)param_1[1]) {
    cVar3 = *(char *)(param_3 + 0xc);
    lVar12 = 0x10;
    lVar13 = 0;
    lVar14 = 0;
    do {
      pdVar1 = (double *)(*param_1 + -0x10 + lVar12);
      dVar6 = *pdVar1 - param_3[4];
      dVar7 = pdVar1[1] - param_3[5];
      dVar4 = *(double *)(*param_1 + lVar12) - param_3[6];
      dVar8 = -*param_3;
      dVar9 = -param_3[1];
      dVar15 = param_3[2] * -1.0;
      dVar16 = param_3[3] * 1.0;
      dVar18 = dVar6 * dVar15 - dVar8 * dVar4;
      dVar17 = dVar7 * dVar8 - dVar6 * dVar9;
      dVar10 = dVar4 * dVar9 - dVar7 * dVar15;
      dVar10 = dVar10 + dVar10;
      dVar18 = dVar18 + dVar18;
      dVar17 = dVar17 + dVar17;
      auVar2 = *(undefined1 (*) [16])(param_3 + 8);
      auVar19 = divpd(auVar11,auVar2);
      dVar5 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar19._8_8_) *
              (*param_3 * dVar17 + dVar15 * dVar10 + dVar16 * dVar18 + dVar7);
      dVar7 = param_3[10];
      local_d8._8_4_ = SUB84(dVar5,0);
      local_d8._0_8_ =
           (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar19._0_8_) *
           ((dVar17 * dVar9 - dVar18 * dVar15) + dVar16 * dVar10 + dVar6);
      local_d8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      *(undefined8 *)(*param_2 + lVar13) =
           *(undefined8 *)(local_d8 + (ulonglong)(cVar3 == '\0') * 8);
      if (cVar3 != '\x02') {
        dVar5 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar7)) & (ulonglong)(1.0 / dVar7))
                * (dVar4 + dVar16 * dVar17 + (dVar18 * dVar8 - dVar10 * dVar9));
      }
      *(double *)(*param_2 + 8 + lVar13) = dVar5;
      lVar14 = lVar14 + 1;
      lVar13 = lVar13 + 0x10;
      lVar12 = lVar12 + 0x18;
    } while (lVar14 < (int)param_1[1]);
  }
  if ((local_c0 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1485d2ec8 FUN_1485d2ec8 body=417 status=ok
// SIG undefined FUN_1485d2ec8(void)

void FUN_1485d2ec8(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  longlong local_68 [3];
  undefined1 local_50 [8];
  undefined8 local_48;
  longlong *plStack_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar3 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_50[0] = 0;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar2 = local_50;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  plVar4 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar4 = local_68;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485d306a(plVar3,puVar2,plVar4);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_40 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d306a FUN_1485d306a body=199 status=ok
// SIG undefined FUN_1485d306a(void)

void FUN_1485d306a(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong lVar10;
  
  if (*(longlong *)(param_2 + 8) == 0) {
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(int *)((longlong)param_3 + 0xc) < 0) {
      FUN_1447a8aa0(param_3,0);
      return;
    }
  }
  else {
    FUN_1417247dc(param_3,*(undefined4 *)(*(longlong *)(param_2 + 8) + 8));
    lVar10 = (longlong)(int)(*(longlong **)(param_2 + 8))[1];
    if (lVar10 != 0) {
      lVar3 = **(longlong **)(param_2 + 8);
      lVar8 = 0;
      do {
        puVar9 = (undefined4 *)((longlong)*(int *)(lVar3 + lVar8) * 0x18 + *param_1);
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_1403e3958(param_3,iVar2);
        }
        lVar4 = *param_3;
        *(undefined8 *)(lVar4 + 0x10 + (longlong)iVar2 * 0x18) = *(undefined8 *)(puVar9 + 4);
        uVar5 = puVar9[1];
        uVar6 = puVar9[2];
        uVar7 = puVar9[3];
        puVar1 = (undefined4 *)(lVar4 + (longlong)iVar2 * 0x18);
        *puVar1 = *puVar9;
        puVar1[1] = uVar5;
        puVar1[2] = uVar6;
        puVar1[3] = uVar7;
        lVar8 = lVar8 + 4;
      } while (lVar10 * 4 != lVar8);
    }
  }
  return;
}



// FUNCTION 1485d3132 FUN_1485d3132 body=428 status=ok
// SIG undefined FUN_1485d3132(void)

void FUN_1485d3132(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  ulonglong uStack_60;
  longlong local_58 [2];
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar2 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  local_48 = 3;
  local_44 = 1;
  local_40 = 0x1f400000000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar1 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_68 = 0;
  uStack_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = &local_68;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485d32e0(plVar2,plVar1,plVar3);
  FUN_1485eaacb(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d32e0 FUN_1485d32e0 body=284 status=ok
// SIG undefined FUN_1485d32e0(void)

void FUN_1485d32e0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  longlong local_48;
  int local_40;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_143bdfee3(local_50,param_1,param_2);
  FUN_1485d40b2(param_3,local_30);
  iVar2 = (int)param_3[1];
  if (0 < iVar2) {
    lVar4 = 0;
    lVar3 = 0;
    do {
      FUN_14856da48(*param_3 + lVar4,0,0);
      iVar2 = *(int *)(local_38 + lVar3 * 4);
      if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar2);
      }
      if (*(int *)(*(longlong *)(*param_3 + 8 + lVar4) + 0xc) < iVar2) {
        FUN_14481578e();
      }
      lVar3 = lVar3 + 1;
      iVar2 = (int)param_3[1];
      lVar4 = lVar4 + 0x18;
    } while (lVar3 < iVar2);
  }
  if ((iVar2 != 0) && (0 < local_40)) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*param_3 + 8 + (longlong)*(int *)(local_48 + lVar3 * 4) * 0x18);
      iVar2 = (int)plVar1[1];
      *(uint *)(plVar1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar1 + 0xc) < iVar2 + 1U) {
        FUN_1446f48e2(plVar1,iVar2);
      }
      *(int *)(*plVar1 + (longlong)iVar2 * 4) = (int)lVar3;
      lVar3 = lVar3 + 1;
    } while (lVar3 < local_40);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d33fe FUN_1485d33fe body=416 status=ok
// SIG undefined FUN_1485d33fe(void)

void FUN_1485d33fe(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [4];
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar2 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_68[2] = 0;
  local_68[3] = 0;
  local_48 = 3;
  local_44 = 1;
  local_40 = 0x1f400000000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 2);
  }
  plVar1 = local_68 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = local_68;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485d35a0(plVar2,plVar1,plVar3);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d35a0 FUN_1485d35a0 body=154 status=ok
// SIG undefined FUN_1485d35a0(void)

void FUN_1485d35a0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_143bdfee3(local_38,param_1,param_2);
  if (&local_30 != param_3) {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_30;
    local_30 = 0;
    *(undefined4 *)(param_3 + 1) = (undefined4)local_28;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_28._4_4_;
    local_28 = 0;
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d363c FUN_1485d363c body=411 status=ok
// SIG undefined FUN_1485d363c(void)

void FUN_1485d363c(undefined8 param_1,longlong param_2,double *param_3)

{
  longlong *plVar1;
  double dVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [40];
  double local_90;
  longlong local_88 [2];
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88[0] = 0;
  local_88[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  plVar3 = plVar1;
  if (plVar1 == (longlong *)0x0) {
    plVar3 = local_88;
  }
  local_90 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  dVar2 = local_90;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar4 = local_88;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  FUN_144b0bd4e(&local_78,*plVar3,(int)plVar4[1]);
  *param_3 = local_78 - dVar2;
  param_3[1] = local_70 - dVar2;
  param_3[2] = local_68 - dVar2;
  param_3[3] = local_60 + dVar2;
  param_3[4] = local_58 + dVar2;
  param_3[5] = local_50 + dVar2;
  *(undefined1 *)(param_3 + 6) = 1;
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d37d8 FUN_1485d37d8 body=411 status=ok
// SIG undefined FUN_1485d37d8(void)

void FUN_1485d37d8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined1 local_49;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28[0] = 0;
  local_28[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar1 = local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_30 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_49 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_48;
  uStack_64 = uStack_44;
  uStack_60 = uStack_40;
  uStack_5c = uStack_3c;
  local_58 = local_38;
  FUN_1485d3974(plVar1,local_30,&local_68,local_49);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d3974 FUN_1485d3974 body=481 status=ok
// SIG undefined FUN_1485d3974(void)

void FUN_1485d3974(longlong *param_1,double param_2,double *param_3,char param_4)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  dVar11 = *param_3;
  dVar14 = param_3[1];
  dVar12 = param_3[2];
  dVar15 = dVar12 * dVar12 + dVar11 * dVar11 + dVar14 * dVar14;
  if (9.99999993922529e-09 < dVar15) {
    dVar15 = 1.0 / SQRT(dVar15);
    *param_3 = dVar11 * dVar15;
    param_3[1] = dVar14 * dVar15;
    param_3[2] = dVar12 * dVar15;
  }
  lVar9 = param_1[1];
  if ((longlong)(int)lVar9 != 0) {
    lVar3 = *param_1;
    lVar10 = 0;
    do {
      dVar12 = param_3[2] * param_2;
      dVar14 = param_3[1] * param_2;
      dVar11 = *param_3 * param_2;
      if (param_4 == '\0') {
        pdVar1 = (double *)(lVar3 + 0x40 + lVar10);
        dVar11 = dVar11 * *pdVar1;
        dVar14 = dVar14 * pdVar1[1];
        dVar12 = dVar12 * *(double *)(lVar3 + 0x50 + lVar10);
        dVar6 = *(double *)(lVar3 + lVar10);
        dVar7 = ((double *)(lVar3 + lVar10))[1];
        dVar8 = *(double *)(lVar3 + 0x10 + lVar10);
        pdVar1 = (double *)(lVar3 + 0x18 + lVar10);
        dVar15 = *pdVar1;
        dVar13 = dVar14 * dVar6 - dVar11 * dVar7;
        dVar4 = dVar12 * dVar7 - dVar14 * dVar8;
        dVar5 = dVar11 * dVar8 - dVar6 * dVar12;
        dVar4 = dVar4 + dVar4;
        dVar5 = dVar5 + dVar5;
        dVar13 = dVar13 + dVar13;
        dVar11 = (dVar13 * dVar7 - dVar5 * dVar8) + dVar15 * dVar4 + dVar11;
        dVar14 = (dVar8 * dVar4 - dVar6 * dVar13) + *pdVar1 * dVar5 + dVar14;
        dVar12 = dVar13 * dVar15 + dVar12 + (dVar5 * dVar6 - dVar4 * dVar7);
      }
      dVar15 = *(double *)(lVar3 + 0x30 + lVar10);
      pdVar1 = (double *)(lVar3 + 0x20 + lVar10);
      dVar13 = pdVar1[1];
      pdVar2 = (double *)(lVar3 + 0x20 + lVar10);
      *pdVar2 = dVar11 + *pdVar1;
      pdVar2[1] = dVar14 + dVar13;
      pdVar1 = (double *)(lVar3 + 0x30 + lVar10);
      *pdVar1 = dVar12 + dVar15;
      pdVar1[1] = 0.0;
      lVar10 = lVar10 + 0x60;
    } while ((longlong)(int)lVar9 * 0x60 != lVar10);
  }
  return;
}



// FUNCTION 1485d3b56 FUN_1485d3b56 body=373 status=ok
// SIG undefined FUN_1485d3b56(void)

void FUN_1485d3b56(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  plVar4 = *(longlong **)(param_2 + 0x38);
  plVar13 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    plVar13 = local_58 + 2;
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar12 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar12 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar11 = local_58 + 2;
  if (plVar4 != (longlong *)0x0) {
    plVar11 = plVar4;
  }
  FUN_14051b394(plVar12,(int)plVar11[1],1);
  if (0 < (int)plVar11[1]) {
    lVar9 = 0;
    lVar10 = 0;
    do {
      puVar2 = (undefined4 *)(*plVar13 + 0x20 + lVar9 * 4);
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      uVar3 = *(undefined8 *)(*plVar13 + 0x30 + lVar9 * 4);
      lVar5 = *plVar12;
      puVar1 = (undefined4 *)(lVar5 + lVar9);
      *puVar1 = *puVar2;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      *(undefined8 *)(lVar5 + 0x10 + lVar9) = uVar3;
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0x18;
    } while (lVar10 < (int)plVar11[1]);
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d3ccc FUN_1485d3ccc body=500 status=ok
// SIG undefined FUN_1485d3ccc(void)

void FUN_1485d3ccc(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  longlong local_d8 [16];
  undefined1 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d8[2] = 0;
  local_d8[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8 + 2);
  }
  plVar4 = local_d8 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_d8[0] = 0;
  local_d8[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8);
  }
  plVar5 = local_d8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  plVar2 = &DAT_14c846480;
  plVar3 = local_d8 + 4;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *plVar3 = *plVar2;
    plVar2 = plVar2 + 1;
    plVar3 = plVar3 + 1;
  }
  local_58 = 2;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8 + 4);
  }
  plVar2 = local_d8 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_e0 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485d3ec2(plVar4,plVar5,plVar2,local_e0);
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_d8[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d3ec2 FUN_1485d3ec2 body=492 status=ok
// SIG undefined FUN_1485d3ec2(void)

void FUN_1485d3ec2(longlong *param_1,longlong *param_2,double *param_3,double param_4)

{
  double dVar1;
  double dVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_a8 [32];
  double local_88 [3];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140b463b8(param_2,(int)param_1[1],1);
  if (0 < (int)param_1[1]) {
    cVar3 = *(char *)(param_3 + 0xc);
    lVar9 = 0x10;
    lVar10 = 8;
    lVar11 = 0;
    do {
      lVar4 = *param_1;
      local_88[cVar3 == '\0'] = *(double *)(lVar4 + -8 + lVar10);
      local_88[(ulonglong)(cVar3 != '\x02') + 1] = *(double *)(lVar4 + lVar10);
      local_88[*(byte *)(param_3 + 0xc)] = param_4;
      dVar14 = local_88[2] * param_3[10];
      dVar12 = local_88[0] * param_3[8];
      dVar13 = local_88[1] * param_3[9];
      dVar6 = *param_3;
      dVar7 = param_3[1];
      dVar8 = param_3[2];
      dVar1 = param_3[3];
      dVar15 = dVar13 * dVar6 - dVar12 * dVar7;
      dVar16 = dVar14 * dVar7 - dVar13 * dVar8;
      dVar17 = dVar12 * dVar8 - dVar6 * dVar14;
      dVar16 = dVar16 + dVar16;
      dVar17 = dVar17 + dVar17;
      dVar15 = dVar15 + dVar15;
      dVar2 = param_3[6];
      dVar13 = (dVar8 * dVar16 - dVar6 * dVar15) + param_3[3] * dVar17 + dVar13 + param_3[5];
      lVar4 = *param_2;
      auVar5._8_4_ = SUB84(dVar13,0);
      auVar5._0_8_ = (dVar15 * dVar7 - dVar17 * dVar8) + dVar1 * dVar16 + dVar12 + param_3[4];
      auVar5._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      *(undefined1 (*) [16])(lVar4 + -0x10 + lVar9) = auVar5;
      *(double *)(lVar4 + lVar9) =
           dVar15 * dVar1 + dVar14 + (dVar17 * dVar6 - dVar16 * dVar7) + dVar2;
      lVar11 = lVar11 + 1;
      lVar9 = lVar9 + 0x18;
      lVar10 = lVar10 + 0x10;
    } while (lVar11 < (int)param_1[1]);
  }
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d40b2 FUN_1485d40b2 body=122 status=ok
// SIG undefined FUN_1485d40b2(void)

void FUN_1485d40b2(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1485eacd2(param_1,iVar1);
    }
    FUN_1485eb83f((longlong)iVar1 * 0x18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1485eb856(param_1,param_2,iVar1 - param_2);
    FUN_1485eb8b8(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1485d4134 FUN_1485d4134 body=283 status=ok
// SIG undefined FUN_1485d4134(void)

void FUN_1485d4134(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar5 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_48;
  uStack_54 = uStack_44;
  uStack_50 = uStack_40;
  uStack_4c = uStack_3c;
  uVar4 = FUN_1485d4250(puVar5);
  plVar3 = plStack_30;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d4250 FUN_1485d4250 body=83 status=ok
// SIG undefined FUN_1485d4250(void)

int FUN_1485d4250(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)*param_1;
  if (plVar4 == (longlong *)0x0) {
    FUN_1485d9e90();
    plVar4 = (longlong *)*param_1;
  }
  iVar2 = (int)plVar4[1];
  *(uint *)(plVar4 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
    FUN_14489624a(plVar4,iVar2);
  }
  uVar3 = param_2[1];
  puVar1 = (undefined8 *)(*plVar4 + (longlong)iVar2 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  return iVar2;
}



// FUNCTION 1485d42a4 FUN_1485d42a4 body=253 status=ok
// SIG undefined FUN_1485d42a4(void)

void FUN_1485d42a4(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar3 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  FUN_1485d9e90(&local_48);
  FUN_144721cf4(local_48,plVar3);
  FUN_1485d43a2(param_3,&local_48);
  plVar3 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d43a2 FUN_1485d43a2 body=96 status=ok
// SIG undefined FUN_1485d43a2(void)

undefined8 * FUN_1485d43a2(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    plVar2 = (longlong *)param_2[1];
    plVar3 = (longlong *)param_1[1];
    if (plVar2 != plVar3) {
      param_2[1] = 0;
      param_1[1] = plVar2;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 1485d4402 FUN_1485d4402 body=234 status=ok
// SIG undefined FUN_1485d4402(void)

void FUN_1485d4402(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  longlong *local_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar2 = local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485d44ee(local_38,plVar2);
  FUN_1485d43a2(param_3,local_38);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d44ee FUN_1485d44ee body=178 status=ok
// SIG undefined FUN_1485d44ee(void)

longlong * FUN_1485d44ee(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1485d9e90();
  iVar6 = *(int *)(param_2 + 1);
  if (-1 < iVar6) {
    plVar4 = (longlong *)*param_1;
    if (*(int *)((longlong)plVar4 + 0xc) < iVar6) {
      FUN_1408652ee(plVar4);
      iVar6 = *(int *)(param_2 + 1);
    }
    if (iVar6 != 0) {
      param_2 = (undefined8 *)*param_2;
      puVar1 = param_2 + (longlong)iVar6 * 3;
      do {
        uVar2 = *param_2;
        uVar3 = param_2[1];
        iVar6 = (int)plVar4[1];
        *(uint *)(plVar4 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)plVar4 + 0xc) < iVar6 + 1U) {
          FUN_14489624a(plVar4,iVar6);
        }
        lVar5 = *plVar4;
        *(undefined8 *)(lVar5 + (longlong)iVar6 * 0x10) = uVar2;
        *(undefined8 *)(lVar5 + 8 + (longlong)iVar6 * 0x10) = uVar3;
        param_2 = param_2 + 3;
      } while (param_2 != puVar1);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar6);
}



// FUNCTION 1485d45a2 FUN_1485d45a2 body=294 status=ok
// SIG undefined FUN_1485d45a2(void)

void FUN_1485d45a2(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_28;
  local_40 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_1485d46ca(&local_38,&local_48);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    local_38 = 0;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d46ca FUN_1485d46ca body=201 status=ok
// SIG undefined FUN_1485d46ca(void)

longlong * FUN_1485d46ca(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (*param_2 != 0) {
    iVar5 = *(int *)(*param_2 + 8);
    if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar5);
    }
    if (iVar5 != 0) {
      FUN_1447a8aa0(param_1);
      lVar13 = (longlong)(int)((longlong *)*param_2)[1];
      if (lVar13 != 0) {
        lVar6 = *(longlong *)*param_2;
        lVar12 = 0;
        do {
          iVar5 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar5 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
            FUN_1403e3958(param_1,iVar5);
          }
          lVar7 = *param_1;
          puVar3 = (undefined4 *)(lVar6 + lVar12);
          uVar9 = puVar3[1];
          uVar10 = puVar3[2];
          uVar11 = puVar3[3];
          puVar4 = (undefined4 *)(lVar7 + (longlong)iVar5 * 0x18);
          *puVar4 = *puVar3;
          puVar4[1] = uVar9;
          puVar4[2] = uVar10;
          puVar4[3] = uVar11;
          *(undefined8 *)(lVar7 + 0x10 + (longlong)iVar5 * 0x18) = 0;
          lVar12 = lVar12 + 0x10;
        } while (lVar13 * 0x10 != lVar12);
      }
    }
  }
  plVar8 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 1485d4794 FUN_1485d4794 body=294 status=ok
// SIG undefined FUN_1485d4794(void)

void FUN_1485d4794(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_28;
  local_40 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_1485d48bc(&local_38,&local_48);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    local_38 = 0;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


