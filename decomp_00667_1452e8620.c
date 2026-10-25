// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1452e8620 FUN_1452e8620 body=630 status=ok
// SIG undefined FUN_1452e8620(void)

void FUN_1452e8620(int *param_1,float *param_2,float *param_3,longlong param_4,int param_5,
                  uint param_6,int param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  longlong lVar7;
  float *pfVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  ulonglong uVar14;
  longlong lVar15;
  float *pfVar16;
  short *psVar17;
  
  iVar10 = *param_1;
  pfVar8 = *(float **)(param_1 + 10);
  if (0 < (int)param_6) {
    uVar14 = (ulonglong)param_6;
    do {
      iVar10 = iVar10 >> 1;
      pfVar8 = pfVar8 + iVar10;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  lVar7 = *(longlong *)(param_1 + (longlong)(int)param_6 * 2 + 2);
  iVar11 = iVar10 >> 2;
  lVar9 = (longlong)iVar11;
  pfVar16 = param_3 + ((longlong)param_5 >> 1);
  pfVar13 = param_2 + ((iVar10 >> 1) + -1) * param_7;
  psVar17 = *(short **)(lVar7 + 0x30);
  if (0 < iVar11) {
    pfVar12 = pfVar8;
    lVar15 = lVar9;
    do {
      fVar1 = *pfVar12;
      fVar2 = *param_2;
      fVar3 = *pfVar13;
      fVar4 = pfVar12[lVar9];
      param_2 = param_2 + param_7 * 2;
      sVar6 = *psVar17;
      pfVar13 = pfVar13 + -(longlong)(param_7 * 2);
      psVar17 = psVar17 + 1;
      pfVar12 = pfVar12 + 1;
      pfVar16[(longlong)(sVar6 * 2) + 1] = fVar2 * fVar4 + fVar1 * fVar3;
      pfVar16[sVar6 * 2] = fVar1 * fVar2 - fVar3 * fVar4;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  FUN_1452f3f50(lVar7,pfVar16);
  lVar7 = (longlong)(iVar10 >> 1);
  lVar15 = (longlong)(iVar11 + 1) >> 1;
  pfVar13 = param_3 + ((longlong)param_5 >> 1) + -2 + lVar7;
  if (0 < lVar15) {
    pfVar12 = pfVar8 + lVar7 + -1;
    do {
      fVar1 = *pfVar8;
      fVar2 = pfVar8[lVar9];
      fVar3 = *pfVar16;
      pfVar8 = pfVar8 + 1;
      fVar4 = pfVar13[1];
      fVar5 = *pfVar13;
      *pfVar16 = fVar2 * *pfVar16 + fVar1 * pfVar16[1];
      pfVar13[1] = fVar2 * pfVar16[1] - fVar1 * fVar3;
      fVar1 = pfVar12[lVar9 - lVar7];
      fVar2 = *pfVar12;
      pfVar12 = pfVar12 + -1;
      *pfVar13 = fVar2 * fVar5 + fVar1 * fVar4;
      pfVar13 = pfVar13 + -2;
      pfVar16[1] = fVar2 * fVar4 - fVar1 * fVar5;
      pfVar16 = pfVar16 + 2;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  pfVar8 = param_3 + (longlong)param_5 + -1;
  if (0 < param_5 / 2) {
    lVar7 = param_4 - (longlong)param_3;
    lVar9 = (longlong)param_5 * 4 - (longlong)pfVar8;
    uVar14 = (ulonglong)(uint)(param_5 / 2);
    do {
      fVar1 = *pfVar8;
      fVar2 = *param_3;
      fVar3 = *(float *)(lVar9 + param_4 + -4 + (longlong)pfVar8);
      fVar4 = *(float *)(lVar7 + (longlong)param_3);
      *param_3 = fVar3 * fVar2 - fVar4 * fVar1;
      param_3 = param_3 + 1;
      *pfVar8 = fVar4 * fVar2 + fVar3 * fVar1;
      pfVar8 = pfVar8 + -1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  return;
}



// FUNCTION 1452e8898 FUN_1452e8898 body=130 status=ok
// SIG undefined FUN_1452e8898(void)

undefined * FUN_1452e8898(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined **ppuVar3;
  int iVar4;
  
  ppuVar3 = &PTR_DAT_149d32080;
  iVar4 = 0;
  do {
    piVar1 = (int *)*ppuVar3;
    iVar2 = 0;
    do {
      if ((param_1 == *piVar1) && (param_2 << ((byte)iVar2 & 0x1f) == piVar1[0xb] * piVar1[0xc])) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = 0;
        }
        return (&PTR_DAT_149d32080)[iVar4];
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    iVar4 = iVar4 + 1;
    ppuVar3 = ppuVar3 + 1;
    if (0x149d32087 < (longlong)ppuVar3) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 0xffffffff;
      }
      return (undefined *)0x0;
    }
  } while( true );
}



// FUNCTION 1452e891c FUN_1452e891c body=61 status=ok
// SIG undefined FUN_1452e891c(void)

int FUN_1452e891c(longlong param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  uVar2 = uVar2 >> ((char)iVar1 - 0xfU & 0x1f);
  uVar3 = (uVar2 >> 0xc) - 8;
  return ((*(int *)(param_1 + 0x18) * 8 -
          (uint)(*(uint *)((longlong)&DAT_149d32088 + (ulonglong)uVar3 * 4) < uVar2)) +
         (iVar1 + 1) * -8) - uVar3;
}



// FUNCTION 1452e895c FUN_1452e895c body=631 status=ok
// SIG undefined FUN_1452e895c(void)

void FUN_1452e895c(longlong *param_1,float *param_2,int param_3,int param_4,undefined4 param_5)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  float *pfVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  uint local_d0;
  undefined4 local_c8;
  float local_b8 [4];
  float local_a8;
  float local_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  fVar9 = 1.0;
  uVar6 = param_3 >> 1;
  lVar7 = (longlong)(int)uVar6;
  if (1 < lVar7) {
    lVar2 = *param_1;
    lVar3 = 1;
    pfVar5 = (float *)(lVar2 + 0xc);
    do {
      pfVar1 = pfVar5 + -2;
      fVar8 = *pfVar5;
      pfVar5 = pfVar5 + 2;
      param_2[lVar3] = ((*pfVar1 + fVar8) * 0.5 + *(float *)(lVar2 + lVar3 * 8)) * 0.5;
      lVar3 = lVar3 + 1;
    } while (lVar3 < lVar7);
  }
  fVar8 = (((float *)*param_1)[1] * 0.5 + *(float *)*param_1) * 0.5;
  *param_2 = fVar8;
  if (param_4 == 2) {
    if (1 < lVar7) {
      lVar2 = param_1[1];
      lVar3 = 1;
      pfVar5 = (float *)(lVar2 + 0xc);
      do {
        pfVar1 = pfVar5 + -2;
        fVar8 = *pfVar5;
        pfVar5 = pfVar5 + 2;
        param_2[lVar3] =
             ((*pfVar1 + fVar8) * 0.5 + *(float *)(lVar2 + lVar3 * 8)) * 0.5 + param_2[lVar3];
        lVar3 = lVar3 + 1;
      } while (lVar3 < lVar7);
      fVar8 = *param_2;
    }
    *param_2 = (((float *)param_1[1])[1] * 0.5 + *(float *)param_1[1]) * 0.5 + fVar8;
  }
  local_c8 = param_5;
  local_d8 = 4;
  local_d0 = uVar6;
  FUN_1452ef348(param_2,&local_a8,0,0);
  local_a8 = local_a8 * 1.0001;
  local_a4 = local_a4 - local_a4 * 0.008 * 0.008;
  fStack_a0 = fStack_a0 - fStack_a0 * 0.016 * 0.016;
  fStack_9c = fStack_9c - fStack_9c * 0.024 * 0.024;
  fStack_98 = fStack_98 - fStack_98 * 0.032 * 0.032;
  FUN_1452eed10(local_b8,&local_a8,4);
  lVar7 = 0;
  do {
    fVar9 = fVar9 * 0.9;
    local_b8[lVar7] = fVar9 * local_b8[lVar7];
    lVar7 = lVar7 + 1;
  } while (lVar7 < 4);
  if (0 < (int)uVar6) {
    uVar4 = (ulonglong)uVar6;
    fVar9 = 0.0;
    fVar8 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    fVar13 = 0.0;
    do {
      fVar12 = fVar11;
      fVar11 = fVar10;
      fVar10 = fVar8;
      fVar8 = fVar9;
      fVar9 = *param_2;
      *param_2 = (local_b8[0] + 0.8) * fVar8 + *param_2 + (local_b8[0] * 0.8 + local_b8[1]) * fVar10
                 + (local_b8[1] * 0.8 + local_b8[2]) * fVar11 +
                 (local_b8[2] * 0.8 + local_b8[3]) * fVar12 + local_b8[3] * 0.8 * fVar13;
      param_2 = param_2 + 1;
      uVar4 = uVar4 - 1;
      fVar13 = fVar12;
    } while (uVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_f8);
}



// FUNCTION 1452e8c0c FUN_1452e8c0c body=704 status=ok
// SIG undefined FUN_1452e8c0c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452e8c0c(longlong param_1,longlong param_2,int param_3,int param_4,int *param_5,
                  undefined4 param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  float *pfVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  undefined8 auStack_a0 [5];
  ulonglong uStack_78;
  undefined4 auStack_70 [2];
  float local_68;
  int iStack_64;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  float *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)&local_68;
  uVar8 = 0;
  _local_68 = 0;
  local_58 = param_2;
  local_50 = param_1;
  if (param_3 < 1) {
    auStack_a0[0] = 0x1452e8c6e;
    FUN_144bca940("assertion failed: len>0","../../../third_party/opus/src/celt/pitch.c",0x12e);
  }
  if (param_4 < 1) {
    auStack_a0[0] = 0x1452e8c8c;
    FUN_144bca940("assertion failed: max_pitch>0","../../../third_party/opus/src/celt/pitch.c",0x12f
                 );
  }
  iVar14 = param_3 >> 2;
  uVar6 = (longlong)iVar14 * 4;
  uVar7 = uVar6 + 0xf;
  if (uVar7 <= uVar6) {
    uVar7 = 0xffffffffffffff0;
  }
  auStack_a0[0] = 0x1452e8cbf;
  lVar1 = -(uVar7 & 0xfffffffffffffff0);
  lVar12 = (longlong)(param_3 + param_4 >> 2);
  uVar7 = lVar12 * 4 + 0xf;
  if (uVar7 <= (ulonglong)(lVar12 * 4)) {
    uVar7 = 0xffffffffffffff0;
  }
  local_48 = (longlong)&local_68 + lVar1;
  *(undefined8 *)((longlong)auStack_a0 + lVar1) = 0x1452e8cf4;
  lVar2 = -(uVar7 & 0xfffffffffffffff0);
  iVar17 = param_4 >> 1;
  local_60 = (longlong)&local_68 + lVar2 + lVar1;
  uVar7 = (longlong)iVar17 * 4 + 0xf;
  if (uVar7 <= (ulonglong)((longlong)iVar17 * 4)) {
    uVar7 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_a0 + lVar2 + lVar1) = 0x1452e8d25;
  lVar4 = local_50;
  lVar3 = -(uVar7 & 0xfffffffffffffff0);
  iVar11 = 1;
  pfVar15 = (float *)((longlong)&local_68 + lVar3 + lVar2 + lVar1);
  uVar7 = uVar8;
  local_40 = pfVar15;
  if (0 < iVar14) {
    do {
      *(undefined4 *)((longlong)&local_68 + lVar1 + uVar7 * 4) = *(undefined4 *)(lVar4 + uVar7 * 8);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)iVar14);
  }
  lVar5 = local_48;
  lVar4 = local_60;
  uVar7 = uVar8;
  if (0 < lVar12) {
    do {
      *(undefined4 *)(local_60 + uVar7 * 4) = *(undefined4 *)(local_58 + uVar7 * 8);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < lVar12);
  }
  *(undefined4 *)((longlong)auStack_70 + lVar3 + lVar2 + lVar1) = param_6;
  *(int *)((longlong)&uStack_78 + lVar3 + lVar2 + lVar1) = param_4 >> 2;
  *(undefined8 *)((longlong)auStack_a0 + lVar3 + lVar2 + lVar1) = 0x1452e8d97;
  FUN_1452e93ac(lVar5,lVar4,pfVar15,iVar14);
  lVar12 = local_60;
  *(float **)((longlong)&uStack_78 + lVar3 + lVar2 + lVar1) = &local_68;
  *(undefined8 *)((longlong)auStack_a0 + lVar3 + lVar2 + lVar1) = 0x1452e8db2;
  FUN_1452e94b4(pfVar15,lVar12,iVar14,param_4 >> 2);
  pfVar16 = pfVar15;
  if (0 < iVar17) {
    local_60 = CONCAT44(local_60._4_4_,(int)local_68 * -2);
    uVar7 = uVar8;
    lVar12 = local_58;
    iVar14 = (int)local_68 * -2;
    do {
      iVar13 = (int)uVar7;
      *pfVar15 = 0.0;
      lVar4 = local_50;
      uVar9 = iVar14 + iVar13 >> 0x1f;
      if (((int)((iVar14 + iVar13 ^ uVar9) - uVar9) < 3) ||
         (uVar9 = iVar13 + iStack_64 * -2, uVar10 = (int)uVar9 >> 0x1f,
         (int)((uVar9 ^ uVar10) - uVar10) < 3)) {
        *(undefined8 *)((longlong)auStack_a0 + lVar3 + lVar2 + lVar1) = 0x1452e8e03;
        fVar18 = (float)FUN_144f37488(lVar4,lVar12,param_3 >> 1);
        fVar19 = -1.0;
        if (-1.0 <= fVar18) {
          fVar19 = fVar18;
        }
        *pfVar15 = fVar19;
      }
      uVar7 = (ulonglong)(iVar13 + 1U);
      lVar12 = lVar12 + 4;
      pfVar15 = pfVar15 + 1;
      pfVar16 = local_40;
      iVar14 = (int)local_60;
    } while ((int)(iVar13 + 1U) < iVar17);
  }
  lVar12 = local_58;
  *(float **)((longlong)&uStack_78 + lVar3 + lVar2 + lVar1) = &local_68;
  *(undefined8 *)((longlong)auStack_a0 + lVar3 + lVar2 + lVar1) = 0x1452e8e49;
  FUN_1452e94b4(pfVar16,lVar12,param_3 >> 1,iVar17);
  if ((0 < (int)local_68) && ((int)local_68 < iVar17 + -1)) {
    iVar14 = (int)local_68 + 1;
    fVar19 = pfVar16[(int)local_68 + -1];
    if ((pfVar16[(int)local_68] - fVar19) * 0.7 < pfVar16[iVar14] - fVar19) goto LAB_1452e8eb1;
    uVar8 = (ulonglong)
            ((fVar19 - pfVar16[iVar14] <= (pfVar16[(int)local_68] - pfVar16[iVar14]) * 0.7) - 1);
  }
  iVar11 = (int)uVar8;
LAB_1452e8eb1:
  *param_5 = (int)local_68 * 2 - iVar11;
  uVar8 = local_38 ^ (ulonglong)&local_68;
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)auStack_a0 + lVar3 + lVar2 + lVar1) = &UNK_1452e8ecc;
  FUN_144d8e3a0(uVar8);
}



// FUNCTION 1452e8eec FUN_1452e8eec body=1121 status=ok
// SIG undefined FUN_1452e8eec(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

void FUN_1452e8eec(longlong param_1,int param_2,uint param_3,int param_4,uint *param_5,int param_6,
                  float param_7)

{
  float *pfVar1;
  longlong lVar2;
  int iVar3;
  float *pfVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 auStack_160 [5];
  ulonglong auStack_138 [2];
  float local_128 [2];
  int local_120;
  uint uStack_11c;
  int local_118;
  int local_114;
  float local_110;
  int local_10c;
  uint local_108;
  float *local_100;
  int *local_f8;
  undefined8 local_f0;
  float local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)local_128;
  local_f0 = param_5;
  local_114 = param_2 / 2;
  lVar15 = (longlong)local_114;
  local_118 = (int)param_3 / 2;
  pfVar1 = (float *)(param_1 + lVar15 * 4);
  uVar6 = (int)*param_5 / 2;
  *param_5 = uVar6;
  local_10c = param_6 / 2;
  if (local_114 <= (int)uVar6) {
    uVar6 = local_114 - 1;
    *param_5 = uVar6;
  }
  uVar9 = lVar15 * 4 + 0x13;
  if (uVar9 <= lVar15 * 4 + 4U) {
    uVar9 = 0xffffffffffffff0;
  }
  auStack_160[0] = 0x1452e8ff4;
  lVar2 = -(uVar9 & 0xfffffffffffffff0);
  local_100 = (float *)((longlong)local_128 + lVar2);
  local_120 = param_4 / 2;
  uStack_11c = uVar6;
  local_108 = param_3;
  *(float **)((longlong)auStack_138 + lVar2 + 8) = local_128;
  *(float **)((longlong)auStack_138 + lVar2) = local_128 + 1;
  *(undefined8 *)((longlong)auStack_160 + lVar2) = 0x1452e902d;
  FUN_144f37528(pfVar1,pfVar1,pfVar1 + -(longlong)(int)uVar6,param_4 / 2);
  pfVar4 = local_100;
  iVar14 = 1;
  *local_100 = local_128[1];
  fVar26 = local_128[0];
  if (0 < lVar15) {
    lVar10 = 1;
    pfVar16 = pfVar1 + (longlong)local_120 + -1;
    fVar23 = local_128[1];
    pfVar12 = pfVar1;
    do {
      pfVar12 = pfVar12 + -1;
      fVar17 = *pfVar16;
      pfVar16 = pfVar16 + -1;
      fVar23 = (*pfVar12 * *pfVar12 + fVar23) - fVar17 * fVar17;
      fVar17 = 0.0;
      if (0.0 <= fVar23) {
        fVar17 = fVar23;
      }
      pfVar4[lVar10] = fVar17;
      lVar10 = lVar10 + 1;
    } while (lVar10 <= lVar15);
  }
  fVar23 = pfVar4[(int)uVar6];
  fVar24 = 1.0;
  fVar17 = fVar23 * local_128[1];
  *(undefined8 *)((longlong)auStack_160 + lVar2) = 0x1452e90c4;
  dVar21 = sqrt((double)(fVar17 + 1.0));
  iVar3 = local_114;
  local_f8 = (int *)&DAT_149d32118;
  iVar13 = 2;
  fVar25 = fVar26 / (float)dVar21;
  fVar17 = fVar25;
  uVar11 = uVar6;
  do {
    iVar8 = local_120;
    uVar7 = (uVar6 * 2 + iVar13) / (uint)(iVar13 * 2);
    if ((int)uVar7 < local_118) break;
    if (iVar13 == 2) {
      uVar11 = uVar6;
      if ((int)(uVar6 + uVar7) <= iVar3) {
        uVar11 = uVar6 + uVar7;
      }
    }
    else {
      uVar11 = (iVar13 + *local_f8 * uVar6 * 2) / (uint)(iVar13 * 2);
    }
    *(float **)((longlong)auStack_138 + lVar2 + 8) = &local_110;
    *(float **)((longlong)auStack_138 + lVar2) = local_128;
    *(undefined8 *)((longlong)auStack_160 + lVar2) = 0x1452e9172;
    FUN_144f37528(pfVar1,pfVar1 + (int)-uVar7,pfVar1 + (int)-uVar11,iVar8);
    fVar27 = (local_110 + local_128[0]) * 0.5;
    fVar28 = (local_100[(int)uVar11] + local_100[(int)uVar7]) * 0.5;
    fVar18 = fVar28 * local_128[1];
    local_128[0] = fVar27;
    *(undefined8 *)((longlong)auStack_160 + lVar2) = 0x1452e91b6;
    dVar21 = sqrt((double)(fVar18 + 1.0));
    uVar11 = (int)(uVar7 - local_10c) >> 0x1f;
    iVar8 = (uVar7 - local_10c ^ uVar11) - uVar11;
    fVar18 = param_7;
    if (1 < iVar8) {
      if ((iVar8 < 3) && (iVar13 * iVar13 * 5 < (int)uVar6)) {
        fVar18 = param_7 * 0.5;
      }
      else {
        fVar18 = 0.0;
      }
    }
    fVar19 = fVar25 * 0.7 - fVar18;
    fVar22 = 0.3;
    if (0.3 <= fVar19) {
      fVar22 = fVar19;
    }
    if ((int)uVar7 < local_118 * 3) {
      fVar22 = 0.4;
      fVar19 = fVar25 * 0.85;
LAB_1452e9253:
      if (fVar22 <= fVar19 - fVar18) {
        fVar22 = fVar19 - fVar18;
      }
    }
    else if ((int)uVar7 < local_118 * 2) {
      fVar22 = 0.5;
      fVar19 = fVar25 * 0.9;
      goto LAB_1452e9253;
    }
    if (fVar22 < fVar27 / (float)dVar21) {
      fVar23 = fVar28;
      fVar17 = fVar27 / (float)dVar21;
      fVar26 = fVar27;
      uStack_11c = uVar7;
    }
    local_f8 = local_f8 + 1;
    iVar13 = iVar13 + 1;
    uVar11 = uStack_11c;
  } while (iVar13 < 0x10);
  puVar5 = local_f0;
  iVar3 = local_120;
  fVar25 = 0.0;
  if (0.0 <= fVar26) {
    fVar25 = fVar26;
  }
  if (fVar25 < fVar23) {
    fVar24 = fVar25 / (fVar23 + 1.0);
  }
  iVar13 = uVar11 - 1;
  lVar15 = 0;
  do {
    *(undefined8 *)((longlong)auStack_160 + lVar2) = 0x1452e92d4;
    uVar20 = FUN_144f37488(pfVar1,pfVar1 + -(longlong)iVar13,iVar3);
    *(undefined4 *)((longlong)&local_f0 + lVar15 * 4) = uVar20;
    iVar13 = iVar13 + 1;
    lVar15 = lVar15 + 1;
  } while (lVar15 < 3);
  if (local_e8 - (float)local_f0 <= (local_f0._4_4_ - (float)local_f0) * 0.7) {
    iVar14 = ((float)local_f0 - local_e8 <= (local_f0._4_4_ - local_e8) * 0.7) - 1;
  }
  if (fVar24 <= fVar17) {
    fVar17 = fVar24;
  }
  uVar6 = iVar14 + uStack_11c * 2;
  if ((int)uVar6 < (int)local_108) {
    uVar6 = local_108;
  }
  *puVar5 = uVar6;
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)auStack_160 + lVar2) = &UNK_1452e934d;
  FUN_144d8e3a0(fVar17);
}



// FUNCTION 1452e93ac FUN_1452e93ac body=247 status=ok
// SIG undefined FUN_1452e93ac(void)

void FUN_1452e93ac(undefined8 param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  int param_5)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = param_4;
  if (param_5 < 1) {
    FUN_144bca940("assertion failed: max_pitch>0","../../../third_party/opus/src/celt/pitch.c",0xfb)
    ;
  }
  uVar6 = local_68;
  iVar4 = 0;
  if (0 < param_5 + -3) {
    uVar1 = (param_5 - 4U >> 2) + 1;
    uVar2 = (ulonglong)uVar1;
    iVar4 = uVar1 * 4;
    puVar3 = (undefined4 *)(param_3 + 8);
    lVar5 = param_2;
    do {
      local_60 = 0;
      uStack_58 = 0;
      FUN_144f37394(param_1,lVar5,&local_60,uVar6);
      lVar5 = lVar5 + 0x10;
      puVar3[-2] = (undefined4)local_60;
      puVar3[-1] = local_60._4_4_;
      *puVar3 = (undefined4)uStack_58;
      puVar3[1] = uStack_58._4_4_;
      uVar2 = uVar2 - 1;
      puVar3 = puVar3 + 4;
      param_4 = local_68;
    } while (uVar2 != 0);
  }
  if (iVar4 < param_5) {
    uVar2 = (ulonglong)(uint)(param_5 - iVar4);
    puVar3 = (undefined4 *)(param_3 + (longlong)iVar4 * 4);
    param_2 = param_2 + (longlong)iVar4 * 4;
    do {
      uVar6 = FUN_144f37488(param_1,param_2,param_4);
      param_2 = param_2 + 4;
      *puVar3 = uVar6;
      puVar3 = puVar3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_88);
}



// FUNCTION 1452e94b4 FUN_1452e94b4 body=289 status=ok
// SIG undefined FUN_1452e94b4(void)

void FUN_1452e94b4(float *param_1,float *param_2,uint param_3,int param_4,int *param_5)

{
  float *pfVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar5 = 0;
  fVar8 = 1.0;
  fVar10 = -1.0;
  fVar11 = 0.0;
  fVar12 = 0.0;
  *param_5 = 0;
  param_5[1] = 1;
  if (0 < (int)param_3) {
    uVar2 = (ulonglong)param_3;
    pfVar1 = param_2;
    do {
      fVar6 = *pfVar1;
      pfVar1 = pfVar1 + 1;
      fVar8 = fVar6 * fVar6 + fVar8;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (0 < param_4) {
    lVar3 = (longlong)(int)param_3 * 4 - (longlong)param_1;
    lVar4 = (longlong)param_2 - (longlong)param_1;
    fVar6 = -1.0;
    do {
      fVar9 = fVar6;
      if ((0.0 < *param_1) &&
         (fVar7 = *param_1 * 1e-12, fVar7 = fVar7 * fVar7, fVar10 * fVar8 < fVar11 * fVar7)) {
        if (fVar12 * fVar7 <= fVar6 * fVar8) {
          param_5[1] = iVar5;
          fVar10 = fVar7;
          fVar11 = fVar8;
        }
        else {
          param_5[1] = *param_5;
          *param_5 = iVar5;
          fVar9 = fVar7;
          fVar10 = fVar6;
          fVar11 = fVar12;
          fVar12 = fVar8;
        }
      }
      fVar6 = *(float *)(lVar3 + (longlong)param_2 + (longlong)param_1);
      iVar5 = iVar5 + 1;
      fVar7 = *(float *)(lVar4 + (longlong)param_1);
      param_1 = param_1 + 1;
      fVar6 = (fVar6 * fVar6 - fVar7 * fVar7) + fVar8;
      fVar8 = 1.0;
      if (1.0 <= fVar6) {
        fVar8 = fVar6;
      }
      fVar6 = fVar9;
    } while (iVar5 < param_4);
  }
  return;
}



// FUNCTION 1452e95d8 FUN_1452e95d8 body=1543 status=ok
// SIG undefined FUN_1452e95d8(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452e95d8(longlong param_1,uint param_2,int param_3,longlong param_4,longlong param_5,
                  int param_6,undefined8 param_7,undefined8 param_8,int param_9,undefined8 param_10,
                  undefined8 param_11,undefined8 param_12,undefined8 param_13,int param_14,
                  int param_15,undefined8 param_16,undefined4 param_17,undefined4 param_18,
                  undefined4 param_19)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  byte bVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  int *piVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined8 auStack_1a0 [5];
  longlong alStack_178 [4];
  uint auStack_158 [2];
  undefined8 uStack_150;
  int aiStack_148 [2];
  undefined8 uStack_140;
  uint local_138 [2];
  undefined8 local_130;
  int local_128 [2];
  undefined8 local_120 [3];
  int local_108 [4];
  undefined8 local_f8;
  undefined4 local_f0 [6];
  uint local_d8 [4];
  int local_c8;
  uint local_c4;
  longlong local_c0;
  int local_b8;
  uint uStack_b4;
  int local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  int local_8c;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)local_d8;
  uVar25 = (ulonglong)(int)*(uint *)(param_1 + 8);
  uVar18 = (ulonglong)(int)param_2;
  local_b8 = param_3;
  local_c4 = param_2;
  iVar19 = 0;
  if (0 < param_9) {
    iVar19 = param_9;
  }
  local_a0 = param_1;
  local_d8[0] = *(uint *)(param_1 + 8);
  uStack_b4 = param_2;
  local_b0 = 0;
  local_8c = 0;
  if (7 < iVar19) {
    local_8c = 8;
  }
  local_d8[2] = 0;
  local_d8[1] = iVar19 - local_8c;
  if (param_14 == 2) {
    bVar13 = (&DAT_149d32170)[(int)(param_3 - param_2)];
    local_d8[2] = (uint)bVar13;
    if (bVar13 == local_d8[1] || (int)(uint)bVar13 < (int)local_d8[1]) {
      iVar19 = local_d8[1] - bVar13;
      local_b0 = 0;
      if (7 < iVar19) {
        local_b0 = 8;
      }
      local_d8[1] = iVar19 - local_b0;
    }
    else {
      local_d8[2] = 0;
    }
  }
  uVar17 = local_d8[1];
  uVar14 = uVar25 * 4;
  uVar11 = uVar14 + 0xf;
  if (uVar11 <= uVar14) {
    uVar11 = 0xffffffffffffff0;
  }
  auStack_1a0[0] = 0x1452e96d0;
  lVar4 = -(uVar11 & 0xfffffffffffffff0);
  local_60 = (longlong)local_d8 + lVar4;
  uVar11 = uVar14 + 0xf;
  if (uVar11 <= uVar14) {
    uVar11 = 0xffffffffffffff0;
  }
  local_a8 = param_4;
  *(undefined8 *)((longlong)auStack_1a0 + lVar4) = 0x1452e96f4;
  lVar5 = -(uVar11 & 0xfffffffffffffff0);
  local_68 = (longlong)local_d8 + lVar5 + lVar4;
  uVar11 = uVar14 + 0xf;
  if (uVar11 <= uVar14) {
    uVar11 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_1a0 + lVar5 + lVar4) = 0x1452e9718;
  lVar6 = -(uVar11 & 0xfffffffffffffff0);
  uVar11 = uVar14 + 0xf;
  lVar2 = (longlong)local_d8 + lVar6 + lVar5 + lVar4;
  local_70 = lVar2;
  if (uVar11 <= uVar14) {
    uVar11 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_1a0 + lVar6 + lVar5 + lVar4) = 0x1452e973c;
  lVar20 = local_a0;
  lVar7 = -(uVar11 & 0xfffffffffffffff0);
  lVar23 = (longlong)local_d8 + lVar7 + lVar6 + lVar5 + lVar4;
  local_78 = lVar23;
  bVar13 = (byte)param_15;
  if ((int)param_2 < param_3) {
    piVar21 = (int *)(lVar23 + uVar18 * 4);
    local_d8[3] = (param_6 - param_15) + -5;
    param_3 = param_3 - param_2;
    lVar24 = (longlong)param_3;
    lVar12 = uVar18 * 2;
    do {
      param_3 = param_3 + -1;
      lVar1 = lVar12 + 2;
      iVar15 = ((((int)*(short *)(*(longlong *)(lVar20 + 0x20) + lVar1) -
                 (int)*(short *)(*(longlong *)(lVar20 + 0x20) + lVar12)) * 3 << (bVar13 & 0x1f)) <<
               3) >> 4;
      iVar19 = param_14 * 8;
      if (param_14 * 8 <= iVar15) {
        iVar19 = iVar15;
      }
      local_c0 = lVar1;
      *(int *)((lVar2 - lVar23) + (longlong)piVar21) = iVar19;
      lVar9 = local_c0;
      iVar19 = (int)((((int)*(short *)(*(longlong *)(lVar20 + 0x20) + lVar1) -
                      (int)*(short *)(*(longlong *)(lVar20 + 0x20) + lVar12)) * local_d8[3] *
                      param_3 << (bVar13 + 3 & 0x1f)) * param_14) >> 6;
      *piVar21 = iVar19;
      if ((int)*(short *)(*(longlong *)(lVar20 + 0x20) + lVar9) -
          (int)*(short *)(*(longlong *)(lVar20 + 0x20) + lVar12) << (bVar13 & 0x1f) == 1) {
        *piVar21 = iVar19 + param_14 * -8;
      }
      piVar21 = piVar21 + 1;
      lVar24 = lVar24 + -1;
      lVar12 = local_c0;
    } while (lVar24 != 0);
    uVar18 = (ulonglong)local_c4;
    uVar25 = (ulonglong)local_d8[0];
    param_3 = local_b8;
    uVar17 = local_d8[1];
  }
  lVar2 = local_a0;
  local_98 = (longlong)param_3;
  local_c8 = 1;
  local_d8[3] = *(int *)(local_a0 + 0x34) + -1;
  do {
    iVar19 = 0;
    local_58 = local_98;
    iVar15 = (int)(local_d8[3] + local_c8) >> 1;
    local_c0 = CONCAT44(local_c0._4_4_,iVar15);
    if ((int)uVar18 < param_3) {
      local_88 = *(longlong *)(local_a0 + 0x20);
      bVar8 = false;
      piVar21 = (int *)(local_a8 + local_98 * 4);
      local_40 = local_78 - local_a8;
      local_50 = local_70 - local_a8;
      local_80 = *(longlong *)(local_a0 + 0x38) + (longlong)(iVar15 * (int)uVar25);
      lVar20 = (longlong)(param_3 - (int)uVar18);
      lVar23 = local_98;
      do {
        lVar12 = lVar23 * 2;
        piVar21 = piVar21 + -1;
        lVar23 = lVar23 + -1;
        iVar16 = (int)(((int)*(short *)(local_88 + lVar12) - (int)*(short *)(local_88 + lVar23 * 2))
                       * (uint)*(byte *)(lVar23 + local_80) * param_14 << (bVar13 & 0x1f)) >> 2;
        if ((0 < iVar16) &&
           (iVar16 = iVar16 + *(int *)((local_78 - local_a8) + (longlong)piVar21), iVar16 < 0)) {
          iVar16 = 0;
        }
        iVar16 = *piVar21 + iVar16;
        if ((*(int *)((local_70 - local_a8) + (longlong)piVar21) <= iVar16) || (bVar8)) {
          bVar8 = true;
          if (*(int *)((longlong)piVar21 + (param_5 - local_a8)) <= iVar16) {
            iVar16 = *(int *)((longlong)piVar21 + (param_5 - local_a8));
          }
          iVar19 = iVar19 + iVar16;
        }
        else if (param_14 << 3 <= iVar16) {
          iVar19 = iVar19 + param_14 * 8;
        }
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      uVar18 = (ulonglong)local_c4;
      param_3 = local_b8;
      uVar17 = local_d8[1];
    }
    uVar25 = (ulonglong)local_d8[0];
    iVar16 = iVar15 + -1;
    if (iVar19 <= (int)uVar17) {
      iVar16 = local_d8[3];
    }
    local_d8[3] = iVar16;
    iVar16 = local_c8;
    if (iVar19 <= (int)uVar17) {
      iVar16 = iVar15 + 1;
    }
    local_c8 = iVar16;
  } while (iVar16 <= (int)local_d8[3]);
  iVar19 = (int)uVar18;
  uVar25 = uVar18 & 0xffffffff;
  if (iVar19 < param_3) {
    local_a8 = local_a8 - local_78;
    iVar15 = (iVar16 + -1) * local_d8[0];
    piVar21 = (int *)(local_78 + (longlong)iVar19 * 4);
    lVar20 = param_5 - local_78;
    lVar12 = local_60 - local_78;
    local_80 = lVar12;
    local_88 = local_68 - local_78;
    local_c0 = CONCAT44(local_c0._4_4_,iVar15);
    lVar23 = (longlong)iVar19 * 2;
    do {
      local_98 = lVar23 + 2;
      iVar22 = (int)*(short *)(*(longlong *)(lVar2 + 0x20) + lVar23 + 2) -
               (int)*(short *)(*(longlong *)(lVar2 + 0x20) + lVar23);
      uVar17 = (uint)uVar25;
      iVar19 = (int)((uint)*(byte *)((longlong)(int)(iVar15 + uVar17) + *(longlong *)(lVar2 + 0x38))
                     * iVar22 * param_14 << (bVar13 & 0x1f)) >> 2;
      if (iVar16 < *(int *)(lVar2 + 0x34)) {
        iVar15 = (int)((uint)*(byte *)((longlong)(int)(iVar16 * local_d8[0] + uVar17) +
                                      *(longlong *)(lVar2 + 0x38)) * iVar22 * param_14 <<
                      (bVar13 & 0x1f)) >> 2;
      }
      else {
        iVar15 = *(int *)((longlong)piVar21 + lVar20);
      }
      iVar22 = iVar19;
      if ((0 < iVar19) && (iVar22 = iVar19 + *piVar21, iVar19 + *piVar21 < 0)) {
        iVar22 = 0;
      }
      iVar19 = iVar15;
      if ((0 < iVar15) && (iVar19 = iVar15 + *piVar21, iVar15 + *piVar21 < 0)) {
        iVar19 = 0;
      }
      if (0 < iVar16 + -1) {
        iVar22 = iVar22 + *(int *)(local_a8 + (longlong)piVar21);
      }
      iVar3 = *(int *)(local_a8 + (longlong)piVar21);
      *(int *)(lVar12 + (longlong)piVar21) = iVar22;
      uVar10 = uVar17;
      if (iVar3 < 1) {
        uVar10 = uStack_b4;
      }
      iVar15 = (int)local_c0;
      uVar11 = (ulonglong)uVar10;
      uStack_b4 = uVar10;
      iVar19 = (iVar3 - iVar22) + iVar19;
      if (iVar19 < 0) {
        iVar19 = 0;
      }
      uVar25 = (ulonglong)(uVar17 + 1);
      *(int *)(local_88 + (longlong)piVar21) = iVar19;
      piVar21 = piVar21 + 1;
      lVar23 = local_98;
    } while ((int)(uVar17 + 1) < param_3);
    uVar18 = (ulonglong)local_c4;
    uVar17 = local_d8[1];
  }
  else {
    uVar11 = uVar18 & 0xffffffff;
  }
  uVar10 = local_d8[2];
  *(undefined4 *)((longlong)local_f0 + lVar7 + lVar6 + lVar5 + lVar4 + 0x10) = param_19;
  *(undefined4 *)((longlong)local_f0 + lVar7 + lVar6 + lVar5 + lVar4 + 8) = param_18;
  *(undefined4 *)((longlong)local_f0 + lVar7 + lVar6 + lVar5 + lVar4) = param_17;
  *(undefined8 *)((longlong)&local_f8 + lVar7 + lVar6 + lVar5 + lVar4) = param_16;
  *(int *)((longlong)local_108 + lVar7 + lVar6 + lVar5 + lVar4 + 8) = param_15;
  *(int *)((longlong)local_108 + lVar7 + lVar6 + lVar5 + lVar4) = param_14;
  *(undefined8 *)((longlong)local_120 + lVar7 + lVar6 + lVar5 + lVar4 + 0x10) = param_13;
  *(undefined8 *)((longlong)local_120 + lVar7 + lVar6 + lVar5 + lVar4 + 8) = param_12;
  *(undefined8 *)((longlong)local_120 + lVar7 + lVar6 + lVar5 + lVar4) = param_11;
  *(int *)((longlong)local_128 + lVar7 + lVar6 + lVar5 + lVar4) = local_b0;
  *(undefined8 *)((longlong)&local_130 + lVar7 + lVar6 + lVar5 + lVar4) = param_8;
  *(uint *)((longlong)local_138 + lVar7 + lVar6 + lVar5 + lVar4) = uVar10;
  *(undefined8 *)((longlong)&uStack_140 + lVar7 + lVar6 + lVar5 + lVar4) = param_7;
  *(int *)((longlong)aiStack_148 + lVar7 + lVar6 + lVar5 + lVar4) = local_8c;
  *(undefined8 *)((longlong)&uStack_150 + lVar7 + lVar6 + lVar5 + lVar4) = param_10;
  *(uint *)((longlong)auStack_158 + lVar7 + lVar6 + lVar5 + lVar4) = uVar17;
  *(longlong *)((longlong)alStack_178 + lVar7 + lVar6 + lVar5 + lVar4 + 0x18) = param_5;
  *(longlong *)((longlong)alStack_178 + lVar7 + lVar6 + lVar5 + lVar4 + 0x10) = local_70;
  *(longlong *)((longlong)alStack_178 + lVar7 + lVar6 + lVar5 + lVar4 + 8) = local_68;
  *(longlong *)((longlong)alStack_178 + lVar7 + lVar6 + lVar5 + lVar4) = local_60;
  *(undefined8 *)((longlong)auStack_1a0 + lVar7 + lVar6 + lVar5 + lVar4) = 0x1452e9bd0;
  FUN_1452e9c08(lVar2,uVar18 & 0xffffffff,param_3,uVar11);
  uVar18 = local_38 ^ (ulonglong)local_d8;
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)auStack_1a0 + lVar7 + lVar6 + lVar5 + lVar4) = &UNK_1452e9bdf;
  FUN_144d8e3a0(uVar18);
}



// FUNCTION 1452e9c08 FUN_1452e9c08 body=2292 status=ok
// SIG undefined FUN_1452e9c08(void)

int FUN_1452e9c08(longlong param_1,uint param_2,int param_3,int param_4,longlong param_5,
                 longlong param_6,longlong param_7,longlong param_8,int param_9,int *param_10,
                 int param_11,int *param_12,uint param_13,int *param_14,int param_15,
                 longlong param_16,longlong param_17,longlong param_18,int param_19,int param_20,
                 undefined8 param_21,int param_22,int param_23,int param_24)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  int local_88;
  longlong local_80;
  
  iVar9 = 0;
  iVar3 = param_19 * 8;
  iVar12 = 0x40;
  bVar1 = 1 < param_19;
  lVar18 = (longlong)param_3;
  local_80 = 6;
  uVar13 = (ulonglong)(int)param_2;
  do {
    iVar14 = 0;
    iVar6 = iVar12 + iVar9 >> 1;
    bVar2 = false;
    if ((int)param_2 < param_3) {
      piVar7 = (int *)(param_5 + lVar18 * 4);
      uVar10 = (ulonglong)(param_3 - param_2);
      do {
        piVar7 = piVar7 + -1;
        iVar4 = (*(int *)((param_6 - param_5) + (longlong)piVar7) * iVar6 >> 6) + *piVar7;
        if ((*(int *)((longlong)piVar7 + (param_7 - param_5)) <= iVar4) || (bVar2)) {
          bVar2 = true;
          if (*(int *)((param_8 - param_5) + (longlong)piVar7) <= iVar4) {
            iVar4 = *(int *)((param_8 - param_5) + (longlong)piVar7);
          }
          iVar14 = iVar14 + iVar4;
        }
        else if (iVar3 <= iVar4) {
          iVar14 = iVar14 + iVar3;
        }
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    bVar2 = false;
    iVar4 = iVar6;
    if (iVar14 <= param_9) {
      iVar4 = iVar12;
      iVar9 = iVar6;
    }
    iVar12 = iVar4;
    local_80 = local_80 + -1;
  } while (local_80 != 0);
  iVar12 = 0;
  if ((int)param_2 < param_3) {
    piVar7 = (int *)(param_5 + lVar18 * 4);
    uVar10 = (ulonglong)(param_3 - param_2);
    do {
      piVar7 = piVar7 + -1;
      iVar6 = (*(int *)((longlong)piVar7 + (param_6 - param_5)) * iVar9 >> 6) + *piVar7;
      if ((*(int *)((longlong)piVar7 + (param_7 - param_5)) <= iVar6) || (bVar2)) {
        bVar2 = true;
        iVar14 = iVar6;
      }
      else {
        iVar14 = iVar3;
        if (iVar6 < iVar3) {
          iVar14 = 0;
        }
      }
      iVar6 = *(int *)((longlong)piVar7 + (param_8 - param_5));
      if (iVar14 < iVar6) {
        iVar6 = iVar14;
      }
      iVar12 = iVar12 + iVar6;
      *(int *)((param_16 - param_5) + (longlong)piVar7) = iVar6;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  iVar9 = param_3 + -1;
  local_88 = param_3;
  if (param_4 < iVar9) {
    local_80 = (longlong)iVar9;
    do {
      lVar11 = *(longlong *)(param_1 + 0x20);
      iVar14 = (int)*(short *)(lVar11 + lVar18 * 2);
      iVar4 = (int)*(short *)(lVar11 + uVar13 * 2);
      uVar15 = iVar14 - iVar4;
      uVar17 = (uint)(param_9 - iVar12) / uVar15;
      iVar6 = (int)*(short *)(lVar11 + local_80 * 2);
      iVar4 = ((iVar4 - uVar15 * uVar17) - iVar6) + (param_9 - iVar12);
      iVar14 = iVar14 - iVar6;
      piVar7 = (int *)(param_16 + local_80 * 4);
      iVar6 = *piVar7;
      if (iVar4 < 1) {
        iVar4 = 0;
      }
      iVar16 = iVar14 * uVar17 + iVar6 + iVar4;
      iVar4 = *(int *)(param_7 + local_80 * 4);
      if (iVar4 <= iVar3 + 8) {
        iVar4 = iVar3 + 8;
      }
      if (iVar4 <= iVar16) {
        if (param_22 == 0) {
          iVar6 = FUN_144f2f528(param_21);
          if (iVar6 != 0) goto LAB_1452ea014;
        }
        else {
          if (lVar18 < 0x12) {
            iVar6 = 0;
          }
          else {
            iVar6 = 9;
            if (iVar9 < param_23) {
              iVar6 = 7;
            }
          }
          if ((local_88 <= (int)(param_2 + 2)) ||
             ((((iVar6 * iVar14 << ((byte)param_20 & 0x1f)) << 3) >> 4 < iVar16 &&
              (iVar9 <= param_24)))) {
            FUN_144f35680(param_21);
            goto LAB_1452ea014;
          }
          FUN_144f35680(param_21,0,1);
        }
        iVar12 = iVar12 + 8;
        iVar16 = iVar16 + -8;
        iVar6 = *piVar7;
      }
      iVar6 = iVar6 + param_13;
      if (0 < (int)param_13) {
        param_13 = (uint)(byte)(&DAT_149d32170)[local_80 - uVar13];
      }
      iVar6 = (iVar12 - iVar6) + param_13;
      iVar12 = iVar3;
      if (iVar16 < iVar3) {
        iVar12 = 0;
      }
      local_88 = local_88 + -1;
      *piVar7 = iVar12;
      iVar9 = iVar9 + -1;
      iVar12 = iVar6 + iVar3;
      if (iVar16 < iVar3) {
        iVar12 = iVar6;
      }
      local_80 = lVar18 + -2;
      lVar18 = lVar18 + -1;
    } while (param_4 < iVar9);
  }
  param_9 = param_9 + param_11;
LAB_1452ea014:
  if (local_88 <= (int)param_2) {
    FUN_144bca940("assertion failed: codedBands > start");
  }
  iVar9 = 0;
  if ((int)param_13 < 1) {
    *param_12 = 0;
  }
  else if (param_22 == 0) {
    iVar9 = FUN_144f2f5c4(param_21);
    iVar9 = iVar9 + param_2;
    *param_12 = iVar9;
  }
  else {
    iVar9 = *param_12;
    if (local_88 <= *param_12) {
      iVar9 = local_88;
    }
    *param_12 = iVar9;
    FUN_144f35770();
    iVar9 = *param_12;
  }
  iVar3 = param_9 + param_15;
  iVar6 = 0;
  if ((int)param_2 < iVar9) {
    iVar3 = param_9;
    iVar6 = param_15;
  }
  if (iVar6 < 1) {
    *param_14 = 0;
  }
  else if (param_22 == 0) {
    iVar9 = FUN_144f2f528(param_21);
    *param_14 = iVar9;
  }
  else {
    FUN_144f35680(param_21,*param_14,1);
  }
  lVar18 = (longlong)local_88;
  uVar17 = (int)*(short *)(*(longlong *)(param_1 + 0x20) + lVar18 * 2) -
           (int)*(short *)(*(longlong *)(param_1 + 0x20) + uVar13 * 2);
  uVar15 = (uint)(iVar3 - iVar12) / uVar17;
  iVar12 = (iVar3 - iVar12) - uVar17 * uVar15;
  uVar10 = uVar13;
  if ((longlong)uVar13 < lVar18) {
    do {
      piVar7 = (int *)(param_16 + uVar10 * 4);
      *piVar7 = *piVar7 + ((int)*(short *)(*(longlong *)(param_1 + 0x20) + 2 + uVar10 * 2) -
                          (int)*(short *)(*(longlong *)(param_1 + 0x20) + uVar10 * 2)) * uVar15;
      uVar10 = uVar10 + 1;
      uVar8 = uVar13;
    } while ((longlong)uVar10 < lVar18);
    do {
      iVar3 = (int)*(short *)(*(longlong *)(param_1 + 0x20) + 2 + uVar8 * 2) -
              (int)*(short *)(*(longlong *)(param_1 + 0x20) + uVar8 * 2);
      iVar9 = iVar12;
      if (iVar3 <= iVar12) {
        iVar9 = iVar3;
      }
      piVar7 = (int *)(param_16 + uVar8 * 4);
      *piVar7 = *piVar7 + iVar9;
      iVar12 = iVar12 - iVar9;
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 < lVar18);
  }
  iVar12 = 0;
  if ((longlong)uVar13 < lVar18) {
    piVar7 = (int *)(param_16 + uVar13 * 4);
    lVar18 = param_18 - param_16;
    lVar11 = param_17 - param_16;
    uVar10 = uVar13;
    iVar9 = 0;
    do {
      iVar3 = *piVar7;
      if (iVar3 < 0) {
        FUN_144bca940("assertion failed: bits[j] >= 0","../../../third_party/opus/src/celt/rate.c",
                      0x1ba);
        iVar3 = *piVar7;
      }
      iVar3 = iVar3 + iVar9;
      iVar6 = (int)*(short *)(*(longlong *)(param_1 + 0x20) + 2 + uVar13 * 2) -
              (int)*(short *)(*(longlong *)(param_1 + 0x20) + uVar13 * 2) << ((byte)param_20 & 0x1f)
      ;
      if (iVar6 < 2) {
        iVar12 = iVar3 + param_19 * -8;
        if (iVar12 < 0) {
          iVar12 = 0;
        }
        *piVar7 = iVar3 - iVar12;
        *(undefined4 *)((longlong)piVar7 + lVar11) = 0;
        *(undefined4 *)((longlong)piVar7 + lVar18) = 1;
      }
      else {
        iVar12 = iVar3 - *(int *)((longlong)piVar7 + lVar18 + (param_8 - param_18));
        iVar14 = 0;
        if (iVar12 < 1) {
          iVar12 = iVar14;
        }
        iVar3 = iVar3 - iVar12;
        *piVar7 = iVar3;
        if ((((param_19 == 2) && (2 < iVar6)) && (*param_14 == 0)) && ((int)uVar10 < *param_12)) {
          iVar14 = 1;
        }
        uVar15 = iVar6 * param_19 + iVar14;
        iVar14 = ((int)*(short *)(*(longlong *)(param_1 + 0x40) + uVar13 * 2) + param_20 * 8) *
                 uVar15;
        iVar4 = (iVar14 >> 1) + uVar15 * -0x15;
        if (iVar6 == 2) {
          iVar4 = iVar4 + ((int)(uVar15 * 8) >> 2);
        }
        if (iVar3 + iVar4 < (int)(uVar15 * 0x10)) {
          iVar14 = iVar14 >> 2;
LAB_1452ea2db:
          iVar4 = iVar4 + iVar14;
        }
        else if (iVar3 + iVar4 < (int)(uVar15 * 0x18)) {
          iVar14 = iVar14 >> 3;
          goto LAB_1452ea2db;
        }
        uVar5 = iVar3 + uVar15 * 4 + iVar4;
        uVar17 = 0;
        if (-1 < (int)uVar5) {
          uVar17 = uVar5;
        }
        iVar3 = (int)((ulonglong)uVar17 / (ulonglong)uVar15 >> 3);
        *(int *)((longlong)piVar7 + lVar11) = iVar3;
        if (*piVar7 >> 3 < iVar3 * param_19) {
          iVar3 = (*piVar7 >> bVar1) >> 3;
          *(int *)((longlong)piVar7 + lVar11) = iVar3;
        }
        iVar6 = 8;
        if (iVar3 < 8) {
          iVar6 = iVar3;
        }
        *(int *)((longlong)piVar7 + lVar11) = iVar6;
        *(uint *)((longlong)piVar7 + lVar18) = (uint)(*piVar7 + iVar4 <= (int)(uVar15 * 8 * iVar6));
        *piVar7 = *piVar7 + param_19 * *(int *)((longlong)piVar7 + lVar11) * -8;
      }
      if (0 < iVar12) {
        iVar6 = 8 - *(int *)((longlong)piVar7 + lVar11);
        iVar3 = iVar12 >> bVar1 + 3;
        if (iVar6 <= iVar3) {
          iVar3 = iVar6;
        }
        *(int *)((longlong)piVar7 + lVar11) = iVar3 + *(int *)((longlong)piVar7 + lVar11);
        iVar9 = iVar12 - iVar9;
        iVar12 = iVar12 + iVar3 * param_19 * -8;
        *(uint *)((longlong)piVar7 + lVar18) = (uint)(iVar9 <= iVar3 * param_19 * 8);
      }
      if (*piVar7 < 0) {
        FUN_144bca940("assertion failed: bits[j] >= 0","../../../third_party/opus/src/celt/rate.c",
                      0x201);
      }
      if (*(int *)((longlong)piVar7 + lVar11) < 0) {
        FUN_144bca940("assertion failed: ebits[j] >= 0","../../../third_party/opus/src/celt/rate.c",
                      0x202);
      }
      param_2 = (int)uVar10 + 1;
      uVar10 = (ulonglong)param_2;
      uVar13 = uVar13 + 1;
      piVar7 = piVar7 + 1;
      iVar9 = iVar12;
    } while ((longlong)uVar13 < (longlong)local_88);
  }
  *param_10 = iVar12;
  if ((int)param_2 < param_3) {
    uVar13 = (ulonglong)(param_3 - param_2);
    piVar7 = (int *)(param_16 + (longlong)(int)param_2 * 4);
    do {
      iVar12 = (*piVar7 >> bVar1) >> 3;
      *(int *)((longlong)piVar7 + (param_17 - param_16)) = iVar12;
      if (iVar12 * param_19 * 8 != *piVar7) {
        FUN_144bca940("assertion failed: C*ebits[j]<<BITRES == bits[j]",
                      "../../../third_party/opus/src/celt/rate.c",0x20c);
      }
      *piVar7 = 0;
      *(uint *)((longlong)piVar7 + (param_18 - param_16)) =
           (uint)(*(int *)((longlong)piVar7 + (param_17 - param_16)) < 1);
      piVar7 = piVar7 + 1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  return local_88;
}



// FUNCTION 1452ea4fc FUN_1452ea4fc body=154 status=ok
// SIG undefined FUN_1452ea4fc(void)

int FUN_1452ea4fc(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  iVar2 = 0x1f;
  if (param_2 != 0) {
    for (; param_2 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  iVar4 = (int)(short)((short)param_2 << (0xfU - (char)(iVar2 + 1) & 0x1f));
  iVar3 = (int)(short)((short)param_1 << (0xfU - (char)(iVar1 + 1) & 0x1f));
  return ((iVar1 + 1) - (iVar2 + 1)) * 0x800 +
         (((short)((short)(iVar3 * -0xa25 + 0x4000 >> 0xf) + 0x1efc) * iVar3 + 0x4000 >> 0xf) -
         ((short)((short)(iVar4 * -0xa25 + 0x4000 >> 0xf) + 0x1efc) * iVar4 + 0x4000 >> 0xf));
}



// FUNCTION 1452ea598 FUN_1452ea598 body=221 status=ok
// SIG undefined FUN_1452ea598(void)

void FUN_1452ea598(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
                  byte param_6)

{
  longlong lVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  double dVar10;
  
  psVar3 = *(short **)(param_1 + 0x20);
  iVar7 = 0;
  iVar2 = *(int *)(param_1 + 0x30);
  iVar6 = 0;
  do {
    iVar8 = 0;
    psVar5 = psVar3;
    if (0 < param_4) {
      do {
        lVar1 = param_2 + (longlong)(((int)*psVar5 << (param_6 & 0x1f)) + iVar6) * 4;
        fVar9 = (float)FUN_144f37488(lVar1,lVar1,(int)psVar5[1] - (int)*psVar5 << (param_6 & 0x1f));
        dVar10 = sqrt((double)(fVar9 + 1e-27));
        iVar4 = *(int *)(param_1 + 8) * iVar7 + iVar8;
        iVar8 = iVar8 + 1;
        *(float *)(param_3 + (longlong)iVar4 * 4) = (float)dVar10;
        psVar5 = psVar5 + 1;
      } while (iVar8 < param_4);
    }
    iVar7 = iVar7 + 1;
    iVar6 = iVar6 + (iVar2 << (param_6 & 0x1f));
  } while (iVar7 < param_5);
  return;
}



// FUNCTION 1452ea678 FUN_1452ea678 body=236 status=ok
// SIG undefined FUN_1452ea678(void)

void FUN_1452ea678(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
                  int param_6,int param_7)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  float *pfVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  
  iVar2 = *(int *)(param_1 + 0x30);
  iVar9 = 0;
  lVar3 = *(longlong *)(param_1 + 0x20);
  iVar10 = 0;
  do {
    lVar7 = 0;
    if (0 < (longlong)param_5) {
      iVar5 = *(int *)(param_1 + 8) * iVar9;
      do {
        fVar1 = *(float *)(param_4 + (longlong)iVar5 * 4);
        lVar6 = (longlong)(*(short *)(lVar3 + lVar7 * 2) * param_7);
        lVar8 = (longlong)(*(short *)(lVar3 + 2 + lVar7 * 2) * param_7);
        if (lVar6 < lVar8) {
          pfVar4 = (float *)(param_3 + (iVar10 + lVar6) * 4);
          lVar8 = lVar8 - lVar6;
          do {
            *pfVar4 = (1.0 / (fVar1 + 1e-27)) * *(float *)((param_2 - param_3) + (longlong)pfVar4);
            pfVar4 = pfVar4 + 1;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        iVar5 = iVar5 + 1;
        lVar7 = lVar7 + 1;
      } while (lVar7 < param_5);
    }
    iVar9 = iVar9 + 1;
    iVar10 = iVar10 + iVar2 * param_7;
  } while (iVar9 < param_6);
  return;
}



// FUNCTION 1452ea764 FUN_1452ea764 body=474 status=ok
// SIG undefined FUN_1452ea764(void)

void FUN_1452ea764(longlong param_1,longlong param_2,float *param_3,longlong param_4,int param_5,
                  int param_6,int param_7,int param_8,int param_9)

{
  short sVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  iVar8 = *(int *)(param_1 + 0x30) * param_7;
  iVar4 = *(short *)(lVar2 + (longlong)param_6 * 2) * param_7;
  if ((param_8 != 1) && (param_8 = iVar8 / param_8, param_8 <= iVar4)) {
    iVar4 = param_8;
  }
  iVar5 = 0;
  if (param_9 == 0) {
    iVar5 = param_5;
  }
  lVar7 = (longlong)iVar5;
  iVar6 = 0;
  if (param_9 == 0) {
    iVar6 = param_6;
  }
  iVar10 = 0;
  if (param_9 == 0) {
    iVar10 = iVar4;
  }
  iVar4 = *(short *)(lVar2 + lVar7 * 2) * param_7;
  pfVar3 = (float *)(param_2 + (longlong)iVar4 * 4);
  pfVar9 = param_3;
  if (0 < iVar4) {
    memset(param_3,0,(longlong)iVar4 * 4);
    pfVar9 = param_3 + iVar4;
  }
  for (; lVar7 < iVar6; lVar7 = lVar7 + 1) {
    sVar1 = *(short *)(lVar2 + 2 + lVar7 * 2);
    iVar4 = *(short *)(lVar2 + lVar7 * 2) * param_7;
    fVar13 = *(float *)(param_4 + lVar7 * 4) + (float)(&DAT_149d32430)[lVar7];
    fVar11 = 32.0;
    if (fVar13 <= 32.0) {
      fVar11 = fVar13;
    }
    dVar12 = exp((double)fVar11 * 0.6931471805599453);
    do {
      iVar4 = iVar4 + 1;
      fVar11 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      *pfVar9 = (float)dVar12 * fVar11;
      pfVar9 = pfVar9 + 1;
    } while (iVar4 < sVar1 * param_7);
  }
  if (iVar6 < iVar5) {
    FUN_144bca940("assertion failed: start <= end","../../../third_party/opus/src/celt/bands.c",
                  0x107);
  }
  memset(param_3 + iVar10,0,(longlong)(iVar8 - iVar10) << 2);
  return;
}



// FUNCTION 1452ea940 FUN_1452ea940 body=767 status=ok
// SIG undefined FUN_1452ea940(void)

undefined1
FUN_1452ea940(longlong param_1,longlong param_2,int *param_3,int param_4,int *param_5,uint *param_6,
             int param_7,uint param_8,int param_9,int param_10,int *param_11)

{
  short sVar1;
  short *psVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  short *psVar16;
  float fVar17;
  int local_78;
  int local_74;
  
  uVar7 = (ulonglong)(int)param_8;
  iVar8 = 0;
  psVar2 = *(short **)(param_1 + 0x20);
  uVar15 = 0;
  uVar9 = 0;
  if ((int)param_8 < 1) {
    FUN_144bca940("assertion failed: end>0","../../../third_party/opus/src/celt/bands.c",0x1e9);
  }
  uVar3 = 0;
  if (8 < ((int)psVar2[uVar7] - (int)psVar2[uVar7 - 1]) * param_10) {
    local_74 = 0;
    local_78 = 0;
    do {
      iVar12 = 0;
      if (0 < (int)uVar7) {
        piVar14 = param_11;
        psVar16 = psVar2;
        do {
          sVar1 = *psVar16;
          iVar13 = 0;
          psVar16 = psVar16 + 1;
          iVar5 = 0;
          uVar11 = ((int)*psVar16 - (int)sVar1) * param_10;
          pfVar10 = (float *)(param_2 + ((longlong)(sVar1 * param_10) + (longlong)local_74) * 4);
          if (8 < (int)uVar11) {
            iVar4 = 0;
            if (0 < (int)uVar11) {
              uVar7 = (ulonglong)uVar11;
              do {
                fVar17 = *pfVar10;
                pfVar10 = pfVar10 + 1;
                fVar17 = fVar17 * fVar17 * (float)(int)uVar11;
                iVar6 = iVar13 + 1;
                if (0.25 <= fVar17) {
                  iVar6 = iVar13;
                }
                iVar13 = iVar6;
                iVar6 = iVar5 + 1;
                if (0.0625 <= fVar17) {
                  iVar6 = iVar5;
                }
                iVar5 = iVar6;
                iVar6 = iVar4 + 1;
                if (0.015625 <= fVar17) {
                  iVar6 = iVar4;
                }
                iVar4 = iVar6;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
              uVar7 = (ulonglong)param_8;
            }
            if (*(int *)(param_1 + 8) + -4 < iVar12) {
              uVar9 = uVar9 + (uint)((iVar5 + iVar13) * 0x20) / uVar11;
            }
            iVar6 = 0;
            if ((int)uVar11 <= iVar4 * 2) {
              iVar6 = *piVar14;
            }
            iVar4 = 0;
            if ((int)uVar11 <= iVar5 * 2) {
              iVar4 = *piVar14;
            }
            iVar5 = 0;
            if ((int)uVar11 <= iVar13 * 2) {
              iVar5 = *piVar14;
            }
            iVar8 = iVar8 + iVar5 + iVar6 + iVar4;
            uVar15 = uVar15 + *piVar14;
          }
          iVar12 = iVar12 + 1;
          piVar14 = piVar14 + 1;
        } while (iVar12 < (int)uVar7);
      }
      local_78 = local_78 + 1;
      local_74 = local_74 + *(int *)(param_1 + 0x30) * param_10;
    } while (local_78 < param_9);
    uVar3 = 2;
    if (param_7 != 0) {
      uVar11 = 0;
      if (uVar9 != 0) {
        uVar11 = uVar9 / (uint)((((int)uVar7 - *(int *)(param_1 + 8)) + 4) * param_9);
      }
      iVar12 = (int)(*param_5 + uVar11) >> 1;
      *param_5 = iVar12;
      if (*param_6 == 2) {
        iVar12 = iVar12 + 4;
      }
      else if (*param_6 == 0) {
        iVar12 = iVar12 + -4;
      }
      if (iVar12 < 0x17) {
        *param_6 = (uint)(0x12 < iVar12);
      }
      else {
        *param_6 = 2;
      }
    }
    if ((int)uVar15 < 1) {
      FUN_144bca940("assertion failed: nbBands>0","../../../third_party/opus/src/celt/bands.c",0x221
                   );
    }
    if (iVar8 < 0) {
      FUN_144bca940("assertion failed: sum>=0","../../../third_party/opus/src/celt/bands.c",0x222);
    }
    iVar8 = (int)((uint)(iVar8 << 8) / uVar15 + *param_3) >> 1;
    *param_3 = iVar8;
    iVar8 = (iVar8 + 0x96) * 3 + param_4 * -0x80 >> 2;
    if (iVar8 < 0x50) {
      uVar3 = 3;
    }
    else if (0xff < iVar8) {
      uVar3 = iVar8 < 0x180;
    }
  }
  return uVar3;
}



// FUNCTION 1452eac40 FUN_1452eac40 body=125 status=ok
// SIG undefined FUN_1452eac40(void)

void FUN_1452eac40(float *param_1,int param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float *pfVar6;
  
  if (0 < (int)param_3) {
    uVar5 = (ulonglong)param_3;
    do {
      if (0 < param_2 >> 1) {
        uVar4 = (ulonglong)(uint)(param_2 >> 1);
        pfVar6 = param_1 + (int)param_3;
        pfVar3 = param_1;
        do {
          fVar1 = *pfVar6;
          fVar2 = *pfVar3;
          *pfVar3 = fVar1 * 0.70710677 + fVar2 * 0.70710677;
          pfVar3 = pfVar3 + (int)(param_3 * 2);
          *pfVar6 = fVar2 * 0.70710677 - fVar1 * 0.70710677;
          pfVar6 = pfVar6 + (int)(param_3 * 2);
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      param_1 = param_1 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 1452eacc0 FUN_1452eacc0 body=3825 status=ok
// SIG undefined FUN_1452eacc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452eacc0(int param_1,longlong param_2,uint param_3,float param_4,longlong param_5,
                  longlong param_6,longlong param_7,longlong param_8,longlong param_9,int param_10,
                  int param_11,int param_12,uint param_13,longlong param_14,int param_15,
                  int param_16,longlong *param_17,undefined4 param_18,int param_19,
                  undefined4 *param_20,int param_21,undefined4 param_22,uint param_23)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  size_t _Size;
  float *pfVar23;
  float *pfVar24;
  undefined4 uVar25;
  ulonglong uVar26;
  short *psVar27;
  longlong lVar28;
  int iVar29;
  int iVar30;
  longlong lVar31;
  void *pvVar32;
  longlong lVar33;
  uint uVar34;
  uint uVar35;
  float *pfVar36;
  longlong lVar37;
  int iVar38;
  uint uVar39;
  uint uVar40;
  int iVar41;
  float *pfVar42;
  int iVar43;
  size_t sVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined8 auStack_8a0 [5];
  int aiStack_878 [2];
  longlong lStack_870;
  longlong lStack_868;
  longlong lStack_860;
  longlong alStack_858 [2];
  uint auStack_848 [4];
  float local_838;
  int local_834;
  uint local_830;
  int local_82c;
  int local_828;
  float *local_820;
  ulonglong local_818;
  float *local_810;
  int local_808;
  uint local_804;
  size_t local_800;
  float *local_7f8;
  int local_7f0;
  uint uStack_7ec;
  longlong *local_7e8;
  float *local_7e0;
  longlong local_7d8;
  longlong local_7d0;
  float *local_7c8;
  void *local_7c0;
  void *local_7b8;
  longlong local_7b0;
  int *local_7a8;
  undefined8 local_798;
  longlong lStack_790;
  undefined8 local_788;
  undefined8 uStack_780;
  longlong *local_778;
  undefined8 uStack_770;
  longlong local_768;
  undefined8 uStack_760;
  ulonglong local_758;
  ulonglong uStack_750;
  uint local_748;
  int local_744;
  int local_740;
  longlong local_738;
  longlong local_730;
  longlong local_728;
  longlong local_720;
  longlong local_718;
  short *local_710;
  int local_708;
  longlong local_700;
  longlong local_6f8;
  void *local_6f0;
  void *local_6e8;
  void *local_6e0;
  longlong local_6d8;
  float *local_6d0;
  undefined4 *local_6c8;
  longlong local_6c0;
  longlong local_6b8;
  void *local_6b0;
  longlong local_6a8;
  ulonglong local_6a0;
  longlong local_698;
  longlong lStack_690;
  undefined8 local_688;
  longlong lStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  longlong *local_668;
  undefined8 uStack_660;
  longlong local_658;
  undefined8 uStack_650;
  ulonglong local_648;
  ulonglong uStack_640;
  undefined8 local_638;
  longlong lStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  longlong *local_618;
  undefined8 uStack_610;
  longlong local_608;
  undefined8 uStack_600;
  ulonglong local_5f8;
  ulonglong uStack_5f0;
  undefined1 local_5e8 [1280];
  ulonglong local_e8;
  
  local_e8 = DAT_14c707940 ^ (ulonglong)&local_838;
  local_718 = param_7;
  local_6c0 = param_5;
  local_6f8 = param_8;
  local_738 = param_14;
  local_7e8 = param_17;
  local_6c8 = param_20;
  local_728 = *(longlong *)(param_2 + 0x20);
  uVar40 = (param_6 != 0) + 1;
  local_700 = param_6;
  local_7f8 = (float *)CONCAT44(local_7f8._4_4_,1);
  bVar14 = false;
  if ((((param_1 == 0) || (param_6 == 0)) || (param_12 != 0)) || (param_21 < 8)) {
    local_720 = 0;
  }
  else {
    bVar14 = true;
    local_720 = 1;
  }
  if ((param_1 == 0) || (local_82c = 0, bVar14)) {
    local_82c = 1;
  }
  iVar20 = local_82c;
  iVar43 = 1 << ((byte)param_18 & 0x1f);
  local_7b0 = (longlong)(int)param_3;
  iVar30 = 1;
  if (param_10 != 0) {
    iVar30 = iVar43;
  }
  local_710 = (short *)(local_728 + local_7b0 * 2);
  iVar38 = (int)*(short *)(local_728 + -2 + (longlong)*(int *)(param_2 + 8) * 2);
  local_7f0 = *local_710 * iVar43;
  iVar29 = iVar38 * iVar43;
  uVar26 = (longlong)(int)((iVar29 - local_7f0) * uVar40) * 4;
  uVar22 = uVar26 + 0xf;
  if (uVar22 <= uVar26) {
    uVar22 = 0xffffffffffffff0;
  }
  auStack_8a0[0] = 0x1452eaea3;
  lVar1 = -(uVar22 & 0xfffffffffffffff0);
  local_7d0 = (longlong)local_7f0;
  pfVar42 = (float *)((longlong)&local_838 + lVar1);
  local_7e0 = pfVar42 + (iVar29 - local_7d0);
  if ((param_1 == 0) || (local_82c == 0)) {
    iVar38 = 0;
  }
  else {
    iVar38 = (*(short *)(local_728 + (longlong)*(int *)(param_2 + 8) * 2) - iVar38) * iVar43;
  }
  uVar26 = (longlong)iVar38 * 4;
  uVar22 = uVar26 + 0xf;
  if (uVar22 <= uVar26) {
    uVar22 = 0xffffffffffffff0;
  }
  local_838 = param_4;
  local_834 = iVar30;
  local_808 = iVar43;
  local_804 = param_3;
  local_7d8 = param_2;
  local_748 = uVar40;
  local_6d0 = pfVar42;
  *(undefined8 *)((longlong)auStack_8a0 + lVar1) = 0x1452eaf14;
  lVar2 = -(uVar22 & 0xfffffffffffffff0);
  local_818 = (longlong)&local_838 + lVar2 + lVar1;
  if ((param_1 == 0) || (iVar20 == 0)) {
    local_818 = local_6c0 + (longlong)iVar29 * 4;
  }
  uVar22 = uVar26 + 0xf;
  if (uVar22 <= uVar26) {
    uVar22 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_8a0 + lVar2 + lVar1) = 0x1452eaf4d;
  lVar3 = -(uVar22 & 0xfffffffffffffff0);
  local_7b8 = (void *)((longlong)&local_838 + lVar3 + lVar2 + lVar1);
  uVar22 = uVar26 + 0xf;
  if (uVar22 <= uVar26) {
    uVar22 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_8a0 + lVar3 + lVar2 + lVar1) = 0x1452eaf71;
  lVar4 = -(uVar22 & 0xfffffffffffffff0);
  local_7c0 = (void *)((longlong)&local_838 + lVar4 + lVar3 + lVar2 + lVar1);
  uVar22 = uVar26 + 0xf;
  if (uVar22 <= uVar26) {
    uVar22 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_8a0 + lVar4 + lVar3 + lVar2 + lVar1) = 0x1452eaf92;
  lVar5 = -(uVar22 & 0xfffffffffffffff0);
  local_6f0 = (void *)((longlong)&local_838 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1);
  uVar22 = uVar26 + 0xf;
  if (uVar22 <= uVar26) {
    uVar22 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_8a0 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) = 0x1452eafb6;
  lVar6 = -(uVar22 & 0xfffffffffffffff0);
  local_6e8 = (void *)((longlong)&local_838 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1);
  uVar22 = uVar26 + 0xf;
  if (uVar22 <= uVar26) {
    uVar22 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_8a0 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
       0x1452eafda;
  local_830 = 0;
  lVar7 = -(uVar22 & 0xfffffffffffffff0);
  uVar22 = (ulonglong)(int)local_804;
  local_6e0 = (void *)((longlong)&local_838 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1)
  ;
  local_778 = local_7e8;
  local_788 = CONCAT44(param_13,(undefined4)local_788);
  lStack_790 = local_7d8;
  local_768 = local_6f8;
  local_798 = CONCAT44(iVar20,param_1);
  uStack_780 = CONCAT44(uStack_780._4_4_,param_11);
  local_758 = (ulonglong)param_23 << 0x20;
  uStack_760 = CONCAT44(param_22,*local_6c8);
  uStack_750 = CONCAT44(uStack_750._4_4_,(uint)(1 < iVar30));
  uVar25 = *local_6c8;
  if ((int)local_804 < (int)local_838) {
    local_730 = 0;
    local_738 = local_738 - local_6f8;
    local_708 = param_19 + -1;
    param_19 = param_19 - local_804;
    local_7a8 = (int *)(param_9 + uVar22 * 4);
    local_6a0 = (ulonglong)uVar40;
    uStack_7ec = local_804 + 1;
    local_6d8 = (longlong)(int)(uStack_7ec * uVar40);
    local_6a8 = local_718 + ((int)(local_804 * uVar40) - local_6d8);
    local_6b8 = local_6f8 - param_9;
    uVar40 = local_804;
    do {
      local_800 = CONCAT44(local_800._4_4_,0xffffffff);
      iVar20 = *local_710 * iVar43;
      local_788 = CONCAT44(local_788._4_4_,uVar40);
      lVar33 = (longlong)iVar20;
      local_7c8 = (float *)CONCAT44(local_7c8._4_4_,iVar20);
      local_810 = (float *)(local_6c0 + lVar33 * 4);
      iVar20 = ((int)local_710[1] - (int)*local_710) * iVar43;
      local_820 = (float *)(-(ulonglong)(local_700 != 0) & local_700 + lVar33 * 4);
      local_828 = iVar20;
      if (iVar20 < 1) {
        *(undefined8 *)
         ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
             0x1452eb181;
        FUN_144bca940("assertion failed: N > 0","../../../third_party/opus/src/celt/bands.c",0x5d7);
      }
      plVar17 = local_7e8;
      *(undefined8 *)((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1)
           = 0x1452eb18a;
      local_740 = FUN_1452e891c(plVar17);
      lVar31 = local_7d8;
      pfVar36 = local_7e0;
      iVar30 = local_7f0;
      local_744 = param_16 - local_740;
      if (uVar40 == (uint)uVar22) {
        local_744 = param_16;
      }
      iVar29 = param_15 - local_740;
      uStack_770 = CONCAT44(uStack_770._4_4_,iVar29 + -1);
      if (local_708 < (int)uVar40) {
LAB_1452eb214:
        iVar41 = 0;
      }
      else {
        iVar38 = param_19;
        if (3 < param_19) {
          iVar38 = 3;
        }
        iVar41 = *local_7a8 + local_744 / iVar38;
        iVar38 = iVar29;
        if (iVar41 <= iVar29) {
          iVar38 = iVar41;
        }
        if (iVar38 < 0x4000) {
          iVar21 = iVar29;
          if (iVar41 <= iVar29) {
            iVar21 = iVar41;
          }
          if (iVar21 < 0) goto LAB_1452eb214;
          if (0x3fff < iVar38) goto LAB_1452eb206;
          if (iVar29 < iVar41) {
            iVar41 = iVar29;
          }
        }
        else {
LAB_1452eb206:
          iVar41 = 0x3fff;
        }
      }
      if (local_82c == 0) {
LAB_1452eb24c:
        if (uVar40 == uStack_7ec) {
          *(int *)((longlong)&lStack_870 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               param_12;
          *(int *)((longlong)aiStack_878 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               iVar43;
          *(undefined8 *)
           ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               0x1452eb274;
          FUN_1452edae0(lVar31,pfVar42,pfVar36);
        }
      }
      else if ((local_7f0 <= (int)local_7c8 - iVar20) || (uVar40 == uStack_7ec)) {
        if (((int)local_7f8 != 0) || (local_830 == 0)) {
          local_730 = local_7b0;
          local_830 = uVar40;
        }
        goto LAB_1452eb24c;
      }
      iVar29 = local_834;
      pfVar36 = (float *)((longlong)local_7a8 + local_6b8);
      local_7f8 = pfVar36;
      uStack_780 = CONCAT44(*(int *)((longlong)pfVar36 + local_738),(undefined4)uStack_780);
      if (*(int *)(local_7d8 + 0xc) <= (int)uVar40) {
        local_810 = pfVar42;
        if (local_700 != 0) {
          local_820 = pfVar42;
        }
        local_818 = 0;
      }
      pfVar24 = local_820;
      if (uVar40 == (int)local_838 - 1U) {
        local_818 = -(ulonglong)(local_720 != 0) & local_818;
      }
      if ((local_830 == 0) ||
         (((param_11 == 3 && (local_834 < 2)) && (-1 < *(int *)((longlong)pfVar36 + local_738))))) {
        uVar34 = (1 << ((byte)local_834 & 0x1f)) - 1;
        uVar39 = uVar34;
      }
      else {
        psVar27 = (short *)(local_728 + local_730 * 2);
        iVar21 = (*psVar27 * iVar43 - iVar20) - iVar30;
        iVar38 = 0;
        if (-1 < iVar21) {
          iVar38 = iVar21;
        }
        local_800 = CONCAT44(local_800._4_4_,iVar38);
        uVar35 = local_830;
        do {
          psVar27 = psVar27 + -1;
          uVar35 = uVar35 - 1;
        } while (iVar38 + iVar30 < *psVar27 * iVar43);
        iVar21 = local_830 - 1;
        lVar31 = local_730 + -1;
        do {
          iVar21 = iVar21 + 1;
          lVar31 = lVar31 + 1;
          if (local_7b0 <= lVar31) break;
        } while (*(short *)(local_728 + lVar31 * 2) * iVar43 < iVar38 + iVar20 + iVar30);
        uVar34 = 0;
        uVar39 = 0;
        iVar30 = uVar35 * local_748;
        do {
          lVar31 = (longlong)iVar30;
          uVar35 = uVar35 + 1;
          iVar30 = iVar30 + local_748;
          uVar39 = uVar39 | *(byte *)(lVar31 + local_718);
          uVar34 = uVar34 | *(byte *)((longlong)iVar30 + -1 + local_718);
          pfVar42 = local_6d0;
          iVar43 = local_808;
          iVar20 = local_828;
        } while ((int)uVar35 < iVar21);
      }
      if (param_12 == 0) {
LAB_1452eb561:
        pvVar32 = local_7b8;
        pfVar23 = local_810;
        iVar30 = (int)local_800;
        if (pfVar24 == (float *)0x0) {
          if (uVar40 == (int)local_838 - 1U) {
            pfVar36 = (float *)0x0;
          }
          else {
            pfVar36 = pfVar42 + (lVar33 - local_7d0);
          }
          lVar33 = (longlong)(int)local_800;
          *(uint *)((longlong)auStack_848 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               uVar34 | uVar39;
          pfVar24 = (float *)0x0;
          if (iVar30 != -1) {
            pfVar24 = pfVar42 + lVar33;
          }
          *(ulonglong *)
           ((longlong)alStack_858 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1 + 8) =
               local_818;
          *(undefined4 *)
           ((longlong)alStack_858 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               0x3f800000;
          *(float **)((longlong)&lStack_860 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1)
               = pfVar36;
          pfVar42 = local_810;
          *(undefined4 *)
           ((longlong)&lStack_868 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               param_18;
          *(float **)((longlong)&lStack_870 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1)
               = pfVar24;
          *(int *)((longlong)aiStack_878 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               iVar29;
          *(undefined8 *)
           ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               0x1452ebc17;
          uVar18 = FUN_1452ed2d4(&local_798,pfVar42,iVar20,iVar41);
          uVar19 = uVar18;
        }
        else if ((local_720 == 0) || ((int)param_13 <= (int)uVar40)) {
          local_758 = local_758 & 0xffffffff00000000;
          if (uVar40 == (int)local_838 - 1U) {
            pfVar36 = (float *)0x0;
          }
          else {
            pfVar36 = pfVar42 + (lVar33 - local_7d0);
          }
          lVar33 = (longlong)(int)local_800;
          *(uint *)((longlong)auStack_848 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               uVar34 | uVar39;
          pfVar23 = (float *)0x0;
          if (iVar30 != -1) {
            pfVar23 = pfVar42 + lVar33;
          }
          *(ulonglong *)
           ((longlong)alStack_858 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1 + 8) =
               local_818;
          *(float **)((longlong)alStack_858 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1)
               = pfVar36;
          pfVar42 = local_810;
          *(undefined4 *)
           ((longlong)&lStack_860 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               param_18;
          *(float **)((longlong)&lStack_868 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1)
               = pfVar23;
          *(int *)((longlong)&lStack_870 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               iVar29;
          *(int *)((longlong)aiStack_878 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               iVar41;
          *(undefined8 *)
           ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               0x1452ebb9b;
          uVar18 = FUN_1452ed648(&local_798,pfVar42,pfVar24,iVar20);
          uVar19 = uVar18;
        }
        else {
          sVar44 = (longlong)iVar20 << 2;
          lVar31 = (longlong)(int)(*(int *)(local_7d8 + 8) + uVar40);
          fVar49 = *(float *)(local_6f8 + lVar31 * 4);
          fVar50 = *pfVar36;
          if (fVar49 <= *pfVar36) {
            fVar50 = fVar49;
          }
          fVar49 = fVar50 / 3.0 + *(float *)(local_6f8 + lVar31 * 4);
          fVar50 = fVar50 / 3.0 + *pfVar36;
          local_698 = local_7e8[4];
          lStack_690 = local_7e8[5];
          lVar31 = *local_7e8;
          lVar28 = local_7e8[1];
          lVar15 = local_7e8[2];
          uVar25 = *(undefined4 *)((longlong)local_7e8 + 0x14);
          lVar16 = local_7e8[3];
          iVar43 = *(int *)((longlong)local_7e8 + 0x1c);
          local_7f8 = (float *)local_7e8[6];
          local_688 = local_798;
          lStack_680 = lStack_790;
          local_678 = local_788;
          uStack_670 = uStack_780;
          local_668 = local_778;
          uStack_660 = uStack_770;
          local_658 = local_768;
          uStack_650 = uStack_760;
          local_648 = local_758;
          uStack_640 = uStack_750;
          *(undefined8 *)
           ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               0x1452eb63b;
          memcpy(pvVar32,pfVar23,sVar44);
          pvVar32 = local_7c0;
          pfVar36 = local_820;
          *(undefined8 *)
           ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               0x1452eb64b;
          memcpy(pvVar32,pfVar36,sVar44);
          local_758 = CONCAT44(local_758._4_4_,0xffffffff);
          if (uVar40 == (int)local_838 - 1U) {
            pfVar36 = (float *)0x0;
            lVar33 = lVar33 - local_7d0;
          }
          else {
            lVar33 = lVar33 - local_7d0;
            pfVar36 = pfVar42 + lVar33;
          }
          iVar30 = (int)local_800;
          lVar37 = (longlong)(int)local_800;
          *(uint *)((longlong)auStack_848 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               uVar34 | uVar39;
          pfVar24 = local_820;
          local_7c8 = (float *)0x0;
          if (iVar30 != -1) {
            local_7c8 = pfVar42 + lVar37;
          }
          *(ulonglong *)
           ((longlong)alStack_858 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1 + 8) =
               local_818;
          *(float **)((longlong)alStack_858 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1)
               = pfVar36;
          pfVar36 = local_810;
          *(undefined4 *)
           ((longlong)&lStack_860 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               param_18;
          *(float **)((longlong)&lStack_868 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1)
               = local_7c8;
          *(int *)((longlong)&lStack_870 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               local_834;
          *(int *)((longlong)aiStack_878 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               iVar41;
          *(undefined8 *)
           ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               0x1452eb6c5;
          local_828 = FUN_1452ed648(&local_798,pfVar36,pfVar24,iVar20);
          pvVar32 = local_7c0;
          pfVar36 = local_820;
          *(undefined8 *)
           ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               0x1452eb6d8;
          fVar45 = (float)FUN_144f37488(pvVar32,pfVar36,iVar20);
          pvVar32 = local_7b8;
          pfVar36 = local_810;
          *(undefined8 *)
           ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               0x1452eb6f2;
          fVar46 = (float)FUN_144f37488(pvVar32,pfVar36,iVar20);
          pvVar32 = local_6f0;
          pfVar36 = local_810;
          lVar8 = *local_7e8;
          lVar9 = local_7e8[1];
          lVar10 = local_7e8[2];
          lVar11 = local_7e8[3];
          lVar12 = local_7e8[4];
          lVar13 = local_7e8[5];
          lVar37 = local_7e8[6];
          local_638 = local_798;
          lStack_630 = lStack_790;
          local_628 = local_788;
          uStack_620 = uStack_780;
          local_618 = local_778;
          uStack_610 = uStack_770;
          local_608 = local_768;
          uStack_600 = uStack_760;
          local_5f8 = local_758;
          uStack_5f0 = uStack_750;
          *(undefined8 *)
           ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               0x1452eb771;
          memcpy(pvVar32,pfVar36,sVar44);
          pvVar32 = local_6e8;
          pfVar36 = local_820;
          *(undefined8 *)
           ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               0x1452eb784;
          memcpy(pvVar32,pfVar36,sVar44);
          pvVar32 = local_6e0;
          if (uVar40 != (int)local_838 - 1U) {
            *(undefined8 *)
             ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
                 0x1452eb7a0;
            memcpy(pvVar32,pfVar42 + lVar33,sVar44);
          }
          pvVar32 = (void *)(iVar43 + lVar31);
          _Size = (size_t)((int)lVar28 - iVar43);
          local_800 = _Size;
          local_6b0 = pvVar32;
          *(undefined8 *)
           ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               0x1452eb7e5;
          memcpy(local_5e8,pvVar32,_Size);
          pvVar32 = local_7b8;
          pfVar36 = local_810;
          *local_7e8 = lVar31;
          local_7e8[1] = lVar28;
          *(int *)(local_7e8 + 2) = (int)lVar15;
          *(undefined4 *)((longlong)local_7e8 + 0x14) = uVar25;
          *(int *)(local_7e8 + 3) = (int)lVar16;
          *(int *)((longlong)local_7e8 + 0x1c) = iVar43;
          local_7e8[4] = local_698;
          local_7e8[5] = lStack_690;
          local_7e8[6] = (longlong)local_7f8;
          local_798 = local_688;
          lStack_790 = lStack_680;
          local_788 = local_678;
          uStack_780 = uStack_670;
          local_778 = local_668;
          uStack_770 = uStack_660;
          local_768 = local_658;
          uStack_760 = uStack_650;
          local_758 = local_648;
          uStack_750 = uStack_640;
          *(undefined8 *)
           ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               0x1452eb860;
          memcpy(pfVar36,pvVar32,sVar44);
          pvVar32 = local_7c0;
          pfVar36 = local_820;
          *(undefined8 *)
           ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               0x1452eb870;
          memcpy(pfVar36,pvVar32,sVar44);
          lVar31 = local_7d8;
          pfVar36 = local_7e0;
          uVar35 = local_804;
          if (uVar40 == uStack_7ec) {
            *(int *)((longlong)&lStack_870 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1)
                 = param_12;
            *(int *)((longlong)aiStack_878 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1)
                 = local_808;
            *(undefined8 *)
             ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
                 0x1452eb89a;
            FUN_1452edae0(lVar31,pfVar42,pfVar36,uVar35);
          }
          fVar47 = local_838;
          *(uint *)((longlong)auStack_848 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               uVar34 | uVar39;
          pfVar24 = local_810;
          pfVar36 = local_820;
          local_758 = CONCAT44(local_758._4_4_,1);
          pfVar23 = (float *)0x0;
          if (uVar40 != (int)fVar47 - 1U) {
            pfVar23 = pfVar42 + lVar33;
          }
          local_7f8 = pfVar42 + lVar33;
          *(ulonglong *)
           ((longlong)alStack_858 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1 + 8) =
               local_818;
          *(float **)((longlong)alStack_858 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1)
               = pfVar23;
          *(undefined4 *)
           ((longlong)&lStack_860 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               param_18;
          *(float **)((longlong)&lStack_868 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1)
               = local_7c8;
          *(int *)((longlong)&lStack_870 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               local_834;
          *(int *)((longlong)aiStack_878 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               iVar41;
          *(undefined8 *)
           ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               0x1452eb90b;
          iVar43 = FUN_1452ed648(&local_798,pfVar24,pfVar36,iVar20);
          pvVar32 = local_7c0;
          *(undefined8 *)
           ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               0x1452eb91d;
          fVar47 = (float)FUN_144f37488(pvVar32,pfVar36,iVar20);
          pvVar32 = local_7b8;
          *(undefined8 *)
           ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               0x1452eb936;
          fVar48 = (float)FUN_144f37488(pvVar32,pfVar24,iVar20);
          pvVar32 = local_6f0;
          iVar30 = local_828;
          if (fVar48 * fVar50 + fVar47 * fVar49 <= fVar46 * fVar50 + fVar45 * fVar49) {
            *local_7e8 = lVar8;
            local_7e8[1] = lVar9;
            local_798 = local_638;
            lStack_790 = lStack_630;
            local_7e8[2] = lVar10;
            local_7e8[3] = lVar11;
            local_778 = local_618;
            uStack_770 = uStack_610;
            local_788 = local_628;
            uStack_780 = uStack_620;
            local_7e8[4] = lVar12;
            local_7e8[5] = lVar13;
            local_758 = local_5f8;
            uStack_750 = uStack_5f0;
            local_7e8[6] = lVar37;
            local_768 = local_608;
            uStack_760 = uStack_600;
            *(undefined8 *)
             ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
                 0x1452eb9bd;
            memcpy(pfVar24,pvVar32,sVar44);
            pvVar32 = local_6e8;
            *(undefined8 *)
             ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
                 0x1452eb9cf;
            memcpy(pfVar36,pvVar32,sVar44);
            pvVar32 = local_6e0;
            pfVar42 = local_7f8;
            if (uVar40 != (int)local_838 - 1U) {
              *(undefined8 *)
               ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
                   0x1452eb9eb;
              memcpy(pfVar42,pvVar32,sVar44);
            }
            pvVar32 = local_6b0;
            sVar44 = local_800;
            *(undefined8 *)
             ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
                 0x1452eba02;
            memcpy(pvVar32,local_5e8,sVar44);
            iVar43 = iVar30;
          }
          uVar18 = (undefined1)iVar43;
          iVar43 = local_808;
          uVar19 = uVar18;
        }
      }
      else {
        if (uVar40 == param_13) {
          param_12 = 0;
          if (local_82c != 0) {
            lVar31 = (longlong)((int)local_7c8 - local_7f0);
            if (0 < (int)local_7c8 - local_7f0) {
              lVar28 = (longlong)local_7e0 - (longlong)pfVar42;
              pfVar23 = pfVar42;
              do {
                *pfVar23 = (*(float *)(lVar28 + (longlong)pfVar23) + *pfVar23) * 0.5;
                pfVar23 = pfVar23 + 1;
                lVar31 = lVar31 + -1;
              } while (lVar31 != 0);
              goto LAB_1452eb460;
            }
          }
          goto LAB_1452eb561;
        }
LAB_1452eb460:
        if (param_12 == 0) goto LAB_1452eb561;
        lVar33 = lVar33 - local_7d0;
        if (uVar40 == (int)local_838 - 1U) {
          pfVar36 = (float *)0x0;
        }
        else {
          pfVar36 = pfVar42 + lVar33;
        }
        iVar30 = (int)local_800;
        lVar31 = (longlong)(int)local_800;
        *(uint *)((longlong)auStack_848 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
             uVar39;
        pfVar24 = local_810;
        pfVar23 = (float *)0x0;
        if (iVar30 != -1) {
          pfVar23 = pfVar42 + lVar31;
        }
        local_828 = iVar41 / 2;
        *(ulonglong *)
         ((longlong)alStack_858 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1 + 8) =
             local_818;
        *(undefined4 *)
         ((longlong)alStack_858 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
             0x3f800000;
        *(float **)((longlong)&lStack_860 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
             pfVar36;
        *(undefined4 *)
         ((longlong)&lStack_868 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) = param_18;
        iVar30 = local_834;
        *(float **)((longlong)&lStack_870 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
             pfVar23;
        *(int *)((longlong)aiStack_878 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
             iVar30;
        *(undefined8 *)
         ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
             0x1452eb4e9;
        uVar18 = FUN_1452ed2d4(&local_798,pfVar24,iVar20,iVar41 / 2);
        pfVar42 = local_7e0;
        iVar30 = local_828;
        if (uVar40 == (int)local_838 - 1U) {
          pfVar36 = (float *)0x0;
        }
        else {
          pfVar36 = local_7e0 + lVar33;
        }
        iVar29 = (int)local_800;
        lVar33 = (longlong)(int)local_800;
        *(uint *)((longlong)auStack_848 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
             uVar34;
        pfVar24 = (float *)0x0;
        if (iVar29 != -1) {
          pfVar24 = pfVar42 + lVar33;
        }
        *(ulonglong *)
         ((longlong)alStack_858 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1 + 8) =
             local_818;
        *(undefined4 *)
         ((longlong)alStack_858 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
             0x3f800000;
        *(float **)((longlong)&lStack_860 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
             pfVar36;
        pfVar42 = local_820;
        *(undefined4 *)
         ((longlong)&lStack_868 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) = param_18;
        iVar29 = local_834;
        *(float **)((longlong)&lStack_870 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
             pfVar24;
        *(int *)((longlong)aiStack_878 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
             iVar29;
        *(undefined8 *)
         ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
             0x1452eb55c;
        uVar19 = FUN_1452ed2d4(&local_798,pfVar42,iVar20,iVar30);
      }
      *(undefined1 *)(local_6a8 + local_6d8) = uVar18;
      *(undefined1 *)(local_718 + -1 + local_6d8) = uVar19;
      param_16 = *local_7a8 + local_744 + local_740;
      uVar22 = (ulonglong)local_804;
      local_6d8 = local_6d8 + local_6a0;
      uStack_750 = uStack_750 & 0xffffffff00000000;
      local_7a8 = local_7a8 + 1;
      param_19 = param_19 + -1;
      uVar40 = uVar40 + 1;
      local_7b0 = local_7b0 + 1;
      local_710 = local_710 + 1;
      local_7f8 = (float *)CONCAT44(local_7f8._4_4_,(uint)(iVar20 * 8 < iVar41));
      pfVar42 = local_6d0;
    } while ((int)uVar40 < (int)local_838);
    uVar25 = (undefined4)uStack_760;
  }
  *local_6c8 = uVar25;
  uVar22 = local_e8 ^ (ulonglong)&local_838;
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
       &UNK_1452ebac1;
  FUN_144d8e3a0(uVar22);
}



// FUNCTION 1452ebc1c FUN_1452ebc1c body=765 status=ok
// SIG undefined FUN_1452ebc1c(void)

void FUN_1452ebc1c(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
                  int param_6,int param_7,int param_8,longlong param_9,longlong param_10,
                  longlong param_11,longlong param_12,uint param_13,undefined4 param_14)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int *piVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  longlong local_68;
  
  uVar11 = (ulonglong)param_7;
  if (param_7 < param_8) {
    bVar5 = (byte)param_4;
    iVar16 = 1 << (bVar5 & 0x1f);
    piVar6 = (int *)(param_12 + uVar11 * 4);
    iVar14 = param_5 * param_7;
    local_68 = uVar11 * 2;
    do {
      uVar12 = (int)*(short *)(local_68 + 2 + *(longlong *)(param_1 + 0x20)) -
               (int)*(short *)(local_68 + *(longlong *)(param_1 + 0x20));
      dVar18 = exp((double)((float)(int)((*piVar6 + 1U) / uVar12 >> (bVar5 & 0x1f)) * -0.125) *
                   0.6931471805599453);
      iVar3 = uVar12 << (bVar5 & 0x1f);
      dVar19 = sqrt((double)iVar3);
      iVar13 = 0;
      param_7 = 0;
      do {
        bVar2 = false;
        iVar10 = (int)uVar11;
        lVar9 = (longlong)(*(int *)(param_1 + 8) * iVar13 + iVar10);
        fVar17 = *(float *)(param_10 + lVar9 * 4);
        fVar21 = *(float *)(param_11 + lVar9 * 4);
        if (param_5 == 1) {
          lVar7 = (longlong)(*(int *)(param_1 + 8) + iVar10);
          fVar1 = *(float *)(param_10 + lVar7 * 4);
          if (fVar17 <= fVar1) {
            fVar17 = fVar1;
          }
          fVar1 = *(float *)(param_11 + lVar7 * 4);
          if (fVar21 <= fVar1) {
            fVar21 = fVar1;
          }
        }
        if (fVar21 <= fVar17) {
          fVar17 = fVar21;
        }
        fVar17 = *(float *)(param_9 + lVar9 * 4) - fVar17;
        fVar21 = 0.0;
        if (0.0 <= fVar17) {
          fVar21 = fVar17;
        }
        dVar20 = exp((double)-fVar21 * 0.6931471805599453);
        fVar17 = (float)dVar20 + (float)dVar20;
        if (param_4 == 3) {
          fVar17 = fVar17 * 1.4142135;
        }
        fVar21 = (float)dVar18 * 0.5;
        if (fVar17 <= (float)dVar18 * 0.5) {
          fVar21 = fVar17;
        }
        iVar15 = 0;
        fVar21 = fVar21 * (1.0 / (float)dVar19);
        lVar9 = param_2 + ((longlong)
                           ((int)*(short *)(local_68 + *(longlong *)(param_1 + 0x20)) <<
                           (bVar5 & 0x1f)) + (longlong)param_7) * 4;
        if (0 < iVar16) {
          do {
            if ((*(byte *)((iVar14 + iVar13) + param_3) & (byte)(1 << ((byte)iVar15 & 0x1f))) == 0)
            {
              iVar8 = 0;
              if (0 < (int)uVar12) {
                do {
                  param_13 = param_13 * 0x19660d + 0x3c6ef35f;
                  fVar17 = fVar21;
                  if ((param_13 >> 0xf & 1) == 0) {
                    fVar17 = -fVar21;
                  }
                  iVar4 = iVar8 << (bVar5 & 0x1f);
                  iVar8 = iVar8 + 1;
                  *(float *)(lVar9 + (longlong)(iVar4 + iVar15) * 4) = fVar17;
                } while (iVar8 < (int)uVar12);
              }
              bVar2 = true;
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < iVar16);
          if (bVar2) {
            FUN_1452ef944(lVar9,iVar3,0x3f800000,param_14);
          }
        }
        iVar13 = iVar13 + 1;
        param_7 = param_7 + param_6;
      } while (iVar13 < param_5);
      uVar11 = (ulonglong)(iVar10 + 1U);
      piVar6 = piVar6 + 1;
      iVar14 = iVar14 + param_5;
      local_68 = local_68 + 2;
    } while ((int)(iVar10 + 1U) < param_8);
  }
  return;
}



// FUNCTION 1452ebf1c FUN_1452ebf1c body=12 status=ok
// SIG undefined FUN_1452ebf1c(void)

int FUN_1452ebf1c(int param_1)

{
  return param_1 * 0x19660d + 0x3c6ef35f;
}



// FUNCTION 1452ebf28 FUN_1452ebf28 body=100 status=ok
// SIG undefined FUN_1452ebf28(void)

ulonglong FUN_1452ebf28(float param_1,longlong param_2,longlong param_3,int param_4,uint param_5)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = 0;
  uVar5 = uVar2;
  if (0 < param_4) {
    do {
      if (param_1 < *(float *)(param_2 + uVar2 * 4)) break;
      uVar5 = (ulonglong)((int)uVar5 + 1);
      uVar2 = uVar2 + 1;
    } while ((longlong)uVar2 < (longlong)param_4);
  }
  lVar3 = (longlong)(int)param_5;
  iVar4 = (int)uVar5;
  iVar1 = iVar4 - param_5;
  if ((int)param_5 < iVar4) {
    if (param_1 < *(float *)(param_2 + lVar3 * 4) + *(float *)(param_3 + lVar3 * 4)) {
      uVar5 = (ulonglong)param_5;
    }
    iVar4 = (int)uVar5;
    iVar1 = iVar4 - param_5;
  }
  if ((SBORROW4(iVar4,param_5) != iVar1 < 0) &&
     (*(float *)(param_2 + -4 + lVar3 * 4) - *(float *)(param_3 + -4 + lVar3 * 4) < param_1)) {
    uVar5 = (ulonglong)param_5;
  }
  return uVar5;
}



// FUNCTION 1452ebf8c FUN_1452ebf8c body=182 status=ok
// SIG undefined FUN_1452ebf8c(void)

void FUN_1452ebf8c(longlong param_1,float *param_2,longlong param_3,longlong param_4,int param_5,
                  int param_6)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  double dVar4;
  
  fVar1 = *(float *)(param_4 + (longlong)param_5 * 4);
  fVar2 = *(float *)(param_4 + (longlong)(*(int *)(param_1 + 8) + param_5) * 4);
  dVar4 = sqrt((double)(fVar1 * fVar1 + 1e-15 + fVar2 * fVar2));
  lVar3 = (longlong)param_6;
  if (0 < lVar3) {
    param_3 = param_3 - (longlong)param_2;
    do {
      *param_2 = (fVar1 / ((float)dVar4 + 1e-15)) * *param_2 +
                 (fVar2 / ((float)dVar4 + 1e-15)) * *(float *)(param_3 + (longlong)param_2);
      param_2 = param_2 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1452ec044 FUN_1452ec044 body=335 status=ok
// SIG undefined FUN_1452ec044(void)

void FUN_1452ec044(void *param_1,float *param_2,float param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float local_res18 [4];
  float local_58 [20];
  
  local_res18[0] = 0.0;
  local_58[0] = 0.0;
  lVar1 = (longlong)param_4;
  FUN_144f37528(param_2,param_1,param_2,param_4,local_res18,local_58);
  fVar3 = param_3 * param_3 + local_58[0];
  fVar7 = local_res18[0] * param_3 + local_res18[0] * param_3;
  fVar6 = fVar3 - fVar7;
  fVar7 = fVar7 + fVar3;
  if ((fVar7 < 0.0006) || (fVar6 < 0.0006)) {
    memcpy(param_2,param_1,lVar1 << 2);
  }
  else {
    dVar4 = sqrt((double)fVar6);
    dVar5 = sqrt((double)fVar7);
    if (0 < param_4) {
      lVar2 = (longlong)param_1 - (longlong)param_2;
      do {
        fVar3 = *param_2;
        fVar6 = param_3 * *(float *)(lVar2 + (longlong)param_2);
        *(float *)(lVar2 + (longlong)param_2) = (fVar6 - fVar3) * (1.0 / (float)dVar4);
        *param_2 = (fVar3 + fVar6) * (1.0 / (float)dVar5);
        param_2 = param_2 + 1;
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0);
    }
  }
  return;
}



// FUNCTION 1452ec194 FUN_1452ec194 body=341 status=ok
// SIG undefined FUN_1452ec194(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452ec194(undefined4 *param_1,uint param_2,uint param_3,int param_4)

{
  undefined4 *_Src;
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  size_t _Size;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined8 auStack_60 [5];
  ulonglong local_38 [2];
  
  local_38[0] = DAT_14c707940 ^ (ulonglong)local_38;
  lVar6 = (longlong)(int)param_3;
  _Size = (longlong)(int)(param_2 * param_3) * 4;
  uVar4 = _Size + 0xf;
  if (uVar4 <= _Size) {
    uVar4 = 0xffffffffffffff0;
  }
  auStack_60[0] = 0x1452ec1f4;
  lVar2 = -(uVar4 & 0xfffffffffffffff0);
  _Src = (undefined4 *)((longlong)local_38 + lVar2);
  if ((int)param_3 < 1) {
    *(undefined8 *)((longlong)auStack_60 + lVar2) = 0x1452ec21a;
    FUN_144bca940("assertion failed: stride>0","../../../third_party/opus/src/celt/bands.c");
  }
  if (param_4 == 0) {
    if (0 < (int)param_3) {
      uVar4 = (ulonglong)param_3;
      puVar7 = param_1;
      puVar10 = _Src;
      do {
        uVar5 = (ulonglong)param_2;
        puVar13 = puVar10;
        puVar14 = puVar7;
        if (0 < (int)param_2) {
          do {
            *puVar13 = *puVar14;
            uVar5 = uVar5 - 1;
            puVar13 = puVar13 + 1;
            puVar14 = puVar14 + lVar6;
          } while (uVar5 != 0);
        }
        puVar10 = puVar10 + (int)param_2;
        puVar7 = puVar7 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  else {
    iVar8 = 0;
    piVar9 = (int *)("assertion failed: C*ebits[j]<<BITRES == bits[j]" + lVar6 * 4 + 0x28);
    lVar12 = lVar6;
    if (0 < (int)param_3) {
      do {
        iVar11 = 0;
        if (0 < (int)param_2) {
          puVar7 = param_1 + iVar8;
          do {
            iVar3 = *piVar9 * param_2 + iVar11;
            iVar11 = iVar11 + 1;
            uVar1 = *puVar7;
            puVar7 = puVar7 + lVar6;
            _Src[iVar3] = uVar1;
          } while (iVar11 < (int)param_2);
        }
        iVar8 = iVar8 + 1;
        piVar9 = piVar9 + 1;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
  }
  *(undefined8 *)((longlong)auStack_60 + lVar2) = 0x1452ec2dd;
  memcpy(param_1,_Src,_Size);
  uVar4 = local_38[0] ^ (ulonglong)local_38;
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)auStack_60 + lVar2) = &UNK_1452ec2e9;
  FUN_144d8e3a0(uVar4);
}



// FUNCTION 1452ec304 FUN_1452ec304 body=302 status=ok
// SIG undefined FUN_1452ec304(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452ec304(undefined4 *param_1,uint param_2,uint param_3,int param_4)

{
  undefined4 *_Src;
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  size_t _Size;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  longlong lVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  undefined8 auStack_60 [5];
  ulonglong local_38 [2];
  
  local_38[0] = DAT_14c707940 ^ (ulonglong)local_38;
  _Size = (longlong)(int)(param_2 * param_3) * 4;
  uVar4 = _Size + 0xf;
  if (uVar4 <= _Size) {
    uVar4 = 0xffffffffffffff0;
  }
  auStack_60[0] = 0x1452ec35f;
  lVar2 = -(uVar4 & 0xfffffffffffffff0);
  _Src = (undefined4 *)((longlong)local_38 + lVar2);
  if (param_4 == 0) {
    if (0 < (int)param_3) {
      uVar4 = (ulonglong)param_3;
      puVar8 = _Src;
      puVar10 = param_1;
      do {
        if (0 < (int)param_2) {
          puVar12 = puVar10;
          uVar13 = (ulonglong)param_2;
          puVar14 = puVar8;
          do {
            uVar1 = *puVar12;
            puVar12 = puVar12 + 1;
            *puVar14 = uVar1;
            puVar14 = puVar14 + (int)param_3;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        puVar10 = puVar10 + (int)param_2;
        puVar8 = puVar8 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  else {
    lVar5 = (longlong)(int)param_3;
    iVar6 = 0;
    piVar7 = (int *)("assertion failed: C*ebits[j]<<BITRES == bits[j]" + lVar5 * 4 + 0x28);
    lVar11 = lVar5;
    if (0 < lVar5) {
      do {
        iVar9 = 0;
        if (0 < (int)param_2) {
          puVar8 = _Src + iVar6;
          do {
            iVar3 = *piVar7 * param_2 + iVar9;
            iVar9 = iVar9 + 1;
            *puVar8 = param_1[iVar3];
            puVar8 = puVar8 + lVar5;
          } while (iVar9 < (int)param_2);
        }
        iVar6 = iVar6 + 1;
        piVar7 = piVar7 + 1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
  }
  *(undefined8 *)((longlong)auStack_60 + lVar2) = 0x1452ec426;
  memcpy(param_1,_Src,_Size);
  uVar4 = local_38[0] ^ (ulonglong)local_38;
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)auStack_60 + lVar2) = &UNK_1452ec432;
  FUN_144d8e3a0(uVar4);
}



// FUNCTION 1452ec44c FUN_1452ec44c body=2123 status=ok
// SIG undefined FUN_1452ec44c(void)

void FUN_1452ec44c(int *param_1,undefined4 *param_2,longlong param_3,float *param_4,uint param_5,
                  int *param_6,byte param_7,int param_8,int param_9,int param_10,uint *param_11)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  float *pfVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  short sVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  float fVar23;
  
  lVar2 = *(longlong *)(param_1 + 2);
  uVar14 = (ulonglong)param_5;
  iVar17 = 0;
  iVar11 = *param_1;
  iVar15 = param_1[4];
  uVar7 = 0;
  iVar22 = param_1[5];
  uVar10 = 0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0xc);
  iVar8 = (int)*(short *)(*(longlong *)(lVar2 + 0x40) + (longlong)iVar15 * 2) + param_9 * 8;
  if ((param_10 == 0) || (iVar20 = 0x10, param_5 != 2)) {
    iVar20 = 4;
  }
  iVar19 = param_5 * 2 + -1;
  if ((param_10 != 0) && (param_5 == 2)) {
    iVar19 = 2;
  }
  uVar6 = (iVar19 * ((iVar8 >> 1) - iVar20) + *param_6) / iVar19;
  uVar13 = (*param_6 - iVar8) - 0x20;
  if ((int)uVar13 < (int)uVar6) {
    uVar6 = uVar13;
  }
  if (0x40 < (int)uVar6) {
    uVar6 = 0x40;
  }
  if ((int)uVar6 < 4) {
    uVar13 = 1;
  }
  else {
    uVar13 = ((int)(short)(&DAT_149d32390)[uVar6 & 7] >> (0xeU - (char)((int)uVar6 >> 3) & 0x1f)) +
             1U & 0xfffffffe;
    if (0x100 < (int)uVar13) {
      FUN_144bca940("assertion failed: qn <= 256","../../../third_party/opus/src/celt/bands.c",0x29d
                   );
    }
  }
  if ((param_10 != 0) && (iVar22 <= iVar15)) {
    uVar13 = 1;
  }
  if (iVar11 != 0) {
    uVar7 = FUN_1452ef9bc(param_3,param_4,param_10,uVar14,param_1[0xf]);
  }
  iVar8 = FUN_1452e891c(uVar3);
  if (uVar13 == 1) {
    uVar16 = uVar10;
    if (param_10 != 0) {
      if (iVar11 != 0) {
        if (((0x2000 < (int)uVar7) && (uVar10 = 0, param_1[0x11] == 0)) &&
           (uVar10 = 1, pfVar12 = param_4, 0 < (int)param_5)) {
          do {
            *pfVar12 = -*pfVar12;
            uVar14 = uVar14 - 1;
            pfVar12 = pfVar12 + 1;
          } while (uVar14 != 0);
        }
        FUN_1452ebf8c(lVar2,param_3,param_4,uVar4,iVar15,param_5);
      }
      if ((*param_6 < 0x11) || (param_1[10] < 0x11)) {
        uVar10 = 0;
      }
      else if (iVar11 == 0) {
        uVar10 = FUN_144f2f528(uVar3,2);
      }
      else {
        FUN_144f35680(uVar3,uVar10,2);
      }
      uVar7 = 0;
      uVar16 = 0;
      if (param_1[0x11] == 0) {
        uVar16 = uVar10;
      }
    }
    goto LAB_1452ecb08;
  }
  if (iVar11 == 0) {
LAB_1452ec825:
    uVar6 = uVar7;
    if (param_10 == 0) goto LAB_1452ec790;
LAB_1452ec832:
    uVar6 = uVar7;
    if ((int)param_5 < 3) goto LAB_1452ec790;
    iVar19 = (int)uVar13 / 2;
    iVar20 = (iVar19 + 1) * 3;
    iVar22 = iVar19 + iVar20;
    if (iVar11 == 0) {
      iVar9 = FUN_144f2f484(uVar3,iVar22);
      if (iVar9 < iVar20) {
        uVar7 = iVar9 / 3;
      }
      else {
        uVar7 = iVar9 + (iVar19 + 1) * -3 + 1 + iVar19;
      }
      iVar9 = uVar7 + iVar19 * 2;
      iVar20 = iVar9 + 3;
      if ((int)uVar7 <= iVar19) {
        iVar20 = (uVar7 + 1) * 3;
      }
      iVar9 = iVar9 + 2;
      if ((int)uVar7 <= iVar19) {
        iVar9 = uVar7 * 3;
      }
      goto LAB_1452ec93c;
    }
    iVar20 = uVar7 + (iVar20 - iVar19);
    if ((int)uVar7 <= iVar19) {
      iVar20 = (uVar7 + 1) * 3;
    }
    iVar9 = uVar7 + (iVar19 + 1) * 2;
    if ((int)uVar7 <= iVar19) {
      iVar9 = uVar7 * 3;
    }
LAB_1452ec804:
    FUN_144f3557c(uVar3,iVar9,iVar20,iVar22);
  }
  else {
    if ((param_10 != 0) && (param_1[0x10] != 0)) {
      iVar22 = 0x7fff;
      if ((int)uVar7 < 0x2001) {
        iVar22 = -0x7fff;
      }
      uVar7 = (int)(uVar7 * uVar13 + iVar22 / (int)uVar13) >> 0xe;
      if ((int)uVar7 < 0) {
        uVar7 = 0;
      }
      if ((int)uVar13 <= (int)uVar7) {
        uVar7 = uVar13 - 1;
      }
      if (-1 < param_1[0x10]) {
        uVar7 = uVar7 + 1;
      }
      goto LAB_1452ec825;
    }
    uVar7 = (int)(uVar7 * uVar13 + 0x2000) >> 0xe;
    if (param_10 != 0) goto LAB_1452ec832;
    uVar6 = uVar7;
    if (((param_1[0x12] != 0) && (0 < (int)uVar7)) && ((int)uVar7 < (int)uVar13)) {
      sVar5 = (short)((uVar7 << 0xe) / uVar13);
      sVar18 = (short)((int)sVar5 * (int)sVar5 + 0x1000 >> 0xd);
      iVar22 = (int)sVar18;
      sVar5 = (short)((int)(short)(0x4000 - sVar5) * (int)(short)(0x4000 - sVar5) + 0x1000 >> 0xd);
      iVar20 = (int)sVar5;
      sVar5 = FUN_1452ea4fc((int)(short)(((short)((short)((short)((short)((short)(iVar20 * -0x272 +
                                                                                  0x4000 >> 0xf) +
                                                                         0x2055) * iVar20 + 0x4000
                                                                 >> 0xf) + -0x1de3) * iVar20 +
                                                  0x4000 >> 0xf) - sVar5) + -0x8000),
                            (int)(short)(((short)((short)((short)((short)((short)(iVar22 * -0x272 +
                                                                                  0x4000 >> 0xf) +
                                                                         0x2055) * iVar22 + 0x4000
                                                                 >> 0xf) + -0x1de3) * iVar22 +
                                                  0x4000 >> 0xf) - sVar18) + -0x8000));
      iVar22 = (int)sVar5 * (int)(short)((short)param_5 * 0x80 + -0x80) + 0x4000 >> 0xf;
      uVar6 = uVar13;
      if ((iVar22 <= *param_6) && (uVar6 = uVar7, iVar22 < -*param_6)) {
        uVar7 = 0;
        goto LAB_1452ec825;
      }
    }
LAB_1452ec790:
    uVar7 = uVar6;
    if ((param_8 < 2) && (param_10 == 0)) {
      iVar19 = (int)uVar13 >> 1;
      iVar20 = iVar19 + 1;
      iVar22 = iVar20 * iVar20;
      if (iVar11 != 0) {
        uVar21 = uVar13 - uVar6;
        iVar9 = iVar22 - ((int)((uVar21 + 2) * (uVar21 + 1)) >> 1);
        if ((int)uVar6 <= iVar19) {
          iVar9 = (int)((uVar6 + 1) * uVar6) >> 1;
          uVar21 = uVar6;
        }
        iVar20 = uVar21 + 1 + iVar9;
        goto LAB_1452ec804;
      }
      iVar9 = FUN_144f2f484(uVar3);
      if (iVar9 < iVar19 * iVar20 >> 1) {
        iVar20 = FUN_145515490(iVar9 * 8 + 1);
        uVar7 = iVar20 - 1U >> 1;
        iVar20 = uVar7 + 1;
        iVar9 = (int)(iVar20 * uVar7) >> 1;
      }
      else {
        iVar20 = FUN_145515490((iVar22 - iVar9) * 8 + -7);
        uVar7 = (uVar13 * 2 + 2) - iVar20 >> 1;
        iVar20 = (uVar13 - uVar7) + 1;
        iVar9 = iVar22 - ((int)(((uVar13 - uVar7) + 2) * iVar20) >> 1);
      }
      iVar20 = iVar9 + iVar20;
LAB_1452ec93c:
      FUN_144f2f4fc(uVar3,iVar9,iVar20,iVar22);
    }
    else if (iVar11 == 0) {
      uVar7 = FUN_144f2f5c4(uVar3);
    }
    else {
      FUN_144f35770(uVar3,uVar6,uVar13 + 1);
    }
  }
  uVar16 = 0;
  if ((int)uVar7 < 0) {
    FUN_144bca940("assertion failed: itheta>=0","../../../third_party/opus/src/celt/bands.c",0x346);
  }
  uVar7 = (uVar7 << 0xe) / uVar13;
  if ((iVar11 != 0) && (param_10 != 0)) {
    if (uVar7 == 0) {
      FUN_1452ebf8c(lVar2,param_3,param_4,uVar4,iVar15,param_5);
    }
    else if (0 < (int)param_5) {
      param_3 = param_3 - (longlong)param_4;
      do {
        fVar1 = *param_4;
        fVar23 = *(float *)(param_3 + (longlong)param_4) * 0.70710677;
        *(float *)(param_3 + (longlong)param_4) = fVar1 * 0.70710677 + fVar23;
        *param_4 = fVar1 * 0.70710677 - fVar23;
        param_4 = param_4 + 1;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
LAB_1452ecb08:
  iVar11 = FUN_1452e891c(uVar3);
  *param_6 = *param_6 - (iVar11 - iVar8);
  if (uVar7 == 0) {
    iVar22 = 0x7fff;
    iVar15 = -0x4000;
    *param_11 = *param_11 & (1 << (param_7 & 0x1f)) - 1U;
  }
  else {
    iVar15 = 0x4000;
    if (uVar7 == 0x4000) {
      iVar22 = 0;
      iVar17 = 0x7fff;
      *param_11 = *param_11 & (1 << (param_7 & 0x1f)) + -1 << (param_7 & 0x1f);
    }
    else {
      sVar5 = (short)uVar7;
      sVar18 = (short)((int)sVar5 * (int)sVar5 + 0x1000 >> 0xd);
      iVar15 = (int)sVar18;
      iVar22 = (int)(short)(((short)((short)((short)((short)((short)(iVar15 * -0x272 + 0x4000 >> 0xf
                                                                    ) + 0x2055) * iVar15 + 0x4000 >>
                                                    0xf) + -0x1de3) * iVar15 + 0x4000 >> 0xf) -
                            sVar18) + -0x8000);
      sVar5 = (short)((int)(short)(0x4000 - sVar5) * (int)(short)(0x4000 - sVar5) + 0x1000 >> 0xd);
      iVar15 = (int)sVar5;
      iVar17 = (int)(short)(((short)((short)((short)((short)((short)(iVar15 * -0x272 + 0x4000 >> 0xf
                                                                    ) + 0x2055) * iVar15 + 0x4000 >>
                                                    0xf) + -0x1de3) * iVar15 + 0x4000 >> 0xf) -
                            sVar5) + -0x8000);
      sVar5 = FUN_1452ea4fc(iVar17,iVar22);
      iVar15 = (int)sVar5 * (int)(short)((short)param_5 * 0x80 + -0x80) + 0x4000 >> 0xf;
    }
  }
  param_2[4] = uVar7;
  *param_2 = uVar16;
  param_2[1] = iVar22;
  param_2[2] = iVar17;
  param_2[3] = iVar15;
  param_2[5] = iVar11 - iVar8;
  return;
}



// FUNCTION 1452ecc98 FUN_1452ecc98 body=228 status=ok
// SIG undefined FUN_1452ecc98(void)

void FUN_1452ecc98(int *param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  float fVar7;
  
  iVar6 = 0;
  iVar1 = *param_1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  pfVar5 = param_2;
  do {
    uVar4 = 0;
    if (7 < param_1[10]) {
      if (iVar1 == 0) {
        uVar4 = FUN_144f2f70c(uVar2,1);
      }
      else {
        bVar3 = *pfVar5 <= 0.0 && *pfVar5 != 0.0;
        uVar4 = (uint)bVar3;
        FUN_144f35820(uVar2,bVar3,1);
      }
      param_1[10] = param_1[10] + -8;
    }
    if (param_1[1] != 0) {
      if (uVar4 == 0) {
        fVar7 = 1.0;
      }
      else {
        fVar7 = -1.0;
      }
      *pfVar5 = fVar7;
    }
    iVar6 = iVar6 + 1;
    pfVar5 = param_3;
  } while (iVar6 < (int)((param_3 != (float *)0x0) + 1));
  if (param_5 != (float *)0x0) {
    *param_5 = *param_2;
  }
  return;
}



// FUNCTION 1452ecd7c FUN_1452ecd7c body=1366 status=ok
// SIG undefined FUN_1452ecd7c(void)

uint FUN_1452ecd7c(int *param_1,float *param_2,int param_3,uint param_4,int param_5,longlong param_6
                  ,int param_7,float param_8,uint param_9)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  byte *pbVar11;
  float *pfVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  float fVar17;
  uint local_res20 [2];
  undefined1 local_70 [4];
  int local_6c;
  int local_68;
  int local_64;
  uint local_60;
  int local_5c;
  
  uVar8 = 0;
  lVar16 = (longlong)param_3;
  uVar3 = 0xffffffff;
  lVar9 = *(longlong *)(param_1 + 2);
  pbVar11 = (byte *)((longlong)
                     *(short *)(*(longlong *)(lVar9 + 0x88) +
                               (longlong)((param_7 + 1) * *(int *)(lVar9 + 8) + param_1[4]) * 2) +
                    *(longlong *)(lVar9 + 0x90));
  local_res20[0] = param_4;
  if (((param_7 == -1) || ((int)param_4 <= (int)(pbVar11[*pbVar11] + 0xc))) || (param_3 < 3)) {
    uVar13 = (ulonglong)*pbVar11;
    iVar14 = param_4 - 1;
    lVar9 = 6;
    uVar10 = uVar8;
    do {
      uVar2 = (int)((int)uVar10 + 1 + (uint)uVar13) >> 1;
      if ((int)(uint)pbVar11[(int)uVar2] < iVar14) {
        uVar10 = (ulonglong)uVar2;
        uVar2 = (uint)uVar13;
      }
      uVar13 = (ulonglong)(int)uVar2;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    if ((int)uVar10 != 0) {
      uVar3 = (uint)pbVar11[(int)uVar10];
    }
    if ((int)((uint)pbVar11[uVar13] - iVar14) < (int)(iVar14 - uVar3)) {
      uVar10 = (ulonglong)uVar2;
    }
    uVar3 = (uint)uVar10;
    lVar9 = (longlong)(int)uVar3;
    uVar13 = uVar8;
    if (uVar3 != 0) {
      uVar13 = (ulonglong)(pbVar11[lVar9] + 1);
    }
    iVar14 = param_1[10] - (int)uVar13;
    param_1[10] = iVar14;
    if (iVar14 < 0) {
      lVar1 = *(longlong *)(param_1 + 2);
      do {
        uVar3 = (uint)uVar10;
        if (lVar9 < 1) break;
        iVar14 = iVar14 + (int)uVar13;
        uVar3 = uVar3 - 1;
        uVar10 = (ulonglong)uVar3;
        param_1[10] = iVar14;
        lVar9 = lVar9 + -1;
        uVar13 = uVar8;
        if (lVar9 != 0) {
          uVar13 = (ulonglong)
                   (*(byte *)(*(short *)(*(longlong *)(lVar1 + 0x88) +
                                        (longlong)((param_7 + 1) * *(int *)(lVar1 + 8) + param_1[4])
                                        * 2) + lVar9 + *(longlong *)(lVar1 + 0x90)) + 1);
        }
        iVar14 = iVar14 - (int)uVar13;
        param_1[10] = iVar14;
      } while (iVar14 < 0);
    }
    if (uVar3 == 0) {
      uVar3 = 0;
      if (param_1[1] != 0) {
        uVar3 = (1 << ((byte)param_5 & 0x1f)) - 1;
        uVar2 = param_9 & uVar3;
        if (uVar2 == 0) {
          memset(param_2,0,lVar16 << 2);
          uVar3 = 0;
        }
        else {
          if (param_6 == 0) {
            if (0 < param_3) {
              do {
                iVar14 = param_1[0xe] * 0x19660d + 0x3c6ef35f;
                param_1[0xe] = iVar14;
                param_2[uVar8] = (float)(iVar14 >> 0x14);
                uVar8 = uVar8 + 1;
              } while ((longlong)uVar8 < lVar16);
            }
          }
          else {
            uVar3 = uVar2;
            if (0 < param_3) {
              pfVar12 = param_2;
              do {
                fVar17 = 0.00390625;
                uVar2 = param_1[0xe] * 0x19660d + 0x3c6ef35f;
                param_1[0xe] = uVar2;
                if ((uVar2 >> 0xf & 1) == 0) {
                  fVar17 = -0.00390625;
                }
                *pfVar12 = fVar17 + *(float *)((param_6 - (longlong)param_2) + (longlong)pfVar12);
                pfVar12 = pfVar12 + 1;
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
            }
          }
          FUN_1452ef944(param_2,param_3,param_8,param_1[0xf]);
        }
      }
    }
    else {
      uVar2 = (uVar3 & 7) + 8 << ((char)((int)uVar3 >> 3) - 1U & 0x1f);
      if ((int)uVar3 < 8) {
        uVar2 = uVar3;
      }
      if (*param_1 == 0) {
        uVar3 = FUN_1452ef82c(param_2,param_3,uVar2,param_1[6],param_5,*(undefined8 *)(param_1 + 8),
                              param_8);
      }
      else {
        uVar3 = FUN_1452ef6cc(param_2,param_3,uVar2,param_1[6],param_5,*(undefined8 *)(param_1 + 8),
                              param_8,param_1[1],param_1[0xf]);
      }
    }
  }
  else {
    param_7 = param_7 + -1;
    param_3 = param_3 >> 1;
    pfVar12 = param_2 + param_3;
    if (param_5 == 1) {
      param_9 = param_9 & 1 | param_9 * 2;
    }
    iVar14 = param_5 + 1 >> 1;
    FUN_1452ec44c(param_1,local_70,param_2,pfVar12,param_3,local_res20,iVar14,param_5,param_7,0,
                  &param_9);
    if ((1 < param_5) && ((local_60 & 0x3fff) != 0)) {
      if ((int)local_60 < 0x2001) {
        local_64 = ((param_3 << 3) >> (5U - (char)param_7 & 0x1f)) + local_64;
        if (0 < local_64) {
          local_64 = 0;
        }
      }
      else {
        local_64 = local_64 - (local_64 >> (4U - (char)param_7 & 0x1f));
      }
    }
    uVar2 = (int)(local_res20[0] - local_64) / 2;
    uVar3 = uVar2;
    if ((int)local_res20[0] < (int)uVar2) {
      uVar3 = local_res20[0];
    }
    if ((-1 < (int)uVar3) && (uVar8 = (ulonglong)uVar2, (int)local_res20[0] < (int)uVar2)) {
      uVar8 = (ulonglong)local_res20[0];
    }
    iVar7 = (int)uVar8;
    iVar15 = local_res20[0] - iVar7;
    param_1[10] = param_1[10] - local_5c;
    iVar6 = param_1[10];
    uVar10 = -(ulonglong)(param_6 != 0) & param_6 + (longlong)param_3 * 4;
    bVar5 = (byte)(param_5 >> 1);
    if (iVar7 < iVar15) {
      iVar4 = FUN_1452ecd7c(param_1,pfVar12,param_3,iVar15,iVar14,uVar10,param_7,
                            (float)local_68 * 3.0517578e-05 * param_8,
                            (int)param_9 >> ((byte)iVar14 & 0x1f));
      iVar6 = (iVar15 - iVar6) + param_1[10];
      uVar3 = iVar4 << (bVar5 & 0x1f);
      if ((0x18 < iVar6) && (local_60 != 0x4000)) {
        iVar7 = iVar7 + -0x18 + iVar6;
      }
      uVar2 = FUN_1452ecd7c(param_1,param_2,param_3,iVar7,iVar14,param_6,param_7,
                            (float)local_6c * 3.0517578e-05 * param_8,param_9);
    }
    else {
      uVar3 = FUN_1452ecd7c(param_1,param_2,param_3,uVar8,iVar14,param_6,param_7,
                            (float)local_6c * 3.0517578e-05 * param_8,param_9);
      iVar6 = (iVar7 - iVar6) + param_1[10];
      if ((0x18 < iVar6) && (local_60 != 0)) {
        iVar15 = iVar15 + -0x18 + iVar6;
      }
      iVar14 = FUN_1452ecd7c(param_1,pfVar12,param_3,iVar15,iVar14,uVar10,param_7,
                             (float)local_68 * 3.0517578e-05 * param_8,
                             (int)param_9 >> ((byte)iVar14 & 0x1f));
      uVar2 = iVar14 << (bVar5 & 0x1f);
    }
    uVar3 = uVar3 | uVar2;
  }
  return uVar3;
}



// FUNCTION 1452ed2d4 FUN_1452ed2d4 body=881 status=ok
// SIG undefined FUN_1452ed2d4(void)

ulonglong FUN_1452ed2d4(int *param_1,longlong param_2,uint param_3,undefined8 param_4,uint param_5,
                       void *param_6,undefined4 param_7,float *param_8,undefined4 param_9,
                       void *param_10,uint param_11)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  bool bVar14;
  double dVar15;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar16;
  uint local_50;
  int local_4c;
  
  iVar9 = *param_1;
  iVar10 = param_1[7];
  bVar14 = param_5 == 1;
  local_50 = 0;
  if (param_3 == 1) {
    uVar4 = FUN_1452ecc98(param_1,param_2,0,param_4,param_8);
  }
  else {
    iVar7 = iVar10;
    if (iVar10 < 1) {
      iVar7 = 0;
    }
    if (((param_10 != (void *)0x0) && (param_6 != (void *)0x0)) &&
       ((iVar7 != 0 ||
        (((((ulonglong)param_3 / (ulonglong)param_5 & 1) == 0 && (iVar10 < 0)) || (1 < (int)param_5)
         ))))) {
      memcpy(param_10,param_6,(longlong)(int)param_3 << 2);
      param_6 = param_10;
    }
    local_4c = 0;
    if (0 < iVar7) {
      do {
        iVar2 = 1 << ((byte)local_4c & 0x1f);
        iVar12 = (int)param_3 >> ((byte)local_4c & 0x1f);
        if (iVar9 != 0) {
          FUN_1452eac40(param_2,iVar12,iVar2);
        }
        if (param_6 != (void *)0x0) {
          FUN_1452eac40(param_6,iVar12,iVar2);
        }
        local_4c = local_4c + 1;
        param_11 = (uint)(byte)(&DAT_149d323e0)[(longlong)(int)param_11 >> 4] << 2 |
                   (uint)(byte)(&DAT_149d323e0)[param_11 & 0xf];
      } while (local_4c < iVar7);
    }
    uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
    bVar5 = (byte)iVar7;
    iVar2 = (int)param_5 >> (bVar5 & 0x1f);
    uVar8 = (int)((ulonglong)param_3 / (ulonglong)param_5) << (bVar5 & 0x1f);
    for (; ((uVar8 & 1) == 0 &&
           (uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20), iVar10 < 0));
        iVar10 = iVar10 + 1) {
      if (iVar9 != 0) {
        FUN_1452eac40(param_2,uVar8,iVar2);
      }
      if (param_6 != (void *)0x0) {
        FUN_1452eac40(param_6,uVar8,iVar2);
      }
      uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
      local_50 = local_50 + 1;
      uVar8 = (int)uVar8 >> 1;
      bVar6 = (byte)iVar2;
      iVar2 = iVar2 * 2;
      param_11 = param_11 | param_11 << (bVar6 & 0x1f);
    }
    if (1 < iVar2) {
      iVar10 = iVar2 << (bVar5 & 0x1f);
      iVar12 = (int)uVar8 >> (bVar5 & 0x1f);
      if (iVar9 != 0) {
        FUN_1452ec194(param_2,iVar12,iVar10,bVar14);
      }
      if (param_6 != (void *)0x0) {
        FUN_1452ec194(param_6,iVar12,iVar10,bVar14);
      }
    }
    lVar11 = (longlong)(int)param_3;
    uVar3 = FUN_1452ecd7c(param_1,param_2,param_3,(int)param_4,CONCAT44(uVar16,iVar2),param_6,
                          param_7,param_9,param_11);
    uVar4 = (ulonglong)uVar3;
    if (param_1[1] != 0) {
      if (1 < iVar2) {
        FUN_1452ec304(param_2,(int)uVar8 >> (bVar5 & 0x1f),iVar2 << (bVar5 & 0x1f),bVar14);
      }
      if (0 < (int)local_50) {
        uVar13 = (ulonglong)local_50;
        do {
          iVar2 = iVar2 >> 1;
          uVar8 = uVar8 * 2;
          uVar4 = (ulonglong)((uint)uVar4 | (uint)uVar4 >> ((byte)iVar2 & 0x1f));
          FUN_1452eac40(param_2,uVar8,iVar2);
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      uVar8 = (uint)uVar4;
      iVar9 = 0;
      if (0 < iVar7) {
        do {
          pbVar1 = &DAT_149d323f0 + uVar4;
          uVar4 = (ulonglong)*pbVar1;
          uVar8 = (uint)*pbVar1;
          FUN_1452eac40(param_2,(int)param_3 >> ((byte)iVar9 & 0x1f),1 << ((byte)iVar9 & 0x1f));
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar7);
      }
      if (param_8 != (float *)0x0) {
        dVar15 = sqrt((double)(int)param_3);
        if (0 < (int)param_3) {
          param_2 = param_2 - (longlong)param_8;
          do {
            *param_8 = (float)dVar15 * *(float *)(param_2 + (longlong)param_8);
            param_8 = param_8 + 1;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
      }
      uVar4 = (ulonglong)(uVar8 & (1 << ((byte)(iVar2 << (bVar5 & 0x1f)) & 0x1f)) - 1U);
    }
  }
  return uVar4;
}



// FUNCTION 1452ed648 FUN_1452ed648 body=1176 status=ok
// SIG undefined FUN_1452ed648(void)

ulonglong FUN_1452ed648(int *param_1,float *param_2,float *param_3,int param_4,int param_5,
                       undefined4 param_6,undefined8 param_7,undefined4 param_8,undefined8 param_9,
                       undefined8 param_10,int param_11)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  uint local_res20;
  undefined8 in_stack_ffffffffffffff28;
  undefined8 uVar15;
  undefined4 uVar18;
  undefined8 uVar16;
  undefined4 uVar19;
  undefined8 uVar17;
  undefined8 uVar20;
  undefined4 *puVar21;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  uint local_68;
  int local_64;
  undefined4 uVar22;
  
  iVar6 = param_11;
  uVar19 = param_6;
  iVar11 = *param_1;
  uVar16 = *(undefined8 *)(param_1 + 8);
  if (param_4 == 1) {
    uVar7 = FUN_1452ecc98(param_1,param_2,param_3,param_5,param_9);
  }
  else {
    puVar21 = &param_11;
    uVar15 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffff28 >> 0x20),param_4);
    FUN_1452ec44c(param_1,&local_78,param_2,param_3,uVar15,&param_5,param_6,param_6,param_8,1,
                  puVar21);
    uVar18 = (undefined4)((ulonglong)uVar15 >> 0x20);
    uVar22 = (undefined4)((ulonglong)puVar21 >> 0x20);
    fVar14 = (float)local_74 * 3.0517578e-05;
    fVar13 = (float)local_70 * 3.0517578e-05;
    if (param_4 == 2) {
      iVar8 = 0;
      uVar5 = 0;
      if ((local_68 & 0xffffbfff) != 0) {
        iVar8 = 8;
      }
      iVar4 = param_5 - iVar8;
      param_1[10] = param_1[10] - (local_64 + iVar8);
      pfVar9 = param_3;
      pfVar10 = param_2;
      if (0x2000 < (int)local_68) {
        pfVar9 = param_2;
        pfVar10 = param_3;
      }
      if (iVar8 != 0) {
        if (iVar11 == 0) {
          uVar5 = FUN_144f2f70c(uVar16,1);
        }
        else {
          bVar3 = pfVar9[1] * *pfVar10 - pfVar10[1] * *pfVar9 < 0.0;
          uVar5 = (uint)bVar3;
          FUN_144f35820(uVar16,bVar3,1);
        }
      }
      iVar11 = uVar5 * -2 + 1;
      uVar16 = CONCAT44(uVar18,uVar19);
      uVar5 = FUN_1452ed2d4(param_1,pfVar10,2,iVar4,uVar16,param_7,param_8,param_9,0x3f800000,
                            param_10,CONCAT44(uVar22,iVar6));
      uVar19 = (undefined4)((ulonglong)uVar16 >> 0x20);
      uVar7 = (ulonglong)uVar5;
      *pfVar9 = (float)-iVar11 * pfVar10[1];
      pfVar9[1] = (float)iVar11 * *pfVar10;
      if (param_1[1] == 0) {
        return uVar7;
      }
      *param_2 = fVar14 * *param_2;
      param_2[1] = fVar14 * param_2[1];
      fVar1 = *param_3;
      *param_3 = fVar13 * fVar1;
      param_3[1] = fVar13 * param_3[1];
      fVar2 = *param_2;
      *param_2 = fVar2 - fVar13 * fVar1;
      *param_3 = fVar2 + *param_3;
      fVar13 = param_2[1];
      param_2[1] = fVar13 - param_3[1];
      param_3[1] = fVar13 + param_3[1];
    }
    else {
      iVar6 = (param_5 - local_6c) / 2;
      iVar11 = iVar6;
      if (param_5 < iVar6) {
        iVar11 = param_5;
      }
      iVar8 = 0;
      if ((-1 < iVar11) && (iVar8 = iVar6, param_5 < iVar6)) {
        iVar8 = param_5;
      }
      iVar6 = param_5 - iVar8;
      param_1[10] = param_1[10] - local_64;
      iVar11 = param_1[10];
      if (iVar8 < iVar6) {
        uVar16 = CONCAT44(uVar18,param_6);
        local_res20 = FUN_1452ed2d4(param_1,param_3,param_4,iVar6,uVar16,0,param_8,0,fVar13,0,
                                    CONCAT44(uVar22,param_11 >> ((byte)param_6 & 0x1f)));
        uVar19 = (undefined4)((ulonglong)uVar16 >> 0x20);
        iVar6 = (param_1[10] - iVar11) + iVar6;
        if ((0x18 < iVar6) && (local_68 != 0x4000)) {
          iVar8 = iVar8 + -0x18 + iVar6;
        }
        fVar13 = 1.0;
        pfVar10 = param_2;
        uVar16 = param_7;
        uVar15 = param_9;
        uVar20 = param_10;
        iVar11 = param_11;
      }
      else {
        uVar16 = CONCAT44(uVar18,param_6);
        local_res20 = FUN_1452ed2d4(param_1,param_2,param_4,iVar8,uVar16,param_7,param_8,param_9,
                                    0x3f800000,param_10,CONCAT44(uVar22,param_11));
        uVar19 = (undefined4)((ulonglong)uVar16 >> 0x20);
        iVar8 = (param_1[10] - iVar11) + iVar8;
        if ((0x18 < iVar8) && (local_68 != 0)) {
          iVar6 = iVar6 + -0x18 + iVar8;
        }
        pfVar10 = param_3;
        iVar8 = iVar6;
        uVar16 = 0;
        uVar15 = 0;
        uVar20 = 0;
        iVar11 = param_11 >> ((byte)param_6 & 0x1f);
      }
      uVar17 = CONCAT44(uVar19,param_6);
      uVar5 = FUN_1452ed2d4(param_1,pfVar10,param_4,iVar8,uVar17,uVar16,param_8,uVar15,fVar13,uVar20
                            ,iVar11);
      uVar19 = (undefined4)((ulonglong)uVar17 >> 0x20);
      uVar7 = (ulonglong)(local_res20 | uVar5);
    }
    lVar12 = 0;
    if (param_1[1] != 0) {
      if (param_4 != 2) {
        FUN_1452ec044(param_2,param_3,fVar14,param_4,CONCAT44(uVar19,param_1[0xf]));
      }
      if ((local_78 != 0) && (0 < param_4)) {
        do {
          param_3[lVar12] = -param_3[lVar12];
          lVar12 = lVar12 + 1;
        } while (lVar12 < param_4);
      }
    }
  }
  return uVar7;
}



// FUNCTION 1452edae0 FUN_1452edae0 body=164 status=ok
// SIG undefined FUN_1452edae0(void)

void FUN_1452edae0(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
                  int param_6)

{
  longlong lVar1;
  int iVar2;
  size_t _Size;
  int iVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x20);
  lVar1 = (longlong)param_4;
  iVar3 = (int)*(short *)(lVar4 + 2 + lVar1 * 2);
  iVar2 = (iVar3 - *(short *)(lVar4 + lVar1 * 2)) * param_5;
  param_5 = (*(short *)(lVar4 + 4 + lVar1 * 2) - iVar3) * param_5;
  lVar4 = (longlong)(iVar2 * 2 - param_5);
  _Size = (longlong)(param_5 - iVar2) << 2;
  memcpy((void *)(param_2 + (longlong)iVar2 * 4),(void *)(param_2 + lVar4 * 4),_Size);
  if (param_6 != 0) {
    memcpy((void *)(param_3 + (longlong)iVar2 * 4),(void *)(param_3 + lVar4 * 4),_Size);
  }
  return;
}



// FUNCTION 1452edb84 FUN_1452edb84 body=233 status=ok
// SIG undefined FUN_1452edb84(void)

void FUN_1452edb84(longlong param_1,uint param_2,int param_3,longlong param_4,longlong param_5,
                  int param_6)

{
  float *pfVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  
  uVar6 = (ulonglong)(int)param_2;
  iVar8 = 0;
  uVar7 = uVar6;
  do {
    iVar9 = 0;
    lVar5 = 0;
    if (0 < (longlong)uVar6) {
      do {
        lVar4 = (longlong)(*(int *)(param_1 + 8) * iVar8 + iVar9);
        dVar10 = log((double)*(float *)(param_4 + lVar4 * 4));
        iVar9 = iVar9 + 1;
        pfVar1 = (float *)(&DAT_149d32430 + lVar5);
        lVar5 = lVar5 + 1;
        *(float *)(param_5 + lVar4 * 4) = (float)(dVar10 * 1.4426950408889634) - *pfVar1;
      } while (lVar5 < (longlong)uVar6);
      uVar7 = (ulonglong)param_2;
    }
    uVar2 = (uint)uVar7;
    uVar3 = uVar7 & 0xffffffff;
    while ((int)uVar2 < param_3) {
      iVar9 = (int)uVar3;
      uVar2 = iVar9 + 1;
      uVar3 = (ulonglong)uVar2;
      *(undefined4 *)(param_5 + (longlong)(*(int *)(param_1 + 8) * iVar8 + iVar9) * 4) = 0xc1600000;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < param_6);
  return;
}



// FUNCTION 1452edc70 FUN_1452edc70 body=1334 status=ok
// SIG undefined FUN_1452edc70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452edc70(longlong param_1,int param_2,int param_3,int param_4,longlong param_5,
                  void *param_6,uint param_7,void *param_8,longlong *param_9,int param_10,
                  int param_11,int param_12,int param_13,float *param_14,int param_15,int param_16,
                  int param_17)

{
  uint uVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  int iVar26;
  ulonglong _Size;
  int iVar27;
  float *pfVar28;
  void *pvVar29;
  undefined1 *puVar30;
  size_t _Size_00;
  longlong lVar31;
  float fVar32;
  float fVar33;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [32];
  undefined8 uStack_178;
  uint auStack_170 [4];
  longlong alStack_160 [3];
  int local_148 [6];
  float local_130 [2];
  int local_128 [4];
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  void *local_100;
  void *local_f8;
  ulonglong local_f0;
  void *local_e8;
  void *local_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_14c707940 ^ (ulonglong)&local_118;
  lVar31 = (longlong)param_2;
  iVar27 = 0;
  local_108 = 0;
  if ((param_13 != 0) ||
     (((param_15 == 0 && (iVar26 = (param_3 - param_2) * param_10, (float)(iVar26 * 2) < *param_14))
      && (iVar26 < param_12)))) {
    local_118 = 1;
  }
  else {
    local_118 = 0;
  }
  local_104 = (int)(((float)param_7 * *param_14 * (float)param_16) / (float)(param_10 << 9));
  fVar33 = 0.0;
  iVar26 = iVar27;
  do {
    if (lVar31 < param_4) {
      pfVar28 = (float *)((iVar26 + lVar31) * 4 + (longlong)param_6);
      lVar24 = param_4 - lVar31;
      do {
        fVar32 = *(float *)((param_5 - (longlong)param_6) + (longlong)pfVar28) - *pfVar28;
        pfVar28 = pfVar28 + 1;
        fVar33 = fVar32 * fVar32 + fVar33;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
    }
    iVar27 = iVar27 + 1;
    iVar26 = iVar26 + *(int *)(param_1 + 8);
  } while (iVar27 < param_10);
  fVar32 = 200.0;
  if (fVar33 <= 200.0) {
    fVar32 = fVar33;
  }
  iVar27 = 0x1f;
  if (*(uint *)(param_9 + 4) != 0) {
    for (; *(uint *)(param_9 + 4) >> iVar27 == 0; iVar27 = iVar27 + -1) {
    }
  }
  iVar27 = (int)param_9[3] - iVar27;
  iVar26 = iVar27 + -1;
  uVar1 = iVar27 + 2;
  local_10c = 0;
  if (uVar1 <= param_7) {
    local_10c = param_15;
  }
  iVar27 = 0;
  if (uVar1 <= param_7) {
    iVar27 = local_118;
  }
  fVar33 = 16.0;
  if ((10 < param_3 - param_2) && ((float)param_12 * 0.125 <= 16.0)) {
    fVar33 = (float)param_12 * 0.125;
  }
  if (param_17 != 0) {
    fVar33 = 3.0;
  }
  lVar24 = *param_9;
  lVar12 = param_9[1];
  lVar17 = param_9[2];
  uVar7 = *(undefined4 *)((longlong)param_9 + 0x14);
  lVar18 = param_9[3];
  uVar1 = *(uint *)((longlong)param_9 + 0x1c);
  lVar13 = param_9[4];
  lVar14 = param_9[5];
  lVar31 = param_9[6];
  _Size_00 = (longlong)(*(int *)(param_1 + 8) * param_10) * 4;
  uVar25 = _Size_00 + 0xf;
  if (uVar25 <= _Size_00) {
    uVar25 = 0xffffffffffffff0;
  }
  uStack_1a0 = 0x1452edeb9;
  lVar4 = -(uVar25 & 0xfffffffffffffff0);
  uVar25 = _Size_00 + 0xf;
  if (uVar25 <= _Size_00) {
    uVar25 = 0xffffffffffffff0;
  }
  local_114 = param_3;
  local_110 = param_2;
  local_100 = (void *)((longlong)&local_118 + lVar4);
  *(undefined8 *)(auStack_198 + lVar4 + -8) = 0x1452ededd;
  lVar5 = -(uVar25 & 0xfffffffffffffff0);
  puVar30 = auStack_198 + lVar5 + lVar4;
  local_f8 = (void *)((longlong)&local_118 + lVar5 + lVar4);
  *(undefined8 *)(auStack_198 + lVar5 + lVar4 + -8) = 0x1452edef8;
  memcpy((void *)((longlong)&local_118 + lVar4),param_6,_Size_00);
  iVar21 = local_110;
  iVar9 = local_114;
  if ((local_10c != 0) || (iVar27 != 0)) {
    *(int *)((longlong)local_128 + lVar5 + lVar4) = param_17;
    pvVar29 = local_f8;
    *(float *)((longlong)local_130 + lVar5 + lVar4) = fVar33;
    *(undefined4 *)((longlong)local_148 + lVar5 + lVar4 + 0x10) = 1;
    *(int *)((longlong)local_148 + lVar5 + lVar4 + 8) = param_11;
    *(int *)((longlong)local_148 + lVar5 + lVar4) = param_10;
    *(longlong **)((longlong)alStack_160 + lVar5 + lVar4 + 0x10) = param_9;
    *(void **)((longlong)alStack_160 + lVar5 + lVar4 + 8) = pvVar29;
    *(undefined **)((longlong)alStack_160 + lVar5 + lVar4) =
         &DAT_149d324ca + (longlong)param_11 * 0x54;
    *(int *)((longlong)auStack_170 + lVar5 + lVar4 + 8) = iVar26;
    *(uint *)((longlong)auStack_170 + lVar5 + lVar4) = param_7;
    *(void **)((longlong)&uStack_178 + lVar5 + lVar4) = local_100;
    *(undefined8 *)(auStack_198 + lVar5 + lVar4 + -8) = 0x1452edf82;
    local_108 = FUN_1452ee968(param_1,iVar21,iVar9,param_5);
  }
  pvVar29 = local_100;
  if (iVar27 == 0) {
    *(undefined8 *)(auStack_198 + lVar5 + lVar4 + -8) = 0x1452edf95;
    local_118 = FUN_1452e891c(param_9);
    lVar19 = param_9[2];
    uVar8 = *(undefined4 *)((longlong)param_9 + 0x14);
    lVar20 = param_9[3];
    iVar9 = *(int *)((longlong)param_9 + 0x1c);
    lVar10 = *param_9;
    lVar11 = param_9[1];
    lVar15 = param_9[4];
    lVar16 = param_9[5];
    lVar3 = param_9[6];
    pvVar29 = (void *)((ulonglong)uVar1 + lVar10);
    uVar23 = iVar9 - uVar1;
    _Size = (ulonglong)uVar23;
    uVar25 = (ulonglong)uVar23 + 0xf;
    if (uVar25 <= _Size) {
      uVar25 = 0xffffffffffffff0;
    }
    local_f0 = _Size;
    local_e0 = pvVar29;
    *(undefined8 *)(auStack_198 + lVar5 + lVar4 + -8) = 0x1452edfff;
    lVar6 = -(uVar25 & 0xfffffffffffffff0);
    pvVar2 = (void *)((longlong)&local_118 + lVar6 + lVar5 + lVar4);
    local_e8 = pvVar2;
    *(undefined8 *)(auStack_198 + lVar6 + lVar5 + lVar4 + -8) = 0x1452ee019;
    memcpy(pvVar2,pvVar29,_Size);
    iVar22 = local_110;
    iVar21 = local_114;
    *param_9 = lVar24;
    param_9[1] = lVar12;
    *(int *)(param_9 + 2) = (int)lVar17;
    *(undefined4 *)((longlong)param_9 + 0x14) = uVar7;
    *(int *)(param_9 + 3) = (int)lVar18;
    *(uint *)((longlong)param_9 + 0x1c) = uVar1;
    param_9[4] = lVar13;
    param_9[5] = lVar14;
    param_9[6] = lVar31;
    *(int *)((longlong)local_128 + lVar6 + lVar5 + lVar4) = param_17;
    *(float *)((longlong)local_130 + lVar6 + lVar5 + lVar4) = fVar33;
    *(undefined4 *)((longlong)local_148 + lVar6 + lVar5 + lVar4 + 0x10) = 0;
    *(int *)((longlong)local_148 + lVar6 + lVar5 + lVar4 + 8) = param_11;
    *(int *)((longlong)local_148 + lVar6 + lVar5 + lVar4) = param_10;
    *(longlong **)((longlong)alStack_160 + lVar6 + lVar5 + lVar4 + 0x10) = param_9;
    *(void **)((longlong)alStack_160 + lVar6 + lVar5 + lVar4 + 8) = param_8;
    *(undefined **)((longlong)alStack_160 + lVar6 + lVar5 + lVar4) =
         &DAT_149d324a0 + (longlong)param_11 * 0x54;
    *(int *)((longlong)auStack_170 + lVar6 + lVar5 + lVar4 + 8) = iVar26;
    *(uint *)((longlong)auStack_170 + lVar6 + lVar5 + lVar4) = param_7;
    *(void **)((longlong)&uStack_178 + lVar6 + lVar5 + lVar4) = param_6;
    *(undefined8 *)(auStack_198 + lVar6 + lVar5 + lVar4 + -8) = 0x1452ee0a7;
    iVar26 = FUN_1452ee968(param_1,iVar22,iVar21,param_5);
    puVar30 = auStack_198 + lVar6 + lVar5 + lVar4;
    if (local_10c == 0) goto LAB_1452ee170;
    if (local_108 < iVar26) {
LAB_1452ee0d0:
      pvVar2 = local_e0;
      pvVar29 = local_e8;
      uVar25 = local_f0;
      *param_9 = lVar10;
      param_9[1] = lVar11;
      *(int *)(param_9 + 2) = (int)lVar19;
      *(undefined4 *)((longlong)param_9 + 0x14) = uVar8;
      *(int *)(param_9 + 3) = (int)lVar20;
      *(int *)((longlong)param_9 + 0x1c) = iVar9;
      param_9[4] = lVar15;
      param_9[5] = lVar16;
      param_9[6] = lVar3;
      *(undefined8 *)(auStack_198 + lVar6 + lVar5 + lVar4 + -8) = 0x1452ee0f5;
      memcpy(pvVar2,pvVar29,uVar25);
      pvVar29 = local_100;
      iVar27 = *(int *)(param_1 + 8);
      *(undefined8 *)(auStack_198 + lVar6 + lVar5 + lVar4 + -8) = 0x1452ee10f;
      memcpy(param_6,pvVar29,(longlong)(iVar27 * param_10) << 2);
      pvVar29 = local_f8;
      iVar27 = *(int *)(param_1 + 8);
      *(undefined8 *)(auStack_198 + lVar6 + lVar5 + lVar4 + -8) = 0x1452ee12d;
      memcpy(param_8,pvVar29,(longlong)(iVar27 * param_10) << 2);
      iVar27 = 1;
      puVar30 = auStack_198 + lVar6 + lVar5 + lVar4;
      goto LAB_1452ee170;
    }
    puVar30 = auStack_198 + lVar6 + lVar5 + lVar4;
    if (local_108 == iVar26) {
      *(undefined8 *)(auStack_198 + lVar6 + lVar5 + lVar4 + -8) = 0x1452ee0c4;
      iVar27 = FUN_1452e891c(param_9);
      puVar30 = auStack_198 + lVar6 + lVar5 + lVar4;
      if (local_118 < iVar27 + local_104) goto LAB_1452ee0d0;
    }
  }
  else {
    iVar26 = *(int *)(param_1 + 8);
    *(undefined8 *)(auStack_198 + lVar5 + lVar4 + -8) = 0x1452ee152;
    memcpy(param_6,pvVar29,(longlong)(iVar26 * param_10) << 2);
    pvVar29 = local_f8;
    iVar26 = *(int *)(param_1 + 8);
    *(undefined8 *)(auStack_198 + lVar5 + lVar4 + -8) = 0x1452ee170;
    memcpy(param_8,pvVar29,(longlong)(iVar26 * param_10) << 2);
LAB_1452ee170:
    if (iVar27 != 0) goto LAB_1452ee194;
  }
  fVar32 = *(float *)(&DAT_149d325f8 + (longlong)param_11 * 4) *
           *(float *)(&DAT_149d325f8 + (longlong)param_11 * 4) * *param_14 + fVar32;
LAB_1452ee194:
  *param_14 = fVar32;
  uVar25 = local_d8 ^ (ulonglong)&local_118;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar30 + -8) = &UNK_1452ee1a6;
  FUN_144d8e3a0(uVar25);
}



// FUNCTION 1452ee214 FUN_1452ee214 body=370 status=ok
// SIG undefined FUN_1452ee214(void)

void FUN_1452ee214(longlong param_1,int param_2,int param_3,longlong param_4,longlong param_5,
                  longlong param_6,undefined8 param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  double dVar10;
  float fVar11;
  
  uVar8 = (ulonglong)param_2;
  if (param_2 < param_3) {
    piVar6 = (int *)(param_6 + uVar8 * 4);
    do {
      iVar7 = (int)uVar8;
      if (0 < *piVar6) {
        iVar9 = 0;
        iVar2 = (int)(short)(1 << ((byte)*piVar6 & 0x1f));
        iVar1 = iVar2 + -1;
        do {
          dVar10 = floor((double)((*(float *)(param_5 +
                                             (longlong)(*(int *)(param_1 + 8) * iVar9 + iVar7) * 4)
                                  + 0.5) * (float)iVar2));
          iVar3 = iVar1;
          if ((int)dVar10 <= iVar1) {
            iVar3 = (int)dVar10;
          }
          iVar5 = 0;
          if (-1 < iVar3) {
            iVar5 = iVar3;
          }
          FUN_144f35820(param_7,iVar5,*piVar6);
          lVar4 = (longlong)(*(int *)(param_1 + 8) * iVar9 + iVar7);
          fVar11 = (float)(1 << (0xeU - (char)*piVar6 & 0x1f)) * ((float)iVar5 + 0.5) *
                   6.1035156e-05 - 0.5;
          *(float *)(param_4 + lVar4 * 4) = fVar11 + *(float *)(param_4 + lVar4 * 4);
          iVar3 = *(int *)(param_1 + 8) * iVar9;
          iVar9 = iVar9 + 1;
          lVar4 = (longlong)(iVar3 + iVar7);
          *(float *)(param_5 + lVar4 * 4) = *(float *)(param_5 + lVar4 * 4) - fVar11;
        } while (iVar9 < param_8);
      }
      uVar8 = (ulonglong)(iVar7 + 1U);
      piVar6 = piVar6 + 1;
    } while ((int)(iVar7 + 1U) < param_3);
  }
  return;
}



// FUNCTION 1452ee388 FUN_1452ee388 body=469 status=ok
// SIG undefined FUN_1452ee388(void)

void FUN_1452ee388(longlong param_1,uint param_2,int param_3,longlong param_4,longlong param_5,
                  longlong param_6,longlong param_7,int param_8,undefined8 param_9,int param_10)

{
  float *pfVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int *piVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  int local_78;
  
  uVar4 = (ulonglong)(int)param_2;
  local_78 = 0;
  uVar6 = uVar4;
  iVar10 = param_8;
  do {
    uVar9 = uVar6 & 0xffffffff;
    if ((longlong)uVar4 < (longlong)param_3) {
      piVar7 = (int *)(param_6 + uVar4 * 4);
      uVar6 = uVar4;
      do {
        if (iVar10 < param_10) break;
        iVar8 = (int)uVar9;
        if ((*piVar7 < 8) && (*(int *)((param_7 - param_6) + (longlong)piVar7) == local_78)) {
          iVar11 = 0;
          iVar10 = param_8;
          do {
            pfVar1 = (float *)(param_5 + (longlong)(*(int *)(param_1 + 8) * iVar11 + iVar8) * 4);
            bVar2 = 0.0 < *pfVar1 || *pfVar1 == 0.0;
            FUN_144f35820(param_9,bVar2,1);
            iVar10 = iVar10 + -1;
            lVar5 = (longlong)(*(int *)(param_1 + 8) * iVar11 + iVar8);
            fVar12 = (float)(1 << (0xdU - (char)*piVar7 & 0x1f)) * ((float)bVar2 - 0.5) *
                     6.1035156e-05;
            *(float *)(param_4 + lVar5 * 4) = fVar12 + *(float *)(param_4 + lVar5 * 4);
            iVar3 = *(int *)(param_1 + 8) * iVar11;
            iVar11 = iVar11 + 1;
            lVar5 = (longlong)(iVar3 + iVar8);
            *(float *)(param_5 + lVar5 * 4) = *(float *)(param_5 + lVar5 * 4) - fVar12;
            param_8 = iVar10;
          } while (iVar11 < param_10);
        }
        uVar6 = uVar6 + 1;
        uVar9 = (ulonglong)(iVar8 + 1);
        piVar7 = piVar7 + 1;
      } while ((longlong)uVar6 < (longlong)param_3);
      uVar6 = (ulonglong)param_2;
    }
    local_78 = local_78 + 1;
    if (1 < local_78) {
      return;
    }
  } while( true );
}



// FUNCTION 1452ee560 FUN_1452ee560 body=480 status=ok
// SIG undefined FUN_1452ee560(void)

void FUN_1452ee560(longlong param_1,int param_2,int param_3,longlong param_4,int param_5,
                  longlong param_6,int param_7,int param_8)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_58 [12];
  
  local_58[0] = 0.0;
  local_58[1] = 0.0;
  lVar7 = (longlong)param_8;
  fVar13 = 0.0;
  lVar1 = (longlong)param_5 + lVar7 * 2;
  if (param_5 == 0) {
    fVar12 = *(float *)(&DAT_149d32608 + lVar7 * 4);
    fVar13 = *(float *)(&DAT_149d325f8 + lVar7 * 4);
  }
  else {
    fVar12 = 0.1499939;
  }
  iVar4 = *(int *)(param_6 + 8);
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    pfVar9 = local_58;
    iVar8 = 0;
    do {
      iVar6 = 0x1f;
      if (*(uint *)(param_6 + 0x20) != 0) {
        for (; *(uint *)(param_6 + 0x20) >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      iVar6 = iVar4 * 8 + 1 + (iVar6 - *(int *)(param_6 + 0x18));
      if (iVar6 < 0xf) {
        if (iVar6 < 2) {
          if (iVar6 < 1) {
            uVar5 = 0xffffffff;
          }
          else {
            iVar6 = FUN_144f2f528(param_6,1);
            uVar5 = -iVar6;
          }
        }
        else {
          uVar5 = FUN_144f2f574(param_6,&DAT_149d325f0,2);
          uVar5 = -(uVar5 & 1) ^ (int)uVar5 >> 1;
        }
      }
      else {
        iVar6 = 0x14;
        if (param_2 < 0x14) {
          iVar6 = param_2;
        }
        uVar5 = FUN_145515600(param_6,(ulonglong)
                                      (byte)(&DAT_149d324a0)[(longlong)(iVar6 * 2) + lVar1 * 0x2a]
                                      << 7,
                              (ulonglong)
                              (byte)(&DAT_149d324a0)[(longlong)(iVar6 * 2) + 1 + lVar1 * 0x2a] << 6)
        ;
      }
      fVar2 = *pfVar9;
      fVar11 = (float)(int)uVar5;
      lVar7 = (longlong)(iVar8 * *(int *)(param_1 + 8) + param_2);
      iVar6 = iVar8 + 1;
      fVar3 = *(float *)(param_4 + lVar7 * 4);
      fVar10 = -9.0;
      if (-9.0 <= fVar3) {
        fVar10 = fVar3;
      }
      *(float *)(param_4 + lVar7 * 4) = fVar10;
      lVar7 = (longlong)(iVar8 * *(int *)(param_1 + 8) + param_2);
      *(float *)(param_4 + lVar7 * 4) = fVar13 * *(float *)(param_4 + lVar7 * 4) + fVar2 + fVar11;
      *pfVar9 = (fVar2 + fVar11) - fVar11 * fVar12;
      pfVar9 = pfVar9 + 1;
      iVar8 = iVar6;
    } while (iVar6 < param_7);
  }
  return;
}



// FUNCTION 1452ee740 FUN_1452ee740 body=201 status=ok
// SIG undefined FUN_1452ee740(void)

void FUN_1452ee740(longlong param_1,int param_2,int param_3,longlong param_4,longlong param_5,
                  undefined8 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  int *piVar6;
  longlong lVar7;
  
  uVar5 = (ulonglong)param_2;
  if ((longlong)uVar5 < (longlong)param_3) {
    lVar3 = (longlong)param_3 - uVar5;
    piVar6 = (int *)(param_5 + uVar5 * 4);
    do {
      if (0 < *piVar6) {
        iVar4 = 0;
        do {
          iVar1 = FUN_144f2f70c(param_6,*piVar6);
          iVar2 = *(int *)(param_1 + 8) * iVar4;
          iVar4 = iVar4 + 1;
          lVar7 = (longlong)(iVar2 + (int)uVar5);
          *(float *)(param_4 + lVar7 * 4) =
               ((float)(1 << (0xeU - (char)*piVar6 & 0x1f)) * ((float)iVar1 + 0.5) * 6.1035156e-05 -
               0.5) + *(float *)(param_4 + lVar7 * 4);
        } while (iVar4 < param_7);
      }
      uVar5 = (ulonglong)((int)uVar5 + 1);
      piVar6 = piVar6 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1452ee80c FUN_1452ee80c body=347 status=ok
// SIG undefined FUN_1452ee80c(void)

void FUN_1452ee80c(longlong param_1,uint param_2,int param_3,longlong param_4,longlong param_5,
                  longlong param_6,int param_7,undefined8 param_8,int param_9)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  int *piVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  
  uVar2 = (ulonglong)(int)param_2;
  iVar6 = 0;
  uVar5 = uVar2;
  do {
    uVar10 = uVar5 & 0xffffffff;
    if ((longlong)uVar2 < (longlong)param_3) {
      piVar4 = (int *)(param_5 + uVar2 * 4);
      uVar5 = uVar2;
      iVar9 = param_7;
      do {
        if (iVar9 < param_9) break;
        if ((*piVar4 < 8) && (*(int *)((longlong)piVar4 + (param_6 - param_5)) == iVar6)) {
          iVar8 = 0;
          do {
            iVar1 = FUN_144f2f70c(param_8,1);
            iVar3 = *(int *)(param_1 + 8) * iVar8;
            iVar9 = iVar9 + -1;
            iVar8 = iVar8 + 1;
            lVar7 = (longlong)(iVar3 + (int)uVar10);
            *(float *)(param_4 + lVar7 * 4) =
                 (float)(1 << (0xdU - (char)*piVar4 & 0x1f)) * ((float)iVar1 - 0.5) * 6.1035156e-05
                 + *(float *)(param_4 + lVar7 * 4);
            param_7 = iVar9;
          } while (iVar8 < param_9);
        }
        uVar10 = (ulonglong)((int)uVar10 + 1);
        uVar5 = uVar5 + 1;
        piVar4 = piVar4 + 1;
      } while ((longlong)uVar5 < (longlong)param_3);
      uVar5 = (ulonglong)param_2;
    }
    iVar6 = iVar6 + 1;
    if (1 < iVar6) {
      return;
    }
  } while( true );
}



// FUNCTION 1452ee968 FUN_1452ee968 body=935 status=ok
// SIG undefined FUN_1452ee968(void)

int FUN_1452ee968(longlong param_1,int param_2,int param_3,longlong param_4,longlong param_5,
                 int param_6,uint param_7,longlong param_8,longlong param_9,longlong param_10,
                 int param_11,int param_12,int param_13,float param_14,int param_15)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_b8;
  undefined4 local_b4;
  float *local_b0;
  
  iVar7 = param_13;
  lVar6 = param_10;
  iVar13 = 0;
  local_b8 = 0.0;
  local_b4 = 0;
  fVar19 = 0.0;
  if ((int)(param_7 + 3) <= param_6) {
    FUN_144f35680(param_10,param_13,3);
  }
  iVar4 = param_2;
  if (iVar7 == 0) {
    fVar18 = *(float *)(&DAT_149d32608 + (longlong)param_12 * 4);
    fVar19 = *(float *)(&DAT_149d325f8 + (longlong)param_12 * 4);
  }
  else {
    fVar18 = 0.1499939;
  }
  for (; iVar4 < param_3; iVar4 = iVar4 + 1) {
    param_13 = 0;
    iVar7 = (param_3 - iVar4) * param_11;
    local_b0 = &local_b8;
    do {
      lVar12 = (longlong)(param_13 * *(int *)(param_1 + 8) + iVar4);
      fVar16 = *(float *)(param_5 + lVar12 * 4);
      fVar15 = *(float *)(param_4 + lVar12 * 4);
      if (fVar16 < -9.0) {
        fVar16 = -9.0;
      }
      fVar1 = *local_b0;
      fVar17 = (fVar15 - fVar16 * fVar19) - fVar1;
      dVar14 = floor((double)(fVar17 + 0.5));
      param_7 = (uint)dVar14;
      fVar2 = *(float *)(param_5 + lVar12 * 4);
      fVar3 = -28.0;
      if (-28.0 <= fVar2) {
        fVar3 = fVar2;
      }
      if ((((int)param_7 < 0) && (fVar15 < fVar3 - param_14)) &&
         (param_7 = (int)((fVar3 - param_14) - fVar15) + param_7, 0 < (int)param_7)) {
        param_7 = 0;
      }
      uVar5 = param_7;
      iVar8 = 0x1f;
      if (*(uint *)(lVar6 + 0x20) != 0) {
        for (; *(uint *)(lVar6 + 0x20) >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      iVar10 = (iVar8 - *(int *)(lVar6 + 0x18)) + 1;
      iVar8 = param_6 + iVar7 * -3 + iVar10;
      if ((iVar4 != param_2) && (iVar8 < 0x1e)) {
        if ((iVar8 < 0x18) && (1 < (int)param_7)) {
          param_7 = 1;
        }
        if ((iVar8 < 0x10) && ((int)param_7 < -1)) {
          param_7 = 0xffffffff;
        }
      }
      uVar11 = param_7;
      if (((param_15 != 0) && (1 < iVar4)) && (uVar11 = 0, (int)param_7 < 0)) {
        uVar11 = param_7;
      }
      param_7 = uVar11;
      iVar10 = iVar10 + param_6;
      if (iVar10 < 0xf) {
        if (iVar10 < 2) {
          if (iVar10 < 1) {
            param_7 = 0xffffffff;
          }
          else {
            if (0 < (int)param_7) {
              param_7 = 0;
            }
            FUN_144f35680(lVar6,-param_7);
          }
        }
        else {
          uVar11 = 1;
          if ((int)param_7 < 1) {
            uVar11 = param_7;
          }
          uVar9 = (ulonglong)uVar11;
          if ((int)uVar11 < -1) {
            uVar9 = 0xffffffff;
          }
          param_7 = (uint)uVar9;
          FUN_144f356e4(lVar6,-(int)(uVar9 >> 0x1f) ^ param_7 * 2,&DAT_149d325f0,2);
        }
      }
      else {
        iVar8 = 0x14;
        if (iVar4 < 0x14) {
          iVar8 = iVar4;
        }
        FUN_1455154d8(lVar6,&param_7,(ulonglong)*(byte *)(iVar8 * 2 + param_8) << 7,
                      (ulonglong)*(byte *)((longlong)(iVar8 * 2) + 1 + param_8) << 6);
      }
      *(float *)(param_9 + (longlong)(param_13 * *(int *)(param_1 + 8) + iVar4) * 4) =
           fVar17 - (float)(int)param_7;
      uVar11 = (int)(uVar5 - param_7) >> 0x1f;
      iVar13 = iVar13 + ((uVar5 - param_7 ^ uVar11) - uVar11);
      fVar15 = (float)(int)param_7;
      *(float *)(param_5 + (longlong)(param_13 * *(int *)(param_1 + 8) + iVar4) * 4) =
           fVar1 + fVar16 * fVar19 + fVar15;
      param_13 = param_13 + 1;
      *local_b0 = (fVar1 + fVar15) - fVar15 * fVar18;
      local_b0 = local_b0 + 1;
    } while (param_13 < param_11);
  }
  if (param_15 != 0) {
    iVar13 = 0;
  }
  return iVar13;
}



// FUNCTION 1452eed10 FUN_1452eed10 body=292 status=ok
// SIG undefined FUN_1452eed10(void)

void FUN_1452eed10(void *param_1,float *param_2,int param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  longlong lVar5;
  float *pfVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  
  fVar10 = *param_2;
  memset(param_1,0,(longlong)param_3 << 2);
  if ((*param_2 != 0.0) && (iVar8 = 0, 0 < param_3)) {
    lVar7 = 0;
    pfVar4 = (float *)((longlong)param_1 + -4);
    do {
      lVar5 = 0;
      fVar9 = 0.0;
      if (0 < lVar7) {
        pfVar6 = (float *)((longlong)param_2 + (4 - (longlong)param_1) + (longlong)pfVar4);
        do {
          lVar1 = lVar5 * 4;
          lVar5 = lVar5 + 1;
          fVar2 = *pfVar6;
          pfVar6 = pfVar6 + -1;
          fVar9 = fVar9 + *(float *)((longlong)param_1 + lVar1) * fVar2;
        } while (lVar5 < lVar7);
      }
      lVar5 = 0;
      iVar8 = iVar8 + 1;
      fVar9 = -((fVar9 + *(float *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pfVar4))
               / fVar10);
      pfVar4[1] = fVar9;
      pfVar6 = pfVar4;
      if (0 < (longlong)iVar8 >> 1) {
        do {
          fVar2 = *pfVar6;
          fVar3 = *(float *)((longlong)param_1 + lVar5 * 4);
          *(float *)((longlong)param_1 + lVar5 * 4) = fVar2 * fVar9 + fVar3;
          lVar5 = lVar5 + 1;
          *pfVar6 = fVar3 * fVar9 + fVar2;
          pfVar6 = pfVar6 + -1;
        } while (lVar5 < (longlong)iVar8 >> 1);
      }
      fVar10 = fVar10 - fVar9 * fVar9 * fVar10;
      if (fVar10 < *param_2 * 0.001) {
        return;
      }
      lVar7 = lVar7 + 1;
      pfVar4 = pfVar4 + 1;
    } while (iVar8 < param_3);
  }
  return;
}



// FUNCTION 1452eee34 FUN_1452eee34 body=410 status=ok
// SIG undefined FUN_1452eee34(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452eee34(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 *puVar3;
  float fVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  int iVar15;
  float fVar16;
  undefined8 auStack_a0 [5];
  float local_78 [2];
  int local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)local_78;
  lVar12 = (longlong)param_5;
  local_68 = param_4;
  local_58 = param_3;
  if (param_1 == param_3) {
    auStack_a0[0] = 0x1452eee97;
    FUN_144bca940("assertion failed: x != y","../../../third_party/opus/src/celt/celt_lpc.c",0x66);
  }
  uVar13 = lVar12 * 4;
  uVar7 = uVar13 + 0xf;
  if (uVar7 <= uVar13) {
    uVar7 = 0xffffffffffffff0;
  }
  auStack_a0[0] = 0x1452eeeba;
  lVar5 = -(uVar7 & 0xfffffffffffffff0);
  pfVar2 = (float *)((longlong)local_78 + lVar5);
  if (0 < lVar12) {
    lVar9 = 0;
    pfVar10 = (float *)(param_2 + -4 + uVar13);
    do {
      fVar16 = *pfVar10;
      pfVar10 = pfVar10 + -1;
      pfVar2[lVar9] = fVar16;
      lVar9 = lVar9 + 1;
    } while (lVar9 < lVar12);
  }
  iVar15 = 0;
  if (0 < param_4 + -3) {
    puVar14 = (undefined4 *)(param_1 + 8);
    lVar9 = param_3 - param_1;
    local_60 = 0;
    uVar6 = (param_4 - 4U >> 2) + 1;
    local_70 = uVar6 * 4;
    uVar7 = (ulonglong)uVar6;
    do {
      local_50 = *(undefined8 *)(puVar14 + -2);
      uStack_48 = *puVar14;
      uStack_44 = puVar14[1];
      lVar8 = local_60 - lVar12;
      *(undefined8 *)((longlong)auStack_a0 + lVar5) = 0x1452eef35;
      FUN_144f37394(pfVar2,param_1 + lVar8 * 4,&local_50,param_5);
      puVar14 = puVar14 + 4;
      local_60 = local_60 + 4;
      puVar3 = (undefined4 *)(lVar9 + -0x18 + (longlong)puVar14);
      *puVar3 = (undefined4)local_50;
      puVar3[1] = local_50._4_4_;
      puVar3[2] = uStack_48;
      puVar3[3] = uStack_44;
      uVar7 = uVar7 - 1;
      param_3 = local_58;
      iVar15 = local_70;
      param_4 = local_68;
    } while (uVar7 != 0);
  }
  lVar9 = (longlong)iVar15;
  if (lVar9 < param_4) {
    pfVar10 = (float *)(param_1 + lVar9 * 4);
    lVar9 = param_4 - lVar9;
    do {
      fVar16 = *pfVar10;
      if (0 < lVar12) {
        pfVar11 = pfVar2;
        lVar8 = lVar12;
        do {
          pfVar1 = (float *)((longlong)pfVar11 + ((longlong)pfVar10 - (longlong)(pfVar2 + lVar12)));
          fVar4 = *pfVar11;
          pfVar11 = pfVar11 + 1;
          fVar16 = *pfVar1 * fVar4 + fVar16;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      *(float *)((param_3 - param_1) + (longlong)pfVar10) = fVar16;
      pfVar10 = pfVar10 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  uVar7 = local_40 ^ (ulonglong)local_78;
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)auStack_a0 + lVar5) = &UNK_1452eefce;
  FUN_144d8e3a0(uVar7);
}



// FUNCTION 1452eefe8 FUN_1452eefe8 body=835 status=ok
// SIG undefined FUN_1452eefe8(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452eefe8(longlong param_1,float *param_2,longlong param_3,float param_4,int param_5,
                  longlong param_6)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  float fVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  float *pfVar11;
  int iVar12;
  longlong lVar13;
  undefined4 *puVar14;
  int iVar15;
  float *pfVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint *puVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  float fVar24;
  undefined8 auStack_d0 [5];
  float local_a8 [2];
  undefined8 local_a0;
  float *local_98;
  longlong local_90;
  longlong local_88;
  float *local_80;
  longlong local_78;
  longlong local_68;
  undefined8 local_60;
  float fStack_58;
  float fStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)local_a8;
  uVar23 = (ulonglong)param_5;
  local_a8[0] = param_4;
  local_a0 = param_3;
  local_98 = param_2;
  local_68 = param_1;
  local_78 = param_6;
  if ((uVar23 & 3) != 0) {
    auStack_d0[0] = 0x1452ef063;
    FUN_144bca940("assertion failed: (ord&3)==0","../../../third_party/opus/src/celt/celt_lpc.c",
                  0xa0);
  }
  pfVar16 = local_98;
  uVar18 = uVar23 * 4;
  uVar9 = uVar18 + 0xf;
  if (uVar9 <= uVar18) {
    uVar9 = 0xffffffffffffff0;
  }
  auStack_d0[0] = 0x1452ef090;
  lVar6 = -(uVar9 & 0xfffffffffffffff0);
  iVar15 = param_5 + (int)param_4;
  pfVar2 = (float *)((longlong)local_a8 + lVar6);
  uVar9 = (longlong)iVar15 * 4 + 0xf;
  if (uVar9 <= (ulonglong)((longlong)iVar15 * 4)) {
    uVar9 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar6) = 0x1452ef0bb;
  lVar7 = -(uVar9 & 0xfffffffffffffff0);
  lVar10 = 0;
  lVar3 = (longlong)local_a8 + lVar7 + lVar6;
  if (0 < param_5) {
    pfVar16 = pfVar16 + (uVar23 - 1);
    lVar13 = lVar10;
    do {
      fVar24 = *pfVar16;
      pfVar16 = pfVar16 + -1;
      pfVar2[lVar13] = fVar24;
      lVar13 = lVar13 + 1;
    } while (lVar13 < (longlong)uVar23);
  }
  iVar12 = 0;
  if (0 < param_5) {
    puVar19 = (uint *)(local_78 + -4 + uVar18);
    do {
      uVar8 = *puVar19;
      puVar19 = puVar19 + -1;
      *(uint *)(lVar3 + lVar10 * 4) = uVar8 ^ 0x80000000;
      lVar10 = lVar10 + 1;
      iVar12 = param_5;
    } while (lVar10 < (longlong)uVar23);
  }
  if (iVar12 < iVar15) {
    *(undefined8 *)((longlong)auStack_d0 + lVar7 + lVar6) = 0x1452ef139;
    memset((void *)(lVar3 + (longlong)iVar12 * 4),0,(longlong)(iVar15 - iVar12) << 2);
  }
  pfVar16 = local_98;
  fVar24 = (float)0;
  if (0 < (int)param_4 + -3) {
    local_80 = (float *)(param_1 + 8);
    lVar13 = local_a0 - param_1;
    local_88 = 0;
    uVar8 = ((int)param_4 - 4U >> 2) + 1;
    uVar9 = (ulonglong)uVar8;
    local_a8[1] = (float)(uVar8 * 4);
    lVar10 = lVar3;
    local_90 = lVar3;
    do {
      local_60 = *(undefined8 *)(local_80 + -2);
      fStack_58 = *local_80;
      fStack_54 = local_80[1];
      *(undefined8 *)((longlong)auStack_d0 + lVar7 + lVar6) = 0x1452ef195;
      FUN_144f37394(pfVar2,lVar10,&local_60,param_5);
      uVar8 = (uint)local_60;
      fVar24 = local_60._4_4_;
      lVar17 = uVar23 + local_88;
      *(uint *)(lVar3 + lVar17 * 4) = (uint)local_60 ^ 0x80000000;
      lVar20 = uVar23 + local_88;
      *(uint *)(lVar13 + -8 + (longlong)local_80) = uVar8;
      lVar22 = uVar23 + local_88;
      fVar24 = fVar24 + *pfVar16 * *(float *)(lVar3 + lVar17 * 4);
      *(float *)((longlong)local_a8 + lVar20 * 4 + lVar7 + lVar6 + 4) = -fVar24;
      *(float *)(lVar13 + -4 + (longlong)local_80) = fVar24;
      fVar24 = *pfVar16 * *(float *)((longlong)local_a8 + lVar20 * 4 + lVar7 + lVar6 + 4) +
               fStack_58 + pfVar16[1] * *(float *)(lVar3 + lVar17 * 4);
      *(float *)((longlong)&local_a0 + lVar22 * 4 + lVar7 + lVar6) = -fVar24;
      *(float *)(lVar13 + (longlong)local_80) = fVar24;
      lVar21 = uVar23 + local_88;
      local_88 = local_88 + 4;
      lVar10 = local_90 + 0x10;
      local_90 = lVar10;
      fVar24 = *pfVar16 * *(float *)((longlong)&local_a0 + lVar22 * 4 + lVar7 + lVar6) + fStack_54 +
               pfVar16[1] * *(float *)((longlong)local_a8 + lVar20 * 4 + lVar7 + lVar6 + 4) +
               pfVar16[2] * *(float *)(lVar3 + lVar17 * 4);
      *(float *)((longlong)&local_a0 + lVar21 * 4 + lVar7 + lVar6 + 4) = -fVar24;
      *(float *)(lVar13 + 4 + (longlong)local_80) = fVar24;
      local_80 = local_80 + 4;
      uVar9 = uVar9 - 1;
      param_1 = local_68;
      fVar24 = local_a8[1];
      param_4 = local_a8[0];
    } while (uVar9 != 0);
  }
  lVar10 = local_a0;
  lVar17 = 0;
  lVar13 = (longlong)(int)fVar24;
  lVar20 = (longlong)(int)param_4;
  if (lVar13 < lVar20) {
    pfVar16 = (float *)(param_1 + lVar13 * 4);
    lVar22 = local_a0 - param_1;
    do {
      fVar24 = *pfVar16;
      if (0 < (longlong)uVar23) {
        pfVar11 = pfVar2;
        lVar21 = lVar17;
        do {
          pfVar1 = (float *)(((lVar3 - (longlong)pfVar2) - param_1) + (longlong)pfVar16 +
                            (longlong)pfVar11);
          lVar21 = lVar21 + 1;
          fVar4 = *pfVar11;
          pfVar11 = pfVar11 + 1;
          fVar24 = fVar24 - *pfVar1 * fVar4;
        } while (lVar21 < (longlong)uVar23);
      }
      lVar21 = uVar23 + lVar13;
      lVar13 = lVar13 + 1;
      *(float *)(lVar3 + lVar21 * 4) = fVar24;
      *(float *)((longlong)pfVar16 + lVar22) = fVar24;
      pfVar16 = pfVar16 + 1;
    } while (lVar13 < lVar20);
  }
  if (0 < (longlong)uVar23) {
    puVar14 = (undefined4 *)(lVar10 + (lVar20 + -1) * 4);
    do {
      uVar5 = *puVar14;
      puVar14 = puVar14 + -1;
      *(undefined4 *)(local_78 + lVar17 * 4) = uVar5;
      lVar17 = lVar17 + 1;
    } while (lVar17 < (longlong)uVar23);
  }
  uVar23 = local_50 ^ (ulonglong)local_a8;
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)auStack_d0 + lVar7 + lVar6) = &UNK_1452ef32b;
  FUN_144d8e3a0(uVar23);
}



// FUNCTION 1452ef348 FUN_1452ef348 body=440 status=ok
// SIG undefined FUN_1452ef348(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452ef348(undefined4 *param_1,float *param_2,float *param_3,int param_4,int param_5,
                  int param_6,undefined4 param_7)

{
  float *pfVar1;
  undefined4 *puVar2;
  float fVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  undefined8 auStack_70 [5];
  int aiStack_48 [4];
  float local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)local_38;
  lVar13 = (longlong)param_4;
  lVar7 = (longlong)param_6;
  local_38[0] = (float)(param_6 - param_5);
  uVar5 = lVar7 * 4 + 0xf;
  if (uVar5 <= (ulonglong)(lVar7 * 4)) {
    uVar5 = 0xffffffffffffff0;
  }
  auStack_70[0] = 0x1452ef3b3;
  lVar4 = -(uVar5 & 0xfffffffffffffff0);
  lVar10 = 0;
  puVar2 = (undefined4 *)((longlong)local_38 + lVar4);
  if (param_6 < 1) {
    *(undefined8 *)((longlong)auStack_70 + lVar4) = 0x1452ef3da;
    FUN_144bca940("assertion failed: n>0","../../../third_party/opus/src/celt/celt_lpc.c",0xe4);
  }
  if (param_4 < 0) {
    *(undefined8 *)((longlong)auStack_70 + lVar4) = 0x1452ef3f8;
    FUN_144bca940("assertion failed: overlap>=0","../../../third_party/opus/src/celt/celt_lpc.c",
                  0xe5);
  }
  puVar8 = param_1;
  if (param_4 != 0) {
    if (0 < lVar7) {
      puVar8 = puVar2;
      lVar11 = lVar7;
      do {
        *puVar8 = *(undefined4 *)(((longlong)param_1 - (longlong)puVar2) + (longlong)puVar8);
        puVar8 = puVar8 + 1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    puVar8 = puVar2;
    if (0 < param_4) {
      pfVar9 = (float *)(puVar2 + lVar7 + -1);
      lVar11 = (longlong)puVar2 - (longlong)param_3;
      do {
        pfVar1 = (float *)(lVar11 + (longlong)param_3);
        *pfVar1 = *(float *)((longlong)pfVar1 + ((longlong)param_1 - (longlong)puVar2)) * *param_3;
        fVar14 = *param_3;
        param_3 = param_3 + 1;
        *pfVar9 = *(float *)((longlong)pfVar9 + ((longlong)param_1 - (longlong)puVar2)) * fVar14;
        pfVar9 = pfVar9 + -1;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
  }
  fVar14 = local_38[0];
  lVar13 = (longlong)(int)local_38[0];
  *(undefined4 *)((longlong)aiStack_48 + lVar4 + 8) = param_7;
  *(int *)((longlong)aiStack_48 + lVar4) = param_5 + 1;
  *(undefined8 *)((longlong)auStack_70 + lVar4) = 0x1452ef492;
  FUN_1452e93ac(puVar8,puVar8,param_2,fVar14);
  if (-1 < param_5) {
    lVar12 = lVar13 * 4 - (longlong)param_2;
    lVar11 = lVar10;
    do {
      fVar14 = 0.0;
      if (lVar13 + lVar11 < lVar7) {
        pfVar9 = (float *)(lVar12 + (longlong)puVar8 + (longlong)param_2);
        lVar6 = (lVar7 - lVar13) - lVar11;
        do {
          pfVar1 = (float *)(lVar10 + (longlong)pfVar9);
          fVar3 = *pfVar9;
          pfVar9 = pfVar9 + 1;
          fVar14 = *pfVar1 * fVar3 + fVar14;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + -4;
      *param_2 = fVar14 + *param_2;
      param_2 = param_2 + 1;
    } while (lVar11 <= param_5);
  }
  uVar5 = local_30 ^ (ulonglong)local_38;
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)auStack_70 + lVar4) = &UNK_1452ef500;
  FUN_144d8e3a0(uVar5);
}



// FUNCTION 1452ef51c FUN_1452ef51c body=431 status=ok
// SIG undefined FUN_1452ef51c(void)

void FUN_1452ef51c(longlong param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar3 = 0;
  uVar4 = (ulonglong)param_4;
  if ((param_5 * 2 < (int)param_2) && (param_6 != 0)) {
    fVar8 = (float)(int)param_2 /
            (float)(int)(*(int *)("assertion failed: overlap>=0" + (longlong)param_6 * 4 + 0x1c) *
                         param_5 + param_2);
    fVar8 = fVar8 * fVar8 * 0.5;
    dVar6 = cos((double)(fVar8 * 1.5707964));
    fVar9 = (float)dVar6;
    dVar6 = cos((double)((1.0 - fVar8) * 1.5707964));
    fVar8 = (float)dVar6;
    if ((int)(param_4 * 8) <= (int)param_2) {
      iVar2 = param_4 * 2;
      iVar3 = 1;
      while (((int)param_4 >> 2) + iVar2 < (int)param_2) {
        iVar2 = (iVar3 + 2) * (iVar3 + 1) * param_4;
        iVar3 = iVar3 + 1;
      }
    }
    uVar1 = (ulonglong)param_2 / (ulonglong)param_4;
    if (0 < (int)param_4) {
      do {
        if (param_3 < 0) {
          if (iVar3 != 0) {
            FUN_1452efba4(param_1,uVar1,iVar3,fVar8,fVar9);
          }
          fVar7 = fVar9;
          fVar5 = fVar8;
          iVar2 = 1;
LAB_1452ef68f:
          FUN_1452efba4(param_1,uVar1,iVar2,fVar7,fVar5);
        }
        else {
          FUN_1452efba4(param_1,uVar1,1,fVar9,-fVar8);
          if (iVar3 != 0) {
            fVar5 = -fVar9;
            fVar7 = fVar8;
            iVar2 = iVar3;
            goto LAB_1452ef68f;
          }
        }
        param_1 = param_1 + (longlong)(int)uVar1 * 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  return;
}



// FUNCTION 1452ef6cc FUN_1452ef6cc body=325 status=ok
// SIG undefined FUN_1452ef6cc(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452ef6cc(undefined8 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                  undefined8 param_6,undefined4 param_7,int param_8,undefined4 param_9)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined8 auStack_70 [5];
  int aiStack_48 [4];
  ulonglong local_38 [4];
  
  local_38[0] = DAT_14c707940 ^ (ulonglong)local_38;
  if (param_3 < 1) {
    auStack_70[0] = 0x1452ef722;
    FUN_144bca940("assertion failed: K>0\nalg_quant() needs at least one pulse",
                  "../../../third_party/opus/src/celt/vq.c",0x152);
  }
  if (param_2 < 2) {
    auStack_70[0] = 0x1452ef740;
    FUN_144bca940("assertion failed: N>1\nalg_quant() needs at least two dimensions",
                  "../../../third_party/opus/src/celt/vq.c",0x153);
  }
  uVar4 = (longlong)(param_2 + 3) * 4;
  uVar3 = uVar4 + 0xf;
  if (uVar3 <= uVar4) {
    uVar3 = 0xffffffffffffff0;
  }
  auStack_70[0] = 0x1452ef766;
  lVar2 = -(uVar3 & 0xfffffffffffffff0);
  *(undefined4 *)((longlong)aiStack_48 + lVar2 + 8) = param_4;
  lVar1 = (longlong)local_38 + lVar2;
  *(int *)((longlong)aiStack_48 + lVar2) = param_3;
  *(undefined8 *)((longlong)auStack_70 + lVar2) = 0x1452ef78b;
  FUN_1452ef51c(param_1,param_2,1,param_5);
  *(undefined4 *)((longlong)aiStack_48 + lVar2) = param_9;
  *(undefined8 *)((longlong)auStack_70 + lVar2) = 0x1452ef7a6;
  uVar5 = FUN_145515b10(param_1,lVar1,param_3,param_2);
  *(undefined8 *)((longlong)auStack_70 + lVar2) = 0x1452ef7ba;
  FUN_145515744(lVar1,param_2,param_3,param_6);
  if (param_8 != 0) {
    *(undefined4 *)((longlong)aiStack_48 + lVar2) = param_7;
    *(undefined8 *)((longlong)auStack_70 + lVar2) = 0x1452ef7dc;
    FUN_1452efc58(lVar1,param_1,param_2,uVar5);
    *(undefined4 *)((longlong)aiStack_48 + lVar2 + 8) = param_4;
    *(int *)((longlong)aiStack_48 + lVar2) = param_3;
    *(undefined8 *)((longlong)auStack_70 + lVar2) = 0x1452ef7f7;
    FUN_1452ef51c(param_1,param_2,0xffffffff,param_5);
  }
  *(undefined8 *)((longlong)auStack_70 + lVar2) = 0x1452ef805;
  FUN_1452efcc8(lVar1,param_2,param_5);
  uVar3 = local_38[0] ^ (ulonglong)local_38;
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)auStack_70 + lVar2) = &UNK_1452ef811;
  FUN_144d8e3a0(uVar3);
}



// FUNCTION 1452ef82c FUN_1452ef82c body=257 status=ok
// SIG undefined FUN_1452ef82c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452ef82c(undefined8 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                  undefined8 param_6,undefined4 param_7)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined8 auStack_60 [5];
  int aiStack_38 [4];
  ulonglong local_28 [2];
  
  local_28[0] = DAT_14c707940 ^ (ulonglong)local_28;
  if (param_3 < 1) {
    auStack_60[0] = 0x1452ef87f;
    FUN_144bca940("assertion failed: K>0\nalg_unquant() needs at least one pulse",
                  "../../../third_party/opus/src/celt/vq.c",0x173);
  }
  if (param_2 < 2) {
    auStack_60[0] = 0x1452ef89d;
    FUN_144bca940("assertion failed: N>1\nalg_unquant() needs at least two dimensions",
                  "../../../third_party/opus/src/celt/vq.c",0x174);
  }
  uVar3 = (longlong)param_2 * 4 + 0xf;
  if (uVar3 <= (ulonglong)((longlong)param_2 * 4)) {
    uVar3 = 0xffffffffffffff0;
  }
  auStack_60[0] = 0x1452ef8c3;
  lVar2 = -(uVar3 & 0xfffffffffffffff0);
  lVar1 = (longlong)local_28 + lVar2;
  *(undefined8 *)((longlong)auStack_60 + lVar2) = 0x1452ef8dc;
  uVar4 = FUN_145515888(lVar1,param_2,param_3,param_6);
  *(undefined4 *)((longlong)aiStack_38 + lVar2) = param_7;
  *(undefined8 *)((longlong)auStack_60 + lVar2) = 0x1452ef8f8;
  FUN_1452efc58(lVar1,param_1,param_2,uVar4);
  *(undefined4 *)((longlong)aiStack_38 + lVar2 + 8) = param_4;
  *(int *)((longlong)aiStack_38 + lVar2) = param_3;
  *(undefined8 *)((longlong)auStack_60 + lVar2) = 0x1452ef913;
  FUN_1452ef51c(param_1,param_2,0xffffffff,param_5);
  *(undefined8 *)((longlong)auStack_60 + lVar2) = 0x1452ef921;
  FUN_1452efcc8(lVar1,param_2,param_5);
  uVar3 = local_28[0] ^ (ulonglong)local_28;
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)auStack_60 + lVar2) = &UNK_1452ef92d;
  FUN_144d8e3a0(uVar3);
}



// FUNCTION 1452ef944 FUN_1452ef944 body=117 status=ok
// SIG undefined FUN_1452ef944(void)

void FUN_1452ef944(float *param_1,uint param_2,float param_3)

{
  ulonglong uVar1;
  float fVar2;
  double dVar3;
  
  uVar1 = (ulonglong)param_2;
  fVar2 = (float)FUN_144f37488(param_1,param_1,param_2);
  dVar3 = sqrt((double)(fVar2 + 1e-15));
  if (0 < (int)param_2) {
    do {
      *param_1 = (1.0 / (float)dVar3) * param_3 * *param_1;
      param_1 = param_1 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1452ef9bc FUN_1452ef9bc body=487 status=ok
// SIG undefined FUN_1452ef9bc(void)

int FUN_1452ef9bc(longlong param_1,float *param_2,int param_3,uint param_4)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = 1e-15;
  fVar8 = 1e-15;
  if (param_3 == 0) {
    fVar8 = (float)FUN_144f37488(param_1,param_1,param_4);
    fVar8 = fVar8 + 1e-15;
    fVar6 = (float)FUN_144f37488(param_2,param_2,param_4);
    fVar6 = fVar6 + 1e-15;
  }
  else if (0 < (int)param_4) {
    param_1 = param_1 - (longlong)param_2;
    uVar1 = (ulonglong)param_4;
    do {
      fVar5 = *(float *)(param_1 + (longlong)param_2);
      fVar2 = fVar5 + *param_2;
      fVar5 = fVar5 - *param_2;
      param_2 = param_2 + 1;
      fVar8 = fVar2 * fVar2 + fVar8;
      fVar6 = fVar5 * fVar5 + fVar6;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  dVar4 = sqrt((double)fVar8);
  fVar2 = (float)dVar4;
  dVar4 = sqrt((double)fVar6);
  fVar6 = (float)dVar4;
  fVar8 = fVar2 * fVar2;
  fVar5 = fVar6 * fVar6;
  if (1e-18 <= fVar5 + fVar8) {
    if (fVar5 <= fVar8) {
      fVar7 = 1.5707964;
      if (fVar6 < 0.0) {
        fVar7 = -1.5707964;
      }
      fVar3 = -1.5707964;
      if (0.0 <= fVar6 * fVar2) {
        fVar3 = 1.5707964;
      }
      fVar3 = (((fVar5 * 0.43157974 + fVar8) * fVar6 * fVar2) /
               ((fVar5 * 0.678484 + fVar8) * (fVar5 * 0.08595542 + fVar8)) + fVar7) - fVar3;
    }
    else {
      if (0.0 <= fVar6) {
        fVar3 = 1.5707964;
      }
      else {
        fVar3 = -1.5707964;
      }
      fVar3 = fVar3 - ((fVar8 * 0.43157974 + fVar5) * fVar6 * fVar2) /
                      ((fVar8 * 0.678484 + fVar5) * (fVar8 * 0.08595542 + fVar5));
    }
  }
  else {
    fVar3 = 0.0;
  }
  dVar4 = floor((double)(fVar3 * 10430.382 + 0.5));
  return (int)dVar4;
}



// FUNCTION 1452efba4 FUN_1452efba4 body=179 status=ok
// SIG undefined FUN_1452efba4(void)

void FUN_1452efba4(float *param_1,int param_2,int param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  ulonglong uVar5;
  
  if (0 < param_2 - param_3) {
    uVar5 = (ulonglong)(uint)(param_2 - param_3);
    pfVar4 = param_1;
    do {
      fVar1 = *pfVar4;
      fVar2 = pfVar4[param_3];
      pfVar4[param_3] = fVar2 * param_4 + fVar1 * param_5;
      *pfVar4 = fVar1 * param_4 + fVar2 * -param_5;
      pfVar4 = pfVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  iVar3 = param_2 + param_3 * -2 + -1;
  param_1 = param_1 + iVar3;
  if (-1 < iVar3) {
    do {
      fVar1 = *param_1;
      fVar2 = param_1[param_3];
      param_1[param_3] = fVar2 * param_4 + fVar1 * param_5;
      *param_1 = fVar1 * param_4 + fVar2 * -param_5;
      param_1 = param_1 + -1;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  return;
}



// FUNCTION 1452efc58 FUN_1452efc58 body=110 status=ok
// SIG undefined FUN_1452efc58(void)

void FUN_1452efc58(longlong param_1,float *param_2,int param_3,float param_4,float param_5)

{
  longlong lVar1;
  double dVar2;
  
  dVar2 = sqrt((double)param_4);
  lVar1 = 0;
  param_1 = param_1 - (longlong)param_2;
  do {
    lVar1 = lVar1 + 1;
    *param_2 = (float)*(int *)(param_1 + (longlong)param_2) * (1.0 / (float)dVar2) * param_5;
    param_2 = param_2 + 1;
  } while (lVar1 < param_3);
  return;
}



// FUNCTION 1452efcc8 FUN_1452efcc8 body=125 status=ok
// SIG undefined FUN_1452efcc8(void)

uint FUN_1452efcc8(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  if ((int)param_3 < 2) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    iVar3 = 0;
    iVar6 = 0;
    do {
      uVar5 = 0;
      lVar2 = 0;
      puVar4 = (uint *)(param_1 + (longlong)iVar3 * 4);
      do {
        uVar5 = uVar5 | *puVar4;
        lVar2 = lVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar2 < (int)(param_2 / param_3));
      iVar7 = iVar6 + 1;
      iVar3 = iVar3 + param_2 / param_3;
      uVar1 = uVar1 | (uint)(uVar5 != 0) << ((byte)iVar6 & 0x1f);
      iVar6 = iVar7;
    } while (iVar7 < (int)param_3);
  }
  return uVar1;
}



// FUNCTION 1452efd48 FUN_1452efd48 body=782 status=ok
// SIG undefined FUN_1452efd48(void)

undefined8 FUN_1452efd48(void *param_1,int param_2,int param_3,int param_4)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  
  memset(param_1,0,0x130);
  bVar5 = false;
  if (param_4 == 0) {
    if ((((param_2 != 8000) && (param_2 != 12000)) && (param_2 != 16000)) ||
       (((param_3 != 8000 && (param_3 != 12000)) &&
        ((param_3 != 16000 && ((param_3 != 24000 && (param_3 != 48000)))))))) {
      uVar4 = 0x65;
      goto LAB_1452efdc2;
    }
    cVar2 = (&DAT_149d32822)
            [((longlong)(int)((param_2 >> 0xc) - (uint)(16000 < param_2)) >> (24000 < param_2)) * 5
             + ((longlong)(int)((param_3 >> 0xc) - (uint)(16000 < param_3)) >> (24000 < param_3))];
  }
  else {
    if (((((param_2 != 8000) && (param_2 != 12000)) && (param_2 != 16000)) &&
        ((param_2 != 24000 && (param_2 != 48000)))) ||
       ((param_3 != 8000 && ((param_3 != 12000 && (param_3 != 16000)))))) {
      uVar4 = 0x5e;
      goto LAB_1452efdc2;
    }
    cVar2 = (&DAT_149d32814)
            [((longlong)(int)((param_2 >> 0xc) - (uint)(16000 < param_2)) >> (24000 < param_2)) * 3
             + ((longlong)(int)((param_3 >> 0xc) - (uint)(16000 < param_3)) >> (24000 < param_3))];
  }
  *(int *)((longlong)param_1 + 0x124) = (int)cVar2;
  *(int *)((longlong)param_1 + 0x11c) = param_2 / 1000;
  *(int *)((longlong)param_1 + 0x120) = param_3 / 1000;
  *(int *)((longlong)param_1 + 0x10c) = (param_2 / 1000) * 10;
  if (param_2 < param_3) {
    bVar5 = param_3 != param_2 * 2;
    *(uint *)((longlong)param_1 + 0x108) = bVar5 + 1;
  }
  else if (param_3 < param_2) {
    *(undefined4 *)((longlong)param_1 + 0x108) = 3;
    if (param_3 << 2 == param_2 * 3) {
      *(undefined4 *)((longlong)param_1 + 0x118) = 3;
      puVar1 = &DAT_149d9f890;
      *(undefined4 *)((longlong)param_1 + 0x114) = 0x12;
    }
    else if (param_3 * 3 == param_2 * 2) {
      *(undefined4 *)((longlong)param_1 + 0x118) = 2;
      puVar1 = &DAT_149d9f8d0;
      *(undefined4 *)((longlong)param_1 + 0x114) = 0x12;
    }
    else {
      if (param_3 * 2 == param_2) {
        *(undefined4 *)((longlong)param_1 + 0x114) = 0x18;
        puVar1 = &DAT_149d9f8f8;
      }
      else {
        if (param_3 * 3 == param_2) {
          puVar1 = &DAT_149d9f918;
        }
        else if (param_3 << 2 == param_2) {
          puVar1 = &DAT_149d9f940;
        }
        else {
          if (param_3 * 6 != param_2) {
            uVar4 = 0x9a;
LAB_1452efdc2:
            FUN_144bca940("assertion failed: 0","../../../third_party/opus/src/silk/resampler.c",
                          uVar4);
            return 0xffffffff;
          }
          puVar1 = &DAT_149d9f968;
        }
        *(undefined4 *)((longlong)param_1 + 0x114) = 0x24;
      }
      *(undefined4 *)((longlong)param_1 + 0x118) = 1;
    }
    *(undefined **)((longlong)param_1 + 0x128) = puVar1;
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x108) = 0;
  }
  iVar3 = (param_2 << bVar5 + 0xe) / param_3 << 2;
  *(int *)((longlong)param_1 + 0x110) = iVar3;
  if ((int)((ulonglong)((longlong)iVar3 * (longlong)param_3) >> 0x10) < param_2 << bVar5) {
    do {
      iVar3 = iVar3 + 1;
    } while ((int)((ulonglong)((longlong)iVar3 * (longlong)param_3) >> 0x10) < param_2 << bVar5);
    *(int *)((longlong)param_1 + 0x110) = iVar3;
  }
  return 0;
}



// FUNCTION 1452f0058 FUN_1452f0058 body=451 status=ok
// SIG undefined FUN_1452f0058(void)

undefined8 FUN_1452f0058(longlong param_1,void *param_2,void *param_3,int param_4)

{
  void *_Src;
  size_t _Size;
  int iVar1;
  int iVar2;
  void *_Src_00;
  
  iVar1 = *(int *)(param_1 + 0x11c);
  if (param_4 < iVar1) {
    FUN_144bca940("assertion failed: inLen >= S->Fs_in_kHz",
                  "../../../third_party/opus/src/silk/resampler.c",0xb8);
    iVar1 = *(int *)(param_1 + 0x11c);
  }
  iVar2 = *(int *)(param_1 + 0x124);
  if (iVar1 < iVar2) {
    FUN_144bca940("assertion failed: S->inputDelay <= S->Fs_in_kHz",
                  "../../../third_party/opus/src/silk/resampler.c",0xba);
    iVar1 = *(int *)(param_1 + 0x11c);
    iVar2 = *(int *)(param_1 + 0x124);
  }
  _Size = (longlong)(iVar1 - iVar2) * 2;
  memcpy((void *)(param_1 + ((longlong)iVar2 + 0x54) * 2),param_3,_Size);
  iVar1 = *(int *)(param_1 + 0x108);
  _Src = (void *)(param_1 + 0xa8);
  _Src_00 = (void *)(_Size + (longlong)param_3);
  if (iVar1 == 1) {
    thunk_FUN_145516960(param_1,param_2,_Src);
    thunk_FUN_145516960(param_1,(void *)((longlong)param_2 + (longlong)*(int *)(param_1 + 0x120) * 2
                                        ),_Src_00,param_4 - *(int *)(param_1 + 0x11c));
  }
  else if (iVar1 == 2) {
    FUN_145515f7c(param_1,param_2,_Src);
    FUN_145515f7c(param_1,(void *)((longlong)param_2 + (longlong)*(int *)(param_1 + 0x120) * 2),
                  _Src_00,param_4 - *(int *)(param_1 + 0x11c));
  }
  else if (iVar1 == 3) {
    FUN_1455161a0(param_1,param_2,_Src);
    FUN_1455161a0(param_1,(void *)((longlong)param_2 + (longlong)*(int *)(param_1 + 0x120) * 2),
                  _Src_00,param_4 - *(int *)(param_1 + 0x11c));
  }
  else {
    memcpy(param_2,_Src,(longlong)*(int *)(param_1 + 0x11c) * 2);
    memcpy((void *)((longlong)param_2 + (longlong)*(int *)(param_1 + 0x120) * 2),_Src_00,
           (longlong)(param_4 - *(int *)(param_1 + 0x11c)) * 2);
  }
  memcpy(_Src,(void *)((longlong)param_3 + (longlong)(param_4 - *(int *)(param_1 + 0x124)) * 2),
         (longlong)*(int *)(param_1 + 0x124) * 2);
  return 0;
}



// FUNCTION 1452f021c FUN_1452f021c body=652 status=ok
// SIG undefined FUN_1452f021c(void)

void FUN_1452f021c(short *param_1,undefined4 *param_2,short *param_3,short *param_4,int param_5,
                  int param_6)

{
  short *psVar1;
  short *psVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  undefined2 uVar10;
  int iVar11;
  short *psVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  
  *param_2 = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)((longlong)param_2 + (longlong)param_6 * 2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + param_6);
  iVar8 = (int)*param_1;
  iVar9 = (int)param_1[1];
  lVar14 = (longlong)(param_5 << 3);
  iVar11 = (int)(short)(0x10000 / (longlong)(param_5 << 3));
  sVar7 = *param_4;
  sVar3 = *param_1;
  sVar4 = param_4[2];
  sVar5 = param_1[1];
  if (0 < param_5 << 3) {
    psVar12 = (short *)(param_2 + 1);
    lVar16 = lVar14;
    do {
      psVar1 = psVar12 + -2;
      iVar8 = iVar8 + (((short)(sVar7 - sVar3) * iVar11 >> 0xf) + 1 >> 1);
      sVar6 = *psVar12;
      iVar9 = iVar9 + (((short)(sVar4 - sVar5) * iVar11 >> 0xf) + 1 >> 1);
      psVar2 = psVar12 + -1;
      psVar12 = psVar12 + 1;
      iVar15 = ((int)((ulonglong)
                      ((longlong)(*psVar1 * 0x200 + sVar6 * 0x200 + *psVar2 * 0x400) *
                      (longlong)(short)iVar8) >> 0x10) +
                (int)((ulonglong)((longlong)((int)*psVar2 << 0xb) * (longlong)(short)iVar9) >> 0x10)
                + *(short *)((longlong)param_3 + (-4 - (longlong)param_2) + (longlong)psVar12) *
                  0x100 >> 7) + 1 >> 1;
      uVar10 = (undefined2)iVar15;
      if (iVar15 < -0x8000) {
        uVar10 = 0x8000;
      }
      if (0x7fff < iVar15) {
        uVar10 = 0x7fff;
      }
      *(undefined2 *)((longlong)param_3 + (-4 - (longlong)param_2) + (longlong)psVar12) = uVar10;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  lVar16 = (longlong)param_6;
  if (lVar14 < lVar16) {
    sVar7 = *param_4;
    sVar3 = param_4[2];
    lVar13 = lVar16 - lVar14;
    psVar12 = (short *)((longlong)param_2 + lVar14 * 2 + 4);
    do {
      iVar8 = ((int)((ulonglong)
                     ((longlong)(psVar12[-2] * 0x200 + *psVar12 * 0x200 + psVar12[-1] * 0x400) *
                     (longlong)sVar7) >> 0x10) +
               (int)((ulonglong)((longlong)((int)psVar12[-1] << 0xb) * (longlong)sVar3) >> 0x10) +
               *(short *)((longlong)psVar12 + (longlong)param_3 + (-2 - (longlong)param_2)) * 0x100
              >> 7) + 1 >> 1;
      uVar10 = (undefined2)iVar8;
      if (iVar8 < -0x8000) {
        uVar10 = 0x8000;
      }
      if (0x7fff < iVar8) {
        uVar10 = 0x7fff;
      }
      *(undefined2 *)((longlong)psVar12 + (longlong)param_3 + (-2 - (longlong)param_2)) = uVar10;
      lVar13 = lVar13 + -1;
      psVar12 = psVar12 + 1;
    } while (lVar13 != 0);
  }
  *param_1 = *param_4;
  param_1[1] = param_4[2];
  if (0 < lVar16) {
    lVar14 = (longlong)param_2 - (longlong)param_3;
    do {
      param_3 = param_3 + 1;
      iVar9 = (int)*(short *)(lVar14 + (longlong)param_3);
      iVar8 = iVar9 + *param_3;
      iVar9 = iVar9 - *param_3;
      uVar10 = (undefined2)iVar8;
      if (iVar8 < -0x8000) {
        uVar10 = 0x8000;
      }
      if (0x7fff < iVar8) {
        uVar10 = 0x7fff;
      }
      *(undefined2 *)(lVar14 + (longlong)param_3) = uVar10;
      sVar7 = (short)iVar9;
      if (iVar9 < -0x8000) {
        sVar7 = -0x8000;
      }
      if (0x7fff < iVar9) {
        sVar7 = 0x7fff;
      }
      *param_3 = sVar7;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  return;
}



// FUNCTION 1452f04a8 FUN_1452f04a8 body=273 status=ok
// SIG undefined FUN_1452f04a8(void)

void FUN_1452f04a8(undefined8 param_1,int *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  int local_48;
  undefined4 local_44;
  int local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_34 = FUN_144f2f574(param_1,&DAT_149d32c40,8);
  puVar3 = &local_44;
  lVar6 = 2;
  lVar2 = 2;
  local_40 = local_34 / 5;
  local_34 = local_34 % 5;
  do {
    uVar1 = FUN_144f2f574(param_1,&DAT_149d32be0,8);
    puVar3[-1] = uVar1;
    uVar1 = FUN_144f2f574(param_1,&DAT_149d32be8,8);
    *puVar3 = uVar1;
    puVar3 = puVar3 + 3;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  piVar4 = &local_48;
  piVar5 = param_2;
  do {
    *piVar4 = *piVar4 + piVar4[2] * 3;
    *piVar5 = (int)(short)((ulonglong)
                           (uint)((int)(short)(&DAT_149d32c22)[*piVar4] -
                                 (int)(short)(&DAT_149d32c20)[*piVar4]) * 0x199a >> 0x10) *
              (int)(short)((short)piVar4[1] * 2 + 1) + (int)(short)(&DAT_149d32c20)[*piVar4];
    piVar5 = piVar5 + 1;
    lVar6 = lVar6 + -1;
    piVar4 = piVar4 + 3;
  } while (lVar6 != 0);
  *param_2 = *param_2 - param_2[1];
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 1452f05d0 FUN_1452f05d0 body=35 status=ok
// SIG undefined FUN_1452f05d0(void)

void FUN_1452f05d0(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_144f2f574(param_1,&DAT_149d32c5c,8);
  *param_2 = uVar1;
  return;
}



// FUNCTION 1452f05f4 FUN_1452f05f4 body=73 status=ok
// SIG undefined FUN_1452f05f4(void)

undefined8 FUN_1452f05f4(undefined4 *param_1)

{
  undefined4 uVar1;
  
  memset(param_1,0,0x10c0);
  param_1[0x252] = 1;
  *param_1 = 0x10000;
  uVar1 = FUN_144f2f804();
  param_1[0x418] = uVar1;
  FUN_145517848(param_1);
  FUN_145516ad4(param_1);
  return 0;
}



// FUNCTION 1452f0640 FUN_1452f0640 body=567 status=ok
// SIG undefined FUN_1452f0640(void)

undefined4 FUN_1452f0640(longlong param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = 0;
  if (((param_2 - 8U & 0xfffffff3) != 0) || (param_2 == 0x14)) {
    FUN_144bca940("assertion failed: fs_kHz == 8 || fs_kHz == 12 || fs_kHz == 16",
                  "../../../third_party/opus/src/silk/decoder_set_fs.c",0x2b);
  }
  if ((*(int *)(param_1 + 0x914) - 2U & 0xfffffffd) != 0) {
    FUN_144bca940("assertion failed: psDec->nb_subfr == MAX_NB_SUBFR || psDec->nb_subfr == MAX_NB_SUBFR/2"
                  ,"../../../third_party/opus/src/silk/decoder_set_fs.c",0x2c);
  }
  iVar7 = (int)(short)param_2;
  *(int *)(param_1 + 0x91c) = iVar7 * 5;
  iVar6 = (int)(short)(iVar7 * 5) * (int)*(short *)(param_1 + 0x914);
  iVar2 = *(int *)(param_1 + 0x90c);
  if ((iVar2 != param_2) || (*(int *)(param_1 + 0x910) != param_3)) {
    uVar1 = FUN_1452efd48(param_1 + 0x990,iVar7 * 1000,param_3,0);
    *(int *)(param_1 + 0x910) = param_3;
    iVar2 = *(int *)(param_1 + 0x90c);
  }
  if ((iVar2 == param_2) && (iVar5 = *(int *)(param_1 + 0x918), iVar6 == *(int *)(param_1 + 0x918)))
  goto LAB_1452f0838;
  if (param_2 == 8) {
    puVar3 = &DAT_149d9fb68;
    if (*(int *)(param_1 + 0x914) != 4) {
      puVar3 = &DAT_149d9fb84;
    }
    *(undefined **)(param_1 + 0x958) = puVar3;
    iVar2 = *(int *)(param_1 + 0x90c);
  }
  else {
    puVar3 = &DAT_149d9fb40;
    if (*(int *)(param_1 + 0x914) != 4) {
      puVar3 = &DAT_149d9fb78;
    }
    *(undefined **)(param_1 + 0x958) = puVar3;
  }
  if (iVar2 != param_2) {
    *(int *)(param_1 + 0x920) = iVar7 * 0x14;
    if ((param_2 - 8U & 0xfffffffb) == 0) {
      puVar3 = &DAT_149da0400;
      uVar4 = 10;
    }
    else {
      puVar3 = &DAT_149d9fb90;
      uVar4 = 0x10;
    }
    *(undefined4 *)(param_1 + 0x924) = uVar4;
    *(undefined **)(param_1 + 0xac0) = puVar3;
    if (param_2 == 0x10) {
      puVar3 = &DAT_149d32bf8;
LAB_1452f07d2:
      *(undefined **)(param_1 + 0x950) = puVar3;
    }
    else {
      if (param_2 == 0xc) {
        puVar3 = &DAT_149d32bf0;
        goto LAB_1452f07d2;
      }
      if (param_2 == 8) {
        puVar3 = &DAT_149d32be4;
        goto LAB_1452f07d2;
      }
      FUN_144bca940("assertion failed: 0","../../../third_party/opus/src/silk/decoder_set_fs.c",0x59
                   );
    }
    *(undefined4 *)(param_1 + 0x105c) = 0;
    *(undefined4 *)(param_1 + 0x948) = 1;
    *(undefined4 *)(param_1 + 0x904) = 100;
    *(undefined1 *)(param_1 + 0x908) = 10;
    memset((void *)(param_1 + 0x504),0,0x400);
  }
  *(int *)(param_1 + 0x90c) = param_2;
  *(int *)(param_1 + 0x918) = iVar6;
  iVar5 = iVar6;
LAB_1452f0838:
  if (0x13f < iVar5 - 1U) {
    FUN_144bca940("assertion failed: psDec->frame_length > 0 && psDec->frame_length <= MAX_FRAME_LENGTH"
                  ,"../../../third_party/opus/src/silk/decoder_set_fs.c",0x68);
  }
  return uVar1;
}



// FUNCTION 1452f0878 FUN_1452f0878 body=621 status=ok
// SIG undefined FUN_1452f0878(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452f0878(longlong param_1,undefined8 param_2,void *param_3,int *param_4,int param_5,
                  undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  size_t _Size;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined8 uStack_100;
  undefined1 auStack_f8 [32];
  undefined4 local_d8 [4];
  undefined1 local_c8 [136];
  undefined4 local_40;
  int *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)&local_38;
  iVar3 = *(int *)(param_1 + 0x918);
  puVar10 = auStack_f8;
  local_40 = 0;
  local_38 = param_4;
  if (0x13f < iVar3 - 1U) {
    uStack_100 = 0x1452f08fa;
    FUN_144bca940("assertion failed: L > 0 && L <= MAX_FRAME_LENGTH",
                  "../../../third_party/opus/src/silk/decode_frame.c",0x3a);
  }
  if ((param_5 == 0) ||
     ((param_5 == 2 && (*(int *)(param_1 + 0x980 + (longlong)*(int *)(param_1 + 0x960) * 4) == 1))))
  {
    uVar5 = ((longlong)(iVar3 + 0xf) & 0xfffffffffffffff0U) * 2;
    uVar9 = uVar5 + 0xf;
    if (uVar9 <= uVar5) {
      uVar9 = 0xffffffffffffff0;
    }
    uStack_100 = 0x1452f0970;
    lVar6 = -(uVar9 & 0xfffffffffffffff0);
    puVar10 = auStack_f8 + lVar6;
    uVar4 = *(undefined4 *)(param_1 + 0x960);
    *(undefined4 *)((longlong)local_d8 + lVar6) = param_6;
    *(undefined8 *)(auStack_f8 + lVar6 + -8) = 0x1452f0991;
    FUN_1452f0b00(param_1,param_2,uVar4);
    cVar1 = *(char *)(param_1 + 0xae6);
    cVar2 = *(char *)(param_1 + 0xae5);
    *(undefined4 *)((longlong)local_d8 + lVar6) = *(undefined4 *)(param_1 + 0x918);
    *(undefined8 *)(auStack_f8 + lVar6 + -8) = 0x1452f09b6;
    FUN_1452f0ebc(param_2,local_c8 + lVar6,(int)cVar2,(int)cVar1);
    *(undefined8 *)(auStack_f8 + lVar6 + -8) = 0x1452f09c4;
    FUN_145517f38(param_1,local_c8,param_6);
    *(undefined4 *)((longlong)local_d8 + lVar6) = param_7;
    *(undefined8 *)(auStack_f8 + lVar6 + -8) = 0x1452f09dc;
    FUN_1455181b4(param_1,local_c8,param_3,local_c8 + lVar6);
    *(undefined4 *)((longlong)local_d8 + lVar6) = param_7;
    *(undefined8 *)(auStack_f8 + lVar6 + -8) = 0x1452f09f1;
    FUN_145516b0c(param_1,local_c8,param_3,0);
    *(undefined4 *)(param_1 + 0x1058) = 0;
    *(int *)(param_1 + 0x105c) = (int)*(char *)(param_1 + 0xae5);
    if (2 < (uint)(int)*(char *)(param_1 + 0xae5)) {
      *(undefined8 *)(auStack_f8 + lVar6 + -8) = 0x1452f0a23;
      FUN_144bca940("assertion failed: psDec->prevSignalType >= 0 && psDec->prevSignalType <= 2",
                    "../../../third_party/opus/src/silk/decode_frame.c",0x5e);
    }
    *(undefined4 *)(param_1 + 0x948) = 0;
    param_4 = local_38;
  }
  else {
    *(undefined1 *)(param_1 + 0xae5) = *(undefined1 *)(param_1 + 0x105c);
    local_d8[0] = param_7;
    uStack_100 = 0x1452f0941;
    FUN_145516b0c(param_1,local_c8,param_3,1);
  }
  iVar7 = *(int *)(param_1 + 0x920);
  iVar8 = *(int *)(param_1 + 0x918);
  if (iVar7 < iVar8) {
    *(undefined8 *)(puVar10 + -8) = 0x1452f0a57;
    FUN_144bca940("assertion failed: psDec->ltp_mem_length >= psDec->frame_length",
                  "../../../third_party/opus/src/silk/decode_frame.c",0x6b);
    iVar7 = *(int *)(param_1 + 0x920);
    iVar8 = *(int *)(param_1 + 0x918);
  }
  _Size = (longlong)(iVar7 - iVar8) * 2;
  *(undefined8 *)(puVar10 + -8) = 0x1452f0a87;
  memmove((void *)(param_1 + 0x544),(void *)(param_1 + ((longlong)iVar8 + 0x2a2) * 2),_Size);
  iVar7 = *(int *)(param_1 + 0x918);
  *(undefined8 *)(puVar10 + -8) = 0x1452f0aa3;
  memcpy((void *)(param_1 + 0x544 + _Size),param_3,(longlong)iVar7 * 2);
  *(undefined8 *)(puVar10 + -8) = 0x1452f0ab4;
  FUN_145517898(param_1,local_c8,param_3,iVar3);
  *(undefined8 *)(puVar10 + -8) = 0x1452f0ac2;
  FUN_145516b88(param_1,param_3,iVar3);
  *(undefined4 *)(param_1 + 0x904) = local_d8[(longlong)*(int *)(param_1 + 0x914) + 3];
  *param_4 = iVar3;
  uVar9 = local_30 ^ (ulonglong)&local_38;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar10 + -8) = &UNK_1452f0ae5;
  FUN_144d8e3a0(uVar9);
}



// FUNCTION 1452f0b00 FUN_1452f0b00 body=929 status=ok
// SIG undefined FUN_1452f0b00(void)

void FUN_1452f0b00(longlong param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  short *psVar7;
  undefined1 *puVar8;
  char *pcVar9;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  short local_68 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_4 == 0) && (*(int *)(param_1 + 0x970 + (longlong)param_3 * 4) == 0)) {
    iVar4 = FUN_144f2f574(param_2,&DAT_149d32c18,8);
  }
  else {
    iVar4 = FUN_144f2f574(param_2,&DAT_149d32c14,8);
    iVar4 = iVar4 + 2;
  }
  cVar2 = (char)(iVar4 >> 1);
  *(char *)(param_1 + 0xae5) = cVar2;
  *(byte *)(param_1 + 0xae6) = (byte)iVar4 & 1;
  if (param_5 == 2) {
    uVar1 = FUN_144f2f574(param_2,&DAT_149da0a28,8);
    *(undefined1 *)(param_1 + 0xac8) = uVar1;
  }
  else {
    cVar2 = FUN_144f2f574(param_2,&DAT_149da0a10 + (longlong)cVar2 * 8,8);
    *(char *)(param_1 + 0xac8) = cVar2 << 3;
    cVar2 = FUN_144f2f574(param_2,&DAT_149d32bf8,8);
    *(char *)(param_1 + 0xac8) = *(char *)(param_1 + 0xac8) + cVar2;
  }
  iVar4 = 1;
  if (1 < *(int *)(param_1 + 0x914)) {
    puVar8 = (undefined1 *)(param_1 + 0xac9);
    do {
      uVar1 = FUN_144f2f574(param_2,&DAT_149da0a28,8);
      *puVar8 = uVar1;
      iVar4 = iVar4 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x914));
  }
  cVar2 = FUN_144f2f574(param_2,(longlong)
                                (((int)*(char *)(param_1 + 0xae5) >> 1) *
                                (int)**(short **)(param_1 + 0xac0)) +
                                *(longlong *)(*(short **)(param_1 + 0xac0) + 0xc),8);
  *(char *)(param_1 + 0xad0) = cVar2;
  FUN_145518bbc(local_68,local_78,*(undefined8 *)(param_1 + 0xac0),(int)cVar2);
  lVar6 = *(longlong *)(param_1 + 0xac0);
  if ((int)*(short *)(lVar6 + 2) != *(int *)(param_1 + 0x924)) {
    FUN_144bca940("assertion failed: psDec->psNLSF_CB->order == psDec->LPC_order",
                  "../../../third_party/opus/src/silk/decode_indices.c",0x52);
    lVar6 = *(longlong *)(param_1 + 0xac0);
  }
  iVar4 = 0;
  if (0 < *(short *)(lVar6 + 2)) {
    pcVar9 = (char *)(param_1 + 0xad1);
    psVar7 = local_68;
    do {
      iVar5 = FUN_144f2f574(param_2,(longlong)*psVar7 + *(longlong *)(lVar6 + 0x30),8);
      if (iVar5 == 0) {
        iVar5 = FUN_144f2f574(param_2,&DAT_149d32c00,8);
        iVar5 = -iVar5;
      }
      else if (iVar5 == 8) {
        iVar5 = FUN_144f2f574(param_2,&DAT_149d32c00,8);
        iVar5 = iVar5 + 8;
      }
      iVar4 = iVar4 + 1;
      *pcVar9 = (char)iVar5 + -4;
      psVar7 = psVar7 + 1;
      lVar6 = *(longlong *)(param_1 + 0xac0);
      pcVar9 = pcVar9 + 1;
    } while (iVar4 < *(short *)(lVar6 + 2));
  }
  if (*(int *)(param_1 + 0x914) == 4) {
    uVar1 = FUN_144f2f574(param_2,&DAT_149d32c70,8);
  }
  else {
    uVar1 = 4;
  }
  *(undefined1 *)(param_1 + 0xae7) = uVar1;
  if (*(char *)(param_1 + 0xae5) == '\x02') {
    if (((param_5 == 2) && (*(int *)(param_1 + 0x968) == 2)) &&
       (sVar3 = FUN_144f2f574(param_2,&DAT_149d9fb28,8), 0 < sVar3)) {
      sVar3 = *(short *)(param_1 + 0x96c) + -9 + sVar3;
      *(short *)(param_1 + 0xae2) = sVar3;
    }
    else {
      sVar3 = FUN_144f2f574(param_2,&DAT_149d9fb08,8);
      *(short *)(param_1 + 0xae2) = sVar3 * (short)(*(int *)(param_1 + 0x90c) >> 1);
      sVar3 = FUN_144f2f574(param_2,*(undefined8 *)(param_1 + 0x950),8);
      *(short *)(param_1 + 0xae2) = *(short *)(param_1 + 0xae2) + sVar3;
      sVar3 = *(short *)(param_1 + 0xae2);
    }
    *(short *)(param_1 + 0x96c) = sVar3;
    uVar1 = FUN_144f2f574(param_2,*(undefined8 *)(param_1 + 0x958),8);
    *(undefined1 *)(param_1 + 0xae4) = uVar1;
    uVar1 = FUN_144f2f574(param_2,&DAT_149da0a54,8);
    iVar4 = 0;
    *(undefined1 *)(param_1 + 0xae8) = uVar1;
    if (0 < *(int *)(param_1 + 0x914)) {
      puVar8 = (undefined1 *)(param_1 + 0xacc);
      do {
        uVar1 = FUN_144f2f574(param_2,(&PTR_DAT_149da0a58)[*(char *)(param_1 + 0xae8)],8);
        *puVar8 = uVar1;
        iVar4 = iVar4 + 1;
        puVar8 = puVar8 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x914));
    }
    if (param_5 == 0) {
      uVar1 = FUN_144f2f574(param_2,&DAT_149d32c08,8);
      *(undefined1 *)(param_1 + 0xae9) = uVar1;
    }
    else {
      *(undefined1 *)(param_1 + 0xae9) = 0;
    }
  }
  *(int *)(param_1 + 0x968) = (int)*(char *)(param_1 + 0xae5);
  uVar1 = FUN_144f2f574(param_2,&DAT_149d32be4,8);
  *(undefined1 *)(param_1 + 0xaea) = uVar1;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
}



// FUNCTION 1452f0ebc FUN_1452f0ebc body=522 status=ok
// SIG undefined FUN_1452f0ebc(void)

void FUN_1452f0ebc(undefined8 param_1,longlong param_2,int param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  undefined8 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint *puVar10;
  longlong lVar11;
  short sVar12;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  uint *local_120;
  uint local_118;
  undefined4 local_114;
  int local_110;
  undefined8 local_108;
  longlong local_100;
  uint local_f8 [20];
  uint auStack_a8 [20];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_114 = param_4;
  local_110 = param_3;
  local_108 = param_1;
  local_100 = param_2;
  iVar4 = FUN_144f2f574(param_1,&DAT_149da0df8 + ((longlong)param_3 >> 1) * 9,8);
  uVar7 = param_5 >> 4;
  if ((int)(uVar7 << 4) < param_5) {
    if (param_5 != 0x78) {
      local_118 = uVar7;
      FUN_144bca940("assertion failed: frame_length == 12 * 10",
                    "../../../third_party/opus/src/silk/decode_pulses.c",0x3b);
    }
    uVar7 = uVar7 + 1;
  }
  local_118 = uVar7;
  if (0 < (int)uVar7) {
    lVar11 = 0;
    uVar8 = (ulonglong)uVar7;
    do {
      *(undefined4 *)((longlong)auStack_a8 + lVar11) = 0;
      iVar5 = FUN_144f2f574(param_1,&DAT_149da0c90 + (longlong)iVar4 * 0x12,8);
      *(int *)((longlong)local_f8 + lVar11) = iVar5;
      if (iVar5 == 0x11) {
        iVar5 = 0;
        do {
          iVar5 = iVar5 + 1;
          iVar6 = FUN_144f2f574(param_1,&DAT_149da0d32 + (iVar5 == 10),8);
          *(int *)((longlong)local_f8 + lVar11) = iVar6;
        } while (iVar6 == 0x11);
        *(int *)((longlong)auStack_a8 + lVar11) = iVar5;
      }
      lVar11 = lVar11 + 4;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  iVar4 = 0;
  if (0 < (int)uVar7) {
    puVar10 = local_f8;
    do {
      if ((int)*puVar10 < 1) {
        memset((void *)(param_2 + (longlong)((int)(short)iVar4 << 4) * 2),0,0x20);
      }
      else {
        FUN_1455190f0();
      }
      iVar4 = iVar4 + 1;
      puVar10 = puVar10 + 1;
    } while (iVar4 < (int)uVar7);
  }
  iVar4 = 0;
  if (0 < (int)uVar7) {
    lVar11 = 0;
    do {
      uVar2 = local_108;
      uVar1 = *(uint *)((longlong)auStack_a8 + lVar11);
      if (0 < (int)uVar1) {
        lVar9 = 0;
        param_2 = param_2 + (longlong)((int)(short)iVar4 << 4) * 2;
        do {
          sVar12 = *(short *)(param_2 + lVar9 * 2);
          uVar8 = (ulonglong)uVar1;
          if (0 < (int)uVar1) {
            do {
              sVar3 = FUN_144f2f574(uVar2,&DAT_149d32bdc,8);
              sVar12 = sVar3 + sVar12 * 2;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          *(short *)(param_2 + lVar9 * 2) = sVar12;
          lVar9 = lVar9 + 1;
        } while (lVar9 < 0x10);
        *(uint *)((longlong)local_f8 + lVar11) = *(uint *)((longlong)local_f8 + lVar11) | uVar1 << 5
        ;
        param_2 = local_100;
        uVar7 = local_118;
      }
      iVar4 = iVar4 + 1;
      lVar11 = lVar11 + 4;
      param_1 = local_108;
    } while (iVar4 < (int)uVar7);
  }
  local_120 = local_f8;
  local_128 = local_114;
  FUN_145518d60(param_1,param_2,param_5,local_110);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_148);
}



// FUNCTION 1452f10dc FUN_1452f10dc body=258 status=ok
// SIG undefined FUN_1452f10dc(void)

int FUN_1452f10dc(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar1 = (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
  if (uVar1 == 0) {
    iVar7 = 0x20;
  }
  else {
    iVar7 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    iVar7 = 0x1f - iVar7;
  }
  iVar8 = param_1 << ((byte)(iVar7 + -1) & 0x1f);
  uVar1 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  if (uVar1 == 0) {
    iVar5 = 0x20;
  }
  else {
    iVar5 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar5 = 0x1f - iVar5;
  }
  iVar4 = param_2 << ((byte)(iVar5 + -1) & 0x1f);
  lVar3 = (longlong)(short)(0x1fffffff / (longlong)(iVar4 >> 0x10));
  iVar6 = (int)((ulonglong)(iVar8 * lVar3) >> 0x10);
  iVar6 = iVar6 + (int)((ulonglong)
                        ((iVar8 + (int)((ulonglong)((longlong)iVar6 * (longlong)iVar4) >> 0x20) * -8
                         ) * lVar3) >> 0x10);
  iVar7 = (((iVar7 + -1) - (iVar5 + -1)) - param_3) + 0x1d;
  if (iVar7 < 0) {
    bVar2 = -(byte)iVar7;
    iVar4 = -0x80000000 >> (bVar2 & 0x1f);
    iVar5 = 0x7fffffff >> (bVar2 & 0x1f);
    iVar8 = iVar6;
    if (iVar6 < iVar5) {
      iVar8 = iVar5;
    }
    if (iVar4 < iVar6) {
      iVar8 = iVar4;
    }
    iVar7 = iVar6;
    if (iVar6 < iVar4) {
      iVar7 = iVar4;
    }
    if (iVar5 < iVar6) {
      iVar7 = iVar5;
    }
    if (iVar5 < iVar4) {
      iVar7 = iVar8;
    }
    iVar7 = iVar7 << (bVar2 & 0x1f);
  }
  else if (iVar7 < 0x20) {
    iVar7 = iVar6 >> ((byte)iVar7 & 0x1f);
  }
  else {
    iVar7 = 0;
  }
  return iVar7;
}



// FUNCTION 1452f11e0 FUN_1452f11e0 body=2079 status=ok
// SIG undefined FUN_1452f11e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452f11e0(short *param_1,short *param_2,longlong param_3,undefined8 param_4,char *param_5,
                  int *param_6,int param_7,short param_8,int param_9,int param_10,uint param_11)

{
  short *psVar1;
  undefined4 *puVar2;
  longlong lVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  short sVar18;
  int iVar19;
  short *psVar20;
  short *psVar21;
  short sVar22;
  undefined2 uVar23;
  int iVar24;
  uint uVar25;
  short *psVar26;
  ulonglong uVar27;
  longlong lVar28;
  int iVar29;
  ulonglong uVar30;
  undefined4 *puVar31;
  undefined8 auStack_d0 [5];
  uint auStack_a8 [3];
  short asStack_9c [2];
  int local_98;
  int iStack_94;
  int local_90;
  int local_8c;
  ulonglong local_88;
  int local_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  uint local_60;
  short local_5c [2];
  int local_58 [2];
  longlong local_50;
  short *local_48;
  undefined4 *local_40;
  short *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)&local_98;
  uVar30 = (ulonglong)(int)param_11;
  psVar26 = param_2 + -2;
  local_48 = param_1;
  local_78 = param_4;
  local_50 = param_3;
  lVar28 = uVar30 + 2;
  local_38 = psVar26;
  local_60 = param_11;
  uVar17 = lVar28 * 2 + 0xf;
  local_88 = uVar30;
  if (uVar17 <= (ulonglong)(lVar28 * 2)) {
    uVar17 = 0xffffffffffffff0;
  }
  auStack_d0[0] = 0x1452f126f;
  lVar7 = -(uVar17 & 0xfffffffffffffff0);
  puVar2 = (undefined4 *)((longlong)&local_98 + lVar7);
  local_40 = puVar2;
  uVar17 = uVar30;
  if (0 < lVar28) {
    psVar21 = (short *)(param_3 + -4);
    do {
      sVar18 = *psVar21;
      iVar24 = (int)*(short *)(((longlong)param_2 - param_3) + (longlong)psVar21);
      psVar21 = psVar21 + 1;
      iVar19 = iVar24 + sVar18;
      uVar25 = iVar24 - sVar18;
      *(ushort *)((longlong)psVar26 + (2 - param_3) + (longlong)psVar21) =
           (short)(iVar19 >> 1) + ((ushort)iVar19 & 1);
      iVar19 = (uVar25 & 1) + ((int)uVar25 >> 1);
      sVar18 = ((ushort)uVar25 & 1) + (short)((int)uVar25 >> 1);
      if (iVar19 < -0x8000) {
        sVar18 = -0x8000;
      }
      if (0x7fff < iVar19) {
        sVar18 = 0x7fff;
      }
      *(short *)((longlong)puVar2 + (2 - param_3) + (longlong)psVar21) = sVar18;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    uVar30 = (ulonglong)local_60;
    uVar17 = local_88;
  }
  psVar21 = local_48;
  uVar25 = (uint)uVar30;
  uVar27 = uVar17 * 2;
  *(undefined4 *)psVar26 = *(undefined4 *)(local_48 + 2);
  *puVar2 = *(undefined4 *)(local_48 + 4);
  *(undefined4 *)(psVar21 + 2) = *(undefined4 *)(psVar26 + uVar17);
  *(undefined4 *)(psVar21 + 4) = *(undefined4 *)(uVar27 + (longlong)puVar2);
  uVar17 = uVar27 + 0xf;
  if (uVar17 <= uVar27) {
    uVar17 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar7) = 0x1452f1348;
  lVar8 = -(uVar17 & 0xfffffffffffffff0);
  uVar17 = uVar27 + 0xf;
  lVar28 = (longlong)&local_98 + lVar8 + lVar7;
  local_68 = lVar28;
  if (uVar17 <= uVar27) {
    uVar17 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7) = 0x1452f1369;
  lVar9 = -(uVar17 & 0xfffffffffffffff0);
  lVar10 = (longlong)&local_98 + lVar9 + lVar8 + lVar7;
  local_70 = lVar10;
  if (0 < (int)uVar25) {
    uVar17 = uVar30 & 0xffffffff;
    psVar20 = param_2;
    do {
      psVar1 = psVar20 + 1;
      sVar18 = (short)(((int)psVar20[-2] + psVar20[-1] * 2 + (int)*psVar20 >> 1) + 1 >> 1);
      *(short *)((lVar28 - (longlong)psVar26) + -6 + (longlong)psVar1) = sVar18;
      *(short *)((lVar10 - (longlong)psVar26) + -6 + (longlong)psVar1) = psVar20[-1] - sVar18;
      uVar17 = uVar17 - 1;
      psVar20 = psVar1;
    } while (uVar17 != 0);
  }
  uVar17 = uVar27 + 0xf;
  if (uVar17 <= uVar27) {
    uVar17 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar9 + lVar8 + lVar7) = 0x1452f13e9;
  lVar10 = -(uVar17 & 0xfffffffffffffff0);
  uVar17 = uVar27 + 0xf;
  lVar28 = (longlong)&local_98 + lVar10 + lVar9 + lVar8 + lVar7;
  local_88 = lVar28;
  if (uVar17 <= uVar27) {
    uVar17 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar10 + lVar9 + lVar8 + lVar7) = 0x1452f140a;
  lVar11 = -(uVar17 & 0xfffffffffffffff0);
  lVar3 = (longlong)&local_98 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7;
  uVar17 = lVar28;
  if (0 < (int)uVar25) {
    uVar27 = uVar30 & 0xffffffff;
    psVar20 = (short *)((longlong)&iStack_94 + lVar7);
    do {
      psVar1 = psVar20 + 1;
      sVar18 = (short)(((int)psVar20[-2] + psVar20[-1] * 2 + (int)*psVar20 >> 1) + 1 >> 1);
      *(short *)((lVar28 - (longlong)puVar2) + -6 + (longlong)psVar1) = sVar18;
      *(short *)((lVar3 - (longlong)puVar2) + -6 + (longlong)psVar1) = psVar20[-1] - sVar18;
      uVar27 = uVar27 - 1;
      uVar17 = local_88;
      psVar20 = psVar1;
    } while (uVar27 != 0);
  }
  local_80 = param_10;
  lVar28 = 0x28f;
  if (uVar25 == param_10 * 10) {
    lVar28 = 0x148;
  }
  lVar28 = lVar28 * ((int)param_8 * (int)param_8);
  *(int *)((longlong)auStack_a8 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + 8) =
       (int)((ulonglong)lVar28 >> 0x10);
  lVar13 = local_68;
  local_88 = lVar28 >> 0x10;
  *(uint *)((longlong)auStack_a8 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7) = uVar25;
  *(undefined8 *)((longlong)auStack_d0 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7) = 0x1452f14bd;
  uVar14 = FUN_145519560(local_5c,lVar13,uVar17,psVar21 + 6);
  lVar28 = local_70;
  _local_98 = CONCAT44(iStack_94,uVar14);
  *(int *)((longlong)auStack_a8 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + 8) = (int)local_88;
  *(uint *)((longlong)auStack_a8 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7) = uVar25;
  *(undefined8 *)((longlong)auStack_d0 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7) = 0x1452f14e1;
  uVar14 = FUN_145519560(local_58,lVar28,lVar3);
  _local_98 = CONCAT44(uVar14,local_98);
  local_58[0] = local_58[0] + local_5c[0] * 3;
  local_90 = 0x10000;
  if (local_58[0] < 0x10000) {
    local_90 = local_58[0];
  }
  iVar19 = 600;
  if (uVar25 == param_10 * 10) {
    iVar19 = 0x4b0;
  }
  local_68 = CONCAT44(local_68._4_4_,local_90);
  iVar24 = param_7 - iVar19;
  if (param_7 - iVar19 < 1) {
    iVar24 = 1;
  }
  local_70 = CONCAT44(local_70._4_4_,(int)(short)param_10);
  local_90 = local_90 * 3;
  iVar19 = local_90 + 0xd0000;
  iVar29 = (short)param_10 * 600 + 2000;
  local_8c = iVar24;
  *(undefined8 *)((longlong)auStack_d0 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7) = 0x1452f1552;
  iVar19 = FUN_1452f10dc(iVar24,iVar19,0x13);
  *param_6 = iVar19;
  if (iVar19 < iVar29) {
    *param_6 = iVar29;
    iVar19 = local_90 + 0x10000;
    param_6[1] = iVar24 - iVar29;
    *(undefined8 *)((longlong)auStack_d0 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7) = 0x1452f1599;
    iVar19 = FUN_1452f10dc((iVar24 - iVar29) * 2 - iVar29,
                           (longlong)iVar19 * (longlong)(short)iVar29 >> 0x10,0x10);
    iVar29 = iVar19;
    if (iVar19 < 0) {
      iVar29 = 0;
    }
    if (0x4000 < iVar19) {
      iVar29 = 0x4000;
    }
  }
  else {
    iVar29 = 0x4000;
    param_6[1] = iVar24 - iVar19;
  }
  uVar12 = local_78;
  iVar19 = 0x4000;
  local_90 = 0x4000;
  psVar21[0xe] = psVar21[0xe] +
                 (short)((ulonglong)(uint)(iVar29 - psVar21[0xe]) * (longlong)(short)local_88 >>
                        0x10);
  *param_5 = '\0';
  if (param_9 == 0) {
    if (psVar21[0xf] == 0) {
      if ((local_8c << 3 < (int)local_70 * 0x1e78 + 26000) ||
         (sVar18 = psVar21[0xe],
         (int)((ulonglong)((longlong)sVar18 * (longlong)(int)local_68) >> 0x10) < 0x333)) {
        _local_98 = CONCAT44((int)(short)iStack_94 * (int)psVar21[0xe] >> 0xe,
                             (int)(short)local_98 * (int)psVar21[0xe] >> 0xe);
        *(undefined8 *)((longlong)auStack_d0 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7) =
             0x1452f166f;
        FUN_1455197c0(&local_98,uVar12);
        iVar19 = 0;
        *param_6 = local_8c;
        param_6[1] = 0;
        local_90 = 0;
        _local_98 = 0;
        *param_5 = '\x01';
        goto LAB_1452f173a;
      }
LAB_1452f16be:
      if (0x3ccd < sVar18) goto LAB_1452f15f7;
      _local_98 = CONCAT44((int)(short)iStack_94 * (int)sVar18 >> 0xe,
                           (int)(short)local_98 * (int)sVar18 >> 0xe);
      *(undefined8 *)((longlong)auStack_d0 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7) = 0x1452f16f6;
      FUN_1455197c0(&local_98,uVar12);
      iVar19 = (int)psVar21[0xe];
    }
    else {
      if (((int)local_70 * 0x19c8 + 22000 <= local_8c << 3) &&
         (sVar18 = psVar21[0xe],
         0x147 < (int)((ulonglong)((longlong)sVar18 * (longlong)(int)local_68) >> 0x10)))
      goto LAB_1452f16be;
      _local_98 = CONCAT44((int)(short)iStack_94 * (int)psVar21[0xe] >> 0xe,
                           (int)(short)local_98 * (int)psVar21[0xe] >> 0xe);
      *(undefined8 *)((longlong)auStack_d0 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7) = 0x1452f172a;
      FUN_1455197c0(&local_98,uVar12);
      iVar19 = 0;
      _local_98 = 0;
    }
    local_90 = iVar19;
  }
  else {
    _local_98 = 0;
    iVar19 = 0;
    local_90 = 0;
LAB_1452f15f7:
    *(undefined8 *)((longlong)auStack_d0 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7) = 0x1452f1604;
    FUN_1455197c0(&local_98,uVar12);
  }
LAB_1452f173a:
  if (*param_5 == '\x01') {
    psVar21[0x10] = psVar21[0x10] + (short)uVar30 + (short)local_80 * -8;
    if (local_80 * 5 <= (int)psVar21[0x10]) {
      sVar18 = 10000;
      goto LAB_1452f1775;
    }
    *param_5 = '\0';
  }
  else {
    sVar18 = 0;
LAB_1452f1775:
    psVar21[0x10] = sVar18;
    if (*param_5 != '\0') goto LAB_1452f17a7;
  }
  if (param_6[1] < 1) {
    local_8c = local_8c + -1;
    param_6[1] = 1;
    if (local_8c < 1) {
      local_8c = 1;
    }
    *param_6 = local_8c;
  }
LAB_1452f17a7:
  sVar18 = psVar21[0xf];
  iVar29 = -(int)*psVar21;
  sVar4 = *psVar21;
  local_68 = CONCAT44(local_68._4_4_,iVar29);
  iVar15 = -(int)psVar21[1];
  local_70 = CONCAT44(local_70._4_4_,iVar15);
  iVar16 = (int)sVar18 << 10;
  local_8c = iVar16;
  lVar28 = (longlong)(local_80 << 3);
  sVar5 = psVar21[1];
  sVar22 = (short)(0x10000 / (longlong)(local_80 << 3));
  psVar20 = psVar26;
  puVar31 = puVar2;
  iVar24 = iVar19;
  if (0 < local_80 << 3) {
    local_88 = (longlong)puVar2 - (longlong)psVar26;
    do {
      psVar21 = param_2 + -2;
      iVar29 = iVar29 - (((int)(short)((short)local_98 - sVar4) * (int)sVar22 >> 0xf) + 1 >> 1);
      sVar6 = *param_2;
      iVar15 = iVar15 - (((int)(short)((short)iStack_94 - sVar5) * (int)sVar22 >> 0xf) + 1 >> 1);
      psVar20 = param_2 + -1;
      param_2 = param_2 + 1;
      iVar16 = iVar16 + (int)((ulonglong)((longlong)(iVar19 - sVar18) * (longlong)sVar22) >> 0x10) *
                        0x400;
      iVar24 = ((int)((ulonglong)
                      ((longlong)(*psVar21 * 0x200 + sVar6 * 0x200 + *psVar20 * 0x400) *
                      (longlong)(short)iVar29) >> 0x10) +
                (int)((ulonglong)((longlong)((int)*psVar20 << 0xb) * (longlong)(short)iVar15) >>
                     0x10) +
                (int)((ulonglong)
                      ((longlong)
                       *(short *)(((longlong)puVar2 - (longlong)psVar26) + -4 + (longlong)param_2) *
                      (longlong)iVar16) >> 0x10) >> 7) + 1 >> 1;
      uVar23 = (undefined2)iVar24;
      if (iVar24 < -0x8000) {
        uVar23 = 0x8000;
      }
      if (0x7fff < iVar24) {
        uVar23 = 0x7fff;
      }
      *(undefined2 *)((local_50 - (longlong)psVar26) + -8 + (longlong)param_2) = uVar23;
      lVar28 = lVar28 + -1;
      psVar20 = local_38;
      psVar21 = local_48;
      puVar31 = local_40;
      uVar25 = local_60;
      iVar24 = local_90;
    } while (lVar28 != 0);
  }
  iVar19 = iVar24;
  if (local_80 * 8 < (int)uVar25) {
    uVar17 = (ulonglong)(uVar25 + local_80 * -8);
    psVar26 = psVar20 + (longlong)(local_80 * 8) + 2;
    do {
      iVar19 = ((int)((ulonglong)
                      ((longlong)(psVar26[-2] * 0x200 + *psVar26 * 0x200 + psVar26[-1] * 0x400) *
                      (longlong)-(short)local_98) >> 0x10) +
                (int)((ulonglong)
                      ((longlong)
                       *(short *)((longlong)psVar26 + (longlong)puVar31 + (-2 - (longlong)psVar20))
                      * (longlong)(iVar24 << 10)) >> 0x10) +
                (int)((ulonglong)((longlong)((int)psVar26[-1] << 0xb) * (longlong)-(short)iStack_94)
                     >> 0x10) >> 7) + 1 >> 1;
      uVar23 = (undefined2)iVar19;
      if (iVar19 < -0x8000) {
        uVar23 = 0x8000;
      }
      if (0x7fff < iVar19) {
        uVar23 = 0x7fff;
      }
      *(undefined2 *)((longlong)psVar26 + (local_50 - (longlong)psVar20) + -6) = uVar23;
      uVar17 = uVar17 - 1;
      psVar21 = local_48;
      psVar26 = psVar26 + 1;
      iVar19 = local_90;
    } while (uVar17 != 0);
  }
  *psVar21 = (short)local_98;
  psVar21[1] = (short)iStack_94;
  psVar21[0xf] = (short)iVar19;
  uVar17 = local_30 ^ (ulonglong)&local_98;
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)auStack_d0 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7) = &UNK_1452f19ff;
  FUN_144d8e3a0(uVar17);
}



// FUNCTION 1452f1a24 FUN_1452f1a24 body=228 status=ok
// SIG undefined FUN_1452f1a24(void)

void FUN_1452f1a24(undefined8 param_1,char *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = param_2[2] * 5 + (int)param_2[5];
  if (0x18 < iVar1) {
    FUN_144bca940("assertion failed: n < 25",
                  "../../../third_party/opus/src/silk/stereo_encode_pred.c",0x2c);
  }
  FUN_144f356e4(param_1,iVar1,&DAT_149d32c40,8);
  lVar2 = 2;
  do {
    if ('\x02' < *param_2) {
      FUN_144bca940("assertion failed: ix[ n ][ 0 ] < 3",
                    "../../../third_party/opus/src/silk/stereo_encode_pred.c",0x2f);
    }
    if ('\x04' < param_2[1]) {
      FUN_144bca940("assertion failed: ix[ n ][ 1 ] < STEREO_QUANT_SUB_STEPS",
                    "../../../third_party/opus/src/silk/stereo_encode_pred.c",0x30);
    }
    FUN_144f356e4(param_1,(int)*param_2,&DAT_149d32be0,8);
    FUN_144f356e4(param_1,(int)param_2[1],&DAT_149d32be8,8);
    param_2 = param_2 + 3;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 1452f1b08 FUN_1452f1b08 body=21 status=ok
// SIG undefined FUN_1452f1b08(void)

void FUN_1452f1b08(undefined8 param_1,char param_2)

{
  FUN_144f356e4(param_1,(int)param_2,&DAT_149d32c5c,8);
  return;
}



// FUNCTION 1452f1b20 FUN_1452f1b20 body=571 status=ok
// SIG undefined FUN_1452f1b20(void)

undefined1 * FUN_1452f1b20(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  
  if (param_1 == (int *)0x0) {
    FUN_144bca940("assertion failed: encControl != NULL",
                  "../../../third_party/opus/src/silk/check_control_input.c",0x29);
  }
  iVar1 = param_1[2];
  if ((((((((iVar1 == 8000) || (iVar1 == 12000)) || (iVar1 == 16000)) ||
         ((iVar1 == 24000 || (iVar1 == 32000)))) || ((iVar1 == 0xac44 || (iVar1 == 48000)))) &&
       (((iVar1 = param_1[5], iVar1 == 8000 || (iVar1 == 12000)) || (iVar1 == 16000)))) &&
      (((((iVar2 = param_1[3], iVar2 == 8000 || (iVar2 == 12000)) || (iVar2 == 16000)) &&
        (((iVar3 = param_1[4], iVar3 == 8000 || (iVar3 == 12000)) || (iVar3 == 16000)))) &&
       ((iVar3 <= iVar1 && (iVar1 <= iVar2)))))) && (iVar3 <= iVar2)) {
    if (((uint)param_1[6] < 0x3d) &&
       ((0x1000010000100400U >> ((longlong)param_1[6] & 0x3fU) & 1) != 0)) {
      if ((uint)param_1[8] < 0x65) {
        if ((uint)param_1[0xc] < 2) {
          if ((uint)param_1[0xd] < 2) {
            if ((uint)param_1[10] < 2) {
              if (*param_1 - 1U < 2) {
                if (param_1[1] - 1U < 2) {
                  if (param_1[1] <= *param_1) {
                    if ((uint)param_1[9] < 0xb) {
                      return (undefined1 *)0x0;
                    }
                    FUN_144bca940("assertion failed: 0",
                                  "../../../third_party/opus/src/silk/check_control_input.c",0x65);
                    return &DAT_ffffff96;
                  }
                  uVar5 = 0x61;
                }
                else {
                  uVar5 = 0x5d;
                }
              }
              else {
                uVar5 = 0x59;
              }
              FUN_144bca940("assertion failed: 0",
                            "../../../third_party/opus/src/silk/check_control_input.c",uVar5);
              puVar4 = &DAT_ffffff91;
            }
            else {
              FUN_144bca940("assertion failed: 0",
                            "../../../third_party/opus/src/silk/check_control_input.c",0x55);
              puVar4 = (undefined1 *)0xffffff95;
            }
          }
          else {
            FUN_144bca940("assertion failed: 0",
                          "../../../third_party/opus/src/silk/check_control_input.c",0x51);
            puVar4 = (undefined1 *)0xffffff93;
          }
        }
        else {
          FUN_144bca940("assertion failed: 0",
                        "../../../third_party/opus/src/silk/check_control_input.c",0x4d);
          puVar4 = (undefined1 *)0xffffff94;
        }
      }
      else {
        FUN_144bca940("assertion failed: 0",
                      "../../../third_party/opus/src/silk/check_control_input.c",0x49);
        puVar4 = &DAT_ffffff97;
      }
    }
    else {
      FUN_144bca940("assertion failed: 0","../../../third_party/opus/src/silk/check_control_input.c"
                    ,0x45);
      puVar4 = &DAT_ffffff99;
    }
  }
  else {
    FUN_144bca940("assertion failed: 0","../../../third_party/opus/src/silk/check_control_input.c",
                  0x3e);
    puVar4 = (undefined1 *)0xffffff9a;
  }
  return puVar4;
}



// FUNCTION 1452f1d5c FUN_1452f1d5c body=169 status=ok
// SIG undefined FUN_1452f1d5c(void)

undefined8 FUN_1452f1d5c(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = *(int *)(param_1 + 0x11e0);
  *(int *)(param_1 + 0x1200) = param_2;
  if (*(int *)(param_1 + 0x11e4) == 2) {
    param_2 = param_2 + (-2000 - ((int)(iVar2 + (iVar2 >> 0x1f & 0xfU)) >> 4));
  }
  if (iVar2 == 8) {
    puVar3 = &DAT_149d32e20;
    iVar2 = 0x6a;
  }
  else if (iVar2 == 0xc) {
    puVar3 = &DAT_149d32e90;
    iVar2 = 0x9a;
  }
  else {
    puVar3 = &DAT_149d32f30;
    iVar2 = 0xbe;
  }
  iVar1 = (param_2 + 200) / 400 + -10;
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = (uint)(byte)puVar3[iVar2] * 0x15;
  }
  *(int *)(param_1 + 0x127c) = iVar1;
  return 0;
}



// FUNCTION 1452f1e08 FUN_1452f1e08 body=1277 status=ok
// SIG undefined FUN_1452f1e08(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452f1e08(undefined8 param_1,int param_2,undefined4 param_3,longlong param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  char cVar14;
  int iVar15;
  longlong lVar16;
  undefined *puVar17;
  longlong lVar18;
  int *piVar19;
  longlong lVar20;
  int *piVar21;
  byte *pbVar22;
  uint uVar23;
  longlong lVar24;
  undefined8 uVar25;
  longlong lVar26;
  undefined8 auStack_f0 [5];
  undefined4 auStack_c8 [2];
  undefined8 uStack_c0;
  int *local_b8;
  int local_b0 [4];
  undefined8 local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  int *local_80;
  int local_78 [8];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)&local_b8;
  lVar26 = 0;
  local_b0[2] = param_5;
  auStack_f0[0] = 0x1452f1e5d;
  local_b0[0] = param_2;
  local_b0[1] = param_3;
  local_a0 = param_1;
  local_90 = param_4;
  memset(local_78,0,0x20);
  iVar15 = param_5 >> 4;
  if (iVar15 << 4 < param_5) {
    if (param_5 != 0x78) {
      auStack_f0[0] = 0x1452f1e8b;
      FUN_144bca940("assertion failed: frame_length == 12 * 10",
                    "../../../third_party/opus/src/silk/encode_pulses.c",0x59);
    }
    iVar15 = iVar15 + 1;
    *(undefined8 *)(param_5 + param_4) = 0;
    *(undefined8 *)((longlong)param_5 + 8 + param_4) = 0;
  }
  lVar18 = (longlong)(iVar15 << 4);
  uVar12 = lVar18 * 4 + 0xf;
  if (uVar12 <= (ulonglong)(lVar18 * 4)) {
    uVar12 = 0xffffffffffffff0;
  }
  auStack_f0[0] = 0x1452f1eca;
  lVar4 = -(uVar12 & 0xfffffffffffffff0);
  lVar24 = (longlong)&local_b8 + lVar4;
  local_88 = lVar24;
  if (0 < lVar18) {
    lVar20 = 0;
    piVar8 = (int *)((longlong)local_b0 + lVar4);
    do {
      iVar9 = (int)*(char *)(lVar20 + param_4);
      if (*(char *)(lVar20 + param_4) < '\x01') {
        iVar9 = -(int)*(char *)(lVar20 + param_4);
      }
      piVar8[-2] = iVar9;
      cVar14 = *(char *)(param_4 + 1 + lVar20);
      iVar9 = (int)cVar14;
      if (cVar14 < '\x01') {
        iVar9 = -(int)cVar14;
      }
      piVar8[-1] = iVar9;
      cVar14 = *(char *)(param_4 + 2 + lVar20);
      iVar9 = (int)cVar14;
      if (cVar14 < '\x01') {
        iVar9 = -(int)cVar14;
      }
      *piVar8 = iVar9;
      cVar14 = *(char *)(param_4 + 3 + lVar20);
      iVar9 = (int)cVar14;
      if (cVar14 < '\x01') {
        iVar9 = -(int)cVar14;
      }
      lVar20 = lVar20 + 4;
      piVar8[1] = iVar9;
      piVar8 = piVar8 + 4;
    } while (lVar20 < lVar18);
  }
  lVar18 = (longlong)iVar15;
  local_98 = lVar18;
  uVar13 = lVar18 * 4;
  uVar12 = uVar13 + 0xf;
  if (uVar12 <= uVar13) {
    uVar12 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_f0 + lVar4) = 0x1452f1f64;
  lVar20 = -(uVar12 & 0xfffffffffffffff0);
  uVar12 = uVar13 + 0xf;
  piVar8 = (int *)((longlong)&local_b8 + lVar20 + lVar4);
  local_b8 = piVar8;
  if (uVar12 <= uVar13) {
    uVar12 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_f0 + lVar20 + lVar4) = 0x1452f1f85;
  lVar5 = -(uVar12 & 0xfffffffffffffff0);
  piVar2 = (int *)((longlong)&local_b8 + lVar5 + lVar20 + lVar4);
  local_80 = piVar2;
  if (iVar15 < 1) {
LAB_1452f20b5:
    uVar25 = local_a0;
    puVar17 = &DAT_149da0d50;
    iVar15 = 0;
    uVar23 = 0x7fffffff;
    lVar24 = ((longlong)local_b0[0] >> 1) * 9;
    pbVar22 = &DAT_149da0e10 + lVar24;
    do {
      uVar11 = (uint)*pbVar22;
      if (0 < lVar18) {
        piVar8 = local_b8;
        lVar16 = lVar18;
        do {
          lVar7 = 0x11;
          if (*(int *)(((longlong)piVar2 - (longlong)local_b8) + (longlong)piVar8) < 1) {
            lVar7 = (longlong)*piVar8;
          }
          piVar8 = piVar8 + 1;
          uVar11 = uVar11 + (byte)puVar17[lVar7];
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
      }
      iVar9 = iVar15;
      if ((int)uVar23 <= (int)uVar11) {
        iVar9 = (int)lVar26;
      }
      puVar17 = puVar17 + 0x12;
      lVar26 = (longlong)iVar9;
      iVar15 = iVar15 + 1;
      pbVar22 = pbVar22 + 1;
      if ((int)uVar23 <= (int)uVar11) {
        uVar11 = uVar23;
      }
      uVar23 = uVar11;
    } while (iVar15 < 9);
    *(undefined8 *)((longlong)auStack_f0 + lVar5 + lVar20 + lVar4) = 0x1452f2169;
    FUN_144f356e4(uVar25,iVar9,&DAT_149da0df8 + lVar24,8);
    piVar8 = piVar2;
    piVar21 = local_b8;
    if (0 < lVar18) {
      do {
        puVar17 = &DAT_149da0c90 + lVar26 * 0x12;
        if (*piVar8 != 0) {
          *(undefined8 *)((longlong)auStack_f0 + lVar5 + lVar20 + lVar4) = 0x1452f21a5;
          FUN_144f356e4(uVar25,0x11,&DAT_149da0c90 + lVar26 * 0x12);
          iVar15 = 0;
          if (0 < *piVar8 + -1) {
            do {
              *(undefined8 *)((longlong)auStack_f0 + lVar5 + lVar20 + lVar4) = 0x1452f21cc;
              FUN_144f356e4(uVar25,0x11,&DAT_149da0d32);
              iVar15 = iVar15 + 1;
              piVar21 = local_b8;
            } while (iVar15 < *piVar8 + -1);
          }
          puVar17 = &DAT_149da0d32;
        }
        uVar3 = *(undefined4 *)(((longlong)piVar8 - (longlong)piVar2) + (longlong)piVar21);
        *(undefined8 *)((longlong)auStack_f0 + lVar5 + lVar20 + lVar4) = 0x1452f21fb;
        FUN_144f356e4(uVar25,uVar3,puVar17,8);
        lVar16 = local_88;
        lVar24 = local_98;
        lVar18 = lVar18 + -1;
        piVar8 = piVar8 + 1;
      } while (lVar18 != 0);
      lVar26 = 0;
      iVar15 = 0;
      piVar8 = local_b8;
      do {
        if (0 < piVar8[lVar26]) {
          *(undefined8 *)((longlong)auStack_f0 + lVar5 + lVar20 + lVar4) = 0x1452f222a;
          FUN_145518e4c(uVar25,lVar16 + (longlong)iVar15 * 4);
          piVar8 = local_b8;
        }
        iVar15 = iVar15 + 0x10;
        lVar26 = lVar26 + 1;
      } while (lVar26 < lVar24);
      lVar18 = 0;
      lVar26 = local_90;
      do {
        uVar25 = local_a0;
        iVar15 = local_80[lVar18];
        if (0 < iVar15) {
          lVar16 = 0;
          do {
            cVar14 = *(char *)(lVar26 + lVar16);
            if (*(char *)(lVar26 + lVar16) < '\x01') {
              cVar14 = -*(char *)(lVar26 + lVar16);
            }
            iVar9 = iVar15;
            while (iVar9 = iVar9 + -1, 0 < iVar9) {
              *(undefined8 *)((longlong)auStack_f0 + lVar5 + lVar20 + lVar4) = 0x1452f2292;
              FUN_144f356e4(uVar25,(int)cVar14 >> ((byte)iVar9 & 0x1f) & 1,&DAT_149d32bdc,8);
            }
            *(undefined8 *)((longlong)auStack_f0 + lVar5 + lVar20 + lVar4) = 0x1452f22b4;
            FUN_144f356e4(uVar25,(int)cVar14 & 1,&DAT_149d32bdc,8);
            lVar16 = lVar16 + 1;
            lVar24 = local_98;
          } while (lVar16 < 0x10);
        }
        lVar18 = lVar18 + 1;
        lVar26 = lVar26 + 0x10;
        uVar25 = local_a0;
      } while (lVar18 < lVar24);
    }
    lVar26 = local_90;
    iVar9 = local_b0[2];
    iVar15 = local_b0[0];
    *(int **)((longlong)&uStack_c0 + lVar5 + lVar20 + lVar4) = local_b8;
    *(int *)((longlong)auStack_c8 + lVar5 + lVar20 + lVar4) = local_b0[1];
    *(undefined8 *)((longlong)auStack_f0 + lVar5 + lVar20 + lVar4) = 0x1452f22f9;
    FUN_145518c90(uVar25,lVar26,iVar9,iVar15);
    uVar12 = local_58 ^ (ulonglong)&local_b8;
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)auStack_f0 + lVar5 + lVar20 + lVar4) = &UNK_1452f2305;
    FUN_144d8e3a0(uVar12);
  }
  lVar16 = lVar18;
  piVar21 = piVar2;
LAB_1452f1fae:
  *piVar21 = 0;
  do {
    lVar7 = 0;
    do {
      iVar10 = *(int *)(lVar24 + 4 + lVar7 * 8) + *(int *)(lVar24 + lVar7 * 8);
      iVar9 = 1;
      iVar15 = iVar9;
      if (8 < iVar10) goto LAB_1452f1fdf;
      local_78[lVar7] = iVar10;
      lVar7 = lVar7 + 1;
    } while (lVar7 < 8);
    iVar15 = 0;
LAB_1452f1fdf:
    lVar7 = 0;
    do {
      iVar10 = iVar9;
      if (10 < local_78[lVar7 * 2 + 1] + local_78[lVar7 * 2]) goto LAB_1452f200a;
      local_78[lVar7] = local_78[lVar7 * 2 + 1] + local_78[lVar7 * 2];
      lVar7 = lVar7 + 1;
    } while (lVar7 < 4);
    iVar10 = 0;
LAB_1452f200a:
    lVar7 = 0;
    do {
      if (0xc < local_78[lVar7 * 2 + 1] + local_78[lVar7 * 2]) goto LAB_1452f2037;
      local_78[lVar7] = local_78[lVar7 * 2 + 1] + local_78[lVar7 * 2];
      lVar7 = lVar7 + 1;
    } while (lVar7 < 2);
    iVar9 = 0;
LAB_1452f2037:
    lVar7 = 0;
    piVar19 = (int *)(((longlong)piVar8 - (longlong)piVar2) + (longlong)piVar21);
    do {
      if (0x10 < local_78[lVar7 * 2 + 1] + local_78[lVar7 * 2]) {
        iVar6 = 1;
        goto LAB_1452f2077;
      }
      *piVar19 = local_78[lVar7 * 2 + 1] + local_78[lVar7 * 2];
      lVar7 = lVar7 + 1;
      piVar19 = piVar19 + 1;
    } while (lVar7 < 1);
    iVar6 = 0;
LAB_1452f2077:
    if (iVar6 + iVar15 + iVar10 + iVar9 == 0) break;
    *piVar21 = *piVar21 + 1;
    lVar7 = 0;
    do {
      piVar19 = (int *)(lVar24 + lVar7 * 4);
      iVar15 = piVar19[1];
      iVar9 = piVar19[2];
      iVar10 = piVar19[3];
      piVar1 = (int *)(lVar24 + lVar7 * 4);
      *piVar1 = *piVar19 >> 1;
      piVar1[1] = iVar15 >> 1;
      piVar1[2] = iVar9 >> 1;
      piVar1[3] = iVar10 >> 1;
      lVar7 = lVar7 + 4;
    } while (lVar7 < 0x10);
  } while( true );
  lVar24 = lVar24 + 0x40;
  piVar21 = piVar21 + 1;
  lVar16 = lVar16 + -1;
  if (lVar16 == 0) goto LAB_1452f20b5;
  goto LAB_1452f1fae;
}



// FUNCTION 1452f2318 FUN_1452f2318 body=981 status=ok
// SIG undefined FUN_1452f2318(void)

void FUN_1452f2318(longlong param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  short sVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  undefined *puVar11;
  short *psVar12;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  short local_68 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_4 == 0) {
    pcVar9 = (char *)(param_1 + 0x1290);
  }
  else {
    pcVar9 = (char *)(param_1 + ((longlong)param_3 + 0xaa) * 0x24);
  }
  uVar6 = (int)pcVar9[0x1e] + pcVar9[0x1d] * 2;
  if (5 < uVar6) {
    FUN_144bca940("assertion failed: typeOffset >= 0 && typeOffset < 6",
                  "../../../third_party/opus/src/silk/encode_indices.c",0x3b);
  }
  if ((int)uVar6 < 2) {
    if (param_4 != 0) {
      FUN_144bca940("assertion failed: encode_LBRR == 0 || typeOffset >= 2",
                    "../../../third_party/opus/src/silk/encode_indices.c",0x3c);
      goto LAB_1452f23af;
    }
    puVar11 = &DAT_149d32c18;
  }
  else {
LAB_1452f23af:
    uVar6 = uVar6 - 2;
    puVar11 = &DAT_149d32c14;
  }
  FUN_144f356e4(param_2,uVar6,puVar11,8);
  uVar6 = (uint)*pcVar9;
  if (param_5 == 2) {
    puVar11 = &DAT_149da0a28;
  }
  else {
    FUN_144f356e4(param_2,(int)uVar6 >> 3,&DAT_149da0a10 + (longlong)pcVar9[0x1d] * 8,8);
    puVar11 = &DAT_149d32bf8;
    uVar6 = (int)*pcVar9 & 7;
  }
  FUN_144f356e4(param_2,uVar6,puVar11,8);
  iVar10 = 1;
  pcVar8 = pcVar9;
  if (1 < *(int *)(param_1 + 0x11e4)) {
    do {
      FUN_144f356e4(param_2,(int)pcVar8[1],&DAT_149da0a28,8);
      iVar10 = iVar10 + 1;
      pcVar8 = pcVar8 + 1;
    } while (iVar10 < *(int *)(param_1 + 0x11e4));
  }
  pcVar8 = pcVar9 + 8;
  FUN_144f356e4(param_2,(int)*pcVar8,
                (longlong)(((int)pcVar9[0x1d] >> 1) * (int)**(short **)(param_1 + 0x1260)) +
                *(longlong *)(*(short **)(param_1 + 0x1260) + 0xc),8);
  FUN_145518bbc(local_68,local_78,*(undefined8 *)(param_1 + 0x1260),(int)*pcVar8);
  lVar4 = *(longlong *)(param_1 + 0x1260);
  if ((int)*(short *)(lVar4 + 2) != *(int *)(param_1 + 0x1220)) {
    FUN_144bca940("assertion failed: psEncC->psNLSF_CB->order == psEncC->predictLPCOrder",
                  "../../../third_party/opus/src/silk/encode_indices.c",0x5d);
    lVar4 = *(longlong *)(param_1 + 0x1260);
  }
  iVar10 = 0;
  if (0 < *(short *)(lVar4 + 2)) {
    pcVar7 = pcVar9 + 9;
    psVar12 = local_68;
    do {
      puVar11 = (undefined *)((longlong)*psVar12 + *(longlong *)(lVar4 + 0x30));
      cVar1 = pcVar7[(longlong)(pcVar9 + (8 - (longlong)pcVar8))];
      if (cVar1 < '\x04') {
        if (cVar1 < -3) {
          FUN_144f356e4(param_2,0,puVar11,8);
          iVar5 = -(int)*pcVar7;
          goto LAB_1452f2537;
        }
        iVar5 = cVar1 + 4;
      }
      else {
        FUN_144f356e4(param_2,8,puVar11,8);
        iVar5 = (int)*pcVar7;
LAB_1452f2537:
        iVar5 = iVar5 + -4;
        puVar11 = &DAT_149d32c00;
      }
      FUN_144f356e4(param_2,iVar5,puVar11,8);
      lVar4 = *(longlong *)(param_1 + 0x1260);
      iVar10 = iVar10 + 1;
      psVar12 = psVar12 + 1;
      pcVar7 = pcVar7 + 1;
    } while (iVar10 < *(short *)(lVar4 + 2));
  }
  if (*(int *)(param_1 + 0x11e4) == 4) {
    FUN_144f356e4(param_2,(int)pcVar9[0x1f],&DAT_149d32c70,8);
  }
  if (pcVar9[0x1d] != '\x02') goto LAB_1452f26bf;
  if ((param_5 == 2) && (*(int *)(param_1 + 0x1698) == 2)) {
    iVar10 = (int)*(short *)(pcVar9 + 0x1a) - (int)*(short *)(param_1 + 0x169c);
    uVar6 = iVar10 + 8;
    iVar10 = iVar10 + 9;
    if (0x13 < uVar6) {
      iVar10 = 0;
    }
    FUN_144f356e4(param_2,iVar10,&DAT_149d9fb28,8);
    if (0x13 < uVar6) goto LAB_1452f25e0;
  }
  else {
LAB_1452f25e0:
    sVar2 = *(short *)(pcVar9 + 0x1a);
    iVar10 = *(int *)(param_1 + 0x11e0) >> 1;
    uVar3 = (longlong)(int)sVar2 / (longlong)iVar10;
    FUN_144f356e4(param_2,uVar3 & 0xffffffff,&DAT_149d9fb08,8);
    FUN_144f356e4(param_2,(int)sVar2 - (int)(short)iVar10 * (int)(short)uVar3,
                  *(undefined8 *)(param_1 + 0x1250),8);
  }
  iVar10 = 0;
  *(undefined2 *)(param_1 + 0x169c) = *(undefined2 *)(pcVar9 + 0x1a);
  FUN_144f356e4(param_2,(int)pcVar9[0x1c],*(undefined8 *)(param_1 + 0x1258),8);
  FUN_144f356e4(param_2,(int)pcVar9[0x20],&DAT_149da0a54,8);
  if (0 < *(int *)(param_1 + 0x11e4)) {
    pcVar8 = pcVar9 + 4;
    do {
      FUN_144f356e4(param_2,(int)*pcVar8,(&PTR_DAT_149da0a58)[pcVar9[0x20]],8);
      iVar10 = iVar10 + 1;
      pcVar8 = pcVar8 + 1;
    } while (iVar10 < *(int *)(param_1 + 0x11e4));
  }
  if (param_5 == 0) {
    FUN_144f356e4(param_2,(int)pcVar9[0x21],&DAT_149d32c08,8);
  }
LAB_1452f26bf:
  *(int *)(param_1 + 0x1698) = (int)pcVar9[0x1d];
  FUN_144f356e4(param_2,(int)pcVar9[0x22],&DAT_149d32be4,8);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
}



// FUNCTION 1452f2708 FUN_1452f2708 body=339 status=ok
// SIG undefined FUN_1452f2708(void)

void FUN_1452f2708(longlong param_1)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  
  if ((&DAT_000011bd)[param_1] != '\x02') {
    return;
  }
  lVar1 = (longlong)(*(int *)(param_1 + 0x11e0) * 0x3e80000);
  iVar3 = FUN_144f39688(lVar1 / (longlong)*(int *)(param_1 + 0x11c0) & 0xffffffff,
                        lVar1 % (longlong)*(int *)(param_1 + 0x11c0) & 0xffffffff);
  iVar5 = *(int *)(param_1 + 0x1268);
  sVar2 = FUN_144f39688(0x3c0000);
  iVar5 = (iVar3 + -0x800 +
          (int)((ulonglong)
                ((longlong)(short)(((short)(iVar3 + -0x800) - sVar2) + 0x800) *
                (longlong)
                (int)((ulonglong)((longlong)(short)iVar5 * (longlong)(iVar5 * -4)) >> 0x10)) >> 0x10
               )) - (*(int *)(param_1 + 8) >> 8);
  if (iVar5 < 0) {
    iVar5 = iVar5 * 3;
  }
  sVar2 = (short)iVar5;
  if (iVar5 < -0x33) {
    sVar2 = -0x33;
  }
  if (0x33 < iVar5) {
    sVar2 = 0x33;
  }
  *(int *)(param_1 + 8) =
       *(int *)(param_1 + 8) +
       (int)((ulonglong)((longlong)((int)*(short *)(&DAT_000011b4 + param_1) * (int)sVar2) * 0x199a)
            >> 0x10);
  iVar5 = FUN_144f39688(100);
  iVar3 = FUN_144f39688(0x3c);
  if (iVar5 * 0x100 < iVar3 * 0x100) {
    iVar5 = FUN_144f39688(0x3c);
    if (*(int *)(param_1 + 8) <= iVar5 * 0x100) {
      iVar3 = FUN_144f39688(100);
      iVar5 = *(int *)(param_1 + 8);
      if (iVar3 * 0x100 <= iVar5) goto LAB_1452f2843;
      goto LAB_1452f2813;
    }
LAB_1452f2837:
    uVar4 = 0x3c;
  }
  else {
    iVar5 = FUN_144f39688(100);
    if (*(int *)(param_1 + 8) <= iVar5 * 0x100) {
      iVar3 = FUN_144f39688(0x3c);
      iVar5 = *(int *)(param_1 + 8);
      if (iVar3 * 0x100 <= iVar5) goto LAB_1452f2843;
      goto LAB_1452f2837;
    }
LAB_1452f2813:
    uVar4 = 100;
  }
  iVar5 = FUN_144f39688(uVar4);
  iVar5 = iVar5 << 8;
LAB_1452f2843:
  *(int *)(param_1 + 8) = iVar5;
  return;
}



// FUNCTION 1452f285c FUN_1452f285c body=176 status=ok
// SIG undefined FUN_1452f285c(void)

void FUN_1452f285c(longlong param_1,int param_2)

{
  (*(code *)(&PTR_FUN_149da1270)[*(uint *)(param_1 + 0x13f4) & 7])(param_1,param_1 + 0x13fa);
  if (param_2 == 0) {
    if (0xc < *(int *)(&DAT_000011b4 + param_1)) {
      *(undefined4 *)(&DAT_000011b4 + param_1) = 0xc;
      goto LAB_1452f289f;
    }
  }
  else {
LAB_1452f289f:
    if (0xc < *(int *)(&DAT_000011b4 + param_1)) {
      *(undefined8 *)(param_1 + 0x17d4) = 0;
      *(undefined1 *)(param_1 + 0x12ad) = 1;
      *(undefined1 *)((longlong)*(int *)(param_1 + 0x1684) + 0x1280 + param_1) = 1;
      return;
    }
  }
  *(int *)(param_1 + 0x17d8) = *(int *)(param_1 + 0x17d8) + 1;
  *(undefined1 *)(param_1 + 0x12ad) = 0;
  if (10 < *(int *)(param_1 + 0x17d8)) {
    if (*(int *)(param_1 + 0x17d8) < 0x1f) goto LAB_1452f28d4;
    *(undefined4 *)(param_1 + 0x17d8) = 10;
  }
  *(undefined4 *)(param_1 + 0x17d4) = 0;
LAB_1452f28d4:
  *(undefined1 *)((longlong)*(int *)(param_1 + 0x1684) + 0x1280 + param_1) = 0;
  return;
}



// FUNCTION 1452f290c FUN_1452f290c body=2865 status=ok
// SIG undefined FUN_1452f290c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452f290c(longlong param_1,int *param_2,undefined8 *param_3,int param_4,int param_5,
                  int param_6)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  char cVar11;
  ushort uVar12;
  int iVar13;
  int iVar14;
  undefined1 *puVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  int iVar20;
  short *psVar21;
  int iVar22;
  uint uVar23;
  char *pcVar24;
  ulonglong uVar25;
  int iVar26;
  short sVar27;
  longlong lVar28;
  int *piVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined8 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined1 auStack_4268 [32];
  undefined1 *local_4248;
  longlong local_4240;
  undefined1 local_4238;
  uint local_4234;
  undefined1 local_4230;
  int local_422c;
  uint local_4228;
  int local_4224;
  undefined2 local_4220;
  int local_421c;
  int local_4218;
  int local_4214;
  uint local_4210;
  int local_420c;
  int local_4208;
  undefined4 local_4204;
  int local_4200;
  int *local_41f8;
  undefined8 *local_41f0;
  longlong local_41e8;
  undefined4 local_41e0;
  undefined4 uStack_41dc;
  undefined4 uStack_41d8;
  undefined4 uStack_41d4;
  undefined4 local_41d0;
  undefined4 uStack_41cc;
  undefined4 uStack_41c8;
  uint uStack_41c4;
  undefined4 local_41c0;
  undefined4 uStack_41bc;
  undefined4 uStack_41b8;
  undefined4 uStack_41b4;
  undefined8 local_41b0;
  undefined1 local_41a8 [4352];
  undefined1 local_30a8 [4352];
  float local_1fa8 [56];
  undefined4 auStack_1ec8 [117];
  float local_1cf4;
  int aiStack_1cd0 [4];
  undefined1 local_1cc0;
  undefined1 local_1cb8 [4352];
  int local_bb8 [4];
  int local_ba8 [4];
  int local_b98 [4];
  int local_b88 [4];
  undefined1 local_b78 [2688];
  ulonglong local_f8;
  undefined8 uStack_48;
  
  uStack_48 = 0x1452f292b;
  local_f8 = DAT_14c707940 ^ (ulonglong)auStack_4268;
  local_4218 = 0;
  local_420c = 0;
  local_4224 = 0;
  local_bb8[0] = 0;
  local_bb8[1] = 0;
  local_bb8[2] = 0;
  local_bb8[3] = 0;
  local_4238 = 0;
  local_4200 = 0;
  *(byte *)(param_1 + 0x12b2) = *(byte *)(param_1 + 0x120c) & 3;
  iVar14 = *(int *)(param_1 + 0x11f0);
  *(int *)(param_1 + 0x120c) = *(int *)(param_1 + 0x120c) + 1;
  lVar28 = param_1 + 0x1c24 + (longlong)iVar14 * 4;
  local_4208 = param_4;
  local_41f8 = param_2;
  local_41f0 = param_3;
  local_41e8 = lVar28;
  FUN_145519b44(param_1 + 0x10,param_1 + 0x13fa,*(undefined4 *)(param_1 + 0x11e8));
  iVar22 = *(int *)(param_1 + 0x11e0);
  iVar13 = *(int *)(param_1 + 0x11e8) + -1;
  lVar18 = (longlong)iVar13;
  if (-1 < iVar13) {
    psVar21 = (short *)(param_1 + 0x13fa + lVar18 * 2);
    do {
      sVar27 = *psVar21;
      psVar21 = psVar21 + -1;
      *(float *)((longlong)(iVar22 * 5) * 4 + lVar28 + lVar18 * 4) = (float)(int)sVar27;
      lVar18 = lVar18 + -1;
    } while (-1 < lVar18);
  }
  uVar23 = 0;
  do {
    uVar16 = uVar23 & 2;
    lVar18 = (longlong)
             (int)((*(int *)(param_1 + 0x11e8) >> 3) * uVar23 + *(int *)(param_1 + 0x11e0) * 5);
    uVar23 = uVar23 + 1;
    *(float *)(lVar28 + lVar18 * 4) =
         (float)(int)(1 - uVar16) * 1e-06 + *(float *)(lVar28 + lVar18 * 4);
  } while ((int)uVar23 < 8);
  if (*(int *)(param_1 + 0x1248) == 0) {
    local_4248._0_4_ = *(undefined4 *)(param_1 + 0x13f4);
    FUN_14551a828(param_1,local_1fa8,local_b78,lVar28);
    FUN_145519d4c(param_1,local_1fa8,local_b78 + (longlong)iVar14 * 4,lVar28);
    local_4248 = (undefined1 *)CONCAT44(local_4248._4_4_,param_4);
    FUN_14551ab5c(param_1,local_1fa8,local_b78 + (longlong)iVar14 * 4,lVar28);
    FUN_14551ae88(param_1,local_1fa8,param_4);
    pcVar24 = (char *)(param_1 + ((longlong)*(int *)(param_1 + 0x1684) + 0xaa) * 0x24);
    if ((*(int *)(param_1 + 0x17e0) != 0) && (0x4d < *(int *)(&DAT_000011b4 + param_1))) {
      *(undefined4 *)(param_1 + 0x1284 + (longlong)*(int *)(param_1 + 0x1684) * 4) = 1;
      memcpy(local_1cb8,(void *)(param_1 + 0x94),0x1100);
      uVar2 = *(undefined8 *)(param_1 + 0x1298);
      *(undefined8 *)pcVar24 = *(undefined8 *)(param_1 + 0x1290);
      *(undefined8 *)(pcVar24 + 8) = uVar2;
      uVar2 = *(undefined8 *)(param_1 + 0x12a8);
      *(undefined8 *)(pcVar24 + 0x10) = *(undefined8 *)(param_1 + 0x12a0);
      *(undefined8 *)(pcVar24 + 0x18) = uVar2;
      *(undefined4 *)(pcVar24 + 0x20) = *(undefined4 *)(param_1 + 0x12b0);
      iVar14 = *(int *)(param_1 + 0x11e4);
      memcpy(local_b98,local_1fa8,(longlong)iVar14 << 2);
      if ((*(int *)(param_1 + 0x1684) == 0) ||
         (*(int *)(param_1 + 0x1280 + (longlong)*(int *)(param_1 + 0x1684) * 4) == 0)) {
        (&DAT_000011bc)[param_1] = *(undefined1 *)(param_1 + 0x1c18);
        cVar10 = *(char *)(param_1 + 0x17e4) + *pcVar24;
        cVar11 = '?';
        if (cVar10 < '?') {
          cVar11 = cVar10;
        }
        *pcVar24 = cVar11;
        iVar14 = *(int *)(param_1 + 0x11e4);
      }
      local_4248 = (undefined1 *)CONCAT44(local_4248._4_4_,iVar14);
      FUN_145519a40(local_ba8,pcVar24,&DAT_000011bc + param_1,param_4 == 2);
      uVar19 = (ulonglong)*(uint *)(param_1 + 0x11e4);
      if (0 < (int)*(uint *)(param_1 + 0x11e4)) {
        lVar18 = 0;
        do {
          *(float *)((longlong)local_1fa8 + lVar18) =
               (float)*(int *)((longlong)local_ba8 + lVar18) * 1.5258789e-05;
          uVar19 = uVar19 - 1;
          lVar18 = lVar18 + 4;
        } while (uVar19 != 0);
      }
      local_4248 = (undefined1 *)(param_1 + 0x1854 + (longlong)*(int *)(param_1 + 0x1684) * 0x140);
      local_4240 = lVar28;
      FUN_14551b46c(param_1,local_1fa8,pcVar24,local_1cb8);
      memcpy(local_1fa8,local_b98,(longlong)*(int *)(param_1 + 0x11e4) << 2);
    }
    local_4228 = 0;
    uVar19 = 0x100;
    local_4210 = 0;
    local_4234 = 0x100;
    iVar14 = FUN_145519b24(param_1 + 0x1290,*(undefined4 *)(param_1 + 0x11e4));
    uVar4 = *param_3;
    uVar5 = param_3[1];
    uVar6 = param_3[2];
    uVar7 = param_3[3];
    local_421c = -1;
    uVar8 = param_3[4];
    uVar9 = param_3[5];
    local_4214 = -1;
    uVar2 = param_3[6];
    memcpy(local_41a8,(void *)(param_1 + 0x94),0x1100);
    local_4230 = *(undefined1 *)(param_1 + 0x12b2);
    iVar22 = 0;
    local_4220 = *(undefined2 *)(param_1 + 0x169c);
    local_4204 = *(undefined4 *)(param_1 + 0x1698);
    uVar33 = local_41b0;
    uVar34 = local_41c0;
    uVar35 = uStack_41bc;
    uVar36 = uStack_41b8;
    uVar37 = uStack_41b4;
    uVar38 = local_41e0;
    uVar39 = uStack_41dc;
    uVar40 = uStack_41d8;
    uVar41 = uStack_41d4;
    uVar30 = local_41d0;
    uVar31 = uStack_41cc;
    uVar32 = uStack_41c8;
    uVar23 = uStack_41c4;
    while( true ) {
      iVar13 = local_4224;
      local_422c = iVar22;
      if ((iVar14 != local_421c) && (iVar13 = local_420c, iVar14 != local_4214)) {
        if (0 < iVar22) {
          *param_3 = uVar4;
          param_3[1] = uVar5;
          param_3[2] = uVar6;
          param_3[3] = uVar7;
          param_3[4] = uVar8;
          param_3[5] = uVar9;
          param_3[6] = uVar2;
          memcpy((void *)(param_1 + 0x94),local_41a8,0x1100);
          *(undefined1 *)(param_1 + 0x12b2) = local_4230;
          *(undefined2 *)(param_1 + 0x169c) = local_4220;
          *(undefined4 *)(param_1 + 0x1698) = local_4204;
        }
        puVar1 = (undefined1 *)(param_1 + 0x12b4);
        local_4248 = puVar1;
        local_4240 = lVar28;
        FUN_14551b46c(param_1,local_1fa8,param_1 + 0x1290,param_1 + 0x94);
        if ((iVar22 == 6) && (local_4228 == 0)) {
          uVar38 = *(undefined4 *)param_3;
          uVar39 = *(undefined4 *)((longlong)param_3 + 4);
          uVar40 = *(undefined4 *)(param_3 + 1);
          uVar41 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar30 = *(undefined4 *)(param_3 + 2);
          uVar31 = *(undefined4 *)((longlong)param_3 + 0x14);
          uVar32 = *(undefined4 *)(param_3 + 3);
          uVar23 = *(uint *)((longlong)param_3 + 0x1c);
          uVar34 = *(undefined4 *)(param_3 + 4);
          uVar35 = *(undefined4 *)((longlong)param_3 + 0x24);
          uVar36 = *(undefined4 *)(param_3 + 5);
          uVar37 = *(undefined4 *)((longlong)param_3 + 0x2c);
          uVar33 = param_3[6];
        }
        local_4248._0_4_ = local_4208;
        FUN_1452f2318(param_1,param_3,*(undefined4 *)(param_1 + 0x1684),0);
        local_4248 = (undefined1 *)CONCAT44(local_4248._4_4_,*(undefined4 *)(param_1 + 0x11e8));
        FUN_1452f1e08(param_3,(int)*(char *)(param_1 + 0x12ad),(int)*(char *)(param_1 + 0x12ae),
                      puVar1);
        iVar22 = 0x1f;
        if (*(uint *)(param_3 + 4) != 0) {
          for (; *(uint *)(param_3 + 4) >> iVar22 == 0; iVar22 = iVar22 + -1) {
          }
        }
        iVar13 = (*(int *)(param_3 + 3) - iVar22) + -1;
        if (((local_422c == 6) && (local_4228 == 0)) && (param_5 < iVar13)) {
          *(undefined4 *)param_3 = uVar38;
          *(undefined4 *)((longlong)param_3 + 4) = uVar39;
          *(undefined4 *)(param_3 + 1) = uVar40;
          *(undefined4 *)((longlong)param_3 + 0xc) = uVar41;
          iVar22 = 0;
          *(undefined4 *)(param_3 + 2) = uVar30;
          *(undefined4 *)((longlong)param_3 + 0x14) = uVar31;
          *(undefined4 *)(param_3 + 3) = uVar32;
          *(uint *)((longlong)param_3 + 0x1c) = uVar23;
          *(undefined4 *)(param_3 + 4) = uVar34;
          *(undefined4 *)((longlong)param_3 + 0x24) = uVar35;
          *(undefined4 *)(param_3 + 5) = uVar36;
          *(undefined4 *)((longlong)param_3 + 0x2c) = uVar37;
          param_3[6] = uVar33;
          *(undefined1 *)(param_1 + 0x1c18) = local_1cc0;
          puVar15 = (undefined1 *)(param_1 + 0x1290);
          if (0 < *(int *)(param_1 + 0x11e4)) {
            do {
              *puVar15 = 4;
              iVar22 = iVar22 + 1;
              puVar15 = puVar15 + 1;
            } while (iVar22 < *(int *)(param_1 + 0x11e4));
          }
          if (local_4208 != 2) {
            *(undefined1 *)(param_1 + 0x1290) = local_1cc0;
          }
          iVar22 = 0;
          *(undefined2 *)(param_1 + 0x169c) = local_4220;
          *(undefined4 *)(param_1 + 0x1698) = local_4204;
          puVar15 = puVar1;
          if (0 < *(int *)(param_1 + 0x11e8)) {
            do {
              *puVar15 = 0;
              iVar22 = iVar22 + 1;
              puVar15 = puVar15 + 1;
            } while (iVar22 < *(int *)(param_1 + 0x11e8));
          }
          local_4248._0_4_ = local_4208;
          FUN_1452f2318(param_1,param_3,*(undefined4 *)(param_1 + 0x1684),0);
          local_4248 = (undefined1 *)CONCAT44(local_4248._4_4_,*(undefined4 *)(param_1 + 0x11e8));
          FUN_1452f1e08(param_3,(int)*(char *)(param_1 + 0x12ad),(int)*(char *)(param_1 + 0x12ae),
                        puVar1);
          iVar22 = 0x1f;
          if (*(uint *)(param_3 + 4) != 0) {
            for (; *(uint *)(param_3 + 4) >> iVar22 == 0; iVar22 = iVar22 + -1) {
            }
          }
          iVar13 = (*(int *)(param_3 + 3) - iVar22) + -1;
        }
        if (((param_6 == 0) && (local_422c == 0)) && (param_2 = local_41f8, iVar13 <= param_5))
        goto LAB_1452f33b1;
      }
      param_2 = local_41f8;
      if (local_422c == 6) break;
      if (param_5 < iVar13) {
        if ((local_4228 == 0) && (1 < local_422c)) {
          if (local_1cf4 * 1.5 <= 1.5) {
            local_1cf4 = 1.5;
          }
          else {
            local_1cf4 = local_1cf4 * 1.5;
          }
          local_4210 = 0;
          local_4214 = -1;
          *(undefined1 *)(param_1 + 0x12ae) = 0;
        }
        else {
          local_4200 = (int)(short)uVar19;
          local_4210 = 1;
          local_4214 = iVar14;
          local_420c = iVar13;
LAB_1452f30ab:
          if (local_4228 != 0) goto LAB_1452f3185;
        }
        if (param_5 < iVar13) {
          iVar14 = *(int *)(param_1 + 0x11e4);
          iVar22 = 0;
          if (0 < iVar14) {
            iVar3 = *(int *)(param_1 + 0x11ec);
            piVar29 = local_ba8;
            lVar18 = 0;
            do {
              iVar26 = 0;
              iVar20 = iVar3 * iVar22;
              iVar22 = iVar22 + 1;
              iVar17 = iVar3 * iVar22;
              if (iVar20 < iVar17) {
                pcVar24 = (char *)(param_1 + 0x12b4 + (longlong)iVar20);
                uVar19 = (ulonglong)(uint)(iVar17 - iVar20);
                do {
                  cVar11 = *pcVar24;
                  pcVar24 = pcVar24 + 1;
                  uVar16 = (int)cVar11 >> 0x1f;
                  iVar26 = iVar26 + (((int)cVar11 ^ uVar16) - uVar16);
                  uVar19 = uVar19 - 1;
                } while (uVar19 != 0);
              }
              if ((local_422c == 0) ||
                 ((iVar26 < *(int *)((longlong)local_b98 + lVar18) &&
                  (*(int *)((longlong)local_bb8 + lVar18) == 0)))) {
                *(int *)((longlong)local_b98 + lVar18) = iVar26;
                *(short *)piVar29 = (short)local_4234;
              }
              else {
                *(undefined4 *)((longlong)local_bb8 + lVar18) = 1;
              }
              lVar18 = lVar18 + 4;
              piVar29 = (int *)((longlong)piVar29 + 2);
              lVar28 = local_41e8;
              param_3 = local_41f0;
            } while (iVar22 < iVar14);
          }
          uVar19 = (ulonglong)local_4234;
        }
      }
      else {
        if (param_5 + -5 <= iVar13) goto LAB_1452f33b1;
        local_4218 = (int)(short)uVar19;
        local_4228 = 1;
        local_4224 = iVar13;
        if (iVar14 != local_421c) {
          uVar16 = *(uint *)((longlong)param_3 + 0x1c);
          uVar33 = param_3[6];
          uVar38 = *(undefined4 *)param_3;
          uVar39 = *(undefined4 *)((longlong)param_3 + 4);
          uVar40 = *(undefined4 *)(param_3 + 1);
          uVar41 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar30 = *(undefined4 *)(param_3 + 2);
          uVar31 = *(undefined4 *)((longlong)param_3 + 0x14);
          uVar32 = *(undefined4 *)(param_3 + 3);
          uVar23 = *(uint *)((longlong)param_3 + 0x1c);
          uVar34 = *(undefined4 *)(param_3 + 4);
          uVar35 = *(undefined4 *)((longlong)param_3 + 0x24);
          uVar36 = *(undefined4 *)(param_3 + 5);
          uVar37 = *(undefined4 *)((longlong)param_3 + 0x2c);
          local_421c = iVar14;
          if (0x4fb < uVar16) {
            FUN_144bca940("assertion failed: psRangeEnc->offs <= 1275",
                          "../../../third_party/opus/src/silk/float/encode_frame_FLP.c",0x119);
            uVar16 = *(uint *)((longlong)param_3 + 0x1c);
          }
          memcpy(local_1cb8,(void *)*param_3,(ulonglong)uVar16);
          memcpy(local_30a8,(void *)(param_1 + 0x94),0x1100);
          local_4238 = *(undefined1 *)(param_1 + 0x1c18);
          goto LAB_1452f30ab;
        }
      }
LAB_1452f3185:
      if ((local_4210 & local_4228) == 0) {
        sVar27 = (short)uVar19;
        if (iVar13 <= param_5) {
          lVar18 = FUN_144f396e4((iVar13 * 0x80 + param_5 * -0x80) / *(int *)(param_1 + 0x11e8) +
                                 0x800);
          uVar12 = (ushort)((ulonglong)(lVar18 * sVar27) >> 0x10);
          goto LAB_1452f3226;
        }
        if (sVar27 < 0x4000) {
          uVar19 = CONCAT62((int6)(uVar19 >> 0x10),sVar27 * 2);
        }
        else {
          uVar19 = 0x7fff;
        }
LAB_1452f322a:
        local_4234 = (uint)uVar19;
      }
      else {
        iVar14 = local_4200 - local_4218 >> 2;
        local_4234 = local_4218 +
                     ((param_5 - local_4224) * (local_4200 - local_4218)) /
                     (local_420c - local_4224);
        uVar19 = (ulonglong)local_4234;
        if (iVar14 + local_4218 < (int)(short)local_4234) {
          uVar12 = (short)iVar14 + (short)local_4218;
LAB_1452f3226:
          uVar19 = (ulonglong)uVar12;
          goto LAB_1452f322a;
        }
        if ((int)(short)local_4234 < local_4200 - iVar14) {
          uVar12 = (short)local_4200 - (short)iVar14;
          goto LAB_1452f3226;
        }
      }
      uVar16 = *(uint *)(param_1 + 0x11e4);
      if (0 < (int)uVar16) {
        piVar29 = local_ba8;
        lVar18 = 0;
        uVar25 = (ulonglong)uVar16;
        do {
          if (*(int *)((longlong)local_bb8 + lVar18) == 0) {
            sVar27 = (short)uVar19;
          }
          else {
            sVar27 = (short)*piVar29;
          }
          iVar14 = 0x7fffff;
          iVar22 = (int)((ulonglong)
                         ((longlong)*(int *)((longlong)aiStack_1cd0 + lVar18) * (longlong)sVar27) >>
                        0x10);
          if ((iVar22 < 0x800000) && (iVar14 = iVar22, iVar22 < -0x800000)) {
            iVar14 = -0x800000;
          }
          piVar29 = (int *)((longlong)piVar29 + 2);
          *(int *)((longlong)local_b88 + lVar18) = iVar14 << 8;
          lVar18 = lVar18 + 4;
          uVar25 = uVar25 - 1;
          param_3 = local_41f0;
        } while (uVar25 != 0);
      }
      *(undefined1 *)(param_1 + 0x1c18) = local_1cc0;
      local_4248 = (undefined1 *)CONCAT44(local_4248._4_4_,uVar16);
      FUN_1455198c4(param_1 + 0x1290,local_b88,(undefined1 *)(param_1 + 0x1c18),local_4208 == 2);
      iVar14 = FUN_145519b24(param_1 + 0x1290,*(undefined4 *)(param_1 + 0x11e4));
      uVar25 = (ulonglong)*(uint *)(param_1 + 0x11e4);
      if (0 < (int)*(uint *)(param_1 + 0x11e4)) {
        lVar18 = 0;
        do {
          *(float *)((longlong)local_1fa8 + lVar18) =
               (float)*(int *)((longlong)local_b88 + lVar18) * 1.5258789e-05;
          uVar25 = uVar25 - 1;
          lVar18 = lVar18 + 4;
        } while (uVar25 != 0);
      }
      iVar22 = local_422c + 1;
    }
    if ((local_4228 != 0) && ((iVar14 == local_421c || (param_5 < iVar13)))) {
      *(undefined4 *)param_3 = uVar38;
      *(undefined4 *)((longlong)param_3 + 4) = uVar39;
      *(undefined4 *)(param_3 + 1) = uVar40;
      *(undefined4 *)((longlong)param_3 + 0xc) = uVar41;
      *(undefined4 *)(param_3 + 2) = uVar30;
      *(undefined4 *)((longlong)param_3 + 0x14) = uVar31;
      *(undefined4 *)(param_3 + 3) = uVar32;
      *(uint *)((longlong)param_3 + 0x1c) = uVar23;
      *(undefined4 *)(param_3 + 4) = uVar34;
      *(undefined4 *)((longlong)param_3 + 0x24) = uVar35;
      *(undefined4 *)(param_3 + 5) = uVar36;
      *(undefined4 *)((longlong)param_3 + 0x2c) = uVar37;
      param_3[6] = uVar33;
      if (0x4fb < uVar23) {
        FUN_144bca940("assertion failed: sRangeEnc_copy2.offs <= 1275",
                      "../../../third_party/opus/src/silk/float/encode_frame_FLP.c",0xfb);
      }
      memcpy((void *)*param_3,local_1cb8,(ulonglong)uVar23);
      memcpy((void *)(param_1 + 0x94),local_30a8,0x1100);
      *(undefined1 *)(param_1 + 0x1c18) = local_4238;
      param_2 = local_41f8;
    }
  }
LAB_1452f33b1:
  memmove((void *)(param_1 + 0x1c24),
          (void *)(param_1 + ((longlong)*(int *)(param_1 + 0x11e8) + 0x709) * 4),
          (longlong)(*(int *)(param_1 + 0x11e0) * 5 + *(int *)(param_1 + 0x11f0)) << 2);
  if (*(int *)(param_1 + 0x1248) == 0) {
    *(undefined4 *)(param_1 + 0x1238) = 0;
    *(undefined4 *)(param_1 + 0x11c0) = auStack_1ec8[*(int *)(param_1 + 0x11e4)];
    (&DAT_000011bd)[param_1] = *(undefined1 *)(param_1 + 0x12ad);
    iVar14 = 0x1f;
    if (*(uint *)(param_3 + 4) != 0) {
      for (; *(uint *)(param_3 + 4) >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    *param_2 = (*(int *)(param_3 + 3) - iVar14) + 6 >> 3;
  }
  else {
    *param_2 = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_f8 ^ (ulonglong)auStack_4268);
}



// FUNCTION 1452f3490 FUN_1452f3490 body=87 status=ok
// SIG undefined FUN_1452f3490(void)

void FUN_1452f3490(void *param_1,undefined4 param_2)

{
  int iVar1;
  
  memset(param_1,0,0x2768);
  *(undefined4 *)((longlong)param_1 + 0x13f4) = param_2;
  iVar1 = FUN_144f39688(0x3c0000);
  *(undefined4 *)((longlong)param_1 + 0x1238) = 1;
  iVar1 = (iVar1 + -0x800) * 0x100;
  *(int *)((longlong)param_1 + 8) = iVar1;
  *(int *)((longlong)param_1 + 0xc) = iVar1;
  FUN_14551b8fc((longlong)param_1 + 0x24);
  return;
}



// FUNCTION 1452f34e8 FUN_1452f34e8 body=365 status=ok
// SIG undefined FUN_1452f34e8(void)

int FUN_1452f34e8(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *(undefined4 *)(param_1 + 0x17d0) = param_2[0xc];
  *(undefined4 *)(param_1 + 0x1244) = param_2[0xd];
  iVar2 = param_2[2];
  *(int *)(param_1 + 0x11cc) = iVar2;
  *(undefined4 *)(param_1 + 0x11d4) = param_2[3];
  *(undefined4 *)(param_1 + 0x11d8) = param_2[4];
  *(undefined4 *)(param_1 + 0x11dc) = param_2[5];
  *(undefined4 *)(param_1 + 0x17dc) = param_2[10];
  *(undefined4 *)(param_1 + 0x1688) = *param_2;
  *(undefined4 *)(param_1 + 0x168c) = param_2[1];
  *(undefined4 *)(param_1 + 0x11b8) = param_3;
  *(undefined4 *)(param_1 + 0x1690) = param_4;
  if ((*(int *)(&DAT_0000123c + param_1) == 0) || (*(int *)(param_1 + 0x1248) != 0)) {
    iVar2 = FUN_14551bf74(param_1);
    if (param_5 != 0) {
      iVar2 = param_5;
    }
    iVar3 = FUN_1452f3658(param_1,iVar2);
    iVar4 = FUN_1452f38d4(param_1,iVar2,param_2[6]);
    iVar5 = FUN_1452f3bf0(param_1,param_2[9]);
    *(undefined4 *)(param_1 + 0x1208) = param_2[8];
    iVar2 = param_2[0xb];
    iVar1 = *(int *)(param_1 + 0x17e0);
    *(int *)(param_1 + 0x17e0) = iVar2;
    if (iVar2 != 0) {
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x17e4) = 7;
      }
      else {
        iVar1 = 7 - (int)((ulonglong)((longlong)*(int *)(param_1 + 0x1208) * 0x6666) >> 0x10);
        iVar2 = 2;
        if (2 < iVar1) {
          iVar2 = iVar1;
        }
        *(int *)(param_1 + 0x17e4) = iVar2;
      }
    }
    *(undefined4 *)(&DAT_0000123c + param_1) = 1;
    iVar1 = iVar5 + iVar3 + iVar4;
  }
  else {
    iVar1 = 0;
    if ((iVar2 != *(int *)(param_1 + 0x11d0)) && (iVar1 = 0, 0 < *(int *)(param_1 + 0x11e0))) {
      iVar1 = FUN_1452f3658(param_1);
    }
  }
  return iVar1;
}



// FUNCTION 1452f3658 FUN_1452f3658 body=610 status=ok
// SIG undefined FUN_1452f3658(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452f3658(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  short sVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  float *pfVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  undefined2 uVar18;
  int iVar19;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [32];
  undefined1 auStack_178 [264];
  undefined8 uStack_70;
  undefined1 auStack_68 [32];
  float local_48 [2];
  int local_40;
  undefined1 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)local_48;
  iVar10 = *(int *)(param_1 + 0x11e0);
  iVar15 = *(int *)(param_1 + 0x11cc);
  if ((iVar10 != param_2) || (puVar16 = auStack_68, *(int *)(param_1 + 0x11d0) != iVar15)) {
    if (iVar10 == 0) {
      uStack_70 = 0x1452f36cc;
      FUN_1452efd48(param_1 + 0x16a0,iVar15,param_2 * 1000,1);
      puVar16 = auStack_68;
    }
    else {
      iVar17 = *(int *)(param_1 + 0x11e4) * 10 + 5;
      iVar19 = iVar10 * iVar17;
      local_40 = iVar17 * param_2;
      iVar9 = param_2;
      if (local_40 < iVar19) {
        iVar9 = iVar10;
      }
      uVar5 = (longlong)(iVar9 * iVar17) * 2;
      uVar12 = uVar5 + 0xf;
      if (uVar12 <= uVar5) {
        uVar12 = 0xffffffffffffff0;
      }
      uStack_70 = 0x1452f3726;
      lVar6 = -(uVar12 & 0xfffffffffffffff0);
      iVar10 = iVar19 + -1;
      lVar2 = (longlong)local_48 + lVar6;
      if (-1 < iVar10) {
        puVar13 = (undefined2 *)(lVar2 + (longlong)iVar10 * 2);
        pfVar14 = (float *)(param_1 + 0x1c24 + (longlong)iVar10 * 4);
        do {
          local_48[0] = *pfVar14;
          uVar18 = 0x7fff;
          if ((int)ROUND(local_48[0]) < 0x8000) {
            if ((int)ROUND(local_48[0]) < -0x8000) {
              uVar18 = 0x8000;
            }
            else {
              uVar18 = (undefined2)(int)ROUND(local_48[0]);
            }
          }
          *puVar13 = uVar18;
          pfVar14 = pfVar14 + -1;
          puVar13 = puVar13 + -1;
          iVar10 = iVar10 + -1;
        } while (-1 < iVar10);
        iVar15 = *(int *)(param_1 + 0x11cc);
      }
      sVar3 = *(short *)(param_1 + 0x11e0);
      local_38 = auStack_178 + lVar6;
      *(undefined8 *)((longlong)&uStack_1a0 + lVar6) = 0x1452f37cf;
      FUN_1452efd48(auStack_178 + lVar6,sVar3 * 1000,iVar15,0);
      local_48[0] = (float)((*(int *)(param_1 + 0x11cc) / 1000) * iVar17);
      uVar12 = (longlong)(int)local_48[0] * 2 + 0xf;
      if (uVar12 <= (ulonglong)((longlong)(int)local_48[0] * 2)) {
        uVar12 = 0xffffffffffffff0;
      }
      *(undefined8 *)((longlong)&uStack_1a0 + lVar6) = 0x1452f3814;
      puVar16 = local_38;
      lVar7 = -(uVar12 & 0xfffffffffffffff0);
      *(undefined8 *)((longlong)&uStack_1a0 + lVar7 + lVar6) = 0x1452f382e;
      FUN_1452f0058(puVar16,auStack_178 + lVar7 + lVar6,lVar2,iVar19);
      uVar4 = *(undefined4 *)(param_1 + 0x11cc);
      *(undefined8 *)((longlong)&uStack_1a0 + lVar7 + lVar6) = 0x1452f3857;
      FUN_1452efd48(param_1 + 0x16a0,uVar4,(short)param_2 * 1000,1);
      fVar8 = local_48[0];
      *(undefined8 *)((longlong)&uStack_1a0 + lVar7 + lVar6) = 0x1452f386c;
      FUN_1452f0058(param_1 + 0x16a0,lVar2,auStack_178 + lVar7 + lVar6,fVar8);
      lVar11 = (longlong)(local_40 + -1);
      puVar16 = auStack_198 + lVar7 + lVar6;
      if (-1 < local_40 + -1) {
        pfVar14 = (float *)(param_1 + 0x1c24 + lVar11 * 4);
        do {
          lVar1 = lVar11 * 2;
          lVar11 = lVar11 + -1;
          *pfVar14 = (float)(int)*(short *)(lVar2 + lVar1);
          pfVar14 = pfVar14 + -1;
          puVar16 = auStack_198 + lVar7 + lVar6;
        } while (-1 < lVar11);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x11d0) = *(undefined4 *)(param_1 + 0x11cc);
  uVar12 = local_30 ^ (ulonglong)local_48;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar16 + -8) = &UNK_1452f38ba;
  FUN_144d8e3a0(uVar12);
}



// FUNCTION 1452f38d4 FUN_1452f38d4 body=793 status=ok
// SIG undefined FUN_1452f38d4(void)

undefined4 FUN_1452f38d4(longlong param_1,int param_2,ulonglong param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  puVar5 = &DAT_149d9fb68;
  uVar4 = 10;
  uVar6 = (uint)param_3;
  if (uVar6 != *(uint *)(param_1 + 0x1204)) {
    if ((0x3c < uVar6) || ((0x1000010000100400U >> (param_3 & 0x3f) & 1) == 0)) {
      uVar7 = 0xffffff99;
    }
    iVar2 = (int)(short)param_2;
    if ((int)uVar6 < 0xb) {
      *(undefined4 *)(param_1 + 0x1680) = 1;
      *(uint *)(param_1 + 0x11e4) = (uVar6 == 10) + 1;
      *(int *)(param_1 + 0x11e8) = (short)param_3 * iVar2;
      *(int *)(param_1 + 0x11c4) = iVar2 * 0xe;
      puVar1 = &DAT_149d9fb84;
      if (*(int *)(param_1 + 0x11e0) != 8) {
        puVar1 = &DAT_149d9fb78;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x11e4) = 4;
      *(int *)(param_1 + 0x11e8) = iVar2 * 0x14;
      *(int *)(param_1 + 0x11c4) = iVar2 * 0x18;
      puVar1 = &DAT_149d9fb68;
      *(int *)(param_1 + 0x1680) = (int)uVar6 / 0x14;
      if (*(int *)(param_1 + 0x11e0) != 8) {
        puVar1 = &DAT_149d9fb40;
      }
    }
    *(undefined **)(param_1 + 0x1258) = puVar1;
    *(undefined4 *)(param_1 + 0x1200) = 0;
    *(uint *)(param_1 + 0x1204) = uVar6;
  }
  if (((param_2 - 8U & 0xfffffff3) != 0) || (param_2 == 0x14)) {
    FUN_144bca940("assertion failed: fs_kHz == 8 || fs_kHz == 12 || fs_kHz == 16",
                  "../../../third_party/opus/src/silk/control_codec.c",0xf1);
  }
  if ((*(int *)(param_1 + 0x11e4) - 2U & 0xfffffffd) != 0) {
    FUN_144bca940("assertion failed: psEnc->sCmn.nb_subfr == 2 || psEnc->sCmn.nb_subfr == 4",
                  "../../../third_party/opus/src/silk/control_codec.c",0xf2);
  }
  if (*(int *)(param_1 + 0x11e0) != param_2) {
    *(undefined8 *)(param_1 + 0x1c18) = 0;
    *(undefined4 *)(param_1 + 0x1c20) = 0;
    memset((void *)(param_1 + 0x94),0,0x1120);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x167c) = 0;
    *(undefined4 *)(param_1 + 0x1684) = 0;
    *(undefined4 *)(param_1 + 0x1200) = 0;
    *(undefined4 *)(param_1 + 0x11c0) = 100;
    *(undefined4 *)(param_1 + 0x117c) = 100;
    iVar2 = *(int *)(param_1 + 0x11e4);
    *(undefined4 *)(param_1 + 0x1238) = 1;
    *(undefined1 *)(param_1 + 0x1c18) = 10;
    *(undefined4 *)(param_1 + 0x118c) = 0x10000;
    (&DAT_000011bd)[param_1] = 0;
    *(int *)(param_1 + 0x11e0) = param_2;
    if (param_2 == 8) {
      puVar1 = &DAT_149d9fb84;
    }
    else {
      puVar5 = &DAT_149d9fb40;
      puVar1 = &DAT_149d9fb78;
    }
    if (iVar2 != 4) {
      puVar5 = puVar1;
    }
    *(undefined **)(param_1 + 0x1258) = puVar5;
    if ((param_2 - 8U & 0xfffffffb) == 0) {
      puVar5 = &DAT_149da0400;
    }
    else {
      puVar5 = &DAT_149d9fb90;
      uVar4 = 0x10;
    }
    *(undefined4 *)(param_1 + 0x1220) = uVar4;
    *(undefined **)(param_1 + 0x1260) = puVar5;
    *(int *)(param_1 + 0x11ec) = param_2 * 5;
    *(int *)(param_1 + 0x11e8) = (int)(short)(param_2 * 5) * (int)*(short *)(param_1 + 0x11e4);
    iVar3 = (int)(short)param_2;
    *(int *)(param_1 + 0x11f0) = iVar3 * 0x14;
    *(int *)(param_1 + 0x11f4) = iVar3 * 2;
    *(int *)(param_1 + 0x11c8) = iVar3 * 0x12;
    iVar2 = 0x18;
    if (*(int *)(param_1 + 0x11e4) != 4) {
      iVar2 = 0xe;
    }
    *(int *)(param_1 + 0x11c4) = iVar2 * iVar3;
    if (param_2 == 0x10) {
      *(undefined **)(param_1 + 0x1250) = &DAT_149d32bf8;
    }
    else {
      puVar5 = &DAT_149d32bf0;
      if (param_2 != 0xc) {
        puVar5 = &DAT_149d32be4;
      }
      *(undefined **)(param_1 + 0x1250) = puVar5;
    }
  }
  if (*(int *)(param_1 + 0x11ec) * *(int *)(param_1 + 0x11e4) != *(int *)(param_1 + 0x11e8)) {
    FUN_144bca940("assertion failed: ( psEnc->sCmn.subfr_length * psEnc->sCmn.nb_subfr ) == psEnc->sCmn.frame_length"
                  ,"../../../third_party/opus/src/silk/control_codec.c",0x12e);
  }
  return uVar7;
}



// FUNCTION 1452f3bf0 FUN_1452f3bf0 body=693 status=ok
// SIG undefined FUN_1452f3bf0(void)

undefined8 FUN_1452f3bf0(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (10 < param_2) {
    FUN_144bca940("assertion failed: Complexity >= 0 && Complexity <= 10",
                  "../../../third_party/opus/src/silk/control_codec.c",0x13b);
  }
  iVar1 = *(int *)(param_1 + 0x11e0);
  if ((int)param_2 < 1) {
    *(undefined8 *)(param_1 + 0x1214) = 1;
LAB_1452f3c6b:
    iVar2 = 0;
    *(undefined4 *)(param_1 + 0x121c) = 0xc;
    *(undefined4 *)(param_1 + 0x1224) = 0;
    iVar3 = iVar1 * 3;
    *(undefined4 *)(param_1 + 0x1228) = 6;
    *(undefined4 *)(param_1 + 0x122c) = 0xcccd;
    *(undefined4 *)(param_1 + 0x1234) = 2;
  }
  else {
    if ((int)param_2 < 2) {
      *(undefined8 *)(param_1 + 0x1214) = 1;
      *(undefined4 *)(param_1 + 0x1234) = 3;
    }
    else {
      if ((int)param_2 < 3) {
        *(undefined8 *)(param_1 + 0x1214) = 2;
        goto LAB_1452f3c6b;
      }
      if (3 < (int)param_2) {
        iVar2 = iVar1 * 0x3d7;
        iVar3 = iVar1 * 5;
        *(undefined4 *)(param_1 + 0x1218) = 1;
        if ((int)param_2 < 6) {
          *(undefined4 *)(param_1 + 0x1224) = 1;
          *(undefined4 *)(param_1 + 0x122c) = 0xbd71;
          *(undefined4 *)(param_1 + 0x1228) = 10;
          *(undefined4 *)(param_1 + 0x121c) = 0x10;
          *(undefined4 *)(param_1 + 0x1214) = 2;
          *(undefined4 *)(param_1 + 0x1234) = 6;
        }
        else if ((int)param_2 < 8) {
          *(undefined4 *)(param_1 + 0x1224) = 1;
          *(undefined4 *)(param_1 + 0x122c) = 0xb852;
          *(undefined4 *)(param_1 + 0x1228) = 0xc;
          *(undefined4 *)(param_1 + 0x121c) = 0x14;
          *(undefined4 *)(param_1 + 0x1214) = 3;
          *(undefined4 *)(param_1 + 0x1234) = 8;
        }
        else {
          *(undefined4 *)(param_1 + 0x1224) = 2;
          *(undefined4 *)(param_1 + 0x122c) = 0xb333;
          *(undefined4 *)(param_1 + 0x1228) = 0x10;
          *(undefined4 *)(param_1 + 0x121c) = 0x18;
          *(undefined4 *)(param_1 + 0x1214) = 4;
          *(undefined4 *)(param_1 + 0x1234) = 0x10;
        }
        goto LAB_1452f3da2;
      }
      *(undefined8 *)(param_1 + 0x1214) = 2;
      *(undefined4 *)(param_1 + 0x1234) = 4;
    }
    iVar2 = 0;
    *(undefined4 *)(param_1 + 0x121c) = 0xe;
    *(undefined4 *)(param_1 + 0x1228) = 8;
    iVar3 = iVar1 * 5;
    *(undefined4 *)(param_1 + 0x122c) = 0xc28f;
    *(undefined4 *)(param_1 + 0x1224) = 1;
  }
LAB_1452f3da2:
  *(int *)(param_1 + 0x11f8) = iVar3;
  *(int *)(param_1 + 0x1240) = iVar2;
  *(uint *)(param_1 + 0x1210) = param_2;
  iVar3 = *(int *)(param_1 + 0x1220);
  if (*(int *)(param_1 + 0x1228) < *(int *)(param_1 + 0x1220)) {
    iVar3 = *(int *)(param_1 + 0x1228);
  }
  *(int *)(param_1 + 0x1228) = iVar3;
  *(int *)(&DAT_000011fc + param_1) = iVar1 * 5 + *(int *)(param_1 + 0x11f8) * 2;
  if (0x10 < iVar3) {
    FUN_144bca940("assertion failed: psEncC->pitchEstimationLPCOrder <= MAX_FIND_PITCH_LPC_ORDER",
                  "../../../third_party/opus/src/silk/control_codec.c",0x189);
  }
  if (0x18 < *(int *)(param_1 + 0x121c)) {
    FUN_144bca940("assertion failed: psEncC->shapingLPCOrder <= MAX_SHAPE_LPC_ORDER",
                  "../../../third_party/opus/src/silk/control_codec.c",0x18a);
  }
  if (4 < *(int *)(param_1 + 0x1214)) {
    FUN_144bca940("assertion failed: psEncC->nStatesDelayedDecision <= MAX_DEL_DEC_STATES",
                  "../../../third_party/opus/src/silk/control_codec.c",0x18b);
  }
  if (0x7fff < *(int *)(param_1 + 0x1240)) {
    FUN_144bca940("assertion failed: psEncC->warping_Q16 <= 32767",
                  "../../../third_party/opus/src/silk/control_codec.c",0x18c);
  }
  if (0x50 < *(int *)(param_1 + 0x11f8)) {
    FUN_144bca940("assertion failed: psEncC->la_shape <= LA_SHAPE_MAX",
                  "../../../third_party/opus/src/silk/control_codec.c",0x18d);
  }
  if (0xf0 < *(int *)(&DAT_000011fc + param_1)) {
    FUN_144bca940("assertion failed: psEncC->shapeWinLength <= SHAPE_LPC_WIN_MAX",
                  "../../../third_party/opus/src/silk/control_codec.c",0x18e);
  }
  return 0;
}



// FUNCTION 1452f3ea8 FUN_1452f3ea8 body=168 status=ok
// SIG undefined FUN_1452f3ea8(void)

void FUN_1452f3ea8(int *param_1,float *param_2,float *param_3)

{
  short *psVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  fVar2 = (float)param_1[1];
  if (param_2 == param_3) {
    FUN_144bca940("assertion failed: fin != fout\nIn-place FFT not supported",
                  "../../../third_party/opus/src/celt/kiss_fft.c",0x244);
  }
  uVar5 = 0;
  uVar7 = uVar5;
  if (0 < *param_1) {
    do {
      uVar6 = (int)uVar7 + 1;
      fVar3 = *param_2;
      fVar4 = param_2[1];
      param_2 = param_2 + 2;
      param_3[(longlong)*(short *)(*(longlong *)(param_1 + 0xc) + uVar5) * 2] = fVar3 * fVar2;
      psVar1 = (short *)(*(longlong *)(param_1 + 0xc) + uVar5);
      uVar5 = uVar5 + 2;
      param_3[(longlong)*psVar1 * 2 + 1] = fVar4 * fVar2;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < *param_1);
  }
  FUN_1452f3f50(param_1,param_3);
  return;
}



// FUNCTION 1452f3f50 FUN_1452f3f50 body=714 status=ok
// SIG undefined FUN_1452f3f50(void)

void FUN_1452f3f50(longlong param_1,longlong param_2)

{
  short *psVar1;
  short sVar2;
  float *pfVar3;
  byte bVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  short *psVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_88 [32];
  int local_68;
  int local_60;
  uint local_58 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  psVar1 = (short *)(param_1 + 0xe);
  iVar6 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) < 1) {
    iVar6 = 0;
  }
  local_58[0] = 1;
  psVar10 = psVar1;
  iVar11 = 0;
  do {
    iVar12 = iVar11;
    sVar2 = *psVar10;
    uVar8 = (ulonglong)iVar12;
    *(int *)((longlong)local_58 + (4 - (longlong)psVar1) + (longlong)psVar10) =
         (int)*(short *)((param_1 - (longlong)psVar1) + 0xc + (longlong)psVar10) *
         *(int *)(((longlong)local_58 - (longlong)psVar1) + (longlong)psVar10);
    psVar10 = psVar10 + 2;
    iVar11 = iVar12 + 1;
  } while (sVar2 != 1);
  if (-1 < iVar12) {
    lVar9 = uVar8 << 2;
    iVar11 = (int)*(short *)(param_1 + 10 + (longlong)((iVar12 + 1) * 2) * 2);
    do {
      iVar12 = 1;
      if ((int)uVar8 != 0) {
        iVar12 = (int)*(short *)(lVar9 + 10 + param_1);
      }
      sVar2 = *(short *)(lVar9 + 0xc + param_1);
      if (sVar2 == 2) {
        if (iVar11 != 4) {
          FUN_144bca940("assertion failed: m==4","../../../third_party/opus/src/celt/kiss_fft.c",
                        0x4c);
        }
        if (0 < *(int *)((longlong)local_58 + lVar9)) {
          uVar5 = (ulonglong)*(uint *)((longlong)local_58 + lVar9);
          pfVar3 = (float *)(param_2 + 0x28);
          do {
            fVar13 = pfVar3[-2];
            fVar14 = pfVar3[-1];
            pfVar3[-2] = pfVar3[-10] - fVar13;
            pfVar3[-1] = pfVar3[-9] - fVar14;
            pfVar3[-10] = fVar13 + pfVar3[-10];
            pfVar3[-9] = fVar14 + pfVar3[-9];
            fVar13 = (pfVar3[1] + *pfVar3) * 0.70710677;
            fVar14 = (pfVar3[1] - *pfVar3) * 0.70710677;
            *pfVar3 = pfVar3[-8] - fVar13;
            pfVar3[1] = pfVar3[-7] - fVar14;
            pfVar3[-8] = fVar13 + pfVar3[-8];
            pfVar3[-7] = fVar14 + pfVar3[-7];
            fVar13 = pfVar3[3];
            fVar14 = pfVar3[2];
            pfVar3[2] = pfVar3[-6] - fVar13;
            pfVar3[3] = pfVar3[-5] - -fVar14;
            pfVar3[-6] = fVar13 + pfVar3[-6];
            pfVar3[-5] = -fVar14 + pfVar3[-5];
            fVar13 = (pfVar3[5] - pfVar3[4]) * 0.70710677;
            fVar14 = -(pfVar3[5] + pfVar3[4]) * 0.70710677;
            pfVar3[4] = pfVar3[-4] - fVar13;
            pfVar3[5] = pfVar3[-3] - fVar14;
            pfVar3[-4] = fVar13 + pfVar3[-4];
            pfVar3[-3] = fVar14 + pfVar3[-3];
            pfVar3 = pfVar3 + 0x10;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
      }
      else {
        bVar4 = (byte)iVar6;
        if (sVar2 == 3) {
          local_68 = *(int *)((longlong)local_58 + lVar9);
          local_60 = iVar12;
          FUN_1452f456c(param_2,(longlong)(local_68 << (bVar4 & 0x1f)),param_1);
        }
        else if (sVar2 == 4) {
          local_68 = *(int *)((longlong)local_58 + lVar9);
          local_60 = iVar12;
          FUN_1452f4234(param_2,(longlong)(local_68 << (bVar4 & 0x1f)),param_1);
        }
        else if (sVar2 == 5) {
          local_68 = *(int *)((longlong)local_58 + lVar9);
          local_60 = iVar12;
          FUN_1452f4740(param_2,(longlong)(local_68 << (bVar4 & 0x1f)),param_1);
        }
      }
      lVar9 = lVar9 + -4;
      uVar7 = (int)uVar8 - 1;
      uVar8 = (ulonglong)uVar7;
      iVar11 = iVar12;
    } while (-1 < (int)uVar7);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
}



// FUNCTION 1452f4234 FUN_1452f4234 body=824 status=ok
// SIG undefined FUN_1452f4234(void)

void FUN_1452f4234(float *param_1,longlong param_2,longlong param_3,uint param_4,uint param_5,
                  int param_6)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  ulonglong uVar4;
  float *pfVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulonglong local_a8;
  
  uVar4 = (ulonglong)param_5;
  if (0 < (int)param_5) {
    if (param_4 == 1) {
      param_1 = param_1 + 1;
      do {
        fVar15 = *param_1 - param_1[4];
        fVar17 = param_1[-1] - param_1[3];
        fVar14 = param_1[3] + param_1[-1];
        param_1[-1] = fVar14;
        *param_1 = *param_1 + param_1[4];
        param_1[3] = fVar14 - (param_1[1] + param_1[5]);
        param_1[4] = *param_1 - (param_1[2] + param_1[6]);
        param_1[-1] = param_1[1] + param_1[5] + param_1[-1];
        *param_1 = param_1[2] + param_1[6] + *param_1;
        fVar14 = param_1[2];
        fVar12 = param_1[1];
        fVar13 = param_1[5];
        param_1[1] = (fVar14 - param_1[6]) + fVar17;
        param_1[2] = fVar15 - (fVar12 - fVar13);
        param_1[5] = fVar17 - (fVar14 - param_1[6]);
        param_1[6] = (fVar12 - fVar13) + fVar15;
        param_1 = param_1 + 8;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    else {
      lVar9 = (longlong)(int)(param_4 * 2);
      do {
        pfVar5 = *(float **)(param_3 + 0x38);
        if (0 < (int)param_4) {
          local_a8 = (ulonglong)param_4;
          lVar6 = (int)param_4 - lVar9;
          pfVar10 = param_1 + lVar9 * 2;
          lVar3 = (int)(param_4 * 3) - lVar9;
          pfVar7 = param_1;
          pfVar8 = pfVar5;
          pfVar11 = pfVar5;
          do {
            fVar14 = *pfVar8;
            pfVar1 = pfVar8 + 1;
            pfVar8 = pfVar8 + param_2 * 2;
            fVar12 = *pfVar11;
            fVar13 = *pfVar5;
            fVar21 = *pfVar1 * pfVar10[lVar6 * 2] + fVar14 * pfVar10[lVar6 * 2 + 1];
            pfVar2 = pfVar11 + 1;
            fVar22 = fVar14 * pfVar10[lVar6 * 2] - *pfVar1 * pfVar10[lVar6 * 2 + 1];
            pfVar11 = pfVar11 + param_2 * 4;
            fVar20 = fVar12 * *pfVar10 - *pfVar2 * pfVar10[1];
            fVar15 = fVar12 * pfVar10[1] + *pfVar2 * *pfVar10;
            pfVar1 = pfVar5 + 1;
            pfVar5 = pfVar5 + param_2 * 6;
            fVar19 = *pfVar7 - fVar20;
            fVar20 = fVar20 + *pfVar7;
            fVar17 = fVar13 * pfVar10[lVar3 * 2] - *pfVar1 * pfVar10[lVar3 * 2 + 1];
            fVar14 = pfVar10[lVar9 * -2 + 1];
            fVar16 = fVar13 * pfVar10[lVar3 * 2 + 1] + *pfVar1 * pfVar10[lVar3 * 2];
            fVar18 = fVar14 - fVar15;
            *pfVar7 = fVar20;
            fVar12 = fVar17 + fVar22;
            pfVar10[lVar9 * -2 + 1] = fVar14 + fVar15;
            fVar13 = fVar16 + fVar21;
            fVar21 = fVar21 - fVar16;
            fVar22 = fVar22 - fVar17;
            *pfVar10 = fVar20 - fVar12;
            pfVar10[1] = pfVar10[lVar9 * -2 + 1] - fVar13;
            fVar14 = pfVar10[lVar9 * -2 + 1];
            *pfVar7 = fVar12 + *pfVar7;
            pfVar10[lVar9 * -2 + 1] = fVar13 + fVar14;
            pfVar10[lVar6 * 2] = fVar21 + fVar19;
            pfVar7 = pfVar7 + 2;
            pfVar10[lVar6 * 2 + 1] = fVar18 - fVar22;
            pfVar10[lVar3 * 2] = fVar19 - fVar21;
            pfVar10[lVar3 * 2 + 1] = fVar22 + fVar18;
            pfVar10 = pfVar10 + 2;
            local_a8 = local_a8 - 1;
          } while (local_a8 != 0);
        }
        param_1 = param_1 + (longlong)param_6 * 2;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  return;
}



// FUNCTION 1452f456c FUN_1452f456c body=468 status=ok
// SIG undefined FUN_1452f456c(void)

void FUN_1452f456c(float *param_1,longlong param_2,longlong param_3,int param_4,uint param_5,
                  int param_6)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  lVar8 = (longlong)param_4;
  fVar3 = *(float *)(*(longlong *)(param_3 + 0x38) + 4 + lVar8 * param_2 * 8);
  uVar7 = (ulonglong)param_5;
  if (0 < (int)param_5) {
    lVar9 = param_4 * 2 - lVar8;
    do {
      pfVar5 = *(float **)(param_3 + 0x38);
      pfVar6 = param_1 + lVar8 * 2 + 1;
      pfVar4 = param_1;
      pfVar10 = pfVar5;
      lVar11 = lVar8;
      do {
        pfVar1 = pfVar10 + 1;
        pfVar2 = pfVar10 + 1;
        fVar14 = *pfVar10;
        fVar12 = *pfVar10;
        pfVar10 = pfVar10 + param_2 * 2;
        fVar16 = pfVar6[-1] * *pfVar1 + *pfVar6 * fVar14;
        fVar17 = pfVar6[-1] * fVar12 - *pfVar6 * *pfVar2;
        pfVar1 = pfVar5 + 1;
        pfVar2 = pfVar5 + 1;
        fVar14 = *pfVar5;
        fVar12 = *pfVar5;
        pfVar5 = pfVar5 + param_2 * 4;
        fVar14 = pfVar6[lVar9 * 2 + -1] * fVar14 - pfVar6[lVar9 * 2] * *pfVar2;
        fVar15 = pfVar6[lVar9 * 2] * fVar12 + pfVar6[lVar9 * 2 + -1] * *pfVar1;
        fVar12 = fVar17 + fVar14;
        fVar13 = fVar16 + fVar15;
        fVar15 = (fVar16 - fVar15) * fVar3;
        fVar16 = (fVar17 - fVar14) * fVar3;
        pfVar6[-1] = *pfVar4 - fVar12 * 0.5;
        *pfVar6 = pfVar6[lVar8 * -2] - fVar13 * 0.5;
        fVar14 = pfVar6[lVar8 * -2];
        *pfVar4 = fVar12 + *pfVar4;
        pfVar4 = pfVar4 + 2;
        pfVar6[lVar8 * -2] = fVar13 + fVar14;
        pfVar6[lVar9 * 2 + -1] = fVar15 + pfVar6[-1];
        pfVar6[lVar9 * 2] = *pfVar6 - fVar16;
        *pfVar6 = fVar16 + *pfVar6;
        pfVar6[-1] = pfVar6[-1] - fVar15;
        pfVar6 = pfVar6 + 2;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      param_1 = param_1 + (longlong)param_6 * 2;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 1452f4740 FUN_1452f4740 body=1103 status=ok
// SIG undefined FUN_1452f4740(void)

void FUN_1452f4740(longlong param_1,longlong param_2,longlong param_3,uint param_4,uint param_5,
                  int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  ulonglong uVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
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
  ulonglong local_130;
  
  pfVar5 = *(float **)(param_3 + 0x38);
  uVar12 = (ulonglong)param_5;
  lVar17 = (longlong)(int)param_4;
  lVar6 = lVar17 * param_2;
  fVar1 = pfVar5[lVar6 * 2];
  fVar2 = pfVar5[lVar6 * 2 + 1];
  fVar3 = pfVar5[lVar6 * 4];
  fVar4 = pfVar5[lVar6 * 4 + 1];
  if (0 < (int)param_5) {
    lVar6 = (longlong)(int)(param_4 * 3);
    pfVar13 = (float *)(lVar6 * 8 + param_1);
    do {
      if (0 < (int)param_4) {
        pfVar10 = pfVar13 + lVar6 * -2 + 1;
        lVar7 = (longlong)(int)(param_4 << 2);
        lVar8 = (longlong)(int)(param_4 * 2);
        local_130 = (ulonglong)param_4;
        pfVar9 = pfVar5;
        pfVar11 = pfVar5;
        pfVar14 = pfVar5;
        pfVar15 = pfVar13;
        pfVar16 = pfVar5;
        do {
          fVar27 = pfVar10[-1];
          fVar30 = pfVar10[lVar17 * 2 + -1] * pfVar11[1] + pfVar10[lVar17 * 2] * *pfVar11;
          fVar19 = *pfVar10;
          fVar31 = pfVar10[lVar17 * 2 + -1] * *pfVar11 - pfVar10[lVar17 * 2] * pfVar11[1];
          fVar28 = pfVar10[lVar8 * 2] * *pfVar14 + pfVar10[lVar8 * 2 + -1] * pfVar14[1];
          fVar29 = pfVar10[lVar8 * 2 + -1] * *pfVar14 - pfVar10[lVar8 * 2] * pfVar14[1];
          fVar20 = *pfVar9 * *pfVar15 - pfVar10[lVar6 * 2] * pfVar9[1];
          fVar21 = pfVar9[1] * *pfVar15 + pfVar10[lVar6 * 2] * *pfVar9;
          fVar23 = fVar20 + fVar29;
          fVar29 = fVar29 - fVar20;
          fVar24 = fVar21 + fVar28;
          fVar18 = pfVar10[lVar7 * 2] * *pfVar16 + pfVar10[lVar7 * 2 + -1] * pfVar16[1];
          fVar20 = pfVar10[lVar7 * 2 + -1] * *pfVar16 - pfVar10[lVar7 * 2] * pfVar16[1];
          fVar28 = fVar28 - fVar21;
          fVar26 = fVar20 + fVar31;
          fVar25 = fVar18 + fVar30;
          fVar30 = fVar30 - fVar18;
          fVar31 = fVar31 - fVar20;
          pfVar10[-1] = fVar23 + fVar26 + fVar27;
          *pfVar10 = fVar24 + fVar25 + fVar19;
          fVar22 = fVar23 * fVar3 + fVar26 * fVar1 + fVar27;
          fVar18 = fVar2 * fVar30 + fVar4 * fVar28;
          fVar21 = fVar3 * fVar24 + fVar1 * fVar25 + fVar19;
          pfVar11 = pfVar11 + param_2 * 2;
          pfVar14 = pfVar14 + param_2 * 4;
          pfVar9 = pfVar9 + param_2 * 6;
          pfVar16 = pfVar16 + param_2 * 8;
          fVar20 = -(fVar31 * fVar2 + fVar29 * fVar4);
          pfVar10[lVar17 * 2 + -1] = fVar22 - fVar18;
          pfVar10[lVar17 * 2] = fVar21 - fVar20;
          pfVar10[lVar7 * 2 + -1] = fVar18 + fVar22;
          pfVar10[lVar7 * 2] = fVar20 + fVar21;
          fVar27 = fVar26 * fVar3 + fVar23 * fVar1 + fVar27;
          fVar20 = fVar2 * fVar28 - fVar30 * fVar4;
          fVar18 = fVar31 * fVar4 - fVar29 * fVar2;
          fVar19 = fVar3 * fVar25 + fVar1 * fVar24 + fVar19;
          pfVar10[lVar8 * 2 + -1] = fVar20 + fVar27;
          pfVar10[lVar8 * 2] = fVar18 + fVar19;
          *pfVar15 = fVar27 - fVar20;
          pfVar15 = pfVar15 + 2;
          pfVar10[lVar6 * 2] = fVar19 - fVar18;
          pfVar10 = pfVar10 + 2;
          local_130 = local_130 - 1;
        } while (local_130 != 0);
      }
      pfVar13 = pfVar13 + (longlong)param_6 * 2;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return;
}



// FUNCTION 1452f4b90 FUN_1452f4b90 body=238 status=ok
// SIG undefined FUN_1452f4b90(void)

void FUN_1452f4b90(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  undefined4 uVar7;
  
  lVar2 = param_1[2];
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  lVar5 = (longlong)iVar1;
  lVar4 = 0;
  lVar3 = lVar4;
  if (0 < iVar1) {
    do {
      *(float *)(param_2 + lVar3 * 4) = (float)(int)*(char *)(*param_1 + lVar3);
      lVar3 = lVar3 + 1;
    } while (lVar3 < lVar5);
  }
  FUN_1452f5064(param_2,param_1[1],lVar5,(int)lVar2,iVar1,param_3);
  lVar2 = lVar4;
  if (0 < lVar5) {
    do {
      *(float *)(param_2 + lVar2 * 4) = *(float *)(param_2 + lVar2 * 4) * 0.0078125;
      lVar2 = lVar2 + 1;
    } while (lVar2 < lVar5);
    if (0 < lVar5) {
      if ((int)param_1[3] == 0) {
        do {
          uVar7 = FUN_1452f4f68();
          *(undefined4 *)(param_2 + lVar4 * 4) = uVar7;
          lVar4 = lVar4 + 1;
        } while (lVar4 < lVar5);
      }
      else {
        do {
          fVar6 = (float)FUN_1452f4f68(*(float *)(param_2 + lVar4 * 4) * 0.5);
          *(float *)(param_2 + lVar4 * 4) = fVar6 * 0.5 + 0.5;
          lVar4 = lVar4 + 1;
        } while (lVar4 < lVar5);
      }
    }
  }
  return;
}



// FUNCTION 1452f4c80 FUN_1452f4c80 body=704 status=ok
// SIG undefined FUN_1452f4c80(void)

void FUN_1452f4c80(longlong *param_1,void *param_2,undefined8 param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_2b8 [32];
  int local_298;
  float *local_290;
  undefined4 local_288;
  undefined8 local_280;
  longlong local_278;
  longlong local_270;
  float local_268 [32];
  float local_1e8 [32];
  float local_168 [32];
  float local_e8 [32];
  ulonglong local_68;
  
  local_68 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  iVar2 = *(int *)((longlong)param_1 + 0x1c);
  lVar7 = (longlong)iVar2;
  lVar5 = 0;
  local_288 = (undefined4)param_1[3];
  iVar3 = iVar2 * 3;
  if (0 < iVar2) {
    lVar6 = *param_1;
    lVar4 = lVar5;
    do {
      local_1e8[lVar4] = (float)(int)*(char *)(lVar6 + lVar4);
      lVar4 = lVar4 + 1;
    } while (lVar4 < lVar7);
  }
  local_278 = param_1[1];
  local_298 = iVar3;
  local_290 = (float *)param_3;
  local_280 = param_3;
  FUN_1452f5064(local_1e8,local_278,iVar2);
  local_270 = param_1[2];
  local_298 = iVar3;
  local_290 = param_2;
  FUN_1452f5064(local_1e8,local_270,iVar2,iVar2);
  lVar6 = lVar5;
  if (0 < iVar2) {
    do {
      fVar8 = (float)FUN_1452f4f68(local_1e8[lVar6] * 0.0078125 * 0.5);
      local_1e8[lVar6] = fVar8 * 0.5 + 0.5;
      lVar6 = lVar6 + 1;
    } while (lVar6 < lVar7);
    lVar6 = *param_1;
    lVar4 = lVar5;
    do {
      local_268[lVar4] = (float)(int)*(char *)(lVar6 + lVar7 + lVar4);
      lVar4 = lVar4 + 1;
    } while (lVar4 < lVar7);
  }
  local_290 = (float *)local_280;
  local_298 = iVar3;
  FUN_1452f5064(local_268,param_1[1] + lVar7,iVar2,(int)param_1[3]);
  local_298 = iVar3;
  local_290 = param_2;
  FUN_1452f5064(local_268,param_1[2] + lVar7,iVar2,iVar2);
  lVar6 = lVar5;
  if (0 < iVar2) {
    do {
      fVar8 = (float)FUN_1452f4f68(local_268[lVar6] * 0.0078125 * 0.5);
      local_268[lVar6] = fVar8 * 0.5 + 0.5;
      lVar6 = lVar6 + 1;
    } while (lVar6 < lVar7);
    lVar6 = *param_1;
    lVar4 = lVar5;
    do {
      local_168[lVar4] = (float)(int)*(char *)(lVar6 + lVar7 * 2 + lVar4);
      lVar4 = lVar4 + 1;
    } while (lVar4 < lVar7);
    lVar6 = lVar5;
    do {
      local_e8[lVar6] =
           *(float *)(((longlong)param_2 - (longlong)local_268) + (longlong)(local_268 + lVar6)) *
           local_268[lVar6];
      lVar6 = lVar6 + 1;
    } while (lVar6 < lVar7);
  }
  local_290 = (float *)local_280;
  local_298 = iVar3;
  FUN_1452f5064(local_168,local_278 + iVar2 * 2,iVar2,local_288);
  local_290 = local_e8;
  local_298 = iVar3;
  FUN_1452f5064(local_168,local_270 + iVar2 * 2,iVar2,iVar2);
  if (0 < iVar2) {
    do {
      pfVar1 = (float *)((longlong)param_2 + lVar5 * 4);
      fVar8 = *(float *)(((longlong)local_1e8 - (longlong)param_2) + (longlong)pfVar1);
      fVar9 = (float)FUN_1452f4f68(local_168[lVar5] * 0.0078125);
      local_168[lVar5] = fVar9 * (1.0 - fVar8) + fVar8 * *pfVar1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < lVar7);
    memcpy(param_2,local_168,lVar7 << 2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_68 ^ (ulonglong)auStack_2b8);
}



// FUNCTION 1452f4f68 FUN_1452f4f68 body=250 status=ok
// SIG undefined FUN_1452f4f68(void)

float FUN_1452f4f68(float param_1)

{
  float fVar1;
  double dVar2;
  float fVar3;
  
  fVar3 = 1.0;
  if (param_1 < 8.0) {
    if (-8.0 < param_1) {
      if (NAN(param_1)) {
        fVar3 = 0.0;
      }
      else {
        if (param_1 < 0.0) {
          param_1 = -param_1;
          fVar3 = -1.0;
        }
        dVar2 = floor((double)(param_1 * 25.0 + 0.5));
        fVar1 = *(float *)(&DAT_149d33500 + (longlong)(int)dVar2 * 4);
        param_1 = param_1 - (float)(int)dVar2 * 0.04;
        fVar3 = ((1.0 - fVar1 * fVar1) * param_1 * (1.0 - fVar1 * param_1) + fVar1) * fVar3;
      }
    }
    else {
      fVar3 = -1.0;
    }
  }
  else {
    fVar3 = 1.0;
  }
  return fVar3;
}



// FUNCTION 1452f5064 FUN_1452f5064 body=122 status=ok
// SIG undefined FUN_1452f5064(void)

void FUN_1452f5064(float *param_1,longlong param_2,int param_3,uint param_4,int param_5,
                  float *param_6)

{
  float fVar1;
  char cVar2;
  char *pcVar3;
  ulonglong uVar4;
  float *pfVar5;
  longlong lVar6;
  int iVar7;
  float fVar8;
  
  if (0 < param_3) {
    lVar6 = (longlong)param_3;
    iVar7 = 0;
    do {
      if (0 < (int)param_4) {
        fVar8 = *param_1;
        pcVar3 = (char *)(iVar7 + param_2);
        uVar4 = (ulonglong)param_4;
        pfVar5 = param_6;
        do {
          cVar2 = *pcVar3;
          pcVar3 = pcVar3 + param_5;
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          fVar8 = fVar8 + (float)(int)cVar2 * fVar1;
          *param_1 = fVar8;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      iVar7 = iVar7 + 1;
      param_1 = param_1 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 1452f50e0 FUN_1452f50e0 body=1218 status=ok
// SIG undefined FUN_1452f50e0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1452f50e0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar13;
  ulonglong uVar14;
  uint *puVar15;
  longlong lVar16;
  undefined1 auStack_188 [32];
  longlong *local_168;
  longlong *local_160;
  int *local_158;
  undefined8 *local_150;
  int *local_148;
  undefined8 *local_140;
  int *local_138;
  undefined8 *local_130;
  int *local_128;
  undefined8 *local_120;
  undefined4 local_118;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8 [6];
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [16];
  int local_88;
  int local_84;
  ulonglong local_48;
  ulonglong uVar12;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  iVar8 = *(int *)(param_2 + 0x70);
  if ((iVar8 < 0) || (*(int *)(param_1 + 0x420) <= iVar8)) goto LAB_1452f5596;
  uVar9 = 0;
  local_160 = &local_c8;
  local_158 = (int *)CONCAT44(local_158._4_4_,1);
  lVar16 = (longlong)iVar8 * 0x624 + *(longlong *)(param_1 + 0x418);
  local_168 = (longlong *)&local_104;
  iVar8 = 0;
  local_100 = 0;
  local_104 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = lVar16;
  uVar3 = (**(code **)(param_1 + 0xd0))
                    (*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar16 + 4),&local_100,&local_d0);
  if ((uVar3 < 2) &&
     ((memset(local_98,0,0x50), lVar10 = local_d0, 1 < local_104 &&
      (lVar13 = 0xffffffff, 0 < local_100)))) {
    puVar15 = (uint *)(local_d0 + 0x40);
    uVar12 = uVar9;
    uVar14 = uVar9;
    do {
      uVar3 = *puVar15;
      puVar15 = puVar15 + 0x14;
      iVar4 = (int)uVar12;
      if ((int)uVar3 <= (int)(uint)uVar14) {
        iVar4 = (int)lVar13;
        uVar3 = (uint)uVar14;
      }
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      lVar13 = (longlong)iVar4;
      uVar14 = (ulonglong)uVar3;
    } while ((int)uVar11 < local_100);
    if (((1 < (int)uVar3) && (-1 < iVar4)) && (iVar4 < local_100)) {
      local_168 = (longlong *)&local_fc;
      local_fc = 0;
      iVar4 = (**(code **)(param_1 + 0xd8))
                        (*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar16 + 4),local_104,local_c8
                        );
      if ((iVar4 == 0) && (-1 < local_fc)) {
        local_120 = &local_a0;
        local_108 = 0;
        local_118 = 2;
        local_128 = local_f8 + 1;
        local_130 = &local_a8;
        local_138 = local_f8 + 2;
        local_140 = &local_b0;
        local_148 = local_f8 + 3;
        local_150 = &local_b8;
        local_158 = local_f8 + 4;
        local_160 = &local_d8;
        local_168 = (longlong *)&local_108;
        local_d8 = 0;
        local_f8[4] = 0;
        local_b8 = 0;
        local_f8[3] = 0;
        local_b0 = 0;
        local_f8[2] = 0;
        local_a8 = 0;
        local_f8[1] = 0;
        local_a0 = 0;
        iVar4 = (**(code **)(param_1 + 0xe0))
                          (*(undefined8 *)(param_1 + 8),*(undefined4 *)(local_c0 + 4),local_fc,
                           local_98);
        if (iVar4 == 0) {
          if (1 < local_108) {
            *(undefined4 *)(param_2 + 100) = *(undefined4 *)(lVar10 + 0x20 + lVar13 * 0x50);
            *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(lVar10 + 0x24 + lVar13 * 0x50);
          }
          *(undefined4 *)(param_2 + 0x58) = 1;
          *(int *)(param_2 + 0x60) = local_88;
          local_f8[5] = local_88 + -1;
          *(int *)(param_2 + 0x5c) = local_84;
          if (local_84 < 3) {
LAB_1452f5344:
            iVar4 = 0;
          }
          else if (local_84 < 5) {
            iVar4 = 1;
          }
          else {
            iVar4 = 2;
            if (6 < local_84) goto LAB_1452f5344;
          }
          uVar12 = uVar9;
          uVar14 = uVar9;
          iVar5 = local_108;
          if (0 < local_108) {
            do {
              lVar16 = local_d8 + uVar14;
              if (0 < *(int *)(param_2 + 0x48)) {
                piVar6 = (int *)(*(longlong *)(param_2 + 0x50) + 0x1c8);
                uVar7 = uVar9;
                do {
                  if (*piVar6 == *(int *)(lVar16 + 8)) {
                    lVar10 = (longlong)(int)uVar7 * 0x1d8 + *(longlong *)(param_2 + 0x50);
                    if (lVar10 != 0) {
                      uVar3 = *(uint *)(lVar10 + 0x120);
                      *(uint *)(lVar10 + 0x120) = uVar3 | 0x20;
                      iVar5 = *(int *)(lVar16 + 0x24);
                      *(int *)(lVar10 + 0x154) = iVar5;
                      iVar1 = *(int *)(lVar16 + 0x28);
                      *(int *)(lVar10 + 0x158) = iVar1;
                      if ((iVar4 == iVar5) && (local_f8[5] == iVar1)) {
                        *(uint *)(lVar10 + 0x120) = uVar3 | 0x60;
                      }
                      local_168 = &local_e0;
                      local_f8[0] = 0;
                      local_e0 = 0;
                      iVar5 = (**(code **)(param_1 + 0xe8))
                                        (*(undefined8 *)(param_1 + 8),*(undefined4 *)(local_c0 + 4),
                                         *(undefined4 *)(lVar16 + 8),local_f8);
                      if ((((iVar5 == 0) && (0 < local_f8[0])) &&
                          (1 < *(int *)(local_e0 + 0x2c) + 1U)) &&
                         (*(int *)(local_e0 + 0x2c) != 0xb4)) {
                        *(uint *)(lVar10 + 0x120) = *(uint *)(lVar10 + 0x120) | 0x80;
                      }
                      FUN_144bcb560(&local_e0);
                      iVar5 = local_108;
                    }
                    break;
                  }
                  uVar3 = (int)uVar7 + 1;
                  uVar7 = (ulonglong)uVar3;
                  piVar6 = piVar6 + 0x76;
                } while ((int)uVar3 < *(int *)(param_2 + 0x48));
              }
              uVar3 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar3;
              uVar14 = uVar14 + 0x70;
            } while ((int)uVar3 < iVar5);
          }
        }
        FUN_144bcb560(&local_d8);
        FUN_144bcb560(&local_b8);
        FUN_144bcb560(&local_b0);
        FUN_144bcb560(&local_a8);
        FUN_144bcb560(&local_a0);
      }
    }
  }
  FUN_144bcb560(&local_d0);
  FUN_144bcb560(&local_c8);
  if (*(int *)(param_2 + 0x58) != 0) {
    uVar12 = uVar9;
    uVar14 = uVar9;
    if (0 < *(int *)(param_2 + 0x48)) {
      do {
        lVar16 = *(longlong *)(param_2 + 0x50) + uVar14;
        if ((*(uint *)(lVar16 + 0x120) & 0x20) != 0) {
          if ((*(uint *)(lVar16 + 0x120) & 0x80) == 0) {
            *(int *)(lVar16 + 0x138) = *(int *)(param_2 + 100) / *(int *)(param_2 + 0x5c);
            iVar8 = *(int *)(param_2 + 0x68);
          }
          else {
            *(int *)(lVar16 + 0x138) = *(int *)(param_2 + 0x68) / *(int *)(param_2 + 0x5c);
            iVar8 = *(int *)(param_2 + 100);
            uVar9 = (ulonglong)((int)uVar9 + 1);
          }
          *(int *)(lVar16 + 0x13c) = iVar8 / *(int *)(param_2 + 0x60);
          *(int *)(lVar16 + 0x130) = *(int *)(lVar16 + 0x154) * *(int *)(lVar16 + 0x138);
          *(int *)(lVar16 + 0x134) = *(int *)(lVar16 + 0x158) * *(int *)(lVar16 + 0x13c);
          *(undefined4 *)(lVar16 + 0x140) = *(undefined4 *)(lVar16 + 0x130);
          *(undefined4 *)(lVar16 + 0x144) = *(undefined4 *)(lVar16 + 0x134);
          *(undefined4 *)(lVar16 + 0x148) = *(undefined4 *)(lVar16 + 0x138);
          *(undefined4 *)(lVar16 + 0x14c) = *(undefined4 *)(lVar16 + 0x13c);
        }
        iVar8 = (int)uVar9;
        uVar3 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar3;
        uVar14 = uVar14 + 0x1d8;
      } while ((int)uVar3 < *(int *)(param_2 + 0x48));
    }
    if (iVar8 == *(int *)(param_2 + 0x5c)) {
      uVar2 = *(undefined4 *)(param_2 + 100);
      *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_2 + 0x68);
      *(undefined4 *)(param_2 + 0x68) = uVar2;
    }
  }
LAB_1452f5596:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_188);
}



// FUNCTION 1452f55b0 _guard_check_icall body=3 status=ok
// SIG undefined _guard_check_icall(void)

void _guard_check_icall(void)

{
  return;
}



// FUNCTION 1452f55c0 FUN_1452f55c0 body=797 status=ok
// SIG undefined FUN_1452f55c0(void)

void FUN_1452f55c0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  longlong lVar10;
  char *pcVar11;
  undefined1 auStack_98 [32];
  char **local_78;
  undefined8 local_70;
  char *local_68;
  int local_5c;
  undefined1 local_50 [24];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar10 = param_1 + 0xa0 + (longlong)*(char *)(param_2 + 0x1c7) * 0xa8;
  iVar3 = FUN_144f429b0(param_2,3);
  if ((iVar3 != 0) && (iVar3 = FUN_144f429b0(param_2,0x20), iVar3 != 0)) {
    iVar3 = FUN_144f429b0(param_2,0x20);
    if (iVar3 < 0x80) {
      uVar6 = FUN_144f438d0(param_2,0x20);
      iVar3 = FUN_1424c2e40(*(undefined8 *)(lVar10 + 8),"%s258EAFA5-E914-47DA-95CA-C5AB0DC85B11",
                            uVar6);
      FUN_1452f75a0(*(undefined8 *)(lVar10 + 8),(longlong)iVar3,local_50);
      iVar3 = FUN_144f455c0(local_50,0x14,*(undefined8 *)(lVar10 + 8),
                            *(undefined4 *)(param_1 + 0x4bc));
      if (iVar3 < 0) {
        FUN_144bd5aa0(2,"Base64 encoded hash too long\n");
      }
      else {
        iVar4 = FUN_144bd76e0(param_2);
        if (iVar4 == 0) {
          lVar2 = *(longlong *)(lVar10 + 8);
          pcVar11 = (char *)(lVar2 + 400);
          builtin_strncpy(pcVar11,"HTTP/1.1",8);
          builtin_strncpy((char *)(lVar2 + 0x198)," 101 Swi",8);
          pcVar9 = (char *)(lVar2 + 0x1f1);
          builtin_strncpy((char *)(lVar2 + 0x1a0),"tching P",8);
          builtin_strncpy((char *)(lVar2 + 0x1a8),"rotocols",8);
          builtin_strncpy((char *)(lVar2 + 0x1b0),"\r\nUpgrad",8);
          builtin_strncpy((char *)(lVar2 + 0x1b8),"e: WebSo",8);
          builtin_strncpy((char *)(lVar2 + 0x1c0),"cket\r\nCo",8);
          builtin_strncpy((char *)(lVar2 + 0x1c8),"nnection",8);
          builtin_strncpy((char *)(lVar2 + 0x1d0),": Up",4);
          builtin_strncpy((char *)(lVar2 + 0x1d4),"grad",4);
          builtin_strncpy((char *)(lVar2 + 0x1d8),"e\r\nS",4);
          builtin_strncpy((char *)(lVar2 + 0x1dc),"ec-W",4);
          builtin_strncpy((char *)(lVar2 + 0x1e0),"ebSo",4);
          builtin_strncpy((char *)(lVar2 + 0x1e4),"cket",4);
          builtin_strncpy((char *)(lVar2 + 0x1e8),"-Acc",4);
          builtin_strncpy((char *)(lVar2 + 0x1ec),"ept:",4);
          *(undefined2 *)(lVar2 + 0x1f0) = 0x20;
          pcVar8 = *(char **)(lVar10 + 8);
          pcVar7 = pcVar9;
          do {
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            *pcVar7 = cVar1;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          pcVar8 = pcVar9 + iVar3;
          iVar4 = FUN_144f429b0(param_2,0xc);
          if (((iVar4 != 0) && ((char *)**(undefined8 **)(param_2 + 0xa0) != (char *)0x0)) &&
             (*(char *)**(undefined8 **)(param_2 + 0xa0) != '\0')) {
            builtin_strncpy(pcVar9 + iVar3,"\r\nSec-WebSocket-Protocol: ",0x1b);
            iVar3 = FUN_144bd6620(pcVar8 + 0x1a,0x80,&DAT_149dfbe46,
                                  **(undefined8 **)(param_2 + 0xa0));
            pcVar8 = pcVar8 + 0x1a + iVar3;
          }
          pcVar8[0] = '\r';
          pcVar8[1] = '\n';
          pcVar8[2] = '\0';
          local_68 = pcVar8 + 2;
          local_5c = (*(int *)(param_1 + 0x4bc) - (int)local_68) + *(int *)(lVar10 + 8);
          local_78 = &local_68;
          local_70 = 0;
          iVar3 = FUN_144bd7680(*(undefined8 *)(*(longlong *)(param_2 + 0xa0) + 8),param_2,0x35,
                                *(undefined8 *)(param_2 + 0x130));
          if (iVar3 == 0) {
            local_68[0] = '\r';
            local_68[1] = '\n';
            local_68[2] = '\0';
            pcVar9 = local_68 + (2 - (longlong)pcVar11);
            iVar3 = FUN_144bd8dc0(param_2,pcVar11,pcVar9,8);
            if ((char *)(longlong)iVar3 == pcVar9) {
              *(undefined1 *)(param_2 + 0x1c4) = 0;
              *(undefined2 *)(param_2 + 0x70) = 0x117;
              uVar6 = FUN_144f438d0(param_2,0);
              uVar5 = FUN_144f429b0(param_2,0);
              lVar10 = FUN_144f40330(param_2,uVar6,uVar5);
              if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0x28) != 0)) {
                local_78 = (char **)0x0;
                (**(code **)(*(longlong *)(param_2 + 0xa0) + 8))
                          (param_2,0x38,*(undefined8 *)(param_2 + 0x130));
              }
            }
          }
        }
      }
    }
    else {
      FUN_144bd5aa0(2,"Client key too long %d\n");
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98);
}



// FUNCTION 1452f5900 FUN_1452f5900 body=891 status=ok
// SIG undefined FUN_1452f5900(void)

void FUN_1452f5900(longlong param_1)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  char *pcVar11;
  longlong lVar12;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  char local_e8 [64];
  char local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar9 = 0;
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    FUN_144bd5aa0(1,"NULL protocol at lws_read\n");
  }
  iVar5 = FUN_144f429f0(param_1,local_a8,0x7f);
  if (iVar5 < 0) {
    FUN_144bd5aa0(1,"protocol list too long");
    goto LAB_1452f5b37;
  }
  iVar5 = FUN_144f429b0(param_1);
  if (0x7f < (ulonglong)(longlong)iVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_144e2bb84();
  }
  pcVar11 = local_a8;
  bVar3 = false;
  local_a8[iVar5] = '\0';
  if (local_a8[0] == '\0') {
LAB_1452f5a9d:
    lVar8 = FUN_144f438d0(param_1,0xc);
    if (lVar8 != 0) {
      FUN_144bd5aa0(4,"No protocol from \"%s\" supported\n",local_a8);
      goto LAB_1452f5b37;
    }
    uVar9 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x80) + 0x24c);
    *(ulonglong *)(param_1 + 0xa0) =
         uVar9 * 0x38 + *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x170);
  }
  else {
    do {
      if (bVar3) goto LAB_1452f5ae7;
      uVar9 = 0;
      bVar4 = false;
      do {
        cVar1 = *pcVar11;
        pcVar6 = pcVar11;
        if ((cVar1 == '\0') || (cVar1 == ',')) break;
        if ((bVar4) || (cVar1 != ' ')) {
          bVar4 = true;
          local_e8[uVar9] = cVar1;
          pcVar11 = pcVar11 + 1;
        }
        uVar9 = uVar9 + 1;
        pcVar6 = pcVar11;
      } while ((longlong)uVar9 < 0x3f);
      if (0x3f < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_144e2bb84();
      }
      lVar8 = *(longlong *)(param_1 + 0x80);
      pcVar11 = pcVar6 + 1;
      if (*pcVar6 == '\0') {
        pcVar11 = pcVar6;
      }
      local_e8[uVar9] = '\0';
      uVar9 = 0;
      lVar12 = 0;
      lVar8 = *(longlong *)(lVar8 + 0x170);
      if (*(longlong *)(lVar8 + 8) != 0) {
        lVar7 = 0;
        do {
          pcVar6 = *(char **)(lVar7 + lVar8);
          if (pcVar6 != (char *)0x0) {
            lVar7 = -(longlong)pcVar6;
            do {
              cVar1 = *pcVar6;
              cVar2 = pcVar6[(longlong)(local_e8 + lVar7)];
              if (cVar1 != cVar2) break;
              pcVar6 = pcVar6 + 1;
            } while (cVar2 != '\0');
            if (cVar1 == cVar2) {
              *(longlong *)(param_1 + 0xa0) = (longlong)(int)uVar9 * 0x38 + lVar8;
              bVar3 = true;
              break;
            }
          }
          lVar12 = lVar12 + 1;
          uVar9 = (ulonglong)((int)uVar9 + 1);
          lVar7 = lVar12 * 0x38;
        } while (*(longlong *)(lVar7 + 8 + lVar8) != 0);
      }
    } while (*pcVar11 != '\0');
    if (!bVar3) goto LAB_1452f5a9d;
  }
LAB_1452f5ae7:
  lVar8 = FUN_144f3cf20(200,"ws struct");
  *(longlong *)(param_1 + 0x60) = lVar8;
  if (lVar8 == 0) {
    pcVar11 = "OOM\n";
LAB_1452f5b08:
    uVar10 = 4;
  }
  else {
    iVar5 = FUN_144f429b0(param_1,0x21);
    if (iVar5 != 0) {
      pcVar11 = (char *)FUN_144f438d0(param_1,0x21);
      iVar5 = atoi(pcVar11);
      *(char *)(*(longlong *)(param_1 + 0x60) + 0xc1) = (char)iVar5;
    }
    iVar5 = FUN_144bd76e0(param_1);
    if (iVar5 != 0) {
      pcVar11 = "problem with user space\n";
      goto LAB_1452f5b08;
    }
    lVar8 = *(longlong *)(param_1 + 0xa0);
    uVar10 = FUN_144f438d0(param_1,0xc);
    local_f8 = 0;
    iVar5 = (**(code **)(lVar8 + 8))(param_1,0x14,*(undefined8 *)(param_1 + 0x130),uVar10);
    if (iVar5 == 0) {
      cVar1 = *(char *)(*(longlong *)(param_1 + 0x60) + 0xc1);
      if (cVar1 != '\r') {
        FUN_144bd5aa0(4,"Unknown client spec version %d\n",cVar1);
        *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xc1) = 0xd;
      }
      iVar5 = FUN_1452f55c0(*(undefined8 *)(param_1 + 0x78),param_1);
      if (iVar5 == 0) {
        FUN_144bd0a20(param_1,uVar9);
        uVar10 = 0x21000000;
        if ((*(byte *)(param_1 + 0x1b8) & 8) == 0) {
          uVar10 = 0x20000000;
        }
        FUN_144bd7670(param_1,uVar10,0x117,&PTR_DAT_14c6da110);
        FUN_144bd4c80(param_1);
        thunk_FUN_144f43630(param_1,1);
        goto LAB_1452f5b37;
      }
      pcVar11 = "hs0405 has failed the connection\n";
      goto LAB_1452f5b08;
    }
    pcVar11 = "User code denied connection\n";
    uVar10 = 2;
  }
  FUN_144bd5aa0(uVar10,pcVar11);
LAB_1452f5b37:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_118);
}



// FUNCTION 1452f5c90 FUN_1452f5c90 body=281 status=ok
// SIG undefined FUN_1452f5c90(void)

undefined8 FUN_1452f5c90(longlong param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  
  do {
    if (param_3 == 0) {
      return 0;
    }
    if (*(char *)(param_1 + 0x1ca) != '\0') {
      FUN_144bd8570(param_1,*param_2,0,param_3 & 0xffffffff);
      *param_2 = *param_2 + param_3;
      return 1;
    }
    bVar2 = false;
    if (*(char *)(param_1 + 0x1c4) == '\x14') {
      do {
        if ((2 < *(byte *)(*(longlong *)(param_1 + 0x60) + 0xba)) || (param_3 == 0)) {
          if (!bVar2) goto LAB_1452f5d45;
LAB_1452f5d36:
          iVar3 = FUN_144bd4e10(param_1,3);
          goto LAB_1452f5d5f;
        }
        lVar1 = *param_2;
        bVar2 = true;
        iVar3 = FUN_1452f5db0(param_1);
        param_3 = param_3 - (longlong)((int)*param_2 - (int)lVar1);
        if (iVar3 == 0) goto LAB_1452f5d36;
        if (iVar3 < 0) {
          return 0xffffffff;
        }
      } while (*(char *)(param_1 + 0x1c4) == '\x14');
      iVar3 = FUN_144bd4e10(param_1,3);
    }
    else {
LAB_1452f5d45:
      *param_2 = *param_2 + 1;
      iVar3 = FUN_144bd4e10(param_1,0);
      param_3 = param_3 - 1;
    }
LAB_1452f5d5f:
    if (iVar3 < 0) {
      return 0xffffffff;
    }
  } while( true );
}



// FUNCTION 1452f5db0 FUN_1452f5db0 body=592 status=ok
// SIG undefined FUN_1452f5db0(void)

uint FUN_1452f5db0(longlong param_1,longlong *param_2,ulonglong param_3)

{
  longlong *plVar1;
  uint *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  longlong lVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  undefined4 uVar12;
  longlong lVar13;
  byte local_res8 [8];
  
  pbVar4 = (byte *)*param_2;
  lVar13 = 0;
  uVar8 = 0;
  if (*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x18) == 0) {
    uVar10 = *(uint *)(*(longlong *)(param_1 + 0x78) + 0x4bc);
  }
  else {
    uVar10 = *(uint *)(*(longlong *)(param_1 + 0xa0) + 0x18);
  }
  lVar5 = *(longlong *)(param_1 + 0x60);
  if (*(ulonglong *)(lVar5 + 0xa8) < (ulonglong)uVar10) {
    uVar10 = *(uint *)(lVar5 + 0xa8);
  }
  if (param_3 < uVar10) {
    uVar10 = (uint)param_3;
  }
  if (uVar10 == 0) {
    return 0;
  }
  if ((*(byte *)(lVar5 + 0xc4) & 4) == 0) {
    uVar8 = (uint)*(byte *)(lVar5 + 0xb9);
    local_res8[0] = *(byte *)((ulonglong)(uVar8 & 3) + 0x95 + lVar5);
    local_res8[1] = *(byte *)((ulonglong)(uVar8 + 1 & 3) + 0x95 + lVar5);
    local_res8[2] = *(byte *)((ulonglong)(uVar8 - 2 & 3) + 0x95 + lVar5);
    local_res8[3] = *(byte *)((ulonglong)(uVar8 - 1 & 3) + 0x95 + lVar5);
    pbVar7 = pbVar4;
    for (uVar8 = uVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pbVar7 = *pbVar7 ^ local_res8[0];
      pbVar7[1] = pbVar7[1] ^ local_res8[1];
      pbVar7[2] = pbVar7[2] ^ local_res8[2];
      pbVar7[3] = pbVar7[3] ^ local_res8[3];
      pbVar7 = pbVar7 + 4;
    }
    uVar9 = uVar10 & 3;
    uVar8 = 0;
    if (uVar9 != 0) {
      do {
        pbVar3 = local_res8 + lVar13;
        lVar13 = lVar13 + 1;
        *pbVar7 = *pbVar7 ^ *pbVar3;
        pbVar7 = pbVar7 + 1;
        uVar8 = uVar9;
      } while (lVar13 < (longlong)(ulonglong)uVar9);
    }
    *(byte *)(*(longlong *)(param_1 + 0x60) + 0xb9) =
         *(char *)(*(longlong *)(param_1 + 0x60) + 0xb9) + (char)uVar10 & 3;
  }
  *param_2 = *param_2 + (ulonglong)uVar10;
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x60) + 0xa8);
  *plVar1 = *plVar1 - (ulonglong)uVar10;
  if (uVar10 == 0) {
    return 0;
  }
  FUN_144bd5a80(param_1);
  uVar9 = *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
  if (((uVar9 >> 10 & 1) == 0) || ((uVar9 >> 0xb & 1) != 0)) {
LAB_1452f5f9c:
    lVar13 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 8);
    if (((lVar13 == 0) || (*(int *)(param_1 + 0x74) != 0)) ||
       (iVar6 = FUN_144bd7680(lVar13,param_1,6,*(undefined8 *)(param_1 + 0x130),pbVar4,
                              (longlong)(int)uVar10), iVar6 == 0)) {
      puVar2 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar2 = *puVar2 & 0xffffbfff;
      return uVar10;
    }
  }
  else {
    iVar6 = FUN_144bd7ca0(*(longlong *)(param_1 + 0x60) + 0xbe,pbVar4,(longlong)(int)uVar10);
    if (iVar6 == 0) {
      lVar13 = *(longlong *)(param_1 + 0x60);
      if ((((*(longlong *)(lVar13 + 0xa8) != 0) || ((*(byte *)(lVar13 + 0xc4) & 1) == 0)) ||
          (*(char *)(lVar13 + 0xbe) == '\0')) || (uVar8 != 0)) goto LAB_1452f5f9c;
      uVar12 = 0xc;
      pcVar11 = "partial utf8";
    }
    else {
      uVar12 = 8;
      pcVar11 = "bad utf8";
    }
    FUN_144bd4be0(param_1,0x3ef,pcVar11,uVar12);
    FUN_144bd5ce0(8,pbVar4,(longlong)(int)uVar10);
  }
  return 0xffffffff;
}



// FUNCTION 1452f6000 FUN_1452f6000 body=492 status=ok
// SIG undefined FUN_1452f6000(void)

void FUN_1452f6000(longlong param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined4 local_d8 [4];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar1 = *(longlong *)(param_2 + 0x78);
  uVar6 = 6;
  while( true ) {
    if ((((*(byte *)((longlong)param_3 + 10) & 0xb) == 0) || ((*(byte *)(param_3 + 2) & 9) == 0)) ||
       ((*(int *)(*(longlong *)(param_2 + 0x80) + 0x208) != 0 &&
        ((*(int *)(lVar1 + 0x4c8) != 0 && (*(int *)(lVar1 + 0x4cc) == *(int *)(lVar1 + 0x4c8)))))))
    goto LAB_1452f61cc;
    local_d8[0] = 0x80;
    lVar3 = Ordinal_1((longlong)*param_3,local_c8,local_d8);
    if (lVar3 == -1) break;
    FUN_144f3c110(*(undefined8 *)(param_2 + 0x80),lVar3);
    local_e8 = 0;
    iVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x170) + 8))
                      (param_2,0x11,0,lVar3);
    if (iVar2 != 0) {
      Ordinal_3(lVar3);
      goto LAB_1452f61cc;
    }
    uVar7 = uVar6 | 1;
    local_e8 = 0;
    uVar6 = 2;
    if ((*(uint *)(*(longlong *)(param_2 + 0x80) + 0x22c) & 0x400000) == 0) {
      uVar6 = uVar7;
    }
    lVar4 = FUN_144f3eba0(*(longlong *)(param_2 + 0x80),uVar6,lVar3,0);
    if (lVar4 == 0) goto LAB_1452f61cc;
    iVar2 = FUN_144f42270(lVar4,lVar3);
    if (iVar2 != 0) {
      thunk_FUN_144bd6da0(lVar4,0,"listen svc fail");
      goto LAB_1452f61cc;
    }
    if (((*(int *)(lVar1 + 0x4b4) - 1U <= *(uint *)(param_1 + 0x9c)) ||
        (*(int *)(param_2 + 0x1a0) == -1)) ||
       (iVar2 = FUN_144f3c5c0((longlong)*(int *)(param_2 + 0x1a0) * 0x10 +
                              *(longlong *)(param_1 + 0x48)), iVar2 < 1)) goto LAB_1452f61cc;
  }
  iVar2 = Ordinal_111();
  if ((iVar2 != 0x2733) && (iVar2 = Ordinal_111(), iVar2 != 0x2733)) {
    iVar2 = Ordinal_111();
    pcVar5 = strerror(iVar2);
    FUN_144bd5aa0(1,"ERROR on accept: %s\n",pcVar5);
  }
LAB_1452f61cc:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
}



// FUNCTION 1452f6210 FUN_1452f6210 body=1059 status=ok
// SIG undefined FUN_1452f6210(void)

undefined4
FUN_1452f6210(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             longlong param_5,undefined4 param_6,longlong param_7,undefined8 param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  char *pcVar5;
  longlong local_38;
  undefined4 local_30 [2];
  undefined8 local_28 [2];
  
  local_38 = 0;
  iVar1 = FUN_144f41ed0(param_1,param_3,param_4);
  if (iVar1 == 0) {
    if (param_5 == 0) {
      return 0;
    }
    if (param_7 == 0) {
      return 0;
    }
  }
  else if (iVar1 != 2) {
    iVar1 = FUN_1454d6d40(*(undefined8 *)(param_1 + 0x1b0),param_3);
    if (iVar1 != 1) {
      uVar2 = FUN_144ba2630();
      uVar3 = FUN_144ba27b0(uVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x148) + 0xa8));
      FUN_144bd5aa0(1,"problem getting cert \'%s\' %lu: %s\n",param_3,uVar2,uVar3);
      return 1;
    }
    if (param_4 == 0) {
      iVar1 = (**(code **)(*(longlong *)(param_1 + 0x170) + 8))
                        (param_2,0x25,*(undefined8 *)(param_1 + 0x1b0),0,0);
      if (iVar1 != 0) {
        FUN_144bd5aa0(1,"ssl private key not set\n");
        return 1;
      }
    }
    else {
      iVar1 = FUN_1454d6ae0(*(undefined8 *)(param_1 + 0x1b0),param_4,1);
      if (iVar1 != 1) {
        uVar2 = FUN_144ba2630();
        uVar3 = FUN_144ba27b0(uVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x148) + 0xa8));
        FUN_144bd5aa0(1,"ssl problem getting key \'%s\' %lu: %s\n",param_4,uVar2,uVar3);
        return 1;
      }
    }
    goto LAB_1452f6445;
  }
  if ((param_5 == 0) || (param_7 == 0)) {
    return 1;
  }
  iVar1 = FUN_1454d6f10(*(undefined8 *)(param_1 + 0x1b0),param_6);
  if (iVar1 != 1) {
    FUN_144bd5aa0(1,"Problem loading update cert\n");
    return 1;
  }
  iVar1 = FUN_144f41f80(*(undefined8 *)(param_1 + 0x148),0,param_7,param_8,local_28,local_30);
  if (iVar1 != 0) {
    FUN_144bd5aa0(4,"unable to convert memory privkey\n");
    return 1;
  }
  iVar1 = FUN_1454d6dd0(6,*(undefined8 *)(param_1 + 0x1b0),local_28[0],local_30[0]);
  if (iVar1 != 1) {
    FUN_144bd5aa0(4,"unable to use memory privkey\n");
    return 1;
  }
LAB_1452f6445:
  iVar1 = FUN_144b98d10(*(undefined8 *)(param_1 + 0x1b0));
  if (iVar1 == 0) {
    FUN_144bd5aa0(1,"Private SSL key doesn\'t match cert\n");
    return 1;
  }
  pcVar5 = "prime256v1";
  if (*(char *)(param_1 + 0x1e0) != '\0') {
    pcVar5 = (char *)(param_1 + 0x1e0);
  }
  iVar1 = FUN_144ea96a0(pcVar5);
  if (iVar1 == 0) {
    FUN_144bd5aa0(1,"SSL: Unknown curve name \'%s\'",pcVar5);
    return 1;
  }
  lVar4 = FUN_144ed2de0(iVar1);
  if (lVar4 == 0) {
    FUN_144bd5aa0(1,"SSL: Unable to create curve \'%s\'",pcVar5);
    return 1;
  }
  FUN_144b99c10(*(undefined8 *)(param_1 + 0x1b0),4,0,lVar4);
  FUN_144ed2e50(lVar4);
  FUN_144b979e0(*(undefined8 *)(param_1 + 0x1b0),0);
  FUN_144bd5aa0(4," SSL ECDH curve \'%s\'\n",pcVar5);
  if ((*(uint *)(*(longlong *)(param_1 + 0x148) + 0x4b0) & 0x1200) == 0x1200) {
    FUN_144bd5aa0(4," Using ECDH certificate support\n");
  }
  FUN_144b99c10(*(undefined8 *)(param_1 + 0x1b0),0x52,1,&local_38);
  if ((local_38 != 0) && (lVar4 = FUN_144babc00(local_38,0), lVar4 != 0)) {
    lVar4 = FUN_144bb4f90(lVar4);
    if (lVar4 == 0) {
      FUN_144bd5aa0(1,"%s: pkey is NULL\n","lws_tls_server_certs_load");
      return 1;
    }
    uVar2 = FUN_144ba6750(lVar4);
    iVar1 = FUN_144ba6700(uVar2);
    if (iVar1 != 0x198) {
      FUN_144bd5aa0(4,"Key type is not EC\n");
      return 0;
    }
    lVar4 = FUN_144ba6d50(lVar4);
    if (lVar4 == 0) {
      FUN_144bd5aa0(1,"%s: ECDH key is NULL \n","lws_tls_server_certs_load");
      return 1;
    }
    FUN_144b99c10(*(undefined8 *)(param_1 + 0x1b0),4,0,lVar4);
    FUN_144ed2e50(lVar4);
  }
  *(uint *)(param_1 + 0x214) = *(uint *)(param_1 + 0x214) & 0xfffffffd;
  return 0;
}



// FUNCTION 1452f6640 FUN_1452f6640 body=103 status=ok
// SIG undefined FUN_1452f6640(void)

undefined8 FUN_1452f6640(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x22c);
  if ((uVar1 & 0x1002) == 0x1002) {
    FUN_144b98d90(*(undefined8 *)(param_1 + 0x1b0),*(undefined8 *)(param_1 + 0x148),8);
    FUN_144b98ce0(*(undefined8 *)(param_1 + 0x1b0),~(uVar1 >> 6) & 2 | 1,FUN_1452f6b70);
  }
  return 0;
}



// FUNCTION 1452f66b0 FUN_1452f66b0 body=555 status=ok
// SIG undefined FUN_1452f66b0(void)

undefined8 FUN_1452f66b0(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_144b9e520();
  if (lVar3 == 0) {
    uVar1 = FUN_144ba2630();
    uVar4 = FUN_144ba27b0(uVar1,*(undefined8 *)(*(longlong *)(param_2 + 0x148) + 0xa8));
    FUN_144bd5aa0(1,"problem creating ssl method %lu: %s\n",uVar1,uVar4);
    return 1;
  }
  lVar3 = FUN_144b97f50(lVar3);
  *(longlong *)(param_2 + 0x1b0) = lVar3;
  if (lVar3 == 0) {
    uVar1 = FUN_144ba2630();
    uVar4 = FUN_144ba27b0(uVar1,*(undefined8 *)(*(longlong *)(param_2 + 0x148) + 0xa8));
    FUN_144bd5aa0(1,"problem creating ssl context %lu: %s\n",uVar1,uVar4);
    return 1;
  }
  FUN_144b9aae0(lVar3,DAT_14c797a10,*(undefined8 *)(param_2 + 0x148));
  FUN_144b979e0(*(undefined8 *)(param_2 + 0x1b0),0x2000000);
  FUN_144b979e0(*(undefined8 *)(param_2 + 0x1b0),0x20000);
  FUN_144b979e0(*(undefined8 *)(param_2 + 0x1b0),0);
  FUN_144b979e0(*(undefined8 *)(param_2 + 0x1b0),0x400000);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_144b97ed0(*(undefined8 *)(param_2 + 0x1b0));
  }
  FUN_144b9a010(*(undefined8 *)(param_2 + 0x1b0),0x35,FUN_1452f6c40);
  FUN_144b99c10(*(undefined8 *)(param_2 + 0x1b0),0x36,0,*(undefined8 *)(param_2 + 0x148));
  if (*(longlong *)(param_1 + 0x40) != 0) {
    iVar2 = FUN_144b9a8d0(*(undefined8 *)(param_2 + 0x1b0),*(longlong *)(param_1 + 0x40),0);
    if (iVar2 == 0) {
      FUN_144bd5aa0(1,"%s: SSL_CTX_load_verify_locations unhappy\n",
                    "lws_tls_server_vhost_backend_init");
    }
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    FUN_144b979e0(*(undefined8 *)(param_2 + 0x1b0));
  }
  if (*(int *)(param_1 + 0xe4) != 0) {
    FUN_144b979c0(*(undefined8 *)(param_2 + 0x1b0));
  }
  if ((*(int *)(param_2 + 0x208) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    FUN_144f41430(*(undefined8 *)(param_2 + 0x1b0),param_1);
    uVar4 = FUN_1452f6210(param_2,param_3,*(undefined8 *)(param_1 + 0x30),
                          *(undefined8 *)(param_1 + 0x38),0,0,0,0);
    return uVar4;
  }
  return 0;
}



// FUNCTION 1452f68e0 FUN_1452f68e0 body=334 status=ok
// SIG undefined FUN_1452f68e0(void)

undefined8 FUN_1452f68e0(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  longlong lVar3;
  
  piVar2 = _errno();
  *piVar2 = 0;
  lVar3 = FUN_144b98df0(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x1b0));
  *(longlong *)(param_1 + 0x150) = lVar3;
  if (lVar3 == 0) {
    piVar2 = _errno();
    uVar1 = FUN_144f41850(param_1,0);
    FUN_144bd5aa0(1,"SSL_new failed: %d (errno %d)\n",uVar1,*piVar2);
    FUN_144f413d0();
    return 1;
  }
  FUN_144b9aaa0(lVar3,DAT_14c783a54,param_1);
  FUN_144b98880(*(undefined8 *)(param_1 + 0x150),param_2);
  FUN_144b99870(*(undefined8 *)(param_1 + 0x150),0x21,2);
  lVar3 = FUN_144b98ab0(*(undefined8 *)(param_1 + 0x150));
  if (lVar3 == 0) {
    FUN_144bd5aa0(4,"NULL rbio\n");
  }
  else {
    FUN_144b9efc0(lVar3,0x66,1);
  }
  lVar3 = FUN_144b98ac0(*(undefined8 *)(param_1 + 0x150));
  if (lVar3 == 0) {
    FUN_144bd5aa0(4,"NULL rbio\n");
  }
  else {
    FUN_144b9efc0(lVar3,0x66,1);
  }
  if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x210) != 0) {
    FUN_144b9aa30(*(undefined8 *)(param_1 + 0x150),FUN_144f41460);
  }
  return 0;
}



// FUNCTION 1452f6a30 FUN_1452f6a30 body=255 status=ok
// SIG undefined FUN_1452f6a30(void)

void FUN_1452f6a30(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined1 local_64 [76];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = FUN_144b99750(*(undefined8 *)(param_1 + 0x150));
  if (iVar1 == 1) {
    iVar1 = FUN_144f40e70(param_1,2,local_68,0x40);
    if (iVar1 == 0) {
      FUN_144bd5aa0(4,"%s: client cert CN \'%s\'\n","lws_tls_server_accept",local_64);
    }
  }
  else {
    iVar1 = FUN_144f41850(param_1,iVar1);
    if ((iVar1 - 1U & 0xfffffffb) != 0) {
      if ((iVar1 == 2) || (iVar2 = FUN_144b985a0(*(undefined8 *)(param_1 + 0x150)), iVar2 == 3)) {
        thunk_FUN_144bd0b20(param_1,0,9);
      }
      else if ((iVar1 == 3) || (iVar1 = FUN_144b985a0(*(undefined8 *)(param_1 + 0x150)), iVar1 == 2)
              ) {
        thunk_FUN_144bd0b20(param_1,0,2);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_88);
}



// FUNCTION 1452f6b40 FUN_1452f6b40 body=41 status=ok
// SIG undefined FUN_1452f6b40(void)

undefined8 FUN_1452f6b40(longlong param_1)

{
  FUN_144b9a5b0(*(undefined8 *)(param_1 + 0x150));
  FUN_144b993a0(*(undefined8 *)(param_1 + 0x150));
  return 0;
}



// FUNCTION 1452f6b70 FUN_1452f6b70 body=176 status=ok
// SIG undefined FUN_1452f6b70(void)

void FUN_1452f6b70(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined1 local_78 [80];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = FUN_144bafb80(param_2);
  uVar1 = FUN_144b9cf00();
  uVar3 = FUN_144bafb30(param_2,uVar1);
  lVar4 = FUN_144b9aac0(uVar3,DAT_14c783a54);
  FUN_144f41530(uVar2,2,local_78);
  local_88 = (longlong)param_1;
  (**(code **)(*(longlong *)(*(longlong *)(lVar4 + 0x80) + 0x170) + 8))(lVar4,0x17,param_2,uVar3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
}



// FUNCTION 1452f6c40 FUN_1452f6c40 body=178 status=ok
// SIG undefined FUN_1452f6c40(void)

undefined4 FUN_1452f6c40(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    return 3;
  }
  lVar2 = *(longlong *)(param_3 + 0x378);
  if (lVar2 == 0) {
    return 0;
  }
  while (((*(byte *)(lVar2 + 0x248) & 2) != 0 ||
         (lVar1 = FUN_144b9a8f0(param_1), *(longlong *)(lVar2 + 0x1b0) != lVar1))) {
    lVar2 = *(longlong *)(lVar2 + 0x150);
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar1 = FUN_144b97dd0(param_1,0);
  if (lVar1 == 0) {
    return 0;
  }
  lVar2 = FUN_144f3fe00(param_3,*(undefined4 *)(lVar2 + 0x228),lVar1);
  if (lVar2 == 0) {
    return 0;
  }
  FUN_144b9a900(param_1,*(undefined8 *)(lVar2 + 0x1b0));
  return 0;
}



// FUNCTION 1452f6d00 FUN_1452f6d00 body=582 status=ok
// SIG undefined FUN_1452f6d00(void)

void FUN_1452f6d00(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 auStack_d8 [32];
  char local_b8 [128];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  pcVar6 = *(char **)(*(longlong *)(param_1 + 0x78) + 0x3f8);
  iVar1 = FUN_144f429f0(param_1,local_b8,0x80);
  if (iVar1 < 1) {
    FUN_144bd5aa0(1,"%s: Unable to get hostname\n","lws_ssl_client_bio_create");
  }
  else {
    pcVar3 = local_b8;
    while (local_b8[0] != '\0') {
      if (*pcVar3 == ':') {
        *pcVar3 = '\0';
        break;
      }
      pcVar3 = pcVar3 + 1;
      local_b8[0] = *pcVar3;
    }
    lVar4 = FUN_144b98df0(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x1b8));
    *(longlong *)(param_1 + 0x150) = lVar4;
    if (lVar4 == 0) {
      uVar2 = FUN_144f41850(param_1,0);
      uVar5 = FUN_144ba27b0(uVar2,0);
      FUN_144bd5aa0(1,"SSL_new failed: %s\n",uVar5);
      FUN_144f413d0();
    }
    else {
      if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x210) != 0) {
        FUN_144b9aa30(lVar4,FUN_144f41460);
      }
      if ((*(byte *)(param_1 + 0x170) & 4) == 0) {
        uVar5 = FUN_144b99390(*(undefined8 *)(param_1 + 0x150));
        FUN_144eab380(uVar5,4);
        FUN_144eab360(uVar5,local_b8,0);
      }
      FUN_144b98b80(*(undefined8 *)(param_1 + 0x150),1,FUN_1452f7400);
      FUN_144b99870(*(undefined8 *)(param_1 + 0x150),0x21,2);
      FUN_144b99870(*(undefined8 *)(param_1 + 0x150),0x37,0,local_b8);
      uVar5 = FUN_144ea7a20(*(undefined4 *)(param_1 + 0x178),0);
      *(undefined8 *)(param_1 + 0x158) = uVar5;
      FUN_144b98980(*(undefined8 *)(param_1 + 0x150),uVar5,uVar5);
      FUN_144b9efc0(*(undefined8 *)(param_1 + 0x158),0x66,1);
      pcVar3 = *(char **)(*(longlong *)(param_1 + 0x80) + 0x1c0);
      if (pcVar3 != (char *)0x0) {
        pcVar6 = pcVar3;
      }
      iVar1 = FUN_144f429f0(param_1,local_b8,0x80);
      pcVar3 = local_b8;
      if (iVar1 < 1) {
        pcVar3 = pcVar6;
      }
      uVar2 = FUN_144f42190(pcVar3,local_38,0x27);
      FUN_144b97c20(*(undefined8 *)(param_1 + 0x150),local_38,uVar2);
      FUN_144b9aaa0(*(undefined8 *)(param_1 + 0x150),DAT_14c783a54,param_1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_d8);
}



// FUNCTION 1452f6f60 FUN_1452f6f60 body=256 status=ok
// SIG undefined FUN_1452f6f60(void)

void FUN_1452f6f60(longlong param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  uint local_48 [2];
  void *local_40;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = FUN_144b99780(*(undefined8 *)(param_1 + 0x150));
  if (iVar1 == 1) {
    FUN_144b97d80(*(undefined8 *)(param_1 + 0x150),&local_40,local_48);
    if (0x1f < local_48[0]) {
      local_48[0] = 0x1f;
    }
    uVar3 = (ulonglong)local_48[0];
    memcpy(local_38,local_40,(ulonglong)local_48[0]);
    if (0x1f < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_144e2bb84();
    }
    local_38[uVar3] = 0;
    FUN_144bd2750(param_1,local_38);
  }
  else {
    iVar1 = FUN_144f41850(param_1,iVar1);
    if ((((iVar1 != 5) && (iVar1 != 2)) &&
        (iVar2 = FUN_144b985a0(*(undefined8 *)(param_1 + 0x150)), iVar2 != 3)) && (iVar1 != 3)) {
      FUN_144b985a0(*(undefined8 *)(param_1 + 0x150));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
}



// FUNCTION 1452f7080 FUN_1452f7080 body=193 status=ok
// SIG undefined FUN_1452f7080(void)

undefined8 FUN_1452f7080(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)
           (((longlong)*(char *)(param_1 + 0x1c7) + 1) * 0xa8 + *(longlong *)(param_1 + 0x78));
  iVar1 = FUN_144b9aa40(*(undefined8 *)(param_1 + 0x150));
  if ((((iVar1 == 0) || ((iVar1 - 0x12U < 2 && ((*(byte *)(param_1 + 0x170) & 2) != 0)))) ||
      ((iVar1 - 9U < 2 && ((*(byte *)(param_1 + 0x170) & 8) != 0)))) || (iVar1 == 9)) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_144ba27b0(iVar1,uVar2);
    FUN_144bd6620(param_2,(longlong)param_3,
                  "server\'s cert didn\'t look good, X509_V_ERR = %d: %s\n",iVar1,uVar2);
    FUN_144f413d0();
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 1452f7150 FUN_1452f7150 body=681 status=ok
// SIG undefined FUN_1452f7150(void)

undefined8
FUN_1452f7150(longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
             longlong param_6)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_144b9e530();
  if (lVar3 == 0) {
    uVar1 = FUN_144ba2630();
    uVar4 = FUN_144ba27b0(uVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x148) + 0xa8));
    FUN_144bd5aa0(1,"problem creating ssl method %lu: %s\n",uVar1,uVar4);
    return 1;
  }
  lVar3 = FUN_144b97f50(lVar3);
  *(longlong *)(param_1 + 0x1b8) = lVar3;
  if (lVar3 == 0) {
    uVar1 = FUN_144ba2630();
    uVar4 = FUN_144ba27b0(uVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x148) + 0xa8));
    FUN_144bd5aa0(1,"problem creating ssl context %lu: %s\n",uVar1,uVar4);
    return 1;
  }
  FUN_144b979e0(lVar3,0x20000);
  FUN_144b979e0(*(undefined8 *)(param_1 + 0x1b8),0x400000);
  if (param_3 != 0) {
    FUN_144b97ed0(*(undefined8 *)(param_1 + 0x1b8),param_3);
  }
  if ((*(byte *)(param_1 + 0x22c) & 0x40) == 0) {
    FUN_144b9a8b0(*(undefined8 *)(param_1 + 0x1b8));
  }
  if (param_4 == 0) {
    iVar2 = FUN_144b9a8d0(*(undefined8 *)(param_1 + 0x1b8),0,"../share");
    if (iVar2 == 0) {
      FUN_144bd5aa0(1,
                    "Unable to load SSL Client certs from %s (set by LWS_OPENSSL_CLIENT_CERTS) -- client ssl isn\'t going to work\n"
                    ,"../share");
    }
  }
  else {
    iVar2 = FUN_144b9a8d0(*(undefined8 *)(param_1 + 0x1b8),param_4,0);
    if (iVar2 == 0) {
      FUN_144bd5aa0(1,
                    "Unable to load SSL Client certs file from %s -- client ssl isn\'t going to work\n"
                    ,param_4);
      FUN_144f413d0();
    }
  }
  if (param_5 != 0) {
    iVar2 = FUN_144f419f0(param_5);
    if ((iVar2 != 1) && ((*(uint *)(param_2 + 100) & 0x4000000) != 0)) {
      return 0;
    }
    FUN_144bd5aa0(4,"%s: doing cert filepath %s\n","lws_tls_client_create_vhost_context",param_5);
    iVar2 = FUN_1454d6d40(*(undefined8 *)(param_1 + 0x1b8),param_5);
    if (iVar2 < 1) {
      FUN_144bd5aa0(1,"problem %d getting cert \'%s\'\n",iVar2,param_5);
      FUN_144f413d0();
      return 1;
    }
    FUN_144bd5aa0(4,"Loaded client cert %s\n",param_5);
  }
  if (param_6 != 0) {
    FUN_144bd5aa0(4,"%s: doing private key filepath\n","lws_tls_client_create_vhost_context");
    FUN_144f41430(*(undefined8 *)(param_1 + 0x1b8),param_2);
    iVar2 = FUN_1454d6ae0(*(undefined8 *)(param_1 + 0x1b8),param_6,1);
    if (iVar2 != 1) {
      FUN_144bd5aa0(1,"use_PrivateKey_file \'%s\'\n",param_6);
      FUN_144f413d0();
      return 1;
    }
    FUN_144bd5aa0(4,"Loaded client cert private key %s\n",param_6);
    iVar2 = FUN_144b98d10(*(undefined8 *)(param_1 + 0x1b8));
    if (iVar2 == 0) {
      FUN_144bd5aa0(1,"Private SSL key doesn\'t match cert\n");
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1452f7400 FUN_1452f7400 body=409 status=ok
// SIG undefined FUN_1452f7400(void)

bool FUN_1452f7400(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  char *pcVar7;
  longlong lVar8;
  
  lVar8 = (longlong)param_1;
  if (param_1 != 0) {
LAB_1452f74e4:
    uVar2 = FUN_144b9cf00();
    uVar5 = FUN_144bafb30(param_2,uVar2);
    lVar6 = FUN_144b9aac0(uVar5,DAT_14c783a54);
    iVar1 = (**(code **)(*(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x78) + 0x378) + 0x170) +
                        8))(lVar6,0x3a,param_2,uVar5,lVar8);
    uVar2 = (undefined4)((ulonglong)lVar8 >> 0x20);
    if (param_1 == 0) {
      iVar3 = FUN_144bafb50(param_2);
      if (iVar3 != 0) {
        uVar4 = FUN_144bafb70(param_2);
        uVar5 = FUN_144ec8b50(iVar3);
        FUN_144bd5aa0(1,"SSL error: %s (preverify_ok=%d;err=%d;depth=%d)\n",uVar5,0,
                      CONCAT44(uVar2,iVar3),uVar4);
        return false;
      }
    }
    return iVar1 == 0;
  }
  iVar1 = FUN_144bafb50(param_2);
  if (iVar1 == 0) goto LAB_1452f74e4;
  uVar2 = FUN_144b9cf00();
  uVar5 = FUN_144bafb30(param_2,uVar2);
  lVar6 = FUN_144b9aac0(uVar5,DAT_14c783a54);
  if ((iVar1 - 0x12U < 2) && ((*(byte *)(lVar6 + 0x170) & 2) != 0)) {
    FUN_144bd5aa0(4,"accepting self-signed certificate (verify_callback)\n");
    FUN_144bafb60(param_2,0);
    return true;
  }
  if ((1 < iVar1 - 9U) || ((*(byte *)(lVar6 + 0x170) & 8) == 0)) goto LAB_1452f74e4;
  if (iVar1 == 9) {
    pcVar7 = "accepting not yet valid certificate (verify_callback)\n";
  }
  else {
    if (iVar1 != 10) goto LAB_1452f74c5;
    pcVar7 = "accepting expired certificate (verify_callback)\n";
  }
  FUN_144bd5aa0(4,pcVar7);
LAB_1452f74c5:
  FUN_144bafb60(param_2,0);
  return true;
}



// FUNCTION 1452f75a0 FUN_1452f75a0 body=271 status=ok
// SIG undefined FUN_1452f75a0(void)

void FUN_1452f75a0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  memset(&local_98,0,0x68);
  local_98 = 0x67452301;
  local_94 = 0xefcdab89;
  local_90 = 0x98badcfe;
  local_8c = 0x10325476;
  local_88 = 0xc3d2e1f0;
  FUN_1452f7f30(&local_98,param_1,param_2);
  FUN_1452f7d50(&local_98);
  *param_3 = local_98._3_1_;
  param_3[1] = local_98._2_1_;
  param_3[2] = local_98._1_1_;
  param_3[3] = (undefined1)local_98;
  param_3[4] = local_94._3_1_;
  param_3[5] = local_94._2_1_;
  param_3[6] = local_94._1_1_;
  param_3[0xd] = local_8c._2_1_;
  param_3[7] = (undefined1)local_94;
  param_3[0xe] = local_8c._1_1_;
  param_3[8] = local_90._3_1_;
  param_3[0xf] = (undefined1)local_8c;
  param_3[9] = local_90._2_1_;
  param_3[0x10] = local_88._3_1_;
  param_3[10] = local_90._1_1_;
  param_3[0x11] = local_88._2_1_;
  param_3[0xb] = (undefined1)local_90;
  param_3[0x12] = local_88._1_1_;
  param_3[0xc] = local_8c._3_1_;
  param_3[0x13] = (undefined1)local_88;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
}



// FUNCTION 1452f76d0 FUN_1452f76d0 body=1650 status=ok
// SIG undefined FUN_1452f76d0(void)

void FUN_1452f76d0(uint *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  ulonglong uVar32;
  uint uVar33;
  ulonglong uVar34;
  
  uVar31 = param_1[8];
  uVar1 = *(undefined1 *)((longlong)param_1 + 0x21);
  uVar27 = param_1[9];
  uVar2 = *(undefined1 *)((longlong)param_1 + 0x25);
  uVar26 = param_1[10];
  uVar3 = *(undefined1 *)((longlong)param_1 + 0x29);
  uVar33 = param_1[0xb];
  uVar4 = *(undefined1 *)((longlong)param_1 + 0x2d);
  uVar29 = param_1[0xc];
  uVar5 = *(undefined1 *)((longlong)param_1 + 0x31);
  uVar28 = param_1[0xd];
  uVar6 = *(undefined1 *)((longlong)param_1 + 0x35);
  uVar30 = param_1[0xe];
  uVar7 = *(undefined1 *)((longlong)param_1 + 0x39);
  uVar17 = param_1[0xf];
  uVar8 = *(undefined1 *)((longlong)param_1 + 0x3d);
  uVar18 = param_1[0x10];
  uVar9 = *(undefined1 *)((longlong)param_1 + 0x41);
  uVar19 = param_1[0x11];
  uVar10 = *(undefined1 *)((longlong)param_1 + 0x45);
  uVar20 = param_1[0x12];
  uVar11 = *(undefined1 *)((longlong)param_1 + 0x49);
  uVar21 = param_1[0x13];
  uVar12 = *(undefined1 *)((longlong)param_1 + 0x4d);
  uVar22 = param_1[0x14];
  uVar13 = *(undefined1 *)((longlong)param_1 + 0x51);
  uVar23 = param_1[0x15];
  uVar14 = *(undefined1 *)((longlong)param_1 + 0x55);
  uVar24 = param_1[0x16];
  uVar15 = *(undefined1 *)((longlong)param_1 + 0x59);
  uVar25 = param_1[0x17];
  uVar16 = *(undefined1 *)((longlong)param_1 + 0x5d);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)((longlong)param_1 + 0x23);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_1 + 0x22);
  *(undefined1 *)((longlong)param_1 + 0x22) = uVar1;
  *(char *)((longlong)param_1 + 0x23) = (char)uVar31;
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)((longlong)param_1 + 0x27);
  *(undefined1 *)((longlong)param_1 + 0x25) = *(undefined1 *)((longlong)param_1 + 0x26);
  *(undefined1 *)((longlong)param_1 + 0x26) = uVar2;
  *(char *)((longlong)param_1 + 0x27) = (char)uVar27;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)((longlong)param_1 + 0x2b);
  *(undefined1 *)((longlong)param_1 + 0x29) = *(undefined1 *)((longlong)param_1 + 0x2a);
  *(undefined1 *)((longlong)param_1 + 0x2a) = uVar3;
  *(char *)((longlong)param_1 + 0x2b) = (char)uVar26;
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)((longlong)param_1 + 0x2f);
  *(undefined1 *)((longlong)param_1 + 0x2d) = *(undefined1 *)((longlong)param_1 + 0x2e);
  *(undefined1 *)((longlong)param_1 + 0x2e) = uVar4;
  *(char *)((longlong)param_1 + 0x2f) = (char)uVar33;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)((longlong)param_1 + 0x33);
  *(undefined1 *)((longlong)param_1 + 0x31) = *(undefined1 *)((longlong)param_1 + 0x32);
  *(undefined1 *)((longlong)param_1 + 0x32) = uVar5;
  *(char *)((longlong)param_1 + 0x33) = (char)uVar29;
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)((longlong)param_1 + 0x37);
  *(undefined1 *)((longlong)param_1 + 0x35) = *(undefined1 *)((longlong)param_1 + 0x36);
  *(undefined1 *)((longlong)param_1 + 0x36) = uVar6;
  *(char *)((longlong)param_1 + 0x37) = (char)uVar28;
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)((longlong)param_1 + 0x3b);
  *(undefined1 *)((longlong)param_1 + 0x39) = *(undefined1 *)((longlong)param_1 + 0x3a);
  *(undefined1 *)((longlong)param_1 + 0x3a) = uVar7;
  *(char *)((longlong)param_1 + 0x3b) = (char)uVar30;
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)((longlong)param_1 + 0x3f);
  *(undefined1 *)((longlong)param_1 + 0x3d) = *(undefined1 *)((longlong)param_1 + 0x3e);
  *(undefined1 *)((longlong)param_1 + 0x3e) = uVar8;
  *(char *)((longlong)param_1 + 0x3f) = (char)uVar17;
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)((longlong)param_1 + 0x43);
  *(undefined1 *)((longlong)param_1 + 0x41) = *(undefined1 *)((longlong)param_1 + 0x42);
  *(undefined1 *)((longlong)param_1 + 0x42) = uVar9;
  *(char *)((longlong)param_1 + 0x43) = (char)uVar18;
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)((longlong)param_1 + 0x47);
  *(undefined1 *)((longlong)param_1 + 0x45) = *(undefined1 *)((longlong)param_1 + 0x46);
  *(undefined1 *)((longlong)param_1 + 0x46) = uVar10;
  *(char *)((longlong)param_1 + 0x47) = (char)uVar19;
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)((longlong)param_1 + 0x4b);
  *(undefined1 *)((longlong)param_1 + 0x49) = *(undefined1 *)((longlong)param_1 + 0x4a);
  *(undefined1 *)((longlong)param_1 + 0x4a) = uVar11;
  *(char *)((longlong)param_1 + 0x4b) = (char)uVar20;
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)((longlong)param_1 + 0x4f);
  *(undefined1 *)((longlong)param_1 + 0x4d) = *(undefined1 *)((longlong)param_1 + 0x4e);
  *(undefined1 *)((longlong)param_1 + 0x4e) = uVar12;
  *(char *)((longlong)param_1 + 0x4f) = (char)uVar21;
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)((longlong)param_1 + 0x53);
  *(undefined1 *)((longlong)param_1 + 0x51) = *(undefined1 *)((longlong)param_1 + 0x52);
  *(undefined1 *)((longlong)param_1 + 0x52) = uVar13;
  *(char *)((longlong)param_1 + 0x53) = (char)uVar22;
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)((longlong)param_1 + 0x57);
  *(undefined1 *)((longlong)param_1 + 0x55) = *(undefined1 *)((longlong)param_1 + 0x56);
  *(undefined1 *)((longlong)param_1 + 0x56) = uVar14;
  *(char *)((longlong)param_1 + 0x57) = (char)uVar23;
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)((longlong)param_1 + 0x5b);
  *(undefined1 *)((longlong)param_1 + 0x59) = *(undefined1 *)((longlong)param_1 + 0x5a);
  *(undefined1 *)((longlong)param_1 + 0x5a) = uVar15;
  *(char *)((longlong)param_1 + 0x5b) = (char)uVar24;
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)((longlong)param_1 + 0x5f);
  *(undefined1 *)((longlong)param_1 + 0x5d) = *(undefined1 *)((longlong)param_1 + 0x5e);
  *(undefined1 *)((longlong)param_1 + 0x5e) = uVar16;
  *(char *)((longlong)param_1 + 0x5f) = (char)uVar25;
  uVar34 = 0;
  uVar31 = *param_1;
  uVar27 = param_1[1];
  uVar26 = param_1[2];
  uVar33 = param_1[3];
  uVar29 = param_1[4];
  do {
    uVar30 = uVar33;
    uVar33 = uVar26;
    uVar28 = uVar31;
    uVar31 = (uint)uVar34 & 0xf;
    if (0xf < uVar34) {
      uVar26 = param_1[(ulonglong)(uVar31 - 8 & 0xf) + 8] ^
               param_1[(ulonglong)(uVar31 - 3 & 0xf) + 8] ^
               param_1[(ulonglong)(uVar31 + 2 & 0xf) + 8] ^ param_1[(ulonglong)uVar31 + 8];
      param_1[(ulonglong)uVar31 + 8] = uVar26 << 1 | (uint)((int)uVar26 < 0);
    }
    uVar32 = uVar34 + 1;
    uVar31 = (uVar28 << 5 | uVar28 >> 0x1b) + (~uVar27 & uVar30 | uVar33 & uVar27) +
             (&DAT_149d35408)[uVar34 / 0x14] + param_1[(ulonglong)uVar31 + 8] + uVar29;
    uVar26 = uVar27 >> 2 | uVar27 << 0x1e;
    uVar34 = uVar32;
    uVar27 = uVar28;
    uVar29 = uVar30;
  } while (uVar32 < 0x14);
  uVar34 = 0x14;
  do {
    uVar27 = uVar31;
    uVar29 = uVar33;
    uVar33 = uVar26;
    uVar31 = (uint)uVar34 & 0xf;
    uVar26 = param_1[(ulonglong)(uVar31 - 8 & 0xf) + 8] ^ param_1[(ulonglong)(uVar31 - 3 & 0xf) + 8]
             ^ param_1[(ulonglong)(uVar31 + 2 & 0xf) + 8] ^ param_1[(ulonglong)uVar31 + 8];
    uVar26 = uVar26 << 1 | (uint)((int)uVar26 < 0);
    uVar32 = uVar34 / 0x14;
    param_1[(ulonglong)uVar31 + 8] = uVar26;
    uVar34 = uVar34 + 1;
    uVar31 = (uVar29 ^ uVar33 ^ uVar28) +
             (uVar27 << 5 | uVar27 >> 0x1b) + (&DAT_149d35408)[uVar32] + uVar26 + uVar30;
    uVar26 = uVar28 >> 2 | uVar28 << 0x1e;
    uVar28 = uVar27;
    uVar30 = uVar29;
  } while (uVar34 < 0x28);
  uVar34 = 0x28;
  do {
    uVar28 = uVar31;
    uVar30 = uVar33;
    uVar33 = uVar26;
    uVar31 = (uint)uVar34 & 0xf;
    uVar26 = param_1[(ulonglong)(uVar31 - 8 & 0xf) + 8] ^ param_1[(ulonglong)(uVar31 - 3 & 0xf) + 8]
             ^ param_1[(ulonglong)(uVar31 + 2 & 0xf) + 8] ^ param_1[(ulonglong)uVar31 + 8];
    uVar26 = uVar26 << 1 | (uint)((int)uVar26 < 0);
    param_1[(ulonglong)uVar31 + 8] = uVar26;
    uVar32 = uVar34 + 1;
    uVar31 = (uVar28 << 5 | uVar28 >> 0x1b) + ((uVar33 | uVar27) & uVar30 | uVar33 & uVar27) +
             (&DAT_149d35408)[uVar34 / 0x14] + uVar26 + uVar29;
    uVar26 = uVar27 >> 2 | uVar27 << 0x1e;
    uVar34 = uVar32;
    uVar27 = uVar28;
    uVar29 = uVar30;
  } while (uVar32 < 0x3c);
  uVar34 = 0x3c;
  do {
    uVar27 = uVar31;
    uVar29 = uVar33;
    uVar33 = uVar26;
    uVar31 = (uint)uVar34 & 0xf;
    uVar26 = param_1[(ulonglong)(uVar31 - 8 & 0xf) + 8] ^ param_1[(ulonglong)(uVar31 - 3 & 0xf) + 8]
             ^ param_1[(ulonglong)(uVar31 + 2 & 0xf) + 8] ^ param_1[(ulonglong)uVar31 + 8];
    uVar26 = uVar26 << 1 | (uint)((int)uVar26 < 0);
    uVar32 = uVar34 / 0x14;
    param_1[(ulonglong)uVar31 + 8] = uVar26;
    uVar34 = uVar34 + 1;
    uVar31 = (uVar29 ^ uVar33 ^ uVar28) +
             (uVar27 << 5 | uVar27 >> 0x1b) + (&DAT_149d35408)[uVar32] + uVar26 + uVar30;
    uVar26 = uVar28 >> 2 | uVar28 << 0x1e;
    uVar28 = uVar27;
    uVar30 = uVar29;
  } while (uVar34 < 0x50);
  param_1[1] = param_1[1] + uVar27;
  param_1[3] = param_1[3] + uVar33;
  param_1[4] = param_1[4] + uVar29;
  *param_1 = *param_1 + uVar31;
  param_1[2] = param_1[2] + uVar26;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return;
}



// FUNCTION 1452f7d50 FUN_1452f7d50 body=472 status=ok
// SIG undefined FUN_1452f7d50(void)

void FUN_1452f7d50(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong _Size;
  
  *(undefined1 *)((ulonglong)(*(byte *)(param_1 + 0x60) & 0x3f) + 0x20 + param_1) = 0x80;
  bVar1 = *(char *)(param_1 + 0x60) + 1U & 0x3f;
  *(byte *)(param_1 + 0x60) = bVar1;
  if (bVar1 == 0) {
    FUN_1452f76d0();
  }
  uVar2 = (ulonglong)(*(byte *)(param_1 + 0x60) & 0x3f);
  _Size = 0x40 - uVar2;
  if (_Size < 8) {
    memset((void *)(param_1 + 0x20 + uVar2),0,_Size);
    *(byte *)(param_1 + 0x60) = (char)_Size + *(char *)(param_1 + 0x60) & 0x3f;
    FUN_1452f76d0(param_1);
    uVar2 = (ulonglong)(*(byte *)(param_1 + 0x60) & 0x3f);
    _Size = 0x40 - uVar2;
  }
  memset((void *)(param_1 + 0x20 + uVar2),0,_Size - 8);
  bVar1 = ((char)_Size + *(char *)(param_1 + 0x60)) - 8U & 0x3f;
  *(byte *)(param_1 + 0x60) = bVar1;
  *(undefined1 *)((ulonglong)bVar1 + 0x20 + param_1) = *(undefined1 *)(param_1 + 0x1f);
  bVar1 = *(char *)(param_1 + 0x60) + 1U & 0x3f;
  *(byte *)(param_1 + 0x60) = bVar1;
  if (bVar1 == 0) {
    FUN_1452f76d0(param_1);
  }
  *(undefined1 *)((ulonglong)(*(byte *)(param_1 + 0x60) & 0x3f) + 0x20 + param_1) =
       *(undefined1 *)(param_1 + 0x1e);
  bVar1 = *(char *)(param_1 + 0x60) + 1U & 0x3f;
  *(byte *)(param_1 + 0x60) = bVar1;
  if (bVar1 == 0) {
    FUN_1452f76d0(param_1);
  }
  *(undefined1 *)((ulonglong)(*(byte *)(param_1 + 0x60) & 0x3f) + 0x20 + param_1) =
       *(undefined1 *)(param_1 + 0x1d);
  bVar1 = *(char *)(param_1 + 0x60) + 1U & 0x3f;
  *(byte *)(param_1 + 0x60) = bVar1;
  if (bVar1 == 0) {
    FUN_1452f76d0(param_1);
  }
  *(undefined1 *)((ulonglong)(*(byte *)(param_1 + 0x60) & 0x3f) + 0x20 + param_1) =
       *(undefined1 *)(param_1 + 0x1c);
  bVar1 = *(char *)(param_1 + 0x60) + 1U & 0x3f;
  *(byte *)(param_1 + 0x60) = bVar1;
  if (bVar1 == 0) {
    FUN_1452f76d0(param_1);
  }
  *(undefined1 *)((ulonglong)(*(byte *)(param_1 + 0x60) & 0x3f) + 0x20 + param_1) =
       *(undefined1 *)(param_1 + 0x1b);
  bVar1 = *(char *)(param_1 + 0x60) + 1U & 0x3f;
  *(byte *)(param_1 + 0x60) = bVar1;
  if (bVar1 == 0) {
    FUN_1452f76d0(param_1);
  }
  *(undefined1 *)((ulonglong)(*(byte *)(param_1 + 0x60) & 0x3f) + 0x20 + param_1) =
       *(undefined1 *)(param_1 + 0x1a);
  bVar1 = *(char *)(param_1 + 0x60) + 1U & 0x3f;
  *(byte *)(param_1 + 0x60) = bVar1;
  if (bVar1 == 0) {
    FUN_1452f76d0(param_1);
  }
  *(undefined1 *)((ulonglong)(*(byte *)(param_1 + 0x60) & 0x3f) + 0x20 + param_1) =
       *(undefined1 *)(param_1 + 0x19);
  bVar1 = *(char *)(param_1 + 0x60) + 1U & 0x3f;
  *(byte *)(param_1 + 0x60) = bVar1;
  if (bVar1 == 0) {
    FUN_1452f76d0(param_1);
  }
  *(undefined1 *)((ulonglong)(*(byte *)(param_1 + 0x60) & 0x3f) + 0x20 + param_1) =
       *(undefined1 *)(param_1 + 0x18);
  bVar1 = *(char *)(param_1 + 0x60) + 1U & 0x3f;
  *(byte *)(param_1 + 0x60) = bVar1;
  if (bVar1 == 0) {
    FUN_1452f76d0(param_1);
  }
  return;
}



// FUNCTION 1452f7f30 FUN_1452f7f30 body=170 status=ok
// SIG undefined FUN_1452f7f30(void)

void FUN_1452f7f30(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong _Size;
  ulonglong uVar3;
  
  if (param_3 != 0) {
    uVar2 = 0;
    do {
      uVar3 = (ulonglong)(*(byte *)(param_1 + 0x60) & 0x3f);
      uVar1 = 0x40 - uVar3;
      _Size = param_3 - uVar2;
      if (uVar1 < param_3 - uVar2) {
        _Size = uVar1;
      }
      memcpy((void *)(param_1 + 0x20 + uVar3),(void *)(uVar2 + param_2),_Size);
      *(byte *)(param_1 + 0x60) = *(char *)(param_1 + 0x60) + (char)_Size & 0x3f;
      *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + _Size * 8;
      if ((*(byte *)(param_1 + 0x60) & 0x3f) == 0) {
        FUN_1452f76d0(param_1);
      }
      uVar2 = uVar2 + _Size;
    } while (uVar2 < param_3);
  }
  return;
}



// FUNCTION 1452f7fe0 FUN_1452f7fe0 body=2330 status=ok
// SIG undefined FUN_1452f7fe0(void)

undefined8 FUN_1452f7fe0(longlong param_1,byte param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  longlong *plVar3;
  uint *puVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  ushort uVar9;
  int iVar10;
  undefined8 uVar11;
  ushort uVar12;
  longlong lVar13;
  uint uVar14;
  undefined2 *_Src;
  ulonglong uVar15;
  char *pcVar16;
  longlong lVar17;
  int iVar18;
  
  lVar13 = 0;
  uVar15 = (ulonglong)param_2;
  uVar14 = 0;
  iVar18 = 8;
  if ((*(byte *)(param_1 + 0x1b8) & 0x80) != 0) {
    return 0xffffffff;
  }
  switch(*(undefined1 *)(param_1 + 0x1c4)) {
  case 0:
    puVar4 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
    *puVar4 = *puVar4 & 0xfffff7ff;
    cVar5 = *(char *)(*(longlong *)(param_1 + 0x60) + 0xc1);
    if (cVar5 != '\r') {
      FUN_144bd5aa0(1,"unknown spec version %02d\n",cVar5);
      return 0;
    }
    *(byte *)(*(longlong *)(param_1 + 0x60) + 0xba) = param_2 & 0xf;
    lVar13 = *(longlong *)(param_1 + 0x60);
    switch(*(undefined1 *)(lVar13 + 0xba)) {
    case 0:
      if ((*(uint *)(lVar13 + 0xc4) >> 8 & 1) != 0) {
        *(uint *)(lVar13 + 0xc4) = *(uint *)(lVar13 + 0xc4) & 0xffffbfff;
        break;
      }
      goto switchD_1452f80a4_caseD_3;
    case 1:
      *(byte *)(lVar13 + 0xbc) = param_2 & 0x70;
      puVar4 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar4 = *puVar4 | 0x100;
      puVar4 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar4 = *puVar4 ^ (*(int *)(*(longlong *)(param_1 + 0x78) + 0x4b0) << 2 ^
                          *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc4)) & 0x400;
      *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xbe) = 0;
      puVar4 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar4 = *puVar4 | 0x4000;
      break;
    case 2:
      *(byte *)(lVar13 + 0xbc) = param_2 & 0x70;
      puVar4 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar4 = *puVar4 & 0xfffffbff;
      puVar4 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar4 = *puVar4 | 0x100;
      puVar4 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar4 = *puVar4 | 0x4000;
      break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
      goto switchD_1452f80a4_caseD_3;
    case 8:
      *(uint *)(lVar13 + 0xc4) = *(uint *)(lVar13 + 0xc4) & 0xfffffbff;
      *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xbe) = 0;
      break;
    default:
      *(uint *)(lVar13 + 0xc4) = *(uint *)(lVar13 + 0xc4) | 0x800;
    }
    *(byte *)(*(longlong *)(param_1 + 0x60) + 0xbb) = param_2 & 0x70;
    lVar13 = *(longlong *)(param_1 + 0x60);
    if (*(char *)(lVar13 + 0xbb) == '\0') {
      *(uint *)(lVar13 + 0xc4) = *(uint *)(lVar13 + 0xc4) & 0xfffffffe;
      *(uint *)(lVar13 + 0xc4) = *(uint *)(lVar13 + 0xc4) | (uint)(param_2 >> 7);
      lVar13 = *(longlong *)(param_1 + 0x60);
      uVar7 = *(uint *)(lVar13 + 0xc4);
      if (((uVar7 >> 9 & 1) == 0) || (1 < (byte)(*(char *)(lVar13 + 0xba) - 1U))) {
        if (((*(byte *)(lVar13 + 0xba) & 8) == 0) && ((uVar7 & 1) != 0)) {
          *(uint *)(lVar13 + 0xc4) = uVar7 & 0xfffffeff;
          puVar4 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
          *puVar4 = *puVar4 & 0xfffffdff;
        }
        lVar13 = *(longlong *)(param_1 + 0x60);
        if (((*(byte *)(lVar13 + 0xba) & 8) == 0) || ((*(byte *)(lVar13 + 0xc4) & 1) != 0)) {
          if ((*(uint *)(lVar13 + 0xc4) & 1) == 0) {
            *(uint *)(lVar13 + 0xc4) = *(uint *)(lVar13 + 0xc4) | 0x200;
          }
          lVar13 = *(longlong *)(param_1 + 0x60);
          if ((byte)(*(char *)(lVar13 + 0xba) - 1U) < 2) {
            *(uint *)(lVar13 + 0xc4) = *(uint *)(lVar13 + 0xc4) & 0xfffffffd;
            if (*(char *)(lVar13 + 0xba) == '\x02') {
              uVar14 = 2;
            }
            *(uint *)(lVar13 + 0xc4) = *(uint *)(lVar13 + 0xc4) | uVar14;
          }
          *(undefined1 *)(param_1 + 0x1c4) = 5;
          return 0;
        }
      }
    }
switchD_1452f80a4_caseD_3:
    uVar11 = 0xffffffff;
    break;
  default:
    FUN_144bd5aa0(1,"client rx illegal state\n");
LAB_1452f88dc:
    uVar11 = 1;
    break;
  case 5:
    *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc4) =
         param_2 >> 4 & 0xffffff8 | *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc4) & 0xfffffff7;
    lVar17 = *(longlong *)(param_1 + 0x60);
    if ((param_2 & 0x7f) == 0x7e) {
      if ((*(byte *)(lVar17 + 0xba) & 8) == 0) {
        *(undefined1 *)(param_1 + 0x1c4) = 6;
        return 0;
      }
    }
    else {
      if ((param_2 & 0x7f) != 0x7f) {
        *(ulonglong *)(lVar17 + 0xa8) = (ulonglong)(param_2 & 0x7f);
        goto LAB_1452f82a0;
      }
      if ((*(byte *)(lVar17 + 0xba) & 8) == 0) {
        *(undefined1 *)(param_1 + 0x1c4) = 8;
        return 0;
      }
    }
    FUN_144bd5aa0(2,"Control frame asking for extended length is illegal\n");
    uVar11 = 0xffffffff;
    break;
  case 6:
    *(ulonglong *)(*(longlong *)(param_1 + 0x60) + 0xa8) = uVar15 << 8;
    uVar11 = 0;
    *(undefined1 *)(param_1 + 0x1c4) = 7;
    break;
  case 7:
  case 0xf:
    puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x60) + 0xa8);
    *puVar1 = *puVar1 | uVar15;
LAB_1452f82a0:
    if ((*(byte *)(*(longlong *)(param_1 + 0x60) + 0xc4) & 8) != 0) {
      *(undefined1 *)(param_1 + 0x1c4) = 0x10;
      return 0;
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xa8) != 0) {
      *(undefined1 *)(param_1 + 0x1c4) = 0x14;
      return 0;
    }
LAB_1452f8532:
    *(undefined1 *)(param_1 + 0x1c4) = 0;
LAB_1452f857d:
    plVar3 = *(longlong **)(param_1 + 0x60);
    bVar6 = *(byte *)((longlong)plVar3 + 0xba);
    if (bVar6 < 3) {
LAB_1452f85d3:
      plVar3 = *(longlong **)(param_1 + 0x60);
      lVar13 = *plVar3 + 0x10;
      uVar14 = *(uint *)(plVar3 + 0x16);
      lVar17 = (longlong)(int)uVar14;
      if (((*(uint *)((longlong)plVar3 + 0xc4) >> 10 & 1) == 0) ||
         ((*(uint *)((longlong)plVar3 + 0xc4) >> 0xb & 1) != 0)) {
LAB_1452f8847:
        if (((-1 < (int)uVar14) || (iVar18 == 9)) &&
           ((lVar13 != 0 &&
            (*(undefined1 *)(lVar17 + lVar13) = 0,
            *(longlong *)(*(longlong *)(param_1 + 0xa0) + 8) != 0)))) {
          if (uVar14 == 0) {
            FUN_144bd5a90(param_1);
          }
          else {
            FUN_144bd5a80();
          }
          if (2 < *(ushort *)(param_1 + 0x70) - 0x119) {
            iVar18 = (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                               (param_1,iVar18,*(undefined8 *)(param_1 + 0x130),lVar13,lVar17);
            puVar4 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
            *puVar4 = *puVar4 & 0xffffbfff;
            if (iVar18 != 0) goto LAB_1452f88dc;
          }
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0xb0) = 0;
        goto LAB_1452f88c7;
      }
      iVar10 = FUN_144bd7ca0((longlong)plVar3 + 0xbe,lVar13,lVar17);
      if (iVar10 == 0) {
        lVar8 = *(longlong *)(param_1 + 0x60);
        if (((*(longlong *)(lVar8 + 0xa8) != 0) || ((*(byte *)(lVar8 + 0xc4) & 1) == 0)) ||
           (*(char *)(lVar8 + 0xbe) == '\0')) goto LAB_1452f8847;
        uVar11 = 0xc;
        pcVar16 = "partial utf8";
      }
      else {
        uVar11 = 8;
        pcVar16 = "bad utf8";
      }
      FUN_144bd4be0(param_1,0x3ef,pcVar16,uVar11);
    }
    else {
      if (bVar6 != 8) {
        if (bVar6 == 9) {
          if (((*(char *)((longlong)plVar3 + 0xbd) == '\0') &&
              ((*(byte *)((longlong)plVar3 + 0xc4) & 0x80) == 0)) &&
             (*(uint *)(plVar3 + 0x16) < 0x7e)) {
            memcpy(plVar3 + 3,(void *)(*plVar3 + 0x10),(ulonglong)*(uint *)(plVar3 + 0x16));
            *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xb8) =
                 *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xb0);
            puVar4 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
            *puVar4 = *puVar4 | 0x80;
            FUN_144bd0240(param_1);
          }
          *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0xb0) = 0;
          *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0xb0) = 0;
          return 0;
        }
        if (bVar6 != 10) {
          *(undefined4 *)(plVar3 + 0x16) = 0;
          return 0xffffffff;
        }
        FUN_144bd5eb0(*plVar3 + 0x10,(int)plVar3[0x16]);
        if (*(char *)(param_1 + 0x1c6) == '\x11') {
          FUN_144bd6160(param_1,0,0);
        }
        iVar18 = 9;
        goto LAB_1452f85d3;
      }
      lVar17 = *plVar3;
      _Src = (undefined2 *)(lVar17 + 0x10);
      if ((((*(uint *)(*(longlong *)(param_1 + 0x78) + 0x4b0) & 0x100) == 0) ||
          (*(uint *)(plVar3 + 0x16) < 3)) ||
         (iVar18 = FUN_144bd7ca0((longlong)plVar3 + 0xbe,lVar17 + 0x12,*(uint *)(plVar3 + 0x16) - 2)
         , iVar18 == 0)) {
        if (*(short *)(param_1 + 0x70) != 0x11b) {
          if (1 < *(uint *)(*(longlong *)(param_1 + 0x60) + 0xb0)) {
            uVar12 = CONCAT11(*(undefined1 *)_Src,*(undefined1 *)(lVar17 + 0x11));
            uVar9 = uVar12 - 1000;
            if (((0xb < uVar9) || ((0xf8fU >> (uVar9 & 0x1f) & 1) == 0)) && (uVar12 < 3000)) {
              *_Src = 0xea03;
            }
          }
          iVar18 = FUN_144bd7680(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 8),param_1,0x26,
                                 *(undefined8 *)(param_1 + 0x130),_Src,
                                 *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0xb0));
          if (iVar18 == 0) {
            memcpy((void *)(*(longlong *)(param_1 + 0x60) + 0x18),_Src,
                   (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x60) + 0xb0));
            *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xbd) =
                 *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xb0);
            FUN_144bd0b20(param_1,9);
            FUN_144bd6160(param_1,0x18,3);
            *(undefined2 *)(param_1 + 0x70) = 0x119;
            *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xffdfffff | 0x100000;
            FUN_144bd0240(param_1);
            *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0xb0) = 0;
            return 0;
          }
        }
        goto switchD_1452f80a4_caseD_3;
      }
    }
    FUN_144bd5ce0(8,lVar13,(longlong)(int)uVar14);
    goto switchD_1452f80a4_caseD_3;
  case 8:
    if ((char)param_2 < '\0') {
      FUN_144bd5aa0(2,"b63 of length must be zero\n");
      uVar11 = 0xffffffff;
    }
    else {
      *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0xa8) = 0;
      uVar11 = 0;
      *(undefined1 *)(param_1 + 0x1c4) = 9;
    }
    break;
  case 9:
    *(undefined1 *)(param_1 + 0x1c4) = 10;
    uVar11 = 0;
    break;
  case 10:
    *(undefined1 *)(param_1 + 0x1c4) = 0xb;
    uVar11 = 0;
    break;
  case 0xb:
    *(undefined1 *)(param_1 + 0x1c4) = 0xc;
    uVar11 = 0;
    break;
  case 0xc:
    puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x60) + 0xa8);
    *puVar1 = *puVar1 | uVar15 << 0x18;
    uVar11 = 0;
    *(undefined1 *)(param_1 + 0x1c4) = 0xd;
    break;
  case 0xd:
    puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x60) + 0xa8);
    *puVar1 = *puVar1 | uVar15 << 0x10;
    uVar11 = 0;
    *(undefined1 *)(param_1 + 0x1c4) = 0xe;
    break;
  case 0xe:
    puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x60) + 0xa8);
    *puVar1 = *puVar1 | uVar15 << 8;
    uVar11 = 0;
    *(undefined1 *)(param_1 + 0x1c4) = 0xf;
    break;
  case 0x10:
    *(byte *)(*(longlong *)(param_1 + 0x60) + 0x95) = param_2;
    if (param_2 != 0) {
      puVar4 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar4 = *puVar4 & 0xfffffffb;
    }
    *(undefined1 *)(param_1 + 0x1c4) = 0x11;
    uVar11 = 0;
    break;
  case 0x11:
    *(byte *)(*(longlong *)(param_1 + 0x60) + 0x96) = param_2;
    if (param_2 != 0) {
      puVar4 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar4 = *puVar4 & 0xfffffffb;
    }
    *(undefined1 *)(param_1 + 0x1c4) = 0x12;
    uVar11 = 0;
    break;
  case 0x12:
    *(byte *)(*(longlong *)(param_1 + 0x60) + 0x97) = param_2;
    if (param_2 != 0) {
      puVar4 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar4 = *puVar4 & 0xfffffffb;
    }
    *(undefined1 *)(param_1 + 0x1c4) = 0x13;
    uVar11 = 0;
    break;
  case 0x13:
    *(byte *)(*(longlong *)(param_1 + 0x60) + 0x98) = param_2;
    if (param_2 != 0) {
      puVar4 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar4 = *puVar4 & 0xfffffffb;
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xa8) != 0) {
      *(undefined1 *)(param_1 + 0x1c4) = 0x14;
      return 0;
    }
    *(undefined1 *)(param_1 + 0x1c4) = 0;
    goto LAB_1452f857d;
  case 0x14:
    lVar17 = *(longlong *)(param_1 + 0x60);
    if (((*(uint *)(lVar17 + 0xc4) & 8) != 0) && ((*(uint *)(lVar17 + 0xc4) & 4) == 0)) {
      param_2 = param_2 ^ *(byte *)((ulonglong)(*(byte *)(lVar17 + 0xb9) & 3) + 0x95 + lVar17);
      *(byte *)(lVar17 + 0xb9) = *(byte *)(lVar17 + 0xb9) + 1;
    }
    *(byte *)((ulonglong)((int)(*(longlong **)(param_1 + 0x60))[0x16] + 0x10) +
             **(longlong **)(param_1 + 0x60)) = param_2;
    piVar2 = (int *)(*(longlong *)(param_1 + 0x60) + 0xb0);
    *piVar2 = *piVar2 + 1;
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0x60) + 0xa8);
    *plVar3 = *plVar3 + -1;
    if (*plVar3 == 0) goto LAB_1452f8532;
    uVar15 = *(ulonglong *)(*(longlong *)(param_1 + 0xa0) + 0x18);
    if (uVar15 == 0) {
      if (*(int *)(*(longlong *)(param_1 + 0x60) + 0xb0) !=
          *(int *)(*(longlong *)(param_1 + 0x78) + 0x4bc)) goto LAB_1452f88c7;
      goto LAB_1452f857d;
    }
    if (*(uint *)(*(longlong *)(param_1 + 0x60) + 0xb0) == uVar15) goto LAB_1452f857d;
LAB_1452f88c7:
    uVar11 = 0;
  }
  return uVar11;
}



// FUNCTION 1452f8990 FUN_1452f8990 body=381 status=ok
// SIG undefined FUN_1452f8990(void)

/* WARNING: Removing unreachable block (ram,0x0001452f8a7b) */
/* WARNING: Removing unreachable block (ram,0x0001452f89df) */
/* WARNING: Removing unreachable block (ram,0x0001452f89b6) */

void FUN_1452f8990(void)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  
  if ((DAT_14c7fc6b0 & 1) == 0) {
    puVar1 = (uint *)cpuid_basic_info(0);
    bVar5 = false;
    if (((puVar1[1] == 0x68747541) && (puVar1[2] == 0x69746e65)) &&
       (bVar5 = false, puVar1[3] == 0x444d4163)) {
      bVar5 = true;
    }
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar6 = puVar2[3];
    uVar7 = DAT_14c7fc6b0 | 2;
    if ((puVar2[2] >> 0x1a & 1) == 0) {
      uVar7 = DAT_14c7fc6b0;
    }
    uVar4 = uVar7 | 4;
    if ((uVar6 >> 9 & 1) == 0) {
      uVar4 = uVar7;
    }
    uVar7 = uVar4 | 8;
    if ((uVar6 >> 0x13 & 1) == 0) {
      uVar7 = uVar4;
    }
    uVar4 = uVar7 | 0x10;
    if ((uVar6 >> 0x14 & 1) == 0) {
      uVar4 = uVar7;
    }
    uVar7 = uVar4 | 0x20;
    if ((uVar6 >> 0x1c & 1) == 0) {
      uVar7 = uVar4;
    }
    uVar4 = uVar7 | 0x400;
    if ((uVar6 >> 0x1d & 1) == 0) {
      uVar4 = uVar7;
    }
    uVar7 = uVar4 | 0x2000;
    if ((uVar6 >> 0x17 & 1) == 0) {
      uVar7 = uVar4;
    }
    if (((bVar5) && ((*puVar2 & 0xf00) == 0xf00)) && (7 < (byte)((int)*puVar2 >> 0x14))) {
      uVar7 = uVar7 | 0x200;
    }
    if (6 < *puVar1) {
      lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar4 = *(uint *)(lVar3 + 4);
      if (((uVar7 & 0x20) != 0) && ((uVar6 >> 0x17 & 1) != 0)) {
        uVar6 = uVar7 | 0x40;
        if ((uVar4 & 8) == 0) {
          uVar6 = uVar7;
        }
        uVar7 = uVar6 | 0x80;
        if ((uVar4 >> 8 & 1) == 0) {
          uVar7 = uVar6;
        }
        uVar6 = uVar7 | 0x100;
        if ((uVar4 & 0x128) != 0x128) {
          uVar6 = uVar7;
        }
        uVar7 = uVar6 | 0x800;
        if ((uVar4 & 0xc0030000) != 0xc0030000) {
          uVar7 = uVar6;
        }
        if ((*(uint *)(lVar3 + 0xc) & 0x40) != 0) {
          uVar7 = uVar7 | 0x1000;
        }
      }
    }
    if (((uVar7 >> 9 & 1) != 0) && ((uVar7 & 0x5fe) != 0x5fe)) {
      uVar7 = uVar7 & 0xfffffdff;
    }
    DAT_14c7fc6b0 = uVar7 | 1;
  }
  return;
}



// FUNCTION 1452f8b10 FUN_1452f8b10 body=493 status=ok
// SIG undefined FUN_1452f8b10(void)

longlong FUN_1452f8b10(longlong param_1,int param_2,longlong param_3,longlong param_4,float param_5,
                      longlong param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ushort uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  ushort *puVar30;
  ushort *puVar31;
  ushort *puVar32;
  ushort uVar33;
  ushort *puVar34;
  ushort *puVar35;
  ushort *puVar36;
  longlong lVar37;
  float *pfVar38;
  longlong lVar39;
  longlong lVar40;
  ushort *puVar41;
  float *pfVar42;
  longlong lVar43;
  longlong lVar44;
  undefined1 auVar45 [12];
  undefined1 auVar46 [12];
  undefined1 auVar48 [16];
  undefined1 auVar51 [16];
  undefined1 auVar47 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar52 [16];
  
  lVar43 = 0;
  param_5 = param_5 * 1.5258789e-05;
  lVar39 = (longlong)param_2 >> 1;
  if (lVar39 < 1) {
    lVar44 = param_6 - param_1;
  }
  else {
    pfVar38 = (float *)(param_1 + 0x10);
    pfVar42 = (float *)(param_3 + -0x20 + lVar39 * 4);
    lVar44 = param_6 - param_1;
    do {
      puVar41 = (ushort *)(param_4 + lVar43 * 2);
      uVar7 = *puVar41;
      fVar8 = *pfVar42;
      fVar9 = pfVar42[1];
      fVar10 = pfVar42[2];
      pfVar11 = pfVar42 + 3;
      lVar37 = param_2 - lVar43;
      lVar43 = lVar43 + 8;
      fVar12 = pfVar42[4];
      fVar13 = pfVar42[5];
      fVar14 = pfVar42[6];
      fVar15 = pfVar42[7];
      pfVar42 = pfVar42 + -8;
      pfVar1 = (float *)(param_6 + -0x20 + lVar37 * 4);
      fVar16 = *pfVar1;
      fVar17 = pfVar1[1];
      fVar18 = pfVar1[2];
      pfVar2 = (float *)(param_6 + -0x10 + lVar37 * 4);
      fVar19 = *pfVar2;
      fVar20 = pfVar2[1];
      fVar21 = pfVar2[2];
      fVar22 = pfVar2[3];
      auVar45._0_8_ = CONCAT26(puVar41[5],(uint6)puVar41[4] << 0x10);
      auVar45._8_2_ = 0;
      auVar45._10_2_ = puVar41[6];
      auVar47._12_2_ = 0;
      auVar47._0_12_ = auVar45;
      auVar47._14_2_ = puVar41[7];
      pfVar2 = (float *)(lVar44 + (longlong)pfVar38);
      fVar23 = pfVar2[1];
      fVar24 = pfVar2[2];
      fVar25 = pfVar2[3];
      auVar49._0_12_ = ZEXT812(0);
      auVar49._12_2_ = 0;
      auVar49._14_2_ = puVar41[3];
      auVar48._12_4_ = auVar49._12_4_;
      auVar48._0_10_ = auVar49._0_10_;
      auVar48._10_2_ = puVar41[2];
      lVar37 = (ulonglong)auVar48._10_6_ << 0x10;
      auVar5._2_8_ = lVar37;
      auVar5._0_2_ = puVar41[1];
      auVar5._10_6_ = 0;
      pfVar3 = (float *)(lVar44 + -0x10 + (longlong)pfVar38);
      fVar26 = *pfVar3;
      fVar27 = pfVar3[1];
      fVar28 = pfVar3[2];
      fVar29 = pfVar3[3];
      *pfVar38 = (float)(int)((uint6)puVar41[4] << 0x10) * param_5 * pfVar1[3] - *pfVar11 * *pfVar2;
      pfVar38[1] = (float)(int)(auVar45._0_8_ >> 0x20) * param_5 * fVar18 - fVar10 * fVar23;
      pfVar38[2] = (float)auVar45._8_4_ * param_5 * fVar17 - fVar9 * fVar24;
      pfVar38[3] = (float)auVar47._12_4_ * param_5 * fVar16 - fVar8 * fVar25;
      pfVar38[-4] = (float)(int)((uint)uVar7 << 0x10) * param_5 * fVar22 - fVar15 * fVar26;
      pfVar38[-3] = (float)SUB164(auVar5 << 0x30,4) * param_5 * fVar21 - fVar14 * fVar27;
      pfVar38[-2] = (float)(int)lVar37 * param_5 * fVar20 - fVar13 * fVar28;
      pfVar38[-1] = (float)auVar48._12_4_ * param_5 * fVar19 - fVar12 * fVar29;
      pfVar38 = pfVar38 + 8;
    } while (lVar43 < lVar39);
  }
  lVar43 = lVar39;
  if (0 < lVar39) {
    lVar37 = lVar39 * 4 + 0x10;
    lVar43 = lVar39 * 4;
    puVar41 = (ushort *)(param_4 + -0x10 + lVar39 * 2);
    pfVar42 = (float *)(lVar37 + param_1);
    lVar40 = (lVar39 - 1U >> 3) + 1;
    pfVar38 = (float *)(param_6 + lVar39 * 4);
    do {
      uVar7 = *puVar41;
      puVar30 = puVar41 + 1;
      puVar31 = puVar41 + 2;
      puVar32 = puVar41 + 3;
      uVar33 = puVar41[4];
      puVar34 = puVar41 + 5;
      puVar35 = puVar41 + 6;
      puVar36 = puVar41 + 7;
      puVar41 = puVar41 + -8;
      pfVar2 = (float *)(((param_3 + lVar39 * -4) - param_1) + (longlong)pfVar42);
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[2];
      fVar10 = pfVar2[3];
      auVar46._0_8_ = CONCAT26(*puVar34,(uint6)uVar33 << 0x10);
      auVar46._8_2_ = 0;
      auVar46._10_2_ = *puVar35;
      auVar50._12_2_ = 0;
      auVar50._0_12_ = auVar46;
      auVar50._14_2_ = *puVar36;
      fVar12 = pfVar38[-4];
      fVar13 = pfVar38[-3];
      fVar14 = pfVar38[-2];
      fVar15 = pfVar38[-1];
      auVar52._0_12_ = ZEXT812(0);
      auVar52._12_2_ = 0;
      auVar52._14_2_ = *puVar32;
      auVar51._12_4_ = auVar52._12_4_;
      auVar51._0_10_ = auVar52._0_10_;
      auVar51._10_2_ = *puVar31;
      lVar4 = (ulonglong)auVar51._10_6_ << 0x10;
      auVar6._2_8_ = lVar4;
      auVar6._0_2_ = *puVar30;
      auVar6._10_6_ = 0;
      fVar16 = pfVar38[-8];
      fVar17 = pfVar38[-7];
      fVar18 = pfVar38[-6];
      pfVar1 = (float *)(lVar44 + (longlong)pfVar42);
      fVar19 = pfVar1[1];
      fVar20 = pfVar1[2];
      fVar21 = pfVar1[3];
      pfVar3 = (float *)(((param_3 - lVar37) - param_1) + (longlong)pfVar42);
      fVar22 = *pfVar3;
      fVar23 = pfVar3[1];
      fVar24 = pfVar3[2];
      fVar25 = pfVar3[3];
      pfVar3 = (float *)(lVar44 + -0x10 + (longlong)pfVar42);
      fVar26 = *pfVar3;
      fVar27 = pfVar3[1];
      fVar28 = pfVar3[2];
      fVar29 = pfVar3[3];
      *pfVar42 = *pfVar2 * *pfVar1 + (float)auVar51._12_4_ * param_5 * pfVar38[-5];
      pfVar42[1] = fVar8 * fVar19 + (float)(int)lVar4 * param_5 * fVar18;
      pfVar42[2] = fVar9 * fVar20 + (float)SUB164(auVar6 << 0x30,4) * param_5 * fVar17;
      pfVar42[3] = fVar10 * fVar21 + (float)(int)((uint)uVar7 << 0x10) * param_5 * fVar16;
      pfVar42[-4] = fVar22 * fVar26 + (float)auVar50._12_4_ * param_5 * fVar15;
      pfVar42[-3] = fVar23 * fVar27 + (float)auVar46._8_4_ * param_5 * fVar14;
      pfVar42[-2] = fVar24 * fVar28 + (float)(int)(auVar46._0_8_ >> 0x20) * param_5 * fVar13;
      pfVar42[-1] = fVar25 * fVar29 + (float)(int)((uint6)uVar33 << 0x10) * param_5 * fVar12;
      pfVar42 = pfVar42 + 8;
      lVar40 = lVar40 + -1;
      pfVar38 = pfVar38 + -8;
    } while (lVar40 != 0);
  }
  return lVar43;
}



// FUNCTION 1452f8d00 FUN_1452f8d00 body=237 status=ok
// SIG undefined FUN_1452f8d00(void)

void FUN_1452f8d00(longlong param_1,int param_2,longlong param_3,ulonglong *param_4,float *param_5)

{
  int *piVar1;
  float *pfVar2;
  ulonglong uVar3;
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [14];
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if (0 < param_2) {
    param_3 = param_3 - (longlong)param_5;
    param_1 = param_1 - (longlong)param_5;
    uVar13 = (ulonglong)((param_2 - 1U >> 2) + 1);
    do {
      piVar1 = (int *)(param_3 + (longlong)param_5);
      iVar6 = piVar1[1];
      iVar7 = piVar1[2];
      iVar8 = piVar1[3];
      uVar3 = *param_4;
      auVar4._8_4_ = 0;
      auVar4._0_8_ = uVar3;
      auVar4._12_2_ = (short)(uVar3 >> 0x30);
      auVar5._8_2_ = (short)(uVar3 >> 0x20);
      auVar5._0_8_ = uVar3;
      auVar5._10_4_ = auVar4._10_4_;
      auVar12._6_8_ = 0;
      auVar12._0_6_ = auVar5._8_6_;
      param_4 = param_4 + 1;
      fVar14 = (float)(ushort)uVar3 * 1.5258789e-05;
      fVar15 = (float)(int)CONCAT82(SUB148(auVar12 << 0x40,6),(short)(uVar3 >> 0x10)) *
               1.5258789e-05;
      fVar16 = (float)auVar5._8_4_ * 1.5258789e-05;
      fVar17 = (float)(auVar4._10_4_ >> 0x10) * 1.5258789e-05;
      fVar9 = param_5[1];
      fVar10 = param_5[2];
      fVar11 = param_5[3];
      pfVar2 = (float *)(param_1 + (longlong)param_5);
      *pfVar2 = ((fVar14 * 0.34375 + 0.65625) * fVar14 + 1.0) *
                (float)(~-(uint)(*piVar1 == -0x11) & (*piVar1 + 0x8f) * 0x800000) * *param_5;
      pfVar2[1] = ((fVar15 * 0.34375 + 0.65625) * fVar15 + 1.0) *
                  (float)(~-(uint)(iVar6 == -0x11) & (iVar6 + 0x8f) * 0x800000) * fVar9;
      pfVar2[2] = ((fVar16 * 0.34375 + 0.65625) * fVar16 + 1.0) *
                  (float)(~-(uint)(iVar7 == -0x11) & (iVar7 + 0x8f) * 0x800000) * fVar10;
      pfVar2[3] = ((fVar17 * 0.34375 + 0.65625) * fVar17 + 1.0) *
                  (float)(~-(uint)(iVar8 == -0x11) & (iVar8 + 0x8f) * 0x800000) * fVar11;
      param_5 = param_5 + 4;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  return;
}



// FUNCTION 1452f8df0 FUN_1452f8df0 body=200 status=ok
// SIG undefined FUN_1452f8df0(void)

int FUN_1452f8df0(longlong param_1,int param_2,char param_3)

{
  char *pcVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  param_3 = param_3 + -0x80;
  iVar6 = 0;
  uVar7 = param_2 + 0xfU & 0xfffffff0;
  uVar5 = 0;
  *(undefined8 *)(param_2 + param_1) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_2 + 8 + param_1) = 0xffffffffffffffff;
  if (0 < (int)uVar7) {
    lVar4 = 0;
    do {
      uVar5 = uVar5 + 0xff0;
      uVar3 = uVar5;
      if ((int)uVar7 <= (int)uVar5) {
        uVar3 = uVar7;
      }
      auVar9 = ZEXT816(0);
      for (lVar2 = lVar4; lVar2 < (int)uVar3; lVar2 = lVar2 + 0x10) {
        pcVar1 = (char *)(lVar2 + param_1);
        auVar8[0] = auVar9[0] + ((char)(*pcVar1 + -0x80) < param_3);
        auVar8[1] = auVar9[1] + ((char)(pcVar1[1] + -0x80) < param_3);
        auVar8[2] = auVar9[2] + ((char)(pcVar1[2] + -0x80) < param_3);
        auVar8[3] = auVar9[3] + ((char)(pcVar1[3] + -0x80) < param_3);
        auVar8[4] = auVar9[4] + ((char)(pcVar1[4] + -0x80) < param_3);
        auVar8[5] = auVar9[5] + ((char)(pcVar1[5] + -0x80) < param_3);
        auVar8[6] = auVar9[6] + ((char)(pcVar1[6] + -0x80) < param_3);
        auVar8[7] = auVar9[7] + ((char)(pcVar1[7] + -0x80) < param_3);
        auVar8[8] = auVar9[8] + ((char)(pcVar1[8] + -0x80) < param_3);
        auVar8[9] = auVar9[9] + ((char)(pcVar1[9] + -0x80) < param_3);
        auVar8[10] = auVar9[10] + ((char)(pcVar1[10] + -0x80) < param_3);
        auVar8[0xb] = auVar9[0xb] + ((char)(pcVar1[0xb] + -0x80) < param_3);
        auVar8[0xc] = auVar9[0xc] + ((char)(pcVar1[0xc] + -0x80) < param_3);
        auVar8[0xd] = auVar9[0xd] + ((char)(pcVar1[0xd] + -0x80) < param_3);
        auVar8[0xe] = auVar9[0xe] + ((char)(pcVar1[0xe] + -0x80) < param_3);
        auVar8[0xf] = auVar9[0xf] + ((char)(pcVar1[0xf] + -0x80) < param_3);
        auVar9 = auVar8;
      }
      auVar9 = psadbw(auVar9,ZEXT816(0));
      lVar4 = lVar4 + 0xff0;
      iVar6 = iVar6 + auVar9._0_4_ + (uint)auVar9._8_2_;
    } while ((int)uVar5 < (int)uVar7);
  }
  return iVar6;
}



// FUNCTION 1452f8ec0 FUN_1452f8ec0 body=103 status=ok
// SIG undefined FUN_1452f8ec0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1452f8ec0(longlong param_1,longlong param_2,int param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  auVar2 = _DAT_149a23d40;
  *(undefined8 *)(param_3 + param_2) = param_4;
  *(undefined8 *)((longlong)param_3 + 8 + param_2) = param_4;
  uVar4 = (longlong)(param_3 + 0xf) & 0xfffffffffffffff0;
  if (0 < (longlong)uVar4) {
    lVar3 = 0;
    do {
      auVar14 = *(undefined1 (*) [16])(lVar3 + param_2);
      auVar13._0_2_ = auVar14._0_2_ >> 4;
      auVar13._2_2_ = auVar14._2_2_ >> 4;
      auVar13._4_2_ = auVar14._4_2_ >> 4;
      auVar13._6_2_ = auVar14._6_2_ >> 4;
      auVar13._8_2_ = auVar14._8_2_ >> 4;
      auVar13._10_2_ = auVar14._10_2_ >> 4;
      auVar13._12_2_ = auVar14._12_2_ >> 4;
      auVar13._14_2_ = auVar14._14_2_ >> 4;
      auVar14 = auVar14 & auVar2;
      auVar13 = auVar13 & auVar2;
      auVar12._0_14_ = auVar14._0_14_;
      auVar12[0xe] = auVar14[7];
      auVar12[0xf] = auVar13[7];
      auVar11._14_2_ = auVar12._14_2_;
      auVar11._0_13_ = auVar14._0_13_;
      auVar11[0xd] = auVar13[6];
      auVar10._13_3_ = auVar11._13_3_;
      auVar10._0_12_ = auVar14._0_12_;
      auVar10[0xc] = auVar14[6];
      auVar9._12_4_ = auVar10._12_4_;
      auVar9._0_11_ = auVar14._0_11_;
      auVar9[0xb] = auVar13[5];
      auVar8._11_5_ = auVar9._11_5_;
      auVar8._0_10_ = auVar14._0_10_;
      auVar8[10] = auVar14[5];
      auVar7._10_6_ = auVar8._10_6_;
      auVar7._0_9_ = auVar14._0_9_;
      auVar7[9] = auVar13[4];
      auVar6._9_7_ = auVar7._9_7_;
      auVar6._0_8_ = auVar14._0_8_;
      auVar6[8] = auVar14[4];
      auVar5._8_8_ = auVar6._8_8_;
      auVar5[7] = auVar13[3];
      auVar5[6] = auVar14[3];
      auVar5[5] = auVar13[2];
      auVar5[4] = auVar14[2];
      auVar5[3] = auVar13[1];
      auVar5[2] = auVar14[1];
      auVar5[0] = auVar14[0];
      auVar5[1] = auVar13[0];
      *(undefined1 (*) [16])(param_1 + lVar3 * 2) = auVar5;
      puVar1 = (undefined1 *)(param_1 + 0x10 + lVar3 * 2);
      *puVar1 = auVar14[8];
      puVar1[1] = auVar13[8];
      puVar1[2] = auVar14[9];
      puVar1[3] = auVar13[9];
      puVar1[4] = auVar14[10];
      puVar1[5] = auVar13[10];
      puVar1[6] = auVar14[0xb];
      puVar1[7] = auVar13[0xb];
      puVar1[8] = auVar14[0xc];
      puVar1[9] = auVar13[0xc];
      puVar1[10] = auVar14[0xd];
      puVar1[0xb] = auVar13[0xd];
      puVar1[0xc] = auVar14[0xe];
      puVar1[0xd] = auVar13[0xe];
      puVar1[0xe] = auVar14[0xf];
      puVar1[0xf] = auVar13[0xf];
      lVar3 = lVar3 + 0x10;
    } while (lVar3 < (longlong)uVar4);
  }
  return;
}



// FUNCTION 1452f8f30 FUN_1452f8f30 body=139 status=ok
// SIG undefined FUN_1452f8f30(void)

undefined8 FUN_1452f8f30(longlong param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 uVar3;
  uint uVar4;
  ushort uVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined1 auVar24 [16];
  
  uVar23 = (longlong)(param_2 + 0xf) & 0xfffffffffffffff0;
  if (0 < (longlong)uVar23) {
    lVar22 = 0;
    do {
      pcVar1 = (char *)(lVar22 + param_1);
      cVar6 = pcVar1[1];
      cVar7 = pcVar1[2];
      cVar8 = pcVar1[3];
      cVar9 = pcVar1[4];
      cVar10 = pcVar1[5];
      cVar11 = pcVar1[6];
      cVar12 = pcVar1[7];
      cVar13 = pcVar1[8];
      cVar14 = pcVar1[9];
      cVar15 = pcVar1[10];
      cVar16 = pcVar1[0xb];
      cVar17 = pcVar1[0xc];
      cVar18 = pcVar1[0xd];
      cVar19 = pcVar1[0xe];
      cVar20 = pcVar1[0xf];
      auVar24[0] = -(*pcVar1 == '\0');
      auVar24[1] = -(cVar6 == '\0');
      auVar24[2] = -(cVar7 == '\0');
      auVar24[3] = -(cVar8 == '\0');
      auVar24[4] = -(cVar9 == '\0');
      auVar24[5] = -(cVar10 == '\0');
      auVar24[6] = -(cVar11 == '\0');
      auVar24[7] = -(cVar12 == '\0');
      auVar24[8] = -(cVar13 == '\0');
      auVar24[9] = -(cVar14 == '\0');
      auVar24[10] = -(cVar15 == '\0');
      auVar24[0xb] = -(cVar16 == '\0');
      auVar24[0xc] = -(cVar17 == '\0');
      auVar24[0xd] = -(cVar18 == '\0');
      auVar24[0xe] = -(cVar19 == '\0');
      auVar24[0xf] = -(cVar20 == '\0');
      uVar5 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[0xf] >> 7) << 0xf;
      uVar21 = (uint)uVar5;
      pcVar2 = (char *)(lVar22 + param_1);
      *pcVar2 = *pcVar1 + -8;
      pcVar2[1] = cVar6 + -8;
      pcVar2[2] = cVar7 + -8;
      pcVar2[3] = cVar8 + -8;
      pcVar2[4] = cVar9 + -8;
      pcVar2[5] = cVar10 + -8;
      pcVar2[6] = cVar11 + -8;
      pcVar2[7] = cVar12 + -8;
      pcVar2[8] = cVar13 + -8;
      pcVar2[9] = cVar14 + -8;
      pcVar2[10] = cVar15 + -8;
      pcVar2[0xb] = cVar16 + -8;
      pcVar2[0xc] = cVar17 + -8;
      pcVar2[0xd] = cVar18 + -8;
      pcVar2[0xe] = cVar19 + -8;
      pcVar2[0xf] = cVar20 + -8;
      if (uVar5 != 0) {
        do {
          uVar4 = 0;
          if (uVar21 != 0) {
            for (; (uVar21 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
            }
          }
          uVar21 = uVar21 & uVar21 - 1;
          uVar3 = *param_3;
          param_3 = param_3 + 1;
          *(undefined1 *)((ulonglong)uVar4 + lVar22 + param_1) = uVar3;
        } while (uVar21 != 0);
        if (param_4 < param_3) {
          return 0;
        }
      }
      lVar22 = lVar22 + 0x10;
    } while (lVar22 < (longlong)uVar23);
  }
  return 1;
}



// FUNCTION 1452f8fc0 FUN_1452f8fc0 body=84 status=ok
// SIG undefined FUN_1452f8fc0(void)

byte * FUN_1452f8fc0(byte *param_1,byte *param_2)

{
  uint uVar1;
  ushort uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  undefined1 auVar20 [16];
  
  do {
    if (param_2 <= param_1) {
      return param_1;
    }
    bVar3 = *param_1;
    bVar4 = param_1[1];
    bVar5 = param_1[2];
    bVar6 = param_1[3];
    bVar7 = param_1[4];
    bVar8 = param_1[5];
    bVar9 = param_1[6];
    bVar10 = param_1[7];
    bVar11 = param_1[8];
    bVar12 = param_1[9];
    bVar13 = param_1[10];
    bVar14 = param_1[0xb];
    bVar15 = param_1[0xc];
    bVar16 = param_1[0xd];
    bVar17 = param_1[0xe];
    bVar18 = param_1[0xf];
    param_1 = param_1 + 0x10;
    bVar19 = (bVar3 < (byte)'<') * '<' | (bVar3 >= (byte)'<') * bVar3;
    bVar21 = (bVar4 < (byte)'<') * '<' | (bVar4 >= (byte)'<') * bVar4;
    bVar22 = (bVar5 < (byte)'<') * '<' | (bVar5 >= (byte)'<') * bVar5;
    bVar23 = (bVar6 < (byte)'<') * '<' | (bVar6 >= (byte)'<') * bVar6;
    bVar24 = (bVar7 < (byte)'<') * '<' | (bVar7 >= (byte)'<') * bVar7;
    bVar25 = (bVar8 < (byte)'<') * '<' | (bVar8 >= (byte)'<') * bVar8;
    bVar26 = (bVar9 < (byte)'<') * '<' | (bVar9 >= (byte)'<') * bVar9;
    bVar27 = (bVar10 < (byte)'<') * '<' | (bVar10 >= (byte)'<') * bVar10;
    bVar28 = (bVar11 < (byte)'<') * '<' | (bVar11 >= (byte)'<') * bVar11;
    bVar29 = (bVar12 < (byte)'<') * '<' | (bVar12 >= (byte)'<') * bVar12;
    bVar30 = (bVar13 < (byte)'<') * '<' | (bVar13 >= (byte)'<') * bVar13;
    bVar31 = (bVar14 < (byte)'<') * '<' | (bVar14 >= (byte)'<') * bVar14;
    bVar32 = (bVar15 < (byte)'<') * '<' | (bVar15 >= (byte)'<') * bVar15;
    bVar33 = (bVar16 < (byte)'<') * '<' | (bVar16 >= (byte)'<') * bVar16;
    bVar34 = (bVar17 < (byte)'<') * '<' | (bVar17 >= (byte)'<') * bVar17;
    bVar35 = (bVar18 < (byte)'<') * '<' | (bVar18 >= (byte)'<') * bVar18;
    auVar20[0] = -((byte)((0xef < bVar19) * -0x11 | (0xef >= bVar19) * bVar19) == bVar3);
    auVar20[1] = -((byte)((0xef < bVar21) * -0x11 | (0xef >= bVar21) * bVar21) == bVar4);
    auVar20[2] = -((byte)((0xef < bVar22) * -0x11 | (0xef >= bVar22) * bVar22) == bVar5);
    auVar20[3] = -((byte)((0xef < bVar23) * -0x11 | (0xef >= bVar23) * bVar23) == bVar6);
    auVar20[4] = -((byte)((0xef < bVar24) * -0x11 | (0xef >= bVar24) * bVar24) == bVar7);
    auVar20[5] = -((byte)((0xef < bVar25) * -0x11 | (0xef >= bVar25) * bVar25) == bVar8);
    auVar20[6] = -((byte)((0xef < bVar26) * -0x11 | (0xef >= bVar26) * bVar26) == bVar9);
    auVar20[7] = -((byte)((0xef < bVar27) * -0x11 | (0xef >= bVar27) * bVar27) == bVar10);
    auVar20[8] = -((byte)((0xef < bVar28) * -0x11 | (0xef >= bVar28) * bVar28) == bVar11);
    auVar20[9] = -((byte)((0xef < bVar29) * -0x11 | (0xef >= bVar29) * bVar29) == bVar12);
    auVar20[10] = -((byte)((0xef < bVar30) * -0x11 | (0xef >= bVar30) * bVar30) == bVar13);
    auVar20[0xb] = -((byte)((0xef < bVar31) * -0x11 | (0xef >= bVar31) * bVar31) == bVar14);
    auVar20[0xc] = -((byte)((0xef < bVar32) * -0x11 | (0xef >= bVar32) * bVar32) == bVar15);
    auVar20[0xd] = -((byte)((0xef < bVar33) * -0x11 | (0xef >= bVar33) * bVar33) == bVar16);
    auVar20[0xe] = -((byte)((0xef < bVar34) * -0x11 | (0xef >= bVar34) * bVar34) == bVar17);
    auVar20[0xf] = -((byte)((0xef < bVar35) * -0x11 | (0xef >= bVar35) * bVar35) == bVar18);
    uVar2 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(auVar20[0xf] >> 7) << 0xf;
  } while (uVar2 == 0);
  uVar1 = 0;
  if (uVar2 != 0) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  return param_1 + ((ulonglong)uVar1 - 0x10);
}



// FUNCTION 1452f9020 FUN_1452f9020 body=320 status=ok
// SIG undefined FUN_1452f9020(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1452f9020(longlong param_1,longlong param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  ulonglong uVar19;
  longlong lVar20;
  float *pfVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar37;
  float fVar38;
  undefined1 auVar36 [16];
  undefined1 auVar39 [16];
  
  auVar36 = _DAT_1499357c0;
  lVar20 = 0;
  fVar4 = DAT_1499357c0._12_4_;
  lVar22 = (longlong)param_3;
  auVar39 = _DAT_1499314a0;
  if (0 < param_3) {
    pfVar21 = (float *)(param_2 + 0x20);
    lVar23 = lVar20;
    do {
      fVar5 = *pfVar21;
      fVar6 = pfVar21[1];
      uVar19 = *(ulonglong *)pfVar21;
      fVar7 = pfVar21[2];
      fVar8 = pfVar21[3];
      pfVar3 = pfVar21 + 4;
      fVar9 = *pfVar3;
      fVar10 = pfVar21[5];
      fVar11 = pfVar21[6];
      fVar12 = pfVar21[7];
      pfVar1 = pfVar21 + -8;
      pfVar13 = pfVar21 + -7;
      pfVar14 = pfVar21 + -6;
      pfVar15 = pfVar21 + -5;
      pfVar2 = pfVar21 + -4;
      pfVar16 = pfVar21 + -3;
      pfVar17 = pfVar21 + -2;
      pfVar18 = pfVar21 + -1;
      pfVar21 = pfVar21 + 0x10;
      auVar25._0_8_ = *(ulonglong *)pfVar3 & 0x7fffffff7fffffff;
      auVar25._8_4_ = ABS(fVar11);
      auVar25._12_4_ = ABS(fVar12);
      fVar35 = auVar36._0_4_;
      fVar37 = auVar36._4_4_;
      fVar38 = auVar36._8_4_;
      auVar28._0_8_ = *(ulonglong *)pfVar2 & 0x7fffffff7fffffff;
      auVar28._8_4_ = ABS(*pfVar17);
      auVar28._12_4_ = ABS(*pfVar18);
      auVar32._0_8_ = uVar19 & 0x7fffffff7fffffff;
      auVar32._8_4_ = ABS(fVar7);
      auVar32._12_4_ = ABS(fVar8);
      auVar33 = maxps(auVar32,auVar25);
      auVar24._0_8_ = *(ulonglong *)pfVar1 & 0x7fffffff7fffffff;
      auVar24._8_4_ = ABS(*pfVar14);
      auVar24._12_4_ = ABS(*pfVar15);
      auVar25 = maxps(auVar24,auVar28);
      auVar29._0_4_ = (int)(*pfVar1 * fVar35);
      auVar29._4_4_ = (int)(*pfVar13 * fVar37);
      auVar29._8_4_ = (int)(*pfVar14 * fVar38);
      auVar29._12_4_ = (int)(*pfVar15 * fVar4);
      auVar25 = maxps(auVar25,auVar33);
      auVar39 = maxps(auVar39,auVar25);
      auVar33._0_4_ = (int)(*pfVar2 * fVar35);
      auVar33._4_4_ = (int)(*pfVar16 * fVar37);
      auVar33._8_4_ = (int)(*pfVar17 * fVar38);
      auVar33._12_4_ = (int)(*pfVar18 * fVar4);
      auVar25 = packssdw(auVar29,auVar33);
      *(undefined1 (*) [16])(param_1 + lVar23 * 2) = auVar25;
      auVar30._0_4_ = (int)(fVar5 * fVar35);
      auVar30._4_4_ = (int)(fVar6 * fVar37);
      auVar30._8_4_ = (int)(fVar7 * fVar38);
      auVar30._12_4_ = (int)(fVar8 * fVar4);
      auVar26._0_4_ = (int)(fVar9 * fVar35);
      auVar26._4_4_ = (int)(fVar10 * fVar37);
      auVar26._8_4_ = (int)(fVar11 * fVar38);
      auVar26._12_4_ = (int)(fVar12 * fVar4);
      auVar25 = packssdw(auVar30,auVar26);
      *(undefined1 (*) [16])(param_1 + 0x10 + lVar23 * 2) = auVar25;
      lVar23 = lVar23 + 0x10;
    } while (lVar23 < lVar22);
  }
  auVar27._0_8_ = auVar39._8_8_;
  auVar27._8_4_ = auVar39._0_4_;
  auVar27._12_4_ = auVar39._4_4_;
  auVar25 = maxps(auVar39,auVar27);
  auVar39._4_4_ = auVar25._0_4_;
  auVar39._0_4_ = auVar25._4_4_;
  auVar39._8_4_ = auVar25._12_4_;
  auVar39._12_4_ = auVar25._8_4_;
  auVar39 = maxps(auVar25,auVar39);
  if ((1.0 < auVar39._0_4_) && (auVar36 = divps(auVar36,auVar39), 0 < lVar22)) {
    do {
      pfVar21 = (float *)(param_2 + lVar20 * 4);
      pfVar3 = (float *)(param_2 + 0x10 + lVar20 * 4);
      auVar34._0_4_ = (int)(*pfVar21 * auVar36._0_4_);
      auVar34._4_4_ = (int)(pfVar21[1] * auVar36._4_4_);
      auVar34._8_4_ = (int)(pfVar21[2] * auVar36._8_4_);
      auVar34._12_4_ = (int)(pfVar21[3] * auVar36._12_4_);
      auVar31._0_4_ = (int)(*pfVar3 * auVar36._0_4_);
      auVar31._4_4_ = (int)(pfVar3[1] * auVar36._4_4_);
      auVar31._8_4_ = (int)(pfVar3[2] * auVar36._8_4_);
      auVar31._12_4_ = (int)(pfVar3[3] * auVar36._12_4_);
      auVar39 = packssdw(auVar34,auVar31);
      *(undefined1 (*) [16])(param_1 + lVar20 * 2) = auVar39;
      lVar20 = lVar20 + 8;
    } while (lVar20 < lVar22);
  }
  return;
}



// FUNCTION 1452f9160 FUN_1452f9160 body=1328 status=ok
// SIG undefined FUN_1452f9160(void)

void FUN_1452f9160(longlong param_1,longlong param_2,int param_3,longlong param_4,longlong param_5)

{
  undefined4 uVar1;
  ushort uVar2;
  uint uVar3;
  undefined1 (*pauVar4) [16];
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ushort *puVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int *piVar15;
  int iVar16;
  float *pfVar17;
  undefined1 (*pauVar18) [16];
  undefined4 *puVar19;
  longlong lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 in_XMM1 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  int iVar36;
  int iVar37;
  undefined1 in_XMM2 [16];
  undefined1 auVar35 [16];
  int iVar38;
  float fVar42;
  float fVar43;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar44;
  undefined1 auVar41 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  
  iVar13 = 0xc;
  iVar16 = 0xc;
  if (0xf < param_3) {
    pfVar17 = (float *)(param_1 + 0x30);
    iVar12 = 0xf;
    pauVar4 = (undefined1 (*) [16])(param_2 + 0x30);
    pauVar18 = (undefined1 (*) [16])(param_5 + 0x18);
    do {
      if (*(int *)((param_4 - param_2) + 0xc + (longlong)pauVar4) != 2) break;
      auVar39 = *pauVar18;
      iVar13 = iVar13 + 8;
      pauVar18 = pauVar18 + 1;
      auVar22 = *pauVar4;
      iVar16 = iVar16 + 4;
      iVar12 = iVar12 + 4;
      pauVar4 = pauVar4 + 1;
      auVar21 = pmaddwd(auVar39,auVar39);
      auVar45._0_4_ = (float)auVar21._0_4_;
      auVar45._4_4_ = (float)auVar21._4_4_;
      auVar45._8_4_ = (float)auVar21._8_4_;
      auVar45._12_4_ = (float)auVar21._12_4_;
      auVar30 = sqrtps(in_XMM1,auVar45);
      auVar21 = pmovsxwd(auVar45,auVar39);
      auVar45 = divps(auVar22,auVar30);
      auVar22._0_8_ = auVar39._8_8_;
      auVar22._8_4_ = auVar39._0_4_;
      auVar22._12_4_ = auVar39._4_4_;
      fVar29 = auVar45._0_4_;
      fVar42 = auVar45._4_4_;
      fVar43 = auVar45._8_4_;
      fVar44 = auVar45._12_4_;
      auVar39._4_4_ = fVar29;
      auVar39._0_4_ = fVar29;
      auVar39._8_4_ = fVar42;
      auVar39._12_4_ = fVar42;
      in_XMM1 = pmovsxwd(auVar39,auVar22);
      *pfVar17 = (float)auVar21._0_4_ * fVar29;
      pfVar17[1] = (float)auVar21._4_4_ * fVar29;
      pfVar17[2] = (float)auVar21._8_4_ * fVar42;
      pfVar17[3] = (float)auVar21._12_4_ * fVar42;
      in_XMM2._4_4_ = fVar43;
      in_XMM2._0_4_ = fVar43;
      in_XMM2._8_4_ = fVar44;
      in_XMM2._12_4_ = fVar44;
      auVar21._0_4_ = (float)in_XMM1._0_4_ * fVar43;
      auVar21._4_4_ = (float)in_XMM1._4_4_ * fVar43;
      auVar21._8_4_ = (float)in_XMM1._8_4_ * fVar44;
      auVar21._12_4_ = (float)in_XMM1._12_4_ * fVar44;
      *(undefined1 (*) [16])(pfVar17 + 4) = auVar21;
      pfVar17 = pfVar17 + 8;
    } while (iVar12 < param_3);
  }
  iVar12 = iVar16 + 1;
  if (iVar12 < param_3) {
    pauVar4 = (undefined1 (*) [16])(param_2 + (longlong)iVar16 * 4);
    pauVar18 = (undefined1 (*) [16])((longlong)iVar13 * 4 + param_1);
    do {
      if (*(int *)((param_4 - param_2) + 4 + (longlong)pauVar4) != 2) break;
      auVar39 = *pauVar4;
      lVar5 = (longlong)iVar13;
      iVar16 = iVar16 + 2;
      iVar13 = iVar13 + 4;
      iVar12 = iVar12 + 2;
      pauVar4 = (undefined1 (*) [16])(*pauVar4 + 8);
      auVar35._8_8_ = 0;
      auVar35._0_8_ = *(ulonglong *)(param_5 + lVar5 * 2);
      auVar22 = pmaddwd(auVar35,auVar35);
      auVar30._0_4_ = (float)auVar22._0_4_;
      auVar30._4_4_ = (float)auVar22._4_4_;
      auVar30._8_4_ = (float)auVar22._8_4_;
      auVar30._12_4_ = (float)auVar22._12_4_;
      auVar21 = sqrtps(in_XMM1,auVar30);
      auVar22 = pmovsxwd(auVar30,auVar35);
      auVar39 = divps(auVar39,auVar21);
      fVar29 = auVar39._0_4_;
      fVar42 = auVar39._4_4_;
      in_XMM1._4_4_ = fVar29;
      in_XMM1._0_4_ = fVar29;
      in_XMM1._8_4_ = fVar42;
      in_XMM1._12_4_ = fVar42;
      in_XMM2._0_4_ = (float)auVar22._0_4_ * fVar29;
      in_XMM2._4_4_ = (float)auVar22._4_4_ * fVar29;
      in_XMM2._8_4_ = (float)auVar22._8_4_ * fVar42;
      in_XMM2._12_4_ = (float)auVar22._12_4_ * fVar42;
      *pauVar18 = in_XMM2;
      pauVar18 = pauVar18 + 1;
    } while (iVar12 < param_3);
  }
  if (iVar16 < param_3) {
    piVar15 = (int *)(param_4 + (longlong)iVar16 * 4);
    do {
      iVar12 = *piVar15;
      if (4 < iVar12) {
        piVar15 = (int *)(param_4 + (longlong)iVar16 * 4);
        goto LAB_1452f9310;
      }
      lVar8 = (longlong)iVar13;
      iVar13 = iVar13 + iVar12;
      piVar15 = piVar15 + 1;
      auVar46._8_8_ = 0;
      auVar46._0_8_ = *(ulonglong *)(param_5 + lVar8 * 2);
      auVar46 = auVar46 & *(undefined1 (*) [16])(&DAT_14c7329a0 + (longlong)iVar12 * 0x10);
      lVar5 = (longlong)iVar16;
      auVar39 = pmaddwd(auVar46,auVar46);
      iVar16 = iVar16 + 1;
      auVar23._0_4_ = (float)(auVar39._4_4_ + auVar39._0_4_);
      auVar23._4_4_ = (float)(auVar39._0_4_ + auVar39._4_4_);
      auVar23._8_4_ = (float)(auVar39._12_4_ + auVar39._8_4_);
      auVar23._12_4_ = (float)(auVar39._8_4_ + auVar39._12_4_);
      auVar22 = sqrtps(in_XMM2,auVar23);
      auVar39 = pmovsxwd(auVar23,auVar46);
      auVar22 = divps(ZEXT416(*(uint *)(param_2 + lVar5 * 4)),auVar22);
      in_XMM1._0_4_ = auVar22._0_4_;
      in_XMM1._4_4_ = in_XMM1._0_4_;
      in_XMM1._8_4_ = in_XMM1._0_4_;
      in_XMM1._12_4_ = in_XMM1._0_4_;
      in_XMM2._0_4_ = (float)auVar39._0_4_ * in_XMM1._0_4_;
      in_XMM2._4_4_ = (float)auVar39._4_4_ * in_XMM1._0_4_;
      in_XMM2._8_4_ = (float)auVar39._8_4_ * in_XMM1._0_4_;
      in_XMM2._12_4_ = (float)auVar39._12_4_ * in_XMM1._0_4_;
      *(undefined1 (*) [16])(param_1 + lVar8 * 4) = in_XMM2;
    } while (iVar16 < param_3);
  }
  goto LAB_1452f9475;
  while( true ) {
    lVar8 = (longlong)iVar13;
    iVar13 = iVar13 + iVar12;
    piVar15 = piVar15 + 1;
    auVar21 = *(undefined1 (*) [16])(&DAT_14c7329a0 + (longlong)iVar12 * 0x10) &
              *(undefined1 (*) [16])(param_5 + lVar8 * 2);
    lVar5 = (longlong)iVar16;
    iVar16 = iVar16 + 1;
    auVar39 = pmaddwd(auVar21,auVar21);
    iVar12 = auVar39._4_4_ + auVar39._0_4_;
    iVar36 = auVar39._0_4_ + auVar39._4_4_;
    iVar37 = auVar39._12_4_ + auVar39._8_4_;
    iVar38 = auVar39._8_4_ + auVar39._12_4_;
    auVar24._0_4_ = (float)(iVar37 + iVar12);
    auVar24._4_4_ = (float)(iVar38 + iVar36);
    auVar24._8_4_ = (float)(iVar12 + iVar37);
    auVar24._12_4_ = (float)(iVar36 + iVar38);
    auVar22 = sqrtps(in_XMM2,auVar24);
    auVar39 = pmovsxwd(auVar24,auVar21);
    auVar22 = divps(ZEXT416(*(uint *)(param_2 + lVar5 * 4)),auVar22);
    fVar29 = auVar22._0_4_;
    auVar25._0_8_ = auVar21._8_8_;
    auVar25._8_4_ = auVar21._0_4_;
    auVar25._12_4_ = auVar21._4_4_;
    auVar31._0_4_ = (float)auVar39._0_4_ * fVar29;
    auVar31._4_4_ = (float)auVar39._4_4_ * fVar29;
    auVar31._8_4_ = (float)auVar39._8_4_ * fVar29;
    auVar31._12_4_ = (float)auVar39._12_4_ * fVar29;
    *(undefined1 (*) [16])(param_1 + lVar8 * 4) = auVar31;
    in_XMM1 = pmovsxwd(auVar31,auVar25);
    in_XMM2._0_4_ = (float)in_XMM1._0_4_ * fVar29;
    in_XMM2._4_4_ = (float)in_XMM1._4_4_ * fVar29;
    in_XMM2._8_4_ = (float)in_XMM1._8_4_ * fVar29;
    in_XMM2._12_4_ = (float)in_XMM1._12_4_ * fVar29;
    *(undefined1 (*) [16])(param_1 + 0x10 + lVar8 * 4) = in_XMM2;
    if (param_3 <= iVar16) break;
LAB_1452f9310:
    iVar12 = *piVar15;
    if (8 < iVar12) {
      puVar19 = (undefined4 *)(param_2 + (longlong)iVar16 * 4);
      goto LAB_1452f93b0;
    }
  }
  goto LAB_1452f9475;
  while( true ) {
    uVar1 = *puVar19;
    lVar5 = (longlong)iVar13;
    auVar40._4_4_ = uVar1;
    auVar40._0_4_ = uVar1;
    auVar40._8_4_ = uVar1;
    auVar40._12_4_ = uVar1;
    iVar13 = iVar13 + iVar12;
    iVar16 = iVar16 + 1;
    puVar19 = puVar19 + 1;
    auVar39 = *(undefined1 (*) [16])(param_5 + lVar5 * 2);
    auVar45 = *(undefined1 (*) [16])(&DAT_14c7329a0 + ((longlong)iVar12 + -8) * 0x10) &
              *(undefined1 (*) [16])(param_5 + 0x10 + lVar5 * 2);
    auVar22 = pmaddwd(auVar39,auVar39);
    auVar21 = pmaddwd(auVar45,auVar45);
    iVar12 = auVar21._0_4_ + auVar22._0_4_;
    iVar36 = auVar21._4_4_ + auVar22._4_4_;
    iVar37 = auVar21._8_4_ + auVar22._8_4_;
    iVar38 = auVar21._12_4_ + auVar22._12_4_;
    auVar32._0_4_ = iVar36 + iVar12;
    auVar32._4_4_ = iVar12 + iVar36;
    auVar32._8_4_ = iVar38 + iVar37;
    auVar32._12_4_ = iVar37 + iVar38;
    auVar26._0_4_ = (float)(auVar32._8_4_ + auVar32._0_4_);
    auVar26._4_4_ = (float)(auVar32._12_4_ + auVar32._4_4_);
    auVar26._8_4_ = (float)(auVar32._0_4_ + auVar32._8_4_);
    auVar26._12_4_ = (float)(auVar32._4_4_ + auVar32._12_4_);
    auVar21 = sqrtps(auVar32,auVar26);
    auVar22 = pmovsxwd(auVar26,auVar39);
    auVar21 = divps(auVar40,auVar21);
    auVar27._0_8_ = auVar39._8_8_;
    auVar27._8_4_ = auVar39._0_4_;
    auVar27._12_4_ = auVar39._4_4_;
    fVar29 = auVar21._0_4_;
    auVar33._0_4_ = (float)auVar22._0_4_ * fVar29;
    fVar42 = auVar21._4_4_;
    auVar33._4_4_ = (float)auVar22._4_4_ * fVar42;
    fVar43 = auVar21._8_4_;
    auVar33._8_4_ = (float)auVar22._8_4_ * fVar43;
    fVar44 = auVar21._12_4_;
    auVar33._12_4_ = (float)auVar22._12_4_ * fVar44;
    *(undefined1 (*) [16])(param_1 + lVar5 * 4) = auVar33;
    auVar22 = pmovsxwd(auVar33,auVar27);
    auVar39 = pmovsxwd(auVar27,auVar45);
    auVar28._0_8_ = auVar45._8_8_;
    auVar28._8_4_ = auVar45._0_4_;
    auVar28._12_4_ = auVar45._4_4_;
    auVar34._0_4_ = (float)auVar39._0_4_ * fVar29;
    auVar34._4_4_ = (float)auVar39._4_4_ * fVar42;
    auVar34._8_4_ = (float)auVar39._8_4_ * fVar43;
    auVar34._12_4_ = (float)auVar39._12_4_ * fVar44;
    pfVar17 = (float *)(param_1 + 0x10 + lVar5 * 4);
    *pfVar17 = (float)auVar22._0_4_ * fVar29;
    pfVar17[1] = (float)auVar22._4_4_ * fVar42;
    pfVar17[2] = (float)auVar22._8_4_ * fVar43;
    pfVar17[3] = (float)auVar22._12_4_ * fVar44;
    *(undefined1 (*) [16])(param_1 + 0x20 + lVar5 * 4) = auVar34;
    in_XMM1 = pmovsxwd(auVar34,auVar28);
    pfVar17 = (float *)(param_1 + 0x30 + lVar5 * 4);
    *pfVar17 = (float)in_XMM1._0_4_ * fVar29;
    pfVar17[1] = (float)in_XMM1._4_4_ * fVar42;
    pfVar17[2] = (float)in_XMM1._8_4_ * fVar43;
    pfVar17[3] = (float)in_XMM1._12_4_ * fVar44;
    if (param_3 <= iVar16) break;
LAB_1452f93b0:
    iVar12 = *(int *)((longlong)puVar19 + (param_4 - param_2));
    if (7 < iVar12 - 9U) break;
  }
LAB_1452f9475:
  lVar5 = (longlong)iVar16;
  if (lVar5 < param_3) {
    lVar8 = param_3 - lVar5;
    pfVar17 = (float *)(param_2 + lVar5 * 4);
    do {
      uVar3 = *(uint *)((longlong)pfVar17 + (param_4 - param_2));
      lVar5 = (longlong)(int)uVar3;
      iVar12 = 0;
      iVar16 = 0;
      lVar20 = (longlong)iVar13;
      if (((0 < (int)uVar3) && (7 < uVar3)) && (1 < DAT_14c707900)) {
        iVar12 = 0;
        iVar36 = 0;
        iVar37 = 0;
        iVar38 = 0;
        uVar7 = uVar3 & 0x80000007;
        if ((int)uVar7 < 0) {
          uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
        }
        lVar9 = 0;
        puVar6 = (undefined8 *)(param_5 + lVar20 * 2);
        auVar39 = ZEXT816(0);
        do {
          auVar22 = pmovzxwd(in_XMM1,*puVar6);
          auVar22 = pmulld(auVar22,auVar22);
          auVar41._0_4_ = auVar39._0_4_ + auVar22._0_4_;
          auVar41._4_4_ = auVar39._4_4_ + auVar22._4_4_;
          auVar41._8_4_ = auVar39._8_4_ + auVar22._8_4_;
          auVar41._12_4_ = auVar39._12_4_ + auVar22._12_4_;
          iVar16 = iVar16 + 8;
          lVar9 = lVar9 + 8;
          auVar39 = pmovzxwd(auVar22,puVar6[1]);
          puVar6 = puVar6 + 2;
          in_XMM1 = pmulld(auVar39,auVar39);
          iVar12 = iVar12 + in_XMM1._0_4_;
          iVar36 = iVar36 + in_XMM1._4_4_;
          iVar37 = iVar37 + in_XMM1._8_4_;
          iVar38 = iVar38 + in_XMM1._12_4_;
          auVar39 = auVar41;
        } while (lVar9 < (int)(uVar3 - uVar7));
        iVar12 = iVar12 + auVar41._0_4_ + iVar37 + auVar41._8_4_ +
                 iVar36 + auVar41._4_4_ + iVar38 + auVar41._12_4_;
      }
      lVar9 = (longlong)iVar16;
      if (lVar9 < lVar5) {
        puVar10 = (ushort *)(param_5 + (lVar9 + lVar20) * 2);
        lVar9 = lVar5 - lVar9;
        do {
          uVar2 = *puVar10;
          puVar10 = puVar10 + 1;
          iVar12 = iVar12 + (uint)uVar2 * (uint)uVar2;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      fVar29 = (float)iVar12;
      in_XMM1 = ZEXT416((uint)fVar29);
      if (fVar29 < 0.0) {
        fVar29 = sqrtf(fVar29);
      }
      else {
        fVar29 = SQRT(fVar29);
      }
      lVar9 = 0;
      fVar29 = *pfVar17 / fVar29;
      if (3 < lVar5) {
        lVar14 = (lVar5 - 4U >> 2) + 1;
        lVar9 = lVar14 * 4;
        pfVar11 = (float *)(param_1 + 8 + lVar20 * 4);
        puVar10 = (ushort *)(param_5 + 4 + lVar20 * 2);
        do {
          pfVar11[-2] = (float)puVar10[-2] * fVar29;
          pfVar11[-1] = (float)puVar10[-1] * fVar29;
          *pfVar11 = (float)*puVar10 * fVar29;
          in_XMM1 = ZEXT416((uint)((float)puVar10[1] * fVar29));
          pfVar11[1] = (float)puVar10[1] * fVar29;
          lVar14 = lVar14 + -1;
          pfVar11 = pfVar11 + 4;
          puVar10 = puVar10 + 4;
        } while (lVar14 != 0);
      }
      if (lVar9 < lVar5) {
        puVar10 = (ushort *)(param_5 + (lVar20 + lVar9) * 2);
        lVar5 = lVar5 - lVar9;
        pfVar11 = (float *)((lVar20 + lVar9) * 4 + param_1);
        do {
          uVar2 = *puVar10;
          puVar10 = puVar10 + 1;
          *pfVar11 = (float)uVar2 * fVar29;
          lVar5 = lVar5 + -1;
          pfVar11 = pfVar11 + 1;
        } while (lVar5 != 0);
      }
      iVar13 = iVar13 + uVar3;
      pfVar17 = pfVar17 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 1452f9690 FUN_1452f9690 body=705 status=ok
// SIG undefined FUN_1452f9690(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1452f9690(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float *pfVar4;
  undefined1 (*pauVar5) [16];
  longlong lVar6;
  int iVar7;
  float *pfVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  int iVar21;
  int iVar22;
  undefined1 in_XMM1 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  int iVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  auVar3 = _DAT_149931c40;
  iVar10 = 0;
  pfVar4 = (float *)(param_3 + 8);
  iVar7 = 0x10;
  lVar6 = 2;
  pauVar5 = (undefined1 (*) [16])(param_1 + 0x50);
  do {
    auVar24._8_8_ = 0;
    auVar24._0_8_ = *(ulonglong *)(iVar10 + param_2);
    auVar16 = pabsb(in_XMM1,auVar24);
    auVar16 = pmaddubsw(auVar16,auVar16);
    auVar17 = pmaddwd(auVar16,auVar3);
    auVar16._0_4_ = auVar17._4_4_ + auVar17._0_4_;
    auVar16._4_4_ = auVar17._0_4_ + auVar17._4_4_;
    auVar16._8_4_ = auVar17._12_4_ + auVar17._8_4_;
    auVar16._12_4_ = auVar17._8_4_ + auVar17._12_4_;
    auVar17 = pmovsxbd(auVar16,auVar24);
    auVar25._0_8_ = *(ulonglong *)(iVar10 + param_2) >> 0x20;
    auVar25._8_8_ = 0;
    fVar15 = pfVar4[-2] / SQRT((float)auVar16._0_4_);
    auVar16 = pmovsxbd(auVar17,auVar25);
    *(float *)pauVar5[-5] = (float)auVar17._0_4_ * fVar15;
    *(float *)(pauVar5[-5] + 4) = (float)auVar17._4_4_ * fVar15;
    *(float *)(pauVar5[-5] + 8) = (float)auVar17._8_4_ * fVar15;
    *(float *)(pauVar5[-5] + 0xc) = (float)auVar17._12_4_ * fVar15;
    auVar18._0_4_ = (float)auVar16._0_4_ * fVar15;
    auVar18._4_4_ = (float)auVar16._4_4_ * fVar15;
    auVar18._8_4_ = (float)auVar16._8_4_ * fVar15;
    auVar18._12_4_ = (float)auVar16._12_4_ * fVar15;
    pauVar5[-4] = auVar18;
    uVar9 = *(ulonglong *)((iVar7 + -8) + param_2);
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar9;
    auVar16 = pabsb(auVar18,auVar26);
    auVar16 = pmaddubsw(auVar16,auVar16);
    auVar16 = pmaddwd(auVar16,auVar3);
    auVar17._0_4_ = auVar16._4_4_ + auVar16._0_4_;
    auVar17._4_4_ = auVar16._0_4_ + auVar16._4_4_;
    auVar17._8_4_ = auVar16._12_4_ + auVar16._8_4_;
    auVar17._12_4_ = auVar16._8_4_ + auVar16._12_4_;
    auVar16 = pmovsxbd(auVar17,auVar26);
    auVar27._0_8_ = uVar9 >> 0x20;
    auVar27._8_8_ = 0;
    fVar15 = pfVar4[-1] / SQRT((float)auVar17._0_4_);
    auVar17 = pmovsxbd(auVar16,auVar27);
    *(float *)pauVar5[-3] = (float)auVar16._0_4_ * fVar15;
    *(float *)(pauVar5[-3] + 4) = (float)auVar16._4_4_ * fVar15;
    *(float *)(pauVar5[-3] + 8) = (float)auVar16._8_4_ * fVar15;
    *(float *)(pauVar5[-3] + 0xc) = (float)auVar16._12_4_ * fVar15;
    auVar19._0_4_ = (float)auVar17._0_4_ * fVar15;
    auVar19._4_4_ = (float)auVar17._4_4_ * fVar15;
    auVar19._8_4_ = (float)auVar17._8_4_ * fVar15;
    auVar19._12_4_ = (float)auVar17._12_4_ * fVar15;
    pauVar5[-2] = auVar19;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = *(ulonglong *)(iVar7 + param_2);
    auVar16 = pabsb(auVar19,auVar28);
    auVar16 = pmaddubsw(auVar16,auVar16);
    auVar16 = pmaddwd(auVar16,auVar3);
    auVar13._0_4_ = auVar16._4_4_ + auVar16._0_4_;
    auVar13._4_4_ = auVar16._0_4_ + auVar16._4_4_;
    auVar13._8_4_ = auVar16._12_4_ + auVar16._8_4_;
    auVar13._12_4_ = auVar16._8_4_ + auVar16._12_4_;
    auVar16 = pmovsxbd(auVar13,auVar28);
    auVar29._0_8_ = *(ulonglong *)(iVar7 + param_2) >> 0x20;
    auVar29._8_8_ = 0;
    fVar15 = *pfVar4 / SQRT((float)auVar13._0_4_);
    auVar17 = pmovsxbd(auVar16,auVar29);
    *(float *)pauVar5[-1] = (float)auVar16._0_4_ * fVar15;
    *(float *)(pauVar5[-1] + 4) = (float)auVar16._4_4_ * fVar15;
    *(float *)(pauVar5[-1] + 8) = (float)auVar16._8_4_ * fVar15;
    *(float *)(pauVar5[-1] + 0xc) = (float)auVar16._12_4_ * fVar15;
    auVar20._0_4_ = (float)auVar17._0_4_ * fVar15;
    auVar20._4_4_ = (float)auVar17._4_4_ * fVar15;
    auVar20._8_4_ = (float)auVar17._8_4_ * fVar15;
    auVar20._12_4_ = (float)auVar17._12_4_ * fVar15;
    *pauVar5 = auVar20;
    uVar9 = *(ulonglong *)((iVar7 + 8) + param_2);
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar9;
    auVar16 = pabsb(auVar20,auVar30);
    auVar16 = pmaddubsw(auVar16,auVar16);
    auVar16 = pmaddwd(auVar16,auVar3);
    auVar14._0_4_ = auVar16._4_4_ + auVar16._0_4_;
    auVar14._4_4_ = auVar16._0_4_ + auVar16._4_4_;
    auVar14._8_4_ = auVar16._12_4_ + auVar16._8_4_;
    auVar14._12_4_ = auVar16._8_4_ + auVar16._12_4_;
    auVar16 = pmovsxbd(auVar14,auVar30);
    fVar15 = pfVar4[1] / SQRT((float)auVar14._0_4_);
    *(float *)pauVar5[1] = (float)auVar16._0_4_ * fVar15;
    *(float *)(pauVar5[1] + 4) = (float)auVar16._4_4_ * fVar15;
    *(float *)(pauVar5[1] + 8) = (float)auVar16._8_4_ * fVar15;
    *(float *)(pauVar5[1] + 0xc) = (float)auVar16._12_4_ * fVar15;
    auVar31._0_8_ = uVar9 >> 0x20;
    auVar31._8_8_ = 0;
    auVar16 = pmovsxbd(auVar16,auVar31);
    iVar10 = iVar10 + 0x20;
    pfVar4 = pfVar4 + 4;
    iVar7 = iVar7 + 0x20;
    in_XMM1._0_4_ = (float)auVar16._0_4_ * fVar15;
    in_XMM1._4_4_ = (float)auVar16._4_4_ * fVar15;
    in_XMM1._8_4_ = (float)auVar16._8_4_ * fVar15;
    in_XMM1._12_4_ = (float)auVar16._12_4_ * fVar15;
    pauVar5[2] = in_XMM1;
    lVar6 = lVar6 + -1;
    pauVar5 = pauVar5 + 8;
  } while (lVar6 != 0);
  if (8 < param_4) {
    lVar6 = (longlong)iVar10;
    pauVar5 = (undefined1 (*) [16])(param_2 + lVar6);
    uVar9 = (ulonglong)(param_4 - 8U);
    iVar10 = iVar10 + (param_4 - 8U) * 0x10;
    pfVar4 = (float *)(param_1 + (lVar6 + 4) * 4);
    pfVar8 = (float *)(param_3 + 0x20);
    do {
      auVar17 = *pauVar5;
      pauVar5 = pauVar5 + 1;
      auVar16 = pabsb(auVar16,auVar17);
      auVar16 = pmaddubsw(auVar16,auVar16);
      auVar16 = pmaddwd(auVar16,auVar3);
      iVar7 = auVar16._4_4_ + auVar16._0_4_;
      iVar21 = auVar16._0_4_ + auVar16._4_4_;
      iVar22 = auVar16._12_4_ + auVar16._8_4_;
      iVar23 = auVar16._8_4_ + auVar16._12_4_;
      auVar11._0_4_ = iVar22 + iVar7;
      auVar11._4_4_ = iVar23 + iVar21;
      auVar11._8_4_ = iVar7 + iVar22;
      auVar11._12_4_ = iVar21 + iVar23;
      auVar16 = pmovsxbd(auVar11,auVar17);
      fVar15 = *pfVar8 / SQRT((float)auVar11._0_4_);
      auVar12._0_8_ = auVar17._0_8_ >> 0x20;
      auVar12._8_8_ = auVar17._8_8_ >> 0x20;
      auVar13 = pmovsxbd(auVar12,auVar12);
      pfVar4[-4] = (float)auVar16._0_4_ * fVar15;
      pfVar4[-3] = (float)auVar16._4_4_ * fVar15;
      pfVar4[-2] = (float)auVar16._8_4_ * fVar15;
      pfVar4[-1] = (float)auVar16._12_4_ * fVar15;
      auVar1._8_4_ = auVar17._0_4_;
      auVar1._0_8_ = auVar17._8_8_;
      auVar1._12_4_ = auVar17._4_4_;
      auVar14 = pmovsxbd(auVar13,auVar1);
      *pfVar4 = (float)auVar13._0_4_ * fVar15;
      pfVar4[1] = (float)auVar13._4_4_ * fVar15;
      pfVar4[2] = (float)auVar13._8_4_ * fVar15;
      pfVar4[3] = (float)auVar13._12_4_ * fVar15;
      auVar2._4_4_ = 0;
      auVar2._0_4_ = auVar17._12_4_;
      auVar2._8_4_ = auVar17._4_4_;
      auVar2._12_4_ = 0;
      auVar16 = pmovsxbd(auVar14,auVar2);
      pfVar4[4] = (float)auVar14._0_4_ * fVar15;
      pfVar4[5] = (float)auVar14._4_4_ * fVar15;
      pfVar4[6] = (float)auVar14._8_4_ * fVar15;
      pfVar4[7] = (float)auVar14._12_4_ * fVar15;
      pfVar4[8] = (float)auVar16._0_4_ * fVar15;
      pfVar4[9] = (float)auVar16._4_4_ * fVar15;
      pfVar4[10] = (float)auVar16._8_4_ * fVar15;
      pfVar4[0xb] = (float)auVar16._12_4_ * fVar15;
      uVar9 = uVar9 - 1;
      pfVar4 = pfVar4 + 0x10;
      pfVar8 = pfVar8 + 1;
    } while (uVar9 != 0);
  }
  memset((void *)(param_1 + (longlong)iVar10 * 4),0,(longlong)((0x400 - iVar10) * 4));
  return;
}



// FUNCTION 1452f9960 FUN_1452f9960 body=1290 status=ok
// SIG undefined FUN_1452f9960(void)

/* WARNING: Removing unreachable block (ram,0x0001452f9d6d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1452f9960(float *param_1,undefined4 *param_2,float *param_3,int param_4,longlong param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  ulonglong uVar4;
  char cVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  longlong lVar9;
  float *pfVar10;
  char *pcVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  float *pfVar15;
  uint uVar16;
  ulonglong uVar17;
  int *piVar18;
  undefined1 (*pauVar19) [16];
  longlong lVar20;
  undefined1 in_XMM0 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  int iVar27;
  int iVar32;
  int iVar33;
  undefined1 in_XMM1 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  int iVar34;
  undefined1 auVar35 [16];
  float fVar38;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar39;
  undefined4 uVar40;
  float fVar41;
  
  auVar8 = _DAT_149931c40;
  auVar28 = pmovsxbd(in_XMM1,*param_2);
  fVar26 = param_3[1];
  fVar41 = param_3[2];
  fVar38 = param_3[3];
  uVar17 = 0xc;
  *param_1 = (float)auVar28._0_4_ * *param_3;
  param_1[1] = (float)auVar28._4_4_ * fVar26;
  param_1[2] = (float)auVar28._8_4_ * fVar41;
  param_1[3] = (float)auVar28._12_4_ * fVar38;
  uVar4 = *(ulonglong *)(param_2 + 1);
  auVar35._8_8_ = 0;
  auVar35._0_8_ = uVar4;
  uVar13 = 8;
  auVar28 = pmovsxbw(in_XMM0,auVar35);
  auVar28 = pmaddwd(auVar28,auVar28);
  auVar30._0_4_ = (float)auVar28._0_4_ + 1e-20;
  auVar30._4_4_ = (float)auVar28._4_4_ + 1e-20;
  auVar30._8_4_ = (float)auVar28._8_4_ + 1e-20;
  auVar30._12_4_ = (float)auVar28._12_4_ + 1e-20;
  auVar28 = sqrtps(auVar30,auVar30);
  auVar36 = divps(*(undefined1 (*) [16])(param_3 + 4),auVar28);
  auVar28 = pmovsxbd(auVar28,auVar35);
  auVar37._4_4_ = (int)uVar4;
  auVar37._0_4_ = (int)(uVar4 >> 0x20);
  auVar37._8_8_ = 0;
  fVar26 = auVar36._0_4_;
  fVar41 = auVar36._4_4_;
  auVar29._4_4_ = fVar26;
  auVar29._0_4_ = fVar26;
  auVar29._8_4_ = fVar41;
  auVar29._12_4_ = fVar41;
  auVar30 = pmovsxbd(auVar29,auVar37);
  param_1[4] = (float)auVar28._0_4_ * fVar26;
  param_1[5] = (float)auVar28._4_4_ * fVar26;
  param_1[6] = (float)auVar28._8_4_ * fVar41;
  param_1[7] = (float)auVar28._12_4_ * fVar41;
  param_1[8] = (float)auVar30._0_4_ * auVar36._8_4_;
  param_1[9] = (float)auVar30._4_4_ * auVar36._8_4_;
  param_1[10] = (float)auVar30._8_4_ * auVar36._12_4_;
  param_1[0xb] = (float)auVar30._12_4_ * auVar36._12_4_;
  auVar28 = *(undefined1 (*) [16])(param_2 + 3);
  auVar30 = pabsb(auVar37,auVar28);
  auVar30 = pmaddubsw(auVar30,auVar30);
  auVar30 = pmaddwd(auVar30,auVar8);
  auVar36._0_4_ = (float)auVar30._0_4_ + 1e-20;
  auVar36._4_4_ = (float)auVar30._4_4_ + 1e-20;
  auVar36._8_4_ = (float)auVar30._8_4_ + 1e-20;
  auVar36._12_4_ = (float)auVar30._12_4_ + 1e-20;
  auVar30 = sqrtps(auVar36,auVar36);
  auVar37 = divps(*(undefined1 (*) [16])(param_3 + 8),auVar30);
  auVar30 = pmovsxbd(auVar30,auVar28);
  fVar26 = auVar37._0_4_;
  fVar41 = auVar37._4_4_;
  fVar38 = auVar37._8_4_;
  fVar39 = auVar37._12_4_;
  auVar31._4_4_ = fVar26;
  auVar31._0_4_ = fVar26;
  auVar31._8_4_ = fVar26;
  auVar31._12_4_ = fVar26;
  uVar40 = auVar28._0_4_;
  auVar21._0_12_ = auVar28._4_12_;
  auVar21._12_4_ = uVar40;
  auVar37 = pmovsxbd(auVar31,auVar21);
  param_1[0xc] = (float)auVar30._0_4_ * fVar26;
  param_1[0xd] = (float)auVar30._4_4_ * fVar26;
  param_1[0xe] = (float)auVar30._8_4_ * fVar26;
  param_1[0xf] = (float)auVar30._12_4_ * fVar26;
  auVar22._0_8_ = auVar28._8_8_;
  auVar22._8_4_ = uVar40;
  auVar22._12_4_ = auVar28._4_4_;
  auVar30 = pmovsxbd(auVar37,auVar22);
  param_1[0x10] = (float)auVar37._0_4_ * fVar41;
  param_1[0x11] = (float)auVar37._4_4_ * fVar41;
  param_1[0x12] = (float)auVar37._8_4_ * fVar41;
  param_1[0x13] = (float)auVar37._12_4_ * fVar41;
  auVar25._4_4_ = uVar40;
  auVar25._0_4_ = auVar28._12_4_;
  auVar25._8_4_ = auVar28._4_4_;
  auVar25._12_4_ = auVar28._8_4_;
  auVar28 = pmovsxbd(auVar30,auVar25);
  param_1[0x14] = (float)auVar30._0_4_ * fVar38;
  param_1[0x15] = (float)auVar30._4_4_ * fVar38;
  param_1[0x16] = (float)auVar30._8_4_ * fVar38;
  param_1[0x17] = (float)auVar30._12_4_ * fVar38;
  param_1[0x18] = (float)auVar28._0_4_ * fVar39;
  param_1[0x19] = (float)auVar28._4_4_ * fVar39;
  param_1[0x1a] = (float)auVar28._8_4_ * fVar39;
  param_1[0x1b] = (float)auVar28._12_4_ * fVar39;
  if (*(int *)(param_5 + 0x20) == 4) {
    fVar41 = (float)(int)*(char *)(param_2 + 7);
    fVar26 = fVar41 * fVar41 + 0.0 +
             (float)(int)*(char *)((longlong)param_2 + 0x1d) *
             (float)(int)*(char *)((longlong)param_2 + 0x1d) +
             (float)(int)*(char *)((longlong)param_2 + 0x1e) *
             (float)(int)*(char *)((longlong)param_2 + 0x1e) +
             (float)(int)*(char *)((longlong)param_2 + 0x1f) *
             (float)(int)*(char *)((longlong)param_2 + 0x1f);
    if (fVar26 < 0.0) {
      fVar26 = sqrtf(fVar26);
    }
    else {
      fVar26 = SQRT(fVar26);
    }
    uVar17 = 0x20;
    fVar26 = param_3[0xc] / fVar26;
    uVar13 = 0xd;
    param_1[0x1c] = fVar41 * fVar26;
    param_1[0x1d] = (float)(int)*(char *)((longlong)param_2 + 0x1d) * fVar26;
    param_1[0x1e] = (float)(int)*(char *)((longlong)param_2 + 0x1e) * fVar26;
    fVar26 = (float)(int)*(char *)((longlong)param_2 + 0x1f) * fVar26;
    auVar25 = ZEXT416((uint)fVar26);
    param_1[0x1f] = fVar26;
  }
  piVar18 = (int *)(param_5 + uVar13 * 4);
  if (*(int *)(param_5 + uVar13 * 4) == 0x10) {
    pfVar10 = param_1 + uVar17 + 4;
    pauVar19 = (undefined1 (*) [16])(uVar17 + (longlong)param_2);
    do {
      auVar28 = *pauVar19;
      iVar12 = (int)uVar13;
      piVar18 = piVar18 + 1;
      uVar17 = (ulonglong)((int)uVar17 + 0x10);
      pauVar19 = pauVar19 + 1;
      auVar30 = pabsb(auVar25,auVar28);
      uVar13 = (ulonglong)(iVar12 + 1);
      auVar30 = pmaddubsw(auVar30,auVar30);
      auVar30 = pmaddwd(auVar30,auVar8);
      iVar27 = auVar30._4_4_ + auVar30._0_4_;
      iVar32 = auVar30._0_4_ + auVar30._4_4_;
      iVar33 = auVar30._12_4_ + auVar30._8_4_;
      iVar34 = auVar30._8_4_ + auVar30._12_4_;
      auVar23._0_4_ = iVar33 + iVar27;
      auVar23._4_4_ = iVar34 + iVar32;
      auVar23._8_4_ = iVar27 + iVar33;
      auVar23._12_4_ = iVar32 + iVar34;
      auVar30 = pmovsxbd(auVar23,auVar28);
      fVar26 = param_3[iVar12] / SQRT((float)auVar23._0_4_ + 1e-20);
      auVar24._0_8_ = auVar28._0_8_ >> 0x20;
      auVar24._8_8_ = auVar28._8_8_ >> 0x20;
      auVar37 = pmovsxbd(auVar24,auVar24);
      pfVar10[-4] = (float)auVar30._0_4_ * fVar26;
      pfVar10[-3] = (float)auVar30._4_4_ * fVar26;
      pfVar10[-2] = (float)auVar30._8_4_ * fVar26;
      pfVar10[-1] = (float)auVar30._12_4_ * fVar26;
      auVar6._8_4_ = auVar28._0_4_;
      auVar6._0_8_ = auVar28._8_8_;
      auVar6._12_4_ = auVar28._4_4_;
      auVar30 = pmovsxbd(auVar37,auVar6);
      *pfVar10 = (float)auVar37._0_4_ * fVar26;
      pfVar10[1] = (float)auVar37._4_4_ * fVar26;
      pfVar10[2] = (float)auVar37._8_4_ * fVar26;
      pfVar10[3] = (float)auVar37._12_4_ * fVar26;
      auVar7._4_4_ = 0;
      auVar7._0_4_ = auVar28._12_4_;
      auVar7._8_4_ = auVar28._4_4_;
      auVar7._12_4_ = 0;
      auVar25 = pmovsxbd(auVar30,auVar7);
      pfVar10[4] = (float)auVar30._0_4_ * fVar26;
      pfVar10[5] = (float)auVar30._4_4_ * fVar26;
      pfVar10[6] = (float)auVar30._8_4_ * fVar26;
      pfVar10[7] = (float)auVar30._12_4_ * fVar26;
      auVar28._0_4_ = (float)auVar25._0_4_ * fVar26;
      auVar28._4_4_ = (float)auVar25._4_4_ * fVar26;
      auVar28._8_4_ = (float)auVar25._8_4_ * fVar26;
      auVar28._12_4_ = (float)auVar25._12_4_ * fVar26;
      *(undefined1 (*) [16])(pfVar10 + 8) = auVar28;
      pfVar10 = pfVar10 + 0x10;
    } while (*piVar18 == 0x10);
  }
  uVar16 = (uint)uVar17;
  lVar9 = (longlong)(int)uVar13;
  if (lVar9 < param_4) {
    pfVar10 = param_3 + lVar9;
    lVar9 = param_4 - lVar9;
    do {
      iVar12 = *(int *)((param_5 - (longlong)param_3) + (longlong)pfVar10);
      fVar26 = 1e-20;
      lVar20 = (longlong)(int)uVar17;
      if (iVar12 < 1) {
        fVar26 = *pfVar10 / 1e-10;
        if (0 < iVar12) goto LAB_1452f9d8e;
      }
      else {
        lVar14 = ((longlong)iVar12 - 1U >> 2) + 1;
        pcVar11 = (char *)((longlong)param_2 + lVar20 + 2);
        do {
          pcVar1 = pcVar11 + -2;
          pcVar2 = pcVar11 + -1;
          cVar5 = *pcVar11;
          pcVar3 = pcVar11 + 1;
          pcVar11 = pcVar11 + 4;
          fVar26 = fVar26 + (float)(int)*pcVar1 * (float)(int)*pcVar1 +
                   (float)(int)*pcVar2 * (float)(int)*pcVar2 + (float)(int)cVar5 * (float)(int)cVar5
                   + (float)(int)*pcVar3 * (float)(int)*pcVar3;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        if (fVar26 < 0.0) {
          fVar26 = sqrtf(fVar26);
          fVar26 = *pfVar10 / fVar26;
        }
        else {
          fVar26 = *pfVar10 / SQRT(fVar26);
        }
LAB_1452f9d8e:
        lVar14 = ((longlong)iVar12 - 1U >> 2) + 1;
        pcVar11 = (char *)((longlong)param_2 + lVar20 + 2);
        pfVar15 = param_1 + lVar20 + 2;
        do {
          pfVar15[-2] = (float)(int)pcVar11[-2] * fVar26;
          pfVar15[-1] = (float)(int)pcVar11[-1] * fVar26;
          *pfVar15 = (float)(int)*pcVar11 * fVar26;
          pfVar15[1] = (float)(int)pcVar11[1] * fVar26;
          lVar14 = lVar14 + -1;
          pcVar11 = pcVar11 + 4;
          pfVar15 = pfVar15 + 4;
        } while (lVar14 != 0);
      }
      uVar16 = (int)uVar17 + iVar12;
      uVar17 = (ulonglong)uVar16;
      pfVar10 = pfVar10 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  memset(param_1 + (int)uVar16,0,(longlong)(int)((0x80 - uVar16) * 4));
  return;
}



// FUNCTION 1452f9e70 FUN_1452f9e70 body=507 status=ok
// SIG undefined FUN_1452f9e70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1452f9e70(longlong *param_1,undefined1 (*param_2) [16],int param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 (*pauVar4) [16];
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  auVar3 = _DAT_149d35e60;
  auVar2 = _DAT_149d35e30;
  auVar15 = _DAT_149d35e20;
  auVar1 = _DAT_149a23d40;
  auVar14 = *param_2;
  if (*param_1 == 0) {
    auVar6._0_2_ = auVar14._0_2_ >> 4;
    auVar6._2_2_ = auVar14._2_2_ >> 4;
    auVar6._4_2_ = auVar14._4_2_ >> 4;
    auVar6._6_2_ = auVar14._6_2_ >> 4;
    auVar6._8_2_ = auVar14._8_2_ >> 4;
    auVar6._10_2_ = auVar14._10_2_ >> 4;
    auVar6._12_2_ = auVar14._12_2_ >> 4;
    auVar6._14_2_ = auVar14._14_2_ >> 4;
    auVar6 = pshufb(_DAT_149d35e30,auVar6 & _DAT_149a23d40);
    auVar13 = pmulld(auVar14,_DAT_149d35e20);
    *param_1 = auVar6._0_8_;
    auVar14._0_4_ = auVar13._0_4_ + 0x2aa01d31;
    auVar14._4_4_ = auVar13._4_4_ + 0x2aa01d31;
    auVar14._8_4_ = auVar13._8_4_;
    auVar14._12_4_ = auVar13._12_4_;
  }
  if (param_1[1] == 0) {
    auVar13._0_2_ = auVar14._0_2_ >> 4;
    auVar13._2_2_ = auVar14._2_2_ >> 4;
    auVar13._4_2_ = auVar14._4_2_ >> 4;
    auVar13._6_2_ = auVar14._6_2_ >> 4;
    auVar13._8_2_ = auVar14._8_2_ >> 4;
    auVar13._10_2_ = auVar14._10_2_ >> 4;
    auVar13._12_2_ = auVar14._12_2_ >> 4;
    auVar13._14_2_ = auVar14._14_2_ >> 4;
    auVar6 = pshufb(auVar2,auVar13 & auVar1);
    auVar13 = pmulld(auVar14,auVar15);
    param_1[1] = auVar6._0_8_;
    auVar14._0_4_ = auVar13._0_4_ + 0x2aa01d31;
    auVar14._4_4_ = auVar13._4_4_ + 0x2aa01d31;
    auVar14._8_4_ = auVar13._8_4_;
    auVar14._12_4_ = auVar13._12_4_;
  }
  if (param_1[2] == 0) {
    auVar7._0_2_ = auVar14._0_2_ >> 4;
    auVar7._2_2_ = auVar14._2_2_ >> 4;
    auVar7._4_2_ = auVar14._4_2_ >> 4;
    auVar7._6_2_ = auVar14._6_2_ >> 4;
    auVar7._8_2_ = auVar14._8_2_ >> 4;
    auVar7._10_2_ = auVar14._10_2_ >> 4;
    auVar7._12_2_ = auVar14._12_2_ >> 4;
    auVar7._14_2_ = auVar14._14_2_ >> 4;
    auVar6 = pshufb(auVar2,auVar7 & auVar1);
    auVar13 = pmulld(auVar14,auVar15);
    param_1[2] = auVar6._0_8_;
    auVar14._0_4_ = auVar13._0_4_ + 0x2aa01d31;
    auVar14._4_4_ = auVar13._4_4_ + 0x2aa01d31;
    auVar14._8_4_ = auVar13._8_4_;
    auVar14._12_4_ = auVar13._12_4_;
  }
  if (param_1[3] == 0) {
    auVar8._0_2_ = auVar14._0_2_ >> 4;
    auVar8._2_2_ = auVar14._2_2_ >> 4;
    auVar8._4_2_ = auVar14._4_2_ >> 4;
    auVar8._6_2_ = auVar14._6_2_ >> 4;
    auVar8._8_2_ = auVar14._8_2_ >> 4;
    auVar8._10_2_ = auVar14._10_2_ >> 4;
    auVar8._12_2_ = auVar14._12_2_ >> 4;
    auVar8._14_2_ = auVar14._14_2_ >> 4;
    auVar6 = pshufb(auVar2,auVar8 & auVar1);
    auVar13 = pmulld(auVar14,auVar15);
    param_1[3] = auVar6._0_8_;
    auVar14._0_4_ = auVar13._0_4_ + 0x2aa01d31;
    auVar14._4_4_ = auVar13._4_4_ + 0x2aa01d31;
    auVar14._8_4_ = auVar13._8_4_;
    auVar14._12_4_ = auVar13._12_4_;
  }
  if (param_1[4] == 0) {
    auVar9._0_2_ = auVar14._0_2_ >> 4;
    auVar9._2_2_ = auVar14._2_2_ >> 4;
    auVar9._4_2_ = auVar14._4_2_ >> 4;
    auVar9._6_2_ = auVar14._6_2_ >> 4;
    auVar9._8_2_ = auVar14._8_2_ >> 4;
    auVar9._10_2_ = auVar14._10_2_ >> 4;
    auVar9._12_2_ = auVar14._12_2_ >> 4;
    auVar9._14_2_ = auVar14._14_2_ >> 4;
    auVar6 = pshufb(auVar2,auVar9 & auVar1);
    auVar13 = pmulld(auVar14,auVar15);
    param_1[4] = auVar6._0_8_;
    auVar14._0_4_ = auVar13._0_4_ + 0x2aa01d31;
    auVar14._4_4_ = auVar13._4_4_ + 0x2aa01d31;
    auVar14._8_4_ = auVar13._8_4_;
    auVar14._12_4_ = auVar13._12_4_;
  }
  if (param_1[5] == 0) {
    auVar10._0_2_ = auVar14._0_2_ >> 4;
    auVar10._2_2_ = auVar14._2_2_ >> 4;
    auVar10._4_2_ = auVar14._4_2_ >> 4;
    auVar10._6_2_ = auVar14._6_2_ >> 4;
    auVar10._8_2_ = auVar14._8_2_ >> 4;
    auVar10._10_2_ = auVar14._10_2_ >> 4;
    auVar10._12_2_ = auVar14._12_2_ >> 4;
    auVar10._14_2_ = auVar14._14_2_ >> 4;
    auVar6 = pshufb(auVar2,auVar10 & auVar1);
    auVar13 = pmulld(auVar14,auVar15);
    param_1[5] = auVar6._0_8_;
    auVar14._0_4_ = auVar13._0_4_ + 0x2aa01d31;
    auVar14._4_4_ = auVar13._4_4_ + 0x2aa01d31;
    auVar14._8_4_ = auVar13._8_4_;
    auVar14._12_4_ = auVar13._12_4_;
  }
  if (param_1[6] == 0) {
    auVar11._0_2_ = auVar14._0_2_ >> 4;
    auVar11._2_2_ = auVar14._2_2_ >> 4;
    auVar11._4_2_ = auVar14._4_2_ >> 4;
    auVar11._6_2_ = auVar14._6_2_ >> 4;
    auVar11._8_2_ = auVar14._8_2_ >> 4;
    auVar11._10_2_ = auVar14._10_2_ >> 4;
    auVar11._12_2_ = auVar14._12_2_ >> 4;
    auVar11._14_2_ = auVar14._14_2_ >> 4;
    auVar6 = pshufb(auVar2,auVar11 & auVar1);
    auVar13 = pmulld(auVar14,auVar15);
    param_1[6] = auVar6._0_8_;
    auVar14._0_4_ = auVar13._0_4_ + 0x2aa01d31;
    auVar14._4_4_ = auVar13._4_4_ + 0x2aa01d31;
    auVar14._8_4_ = auVar13._8_4_;
    auVar14._12_4_ = auVar13._12_4_;
  }
  if (param_1[7] == 0) {
    auVar12._0_2_ = auVar14._0_2_ >> 4;
    auVar12._2_2_ = auVar14._2_2_ >> 4;
    auVar12._4_2_ = auVar14._4_2_ >> 4;
    auVar12._6_2_ = auVar14._6_2_ >> 4;
    auVar12._8_2_ = auVar14._8_2_ >> 4;
    auVar12._10_2_ = auVar14._10_2_ >> 4;
    auVar12._12_2_ = auVar14._12_2_ >> 4;
    auVar12._14_2_ = auVar14._14_2_ >> 4;
    auVar6 = pshufb(auVar2,auVar12 & auVar1);
    auVar15 = pmulld(auVar14,auVar15);
    param_1[7] = auVar6._0_8_;
    auVar14._0_4_ = auVar15._0_4_ + 0x2aa01d31;
    auVar14._4_4_ = auVar15._4_4_ + 0x2aa01d31;
    auVar14._8_4_ = auVar15._8_4_;
    auVar14._12_4_ = auVar15._12_4_;
  }
  if (8 < param_3) {
    pauVar4 = (undefined1 (*) [16])(param_1 + 8);
    uVar5 = (ulonglong)(param_3 - 8);
    do {
      if (*(longlong *)((longlong)*pauVar4 + 8) == 0 && *(longlong *)*pauVar4 == 0) {
        auVar15._0_2_ = auVar14._0_2_ >> 4;
        auVar15._2_2_ = auVar14._2_2_ >> 4;
        auVar15._4_2_ = auVar14._4_2_ >> 4;
        auVar15._6_2_ = auVar14._6_2_ >> 4;
        auVar15._8_2_ = auVar14._8_2_ >> 4;
        auVar15._10_2_ = auVar14._10_2_ >> 4;
        auVar15._12_2_ = auVar14._12_2_ >> 4;
        auVar15._14_2_ = auVar14._14_2_ >> 4;
        auVar15 = pshufb(auVar2,auVar15 & auVar1);
        auVar6 = pmulld(auVar14,auVar3);
        *pauVar4 = auVar15;
        auVar14._0_4_ = auVar6._0_4_ + 0x2aa01d31;
        auVar14._4_4_ = auVar6._4_4_ + 0x2aa01d31;
        auVar14._8_4_ = auVar6._8_4_ + 0x2aa01d31;
        auVar14._12_4_ = auVar6._12_4_ + 0x2aa01d31;
      }
      pauVar4 = pauVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 1452fa070 FUN_1452fa070 body=1032 status=ok
// SIG undefined FUN_1452fa070(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1452fa070(longlong param_1,longlong param_2,longlong param_3,int param_4,
                  undefined1 (*param_5) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 (*pauVar6) [16];
  float *pfVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  float *pfVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  int iVar28;
  int iVar29;
  undefined1 in_XMM1 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  int iVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  
  auVar5 = _DAT_149d35e30;
  auVar41 = _DAT_149d35e20;
  auVar4 = _DAT_149a23d40;
  auVar3 = _DAT_149931c40;
  iVar10 = 0;
  plVar11 = (longlong *)(param_2 + 0x10);
  pfVar12 = (float *)(param_3 + 8);
  iVar8 = 0x10;
  lVar9 = 2;
  pauVar6 = (undefined1 (*) [16])(param_1 + 0x50);
  auVar32 = *param_5;
  do {
    auVar33._8_8_ = 0;
    auVar33._0_8_ = *(ulonglong *)(iVar10 + param_2);
    if (plVar11[-2] == 0) {
      auVar24._0_2_ = auVar32._0_2_ >> 4;
      auVar24._2_2_ = auVar32._2_2_ >> 4;
      auVar24._4_2_ = auVar32._4_2_ >> 4;
      auVar24._6_2_ = auVar32._6_2_ >> 4;
      auVar24._8_2_ = auVar32._8_2_ >> 4;
      auVar24._10_2_ = auVar32._10_2_ >> 4;
      auVar24._12_2_ = auVar32._12_2_ >> 4;
      auVar24._14_2_ = auVar32._14_2_ >> 4;
      auVar31 = pmulld(auVar32,auVar41);
      auVar33 = pshufb(auVar5,auVar24 & auVar4);
      auVar32._0_4_ = auVar31._0_4_ + 0x2aa01d31;
      auVar32._4_4_ = auVar31._4_4_ + 0x2aa01d31;
      auVar32._8_4_ = auVar31._8_4_;
      auVar32._12_4_ = auVar31._12_4_;
    }
    auVar24 = pabsb(in_XMM1,auVar33);
    auVar24 = pmaddubsw(auVar24,auVar24);
    auVar24 = pmaddwd(auVar24,auVar3);
    auVar31._0_4_ = auVar24._4_4_ + auVar24._0_4_;
    auVar31._4_4_ = auVar24._0_4_ + auVar24._4_4_;
    auVar31._8_4_ = auVar24._12_4_ + auVar24._8_4_;
    auVar31._12_4_ = auVar24._8_4_ + auVar24._12_4_;
    auVar24 = pmovsxbd(auVar31,auVar33);
    auVar34._0_8_ = auVar33._0_8_ >> 0x20;
    auVar34._8_8_ = auVar33._8_8_ >> 0x20;
    fVar23 = pfVar12[-2] / SQRT((float)auVar31._0_4_);
    auVar33 = pmovsxbd(auVar24,auVar34);
    *(float *)pauVar6[-5] = (float)auVar24._0_4_ * fVar23;
    *(float *)(pauVar6[-5] + 4) = (float)auVar24._4_4_ * fVar23;
    *(float *)(pauVar6[-5] + 8) = (float)auVar24._8_4_ * fVar23;
    *(float *)(pauVar6[-5] + 0xc) = (float)auVar24._12_4_ * fVar23;
    auVar25._0_4_ = (float)auVar33._0_4_ * fVar23;
    auVar25._4_4_ = (float)auVar33._4_4_ * fVar23;
    auVar25._8_4_ = (float)auVar33._8_4_ * fVar23;
    auVar25._12_4_ = (float)auVar33._12_4_ * fVar23;
    pauVar6[-4] = auVar25;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = *(ulonglong *)((iVar8 + -8) + param_2);
    if (plVar11[-1] == 0) {
      auVar14._0_2_ = auVar32._0_2_ >> 4;
      auVar14._2_2_ = auVar32._2_2_ >> 4;
      auVar14._4_2_ = auVar32._4_2_ >> 4;
      auVar14._6_2_ = auVar32._6_2_ >> 4;
      auVar14._8_2_ = auVar32._8_2_ >> 4;
      auVar14._10_2_ = auVar32._10_2_ >> 4;
      auVar14._12_2_ = auVar32._12_2_ >> 4;
      auVar14._14_2_ = auVar32._14_2_ >> 4;
      auVar33 = pmulld(auVar32,auVar41);
      auVar35 = pshufb(auVar5,auVar14 & auVar4);
      auVar32._0_4_ = auVar33._0_4_ + 0x2aa01d31;
      auVar32._4_4_ = auVar33._4_4_ + 0x2aa01d31;
      auVar32._8_4_ = auVar33._8_4_;
      auVar32._12_4_ = auVar33._12_4_;
    }
    auVar33 = pabsb(auVar25,auVar35);
    auVar33 = pmaddubsw(auVar33,auVar33);
    auVar33 = pmaddwd(auVar33,auVar3);
    auVar15._0_4_ = auVar33._4_4_ + auVar33._0_4_;
    auVar15._4_4_ = auVar33._0_4_ + auVar33._4_4_;
    auVar15._8_4_ = auVar33._12_4_ + auVar33._8_4_;
    auVar15._12_4_ = auVar33._8_4_ + auVar33._12_4_;
    auVar33 = pmovsxbd(auVar15,auVar35);
    auVar36._0_8_ = auVar35._0_8_ >> 0x20;
    auVar36._8_8_ = auVar35._8_8_ >> 0x20;
    fVar23 = pfVar12[-1] / SQRT((float)auVar15._0_4_);
    auVar24 = pmovsxbd(auVar33,auVar36);
    *(float *)pauVar6[-3] = (float)auVar33._0_4_ * fVar23;
    *(float *)(pauVar6[-3] + 4) = (float)auVar33._4_4_ * fVar23;
    *(float *)(pauVar6[-3] + 8) = (float)auVar33._8_4_ * fVar23;
    *(float *)(pauVar6[-3] + 0xc) = (float)auVar33._12_4_ * fVar23;
    auVar26._0_4_ = (float)auVar24._0_4_ * fVar23;
    auVar26._4_4_ = (float)auVar24._4_4_ * fVar23;
    auVar26._8_4_ = (float)auVar24._8_4_ * fVar23;
    auVar26._12_4_ = (float)auVar24._12_4_ * fVar23;
    pauVar6[-2] = auVar26;
    auVar37._8_8_ = 0;
    auVar37._0_8_ = *(ulonglong *)(iVar8 + param_2);
    if (*plVar11 == 0) {
      auVar16._0_2_ = auVar32._0_2_ >> 4;
      auVar16._2_2_ = auVar32._2_2_ >> 4;
      auVar16._4_2_ = auVar32._4_2_ >> 4;
      auVar16._6_2_ = auVar32._6_2_ >> 4;
      auVar16._8_2_ = auVar32._8_2_ >> 4;
      auVar16._10_2_ = auVar32._10_2_ >> 4;
      auVar16._12_2_ = auVar32._12_2_ >> 4;
      auVar16._14_2_ = auVar32._14_2_ >> 4;
      auVar33 = pmulld(auVar32,auVar41);
      auVar37 = pshufb(auVar5,auVar16 & auVar4);
      auVar32._0_4_ = auVar33._0_4_ + 0x2aa01d31;
      auVar32._4_4_ = auVar33._4_4_ + 0x2aa01d31;
      auVar32._8_4_ = auVar33._8_4_;
      auVar32._12_4_ = auVar33._12_4_;
    }
    auVar33 = pabsb(auVar26,auVar37);
    auVar33 = pmaddubsw(auVar33,auVar33);
    auVar33 = pmaddwd(auVar33,auVar3);
    auVar17._0_4_ = auVar33._4_4_ + auVar33._0_4_;
    auVar17._4_4_ = auVar33._0_4_ + auVar33._4_4_;
    auVar17._8_4_ = auVar33._12_4_ + auVar33._8_4_;
    auVar17._12_4_ = auVar33._8_4_ + auVar33._12_4_;
    auVar33 = pmovsxbd(auVar17,auVar37);
    auVar38._0_8_ = auVar37._0_8_ >> 0x20;
    auVar38._8_8_ = auVar37._8_8_ >> 0x20;
    fVar23 = *pfVar12 / SQRT((float)auVar17._0_4_);
    auVar24 = pmovsxbd(auVar33,auVar38);
    *(float *)pauVar6[-1] = (float)auVar33._0_4_ * fVar23;
    *(float *)(pauVar6[-1] + 4) = (float)auVar33._4_4_ * fVar23;
    *(float *)(pauVar6[-1] + 8) = (float)auVar33._8_4_ * fVar23;
    *(float *)(pauVar6[-1] + 0xc) = (float)auVar33._12_4_ * fVar23;
    auVar27._0_4_ = (float)auVar24._0_4_ * fVar23;
    auVar27._4_4_ = (float)auVar24._4_4_ * fVar23;
    auVar27._8_4_ = (float)auVar24._8_4_ * fVar23;
    auVar27._12_4_ = (float)auVar24._12_4_ * fVar23;
    *pauVar6 = auVar27;
    auVar39._8_8_ = 0;
    auVar39._0_8_ = *(ulonglong *)((iVar8 + 8) + param_2);
    if (plVar11[1] == 0) {
      auVar18._0_2_ = auVar32._0_2_ >> 4;
      auVar18._2_2_ = auVar32._2_2_ >> 4;
      auVar18._4_2_ = auVar32._4_2_ >> 4;
      auVar18._6_2_ = auVar32._6_2_ >> 4;
      auVar18._8_2_ = auVar32._8_2_ >> 4;
      auVar18._10_2_ = auVar32._10_2_ >> 4;
      auVar18._12_2_ = auVar32._12_2_ >> 4;
      auVar18._14_2_ = auVar32._14_2_ >> 4;
      auVar33 = pmulld(auVar32,auVar41);
      auVar39 = pshufb(auVar5,auVar18 & auVar4);
      auVar32._0_4_ = auVar33._0_4_ + 0x2aa01d31;
      auVar32._4_4_ = auVar33._4_4_ + 0x2aa01d31;
      auVar32._8_4_ = auVar33._8_4_;
      auVar32._12_4_ = auVar33._12_4_;
    }
    auVar33 = pabsb(auVar27,auVar39);
    iVar10 = iVar10 + 0x20;
    auVar33 = pmaddubsw(auVar33,auVar33);
    iVar8 = iVar8 + 0x20;
    plVar11 = plVar11 + 4;
    auVar33 = pmaddwd(auVar33,auVar3);
    auVar19._0_4_ = auVar33._4_4_ + auVar33._0_4_;
    auVar19._4_4_ = auVar33._0_4_ + auVar33._4_4_;
    auVar19._8_4_ = auVar33._12_4_ + auVar33._8_4_;
    auVar19._12_4_ = auVar33._8_4_ + auVar33._12_4_;
    pfVar7 = pfVar12 + 1;
    pfVar12 = pfVar12 + 4;
    auVar33 = pmovsxbd(auVar19,auVar39);
    auVar40._0_8_ = auVar39._0_8_ >> 0x20;
    auVar40._8_8_ = auVar39._8_8_ >> 0x20;
    fVar23 = *pfVar7 / SQRT((float)auVar19._0_4_);
    auVar20 = pmovsxbd(auVar33,auVar40);
    *(float *)pauVar6[1] = (float)auVar33._0_4_ * fVar23;
    *(float *)(pauVar6[1] + 4) = (float)auVar33._4_4_ * fVar23;
    *(float *)(pauVar6[1] + 8) = (float)auVar33._8_4_ * fVar23;
    *(float *)(pauVar6[1] + 0xc) = (float)auVar33._12_4_ * fVar23;
    in_XMM1._0_4_ = (float)auVar20._0_4_ * fVar23;
    in_XMM1._4_4_ = (float)auVar20._4_4_ * fVar23;
    in_XMM1._8_4_ = (float)auVar20._8_4_ * fVar23;
    in_XMM1._12_4_ = (float)auVar20._12_4_ * fVar23;
    pauVar6[2] = in_XMM1;
    auVar33 = _DAT_149d35e60;
    pauVar6 = pauVar6 + 8;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  if (8 < param_4) {
    pfVar12 = (float *)(param_3 + 0x20);
    pauVar6 = (undefined1 (*) [16])(iVar10 + param_2);
    pfVar7 = (float *)(param_1 + 0x10 + (longlong)iVar10 * 4);
    uVar13 = (ulonglong)(param_4 - 8U);
    iVar10 = iVar10 + (param_4 - 8U) * 0x10;
    do {
      auVar41 = *pauVar6;
      if (*(longlong *)(*pauVar6 + 8) == 0 && *(longlong *)*pauVar6 == 0) {
        auVar20._0_2_ = auVar32._0_2_ >> 4;
        auVar20._2_2_ = auVar32._2_2_ >> 4;
        auVar20._4_2_ = auVar32._4_2_ >> 4;
        auVar20._6_2_ = auVar32._6_2_ >> 4;
        auVar20._8_2_ = auVar32._8_2_ >> 4;
        auVar20._10_2_ = auVar32._10_2_ >> 4;
        auVar20._12_2_ = auVar32._12_2_ >> 4;
        auVar20._14_2_ = auVar32._14_2_ >> 4;
        auVar20 = auVar20 & auVar4;
        auVar24 = pmulld(auVar32,auVar33);
        auVar41 = pshufb(auVar5,auVar20);
        auVar32._0_4_ = auVar24._0_4_ + 0x2aa01d31;
        auVar32._4_4_ = auVar24._4_4_ + 0x2aa01d31;
        auVar32._8_4_ = auVar24._8_4_ + 0x2aa01d31;
        auVar32._12_4_ = auVar24._12_4_ + 0x2aa01d31;
      }
      auVar24 = pabsb(auVar20,auVar41);
      pauVar6 = pauVar6 + 1;
      auVar24 = pmaddubsw(auVar24,auVar24);
      auVar24 = pmaddwd(auVar24,auVar3);
      iVar8 = auVar24._4_4_ + auVar24._0_4_;
      iVar28 = auVar24._0_4_ + auVar24._4_4_;
      iVar29 = auVar24._12_4_ + auVar24._8_4_;
      iVar30 = auVar24._8_4_ + auVar24._12_4_;
      auVar21._0_4_ = iVar29 + iVar8;
      auVar21._4_4_ = iVar30 + iVar28;
      auVar21._8_4_ = iVar8 + iVar29;
      auVar21._12_4_ = iVar28 + iVar30;
      fVar23 = *pfVar12;
      pfVar12 = pfVar12 + 1;
      auVar24 = pmovsxbd(auVar21,auVar41);
      fVar23 = fVar23 / SQRT((float)auVar21._0_4_);
      auVar22._0_8_ = auVar41._0_8_ >> 0x20;
      auVar22._8_8_ = auVar41._8_8_ >> 0x20;
      auVar31 = pmovsxbd(auVar22,auVar22);
      pfVar7[-4] = (float)auVar24._0_4_ * fVar23;
      pfVar7[-3] = (float)auVar24._4_4_ * fVar23;
      pfVar7[-2] = (float)auVar24._8_4_ * fVar23;
      pfVar7[-1] = (float)auVar24._12_4_ * fVar23;
      auVar1._8_4_ = auVar41._0_4_;
      auVar1._0_8_ = auVar41._8_8_;
      auVar1._12_4_ = auVar41._4_4_;
      auVar24 = pmovsxbd(auVar31,auVar1);
      *pfVar7 = (float)auVar31._0_4_ * fVar23;
      pfVar7[1] = (float)auVar31._4_4_ * fVar23;
      pfVar7[2] = (float)auVar31._8_4_ * fVar23;
      pfVar7[3] = (float)auVar31._12_4_ * fVar23;
      auVar2._4_4_ = 0;
      auVar2._0_4_ = auVar41._12_4_;
      auVar2._8_4_ = auVar41._4_4_;
      auVar2._12_4_ = 0;
      auVar20 = pmovsxbd(auVar24,auVar2);
      pfVar7[4] = (float)auVar24._0_4_ * fVar23;
      pfVar7[5] = (float)auVar24._4_4_ * fVar23;
      pfVar7[6] = (float)auVar24._8_4_ * fVar23;
      pfVar7[7] = (float)auVar24._12_4_ * fVar23;
      pfVar7[8] = (float)auVar20._0_4_ * fVar23;
      pfVar7[9] = (float)auVar20._4_4_ * fVar23;
      pfVar7[10] = (float)auVar20._8_4_ * fVar23;
      pfVar7[0xb] = (float)auVar20._12_4_ * fVar23;
      pfVar7 = pfVar7 + 0x10;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  memset((void *)(param_1 + (longlong)iVar10 * 4),0,(longlong)((0x400 - iVar10) * 4));
  return;
}



// FUNCTION 1452fa480 FUN_1452fa480 body=119 status=ok
// SIG undefined FUN_1452fa480(void)

void FUN_1452fa480(undefined8 param_1,undefined8 *param_2,int param_3,byte *param_4,longlong param_5
                  ,int *param_6)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  lVar3 = (longlong)*param_6;
  if (0 < param_3) {
    uVar2 = (ulonglong)((param_3 - 1U >> 3) + 1);
    do {
      bVar1 = *param_4;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = *(ulonglong *)(lVar3 + param_5);
      param_4 = param_4 + 1;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = *(ulonglong *)(&DAT_149d35610 + (ulonglong)bVar1 * 8);
      auVar4 = pshufb(auVar5,auVar4);
      lVar3 = lVar3 + (ulonglong)(byte)(&DAT_149d35510)[bVar1];
      *param_2 = auVar4._0_8_;
      uVar2 = uVar2 - 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  *param_6 = (int)lVar3;
  return;
}



// FUNCTION 1452fa500 FUN_1452fa500 body=70 status=ok
// SIG undefined FUN_1452fa500(void)

ulonglong FUN_1452fa500(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  uVar1 = param_2 + 7 & 0xfffffff8;
  if (uVar1 != param_2) {
    *(undefined8 *)((int)param_2 + param_1) = 0;
  }
  uVar3 = uVar2;
  if (0 < (int)uVar1) {
    do {
      uVar3 = uVar3 + POPCOUNT(*(undefined8 *)(uVar2 + param_1));
      uVar2 = uVar2 + 8;
    } while ((longlong)uVar2 < (longlong)(int)uVar1);
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1452fa550 FUN_1452fa550 body=397 status=ok
// SIG undefined FUN_1452fa550(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1452fa550(longlong param_1,longlong param_2,int param_3)

{
  float *pfVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  longlong lVar4;
  undefined1 (*pauVar5) [32];
  longlong lVar6;
  longlong lVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  float fVar12;
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  auVar15 = _DAT_149935660;
  auVar11 = _DAT_1499317e0;
  lVar4 = 0;
  lVar6 = (longlong)param_3;
  auVar10 = _DAT_149931400;
  if (0 < param_3) {
    pauVar5 = (undefined1 (*) [32])(param_2 + 0x40);
    lVar7 = lVar4;
    do {
      auVar2 = *pauVar5;
      auVar9 = pauVar5[1];
      auVar8 = vandps_avx(auVar11,pauVar5[-1]);
      auVar14 = vandps_avx(auVar11,auVar9);
      auVar3 = vandps_avx(auVar11,auVar2);
      auVar3 = vmaxps_avx(auVar3,auVar14);
      auVar14 = vandps_avx(auVar11,pauVar5[-2]);
      auVar8 = vmaxps_avx(auVar14,auVar8);
      fVar12 = auVar15._0_4_;
      auVar13._0_4_ = fVar12 * *(float *)pauVar5[-2];
      fVar16 = auVar15._4_4_;
      auVar13._4_4_ = fVar16 * *(float *)(pauVar5[-2] + 4);
      fVar17 = auVar15._8_4_;
      auVar13._8_4_ = fVar17 * *(float *)(pauVar5[-2] + 8);
      fVar18 = auVar15._12_4_;
      auVar13._12_4_ = fVar18 * *(float *)(pauVar5[-2] + 0xc);
      fVar19 = auVar15._16_4_;
      auVar13._16_4_ = fVar19 * *(float *)(pauVar5[-2] + 0x10);
      fVar20 = auVar15._20_4_;
      auVar13._20_4_ = fVar20 * *(float *)(pauVar5[-2] + 0x14);
      fVar21 = auVar15._24_4_;
      auVar13._24_4_ = fVar21 * *(float *)(pauVar5[-2] + 0x18);
      fVar22 = auVar15._28_4_;
      auVar13._28_4_ = fVar22 * *(float *)(pauVar5[-2] + 0x1c);
      auVar14 = vmaxps_avx(auVar8,auVar3);
      auVar8._0_4_ = fVar12 * *(float *)pauVar5[-1];
      auVar8._4_4_ = fVar16 * *(float *)(pauVar5[-1] + 4);
      auVar8._8_4_ = fVar17 * *(float *)(pauVar5[-1] + 8);
      auVar8._12_4_ = fVar18 * *(float *)(pauVar5[-1] + 0xc);
      auVar8._16_4_ = fVar19 * *(float *)(pauVar5[-1] + 0x10);
      auVar8._20_4_ = fVar20 * *(float *)(pauVar5[-1] + 0x14);
      auVar8._24_4_ = fVar21 * *(float *)(pauVar5[-1] + 0x18);
      auVar8._28_4_ = fVar22 * *(float *)(pauVar5[-1] + 0x1c);
      auVar8 = vcvtps2dq_avx(auVar8);
      auVar10 = vmaxps_avx(auVar10,auVar14);
      auVar14 = vcvtps2dq_avx(auVar13);
      auVar8 = vpackssdw_avx2(auVar14,auVar8);
      auVar8 = vpermq_avx2(auVar8,0xd8);
      auVar14._0_4_ = fVar12 * auVar9._0_4_;
      auVar14._4_4_ = fVar16 * auVar9._4_4_;
      auVar14._8_4_ = fVar17 * auVar9._8_4_;
      auVar14._12_4_ = fVar18 * auVar9._12_4_;
      auVar14._16_4_ = fVar19 * auVar9._16_4_;
      auVar14._20_4_ = fVar20 * auVar9._20_4_;
      auVar14._24_4_ = fVar21 * auVar9._24_4_;
      auVar14._28_4_ = fVar22 * auVar9._28_4_;
      *(undefined1 (*) [32])(param_1 + lVar7 * 2) = auVar8;
      auVar9._0_4_ = fVar12 * auVar2._0_4_;
      auVar9._4_4_ = fVar16 * auVar2._4_4_;
      auVar9._8_4_ = fVar17 * auVar2._8_4_;
      auVar9._12_4_ = fVar18 * auVar2._12_4_;
      auVar9._16_4_ = fVar19 * auVar2._16_4_;
      auVar9._20_4_ = fVar20 * auVar2._20_4_;
      auVar9._24_4_ = fVar21 * auVar2._24_4_;
      auVar9._28_4_ = fVar22 * auVar2._28_4_;
      auVar2 = vcvtps2dq_avx(auVar9);
      auVar9 = vcvtps2dq_avx(auVar14);
      auVar2 = vpackssdw_avx2(auVar2,auVar9);
      auVar2 = vpermq_avx2(auVar2,0xd8);
      *(undefined1 (*) [32])(param_1 + 0x20 + lVar7 * 2) = auVar2;
      lVar7 = lVar7 + 0x20;
      pauVar5 = pauVar5 + 4;
    } while (lVar7 < lVar6);
  }
  auVar11 = vpermilps_avx(auVar10,0x4e);
  auVar10 = vmaxps_avx(auVar10,auVar11);
  auVar11 = vpermilps_avx(auVar10,0xb1);
  auVar10 = vmaxps_avx(auVar10,auVar11);
  auVar11 = vpermq_avx2(auVar10,0x4e);
  auVar10 = vmaxps_avx(auVar10,auVar11);
  fVar12 = auVar10._0_4_;
  if ((1.0 < fVar12) &&
     (auVar10._4_4_ = fVar12, auVar10._0_4_ = fVar12, auVar10._8_4_ = fVar12,
     auVar10._12_4_ = fVar12, auVar10._16_4_ = fVar12, auVar10._20_4_ = fVar12,
     auVar10._24_4_ = fVar12, auVar10._28_4_ = fVar12, auVar10 = vdivps_avx(auVar15,auVar10),
     0 < lVar6)) {
    do {
      pfVar1 = (float *)(param_2 + 0x20 + lVar4 * 4);
      auVar11._0_4_ = auVar10._0_4_ * *pfVar1;
      auVar11._4_4_ = auVar10._4_4_ * pfVar1[1];
      auVar11._8_4_ = auVar10._8_4_ * pfVar1[2];
      auVar11._12_4_ = auVar10._12_4_ * pfVar1[3];
      auVar11._16_4_ = auVar10._16_4_ * pfVar1[4];
      auVar11._20_4_ = auVar10._20_4_ * pfVar1[5];
      auVar11._24_4_ = auVar10._24_4_ * pfVar1[6];
      auVar11._28_4_ = auVar10._28_4_ * pfVar1[7];
      pfVar1 = (float *)(param_2 + lVar4 * 4);
      auVar15._0_4_ = auVar10._0_4_ * *pfVar1;
      auVar15._4_4_ = auVar10._4_4_ * pfVar1[1];
      auVar15._8_4_ = auVar10._8_4_ * pfVar1[2];
      auVar15._12_4_ = auVar10._12_4_ * pfVar1[3];
      auVar15._16_4_ = auVar10._16_4_ * pfVar1[4];
      auVar15._20_4_ = auVar10._20_4_ * pfVar1[5];
      auVar15._24_4_ = auVar10._24_4_ * pfVar1[6];
      auVar15._28_4_ = auVar10._28_4_ * pfVar1[7];
      auVar11 = vcvtps2dq_avx(auVar11);
      auVar15 = vcvtps2dq_avx(auVar15);
      auVar11 = vpackssdw_avx2(auVar15,auVar11);
      auVar11 = vpermq_avx2(auVar11,0xd8);
      *(undefined1 (*) [32])(param_1 + lVar4 * 2) = auVar11;
      lVar4 = lVar4 + 0x10;
    } while (lVar4 < lVar6);
  }
  return;
}



// FUNCTION 1452fa6e0 FUN_1452fa6e0 body=462 status=ok
// SIG undefined FUN_1452fa6e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1452fa6e0(longlong param_1,int param_2,longlong param_3,longlong param_4,float param_5,
                  longlong param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 auVar4 [32];
  float fVar5;
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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
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
  undefined1 auVar35 [32];
  longlong lVar36;
  undefined1 (*pauVar37) [32];
  longlong lVar38;
  float *pfVar39;
  longlong lVar40;
  undefined1 (*pauVar41) [32];
  float *pfVar42;
  longlong lVar43;
  undefined1 (*pauVar44) [16];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  
  auVar35 = _DAT_1499d7800;
  lVar38 = 0;
  lVar43 = (longlong)param_2 >> 1;
  if (lVar43 < 1) {
    lVar40 = param_6 - param_1;
  }
  else {
    lVar40 = param_6 - param_1;
    pauVar37 = (undefined1 (*) [32])(param_1 + 0x20);
    pauVar41 = (undefined1 (*) [32])(param_3 + -0x20 + lVar43 * 4);
    do {
      auVar4 = vpmovsxwd_avx2(*(undefined1 (*) [16])(param_4 + 0x10 + lVar38 * 2));
      auVar4 = vcvtdq2ps_avx(auVar4);
      auVar47 = vpermps_avx2(auVar35,pauVar41[-1]);
      pfVar39 = (float *)(lVar40 + (longlong)pauVar37);
      auVar45._0_4_ = auVar47._0_4_ * *pfVar39;
      auVar45._4_4_ = auVar47._4_4_ * pfVar39[1];
      auVar45._8_4_ = auVar47._8_4_ * pfVar39[2];
      auVar45._12_4_ = auVar47._12_4_ * pfVar39[3];
      auVar45._16_4_ = auVar47._16_4_ * pfVar39[4];
      auVar45._20_4_ = auVar47._20_4_ * pfVar39[5];
      auVar45._24_4_ = auVar47._24_4_ * pfVar39[6];
      auVar45._28_4_ = auVar47._28_4_ * pfVar39[7];
      auVar50 = vpmovsxwd_avx2(*(undefined1 (*) [16])(param_4 + lVar38 * 2));
      lVar36 = param_2 - lVar38;
      lVar38 = lVar38 + 0x10;
      auVar47 = vpermps_avx2(auVar35,*(undefined1 (*) [32])(param_6 + -0x40 + lVar36 * 4));
      auVar49._0_4_ = auVar4._0_4_ * param_5 * auVar47._0_4_;
      auVar49._4_4_ = auVar4._4_4_ * param_5 * auVar47._4_4_;
      auVar49._8_4_ = auVar4._8_4_ * param_5 * auVar47._8_4_;
      auVar49._12_4_ = auVar4._12_4_ * param_5 * auVar47._12_4_;
      auVar49._16_4_ = auVar4._16_4_ * param_5 * auVar47._16_4_;
      auVar49._20_4_ = auVar4._20_4_ * param_5 * auVar47._20_4_;
      auVar49._24_4_ = auVar4._24_4_ * param_5 * auVar47._24_4_;
      auVar49._28_4_ = auVar4._28_4_ * param_5 * auVar47._28_4_;
      auVar48 = vpermps_avx2(auVar35,*(undefined1 (*) [32])(param_6 + -0x20 + lVar36 * 4));
      auVar47 = vsubps_avx(auVar49,auVar45);
      auVar4 = vcvtdq2ps_avx(auVar50);
      auVar50 = vpermps_avx2(auVar35,*pauVar41);
      pfVar39 = (float *)(lVar40 + -0x60 + (longlong)(pauVar37 + 2));
      auVar46._0_4_ = auVar50._0_4_ * *pfVar39;
      auVar46._4_4_ = auVar50._4_4_ * pfVar39[1];
      auVar46._8_4_ = auVar50._8_4_ * pfVar39[2];
      auVar46._12_4_ = auVar50._12_4_ * pfVar39[3];
      auVar46._16_4_ = auVar50._16_4_ * pfVar39[4];
      auVar46._20_4_ = auVar50._20_4_ * pfVar39[5];
      auVar46._24_4_ = auVar50._24_4_ * pfVar39[6];
      auVar46._28_4_ = auVar50._28_4_ * pfVar39[7];
      auVar50._0_4_ = auVar4._0_4_ * param_5 * auVar48._0_4_;
      auVar50._4_4_ = auVar4._4_4_ * param_5 * auVar48._4_4_;
      auVar50._8_4_ = auVar4._8_4_ * param_5 * auVar48._8_4_;
      auVar50._12_4_ = auVar4._12_4_ * param_5 * auVar48._12_4_;
      auVar50._16_4_ = auVar4._16_4_ * param_5 * auVar48._16_4_;
      auVar50._20_4_ = auVar4._20_4_ * param_5 * auVar48._20_4_;
      auVar50._24_4_ = auVar4._24_4_ * param_5 * auVar48._24_4_;
      auVar50._28_4_ = auVar4._28_4_ * param_5 * auVar48._28_4_;
      auVar4 = vsubps_avx(auVar50,auVar46);
      pauVar37[-1] = auVar4;
      *pauVar37 = auVar47;
      pauVar37 = pauVar37 + 2;
      pauVar41 = pauVar41 + -2;
    } while (lVar38 < lVar43);
  }
  auVar35 = _DAT_1499d7800;
  if (0 < lVar43) {
    lVar38 = lVar43 * 4 + 0x20;
    lVar36 = (lVar43 - 1U >> 4) + 1;
    pfVar39 = (float *)(lVar38 + param_1);
    pfVar42 = (float *)(param_6 + -0x20 + lVar43 * 4);
    pauVar44 = (undefined1 (*) [16])(param_4 + -0x10 + lVar43 * 2);
    do {
      pfVar1 = pfVar39 + 0x10;
      auVar4 = vpmovsxwd_avx2(pauVar44[-1]);
      auVar4 = vcvtdq2ps_avx(auVar4);
      pfVar2 = (float *)(lVar40 + -0x40 + (longlong)pfVar1);
      fVar5 = *pfVar2;
      fVar6 = pfVar2[1];
      fVar7 = pfVar2[2];
      fVar8 = pfVar2[3];
      fVar9 = pfVar2[4];
      fVar10 = pfVar2[5];
      fVar11 = pfVar2[6];
      fVar12 = pfVar2[7];
      auVar47._0_4_ = auVar4._0_4_ * param_5 * pfVar42[-8];
      auVar47._4_4_ = auVar4._4_4_ * param_5 * pfVar42[-7];
      auVar47._8_4_ = auVar4._8_4_ * param_5 * pfVar42[-6];
      auVar47._12_4_ = auVar4._12_4_ * param_5 * pfVar42[-5];
      auVar47._16_4_ = auVar4._16_4_ * param_5 * pfVar42[-4];
      auVar47._20_4_ = auVar4._20_4_ * param_5 * pfVar42[-3];
      auVar47._24_4_ = auVar4._24_4_ * param_5 * pfVar42[-2];
      auVar47._28_4_ = auVar4._28_4_ * param_5 * pfVar42[-1];
      pfVar2 = (float *)(((param_3 + lVar43 * -4) - param_1) + -0x40 + (longlong)pfVar1);
      fVar13 = *pfVar2;
      fVar14 = pfVar2[1];
      fVar15 = pfVar2[2];
      fVar16 = pfVar2[3];
      fVar17 = pfVar2[4];
      fVar18 = pfVar2[5];
      fVar19 = pfVar2[6];
      fVar20 = pfVar2[7];
      auVar4 = vpmovsxwd_avx2(*pauVar44);
      auVar47 = vpermps_avx2(auVar35,auVar47);
      auVar4 = vcvtdq2ps_avx(auVar4);
      pfVar2 = (float *)(lVar40 + -0x60 + (longlong)pfVar1);
      fVar21 = pfVar2[1];
      fVar22 = pfVar2[2];
      fVar23 = pfVar2[3];
      fVar24 = pfVar2[4];
      fVar25 = pfVar2[5];
      fVar26 = pfVar2[6];
      fVar27 = pfVar2[7];
      auVar48._0_4_ = auVar4._0_4_ * param_5 * *pfVar42;
      auVar48._4_4_ = auVar4._4_4_ * param_5 * pfVar42[1];
      auVar48._8_4_ = auVar4._8_4_ * param_5 * pfVar42[2];
      auVar48._12_4_ = auVar4._12_4_ * param_5 * pfVar42[3];
      auVar48._16_4_ = auVar4._16_4_ * param_5 * pfVar42[4];
      auVar48._20_4_ = auVar4._20_4_ * param_5 * pfVar42[5];
      auVar48._24_4_ = auVar4._24_4_ * param_5 * pfVar42[6];
      auVar48._28_4_ = auVar4._28_4_ * param_5 * pfVar42[7];
      pfVar3 = (float *)(((param_3 - lVar38) - param_1) + -0x40 + (longlong)pfVar1);
      fVar28 = pfVar3[1];
      fVar29 = pfVar3[2];
      fVar30 = pfVar3[3];
      fVar31 = pfVar3[4];
      fVar32 = pfVar3[5];
      fVar33 = pfVar3[6];
      fVar34 = pfVar3[7];
      auVar4 = vpermps_avx2(auVar35,auVar48);
      pfVar39[-8] = auVar4._0_4_ + *pfVar2 * *pfVar3;
      pfVar39[-7] = auVar4._4_4_ + fVar21 * fVar28;
      pfVar39[-6] = auVar4._8_4_ + fVar22 * fVar29;
      pfVar39[-5] = auVar4._12_4_ + fVar23 * fVar30;
      pfVar39[-4] = auVar4._16_4_ + fVar24 * fVar31;
      pfVar39[-3] = auVar4._20_4_ + fVar25 * fVar32;
      pfVar39[-2] = auVar4._24_4_ + fVar26 * fVar33;
      pfVar39[-1] = auVar4._28_4_ + fVar27 * fVar34;
      *pfVar39 = auVar47._0_4_ + fVar5 * fVar13;
      pfVar39[1] = auVar47._4_4_ + fVar6 * fVar14;
      pfVar39[2] = auVar47._8_4_ + fVar7 * fVar15;
      pfVar39[3] = auVar47._12_4_ + fVar8 * fVar16;
      pfVar39[4] = auVar47._16_4_ + fVar9 * fVar17;
      pfVar39[5] = auVar47._20_4_ + fVar10 * fVar18;
      pfVar39[6] = auVar47._24_4_ + fVar11 * fVar19;
      pfVar39[7] = auVar47._28_4_ + fVar12 * fVar20;
      lVar36 = lVar36 + -1;
      pfVar39 = pfVar1;
      pfVar42 = pfVar42 + -0x10;
      pauVar44 = pauVar44 + -2;
    } while (lVar36 != 0);
  }
  return;
}



// FUNCTION 1452fa8b0 FUN_1452fa8b0 body=703 status=ok
// SIG undefined FUN_1452fa8b0(void)

undefined8 FUN_1452fa8b0(longlong param_1,longlong param_2,ulonglong param_3,int param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar3 = 0;
  if (param_3 != 0) {
    for (; (param_3 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
    }
  }
  uVar9 = param_3 >> 2;
  lVar7 = (uVar9 & 0xfffffffffffffff0) + uVar9;
  lVar1 = param_2 + ((uVar9 * 2 & 0xfffffffffffffff0) + uVar9 * 2) * 4;
  lVar4 = (uVar9 * 3 & 0xfffffffffffffff0) + uVar9 * 3;
  lVar5 = lVar4;
  if (param_4 != 1) {
    lVar5 = lVar7;
    lVar7 = lVar4;
  }
  uVar8 = 0;
  lVar5 = param_2 + lVar5 * 4;
  lVar7 = param_2 + lVar7 * 4;
  uVar9 = uVar8;
  if (param_3 != 0) {
    do {
      uVar2 = (ulonglong)((ushort)(&DAT_14c734c40)[uVar9] >> (9U - (char)uVar3 & 0x3f));
      lVar6 = (uVar9 & 0xfffffffffffffff0) + uVar9;
      lVar4 = (uVar2 & 0xfffffffffffffff0) + uVar2;
      uVar9 = uVar9 + 4;
      fVar16 = *(float *)(param_2 + 0x40 + lVar4 * 4);
      fVar14 = *(float *)(lVar5 + 0x40 + lVar4 * 4);
      fVar15 = *(float *)(param_2 + lVar4 * 4);
      fVar17 = *(float *)(lVar5 + lVar4 * 4);
      fVar10 = fVar15 + *(float *)(lVar1 + lVar4 * 4);
      fVar11 = fVar16 + *(float *)(lVar1 + 0x40 + lVar4 * 4);
      fVar12 = fVar17 + *(float *)(lVar7 + lVar4 * 4);
      fVar13 = fVar14 + *(float *)(lVar7 + 0x40 + lVar4 * 4);
      fVar16 = fVar16 - *(float *)(lVar1 + 0x40 + lVar4 * 4);
      fVar14 = fVar14 - *(float *)(lVar7 + 0x40 + lVar4 * 4);
      fVar15 = fVar15 - *(float *)(lVar1 + lVar4 * 4);
      fVar17 = fVar17 - *(float *)(lVar7 + lVar4 * 4);
      *(float *)(param_1 + lVar6 * 4) = fVar10 + fVar12;
      *(float *)(param_1 + 0x40 + lVar6 * 4) = fVar11 + fVar13;
      *(float *)(param_1 + 8 + lVar6 * 4) = fVar10 - fVar12;
      *(float *)(param_1 + 0x48 + lVar6 * 4) = fVar11 - fVar13;
      *(float *)(param_1 + 4 + lVar6 * 4) = fVar14 + fVar15;
      *(float *)(param_1 + 0x44 + lVar6 * 4) = fVar16 - fVar17;
      *(float *)(param_1 + 0xc + lVar6 * 4) = fVar15 - fVar14;
      *(float *)(param_1 + 0x4c + lVar6 * 4) = fVar17 + fVar16;
    } while (uVar9 < param_3);
  }
  if ((uVar3 & 1) != 0) {
    param_3 = (param_3 & 0xfffffffffffffff0) + param_3;
    if (param_3 != 0) {
      do {
        fVar16 = *(float *)(param_1 + uVar8 * 4);
        fVar14 = *(float *)(param_1 + 0x40 + uVar8 * 4);
        uVar3 = (ulonglong)((uint)uVar8 & 3);
        fVar15 = *(float *)(&DAT_14c732a68 + uVar3 * 4) * *(float *)(param_1 + 0x10 + uVar8 * 4) -
                 *(float *)(&DAT_14c732a70 + uVar3 * 4) * *(float *)(param_1 + 0x50 + uVar8 * 4);
        fVar17 = *(float *)(&DAT_14c732a68 + uVar3 * 4) * *(float *)(param_1 + 0x50 + uVar8 * 4) +
                 *(float *)(&DAT_14c732a70 + uVar3 * 4) * *(float *)(param_1 + 0x10 + uVar8 * 4);
        *(float *)(param_1 + uVar8 * 4) = fVar16 + fVar15;
        *(float *)(param_1 + 0x40 + uVar8 * 4) = fVar14 + fVar17;
        *(float *)(param_1 + 0x10 + uVar8 * 4) = fVar16 - fVar15;
        *(float *)(param_1 + 0x50 + uVar8 * 4) = fVar14 - fVar17;
        uVar8 = uVar8 + 0x15 & 0xffffffffffffffeb;
      } while (uVar8 < param_3);
    }
    return 8;
  }
  return 4;
}



// FUNCTION 1452fab70 FUN_1452fab70 body=744 status=ok
// SIG undefined FUN_1452fab70(void)

void FUN_1452fab70(longlong param_1,ulonglong param_2,ulonglong param_3,int param_4)

{
  undefined *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined *puVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  puVar1 = &DAT_14c732a40 + param_2 * 8;
  puVar13 = &DAT_14c732a40 + param_2 * 0x10;
  lVar14 = (param_2 & 0xfffffffffffffff0) + param_2;
  uVar11 = param_2 * 3;
  lVar2 = param_1 + lVar14 * 4;
  uVar12 = (~uVar11 & 0xfffffffffffffff0) + ~uVar11;
  lVar3 = param_1 + ((param_2 * 2 & 0xfffffffffffffff0) + param_2 * 2) * 4;
  lVar10 = (uVar11 & 0xfffffffffffffff0) + uVar11;
  lVar4 = param_1 + lVar10 * 4;
  lVar6 = lVar4;
  puVar7 = puVar1;
  puVar8 = puVar13;
  if (param_4 == 0) {
    lVar14 = lVar10;
    lVar6 = lVar2;
    puVar7 = puVar1 + param_2 * 4;
    puVar8 = puVar13 + param_2 * 8;
  }
  uVar9 = 0;
  lVar14 = param_1 + lVar14 * 4;
  uVar11 = uVar9;
  if (param_3 != 0) {
    do {
      fVar19 = *(float *)(puVar1 + uVar11 * 4 + (param_2 >> 1) * 4);
      fVar15 = *(float *)(puVar7 + uVar11 * 4);
      fVar16 = *(float *)(lVar4 + 0x40 + uVar9 * 4);
      fVar5 = *(float *)(puVar13 + uVar11 * 4 + param_2 * 4);
      fVar17 = *(float *)(lVar2 + 0x40 + uVar9 * 4);
      fVar22 = *(float *)(param_1 + uVar9 * 4);
      fVar23 = *(float *)(param_1 + 0x40 + uVar9 * 4);
      fVar21 = *(float *)(lVar3 + uVar9 * 4);
      fVar20 = *(float *)(lVar3 + 0x40 + uVar9 * 4);
      fVar24 = fVar19 * *(float *)(lVar2 + uVar9 * 4) - fVar17 * fVar15;
      fVar25 = fVar17 * fVar19 + fVar15 * *(float *)(lVar2 + uVar9 * 4);
      fVar17 = fVar19 * *(float *)(lVar4 + uVar9 * 4) - fVar16 * fVar15;
      fVar19 = fVar16 * fVar19 + fVar15 * *(float *)(lVar4 + uVar9 * 4);
      fVar16 = fVar17 + fVar21;
      fVar21 = fVar21 - fVar17;
      fVar18 = fVar23 + fVar25;
      fVar23 = fVar23 - fVar25;
      fVar15 = fVar19 + fVar20;
      fVar20 = fVar20 - fVar19;
      fVar19 = *(float *)(puVar8 + uVar11 * 4);
      fVar25 = fVar5 * fVar16 - fVar19 * fVar15;
      fVar17 = fVar22 + fVar24;
      fVar22 = fVar22 - fVar24;
      fVar15 = fVar19 * fVar16 + fVar5 * fVar15;
      *(float *)(param_1 + uVar9 * 4) = fVar17 + fVar25;
      *(float *)(param_1 + 0x40 + uVar9 * 4) = fVar18 + fVar15;
      *(float *)(lVar3 + uVar9 * 4) = fVar17 - fVar25;
      *(float *)(lVar3 + 0x40 + uVar9 * 4) = fVar18 - fVar15;
      fVar15 = fVar5 * fVar20 + fVar19 * fVar21;
      fVar19 = fVar19 * fVar20 - fVar5 * fVar21;
      *(float *)(lVar6 + uVar9 * 4) = fVar22 + fVar15;
      *(float *)(lVar6 + 0x40 + uVar9 * 4) = fVar23 + fVar19;
      *(float *)(lVar14 + uVar9 * 4) = fVar22 - fVar15;
      *(float *)(lVar14 + 0x40 + uVar9 * 4) = fVar23 - fVar19;
      uVar9 = uVar9 - uVar12 & uVar12;
      uVar11 = uVar11 + 1 & param_2 - 1;
    } while (uVar9 < param_3);
  }
  return;
}



// FUNCTION 1452fae60 FUN_1452fae60 body=1102 status=ok
// SIG undefined FUN_1452fae60(void)

void FUN_1452fae60(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  longlong lVar10;
  float *pfVar11;
  longlong lVar12;
  float *pfVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float *pfVar16;
  
  uVar15 = param_5 >> 2;
  uVar14 = 0;
  param_3 = param_3 - param_4;
  param_5 = param_5 >> 1;
  if (3 < uVar15) {
    pfVar11 = (float *)(param_4 + 4);
    pfVar16 = (float *)(param_4 + -4 + param_5 * 4);
    pfVar13 = (float *)(param_2 + 0x14);
    do {
      fVar1 = *(float *)(param_3 + -4 + (longlong)pfVar11);
      fVar2 = pfVar11[-1];
      lVar12 = param_5 - uVar14;
      fVar3 = pfVar13[-5];
      fVar4 = *(float *)((longlong)pfVar16 + param_3);
      fVar5 = *pfVar16;
      fVar6 = *(float *)(param_2 + -4 + lVar12 * 8);
      fVar7 = pfVar13[-4];
      fVar8 = *(float *)(param_2 + -8 + lVar12 * 8);
      lVar10 = ((lVar12 - 1U & 0xfffffffffffffff0) - uVar14) + param_5;
      lVar9 = (uVar14 & 0xfffffffffffffff0) + uVar14;
      *(float *)(param_1 + lVar9 * 4) = fVar1 * fVar3 - fVar2 * fVar6;
      *(float *)(param_1 + 0x40 + lVar9 * 4) = fVar2 * fVar3 + fVar1 * fVar6;
      lVar9 = (uVar14 + 1 & 0xfffffffffffffff0) + uVar14;
      *(float *)(param_1 + -4 + lVar10 * 4) = fVar4 * fVar8 - fVar5 * fVar7;
      *(float *)(param_1 + 0x3c + lVar10 * 4) = fVar5 * fVar8 + fVar4 * fVar7;
      fVar1 = *(float *)((longlong)pfVar11 + param_3);
      fVar2 = *pfVar11;
      fVar3 = pfVar13[-3];
      fVar4 = *(float *)(param_2 + -0xc + lVar12 * 8);
      lVar10 = ((lVar12 - 2U & 0xfffffffffffffff0) - uVar14) + param_5;
      fVar5 = *(float *)(param_3 + -4 + (longlong)pfVar16);
      fVar6 = pfVar16[-1];
      fVar7 = pfVar13[-2];
      fVar8 = *(float *)(param_2 + -0x10 + lVar12 * 8);
      *(float *)(param_1 + 4 + lVar9 * 4) = fVar1 * fVar3 - fVar2 * fVar4;
      *(float *)(param_1 + 0x44 + lVar9 * 4) = fVar1 * fVar4 + fVar3 * fVar2;
      lVar9 = (uVar14 + 2 & 0xfffffffffffffff0) + uVar14;
      *(float *)(param_1 + -8 + lVar10 * 4) = fVar5 * fVar8 - fVar6 * fVar7;
      *(float *)(param_1 + 0x38 + lVar10 * 4) = fVar6 * fVar8 + fVar5 * fVar7;
      fVar1 = *(float *)(param_3 + 4 + (longlong)pfVar11);
      fVar2 = pfVar11[1];
      lVar10 = ((lVar12 - 3U & 0xfffffffffffffff0) - uVar14) + param_5;
      fVar3 = pfVar13[-1];
      fVar4 = *(float *)(param_3 + -8 + (longlong)pfVar16);
      fVar5 = pfVar16[-2];
      fVar6 = *pfVar13;
      fVar7 = *(float *)(param_2 + -0x14 + lVar12 * 8);
      fVar8 = *(float *)(param_2 + -0x18 + lVar12 * 8);
      *(float *)(param_1 + 8 + lVar9 * 4) = fVar1 * fVar3 - fVar2 * fVar7;
      *(float *)(param_1 + 0x48 + lVar9 * 4) = fVar1 * fVar7 + fVar2 * fVar3;
      lVar9 = (uVar14 + 3 & 0xfffffffffffffff0) + uVar14;
      *(float *)(param_1 + -0xc + lVar10 * 4) = fVar4 * fVar8 - fVar5 * fVar6;
      *(float *)(param_1 + 0x34 + lVar10 * 4) = fVar5 * fVar8 + fVar4 * fVar6;
      fVar1 = *(float *)(param_3 + 8 + (longlong)pfVar11);
      fVar2 = pfVar11[2];
      fVar3 = pfVar13[1];
      fVar4 = *(float *)(param_3 + -0xc + (longlong)pfVar16);
      fVar5 = pfVar16[-3];
      lVar10 = ((lVar12 - 4U & 0xfffffffffffffff0) - uVar14) + param_5;
      fVar6 = pfVar13[2];
      uVar14 = uVar14 + 4;
      fVar7 = *(float *)(param_2 + -0x1c + lVar12 * 8);
      pfVar11 = pfVar11 + 4;
      fVar8 = *(float *)(param_2 + -0x20 + lVar12 * 8);
      pfVar13 = pfVar13 + 8;
      pfVar16 = pfVar16 + -4;
      *(float *)(param_1 + 0xc + lVar9 * 4) = fVar1 * fVar3 - fVar2 * fVar7;
      *(float *)(param_1 + 0x4c + lVar9 * 4) = fVar2 * fVar3 + fVar1 * fVar7;
      *(float *)(param_1 + -0x10 + lVar10 * 4) = fVar4 * fVar8 - fVar5 * fVar6;
      *(float *)(param_1 + 0x30 + lVar10 * 4) = fVar5 * fVar8 + fVar4 * fVar6;
    } while (uVar14 < uVar15 - 3);
  }
  if (uVar14 < uVar15) {
    pfVar11 = (float *)(param_4 + uVar14 * 4);
    pfVar13 = (float *)(param_4 + ((param_5 - uVar14) + -1) * 4);
    do {
      fVar1 = *(float *)(param_3 + (longlong)pfVar11);
      fVar2 = *pfVar11;
      fVar3 = *(float *)(param_2 + uVar14 * 8);
      fVar4 = *(float *)(param_2 + 4 + uVar14 * 8);
      fVar5 = *(float *)(param_3 + (longlong)pfVar13);
      lVar10 = (uVar14 & 0xfffffffffffffff0) + uVar14;
      fVar6 = *pfVar13;
      lVar9 = param_5 - uVar14;
      pfVar11 = pfVar11 + 1;
      pfVar13 = pfVar13 + -1;
      fVar7 = *(float *)(param_2 + -4 + lVar9 * 8);
      fVar8 = *(float *)(param_2 + -8 + lVar9 * 8);
      lVar9 = ((lVar9 - 1U & 0xfffffffffffffff0) - uVar14) + param_5;
      uVar14 = uVar14 + 1;
      *(float *)(param_1 + lVar10 * 4) = fVar1 * fVar3 - fVar2 * fVar7;
      *(float *)(param_1 + 0x40 + lVar10 * 4) = fVar1 * fVar7 + fVar3 * fVar2;
      *(float *)(param_1 + 0x3c + lVar9 * 4) = fVar6 * fVar8 + fVar4 * fVar5;
      *(float *)(param_1 + -4 + lVar9 * 4) = fVar5 * fVar8 - fVar4 * fVar6;
    } while (uVar14 < uVar15);
  }
  return;
}



// FUNCTION 1452fb2b0 FUN_1452fb2b0 body=1167 status=ok
// SIG undefined FUN_1452fb2b0(void)

void FUN_1452fb2b0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,ulonglong param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  float *pfVar12;
  float *pfVar13;
  longlong lVar14;
  float *pfVar15;
  ulonglong uVar16;
  float *pfVar17;
  
  uVar16 = 0;
  param_4 = param_4 - param_5;
  uVar11 = param_6 >> 2;
  param_6 = param_6 >> 1;
  if (3 < uVar11) {
    pfVar13 = (float *)(param_1 + 0x14);
    pfVar12 = (float *)(param_2 + -0xc + param_6 * 4);
    pfVar15 = (float *)(param_5 + 4);
    pfVar17 = (float *)(param_5 + -4 + param_6 * 4);
    do {
      fVar1 = *(float *)((longlong)pfVar15 + param_4 + -4);
      fVar2 = pfVar15[-1];
      fVar3 = *(float *)(param_4 + (longlong)pfVar17);
      fVar4 = *pfVar17;
      lVar14 = param_6 - uVar16;
      lVar10 = (uVar16 & 0xfffffffffffffff0) + uVar16;
      fVar5 = *(float *)(param_3 + lVar10 * 4);
      lVar9 = ((lVar14 - 1U & 0xfffffffffffffff0) - uVar16) + param_6;
      fVar6 = *(float *)(param_3 + 0x40 + lVar10 * 4);
      lVar10 = (uVar16 + 1 & 0xfffffffffffffff0) + uVar16;
      fVar7 = *(float *)(param_3 + -4 + lVar9 * 4);
      fVar8 = *(float *)(param_3 + 0x3c + lVar9 * 4);
      lVar9 = ((lVar14 - 2U & 0xfffffffffffffff0) - uVar16) + param_6;
      pfVar13[-5] = fVar1 * fVar6 + fVar2 * fVar5;
      pfVar13[-4] = fVar4 * fVar8 - fVar3 * fVar7;
      pfVar12[1] = fVar3 * fVar8 + fVar4 * fVar7;
      pfVar12[2] = fVar2 * fVar6 - fVar1 * fVar5;
      fVar1 = *(float *)(param_3 + -8 + lVar9 * 4);
      fVar2 = *(float *)(param_3 + 0x38 + lVar9 * 4);
      fVar3 = *(float *)(param_3 + 4 + lVar10 * 4);
      fVar4 = *(float *)(param_3 + 0x44 + lVar10 * 4);
      fVar5 = *(float *)((longlong)pfVar15 + param_4);
      fVar6 = *pfVar15;
      fVar7 = *(float *)(param_4 + -4 + (longlong)pfVar17);
      fVar8 = pfVar17[-1];
      lVar10 = (uVar16 + 2 & 0xfffffffffffffff0) + uVar16;
      lVar9 = ((lVar14 - 3U & 0xfffffffffffffff0) - uVar16) + param_6;
      pfVar13[-3] = fVar6 * fVar3 + fVar5 * fVar4;
      pfVar13[-2] = fVar8 * fVar2 - fVar7 * fVar1;
      pfVar12[-1] = fVar7 * fVar2 + fVar8 * fVar1;
      *pfVar12 = fVar6 * fVar4 - fVar5 * fVar3;
      fVar1 = *(float *)((longlong)pfVar15 + param_4 + 4);
      fVar2 = pfVar15[1];
      fVar3 = *(float *)(param_3 + -0xc + lVar9 * 4);
      fVar4 = *(float *)(param_3 + 0x34 + lVar9 * 4);
      fVar5 = *(float *)(param_3 + 8 + lVar10 * 4);
      fVar6 = *(float *)(param_3 + 0x48 + lVar10 * 4);
      fVar7 = *(float *)(param_4 + -8 + (longlong)pfVar17);
      fVar8 = pfVar17[-2];
      lVar9 = ((lVar14 - 4U & 0xfffffffffffffff0) - uVar16) + param_6;
      lVar10 = (uVar16 + 3 & 0xfffffffffffffff0) + uVar16;
      uVar16 = uVar16 + 4;
      pfVar13[-1] = fVar1 * fVar6 + fVar2 * fVar5;
      *pfVar13 = fVar8 * fVar4 - fVar7 * fVar3;
      pfVar12[-3] = fVar7 * fVar4 + fVar8 * fVar3;
      pfVar12[-2] = fVar2 * fVar6 - fVar1 * fVar5;
      fVar1 = *(float *)((longlong)pfVar15 + param_4 + 8);
      fVar2 = pfVar15[2];
      fVar3 = *(float *)(param_4 + -0xc + (longlong)pfVar17);
      fVar4 = pfVar17[-3];
      pfVar15 = pfVar15 + 4;
      fVar5 = *(float *)(param_3 + 0xc + lVar10 * 4);
      fVar6 = *(float *)(param_3 + 0x4c + lVar10 * 4);
      pfVar17 = pfVar17 + -4;
      fVar7 = *(float *)(param_3 + -0x10 + lVar9 * 4);
      fVar8 = *(float *)(param_3 + 0x30 + lVar9 * 4);
      pfVar13[1] = fVar1 * fVar6 + fVar2 * fVar5;
      pfVar13[2] = fVar4 * fVar8 - fVar3 * fVar7;
      pfVar13 = pfVar13 + 8;
      pfVar12[-5] = fVar3 * fVar8 + fVar4 * fVar7;
      pfVar12[-4] = fVar2 * fVar6 - fVar1 * fVar5;
      pfVar12 = pfVar12 + -8;
    } while (uVar16 < uVar11 - 3);
  }
  if (uVar16 < uVar11) {
    pfVar13 = (float *)(param_5 + uVar16 * 4);
    pfVar15 = (float *)(param_5 + ((param_6 - uVar16) + -1) * 4);
    pfVar12 = (float *)(param_2 + (param_6 - (uVar16 * 2 + 2)) * 4);
    do {
      fVar1 = *pfVar13;
      fVar2 = *(float *)(param_4 + (longlong)pfVar13);
      fVar3 = *(float *)(param_4 + (longlong)pfVar15);
      fVar4 = *pfVar15;
      lVar9 = (uVar16 & 0xfffffffffffffff0) + uVar16;
      pfVar13 = pfVar13 + 1;
      pfVar15 = pfVar15 + -1;
      fVar5 = *(float *)(param_3 + 0x40 + lVar9 * 4);
      fVar6 = *(float *)(param_3 + lVar9 * 4);
      lVar9 = (((param_6 - uVar16) - 1 & 0xfffffffffffffff0) - uVar16) + param_6;
      fVar7 = *(float *)(param_3 + -4 + lVar9 * 4);
      fVar8 = *(float *)(param_3 + 0x3c + lVar9 * 4);
      *(float *)(param_1 + uVar16 * 8) = fVar5 * fVar2 + fVar1 * fVar6;
      *(float *)(param_1 + 4 + uVar16 * 8) = fVar8 * fVar4 - fVar7 * fVar3;
      uVar16 = uVar16 + 1;
      pfVar12[1] = fVar1 * fVar5 - fVar6 * fVar2;
      *pfVar12 = fVar8 * fVar3 + fVar7 * fVar4;
      pfVar12 = pfVar12 + -2;
    } while (uVar16 < uVar11);
  }
  return;
}



// FUNCTION 1452fb740 FUN_1452fb740 body=230 status=ok
// SIG undefined FUN_1452fb740(void)

void FUN_1452fb740(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  if ((char)param_1 == '\0') {
    ppuVar2 = &PTR_FUN_149d35e70;
  }
  else {
    ppuVar2 = &PTR_FUN_149da13d8;
    if ((char)((ulonglong)param_1 >> 0x20) == '\0') {
      ppuVar2 = &PTR_FUN_149da13b8;
    }
  }
  if (param_4 == 0x400) {
    puVar3 = &DAT_14c733a40;
  }
  else {
    if (param_4 != 0x80) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    puVar3 = &DAT_14c734a40;
  }
  (*(code *)ppuVar2[2])(param_2,param_3,puVar3,puVar3 + (param_4 >> 1) * 4,param_4);
  FUN_1452fb830(param_3,param_2,param_4 >> 1,0,ppuVar2);
  (*(code *)ppuVar2[3])
            (param_2,param_2 + (param_4 >> 1) * 4,param_3,puVar3,puVar3 + (param_4 >> 1) * 4,param_4
            );
  return;
}



// FUNCTION 1452fb830 FUN_1452fb830 body=118 status=ok
// SIG undefined FUN_1452fb830(void)

void FUN_1452fb830(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (*(code *)*param_5)();
  uVar2 = param_3 >> 2;
  if (uVar1 <= uVar2) {
    do {
      (*(code *)param_5[1])(param_1,uVar1,(param_3 & 0xfffffffffffffff0) + param_3,param_4);
      uVar1 = uVar1 * 4;
    } while (uVar1 < uVar2 || uVar1 - uVar2 == 0);
  }
  return;
}



// FUNCTION 1452fb8b0 FUN_1452fb8b0 body=176 status=ok
// SIG undefined FUN_1452fb8b0(void)

/* WARNING: Removing unreachable block (ram,0x0001452fb8dd) */
/* WARNING: Removing unreachable block (ram,0x0001452fb8cf) */

void FUN_1452fb8b0(uint param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (DAT_14c7fc6b8 == 0) {
    piVar1 = (int *)cpuid_basic_info(0);
    uVar5 = 0;
    if (0 < *piVar1) {
      lVar2 = cpuid_Version_info(1);
      uVar5 = *(uint *)(lVar2 + 8);
      uVar4 = uVar5 >> 0x17 & 1;
      uVar3 = uVar4 | 4;
      if ((uVar5 & 0x2000000) == 0) {
        uVar3 = uVar4;
      }
      uVar4 = uVar3 | 8;
      if ((uVar5 & 0x4000000) == 0) {
        uVar4 = uVar3;
      }
      uVar5 = uVar4 | 0x10;
      if ((*(uint *)(lVar2 + 0xc) & 1) == 0) {
        uVar5 = uVar4;
      }
      if ((*(uint *)(lVar2 + 0xc) >> 9 & 1) != 0) {
        uVar5 = uVar5 | 0x20;
      }
    }
    DAT_14c7fc6b4 = uVar5 | 0x80000000;
    DAT_14c7fc6b8 = DAT_14c7fc6b4;
  }
  DAT_14c7fc6b4 = (DAT_14c7fc6b8 & param_1 | DAT_14c7fc6b4) & ~(DAT_14c7fc6b8 & param_2);
  return;
}



// FUNCTION 1452fb960 FUN_1452fb960 body=862 status=ok
// SIG undefined FUN_1452fb960(void)

void FUN_1452fb960(longlong param_1,ulonglong param_2,longlong param_3)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  lVar3 = param_3 * 8;
  pfVar7 = (float *)(param_1 + 8);
  pfVar8 = (float *)(param_1 + -8 + param_3 * 0x10);
  uVar5 = 1;
  if (1 < param_2) {
    if (param_2 - 1 < 4) goto LAB_1452fbc10;
    pfVar6 = (float *)(&DAT_149d35eac + lVar3);
    lVar4 = (param_2 - 5 >> 2) + 1;
    uVar5 = lVar4 * 4;
    do {
      fVar9 = (pfVar7[1] + pfVar8[1]) * 0.5;
      fVar11 = (*pfVar8 - *pfVar7) * 0.5;
      fVar12 = pfVar7[1] - fVar9;
      fVar13 = *pfVar7 + fVar11;
      fVar10 = pfVar6[-5] * fVar11 - pfVar6[-4] * fVar9;
      fVar9 = pfVar6[-5] * fVar9 + pfVar6[-4] * fVar11;
      pfVar7[1] = fVar10 + fVar12;
      *pfVar7 = fVar9 + fVar13;
      pfVar8[1] = fVar10 - fVar12;
      *pfVar8 = fVar13 - fVar9;
      fVar10 = (pfVar7[3] + pfVar8[-1]) * 0.5;
      fVar11 = (pfVar8[-2] - pfVar7[2]) * 0.5;
      fVar12 = pfVar7[3] - fVar10;
      fVar13 = pfVar7[2] + fVar11;
      fVar9 = pfVar6[-3] * fVar10 + pfVar6[-2] * fVar11;
      fVar10 = pfVar6[-3] * fVar11 - pfVar6[-2] * fVar10;
      pfVar7[2] = fVar9 + fVar13;
      pfVar7[3] = fVar10 + fVar12;
      pfVar8[-1] = fVar10 - fVar12;
      pfVar8[-2] = fVar13 - fVar9;
      fVar11 = (pfVar8[-4] - pfVar7[4]) * 0.5;
      fVar10 = (pfVar7[5] + pfVar8[-3]) * 0.5;
      fVar13 = pfVar7[4] + fVar11;
      fVar12 = pfVar7[5] - fVar10;
      fVar9 = pfVar6[-1] * fVar10 + *pfVar6 * fVar11;
      fVar10 = pfVar6[-1] * fVar11 - *pfVar6 * fVar10;
      pfVar7[4] = fVar9 + fVar13;
      pfVar7[5] = fVar10 + fVar12;
      pfVar8[-3] = fVar10 - fVar12;
      pfVar8[-4] = fVar13 - fVar9;
      pfVar1 = pfVar6 + 2;
      pfVar2 = pfVar6 + 1;
      pfVar6 = pfVar6 + 8;
      fVar9 = (pfVar7[7] + pfVar8[-5]) * 0.5;
      fVar11 = (pfVar8[-6] - pfVar7[6]) * 0.5;
      fVar12 = pfVar7[7] - fVar9;
      fVar13 = pfVar7[6] + fVar11;
      fVar10 = *pfVar2 * fVar11 - *pfVar1 * fVar9;
      fVar9 = *pfVar2 * fVar9 + *pfVar1 * fVar11;
      pfVar7[7] = fVar10 + fVar12;
      pfVar7[6] = fVar9 + fVar13;
      pfVar7 = pfVar7 + 8;
      pfVar8[-6] = fVar13 - fVar9;
      pfVar8[-5] = fVar10 - fVar12;
      pfVar8 = pfVar8 + -8;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    while (uVar5 = uVar5 + 1, uVar5 < param_2) {
LAB_1452fbc10:
      fVar9 = (pfVar7[1] + pfVar8[1]) * 0.5;
      fVar11 = (*pfVar8 - *pfVar7) * 0.5;
      fVar12 = pfVar7[1] - fVar9;
      fVar13 = *pfVar7 + fVar11;
      fVar10 = *(float *)(&DAT_149d35e90 + uVar5 * 8 + lVar3) * fVar11 -
               *(float *)(&UNK_149d35e94 + uVar5 * 8 + lVar3) * fVar9;
      fVar9 = *(float *)(&DAT_149d35e90 + uVar5 * 8 + lVar3) * fVar9 +
              *(float *)(&UNK_149d35e94 + uVar5 * 8 + lVar3) * fVar11;
      pfVar7[1] = fVar10 + fVar12;
      *pfVar7 = fVar9 + fVar13;
      pfVar7 = pfVar7 + 2;
      *pfVar8 = fVar13 - fVar9;
      pfVar8[1] = fVar10 - fVar12;
      pfVar8 = pfVar8 + -2;
    }
  }
  return;
}



// FUNCTION 1452fbcc0 FUN_1452fbcc0 body=861 status=ok
// SIG undefined FUN_1452fbcc0(void)

void FUN_1452fbcc0(longlong param_1,ulonglong param_2,longlong param_3)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  lVar3 = param_3 * 8;
  pfVar8 = (float *)(param_1 + 8);
  pfVar9 = (float *)(param_1 + -8 + param_3 * 0x10);
  uVar6 = 1;
  if (1 < param_2) {
    if (3 < param_2 - 1) {
      pfVar7 = (float *)(&DAT_149d35eac + lVar3);
      lVar5 = (param_2 - 5 >> 2) + 1;
      uVar6 = lVar5 * 4 + 1;
      do {
        fVar12 = (*pfVar8 - *pfVar9) * 0.5;
        fVar10 = (pfVar8[1] + pfVar9[1]) * 0.5;
        fVar14 = *pfVar8 - fVar12;
        fVar13 = pfVar8[1] - fVar10;
        fVar11 = pfVar7[-5] * fVar12 - pfVar7[-4] * fVar10;
        fVar10 = pfVar7[-5] * fVar10 + pfVar7[-4] * fVar12;
        pfVar8[1] = fVar11 + fVar13;
        *pfVar8 = fVar14 - fVar10;
        *pfVar9 = fVar10 + fVar14;
        pfVar9[1] = fVar11 - fVar13;
        fVar12 = (pfVar8[2] - pfVar9[-2]) * 0.5;
        fVar10 = (pfVar8[3] + pfVar9[-1]) * 0.5;
        fVar14 = pfVar8[2] - fVar12;
        fVar13 = pfVar8[3] - fVar10;
        fVar11 = pfVar7[-3] * fVar12 - pfVar7[-2] * fVar10;
        fVar10 = pfVar7[-3] * fVar10 + pfVar7[-2] * fVar12;
        pfVar8[3] = fVar11 + fVar13;
        pfVar8[2] = fVar14 - fVar10;
        pfVar9[-2] = fVar10 + fVar14;
        pfVar9[-1] = fVar11 - fVar13;
        fVar12 = (pfVar8[4] - pfVar9[-4]) * 0.5;
        fVar11 = (pfVar8[5] + pfVar9[-3]) * 0.5;
        fVar14 = pfVar8[4] - fVar12;
        fVar13 = pfVar8[5] - fVar11;
        fVar10 = pfVar7[-1] * fVar11 + *pfVar7 * fVar12;
        fVar11 = pfVar7[-1] * fVar12 - *pfVar7 * fVar11;
        pfVar8[4] = fVar14 - fVar10;
        pfVar8[5] = fVar11 + fVar13;
        pfVar9[-4] = fVar10 + fVar14;
        pfVar9[-3] = fVar11 - fVar13;
        pfVar1 = pfVar7 + 2;
        pfVar2 = pfVar7 + 1;
        pfVar7 = pfVar7 + 8;
        fVar12 = (pfVar8[6] - pfVar9[-6]) * 0.5;
        fVar10 = (pfVar8[7] + pfVar9[-5]) * 0.5;
        fVar14 = pfVar8[6] - fVar12;
        fVar13 = pfVar8[7] - fVar10;
        fVar11 = *pfVar2 * fVar12 - *pfVar1 * fVar10;
        fVar10 = *pfVar2 * fVar10 + *pfVar1 * fVar12;
        pfVar8[7] = fVar11 + fVar13;
        pfVar8[6] = fVar14 - fVar10;
        pfVar8 = pfVar8 + 8;
        pfVar9[-6] = fVar10 + fVar14;
        pfVar9[-5] = fVar11 - fVar13;
        pfVar9 = pfVar9 + -8;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      if (param_2 <= uVar6) {
        return;
      }
    }
    do {
      lVar4 = uVar6 * 8;
      lVar5 = uVar6 * 8;
      uVar6 = uVar6 + 1;
      fVar12 = (*pfVar8 - *pfVar9) * 0.5;
      fVar10 = (pfVar8[1] + pfVar9[1]) * 0.5;
      fVar14 = *pfVar8 - fVar12;
      fVar13 = pfVar8[1] - fVar10;
      fVar11 = *(float *)(&DAT_149d35e90 + lVar5 + lVar3) * fVar12 -
               *(float *)(&UNK_149d35e94 + lVar4 + lVar3) * fVar10;
      fVar10 = *(float *)(&DAT_149d35e90 + lVar5 + lVar3) * fVar10 +
               *(float *)(&UNK_149d35e94 + lVar4 + lVar3) * fVar12;
      pfVar8[1] = fVar11 + fVar13;
      *pfVar8 = fVar14 - fVar10;
      pfVar8 = pfVar8 + 2;
      *pfVar9 = fVar10 + fVar14;
      pfVar9[1] = fVar11 - fVar13;
      pfVar9 = pfVar9 + -2;
    } while (uVar6 < param_2);
  }
  return;
}



// FUNCTION 1452fc020 FUN_1452fc020 body=2206 status=ok
// SIG undefined FUN_1452fc020(void)

void FUN_1452fc020(longlong param_1,longlong param_2,ulonglong param_3)

{
  ushort *puVar1;
  longlong lVar2;
  ushort uVar3;
  float *pfVar4;
  float *pfVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ushort *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float *local_res20;
  
  puVar11 = (ushort *)(param_2 + -4);
  do {
    uVar3 = puVar11[3];
    uVar9 = (ulonglong)uVar3;
    uVar8 = (uint)uVar3;
    uVar10 = (ulonglong)uVar8;
    uVar6 = (ulonglong)puVar11[2];
    lVar2 = uVar9 * 8;
    fVar12 = *(float *)(param_1 + uVar6 * 8);
    pfVar4 = (float *)(param_1 + uVar6 * 8);
    fVar15 = pfVar4[1];
    fVar14 = pfVar4[uVar10 * 4] + pfVar4[uVar9 * 6];
    fVar17 = pfVar4[uVar9 * 6] - pfVar4[uVar10 * 4];
    fVar13 = pfVar4[uVar10 * 4 + 1] + pfVar4[uVar9 * 6 + 1];
    fVar16 = pfVar4[uVar10 * 4 + 1] - pfVar4[uVar9 * 6 + 1];
    uVar6 = 1;
    pfVar4[uVar10 * 4] = fVar12 - fVar14;
    pfVar4[uVar10 * 4 + 1] = fVar15 - fVar13;
    *pfVar4 = fVar12 + fVar14;
    pfVar4[1] = fVar15 + fVar13;
    fVar12 = pfVar4[uVar9 * 2];
    fVar15 = pfVar4[uVar9 * 2 + 1];
    pfVar4[uVar9 * 6] = fVar12 - fVar16;
    pfVar4[uVar9 * 6 + 1] = fVar15 - fVar17;
    pfVar4[uVar9 * 2] = fVar12 + fVar16;
    pfVar4[uVar9 * 2 + 1] = fVar15 + fVar17;
    pfVar5 = pfVar4 + 2;
    if (1 < uVar9) {
      if (3 < uVar9 - 1) {
        pfVar4 = pfVar4 + uVar9 * 6 + 5;
        lVar7 = (uVar9 - 5 >> 2) + 1;
        uVar6 = lVar7 * 4 + 1;
        local_res20 = (float *)(&DAT_149d35eac + lVar2);
        do {
          fVar12 = local_res20[-5];
          fVar15 = local_res20[-4];
          fVar16 = fVar12 * pfVar4[uVar9 * -2 + -3] - fVar15 * pfVar4[uVar9 * -2 + -2];
          fVar13 = *pfVar5;
          fVar19 = fVar12 * pfVar4[uVar9 * -2 + -2] + fVar15 * pfVar4[uVar9 * -2 + -3];
          fVar14 = fVar15 * pfVar4[-2] + fVar12 * pfVar4[-3];
          fVar17 = fVar12 * pfVar4[-2] - fVar15 * pfVar4[-3];
          fVar12 = pfVar4[uVar9 * -6 + -2];
          fVar18 = fVar14 - fVar16;
          fVar14 = fVar14 + fVar16;
          fVar15 = fVar17 + fVar19;
          fVar19 = fVar19 - fVar17;
          pfVar4[uVar9 * -2 + -3] = fVar13 - fVar14;
          pfVar4[uVar9 * -2 + -2] = fVar12 - fVar15;
          *pfVar5 = fVar13 + fVar14;
          pfVar4[uVar9 * -6 + -2] = fVar12 + fVar15;
          fVar12 = pfVar4[uVar10 * -4 + -2];
          fVar15 = pfVar4[uVar10 * -4 + -3];
          pfVar4[-3] = fVar15 - fVar19;
          pfVar4[-2] = fVar12 - fVar18;
          pfVar4[uVar10 * -4 + -3] = fVar15 + fVar19;
          pfVar4[uVar10 * -4 + -2] = fVar12 + fVar18;
          fVar12 = local_res20[-3];
          fVar15 = local_res20[-2];
          fVar16 = fVar12 * pfVar4[uVar9 * -2 + -1] - pfVar4[uVar9 * -2] * fVar15;
          fVar19 = fVar15 * pfVar4[uVar9 * -2 + -1] + pfVar4[uVar9 * -2] * fVar12;
          fVar17 = fVar12 * *pfVar4 - fVar15 * pfVar4[-1];
          fVar18 = fVar15 * *pfVar4 + fVar12 * pfVar4[-1];
          fVar14 = fVar17 + fVar19;
          fVar13 = fVar18 + fVar16;
          fVar18 = fVar18 - fVar16;
          fVar19 = fVar19 - fVar17;
          fVar12 = pfVar4[uVar9 * -6 + -1];
          fVar15 = pfVar4[uVar9 * -6];
          pfVar4[uVar9 * -2 + -1] = fVar12 - fVar13;
          pfVar4[uVar9 * -2] = fVar15 - fVar14;
          pfVar4[uVar9 * -6 + -1] = fVar12 + fVar13;
          pfVar4[uVar9 * -6] = fVar15 + fVar14;
          fVar12 = pfVar4[uVar10 * -4 + -1];
          fVar15 = pfVar4[(ulonglong)uVar8 * -4];
          pfVar4[-1] = fVar12 - fVar19;
          *pfVar4 = fVar15 - fVar18;
          pfVar4[uVar10 * -4 + -1] = fVar12 + fVar19;
          pfVar4[(ulonglong)uVar8 * -4] = fVar15 + fVar18;
          fVar12 = local_res20[-1];
          fVar15 = *local_res20;
          fVar17 = fVar12 * pfVar4[uVar9 * -2 + 1] - fVar15 * pfVar4[uVar9 * -2 + 2];
          fVar19 = fVar12 * pfVar4[uVar9 * -2 + 2] + fVar15 * pfVar4[uVar9 * -2 + 1];
          fVar13 = pfVar4[uVar9 * -6 + 2];
          fVar14 = pfVar4[2] * fVar12 - fVar15 * pfVar4[1];
          fVar18 = pfVar4[2] * fVar15 + fVar12 * pfVar4[1];
          fVar16 = fVar14 + fVar19;
          fVar19 = fVar19 - fVar14;
          fVar12 = pfVar4[uVar9 * -6 + 1];
          fVar15 = fVar18 + fVar17;
          fVar18 = fVar18 - fVar17;
          pfVar4[uVar9 * -2 + 1] = fVar12 - fVar15;
          pfVar4[uVar9 * -2 + 2] = fVar13 - fVar16;
          pfVar4[uVar9 * -6 + 1] = fVar12 + fVar15;
          pfVar4[uVar9 * -6 + 2] = fVar13 + fVar16;
          fVar12 = pfVar4[uVar10 * -4 + 2];
          fVar15 = pfVar4[uVar10 * -4 + 1];
          pfVar4[1] = fVar15 - fVar19;
          pfVar4[2] = fVar12 - fVar18;
          pfVar4[uVar10 * -4 + 1] = fVar15 + fVar19;
          pfVar5 = pfVar5 + 8;
          pfVar4[uVar10 * -4 + 2] = fVar12 + fVar18;
          fVar12 = local_res20[2];
          fVar15 = local_res20[1];
          fVar18 = fVar12 * pfVar4[uVar9 * -2 + 3] + pfVar4[(2 - uVar9) * 2] * fVar15;
          fVar16 = fVar15 * pfVar4[uVar9 * -2 + 3] - pfVar4[(2 - uVar9) * 2] * fVar12;
          fVar13 = pfVar4[4] * fVar15 - fVar12 * pfVar4[3];
          fVar17 = pfVar4[4] * fVar12 + fVar15 * pfVar4[3];
          fVar14 = fVar13 + fVar18;
          fVar18 = fVar18 - fVar13;
          fVar12 = pfVar4[uVar9 * -6 + 3];
          fVar13 = fVar17 + fVar16;
          fVar17 = fVar17 - fVar16;
          fVar15 = pfVar4[uVar9 * -6 + 4];
          pfVar4[uVar9 * -2 + 3] = fVar12 - fVar13;
          pfVar4[(2 - uVar9) * 2] = fVar15 - fVar14;
          pfVar4[uVar9 * -6 + 3] = fVar12 + fVar13;
          pfVar4[uVar9 * -6 + 4] = fVar15 + fVar14;
          fVar12 = pfVar4[uVar10 * -4 + 3];
          fVar15 = pfVar4[uVar10 * -4 + 4];
          pfVar4[3] = fVar12 - fVar18;
          pfVar4[4] = fVar15 - fVar17;
          pfVar4[uVar10 * -4 + 3] = fVar12 + fVar18;
          pfVar4[uVar10 * -4 + 4] = fVar15 + fVar17;
          pfVar4 = pfVar4 + 8;
          lVar7 = lVar7 + -1;
          local_res20 = local_res20 + 8;
        } while (lVar7 != 0);
        if (uVar9 <= uVar6) goto LAB_1452fc870;
      }
      pfVar5 = pfVar5 + uVar9 * 6 + 1;
      do {
        fVar12 = *(float *)(&UNK_149d35e94 + uVar6 * 8 + lVar2);
        fVar15 = *(float *)(&DAT_149d35e90 + uVar6 * 8 + lVar2);
        uVar6 = uVar6 + 1;
        fVar16 = pfVar5[uVar9 * -2 + -1] * fVar15 - fVar12 * pfVar5[uVar9 * -2];
        fVar18 = pfVar5[uVar9 * -2 + -1] * fVar12 + fVar15 * pfVar5[uVar9 * -2];
        fVar13 = pfVar5[uVar9 * -6];
        fVar14 = fVar15 * pfVar5[-1] + *pfVar5 * fVar12;
        fVar12 = *pfVar5 * fVar15 - fVar12 * pfVar5[-1];
        fVar17 = fVar14 - fVar16;
        fVar14 = fVar14 + fVar16;
        fVar15 = fVar12 + fVar18;
        fVar18 = fVar18 - fVar12;
        fVar12 = pfVar5[uVar9 * -6 + -1];
        pfVar5[uVar9 * -2 + -1] = fVar12 - fVar14;
        pfVar5[uVar9 * -2] = fVar13 - fVar15;
        pfVar5[uVar9 * -6 + -1] = fVar12 + fVar14;
        pfVar5[uVar9 * -6] = fVar13 + fVar15;
        fVar12 = pfVar5[uVar10 * -4 + -1];
        fVar15 = pfVar5[uVar9 * -4];
        pfVar5[-1] = fVar12 - fVar18;
        *pfVar5 = fVar15 - fVar17;
        pfVar5[uVar10 * -4 + -1] = fVar12 + fVar18;
        pfVar5[uVar9 * -4] = fVar15 + fVar17;
        pfVar5 = pfVar5 + 2;
      } while (uVar6 < uVar9);
    }
LAB_1452fc870:
    puVar1 = puVar11 + 3;
    puVar11 = puVar11 + 2;
    if (param_3 <= *puVar1) {
      return;
    }
  } while( true );
}



// FUNCTION 1452fc8c0 FUN_1452fc8c0 body=2193 status=ok
// SIG undefined FUN_1452fc8c0(void)

void FUN_1452fc8c0(longlong param_1,longlong param_2,ulonglong param_3)

{
  ushort *puVar1;
  longlong lVar2;
  ushort uVar3;
  float *pfVar4;
  float *pfVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ushort *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float *local_res20;
  
  puVar11 = (ushort *)(param_2 + -4);
  do {
    uVar3 = puVar11[3];
    uVar9 = (ulonglong)uVar3;
    uVar8 = (uint)uVar3;
    uVar10 = (ulonglong)uVar8;
    uVar6 = (ulonglong)puVar11[2];
    lVar2 = uVar9 * 8;
    fVar12 = *(float *)(param_1 + uVar6 * 8);
    pfVar4 = (float *)(param_1 + uVar6 * 8);
    fVar14 = pfVar4[1];
    fVar13 = pfVar4[uVar10 * 4 + 1] + pfVar4[uVar9 * 6 + 1];
    fVar16 = pfVar4[uVar9 * 6 + 1] - pfVar4[uVar10 * 4 + 1];
    fVar15 = pfVar4[uVar10 * 4] + pfVar4[uVar9 * 6];
    fVar17 = pfVar4[uVar10 * 4] - pfVar4[uVar9 * 6];
    uVar6 = 1;
    pfVar4[uVar10 * 4 + 1] = fVar14 - fVar13;
    pfVar4[uVar10 * 4] = fVar12 - fVar15;
    *pfVar4 = fVar12 + fVar15;
    pfVar4[1] = fVar14 + fVar13;
    fVar12 = pfVar4[uVar9 * 2];
    fVar14 = pfVar4[uVar9 * 2 + 1];
    pfVar4[uVar9 * 6] = fVar12 - fVar16;
    pfVar4[uVar9 * 6 + 1] = fVar14 - fVar17;
    pfVar4[uVar9 * 2] = fVar12 + fVar16;
    pfVar4[uVar9 * 2 + 1] = fVar14 + fVar17;
    pfVar5 = pfVar4 + 2;
    if (1 < uVar9) {
      if (3 < uVar9 - 1) {
        local_res20 = (float *)(&DAT_149d35eac + lVar2);
        pfVar4 = pfVar4 + uVar9 * 6 + 5;
        lVar7 = (uVar9 - 5 >> 2) + 1;
        uVar6 = lVar7 * 4 + 1;
        do {
          fVar12 = *pfVar5;
          fVar14 = local_res20[-5];
          fVar13 = local_res20[-4];
          fVar18 = fVar14 * pfVar4[uVar9 * -2 + -3] + fVar13 * pfVar4[uVar9 * -2 + -2];
          fVar17 = fVar14 * pfVar4[uVar9 * -2 + -2] - fVar13 * pfVar4[uVar9 * -2 + -3];
          fVar15 = fVar14 * pfVar4[-3] - fVar13 * pfVar4[-2];
          fVar16 = fVar14 * pfVar4[-2] + fVar13 * pfVar4[-3];
          fVar13 = fVar15 + fVar18;
          fVar18 = fVar18 - fVar15;
          fVar14 = pfVar4[uVar9 * -6 + -2];
          fVar15 = fVar16 - fVar17;
          fVar16 = fVar16 + fVar17;
          pfVar4[uVar9 * -2 + -3] = fVar12 - fVar13;
          pfVar4[uVar9 * -2 + -2] = fVar14 - fVar16;
          *pfVar5 = fVar12 + fVar13;
          pfVar4[uVar9 * -6 + -2] = fVar14 + fVar16;
          fVar12 = pfVar4[uVar10 * -4 + -2];
          fVar14 = pfVar4[uVar10 * -4 + -3];
          pfVar4[-3] = fVar14 - fVar15;
          pfVar4[-2] = fVar12 - fVar18;
          pfVar4[uVar10 * -4 + -3] = fVar14 + fVar15;
          pfVar4[uVar10 * -4 + -2] = fVar12 + fVar18;
          fVar12 = local_res20[-3];
          fVar14 = local_res20[-2];
          fVar17 = fVar12 * pfVar4[uVar9 * -2 + -1] + pfVar4[uVar9 * -2] * fVar14;
          fVar13 = pfVar4[uVar9 * -2] * fVar12 - fVar14 * pfVar4[uVar9 * -2 + -1];
          fVar15 = fVar12 * *pfVar4 + fVar14 * pfVar4[-1];
          fVar12 = fVar12 * pfVar4[-1] - fVar14 * *pfVar4;
          fVar16 = fVar15 - fVar13;
          fVar15 = fVar15 + fVar13;
          fVar13 = fVar12 + fVar17;
          fVar17 = fVar17 - fVar12;
          fVar12 = pfVar4[uVar9 * -6 + -1];
          fVar14 = pfVar4[uVar9 * -6];
          pfVar4[uVar9 * -2 + -1] = fVar12 - fVar13;
          pfVar4[uVar9 * -2] = fVar14 - fVar15;
          pfVar4[uVar9 * -6 + -1] = fVar12 + fVar13;
          pfVar4[uVar9 * -6] = fVar14 + fVar15;
          fVar12 = pfVar4[uVar10 * -4 + -1];
          fVar14 = pfVar4[(ulonglong)uVar8 * -4];
          pfVar4[-1] = fVar12 - fVar16;
          *pfVar4 = fVar14 - fVar17;
          pfVar4[uVar10 * -4 + -1] = fVar12 + fVar16;
          pfVar4[(ulonglong)uVar8 * -4] = fVar14 + fVar17;
          fVar12 = *local_res20;
          fVar14 = local_res20[-1];
          fVar18 = fVar14 * pfVar4[uVar9 * -2 + 1] + fVar12 * pfVar4[uVar9 * -2 + 2];
          fVar17 = fVar14 * pfVar4[uVar9 * -2 + 2] - fVar12 * pfVar4[uVar9 * -2 + 1];
          fVar15 = fVar14 * pfVar4[1] - pfVar4[2] * fVar12;
          fVar13 = pfVar4[uVar9 * -6 + 2];
          fVar16 = pfVar4[2] * fVar14 + fVar12 * pfVar4[1];
          fVar14 = fVar15 + fVar18;
          fVar18 = fVar18 - fVar15;
          fVar12 = pfVar4[uVar9 * -6 + 1];
          fVar15 = fVar16 - fVar17;
          fVar16 = fVar16 + fVar17;
          pfVar4[uVar9 * -2 + 1] = fVar12 - fVar14;
          pfVar4[uVar9 * -2 + 2] = fVar13 - fVar16;
          pfVar4[uVar9 * -6 + 1] = fVar12 + fVar14;
          pfVar4[uVar9 * -6 + 2] = fVar13 + fVar16;
          fVar12 = pfVar4[uVar10 * -4 + 2];
          fVar14 = pfVar4[uVar10 * -4 + 1];
          pfVar4[1] = fVar14 - fVar15;
          pfVar4[2] = fVar12 - fVar18;
          pfVar4[uVar10 * -4 + 1] = fVar14 + fVar15;
          pfVar4[uVar10 * -4 + 2] = fVar12 + fVar18;
          fVar12 = local_res20[1];
          pfVar5 = pfVar5 + 8;
          fVar14 = local_res20[2];
          local_res20 = local_res20 + 8;
          fVar18 = fVar12 * pfVar4[uVar9 * -2 + 3] + pfVar4[(2 - uVar9) * 2] * fVar14;
          fVar17 = fVar12 * pfVar4[(2 - uVar9) * 2] - fVar14 * pfVar4[uVar9 * -2 + 3];
          fVar13 = fVar12 * pfVar4[3] - pfVar4[4] * fVar14;
          fVar16 = pfVar4[4] * fVar12 + fVar14 * pfVar4[3];
          fVar15 = fVar13 + fVar18;
          fVar18 = fVar18 - fVar13;
          fVar12 = pfVar4[uVar9 * -6 + 3];
          fVar13 = fVar16 - fVar17;
          fVar16 = fVar16 + fVar17;
          fVar14 = pfVar4[uVar9 * -6 + 4];
          pfVar4[uVar9 * -2 + 3] = fVar12 - fVar15;
          pfVar4[(2 - uVar9) * 2] = fVar14 - fVar16;
          pfVar4[uVar9 * -6 + 3] = fVar12 + fVar15;
          pfVar4[uVar9 * -6 + 4] = fVar14 + fVar16;
          fVar12 = pfVar4[uVar10 * -4 + 3];
          fVar14 = pfVar4[uVar10 * -4 + 4];
          pfVar4[3] = fVar12 - fVar13;
          pfVar4[4] = fVar14 - fVar18;
          pfVar4[uVar10 * -4 + 3] = fVar12 + fVar13;
          pfVar4[uVar10 * -4 + 4] = fVar14 + fVar18;
          pfVar4 = pfVar4 + 8;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        if (uVar9 <= uVar6) goto LAB_1452fd108;
      }
      pfVar5 = pfVar5 + uVar9 * 6 + 1;
      do {
        fVar12 = *(float *)(&DAT_149d35e90 + uVar6 * 8 + lVar2);
        fVar14 = *(float *)(&UNK_149d35e94 + uVar6 * 8 + lVar2);
        uVar6 = uVar6 + 1;
        fVar17 = fVar12 * pfVar5[uVar9 * -2] - pfVar5[uVar9 * -2 + -1] * fVar14;
        fVar18 = pfVar5[uVar9 * -2 + -1] * fVar12 + fVar14 * pfVar5[uVar9 * -2];
        fVar13 = fVar12 * pfVar5[-1] - *pfVar5 * fVar14;
        fVar16 = fVar14 * pfVar5[-1] + *pfVar5 * fVar12;
        fVar12 = pfVar5[uVar9 * -6 + -1];
        fVar15 = fVar13 + fVar18;
        fVar18 = fVar18 - fVar13;
        fVar14 = pfVar5[uVar9 * -6];
        fVar13 = fVar16 - fVar17;
        fVar16 = fVar16 + fVar17;
        pfVar5[uVar9 * -2 + -1] = fVar12 - fVar15;
        pfVar5[uVar9 * -2] = fVar14 - fVar16;
        pfVar5[uVar9 * -6 + -1] = fVar12 + fVar15;
        pfVar5[uVar9 * -6] = fVar14 + fVar16;
        fVar12 = pfVar5[uVar10 * -4 + -1];
        fVar14 = pfVar5[uVar9 * -4];
        pfVar5[-1] = fVar12 - fVar13;
        *pfVar5 = fVar14 - fVar18;
        pfVar5[uVar10 * -4 + -1] = fVar12 + fVar13;
        pfVar5[uVar9 * -4] = fVar14 + fVar18;
        pfVar5 = pfVar5 + 2;
      } while (uVar6 < uVar9);
    }
LAB_1452fd108:
    puVar1 = puVar11 + 3;
    puVar11 = puVar11 + 2;
    if (param_3 <= *puVar1) {
      return;
    }
  } while( true );
}



// FUNCTION 1452fd160 FUN_1452fd160 body=1322 status=ok
// SIG undefined FUN_1452fd160(void)

void FUN_1452fd160(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,ulonglong param_6,ulonglong param_7,longlong param_8)

{
  ulonglong uVar1;
  longlong lVar2;
  float *pfVar3;
  longlong lVar4;
  ushort *puVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if (param_6 < param_7) {
    if (3 < param_7 - param_6) {
      puVar5 = (ushort *)(param_8 + (param_6 + 2) * 2);
      lVar7 = param_5 - param_2;
      pfVar3 = (float *)(param_6 * 8 + 0xc + param_2);
      lVar6 = param_4 - param_2;
      lVar4 = param_3 - param_2;
      lVar2 = ((param_7 - param_6) - 4 >> 2) + 1;
      param_6 = param_6 + lVar2 * 4;
      do {
        fVar13 = *(float *)(lVar7 + -0xc + (longlong)pfVar3);
        fVar10 = *(float *)(lVar4 + -8 + (longlong)pfVar3);
        fVar9 = fVar13 + *(float *)(lVar4 + -0xc + (longlong)pfVar3);
        fVar13 = fVar13 - *(float *)(lVar4 + -0xc + (longlong)pfVar3);
        fVar15 = *(float *)(lVar6 + -0xc + (longlong)pfVar3);
        fVar8 = fVar10 + *(float *)(lVar7 + -8 + (longlong)pfVar3);
        fVar10 = fVar10 - *(float *)(lVar7 + -8 + (longlong)pfVar3);
        fVar11 = pfVar3[-2] + *(float *)(lVar6 + -8 + (longlong)pfVar3);
        fVar14 = pfVar3[-2] - *(float *)(lVar6 + -8 + (longlong)pfVar3);
        uVar1 = (ulonglong)puVar5[-2];
        fVar12 = fVar15 + pfVar3[-3];
        fVar15 = pfVar3[-3] - fVar15;
        *(float *)(param_1 + uVar1 * 8) = fVar9 + fVar12;
        *(float *)(param_1 + 4 + uVar1 * 8) = fVar8 + fVar11;
        *(float *)(param_1 + 0x10 + uVar1 * 8) = fVar12 - fVar9;
        *(float *)(param_1 + 0x14 + uVar1 * 8) = fVar11 - fVar8;
        *(float *)(param_1 + 8 + uVar1 * 8) = fVar10 + fVar15;
        *(float *)(param_1 + 0xc + uVar1 * 8) = fVar13 + fVar14;
        *(float *)(param_1 + 0x18 + uVar1 * 8) = fVar15 - fVar10;
        *(float *)(param_1 + 0x1c + uVar1 * 8) = fVar14 - fVar13;
        fVar13 = *(float *)(lVar7 + -4 + (longlong)pfVar3);
        fVar10 = *(float *)(lVar6 + -4 + (longlong)pfVar3);
        fVar8 = fVar13 + *(float *)(lVar4 + -4 + (longlong)pfVar3);
        fVar12 = fVar10 + pfVar3[-1];
        fVar15 = *(float *)(lVar4 + (longlong)pfVar3) + *(float *)(lVar7 + (longlong)pfVar3);
        fVar9 = *(float *)(lVar4 + (longlong)pfVar3) - *(float *)(lVar7 + (longlong)pfVar3);
        fVar13 = fVar13 - *(float *)(lVar4 + -4 + (longlong)pfVar3);
        uVar1 = (ulonglong)puVar5[-1];
        fVar10 = pfVar3[-1] - fVar10;
        fVar11 = *(float *)(lVar6 + (longlong)pfVar3) + *pfVar3;
        fVar14 = *pfVar3 - *(float *)(lVar6 + (longlong)pfVar3);
        *(float *)(param_1 + uVar1 * 8) = fVar8 + fVar12;
        *(float *)(param_1 + 4 + uVar1 * 8) = fVar15 + fVar11;
        *(float *)(param_1 + 0x10 + uVar1 * 8) = fVar12 - fVar8;
        *(float *)(param_1 + 0x14 + uVar1 * 8) = fVar11 - fVar15;
        *(float *)(param_1 + 8 + uVar1 * 8) = fVar9 + fVar10;
        *(float *)(param_1 + 0xc + uVar1 * 8) = fVar13 + fVar14;
        *(float *)(param_1 + 0x18 + uVar1 * 8) = fVar10 - fVar9;
        *(float *)(param_1 + 0x1c + uVar1 * 8) = fVar14 - fVar13;
        uVar1 = (ulonglong)*puVar5;
        fVar11 = pfVar3[1] + *(float *)(lVar6 + 4 + (longlong)pfVar3);
        fVar14 = pfVar3[1] - *(float *)(lVar6 + 4 + (longlong)pfVar3);
        fVar13 = *(float *)(lVar7 + 4 + (longlong)pfVar3);
        fVar10 = *(float *)(lVar4 + 8 + (longlong)pfVar3);
        fVar8 = fVar13 + *(float *)(lVar4 + 4 + (longlong)pfVar3);
        fVar13 = fVar13 - *(float *)(lVar4 + 4 + (longlong)pfVar3);
        fVar15 = fVar10 + *(float *)(lVar7 + 8 + (longlong)pfVar3);
        fVar10 = fVar10 - *(float *)(lVar7 + 8 + (longlong)pfVar3);
        fVar9 = pfVar3[2] + *(float *)(lVar6 + 8 + (longlong)pfVar3);
        fVar12 = pfVar3[2] - *(float *)(lVar6 + 8 + (longlong)pfVar3);
        *(float *)(param_1 + uVar1 * 8) = fVar8 + fVar11;
        *(float *)(param_1 + 4 + uVar1 * 8) = fVar15 + fVar9;
        *(float *)(param_1 + 0x10 + uVar1 * 8) = fVar11 - fVar8;
        *(float *)(param_1 + 0x14 + uVar1 * 8) = fVar9 - fVar15;
        *(float *)(param_1 + 8 + uVar1 * 8) = fVar10 + fVar14;
        *(float *)(param_1 + 0xc + uVar1 * 8) = fVar13 + fVar12;
        *(float *)(param_1 + 0x18 + uVar1 * 8) = fVar14 - fVar10;
        *(float *)(param_1 + 0x1c + uVar1 * 8) = fVar12 - fVar13;
        fVar13 = *(float *)(lVar7 + 0xc + (longlong)pfVar3);
        fVar10 = *(float *)(lVar4 + 0x10 + (longlong)pfVar3);
        fVar15 = *(float *)(lVar6 + 0xc + (longlong)pfVar3);
        fVar9 = fVar13 + *(float *)(lVar4 + 0xc + (longlong)pfVar3);
        fVar8 = fVar10 + *(float *)(lVar7 + 0x10 + (longlong)pfVar3);
        fVar11 = pfVar3[4] + *(float *)(lVar6 + 0x10 + (longlong)pfVar3);
        fVar10 = fVar10 - *(float *)(lVar7 + 0x10 + (longlong)pfVar3);
        fVar13 = fVar13 - *(float *)(lVar4 + 0xc + (longlong)pfVar3);
        fVar14 = pfVar3[4] - *(float *)(lVar6 + 0x10 + (longlong)pfVar3);
        uVar1 = (ulonglong)puVar5[1];
        fVar12 = fVar15 + pfVar3[3];
        fVar15 = pfVar3[3] - fVar15;
        pfVar3 = pfVar3 + 8;
        puVar5 = puVar5 + 4;
        *(float *)(param_1 + uVar1 * 8) = fVar9 + fVar12;
        *(float *)(param_1 + 4 + uVar1 * 8) = fVar8 + fVar11;
        *(float *)(param_1 + 0x10 + uVar1 * 8) = fVar12 - fVar9;
        *(float *)(param_1 + 0x14 + uVar1 * 8) = fVar11 - fVar8;
        *(float *)(param_1 + 8 + uVar1 * 8) = fVar10 + fVar15;
        *(float *)(param_1 + 0xc + uVar1 * 8) = fVar13 + fVar14;
        *(float *)(param_1 + 0x18 + uVar1 * 8) = fVar15 - fVar10;
        *(float *)(param_1 + 0x1c + uVar1 * 8) = fVar14 - fVar13;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
      if (param_7 <= param_6) {
        return;
      }
    }
    param_3 = param_3 - param_2;
    pfVar3 = (float *)(param_2 + 4 + param_6 * 8);
    param_5 = param_5 - param_2;
    do {
      fVar13 = *(float *)(param_5 + -4 + (longlong)pfVar3);
      fVar10 = *(float *)((param_4 - param_2) + -4 + (longlong)pfVar3);
      fVar15 = *(float *)((longlong)pfVar3 + (param_4 - param_2));
      fVar9 = fVar13 + *(float *)(param_3 + -4 + (longlong)pfVar3);
      fVar8 = *(float *)((longlong)pfVar3 + param_3) + *(float *)((longlong)pfVar3 + param_5);
      fVar14 = fVar10 + pfVar3[-1];
      fVar11 = *(float *)((longlong)pfVar3 + param_3) - *(float *)((longlong)pfVar3 + param_5);
      fVar13 = fVar13 - *(float *)(param_3 + -4 + (longlong)pfVar3);
      uVar1 = (ulonglong)*(ushort *)(param_8 + param_6 * 2);
      fVar10 = pfVar3[-1] - fVar10;
      fVar12 = fVar15 + *pfVar3;
      fVar15 = *pfVar3 - fVar15;
      param_6 = param_6 + 1;
      pfVar3 = pfVar3 + 2;
      *(float *)(param_1 + uVar1 * 8) = fVar9 + fVar14;
      *(float *)(param_1 + 0x10 + uVar1 * 8) = fVar14 - fVar9;
      *(float *)(param_1 + 4 + uVar1 * 8) = fVar8 + fVar12;
      *(float *)(param_1 + 0x14 + uVar1 * 8) = fVar12 - fVar8;
      *(float *)(param_1 + 8 + uVar1 * 8) = fVar11 + fVar10;
      *(float *)(param_1 + 0xc + uVar1 * 8) = fVar13 + fVar15;
      *(float *)(param_1 + 0x18 + uVar1 * 8) = fVar10 - fVar11;
      *(float *)(param_1 + 0x1c + uVar1 * 8) = fVar15 - fVar13;
    } while (param_6 < param_7);
  }
  return;
}



// FUNCTION 1452fd690 FUN_1452fd690 body=1036 status=ok
// SIG undefined FUN_1452fd690(void)

void FUN_1452fd690(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,ulonglong param_6,ulonglong param_7,longlong param_8)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
  ushort *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (param_6 < param_7) {
    if (3 < param_7 - param_6) {
      pfVar4 = (float *)(param_6 * 8 + 0xc + param_4);
      puVar7 = (ushort *)(param_8 + (param_6 + 2) * 2);
      lVar9 = param_3 - param_4;
      lVar5 = param_2 - param_4;
      lVar8 = param_5 - param_4;
      lVar6 = ((param_7 - param_6) - 4 >> 2) + 1;
      param_6 = param_6 + lVar6 * 4;
      do {
        uVar3 = (ulonglong)puVar7[-2];
        *(float *)(param_1 + uVar3 * 8) = pfVar4[-3] + *(float *)((longlong)pfVar4 + lVar5 + -0xc);
        *(float *)(param_1 + 4 + uVar3 * 8) = pfVar4[-2] + *(float *)((longlong)pfVar4 + lVar5 + -8)
        ;
        *(float *)(param_1 + 8 + uVar3 * 8) =
             *(float *)((longlong)pfVar4 + lVar5 + -0xc) - pfVar4[-3];
        *(float *)(param_1 + 0xc + uVar3 * 8) =
             *(float *)((longlong)pfVar4 + lVar5 + -8) - pfVar4[-2];
        *(float *)(param_1 + 0x10 + uVar3 * 8) =
             *(float *)(lVar9 + -0xc + (longlong)pfVar4) +
             *(float *)(lVar8 + -0xc + (longlong)pfVar4);
        *(float *)(param_1 + 0x14 + uVar3 * 8) =
             *(float *)(lVar9 + -8 + (longlong)pfVar4) + *(float *)(lVar8 + -8 + (longlong)pfVar4);
        *(float *)(param_1 + 0x18 + uVar3 * 8) =
             *(float *)(lVar8 + -0xc + (longlong)pfVar4) -
             *(float *)(lVar9 + -0xc + (longlong)pfVar4);
        *(float *)(param_1 + 0x1c + uVar3 * 8) =
             *(float *)(lVar8 + -8 + (longlong)pfVar4) - *(float *)(lVar9 + -8 + (longlong)pfVar4);
        uVar3 = (ulonglong)puVar7[-1];
        *(float *)(param_1 + uVar3 * 8) = pfVar4[-1] + *(float *)((longlong)pfVar4 + lVar5 + -4);
        *(float *)(param_1 + 4 + uVar3 * 8) = *(float *)((longlong)pfVar4 + lVar5) + *pfVar4;
        *(float *)(param_1 + 8 + uVar3 * 8) = *(float *)((longlong)pfVar4 + lVar5 + -4) - pfVar4[-1]
        ;
        *(float *)(param_1 + 0xc + uVar3 * 8) = *(float *)((longlong)pfVar4 + lVar5) - *pfVar4;
        *(float *)(param_1 + 0x10 + uVar3 * 8) =
             *(float *)(lVar8 + -4 + (longlong)pfVar4) + *(float *)(lVar9 + -4 + (longlong)pfVar4);
        *(float *)(param_1 + 0x14 + uVar3 * 8) =
             *(float *)(lVar9 + (longlong)pfVar4) + *(float *)(lVar8 + (longlong)pfVar4);
        *(float *)(param_1 + 0x18 + uVar3 * 8) =
             *(float *)(lVar8 + -4 + (longlong)pfVar4) - *(float *)(lVar9 + -4 + (longlong)pfVar4);
        *(float *)(param_1 + 0x1c + uVar3 * 8) =
             *(float *)(lVar8 + (longlong)pfVar4) - *(float *)(lVar9 + (longlong)pfVar4);
        uVar3 = (ulonglong)*puVar7;
        *(float *)(param_1 + uVar3 * 8) = pfVar4[1] + *(float *)((longlong)pfVar4 + lVar5 + 4);
        *(float *)(param_1 + 4 + uVar3 * 8) = pfVar4[2] + *(float *)((longlong)pfVar4 + lVar5 + 8);
        *(float *)(param_1 + 8 + uVar3 * 8) = *(float *)((longlong)pfVar4 + lVar5 + 4) - pfVar4[1];
        *(float *)(param_1 + 0xc + uVar3 * 8) = *(float *)((longlong)pfVar4 + lVar5 + 8) - pfVar4[2]
        ;
        *(float *)(param_1 + 0x10 + uVar3 * 8) =
             *(float *)(lVar9 + 4 + (longlong)pfVar4) + *(float *)(lVar8 + 4 + (longlong)pfVar4);
        *(float *)(param_1 + 0x14 + uVar3 * 8) =
             *(float *)(lVar9 + 8 + (longlong)pfVar4) + *(float *)(lVar8 + 8 + (longlong)pfVar4);
        *(float *)(param_1 + 0x18 + uVar3 * 8) =
             *(float *)(lVar8 + 4 + (longlong)pfVar4) - *(float *)(lVar9 + 4 + (longlong)pfVar4);
        *(float *)(param_1 + 0x1c + uVar3 * 8) =
             *(float *)(lVar8 + 8 + (longlong)pfVar4) - *(float *)(lVar9 + 8 + (longlong)pfVar4);
        uVar3 = (ulonglong)puVar7[1];
        *(float *)(param_1 + uVar3 * 8) = pfVar4[3] + *(float *)((longlong)pfVar4 + lVar5 + 0xc);
        *(float *)(param_1 + 4 + uVar3 * 8) =
             pfVar4[4] + *(float *)((longlong)pfVar4 + lVar5 + 0x10);
        puVar7 = puVar7 + 4;
        *(float *)(param_1 + 8 + uVar3 * 8) = *(float *)((longlong)pfVar4 + lVar5 + 0xc) - pfVar4[3]
        ;
        *(float *)(param_1 + 0xc + uVar3 * 8) =
             *(float *)((longlong)pfVar4 + lVar5 + 0x10) - pfVar4[4];
        *(float *)(param_1 + 0x10 + uVar3 * 8) =
             *(float *)(lVar8 + 0xc + (longlong)pfVar4) + *(float *)(lVar9 + 0xc + (longlong)pfVar4)
        ;
        *(float *)(param_1 + 0x14 + uVar3 * 8) =
             *(float *)(lVar8 + 0x10 + (longlong)pfVar4) +
             *(float *)(lVar9 + 0x10 + (longlong)pfVar4);
        *(float *)(param_1 + 0x18 + uVar3 * 8) =
             *(float *)(lVar8 + 0xc + (longlong)pfVar4) - *(float *)(lVar9 + 0xc + (longlong)pfVar4)
        ;
        pfVar1 = (float *)(lVar8 + 0x10 + (longlong)pfVar4);
        pfVar2 = (float *)(lVar9 + 0x10 + (longlong)pfVar4);
        pfVar4 = pfVar4 + 8;
        *(float *)(param_1 + 0x1c + uVar3 * 8) = *pfVar1 - *pfVar2;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      if (param_7 <= param_6) {
        return;
      }
    }
    param_2 = param_2 - param_4;
    param_5 = param_5 - param_4;
    pfVar4 = (float *)(param_4 + 4 + param_6 * 8);
    param_3 = param_3 - param_4;
    do {
      uVar3 = (ulonglong)*(ushort *)(param_8 + param_6 * 2);
      param_6 = param_6 + 1;
      *(float *)(param_1 + uVar3 * 8) = pfVar4[-1] + *(float *)(param_2 + -4 + (longlong)pfVar4);
      *(float *)(param_1 + 4 + uVar3 * 8) = *pfVar4 + *(float *)((longlong)pfVar4 + param_2);
      *(float *)(param_1 + 8 + uVar3 * 8) = *(float *)(param_2 + -4 + (longlong)pfVar4) - pfVar4[-1]
      ;
      *(float *)(param_1 + 0xc + uVar3 * 8) = *(float *)((longlong)pfVar4 + param_2) - *pfVar4;
      *(float *)(param_1 + 0x10 + uVar3 * 8) =
           *(float *)(param_3 + -4 + (longlong)pfVar4) + *(float *)(param_5 + -4 + (longlong)pfVar4)
      ;
      *(float *)(param_1 + 0x14 + uVar3 * 8) =
           *(float *)((longlong)pfVar4 + param_3) + *(float *)((longlong)pfVar4 + param_5);
      *(float *)(param_1 + 0x18 + uVar3 * 8) =
           *(float *)(param_5 + -4 + (longlong)pfVar4) - *(float *)(param_3 + -4 + (longlong)pfVar4)
      ;
      pfVar1 = (float *)((longlong)pfVar4 + param_5);
      pfVar2 = (float *)((longlong)pfVar4 + param_3);
      pfVar4 = pfVar4 + 2;
      *(float *)(param_1 + 0x1c + uVar3 * 8) = *pfVar1 - *pfVar2;
    } while (param_6 < param_7);
  }
  return;
}



// FUNCTION 1452fdc10 FUN_1452fdc10 body=482 status=ok
// SIG undefined FUN_1452fdc10(void)

void FUN_1452fdc10(undefined2 *param_1,float param_2,float *param_3,ulonglong param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  float *pfVar7;
  
  pfVar7 = param_3 + param_4;
  param_4 = param_4 >> 1;
  uVar5 = 0;
  if (3 < param_4) {
    lVar6 = (param_4 - 4 >> 2) + 1;
    uVar5 = lVar6 * 4;
    do {
      iVar4 = (int)(param_2 * *param_3);
      iVar2 = (int)(param_2 * pfVar7[-1]);
      if (iVar4 < 0x8000) {
        uVar3 = (undefined2)iVar4;
        if (iVar4 < -0x7fff) {
          uVar3 = 0x8000;
        }
      }
      else {
        uVar3 = 0x7fff;
      }
      if (iVar2 < 0x8000) {
        uVar1 = (undefined2)iVar2;
        if (iVar2 < -0x7fff) {
          uVar1 = 0x8000;
        }
      }
      else {
        uVar1 = 0x7fff;
      }
      *param_1 = uVar3;
      param_1[1] = uVar1;
      iVar4 = (int)(param_2 * param_3[1]);
      iVar2 = (int)(param_2 * pfVar7[-2]);
      if (iVar4 < 0x8000) {
        uVar3 = (undefined2)iVar4;
        if (iVar4 < -0x7fff) {
          uVar3 = 0x8000;
        }
      }
      else {
        uVar3 = 0x7fff;
      }
      if (iVar2 < 0x8000) {
        uVar1 = (undefined2)iVar2;
        if (iVar2 < -0x7fff) {
          uVar1 = 0x8000;
        }
      }
      else {
        uVar1 = 0x7fff;
      }
      param_1[2] = uVar3;
      param_1[3] = uVar1;
      iVar4 = (int)(param_2 * param_3[2]);
      iVar2 = (int)(param_2 * pfVar7[-3]);
      if (iVar4 < 0x8000) {
        uVar3 = (undefined2)iVar4;
        if (iVar4 < -0x7fff) {
          uVar3 = 0x8000;
        }
      }
      else {
        uVar3 = 0x7fff;
      }
      if (iVar2 < 0x8000) {
        uVar1 = (undefined2)iVar2;
        if (iVar2 < -0x7fff) {
          uVar1 = 0x8000;
        }
      }
      else {
        uVar1 = 0x7fff;
      }
      param_1[4] = uVar3;
      pfVar7 = pfVar7 + -4;
      param_1[5] = uVar1;
      iVar4 = (int)(param_2 * param_3[3]);
      iVar2 = (int)(param_2 * *pfVar7);
      if (iVar4 < 0x8000) {
        uVar3 = (undefined2)iVar4;
        if (iVar4 < -0x7fff) {
          uVar3 = 0x8000;
        }
      }
      else {
        uVar3 = 0x7fff;
      }
      if (iVar2 < 0x8000) {
        uVar1 = (undefined2)iVar2;
        if (iVar2 < -0x7fff) {
          uVar1 = 0x8000;
        }
      }
      else {
        uVar1 = 0x7fff;
      }
      param_1[6] = uVar3;
      param_3 = param_3 + 4;
      param_1[7] = uVar1;
      param_1 = param_1 + 8;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (uVar5 < param_4) {
    lVar6 = param_4 - uVar5;
    do {
      pfVar7 = pfVar7 + -1;
      iVar4 = (int)(param_2 * *param_3);
      iVar2 = (int)(param_2 * *pfVar7);
      if (iVar4 < 0x8000) {
        uVar3 = (undefined2)iVar4;
        if (iVar4 < -0x7fff) {
          uVar3 = 0x8000;
        }
      }
      else {
        uVar3 = 0x7fff;
      }
      if (iVar2 < 0x8000) {
        uVar1 = (undefined2)iVar2;
        if (iVar2 < -0x7fff) {
          uVar1 = 0x8000;
        }
      }
      else {
        uVar1 = 0x7fff;
      }
      *param_1 = uVar3;
      param_3 = param_3 + 1;
      param_1[1] = uVar1;
      param_1 = param_1 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 1452fde00 FUN_1452fde00 body=655 status=ok
// SIG undefined FUN_1452fde00(void)

void FUN_1452fde00(undefined2 *param_1,undefined2 *param_2,float param_3,float *param_4,
                  ulonglong param_5)

{
  undefined2 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 uVar7;
  int iVar8;
  float *pfVar9;
  
  uVar3 = 0;
  uVar4 = param_5 >> 1;
  pfVar9 = param_4 + param_5;
  if (3 < uVar4) {
    lVar2 = (uVar4 - 4 >> 2) + 1;
    uVar3 = lVar2 * 4;
    do {
      iVar8 = (int)(param_3 * *param_4);
      iVar6 = (int)(param_3 * pfVar9[-1]);
      if (iVar8 < 0x8000) {
        uVar7 = (undefined2)iVar8;
        if (iVar8 < -0x7fff) {
          uVar7 = 0x8000;
        }
      }
      else {
        uVar7 = 0x7fff;
      }
      if (iVar6 < 0x8000) {
        uVar5 = (undefined2)iVar6;
        if (iVar6 < -0x7fff) {
          uVar5 = 0x8000;
        }
      }
      else {
        uVar5 = 0x7fff;
      }
      *param_1 = *param_2;
      param_1[1] = uVar7;
      uVar7 = param_2[1];
      param_1[3] = uVar5;
      param_1[2] = uVar7;
      iVar8 = (int)(param_3 * param_4[1]);
      iVar6 = (int)(param_3 * pfVar9[-2]);
      if (iVar8 < 0x8000) {
        uVar7 = (undefined2)iVar8;
        if (iVar8 < -0x7fff) {
          uVar7 = 0x8000;
        }
      }
      else {
        uVar7 = 0x7fff;
      }
      if (iVar6 < 0x8000) {
        uVar5 = (undefined2)iVar6;
        if (iVar6 < -0x7fff) {
          uVar5 = 0x8000;
        }
      }
      else {
        uVar5 = 0x7fff;
      }
      param_1[4] = param_2[2];
      param_1[5] = uVar7;
      uVar7 = param_2[3];
      param_1[7] = uVar5;
      param_1[6] = uVar7;
      iVar8 = (int)(param_3 * param_4[2]);
      iVar6 = (int)(param_3 * pfVar9[-3]);
      if (iVar8 < 0x8000) {
        uVar7 = (undefined2)iVar8;
        if (iVar8 < -0x7fff) {
          uVar7 = 0x8000;
        }
      }
      else {
        uVar7 = 0x7fff;
      }
      if (iVar6 < 0x8000) {
        uVar5 = (undefined2)iVar6;
        if (iVar6 < -0x7fff) {
          uVar5 = 0x8000;
        }
      }
      else {
        uVar5 = 0x7fff;
      }
      pfVar9 = pfVar9 + -4;
      param_1[8] = param_2[4];
      param_1[9] = uVar7;
      uVar7 = param_2[5];
      param_1[0xb] = uVar5;
      param_1[10] = uVar7;
      iVar8 = (int)(param_3 * param_4[3]);
      iVar6 = (int)(param_3 * *pfVar9);
      if (iVar8 < 0x8000) {
        uVar7 = (undefined2)iVar8;
        if (iVar8 < -0x7fff) {
          uVar7 = 0x8000;
        }
      }
      else {
        uVar7 = 0x7fff;
      }
      if (iVar6 < 0x8000) {
        uVar5 = (undefined2)iVar6;
        if (iVar6 < -0x7fff) {
          uVar5 = 0x8000;
        }
      }
      else {
        uVar5 = 0x7fff;
      }
      param_4 = param_4 + 4;
      param_1[0xc] = param_2[6];
      param_1[0xd] = uVar7;
      puVar1 = param_2 + 7;
      param_2 = param_2 + 8;
      param_1[0xe] = *puVar1;
      param_1[0xf] = uVar5;
      param_1 = param_1 + 0x10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (uVar3 < uVar4) {
    lVar2 = uVar4 - uVar3;
    do {
      pfVar9 = pfVar9 + -1;
      iVar8 = (int)(param_3 * *param_4);
      iVar6 = (int)(param_3 * *pfVar9);
      if (iVar8 < 0x8000) {
        uVar7 = (undefined2)iVar8;
        if (iVar8 < -0x7fff) {
          uVar7 = 0x8000;
        }
      }
      else {
        uVar7 = 0x7fff;
      }
      if (iVar6 < 0x8000) {
        uVar5 = (undefined2)iVar6;
        if (iVar6 < -0x7fff) {
          uVar5 = 0x8000;
        }
      }
      else {
        uVar5 = 0x7fff;
      }
      param_4 = param_4 + 1;
      *param_1 = *param_2;
      param_1[1] = uVar7;
      puVar1 = param_2 + 1;
      param_2 = param_2 + 2;
      param_1[2] = *puVar1;
      param_1[3] = uVar5;
      param_1 = param_1 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1452fe090 FUN_1452fe090 body=534 status=ok
// SIG undefined FUN_1452fe090(void)

void FUN_1452fe090(undefined4 *param_1,undefined4 *param_2,ulonglong param_3,ulonglong param_4,
                  longlong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  float *pfVar9;
  ulonglong uVar10;
  
  *param_1 = *param_2;
  uVar10 = 1;
  param_1[param_3 >> 1] = (float)param_2[1] * 0.70710677;
  if (1 < param_4) {
    if (3 < param_4 - 1) {
      pfVar5 = (float *)(param_5 + 0xc);
      pfVar7 = (float *)(param_1 + 3);
      lVar8 = (longlong)param_2 - param_5;
      pfVar9 = (float *)(param_1 + (param_3 - 3));
      lVar6 = (param_4 - 5 >> 2) + 1;
      uVar10 = lVar6 * 4 + 1;
      do {
        fVar1 = pfVar5[-1];
        fVar2 = *pfVar5;
        fVar3 = *(float *)((longlong)pfVar5 + lVar8 + -4);
        fVar4 = *(float *)((longlong)pfVar5 + lVar8);
        pfVar7[-2] = fVar2 * fVar4 + fVar1 * fVar3;
        pfVar9[2] = fVar1 * fVar4 - fVar2 * fVar3;
        fVar1 = pfVar5[1];
        fVar2 = pfVar5[2];
        fVar3 = *(float *)((longlong)pfVar5 + lVar8 + 4);
        fVar4 = *(float *)((longlong)pfVar5 + lVar8 + 8);
        pfVar7[-1] = fVar2 * fVar4 + fVar1 * fVar3;
        pfVar9[1] = fVar1 * fVar4 - fVar2 * fVar3;
        fVar1 = pfVar5[3];
        fVar2 = pfVar5[4];
        fVar3 = *(float *)((longlong)pfVar5 + lVar8 + 0xc);
        fVar4 = *(float *)((longlong)pfVar5 + lVar8 + 0x10);
        *pfVar7 = fVar2 * fVar4 + fVar1 * fVar3;
        *pfVar9 = fVar1 * fVar4 - fVar2 * fVar3;
        fVar1 = pfVar5[5];
        fVar2 = pfVar5[6];
        fVar3 = *(float *)((longlong)pfVar5 + lVar8 + 0x14);
        fVar4 = *(float *)((longlong)pfVar5 + lVar8 + 0x18);
        pfVar5 = pfVar5 + 8;
        pfVar7[1] = fVar2 * fVar4 + fVar1 * fVar3;
        pfVar7 = pfVar7 + 4;
        pfVar9[-1] = fVar1 * fVar4 - fVar2 * fVar3;
        pfVar9 = pfVar9 + -4;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      if (param_4 <= uVar10) {
        return;
      }
    }
    pfVar5 = (float *)(param_5 + 4 + uVar10 * 8);
    pfVar7 = (float *)(param_1 + (param_3 - uVar10));
    do {
      fVar1 = pfVar5[-1];
      fVar2 = *pfVar5;
      fVar3 = *(float *)((longlong)pfVar5 + ((longlong)param_2 - param_5) + -4);
      fVar4 = *(float *)((longlong)pfVar5 + ((longlong)param_2 - param_5));
      pfVar5 = pfVar5 + 2;
      param_1[uVar10] = fVar2 * fVar4 + fVar1 * fVar3;
      uVar10 = uVar10 + 1;
      *pfVar7 = fVar1 * fVar4 - fVar2 * fVar3;
      pfVar7 = pfVar7 + -1;
    } while (uVar10 < param_4);
  }
  return;
}



// FUNCTION 1452fe2b0 FUN_1452fe2b0 body=527 status=ok
// SIG undefined FUN_1452fe2b0(void)

void FUN_1452fe2b0(float *param_1,float *param_2,ulonglong param_3,ulonglong param_4,
                  longlong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar10 = 1;
  *param_1 = *param_2 + *param_2;
  param_1[1] = param_2[param_3 >> 1] * 1.4142135;
  if (1 < param_4) {
    if (3 < param_4 - 1) {
      pfVar5 = param_1 + 3;
      pfVar7 = param_2 + 3;
      pfVar8 = param_2 + (param_3 - 3);
      lVar9 = param_5 - (longlong)param_1;
      lVar6 = (param_4 - 5 >> 2) + 1;
      uVar10 = lVar6 * 4 + 1;
      do {
        fVar1 = *(float *)((longlong)pfVar5 + lVar9 + -4);
        fVar2 = *(float *)((longlong)pfVar5 + lVar9);
        fVar3 = pfVar7[-2];
        fVar4 = pfVar8[2];
        pfVar5[-1] = fVar1 * fVar3 - fVar2 * fVar4;
        *pfVar5 = fVar1 * fVar4 + fVar2 * fVar3;
        fVar1 = *(float *)((longlong)pfVar5 + lVar9 + 4);
        fVar2 = *(float *)((longlong)pfVar5 + lVar9 + 8);
        fVar3 = pfVar7[-1];
        fVar4 = pfVar8[1];
        pfVar5[1] = fVar1 * fVar3 - fVar2 * fVar4;
        pfVar5[2] = fVar1 * fVar4 + fVar2 * fVar3;
        fVar1 = *(float *)((longlong)pfVar5 + lVar9 + 0xc);
        fVar2 = *(float *)((longlong)pfVar5 + lVar9 + 0x10);
        fVar3 = *pfVar7;
        fVar4 = *pfVar8;
        pfVar5[3] = fVar1 * fVar3 - fVar2 * fVar4;
        pfVar5[4] = fVar1 * fVar4 + fVar2 * fVar3;
        fVar1 = *(float *)((longlong)pfVar5 + lVar9 + 0x14);
        fVar2 = *(float *)((longlong)pfVar5 + lVar9 + 0x18);
        fVar3 = pfVar7[1];
        fVar4 = pfVar8[-1];
        pfVar7 = pfVar7 + 4;
        pfVar8 = pfVar8 + -4;
        pfVar5[5] = fVar1 * fVar3 - fVar2 * fVar4;
        pfVar5[6] = fVar1 * fVar4 + fVar2 * fVar3;
        pfVar5 = pfVar5 + 8;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      if (param_4 <= uVar10) {
        return;
      }
    }
    pfVar5 = param_1 + uVar10 * 2 + 1;
    pfVar7 = param_2 + (param_3 - uVar10);
    do {
      fVar1 = *(float *)((longlong)pfVar5 + (param_5 - (longlong)param_1) + -4);
      fVar2 = *(float *)((longlong)pfVar5 + (param_5 - (longlong)param_1));
      fVar3 = param_2[uVar10];
      fVar4 = *pfVar7;
      uVar10 = uVar10 + 1;
      pfVar7 = pfVar7 + -1;
      pfVar5[-1] = fVar1 * fVar3 - fVar2 * fVar4;
      *pfVar5 = fVar1 * fVar4 + fVar2 * fVar3;
      pfVar5 = pfVar5 + 2;
    } while (uVar10 < param_4);
  }
  return;
}



// FUNCTION 1452fe4c0 FUN_1452fe4c0 body=243 status=ok
// SIG undefined FUN_1452fe4c0(void)

void FUN_1452fe4c0(longlong param_1,longlong param_2,ulonglong param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined *puVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if (param_3 < 2) {
    FUN_1452fb960(param_1,param_3);
    return;
  }
  pfVar1 = (float *)(param_1 + param_2 * 8);
  pfVar8 = (float *)(param_1 + 0x10);
  pfVar7 = (float *)(param_1 + -0x18 + param_3 * 0x10);
  FUN_1452fb960(param_1,2);
  if (pfVar8 < pfVar1) {
    puVar6 = &DAT_149d35ea0 + (param_3 * 8 - (longlong)pfVar8);
    do {
      fVar14 = *(float *)(puVar6 + (longlong)pfVar8);
      fVar16 = *(float *)((longlong)(puVar6 + (longlong)pfVar8) + 8);
      fVar9 = ((float)*(undefined8 *)(pfVar7 + 2) - *pfVar8) * 0.5;
      fVar10 = ((float)((ulonglong)*(undefined8 *)(pfVar7 + 2) >> 0x20) + pfVar8[1]) * -0.5;
      fVar11 = (*pfVar7 - pfVar8[2]) * 0.5;
      fVar12 = (pfVar7[1] + pfVar8[3]) * -0.5;
      fVar2 = *pfVar8;
      fVar3 = pfVar8[1];
      fVar4 = pfVar8[2];
      fVar5 = pfVar8[3];
      fVar13 = fVar10 * fVar14 - *(float *)((longlong)pfVar8 + (longlong)(puVar6 + 4)) * fVar9;
      fVar14 = fVar9 * fVar14 + *(float *)((longlong)pfVar8 + (longlong)(puVar6 + 4)) * fVar10;
      fVar15 = fVar12 * fVar16 - *(float *)((longlong)pfVar8 + (longlong)(puVar6 + 0xc)) * fVar11;
      fVar16 = fVar11 * fVar16 + *(float *)((longlong)pfVar8 + (longlong)(puVar6 + 0xc)) * fVar12;
      *pfVar8 = (fVar9 + fVar2) - fVar13;
      pfVar8[1] = fVar10 + fVar3 + fVar14;
      pfVar8[2] = (fVar11 + fVar4) - fVar15;
      pfVar8[3] = fVar12 + fVar5 + fVar16;
      pfVar8 = pfVar8 + 4;
      *pfVar7 = fVar11 + fVar4 + fVar15;
      pfVar7[1] = -(fVar12 + fVar5) + fVar16;
      pfVar7[2] = fVar9 + fVar2 + fVar13;
      pfVar7[3] = -(fVar10 + fVar3) + fVar14;
      pfVar7 = pfVar7 + -4;
    } while (pfVar8 < pfVar1);
  }
  return;
}



// FUNCTION 1452fe5c0 FUN_1452fe5c0 body=242 status=ok
// SIG undefined FUN_1452fe5c0(void)

void FUN_1452fe5c0(longlong param_1,longlong param_2,ulonglong param_3)

{
  float *pfVar1;
  undefined *puVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
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
  
  if (param_3 < 2) {
    FUN_1452fb960(param_1,param_3);
    return;
  }
  pfVar1 = (float *)(param_1 + param_2 * 8);
  pfVar4 = (float *)(param_1 + 0x10);
  pfVar3 = (float *)(param_1 + -0x18 + param_3 * 0x10);
  FUN_1452fbcc0(param_1,2);
  if (pfVar4 < pfVar1) {
    puVar2 = &DAT_149d35ea0 + (param_3 * 8 - (longlong)pfVar4);
    do {
      fVar6 = *(float *)(puVar2 + (longlong)pfVar4);
      fVar7 = *(float *)((longlong)(puVar2 + (longlong)pfVar4) + 8);
      fVar8 = ((float)*(undefined8 *)(pfVar3 + 2) - *pfVar4) * -0.5;
      fVar9 = ((float)((ulonglong)*(undefined8 *)(pfVar3 + 2) >> 0x20) + pfVar4[1]) * 0.5;
      fVar10 = (*pfVar3 - pfVar4[2]) * -0.5;
      fVar11 = (pfVar3[1] + pfVar4[3]) * 0.5;
      fVar12 = *pfVar4 - fVar8;
      fVar13 = pfVar4[1] - fVar9;
      fVar14 = pfVar4[2] - fVar10;
      fVar15 = pfVar4[3] - fVar11;
      fVar5 = *(float *)((longlong)pfVar4 + (longlong)(puVar2 + 4)) * fVar8 + fVar9 * fVar6;
      fVar6 = -*(float *)((longlong)pfVar4 + (longlong)(puVar2 + 4)) * fVar9 + fVar8 * fVar6;
      fVar8 = *(float *)((longlong)pfVar4 + (longlong)(puVar2 + 0xc)) * fVar10 + fVar11 * fVar7;
      fVar7 = -*(float *)((longlong)pfVar4 + (longlong)(puVar2 + 0xc)) * fVar11 + fVar10 * fVar7;
      *pfVar4 = fVar12 - fVar5;
      pfVar4[1] = fVar13 + fVar6;
      pfVar4[2] = fVar14 - fVar8;
      pfVar4[3] = fVar15 + fVar7;
      pfVar4 = pfVar4 + 4;
      *pfVar3 = fVar14 + fVar8;
      pfVar3[1] = -fVar15 + fVar7;
      pfVar3[2] = fVar12 + fVar5;
      pfVar3[3] = -fVar13 + fVar6;
      pfVar3 = pfVar3 + -4;
    } while (pfVar4 < pfVar1);
  }
  return;
}



// FUNCTION 1452fe6c0 FUN_1452fe6c0 body=265 status=ok
// SIG undefined FUN_1452fe6c0(void)

void FUN_1452fe6c0(longlong param_1,longlong param_2,ulonglong param_3)

{
  ushort *puVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  float *pfVar13;
  ushort *puVar14;
  float *pfVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  puVar14 = (ushort *)(param_2 + -4);
  do {
    uVar16 = (ulonglong)puVar14[3];
    pfVar15 = (float *)(param_1 + (ulonglong)puVar14[2] * 8);
    pfVar2 = pfVar15 + uVar16 * 2;
    pfVar12 = pfVar15 + uVar16 * 4;
    pfVar13 = (float *)(&DAT_149d35e90 + uVar16 * 8);
    do {
      pfVar3 = pfVar12 + uVar16 * 2;
      fVar4 = *pfVar13;
      fVar5 = pfVar13[2];
      fVar6 = pfVar13[1];
      fVar7 = pfVar13[3];
      pfVar13 = pfVar13 + 4;
      fVar8 = *pfVar15;
      fVar9 = pfVar15[1];
      fVar10 = pfVar15[2];
      fVar11 = pfVar15[3];
      fVar25 = fVar4 * *pfVar12 - pfVar12[1] * fVar6;
      fVar26 = fVar4 * pfVar12[1] + *pfVar12 * fVar6;
      fVar27 = fVar5 * pfVar12[2] - pfVar12[3] * fVar7;
      fVar28 = fVar5 * pfVar12[3] + pfVar12[2] * fVar7;
      fVar17 = pfVar3[1] * fVar4 - fVar6 * *pfVar3;
      fVar18 = *pfVar3 * fVar4 + fVar6 * pfVar3[1];
      fVar19 = pfVar3[3] * fVar5 - fVar7 * pfVar3[2];
      fVar20 = pfVar3[2] * fVar5 + fVar7 * pfVar3[3];
      pfVar3 = pfVar12 + uVar16 * -2;
      fVar4 = *pfVar3;
      fVar5 = pfVar3[1];
      fVar6 = pfVar3[2];
      fVar7 = pfVar3[3];
      fVar21 = fVar18 + fVar25;
      fVar22 = fVar17 + fVar26;
      fVar23 = fVar20 + fVar27;
      fVar24 = fVar19 + fVar28;
      fVar26 = fVar26 - fVar17;
      fVar25 = fVar25 - fVar18;
      fVar28 = fVar28 - fVar19;
      fVar27 = fVar27 - fVar20;
      *pfVar15 = fVar8 + fVar21;
      pfVar15[1] = fVar9 + fVar22;
      pfVar15[2] = fVar10 + fVar23;
      pfVar15[3] = fVar11 + fVar24;
      pfVar15 = pfVar15 + 4;
      pfVar3 = pfVar12 + uVar16 * -2;
      *pfVar3 = fVar26 + fVar4;
      pfVar3[1] = -fVar25 + fVar5;
      pfVar3[2] = fVar28 + fVar6;
      pfVar3[3] = -fVar27 + fVar7;
      *pfVar12 = fVar8 - fVar21;
      pfVar12[1] = fVar9 - fVar22;
      pfVar12[2] = fVar10 - fVar23;
      pfVar12[3] = fVar11 - fVar24;
      pfVar3 = pfVar12 + uVar16 * 2;
      *pfVar3 = fVar4 - fVar26;
      pfVar3[1] = fVar5 + fVar25;
      pfVar3[2] = fVar6 - fVar28;
      pfVar3[3] = fVar7 + fVar27;
      pfVar12 = pfVar12 + 4;
    } while (pfVar15 < pfVar2);
    puVar1 = puVar14 + 3;
    puVar14 = puVar14 + 2;
  } while (*puVar1 < param_3);
  return;
}



// FUNCTION 1452fe7d0 FUN_1452fe7d0 body=265 status=ok
// SIG undefined FUN_1452fe7d0(void)

void FUN_1452fe7d0(longlong param_1,longlong param_2,ulonglong param_3)

{
  ushort *puVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  float *pfVar13;
  ushort *puVar14;
  float *pfVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  puVar14 = (ushort *)(param_2 + -4);
  do {
    uVar16 = (ulonglong)puVar14[3];
    pfVar15 = (float *)(param_1 + (ulonglong)puVar14[2] * 8);
    pfVar2 = pfVar15 + uVar16 * 2;
    pfVar12 = pfVar15 + uVar16 * 4;
    pfVar13 = (float *)(&DAT_149d35e90 + uVar16 * 8);
    do {
      fVar4 = *pfVar13;
      fVar5 = pfVar13[2];
      pfVar3 = pfVar12 + uVar16 * 2;
      fVar6 = pfVar13[1];
      fVar7 = pfVar13[3];
      pfVar13 = pfVar13 + 4;
      fVar8 = *pfVar15;
      fVar9 = pfVar15[1];
      fVar10 = pfVar15[2];
      fVar11 = pfVar15[3];
      fVar25 = fVar4 * *pfVar3 - pfVar3[1] * fVar6;
      fVar26 = fVar4 * pfVar3[1] + *pfVar3 * fVar6;
      fVar27 = fVar5 * pfVar3[2] - pfVar3[3] * fVar7;
      fVar28 = fVar5 * pfVar3[3] + pfVar3[2] * fVar7;
      fVar17 = pfVar12[1] * fVar4 - fVar6 * *pfVar12;
      fVar18 = *pfVar12 * fVar4 + fVar6 * pfVar12[1];
      fVar19 = pfVar12[3] * fVar5 - fVar7 * pfVar12[2];
      fVar20 = pfVar12[2] * fVar5 + fVar7 * pfVar12[3];
      pfVar3 = pfVar12 + uVar16 * -2;
      fVar4 = *pfVar3;
      fVar5 = pfVar3[1];
      fVar6 = pfVar3[2];
      fVar7 = pfVar3[3];
      fVar21 = fVar18 + fVar25;
      fVar22 = fVar17 + fVar26;
      fVar23 = fVar20 + fVar27;
      fVar24 = fVar19 + fVar28;
      fVar26 = fVar26 - fVar17;
      fVar25 = fVar25 - fVar18;
      fVar28 = fVar28 - fVar19;
      fVar27 = fVar27 - fVar20;
      *pfVar15 = fVar8 + fVar21;
      pfVar15[1] = fVar9 + fVar22;
      pfVar15[2] = fVar10 + fVar23;
      pfVar15[3] = fVar11 + fVar24;
      pfVar15 = pfVar15 + 4;
      pfVar3 = pfVar12 + uVar16 * -2;
      *pfVar3 = fVar26 + fVar4;
      pfVar3[1] = -fVar25 + fVar5;
      pfVar3[2] = fVar28 + fVar6;
      pfVar3[3] = -fVar27 + fVar7;
      *pfVar12 = fVar8 - fVar21;
      pfVar12[1] = fVar9 - fVar22;
      pfVar12[2] = fVar10 - fVar23;
      pfVar12[3] = fVar11 - fVar24;
      pfVar3 = pfVar12 + uVar16 * 2;
      *pfVar3 = fVar4 - fVar26;
      pfVar3[1] = fVar5 + fVar25;
      pfVar3[2] = fVar6 - fVar28;
      pfVar3[3] = fVar7 + fVar27;
      pfVar12 = pfVar12 + 4;
    } while (pfVar15 < pfVar2);
    puVar1 = puVar14 + 3;
    puVar14 = puVar14 + 2;
  } while (*puVar1 < param_3);
  return;
}



// FUNCTION 1452fe8e0 FUN_1452fe8e0 body=227 status=ok
// SIG undefined FUN_1452fe8e0(void)

void FUN_1452fe8e0(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                  longlong param_5)

{
  float *pfVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  
  if (param_3 < 8) {
    FUN_1452fe090(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    if (((param_4 & 3) != 0) || (param_4 < 4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_1452fe090(param_1,param_2,param_3,4,param_5);
    if (4 < param_4) {
      puVar13 = (undefined8 *)(param_3 * 4 + -0x14 + param_1);
      puVar12 = (undefined8 *)(param_1 + 0x10);
      lVar14 = (param_4 - 5 >> 1) + 1;
      pfVar11 = (float *)(param_5 + 0x20);
      do {
        pfVar1 = (float *)((param_2 - param_5) + (longlong)pfVar11);
        fVar3 = *pfVar1;
        fVar4 = pfVar1[1];
        fVar5 = pfVar1[2];
        fVar6 = pfVar1[3];
        fVar7 = *pfVar11;
        fVar8 = pfVar11[2];
        fVar9 = pfVar11[1];
        fVar10 = pfVar11[3];
        pfVar11 = pfVar11 + 4;
        *puVar12 = CONCAT44(fVar5 * fVar8 + fVar10 * fVar6,fVar3 * fVar7 + fVar9 * fVar4);
        puVar12 = puVar12 + 1;
        *puVar13 = CONCAT44(fVar4 * fVar7 - fVar9 * fVar3,fVar6 * fVar8 - fVar10 * fVar5);
        puVar13 = puVar13 + -1;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
  }
  return;
}



// FUNCTION 1452fe9d0 FUN_1452fe9d0 body=708 status=ok
// SIG undefined FUN_1452fe9d0(void)

void FUN_1452fe9d0(longlong param_1,longlong param_2,ulonglong param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if (param_3 < 2) {
    FUN_1452fb960(param_1,param_3);
    return;
  }
  pfVar2 = (float *)(param_1 + param_2 * 8);
  pfVar12 = (float *)(&DAT_149d35ea0 + param_3 * 8);
  pfVar11 = (float *)(param_1 + -0x18 + param_3 * 0x10);
  FUN_1452fb960(param_1,2);
  pfVar10 = (float *)(param_1 + 0x10);
  if (pfVar10 < pfVar2) {
    if (0x3f < ((longlong)pfVar2 + (0xf - (longlong)pfVar10) & 0xfffffffffffffff0U)) {
      do {
        fVar18 = ((float)*(undefined8 *)(pfVar11 + 2) + -*pfVar10) * 0.5;
        fVar19 = ((float)((ulonglong)*(undefined8 *)(pfVar11 + 2) >> 0x20) + pfVar10[1]) * -0.5;
        fVar20 = (*pfVar11 + -pfVar10[2]) * 0.5;
        fVar21 = (pfVar11[1] + pfVar10[3]) * -0.5;
        fVar3 = *pfVar10;
        fVar4 = pfVar10[1];
        fVar5 = pfVar10[2];
        fVar6 = pfVar10[3];
        fVar14 = -(pfVar12[1] * fVar18) + fVar19 * *pfVar12;
        fVar15 = pfVar12[1] * fVar19 + fVar18 * *pfVar12;
        fVar16 = -(pfVar12[3] * fVar20) + fVar21 * pfVar12[2];
        fVar17 = pfVar12[3] * fVar21 + fVar20 * pfVar12[2];
        *pfVar10 = -fVar14 + fVar18 + fVar3;
        pfVar10[1] = fVar15 + fVar19 + fVar4;
        pfVar10[2] = -fVar16 + fVar20 + fVar5;
        pfVar10[3] = fVar17 + fVar21 + fVar6;
        *pfVar11 = fVar20 + fVar5 + fVar16;
        pfVar11[1] = -(fVar21 + fVar6) + fVar17;
        pfVar11[2] = fVar18 + fVar3 + fVar14;
        pfVar11[3] = -(fVar19 + fVar4) + fVar15;
        fVar18 = ((float)*(undefined8 *)(pfVar11 + -2) + -pfVar10[4]) * 0.5;
        fVar19 = ((float)((ulonglong)*(undefined8 *)(pfVar11 + -2) >> 0x20) + pfVar10[5]) * -0.5;
        fVar20 = (pfVar11[-4] + -pfVar10[6]) * 0.5;
        fVar21 = (pfVar11[-3] + pfVar10[7]) * -0.5;
        fVar3 = pfVar10[4];
        fVar4 = pfVar10[5];
        fVar5 = pfVar10[6];
        fVar6 = pfVar10[7];
        fVar14 = -(pfVar12[5] * fVar18) + fVar19 * pfVar12[4];
        fVar15 = pfVar12[5] * fVar19 + fVar18 * pfVar12[4];
        fVar16 = -(pfVar12[7] * fVar20) + fVar21 * pfVar12[6];
        fVar17 = pfVar12[7] * fVar21 + fVar20 * pfVar12[6];
        pfVar10[4] = -fVar14 + fVar18 + fVar3;
        pfVar10[5] = fVar15 + fVar19 + fVar4;
        pfVar10[6] = -fVar16 + fVar20 + fVar5;
        pfVar10[7] = fVar17 + fVar21 + fVar6;
        pfVar11[-4] = fVar20 + fVar5 + fVar16;
        pfVar11[-3] = -(fVar21 + fVar6) + fVar17;
        pfVar11[-2] = fVar18 + fVar3 + fVar14;
        pfVar11[-1] = -(fVar19 + fVar4) + fVar15;
        fVar18 = ((float)*(undefined8 *)(pfVar11 + -6) + -pfVar10[8]) * 0.5;
        fVar19 = ((float)((ulonglong)*(undefined8 *)(pfVar11 + -6) >> 0x20) + pfVar10[9]) * -0.5;
        fVar20 = (pfVar11[-8] + -pfVar10[10]) * 0.5;
        fVar21 = (pfVar11[-7] + pfVar10[0xb]) * -0.5;
        fVar3 = pfVar10[8];
        fVar4 = pfVar10[9];
        fVar5 = pfVar10[10];
        fVar6 = pfVar10[0xb];
        fVar14 = -(pfVar12[9] * fVar18) + fVar19 * pfVar12[8];
        fVar15 = pfVar12[9] * fVar19 + fVar18 * pfVar12[8];
        fVar16 = -(pfVar12[0xb] * fVar20) + fVar21 * pfVar12[10];
        fVar17 = pfVar12[0xb] * fVar21 + fVar20 * pfVar12[10];
        pfVar10[8] = -fVar14 + fVar18 + fVar3;
        pfVar10[9] = fVar15 + fVar19 + fVar4;
        pfVar10[10] = -fVar16 + fVar20 + fVar5;
        pfVar10[0xb] = fVar17 + fVar21 + fVar6;
        pfVar11[-8] = fVar20 + fVar5 + fVar16;
        pfVar11[-7] = -(fVar21 + fVar6) + fVar17;
        pfVar11[-6] = fVar18 + fVar3 + fVar14;
        pfVar11[-5] = -(fVar19 + fVar4) + fVar15;
        pfVar1 = pfVar12 + 0xc;
        pfVar7 = pfVar12 + 0xd;
        pfVar8 = pfVar12 + 0xe;
        pfVar9 = pfVar12 + 0xf;
        pfVar12 = pfVar12 + 0x10;
        fVar18 = ((float)*(undefined8 *)(pfVar11 + -10) + -pfVar10[0xc]) * 0.5;
        fVar19 = ((float)((ulonglong)*(undefined8 *)(pfVar11 + -10) >> 0x20) + pfVar10[0xd]) * -0.5;
        fVar20 = (pfVar11[-0xc] + -pfVar10[0xe]) * 0.5;
        fVar21 = (pfVar11[-0xb] + pfVar10[0xf]) * -0.5;
        fVar3 = pfVar10[0xc];
        fVar4 = pfVar10[0xd];
        fVar5 = pfVar10[0xe];
        fVar6 = pfVar10[0xf];
        fVar14 = -(*pfVar7 * fVar18) + fVar19 * *pfVar1;
        fVar15 = *pfVar7 * fVar19 + fVar18 * *pfVar1;
        fVar16 = -(*pfVar9 * fVar20) + fVar21 * *pfVar8;
        fVar17 = *pfVar9 * fVar21 + fVar20 * *pfVar8;
        pfVar10[0xc] = -fVar14 + fVar18 + fVar3;
        pfVar10[0xd] = fVar15 + fVar19 + fVar4;
        pfVar10[0xe] = -fVar16 + fVar20 + fVar5;
        pfVar10[0xf] = fVar17 + fVar21 + fVar6;
        pfVar10 = pfVar10 + 0x10;
        pfVar11[-0xc] = fVar20 + fVar5 + fVar16;
        pfVar11[-0xb] = -(fVar21 + fVar6) + fVar17;
        pfVar11[-10] = fVar18 + fVar3 + fVar14;
        pfVar11[-9] = -(fVar19 + fVar4) + fVar15;
        pfVar11 = pfVar11 + -0x10;
      } while (pfVar10 < pfVar2 + -0xc);
      if (pfVar2 <= pfVar10) {
        return;
      }
    }
    pfVar11 = pfVar11 + 2;
    lVar13 = (longlong)pfVar12 - (longlong)pfVar10;
    do {
      pfVar12 = (float *)(lVar13 + (longlong)pfVar10);
      fVar18 = ((float)*(undefined8 *)pfVar11 + -*pfVar10) * 0.5;
      fVar19 = ((float)((ulonglong)*(undefined8 *)pfVar11 >> 0x20) + pfVar10[1]) * -0.5;
      fVar20 = (pfVar11[-2] + -pfVar10[2]) * 0.5;
      fVar21 = (pfVar11[-1] + pfVar10[3]) * -0.5;
      fVar3 = *pfVar10;
      fVar4 = pfVar10[1];
      fVar5 = pfVar10[2];
      fVar6 = pfVar10[3];
      fVar14 = -(pfVar12[1] * fVar18) + fVar19 * *pfVar12;
      fVar15 = pfVar12[1] * fVar19 + fVar18 * *pfVar12;
      fVar16 = -(pfVar12[3] * fVar20) + fVar21 * pfVar12[2];
      fVar17 = pfVar12[3] * fVar21 + fVar20 * pfVar12[2];
      *pfVar10 = -fVar14 + fVar18 + fVar3;
      pfVar10[1] = fVar15 + fVar19 + fVar4;
      pfVar10[2] = -fVar16 + fVar20 + fVar5;
      pfVar10[3] = fVar17 + fVar21 + fVar6;
      pfVar10 = pfVar10 + 4;
      pfVar11[-2] = fVar20 + fVar5 + fVar16;
      pfVar11[-1] = -(fVar21 + fVar6) + fVar17;
      *pfVar11 = fVar18 + fVar3 + fVar14;
      pfVar11[1] = -(fVar19 + fVar4) + fVar15;
      pfVar11 = pfVar11 + -4;
    } while (pfVar10 < pfVar2);
  }
  return;
}



// FUNCTION 1452feca0 FUN_1452feca0 body=678 status=ok
// SIG undefined FUN_1452feca0(void)

void FUN_1452feca0(longlong param_1,longlong param_2,ulonglong param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if (param_3 < 2) {
    FUN_1452fb960(param_1,param_3);
    return;
  }
  pfVar2 = (float *)(param_1 + param_2 * 8);
  pfVar8 = (float *)(&DAT_149d35ea0 + param_3 * 8);
  pfVar7 = (float *)(param_1 + -0x18 + param_3 * 0x10);
  FUN_1452fbcc0(param_1,2);
  pfVar6 = (float *)(param_1 + 0x10);
  if (pfVar6 < pfVar2) {
    if (0x3f < ((longlong)pfVar2 + (0xf - (longlong)pfVar6) & 0xfffffffffffffff0U)) {
      do {
        fVar11 = ((float)*(undefined8 *)(pfVar7 + 2) + -*pfVar6) * -0.5;
        fVar12 = ((float)((ulonglong)*(undefined8 *)(pfVar7 + 2) >> 0x20) + pfVar6[1]) * 0.5;
        fVar13 = (*pfVar7 + -pfVar6[2]) * -0.5;
        fVar14 = (pfVar7[1] + pfVar6[3]) * 0.5;
        fVar15 = *pfVar6 - fVar11;
        fVar16 = pfVar6[1] - fVar12;
        fVar17 = pfVar6[2] - fVar13;
        fVar18 = pfVar6[3] - fVar14;
        fVar10 = pfVar8[1] * fVar11 + fVar12 * *pfVar8;
        fVar11 = -pfVar8[1] * fVar12 + fVar11 * *pfVar8;
        fVar12 = pfVar8[3] * fVar13 + fVar14 * pfVar8[2];
        fVar13 = -pfVar8[3] * fVar14 + fVar13 * pfVar8[2];
        *pfVar6 = -fVar10 + fVar15;
        pfVar6[1] = fVar11 + fVar16;
        pfVar6[2] = -fVar12 + fVar17;
        pfVar6[3] = fVar13 + fVar18;
        *pfVar7 = fVar17 + fVar12;
        pfVar7[1] = -fVar18 + fVar13;
        pfVar7[2] = fVar15 + fVar10;
        pfVar7[3] = -fVar16 + fVar11;
        fVar11 = ((float)*(undefined8 *)(pfVar7 + -2) + -pfVar6[4]) * -0.5;
        fVar12 = ((float)((ulonglong)*(undefined8 *)(pfVar7 + -2) >> 0x20) + pfVar6[5]) * 0.5;
        fVar13 = (pfVar7[-4] + -pfVar6[6]) * -0.5;
        fVar14 = (pfVar7[-3] + pfVar6[7]) * 0.5;
        fVar15 = pfVar6[4] - fVar11;
        fVar16 = pfVar6[5] - fVar12;
        fVar17 = pfVar6[6] - fVar13;
        fVar18 = pfVar6[7] - fVar14;
        fVar10 = pfVar8[5] * fVar11 + fVar12 * pfVar8[4];
        fVar11 = -pfVar8[5] * fVar12 + fVar11 * pfVar8[4];
        fVar12 = pfVar8[7] * fVar13 + fVar14 * pfVar8[6];
        fVar13 = -pfVar8[7] * fVar14 + fVar13 * pfVar8[6];
        pfVar6[4] = -fVar10 + fVar15;
        pfVar6[5] = fVar11 + fVar16;
        pfVar6[6] = -fVar12 + fVar17;
        pfVar6[7] = fVar13 + fVar18;
        pfVar7[-4] = fVar17 + fVar12;
        pfVar7[-3] = -fVar18 + fVar13;
        pfVar7[-2] = fVar15 + fVar10;
        pfVar7[-1] = -fVar16 + fVar11;
        fVar11 = ((float)*(undefined8 *)(pfVar7 + -6) + -pfVar6[8]) * -0.5;
        fVar12 = ((float)((ulonglong)*(undefined8 *)(pfVar7 + -6) >> 0x20) + pfVar6[9]) * 0.5;
        fVar13 = (pfVar7[-8] + -pfVar6[10]) * -0.5;
        fVar14 = (pfVar7[-7] + pfVar6[0xb]) * 0.5;
        fVar15 = pfVar6[8] - fVar11;
        fVar16 = pfVar6[9] - fVar12;
        fVar17 = pfVar6[10] - fVar13;
        fVar18 = pfVar6[0xb] - fVar14;
        fVar10 = pfVar8[9] * fVar11 + fVar12 * pfVar8[8];
        fVar11 = -pfVar8[9] * fVar12 + fVar11 * pfVar8[8];
        fVar12 = pfVar8[0xb] * fVar13 + fVar14 * pfVar8[10];
        fVar13 = -pfVar8[0xb] * fVar14 + fVar13 * pfVar8[10];
        pfVar6[8] = -fVar10 + fVar15;
        pfVar6[9] = fVar11 + fVar16;
        pfVar6[10] = -fVar12 + fVar17;
        pfVar6[0xb] = fVar13 + fVar18;
        pfVar7[-8] = fVar17 + fVar12;
        pfVar7[-7] = -fVar18 + fVar13;
        pfVar7[-6] = fVar15 + fVar10;
        pfVar7[-5] = -fVar16 + fVar11;
        pfVar1 = pfVar8 + 0xc;
        pfVar3 = pfVar8 + 0xd;
        pfVar4 = pfVar8 + 0xe;
        pfVar5 = pfVar8 + 0xf;
        pfVar8 = pfVar8 + 0x10;
        fVar11 = ((float)*(undefined8 *)(pfVar7 + -10) + -pfVar6[0xc]) * -0.5;
        fVar12 = ((float)((ulonglong)*(undefined8 *)(pfVar7 + -10) >> 0x20) + pfVar6[0xd]) * 0.5;
        fVar13 = (pfVar7[-0xc] + -pfVar6[0xe]) * -0.5;
        fVar14 = (pfVar7[-0xb] + pfVar6[0xf]) * 0.5;
        fVar15 = pfVar6[0xc] - fVar11;
        fVar16 = pfVar6[0xd] - fVar12;
        fVar17 = pfVar6[0xe] - fVar13;
        fVar18 = pfVar6[0xf] - fVar14;
        fVar10 = *pfVar3 * fVar11 + fVar12 * *pfVar1;
        fVar11 = -*pfVar3 * fVar12 + fVar11 * *pfVar1;
        fVar12 = *pfVar5 * fVar13 + fVar14 * *pfVar4;
        fVar13 = -*pfVar5 * fVar14 + fVar13 * *pfVar4;
        pfVar6[0xc] = -fVar10 + fVar15;
        pfVar6[0xd] = fVar11 + fVar16;
        pfVar6[0xe] = -fVar12 + fVar17;
        pfVar6[0xf] = fVar13 + fVar18;
        pfVar6 = pfVar6 + 0x10;
        pfVar7[-0xc] = fVar17 + fVar12;
        pfVar7[-0xb] = -fVar18 + fVar13;
        pfVar7[-10] = fVar15 + fVar10;
        pfVar7[-9] = -fVar16 + fVar11;
        pfVar7 = pfVar7 + -0x10;
      } while (pfVar6 < pfVar2 + -0xc);
      if (pfVar2 <= pfVar6) {
        return;
      }
    }
    pfVar7 = pfVar7 + 2;
    lVar9 = (longlong)pfVar8 - (longlong)pfVar6;
    do {
      pfVar8 = (float *)(lVar9 + (longlong)pfVar6);
      fVar11 = ((float)*(undefined8 *)pfVar7 + -*pfVar6) * -0.5;
      fVar12 = ((float)((ulonglong)*(undefined8 *)pfVar7 >> 0x20) + pfVar6[1]) * 0.5;
      fVar13 = (pfVar7[-2] + -pfVar6[2]) * -0.5;
      fVar14 = (pfVar7[-1] + pfVar6[3]) * 0.5;
      fVar15 = *pfVar6 - fVar11;
      fVar16 = pfVar6[1] - fVar12;
      fVar17 = pfVar6[2] - fVar13;
      fVar18 = pfVar6[3] - fVar14;
      fVar10 = pfVar8[1] * fVar11 + fVar12 * *pfVar8;
      fVar11 = -pfVar8[1] * fVar12 + fVar11 * *pfVar8;
      fVar12 = pfVar8[3] * fVar13 + fVar14 * pfVar8[2];
      fVar13 = -pfVar8[3] * fVar14 + fVar13 * pfVar8[2];
      *pfVar6 = -fVar10 + fVar15;
      pfVar6[1] = fVar11 + fVar16;
      pfVar6[2] = -fVar12 + fVar17;
      pfVar6[3] = fVar13 + fVar18;
      pfVar6 = pfVar6 + 4;
      pfVar7[-2] = fVar17 + fVar12;
      pfVar7[-1] = -fVar18 + fVar13;
      *pfVar7 = fVar15 + fVar10;
      pfVar7[1] = -fVar16 + fVar11;
      pfVar7 = pfVar7 + -4;
    } while (pfVar6 < pfVar2);
  }
  return;
}



// FUNCTION 1452fef50 FUN_1452fef50 body=303 status=ok
// SIG undefined FUN_1452fef50(void)

void FUN_1452fef50(longlong param_1,longlong param_2,ulonglong param_3)

{
  ushort *puVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float *pfVar13;
  float *pfVar14;
  ushort *puVar15;
  ulonglong uVar16;
  float *pfVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  puVar15 = (ushort *)(param_2 + -4);
  do {
    uVar16 = (ulonglong)puVar15[3];
    pfVar14 = (float *)(param_1 + (ulonglong)puVar15[2] * 8);
    pfVar2 = pfVar14 + uVar16 * 2;
    pfVar13 = pfVar14 + uVar16 * 4;
    pfVar17 = (float *)(&DAT_149d35e90 + uVar16 * 8);
    do {
      pfVar3 = pfVar13 + uVar16 * 2;
      fVar19 = *pfVar17;
      fVar20 = pfVar17[1];
      fVar21 = pfVar17[2];
      fVar22 = pfVar17[3];
      pfVar17 = pfVar17 + 4;
      fVar26 = -(pfVar13[1] * fVar20) + fVar19 * *pfVar13;
      fVar27 = *pfVar13 * fVar20 + fVar19 * pfVar13[1];
      fVar28 = -(pfVar13[3] * fVar22) + fVar21 * pfVar13[2];
      fVar29 = pfVar13[2] * fVar22 + fVar21 * pfVar13[3];
      pfVar4 = pfVar13 + uVar16 * -2;
      fVar5 = *pfVar4;
      fVar6 = pfVar4[1];
      fVar7 = pfVar4[2];
      fVar8 = pfVar4[3];
      fVar9 = *pfVar14;
      fVar10 = pfVar14[1];
      fVar11 = pfVar14[2];
      fVar12 = pfVar14[3];
      fVar18 = pfVar3[1] * fVar19 + -(fVar20 * *pfVar3);
      fVar19 = *pfVar3 * fVar19 + fVar20 * pfVar3[1];
      fVar20 = pfVar3[3] * fVar21 + -(fVar22 * pfVar3[2]);
      fVar21 = pfVar3[2] * fVar21 + fVar22 * pfVar3[3];
      fVar22 = fVar19 + fVar26;
      fVar23 = fVar18 + fVar27;
      fVar24 = fVar21 + fVar28;
      fVar25 = fVar20 + fVar29;
      fVar27 = fVar27 - fVar18;
      fVar26 = fVar26 - fVar19;
      fVar29 = fVar29 - fVar20;
      fVar28 = fVar28 - fVar21;
      *pfVar14 = fVar9 + fVar22;
      pfVar14[1] = fVar10 + fVar23;
      pfVar14[2] = fVar11 + fVar24;
      pfVar14[3] = fVar12 + fVar25;
      pfVar14 = pfVar14 + 4;
      pfVar3 = pfVar13 + uVar16 * -2;
      *pfVar3 = fVar27 + fVar5;
      pfVar3[1] = -fVar26 + fVar6;
      pfVar3[2] = fVar29 + fVar7;
      pfVar3[3] = -fVar28 + fVar8;
      *pfVar13 = fVar9 - fVar22;
      pfVar13[1] = fVar10 - fVar23;
      pfVar13[2] = fVar11 - fVar24;
      pfVar13[3] = fVar12 - fVar25;
      pfVar3 = pfVar13 + uVar16 * 2;
      *pfVar3 = -fVar27 + fVar5;
      pfVar3[1] = fVar26 + fVar6;
      pfVar3[2] = -fVar29 + fVar7;
      pfVar3[3] = fVar28 + fVar8;
      pfVar13 = pfVar13 + 4;
    } while (pfVar14 < pfVar2);
    puVar1 = puVar15 + 3;
    puVar15 = puVar15 + 2;
  } while (*puVar1 < param_3);
  return;
}



// FUNCTION 1452ff080 FUN_1452ff080 body=303 status=ok
// SIG undefined FUN_1452ff080(void)

void FUN_1452ff080(longlong param_1,longlong param_2,ulonglong param_3)

{
  ushort *puVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  float *pfVar13;
  ushort *puVar14;
  ulonglong uVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  puVar14 = (ushort *)(param_2 + -4);
  do {
    uVar15 = (ulonglong)puVar14[3];
    pfVar13 = (float *)(param_1 + (ulonglong)puVar14[2] * 8);
    pfVar2 = pfVar13 + uVar15 * 2;
    pfVar12 = pfVar13 + uVar15 * 4;
    pfVar16 = (float *)(&DAT_149d35e90 + uVar15 * 8);
    do {
      pfVar3 = pfVar12 + uVar15 * 2;
      fVar18 = *pfVar16;
      fVar19 = pfVar16[1];
      fVar20 = pfVar16[2];
      fVar21 = pfVar16[3];
      pfVar16 = pfVar16 + 4;
      fVar25 = -(pfVar3[1] * fVar19) + fVar18 * *pfVar3;
      fVar26 = *pfVar3 * fVar19 + fVar18 * pfVar3[1];
      fVar27 = -(pfVar3[3] * fVar21) + fVar20 * pfVar3[2];
      fVar28 = pfVar3[2] * fVar21 + fVar20 * pfVar3[3];
      pfVar3 = pfVar12 + uVar15 * -2;
      fVar4 = *pfVar3;
      fVar5 = pfVar3[1];
      fVar6 = pfVar3[2];
      fVar7 = pfVar3[3];
      fVar8 = *pfVar13;
      fVar9 = pfVar13[1];
      fVar10 = pfVar13[2];
      fVar11 = pfVar13[3];
      fVar17 = pfVar12[1] * fVar18 + -(fVar19 * *pfVar12);
      fVar18 = *pfVar12 * fVar18 + fVar19 * pfVar12[1];
      fVar19 = pfVar12[3] * fVar20 + -(fVar21 * pfVar12[2]);
      fVar20 = pfVar12[2] * fVar20 + fVar21 * pfVar12[3];
      fVar21 = fVar18 + fVar25;
      fVar22 = fVar17 + fVar26;
      fVar23 = fVar20 + fVar27;
      fVar24 = fVar19 + fVar28;
      fVar26 = fVar26 - fVar17;
      fVar25 = fVar25 - fVar18;
      fVar28 = fVar28 - fVar19;
      fVar27 = fVar27 - fVar20;
      *pfVar13 = fVar8 + fVar21;
      pfVar13[1] = fVar9 + fVar22;
      pfVar13[2] = fVar10 + fVar23;
      pfVar13[3] = fVar11 + fVar24;
      pfVar13 = pfVar13 + 4;
      pfVar3 = pfVar12 + uVar15 * -2;
      *pfVar3 = fVar26 + fVar4;
      pfVar3[1] = -fVar25 + fVar5;
      pfVar3[2] = fVar28 + fVar6;
      pfVar3[3] = -fVar27 + fVar7;
      *pfVar12 = fVar8 - fVar21;
      pfVar12[1] = fVar9 - fVar22;
      pfVar12[2] = fVar10 - fVar23;
      pfVar12[3] = fVar11 - fVar24;
      pfVar3 = pfVar12 + uVar15 * 2;
      *pfVar3 = -fVar26 + fVar4;
      pfVar3[1] = fVar25 + fVar5;
      pfVar3[2] = -fVar28 + fVar6;
      pfVar3[3] = fVar27 + fVar7;
      pfVar12 = pfVar12 + 4;
    } while (pfVar13 < pfVar2);
    puVar1 = puVar14 + 3;
    puVar14 = puVar14 + 2;
  } while (*puVar1 < param_3);
  return;
}



// FUNCTION 1452ff1b0 FUN_1452ff1b0 body=232 status=ok
// SIG undefined FUN_1452ff1b0(void)

void FUN_1452ff1b0(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                  longlong param_5)

{
  float *pfVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  
  if (param_3 < 8) {
    FUN_1452fe090(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    if (((param_4 & 3) != 0) || (param_4 < 4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_1452fe090(param_1,param_2,param_3,4,param_5);
    if (4 < param_4) {
      puVar12 = (undefined8 *)(param_1 + 0x10);
      puVar13 = (undefined8 *)(param_3 * 4 + -0x14 + param_1);
      pfVar11 = (float *)(param_5 + 0x20);
      lVar14 = (param_4 - 5 >> 1) + 1;
      do {
        fVar3 = *pfVar11;
        fVar4 = pfVar11[1];
        fVar5 = pfVar11[2];
        fVar6 = pfVar11[3];
        pfVar1 = (float *)((param_2 - param_5) + (longlong)pfVar11);
        fVar7 = *pfVar1;
        fVar8 = pfVar1[1];
        fVar9 = pfVar1[2];
        fVar10 = pfVar1[3];
        pfVar11 = pfVar11 + 4;
        *puVar12 = CONCAT44(fVar6 * fVar10 + fVar5 * fVar9,fVar4 * fVar8 + fVar3 * fVar7);
        puVar12 = puVar12 + 1;
        *puVar13 = CONCAT44(-(fVar4 * fVar7) + fVar3 * fVar8,-(fVar6 * fVar9) + fVar5 * fVar10);
        puVar13 = puVar13 + -1;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
  }
  return;
}



// FUNCTION 1452ff2a0 FUN_1452ff2a0 body=337 status=ok
// SIG undefined FUN_1452ff2a0(void)

void FUN_1452ff2a0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,ulonglong param_6,ulonglong param_7,longlong param_8)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  float *pfVar29;
  
  if (param_6 != param_7) {
    uVar27 = param_6;
    if ((param_6 & 1) != 0) {
      uVar27 = param_6 + 1;
      FUN_1452fd690(param_1,param_2,param_3,param_4,param_5,param_6,uVar27,param_8);
    }
    if (uVar27 < param_7) {
      pfVar29 = (float *)(param_4 + uVar27 * 8);
      do {
        pfVar1 = (float *)((param_2 - param_4) + (longlong)pfVar29);
        fVar3 = *pfVar1;
        fVar4 = pfVar1[1];
        fVar5 = pfVar1[2];
        fVar6 = pfVar1[3];
        pfVar1 = (float *)((param_5 - param_4) + (longlong)pfVar29);
        fVar7 = *pfVar1;
        fVar8 = pfVar1[1];
        fVar9 = pfVar1[2];
        fVar10 = pfVar1[3];
        fVar11 = *pfVar29;
        fVar12 = pfVar29[1];
        fVar13 = pfVar29[2];
        fVar14 = pfVar29[3];
        pfVar1 = (float *)((param_3 - param_4) + (longlong)pfVar29);
        fVar15 = *pfVar1;
        fVar16 = pfVar1[1];
        fVar17 = pfVar1[2];
        fVar18 = pfVar1[3];
        fVar19 = *pfVar29;
        fVar20 = pfVar29[1];
        fVar21 = pfVar29[2];
        fVar22 = pfVar29[3];
        pfVar1 = (float *)((param_3 - param_4) + (longlong)pfVar29);
        fVar23 = *pfVar1;
        fVar24 = pfVar1[1];
        fVar25 = pfVar1[2];
        fVar26 = pfVar1[3];
        pfVar1 = (float *)(param_1 + (ulonglong)*(ushort *)(param_8 + uVar27 * 2) * 8);
        pfVar29 = pfVar29 + 4;
        uVar28 = (ulonglong)*(ushort *)(param_8 + 2 + uVar27 * 2);
        uVar27 = uVar27 + 2;
        *pfVar1 = fVar11 + fVar3;
        pfVar1[1] = fVar12 + fVar4;
        pfVar1[2] = fVar3 - fVar19;
        pfVar1[3] = fVar4 - fVar20;
        pfVar2 = (float *)(param_1 + uVar28 * 8);
        *pfVar2 = fVar13 + fVar5;
        pfVar2[1] = fVar14 + fVar6;
        pfVar2[2] = fVar5 - fVar21;
        pfVar2[3] = fVar6 - fVar22;
        pfVar1[4] = fVar15 + fVar7;
        pfVar1[5] = fVar16 + fVar8;
        pfVar1[6] = fVar7 - fVar23;
        pfVar1[7] = fVar8 - fVar24;
        pfVar1 = (float *)(param_1 + 0x10 + uVar28 * 8);
        *pfVar1 = fVar17 + fVar9;
        pfVar1[1] = fVar18 + fVar10;
        pfVar1[2] = fVar9 - fVar25;
        pfVar1[3] = fVar10 - fVar26;
      } while (uVar27 < param_7);
    }
    if ((param_7 & 0xfffffffffffffffe) != param_7) {
      FUN_1452fd690(param_1,param_2,param_3,param_4,param_5,param_7 & 0xfffffffffffffffe,param_7,
                    param_8);
    }
  }
  return;
}



// FUNCTION 1452ff400 FUN_1452ff400 body=381 status=ok
// SIG undefined FUN_1452ff400(void)

void FUN_1452ff400(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,ulonglong param_6,ulonglong param_7,longlong param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float *pfVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  if (param_6 != param_7) {
    uVar7 = param_7 & 0xfffffffffffffffe;
    uVar8 = param_6;
    if ((param_6 & 1) != 0) {
      uVar8 = param_6 + 1;
      FUN_1452fd160(param_1,param_2,param_3,param_4,param_5,param_6,uVar8,param_8);
    }
    if (uVar8 < uVar7) {
      pfVar6 = (float *)(param_4 + uVar8 * 8);
      do {
        pfVar1 = (float *)((param_3 - param_4) + (longlong)pfVar6);
        pfVar2 = (float *)((param_2 - param_4) + (longlong)pfVar6);
        pfVar3 = (float *)((param_5 - param_4) + (longlong)pfVar6);
        fVar9 = *pfVar3 + *pfVar1;
        fVar10 = pfVar3[1] + pfVar1[1];
        fVar11 = pfVar3[2] + pfVar1[2];
        fVar12 = pfVar3[3] + pfVar1[3];
        pfVar3 = (float *)((param_5 - param_4) + (longlong)pfVar6);
        fVar13 = pfVar1[1] - pfVar3[1];
        fVar15 = pfVar1[3] - pfVar3[3];
        uVar4 = (ulonglong)*(ushort *)(param_8 + uVar8 * 2);
        fVar17 = *pfVar6 + *pfVar2;
        fVar18 = pfVar6[1] + pfVar2[1];
        fVar19 = pfVar6[2] + pfVar2[2];
        fVar20 = pfVar6[3] + pfVar2[3];
        fVar21 = *pfVar2 - *pfVar6;
        fVar22 = pfVar2[1] - pfVar6[1];
        fVar23 = pfVar2[2] - pfVar6[2];
        fVar24 = pfVar2[3] - pfVar6[3];
        uVar5 = (ulonglong)*(ushort *)(param_8 + 2 + uVar8 * 2);
        pfVar6 = pfVar6 + 4;
        uVar8 = uVar8 + 2;
        fVar14 = -(*pfVar1 - *pfVar3);
        fVar16 = -(pfVar1[2] - pfVar3[2]);
        pfVar1 = (float *)(param_1 + uVar4 * 8);
        *pfVar1 = fVar9 + fVar17;
        pfVar1[1] = fVar10 + fVar18;
        pfVar1[2] = fVar13 + fVar21;
        pfVar1[3] = fVar14 + fVar22;
        pfVar1 = (float *)(param_1 + uVar5 * 8);
        *pfVar1 = fVar11 + fVar19;
        pfVar1[1] = fVar12 + fVar20;
        pfVar1[2] = fVar15 + fVar23;
        pfVar1[3] = fVar16 + fVar24;
        pfVar1 = (float *)(param_1 + 0x10 + uVar4 * 8);
        *pfVar1 = fVar17 - fVar9;
        pfVar1[1] = fVar18 - fVar10;
        pfVar1[2] = fVar21 - fVar13;
        pfVar1[3] = fVar22 - fVar14;
        pfVar1 = (float *)(param_1 + 0x10 + uVar5 * 8);
        *pfVar1 = fVar19 - fVar11;
        pfVar1[1] = fVar20 - fVar12;
        pfVar1[2] = fVar23 - fVar15;
        pfVar1[3] = fVar24 - fVar16;
      } while (uVar8 < uVar7);
    }
    if (uVar7 != param_7) {
      FUN_1452fd160(param_1,param_2,param_3,param_4,param_5,uVar7,param_7,param_8);
    }
  }
  return;
}



// FUNCTION 1452ff6e0 FUN_1452ff6e0 body=207 status=ok
// SIG undefined FUN_1452ff6e0(void)

void FUN_1452ff6e0(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  longlong param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  code *pcVar6;
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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float *pfVar22;
  float *pfVar23;
  ulonglong uVar24;
  
  if (((param_4 & 3) == 0) && (3 < param_4)) {
    uVar24 = 4;
    FUN_1452fe2b0(param_1,param_2,param_3,4,param_5);
    if (4 < param_4) {
      param_5 = param_5 - param_1;
      pfVar23 = (float *)(param_2 + (param_3 + -7) * 4);
      pfVar22 = (float *)(param_1 + 0x30);
      do {
        pfVar1 = (float *)(param_5 + -0x10 + (longlong)pfVar22);
        fVar7 = *pfVar1;
        fVar8 = pfVar1[1];
        fVar9 = pfVar1[2];
        fVar10 = pfVar1[3];
        fVar11 = *pfVar23;
        fVar12 = pfVar23[1];
        fVar13 = pfVar23[2];
        fVar14 = pfVar23[3];
        pfVar23 = pfVar23 + -4;
        fVar3 = *(float *)((longlong)pfVar22 + param_5 + 4);
        fVar5 = *(float *)((longlong)pfVar22 + param_5 + 0xc);
        fVar2 = *(float *)(param_5 + (longlong)pfVar22);
        fVar4 = ((float *)(param_5 + (longlong)pfVar22))[2];
        pfVar1 = (float *)(param_2 + uVar24 * 4);
        fVar15 = *pfVar1;
        fVar16 = pfVar1[1];
        fVar17 = pfVar1[2];
        fVar18 = pfVar1[3];
        pfVar1 = (float *)(param_2 + uVar24 * 4);
        fVar19 = pfVar1[1];
        fVar20 = pfVar1[2];
        fVar21 = pfVar1[3];
        uVar24 = uVar24 + 4;
        pfVar22[-4] = fVar7 * *pfVar1 - fVar8 * fVar14;
        pfVar22[-3] = fVar7 * fVar14 + fVar8 * fVar15;
        pfVar22[-2] = fVar9 * fVar19 - fVar10 * fVar13;
        pfVar22[-1] = fVar9 * fVar13 + fVar10 * fVar16;
        *pfVar22 = fVar2 * fVar20 - fVar3 * fVar12;
        pfVar22[1] = fVar2 * fVar12 + fVar3 * fVar17;
        pfVar22[2] = fVar4 * fVar21 - fVar5 * fVar11;
        pfVar22[3] = fVar4 * fVar11 + fVar5 * fVar18;
        pfVar22 = pfVar22 + 8;
      } while (uVar24 < param_4);
    }
    return;
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}



// FUNCTION 1452ff7b0 FUN_1452ff7b0 body=141 status=ok
// SIG undefined FUN_1452ff7b0(void)

/* WARNING: Removing unreachable block (ram,0x0001452ff7fd) */

void FUN_1452ff7b0(void)

{
  longlong lVar1;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c7fc6c8) && (FUN_144b3d300(&DAT_14c7fc6c8), DAT_14c7fc6c8 == -1)) {
    lVar1 = cpuid_Version_info(1);
    if ((*(uint *)(lVar1 + 0xc) & 1) == 0) {
      DAT_14c7fc6c0 = &PTR_FUN_149d3b6f0;
      if ((*(uint *)(lVar1 + 8) >> 0x19 & 1) == 0) {
        DAT_14c7fc6c0 = &PTR_FUN_149d3b690;
      }
    }
    else {
      DAT_14c7fc6c0 = &PTR_FUN_149d3b750;
    }
    _Init_thread_footer(&DAT_14c7fc6c8);
  }
  return;
}



// FUNCTION 1452ff840 FUN_1452ff840 body=234 status=ok
// SIG undefined FUN_1452ff840(void)

void FUN_1452ff840(undefined8 param_1,float *param_2,ulonglong param_3)

{
  float fVar1;
  code *pcVar2;
  ulonglong uVar3;
  
  if (((param_3 == 0) || ((param_3 & param_3 - 1) != 0)) || (0x7fe < param_3 - 2)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar1 = *param_2;
  uVar3 = param_3 >> 2;
  *param_2 = (param_2[1] + fVar1) * 0.5;
  param_2[1] = (fVar1 - param_2[1]) * 0.5;
  if (uVar3 != 0) {
    (**(code **)(DAT_14c7fc6c0 + 8))(param_2,uVar3,uVar3);
  }
  param_3 = param_3 >> 1;
  if (((param_3 != 0) && ((param_3 & param_3 - 1) == 0)) && (param_3 < 0x801)) {
    FUN_1452ffb80(param_1,param_2,param_3,0,*(undefined8 *)(DAT_14c7fc6c0 + 0x20),
                  *(undefined8 *)(DAT_14c7fc6c0 + 0x28));
    if (7 < param_3) {
      FUN_1452ffae0(param_1,param_3,*(undefined8 *)(DAT_14c7fc6c0 + 0x10));
    }
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



// FUNCTION 1452ff930 FUN_1452ff930 body=208 status=ok
// SIG undefined FUN_1452ff930(void)

void FUN_1452ff930(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  code *pcVar1;
  undefined *puVar2;
  
  if (((param_5 != 0) && ((param_5 & param_5 - 1) == 0)) && (param_5 - 2 < 0x7ff)) {
    if (param_5 * 4 < 0x801) {
      puVar2 = &DAT_149d35e90 + param_5 * 8;
    }
    else {
      puVar2 = &DAT_149d36e90 + (param_5 >> 1) * 8;
    }
    (**(code **)(DAT_14c7fc6c0 + 0x58))(param_3,param_4,param_5,param_5 >> 1,puVar2);
    FUN_1452ff840(param_4,param_3,param_5);
                    /* WARNING: Could not recover jumptable at 0x0001452ff9fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14c7fc6c0 + 0x40))(param_1,param_2,param_4,param_5);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 1452ffa00 FUN_1452ffa00 body=221 status=ok
// SIG undefined FUN_1452ffa00(void)

void FUN_1452ffa00(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6)

{
  code *pcVar1;
  undefined *puVar2;
  
  if (((param_6 != 0) && ((param_6 & param_6 - 1) == 0)) && (param_6 - 2 < 0x7ff)) {
    if (param_6 * 4 < 0x801) {
      puVar2 = &DAT_149d35e90 + param_6 * 8;
    }
    else {
      puVar2 = &DAT_149d36e90 + (param_6 >> 1) * 8;
    }
    (**(code **)(DAT_14c7fc6c0 + 0x58))(param_4,param_5,param_6,param_6 >> 1,puVar2);
    FUN_1452ff840(param_5,param_4,param_6);
                    /* WARNING: Could not recover jumptable at 0x0001452ffad9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14c7fc6c0 + 0x48))(param_1,param_2,param_3,param_5);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 1452ffae0 FUN_1452ffae0 body=147 status=ok
// SIG undefined FUN_1452ffae0(void)

void FUN_1452ffae0(longlong param_1,ulonglong param_2,code *param_3)

{
  ulonglong uVar1;
  undefined2 *puVar2;
  undefined2 local_res10;
  undefined2 local_res12;
  
  puVar2 = (undefined2 *)&DAT_14c735040;
  uVar1 = param_2 >> 2;
  if (0x100 < param_2) {
    local_res12 = (undefined2)uVar1;
    local_res10 = 0;
    puVar2 = &local_res10;
    FUN_1452ffae0(param_1,uVar1 * 2);
    FUN_1452ffae0(uVar1 * 0x10 + param_1,uVar1,param_3);
    FUN_1452ffae0(param_1 + uVar1 * 0x18,uVar1,param_3);
  }
  (*param_3)(param_1,puVar2,uVar1);
  return;
}



// FUNCTION 1452ffb80 FUN_1452ffb80 body=384 status=ok
// SIG undefined FUN_1452ffb80(void)

void FUN_1452ffb80(undefined8 param_1,longlong param_2,ulonglong param_3,char param_4,code *param_5,
                  code *param_6)

{
  undefined *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  param_3 = param_3 >> 2;
  lVar6 = param_3 * 0x10 + param_2;
  puVar1 = &DAT_149d3ae90 + param_3 * 2;
  lVar2 = param_2 + param_3 * 0x18;
  lVar3 = param_2 + param_3 * 8;
  lVar5 = param_3 / 3 + 1;
  lVar4 = (param_3 - lVar5) + 1;
  if (param_4 == '\0') {
    (*param_5)(param_1,param_2,lVar3,lVar6,lVar2);
    (*param_6)(param_1,param_2,lVar3,lVar6,lVar2,lVar5,lVar4,puVar1);
    lVar5 = param_2;
    param_2 = lVar6;
  }
  else {
    (*param_5)(param_1,param_2,lVar2,lVar6,lVar3,0,lVar5,puVar1);
    (*param_6)(param_1,param_2,lVar3,lVar6,lVar2,lVar5,lVar4,puVar1);
    lVar5 = lVar6;
  }
  (*param_5)(param_1,lVar2,lVar5,lVar3,param_2,lVar4,param_3,puVar1);
  return;
}



// FUNCTION 1452ffd00 FUN_1452ffd00 body=279 status=ok
// SIG undefined FUN_1452ffd00(void)

undefined4 * FUN_1452ffd00(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  uint dwFileAttributes;
  BOOL BVar1;
  DWORD DVar2;
  LPCWSTR pWVar3;
  LPCWSTR lpFileName;
  undefined4 uVar4;
  undefined1 local_2b8 [160];
  LPCWSTR local_218;
  int local_210;
  
  FUN_144bdf390(local_2b8,param_3);
  FUN_144be1260(local_2b8,0x2f,0x5c,1);
  FUN_144f62d50(&local_218,local_2b8);
  lpFileName = (LPCWSTR)0x0;
  uVar4 = 0;
  pWVar3 = lpFileName;
  if (local_210 != 0) {
    pWVar3 = local_218;
  }
  dwFileAttributes = GetFileAttributesW(pWVar3);
  if ((dwFileAttributes & 1) != 0) {
    dwFileAttributes = dwFileAttributes & 0xfffffffe;
    pWVar3 = lpFileName;
    if (local_210 != 0) {
      pWVar3 = local_218;
    }
    SetFileAttributesW(pWVar3,dwFileAttributes);
  }
  if ((dwFileAttributes & 0x10) == 0) {
    if (local_210 != 0) {
      lpFileName = local_218;
    }
    BVar1 = DeleteFileW(lpFileName);
    uVar4 = 0;
    if (BVar1 == 0) {
      uVar4 = 0x80040200;
    }
  }
  else {
    if (local_210 != 0) {
      lpFileName = local_218;
    }
    BVar1 = RemoveDirectoryW(lpFileName);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      uVar4 = 0x80040202;
      if (1 < DVar2 - 2) {
        uVar4 = 0x80040200;
      }
      *param_2 = uVar4;
      goto LAB_1452ffde8;
    }
  }
  *param_2 = uVar4;
LAB_1452ffde8:
  FUN_144f62d80(&local_218);
  FUN_144bdf2f0(local_2b8);
  return param_2;
}



// FUNCTION 1452ffe20 FUN_1452ffe20 body=204 status=ok
// SIG undefined FUN_1452ffe20(void)

undefined4 * FUN_1452ffe20(undefined8 param_1,undefined4 *param_2,undefined8 param_3,int param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  LPCWSTR lpPathName;
  undefined1 local_2b8 [160];
  undefined1 local_218 [528];
  
  FUN_144bdf390(local_2b8,param_3);
  FUN_144be1260(local_2b8,0x2f,0x5c,1);
  puVar4 = (undefined8 *)FUN_144f62d50(local_218,local_2b8);
  lpPathName = (LPCWSTR)0x0;
  if (*(int *)(puVar4 + 1) != 0) {
    lpPathName = (LPCWSTR)*puVar4;
  }
  BVar1 = CreateDirectoryW(lpPathName,(LPSECURITY_ATTRIBUTES)0x0);
  FUN_144f62d80(local_218);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 0xb7) {
      uVar3 = 0x800402b7;
      if (param_4 != 2) {
        uVar3 = 0;
      }
      *param_2 = uVar3;
    }
    else {
      *param_2 = 0x80040200;
    }
  }
  else {
    *param_2 = 0;
  }
  FUN_144bdf2f0(local_2b8);
  return param_2;
}



// FUNCTION 1452ffef0 FUN_1452ffef0 body=320 status=ok
// SIG undefined FUN_1452ffef0(void)

undefined4 *
FUN_1452ffef0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  LPCWSTR pWVar3;
  LPCWSTR lpFileName;
  undefined4 uVar4;
  LPCWSTR pWVar5;
  undefined1 local_568 [160];
  undefined1 local_4c8 [160];
  LPCWSTR local_428;
  int local_420;
  LPCWSTR local_218;
  int local_210;
  
  FUN_144bdf390(local_4c8,param_3);
  FUN_144be1260(local_4c8,0x2f,0x5c,1);
  FUN_144bdf390(local_568,param_4);
  FUN_144be1260(local_568,0x2f,0x5c,1);
  FUN_144f62d50(&local_428,local_4c8);
  FUN_144f62d50(&local_218,local_568);
  lpFileName = (LPCWSTR)0x0;
  uVar4 = 0;
  pWVar5 = lpFileName;
  if (local_210 != 0) {
    pWVar5 = local_218;
  }
  pWVar3 = lpFileName;
  if (local_420 != 0) {
    pWVar3 = local_428;
  }
  BVar1 = MoveFileExW(pWVar3,pWVar5,0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 0x11) {
      uVar4 = 0;
      pWVar5 = lpFileName;
      if (local_210 != 0) {
        pWVar5 = local_218;
      }
      pWVar3 = lpFileName;
      if (local_420 != 0) {
        pWVar3 = local_428;
      }
      BVar1 = CopyFileW(pWVar3,pWVar5,1);
      if (BVar1 != 0) {
        if (local_420 != 0) {
          lpFileName = local_428;
        }
        BVar1 = DeleteFileW(lpFileName);
        if (BVar1 == 0) {
          uVar4 = 0x80040200;
        }
        goto LAB_1452fffe6;
      }
    }
    *param_2 = 0x80040200;
  }
  else {
LAB_1452fffe6:
    *param_2 = uVar4;
  }
  FUN_144f62d80(&local_218);
  FUN_144f62d80(&local_428);
  FUN_144bdf2f0(local_568);
  FUN_144bdf2f0(local_4c8);
  return param_2;
}



// FUNCTION 145300030 FUN_145300030 body=377 status=ok
// SIG undefined FUN_145300030(void)

undefined4 *
FUN_145300030(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  DWORD DVar1;
  BOOL BVar2;
  undefined8 *puVar3;
  LPCWSTR pWVar4;
  LPCWSTR lpExistingFileName;
  undefined4 uVar5;
  undefined1 local_568 [160];
  undefined1 local_4c8 [160];
  undefined1 local_428 [528];
  undefined1 local_218 [528];
  
  FUN_144bdf390(local_4c8,param_3);
  FUN_144be1260(local_4c8,0x2f,0x5c,1);
  FUN_144bdf390(local_568,param_4);
  FUN_144be1260(local_568,0x2f,0x5c,1);
  puVar3 = (undefined8 *)FUN_144f62d50(local_428,local_568);
  lpExistingFileName = (LPCWSTR)0x0;
  uVar5 = 0;
  pWVar4 = lpExistingFileName;
  if (*(int *)(puVar3 + 1) != 0) {
    pWVar4 = (LPCWSTR)*puVar3;
  }
  DVar1 = GetFileAttributesW(pWVar4);
  FUN_144f62d80(local_428);
  if ((DVar1 & 1) != 0) {
    puVar3 = (undefined8 *)FUN_144f62d50(local_428,local_568);
    pWVar4 = lpExistingFileName;
    if (*(int *)(puVar3 + 1) != 0) {
      pWVar4 = (LPCWSTR)*puVar3;
    }
    SetFileAttributesW(pWVar4,DVar1 & 0xfffffffe);
    FUN_144f62d80(local_428);
  }
  puVar3 = (undefined8 *)FUN_144f62d50(local_218,local_568);
  pWVar4 = lpExistingFileName;
  if (*(int *)(puVar3 + 1) != 0) {
    pWVar4 = (LPCWSTR)*puVar3;
  }
  puVar3 = (undefined8 *)FUN_144f62d50(local_428,local_4c8);
  if (*(int *)(puVar3 + 1) != 0) {
    lpExistingFileName = (LPCWSTR)*puVar3;
  }
  BVar2 = CopyFileW(lpExistingFileName,pWVar4,0);
  FUN_144f62d80(local_428);
  FUN_144f62d80(local_218);
  if (BVar2 != 1) {
    uVar5 = 0x80040200;
  }
  *param_2 = uVar5;
  FUN_144bdf2f0(local_568);
  FUN_144bdf2f0(local_4c8);
  return param_2;
}



// FUNCTION 1453001b0 FUN_1453001b0 body=550 status=ok
// SIG undefined FUN_1453001b0(void)

undefined4 *
FUN_1453001b0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  undefined8 *puVar4;
  HANDLE hFindFile;
  LPCWSTR pWVar5;
  byte *local_518;
  int local_510;
  byte local_478 [20];
  longlong local_464;
  undefined4 local_45c;
  undefined4 local_458;
  undefined1 local_228 [528];
  
  FUN_144bdf390(&local_518,param_3);
  FUN_144be1260(&local_518,0x2f,0x5c,1);
  cVar1 = FUN_144bdfef0(&local_518,&DAT_149d26c24);
  while (cVar1 != '\0') {
    FUN_144be0640(&local_518,1);
    cVar1 = FUN_144bdfef0(&local_518,&DAT_149d26c24);
  }
  if (((local_510 == 3) && (iVar2 = isalpha((uint)*local_518), iVar2 != 0)) &&
     (local_518[1] == 0x3a)) {
    FUN_144be0720(&local_518,&DAT_149d26c24,0xffffffff);
    puVar4 = (undefined8 *)FUN_144f62d50(local_228,&local_518);
    pWVar5 = (LPCWSTR)0x0;
    if (*(int *)(puVar4 + 1) != 0) {
      pWVar5 = (LPCWSTR)*puVar4;
    }
    DVar3 = GetFileAttributesW(pWVar5);
    FUN_144f62d80(local_228);
    if (DVar3 != 0xffffffff) {
      FUN_144f58f40(param_4,param_1,local_518,2,0,0);
      *param_2 = 0;
      goto LAB_1453003a4;
    }
  }
  else {
    puVar4 = (undefined8 *)FUN_144f62d50(local_228,&local_518);
    pWVar5 = (LPCWSTR)0x0;
    if (*(int *)(puVar4 + 1) != 0) {
      pWVar5 = (LPCWSTR)*puVar4;
    }
    hFindFile = FindFirstFileExW(pWVar5,FindExInfoBasic,local_478,FindExSearchNameMatch,(LPVOID)0x0,
                                 0);
    FUN_144f62d80(local_228);
    if (hFindFile != (HANDLE)0xffffffffffffffff) {
      FUN_144f58f40(param_4,param_1,local_518,((local_478[0] & 0x10) != 0) + '\x01',
                    local_464 * 100 + 0x5e6684f4b3960000,CONCAT44(local_45c,local_458));
      FindClose(hFindFile);
      *param_2 = 0;
      goto LAB_1453003a4;
    }
  }
  *param_2 = 0x80040200;
LAB_1453003a4:
  FUN_144bdf2f0(&local_518);
  return param_2;
}



// FUNCTION 1453003e0 FUN_1453003e0 body=196 status=ok
// SIG undefined FUN_1453003e0(void)

undefined8 *
FUN_1453003e0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  
  local_res10 = 0x38;
  puVar1 = (undefined8 *)(*DAT_14c787670)(0,&local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar1,"Iterator::Impl");
  }
  if (puVar1 == (undefined8 *)0x0) {
    *param_2 = 0;
  }
  else {
    puVar1[2] = 1;
    puVar1[1] = 0xffffffff;
    puVar1[3] = param_1;
    *puVar1 = _anon_06B60B40::Win32Impl::vftable;
    FUN_144be36a0(puVar1 + 4,param_3,0xffffffff);
    FUN_144be36a0(puVar1 + 5,param_4,0xffffffff);
    puVar1[6] = 0;
    *param_2 = puVar1;
  }
  return param_2;
}



// FUNCTION 1453004b0 FUN_1453004b0 body=581 status=ok
// SIG undefined FUN_1453004b0(void)

undefined8 FUN_1453004b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 *local_res20;
  char *local_138;
  undefined8 local_130;
  undefined1 local_118 [8];
  undefined8 *local_110;
  undefined8 local_c8 [20];
  
  if (*(longlong *)(param_1 + 0x38) == 0) {
    local_res8 = 0x70;
    puVar1 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar1,"WatcherImpl");
    }
    uVar4 = 0;
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puVar1[1] = 0xffffffff;
      *puVar1 = hkWin32FileSystem::WatcherImpl::vftable;
      puVar1[2] = 1;
      puVar1[3] = 0;
      *(undefined4 *)(puVar1 + 4) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x24) = 0;
      puVar1[6] = 0;
      *(undefined4 *)(puVar1 + 7) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x80000000;
      uVar2 = FUN_144b3d480();
      puVar1[8] = uVar2;
      *(undefined4 *)(puVar1 + 9) = 0;
      puVar1[10] = 0;
      *(undefined4 *)(puVar1 + 0xb) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x5c) = 0x80000000;
      uVar2 = FUN_144b3d480();
      puVar1[0xc] = uVar2;
      *(undefined4 *)(puVar1 + 0xd) = 0;
      local_res10 = 0x28;
      lVar3 = (*DAT_14c787670)(0,&local_res10,0);
      if (DAT_14c787680 != (code *)0x0) {
        (*DAT_14c787680)(lVar3,"hkCriticalSection");
      }
      if (lVar3 != 0) {
        uVar4 = FUN_144b4a250(lVar3,4000);
      }
      puVar1[5] = uVar4;
      FUN_144bfa1e0(&local_138);
      local_130 = 0x1000;
      local_138 = "FileWatcherThread";
      FUN_144f50de0(local_118,0,8,FUN_145302370,&LAB_1453023b0);
      if (local_110 != (undefined8 *)0x0) {
        *local_110 = puVar1;
      }
      puVar5 = (undefined8 *)FUN_144bfa200(&local_res20,&local_138,local_118);
      uVar4 = *puVar5;
      *puVar5 = 0;
      puVar5 = (undefined8 *)puVar1[3];
      puVar1[3] = uVar4;
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5,1);
      }
      if (local_res20 != (undefined8 *)0x0) {
        (**(code **)*local_res20)(local_res20,1);
      }
    }
    lVar3 = *(longlong *)(param_1 + 0x38);
    *(undefined8 **)(param_1 + 0x38) = puVar1;
    if (lVar3 != 0) {
      FUN_144b3f230();
    }
  }
  FUN_144bdf390(local_c8,param_3);
  FUN_144be1260(local_c8,0x2f,0x5c,1);
  FUN_145301680(*(undefined8 *)(param_1 + 0x38),param_2,local_c8[0]);
  FUN_144bdf2f0(local_c8);
  return param_2;
}



// FUNCTION 145300700 FUN_145300700 body=325 status=ok
// SIG undefined FUN_145300700(void)

LPCWSTR FUN_145300700(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  DWORD DVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  LPCWSTR lpFileName;
  LPCWSTR pWVar5;
  undefined1 local_res8 [8];
  undefined1 local_458 [8];
  ulonglong local_450;
  longlong local_430;
  undefined4 local_428;
  uint local_424;
  WCHAR local_218 [264];
  
  FUN_144f58f10(local_458);
  piVar2 = (int *)(**(code **)(*param_1 + 0x40))(param_1,local_res8,param_2,local_458);
  if (*piVar2 < 0) {
    pWVar5 = (LPCWSTR)0x0;
  }
  else if ((param_4 & 1) == 0) {
    FUN_144be06b0(param_3,local_450 & 0xfffffffffffffffe,0xffffffff);
    pWVar5 = (LPCWSTR)*param_3;
  }
  else {
    puVar3 = (undefined8 *)FUN_144f62b20(&local_430);
    pWVar5 = (LPCWSTR)0x0;
    lpFileName = pWVar5;
    if (*(int *)(puVar3 + 1) != 0) {
      lpFileName = (LPCWSTR)*puVar3;
    }
    DVar1 = GetFullPathNameW(lpFileName,0x104,local_218,(LPWSTR *)0x0);
    FUN_144f62d80(&local_430);
    if (DVar1 != 0) {
      puVar3 = (undefined8 *)FUN_144f628b0(&local_430,local_218);
      iVar4 = 0;
      if (*(int *)(puVar3 + 1) != 0) {
        iVar4 = *(int *)(puVar3 + 1) + -1;
      }
      FUN_144be06b0(param_3,*puVar3,iVar4);
      local_428 = 0;
      if ((-1 < (int)local_424) && (local_430 != 0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,local_430,local_424 & 0x7fffffff);
      }
      pWVar5 = (LPCWSTR)*param_3;
    }
  }
  FUN_144f58f30(local_458);
  return pWVar5;
}



// FUNCTION 145300850 FUN_145300850 body=47 status=ok
// SIG undefined FUN_145300850(void)

ulonglong FUN_145300850(undefined8 param_1,int *param_2)

{
  char *in_RAX;
  undefined7 uVar1;
  
  if (0 < param_2[2] - *param_2) {
    in_RAX = *(char **)param_2;
    uVar1 = (undefined7)((ulonglong)in_RAX >> 8);
    if ((*in_RAX == '/') || (*in_RAX == '\\')) {
      return CONCAT71(uVar1,1);
    }
    if (1 < param_2[2] - *param_2) {
      return CONCAT71(uVar1,in_RAX[1] == ':');
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 145300880 FUN_145300880 body=125 status=ok
// SIG undefined FUN_145300880(void)

undefined8 * FUN_145300880(undefined8 param_1,undefined8 *param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 local_a8 [20];
  
  FUN_144bdf390(local_a8,param_3);
  FUN_144be1260(local_a8,0x2f,0x5c,1);
  uVar1 = FUN_14551d610(local_a8[0]);
  uVar1 = FUN_144f59830(param_1,uVar1,param_4 & 0xfffffffe);
  *param_2 = uVar1;
  FUN_144bdf2f0(local_a8);
  return param_2;
}



// FUNCTION 145300900 FUN_145300900 body=153 status=ok
// SIG undefined FUN_145300900(void)

undefined8 *
FUN_145300900(undefined8 param_1,undefined8 *param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 local_a8 [20];
  
  FUN_144bdf390(local_a8,param_3);
  FUN_144be1260(local_a8,0x2f,0x5c,1);
  uVar2 = param_4 >> 2 & 0x3fffffff;
  uVar1 = 4;
  if ((param_4 & 2) != 0) {
    uVar1 = 2;
  }
  uVar1 = FUN_14551d890(local_a8[0],uVar1,
                        CONCAT71((int7)(uVar2 >> 8),~(byte)uVar2) & 0xffffffffffffff01);
  uVar1 = FUN_144f598c0(param_1,uVar1,param_4 & 0xffffffff);
  *param_2 = uVar1;
  FUN_144bdf2f0(local_a8);
  return param_2;
}



// FUNCTION 1453009a0 FUN_1453009a0 body=286 status=ok
// SIG undefined FUN_1453009a0(void)

void FUN_1453009a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong local_1c8;
  undefined4 local_1c0;
  uint local_1bc;
  undefined1 local_b8 [160];
  
  uVar2 = *(undefined4 *)(param_4 + 0x20);
  uVar3 = *(undefined4 *)(param_4 + 0x1c);
  lVar4 = *(longlong *)(param_4 + 0x14);
  bVar1 = *param_4;
  puVar5 = (undefined8 *)FUN_144f628b0(&local_1c8,param_4 + 0x2c);
  if (*(int *)(puVar5 + 1) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *puVar5;
  }
  uVar6 = FUN_144bdf390(local_b8,param_3);
  puVar5 = (undefined8 *)FUN_144be0ed0(uVar6,uVar7,0,0);
  FUN_144f58f40(param_1,param_2,*puVar5,((bVar1 & 0x10) != 0) + '\x01',
                lVar4 * 100 + 0x5e6684f4b3960000,CONCAT44(uVar3,uVar2));
  FUN_144bdf2f0(local_b8);
  local_1c0 = 0;
  if ((-1 < (int)local_1bc) && (local_1c8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_1c8,local_1bc & 0x7fffffff);
  }
  return;
}



// FUNCTION 145300ac0 FUN_145300ac0 body=687 status=ok
// SIG undefined FUN_145300ac0(void)

undefined8 FUN_145300ac0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  HANDLE pvVar5;
  undefined1 *puVar6;
  LPCWSTR pWVar7;
  LPCWSTR pWVar8;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  _WIN32_FIND_DATAW local_6c8;
  longlong local_478;
  undefined4 local_470;
  uint local_46c;
  undefined1 local_268 [44];
  undefined1 local_23c [548];
  
  pWVar8 = (LPCWSTR)0x0;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    FUN_144bdf390(&local_6c8,*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe);
    if ((*(ulonglong *)(param_1 + 0x28) & 0xfffffffffffffffe) == 0) {
      puVar3 = (ulonglong *)FUN_144be36a0(local_res18,&DAT_149982a3c,0xffffffff);
      FUN_144be0ed0(&local_6c8,*puVar3 & 0xfffffffffffffffe,0,0);
      puVar6 = local_res18;
    }
    else {
      puVar3 = (ulonglong *)FUN_144be3700(local_res8,param_1 + 0x28);
      FUN_144be0ed0(&local_6c8,*puVar3 & 0xfffffffffffffffe,0,0);
      puVar6 = local_res8;
    }
    FUN_144b49dd0(puVar6);
    FUN_144be1260(&local_6c8,0x2f,0x5c,1);
    puVar4 = (undefined8 *)FUN_144f62d50(&local_478,&local_6c8);
    pWVar7 = pWVar8;
    if (*(int *)(puVar4 + 1) != 0) {
      pWVar7 = (LPCWSTR)*puVar4;
    }
    pvVar5 = FindFirstFileExW(pWVar7,FindExInfoBasic,local_268,FindExSearchNameMatch,(LPVOID)0x0,0);
    *(HANDLE *)(param_1 + 0x30) = pvVar5;
    FUN_144f62d80(&local_478);
    if (*(longlong *)(param_1 + 0x30) == -1) {
      FUN_144bdf2f0(&local_6c8);
      return 0;
    }
    puVar4 = (undefined8 *)FUN_144f628b0(&local_478,local_23c);
    pWVar7 = pWVar8;
    if (*(int *)(puVar4 + 1) != 0) {
      pWVar7 = (LPCWSTR)*puVar4;
    }
    cVar1 = FUN_144f59580(pWVar7,0);
    local_470 = 0;
    if ((-1 < (int)local_46c) && (local_478 != 0)) {
      (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                (&PTR_vftable_14c6e47c0,local_478,local_46c & 0x7fffffff);
    }
    if (cVar1 != '\0') {
      FUN_1453009a0(param_2,*(undefined8 *)(param_1 + 0x18),
                    *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe,local_268);
      FUN_144bdf2f0(&local_6c8);
      return 1;
    }
    FUN_144bdf2f0(&local_6c8);
  }
  if (*(HANDLE *)(param_1 + 0x30) != (HANDLE)0xffffffffffffffff) {
    iVar2 = FindNextFileW(*(HANDLE *)(param_1 + 0x30),&local_6c8);
    while (iVar2 != 0) {
      puVar4 = (undefined8 *)FUN_144f628b0(&local_478,local_6c8.cFileName);
      pWVar7 = pWVar8;
      if (*(int *)(puVar4 + 1) != 0) {
        pWVar7 = (LPCWSTR)*puVar4;
      }
      cVar1 = FUN_144f59580(pWVar7,0);
      local_470 = 0;
      if ((-1 < (int)local_46c) && (local_478 != 0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,local_478,local_46c & 0x7fffffff);
      }
      if (cVar1 != '\0') {
        FUN_1453009a0(param_2,*(undefined8 *)(param_1 + 0x18),
                      *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe,&local_6c8);
        return 1;
      }
      iVar2 = FindNextFileW(*(HANDLE *)(param_1 + 0x30),&local_6c8);
    }
    FindClose(*(HANDLE *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  }
  return 0;
}



// FUNCTION 145300d70 FUN_145300d70 body=140 status=ok
// SIG undefined FUN_145300d70(void)

undefined8 * FUN_145300d70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = _anon_06B60B40::Win32Impl::vftable;
  if ((longlong)param_1[6] - 1U < 0xfffffffffffffffe) {
    FindClose((HANDLE)param_1[6]);
  }
  FUN_144b49dd0(param_1 + 5);
  FUN_144b49dd0(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 145300e00 FUN_145300e00 body=359 status=ok
// SIG undefined FUN_145300e00(void)

int * FUN_145300e00(longlong param_1,int *param_2,longlong *param_3)

{
  undefined1 *puVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(*(longlong *)(param_1 + 0x20) + 0x28);
  EnterCriticalSection(lpCriticalSection);
  FUN_145300f70(param_1);
  puVar6 = *(undefined1 **)(param_1 + 0xec90);
  lVar3 = param_3[1];
  lVar5 = (longlong)*(int *)(param_1 + 0xec98) * 0x18;
  puVar1 = puVar6 + lVar5;
  lVar5 = lVar5 / 6 + (lVar5 >> 0x3f);
  iVar4 = ((int)(lVar5 >> 2) - (int)(lVar5 >> 0x3f)) + (int)lVar3;
  if ((int)(*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff) < iVar4) {
    FUN_1453023d0(param_3,&PTR_vftable_14c6e47a0,(longlong)iVar4);
  }
  puVar2 = (undefined1 *)(*param_3 + (longlong)(int)lVar3 * 0x18);
  for (; puVar6 != puVar1; puVar6 = puVar6 + 0x18) {
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = *puVar6;
      FUN_144be3700(puVar2 + 8,puVar6 + 8);
      FUN_144be3700(puVar2 + 0x10,puVar6 + 0x10);
    }
    puVar2 = puVar2 + 0x18;
  }
  *(int *)(param_3 + 1) = iVar4;
  lVar3 = *(longlong *)(param_1 + 0xec90);
  for (lVar5 = lVar3 + (longlong)*(int *)(param_1 + 0xec98) * 0x18; lVar5 != lVar3;
      lVar5 = lVar5 + -0x18) {
    FUN_144b49dd0(lVar5 + -8);
    FUN_144b49dd0(lVar5 + -0x10);
  }
  *(undefined4 *)(param_1 + 0xec98) = 0;
  *param_2 = 0;
  LeaveCriticalSection(lpCriticalSection);
  if (-1 < *param_2) {
    FUN_144f595f0(param_3);
  }
  return param_2;
}



// FUNCTION 145300f70 FUN_145300f70 body=1087 status=ok
// SIG undefined FUN_145300f70(void)

void FUN_145300f70(longlong param_1)

{
  longlong *plVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  longlong local_res18;
  _FILETIME local_res20;
  
  GetSystemTimeAsFileTime(&local_res20);
  if (((0x264caf < (longlong)local_res20 - *(longlong *)(param_1 + 0xeca0)) &&
      (iVar6 = *(int *)(param_1 + 0xec88), iVar6 != 0)) && (uVar11 = 0, 0 < iVar6)) {
    iVar12 = 1;
    local_res18 = 1;
    uVar10 = uVar11;
    do {
      iVar13 = (int)uVar10;
      lVar3 = *(longlong *)(param_1 + 0xec80);
      if (*(char *)(lVar3 + uVar11) == '\x05') {
        if (iVar12 < iVar6) {
          pcVar7 = (char *)(lVar3 + 0x18 + uVar11);
          lVar4 = local_res18;
          iVar9 = iVar12;
LAB_145301030:
          if (*pcVar7 != '\x06') goto code_r0x000145301035;
          plVar1 = (longlong *)(param_1 + 0xec90);
          iVar6 = *(int *)(param_1 + 0xec98);
          if ((int)(*(uint *)(param_1 + 0xec9c) & 0x7fffffff) < iVar6 + 1) {
            FUN_145302710(plVar1,&PTR_vftable_14c6e47a0,(longlong)(iVar6 + 1));
          }
          pcVar2 = (char *)(*plVar1 + (longlong)*(int *)(param_1 + 0xec98) * 0x18);
          if (pcVar2 != (char *)0x0) {
            *pcVar2 = *pcVar7;
            FUN_144be3700(pcVar2 + 8,pcVar7 + 8);
            FUN_144be3700(pcVar2 + 0x10,pcVar7 + 0x10);
          }
          *(int *)(param_1 + 0xec98) = iVar6 + 1;
          FUN_144be3810(*plVar1 + ((longlong)iVar6 * 3 + 1) * 8,lVar3 + 0x10 + uVar11);
          *(undefined1 *)(*plVar1 + -0x18 + (longlong)*(int *)(param_1 + 0xec98) * 0x18) = 3;
          lVar4 = *(longlong *)(param_1 + 0xec80);
          lVar3 = (longlong)iVar13 * 0x18;
          FUN_144b49dd0(lVar4 + 0x10 + lVar3);
          FUN_144b49dd0(lVar4 + 8 + lVar3);
          *(int *)(param_1 + 0xec88) = *(int *)(param_1 + 0xec88) + -1;
          puVar8 = (undefined1 *)(lVar3 + *(longlong *)(param_1 + 0xec80));
          uVar5 = *(int *)(param_1 + 0xec88) - iVar13;
          if (((uVar5 != 0) && (puVar8 != puVar8 + 0x18)) && (0 < (int)uVar5)) {
            uVar10 = (ulonglong)uVar5;
            do {
              if (puVar8 != (undefined1 *)0x0) {
                *puVar8 = puVar8[0x18];
                *(undefined8 *)(puVar8 + 8) = *(undefined8 *)(puVar8 + 0x20);
                *(undefined8 *)(puVar8 + 0x20) = 0;
                *(undefined8 *)(puVar8 + 0x10) = *(undefined8 *)(puVar8 + 0x28);
                *(undefined8 *)(puVar8 + 0x28) = 0;
              }
              FUN_144b49dd0(puVar8 + 0x28);
              FUN_144b49dd0();
              puVar8 = puVar8 + 0x18;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          lVar4 = *(longlong *)(param_1 + 0xec80);
          lVar3 = (longlong)(iVar9 + -1) * 0x18;
          FUN_144b49dd0(lVar4 + 0x10 + lVar3);
          FUN_144b49dd0(lVar4 + 8 + lVar3);
          iVar6 = *(int *)(param_1 + 0xec88) + -1;
          *(int *)(param_1 + 0xec88) = iVar6;
          puVar8 = (undefined1 *)(lVar3 + *(longlong *)(param_1 + 0xec80));
          uVar5 = iVar6 - (iVar9 + -1);
          if (((uVar5 != 0) && (puVar8 != puVar8 + 0x18)) && (0 < (int)uVar5)) {
            uVar10 = (ulonglong)uVar5;
            do {
              if (puVar8 != (undefined1 *)0x0) {
                *puVar8 = puVar8[0x18];
                *(undefined8 *)(puVar8 + 8) = *(undefined8 *)(puVar8 + 0x20);
                *(undefined8 *)(puVar8 + 0x20) = 0;
                *(undefined8 *)(puVar8 + 0x10) = *(undefined8 *)(puVar8 + 0x28);
                *(undefined8 *)(puVar8 + 0x28) = 0;
              }
              FUN_144b49dd0(puVar8 + 0x28);
              FUN_144b49dd0();
              puVar8 = puVar8 + 0x18;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          iVar13 = iVar13 + -1;
          iVar12 = iVar12 + -1;
          uVar11 = uVar11 - 0x18;
          local_res18 = local_res18 + -1;
        }
      }
      else if (*(char *)(lVar3 + uVar11) != '\x06') {
        iVar6 = *(int *)(param_1 + 0xec98) + 1;
        if ((int)(*(uint *)(param_1 + 0xec9c) & 0x7fffffff) < iVar6) {
          FUN_145302710((longlong *)(param_1 + 0xec90),&PTR_vftable_14c6e47a0,(longlong)iVar6);
        }
        puVar8 = (undefined1 *)
                 (*(longlong *)(param_1 + 0xec90) + (longlong)*(int *)(param_1 + 0xec98) * 0x18);
        if (puVar8 != (undefined1 *)0x0) {
          *puVar8 = *(undefined1 *)(lVar3 + uVar11);
          FUN_144be3700(puVar8 + 8,lVar3 + 8 + uVar11);
          FUN_144be3700(puVar8 + 0x10,lVar3 + 0x10 + uVar11);
        }
        *(int *)(param_1 + 0xec98) = iVar6;
        lVar4 = *(longlong *)(param_1 + 0xec80);
        lVar3 = (longlong)iVar13 * 0x18;
        FUN_144b49dd0(lVar4 + 0x10 + lVar3);
        FUN_144b49dd0(lVar4 + 8 + lVar3);
        *(int *)(param_1 + 0xec88) = *(int *)(param_1 + 0xec88) + -1;
        puVar8 = (undefined1 *)(lVar3 + *(longlong *)(param_1 + 0xec80));
        uVar5 = *(int *)(param_1 + 0xec88) - iVar13;
        if (((uVar5 != 0) && (puVar8 != puVar8 + 0x18)) && (0 < (int)uVar5)) {
          uVar10 = (ulonglong)uVar5;
          do {
            if (puVar8 != (undefined1 *)0x0) {
              *puVar8 = puVar8[0x18];
              *(undefined8 *)(puVar8 + 8) = *(undefined8 *)(puVar8 + 0x20);
              *(undefined8 *)(puVar8 + 0x20) = 0;
              *(undefined8 *)(puVar8 + 0x10) = *(undefined8 *)(puVar8 + 0x28);
              *(undefined8 *)(puVar8 + 0x28) = 0;
            }
            FUN_144b49dd0(puVar8 + 0x28);
            FUN_144b49dd0(puVar8 + 0x20);
            puVar8 = puVar8 + 0x18;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        iVar13 = iVar13 + -1;
        iVar12 = iVar12 + -1;
        uVar11 = uVar11 - 0x18;
        local_res18 = local_res18 + -1;
      }
LAB_145301045:
      iVar6 = *(int *)(param_1 + 0xec88);
      local_res18 = local_res18 + 1;
      uVar10 = (ulonglong)(iVar13 + 1U);
      iVar12 = iVar12 + 1;
      uVar11 = uVar11 + 0x18;
    } while ((int)(iVar13 + 1U) < iVar6);
  }
  return;
code_r0x000145301035:
  iVar9 = iVar9 + 1;
  lVar4 = lVar4 + 1;
  pcVar7 = pcVar7 + 0x18;
  if (iVar6 <= lVar4) goto LAB_145301045;
  goto LAB_145301030;
}



// FUNCTION 1453013b0 FUN_1453013b0 body=244 status=ok
// SIG undefined FUN_1453013b0(void)

undefined4 * FUN_1453013b0(ULONG_PTR param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  longlong lVar2;
  ULONG_PTR local_res8;
  undefined1 local_18 [16];
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    lpCriticalSection = *(LPCRITICAL_SECTION *)(*(longlong *)(param_1 + 0x20) + 0x28);
    EnterCriticalSection(lpCriticalSection);
    local_res8 = param_1;
    FUN_144b3d910(param_1);
    FUN_1453022d0(*(longlong *)(param_1 + 0x20) + 0x50,local_18,&local_res8);
    FUN_144b3f230(param_1);
    *(undefined1 *)(param_1 + 0x30) = 1;
    local_res8 = param_1;
    FUN_144b3d910(param_1);
    lVar1 = *(longlong *)(param_1 + 0x20);
    lVar2 = FUN_145302670(lVar1 + 0x30,&local_res8);
    if (lVar2 != 0) {
      FUN_145301f90(lVar1 + 0x30,lVar2);
    }
    FUN_144b3f230(param_1);
    LeaveCriticalSection(lpCriticalSection);
    QueueUserAPC(FUN_145301ac0,*(HANDLE *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x18) + 8),
                 param_1);
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1453014b0 FUN_1453014b0 body=353 status=ok
// SIG undefined FUN_1453014b0(void)

void FUN_1453014b0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0xec90);
  lVar3 = lVar2 + (longlong)*(int *)(param_1 + 0xec98) * 0x18;
  if (lVar3 != lVar2) {
    lVar3 = lVar3 + 8;
    do {
      FUN_144b49dd0(lVar3 + -0x10);
      FUN_144b49dd0(lVar3 + -0x18);
      lVar1 = lVar3 + -0x20;
      lVar3 = lVar3 + -0x18;
    } while (lVar1 != lVar2);
  }
  *(undefined4 *)(param_1 + 0xec98) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xec9c)) && (*(longlong *)(param_1 + 0xec90) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0xec90),
               (ulonglong)(*(uint *)(param_1 + 0xec9c) & 0x7fffffff) * 0x18);
  }
  *(undefined8 *)(param_1 + 0xec90) = 0;
  *(undefined4 *)(param_1 + 0xec9c) = 0x80000000;
  lVar2 = *(longlong *)(param_1 + 0xec80);
  lVar3 = lVar2 + (longlong)*(int *)(param_1 + 0xec88) * 0x18;
  if (lVar3 != lVar2) {
    lVar3 = lVar3 + 8;
    do {
      FUN_144b49dd0(lVar3 + -0x10);
      FUN_144b49dd0(lVar3 + -0x18);
      lVar1 = lVar3 + -0x20;
      lVar3 = lVar3 + -0x18;
    } while (lVar1 != lVar2);
  }
  *(undefined4 *)(param_1 + 0xec88) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xec8c)) && (*(longlong *)(param_1 + 0xec80) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0xec80),
               (ulonglong)(*(uint *)(param_1 + 0xec8c) & 0x7fffffff) * 0x18);
  }
  *(undefined8 *)(param_1 + 0xec80) = 0;
  *(undefined4 *)(param_1 + 0xec8c) = 0x80000000;
  FUN_144b49dd0(param_1 + 0x28);
  FUN_144f595d0(param_1);
  return;
}



// FUNCTION 145301620 FUN_145301620 body=87 status=ok
// SIG undefined FUN_145301620(void)

undefined8 FUN_145301620(undefined8 param_1,ulonglong param_2)

{
  FUN_1453014b0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0xecb0);
  }
  return param_1;
}



// FUNCTION 145301680 FUN_145301680 body=977 status=ok
// SIG undefined FUN_145301680(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_145301680(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  DWORD DVar2;
  undefined8 *puVar3;
  HANDLE pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  LPCWSTR pWVar7;
  LPCWSTR dwData;
  undefined8 local_res18;
  LPCWSTR local_res20;
  ulonglong local_2f8;
  code *local_2f0;
  undefined8 *local_2e8;
  ulonglong local_2e0 [2];
  code *local_2d0;
  undefined8 *local_2c8;
  code *local_2c0;
  ulonglong *local_2b8;
  undefined1 local_288 [80];
  undefined1 local_238 [528];
  
  dwData = (LPCWSTR)0x0;
  local_res18 = param_3;
  puVar3 = (undefined8 *)FUN_144f62b20(local_238,param_3);
  pWVar7 = dwData;
  if (*(int *)(puVar3 + 1) != 0) {
    pWVar7 = (LPCWSTR)*puVar3;
  }
  pvVar4 = CreateFileW(pWVar7,1,7,(LPSECURITY_ATTRIBUTES)0x0,3,0x42000000,(HANDLE)0x0);
  FUN_144f62d80(local_238);
  if (pvVar4 == (HANDLE)0xffffffffffffffff) {
    if ((DAT_14c7fc720 != '\0') || (cVar1 = FUN_144bdbf80(), cVar1 != '\0')) {
      cVar1 = FUN_144bdbf80();
      if (cVar1 == '\0') {
        uVar5 = FUN_144bdc640(local_2e0 + 1);
        local_2f8 = 1;
        local_2f0 = FUN_144f50c70;
        local_2e8 = &local_res18;
        lVar6 = FUN_144bdc480(uVar5,"Failed to create file watcher for {}.",&local_2f8,0);
        *(char **)(lVar6 + 0x38) =
             "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Platform/Windows/Common/Base/hkWin32FileSystem.cxx"
        ;
        *(undefined8 *)(lVar6 + 0x40) = 0x207;
        FUN_144bdc690(local_2e0 + 1);
        *param_2 = 0;
        return param_2;
      }
      uVar5 = FUN_144bdc810(local_238,&DAT_14c7fc6d0,1);
      local_2f8 = 1;
      local_2f0 = FUN_144f50c70;
      local_2e8 = &local_res18;
      lVar6 = FUN_144bdc480(uVar5,"Failed to create file watcher for {}.",&local_2f8,0);
      *(char **)(lVar6 + 0x38) =
           "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Platform/Windows/Common/Base/hkWin32FileSystem.cxx"
      ;
      *(undefined8 *)(lVar6 + 0x40) = 0x207;
      FUN_144bdc8a0(local_238);
    }
    *param_2 = 0;
  }
  else {
    local_res20 = (LPCWSTR)0xecb0;
    pWVar7 = (LPCWSTR)(*DAT_14c787670)(0,&local_res20,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(pWVar7,"Win32FileSystemWatcher");
    }
    if (pWVar7 != (LPCWSTR)0x0) {
      FUN_144f595b0(pWVar7);
      *(undefined ***)pWVar7 = Win32FileSystemWatcher::vftable;
      pWVar7[0x14] = L'\0';
      pWVar7[0x15] = L'\0';
      pWVar7[0x16] = L'\0';
      pWVar7[0x17] = L'\0';
      pWVar7[0x7640] = L'\0';
      pWVar7[0x7641] = L'\0';
      pWVar7[0x7642] = L'\0';
      pWVar7[0x7643] = L'\0';
      pWVar7[0x7644] = L'\0';
      pWVar7[0x7645] = L'\0';
      pWVar7[0x7646] = L'\0';
      pWVar7[0x7647] = L'耀';
      pWVar7[0x7648] = L'\0';
      pWVar7[0x7649] = L'\0';
      pWVar7[0x764a] = L'\0';
      pWVar7[0x764b] = L'\0';
      pWVar7[0x764c] = L'\0';
      pWVar7[0x764d] = L'\0';
      pWVar7[0x764e] = L'\0';
      pWVar7[0x764f] = L'耀';
      dwData = pWVar7;
    }
    *(HANDLE *)(dwData + 0xc) = pvVar4;
    *(longlong *)(dwData + 0x10) = param_1;
    FUN_144be3730(dwData + 0x14,local_res18);
    *(undefined1 *)(dwData + 0x18) = 0;
    DVar2 = QueueUserAPC((PAPCFUNC)&LAB_145301b00,*(HANDLE *)(*(longlong *)(param_1 + 0x18) + 8),
                         (ULONG_PTR)dwData);
    if (DVar2 == 0) {
      if ((DAT_14c7fc720 != '\0') || (cVar1 = FUN_144bdbf80(), cVar1 != '\0')) {
        cVar1 = FUN_144bdbf80();
        if (cVar1 == '\0') {
          DVar2 = GetLastError();
          local_2e0[0] = (ulonglong)DVar2;
          uVar5 = FUN_144bdc640(local_288,&DAT_14c7fc6d0,1);
          local_2e0[1] = 2;
          local_2d0 = FUN_144f50c70;
          local_2c8 = &local_res18;
          local_2c0 = FUN_144f50b20;
          local_2b8 = local_2e0;
          lVar6 = FUN_144bdc480(uVar5,"Failed to add file watcher for {} with error {}.",
                                local_2e0 + 1,0);
          *(char **)(lVar6 + 0x38) =
               "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Platform/Windows/Common/Base/hkWin32FileSystem.cxx"
          ;
          *(undefined8 *)(lVar6 + 0x40) = 0x216;
          FUN_144bdc690(local_288);
        }
        else {
          DVar2 = GetLastError();
          local_2f8 = (ulonglong)DVar2;
          uVar5 = FUN_144bdc810(local_238,&DAT_14c7fc6d0,1);
          local_2e0[1] = 2;
          local_2d0 = FUN_144f50c70;
          local_2c8 = &local_res18;
          local_2c0 = FUN_144f50b20;
          local_2b8 = &local_2f8;
          lVar6 = FUN_144bdc480(uVar5,"Failed to add file watcher for {} with error {}.",
                                local_2e0 + 1,0);
          *(char **)(lVar6 + 0x38) =
               "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Platform/Windows/Common/Base/hkWin32FileSystem.cxx"
          ;
          *(undefined8 *)(lVar6 + 0x40) = 0x216;
          FUN_144bdc8a0(local_238);
        }
      }
      lVar6 = *(longlong *)dwData;
      *param_2 = 0;
      (**(code **)(lVar6 + 8))(dwData,1);
    }
    else {
      local_res20 = dwData;
      FUN_144b3d910(dwData);
      FUN_1453022d0(param_1 + 0x30,&local_2f8,&local_res20);
      FUN_144b3f230(dwData);
      *param_2 = dwData;
    }
  }
  return param_2;
}



// FUNCTION 145301a60 FUN_145301a60 body=65 status=ok
// SIG undefined FUN_145301a60(void)

void FUN_145301a60(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(HANDLE *)(param_1 + 0x18) != (HANDLE)0x0) {
    CancelIo(*(HANDLE *)(param_1 + 0x18));
    CloseHandle(*(HANDLE *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(undefined1 *)(lVar1 + 0x24) = 1;
  return;
}



// FUNCTION 145301ac0 FUN_145301ac0 body=52 status=ok
// SIG undefined FUN_145301ac0(void)

void FUN_145301ac0(longlong param_1)

{
  if ((param_1 != 0) && (*(HANDLE *)(param_1 + 0x18) != (HANDLE)0x0)) {
    CancelIo(*(HANDLE *)(param_1 + 0x18));
    CloseHandle(*(HANDLE *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 145301b10 FUN_145301b10 body=166 status=ok
// SIG undefined FUN_145301b10(void)

void FUN_145301b10(longlong param_1,longlong param_2)

{
  HANDLE hDirectory;
  BOOL BVar1;
  DWORD local_res8 [2];
  
  hDirectory = *(HANDLE *)(param_2 + 0x18);
  FUN_144bfb550((LPOVERLAPPED)(param_2 + 0x40),0,10);
  *(longlong *)(param_2 + 0x60) = param_2;
  *(longlong *)(param_2 + 0x58) = param_2;
  LOCK();
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  UNLOCK();
  local_res8[0] = 0;
  BVar1 = ReadDirectoryChangesW
                    (hDirectory,(LPVOID)(param_2 + 0x80),0xec00,1,0x13,local_res8,
                     (LPOVERLAPPED)(param_2 + 0x40),FUN_145301bc0);
  if (BVar1 == 0) {
    LOCK();
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
    UNLOCK();
    GetLastError();
  }
  return;
}



// FUNCTION 145301bc0 FUN_145301bc0 body=974 status=ok
// SIG undefined FUN_145301bc0(void)

void FUN_145301bc0(uint param_1,undefined8 param_2,longlong param_3)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  _FILETIME _Var4;
  LPCRITICAL_SECTION p_Var5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  _FILETIME _Var10;
  int iVar11;
  uint *puVar12;
  _FILETIME _Var13;
  _FILETIME local_res18;
  _FILETIME local_res20;
  longlong local_268;
  code *pcStack_260;
  _FILETIME *local_258;
  longlong local_248;
  code *pcStack_240;
  _FILETIME *local_238;
  undefined1 local_228 [8];
  int local_220;
  longlong local_188;
  undefined4 local_180;
  uint local_17c;
  
  _Var4 = *(_FILETIME *)(param_3 + 0x20);
  _Var10.dwHighDateTime = 0;
  _Var10.dwLowDateTime = param_1;
  _Var13 = *(_FILETIME *)((longlong)_Var4 + 0x20);
  local_res20 = _Var13;
  if (param_1 == 0x3e3) {
    if (*(char *)((longlong)_Var4 + 0x30) != '\0') {
      p_Var5 = *(LPCRITICAL_SECTION *)((longlong)_Var13 + 0x28);
      EnterCriticalSection(p_Var5);
      local_res18 = _Var4;
      FUN_144b3d910(_Var4);
      lVar7 = FUN_145302670((longlong)_Var13 + 0x50,&local_res18);
      if (lVar7 != 0) {
        FUN_145301f90((longlong)_Var13 + 0x50,lVar7);
      }
      FUN_144b3f230(_Var4);
      LeaveCriticalSection(p_Var5);
    }
  }
  else {
    if (param_1 != 0) {
      LOCK();
      *(int *)((longlong)_Var13 + 0x20) = *(int *)((longlong)_Var13 + 0x20) + -1;
      UNLOCK();
      if ((DAT_14c7fc720 == '\0') && (cVar6 = FUN_144bdbf80(), cVar6 == '\0')) {
        return;
      }
      cVar6 = FUN_144bdbf80();
      if (cVar6 != '\0') {
        local_res20 = _Var10;
        uVar8 = FUN_144bdc810(&local_188,&DAT_14c7fc6d0,1);
        local_268 = 1;
        pcStack_260 = FUN_144f50b20;
        local_258 = &local_res20;
        local_248 = 1;
        pcStack_240 = FUN_144f50b20;
        local_238 = local_258;
        lVar7 = FUN_144bdc480(uVar8,"File watcher terminating due to error {}",&local_248,0);
        *(char **)(lVar7 + 0x38) =
             "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Platform/Windows/Common/Base/hkWin32FileSystem.cxx"
        ;
        *(undefined8 *)(lVar7 + 0x40) = 0x2a5;
        FUN_144bdc8a0(&local_188);
        return;
      }
      local_res18 = _Var10;
      uVar8 = FUN_144bdc640(local_228);
      local_268 = 1;
      pcStack_260 = FUN_144f50b20;
      local_258 = &local_res18;
      local_248 = 1;
      pcStack_240 = FUN_144f50b20;
      local_238 = local_258;
      lVar7 = FUN_144bdc480(uVar8,"File watcher terminating due to error {}",&local_248,0);
      *(char **)(lVar7 + 0x38) =
           "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Platform/Windows/Common/Base/hkWin32FileSystem.cxx"
      ;
      *(undefined8 *)(lVar7 + 0x40) = 0x2a5;
      FUN_144bdc690(local_228);
      return;
    }
    p_Var5 = *(LPCRITICAL_SECTION *)((longlong)_Var13 + 0x28);
    EnterCriticalSection(p_Var5);
    FUN_145300f70(_Var4);
    GetSystemTimeAsFileTime(&local_res18);
    FUN_144bfbed0((longlong)_Var4 + 0xeca0,&local_res18,8);
    FUN_144bdf390(local_228,*(ulonglong *)((longlong)_Var4 + 0x28) & 0xfffffffffffffffe);
    puVar12 = (uint *)((longlong)_Var4 + 0x80);
    while( true ) {
      FUN_144bdfcf0(local_228,local_220 + -1);
      plVar9 = (longlong *)FUN_144f629e0(&local_188,puVar12 + 3,puVar12[2] >> 1);
      local_268 = *plVar9;
      iVar11 = 0;
      if ((int)plVar9[1] != 0) {
        iVar11 = (int)plVar9[1] + -1;
      }
      pcStack_260 = (code *)(iVar11 + local_268);
      local_248 = local_268;
      pcStack_240 = pcStack_260;
      FUN_144be10c0(local_228,&local_268);
      local_180 = 0;
      if ((-1 < (int)local_17c) && (local_188 != 0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,local_188,local_17c & 0x7fffffff);
      }
      iVar11 = *(int *)((longlong)_Var4 + 0xec88) + 1;
      if ((int)(*(uint *)((longlong)_Var4 + 0xec8c) & 0x7fffffff) < iVar11) {
        FUN_1453023d0((longlong *)((longlong)_Var4 + 0xec80),&PTR_vftable_14c6e47a0,(longlong)iVar11
                     );
      }
      iVar2 = *(int *)((longlong)_Var4 + 0xec88);
      *(int *)((longlong)_Var4 + 0xec88) = iVar11;
      puVar1 = (undefined1 *)(*(longlong *)((longlong)_Var4 + 0xec80) + (longlong)iVar2 * 0x18);
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined8 *)(puVar1 + 8) = 0;
        *(undefined8 *)(puVar1 + 0x10) = 0;
      }
      FUN_144be3790(puVar1 + 0x10,local_228);
      *puVar1 = 4;
      uVar3 = puVar12[1];
      if (uVar3 == 1) {
        *puVar1 = 0;
      }
      else if (uVar3 == 2) {
        *puVar1 = 1;
      }
      else if (uVar3 == 3) {
        *puVar1 = 2;
      }
      else if (uVar3 == 4) {
        *puVar1 = 5;
      }
      else if (uVar3 == 5) {
        *puVar1 = 6;
      }
      if (*puVar12 == 0) break;
      puVar12 = (uint *)((longlong)puVar12 + (ulonglong)*puVar12);
    }
    FUN_144bdf2f0(local_228);
    LeaveCriticalSection(p_Var5);
    _Var13 = local_res20;
    FUN_145301b10(local_res20,_Var4);
  }
  LOCK();
  *(int *)((longlong)_Var13 + 0x20) = *(int *)((longlong)_Var13 + 0x20) + -1;
  UNLOCK();
  return;
}



// FUNCTION 145301f90 FUN_145301f90 body=310 status=ok
// SIG undefined FUN_145301f90(void)

void FUN_145301f90(longlong *param_1,uint *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar4 = param_2[1];
  if (uVar4 != (int)param_1[1] - 1U) {
    lVar7 = FUN_145302670(param_1,(longlong)(int)param_1[1] * 8 + -8 + *param_1);
    *(uint *)(lVar7 + 4) = uVar4;
  }
  if (*(longlong *)((longlong)(int)uVar4 * 8 + *param_1) != 0) {
    FUN_144b3f230();
  }
  lVar7 = param_1[1];
  uVar6 = (int)lVar7 - 1;
  *(uint *)(param_1 + 1) = uVar6;
  if (uVar6 != uVar4) {
    plVar1 = (longlong *)(*param_1 + ((longlong)(int)lVar7 + -1) * 8);
    plVar2 = (longlong *)(*param_1 + (longlong)(int)uVar4 * 8);
    if (plVar2 != plVar1) {
      if (plVar2 != (longlong *)0x0) {
        *plVar2 = *plVar1;
        *plVar1 = 0;
      }
      if (*plVar1 != 0) {
        FUN_144b3f230();
      }
    }
  }
  lVar7 = param_1[2];
  uVar9 = (ulonglong)(int)param_1[3];
  uVar8 = ((longlong)param_2 - lVar7 >> 3) + 1U & uVar9;
  puVar3 = (uint *)(lVar7 + uVar8 * 8);
  iVar5 = *(int *)(lVar7 + 4 + uVar8 * 8);
  while (-1 < iVar5) {
    lVar7 = lVar7 + ((ulonglong)*puVar3 & uVar9 & 0xffffffff) * 8;
    if ((ulonglong)((longlong)param_2 - lVar7 >> 3 & (longlong)(int)param_1[3]) <
        (ulonglong)((longlong)puVar3 - lVar7 >> 3 & (longlong)(int)param_1[3])) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar3;
      param_2 = puVar3;
    }
    lVar7 = param_1[2];
    uVar9 = (ulonglong)(int)param_1[3];
    uVar8 = ((longlong)puVar3 - lVar7 >> 3) + 1U & uVar9;
    puVar3 = (uint *)(lVar7 + uVar8 * 8);
    iVar5 = *(int *)(lVar7 + 4 + uVar8 * 8);
  }
  param_2[1] = 0xffffffff;
  return;
}



// FUNCTION 1453020d0 FUN_1453020d0 body=178 status=ok
// SIG undefined FUN_1453020d0(void)

void FUN_1453020d0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[2];
  if ((lVar3 != 0) && (*(int *)(lVar3 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar3,0);
    FUN_144b3ec00(param_1 + 2);
  }
  lVar2 = *param_1;
  lVar3 = lVar2 + (longlong)(int)param_1[1] * 8;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -8;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 3);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 145302190 FUN_145302190 body=308 status=ok
// SIG undefined FUN_145302190(void)

undefined8 * FUN_145302190(undefined8 *param_1,uint param_2)

{
  ULONG_PTR *pUVar1;
  HANDLE hThread;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar2;
  ULONG_PTR *pUVar3;
  
  *param_1 = hkWin32FileSystem::WatcherImpl::vftable;
  hThread = *(HANDLE *)(param_1[3] + 8);
  if (*(int *)(param_1 + 7) == 0) {
    QueueUserAPC((PAPCFUNC)&LAB_145301ab0,hThread,(ULONG_PTR)param_1);
  }
  else {
    pUVar3 = (ULONG_PTR *)param_1[6];
    pUVar1 = pUVar3 + *(int *)(param_1 + 7);
    for (; pUVar3 != pUVar1; pUVar3 = pUVar3 + 1) {
      QueueUserAPC(FUN_145301a60,hThread,*pUVar3);
    }
  }
  WaitForSingleObjectEx(hThread,10000,1);
  lpCriticalSection = (LPCRITICAL_SECTION)param_1[5];
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection(lpCriticalSection);
    (*DAT_14c787678)(0,lpCriticalSection,0);
  }
  FUN_1453020d0(param_1 + 10);
  FUN_1453020d0(param_1 + 6);
  puVar2 = (undefined8 *)param_1[3];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1453022d0 FUN_1453022d0 body=159 status=ok
// SIG undefined FUN_1453022d0(void)

longlong * FUN_1453022d0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  int local_res8 [2];
  
  FUN_145302540(param_1,local_res8);
  iVar3 = (int)param_1[1];
  bVar4 = local_res8[0] == iVar3;
  if (bVar4) {
    iVar3 = iVar3 + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar3) {
      FUN_145302870(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    plVar1 = (longlong *)(*param_1 + (longlong)(int)param_1[1] * 8);
    if (plVar1 != (longlong *)0x0) {
      lVar2 = *param_3;
      *plVar1 = lVar2;
      if (lVar2 != 0) {
        FUN_144b3d910();
      }
    }
    *(int *)(param_1 + 1) = iVar3;
  }
  lVar2 = *param_1;
  *(bool *)(param_2 + 1) = bVar4;
  *param_2 = lVar2 + (longlong)local_res8[0] * 8;
  return param_2;
}



// FUNCTION 145302370 FUN_145302370 body=52 status=ok
// SIG undefined FUN_145302370(void)

void FUN_145302370(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  while ((*(int *)(lVar1 + 0x20) != 0 || (*(char *)(lVar1 + 0x24) == '\0'))) {
    SleepEx(0xffffffff,1);
  }
  return;
}



// FUNCTION 1453023d0 FUN_1453023d0 body=358 status=ok
// SIG undefined FUN_1453023d0(void)

ulonglong FUN_1453023d0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar4 = uVar10 * 2;
  uVar8 = param_3;
  if (param_3 < uVar4) {
    uVar8 = uVar4;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90);
  }
  puVar3 = (undefined1 *)(**(code **)(*param_2 + 0x10))(param_2,uVar8 * 0x18,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  uVar4 = (ulonglong)uVar1;
  puVar6 = (undefined1 *)*param_1;
  uVar7 = (ulonglong)uVar1;
  puVar5 = puVar3;
  puVar9 = puVar6;
  if (0 < (int)uVar1) {
    do {
      if (puVar5 != (undefined1 *)0x0) {
        *puVar5 = *puVar9;
        *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar9 + 8);
        *(undefined8 *)(puVar9 + 8) = 0;
        *(undefined8 *)(puVar5 + 0x10) = *(undefined8 *)(puVar9 + 0x10);
        *(undefined8 *)(puVar9 + 0x10) = 0;
      }
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 0x18;
      puVar9 = puVar9 + 0x18;
    } while (uVar4 != 0);
    puVar6 = puVar6 + 8;
    do {
      FUN_144b49dd0(puVar6 + 8);
      FUN_144b49dd0(puVar6);
      puVar6 = puVar6 + 0x18;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar4 = uVar8 * 0x18 + 0x18;
  uVar7 = uVar8;
  if (uVar4 <= local_res8) {
    local_res8 = local_res8 - 0x18;
    uVar7 = uVar8 + 1;
    if (uVar4 <= local_res8) {
      uVar8 = local_res8 + uVar8 * -0x18;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar8;
      uVar4 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar2,0);
      uVar7 = uVar7 + uVar8 / 0x18;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar4 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar10 * 0x18);
  }
  *param_1 = puVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  return uVar4;
}



// FUNCTION 145302540 FUN_145302540 body=296 status=ok
// SIG undefined FUN_145302540(void)

uint * FUN_145302540(longlong *param_1,uint *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  iVar8 = (int)param_1[1] + 1;
  uVar7 = (longlong)iVar8 * 3;
  if ((iVar8 < 0) || (0xffffffff < uVar7)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar3 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar3)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  if (((bool)(bVar5 & bVar4)) && ((uint)uVar3 < (uint)uVar7)) {
    FUN_144b2eb80(param_1 + 2);
  }
  lVar1 = *param_3;
  lVar2 = param_1[2];
  iVar8 = (int)((ulonglong)lVar1 >> 0x20);
  uVar9 = iVar8 * -0x61c8864f;
  uVar10 = (int)lVar1 * -0x61c8864f;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | iVar8 * -0x4f000000;
  uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
           (int)lVar1 * -0x4f000000;
  uVar9 = (uVar10 >> 2) + 0x9e3779b9 + uVar9 * 0x40 + uVar10 ^ uVar9;
  uVar7 = (ulonglong)(uVar9 & *(uint *)(param_1 + 3));
  iVar8 = *(int *)(lVar2 + 4 + uVar7 * 8);
  do {
    puVar6 = (uint *)(lVar2 + uVar7 * 8);
    if (iVar8 < 0) {
      uVar10 = *(uint *)(param_1 + 1);
      *puVar6 = uVar9;
      puVar6[1] = uVar10;
      lVar2 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_145302640:
      param_2[1] = (uint)((longlong)puVar6 - lVar2 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar9) && (*(longlong *)(*param_1 + (longlong)(int)puVar6[1] * 8) == lVar1)) {
      *param_2 = puVar6[1];
      goto LAB_145302640;
    }
    uVar7 = ((longlong)puVar6 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar8 = *(int *)(lVar2 + 4 + uVar7 * 8);
  } while( true );
}



// FUNCTION 145302670 FUN_145302670 body=149 status=ok
// SIG undefined FUN_145302670(void)

uint * FUN_145302670(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar1 = *param_2;
  uVar7 = (int)lVar1 * -0x61c8864f;
  iVar3 = (int)((ulonglong)lVar1 >> 0x20);
  uVar6 = iVar3 * -0x61c8864f;
  uVar8 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | (int)lVar1 * -0x4f000000
  ;
  uVar7 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | iVar3 * -0x4f000000;
  uVar7 = uVar7 * 0x40 + uVar8 + (uVar8 >> 2) + 0x9e3779b9 ^ uVar7;
  lVar2 = param_1[2];
  uVar4 = (ulonglong)(uVar7 & *(uint *)(param_1 + 3));
  uVar6 = *(uint *)(lVar2 + 4 + uVar4 * 8);
  while( true ) {
    if ((int)uVar6 < 0) {
      return (uint *)0x0;
    }
    puVar5 = (uint *)(lVar2 + uVar4 * 8);
    if ((*puVar5 == uVar7) && (*(longlong *)(*param_1 + (ulonglong)uVar6 * 8) == lVar1)) break;
    uVar4 = ((longlong)puVar5 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar6 = *(uint *)(lVar2 + 4 + uVar4 * 8);
  }
  return puVar5;
}



// FUNCTION 145302710 FUN_145302710 body=348 status=ok
// SIG undefined FUN_145302710(void)

ulonglong FUN_145302710(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  ulonglong local_res8;
  
  uVar4 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar8 = param_3;
  if (param_3 < uVar4) {
    uVar8 = uVar4;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90);
  }
  local_res8 = uVar8 * 0x18;
  puVar3 = (undefined1 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar1 = *(uint *)(param_1 + 1);
  uVar4 = (ulonglong)uVar1;
  puVar6 = (undefined1 *)*param_1;
  uVar7 = (ulonglong)uVar1;
  puVar5 = puVar6;
  puVar9 = puVar3;
  if (0 < (int)uVar1) {
    do {
      if (puVar9 != (undefined1 *)0x0) {
        *puVar9 = *puVar5;
        *(undefined8 *)(puVar9 + 8) = *(undefined8 *)(puVar5 + 8);
        *(undefined8 *)(puVar5 + 8) = 0;
        *(undefined8 *)(puVar9 + 0x10) = *(undefined8 *)(puVar5 + 0x10);
        *(undefined8 *)(puVar5 + 0x10) = 0;
      }
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 0x18;
      puVar9 = puVar9 + 0x18;
    } while (uVar4 != 0);
    puVar6 = puVar6 + 8;
    do {
      FUN_144b49dd0(puVar6 + 8);
      FUN_144b49dd0(puVar6);
      puVar6 = puVar6 + 0x18;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar4 = uVar8 * 0x18 + 0x18;
  uVar7 = uVar8;
  if (uVar4 <= local_res8) {
    local_res8 = local_res8 - 0x18;
    uVar7 = uVar8 + 1;
    if (uVar4 <= local_res8) {
      uVar8 = local_res8 + uVar8 * -0x18;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar8;
      uVar4 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar2,0);
      uVar7 = uVar7 + uVar8 / 0x18;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar4 = (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = puVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  return uVar4;
}



// FUNCTION 145302870 FUN_145302870 body=319 status=ok
// SIG undefined FUN_145302870(void)

void FUN_145302870(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  
  uVar9 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar3 = uVar9 * 2;
  uVar6 = param_3;
  if (param_3 < uVar3) {
    uVar6 = uVar3;
  }
  if ((0x7ffffffe < uVar6) && (uVar6 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90);
  }
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2,uVar6 * 8,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  plVar5 = (longlong *)*param_1;
  uVar7 = (ulonglong)uVar1;
  plVar4 = plVar2;
  plVar8 = plVar5;
  if (0 < (int)uVar1) {
    do {
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = *plVar8;
        *plVar8 = 0;
      }
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 1;
      plVar8 = plVar8 + 1;
    } while (uVar3 != 0);
    do {
      if (*plVar5 != 0) {
        FUN_144b3f230();
      }
      plVar5 = plVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar3 = uVar6 * 8 + 8;
  uVar7 = uVar6;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar7 = uVar6 + 1;
    if (uVar3 <= local_res8) {
      uVar7 = uVar7 + (local_res8 + uVar6 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar9 * 8);
  }
  *param_1 = plVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  return;
}



// FUNCTION 1453029b0 FUN_1453029b0 body=139 status=ok
// SIG undefined FUN_1453029b0(void)

undefined8 * FUN_1453029b0(undefined8 *param_1,longlong *param_2,int param_3)

{
  undefined8 uVar1;
  longlong local_res8;
  
  FUN_1453044e0();
  param_1[3] = param_2;
  *param_1 = hkBufferedStreamReader::vftable;
  uVar1 = (**(code **)(*param_2 + 0x38))(param_2);
  param_1[4] = uVar1;
  if (param_3 < 0) {
    param_3 = 0x10000;
  }
  local_res8 = (longlong)param_3;
  uVar1 = (*DAT_14c787670)(0,&local_res8,0x40);
  param_1[5] = uVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = (longlong)param_3;
  FUN_144b3d910(param_1[3]);
  return param_1;
}



// FUNCTION 145302a40 FUN_145302a40 body=271 status=ok
// SIG undefined FUN_145302a40(void)

longlong FUN_145302a40(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  longlong local_res10;
  longlong *local_res18;
  
  local_res18 = (longlong *)(param_1 + 0x30);
  lVar5 = *(longlong *)(param_1 + 0x38) - *local_res18;
  lVar7 = 0;
  local_res10 = param_2;
  if (lVar5 < param_3) {
    do {
      FUN_144bfbed0(lVar7 + local_res10,
                    *(longlong *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x28),lVar5);
      lVar1 = *(longlong *)(param_1 + 0x28);
      *(longlong *)(param_1 + 0x30) = 0;
      param_3 = param_3 - lVar5;
      lVar6 = *(longlong *)(param_1 + 0x40);
      lVar7 = lVar7 + lVar5;
      *(undefined8 *)(param_1 + 0x38) = 0;
      plVar2 = *(longlong **)(param_1 + 0x18);
      pcVar3 = (char *)(**(code **)(*plVar2 + 0x18))(plVar2,local_res8);
      if (*pcVar3 == '\0') {
        return lVar7;
      }
      lVar5 = 0;
      while ((lVar6 != 0 &&
             (lVar4 = (**(code **)(*plVar2 + 0x20))(plVar2,lVar5 + lVar1,lVar6), lVar4 != 0))) {
        lVar5 = lVar5 + lVar4;
        lVar6 = lVar6 - lVar4;
      }
      if (lVar5 == 0) {
        return lVar7;
      }
      *(longlong *)(param_1 + 0x38) = lVar5;
    } while (lVar5 < param_3);
  }
  FUN_144bfbed0(lVar7 + local_res10,*local_res18 + *(longlong *)(param_1 + 0x28),param_3);
  *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + param_3;
  return lVar7 + param_3;
}



// FUNCTION 145302b50 FUN_145302b50 body=165 status=ok
// SIG undefined FUN_145302b50(void)

longlong FUN_145302b50(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar4 = 0;
  uVar3 = *(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30);
  if (uVar3 < param_2) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    uVar2 = param_2 - uVar3 & 0xfffffffffffffe00;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))
                      (*(longlong **)(param_1 + 0x18),uVar2);
    param_2 = (param_2 - uVar3) - uVar1;
    lVar4 = uVar1 + uVar3;
    if (uVar1 < uVar2) {
      return lVar4;
    }
    uVar3 = FUN_145302e30(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28),
                          *(undefined8 *)(param_1 + 0x40));
    *(ulonglong *)(param_1 + 0x38) = uVar3;
  }
  if (param_2 < uVar3) {
    uVar3 = param_2;
  }
  *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + uVar3;
  return uVar3 + lVar4;
}



// FUNCTION 145302c00 FUN_145302c00 body=222 status=ok
// SIG undefined FUN_145302c00(void)

ulonglong FUN_145302c00(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x40) - 0x200U < param_3) {
    uVar3 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x30);
    uVar3 = *(ulonglong *)(param_1 + 0x38);
    if (uVar3 < lVar1 + param_3) {
      lVar2 = uVar3 - lVar1;
      lVar4 = 0x200 - (ulonglong)((uint)lVar2 & 0x1ff);
      if ((lVar4 != lVar1) && (lVar2 != 0)) {
        FUN_144bfb3c0(*(longlong *)(param_1 + 0x28) + lVar4,*(longlong *)(param_1 + 0x28) + lVar1,
                      lVar2);
      }
      lVar2 = lVar4 + lVar2;
      *(longlong *)(param_1 + 0x38) = lVar2;
      *(longlong *)(param_1 + 0x30) = lVar4;
      lVar1 = FUN_145302e30(*(undefined8 *)(param_1 + 0x18),*(longlong *)(param_1 + 0x28) + lVar2,
                            *(longlong *)(param_1 + 0x40) - lVar2);
      *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + lVar1;
      uVar3 = *(ulonglong *)(param_1 + 0x38);
    }
    uVar3 = uVar3 - *(longlong *)(param_1 + 0x30);
    if (param_3 < uVar3) {
      uVar3 = param_3;
    }
    FUN_144b3d470(param_2,*(longlong *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x28),uVar3);
  }
  return uVar3;
}



// FUNCTION 145302ce0 FUN_145302ce0 body=63 status=ok
// SIG undefined FUN_145302ce0(void)

undefined1 * FUN_145302ce0(longlong param_1,undefined1 *param_2)

{
  char *pcVar1;
  undefined1 local_res8 [32];
  
  if (*(longlong *)(param_1 + 0x30) == *(longlong *)(param_1 + 0x38)) {
    pcVar1 = (char *)(**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                               (*(longlong **)(param_1 + 0x18),local_res8);
    if (*pcVar1 == '\0') {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = 1;
  return param_2;
}



// FUNCTION 145302d20 FUN_145302d20 body=11 status=ok
// SIG undefined FUN_145302d20(void)

longlong FUN_145302d20(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    lVar1 = param_1;
  }
  return lVar1;
}



// FUNCTION 145302d30 FUN_145302d30 body=55 status=ok
// SIG undefined FUN_145302d30(void)

undefined8 FUN_145302d30(longlong param_1,undefined8 param_2,longlong param_3,int param_4)

{
  if (param_4 == 1) {
    param_3 = param_3 + (*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x38));
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x48))
            (*(longlong **)(param_1 + 0x20),param_2,param_3);
  return param_2;
}



// FUNCTION 145302d70 FUN_145302d70 body=57 status=ok
// SIG undefined FUN_145302d70(void)

longlong FUN_145302d70(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))();
  if (-1 < lVar1) {
    return (*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x38)) + lVar1;
  }
  return -1;
}



// FUNCTION 145302db0 FUN_145302db0 body=124 status=ok
// SIG undefined FUN_145302db0(void)

undefined8 * FUN_145302db0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkBufferedStreamReader::vftable;
  FUN_144b3f230(param_1[3]);
  (*DAT_14c787678)(0,param_1[5],0);
  FUN_145304500(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 145302e30 FUN_145302e30 body=133 status=ok
// SIG undefined FUN_145302e30(void)

longlong FUN_145302e30(longlong *param_1,longlong param_2,longlong param_3)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  pcVar1 = (char *)(**(code **)(*param_1 + 0x18))(param_1,local_res8);
  if (*pcVar1 != '\0') {
    lVar3 = 0;
    while ((param_3 != 0 &&
           (lVar2 = (**(code **)(*param_1 + 0x20))(param_1,lVar3 + param_2,param_3), lVar2 != 0))) {
      lVar3 = lVar3 + lVar2;
      param_3 = param_3 - lVar2;
    }
    return lVar3;
  }
  return 0;
}



// FUNCTION 145302ec0 FUN_145302ec0 body=194 status=ok
// SIG undefined FUN_145302ec0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_145302ec0(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  char *pcVar3;
  ulonglong uVar4;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  undefined1 local_3e98 [15992];
  undefined8 uStack_20;
  
  uStack_20 = 0x145302ed3;
  uVar1 = (**(code **)(*param_1 + 0x20))(param_1,local_3e98,16000);
  while( true ) {
    if (uVar1 == 0) {
      return 1;
    }
    uVar4 = 0;
    if (uVar1 != 0) {
      do {
        lVar2 = (**(code **)(*param_2 + 0x20))(param_2,local_3e98 + uVar4,uVar1 - uVar4);
        uVar4 = uVar4 + lVar2;
        pcVar3 = (char *)(**(code **)(*param_2 + 0x18))(param_2,local_res8);
        if (*pcVar3 == '\0') goto LAB_145302f7e;
      } while (uVar4 < uVar1);
    }
    pcVar3 = (char *)(**(code **)(*param_1 + 0x18))(param_1,local_res18);
    if (*pcVar3 == '\0') break;
    uVar1 = (**(code **)(*param_1 + 0x20))(param_1,local_3e98,16000);
  }
LAB_145302f7e:
  return (ulonglong)pcVar3 & 0xffffffffffffff00;
}



// FUNCTION 145302f90 FUN_145302f90 body=31 status=ok
// SIG undefined FUN_145302f90(void)

undefined8 * FUN_145302f90(undefined8 *param_1)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkReflect::TypeReg::vftable;
  return param_1;
}



// FUNCTION 145302fb0 FUN_145302fb0 body=11 status=ok
// SIG undefined FUN_145302fb0(void)

void FUN_145302fb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 145302fc0 FUN_145302fc0 body=52 status=ok
// SIG undefined FUN_145302fc0(void)

void FUN_145302fc0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_18 [16];
  
  lVar1 = *param_1;
  uVar2 = FUN_144bef0c0(param_2,local_18);
  (**(code **)(lVar1 + 0x18))(param_1,uVar2);
  return;
}



// FUNCTION 145303000 FUN_145303000 body=71 status=ok
// SIG undefined FUN_145303000(void)

undefined8 * FUN_145303000(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 145303050 FUN_145303050 body=31 status=ok
// SIG undefined FUN_145303050(void)

undefined8 * FUN_145303050(undefined8 *param_1)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkReflect::MutableTypeReg::vftable;
  return param_1;
}



// FUNCTION 145303070 FUN_145303070 body=11 status=ok
// SIG undefined FUN_145303070(void)

void FUN_145303070(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 145303080 FUN_145303080 body=3 status=ok
// SIG undefined FUN_145303080(void)

void FUN_145303080(void)

{
  return;
}



// FUNCTION 145303090 FUN_145303090 body=71 status=ok
// SIG undefined FUN_145303090(void)

undefined8 * FUN_145303090(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1453030e0 FUN_1453030e0 body=35 status=ok
// SIG undefined FUN_1453030e0(void)

undefined4 *
FUN_1453030e0(undefined8 param_1,undefined4 *param_2,ushort *param_3,undefined8 param_4,
             double param_5)

{
  ushort uVar1;
  
  *param_2 = 0;
  uVar1 = (ushort)((uint)(float)param_5 >> 0x10);
  *param_3 = uVar1 >> 8 | uVar1 << 8;
  return param_2;
}



// FUNCTION 145303110 FUN_145303110 body=40 status=ok
// SIG undefined FUN_145303110(void)

undefined4 *
FUN_145303110(undefined8 param_1,undefined4 *param_2,ushort *param_3,undefined8 param_4,
             double *param_5)

{
  ushort uVar1;
  
  uVar1 = *param_3;
  *param_2 = 0;
  *param_5 = (double)(float)((int)(short)(uVar1 >> 8 | uVar1 << 8) << 0x10);
  return param_2;
}



// FUNCTION 145303140 FUN_145303140 body=97 status=ok
// SIG undefined FUN_145303140(void)

undefined8 * FUN_145303140(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::EndianFloatImplN<hkHalf16,hkEndian::EndianType<hkHalf16,0>_>::
             vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1453031b0 FUN_1453031b0 body=25 status=ok
// SIG undefined FUN_1453031b0(void)

undefined4 *
FUN_1453031b0(undefined8 param_1,undefined4 *param_2,float *param_3,undefined8 param_4,
             double param_5)

{
  *param_2 = 0;
  *param_3 = (float)param_5;
  return param_2;
}



// FUNCTION 1453031d0 FUN_1453031d0 body=27 status=ok
// SIG undefined FUN_1453031d0(void)

undefined4 *
FUN_1453031d0(undefined8 param_1,undefined4 *param_2,float *param_3,undefined8 param_4,
             double *param_5)

{
  float fVar1;
  
  fVar1 = *param_3;
  *param_2 = 0;
  *param_5 = (double)fVar1;
  return param_2;
}



// FUNCTION 1453031f0 FUN_1453031f0 body=97 status=ok
// SIG undefined FUN_1453031f0(void)

undefined8 * FUN_1453031f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::EndianFloatImplN<float,hkEndian::EndianType<float,1>_>::vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145303260 FUN_145303260 body=29 status=ok
// SIG undefined FUN_145303260(void)

undefined4 *
FUN_145303260(undefined8 param_1,undefined4 *param_2,uint *param_3,undefined8 param_4,double param_5
             )

{
  float fVar1;
  
  fVar1 = (float)param_5;
  *param_2 = 0;
  *param_3 = (uint)fVar1 >> 0x18 | ((uint)fVar1 & 0xff0000) >> 8 | ((uint)fVar1 & 0xff00) << 8 |
             (int)fVar1 << 0x18;
  return param_2;
}



// FUNCTION 145303280 FUN_145303280 body=31 status=ok
// SIG undefined FUN_145303280(void)

undefined4 *
FUN_145303280(undefined8 param_1,undefined4 *param_2,uint *param_3,undefined8 param_4,
             double *param_5)

{
  uint uVar1;
  
  uVar1 = *param_3;
  *param_2 = 0;
  *param_5 = (double)(float)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                            uVar1 << 0x18);
  return param_2;
}



// FUNCTION 1453032a0 FUN_1453032a0 body=97 status=ok
// SIG undefined FUN_1453032a0(void)

undefined8 * FUN_1453032a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::EndianFloatImplN<float,hkEndian::EndianType<float,0>_>::vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145303310 FUN_145303310 body=21 status=ok
// SIG undefined FUN_145303310(void)

undefined4 *
FUN_145303310(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  *param_3 = param_5;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 145303330 FUN_145303330 body=21 status=ok
// SIG undefined FUN_145303330(void)

undefined4 *
FUN_145303330(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  *param_2 = 0;
  *param_5 = uVar1;
  return param_2;
}



// FUNCTION 145303350 FUN_145303350 body=97 status=ok
// SIG undefined FUN_145303350(void)

undefined8 * FUN_145303350(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::EndianFloatImplN<double,hkEndian::EndianType<double,1>_>::vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1453033c0 FUN_1453033c0 body=21 status=ok
// SIG undefined FUN_1453033c0(void)

undefined4 *
FUN_1453033c0(undefined8 param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4,
             ulonglong param_5)

{
  *param_3 = param_5 >> 0x38 | (param_5 & 0xff000000000000) >> 0x28 |
             (param_5 & 0xff0000000000) >> 0x18 | (param_5 & 0xff00000000) >> 8 |
             (param_5 & 0xff000000) << 8 | (param_5 & 0xff0000) << 0x18 | (param_5 & 0xff00) << 0x28
             | param_5 << 0x38;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1453033e0 FUN_1453033e0 body=24 status=ok
// SIG undefined FUN_1453033e0(void)

undefined4 *
FUN_1453033e0(undefined8 param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  ulonglong uVar1;
  
  uVar1 = *param_3;
  *param_2 = 0;
  *param_5 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
             (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
             (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
  return param_2;
}



// FUNCTION 145303400 FUN_145303400 body=97 status=ok
// SIG undefined FUN_145303400(void)

undefined8 * FUN_145303400(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::EndianFloatImplN<double,hkEndian::EndianType<double,0>_>::vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145303470 FUN_145303470 body=72 status=ok
// SIG undefined FUN_145303470(void)

undefined4 *
FUN_145303470(undefined8 param_1,undefined4 *param_2,char *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  ulonglong uVar1;
  char cVar2;
  char cVar3;
  
  uVar1 = param_5[1];
  if (*param_5 <= (ulonglong)((char)uVar1 != '\0') + 0x7f) {
    cVar3 = (char)*param_5;
    *param_2 = 0;
    cVar2 = -cVar3;
    if ((char)uVar1 == '\0') {
      cVar2 = cVar3;
    }
    *param_3 = cVar2;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 1453034c0 FUN_1453034c0 body=47 status=ok
// SIG undefined FUN_1453034c0(void)

undefined4 *
FUN_1453034c0(undefined8 param_1,undefined4 *param_2,byte *param_3,undefined8 param_4,
             longlong *param_5)

{
  byte bVar1;
  longlong lVar2;
  
  bVar1 = *param_3;
  lVar2 = (longlong)(char)bVar1;
  if ((char)bVar1 < '\0') {
    lVar2 = (longlong)~(int)(char)bVar1 + 1;
  }
  *param_2 = 0;
  *param_5 = lVar2;
  *(byte *)(param_5 + 1) = bVar1 >> 7;
  return param_2;
}



// FUNCTION 1453034f0 FUN_1453034f0 body=87 status=ok
// SIG undefined FUN_1453034f0(void)

undefined8 FUN_1453034f0(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145303550 FUN_145303550 body=72 status=ok
// SIG undefined FUN_145303550(void)

undefined4 *
FUN_145303550(undefined8 param_1,undefined4 *param_2,char *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  ulonglong uVar1;
  char cVar2;
  char cVar3;
  
  uVar1 = param_5[1];
  if (*param_5 <= (ulonglong)((char)uVar1 != '\0') + 0x7f) {
    cVar3 = (char)*param_5;
    *param_2 = 0;
    cVar2 = -cVar3;
    if ((char)uVar1 == '\0') {
      cVar2 = cVar3;
    }
    *param_3 = cVar2;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 1453035a0 FUN_1453035a0 body=47 status=ok
// SIG undefined FUN_1453035a0(void)

undefined4 *
FUN_1453035a0(undefined8 param_1,undefined4 *param_2,byte *param_3,undefined8 param_4,
             longlong *param_5)

{
  byte bVar1;
  longlong lVar2;
  
  bVar1 = *param_3;
  lVar2 = (longlong)(char)bVar1;
  if ((char)bVar1 < '\0') {
    lVar2 = (longlong)~(int)(char)bVar1 + 1;
  }
  *param_2 = 0;
  *param_5 = lVar2;
  *(byte *)(param_5 + 1) = bVar1 >> 7;
  return param_2;
}



// FUNCTION 1453035d0 FUN_1453035d0 body=87 status=ok
// SIG undefined FUN_1453035d0(void)

undefined8 FUN_1453035d0(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145303630 FUN_145303630 body=69 status=ok
// SIG undefined FUN_145303630(void)

undefined4 *
FUN_145303630(undefined8 param_1,undefined4 *param_2,short *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  ulonglong uVar1;
  short sVar2;
  short sVar3;
  
  uVar1 = param_5[1];
  if (*param_5 <= (ulonglong)((char)uVar1 != '\0') + 0x7fff) {
    sVar3 = (short)*param_5;
    *param_2 = 0;
    sVar2 = -sVar3;
    if ((char)uVar1 == '\0') {
      sVar2 = sVar3;
    }
    *param_3 = sVar2;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 145303680 FUN_145303680 body=49 status=ok
// SIG undefined FUN_145303680(void)

undefined4 *
FUN_145303680(undefined8 param_1,undefined4 *param_2,short *param_3,undefined8 param_4,
             longlong *param_5)

{
  short sVar1;
  longlong lVar2;
  
  sVar1 = *param_3;
  lVar2 = (longlong)sVar1;
  if (sVar1 < 0) {
    lVar2 = (longlong)~(int)sVar1 + 1;
  }
  *param_2 = 0;
  *param_5 = lVar2;
  *(byte *)(param_5 + 1) = (byte)((ushort)sVar1 >> 0xf);
  return param_2;
}



// FUNCTION 1453036c0 FUN_1453036c0 body=87 status=ok
// SIG undefined FUN_1453036c0(void)

undefined8 FUN_1453036c0(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145303720 FUN_145303720 body=73 status=ok
// SIG undefined FUN_145303720(void)

undefined4 *
FUN_145303720(undefined8 param_1,undefined4 *param_2,ushort *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  ulonglong uVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar1 = param_5[1];
  if (*param_5 <= (ulonglong)((char)uVar1 != '\0') + 0x7fff) {
    uVar3 = (ushort)*param_5;
    *param_2 = 0;
    uVar2 = -uVar3;
    if ((char)uVar1 == '\0') {
      uVar2 = uVar3;
    }
    *param_3 = uVar2 >> 8 | uVar2 << 8;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 145303770 FUN_145303770 body=55 status=ok
// SIG undefined FUN_145303770(void)

undefined4 *
FUN_145303770(undefined8 param_1,undefined4 *param_2,ushort *param_3,undefined8 param_4,
             longlong *param_5)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  
  uVar1 = *param_3;
  uVar2 = uVar1 >> 8 | uVar1 << 8;
  if ((short)uVar2 < 0) {
    lVar3 = (longlong)~(int)(short)uVar2 + 1;
  }
  else {
    lVar3 = (longlong)(short)uVar2;
  }
  *param_2 = 0;
  *param_5 = lVar3;
  *(byte *)(param_5 + 1) = (byte)uVar1 >> 7;
  return param_2;
}



// FUNCTION 1453037b0 FUN_1453037b0 body=87 status=ok
// SIG undefined FUN_1453037b0(void)

undefined8 FUN_1453037b0(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145303810 FUN_145303810 body=65 status=ok
// SIG undefined FUN_145303810(void)

undefined4 *
FUN_145303810(undefined8 param_1,undefined4 *param_2,int *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = param_5[1];
  if (*param_5 <= (ulonglong)((char)uVar1 != '\0') + 0x7fffffff) {
    iVar3 = (int)*param_5;
    *param_2 = 0;
    iVar2 = -iVar3;
    if ((char)uVar1 == '\0') {
      iVar2 = iVar3;
    }
    *param_3 = iVar2;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 145303860 FUN_145303860 body=46 status=ok
// SIG undefined FUN_145303860(void)

undefined4 *
FUN_145303860(undefined8 param_1,undefined4 *param_2,uint *param_3,undefined8 param_4,
             longlong *param_5)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *param_3;
  lVar2 = (longlong)(int)uVar1;
  if ((int)uVar1 < 0) {
    lVar2 = (longlong)(int)~uVar1 + 1;
  }
  *param_2 = 0;
  *param_5 = lVar2;
  *(byte *)(param_5 + 1) = (byte)(uVar1 >> 0x1f);
  return param_2;
}



// FUNCTION 145303890 FUN_145303890 body=87 status=ok
// SIG undefined FUN_145303890(void)

undefined8 FUN_145303890(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1453038f0 FUN_1453038f0 body=67 status=ok
// SIG undefined FUN_1453038f0(void)

undefined4 *
FUN_1453038f0(undefined8 param_1,undefined4 *param_2,uint *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_5[1];
  if (*param_5 <= (ulonglong)((char)uVar1 != '\0') + 0x7fffffff) {
    uVar3 = (uint)*param_5;
    *param_2 = 0;
    uVar2 = -uVar3;
    if ((char)uVar1 == '\0') {
      uVar2 = uVar3;
    }
    *param_3 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 145303940 FUN_145303940 body=51 status=ok
// SIG undefined FUN_145303940(void)

undefined4 *
FUN_145303940(undefined8 param_1,undefined4 *param_2,uint *param_3,undefined8 param_4,
             longlong *param_5)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar1 = *param_3;
  uVar2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  if ((int)uVar2 < 0) {
    lVar3 = (longlong)(int)(-1 - uVar2) + 1;
  }
  else {
    lVar3 = (longlong)(int)uVar2;
  }
  *param_2 = 0;
  *param_5 = lVar3;
  *(byte *)(param_5 + 1) = (byte)uVar1 >> 7;
  return param_2;
}



// FUNCTION 145303980 FUN_145303980 body=87 status=ok
// SIG undefined FUN_145303980(void)

undefined8 FUN_145303980(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1453039e0 FUN_1453039e0 body=70 status=ok
// SIG undefined FUN_1453039e0(void)

undefined4 *
FUN_1453039e0(undefined8 param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  ulonglong uVar1;
  
  uVar1 = *param_5;
  if (uVar1 <= (ulonglong)((char)param_5[1] != '\0') + 0x7fffffffffffffff) {
    if ((char)param_5[1] != '\0') {
      uVar1 = -uVar1;
    }
    *param_3 = uVar1;
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}


